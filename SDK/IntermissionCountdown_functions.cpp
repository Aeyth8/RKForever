#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IntermissionCountdown

#include "Basic.hpp"

#include "IntermissionCountdown_classes.hpp"
#include "IntermissionCountdown_parameters.hpp"


namespace SDK
{

// Function IntermissionCountdown.IntermissionCountdown_C.ExecuteUbergraph_IntermissionCountdown
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIntermissionCountdown_C::ExecuteUbergraph_IntermissionCountdown(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IntermissionCountdown_C", "ExecuteUbergraph_IntermissionCountdown");

	Params::IntermissionCountdown_C_ExecuteUbergraph_IntermissionCountdown Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function IntermissionCountdown.IntermissionCountdown_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIntermissionCountdown_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("IntermissionCountdown_C", "Tick");

	Params::IntermissionCountdown_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

