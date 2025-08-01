#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChallengeGroup

#include "Basic.hpp"

#include "ChallengeGroup_classes.hpp"
#include "ChallengeGroup_parameters.hpp"


namespace SDK
{

// Function ChallengeGroup.ChallengeGroup_C.ProgressAnimationComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UChallengeGroup_C::ProgressAnimationComplete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeGroup_C", "ProgressAnimationComplete__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChallengeGroup.ChallengeGroup_C.ExecuteUbergraph_ChallengeGroup
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChallengeGroup_C::ExecuteUbergraph_ChallengeGroup(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeGroup_C", "ExecuteUbergraph_ChallengeGroup");

	Params::ChallengeGroup_C_ExecuteUbergraph_ChallengeGroup Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChallengeGroup.ChallengeGroup_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UChallengeGroup_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeGroup_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChallengeGroup.ChallengeGroup_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChallengeGroup_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeGroup_C", "PreConstruct");

	Params::ChallengeGroup_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChallengeGroup.ChallengeGroup_C.AddChallenge
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMangoQuestDescription           Quest                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    AllowInput                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UChallengeButton_C*               ButtonInstance                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChallengeGroup_C::AddChallenge(struct FMangoQuestDescription& Quest, bool AllowInput, class UChallengeButton_C** ButtonInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeGroup_C", "AddChallenge");

	Params::ChallengeGroup_C_AddChallenge Parms{};

	Parms.Quest = std::move(Quest);
	Parms.AllowInput = AllowInput;

	UObject::ProcessEvent(Func, &Parms);

	Quest = std::move(Parms.Quest);

	if (ButtonInstance != nullptr)
		*ButtonInstance = Parms.ButtonInstance;
}


// Function ChallengeGroup.ChallengeGroup_C.ClearChallenges
// (Public, BlueprintCallable, BlueprintEvent)

void UChallengeGroup_C::ClearChallenges()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeGroup_C", "ClearChallenges");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChallengeGroup.ChallengeGroup_C.DummyCallback
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                             KeyPressed                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UChallengeGroup_C::DummyCallback(struct FKey& KeyPressed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeGroup_C", "DummyCallback");

	Params::ChallengeGroup_C_DummyCallback Parms{};

	Parms.KeyPressed = std::move(KeyPressed);

	UObject::ProcessEvent(Func, &Parms);

	KeyPressed = std::move(Parms.KeyPressed);
}


// Function ChallengeGroup.ChallengeGroup_C.RefreshChallenge
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMangoQuestDescription           Quest                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UChallengeGroup_C::RefreshChallenge(struct FMangoQuestDescription& Quest)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeGroup_C", "RefreshChallenge");

	Params::ChallengeGroup_C_RefreshChallenge Parms{};

	Parms.Quest = std::move(Quest);

	UObject::ProcessEvent(Func, &Parms);

	Quest = std::move(Parms.Quest);
}


// Function ChallengeGroup.ChallengeGroup_C.GetChallenge
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMangoQuestSlot                         Slot_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UChallengeButton_C*               Widget                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChallengeGroup_C::GetChallenge(EMangoQuestSlot Slot_0, class UChallengeButton_C** Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeGroup_C", "GetChallenge");

	Params::ChallengeGroup_C_GetChallenge Parms{};

	Parms.Slot_0 = Slot_0;

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;
}


// Function ChallengeGroup.ChallengeGroup_C.UpdateHeader
// (Public, BlueprintCallable, BlueprintEvent)

void UChallengeGroup_C::UpdateHeader()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeGroup_C", "UpdateHeader");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChallengeGroup.ChallengeGroup_C.AddOrRefreshChallenge
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMangoQuestDescription           Quest                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    AllowInput                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChallengeGroup_C::AddOrRefreshChallenge(struct FMangoQuestDescription& Quest, bool AllowInput)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeGroup_C", "AddOrRefreshChallenge");

	Params::ChallengeGroup_C_AddOrRefreshChallenge Parms{};

	Parms.Quest = std::move(Quest);
	Parms.AllowInput = AllowInput;

	UObject::ProcessEvent(Func, &Parms);

	Quest = std::move(Parms.Quest);
}

}

