#include "MapObject/MapObjectUnkSTNE.hpp"
#include "System/SysNew.hpp"

static MapObject_10_Pot data_ov058_0215775c = MapObject_10_Pot();

DECL_PROFILE(MapObjectProfileUnkSTNE);

MapObject *MapObjectProfileUnkSTNE::Create() {
    return new(HeapIndex_ITCM) MapObjectUnkSTNE();
}

MapObjectProfileUnkSTNE::MapObjectProfileUnkSTNE() :
    MapObjectProfileUnkSTNE_Base(MapObjectId_STNE, MapObjectId_STNE) {
    this->mUnk_0E         = 0x0;
    this->mUnk_D4.mUnk_08 = 0x7007;
    VecFx32_Init(0, 0, 0, &this->mUnk_D4.mUnk_0C);
    this->mUnk_D4.mUnk_18.x = 0x800;
    this->mUnk_D4.mUnk_18.y = 0x1333;

    this->mUnk_06 = 0x1;
    this->mUnk_0C = 0x1333;
}

MapObjectUnkSTNE::MapObjectUnkSTNE() :
    mUnk_48(G3d_GetModelPtr(GET_PROFILE(MapObjectProfileUnkSTNE)->mUnk_20.mUnk_50), 0x1),
    mUnk_58(0x0),
    mUnk_5C(0x0),
    mUnk_60(true),
    mUnk_61(0x0) {
    this->mUnk_40 = ActorId_NSTN;
    this->mUnk_10 = &data_ov058_0215775c;

    SET_FLAG(this->mFlags, MapObjFlag_8);
}

bool MapObjectUnkSTNE::vfunc_1C(RefStruct param1, unk32 param2, VecFx32 *param3) {}
void MapObjectUnkSTNE::vfunc_48() {}

bool MapObjectUnkSTNE::SetState(MapObjState state, unk32 param2) {
    bool stateResult = this->MapObjectPot_Base::SetState(state, param2);

    if (this->func_ov058_0214efb8() && !GET_FLAG(this->mFlags, MapObjFlag_Alive)) {
        SET_FLAG(this->mFlags, MapObjFlag_Alive);
        this->mUnk_10 = NULL;
        this->mUnk_58 = 0x1;
    }

    return stateResult;
}

void MapObjectUnkSTNE::vfunc_08() {}
void MapObjectUnkSTNE::vfunc_14(unk32 param1) {}

bool MapObjectUnkSTNE::func_ov058_0214efb8() {
    return this->mUnk_20.mParams[1] != 0x0;
}

void MapObjectUnkSTNE::vfunc_24(MapObject *param1, VecFx32 param2) {
    this->MapObjectPot_Base::vfunc_24(param1, param2);
}

bool MapObjectUnkSTNE::vfunc_4C() {
    return this->mUnk_60;
}

MapObjectUnkSTNE::~MapObjectUnkSTNE() {}
MapObjectProfileUnkSTNE::~MapObjectProfileUnkSTNE() {}
