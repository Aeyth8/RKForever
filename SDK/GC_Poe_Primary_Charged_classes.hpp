#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Poe_Primary_Charged

#include "Basic.hpp"

#include "Mariner_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_Poe_Primary_Charged.GC_Poe_Primary_Charged_C
// 0x0000 (0x00C8 - 0x00C8)
class UGC_Poe_Primary_Charged_C final : public UMarinerCueNotify_WeaponEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Poe_Primary_Charged_C">();
	}
	static class UGC_Poe_Primary_Charged_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGC_Poe_Primary_Charged_C>();
	}
};
static_assert(alignof(UGC_Poe_Primary_Charged_C) == 0x000008, "Wrong alignment on UGC_Poe_Primary_Charged_C");
static_assert(sizeof(UGC_Poe_Primary_Charged_C) == 0x0000C8, "Wrong size on UGC_Poe_Primary_Charged_C");

}

