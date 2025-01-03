/**
 * @file d_a_obj_rstair.cpp
 * 
*/

#include "d/actor/d_a_obj_rstair.h"
#include "dol2asm.h"


//
// Forward References:
//

extern "C" void initBaseMtx__15daObjRotStair_cFv();
extern "C" void setBaseMtx__15daObjRotStair_cFv();
extern "C" void Create__15daObjRotStair_cFv();
extern "C" void CreateHeap__15daObjRotStair_cFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" void create1st__15daObjRotStair_cFv();
extern "C" void Execute__15daObjRotStair_cFPPA3_A4_f();
extern "C" void move_proc_call__15daObjRotStair_cFv();
extern "C" void init_modeWait__15daObjRotStair_cFv();
extern "C" void modeWait__15daObjRotStair_cFv();
extern "C" void init_modeRotate__15daObjRotStair_cFv();
extern "C" void modeRotate__15daObjRotStair_cFv();
extern "C" void event_proc_call__15daObjRotStair_cFv();
extern "C" void actionWait__15daObjRotStair_cFv();
extern "C" void actionOrderEvent__15daObjRotStair_cFv();
extern "C" void actionEvent__15daObjRotStair_cFv();
extern "C" void actionDead__15daObjRotStair_cFv();
extern "C" void checkChangeSw__15daObjRotStair_cFv();
extern "C" void offSwitch__15daObjRotStair_cFi();
extern "C" void onWaterModel__15daObjRotStair_cFv();
extern "C" void offWaterModel__15daObjRotStair_cFv();
extern "C" void Draw__15daObjRotStair_cFv();
extern "C" void Delete__15daObjRotStair_cFv();
extern "C" static void daObjRotStair_create1st__FP15daObjRotStair_c();
extern "C" static void daObjRotStair_MoveBGDelete__FP15daObjRotStair_c();
extern "C" static void daObjRotStair_MoveBGExecute__FP15daObjRotStair_c();
extern "C" static void daObjRotStair_MoveBGDraw__FP15daObjRotStair_c();
extern "C" extern char const* const d_a_obj_rstair__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss();
extern "C" void entry__13mDoExt_btkAnmFP16J3DMaterialTablef();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void fopAcM_orderOtherEventId__FP10fopAc_ac_csUcUsUsUs();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void offSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void getEventIdx__16dEvent_manager_cFP10fopAc_ac_cUc();
extern "C" void endCheck__16dEvent_manager_cFs();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c();
extern "C" void dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void Set__4cBgWFP6cBgD_tUlPA3_A4_f();
extern "C" void __ct__4dBgWFv();
extern "C" void Move__4dBgWFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void ChkUsed__9cBgW_BgIdCFv();
extern "C" void cLib_addCalcAngleS__FPsssss();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void setEffectMtx__13J3DTexMtxInfoFPA4_f();
extern "C" void simpleCalcMaterial__12J3DModelDataFUsPA4_f();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_19();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_19();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" extern u8 struct_80CC2880[4];

//
// Declarations:
//

/* 80CC1558-80CC1614 000078 00BC+00 1/1 0/0 0/0 .text            initBaseMtx__15daObjRotStair_cFv */
void daObjRotStair_c::initBaseMtx() {
    // NONMATCHING
}

/* 80CC1614-80CC16B0 000134 009C+00 2/2 0/0 0/0 .text            setBaseMtx__15daObjRotStair_cFv */
void daObjRotStair_c::setBaseMtx() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80CC2700-80CC2708 000000 0008+00 3/3 0/0 0/0 .rodata          l_wtr_bmd */
SECTION_RODATA static u8 const l_wtr_bmd[8] = {
    0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x07,
};
COMPILER_STRIP_GATE(0x80CC2700, &l_wtr_bmd);

/* 80CC2708-80CC2710 000008 0008+00 0/1 0/0 0/0 .rodata          l_wtr_btk */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const l_wtr_btk[8] = {
    0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x0B,
};
COMPILER_STRIP_GATE(0x80CC2708, &l_wtr_btk);
#pragma pop

/* 80CC2710-80CC2720 000010 0010+00 2/2 0/0 0/0 .rodata          l_target_angleY */
SECTION_RODATA static u8 const l_target_angleY[16] = {
    0x7F, 0xFF, 0x40, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x7F, 0xFF, 0x40, 0x00,
};
COMPILER_STRIP_GATE(0x80CC2710, &l_target_angleY);

/* 80CC16B0-80CC17F0 0001D0 0140+00 1/0 0/0 0/0 .text            Create__15daObjRotStair_cFv */
void daObjRotStair_c::Create() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80CC2720-80CC2724 000020 0004+00 0/3 0/0 0/0 .rodata          @3770 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3770 = 1.0f;
COMPILER_STRIP_GATE(0x80CC2720, &lit_3770);
#pragma pop

/* 80CC2730-80CC2730 000030 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80CC2730 = "K_spkai00";
#pragma pop

/* 80CC273C-80CC2748 000000 000C+00 2/2 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80CC2748-80CC275C 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 80CC275C-80CC2760 -00001 0004+00 3/3 0/0 0/0 .data            l_arcName */
SECTION_DATA static void* l_arcName = (void*)&d_a_obj_rstair__stringBase0;

/* 80CC2760-80CC276C 000024 000C+00 0/0 0/0 0/0 .data            l_water_check_offset */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_water_check_offset[12] = {
    0x00, 0x00, 0x00, 0x00, 0x44, 0xFA, 0x00, 0x00, 0xC4, 0xFA, 0x00, 0x00,
};
#pragma pop

/* 80CC276C-80CC2778 -00001 000C+00 0/1 0/0 0/0 .data            @3811 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3811[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeWait__15daObjRotStair_cFv,
};
#pragma pop

/* 80CC2778-80CC2784 -00001 000C+00 0/1 0/0 0/0 .data            @3812 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3812[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeRotate__15daObjRotStair_cFv,
};
#pragma pop

/* 80CC2784-80CC279C 000048 0018+00 0/1 0/0 0/0 .data            l_func$3810 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_func_3810[24] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80CC279C-80CC27A8 -00001 000C+00 0/1 0/0 0/0 .data            @3919 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3919[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionWait__15daObjRotStair_cFv,
};
#pragma pop

/* 80CC27A8-80CC27B4 -00001 000C+00 0/1 0/0 0/0 .data            @3920 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3920[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionOrderEvent__15daObjRotStair_cFv,
};
#pragma pop

/* 80CC27B4-80CC27C0 -00001 000C+00 0/1 0/0 0/0 .data            @3921 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3921[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionEvent__15daObjRotStair_cFv,
};
#pragma pop

/* 80CC27C0-80CC27CC -00001 000C+00 0/1 0/0 0/0 .data            @3922 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3922[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionDead__15daObjRotStair_cFv,
};
#pragma pop

/* 80CC27CC-80CC27FC 000090 0030+00 0/1 0/0 0/0 .data            l_func$3918 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_func_3918[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80CC27FC-80CC281C -00001 0020+00 1/0 0/0 0/0 .data            daObjRotStair_METHODS */
static actor_method_class daObjRotStair_METHODS = {
    (process_method_func)daObjRotStair_create1st__FP15daObjRotStair_c,
    (process_method_func)daObjRotStair_MoveBGDelete__FP15daObjRotStair_c,
    (process_method_func)daObjRotStair_MoveBGExecute__FP15daObjRotStair_c,
    0,
    (process_method_func)daObjRotStair_MoveBGDraw__FP15daObjRotStair_c,
};

/* 80CC281C-80CC284C -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_RotStair */
extern actor_process_profile_definition g_profile_Obj_RotStair = {
  fpcLy_CURRENT_e,         // mLayerID
  3,                       // mListID
  fpcPi_CURRENT_e,         // mListPrio
  PROC_Obj_RotStair,       // mProcName
  &g_fpcLf_Method.base,   // sub_method
  sizeof(daObjRotStair_c), // mSize
  0,                       // mSizeOther
  0,                       // mParameters
  &g_fopAc_Method.base,    // sub_method
  613,                     // mPriority
  &daObjRotStair_METHODS,  // sub_method
  0x00040100,              // mStatus
  fopAc_ACTOR_e,           // mActorType
  fopAc_CULLBOX_CUSTOM_e,  // cullType
};

/* 80CC284C-80CC2858 000110 000C+00 2/2 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80CC17F0-80CC19E0 000310 01F0+00 1/0 0/0 0/0 .text            CreateHeap__15daObjRotStair_cFv */
void daObjRotStair_c::CreateHeap() {
    // NONMATCHING
}

/* 80CC19E0-80CC1A28 000500 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
// J3DFrameCtrl::~J3DFrameCtrl() {
extern "C" void __dt__12J3DFrameCtrlFv() {
    // NONMATCHING
}

/* 80CC1A28-80CC1AF0 000548 00C8+00 1/1 0/0 0/0 .text            create1st__15daObjRotStair_cFv */
void daObjRotStair_c::create1st() {
    // NONMATCHING
}

/* 80CC1AF0-80CC1BA4 000610 00B4+00 1/0 0/0 0/0 .text Execute__15daObjRotStair_cFPPA3_A4_f */
void daObjRotStair_c::Execute(f32 (**param_0)[3][4]) {
    // NONMATCHING
}

/* 80CC1BA4-80CC1C30 0006C4 008C+00 1/1 0/0 0/0 .text            move_proc_call__15daObjRotStair_cFv
 */
void daObjRotStair_c::move_proc_call() {
    // NONMATCHING
}

/* 80CC1C30-80CC1CF0 000750 00C0+00 2/2 0/0 0/0 .text            init_modeWait__15daObjRotStair_cFv
 */
void daObjRotStair_c::init_modeWait() {
    // NONMATCHING
}

/* 80CC1CF0-80CC1DF8 000810 0108+00 1/0 0/0 0/0 .text            modeWait__15daObjRotStair_cFv */
void daObjRotStair_c::modeWait() {
    // NONMATCHING
}

/* 80CC1DF8-80CC1EC8 000918 00D0+00 1/1 0/0 0/0 .text init_modeRotate__15daObjRotStair_cFv */
void daObjRotStair_c::init_modeRotate() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80CC2724-80CC2728 000024 0004+00 0/2 0/0 0/0 .rodata          @3911 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3911[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80CC2724, &lit_3911);
#pragma pop

/* 80CC2728-80CC272C 000028 0004+00 0/1 0/0 0/0 .rodata          @3912 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3912 = -1.0f;
COMPILER_STRIP_GATE(0x80CC2728, &lit_3912);
#pragma pop

/* 80CC1EC8-80CC2024 0009E8 015C+00 1/0 0/0 0/0 .text            modeRotate__15daObjRotStair_cFv */
void daObjRotStair_c::modeRotate() {
    // NONMATCHING
}

/* 80CC2024-80CC20E0 000B44 00BC+00 1/1 0/0 0/0 .text event_proc_call__15daObjRotStair_cFv */
void daObjRotStair_c::event_proc_call() {
    // NONMATCHING
}

/* 80CC20E0-80CC2158 000C00 0078+00 1/0 0/0 0/0 .text            actionWait__15daObjRotStair_cFv */
void daObjRotStair_c::actionWait() {
    // NONMATCHING
}

/* 80CC2158-80CC21C0 000C78 0068+00 1/0 0/0 0/0 .text actionOrderEvent__15daObjRotStair_cFv */
void daObjRotStair_c::actionOrderEvent() {
    // NONMATCHING
}

/* 80CC21C0-80CC221C 000CE0 005C+00 1/0 0/0 0/0 .text            actionEvent__15daObjRotStair_cFv */
void daObjRotStair_c::actionEvent() {
    // NONMATCHING
}

/* 80CC221C-80CC2220 000D3C 0004+00 1/0 0/0 0/0 .text            actionDead__15daObjRotStair_cFv */
void daObjRotStair_c::actionDead() {
    /* empty function */
}

/* 80CC2220-80CC22A0 000D40 0080+00 1/1 0/0 0/0 .text            checkChangeSw__15daObjRotStair_cFv
 */
void daObjRotStair_c::checkChangeSw() {
    // NONMATCHING
}

/* 80CC22A0-80CC2310 000DC0 0070+00 1/1 0/0 0/0 .text            offSwitch__15daObjRotStair_cFi */
void daObjRotStair_c::offSwitch(int param_0) {
    // NONMATCHING
}

/* 80CC2310-80CC2364 000E30 0054+00 3/3 0/0 0/0 .text            onWaterModel__15daObjRotStair_cFv
 */
void daObjRotStair_c::onWaterModel() {
    // NONMATCHING
}

/* 80CC2364-80CC23C4 000E84 0060+00 3/3 0/0 0/0 .text            offWaterModel__15daObjRotStair_cFv
 */
void daObjRotStair_c::offWaterModel() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80CC272C-80CC2730 00002C 0004+00 0/1 0/0 0/0 .rodata          @4107 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4107 = -1.0f / 100.0f;
COMPILER_STRIP_GATE(0x80CC272C, &lit_4107);
#pragma pop

/* 80CC23C4-80CC25C0 000EE4 01FC+00 1/0 0/0 0/0 .text            Draw__15daObjRotStair_cFv */
void daObjRotStair_c::Draw() {
    // NONMATCHING
}

/* 80CC25C0-80CC262C 0010E0 006C+00 1/0 0/0 0/0 .text            Delete__15daObjRotStair_cFv */
void daObjRotStair_c::Delete() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80CC2858-80CC2880 00011C 0028+00 1/1 0/0 0/0 .data            __vt__15daObjRotStair_c */
SECTION_DATA extern void* __vt__15daObjRotStair_c[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__15daObjRotStair_cFv,
    (void*)Create__15daObjRotStair_cFv,
    (void*)Execute__15daObjRotStair_cFPPA3_A4_f,
    (void*)Draw__15daObjRotStair_cFv,
    (void*)Delete__15daObjRotStair_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80CC262C-80CC268C 00114C 0060+00 1/0 0/0 0/0 .text daObjRotStair_create1st__FP15daObjRotStair_c
 */
static void daObjRotStair_create1st(daObjRotStair_c* param_0) {
    // NONMATCHING
}

/* 80CC268C-80CC26AC 0011AC 0020+00 1/0 0/0 0/0 .text
 * daObjRotStair_MoveBGDelete__FP15daObjRotStair_c              */
static void daObjRotStair_MoveBGDelete(daObjRotStair_c* param_0) {
    // NONMATCHING
}

/* 80CC26AC-80CC26CC 0011CC 0020+00 1/0 0/0 0/0 .text
 * daObjRotStair_MoveBGExecute__FP15daObjRotStair_c             */
static void daObjRotStair_MoveBGExecute(daObjRotStair_c* param_0) {
    // NONMATCHING
}

/* 80CC26CC-80CC26F8 0011EC 002C+00 1/0 0/0 0/0 .text
 * daObjRotStair_MoveBGDraw__FP15daObjRotStair_c                */
static void daObjRotStair_MoveBGDraw(daObjRotStair_c* param_0) {
    // NONMATCHING
}

/* 80CC2730-80CC2730 000030 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
