#include "Actor/ActorUnkRCFO.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkRCFO);

char *data_ov033_02121190[] = {"-", "☆", "tri", "sitaboko", "umbrella"};

Actor *ActorProfileUnkRCFO::Create() {
    return new(HeapIndex_2) ActorUnkRCFO();
}

ActorProfileUnkRCFO::ActorProfileUnkRCFO() :
    ActorProfile(ActorId_RCFO) {}

ActorUnkRCFO::ActorUnkRCFO() :
    mUnk_910(&this->mUnk_91C),
    mUnk_DFC(&this->mUnk_910) {}

ActorUnkRCFO::~ActorUnkRCFO() {
    this->mUnk_094.func_ov033_021190dc();
}

extern unk32 data_ov033_0211dbe0;

bool ActorUnkRCFO::Init(unk32 param1) {
    this->mUnk_DF4 = this->mUnk_5C.mParams[0];
    this->mUnk_094.func_ov033_02119048(&data_ov033_0211dbe0);

    this->func_ov033_02119840(0x0, 0x1);
    return true;
}

void ActorUnkRCFO::Setup() {}
void ActorUnkRCFO::Update() {}

void ActorUnkRCFO::vfunc_24() {
    this->Update();
}

void ActorUnkRCFO::vfunc_2C(Actor_vfunc_30 *param1) {}
void ActorUnkRCFO::func_ov033_02119840(unk32 param1, unk32 param2) {}
void ActorUnkRCFO::func_ov033_021199f4() {}
void ActorUnkRCFO::func_ov033_02119a58() {}
void ActorUnkRCFO::func_ov033_02119bc4() {}

ActorUnkRCFO_DFC::ActorUnkRCFO_DFC(ActorUnkRCFO_910 *param1) :
    mUnk_10(param1),
    mUnk_14(true),
    mUnk_15(false) {}

void ActorUnkRCFO_DFC::vfunc_00() {
    if (!this->mUnk_14 || this->mUnk_10 == NULL) {
        return;
    }
    this->mUnk_10->func_ov000_0205b224(0x2000, 0x7FBC);
}
