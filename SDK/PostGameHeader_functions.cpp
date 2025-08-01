#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PostGameHeader

#include "Basic.hpp"

#include "PostGameHeader_classes.hpp"
#include "PostGameHeader_parameters.hpp"


namespace SDK
{

// Function PostGameHeader.PostGameHeader_C.ExecuteUbergraph_PostGameHeader
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPostGameHeader_C::ExecuteUbergraph_PostGameHeader(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PostGameHeader_C", "ExecuteUbergraph_PostGameHeader");

	Params::PostGameHeader_C_ExecuteUbergraph_PostGameHeader Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PostGameHeader.PostGameHeader_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPostGameHeader_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PostGameHeader_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PostGameHeader.PostGameHeader_C.HandleRocketBotAttackStates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMarinerGameOutcome                     GameOutcome                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPostGameHeader_C::HandleRocketBotAttackStates(EMarinerGameOutcome GameOutcome)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PostGameHeader_C", "HandleRocketBotAttackStates");

	Params::PostGameHeader_C_HandleRocketBotAttackStates Parms{};

	Parms.GameOutcome = GameOutcome;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PostGameHeader.PostGameHeader_C.HandleStockStates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMarinerGameOutcome                     GameOutcome                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPostGameHeader_C::HandleStockStates(EMarinerGameOutcome GameOutcome)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PostGameHeader_C", "HandleStockStates");

	Params::PostGameHeader_C_HandleStockStates Parms{};

	Parms.GameOutcome = GameOutcome;

	UObject::ProcessEvent(Func, &Parms);
}

}

