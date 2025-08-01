#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RewardPreviewWidget

#include "Basic.hpp"

#include "RewardPreviewWidget_classes.hpp"
#include "RewardPreviewWidget_parameters.hpp"


namespace SDK
{

// Function RewardPreviewWidget.RewardPreviewWidget_C.ExecuteUbergraph_RewardPreviewWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewardPreviewWidget_C::ExecuteUbergraph_RewardPreviewWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardPreviewWidget_C", "ExecuteUbergraph_RewardPreviewWidget");

	Params::RewardPreviewWidget_C_ExecuteUbergraph_RewardPreviewWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RewardPreviewWidget.RewardPreviewWidget_C.PopulateRewardPreview
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FMangoReward                     Reward                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void URewardPreviewWidget_C::PopulateRewardPreview(const struct FMangoReward& Reward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardPreviewWidget_C", "PopulateRewardPreview");

	Params::RewardPreviewWidget_C_PopulateRewardPreview Parms{};

	Parms.Reward = std::move(Reward);

	UObject::ProcessEvent(Func, &Parms);
}


// Function RewardPreviewWidget.RewardPreviewWidget_C.PopulateQuestReward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMangoQuestReward                Reward                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void URewardPreviewWidget_C::PopulateQuestReward(const struct FMangoQuestReward& Reward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardPreviewWidget_C", "PopulateQuestReward");

	Params::RewardPreviewWidget_C_PopulateQuestReward Parms{};

	Parms.Reward = std::move(Reward);

	UObject::ProcessEvent(Func, &Parms);
}


// Function RewardPreviewWidget.RewardPreviewWidget_C.PopulateXP
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Xp                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewardPreviewWidget_C::PopulateXP(int32 Xp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardPreviewWidget_C", "PopulateXP");

	Params::RewardPreviewWidget_C_PopulateXP Parms{};

	Parms.Xp = Xp;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RewardPreviewWidget.RewardPreviewWidget_C.PopulateRocketbucks
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RocketBucks                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewardPreviewWidget_C::PopulateRocketbucks(int32 RocketBucks)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardPreviewWidget_C", "PopulateRocketbucks");

	Params::RewardPreviewWidget_C_PopulateRocketbucks Parms{};

	Parms.RocketBucks = RocketBucks;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RewardPreviewWidget.RewardPreviewWidget_C.PopulateRocketparts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RocketParts                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewardPreviewWidget_C::PopulateRocketparts(int32 RocketParts)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardPreviewWidget_C", "PopulateRocketparts");

	Params::RewardPreviewWidget_C_PopulateRocketparts Parms{};

	Parms.RocketParts = RocketParts;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RewardPreviewWidget.RewardPreviewWidget_C.PopulateItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMangoItem                       Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   DupRocketpartsValue                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewardPreviewWidget_C::PopulateItem(const struct FMangoItem& Item, int32 DupRocketpartsValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardPreviewWidget_C", "PopulateItem");

	Params::RewardPreviewWidget_C_PopulateItem Parms{};

	Parms.Item = std::move(Item);
	Parms.DupRocketpartsValue = DupRocketpartsValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RewardPreviewWidget.RewardPreviewWidget_C.PopulateNativeOffer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMangoNativeOffer                Nativeoffer                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void URewardPreviewWidget_C::PopulateNativeOffer(const struct FMangoNativeOffer& Nativeoffer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardPreviewWidget_C", "PopulateNativeOffer");

	Params::RewardPreviewWidget_C_PopulateNativeOffer Parms{};

	Parms.Nativeoffer = std::move(Nativeoffer);

	UObject::ProcessEvent(Func, &Parms);
}


// Function RewardPreviewWidget.RewardPreviewWidget_C.PopulateDuplicateAssets
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PartsValue_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewardPreviewWidget_C::PopulateDuplicateAssets(int32 PartsValue_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardPreviewWidget_C", "PopulateDuplicateAssets");

	Params::RewardPreviewWidget_C_PopulateDuplicateAssets Parms{};

	Parms.PartsValue_0 = PartsValue_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RewardPreviewWidget.RewardPreviewWidget_C.PopulateItemType
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMangoItem                       Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void URewardPreviewWidget_C::PopulateItemType(const struct FMangoItem& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardPreviewWidget_C", "PopulateItemType");

	Params::RewardPreviewWidget_C_PopulateItemType Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);
}


// Function RewardPreviewWidget.RewardPreviewWidget_C.PopulateProgressionReward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMangoRewards                    Reward                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void URewardPreviewWidget_C::PopulateProgressionReward(const struct FMangoRewards& Reward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardPreviewWidget_C", "PopulateProgressionReward");

	Params::RewardPreviewWidget_C_PopulateProgressionReward Parms{};

	Parms.Reward = std::move(Reward);

	UObject::ProcessEvent(Func, &Parms);
}


// Function RewardPreviewWidget.RewardPreviewWidget_C.PopulateBlastPassReward
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   BlastBarProgress                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewardPreviewWidget_C::PopulateBlastPassReward(int32 BlastBarProgress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardPreviewWidget_C", "PopulateBlastPassReward");

	Params::RewardPreviewWidget_C_PopulateBlastPassReward Parms{};

	Parms.BlastBarProgress = BlastBarProgress;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RewardPreviewWidget.RewardPreviewWidget_C.PopulateBlastPass
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           OfferId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FMangoOrderBlastpass             BlastPassOrder                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void URewardPreviewWidget_C::PopulateBlastPass(const class FString& OfferId, const struct FMangoOrderBlastpass& BlastPassOrder)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardPreviewWidget_C", "PopulateBlastPass");

	Params::RewardPreviewWidget_C_PopulateBlastPass Parms{};

	Parms.OfferId = std::move(OfferId);
	Parms.BlastPassOrder = std::move(BlastPassOrder);

	UObject::ProcessEvent(Func, &Parms);
}


// Function RewardPreviewWidget.RewardPreviewWidget_C.PopulateXPBonus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMangoBlastPassXPBonusType              Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Percent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewardPreviewWidget_C::PopulateXPBonus(EMangoBlastPassXPBonusType Type, int32 Percent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardPreviewWidget_C", "PopulateXPBonus");

	Params::RewardPreviewWidget_C_PopulateXPBonus Parms{};

	Parms.Type = Type;
	Parms.Percent = Percent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RewardPreviewWidget.RewardPreviewWidget_C.Populate Mango Reward
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMangoReward                     Reward                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void URewardPreviewWidget_C::Populate_Mango_Reward(const struct FMangoReward& Reward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardPreviewWidget_C", "Populate Mango Reward");

	Params::RewardPreviewWidget_C_Populate_Mango_Reward Parms{};

	Parms.Reward = std::move(Reward);

	UObject::ProcessEvent(Func, &Parms);
}


// Function RewardPreviewWidget.RewardPreviewWidget_C.GetRocketbucksIcon
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   RocketBucks                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                      Icon                                                   (Parm, OutParm)

void URewardPreviewWidget_C::GetRocketbucksIcon(int32 RocketBucks, struct FSlateBrush* Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardPreviewWidget_C", "GetRocketbucksIcon");

	Params::RewardPreviewWidget_C_GetRocketbucksIcon Parms{};

	Parms.RocketBucks = RocketBucks;

	UObject::ProcessEvent(Func, &Parms);

	if (Icon != nullptr)
		*Icon = std::move(Parms.Icon);
}


// Function RewardPreviewWidget.RewardPreviewWidget_C.CalculateBlastPassPips
// (Public, BlueprintCallable, BlueprintEvent)

void URewardPreviewWidget_C::CalculateBlastPassPips()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardPreviewWidget_C", "CalculateBlastPassPips");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RewardPreviewWidget.RewardPreviewWidget_C.GetAssets
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FMarinerLayeredButtonAssets      ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, ContainsInstancedReference)

struct FMarinerLayeredButtonAssets URewardPreviewWidget_C::GetAssets() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardPreviewWidget_C", "GetAssets");

	Params::RewardPreviewWidget_C_GetAssets Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

