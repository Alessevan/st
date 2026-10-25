#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "MapObjectGrass.hpp"
#include "MapObjectPot_Base.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkSTNE : public MapObjectPot_Base {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkSTNE();

    /* 30 */ virtual ~MapObjectUnkSTNE() override;

    void func_ov058_0214ebe0();
    void func_ov058_0214ec90();
    void func_ov058_0214ed54();
    void func_ov058_0214eda4();
    void func_ov058_0214ef64();
    void func_ov058_0214efb8();
    void func_ov058_0214efcc();
    void func_ov058_0214f000();
};

class MapObjectProfileUnkSTNE : public MapObjectProfile_Derived2 {
public:
    /* 00 (base) */

    MapObjectProfileUnkSTNE();
    ~MapObjectProfileUnkSTNE();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkSTNE *GetProfile();
};
