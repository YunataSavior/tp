/**
 * @file d_a_swc00.cpp
 * 
*/

#include "d/actor/d_a_swc00.h"
#include "dol2asm.h"
#include "d/d_com_inf_game.h"
#include "f_op/f_op_actor_mng.h"


//
// Forward References:
//

extern "C" static void hitCheck__FP9daSwc00_c();
extern "C" static void daSwc00_Execute__FP9daSwc00_c();
extern "C" void execute__9daSwc00_cFv();
extern "C" void event_proc_call__9daSwc00_cFv();
extern "C" void actionWait__9daSwc00_cFv();
extern "C" void actionOrderEvent__9daSwc00_cFv();
extern "C" void actionEvent__9daSwc00_cFv();
extern "C" void actionDead__9daSwc00_cFv();
extern "C" static bool daSwc00_IsDelete__FP9daSwc00_c();
extern "C" static bool daSwc00_Delete__FP9daSwc00_c();
extern "C" static void daSwc00_Create__FP10fopAc_ac_c();
extern "C" extern char const* const d_a_swc00__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistanceXZ2__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_orderOtherEventId__FP10fopAc_ac_csUcUsUsUs();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void offSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void getEventIdx__16dEvent_manager_cFP10fopAc_ac_cUc();
extern "C" void endCheck__16dEvent_manager_cFs();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __ptmf_scall();
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 data_805A1F28[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 805A1D94-805A1D98 000000 0004+00 2/2 0/0 0/0 .rodata          @3708 */
SECTION_RODATA static f32 const lit_3708 = -100.0f;
COMPILER_STRIP_GATE(0x805A1D94, &lit_3708);

inline u8 daSwc00_getCondition(daSwc00_c* i_this) {
    return i_this->shape_angle.x;
}

inline int daSwc00_getShape(daSwc00_c* i_this) {
    return (fopAcM_GetParam(i_this) >> 0x12) & 3;
}

/* 805A13F8-805A15DC 000078 01E4+00 1/1 0/0 0/0 .text            hitCheck__FP9daSwc00_c */
// NONMATCHING - r30 / r31 swap
static bool hitCheck(daSwc00_c* i_swc) {
    fopAc_ac_c* playerAc = (fopAc_ac_c*)daPy_getPlayerActorClass();
    fopAc_ac_c* player;

    if (daSwc00_getCondition(i_swc) == 2) {
        player = (fopAc_ac_c*)dComIfGp_getHorseActor();
    } else {
        player = playerAc;
    }

    if (player == NULL) {
        return false;
    }

    int shape = daSwc00_getShape(i_swc);
    if (shape == 3) {
        f32 xz_dist = fopAcM_searchActorDistanceXZ2(i_swc, player);
        f32 y_dist = fopAcM_searchActorDistanceY(i_swc, player);

        if (xz_dist < i_swc->scale.x && -100.0f < y_dist && y_dist < i_swc->scale.y) {
            return true;
        }
    } else if (shape == 0) {
        cXyz tmp1 = i_swc->field_0x568 - i_swc->current.pos;
        cXyz tmp2 = i_swc->field_0x574 - i_swc->current.pos;
        cXyz player_dist = player->current.pos - i_swc->current.pos;

        mDoMtx_stack_c::YrotS(-i_swc->current.angle.y);
        mDoMtx_stack_c::multVec(&player_dist, &player_dist);

        if ((tmp1.x <= player_dist.x && player_dist.x <= tmp2.x) &&
            (tmp1.y <= player_dist.y && player_dist.y <= tmp2.y) &&
            (tmp1.z <= player_dist.z && player_dist.z <= tmp2.z)) {
            return true;
        }
    }

    return false;
}

/* 805A15DC-805A15FC 00025C 0020+00 1/0 0/0 0/0 .text            daSwc00_Execute__FP9daSwc00_c */
static int daSwc00_Execute(daSwc00_c* i_this) {
    return i_this->execute();
}

/* ############################################################################################## */
/* 805A1DAC-805A1DAC 000018 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_805A1DAC =
    "領域スイッチ：引数０が不正値<%d>です\n";
    // "Area Switch: arg 0 is an invalid value <%d>\n";
#pragma pop

/* 805A1DD4-805A1DE0 000000 000C+00 1/1 0/0 0/0 .data            cNullVec__6Z2Calc */
SECTION_DATA static u8 cNullVec__6Z2Calc[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 805A1DE0-805A1DF4 00000C 0004+10 0/0 0/0 0/0 .data            @1787 */
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

/* 805A1DF4-805A1E34 -00001 0040+00 1/1 0/0 0/0 .data            @3812 */
SECTION_DATA static void* lit_3812[16] = {
    (void*)(((char*)execute__9daSwc00_cFv) + 0x1DC),
    (void*)(((char*)execute__9daSwc00_cFv) + 0x22C),
    (void*)(((char*)execute__9daSwc00_cFv) + 0x260),
    (void*)(((char*)execute__9daSwc00_cFv) + 0x1A4),
    (void*)(((char*)execute__9daSwc00_cFv) + 0x1DC),
    (void*)(((char*)execute__9daSwc00_cFv) + 0x22C),
    (void*)(((char*)execute__9daSwc00_cFv) + 0x260),
    (void*)(((char*)execute__9daSwc00_cFv) + 0x294),
    (void*)(((char*)execute__9daSwc00_cFv) + 0x294),
    (void*)(((char*)execute__9daSwc00_cFv) + 0x2C8),
    (void*)(((char*)execute__9daSwc00_cFv) + 0x2C8),
    (void*)(((char*)execute__9daSwc00_cFv) + 0x2C8),
    (void*)(((char*)execute__9daSwc00_cFv) + 0x2C8),
    (void*)(((char*)execute__9daSwc00_cFv) + 0x2C8),
    (void*)(((char*)execute__9daSwc00_cFv) + 0x2C8),
    (void*)(((char*)execute__9daSwc00_cFv) + 0x1A4),
};

/* 805A15FC-805A18E8 00027C 02EC+00 2/1 0/0 0/0 .text            execute__9daSwc00_cFv */
int daSwc00_c::execute() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805A1E34-805A1E40 -00001 000C+00 0/1 0/0 0/0 .data            @3820 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3820[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionWait__9daSwc00_cFv,
};
#pragma pop

/* 805A1E40-805A1E4C -00001 000C+00 0/1 0/0 0/0 .data            @3821 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3821[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionOrderEvent__9daSwc00_cFv,
};
#pragma pop

/* 805A1E4C-805A1E58 -00001 000C+00 0/1 0/0 0/0 .data            @3822 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3822[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionEvent__9daSwc00_cFv,
};
#pragma pop

/* 805A1E58-805A1E64 -00001 000C+00 0/1 0/0 0/0 .data            @3823 */
#pragma push
#pragma force_active on
SECTION_DATA static void* lit_3823[3] = {
    (void*)NULL,
    (void*)0xFFFFFFFF,
    (void*)actionDead__9daSwc00_cFv,
};
#pragma pop

/* 805A1E64-805A1E94 000090 0030+00 0/1 0/0 0/0 .data            l_func$3819 */
#pragma push
#pragma force_active on
SECTION_DATA static u8 l_func[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#pragma pop

/* 805A18E8-805A19A4 000568 00BC+00 1/1 0/0 0/0 .text            event_proc_call__9daSwc00_cFv */
void daSwc00_c::event_proc_call() {
    // NONMATCHING
}

/* 805A19A4-805A1A28 000624 0084+00 1/0 0/0 0/0 .text            actionWait__9daSwc00_cFv */
void daSwc00_c::actionWait() {
    // NONMATCHING
}

/* 805A1A28-805A1A94 0006A8 006C+00 1/0 0/0 0/0 .text            actionOrderEvent__9daSwc00_cFv */
void daSwc00_c::actionOrderEvent() {
    // NONMATCHING
}

/* 805A1A94-805A1AF0 000714 005C+00 1/0 0/0 0/0 .text            actionEvent__9daSwc00_cFv */
void daSwc00_c::actionEvent() {
    // NONMATCHING
}

/* 805A1AF0-805A1B1C 000770 002C+00 1/0 0/0 0/0 .text            actionDead__9daSwc00_cFv */
void daSwc00_c::actionDead() {
    // NONMATCHING
}

/* 805A1B1C-805A1B24 00079C 0008+00 1/0 0/0 0/0 .text            daSwc00_IsDelete__FP9daSwc00_c */
static bool daSwc00_IsDelete(daSwc00_c* param_0) {
    return true;
}

/* 805A1B24-805A1B2C 0007A4 0008+00 1/0 0/0 0/0 .text            daSwc00_Delete__FP9daSwc00_c */
static bool daSwc00_Delete(daSwc00_c* param_0) {
    return true;
}

/* ############################################################################################## */
/* 805A1E94-805A1ED4 -00001 0040+00 1/1 0/0 0/0 .data            @3996 */
SECTION_DATA static void* lit_3996[16] = {
    (void*)(((char*)daSwc00_Create__FP10fopAc_ac_c) + 0x98),
    (void*)(((char*)daSwc00_Create__FP10fopAc_ac_c) + 0xDC),
    (void*)(((char*)daSwc00_Create__FP10fopAc_ac_c) + 0xDC),
    (void*)(((char*)daSwc00_Create__FP10fopAc_ac_c) + 0x90),
    (void*)(((char*)daSwc00_Create__FP10fopAc_ac_c) + 0x98),
    (void*)(((char*)daSwc00_Create__FP10fopAc_ac_c) + 0xDC),
    (void*)(((char*)daSwc00_Create__FP10fopAc_ac_c) + 0xDC),
    (void*)(((char*)daSwc00_Create__FP10fopAc_ac_c) + 0xDC),
    (void*)(((char*)daSwc00_Create__FP10fopAc_ac_c) + 0xDC),
    (void*)(((char*)daSwc00_Create__FP10fopAc_ac_c) + 0xDC),
    (void*)(((char*)daSwc00_Create__FP10fopAc_ac_c) + 0xDC),
    (void*)(((char*)daSwc00_Create__FP10fopAc_ac_c) + 0xDC),
    (void*)(((char*)daSwc00_Create__FP10fopAc_ac_c) + 0xDC),
    (void*)(((char*)daSwc00_Create__FP10fopAc_ac_c) + 0xDC),
    (void*)(((char*)daSwc00_Create__FP10fopAc_ac_c) + 0xDC),
    (void*)(((char*)daSwc00_Create__FP10fopAc_ac_c) + 0x90),
};

/* 805A1B2C-805A1D8C 0007AC 0260+00 2/0 0/0 0/0 .text            daSwc00_Create__FP10fopAc_ac_c */
static void daSwc00_Create(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 805A1D98-805A1D9C 000004 0004+00 0/0 0/0 0/0 .rodata          @3991 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3991 = 100.0f;
COMPILER_STRIP_GATE(0x805A1D98, &lit_3991);
#pragma pop

/* 805A1D9C-805A1DA0 000008 0004+00 0/0 0/0 0/0 .rodata          @3992 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3992 = 30.0f;
COMPILER_STRIP_GATE(0x805A1D9C, &lit_3992);
#pragma pop

/* 805A1DA0-805A1DA4 00000C 0004+00 0/0 0/0 0/0 .rodata          @3993 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3993 = 1000.0f;
COMPILER_STRIP_GATE(0x805A1DA0, &lit_3993);
#pragma pop

/* 805A1DA4-805A1DA8 000010 0004+00 0/0 0/0 0/0 .rodata          @3994 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3994 = 10.0f;
COMPILER_STRIP_GATE(0x805A1DA4, &lit_3994);
#pragma pop

/* 805A1DA8-805A1DAC 000014 0004+00 0/0 0/0 0/0 .rodata          @3995 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3995 = 50.0f;
COMPILER_STRIP_GATE(0x805A1DA8, &lit_3995);
#pragma pop

/* 805A1ED4-805A1EF4 -00001 0020+00 1/0 0/0 0/0 .data            l_daSwc00_Method */
static actor_method_class l_daSwc00_Method = {
    (process_method_func)daSwc00_Create__FP10fopAc_ac_c,
    (process_method_func)daSwc00_Delete__FP9daSwc00_c,
    (process_method_func)daSwc00_Execute__FP9daSwc00_c,
    (process_method_func)daSwc00_IsDelete__FP9daSwc00_c,
};

/* 805A1EF4-805A1F24 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_SWC00 */
extern actor_process_profile_definition g_profile_SWC00 = {
  fpcLy_CURRENT_e,       // mLayerID
  7,                     // mListID
  fpcPi_CURRENT_e,       // mListPrio
  PROC_SWC00,            // mProcName
  &g_fpcLf_Method.base, // sub_method
  sizeof(daSwc00_c),     // mSize
  0,                     // mSizeOther
  0,                     // mParameters
  &g_fopAc_Method.base,  // sub_method
  277,                   // mPriority
  &l_daSwc00_Method,     // sub_method
  0x00040000,            // mStatus
  fopAc_ACTOR_e,         // mActorType
  fopAc_CULLBOX_0_e,     // cullType
};

/* 805A1DAC-805A1DAC 000018 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
