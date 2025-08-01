#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Characters_Landed

#include "Basic.hpp"

#include "AkAudio_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function GC_Characters_Landed.GC_Characters_Landed_C.OnExecute
// 0x0240 (0x0240 - 0x0000)
struct GC_Characters_Landed_C_OnExecute final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                          ReturnValue;                                       // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x3];                                       // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Location;                                          // 0x00C4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPhysicalSurface                              SurfaceType;                                       // 0x00D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AMarinerCharacter*                      Character;                                         // 0x00D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Landed_Sound;                                      // 0x00E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        Landed_Particles;                                  // 0x00E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_GetHitResult_ReturnValue;                 // 0x00F0(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_GetGameplayCueEndLocationAndNormal_Location; // 0x0178(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetGameplayCueEndLocationAndNormal_Normal; // 0x0184(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGameplayCueEndLocationAndNormal_ReturnValue; // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EPhysicalSurface                              CallFunc_GetSurfaceType_ReturnValue;               // 0x0191(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_OnExecute_ReturnValue;                    // 0x0192(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_193[0x5];                                      // 0x0193(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class AMarinerCharacter*                      K2Node_DynamicCast_AsMariner_Character;            // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A1[0x3];                                      // 0x01A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x01A4(0x0010)(ConstParm, ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsLocallyControlled_ReturnValue;          // 0x01B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1B5[0x3];                                      // 0x01B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x01B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C1[0x7];                                      // 0x01C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;    // 0x01C8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D9[0x7];                                      // 0x01D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput_1;  // 0x01E0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue_1;     // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x01F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F2[0x6];                                      // 0x01F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FAkExternalSourceInfo>          Temp_struct_Variable;                              // 0x01F8(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	int32                                         CallFunc_PostAkEvent_ReturnValue;                  // 0x0208(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_20C[0x4];                                      // 0x020C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x0210(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_219[0x7];                                      // 0x0219(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          CallFunc_Map_Find_Value;                           // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_229[0x7];                                      // 0x0229(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        CallFunc_Map_Find_Value_1;                         // 0x0230(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GC_Characters_Landed_C_OnExecute) == 0x000008, "Wrong alignment on GC_Characters_Landed_C_OnExecute");
static_assert(sizeof(GC_Characters_Landed_C_OnExecute) == 0x000240, "Wrong size on GC_Characters_Landed_C_OnExecute");
static_assert(offsetof(GC_Characters_Landed_C_OnExecute, MyTarget) == 0x000000, "Member 'GC_Characters_Landed_C_OnExecute::MyTarget' has a wrong offset!");
static_assert(offsetof(GC_Characters_Landed_C_OnExecute, Parameters) == 0x000008, "Member 'GC_Characters_Landed_C_OnExecute::Parameters' has a wrong offset!");
static_assert(offsetof(GC_Characters_Landed_C_OnExecute, ReturnValue) == 0x0000C0, "Member 'GC_Characters_Landed_C_OnExecute::ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Characters_Landed_C_OnExecute, Location) == 0x0000C4, "Member 'GC_Characters_Landed_C_OnExecute::Location' has a wrong offset!");
static_assert(offsetof(GC_Characters_Landed_C_OnExecute, SurfaceType) == 0x0000D0, "Member 'GC_Characters_Landed_C_OnExecute::SurfaceType' has a wrong offset!");
static_assert(offsetof(GC_Characters_Landed_C_OnExecute, Character) == 0x0000D8, "Member 'GC_Characters_Landed_C_OnExecute::Character' has a wrong offset!");
static_assert(offsetof(GC_Characters_Landed_C_OnExecute, Landed_Sound) == 0x0000E0, "Member 'GC_Characters_Landed_C_OnExecute::Landed_Sound' has a wrong offset!");
static_assert(offsetof(GC_Characters_Landed_C_OnExecute, Landed_Particles) == 0x0000E8, "Member 'GC_Characters_Landed_C_OnExecute::Landed_Particles' has a wrong offset!");
static_assert(offsetof(GC_Characters_Landed_C_OnExecute, CallFunc_GetHitResult_ReturnValue) == 0x0000F0, "Member 'GC_Characters_Landed_C_OnExecute::CallFunc_GetHitResult_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Characters_Landed_C_OnExecute, CallFunc_GetGameplayCueEndLocationAndNormal_Location) == 0x000178, "Member 'GC_Characters_Landed_C_OnExecute::CallFunc_GetGameplayCueEndLocationAndNormal_Location' has a wrong offset!");
static_assert(offsetof(GC_Characters_Landed_C_OnExecute, CallFunc_GetGameplayCueEndLocationAndNormal_Normal) == 0x000184, "Member 'GC_Characters_Landed_C_OnExecute::CallFunc_GetGameplayCueEndLocationAndNormal_Normal' has a wrong offset!");
static_assert(offsetof(GC_Characters_Landed_C_OnExecute, CallFunc_GetGameplayCueEndLocationAndNormal_ReturnValue) == 0x000190, "Member 'GC_Characters_Landed_C_OnExecute::CallFunc_GetGameplayCueEndLocationAndNormal_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Characters_Landed_C_OnExecute, CallFunc_GetSurfaceType_ReturnValue) == 0x000191, "Member 'GC_Characters_Landed_C_OnExecute::CallFunc_GetSurfaceType_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Characters_Landed_C_OnExecute, CallFunc_OnExecute_ReturnValue) == 0x000192, "Member 'GC_Characters_Landed_C_OnExecute::CallFunc_OnExecute_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Characters_Landed_C_OnExecute, K2Node_DynamicCast_AsMariner_Character) == 0x000198, "Member 'GC_Characters_Landed_C_OnExecute::K2Node_DynamicCast_AsMariner_Character' has a wrong offset!");
static_assert(offsetof(GC_Characters_Landed_C_OnExecute, K2Node_DynamicCast_bSuccess) == 0x0001A0, "Member 'GC_Characters_Landed_C_OnExecute::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GC_Characters_Landed_C_OnExecute, Temp_delegate_Variable) == 0x0001A4, "Member 'GC_Characters_Landed_C_OnExecute::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(GC_Characters_Landed_C_OnExecute, CallFunc_IsLocallyControlled_ReturnValue) == 0x0001B4, "Member 'GC_Characters_Landed_C_OnExecute::CallFunc_IsLocallyControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Characters_Landed_C_OnExecute, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x0001B8, "Member 'GC_Characters_Landed_C_OnExecute::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Characters_Landed_C_OnExecute, CallFunc_Not_PreBool_ReturnValue) == 0x0001C0, "Member 'GC_Characters_Landed_C_OnExecute::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Characters_Landed_C_OnExecute, CallFunc_HasMatchingGameplayTag_self_CastInput) == 0x0001C8, "Member 'GC_Characters_Landed_C_OnExecute::CallFunc_HasMatchingGameplayTag_self_CastInput' has a wrong offset!");
static_assert(offsetof(GC_Characters_Landed_C_OnExecute, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x0001D8, "Member 'GC_Characters_Landed_C_OnExecute::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Characters_Landed_C_OnExecute, CallFunc_HasMatchingGameplayTag_self_CastInput_1) == 0x0001E0, "Member 'GC_Characters_Landed_C_OnExecute::CallFunc_HasMatchingGameplayTag_self_CastInput_1' has a wrong offset!");
static_assert(offsetof(GC_Characters_Landed_C_OnExecute, CallFunc_HasMatchingGameplayTag_ReturnValue_1) == 0x0001F0, "Member 'GC_Characters_Landed_C_OnExecute::CallFunc_HasMatchingGameplayTag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GC_Characters_Landed_C_OnExecute, CallFunc_BooleanAND_ReturnValue) == 0x0001F1, "Member 'GC_Characters_Landed_C_OnExecute::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Characters_Landed_C_OnExecute, Temp_struct_Variable) == 0x0001F8, "Member 'GC_Characters_Landed_C_OnExecute::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GC_Characters_Landed_C_OnExecute, CallFunc_PostAkEvent_ReturnValue) == 0x000208, "Member 'GC_Characters_Landed_C_OnExecute::CallFunc_PostAkEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Characters_Landed_C_OnExecute, CallFunc_SpawnEmitterAttached_ReturnValue) == 0x000210, "Member 'GC_Characters_Landed_C_OnExecute::CallFunc_SpawnEmitterAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Characters_Landed_C_OnExecute, CallFunc_IsValid_ReturnValue) == 0x000218, "Member 'GC_Characters_Landed_C_OnExecute::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Characters_Landed_C_OnExecute, CallFunc_Map_Find_Value) == 0x000220, "Member 'GC_Characters_Landed_C_OnExecute::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(GC_Characters_Landed_C_OnExecute, CallFunc_Map_Find_ReturnValue) == 0x000228, "Member 'GC_Characters_Landed_C_OnExecute::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(GC_Characters_Landed_C_OnExecute, CallFunc_Map_Find_Value_1) == 0x000230, "Member 'GC_Characters_Landed_C_OnExecute::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(GC_Characters_Landed_C_OnExecute, CallFunc_Map_Find_ReturnValue_1) == 0x000238, "Member 'GC_Characters_Landed_C_OnExecute::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");

}

