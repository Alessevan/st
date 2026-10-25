#include "Actor/ActorUnkCRFT.hpp"

#include "Actor/ActorUnkZLSL_ZSRS.hpp"
#include "System/SysNew.hpp"
#include "mem.h"

struct UnkStruct_ov058_0215330 {
    /* 00 */ unk32 mUnk_00[0x4];
};

extern unk32 data_ov058_02153300[];
extern char data_ov058_02153308[] /* = "crft" */;
extern char data_ov058_02153318[] /* = "hammer" */;
extern UnkStruct_ov058_0215330 data_ov058_02153330;

static ActorUnkZLSL_AnimationTag data_ov058_02154f90[] = {
    {0x0, "wait"}, {0x1, "walk"}, {0x2, "talk"}, {0x3, "action"}, {0x4, "action_wait"},
};

static PTMF<ActorUnkCRFT> data_ov058_02154ee0[ActorUnkCRFTState_Max] = {
    &ActorUnkCRFT::vfunc_0BC, // ActorUnkCRFTState_0
    &ActorUnkCRFT::vfunc_0C0, // ActorUnkCRFTState_1
    &ActorUnkCRFT::vfunc_0C4, // ActorUnkCRFTState_2
    &ActorUnkCRFT::vfunc_0C8, // ActorUnkCRFTState_3
    &ActorUnkCRFT::vfunc_0CC, // ActorUnkCRFTState_4
    &ActorUnkCRFT::vfunc_0D0, // ActorUnkCRFTState_5
    &ActorUnkCRFT::vfunc_0D4, // ActorUnkCRFTState_6
    &ActorUnkCRFT::vfunc_0D8, // ActorUnkCRFTState_7
    &ActorUnkCRFT::vfunc_0DC, // ActorUnkCRFTState_8
    &ActorUnkCRFT::vfunc_114, // ActorUnkCRFTState_9
    &ActorUnkCRFT::vfunc_118, // ActorUnkCRFTState_10
};

static PTMF<ActorUnkCRFT> data_ov058_02154f38[ActorUnkCRFTState_Max] = {
    &ActorUnkCRFT::vfunc_0E0, // ActorUnkCRFTState_0
    &ActorUnkCRFT::vfunc_0E4, // ActorUnkCRFTState_1
    &ActorUnkCRFT::vfunc_0E8, // ActorUnkCRFTState_2
    &ActorUnkCRFT::vfunc_0EC, // ActorUnkCRFTState_3
    &ActorUnkCRFT::vfunc_0F0, // ActorUnkCRFTState_4
    &ActorUnkCRFT::vfunc_0F4, // ActorUnkCRFTState_5
    &ActorUnkCRFT::vfunc_0F8, // ActorUnkCRFTState_6
    &ActorUnkCRFT::vfunc_0FC, // ActorUnkCRFTState_7
    &ActorUnkCRFT::vfunc_100, // ActorUnkCRFTState_8
    &ActorUnkCRFT::vfunc_11C, // ActorUnkCRFTState_9
    &ActorUnkCRFT::vfunc_120, // ActorUnkCRFTState_10
};

DECL_PROFILE(ActorProfileUnkCRFT);

Actor *ActorProfileUnkCRFT::Create() {
    return new(HeapIndex_2) ActorUnkCRFT();
}

ActorProfileUnkCRFT::ActorProfileUnkCRFT() :
    ActorProfile_Derived1(ActorId_CRFT) {
    this->mUnk_04.Init(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.7101f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.6101f));
    this->mUnk_1C = 0x1400;
    this->mUnk_18 = 0x1;
    this->mUnk_1A = 0x2000;
    this->mUnk_1E |= 0x1;
}

ActorUnkCRFT::ActorUnkCRFT() :
    ActorUnkCRFT_Base(&mUnk_24C, data_ov000_020b539c_eur.mUnk_30->vfunc_04()),
    mUnk_24C(G3d_GetUnkPtr(data_ov000_020b539c_eur.mUnk_30->vfunc_04()->mUnk_50, data_ov058_02153308)),
    mUnk_2BC(G3d_GetUnkPtr(data_ov000_020b539c_eur.mUnk_30->vfunc_04()->mUnk_50, data_ov058_02153318)),
    mUnk_31C(-0x1),
    mUnk_350(0x0),
    mUnk_352(0x0),
    mUnk_354(0x6) {
    this->mUnk_0B8 = &data_ov058_02154f90[0];

    if (this->func_ov058_02148710()) {
        UnkStruct_ov058_0215330 data = data_ov058_02153330;
        this->mUnk_31C               = this->mUnk_24C.func_ov000_02057f18(&data);
    }

    memset(&this->mUnk_320, 0, ARRAY_LEN(this->mUnk_320));
}

bool ActorUnkCRFT::Init(unk32 param1) {
    this->Actor_Derived1::Init(param1);

    this->mUnk_0E4 = &ActorUnkCRFT::func_ov058_02148b04;
    this->mUnk_15C = data_ov058_02153300;
    this->mUnk_0DC = 0x4000;
}

void ActorUnkCRFT::SetState(ActorState state) {
    this->mUnk_4A[0] = 0x5;
    this->mState     = state;

    this->vfunc_104();

    CALL_PTMF(PTMF<ActorUnkCRFT>, data_ov058_02154ee0[this->mState]);
}

// non-matching
void ActorUnkCRFT::vfunc_54(unk32 param1) {}
// non-matching
void ActorUnkCRFT::Setup() {}

// non-matching (regalloc)
void ActorUnkCRFT::Update() {
    if (!this->vfunc_108(0x6800)) {
        return;
    }

    if ((u16) (this->mUnk_5C.mParams[2] + 0xFFFF) <= 0x2) {
        if (this->Actor_Derived1::func_ov000_020a8dd0()) {
            UNSET_FLAG(this->mFlags, ActorFlag_Alive);
        }
    }

    this->vfunc_60();

    CALL_PTMF(PTMF<ActorUnkCRFT>, data_ov058_02154f38[this->mState]);
    if (!GET_FLAG(this->mFlags, ActorFlag_Visible)) {
        return;
    }

    this->Actor::func_ov000_02098838();

    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);

    this->vfunc_A4();
    this->mUnk_094.mUnk_0C->vfunc_34();
    this->vfunc_10C();
}

// non-matching
void ActorUnkCRFT::vfunc_5C() {}
// non-matching
void ActorUnkCRFT::vfunc_0BC() {}
// non-matching
void ActorUnkCRFT::vfunc_0CC() {}
// non-matching
void ActorUnkCRFT::vfunc_0D0() {}
// non-matching
void ActorUnkCRFT::vfunc_114() {}
// non-matching
void ActorUnkCRFT::vfunc_118() {}
// non-matching
void ActorUnkCRFT::vfunc_11C() {}
// non-matching
void ActorUnkCRFT::vfunc_120() {}
// non-matching
bool ActorUnkCRFT::func_ov058_02148710() {}
// non-matching
void ActorUnkCRFT::vfunc_124() {}
// non-matching
void ActorUnkCRFT::vfunc_128() {}
// non-matching
void ActorUnkCRFT::func_ov058_021487c8() {}
// non-matching
unk32 ActorUnkCRFT::vfunc_7C(unk32 param1) {}
// non-matching
void ActorUnkCRFT::vfunc_9C() {}
// non-matching
unk32 ActorUnkCRFT::vfunc_A0() {}
// non-matching
void ActorUnkCRFT::func_ov058_0214885c() {}
// non-matching
void ActorUnkCRFT::func_ov058_021488d8() {}
// non-matching
unk32 ActorUnkCRFT::vfunc_80(unk32 param1, unk32 param2) {}
// non-matching
bool ActorUnkCRFT::vfunc_48(unk32 param1) {}
// non-matching
void ActorUnkCRFT::vfunc_A4() {}
// non-matching
void ActorUnkCRFT::vfunc_2C(unk32 param1) {}
// non-matching
void ActorUnkCRFT::func_ov058_02148b04(Actor *param1, G3d_RenderState *param2) {}

ActorUnkCRFT::~ActorUnkCRFT() {}
ActorProfileUnkCRFT::~ActorProfileUnkCRFT() {}
