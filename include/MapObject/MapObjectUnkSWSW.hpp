#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkSWSW_40 : public ModelRender {
public:
    /* 00 (base) */
    /* 60 */ unk32 mUnk_60;
    /* 64 */ unk32 mUnk_64;
    /* 68 */ unk16 mUnk_68;
    /* 6A */ unk16 mUnk_6A;
    /* 6C */

    MapObjectUnkSWSW_40(G3d_Model *pModel);

    // data_ov032_021227ac
    /* 1C */ virtual void vfunc_1C(UnkSystem4_vfunc_1C *param1) override;
};

class MapObjectUnkSWSW : public MapObject {
public:
    /* 000 (base) */
    /* 040 */ MapObjectUnkSWSW_40 mUnk_040;
    /* 0AC */ UnkSystem5 mUnk_0AC;
    /* 0CC */ unk32 mUnk_0CC;
    /* 0E0 */ STRUCT_PAD(0xD0, 0xEC);
    /* 0EC */ unk32 mUnk_0EC;
    /* 0F0 */ unk32 mUnk_0F0;
    /* 0F4 */ unk32 mUnk_0F4;
    /* 0F8 */ unk32 mUnk_0F8;
    /* 0FC */ unk32 mUnk_0FC;
    /* 100 */ unk16 mUnk_100;
    /* 102 */ unk16 mUnk_102;
    /* 104 */ unk8 mUnk_104;
    /* 105 */ unk8 mUnk_105;
    /* 106 */ STRUCT_PAD(0x106, 0x10C);
    /* 10C */ unk16 mUnk_10C;
    /* 10E */ unk16 mUnk_10E;
    /* 110 */ unk16 mUnk_110;
    /* 114 */ unk32 mUnk_114;
    /* 118 */

    MapObjectUnkSWSW();

    /* 00 */ virtual bool vfunc_00() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 14 */ virtual void vfunc_14() override;
    /* 1C */ virtual bool vfunc_1C(ActorRef param1, unk32 param2, VecFx32 *param3) override;
    /* 38 */ virtual void vfunc_38();
    /* 3C */ virtual void vfunc_3C();

    void func_ov032_021210a0();
    void func_ov032_02121b90();
    void func_ov032_02121dc8(VecFx32 *param1);
};

class MapObject_10_SWSW : public MapObject_10 {
public:
    // data_ov032_02122784
};

class MapObjectProfileUnkSWSW_Base : public MapObjectProfile_Derived2 {
public:
    /* 00 (base) */
    /* D4 */ MapObject_10_SWSW mUnk_D4;
    /* F8 */

    MapObjectProfileUnkSWSW_Base(MapObjectId id) :
        MapObjectProfile_Derived2(id, id) {}
};

class MapObjectProfileUnkSWSW : public MapObjectProfileUnkSWSW_Base {
public:
    /* 00 (base) */
    /* F8 */

    MapObjectProfileUnkSWSW();

    /* 00 */ virtual MapObject *Create();

    static MapObjectProfileUnkSWSW *GetProfile();
};
