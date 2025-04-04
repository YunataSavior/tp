/**
 * @file d_a_npc_uri.cpp
 * 
*/

#include "d/actor/d_a_npc_uri.h"
#include "dol2asm.h"

//
// Forward References:
//

extern "C" void __dt__11daNpc_Uri_cFv();
extern "C" void create__11daNpc_Uri_cFv();
extern "C" void CreateHeap__11daNpc_Uri_cFv();
extern "C" void __dt__15J3DTevKColorAnmFv();
extern "C" void __ct__15J3DTevKColorAnmFv();
extern "C" void __dt__14J3DTevColorAnmFv();
extern "C" void __ct__14J3DTevColorAnmFv();
extern "C" void __dt__11J3DTexNoAnmFv();
extern "C" void __ct__11J3DTexNoAnmFv();
extern "C" void __dt__12J3DTexMtxAnmFv();
extern "C" void __ct__12J3DTexMtxAnmFv();
extern "C" void __dt__14J3DMatColorAnmFv();
extern "C" void __ct__14J3DMatColorAnmFv();
extern "C" void Delete__11daNpc_Uri_cFv();
extern "C" void Execute__11daNpc_Uri_cFv();
extern "C" void Draw__11daNpc_Uri_cFv();
extern "C" void createHeapCallBack__11daNpc_Uri_cFP10fopAc_ac_c();
extern "C" void ctrlJointCallBack__11daNpc_Uri_cFP8J3DJointi();
extern "C" void getType__11daNpc_Uri_cFv();
extern "C" void isDelete__11daNpc_Uri_cFv();
extern "C" void reset__11daNpc_Uri_cFv();
extern "C" void afterJntAnm__11daNpc_Uri_cFi();
extern "C" void setParam__11daNpc_Uri_cFv();
extern "C" void checkChangeEvt__11daNpc_Uri_cFv();
extern "C" void setAfterTalkMotion__11daNpc_Uri_cFv();
extern "C" void srchActors__11daNpc_Uri_cFv();
extern "C" void evtTalk__11daNpc_Uri_cFv();
extern "C" void evtCutProc__11daNpc_Uri_cFv();
extern "C" void action__11daNpc_Uri_cFv();
extern "C" void beforeMove__11daNpc_Uri_cFv();
extern "C" void setAttnPos__11daNpc_Uri_cFv();
extern "C" void setCollision__11daNpc_Uri_cFv();
extern "C" bool drawDbgInfo__11daNpc_Uri_cFv();
extern "C" void drawOtherMdl__11daNpc_Uri_cFv();
extern "C" void afterSetMotionAnm__11daNpc_Uri_cFiifi();
extern "C" void changeBck__11daNpc_Uri_cFPiPi();
extern "C" void changeBtp__11daNpc_Uri_cFPiPi();
extern "C" void selectAction__11daNpc_Uri_cFv();
extern "C" void chkAction__11daNpc_Uri_cFM11daNpc_Uri_cFPCvPvPv_i();
extern "C" void setAction__11daNpc_Uri_cFM11daNpc_Uri_cFPCvPvPv_i();
extern "C" void chkPlayerCarryBasket__11daNpc_Uri_cFv();
extern "C" void chkPlayerGetWoodShield__11daNpc_Uri_cFv();
extern "C" void getTutorialCond__11daNpc_Uri_cF4cXyz();
extern "C" void cutConversation__11daNpc_Uri_cFi();
extern "C" void cutStartCarryTutorial__11daNpc_Uri_cFi();
extern "C" void cutEndCarryTutorial__11daNpc_Uri_cFi();
extern "C" void cutConversationWithMoi__11daNpc_Uri_cFi();
extern "C" void cutFindWolf__11daNpc_Uri_cFi();
extern "C" void cutMeetingAgain__11daNpc_Uri_cFi();
extern "C" void krun__11daNpc_Uri_cFPv();
extern "C" void wait__11daNpc_Uri_cFPv();
extern "C" void walk__11daNpc_Uri_cFPv();
extern "C" void sitWait__11daNpc_Uri_cFPv();
extern "C" void talk__11daNpc_Uri_cFPv();
extern "C" static void daNpc_Uri_Create__FPv();
extern "C" static void daNpc_Uri_Delete__FPv();
extern "C" static void daNpc_Uri_Execute__FPv();
extern "C" static void daNpc_Uri_Draw__FPv();
extern "C" static bool daNpc_Uri_IsDelete__FPv();
extern "C" void calc__11J3DTexNoAnmCFPUs();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void __dt__8daNpcT_cFv();
extern "C" void __dt__4cXyzFv();
extern "C" void __dt__5csXyzFv();
extern "C" void __dt__18daNpcT_ActorMngr_cFv();
extern "C" void __dt__13daNpcT_Path_cFv();
extern "C" void __ct__18daNpcT_ActorMngr_cFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void
__ct__8daNpcT_cFPC26daNpcT_faceMotionAnmData_cPC22daNpcT_motionAnmData_cPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPC16daNpcT_evtData_cPPc();
extern "C" void __ct__5csXyzFv();
extern "C" void __dt__15daNpcT_JntAnm_cFv();
extern "C" void __ct__4cXyzFv();
extern "C" void __dt__22daNpcT_MotionSeqMngr_cFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" void setEyeAngleY__15daNpcT_JntAnm_cF4cXyzsifs();
extern "C" void setEyeAngleX__15daNpcT_JntAnm_cF4cXyzfs();
extern "C" void ctrlSubFaceMotion__8daNpcT_cFi();
extern "C" bool getEyeballLMaterialNo__8daNpcT_cFv();
extern "C" bool getEyeballRMaterialNo__8daNpcT_cFv();
extern "C" bool evtEndProc__8daNpcT_cFv();
extern "C" void afterMoved__8daNpcT_cFv();
extern "C" bool chkXYItems__8daNpcT_cFv();
extern "C" void decTmr__8daNpcT_cFv();
extern "C" void drawGhost__8daNpcT_cFv();
extern "C" bool afterSetFaceMotionAnm__8daNpcT_cFiifi();
extern "C" void getFaceMotionAnm__8daNpcT_cF26daNpcT_faceMotionAnmData_c();
extern "C" void getMotionAnm__8daNpcT_cF22daNpcT_motionAnmData_c();
extern "C" void changeAnm__8daNpcT_cFPiPi();
extern "C" void changeBtk__8daNpcT_cFPiPi();
extern "C" void func_80B2CB10(void* _this, int*);
extern "C" void func_80B2CB2C(void* _this, f32, f32);
extern "C" void __sinit_d_a_npc_uri_cpp();
extern "C" void
__ct__11daNpc_Uri_cFPC26daNpcT_faceMotionAnmData_cPC22daNpcT_motionAnmData_cPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPC16daNpcT_evtData_cPPc();
extern "C" s32 getEyeballMaterialNo__11daNpc_Uri_cFv();
extern "C" s32 getHeadJointNo__11daNpc_Uri_cFv();
extern "C" s32 getNeckJointNo__11daNpc_Uri_cFv();
extern "C" bool getBackboneJointNo__11daNpc_Uri_cFv();
extern "C" void checkChangeJoint__11daNpc_Uri_cFi();
extern "C" void checkRemoveJoint__11daNpc_Uri_cFi();
extern "C" s32 getFootLJointNo__11daNpc_Uri_cFv();
extern "C" s32 getFootRJointNo__11daNpc_Uri_cFv();
extern "C" void __dt__17daNpc_Uri_Param_cFv();
extern "C" static void func_80B2CDDC();
extern "C" static void func_80B2CDE4();
extern "C" void getDistTable__12dAttention_cFi();
extern "C" u8 const m__17daNpc_Uri_Param_c[172];
extern "C" extern char const* const d_a_npc_uri__stringBase0;
extern "C" void* mCutNameList__11daNpc_Uri_c[7];
extern "C" u8 mCutList__11daNpc_Uri_c[84];

//
// External References:
//

extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void
__ct__16mDoExt_McaMorfSOFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiP10Z2CreatureUlUl();
extern "C" void stopZelAnime__16mDoExt_McaMorfSOFv();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_SearchByID__FUiPP10fopAc_ac_c();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_createItemForPresentDemo__FPC4cXyziUciiPC5csXyzPC4cXyz();
extern "C" void fpcEx_IsExist__FUi();
extern "C" void dComIfGs_wolfeye_effect_check__Fv();
extern "C" void isCollect__20dSv_player_collect_cCFiUc();
extern "C" void onEventBit__11dSv_event_cFUs();
extern "C" void offEventBit__11dSv_event_cFUs();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void setPt2__14dEvt_control_cFPv();
extern "C" void getMyStaffId__16dEvent_manager_cFPCcP10fopAc_ac_ci();
extern "C" void getIsAddvance__16dEvent_manager_cFi();
extern "C" void getMyActIdx__16dEvent_manager_cFiPCPCciii();
extern "C" void getMySubstanceP__16dEvent_manager_cFiPCci();
extern "C" void cutEnd__16dEvent_manager_cFi();
extern "C" void setGoal__16dEvent_manager_cFP4cXyz();
extern "C" void ChkPresentEnd__16dEvent_manager_cFv();
extern "C" void init__7dPaPo_cFP9dBgS_Acchff();
extern "C" void addReal__21dDlst_shadowControl_cFUlP8J3DModel();
extern "C" void GroundCross__4cBgSFP11cBgS_GndChk();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWallR__12dBgS_AcchCirFf();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void __ct__11dBgS_GndChkFv();
extern "C" void __dt__11dBgS_GndChkFv();
extern "C" void __ct__11dBgS_LinChkFv();
extern "C" void __dt__11dBgS_LinChkFv();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void initialize__18daNpcT_ActorMngr_cFv();
extern "C" void entry__18daNpcT_ActorMngr_cFP10fopAc_ac_c();
extern "C" void remove__18daNpcT_ActorMngr_cFv();
extern "C" void getActorP__18daNpcT_ActorMngr_cFv();
extern "C" void initialize__15daNpcT_MatAnm_cFv();
extern "C" void initialize__22daNpcT_MotionSeqMngr_cFv();
extern "C" void checkEndSequence__22daNpcT_MotionSeqMngr_cFv();
extern "C" void initialize__13daNpcT_Path_cFv();
extern "C" void setPathInfo__13daNpcT_Path_cFUcScUc();
extern "C" void setNextPathInfo__13daNpcT_Path_cFScUc();
extern "C" void setNextIdx__13daNpcT_Path_cFi();
extern "C" void getDstPosH__13daNpcT_Path_cF4cXyzP4cXyzii();
extern "C" void initialize__15daNpcT_JntAnm_cFv();
extern "C" void setParam__15daNpcT_JntAnm_cFP10fopAc_ac_cP8J3DModelP4cXyziiiffffffffffP4cXyz();
extern "C" void calcJntRad__15daNpcT_JntAnm_cFfff();
extern "C" void calc__19daNpcT_DmgStagger_cFi();
extern "C" void tgHitCallBack__8daNpcT_cFP10fopAc_ac_cP12dCcD_GObjInfP10fopAc_ac_cP12dCcD_GObjInf();
extern "C" void getTrnsfrmAnmP__8daNpcT_cFPCci();
extern "C" void loadRes__8daNpcT_cFPCScPPCc();
extern "C" void deleteRes__8daNpcT_cFPCScPPCc();
extern "C" void execute__8daNpcT_cFv();
extern "C" void draw__8daNpcT_cFiifP11_GXColorS10fiii();
extern "C" void setEnvTevColor__8daNpcT_cFv();
extern "C" void setRoomNo__8daNpcT_cFv();
extern "C" void ctrlBtk__8daNpcT_cFv();
extern "C" void setMtx__8daNpcT_cFv();
extern "C" void ctrlJoint__8daNpcT_cFP8J3DJointP8J3DModel();
extern "C" void evtProc__8daNpcT_cFv();
extern "C" void setFootPos__8daNpcT_cFv();
extern "C" void setFootPrtcl__8daNpcT_cFP4cXyzff();
extern "C" bool checkCullDraw__8daNpcT_cFv();
extern "C" void twilight__8daNpcT_cFv();
extern "C" void evtOrder__8daNpcT_cFv();
extern "C" void evtChange__8daNpcT_cFv();
extern "C" void clrParam__8daNpcT_cFv();
extern "C" void setFaceMotionAnm__8daNpcT_cFib();
extern "C" void setMotionAnm__8daNpcT_cFifi();
extern "C" void setPos__8daNpcT_cF4cXyz();
extern "C" void setAngle__8daNpcT_cF5csXyz();
extern "C" void setAngle__8daNpcT_cFs();
extern "C" void hitChk__8daNpcT_cFP12dCcD_GObjInfUl();
extern "C" void chkActorInSight__8daNpcT_cFP10fopAc_ac_cfs();
extern "C" void chkPointInArea__8daNpcT_cF4cXyz4cXyzfffs();
extern "C" void srchPlayerActor__8daNpcT_cFv();
extern "C" void getAttnPos__8daNpcT_cFP10fopAc_ac_c();
extern "C" void step__8daNpcT_cFsiiii();
extern "C" void calcSpeedAndAngle__8daNpcT_cF4cXyziss();
extern "C" void initTalk__8daNpcT_cFiPP10fopAc_ac_c();
extern "C" void talkProc__8daNpcT_cFPiiPP10fopAc_ac_ci();
extern "C" void getNearestActorP__8daNpcT_cFs();
extern "C" void daNpcT_getPlayerInfoFromPlayerList__FiiP4cXyzP5csXyz();
extern "C" void daNpcT_getDistTableIdx__Fii();
extern "C" void daNpcT_onEvtBit__FUl();
extern "C" void daNpcT_chkEvtBit__FUl();
extern "C" void daNpcT_offTmpBit__FUl();
extern "C" void daNpcT_chkTmpBit__FUl();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void __ct__10dMsgFlow_cFv();
extern "C" void __dt__10dMsgFlow_cFv();
extern "C" void getEventId__10dMsgFlow_cFPi();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndF__Ff();
extern "C" void __ct__11cBgS_GndChkFv();
extern "C" void __dt__11cBgS_GndChkFv();
extern "C" void SetPos__11cBgS_GndChkFPC4cXyz();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void cM3d_Len2dSqPntAndSegLine__FffffffPfPfPf();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void cLib_chaseF__FPfff();
extern "C" void cLib_targetAngleY__FPC3VecPC3Vec();
extern "C" void __ct__10Z2CreatureFv();
extern "C" void __dt__10Z2CreatureFv();
extern "C" void init__10Z2CreatureFP3VecP3VecUcUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void checkPass__12J3DFrameCtrlFf();
extern "C" void getTexNo__16J3DAnmTexPatternCFUsPUs();
extern "C" void initialize__14J3DMaterialAnmFv();
extern "C" void __destroy_arr();
extern "C" void __construct_array();
extern "C" void __ptmf_test();
extern "C" void __ptmf_cmpr();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_22();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_22();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern u8 const __ptmf_null[12 + 4 /* padding */];
extern "C" u8 dist_table__12dAttention_c[6552];
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" u8 mCcDCyl__8daNpcT_c[68];
extern "C" extern void* __vt__8daNpcT_c[49];
extern "C" extern void* __vt__15daNpcT_MatAnm_c[4 + 1 /* padding */];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern void* __vt__14J3DMaterialAnm[4];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 mBlureFlag__13mDoGph_gInf_c[4];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80B2CF74-80B2CF74 000160 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80B2CF74 = "";
SECTION_DEAD static char const* const stringBase_80B2CF75 = "DEFAULT_GETITEM";
SECTION_DEAD static char const* const stringBase_80B2CF85 = "NO_RESPONSE";
SECTION_DEAD static char const* const stringBase_80B2CF91 = "FIRST_CONVERSATION";
SECTION_DEAD static char const* const stringBase_80B2CFA4 = "CONVERSATION";
SECTION_DEAD static char const* const stringBase_80B2CFB1 = "START_CARRY_TUTORIAL";
SECTION_DEAD static char const* const stringBase_80B2CFC6 = "END_CARRY_TUTORIAL";
SECTION_DEAD static char const* const stringBase_80B2CFD9 = "FAILURE_CARRY_TUTORIAL";
SECTION_DEAD static char const* const stringBase_80B2CFF0 = "CONVERSATION_WITH_MOI";
SECTION_DEAD static char const* const stringBase_80B2D006 = "FIND_WOLF";
SECTION_DEAD static char const* const stringBase_80B2D010 = "MEETING_AGAIN";
SECTION_DEAD static char const* const stringBase_80B2D01E = "Uri";
SECTION_DEAD static char const* const stringBase_80B2D022 = "Uri1";
SECTION_DEAD static char const* const stringBase_80B2D027 = "Uri2";
SECTION_DEAD static char const* const stringBase_80B2D02C = "Uri3";
SECTION_DEAD static char const* const stringBase_80B2D031 = "Uri_P1";
#pragma pop

/* 80B2D048-80B2D054 000000 000C+00 3/3 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80B2D054-80B2D068 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
#pragma push
#pragma force_active on
SECTION_DATA static u32 lit_1787[1 + 4 /* padding */] = {
    0x02000201,
    /* padding */
    0x40080000,
    0x00000000,
    0x3FE00000,
    0x00000000,
};
#pragma pop

/* 80B2D068-80B2D078 000020 0010+00 1/1 0/0 0/0 .data            l_bmdData */
SECTION_DATA static u8 l_bmdData[16] = {
    0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x02,
};

/* 80B2D078-80B2D0D0 -00001 0058+00 0/1 0/0 0/0 .data            l_evtList */
#pragma push
#pragma force_active on
SECTION_DATA static void* l_evtList[22] = {
    (void*)&d_a_npc_uri__stringBase0,
    (void*)NULL,
    (void*)(((char*)&d_a_npc_uri__stringBase0) + 0x1),
    (void*)0x00000002,
    (void*)(((char*)&d_a_npc_uri__stringBase0) + 0x11),
    (void*)NULL,
    (void*)(((char*)&d_a_npc_uri__stringBase0) + 0x1D),
    (void*)0x00000002,
    (void*)(((char*)&d_a_npc_uri__stringBase0) + 0x30),
    (void*)0x00000002,
    (void*)(((char*)&d_a_npc_uri__stringBase0) + 0x3D),
    (void*)0x00000002,
    (void*)(((char*)&d_a_npc_uri__stringBase0) + 0x52),
    (void*)0x00000002,
    (void*)(((char*)&d_a_npc_uri__stringBase0) + 0x65),
    (void*)0x00000002,
    (void*)(((char*)&d_a_npc_uri__stringBase0) + 0x7C),
    (void*)0x00000003,
    (void*)(((char*)&d_a_npc_uri__stringBase0) + 0x92),
    (void*)0x00000003,
    (void*)(((char*)&d_a_npc_uri__stringBase0) + 0x9C),
    (void*)0x00000004,
};
#pragma pop

/* 80B2D0D0-80B2D0E8 -00001 0018+00 3/4 0/0 0/0 .data            l_resNameList */
SECTION_DATA static void* l_resNameList[6] = {
    (void*)&d_a_npc_uri__stringBase0,
    (void*)(((char*)&d_a_npc_uri__stringBase0) + 0xAA),
    (void*)(((char*)&d_a_npc_uri__stringBase0) + 0xAE),
    (void*)(((char*)&d_a_npc_uri__stringBase0) + 0xB3),
    (void*)(((char*)&d_a_npc_uri__stringBase0) + 0xB8),
    (void*)(((char*)&d_a_npc_uri__stringBase0) + 0xBD),
};

/* 80B2D0E8-80B2D0EC 0000A0 0002+02 1/0 0/0 0/0 .data            l_loadResPtrn0 */
SECTION_DATA static u16 l_loadResPtrn0[1 + 1 /* padding */] = {
    0x01FF,
    /* padding */
    0x0000,
};

/* 80B2D0EC-80B2D0F0 0000A4 0003+01 1/0 0/0 0/0 .data            l_loadResPtrn1 */
SECTION_DATA static u8 l_loadResPtrn1[3 + 1 /* padding */] = {
    0x01,
    0x02,
    0xFF,
    /* padding */
    0x00,
};

/* 80B2D0F0-80B2D0F4 0000A8 0003+01 1/0 0/0 0/0 .data            l_loadResPtrn2 */
SECTION_DATA static u8 l_loadResPtrn2[3 + 1 /* padding */] = {
    0x01,
    0x03,
    0xFF,
    /* padding */
    0x00,
};

/* 80B2D0F4-80B2D0FC 0000AC 0005+03 1/0 0/0 0/0 .data            l_loadResPtrn3 */
SECTION_DATA static u8 l_loadResPtrn3[5 + 3 /* padding */] = {
    0x01,
    0x02,
    0x03,
    0x04,
    0xFF,
    /* padding */
    0x00,
    0x00,
    0x00,
};

/* 80B2D0FC-80B2D100 0000B4 0003+01 1/0 0/0 0/0 .data            l_loadResPtrn4 */
SECTION_DATA static u8 l_loadResPtrn4[3 + 1 /* padding */] = {
    0x01,
    0x05,
    0xFF,
    /* padding */
    0x00,
};

/* 80B2D100-80B2D108 0000B8 0005+03 1/0 0/0 0/0 .data            l_loadResPtrn9 */
SECTION_DATA static u8 l_loadResPtrn9[5 + 3 /* padding */] = {
    0x01,
    0x02,
    0x03,
    0x04,
    0xFF,
    /* padding */
    0x00,
    0x00,
    0x00,
};

/* 80B2D108-80B2D124 -00001 001C+00 1/2 0/0 0/0 .data            l_loadResPtrnList */
SECTION_DATA static void* l_loadResPtrnList[7] = {
    (void*)&l_loadResPtrn0, (void*)&l_loadResPtrn1, (void*)&l_loadResPtrn0, (void*)&l_loadResPtrn2,
    (void*)&l_loadResPtrn3, (void*)&l_loadResPtrn4, (void*)&l_loadResPtrn9,
};

/* 80B2D124-80B2D338 0000DC 0214+00 0/1 0/0 0/0 .data            l_faceMotionAnmData */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_faceMotionAnmData[532] = {
    0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x12,
    0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x2B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x2C,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x2A, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x2D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
    0x00, 0x00, 0x00, 0x15, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x17,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F,
    0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x2F, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x2E,
    0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08,
    0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
    0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x12,
    0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x07,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x15, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80B2D338-80B2D6F0 0002F0 03B8+00 1/2 0/0 0/0 .data            l_motionAnmData */
SECTION_DATA static u8 l_motionAnmData[952] = {
    0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0F,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x03,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0F,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1B,
    0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1D, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x24,
    0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1A,
    0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x25, 0x00, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0F,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19,
    0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x15, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0F,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11,
    0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x03,
    0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x0F,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x02,
    0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04,
    0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x0F,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0A,
    0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04,
    0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x0F,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00,
};

/* 80B2D6F0-80B2D810 0006A8 0120+00 0/1 0/0 0/0 .data            l_faceMotionSequenceData */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_faceMotionSequenceData[288] = {
    0x00, 0x02, 0xFF, 0x01, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x07, 0xFF, 0x01, 0x00, 0x0E, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x03, 0xFF, 0x01, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x04, 0xFF, 0x01, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x05, 0xFF, 0x01, 0x00, 0x0B, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x0C, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x0D, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x06, 0xFF, 0x01, 0x00, 0x09, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x08, 0xFF, 0x01, 0x00, 0x0E, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x11, 0xFF, 0x00, 0x00, 0x12, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x0E, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x0F, 0xFF, 0x01, 0x00, 0x10, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x10, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x0A, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x0B, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x09, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x12, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x00, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
};
#pragma pop

/* 80B2D810-80B2D9F0 0007C8 01E0+00 0/1 0/0 0/0 .data            l_motionSequenceData */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_motionSequenceData[480] = {
    0x00, 0x00, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x1C, 0xFF, 0x01, 0x00, 0x1D, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x1E, 0xFF, 0x01, 0x00, 0x1A, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x1F, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x20, 0xFF, 0x01, 0x00, 0x1F, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x09, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x1D, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x0A, 0xFF, 0x01, 0x00, 0x09, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x0E, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x12, 0xFF, 0x01, 0x00, 0x0E, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x13, 0xFF, 0x01, 0x00, 0x0E, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x0F, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x0B, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x0D, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x19, 0xFF, 0x01, 0x00, 0x18, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
    0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x02, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x18, 0xFF, 0x01, 0x00, 0x02, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x1A, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x1B, 0xFF, 0x01, 0x00, 0x1A, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x14, 0xFF, 0x01, 0x00, 0x15, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x15, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x17, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x16, 0xFF, 0x01, 0x00, 0x17, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x21, 0x04, 0x01, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x0C, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x08, 0xFF, 0x01, 0x00, 0x09, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x03, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x10, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
    0x00, 0x11, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00,
};
#pragma pop

/* 80B2D9F0-80B2DA0C -00001 001C+00 1/1 0/0 0/0 .data            mCutNameList__11daNpc_Uri_c */
SECTION_DATA void* daNpc_Uri_c::mCutNameList[7] = {
    (void*)&d_a_npc_uri__stringBase0,
    (void*)(((char*)&d_a_npc_uri__stringBase0) + 0x30),
    (void*)(((char*)&d_a_npc_uri__stringBase0) + 0x3D),
    (void*)(((char*)&d_a_npc_uri__stringBase0) + 0x52),
    (void*)(((char*)&d_a_npc_uri__stringBase0) + 0x7C),
    (void*)(((char*)&d_a_npc_uri__stringBase0) + 0x92),
    (void*)(((char*)&d_a_npc_uri__stringBase0) + 0x9C),
};

/* 80B2DA0C-80B2DA18 -00001 000C+00 0/1 0/0 0/0 .data            @3815 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3815[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)cutConversation__11daNpc_Uri_cFi,
};
#pragma pop

/* 80B2DA18-80B2DA24 -00001 000C+00 0/1 0/0 0/0 .data            @3816 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3816[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)cutStartCarryTutorial__11daNpc_Uri_cFi,
};
#pragma pop

/* 80B2DA24-80B2DA30 -00001 000C+00 0/1 0/0 0/0 .data            @3817 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3817[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)cutEndCarryTutorial__11daNpc_Uri_cFi,
};
#pragma pop

/* 80B2DA30-80B2DA3C -00001 000C+00 0/1 0/0 0/0 .data            @3818 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3818[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)cutConversationWithMoi__11daNpc_Uri_cFi,
};
#pragma pop

/* 80B2DA3C-80B2DA48 -00001 000C+00 0/1 0/0 0/0 .data            @3819 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3819[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)cutFindWolf__11daNpc_Uri_cFi,
};
#pragma pop

/* 80B2DA48-80B2DA54 -00001 000C+00 0/1 0/0 0/0 .data            @3820 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3820[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)cutMeetingAgain__11daNpc_Uri_cFi,
};
#pragma pop

/* 80B2DA54-80B2DAA8 000A0C 0054+00 1/2 0/0 0/0 .data            mCutList__11daNpc_Uri_c */
SECTION_DATA u8 daNpc_Uri_c::mCutList[84] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80B2DAA8-80B2DAB4 -00001 000C+00 1/1 0/0 0/0 .data            @4651 */
SECTION_DATA static void* lit_4651[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)talk__11daNpc_Uri_cFPv,
};

/* 80B2DAB4-80B2DAE4 -00001 0030+00 1/1 0/0 0/0 .data            @4714 */
SECTION_DATA static void* lit_4714[12] = {
    (void*)(((char*)setAfterTalkMotion__11daNpc_Uri_cFv) + 0x6C),
    (void*)(((char*)setAfterTalkMotion__11daNpc_Uri_cFv) + 0x40),
    (void*)(((char*)setAfterTalkMotion__11daNpc_Uri_cFv) + 0x6C),
    (void*)(((char*)setAfterTalkMotion__11daNpc_Uri_cFv) + 0x6C),
    (void*)(((char*)setAfterTalkMotion__11daNpc_Uri_cFv) + 0x48),
    (void*)(((char*)setAfterTalkMotion__11daNpc_Uri_cFv) + 0x4C),
    (void*)(((char*)setAfterTalkMotion__11daNpc_Uri_cFv) + 0x6C),
    (void*)(((char*)setAfterTalkMotion__11daNpc_Uri_cFv) + 0x50),
    (void*)(((char*)setAfterTalkMotion__11daNpc_Uri_cFv) + 0x58),
    (void*)(((char*)setAfterTalkMotion__11daNpc_Uri_cFv) + 0x68),
    (void*)(((char*)setAfterTalkMotion__11daNpc_Uri_cFv) + 0x6C),
    (void*)(((char*)setAfterTalkMotion__11daNpc_Uri_cFv) + 0x60),
};

/* 80B2DAE4-80B2DAF0 -00001 000C+00 1/1 0/0 0/0 .data            @4734 */
SECTION_DATA static void* lit_4734[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)talk__11daNpc_Uri_cFPv,
};

/* 80B2DAF0-80B2DAFC -00001 000C+00 1/1 0/0 0/0 .data            @4739 */
SECTION_DATA static void* lit_4739[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)talk__11daNpc_Uri_cFPv,
};

/* 80B2DAFC-80B2DB08 -00001 000C+00 0/1 0/0 0/0 .data            @5083 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_5083[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)sitWait__11daNpc_Uri_cFPv,
};
#pragma pop

/* 80B2DB08-80B2DB14 -00001 000C+00 0/1 0/0 0/0 .data            @5090 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_5090[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)walk__11daNpc_Uri_cFPv,
};
#pragma pop

/* 80B2DB14-80B2DB20 -00001 000C+00 0/1 0/0 0/0 .data            @5092 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_5092[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)wait__11daNpc_Uri_cFPv,
};
#pragma pop

/* 80B2DB20-80B2DB2C -00001 000C+00 0/1 0/0 0/0 .data            @5094 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_5094[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)krun__11daNpc_Uri_cFPv,
};
#pragma pop

/* 80B2DB2C-80B2DB38 -00001 000C+00 0/1 0/0 0/0 .data            @5096 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_5096[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)sitWait__11daNpc_Uri_cFPv,
};
#pragma pop

/* 80B2DB38-80B2DB44 -00001 000C+00 0/1 0/0 0/0 .data            @5098 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_5098[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)wait__11daNpc_Uri_cFPv,
};
#pragma pop

/* 80B2DB44-80B2DB64 -00001 0020+00 1/0 0/0 0/0 .data            daNpc_Uri_MethodTable */
static actor_method_class daNpc_Uri_MethodTable = {
    (process_method_func)daNpc_Uri_Create__FPv,
    (process_method_func)daNpc_Uri_Delete__FPv,
    (process_method_func)daNpc_Uri_Execute__FPv,
    (process_method_func)daNpc_Uri_IsDelete__FPv,
    (process_method_func)daNpc_Uri_Draw__FPv,
};

/* 80B2DB64-80B2DB94 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_NPC_URI */
extern actor_process_profile_definition g_profile_NPC_URI = {
  fpcLy_CURRENT_e,        // mLayerID
  7,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_NPC_URI,           // mProcName
  &g_fpcLf_Method.base,  // sub_method
  sizeof(daNpc_Uri_c),    // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  378,                    // mPriority
  &daNpc_Uri_MethodTable, // sub_method
  0x00040107,             // mStatus
  fopAc_NPC_e,            // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 80B2DB94-80B2DBA0 000B4C 000C+00 2/2 0/0 0/0 .data            __vt__11J3DTexNoAnm */
SECTION_DATA extern void* __vt__11J3DTexNoAnm[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)calc__11J3DTexNoAnmCFPUs,
};

/* 80B2DBA0-80B2DBAC 000B58 000C+00 3/3 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80B2DBAC-80B2DBD0 000B64 0024+00 3/3 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80B2CDE4,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80B2CDDC,
};

/* 80B2DBD0-80B2DBDC 000B88 000C+00 2/2 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 80B2DBDC-80B2DBE8 000B94 000C+00 3/3 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80B2DBE8-80B2DBF4 000BA0 000C+00 2/2 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80B2DBF4-80B2DC00 000BAC 000C+00 3/3 0/0 0/0 .data            __vt__22daNpcT_MotionSeqMngr_c */
SECTION_DATA extern void* __vt__22daNpcT_MotionSeqMngr_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__22daNpcT_MotionSeqMngr_cFv,
};

/* 80B2DC00-80B2DC0C 000BB8 000C+00 5/5 0/0 0/0 .data            __vt__18daNpcT_ActorMngr_c */
SECTION_DATA extern void* __vt__18daNpcT_ActorMngr_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__18daNpcT_ActorMngr_cFv,
};

/* 80B2DC0C-80B2DC18 000BC4 000C+00 3/3 0/0 0/0 .data            __vt__15daNpcT_JntAnm_c */
SECTION_DATA extern void* __vt__15daNpcT_JntAnm_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__15daNpcT_JntAnm_cFv,
};

/* 80B2DC18-80B2DC24 000BD0 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80B2DC24-80B2DC30 000BDC 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80B2DC30-80B2DC3C 000BE8 000C+00 3/3 0/0 0/0 .data            __vt__13daNpcT_Path_c */
SECTION_DATA extern void* __vt__13daNpcT_Path_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__13daNpcT_Path_cFv,
};

/* 80B2DC3C-80B2DD00 000BF4 00C4+00 2/2 0/0 0/0 .data            __vt__11daNpc_Uri_c */
SECTION_DATA extern void* __vt__11daNpc_Uri_c[49] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__11daNpc_Uri_cFv,
    (void*)ctrlBtk__8daNpcT_cFv,
    (void*)ctrlSubFaceMotion__8daNpcT_cFi,
    (void*)checkChangeJoint__11daNpc_Uri_cFi,
    (void*)checkRemoveJoint__11daNpc_Uri_cFi,
    (void*)getBackboneJointNo__11daNpc_Uri_cFv,
    (void*)getNeckJointNo__11daNpc_Uri_cFv,
    (void*)getHeadJointNo__11daNpc_Uri_cFv,
    (void*)getFootLJointNo__11daNpc_Uri_cFv,
    (void*)getFootRJointNo__11daNpc_Uri_cFv,
    (void*)getEyeballLMaterialNo__8daNpcT_cFv,
    (void*)getEyeballRMaterialNo__8daNpcT_cFv,
    (void*)getEyeballMaterialNo__11daNpc_Uri_cFv,
    (void*)ctrlJoint__8daNpcT_cFP8J3DJointP8J3DModel,
    (void*)afterJntAnm__11daNpc_Uri_cFi,
    (void*)setParam__11daNpc_Uri_cFv,
    (void*)checkChangeEvt__11daNpc_Uri_cFv,
    (void*)evtTalk__11daNpc_Uri_cFv,
    (void*)evtEndProc__8daNpcT_cFv,
    (void*)evtCutProc__11daNpc_Uri_cFv,
    (void*)setAfterTalkMotion__11daNpc_Uri_cFv,
    (void*)evtProc__8daNpcT_cFv,
    (void*)action__11daNpc_Uri_cFv,
    (void*)beforeMove__11daNpc_Uri_cFv,
    (void*)afterMoved__8daNpcT_cFv,
    (void*)setAttnPos__11daNpc_Uri_cFv,
    (void*)setFootPos__8daNpcT_cFv,
    (void*)setCollision__11daNpc_Uri_cFv,
    (void*)setFootPrtcl__8daNpcT_cFP4cXyzff,
    (void*)checkCullDraw__8daNpcT_cFv,
    (void*)twilight__8daNpcT_cFv,
    (void*)chkXYItems__8daNpcT_cFv,
    (void*)evtOrder__8daNpcT_cFv,
    (void*)decTmr__8daNpcT_cFv,
    (void*)clrParam__8daNpcT_cFv,
    (void*)drawDbgInfo__11daNpc_Uri_cFv,
    (void*)drawOtherMdl__11daNpc_Uri_cFv,
    (void*)drawGhost__8daNpcT_cFv,
    (void*)afterSetFaceMotionAnm__8daNpcT_cFiifi,
    (void*)afterSetMotionAnm__11daNpc_Uri_cFiifi,
    (void*)getFaceMotionAnm__8daNpcT_cF26daNpcT_faceMotionAnmData_c,
    (void*)getMotionAnm__8daNpcT_cF22daNpcT_motionAnmData_c,
    (void*)changeAnm__8daNpcT_cFPiPi,
    (void*)changeBck__11daNpc_Uri_cFPiPi,
    (void*)changeBtp__11daNpc_Uri_cFPiPi,
    (void*)changeBtk__8daNpcT_cFPiPi,
    (void*)setMotionAnm__8daNpcT_cFifi,
};

/* 80B267AC-80B268F8 0000EC 014C+00 1/0 0/0 0/0 .text            __dt__11daNpc_Uri_cFv */
daNpc_Uri_c::~daNpc_Uri_c() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80B2CE14-80B2CEC0 000000 00AC+00 14/14 0/0 0/0 .rodata          m__17daNpc_Uri_Param_c */
SECTION_RODATA u8 const daNpc_Uri_Param_c::m[172] = {
    0x43, 0x48, 0x00, 0x00, 0xC0, 0x40, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x43, 0xFA, 0x00, 0x00,
    0x43, 0x7F, 0x00, 0x00, 0x43, 0x34, 0x00, 0x00, 0x42, 0x0C, 0x00, 0x00, 0x41, 0xF0, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x20, 0x00, 0x00, 0xC1, 0x20, 0x00, 0x00,
    0x41, 0xF0, 0x00, 0x00, 0xC1, 0x20, 0x00, 0x00, 0x42, 0x34, 0x00, 0x00, 0xC2, 0x34, 0x00, 0x00,
    0x3F, 0x19, 0x99, 0x9A, 0x41, 0xA0, 0x00, 0x00, 0x00, 0x03, 0x00, 0x06, 0x00, 0x05, 0x00, 0x06,
    0x42, 0xDC, 0x00, 0x00, 0x43, 0xC8, 0x00, 0x00, 0x43, 0x96, 0x00, 0x00, 0xC3, 0x96, 0x00, 0x00,
    0x00, 0x3C, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x80, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x78,
    0x00, 0x3C, 0x00, 0xB4, 0x00, 0x0A, 0x00, 0x00, 0x43, 0xAF, 0x00, 0x00, 0x43, 0xC8, 0x00, 0x00,
    0x45, 0x3B, 0x80, 0x00, 0x43, 0x48, 0x00, 0x00, 0x44, 0x16, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B2CE14, &daNpc_Uri_Param_c::m);

/* 80B2CEC0-80B2CEDC 0000AC 001C+00 0/1 0/0 0/0 .rodata          heapSize$3979 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const heapSize[28] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x37, 0x40, 0x00, 0x00, 0x37, 0x40, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B2CEC0, &heapSize);
#pragma pop

/* 80B2CEDC-80B2CEE0 0000C8 0004+00 0/1 0/0 0/0 .rodata          @4051 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4051 = -200.0f;
COMPILER_STRIP_GATE(0x80B2CEDC, &lit_4051);
#pragma pop

/* 80B2CEE0-80B2CEE4 0000CC 0004+00 0/1 0/0 0/0 .rodata          @4052 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4052 = -100.0f;
COMPILER_STRIP_GATE(0x80B2CEE0, &lit_4052);
#pragma pop

/* 80B2CEE4-80B2CEE8 0000D0 0004+00 0/2 0/0 0/0 .rodata          @4053 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4053 = 200.0f;
COMPILER_STRIP_GATE(0x80B2CEE4, &lit_4053);
#pragma pop

/* 80B2CEE8-80B2CEEC 0000D4 0004+00 0/2 0/0 0/0 .rodata          @4054 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4054 = 300.0f;
COMPILER_STRIP_GATE(0x80B2CEE8, &lit_4054);
#pragma pop

/* 80B2CEEC-80B2CEF0 0000D8 0004+00 8/21 0/0 0/0 .rodata          @4055 */
SECTION_RODATA static u8 const lit_4055[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80B2CEEC, &lit_4055);

/* 80B2CEF0-80B2CEF4 0000DC 0004+00 0/1 0/0 0/0 .rodata          @4056 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4056 = -1000000000.0f;
COMPILER_STRIP_GATE(0x80B2CEF0, &lit_4056);
#pragma pop

/* 80B268F8-80B26BE4 000238 02EC+00 1/1 0/0 0/0 .text            create__11daNpc_Uri_cFv */
void daNpc_Uri_c::create() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80B2CEF4-80B2CEF8 0000E0 0004+00 0/2 0/0 0/0 .rodata          @4220 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4220 = 65536.0f;
COMPILER_STRIP_GATE(0x80B2CEF4, &lit_4220);
#pragma pop

/* 80B2CEF8-80B2CEFC 0000E4 0004+00 0/3 0/0 0/0 .rodata          @4221 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4221 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x80B2CEF8, &lit_4221);
#pragma pop

/* 80B2CEFC-80B2CF00 0000E8 0004+00 2/5 0/0 0/0 .rodata          @4378 */
SECTION_RODATA static f32 const lit_4378 = 1.0f;
COMPILER_STRIP_GATE(0x80B2CEFC, &lit_4378);

/* 80B26BE4-80B26ED0 000524 02EC+00 1/1 0/0 0/0 .text            CreateHeap__11daNpc_Uri_cFv */
void daNpc_Uri_c::CreateHeap() {
    // NONMATCHING
}

/* 80B26ED0-80B26F0C 000810 003C+00 1/1 0/0 0/0 .text            __dt__15J3DTevKColorAnmFv */
// J3DTevKColorAnm::~J3DTevKColorAnm() {
extern "C" void __dt__15J3DTevKColorAnmFv() {
    // NONMATCHING
}

/* 80B26F0C-80B26F24 00084C 0018+00 1/1 0/0 0/0 .text            __ct__15J3DTevKColorAnmFv */
// J3DTevKColorAnm::J3DTevKColorAnm() {
extern "C" void __ct__15J3DTevKColorAnmFv() {
    // NONMATCHING
}

/* 80B26F24-80B26F60 000864 003C+00 1/1 0/0 0/0 .text            __dt__14J3DTevColorAnmFv */
// J3DTevColorAnm::~J3DTevColorAnm() {
extern "C" void __dt__14J3DTevColorAnmFv() {
    // NONMATCHING
}

/* 80B26F60-80B26F78 0008A0 0018+00 1/1 0/0 0/0 .text            __ct__14J3DTevColorAnmFv */
// J3DTevColorAnm::J3DTevColorAnm() {
extern "C" void __ct__14J3DTevColorAnmFv() {
    // NONMATCHING
}

/* 80B26F78-80B26FC0 0008B8 0048+00 1/1 0/0 0/0 .text            __dt__11J3DTexNoAnmFv */
// J3DTexNoAnm::~J3DTexNoAnm() {
extern "C" void __dt__11J3DTexNoAnmFv() {
    // NONMATCHING
}

/* 80B26FC0-80B26FE4 000900 0024+00 1/1 0/0 0/0 .text            __ct__11J3DTexNoAnmFv */
// J3DTexNoAnm::J3DTexNoAnm() {
extern "C" void __ct__11J3DTexNoAnmFv() {
    // NONMATCHING
}

/* 80B26FE4-80B27020 000924 003C+00 1/1 0/0 0/0 .text            __dt__12J3DTexMtxAnmFv */
// J3DTexMtxAnm::~J3DTexMtxAnm() {
extern "C" void __dt__12J3DTexMtxAnmFv() {
    // NONMATCHING
}

/* 80B27020-80B27038 000960 0018+00 1/1 0/0 0/0 .text            __ct__12J3DTexMtxAnmFv */
// J3DTexMtxAnm::J3DTexMtxAnm() {
extern "C" void __ct__12J3DTexMtxAnmFv() {
    // NONMATCHING
}

/* 80B27038-80B27074 000978 003C+00 1/1 0/0 0/0 .text            __dt__14J3DMatColorAnmFv */
// J3DMatColorAnm::~J3DMatColorAnm() {
extern "C" void __dt__14J3DMatColorAnmFv() {
    // NONMATCHING
}

/* 80B27074-80B2708C 0009B4 0018+00 1/1 0/0 0/0 .text            __ct__14J3DMatColorAnmFv */
// J3DMatColorAnm::J3DMatColorAnm() {
extern "C" void __ct__14J3DMatColorAnmFv() {
    // NONMATCHING
}

/* 80B2708C-80B270C0 0009CC 0034+00 1/1 0/0 0/0 .text            Delete__11daNpc_Uri_cFv */
void daNpc_Uri_c::Delete() {
    // NONMATCHING
}

/* 80B270C0-80B270E0 000A00 0020+00 2/2 0/0 0/0 .text            Execute__11daNpc_Uri_cFv */
void daNpc_Uri_c::Execute() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80B2CF00-80B2CF04 0000EC 0004+00 1/3 0/0 0/0 .rodata          @4427 */
SECTION_RODATA static f32 const lit_4427 = 100.0f;
COMPILER_STRIP_GATE(0x80B2CF00, &lit_4427);

/* 80B270E0-80B27174 000A20 0094+00 1/1 0/0 0/0 .text            Draw__11daNpc_Uri_cFv */
void daNpc_Uri_c::Draw() {
    // NONMATCHING
}

/* 80B27174-80B27194 000AB4 0020+00 1/1 0/0 0/0 .text
 * createHeapCallBack__11daNpc_Uri_cFP10fopAc_ac_c              */
void daNpc_Uri_c::createHeapCallBack(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 80B27194-80B271EC 000AD4 0058+00 1/1 0/0 0/0 .text ctrlJointCallBack__11daNpc_Uri_cFP8J3DJointi
 */
void daNpc_Uri_c::ctrlJointCallBack(J3DJoint* param_0, int param_1) {
    // NONMATCHING
}

/* 80B271EC-80B27260 000B2C 0074+00 1/1 0/0 0/0 .text            getType__11daNpc_Uri_cFv */
void daNpc_Uri_c::getType() {
    // NONMATCHING
}

/* 80B27260-80B272F0 000BA0 0090+00 1/1 0/0 0/0 .text            isDelete__11daNpc_Uri_cFv */
void daNpc_Uri_c::isDelete() {
    // NONMATCHING
}

/* 80B272F0-80B27750 000C30 0460+00 1/1 0/0 0/0 .text            reset__11daNpc_Uri_cFv */
void daNpc_Uri_c::reset() {
    // NONMATCHING
}

/* 80B27750-80B27820 001090 00D0+00 1/0 0/0 0/0 .text            afterJntAnm__11daNpc_Uri_cFi */
void daNpc_Uri_c::afterJntAnm(int param_0) {
    // NONMATCHING
}

/* 80B27820-80B27994 001160 0174+00 1/0 0/0 0/0 .text            setParam__11daNpc_Uri_cFv */
void daNpc_Uri_c::setParam() {
    // NONMATCHING
}

/* 80B27994-80B27B3C 0012D4 01A8+00 1/0 0/0 0/0 .text            checkChangeEvt__11daNpc_Uri_cFv */
void daNpc_Uri_c::checkChangeEvt() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80B2CF04-80B2CF08 0000F0 0004+00 2/6 0/0 0/0 .rodata          @4713 */
SECTION_RODATA static f32 const lit_4713 = -1.0f;
COMPILER_STRIP_GATE(0x80B2CF04, &lit_4713);

/* 80B27B3C-80B27BF0 00147C 00B4+00 2/0 0/0 0/0 .text            setAfterTalkMotion__11daNpc_Uri_cFv
 */
void daNpc_Uri_c::setAfterTalkMotion() {
    // NONMATCHING
}

/* 80B27BF0-80B27C8C 001530 009C+00 1/1 0/0 0/0 .text            srchActors__11daNpc_Uri_cFv */
void daNpc_Uri_c::srchActors() {
    // NONMATCHING
}

/* 80B27C8C-80B27D2C 0015CC 00A0+00 1/0 0/0 0/0 .text            evtTalk__11daNpc_Uri_cFv */
void daNpc_Uri_c::evtTalk() {
    // NONMATCHING
}

/* 80B27D2C-80B27DF4 00166C 00C8+00 1/0 0/0 0/0 .text            evtCutProc__11daNpc_Uri_cFv */
void daNpc_Uri_c::evtCutProc() {
    // NONMATCHING
}

/* 80B27DF4-80B27F14 001734 0120+00 1/0 0/0 0/0 .text            action__11daNpc_Uri_cFv */
void daNpc_Uri_c::action() {
    // NONMATCHING
}

/* 80B27F14-80B27FD8 001854 00C4+00 1/0 0/0 0/0 .text            beforeMove__11daNpc_Uri_cFv */
void daNpc_Uri_c::beforeMove() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80B2CF08-80B2CF0C 0000F4 0004+00 0/1 0/0 0/0 .rodata          @4875 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4875 = -30.0f;
COMPILER_STRIP_GATE(0x80B2CF08, &lit_4875);
#pragma pop

/* 80B2CF0C-80B2CF10 0000F8 0004+00 0/2 0/0 0/0 .rodata          @4876 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4876 = 10.0f;
COMPILER_STRIP_GATE(0x80B2CF0C, &lit_4876);
#pragma pop

/* 80B2CF10-80B2CF14 0000FC 0004+00 0/1 0/0 0/0 .rodata          @4877 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4877 = 0x38C90FDB;
COMPILER_STRIP_GATE(0x80B2CF10, &lit_4877);
#pragma pop

/* 80B2CF14-80B2CF18 000100 0004+00 0/2 0/0 0/0 .rodata          @4878 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4878 = -60.0f;
COMPILER_STRIP_GATE(0x80B2CF14, &lit_4878);
#pragma pop

/* 80B2CF18-80B2CF1C 000104 0004+00 0/2 0/0 0/0 .rodata          @4879 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4879 = 20.0f;
COMPILER_STRIP_GATE(0x80B2CF18, &lit_4879);
#pragma pop

/* 80B2CF1C-80B2CF20 000108 0004+00 0/1 0/0 0/0 .rodata          @4880 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4880 = 3.0f;
COMPILER_STRIP_GATE(0x80B2CF1C, &lit_4880);
#pragma pop

/* 80B2CF20-80B2CF24 00010C 0004+00 0/1 0/0 0/0 .rodata          @4881 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4881 = 11.0f;
COMPILER_STRIP_GATE(0x80B2CF20, &lit_4881);
#pragma pop

/* 80B2CF24-80B2CF2C 000110 0008+00 1/6 0/0 0/0 .rodata          @4883 */
SECTION_RODATA static u8 const lit_4883[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B2CF24, &lit_4883);

/* 80B2DD18-80B2DD1C 000008 0001+03 1/1 0/0 0/0 .bss             @1109 */
static u8 lit_1109[1 + 3 /* padding */];

/* 80B2DD1C-80B2DD20 00000C 0001+03 0/0 0/0 0/0 .bss             @1107 */
#pragma push
#pragma force_active on
static u8 lit_1107[1 + 3 /* padding */];
#pragma pop

/* 80B2DD20-80B2DD24 000010 0001+03 0/0 0/0 0/0 .bss             @1105 */
#pragma push
#pragma force_active on
static u8 lit_1105[1 + 3 /* padding */];
#pragma pop

/* 80B2DD24-80B2DD28 000014 0001+03 0/0 0/0 0/0 .bss             @1104 */
#pragma push
#pragma force_active on
static u8 lit_1104[1 + 3 /* padding */];
#pragma pop

/* 80B2DD28-80B2DD2C 000018 0001+03 0/0 0/0 0/0 .bss             @1099 */
#pragma push
#pragma force_active on
static u8 lit_1099[1 + 3 /* padding */];
#pragma pop

/* 80B2DD2C-80B2DD30 00001C 0001+03 0/0 0/0 0/0 .bss             @1097 */
#pragma push
#pragma force_active on
static u8 lit_1097[1 + 3 /* padding */];
#pragma pop

/* 80B2DD30-80B2DD34 000020 0001+03 0/0 0/0 0/0 .bss             @1095 */
#pragma push
#pragma force_active on
static u8 lit_1095[1 + 3 /* padding */];
#pragma pop

/* 80B2DD34-80B2DD38 000024 0001+03 0/0 0/0 0/0 .bss             @1094 */
#pragma push
#pragma force_active on
static u8 lit_1094[1 + 3 /* padding */];
#pragma pop

/* 80B2DD38-80B2DD3C 000028 0001+03 0/0 0/0 0/0 .bss             @1057 */
#pragma push
#pragma force_active on
static u8 lit_1057[1 + 3 /* padding */];
#pragma pop

/* 80B2DD3C-80B2DD40 00002C 0001+03 0/0 0/0 0/0 .bss             @1055 */
#pragma push
#pragma force_active on
static u8 lit_1055[1 + 3 /* padding */];
#pragma pop

/* 80B2DD40-80B2DD44 000030 0001+03 0/0 0/0 0/0 .bss             @1053 */
#pragma push
#pragma force_active on
static u8 lit_1053[1 + 3 /* padding */];
#pragma pop

/* 80B2DD44-80B2DD48 000034 0001+03 0/0 0/0 0/0 .bss             @1052 */
#pragma push
#pragma force_active on
static u8 lit_1052[1 + 3 /* padding */];
#pragma pop

/* 80B2DD48-80B2DD4C 000038 0001+03 0/0 0/0 0/0 .bss             @1014 */
#pragma push
#pragma force_active on
static u8 lit_1014[1 + 3 /* padding */];
#pragma pop

/* 80B2DD4C-80B2DD50 00003C 0001+03 0/0 0/0 0/0 .bss             @1012 */
#pragma push
#pragma force_active on
static u8 lit_1012[1 + 3 /* padding */];
#pragma pop

/* 80B2DD50-80B2DD54 000040 0001+03 0/0 0/0 0/0 .bss             @1010 */
#pragma push
#pragma force_active on
static u8 lit_1010[1 + 3 /* padding */];
#pragma pop

/* 80B2DD54-80B2DD58 000044 0001+03 0/0 0/0 0/0 .bss             @1009 */
#pragma push
#pragma force_active on
static u8 lit_1009[1 + 3 /* padding */];
#pragma pop

/* 80B2DD58-80B2DD64 000048 000C+00 1/1 0/0 0/0 .bss             @3821 */
static u8 lit_3821[12];

/* 80B2DD64-80B2DD68 000054 0004+00 1/1 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[4];

/* 80B2DD68-80B2DD78 000058 000C+04 0/1 0/0 0/0 .bss             @4816 */
#pragma push
#pragma force_active on
static u8 lit_4816[12 + 4 /* padding */];
#pragma pop

/* 80B2DD78-80B2DD84 000068 000C+00 0/1 0/0 0/0 .bss             prtclScl$4815 */
#pragma push
#pragma force_active on
static u8 prtclScl[12];
#pragma pop

/* 80B27FD8-80B28318 001918 0340+00 1/0 0/0 0/0 .text            setAttnPos__11daNpc_Uri_cFv */
void daNpc_Uri_c::setAttnPos() {
    // NONMATCHING
}

/* 80B28318-80B284D4 001C58 01BC+00 1/0 0/0 0/0 .text            setCollision__11daNpc_Uri_cFv */
void daNpc_Uri_c::setCollision() {
    // NONMATCHING
}

/* 80B284D4-80B284DC 001E14 0008+00 1/0 0/0 0/0 .text            drawDbgInfo__11daNpc_Uri_cFv */
bool daNpc_Uri_c::drawDbgInfo() {
    return false;
}

/* ############################################################################################## */
/* 80B2CF2C-80B2CF34 000118 0008+00 0/2 0/0 0/0 .rodata          @4941 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4941[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B2CF2C, &lit_4941);
#pragma pop

/* 80B2CF34-80B2CF3C 000120 0008+00 0/2 0/0 0/0 .rodata          @4942 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4942[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B2CF34, &lit_4942);
#pragma pop

/* 80B2CF3C-80B2CF44 000128 0008+00 0/2 0/0 0/0 .rodata          @4943 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4943[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B2CF3C, &lit_4943);
#pragma pop

/* 80B2CF44-80B2CF48 000130 0004+00 1/1 0/0 0/0 .rodata          jointNo$5001 */
SECTION_RODATA static u8 const jointNo[4] = {
    0x00,
    0x00,
    0x00,
    0x0C,
};
COMPILER_STRIP_GATE(0x80B2CF44, &jointNo);

/* 80B284DC-80B285B4 001E1C 00D8+00 1/0 0/0 0/0 .text            drawOtherMdl__11daNpc_Uri_cFv */
void daNpc_Uri_c::drawOtherMdl() {
    // NONMATCHING
}

/* 80B285B4-80B285EC 001EF4 0038+00 1/0 0/0 0/0 .text afterSetMotionAnm__11daNpc_Uri_cFiifi */
void daNpc_Uri_c::afterSetMotionAnm(int param_0, int param_1, f32 param_2, int param_3) {
    // NONMATCHING
}

/* 80B285EC-80B28618 001F2C 002C+00 1/0 0/0 0/0 .text            changeBck__11daNpc_Uri_cFPiPi */
void daNpc_Uri_c::changeBck(int* param_0, int* param_1) {
    // NONMATCHING
}

/* 80B28618-80B28644 001F58 002C+00 1/0 0/0 0/0 .text            changeBtp__11daNpc_Uri_cFPiPi */
void daNpc_Uri_c::changeBtp(int* param_0, int* param_1) {
    // NONMATCHING
}

/* 80B28644-80B28794 001F84 0150+00 1/1 0/0 0/0 .text            selectAction__11daNpc_Uri_cFv */
void daNpc_Uri_c::selectAction() {
    // NONMATCHING
}

/* 80B28794-80B287C0 0020D4 002C+00 2/2 0/0 0/0 .text
 * chkAction__11daNpc_Uri_cFM11daNpc_Uri_cFPCvPvPv_i            */
void daNpc_Uri_c::chkAction(int (daNpc_Uri_c::*param_0)(void*)) {
    // NONMATCHING
}

/* 80B287C0-80B28868 002100 00A8+00 2/2 0/0 0/0 .text
 * setAction__11daNpc_Uri_cFM11daNpc_Uri_cFPCvPvPv_i            */
void daNpc_Uri_c::setAction(int (daNpc_Uri_c::*param_0)(void*)) {
    // NONMATCHING
}

/* 80B28868-80B288DC 0021A8 0074+00 2/2 0/0 0/0 .text chkPlayerCarryBasket__11daNpc_Uri_cFv */
void daNpc_Uri_c::chkPlayerCarryBasket() {
    // NONMATCHING
}

/* 80B288DC-80B28910 00221C 0034+00 1/1 0/0 0/0 .text chkPlayerGetWoodShield__11daNpc_Uri_cFv */
void daNpc_Uri_c::chkPlayerGetWoodShield() {
    // NONMATCHING
}

/* 80B28910-80B28FB8 002250 06A8+00 2/2 0/0 0/0 .text getTutorialCond__11daNpc_Uri_cF4cXyz */
void daNpc_Uri_c::getTutorialCond(cXyz param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80B2CF48-80B2CF50 000134 0008+00 1/1 0/0 0/0 .rodata          @5394 */
SECTION_RODATA static u8 const lit_5394[8] = {
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
};
COMPILER_STRIP_GATE(0x80B2CF48, &lit_5394);

/* 80B2CF74-80B2CF74 000160 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80B2D038 = "prm";
SECTION_DEAD static char const* const stringBase_80B2D03C = "msgNo";
#pragma pop

/* 80B28FB8-80B29198 0028F8 01E0+00 1/0 0/0 0/0 .text            cutConversation__11daNpc_Uri_cFi */
void daNpc_Uri_c::cutConversation(int param_0) {
    // NONMATCHING
}

/* 80B29198-80B293C0 002AD8 0228+00 1/0 0/0 0/0 .text cutStartCarryTutorial__11daNpc_Uri_cFi */
void daNpc_Uri_c::cutStartCarryTutorial(int param_0) {
    // NONMATCHING
}

/* 80B293C0-80B296B8 002D00 02F8+00 1/0 0/0 0/0 .text cutEndCarryTutorial__11daNpc_Uri_cFi */
void daNpc_Uri_c::cutEndCarryTutorial(int param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80B2CF50-80B2CF58 00013C 0008+00 1/1 0/0 0/0 .rodata          @5573 */
SECTION_RODATA static u8 const lit_5573[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B2CF50, &lit_5573);

/* 80B2CF58-80B2CF60 000144 0008+00 1/1 0/0 0/0 .rodata          @5580 */
SECTION_RODATA static u8 const lit_5580[8] = {
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
};
COMPILER_STRIP_GATE(0x80B2CF58, &lit_5580);

/* 80B296B8-80B2985C 002FF8 01A4+00 1/0 0/0 0/0 .text cutConversationWithMoi__11daNpc_Uri_cFi */
void daNpc_Uri_c::cutConversationWithMoi(int param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80B2CF60-80B2CF64 00014C 0004+00 0/2 0/0 0/0 .rodata          @5699 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5699 = 150.0f;
COMPILER_STRIP_GATE(0x80B2CF60, &lit_5699);
#pragma pop

/* 80B2CF74-80B2CF74 000160 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80B2D042 = "timer";
#pragma pop

/* 80B2985C-80B29BA4 00319C 0348+00 1/0 0/0 0/0 .text            cutFindWolf__11daNpc_Uri_cFi */
void daNpc_Uri_c::cutFindWolf(int param_0) {
    // NONMATCHING
}

/* 80B29BA4-80B29EA0 0034E4 02FC+00 1/0 0/0 0/0 .text            cutMeetingAgain__11daNpc_Uri_cFi */
void daNpc_Uri_c::cutMeetingAgain(int param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80B2CF64-80B2CF68 000150 0004+00 0/3 0/0 0/0 .rodata          @5866 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5866 = 0.5f;
COMPILER_STRIP_GATE(0x80B2CF64, &lit_5866);
#pragma pop

/* 80B2CF68-80B2CF6C 000154 0004+00 0/3 0/0 0/0 .rodata          @5867 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5867 = 1.5f;
COMPILER_STRIP_GATE(0x80B2CF68, &lit_5867);
#pragma pop

/* 80B2CF6C-80B2CF70 000158 0004+00 0/1 0/0 0/0 .rodata          @5868 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5868 = 14.0f;
COMPILER_STRIP_GATE(0x80B2CF6C, &lit_5868);
#pragma pop

/* 80B29EA0-80B2A1B4 0037E0 0314+00 1/0 0/0 0/0 .text            krun__11daNpc_Uri_cFPv */
void daNpc_Uri_c::krun(void* param_0) {
    // NONMATCHING
}

/* 80B2A1B4-80B2AB60 003AF4 09AC+00 2/0 0/0 0/0 .text            wait__11daNpc_Uri_cFPv */
void daNpc_Uri_c::wait(void* param_0) {
    // NONMATCHING
}

/* 80B2AB60-80B2B24C 0044A0 06EC+00 1/0 0/0 0/0 .text            walk__11daNpc_Uri_cFPv */
void daNpc_Uri_c::walk(void* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80B2CF70-80B2CF74 00015C 0004+00 0/1 0/0 0/0 .rodata          @6565 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6565 = 4.0f;
COMPILER_STRIP_GATE(0x80B2CF70, &lit_6565);
#pragma pop

/* 80B2B24C-80B2B7C0 004B8C 0574+00 2/0 0/0 0/0 .text            sitWait__11daNpc_Uri_cFPv */
void daNpc_Uri_c::sitWait(void* param_0) {
    // NONMATCHING
}

/* 80B2B7C0-80B2BA08 005100 0248+00 3/0 0/0 0/0 .text            talk__11daNpc_Uri_cFPv */
void daNpc_Uri_c::talk(void* param_0) {
    // NONMATCHING
}

/* 80B2BA08-80B2BA28 005348 0020+00 1/0 0/0 0/0 .text            daNpc_Uri_Create__FPv */
static void daNpc_Uri_Create(void* param_0) {
    // NONMATCHING
}

/* 80B2BA28-80B2BA48 005368 0020+00 1/0 0/0 0/0 .text            daNpc_Uri_Delete__FPv */
static void daNpc_Uri_Delete(void* param_0) {
    // NONMATCHING
}

/* 80B2BA48-80B2BA68 005388 0020+00 1/0 0/0 0/0 .text            daNpc_Uri_Execute__FPv */
static void daNpc_Uri_Execute(void* param_0) {
    // NONMATCHING
}

/* 80B2BA68-80B2BA88 0053A8 0020+00 1/0 0/0 0/0 .text            daNpc_Uri_Draw__FPv */
static void daNpc_Uri_Draw(void* param_0) {
    // NONMATCHING
}

/* 80B2BA88-80B2BA90 0053C8 0008+00 1/0 0/0 0/0 .text            daNpc_Uri_IsDelete__FPv */
static bool daNpc_Uri_IsDelete(void* param_0) {
    return true;
}

/* 80B2BA90-80B2BAC0 0053D0 0030+00 1/0 0/0 0/0 .text            calc__11J3DTexNoAnmCFPUs */
// void J3DTexNoAnm::calc(u16* param_0) const {
extern "C" void calc__11J3DTexNoAnmCFPUs() {
    // NONMATCHING
}

/* 80B2BAC0-80B2BB08 005400 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
// cCcD_GStts::~cCcD_GStts() {
extern "C" void __dt__10cCcD_GSttsFv() {
    // NONMATCHING
}

/* 80B2BB08-80B2BE90 005448 0388+00 1/1 0/0 0/0 .text            __dt__8daNpcT_cFv */
// daNpcT_c::~daNpcT_c() {
extern "C" void __dt__8daNpcT_cFv() {
    // NONMATCHING
}

/* 80B2BE90-80B2BECC 0057D0 003C+00 4/4 0/0 0/0 .text            __dt__4cXyzFv */
// cXyz::~cXyz() {
extern "C" void __dt__4cXyzFv() {
    // NONMATCHING
}

/* 80B2BECC-80B2BF08 00580C 003C+00 2/2 0/0 0/0 .text            __dt__5csXyzFv */
// csXyz::~csXyz() {
extern "C" void __dt__5csXyzFv() {
    // NONMATCHING
}

/* 80B2BF08-80B2BF50 005848 0048+00 3/2 0/0 0/0 .text            __dt__18daNpcT_ActorMngr_cFv */
// daNpcT_ActorMngr_c::~daNpcT_ActorMngr_c() {
extern "C" void __dt__18daNpcT_ActorMngr_cFv() {
    // NONMATCHING
}

/* 80B2BF50-80B2BF98 005890 0048+00 1/0 0/0 0/0 .text            __dt__13daNpcT_Path_cFv */
// daNpcT_Path_c::~daNpcT_Path_c() {
extern "C" void __dt__13daNpcT_Path_cFv() {
    // NONMATCHING
}

/* 80B2BF98-80B2BFD4 0058D8 003C+00 1/1 0/0 0/0 .text            __ct__18daNpcT_ActorMngr_cFv */
// daNpcT_ActorMngr_c::daNpcT_ActorMngr_c() {
extern "C" void __ct__18daNpcT_ActorMngr_cFv() {
    // NONMATCHING
}

/* 80B2BFD4-80B2C01C 005914 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
// cM3dGCyl::~cM3dGCyl() {
extern "C" void __dt__8cM3dGCylFv() {
    // NONMATCHING
}

/* 80B2C01C-80B2C064 00595C 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
// cM3dGAab::~cM3dGAab() {
extern "C" void __dt__8cM3dGAabFv() {
    // NONMATCHING
}

/* 80B2C064-80B2C468 0059A4 0404+00 1/1 0/0 0/0 .text
 * __ct__8daNpcT_cFPC26daNpcT_faceMotionAnmData_cPC22daNpcT_motionAnmData_cPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPC16daNpcT_evtData_cPPc
 */
// daNpcT_c::daNpcT_c(daNpcT_faceMotionAnmData_c const* param_0,
//                       daNpcT_motionAnmData_c const* param_1,
// daNpcT_MotionSeqMngr_c::sequenceStepData_c const* param_2, int param_3,
//                          daNpcT_MotionSeqMngr_c::sequenceStepData_c const* param_4, int param_5,
//                       daNpcT_evtData_c const* param_6, char** param_7) {
extern "C" void __ct__8daNpcT_cFPC26daNpcT_faceMotionAnmData_cPC22daNpcT_motionAnmData_cPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPC16daNpcT_evtData_cPPc() {
    // NONMATCHING
}

/* 80B2C468-80B2C46C 005DA8 0004+00 1/1 0/0 0/0 .text            __ct__5csXyzFv */
// csXyz::csXyz() {
extern "C" void __ct__5csXyzFv() {
    /* empty function */
}

/* 80B2C46C-80B2C568 005DAC 00FC+00 1/0 0/0 0/0 .text            __dt__15daNpcT_JntAnm_cFv */
// daNpcT_JntAnm_c::~daNpcT_JntAnm_c() {
extern "C" void __dt__15daNpcT_JntAnm_cFv() {
    // NONMATCHING
}

/* 80B2C568-80B2C56C 005EA8 0004+00 1/1 0/0 0/0 .text            __ct__4cXyzFv */
// cXyz::cXyz() {
extern "C" void __ct__4cXyzFv() {
    /* empty function */
}

/* 80B2C56C-80B2C5B4 005EAC 0048+00 1/0 0/0 0/0 .text            __dt__22daNpcT_MotionSeqMngr_cFv */
// daNpcT_MotionSeqMngr_c::~daNpcT_MotionSeqMngr_c() {
extern "C" void __dt__22daNpcT_MotionSeqMngr_cFv() {
    // NONMATCHING
}

/* 80B2C5B4-80B2C624 005EF4 0070+00 1/0 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
// dBgS_AcchCir::~dBgS_AcchCir() {
extern "C" void __dt__12dBgS_AcchCirFv() {
    // NONMATCHING
}

/* 80B2C624-80B2C680 005F64 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
// dCcD_GStts::~dCcD_GStts() {
extern "C" void __dt__10dCcD_GSttsFv() {
    // NONMATCHING
}

/* 80B2C680-80B2C6F0 005FC0 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
// dBgS_ObjAcch::~dBgS_ObjAcch() {
extern "C" void __dt__12dBgS_ObjAcchFv() {
    // NONMATCHING
}

/* 80B2C6F0-80B2C738 006030 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
// J3DFrameCtrl::~J3DFrameCtrl() {
extern "C" void __dt__12J3DFrameCtrlFv() {
    // NONMATCHING
}

/* 80B2C738-80B2C854 006078 011C+00 1/1 0/0 0/0 .text setEyeAngleY__15daNpcT_JntAnm_cF4cXyzsifs */
// void daNpcT_JntAnm_c::setEyeAngleY(cXyz param_0, s16 param_1, int param_2, f32 param_3,
//                                       s16 param_4) {
extern "C" void setEyeAngleY__15daNpcT_JntAnm_cF4cXyzsifs() {
    // NONMATCHING
}

/* 80B2C854-80B2CA5C 006194 0208+00 1/1 0/0 0/0 .text setEyeAngleX__15daNpcT_JntAnm_cF4cXyzfs */
// void daNpcT_JntAnm_c::setEyeAngleX(cXyz param_0, f32 param_1, s16 param_2) {
extern "C" void setEyeAngleX__15daNpcT_JntAnm_cF4cXyzfs() {
    // NONMATCHING
}

/* 80B2CA5C-80B2CA60 00639C 0004+00 1/0 0/0 0/0 .text            ctrlSubFaceMotion__8daNpcT_cFi */
// void daNpcT_c::ctrlSubFaceMotion(int param_0) {
extern "C" void ctrlSubFaceMotion__8daNpcT_cFi() {
    /* empty function */
}

/* 80B2CA60-80B2CA68 0063A0 0008+00 1/0 0/0 0/0 .text            getEyeballLMaterialNo__8daNpcT_cFv
 */
// bool daNpcT_c::getEyeballLMaterialNo() {
extern "C" bool getEyeballLMaterialNo__8daNpcT_cFv() {
    return false;
}

/* 80B2CA68-80B2CA70 0063A8 0008+00 1/0 0/0 0/0 .text            getEyeballRMaterialNo__8daNpcT_cFv
 */
// bool daNpcT_c::getEyeballRMaterialNo() {
extern "C" bool getEyeballRMaterialNo__8daNpcT_cFv() {
    return false;
}

/* 80B2CA70-80B2CA78 0063B0 0008+00 1/0 0/0 0/0 .text            evtEndProc__8daNpcT_cFv */
// bool daNpcT_c::evtEndProc() {
extern "C" bool evtEndProc__8daNpcT_cFv() {
    return true;
}

/* 80B2CA7C-80B2CA84 0063BC 0008+00 1/0 0/0 0/0 .text            chkXYItems__8daNpcT_cFv */
// bool daNpcT_c::chkXYItems() {
extern "C" bool chkXYItems__8daNpcT_cFv() {
    return false;
}

/* 80B2CA84-80B2CA9C 0063C4 0018+00 1/0 0/0 0/0 .text            decTmr__8daNpcT_cFv */
// void daNpcT_c::decTmr() {
extern "C" void decTmr__8daNpcT_cFv() {
    // NONMATCHING
}

/* 80B2CA9C-80B2CAA0 0063DC 0004+00 1/0 0/0 0/0 .text            drawGhost__8daNpcT_cFv */
// void daNpcT_c::drawGhost() {
extern "C" void drawGhost__8daNpcT_cFv() {
    /* empty function */
}

/* 80B2CAA0-80B2CAA8 0063E0 0008+00 1/0 0/0 0/0 .text afterSetFaceMotionAnm__8daNpcT_cFiifi */
// bool daNpcT_c::afterSetFaceMotionAnm(int param_0, int param_1, f32 param_2, int param_3) {
extern "C" bool afterSetFaceMotionAnm__8daNpcT_cFiifi() {
    return true;
}

/* 80B2CAA8-80B2CAD8 0063E8 0030+00 1/0 0/0 0/0 .text
 * getFaceMotionAnm__8daNpcT_cF26daNpcT_faceMotionAnmData_c     */
// void daNpcT_c::getFaceMotionAnm(daNpcT_faceMotionAnmData_c param_0) {
extern "C" void getFaceMotionAnm__8daNpcT_cF26daNpcT_faceMotionAnmData_c() {
    // NONMATCHING
}

/* 80B2CAD8-80B2CB08 006418 0030+00 1/0 0/0 0/0 .text
 * getMotionAnm__8daNpcT_cF22daNpcT_motionAnmData_c             */
// void daNpcT_c::getMotionAnm(daNpcT_motionAnmData_c param_0) {
extern "C" void getMotionAnm__8daNpcT_cF22daNpcT_motionAnmData_c() {
    // NONMATCHING
}

/* 80B2CB08-80B2CB0C 006448 0004+00 1/0 0/0 0/0 .text            changeAnm__8daNpcT_cFPiPi */
// void daNpcT_c::changeAnm(int* param_0, int* param_1) {
extern "C" void changeAnm__8daNpcT_cFPiPi() {
    /* empty function */
}

/* 80B2CB0C-80B2CB10 00644C 0004+00 1/0 0/0 0/0 .text            changeBtk__8daNpcT_cFPiPi */
// void daNpcT_c::changeBtk(int* param_0, int* param_1) {
extern "C" void changeBtk__8daNpcT_cFPiPi() {
    /* empty function */
}

/* 80B2CB10-80B2CB2C 006450 001C+00 2/2 0/0 0/0 .text            cLib_calcTimer<i>__FPi */
extern "C" void func_80B2CB10(void* _this, int* param_0) {
    // NONMATCHING
}

/* 80B2CB2C-80B2CB68 00646C 003C+00 3/3 0/0 0/0 .text            cLib_getRndValue<f>__Fff */
extern "C" void func_80B2CB2C(void* _this, f32 param_0, f32 param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80B2DD00-80B2DD0C 000CB8 000C+00 2/2 0/0 0/0 .data            __vt__17daNpc_Uri_Param_c */
SECTION_DATA extern void* __vt__17daNpc_Uri_Param_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__17daNpc_Uri_Param_cFv,
};

/* 80B2CB68-80B2CC64 0064A8 00FC+00 0/0 1/0 0/0 .text            __sinit_d_a_npc_uri_cpp */
void __sinit_d_a_npc_uri_cpp() {
    // NONMATCHING
}

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80B2CB68, __sinit_d_a_npc_uri_cpp);
#pragma pop

/* 80B2CC64-80B2CD44 0065A4 00E0+00 1/1 0/0 0/0 .text
 * __ct__11daNpc_Uri_cFPC26daNpcT_faceMotionAnmData_cPC22daNpcT_motionAnmData_cPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPCQ222daNpcT_MotionSeqMngr_c18sequenceStepData_ciPC16daNpcT_evtData_cPPc
 */
daNpc_Uri_c::daNpc_Uri_c(daNpcT_faceMotionAnmData_c const* param_0,
                             daNpcT_motionAnmData_c const* param_1,
                             daNpcT_MotionSeqMngr_c::sequenceStepData_c const* param_2, int param_3,
                             daNpcT_MotionSeqMngr_c::sequenceStepData_c const* param_4, int param_5,
                             daNpcT_evtData_c const* param_6, char** param_7) {
    // NONMATCHING
}

/* 80B2CD44-80B2CD4C 006684 0008+00 1/0 0/0 0/0 .text getEyeballMaterialNo__11daNpc_Uri_cFv */
s32 daNpc_Uri_c::getEyeballMaterialNo() {
    return 2;
}

/* 80B2CD4C-80B2CD54 00668C 0008+00 1/0 0/0 0/0 .text            getHeadJointNo__11daNpc_Uri_cFv */
s32 daNpc_Uri_c::getHeadJointNo() {
    return 4;
}

/* 80B2CD54-80B2CD5C 006694 0008+00 1/0 0/0 0/0 .text            getNeckJointNo__11daNpc_Uri_cFv */
s32 daNpc_Uri_c::getNeckJointNo() {
    return 3;
}

/* 80B2CD5C-80B2CD64 00669C 0008+00 1/0 0/0 0/0 .text            getBackboneJointNo__11daNpc_Uri_cFv
 */
bool daNpc_Uri_c::getBackboneJointNo() {
    return true;
}

/* 80B2CD64-80B2CD74 0066A4 0010+00 1/0 0/0 0/0 .text            checkChangeJoint__11daNpc_Uri_cFi
 */
void daNpc_Uri_c::checkChangeJoint(int param_0) {
    // NONMATCHING
}

/* 80B2CD74-80B2CD84 0066B4 0010+00 1/0 0/0 0/0 .text            checkRemoveJoint__11daNpc_Uri_cFi
 */
void daNpc_Uri_c::checkRemoveJoint(int param_0) {
    // NONMATCHING
}

/* 80B2CD84-80B2CD8C 0066C4 0008+00 1/0 0/0 0/0 .text            getFootLJointNo__11daNpc_Uri_cFv */
s32 daNpc_Uri_c::getFootLJointNo() {
    return 25;
}

/* 80B2CD8C-80B2CD94 0066CC 0008+00 1/0 0/0 0/0 .text            getFootRJointNo__11daNpc_Uri_cFv */
s32 daNpc_Uri_c::getFootRJointNo() {
    return 28;
}

/* 80B2CD94-80B2CDDC 0066D4 0048+00 2/1 0/0 0/0 .text            __dt__17daNpc_Uri_Param_cFv */
daNpc_Uri_Param_c::~daNpc_Uri_Param_c() {
    // NONMATCHING
}

/* 80B2CDDC-80B2CDE4 00671C 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
static void func_80B2CDDC() {
    // NONMATCHING
}

/* 80B2CDE4-80B2CDEC 006724 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
static void func_80B2CDE4() {
    // NONMATCHING
}

/* 80B2CDEC-80B2CE00 00672C 0014+00 1/1 0/0 0/0 .text            getDistTable__12dAttention_cFi */
// void dAttention_c::getDistTable(int param_0) {
extern "C" void getDistTable__12dAttention_cFi() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80B2DD84-80B2DD88 000074 0004+00 0/0 0/0 0/0 .bss
 * sInstance__40JASGlobalInstance<19JASDefaultBankTable>        */
#pragma push
#pragma force_active on
static u8 data_80B2DD84[4];
#pragma pop

/* 80B2DD88-80B2DD8C 000078 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JASAudioThread>             */
#pragma push
#pragma force_active on
static u8 data_80B2DD88[4];
#pragma pop

/* 80B2DD8C-80B2DD90 00007C 0004+00 0/0 0/0 0/0 .bss sInstance__27JASGlobalInstance<7Z2SeMgr> */
#pragma push
#pragma force_active on
static u8 data_80B2DD8C[4];
#pragma pop

/* 80B2DD90-80B2DD94 000080 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8Z2SeqMgr> */
#pragma push
#pragma force_active on
static u8 data_80B2DD90[4];
#pragma pop

/* 80B2DD94-80B2DD98 000084 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SceneMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80B2DD94[4];
#pragma pop

/* 80B2DD98-80B2DD9C 000088 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2StatusMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80B2DD98[4];
#pragma pop

/* 80B2DD9C-80B2DDA0 00008C 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2DebugSys>
 */
#pragma push
#pragma force_active on
static u8 data_80B2DD9C[4];
#pragma pop

/* 80B2DDA0-80B2DDA4 000090 0004+00 0/0 0/0 0/0 .bss
 * sInstance__36JASGlobalInstance<15JAISoundStarter>            */
#pragma push
#pragma force_active on
static u8 data_80B2DDA0[4];
#pragma pop

/* 80B2DDA4-80B2DDA8 000094 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14Z2SoundStarter>             */
#pragma push
#pragma force_active on
static u8 data_80B2DDA4[4];
#pragma pop

/* 80B2DDA8-80B2DDAC 000098 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12Z2SpeechMgr2>               */
#pragma push
#pragma force_active on
static u8 data_80B2DDA8[4];
#pragma pop

/* 80B2DDAC-80B2DDB0 00009C 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8JAISeMgr> */
#pragma push
#pragma force_active on
static u8 data_80B2DDAC[4];
#pragma pop

/* 80B2DDB0-80B2DDB4 0000A0 0004+00 0/0 0/0 0/0 .bss sInstance__29JASGlobalInstance<9JAISeqMgr> */
#pragma push
#pragma force_active on
static u8 data_80B2DDB0[4];
#pragma pop

/* 80B2DDB4-80B2DDB8 0000A4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAIStreamMgr>               */
#pragma push
#pragma force_active on
static u8 data_80B2DDB4[4];
#pragma pop

/* 80B2DDB8-80B2DDBC 0000A8 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SoundMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80B2DDB8[4];
#pragma pop

/* 80B2DDBC-80B2DDC0 0000AC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAISoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_80B2DDBC[4];
#pragma pop

/* 80B2DDC0-80B2DDC4 0000B0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13JAUSoundTable>              */
#pragma push
#pragma force_active on
static u8 data_80B2DDC0[4];
#pragma pop

/* 80B2DDC4-80B2DDC8 0000B4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__38JASGlobalInstance<17JAUSoundNameTable>          */
#pragma push
#pragma force_active on
static u8 data_80B2DDC4[4];
#pragma pop

/* 80B2DDC8-80B2DDCC 0000B8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAUSoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_80B2DDC8[4];
#pragma pop

/* 80B2DDCC-80B2DDD0 0000BC 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SoundInfo>
 */
#pragma push
#pragma force_active on
static u8 data_80B2DDCC[4];
#pragma pop

/* 80B2DDD0-80B2DDD4 0000C0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2SoundObjMgr>              */
#pragma push
#pragma force_active on
static u8 data_80B2DDD0[4];
#pragma pop

/* 80B2DDD4-80B2DDD8 0000C4 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2Audience>
 */
#pragma push
#pragma force_active on
static u8 data_80B2DDD4[4];
#pragma pop

/* 80B2DDD8-80B2DDDC 0000C8 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2FxLineMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80B2DDD8[4];
#pragma pop

/* 80B2DDDC-80B2DDE0 0000CC 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2EnvSeMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80B2DDDC[4];
#pragma pop

/* 80B2DDE0-80B2DDE4 0000D0 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SpeechMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80B2DDE0[4];
#pragma pop

/* 80B2DDE4-80B2DDE8 0000D4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>              */
#pragma push
#pragma force_active on
static u8 data_80B2DDE4[4];
#pragma pop

/* 80B2CF74-80B2CF74 000160 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
