/**
 * @file d_a_obj_gadget.cpp
 * 
*/

#include "d/actor/d_a_obj_gadget.h"
#include "d/d_cc_d.h"
#include "dol2asm.h"



//
// Forward References:
//

extern "C" void __dt__14daObj_Gadget_cFv();
extern "C" void create__14daObj_Gadget_cFv();
extern "C" void __dt__8cM3dGLinFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__12dBgS_AcchCirFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__4cXyzFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void CreateHeap__14daObj_Gadget_cFv();
extern "C" void Delete__14daObj_Gadget_cFv();
extern "C" void Execute__14daObj_Gadget_cFv();
extern "C" void Draw__14daObj_Gadget_cFv();
extern "C" void __dt__8cM3dGPlaFv();
extern "C" void createHeapCallBack__14daObj_Gadget_cFP10fopAc_ac_c();
extern "C" void setEnvTevColor__14daObj_Gadget_cFv();
extern "C" void setRoomNo__14daObj_Gadget_cFv();
extern "C" void reset__14daObj_Gadget_cFv();
extern "C" void setMtx__14daObj_Gadget_cFv();
extern "C" void calcRollAngle__14daObj_Gadget_cFsi();
extern "C" void getWallAngle__14daObj_Gadget_cFsPs();
extern "C" void setSmokePrtcl__14daObj_Gadget_cFv();
extern "C" void setWaterPrtcl__14daObj_Gadget_cFv();
extern "C" void setHamonPrtcl__14daObj_Gadget_cFv();
extern "C" static void daObj_Gadget_Create__FPv();
extern "C" static void daObj_Gadget_Delete__FPv();
extern "C" static void daObj_Gadget_Execute__FPv();
extern "C" static void daObj_Gadget_Draw__FPv();
extern "C" static bool daObj_Gadget_IsDelete__FPv();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" void func_80BF4848(void* _this, int*);
extern "C" void __sinit_d_a_obj_gadget_cpp();
extern "C" void __dt__20daObj_Gadget_Param_cFv();
extern "C" static void func_80BF4920();
extern "C" static void func_80BF4928();
extern "C" u8 const m__20daObj_Gadget_Param_c[44];
extern "C" extern char const* const d_a_obj_gadget__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void scaleM__14mDoMtx_stack_cFRC4cXyz();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_SearchByID__FUiPP10fopAc_ac_c();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void fopAcM_calcSpeed__FP10fopAc_ac_c();
extern "C" void fopAcM_posMove__FP10fopAc_ac_cPC4cXyz();
extern "C" void fopAcM_effSmokeSet1__FPUlPUlPC4cXyzPC5csXyzfPC12dKy_tevstr_ci();
extern "C" void fopAcM_effHamonSet__FPUlPC4cXyzff();
extern "C" bool fopAcM_riverStream__FP4cXyzPsPff();
extern "C" void fopAcM_carryOffRevise__FP10fopAc_ac_c();
extern "C" void fopAcM_getWaterY__FPC4cXyzPf();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void forceOnEventMove__Q213dPa_control_c7level_cFUl();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void dPath_GetPolyRoomPathVec__FRC13cBgS_PolyInfoP4cXyzPi();
extern "C" void setSimple__21dDlst_shadowControl_cFP4cXyzffP4cXyzsfP9_GXTexObj();
extern "C" void LineCross__4cBgSFP11cBgS_LinChk();
extern "C" void GetTriPla__4cBgSCFRC13cBgS_PolyInfoP8cM3dGPla();
extern "C" void GetPolyColor__4dBgSFRC13cBgS_PolyInfo();
extern "C" void GetRoomId__4dBgSFRC13cBgS_PolyInfo();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWallR__12dBgS_AcchCirFf();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void __ct__11dBgS_LinChkFv();
extern "C" void __dt__11dBgS_LinChkFv();
extern "C" void Set__11dBgS_LinChkFPC4cXyzPC4cXyzPC10fopAc_ac_c();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void daNpcF_getGroundAngle__FP13cBgS_PolyInfos();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void normalizeZP__4cXyzFv();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndFX__Ff();
extern "C" void __ct__11cBgS_GndChkFv();
extern "C" void __dt__11cBgS_GndChkFv();
extern "C" void __dt__13cBgS_PolyInfoFv();
extern "C" void __dt__8cM3dGCirFv();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void cLib_addCalc__FPfffff();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void cLib_chaseF__FPfff();
extern "C" void cLib_chaseAngleS__FPsss();
extern "C" void __dl__FPv();
extern "C" void _savegpr_23();
extern "C" void _savegpr_25();
extern "C" void _savegpr_27();
extern "C" void _savegpr_29();
extern "C" void _restgpr_23();
extern "C" void _restgpr_25();
extern "C" void _restgpr_27();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80BF4A24-80BF4A24 0000E0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80BF4A24 = "";
SECTION_DEAD static char const* const stringBase_80BF4A25 = "ykM1";
#pragma pop

/* 80BF4A2C-80BF4A38 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80BF4A38-80BF4A4C 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 80BF4A4C-80BF4A5C 000020 0010+00 2/3 0/0 0/0 .data            l_bmdData */
SECTION_DATA static u8 l_bmdData[16] = {
    0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x01,
};

/* 80BF4A5C-80BF4A64 -00001 0008+00 2/4 0/0 0/0 .data            l_resNameList */
SECTION_DATA static void* l_resNameList[2] = {
    (void*)&d_a_obj_gadget__stringBase0,
    (void*)(((char*)&d_a_obj_gadget__stringBase0) + 0x1),
};

/* 80BF4A64-80BF4AA8 000038 0044+00 1/2 0/0 0/0 .data            l_ccDCyl */
static dCcD_SrcCyl l_ccDCyl = {
    {
        {0x0, {{0x0, 0x0, 0x0}, {0x0, 0x0}, 0x0}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {0.0f, 0.0f, 0.0f}, // mCenter
        0.0f, // mRadius
        0.0f // mHeight
    } // mCyl
};

/* 80BF4AA8-80BF4AB0 00007C 0008+00 1/1 0/0 0/0 .data            emttrId$4553 */
SECTION_DATA static u8 emttrId[8] = {
    0x01, 0xB8, 0x01, 0xB9, 0x01, 0xBA, 0x01, 0xBB,
};

/* 80BF4AB0-80BF4AD0 -00001 0020+00 1/0 0/0 0/0 .data            daObj_Gadget_MethodTable */
static actor_method_class daObj_Gadget_MethodTable = {
    (process_method_func)daObj_Gadget_Create__FPv,
    (process_method_func)daObj_Gadget_Delete__FPv,
    (process_method_func)daObj_Gadget_Execute__FPv,
    (process_method_func)daObj_Gadget_IsDelete__FPv,
    (process_method_func)daObj_Gadget_Draw__FPv,
};

/* 80BF4AD0-80BF4B00 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_OBJ_GADGET */
extern actor_process_profile_definition g_profile_OBJ_GADGET = {
  fpcLy_CURRENT_e,           // mLayerID
  8,                         // mListID
  fpcPi_CURRENT_e,           // mListPrio
  PROC_OBJ_GADGET,           // mProcName
  &g_fpcLf_Method.base,     // sub_method
  sizeof(daObj_Gadget_c),    // mSize
  0,                         // mSizeOther
  0,                         // mParameters
  &g_fopAc_Method.base,      // sub_method
  82,                        // mPriority
  &daObj_Gadget_MethodTable, // sub_method
  0x00044100,                // mStatus
  fopAc_ACTOR_e,             // mActorType
  fopAc_CULLBOX_CUSTOM_e,    // cullType
};

/* 80BF4B00-80BF4B0C 0000D4 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGPla */
SECTION_DATA extern void* __vt__8cM3dGPla[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGPlaFv,
};

/* 80BF4B0C-80BF4B30 0000E0 0024+00 3/3 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80BF4928,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80BF4920,
};

/* 80BF4B30-80BF4B3C 000104 000C+00 3/3 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80BF4B3C-80BF4B48 000110 000C+00 2/2 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80BF4B48-80BF4B54 00011C 000C+00 2/2 0/0 0/0 .data            __vt__12dBgS_AcchCir */
SECTION_DATA extern void* __vt__12dBgS_AcchCir[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_AcchCirFv,
};

/* 80BF4B54-80BF4B60 000128 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80BF4B60-80BF4B6C 000134 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80BF4B6C-80BF4B78 000140 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGLin */
SECTION_DATA extern void* __vt__8cM3dGLin[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGLinFv,
};

/* 80BF4B78-80BF4B84 00014C 000C+00 2/2 0/0 0/0 .data            __vt__14daObj_Gadget_c */
SECTION_DATA extern void* __vt__14daObj_Gadget_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14daObj_Gadget_cFv,
};

/* 80BF2D2C-80BF2F28 0000EC 01FC+00 1/0 0/0 0/0 .text            __dt__14daObj_Gadget_cFv */
daObj_Gadget_c::~daObj_Gadget_c() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80BF4944-80BF4970 000000 002C+00 4/4 0/0 0/0 .rodata          m__20daObj_Gadget_Param_c */
SECTION_RODATA u8 const daObj_Gadget_Param_c::m[44] = {
    0x00, 0x00, 0x00, 0x00, 0xC0, 0x80, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x42, 0xC8, 0x00,
    0x00, 0x42, 0x14, 0x00, 0x00, 0x41, 0xD0, 0x00, 0x00, 0x41, 0x50, 0x00, 0x00, 0x41, 0x60,
    0x00, 0x00, 0x42, 0x14, 0x00, 0x00, 0x42, 0x48, 0x00, 0x00, 0x41, 0x90, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BF4944, &daObj_Gadget_Param_c::m);

/* 80BF4970-80BF49A0 00002C 0030+00 1/1 0/0 0/0 .rodata          l_ccDObjData */
SECTION_RODATA static u8 const l_ccDObjData[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xD8, 0xFB, 0xFD, 0xFF, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BF4970, &l_ccDObjData);

/* 80BF49A0-80BF49A4 00005C 0004+00 0/1 0/0 0/0 .rodata          @3935 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3935 = -300.0f;
COMPILER_STRIP_GATE(0x80BF49A0, &lit_3935);
#pragma pop

/* 80BF49A4-80BF49A8 000060 0004+00 0/2 0/0 0/0 .rodata          @3936 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3936 = -50.0f;
COMPILER_STRIP_GATE(0x80BF49A4, &lit_3936);
#pragma pop

/* 80BF49A8-80BF49AC 000064 0004+00 0/1 0/0 0/0 .rodata          @3937 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3937 = 300.0f;
COMPILER_STRIP_GATE(0x80BF49A8, &lit_3937);
#pragma pop

/* 80BF49AC-80BF49B0 000068 0004+00 0/1 0/0 0/0 .rodata          @3938 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3938 = 450.0f;
COMPILER_STRIP_GATE(0x80BF49AC, &lit_3938);
#pragma pop

/* 80BF49B0-80BF49B4 00006C 0004+00 0/3 0/0 0/0 .rodata          @3939 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3939 = -1000000000.0f;
COMPILER_STRIP_GATE(0x80BF49B0, &lit_3939);
#pragma pop

/* 80BF2F28-80BF3228 0002E8 0300+00 1/1 0/0 0/0 .text            create__14daObj_Gadget_cFv */
void daObj_Gadget_c::create() {
    // NONMATCHING
}

/* 80BF3228-80BF3270 0005E8 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGLinFv */
// cM3dGLin::~cM3dGLin() {
extern "C" void __dt__8cM3dGLinFv() {
    // NONMATCHING
}

/* 80BF3270-80BF32B8 000630 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
// cM3dGCyl::~cM3dGCyl() {
extern "C" void __dt__8cM3dGCylFv() {
    // NONMATCHING
}

/* 80BF32B8-80BF3300 000678 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
// cM3dGAab::~cM3dGAab() {
extern "C" void __dt__8cM3dGAabFv() {
    // NONMATCHING
}

/* 80BF3300-80BF3370 0006C0 0070+00 1/0 0/0 0/0 .text            __dt__12dBgS_AcchCirFv */
// dBgS_AcchCir::~dBgS_AcchCir() {
extern "C" void __dt__12dBgS_AcchCirFv() {
    // NONMATCHING
}

/* 80BF3370-80BF33CC 000730 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
// dCcD_GStts::~dCcD_GStts() {
extern "C" void __dt__10dCcD_GSttsFv() {
    // NONMATCHING
}

/* 80BF33CC-80BF3408 00078C 003C+00 1/1 0/0 0/0 .text            __dt__4cXyzFv */
// cXyz::~cXyz() {
extern "C" void __dt__4cXyzFv() {
    // NONMATCHING
}

/* 80BF3408-80BF3478 0007C8 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
// dBgS_ObjAcch::~dBgS_ObjAcch() {
extern "C" void __dt__12dBgS_ObjAcchFv() {
    // NONMATCHING
}

/* 80BF3478-80BF3504 000838 008C+00 1/1 0/0 0/0 .text            CreateHeap__14daObj_Gadget_cFv */
void daObj_Gadget_c::CreateHeap() {
    // NONMATCHING
}

/* 80BF3504-80BF3538 0008C4 0034+00 1/1 0/0 0/0 .text            Delete__14daObj_Gadget_cFv */
void daObj_Gadget_c::Delete() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80BF49B4-80BF49B8 000070 0004+00 0/2 0/0 0/0 .rodata          @4350 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4350[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80BF49B4, &lit_4350);
#pragma pop

/* 80BF49B8-80BF49BC 000074 0004+00 0/1 0/0 0/0 .rodata          @4351 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4351 = 0x43360B61;
COMPILER_STRIP_GATE(0x80BF49B8, &lit_4351);
#pragma pop

/* 80BF49BC-80BF49C0 000078 0004+00 0/1 0/0 0/0 .rodata          @4352 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4352 = 3000.0f;
COMPILER_STRIP_GATE(0x80BF49BC, &lit_4352);
#pragma pop

/* 80BF49C0-80BF49C4 00007C 0004+00 0/1 0/0 0/0 .rodata          @4353 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4353 = 3.0f / 10.0f;
COMPILER_STRIP_GATE(0x80BF49C0, &lit_4353);
#pragma pop

/* 80BF49C4-80BF49C8 000080 0004+00 0/1 0/0 0/0 .rodata          @4354 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4354 = 0.5f;
COMPILER_STRIP_GATE(0x80BF49C4, &lit_4354);
#pragma pop

/* 80BF49C8-80BF49CC 000084 0004+00 0/1 0/0 0/0 .rodata          @4355 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4355 = 2.0f;
COMPILER_STRIP_GATE(0x80BF49C8, &lit_4355);
#pragma pop

/* 80BF49CC-80BF49D0 000088 0004+00 0/1 0/0 0/0 .rodata          @4356 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4356 = 5.5f;
COMPILER_STRIP_GATE(0x80BF49CC, &lit_4356);
#pragma pop

/* 80BF49D0-80BF49D4 00008C 0004+00 0/1 0/0 0/0 .rodata          @4357 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4357 = 0.75f;
COMPILER_STRIP_GATE(0x80BF49D0, &lit_4357);
#pragma pop

/* 80BF49D4-80BF49D8 000090 0004+00 0/1 0/0 0/0 .rodata          @4358 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4358 = 0.25f;
COMPILER_STRIP_GATE(0x80BF49D4, &lit_4358);
#pragma pop

/* 80BF49D8-80BF49DC 000094 0004+00 1/3 0/0 0/0 .rodata          @4359 */
SECTION_RODATA static f32 const lit_4359 = 1.0f;
COMPILER_STRIP_GATE(0x80BF49D8, &lit_4359);

/* 80BF49DC-80BF49E0 000098 0004+00 0/1 0/0 0/0 .rodata          @4360 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4360 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x80BF49DC, &lit_4360);
#pragma pop

/* 80BF49E0-80BF49E4 00009C 0004+00 0/1 0/0 0/0 .rodata          @4361 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4361 = 2000.0f;
COMPILER_STRIP_GATE(0x80BF49E0, &lit_4361);
#pragma pop

/* 80BF49E4-80BF49E8 0000A0 0004+00 0/1 0/0 0/0 .rodata          @4362 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4362 = 1000.0f;
COMPILER_STRIP_GATE(0x80BF49E4, &lit_4362);
#pragma pop

/* 80BF49E8-80BF49EC 0000A4 0004+00 0/1 0/0 0/0 .rodata          @4363 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4363 = 1200.0f;
COMPILER_STRIP_GATE(0x80BF49E8, &lit_4363);
#pragma pop

/* 80BF49EC-80BF49F0 0000A8 0004+00 0/1 0/0 0/0 .rodata          @4364 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4364 = 900.0f;
COMPILER_STRIP_GATE(0x80BF49EC, &lit_4364);
#pragma pop

/* 80BF49F0-80BF49F4 0000AC 0004+00 1/2 0/0 0/0 .rodata          @4365 */
SECTION_RODATA static f32 const lit_4365 = 1.0f / 20.0f;
COMPILER_STRIP_GATE(0x80BF49F0, &lit_4365);

/* 80BF49F4-80BF49F8 0000B0 0004+00 0/1 0/0 0/0 .rodata          @4366 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4366 = 100.0f;
COMPILER_STRIP_GATE(0x80BF49F4, &lit_4366);
#pragma pop

/* 80BF49F8-80BF49FC 0000B4 0004+00 0/1 0/0 0/0 .rodata          @4367 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4367 = 9.0f / 20.0f;
COMPILER_STRIP_GATE(0x80BF49F8, &lit_4367);
#pragma pop

/* 80BF49FC-80BF4A04 0000B8 0004+04 0/1 0/0 0/0 .rodata          @4368 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4368[1 + 1 /* padding */] = {
    4.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x80BF49FC, &lit_4368);
#pragma pop

/* 80BF4A04-80BF4A0C 0000C0 0008+00 1/2 0/0 0/0 .rodata          @4370 */
SECTION_RODATA static u8 const lit_4370[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BF4A04, &lit_4370);

/* 80BF3538-80BF3FAC 0008F8 0A74+00 2/2 0/0 0/0 .text            Execute__14daObj_Gadget_cFv */
void daObj_Gadget_c::Execute() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80BF4A0C-80BF4A10 0000C8 0004+00 0/1 0/0 0/0 .rodata          @4402 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4402 = 20.0f;
COMPILER_STRIP_GATE(0x80BF4A0C, &lit_4402);
#pragma pop

/* 80BF3FAC-80BF40E8 00136C 013C+00 1/1 0/0 0/0 .text            Draw__14daObj_Gadget_cFv */
void daObj_Gadget_c::Draw() {
    // NONMATCHING
}

/* 80BF40E8-80BF4130 0014A8 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGPlaFv */
// cM3dGPla::~cM3dGPla() {
extern "C" void __dt__8cM3dGPlaFv() {
    // NONMATCHING
}

/* 80BF4130-80BF4150 0014F0 0020+00 1/1 0/0 0/0 .text
 * createHeapCallBack__14daObj_Gadget_cFP10fopAc_ac_c           */
void daObj_Gadget_c::createHeapCallBack(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 80BF4150-80BF41AC 001510 005C+00 2/2 0/0 0/0 .text            setEnvTevColor__14daObj_Gadget_cFv
 */
void daObj_Gadget_c::setEnvTevColor() {
    // NONMATCHING
}

/* 80BF41AC-80BF41F0 00156C 0044+00 2/2 0/0 0/0 .text            setRoomNo__14daObj_Gadget_cFv */
void daObj_Gadget_c::setRoomNo() {
    // NONMATCHING
}

/* 80BF41F0-80BF424C 0015B0 005C+00 1/1 0/0 0/0 .text            reset__14daObj_Gadget_cFv */
void daObj_Gadget_c::reset() {
    // NONMATCHING
}

/* 80BF424C-80BF4354 00160C 0108+00 1/1 0/0 0/0 .text            setMtx__14daObj_Gadget_cFv */
void daObj_Gadget_c::setMtx() {
    // NONMATCHING
}

/* 80BF4354-80BF43F4 001714 00A0+00 1/1 0/0 0/0 .text            calcRollAngle__14daObj_Gadget_cFsi
 */
void daObj_Gadget_c::calcRollAngle(s16 param_0, int param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80BF4A10-80BF4A14 0000CC 0004+00 0/1 0/0 0/0 .rodata          @4527 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4527 = 5.0f;
COMPILER_STRIP_GATE(0x80BF4A10, &lit_4527);
#pragma pop

/* 80BF4A14-80BF4A18 0000D0 0004+00 0/1 0/0 0/0 .rodata          @4528 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4528 = 200.0f;
COMPILER_STRIP_GATE(0x80BF4A14, &lit_4528);
#pragma pop

/* 80BF4A18-80BF4A1C 0000D4 0004+00 0/1 0/0 0/0 .rodata          @4529 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4529 = -1.0f;
COMPILER_STRIP_GATE(0x80BF4A18, &lit_4529);
#pragma pop

/* 80BF43F4-80BF4584 0017B4 0190+00 1/1 0/0 0/0 .text            getWallAngle__14daObj_Gadget_cFsPs
 */
void daObj_Gadget_c::getWallAngle(s16 param_0, s16* param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80BF4A1C-80BF4A20 0000D8 0004+00 2/2 0/0 0/0 .rodata          @4545 */
SECTION_RODATA static f32 const lit_4545 = 2.0f / 5.0f;
COMPILER_STRIP_GATE(0x80BF4A1C, &lit_4545);

/* 80BF4584-80BF4600 001944 007C+00 1/1 0/0 0/0 .text            setSmokePrtcl__14daObj_Gadget_cFv
 */
void daObj_Gadget_c::setSmokePrtcl() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80BF4B98-80BF4B9C 000008 0001+03 1/1 0/0 0/0 .bss             @1109 */
static u8 lit_1109[1 + 3 /* padding */];

/* 80BF4B9C-80BF4BA0 00000C 0001+03 0/0 0/0 0/0 .bss             @1107 */
#pragma push
#pragma force_active on
static u8 lit_1107[1 + 3 /* padding */];
#pragma pop

/* 80BF4BA0-80BF4BA4 000010 0001+03 0/0 0/0 0/0 .bss             @1105 */
#pragma push
#pragma force_active on
static u8 lit_1105[1 + 3 /* padding */];
#pragma pop

/* 80BF4BA4-80BF4BA8 000014 0001+03 0/0 0/0 0/0 .bss             @1104 */
#pragma push
#pragma force_active on
static u8 lit_1104[1 + 3 /* padding */];
#pragma pop

/* 80BF4BA8-80BF4BAC 000018 0001+03 0/0 0/0 0/0 .bss             @1099 */
#pragma push
#pragma force_active on
static u8 lit_1099[1 + 3 /* padding */];
#pragma pop

/* 80BF4BAC-80BF4BB0 00001C 0001+03 0/0 0/0 0/0 .bss             @1097 */
#pragma push
#pragma force_active on
static u8 lit_1097[1 + 3 /* padding */];
#pragma pop

/* 80BF4BB0-80BF4BB4 000020 0001+03 0/0 0/0 0/0 .bss             @1095 */
#pragma push
#pragma force_active on
static u8 lit_1095[1 + 3 /* padding */];
#pragma pop

/* 80BF4BB4-80BF4BB8 000024 0001+03 0/0 0/0 0/0 .bss             @1094 */
#pragma push
#pragma force_active on
static u8 lit_1094[1 + 3 /* padding */];
#pragma pop

/* 80BF4BB8-80BF4BBC 000028 0001+03 0/0 0/0 0/0 .bss             @1057 */
#pragma push
#pragma force_active on
static u8 lit_1057[1 + 3 /* padding */];
#pragma pop

/* 80BF4BBC-80BF4BC0 00002C 0001+03 0/0 0/0 0/0 .bss             @1055 */
#pragma push
#pragma force_active on
static u8 lit_1055[1 + 3 /* padding */];
#pragma pop

/* 80BF4BC0-80BF4BC4 000030 0001+03 0/0 0/0 0/0 .bss             @1053 */
#pragma push
#pragma force_active on
static u8 lit_1053[1 + 3 /* padding */];
#pragma pop

/* 80BF4BC4-80BF4BC8 000034 0001+03 0/0 0/0 0/0 .bss             @1052 */
#pragma push
#pragma force_active on
static u8 lit_1052[1 + 3 /* padding */];
#pragma pop

/* 80BF4BC8-80BF4BCC 000038 0001+03 0/0 0/0 0/0 .bss             @1014 */
#pragma push
#pragma force_active on
static u8 lit_1014[1 + 3 /* padding */];
#pragma pop

/* 80BF4BCC-80BF4BD0 00003C 0001+03 0/0 0/0 0/0 .bss             @1012 */
#pragma push
#pragma force_active on
static u8 lit_1012[1 + 3 /* padding */];
#pragma pop

/* 80BF4BD0-80BF4BD4 000040 0001+03 0/0 0/0 0/0 .bss             @1010 */
#pragma push
#pragma force_active on
static u8 lit_1010[1 + 3 /* padding */];
#pragma pop

/* 80BF4BD4-80BF4BD8 000044 0001+03 0/0 0/0 0/0 .bss             @1009 */
#pragma push
#pragma force_active on
static u8 lit_1009[1 + 3 /* padding */];
#pragma pop

/* 80BF4BD8-80BF4BE4 000048 000C+00 1/1 0/0 0/0 .bss             @3804 */
static u8 lit_3804[12];

/* 80BF4BE4-80BF4BE8 000054 0004+00 1/1 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[4];

/* 80BF4BE8-80BF4BF8 000058 000C+04 0/1 0/0 0/0 .bss             @4550 */
#pragma push
#pragma force_active on
static u8 lit_4550[12 + 4 /* padding */];
#pragma pop

/* 80BF4BF8-80BF4C04 000068 000C+00 0/1 0/0 0/0 .bss             scl$4549 */
#pragma push
#pragma force_active on
static u8 scl[12];
#pragma pop

/* 80BF4600-80BF4728 0019C0 0128+00 1/1 0/0 0/0 .text            setWaterPrtcl__14daObj_Gadget_cFv
 */
void daObj_Gadget_c::setWaterPrtcl() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80BF4A20-80BF4A24 0000DC 0004+00 1/1 0/0 0/0 .rodata          @4592 */
SECTION_RODATA static f32 const lit_4592 = 7.0f / 10.0f;
COMPILER_STRIP_GATE(0x80BF4A20, &lit_4592);

/* 80BF4728-80BF4778 001AE8 0050+00 1/1 0/0 0/0 .text            setHamonPrtcl__14daObj_Gadget_cFv
 */
void daObj_Gadget_c::setHamonPrtcl() {
    // NONMATCHING
}

/* 80BF4778-80BF4798 001B38 0020+00 1/0 0/0 0/0 .text            daObj_Gadget_Create__FPv */
static void daObj_Gadget_Create(void* param_0) {
    // NONMATCHING
}

/* 80BF4798-80BF47B8 001B58 0020+00 1/0 0/0 0/0 .text            daObj_Gadget_Delete__FPv */
static void daObj_Gadget_Delete(void* param_0) {
    // NONMATCHING
}

/* 80BF47B8-80BF47D8 001B78 0020+00 1/0 0/0 0/0 .text            daObj_Gadget_Execute__FPv */
static void daObj_Gadget_Execute(void* param_0) {
    // NONMATCHING
}

/* 80BF47D8-80BF47F8 001B98 0020+00 1/0 0/0 0/0 .text            daObj_Gadget_Draw__FPv */
static void daObj_Gadget_Draw(void* param_0) {
    // NONMATCHING
}

/* 80BF47F8-80BF4800 001BB8 0008+00 1/0 0/0 0/0 .text            daObj_Gadget_IsDelete__FPv */
static bool daObj_Gadget_IsDelete(void* param_0) {
    return true;
}

/* 80BF4800-80BF4848 001BC0 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
// cCcD_GStts::~cCcD_GStts() {
extern "C" void __dt__10cCcD_GSttsFv() {
    // NONMATCHING
}

/* 80BF4848-80BF4864 001C08 001C+00 1/1 0/0 0/0 .text            cLib_calcTimer<i>__FPi */
extern "C" void func_80BF4848(void* _this, int* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80BF4B84-80BF4B90 000158 000C+00 2/2 0/0 0/0 .data            __vt__20daObj_Gadget_Param_c */
SECTION_DATA extern void* __vt__20daObj_Gadget_Param_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__20daObj_Gadget_Param_cFv,
};

/* 80BF4864-80BF48D8 001C24 0074+00 0/0 1/0 0/0 .text            __sinit_d_a_obj_gadget_cpp */
void __sinit_d_a_obj_gadget_cpp() {
    // NONMATCHING
}

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80BF4864, __sinit_d_a_obj_gadget_cpp);
#pragma pop

/* 80BF48D8-80BF4920 001C98 0048+00 2/1 0/0 0/0 .text            __dt__20daObj_Gadget_Param_cFv */
daObj_Gadget_Param_c::~daObj_Gadget_Param_c() {
    // NONMATCHING
}

/* 80BF4920-80BF4928 001CE0 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
static void func_80BF4920() {
    // NONMATCHING
}

/* 80BF4928-80BF4930 001CE8 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
static void func_80BF4928() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80BF4C04-80BF4C08 000074 0004+00 0/0 0/0 0/0 .bss
 * sInstance__40JASGlobalInstance<19JASDefaultBankTable>        */
#pragma push
#pragma force_active on
static u8 data_80BF4C04[4];
#pragma pop

/* 80BF4C08-80BF4C0C 000078 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JASAudioThread>             */
#pragma push
#pragma force_active on
static u8 data_80BF4C08[4];
#pragma pop

/* 80BF4C0C-80BF4C10 00007C 0004+00 0/0 0/0 0/0 .bss sInstance__27JASGlobalInstance<7Z2SeMgr> */
#pragma push
#pragma force_active on
static u8 data_80BF4C0C[4];
#pragma pop

/* 80BF4C10-80BF4C14 000080 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8Z2SeqMgr> */
#pragma push
#pragma force_active on
static u8 data_80BF4C10[4];
#pragma pop

/* 80BF4C14-80BF4C18 000084 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SceneMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80BF4C14[4];
#pragma pop

/* 80BF4C18-80BF4C1C 000088 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2StatusMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80BF4C18[4];
#pragma pop

/* 80BF4C1C-80BF4C20 00008C 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2DebugSys>
 */
#pragma push
#pragma force_active on
static u8 data_80BF4C1C[4];
#pragma pop

/* 80BF4C20-80BF4C24 000090 0004+00 0/0 0/0 0/0 .bss
 * sInstance__36JASGlobalInstance<15JAISoundStarter>            */
#pragma push
#pragma force_active on
static u8 data_80BF4C20[4];
#pragma pop

/* 80BF4C24-80BF4C28 000094 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14Z2SoundStarter>             */
#pragma push
#pragma force_active on
static u8 data_80BF4C24[4];
#pragma pop

/* 80BF4C28-80BF4C2C 000098 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12Z2SpeechMgr2>               */
#pragma push
#pragma force_active on
static u8 data_80BF4C28[4];
#pragma pop

/* 80BF4C2C-80BF4C30 00009C 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8JAISeMgr> */
#pragma push
#pragma force_active on
static u8 data_80BF4C2C[4];
#pragma pop

/* 80BF4C30-80BF4C34 0000A0 0004+00 0/0 0/0 0/0 .bss sInstance__29JASGlobalInstance<9JAISeqMgr> */
#pragma push
#pragma force_active on
static u8 data_80BF4C30[4];
#pragma pop

/* 80BF4C34-80BF4C38 0000A4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAIStreamMgr>               */
#pragma push
#pragma force_active on
static u8 data_80BF4C34[4];
#pragma pop

/* 80BF4C38-80BF4C3C 0000A8 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SoundMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80BF4C38[4];
#pragma pop

/* 80BF4C3C-80BF4C40 0000AC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAISoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_80BF4C3C[4];
#pragma pop

/* 80BF4C40-80BF4C44 0000B0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13JAUSoundTable>              */
#pragma push
#pragma force_active on
static u8 data_80BF4C40[4];
#pragma pop

/* 80BF4C44-80BF4C48 0000B4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__38JASGlobalInstance<17JAUSoundNameTable>          */
#pragma push
#pragma force_active on
static u8 data_80BF4C44[4];
#pragma pop

/* 80BF4C48-80BF4C4C 0000B8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAUSoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_80BF4C48[4];
#pragma pop

/* 80BF4C4C-80BF4C50 0000BC 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SoundInfo>
 */
#pragma push
#pragma force_active on
static u8 data_80BF4C4C[4];
#pragma pop

/* 80BF4C50-80BF4C54 0000C0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2SoundObjMgr>              */
#pragma push
#pragma force_active on
static u8 data_80BF4C50[4];
#pragma pop

/* 80BF4C54-80BF4C58 0000C4 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2Audience>
 */
#pragma push
#pragma force_active on
static u8 data_80BF4C54[4];
#pragma pop

/* 80BF4C58-80BF4C5C 0000C8 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2FxLineMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80BF4C58[4];
#pragma pop

/* 80BF4C5C-80BF4C60 0000CC 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2EnvSeMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80BF4C5C[4];
#pragma pop

/* 80BF4C60-80BF4C64 0000D0 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SpeechMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80BF4C60[4];
#pragma pop

/* 80BF4C64-80BF4C68 0000D4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>              */
#pragma push
#pragma force_active on
static u8 data_80BF4C64[4];
#pragma pop

/* 80BF4A24-80BF4A24 0000E0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
