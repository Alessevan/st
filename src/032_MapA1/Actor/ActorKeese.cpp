#define VECFX32_CTORS

#include "Actor/ActorKeese.hpp"

#include "Map/MapObjectId.hpp"
#include "MapObject/MapObjectUnkSKDI.hpp"
#include "System/Random.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"

extern "C" void *data_ov032_02121ed4;

static const VecFx32 data_ov032_021224d8(FLOAT_TO_FX32(1.7f), FLOAT_TO_FX32(0.5f), FLOAT_TO_FX32(1.7f));
static ActorUnkZLSL_AnimationTag data_ov032_021224e4             = {.index = 0, .name = "fly"};
static ActorUnkZLSL_AnimationTag data_ov032_021224fc             = {.index = 0, .name = "keeth", .unknown = 1};
static PTMF<ActorKeese> data_ov032_0212258c[ActorKeeseState_Max] = {
    ActorKeese::func_ov032_0211e9ec, // ActorKeeseState_0
    ActorKeese::func_ov032_0211ece8, // ActorKeeseState_1
    ActorKeese::func_ov032_0211f1f0, // ActorKeeseState_2
    ActorKeese::func_ov032_0211f054, // ActorKeeseState_3
    ActorKeese::func_ov032_0211f300, // ActorKeeseState_4
    ActorKeese::func_ov032_0211f3ac, // ActorKeeseState_5
    ActorKeese::func_ov032_0211f4a4, // ActorKeeseState_6
    ActorKeese::func_ov032_0211f560, // ActorKeeseState_7
    ActorKeese::func_ov032_0211f604, // ActorKeeseState_8
    ActorKeese::func_ov032_0211f6bc, // ActorKeeseState_9
};
static PTMF<ActorKeese> data_ov032_021225dc[ActorKeeseState_Max] = {
    ActorKeese::func_ov032_0211eb60, // ActorKeeseState_0
    ActorKeese::func_ov032_0211ee5c, // ActorKeeseState_1
    ActorKeese::func_ov032_0211f1f4, // ActorKeeseState_2
    ActorKeese::func_ov032_0211f0a8, // ActorKeeseState_3
    ActorKeese::func_ov032_0211f310, // ActorKeeseState_4
    ActorKeese::func_ov032_0211f404, // ActorKeeseState_5
    ActorKeese::func_ov032_0211f50c, // ActorKeeseState_6
    ActorKeese::func_ov032_0211f58c, // ActorKeeseState_7
    ActorKeese::func_ov032_0211f614, // ActorKeeseState_8
    ActorKeese::func_ov032_0211f804, // ActorKeeseState_9
};

DECL_PROFILE(ActorProfileKeese);

Actor *ActorProfileKeese::Create() {
    return new(HeapIndex_2) ActorKeese();
}

ActorProfileKeese::ActorProfileKeese() :
    ActorProfile_Derived1(ActorId_Keese) {
    this->mUnk_04.Init(FLOAT_TO_FX32(0.4f));

    this->vfunc_04()->mUnk_15 = 0x1;
}

ModelRender_ov032_02122568::ModelRender_ov032_02122568(G3d_Model *pModel) :
    UnkStruct_ov000_020b3268(pModel),
    mUnk_6C(this->ModelRenderBase::func_ov000_02057f18(&data_ov032_02121ed4)) {}

// non-matching last instruction order
ActorKeese::ActorKeese() :
    mUnk_0B0(G3d_GetModelPtr(GET_PROFILE(ActorProfileKeese)->vfunc_04()->mUnk_50)),
    mUnk_120(&this->mUnk_0B0, GET_PROFILE(ActorProfileKeese)->vfunc_04()),
    mUnk_1CC(&this->mUnk_0B0, GET_PROFILE(ActorProfileKeese)->vfunc_04()),
    mUnk_228(0x0),
    mUnk_22A(0x0),
    mUnk_244(0x0),
    mUnk_246(0x0),
    mUnk_278(NULL),
    mUnk_27C(-0x1),
    mUnk_280(0x0),
    mUnk_29C(0x0),
    mUnk_2A0(0x0),
    mUnk_2A4(0x0),
    mUnk_2A8(0x0),
    mUnk_2AC(this),
    mUnk_2C4(0x0),
    mUnk_2C8(0x0),
    mUnk_2CC(0x0),
    mUnk_2D0(0x0),
    mUnk_2D4(0x0) {
    this->Actor::func_ov000_0209862c(0x4);

    SET_FLAGS(this->mFlags, ActorFlag_6, ActorFlag_9);
    *(s16 *) &this->mUnk_44 &= ~0x20;

    this->mUnk_A4 = &data_ov032_021224d8;
}

ActorKeese_2AC::ActorKeese_2AC(ActorKeese *param1) :
    mUnk_08(param1),
    mUnk_0C(FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f)) {}

ActorKeese_2AC::~ActorKeese_2AC() {
    this->mUnk_08 = NULL;
}

// non-matching (regalloc)
bool ActorKeese_2AC::vfunc_08(const UnkStruct_ov031_020f3310 *param1) {
    VecFx16_Copy2VecFx32(&param1->mUnk_08, &this->mUnk_0C);
    this->UnkStruct_ov031_Items_00::vfunc_08(param1);
}

bool ActorKeese_2AC::vfunc_0C(const UnkStruct_ov031_020e54d4 *param1, unk32 *param2, unk32 param3) {}

bool ActorKeese::vfunc_18(unk32 param1) {
    this->mUnk_0B0.func_ov000_02057c38(0x6, 0x2);
    this->mUnk_0B0.func_ov000_0209a7b8(this, &ActorKeese::func_ov032_0211faf0);

    this->func_ov032_0211e0c0();
    this->func_ov032_0211e380();

    this->mUnk_120.vfunc_1C(data_ov032_021224e4, 0x1000, 0x19A, 0x0);

    this->mUnk_2C = 0x0;
    SET_FLAG(this->mFlags, ActorFlag_13);

    return true;
}

void ActorKeese::func_ov032_0211e0c0() {
    this->func_ov032_0211e0d4(this->mUnk_5C.mParams[0], 0x0);
}

void ActorKeese::func_ov032_0211e0d4(s16 param1, unk32 param2) {
    if (this->mUnk_22A == param1) {
        return;
    }

    this->mUnk_22A = param1;

    switch (param1) {
        case 0x0:
            this->mUnk_1CC.func_ov000_02099ddc(data_ov032_021224fc, 0x1000, 0x1000);

            this->mUnk_278.func_ov000_020a0334();

            break;

        case 0x1:
            break;

        case 0x2:
            break;

        default:
            break;
    }
}

void ActorKeese::func_ov032_0211e308() {
    switch (this->mUnk_22A) {
        case 0x1:
            break;
        case 0x2:
            break;
        default:
            break;
    }
}

void ActorKeese::func_ov032_0211e380() {}

void ActorKeese::func_ov032_0211e40c() {
    this->mUnk_2C  = 0x0;
    this->mUnk_228 = 0x0;
}

void ActorKeese::SetState(ActorState state) {
    this->func_ov032_0211e40c();

    this->mState = state;

    CALL_PTMF(PTMF<ActorKeese>, data_ov032_0212258c[this->mState]);
}

void ActorKeese::func_ov032_0211e468() {}

void ActorKeese::vfunc_20() {
    if (this->mState != ActorKeeseState_9 && !this->Actor_Derived2::func_ov017_020bef4c(0x4000) && this->mUnk_48 != 0x0) {
        bool noReturn = true;
        if (this->mState != ActorKeeseState_7 && this->mState != ActorKeeseState_6) {
            noReturn = false;
        }
        if (!noReturn) {
            return;
        }
    }

    this->mUnk_3C = &this->mUnk_248;
    CALL_PTMF(PTMF<ActorKeese>, data_ov032_021225dc[this->mState]);

    if (this->mState == ActorKeeseState_9) {
        return;
    }

    this->Actor_Derived2::func_ov017_020bf894(&this->mUnk_268);

    if (this->mUnk_22A != 2) {
        this->func_ov000_02098b8c(0x1, &this->mUnk_2AC);
    } else {
        this->func_ov000_02098b8c(0x0, &this->mUnk_2AC);
    }

    this->func_ov032_0211e308();

    if (this->mUnk_46 & 1) {
        this->mVel.y = FLOAT_TO_FX32(0.0f);
    }

    if ((this->mUnk_120.vfunc_28()->func_02015080(0x1000) != 0 || this->mUnk_120.vfunc_28()->func_02015080(0x9000) != 0) &&
        GET_FLAG(this->mFlags, ActorFlag_14)) {
        switch (this->mUnk_22A) {
            case 0x0:
                data_027e09a8->func_ov000_02071b30(0x981F, &this->mPos, 0x0);
                break;

            case 0x1:
                data_027e09a8->func_ov000_02071b30(0x9821, &this->mPos, 0x0);
                break;

            case 0x2:
                data_027e09a8->func_ov000_02071b30(0x9820, &this->mPos, 0x0);
                break;

            default:
                data_027e09a8->func_ov000_02071b30(0x981F, &this->mPos, 0x0);
                break;
        }
    }

    this->func_ov032_0211e468();

    if (!GET_FLAG(this->mFlags, ActorFlag_14)) {
        return;
    }

    this->mUnk_120.vfunc_34();
}

void ActorKeese::vfunc_2C(unk32 param1) {}
void ActorKeese::func_ov032_0211e9ec() {}
void ActorKeese::func_ov032_0211eb60() {}
void ActorKeese::func_ov032_0211ece8() {}
void ActorKeese::func_ov032_0211ee5c() {}

void ActorKeese::func_ov032_0211f054() {
    this->mUnk_52 = gRandom.Next32(0x1F) + 0x1E;
    this->mUnk_50 = 0x0;
}

void ActorKeese::func_ov032_0211f0a8() {}
void ActorKeese::func_ov032_0211f1f0() {}
void ActorKeese::func_ov032_0211f1f4() {}

void ActorKeese::func_ov032_0211f300() {
    this->mUnk_248.func_ov000_02097bec();
}

void ActorKeese::func_ov032_0211f310() {}
void ActorKeese::func_ov032_0211f3ac() {}
void ActorKeese::func_ov032_0211f404() {}
void ActorKeese::func_ov032_0211f4a4() {}
void ActorKeese::func_ov032_0211f50c() {}

void ActorKeese::func_ov032_0211f560() {
    this->Actor_Derived2::func_ov000_02098f34(&this->mUnk_248.mUnk_10);

    this->vfunc_40();

    this->mUnk_248.func_ov000_02097bec();
}

void ActorKeese::func_ov032_0211f58c() {}

void ActorKeese::func_ov032_0211f604() {
    this->mUnk_2A4 = 0x19A;
}

void ActorKeese::func_ov032_0211f614() {}
void ActorKeese::func_ov032_0211f6bc() {}
void ActorKeese::func_ov032_0211f804() {}
void ActorKeese::func_ov032_0211f93c() {}
void ActorKeese::func_ov032_0211f9c4() {}
void ActorKeese::func_ov032_0211fa4c() {}
void ActorKeese::func_ov032_0211faf0(void *param1, unk32 param2) {}

UnkStruct_ov032_0212251c::UnkStruct_ov032_0212251c() :
    UnkStruct_ov000_020b34c4(MapObjectId_SKDI) {}

bool UnkStruct_ov032_0212251c::vfunc_00(MapObject *param1) {
    // MapObjectUnkSKDI guessed with ctor and MapObjectUnkSKDI::vfunc_40 exists and returns number
    return this->UnkStruct_ov000_020b34c4::vfunc_00(param1) && ((MapObjectUnkSKDI *) param1)->vfunc_40() == 0x1;
}

ActorKeese_284::ActorKeese_284() :
    UnkSystem7(NULL),
    mUnk_04(-0x1),
    mUnk_08(0x0) {}
