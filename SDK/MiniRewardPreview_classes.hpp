#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MiniRewardPreview

#include "Basic.hpp"

#include "Mariner_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MiniRewardPreview.MiniRewardPreview_C
// 0x0050 (0x0310 - 0x02C0)
class UMiniRewardPreview_C final : public UMarinerMiniRewardPreview
{
public:
	class USizeBox*                               BlastPassGroup;                                    // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             BlastPassRewardText;                               // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Bound_ItemType;                                    // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               CurrencyGroup;                                     // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             CurrencyText;                                      // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               HorizontalBox;                                     // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               ItemGroup;                                         // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PipMaterial;                                       // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Rocketfuel;                                        // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RocketParts;                                       // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void Init_CurrencyReward(int32 CurrencyNum, bool bPremium);
	void InitBlastPassReward(float BlastPassPips);
	void InitItemReward(const struct FMangoItem& Item);
	void Set_Item_Type(const struct FMangoItem& Item);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MiniRewardPreview_C">();
	}
	static class UMiniRewardPreview_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMiniRewardPreview_C>();
	}
};
static_assert(alignof(UMiniRewardPreview_C) == 0x000008, "Wrong alignment on UMiniRewardPreview_C");
static_assert(sizeof(UMiniRewardPreview_C) == 0x000310, "Wrong size on UMiniRewardPreview_C");
static_assert(offsetof(UMiniRewardPreview_C, BlastPassGroup) == 0x0002C0, "Member 'UMiniRewardPreview_C::BlastPassGroup' has a wrong offset!");
static_assert(offsetof(UMiniRewardPreview_C, BlastPassRewardText) == 0x0002C8, "Member 'UMiniRewardPreview_C::BlastPassRewardText' has a wrong offset!");
static_assert(offsetof(UMiniRewardPreview_C, Bound_ItemType) == 0x0002D0, "Member 'UMiniRewardPreview_C::Bound_ItemType' has a wrong offset!");
static_assert(offsetof(UMiniRewardPreview_C, CurrencyGroup) == 0x0002D8, "Member 'UMiniRewardPreview_C::CurrencyGroup' has a wrong offset!");
static_assert(offsetof(UMiniRewardPreview_C, CurrencyText) == 0x0002E0, "Member 'UMiniRewardPreview_C::CurrencyText' has a wrong offset!");
static_assert(offsetof(UMiniRewardPreview_C, HorizontalBox) == 0x0002E8, "Member 'UMiniRewardPreview_C::HorizontalBox' has a wrong offset!");
static_assert(offsetof(UMiniRewardPreview_C, ItemGroup) == 0x0002F0, "Member 'UMiniRewardPreview_C::ItemGroup' has a wrong offset!");
static_assert(offsetof(UMiniRewardPreview_C, PipMaterial) == 0x0002F8, "Member 'UMiniRewardPreview_C::PipMaterial' has a wrong offset!");
static_assert(offsetof(UMiniRewardPreview_C, Rocketfuel) == 0x000300, "Member 'UMiniRewardPreview_C::Rocketfuel' has a wrong offset!");
static_assert(offsetof(UMiniRewardPreview_C, RocketParts) == 0x000308, "Member 'UMiniRewardPreview_C::RocketParts' has a wrong offset!");

}

