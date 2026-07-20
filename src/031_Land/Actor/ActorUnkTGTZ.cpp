#include "Actor/ActorUnkTGTZ.hpp"

#include "Actor/ActorManager.hpp"
#include "Actor/ActorUnkNTTZ.hpp"
#include "System/SysNew.hpp"

extern "C" void func_01ff9638(VecFx32 *, s16);

DECL_PROFILE(ActorProfileUnkTGTZ);

static unk32 data_ov031_02114584[0x2] = {};
static unk32 data_ov031_021145a4      = 0x0;
static char data_ov031_021145a8[0x8]  = "target";

Actor *ActorProfileUnkTGTZ::Create() {
    return new(HeapIndex_2) ActorUnkTGTZ();
}

ActorProfileUnkTGTZ::ActorProfileUnkTGTZ() :
    ActorProfile_Derived1(ActorId_TGTZ) {
    this->mUnk_04.Init(FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(2.0f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.5f));
}

// non-matching
ActorUnkTGTZ::ActorUnkTGTZ() :
    mUnk_094(NULL, 0x0, NULL),
    mUnk_1B4(NULL),
    mUnk_1B8(0x0),
    mUnk_1BC(-0x1),
    mUnk_1C0(0x0),
    mUnk_1C2(0x0),
    mUnk_1C4(FLOAT_TO_FX32(0.0f)),
    mUnk_1CC(0x0),
    mUnk_1D0(0x0),
    mUnk_1D2(0x0),
    mUnk_1D4(0x0),
    mUnk_1D6(0x0),
    mUnk_1D8(false),
    mUnk_1DC(0x0) {
    Mat3p_InitIdentity(&this->mUnk_190);
    this->func_ov000_0209862c(0x0);
}

// non-matching
void ActorUnkTGTZ::func_ov031_020f6984() {}
// non-matching
bool ActorUnkTGTZ::vfunc_18(unk32 param1) {}
// non-matching
void ActorUnkTGTZ::vfunc_20() {}

void ActorUnkTGTZ::vfunc_24() {
    this->vfunc_20();
}

void ActorUnkTGTZ::func_ov031_020f6e5c(ActorRef param1) {
    if (param1.type_index == 0x0) {
        return;
    }
    Actor *actor = gpActorManager->func_01fff3b4(param1);
    if (actor != NULL) {
        UNSET_FLAG(actor->mFlags, ActorFlag_Alive);
    }
}

void ActorUnkTGTZ::func_ov031_020f6ea8(ActorRef *param0, u16 param1, const VecFx32 *param2, s16 param3, u16 param4) {
    ActorParams params;

    params.mUnk_28 = 0;
    params.func_ov000_020975f8();

    params.mInitialPos.x = param2->x;
    params.mInitialPos.y = param2->y;
    params.mInitialPos.z = param2->z;

    params.mParams[0] = param1;
    params.mParams[1] = param3;
    params.mParams[2] = param4;

    Actor::func_ov000_020973f4(param0, &data_ov000_020b539c_eur, ActorId_EventIcon, &params, 0);
}

// non-matching
void ActorUnkTGTZ::func_ov031_020f6f20(unk32 param1) {
    this->mUnk_1B8 = param1;
}

// non-matching
void ActorUnkTGTZ::vfunc_30() {}

void ActorUnkTGTZ::vfunc_2C(unk32 param1) {
    if (!this->func_01fff5d0(param1, 0x0)) {
        return;
    }
    VecFx32 vec1;

    if (this->mUnk_1CC == 0x0) {
        VecFx32_Init(-this->mUnk_1C4, FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), &vec1);
        func_01ff9638(&vec1, this->mAngle);
    } else {
        VecFx32_Init(FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), &vec1);
        func_01ff9638(&vec1, this->mAngle);
        vec1.y = this->mUnk_1C4;
    }

    VecFx32 vec2 = this->mPos;

    VecFx32_Add(&vec2, &vec1, &vec2);

    this->mUnk_094.vfunc_14(&this->mUnk_190, &vec2);
}

void ActorUnkTGTZ::func_ov031_020f7358() {
    ActorParams params;
    ActorRef ref;

    params.mUnk_28 = 0x0;
    params.func_ov000_020975f8();

    params.mInitialAngle = this->mAngle;
    params.mUnk_28       = this->mRef;

    this->func_ov000_020973f4(&ref, &data_ov000_020b539c_eur, ActorId_NTTZ, &params, 0x0);

    ActorUnkNTTZ *actor = (ActorUnkNTTZ *) gpActorManager->func_01fff3b4(ref);
    this->mUnk_1B4      = actor;

    u16 value = this->mUnk_5C.mParams[0];
    if (value == 0x0) {
        value = 0x2;
    }
    this->mUnk_1B4->mUnk_94 = value << 0xC;
}

void ActorUnkTGTZ::func_ov031_020f73e4() {
    this->mUnk_1D8 = true;
}

void ActorUnkTGTZ::func_ov031_020f73f0() {
    this->mUnk_1D8 = false;
}
