#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Item_Snowball_DebuffRemoval

#include "Basic.hpp"

#include "Mariner_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_Item_Snowball_DebuffRemoval.GC_Item_Snowball_DebuffRemoval_C
// 0x0000 (0x00A0 - 0x00A0)
class UGC_Item_Snowball_DebuffRemoval_C final : public UMarinerCueNotify_FireAndForgetCharacterEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Item_Snowball_DebuffRemoval_C">();
	}
	static class UGC_Item_Snowball_DebuffRemoval_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGC_Item_Snowball_DebuffRemoval_C>();
	}
};
static_assert(alignof(UGC_Item_Snowball_DebuffRemoval_C) == 0x000008, "Wrong alignment on UGC_Item_Snowball_DebuffRemoval_C");
static_assert(sizeof(UGC_Item_Snowball_DebuffRemoval_C) == 0x0000A0, "Wrong size on UGC_Item_Snowball_DebuffRemoval_C");

}

