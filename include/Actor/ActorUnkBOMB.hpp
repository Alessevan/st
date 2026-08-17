#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "Actor_Derived1.hpp"
#include "global.h"
#include "types.h"

enum ActorUnkBOMBState_ {
    ActorUnkBOMBState_0 = 0,
    ActorUnkBOMBState_1 = 1,
    ActorUnkBOMBState_2 = 2,
    ActorUnkBOMBState_3 = 3,
    ActorUnkBOMBState_4 = 4,
    ActorUnkBOMBState_5 = 5,
    ActorUnkBOMBState_6 = 6,
    ActorUnkBOMBState_Max
};

class ActorUnkBOMB_unk : public UnkStruct_PlayerGet_ec {
public:
    /* 00 (base) */
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */

    ActorUnkBOMB_unk(); // ActorUnkBOMB::func_ov031_020e33ac()

    // ActorUnkBOMB::func_ov031_020e17f4() dtor ?
};

class ActorUnkBomb_19C : public UnkStruct_ov031_Items_01 {
public:
    /* 00 (base) */
    /* 2C */ Actor *mUnk_2C;
    /* 30 */

    ActorUnkBomb_19C(Actor *param1);

    // data_ov031_02112c94
    /* 10 */ virtual void vfunc_10(Actor *actor) override;
};

class ActorUnkBomb_180 : public UnkStruct_ov031_Items_00 {
public:
    /* 00 (base) */
    /* 04 */ unk16 mUnk_04;
    /* 08 */ Actor *mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ unk32 mUnk_10;
    /* 14 */ unk32 mUnk_14;
    /* 18 */ unk32 mUnk_18;
    /* 1C */

    ActorUnkBomb_180(Actor *param1);

    // data_ov031_02112c78
    /* 00 */ virtual ~ActorUnkBomb_180() override;
    /* 08 */ virtual bool vfunc_08(const UnkStruct_ov031_020f3310 *param1) override;
    /* 0C */ virtual bool vfunc_0C(const UnkStruct_ov031_020e54d4 *param1, unk32 *param2, unk32 param3) override;
    /* 10 */ virtual bool vfunc_10(ActorRef param1, unk32 param2) override;
};

class ActorUnkBOMB_ov031_020e2134 : public UnkStruct_ov031_Items_00 {
public:
    /* 00 (base) */
    /* 04 */

    // data_ov031_02112cb0
    /* 00 */ // dtor _ZN12ActorUnkBOMB19func_ov031_020e2220Ev &  _ZN12ActorUnkBOMB19func_ov031_020e33c0Ev
    /* 08 */ virtual bool vfunc_08(const UnkStruct_ov031_020f3310 *param1) override; // func_ov031_020e3310
};

class ActorUnkBOMB : public Actor {
public:
    /* 000 (base) */
    /* 094 */ ModelRender mUnk_094;
    /* 0F4 */ UnkSystem5 mUnk_0F4;
    /* 114 */ unk32 mUnk_114;
    /* 118 */ STRUCT_PAD(0x118, 0x134);
    /* 134 */ Actor_9C mUnk_134;
    /* 140 */ STRUCT_PAD(0x154, 0x158);
    /* 158 */ unk32 mUnk_158;
    /* 15C */ STRUCT_PAD(0x15C, 0x180);
    /* 180 */ ActorUnkBomb_180 mUnk_180;
    /* 19C */ ActorUnkBomb_19C mUnk_19C;
    /* 1CC */ VecFx32 mUnk_1CC;
    /* 1D8 */ STRUCT_PAD(0x1D8, 0x1E4);
    /* 1E4 */ ActorRef mUnk_1E4;
    /* 1E8 */ unk8 mUnk_1E8;
    /* 1EA */ unk16 mUnk_1EA;
    /* 1EC */ unk16 mUnk_1EC;
    /* 1EE */ unk8 mUnk_1EE;
    /* 1EF */ STRUCT_PAD(0x1EF, 0x1F0);
    /* 1F0 */ unk8 mUnk_1F0;
    /* 1F1 */ STRUCT_PAD(0x1F1, 0x1F4);
    /* 1F4 */ Actor_Derived1_94 mUnk_1F4;
    /* 200 */

    ActorUnkBOMB();

    /* 18 */ virtual bool vfunc_18(unk32 param1) override;
    /* 20 */ virtual void vfunc_20() override;
    /* 24 */ virtual void vfunc_24() override;
    /* 2C */ virtual void vfunc_2C(unk32 param1) override;
    /* 38 */ virtual bool Grab(ActorGrabParams grabParams) override;
    /* 3C */ virtual bool Drop(ActorGrabParams grabParams, const VecFx32 *pVel) override;

    // check if really in ActorUnkBomb
    G3d_Model *func_ov031_020e1540(u16 param1);
    unk32 func_ov031_020e15d0(u16 param1);
    void func_ov031_020e1634();
    void func_ov031_020e17f4();

    //
    void func_ov031_020e18a0();
    void func_ov031_020e18c4(ActorState state);
    void func_ov031_020e1908();
    void func_ov031_020e1920(VecFx32 *param1);
    void func_ov031_020e193c();
    void func_ov031_020e1b1c();
    void func_ov031_020e1b7c();
    void func_ov031_020e1d18();
    void func_ov031_020e1d48();
    bool func_ov031_020e1d58();
    bool func_ov031_020e1d74();
    void func_ov031_020e1da0();
    void func_ov031_020e1ebc();
    void func_ov031_020e1ed8();
    void func_ov031_020e1f18();
    void func_ov031_020e1f88();
    void func_ov031_020e1fe0();
    void func_ov031_020e1fe4();
    void func_ov031_020e2034();
    void func_ov031_020e2064();
    void func_ov031_020e20d8();
    void func_ov031_020e20fc();
    void func_ov031_020e2100();
    void func_ov031_020e2134();
    void func_ov031_020e238c();
    bool func_ov031_020e25bc();
    void func_ov031_020e262c();
    void func_ov031_020e2680();
    void func_ov031_020e2780();
    void func_ov031_020e2820();
    void func_ov031_020e295c();
    void func_ov031_020e2a9c();
    void func_ov031_020e2b40();
    void func_ov031_020e2c2c();
};

class ActorProfileUnkBOMB : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkBOMB();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkBOMB *GetProfile();
};
