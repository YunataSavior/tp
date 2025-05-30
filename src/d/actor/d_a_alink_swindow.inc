/**
 * d_a_alink_swindow.inc
 * Pause Menu Player Display
 */

#include "d/actor/d_a_alink.h"
#include "JSystem/JKernel/JKRExpHeap.h"

static int daAlink_modelCallBack(J3DJoint* p_joint, int param_1);
static int daAlink_headModelCallBack(J3DJoint* i_joint, int param_1);
static int daAlink_wolfModelCallBack(J3DJoint* i_joint, int param_1);

/* 8013FF28-8013FF90 13A868 0068+00 2/2 0/0 0/0 .text            setArcName__9daAlink_cFi */
void daAlink_c::setArcName(BOOL i_isWolf) {
    if (i_isWolf) {
        mArcName = l_wArcName;
    } else if (checkCasualWearFlg()) {
        mArcName = l_bArcName;
    } else if (checkZoraWearFlg()) {
        mArcName = l_zArcName;
    } else if (checkMagicArmorWearFlg()) {
        mArcName = l_mArcName;
    } else {
        mArcName = l_kArcName;
    }
}

inline bool checkCarvingWoodShieldEquip() {
    return dComIfGs_getSelectEquipShield() == fpcNm_ITEM_WOOD_SHIELD;
}

inline bool checkShopWoodShieldEquip() {
    return dComIfGs_getSelectEquipShield() == fpcNm_ITEM_SHIELD;
}

/* 8013FF90-8013FFD8 13A8D0 0048+00 2/2 0/0 0/0 .text            setShieldArcName__9daAlink_cFv */
void daAlink_c::setShieldArcName() {
    if (checkCarvingWoodShieldEquip() || !checkShieldGet()) {
        mShieldArcName = l_cWShdArcName;
    } else if (checkShopWoodShieldEquip()) {
        mShieldArcName = l_sWShdArcName;
    } else {
        mShieldArcName = l_hyShdArcName;
    }
}

/* 8013FFD8-80140038 13A918 0060+00 1/1 0/0 0/0 .text setOriginalHeap__9daAlink_cFPP10JKRExpHeapUl
 */
void daAlink_c::setOriginalHeap(JKRExpHeap** i_ppheap, u32 i_size) {
    if (*i_ppheap == NULL) {
        *i_ppheap =
            JKRExpHeap::create(ROUND(i_size, 0x10) + 0xA0, mDoExt_getGameHeap(), true);
    }
}

/* 80140038-80140064 13A978 002C+00 1/0 0/0 0/0 .text            setClothesChange__9daAlink_cFi */
void daAlink_c::setClothesChange(int param_0) {
    if (!checkWolf()) {
        mClothesChangeWaitTimer = 4;

        if (param_0 != 0) {
            onNoResetFlg2(FLG2_UNK_200000);
        }
    }    
}

/* 80140064-80140070 13A9A4 000C+00 0/0 1/1 0/0 .text            setShieldChange__9daAlink_cFv */
void daAlink_c::setShieldChange() {
    mShieldChangeWaitTimer = 4;
}

/* 80140070-801401F8 13A9B0 0188+00 3/3 0/0 0/0 .text            loadModelDVD__9daAlink_cFv */
int daAlink_c::loadModelDVD() {
    if (mClothesChangeWaitTimer != 0) {
        mClothesChangeWaitTimer--;

        if (mClothesChangeWaitTimer == 2) {
            mEyeHL1.remove();
            mEyeHL2.remove();
            mpWlMidnaModel = NULL;
            mpWlMidnaMaskModel = NULL;
            mpWlMidnaHandModel = NULL;
            mpWlMidnaHairModel = NULL;

            if (!checkNoResetFlg2(FLG2_UNK_280000)) {
                dComIfG_resDelete(&mPhaseReq, mArcName);
                cPhs_Reset(&mPhaseReq);
                mpArcHeap->freeAll();

                if (mProcID == PROC_METAMORPHOSE || mProcID == PROC_METAMORPHOSE_ONLY) {
                    setArcName(!checkWolf());
                } else {
                    setArcName(checkWolf());
                }
            }
        } else if (mClothesChangeWaitTimer == 1) {
            if (checkNoResetFlg2(FLG2_UNK_280000)) {
                mClothesChangeWaitTimer = 0;
                changeLink(1);
            } else {
                if (dComIfG_resLoad(&mPhaseReq, mArcName, mpArcHeap) == cPhs_COMPLEATE_e) {
                    mClothesChangeWaitTimer = 0;

                    if (mProcID == PROC_METAMORPHOSE || mProcID == PROC_METAMORPHOSE_ONLY) {
                        if (checkWolf()) {
                            changeLink(0);
                        } else {
                            changeWolf();
                        }
                    } else {
                        changeLink(1);
                    }

                    return 1;
                }
                mClothesChangeWaitTimer = 2;
            }
        }
    } else {
        return 1;
    }

    return 0;
}

/* 801401F8-80140274 13AB38 007C+00 2/2 0/0 0/0 .text            setShieldModel__9daAlink_cFv */
void daAlink_c::setShieldModel() {
    JKRHeap* heap = mAnmHeap4.setAnimeHeap();
    mShieldModel = initModel((J3DModelData*)dComIfG_getObjectRes(mShieldArcName, 3), 0);

    mDoExt_setCurrentHeap(heap);
}

/* 80140274-80140338 13ABB4 00C4+00 2/2 0/0 0/0 .text            loadShieldModelDVD__9daAlink_cFv */
int daAlink_c::loadShieldModelDVD() {
    if (mShieldChangeWaitTimer != 0) {
        mShieldChangeWaitTimer--;

        if (mShieldChangeWaitTimer == 2) {
            mShieldModel = NULL;
            dComIfG_resDelete(&mShieldPhaseReq, mShieldArcName);
            cPhs_Reset(&mShieldPhaseReq);
            mpShieldArcHeap->freeAll();
            setShieldArcName();
        } else if (mShieldChangeWaitTimer == 1) {
            if (dComIfG_resLoad(&mShieldPhaseReq, mShieldArcName, mpShieldArcHeap) == cPhs_COMPLEATE_e)
            {
                mShieldChangeWaitTimer = 0;
                setShieldModel();
            } else {
                mShieldChangeWaitTimer = 2;
            }
        }
    } else {
        return 1;
    }

    return 0;
}

/* 80140338-80140550 13AC78 0218+00 3/3 0/0 0/0 .text            changeModelDataDirect__9daAlink_cFi
 */
void daAlink_c::changeModelDataDirect(int param_0) {
    u16 i;

    field_0x064C = mpLinkModel->getModelData();
    field_0x06c0 = mpLinkFaceModel->getModelData();
    
    if (!checkNoResetFlg2(FLG2_STATUS_WINDOW_DRAW)) {
        field_0x064C->getJointNodePointer(0)->setMtxCalc(field_0x1f20);
        field_0x064C->getJointNodePointer(1)->setMtxCalc(field_0x1f24);
        field_0x064C->getJointNodePointer(16)->setMtxCalc(field_0x1f20);

        for (i = 0; i < 35; i++) {
            field_0x064C->getJointNodePointer(i)->setCallBack(daAlink_modelCallBack);
        }

        J3DModelData* head_modelData = mpLinkHatModel->getModelData();
        for (i = 1; i < head_modelData->getJointNum(); i++) {
            head_modelData->getJointNodePointer(i)->setCallBack(daAlink_headModelCallBack);
        }

        if (param_0) {
            if (field_0x2154 != NULL) {
                field_0x06c0->entryTexNoAnimator(field_0x2154);
            }

            if (mpFaceBtk != NULL) {
                field_0x06c0->entryTexMtxAnimator(mpFaceBtk);
            }
        }
    } else {
        field_0x064C->getJointNodePointer(0)->setMtxCalc(NULL);
        field_0x064C->getJointNodePointer(1)->setMtxCalc(NULL);
        field_0x064C->getJointNodePointer(16)->setMtxCalc(NULL);
        field_0x06c0->getJointNodePointer(0)->setMtxCalc(NULL);

        for (i = 0; i < 35; i++) {
            field_0x064C->getJointNodePointer(i)->setCallBack(NULL);
        }

        J3DModelData* head_modelData = mpLinkHatModel->getModelData();
        for (i = 1; i < head_modelData->getJointNum(); i++) {
            head_modelData->getJointNodePointer(i)->setCallBack(NULL);
        }

        if (!checkNoResetFlg2(daPy_FLG2(FLG2_UNK_100000 | FLG2_UNK_80000))) {
            for (i = 6; i < 8; i++) {
                head_modelData->getJointNodePointer(i)->setCallBack(daAlink_headModelCallBack);
            }
        }
    }
}

/* 80140550-801406A8 13AE90 0158+00 3/3 0/0 0/0 .text changeModelDataDirectWolf__9daAlink_cFi */
void daAlink_c::changeModelDataDirectWolf(int param_0) {
    u16 i;

    field_0x064C = mpLinkModel->getModelData();
    field_0x06c0 = mpLinkModel->getModelData();
    
    if (!checkNoResetFlg2(FLG2_STATUS_WINDOW_DRAW)) {
        field_0x064C->getJointNodePointer(0)->setMtxCalc(field_0x1f20);
        field_0x064C->getJointNodePointer(3)->setMtxCalc(field_0x1f24);
        field_0x064C->getJointNodePointer(15)->setMtxCalc(field_0x1f20);

        for (i = 0; i < 40; i++) {
            field_0x064C->getJointNodePointer(i)->setCallBack(daAlink_wolfModelCallBack);
        }

        if (param_0) {
            if (field_0x2154 != NULL) {
                field_0x06c0->entryTexNoAnimator(field_0x2154);
            }

            if (mpFaceBtk != NULL) {
                field_0x06c0->entryTexMtxAnimator(mpFaceBtk);
            }
        }
    } else {
        field_0x064C->getJointNodePointer(0)->setMtxCalc(NULL);
        field_0x064C->getJointNodePointer(3)->setMtxCalc(NULL);
        field_0x064C->getJointNodePointer(15)->setMtxCalc(NULL);

        for (i = 0; i < 40; i++) {
            field_0x064C->getJointNodePointer(i)->setCallBack(NULL);
        }
    }
}

/* 801406A8-80140888 13AFE8 01E0+00 0/0 1/1 0/0 .text            initStatusWindow__9daAlink_cFv */
void daAlink_c::initStatusWindow() {
    onNoResetFlg2(FLG2_STATUS_WINDOW_DRAW);
    
    void* tmpBuffer = new (0x20) void*[0x500];
    JUT_ASSERT(0x18A, tmpBuffer);

    u16 var_r28, var_r31, var_r30;
    if (checkWolf()) {
        var_r28 = 0x2FF;
        var_r31 = 0x408;
        var_r30 = 0x3A7;
        changeModelDataDirectWolf(0);
    } else {
        var_r28 = 0x26A;
        var_r31 = 0x3AF;
        var_r30 = 0x32C;

        if (checkZoraWearAbility() && !checkZoraWearMaskDraw()) {
            field_0x06f0->hide();
        }
        changeModelDataDirect(0);
    }

    JKRReadIdxResource(tmpBuffer, 0x1400, var_r28, dComIfGp_getAnmArchive());
    m_sWindowBck = new mDoExt_bckAnm();
    JUT_ASSERT(0x1AC, m_sWindowBck);

    J3DAnmTransform* bck = (J3DAnmTransform*)J3DAnmLoaderDataBase::load(tmpBuffer, J3DLOADER_UNK_FLAG0);
    if (!m_sWindowBck->init(bck, 1, 2, 1.0f, 0, -1, false)) {
        JUT_ASSERT(0x1B1, 0);
    }

    tmpBuffer = new (0x20) void*[0x100];
    JUT_ASSERT(0x1B5, tmpBuffer);

    JKRReadIdxResource(tmpBuffer, 0x400, var_r31, dComIfGp_getAnmArchive());
    J3DAnmTexPattern* btp = (J3DAnmTexPattern*)J3DAnmLoaderDataBase::load(tmpBuffer, J3DLOADER_UNK_FLAG0);
    btp->setFrame(0.0f);
    btp->searchUpdateMaterialID(field_0x06c0);
    field_0x06c0->entryTexNoAnimator(btp);

    tmpBuffer = new (0x20) void*[0x100];
    JUT_ASSERT(0x1C1, tmpBuffer);

    JKRReadIdxResource(tmpBuffer, 0x400, var_r30, dComIfGp_getAnmArchive());
    J3DAnmTextureSRTKey* btk = (J3DAnmTextureSRTKey*)J3DAnmLoaderDataBase::load(tmpBuffer, J3DLOADER_UNK_FLAG0);
    btk->setFrame(0.0f);
    btk->searchUpdateMaterialID(field_0x06c0);
    field_0x06c0->entryTexMtxAnimator(btk);
}


/* 80140888-80140984 13B1C8 00FC+00 0/0 1/1 0/0 .text statusWindowExecute__9daAlink_cFPC4cXyzs */
void daAlink_c::statusWindowExecute(const cXyz* i_pos, s16 i_angle) {
    if (loadModelDVD()) {
        if (mSwordChangeWaitTimer != 0) {
            mSwordChangeWaitTimer--;
        }
        loadShieldModelDVD();
        setSelectEquipItem(1);
        
        if (mSwordChangeWaitTimer >= 30) {
            mSwordChangeWaitTimer = 0;
        }

        mDoMtx_stack_c::transS(*i_pos);
        mDoMtx_stack_c::YrotM(i_angle);
        mpLinkModel->setBaseTRMtx(mDoMtx_stack_c::get());

        m_sWindowBck->play();
        m_sWindowBck->entry(field_0x064C);
        mpLinkModel->calc();

        if (checkWolf()) {
            setWolfItemMatrix();
        } else {
            setItemMatrix(1);
        }
    }
}

/* 804531E8-804531F0 0017E8 0008+00 1/1 0/0 0/0 .sdata2          waterColor$53845 */
static const GXColorS10 waterColor = {0, 0, 0, 0};

/* 80140984-80140AC8 13B2C4 0144+00 0/0 1/1 0/0 .text            statusWindowDraw__9daAlink_cFv */
void daAlink_c::statusWindowDraw() {
    if (mClothesChangeWaitTimer == 0) {
        g_env_light.settingTevStruct(12, &current.pos, &tevStr);
        initTevCustomColor();

        if (!checkWolf()) {
            setWaterDropColor((J3DGXColorS10*)&waterColor);
            setDrawHand();
        }

        basicModelDraw(mpLinkModel);

        if (!checkWolf()) {
            basicModelDraw(mpLinkHandModel);
            basicModelDraw(mpLinkHatModel);
            basicModelDraw(mpLinkFaceModel);

            if (checkEquipHeavyBoots()) {
                for (int i = 0; i < 2; i++) {
                    basicModelDraw(mpLinkBootModels[i]);
                }
            }
        }

        if (checkSwordDraw()) {
            basicModelDraw(mSwordModel);
            if (!checkWoodSwordEquip()) {
                basicModelDraw(mSheathModel);
            }
        }

        if (checkShieldDraw()) {
            basicModelDraw(mShieldModel);
        }
    }
}

/* 80140AC8-80140B88 13B408 00C0+00 0/0 1/1 0/0 .text            resetStatusWindow__9daAlink_cFv */
void daAlink_c::resetStatusWindow() {
    offNoResetFlg2(FLG2_STATUS_WINDOW_DRAW);

    if (checkWolf()) {
        changeModelDataDirectWolf(1);
    } else {
        changeModelDataDirect(1);
    }

    setMatrix();
    mpLinkModel->calc();
    onNoResetFlg2(FLG2_STATUS_WINDOW_DRAW);
    setSelectEquipItem(0);

    if (checkWolf()) {
        setWolfItemMatrix();
    } else {
        setItemMatrix(0);
    }

    offNoResetFlg2(FLG2_STATUS_WINDOW_DRAW);
    m_sWindowBck = NULL;
}
