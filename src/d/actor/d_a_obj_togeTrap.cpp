/**
 * @file d_a_obj_togeTrap.cpp
 * 
*/

#include "d/actor/d_a_obj_togeTrap.h"
#include "dol2asm.h"



//
// Forward References:
//

extern "C" void __ct__16daTogeTrap_HIO_cFv();
extern "C" void __dt__18fOpAcm_HIO_entry_cFv();
extern "C" void __dt__14mDoHIO_entry_cFv();
extern "C" void setBaseMtx__12daTogeTrap_cFv();
extern "C" void CreateHeap__12daTogeTrap_cFv();
extern "C" void create__12daTogeTrap_cFv();
extern "C" void __dt__8dCcD_CylFv();
extern "C" void __ct__8dCcD_CylFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void rideCallBack__12daTogeTrap_cFP4dBgWP10fopAc_ac_cP10fopAc_ac_c();
extern "C" void Execute__12daTogeTrap_cFPPA3_A4_f();
extern "C" void moveMain__12daTogeTrap_cFv();
extern "C" void playerAreaCheck__12daTogeTrap_cFv();
extern "C" void init_modeWait__12daTogeTrap_cFv();
extern "C" void modeWait__12daTogeTrap_cFv();
extern "C" void init_modeMoveUp__12daTogeTrap_cFv();
extern "C" void modeMoveUp__12daTogeTrap_cFv();
extern "C" void init_modeMoveDown__12daTogeTrap_cFv();
extern "C" void modeMoveDown__12daTogeTrap_cFv();
extern "C" void init_modeBreak__12daTogeTrap_cFv();
extern "C" void modeBreak__12daTogeTrap_cFv();
extern "C" void Draw__12daTogeTrap_cFv();
extern "C" void Delete__12daTogeTrap_cFv();
extern "C" static void daTogeTrap_Draw__FP12daTogeTrap_c();
extern "C" static void daTogeTrap_Execute__FP12daTogeTrap_c();
extern "C" static void daTogeTrap_Delete__FP12daTogeTrap_c();
extern "C" static void daTogeTrap_Create__FP10fopAc_ac_c();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void __dt__16daTogeTrap_HIO_cFv();
extern "C" void __sinit_d_a_obj_togeTrap_cpp();
extern "C" u8 const mCcDObjInfo__12daTogeTrap_c[48];
extern "C" extern char const* const d_a_obj_togeTrap__stringBase0;
extern "C" u8 mCcDCyl__12daTogeTrap_c[68];

//
// External References:
//

extern "C" void mDoMtx_ZXYrotS__FPA4_fsss();
extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void dComIfGs_wolfeye_effect_check__Fv();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool Create__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitGObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void getSpinnerRideSpeed__9daPy_py_cCFv();
extern "C" void checkSpinnerReflectEffect__9daPy_py_cFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void cLib_addCalc__FPfffff();
extern "C" void cLib_chaseF__FPfff();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void __construct_array();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_22();
extern "C" void _savegpr_25();
extern "C" void _restgpr_22();
extern "C" void _restgpr_25();
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80D18E98-80D18E9C 000000 0004+00 4/4 0/0 0/0 .rodata          @3655 */
SECTION_RODATA static u8 const lit_3655[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80D18E98, &lit_3655);

/* 80D18E9C-80D18EA0 000004 0004+00 0/1 0/0 0/0 .rodata          @3656 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3656 = 250.0f;
COMPILER_STRIP_GATE(0x80D18E9C, &lit_3656);
#pragma pop

/* 80D18EA0-80D18EA4 000008 0004+00 0/1 0/0 0/0 .rodata          @3657 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3657 = 10.0f;
COMPILER_STRIP_GATE(0x80D18EA0, &lit_3657);
#pragma pop

/* 80D18EA4-80D18EA8 00000C 0004+00 0/1 0/0 0/0 .rodata          @3658 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3658 = 20.0f;
COMPILER_STRIP_GATE(0x80D18EA4, &lit_3658);
#pragma pop

/* 80D18EA8-80D18EAC 000010 0004+00 0/2 0/0 0/0 .rodata          @3659 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3659 = 500.0f;
COMPILER_STRIP_GATE(0x80D18EA8, &lit_3659);
#pragma pop

/* 80D18F10-80D18F1C 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80D18F1C-80D18F30 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 80D18F30-80D18F74 000020 0044+00 2/2 0/0 0/0 .data            mCcDCyl__12daTogeTrap_c */
SECTION_DATA u8 daTogeTrap_c::mCcDCyl[68] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80D18F74-80D18F80 -00001 000C+00 0/1 0/0 0/0 .data            @3883 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3883[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeWait__12daTogeTrap_cFv,
};
#pragma pop

/* 80D18F80-80D18F8C -00001 000C+00 0/1 0/0 0/0 .data            @3884 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3884[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeMoveUp__12daTogeTrap_cFv,
};
#pragma pop

/* 80D18F8C-80D18F98 -00001 000C+00 0/1 0/0 0/0 .data            @3885 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3885[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeMoveDown__12daTogeTrap_cFv,
};
#pragma pop

/* 80D18F98-80D18FA4 -00001 000C+00 0/1 0/0 0/0 .data            @3886 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3886[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeBreak__12daTogeTrap_cFv,
};
#pragma pop

/* 80D18FA4-80D18FD4 000094 0030+00 0/1 0/0 0/0 .data            mode_proc$3882 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 mode_proc[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80D18FD4-80D18FF4 -00001 0020+00 1/0 0/0 0/0 .data            l_daTogeTrap_Method */
static actor_method_class l_daTogeTrap_Method = {
    (process_method_func)daTogeTrap_Create__FP10fopAc_ac_c,
    (process_method_func)daTogeTrap_Delete__FP12daTogeTrap_c,
    (process_method_func)daTogeTrap_Execute__FP12daTogeTrap_c,
    0,
    (process_method_func)daTogeTrap_Draw__FP12daTogeTrap_c,
};

/* 80D18FF4-80D19024 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_TogeTrap */
extern actor_process_profile_definition g_profile_Obj_TogeTrap = {
  fpcLy_CURRENT_e,        // mLayerID
  3,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_Obj_TogeTrap,      // mProcName
  &g_fpcLf_Method.base,  // sub_method
  sizeof(daTogeTrap_c),   // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  524,                    // mPriority
  &l_daTogeTrap_Method,   // sub_method
  0x00044000,             // mStatus
  fopAc_ACTOR_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 80D19024-80D19030 000114 000C+00 2/2 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80D19030-80D1903C 000120 000C+00 1/1 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80D1903C-80D19048 00012C 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80D19048-80D19054 000138 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80D19054-80D1907C 000144 0028+00 1/1 0/0 0/0 .data            __vt__12daTogeTrap_c */
SECTION_DATA extern void* __vt__12daTogeTrap_c[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__12daTogeTrap_cFv,
    (void*)Create__16dBgS_MoveBgActorFv,
    (void*)Execute__12daTogeTrap_cFPPA3_A4_f,
    (void*)Draw__12daTogeTrap_cFv,
    (void*)Delete__12daTogeTrap_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80D1907C-80D19088 00016C 000C+00 2/2 0/0 0/0 .data            __vt__16daTogeTrap_HIO_c */
SECTION_DATA extern void* __vt__16daTogeTrap_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__16daTogeTrap_HIO_cFv,
};

/* 80D19088-80D19094 000178 000C+00 3/3 0/0 0/0 .data            __vt__18fOpAcm_HIO_entry_c */
SECTION_DATA extern void* __vt__18fOpAcm_HIO_entry_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__18fOpAcm_HIO_entry_cFv,
};

/* 80D19094-80D190A0 000184 000C+00 4/4 0/0 0/0 .data            __vt__14mDoHIO_entry_c */
SECTION_DATA extern void* __vt__14mDoHIO_entry_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14mDoHIO_entry_cFv,
};

/* 80D17B6C-80D17BD0 0000EC 0064+00 1/1 0/0 0/0 .text            __ct__16daTogeTrap_HIO_cFv */
daTogeTrap_HIO_c::daTogeTrap_HIO_c() {
    // NONMATCHING
}

/* 80D17BD0-80D17C2C 000150 005C+00 1/0 0/0 0/0 .text            __dt__18fOpAcm_HIO_entry_cFv */
// fOpAcm_HIO_entry_c::~fOpAcm_HIO_entry_c() {
extern "C" void __dt__18fOpAcm_HIO_entry_cFv() {
    // NONMATCHING
}

/* 80D17C2C-80D17C74 0001AC 0048+00 1/0 0/0 0/0 .text            __dt__14mDoHIO_entry_cFv */
// mDoHIO_entry_c::~mDoHIO_entry_c() {
extern "C" void __dt__14mDoHIO_entry_cFv() {
    // NONMATCHING
}

/* 80D17C74-80D17D5C 0001F4 00E8+00 2/2 0/0 0/0 .text            setBaseMtx__12daTogeTrap_cFv */
void daTogeTrap_c::setBaseMtx() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D18F08-80D18F08 000070 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80D18F08 = "P_Toge";
#pragma pop

/* 80D17D5C-80D17E14 0002DC 00B8+00 1/0 0/0 0/0 .text            CreateHeap__12daTogeTrap_cFv */
void daTogeTrap_c::CreateHeap() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D18EAC-80D18EDC 000014 0030+00 1/1 0/0 0/0 .rodata          mCcDObjInfo__12daTogeTrap_c */
SECTION_RODATA u8 const daTogeTrap_c::mCcDObjInfo[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1D,
    0x00, 0x48, 0x00, 0x28, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80D18EAC, &daTogeTrap_c::mCcDObjInfo);

/* 80D18EDC-80D18EE0 000044 0004+00 1/2 0/0 0/0 .rodata          @3780 */
SECTION_RODATA static f32 const lit_3780 = 300.0f;
COMPILER_STRIP_GATE(0x80D18EDC, &lit_3780);

/* 80D17E14-80D18008 000394 01F4+00 1/1 0/0 0/0 .text            create__12daTogeTrap_cFv */
void daTogeTrap_c::create() {
    // NONMATCHING
}

/* 80D18008-80D180D4 000588 00CC+00 1/1 0/0 0/0 .text            __dt__8dCcD_CylFv */
// dCcD_Cyl::~dCcD_Cyl() {
extern "C" void __dt__8dCcD_CylFv() {
    // NONMATCHING
}

/* 80D180D4-80D18158 000654 0084+00 1/1 0/0 0/0 .text            __ct__8dCcD_CylFv */
// dCcD_Cyl::dCcD_Cyl() {
extern "C" void __ct__8dCcD_CylFv() {
    // NONMATCHING
}

/* 80D18158-80D181A0 0006D8 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
// cM3dGCyl::~cM3dGCyl() {
extern "C" void __dt__8cM3dGCylFv() {
    // NONMATCHING
}

/* 80D181A0-80D181E8 000720 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
// cM3dGAab::~cM3dGAab() {
extern "C" void __dt__8cM3dGAabFv() {
    // NONMATCHING
}

/* 80D181E8-80D18244 000768 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
// dCcD_GStts::~dCcD_GStts() {
extern "C" void __dt__10dCcD_GSttsFv() {
    // NONMATCHING
}

/* 80D18244-80D1825C 0007C4 0018+00 1/1 0/0 0/0 .text
 * rideCallBack__12daTogeTrap_cFP4dBgWP10fopAc_ac_cP10fopAc_ac_c */
void daTogeTrap_c::rideCallBack(dBgW* param_0, fopAc_ac_c* param_1, fopAc_ac_c* param_2) {
    // NONMATCHING
}

/* 80D1825C-80D182C8 0007DC 006C+00 1/0 0/0 0/0 .text            Execute__12daTogeTrap_cFPPA3_A4_f
 */
void daTogeTrap_c::Execute(f32 (**param_0)[3][4]) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D18EE0-80D18EE4 000048 0004+00 0/1 0/0 0/0 .rodata          @3940 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3940 = 60.0f;
COMPILER_STRIP_GATE(0x80D18EE0, &lit_3940);
#pragma pop

/* 80D18EE4-80D18EE8 00004C 0004+00 0/1 0/0 0/0 .rodata          @3941 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3941 = 290.0f;
COMPILER_STRIP_GATE(0x80D18EE4, &lit_3941);
#pragma pop

/* 80D18EE8-80D18EEC 000050 0004+00 0/1 0/0 0/0 .rodata          @3942 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3942 = 100.0f;
COMPILER_STRIP_GATE(0x80D18EE8, &lit_3942);
#pragma pop

/* 80D18EEC-80D18EF0 000054 0004+00 0/1 0/0 0/0 .rodata          @3943 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3943 = 150.0f;
COMPILER_STRIP_GATE(0x80D18EEC, &lit_3943);
#pragma pop

/* 80D18EF0-80D18EF8 000058 0008+00 0/1 0/0 0/0 .rodata          @3945 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3945[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80D18EF0, &lit_3945);
#pragma pop

/* 80D190A8-80D190B4 000008 000C+00 1/1 0/0 0/0 .bss             @3647 */
static u8 lit_3647[12];

/* 80D190B4-80D190D4 000014 0020+00 8/8 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[32];

/* 80D190D4-80D190D8 000034 0004+00 1/1 0/0 0/0 .bss             None */
static u8 data_80D190D4[4];

/* 80D182C8-80D185DC 000848 0314+00 1/1 0/0 0/0 .text            moveMain__12daTogeTrap_cFv */
void daTogeTrap_c::moveMain() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D18EF8-80D18EFC 000060 0004+00 1/1 0/0 0/0 .rodata          @3975 */
SECTION_RODATA static f32 const lit_3975 = 225.0f;
COMPILER_STRIP_GATE(0x80D18EF8, &lit_3975);

/* 80D185DC-80D186B0 000B5C 00D4+00 2/2 0/0 0/0 .text            playerAreaCheck__12daTogeTrap_cFv
 */
void daTogeTrap_c::playerAreaCheck() {
    // NONMATCHING
}

/* 80D186B0-80D186BC 000C30 000C+00 3/3 0/0 0/0 .text            init_modeWait__12daTogeTrap_cFv */
void daTogeTrap_c::init_modeWait() {
    // NONMATCHING
}

/* 80D186BC-80D186C0 000C3C 0004+00 1/0 0/0 0/0 .text            modeWait__12daTogeTrap_cFv */
void daTogeTrap_c::modeWait() {
    /* empty function */
}

/* ############################################################################################## */
/* 80D18EFC-80D18F00 000064 0004+00 3/5 0/0 0/0 .rodata          @4006 */
SECTION_RODATA static f32 const lit_4006 = 1.0f;
COMPILER_STRIP_GATE(0x80D18EFC, &lit_4006);

/* 80D18F00-80D18F04 000068 0004+00 2/2 0/0 0/0 .rodata          @4007 */
SECTION_RODATA static f32 const lit_4007 = -1.0f;
COMPILER_STRIP_GATE(0x80D18F00, &lit_4007);

/* 80D186C0-80D18784 000C40 00C4+00 1/1 0/0 0/0 .text            init_modeMoveUp__12daTogeTrap_cFv
 */
void daTogeTrap_c::init_modeMoveUp() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D18F04-80D18F08 00006C 0004+00 0/2 0/0 0/0 .rodata          @4036 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4036 = 30.0f;
COMPILER_STRIP_GATE(0x80D18F04, &lit_4036);
#pragma pop

/* 80D18784-80D188C0 000D04 013C+00 1/0 0/0 0/0 .text            modeMoveUp__12daTogeTrap_cFv */
void daTogeTrap_c::modeMoveUp() {
    // NONMATCHING
}

/* 80D188C0-80D188DC 000E40 001C+00 1/1 0/0 0/0 .text            init_modeMoveDown__12daTogeTrap_cFv
 */
void daTogeTrap_c::init_modeMoveDown() {
    // NONMATCHING
}

/* 80D188DC-80D18994 000E5C 00B8+00 1/0 0/0 0/0 .text            modeMoveDown__12daTogeTrap_cFv */
void daTogeTrap_c::modeMoveDown() {
    // NONMATCHING
}

/* 80D18994-80D18A5C 000F14 00C8+00 1/1 0/0 0/0 .text            init_modeBreak__12daTogeTrap_cFv */
void daTogeTrap_c::init_modeBreak() {
    // NONMATCHING
}

/* 80D18A5C-80D18BEC 000FDC 0190+00 1/0 0/0 0/0 .text            modeBreak__12daTogeTrap_cFv */
void daTogeTrap_c::modeBreak() {
    // NONMATCHING
}

/* 80D18BEC-80D18CA4 00116C 00B8+00 1/0 0/0 0/0 .text            Draw__12daTogeTrap_cFv */
void daTogeTrap_c::Draw() {
    // NONMATCHING
}

/* 80D18CA4-80D18CD4 001224 0030+00 1/0 0/0 0/0 .text            Delete__12daTogeTrap_cFv */
void daTogeTrap_c::Delete() {
    // NONMATCHING
}

/* 80D18CD4-80D18D00 001254 002C+00 1/0 0/0 0/0 .text            daTogeTrap_Draw__FP12daTogeTrap_c
 */
static void daTogeTrap_Draw(daTogeTrap_c* param_0) {
    // NONMATCHING
}

/* 80D18D00-80D18D20 001280 0020+00 1/0 0/0 0/0 .text daTogeTrap_Execute__FP12daTogeTrap_c */
static void daTogeTrap_Execute(daTogeTrap_c* param_0) {
    // NONMATCHING
}

/* 80D18D20-80D18D40 0012A0 0020+00 1/0 0/0 0/0 .text            daTogeTrap_Delete__FP12daTogeTrap_c
 */
static void daTogeTrap_Delete(daTogeTrap_c* param_0) {
    // NONMATCHING
}

/* 80D18D40-80D18D60 0012C0 0020+00 1/0 0/0 0/0 .text            daTogeTrap_Create__FP10fopAc_ac_c
 */
static void daTogeTrap_Create(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 80D18D60-80D18DA8 0012E0 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
// cCcD_GStts::~cCcD_GStts() {
extern "C" void __dt__10cCcD_GSttsFv() {
    // NONMATCHING
}

/* 80D18DA8-80D18E14 001328 006C+00 2/1 0/0 0/0 .text            __dt__16daTogeTrap_HIO_cFv */
daTogeTrap_HIO_c::~daTogeTrap_HIO_c() {
    // NONMATCHING
}

/* 80D18E14-80D18E84 001394 0070+00 0/0 1/0 0/0 .text            __sinit_d_a_obj_togeTrap_cpp */
void __sinit_d_a_obj_togeTrap_cpp() {
    // NONMATCHING
}

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80D18E14, __sinit_d_a_obj_togeTrap_cpp);
#pragma pop

/* 80D18F08-80D18F08 000070 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
