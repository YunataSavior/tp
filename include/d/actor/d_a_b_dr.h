#ifndef D_A_B_DR_H
#define D_A_B_DR_H

#include "f_op/f_op_actor_mng.h"
#include "Z2AudioLib/Z2Creature.h"
#include "d/d_cc_d.h"
#include "d/d_msg_flow.h"
#include "d/d_bg_s_acch.h"

/**
 * @ingroup actors-enemies
 * @class daB_DR_c
 * @brief Argorok
 *
 * @details City in the Sky dungeon boss.
 *
 */
class daB_DR_c : public fopEn_enemy_c {
public:
    /* 805BAF80 */ void ctrlJoint(J3DJoint*, J3DModel*);
    /* 805BB120 */ void JointCallBack(J3DJoint*, int);
    /* 805BB16C */ void draw();
    /* 805BB408 */ void setBck(int, u8, f32, f32);
    /* 805BB4B4 */ void setActionMode(int, int);
    /* 805BB4CC */ void mGlider_WindPosSet();
    /* 805BB540 */ void mBoot_c_tranceSet(bool);
    /* 805BB64C */ void mStatusONOFF(int);
    /* 805BB6E8 */ void setSe();
    /* 805BBFC0 */ void setDeathLightEffect();
    /* 805BC0B8 */ void chkPartCreate(bool);
    /* 805BC248 */ void mHabatakiAnmSet(int);
    /* 805BC57C */ void mGlider_AniSet(bool);
    /* 805BC8B4 */ void mGliderAtAniSet();
    /* 805BCA10 */ void tail_hit_check();
    /* 805BCAD4 */ void week_hit_check();
    /* 805BCBD0 */ void mTimerClr();
    /* 805BCBF4 */ void mCountClr();
    /* 805BCC18 */ void mAllClr();
    /* 805BCC4C */ void mHeadAngleSet();
    /* 805BCD7C */ void flapMove(bool);
    /* 805BCEA4 */ void revolutionMove();
    /* 805BD05C */ void mPlayerHighCheck();
    /* 805BD15C */ void mBgFallGroundCheck();
    /* 805BD3E4 */ void normalHoverMove();
    /* 805BD5FC */ void executeWait();
    /* 805BD98C */ void executeFlyWait();
    /* 805BDBC4 */ void executeTailHit();
    /* 805BE9B4 */ void executeWeekHit();
    /* 805BF4C8 */ void mBreathSet();
    /* 805BF768 */ void mBreathHighSet(bool);
    /* 805BFA6C */ void mFeintBreath();
    /* 805BFD88 */ void executeBreathAttack();
    /* 805C062C */ void executeWindAttack();
    /* 805C0CAC */ void mGliderMoveSub(f32);
    /* 805C0EF8 */ void executeGliderAttack();
    /* 805C1E0C */ void executePillarSearch();
    /* 805C24BC */ void executePillarWait();
    /* 805C2BE8 */ void startDemoCheck();
    /* 805C2CD0 */ void executeDamageDemo();
    /* 805C3558 */ void executeMiddleDemo();
    /* 805C36A4 */ void executeDead();
    /* 805C382C */ void executeBullet();
    /* 805C39D8 */ void executeParts();
    /* 805C3CB0 */ void action();
    /* 805C40E0 */ void action_fire();
    /* 805C4130 */ void action_parts();
    /* 805C41A4 */ void mtx_set();
    /* 805C4684 */ void parts_mtx_set();
    /* 805C46E0 */ void cc_set();
    /* 805C4E14 */ void down_cc_set();
    /* 805C4FB4 */ void demo_skip(int);
    /* 805C50BC */ void DemoSkipCallBack(void*, int);
    /* 805C50F0 */ void execute();
    /* 805C55B0 */ void _delete();
    /* 805C56A4 */ void CreateHeap();
    /* 805C5974 */ void create();
    /* 805C62B0 */ daB_DR_c();

    MtxP getMtx() { return mpModelMorf->getModel()->getAnmMtx(15); }

    void onTarget() { mTarget = true; }
    bool isBack() { return mPrm0; }

private:
    /* 0x05AC */ request_of_phase_process_class mPhase;
    /* 0x05B4 */ mDoExt_McaMorfSO* mpModelMorf;
    /* 0x05B8 */ J3DModel* mpPartModel;
    /* 0x05BC */ mDoExt_brkAnm* mpCoreBrk;
    /* 0x05C0 */ Z2CreatureEnemy field_0x5c0;
    /* 0x0664 */ Z2CreatureEnemy field_0x664;
    /* 0x0708 */ int mAction;
    /* 0x070C */ int mMode;
    /* 0x0710 */ int mAnmID;
    /* 0x0714 */ u8 field_0x714[0x0718 - 0x0714];
    /* 0x0718 */ int field_0x718;
    /* 0x071C */ u8 field_0x71C[0x0720 - 0x071C];
    /* 0x0720 */ f32 field_0x720;
    /* 0x0724 */ f32 field_0x724;
    /* 0x0728 */ f32 field_0x728;
    /* 0x072C */ f32 field_0x72c;
    /* 0x0730 */ u8 field_0x730[0x0734 - 0x0730];
    /* 0x0734 */ f32 field_0x734;
    /* 0x0738 */ u8 field_0x738[0x073C - 0x0738];
    /* 0x073C */ f32 field_0x73c;
    /* 0x0740 */ f32 field_0x740;
    /* 0x0744 */ f32 field_0x744;
    /* 0x0748 */ f32 field_0x748;
    /* 0x074C */ s16 field_0x74c;
    /* 0x074E */ s16 field_0x74e;
    /* 0x0750 */ s16 field_0x750;
    /* 0x0752 */ s16 field_0x752;
    /* 0x0754 */ s16 field_0x754;
    /* 0x0756 */ s16 field_0x756;
    /* 0x0758 */ s16 field_0x758;
    /* 0x075A */ s16 field_0x75a;
    /* 0x075C */ u8 field_0x75C[0x0760 - 0x075C];
    /* 0x0760 */ cXyz field_0x760;
    /* 0x076C */ cXyz field_0x76c;
    /* 0x0778 */ cXyz field_0x778;
    /* 0x0784 */ cXyz field_0x784;
    /* 0x0790 */ cXyz field_0x790;
    /* 0x079C */ cXyz field_0x79c;
    /* 0x07A8 */ cXyz field_0x7a8;
    /* 0x07B4 */ cXyz field_0x7b4;
    /* 0x07C0 */ int mTimer[4];
    /* 0x07D0 */ u8 field_0x7d0;
    /* 0x07D1 */ u8 field_0x7d1;
    /* 0x07D2 */ u8 field_0x7d2;
    /* 0x07D3 */ u8 field_0x7d3;
    /* 0x07D4 */ u8 field_0x7d4;
    /* 0x07D5 */ u8 field_0x7D5[0x07D6 - 0x07D5];
    /* 0x07D6 */ u8 field_0x7d6;
    /* 0x07D7 */ u8 field_0x7d7;
    /* 0x07D8 */ u8 field_0x7D8[0x07D9 - 0x07D8];
    /* 0x07D9 */ u8 mTarget;
    /* 0x07DA */ u8 field_0x7DA[0x07DB - 0x07DA];
    /* 0x07DB */ u8 field_0x7db;
    /* 0x07DC */ u8 field_0x7DC[0x07E0 - 0x07DC];
    /* 0x07E0 */ int field_0x7e0;
    /* 0x07E4 */ u8 field_0x7e4[4];
    /* 0x07E8 */ u8 field_0x7e8;
    /* 0x07E9 */ u8 field_0x7E9[0x07EA - 0x07E9];
    /* 0x07EA */ u8 mPrm0;
    /* 0x07EB */ u8 field_0x7eb;
    /* 0x07EC */ u8 mPrm1;
    /* 0x07ED */ u8 mPrm2;
    /* 0x07EE */ u8 mPrm3;
    /* 0x07EF */ u8 field_0x7EF[0x07F0 - 0x07EF];
    /* 0x07F0 */ dBgS_AcchCir mAcchCir;
    /* 0x0830 */ dBgS_ObjAcch mAcch;
    /* 0x0A08 */ dCcD_Stts field_0xa08;
    /* 0x0A44 */ dCcD_Cyl mWeekCc;
    /* 0x0B80 */ dCcD_Sph mFootAtCc[2];
    /* 0x0DF0 */ dCcD_Sph field_0xdf0;
    /* 0x0F28 */ dCcD_Sph mBreathAtCc;
    /* 0x1060 */ dCcD_Sph mWindAtCc;
    /* 0x1198 */ dCcD_Sph mWindAtCc2;
    /* 0x12D0 */ dCcD_Sph mWindAtCc3;
    /* 0x1408 */ dCcD_Sph mTailCc;
    /* 0x1540 */ dCcD_Cyl mPillarCc;
    /* 0x167C */ dCcD_Sph mDownSphCc[9];
    /* 0x2174 */ dCcD_Cyl mDownCc[5];
    /* 0x27A0 */ u8 field_0x27A0[0x27A8 - 0x27A0];
    /* 0x27A8 */ Z2CreatureEnemy* field_0x27a8;
    /* 0x27AC */ u8 field_0x27AC[0x27C4 - 0x27AC];
    /* 0x27C4 */ cXyz field_0x27c4;
    /* 0x27D0 */ cXyz field_0x27d0;
    /* 0x27DC */ u32 field_0x27dc[4];
    /* 0x27EC */ u32 field_0x27ec[4];
    /* 0x27FC */ u32 field_0x27fc[4];
    /* 0x280C */ u32 field_0x280c;
    /* 0x2810 */ u8 field_0x2810[0x2814 - 0x2810];
    /* 0x2814 */ dMsgFlow_c mMsgFlow;
};

STATIC_ASSERT(sizeof(daB_DR_c) == 0x2860);


class daB_DR_HIO_c {
public:
    /* 805BAE6C */ daB_DR_HIO_c();
    /* 805C6B94 */ ~daB_DR_HIO_c();
};

#endif /* D_A_B_DR_H */
