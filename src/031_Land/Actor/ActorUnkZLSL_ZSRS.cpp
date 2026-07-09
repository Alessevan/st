#include "Actor/ActorUnkZLSL_ZSRS.hpp"
#include "System/SysNew.hpp"

ModelRender_ov031_02113670::~ModelRender_ov031_02113670() {}
UnkStruct_ov031_0211369c::~UnkStruct_ov031_0211369c() {}
UnkStruct_ov031_021136e4::~UnkStruct_ov031_021136e4() {}
UnkStruct_ov031_0211372c::~UnkStruct_ov031_0211372c() {}

// --- Actor ZSRS ---

THUMB_BEGIN

DECL_PROFILE(ActorProfileUnkZSRS);

Actor *ActorProfileUnkZSRS::Create() {
    return NULL;
}

ActorProfileUnkZSRS::ActorProfileUnkZSRS() :
    ActorProfile_Derived2(ActorId_ZSRS, ActorId_ZSRS) {}

ActorUnkZSRS::ActorUnkZSRS() :
    Actor_Derived1(NULL, 0x0) {}

// --- Actor ZLSL ---

DECL_PROFILE(ActorProfileUnkZLSL);

Actor *ActorProfileUnkZLSL::Create() {
    return new(HeapIndex_2) ActorUnkZLSL();
}

ActorProfileUnkZLSL::ActorProfileUnkZLSL() :
    ActorProfile(ActorId_ZLSL) {}

ActorUnkZLSL::ActorUnkZLSL() :
    Actor_Derived1(NULL, 0x0) {}

ActorUnkZLSL::~ActorUnkZLSL() {}

THUMB_END

// data_ov031_021135f0
// data_ov031_021135f4
// data_ov031_021135f8
// data_ov031_021135fc
// data_ov031_0211361c
// PTMF data_ov031_021137f8
static PTMF<ActorUnkZLSL> data_ov031_02113770[0x11] = {
    ActorUnkZLSL::func_ov031_020eaa68, ActorUnkZLSL::func_ov031_020ea86c, ActorUnkZLSL::func_ov031_020ea868,
    ActorUnkZLSL::func_ov031_020ea864, ActorUnkZLSL::func_ov031_020eac64, ActorUnkZLSL::func_ov031_020ead0c,
    ActorUnkZLSL::func_ov031_020ec034, ActorUnkZLSL::func_ov031_020ec05c, ActorUnkZLSL::func_ov031_020ec0d4,
    ActorUnkZLSL::func_ov031_020eb5f8, ActorUnkZLSL::func_ov031_020ead7c, ActorUnkZLSL::func_ov031_020eb188,
    ActorUnkZLSL::func_ov031_020ebfd8, ActorUnkZLSL::func_ov031_020eafe0, ActorUnkZLSL::func_ov031_020eaa8c,
    ActorUnkZLSL::func_ov031_020ec164, ActorUnkZLSL::func_ov031_020eba58,
};
static const char data_ov031_02113a08[24] = "blink";
// data_ov031_02113a20
// data_ov031_02113a38
// data_ov031_02113a50
// data_ov031_02113a68
// data_ov031_02113a80
// data_ov031_02113a98
// data_ov031_02113ab0
// data_ov031_02113ac8
// data_ov031_02113ae0
// data_ov031_02113af8
// data_ov031_02113b58
// data_ov031_02113d08
// data_ov031_02113d14
// data_ov031_02113d3c
// data_ov031_02113d58

// non-matching
void ActorUnkZLSL::GetOffsetPos(VecFx32 *pPos) const {}

// non-matching
bool ActorUnkZLSL::vfunc_18(unk32 param1) {}

// non-matching
void ActorUnkZLSL::vfunc_20() {}

// non-matching
void ActorUnkZLSL::vfunc_2C(unk32 param1) {}

// non-matching
void ActorUnkZLSL::vfunc_58(unk32 param1) {}

// non-matching
void ActorUnkZLSL::vfunc_68() {}

// non-matching
void ActorUnkZLSL::vfunc_6C() {}

// non-matching
void ActorUnkZLSL::vfunc_70() {}

// non-matching
unk32 ActorUnkZLSL::vfunc_7C() {}

// non-matching
unk32 ActorUnkZLSL::vfunc_80() {}

// non-matching
unk32 ActorUnkZLSL::vfunc_88() {}

// non-matching
unk32 ActorUnkZLSL::vfunc_8C() {}

// non-matching
void ActorUnkZLSL::vfunc_98(unk32 param1) {}

// non-matching
void ActorUnkZLSL::vfunc_A4() {}

void ActorUnkZLSL::vfunc_AC() {}

// non-matching
void ActorUnkZLSL::vfunc_B0() {}

// non-matching
void ActorUnkZLSL::vfunc_B4() {}

// non-matching
void ActorUnkZLSL::func_ov031_020ea674() {}

// non-matching
void ActorUnkZLSL::func_ov031_020ea7a8() {}

// non-matching
void ActorUnkZLSL::func_ov031_020ea864() {}

// non-matching
void ActorUnkZLSL::func_ov031_020ea868() {}

// non-matching
void ActorUnkZLSL::func_ov031_020ea86c() {}

// non-matching
void ActorUnkZLSL::func_ov031_020eaa68() {}

// non-matching
void ActorUnkZLSL::func_ov031_020eaa8c() {}

// non-matching
void ActorUnkZLSL::func_ov031_020eac64() {}

// non-matching
void ActorUnkZLSL::func_ov031_020ead0c() {}

// non-matching
void ActorUnkZLSL::func_ov031_020ead7c() {}

// non-matching
void ActorUnkZLSL::func_ov031_020eafe0() {}

// non-matching
void ActorUnkZLSL::func_ov031_020eb188() {}

// non-matching
void ActorUnkZLSL::func_ov031_020eb5f8() {}

// non-matching
void ActorUnkZLSL::func_ov031_020eba58() {}

// non-matching
void ActorUnkZLSL::func_ov031_020ebfd8() {}

// non-matching
void ActorUnkZLSL::func_ov031_020ec034() {}

// non-matching
void ActorUnkZLSL::func_ov031_020ec05c() {}

// non-matching
void ActorUnkZLSL::func_ov031_020ec0d4() {}

// non-matching
void ActorUnkZLSL::func_ov031_020ec164() {}

// non-matching
void ActorUnkZLSL::func_ov031_020ecbe0() {}

// non-matching
void ActorUnkZLSL::func_ov031_020ee1f4() {}

ActorProfileUnkZLSL::~ActorProfileUnkZLSL() {}
ActorProfileUnkZSRS::~ActorProfileUnkZSRS() {}
