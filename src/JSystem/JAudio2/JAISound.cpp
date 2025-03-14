//
// Generated By: dol2asm
// Translation Unit: JAISound
//

#include "JSystem/JAudio2/JAISound.h"
#include "JSystem/JAudio2/JAIAudience.h"
#include "JSystem/JAudio2/JAISoundHandles.h"
#include "JSystem/JAudio2/JASReport.h"
#include "JSystem/JAudio2/JASTrack.h"

/* 802A2184-802A21A0 29CAC4 001C+00 0/0 14/14 0/0 .text            releaseSound__14JAISoundHandleFv
 */
void JAISoundHandle::releaseSound() {
    if (sound_ == NULL) {
        return;
    }
    sound_->handle_ = NULL;
    sound_ = NULL;
}

/* 802A21A0-802A21BC 29CAE0 001C+00 3/3 3/3 0/0 .text            releaseHandle__8JAISoundFv */
void JAISound::releaseHandle() {
    if (handle_ == NULL) {
        return;
    }
    handle_->sound_ = NULL;
    handle_ = NULL;
}

/* 802A21BC-802A2220 29CAFC 0064+00 0/0 3/3 0/0 .text attachHandle__8JAISoundFP14JAISoundHandle */
void JAISound::attachHandle(JAISoundHandle* handle) {
    if (handle->isSoundAttached()) {
        handle->getSound()->stop();
    }
    if (isHandleAttached()) {
        releaseHandle();
    }
    handle_ = handle;
    handle_->sound_ = this;
}

/* 802A2220-802A2244 29CB60 0024+00 0/0 2/2 0/0 .text lockWhenPrepared__15JAISoundStatus_Fv */
s32 JAISoundStatus_::lockWhenPrepared() {
    if (state.unk == 0) {
        state.unk = 1;
        return 1;
    }
    return 0;
}

/* 802A2244-802A2280 29CB84 003C+00 0/0 2/2 0/0 .text            unlockIfLocked__15JAISoundStatus_Fv
 */
s32 JAISoundStatus_::unlockIfLocked() {
    if (state.unk == 3) {
        state.unk = 4;
        return 1;
    }
    if (state.unk == 1) {
        state.unk = 0;
        return 1;
    }
    return 0;
}

/* 802A2280-802A22F8 29CBC0 0078+00 0/0 4/4 0/0 .text
 * mixOutAll__14JAISoundParamsFRC14JASSoundParamsP14JASSoundParamsf */
void JAISoundParams::mixOutAll(JASSoundParams const& param_0, JASSoundParams* param_1,
                               f32 param_2) {
    param_1->mVolume = mMove.mParams.mVolume * (param_0.mVolume * mProperty.field_0x0) * param_2;
    param_1->mFxMix = mMove.mParams.mFxMix + (param_0.mFxMix + mProperty.field_0x4);
    param_1->mPitch = mMove.mParams.mPitch * (param_0.mPitch * mProperty.field_0x8);
    param_1->mPan = (param_0.mPan + mMove.mParams.mPan) - 0.5f;
    param_1->mDolby = param_0.mDolby + mMove.mParams.mDolby;
}

/* 802A22F8-802A2328 29CC38 0030+00 0/0 3/3 0/0 .text            __ct__8JAISoundFv */
JAISound::JAISound() : params() {}

/* 802A2328-802A244C 29CC68 0124+00 0/0 3/3 0/0 .text
 * start_JAISound___8JAISoundF10JAISoundIDPCQ29JGeometry8TVec3<f>P11JAIAudience */
void JAISound::start_JAISound_(JAISoundID param_0, JGeometry::TVec3<f32> const* param_1,
                               JAIAudience* param_2) {
    handle_ = NULL;
    soundID = param_0;
    status_.init();
    params.init();
    fader.forceIn();
    audience_ = param_2;
    prepareCount = 0;
    mCount = 0;

    if (param_1 != 0 && audience_ != NULL) {
        audible_ = audience_->newAudible(*param_1, soundID, NULL, 0);
    } else {
        audible_ = NULL;
    }
    mPriority = 0;
}

/* 802A244C-802A2474 29CD8C 0028+00 0/0 2/2 0/0 .text            acceptsNewAudible__8JAISoundCFv */
bool JAISound::acceptsNewAudible() const {
    bool accepts = false;
    if (audible_ == NULL && status_.state.flags.flag2 == 0) {
        accepts = true;
    }
    return accepts;
}

/* 802A2474-802A24DC 29CDB4 0068+00 0/0 2/2 0/0 .text
/*  * newAudible__8JAISoundFRCQ29JGeometry8TVec3<f>PCQ29JGeometry8TVec3<f>UlP11JAIAudience */
void JAISound::newAudible(JGeometry::TVec3<f32> const& param_0,
                          JGeometry::TVec3<f32> const* param_1, u32 param_2, JAIAudience* param_3) {
    if (param_3 != NULL) {
        audience_ = param_3;
    }
    JAISoundID sound = soundID;
    audible_ = audience_->newAudible(param_0, sound, param_1, param_2);
}

/* 802A24DC-802A2598 29CE1C 00BC+00 0/0 24/24 0/0 .text            stop__8JAISoundFUl */
void JAISound::stop(u32 fadeCount) {
    ASSERT(status_.isAlive());
    if (fadeCount == 0) {
        stop();
        return;
    } else {
        fader.fadeOut(fadeCount);
        removeLifeTime_();
        status_.field_0x1.flags.flag2 = 0;
        status_.state.flags.flag5 = 1;
        status_.state.flags.flag1 = 1;
    }
}

/* 802A2598-802A25D8 29CED8 0040+00 2/2 21/21 0/0 .text            stop__8JAISoundFv */
void JAISound::stop() {
    stop_JAISound_();
    releaseHandle();
}

/* 802A25D8-802A25E0 29CF18 0008+00 1/0 2/0 0/0 .text            asSe__8JAISoundFv */
JAISe* JAISound::asSe() {
    return NULL;
}

/* 802A25E0-802A25E8 29CF20 0008+00 1/0 2/0 0/0 .text            asSeq__8JAISoundFv */
JAISeq* JAISound::asSeq() {
    return NULL;
}

/* 802A25E8-802A25F0 29CF28 0008+00 1/0 2/0 0/0 .text            asStream__8JAISoundFv */
JAIStream* JAISound::asStream() {
    return NULL;
}

/* 802A25F0-802A266C 29CF30 007C+00 0/0 3/3 0/0 .text            die_JAISound___8JAISoundFv */
void JAISound::die_JAISound_() {
    if (audible_ != NULL) {
        audience_->deleteAudible(audible_);
        audible_ = NULL;
        audience_ = NULL;
    }
    fader.forceOut();
    releaseHandle();
    status_.state.unk = 6;
}

/* 802A266C-802A26B8 29CFAC 004C+00 0/0 3/3 0/0 .text increasePrepareCount_JAISound___8JAISoundFv
 */
void JAISound::increasePrepareCount_JAISound_() {
    if ((++prepareCount & 0xFF) == 0) {
        JASReport("It cost %d steps to prepare Sound(ID:%08x, Address%08x).\n", prepareCount,
                  (u32)soundID, this);
    }
}

/* 802A26B8-802A29DC 29CFF8 0324+00 0/0 3/3 0/0 .text            calc_JAISound___8JAISoundFv */
bool JAISound::calc_JAISound_() {
    status_.state.flags.flag2 = 1;
    if (isStopping() && JAISound_tryDie_()) {
        return false;
    }
    ASSERT(status_.isAlive());
    bool isPlaying = status_.isPlaying();
    if (isPlaying) {
        mCount++;
    }
    bool isPaused = status_.isPaused();
    if (isPaused == false) {
        fader.calc();
    }
    bool playing = isPlaying && isPaused == false;
    if (playing) {
        params.mMove.calc();
        if (audible_ != NULL) {
            audible_->calc();
        }
        if (status_.field_0x1.flags.flag2 != 0) {
            if (lifeTime == 0) {
                stop_JAISound_();
            } else {
                lifeTime--;
            }
        }
    }
    if (audience_ != NULL && audible_ != NULL) {
        u32 priority = audience_->calcPriority(audible_);
        mPriority = priority;
        if (priority == 0xFFFFFFFF && status_.field_0x1.flags.flag1 == 0) {
            stop_JAISound_();
        }
    } else {
        mPriority = 0;
    }

    return playing;
}

/* 802A29DC-802A2AB0 29D31C 00D4+00 0/0 2/2 0/0 .text initTrack_JAISound___8JAISoundFP8JASTrack */
void JAISound::initTrack_JAISound_(JASTrack* track) {
    JASSoundParams* soundParams[8];
    ASSERT(audience_);
    ASSERT(audible_);
    int numChannels = 0;
    for (int i = 0; i < audience_->getMaxChannels(); i++) {
        JASSoundParams* currentParams = audible_->getOuterParams(i);
        if (currentParams != NULL) {
            soundParams[numChannels] = currentParams;
            numChannels++;
        }
    }
    ASSERT(numChannels >= 1);
    track->setChannelMgrCount(numChannels);
    for (size_t i = 0; i < track->getChannelMgrCount(); i++) {
        track->assignExtBuffer(i, soundParams[i]);
    }
}
