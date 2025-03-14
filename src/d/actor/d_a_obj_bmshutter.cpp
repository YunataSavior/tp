/**
 * @file d_a_obj_bmshutter.cpp
 * 
*/

#include "d/actor/d_a_obj_bmshutter.h"
#include "dol2asm.h"


//
// Forward References:
//

extern "C" void initBaseMtx__11daObjBmSh_cFv();
extern "C" void setBaseMtx__11daObjBmSh_cFv();
extern "C" void Create__11daObjBmSh_cFv();
extern "C" void CreateHeap__11daObjBmSh_cFv();
extern "C" void create__11daObjBmSh_cFv();
extern "C" void Execute__11daObjBmSh_cFPPA3_A4_f();
extern "C" void checkSw__11daObjBmSh_cFv();
extern "C" void checkAnySw__11daObjBmSh_cFv();
extern "C" void checkMySw__11daObjBmSh_cFv();
extern "C" void event_proc_call__11daObjBmSh_cFv();
extern "C" void actionWait__11daObjBmSh_cFv();
extern "C" void actionOrderEvent__11daObjBmSh_cFv();
extern "C" void actionEvent__11daObjBmSh_cFv();
extern "C" void actionDead__11daObjBmSh_cFv();
extern "C" void mode_proc_call__11daObjBmSh_cFv();
extern "C" void modeWait__11daObjBmSh_cFv();
extern "C" void modeMove__11daObjBmSh_cFv();
extern "C" void modeEnd__11daObjBmSh_cFv();
extern "C" void Draw__11daObjBmSh_cFv();
extern "C" void Delete__11daObjBmSh_cFv();
extern "C" static void daObjBmSh_Draw__FP11daObjBmSh_c();
extern "C" static void daObjBmSh_Execute__FP11daObjBmSh_c();
extern "C" static void daObjBmSh_Delete__FP11daObjBmSh_c();
extern "C" static void daObjBmSh_Create__FP10fopAc_ac_c();
extern "C" extern char const* const d_a_obj_bmshutter__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void fopAcM_orderOtherEventId__FP10fopAc_ac_csUcUsUsUs();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dLib_checkActorInRectangle__FP10fopAc_ac_cP10fopAc_ac_cPC4cXyzPC4cXyz();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void getEventIdx__16dEvent_manager_cFP10fopAc_ac_cUc();
extern "C" void endCheck__16dEvent_manager_cFs();
extern "C" void dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void cLib_addCalc__FPfffff();
extern "C" void cLib_addCalc0__FPfff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_27();
extern "C" void _savegpr_29();
extern "C" void _restgpr_27();
extern "C" void _restgpr_29();
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" extern u8 struct_80BBA970[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 80BBA7B0-80BBA7C8 000000 0018+00 3/3 0/0 0/0 .rodata          l_cull_box */
SECTION_RODATA static u8 const l_cull_box[24] = {
    0xC3, 0x48, 0x00, 0x00, 0xC2, 0xC8, 0x00, 0x00, 0xC3, 0x48, 0x00, 0x00,
    0x43, 0x48, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x43, 0x48, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BBA7B0, &l_cull_box);

/* 80BBA7C8-80BBA7F8 000018 0030+00 0/1 0/0 0/0 .rodata          l_check_area */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const l_check_area[48] = {
    0xC3, 0x7A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC2, 0xC8, 0x00, 0x00, 0x43, 0x48, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xC2, 0xC8, 0x00, 0x00, 0x43, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x42, 0xC8, 0x00, 0x00, 0xC3, 0x7A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BBA7C8, &l_check_area);
#pragma pop

/* 80BBA7F8-80BBA7FC 000048 0004+00 1/3 0/0 0/0 .rodata          @3663 */
SECTION_RODATA static f32 const lit_3663 = 400.0f;
COMPILER_STRIP_GATE(0x80BBA7F8, &lit_3663);

/* 80BBA7FC-80BBA800 00004C 0004+00 2/5 0/0 0/0 .rodata          @3664 */
SECTION_RODATA static u8 const lit_3664[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80BBA7FC, &lit_3664);

/* 80BB9A58-80BB9AE4 000078 008C+00 1/1 0/0 0/0 .text            initBaseMtx__11daObjBmSh_cFv */
void daObjBmSh_c::initBaseMtx() {
    // NONMATCHING
}

/* 80BB9AE4-80BB9B84 000104 00A0+00 2/2 0/0 0/0 .text            setBaseMtx__11daObjBmSh_cFv */
void daObjBmSh_c::setBaseMtx() {
    // NONMATCHING
}

/* 80BB9B84-80BB9C50 0001A4 00CC+00 1/0 0/0 0/0 .text            Create__11daObjBmSh_cFv */
void daObjBmSh_c::Create() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80BBA820-80BBA820 000070 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80BBA820 = "K_saku00";
#pragma pop

/* 80BBA82C-80BBA838 000000 000C+00 2/2 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80BBA838-80BBA84C 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 80BBA84C-80BBA850 -00001 0004+00 3/3 0/0 0/0 .data            l_arcName */
SECTION_DATA static void* l_arcName = (void*)&d_a_obj_bmshutter__stringBase0;

/* 80BB9C50-80BB9CC0 000270 0070+00 1/0 0/0 0/0 .text            CreateHeap__11daObjBmSh_cFv */
void daObjBmSh_c::CreateHeap() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80BBA850-80BBA85C -00001 000C+00 0/1 0/0 0/0 .data            @3852 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3852[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionWait__11daObjBmSh_cFv,
};
#pragma pop

/* 80BBA85C-80BBA868 -00001 000C+00 0/1 0/0 0/0 .data            @3853 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3853[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionOrderEvent__11daObjBmSh_cFv,
};
#pragma pop

/* 80BBA868-80BBA874 -00001 000C+00 0/1 0/0 0/0 .data            @3854 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3854[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionEvent__11daObjBmSh_cFv,
};
#pragma pop

/* 80BBA874-80BBA880 -00001 000C+00 0/1 0/0 0/0 .data            @3855 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3855[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionDead__11daObjBmSh_cFv,
};
#pragma pop

/* 80BBA880-80BBA8B0 000054 0030+00 0/1 0/0 0/0 .data            l_func$3851 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_func_3851[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80BBA8B0-80BBA8BC -00001 000C+00 0/1 0/0 0/0 .data            @3895 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3895[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeWait__11daObjBmSh_cFv,
};
#pragma pop

/* 80BBA8BC-80BBA8C8 -00001 000C+00 0/1 0/0 0/0 .data            @3896 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3896[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeMove__11daObjBmSh_cFv,
};
#pragma pop

/* 80BBA8C8-80BBA8D4 -00001 000C+00 0/1 0/0 0/0 .data            @3897 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3897[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)modeEnd__11daObjBmSh_cFv,
};
#pragma pop

/* 80BBA8D4-80BBA8F8 0000A8 0024+00 0/1 0/0 0/0 .data            l_func$3894 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_func_3894[36] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80BBA8F8-80BBA918 -00001 0020+00 1/0 0/0 0/0 .data            l_daObjBmSh_Method */
static actor_method_class l_daObjBmSh_Method = {
    (process_method_func)daObjBmSh_Create__FP10fopAc_ac_c,
    (process_method_func)daObjBmSh_Delete__FP11daObjBmSh_c,
    (process_method_func)daObjBmSh_Execute__FP11daObjBmSh_c,
    0,
    (process_method_func)daObjBmSh_Draw__FP11daObjBmSh_c,
};

/* 80BBA918-80BBA948 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_BoomShutter */
extern actor_process_profile_definition g_profile_Obj_BoomShutter = {
  fpcLy_CURRENT_e,        // mLayerID
  3,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_Obj_BoomShutter,   // mProcName
  &g_fpcLf_Method.base,  // sub_method
  sizeof(daObjBmSh_c),    // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  449,                    // mPriority
  &l_daObjBmSh_Method,    // sub_method
  0x00040100,             // mStatus
  fopAc_ACTOR_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 80BBA948-80BBA970 00011C 0028+00 1/1 0/0 0/0 .data            __vt__11daObjBmSh_c */
SECTION_DATA extern void* __vt__11daObjBmSh_c[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__11daObjBmSh_cFv,
    (void*)Create__11daObjBmSh_cFv,
    (void*)Execute__11daObjBmSh_cFPPA3_A4_f,
    (void*)Draw__11daObjBmSh_cFv,
    (void*)Delete__11daObjBmSh_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80BB9CC0-80BB9DB4 0002E0 00F4+00 1/1 0/0 0/0 .text            create__11daObjBmSh_cFv */
void daObjBmSh_c::create() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80BBA800-80BBA804 000050 0004+00 0/1 0/0 0/0 .rodata          @3793 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_3793 = 0x42F00001;
COMPILER_STRIP_GATE(0x80BBA800, &lit_3793);
#pragma pop

/* 80BBA804-80BBA808 000054 0004+00 0/2 0/0 0/0 .rodata          @3794 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3794 = 150.0f;
COMPILER_STRIP_GATE(0x80BBA804, &lit_3794);
#pragma pop

/* 80BBA808-80BBA80C 000058 0004+00 0/2 0/0 0/0 .rodata          @3795 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3795 = 1.0f;
COMPILER_STRIP_GATE(0x80BBA808, &lit_3795);
#pragma pop

/* 80BBA80C-80BBA810 00005C 0004+00 0/2 0/0 0/0 .rodata          @3796 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3796 = -1.0f;
COMPILER_STRIP_GATE(0x80BBA80C, &lit_3796);
#pragma pop

/* 80BB9DB4-80BB9F34 0003D4 0180+00 1/0 0/0 0/0 .text            Execute__11daObjBmSh_cFPPA3_A4_f */
void daObjBmSh_c::Execute(f32 (**param_0)[3][4]) {
    // NONMATCHING
}

/* 80BB9F34-80BB9FBC 000554 0088+00 2/2 0/0 0/0 .text            checkSw__11daObjBmSh_cFv */
void daObjBmSh_c::checkSw() {
    // NONMATCHING
}

/* 80BB9FBC-80BBA044 0005DC 0088+00 2/2 0/0 0/0 .text            checkAnySw__11daObjBmSh_cFv */
void daObjBmSh_c::checkAnySw() {
    // NONMATCHING
}

/* 80BBA044-80BBA080 000664 003C+00 2/2 0/0 0/0 .text            checkMySw__11daObjBmSh_cFv */
void daObjBmSh_c::checkMySw() {
    // NONMATCHING
}

/* 80BBA080-80BBA13C 0006A0 00BC+00 1/1 0/0 0/0 .text            event_proc_call__11daObjBmSh_cFv */
void daObjBmSh_c::event_proc_call() {
    // NONMATCHING
}

/* 80BBA13C-80BBA1A4 00075C 0068+00 1/0 0/0 0/0 .text            actionWait__11daObjBmSh_cFv */
void daObjBmSh_c::actionWait() {
    // NONMATCHING
}

/* 80BBA1A4-80BBA20C 0007C4 0068+00 1/0 0/0 0/0 .text            actionOrderEvent__11daObjBmSh_cFv
 */
void daObjBmSh_c::actionOrderEvent() {
    // NONMATCHING
}

/* 80BBA20C-80BBA268 00082C 005C+00 1/0 0/0 0/0 .text            actionEvent__11daObjBmSh_cFv */
void daObjBmSh_c::actionEvent() {
    // NONMATCHING
}

/* 80BBA268-80BBA26C 000888 0004+00 1/0 0/0 0/0 .text            actionDead__11daObjBmSh_cFv */
void daObjBmSh_c::actionDead() {
    /* empty function */
}

/* ############################################################################################## */
/* 80BBA810-80BBA814 000060 0004+00 1/2 0/0 0/0 .rodata          @3908 */
SECTION_RODATA static f32 const lit_3908 = 1.0f / 20.0f;
COMPILER_STRIP_GATE(0x80BBA810, &lit_3908);

/* 80BBA814-80BBA818 000064 0004+00 1/2 0/0 0/0 .rodata          @3909 */
SECTION_RODATA static f32 const lit_3909 = 10.0f;
COMPILER_STRIP_GATE(0x80BBA814, &lit_3909);

/* 80BBA26C-80BBA394 00088C 0128+00 1/1 0/0 0/0 .text            mode_proc_call__11daObjBmSh_cFv */
void daObjBmSh_c::mode_proc_call() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80BBA818-80BBA81C 000068 0004+00 0/1 0/0 0/0 .rodata          @3973 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3973 = -220.0f;
COMPILER_STRIP_GATE(0x80BBA818, &lit_3973);
#pragma pop

/* 80BBA394-80BBA5B4 0009B4 0220+00 1/0 0/0 0/0 .text            modeWait__11daObjBmSh_cFv */
void daObjBmSh_c::modeWait() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80BBA81C-80BBA820 00006C 0004+00 0/1 0/0 0/0 .rodata          @3981 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3981 = 2.0f;
COMPILER_STRIP_GATE(0x80BBA81C, &lit_3981);
#pragma pop

/* 80BBA5B4-80BBA640 000BD4 008C+00 1/0 0/0 0/0 .text            modeMove__11daObjBmSh_cFv */
void daObjBmSh_c::modeMove() {
    // NONMATCHING
}

/* 80BBA640-80BBA644 000C60 0004+00 1/0 0/0 0/0 .text            modeEnd__11daObjBmSh_cFv */
void daObjBmSh_c::modeEnd() {
    /* empty function */
}

/* 80BBA644-80BBA6E8 000C64 00A4+00 1/0 0/0 0/0 .text            Draw__11daObjBmSh_cFv */
void daObjBmSh_c::Draw() {
    // NONMATCHING
}

/* 80BBA6E8-80BBA71C 000D08 0034+00 1/0 0/0 0/0 .text            Delete__11daObjBmSh_cFv */
void daObjBmSh_c::Delete() {
    // NONMATCHING
}

/* 80BBA71C-80BBA748 000D3C 002C+00 1/0 0/0 0/0 .text            daObjBmSh_Draw__FP11daObjBmSh_c */
static void daObjBmSh_Draw(daObjBmSh_c* param_0) {
    // NONMATCHING
}

/* 80BBA748-80BBA768 000D68 0020+00 1/0 0/0 0/0 .text            daObjBmSh_Execute__FP11daObjBmSh_c
 */
static void daObjBmSh_Execute(daObjBmSh_c* param_0) {
    // NONMATCHING
}

/* 80BBA768-80BBA788 000D88 0020+00 1/0 0/0 0/0 .text            daObjBmSh_Delete__FP11daObjBmSh_c
 */
static void daObjBmSh_Delete(daObjBmSh_c* param_0) {
    // NONMATCHING
}

/* 80BBA788-80BBA7A8 000DA8 0020+00 1/0 0/0 0/0 .text            daObjBmSh_Create__FP10fopAc_ac_c */
static void daObjBmSh_Create(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 80BBA820-80BBA820 000070 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
