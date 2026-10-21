#include "Actor/ActorUnkNSTN.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_ov000_020b5d34.hpp"

DECL_PROFILE(ActorProfileUnkNSTN);

Actor *ActorProfileUnkNSTN::Create() {
    return new(HeapIndex_2) ActorUnkNSTN();
}

ActorProfileUnkNSTN::ActorProfileUnkNSTN() :
    ActorProfile(ActorId_NSTN) {
    this->mUnk_04.size = FX_F32_TO_FX32(0.25f);
}

ActorUnkNSTN::ActorUnkNSTN() :
    mUnk_110(G3d_GetModelPtr(data_ov000_020b5d34.GetProfileFromId(MapObjectId_STNE)->vfunc_04()->mUnk_50), 0x1) {}

void ActorUnkNSTN::func_ov058_02142abc() {}

void ActorUnkNSTN::func_ov058_02142ad0(unk32 param1) {
    this->Actor_ov031_02113fd4::Init(param1);
    this->mUnk_10C = 0x1;
}

void ActorUnkNSTN::func_ov058_02142ae8() {}
void ActorUnkNSTN::func_ov058_02142af0() {}
void ActorUnkNSTN::func_ov058_02142b44() {}
void ActorUnkNSTN::func_ov058_02142b7c() {}
void ActorUnkNSTN::func_ov058_02142bac() {}
void ActorUnkNSTN::func_ov058_02142bb8() {}
void ActorUnkNSTN::func_ov058_02142bc4() {}
void ActorUnkNSTN::func_ov058_02142bd0() {}
void ActorUnkNSTN::func_ov058_02142bdc() {}
void ActorUnkNSTN::func_ov058_02142be8() {}
void ActorUnkNSTN::func_ov058_02142bf4() {}
void ActorUnkNSTN::func_ov058_02142c00() {}
void ActorUnkNSTN::func_ov058_02142c0c() {}
void ActorUnkNSTN::func_ov058_02142c20() {}
void ActorUnkNSTN::func_ov058_02142c34() {}
void ActorUnkNSTN::func_ov058_02142d08() {}

ActorUnkNSTN::~ActorUnkNSTN() {}
ActorProfileUnkNSTN::~ActorProfileUnkNSTN() {}
