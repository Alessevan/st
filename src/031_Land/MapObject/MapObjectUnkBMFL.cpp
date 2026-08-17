//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkBMFL.hpp"
#include "System/SysNew.hpp"

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

MapObjectUnkBMFL::MapObjectUnkBMFL() {}

void MapObjectUnkBMFL::func_ov031_021025c4(void) {}
void MapObjectUnkBMFL::func_ov031_02102708(void) {}
void MapObjectUnkBMFL::func_ov031_02102718(void) {}
void MapObjectUnkBMFL::func_ov031_02102728(void) {}
void MapObjectUnkBMFL::func_ov031_021027a4(void) {}
void MapObjectUnkBMFL::func_ov031_02102894(void) {}
void MapObjectUnkBMFL::func_ov031_021029f0(void) {}
void MapObjectUnkBMFL::func_ov031_02102a40(void) {}
void MapObjectUnkBMFL::func_ov031_02102ad8(void) {}
void MapObjectUnkBMFL::func_ov031_02102af4(void) {}

MapObjectUnkBMFL::~MapObjectUnkBMFL() {}
MapObjectProfileUnkBMFL::~MapObjectProfileUnkBMFL() {}
