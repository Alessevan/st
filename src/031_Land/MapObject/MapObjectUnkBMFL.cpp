#include "MapObject/MapObjectUnkBMFL.hpp"

#include "Actor/ActorManager.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e0d38.hpp"

extern "C" fx32 func_01ffb464(fx32);
extern "C" void func_01ff9218(fx32 *, fx32, fx32);
extern "C" void func_ov031_020e0f30(ActorRef);

DECL_PROFILE(MapObjectProfileUnkBMFL);

MapObject *MapObjectProfileUnkBMFL::Create() {
    return new(HeapIndex_ITCM) MapObjectUnkBMFL();
}

MapObjectProfileUnkBMFL::MapObjectProfileUnkBMFL() :
    MapObjectProfile_Derived2(MapObjectId_BMFL, MapObjectId_BMFL) {
    this->mUnk_0E = 0x0;
    this->mUnk_06 = 0x0;
    this->mUnk_0C = 0x1333;
}

MapObjectUnkBMFL::MapObjectUnkBMFL() :
    mUnk_48(G3d_GetModelPtr(GET_PROFILE(MapObjectProfileUnkBMFL)->mUnk_20.mUnk_50), 0x0, 0x0),
    mUnk_B4(0x1000),
    mUnk_B8(0x0),
    mUnk_BA(0x0),
    mUnk_BC(true) {
    SET_FLAG(this->mFlags, MapObjFlag_8);

    if (this->mUnk_20.mParams[1] == 0x1) {
        this->mPos.x += FLOAT_TO_FX32(0.5f);
    }

    this->mUnk_40 = ActorId_Bomb;

    this->mUnk_C0.mUnk_08 = (unk32) 0x80007006;
    VecFx32_Init(FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), &this->mUnk_C0.mUnk_0C);
    this->mUnk_C0.mUnk_18 = FLOAT_TO_FX32(0.5f);
    this->mUnk_C0.mUnk_1C = FLOAT_TO_FX32(1.2f);
    this->mUnk_10         = &this->mUnk_C0;

    SET_FLAG(this->mFlags, MapObjFlag_6);
}

bool MapObjectUnkBMFL::vfunc_1C(ActorRef param1, unk32 param2, VecFx32 *param3) {
    this->mUnk_BC = false;
    switch (param2) {
        case 0xD:
            if (this->mState != MapObjUnkBMFLState_0) {
                break;
            }
            func_ov031_020e0f30(param1);
            this->SetState(MapObjUnkBMFLState_1, 0x0);
            break;
        case 0x0:
        case 0x3:
        case 0x7:
        case 0x8:
        case 0xA:
        case 0xC:
            if (this->mState != MapObjUnkBMFLState_0) {
                break;
            }
            if (param2 != 0) {
                this->SetState(MapObjUnkBMFLState_1, 0x0);
                break;
            }
            this->SetState(0x6, 0x0);
            break;
        case 0x4:
            if (this->mState != MapObjUnkBMFLState_0) {
                return false;
            }
            if (data_027e0d38->func_ov031_020d9c04(0x2, 0x0, 0x1)) {
                this->SetState(MapObjUnkBMFLState_3, 0x0);
            }
            return false;
        case 0x10:
            return true;
        default:
            break;
    }
    return false;
}

void MapObjectUnkBMFL::vfunc_48() {
    this->func_ov031_02102728(0x0);
}

void MapObjectUnkBMFL::vfunc_58() {
    this->func_ov031_02102728(0x1);
}

void MapObjectUnkBMFL::func_ov031_02102728(unk32 param1) {
    ActorParams params;
    params.mUnk_28 = 0;
    params.func_ov000_020975f8();

    params.mUnk_28 = this->mUnk_38;
    VecFx32_Copy(&this->mPos, &params.mInitialPos);

    params.mParams[0] = 0x0;
    if (param1 != 0x0) {
        params.mParams[0] = 0x1;
    }

    ActorRef ref;
    Actor::func_ov000_020973f4(&ref, &data_ov000_020b539c_eur, ActorId_Blast, &params, 0);
}

void MapObjectUnkBMFL::vfunc_08() {
    switch (this->mState) {
        case MapObjUnkBMFLState_4:
            if (!this->mUnk_BC) {
                break;
            }

            if (!this->IsInternalTimerOut()) {
                break;
            }

            this->SetState(MapObjUnkBMFLState_5, 0x0);
            break;
        case MapObjUnkBMFLState_5:
            if (this->IsInternalTimerOut()) {
                this->SetState(MapObjUnkBMFLState_0, 0x0);
                break;
            }

            fx32 delta = this->mUnk_BA - this->mUnk_B8;
            if (delta > 0x0) {
                func_01ff9218(&this->mUnk_B4, 0x1000, func_01ffb464((u32) delta << 0xC));
            }
            this->mUnk_B0 = this->mUnk_B4;
            break;
        default:
            break;
    }
    this->mUnk_BC = true;
}

bool MapObjectUnkBMFL::SetState(MapObjState state, unk32 param2) {
    if (param2 == 0x0 && this->mState == state) {
        return true;
    }
    this->mState = state;

    switch (this->mState) {
        case MapObjUnkBMFLState_1:
            this->vfunc_48();
            this->SetState(MapObjUnkBMFLState_4, 0x0);
            break;

        case MapObjUnkBMFLState_6:
            this->vfunc_58();
            this->SetState(MapObjUnkBMFLState_4, 0x0);
            break;

        case MapObjUnkBMFLState_2:
            this->SetState(MapObjUnkBMFLState_4, 0x0);
            break;

        case MapObjUnkBMFLState_4:
            this->mUnk_C0.mUnk_04 &= 0xFD;
            this->mUnk_C0.mUnk_08 |= 0xA800000;
            UNSET_FLAG(this->mFlags, MapObjFlag_9);
            this->mUnk_B4 = FLOAT_TO_FX32(0.0f);
            this->mUnk_BA = 0xB4;
            this->mUnk_B8 = 0x00;
            break;

        case MapObjUnkBMFLState_5:
            this->mUnk_BA = 0xA;
            this->mUnk_B8 = 0x0;
            data_027e09a8->func_ov000_02071b30(0x10C, &this->mPos, 0x0);
            break;

        case MapObjUnkBMFLState_0:
            this->MapObjectPot_Base::SetState(state, param2);
            this->mUnk_C0.mUnk_04 |= 0x2;
            this->mUnk_C0.mUnk_08 &= ~0xA800000;
            SET_FLAG(this->mFlags, MapObjFlag_9);
            this->mUnk_B4 = FLOAT_TO_FX32(1.0f);
            break;

        case MapObjUnkBMFLState_3:
            this->vfunc_38();
            this->SetState(MapObjUnkBMFLState_4, 0x0);
            break;

        default:
            this->MapObjectPot_Base::SetState(state, param2);
            break;
    }

    this->mUnk_B0 = this->mUnk_B4;
    return true;
}

void MapObjectUnkBMFL::vfunc_14() {
    this->mUnk_48.func_ov031_02102c00();

    this->MapObject::func_ov000_0209d518(&this->mPos, 0x5A7, 0x5A7, 0x1F);
    this->mUnk_48.vfunc_18(&this->mPos);
}

void MapObjectUnkBMFL::vfunc_38() {}

unk32 MapObjectUnkBMFL::vfunc_28() {
    if (this->mState == MapObjUnkBMFLState_4) {
        return 0x0;
    }
    return this->MapObjectPot_Base::vfunc_28();
}

void MapObjectUnkBMFL::vfunc_50() {
    ActorParams params;
    params.mUnk_28 = 0;

    params.func_ov000_020975f8();
}
