/**
 * @file d_a_obj_yousei.cpp
 * 
*/

#include "d/actor/d_a_obj_yousei.h"
#include "d/d_cc_d.h"
#include "dol2asm.h"


//
// Forward References:
//

extern "C" void InitCcSph__13daObjYOUSEI_cFv();
extern "C" void SetCcSph__13daObjYOUSEI_cFv();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" static void daObjYOUSEI_Create__FP10fopAc_ac_c();
extern "C" static void daObjYOUSEI_Delete__FP13daObjYOUSEI_c();
extern "C" void SpeedSet__13daObjYOUSEI_cFv();
extern "C" void MoveAction__13daObjYOUSEI_cFv();
extern "C" void BinAction__13daObjYOUSEI_cFv();
extern "C" void LinkChk__13daObjYOUSEI_cFv();
extern "C" void WaitAction__13daObjYOUSEI_cFv();
extern "C" void LinkAction__13daObjYOUSEI_cFv();
extern "C" void LinkSearch__13daObjYOUSEI_cFv();
extern "C" void WayBgCheck__13daObjYOUSEI_cFffs();
extern "C" void CareAction__13daObjYOUSEI_cFv();
extern "C" void CheckGround__13daObjYOUSEI_cFv();
extern "C" void __dt__14dBgS_ObjGndChkFv();
extern "C" void CheckWater__13daObjYOUSEI_cFv();
extern "C" void Action__13daObjYOUSEI_cFv();
extern "C" void ObjHit__13daObjYOUSEI_cFv();
extern "C" void Execute__13daObjYOUSEI_cFv();
extern "C" void Delete__13daObjYOUSEI_cFv();
extern "C" void setBaseMtx__13daObjYOUSEI_cFv();
extern "C" static void daObjYOUSEI_Draw__FP13daObjYOUSEI_c();
extern "C" static void daObjYOUSEI_Execute__FP13daObjYOUSEI_c();
extern "C" void create__13daObjYOUSEI_cFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" static bool daObjYOUSEI_IsDelete__FP13daObjYOUSEI_c();
extern "C" static void func_804D15A4();
extern "C" static void func_804D15AC();
extern "C" static void func_804D15B4();
extern "C" static void func_804D15BC();
extern "C" static void func_804D15C4();
extern "C" void getHeadTopPos__9daPy_py_cCFv();
extern "C" extern char const* const d_a_obj_yousei__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void scaleM__14mDoMtx_stack_cFRC4cXyz();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void
__ct__16mDoExt_McaMorfSOFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiP10Z2CreatureUlUl();
extern "C" void play__16mDoExt_McaMorfSOFUlSc();
extern "C" void entryDL__16mDoExt_McaMorfSOFv();
extern "C" void modelCalc__16mDoExt_McaMorfSOFv();
extern "C" void stopZelAnime__16mDoExt_McaMorfSOFv();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistanceXZ__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void dComIfGd_setSimpleShadow__FP4cXyzffR13cBgS_PolyInfosfP9_GXTexObj();
extern "C" void dComIfGs_getMaxLifeGauge__Fv();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void forceOnEventMove__Q213dPa_control_c7level_cFUl();
extern "C" void getEmitter__Q213dPa_control_c7level_cFUl();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void request__11dAttCatch_cFP10fopAc_ac_cUcfffsi();
extern "C" void LineCross__4cBgSFP11cBgS_LinChk();
extern "C" void GroundCross__4cBgSFP11cBgS_GndChk();
extern "C" void GetPolyAtt0__4dBgSFRC13cBgS_PolyInfo();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void ClrMoveBGOnly__9dBgS_AcchFv();
extern "C" void __ct__11dBgS_GndChkFv();
extern "C" void __dt__11dBgS_GndChkFv();
extern "C" void __dt__18dBgS_ObjGndChk_AllFv();
extern "C" void __ct__11dBgS_LinChkFv();
extern "C" void __dt__11dBgS_LinChkFv();
extern "C" void Set__11dBgS_LinChkFPC4cXyzPC4cXyzPC10fopAc_ac_c();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void GetTgHitGObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void execItemGet__FUc();
extern "C" void initOffset__20daPy_boomerangMove_cFPC4cXyz();
extern "C" void posMove__20daPy_boomerangMove_cFP4cXyzPsP10fopAc_ac_cs();
extern "C" void bgCheckAfterOffset__20daPy_boomerangMove_cFPC4cXyz();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void SetPos__11cBgS_GndChkFPC4cXyz();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void cLib_addCalc__FPfffff();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalcPos2__FP4cXyzRC4cXyzff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void cLib_chasePos__FP4cXyzRC4cXyzf();
extern "C" void cLib_targetAngleY__FPC3VecPC3Vec();
extern "C" void MtxPosition__FP4cXyzP4cXyz();
extern "C" void deleteAllParticle__14JPABaseEmitterFv();
extern "C" void __ct__10Z2CreatureFv();
extern "C" void init__10Z2CreatureFP3VecP3VecUcUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void checkPass__12J3DFrameCtrlFf();
extern "C" void __cvt_fp2unsigned();
extern "C" void _savegpr_25();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_25();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" extern void* __vt__18dBgS_ObjGndChk_All[12];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" extern void* calc_mtx[1 + 1 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 804D15F0-804D1630 000000 0040+00 11/11 0/0 0/0 .rodata          ccSphSrc$3652 */
const static dCcD_SrcSph ccSphSrc = {
    {
        {0x0, {{0x0, 0x0, 0x0}, {0x14002, 0x11}, 0x75}}, // mObj
        {dCcD_SE_STONE, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 40.0f} // mSph
    } // mSphAttr
};

/* 804CE738-804CE7A4 000078 006C+00 1/1 0/0 0/0 .text            InitCcSph__13daObjYOUSEI_cFv */
void daObjYOUSEI_c::InitCcSph() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804D1630-804D1634 000040 0004+00 1/2 0/0 0/0 .rodata          @3661 */
SECTION_RODATA static f32 const lit_3661 = 40.0f;
COMPILER_STRIP_GATE(0x804D1630, &lit_3661);

/* 804CE7A4-804CE7FC 0000E4 0058+00 1/1 0/0 0/0 .text            SetCcSph__13daObjYOUSEI_cFv */
void daObjYOUSEI_c::SetCcSph() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804D1634-804D1638 000044 0004+00 1/2 0/0 0/0 .rodata          @3680 */
SECTION_RODATA static f32 const lit_3680 = 2.0f / 5.0f;
COMPILER_STRIP_GATE(0x804D1634, &lit_3680);

/* 804D1720-804D1720 000130 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_804D1720 = "Always";
#pragma pop

/* 804CE7FC-804CE8DC 00013C 00E0+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
static void useHeapInit(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 804CE8DC-804CE8FC 00021C 0020+00 1/0 0/0 0/0 .text            daObjYOUSEI_Create__FP10fopAc_ac_c
 */
static void daObjYOUSEI_Create(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 804CE8FC-804CE920 00023C 0024+00 1/0 0/0 0/0 .text daObjYOUSEI_Delete__FP13daObjYOUSEI_c */
static void daObjYOUSEI_Delete(daObjYOUSEI_c* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804D1638-804D163C 000048 0004+00 2/10 0/0 0/0 .rodata          @3708 */
SECTION_RODATA static u8 const lit_3708[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x804D1638, &lit_3708);

/* 804CE920-804CE9D0 000260 00B0+00 1/1 0/0 0/0 .text            SpeedSet__13daObjYOUSEI_cFv */
void daObjYOUSEI_c::SpeedSet() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804D163C-804D1640 00004C 0004+00 0/4 0/0 0/0 .rodata          @3790 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3790 = 25.0f;
COMPILER_STRIP_GATE(0x804D163C, &lit_3790);
#pragma pop

/* 804D1640-804D1644 000050 0004+00 1/6 0/0 0/0 .rodata          @3791 */
SECTION_RODATA static f32 const lit_3791 = 1.0f;
COMPILER_STRIP_GATE(0x804D1640, &lit_3791);

/* 804D1644-804D1648 000054 0004+00 0/1 0/0 0/0 .rodata          @3792 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3792 = 120.0f;
COMPILER_STRIP_GATE(0x804D1644, &lit_3792);
#pragma pop

/* 804D1648-804D164C 000058 0004+00 0/1 0/0 0/0 .rodata          @3793 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3793 = 3.0f / 100.0f;
COMPILER_STRIP_GATE(0x804D1648, &lit_3793);
#pragma pop

/* 804D164C-804D1650 00005C 0004+00 0/4 0/0 0/0 .rodata          @3794 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3794 = 10.0f;
COMPILER_STRIP_GATE(0x804D164C, &lit_3794);
#pragma pop

/* 804D1650-804D1654 000060 0004+00 1/3 0/0 0/0 .rodata          @3795 */
SECTION_RODATA static f32 const lit_3795 = 130.0f;
COMPILER_STRIP_GATE(0x804D1650, &lit_3795);

/* 804D1654-804D1658 000064 0004+00 0/1 0/0 0/0 .rodata          @3796 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3796 = 600.0f;
COMPILER_STRIP_GATE(0x804D1654, &lit_3796);
#pragma pop

/* 804D1658-804D165C 000068 0004+00 0/1 0/0 0/0 .rodata          @3797 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3797 = 3.0f / 50.0f;
COMPILER_STRIP_GATE(0x804D1658, &lit_3797);
#pragma pop

/* 804D165C-804D1660 00006C 0004+00 1/6 0/0 0/0 .rodata          @3798 */
SECTION_RODATA static f32 const lit_3798 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x804D165C, &lit_3798);

/* 804D1660-804D1664 000070 0004+00 0/1 0/0 0/0 .rodata          @3799 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3799 = 3.0f / 5.0f;
COMPILER_STRIP_GATE(0x804D1660, &lit_3799);
#pragma pop

/* 804D1664-804D1668 000074 0004+00 0/3 0/0 0/0 .rodata          @3800 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3800 = 3.0f;
COMPILER_STRIP_GATE(0x804D1664, &lit_3800);
#pragma pop

/* 804D1668-804D166C 000078 0004+00 0/3 0/0 0/0 .rodata          @3801 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3801 = 2.0f;
COMPILER_STRIP_GATE(0x804D1668, &lit_3801);
#pragma pop

/* 804D166C-804D1670 00007C 0004+00 1/7 0/0 0/0 .rodata          @3802 */
SECTION_RODATA static f32 const lit_3802 = 100.0f;
COMPILER_STRIP_GATE(0x804D166C, &lit_3802);

/* 804D1670-804D1674 000080 0004+00 0/3 0/0 0/0 .rodata          @3803 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3803 = 3.0f / 10.0f;
COMPILER_STRIP_GATE(0x804D1670, &lit_3803);
#pragma pop

/* 804D1674-804D1678 000084 0004+00 0/5 0/0 0/0 .rodata          @3804 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3804 = 30.0f;
COMPILER_STRIP_GATE(0x804D1674, &lit_3804);
#pragma pop

/* 804D1678-804D1680 000088 0004+04 0/3 0/0 0/0 .rodata          @3805 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3805[1 + 1 /* padding */] = {
    7.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x804D1678, &lit_3805);
#pragma pop

/* 804D1680-804D1688 000090 0008+00 0/2 0/0 0/0 .rodata          @3807 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3807[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x804D1680, &lit_3807);
#pragma pop

/* 804D17E8-804D17EC 000000 0001+03 1/1 0/0 0/0 .bss             @1109 */
static u8 lit_1109[1 + 3 /* padding */];

/* 804D17EC-804D17F0 000004 0001+03 0/0 0/0 0/0 .bss             @1107 */
#pragma push
#pragma force_active on
static u8 lit_1107[1 + 3 /* padding */];
#pragma pop

/* 804D17F0-804D17F4 000008 0001+03 0/0 0/0 0/0 .bss             @1105 */
#pragma push
#pragma force_active on
static u8 lit_1105[1 + 3 /* padding */];
#pragma pop

/* 804D17F4-804D17F8 00000C 0001+03 0/0 0/0 0/0 .bss             @1104 */
#pragma push
#pragma force_active on
static u8 lit_1104[1 + 3 /* padding */];
#pragma pop

/* 804D17F8-804D17FC 000010 0001+03 0/0 0/0 0/0 .bss             @1099 */
#pragma push
#pragma force_active on
static u8 lit_1099[1 + 3 /* padding */];
#pragma pop

/* 804D17FC-804D1800 000014 0001+03 0/0 0/0 0/0 .bss             @1097 */
#pragma push
#pragma force_active on
static u8 lit_1097[1 + 3 /* padding */];
#pragma pop

/* 804D1800-804D1804 000018 0001+03 0/0 0/0 0/0 .bss             @1095 */
#pragma push
#pragma force_active on
static u8 lit_1095[1 + 3 /* padding */];
#pragma pop

/* 804D1804-804D1808 00001C 0001+03 0/0 0/0 0/0 .bss             @1094 */
#pragma push
#pragma force_active on
static u8 lit_1094[1 + 3 /* padding */];
#pragma pop

/* 804D1808-804D180C 000020 0001+03 0/0 0/0 0/0 .bss             @1057 */
#pragma push
#pragma force_active on
static u8 lit_1057[1 + 3 /* padding */];
#pragma pop

/* 804D180C-804D1810 000024 0001+03 0/0 0/0 0/0 .bss             @1055 */
#pragma push
#pragma force_active on
static u8 lit_1055[1 + 3 /* padding */];
#pragma pop

/* 804D1810-804D1814 000028 0001+03 0/0 0/0 0/0 .bss             @1053 */
#pragma push
#pragma force_active on
static u8 lit_1053[1 + 3 /* padding */];
#pragma pop

/* 804D1814-804D1818 00002C 0001+03 0/0 0/0 0/0 .bss             @1052 */
#pragma push
#pragma force_active on
static u8 lit_1052[1 + 3 /* padding */];
#pragma pop

/* 804D1818-804D181C 000030 0001+03 0/0 0/0 0/0 .bss             @1014 */
#pragma push
#pragma force_active on
static u8 lit_1014[1 + 3 /* padding */];
#pragma pop

/* 804D181C-804D1820 000034 0001+03 0/0 0/0 0/0 .bss             @1012 */
#pragma push
#pragma force_active on
static u8 lit_1012[1 + 3 /* padding */];
#pragma pop

/* 804D1820-804D1824 000038 0001+03 0/0 0/0 0/0 .bss             @1010 */
#pragma push
#pragma force_active on
static u8 lit_1010[1 + 3 /* padding */];
#pragma pop

/* 804D1824-804D1828 00003C 0001+03 0/0 0/0 0/0 .bss             @1009 */
#pragma push
#pragma force_active on
static u8 lit_1009[1 + 3 /* padding */];
#pragma pop

/* 804D1828-804D182C 000040 0004+00 0/0 0/0 0/0 .bss             s_dis */
#pragma push
#pragma force_active on
static u8 s_dis[4];
#pragma pop

/* 804D182C-804D1830 000044 0004+00 4/5 0/0 0/0 .bss             sLink_Pos */
static u8 sLink_Pos[4];

/* 804CE9D0-804CEE50 000310 0480+00 1/1 0/0 0/0 .text            MoveAction__13daObjYOUSEI_cFv */
void daObjYOUSEI_c::MoveAction() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804D1688-804D168C 000098 0004+00 0/1 0/0 0/0 .rodata          @3849 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3849 = 1.5f;
COMPILER_STRIP_GATE(0x804D1688, &lit_3849);
#pragma pop

/* 804D168C-804D1690 00009C 0004+00 0/2 0/0 0/0 .rodata          @3850 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3850 = 4.5f;
COMPILER_STRIP_GATE(0x804D168C, &lit_3850);
#pragma pop

/* 804D1690-804D1694 0000A0 0004+00 0/2 0/0 0/0 .rodata          @3851 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3851 = -2.0f;
COMPILER_STRIP_GATE(0x804D1690, &lit_3851);
#pragma pop

/* 804D1694-804D1698 0000A4 0004+00 0/2 0/0 0/0 .rodata          @3852 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3852 = 1.0f / 20.0f;
COMPILER_STRIP_GATE(0x804D1694, &lit_3852);
#pragma pop

/* 804D1698-804D169C 0000A8 0004+00 0/2 0/0 0/0 .rodata          @3853 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3853 = 1.0f / 50.0f;
COMPILER_STRIP_GATE(0x804D1698, &lit_3853);
#pragma pop

/* 804D169C-804D16A0 0000AC 0004+00 0/4 0/0 0/0 .rodata          @3854 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3854 = 5.0f;
COMPILER_STRIP_GATE(0x804D169C, &lit_3854);
#pragma pop

/* 804CEE50-804CF098 000790 0248+00 1/1 0/0 0/0 .text            BinAction__13daObjYOUSEI_cFv */
void daObjYOUSEI_c::BinAction() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804D16A0-804D16A8 0000B0 0008+00 0/2 0/0 0/0 .rodata          @3996 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3996[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x804D16A0, &lit_3996);
#pragma pop

/* 804D16A8-804D16B0 0000B8 0008+00 0/2 0/0 0/0 .rodata          @3997 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3997[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x804D16A8, &lit_3997);
#pragma pop

/* 804D16B0-804D16B8 0000C0 0008+00 0/2 0/0 0/0 .rodata          @3998 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3998[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x804D16B0, &lit_3998);
#pragma pop

/* 804D16B8-804D16BC 0000C8 0004+00 0/1 0/0 0/0 .rodata          @3999 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3999 = 500.0f;
COMPILER_STRIP_GATE(0x804D16B8, &lit_3999);
#pragma pop

/* 804D16BC-804D16C0 0000CC 0004+00 0/3 0/0 0/0 .rodata          @4000 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4000 = 80.0f;
COMPILER_STRIP_GATE(0x804D16BC, &lit_4000);
#pragma pop

/* 804D16C0-804D16C4 0000D0 0004+00 0/2 0/0 0/0 .rodata          @4001 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4001 = 29.0f / 50.0f;
COMPILER_STRIP_GATE(0x804D16C0, &lit_4001);
#pragma pop

/* 804D16C4-804D16C8 0000D4 0004+00 0/2 0/0 0/0 .rodata          @4002 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4002 = 7.0f / 20.0f;
COMPILER_STRIP_GATE(0x804D16C4, &lit_4002);
#pragma pop

/* 804D16C8-804D16CC 0000D8 0004+00 1/4 0/0 0/0 .rodata          @4003 */
SECTION_RODATA static f32 const lit_4003 = 200.0f;
COMPILER_STRIP_GATE(0x804D16C8, &lit_4003);

/* 804D16CC-804D16D0 0000DC 0004+00 0/1 0/0 0/0 .rodata          @4004 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4004 = 51.0f / 100.0f;
COMPILER_STRIP_GATE(0x804D16CC, &lit_4004);
#pragma pop

/* 804D16D0-804D16D4 0000E0 0004+00 2/7 0/0 0/0 .rodata          @4005 */
SECTION_RODATA static f32 const lit_4005 = 50.0f;
COMPILER_STRIP_GATE(0x804D16D0, &lit_4005);

/* 804D1830-804D1834 -00001 0004+00 2/3 0/0 0/0 .bss             None */
/* 804D1830 0001+00 data_804D1830 None */
/* 804D1831 0003+00 data_804D1831 None */
static u8 struct_804D1830[4];

/* 804CF098-804CF6C4 0009D8 062C+00 1/1 0/0 0/0 .text            LinkChk__13daObjYOUSEI_cFv */
void daObjYOUSEI_c::LinkChk() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804D16D4-804D16D8 0000E4 0004+00 0/1 0/0 0/0 .rodata          @4187 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4187 = 15.0f;
COMPILER_STRIP_GATE(0x804D16D4, &lit_4187);
#pragma pop

/* 804D16D8-804D16DC 0000E8 0004+00 0/2 0/0 0/0 .rodata          @4188 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4188 = 6.0f;
COMPILER_STRIP_GATE(0x804D16D8, &lit_4188);
#pragma pop

/* 804D16DC-804D16E0 0000EC 0004+00 0/1 0/0 0/0 .rodata          @4189 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4189 = 0.25f;
COMPILER_STRIP_GATE(0x804D16DC, &lit_4189);
#pragma pop

/* 804D16E0-804D16E4 0000F0 0004+00 0/1 0/0 0/0 .rodata          @4190 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4190 = 13.0f;
COMPILER_STRIP_GATE(0x804D16E0, &lit_4190);
#pragma pop

/* 804D16E4-804D16E8 0000F4 0004+00 0/2 0/0 0/0 .rodata          @4191 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4191 = 150.0f;
COMPILER_STRIP_GATE(0x804D16E4, &lit_4191);
#pragma pop

/* 804D16E8-804D16EC 0000F8 0004+00 0/1 0/0 0/0 .rodata          @4192 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4192 = 2.5f;
COMPILER_STRIP_GATE(0x804D16E8, &lit_4192);
#pragma pop

/* 804D16EC-804D16F0 0000FC 0004+00 0/1 0/0 0/0 .rodata          @4193 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4193 = 0x3F666667;
COMPILER_STRIP_GATE(0x804D16EC, &lit_4193);
#pragma pop

/* 804D16F0-804D16F4 000100 0004+00 0/1 0/0 0/0 .rodata          @4194 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4194 = 250.0f;
COMPILER_STRIP_GATE(0x804D16F0, &lit_4194);
#pragma pop

/* 804D16F4-804D16F8 000104 0004+00 0/1 0/0 0/0 .rodata          @4195 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4195 = 13.0f / 20.0f;
COMPILER_STRIP_GATE(0x804D16F4, &lit_4195);
#pragma pop

/* 804D16F8-804D16FC 000108 0004+00 0/1 0/0 0/0 .rodata          @4196 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4196 = 20.0f;
COMPILER_STRIP_GATE(0x804D16F8, &lit_4196);
#pragma pop

/* 804D16FC-804D1700 00010C 0004+00 0/2 0/0 0/0 .rodata          @4197 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4197 = -100.0f;
COMPILER_STRIP_GATE(0x804D16FC, &lit_4197);
#pragma pop

/* 804D1700-804D1704 000110 0004+00 0/1 0/0 0/0 .rodata          @4198 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4198 = 26.0f;
COMPILER_STRIP_GATE(0x804D1700, &lit_4198);
#pragma pop

/* 804CF6C4-804CFCE8 001004 0624+00 1/1 0/0 0/0 .text            WaitAction__13daObjYOUSEI_cFv */
void daObjYOUSEI_c::WaitAction() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804D1704-804D1708 000114 0004+00 0/1 0/0 0/0 .rodata          @4394 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4394 = 0.5f;
COMPILER_STRIP_GATE(0x804D1704, &lit_4394);
#pragma pop

/* 804D1708-804D170C 000118 0004+00 0/1 0/0 0/0 .rodata          @4395 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4395 = 0x3A83126F;
COMPILER_STRIP_GATE(0x804D1708, &lit_4395);
#pragma pop

/* 804CFCE8-804D057C 001628 0894+00 1/1 0/0 0/0 .text            LinkAction__13daObjYOUSEI_cFv */
void daObjYOUSEI_c::LinkAction() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804D170C-804D1710 00011C 0004+00 0/1 0/0 0/0 .rodata          @4419 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4419 = -200.0f;
COMPILER_STRIP_GATE(0x804D170C, &lit_4419);
#pragma pop

/* 804D057C-804D065C 001EBC 00E0+00 1/1 0/0 0/0 .text            LinkSearch__13daObjYOUSEI_cFv */
void daObjYOUSEI_c::LinkSearch() {
    // NONMATCHING
}

/* 804D065C-804D0780 001F9C 0124+00 1/1 0/0 0/0 .text            WayBgCheck__13daObjYOUSEI_cFffs */
void daObjYOUSEI_c::WayBgCheck(f32 param_0, f32 param_1, s16 param_2) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804D1710-804D1714 000120 0004+00 1/1 0/0 0/0 .rodata          @4462 */
SECTION_RODATA static f32 const lit_4462 = 7.0f / 10.0f;
COMPILER_STRIP_GATE(0x804D1710, &lit_4462);

/* 804D0780-804D080C 0020C0 008C+00 4/4 0/0 0/0 .text            CareAction__13daObjYOUSEI_cFv */
void daObjYOUSEI_c::CareAction() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804D1714-804D1718 000124 0004+00 1/2 0/0 0/0 .rodata          @4482 */
SECTION_RODATA static f32 const lit_4482 = -1000000000.0f;
COMPILER_STRIP_GATE(0x804D1714, &lit_4482);

/* 804D1728-804D1748 -00001 0020+00 1/0 0/0 0/0 .data            l_daObjYOUSEI_Method */
static actor_method_class l_daObjYOUSEI_Method = {
    (process_method_func)daObjYOUSEI_Create__FP10fopAc_ac_c,
    (process_method_func)daObjYOUSEI_Delete__FP13daObjYOUSEI_c,
    (process_method_func)daObjYOUSEI_Execute__FP13daObjYOUSEI_c,
    (process_method_func)daObjYOUSEI_IsDelete__FP13daObjYOUSEI_c,
    (process_method_func)daObjYOUSEI_Draw__FP13daObjYOUSEI_c,
};

/* 804D1748-804D1778 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_Yousei */
extern actor_process_profile_definition g_profile_Obj_Yousei = {
  fpcLy_CURRENT_e,        // mLayerID
  7,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_Obj_Yousei,        // mProcName
  &g_fpcLf_Method.base,  // sub_method
  sizeof(daObjYOUSEI_c),  // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  475,                    // mPriority
  &l_daObjYOUSEI_Method,  // sub_method
  0x000C0100,             // mStatus
  fopAc_ACTOR_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 804D1778-804D1784 000050 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 804D1784-804D1790 00005C 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 804D1790-804D17B4 000068 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_804D15C4,
    (void*)NULL,
    (void*)NULL,
    (void*)func_804D15BC,
};

/* 804D17B4-804D17E4 00008C 0030+00 3/3 0/0 0/0 .data            __vt__14dBgS_ObjGndChk */
SECTION_DATA extern void* __vt__14dBgS_ObjGndChk[12] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14dBgS_ObjGndChkFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_804D15A4,
    (void*)NULL,
    (void*)NULL,
    (void*)func_804D15B4,
    (void*)NULL,
    (void*)NULL,
    (void*)func_804D15AC,
};

/* 804D080C-804D0910 00214C 0104+00 2/2 0/0 0/0 .text            CheckGround__13daObjYOUSEI_cFv */
void daObjYOUSEI_c::CheckGround() {
    // NONMATCHING
}

/* 804D0910-804D0988 002250 0078+00 4/3 0/0 0/0 .text            __dt__14dBgS_ObjGndChkFv */
// dBgS_ObjGndChk::~dBgS_ObjGndChk() {
extern "C" void __dt__14dBgS_ObjGndChkFv() {
    // NONMATCHING
}

/* 804D0988-804D0AD0 0022C8 0148+00 1/1 0/0 0/0 .text            CheckWater__13daObjYOUSEI_cFv */
void daObjYOUSEI_c::CheckWater() {
    // NONMATCHING
}

/* 804D0AD0-804D0CCC 002410 01FC+00 1/1 0/0 0/0 .text            Action__13daObjYOUSEI_cFv */
void daObjYOUSEI_c::Action() {
    // NONMATCHING
}

/* 804D0CCC-804D0DF0 00260C 0124+00 1/1 0/0 0/0 .text            ObjHit__13daObjYOUSEI_cFv */
void daObjYOUSEI_c::ObjHit() {
    // NONMATCHING
}

/* 804D0DF0-804D0F98 002730 01A8+00 1/1 0/0 0/0 .text            Execute__13daObjYOUSEI_cFv */
void daObjYOUSEI_c::Execute() {
    // NONMATCHING
}

/* 804D0F98-804D0FCC 0028D8 0034+00 1/1 0/0 0/0 .text            Delete__13daObjYOUSEI_cFv */
void daObjYOUSEI_c::Delete() {
    // NONMATCHING
}

/* 804D0FCC-804D1040 00290C 0074+00 1/1 0/0 0/0 .text            setBaseMtx__13daObjYOUSEI_cFv */
void daObjYOUSEI_c::setBaseMtx() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804D1718-804D171C 000128 0004+00 0/1 0/0 0/0 .rodata          @4682 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4682 = 4.0f / 5.0f;
COMPILER_STRIP_GATE(0x804D1718, &lit_4682);
#pragma pop

/* 804D1040-804D10FC 002980 00BC+00 1/0 0/0 0/0 .text            daObjYOUSEI_Draw__FP13daObjYOUSEI_c
 */
static void daObjYOUSEI_Draw(daObjYOUSEI_c* param_0) {
    // NONMATCHING
}

/* 804D10FC-804D111C 002A3C 0020+00 2/1 0/0 0/0 .text daObjYOUSEI_Execute__FP13daObjYOUSEI_c */
static void daObjYOUSEI_Execute(daObjYOUSEI_c* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804D171C-804D1720 00012C 0004+00 0/1 0/0 0/0 .rodata          @4796 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4796 = -50.0f;
COMPILER_STRIP_GATE(0x804D171C, &lit_4796);
#pragma pop

/* 804D111C-804D149C 002A5C 0380+00 1/1 0/0 0/0 .text            create__13daObjYOUSEI_cFv */
void daObjYOUSEI_c::create() {
    // NONMATCHING
}

/* 804D149C-804D14E4 002DDC 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
// cM3dGSph::~cM3dGSph() {
extern "C" void __dt__8cM3dGSphFv() {
    // NONMATCHING
}

/* 804D14E4-804D152C 002E24 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
// cM3dGAab::~cM3dGAab() {
extern "C" void __dt__8cM3dGAabFv() {
    // NONMATCHING
}

/* 804D152C-804D159C 002E6C 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
// dBgS_ObjAcch::~dBgS_ObjAcch() {
extern "C" void __dt__12dBgS_ObjAcchFv() {
    // NONMATCHING
}

/* 804D159C-804D15A4 002EDC 0008+00 1/0 0/0 0/0 .text daObjYOUSEI_IsDelete__FP13daObjYOUSEI_c */
static bool daObjYOUSEI_IsDelete(daObjYOUSEI_c* param_0) {
    return true;
}

/* 804D15A4-804D15AC 002EE4 0008+00 1/0 0/0 0/0 .text            @20@__dt__14dBgS_ObjGndChkFv */
static void func_804D15A4() {
    // NONMATCHING
}

/* 804D15AC-804D15B4 002EEC 0008+00 1/0 0/0 0/0 .text            @76@__dt__14dBgS_ObjGndChkFv */
static void func_804D15AC() {
    // NONMATCHING
}

/* 804D15B4-804D15BC 002EF4 0008+00 1/0 0/0 0/0 .text            @60@__dt__14dBgS_ObjGndChkFv */
static void func_804D15B4() {
    // NONMATCHING
}

/* 804D15BC-804D15C4 002EFC 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
static void func_804D15BC() {
    // NONMATCHING
}

/* 804D15C4-804D15CC 002F04 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
static void func_804D15C4() {
    // NONMATCHING
}

/* 804D15CC-804D15E8 002F0C 001C+00 2/2 0/0 0/0 .text            getHeadTopPos__9daPy_py_cCFv */
// void daPy_py_c::getHeadTopPos() const {
extern "C" void getHeadTopPos__9daPy_py_cCFv() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804D1834-804D1838 00004C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__40JASGlobalInstance<19JASDefaultBankTable>        */
#pragma push
#pragma force_active on
static u8 data_804D1834[4];
#pragma pop

/* 804D1838-804D183C 000050 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JASAudioThread>             */
#pragma push
#pragma force_active on
static u8 data_804D1838[4];
#pragma pop

/* 804D183C-804D1840 000054 0004+00 0/0 0/0 0/0 .bss sInstance__27JASGlobalInstance<7Z2SeMgr> */
#pragma push
#pragma force_active on
static u8 data_804D183C[4];
#pragma pop

/* 804D1840-804D1844 000058 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8Z2SeqMgr> */
#pragma push
#pragma force_active on
static u8 data_804D1840[4];
#pragma pop

/* 804D1844-804D1848 00005C 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SceneMgr>
 */
#pragma push
#pragma force_active on
static u8 data_804D1844[4];
#pragma pop

/* 804D1848-804D184C 000060 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2StatusMgr>
 */
#pragma push
#pragma force_active on
static u8 data_804D1848[4];
#pragma pop

/* 804D184C-804D1850 000064 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2DebugSys>
 */
#pragma push
#pragma force_active on
static u8 data_804D184C[4];
#pragma pop

/* 804D1850-804D1854 000068 0004+00 0/0 0/0 0/0 .bss
 * sInstance__36JASGlobalInstance<15JAISoundStarter>            */
#pragma push
#pragma force_active on
static u8 data_804D1850[4];
#pragma pop

/* 804D1854-804D1858 00006C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14Z2SoundStarter>             */
#pragma push
#pragma force_active on
static u8 data_804D1854[4];
#pragma pop

/* 804D1858-804D185C 000070 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12Z2SpeechMgr2>               */
#pragma push
#pragma force_active on
static u8 data_804D1858[4];
#pragma pop

/* 804D185C-804D1860 000074 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8JAISeMgr> */
#pragma push
#pragma force_active on
static u8 data_804D185C[4];
#pragma pop

/* 804D1860-804D1864 000078 0004+00 0/0 0/0 0/0 .bss sInstance__29JASGlobalInstance<9JAISeqMgr> */
#pragma push
#pragma force_active on
static u8 data_804D1860[4];
#pragma pop

/* 804D1864-804D1868 00007C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAIStreamMgr>               */
#pragma push
#pragma force_active on
static u8 data_804D1864[4];
#pragma pop

/* 804D1868-804D186C 000080 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SoundMgr>
 */
#pragma push
#pragma force_active on
static u8 data_804D1868[4];
#pragma pop

/* 804D186C-804D1870 000084 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAISoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_804D186C[4];
#pragma pop

/* 804D1870-804D1874 000088 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13JAUSoundTable>              */
#pragma push
#pragma force_active on
static u8 data_804D1870[4];
#pragma pop

/* 804D1874-804D1878 00008C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__38JASGlobalInstance<17JAUSoundNameTable>          */
#pragma push
#pragma force_active on
static u8 data_804D1874[4];
#pragma pop

/* 804D1878-804D187C 000090 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAUSoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_804D1878[4];
#pragma pop

/* 804D187C-804D1880 000094 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SoundInfo>
 */
#pragma push
#pragma force_active on
static u8 data_804D187C[4];
#pragma pop

/* 804D1880-804D1884 000098 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2SoundObjMgr>              */
#pragma push
#pragma force_active on
static u8 data_804D1880[4];
#pragma pop

/* 804D1884-804D1888 00009C 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2Audience>
 */
#pragma push
#pragma force_active on
static u8 data_804D1884[4];
#pragma pop

/* 804D1888-804D188C 0000A0 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2FxLineMgr>
 */
#pragma push
#pragma force_active on
static u8 data_804D1888[4];
#pragma pop

/* 804D188C-804D1890 0000A4 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2EnvSeMgr>
 */
#pragma push
#pragma force_active on
static u8 data_804D188C[4];
#pragma pop

/* 804D1890-804D1894 0000A8 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SpeechMgr>
 */
#pragma push
#pragma force_active on
static u8 data_804D1890[4];
#pragma pop

/* 804D1894-804D1898 0000AC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>              */
#pragma push
#pragma force_active on
static u8 data_804D1894[4];
#pragma pop

/* 804D1720-804D1720 000130 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
