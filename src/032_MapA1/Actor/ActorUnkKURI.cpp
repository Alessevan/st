#include "Actor/ActorUnkKURI.hpp"

#include "Actor/Actor_Derived1.hpp"
#include "System/SysNew.hpp"

static const VecFx32 data_ov032_02122160(FLOAT_TO_FX32(1.7f), FLOAT_TO_FX32(0.5f), FLOAT_TO_FX32(1.7f));
static ActorUnkZLSL_AnimationTag data_ov032_0212219a                 = {.index = 0, .name = "KURI", .unknown = 0x1};
static ActorUnkZLSL_AnimationTag data_ov032_02122184                 = {.index = 0, .name = "wait", .unknown = 0x0};
static ActorUnkZLSL_AnimationTag data_ov032_0212219c                 = {.index = 1, .name = "discover", .unknown = 0x1};
static PTMF<ActorUnkKURI> data_ov032_02122288[ActorUnkKURIState_Max] = {
    ActorUnkKURI::func_ov032_02119a0c, // ActorUnkKURIState_0
    ActorUnkKURI::func_ov032_02119c80, // ActorUnkKURIState_1
    ActorUnkKURI::func_ov032_02119df4, // ActorUnkKURIState_2
    ActorUnkKURI::func_ov032_02119f40, // ActorUnkKURIState_3
    ActorUnkKURI::func_ov032_0211a20c, // ActorUnkKURIState_4
    ActorUnkKURI::func_ov032_0211a52c, // ActorUnkKURIState_5
    ActorUnkKURI::func_ov032_0211a86c, // ActorUnkKURIState_6
    ActorUnkKURI::func_ov032_0211aac8, // ActorUnkKURIState_7
    ActorUnkKURI::func_ov032_0211abc0, // ActorUnkKURIState_8
    ActorUnkKURI::func_ov032_0211a9c8, // ActorUnkKURIState_9
    ActorUnkKURI::func_ov032_0211ac94, // ActorUnkKURIState_10
    ActorUnkKURI::func_ov032_0211adf4  // ActorUnkKURIState_11
};
static PTMF<ActorUnkKURI> data_ov032_02122348[ActorUnkKURIState_Max] = {
    ActorUnkKURI::func_ov032_02119990, // ActorUnkKURIState_0
    ActorUnkKURI::func_ov032_02119be8, // ActorUnkKURIState_1
    ActorUnkKURI::func_ov032_02119d7c, // ActorUnkKURIState_2
    ActorUnkKURI::func_ov032_02119e90, // ActorUnkKURIState_3
    ActorUnkKURI::func_ov032_0211a140, // ActorUnkKURIState_4
    ActorUnkKURI::func_ov032_0211a484, // ActorUnkKURIState_5
    ActorUnkKURI::func_ov032_0211a7b8, // ActorUnkKURIState_6
    ActorUnkKURI::func_ov032_0211aa40, // ActorUnkKURIState_7
    ActorUnkKURI::func_ov032_0211ab20, // ActorUnkKURIState_8
    ActorUnkKURI::func_ov032_0211a950, // ActorUnkKURIState_9
    ActorUnkKURI::func_ov032_0211ac20, // ActorUnkKURIState_10
    ActorUnkKURI::func_ov032_0211ad40  // ActorUnkKURIState_11
};

DECL_PROFILE(ActorProfileUnkKURI);

Actor *ActorProfileUnkKURI::Create() {
    return new(HeapIndex_2) ActorUnkKURI();
}

ActorProfileUnkKURI::ActorProfileUnkKURI() :
    ActorProfile_Derived1(ActorId_KURI) {
    this->mUnk_04.Init(FLOAT_TO_FX32(0.4f));
    this->vfunc_04()->mUnk_15 = true;
}

ActorUnkKURI::ActorUnkKURI() :
    mUnk_0B0(G3d_GetModelPtr(GET_PROFILE(ActorProfileUnkKURI)->vfunc_04()->mUnk_50)),
    mUnk_110(&this->mUnk_0B0, GET_PROFILE(ActorProfileUnkKURI)->vfunc_04()),
    mUnk_1BC(&this->mUnk_1D8, &this->mUnk_0B0, GET_PROFILE(ActorProfileUnkKURI)->vfunc_04()),
    mUnk_1D8(NULL, NULL) {
    this->func_ov000_0209862c(0x4);
    SET_FLAG(this->mFlags, ActorFlag_9);
    this->mUnk_A4 = &data_ov032_02122160;
}

ActorUnkKURI::~ActorUnkKURI() {}

bool ActorUnkKURI::vfunc_18(unk32 param1) {}
void ActorUnkKURI::vfunc_1C() {}
void ActorUnkKURI::func_ov032_021194dc() {}
void ActorUnkKURI::func_ov032_0211953c() {}
void ActorUnkKURI::vfunc_20() {}
void ActorUnkKURI::vfunc_2C(unk32 param1) {}
void ActorUnkKURI::func_ov032_02119990() {}
void ActorUnkKURI::func_ov032_02119a0c() {}
void ActorUnkKURI::func_ov032_02119be8() {}
void ActorUnkKURI::func_ov032_02119c80() {}
void ActorUnkKURI::func_ov032_02119d7c() {}
void ActorUnkKURI::func_ov032_02119df4() {}
void ActorUnkKURI::func_ov032_02119e90() {}
void ActorUnkKURI::func_ov032_02119f40() {}
void ActorUnkKURI::func_ov032_0211a140() {}
void ActorUnkKURI::func_ov032_0211a20c() {}
void ActorUnkKURI::func_ov032_0211a484() {}
void ActorUnkKURI::func_ov032_0211a52c() {}
void ActorUnkKURI::func_ov032_0211a7b8() {}
void ActorUnkKURI::func_ov032_0211a86c() {}
void ActorUnkKURI::func_ov032_0211a950() {}
void ActorUnkKURI::func_ov032_0211a9c8() {}
void ActorUnkKURI::func_ov032_0211aa40() {}
void ActorUnkKURI::func_ov032_0211aac8() {}
void ActorUnkKURI::func_ov032_0211ab20() {}
void ActorUnkKURI::func_ov032_0211abc0() {}
void ActorUnkKURI::func_ov032_0211ac20() {}
void ActorUnkKURI::func_ov032_0211ac94() {}
void ActorUnkKURI::func_ov032_0211ad40() {}
void ActorUnkKURI::func_ov032_0211adf4() {}
void ActorUnkKURI::func_ov032_0211b024() {}
void ActorUnkKURI::func_ov032_0211b064() {}
void ActorUnkKURI::func_ov032_0211b114() {}
void ActorUnkKURI::func_ov032_0211b17c() {}
void ActorUnkKURI::func_ov032_0211b190() {}
void ActorUnkKURI::func_ov032_0211b1e0() {}
void ActorUnkKURI::func_ov032_0211b298() {}
void ActorUnkKURI::func_ov032_0211b37c() {}
void ActorUnkKURI::func_ov032_0211b3b0() {}
void ActorUnkKURI::vfunc_54(unk32 param1) {}

ActorUnkKURI_268::ActorUnkKURI_268() :
    mUnk_08(0x0, 0x0, 0x0) {}

ActorUnkKURI_268::~ActorUnkKURI_268() {}

bool ActorUnkKURI_268::vfunc_08(const UnkStruct_ov031_020f3310 *param1) {
    VecFx16_Copy2VecFx32(&param1->mUnk_08, &this->mUnk_08);
    this->UnkStruct_ov031_Items_00::vfunc_08(param1);
}

void ActorUnkKURI_1BC::vfunc_3C() {
    this->mUnk_08->func_ov000_02057c98(this->vfunc_10());
}

void ActorUnkKURI_1BC::vfunc_38(unk32 param1, unk32 param2) {
    this->mUnk_04->func_ov000_020578a4(param1, param2);
}

s8 ActorUnkKURI_1BC::vfunc_30() {
    return this->mUnk_18;
}

void ActorUnkKURI_110::vfunc_3C() {
    this->mUnk_08->func_ov000_02057c98(this->mUnk_04);
    this->mUnk_08->func_ov000_02057c98(this->mUnk_1C);
}

void ActorUnkKURI_110::vfunc_38(unk32 param1, unk32 param2) {
    this->mUnk_04->func_ov000_020578a4(param1, param2);
    this->mUnk_1C->func_ov000_020578a4(param1, param2);
}
