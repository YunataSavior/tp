//
// Generated By: dol2asm
// Translation Unit: msg/scrn/d_msg_scrn_3select
//

#include "msg/scrn/d_msg_scrn_3select.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct J2DPane {
    /* 802F7100 */ void getBounds();
    /* 802F7FCC */ void animationTransform();
};

struct JKRArchive {};

struct dSelect_cursor_c {
    /* 80194220 */ dSelect_cursor_c(u8, f32, JKRArchive*);
    /* 801950F4 */ void setPos(f32, f32, J2DPane*, bool);
    /* 801951B0 */ void setParam(f32, f32, f32, f32, f32);
    /* 801952A0 */ void setAlphaRate(f32);
};

struct dMsgScrn3Select_c {
    /* 802390B4 */ dMsgScrn3Select_c();
    /* 802398CC */ ~dMsgScrn3Select_c();
    /* 80239C64 */ void isSelect();
    /* 80239C78 */ void setString(char*, char*, char*);
    /* 80239D08 */ void setRubyString(char*, char*, char*);
    /* 80239D98 */ void translate(f32, f32);
    /* 80239DD4 */ void draw(f32, f32);
    /* 8023A094 */ void selAnimeInit(u8, u8, u8, f32, u8);
    /* 8023A398 */ void selAnimeMove(u8, u8, bool);
    /* 8023A680 */ void selAnimeEnd();
    /* 8023A934 */ void getTextBoxWidth();
    /* 8023A94C */ void getFontSize();
    /* 8023A95C */ void getRubyFontSize();
    /* 8023A97C */ void getCharSpace();
    /* 8023A98C */ void getRubyCharSpace();
    /* 8023A9AC */ void getTextBoxGlobalPosX(int);
    /* 8023A9D8 */ void getTextBoxGlobalPosY(int);
    /* 8023AA04 */ void open1Proc();
    /* 8023AAF4 */ void open2Proc();
    /* 8023AC14 */ void waitProc();
    /* 8023AC44 */ void selectProc();
    /* 8023AE68 */ void changeProc();
    /* 8023B148 */ void closeProc();
    /* 8023B228 */ void selectScale();
    /* 8023B4AC */ void selectTrans();
    /* 8023B870 */ void selectAnimeTransform(int);
};

struct JKRFileLoader {
    /* 802D4270 */ void getGlbResource(char const*, JKRFileLoader*);
};

struct JKRExpHeap {};

struct J2DTextBox {
    /* 80300658 */ void getStringPtr() const;
    /* 8030074C */ void setString(s16, char const*, ...);
};

struct J2DGrafContext {};

struct J2DScreen {
    /* 802F8498 */ J2DScreen();
    /* 802F8648 */ void setPriority(char const*, u32, JKRArchive*);
    /* 802F8ED4 */ void draw(f32, f32, J2DGrafContext const*);
    /* 802F9690 */ void animation();
};

struct J2DAnmLoaderDataBase {
    /* 80308A6C */ void load(void const*);
};

struct J2DAnmColorKey {
    /* 80239BE0 */ ~J2DAnmColorKey();
};

struct CPaneMgrAlpha {
    /* 802555C8 */ void show();
    /* 80255608 */ void hide();
};

struct CPaneMgr {
    /* 80253984 */ CPaneMgr(J2DScreen*, u64, u8, JKRExpHeap*);
    /* 802542E8 */ void getGlobalPosX();
    /* 80254364 */ void getGlobalPosY();
    /* 802545B0 */ void paneTrans(f32, f32);
    /* 80254638 */ void paneScale(f32, f32);
    /* 80254EBC */ void getGlobalVtxCenter(J2DPane*, bool, s16);
};

//
// Forward References:
//

extern "C" void __ct__17dMsgScrn3Select_cFv();
extern "C" void __dt__17dMsgScrn3Select_cFv();
extern "C" void __dt__14J2DAnmColorKeyFv();
extern "C" void isSelect__17dMsgScrn3Select_cFv();
extern "C" void setString__17dMsgScrn3Select_cFPcPcPc();
extern "C" void setRubyString__17dMsgScrn3Select_cFPcPcPc();
extern "C" void translate__17dMsgScrn3Select_cFff();
extern "C" void draw__17dMsgScrn3Select_cFff();
extern "C" void selAnimeInit__17dMsgScrn3Select_cFUcUcUcfUc();
extern "C" void selAnimeMove__17dMsgScrn3Select_cFUcUcb();
extern "C" void selAnimeEnd__17dMsgScrn3Select_cFv();
extern "C" void getTextBoxWidth__17dMsgScrn3Select_cFv();
extern "C" void getFontSize__17dMsgScrn3Select_cFv();
extern "C" void getRubyFontSize__17dMsgScrn3Select_cFv();
extern "C" void getCharSpace__17dMsgScrn3Select_cFv();
extern "C" void getRubyCharSpace__17dMsgScrn3Select_cFv();
extern "C" void getTextBoxGlobalPosX__17dMsgScrn3Select_cFi();
extern "C" void getTextBoxGlobalPosY__17dMsgScrn3Select_cFi();
extern "C" void open1Proc__17dMsgScrn3Select_cFv();
extern "C" void open2Proc__17dMsgScrn3Select_cFv();
extern "C" void waitProc__17dMsgScrn3Select_cFv();
extern "C" void selectProc__17dMsgScrn3Select_cFv();
extern "C" void changeProc__17dMsgScrn3Select_cFv();
extern "C" void closeProc__17dMsgScrn3Select_cFv();
extern "C" void selectScale__17dMsgScrn3Select_cFv();
extern "C" void selectTrans__17dMsgScrn3Select_cFv();
extern "C" void selectAnimeTransform__17dMsgScrn3Select_cFi();
extern "C" void __sinit_d_msg_scrn_3select_cpp();
extern "C" extern char const* const msg_scrn_d_msg_scrn_3select__stringBase0;
extern "C" extern u8 data_803C0CA0[24 + 48 /* padding */];

//
// External References:
//

void mDoExt_getMesgFont();
void dPaneClass_showNullPane(J2DScreen*);
void* operator new(u32);
void operator delete(void*);

extern "C" void mDoExt_getMesgFont__Fv();
extern "C" void __ct__16dSelect_cursor_cFUcfP10JKRArchive();
extern "C" void setPos__16dSelect_cursor_cFffP7J2DPaneb();
extern "C" void setParam__16dSelect_cursor_cFfffff();
extern "C" void setAlphaRate__16dSelect_cursor_cFf();
extern "C" void __ct__8CPaneMgrFP9J2DScreenUxUcP10JKRExpHeap();
extern "C" void getGlobalPosX__8CPaneMgrFv();
extern "C" void getGlobalPosY__8CPaneMgrFv();
extern "C" void paneTrans__8CPaneMgrFff();
extern "C" void paneScale__8CPaneMgrFff();
extern "C" void getGlobalVtxCenter__8CPaneMgrFP7J2DPanebs();
extern "C" void dPaneClass_showNullPane__FP9J2DScreen();
extern "C" void show__13CPaneMgrAlphaFv();
extern "C" void hide__13CPaneMgrAlphaFv();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader();
extern "C" void getBounds__7J2DPaneFv();
extern "C" void animationTransform__7J2DPaneFv();
extern "C" void __ct__9J2DScreenFv();
extern "C" void setPriority__9J2DScreenFPCcUlP10JKRArchive();
extern "C" void draw__9J2DScreenFffPC14J2DGrafContext();
extern "C" void animation__9J2DScreenFv();
extern "C" void getStringPtr__10J2DTextBoxCFv();
extern "C" void setString__10J2DTextBoxFsPCce();
extern "C" void load__20J2DAnmLoaderDataBaseFPCv();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_20();
extern "C" void _savegpr_23();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_20();
extern "C" void _restgpr_23();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" void strcpy();
extern "C" extern void* __vt__10J2DAnmBase[4];
extern "C" extern void* __vt__10JUTNameTab[3];
extern "C" extern void* __vt__14J2DAnmColorKey[5];
extern "C" extern void* __vt__11J2DAnmColor[5];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_MsgObject_HIO_c[1040];

//
// Declarations:
//

/* ############################################################################################## */
/* 80399708-80399828 0120+00 s=1 e=0 z=0  None .rodata    tag_name$3763 */
SECTION_RODATA static u8 const tag_name[288] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0x5F, 0x6E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0x5F, 0x67,
    0x00, 0x00, 0x00, 0x00, 0x61, 0x5F, 0x67, 0x72, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0x5F, 0x6D,
    0x77, 0x5F, 0x79, 0x65, 0x73, 0x5F, 0x30, 0x30, 0x77, 0x5F, 0x79, 0x65, 0x73, 0x5F, 0x30, 0x31,
    0x77, 0x5F, 0x79, 0x65, 0x73, 0x5F, 0x30, 0x32, 0x77, 0x5F, 0x79, 0x65, 0x73, 0x5F, 0x30, 0x33,
    0x77, 0x5F, 0x79, 0x65, 0x73, 0x5F, 0x30, 0x34, 0x73, 0x65, 0x6C, 0x5F, 0x70, 0x6F, 0x30, 0x30,
    0x00, 0x61, 0x5F, 0x6B, 0x61, 0x68, 0x65, 0x6E, 0x61, 0x5F, 0x63, 0x75, 0x72, 0x73, 0x6F, 0x72,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x62, 0x5F, 0x6E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x62, 0x5F, 0x67,
    0x00, 0x00, 0x00, 0x00, 0x62, 0x5F, 0x67, 0x72, 0x00, 0x00, 0x00, 0x00, 0x00, 0x62, 0x5F, 0x6D,
    0x77, 0x5F, 0x79, 0x65, 0x73, 0x5F, 0x30, 0x37, 0x77, 0x5F, 0x79, 0x65, 0x73, 0x5F, 0x30, 0x36,
    0x77, 0x5F, 0x79, 0x65, 0x73, 0x5F, 0x30, 0x35, 0x77, 0x5F, 0x79, 0x65, 0x73, 0x5F, 0x30, 0x38,
    0x77, 0x5F, 0x79, 0x65, 0x73, 0x5F, 0x30, 0x39, 0x73, 0x65, 0x6C, 0x5F, 0x70, 0x6F, 0x30, 0x31,
    0x00, 0x62, 0x5F, 0x6B, 0x61, 0x68, 0x65, 0x6E, 0x62, 0x5F, 0x63, 0x75, 0x72, 0x73, 0x6F, 0x72,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x5F, 0x6E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x5F, 0x67,
    0x00, 0x00, 0x00, 0x00, 0x63, 0x5F, 0x67, 0x72, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x5F, 0x6D,
    0x77, 0x5F, 0x79, 0x65, 0x73, 0x5F, 0x31, 0x32, 0x77, 0x5F, 0x79, 0x65, 0x73, 0x5F, 0x31, 0x31,
    0x77, 0x5F, 0x79, 0x65, 0x73, 0x5F, 0x31, 0x30, 0x77, 0x5F, 0x79, 0x65, 0x73, 0x5F, 0x31, 0x33,
    0x77, 0x5F, 0x79, 0x65, 0x73, 0x5F, 0x31, 0x34, 0x73, 0x65, 0x6C, 0x5F, 0x70, 0x6F, 0x30, 0x32,
    0x00, 0x63, 0x5F, 0x6B, 0x61, 0x68, 0x65, 0x6E, 0x63, 0x5F, 0x63, 0x75, 0x72, 0x73, 0x6F, 0x72,
};

/* 80399828-80399834 000C+00 s=1 e=0 z=0  None .rodata    @4497 */
SECTION_RODATA static u8 const lit_4497[12] = {
    0x43, 0x4C, 0x00, 0x00, 0x43, 0x98, 0x00, 0x00, 0x43, 0xCA, 0x00, 0x00,
};

/* 80399834-80399840 000C+00 s=1 e=0 z=0  None .rodata    @4520 */
SECTION_RODATA static u8 const lit_4520[12] = {
    0x43, 0x4C, 0x00, 0x00, 0x43, 0x98, 0x00, 0x00, 0x43, 0xCA, 0x00, 0x00,
};

/* 80399840-803998A0 005D+03 s=1 e=0 z=0  None .rodata    @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD char const* const stringBase_80399840 = "zelda_window_3menu.blo";
SECTION_DEAD char const* const stringBase_80399857 = "zelda_window_3menu.bck";
SECTION_DEAD char const* const stringBase_8039986E = "zelda_window_3menu.bpk";
SECTION_DEAD char const* const stringBase_80399885 = "zelda_window_3menu.btk";
SECTION_DEAD char const* const stringBase_8039989C = "";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_8039989D = "\0\0";
#pragma pop

/* 803C0C00-803C0C0C 000C+00 s=1 e=0 z=0  None .data      cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803C0C0C-803C0C18 000C+00 s=1 e=0 z=0  None .data      @3754 */
SECTION_DATA static void* lit_3754[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)open1Proc__17dMsgScrn3Select_cFv,
};

/* 803C0C18-803C0C24 000C+00 s=1 e=0 z=0  None .data      @3755 */
SECTION_DATA static void* lit_3755[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)open2Proc__17dMsgScrn3Select_cFv,
};

/* 803C0C24-803C0C30 000C+00 s=1 e=0 z=0  None .data      @3756 */
SECTION_DATA static void* lit_3756[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)waitProc__17dMsgScrn3Select_cFv,
};

/* 803C0C30-803C0C3C 000C+00 s=1 e=0 z=0  None .data      @3757 */
SECTION_DATA static void* lit_3757[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)selectProc__17dMsgScrn3Select_cFv,
};

/* 803C0C3C-803C0C48 000C+00 s=1 e=0 z=0  None .data      @3758 */
SECTION_DATA static void* lit_3758[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)changeProc__17dMsgScrn3Select_cFv,
};

/* 803C0C48-803C0C54 000C+00 s=1 e=0 z=0  None .data      @3759 */
SECTION_DATA static void* lit_3759[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)closeProc__17dMsgScrn3Select_cFv,
};

/* 803C0C54-803C0CA0 0048+04 s=3 e=0 z=0  None .data      process */
SECTION_DATA static u8 process[72 + 4 /* padding */] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
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

/* 803C0CA0-803C0CE8 0018+30 s=0 e=0 z=0  None .data      tag_n$4921 */
SECTION_DATA u8 data_803C0CA0[24 + 48 /* padding */] = {
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x61,
    0x5F,
    0x74,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x62,
    0x5F,
    0x74,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x63,
    0x5F,
    0x74,
    /* padding */
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 803C0CE8-803C0CF8 000C+04 s=2 e=0 z=0  None .data      __vt__17dMsgScrn3Select_c */
SECTION_DATA static void* __vt__17dMsgScrn3Select_c[3 + 1 /* padding */] = {
    (void*)NULL,
    (void*)NULL,
    (void*)__dt__17dMsgScrn3Select_cFv,
    /* padding */
    NULL,
};

/* 80454B58-80454B5C 0004+00 s=8 e=0 z=0  None .sdata2    @3909 */
SECTION_SDATA2 static u8 lit_3909[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80454B5C-80454B60 0004+00 s=4 e=0 z=0  None .sdata2    @3910 */
SECTION_SDATA2 static f32 lit_3910 = 190.0f;

/* 80454B60-80454B64 0004+00 s=10 e=0 z=0  None .sdata2    @3911 */
SECTION_SDATA2 static f32 lit_3911 = 1.0f;

/* 802390B4-802398CC 0818+00 s=0 e=4 z=0  None .text      __ct__17dMsgScrn3Select_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dMsgScrn3Select_c::dMsgScrn3Select_c() {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_3select/__ct__17dMsgScrn3Select_cFv.s"
}
#pragma pop

/* 802398CC-80239BE0 0314+00 s=1 e=0 z=0  None .text      __dt__17dMsgScrn3Select_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dMsgScrn3Select_c::~dMsgScrn3Select_c() {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_3select/__dt__17dMsgScrn3Select_cFv.s"
}
#pragma pop

/* 80239BE0-80239C64 0084+00 s=0 e=1 z=0  None .text      __dt__14J2DAnmColorKeyFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J2DAnmColorKey::~J2DAnmColorKey() {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_3select/__dt__14J2DAnmColorKeyFv.s"
}
#pragma pop

/* 80239C64-80239C78 0014+00 s=0 e=5 z=0  None .text      isSelect__17dMsgScrn3Select_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrn3Select_c::isSelect() {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_3select/isSelect__17dMsgScrn3Select_cFv.s"
}
#pragma pop

/* 80239C78-80239D08 0090+00 s=0 e=5 z=0  None .text      setString__17dMsgScrn3Select_cFPcPcPc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrn3Select_c::setString(char* param_0, char* param_1, char* param_2) {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_3select/setString__17dMsgScrn3Select_cFPcPcPc.s"
}
#pragma pop

/* 80239D08-80239D98 0090+00 s=0 e=5 z=0  None .text      setRubyString__17dMsgScrn3Select_cFPcPcPc
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrn3Select_c::setRubyString(char* param_0, char* param_1, char* param_2) {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_3select/setRubyString__17dMsgScrn3Select_cFPcPcPc.s"
}
#pragma pop

/* 80239D98-80239DD4 003C+00 s=0 e=5 z=0  None .text      translate__17dMsgScrn3Select_cFff */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrn3Select_c::translate(f32 param_0, f32 param_1) {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_3select/translate__17dMsgScrn3Select_cFff.s"
}
#pragma pop

/* ############################################################################################## */
/* 80454B64-80454B68 0004+00 s=2 e=0 z=0  None .sdata2    @4154 */
SECTION_SDATA2 static f32 lit_4154 = 0.5f;

/* 80454B68-80454B6C 0004+00 s=1 e=0 z=0  None .sdata2    @4155 */
SECTION_SDATA2 static f32 lit_4155 = 3.0f;

/* 80454B6C-80454B70 0004+00 s=1 e=0 z=0  None .sdata2    @4156 */
SECTION_SDATA2 static f32 lit_4156 = 9.0f / 10.0f;

/* 80454B70-80454B74 0004+00 s=1 e=0 z=0  None .sdata2    @4157 */
SECTION_SDATA2 static f32 lit_4157 = 7.0f / 10.0f;

/* 80454B74-80454B78 0004+00 s=1 e=0 z=0  None .sdata2    @4158 */
SECTION_SDATA2 static f32 lit_4158 = 1.0f / 20.0f;

/* 80239DD4-8023A094 02C0+00 s=0 e=5 z=0  None .text      draw__17dMsgScrn3Select_cFff */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrn3Select_c::draw(f32 param_0, f32 param_1) {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_3select/draw__17dMsgScrn3Select_cFff.s"
}
#pragma pop

/* 8023A094-8023A398 0304+00 s=0 e=5 z=0  None .text selAnimeInit__17dMsgScrn3Select_cFUcUcUcfUc
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrn3Select_c::selAnimeInit(u8 param_0, u8 param_1, u8 param_2, f32 param_3,
                                         u8 param_4) {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_3select/selAnimeInit__17dMsgScrn3Select_cFUcUcUcfUc.s"
}
#pragma pop

/* ############################################################################################## */
/* 80454B78-80454B80 0008+00 s=2 e=0 z=0  None .sdata2    @4345 */
SECTION_SDATA2 static f64 lit_4345 = 4503601774854144.0 /* cast s32 to float */;

/* 8023A398-8023A680 02E8+00 s=0 e=5 z=0  None .text      selAnimeMove__17dMsgScrn3Select_cFUcUcb */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrn3Select_c::selAnimeMove(u8 param_0, u8 param_1, bool param_2) {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_3select/selAnimeMove__17dMsgScrn3Select_cFUcUcb.s"
}
#pragma pop

/* ############################################################################################## */
/* 80454B80-80454B84 0004+00 s=2 e=0 z=0  None .sdata2    @4434 */
SECTION_SDATA2 static f32 lit_4434 = 199.0f;

/* 8023A680-8023A934 02B4+00 s=0 e=9 z=0  None .text      selAnimeEnd__17dMsgScrn3Select_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrn3Select_c::selAnimeEnd() {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_3select/selAnimeEnd__17dMsgScrn3Select_cFv.s"
}
#pragma pop

/* 8023A934-8023A94C 0018+00 s=0 e=5 z=0  None .text      getTextBoxWidth__17dMsgScrn3Select_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrn3Select_c::getTextBoxWidth() {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_3select/getTextBoxWidth__17dMsgScrn3Select_cFv.s"
}
#pragma pop

/* 8023A94C-8023A95C 0010+00 s=0 e=5 z=0  None .text      getFontSize__17dMsgScrn3Select_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrn3Select_c::getFontSize() {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_3select/getFontSize__17dMsgScrn3Select_cFv.s"
}
#pragma pop

/* 8023A95C-8023A97C 0020+00 s=0 e=2 z=0  None .text      getRubyFontSize__17dMsgScrn3Select_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrn3Select_c::getRubyFontSize() {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_3select/getRubyFontSize__17dMsgScrn3Select_cFv.s"
}
#pragma pop

/* 8023A97C-8023A98C 0010+00 s=0 e=5 z=0  None .text      getCharSpace__17dMsgScrn3Select_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrn3Select_c::getCharSpace() {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_3select/getCharSpace__17dMsgScrn3Select_cFv.s"
}
#pragma pop

/* 8023A98C-8023A9AC 0020+00 s=0 e=2 z=0  None .text      getRubyCharSpace__17dMsgScrn3Select_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrn3Select_c::getRubyCharSpace() {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_3select/getRubyCharSpace__17dMsgScrn3Select_cFv.s"
}
#pragma pop

/* 8023A9AC-8023A9D8 002C+00 s=0 e=2 z=0  None .text getTextBoxGlobalPosX__17dMsgScrn3Select_cFi
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrn3Select_c::getTextBoxGlobalPosX(int param_0) {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_3select/getTextBoxGlobalPosX__17dMsgScrn3Select_cFi.s"
}
#pragma pop

/* 8023A9D8-8023AA04 002C+00 s=0 e=2 z=0  None .text getTextBoxGlobalPosY__17dMsgScrn3Select_cFi
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrn3Select_c::getTextBoxGlobalPosY(int param_0) {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_3select/getTextBoxGlobalPosY__17dMsgScrn3Select_cFi.s"
}
#pragma pop

/* 8023AA04-8023AAF4 00F0+00 s=1 e=0 z=0  None .text      open1Proc__17dMsgScrn3Select_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrn3Select_c::open1Proc() {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_3select/open1Proc__17dMsgScrn3Select_cFv.s"
}
#pragma pop

/* 8023AAF4-8023AC14 0120+00 s=1 e=0 z=0  None .text      open2Proc__17dMsgScrn3Select_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrn3Select_c::open2Proc() {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_3select/open2Proc__17dMsgScrn3Select_cFv.s"
}
#pragma pop

/* 8023AC14-8023AC44 0030+00 s=1 e=0 z=0  None .text      waitProc__17dMsgScrn3Select_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrn3Select_c::waitProc() {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_3select/waitProc__17dMsgScrn3Select_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80454B84-80454B88 0004+00 s=2 e=0 z=0  None .sdata2    @4604 */
SECTION_SDATA2 static f32 lit_4604 = 303.0f;

/* 80454B88-80454B8C 0004+00 s=2 e=0 z=0  None .sdata2    @4605 */
SECTION_SDATA2 static f32 lit_4605 = 300.0f;

/* 80454B8C-80454B90 0004+00 s=2 e=0 z=0  None .sdata2    @4606 */
SECTION_SDATA2 static f32 lit_4606 = 403.0f;

/* 80454B90-80454B98 0004+04 s=2 e=0 z=0  None .sdata2    @4607 */
SECTION_SDATA2 static f32 lit_4607[1 + 1 /* padding */] = {
    400.0f,
    /* padding */
    0.0f,
};

/* 8023AC44-8023AE68 0224+00 s=1 e=0 z=0  None .text      selectProc__17dMsgScrn3Select_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrn3Select_c::selectProc() {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_3select/selectProc__17dMsgScrn3Select_cFv.s"
}
#pragma pop

/* 8023AE68-8023B148 02E0+00 s=1 e=0 z=0  None .text      changeProc__17dMsgScrn3Select_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrn3Select_c::changeProc() {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_3select/changeProc__17dMsgScrn3Select_cFv.s"
}
#pragma pop

/* 8023B148-8023B228 00E0+00 s=1 e=0 z=0  None .text      closeProc__17dMsgScrn3Select_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrn3Select_c::closeProc() {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_3select/closeProc__17dMsgScrn3Select_cFv.s"
}
#pragma pop

/* 8023B228-8023B4AC 0284+00 s=1 e=0 z=0  None .text      selectScale__17dMsgScrn3Select_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrn3Select_c::selectScale() {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_3select/selectScale__17dMsgScrn3Select_cFv.s"
}
#pragma pop

/* 8023B4AC-8023B870 03C4+00 s=3 e=0 z=0  None .text      selectTrans__17dMsgScrn3Select_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrn3Select_c::selectTrans() {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_3select/selectTrans__17dMsgScrn3Select_cFv.s"
}
#pragma pop

/* 8023B870-8023B914 00A4+00 s=7 e=0 z=0  None .text selectAnimeTransform__17dMsgScrn3Select_cFi
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dMsgScrn3Select_c::selectAnimeTransform(int param_0) {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_3select/selectAnimeTransform__17dMsgScrn3Select_cFi.s"
}
#pragma pop

/* 8023B914-8023B9B4 00A0+00 s=0 e=1 z=0  None .text      __sinit_d_msg_scrn_3select_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void __sinit_d_msg_scrn_3select_cpp() {
    nofralloc
#include "asm/msg/scrn/d_msg_scrn_3select/__sinit_d_msg_scrn_3select_cpp.s"
}
#pragma pop