#include "Actor/ActorHeart.hpp"

extern ActorTypeHeart ActorTypeHeart::gInstance;

// func_ov031_020eecf4
ARM ActorTypeHeart *ActorTypeHeart::GetInstance() {
    return &ActorTypeHeart::gInstance;
}

// func_ov031_020eed00
ARM Actor *ActorTypeHeart::Create() {
    return new ActorHeart();// 0xF8, 0x02, 0x04);
}

// func_ov031_020eed24
ARM ActorTypeHeart::ActorTypeHeart() :
    ActorType(ActorId_Heart) {
    this->mUnk_04.pos.x = 0;
    this->mUnk_04.pos.y = 0x400;
    this->mUnk_04.pos.z = 0;
    this->mUnk_04.size  = 0x400;
}

// func_ov031_020eede0
ARM ActorHeart::ActorHeart() {}

ARM bool ActorHeart::func_ov031_020eeed8(unk32 param_2, unk32 param_3, unk32 param_4) {
    this->func_ov031_020ef4a8(param_2, param_3, param_4);
    return true;
}

void ActorHeart::func_ov031_020eeee8() {} // func_ov031_020eeee8

void ActorHeart::func_ov031_020ef5e8() {} // func_ov031_020ef5e8

ActorHeart::~ActorHeart() {} // func_ov031_020ef7d4 ? func_ov031_020ef7d8

extern UnkStruct_ov000_020b539c UnkStruct_020b539c;

void ActorHeart::func_ov031_020eed64(unk32 *param_2, unk32 param_3, unk32 param_4) {
    unk32 local_5c;
    unk32 local_58;
    unk32 local_54;
    // ??
    unk32 local_34;
    unk32 local_30;
    unk32 local_2c;

    local_30 = 0;
    local_2c = param_4;

    this->mUnk_5c.func_ov000_020975f8();
    local_58 = param_2[1];
    local_58 = param_2[2];
    local_5c = param_2[0];
    local_34 = param_4;
    local_30 = param_3;

    // this->func_ov000_020973f4(&UnkStruct_020b539c, ActorId_Heart, 0x4845524, &local_5c);
}

// _DAT_020aecf8
// CD
// 00
// 00
// 00
const unk32 _DAT_020aecf8 = 0x000000CD;

// const unk32 data_ov31_02113da4 = func_ov31_020ef2ec;

void ActorHeart::func_ov031_020ef1b4(unk16 param_2) {
    this->mUnk_4c = param_2;
    this->mUnk_44 = 0x9C;
    this->mUnk_2c = _DAT_020aecf8;
}

void ActorHeart::func_ov031_020ef208() {
    if (this->mUnk_4c == 3 || this->mUnk_4c == 4 || this->mUnk_4c == 5) {
        this->mFlags[0] |= 0b10;
        return;
    }
    if (this->mUnk_be == 0) {
        if (this->mUnk_52 <= this->mUnk_50) {
            this->mUnk_52 = 0x3C;
            this->mUnk_50 = 0x00;
            this->mUnk_be = 0x01;
            return;
        }
        this->mUnk_50++;
        return;
    }

    if ((this->mUnk_50 & 0b111) < 4) {
        this->mFlags[0] &= 0xFFFFFFFD;
    } else {
        this->mFlags[0] |= 0b10;
    }

    if (this->mUnk_52 <= this->mUnk_50) {
        Actor::func_ov000_020984d0();
        return;
    }
    this->mUnk_50++;
}

void ActorHeart::func_ov031_020ef2ec() {
    this->mVel.y = 0x400;
}

extern "C" void func_ov000_02098838();

void ActorHeart::func_ov031_020ef2f8() {
    func_ov000_02098838();
    if (this->mVel.y > 0) {
        return;
    }
    this->func_ov031_020ef1b4(0x01);
}

void ActorHeart::func_ov031_020ef320() {
    this->mUnk_2c = 0x06;
    this->mUnk_44 = 0x9F;
}

void ActorHeart::func_ov031_020ef334() {
    this->func_ov031_020ef570();
    if ((this->mUnk_46 & 0b11) == 0) {
        return;
    }
    this->func_ov031_020ef1b4(0x02);
}

void ActorHeart::func_ov031_020ef35c() {
    this->mVel.x = 0;
    this->mVel.y = 0;
    this->mVel.z = 0;
    if (this->mUnk_be == 0 && (this->mUnk_52 - this->mUnk_50) > 0xB4) {
        this->mUnk_52 = 0xB4;
        this->mUnk_50 = 0x00;
    }
    this->mUnk_44 = 0x9F;
}

void ActorHeart::func_ov031_020ef3a0() {
    if (this->mUnk_80 >= 0) {
        return;
    }
    this->func_ov031_020ef698();
}

extern "C" void func_ov017_020bf99c(void);
// Actor_9c::func_ov000_02097bec() ?
extern "C" void func_ov017_02097bec(int);

void ActorHeart::func_ov031_020ef3b8() {
    func_ov017_020bf99c();
    func_ov017_02097bec(this->mUnk_98);
}

extern "C" void func_ov017_020bf9c8(ActorUnk_ov000_020a8bb0 *param1);

void ActorHeart::func_ov031_020ef3d0() {
    ActorUnk_ov000_020a8bb0 *actor = gActorManager->func_01fff3b4(this->mUnk_c0);
    func_ov017_020bf9c8(actor);
    if ((this->mFlags[0] & 0x20) == 0) {
        return;
    }
    this->mVel.x = 0;
    this->mVel.y = 0;
    this->mVel.z = 0;

    this->mUnk_9c |= 0x1000;
    this->func_ov031_020ef1b4(0x01);
}

void ActorHeart::func_ov031_020ef430() {
    this->mVel.x = 0;
    this->mVel.y = 0;
    this->mVel.z = 0;
}

// ¯\_(ツ)_/¯
void ActorHeart::func_ov031_020ef444() {
    return;
}

void ActorHeart::func_ov031_020ef448() {
    this->mVel.x = 0;
    this->mVel.z = 0;
}

void ActorHeart::func_ov031_020ef458() {
    ActorUnk_ov000_020a8bb0 *actorUnk = gActorManager->func_01fff3b4(this->mUnk_c4);
    if (actorUnk == nullptr) {
        this->func_ov031_020ef1b4(0x01);
        return;
    }
    this->mPos.x = actorUnk->mUnk_0e8;
    this->mPos.y = *reinterpret_cast<unk32 *>(&actorUnk->mUnk_0ec);
    this->mPos.z = actorUnk->mUnk_0f0;
}

void ActorHeart::func_ov031_020ef4a8(unk32 param_2, unk32 param_3, unk32 param_4) {
    if (this->mUnk_80 >= 0) {
        this->func_ov031_020ef1b4(2);
        return;
    }

    if (this->mUnk_88 != 0) {
        if (this->mUnk_88 != 1) {
            this->mUnk_52 = 0x1E0;
            this->mUnk_50 = 0x000;
            this->func_ov031_020ef1b4(2);
            return;
        }
        this->mUnk_52 = 0x1E0;
        this->mUnk_50 = 0x000;
        this->func_ov031_020ef1b4(2);
        return;
    }
    this->mUnk_52 = 0xB4;
    this->mUnk_50 = 0x00;
    this->func_ov031_020ef1b4(2);
}

void ActorHeart::func_ov031_020ef528() {}

void ActorHeart::func_ov031_020ef570() {}

void ActorHeart::func_ov031_020ef5e8(unk32 param_2, unk32 param_3, unk32 param_4) {
    Vec3p uStack_20;
    Vec3p uStack_2c;

    // TODO : auStack30

    if (this->func_01fff5d0(param_2, 0) == 0) {
        return;
    }

    uStack_20.x = this->mPos.x;
    uStack_20.z = this->mPos.z;
    uStack_20.y = this->mPos.y + 0x80;
    this->func_ov017_020bf5c4(&uStack_20, 0x400, 0x400, 0x1F, 0x00);

    uStack_20.x = this->mPos.x;
    uStack_20.z = this->mPos.z;
    uStack_20.y = this->mPos.y + 0x80;
    this->func_ov017_020bf5c4(&uStack_2c, 0xCCD, 0xCCD, 0x1F, 0x00);
}

void ActorHeart::func_ov031_020ef698() {
    if (this->mUnk_bc == 0x00) {
        if ((this->mUnk_46 & 3) == 0) {
            this->mUnk_bc = 0x01;
            this->mUnk_2c = 0x06;
        }
        return;
    }
    if (this->mUnk_bc == 0x01) {
        this->func_ov031_020ef570();
        if ((this->mUnk_46 & 3) != 0) {
            this->mVel.x  = 0;
            this->mVel.y  = 0;
            this->mVel.z  = 0;
            this->mUnk_bc = 0;
        }
    }
}

Actor_c4_Base *ActorHeart::func_ov031_020ef6f8(Actor_c4_Base *param_1, int param_2) {
    // TODO : wut
}

void ActorHeart::func_ov031_020ef730(unk32 param_2, int param_3) {
    if (param_3 != 0) {
        // this = this + 0x20 ?!
    }
    // this->func_ov031_020f62e4()
}

void ActorHeart::func_ov031_020ef774() {}

void ActorHeart::func_ov031_020ef794(unk32 param_2, unk32 param_3, unk32 param_4) {}

void ActorHeart::func_ov031_020ef7bc() {}