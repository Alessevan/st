#define VECFX32_CTORS

#include "Actor/ActorUnkNSSW.hpp"

#include "Actor/ActorManager.hpp"
#include "Actor/ActorUnkRCHU.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"
#include "Unknown/UnkStruct_ov000_020b4ec4.hpp"
#include "Unknown/UnkStruct_ov000_020b5d34.hpp"

extern "C" fx16 data_02040964[];
extern "C" unk32 data_ov000_020aecf8;

extern "C" void CopySingle288(Mat4x3p *, Mat3p *);
extern "C" void func_01ffa60c(const Mat3p *, Mat3p *, Mat3p *);
extern "C" void func_01ffa7a0(VecFx32 *, Mat3p *, VecFx32 *);
extern "C" fx32 func_01ffbbe0(fx32, fx32);
extern "C" void func_0200ef5c(G3d_Model *, unk32);
extern "C" void func_0200ef9c(G3d_Model *, unk32);
extern "C" void func_ov000_0205f8e8(unk32 *, Mat3p *);

class ActorWithMat4x3pAt154 : public Actor {
public:
    /* 000 (base) */
    /* 094 */ STRUCT_PAD(0x094, 0x154);
    /* 154 */ Mat4x3p mUnk_154;
    /* 184 */
};

class UnkActor_ov032_02120190 : public Actor {
public:
    /* 000 (base) */
    /* 94 */ STRUCT_PAD(0x94, 0xE8);
    /* E8 */ VecFx32 mUnk_E8;
};

DECL_PROFILE(ActorProfileUnkNSSW);

char data_ov032_02121ee4;

Actor *ActorProfileUnkNSSW::Create() {
    return new(HeapIndex_2) ActorUnkNSSW();
}

ActorProfileUnkNSSW::ActorProfileUnkNSSW() :
    ActorProfile(ActorId_NSSW) {
    this->mUnk_04.Init(FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.3f));
}

ActorUnkNSSW::ActorUnkNSSW() :
    mUnk_0B0(
        G3d_GetUnkPtr(((MapObjectProfile_Derived2 *) data_ov000_020b5d34.GetProfileFromId(MapObjectId_SWSW))->mUnk_20.mUnk_50,
                      &data_ov032_02121ee4),
        true),
    mUnk_0BC(0x7),
    mUnk_0E0(this),
    mUnk_104(this),
    mUnk_134(0x0),
    mUnk_138(FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f)),
    mUnk_144(FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f)),
    mUnk_174(0x0),
    mUnk_178(0x0),
    mUnk_17C(0x0),
    mUnk_180(0x1000),
    mUnk_184_eur(NULL),
    mUnk_188_eur(NULL),
    mUnk_18C_eur(0x0),
    mUnk_190_eur(0x0),
    mUnk_194_eur(0x0),
    mUnk_198_eur(0x0),
    mUnk_19D_eur(false) {
    Mat3p_InitIdentity(&this->mUnk_150);
    this->mUnk_40 = &this->mUnk_0E0;
}

bool ActorUnkNSSW::Init(unk32 param1) {
    this->mUnk_104.mUnk_04 = this->mRef;
    this->mUnk_0E0.mUnk_1C = 0x1;
    this->mUnk_19D_eur     = false;

    this->func_ov032_02120894(0x0);
    return true;
}

// non-matching
void ActorUnkNSSW::Update() {}

void ActorUnkNSSW::func_ov032_02120118() {
    ActorWithMat4x3pAt154 *actor = (ActorWithMat4x3pAt154 *) gpActorManager->func_01fff3b4(this->mUnk_134);
    if (actor == NULL) {
        return;
    }

    CopySingle288(&actor->mUnk_154, &this->mUnk_150);

    Mat3p stack;
    Mat3p_InitYRotation(&stack, data_02040964[0], data_02040964[1]);

    func_01ffa60c(&stack, &this->mUnk_150, &this->mUnk_150);

    func_ov000_0205f8e8(&this->mUnk_174, &this->mUnk_150);
}

// non-matching
void ActorUnkNSSW::func_ov032_02120190() {
    UnkActor_ov032_02120190 *actor = (UnkActor_ov032_02120190 *) gpActorManager->func_01fff3b4(this->mUnk_134);

    if (actor == NULL) {
        this->func_ov032_02120894(0x6);
        return;
    }

    VecFx32_Copy(&this->mPos, &this->mPrevPos); // wrongly placed str for x component

    this->mUnk_0E0.mUnk_08 = 0x0;
    this->mUnk_0E0.mUnk_0A = 0x0;
    this->mUnk_0E0.mUnk_0C = 0x0;
    this->mUnk_0E0.mUnk_0E = 0x0;
    this->mUnk_0E0.mUnk_10 = 0x0;
    this->mUnk_0E0.mUnk_12 = 0x0;

    VecFx32 vec(FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(-1.0002f));

    func_01ffa7a0(&vec, &this->mUnk_150, &vec);

    VecFx32_Add(&vec, &actor->mUnk_E8, &vec);

    VecFx32_Copy(&vec, &this->mPos);

    this->func_ov032_02120118();
}

// non-matching
void ActorUnkNSSW::func_ov032_0212025c() {}
// non-matching
void ActorUnkNSSW::func_ov032_021202d8() {}

// non-matching
void ActorUnkNSSW::func_ov032_021203fc() {
    if (this->mTimer.value <= 0x4) {

        this->func_ov032_02120190();

        return;
    }
}

// non-matching
void ActorUnkNSSW::vfunc_2C(Actor_vfunc_30 *param1) {
    if (!this->Actor::func_01fff5d0(param1, 0x0)) {
        return;
    }

    unk32 val = data_ov000_020b4ec4.func_01ffc768(0x3);
    func_0200ef5c(this->mUnk_0B0.mpModel, val);
    func_0200ef9c(this->mUnk_0B0.mpModel, 0x1F);
}

void ActorUnkNSSW::func_ov032_02120880() {
    this->mUnk_3C = &this->mUnk_0C0;
    this->Actor::func_ov000_020989e0();
}

// non-matching (regalloc)
void ActorUnkNSSW::func_ov032_02120894(unk32 param1) {
    unk32 oldVal0BC = this->mUnk_0BC;
    unk32 newVal1A0 = data_ov000_020aecf8;
    this->mUnk_0BC  = param1;
    this->mTimer.Reset();
    this->mUnk_1A0_eur = newVal1A0;

    switch (param1) {
        case 0x0:
            this->mUnk_1A0_eur = 0x0;
            this->mUnk_18C_eur = 0x0;
            break;

        case 0x1:
            this->mUnk_1A0_eur = 0x0;
            break;

        case 0x2:
            this->mUnk_1A0_eur = 0x0;
            break;

        case 0x3:
            this->mUnk_1A0_eur = 0x0;

            if (this->mUnk_188_eur != NULL && this == this->mUnk_188_eur->mUnk_114) {
                this->mUnk_188_eur->vfunc_38();
            }

            func_ov000_0205f8e8(&this->mUnk_174, &this->mUnk_150);
            break;

        case 0x4:
            VecFx32_Copy(&this->mUnk_138, &this->mUnk_144);
            *(s16 *) &this->mUnk_44 &= ~0x20;
            this->mUnk_1A0_eur = 0x0;
            break;

        case 0x5:
            this->mUnk_1A0_eur = 0x0;
            if (oldVal0BC == 0x5) {
                break;
            }

            if (this->mUnk_184_eur != NULL) {
                this->mUnk_184_eur->func_ov032_02121b90();
            }

            if (this->mUnk_19D_eur == 0x0) {
                data_027e0cec->func_ov000_0209feac(0x0822, &this->mPos, 0x2, 0x0, 0x0);
                data_027e0cec->func_ov000_0209feac(0xD09C, &this->mPos, 0x2, 0x0, 0x0);
                data_027e0cec->func_ov000_0209feac(0xD09D, &this->mPos, 0x2, 0x0, 0x0);
                data_027e0cec->func_ov000_0209feac(0xD09E, &this->mPos, 0x2, 0x0, 0x0);
                data_027e0cec->func_ov000_0209feac(0xD09F, &this->mPos, 0x2, 0x0, 0x0);
                data_027e0cec->func_ov000_0209feac(0xD0A0, &this->mPos, 0x2, 0x0, 0x0);
                data_027e09a8->func_ov000_02071b30(0x9927, &this->mPos, 0x0);
            }

            this->Actor::func_ov000_020984d0();
            break;

        case 0x6: {
            VecFx32_Init(FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), &this->mUnk_144);
            VecFx32 vec(FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(1.0f));

            func_01ffa7a0(&vec, &this->mUnk_150, &vec);

            u16 angle = (u16) (s16) func_01ffbbe0(vec.x, vec.z);

            Mat3p_InitYRotation(&this->mUnk_150, SIN(angle), COS(angle));

            *(s16 *) &this->mUnk_44 &= ~0x20;
            break;
        }

        default:
            break;
    }
}

void ActorUnkNSSW::func_ov032_02120b34(ActorRef ref) {
    if (this->mUnk_0BC == 0x3) {
        return;
    }
    this->mUnk_134 = ref;
    this->func_ov032_02120894(0x2);
}

void ActorUnkNSSW::func_ov032_02120b6c() {
    this->func_ov032_02120894(0x3);
}

void ActorUnkNSSW::func_ov032_02120b7c(VecFx32 *param1) {
    fx32 x = param1->x;
    fx32 y = param1->y;
    fx32 z = param1->z;
    VecFx32_Init(x, y, z, &this->mUnk_138);

    if (x == FLOAT_TO_FX32(0.0f) && y == FLOAT_TO_FX32(0.0f) && z == FLOAT_TO_FX32(0.0f)) {
        this->func_ov032_02120894(0x6);
        return;
    }
    this->func_ov032_02120894(0x4);
}

void ActorUnkNSSW::func_ov032_02120bc0() {
    if (this->mUnk_188_eur != NULL && this == this->mUnk_188_eur->mUnk_114) {
        this->mUnk_188_eur->vfunc_38();
    }

    this->func_ov032_02120894(0x6);
}

void ActorUnkNSSW::func_ov032_02120bfc(Actor *actor) {
    this->mUnk_19D_eur = true;
    if (actor != NULL) {
        switch (actor->GetActorId()) {
            case ActorId_RCMS:
                this->mUnk_19D_eur = false;
                break;
            case ActorId_RCHU:
                if (((ActorUnkRCHU *) actor)->mUnk_268 != 0x0) {
                    this->mUnk_19D_eur = false;
                }
                break;
#if IS_JP
            case ActorId_NSSW:
            case ActorId_FRTN:
                this->mUnk_19D_eur = false;
                break;
#endif
            default:
                break;
        }
    }

    this->func_ov032_02120894(0x5);
}

// non-matching
void ActorUnkNSSW::func_ov032_02120c64(MapObjectUnkSWSW *param1) {
    if (this->mUnk_0BC != 0x4) {
        return;
    }

    VecFx32 vec = param1->mPos;
    VecFx32_Copy(&vec, &this->mPrevPos);
    VecFx32_Copy(&vec, &this->mPos); // non-matching

    this->mUnk_18C_eur = 0x0;
    Mat3p_InitIdentity(&this->mUnk_150);

    VecFx32_Init(FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), &this->mUnk_138);

    this->func_ov032_02120894(0x0);
    this->mUnk_188_eur = param1;
}

ActorUnkNSSW_0E0::ActorUnkNSSW_0E0(ActorUnkNSSW *actor) :
    Actor_C4(actor, 0x1) {
    this->mUnk_20 = actor;
    this->mUnk_04 = 0x1;
}

bool ActorUnkNSSW_0E0::vfunc_00(ActorRef ref, unk32 param2) {
    if (param2 != 0x0) {
        ActorUnkNSSW *actor = this->GetActorPtr<ActorUnkNSSW>();
        actor->func_ov032_02120b34(ref);
    }

    return this->Actor_C4::vfunc_00(ref, param2);
}

bool ActorUnkNSSW_0E0::vfunc_04() {
    this->GetActorPtr<ActorUnkNSSW>()->func_ov032_02120b6c();

    return this->Actor_C4::vfunc_04();
}

void ActorUnkNSSW_0E0::vfunc_0C(VecFx32 *param1) {
    if (VecFx32_Length(param1) < FLOAT_TO_FX32(0.01f)) {
        this->GetActorPtr<ActorUnkNSSW>()->func_ov032_02120bc0();
    } else {
        this->GetActorPtr<ActorUnkNSSW>()->func_ov032_02120b7c(param1);
    }

    return this->Actor_C4::vfunc_0C(param1);
}

ActorUnkNSSW_104::ActorUnkNSSW_104(ActorUnkNSSW *actor) :
    mUnk_2C(actor) {}

void ActorUnkNSSW_104::vfunc_10(Actor *actor) {
    this->mUnk_2C->func_ov032_02120bfc(actor);
}
