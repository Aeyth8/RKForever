#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RocketTotem

#include "Basic.hpp"

#include "RocketTotem_classes.hpp"
#include "RocketTotem_parameters.hpp"


namespace SDK
{

// Function RocketTotem.RocketTotem_C.ExecuteUbergraph_RocketTotem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARocketTotem_C::ExecuteUbergraph_RocketTotem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RocketTotem_C", "ExecuteUbergraph_RocketTotem");

	Params::RocketTotem_C_ExecuteUbergraph_RocketTotem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RocketTotem.RocketTotem_C.OnRefreshTotem
// (Event, Protected, BlueprintEvent)

void ARocketTotem_C::OnRefreshTotem()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RocketTotem_C", "OnRefreshTotem");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RocketTotem.RocketTotem_C.CheckViewAngle
// (Public, BlueprintCallable, BlueprintEvent)

void ARocketTotem_C::CheckViewAngle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RocketTotem_C", "CheckViewAngle");

	UObject::ProcessEvent(Func, nullptr);
}

}

