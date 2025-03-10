/**
 * @file d_a_obj_tatigi.cpp
 * 
*/

#include "d/actor/d_a_obj_tatigi.h"
#include "d/d_cc_d.h"
#include "dol2asm.h"



//
// Forward References:
//

extern "C" static void daObj_Tatigi_Draw__FP16obj_tatigi_class();
extern "C" static void daObj_Tatigi_Execute__FP16obj_tatigi_class();
extern "C" static bool daObj_Tatigi_IsDelete__FP16obj_tatigi_class();
extern "C" static void daObj_Tatigi_Delete__FP16obj_tatigi_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" static void set_pos_check__FP16obj_tatigi_classi();
extern "C" static void daObj_Tatigi_Create__FP10fopAc_ac_c();
extern "C" void __dt__5tg_ssFv();
extern "C" void __ct__5tg_ssFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" extern char const* const d_a_obj_tatigi__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void addSimpleModel__14dComIfG_play_cFP12J3DModelDataiUc();
extern "C" void removeSimpleModel__14dComIfG_play_cFP12J3DModelDatai();
extern "C" void entrySimpleModel__14dComIfG_play_cFP8J3DModeli();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void GroundCross__4cBgSFP11cBgS_GndChk();
extern "C" void __ct__11dBgS_GndChkFv();
extern "C" void __dt__11dBgS_GndChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void ChkCoHit__12dCcD_GObjInfFv();
extern "C" void GetCoHitObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void GetAc__8cCcD_ObjFv();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void cM_rndF__Ff();
extern "C" void cM_initRnd2__Fiii();
extern "C" void cM_rndF2__Ff();
extern "C" void SetPos__11cBgS_GndChkFPC3Vec();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void MtxTrans__FfffUc();
extern "C" void MtxPosition__FP4cXyzP4cXyz();
extern "C" void MtxPush__Fv();
extern "C" void MtxPull__Fv();
extern "C" void __dl__FPv();
extern "C" void __construct_array();
extern "C" void _savegpr_23();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _restgpr_23();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" extern void* calc_mtx[1 + 1 /* padding */];

//
// Declarations:
//

/* 80D079D8-80D07A60 000078 0088+00 1/0 0/0 0/0 .text daObj_Tatigi_Draw__FP16obj_tatigi_class */
static void daObj_Tatigi_Draw(obj_tatigi_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D085C0-80D085C4 000000 0004+00 3/3 0/0 0/0 .rodata          @3867 */
SECTION_RODATA static f32 const lit_3867 = 30.0f;
COMPILER_STRIP_GATE(0x80D085C0, &lit_3867);

/* 80D085C4-80D085C8 000004 0004+00 0/1 0/0 0/0 .rodata          @3868 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3868 = 500.0f;
COMPILER_STRIP_GATE(0x80D085C4, &lit_3868);
#pragma pop

/* 80D085C8-80D085CC 000008 0004+00 0/1 0/0 0/0 .rodata          @3869 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3869 = 5.0f;
COMPILER_STRIP_GATE(0x80D085C8, &lit_3869);
#pragma pop

/* 80D085CC-80D085D0 00000C 0004+00 0/1 0/0 0/0 .rodata          @3870 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3870 = 7.0f;
COMPILER_STRIP_GATE(0x80D085CC, &lit_3870);
#pragma pop

/* 80D085D0-80D085D8 000010 0008+00 0/1 0/0 0/0 .rodata          @3872 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3872[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80D085D0, &lit_3872);
#pragma pop

/* 80D07A60-80D07CE8 000100 0288+00 2/1 0/0 0/0 .text daObj_Tatigi_Execute__FP16obj_tatigi_class
 */
static void daObj_Tatigi_Execute(obj_tatigi_class* param_0) {
    // NONMATCHING
}

/* 80D07CE8-80D07CF0 000388 0008+00 1/0 0/0 0/0 .text daObj_Tatigi_IsDelete__FP16obj_tatigi_class
 */
static bool daObj_Tatigi_IsDelete(obj_tatigi_class* param_0) {
    return true;
}

/* ############################################################################################## */
/* 80D08620-80D08620 000060 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80D08620 = "Obj_tg";
#pragma pop

/* 80D07CF0-80D07D78 000390 0088+00 1/0 0/0 0/0 .text daObj_Tatigi_Delete__FP16obj_tatigi_class */
static void daObj_Tatigi_Delete(obj_tatigi_class* param_0) {
    // NONMATCHING
}

/* 80D07D78-80D07E24 000418 00AC+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
static void useHeapInit(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D085D8-80D085E0 000018 0004+04 0/2 0/0 0/0 .rodata          @3955 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3955[4 + 4 /* padding */] = {
    0x00,
    0x00,
    0x00,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80D085D8, &lit_3955);
#pragma pop

/* 80D085E0-80D085E8 000020 0008+00 0/1 0/0 0/0 .rodata          @3956 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3956[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80D085E0, &lit_3956);
#pragma pop

/* 80D085E8-80D085F0 000028 0008+00 0/1 0/0 0/0 .rodata          @3957 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3957[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80D085E8, &lit_3957);
#pragma pop

/* 80D085F0-80D085F8 000030 0008+00 0/1 0/0 0/0 .rodata          @3958 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3958[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80D085F0, &lit_3958);
#pragma pop

/* 80D085F8-80D085FC 000038 0004+00 0/1 0/0 0/0 .rodata          @3959 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3959 = 150.0f;
COMPILER_STRIP_GATE(0x80D085F8, &lit_3959);
#pragma pop

/* 80D07E24-80D07FD8 0004C4 01B4+00 1/1 0/0 0/0 .text set_pos_check__FP16obj_tatigi_classi */
static void set_pos_check(obj_tatigi_class* param_0, int param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D085FC-80D08600 00003C 0004+00 0/1 0/0 0/0 .rodata          @4068 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4068 = 65536.0f;
COMPILER_STRIP_GATE(0x80D085FC, &lit_4068);
#pragma pop

/* 80D08600-80D08604 000040 0004+00 0/1 0/0 0/0 .rodata          @4069 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4069 = 100.0f;
COMPILER_STRIP_GATE(0x80D08600, &lit_4069);
#pragma pop

/* 80D08604-80D08608 000044 0004+00 0/1 0/0 0/0 .rodata          @4070 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4070 = 3.0f / 5.0f;
COMPILER_STRIP_GATE(0x80D08604, &lit_4070);
#pragma pop

/* 80D08608-80D0860C 000048 0004+00 0/1 0/0 0/0 .rodata          @4071 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4071 = 2.0f / 5.0f;
COMPILER_STRIP_GATE(0x80D08608, &lit_4071);
#pragma pop

/* 80D0860C-80D08610 00004C 0004+00 0/1 0/0 0/0 .rodata          @4072 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4072 = 1.0f;
COMPILER_STRIP_GATE(0x80D0860C, &lit_4072);
#pragma pop

/* 80D08610-80D08618 000050 0004+04 0/1 0/0 0/0 .rodata          @4073 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4073[1 + 1 /* padding */] = {
    65535.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x80D08610, &lit_4073);
#pragma pop

/* 80D08618-80D08620 000058 0008+00 0/1 0/0 0/0 .rodata          @4076 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4076[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80D08618, &lit_4076);
#pragma pop

/* 80D08628-80D0866C 000000 0044+00 1/1 0/0 0/0 .data            cc_cyl_src$3986 */
static dCcD_SrcCyl cc_cyl_src = {
    {
        {0x0, {{0x0, 0x0, 0x0}, {0xd8fbfdff, 0x11}, 0x79}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_METAL, 0x2, 0x0, 0x0, 0x3}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {0.0f, 0.0f, 0.0f}, // mCenter
        35.0f, // mRadius
        120.0f // mHeight
    } // mCyl
};

/* 80D07FD8-80D083C0 000678 03E8+00 1/0 0/0 0/0 .text            daObj_Tatigi_Create__FP10fopAc_ac_c
 */
static void daObj_Tatigi_Create(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D0866C-80D0868C -00001 0020+00 1/0 0/0 0/0 .data            l_daObj_Tatigi_Method */
static actor_method_class l_daObj_Tatigi_Method = {
    (process_method_func)daObj_Tatigi_Create__FP10fopAc_ac_c,
    (process_method_func)daObj_Tatigi_Delete__FP16obj_tatigi_class,
    (process_method_func)daObj_Tatigi_Execute__FP16obj_tatigi_class,
    (process_method_func)daObj_Tatigi_IsDelete__FP16obj_tatigi_class,
    (process_method_func)daObj_Tatigi_Draw__FP16obj_tatigi_class,
};

/* 80D0868C-80D086BC -00001 0030+00 0/0 0/0 1/0 .data            g_profile_OBJ_TATIGI */
extern actor_process_profile_definition g_profile_OBJ_TATIGI = {
  fpcLy_CURRENT_e,          // mLayerID
  7,                        // mListID
  fpcPi_CURRENT_e,          // mListPrio
  PROC_OBJ_TATIGI,          // mProcName
  &g_fpcLf_Method.base,    // sub_method
  sizeof(obj_tatigi_class), // mSize
  0,                        // mSizeOther
  0,                        // mParameters
  &g_fopAc_Method.base,     // sub_method
  709,                      // mPriority
  &l_daObj_Tatigi_Method,   // sub_method
  0x00040000,               // mStatus
  fopAc_ACTOR_e,            // mActorType
  fopAc_CULLBOX_CUSTOM_e,   // cullType
};

/* 80D086BC-80D086C8 000094 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80D086C8-80D086D4 0000A0 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80D083C0-80D08494 000A60 00D4+00 1/1 0/0 0/0 .text            __dt__5tg_ssFv */
tg_ss::~tg_ss() {
    // NONMATCHING
}

/* 80D08494-80D08528 000B34 0094+00 1/1 0/0 0/0 .text            __ct__5tg_ssFv */
tg_ss::tg_ss() {
    // NONMATCHING
}

/* 80D08528-80D08570 000BC8 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
// cM3dGCyl::~cM3dGCyl() {
extern "C" void __dt__8cM3dGCylFv() {
    // NONMATCHING
}

/* 80D08570-80D085B8 000C10 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
// cM3dGAab::~cM3dGAab() {
extern "C" void __dt__8cM3dGAabFv() {
    // NONMATCHING
}

/* 80D08620-80D08620 000060 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
