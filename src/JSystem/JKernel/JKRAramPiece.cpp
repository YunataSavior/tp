#include "JSystem/JKernel/JKRAramPiece.h"
#include "JSystem/JKernel/JKRAram.h"
#include "JSystem/JKernel/JKRDecomp.h"
#include "JSystem/JUtility/JUTException.h"
#include "dolphin/os.h"

/* 802D3574-802D35F4 2CDEB4 0080+00 1/1 0/0 0/0 .text
 * prepareCommand__12JKRAramPieceFiUlUlUlP12JKRAramBlockPFUl_v  */
JKRAMCommand* JKRAramPiece::prepareCommand(int direction, u32 src, u32 dst, u32 length,
                                           JKRAramBlock* block,
                                           JKRAMCommand::AsyncCallback callback) {
    JKRAMCommand* command = new (JKRHeap::getSystemHeap(), -4) JKRAMCommand();
    command->mTransferDirection = direction;
    command->mSrc = src;
    command->mDst = dst;
    command->mAramBlock = block;
    command->mDataLength = length;
    command->mCallback = callback;
    return command;
}

/* 802D35F4-802D3614 2CDF34 0020+00 0/0 1/1 0/0 .text sendCommand__12JKRAramPieceFP12JKRAMCommand
 */
void JKRAramPiece::sendCommand(JKRAMCommand* command) {
    startDMA(command);
}

/* 80434324-80434330 061044 000C+00 3/3 0/0 0/0 .bss sAramPieceCommandList__12JKRAramPiece */
// JSUList<JKRAMCommand> JKRAramPiece::sAramPieceCommandList;
JSUList<JKRAMCommand> JKRAramPiece::sAramPieceCommandList;

/* 80434330-80434348 061050 0018+00 3/3 0/0 0/0 .bss             mMutex__12JKRAramPiece */
OSMutex JKRAramPiece::mMutex;

/* 802D3614-802D3770 2CDF54 015C+00 1/1 0/0 0/0 .text
 * orderAsync__12JKRAramPieceFiUlUlUlP12JKRAramBlockPFUl_v      */
JKRAMCommand* JKRAramPiece::orderAsync(int direction, u32 source, u32 destination, u32 length,
                                       JKRAramBlock* block, JKRAMCommand::AsyncCallback callback) {
    lock();
    if ((source & 0x1f) != 0 || (destination & 0x1f) != 0) {
        OSReport("direction = %x\n", direction);
        OSReport("source = %x\n", source);
        OSReport("destination = %x\n", destination);
        OSReport("length = %x\n", length);
        JUTException::panic(__FILE__, 108, "illegal address. abort.");
    }

    Message* message = new (JKRHeap::getSystemHeap(), -4) Message();
    JKRAMCommand* command =
        JKRAramPiece::prepareCommand(direction, source, destination, length, block, callback);
    message->field_0x00 = 1;
    message->command = command;

    OSSendMessage(&JKRAram::sMessageQueue, message, OS_MESSAGE_BLOCK);
    if (command->mCallback != NULL) {
        sAramPieceCommandList.append(&command->mPieceLink);
    }

    unlock();
    return command;
}

/* 802D3770-802D3838 2CE0B0 00C8+00 1/1 0/0 0/0 .text sync__12JKRAramPieceFP12JKRAMCommandi */
BOOL JKRAramPiece::sync(JKRAMCommand* command, int is_non_blocking) {
    OSMessage message;

    lock();
    if (is_non_blocking == 0) {
        OSReceiveMessage(&command->mMessageQueue, &message, OS_MESSAGE_BLOCK);
        sAramPieceCommandList.remove(&command->mPieceLink);
        unlock();
        return TRUE;
    }

    BOOL result = OSReceiveMessage(&command->mMessageQueue, &message, OS_MESSAGE_NOBLOCK);
    if (!result) {
        unlock();
        return FALSE;
    }

    sAramPieceCommandList.remove(&command->mPieceLink);
    unlock();
    return TRUE;
}

/* 802D3838-802D38CC 2CE178 0094+00 0/0 6/6 0/0 .text
 * orderSync__12JKRAramPieceFiUlUlUlP12JKRAramBlock             */
BOOL JKRAramPiece::orderSync(int direction, u32 source, u32 destination, u32 length,
                             JKRAramBlock* block) {
    lock();

    JKRAMCommand* command =
        JKRAramPiece::orderAsync(direction, source, destination, length, block, NULL);
    BOOL result = JKRAramPiece::sync(command, 0);
    delete command;

    unlock();
    return result;
}

/* 802D38CC-802D3944 2CE20C 0078+00 1/1 1/1 0/0 .text startDMA__12JKRAramPieceFP12JKRAMCommand */
void JKRAramPiece::startDMA(JKRAMCommand* command) {
    if (command->mTransferDirection == 1) {
        DCInvalidateRange((void*)command->mDst, command->mDataLength);
    } else {
        DCStoreRange((void*)command->mSrc, command->mDataLength);
    }

    ARQPostRequest(&command->mRequest, 0, command->mTransferDirection, 0, command->mSrc,
                   command->mDst, command->mDataLength, JKRAramPiece::doneDMA);
}

/* 802D3944-802D39EC 2CE284 00A8+00 1/1 0/0 0/0 .text            doneDMA__12JKRAramPieceFUl */
void JKRAramPiece::doneDMA(u32 requestAddress) {
    JKRAMCommand* command = (JKRAMCommand*)requestAddress;

    if (command->mTransferDirection == 1) {
        DCInvalidateRange((void*)command->mDst, command->mDataLength);
    }

    if (command->field_0x60 != 0) {
        if (command->field_0x60 == 2) {
            JKRDecomp::sendCommand(command->mDecompCommand);
        }
        return;
    }

    if (command->mCallback) {
        (*command->mCallback)(requestAddress);
    } else if (command->field_0x5C) {
        OSSendMessage(command->field_0x5C, command, OS_MESSAGE_NOBLOCK);
    } else {
        OSSendMessage(&command->mMessageQueue, command, OS_MESSAGE_NOBLOCK);
    }
}

/* 802D39EC-802D3A5C 2CE32C 0070+00 1/1 0/0 0/0 .text            __ct__12JKRAMCommandFv */
JKRAMCommand::JKRAMCommand() : mPieceLink(this), field_0x30(this) {
    OSInitMessageQueue(&mMessageQueue, &mMessage, 1);
    mCallback = NULL;
    field_0x5C = NULL;
    field_0x60 = 0;
    field_0x8C = NULL;
    field_0x90 = NULL;
    field_0x94 = NULL;
}

/* 802D3A5C-802D3B04 2CE39C 00A8+00 1/1 0/0 0/0 .text            __dt__12JKRAMCommandFv */
JKRAMCommand::~JKRAMCommand() {
    if (field_0x8C)
        delete field_0x8C;
    if (field_0x90)
        delete field_0x90;

    if (field_0x94)
        JKRHeap::free(field_0x94, NULL);
}