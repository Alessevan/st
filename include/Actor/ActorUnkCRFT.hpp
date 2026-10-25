#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "ActorSpinut.hpp"
#include "ActorUnkZLSL_ZSRS.hpp"
#include "Actor_Character.hpp"
#include "Actor_ov058.hpp"
#include "global.h"
#include "types.h"

enum ActorUnkCRFTState_ {
    ActorUnkCRFTState_0  = 0,
    ActorUnkCRFTState_1  = 1,
    ActorUnkCRFTState_2  = 2,
    ActorUnkCRFTState_3  = 3,
    ActorUnkCRFTState_4  = 4,
    ActorUnkCRFTState_5  = 5,
    ActorUnkCRFTState_6  = 6,
    ActorUnkCRFTState_7  = 7,
    ActorUnkCRFTState_8  = 8,
    ActorUnkCRFTState_9  = 9,
    ActorUnkCRFTState_10 = 10,
    ActorUnkCRFTState_Max
};

class ActorUnkCRFT : public ActorUnkCRFT_Base {
public:
    /* 000 (base) */
    /* 24C */ ModelRender_ov000_020b4d64 mUnk_24C;
    /* 2AC */ PAD(0x2AC, 0x2BC);
    /* 2BC */ ModelRender_ov000_020b1a1c mUnk_2BC;
    /* 31C */ unk32 mUnk_31C;
    /* 320 */ unk8 mUnk_320[0x30];
    /* 350 */ unk16 mUnk_350;
    /* 352 */ unk16 mUnk_352;
    /* 354 */ unk16 mUnk_354;
    /* 358 */

    ActorUnkCRFT();

    /* 018 */ virtual bool Init(unk32 param1) override;
    /* 01C */ virtual void Setup() override;
    /* 020 */ virtual void Update() override;
    /* 02C */ virtual void vfunc_2C(unk32 param1) override;
    /* 048 */ virtual bool vfunc_48(unk32 param1) override;
    /* 04C */ virtual ~ActorUnkCRFT() override;
    /* 054 */ virtual void vfunc_54(unk32 param1) override;
    /* 058 */ virtual void SetState(ActorState state) override;
    /* 05C */ virtual void vfunc_5C() override;
    /* 07C */ virtual unk32 vfunc_7C(unk32 param1) override;
    /* 080 */ virtual unk32 vfunc_80(unk32 param1, unk32 param2) override;
    /* 09C */ virtual void vfunc_9C() override;
    /* 0A0 */ virtual unk32 vfunc_A0() override;
    /* 0A4 */ virtual void vfunc_A4() override;
    /* 0BC */ virtual void vfunc_0BC() override;
    /* 0CC */ virtual void vfunc_0CC() override;
    /* 0D0 */ virtual void vfunc_0D0() override;
    /* 114 */ virtual void vfunc_114();
    /* 118 */ virtual void vfunc_118();
    /* 11C */ virtual void vfunc_11C();
    /* 120 */ virtual void vfunc_120();
    /* 124 */ virtual void vfunc_124();
    /* 128 */ virtual void vfunc_128();

    bool func_ov058_02148710();
    void func_ov058_021487c8();
    void func_ov058_0214885c();
    void func_ov058_021488d8();
    static void func_ov058_02148b04(Actor *param1, G3d_RenderState *param2);
};

class ActorProfileUnkCRFT : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkCRFT();
    ~ActorProfileUnkCRFT();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkCRFT *GetProfile();
};
