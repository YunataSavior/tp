#include "JSystem/JKernel/JKRArchive.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "ctype.h"
#include "string.h"

/* ############################################################################################## */
/* 80451420-80451428 000920 0004+04 1/1 5/5 0/0 .sbss            sCurrentDirID__10JKRArchive */
u32 JKRArchive::sCurrentDirID;

/* 802D6294-802D6334 2D0BD4 00A0+00 0/0 5/5 0/0 .text
 * __ct__10JKRArchiveFlQ210JKRArchive10EMountMode               */
JKRArchive::JKRArchive(s32 entryNumber, JKRArchive::EMountMode mountMode) {
    mIsMounted = false;
    mMountMode = mountMode;
    mMountCount = 1;
    field_0x58 = 1;

    mHeap = JKRHeap::findFromRoot(this);
    if (mHeap == NULL) {
        mHeap = JKRHeap::getCurrentHeap();
    }

    mEntryNum = entryNumber;
    if (getCurrentVolume() == NULL) {
        setCurrentVolume(this);
        setCurrentDirID(0);
    }
}

/* 802D6334-802D6394 2D0C74 0060+00 0/0 5/4 0/0 .text            __dt__10JKRArchiveFv */
JKRArchive::~JKRArchive() {}

/* 802D6394-802D63E0 2D0CD4 004C+00 4/4 0/0 0/0 .text
 * isSameName__10JKRArchiveCFRQ210JKRArchive8CArcNameUlUs       */
bool JKRArchive::isSameName(JKRArchive::CArcName& name, u32 nameOffset, u16 nameHash) const {
    u16 hash = name.getHash();
    if (hash != nameHash)
        return false;
    return strcmp(mStringTable + nameOffset, name.getString()) == 0;
}

/* 802D63E0-802D641C 2D0D20 003C+00 1/1 0/0 0/0 .text            findResType__10JKRArchiveCFUl */
JKRArchive::SDIDirEntry* JKRArchive::findResType(u32 type) const {
    SDIDirEntry* node = mNodes;
    u32 count = 0;
    while (count < mArcInfoBlock->num_nodes) {
        if (node->type == type) {
            return node;
        }

        node++;
        count++;
    }

    return NULL;
}

/* 802D641C-802D64F4 2D0D5C 00D8+00 0/0 3/3 0/0 .text            findDirectory__10JKRArchiveCFPCcUl
 */
JKRArchive::SDIDirEntry* JKRArchive::findDirectory(const char* name, u32 directoryId) const {
    if (name == NULL) {
        return mNodes + directoryId;
    }

    CArcName arcName(&name, '/');
    SDIDirEntry* dirEntry = mNodes + directoryId;
    SDIFileEntry* fileEntry = mFiles + dirEntry->first_file_index;

    for (int i = 0; i < dirEntry->num_entries; fileEntry++, i++) {
        if (isSameName(arcName, fileEntry->getNameOffset(), fileEntry->name_hash)) {
            if (fileEntry->isDirectory()) {
                return findDirectory(name, fileEntry->data_offset);
            }
            break;
        }
    }

    return NULL;
}

/* 802D64F4-802D65A4 2D0E34 00B0+00 0/0 2/2 0/0 .text findTypeResource__10JKRArchiveCFUlPCc */
JKRArchive::SDIFileEntry* JKRArchive::findTypeResource(u32 type, const char* name) const {
    if (type) {
        CArcName arcName(name);
        SDIDirEntry* dirEntry = findResType(type);

        if (dirEntry) {
            SDIFileEntry* fileEntry = mFiles + dirEntry->first_file_index;
            for (int i = 0; i < dirEntry->num_entries; fileEntry++, i++) {
                if (isSameName(arcName, fileEntry->getNameOffset(), fileEntry->getNameHash())) {
                    return fileEntry;
                }
            }
        }
    }

    return NULL;
}

/* 802D65A4-802D6684 2D0EE4 00E0+00 0/0 4/4 0/0 .text            findFsResource__10JKRArchiveCFPCcUl
 */
JKRArchive::SDIFileEntry* JKRArchive::findFsResource(const char* name, u32 directoryId) const {
    if (name) {
        CArcName arcName(&name, '/');
        SDIDirEntry* dirEntry = mNodes + directoryId;
        SDIFileEntry* fileEntry = mFiles + dirEntry->first_file_index;

        for (int i = 0; i < dirEntry->num_entries; fileEntry++, i++) {
            if (isSameName(arcName, fileEntry->getNameOffset(), fileEntry->name_hash)) {
                if (fileEntry->isDirectory()) {
                    return findFsResource(name, fileEntry->data_offset);
                }

                if (name == NULL) {
                    return fileEntry;
                }

                return NULL;
            }
        }
    }

    return NULL;
}

/* 802D6684-802D66AC 2D0FC4 0028+00 0/0 7/7 0/0 .text            findIdxResource__10JKRArchiveCFUl
 */
JKRArchive::SDIFileEntry* JKRArchive::findIdxResource(u32 fileIndex) const {
    if (fileIndex < mArcInfoBlock->num_file_entries) {
        return mFiles + fileIndex;
    }

    return NULL;
}

/* 802D66AC-802D6734 2D0FEC 0088+00 0/0 4/4 0/0 .text            findNameResource__10JKRArchiveCFPCc
 */
JKRArchive::SDIFileEntry* JKRArchive::findNameResource(const char* name) const {
    SDIFileEntry* fileEntry = mFiles;

    CArcName arcName(name);
    for (int i = 0; i < mArcInfoBlock->num_file_entries; fileEntry++, i++) {
        if (isSameName(arcName, fileEntry->getNameOffset(), fileEntry->getNameHash())) {
            return fileEntry;
        }
    }

    return NULL;
}

/* 802D6734-802D6770 2D1074 003C+00 0/0 9/9 0/0 .text            findPtrResource__10JKRArchiveCFPCv
 */
JKRArchive::SDIFileEntry* JKRArchive::findPtrResource(const void* resource) const {
    SDIFileEntry* fileEntry = mFiles;
    for (int i = 0; i < mArcInfoBlock->num_file_entries; fileEntry++, i++) {
        if (fileEntry->data == resource) {
            return fileEntry;
        }
    }

    return NULL;
}

/* 802D6770-802D67F4 2D10B0 0084+00 0/0 4/4 0/0 .text            findIdResource__10JKRArchiveCFUs */
JKRArchive::SDIFileEntry* JKRArchive::findIdResource(u16 id) const {
    if (id != 0xFFFF) {
        if (id < mArcInfoBlock->num_file_entries) {
            SDIFileEntry* fileEntry = mFiles + id;
            if (fileEntry->file_id == id && fileEntry->isUnknownFlag1()) {
                return fileEntry;
            }
        }

        SDIFileEntry* fileEntry = mFiles;
        for (int i = 0; i < mArcInfoBlock->num_file_entries; fileEntry++, i++) {
            if (fileEntry->file_id == id && fileEntry->isUnknownFlag1()) {
                return fileEntry;
            }
        }
    }

    return NULL;
}

/* 802D67F4-802D6884 2D1134 0090+00 2/2 0/0 0/0 .text            store__Q210JKRArchive8CArcNameFPCc
 */
void JKRArchive::CArcName::store(const char* name) {
    mHash = 0;
    s32 length = 0;
    while (*name) {
        s32 ch = tolower(*name);
        mHash = ch + mHash * 3;
        if (length < (s32)ARRAY_SIZE(mData)) {
            mData[length++] = ch;
        }
        name++;
    }

    mLength = (u16)length;
    mData[length] = 0;
}

/* 802D6884-802D693C 2D11C4 00B8+00 2/2 0/0 0/0 .text            store__Q210JKRArchive8CArcNameFPCcc
 */
const char* JKRArchive::CArcName::store(const char* name, char endChar) {
    mHash = 0;
    s32 length = 0;
    while (*name && *name != endChar) {
        s32 lch = tolower((int)*name);
        mHash = lch + mHash * 3;
        if (length < (s32)ARRAY_SIZE(mData)) {
            mData[length++] = lch;
        }
        name++;
    }

    mLength = (u16)length;
    mData[length] = 0;

    if (*name == 0)
        return NULL;
    return name + 1;
}

/* 802D693C-802D6978 2D127C 003C+00 0/0 5/0 0/0 .text
 * setExpandSize__10JKRArchiveFPQ210JKRArchive12SDIFileEntryUl  */
void JKRArchive::setExpandSize(SDIFileEntry* fileEntry, u32 expandSize) {
    int index = fileEntry - mFiles;
    if (!mExpandedSize || index >= mArcInfoBlock->num_file_entries)
        return;

    mExpandedSize[index] = expandSize;
}

/* 802D6978-802D69B8 2D12B8 0040+00 0/0 5/0 0/0 .text
 * getExpandSize__10JKRArchiveCFPQ210JKRArchive12SDIFileEntry   */
u32 JKRArchive::getExpandSize(SDIFileEntry* fileEntry) const {
    int index = fileEntry - mFiles;
    if (!mExpandedSize || index >= mArcInfoBlock->num_file_entries)
        return 0;

    return mExpandedSize[index];
}