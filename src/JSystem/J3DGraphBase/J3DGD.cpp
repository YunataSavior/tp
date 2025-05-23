//
// J3DGD
//

#include "JSystem/J3DGraphBase/J3DGD.h"
#include "dolphin/gd.h"
#include "dolphin/os.h"

/* 8030D098-8030D210 3079D8 0178+00 0/0 1/1 0/0 .text J3DGDSetGenMode__FUcUcUcUc11_GXCullMode */
void J3DGDSetGenMode(u8 texGenNum, u8 colorChanNum, u8 tevStageNum, u8 indTexStageNum,
                     GXCullMode cullMode) {
    GDOverflowCheck(0xa);
    J3DGDWriteBPCmd(0xfe07fc3f);
    static u8 cm2hw[4] = {0, 2, 1, 3};
    J3DGDWriteBPCmd(texGenNum | colorChanNum << 4 | (tevStageNum - 1) << 0xa |
                    cm2hw[cullMode] << 0xe | indTexStageNum << 0x10);
}

/* 8030D210-8030D364 307B50 0154+00 0/0 1/1 0/0 .text            J3DGDSetGenMode_3Param__FUcUcUc */
void J3DGDSetGenMode_3Param(u8 texGenNum, u8 tevStageNum, u8 indTexStageNum) {
    GDOverflowCheck(0xa);
    J3DGDWriteBPCmd(0xfe073c0f);
    J3DGDWriteBPCmd(texGenNum | (tevStageNum - 1) << 0xa | indTexStageNum << 0x10);
}

/* 8030D364-8030D65C 307CA4 02F8+00 0/0 1/1 0/0 .text J3DGDSetLightAttn__F10_GXLightIDffffff */
void J3DGDSetLightAttn(GXLightID id, f32 a0, f32 a1, f32 a2, f32 k0, f32 k1, f32 k2) {
    J3DGDWriteXFCmdHdr(0x0604 + __GDLightID2Offset(id), 6);
    J3DGDWrite_f32(a0);
    J3DGDWrite_f32(a1);
    J3DGDWrite_f32(a2);
    J3DGDWrite_f32(k0);
    J3DGDWrite_f32(k1);
    J3DGDWrite_f32(k2);
}

/* 8030D65C-8030D76C 307F9C 0110+00 0/0 1/1 0/0 .text J3DGDSetLightColor__F10_GXLightID8_GXColor
 */
void J3DGDSetLightColor(GXLightID id, GXColor color) {
    J3DGDWriteXFCmd(0x0603 + __GDLightID2Offset(id),
                    (color.r << 24) | (color.g << 16) | (color.b << 8) | (color.a << 0));
}

/* 8030D76C-8030D938 3080AC 01CC+00 0/0 1/1 0/0 .text            J3DGDSetLightPos__F10_GXLightIDfff
 */
void J3DGDSetLightPos(GXLightID id, f32 x, f32 y, f32 z) {
    J3DGDWriteXFCmdHdr(0x060A + __GDLightID2Offset(id), 3);
    J3DGDWrite_f32(x);
    J3DGDWrite_f32(y);
    J3DGDWrite_f32(z);
}

/* 8030D938-8030DB04 308278 01CC+00 0/0 1/1 0/0 .text            J3DGDSetLightDir__F10_GXLightIDfff
 */
void J3DGDSetLightDir(GXLightID id, f32 x, f32 y, f32 z) {
    J3DGDWriteXFCmdHdr(0x060D + __GDLightID2Offset(id), 3);
    J3DGDWrite_f32(x);
    J3DGDWrite_f32(y);
    J3DGDWrite_f32(z);
}

/* 8030DB04-8030E064 308444 0560+00 1/0 1/1 0/0 .text
 * J3DGDSetVtxAttrFmtv__F9_GXVtxFmtPC17_GXVtxAttrFmtListb       */
void J3DGDSetVtxAttrFmtv(GXVtxFmt fmt, GXVtxAttrFmtList const* fmtList, bool param_2) {
    u32 pos_cnt = GX_POS_XYZ;
    u32 pos_type = GX_F32;
    u32 pos_shift = 0;
    u32 nrm_cnt = GX_NRM_XYZ;
    u32 nrm_type = GX_F32;
    u32 local_34 = 0;
    u32 clr0_cnt = GX_CLR_RGBA;
    u32 clr0_type = GX_RGBA8;
    u32 clr1_cnt = GX_CLR_RGBA;
    u32 clr1_type = GX_RGBA8;
    u32 tex0_cnt = GX_TEX_ST;
    u32 tex0_type = GX_F32;
    u32 tex0_shift = 0;
    u32 tex1_cnt = GX_TEX_ST;
    u32 tex1_type = GX_F32;
    u32 tex1_shift = 0;
    u32 tex2_cnt = GX_TEX_ST;
    u32 tex2_type = GX_F32;
    u32 tex2_shift = 0;
    u32 tex3_cnt = GX_TEX_ST;
    u32 tex3_type = GX_F32;
    u32 tex3_shift = 0;
    u32 tex4_cnt = GX_TEX_ST;
    u32 tex4_type = GX_F32;
    u32 tex4_shift = 0;
    u32 tex5_cnt = GX_TEX_ST;
    u32 tex5_type = GX_F32;
    u32 tex5_shift = 0;
    u32 tex6_cnt = GX_TEX_ST;
    u32 tex6_type = GX_F32;
    u32 tex6_shift = 0;
    u32 tex7_cnt = GX_TEX_ST;
    u32 tex7_type = GX_F32;
    u32 tex7_shift = 0;
    for (; fmtList->attr != GX_VA_NULL; fmtList++) {
        switch (fmtList->attr) {
        case GX_VA_POS:
            pos_cnt = fmtList->cnt;
            pos_type = fmtList->type;
            pos_shift = fmtList->frac;
            break;
        case GX_VA_NRM:
        case GX_VA_NBT:
            nrm_type = fmtList->type;
            if (fmtList->cnt == GX_NRM_NBT3) {
                nrm_cnt = GX_NRM_NBT;
                local_34 = 1;
            } else {
                if (param_2) {
                    nrm_cnt = GX_NRM_NBT;
                } else {
                    nrm_cnt = fmtList->cnt;
                }
                local_34 = 0;
            }
            break;
        case GX_VA_CLR0:
            clr0_cnt = fmtList->cnt;
            clr0_type = fmtList->type;
            break;
        case GX_VA_CLR1:
            clr1_cnt = fmtList->cnt;
            clr1_type = fmtList->type;
            break;
        case GX_VA_TEX0:
            tex0_cnt = fmtList->cnt;
            tex0_type = fmtList->type;
            tex0_shift = fmtList->frac;
            break;
        case GX_VA_TEX1:
            tex1_cnt = fmtList->cnt;
            tex1_type = fmtList->type;
            tex1_shift = fmtList->frac;
            break;
        case GX_VA_TEX2:
            tex2_cnt = fmtList->cnt;
            tex2_type = fmtList->type;
            tex2_shift = fmtList->frac;
            break;
        case GX_VA_TEX3:
            tex3_cnt = fmtList->cnt;
            tex3_type = fmtList->type;
            tex3_shift = fmtList->frac;
            break;
        case GX_VA_TEX4:
            tex4_cnt = fmtList->cnt;
            tex4_type = fmtList->type;
            tex4_shift = fmtList->frac;
            break;
        case GX_VA_TEX5:
            tex5_cnt = fmtList->cnt;
            tex5_type = fmtList->type;
            tex5_shift = fmtList->frac;
            break;
        case GX_VA_TEX6:
            tex6_cnt = fmtList->cnt;
            tex6_type = fmtList->type;
            tex6_shift = fmtList->frac;
            break;
        case GX_VA_TEX7:
            tex7_cnt = fmtList->cnt;
            tex7_type = fmtList->type;
            tex7_shift = fmtList->frac;
            break;
        }
    }
    GDOverflowCheck(0x12);
    J3DGDWriteCPCmd(CP_REG_VAT_GRP0_ID + fmt,
                    pos_cnt | pos_type << 1 | pos_shift << 4 | nrm_cnt << 9 | nrm_type << 0xa |
                        clr0_cnt << 0xd | clr0_type << 0xe | clr1_cnt << 0x11 | clr1_type << 0x12 |
                        tex0_cnt << 0x15 | tex0_type << 0x16 | tex0_shift << 0x19 | 0x40000000 |
                        local_34 << 0x1f);
    J3DGDWriteCPCmd(CP_REG_VAT_GRP1_ID + fmt,
                    tex1_cnt | tex1_type << 1 | tex1_shift << 4 | tex2_cnt << 9 | tex2_type << 0xa |
                        tex2_shift << 0xd | tex3_cnt << 0x12 | tex3_type << 0x13 |
                        tex3_shift << 0x16 | tex4_cnt << 0x1b | tex4_type << 0x1c | 0x80000000);
    J3DGDWriteCPCmd(CP_REG_VAT_GRP2_ID + fmt,
                    tex4_shift | tex5_cnt << 5 | tex5_type << 6 | tex5_shift << 9 |
                        tex6_cnt << 0xe | tex6_type << 0xf | tex6_shift << 0x12 | tex7_cnt << 0x17 |
                        tex7_type << 0x18 | tex7_shift << 0x1b);
}

/* 8030E064-8030E234 3089A4 01D0+00 1/0 1/1 0/0 .text
 * J3DGDSetTexCoordGen__F13_GXTexGenType12_GXTexGenSrc          */
void J3DGDSetTexCoordGen(GXTexGenType texGenType, GXTexGenSrc texGenSrc) {
    u32 input_form = 0;
    u32 proj_type = 0;
    u32 src_row = 5;
    u32 bump_src_tex = 5;
    u32 bump_src_light = 0;
    u32 texgen_type;
    switch (texGenSrc) {
    case GX_TG_POS:
        src_row = 0;
        input_form = 1;
        break;
    case GX_TG_NRM:
        src_row = 1;
        input_form = 1;
        break;
    case GX_TG_BINRM:
        src_row = 3;
        input_form = 1;
        break;
    case GX_TG_TANGENT:
        src_row = 4;
        input_form = 1;
        break;
    case GX_TG_COLOR0:
        src_row = 2;
        break;
    case GX_TG_COLOR1:
        src_row = 2;
        break;
    case GX_TG_TEX0:
        src_row = 5;
        break;
    case GX_TG_TEX1:
        src_row = 6;
        break;
    case GX_TG_TEX2:
        src_row = 7;
        break;
    case GX_TG_TEX3:
        src_row = 8;
        break;
    case GX_TG_TEX4:
        src_row = 9;
        break;
    case GX_TG_TEX5:
        src_row = 10;
        break;
    case GX_TG_TEX6:
        src_row = 11;
        break;
    case GX_TG_TEX7:
        src_row = 12;
        break;
    case GX_TG_TEXCOORD0:
        bump_src_tex = 0;
        break;
    case GX_TG_TEXCOORD1:
        bump_src_tex = 1;
        break;
    case GX_TG_TEXCOORD2:
        bump_src_tex = 2;
        break;
    case GX_TG_TEXCOORD3:
        bump_src_tex = 3;
        break;
    case GX_TG_TEXCOORD4:
        bump_src_tex = 4;
        break;
    case GX_TG_TEXCOORD5:
        bump_src_tex = 5;
        break;
    case GX_TG_TEXCOORD6:
        bump_src_tex = 6;
        break;
    }
    switch (texGenType) {
    case GX_TG_MTX2x4:
        texgen_type = 0;
        break;
    case GX_TG_MTX3x4:
        texgen_type = 0;
        proj_type = 1;
        break;
    case GX_TG_BUMP0:
    case GX_TG_BUMP1:
    case GX_TG_BUMP2:
    case GX_TG_BUMP3:
    case GX_TG_BUMP4:
    case GX_TG_BUMP5:
    case GX_TG_BUMP6:
    case GX_TG_BUMP7:
        texgen_type = 1;
        bump_src_light = texGenType - 2;
        break;
    case GX_TG_SRTG:
        if (texGenSrc == GX_TG_COLOR0) {
            texgen_type = 2;
        } else {
            texgen_type = 3;
        }
        break;
    }
    J3DGDWrite_u32(
        proj_type << (31 - GX_XF_TEX_PROJTYPE_END) | input_form << (31 - GX_XF_TEX_INPUTFORM_END) |
        texgen_type << (31 - GX_XF_TEX_TEXGENTYPE_END) | src_row << (31 - GX_XF_TEX_SRCROW_END) |
        bump_src_tex << (31 - GX_XF_TEX_BUMPSRCTEX_END) |
        bump_src_light << (31 - GX_XF_TEX_BUMPSRCLIGHT_END));
}

/* 8030E234-8030E438 308B74 0204+00 0/0 16/16 0/0 .text
 * J3DGDSetTexCoordScale2__F13_GXTexCoordIDUsUcUcUsUcUc         */
void J3DGDSetTexCoordScale2(GXTexCoordID param_0, u16 param_1, u8 param_2, u8 param_3, u16 param_4,
                            u8 param_5, u8 param_6) {
    GDOverflowCheck(0xf);
    J3DGDWriteBPCmd(0xfe03ffff);
    J3DGDWriteBPCmd((param_1 - 1) | param_2 << 0x10 | param_3 << 0x11 |
                    (param_0 * 2 + 0x30) << 0x18);
    J3DGDWriteBPCmd((param_4 - 1) | param_5 << 0x10 | param_6 << 0x11 |
                    (param_0 * 2 + 0x31) << 0x18);
}

/* 8045090C-80450914 00038C 0008+00 1/1 0/0 0/0 .sdata           J3DGDTexMode0Ids */
static u8 J3DGDTexMode0Ids[8] = {
    0x80, 0x81, 0x82, 0x83, 0xA0, 0xA1, 0xA2, 0xA3,
};

/* 80450914-8045091C 000394 0008+00 1/1 0/0 0/0 .sdata           J3DGDTexMode1Ids */
static u8 J3DGDTexMode1Ids[8] = {
    0x84, 0x85, 0x86, 0x87, 0xA4, 0xA5, 0xA6, 0xA7,
};

/* 8045091C-80450924 00039C 0008+00 1/1 0/0 0/0 .sdata           J3DGDTexImage0Ids */
static u8 J3DGDTexImage0Ids[8] = {
    0x88, 0x89, 0x8A, 0x8B, 0xA8, 0xA9, 0xAA, 0xAB,
};

/* 80450924-8045092C 0003A4 0008+00 2/2 0/0 0/0 .sdata           J3DGDTexImage3Ids */
static u8 J3DGDTexImage3Ids[8] = {
    0x94, 0x95, 0x96, 0x97, 0xB4, 0xB5, 0xB6, 0xB7,
};

/* 8045092C-80450934 0003AC 0008+00 1/1 0/0 0/0 .sdata           J3DGDTexTlutIds */
static u8 J3DGDTexTlutIds[8] = {
    0x98, 0x99, 0x9A, 0x9B, 0xB8, 0xB9, 0xBA, 0xBB,
};

/* 80450934-8045093C 0003B4 0006+02 1/1 0/0 0/0 .sdata           GX2HWFiltConv */
static u8 GX2HWFiltConv[6] = {
    0x00, 0x04, 0x01, 0x05, 0x02, 0x06,
};

/* 8030E438-8030E5D4 308D78 019C+00 0/0 1/1 0/0 .text
 * J3DGDSetTexLookupMode__F11_GXTexMapID14_GXTexWrapMode14_GXTexWrapMode12_GXTexFilter12_GXTexFilterfffUcUc13_GXAnisotropy
 */
void J3DGDSetTexLookupMode(GXTexMapID param_0, GXTexWrapMode param_1, GXTexWrapMode param_2,
                           GXTexFilter param_3, GXTexFilter param_4, f32 param_5, f32 param_6,
                           f32 param_7, u8 param_8, u8 param_9, GXAnisotropy param_10) {
    J3DGDWriteBPCmd(param_1 | param_2 << 2 | (param_4 == GX_LINEAR) << 4 |
                    GX2HWFiltConv[param_3] << 5 | (param_9 == 0) << 8 |
                    ((int)(param_7 * 32.0f) & 0xff) << 9 | param_10 << 0x13 | param_8 << 0x15 |
                    J3DGDTexMode0Ids[param_0] << 0x18);
    J3DGDWriteBPCmd(((int)(param_5 * 16.0f) & 0xff) | ((int)(param_6 * 16.0f) & 0xff) << 8 |
                    J3DGDTexMode1Ids[param_0] << 0x18);
}

/* 8030E5D4-8030E67C 308F14 00A8+00 0/0 1/1 0/0 .text
 * J3DGDSetTexImgAttr__F11_GXTexMapIDUsUs9_GXTexFmt             */
void J3DGDSetTexImgAttr(GXTexMapID param_0, u16 param_1, u16 param_2, GXTexFmt param_3) {
    J3DGDWriteBPCmd((param_1 - 1) | (param_2 - 1) << 0xa | param_3 << 0x14 |
                    J3DGDTexImage0Ids[param_0] << 0x18);
}

/* 8030E67C-8030E70C 308FBC 0090+00 0/0 1/1 0/0 .text            J3DGDSetTexImgPtr__F11_GXTexMapIDPv
 */
void J3DGDSetTexImgPtr(GXTexMapID param_0, void* param_1) {
    J3DGDWriteBPCmd(OSCachedToPhysical(param_1) >> 5 | J3DGDTexImage3Ids[param_0] << 0x18);
}

/* 8030E70C-8030E7E0 30904C 00D4+00 0/0 1/1 0/0 .text J3DGDSetTexImgPtrRaw__F11_GXTexMapIDUl */
void J3DGDSetTexImgPtrRaw(GXTexMapID param_0, u32 param_1) {
    GDOverflowCheck(5);
    J3DGDWriteBPCmd(param_1 | J3DGDTexImage3Ids[param_0] << 0x18);
}

/* 8030E7E0-8030E878 309120 0098+00 0/0 1/1 0/0 .text
 * J3DGDSetTexTlut__F11_GXTexMapIDUl10_GXTlutFmt                */
void J3DGDSetTexTlut(GXTexMapID param_0, u32 param_1, GXTlutFmt param_2) {
    J3DGDWriteBPCmd((param_1 - 0x80000) >> 9 | param_2 << 0xa | J3DGDTexTlutIds[param_0] << 0x18);
}

/* 8030E878-8030EB30 3091B8 02B8+00 0/0 1/1 0/0 .text            J3DGDLoadTlut__FPvUl11_GXTlutSize
 */
void J3DGDLoadTlut(void* param_0, u32 param_1, GXTlutSize param_2) {
    J3DGDWriteBPCmd(0xfeffff00);
    J3DGDWriteBPCmd(0x0f000000);
    J3DGDWriteBPCmd(OSCachedToPhysical(param_0) >> 5 | 0x64000000);
    J3DGDWriteBPCmd((param_1 - 0x80000) >> 9 | param_2 << 0xa | 0x65000000);
    J3DGDWriteBPCmd(0xfeffff00);
    J3DGDWriteBPCmd(0x0f000000);
}

/* 8030EB30-8030EE10 309470 02E0+00 0/0 2/2 0/0 .text J3DGDSetIndTexMtx__F14_GXIndTexMtxIDPA3_fSc
 */
void J3DGDSetIndTexMtx(GXIndTexMtxID id, Mtx3P mtx, s8 exp) {
    s32 mtx32[6];
    u32 idx;

    switch (id) {
    case GX_ITM_0:
    case GX_ITM_1:
    case GX_ITM_2:
        idx = (u32)(id - GX_ITM_0);
        break;
    case GX_ITM_S0:
    case GX_ITM_S1:
    case GX_ITM_S2:
        idx = (u32)(id - GX_ITM_S0);
        break;
    case GX_ITM_T0:
    case GX_ITM_T1:
    case GX_ITM_T2:
        idx = (u32)(id - GX_ITM_T0);
        break;
    default:
        idx = 0;
        break;
    }

    exp += 17;

    mtx32[0] = (s32)(mtx[0][0] * 1024.0f) & 0x7FF;
    mtx32[1] = (s32)(mtx[1][0] * 1024.0f) & 0x7FF;

    mtx32[2] = (s32)(mtx[0][1] * 1024.0f) & 0x7FF;
    mtx32[3] = (s32)(mtx[1][1] * 1024.0f) & 0x7FF;

    mtx32[4] = (s32)(mtx[0][2] * 1024.0f) & 0x7FF;
    mtx32[5] = (s32)(mtx[1][2] * 1024.0f) & 0x7FF;

    GDOverflowCheck(15);

    J3DGDWriteBPCmd((mtx32[0] << 0) | (mtx32[1] << 11) | (((exp >> 0) & 0x03) << 22) |
                    (0x06 + idx * 3) << 24);
    J3DGDWriteBPCmd((mtx32[2] << 0) | (mtx32[3] << 11) | (((exp >> 2) & 0x03) << 22) |
                    (0x07 + idx * 3) << 24);
    J3DGDWriteBPCmd((mtx32[4] << 0) | (mtx32[5] << 11) | (((exp >> 4) & 0x03) << 22) |
                    (0x08 + idx * 3) << 24);
}

/* 8030EE10-8030EF08 309750 00F8+00 0/0 2/2 0/0 .text
 * J3DGDSetIndTexCoordScale__F16_GXIndTexStageID14_GXIndTexScale14_GXIndTexScale14_GXIndTexScale14_GXIndTexScale
 */
void J3DGDSetIndTexCoordScale(GXIndTexStageID stage, GXIndTexScale scale0, GXIndTexScale scale1,
                              GXIndTexScale scale2, GXIndTexScale scale3) {
    GDOverflowCheck(5);
    J3DGDWriteBPCmd(scale0 | scale1 << 4 | scale2 << 8 | scale3 << 0xc |
                    ((stage >> 1) + GX_BP_REG_RAS1_SS0) << 0x18);
}

/* 8030EF08-8030F108 309848 0200+00 0/0 2/2 0/0 .text
 * J3DGDSetIndTexOrder__FUl13_GXTexCoordID11_GXTexMapID13_GXTexCoordID11_GXTexMapID13_GXTexCoordID11_GXTexMapID13_GXTexCoordID11_GXTexMapID
 */
void J3DGDSetIndTexOrder(u32 count, GXTexCoordID coord0, GXTexMapID map0, GXTexCoordID coord1,
                         GXTexMapID map1, GXTexCoordID coord2, GXTexMapID map2, GXTexCoordID coord3,
                         GXTexMapID map3) {
    GDOverflowCheck(0xa);
    J3DGDWriteBPCmd(map0 & 7 | (coord0 & 7) << 3 | (map1 & 7) << 6 | (coord1 & 7) << 9 |
                    (map2 & 7) << 0xc | (coord2 & 7) << 0xf | (map3 & 7) << 0x12 |
                    (coord3 & 7) << 0x15 | GX_BP_REG_RAS1_IREF << 0x18);
    u32 imask = 0;
    for (u32 i = 0; i < count; i++) {
        switch (i) {
        case 0:
            imask |= 1 << (map0 & 7);
            break;
        case 1:
            imask |= 1 << (map1 & 7);
            break;
        case 2:
            imask |= 1 << (map2 & 7);
            break;
        case 3:
            imask |= 1 << (map3 & 7);
            break;
        }
    }
    J3DGDWriteBPCmd(imask | GX_BP_REG_INDIMASK << 0x18);
}

/* 8030F108-8030F294 309A48 018C+00 0/0 9/9 0/0 .text
 * J3DGDSetTevOrder__F13_GXTevStageID13_GXTexCoordID11_GXTexMapID12_GXChannelID13_GXTexCoordID11_GXTexMapID12_GXChannelID
 */
void J3DGDSetTevOrder(GXTevStageID stage, GXTexCoordID coord0, GXTexMapID map0,
                      GXChannelID channel0, GXTexCoordID coord1, GXTexMapID map1,
                      GXChannelID channel1) {
    coord0 = coord0 >= GX_MAX_TEXCOORD ? GX_TEXCOORD0 : coord0;
    coord1 = coord1 >= GX_MAX_TEXCOORD ? GX_TEXCOORD0 : coord1;
    GDOverflowCheck(5);
    static u8 c2r[] = {0, 1, 0, 1, 0, 1, 7, 5, 6, 0, 0, 0, 0, 0, 0, 7};
    J3DGDWriteBPCmd((map0 & 7) | coord0 << 3 |
                    (map0 != GX_TEXMAP_NULL && !(map0 & GX_TEX_DISABLE)) << 6 |
                    c2r[channel0 & 0xf] << 7 | (map1 & 7) << 0xc | coord1 << 0xf |
                    (map1 != GX_TEXMAP_NULL && !(map1 & GX_TEX_DISABLE)) << 0x12 |
                    c2r[channel1 & 0xf] << 0x13 | (stage / 2 + GX_BP_REG_RAS1_TREF0) << 0x18);
}

/* 8030F294-8030F3FC 309BD4 0168+00 0/0 11/11 0/0 .text
 * J3DGDSetTevKColor__F14_GXTevKColorID8_GXColor                */
void J3DGDSetTevKColor(GXTevKColorID id, GXColor color) {
    u32 cmd0 = color.r | color.a << 0xc | 0x800000 | (id * 2 + GX_BP_REG_TEVREG0LO) << 0x18;
    u32 cmd1 = color.b | color.g << 0xc | 0x800000 | (id * 2 + GX_BP_REG_TEVREG0HI) << 0x18;
    GDOverflowCheck(0xa);
    J3DGDWriteBPCmd(cmd0);
    J3DGDWriteBPCmd(cmd1);
}

/* 8030F3FC-8030F630 309D3C 0234+00 0/0 11/11 0/0 .text
 * J3DGDSetTevColorS10__F11_GXTevRegID11_GXColorS10             */
void J3DGDSetTevColorS10(GXTevRegID id, GXColorS10 color) {
    u32 cmd0 =
        (color.r & 0x7ff) | (color.a & 0x7ff) << 0xc | (id * 2 + GX_BP_REG_TEVREG0LO) << 0x18;
    u32 cmd1 =
        (color.b & 0x7ff) | (color.g & 0x7ff) << 0xc | (id * 2 + GX_BP_REG_TEVREG0HI) << 0x18;
    GDOverflowCheck(0x14);
    J3DGDWriteBPCmd(cmd0);
    J3DGDWriteBPCmd(cmd1);
    J3DGDWriteBPCmd(cmd1);
    J3DGDWriteBPCmd(cmd1);
}

/* 8030F630-8030F994 309F70 0364+00 0/0 3/3 0/0 .text J3DGDSetFog__F10_GXFogTypeffff8_GXColor */
void J3DGDSetFog(GXFogType fogType, f32 param_1, f32 param_2, f32 nearZ, f32 farZ, GXColor color) {
    f32 fvar1, fvar2, fvar3;
    if (farZ == nearZ || param_2 == param_1) {
        fvar1 = 0.0f;
        fvar2 = 0.5f;
        fvar3 = 0.0f;
    } else {
        fvar1 = (farZ * nearZ) / ((farZ - nearZ) * (param_2 - param_1));
        fvar2 = farZ / (farZ - nearZ);
        fvar3 = param_1 / (param_2 - param_1);
    }
    u32 shift = 1;
    for (; fvar2 > 1.0; fvar2 *= 0.5f) {
        shift++;
    }
    for (; fvar2 > 0.0f && fvar2 < 0.5; fvar2 *= 2.0f) {
        shift--;
    }
    f32 fvar4 = (fvar1 / (1 << shift));
    u32 param1 = fvar2 * 8388638.0f;
    u32 param0 = *(u32*)&fvar4;
    u32 param3 = *(u32*)&fvar3;
    J3DGDWriteBPCmd(param0 >> 0xc | GX_BP_REG_FOGPARAM0 << 0x18);
    J3DGDWriteBPCmd(param1 | GX_BP_REG_FOGPARAM1 << 0x18);
    J3DGDWriteBPCmd(shift | GX_BP_REG_FOGPARAM2 << 0x18);
    J3DGDWriteBPCmd(param3 >> 0xc | fogType << 0x15 | GX_BP_REG_FOGPARAM3 << 0x18);
    J3DGDWriteBPCmd(color.b | color.g << 8 | color.r << 0x10 | GX_BP_REG_FOGCOLOR << 0x18);
}

/* 8030F994-8030FAE0 30A2D4 014C+00 0/0 3/3 0/0 .text J3DGDSetFogRangeAdj__FUcUsP14_GXFogAdjTable
 */
void J3DGDSetFogRangeAdj(u8 param_0, u16 param_1, GXFogAdjTable* table) {
    if (param_0 != 0) {
        for (int i = 0; i < 0xa; i += 2) {
            J3DGDWriteBPCmd((i / 2 + GX_BP_REG_FOGRANGEK0) << 0x18 | table->r[i + 1] << 0xc |
                            table->r[i]);
        }
    }
    u32 cmd = GX_BP_REG_FOGRANGE << 0x18 | (param_1 + 0x156) | param_0 << 0xa;
    J3DGDWriteBPCmd(cmd);
}

/* 8030FAE0-8030FB60 30A420 0080+00 0/0 10/10 0/0 .text            J3DFifoLoadPosMtxImm__FPA4_fUl */
void J3DFifoLoadPosMtxImm(MtxP mtx, u32 addr) {
    J3DFifoWriteXFCmdHdr((addr & 0x3fff) << 2, 0xc);
    J3DGXCmd1f32ptr(&mtx[0][0]);
    J3DGXCmd1f32ptr(&mtx[0][1]);
    J3DGXCmd1f32ptr(&mtx[0][2]);
    J3DGXCmd1f32ptr(&mtx[0][3]);
    J3DGXCmd1f32ptr(&mtx[1][0]);
    J3DGXCmd1f32ptr(&mtx[1][1]);
    J3DGXCmd1f32ptr(&mtx[1][2]);
    J3DGXCmd1f32ptr(&mtx[1][3]);
    J3DGXCmd1f32ptr(&mtx[2][0]);
    J3DGXCmd1f32ptr(&mtx[2][1]);
    J3DGXCmd1f32ptr(&mtx[2][2]);
    J3DGXCmd1f32ptr(&mtx[2][3]);
}

/* 8030FB60-8030FBCC 30A4A0 006C+00 0/0 9/9 0/0 .text            J3DFifoLoadNrmMtxImm__FPA4_fUl */
void J3DFifoLoadNrmMtxImm(MtxP mtx, u32 addr) {
    J3DFifoWriteXFCmdHdr(addr * 3 + 0x400, 9);
    J3DGXCmd1f32ptr(&mtx[0][0]);
    J3DGXCmd1f32ptr(&mtx[0][1]);
    J3DGXCmd1f32ptr(&mtx[0][2]);
    J3DGXCmd1f32ptr(&mtx[1][0]);
    J3DGXCmd1f32ptr(&mtx[1][1]);
    J3DGXCmd1f32ptr(&mtx[1][2]);
    J3DGXCmd1f32ptr(&mtx[2][0]);
    J3DGXCmd1f32ptr(&mtx[2][1]);
    J3DGXCmd1f32ptr(&mtx[2][2]);
}

/* 8030FBCC-8030FC38 30A50C 006C+00 0/0 3/3 0/0 .text            J3DFifoLoadNrmMtxImm3x3__FPA3_fUl
 */
void J3DFifoLoadNrmMtxImm3x3(Mtx3P mtx, u32 addr) {
    J3DFifoWriteXFCmdHdr(addr * 3 + 0x400, 9);
    J3DGXCmd1f32ptr(&mtx[0][0]);
    J3DGXCmd1f32ptr(&mtx[0][1]);
    J3DGXCmd1f32ptr(&mtx[0][2]);
    J3DGXCmd1f32ptr(&mtx[1][0]);
    J3DGXCmd1f32ptr(&mtx[1][1]);
    J3DGXCmd1f32ptr(&mtx[1][2]);
    J3DGXCmd1f32ptr(&mtx[2][0]);
    J3DGXCmd1f32ptr(&mtx[2][1]);
    J3DGXCmd1f32ptr(&mtx[2][2]);
}

/* 8030FC38-8030FCD0 30A578 0098+00 0/0 4/4 0/0 .text            J3DFifoLoadNrmMtxToTexMtx__FPA4_fUl
 */
void J3DFifoLoadNrmMtxToTexMtx(MtxP mtx, u32 addr) {
    J3DFifoWriteXFCmdHdr((addr & 0x3fff) << 2, 0xc);
    J3DGXCmd1f32ptr(&mtx[0][0]);
    J3DGXCmd1f32ptr(&mtx[0][1]);
    J3DGXCmd1f32ptr(&mtx[0][2]);
    J3DGXCmd1f32(0.0f);
    J3DGXCmd1f32ptr(&mtx[1][0]);
    J3DGXCmd1f32ptr(&mtx[1][1]);
    J3DGXCmd1f32ptr(&mtx[1][2]);
    J3DGXCmd1f32(0.0f);
    J3DGXCmd1f32ptr(&mtx[2][0]);
    J3DGXCmd1f32ptr(&mtx[2][1]);
    J3DGXCmd1f32ptr(&mtx[2][2]);
    J3DGXCmd1f32(0.0f);
}

/* 8030FCD0-8030FD68 30A610 0098+00 0/0 2/2 0/0 .text J3DFifoLoadNrmMtxToTexMtx3x3__FPA3_fUl */
void J3DFifoLoadNrmMtxToTexMtx3x3(Mtx3P mtx, u32 addr) {
    J3DFifoWriteXFCmdHdr((addr & 0x3fff) << 2, 0xc);
    J3DGXCmd1f32ptr(&mtx[0][0]);
    J3DGXCmd1f32ptr(&mtx[0][1]);
    J3DGXCmd1f32ptr(&mtx[0][2]);
    J3DGXCmd1f32(0.0f);
    J3DGXCmd1f32ptr(&mtx[1][0]);
    J3DGXCmd1f32ptr(&mtx[1][1]);
    J3DGXCmd1f32ptr(&mtx[1][2]);
    J3DGXCmd1f32(0.0f);
    J3DGXCmd1f32ptr(&mtx[2][0]);
    J3DGXCmd1f32ptr(&mtx[2][1]);
    J3DGXCmd1f32ptr(&mtx[2][2]);
    J3DGXCmd1f32(0.0f);
}

/* 8045093C-80450944 0003BC 0008+00 1/1 0/0 0/0 .sdata           J3DTexImage1Ids */
static u8 J3DTexImage1Ids[8] = {
    0x8C, 0x8D, 0x8E, 0x8F, 0xAC, 0xAD, 0xAE, 0xAF,
};

/* 80450944-8045094C 0003C4 0008+00 1/1 0/0 0/0 .sdata           J3DTexImage2Ids */
static u8 J3DTexImage2Ids[8] = {
    0x90, 0x91, 0x92, 0x93, 0xB0, 0xB1, 0xB2, 0xB3,
};

/* 8030FD68-8030FDE8 30A6A8 0080+00 0/0 1/1 0/0 .text
 * J3DFifoLoadTexCached__F11_GXTexMapIDUl15_GXTexCacheSizeUl15_GXTexCacheSize */
void J3DFifoLoadTexCached(GXTexMapID id, u32 param_1, GXTexCacheSize param_2, u32 param_3,
                          GXTexCacheSize param_4) {
    J3DFifoLoadBPCmd(param_1 >> 5 | (param_2 + 3) << 0xf | (param_2 + 3) << 0x12 |
                     J3DTexImage1Ids[id] << 0x18);
    if (param_4 != GX_TEXCACHE_NONE && param_3 < 0x100000) {
        J3DFifoLoadBPCmd(param_3 >> 5 | (param_4 + 3) << 0xf | (param_4 + 3) << 0x12 |
                         J3DTexImage2Ids[id] << 0x18);
    }
}
