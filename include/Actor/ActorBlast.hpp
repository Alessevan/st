#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "ActorPot.hpp"
#include "global.h"
#include "types.h"

class ActorBlast;

class ActorBlast_E8 : public UnkStruct_ov000_020b2838 {
public:
    /* 00 (base) */
    /* 04 */ ActorBlast *mUnk_04;

    ActorBlast_E8(ActorBlast *param1) :
        mUnk_04(param1) {}

    // data_ov031_02112d4c
    /* 0C */ virtual void vfunc_0C() override; // func_ov031_020e351c
};

class ActorBlast : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;
    /* 94 */ unk16 mUnk_98;
    /* 94 */ unk16 mUnk_9A;
    /* 9C */ UnkStruct_ov031_Items_01 mUnk_9C;
    /* C8 */ STRUCT_PAD(0xC8, 0xE8);
    /* E8 */ ActorBlast_E8 mUnk_E8;
    /* F0 */

    ActorBlast();

    /* 18 */ virtual bool vfunc_18(unk32 param1) override; // func_ov031_020e3750
    /* 20 */ virtual void vfunc_20() override;             // func_ov031_020e39c4
    /* 24 */ virtual void vfunc_24() override;             // func_ov031_020e3b44
    /* 4C */ virtual ~ActorBlast() override;

    void func_ov031_020e3b94();
    void func_ov031_020e3b9c();
};

class ActorProfileBlast : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileBlast();
    ~ActorProfileBlast();

    /* 0C */ virtual Actor *Create();

    static ActorProfileBlast *GetProfile();
};
