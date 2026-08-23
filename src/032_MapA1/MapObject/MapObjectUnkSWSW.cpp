#include "MapObject/MapObjectUnkSWSW.hpp"

#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorUnkNSSW.hpp"
#include "System/SysNew.hpp"

extern "C" char data_ov032_02121ef4;
extern "C" unk32 data_ov032_02121f14; //* ig these variables should be 0x10-byte long
extern "C" unk32 data_ov032_02121f24; //|

DECL_PROFILE(MapObjectProfileUnkSWSW);

MapObject *MapObjectProfileUnkSWSW::Create() {
    return new(HeapIndex_ITCM) MapObjectUnkSWSW();
}

MapObjectProfileUnkSWSW::MapObjectProfileUnkSWSW() :
    MapObjectProfileUnkSWSW_Base(MapObjectId_SWSW) {
    this->mUnk_D4.mUnk_08 = 0x7007;

    VecFx32_Init(FLOAT_TO_FX32(-0.5002f), FLOAT_TO_FX32(-1.0002), FLOAT_TO_FX32(-1.0002), &this->mUnk_D4.mUnk_0C);
    VecFx32_Init(FLOAT_TO_FX32(0.5f), FLOAT_TO_FX32(1.0f), FLOAT_TO_FX32(0.0f), &this->mUnk_D4.mUnk_18);

    this->mUnk_D4.mUnk_04 |= 0x2;
    this->mUnk_06 = -0x1;
    this->mUnk_1E &= 0xFFFE;
    this->mUnk_20.mUnk_15 = 0x1;
}

MapObjectUnkSWSW_40::MapObjectUnkSWSW_40(G3d_Model *pModel) :
    ModelRender(pModel),
    mUnk_60(0x0),
    mUnk_64(0x0),
    mUnk_68(0x0),
    mUnk_6A(0x0) {

    this->mUnk_60 = this->ModelRenderBase::func_ov000_02057f18(&data_ov032_02121f14);
    this->mUnk_64 = this->ModelRenderBase::func_ov000_02057f18(&data_ov032_02121f24);

    this->ModelRender::func_ov000_02057c38(0x6, 0x2);
}

void MapObjectUnkSWSW_40::vfunc_1C(UnkSystem4_vfunc_1C *param1) {
    if (param1->mUnk_00[0x1] == this->mUnk_60) {
        param1->mUnk_B4->mUnk_00 &= ~0x2;
        Mat3p_InitXRotation(&param1->mUnk_B4->mUnk_28, SIN((u16) this->mUnk_68), COS((u16) this->mUnk_68));
    }

    if (param1->mUnk_00[0x1] != this->mUnk_64) {
        return;
    }
    param1->mUnk_B4->mUnk_00 &= ~0x2;
    Mat3p_InitXRotation(&param1->mUnk_B4->mUnk_28, SIN((u16) this->mUnk_6A), COS((u16) this->mUnk_6A));
}

void MapObjectUnkSWSW::func_ov032_021210a0() {}

extern "C" MapObject_10 data_ov032_02122b8c;

MapObjectUnkSWSW::MapObjectUnkSWSW() :
    mUnk_040(G3d_GetUnkPtr(GET_PROFILE(MapObjectProfileUnkSWSW)->mUnk_20.mUnk_50, &data_ov032_02121ef4)),
    mUnk_0AC(&this->mUnk_0CC, NULL),
    mUnk_0EC(0x0),
    mUnk_0F0(0x800),
    mUnk_0F4(0x148 - 0x800),
    mUnk_0F8(0x0),
    mUnk_0FC(0x4),
    mUnk_100(0x0),
    mUnk_102(0x0),
    mUnk_104(0x0),
    mUnk_105(0x0),
    mUnk_10C(0x0),
    mUnk_10E(0x0),
    mUnk_110(0x0),
    mUnk_114(0x0) {
    this->mUnk_10 = &data_ov032_02122b8c;
}

bool MapObjectUnkSWSW::vfunc_00() {}
void MapObjectUnkSWSW::vfunc_08() {}
bool MapObjectUnkSWSW::vfunc_1C(ActorRef param1, unk32 param2, VecFx32 *param3) {}
void MapObjectUnkSWSW::vfunc_38() {}
void MapObjectUnkSWSW::func_ov032_02121b90() {}
void MapObjectUnkSWSW::vfunc_3C() {}
void MapObjectUnkSWSW::vfunc_14() {}

struct UnkStack_ov032_02121dc8 {
    /* 00 */ ActorRef ref;
    /* 04 */ STRUCT_PAD(0x04, 0x08);
    /* 08 */
};

// non-matching (argument ig)
void MapObjectUnkSWSW::func_ov032_02121dc8(VecFx32 *param1) {
    ActorParams params;
    UnkStack_ov032_02121dc8 unk;

    params.mUnk_28 = 0;
    params.func_ov000_020975f8();

    params.mInitialAngle = this->mAngle;
    params.mUnk_28       = *(unk32 *) &this->mUnk_38;

    VecFx32_Init(param1->x, param1->y, param1->z, &params.mInitialPos);

    Actor::func_ov000_020973f4(&unk.ref, &data_ov000_020b539c_eur, ActorId_NSSW, &params, 0x0);

    ActorUnkNSSW *actor = (ActorUnkNSSW *) gpActorManager->func_01fff3b4(unk.ref);

    actor->mUnk_184 = this;
    actor->mUnk_188 = this;
}
