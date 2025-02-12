/**
 * @file d_a_grass.cpp
 * 
*/

#include "d/actor/d_a_grass.h"
#include "SSystem/SComponent/c_counter.h"
#include "SSystem/SComponent/c_math.h"
#include "d/d_com_inf_game.h"
#include "dol2asm.h"
#include "m_Do/m_Do_lib.h"
#include "string.h"
#include <dolphin/gd.h>

//
// Forward References:
//

extern "C" static void randam_addcol_set__FPs();
extern "C" void createGrass__9daGrass_cFv();
extern "C" void deleteGrass__9daGrass_cFv();
extern "C" void __dt__15dGrass_packet_cFv();
extern "C" void executeGrass__9daGrass_cFv();
extern "C" void drawGrass__9daGrass_cFv();
extern "C" void newGrassData__9daGrass_cFR4cXyziUcUcsUc();
extern "C" void createFlower__9daGrass_cFv();
extern "C" void deleteFlower__9daGrass_cFv();
extern "C" void __dt__16dFlower_packet_cFv();
extern "C" void executeFlower__9daGrass_cFv();
extern "C" void drawFlower__9daGrass_cFv();
extern "C" void newFlowerData__9daGrass_cFScR4cXyziScs();
extern "C" static void dGrass_Tex_Change__Fv();
extern "C" static void daGrass_create__FP9daGrass_c();
extern "C" void create__9daGrass_cFv();
extern "C" static void daGrass_Delete__FP9daGrass_c();
extern "C" static void daGrass_execute__FP9daGrass_c();
extern "C" static void daGrass_draw__FP9daGrass_c();
extern "C" void func_8051D7B4(void* _this, u8*);
extern "C" void __sinit_d_a_grass_cpp();
extern "C" void WorkCo__13dGrass_data_cFP10fopAc_ac_cUli();
extern "C" void WorkAt_NoCutAnim__13dGrass_data_cFP10fopAc_ac_cUliP15dCcMassS_HitInfP8cCcD_Obj();
extern "C" void
Direction_Set__13dGrass_data_cFP10fopAc_ac_cUliP15dCcMassS_HitInfP8cCcD_ObjP5csXyz();
extern "C" void WorkAt__13dGrass_data_cFP10fopAc_ac_cUliP15dCcMassS_HitInfUs();
extern "C" void __dt__5csXyzFv();
extern "C" void hitCheck__13dGrass_data_cFiUs();
extern "C" void __dt__15dCcMassS_HitInfFv();
extern "C" void newData__13dGrass_room_cFP13dGrass_data_c();
extern "C" void deleteData__13dGrass_room_cFv();
extern "C" void __ct__15dGrass_packet_cFv();
extern "C" void draw__15dGrass_packet_cFv();
extern "C" void calc__15dGrass_packet_cFv();
extern "C" static void checkGroundY__FR4cXyz();
extern "C" void update__15dGrass_packet_cFv();
extern "C" void setData__15dGrass_packet_cFP13dGrass_data_ciR4cXyziUcUcsUc();
extern "C" void newData__15dGrass_packet_cFR4cXyziUcUcsUc();
extern "C" void deleteRoom__15dGrass_packet_cFi();
extern "C" void newAnm__15dGrass_packet_cFv();
extern "C" void setAnm__15dGrass_packet_cFis();
extern "C" void getSwordTopPos__9daPy_py_cCFv();
extern "C" void __ct__13dGrass_room_cFv();
extern "C" void __ct__12dGrass_anm_cFv();
extern "C" void __dt__13dGrass_data_cFv();
extern "C" void __ct__13dGrass_data_cFv();
extern "C" void WorkCo__14dFlower_data_cFP10fopAc_ac_cUli();
extern "C" void deleteAnm__14dFlower_data_cFv();
extern "C" void WorkAt_NoCutAnim__14dFlower_data_cFP10fopAc_ac_cUliP15dCcMassS_HitInfP8cCcD_Obj();
extern "C" void WorkAt__14dFlower_data_cFP10fopAc_ac_cUliP15dCcMassS_HitInf();
extern "C" void hitCheck__14dFlower_data_cFP10fopAc_ac_ci();
extern "C" void newData__14dFlower_room_cFP14dFlower_data_c();
extern "C" void deleteData__14dFlower_room_cFv();
extern "C" void __ct__16dFlower_packet_cFv();
extern "C" void draw__16dFlower_packet_cFv();
extern "C" void calc__16dFlower_packet_cFv();
extern "C" static void flowerCheckGroundY__FR4cXyz();
extern "C" void update__16dFlower_packet_cFv();
extern "C" void setData__16dFlower_packet_cFP14dFlower_data_ciScR4cXyziScs();
extern "C" void newData__16dFlower_packet_cFScR4cXyziScs();
extern "C" void deleteRoom__16dFlower_packet_cFi();
extern "C" void newAnm__16dFlower_packet_cFv();
extern "C" void setAnm__16dFlower_packet_cFis();
extern "C" void __ct__14dFlower_room_cFv();
extern "C" void __ct__13dFlower_anm_cFv();
extern "C" void __dt__14dFlower_data_cFv();
extern "C" void __ct__14dFlower_data_cFv();
extern "C" extern char const* const d_a_grass__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_setStageLayer__FPv();
extern "C" void fopAcM_createItemFromTable__FPC4cXyziiiPC5csXyziPC4cXyzPfPfb();
extern "C" void gndCheck__11fopAcM_gc_cFPC4cXyz();
extern "C" void fopOvlpM_IsPeek__Fv();
extern "C" void getStatusRoomDt__20dStage_roomControl_cFi();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void dComIfGs_Grass_hide_Set__FSc();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void dKyw_get_wind_vec__Fv();
extern "C" void dKyw_get_wind_pow__Fv();
extern "C" void GroundCross__4cBgSFP11cBgS_GndChk();
extern "C" void __ct__11dBgS_GndChkFv();
extern "C" void __dt__11dBgS_GndChkFv();
extern "C" void dCcD_GetGObjInf__FP8cCcD_Obj();
extern "C" void SetAttr__12dCcMassS_MngFffUcUc();
extern "C" void Prepare__12dCcMassS_MngFv();
extern "C" void Chk__12dCcMassS_MngFP4cXyzPP10fopAc_ac_cP15dCcMassS_HitInf();
extern "C" void MassClear__4dCcSFv();
extern "C" void checkNowWolfEyeUp__9daPy_py_cFv();
extern "C" void getDaytime__18dScnKy_env_light_cFv();
extern "C" void dKy_setLight_nowroom_grass__Fcf();
extern "C" void dKy_setLight_again__Fv();
extern "C" void dKy_Global_amb_set__FP12dKy_tevstr_c();
extern "C" void dKy_GxFog_tevstr_set__FP12dKy_tevstr_c();
extern "C" void dKy_GfFog_tevstr_set__FP12dKy_tevstr_c();
extern "C" void dKy_get_dayofweek__Fv();
extern "C" void dKy_SunMoon_Light_Check__Fv();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __ct__5csXyzFsss();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rnd__Fv();
extern "C" void cM_rndF__Ff();
extern "C" void SetPos__11cBgS_GndChkFPC4cXyz();
extern "C" void cLib_addCalcAngleS__FPsssss();
extern "C" void cLib_chaseAngleS__FPsss();
extern "C" void calcViewFrustum__11J3DUClipperFv();
extern "C" void clip__11J3DUClipperCFPA4_Cf3Vecf();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void GFSetTevColorS10__F11_GXTevRegID11_GXColorS10();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void reinitGX__6J3DSysFv();
extern "C" bool entry__9J3DPacketFP13J3DDrawBuffer();
extern "C" void entryImm__13J3DDrawBufferFP9J3DPacketUs();
extern "C" void __destroy_arr();
extern "C" void __construct_array();
extern "C" void _savegpr_18();
extern "C" void _savegpr_20();
extern "C" void _savegpr_22();
extern "C" void _savegpr_23();
extern "C" void _savegpr_25();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_18();
extern "C" void _restgpr_20();
extern "C" void _restgpr_22();
extern "C" void _restgpr_23();
extern "C" void _restgpr_25();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__9J3DPacket[5];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" u8 mClipper__14mDoLib_clipper[92];
extern "C" u8 mStatus__20dStage_roomControl_c[65792];
extern "C" u8 m_deleteRoom__15dGrass_packet_c[12];
extern "C" u8 m_deleteRoom__16dFlower_packet_c[12];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" f32 mSystemFar__14mDoLib_clipper;
extern "C" f32 mGroundY__11fopAcM_gc_c;
extern "C" u8 m_myObj__9daGrass_c[4];
extern "C" u8 m_grass__9daGrass_c[4];
extern "C" u8 m_flower__9daGrass_c[4];
extern "C" u8 mLight8EcallBack__13dPa_control_c[4];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" u8 sOldVcdVatCmd__8J3DShape[4];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80523028-8052302C 000000 0004+00 14/14 0/0 0/0 .rodata          @3999 */
SECTION_RODATA static f32 const lit_3999 = 3.0f / 5.0f;
COMPILER_STRIP_GATE(0x80523028, &lit_3999);

/* 8052302C-80523030 000004 0004+00 1/10 0/0 0/0 .rodata          @4000 */
SECTION_RODATA static u8 const lit_4000[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x8052302C, &lit_4000);

/* 80523030-80523034 000008 0004+00 0/1 0/0 0/0 .rodata          @4001 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4001 = 1600.0f;
COMPILER_STRIP_GATE(0x80523030, &lit_4001);
#pragma pop

/* 80523034-80523038 00000C 0004+00 0/5 0/0 0/0 .rodata          @4002 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4002 = 40.0f;
COMPILER_STRIP_GATE(0x80523034, &lit_4002);
#pragma pop

/* 80523038-8052303C 000010 0004+00 0/2 0/0 0/0 .rodata          @4003 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4003 = 65.0f;
COMPILER_STRIP_GATE(0x80523038, &lit_4003);
#pragma pop

/* 8052303C-80523040 000014 0004+00 0/3 0/0 0/0 .rodata          @4148 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4148 = 5.0f;
COMPILER_STRIP_GATE(0x8052303C, &lit_4148);
#pragma pop

/* 80523040-80523044 000018 0004+00 0/2 0/0 0/0 .rodata          @4149 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4149 = 9.0f / 10.0f;
COMPILER_STRIP_GATE(0x80523040, &lit_4149);
#pragma pop

/* 80523044-80523048 00001C 0004+00 0/3 0/0 0/0 .rodata          @4150 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4150 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x80523044, &lit_4150);
#pragma pop

/* 80523048-8052304C 000020 0004+00 0/1 0/0 0/0 .rodata          @4151 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4151 = 2.5f;
COMPILER_STRIP_GATE(0x80523048, &lit_4151);
#pragma pop

/* 8052304C-80523050 000024 0004+00 0/3 0/0 0/0 .rodata          @4152 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4152 = 0.5f;
COMPILER_STRIP_GATE(0x8052304C, &lit_4152);
#pragma pop

/* 80523050-80523054 000028 0004+00 0/1 0/0 0/0 .rodata          @4153 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4153 = 1.5f;
COMPILER_STRIP_GATE(0x80523050, &lit_4153);
#pragma pop

/* 80523054-80523058 00002C 0004+00 0/1 0/0 0/0 .rodata          @4154 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4154 = 1.0f / 20.0f;
COMPILER_STRIP_GATE(0x80523054, &lit_4154);
#pragma pop

/* 80523058-8052305C 000030 0004+00 0/1 0/0 0/0 .rodata          @4155 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4155 = 20.0f;
COMPILER_STRIP_GATE(0x80523058, &lit_4155);
#pragma pop

/* 8052305C-80523060 000034 0004+00 0/3 0/0 0/0 .rodata          @4156 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4156 = 3.0f / 10.0f;
COMPILER_STRIP_GATE(0x8052305C, &lit_4156);
#pragma pop

/* 80523060-80523068 000038 0008+00 0/9 0/0 0/0 .rodata          @4158 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4158[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80523060, &lit_4158);
#pragma pop

/* 80523068-80523070 000040 0008+00 0/2 0/0 0/0 .rodata          @4509 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4509[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80523068, &lit_4509);
#pragma pop

/* 80523070-80523078 000048 0008+00 0/2 0/0 0/0 .rodata          @4510 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4510[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80523070, &lit_4510);
#pragma pop

/* 80523078-80523080 000050 0008+00 0/2 0/0 0/0 .rodata          @4511 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4511[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80523078, &lit_4511);
#pragma pop

/* 80523080-80523084 000058 0004+00 0/2 0/0 0/0 .rodata          @4512 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4512 = 200.0f;
COMPILER_STRIP_GATE(0x80523080, &lit_4512);
#pragma pop

/* 80523084-80523088 00005C 0004+00 0/1 0/0 0/0 .rodata          @4513 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4513 = 158.0f;
COMPILER_STRIP_GATE(0x80523084, &lit_4513);
#pragma pop

/* 80523088-8052308C 000060 0004+00 0/2 0/0 0/0 .rodata          @4514 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4514 = 500.0f;
COMPILER_STRIP_GATE(0x80523088, &lit_4514);
#pragma pop

/* 8052308C-80523090 000064 0004+00 0/3 0/0 0/0 .rodata          @4515 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4515 = 25.0f;
COMPILER_STRIP_GATE(0x8052308C, &lit_4515);
#pragma pop

/* 80523090-80523094 000068 0004+00 1/8 0/0 0/0 .rodata          @4516 */
SECTION_RODATA static f32 const lit_4516 = 1.0f;
COMPILER_STRIP_GATE(0x80523090, &lit_4516);

/* 80523094-80523098 00006C 0004+00 1/3 0/0 0/0 .rodata          @4517 */
SECTION_RODATA static f32 const lit_4517 = -1.0f;
COMPILER_STRIP_GATE(0x80523094, &lit_4517);

/* 80523098-8052309C 000070 0004+00 2/3 0/0 0/0 .rodata          @4600 */
SECTION_RODATA static f32 const lit_4600 = 15.0f;
COMPILER_STRIP_GATE(0x80523098, &lit_4600);

/* 8052309C-805230A4 000074 0008+00 0/1 0/0 0/0 .rodata          @4656 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4656[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8052309C, &lit_4656);
#pragma pop

/* 805230A4-805230AC 00007C 0008+00 0/1 0/0 0/0 .rodata          @4657 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4657[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x805230A4, &lit_4657);
#pragma pop

/* 805230AC-805230B0 000084 0004+00 0/1 0/0 0/0 .rodata          @4835 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4835 = 90.0f;
COMPILER_STRIP_GATE(0x805230AC, &lit_4835);
#pragma pop

/* 805230B0-805230B4 000088 0004+00 0/1 0/0 0/0 .rodata          @4836 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4836 = 135.0f;
COMPILER_STRIP_GATE(0x805230B0, &lit_4836);
#pragma pop

/* 805230B4-805230B8 00008C 0004+00 0/1 0/0 0/0 .rodata          @4837 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4837 = 1.0f / 45.0f;
COMPILER_STRIP_GATE(0x805230B4, &lit_4837);
#pragma pop

/* 805230B8-805230BC 000090 0004+00 0/2 0/0 0/0 .rodata          @4838 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4838 = 100.0f;
COMPILER_STRIP_GATE(0x805230B8, &lit_4838);
#pragma pop

/* 805230BC-805230C0 000094 0004+00 0/1 0/0 0/0 .rodata          @4839 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4839 = 18.0f;
COMPILER_STRIP_GATE(0x805230BC, &lit_4839);
#pragma pop

/* 805230C0-805230C4 000098 0004+00 0/1 0/0 0/0 .rodata          @4840 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4840 = 225.0f;
COMPILER_STRIP_GATE(0x805230C0, &lit_4840);
#pragma pop

/* 805230C4-805230C8 00009C 0004+00 0/1 0/0 0/0 .rodata          @4841 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4841 = 1.0f / 90.0f;
COMPILER_STRIP_GATE(0x805230C4, &lit_4841);
#pragma pop

/* 805230C8-805230CC 0000A0 0004+00 0/1 0/0 0/0 .rodata          @4842 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4842 = 82.0f;
COMPILER_STRIP_GATE(0x805230C8, &lit_4842);
#pragma pop

/* 805230CC-805230D0 0000A4 0004+00 0/1 0/0 0/0 .rodata          @4843 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4843 = 270.0f;
COMPILER_STRIP_GATE(0x805230CC, &lit_4843);
#pragma pop

/* 805230D0-805230D4 0000A8 0004+00 0/1 0/0 0/0 .rodata          @4844 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4844 = 57.0f;
COMPILER_STRIP_GATE(0x805230D0, &lit_4844);
#pragma pop

/* 805230D4-805230D8 0000AC 0004+00 0/1 0/0 0/0 .rodata          @4845 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4845 = -25.0f;
COMPILER_STRIP_GATE(0x805230D4, &lit_4845);
#pragma pop

/* 805230D8-805230DC 0000B0 0004+00 0/1 0/0 0/0 .rodata          @4846 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4846 = 315.0f;
COMPILER_STRIP_GATE(0x805230D8, &lit_4846);
#pragma pop

/* 805230DC-805230E0 0000B4 0004+00 0/1 0/0 0/0 .rodata          @4847 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4847 = -18.0f;
COMPILER_STRIP_GATE(0x805230DC, &lit_4847);
#pragma pop

/* 805230E0-805230E4 0000B8 0004+00 0/2 0/0 0/0 .rodata          @4848 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4848 = 255.0f;
COMPILER_STRIP_GATE(0x805230E0, &lit_4848);
#pragma pop

/* 805230E4-805230E8 0000BC 0004+00 0/2 0/0 0/0 .rodata          @4849 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4849 = 4.0f;
COMPILER_STRIP_GATE(0x805230E4, &lit_4849);
#pragma pop

/* 805230E8-805230EC 0000C0 0004+00 0/1 0/0 0/0 .rodata          @4850 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4850 = 0x3B000000;
COMPILER_STRIP_GATE(0x805230E8, &lit_4850);
#pragma pop

/* 805230EC-805230F0 0000C4 0004+00 0/1 0/0 0/0 .rodata          @4851 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4851 = 11.0f / 10.0f;
COMPILER_STRIP_GATE(0x805230EC, &lit_4851);
#pragma pop

/* 805230F0-805230F8 0000C8 0004+04 0/2 0/0 0/0 .rodata          @4852 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4852[1 + 1 /* padding */] = {
    2000.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x805230F0, &lit_4852);
#pragma pop

/* 805230F8-80523100 0000D0 0008+00 0/2 0/0 0/0 .rodata          @4854 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4854[8] ALIGN_DECL(16) = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x805230F8, &lit_4854);
#pragma pop

/* 80523100-80523104 0000D8 0004+00 0/1 0/0 0/0 .rodata          @4996 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4996 = 9.0f / 100.0f;
COMPILER_STRIP_GATE(0x80523100, &lit_4996);
#pragma pop

/* 80523104-80523108 0000DC 0004+00 0/1 0/0 0/0 .rodata          @4997 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4997 = 1.0f / 100.0f;
COMPILER_STRIP_GATE(0x80523104, &lit_4997);
#pragma pop

/* 80523108-8052310C 0000E0 0004+00 0/1 0/0 0/0 .rodata          @4998 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4998 = 290.0f;
COMPILER_STRIP_GATE(0x80523108, &lit_4998);
#pragma pop

/* 8052310C-80523110 0000E4 0004+00 0/2 0/0 0/0 .rodata          @4999 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4999 = 2.0f;
COMPILER_STRIP_GATE(0x8052310C, &lit_4999);
#pragma pop

/* 80523110-80523114 0000E8 0004+00 0/1 0/0 0/0 .rodata          @5000 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5000 = 525.0f;
COMPILER_STRIP_GATE(0x80523110, &lit_5000);
#pragma pop

/* 80523114-80523118 0000EC 0004+00 0/1 0/0 0/0 .rodata          @5001 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5001 = 325.0f;
COMPILER_STRIP_GATE(0x80523114, &lit_5001);
#pragma pop

/* 80523118-8052311C 0000F0 0004+00 0/3 0/0 0/0 .rodata          @5002 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5002 = 7.0f / 10.0f;
COMPILER_STRIP_GATE(0x80523118, &lit_5002);
#pragma pop

/* 8052311C-80523120 0000F4 0004+00 0/1 0/0 0/0 .rodata          @5003 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_5003 = 0x3D800000;
COMPILER_STRIP_GATE(0x8052311C, &lit_5003);
#pragma pop

/* 80523120-80523124 0000F8 0004+00 0/1 0/0 0/0 .rodata          @5004 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5004 = -1.0f / 5.0f;
COMPILER_STRIP_GATE(0x80523120, &lit_5004);
#pragma pop

/* 80523124-80523128 0000FC 0004+00 0/2 0/0 0/0 .rodata          @5005 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5005 = 10.0f;
COMPILER_STRIP_GATE(0x80523124, &lit_5005);
#pragma pop

/* 80523128-8052312C 000100 0004+00 0/1 0/0 0/0 .rodata          @5006 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5006 = 8.0f / 5.0f;
COMPILER_STRIP_GATE(0x80523128, &lit_5006);
#pragma pop

/* 8052312C-80523130 000104 0004+00 0/1 0/0 0/0 .rodata          @5007 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5007 = 120.0f;
COMPILER_STRIP_GATE(0x8052312C, &lit_5007);
#pragma pop

/* 80523130-80523134 000108 0004+00 2/3 0/0 0/0 .rodata          @5022 */
SECTION_RODATA static f32 const lit_5022 = 50.0f;
COMPILER_STRIP_GATE(0x80523130, &lit_5022);

/* 80523134-80523138 00010C 0004+00 0/1 0/0 0/0 .rodata          @5142 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5142 = 18.0f / 11.0f;
COMPILER_STRIP_GATE(0x80523134, &lit_5142);
#pragma pop

/* 80523138-8052313C 000110 0004+00 0/2 0/0 0/0 .rodata          @5143 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5143 = 260.0f;
COMPILER_STRIP_GATE(0x80523138, &lit_5143);
#pragma pop

/* 8052313C-80523140 000114 0004+00 0/2 0/0 0/0 .rodata          @5144 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5144 = 4096.0f;
COMPILER_STRIP_GATE(0x8052313C, &lit_5144);
#pragma pop

/* 80523140-80523144 000118 0004+00 0/1 0/0 0/0 .rodata          @5145 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_5145 = 0x3ECCCCCC;
COMPILER_STRIP_GATE(0x80523140, &lit_5145);
#pragma pop

/* 80523144-80523148 00011C 0004+00 0/2 0/0 0/0 .rodata          @5146 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5146 = 4.0f / 5.0f;
COMPILER_STRIP_GATE(0x80523144, &lit_5146);
#pragma pop

/* 80523148-8052314C 000120 0004+00 0/1 0/0 0/0 .rodata          @5147 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5147 = 11.0f / 50.0f;
COMPILER_STRIP_GATE(0x80523148, &lit_5147);
#pragma pop

/* 8052314C-80523150 000124 0004+00 0/1 0/0 0/0 .rodata          @5148 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5148 = 162.0f;
COMPILER_STRIP_GATE(0x8052314C, &lit_5148);
#pragma pop

/* 80523150-80523154 000128 0004+00 0/1 0/0 0/0 .rodata          @5149 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5149 = 16.0f / 25.0f;
COMPILER_STRIP_GATE(0x80523150, &lit_5149);
#pragma pop

/* 80523154-80523158 00012C 0004+00 0/1 0/0 0/0 .rodata          @5150 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5150 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x80523154, &lit_5150);
#pragma pop

/* 80523158-8052315C 000130 0004+00 0/1 0/0 0/0 .rodata          @5151 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5151 = 3200.0f;
COMPILER_STRIP_GATE(0x80523158, &lit_5151);
#pragma pop

/* 8052315C-80523160 000134 0004+00 0/1 0/0 0/0 .rodata          @5261 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5261 = 900.0f;
COMPILER_STRIP_GATE(0x8052315C, &lit_5261);
#pragma pop

/* 80523160-80523164 000138 0004+00 0/2 0/0 0/0 .rodata          @5262 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5262 = 30.0f;
COMPILER_STRIP_GATE(0x80523160, &lit_5262);
#pragma pop

/* 80523164-80523168 00013C 0004+00 1/1 0/0 0/0 .rodata          @5352 */
SECTION_RODATA static f32 const lit_5352 = 220.0f;
COMPILER_STRIP_GATE(0x80523164, &lit_5352);

/* 80523168-8052316C 000140 0004+00 0/1 0/0 0/0 .rodata          @5781 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5781 = 180.0f;
COMPILER_STRIP_GATE(0x80523168, &lit_5781);
#pragma pop

/* 8052316C-80523170 000144 0004+00 0/1 0/0 0/0 .rodata          @5782 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5782 = 128.0f;
COMPILER_STRIP_GATE(0x8052316C, &lit_5782);
#pragma pop

/* 80523170-80523174 000148 0004+00 0/1 0/0 0/0 .rodata          @5783 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5783 = 150.0f;
COMPILER_STRIP_GATE(0x80523170, &lit_5783);
#pragma pop

/* 80523174-80523178 00014C 0004+00 0/1 0/0 0/0 .rodata          @5784 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5784 = 80.0f;
COMPILER_STRIP_GATE(0x80523174, &lit_5784);
#pragma pop

/* 80523178-8052317C 000150 0004+00 1/1 0/0 0/0 .rodata          @5839 */
SECTION_RODATA static f32 const lit_5839 = 60.0f;
COMPILER_STRIP_GATE(0x80523178, &lit_5839);

/* 8052317C-80523184 000154 0008+00 0/1 0/0 0/0 .rodata          @5916 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5916[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x8052317C, &lit_5916);
#pragma pop

/* 80523184-80523188 00015C 0004+00 0/0 0/0 0/0 .rodata          @5958 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_5958 = 0xFFFFFFFF;
COMPILER_STRIP_GATE(0x80523184, &lit_5958);
#pragma pop

/* 80523188-80523190 000160 0008+00 0/0 0/0 0/0 .rodata          @5961 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_5961[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80523188, &lit_5961);
#pragma pop

/* 80523190-80523194 000168 0004+00 0/0 0/0 0/0 .rodata          @6080 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_6080 = 0x3D000000;
COMPILER_STRIP_GATE(0x80523190, &lit_6080);
#pragma pop

/* 80523194-80523198 00016C 0004+00 0/0 0/0 0/0 .rodata          @6081 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6081 = -2.0f / 5.0f;
COMPILER_STRIP_GATE(0x80523194, &lit_6081);
#pragma pop

/* 80523198-8052319C 000170 0004+00 0/0 0/0 0/0 .rodata          @6082 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6082 = 6.0f;
COMPILER_STRIP_GATE(0x80523198, &lit_6082);
#pragma pop

/* 8052319C-805231A0 000174 0004+00 0/1 0/0 0/0 .rodata          @6165 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6165 = 1000.0f;
COMPILER_STRIP_GATE(0x8052319C, &lit_6165);
#pragma pop

/* 805231A0-805231A4 000178 0004+00 0/1 0/0 0/0 .rodata          @6166 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6166 = 160.0f;
COMPILER_STRIP_GATE(0x805231A0, &lit_6166);
#pragma pop

/* 805231A4-805231A8 00017C 0004+00 1/1 0/0 0/0 .rodata          @6182 */
SECTION_RODATA static f32 const lit_6182 = -1000000000.0f;
COMPILER_STRIP_GATE(0x805231A4, &lit_6182);

/* 805231A8-805231AC 000180 0004+00 1/1 0/0 0/0 .rodata          @6262 */
SECTION_RODATA static f32 const lit_6262 = 7.0f;
COMPILER_STRIP_GATE(0x805231A8, &lit_6262);

/* 805231AC-805231B0 000184 0004+00 0/1 0/0 0/0 .rodata          @6337 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6337 = 31.0f;
COMPILER_STRIP_GATE(0x805231AC, &lit_6337);
#pragma pop

/* 8051BD4C-8051BEFC 0000EC 01B0+00 1/1 0/0 0/0 .text            randam_addcol_set__FPs */
static void randam_addcol_set(s16* param_0) {
    s16 temp_r4 = *param_0;
    s16 var_r30 = temp_r4 & 0x1F;
    s16 var_r29 = (temp_r4 >> 5) & 0x1F;
    s16 var_r28 = (temp_r4 >> 10) & 0x1F;

    f32 temp_f31_2 = (0.2f + (0.8f * ((f32)var_r30 / 31.0f)));
    temp_f31_2 *= cM_rndF(10.0f);

    if (var_r30 != 0x1F) {
        var_r30 = ((f32)var_r30 - temp_f31_2);
        if (var_r30 < 0) {
            var_r30 = 0;
        }

        if (var_r30 > 0x1F) {
            var_r30 = 0x1F;
        }
    }

    if (var_r29 != 0x1F) {
        var_r29 = ((f32)var_r29 - temp_f31_2);
        if (var_r29 < 0) {
            var_r29 = 0;
        }

        if (var_r29 > 0x1F) {
            var_r29 = 0x1F;
        }
    }

    if (var_r28 != 0x1F) {
        var_r28 = ((f32)var_r28 - temp_f31_2);
        if (var_r28 < 0) {
            var_r28 = 0;
        }

        if (var_r28 > 0x1F) {
            var_r28 = 0x1F;
        }
    }
    s16 x = (((u16)var_r28 & 0x1f) << 5) | (var_r29 & ~0x3E0);
    *param_0 = ((x) << 5) | (var_r30 & 0x1F);
}


/* 8051BEFC-8051BF68 00029C 006C+00 1/1 0/0 0/0 .text            createGrass__9daGrass_cFv */
int daGrass_c::createGrass() {
    if (m_grass != NULL) {
        return 1;
    }

    m_grass = new dGrass_packet_c();
    if (m_grass == NULL) {
        return 0;
    }

    return 1;
}

/* 8051BF68-8051BFBC 000308 0054+00 1/1 0/0 0/0 .text            deleteGrass__9daGrass_cFv */
void daGrass_c::deleteGrass() {
    if (m_grass != NULL) {
        delete m_grass;
        m_grass = NULL;
    }
}

/* ############################################################################################## */
/* 80528854-80528880 -00001 002C+00 2/1 0/0 0/0 .bss             None */
extern "C" u8 struct_80528854[44];

/* 80528880-80528900 -00001 0080+00 2/1 0/0 0/0 .bss             None */
extern "C" u8 struct_80528880[128];

/* 80528900-80528914 -00001 0014+00 2/1 0/0 0/0 .bss             None */
extern "C" u8 struct_80528900[20];

/* 80528914-80528940 -00001 002C+00 2/1 0/0 0/0 .bss             None */
extern "C" u8 struct_80528914[44];

/* 80528940-805289A8 -00001 0068+00 2/1 0/0 0/0 .bss             None */
extern "C" u8 struct_80528940[104];

/* 805289A8-805289D2 0010E0 002A+00 2/1 0/0 0/0 .bss l_setType5$localstatic13$create__9daGrass_cFv
 */
extern "C" u8 data_805289A8[42];

/* 805231D8-805231E4 000000 000C+00 5/5 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 805231E4-805231F8 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 805231F8-805239F8 000020 0800+00 0/1 0/0 0/0 .data            l_M_kusa05_RGBATEX */
const u16 l_M_Hijiki00TEX__width = 31;
const u16 l_M_Hijiki00TEX__height = 31;
#include "assets/l_M_kusa05_RGBATEX.h"  // ALIGN 32

/* 805239F8-805241F8 000820 0800+00 0/1 0/0 0/0 .data            l_M_Hijiki00TEX */
const u16 l_M_kusa05_RGBATEX__width = 31;
const u16 l_M_kusa05_RGBATEX__height = 31;
#include "assets/l_M_Hijiki00TEX.h"  // ALIGN 32

/* 805241F8-805245B8 001020 03C0+00 0/1 0/0 0/0 .data            l_pos */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_pos[960] = {
    0x3F, 0x4A, 0x56, 0xEF, 0xC2, 0x20, 0x00, 0x00, 0x41, 0xFB, 0x17, 0xE4, 0x41, 0xAA, 0xBB, 0xEA,
    0xC2, 0x20, 0x00, 0x00, 0xC1, 0xB7, 0x03, 0x7A, 0x42, 0x55, 0x8D, 0x6F, 0x43, 0x13, 0x16, 0x3F,
    0xC0, 0xC7, 0x24, 0x07, 0x41, 0xE3, 0xC5, 0x31, 0x43, 0x13, 0x16, 0x3F, 0x42, 0x3A, 0x76, 0x90,
    0xC1, 0xDE, 0xF6, 0x89, 0xC2, 0x20, 0x00, 0x00, 0xC1, 0x4E, 0xFE, 0x02, 0xC2, 0x28, 0x22, 0x86,
    0x43, 0x13, 0x16, 0x3F, 0xC2, 0x07, 0x6E, 0x2C, 0x41, 0x51, 0x51, 0xEE, 0x43, 0x13, 0x16, 0x3F,
    0xC2, 0x54, 0xE3, 0xFA, 0xC1, 0x89, 0xD7, 0x9B, 0x43, 0x13, 0x16, 0x3F, 0x42, 0x47, 0x60, 0x87,
    0xC2, 0x59, 0x1D, 0x0E, 0x43, 0x13, 0x16, 0x3F, 0x40, 0x95, 0x9B, 0x11, 0x3F, 0x3A, 0x78, 0x8E,
    0x43, 0x13, 0x16, 0x3F, 0x41, 0xE0, 0xD9, 0x17, 0xC1, 0xE3, 0x1B, 0x10, 0x43, 0x13, 0x16, 0x3F,
    0x42, 0x5A, 0xDD, 0x48, 0xC1, 0xEE, 0x39, 0x52, 0xC2, 0x20, 0x00, 0x00, 0x41, 0xC4, 0x63, 0x09,
    0x00, 0x00, 0x00, 0x00, 0xC2, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x03, 0x56, 0x8B,
    0xC2, 0x20, 0x00, 0x00, 0x41, 0x08, 0xF1, 0x43, 0x42, 0x14, 0xBE, 0x15, 0x43, 0x13, 0x16, 0x3F,
    0x42, 0x3E, 0x56, 0x15, 0x41, 0x9A, 0x86, 0xFF, 0x43, 0x13, 0x16, 0x3F, 0xC1, 0xA7, 0xC6, 0xC3,
    0x42, 0x6A, 0xD4, 0x7A, 0x43, 0x13, 0x16, 0x3F, 0xC1, 0x97, 0x6D, 0x9D, 0xC1, 0x19, 0xCD, 0xF3,
    0xC2, 0x20, 0x00, 0x00, 0xC2, 0x15, 0xFA, 0x6B, 0x40, 0xF2, 0xA2, 0x21, 0x43, 0x13, 0x16, 0x3F,
    0xC2, 0x72, 0x6C, 0x7F, 0xC1, 0xC9, 0x8C, 0x79, 0x43, 0x13, 0x16, 0x3F, 0xC1, 0x3F, 0xB7, 0x0B,
    0xC2, 0x12, 0xFB, 0xE4, 0x43, 0x13, 0x16, 0x3F, 0xC2, 0x46, 0xC9, 0xEB, 0xC2, 0x69, 0xB2, 0x46,
    0x43, 0x13, 0x16, 0x3F, 0x41, 0x49, 0x97, 0x1C, 0x3E, 0xBA, 0x78, 0x8E, 0x42, 0x0E, 0x6B, 0x09,
    0x41, 0x60, 0xD9, 0x17, 0xC1, 0xE8, 0xAA, 0x31, 0x42, 0x0E, 0x6B, 0x09, 0x42, 0x1E, 0x87, 0x66,
    0xC1, 0xEE, 0x39, 0x52, 0xC1, 0xA0, 0x00, 0x00, 0x41, 0xC4, 0x63, 0x09, 0x00, 0x00, 0x00, 0x00,
    0xC1, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x03, 0x56, 0x8B, 0xC1, 0xA0, 0x00, 0x00,
    0x41, 0x08, 0xF1, 0x43, 0x42, 0x0C, 0x0A, 0x50, 0x42, 0x0E, 0x6B, 0x09, 0x41, 0xE0, 0x92, 0x67,
    0x41, 0x1A, 0x86, 0xFF, 0x42, 0x0E, 0x6B, 0x09, 0xC1, 0x27, 0xC6, 0xC3, 0x42, 0x37, 0x15, 0x83,
    0x42, 0x0E, 0x6B, 0x09, 0xC0, 0xA5, 0xE9, 0xF7, 0xC1, 0x19, 0xCD, 0xF3, 0xC1, 0xA0, 0x00, 0x00,
    0xC2, 0x15, 0xFA, 0x6B, 0xBF, 0x81, 0xF3, 0x8C, 0x42, 0x0E, 0x6B, 0x09, 0xC2, 0x44, 0x33, 0x76,
    0xC1, 0x49, 0x8C, 0x7A, 0x42, 0x0E, 0x6B, 0x09, 0xC0, 0xBF, 0xB7, 0x0B, 0xC1, 0xB9, 0x6F, 0x60,
    0x42, 0x0E, 0x6B, 0x09, 0xC2, 0x2E, 0x62, 0x2B, 0xC2, 0x30, 0x67, 0x78, 0x42, 0x0E, 0x6B, 0x09,
    0x41, 0x94, 0x97, 0x4B, 0x3F, 0x4A, 0x56, 0xEF, 0xC1, 0xA0, 0x00, 0x00, 0x41, 0xFB, 0x17, 0xE4,
    0x41, 0xAA, 0xBB, 0xEA, 0xC1, 0xA0, 0x00, 0x00, 0xC1, 0xB7, 0x03, 0x7A, 0x42, 0x15, 0x75, 0xB2,
    0x41, 0xD4, 0xFE, 0xE0, 0xC1, 0x68, 0xCC, 0x7C, 0x41, 0x6A, 0x17, 0xE7, 0x41, 0xD4, 0xFE, 0xE0,
    0x42, 0x1C, 0x01, 0x41, 0xC1, 0xDE, 0xF6, 0x89, 0xC1, 0xA0, 0x00, 0x00, 0xC1, 0x4E, 0xFE, 0x02,
    0xC2, 0x0B, 0xCE, 0xE5, 0x41, 0xD4, 0xFE, 0xE0, 0xC1, 0xBB, 0x2D, 0xAD, 0x41, 0x89, 0xB2, 0x71,
    0x41, 0xD4, 0xFE, 0xE0, 0xC2, 0x18, 0x32, 0xDB, 0xC1, 0x03, 0x84, 0xE4, 0x41, 0xD4, 0xFE, 0xE0,
    0x42, 0x22, 0x76, 0x3C, 0xC2, 0x24, 0x4C, 0x29, 0x41, 0xD4, 0xFE, 0xE0, 0xC0, 0x84, 0x30, 0x7B,
    0x41, 0x47, 0x75, 0x1E, 0x43, 0x9F, 0x77, 0x6C, 0x42, 0xE0, 0x3F, 0xC6, 0x41, 0x8A, 0x76, 0x75,
    0xC2, 0x05, 0x2D, 0xB7, 0xC1, 0xCF, 0xDC, 0xAC, 0xC1, 0x8C, 0x34, 0xB2, 0xC2, 0x3A, 0xD2, 0x49,
    0x40, 0xA1, 0xFC, 0xF0, 0x43, 0x07, 0x5C, 0xA5, 0x43, 0x37, 0x70, 0xEE, 0x42, 0x80, 0x8E, 0x59,
    0x40, 0xAF, 0x73, 0x3F, 0x40, 0x5B, 0xFC, 0x44, 0x41, 0xA2, 0xC5, 0x58, 0xBE, 0x8F, 0xF1, 0x0F,
    0x41, 0xD6, 0xD6, 0xFB, 0xC0, 0xFF, 0xAA, 0x6F, 0x42, 0x47, 0x87, 0xFB, 0x43, 0x71, 0x58, 0x6A,
    0xC2, 0x6A, 0x7B, 0x21, 0x41, 0x79, 0x6D, 0x34, 0x42, 0x7D, 0x14, 0x66, 0x41, 0xC5, 0x98, 0xA7,
    0xC1, 0x3D, 0x22, 0x18, 0x42, 0x94, 0x1C, 0x80, 0x41, 0xF6, 0xE0, 0x36, 0x42, 0xDF, 0xB0, 0x65,
    0x43, 0xA2, 0xC0, 0xAF, 0xC1, 0x24, 0x3C, 0xD0, 0xC1, 0xD2, 0x1A, 0x2E, 0xC1, 0xD5, 0xC7, 0x38,
    0xC1, 0x71, 0xB4, 0x9D, 0x40, 0x99, 0x06, 0xE6, 0xC2, 0x20, 0x88, 0x2D, 0x41, 0x9D, 0xD0, 0xD9,
    0x41, 0xBB, 0x21, 0x46, 0x43, 0x39, 0xA7, 0xB9, 0xC3, 0x11, 0x8D, 0x20, 0x41, 0x8D, 0xE2, 0x64,
    0x40, 0xB4, 0xD7, 0xAE, 0xC0, 0xDD, 0x14, 0x64, 0xC1, 0x02, 0x49, 0xD6, 0x41, 0xE8, 0x8D, 0x5E,
    0x40, 0xBF, 0xC4, 0x15, 0xC1, 0xD9, 0x0C, 0xDC, 0x43, 0x68, 0x5A, 0x22, 0xC2, 0x4F, 0xE7, 0x5E,
    0x41, 0x82, 0x49, 0x5F, 0x42, 0x5A, 0x19, 0xB6, 0xC1, 0x89, 0xC1, 0xA5, 0x41, 0xB3, 0x90, 0xED,
    0x42, 0x82, 0x9F, 0x28, 0x41, 0x23, 0x0C, 0x02, 0xC1, 0x8D, 0x1C, 0xF7, 0x43, 0x9F, 0x77, 0x6C,
    0xC2, 0xE5, 0xDF, 0x4C, 0xC1, 0xB3, 0xD8, 0xDD, 0xC2, 0x05, 0x2D, 0xB7, 0x41, 0xB9, 0x5E, 0x95,
    0x41, 0x45, 0xA4, 0x94, 0xC2, 0x3A, 0xD2, 0x49, 0xC0, 0xFB, 0xF5, 0x4D, 0xC3, 0x16, 0x18, 0x11,
    0x43, 0x39, 0xA7, 0xB9, 0xC2, 0x07, 0x6F, 0xB1, 0xC1, 0x71, 0x27, 0xE6, 0x40, 0xB4, 0xD7, 0xAE,
    0xC1, 0xAE, 0x78, 0x69, 0xC0, 0x0A, 0xEE, 0xAA, 0x41, 0xE8, 0x8D, 0x5E, 0x40, 0x82, 0x3B, 0x99,
    0xC2, 0x33, 0x95, 0x59, 0x43, 0x5F, 0x75, 0x5E, 0x3D, 0xF4, 0x6A, 0x1A, 0xC1, 0x9E, 0xD4, 0x98,
    0x42, 0x7D, 0x14, 0x66, 0xC1, 0xDD, 0xD4, 0x93, 0x40, 0xF1, 0xCC, 0x38, 0x42, 0x94, 0x1C, 0x80,
    0xC2, 0x07, 0x8E, 0x11, 0xC2, 0xE0, 0xEF, 0x0C, 0x43, 0xA0, 0x12, 0xC6, 0xC1, 0x91, 0xCE, 0x9E,
    0x41, 0x9D, 0x73, 0x77, 0xC2, 0x00, 0x52, 0xDD, 0x41, 0xB1, 0x90, 0xD0, 0xBF, 0xA5, 0x21, 0x04,
    0xC2, 0x35, 0xF7, 0x70, 0xC1, 0x9B, 0xE3, 0x38, 0xC2, 0x84, 0xB6, 0xB8, 0x43, 0x43, 0x0C, 0x16,
    0x42, 0xFA, 0x80, 0xC7, 0xC1, 0xCC, 0x7C, 0xFD, 0x41, 0x7A, 0x99, 0xDC, 0x40, 0x0F, 0xBE, 0x34,
    0x40, 0x31, 0x97, 0xA6, 0x42, 0x1C, 0x52, 0x30, 0xC0, 0x61, 0x26, 0x39, 0x42, 0x41, 0xBD, 0x21,
    0x43, 0x72, 0x8F, 0x21, 0x42, 0x23, 0xF4, 0x30, 0xC1, 0xE5, 0xEB, 0x07, 0x42, 0x80, 0xF7, 0x9F,
    0x40, 0xD8, 0x8F, 0xF3, 0xC1, 0xDC, 0xC3, 0xBB, 0x42, 0x96, 0x89, 0xEC, 0xC1, 0xAA, 0x6C, 0x09,
};
#pragma pop

/* 805245B8-805245C4 0013E0 000C+00 0/1 0/0 0/0 .data            l_normal */
#pragma push
#pragma force_active on
SECTION_DATA static Vec l_normal = {0.0f, 1.0f, 0.0f};
#pragma pop

/* 805245C4-805245D8 0013EC 0014+00 0/1 0/0 0/0 .data            l_color */
#pragma push
#pragma force_active on
SECTION_DATA static GXColor l_color[] = {
    {0xFF, 0xFF, 0xFF, 0x00}, {0xFF, 0xFF, 0xFF, 0x80}, {0xFF, 0xFF, 0xFF, 0x79},
    {0xFF, 0xFF, 0xFF, 0x73}, {0xFF, 0xFF, 0xFF, 0xFF},
};
#pragma pop

/* 805245D8-80524678 001400 00A0+00 0/1 0/0 0/0 .data            l_texCoord */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_texCoord[160] = {
    0x3F, 0x86, 0xF6, 0x27, 0x3F, 0x9C, 0x00, 0x00, 0x40, 0x03, 0x7B, 0x14, 0x3F, 0x9C, 0x00, 0x00,
    0x40, 0x03, 0x7B, 0x14, 0x3D, 0x00, 0x00, 0x00, 0x3F, 0x86, 0xF6, 0x27, 0x3D, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x3D, 0x00, 0x00, 0x00, 0xBF, 0x80, 0x00, 0x00, 0x3D, 0x00, 0x00, 0x00,
    0xBF, 0x80, 0x00, 0x00, 0x3F, 0x9C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x9C, 0x00, 0x00,
    0x3F, 0x80, 0x00, 0x00, 0x3D, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x3F, 0x9C, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x3E, 0xC4, 0xF3, 0xBA, 0xBF, 0x80, 0x00, 0x00, 0x3E, 0xC4, 0xF3, 0xBA,
    0x3F, 0x80, 0x00, 0x00, 0x3E, 0xC4, 0xF3, 0xBA, 0x40, 0x03, 0x7B, 0x14, 0x3E, 0xC4, 0xF3, 0xBA,
    0x3F, 0x86, 0xF6, 0x27, 0x3E, 0xC4, 0xF3, 0xBA, 0x3E, 0xF0, 0x00, 0x00, 0xBF, 0xDC, 0x00, 0x00,
    0x3F, 0x94, 0x00, 0x00, 0x3F, 0x9C, 0x00, 0x00, 0xBD, 0xC0, 0x00, 0x00, 0x3F, 0x9C, 0x00, 0x00,
    0x3F, 0x94, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0xBD, 0xC0, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00,
};
#pragma pop

/* 80524678-80524758 0014A0 00CB+15 0/1 0/0 0/0 .data            l_M_Kusa_9qDL */
#include "assets/l_M_Kusa_9qDL.h"  // ALIGN 32

/* 80524758-80524838 001580 00CB+15 0/1 0/0 0/0 .data            l_M_Kusa_9q_cDL */
#include "assets/l_M_Kusa_9q_cDL.h"  // ALIGN 32

/* 80524838-80524918 001660 00D4+0C 0/1 0/0 0/0 .data            l_M_TenGusaDL */
#include "assets/l_M_TenGusaDL.h"  // ALIGN 32

/* 80524918-805249D8 001740 00A8+18 0/2 0/0 0/0 .data            l_Tengusa_matDL */
#include "assets/l_Tengusa_matDL.h"
l_Tengusa_matDL(l_M_Hijiki00TEX)

/* 805249D8-80524A98 001800 00A8+18 0/2 0/0 0/0 .data            l_kusa9q_matDL */
#include "assets/l_kusa9q_matDL.h"
l_kusa9q_matDL(l_M_kusa05_RGBATEX)

/* 80524A98-80524B40 0018C0 00A8+00 0/2 0/0 0/0 .data            l_kusa9q_l4_matDL */
#include "assets/l_kusa9q_l4_matDL.h"
l_kusa9q_l4_matDL(l_M_kusa05_RGBATEX)

/* 80524B40-80524B4C -00001 000C+00 0/1 0/0 0/0 .data            @4620 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_4620[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)deleteRoom__15dGrass_packet_cFi,
};
#pragma pop

/* 80524B4C-80524B74 001974 0028+00 0/1 0/0 0/0 .data            l_vtxDescList$4654 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_vtxDescList[40] = {
    0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00,
    0x00, 0x02, 0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0D,
    0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80524B74-80524BD8 00199C 0050+14 0/1 0/0 0/0 .data            l_vtxAttrFmtList$4655 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_vtxAttrFmtList[80] = {
    0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 80524BD8-805253D8 001A00 0800+00 0/1 0/0 0/0 .data            l_J_Ohana00_64TEX */
const u16 l_J_Ohana00_64TEX__width = 63;
const u16 l_J_Ohana00_64TEX__height = 63;
#include "assets/l_J_Ohana00_64TEX.h"  // ALIGN 32

/* 805253D8-8052569C 002200 02C4+00 0/1 0/0 0/0 .data            l_flowerPos */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_flowerPos[708] = {
    0xC0, 0x8C, 0x2C, 0xF7, 0x42, 0x05, 0xBC, 0xDF, 0xC1, 0xA1, 0x00, 0x70, 0xBF, 0x50, 0x51, 0xB9,
    0x42, 0x12, 0x58, 0xAD, 0xC0, 0xDE, 0xCE, 0x40, 0xC1, 0x04, 0x67, 0x23, 0x41, 0xE5, 0x87, 0x25,
    0xC1, 0x1B, 0xF3, 0xF8, 0xC1, 0x8F, 0x17, 0x3E, 0x42, 0x05, 0x7F, 0xC6, 0xC1, 0x83, 0x9B, 0xFC,
    0xC1, 0x65, 0x1D, 0x1B, 0x42, 0x12, 0x1B, 0x94, 0xC0, 0x52, 0x78, 0xE2, 0x41, 0x4A, 0xF2, 0x65,
    0x41, 0xB8, 0x6D, 0xEC, 0xC1, 0x05, 0xB8, 0xB9, 0x41, 0x59, 0xA0, 0x35, 0x41, 0xC8, 0x8E, 0xEA,
    0x3F, 0xD7, 0x00, 0xBD, 0x40, 0xFD, 0x20, 0x08, 0x41, 0xA5, 0x7C, 0x50, 0xC0, 0x1A, 0x58, 0x21,
    0x40, 0x45, 0x4A, 0xF1, 0x41, 0xD5, 0xC3, 0x79, 0xC1, 0x03, 0x76, 0xC0, 0x40, 0x80, 0x01, 0x19,
    0x41, 0xE5, 0xE4, 0x79, 0x3F, 0xE9, 0x10, 0x80, 0xC0, 0xC5, 0xE3, 0xA8, 0x41, 0x8D, 0x10, 0xEF,
    0x41, 0x5D, 0x5E, 0x8F, 0xC1, 0x83, 0x4F, 0x3A, 0x41, 0x95, 0x37, 0x4A, 0x41, 0x13, 0xAB, 0xB0,
    0xC1, 0x0B, 0x2F, 0x13, 0x41, 0x82, 0x79, 0x28, 0x40, 0xBC, 0x27, 0x0F, 0xBF, 0xE5, 0x81, 0x9D,
    0x41, 0xBD, 0xAD, 0xB1, 0x40, 0xAD, 0xAF, 0x4F, 0xC1, 0x40, 0x5C, 0xAB, 0x41, 0xC5, 0xD4, 0x0B,
    0x3F, 0x52, 0x4A, 0x06, 0xC1, 0x92, 0x9C, 0x90, 0x41, 0x6B, 0x5E, 0x96, 0xC1, 0x70, 0xB5, 0x34,
    0x40, 0x09, 0xC7, 0xFC, 0x41, 0xA1, 0xD1, 0xA9, 0xC1, 0x99, 0xED, 0xD6, 0x40, 0x93, 0x3C, 0x3E,
    0x41, 0x91, 0x1A, 0x4B, 0xC0, 0xFD, 0x15, 0x96, 0xC1, 0x7E, 0x0D, 0x00, 0x41, 0x49, 0xEF, 0xDC,
    0xC0, 0x6D, 0x90, 0xAC, 0x40, 0x51, 0xDE, 0xF0, 0x40, 0x89, 0x1C, 0x93, 0xBE, 0xF1, 0xC4, 0x11,
    0xC1, 0x70, 0xB0, 0x8B, 0x40, 0xFE, 0x20, 0x45, 0x41, 0x30, 0xC6, 0x50, 0xC1, 0xA1, 0x7C, 0x11,
    0x41, 0x24, 0xCB, 0xE5, 0x3F, 0xE9, 0xDE, 0xBE, 0xBF, 0xEE, 0x7E, 0xD8, 0x40, 0xD4, 0x94, 0x18,
    0xC1, 0x1B, 0x18, 0xC1, 0xC1, 0x84, 0x20, 0x71, 0x40, 0xF3, 0x8A, 0x69, 0x40, 0x98, 0xEA, 0x1F,
    0x40, 0x97, 0xB4, 0x48, 0x41, 0x51, 0xF6, 0x25, 0x40, 0xA6, 0xAE, 0x30, 0x40, 0x5F, 0xA7, 0xB1,
    0x41, 0x89, 0x17, 0x78, 0x41, 0x75, 0xAC, 0x70, 0xC1, 0x8E, 0x18, 0x8E, 0x41, 0x39, 0xFE, 0x02,
    0x41, 0x6E, 0xCA, 0x67, 0x40, 0x9E, 0x6A, 0x68, 0x41, 0x10, 0x81, 0x11, 0x41, 0x1B, 0x6F, 0x7F,
    0x40, 0xAD, 0x4B, 0x29, 0x41, 0x3B, 0x3A, 0x41, 0xC1, 0x41, 0x4C, 0x98, 0x41, 0x7E, 0x28, 0x15,
    0x41, 0x6F, 0x56, 0x2E, 0xC1, 0x37, 0x57, 0x88, 0x41, 0x76, 0xB7, 0xB5, 0x41, 0x44, 0x9C, 0xFE,
    0x41, 0x25, 0x64, 0x90, 0x40, 0xE2, 0xFC, 0xE5, 0x41, 0xA7, 0xF4, 0x9C, 0xBF, 0xE7, 0xAE, 0x14,
    0x41, 0x0A, 0x36, 0x26, 0x41, 0xA4, 0x39, 0xDE, 0xC0, 0x24, 0xAB, 0x93, 0xBB, 0xF0, 0x06, 0x8E,
    0xC1, 0x20, 0x00, 0x00, 0x3F, 0x16, 0x81, 0x13, 0xBD, 0x88, 0xA2, 0x66, 0xC1, 0x20, 0x00, 0x00,
    0x3F, 0x1D, 0xDC, 0x0E, 0x40, 0xF1, 0x74, 0x95, 0x41, 0xA6, 0x44, 0xA9, 0xC0, 0x36, 0xA5, 0x59,
    0x41, 0x02, 0xFB, 0x9C, 0x41, 0xA5, 0xE9, 0xDA, 0xBF, 0xC3, 0xB5, 0x4A, 0xBC, 0xD0, 0x6B, 0xBE,
    0xC1, 0x20, 0x00, 0x00, 0x3F, 0x20, 0x46, 0x20, 0xBD, 0x47, 0x89, 0x61, 0xC1, 0x1F, 0xFF, 0xFF,
    0x3F, 0x14, 0x35, 0xDF, 0xC0, 0xFA, 0x9D, 0xC7, 0x41, 0x85, 0xC1, 0xB7, 0x40, 0xAA, 0xE7, 0x6F,
    0xC1, 0x10, 0x29, 0xEB, 0x41, 0x80, 0x9F, 0x20, 0x40, 0xD0, 0x7A, 0xD1, 0x3E, 0xC2, 0x2B, 0x7C,
    0xC1, 0x20, 0x00, 0x00, 0x3F, 0x29, 0xC0, 0x01, 0x3F, 0x38, 0x85, 0x7F, 0xC1, 0x1F, 0xFF, 0xFF,
    0x3E, 0xAF, 0xF4, 0x56, 0xC0, 0xFD, 0x71, 0xD8, 0x41, 0x83, 0xAB, 0x96, 0x40, 0xCE, 0xD3, 0xB1,
    0xC1, 0x0E, 0xBE, 0xA4, 0x41, 0x82, 0xB5, 0x43, 0x40, 0xAC, 0x90, 0x1F, 0x3E, 0xD9, 0x21, 0x68,
    0xC1, 0x20, 0x00, 0x00, 0x3E, 0xBF, 0x6C, 0x48, 0x3F, 0x2D, 0xCF, 0xBC, 0xC1, 0x20, 0x00, 0x00,
    0x3F, 0x21, 0x31, 0x44, 0xC0, 0xF8, 0xE0, 0x22, 0x41, 0xE8, 0x4B, 0x4B, 0xC1, 0x14, 0x36, 0x1F,
    0xC1, 0x0C, 0x7F, 0xA6, 0x41, 0xE4, 0x93, 0x45, 0xC1, 0x24, 0x12, 0xDA, 0xC0, 0x01, 0x25, 0x39,
    0xC1, 0x20, 0x00, 0x00, 0x3F, 0xB5, 0xEB, 0x3A, 0xBF, 0xF6, 0x43, 0x3D, 0xC1, 0x1F, 0xFF, 0xFE,
    0x3F, 0xC2, 0x77, 0x2D, 0xC1, 0x0B, 0x64, 0x82, 0x41, 0xE6, 0x84, 0x99, 0xC1, 0x15, 0x34, 0xD0,
    0xC0, 0xFB, 0x14, 0x70, 0x41, 0xE6, 0x5A, 0x05, 0xC1, 0x23, 0x13, 0xB7, 0xBF, 0xF7, 0x6B, 0x09,
    0xC1, 0x20, 0x00, 0x00, 0x3F, 0xB7, 0x60, 0x63, 0xC0, 0x00, 0x83, 0x99, 0xC1, 0x20, 0x00, 0x01,
    0x3F, 0xC1, 0x1A, 0x97, 0xC0, 0xCA, 0x0C, 0x4E, 0x41, 0x9A, 0x38, 0x78, 0xC0, 0xD2, 0x29, 0xBB,
    0xC0, 0xE2, 0xE4, 0x1F, 0x41, 0x97, 0x6E, 0x73, 0xC0, 0xEA, 0xBD, 0x92, 0xC0, 0xE1, 0x27, 0x37,
    0x41, 0x98, 0xE3, 0x73, 0xC0, 0xD3, 0xBD, 0x8E, 0xC0, 0xCB, 0xC6, 0x04, 0x41, 0x98, 0xC3, 0x84,
    0xC0, 0xE9, 0x27, 0x8D,
};
#pragma pop

/* 8052569C-80525750 0024C4 00B4+00 0/1 0/0 0/0 .data            l_flowerNormal */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_flowerNormal[180] = {
    0x3C, 0x8D, 0x2C, 0x38, 0x3F, 0x7F, 0xF5, 0xF9, 0x3B, 0x46, 0xF7, 0xA1, 0x3C, 0x76, 0x83,
    0x7F, 0x3F, 0x7F, 0xF5, 0xF9, 0x3C, 0x12, 0x5F, 0xE9, 0xBB, 0xE5, 0xA3, 0x5D, 0x3F, 0x7F,
    0xF5, 0xF9, 0x3C, 0x83, 0x57, 0xA3, 0x3B, 0xF9, 0xB1, 0x31, 0x3F, 0x7F, 0xF5, 0xF9, 0x3C,
    0x81, 0x0A, 0x57, 0xBC, 0x80, 0x86, 0x38, 0x3F, 0x7F, 0xF5, 0xF9, 0x3B, 0xFD, 0xE2, 0xEF,
    0xBC, 0x43, 0xEB, 0x7D, 0x3F, 0x7F, 0xF5, 0xF9, 0xBC, 0x51, 0x4E, 0x3C, 0x3C, 0x4B, 0x2D,
    0x90, 0x3F, 0x7F, 0xF5, 0xF9, 0xBC, 0x4A, 0x42, 0xAF, 0x3C, 0x4F, 0x0B, 0x6B, 0x3F, 0x7F,
    0xF5, 0xF9, 0xBC, 0x46, 0x4B, 0xA9, 0x3C, 0x4B, 0xF2, 0xB2, 0x3F, 0x7F, 0xF5, 0xF9, 0x3C,
    0x49, 0x7D, 0x8D, 0x3C, 0x8D, 0x2A, 0x20, 0x3F, 0x7F, 0xF5, 0xF9, 0x3B, 0x47, 0x5C, 0x4B,
    0xBC, 0x80, 0x84, 0x1F, 0x3F, 0x7F, 0xF5, 0xF9, 0x3B, 0xFD, 0xF3, 0xB6, 0xBC, 0x43, 0xFC,
    0x44, 0x3F, 0x7F, 0xF5, 0xF9, 0xBC, 0x51, 0x3D, 0x75, 0x3C, 0x4B, 0x3E, 0x57, 0x3F, 0x7F,
    0xF5, 0xF9, 0xBC, 0x4A, 0x31, 0xE8, 0x3C, 0x4F, 0x07, 0x3A, 0x3F, 0x7F, 0xF5, 0xF9, 0xBC,
    0x46, 0x54, 0x0D, 0x3C, 0x4B, 0xEE, 0x80, 0x3F, 0x7F, 0xF5, 0xF9, 0x3C, 0x49, 0x81, 0xBF,
};
#pragma pop

/* 80525750-80525758 002578 0008+00 0/1 0/0 0/0 .data            l_flowerColor */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_flowerColor[8] = {
    0xFF, 0xFF, 0xFF, 0xFF, 0xB2, 0xB2, 0xB2, 0xFF,
};
#pragma pop

/* 80525758-80525898 002580 0138+08 0/1 0/0 0/0 .data            l_flowerTexCoord */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_flowerTexCoord[] = {
    0x40, 0x40, 0xD0, 0xEA, 0x3D, 0x69, 0x70, 0x72, 0x40, 0x7D, 0xD8, 0x30, 0x3F, 0x81, 0x3D, 0xC9,
    0x40, 0x40, 0xCE, 0x85, 0x3F, 0x81, 0x3D, 0xC9, 0x40, 0x01, 0xDD, 0x33, 0x3F, 0x81, 0x3D, 0xC9,
    0x40, 0x40, 0xD0, 0xEA, 0x3F, 0xF9, 0x46, 0xD4, 0x40, 0x00, 0xCD, 0xB8, 0xBF, 0x7F, 0xD4, 0x39,
    0x40, 0x40, 0xC2, 0xC6, 0x00, 0x00, 0x00, 0x00, 0x40, 0x20, 0xC8, 0x3F, 0x3E, 0xFF, 0xD4, 0x39,
    0x3F, 0xC1, 0xA6, 0x61, 0xBE, 0xFF, 0xD4, 0x39, 0x40, 0x00, 0xCD, 0xB8, 0x3F, 0x7F, 0xD4, 0x39,
    0x3F, 0x81, 0xB1, 0x53, 0x00, 0x00, 0x00, 0x00, 0x3D, 0x49, 0x75, 0x29, 0xBD, 0xFA, 0x4F, 0x87,
    0x3C, 0x54, 0x88, 0x83, 0xBD, 0xFA, 0x4F, 0x87, 0x3C, 0xF8, 0x85, 0x4D, 0xBF, 0x27, 0x85, 0x40,
    0x3D, 0x01, 0x8D, 0x69, 0xBF, 0x27, 0x98, 0x20, 0xBD, 0x44, 0x30, 0xB1, 0xBD, 0xFC, 0xC3, 0xA0,
    0xBB, 0xEE, 0x06, 0xD9, 0xBD, 0xFC, 0xC3, 0xA0, 0xBC, 0xF4, 0x1F, 0x21, 0xBF, 0x27, 0x90, 0xA8,
    0xBD, 0x00, 0x00, 0x00, 0xBF, 0x27, 0x92, 0x7D, 0xBE, 0x03, 0x5A, 0x86, 0xBD, 0x67, 0x4C, 0x0A,
    0xBE, 0x03, 0x5A, 0x86, 0xBC, 0x82, 0xCD, 0x3A, 0xBF, 0x25, 0x30, 0x59, 0xBD, 0x06, 0x8E, 0xC5,
    0xBF, 0x25, 0xFA, 0x66, 0xBD, 0x2F, 0x2B, 0x67, 0xBE, 0x03, 0x59, 0x79, 0x3D, 0x40, 0x8E, 0x9B,
    0xBE, 0x03, 0x59, 0x79, 0x3B, 0xAF, 0xE6, 0x0C, 0xBF, 0x25, 0xB3, 0x4A, 0x3C, 0x9E, 0x81, 0xCB,
    0xBF, 0x25, 0xD9, 0x3C, 0x3C, 0xF1, 0xE6, 0xCD, 0x3E, 0x1C, 0xD0, 0x78, 0x3D, 0x36, 0xDC, 0xA0,
    0x3E, 0x1C, 0xD0, 0x78, 0x3B, 0x48, 0x68, 0xBA, 0x3F, 0x59, 0x32, 0x61, 0x3C, 0xDD, 0x5F, 0x57,
    0x3F, 0x59, 0x61, 0xF6, 0x3C, 0xFB, 0x13, 0x9D, 0x3E, 0x1C, 0xD0, 0x78, 0xBB, 0xEB, 0xED, 0xFA,
    0x3E, 0x1C, 0xD0, 0x78, 0xBD, 0x47, 0xD3, 0xD4, 0x3F, 0x59, 0x49, 0x41, 0xBC, 0xCB, 0x3E, 0x57,
    0x3F, 0x59, 0x4B, 0x6A, 0xBC, 0xAD, 0x94, 0x8E, 0x3E, 0xA7, 0x7F, 0x28, 0x3D, 0x28, 0x87, 0xA9,
    0x3E, 0xA7, 0x67, 0x4D, 0x3C, 0x14, 0x46, 0x74, 0x3E, 0xA7, 0x73, 0xE2, 0xBC, 0x2F, 0x46, 0xAA,
    0x3E, 0xA7, 0x72, 0xD6, 0xBD, 0x2F, 0x46, 0xAA};
#pragma pop

/* 80525898-805259F8 0026C0 0150+10 0/1 0/0 0/0 .data            l_J_hana00DL */
#include "assets/l_J_hana00DL.h"  // ALIGN 32

/* 805259F8-80525AD8 002820 00DE+02 0/1 0/0 0/0 .data            l_J_hana00_cDL */
#include "assets/l_J_hana00_cDL.h"  // ALIGN 32

/* 80525AD8-80525B78 002900 0099+07 0/2 0/0 0/0 .data            l_matDL */
#include "assets/l_matDL__d_a_grass.h"
l_matDL__d_a_grass(l_J_Ohana00_64TEX)

/* 80525B78-80525C18 0029A0 0099+07 0/2 0/0 0/0 .data            l_matLight4DL */
#include "assets/l_matLight4DL.h"
l_matLight4DL(l_J_Ohana00_64TEX)

/* 80525C18-80526C18 002A40 1000+00 0/1 0/0 0/0 .data            l_J_Ohana01_64128_0419TEX */
const u16 l_J_Ohana01_64128_0419TEX__width = 63;
const u16 l_J_Ohana01_64128_0419TEX__height = 127;
#include "assets/l_J_Ohana01_64128_0419TEX.h"  // ALIGN 32

/* 80526C18-805270E0 003A40 04C8+00 0/1 0/0 0/0 .data            l_flowerPos2 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_flowerPos2[1224] = {
    0x40, 0x25, 0x9F, 0x34, 0x42, 0xC2, 0x95, 0x72, 0xC1, 0x22, 0x34, 0x78, 0x41, 0x4D, 0xF9, 0x63,
    0x43, 0x09, 0x35, 0x0D, 0x40, 0x97, 0xD7, 0x54, 0x41, 0x76, 0x80, 0x55, 0x42, 0xBA, 0x1C, 0xB4,
    0x41, 0x91, 0x3E, 0x0D, 0xC0, 0x99, 0x8D, 0x47, 0x42, 0xC2, 0x8D, 0xF5, 0x41, 0x12, 0xA1, 0x12,
    0x41, 0xB9, 0x1A, 0xFF, 0x42, 0xBA, 0x37, 0xE3, 0xBF, 0xBD, 0xD2, 0xA6, 0x41, 0x4D, 0xF9, 0x34,
    0x43, 0x09, 0x35, 0x0F, 0x40, 0x97, 0xD6, 0xB6, 0xC1, 0x07, 0x14, 0xD0, 0x42, 0xCC, 0x9E, 0xFD,
    0xC1, 0x42, 0x39, 0x8F, 0xC0, 0xC1, 0xA4, 0x94, 0x43, 0x14, 0xDF, 0xBB, 0x40, 0xD1, 0x75, 0xE2,
    0x40, 0x32, 0xFE, 0x8B, 0x42, 0xC7, 0x29, 0xAC, 0x41, 0x9E, 0x0C, 0xC8, 0xC0, 0xC1, 0xA4, 0xE1,
    0x43, 0x14, 0xDF, 0xBB, 0x40, 0xD1, 0x75, 0x8E, 0xC1, 0x95, 0xAF, 0x93, 0x42, 0xC4, 0x31, 0xF1,
    0x41, 0x1A, 0xB9, 0x87, 0x41, 0x51, 0x09, 0xAB, 0x42, 0xCF, 0x96, 0xC1, 0xC0, 0x03, 0x66, 0x1F,
    0xC1, 0x01, 0x95, 0x6E, 0x42, 0xB3, 0x6A, 0x42, 0xC1, 0x8B, 0x4C, 0x1D, 0xC0, 0xD4, 0xA5, 0x9C,
    0x42, 0xFE, 0x7B, 0x90, 0xC1, 0x0A, 0x4F, 0x99, 0x40, 0x1C, 0xE1, 0x15, 0x42, 0xC2, 0x2D, 0x47,
    0x41, 0x06, 0xA6, 0x41, 0xC1, 0x7B, 0x73, 0x6E, 0x42, 0xB8, 0x6D, 0x93, 0x3F, 0x5A, 0xCC, 0xA3,
    0x41, 0x21, 0x15, 0xF4, 0x42, 0xBD, 0x29, 0xFE, 0xC1, 0x1D, 0x9F, 0x3A, 0xC0, 0xD4, 0xA5, 0xEC,
    0x42, 0xFE, 0x7B, 0x93, 0xC1, 0x0A, 0x4F, 0xE9, 0x41, 0x06, 0x70, 0xFC, 0x42, 0xC4, 0x24, 0x9D,
    0x40, 0x7C, 0x3E, 0xE6, 0x41, 0x24, 0x1D, 0x91, 0x42, 0xC3, 0xD6, 0x8C, 0x40, 0x7C, 0x3E, 0xE6,
    0x3F, 0xEA, 0x26, 0xBB, 0xC1, 0x20, 0x00, 0x00, 0x3E, 0x25, 0x61, 0x91, 0xBF, 0x8B, 0x0E, 0xC3,
    0xC1, 0x20, 0x00, 0x01, 0x3E, 0x1C, 0xD6, 0x80, 0x41, 0x15, 0x52, 0x2B, 0x42, 0xC4, 0x0E, 0x24,
    0x40, 0x40, 0xBB, 0xC3, 0x41, 0x15, 0x3C, 0x61, 0x42, 0xC3, 0xED, 0x00, 0x40, 0x9B, 0xE1, 0x05,
    0x3E, 0xBE, 0xC3, 0xFC, 0xC1, 0x20, 0x00, 0x00, 0x3F, 0xCE, 0x28, 0xBB, 0x3E, 0xBE, 0xBA, 0x6B,
    0xC1, 0x1F, 0xFF, 0xFF, 0xBF, 0xA5, 0xFF, 0xCE, 0xC0, 0x6B, 0x3A, 0x75, 0x42, 0xC1, 0x3D, 0x51,
    0xC0, 0xA0, 0xCD, 0x8E, 0xBF, 0xDC, 0xEC, 0x63, 0x42, 0xC1, 0x54, 0xB6, 0xC0, 0xA0, 0x6C, 0x42,
    0x3F, 0x88, 0xCC, 0x2D, 0xC1, 0x1F, 0xFF, 0xFF, 0xBF, 0x24, 0x6B, 0xBE, 0xBF, 0xC0, 0xE6, 0x08,
    0xC1, 0x20, 0x00, 0x01, 0xBF, 0x29, 0x08, 0x81, 0xC0, 0x2C, 0x6A, 0x66, 0x42, 0xC1, 0x36, 0x4D,
    0xC0, 0xBF, 0xC9, 0xD6, 0xC0, 0x2D, 0x46, 0x30, 0x42, 0xC1, 0x5B, 0xB5, 0xC0, 0x81, 0x6F, 0xF4,
    0xBE, 0x68, 0x6B, 0xDF, 0xC1, 0x20, 0x00, 0x00, 0x3F, 0x23, 0x29, 0xD4, 0xBE, 0x58, 0xD0, 0xCC,
    0xC1, 0x20, 0x00, 0x01, 0xBF, 0xF8, 0x39, 0x71, 0xC0, 0x79, 0x82, 0x0E, 0x42, 0xD0, 0x8E, 0xE6,
    0x40, 0x7C, 0x3E, 0xE6, 0xC0, 0x00, 0x2E, 0x23, 0x42, 0xD0, 0xA5, 0xB2, 0x40, 0x7C, 0x3E, 0xE6,
    0x3F, 0x2F, 0x08, 0x57, 0xC1, 0x1F, 0x8E, 0x06, 0xBB, 0xAE, 0xF2, 0xC7, 0xBF, 0xD7, 0xC7, 0x1D,
    0xC1, 0x20, 0x71, 0xFC, 0xBB, 0xAE, 0xF2, 0xC7, 0xC0, 0x3C, 0xE3, 0xDE, 0x42, 0xD0, 0xAB, 0x13,
    0x40, 0x3F, 0x99, 0x18, 0xC0, 0x3C, 0xCC, 0x57, 0x42, 0xD0, 0x89, 0x86, 0x40, 0x9C, 0x72, 0x58,
    0xBF, 0x00, 0x08, 0x31, 0xC1, 0x20, 0xA7, 0xBD, 0x3F, 0x96, 0xEC, 0x4A, 0xBF, 0x00, 0x7D, 0xB3,
    0xC1, 0x1F, 0x58, 0x45, 0xBF, 0x98, 0x4A, 0x30, 0x40, 0xBD, 0x8F, 0x9B, 0x42, 0x63, 0xF3, 0x30,
    0x40, 0x23, 0x56, 0x11, 0x41, 0x65, 0x2F, 0xC6, 0x42, 0xBB, 0x00, 0xB1, 0xC1, 0x8C, 0x12, 0x7A,
    0x41, 0xCA, 0x62, 0xA7, 0x42, 0xBB, 0x00, 0xB0, 0x41, 0x28, 0xB1, 0x15, 0xC1, 0x5B, 0xA6, 0x8E,
    0x42, 0xBB, 0x00, 0xAE, 0xC0, 0xD1, 0x1E, 0x86, 0xC0, 0x30, 0x44, 0xBF, 0x42, 0xBB, 0x00, 0xAD,
    0x41, 0xAC, 0x23, 0x4E, 0xBF, 0xAD, 0xFA, 0x8F, 0x41, 0xB0, 0x93, 0x1B, 0x3F, 0x85, 0x39, 0x9F,
    0x41, 0x9F, 0x2B, 0xD3, 0x42, 0x90, 0x9F, 0x64, 0xC1, 0x8A, 0x85, 0x5E, 0x41, 0x7B, 0x1C, 0x3E,
    0x42, 0x90, 0x9F, 0x63, 0x41, 0xA7, 0xF3, 0x96, 0xC1, 0x13, 0xCB, 0x32, 0x42, 0x90, 0x9F, 0x65,
    0xC1, 0x92, 0x20, 0x52, 0xC1, 0x7F, 0xDB, 0xED, 0x42, 0x90, 0x9F, 0x65, 0x41, 0x46, 0xD3, 0x80,
    0xBF, 0x24, 0xCA, 0xC5, 0x42, 0x44, 0xF1, 0x22, 0xC0, 0x3B, 0xEA, 0xC4, 0xC0, 0x35, 0x33, 0xCE,
    0x42, 0x44, 0xDE, 0xC0, 0xC0, 0x3C, 0xDA, 0x27, 0xBF, 0xDF, 0x4A, 0x77, 0x42, 0x44, 0xF6, 0xA3,
    0xBF, 0xEC, 0xBC, 0x8C, 0xBF, 0xDD, 0x8A, 0x1A, 0x42, 0x44, 0xD9, 0x3D, 0xC0, 0x81, 0x30, 0x55,
    0xBF, 0x4A, 0x36, 0xF4, 0x42, 0x56, 0x1A, 0x91, 0x40, 0x0B, 0xFC, 0x11, 0xC0, 0x3B, 0xC6, 0x93,
    0x42, 0x55, 0xE6, 0xFE, 0x40, 0x0B, 0xFC, 0x0D, 0xBF, 0xEE, 0x39, 0xBD, 0x42, 0x55, 0xDA, 0xD7,
    0x40, 0x50, 0x93, 0xC4, 0xBF, 0xEE, 0x6E, 0xEB, 0x42, 0x56, 0x26, 0xB9, 0x3F, 0x8E, 0xC8, 0xB4,
    0x40, 0xBF, 0xC7, 0x22, 0x42, 0x8E, 0x14, 0xBA, 0x40, 0x3F, 0x9A, 0x4E, 0x41, 0x03, 0x00, 0x18,
    0x42, 0x8D, 0xE7, 0xA4, 0x40, 0x3F, 0xCE, 0xF6, 0x40, 0xE2, 0xF3, 0x95, 0x42, 0x8E, 0x07, 0xC0,
    0x3F, 0xF2, 0xF4, 0xA5, 0x40, 0xE2, 0xDA, 0xA3, 0x42, 0x8D, 0xF4, 0x9D, 0x40, 0x82, 0xF4, 0x90,
    0xBE, 0x9C, 0x1E, 0xDE, 0x42, 0x00, 0x1D, 0x6A, 0xC0, 0xD3, 0x0E, 0xA8, 0x41, 0x2D, 0xDB, 0x19,
    0x42, 0x00, 0x1D, 0x68, 0xC0, 0xC8, 0xE4, 0xE0, 0x40, 0x17, 0x47, 0xAA, 0x41, 0x99, 0xE3, 0xCB,
    0x3F, 0x88, 0x3F, 0x79, 0x41, 0x12, 0xF6, 0x8B, 0x42, 0x00, 0x1D, 0x67, 0x41, 0x10, 0xBB, 0x1F,
    0xC0, 0x40, 0x6B, 0x66, 0x42, 0x00, 0x1D, 0x68, 0x40, 0xB5, 0xCE, 0x40, 0x40, 0xB0, 0x3B, 0xDA,
    0x42, 0x08, 0x7F, 0x60, 0x40, 0xB3, 0xDC, 0xD7, 0xC0, 0x7B, 0x9C, 0x13, 0x42, 0x08, 0x7F, 0x5F,
    0x41, 0x39, 0xAA, 0x67, 0xBF, 0x7D, 0x10, 0x1B, 0x41, 0xB4, 0xF6, 0xEB, 0x3F, 0x43, 0x3A, 0x04,
    0xC1, 0x31, 0xB5, 0x84, 0x42, 0x08, 0x7F, 0x5E, 0xC0, 0x02, 0x89, 0x9C, 0x3F, 0x61, 0xC2, 0x2B,
    0x42, 0x08, 0x7F, 0x5F, 0xC0, 0xC2, 0x2D, 0xCD, 0xC0, 0xB7, 0xA5, 0x40, 0x42, 0x03, 0xBD, 0x64,
    0xC0, 0xF9, 0x2E, 0x71, 0x40, 0x97, 0xF6, 0x62, 0x42, 0x03, 0xBD, 0x63, 0xC1, 0x3A, 0x58, 0x92,
    0xBE, 0xD3, 0x65, 0xED, 0x41, 0x99, 0xE3, 0xCC, 0xBF, 0xD5, 0x9D, 0xED, 0x41, 0x0E, 0x33, 0x4E,
    0x42, 0x03, 0xBD, 0x61, 0x40, 0x4C, 0xFD, 0x0D, 0xBE, 0x25, 0xBF, 0xF0, 0x42, 0x09, 0x9F, 0xF5,
    0xC0, 0x05, 0xBD, 0x6F, 0x3F, 0x87, 0x66, 0x17, 0xC1, 0x1E, 0x5D, 0x2E, 0xBF, 0x22, 0xBD, 0x5E,
    0xBF, 0xBE, 0xED, 0x1C, 0xC1, 0x1E, 0x5D, 0x30, 0xBF, 0x27, 0x4E, 0x12, 0xC0, 0x0C, 0x84, 0x34,
    0x42, 0x09, 0x96, 0x95, 0xC0, 0x06, 0xA0, 0xBA, 0xBF, 0x97, 0xAF, 0xEA, 0x42, 0x09, 0xA2, 0xC4,
    0xBF, 0x8A, 0x29, 0x63, 0xBE, 0x66, 0x0B, 0x70, 0xC1, 0x1E, 0x5D, 0x2E, 0x3F, 0x21, 0x7E, 0xBB,
    0xBE, 0x56, 0x99, 0x42, 0xC1, 0x1E, 0x5D, 0x30, 0xBF, 0xF5, 0xAF, 0xB0, 0xBF, 0x96, 0x19, 0x3B,
    0x42, 0x09, 0x93, 0xC4, 0xC0, 0x47, 0x42, 0x91, 0xBE, 0xB2, 0xE9, 0xEE, 0x42, 0x09, 0x50, 0x68,
    0x3F, 0xB1, 0x1A, 0xCA, 0x3F, 0x2D, 0x3E, 0x2D, 0xC1, 0x1D, 0xEC, 0x5F, 0xBB, 0xAD, 0x2D, 0xCB,
    0xBF, 0xD5, 0x92, 0x4B, 0xC1, 0x1E, 0xCE, 0x00, 0xBB, 0xAD, 0x2D, 0xCB, 0xC0, 0x17, 0x75, 0x3A,
    0x42, 0x09, 0x1F, 0xE3, 0x3F, 0xB1, 0x1A, 0xCA, 0xBF, 0xAD, 0xB9, 0x73, 0x42, 0x09, 0x14, 0x75,
    0x40, 0x19, 0x14, 0xF9, 0xBE, 0xFD, 0x72, 0x15, 0xC1, 0x1F, 0x03, 0x34, 0x3F, 0x95, 0x61, 0x35,
    0xBE, 0xFE, 0x5A, 0xBC, 0xC1, 0x1D, 0xB7, 0x2A, 0xBF, 0x96, 0xBB, 0x88, 0xBF, 0xAD, 0xEB, 0x7D,
    0x42, 0x09, 0x5B, 0xD8, 0x3E, 0xC0, 0x2E, 0xA9, 0x40, 0x1E, 0x27, 0x67, 0x42, 0x02, 0x4C, 0x03,
    0x3F, 0xC0, 0x2D, 0xB6, 0x40, 0x94, 0xBE, 0xD1, 0x42, 0x02, 0x30, 0x38, 0x3F, 0xC0, 0xDA, 0xE4,
    0x3F, 0xE7, 0xC1, 0xCE, 0xC1, 0x1E, 0x5D, 0x2E, 0x3E, 0x23, 0xB0, 0x81, 0xBF, 0x89, 0xA2, 0xBE,
    0xC1, 0x1E, 0x5D, 0x30, 0x3E, 0x1B, 0x3B, 0xFB, 0x40, 0x63, 0xE5, 0x3F, 0x42, 0x02, 0x44, 0x03,
    0x3E, 0xD5, 0xAB, 0x19, 0x40, 0x63, 0xD6, 0x7C, 0x42, 0x02, 0x38, 0x37, 0x40, 0x25, 0xC5, 0x61,
    0x3E, 0xBC, 0xD0, 0x9A, 0xC1, 0x1E, 0x5D, 0x2E, 0x3F, 0xCC, 0x0D, 0x13, 0x3E, 0xBC, 0xC7, 0x2A,
    0xC1, 0x1E, 0x5D, 0x2D, 0xBF, 0xA4, 0x4D, 0x4D,
};
#pragma pop

/* 805270E0-80527200 003F08 0120+00 0/1 0/0 0/0 .data            l_flowerNormal2 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_flowerNormal2[288] = {
    0xBB, 0xC4, 0x93, 0x42, 0x3F, 0x7F, 0xF6, 0x6F, 0xBC, 0x83, 0x0E, 0x3D, 0x3C, 0x83, 0x0C, 0x24,
    0x3F, 0x7F, 0xF5, 0x84, 0x3C, 0x03, 0x0E, 0x3D, 0xB8, 0x51, 0xB7, 0x17, 0x3F, 0x7F, 0xF5, 0xF9,
    0x3C, 0x8F, 0x57, 0xF7, 0xBC, 0x8F, 0x57, 0xF7, 0x3F, 0x7F, 0xF5, 0xF9, 0x38, 0x1F, 0x62, 0x30,
    0xBD, 0xB8, 0xC9, 0xFB, 0x3F, 0x7E, 0x68, 0x3C, 0xBD, 0x85, 0xBD, 0x94, 0xBD, 0xD9, 0x65, 0xB2,
    0x3F, 0x7E, 0x28, 0x13, 0xBD, 0x63, 0x62, 0xA6, 0xBD, 0xB8, 0x12, 0x7B, 0x3F, 0x7E, 0x6B, 0x0E,
    0xBD, 0x85, 0x62, 0x5A, 0xBD, 0xFD, 0x2D, 0x88, 0x3F, 0x7D, 0x58, 0x32, 0xBD, 0x95, 0xE3, 0x97,
    0xBD, 0xB5, 0xC6, 0x3B, 0x3F, 0x7E, 0xFB, 0x4C, 0x3C, 0x01, 0xC7, 0x15, 0xB8, 0xFF, 0xDA, 0x40,
    0x3F, 0x7F, 0xF5, 0xF9, 0x3C, 0x8F, 0x57, 0xF7, 0x37, 0x38, 0x8C, 0xA4, 0x3F, 0x7F, 0xF5, 0xF9,
    0xBC, 0x8F, 0x57, 0xF7, 0xBC, 0x8F, 0x57, 0xF7, 0x3F, 0x7F, 0xF5, 0xF9, 0xB8, 0xBE, 0xD7, 0x41,
    0x38, 0x06, 0x37, 0xBD, 0x3F, 0x7F, 0xF5, 0xF9, 0xBC, 0x8F, 0x57, 0xF7, 0x37, 0x6A, 0xE1, 0x8B,
    0x3F, 0x7F, 0xF5, 0xF9, 0x3C, 0x8F, 0x57, 0xF7, 0xBC, 0x8E, 0xC7, 0x43, 0x3F, 0x7F, 0xF5, 0xF9,
    0x3A, 0xCB, 0xF2, 0xB2, 0xBC, 0x8F, 0x57, 0xF7, 0x3F, 0x7F, 0xF5, 0xF9, 0x00, 0x00, 0x00, 0x00,
    0xBC, 0x8F, 0x57, 0xF7, 0x3F, 0x7F, 0xF5, 0xF9, 0xB7, 0xD1, 0xB7, 0x17, 0xBC, 0x8F, 0x55, 0xDE,
    0x3F, 0x7F, 0xF5, 0xF9, 0x39, 0x4E, 0x91, 0xC9, 0xBA, 0x02, 0x49, 0x1B, 0x3F, 0x7F, 0xF5, 0xF9,
    0x3C, 0x8F, 0x49, 0x49, 0x3C, 0x80, 0x34, 0x6E, 0x3F, 0x7F, 0xF5, 0xF9, 0x3C, 0x00, 0x3C, 0xD1,
    0xBC, 0x8E, 0x7F, 0xF6, 0x3F, 0x7F, 0xF5, 0xF9, 0xBA, 0xF8, 0xE7, 0xDE, 0x3B, 0x98, 0xD4, 0x78,
    0x3F, 0x7F, 0xF5, 0xF9, 0xBC, 0x8A, 0x28, 0x78, 0x3C, 0x8B, 0xFE, 0x3B, 0x3F, 0x7F, 0xF5, 0xF9,
    0x3B, 0x76, 0x7B, 0x1C, 0x3B, 0x99, 0x6B, 0x76, 0x3F, 0x7F, 0xF5, 0xF9, 0xBC, 0x8A, 0x1D, 0xFC,
};
#pragma pop

/* 80527200-80527208 004028 0008+00 0/1 0/0 0/0 .data            l_flowerColor2 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_flowerColor2[8] = {
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xB2, 0xFF,
};
#pragma pop

/* 80527208-80527338 004030 0120+10 0/1 0/0 0/0 .data            l_flowerTexCoord2 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_flowerTexCoord2[] = {
    0x3F, 0xF3, 0x6D, 0x11, 0x3F, 0x72, 0x0B, 0xA2, 0x3F, 0x80, 0x00, 0x00, 0x3C, 0xAB, 0xDC, 0x27,
    0x3D, 0xC9, 0x2E, 0xE8, 0x3F, 0x72, 0x0B, 0xA2, 0x40, 0x2B, 0x93, 0x9A, 0x3F, 0x81, 0x7B, 0x96,
    0x40, 0x2B, 0x93, 0x9A, 0x3F, 0x7B, 0xB5, 0x18, 0x40, 0x06, 0x1F, 0xCD, 0x3F, 0x7B, 0xB5, 0x18,
    0x40, 0x06, 0x00, 0x47, 0x3F, 0x81, 0x7B, 0x96, 0x40, 0x06, 0x16, 0xBE, 0x3F, 0x81, 0x7B, 0x96,
    0x40, 0x06, 0x09, 0x5B, 0x3F, 0x7B, 0xB5, 0x18, 0x40, 0x07, 0xBB, 0x1F, 0x3F, 0x7B, 0xB5, 0x18,
    0x40, 0x07, 0xC2, 0xF8, 0x3F, 0x81, 0x7B, 0x96, 0x40, 0x07, 0xB8, 0xC3, 0x3F, 0x81, 0x7B, 0x96,
    0x40, 0x07, 0xC5, 0x50, 0x3F, 0x7B, 0xB5, 0x18, 0x40, 0x03, 0xA9, 0x58, 0x3F, 0x7B, 0xB5, 0x18,
    0x40, 0x03, 0xA9, 0x58, 0x3F, 0x81, 0x7B, 0x96, 0x40, 0x00, 0x7B, 0xB7, 0xC0, 0xA0, 0x9B, 0xA2,
    0x40, 0x39, 0x01, 0x1D, 0xC0, 0xBD, 0x25, 0x1C, 0x40, 0x00, 0x7B, 0xB7, 0xC0, 0xBE, 0x0D, 0xCC,
    0x40, 0x00, 0x7B, 0xB7, 0xC0, 0xBD, 0x25, 0x1C, 0x40, 0x25, 0xD5, 0xA2, 0x3F, 0x7B, 0xB5, 0x18,
    0x40, 0x25, 0xD9, 0x1F, 0x3F, 0x81, 0x7B, 0x96, 0x40, 0x25, 0xD4, 0x95, 0x3F, 0x81, 0x7B, 0x96,
    0x40, 0x25, 0xDA, 0x2B, 0x3F, 0x7B, 0xB5, 0x18, 0x40, 0x24, 0x06, 0x9E, 0x3F, 0x7B, 0xB5, 0x18,
    0x40, 0x24, 0x06, 0x9E, 0x3F, 0x81, 0x7B, 0x96, 0x40, 0x2F, 0xF0, 0x35, 0x3F, 0x81, 0x7B, 0x96,
    0x40, 0x2F, 0xF8, 0x16, 0x3F, 0x7B, 0xB5, 0x18, 0x40, 0x2F, 0xF2, 0x78, 0x3F, 0x7B, 0xB5, 0x18,
    0x40, 0x2F, 0xF5, 0xCF, 0x3F, 0x81, 0x7B, 0x96, 0x40, 0x66, 0xBD, 0x6A, 0x3F, 0x51, 0x10, 0x6F,
    0x40, 0x66, 0xBD, 0x6A, 0x3F, 0x97, 0xF6, 0xBA, 0x40, 0x7C, 0x19, 0xB1, 0x3F, 0x80, 0x5E, 0x57,
    0x40, 0x1B, 0x7D, 0x52, 0x3F, 0x97, 0xF6, 0xBA, 0x40, 0x04, 0x26, 0x74, 0x3F, 0x80, 0x3F, 0x79,
    0x40, 0x1B, 0x7D, 0x52, 0x3F, 0x80, 0x3F, 0x79, 0x40, 0x1B, 0x7D, 0x52, 0x3F, 0x51, 0x10, 0x6F};
#pragma pop

/* 80527338-80527478 004160 0138+08 0/1 0/0 0/0 .data            l_J_hana01DL */
#include "assets/l_J_hana01DL.h"  // ALIGN 32

/* 80527478-80527558 0042A0 00DE+02 0/0 0/0 0/0 .data            l_J_hana01_c_00DL */
#include "assets/l_J_hana01_c_00DL.h"  // ALIGN 32

/* 80527558-80527698 004380 0128+18 0/1 0/0 0/0 .data            l_J_hana01_c_01DL */
#include "assets/l_J_hana01_c_01DL.h"  // ALIGN 32

/* 80527698-80527738 0044C0 0099+07 0/2 0/0 0/0 .data            l_mat2DL */
#include "assets/l_mat2DL__d_a_grass.h"
l_mat2DL__d_a_grass(l_J_Ohana01_64128_0419TEX)

/* 80527738-805277D4 004560 0099+03 0/2 0/0 0/0 .data            l_mat2Light4DL */
#include "assets/l_mat2Light4DL.h"
l_mat2Light4DL(l_J_Ohana01_64128_0419TEX)

/* 805277D4-805277E0 -00001 000C+00 1/1 0/0 0/0 .data            @5875 */
SECTION_DATA static void* lit_5875[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)deleteRoom__16dFlower_packet_cFi,
};

/* 805277E0-80527800 -00001 0020+00 1/1 0/0 0/0 .data            @6092 */
SECTION_DATA static void* lit_6092[8] = {
    (void*)(((char*)draw__16dFlower_packet_cFv) + 0x6EC),
    (void*)(((char*)draw__16dFlower_packet_cFv) + 0x708),
    (void*)(((char*)draw__16dFlower_packet_cFv) + 0x724),
    (void*)(((char*)draw__16dFlower_packet_cFv) + 0x740),
    (void*)(((char*)draw__16dFlower_packet_cFv) + 0x760),
    (void*)(((char*)draw__16dFlower_packet_cFv) + 0x780),
    (void*)(((char*)draw__16dFlower_packet_cFv) + 0x7A0),
    (void*)(((char*)draw__16dFlower_packet_cFv) + 0x7C0),
};

/* 80527800-80527840 -00001 0040+00 1/1 0/0 0/0 .data
 * l_offsetData$localstatic15$create__9daGrass_cFv              */
SECTION_DATA static void* data_80527800[16] = {
    (void*)0x03000000,
    (void*)(((char*)&struct_80528900) + 0x0) /* l_setType2$localstatic7$create__9daGrass_cFv */,
    (void*)0x07000000,
    (void*)(((char*)&struct_80528854) + 0x0) /* l_setType0$localstatic3$create__9daGrass_cFv */,
    (void*)0x15000000,
    (void*)(((char*)&struct_80528880) + 0x0) /* l_setType1$localstatic5$create__9daGrass_cFv */,
    (void*)0x07000000,
    (void*)(((char*)&struct_80528854) + 0x0) /* l_setType0$localstatic3$create__9daGrass_cFv */,
    (void*)0x07000000,
    (void*)(((char*)&struct_80528914) + 0x0) /* l_setType3$localstatic9$create__9daGrass_cFv */,
    (void*)0x11000000,
    (void*)(((char*)&struct_80528940) + 0x0) /* l_setType4$localstatic11$create__9daGrass_cFv */,
    (void*)0x07000000,
    (void*)&data_805289A8,
    (void*)0x07000000,
    (void*)(((char*)&struct_80528854) + 0x0) /* l_setType0$localstatic3$create__9daGrass_cFv */,
};

/* 80527840-80527860 -00001 0020+00 1/0 0/0 0/0 .data            daGrass_METHODS */
static actor_method_class daGrass_METHODS = {
    (process_method_func)daGrass_create__FP9daGrass_c,
    (process_method_func)daGrass_Delete__FP9daGrass_c,
    (process_method_func)daGrass_execute__FP9daGrass_c,
    0,
    (process_method_func)daGrass_draw__FP9daGrass_c,
};

/* 80527860-80527890 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_GRASS */
extern actor_process_profile_definition g_profile_GRASS = {
  fpcLy_CURRENT_e,       // mLayerID
  11,                    // mListID
  fpcPi_CURRENT_e,       // mListPrio
  PROC_GRASS,            // mProcName
  &g_fpcLf_Method.base, // sub_method
  0x00000570,            // mSize
  0,                     // mSizeOther
  0,                     // mParameters
  &g_fopAc_Method.base,  // sub_method
  8,                     // mPriority
  &daGrass_METHODS,      // sub_method
  0x00060000,            // mStatus
  fopAc_ACTOR_e,         // mActorType
  fopAc_CULLBOX_0_e,     // cullType
};

/* 80527890-805278A4 0046B8 0014+00 2/2 0/0 0/0 .data            __vt__16dFlower_packet_c */
SECTION_DATA extern void* __vt__16dFlower_packet_c[5] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)entry__9J3DPacketFP13J3DDrawBuffer,
    (void*)draw__16dFlower_packet_cFv,
    (void*)__dt__16dFlower_packet_cFv,
};

/* 805278A4-805278B8 0046CC 0014+00 2/2 0/0 0/0 .data            __vt__15dGrass_packet_c */
SECTION_DATA extern void* __vt__15dGrass_packet_c[5] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)entry__9J3DPacketFP13J3DDrawBuffer,
    (void*)draw__15dGrass_packet_cFv,
    (void*)__dt__15dGrass_packet_cFv,
};

/* 805278D0-805278D4 000008 0001+03 4/4 0/0 0/0 .bss             @1109 */
static u8 lit_1109[1 + 3 /* padding */];

/* 805278D4-805278D8 00000C 0001+03 0/0 0/0 0/0 .bss             @1107 */
#pragma push
#pragma force_active on
static u8 lit_1107[1 + 3 /* padding */];
#pragma pop

/* 805278D8-805278DC 000010 0001+03 0/0 0/0 0/0 .bss             @1105 */
#pragma push
#pragma force_active on
static u8 lit_1105[1 + 3 /* padding */];
#pragma pop

/* 805278DC-805278E0 000014 0001+03 0/0 0/0 0/0 .bss             @1104 */
#pragma push
#pragma force_active on
static u8 lit_1104[1 + 3 /* padding */];
#pragma pop

/* 805278E0-805278E4 000018 0001+03 0/0 0/0 0/0 .bss             @1099 */
#pragma push
#pragma force_active on
static u8 lit_1099[1 + 3 /* padding */];
#pragma pop

/* 805278E4-805278E8 00001C 0001+03 0/0 0/0 0/0 .bss             @1097 */
#pragma push
#pragma force_active on
static u8 lit_1097[1 + 3 /* padding */];
#pragma pop

/* 805278E8-805278EC 000020 0001+03 0/0 0/0 0/0 .bss             @1095 */
#pragma push
#pragma force_active on
static u8 lit_1095[1 + 3 /* padding */];
#pragma pop

/* 805278EC-805278F0 000024 0001+03 0/0 0/0 0/0 .bss             @1094 */
#pragma push
#pragma force_active on
static u8 lit_1094[1 + 3 /* padding */];
#pragma pop

/* 805278F0-805278F4 000028 0001+03 0/0 0/0 0/0 .bss             @1057 */
#pragma push
#pragma force_active on
static u8 lit_1057[1 + 3 /* padding */];
#pragma pop

/* 805278F4-805278F8 00002C 0001+03 0/0 0/0 0/0 .bss             @1055 */
#pragma push
#pragma force_active on
static u8 lit_1055[1 + 3 /* padding */];
#pragma pop

/* 805278F8-805278FC 000030 0001+03 0/0 0/0 0/0 .bss             @1053 */
#pragma push
#pragma force_active on
static u8 lit_1053[1 + 3 /* padding */];
#pragma pop

/* 805278FC-80527900 000034 0001+03 0/0 0/0 0/0 .bss             @1052 */
#pragma push
#pragma force_active on
static u8 lit_1052[1 + 3 /* padding */];
#pragma pop

/* 80527900-80527904 000038 0001+03 0/0 0/0 0/0 .bss             @1014 */
#pragma push
#pragma force_active on
static u8 lit_1014[1 + 3 /* padding */];
#pragma pop

/* 80527904-80527908 00003C 0001+03 0/0 0/0 0/0 .bss             @1012 */
#pragma push
#pragma force_active on
static u8 lit_1012[1 + 3 /* padding */];
#pragma pop

/* 80527908-8052790C 000040 0001+03 0/0 0/0 0/0 .bss             @1010 */
#pragma push
#pragma force_active on
static u8 lit_1010[1 + 3 /* padding */];
#pragma pop

/* 8052790C-80527910 000044 0001+03 0/0 0/0 0/0 .bss             @1009 */
#pragma push
#pragma force_active on
static u8 lit_1009[1 + 3 /* padding */];
#pragma pop

/* 80527910-80527920 000048 000C+04 0/1 0/0 0/0 .bss             @4293 */
#pragma push
#pragma force_active on
static u8 lit_4293[12 + 4 /* padding */];
#pragma pop

/* 80527920-80527930 -00001 000C+04 0/2 0/0 0/0 .bss             None */
#pragma push
#pragma force_active on
/* 80527920 0006+00 data_80527920 ang$4292 */
/* 80527926 0002+02 data_80527926 exec_count_dammy$4868 */
/* 8052792A 0002+00 data_8052792A exec_count_dammy2$4871 */
static u8 struct_80527920[12 + 4 /* padding */];
#pragma pop

/* 80527930-805284E8 000068 0BB8+00 1/1 0/0 0/0 .bss             mAngleZ$5046 */
static s16 mAngleZ[1500];

/* 805284E8-805284EC 000C20 0004+00 1/2 0/0 0/0 .bss             None */
static u8 data_805284E8[4];

/* 805284EC-805284FC 000C24 000C+04 0/1 0/0 0/0 .bss             @5442 */
#pragma push
#pragma force_active on
static u8 lit_5442[12 + 4 /* padding */];
#pragma pop

/* 805284FC-80528504 000C34 0006+02 0/1 0/0 0/0 .bss             ang$5441 */
#pragma push
#pragma force_active on
static u8 ang[6 + 2 /* padding */];
#pragma pop

/* 80528504-80528510 000C3C 000C+00 0/1 0/0 0/0 .bss             @6340 */
#pragma push
#pragma force_active on
static u8 lit_6340[12];
#pragma pop

/* 80528510-8052851C 000C48 000C+00 0/1 0/0 0/0 .bss             @6342 */
#pragma push
#pragma force_active on
static u8 lit_6342[12];
#pragma pop

/* 8052851C-80528528 000C54 000C+00 0/1 0/0 0/0 .bss             @6343 */
#pragma push
#pragma force_active on
static u8 lit_6343[12];
#pragma pop

/* 80528528-80528534 000C60 000C+00 0/1 0/0 0/0 .bss             @6344 */
#pragma push
#pragma force_active on
static u8 lit_6344[12];
#pragma pop

/* 80528534-80528540 000C6C 000C+00 0/1 0/0 0/0 .bss             @6345 */
#pragma push
#pragma force_active on
static u8 lit_6345[12];
#pragma pop

/* 80528540-8052854C 000C78 000C+00 0/1 0/0 0/0 .bss             @6346 */
#pragma push
#pragma force_active on
static u8 lit_6346[12];
#pragma pop

/* 8052854C-80528558 000C84 000C+00 0/1 0/0 0/0 .bss             @6347 */
#pragma push
#pragma force_active on
static u8 lit_6347[12];
#pragma pop

/* 80528558-80528564 000C90 000C+00 0/1 0/0 0/0 .bss             @6348 */
#pragma push
#pragma force_active on
static u8 lit_6348[12];
#pragma pop

/* 80528564-80528570 000C9C 000C+00 0/1 0/0 0/0 .bss             @6350 */
#pragma push
#pragma force_active on
static u8 lit_6350[12];
#pragma pop

/* 80528570-8052857C 000CA8 000C+00 0/1 0/0 0/0 .bss             @6351 */
#pragma push
#pragma force_active on
static u8 lit_6351[12];
#pragma pop

/* 8052857C-80528588 000CB4 000C+00 0/1 0/0 0/0 .bss             @6352 */
#pragma push
#pragma force_active on
static u8 lit_6352[12];
#pragma pop

/* 80528588-80528594 000CC0 000C+00 0/1 0/0 0/0 .bss             @6353 */
#pragma push
#pragma force_active on
static u8 lit_6353[12];
#pragma pop

/* 80528594-805285A0 000CCC 000C+00 0/1 0/0 0/0 .bss             @6354 */
#pragma push
#pragma force_active on
static u8 lit_6354[12];
#pragma pop

/* 805285A0-805285AC 000CD8 000C+00 0/1 0/0 0/0 .bss             @6355 */
#pragma push
#pragma force_active on
static u8 lit_6355[12];
#pragma pop

/* 805285AC-805285B8 000CE4 000C+00 0/1 0/0 0/0 .bss             @6356 */
#pragma push
#pragma force_active on
static u8 lit_6356[12];
#pragma pop

/* 805285B8-805285C4 000CF0 000C+00 0/1 0/0 0/0 .bss             @6357 */
#pragma push
#pragma force_active on
static u8 lit_6357[12];
#pragma pop

/* 805285C4-805285D0 000CFC 000C+00 0/1 0/0 0/0 .bss             @6358 */
#pragma push
#pragma force_active on
static u8 lit_6358[12];
#pragma pop

/* 805285D0-805285DC 000D08 000C+00 0/1 0/0 0/0 .bss             @6359 */
#pragma push
#pragma force_active on
static u8 lit_6359[12];
#pragma pop

/* 805285DC-805285E8 000D14 000C+00 0/1 0/0 0/0 .bss             @6360 */
#pragma push
#pragma force_active on
static u8 lit_6360[12];
#pragma pop

/* 805285E8-805285F4 000D20 000C+00 0/1 0/0 0/0 .bss             @6361 */
#pragma push
#pragma force_active on
static u8 lit_6361[12];
#pragma pop

/* 805285F4-80528600 000D2C 000C+00 0/1 0/0 0/0 .bss             @6362 */
#pragma push
#pragma force_active on
static u8 lit_6362[12];
#pragma pop

/* 80528600-8052860C 000D38 000C+00 0/1 0/0 0/0 .bss             @6363 */
#pragma push
#pragma force_active on
static u8 lit_6363[12];
#pragma pop

/* 8052860C-80528618 000D44 000C+00 0/1 0/0 0/0 .bss             @6364 */
#pragma push
#pragma force_active on
static u8 lit_6364[12];
#pragma pop

/* 80528618-80528624 000D50 000C+00 0/1 0/0 0/0 .bss             @6365 */
#pragma push
#pragma force_active on
static u8 lit_6365[12];
#pragma pop

/* 80528624-80528630 000D5C 000C+00 0/1 0/0 0/0 .bss             @6366 */
#pragma push
#pragma force_active on
static u8 lit_6366[12];
#pragma pop

/* 80528630-8052863C 000D68 000C+00 0/1 0/0 0/0 .bss             @6367 */
#pragma push
#pragma force_active on
static u8 lit_6367[12];
#pragma pop

/* 8052863C-80528648 000D74 000C+00 0/1 0/0 0/0 .bss             @6368 */
#pragma push
#pragma force_active on
static u8 lit_6368[12];
#pragma pop

/* 80528648-80528654 000D80 000C+00 0/1 0/0 0/0 .bss             @6369 */
#pragma push
#pragma force_active on
static u8 lit_6369[12];
#pragma pop

/* 80528654-80528660 000D8C 000C+00 0/1 0/0 0/0 .bss             @6370 */
#pragma push
#pragma force_active on
static u8 lit_6370[12];
#pragma pop

/* 80528660-8052866C 000D98 000C+00 0/1 0/0 0/0 .bss             @6372 */
#pragma push
#pragma force_active on
static u8 lit_6372[12];
#pragma pop

/* 8052866C-80528678 000DA4 000C+00 0/1 0/0 0/0 .bss             @6373 */
#pragma push
#pragma force_active on
static u8 lit_6373[12];
#pragma pop

/* 80528678-80528684 000DB0 000C+00 0/1 0/0 0/0 .bss             @6374 */
#pragma push
#pragma force_active on
static u8 lit_6374[12];
#pragma pop

/* 80528684-80528690 000DBC 000C+00 0/1 0/0 0/0 .bss             @6376 */
#pragma push
#pragma force_active on
static u8 lit_6376[12];
#pragma pop

/* 80528690-8052869C 000DC8 000C+00 0/1 0/0 0/0 .bss             @6377 */
#pragma push
#pragma force_active on
static u8 lit_6377[12];
#pragma pop

/* 8052869C-805286A8 000DD4 000C+00 0/1 0/0 0/0 .bss             @6378 */
#pragma push
#pragma force_active on
static u8 lit_6378[12];
#pragma pop

/* 805286A8-805286B4 000DE0 000C+00 0/1 0/0 0/0 .bss             @6379 */
#pragma push
#pragma force_active on
static u8 lit_6379[12];
#pragma pop

/* 805286B4-805286C0 000DEC 000C+00 0/1 0/0 0/0 .bss             @6380 */
#pragma push
#pragma force_active on
static u8 lit_6380[12];
#pragma pop

/* 805286C0-805286CC 000DF8 000C+00 0/1 0/0 0/0 .bss             @6381 */
#pragma push
#pragma force_active on
static u8 lit_6381[12];
#pragma pop

/* 805286CC-805286D8 000E04 000C+00 0/1 0/0 0/0 .bss             @6382 */
#pragma push
#pragma force_active on
static u8 lit_6382[12];
#pragma pop

/* 805286D8-805286E4 000E10 000C+00 0/1 0/0 0/0 .bss             @6384 */
#pragma push
#pragma force_active on
static u8 lit_6384[12];
#pragma pop

/* 805286E4-805286F0 000E1C 000C+00 0/1 0/0 0/0 .bss             @6385 */
#pragma push
#pragma force_active on
static u8 lit_6385[12];
#pragma pop

/* 805286F0-805286FC 000E28 000C+00 0/1 0/0 0/0 .bss             @6386 */
#pragma push
#pragma force_active on
static u8 lit_6386[12];
#pragma pop

/* 805286FC-80528708 000E34 000C+00 0/1 0/0 0/0 .bss             @6387 */
#pragma push
#pragma force_active on
static u8 lit_6387[12];
#pragma pop

/* 80528708-80528714 000E40 000C+00 0/1 0/0 0/0 .bss             @6388 */
#pragma push
#pragma force_active on
static u8 lit_6388[12];
#pragma pop

/* 80528714-80528720 000E4C 000C+00 0/1 0/0 0/0 .bss             @6389 */
#pragma push
#pragma force_active on
static u8 lit_6389[12];
#pragma pop

/* 80528720-8052872C 000E58 000C+00 0/1 0/0 0/0 .bss             @6390 */
#pragma push
#pragma force_active on
static u8 lit_6390[12];
#pragma pop

/* 8052872C-80528738 000E64 000C+00 0/1 0/0 0/0 .bss             @6391 */
#pragma push
#pragma force_active on
static u8 lit_6391[12];
#pragma pop

/* 80528738-80528744 000E70 000C+00 0/1 0/0 0/0 .bss             @6392 */
#pragma push
#pragma force_active on
static u8 lit_6392[12];
#pragma pop

/* 80528744-80528750 000E7C 000C+00 0/1 0/0 0/0 .bss             @6393 */
#pragma push
#pragma force_active on
static u8 lit_6393[12];
#pragma pop

/* 80528750-8052875C 000E88 000C+00 0/1 0/0 0/0 .bss             @6394 */
#pragma push
#pragma force_active on
static u8 lit_6394[12];
#pragma pop

/* 8052875C-80528768 000E94 000C+00 0/1 0/0 0/0 .bss             @6395 */
#pragma push
#pragma force_active on
static u8 lit_6395[12];
#pragma pop

/* 80528768-80528774 000EA0 000C+00 0/1 0/0 0/0 .bss             @6396 */
#pragma push
#pragma force_active on
static u8 lit_6396[12];
#pragma pop

/* 80528774-80528780 000EAC 000C+00 0/1 0/0 0/0 .bss             @6397 */
#pragma push
#pragma force_active on
static u8 lit_6397[12];
#pragma pop

/* 80528780-8052878C 000EB8 000C+00 0/1 0/0 0/0 .bss             @6398 */
#pragma push
#pragma force_active on
static u8 lit_6398[12];
#pragma pop

/* 8052878C-80528798 000EC4 000C+00 0/1 0/0 0/0 .bss             @6399 */
#pragma push
#pragma force_active on
static u8 lit_6399[12];
#pragma pop

/* 80528798-805287A4 000ED0 000C+00 0/1 0/0 0/0 .bss             @6400 */
#pragma push
#pragma force_active on
static u8 lit_6400[12];
#pragma pop

/* 805287A4-805287B0 000EDC 000C+00 0/1 0/0 0/0 .bss             @6402 */
#pragma push
#pragma force_active on
static u8 lit_6402[12];
#pragma pop

/* 805287B0-805287BC 000EE8 000C+00 0/1 0/0 0/0 .bss             @6403 */
#pragma push
#pragma force_active on
static u8 lit_6403[12];
#pragma pop

/* 805287BC-805287C8 000EF4 000C+00 0/1 0/0 0/0 .bss             @6404 */
#pragma push
#pragma force_active on
static u8 lit_6404[12];
#pragma pop

/* 805287C8-805287D4 000F00 000C+00 0/1 0/0 0/0 .bss             @6405 */
#pragma push
#pragma force_active on
static u8 lit_6405[12];
#pragma pop

/* 805287D4-805287E0 000F0C 000C+00 0/1 0/0 0/0 .bss             @6406 */
#pragma push
#pragma force_active on
static u8 lit_6406[12];
#pragma pop

/* 805287E0-805287EC 000F18 000C+00 0/1 0/0 0/0 .bss             @6407 */
#pragma push
#pragma force_active on
static u8 lit_6407[12];
#pragma pop

/* 805287EC-805287F0 000F24 0004+00 0/0 0/0 0/0 .bss
 * sInstance__40JASGlobalInstance<19JASDefaultBankTable>        */
#pragma push
#pragma force_active on
static u8 data_805287EC[4];
#pragma pop

/* 805287F0-805287F4 000F28 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JASAudioThread>             */
#pragma push
#pragma force_active on
static u8 data_805287F0[4];
#pragma pop

/* 805287F4-805287F8 000F2C 0004+00 0/0 0/0 0/0 .bss sInstance__27JASGlobalInstance<7Z2SeMgr> */
#pragma push
#pragma force_active on
static u8 data_805287F4[4];
#pragma pop

/* 805287F8-805287FC 000F30 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8Z2SeqMgr> */
#pragma push
#pragma force_active on
static u8 data_805287F8[4];
#pragma pop

/* 805287FC-80528800 000F34 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SceneMgr>
 */
#pragma push
#pragma force_active on
static u8 data_805287FC[4];
#pragma pop

/* 80528800-80528804 000F38 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2StatusMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80528800[4];
#pragma pop

/* 80528804-80528808 000F3C 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2DebugSys>
 */
#pragma push
#pragma force_active on
static u8 data_80528804[4];
#pragma pop

/* 80528808-8052880C 000F40 0004+00 0/0 0/0 0/0 .bss
 * sInstance__36JASGlobalInstance<15JAISoundStarter>            */
#pragma push
#pragma force_active on
static u8 data_80528808[4];
#pragma pop

/* 8052880C-80528810 000F44 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14Z2SoundStarter>             */
#pragma push
#pragma force_active on
static u8 data_8052880C[4];
#pragma pop

/* 80528810-80528814 000F48 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12Z2SpeechMgr2>               */
#pragma push
#pragma force_active on
static u8 data_80528810[4];
#pragma pop

/* 80528814-80528818 000F4C 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8JAISeMgr> */
#pragma push
#pragma force_active on
static u8 data_80528814[4];
#pragma pop

/* 80528818-8052881C 000F50 0004+00 0/0 0/0 0/0 .bss sInstance__29JASGlobalInstance<9JAISeqMgr> */
#pragma push
#pragma force_active on
static u8 data_80528818[4];
#pragma pop

/* 8052881C-80528820 000F54 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAIStreamMgr>               */
#pragma push
#pragma force_active on
static u8 data_8052881C[4];
#pragma pop

/* 80528820-80528824 000F58 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SoundMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80528820[4];
#pragma pop

/* 80528824-80528828 000F5C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAISoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_80528824[4];
#pragma pop

/* 80528828-8052882C 000F60 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13JAUSoundTable>              */
#pragma push
#pragma force_active on
static u8 data_80528828[4];
#pragma pop

/* 8052882C-80528830 000F64 0004+00 0/0 0/0 0/0 .bss
 * sInstance__38JASGlobalInstance<17JAUSoundNameTable>          */
#pragma push
#pragma force_active on
static u8 data_8052882C[4];
#pragma pop

/* 80528830-80528834 000F68 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAUSoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_80528830[4];
#pragma pop

/* 80528834-80528838 000F6C 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SoundInfo>
 */
#pragma push
#pragma force_active on
static u8 data_80528834[4];
#pragma pop

/* 80528838-8052883C 000F70 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2SoundObjMgr>              */
#pragma push
#pragma force_active on
static u8 data_80528838[4];
#pragma pop

/* 8052883C-80528840 000F74 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2Audience>
 */
#pragma push
#pragma force_active on
static u8 data_8052883C[4];
#pragma pop

/* 80528840-80528844 000F78 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2FxLineMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80528840[4];
#pragma pop

/* 80528844-80528848 000F7C 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2EnvSeMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80528844[4];
#pragma pop

/* 80528848-8052884C 000F80 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SpeechMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80528848[4];
#pragma pop

/* 8052884C-80528850 000F84 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>              */
#pragma push
#pragma force_active on
static u8 data_8052884C[4];
#pragma pop

/* 80528850-80528854 000F88 0004+00 1/1 0/0 0/0 .bss             None */
static u8 data_80528850[4];

/* 80528854-80528880 -00001 002C+00 2/1 0/0 0/0 .bss             None */
/* 80528854 002A+00 data_80528854 l_setType0$localstatic3$create__9daGrass_cFv */
/* 8052887E 0002+00 data_8052887E None */
static u8 struct_80528854[44];

/* 80528880-80528900 -00001 0080+00 2/1 0/0 0/0 .bss             None */
/* 80528880 007E+00 data_80528880 l_setType1$localstatic5$create__9daGrass_cFv */
/* 805288FE 0002+00 data_805288FE None */
static u8 struct_80528880[128];

/* 80528900-80528914 -00001 0014+00 2/1 0/0 0/0 .bss             None */
/* 80528900 0012+00 data_80528900 l_setType2$localstatic7$create__9daGrass_cFv */
/* 80528912 0002+00 data_80528912 None */
static u8 struct_80528900[20];

/* 80528914-80528940 -00001 002C+00 2/1 0/0 0/0 .bss             None */
/* 80528914 002A+00 data_80528914 l_setType3$localstatic9$create__9daGrass_cFv */
/* 8052893E 0002+00 data_8052893E None */
static u8 struct_80528914[44];

/* 80528940-805289A8 -00001 0068+00 2/1 0/0 0/0 .bss             None */
/* 80528940 0066+00 data_80528940 l_setType4$localstatic11$create__9daGrass_cFv */
/* 805289A6 0002+00 data_805289A6 None */
static u8 struct_80528940[104];

/* 805289A8-805289D2 0010E0 002A+00 2/1 0/0 0/0 .bss l_setType5$localstatic13$create__9daGrass_cFv
 */
static u8 data_805289A8[42];

/* 8051BFBC-8051C040 00035C 0084+00 1/0 0/0 0/0 .text            __dt__15dGrass_packet_cFv */
dGrass_packet_c::~dGrass_packet_c() {}

/* 8051C040-8051C074 0003E0 0034+00 1/1 0/0 0/0 .text            executeGrass__9daGrass_cFv */
void daGrass_c::executeGrass() {
    if (m_grass != NULL) {
        m_grass->calc();
    }
}

/* 8051C074-8051C0A8 000414 0034+00 1/1 0/0 0/0 .text            drawGrass__9daGrass_cFv */
void daGrass_c::drawGrass() {
    if (m_grass != NULL) {
        m_grass->update();
    }
}

/* 8051C0A8-8051C0D4 000448 002C+00 1/1 0/0 0/0 .text newGrassData__9daGrass_cFR4cXyziUcUcsUc */
void daGrass_c::newGrassData(cXyz& i_pos, int i_roomNo, u8 i_itemNo, u8 i_itemBitNo, s16 i_addCol,
                             u8 param_5) {
    m_grass->newData(i_pos, i_roomNo, i_itemNo, i_itemBitNo, i_addCol, param_5);
}

/* 8051C0D4-8051C140 000474 006C+00 1/1 0/0 0/0 .text            createFlower__9daGrass_cFv */
int daGrass_c::createFlower() {
    if (m_flower != NULL) {
        return 1;
    }

    m_flower = new dFlower_packet_c();
    if (m_flower == NULL) {
        return 0;
    }

    return 1;
}

/* 8051C140-8051C194 0004E0 0054+00 1/1 0/0 0/0 .text            deleteFlower__9daGrass_cFv */
void daGrass_c::deleteFlower() {
    if (m_flower != NULL) {
        delete m_flower;
        m_flower = NULL;
    }
}

/* 8051C194-8051C218 000534 0084+00 1/0 0/0 0/0 .text            __dt__16dFlower_packet_cFv */
dFlower_packet_c::~dFlower_packet_c() {}

/* 8051C218-8051C24C 0005B8 0034+00 1/1 0/0 0/0 .text            executeFlower__9daGrass_cFv */
void daGrass_c::executeFlower() {
    if (m_flower != NULL) {
        m_flower->calc();
    }
}

/* 8051C24C-8051C280 0005EC 0034+00 1/1 0/0 0/0 .text            drawFlower__9daGrass_cFv */
void daGrass_c::drawFlower() {
    if (m_flower != NULL) {
        m_flower->update();
    }
}

/* 8051C280-8051C2AC 000620 002C+00 1/1 0/0 0/0 .text newFlowerData__9daGrass_cFScR4cXyziScs */
void daGrass_c::newFlowerData(s8 param_0, cXyz& param_1, int param_2, s8 param_3, s16 param_4) {
    m_flower->newData(param_0, param_1, param_2, param_3, param_4);
}

/* 8051C2AC-8051C2B0 00064C 0004+00 1/1 0/0 0/0 .text            dGrass_Tex_Change__Fv */
static void dGrass_Tex_Change() {}

/* 8051C2B0-8051C304 000650 0054+00 1/0 0/0 0/0 .text            daGrass_create__FP9daGrass_c */
static int daGrass_create(daGrass_c* i_this) {
    fopAcM_SetupActor(i_this, daGrass_c);
    return i_this->create();
}

/* ############################################################################################## */
/* 805231B0-805231B4 000188 0004+00 0/1 0/0 0/0 .rodata          @6978 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6978 = 1200.0f;
COMPILER_STRIP_GATE(0x805231B0, &lit_6978);
#pragma pop

/* 805231B4-805231B8 00018C 0004+00 0/1 0/0 0/0 .rodata          @6979 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6979 = 75.0f;
COMPILER_STRIP_GATE(0x805231B4, &lit_6979);
#pragma pop

/* 805231B8-805231BC 000190 0004+00 0/1 0/0 0/0 .rodata          @6980 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6980 = 83.0f / 100.0f;
COMPILER_STRIP_GATE(0x805231B8, &lit_6980);
#pragma pop

/* 805231BC-805231C0 000194 0004+00 0/1 0/0 0/0 .rodata          @6981 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6981 = 23.0f / 10.0f;
COMPILER_STRIP_GATE(0x805231BC, &lit_6981);
#pragma pop

/* 805231C0-805231C0 000198 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_805231C0 = "D_MN01";
SECTION_DEAD static char const* const stringBase_805231C7 = "D_MN54";
SECTION_DEAD static char const* const stringBase_805231CE = "D_MN07A";
#pragma pop

/* 8051C304-8051D6CC 0006A4 13C8+00 1/1 0/0 0/0 .text            create__9daGrass_cFv */
// NONMATCHING - matches except for static data
int daGrass_c::create() {
    static csXyz l_setType0[] = {
        csXyz(0, 0, 0),    csXyz(3, 0, -50),  csXyz(-2, 0, 50),   csXyz(50, 0, 27),
        csXyz(52, 0, -25), csXyz(-50, 0, 22), csXyz(-50, 0, -29),
    };

    static csXyz l_setType1[] = {
        csXyz(-18, 0, 76),  csXyz(-15, 0, 26),   csXyz(133, 0, 0),   csXyz(80, 0, 23),
        csXyz(86, 0, -83),  csXyz(33, 0, -56),   csXyz(83, 0, -27),  csXyz(-120, 0, -26),
        csXyz(-18, 0, -74), csXyz(-20, 0, -21),  csXyz(-73, 0, 1),   csXyz(-67, 0, -102),
        csXyz(-21, 0, 126), csXyz(-120, 0, -78), csXyz(-70, 0, -49), csXyz(32, 0, 103),
        csXyz(34, 0, 51),   csXyz(-72, 0, 98),   csXyz(-68, 0, 47),  csXyz(33, 0, -5),
        csXyz(135, 0, -53),
    };

    static csXyz l_setType2[] = {csXyz(25, 0, 25), csXyz(25, 0, -25), csXyz(-25, 0, 0)};

    static csXyz l_setType3[] = {
        csXyz(-24, 0, -28), csXyz(27, 0, -28), csXyz(-21, 0, 33), csXyz(-18, 0, -34),
        csXyz(44, 0, -4),   csXyz(41, 0, 10),  csXyz(24, 0, 39),
    };

    static csXyz l_setType4[] = {
        csXyz(-55, 0, -22), csXyz(-28, 0, -50), csXyz(-77, 0, 11), csXyz(55, 0, -44),
        csXyz(83, 0, -71),  csXyz(11, 0, -48),  csXyz(97, 0, -34), csXyz(-74, 0, -57),
        csXyz(31, 0, 58),   csXyz(59, 0, 30),   csXyz(13, 0, 23),  csXyz(-12, 0, 54),
        csXyz(55, 0, 97),   csXyz(10, 0, 92),   csXyz(33, 0, -10), csXyz(-99, 0, -27),
        csXyz(40, 0, -87),
    };

    static csXyz l_setType5[] = {
        csXyz(0, 0, 3),   csXyz(-26, 0, -29), csXyz(7, 0, -25), csXyz(31, 0, -5),
        csXyz(-7, 0, 40), csXyz(-35, 0, 15),  csXyz(23, 0, 32),
    };


    static offset_data l_offsetData[] = {
        {3, l_setType2}, {7, l_setType0},  {21, l_setType1}, {7, l_setType0},
        {7, l_setType3}, {17, l_setType4}, {7, l_setType5},  {7, l_setType0},
    };

    offset_data* data = l_offsetData;

    int temp_r26 = current.angle.x & 0xFF;
    u8 kind = daGrass_prm::getKind(this);
    s16 add_col = current.angle.z;

    int type;
    if ((u32)temp_r26 >= 1 && kind == 0) {
        type = ((temp_r26 - 1) % 3);
        data = &data[type];
    } else {
        type = daGrass_prm::getType(this);
        data = &data[type];
    }

    csXyz* set_type = data->set_type;

    if (kind == 0) {
        dGrass_Tex_Change();

        if (createGrass()) {
            u8 itemNo = daGrass_prm::getItemNo(this);
            u8 itemBitNo = daGrass_prm::getItemBitNo(this);

            cXyz pos;

            if (dKy_get_dayofweek() == 6 && strcmp(dComIfGp_getStartStageName(), "D_MN07A") == 0) {
                int var_r25 = 0;
                int var_r27 = 0;
                f32 var_f29 = 1200.0f;

                for (int i = 0; i < 500; i++) {
                    add_col = current.angle.z;
                    if (i != 0) {
                        randam_addcol_set(&add_col);
                    }

                    pos.x = var_f29 * cM_ssin(var_r25);
                    pos.y = 0.0f;
                    pos.z = var_f29 * cM_scos(var_r25);

                    var_r25 += 0x157;
                    if (var_r25 > 0xFFFF) {
                        var_r25 += 0xFFFF0001;
                        var_f29 += 75.0f;
                        var_r27++;

                        if (var_r27 > 1000) {
                            break;
                        }
                    }

                    if (cM_rndF(1.0f) < 0.83f) {
                        i--;
                    } else {
                        newGrassData(pos, fopAcM_GetRoomNo(this), itemNo, itemBitNo, add_col,
                                     temp_r26);
                    }
                }
            } else {
                for (int i = 0; i < data->num; i++) {
                    add_col = current.angle.z;
                    if (i != 0) {
                        randam_addcol_set(&add_col);
                    }

                    if ((u32)temp_r26 < 10) {
                        pos.x = current.pos.x + set_type->x;
                        pos.y = current.pos.y;
                        pos.z = current.pos.z + set_type->z;
                    } else {
                        pos.x = current.pos.x + set_type->x * 2.3f;
                        pos.y = current.pos.y;
                        pos.z = current.pos.z + set_type->z * 2.3f;
                    }

                    u8 num = data->num;
                    if ((num == 3 && i != 0) || (num >= 16 && num <= 21 && i >= 16) ||
                        (num >= 4 && num <= 7 && i >= 4))
                    {
                        newGrassData(pos, fopAcM_GetRoomNo(this), 0xFF, 0xFF, add_col, temp_r26);
                    } else {
                        newGrassData(pos, fopAcM_GetRoomNo(this), itemNo, itemBitNo, add_col,
                                     temp_r26);
                    }

                    set_type++;
                }
            }
        }
    } else if ((kind == 2 || kind == 3) && createFlower()) {
        u8 item_no = daGrass_prm::getItemNo(this);
        s8 temp_r28;
        if (kind == 2) {
            temp_r28 = 1;
        } else if (kind == 3) {
            temp_r28 = 2;
        }

        cXyz pos;
        for (int i = 0; i < data->num; i++) {
            add_col = current.angle.z;
            if (i != 0) {
                randam_addcol_set(&add_col);
            }

            pos.x = current.pos.x + set_type->x;
            pos.y = current.pos.y;
            pos.z = current.pos.z + set_type->z;

            newFlowerData(temp_r28, pos, fopAcM_GetRoomNo(this), item_no, add_col);
            set_type++;
        }
    }

    if (m_myObj != NULL) {
        return cPhs_ERROR_e;
    }

    m_myObj = this;
    fopAcM_setStageLayer(this);
    return cPhs_COMPLEATE_e;
}

int daGrass_c::Delete() {
    if (m_myObj == this) {
        deleteGrass();
        deleteFlower();
        m_myObj = NULL;
    }

    return 1;
}

/* 8051D6CC-8051D720 001A6C 0054+00 1/0 0/0 0/0 .text            daGrass_Delete__FP9daGrass_c */
static int daGrass_Delete(daGrass_c* i_this) {
    return i_this->Delete();
}

int daGrass_c::execute() {
    // inlines save to register instead of reloading
    // dComIfG_Ccsp()->PrepareMass();
    g_dComIfG_gameInfo.play.mCcs.mMass_Mng.Prepare();

    executeGrass();
    executeFlower();

    // dComIfG_Ccsp()->MassClear();
    g_dComIfG_gameInfo.play.mCcs.MassClear();
    return 1;
}

/* 8051D720-8051D77C 001AC0 005C+00 1/0 0/0 0/0 .text            daGrass_execute__FP9daGrass_c */
static int daGrass_execute(daGrass_c* i_this) {
    return i_this->execute();
}

int daGrass_c::draw() {
    drawGrass();
    drawFlower();
    return 1;
}

/* 8051D77C-8051D7B4 001B1C 0038+00 1/0 0/0 0/0 .text            daGrass_draw__FP9daGrass_c */
static int daGrass_draw(daGrass_c* i_this) {
    return i_this->draw();
}

/* 8051D7B4-8051D7D0 001B54 001C+00 1/1 0/0 0/0 .text            cLib_calcTimer<Uc>__FPUc */
extern "C" void func_8051D7B4(void* _this, u8* param_0) {
    // NONMATCHING
}

/* 8051D7D0-8051D88C 001B70 00BC+00 0/0 1/0 0/0 .text            __sinit_d_a_grass_cpp */
/* void __sinit_d_a_grass_cpp(){// NONMATCHING
}

#pragma push
#pragma force_active on
REGISTER_CTORS(0x8051D7D0, __sinit_d_a_grass_cpp);
#pragma pop */

#include "d/actor/d_grass.inc"

#include "d/actor/d_flower.inc"
