#include "Actor/ActorBlast.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileBlast);

Actor *ActorProfileBlast::Create() {
    return new(HeapIndex_2) ActorBlast();
}

ActorProfileBlast::ActorProfileBlast() :
    ActorProfile(ActorId_BLST) {
    VecFx32_Init(FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), &this->mUnk_04.pos);
}

// non-matching
void ActorBlast_E8::vfunc_0C() {}

// non-matching
ActorBlast::ActorBlast() :
    mUnk_94(0xA00),
    mUnk_98(0x0),
    mUnk_9A(0x18),
    mUnk_E8(this) {}

// non-matching
bool ActorBlast::vfunc_18(unk32 param1) {
    return false;
}

// non-matching
void ActorBlast::vfunc_20() {}

// non-matching
void ActorBlast::vfunc_24() {}

// non-matching
void ActorBlast::func_ov031_020e3b94() {}
// non-matching
void ActorBlast::func_ov031_020e3b9c() {}

ActorBlast::~ActorBlast() {}

ActorProfileBlast::~ActorProfileBlast() {}
