#include "Actor/ActorUnkBOMB.hpp"

#include "Actor/Actor_Derived1.hpp"
#include "System/SysNew.hpp"

static ActorUnkZLSL_AnimationTag data_ov031_02112be8                 = {.index = 0, .name = "bomb_clanim"};
static PTMF<ActorUnkBOMB> data_ov031_02112c00[ActorUnkBOMBState_Max] = {
    ActorUnkBOMB::func_ov031_020e1da0, // ActorUnkBOMBState_0
    ActorUnkBOMB::func_ov031_020e1ed8, // ActorUnkBOMBState_1
    ActorUnkBOMB::func_ov031_020e1f88, // ActorUnkBOMBState_2
    ActorUnkBOMB::func_ov031_020e1fe4, // ActorUnkBOMBState_3
    ActorUnkBOMB::func_ov031_020e2064, // ActorUnkBOMBState_4
    ActorUnkBOMB::func_ov031_020e20fc, // ActorUnkBOMBState_5
    ActorUnkBOMB::func_ov031_020e2134, // ActorUnkBOMBState_6
};

static PTMF<ActorUnkBOMB> data_ov031_02112c38[ActorUnkBOMBState_Max] = {
    ActorUnkBOMB::func_ov031_020e1d48, // ActorUnkBOMBState_0
    ActorUnkBOMB::func_ov031_020e1ebc, // ActorUnkBOMBState_1
    ActorUnkBOMB::func_ov031_020e1f18, // ActorUnkBOMBState_2
    ActorUnkBOMB::func_ov031_020e1fe0, // ActorUnkBOMBState_3
    ActorUnkBOMB::func_ov031_020e2034, // ActorUnkBOMBState_4
    ActorUnkBOMB::func_ov031_020e20d8, // ActorUnkBOMBState_5
    ActorUnkBOMB::func_ov031_020e2100, // ActorUnkBOMBState_6
};

DECL_PROFILE(ActorProfileUnkBOMB);

Actor *ActorProfileUnkBOMB::Create() {
    return new(HeapIndex_2) ActorUnkBOMB();
}

ActorProfileUnkBOMB::ActorProfileUnkBOMB() :
    ActorProfile(ActorId_BOMB) {
    this->mUnk_04.Init(FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.2999f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.4f));
}

ActorUnkBOMB::ActorUnkBOMB() :
    mUnk_180(this),
    mUnk_19C(this) {}

void ActorUnkBOMB::func_ov031_020e1540() {}
void ActorUnkBOMB::func_ov031_020e15d0() {}
void ActorUnkBOMB::func_ov031_020e1634() {}
void ActorUnkBOMB::func_ov031_020e17f4() {}
bool ActorUnkBOMB::vfunc_18(unk32 param1) {}
void ActorUnkBOMB::func_ov031_020e18a0() {}

void ActorUnkBOMB::func_ov031_020e18c4(ActorState state) {
    this->mState = state;
    this->func_ov031_020e18a0();

    CALL_PTMF(PTMF<ActorUnkBOMB>, data_ov031_02112c38[this->mState]);
}

void ActorUnkBOMB::func_ov031_020e1908() {}
void ActorUnkBOMB::func_ov031_020e1920() {}
void ActorUnkBOMB::func_ov031_020e193c() {}

extern "C" unk32 func_01ff9258(fx32, fx32);

void ActorUnkBOMB::vfunc_20() {
    CALL_PTMF(PTMF<ActorUnkBOMB>, data_ov031_02112c00[this->mState]);
    this->func_ov031_020e1b7c();

    if (!GET_FLAG(this->mFlags, ActorFlag_Alive)) {
        return;
    }
    this->func_ov031_020e193c();

    if (this->mState != ActorUnkBOMBState_2 && this->mState != ActorUnkBOMBState_4) {
        return;
    }

    if (func_01ff9258(this->mVel.x, this->mVel.z) <= 0x52) {
        return;
    }

    //! TODO : complete
    {
        if (!this->func_ov031_020e25bc()) {
            return;
        }
        return;
    }

    this->func_ov031_020e262c();
}

void ActorUnkBOMB::vfunc_24() {}

void ActorUnkBOMB::func_ov031_020e1b1c() {}

void ActorUnkBOMB::func_ov031_020e1b7c() {}
void ActorUnkBOMB::func_ov031_020e1d18() {}
void ActorUnkBOMB::func_ov031_020e1d48() {}
void ActorUnkBOMB::func_ov031_020e1d58() {}
void ActorUnkBOMB::func_ov031_020e1d74() {}
void ActorUnkBOMB::func_ov031_020e1da0() {}
void ActorUnkBOMB::func_ov031_020e1ebc() {}
void ActorUnkBOMB::func_ov031_020e1ed8() {}
void ActorUnkBOMB::func_ov031_020e1f18() {}
void ActorUnkBOMB::func_ov031_020e1f88() {}
void ActorUnkBOMB::func_ov031_020e1fe0() {}
void ActorUnkBOMB::func_ov031_020e1fe4() {}
void ActorUnkBOMB::func_ov031_020e2034() {}
void ActorUnkBOMB::func_ov031_020e2064() {}
void ActorUnkBOMB::func_ov031_020e20d8() {}
void ActorUnkBOMB::func_ov031_020e20fc() {}
void ActorUnkBOMB::func_ov031_020e2100() {}
void ActorUnkBOMB::func_ov031_020e2134() {}
void ActorUnkBOMB::vfunc_2C(unk32 param1) {}
void ActorUnkBOMB::func_ov031_020e238c() {}
bool ActorUnkBOMB::Grab(ActorGrabParams grabParams) {}
bool ActorUnkBOMB::Drop(ActorGrabParams grabParams, const VecFx32 *pVel) {}
bool ActorUnkBOMB::func_ov031_020e25bc() {}
void ActorUnkBOMB::func_ov031_020e262c() {}
void ActorUnkBOMB::func_ov031_020e2680() {}
void ActorUnkBOMB::func_ov031_020e2780() {}
void ActorUnkBOMB::func_ov031_020e2820() {}
void ActorUnkBOMB::func_ov031_020e295c() {}
void ActorUnkBOMB::func_ov031_020e2a9c() {}
void ActorUnkBOMB::func_ov031_020e2b40() {}
void ActorUnkBOMB::func_ov031_020e2c2c() {}

ActorUnkBomb_180::ActorUnkBomb_180(Actor *param1) :
    mUnk_08(param1),
    mUnk_0C(0x0),
    mUnk_10(0x0),
    mUnk_14(0x0),
    mUnk_18(0x0) {}

ActorUnkBomb_180::~ActorUnkBomb_180() {
    this->mUnk_08 = NULL;
}

bool ActorUnkBomb_180::vfunc_08(const UnkStruct_ov031_020f3310 *param1) {}

bool ActorUnkBomb_180::vfunc_0C(const UnkStruct_ov031_020e54d4 *param1, unk32 *param2, unk32 param3) {}

void ActorUnkBomb_180::vfunc_10() {}

bool ActorUnkBOMB_ov031_020e2134::vfunc_08(const UnkStruct_ov031_020f3310 *param1) {}

ActorUnkBomb_19C::ActorUnkBomb_19C(Actor *param1) :
    mUnk_2C(param1) {}

void ActorUnkBomb_19C::vfunc_10(Actor *actor) {}

void ActorUnkBOMB::func_ov031_020e33ac() {}
