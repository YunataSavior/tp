/**
 * @file d_a_demo00.cpp
 * 
*/

#include "d/actor/d_a_demo00.h"
#include "dol2asm.h"
#include "d/d_camera.h"





//
// Forward References:
//

extern "C" void reset__16daDemo00_resID_cFv();
extern "C" void reset__16daDemo00_model_cFv();
extern "C" void __dt__10daDemo00_cFv();
extern "C" void __dt__12demo_s1_ke_sFv();
extern "C" void __dt__4cXyzFv();
extern "C" void __dt__8cM3dGPlaFv();
extern "C" static void get_foward_angle__FP4cXyzP4cXyzPsPs();
extern "C" void setBaseMtx__10daDemo00_cFv();
extern "C" void setShadowSize__10daDemo00_cFv();
extern "C" static void awaCheck__FP8J3DModel();
extern "C" static void createHeapCallBack__FP10fopAc_ac_c();
extern "C" void createHeap__10daDemo00_cFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" void actStandby__10daDemo00_cFP13dDemo_actor_c();
extern "C" void actPerformance__10daDemo00_cFP13dDemo_actor_c();
extern "C" void actLeaving__10daDemo00_cFP13dDemo_actor_c();
extern "C" static void mDad00_changeXluMaterial__FP11J3DMateriali();
extern "C" static void teduna_calc__FP4cXyzP4cXyzP4cXyzsi();
extern "C" static void teduna_draw__FP8J3DModelP19mDoExt_3DlineMat1_cP12dKy_tevstr_ciiii();
extern "C" static void teduna_ganon_hand_set__FP8J3DModelii();
extern "C" static void ke_control__FP10daDemo00_cP12demo_s1_ke_sif();
extern "C" static void ke_move__FP10daDemo00_cP19mDoExt_3DlineMat0_cP12demo_s1_ke_sif();
extern "C" static void ke_set__FP10daDemo00_c();
extern "C" static void daDemo00_Draw__FP10daDemo00_c();
extern "C" void draw__10daDemo00_cFv();
extern "C" static void daDemo00_Execute__FP10daDemo00_c();
extern "C" void execute__10daDemo00_cFv();
extern "C" static bool daDemo00_IsDelete__FP10daDemo00_c();
extern "C" static void daDemo00_Delete__FP10daDemo00_c();
extern "C" static void daDemo00_Create__FP10fopAc_ac_c();
extern "C" void __ct__12demo_s1_ke_sFv();
extern "C" void __ct__4cXyzFv();
extern "C" void __sinit_d_a_demo00_cpp();
extern "C" void func_804A87DC();
extern "C" void func_804A8814();
extern "C" extern char const* const d_a_demo00__stringBase0;

//
// External References:
//

extern "C" void fadeOut__13mDoGph_gInf_cFfR8_GXColor();
extern "C" void fadeOut__13mDoGph_gInf_cFf();
extern "C" void mDoMtx_XYZrotM__FPA4_fsss();
extern "C" void mDoMtx_XrotS__FPA4_fs();
extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_bpkAnmFP16J3DMaterialTableP11J3DAnmColoriifss();
extern "C" void entry__13mDoExt_bpkAnmFP16J3DMaterialTablef();
extern "C" void init__13mDoExt_btpAnmFP16J3DMaterialTableP16J3DAnmTexPatterniifss();
extern "C" void entry__13mDoExt_btpAnmFP16J3DMaterialTables();
extern "C" void init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss();
extern "C" void entry__13mDoExt_btkAnmFP16J3DMaterialTablef();
extern "C" void init__13mDoExt_brkAnmFP16J3DMaterialTableP15J3DAnmTevRegKeyiifss();
extern "C" void entry__13mDoExt_brkAnmFP16J3DMaterialTablef();
extern "C" void init__13mDoExt_blkAnmFP13J3DDeformDataP13J3DAnmClusteriifss();
extern "C" void mDoExt_modelTexturePatch__FP12J3DModelData();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void create__21mDoExt_invisibleModelFP8J3DModelUc();
extern "C" void entryDL__21mDoExt_invisibleModelFP4cXyz();
extern "C" void
__ct__16mDoExt_McaMorfSOFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiP10Z2CreatureUlUl();
extern "C" void setAnm__16mDoExt_McaMorfSOFP15J3DAnmTransformiffff();
extern "C" void play__16mDoExt_McaMorfSOFUlSc();
extern "C" void updateDL__16mDoExt_McaMorfSOFv();
extern "C" void modelCalc__16mDoExt_McaMorfSOFv();
extern "C" void stopZelAnime__16mDoExt_McaMorfSOFv();
extern "C" void init__19mDoExt_3DlineMat0_cFUsUsi();
extern "C" void update__19mDoExt_3DlineMat0_cFiR8_GXColorP12dKy_tevstr_c();
extern "C" void init__19mDoExt_3DlineMat1_cFUsUsP7ResTIMGi();
extern "C" void update__19mDoExt_3DlineMat1_cFiR8_GXColorP12dKy_tevstr_c();
extern "C" void setMat__26mDoExt_3DlineMatSortPacketFP18mDoExt_3DlineMat_c();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void mDoLib_project__FP3VecP3Vec();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_create__FsUlPC4cXyziPC5csXyzPC4cXyzSc();
extern "C" void fopAcM_DeleteHeap__FP10fopAc_ac_c();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_getPolygonAngle__FPC8cM3dGPlas();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void dComIfGd_setSimpleShadow__FP4cXyzffR13cBgS_PolyInfosfP9_GXTexObj();
extern "C" void
dComIfGd_setShadow__FUlScP8J3DModelP4cXyzffffR13cBgS_PolyInfoP12dKy_tevstr_csfP9_GXTexObj();
extern "C" void daMP_c_THPPlayerPlay__6daMP_cFv();
extern "C" void daMP_c_THPPlayerPause__6daMP_cFv();
extern "C" void onEventBit__11dSv_event_cFUs();
extern "C" void getDemoIDData__13dDemo_actor_cFPiPiPiPUsPUc();
extern "C" void dDemo_setDemoData__FP10fopAc_ac_cUcP14mDoExt_McaMorfPCciPUsUlSc();
extern "C" void getActor__14dDemo_object_cFUc();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void getIDRes__14dRes_control_cFPCcUsP11dRes_info_ci();
extern "C" void
setWaterRipple__13dPa_control_cFPUlR13cBgS_PolyInfoPC4cXyzfPC12dKy_tevstr_cPC4cXyzSc();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void dKyw_rain_set__Fi();
extern "C" void dKyr_get_vectle_calc__FP4cXyzP4cXyzP4cXyz();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void StartQuake__12dVibration_cFii4cXyz();
extern "C" void StopQuake__12dVibration_cFi();
extern "C" void GroundCross__4cBgSFP11cBgS_GndChk();
extern "C" void GetTriPla__4cBgSCFRC13cBgS_PolyInfoP8cM3dGPla();
extern "C" void __ct__11dBgS_GndChkFv();
extern "C" void __ct__18dBgS_CamGndChk_WtrFv();
extern "C" void __dt__18dBgS_CamGndChk_WtrFv();
extern "C" void execItemGet__FUc();
extern "C" void StartBlure__9dCamera_cFiP10fopAc_ac_cff();
extern "C" void dCam_getBody__Fv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void dKy_change_colpat__FUc();
extern "C" void dKy_tevstr_init__FP12dKy_tevstr_cScUc();
extern "C" void dKy_BossSpotLight_set__FP4cXyzfffP8_GXColorfUcUc();
extern "C" void dKy_pol_sound_get__FPC13cBgS_PolyInfo();
extern "C" void dKy_bg_MAxx_proc__FPv();
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __ml__4cXyzCFf();
extern "C" bool __ne__4cXyzCFRC3Vec();
extern "C" void atan2sX_Z__4cXyzCFv();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_initRnd2__Fiii();
extern "C" void cM_rndF2__Ff();
extern "C" void SetPos__11cBgS_GndChkFPC4cXyz();
extern "C" void cBgW_CheckBGround__Ff();
extern "C" void cLib_addCalc__FPfffff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void MtxPosition__FP4cXyzP4cXyz();
extern "C" void MtxPush__Fv();
extern "C" void MtxPull__Fv();
extern "C" void __ct__10Z2CreatureFv();
extern "C" void __dt__10Z2CreatureFv();
extern "C" void init__10Z2CreatureFP3VecP3VecUcUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void getName__10JUTNameTabCFUs();
extern "C" void setDeformData__8J3DModelFP13J3DDeformDataUl();
extern "C" void setSkinDeform__8J3DModelFP13J3DSkinDeformUl();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void __ct__13J3DSkinDeformFv();
extern "C" void removeMatColorAnimator__16J3DMaterialTableFP11J3DAnmColor();
extern "C" void removeTexNoAnimator__16J3DMaterialTableFP16J3DAnmTexPattern();
extern "C" void removeTexMtxAnimator__16J3DMaterialTableFP19J3DAnmTextureSRTKey();
extern "C" void removeTevRegAnimator__16J3DMaterialTableFP15J3DAnmTevRegKey();
extern "C" void __destroy_arr();
extern "C" void __construct_array();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_19();
extern "C" void _savegpr_22();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_19();
extern "C" void _restgpr_22();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" u8 const tempBitLabels__20dSv_event_tmp_flag_c[370 + 2 /* padding */];
extern "C" extern void* __vt__19mDoExt_3DlineMat1_c[5];
extern "C" extern void* __vt__19mDoExt_3DlineMat0_c[5];
extern "C" u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" u8 mWaterCheck__11fopAcM_wt_c[84 + 4 /* padding */];
extern "C" u8 mDemoArcName__20dStage_roomControl_c[10 + 2 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" extern u8 g_Counter[12 + 4 /* padding */];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" extern u32 g_blackColor;
extern "C" extern u32 g_saftyWhiteColor;
extern "C" u8 mFrameBufferTimg__13mDoGph_gInf_c[4];
extern "C" u8 m_object__7dDemo_c[4];
extern "C" void __register_global_object();

//
// Declarations:
//

/* 804A430C-804A4338 0000EC 002C+00 3/3 0/0 0/0 .text            reset__16daDemo00_resID_cFv */
void daDemo00_resID_c::reset() {
    // NONMATCHING
}

/* 804A4338-804A4388 000118 0050+00 1/1 0/0 0/0 .text            reset__16daDemo00_model_cFv */
void daDemo00_model_c::reset() {
    // NONMATCHING
}

/* 804A4388-804A4420 000168 0098+00 1/1 0/0 0/0 .text            __dt__10daDemo00_cFv */
daDemo00_c::~daDemo00_c() {
    // NONMATCHING
}

/* 804A4420-804A449C 000200 007C+00 2/2 0/0 0/0 .text            __dt__12demo_s1_ke_sFv */
demo_s1_ke_s::~demo_s1_ke_s() {
    // NONMATCHING
}

/* 804A449C-804A44D8 00027C 003C+00 5/5 0/0 0/0 .text            __dt__4cXyzFv */
// cXyz::~cXyz() {
extern "C" void __dt__4cXyzFv() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804A8998-804A8998 000138 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_804A8998 = "V_24_tri_joint";
#pragma pop

/* 804A89C0-804A89CC 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 804A89CC-804A89E0 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 804A89E0-804A89F8 -00001 0018+00 0/0 0/0 0/0 .data            l_lightData */
#pragma push
#pragma force_active on
SECTION_DATA static void* l_lightData[6] = {
    (void*)0x01010000, (void*)&d_a_demo00__stringBase0,
    (void*)0x00010000, (void*)NULL,
    (void*)0x00010000, (void*)NULL,
};
#pragma pop

/* 804A89F8-804A8A04 -00001 000C+00 1/1 0/0 0/0 .data            @4662 */
SECTION_DATA static void* lit_4662[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actStandby__10daDemo00_cFP13dDemo_actor_c,
};

/* 804A8A04-804A8A10 -00001 000C+00 1/1 0/0 0/0 .data            @4676 */
SECTION_DATA static void* lit_4676[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actPerformance__10daDemo00_cFP13dDemo_actor_c,
};

/* 804A8A10-804A8A1C -00001 000C+00 1/1 0/0 0/0 .data            @4725 */
SECTION_DATA static void* lit_4725[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actLeaving__10daDemo00_cFP13dDemo_actor_c,
};

/* 804A8A1C-804A8A28 -00001 000C+00 1/1 0/0 0/0 .data            @4999 */
SECTION_DATA static void* lit_4999[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actStandby__10daDemo00_cFP13dDemo_actor_c,
};

/* 804A8A28-804A8A2C 000068 0004+00 0/1 0/0 0/0 .data            l_blendInfoOPA$5172 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_blendInfoOPA[4] = {
    0x00,
    0x01,
    0x00,
    0x03,
};
#pragma pop

/* 804A8A2C-804A8A30 00006C 0004+00 0/1 0/0 0/0 .data            l_blendInfo$5173 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_blendInfo[4] = {
    0x01,
    0x04,
    0x05,
    0x03,
};
#pragma pop

/* 804A8A30-804A8A34 000070 0004+00 0/1 0/0 0/0 .data            l_zmodeInfoOPA$5174 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_zmodeInfoOPA[4] = {
    0x01,
    0x03,
    0x01,
    0x00,
};
#pragma pop

/* 804A8A34-804A8A38 000074 0004+00 0/1 0/0 0/0 .data            l_zmodeInfo$5175 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_zmodeInfo[4] = {
    0x01,
    0x03,
    0x00,
    0x00,
};
#pragma pop

/* 804A8A38-804A8A3C 000078 0004+00 1/1 0/0 0/0 .data            l_color$5341 */
SECTION_DATA static u8 l_color[4] = {
    0x14,
    0x0F,
    0x00,
    0xFF,
};

/* 804A8A3C-804A8A68 00007C 002C+00 1/1 0/0 0/0 .data            ke_za$5515 */
SECTION_DATA static u8 ke_za[44] = {
    0xFC, 0xE0, 0xFE, 0x70, 0x00, 0x00, 0x01, 0x90, 0x03, 0x20, 0xFC, 0xE0, 0xFE, 0x70, 0x00,
    0x00, 0x01, 0x90, 0x03, 0x20, 0xFC, 0xE0, 0xFE, 0x70, 0x00, 0x00, 0x01, 0x90, 0x03, 0x20,
    0x04, 0xB0, 0xFC, 0xE0, 0xFE, 0x70, 0x00, 0x00, 0x01, 0x90, 0x03, 0x20, 0x04, 0xB0,
};

/* 804A8A68-804A8A8C -00001 0024+00 1/1 0/0 0/0 .data            @6401 */
SECTION_DATA static void* lit_6401[9] = {
    (void*)(((char*)execute__10daDemo00_cFv) + 0x7B0),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x714),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x728),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x734),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x75C),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x784),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x790),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x79C),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x7A8),
};

/* 804A8A8C-804A8AC8 -00001 003C+00 1/1 0/0 0/0 .data            @6400 */
SECTION_DATA static void* lit_6400[15] = {
    (void*)(((char*)execute__10daDemo00_cFv) + 0x7B0),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x4D4),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x4E0),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x4EC),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x4F8),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x504),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x510),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x51C),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x528),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x534),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x540),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x54C),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x558),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x564),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x570),
};

/* 804A8AC8-804A8AF4 -00001 002C+00 1/1 0/0 0/0 .data            @6399 */
SECTION_DATA static void* lit_6399[11] = {
    (void*)(((char*)execute__10daDemo00_cFv) + 0x3F8),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x404),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x410),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x41C),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x428),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x434),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x440),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x44C),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x458),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x464),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x470),
};

/* 804A8AF4-804A8B10 -00001 001C+00 1/1 0/0 0/0 .data            @6398 */
SECTION_DATA static void* lit_6398[7] = {
    (void*)(((char*)execute__10daDemo00_cFv) + 0x384),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x390),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x39C),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x3A8),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x3B4),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x3C0),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x3CC),
};

/* 804A8B10-804A8B2C -00001 001C+00 1/1 0/0 0/0 .data            @6396 */
SECTION_DATA static void* lit_6396[7] = {
    (void*)(((char*)execute__10daDemo00_cFv) + 0x7B0),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x128),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x134),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x140),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x14C),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x158),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x164),
};

/* 804A8B2C-804A8B94 -00001 0068+00 1/1 0/0 0/0 .data            @6395 */
SECTION_DATA static void* lit_6395[26] = {
    (void*)(((char*)execute__10daDemo00_cFv) + 0x7B0),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x108),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x170),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x1A8),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x1C4),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x1C4),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x1C4),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x1C4),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x2A4),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x330),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x350),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x364),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x3D8),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x47C),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x484),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x48C),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x4AC),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x4B4),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x57C),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x588),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x590),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x598),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x5A4),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x5AC),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x5B4),
    (void*)(((char*)execute__10daDemo00_cFv) + 0x5C0),
};

/* 804A8B94-804A8BB4 -00001 0020+00 1/0 0/0 0/0 .data            l_daDemo00_Method */
static actor_method_class l_daDemo00_Method = {
    (process_method_func)daDemo00_Create__FP10fopAc_ac_c,
    (process_method_func)daDemo00_Delete__FP10daDemo00_c,
    (process_method_func)daDemo00_Execute__FP10daDemo00_c,
    (process_method_func)daDemo00_IsDelete__FP10daDemo00_c,
    (process_method_func)daDemo00_Draw__FP10daDemo00_c,
};

/* 804A8BB4-804A8BE4 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_DEMO00 */
extern actor_process_profile_definition g_profile_DEMO00 = {
  fpcLy_CURRENT_e,       // mLayerID
  7,                     // mListID
  fpcPi_CURRENT_e,       // mListPrio
  PROC_DEMO00,           // mProcName
  &g_fpcLf_Method.base, // sub_method
  sizeof(daDemo00_c),    // mSize
  0,                     // mSizeOther
  0,                     // mParameters
  &g_fopAc_Method.base,  // sub_method
  685,                   // mPriority
  &l_daDemo00_Method,    // sub_method
  0x00044000,            // mStatus
  fopAc_ACTOR_e,         // mActorType
  fopAc_CULLBOX_0_e,     // cullType
};

/* 804A8BE4-804A8BF8 000224 0014+00 1/1 0/0 0/0 .data            __vt__18mDoExt_3DlineMat_c */
SECTION_DATA extern void* __vt__18mDoExt_3DlineMat_c[5] = {
    (void*)NULL /* RTTI */, (void*)NULL, (void*)NULL, (void*)NULL, (void*)NULL,
};

/* 804A8BF8-804A8C04 000238 000C+00 2/2 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 804A8C04-804A8C10 000244 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGPla */
SECTION_DATA extern void* __vt__8cM3dGPla[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGPlaFv,
};

/* 804A44D8-804A4520 0002B8 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGPlaFv */
// cM3dGPla::~cM3dGPla() {
extern "C" void __dt__8cM3dGPlaFv() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804A8860-804A886C 000000 000C+00 11/11 0/0 0/0 .rodata          @3727 */
SECTION_RODATA static u8 const lit_3727[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x804A8860, &lit_3727);

/* 804A886C-804A8870 00000C 0004+00 3/10 0/0 0/0 .rodata          @4004 */
SECTION_RODATA static u8 const lit_4004[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x804A886C, &lit_4004);

/* 804A4520-804A45A0 000300 0080+00 1/1 0/0 0/0 .text            get_foward_angle__FP4cXyzP4cXyzPsPs
 */
static void get_foward_angle(cXyz* param_0, cXyz* param_1, s16* param_2, s16* param_3) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804A8870-804A8874 000010 0004+00 0/1 0/0 0/0 .rodata          @4122 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4122 = 1000.0f;
COMPILER_STRIP_GATE(0x804A8870, &lit_4122);
#pragma pop

/* 804A8874-804A8878 000014 0004+00 1/2 0/0 0/0 .rodata          @4123 */
SECTION_RODATA static f32 const lit_4123 = 10000000.0f;
COMPILER_STRIP_GATE(0x804A8874, &lit_4123);

/* 804A8878-804A8880 000018 0008+00 0/3 0/0 0/0 .rodata          @4124 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4124[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x804A8878, &lit_4124);
#pragma pop

/* 804A8880-804A8888 000020 0008+00 0/3 0/0 0/0 .rodata          @4125 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4125[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x804A8880, &lit_4125);
#pragma pop

/* 804A8888-804A8890 000028 0008+00 0/3 0/0 0/0 .rodata          @4126 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4126[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x804A8888, &lit_4126);
#pragma pop

/* 804A8890-804A8894 000030 0004+00 0/1 0/0 0/0 .rodata          @4127 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4127 = 1.5f;
COMPILER_STRIP_GATE(0x804A8890, &lit_4127);
#pragma pop

/* 804A8894-804A8898 000034 0004+00 0/1 0/0 0/0 .rodata          @4128 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4128 = -1000000000.0f;
COMPILER_STRIP_GATE(0x804A8894, &lit_4128);
#pragma pop

/* 804A45A0-804A4948 000380 03A8+00 2/2 0/0 0/0 .text            setBaseMtx__10daDemo00_cFv */
void daDemo00_c::setBaseMtx() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804A8898-804A889C 000038 0004+00 0/1 0/0 0/0 .rodata          @4284 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4284 = 100000000.0f;
COMPILER_STRIP_GATE(0x804A8898, &lit_4284);
#pragma pop

/* 804A889C-804A88A0 00003C 0004+00 0/1 0/0 0/0 .rodata          @4285 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4285 = -100000000.0f;
COMPILER_STRIP_GATE(0x804A889C, &lit_4285);
#pragma pop

/* 804A88A0-804A88A4 000040 0004+00 0/2 0/0 0/0 .rodata          @4286 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4286 = 0.5f;
COMPILER_STRIP_GATE(0x804A88A0, &lit_4286);
#pragma pop

/* 804A88A4-804A88A8 000044 0004+00 0/5 0/0 0/0 .rodata          @4287 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4287 = 3.0f;
COMPILER_STRIP_GATE(0x804A88A4, &lit_4287);
#pragma pop

/* 804A88A8-804A88AC 000048 0004+00 0/1 0/0 0/0 .rodata          @4288 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4288 = 0.25f;
COMPILER_STRIP_GATE(0x804A88A8, &lit_4288);
#pragma pop

/* 804A4948-804A4D48 000728 0400+00 1/1 0/0 0/0 .text            setShadowSize__10daDemo00_cFv */
void daDemo00_c::setShadowSize() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804A8998-804A8998 000138 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_804A89A7 = "B_dummy";
SECTION_DEAD static char const* const stringBase_804A89AF = "cy_kankyo";
#pragma pop

/* 804A4D48-804A4F54 000B28 020C+00 1/1 0/0 0/0 .text            awaCheck__FP8J3DModel */
static void awaCheck(J3DModel* param_0) {
    // NONMATCHING
}

/* 804A4F54-804A4F74 000D34 0020+00 1/1 0/0 0/0 .text            createHeapCallBack__FP10fopAc_ac_c
 */
static void createHeapCallBack(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804A88AC-804A88B0 00004C 0004+00 0/5 0/0 0/0 .rodata          @4654 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4654 = 1.0f;
COMPILER_STRIP_GATE(0x804A88AC, &lit_4654);
#pragma pop

/* 804A88B0-804A88B8 000050 0004+04 0/2 0/0 0/0 .rodata          @4655 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4655[1 + 1 /* padding */] = {
    5.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x804A88B0, &lit_4655);
#pragma pop

/* 804A8998-804A8998 000138 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_804A89B9 = "Always";
#pragma pop

/* 804A4F74-804A5750 000D54 07DC+00 1/1 0/0 0/0 .text            createHeap__10daDemo00_cFv */
void daDemo00_c::createHeap() {
    // NONMATCHING
}

/* 804A5750-804A5798 001530 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
// J3DFrameCtrl::~J3DFrameCtrl() {
extern "C" void __dt__12J3DFrameCtrlFv() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804A88B8-804A88C0 000058 0008+00 1/3 0/0 0/0 .rodata          @4719 */
SECTION_RODATA static u8 const lit_4719[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x804A88B8, &lit_4719);

/* 804A5798-804A594C 001578 01B4+00 2/0 0/0 0/0 .text actStandby__10daDemo00_cFP13dDemo_actor_c */
void daDemo00_c::actStandby(dDemo_actor_c* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804A88C0-804A88C4 000060 0004+00 0/2 0/0 0/0 .rodata          @4990 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4990 = -1.0f;
COMPILER_STRIP_GATE(0x804A88C0, &lit_4990);
#pragma pop

/* 804A88C4-804A88C8 000064 0004+00 0/2 0/0 0/0 .rodata          @4991 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4991 = 100.0f;
COMPILER_STRIP_GATE(0x804A88C4, &lit_4991);
#pragma pop

/* 804A88C8-804A88CC 000068 0004+00 0/2 0/0 0/0 .rodata          @4992 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4992 = 20.0f;
COMPILER_STRIP_GATE(0x804A88C8, &lit_4992);
#pragma pop

/* 804A594C-804A604C 00172C 0700+00 1/0 0/0 0/0 .text
 * actPerformance__10daDemo00_cFP13dDemo_actor_c                */
void daDemo00_c::actPerformance(dDemo_actor_c* param_0) {
    // NONMATCHING
}

/* 804A604C-804A60B0 001E2C 0064+00 1/0 0/0 0/0 .text actLeaving__10daDemo00_cFP13dDemo_actor_c */
void daDemo00_c::actLeaving(dDemo_actor_c* param_0) {
    // NONMATCHING
}

/* 804A60B0-804A61F0 001E90 0140+00 1/1 0/0 0/0 .text mDad00_changeXluMaterial__FP11J3DMateriali
 */
static void mDad00_changeXluMaterial(J3DMaterial* param_0, int param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804A88CC-804A88D0 00006C 0004+00 1/1 0/0 0/0 .rodata
 * l_itemNo$localstatic3$execute__10daDemo00_cFv                */
SECTION_RODATA static u8 const data_804A88CC[4] = {
    0x29,
    0xFF,
    0xFF,
    0xFF,
};
COMPILER_STRIP_GATE(0x804A88CC, &data_804A88CC);

/* 804A88D0-804A88D4 000070 0004+00 0/1 0/0 0/0 .rodata          @5279 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5279 = 6.0f;
COMPILER_STRIP_GATE(0x804A88D0, &lit_5279);
#pragma pop

/* 804A88D4-804A88D8 000074 0004+00 0/1 0/0 0/0 .rodata          @5280 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5280 = -5.0f;
COMPILER_STRIP_GATE(0x804A88D4, &lit_5280);
#pragma pop

/* 804A88D8-804A88DC 000078 0004+00 0/1 0/0 0/0 .rodata          @5281 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5281 = 130.0f;
COMPILER_STRIP_GATE(0x804A88D8, &lit_5281);
#pragma pop

/* 804A88DC-804A88E0 00007C 0004+00 0/1 0/0 0/0 .rodata          @5282 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5282 = -30.0f;
COMPILER_STRIP_GATE(0x804A88DC, &lit_5282);
#pragma pop

/* 804A88E0-804A88E4 000080 0004+00 0/1 0/0 0/0 .rodata          @5283 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5283 = 78.0f;
COMPILER_STRIP_GATE(0x804A88E0, &lit_5283);
#pragma pop

/* 804A88E4-804A88E8 000084 0004+00 0/1 0/0 0/0 .rodata          @5284 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5284 = 60.0f;
COMPILER_STRIP_GATE(0x804A88E4, &lit_5284);
#pragma pop

/* 804A88E8-804A88EC 000088 0004+00 0/4 0/0 0/0 .rodata          @5285 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5285 = 15.0f;
COMPILER_STRIP_GATE(0x804A88E8, &lit_5285);
#pragma pop

/* 804A88EC-804A88F0 00008C 0004+00 0/1 0/0 0/0 .rodata          @5286 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5286 = 32768.0f;
COMPILER_STRIP_GATE(0x804A88EC, &lit_5286);
#pragma pop

/* 804A61F0-804A6428 001FD0 0238+00 1/1 0/0 0/0 .text            teduna_calc__FP4cXyzP4cXyzP4cXyzsi
 */
static void teduna_calc(cXyz* param_0, cXyz* param_1, cXyz* param_2, s16 param_3, int param_4) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804A88F0-804A88F4 000090 0004+00 0/1 0/0 0/0 .rodata          @5403 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5403 = 9.0f;
COMPILER_STRIP_GATE(0x804A88F0, &lit_5403);
#pragma pop

/* 804A88F4-804A88F8 000094 0004+00 0/1 0/0 0/0 .rodata          @5404 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5404 = 107.0f;
COMPILER_STRIP_GATE(0x804A88F4, &lit_5404);
#pragma pop

/* 804A88F8-804A88FC 000098 0004+00 0/1 0/0 0/0 .rodata          @5405 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5405 = -32.0f;
COMPILER_STRIP_GATE(0x804A88F8, &lit_5405);
#pragma pop

/* 804A88FC-804A8900 00009C 0004+00 0/1 0/0 0/0 .rodata          @5406 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5406 = -68.0f;
COMPILER_STRIP_GATE(0x804A88FC, &lit_5406);
#pragma pop

/* 804A8900-804A8904 0000A0 0004+00 0/1 0/0 0/0 .rodata          @5407 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5407 = 79.0f;
COMPILER_STRIP_GATE(0x804A8900, &lit_5407);
#pragma pop

/* 804A8904-804A8908 0000A4 0004+00 0/1 0/0 0/0 .rodata          @5408 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5408 = -26.0f;
COMPILER_STRIP_GATE(0x804A8904, &lit_5408);
#pragma pop

/* 804A8908-804A890C 0000A8 0004+00 0/1 0/0 0/0 .rodata          @5409 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5409 = -48.0f;
COMPILER_STRIP_GATE(0x804A8908, &lit_5409);
#pragma pop

/* 804A890C-804A8910 0000AC 0004+00 0/1 0/0 0/0 .rodata          @5410 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5410 = 61.0f;
COMPILER_STRIP_GATE(0x804A890C, &lit_5410);
#pragma pop

/* 804A8910-804A8914 0000B0 0004+00 0/1 0/0 0/0 .rodata          @5411 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5411 = 18.0f;
COMPILER_STRIP_GATE(0x804A8910, &lit_5411);
#pragma pop

/* 804A8914-804A8918 0000B4 0004+00 0/1 0/0 0/0 .rodata          @5412 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5412 = 191.0f;
COMPILER_STRIP_GATE(0x804A8914, &lit_5412);
#pragma pop

/* 804A8918-804A891C 0000B8 0004+00 0/1 0/0 0/0 .rodata          @5413 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5413 = 28.0f;
COMPILER_STRIP_GATE(0x804A8918, &lit_5413);
#pragma pop

/* 804A891C-804A8920 0000BC 0004+00 0/1 0/0 0/0 .rodata          @5414 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5414 = -80.0f;
COMPILER_STRIP_GATE(0x804A891C, &lit_5414);
#pragma pop

/* 804A8920-804A8924 0000C0 0004+00 0/1 0/0 0/0 .rodata          @5415 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5415 = -15.0f;
COMPILER_STRIP_GATE(0x804A8920, &lit_5415);
#pragma pop

/* 804A8924-804A8928 0000C4 0004+00 0/1 0/0 0/0 .rodata          @5416 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5416 = 68.0f;
COMPILER_STRIP_GATE(0x804A8924, &lit_5416);
#pragma pop

/* 804A8928-804A892C 0000C8 0004+00 0/1 0/0 0/0 .rodata          @5417 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5417 = 48.0f;
COMPILER_STRIP_GATE(0x804A8928, &lit_5417);
#pragma pop

/* 804A892C-804A8930 0000CC 0004+00 0/1 0/0 0/0 .rodata          @5418 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5418 = 40.0f;
COMPILER_STRIP_GATE(0x804A892C, &lit_5418);
#pragma pop

/* 804A8930-804A8934 0000D0 0004+00 0/2 0/0 0/0 .rodata          @5419 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5419 = -12.0f;
COMPILER_STRIP_GATE(0x804A8930, &lit_5419);
#pragma pop

/* 804A8C18-804A8C1C 000008 0001+03 2/2 0/0 0/0 .bss             @1109 */
static u8 lit_1109[1 + 3 /* padding */];

/* 804A8C1C-804A8C20 00000C 0001+03 0/0 0/0 0/0 .bss             @1107 */
#pragma push
#pragma force_active on
static u8 lit_1107[1 + 3 /* padding */];
#pragma pop

/* 804A8C20-804A8C24 000010 0001+03 0/0 0/0 0/0 .bss             @1105 */
#pragma push
#pragma force_active on
static u8 lit_1105[1 + 3 /* padding */];
#pragma pop

/* 804A8C24-804A8C28 000014 0001+03 0/0 0/0 0/0 .bss             @1104 */
#pragma push
#pragma force_active on
static u8 lit_1104[1 + 3 /* padding */];
#pragma pop

/* 804A8C28-804A8C2C 000018 0001+03 0/0 0/0 0/0 .bss             @1099 */
#pragma push
#pragma force_active on
static u8 lit_1099[1 + 3 /* padding */];
#pragma pop

/* 804A8C2C-804A8C30 00001C 0001+03 0/0 0/0 0/0 .bss             @1097 */
#pragma push
#pragma force_active on
static u8 lit_1097[1 + 3 /* padding */];
#pragma pop

/* 804A8C30-804A8C34 000020 0001+03 0/0 0/0 0/0 .bss             @1095 */
#pragma push
#pragma force_active on
static u8 lit_1095[1 + 3 /* padding */];
#pragma pop

/* 804A8C34-804A8C38 000024 0001+03 0/0 0/0 0/0 .bss             @1094 */
#pragma push
#pragma force_active on
static u8 lit_1094[1 + 3 /* padding */];
#pragma pop

/* 804A8C38-804A8C3C 000028 0001+03 0/0 0/0 0/0 .bss             @1057 */
#pragma push
#pragma force_active on
static u8 lit_1057[1 + 3 /* padding */];
#pragma pop

/* 804A8C3C-804A8C40 00002C 0001+03 0/0 0/0 0/0 .bss             @1055 */
#pragma push
#pragma force_active on
static u8 lit_1055[1 + 3 /* padding */];
#pragma pop

/* 804A8C40-804A8C44 000030 0001+03 0/0 0/0 0/0 .bss             @1053 */
#pragma push
#pragma force_active on
static u8 lit_1053[1 + 3 /* padding */];
#pragma pop

/* 804A8C44-804A8C48 000034 0001+03 0/0 0/0 0/0 .bss             @1052 */
#pragma push
#pragma force_active on
static u8 lit_1052[1 + 3 /* padding */];
#pragma pop

/* 804A8C48-804A8C4C 000038 0001+03 0/0 0/0 0/0 .bss             @1014 */
#pragma push
#pragma force_active on
static u8 lit_1014[1 + 3 /* padding */];
#pragma pop

/* 804A8C4C-804A8C50 00003C 0001+03 0/0 0/0 0/0 .bss             @1012 */
#pragma push
#pragma force_active on
static u8 lit_1012[1 + 3 /* padding */];
#pragma pop

/* 804A8C50-804A8C54 000040 0001+03 0/0 0/0 0/0 .bss             @1010 */
#pragma push
#pragma force_active on
static u8 lit_1010[1 + 3 /* padding */];
#pragma pop

/* 804A8C54-804A8C58 000044 0001+03 0/0 0/0 0/0 .bss             @1009 */
#pragma push
#pragma force_active on
static u8 lit_1009[1 + 3 /* padding */];
#pragma pop

/* 804A8C58-804A8C64 000048 000C+00 0/1 0/0 0/0 .bss             @5212 */
#pragma push
#pragma force_active on
static u8 lit_5212[12];
#pragma pop

/* 804A8C64-804A8D24 000054 00C0+00 1/3 0/0 0/0 .bss             teduna_posL */
static u8 teduna_posL[192];

/* 804A8D24-804A8D30 000114 000C+00 0/1 0/0 0/0 .bss             @5214 */
#pragma push
#pragma force_active on
static u8 lit_5214[12];
#pragma pop

/* 804A8D30-804A8DF0 000120 00C0+00 1/3 0/0 0/0 .bss             teduna_posR */
static u8 teduna_posR[192];

/* 804A8DF0-804A8DFC 0001E0 000C+00 0/1 0/0 0/0 .bss             @5215 */
#pragma push
#pragma force_active on
static u8 lit_5215[12];
#pragma pop

/* 804A8DFC-804A8E08 0001EC 000C+00 2/4 0/0 0/0 .bss             S_ganon_left_hand_pos */
static u8 S_ganon_left_hand_pos[12];

/* 804A8E08-804A8E14 0001F8 000C+00 0/1 0/0 0/0 .bss             @5216 */
#pragma push
#pragma force_active on
static u8 lit_5216[12];
#pragma pop

/* 804A8E14-804A8E20 000204 000C+00 2/4 0/0 0/0 .bss             S_ganon_right_hand_pos */
static u8 S_ganon_right_hand_pos[12];

/* 804A6428-804A6868 002208 0440+00 1/1 0/0 0/0 .text
 * teduna_draw__FP8J3DModelP19mDoExt_3DlineMat1_cP12dKy_tevstr_ciiii */
static void teduna_draw(J3DModel* param_0, mDoExt_3DlineMat1_c* param_1, dKy_tevstr_c* param_2,
                            int param_3, int param_4, int param_5, int param_6) {
    // NONMATCHING
}

/* 804A6868-804A692C 002648 00C4+00 1/1 0/0 0/0 .text teduna_ganon_hand_set__FP8J3DModelii */
static void teduna_ganon_hand_set(J3DModel* param_0, int param_1, int param_2) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804A8934-804A8938 0000D4 0004+00 0/1 0/0 0/0 .rodata          @5483 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5483 = 65536.0f;
COMPILER_STRIP_GATE(0x804A8934, &lit_5483);
#pragma pop

/* 804A8938-804A893C 0000D8 0004+00 0/1 0/0 0/0 .rodata          @5484 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5484 = 4.0f / 5.0f;
COMPILER_STRIP_GATE(0x804A8938, &lit_5484);
#pragma pop

/* 804A893C-804A8940 0000DC 0004+00 0/2 0/0 0/0 .rodata          @5485 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5485 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x804A893C, &lit_5485);
#pragma pop

/* 804A692C-804A6C48 00270C 031C+00 1/1 0/0 0/0 .text ke_control__FP10daDemo00_cP12demo_s1_ke_sif
 */
static void ke_control(daDemo00_c* param_0, demo_s1_ke_s* param_1, int param_2, f32 param_3) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804A8940-804A8944 0000E0 0004+00 0/1 0/0 0/0 .rodata          @5509 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5509 = 3.0f / 5.0f;
COMPILER_STRIP_GATE(0x804A8940, &lit_5509);
#pragma pop

/* 804A8944-804A8948 0000E4 0004+00 0/1 0/0 0/0 .rodata          @5510 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5510 = 3.5f;
COMPILER_STRIP_GATE(0x804A8944, &lit_5510);
#pragma pop

/* 804A8948-804A894C 0000E8 0004+00 0/1 0/0 0/0 .rodata          @5511 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5511 = 9.0f / 5.0f;
COMPILER_STRIP_GATE(0x804A8948, &lit_5511);
#pragma pop

/* 804A6C48-804A6D20 002A28 00D8+00 1/1 0/0 0/0 .text
 * ke_move__FP10daDemo00_cP19mDoExt_3DlineMat0_cP12demo_s1_ke_sif */
static void ke_move(daDemo00_c* param_0, mDoExt_3DlineMat0_c* param_1, demo_s1_ke_s* param_2,
                        int param_3, f32 param_4) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804A894C-804A8950 0000EC 0004+00 0/1 0/0 0/0 .rodata          @5560 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5560 = 2000.0f;
COMPILER_STRIP_GATE(0x804A894C, &lit_5560);
#pragma pop

/* 804A8950-804A8954 0000F0 0004+00 0/1 0/0 0/0 .rodata          @5561 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5561 = 7.5f;
COMPILER_STRIP_GATE(0x804A8950, &lit_5561);
#pragma pop

/* 804A8954-804A8958 0000F4 0004+00 0/1 0/0 0/0 .rodata          @5562 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5562 = 2.25f;
COMPILER_STRIP_GATE(0x804A8954, &lit_5562);
#pragma pop

/* 804A8958-804A895C 0000F8 0004+00 0/1 0/0 0/0 .rodata          @5563 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5563 = 10.0f;
COMPILER_STRIP_GATE(0x804A8958, &lit_5563);
#pragma pop

/* 804A895C-804A8960 0000FC 0004+00 0/1 0/0 0/0 .rodata          @5564 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5564 = 8.0f;
COMPILER_STRIP_GATE(0x804A895C, &lit_5564);
#pragma pop

/* 804A8960-804A8964 000100 0004+00 0/1 0/0 0/0 .rodata          @5565 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5565 = 30.0f;
COMPILER_STRIP_GATE(0x804A8960, &lit_5565);
#pragma pop

/* 804A8964-804A8968 000104 0004+00 0/1 0/0 0/0 .rodata          @5566 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5566 = 35.0f;
COMPILER_STRIP_GATE(0x804A8964, &lit_5566);
#pragma pop

/* 804A6D20-804A6F74 002B00 0254+00 1/1 0/0 0/0 .text            ke_set__FP10daDemo00_c */
static void ke_set(daDemo00_c* param_0) {
    // NONMATCHING
}

/* 804A6F74-804A6F94 002D54 0020+00 1/0 0/0 0/0 .text            daDemo00_Draw__FP10daDemo00_c */
static void daDemo00_Draw(daDemo00_c* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804A8968-804A896C 000108 0004+00 0/1 0/0 0/0 .rodata          @6201 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6201 = 200.0f;
COMPILER_STRIP_GATE(0x804A8968, &lit_6201);
#pragma pop

/* 804A896C-804A8970 00010C 0004+00 0/1 0/0 0/0 .rodata          @6202 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6202 = -700.0f;
COMPILER_STRIP_GATE(0x804A896C, &lit_6202);
#pragma pop

/* 804A8970-804A8974 000110 0004+00 0/1 0/0 0/0 .rodata          @6203 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6203 = 1600.0f;
COMPILER_STRIP_GATE(0x804A8970, &lit_6203);
#pragma pop

/* 804A8974-804A8978 000114 0004+00 0/1 0/0 0/0 .rodata          @6204 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6204 = -200.0f;
COMPILER_STRIP_GATE(0x804A8974, &lit_6204);
#pragma pop

/* 804A8978-804A897C 000118 0004+00 0/1 0/0 0/0 .rodata          @6205 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6205 = 600.0f;
COMPILER_STRIP_GATE(0x804A8978, &lit_6205);
#pragma pop

/* 804A897C-804A8980 00011C 0004+00 0/1 0/0 0/0 .rodata          @6206 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6206 = 50.0f;
COMPILER_STRIP_GATE(0x804A897C, &lit_6206);
#pragma pop

/* 804A8980-804A8984 000120 0004+00 0/1 0/0 0/0 .rodata          @6207 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6207 = 2.0f;
COMPILER_STRIP_GATE(0x804A8980, &lit_6207);
#pragma pop

/* 804A8984-804A8988 000124 0004+00 0/1 0/0 0/0 .rodata          @6208 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6208 = 10000.0f;
COMPILER_STRIP_GATE(0x804A8984, &lit_6208);
#pragma pop

/* 804A8988-804A898C 000128 0004+00 0/1 0/0 0/0 .rodata          @6209 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6209 = 17.0f / 20.0f;
COMPILER_STRIP_GATE(0x804A8988, &lit_6209);
#pragma pop

/* 804A898C-804A8990 00012C 0004+00 0/1 0/0 0/0 .rodata          @6210 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_6210 = 0x38D1B717;
COMPILER_STRIP_GATE(0x804A898C, &lit_6210);
#pragma pop

/* 804A6F94-804A7B88 002D74 0BF4+00 1/1 0/0 0/0 .text            draw__10daDemo00_cFv */
void daDemo00_c::draw() {
    // NONMATCHING
}

/* 804A7B88-804A7BA8 003968 0020+00 1/0 0/0 0/0 .text            daDemo00_Execute__FP10daDemo00_c */
static void daDemo00_Execute(daDemo00_c* param_0) {
    // NONMATCHING
}

/* 804A7BA8-804A84AC 003988 0904+00 7/1 0/0 0/0 .text            execute__10daDemo00_cFv */
void daDemo00_c::execute() {
    // NONMATCHING
}

/* 804A84AC-804A84B4 00428C 0008+00 1/0 0/0 0/0 .text            daDemo00_IsDelete__FP10daDemo00_c
 */
static bool daDemo00_IsDelete(daDemo00_c* param_0) {
    return true;
}

/* 804A84B4-804A84DC 004294 0028+00 1/0 0/0 0/0 .text            daDemo00_Delete__FP10daDemo00_c */
static void daDemo00_Delete(daDemo00_c* param_0) {
    // NONMATCHING
}

/* 804A84DC-804A86B4 0042BC 01D8+00 1/0 0/0 0/0 .text            daDemo00_Create__FP10fopAc_ac_c */
static void daDemo00_Create(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 804A86B4-804A871C 004494 0068+00 1/1 0/0 0/0 .text            __ct__12demo_s1_ke_sFv */
demo_s1_ke_s::demo_s1_ke_s() {
    // NONMATCHING
}

/* 804A871C-804A8720 0044FC 0004+00 2/2 0/0 0/0 .text            __ct__4cXyzFv */
// cXyz::cXyz() {
extern "C" void __ct__4cXyzFv() {
    /* empty function */
}

/* 804A8720-804A87DC 004500 00BC+00 0/0 1/0 0/0 .text            __sinit_d_a_demo00_cpp */
void __sinit_d_a_demo00_cpp() {
    // NONMATCHING
}

#pragma push
#pragma force_active on
REGISTER_CTORS(0x804A8720, __sinit_d_a_demo00_cpp);
#pragma pop

/* 804A87DC-804A8814 0045BC 0038+00 1/1 0/0 0/0 .text            __arraydtor$5213 */
void func_804A87DC() {
    // NONMATCHING
}

/* 804A8814-804A884C 0045F4 0038+00 1/1 0/0 0/0 .text            __arraydtor$5211 */
void func_804A8814() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804A8990-804A8994 000130 0004+00 0/0 0/0 0/0 .rodata          @6393 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_6393 = 0x43360B61;
COMPILER_STRIP_GATE(0x804A8990, &lit_6393);
#pragma pop

/* 804A8994-804A8998 000134 0004+00 0/0 0/0 0/0 .rodata          @6394 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6394 = 90.0f;
COMPILER_STRIP_GATE(0x804A8994, &lit_6394);
#pragma pop

/* 804A8E20-804A8E24 000210 0004+00 0/0 0/0 0/0 .bss
 * sInstance__40JASGlobalInstance<19JASDefaultBankTable>        */
#pragma push
#pragma force_active on
static u8 data_804A8E20[4];
#pragma pop

/* 804A8E24-804A8E28 000214 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JASAudioThread>             */
#pragma push
#pragma force_active on
static u8 data_804A8E24[4];
#pragma pop

/* 804A8E28-804A8E2C 000218 0004+00 0/0 0/0 0/0 .bss sInstance__27JASGlobalInstance<7Z2SeMgr> */
#pragma push
#pragma force_active on
static u8 data_804A8E28[4];
#pragma pop

/* 804A8E2C-804A8E30 00021C 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8Z2SeqMgr> */
#pragma push
#pragma force_active on
static u8 data_804A8E2C[4];
#pragma pop

/* 804A8E30-804A8E34 000220 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SceneMgr>
 */
#pragma push
#pragma force_active on
static u8 data_804A8E30[4];
#pragma pop

/* 804A8E34-804A8E38 000224 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2StatusMgr>
 */
#pragma push
#pragma force_active on
static u8 data_804A8E34[4];
#pragma pop

/* 804A8E38-804A8E3C 000228 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2DebugSys>
 */
#pragma push
#pragma force_active on
static u8 data_804A8E38[4];
#pragma pop

/* 804A8E3C-804A8E40 00022C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__36JASGlobalInstance<15JAISoundStarter>            */
#pragma push
#pragma force_active on
static u8 data_804A8E3C[4];
#pragma pop

/* 804A8E40-804A8E44 000230 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14Z2SoundStarter>             */
#pragma push
#pragma force_active on
static u8 data_804A8E40[4];
#pragma pop

/* 804A8E44-804A8E48 000234 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12Z2SpeechMgr2>               */
#pragma push
#pragma force_active on
static u8 data_804A8E44[4];
#pragma pop

/* 804A8E48-804A8E4C 000238 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8JAISeMgr> */
#pragma push
#pragma force_active on
static u8 data_804A8E48[4];
#pragma pop

/* 804A8E4C-804A8E50 00023C 0004+00 0/0 0/0 0/0 .bss sInstance__29JASGlobalInstance<9JAISeqMgr> */
#pragma push
#pragma force_active on
static u8 data_804A8E4C[4];
#pragma pop

/* 804A8E50-804A8E54 000240 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAIStreamMgr>               */
#pragma push
#pragma force_active on
static u8 data_804A8E50[4];
#pragma pop

/* 804A8E54-804A8E58 000244 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SoundMgr>
 */
#pragma push
#pragma force_active on
static u8 data_804A8E54[4];
#pragma pop

/* 804A8E58-804A8E5C 000248 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAISoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_804A8E58[4];
#pragma pop

/* 804A8E5C-804A8E60 00024C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13JAUSoundTable>              */
#pragma push
#pragma force_active on
static u8 data_804A8E5C[4];
#pragma pop

/* 804A8E60-804A8E64 000250 0004+00 0/0 0/0 0/0 .bss
 * sInstance__38JASGlobalInstance<17JAUSoundNameTable>          */
#pragma push
#pragma force_active on
static u8 data_804A8E60[4];
#pragma pop

/* 804A8E64-804A8E68 000254 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAUSoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_804A8E64[4];
#pragma pop

/* 804A8E68-804A8E6C 000258 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SoundInfo>
 */
#pragma push
#pragma force_active on
static u8 data_804A8E68[4];
#pragma pop

/* 804A8E6C-804A8E70 00025C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2SoundObjMgr>              */
#pragma push
#pragma force_active on
static u8 data_804A8E6C[4];
#pragma pop

/* 804A8E70-804A8E74 000260 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2Audience>
 */
#pragma push
#pragma force_active on
static u8 data_804A8E70[4];
#pragma pop

/* 804A8E74-804A8E78 000264 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2FxLineMgr>
 */
#pragma push
#pragma force_active on
static u8 data_804A8E74[4];
#pragma pop

/* 804A8E78-804A8E7C 000268 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2EnvSeMgr>
 */
#pragma push
#pragma force_active on
static u8 data_804A8E78[4];
#pragma pop

/* 804A8E7C-804A8E80 00026C 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SpeechMgr>
 */
#pragma push
#pragma force_active on
static u8 data_804A8E7C[4];
#pragma pop

/* 804A8E80-804A8E84 000270 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>              */
#pragma push
#pragma force_active on
static u8 data_804A8E80[4];
#pragma pop

/* 804A8E84-804A8E88 000274 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JAUSectionHeap>             */
#pragma push
#pragma force_active on
static u8 data_804A8E84[4];
#pragma pop

/* 804A8998-804A8998 000138 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
