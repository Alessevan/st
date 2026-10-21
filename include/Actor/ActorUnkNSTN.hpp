#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "ActorPot.hpp"
#include "global.h"
#include "types.h"

class ActorUnkNSTN : public Actor_ov031_02113fd4 {
public:
    /* 000 (base) */
    /* 110 */ ModelRender_ov000_020b198c mUnk_110;

    ActorUnkNSTN();

    /* 4C */ virtual ~ActorUnkNSTN() override;
    /* 5C */ virtual void vfunc_5C(ActorState state) override;

    void func_ov058_02142abc();
    void func_ov058_02142ad0(unk32 param1);
    void func_ov058_02142ae8();
    void func_ov058_02142af0();
    void func_ov058_02142b44();
    void func_ov058_02142b7c();
    void func_ov058_02142bac();
    void func_ov058_02142bb8();
    void func_ov058_02142bc4();
    void func_ov058_02142bd0();
    void func_ov058_02142bdc();
    void func_ov058_02142be8();
    void func_ov058_02142bf4();
    void func_ov058_02142c00();
    void func_ov058_02142c0c();
    void func_ov058_02142c20();
    void func_ov058_02142c34();
    void func_ov058_02142d08();
};

class ActorProfileUnkNSTN : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkNSTN();
    ~ActorProfileUnkNSTN();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkNSTN *GetProfile();
};
