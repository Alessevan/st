#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorType.hpp"
#include "types.h"

class ActorHeart : public Actor {
public:
    STRUCT_PAD(0x94, 0x98);
    /* 98 */ unk32 mUnk_98;
    /* 9c */ unk32 mUnk_9c;
    STRUCT_PAD(0xA0, 0xB8);
    /* b8 */ u16 mUnk_b8;
    STRUCT_PAD(0xBA, 0xBC);
    /* be */ u16 mUnk_bc;
    /* be */ u8 mUnk_be;
    STRUCT_PAD(0xBF, 0xC0);
    /* c0 */ unk32 mUnk_c0;
    /* c4 */ unk32 mUnk_c4;

    ActorHeart();

    virtual bool func_ov031_020eeed8(unk32 param_2, unk32 param_3, unk32 param_4) override; // func_ov031_020eeed8
    virtual void func_ov031_020eeee8() override; // func_ov031_020eeee8
    virtual void func_ov031_020ef5e8() override; // func_ov031_020ef5e8
    virtual ~ActorHeart(); // func_ov031_020ef7d4 ? func_ov031_020ef7d8

    void func_ov031_020eed64(unk32 *param_2, unk32 param_3, unk32 param_4);
    void func_ov031_020ef1b4(unk16 param_2);
    void func_ov031_020ef208();
    void func_ov031_020ef2ec();
    void func_ov031_020ef2f8();
    void func_ov031_020ef320();
    void func_ov031_020ef334();
    void func_ov031_020ef35c();
    void func_ov031_020ef3a0();
    void func_ov031_020ef3b8();
    void func_ov031_020ef3d0();
    void func_ov031_020ef430();
    void func_ov031_020ef444();
    void func_ov031_020ef448();
    void func_ov031_020ef458();
    void func_ov031_020ef4a8(unk32 param_2, unk32 param_3, unk32 param_4);
    void func_ov031_020ef528();
    void func_ov031_020ef570();
    void func_ov031_020ef5e8(unk32 param_2, unk32 param_3, unk32 param_4);
    void func_ov031_020ef698();
};

class ActorTypeHeart : public ActorType {
public:
    static ActorTypeHeart gInstance;

    // func_ov031_020eecf4 ?
    static ActorTypeHeart *GetInstance();

    // func_ov031_020eed00
    virtual Actor *Create();

    // func_ov031_020eed24
    ActorTypeHeart();
};