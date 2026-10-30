#include "Actor/ActorLokomos.hpp"
#include "System/SysNew.hpp"

// --- Actor SYOS ---
DECL_PROFILE(ActorProfileUnkSYOS);

Actor *ActorProfileUnkSYOS::Create() {
    return NULL;
}

ActorProfileUnkSYOS::ActorProfileUnkSYOS() :
    ActorProfile_Derived1(ActorId_SYOS, ActorId_SYOS) {}

ActorUnkSYOS::ActorUnkSYOS() {}

// --- Actor SYSS ---
DECL_PROFILE(ActorProfileUnkSYSS);

Actor *ActorProfileUnkSYSS::Create() {
    return NULL;
}

ActorProfileUnkSYSS::ActorProfileUnkSYSS() :
    ActorProfile_Derived1(ActorId_SYSS, ActorId_SYSS) {}

ActorUnkSYSS::ActorUnkSYSS() {}

// --- Actor SYWS ---
DECL_PROFILE(ActorProfileUnkSYWS);

Actor *ActorProfileUnkSYWS::Create() {
    return NULL;
}

ActorProfileUnkSYWS::ActorProfileUnkSYWS() :
    ActorProfile_Derived1(ActorId_SYWS, ActorId_SYWS) {}

ActorUnkSYWS::ActorUnkSYWS() {}

// --- Actor SYIS ---
DECL_PROFILE(ActorProfileUnkSYIS);

Actor *ActorProfileUnkSYIS::Create() {
    return NULL;
}

ActorProfileUnkSYIS::ActorProfileUnkSYIS() :
    ActorProfile_Derived1(ActorId_SYIS, ActorId_SYIS) {}

ActorUnkSYIS::ActorUnkSYIS() {}

// --- Actor SYDS ---
DECL_PROFILE(ActorProfileUnkSYDS);

Actor *ActorProfileUnkSYDS::Create() {
    return NULL;
}

ActorProfileUnkSYDS::ActorProfileUnkSYDS() :
    ActorProfile_Derived1(ActorId_SYDS, ActorId_SYDS) {}

ActorUnkSYDS::ActorUnkSYDS() {}

// --- Actor SYOL ---
DECL_PROFILE(ActorProfileUnkSYOL);

Actor *ActorProfileUnkSYOL::Create() {
    return NULL;
}

ActorProfileUnkSYOL::ActorProfileUnkSYOL() :
    ActorProfile_Derived1(ActorId_SYOL, ActorId_SYOL) {}

ActorUnkSYOL::ActorUnkSYOL() {}

// --- Actor SYSL ---
DECL_PROFILE(ActorProfileUnkSYSL);

Actor *ActorProfileUnkSYSL::Create() {
    return NULL;
}

ActorProfileUnkSYSL::ActorProfileUnkSYSL() :
    ActorProfile_Derived1(ActorId_SYSL, ActorId_SYSL) {}

ActorUnkSYSL::ActorUnkSYSL() {}

// --- Actor SYWL ---
DECL_PROFILE(ActorProfileUnkSYWL);

Actor *ActorProfileUnkSYWL::Create() {
    return NULL;
}

ActorProfileUnkSYWL::ActorProfileUnkSYWL() :
    ActorProfile_Derived1(ActorId_SYWL, ActorId_SYWL) {}

ActorUnkSYWL::ActorUnkSYWL() {}

// --- Actor SYIL ---
DECL_PROFILE(ActorProfileUnkSYIL);

Actor *ActorProfileUnkSYIL::Create() {
    return NULL;
}

ActorProfileUnkSYIL::ActorProfileUnkSYIL() :
    ActorProfile_Derived1(ActorId_SYIL, ActorId_SYIL) {}

ActorUnkSYIL::ActorUnkSYIL() {}

// --- Actor SYDL ---
DECL_PROFILE(ActorProfileUnkSYDL);

Actor *ActorProfileUnkSYDL::Create() {
    return NULL;
}

ActorProfileUnkSYDL::ActorProfileUnkSYDL() :
    ActorProfile_Derived1(ActorId_SYDL, ActorId_SYDL) {}

// --- Actor SYFO ---
DECL_PROFILE(ActorProfileUnkSYFO);

Actor *ActorProfileUnkSYFO::Create() {
    return new(HeapIndex_2) ActorLokomo();
}

ActorProfileUnkSYFO::ActorProfileUnkSYFO() :
    ActorProfile_Derived1(ActorId_SYFO) {
    this->mUnk_04.Init(0x0, FX_F32_TO_FX32(0.58f), 0x0, FX_F32_TO_FX32(0.48f));
    this->mUnk_1C = 0xEB2;
    this->mUnk_18 = 0x0;
    this->mUnk_1A = 0x1B33;

    this->vfunc_04()->mUnk_15 = 0x1;

    ActorId id;
    if (data_027e09a4->mUnk_00.sceneIndex == SceneIndex_b_last22) {
        id = ActorId_SYOL;
    } else {
        id = ActorId_SYOS;
    }

    this->mUnk_24 = id;
}

// --- Actor SYSN ---
DECL_PROFILE(ActorProfileUnkSYSN);

Actor *ActorProfileUnkSYSN::Create() {
    return new(HeapIndex_2) ActorLokomo();
}

ActorProfileUnkSYSN::ActorProfileUnkSYSN() :
    ActorProfile_Derived1(ActorId_SYSN) {
    this->mUnk_04.Init(0x0, FX_F32_TO_FX32(0.58f), 0x0, FX_F32_TO_FX32(0.48f));
    this->mUnk_1C = 0xCCD;
    this->mUnk_18 = 0x0;
    this->mUnk_1A = 0x1B33;

    this->vfunc_04()->mUnk_15 = 0x1;

    ActorId id;
    if (data_027e09a4->mUnk_00.sceneIndex == SceneIndex_b_last22) {
        id = ActorId_SYSL;
    } else {
        id = ActorId_SYSS;
    }

    this->mUnk_24 = id;
}

// --- Actor SYWA ---
DECL_PROFILE(ActorProfileUnkSYWA);

Actor *ActorProfileUnkSYWA::Create() {
    return new(HeapIndex_2) ActorLokomo();
}

ActorProfileUnkSYWA::ActorProfileUnkSYWA() :
    ActorProfile_Derived1(ActorId_SYWA) {
    this->mUnk_04.Init(0x0, FX_F32_TO_FX32(0.58f), 0x0, FX_F32_TO_FX32(0.48f));
    this->mUnk_1C = 0xD9A;
    this->mUnk_18 = 0x0;
    this->mUnk_1A = 0x1B33;

    this->vfunc_04()->mUnk_15 = 0x1;

    ActorId id;
    if (data_027e09a4->mUnk_00.sceneIndex == SceneIndex_b_last22) {
        id = ActorId_SYWL;
    } else {
        id = ActorId_SYWS;
    }

    this->mUnk_24 = id;
}

// --- Actor SYFI ---
DECL_PROFILE(ActorProfileUnkSYFI);

Actor *ActorProfileUnkSYFI::Create() {
    return new(HeapIndex_2) ActorLokomo();
}

ActorProfileUnkSYFI::ActorProfileUnkSYFI() :
    ActorProfile_Derived1(ActorId_SYFI) {
    this->mUnk_04.Init(0x0, FX_F32_TO_FX32(0.58f), 0x0, FX_F32_TO_FX32(0.48f));
    this->mUnk_1C = 0xE8F;
    this->mUnk_18 = 0x0;
    this->mUnk_1A = 0x1B33;

    this->vfunc_04()->mUnk_15 = 0x1;

    ActorId id;
    if (data_027e09a4->mUnk_00.sceneIndex == SceneIndex_b_last22) {
        id = ActorId_SYIL;
    } else {
        id = ActorId_SYIS;
    }

    this->mUnk_24 = id;
}

// --- Actor SYDE ---
DECL_PROFILE(ActorProfileUnkSYDE);

Actor *ActorProfileUnkSYDE::Create() {
    return new(HeapIndex_2) ActorLokomo();
}

ActorProfileUnkSYDE::ActorProfileUnkSYDE() :
    ActorProfile_Derived1(ActorId_SYDE) {
    this->mUnk_04.Init(0x0, FX_F32_TO_FX32(0.58f), 0x0, FX_F32_TO_FX32(0.48f));
    this->mUnk_1C = 0xE8F;
    this->mUnk_18 = 0x0;
    this->mUnk_1A = 0x1B33;

    this->vfunc_04()->mUnk_15 = 0x1;

    ActorId id;
    if (data_027e09a4->mUnk_00.sceneIndex == SceneIndex_b_last22) {
        id = ActorId_SYDL;
    } else {
        id = ActorId_SYDS;
    }

    this->mUnk_24 = id;
}

void ActorLokomo::func_ov058_02143438(unk32 param1) {}

ActorLokomo::ActorLokomo() :
    ActorKenzo_Base(NULL, NULL),
    mUnk_4C4(NULL, NULL, NULL, NULL) {}

ActorLokomo::~ActorLokomo() {}

// non-matching
void ActorLokomo::func_ov058_021446b8() {}
// non-matching
void ActorLokomo::func_ov058_02144ba0() {}
// non-matching
void ActorLokomo::func_ov058_02145120() {}

unk32 ActorLokomo::func_ov058_021456a4() {
    switch (this->func_ov058_021456d8()) {
        case 0x0:
            return 0x1;
        case 0x1:
            return 0x2;
        default:
            break;
    }

    return 0x0;
}

unk32 ActorLokomo::func_ov058_021456d8() {
    if (this->GetActorId() == ActorId_SYFO) {
        return 0x0;
    }
    if (this->GetActorId() == ActorId_SYSN) {
        return 0x1;
    }
    if (this->GetActorId() == ActorId_SYWA) {
        return 0x2;
    }
    if (this->GetActorId() == ActorId_SYFI) {
        return 0x3;
    }
    return 0x4;
}

// non-matching
bool ActorLokomo::Init(unk32 param1) {}
// non-matching
void ActorLokomo::vfunc_54(unk32 param1) {}
// non-matching
void ActorLokomo::SetState(ActorState state) {}
// non-matching
void ActorLokomo::func_ov058_021459b8() {}
// non-matching
void ActorLokomo::Update() {}
// non-matching
void ActorLokomo::func_ov058_02145bd4() {}
// non-matching
unk32 ActorLokomo::vfunc_7C(unk32 param1) {}
// non-matching
unk32 ActorLokomo::vfunc_80(unk32 param1, unk32 param2) {}
// non-matching
void ActorLokomo::func_ov058_02145e94() {}
// non-matching
void ActorLokomo::func_ov058_02145ef0() {}
// non-matching
void ActorLokomo::func_ov058_02146070() {}
// non-matching
void ActorLokomo::vfunc_2C(unk32 param1) {}
// non-matching
void ActorLokomo::vfunc_B8() {}
// non-matching
void ActorLokomo::vfunc_0BC() {}
// non-matching
void ActorLokomo::vfunc_0C0() {}
// non-matching
void ActorLokomo::vfunc_0C4() {}
// non-matching
void ActorLokomo::vfunc_0C8() {}
// non-matching
void ActorLokomo::vfunc_0CC() {}
// non-matching
void ActorLokomo::vfunc_0D0() {}
// non-matching
void ActorLokomo::vfunc_0D4() {}
// non-matching
void ActorLokomo::vfunc_0D8() {}
// non-matching
void ActorLokomo::vfunc_0DC() {}
// non-matching
void ActorLokomo::vfunc_114() {}
// non-matching
void ActorLokomo::vfunc_118() {}
// non-matching
void ActorLokomo::vfunc_11C() {}
// non-matching
void ActorLokomo::vfunc_120() {}
// non-matching
void ActorLokomo::vfunc_0E0() {
    this->ActorCharacter::vfunc_0E0();

    if (!this->mUnk_901) {
        return;
    }

    this->vfunc_124();
}
// non-matching
void ActorLokomo::vfunc_0F4() {}

void ActorLokomo::vfunc_100() {
    this->ActorCharacter::vfunc_100();
}

// non-matching
void ActorLokomo::vfunc_124() {}
// non-matching
void ActorLokomo::func_ov058_02146848() {}
// non-matching
void ActorLokomo::func_ov058_021468d8() {}
// non-matching
void ActorLokomo::vfunc_128() {}
// non-matching
void ActorLokomo::vfunc_12C() {}
// non-matching
void ActorLokomo::vfunc_130() {}
// non-matching
void ActorLokomo::func_ov058_02146984() {}
// non-matching
void ActorLokomo::vfunc_98(u32 param1) {}
// non-matching
void ActorLokomo::vfunc_134() {}
// non-matching
void ActorLokomo::func_ov058_02146c6c() {}
// non-matching
void ActorLokomo::func_ov058_02146ccc() {}
// non-matching
void ActorLokomo::func_ov058_02146cec() {}
// non-matching
void ActorLokomo::func_ov058_02146d30() {}
// non-matching
void ActorLokomo::func_ov058_02146d74() {}
// non-matching
void ActorLokomo::func_ov058_021470d8() {}
// non-matching
void ActorLokomo::func_ov058_02147148() {}
// non-matching
void ActorLokomo::vfunc_A4() {}
// non-matching
void ActorLokomo::func_ov058_021471f4() {}
// non-matching
void ActorLokomo::func_ov058_02147740() {}
// non-matching
void ActorLokomo::func_ov058_02147760() {}
// non-matching
void ActorLokomo::func_ov058_02147860() {}

bool ActorLokomo::vfunc_9C() {
    if (this->GetActorId() == ActorId_SYWA) {
        PassengerManager *instance = gpPassengerManager;
        instance->TryBoardTrain(this->GetActorId(), SceneIndex_f_water2, 0xFF);
    }

    return true;
}

unk32 ActorLokomo::vfunc_A0() {
    if (this->func_ov058_02147aec()) {
        gpPassengerManager->TryResetAtDestination();
    }

    return 0x1;
}

bool ActorLokomo::vfunc_5C(unk32 param1, unk32 param2) {
    this->func_ov058_02147b6c();
    this->func_ov058_021470d8();

    bool retValue = this->Actor_Derived1::vfunc_5C(param1, param2);
    if (retValue) {
        if (this->mUnk_5C.mParams[2] == 0x1 ||
            (this->mUnk_5C.mParams[2] == 0x0 && this->Actor_Derived1::func_ov000_020a8dd0())) {
            this->func_ov058_021459b8();
        }
    }

    return retValue;
}

bool ActorLokomo::func_ov058_02147aec() {
    if (this->GetActorId() != ActorId_SYWA) {
        return false;
    }

    PassengerManager *instance = gpPassengerManager;
    if (instance->CanCompleteTrip()) {
        instance = instance->GetInstance();

        if (instance->mPassenger.mActorId == this->GetActorId() &&
            data_027e09a4->mUnk_00.sceneIndex == instance->mPassenger.mSceneIndex) {
            return true;
        }
    }

    return false;
}

void ActorLokomo::func_ov058_02147b6c() {
    if (this->mUnk_904) {
        return;
    }

    this->mUnk_4C4.vfunc_24(0x1000);
}

void ActorLokomo::func_ov058_02147b98() {
    if (this->mUnk_904) {
        return;
    }

    this->mUnk_4C4.vfunc_24(0x0);
}

// non-matching (something on the stack (params))
void ActorLokomo::func_ov058_02147bc4(VecFx32 *vec, UnkAngleStruct param1) {
    if (this->mUnk_904) {
        this->mPos   = *vec;
        this->mAngle = param1;
    }
}

void ActorLokomo::func_ov058_02147bf4() {
    if (this->GetActorId() != ActorId_SYWA) {
        return;
    }

    this->func_ov058_02147b98();
    this->vfunc_98(0x12);
}

void ActorLokomo::func_ov058_02147c30() {
    if (this->GetActorId() != ActorId_SYWA) {
        return;
    }

    this->func_ov058_02147b98();
    this->vfunc_98(0x11);
}

void ActorLokomo::func_ov058_02147c6c() {
    if (this->GetActorId() != ActorId_SYWA) {
        return;
    }

    this->func_ov058_02147b98();
    this->vfunc_98(0x2);
}

void ActorLokomo::func_ov058_02147ca8() {
    if (this->GetActorId() != ActorId_SYWA) {
        return;
    }

    this->func_ov058_02147b98();
    this->vfunc_98(0x0);
}

void ActorLokomo::func_ov058_02147ce4(unk32 param1) {
    if (this->GetActorId() != ActorId_SYWA) {
        return;
    }

    if (param1 != 0x0) {
        this->func_ov058_02147b6c();
        return;
    }

    this->func_ov058_02147b98();
}

void ActorLokomo::func_ov058_02147d20() {
    if (this->GetActorId() != ActorId_SYWA) {
        return;
    }

    this->func_ov058_02147b98();
    this->vfunc_98(0x13);
}

void ActorLokomo::func_ov058_02147d5c() {}

inline ActorKenzo_Base_160::~ActorKenzo_Base_160() {}
inline ActorKenzo_Base::~ActorKenzo_Base() {}
ActorProfileUnkSYOS::~ActorProfileUnkSYOS() {}
ActorProfileUnkSYSS::~ActorProfileUnkSYSS() {}
ActorProfileUnkSYWS::~ActorProfileUnkSYWS() {}
ActorProfileUnkSYIS::~ActorProfileUnkSYIS() {}
ActorProfileUnkSYDS::~ActorProfileUnkSYDS() {}
ActorProfileUnkSYOL::~ActorProfileUnkSYOL() {}
ActorProfileUnkSYSL::~ActorProfileUnkSYSL() {}
ActorProfileUnkSYWL::~ActorProfileUnkSYWL() {}
ActorProfileUnkSYIL::~ActorProfileUnkSYIL() {}
ActorProfileUnkSYDL::~ActorProfileUnkSYDL() {}
ActorProfileUnkSYFO::~ActorProfileUnkSYFO() {}
ActorProfileUnkSYSN::~ActorProfileUnkSYSN() {}
ActorProfileUnkSYWA::~ActorProfileUnkSYWA() {}
ActorProfileUnkSYFI::~ActorProfileUnkSYFI() {}
ActorProfileUnkSYDE::~ActorProfileUnkSYDE() {}
