#include "Actor/ActorUnkBOMB.hpp"

#include "Actor/ActorBlast.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/Actor_Derived1.hpp"
#include "Map/MapObjectId.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "MapObject/MapObjectUnkBMFL.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_ov000_020b5d34.hpp"

extern "C" unk32 data_ov000_020aecf8;
extern "C" char data_ov031_02110a50;
extern "C" char data_ov031_02110a60;
extern "C" char data_ov031_02110a70;

extern "C" unk32 func_01ff9258(fx32, fx32);

static ActorUnkZLSL_AnimationTag data_ov031_02112be8                 = {.index = 0, .name = "bomb_clanim", .unknown = 0};
static PTMF<ActorUnkBOMB> data_ov031_02112c00[ActorUnkBOMBState_Max] = {
    ActorUnkBOMB::func_ov031_020e1da0, // ActorUnkBOMBState_0
    ActorUnkBOMB::func_ov031_020e1ed8, // ActorUnkBOMBState_1
    ActorUnkBOMB::func_ov031_020e1f88, // ActorUnkBOMBState_2
    ActorUnkBOMB::func_ov031_020e1fe4, // ActorUnkBOMBState_3
    ActorUnkBOMB::func_ov031_020e2064, // ActorUnkBOMBState_4
    ActorUnkBOMB::func_ov031_020e20fc, // ActorUnkBOMBState_5
    ActorUnkBOMB::func_ov031_020e2134, // ActorUnkBOMBState_6
};

static PTMF<ActorUnkBOMB> data_ov031_02112c38[ActorUnkBOMBState_Max] = {
    ActorUnkBOMB::func_ov031_020e1d48, // ActorUnkBOMBState_0
    ActorUnkBOMB::func_ov031_020e1ebc, // ActorUnkBOMBState_1
    ActorUnkBOMB::func_ov031_020e1f18, // ActorUnkBOMBState_2
    ActorUnkBOMB::func_ov031_020e1fe0, // ActorUnkBOMBState_3
    ActorUnkBOMB::func_ov031_020e2034, // ActorUnkBOMBState_4
    ActorUnkBOMB::func_ov031_020e20d8, // ActorUnkBOMBState_5
    ActorUnkBOMB::func_ov031_020e2100, // ActorUnkBOMBState_6
};

DECL_PROFILE(ActorProfileUnkBOMB);

Actor *ActorProfileUnkBOMB::Create() {
    return new(HeapIndex_2) ActorUnkBOMB();
}

ActorProfileUnkBOMB::ActorProfileUnkBOMB() :
    ActorProfile(ActorId_BOMB) {
    this->mUnk_04.Init(FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.2999f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.4f));
}

G3d_Model *ActorUnkBOMB::func_ov031_020e1540(u16 param1) {
    if (param1 == 0x0) {
        return data_027e0ce0->mUnk_1C->func_ov000_0208ed30(0x0, 0x1, &data_ov031_02110a60);
    }

    return G3d_GetModelPtr(
        ((MapObjectProfileUnkBMFL *) data_ov000_020b5d34.GetProfileFromId(MapObjectId_BMFL))->mUnk_20.mUnk_50);
}

unk32 ActorUnkBOMB::func_ov031_020e15d0(u16 param1) {
    if (param1 == 0x0) {
        return data_027e0ce0->mUnk_1C->func_ov000_0208ee94(0x0, 0x1, &data_ov031_02110a70, 0x1);
    }
    return ((MapObjectProfileUnkBMFL *) data_ov000_020b5d34.GetProfileFromId(MapObjectId_BMFL))
        ->mUnk_20.func_ov000_02058a84(0x1, &data_ov031_02110a50);
}
void ActorUnkBOMB::func_ov031_020e1634() {}

ActorUnkBOMB::ActorUnkBOMB() :
    mUnk_094(this->func_ov031_020e1540(this->mUnk_5C.mParams[0])),
    mUnk_0F4(&this->mUnk_114, this->func_ov031_020e1540(this->mUnk_5C.mParams[0])),
    mUnk_180(this),
    mUnk_19C(this),
    mUnk_1E4(0x0),
    mUnk_1E8(0x0),
    mUnk_1EA(0x0),
    mUnk_1EC(0x0),
    mUnk_1EE(0x0),
    mUnk_1F0(0x0) {}

void ActorUnkBOMB::func_ov031_020e17f4() {}
bool ActorUnkBOMB::vfunc_18(unk32 param1) {}

void ActorUnkBOMB::func_ov031_020e18a0() {
    this->func_ov000_0209862c(0x2);
    this->mUnk_2C = data_ov000_020aecf8;
}

void ActorUnkBOMB::func_ov031_020e18c4(ActorState state) {
    this->mState = state;
    this->func_ov031_020e18a0();

    CALL_PTMF(PTMF<ActorUnkBOMB>, data_ov031_02112c38[this->mState]);
}

void ActorUnkBOMB::func_ov031_020e1908() {
    this->mUnk_134.mUnk_04 |= 0x8000;
    this->mUnk_1F0 = 0x1;
}

void ActorUnkBOMB::func_ov031_020e1920(VecFx32 *param1) {
    fx32 y           = param1->y;
    fx32 z           = param1->z;
    fx32 x           = param1->x;
    this->mUnk_1CC.x = x;
    this->mUnk_1CC.y = y;
    this->mUnk_1CC.z = z;
}

void ActorUnkBOMB::func_ov031_020e193c() {}

void ActorUnkBOMB::vfunc_20() {
    this->mUnk_3C = &this->mUnk_134;

    CALL_PTMF(PTMF<ActorUnkBOMB>, data_ov031_02112c00[this->mState]);
    this->func_ov031_020e1b7c();

    if (!GET_FLAG(this->mFlags, ActorFlag_Alive)) {
        return;
    }
    this->func_ov031_020e193c();

    if (this->mState != ActorUnkBOMBState_2 && this->mState != ActorUnkBOMBState_4) {
        return;
    }

    if (func_01ff9258(this->mVel.x, this->mVel.z) <= 0x52) {
        return;
    }

    if (this->mUnk_1E4.type == 0x1) {
        if (!this->func_ov031_020e25bc()) {
            return;
        }

        ActorBlast::func_ov031_020e3b9c(this, 0x0, 0x0);
        this->func_ov000_020984d0();
        return;
    }

    this->func_ov031_020e262c();
}

void ActorUnkBOMB::vfunc_24() {
    if (this->mState != ActorUnkBOMBState_1) {
        return;
    }
    this->func_ov031_020e1ed8();
    this->func_ov031_020e193c();
}

// non-matching
void ActorUnkBOMB::func_ov031_020e1b1c() {
    unk32 param1 = this->func_ov031_020e15d0(this->mUnk_5C.mParams[0]);

    u32 param3;

    this->mUnk_0F4.func_ov000_020577a4(param1, 0x0, 0x1);

    this->mUnk_0F4.mUnk_08 = 0x1000;
    this->mUnk_0F4.mUnk_04 = data_ov031_02112be8.unknown;

    this->mUnk_094.func_ov000_02057cf4();

    this->mUnk_094.func_ov000_02057c98(&this->mUnk_0F4);
}

void ActorUnkBOMB::func_ov031_020e1b7c() {}
void ActorUnkBOMB::func_ov031_020e1d18() {}

void ActorUnkBOMB::func_ov031_020e1d48() {
    this->mUnk_1E4 = 0;
    this->mUnk_2C  = 0x0;
}

bool ActorUnkBOMB::func_ov031_020e1d58() {
    return this->mUnk_158 >= 0x4CC;
}

bool ActorUnkBOMB::func_ov031_020e1d74() {}
void ActorUnkBOMB::func_ov031_020e1da0() {}
void ActorUnkBOMB::func_ov031_020e1ebc() {}
void ActorUnkBOMB::func_ov031_020e1ed8() {}
void ActorUnkBOMB::func_ov031_020e1f18() {}
void ActorUnkBOMB::func_ov031_020e1f88() {}
void ActorUnkBOMB::func_ov031_020e1fe0() {}
void ActorUnkBOMB::func_ov031_020e1fe4() {}
void ActorUnkBOMB::func_ov031_020e2034() {}
void ActorUnkBOMB::func_ov031_020e2064() {}
void ActorUnkBOMB::func_ov031_020e20d8() {}
void ActorUnkBOMB::func_ov031_020e20fc() {}
void ActorUnkBOMB::func_ov031_020e2100() {}
void ActorUnkBOMB::func_ov031_020e2134() {}
void ActorUnkBOMB::vfunc_2C(unk32 param1) {}
void ActorUnkBOMB::func_ov031_020e238c() {}
bool ActorUnkBOMB::Grab(ActorGrabParams grabParams) {}
bool ActorUnkBOMB::Drop(ActorGrabParams grabParams, const VecFx32 *pVel) {}
bool ActorUnkBOMB::func_ov031_020e25bc() {}
void ActorUnkBOMB::func_ov031_020e262c() {}
void ActorUnkBOMB::func_ov031_020e2680() {}
void ActorUnkBOMB::func_ov031_020e2780() {}
void ActorUnkBOMB::func_ov031_020e2820() {}
void ActorUnkBOMB::func_ov031_020e295c() {}
void ActorUnkBOMB::func_ov031_020e2a9c() {}
void ActorUnkBOMB::func_ov031_020e2b40() {}

void ActorUnkBOMB::func_ov031_020e2c2c() {
    if (this->func_ov031_020e1d74() || (this->mUnk_180.mUnk_04 & 0x1) == 0x0) {
    }
}

ActorUnkBomb_180::ActorUnkBomb_180(Actor *param1) :
    mUnk_08(param1),
    mUnk_0C(0x0),
    mUnk_10(0x0),
    mUnk_14(0x0),
    mUnk_18(0x0) {}

ActorUnkBomb_180::~ActorUnkBomb_180() {
    this->mUnk_08 = NULL;
}

bool ActorUnkBomb_180::vfunc_08(const UnkStruct_ov031_020f3310 *param1) {}

bool ActorUnkBomb_180::vfunc_0C(const UnkStruct_ov031_020e54d4 *param1, unk32 *param2, unk32 param3) {}

bool ActorUnkBomb_180::vfunc_10(ActorRef param1, unk32 param2) {
    if (param1.type == 0x1) {
        Actor *actor = gpActorManager->func_01fff3b4(param1);
        if (actor != NULL && actor->GetActorId() == ActorId_BOMB) {
            ActorBlast::func_ov031_020e3b9c(this->mUnk_08, 0x0, 0x0);
            this->mUnk_08->func_ov000_020984d0();
            ((ActorUnkBOMB *) actor)->func_ov031_020e18c4(ActorUnkBOMBState_5);
        }
    }
    return true;
}

// non-matching (unreachable code ?)
bool ActorUnkBOMB_ov031_020e2134::vfunc_08(const UnkStruct_ov031_020f3310 *param1) {
    if ((((u32) param1->mUnk_04->mUnk_24[param1->mUnk_00->mUnk_06] >> 0x9) & 0x7) == 0xA) {
        return false;
    }
    return this->UnkStruct_ov031_Items_00::vfunc_08(param1);
}

ActorUnkBomb_19C::ActorUnkBomb_19C(Actor *param1) :
    mUnk_2C(param1) {}

void ActorUnkBomb_19C::vfunc_10(Actor *actor) {
    Actor *bomb = this->mUnk_2C;
    if (!GET_FLAG(bomb->mFlags, ActorFlag_Alive)) {
        return;
    }
    ActorBlast::func_ov031_020e3b9c(bomb, 0x0, 0x0);
    this->mUnk_2C->func_ov000_020984d0();
}

ActorUnkBOMB_unk::ActorUnkBOMB_unk() {}
