//
// Generated By: dol2asm
// Translation Unit: d_a_obj_avalanche
//

#include "rel/d/a/obj/d_a_obj_avalanche/d_a_obj_avalanche.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct request_of_phase_process_class {};

struct J3DAnmTransform {};

struct J3DModelData {};

struct mDoExt_bckAnm {
    /* 8000D7DC */ void init(J3DAnmTransform*, int, int, f32, s16, s16, bool);
    /* 8000D9CC */ void entry(J3DModelData*, f32);
};

struct mDoExt_baseAnm {
    /* 8000D428 */ void play();
};

struct fopAc_ac_c {};

struct daObjAvalanche_c {
    /* 80BA6ED8 */ void initBaseMtx();
    /* 80BA6F14 */ void setBaseMtx();
    /* 80BA6FC8 */ void Create();
    /* 80BA7178 */ void CreateHeap();
    /* 80BA7370 */ void create1st();
    /* 80BA73F4 */ void Execute(f32 (**)[3][4]);
    /* 80BA7440 */ void checkCollapse();
    /* 80BA75A4 */ void move();
    /* 80BA7618 */ void event_proc_call();
    /* 80BA76D4 */ void actionWait();
    /* 80BA773C */ void actionOrderEvent();
    /* 80BA7804 */ void actionEvent();
    /* 80BA7888 */ void actionDead();
    /* 80BA788C */ void demoProc();
    /* 80BA7A50 */ void setEffect();
    /* 80BA7AE8 */ void Draw();
    /* 80BA7BA0 */ void Delete();
};

struct dSv_info_c {
    /* 80035200 */ void onSwitch(int, int);
    /* 80035360 */ void isSwitch(int, int) const;
};

struct Vec {};

struct cXyz {
    /* 80266B34 */ void operator-(Vec const&) const;
};

struct dKy_tevstr_c {};

struct dScnKy_env_light_c {
    /* 801A37C4 */ void settingTevStruct(int, cXyz*, dKy_tevstr_c*);
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct dPa_levelEcallBack {};

struct csXyz {
    /* 802673F4 */ csXyz(s16, s16, s16);
};

struct _GXColor {};

struct dPa_control_c {
    /* 8004CA90 */ void set(u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*, cXyz const*,
                            u8, dPa_levelEcallBack*, s8, _GXColor const*, _GXColor const*,
                            cXyz const*, f32);
};

struct dEvt_control_c {
    /* 80042468 */ void reset();
};

struct dEvent_manager_c {
    /* 80047758 */ void getEventIdx(fopAc_ac_c*, char const*, u8);
    /* 80047A78 */ void endCheck(s16);
    /* 80047B1C */ void getMyStaffId(char const*, fopAc_ac_c*, int);
    /* 80047D4C */ void getIsAddvance(int);
    /* 80047E10 */ void getMyActIdx(int, char const* const*, int, int, int);
    /* 800480EC */ void getMySubstanceP(int, char const*, int);
    /* 8004817C */ void cutEnd(int);
};

struct dBgW_Base {};

struct dBgW {
    /* 8007B970 */ dBgW();
    /* 8007B9C0 */ void Move();
};

struct cBgS_PolyInfo {};

struct dBgS_MoveBgActor {
    /* 80078624 */ dBgS_MoveBgActor();
    /* 800786B0 */ bool IsDelete();
    /* 800786B8 */ bool ToFore();
    /* 800786C0 */ bool ToBack();
    /* 800787BC */ void MoveBGCreate(char const*, int,
                                     void (*)(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*,
                                              csXyz*, csXyz*),
                                     u32, f32 (*)[3][4]);
    /* 800788DC */ void MoveBGDelete();
    /* 80078950 */ void MoveBGExecute();
};

struct dBgS {
    /* 80074A08 */ void Regist(dBgW_Base*, fopAc_ac_c*);
};

struct cBgW_BgId {
    /* 802681D4 */ void ChkUsed() const;
};

struct cBgD_t {};

struct cBgW {
    /* 80079F38 */ void Set(cBgD_t*, u32, f32 (*)[3][4]);
};

struct cBgS {
    /* 80074250 */ void Release(dBgW_Base*);
};

struct JAISoundID {};

struct Z2SeMgr {
    /* 802AB984 */ void seStart(JAISoundID, Vec const*, u32, s8, f32, f32, f32, f32, u8);
};

struct J3DModel {};

struct J3DFrameCtrl {
    /* 803283FC */ void init(s16);
    /* 80BA7328 */ ~J3DFrameCtrl();
};

//
// Forward References:
//

static void daObjAvalanche_create1st(daObjAvalanche_c*);
static void daObjAvalanche_MoveBGDelete(daObjAvalanche_c*);
static void daObjAvalanche_MoveBGExecute(daObjAvalanche_c*);
static void daObjAvalanche_MoveBGDraw(daObjAvalanche_c*);
static void cLib_calcTimer__template0(u8*);

extern "C" void initBaseMtx__16daObjAvalanche_cFv();
extern "C" void setBaseMtx__16daObjAvalanche_cFv();
extern "C" void Create__16daObjAvalanche_cFv();
extern "C" void CreateHeap__16daObjAvalanche_cFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" void create1st__16daObjAvalanche_cFv();
extern "C" void Execute__16daObjAvalanche_cFPPA3_A4_f();
extern "C" void checkCollapse__16daObjAvalanche_cFv();
extern "C" void move__16daObjAvalanche_cFv();
extern "C" void event_proc_call__16daObjAvalanche_cFv();
extern "C" void actionWait__16daObjAvalanche_cFv();
extern "C" void actionOrderEvent__16daObjAvalanche_cFv();
extern "C" void actionEvent__16daObjAvalanche_cFv();
extern "C" void actionDead__16daObjAvalanche_cFv();
extern "C" void demoProc__16daObjAvalanche_cFv();
extern "C" void setEffect__16daObjAvalanche_cFv();
extern "C" void Draw__16daObjAvalanche_cFv();
extern "C" void Delete__16daObjAvalanche_cFv();
extern "C" static void daObjAvalanche_create1st__FP16daObjAvalanche_c();
extern "C" static void daObjAvalanche_MoveBGDelete__FP16daObjAvalanche_c();
extern "C" static void daObjAvalanche_MoveBGExecute__FP16daObjAvalanche_c();
extern "C" static void daObjAvalanche_MoveBGDraw__FP16daObjAvalanche_c();
extern "C" static void func_80BA7CD8();
extern "C" extern u32 lit_1787[1 + 4 /* padding */];
extern "C" extern void* g_profile_Obj_Avalanche[12];

//
// External References:
//

void mDoMtx_YrotM(f32 (*)[4], s16);
void mDoExt_modelUpdateDL(J3DModel*);
void mDoExt_J3DModel__create(J3DModelData*, u32, u32);
void fopAcM_setCullSizeBox(fopAc_ac_c*, f32, f32, f32, f32, f32, f32);
void fopAcM_orderOtherEventId(fopAc_ac_c*, s16, u8, u16, u16, u16);
void dComIfG_resLoad(request_of_phase_process_class*, char const*);
void dComIfG_resDelete(request_of_phase_process_class*, char const*);
void dComIfGp_getReverb(int);
void dBgS_MoveBGProc_Trans(dBgW*, void*, cBgS_PolyInfo const&, bool, cXyz*, csXyz*, csXyz*);
void cLib_chaseF(f32*, f32, f32);
void* operator new(u32);
void operator delete(void*);

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_bckAnmFP15J3DAnmTransformiifssb();
extern "C" void entry__13mDoExt_bckAnmFP12J3DModelDataf();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void fopAcM_orderOtherEventId__FP10fopAc_ac_csUcUsUsUs();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void getEventIdx__16dEvent_manager_cFP10fopAc_ac_cPCcUc();
extern "C" void endCheck__16dEvent_manager_cFs();
extern "C" void getMyStaffId__16dEvent_manager_cFPCcP10fopAc_ac_ci();
extern "C" void getIsAddvance__16dEvent_manager_cFi();
extern "C" void getMyActIdx__16dEvent_manager_cFiPCPCciii();
extern "C" void getMySubstanceP__16dEvent_manager_cFiPCci();
extern "C" void cutEnd__16dEvent_manager_cFi();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void Regist__4dBgSFP9dBgW_BaseP10fopAc_ac_c();
extern "C" void dBgS_MoveBGProc_Trans__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void Set__4cBgWFP6cBgD_tUlPA3_A4_f();
extern "C" void __ct__4dBgWFv();
extern "C" void Move__4dBgWFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __ct__5csXyzFsss();
extern "C" void ChkUsed__9cBgW_BgIdCFv();
extern "C" void cLib_chaseF__FPfff();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void PSMTXCopy();
extern "C" void PSMTXTrans();
extern "C" void PSMTXMultVec();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_27();
extern "C" void _savegpr_29();
extern "C" void _restgpr_27();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopAc_Method[8];
extern "C" extern void* g_fpcLf_Method[5 + 1 /* padding */];
extern "C" extern u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" extern u8 j3dSys[284];
extern "C" extern u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" extern u8 data_80BA7EA0[4];

//
// Declarations:
//

/* 80BA6ED8-80BA6F14 003C+00 s=1 e=0 z=0  None .text      initBaseMtx__16daObjAvalanche_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjAvalanche_c::initBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_avalanche/d_a_obj_avalanche/initBaseMtx__16daObjAvalanche_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BA7CFC-80BA7D04 0008+00 s=1 e=0 z=0  None .rodata    l_dzb */
SECTION_RODATA static u8 const l_dzb[8] = {
    0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x00, 0x0C,
};

/* 80BA7D04-80BA7D1C 0018+00 s=1 e=0 z=0  None .rodata    l_check_pos */
SECTION_RODATA static u8 const l_check_pos[24] = {
    0xC3, 0x96, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x43, 0x96, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x96, 0x00, 0x00,
};

/* 80BA7D1C-80BA7D20 0004+00 s=5 e=0 z=0  None .rodata    @3663 */
SECTION_RODATA static u8 const lit_3663[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80BA6F14-80BA6FC8 00B4+00 s=3 e=0 z=0  None .text      setBaseMtx__16daObjAvalanche_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjAvalanche_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_avalanche/d_a_obj_avalanche/setBaseMtx__16daObjAvalanche_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BA7D20-80BA7D24 0004+00 s=1 e=0 z=0  None .rodata    @3716 */
SECTION_RODATA static u32 const lit_3716 = 0xC3C80000;

/* 80BA7D24-80BA7D2C 0008+00 s=1 e=0 z=0  None .rodata    @3718 */
SECTION_RODATA static u8 const lit_3718[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};

/* 80BA7D2C-80BA7D30 0004+00 s=3 e=0 z=0  None .rodata    @3762 */
SECTION_RODATA static u32 const lit_3762 = 0x3F800000;

/* 80BA7D30-80BA7D34 0004+00 s=1 e=0 z=0  None .rodata    @3834 */
SECTION_RODATA static u32 const lit_3834 = 0x43960000;

/* 80BA7D34-80BA7D38 0004+00 s=1 e=0 z=0  None .rodata    @3846 */
SECTION_RODATA static u32 const lit_3846 = 0x42200000;

/* 80BA7D38-80BA7D3C 0004+00 s=1 e=0 z=0  None .rodata    @3964 */
SECTION_RODATA static u32 const lit_3964 = 0xBF800000;

/* 80BA7D3C-80BA7D70 0034+00 s=5 e=0 z=0  None .rodata    None */
SECTION_RODATA static u8 const struct_80BA7D3C[52] = {
    /* 80BA7D3C 0007 stringBase_80BA7D3C @stringBase0 */
    0x56,
    0x5F,
    0x59,
    0x75,
    0x6B,
    0x69,
    0x00,
    /* 80BA7D43 000E data_80BA7D43 None */
    0x53,
    0x4E,
    0x4F,
    0x57,
    0x5F,
    0x43,
    0x4F,
    0x4C,
    0x4C,
    0x41,
    0x50,
    0x53,
    0x45,
    0x00,
    /* 80BA7D51 0008 data_80BA7D51 None */
    0x4F,
    0x62,
    0x6A,
    0x5F,
    0x61,
    0x76,
    0x61,
    0x00,
    /* 80BA7D59 0005 data_80BA7D59 None */
    0x57,
    0x41,
    0x49,
    0x54,
    0x00,
    /* 80BA7D5E 0012 data_80BA7D5E None */
    0x43,
    0x4F,
    0x4C,
    0x4C,
    0x41,
    0x50,
    0x53,
    0x45,
    0x00,
    0x54,
    0x69,
    0x6D,
    0x65,
    0x72,
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80BA7D70-80BA7D7C 000C+00 s=2 e=0 z=0  None .data      cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80BA7D7C-80BA7D90 0004+10 s=0 e=0 z=0  None .data      @1787 */
SECTION_DATA u32 lit_1787[1 + 4 /* padding */] = {
    0x02000201,
    /* padding */
    0x40080000,
    0x00000000,
    0x3FE00000,
    0x00000000,
};

/* 80BA7D90-80BA7D94 0004+00 s=4 e=0 z=0  None .data      l_arcName */
SECTION_DATA static void* l_arcName = (void*)(((char*)&struct_80BA7D3C) + 0x0) /* @stringBase0 */;

/* 80BA7D94-80BA7D98 0004+00 s=1 e=0 z=0  None .data      l_evName */
SECTION_DATA static void* l_evName = (void*)(((char*)&struct_80BA7D3C) + 0x7) /* None */;

/* 80BA7D98-80BA7D9C 0004+00 s=1 e=0 z=0  None .data      l_staffName */
SECTION_DATA static void* l_staffName = (void*)(((char*)&struct_80BA7D3C) + 0x15) /* None */;

/* 80BA7D9C-80BA7DB4 0018+00 s=1 e=0 z=0  None .data      l_cull_box */
SECTION_DATA static u8 l_cull_box[24] = {
    0xC3, 0xFA, 0x00, 0x00, 0xC3, 0xFA, 0x00, 0x00, 0xC4, 0x2F, 0x00, 0x00,
    0x43, 0xFA, 0x00, 0x00, 0x44, 0x7A, 0x00, 0x00, 0x44, 0x2F, 0x00, 0x00,
};

/* 80BA6FC8-80BA7178 01B0+00 s=1 e=0 z=0  None .text      Create__16daObjAvalanche_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjAvalanche_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_avalanche/d_a_obj_avalanche/Create__16daObjAvalanche_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BA7DB4-80BA7DC0 000C+00 s=1 e=0 z=0  None .data      @3851 */
SECTION_DATA static void* lit_3851[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionWait__16daObjAvalanche_cFv,
};

/* 80BA7DC0-80BA7DCC 000C+00 s=1 e=0 z=0  None .data      @3852 */
SECTION_DATA static void* lit_3852[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionOrderEvent__16daObjAvalanche_cFv,
};

/* 80BA7DCC-80BA7DD8 000C+00 s=1 e=0 z=0  None .data      @3853 */
SECTION_DATA static void* lit_3853[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionEvent__16daObjAvalanche_cFv,
};

/* 80BA7DD8-80BA7DE4 000C+00 s=1 e=0 z=0  None .data      @3854 */
SECTION_DATA static void* lit_3854[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionDead__16daObjAvalanche_cFv,
};

/* 80BA7DE4-80BA7E14 0030+00 s=1 e=0 z=0  None .data      l_func$3850 */
SECTION_DATA static u8 l_func[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80BA7E14-80BA7E1C 0008+00 s=1 e=0 z=0  None .data      action_table$3910 */
SECTION_DATA static void* action_table[2] = {
    (void*)(((char*)&struct_80BA7D3C) + 0x1D) /* None */,
    (void*)(((char*)&struct_80BA7D3C) + 0x22) /* None */,
};

/* 80BA7E1C-80BA7E3C 0020+00 s=1 e=0 z=0  None .data      daObjAvalanche_METHODS */
SECTION_DATA static void* daObjAvalanche_METHODS[8] = {
    (void*)daObjAvalanche_create1st__FP16daObjAvalanche_c,
    (void*)daObjAvalanche_MoveBGDelete__FP16daObjAvalanche_c,
    (void*)daObjAvalanche_MoveBGExecute__FP16daObjAvalanche_c,
    (void*)NULL,
    (void*)daObjAvalanche_MoveBGDraw__FP16daObjAvalanche_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80BA7E3C-80BA7E6C 0030+00 s=0 e=0 z=1  None .data      g_profile_Obj_Avalanche */
SECTION_DATA void* g_profile_Obj_Avalanche[12] = {
    (void*)0xFFFFFFFD, (void*)0x0003FFFD,
    (void*)0x00AD0000, (void*)&g_fpcLf_Method,
    (void*)0x000005F4, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x028F0000, (void*)&daObjAvalanche_METHODS,
    (void*)0x00040000, (void*)0x000E0000,
};

/* 80BA7E6C-80BA7E78 000C+00 s=2 e=0 z=0  None .data      __vt__12J3DFrameCtrl */
SECTION_DATA static void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80BA7178-80BA7328 01B0+00 s=1 e=0 z=0  None .text      CreateHeap__16daObjAvalanche_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjAvalanche_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_avalanche/d_a_obj_avalanche/CreateHeap__16daObjAvalanche_cFv.s"
}
#pragma pop

/* 80BA7328-80BA7370 0048+00 s=1 e=0 z=0  None .text      __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DFrameCtrl::~J3DFrameCtrl() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_avalanche/d_a_obj_avalanche/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* 80BA7370-80BA73F4 0084+00 s=1 e=0 z=0  None .text      create1st__16daObjAvalanche_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjAvalanche_c::create1st() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_avalanche/d_a_obj_avalanche/create1st__16daObjAvalanche_cFv.s"
}
#pragma pop

/* 80BA73F4-80BA7440 004C+00 s=1 e=0 z=0  None .text      Execute__16daObjAvalanche_cFPPA3_A4_f */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjAvalanche_c::Execute(f32 (**param_0)[3][4]) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_avalanche/d_a_obj_avalanche/Execute__16daObjAvalanche_cFPPA3_A4_f.s"
}
#pragma pop

/* 80BA7440-80BA75A4 0164+00 s=1 e=0 z=0  None .text      checkCollapse__16daObjAvalanche_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjAvalanche_c::checkCollapse() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_avalanche/d_a_obj_avalanche/checkCollapse__16daObjAvalanche_cFv.s"
}
#pragma pop

/* 80BA75A4-80BA7618 0074+00 s=1 e=0 z=0  None .text      move__16daObjAvalanche_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjAvalanche_c::move() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_avalanche/d_a_obj_avalanche/move__16daObjAvalanche_cFv.s"
}
#pragma pop

/* 80BA7618-80BA76D4 00BC+00 s=1 e=0 z=0  None .text      event_proc_call__16daObjAvalanche_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjAvalanche_c::event_proc_call() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_avalanche/d_a_obj_avalanche/event_proc_call__16daObjAvalanche_cFv.s"
}
#pragma pop

/* 80BA76D4-80BA773C 0068+00 s=1 e=0 z=0  None .text      actionWait__16daObjAvalanche_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjAvalanche_c::actionWait() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_avalanche/d_a_obj_avalanche/actionWait__16daObjAvalanche_cFv.s"
}
#pragma pop

/* 80BA773C-80BA7804 00C8+00 s=1 e=0 z=0  None .text      actionOrderEvent__16daObjAvalanche_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjAvalanche_c::actionOrderEvent() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_avalanche/d_a_obj_avalanche/actionOrderEvent__16daObjAvalanche_cFv.s"
}
#pragma pop

/* 80BA7804-80BA7888 0084+00 s=1 e=0 z=0  None .text      actionEvent__16daObjAvalanche_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjAvalanche_c::actionEvent() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_avalanche/d_a_obj_avalanche/actionEvent__16daObjAvalanche_cFv.s"
}
#pragma pop

/* 80BA7888-80BA788C 0004+00 s=1 e=0 z=0  None .text      actionDead__16daObjAvalanche_cFv */
void daObjAvalanche_c::actionDead() {
    /* empty function */
}

/* 80BA788C-80BA7A50 01C4+00 s=2 e=0 z=0  None .text      demoProc__16daObjAvalanche_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjAvalanche_c::demoProc() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_avalanche/d_a_obj_avalanche/demoProc__16daObjAvalanche_cFv.s"
}
#pragma pop

/* 80BA7A50-80BA7AE8 0098+00 s=1 e=0 z=0  None .text      setEffect__16daObjAvalanche_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjAvalanche_c::setEffect() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_avalanche/d_a_obj_avalanche/setEffect__16daObjAvalanche_cFv.s"
}
#pragma pop

/* 80BA7AE8-80BA7BA0 00B8+00 s=1 e=0 z=0  None .text      Draw__16daObjAvalanche_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjAvalanche_c::Draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_avalanche/d_a_obj_avalanche/Draw__16daObjAvalanche_cFv.s"
}
#pragma pop

/* 80BA7BA0-80BA7C0C 006C+00 s=1 e=0 z=0  None .text      Delete__16daObjAvalanche_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjAvalanche_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_avalanche/d_a_obj_avalanche/Delete__16daObjAvalanche_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BA7E78-80BA7EA0 0028+00 s=1 e=0 z=0  None .data      __vt__16daObjAvalanche_c */
SECTION_DATA static void* __vt__16daObjAvalanche_c[10] = {
    (void*)NULL,
    (void*)NULL,
    (void*)CreateHeap__16daObjAvalanche_cFv,
    (void*)Create__16daObjAvalanche_cFv,
    (void*)Execute__16daObjAvalanche_cFPPA3_A4_f,
    (void*)Draw__16daObjAvalanche_cFv,
    (void*)Delete__16daObjAvalanche_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80BA7C0C-80BA7C6C 0060+00 s=1 e=0 z=0  None .text
 * daObjAvalanche_create1st__FP16daObjAvalanche_c               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjAvalanche_create1st(daObjAvalanche_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_avalanche/d_a_obj_avalanche/daObjAvalanche_create1st__FP16daObjAvalanche_c.s"
}
#pragma pop

/* 80BA7C6C-80BA7C8C 0020+00 s=1 e=0 z=0  None .text
 * daObjAvalanche_MoveBGDelete__FP16daObjAvalanche_c            */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjAvalanche_MoveBGDelete(daObjAvalanche_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_avalanche/d_a_obj_avalanche/daObjAvalanche_MoveBGDelete__FP16daObjAvalanche_c.s"
}
#pragma pop

/* 80BA7C8C-80BA7CAC 0020+00 s=1 e=0 z=0  None .text
 * daObjAvalanche_MoveBGExecute__FP16daObjAvalanche_c           */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjAvalanche_MoveBGExecute(daObjAvalanche_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_avalanche/d_a_obj_avalanche/daObjAvalanche_MoveBGExecute__FP16daObjAvalanche_c.s"
}
#pragma pop

/* 80BA7CAC-80BA7CD8 002C+00 s=1 e=0 z=0  None .text
 * daObjAvalanche_MoveBGDraw__FP16daObjAvalanche_c              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void daObjAvalanche_MoveBGDraw(daObjAvalanche_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_avalanche/d_a_obj_avalanche/daObjAvalanche_MoveBGDraw__FP16daObjAvalanche_c.s"
}
#pragma pop

/* 80BA7CD8-80BA7CF4 001C+00 s=1 e=0 z=0  None .text      cLib_calcTimer<Uc>__FPUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm static void cLib_calcTimer__template0(u8* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_avalanche/d_a_obj_avalanche/func_80BA7CD8.s"
}
#pragma pop