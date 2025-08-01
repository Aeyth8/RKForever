#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Flux_Primary_Guiding

#include "Basic.hpp"

#include "Mariner_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_Flux_Primary_Guiding.GC_Flux_Primary_Guiding_C
// 0x0008 (0x0338 - 0x0330)
class AGC_Flux_Primary_Guiding_C final : public AMarinerCueNotify_ManagedCharacterEffect
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Flux_Primary_Guiding_C">();
	}
	static class AGC_Flux_Primary_Guiding_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGC_Flux_Primary_Guiding_C>();
	}
};
static_assert(alignof(AGC_Flux_Primary_Guiding_C) == 0x000008, "Wrong alignment on AGC_Flux_Primary_Guiding_C");
static_assert(sizeof(AGC_Flux_Primary_Guiding_C) == 0x000338, "Wrong size on AGC_Flux_Primary_Guiding_C");
static_assert(offsetof(AGC_Flux_Primary_Guiding_C, DefaultSceneRoot) == 0x000330, "Member 'AGC_Flux_Primary_Guiding_C::DefaultSceneRoot' has a wrong offset!");

}

