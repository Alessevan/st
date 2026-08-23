#include "MapObject/MapObjectUnkSWSW.hpp"
#include "System/SysNew.hpp"

extern "C" char data_ov032_02121ef4;

DECL_PROFILE(MapObjectProfileUnkSWSW);

MapObject *MapObjectProfileUnkSWSW::Create() {
    return new(HeapIndex_ITCM) MapObjectUnkSWSW();
}

MapObjectProfileUnkSWSW::MapObjectProfileUnkSWSW() :
    MapObjectProfileUnkSWSW_Base(MapObjectId_SWSW) {}

MapObjectUnkSWSW_40::MapObjectUnkSWSW_40(G3d_Model *pModel) :
    ModelRender(pModel) {}

void MapObjectUnkSWSW_40::vfunc_1C(UnkSystem4_vfunc_1C *param1) {}

void MapObjectUnkSWSW::func_ov032_021210a0() {}

MapObjectUnkSWSW::MapObjectUnkSWSW() :
    mUnk_40(G3d_GetUnkPtr(GET_PROFILE(MapObjectProfileUnkSWSW)->mUnk_20.mUnk_50, &data_ov032_02121ef4)) {}

void MapObjectUnkSWSW::func_ov032_021211dc() {}
void MapObjectUnkSWSW::func_ov032_0212141c() {}
void MapObjectUnkSWSW::func_ov032_021218d0() {}
void MapObjectUnkSWSW::func_ov032_02121b48() {}
void MapObjectUnkSWSW::func_ov032_02121b90() {}
void MapObjectUnkSWSW::func_ov032_02121c18() {}
void MapObjectUnkSWSW::func_ov032_02121d70() {}
void MapObjectUnkSWSW::func_ov032_02121dc8() {}
