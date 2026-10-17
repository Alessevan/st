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
    mUnk_910(this->mUnk_91C, 0xC8),
    mUnk_DCC(this->mUnk_C3C),
    mUnk_DD0(0x0),
    mUnk_DD4(0x5),
    mUnk_DD8(0x0),
    mUnk_DDA(0x0),
    mUnk_DDC(0x2710000),
    mUnk_DE0(0x0),
    mUnk_DE4(0x2710000),
    mUnk_DE8(-0x2710000),
    mUnk_DEC(0x0),
    mUnk_DF0(-0x2710000),
    mUnk_DF8(-0x1),
    mUnk_DFC(&this->mUnk_910) {
    _MI_CpuFill(0x0, this->mUnk_C3C, ARRAY_LEN(this->mUnk_C3C));

    Vec2s base_value(0, 0);
    for (s32 i = 0; i < ARRAY_LEN(this->mUnk_91C); ++i) {
        this->mUnk_91C[i] = base_value;
    }
}

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

void ActorUnkRCFO::vfunc_2C(unk32 param1) {}
void ActorUnkRCFO::func_ov033_02119840(unk32 param1, unk32 param2) {}
void ActorUnkRCFO::func_ov033_021199f4() {}
void ActorUnkRCFO::func_ov033_02119a58() {}

void ActorUnkRCFO::func_ov033_02119bc4() {
    this->mUnk_094.func_ov033_021190f4();
}

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

ActorProfileUnkRCFO::~ActorProfileUnkRCFO() {}
