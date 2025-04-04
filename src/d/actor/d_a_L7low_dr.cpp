/**
 * @file d_a_L7low_dr.cpp
 * 
*/

#include "d/actor/d_a_L7low_dr.h"
#include "dol2asm.h"


//
// Forward References:
//

extern "C" void setAction__11daL7lowDr_cFM11daL7lowDr_cFPCvPv_v();
extern "C" void action__11daL7lowDr_cFv();
extern "C" void _delete__11daL7lowDr_cFv();
extern "C" static void daL7lowDr_Delete__FP11daL7lowDr_c();
extern "C" void mtx_set__11daL7lowDr_cFv();
extern "C" void fly__11daL7lowDr_cFv();
extern "C" void execute__11daL7lowDr_cFv();
extern "C" static void daL7lowDr_Execute__FP11daL7lowDr_c();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" void CreateHeap__11daL7lowDr_cFv();
extern "C" void create__11daL7lowDr_cFv();
extern "C" static void daL7lowDr_Create__FP11daL7lowDr_c();
extern "C" void draw__11daL7lowDr_cFv();
extern "C" static void daL7lowDr_Draw__FP11daL7lowDr_c();
extern "C" static bool daL7lowDr_IsDelete__FP11daL7lowDr_c();
extern "C" extern char const* const d_a_L7low_dr__stringBase0;

//
// External References:
//

extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void
__ct__16mDoExt_McaMorfSOFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiP10Z2CreatureUlUl();
extern "C" void setAnm__16mDoExt_McaMorfSOFP15J3DAnmTransformiffff();
extern "C" void play__16mDoExt_McaMorfSOFUlSc();
extern "C" void entryDL__16mDoExt_McaMorfSOFv();
extern "C" void modelCalc__16mDoExt_McaMorfSOFv();
extern "C" void stopZelAnime__16mDoExt_McaMorfSOFv();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_posMoveF__FP10fopAc_ac_cPC4cXyz();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void isDungeonItem__12dSv_memBit_cCFi();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void cLib_chaseAngleS__FPsss();
extern "C" void cLib_targetAngleY__FPC3VecPC3Vec();
extern "C" void __ct__15Z2CreatureEnemyFv();
extern "C" void init__15Z2CreatureEnemyFP3VecP3VecUcUc();
extern "C" void* __nw__FUl();
extern "C" void __ptmf_test();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_28();
extern "C" void _restgpr_28();
extern "C" u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 sincosTable___5JMath[65536];

//
// Declarations:
//

/* 805AA5F8-805AA69C 000078 00A4+00 1/1 0/0 0/0 .text
 * setAction__11daL7lowDr_cFM11daL7lowDr_cFPCvPv_v              */
void daL7lowDr_c::setAction(void (daL7lowDr_c::*param_0)()) {
    // NONMATCHING
}

/* 805AA69C-805AA748 00011C 00AC+00 1/1 0/0 0/0 .text            action__11daL7lowDr_cFv */
void daL7lowDr_c::action() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805AAFB0-805AAFB0 00003C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_805AAFB0 = "L7lowDr";
#pragma pop

/* 805AA748-805AA798 0001C8 0050+00 1/1 0/0 0/0 .text            _delete__11daL7lowDr_cFv */
void daL7lowDr_c::_delete() {
    // NONMATCHING
}

/* 805AA798-805AA7B8 000218 0020+00 1/0 0/0 0/0 .text            daL7lowDr_Delete__FP11daL7lowDr_c
 */
static void daL7lowDr_Delete(daL7lowDr_c* param_0) {
    // NONMATCHING
}

/* 805AA7B8-805AA828 000238 0070+00 1/1 0/0 0/0 .text            mtx_set__11daL7lowDr_cFv */
void daL7lowDr_c::mtx_set() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805AAF74-805AAF78 000000 0004+00 1/1 0/0 0/0 .rodata          @3769 */
SECTION_RODATA static f32 const lit_3769 = 32768.0f;
COMPILER_STRIP_GATE(0x805AAF74, &lit_3769);

/* 805AAF78-805AAF7C 000004 0004+00 0/1 0/0 0/0 .rodata          @3770 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3770 = 2800.0f;
COMPILER_STRIP_GATE(0x805AAF78, &lit_3770);
#pragma pop

/* 805AAF7C-805AAF80 000008 0004+00 0/1 0/0 0/0 .rodata          @3771 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3771 = 8000.0f;
COMPILER_STRIP_GATE(0x805AAF7C, &lit_3771);
#pragma pop

/* 805AAF80-805AAF84 00000C 0004+00 0/1 0/0 0/0 .rodata          @3772 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3772 = 20.0f;
COMPILER_STRIP_GATE(0x805AAF80, &lit_3772);
#pragma pop

/* 805AAF84-805AAF88 000010 0004+00 2/3 0/0 0/0 .rodata          @3773 */
SECTION_RODATA static f32 const lit_3773 = 1.0f;
COMPILER_STRIP_GATE(0x805AAF84, &lit_3773);

/* 805AAF88-805AAF8C 000014 0004+00 0/1 0/0 0/0 .rodata          @3774 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3774[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x805AAF88, &lit_3774);
#pragma pop

/* 805AAF8C-805AAF90 000018 0004+00 0/1 0/0 0/0 .rodata          @3775 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3775 = -1.0f;
COMPILER_STRIP_GATE(0x805AAF8C, &lit_3775);
#pragma pop

/* 805AAF90-805AAF94 00001C 0004+00 0/1 0/0 0/0 .rodata          @3776 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3776 = 30.0f;
COMPILER_STRIP_GATE(0x805AAF90, &lit_3776);
#pragma pop

/* 805AAF94-805AAF98 000020 0004+00 0/1 0/0 0/0 .rodata          @3777 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3777 = 210.0f;
COMPILER_STRIP_GATE(0x805AAF94, &lit_3777);
#pragma pop

/* 805AAF98-805AAF9C 000024 0004+00 0/1 0/0 0/0 .rodata          @3778 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3778 = 60.0f;
COMPILER_STRIP_GATE(0x805AAF98, &lit_3778);
#pragma pop

/* 805AAF9C-805AAFA0 000028 0004+00 0/1 0/0 0/0 .rodata          @3779 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3779 = 3.0f;
COMPILER_STRIP_GATE(0x805AAF9C, &lit_3779);
#pragma pop

/* 805AAFA0-805AAFA4 00002C 0004+00 0/1 0/0 0/0 .rodata          @3780 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3780 = 33.0f;
COMPILER_STRIP_GATE(0x805AAFA0, &lit_3780);
#pragma pop

/* 805AAFA4-805AAFA8 000030 0004+00 0/1 0/0 0/0 .rodata          @3781 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3781 = 2.0f;
COMPILER_STRIP_GATE(0x805AAFA4, &lit_3781);
#pragma pop

/* 805AAFA8-805AAFAC 000034 0004+00 0/1 0/0 0/0 .rodata          @3782 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3782 = 180.0f;
COMPILER_STRIP_GATE(0x805AAFA8, &lit_3782);
#pragma pop

/* 805AAFAC-805AAFB0 000038 0004+00 0/1 0/0 0/0 .rodata          @3783 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3783 = 67.0f;
COMPILER_STRIP_GATE(0x805AAFAC, &lit_3783);
#pragma pop

/* 805AA828-805AABF8 0002A8 03D0+00 1/0 0/0 0/0 .text            fly__11daL7lowDr_cFv */
void daL7lowDr_c::fly() {
    // NONMATCHING
}

/* 805AABF8-805AAC1C 000678 0024+00 1/1 0/0 0/0 .text            execute__11daL7lowDr_cFv */
void daL7lowDr_c::execute() {
    // NONMATCHING
}

/* 805AAC1C-805AAC3C 00069C 0020+00 2/1 0/0 0/0 .text            daL7lowDr_Execute__FP11daL7lowDr_c
 */
static void daL7lowDr_Execute(daL7lowDr_c* param_0) {
    // NONMATCHING
}

/* 805AAC3C-805AAC5C 0006BC 0020+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
static void useHeapInit(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 805AAC5C-805AAD58 0006DC 00FC+00 1/1 0/0 0/0 .text            CreateHeap__11daL7lowDr_cFv */
void daL7lowDr_c::CreateHeap() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805AAFB8-805AAFC4 -00001 000C+00 1/1 0/0 0/0 .data            @3832 */
SECTION_DATA static void* lit_3832[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)fly__11daL7lowDr_cFv,
};

/* 805AAD58-805AAE88 0007D8 0130+00 1/1 0/0 0/0 .text            create__11daL7lowDr_cFv */
void daL7lowDr_c::create() {
    // NONMATCHING
}

/* 805AAE88-805AAEA8 000908 0020+00 1/0 0/0 0/0 .text            daL7lowDr_Create__FP11daL7lowDr_c
 */
static void daL7lowDr_Create(daL7lowDr_c* param_0) {
    // NONMATCHING
}

/* 805AAEA8-805AAF44 000928 009C+00 1/1 0/0 0/0 .text            draw__11daL7lowDr_cFv */
void daL7lowDr_c::draw() {
    // NONMATCHING
}

/* 805AAF44-805AAF64 0009C4 0020+00 1/0 0/0 0/0 .text            daL7lowDr_Draw__FP11daL7lowDr_c */
static void daL7lowDr_Draw(daL7lowDr_c* param_0) {
    // NONMATCHING
}

/* 805AAF64-805AAF6C 0009E4 0008+00 1/0 0/0 0/0 .text            daL7lowDr_IsDelete__FP11daL7lowDr_c
 */
static bool daL7lowDr_IsDelete(daL7lowDr_c* param_0) {
    return true;
}

/* ############################################################################################## */
/* 805AAFC4-805AAFE4 -00001 0020+00 1/0 0/0 0/0 .data            l_daL7lowDr_Method */
static actor_method_class l_daL7lowDr_Method = {
    (process_method_func)daL7lowDr_Create__FP11daL7lowDr_c,
    (process_method_func)daL7lowDr_Delete__FP11daL7lowDr_c,
    (process_method_func)daL7lowDr_Execute__FP11daL7lowDr_c,
    (process_method_func)daL7lowDr_IsDelete__FP11daL7lowDr_c,
    (process_method_func)daL7lowDr_Draw__FP11daL7lowDr_c,
};

/* 805AAFE4-805AB014 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_L7lowDr */
extern actor_process_profile_definition g_profile_L7lowDr = {
  fpcLy_CURRENT_e,        // mLayerID
  7,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_L7lowDr,           // mProcName
  &g_fpcLf_Method.base,  // sub_method
  sizeof(daL7lowDr_c),    // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  207,                    // mPriority
  &l_daL7lowDr_Method,    // sub_method
  0x00040000,             // mStatus
  fopAc_ENEMY_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 805AAFB0-805AAFB0 00003C 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
