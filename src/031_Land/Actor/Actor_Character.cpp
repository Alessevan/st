#include "Actor/Actor_Character.hpp"

Actor_Character::Actor_Character(ModelRender *param1, ActorUnkZSRS_120 *param2) :
    Actor_Derived1(param1, param2),
    mUnk_120(0x64),
    mUnk_122(0xC8),
    mUnk_124(0x0),
    mUnk_126(0x0),
    mUnk_128(0x0),
    mUnk_12C(this),
    mUnk_140(0x0),
    mUnk_158(0x0),
    mUnk_15C(0x0) {
    this->mUnk_2C  = 0x0;
    this->mUnk_144 = 0x0;
    this->mUnk_148 = 0x0;
    this->mUnk_14C = 0x0;
    this->mUnk_150 = 0x0;
    this->mUnk_154 = 0x0;
}

Actor_Character::~Actor_Character() {}

Actor_Character_12C::Actor_Character_12C(Actor_Character *param1) :
    mUnk_08(param1),
    mUnk_0C(0x0),
    mUnk_0E(0x0),
    mUnk_10(0x0) {}

Actor_Character_12C::~Actor_Character_12C() {
    this->mUnk_08 = NULL;
}

// non-matching
bool Actor_Character_12C::vfunc_08(const UnkStruct_ov031_020f3310 *param1, unk32 param2) {}
// non-matching
bool Actor_Character_12C::vfunc_0C(RefStruct ref, UnkStruct_ov031_020e54d4 *param2, const VecFx32 *param3,
                                   const VecFx32 *param4) {}
// non-matching
void Actor_Character::vfunc_AC() {}
// non-matching
void Actor_Character::vfunc_54(unk32 param1) {}
// non-matching
void Actor_Character::vfunc_0BC() {}
// non-matching
void Actor_Character::vfunc_0E0() {}
// non-matching
void Actor_Character::vfunc_0C0() {}
// non-matching
void Actor_Character::vfunc_0E4() {}
// non-matching
void Actor_Character::func_ov031_020e79bc() {}
// non-matching
void Actor_Character::vfunc_0C4() {}
// non-matching
void Actor_Character::vfunc_0E8() {}
// non-matching
void Actor_Character::vfunc_0C8() {}
// non-matching
void Actor_Character::vfunc_0EC() {}
// non-matching
void Actor_Character::func_ov031_020e812c() {}
// non-matching
void Actor_Character::vfunc_0CC() {}
// non-matching
void Actor_Character::vfunc_0F0() {}
// non-matching
void Actor_Character::vfunc_0D0() {}
// non-matching
void Actor_Character::vfunc_0F4() {}
// non-matching
void Actor_Character::vfunc_0D4() {}
// non-matching
void Actor_Character::vfunc_0F8() {}
// non-matching
void Actor_Character::vfunc_0D8() {}
// non-matching
void Actor_Character::vfunc_0FC() {}
// non-matching
void Actor_Character::vfunc_0DC() {}
// non-matching
void Actor_Character::vfunc_100() {}
// non-matching
void Actor_Character::vfunc_104() {}
// non-matching
void Actor_Character::vfunc_58(ActorState param1) {}
// non-matching
void Actor_Character::Update() {}
// non-matching
void Actor_Character::vfunc_10C() {}
// non-matching
void Actor_Character::vfunc_108() {}
// non-matching
void Actor_Character::vfunc_110() {}
