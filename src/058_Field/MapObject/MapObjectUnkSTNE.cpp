#include "MapObject/MapObjectUnkSTNE.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(MapObjectProfileUnkSTNE);

MapObject *MapObjectProfileUnkSTNE::Create() {
    return new(HeapIndex_2) MapObjectUnkSTNE();
}

MapObjectProfileUnkSTNE::MapObjectProfileUnkSTNE() :
    MapObjectProfile_Derived2(MapObjectId_STNE, MapObjectId_STNE) {}

MapObjectUnkSTNE::MapObjectUnkSTNE() {}

void MapObjectUnkSTNE::func_ov058_0214ebe0() {}
void MapObjectUnkSTNE::func_ov058_0214ec90() {}
void MapObjectUnkSTNE::func_ov058_0214ed54() {}
void MapObjectUnkSTNE::func_ov058_0214eda4() {}
void MapObjectUnkSTNE::func_ov058_0214ef64() {}
void MapObjectUnkSTNE::func_ov058_0214efb8() {}
void MapObjectUnkSTNE::func_ov058_0214efcc() {}
void MapObjectUnkSTNE::func_ov058_0214f000() {}

MapObjectUnkSTNE::~MapObjectUnkSTNE() {}
MapObjectProfileUnkSTNE::~MapObjectProfileUnkSTNE() {}
