#pragma once

#include "Actor_Character.hpp"

class ActorUnkCRFT_160 : public UnkStruct_ov000_020b31f0 {
public:
    /* 000 (base) */
    /* 02C */ UnkSystem5 mUnk_2C;
    /* 04C */ unk32 mUnk_4C;
    /* 050 */ PAD(0x50, 0x8C);
    /* 06C */ UnkSystem5 mUnk_8C;
    /* 08C */ unk32 mUnk_AC;
    /* 090 */ PAD(0xB0, 0xEC);
    /* 000 */

    ActorUnkCRFT_160(ModelRender *param1, UnkActorFileSystem2 *param2) :
        UnkStruct_ov000_020b31f0(&mUnk_2C, &mUnk_8C, param1, param2),
        mUnk_2C(&mUnk_4C, NULL),
        mUnk_8C(&mUnk_AC, NULL) {

        if (param2 != NULL) {
            this->mUnk_8C.mpModel = this->mUnk_10;
            this->mUnk_2C.mpModel = this->mUnk_10;
        }
    }
};

class ActorUnkCRFT_Base : public Actor_Character {
public:
    /* 000 (base) */
    /* 160 */ ActorUnkCRFT_160 mUnk_160;

    ActorUnkCRFT_Base(ModelRender *param1, UnkActorFileSystem2 *param2) :
        Actor_Character(param1, &mUnk_160),
        mUnk_160(param1, param2) {}
};
