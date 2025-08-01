#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ImpulsedByEnemyCameraEffect

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ImpulsedByEnemyCameraEffect.ImpulsedByEnemyCameraEffect_C.ExecuteUbergraph_ImpulsedByEnemyCameraEffect
// 0x0058 (0x0058 - 0x0000)
struct ImpulsedByEnemyCameraEffect_C_ExecuteUbergraph_ImpulsedByEnemyCameraEffect final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMarinerCharacter*                      K2Node_DynamicCast_AsMariner_Character;            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0034(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x0048(0x0008)(NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetGameplayEffectCount_ReturnValue;       // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ImpulsedByEnemyCameraEffect_C_ExecuteUbergraph_ImpulsedByEnemyCameraEffect) == 0x000008, "Wrong alignment on ImpulsedByEnemyCameraEffect_C_ExecuteUbergraph_ImpulsedByEnemyCameraEffect");
static_assert(sizeof(ImpulsedByEnemyCameraEffect_C_ExecuteUbergraph_ImpulsedByEnemyCameraEffect) == 0x000058, "Wrong size on ImpulsedByEnemyCameraEffect_C_ExecuteUbergraph_ImpulsedByEnemyCameraEffect");
static_assert(offsetof(ImpulsedByEnemyCameraEffect_C_ExecuteUbergraph_ImpulsedByEnemyCameraEffect, EntryPoint) == 0x000000, "Member 'ImpulsedByEnemyCameraEffect_C_ExecuteUbergraph_ImpulsedByEnemyCameraEffect::EntryPoint' has a wrong offset!");
static_assert(offsetof(ImpulsedByEnemyCameraEffect_C_ExecuteUbergraph_ImpulsedByEnemyCameraEffect, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'ImpulsedByEnemyCameraEffect_C_ExecuteUbergraph_ImpulsedByEnemyCameraEffect::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ImpulsedByEnemyCameraEffect_C_ExecuteUbergraph_ImpulsedByEnemyCameraEffect, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'ImpulsedByEnemyCameraEffect_C_ExecuteUbergraph_ImpulsedByEnemyCameraEffect::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImpulsedByEnemyCameraEffect_C_ExecuteUbergraph_ImpulsedByEnemyCameraEffect, CallFunc_GetOwner_ReturnValue) == 0x000020, "Member 'ImpulsedByEnemyCameraEffect_C_ExecuteUbergraph_ImpulsedByEnemyCameraEffect::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImpulsedByEnemyCameraEffect_C_ExecuteUbergraph_ImpulsedByEnemyCameraEffect, K2Node_DynamicCast_AsMariner_Character) == 0x000028, "Member 'ImpulsedByEnemyCameraEffect_C_ExecuteUbergraph_ImpulsedByEnemyCameraEffect::K2Node_DynamicCast_AsMariner_Character' has a wrong offset!");
static_assert(offsetof(ImpulsedByEnemyCameraEffect_C_ExecuteUbergraph_ImpulsedByEnemyCameraEffect, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'ImpulsedByEnemyCameraEffect_C_ExecuteUbergraph_ImpulsedByEnemyCameraEffect::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ImpulsedByEnemyCameraEffect_C_ExecuteUbergraph_ImpulsedByEnemyCameraEffect, K2Node_CreateDelegate_OutputDelegate_1) == 0x000034, "Member 'ImpulsedByEnemyCameraEffect_C_ExecuteUbergraph_ImpulsedByEnemyCameraEffect::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(ImpulsedByEnemyCameraEffect_C_ExecuteUbergraph_ImpulsedByEnemyCameraEffect, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x000048, "Member 'ImpulsedByEnemyCameraEffect_C_ExecuteUbergraph_ImpulsedByEnemyCameraEffect::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImpulsedByEnemyCameraEffect_C_ExecuteUbergraph_ImpulsedByEnemyCameraEffect, CallFunc_GetGameplayEffectCount_ReturnValue) == 0x000050, "Member 'ImpulsedByEnemyCameraEffect_C_ExecuteUbergraph_ImpulsedByEnemyCameraEffect::CallFunc_GetGameplayEffectCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImpulsedByEnemyCameraEffect_C_ExecuteUbergraph_ImpulsedByEnemyCameraEffect, CallFunc_Greater_IntInt_ReturnValue) == 0x000054, "Member 'ImpulsedByEnemyCameraEffect_C_ExecuteUbergraph_ImpulsedByEnemyCameraEffect::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

}

