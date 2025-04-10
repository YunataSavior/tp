/**
 * @file d_a_obj_laundry_rope.cpp
 * 
*/

#include "d/actor/d_a_obj_laundry_rope.h"
#include "d/d_cc_d.h"
#include "dol2asm.h"


//
// Forward References:
//

extern "C" void create_init__14daObjLndRope_cFv();
extern "C" void __dt__4cXyzFv();
extern "C" void initBaseMtx__14daObjLndRope_cFv();
extern "C" void setBaseMtx__14daObjLndRope_cFv();
extern "C" void setNormalRopePos__14daObjLndRope_cFv();
extern "C" static void createSolidHeap__FP10fopAc_ac_c();
extern "C" static void daObjLndRope_Draw__FP14daObjLndRope_c();
extern "C" static void daObjLndRope_Execute__FP14daObjLndRope_c();
extern "C" static bool daObjLndRope_IsDelete__FP14daObjLndRope_c();
extern "C" static void daObjLndRope_Delete__FP14daObjLndRope_c();
extern "C" void __dt__8dCcD_SphFv();
extern "C" static void daObjLndRope_Create__FP10fopAc_ac_c();
extern "C" void __ct__4cXyzFv();
extern "C" void __ct__8dCcD_SphFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__10dCcD_GSttsFv();
extern "C" void __dt__10cCcD_GSttsFv();
extern "C" u8 const M_attr__14daObjLndRope_c[20];
extern "C" extern char const* const d_a_obj_laundry_rope__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void init__19mDoExt_3DlineMat1_cFUsUsP7ResTIMGi();
extern "C" void update__19mDoExt_3DlineMat1_cFiR8_GXColorP12dKy_tevstr_c();
extern "C" void setMat__26mDoExt_3DlineMatSortPacketFP18mDoExt_3DlineMat_c();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_createChild__FsUiUlPC4cXyziPC5csXyzPC4cXyzScPFPv_i();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void fpcEx_SearchByID__FUi();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void getRes__14dRes_control_cFPCcPCcP11dRes_info_ci();
extern "C" void dPath_GetRoomPath__Fii();
extern "C" void dKyw_get_AllWind_vecpow__FP4cXyz();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void __dt__12dCcD_GObjInfFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __ml__4cXyzCFf();
extern "C" void normalizeZP__4cXyzFv();
extern "C" void __ct__5csXyzFsss();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rnd__Fv();
extern "C" void cLib_targetAngleY__FPC3VecPC3Vec();
extern "C" void cLib_targetAngleX__FPC4cXyzPC4cXyz();
extern "C" void __dl__FPv();
extern "C" void __destroy_arr();
extern "C" void __construct_array();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" extern void* __vt__19mDoExt_3DlineMat1_c[5];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" extern u8 g_dComIfG_gameInfo[122384];

//
// Declarations:
//

/* ############################################################################################## */
/* 80C53304-80C53318 000000 0014+00 3/3 0/0 0/0 .rodata          M_attr__14daObjLndRope_c */
SECTION_RODATA u8 const daObjLndRope_c::M_attr[20] = {
    0xC0, 0xA0, 0x00, 0x00, 0x3E, 0x4C, 0xCC, 0xCD, 0x3F, 0x00,
    0x00, 0x00, 0x3F, 0x4C, 0xCC, 0xCD, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80C53304, &daObjLndRope_c::M_attr);

/* 80C53318-80C53328 000014 000D+03 0/1 0/0 0/0 .rodata          l_laundryList */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const l_laundryList[13 + 3 /* padding */] = {
    0xFF,
    0xFF,
    0x03,
    0x00,
    0xFF,
    0x01,
    0x01,
    0xFF,
    0x02,
    0x02,
    0xFF,
    0x02,
    0xFF,
    /* padding */
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80C53318, &l_laundryList);
#pragma pop

/* 80C53328-80C5332C 000024 0004+00 0/1 0/0 0/0 .rodata          @3791 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3791 = 0.5f;
COMPILER_STRIP_GATE(0x80C53328, &lit_3791);
#pragma pop

/* 80C5332C-80C53330 000028 0004+00 0/1 0/0 0/0 .rodata          @3792 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3792 = 1.0f;
COMPILER_STRIP_GATE(0x80C5332C, &lit_3792);
#pragma pop

/* 80C53330-80C53334 00002C 0004+00 0/2 0/0 0/0 .rodata          @3793 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3793[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80C53330, &lit_3793);
#pragma pop

/* 80C53334-80C5333C 000030 0008+00 0/1 0/0 0/0 .rodata          @3794 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3794[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80C53334, &lit_3794);
#pragma pop

/* 80C5333C-80C53344 000038 0008+00 0/1 0/0 0/0 .rodata          @3795 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3795[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80C5333C, &lit_3795);
#pragma pop

/* 80C53344-80C5334C 000040 0008+00 0/1 0/0 0/0 .rodata          @3796 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3796[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80C53344, &lit_3796);
#pragma pop

/* 80C5334C-80C53350 000048 0004+00 0/1 0/0 0/0 .rodata          @3797 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3797 = 3.0f;
COMPILER_STRIP_GATE(0x80C5334C, &lit_3797);
#pragma pop

/* 80C53350-80C53354 00004C 0004+00 0/1 0/0 0/0 .rodata          @3798 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3798 = -75.0f;
COMPILER_STRIP_GATE(0x80C53350, &lit_3798);
#pragma pop

/* 80C53354-80C53358 000050 0004+00 0/1 0/0 0/0 .rodata          @3799 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3799 = -200.0f;
COMPILER_STRIP_GATE(0x80C53354, &lit_3799);
#pragma pop

/* 80C53358-80C5335C 000054 0004+00 0/1 0/0 0/0 .rodata          @3800 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3800 = 75.0f;
COMPILER_STRIP_GATE(0x80C53358, &lit_3800);
#pragma pop

/* 80C5335C-80C53360 000058 0004+00 0/1 0/0 0/0 .rodata          @3801 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3801 = 50.0f;
COMPILER_STRIP_GATE(0x80C5335C, &lit_3801);
#pragma pop

/* 80C53360-80C53364 00005C 0004+00 0/1 0/0 0/0 .rodata          @3802 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3802 = 1.0f / 14.0f;
COMPILER_STRIP_GATE(0x80C53360, &lit_3802);
#pragma pop

/* 80C521F8-80C52820 000078 0628+00 1/1 0/0 0/0 .text            create_init__14daObjLndRope_cFv */
void daObjLndRope_c::create_init() {
    // NONMATCHING
}

/* 80C52820-80C5285C 0006A0 003C+00 2/2 0/0 0/0 .text            __dt__4cXyzFv */
// cXyz::~cXyz() {
extern "C" void __dt__4cXyzFv() {
    // NONMATCHING
}

/* 80C5285C-80C52890 0006DC 0034+00 1/1 0/0 0/0 .text            initBaseMtx__14daObjLndRope_cFv */
void daObjLndRope_c::initBaseMtx() {
    // NONMATCHING
}

/* 80C52890-80C528E0 000710 0050+00 1/1 0/0 0/0 .text            setBaseMtx__14daObjLndRope_cFv */
void daObjLndRope_c::setBaseMtx() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80C53364-80C533A4 000060 0040+00 0/0 0/0 0/0 .rodata          ccSphSrc$3837 */
#pragma push
#pragma force_active on
const static dCcD_SrcSph ccSphSrc = {
    {
        {0x0, {{0x0, 0x0, 0x0}, {0x1607a, 0x11}, 0x149}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x4}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 0.0f} // mSph
    } // mSphAttr
};
#pragma pop

/* 80C533A4-80C533A8 0000A0 0004+00 0/1 0/0 0/0 .rodata          @4012 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4012 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x80C533A4, &lit_4012);
#pragma pop

/* 80C533A8-80C533AC 0000A4 0004+00 0/1 0/0 0/0 .rodata          @4013 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4013 = 3.0f / 5.0f;
COMPILER_STRIP_GATE(0x80C533A8, &lit_4013);
#pragma pop

/* 80C528E0-80C52CC8 000760 03E8+00 2/2 0/0 0/0 .text setNormalRopePos__14daObjLndRope_cFv */
void daObjLndRope_c::setNormalRopePos() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80C533AC-80C533B0 0000A8 0004+00 1/1 0/0 0/0 .rodata          @4036 */
SECTION_RODATA static f32 const lit_4036 = 2.0f;
COMPILER_STRIP_GATE(0x80C533AC, &lit_4036);

/* 80C533B0-80C533B0 0000AC 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80C533B0 = "Obj_SRope";
SECTION_DEAD static char const* const stringBase_80C533BA = "Obj_ItaRope.bti";
#pragma pop

/* 80C533CC-80C533D0 -00001 0004+00 3/3 0/0 0/0 .data            l_arcName */
SECTION_DATA static void* l_arcName = (void*)&d_a_obj_laundry_rope__stringBase0;

/* 80C52CC8-80C52D70 000B48 00A8+00 1/1 0/0 0/0 .text            createSolidHeap__FP10fopAc_ac_c */
static void createSolidHeap(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80C533D0-80C533D4 000004 0004+00 1/1 0/0 0/0 .data
 * l_color$localstatic3$draw__14daObjLndRope_cFv                */
SECTION_DATA static u8 data_80C533D0[4] = {
    0x14,
    0x0F,
    0x00,
    0xFF,
};

/* 80C52D70-80C52E04 000BF0 0094+00 1/0 0/0 0/0 .text daObjLndRope_Draw__FP14daObjLndRope_c */
static void daObjLndRope_Draw(daObjLndRope_c* param_0) {
    // NONMATCHING
}

/* 80C52E04-80C52E34 000C84 0030+00 1/0 0/0 0/0 .text daObjLndRope_Execute__FP14daObjLndRope_c */
static void daObjLndRope_Execute(daObjLndRope_c* param_0) {
    // NONMATCHING
}

/* 80C52E34-80C52E3C 000CB4 0008+00 1/0 0/0 0/0 .text daObjLndRope_IsDelete__FP14daObjLndRope_c */
static bool daObjLndRope_IsDelete(daObjLndRope_c* param_0) {
    return true;
}

/* ############################################################################################## */
/* 80C533D4-80C533F4 -00001 0020+00 1/0 0/0 0/0 .data            l_daObjLndRope_Method */
static actor_method_class l_daObjLndRope_Method = {
    (process_method_func)daObjLndRope_Create__FP10fopAc_ac_c,
    (process_method_func)daObjLndRope_Delete__FP14daObjLndRope_c,
    (process_method_func)daObjLndRope_Execute__FP14daObjLndRope_c,
    (process_method_func)daObjLndRope_IsDelete__FP14daObjLndRope_c,
    (process_method_func)daObjLndRope_Draw__FP14daObjLndRope_c,
};

/* 80C533F4-80C53424 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_LndRope */
extern actor_process_profile_definition g_profile_Obj_LndRope = {
  fpcLy_CURRENT_e,        // mLayerID
  7,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_Obj_LndRope,       // mProcName
  &g_fpcLf_Method.base,  // sub_method
  sizeof(daObjLndRope_c), // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  34,                     // mPriority
  &l_daObjLndRope_Method, // sub_method
  0x00040180,             // mStatus
  fopAc_ACTOR_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 80C53424-80C53438 000058 0014+00 1/1 0/0 0/0 .data            __vt__18mDoExt_3DlineMat_c */
SECTION_DATA extern void* __vt__18mDoExt_3DlineMat_c[5] = {
    (void*)NULL /* RTTI */, (void*)NULL, (void*)NULL, (void*)NULL, (void*)NULL,
};

/* 80C53438-80C53444 00006C 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80C53444-80C53450 000078 000C+00 3/3 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 80C53450-80C5345C 000084 000C+00 3/3 0/0 0/0 .data            __vt__10cCcD_GStts */
SECTION_DATA extern void* __vt__10cCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10cCcD_GSttsFv,
};

/* 80C5345C-80C53468 000090 000C+00 2/2 0/0 0/0 .data            __vt__10dCcD_GStts */
SECTION_DATA extern void* __vt__10dCcD_GStts[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10dCcD_GSttsFv,
};

/* 80C52E3C-80C52F2C 000CBC 00F0+00 1/0 0/0 0/0 .text daObjLndRope_Delete__FP14daObjLndRope_c */
static void daObjLndRope_Delete(daObjLndRope_c* param_0) {
    // NONMATCHING
}

/* 80C52F2C-80C52FF8 000DAC 00CC+00 2/2 0/0 0/0 .text            __dt__8dCcD_SphFv */
// dCcD_Sph::~dCcD_Sph() {
extern "C" void __dt__8dCcD_SphFv() {
    // NONMATCHING
}

/* 80C52FF8-80C53140 000E78 0148+00 1/0 0/0 0/0 .text            daObjLndRope_Create__FP10fopAc_ac_c
 */
static void daObjLndRope_Create(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 80C53140-80C53144 000FC0 0004+00 1/1 0/0 0/0 .text            __ct__4cXyzFv */
// cXyz::cXyz() {
extern "C" void __ct__4cXyzFv() {
    /* empty function */
}

/* 80C53144-80C531C8 000FC4 0084+00 1/1 0/0 0/0 .text            __ct__8dCcD_SphFv */
// dCcD_Sph::dCcD_Sph() {
extern "C" void __ct__8dCcD_SphFv() {
    // NONMATCHING
}

/* 80C531C8-80C53210 001048 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
// cM3dGSph::~cM3dGSph() {
extern "C" void __dt__8cM3dGSphFv() {
    // NONMATCHING
}

/* 80C53210-80C53258 001090 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
// cM3dGAab::~cM3dGAab() {
extern "C" void __dt__8cM3dGAabFv() {
    // NONMATCHING
}

/* 80C53258-80C532B4 0010D8 005C+00 1/0 0/0 0/0 .text            __dt__10dCcD_GSttsFv */
// dCcD_GStts::~dCcD_GStts() {
extern "C" void __dt__10dCcD_GSttsFv() {
    // NONMATCHING
}

/* 80C532B4-80C532FC 001134 0048+00 1/0 0/0 0/0 .text            __dt__10cCcD_GSttsFv */
// cCcD_GStts::~cCcD_GStts() {
extern "C" void __dt__10cCcD_GSttsFv() {
    // NONMATCHING
}

/* 80C533B0-80C533B0 0000AC 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
