#include "Actor/ActorUnkBOMB.hpp"

#include "Actor/ActorBlast.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/Actor_Derived1.hpp"
#include "Map/MapObjectId.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "MapObject/MapObjectUnkBMFL.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"
#include "Unknown/UnkStruct_ov000_020b5d34.hpp"

extern "C" VecFx32 data_027e07d4;
extern "C" unk32 data_ov000_020aecf8;
extern "C" unk32 data_ov031_02110a10;
extern "C" unk32 data_ov031_02110a28;
extern "C" char data_ov031_02110a50;
extern "C" char data_ov031_02110a60;
extern "C" char data_ov031_02110a70;

extern "C" unk32 func_01ff9258(fx32, fx32);
extern "C" void func_0200b578(G3d_RenderObject *, void (*)(), unk32, unk32, unk32);

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
    mUnk_17C(NULL),
    mUnk_180(this),
    mUnk_19C(this),
    mUnk_1CC(data_027e07d4),
    mUnk_1D8(0x1000),
    mUnk_1DC(0x0),
    mUnk_1E0(0x0),
    mUnk_1E4(0x0),
    mUnk_1E8(0x0),
    mUnk_1EA(0x0),
    mUnk_1EC(0x0),
    mUnk_1EE(0x0),
    mUnk_1F0(0x0) {
    if (this->mUnk_5C.mParams[0] != 0x1) {
        this->mUnk_1EF = false;
        this->mUnk_17C = &data_ov031_02110a28;
    } else {
        func_0200b578(&this->mUnk_094.mRenderObj, this->func_ov031_020e1634, 0x0, 0x2, 0x2);
        this->mUnk_17C = &data_ov031_02110a10;
        this->mUnk_1EF = true;
    }
    this->mUnk_164[0].mUnk_04 = 0x810;
    this->mUnk_164[0].mUnk_08 = 0x2;
    this->mUnk_164[1].mUnk_04 = 0x811;
    this->mUnk_164[1].mUnk_08 = 0x2;
    SET_FLAG(this->mFlags, ActorFlag_11);
}

void ActorUnkBOMB::func_ov031_020e17f4() {}

bool ActorUnkBOMB::vfunc_18(unk32 param1) {
    Cylinder *profileCylinder = &this->mpProfile->mUnk_04;

    this->mUnk_154.pos  = profileCylinder->pos;
    this->mUnk_154.size = profileCylinder->size;
    this->mUnk_30       = &this->mUnk_154;

    this->func_ov031_020e18c4(ActorUnkBOMBState_0);

    this->mUnk_19C.mUnk_04 = this->mRef;
    VecFx32_Copy(&this->mPos, &this->mUnk_19C.mUnk_0C.pos);
    this->mUnk_19C.mUnk_0C.size = 0x666;

    this->mUnk_1EC = 0x78;
    this->mUnk_1EA = 0x0;
    this->Actor::func_ov000_0209862c(0x2);
    return true;
}

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
    this->mUnk_1F0 = true;
}

void ActorUnkBOMB::func_ov031_020e1920(VecFx32 *param1) {
    fx32 y           = param1->y;
    fx32 z           = param1->z;
    fx32 x           = param1->x;
    this->mUnk_1CC.x = x;
    this->mUnk_1CC.y = y;
    this->mUnk_1CC.z = z;
}

extern "C" void func_01ffb974(unk32, unk32 *, VecFx32 *, VecFx32 *);

void ActorUnkBOMB::func_ov031_020e193c() {
    if (this->mUnk_1EF && GET_FLAG(this->mFlags, ActorFlag_Visible)) {
        VecFx32 sp0C;
        func_01ffb974(this->mUnk_1D8, this->mUnk_17C, &this->mPos, &sp0C);
        VecFx32 sp00;
        func_01ffb974(this->mUnk_1D8, this->mUnk_17C + 3, &this->mPos, &sp00);

        data_027e0cec->func_ov000_020a0140(&this->mUnk_164[0], &sp0C);
        data_027e0cec->func_ov000_020a0140(&this->mUnk_164[1], &sp00);

        for (ActorUnkBOMB_unk *ptr = this->mUnk_164; ptr != this->mUnk_164 + ARRAY_LEN(this->mUnk_164); ptr++) {
            if (ptr->mUnk_00 != NULL) {
                ptr->mUnk_00->mUnk_24 &= ~0x8;
            }
        }

        return;
    }
    for (ActorUnkBOMB_unk *ptr = this->mUnk_164; ptr != this->mUnk_164 + ARRAY_LEN(this->mUnk_164); ptr++) {
        ptr->func_ov000_020a0334();
    }
}

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

void ActorUnkBOMB::func_ov031_020e1d18() {
    this->func_ov000_02098838();
    VecFx32_Add(&this->mPos, &this->mUnk_1CC, &this->mPos);
    VecFx32_Init(FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), &this->mUnk_1CC);
}

void ActorUnkBOMB::func_ov031_020e1d48() {
    this->mUnk_1E4 = 0;
    this->mUnk_2C  = 0x0;
}

bool ActorUnkBOMB::func_ov031_020e1d58() {
    return this->mUnk_154.pos.y >= FLOAT_TO_FX32(0.2999f);
}

bool ActorUnkBOMB::func_ov031_020e1d74() {
    if (this->func_ov031_020e1d58()) {
        if (this->mUnk_46 & 0x1) {
            return true;
        }
    }
    return false;
}

extern "C" void func_01ff9218(fx32 *, fx32, fx32);

void ActorUnkBOMB::func_ov031_020e1da0() {
    this->func_ov031_020e1d18();

    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);

    this->func_ov031_020e2a9c();

    if (this->func_ov031_020e1d74() || this->mUnk_180.mUnk_04 & 0x1) {
        if (this->mUnk_180.mUnk_04 & 0x8) {
            if (this->func_ov031_020e1d58()) {
                this->func_ov031_020e18c4(ActorUnkBOMBState_6);
            }
        } else {
            if (this->func_ov031_020e2b40()) {
                this->func_ov000_020984d0();
                return;
            }
            if (this->mUnk_180.mUnk_14 >= -0x19A) {
                this->mUnk_2C = 0x0;
                VecFx32_Init(FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), &this->mVel);
                func_01ffb974(-0x29, &this->mUnk_180.mUnk_0C, &this->mVel, &this->mVel);
            } else {
                func_01ff9218(&this->mUnk_2C, data_ov000_020aecf8, 0x800);
            }
        }
    } else {
        func_01ff9218(&this->mUnk_2C, data_ov000_020aecf8, 0x200);
    }

    this->func_ov031_020e238c();
}

void ActorUnkBOMB::func_ov031_020e1ebc() {
    this->func_ov000_0209862c(0x0);
    this->mUnk_2C = 0x0;
}

void ActorUnkBOMB::func_ov031_020e1ed8() {
    if (this->mUnk_1E0s != 0x100) {
        return;
    }
    unk32 param1 = 0x101;
    if (this->mUnk_1E0s == param1) {
        param1 = 0x0;
    } else {
        param1 = this->mUnk_1E2;
    }
    data_027e0ce0->func_ov000_0208bacc(param1, &this->mPos);
}

void ActorUnkBOMB::func_ov031_020e1f18() {
    if (!this->mUnk_1EF) {
        bool var = true;
        if (this->mUnk_1E0s != 0x100 && this->mUnk_1E0s != 0x101) {
            var = false;
        }
        if (var) {
            ItemManager *itemManager = data_027e0ce0->mUnk_2C;
            if (itemManager != NULL && itemManager->GetInventory()->GetBombAmount() > 0) {
                itemManager->GetInventory()->GiveBombs(-1);
            }
        }
    }
    if (!this->mUnk_1F0) {
        this->mUnk_1EF = true;
    }
}

void ActorUnkBOMB::func_ov031_020e1f88() {
    this->mUnk_3C = &this->mUnk_134;

    this->func_ov031_020e1d18();

    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);

    this->func_ov031_020e2a9c();
    this->func_ov031_020e2c2c();
    this->func_ov031_020e238c();
}

void ActorUnkBOMB::func_ov031_020e1fe0() {}

void ActorUnkBOMB::func_ov031_020e1fe4() {
    this->func_ov031_020e1d18();

    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);

    this->func_ov031_020e2a9c();
    this->func_ov031_020e2c2c();
    this->func_ov031_020e238c();
}

void ActorUnkBOMB::func_ov031_020e2034() {
    this->mUnk_1E4 = 0;
    this->mUnk_2C  = 0x0;

    this->Actor::vfunc_40();

    this->mUnk_44 = (s16) this->mUnk_44 & ~0x20;
    this->mUnk_134.func_ov000_02097bec();
}

void ActorUnkBOMB::func_ov031_020e2064() {
    this->Actor::vfunc_44();

    if (GET_FLAG(this->mFlags, ActorFlag_5)) {
        this->func_ov031_020e18c4(ActorUnkBOMBState_3);
        this->mUnk_44 = (s16) this->mUnk_44 | 0x20;
    }
    this->func_ov031_020e238c();
    this->func_ov031_020e1d18();

    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);

    this->func_ov031_020e2a9c();
}

void ActorUnkBOMB::func_ov031_020e20d8() {
    this->mUnk_1E4 = 0x0;
    ActorBlast::func_ov031_020e3b9c(this, 0x1, 0x0);
    this->Actor::func_ov000_020984d0();
}

void ActorUnkBOMB::func_ov031_020e20fc() {}

void ActorUnkBOMB::func_ov031_020e2100() {
    fx32 newY = this->mPos.y - FLOAT_TO_FX32(0.0125f);
    newY -= FLOAT_TO_FX32(0.1875f);

    this->mUnk_1E9 = 0x50;
    this->mUnk_2C  = 0x0;
    this->mPos.y   = newY;
    this->mUnk_1DC = newY;
    this->mUnk_44  = (s16) this->mUnk_44 & ~0x3;
}

void ActorUnkBOMB::func_ov031_020e2134() {
    fx32 newZ = MUL_FX32(this->mVel.z, 0x4CD);
    fx32 newX = MUL_FX32(this->mVel.x, 0x4CD);

    this->mVel.x = newX;
    this->mVel.y = -0x29;
    this->mVel.z = newZ;

    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);

    ActorUnkBOMB_ov031_020e2134 sp00 = ActorUnkBOMB_ov031_020e2134();
    this->func_ov031_020e295c(&sp00);
    this->func_ov031_020e2820(&sp00);

    if (!(--this->mUnk_1E9 & 0xFF)) {
        this->func_ov000_020984d0();
    }
}

void ActorUnkBOMB::vfunc_2C(unk32 param1) {}
void ActorUnkBOMB::func_ov031_020e238c() {}

bool ActorUnkBOMB::Grab(ActorGrabParams grabParams) {
    this->func_ov031_020e18c4(ActorUnkBOMBState_1);
    this->mUnk_1E0         = grabParams.mUnk_00;
    this->mUnk_1E4         = 0;
    this->mUnk_180.mUnk_18 = 0x0;

    this->Actor::Grab(grabParams);
}

bool ActorUnkBOMB::Drop(ActorGrabParams grabParams, const VecFx32 *pVel) {}
bool ActorUnkBOMB::func_ov031_020e25bc() {}
void ActorUnkBOMB::func_ov031_020e262c() {}
void ActorUnkBOMB::func_ov031_020e2680() {}
void ActorUnkBOMB::func_ov031_020e2780() {}
void ActorUnkBOMB::func_ov031_020e2820(ActorUnkBOMB_ov031_020e2134 *param1) {}
void ActorUnkBOMB::func_ov031_020e295c(ActorUnkBOMB_ov031_020e2134 *param1) {}
void ActorUnkBOMB::func_ov031_020e2a9c() {}
bool ActorUnkBOMB::func_ov031_020e2b40() {}

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

ActorUnkBOMB_unk::ActorUnkBOMB_unk() :
    UnkSystem7(NULL),
    mUnk_04(-0x1),
    mUnk_08(0x0) {}
