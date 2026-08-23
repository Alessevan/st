#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkSWSW_40 : public ModelRender {
public:
    /* 00 (base) */
    /* 60 */

    MapObjectUnkSWSW_40(G3d_Model *pModel);

    // data_ov032_021227ac
    /* 1C */ virtual void vfunc_1C(UnkSystem4_vfunc_1C *param1) override;
};

class MapObjectUnkSWSW : public MapObject {
public:
    /* 00 (base) */
    /* 40 */ MapObjectUnkSWSW_40 mUnk_40;
    /* A0 */

    MapObjectUnkSWSW();

    /* 38 */ virtual void vfunc_38();
    /* 3C */ virtual void vfunc_3C();

    void func_ov032_021210a0();
    void func_ov032_021211dc();
    void func_ov032_0212141c();
    void func_ov032_021218d0();
    void func_ov032_02121b48();
    void func_ov032_02121b90();
    void func_ov032_02121c18();
    void func_ov032_02121d70();
    void func_ov032_02121dc8();
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
