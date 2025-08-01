#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RadialFillProgressBar

#include "Basic.hpp"

#include "RadialFillProgressBar_classes.hpp"
#include "RadialFillProgressBar_parameters.hpp"


namespace SDK
{

// Function RadialFillProgressBar.RadialFillProgressBar_C.ExecuteUbergraph_RadialFillProgressBar
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URadialFillProgressBar_C::ExecuteUbergraph_RadialFillProgressBar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadialFillProgressBar_C", "ExecuteUbergraph_RadialFillProgressBar");

	Params::RadialFillProgressBar_C_ExecuteUbergraph_RadialFillProgressBar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RadialFillProgressBar.RadialFillProgressBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URadialFillProgressBar_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadialFillProgressBar_C", "PreConstruct");

	Params::RadialFillProgressBar_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RadialFillProgressBar.RadialFillProgressBar_C.Set Progress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Progress_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URadialFillProgressBar_C::Set_Progress(float Progress_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadialFillProgressBar_C", "Set Progress");

	Params::RadialFillProgressBar_C_Set_Progress Parms{};

	Parms.Progress_0 = Progress_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RadialFillProgressBar.RadialFillProgressBar_C.Get Progress
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Progress_0                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URadialFillProgressBar_C::Get_Progress(float* Progress_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RadialFillProgressBar_C", "Get Progress");

	Params::RadialFillProgressBar_C_Get_Progress Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Progress_0 != nullptr)
		*Progress_0 = Parms.Progress_0;
}

}

