/**
 * @file d_a_obj_warp_obrg.cpp
 * 
*/

#include "d/actor/d_a_obj_warp_obrg.h"
#include "dol2asm.h"



//
// Forward References:
//

extern "C" void initBaseMtx__15daObjWarpOBrg_cFv();
extern "C" void setBaseMtx__15daObjWarpOBrg_cFv();
extern "C" void Create__15daObjWarpOBrg_cFv();
extern "C" void CreateHeap__15daObjWarpOBrg_cFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" void create1st__15daObjWarpOBrg_cFv();
extern "C" void Execute__15daObjWarpOBrg_cFPPA3_A4_f();
extern "C" void event_proc_call__15daObjWarpOBrg_cFv();
extern "C" void actionWait__15daObjWarpOBrg_cFv();
extern "C" void actionOrderEvent__15daObjWarpOBrg_cFv();
extern "C" void actionTalkEvent__15daObjWarpOBrg_cFv();
extern "C" void actionWarpEvent__15daObjWarpOBrg_cFv();
extern "C" void actionOrderEventDst__15daObjWarpOBrg_cFv();
extern "C" void actionWarpEventDst__15daObjWarpOBrg_cFv();
extern "C" void actionDead__15daObjWarpOBrg_cFv();
extern "C" void demoProc__15daObjWarpOBrg_cFv();
extern "C" void checkTalkDistance__15daObjWarpOBrg_cFv();
extern "C" void calcMidnaWaitPos__15daObjWarpOBrg_cFv();
extern "C" void Draw__15daObjWarpOBrg_cFv();
extern "C" void Delete__15daObjWarpOBrg_cFv();
extern "C" static void daObjWarpOBrg_create1st__FP15daObjWarpOBrg_c();
extern "C" static void daObjWarpOBrg_MoveBGDelete__FP15daObjWarpOBrg_c();
extern "C" static void daObjWarpOBrg_MoveBGExecute__FP15daObjWarpOBrg_c();
extern "C" static void daObjWarpOBrg_MoveBGDraw__FP15daObjWarpOBrg_c();
extern "C" void func_80D2B7D4(void* _this, u8*);
extern "C" extern char const* const d_a_obj_warp_obrg__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss();
extern "C" void entry__13mDoExt_btkAnmFP16J3DMaterialTablef();
extern "C" void init__13mDoExt_bckAnmFP15J3DAnmTransformiifssb();
extern "C" void entry__13mDoExt_bckAnmFP12J3DModelDataf();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void fopAcM_orderOtherEventId__FP10fopAc_ac_csUcUsUsUs();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_TargetWarpPt_set__FUc();
extern "C" void dComIfGp_TransportWarp_check__Fv();
extern "C" void onEventBit__11dSv_event_cFUs();
extern "C" void offEventBit__11dSv_event_cFUs();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void dEv_noFinishSkipProc__FPvi();
extern "C" void setSkipProc__14dEvt_control_cFPvPFPvi_ii();
extern "C" void setPt2__14dEvt_control_cFPv();
extern "C" void getEventIdx__16dEvent_manager_cFP10fopAc_ac_cPCcUc();
extern "C" void startCheck__16dEvent_manager_cFs();
extern "C" void endCheck__16dEvent_manager_cFs();
extern "C" void getMyStaffId__16dEvent_manager_cFPCcP10fopAc_ac_ci();
extern "C" void getIsAddvance__16dEvent_manager_cFi();
extern "C" void getMyActIdx__16dEvent_manager_cFiPCPCciii();
extern "C" void getMySubstanceP__16dEvent_manager_cFiPCci();
extern "C" void cutEnd__16dEvent_manager_cFi();
extern "C" void getRunEventName__16dEvent_manager_cFv();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void request__10dAttHint_cFP10fopAc_ac_ci();
extern "C" void Release__4cBgSFP9dBgW_Base();
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
extern "C" void __ct__10dMsgFlow_cFv();
extern "C" void init__10dMsgFlow_cFP10fopAc_ac_ciiPP10fopAc_ac_c();
extern "C" void doFlow__10dMsgFlow_cFP10fopAc_ac_cPP10fopAc_ac_ci();
extern "C" void getEventId__10dMsgFlow_cFPi();
extern "C" void ChkUsed__9cBgW_BgIdCFv();
extern "C" void cLib_targetAngleY__FPC3VecPC3Vec();
extern "C" void cLib_targetAngleX__FPC4cXyzPC4cXyz();
extern "C" void func_802807E0();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void checkPass__12J3DFrameCtrlFf();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_19();
extern "C" void _savegpr_26();
extern "C" void _savegpr_28();
extern "C" void _restgpr_19();
extern "C" void _restgpr_26();
extern "C" void _restgpr_28();
extern "C" u8 const tempBitLabels__20dSv_event_tmp_flag_c[370 + 2 /* padding */];
extern "C" u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_meter2_info[248];
extern "C" u8 m_midnaActor__9daPy_py_c[4];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" extern u8 data_80D2BA88[4];

//
// Declarations:
//

/* 80D299B8-80D29A00 000078 0048+00 1/1 0/0 0/0 .text            initBaseMtx__15daObjWarpOBrg_cFv */
void daObjWarpOBrg_c::initBaseMtx() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D2B7F8-80D2B800 000000 0008+00 6/6 0/0 0/0 .rodata          l_bmd_idx */
SECTION_RODATA static u8 const l_bmd_idx[8] = {
    0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x0B,
};
COMPILER_STRIP_GATE(0x80D2B7F8, &l_bmd_idx);

/* 80D2B800-80D2B808 000008 0008+00 0/1 0/0 0/0 .rodata          l_dzb_idx */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const l_dzb_idx[8] = {
    0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x13,
};
COMPILER_STRIP_GATE(0x80D2B800, &l_dzb_idx);
#pragma pop

/* 80D2B808-80D2B810 000010 0008+00 1/3 0/0 0/0 .rodata          l_bck_idx */
SECTION_RODATA static u8 const l_bck_idx[8] = {
    0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x07,
};
COMPILER_STRIP_GATE(0x80D2B808, &l_bck_idx);

/* 80D2B8AC-80D2B8AC 0000B4 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80D2B8AC = "Obj_obrg";
#pragma pop

/* 80D2B914-80D2B920 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80D2B920-80D2B934 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 80D2B934-80D2B938 -00001 0004+00 6/6 0/0 0/0 .data            l_arcName */
SECTION_DATA static void* l_arcName = (void*)&d_a_obj_warp_obrg__stringBase0;

/* 80D29A00-80D29ACC 0000C0 00CC+00 1/1 0/0 0/0 .text            setBaseMtx__15daObjWarpOBrg_cFv */
void daObjWarpOBrg_c::setBaseMtx() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D2B8AC-80D2B8AC 0000B4 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80D2B8B5 = "PORTAL_WARP_OBRIDGE";
SECTION_DEAD static char const* const stringBase_80D2B8C9 = "PORTAL_WARP_OUT_OBRIDGE";
#pragma pop

/* 80D2B938-80D2B940 -00001 0008+00 1/1 0/0 0/0 .data            l_portal_warp_name */
SECTION_DATA static void* l_portal_warp_name[2] = {
    (void*)(((char*)&d_a_obj_warp_obrg__stringBase0) + 0x9),
    (void*)(((char*)&d_a_obj_warp_obrg__stringBase0) + 0x1D),
};

/* 80D29ACC-80D29BB4 00018C 00E8+00 1/0 0/0 0/0 .text            Create__15daObjWarpOBrg_cFv */
void daObjWarpOBrg_c::Create() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D2B810-80D2B818 000018 0008+00 0/1 0/0 0/0 .rodata          l_btk_idx */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const l_btk_idx[8] = {
    0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x0F,
};
COMPILER_STRIP_GATE(0x80D2B810, &l_btk_idx);
#pragma pop

/* 80D2B818-80D2B824 000020 000A+02 0/1 0/0 0/0 .rodata          l_beam_eff */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const l_beam_eff[10 + 2 /* padding */] = {
    0x8B,
    0x4B,
    0x8B,
    0x4C,
    0x8B,
    0x4D,
    0x8B,
    0x4E,
    0x8B,
    0x53,
    /* padding */
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80D2B818, &l_beam_eff);
#pragma pop

/* 80D2B824-80D2B830 00002C 000A+02 0/1 0/0 0/0 .rodata          l_disapp_eff */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const l_disapp_eff[10 + 2 /* padding */] = {
    0x8B,
    0x38,
    0x8B,
    0x39,
    0x8B,
    0x3A,
    0x8B,
    0x3B,
    0x8B,
    0x35,
    /* padding */
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80D2B824, &l_disapp_eff);
#pragma pop

/* 80D2B830-80D2B838 000038 0006+02 0/1 0/0 0/0 .rodata          l_app_eff */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const l_app_eff[6 + 2 /* padding */] = {
    0x8B,
    0x34,
    0x8B,
    0x36,
    0x8B,
    0x37,
    /* padding */
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80D2B830, &l_app_eff);
#pragma pop

/* 80D2B838-80D2B844 000040 000C+00 1/1 0/0 0/0 .rodata          l_midna_wait_offset */
SECTION_RODATA static u8 const l_midna_wait_offset[12] = {
    0x42, 0xC8, 0x00, 0x00, 0xC4, 0x9E, 0x20, 0x00, 0xC4, 0x3E, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80D2B838, &l_midna_wait_offset);

/* 80D2B844-80D2B848 00004C 0004+00 0/5 0/0 0/0 .rodata          @3834 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3834[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80D2B844, &lit_3834);
#pragma pop

/* 80D2B848-80D2B850 000050 0008+00 0/1 0/0 0/0 .rodata          @3836 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3836[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80D2B848, &lit_3836);
#pragma pop

/* 80D2B8AC-80D2B8AC 0000B4 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80D2B8E1 = "WarpOB1";
SECTION_DEAD static char const* const stringBase_80D2B8E9 = "WarpOB2";
SECTION_DEAD static char const* const stringBase_80D2B8F1 = "WAIT";
SECTION_DEAD static char const* const stringBase_80D2B8F6 = "OBJ_DISAPP";
SECTION_DEAD static char const* const stringBase_80D2B901 = "OBJ_APP";
SECTION_DEAD static char const* const stringBase_80D2B909 = "BEAM";
#pragma pop

/* 80D2B940-80D2B948 -00001 0008+00 3/3 0/0 0/0 .data            l_staff_name */
SECTION_DATA static void* l_staff_name[2] = {
    (void*)(((char*)&d_a_obj_warp_obrg__stringBase0) + 0x35),
    (void*)(((char*)&d_a_obj_warp_obrg__stringBase0) + 0x3D),
};

/* 80D2B948-80D2B954 -00001 000C+00 0/1 0/0 0/0 .data            @3894 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3894[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionWait__15daObjWarpOBrg_cFv,
};
#pragma pop

/* 80D2B954-80D2B960 -00001 000C+00 0/1 0/0 0/0 .data            @3895 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3895[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionOrderEvent__15daObjWarpOBrg_cFv,
};
#pragma pop

/* 80D2B960-80D2B96C -00001 000C+00 0/1 0/0 0/0 .data            @3896 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3896[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionTalkEvent__15daObjWarpOBrg_cFv,
};
#pragma pop

/* 80D2B96C-80D2B978 -00001 000C+00 0/1 0/0 0/0 .data            @3897 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3897[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionWarpEvent__15daObjWarpOBrg_cFv,
};
#pragma pop

/* 80D2B978-80D2B984 -00001 000C+00 0/1 0/0 0/0 .data            @3898 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3898[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionDead__15daObjWarpOBrg_cFv,
};
#pragma pop

/* 80D2B984-80D2B990 -00001 000C+00 0/1 0/0 0/0 .data            @3899 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3899[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionOrderEventDst__15daObjWarpOBrg_cFv,
};
#pragma pop

/* 80D2B990-80D2B99C -00001 000C+00 0/1 0/0 0/0 .data            @3900 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3900[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionWarpEventDst__15daObjWarpOBrg_cFv,
};
#pragma pop

/* 80D2B99C-80D2B9F0 000088 0054+00 0/1 0/0 0/0 .data            l_func$3893 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_func[84] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80D2B9F0-80D2BA00 -00001 0010+00 1/1 0/0 0/0 .data            action_table$4165 */
SECTION_DATA static void* action_table[4] = {
    (void*)(((char*)&d_a_obj_warp_obrg__stringBase0) + 0x45),
    (void*)(((char*)&d_a_obj_warp_obrg__stringBase0) + 0x4A),
    (void*)(((char*)&d_a_obj_warp_obrg__stringBase0) + 0x55),
    (void*)(((char*)&d_a_obj_warp_obrg__stringBase0) + 0x5D),
};

/* 80D2BA00-80D2BA20 -00001 0020+00 1/0 0/0 0/0 .data            daObjWarpOBrg_METHODS */
static actor_method_class daObjWarpOBrg_METHODS = {
    (process_method_func)daObjWarpOBrg_create1st__FP15daObjWarpOBrg_c,
    (process_method_func)daObjWarpOBrg_MoveBGDelete__FP15daObjWarpOBrg_c,
    (process_method_func)daObjWarpOBrg_MoveBGExecute__FP15daObjWarpOBrg_c,
    0,
    (process_method_func)daObjWarpOBrg_MoveBGDraw__FP15daObjWarpOBrg_c,
};

/* 80D2BA20-80D2BA50 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_OrdinBrg */
extern actor_process_profile_definition g_profile_Obj_OrdinBrg = {
  fpcLy_CURRENT_e,         // mLayerID
  3,                       // mListID
  fpcPi_CURRENT_e,         // mListPrio
  PROC_Obj_OrdinBrg,       // mProcName
  &g_fpcLf_Method.base,   // sub_method
  sizeof(daObjWarpOBrg_c), // mSize
  0,                       // mSizeOther
  0,                       // mParameters
  &g_fopAc_Method.base,    // sub_method
  531,                     // mPriority
  &daObjWarpOBrg_METHODS,  // sub_method
  0x00040000,              // mStatus
  fopAc_ENV_e,             // mActorType
  fopAc_CULLBOX_CUSTOM_e,  // cullType
};

/* 80D2BA50-80D2BA5C 00013C 000C+00 2/2 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80D29BB4-80D29E34 000274 0280+00 1/0 0/0 0/0 .text            CreateHeap__15daObjWarpOBrg_cFv */
void daObjWarpOBrg_c::CreateHeap() {
    // NONMATCHING
}

/* 80D29E34-80D29E7C 0004F4 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
// J3DFrameCtrl::~J3DFrameCtrl() {
extern "C" void __dt__12J3DFrameCtrlFv() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D2B850-80D2B854 000058 0004+00 0/1 0/0 0/0 .rodata          @3882 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3882 = 10.0f;
COMPILER_STRIP_GATE(0x80D2B850, &lit_3882);
#pragma pop

/* 80D2B854-80D2B858 00005C 0004+00 0/2 0/0 0/0 .rodata          @3883 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3883 = 550.0f;
COMPILER_STRIP_GATE(0x80D2B854, &lit_3883);
#pragma pop

/* 80D2B858-80D2B860 000060 0008+00 0/1 0/0 0/0 .rodata          @3885 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3885[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80D2B858, &lit_3885);
#pragma pop

/* 80D29E7C-80D2A008 00053C 018C+00 1/1 0/0 0/0 .text            create1st__15daObjWarpOBrg_cFv */
void daObjWarpOBrg_c::create1st() {
    // NONMATCHING
}

/* 80D2A008-80D2A04C 0006C8 0044+00 1/0 0/0 0/0 .text Execute__15daObjWarpOBrg_cFPPA3_A4_f */
void daObjWarpOBrg_c::Execute(f32 (**param_0)[3][4]) {
    // NONMATCHING
}

/* 80D2A04C-80D2A194 00070C 0148+00 1/1 0/0 0/0 .text event_proc_call__15daObjWarpOBrg_cFv */
void daObjWarpOBrg_c::event_proc_call() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D2B860-80D2B868 000068 0008+00 0/4 0/0 0/0 .rodata          @3999 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3999[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80D2B860, &lit_3999);
#pragma pop

/* 80D2B868-80D2B870 000070 0008+00 0/4 0/0 0/0 .rodata          @4000 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4000[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80D2B868, &lit_4000);
#pragma pop

/* 80D2B870-80D2B878 000078 0008+00 0/4 0/0 0/0 .rodata          @4001 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4001[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80D2B870, &lit_4001);
#pragma pop

/* 80D2B878-80D2B87C 000080 0004+00 0/2 0/0 0/0 .rodata          @4002 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4002 = 5.0f;
COMPILER_STRIP_GATE(0x80D2B878, &lit_4002);
#pragma pop

/* 80D2B87C-80D2B880 000084 0004+00 0/2 0/0 0/0 .rodata          @4003 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4003 = 1.0f;
COMPILER_STRIP_GATE(0x80D2B87C, &lit_4003);
#pragma pop

/* 80D2B880-80D2B884 000088 0004+00 0/2 0/0 0/0 .rodata          @4004 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4004 = -1.0f;
COMPILER_STRIP_GATE(0x80D2B880, &lit_4004);
#pragma pop

/* 80D2A194-80D2A4CC 000854 0338+00 1/0 0/0 0/0 .text            actionWait__15daObjWarpOBrg_cFv */
void daObjWarpOBrg_c::actionWait() {
    // NONMATCHING
}

/* 80D2A4CC-80D2A740 000B8C 0274+00 1/0 0/0 0/0 .text actionOrderEvent__15daObjWarpOBrg_cFv */
void daObjWarpOBrg_c::actionOrderEvent() {
    // NONMATCHING
}

/* 80D2A740-80D2A7C4 000E00 0084+00 1/0 0/0 0/0 .text actionTalkEvent__15daObjWarpOBrg_cFv */
void daObjWarpOBrg_c::actionTalkEvent() {
    // NONMATCHING
}

/* 80D2A7C4-80D2A93C 000E84 0178+00 1/0 0/0 0/0 .text actionWarpEvent__15daObjWarpOBrg_cFv */
void daObjWarpOBrg_c::actionWarpEvent() {
    // NONMATCHING
}

/* 80D2A93C-80D2A9E4 000FFC 00A8+00 1/0 0/0 0/0 .text actionOrderEventDst__15daObjWarpOBrg_cFv */
void daObjWarpOBrg_c::actionOrderEventDst() {
    // NONMATCHING
}

/* 80D2A9E4-80D2AA30 0010A4 004C+00 1/0 0/0 0/0 .text actionWarpEventDst__15daObjWarpOBrg_cFv */
void daObjWarpOBrg_c::actionWarpEventDst() {
    // NONMATCHING
}

/* 80D2AA30-80D2AA34 0010F0 0004+00 1/0 0/0 0/0 .text            actionDead__15daObjWarpOBrg_cFv */
void daObjWarpOBrg_c::actionDead() {
    /* empty function */
}

/* ############################################################################################## */
/* 80D2B884-80D2B888 00008C 0004+00 0/1 0/0 0/0 .rodata          @4599 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4599 = -10.0f;
COMPILER_STRIP_GATE(0x80D2B884, &lit_4599);
#pragma pop

/* 80D2B888-80D2B88C 000090 0004+00 0/1 0/0 0/0 .rodata          @4600 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4600 = -65.0f;
COMPILER_STRIP_GATE(0x80D2B888, &lit_4600);
#pragma pop

/* 80D2B88C-80D2B890 000094 0004+00 0/1 0/0 0/0 .rodata          @4601 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4601 = 55.0f;
COMPILER_STRIP_GATE(0x80D2B88C, &lit_4601);
#pragma pop

/* 80D2B890-80D2B894 000098 0004+00 0/1 0/0 0/0 .rodata          @4602 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4602 = -500.0f;
COMPILER_STRIP_GATE(0x80D2B890, &lit_4602);
#pragma pop

/* 80D2B894-80D2B898 00009C 0004+00 0/1 0/0 0/0 .rodata          @4603 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4603 = 1.0f / 100.0f;
COMPILER_STRIP_GATE(0x80D2B894, &lit_4603);
#pragma pop

/* 80D2B898-80D2B89C 0000A0 0004+00 0/1 0/0 0/0 .rodata          @4604 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4604 = 40.0f;
COMPILER_STRIP_GATE(0x80D2B898, &lit_4604);
#pragma pop

/* 80D2B89C-80D2B8A0 0000A4 0004+00 0/1 0/0 0/0 .rodata          @4605 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4605 = 367.0f;
COMPILER_STRIP_GATE(0x80D2B89C, &lit_4605);
#pragma pop

/* 80D2B8A0-80D2B8A4 0000A8 0004+00 0/1 0/0 0/0 .rodata          @4606 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4606 = 120.0f;
COMPILER_STRIP_GATE(0x80D2B8A0, &lit_4606);
#pragma pop

/* 80D2B8A4-80D2B8A8 0000AC 0004+00 0/1 0/0 0/0 .rodata          @4607 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4607 = 247.0f;
COMPILER_STRIP_GATE(0x80D2B8A4, &lit_4607);
#pragma pop

/* 80D2B8AC-80D2B8AC 0000B4 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80D2B90E = "Timer";
#pragma pop

/* 80D2AA34-80D2B3BC 0010F4 0988+00 2/2 0/0 0/0 .text            demoProc__15daObjWarpOBrg_cFv */
void daObjWarpOBrg_c::demoProc() {
    // NONMATCHING
}

/* 80D2B3BC-80D2B534 001A7C 0178+00 2/2 0/0 0/0 .text checkTalkDistance__15daObjWarpOBrg_cFv */
void daObjWarpOBrg_c::checkTalkDistance() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D2B8A8-80D2B8AC 0000B0 0004+00 1/1 0/0 0/0 .rodata          @4666 */
SECTION_RODATA static f32 const lit_4666 = 250.0f;
COMPILER_STRIP_GATE(0x80D2B8A8, &lit_4666);

/* 80D2B534-80D2B5C8 001BF4 0094+00 1/1 0/0 0/0 .text calcMidnaWaitPos__15daObjWarpOBrg_cFv */
void daObjWarpOBrg_c::calcMidnaWaitPos() {
    // NONMATCHING
}

/* 80D2B5C8-80D2B6C0 001C88 00F8+00 1/0 0/0 0/0 .text            Draw__15daObjWarpOBrg_cFv */
void daObjWarpOBrg_c::Draw() {
    // NONMATCHING
}

/* 80D2B6C0-80D2B6F4 001D80 0034+00 1/0 0/0 0/0 .text            Delete__15daObjWarpOBrg_cFv */
void daObjWarpOBrg_c::Delete() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80D2BA5C-80D2BA84 000148 0028+00 1/1 0/0 0/0 .data            __vt__15daObjWarpOBrg_c */
SECTION_DATA extern void* __vt__15daObjWarpOBrg_c[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__15daObjWarpOBrg_cFv,
    (void*)Create__15daObjWarpOBrg_cFv,
    (void*)Execute__15daObjWarpOBrg_cFPPA3_A4_f,
    (void*)Draw__15daObjWarpOBrg_cFv,
    (void*)Delete__15daObjWarpOBrg_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80D2B6F4-80D2B768 001DB4 0074+00 1/0 0/0 0/0 .text daObjWarpOBrg_create1st__FP15daObjWarpOBrg_c
 */
static void daObjWarpOBrg_create1st(daObjWarpOBrg_c* param_0) {
    // NONMATCHING
}

/* 80D2B768-80D2B788 001E28 0020+00 1/0 0/0 0/0 .text
 * daObjWarpOBrg_MoveBGDelete__FP15daObjWarpOBrg_c              */
static void daObjWarpOBrg_MoveBGDelete(daObjWarpOBrg_c* param_0) {
    // NONMATCHING
}

/* 80D2B788-80D2B7A8 001E48 0020+00 1/0 0/0 0/0 .text
 * daObjWarpOBrg_MoveBGExecute__FP15daObjWarpOBrg_c             */
static void daObjWarpOBrg_MoveBGExecute(daObjWarpOBrg_c* param_0) {
    // NONMATCHING
}

/* 80D2B7A8-80D2B7D4 001E68 002C+00 1/0 0/0 0/0 .text
 * daObjWarpOBrg_MoveBGDraw__FP15daObjWarpOBrg_c                */
static void daObjWarpOBrg_MoveBGDraw(daObjWarpOBrg_c* param_0) {
    // NONMATCHING
}

/* 80D2B7D4-80D2B7F0 001E94 001C+00 1/1 0/0 0/0 .text            cLib_calcTimer<Uc>__FPUc */
extern "C" void func_80D2B7D4(void* _this, u8* param_0) {
    // NONMATCHING
}

/* 80D2B8AC-80D2B8AC 0000B4 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
