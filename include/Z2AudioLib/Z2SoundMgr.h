#ifndef Z2SOUNDMGR_H
#define Z2SOUNDMGR_H

#include "JSystem/JAudio2/JAISeMgr.h"
#include "JSystem/JAudio2/JAISeqMgr.h"
#include "JSystem/JAudio2/JAIStreamMgr.h"

u16 seqCallback(JASTrack* param_0, u16 param_1);

class Z2SoundMgr : public JASGlobalInstance<Z2SoundMgr> {
public:
    /* 802A9E80 */ Z2SoundMgr();
    /* 802AA1B0 */ void calc();
    /* 802AA270 */ void setIIR(JAISound*, s16 const*);
    /* 802AA33C */ void setFilterOff(JAISound*);
    /* 802AA430 */ void resetFilterAll();
    /* 802AA528 */ void mixOut();
    /* 802AA67C */ void framework();
    /* 802AA6B0 */ void pauseAllGameSound(bool);
    /* 802AA7DC */ void stopSoundID(JAISoundID);
    /* 802AA84C */ void stopSync();
    /* 802AA8C8 */ void stop();
    /* 802AA908 */ void initParams();
    /* 802AA9E8 */ void multiVolumeSoundID(JAISoundID, f32);
    /* 802AAAC4 */ bool isPlayingSoundID(JAISoundID);

    /* 802A9EE8 */ virtual bool startSound(JAISoundID, JAISoundHandle*,
                                                 JGeometry::TVec3<f32> const*);

    JAISeMgr* getSeMgr() { return &mSeMgr; }
    const JAISeMgr* getSeMgr() const { return &mSeMgr; }
    JAISeqMgr* getSeqMgr() { return &mSeqMgr; }
    const JAISeqMgr* getSeqMgr() const { return &mSeqMgr; }
    JAIStreamMgr* getStreamMgr() { return &mStreamMgr; }

private:
    /* 0x004 */ JAISeMgr mSeMgr;
    /* 0x728 */ JAISeqMgr mSeqMgr;
    /* 0x79C */ JAIStreamMgr mStreamMgr;
    /* 0x80C */ JAISoundID mSoundID;
};  // Size: 0x810

#if VERSION != VERSION_SHIELD_DEBUG
STATIC_ASSERT(sizeof(Z2SoundMgr) == 0x810);
#endif

inline Z2SoundMgr* Z2GetSoundMgr() {
    return JASGlobalInstance<Z2SoundMgr>::getInstance();
}

#endif /* Z2SOUNDMGR_H */
