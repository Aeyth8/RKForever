#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BlastPassFlame

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BlastPassFlame.BlastPassFlame_C
// 0x0018 (0x0248 - 0x0230)
class UBlastPassFlame_C final : public UUserWidget
{
public:
	class UImage*                                 TierImage;                                         // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          FirstInit;                                         // 0x0238(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_239[0x3];                                      // 0x0239(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LastTier;                                          // 0x023C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LastPurchased;                                     // 0x0240(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void Set_Tier(int32 Tier, bool Purchased);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BlastPassFlame_C">();
	}
	static class UBlastPassFlame_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBlastPassFlame_C>();
	}
};
static_assert(alignof(UBlastPassFlame_C) == 0x000008, "Wrong alignment on UBlastPassFlame_C");
static_assert(sizeof(UBlastPassFlame_C) == 0x000248, "Wrong size on UBlastPassFlame_C");
static_assert(offsetof(UBlastPassFlame_C, TierImage) == 0x000230, "Member 'UBlastPassFlame_C::TierImage' has a wrong offset!");
static_assert(offsetof(UBlastPassFlame_C, FirstInit) == 0x000238, "Member 'UBlastPassFlame_C::FirstInit' has a wrong offset!");
static_assert(offsetof(UBlastPassFlame_C, LastTier) == 0x00023C, "Member 'UBlastPassFlame_C::LastTier' has a wrong offset!");
static_assert(offsetof(UBlastPassFlame_C, LastPurchased) == 0x000240, "Member 'UBlastPassFlame_C::LastPurchased' has a wrong offset!");

}

