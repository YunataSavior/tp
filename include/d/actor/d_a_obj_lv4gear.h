#ifndef D_A_OBJ_LV4GEAR_H
#define D_A_OBJ_LV4GEAR_H

#include "d/actor/d_a_obj_swspinner.h"

/**
 * @ingroup actors-objects
 * @class daObjLv4Gear_c
 * @brief Arbiter's Grounds Spinner Gear
 *
 * @details
 *
 */
class daObjLv4Gear_c : public fopAc_ac_c {
public:
    enum gear_type_e {
        GEAR_S_e,
        GEAR_L_e,
    };

    /* 80C67FB4 */ void initBaseMtx();
    /* 80C67FF0 */ void setBaseMtx();
    /* 80C68050 */ int Create();
    /* 80C680A4 */ int CreateHeap();
    /* 80C68124 */ int create();
    /* 80C681F4 */ int execute();
    /* 80C683E0 */ int draw();
    /* 80C68444 */ int _delete();

    u8 getSwBit() { return fopAcM_GetParamBit(this, 0, 8); }
    u8 getType() { return fopAcM_GetParamBit(this, 8, 4); }
    u8 checkSE() { return fopAcM_GetParamBit(this, 12, 4); }

private:
    /* 0x568 */ request_of_phase_process_class mPhase;
    /* 0x570 */ J3DModel* mpModel;
    /* 0x574 */ s16 mTarget;
    /* 0x576 */ s16 mSpeed;
    /* 0x578 */ s16 mRotation;
    /* 0x57C */ fpc_ProcID mSwActorID;
    /* 0x580 */ u16 mCount;
    /* 0x582 */ u8 mType;
};

#endif /* D_A_OBJ_LV4GEAR_H */
