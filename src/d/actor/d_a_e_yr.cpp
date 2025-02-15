/**
 * @file d_a_e_yr.cpp
 * 
*/

#include "d/actor/d_a_e_yr.h"
#include "d/d_cc_d.h"
#include "dol2asm.h"
UNK_REL_DATA;
#include "f_op/f_op_actor_enemy.h"


//
// Forward References:
//

extern "C" static void nodeCallBack__FP8J3DJointi();
extern "C" static void yr_disappear__FP10e_yr_class();
extern "C" static void anm_init__FP10e_yr_classifUcf();
extern "C" static void kuti_open__FP10e_yr_classsUl();
extern "C" static void e_yr_player_bg_check__FP10e_yr_class();
extern "C" static void e_yr_player_view_check__FP10e_yr_class();
extern "C" static void path_check__FP10e_yr_class();
extern "C" static void pl_horse_check__FP10e_yr_class();
extern "C" static void daE_Yr_shadowDraw__FP10e_yr_class();
extern "C" static void daE_Yr_Draw__FP10e_yr_class();
extern "C" static void e_yr_pos_move__FP10e_yr_class();
extern "C" static void e_yr_ground_pos_move__FP10e_yr_class();
extern "C" static void e_yr_path_move__FP10e_yr_class();
extern "C" static void e_yr_auto_move__FP10e_yr_class();
extern "C" static void e_yr_atack_move__FP10e_yr_class();
extern "C" static void e_yr_horse_move__FP10e_yr_class();
extern "C" static void e_yr_wait_move__FP10e_yr_class();
extern "C" static void e_yr_su_wait_move__FP10e_yr_class();
extern "C" static void e_yr_damage__FP10e_yr_class();
extern "C" static void damage_check__FP10e_yr_class();
extern "C" static void ground_angle_set__FP10e_yr_class();
extern "C" static void daE_Yr_Execute__FP10e_yr_class();
extern "C" static bool daE_Yr_IsDelete__FP10e_yr_class();
extern "C" static void daE_Yr_Delete__FP10e_yr_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" static void daE_Yr_Create__FP10fopAc_ac_c();
extern "C" void __ct__10e_yr_classFv();
extern "C" void __ct__4cXyzFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void __sinit_d_a_e_yr_cpp();
extern "C" void __dt__9e_yrHIO_cFv();
extern "C" void __dt__18fOpAcm_HIO_entry_cFv();
extern "C" void __dt__14mDoHIO_entry_cFv();
extern "C" static void func_808283DC();
extern "C" static void func_808283E4();
extern "C" void __dt__4cXyzFv();
extern "C" extern char const* const d_a_e_yr__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void
__ct__16mDoExt_McaMorfSOFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiP10Z2CreatureUlUl();
extern "C" void setAnm__16mDoExt_McaMorfSOFP15J3DAnmTransformiffff();
extern "C" void play__16mDoExt_McaMorfSOFUlSc();
extern "C" void entryDL__16mDoExt_McaMorfSOFv();
extern "C" void modelCalc__16mDoExt_McaMorfSOFv();
extern "C" void stopZelAnime__16mDoExt_McaMorfSOFv();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void fopAcM_searchActorDistance__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_createItemFromEnemyID__FUcPC4cXyziiPC5csXyzPC4cXyzPfPf();
extern "C" void fpcSch_JudgeByID__FPvPv();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void
dComIfGd_setShadow__FUlScP8J3DModelP4cXyzffffR13cBgS_PolyInfoP12dKy_tevstr_csfP9_GXTexObj();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void getEmitter__Q213dPa_control_c7level_cFUl();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void dPath_GetRoomPath__Fii();
extern "C" void LineCross__4cBgSFP11cBgS_LinChk();
extern "C" void GroundCross__4cBgSFP11cBgS_GndChk();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void __ct__11dBgS_GndChkFv();
extern "C" void __dt__11dBgS_GndChkFv();
extern "C" void __ct__11dBgS_LinChkFv();
extern "C" void __dt__11dBgS_LinChkFv();
extern "C" void Set__11dBgS_LinChkFPC4cXyzPC4cXyzPC10fopAc_ac_c();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Move__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void ChkAtHit__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void cc_at_check__FP10fopAc_ac_cP11dCcU_AtInfo();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void dKy_Sound_set__F4cXyziUii();
extern "C" void dKy_darkworld_check__Fv();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __pl__5csXyzFR5csXyz();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void SetPos__11cBgS_GndChkFPC3Vec();
extern "C" void SetPos__11cBgS_GndChkFPC4cXyz();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalc0__FPfff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void MtxTrans__FfffUc();
extern "C" void MtxScale__FfffUc();
extern "C" void MtxPosition__FP4cXyzP4cXyz();
extern "C" void func_802807E0();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __ct__15Z2CreatureEnemyFv();
extern "C" void init__15Z2CreatureEnemyFP3VecP3VecUcUc();
extern "C" void setLinkSearch__15Z2CreatureEnemyFb();
extern "C" void setEnemyName__15Z2CreatureEnemyFPCc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void checkPass__12J3DFrameCtrlFf();
extern "C" void __construct_array();
extern "C" void _savegpr_19();
extern "C" void _savegpr_21();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_19();
extern "C" void _restgpr_21();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" u8 mCurrentMtx__6J3DSys[48];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" u8 m_midnaActor__9daPy_py_c[4];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* 8082220C-808225C0 0000EC 03B4+00 1/1 0/0 0/0 .text            nodeCallBack__FP8J3DJointi */
static void nodeCallBack(J3DJoint* param_0, int param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8082887C-80828880 00002C 0004+00 0/1 0/0 0/0 .rodata          @4099 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4099 = 28.0f;
COMPILER_STRIP_GATE(0x8082887C, &lit_4099);
#pragma pop

/* 80828880-80828884 000030 0004+00 0/1 0/0 0/0 .rodata          @4100 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4100 = 88.0f;
COMPILER_STRIP_GATE(0x80828880, &lit_4100);
#pragma pop

/* 80828884-80828888 000034 0004+00 0/1 0/0 0/0 .rodata          @4101 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4101 = 4.0f;
COMPILER_STRIP_GATE(0x80828884, &lit_4101);
#pragma pop

/* 80828888-80828890 000038 0004+04 1/2 0/0 0/0 .rodata          @4102 */
SECTION_RODATA static f32 const lit_4102[1 + 1 /* padding */] = {
    -1.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x80828888, &lit_4102);

/* 808225C0-80822790 0004A0 01D0+00 1/1 0/0 0/0 .text            yr_disappear__FP10e_yr_class */
static void yr_disappear(e_yr_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 808289A8-808289A8 000158 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_808289A8 = "E_Yr";
#pragma pop

/* 80822790-80822848 000670 00B8+00 8/8 0/0 0/0 .text            anm_init__FP10e_yr_classifUcf */
static void anm_init(e_yr_class* param_0, int param_1, f32 param_2, u8 param_3, f32 param_4) {
    // NONMATCHING
}

/* 80822848-80822874 000728 002C+00 3/3 0/0 0/0 .text            kuti_open__FP10e_yr_classsUl */
static void kuti_open(e_yr_class* param_0, s16 param_1, u32 param_2) {
    // NONMATCHING
}

/* 80822874-80822954 000754 00E0+00 1/1 0/0 0/0 .text e_yr_player_bg_check__FP10e_yr_class */
static void e_yr_player_bg_check(e_yr_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80828890-80828898 000040 0008+00 1/1 0/0 0/0 .rodata          @4221 */
SECTION_RODATA static u8 const lit_4221[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80828890, &lit_4221);

/* 80828DB0-80828DBC 000008 000C+00 1/1 0/0 0/0 .bss             @3920 */
static u8 lit_3920[12];

/* 80828DBC-80828E34 000014 0078+00 10/10 0/0 0/0 .bss             l_e_yrHIO */
static u8 l_e_yrHIO[120];

/* 80822954-80822AFC 000834 01A8+00 4/4 0/0 0/0 .text e_yr_player_view_check__FP10e_yr_class */
static void e_yr_player_view_check(e_yr_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80828898-8082889C 000048 0004+00 0/4 0/0 0/0 .rodata          @4283 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4283 = 50.0f;
COMPILER_STRIP_GATE(0x80828898, &lit_4283);
#pragma pop

/* 80828E34-80828F33 00008C 00FF+00 1/1 0/0 0/0 .bss             check_index$4227 */
static u8 check_index[255];

/* 80822AFC-80822D4C 0009DC 0250+00 1/1 0/0 0/0 .text            path_check__FP10e_yr_class */
static void path_check(e_yr_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8082889C-808288A0 00004C 0004+00 1/6 0/0 0/0 .rodata          @4295 */
SECTION_RODATA static f32 const lit_4295 = 20.0f;
COMPILER_STRIP_GATE(0x8082889C, &lit_4295);

/* 80822D4C-80822DB8 000C2C 006C+00 2/2 0/0 0/0 .text            pl_horse_check__FP10e_yr_class */
static void pl_horse_check(e_yr_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 808288A0-808288A4 000050 0004+00 0/4 0/0 0/0 .rodata          @4320 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4320 = 150.0f;
COMPILER_STRIP_GATE(0x808288A0, &lit_4320);
#pragma pop

/* 808288A4-808288A8 000054 0004+00 0/1 0/0 0/0 .rodata          @4321 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4321 = 800.0f;
COMPILER_STRIP_GATE(0x808288A4, &lit_4321);
#pragma pop

/* 808288A8-808288AC 000058 0004+00 0/2 0/0 0/0 .rodata          @4322 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4322 = 40.0f;
COMPILER_STRIP_GATE(0x808288A8, &lit_4322);
#pragma pop

/* 80822DB8-80822E48 000C98 0090+00 1/1 0/0 0/0 .text            daE_Yr_shadowDraw__FP10e_yr_class
 */
static void daE_Yr_shadowDraw(e_yr_class* param_0) {
    // NONMATCHING
}

/* 80822E48-80822F0C 000D28 00C4+00 1/0 0/0 0/0 .text            daE_Yr_Draw__FP10e_yr_class */
static void daE_Yr_Draw(e_yr_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 808288AC-808288B0 00005C 0004+00 0/5 0/0 0/0 .rodata          @4379 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4379 = 0.5f;
COMPILER_STRIP_GATE(0x808288AC, &lit_4379);
#pragma pop

/* 808288B0-808288B4 000060 0004+00 0/1 0/0 0/0 .rodata          @4380 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4380 = 1.0f / 25.0f;
COMPILER_STRIP_GATE(0x808288B0, &lit_4380);
#pragma pop

/* 808288B4-808288B8 000064 0004+00 0/7 0/0 0/0 .rodata          @4381 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4381 = 5.0f;
COMPILER_STRIP_GATE(0x808288B4, &lit_4381);
#pragma pop

/* 80822F0C-80823148 000DEC 023C+00 6/6 0/0 0/0 .text            e_yr_pos_move__FP10e_yr_class */
static void e_yr_pos_move(e_yr_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 808288B8-808288BC 000068 0004+00 0/2 0/0 0/0 .rodata          @4399 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4399 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x808288B8, &lit_4399);
#pragma pop

/* 808288BC-808288C0 00006C 0004+00 0/2 0/0 0/0 .rodata          @4400 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4400 = 3.0f;
COMPILER_STRIP_GATE(0x808288BC, &lit_4400);
#pragma pop

/* 808288C0-808288C4 000070 0004+00 0/1 0/0 0/0 .rodata          @4401 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4401 = -0.5f;
COMPILER_STRIP_GATE(0x808288C0, &lit_4401);
#pragma pop

/* 80823148-80823284 001028 013C+00 1/1 0/0 0/0 .text e_yr_ground_pos_move__FP10e_yr_class */
static void e_yr_ground_pos_move(e_yr_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 808288C4-808288C8 000074 0004+00 0/3 0/0 0/0 .rodata          @4542 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4542 = 12.0f;
COMPILER_STRIP_GATE(0x808288C4, &lit_4542);
#pragma pop

/* 808288C8-808288CC 000078 0004+00 0/2 0/0 0/0 .rodata          @4543 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4543 = 25.0f;
COMPILER_STRIP_GATE(0x808288C8, &lit_4543);
#pragma pop

/* 808288CC-808288D0 00007C 0004+00 0/2 0/0 0/0 .rodata          @4544 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4544 = 2.0f;
COMPILER_STRIP_GATE(0x808288CC, &lit_4544);
#pragma pop

/* 808288D0-808288D4 000080 0004+00 0/5 0/0 0/0 .rodata          @4545 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4545 = 30.0f;
COMPILER_STRIP_GATE(0x808288D0, &lit_4545);
#pragma pop

/* 808289EC-80828A58 -00001 006C+00 1/1 0/0 0/0 .data            @4552 */
SECTION_DATA static void* lit_4552[27] = {
    (void*)(((char*)e_yr_path_move__FP10e_yr_class) + 0x1A0),
    (void*)(((char*)e_yr_path_move__FP10e_yr_class) + 0x108),
    (void*)(((char*)e_yr_path_move__FP10e_yr_class) + 0x318),
    (void*)(((char*)e_yr_path_move__FP10e_yr_class) + 0x72C),
    (void*)(((char*)e_yr_path_move__FP10e_yr_class) + 0x72C),
    (void*)(((char*)e_yr_path_move__FP10e_yr_class) + 0x72C),
    (void*)(((char*)e_yr_path_move__FP10e_yr_class) + 0x72C),
    (void*)(((char*)e_yr_path_move__FP10e_yr_class) + 0x72C),
    (void*)(((char*)e_yr_path_move__FP10e_yr_class) + 0x72C),
    (void*)(((char*)e_yr_path_move__FP10e_yr_class) + 0x72C),
    (void*)(((char*)e_yr_path_move__FP10e_yr_class) + 0x72C),
    (void*)(((char*)e_yr_path_move__FP10e_yr_class) + 0x3F8),
    (void*)(((char*)e_yr_path_move__FP10e_yr_class) + 0x72C),
    (void*)(((char*)e_yr_path_move__FP10e_yr_class) + 0x72C),
    (void*)(((char*)e_yr_path_move__FP10e_yr_class) + 0x72C),
    (void*)(((char*)e_yr_path_move__FP10e_yr_class) + 0x72C),
    (void*)(((char*)e_yr_path_move__FP10e_yr_class) + 0x72C),
    (void*)(((char*)e_yr_path_move__FP10e_yr_class) + 0x72C),
    (void*)(((char*)e_yr_path_move__FP10e_yr_class) + 0x72C),
    (void*)(((char*)e_yr_path_move__FP10e_yr_class) + 0x72C),
    (void*)(((char*)e_yr_path_move__FP10e_yr_class) + 0x72C),
    (void*)(((char*)e_yr_path_move__FP10e_yr_class) + 0x480),
    (void*)(((char*)e_yr_path_move__FP10e_yr_class) + 0x72C),
    (void*)(((char*)e_yr_path_move__FP10e_yr_class) + 0x54C),
    (void*)(((char*)e_yr_path_move__FP10e_yr_class) + 0x5F8),
    (void*)(((char*)e_yr_path_move__FP10e_yr_class) + 0x72C),
    (void*)(((char*)e_yr_path_move__FP10e_yr_class) + 0x6D8),
};

/* 80823284-808239F8 001164 0774+00 2/1 0/0 0/0 .text            e_yr_path_move__FP10e_yr_class */
static void e_yr_path_move(e_yr_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 808288D4-808288D8 000084 0004+00 0/0 0/0 0/0 .rodata          @4546 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4546 = 500000.0f;
COMPILER_STRIP_GATE(0x808288D4, &lit_4546);
#pragma pop

/* 808288D8-808288DC 000088 0004+00 0/1 0/0 0/0 .rodata          @4547 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4547 = 5000.0f;
COMPILER_STRIP_GATE(0x808288D8, &lit_4547);
#pragma pop

/* 808288DC-808288E0 00008C 0004+00 0/4 0/0 0/0 .rodata          @4548 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4548 = 300.0f;
COMPILER_STRIP_GATE(0x808288DC, &lit_4548);
#pragma pop

/* 808288E0-808288E4 000090 0004+00 0/0 0/0 0/0 .rodata          @4549 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4549 = 4.0f / 5.0f;
COMPILER_STRIP_GATE(0x808288E0, &lit_4549);
#pragma pop

/* 808288E4-808288E8 000094 0004+00 0/3 0/0 0/0 .rodata          @4550 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4550 = 1000.0f;
COMPILER_STRIP_GATE(0x808288E4, &lit_4550);
#pragma pop

/* 808288E8-808288EC 000098 0004+00 0/5 0/0 0/0 .rodata          @4604 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4604 = 200.0f;
COMPILER_STRIP_GATE(0x808288E8, &lit_4604);
#pragma pop

/* 808288EC-808288F0 00009C 0004+00 0/3 0/0 0/0 .rodata          @4605 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4605 = 60.0f;
COMPILER_STRIP_GATE(0x808288EC, &lit_4605);
#pragma pop

/* 808288F0-808288F4 0000A0 0004+00 0/2 0/0 0/0 .rodata          @4606 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4606 = 500.0f;
COMPILER_STRIP_GATE(0x808288F0, &lit_4606);
#pragma pop

/* 808239F8-80823D3C 0018D8 0344+00 1/1 0/0 0/0 .text            e_yr_auto_move__FP10e_yr_class */
static void e_yr_auto_move(e_yr_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 808288F4-808288F8 0000A4 0004+00 0/3 0/0 0/0 .rodata          @4933 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4933 = 10.0f;
COMPILER_STRIP_GATE(0x808288F4, &lit_4933);
#pragma pop

/* 808288F8-808288FC 0000A8 0004+00 0/3 0/0 0/0 .rodata          @4934 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4934 = 400.0f;
COMPILER_STRIP_GATE(0x808288F8, &lit_4934);
#pragma pop

/* 808288FC-80828900 0000AC 0004+00 0/2 0/0 0/0 .rodata          @4935 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4935 = 2000.0f;
COMPILER_STRIP_GATE(0x808288FC, &lit_4935);
#pragma pop

/* 80828900-80828904 0000B0 0004+00 0/0 0/0 0/0 .rodata          @4936 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4936 = 1280.0f;
COMPILER_STRIP_GATE(0x80828900, &lit_4936);
#pragma pop

/* 80828904-80828908 0000B4 0004+00 0/0 0/0 0/0 .rodata          @4937 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4937 = 768.0f;
COMPILER_STRIP_GATE(0x80828904, &lit_4937);
#pragma pop

/* 80828908-8082890C 0000B8 0004+00 0/0 0/0 0/0 .rodata          @4938 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4938 = 1.0f / 20.0f;
COMPILER_STRIP_GATE(0x80828908, &lit_4938);
#pragma pop

/* 8082890C-80828910 0000BC 0004+00 0/0 0/0 0/0 .rodata          @4939 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4939 = 7000.0f;
COMPILER_STRIP_GATE(0x8082890C, &lit_4939);
#pragma pop

/* 80828910-80828914 0000C0 0004+00 0/1 0/0 0/0 .rodata          @4940 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4940 = 250.0f;
COMPILER_STRIP_GATE(0x80828910, &lit_4940);
#pragma pop

/* 80828914-80828918 0000C4 0004+00 0/1 0/0 0/0 .rodata          @4941 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4941 = 600.0f;
COMPILER_STRIP_GATE(0x80828914, &lit_4941);
#pragma pop

/* 80828918-8082891C 0000C8 0004+00 0/0 0/0 0/0 .rodata          @4942 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4942 = 35.0f;
COMPILER_STRIP_GATE(0x80828918, &lit_4942);
#pragma pop

/* 8082891C-80828920 0000CC 0004+00 0/0 0/0 0/0 .rodata          @4943 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4943 = 1350.0f;
COMPILER_STRIP_GATE(0x8082891C, &lit_4943);
#pragma pop

/* 80828920-80828924 0000D0 0004+00 0/0 0/0 0/0 .rodata          @4944 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4944 = -10.0f;
COMPILER_STRIP_GATE(0x80828920, &lit_4944);
#pragma pop

/* 80828924-80828928 0000D4 0004+00 0/2 0/0 0/0 .rodata          @4945 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4945 = 3000.0f;
COMPILER_STRIP_GATE(0x80828924, &lit_4945);
#pragma pop

/* 80828928-80828930 0000D8 0004+04 0/1 0/0 0/0 .rodata          @4946 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4946[1 + 1 /* padding */] = {
    -20.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x80828928, &lit_4946);
#pragma pop

/* 80828930-80828938 0000E0 0008+00 0/2 0/0 0/0 .rodata          @4949 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4949[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80828930, &lit_4949);
#pragma pop

/* 80828A58-80828AE8 -00001 0090+00 1/1 0/0 0/0 .data            @4948 */
SECTION_DATA static void* lit_4948[36] = {
    (void*)(((char*)e_yr_atack_move__FP10e_yr_class) + 0x110),
    (void*)(((char*)e_yr_atack_move__FP10e_yr_class) + 0x148),
    (void*)(((char*)e_yr_atack_move__FP10e_yr_class) + 0x148),
    (void*)(((char*)e_yr_atack_move__FP10e_yr_class) + 0x334),
    (void*)(((char*)e_yr_atack_move__FP10e_yr_class) + 0x4D0),
    (void*)(((char*)e_yr_atack_move__FP10e_yr_class) + 0x83C),
    (void*)(((char*)e_yr_atack_move__FP10e_yr_class) + 0xCC4),
    (void*)(((char*)e_yr_atack_move__FP10e_yr_class) + 0x904),
    (void*)(((char*)e_yr_atack_move__FP10e_yr_class) + 0xCC4),
    (void*)(((char*)e_yr_atack_move__FP10e_yr_class) + 0xCC4),
    (void*)(((char*)e_yr_atack_move__FP10e_yr_class) + 0xB88),
    (void*)(((char*)e_yr_atack_move__FP10e_yr_class) + 0xB88),
    (void*)(((char*)e_yr_atack_move__FP10e_yr_class) + 0xCC4),
    (void*)(((char*)e_yr_atack_move__FP10e_yr_class) + 0xCC4),
    (void*)(((char*)e_yr_atack_move__FP10e_yr_class) + 0xCC4),
    (void*)(((char*)e_yr_atack_move__FP10e_yr_class) + 0xCC4),
    (void*)(((char*)e_yr_atack_move__FP10e_yr_class) + 0xCC4),
    (void*)(((char*)e_yr_atack_move__FP10e_yr_class) + 0xCC4),
    (void*)(((char*)e_yr_atack_move__FP10e_yr_class) + 0xCC4),
    (void*)(((char*)e_yr_atack_move__FP10e_yr_class) + 0xCC4),
    (void*)(((char*)e_yr_atack_move__FP10e_yr_class) + 0xCC4),
    (void*)(((char*)e_yr_atack_move__FP10e_yr_class) + 0xCC4),
    (void*)(((char*)e_yr_atack_move__FP10e_yr_class) + 0xCC4),
    (void*)(((char*)e_yr_atack_move__FP10e_yr_class) + 0xCC4),
    (void*)(((char*)e_yr_atack_move__FP10e_yr_class) + 0xCC4),
    (void*)(((char*)e_yr_atack_move__FP10e_yr_class) + 0xCC4),
    (void*)(((char*)e_yr_atack_move__FP10e_yr_class) + 0xCC4),
    (void*)(((char*)e_yr_atack_move__FP10e_yr_class) + 0xCC4),
    (void*)(((char*)e_yr_atack_move__FP10e_yr_class) + 0xCC4),
    (void*)(((char*)e_yr_atack_move__FP10e_yr_class) + 0xCC4),
    (void*)(((char*)e_yr_atack_move__FP10e_yr_class) + 0xCC4),
    (void*)(((char*)e_yr_atack_move__FP10e_yr_class) + 0xCC4),
    (void*)(((char*)e_yr_atack_move__FP10e_yr_class) + 0xCC4),
    (void*)(((char*)e_yr_atack_move__FP10e_yr_class) + 0xCC4),
    (void*)(((char*)e_yr_atack_move__FP10e_yr_class) + 0xCC4),
    (void*)(((char*)e_yr_atack_move__FP10e_yr_class) + 0x334),
};

/* 80823D3C-80824BBC 001C1C 0E80+00 2/1 0/0 0/0 .text            e_yr_atack_move__FP10e_yr_class */
static void e_yr_atack_move(e_yr_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80828938-8082893C 0000E8 0004+00 0/1 0/0 0/0 .rodata          @5109 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5109 = 6.0f / 5.0f;
COMPILER_STRIP_GATE(0x80828938, &lit_5109);
#pragma pop

/* 8082893C-80828940 0000EC 0004+00 0/3 0/0 0/0 .rodata          @5110 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5110 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x8082893C, &lit_5110);
#pragma pop

/* 80828940-80828944 0000F0 0004+00 0/3 0/0 0/0 .rodata          @5111 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5111 = 70.0f;
COMPILER_STRIP_GATE(0x80828940, &lit_5111);
#pragma pop

/* 80828944-80828948 0000F4 0004+00 0/1 0/0 0/0 .rodata          @5112 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5112 = 180.0f;
COMPILER_STRIP_GATE(0x80828944, &lit_5112);
#pragma pop

/* 80828948-8082894C 0000F8 0004+00 0/1 0/0 0/0 .rodata          @5113 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5113 = 19.0f / 20.0f;
COMPILER_STRIP_GATE(0x80828948, &lit_5113);
#pragma pop

/* 8082894C-80828950 0000FC 0004+00 0/1 0/0 0/0 .rodata          @5114 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5114 = 2.0f / 5.0f;
COMPILER_STRIP_GATE(0x8082894C, &lit_5114);
#pragma pop

/* 80828950-80828954 000100 0004+00 0/1 0/0 0/0 .rodata          @5115 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5115 = -100.0f;
COMPILER_STRIP_GATE(0x80828950, &lit_5115);
#pragma pop

/* 80824BBC-80825484 002A9C 08C8+00 1/1 0/0 0/0 .text            e_yr_horse_move__FP10e_yr_class */
static void e_yr_horse_move(e_yr_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80828AE8-80828B40 -00001 0058+00 1/1 0/0 0/0 .data            @5218 */
SECTION_DATA static void* lit_5218[22] = {
    (void*)(((char*)e_yr_wait_move__FP10e_yr_class) + 0xA8),
    (void*)(((char*)e_yr_wait_move__FP10e_yr_class) + 0xE4),
    (void*)(((char*)e_yr_wait_move__FP10e_yr_class) + 0x10C),
    (void*)(((char*)e_yr_wait_move__FP10e_yr_class) + 0x1F0),
    (void*)(((char*)e_yr_wait_move__FP10e_yr_class) + 0x23C),
    (void*)(((char*)e_yr_wait_move__FP10e_yr_class) + 0x61C),
    (void*)(((char*)e_yr_wait_move__FP10e_yr_class) + 0x61C),
    (void*)(((char*)e_yr_wait_move__FP10e_yr_class) + 0x61C),
    (void*)(((char*)e_yr_wait_move__FP10e_yr_class) + 0x61C),
    (void*)(((char*)e_yr_wait_move__FP10e_yr_class) + 0x61C),
    (void*)(((char*)e_yr_wait_move__FP10e_yr_class) + 0x61C),
    (void*)(((char*)e_yr_wait_move__FP10e_yr_class) + 0x300),
    (void*)(((char*)e_yr_wait_move__FP10e_yr_class) + 0x300),
    (void*)(((char*)e_yr_wait_move__FP10e_yr_class) + 0x300),
    (void*)(((char*)e_yr_wait_move__FP10e_yr_class) + 0x61C),
    (void*)(((char*)e_yr_wait_move__FP10e_yr_class) + 0x61C),
    (void*)(((char*)e_yr_wait_move__FP10e_yr_class) + 0x61C),
    (void*)(((char*)e_yr_wait_move__FP10e_yr_class) + 0x61C),
    (void*)(((char*)e_yr_wait_move__FP10e_yr_class) + 0x61C),
    (void*)(((char*)e_yr_wait_move__FP10e_yr_class) + 0x61C),
    (void*)(((char*)e_yr_wait_move__FP10e_yr_class) + 0x61C),
    (void*)(((char*)e_yr_wait_move__FP10e_yr_class) + 0x514),
};

/* 80825484-80825ADC 003364 0658+00 2/1 0/0 0/0 .text            e_yr_wait_move__FP10e_yr_class */
static void e_yr_wait_move(e_yr_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80828B40-80828B98 -00001 0058+00 1/1 0/0 0/0 .data            @5314 */
SECTION_DATA static void* lit_5314[22] = {
    (void*)(((char*)e_yr_su_wait_move__FP10e_yr_class) + 0xA8),
    (void*)(((char*)e_yr_su_wait_move__FP10e_yr_class) + 0xE4),
    (void*)(((char*)e_yr_su_wait_move__FP10e_yr_class) + 0x10C),
    (void*)(((char*)e_yr_su_wait_move__FP10e_yr_class) + 0x1F0),
    (void*)(((char*)e_yr_su_wait_move__FP10e_yr_class) + 0x23C),
    (void*)(((char*)e_yr_su_wait_move__FP10e_yr_class) + 0x5D0),
    (void*)(((char*)e_yr_su_wait_move__FP10e_yr_class) + 0x5D0),
    (void*)(((char*)e_yr_su_wait_move__FP10e_yr_class) + 0x5D0),
    (void*)(((char*)e_yr_su_wait_move__FP10e_yr_class) + 0x5D0),
    (void*)(((char*)e_yr_su_wait_move__FP10e_yr_class) + 0x5D0),
    (void*)(((char*)e_yr_su_wait_move__FP10e_yr_class) + 0x5D0),
    (void*)(((char*)e_yr_su_wait_move__FP10e_yr_class) + 0x300),
    (void*)(((char*)e_yr_su_wait_move__FP10e_yr_class) + 0x300),
    (void*)(((char*)e_yr_su_wait_move__FP10e_yr_class) + 0x300),
    (void*)(((char*)e_yr_su_wait_move__FP10e_yr_class) + 0x5D0),
    (void*)(((char*)e_yr_su_wait_move__FP10e_yr_class) + 0x5D0),
    (void*)(((char*)e_yr_su_wait_move__FP10e_yr_class) + 0x5D0),
    (void*)(((char*)e_yr_su_wait_move__FP10e_yr_class) + 0x5D0),
    (void*)(((char*)e_yr_su_wait_move__FP10e_yr_class) + 0x5D0),
    (void*)(((char*)e_yr_su_wait_move__FP10e_yr_class) + 0x5D0),
    (void*)(((char*)e_yr_su_wait_move__FP10e_yr_class) + 0x5D0),
    (void*)(((char*)e_yr_su_wait_move__FP10e_yr_class) + 0x4C8),
};

/* 80825ADC-808260E8 0039BC 060C+00 2/1 0/0 0/0 .text            e_yr_su_wait_move__FP10e_yr_class
 */
static void e_yr_su_wait_move(e_yr_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80828954-80828958 000104 0004+00 0/1 0/0 0/0 .rodata          @5216 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5216 = 1.5f;
COMPILER_STRIP_GATE(0x80828954, &lit_5216);
#pragma pop

/* 80828958-8082895C 000108 0004+00 0/0 0/0 0/0 .rodata          @5217 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5217 = 80.0f;
COMPILER_STRIP_GATE(0x80828958, &lit_5217);
#pragma pop

/* 8082895C-80828960 00010C 0004+00 0/0 0/0 0/0 .rodata          @5371 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5371 = -50.0f;
COMPILER_STRIP_GATE(0x8082895C, &lit_5371);
#pragma pop

/* 80828960-80828964 000110 0004+00 0/1 0/0 0/0 .rodata          @5424 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5424 = -3.0f;
COMPILER_STRIP_GATE(0x80828960, &lit_5424);
#pragma pop

/* 80828964-80828968 000114 0004+00 0/1 0/0 0/0 .rodata          @5425 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5425 = 24.0f / 25.0f;
COMPILER_STRIP_GATE(0x80828964, &lit_5425);
#pragma pop

/* 80828968-8082896C 000118 0004+00 0/1 0/0 0/0 .rodata          @5426 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5426 = -30.0f;
COMPILER_STRIP_GATE(0x80828968, &lit_5426);
#pragma pop

/* 808260E8-808264F4 003FC8 040C+00 1/1 0/0 0/0 .text            e_yr_damage__FP10e_yr_class */
static void e_yr_damage(e_yr_class* param_0) {
    // NONMATCHING
}

/* 808264F4-808267C0 0043D4 02CC+00 1/1 0/0 0/0 .text            damage_check__FP10e_yr_class */
static void damage_check(e_yr_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8082896C-80828970 00011C 0004+00 0/1 0/0 0/0 .rodata          @5561 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5561 = -1000000000.0f;
COMPILER_STRIP_GATE(0x8082896C, &lit_5561);
#pragma pop

/* 80828970-80828974 000120 0004+00 0/1 0/0 0/0 .rodata          @5562 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5562 = 75.0f;
COMPILER_STRIP_GATE(0x80828970, &lit_5562);
#pragma pop

/* 808267C0-80826AFC 0046A0 033C+00 1/1 0/0 0/0 .text            ground_angle_set__FP10e_yr_class */
static void ground_angle_set(e_yr_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80828974-80828978 000124 0004+00 0/1 0/0 0/0 .rodata          @6057 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6057 = 27.0f;
COMPILER_STRIP_GATE(0x80828974, &lit_6057);
#pragma pop

/* 80828978-8082897C 000128 0004+00 0/1 0/0 0/0 .rodata          @6058 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6058 = 11.0f;
COMPILER_STRIP_GATE(0x80828978, &lit_6058);
#pragma pop

/* 8082897C-80828980 00012C 0004+00 0/2 0/0 0/0 .rodata          @6059 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6059 = 10000.0f;
COMPILER_STRIP_GATE(0x8082897C, &lit_6059);
#pragma pop

/* 80828980-80828984 000130 0004+00 0/1 0/0 0/0 .rodata          @6060 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6060 = 200000.0f;
COMPILER_STRIP_GATE(0x80828980, &lit_6060);
#pragma pop

/* 80828984-80828988 000134 0004+00 0/1 0/0 0/0 .rodata          @6061 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6061 = 3.0f / 10.0f;
COMPILER_STRIP_GATE(0x80828984, &lit_6061);
#pragma pop

/* 80828988-8082898C 000138 0004+00 0/1 0/0 0/0 .rodata          @6062 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6062 = 13.0f / 10.0f;
COMPILER_STRIP_GATE(0x80828988, &lit_6062);
#pragma pop

/* 80828B98-80828BA8 0001E4 0010+00 0/0 0/0 0/0 .data            wing_j$5339 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 wing_j_5339[16] = {
    0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x12,
};
#pragma pop

/* 80828BA8-80828BB4 0001F4 000A+02 0/1 0/0 0/0 .data            e_name$5628 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 e_name_5628[10 + 2 /* padding */] = {
    0x84,
    0x3A,
    0x84,
    0x3B,
    0x84,
    0x3C,
    0x84,
    0x3D,
    0x84,
    0x3E,
    /* padding */
    0x00,
    0x00,
};
#pragma pop

/* 80828BB4-80828BC4 000200 0010+00 0/1 0/0 0/0 .data            wing_j$5629 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 wing_j_5629[16] = {
    0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x12,
};
#pragma pop

/* 80828BC4-80828BC8 000210 0004+00 0/1 0/0 0/0 .data            e_name$5644 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 e_name_5644[4] = {
    0x84,
    0x44,
    0x84,
    0x45,
};
#pragma pop

/* 80828BC8-80828BD0 000214 0008+00 0/1 0/0 0/0 .data            wing_j$5645 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 wing_j_5645[8] = {
    0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x11,
};
#pragma pop

/* 80826AFC-8082789C 0049DC 0DA0+00 2/1 0/0 0/0 .text            daE_Yr_Execute__FP10e_yr_class */
static void daE_Yr_Execute(e_yr_class* param_0) {
    // NONMATCHING
}

/* 8082789C-808278A4 00577C 0008+00 1/0 0/0 0/0 .text            daE_Yr_IsDelete__FP10e_yr_class */
static bool daE_Yr_IsDelete(e_yr_class* param_0) {
    return true;
}

/* 808278A4-808278F4 005784 0050+00 1/0 0/0 0/0 .text            daE_Yr_Delete__FP10e_yr_class */
static void daE_Yr_Delete(e_yr_class* param_0) {
    // NONMATCHING
}

/* 808278F4-80827A30 0057D4 013C+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
static void useHeapInit(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 8082898C-80828990 00013C 0004+00 0/1 0/0 0/0 .rodata          @6217 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6217 = -300.0f;
COMPILER_STRIP_GATE(0x8082898C, &lit_6217);
#pragma pop

/* 80828990-80828994 000140 0004+00 0/1 0/0 0/0 .rodata          @6218 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6218 = -200.0f;
COMPILER_STRIP_GATE(0x80828990, &lit_6218);
#pragma pop

/* 808289A8-808289A8 000158 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_808289AD = "E_yr";
#pragma pop

/* 80828BD0-80828C10 00021C 0040+00 0/1 0/0 0/0 .data            at_sph_src$6145 */
#pragma push
#pragma force_active on
static dCcD_SrcSph at_sph_src = {
    {
        {0x0, {{AT_TYPE_CSTATUE_SWING, 0x1, 0xd}, {0x0, 0x0}, 0x0}}, // mObj
        {dCcD_SE_METAL, 0x0, 0x0, 0x0, 0x1}, // mGObjAt
        {dCcD_SE_HARD_BODY, 0x0, 0x0, 0x0, 0x0}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 25.0f} // mSph
    } // mSphAttr
};
#pragma pop

/* 80828C10-80828C50 00025C 0040+00 0/1 0/0 0/0 .data            head_tg_sph_src$6146 */
#pragma push
#pragma force_active on
static dCcD_SrcSph head_tg_sph_src = {
    {
        {0x0, {{0x0, 0x1, 0x0}, {0xd8fbfdff, 0x3}, 0x0}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x2}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 62.5f} // mSph
    } // mSphAttr
};
#pragma pop

/* 80828C50-80828C90 00029C 0040+00 0/1 0/0 0/0 .data            body_tg_sph_src$6147 */
#pragma push
#pragma force_active on
static dCcD_SrcSph body_tg_sph_src = {
    {
        {0x0, {{0x0, 0x1, 0x0}, {0xd8fbfdff, 0x3}, 0x0}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x2}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 65.0f} // mSph
    } // mSphAttr
};
#pragma pop

/* 80828C90-80828CD0 0002DC 0040+00 0/1 0/0 0/0 .data            body_co_sph_src$6148 */
#pragma push
#pragma force_active on
static dCcD_SrcSph body_co_sph_src = {
    {
        {0x0, {{0x0, 0x1, 0x0}, {0x0, 0x0}, 0x75}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 80.0f} // mSph
    } // mSphAttr
};
#pragma pop

/* 80827A30-80827D64 005910 0334+00 1/0 0/0 0/0 .text            daE_Yr_Create__FP10fopAc_ac_c */
static void daE_Yr_Create(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80828CD0-80828CF0 -00001 0020+00 1/0 0/0 0/0 .data            l_daE_Yr_Method */
static actor_method_class l_daE_Yr_Method = {
    (process_method_func)daE_Yr_Create__FP10fopAc_ac_c,
    (process_method_func)daE_Yr_Delete__FP10e_yr_class,
    (process_method_func)daE_Yr_Execute__FP10e_yr_class,
    (process_method_func)daE_Yr_IsDelete__FP10e_yr_class,
    (process_method_func)daE_Yr_Draw__FP10e_yr_class,
};

/* 80828CF0-80828D20 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_E_YR */
extern actor_process_profile_definition g_profile_E_YR = {
  fpcLy_CURRENT_e,        // mLayerID
  7,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_E_YR,              // mProcName
  &g_fpcLf_Method.base,  // sub_method
  sizeof(e_yr_class),     // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  189,                    // mPriority
  &l_daE_Yr_Method,       // sub_method
  0x10040100,             // mStatus
  fopAc_ENEMY_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 80828D20-80828D2C 00036C 000C+00 1/1 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 80828D2C-80828D38 000378 000C+00 2/2 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80828D38-80828D44 000384 000C+00 1/1 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80828D44-80828D50 000390 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 80828D50-80828D5C 00039C 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80828D5C-80828D80 0003A8 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_808283E4,
    (void*)NULL,
    (void*)NULL,
    (void*)func_808283DC,
};

/* 80827D64-80827F80 005C44 021C+00 1/1 0/0 0/0 .text            __ct__10e_yr_classFv */
e_yr_class::e_yr_class() {
    // NONMATCHING
}

/* 80827F80-80827F84 005E60 0004+00 1/1 0/0 0/0 .text            __ct__4cXyzFv */
// cXyz::cXyz() {
extern "C" void __ct__4cXyzFv() {
    /* empty function */
}

/* 80827F84-80827FCC 005E64 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
// cM3dGSph::~cM3dGSph() {
extern "C" void __dt__8cM3dGSphFv() {
    // NONMATCHING
}

/* 80827FCC-80828014 005EAC 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
// cM3dGAab::~cM3dGAab() {
extern "C" void __dt__8cM3dGAabFv() {
    // NONMATCHING
}

/* 80828014-80828070 005EF4 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
// dCcD_GStts::~dCcD_GStts() {
extern "C" void __dt__10dCcD_GSttsFv() {
    // NONMATCHING
}

/* 80828070-808280E0 005F50 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
// dBgS_ObjAcch::~dBgS_ObjAcch() {
extern "C" void __dt__12dBgS_ObjAcchFv() {
    // NONMATCHING
}

/* 808280E0-80828150 005FC0 0070+00 1/0 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
// dBgS_AcchCir::~dBgS_AcchCir() {
extern "C" void __dt__12dBgS_AcchCirFv() {
    // NONMATCHING
}

/* 80828150-80828198 006030 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
// cCcD_GStts::~cCcD_GStts() {
extern "C" void __dt__10cCcD_GSttsFv() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80828994-80828998 000144 0004+00 0/1 0/0 0/0 .rodata          @6390 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6390 = 2500.0f;
COMPILER_STRIP_GATE(0x80828994, &lit_6390);
#pragma pop

/* 80828998-8082899C 000148 0004+00 0/1 0/0 0/0 .rodata          @6391 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6391 = 7.0f / 20.0f;
COMPILER_STRIP_GATE(0x80828998, &lit_6391);
#pragma pop

/* 8082899C-808289A0 00014C 0004+00 0/1 0/0 0/0 .rodata          @6392 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6392 = 3.5f;
COMPILER_STRIP_GATE(0x8082899C, &lit_6392);
#pragma pop

/* 808289A0-808289A4 000150 0004+00 0/1 0/0 0/0 .rodata          @6393 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6393 = 8000.0f;
COMPILER_STRIP_GATE(0x808289A0, &lit_6393);
#pragma pop

/* 808289A4-808289A8 000154 0004+00 0/1 0/0 0/0 .rodata          @6394 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6394 = 1500.0f;
COMPILER_STRIP_GATE(0x808289A4, &lit_6394);
#pragma pop

/* 80828D80-80828D8C 0003CC 000C+00 2/2 0/0 0/0 .data            __vt__9e_yrHIO_c */
SECTION_DATA extern void* __vt__9e_yrHIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__9e_yrHIO_cFv,
};

/* 80828D8C-80828D98 0003D8 000C+00 3/3 0/0 0/0 .data            __vt__18fOpAcm_HIO_entry_c */
SECTION_DATA extern void* __vt__18fOpAcm_HIO_entry_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__18fOpAcm_HIO_entry_cFv,
};

/* 80828D98-80828DA4 0003E4 000C+00 4/4 0/0 0/0 .data            __vt__14mDoHIO_entry_c */
SECTION_DATA extern void* __vt__14mDoHIO_entry_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14mDoHIO_entry_cFv,
};

/* 80828198-808282CC 006078 0134+00 0/0 1/0 0/0 .text            __sinit_d_a_e_yr_cpp */
void __sinit_d_a_e_yr_cpp() {
    // NONMATCHING
}

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80828198, __sinit_d_a_e_yr_cpp);
#pragma pop

/* 808282CC-80828338 0061AC 006C+00 2/1 0/0 0/0 .text            __dt__9e_yrHIO_cFv */
e_yrHIO_c::~e_yrHIO_c() {
    // NONMATCHING
}

/* 80828338-80828394 006218 005C+00 1/0 0/0 0/0 .text            __dt__18fOpAcm_HIO_entry_cFv */
// fOpAcm_HIO_entry_c::~fOpAcm_HIO_entry_c() {
extern "C" void __dt__18fOpAcm_HIO_entry_cFv() {
    // NONMATCHING
}

/* 80828394-808283DC 006274 0048+00 1/0 0/0 0/0 .text            __dt__14mDoHIO_entry_cFv */
// mDoHIO_entry_c::~mDoHIO_entry_c() {
extern "C" void __dt__14mDoHIO_entry_cFv() {
    // NONMATCHING
}

/* 808283DC-808283E4 0062BC 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
static void func_808283DC() {
    // NONMATCHING
}

/* 808283E4-808283EC 0062C4 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
static void func_808283E4() {
    // NONMATCHING
}

/* 80828800-8082883C 0066E0 003C+00 1/1 0/0 0/0 .text            __dt__4cXyzFv */
// cXyz::~cXyz() {
extern "C" void __dt__4cXyzFv() {
    // NONMATCHING
}

/* 808289A8-808289A8 000158 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
