/**
 * @file d_a_passer_mng.cpp
 * 
*/

#include "d/actor/d_a_passer_mng.h"
#include "dol2asm.h"


//
// Forward References:
//

extern "C" static void daPasserMng_Execute__FP13daPasserMng_c();
extern "C" void execute__13daPasserMng_cFv();
extern "C" void getPasserParam__13daPasserMng_cFv();
extern "C" void getLuggageParamHigh__13daPasserMng_cFUl();
extern "C" static bool daPasserMng_IsDelete__FP13daPasserMng_c();
extern "C" static void daPasserMng_Delete__FP13daPasserMng_c();
extern "C" static void daPasserMng_Create__FP10fopAc_ac_c();
extern "C" void create__13daPasserMng_cFv();
extern "C" void create_init__13daPasserMng_cFv();
extern "C" void func_80D46B9C(void* _this, int, int);
extern "C" void* mGroupTbl__13daPasserMng_c[4];

//
// External References:
//

extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_SearchByID__FUiPP10fopAc_ac_c();
extern "C" void fopAcM_createChild__FsUiUlPC4cXyziPC5csXyzPC4cXyzScPFPv_i();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void dPath_GetPnt__FPC5dPathi();
extern "C" void dPath_GetRoomPath__Fii();
extern "C" void dKy_getdaytime_hour__Fv();
extern "C" void dKy_getdaytime_minute__Fv();
extern "C" void dKy_getDarktime_hour__Fv();
extern "C" void dKy_getDarktime_minute__Fv();
extern "C" void dKy_getDarktime_week__Fv();
extern "C" void dKy_get_dayofweek__Fv();
extern "C" void dKy_darkworld_check__Fv();
extern "C" void __ct__5csXyzFsss();
extern "C" void cM_rndF__Ff();
extern "C" void cLib_targetAngleY__FRC3VecRC3Vec();
extern "C" void* __nwa__FUl();
extern "C" void __dla__FPv();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_29();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_29();
extern "C" u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];

//
// Declarations:
//

/* 80D45718-80D45738 000078 0020+00 1/0 0/0 0/0 .text daPasserMng_Execute__FP13daPasserMng_c */
static void daPasserMng_Execute(daPasserMng_c* param_0) {
    // NONMATCHING
}

/* 80D45738-80D4597C 000098 0244+00 1/1 0/0 0/0 .text            execute__13daPasserMng_cFv */
void daPasserMng_c::execute() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D46C20-80D46C40 000000 0020+00 1/0 0/0 0/0 .rodata          groupA */
SECTION_RODATA static u8 const groupA[32] = {
    0x07, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x04, 0x50, 0x00, 0x00, 0x06, 0x01, 0x00, 0x00, 0x07,
    0x01, 0x00, 0x00, 0x05, 0x01, 0x00, 0x00, 0x1B, 0x01, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x1D,
};
COMPILER_STRIP_GATE(0x80D46C20, &groupA);

/* 80D46C40-80D46C64 000020 0024+00 1/0 0/0 0/0 .rodata          groupB */
SECTION_RODATA static u8 const groupB[36] = {
    0x08, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x10, 0x10, 0x00, 0x00, 0x11,
    0x11, 0x00, 0x00, 0x12, 0x10, 0x00, 0x00, 0x13, 0x40, 0x00, 0x00, 0x09,
    0x40, 0x00, 0x00, 0x08, 0x50, 0x00, 0x00, 0x0A, 0x01, 0x00, 0x00, 0x0B,
};
COMPILER_STRIP_GATE(0x80D46C40, &groupB);

/* 80D46C64-80D46C88 000044 0024+00 1/0 0/0 0/0 .rodata          groupC */
SECTION_RODATA static u8 const groupC[36] = {
    0x08, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x01,
    0x50, 0x00, 0x00, 0x02, 0x01, 0x00, 0x00, 0x03, 0x21, 0x00, 0x00, 0x17,
    0x10, 0x00, 0x00, 0x18, 0x01, 0x00, 0x00, 0x19, 0x10, 0x00, 0x00, 0x1A,
};
COMPILER_STRIP_GATE(0x80D46C64, &groupC);

/* 80D46C88-80D46CA8 000068 0020+00 1/0 0/0 0/0 .rodata          groupD */
SECTION_RODATA static u8 const groupD[32] = {
    0x07, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x14, 0x21, 0x00, 0x00, 0x15, 0x00, 0x00, 0x00, 0x16,
    0x11, 0x00, 0x00, 0x0C, 0x50, 0x00, 0x00, 0x0E, 0x40, 0x00, 0x00, 0x0F, 0x01, 0x00, 0x00, 0x0D,
};
COMPILER_STRIP_GATE(0x80D46C88, &groupD);

/* 80D46CB0-80D46CC0 -00001 0010+00 1/1 0/0 0/0 .data            mGroupTbl__13daPasserMng_c */
SECTION_DATA void* daPasserMng_c::mGroupTbl[4] = {
    (void*)&groupA,
    (void*)&groupB,
    (void*)&groupC,
    (void*)&groupD,
};

/* 80D46CC0-80D46D38 -00001 0078+00 1/1 0/0 0/0 .data            @4134 */
SECTION_DATA static void* lit_4134[30] = {
    (void*)(((char*)getPasserParam__13daPasserMng_cFv) + 0x168),
    (void*)(((char*)getPasserParam__13daPasserMng_cFv) + 0x168),
    (void*)(((char*)getPasserParam__13daPasserMng_cFv) + 0x184),
    (void*)(((char*)getPasserParam__13daPasserMng_cFv) + 0x1CC),
    (void*)(((char*)getPasserParam__13daPasserMng_cFv) + 0x200),
    (void*)(((char*)getPasserParam__13daPasserMng_cFv) + 0x200),
    (void*)(((char*)getPasserParam__13daPasserMng_cFv) + 0x248),
    (void*)(((char*)getPasserParam__13daPasserMng_cFv) + 0x27C),
    (void*)(((char*)getPasserParam__13daPasserMng_cFv) + 0x184),
    (void*)(((char*)getPasserParam__13daPasserMng_cFv) + 0x184),
    (void*)(((char*)getPasserParam__13daPasserMng_cFv) + 0x184),
    (void*)(((char*)getPasserParam__13daPasserMng_cFv) + 0x1CC),
    (void*)(((char*)getPasserParam__13daPasserMng_cFv) + 0x200),
    (void*)(((char*)getPasserParam__13daPasserMng_cFv) + 0x200),
    (void*)(((char*)getPasserParam__13daPasserMng_cFv) + 0x248),
    (void*)(((char*)getPasserParam__13daPasserMng_cFv) + 0x184),
    (void*)(((char*)getPasserParam__13daPasserMng_cFv) + 0x2B0),
    (void*)(((char*)getPasserParam__13daPasserMng_cFv) + 0x2F8),
    (void*)(((char*)getPasserParam__13daPasserMng_cFv) + 0x340),
    (void*)(((char*)getPasserParam__13daPasserMng_cFv) + 0x394),
    (void*)(((char*)getPasserParam__13daPasserMng_cFv) + 0x3C8),
    (void*)(((char*)getPasserParam__13daPasserMng_cFv) + 0x3FC),
    (void*)(((char*)getPasserParam__13daPasserMng_cFv) + 0x430),
    (void*)(((char*)getPasserParam__13daPasserMng_cFv) + 0x2B0),
    (void*)(((char*)getPasserParam__13daPasserMng_cFv) + 0x2F8),
    (void*)(((char*)getPasserParam__13daPasserMng_cFv) + 0x340),
    (void*)(((char*)getPasserParam__13daPasserMng_cFv) + 0x394),
    (void*)(((char*)getPasserParam__13daPasserMng_cFv) + 0x3C8),
    (void*)(((char*)getPasserParam__13daPasserMng_cFv) + 0x3FC),
    (void*)(((char*)getPasserParam__13daPasserMng_cFv) + 0x430),
};

/* 80D4597C-80D45E14 0002DC 0498+00 3/2 0/0 0/0 .text            getPasserParam__13daPasserMng_cFv
 */
void daPasserMng_c::getPasserParam() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D46D38-80D46DB0 -00001 0078+00 1/1 0/0 0/0 .data            @4305 */
SECTION_DATA static void* lit_4305[30] = {
    (void*)(((char*)getLuggageParamHigh__13daPasserMng_cFUl) + 0x34),
    (void*)(((char*)getLuggageParamHigh__13daPasserMng_cFUl) + 0x34),
    (void*)(((char*)getLuggageParamHigh__13daPasserMng_cFUl) + 0x50),
    (void*)(((char*)getLuggageParamHigh__13daPasserMng_cFUl) + 0x110),
    (void*)(((char*)getLuggageParamHigh__13daPasserMng_cFUl) + 0x1B0),
    (void*)(((char*)getLuggageParamHigh__13daPasserMng_cFUl) + 0x1B0),
    (void*)(((char*)getLuggageParamHigh__13daPasserMng_cFUl) + 0x27C),
    (void*)(((char*)getLuggageParamHigh__13daPasserMng_cFUl) + 0x31C),
    (void*)(((char*)getLuggageParamHigh__13daPasserMng_cFUl) + 0x50),
    (void*)(((char*)getLuggageParamHigh__13daPasserMng_cFUl) + 0x50),
    (void*)(((char*)getLuggageParamHigh__13daPasserMng_cFUl) + 0x50),
    (void*)(((char*)getLuggageParamHigh__13daPasserMng_cFUl) + 0x110),
    (void*)(((char*)getLuggageParamHigh__13daPasserMng_cFUl) + 0x1B0),
    (void*)(((char*)getLuggageParamHigh__13daPasserMng_cFUl) + 0x1B0),
    (void*)(((char*)getLuggageParamHigh__13daPasserMng_cFUl) + 0x27C),
    (void*)(((char*)getLuggageParamHigh__13daPasserMng_cFUl) + 0x50),
    (void*)(((char*)getLuggageParamHigh__13daPasserMng_cFUl) + 0x3BC),
    (void*)(((char*)getLuggageParamHigh__13daPasserMng_cFUl) + 0x488),
    (void*)(((char*)getLuggageParamHigh__13daPasserMng_cFUl) + 0x548),
    (void*)(((char*)getLuggageParamHigh__13daPasserMng_cFUl) + 0x620),
    (void*)(((char*)getLuggageParamHigh__13daPasserMng_cFUl) + 0x6C0),
    (void*)(((char*)getLuggageParamHigh__13daPasserMng_cFUl) + 0x760),
    (void*)(((char*)getLuggageParamHigh__13daPasserMng_cFUl) + 0x814),
    (void*)(((char*)getLuggageParamHigh__13daPasserMng_cFUl) + 0x3BC),
    (void*)(((char*)getLuggageParamHigh__13daPasserMng_cFUl) + 0x488),
    (void*)(((char*)getLuggageParamHigh__13daPasserMng_cFUl) + 0x548),
    (void*)(((char*)getLuggageParamHigh__13daPasserMng_cFUl) + 0x620),
    (void*)(((char*)getLuggageParamHigh__13daPasserMng_cFUl) + 0x6C0),
    (void*)(((char*)getLuggageParamHigh__13daPasserMng_cFUl) + 0x760),
    (void*)(((char*)getLuggageParamHigh__13daPasserMng_cFUl) + 0x814),
};

/* 80D45E14-80D466FC 000774 08E8+00 2/1 0/0 0/0 .text getLuggageParamHigh__13daPasserMng_cFUl */
void daPasserMng_c::getLuggageParamHigh(u32 param_0) {
    // NONMATCHING
}

/* 80D466FC-80D46704 00105C 0008+00 1/0 0/0 0/0 .text daPasserMng_IsDelete__FP13daPasserMng_c */
static bool daPasserMng_IsDelete(daPasserMng_c* param_0) {
    return true;
}

/* 80D46704-80D46748 001064 0044+00 1/0 0/0 0/0 .text daPasserMng_Delete__FP13daPasserMng_c */
static void daPasserMng_Delete(daPasserMng_c* param_0) {
    // NONMATCHING
}

/* 80D46748-80D46768 0010A8 0020+00 1/0 0/0 0/0 .text            daPasserMng_Create__FP10fopAc_ac_c
 */
static void daPasserMng_Create(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 80D46768-80D467C0 0010C8 0058+00 1/1 0/0 0/0 .text            create__13daPasserMng_cFv */
void daPasserMng_c::create() {
    // NONMATCHING
}

/* 80D467C0-80D46B9C 001120 03DC+00 1/1 0/0 0/0 .text            create_init__13daPasserMng_cFv */
void daPasserMng_c::create_init() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D46CA8-80D46CB0 000088 0008+00 1/1 0/0 0/0 .rodata          @4430 */
SECTION_RODATA static u8 const lit_4430[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80D46CA8, &lit_4430);

/* 80D46B9C-80D46C18 0014FC 007C+00 3/3 0/0 0/0 .text            cLib_getRndValue<i>__Fii */
extern "C" void func_80D46B9C(void* _this, int param_0, int param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D46DB0-80D46DD0 -00001 0020+00 1/0 0/0 0/0 .data            l_daPasserMng_Method */
static actor_method_class l_daPasserMng_Method = {
    (process_method_func)daPasserMng_Create__FP10fopAc_ac_c,
    (process_method_func)daPasserMng_Delete__FP13daPasserMng_c,
    (process_method_func)daPasserMng_Execute__FP13daPasserMng_c,
    (process_method_func)daPasserMng_IsDelete__FP13daPasserMng_c,
};

/* 80D46DD0-80D46E00 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_PASSER_MNG */
extern actor_process_profile_definition g_profile_PASSER_MNG = {
  fpcLy_CURRENT_e,       // mLayerID
  7,                     // mListID
  fpcPi_CURRENT_e,       // mListPrio
  PROC_PASSER_MNG,       // mProcName
  &g_fpcLf_Method.base, // sub_method
  sizeof(daPasserMng_c), // mSize
  0,                     // mSizeOther
  0,                     // mParameters
  &g_fopAc_Method.base,  // sub_method
  405,                   // mPriority
  &l_daPasserMng_Method, // sub_method
  0x00040100,            // mStatus
  fopAc_ACTOR_e,         // mActorType
  fopAc_CULLBOX_0_e,     // cullType
};
