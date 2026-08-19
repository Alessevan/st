#include "MapObject/MapObjectPot_Base.hpp"

MapObjectPot_Base::MapObjectPot_Base() {
    this->mUnk_40 = 0;
    this->mUnk_44 = 0;

    this->func_ov000_0209da78(0x0, 0x1);
    this->func_ov000_0209da78(0x1, 0x0);
}

MapObjectPot_Base::~MapObjectPot_Base() {}

bool MapObjectPot_Base::vfunc_00() {
    this->SetState(MapObjPotBase_State_0, 0x1);
    return true;
}

bool MapObjectPot_Base::SetState(MapObjState state, unk32 param2) {}
void MapObjectPot_Base::vfunc_24(MapObject *param1, VecFx32 param2) {}
void MapObjectPot_Base::vfunc_38() {}
unk32 MapObjectPot_Base::vfunc_28() {}
void MapObjectPot_Base::vfunc_48() {}
unk32 MapObjectPot_Base::vfunc_54() {}
bool MapObjectPot_Base::vfunc_4C() {
    return true;
}
void MapObjectPot_Base::func_ov000_0209da78(unk32 param1, unk32 param2) {}
void MapObjectPot_Base::vfunc_50(ActorRef *param1) {}
