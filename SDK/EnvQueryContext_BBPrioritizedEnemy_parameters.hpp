#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EnvQueryContext_BBPrioritizedEnemy

#include "Basic.hpp"


namespace SDK::Params
{

// Function EnvQueryContext_BBPrioritizedEnemy.EnvQueryContext_BBPrioritizedEnemy_C.ProvideSingleActor
// 0x0060 (0x0060 - 0x0000)
struct EnvQueryContext_BBPrioritizedEnemy_C_ProvideSingleActor final
{
public:
	class UObject*                                QuerierObject;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 QuerierActor;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 ResultingActor;                                    // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlackboardComponent*                   CallFunc_GetBlackboard_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue_1;            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_GetValueAsObject_ReturnValue;             // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_GetValueAsObject_ReturnValue_1;           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_DynamicCast_AsActor;                        // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_DynamicCast_AsActor_1;                      // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EnvQueryContext_BBPrioritizedEnemy_C_ProvideSingleActor) == 0x000008, "Wrong alignment on EnvQueryContext_BBPrioritizedEnemy_C_ProvideSingleActor");
static_assert(sizeof(EnvQueryContext_BBPrioritizedEnemy_C_ProvideSingleActor) == 0x000060, "Wrong size on EnvQueryContext_BBPrioritizedEnemy_C_ProvideSingleActor");
static_assert(offsetof(EnvQueryContext_BBPrioritizedEnemy_C_ProvideSingleActor, QuerierObject) == 0x000000, "Member 'EnvQueryContext_BBPrioritizedEnemy_C_ProvideSingleActor::QuerierObject' has a wrong offset!");
static_assert(offsetof(EnvQueryContext_BBPrioritizedEnemy_C_ProvideSingleActor, QuerierActor) == 0x000008, "Member 'EnvQueryContext_BBPrioritizedEnemy_C_ProvideSingleActor::QuerierActor' has a wrong offset!");
static_assert(offsetof(EnvQueryContext_BBPrioritizedEnemy_C_ProvideSingleActor, ResultingActor) == 0x000010, "Member 'EnvQueryContext_BBPrioritizedEnemy_C_ProvideSingleActor::ResultingActor' has a wrong offset!");
static_assert(offsetof(EnvQueryContext_BBPrioritizedEnemy_C_ProvideSingleActor, CallFunc_GetBlackboard_ReturnValue) == 0x000018, "Member 'EnvQueryContext_BBPrioritizedEnemy_C_ProvideSingleActor::CallFunc_GetBlackboard_ReturnValue' has a wrong offset!");
static_assert(offsetof(EnvQueryContext_BBPrioritizedEnemy_C_ProvideSingleActor, CallFunc_MakeLiteralName_ReturnValue) == 0x000020, "Member 'EnvQueryContext_BBPrioritizedEnemy_C_ProvideSingleActor::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(EnvQueryContext_BBPrioritizedEnemy_C_ProvideSingleActor, CallFunc_MakeLiteralName_ReturnValue_1) == 0x000028, "Member 'EnvQueryContext_BBPrioritizedEnemy_C_ProvideSingleActor::CallFunc_MakeLiteralName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EnvQueryContext_BBPrioritizedEnemy_C_ProvideSingleActor, CallFunc_GetValueAsObject_ReturnValue) == 0x000030, "Member 'EnvQueryContext_BBPrioritizedEnemy_C_ProvideSingleActor::CallFunc_GetValueAsObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(EnvQueryContext_BBPrioritizedEnemy_C_ProvideSingleActor, CallFunc_GetValueAsObject_ReturnValue_1) == 0x000038, "Member 'EnvQueryContext_BBPrioritizedEnemy_C_ProvideSingleActor::CallFunc_GetValueAsObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EnvQueryContext_BBPrioritizedEnemy_C_ProvideSingleActor, K2Node_DynamicCast_AsActor) == 0x000040, "Member 'EnvQueryContext_BBPrioritizedEnemy_C_ProvideSingleActor::K2Node_DynamicCast_AsActor' has a wrong offset!");
static_assert(offsetof(EnvQueryContext_BBPrioritizedEnemy_C_ProvideSingleActor, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'EnvQueryContext_BBPrioritizedEnemy_C_ProvideSingleActor::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(EnvQueryContext_BBPrioritizedEnemy_C_ProvideSingleActor, K2Node_DynamicCast_AsActor_1) == 0x000050, "Member 'EnvQueryContext_BBPrioritizedEnemy_C_ProvideSingleActor::K2Node_DynamicCast_AsActor_1' has a wrong offset!");
static_assert(offsetof(EnvQueryContext_BBPrioritizedEnemy_C_ProvideSingleActor, K2Node_DynamicCast_bSuccess_1) == 0x000058, "Member 'EnvQueryContext_BBPrioritizedEnemy_C_ProvideSingleActor::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

}

