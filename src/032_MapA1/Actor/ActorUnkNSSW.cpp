#include "Actor/ActorUnkNSSW.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_ov000_020b5d34.hpp"

DECL_PROFILE(ActorProfileUnkNSSW);

char data_ov032_02121ee4;

Actor *ActorProfileUnkNSSW::Create() {
    return new(HeapIndex_2) ActorUnkNSSW();
}

ActorProfileUnkNSSW::ActorProfileUnkNSSW() :
    ActorProfile(ActorId_NSSW) {
    this->mUnk_04.Init(FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.3f));
}

ActorUnkNSSW::ActorUnkNSSW() :
    mUnk_0B0(
        G3d_GetUnkPtr(((MapObjectProfile_Derived2 *) data_ov000_020b5d34.GetProfileFromId(MapObjectId_SWSW))->mUnk_20.mUnk_50,
                      &data_ov032_02121ee4),
        true),
    mUnk_0BC(0x7),
    mUnk_0E0(this),
    mUnk_104(this),
    mUnk_134(0x0),
    mUnk_138(0x0),
    mUnk_13C(0x0),
    mUnk_140(0x0),
    mUnk_144(0x0),
    mUnk_148(0x0),
    mUnk_14C(0x0),
    mUnk_174(0x0),
    mUnk_178(0x0),
    mUnk_17C(0x0),
    mUnk_180(0x1000),
    mUnk_184_eur(NULL),
    mUnk_188_eur(NULL),
    mUnk_18C(0x0),
    mUnk_190(0x0),
    mUnk_194(0x0),
    mUnk_198(0x0),
    mUnk_19d(0x0) {
    Mat3p_InitIdentity(&this->mUnk_150);
    this->mUnk_40 = &this->mUnk_0E0;
}

bool ActorUnkNSSW::vfunc_18(unk32 param1) {
    this->mUnk_104.mUnk_04 = this->mRef;
    this->mUnk_0E0.mUnk_1C = 0x1;
    this->mUnk_19d         = 0x0;

    this->func_ov032_02120894();
    return true;
}

void ActorUnkNSSW::vfunc_20() {}
void ActorUnkNSSW::func_ov032_02120118() {}
void ActorUnkNSSW::func_ov032_02120190() {}
void ActorUnkNSSW::func_ov032_0212025c() {}
void ActorUnkNSSW::func_ov032_021202d8() {}
void ActorUnkNSSW::func_ov032_021203fc() {}
void ActorUnkNSSW::vfunc_2C(unk32 param1) {}
void ActorUnkNSSW::func_ov032_02120880() {}
void ActorUnkNSSW::func_ov032_02120894() {}
void ActorUnkNSSW::func_ov032_02120b34(ActorRef ref) {}
void ActorUnkNSSW::func_ov032_02120b6c() {}
void ActorUnkNSSW::func_ov032_02120b7c(VecFx32 *param1) {}
void ActorUnkNSSW::func_ov032_02120bc0() {}
void ActorUnkNSSW::func_ov032_02120bfc() {}
void ActorUnkNSSW::func_ov032_02120c64(MapObjectUnkSWSW *param1) {}

ActorUnkNSSW_0E0::ActorUnkNSSW_0E0(ActorUnkNSSW *actor) :
    Actor_C4(actor, 0x1) {
    this->mUnk_20 = actor;
    this->mUnk_04 = 0x1;
}

bool ActorUnkNSSW_0E0::vfunc_00(ActorRef ref, unk32 param2) {
    if (param2 != 0x0) {
        ActorUnkNSSW *actor = this->GetActorPtr<ActorUnkNSSW>();
        actor->func_ov032_02120b34(ref);
    }

    return this->Actor_C4::vfunc_00(ref, param2);
}

bool ActorUnkNSSW_0E0::vfunc_04() {
    this->GetActorPtr<ActorUnkNSSW>()->func_ov032_02120b6c();

    return this->Actor_C4::vfunc_04();
}

void ActorUnkNSSW_0E0::vfunc_0C(VecFx32 *param1) {
    if (VecFx32_Length(param1) < FLOAT_TO_FX32(0.01f)) {
        this->GetActorPtr<ActorUnkNSSW>()->func_ov032_02120bc0();
    } else {
        this->GetActorPtr<ActorUnkNSSW>()->func_ov032_02120b7c(param1);
    }

    return this->Actor_C4::vfunc_0C(param1);
}

ActorUnkNSSW_104::ActorUnkNSSW_104(ActorUnkNSSW *actor) :
    mUnk_2C(actor) {}

void ActorUnkNSSW_104::vfunc_10(Actor *actor) {
    this->mUnk_2C->func_ov032_02120bfc();
}
