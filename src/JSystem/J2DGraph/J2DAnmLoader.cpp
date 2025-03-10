//
// J2DAnmLoader
//

#include "JSystem/J2DGraph/J2DAnmLoader.h"
#include "JSystem/JSupport/JSupport.h"

/* 80308A6C-80309290 3033AC 0824+00 0/0 26/26 2/2 .text            load__20J2DAnmLoaderDataBaseFPCv
 */
J2DAnmBase* J2DAnmLoaderDataBase::load(void const* p_data) {
    const J3DAnmDataHeader* hdr = (const J3DAnmDataHeader*)p_data;

    if (hdr == NULL) {
        return NULL;
    } else if (hdr->mMagic == 'J3D1') {
        switch (hdr->mType) {
        case 'bck1': {
            J2DAnmKeyLoader_v15 loader;
            loader.mpResource = new J2DAnmTransformKey();
            return (J2DAnmBase*)loader.load(p_data);
            break;
        }
        case 'bpk1': {
            J2DAnmKeyLoader_v15 loader;
            loader.mpResource = new J2DAnmColorKey();
            return (J2DAnmBase*)loader.load(p_data);
            break;
        }
        case 'blk1':
            return NULL;
        case 'btk1': {
            J2DAnmKeyLoader_v15 loader;
            loader.mpResource = new J2DAnmTextureSRTKey();
            return (J2DAnmBase*)loader.load(p_data);
            break;
        }
        case 'brk1': {
            J2DAnmKeyLoader_v15 loader;
            loader.mpResource = new J2DAnmTevRegKey();
            return (J2DAnmBase*)loader.load(p_data);
            break;
        }
        case 'bxk1': {
            J2DAnmKeyLoader_v15 loader;
            loader.mpResource = new J2DAnmVtxColorKey();
            return (J2DAnmBase*)loader.load(p_data);
            break;
        }
        case 'bca1': {
            J2DAnmFullLoader_v15 loader;
            loader.mpResource = new J2DAnmTransformFull();
            return (J2DAnmBase*)loader.load(p_data);
            break;
        }
        case 'bpa1': {
            J2DAnmFullLoader_v15 loader;
            loader.mpResource = new J2DAnmColorFull();
            return (J2DAnmBase*)loader.load(p_data);
            break;
        }
        case 'btp1': {
            J2DAnmFullLoader_v15 loader;
            loader.mpResource = new J2DAnmTexPattern();
            return (J2DAnmBase*)loader.load(p_data);
        }
        case 'bva1': {
            J2DAnmFullLoader_v15 loader;
            loader.mpResource = new J2DAnmVisibilityFull();
            return (J2DAnmBase*)loader.load(p_data);
            break;
        }
        case 'bla1':
            return NULL;
        case 'bxa1': {
            J2DAnmFullLoader_v15 loader;
            loader.mpResource = new J2DAnmVtxColorFull();
            return (J2DAnmBase*)loader.load(p_data);
        }
        }
        return NULL;
    } else {
        return NULL;
    }
}

/* 80309290-803092AC 303BD0 001C+00 1/1 0/0 0/0 .text            __ct__19J2DAnmKeyLoader_v15Fv */
J2DAnmKeyLoader_v15::J2DAnmKeyLoader_v15() {}

/* 803092AC-80309308 303BEC 005C+00 2/1 0/0 0/0 .text            __dt__19J2DAnmKeyLoader_v15Fv */
J2DAnmKeyLoader_v15::~J2DAnmKeyLoader_v15() {}

/* 80309308-80309414 303C48 010C+00 2/1 0/0 0/0 .text            load__19J2DAnmKeyLoader_v15FPCv */
void* J2DAnmKeyLoader_v15::load(void const* p_data) {
    const J3DAnmDataHeader* hdr = (const J3DAnmDataHeader*)p_data;
    const J3DAnmDataBlockHeader* dataPtr = &hdr->mFirst;

    for (s32 i = 0; i < hdr->mCount; i++) {
        switch (dataPtr->mType) {
        case 'ANK1':
            readAnmTransform((J3DAnmTransformKeyData*)dataPtr);
            break;
        case 'PAK1':
            readAnmColor((J3DAnmColorKeyData*)dataPtr);
            break;
        case 'TTK1':
            readAnmTextureSRT((J3DAnmTextureSRTKeyData*)dataPtr);
            break;
        case 'VCK1':
            readAnmVtxColor((J3DAnmVtxColorKeyData*)dataPtr);
            break;
        case 'TRK1':
            readAnmTevReg((J3DAnmTevRegKeyData*)dataPtr);
            break;
        }
        dataPtr = (J3DAnmDataBlockHeader*)((s32)dataPtr + dataPtr->mNextOffset);
    }

    return mpResource;
}

/* 80309414-80309570 303D54 015C+00 1/0 0/0 0/0 .text
 * setResource__19J2DAnmKeyLoader_v15FP10J2DAnmBasePCv          */
void J2DAnmKeyLoader_v15::setResource(J2DAnmBase* p_anm, void const* p_data) {
    const J3DAnmDataHeader* hdr = (const J3DAnmDataHeader*)p_data;
    const J3DAnmDataBlockHeader* dataPtr = &hdr->mFirst;

    for (s32 i = 0; i < hdr->mCount; i++) {
        switch (dataPtr->mType) {
        case 'ANK1':
            if (p_anm->getKind() == KIND_TRANSFORM) {
                setAnmTransform((J2DAnmTransformKey*)p_anm, (J3DAnmTransformKeyData*)dataPtr);
            }
            break;
        case 'PAK1':
            if (p_anm->getKind() == KIND_COLOR) {
                setAnmColor((J2DAnmColorKey*)p_anm, (J3DAnmColorKeyData*)dataPtr);
            }
            break;
        case 'TTK1':
            if (p_anm->getKind() == KIND_TEXTURE_SRT) {
                setAnmTextureSRT((J2DAnmTextureSRTKey*)p_anm,
                                       (J3DAnmTextureSRTKeyData*)dataPtr);
            }
            break;
        case 'TRK1':
            if (p_anm->getKind() == KIND_TEV_REG) {
                setAnmTevReg((J2DAnmTevRegKey*)p_anm, (J3DAnmTevRegKeyData*)dataPtr);
            }
            break;
        case 'VCK1':
            if (p_anm->getKind() == KIND_VTX_COLOR) {
                setAnmVtxColor((J2DAnmVtxColorKey*)p_anm, (J3DAnmVtxColorKeyData*)dataPtr);
            }
            break;
        }
        dataPtr = (J3DAnmDataBlockHeader*)((s32)dataPtr + dataPtr->mNextOffset);
    }
}

/* 80309570-80309598 303EB0 0028+00 1/1 0/0 0/0 .text
 * readAnmTransform__19J2DAnmKeyLoader_v15FPC22J3DAnmTransformKeyData */
void J2DAnmKeyLoader_v15::readAnmTransform(J3DAnmTransformKeyData const* p_data) {
    setAnmTransform((J2DAnmTransformKey*)mpResource, p_data);
}

/* 80309598-80309634 303ED8 009C+00 2/2 0/0 0/0 .text
 * setAnmTransform__19J2DAnmKeyLoader_v15FP18J2DAnmTransformKeyPC22J3DAnmTransformKeyData */
void J2DAnmKeyLoader_v15::setAnmTransform(J2DAnmTransformKey* p_anm,
                                          J3DAnmTransformKeyData const* p_data) {
    p_anm->field_0x22 = p_data->field_0xc;
    p_anm->mFrameMax = p_data->mFrameMax;
    p_anm->field_0x4 = p_data->field_0x8;
    p_anm->field_0x24 = p_data->field_0x9;
    p_anm->mFrame = 0;
    p_anm->mInfoTable =
        JSUConvertOffsetToPtr<J3DAnmTransformKeyTable>(p_data, (void*)p_data->mTableOffset);
    p_anm->mScaleValues = JSUConvertOffsetToPtr<f32>(p_data, (void*)p_data->field_0x18);
    p_anm->mRotationValues = JSUConvertOffsetToPtr<s16>(p_data, (void*)p_data->field_0x1c);
    p_anm->mTranslateValues =
        JSUConvertOffsetToPtr<f32>(p_data, (void*)p_data->field_0x20);
}

/* 80309634-8030965C 303F74 0028+00 1/1 0/0 0/0 .text
 * readAnmTextureSRT__19J2DAnmKeyLoader_v15FPC23J3DAnmTextureSRTKeyData */
void J2DAnmKeyLoader_v15::readAnmTextureSRT(J3DAnmTextureSRTKeyData const* p_data) {
    setAnmTextureSRT((J2DAnmTextureSRTKey*)mpResource, p_data);
}

/* 8030965C-80309848 303F9C 01EC+00 2/2 0/0 0/0 .text
 * setAnmTextureSRT__19J2DAnmKeyLoader_v15FP19J2DAnmTextureSRTKeyPC23J3DAnmTextureSRTKeyData */
void J2DAnmKeyLoader_v15::setAnmTextureSRT(J2DAnmTextureSRTKey* p_anm,
                                           J3DAnmTextureSRTKeyData const* p_data) {
    p_anm->mUpdateMaterialNum = p_data->field_0xc;
    p_anm->mFrameMax = p_data->field_0xa;
    p_anm->field_0x4 = p_data->field_0x8;
    p_anm->field_0x10 = p_data->field_0x9;
    p_anm->mFrame = 0;
    p_anm->mUpdateMaterialNum = p_data->field_0xc;
    p_anm->field_0x1a = p_data->field_0xe;
    p_anm->field_0x1c = p_data->field_0x10;
    p_anm->field_0x1e = p_data->field_0x12;
    p_anm->mInfoTable =
        JSUConvertOffsetToPtr<J3DAnmTransformKeyTable>(p_data, (void*)p_data->mTableOffset);
    p_anm->mUpdateMaterialID = JSUConvertOffsetToPtr<u16>(p_data, (void*)p_data->mUpdateMatIDOffset);
    p_anm->field_0x34.setResource(
        JSUConvertOffsetToPtr<ResNTAB>(p_data, (void*)p_data->mNameTab1Offset));
    p_anm->mUpdateTexMtxID = JSUConvertOffsetToPtr<u8>(p_data, p_data->mUpdateTexMtxIDOffset);
    p_anm->field_0x44 = JSUConvertOffsetToPtr<Vec>(p_data, (void*)p_data->unkOffset);
    p_anm->mScaleValues = JSUConvertOffsetToPtr<f32>(p_data, (void*)p_data->mScaleValOffset);
    p_anm->mRotationValues = JSUConvertOffsetToPtr<s16>(p_data, (void*)p_data->mRotValOffset);
    p_anm->mTranslationValues = JSUConvertOffsetToPtr<f32>(p_data, (void*)p_data->mTransValOffset);
    if (p_data->mNameTab2Offset != 0) {
        p_anm->field_0x68.setResource(
            JSUConvertOffsetToPtr<ResNTAB>(p_data, (void*)p_data->mNameTab2Offset));
    }
    p_anm->field_0x4e = p_data->field_0x34;
    p_anm->field_0x48 = p_data->field_0x36;
    p_anm->field_0x4a = p_data->field_0x38;
    p_anm->field_0x4c = p_data->field_0x3a;
    p_anm->field_0x5c =
        JSUConvertOffsetToPtr<J3DAnmTransformKeyTable>(p_data, (void*)p_data->mInfoTable2Offset);
    p_anm->field_0x64 = JSUConvertOffsetToPtr<u16>(p_data, (void*)p_data->field_0x40);
    p_anm->field_0x60 = JSUConvertOffsetToPtr<u8>(p_data, p_data->field_0x48);
    p_anm->field_0x78 = JSUConvertOffsetToPtr<Vec>(p_data, (void*)p_data->field_0x4c);
    p_anm->field_0x50 = JSUConvertOffsetToPtr<f32>(p_data, (void*)p_data->field_0x50);
    p_anm->field_0x54 = JSUConvertOffsetToPtr<s16>(p_data, (void*)p_data->field_0x54);
    p_anm->field_0x58 = JSUConvertOffsetToPtr<f32>(p_data, (void*)p_data->field_0x58);
    switch (p_data->field_0x5c) {
    case 0:
        p_anm->field_0x7c = 0;
        break;
    case 1:
        p_anm->field_0x7c = 1;
        break;
    default:
        p_anm->field_0x7c = 0;
        break;
    }
}

/* 80309848-80309870 304188 0028+00 1/1 0/0 0/0 .text
 * readAnmColor__19J2DAnmKeyLoader_v15FPC18J3DAnmColorKeyData   */
void J2DAnmKeyLoader_v15::readAnmColor(J3DAnmColorKeyData const* p_data) {
    setAnmColor((J2DAnmColorKey*)mpResource, p_data);
}

/* 80309870-8030995C 3041B0 00EC+00 2/2 0/0 0/0 .text
 * setAnmColor__19J2DAnmKeyLoader_v15FP14J2DAnmColorKeyPC18J3DAnmColorKeyData */
void J2DAnmKeyLoader_v15::setAnmColor(J2DAnmColorKey* p_anm, J3DAnmColorKeyData const* p_data) {
    p_anm->mFrameMax = p_data->mFrameMax;
    p_anm->field_0x4 = p_data->field_0x8;
    p_anm->mFrame = 0;
    p_anm->mUpdateMaterialNum = p_data->mUpdateMaterialNum;
    p_anm->field_0x10 = p_data->field_0x10;
    p_anm->field_0x12 = p_data->field_0x12;
    p_anm->field_0x14 = p_data->field_0x14;
    p_anm->field_0x16 = p_data->field_0x16;
    p_anm->mInfoTable =
        JSUConvertOffsetToPtr<J3DAnmColorKeyTable>(p_data, (void*)p_data->mTableOffset);
    p_anm->mRValues = JSUConvertOffsetToPtr<s16>(p_data, (void*)p_data->mRValOffset);
    p_anm->mGValues = JSUConvertOffsetToPtr<s16>(p_data, (void*)p_data->mGValOffset);
    p_anm->mBValues = JSUConvertOffsetToPtr<s16>(p_data, (void*)p_data->mBValOffset);
    p_anm->mAValues = JSUConvertOffsetToPtr<s16>(p_data, (void*)p_data->mAValOffset);
    p_anm->mUpdateMaterialID =
        JSUConvertOffsetToPtr<u16>(p_data, (void*)p_data->mUpdateMaterialIDOffset);
    p_anm->field_0x20.setResource(
        JSUConvertOffsetToPtr<ResNTAB>(p_data, (void*)p_data->mNameTabOffset));
}

/* 8030995C-80309984 30429C 0028+00 1/1 0/0 0/0 .text
 * readAnmVtxColor__19J2DAnmKeyLoader_v15FPC21J3DAnmVtxColorKeyData */
void J2DAnmKeyLoader_v15::readAnmVtxColor(J3DAnmVtxColorKeyData const* p_data) {
    setAnmVtxColor((J2DAnmVtxColorKey*)mpResource, p_data);
}

/* 80309984-80309A80 3042C4 00FC+00 2/2 0/0 0/0 .text
 * setAnmVtxColor__19J2DAnmKeyLoader_v15FP17J2DAnmVtxColorKeyPC21J3DAnmVtxColorKeyData */
void J2DAnmKeyLoader_v15::setAnmVtxColor(J2DAnmVtxColorKey* p_anm,
                                         J3DAnmVtxColorKeyData const* p_data) {
    p_anm->mFrameMax = p_data->mFrameMax;
    p_anm->field_0x4 = p_data->field_0x8;
    p_anm->mFrame = 0;
    p_anm->mAnmTableNum[0] = p_data->mAnmTableNum[0];
    p_anm->mAnmTableNum[1] = p_data->mAnmTableNum[1];
    p_anm->mInfoTable[0] =
        JSUConvertOffsetToPtr<J3DAnmColorKeyTable>(p_data, (void*)p_data->mTableOffsets[0]);
    p_anm->mInfoTable[1] =
        JSUConvertOffsetToPtr<J3DAnmColorKeyTable>(p_data, (void*)p_data->mTableOffsets[1]);
    p_anm->mVtxColorIndexData[0] = JSUConvertOffsetToPtr<J3DAnmVtxColorIndexData>(
        p_data, (void*)p_data->mVtxColoIndexDataOffset[0]);
    p_anm->mVtxColorIndexData[1] = JSUConvertOffsetToPtr<J3DAnmVtxColorIndexData>(
        p_data, (void*)p_data->mVtxColoIndexDataOffset[1]);
    p_anm->mVtxColorIndexPointer[0] =
        JSUConvertOffsetToPtr<u16>(p_data, (void*)p_data->mVtxColoIndexPointerOffset[0]);
    p_anm->mVtxColorIndexPointer[1] =
        JSUConvertOffsetToPtr<u16>(p_data, (void*)p_data->mVtxColoIndexPointerOffset[1]);
    p_anm->mRValues = JSUConvertOffsetToPtr<s16>(p_data, (void*)p_data->mRValOffset);
    p_anm->mGValues = JSUConvertOffsetToPtr<s16>(p_data, (void*)p_data->mGValOffset);
    p_anm->mBValues = JSUConvertOffsetToPtr<s16>(p_data, (void*)p_data->mBValOffset);
    p_anm->mAValues = JSUConvertOffsetToPtr<s16>(p_data, (void*)p_data->mAValOffset);
}

/* 80309A80-80309B8C 3043C0 010C+00 2/1 0/0 0/0 .text            load__20J2DAnmFullLoader_v15FPCv */
void* J2DAnmFullLoader_v15::load(void const* p_data) {
    const J3DAnmDataHeader* hdr = (const J3DAnmDataHeader*)p_data;
    const J3DAnmDataBlockHeader* dataPtr = &hdr->mFirst;

    for (s32 i = 0; i < hdr->mCount; i++) {
        switch (dataPtr->mType) {
        case 'ANF1':
            readAnmTransform((J3DAnmTransformFullData*)dataPtr);
            break;
        case 'PAF1':
            readAnmColor((J3DAnmColorFullData*)dataPtr);
            break;
        case 'TPT1':
            readAnmTexPattern((J3DAnmTexPatternFullData*)dataPtr);
            break;
        case 'VAF1':
            readAnmVisibility((J3DAnmVisibilityFullData*)dataPtr);
            break;
        case 'VCF1':
            readAnmVtxColor((J3DAnmVtxColorFullData*)dataPtr);
            break;
        }
        dataPtr = (J3DAnmDataBlockHeader*)((s32)dataPtr + dataPtr->mNextOffset);
    }
    return mpResource;
}

/* 80309B8C-80309CE8 3044CC 015C+00 1/0 0/0 0/0 .text
 * setResource__20J2DAnmFullLoader_v15FP10J2DAnmBasePCv         */
void J2DAnmFullLoader_v15::setResource(J2DAnmBase* p_anm, void const* p_data) {
    const J3DAnmDataHeader* hdr = (const J3DAnmDataHeader*)p_data;
    const J3DAnmDataBlockHeader* dataPtr = &hdr->mFirst;

    for (s32 i = 0; i < hdr->mCount; i++) {
        switch (dataPtr->mType) {
        case 'ANF1':
            if (p_anm->getKind() == KIND_TRANSFORM)
                setAnmTransform((J2DAnmTransformFull*)p_anm,
                                      (J3DAnmTransformFullData*)dataPtr);
            break;
        case 'PAF1':
            if (p_anm->getKind() == KIND_COLOR)
                setAnmColor((J2DAnmColorFull*)p_anm, (J3DAnmColorFullData*)dataPtr);
            break;
        case 'TPT1':
            if (p_anm->getKind() == KIND_TEX_PATTERN)
                setAnmTexPattern((J2DAnmTexPattern*)p_anm, (J3DAnmTexPatternFullData*)dataPtr);
            break;
        case 'VAF1':
            if (p_anm->getKind() == KIND_VISIBILITY)
                setAnmVisibility((J2DAnmVisibilityFull*)p_anm,
                                       (J3DAnmVisibilityFullData*)dataPtr);
            break;
        case 'VCF1':
            if (p_anm->getKind() == KIND_VTX_COLOR)
                setAnmVtxColor((J2DAnmVtxColorFull*)p_anm, (J3DAnmVtxColorFullData*)dataPtr);
            break;
        }
        dataPtr = (J3DAnmDataBlockHeader*)((s32)dataPtr + dataPtr->mNextOffset);
    }
}

/* 80309CE8-80309D04 304628 001C+00 1/1 0/0 0/0 .text            __ct__20J2DAnmFullLoader_v15Fv */
J2DAnmFullLoader_v15::J2DAnmFullLoader_v15() {}

/* 80309D04-80309D60 304644 005C+00 2/1 0/0 0/0 .text            __dt__20J2DAnmFullLoader_v15Fv */
J2DAnmFullLoader_v15::~J2DAnmFullLoader_v15() {}

/* 80309D60-80309D88 3046A0 0028+00 1/1 0/0 0/0 .text
 * readAnmTransform__20J2DAnmFullLoader_v15FPC23J3DAnmTransformFullData */
void J2DAnmFullLoader_v15::readAnmTransform(J3DAnmTransformFullData const* p_data) {
    setAnmTransform((J2DAnmTransformFull*)mpResource, p_data);
}

/* 80309D88-80309E1C 3046C8 0094+00 2/2 0/0 0/0 .text
 * setAnmTransform__20J2DAnmFullLoader_v15FP19J2DAnmTransformFullPC23J3DAnmTransformFullData */
void J2DAnmFullLoader_v15::setAnmTransform(J2DAnmTransformFull* p_anm,
                                           J3DAnmTransformFullData const* p_data) {
    p_anm->field_0x22 = p_data->field_0xc;
    p_anm->mFrameMax = p_data->mFrameMax;
    p_anm->field_0x4 = p_data->field_0x8;
    p_anm->mFrame = 0;
    p_anm->mTableInfo =
        JSUConvertOffsetToPtr<J3DAnmTransformFullTable>(p_data, (void*)p_data->mTableOffset);
    p_anm->mScaleValues = JSUConvertOffsetToPtr<f32>(p_data, (void*)p_data->mScaleValOffset);
    p_anm->mRotationValues = JSUConvertOffsetToPtr<s16>(p_data, (void*)p_data->mRotValOffset);
    p_anm->mTranslateValues = JSUConvertOffsetToPtr<f32>(p_data, (void*)p_data->mTransValOffset);
}

/* 80309E1C-80309E44 30475C 0028+00 1/1 0/0 0/0 .text
 * readAnmColor__20J2DAnmFullLoader_v15FPC19J3DAnmColorFullData */
void J2DAnmFullLoader_v15::readAnmColor(J3DAnmColorFullData const* p_data) {
    setAnmColor((J2DAnmColorFull*)mpResource, p_data);
}

/* 80309E44-80309F10 304784 00CC+00 2/2 0/0 0/0 .text
 * setAnmColor__20J2DAnmFullLoader_v15FP15J2DAnmColorFullPC19J3DAnmColorFullData */
void J2DAnmFullLoader_v15::setAnmColor(J2DAnmColorFull* p_anm, J3DAnmColorFullData const* p_data) {
    p_anm->mFrameMax = p_data->mFrameMax;
    p_anm->field_0x4 = p_data->field_0x8;
    p_anm->mFrame = 0;
    p_anm->mUpdateMaterialNum = p_data->mUpdateMaterialNum;
    p_anm->mInfoTable =
        JSUConvertOffsetToPtr<J3DAnmColorFullTable>(p_data, (void*)p_data->mTableOffset);
    p_anm->mRValues = JSUConvertOffsetToPtr<u8>(p_data, p_data->mRValuesOffset);
    p_anm->mGValues = JSUConvertOffsetToPtr<u8>(p_data, p_data->mGValuesOffset);
    p_anm->mBValues = JSUConvertOffsetToPtr<u8>(p_data, p_data->mBValuesOffset);
    p_anm->mAValues = JSUConvertOffsetToPtr<u8>(p_data, p_data->mAValuesOffset);
    p_anm->mUpdateMaterialID =
        JSUConvertOffsetToPtr<u16>(p_data, (void*)p_data->mUpdateMaterialIDOffset);
    p_anm->field_0x20.setResource(
        JSUConvertOffsetToPtr<ResNTAB>(p_data, (void*)p_data->mNameTabOffset));
}

/* 80309F10-80309F38 304850 0028+00 1/1 0/0 0/0 .text
 * readAnmTexPattern__20J2DAnmFullLoader_v15FPC24J3DAnmTexPatternFullData */
void J2DAnmFullLoader_v15::readAnmTexPattern(J3DAnmTexPatternFullData const* p_data) {
    setAnmTexPattern((J2DAnmTexPattern*)mpResource, p_data);
}

/* 80309F38-80309FDC 304878 00A4+00 2/2 0/0 0/0 .text
 * setAnmTexPattern__20J2DAnmFullLoader_v15FP16J2DAnmTexPatternPC24J3DAnmTexPatternFullData */
void J2DAnmFullLoader_v15::setAnmTexPattern(J2DAnmTexPattern* p_anm,
                                            J3DAnmTexPatternFullData const* p_data) {
    p_anm->mFrameMax = p_data->mFrameMax;
    p_anm->field_0x4 = p_data->field_0x8;
    p_anm->mFrame = 0;
    p_anm->mUpdateMaterialNum = p_data->field_0xc;
    p_anm->field_0x18 = p_data->field_0xe;
    p_anm->mAnmTable =
        JSUConvertOffsetToPtr<J3DAnmTexPatternFullTable>(p_data, (void*)p_data->mTableOffset);
    p_anm->mValues = JSUConvertOffsetToPtr<u16>(p_data, (void*)p_data->mValuesOffset);
    p_anm->mUpdateMaterialID =
        JSUConvertOffsetToPtr<u16>(p_data, (void*)p_data->mUpdateMaterialIDOffset);
    p_anm->field_0x20.setResource(
        JSUConvertOffsetToPtr<ResNTAB>(p_data, (void*)p_data->mNameTabOffset));
}

/* 80309FDC-8030A004 30491C 0028+00 1/1 0/0 0/0 .text
 * readAnmTevReg__19J2DAnmKeyLoader_v15FPC19J3DAnmTevRegKeyData */
void J2DAnmKeyLoader_v15::readAnmTevReg(J3DAnmTevRegKeyData const* p_data) {
    setAnmTevReg((J2DAnmTevRegKey*)mpResource, p_data);
}

/* 8030A004-8030A190 304944 018C+00 2/2 0/0 0/0 .text
 * setAnmTevReg__19J2DAnmKeyLoader_v15FP15J2DAnmTevRegKeyPC19J3DAnmTevRegKeyData */
void J2DAnmKeyLoader_v15::setAnmTevReg(J2DAnmTevRegKey* p_anm, J3DAnmTevRegKeyData const* p_data) {
    p_anm->mFrameMax = p_data->mFrameMax;
    p_anm->field_0x4 = p_data->field_0x8;
    p_anm->mFrame = 0;
    p_anm->mCRegUpdateMaterialNum = p_data->mCRegUpdateMaterialNum;
    p_anm->mAnmCRegKeyTable =
        JSUConvertOffsetToPtr<J3DAnmCRegKeyTable>(p_data, (void*)p_data->mCRegTableOffset);
    p_anm->mCRegUpdateMaterialID =
        JSUConvertOffsetToPtr<u16>(p_data, (void*)p_data->mCRegUpdateMaterialIDOffset);
    p_anm->mCRegNameTab.setResource(
        JSUConvertOffsetToPtr<ResNTAB>(p_data, (void*)p_data->mCRegNameTabOffset));
    p_anm->mKRegUpdateMaterialNum = p_data->mKRegUpdateMaterialNum;
    p_anm->mAnmKRegKeyTable =
        JSUConvertOffsetToPtr<J3DAnmKRegKeyTable>(p_data, (void*)p_data->mKRegTableOffset);
    p_anm->mKRegUpdateMaterialID =
        JSUConvertOffsetToPtr<u16>(p_data, (void*)p_data->mKRegUpdateMaterialIDOffset);
    p_anm->mKRegNameTab.setResource(
        JSUConvertOffsetToPtr<ResNTAB>(p_data, (void*)p_data->mKRegNameTabOffset));
    p_anm->field_0x14 = p_data->field_0x10;
    p_anm->field_0x16 = p_data->field_0x12;
    p_anm->field_0x18 = p_data->field_0x14;
    p_anm->field_0x1a = p_data->field_0x16;
    p_anm->mCRValues = JSUConvertOffsetToPtr<s16>(p_data, (void*)p_data->mCRValuesOffset);
    p_anm->mCGValues = JSUConvertOffsetToPtr<s16>(p_data, (void*)p_data->mCGValuesOffset);
    p_anm->mCBValues = JSUConvertOffsetToPtr<s16>(p_data, (void*)p_data->mCBValuesOffset);
    p_anm->mCAValues = JSUConvertOffsetToPtr<s16>(p_data, (void*)p_data->mCAValuesOffset);
    p_anm->field_0x1c = p_data->field_0x18;
    p_anm->field_0x1e = p_data->field_0x1a;
    p_anm->field_0x20 = p_data->field_0x1c;
    p_anm->field_0x22 = p_data->field_0x1e;
    p_anm->mKRValues = JSUConvertOffsetToPtr<s16>(p_data, (void*)p_data->mKRValuesOffset);
    p_anm->mKGValues = JSUConvertOffsetToPtr<s16>(p_data, (void*)p_data->mKGValuesOffset);
    p_anm->mKBValues = JSUConvertOffsetToPtr<s16>(p_data, (void*)p_data->mKBValuesOffset);
    p_anm->mKAValues = JSUConvertOffsetToPtr<s16>(p_data, (void*)p_data->mKAValuesOffset);
}

/* 8030A190-8030A1B8 304AD0 0028+00 1/1 0/0 0/0 .text
 * readAnmVisibility__20J2DAnmFullLoader_v15FPC24J3DAnmVisibilityFullData */
void J2DAnmFullLoader_v15::readAnmVisibility(J3DAnmVisibilityFullData const* p_data) {
    setAnmVisibility((J2DAnmVisibilityFull*)mpResource, p_data);
}

/* 8030A1B8-8030A234 304AF8 007C+00 2/2 0/0 0/0 .text
 * setAnmVisibility__20J2DAnmFullLoader_v15FP20J2DAnmVisibilityFullPC24J3DAnmVisibilityFullData */
void J2DAnmFullLoader_v15::setAnmVisibility(J2DAnmVisibilityFull* p_anm,
                                            J3DAnmVisibilityFullData const* p_data) {
    p_anm->mFrameMax = p_data->mFrameMax;
    p_anm->field_0x4 = p_data->field_0x8;
    p_anm->mFrame = 0;
    p_anm->field_0x10 = p_data->field_0xc;
    p_anm->field_0x12 = p_data->field_0xe;
    p_anm->mTable =
        JSUConvertOffsetToPtr<J3DAnmVisibilityFullTable>(p_data, (void*)p_data->mTableOffset);
    p_anm->mValues = JSUConvertOffsetToPtr<u8>(p_data, p_data->mValuesOffset);
}

/* 8030A234-8030A25C 304B74 0028+00 1/1 0/0 0/0 .text
 * readAnmVtxColor__20J2DAnmFullLoader_v15FPC22J3DAnmVtxColorFullData */
void J2DAnmFullLoader_v15::readAnmVtxColor(J3DAnmVtxColorFullData const* p_data) {
    setAnmVtxColor((J2DAnmVtxColorFull*)mpResource, p_data);
}

/* 8030A25C-8030A358 304B9C 00FC+00 2/2 0/0 0/0 .text
 * setAnmVtxColor__20J2DAnmFullLoader_v15FP18J2DAnmVtxColorFullPC22J3DAnmVtxColorFullData */
void J2DAnmFullLoader_v15::setAnmVtxColor(J2DAnmVtxColorFull* p_anm,
                                          J3DAnmVtxColorFullData const* p_data) {
    p_anm->mFrameMax = p_data->mFrameMax;
    p_anm->field_0x4 = p_data->field_0x8;
    p_anm->mFrame = 0;
    p_anm->mAnmTableNum[0] = p_data->mAnmTableNum[0];
    p_anm->mAnmTableNum[1] = p_data->mAnmTableNum[1];
    p_anm->mInfoTable[0] =
        JSUConvertOffsetToPtr<J3DAnmColorFullTable>(p_data, (void*)p_data->mTableOffsets[0]);
    p_anm->mInfoTable[1] =
        JSUConvertOffsetToPtr<J3DAnmColorFullTable>(p_data, (void*)p_data->mTableOffsets[1]);
    p_anm->mVtxColorIndexData[0] = JSUConvertOffsetToPtr<J3DAnmVtxColorIndexData>(
        p_data, (void*)p_data->mVtxColorIndexDataOffsets[0]);
    p_anm->mVtxColorIndexData[1] = JSUConvertOffsetToPtr<J3DAnmVtxColorIndexData>(
        p_data, (void*)p_data->mVtxColorIndexDataOffsets[1]);
    p_anm->mVtxColorIndexPointer[0] =
        JSUConvertOffsetToPtr<u16>(p_data, (void*)p_data->mVtxColorIndexPointerOffsets[0]);
    p_anm->mVtxColorIndexPointer[1] =
        JSUConvertOffsetToPtr<u16>(p_data, (void*)p_data->mVtxColorIndexPointerOffsets[1]);
    p_anm->mRValues = JSUConvertOffsetToPtr<u8>(p_data, p_data->mRValuesOffset);
    p_anm->mGValues = JSUConvertOffsetToPtr<u8>(p_data, p_data->mGValuesOffset);
    p_anm->mBValues = JSUConvertOffsetToPtr<u8>(p_data, p_data->mBValuesOffset);
    p_anm->mAValues = JSUConvertOffsetToPtr<u8>(p_data, p_data->mAValuesOffset);
}
