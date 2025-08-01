#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MenuTooltipBase

#include "Basic.hpp"

#include "MenuTooltipBase_classes.hpp"
#include "MenuTooltipBase_parameters.hpp"


namespace SDK
{

// Function MenuTooltipBase.MenuTooltipBase_C.ExecuteUbergraph_MenuTooltipBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMenuTooltipBase_C::ExecuteUbergraph_MenuTooltipBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MenuTooltipBase_C", "ExecuteUbergraph_MenuTooltipBase");

	Params::MenuTooltipBase_C_ExecuteUbergraph_MenuTooltipBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MenuTooltipBase.MenuTooltipBase_C.EnableHeader
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bEnabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMenuTooltipBase_C::EnableHeader(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MenuTooltipBase_C", "EnableHeader");

	Params::MenuTooltipBase_C_EnableHeader Parms{};

	Parms.bEnabled = bEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MenuTooltipBase.MenuTooltipBase_C.Populate
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             InDescription                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMenuTooltipBase_C::Populate(const class FText& InDescription)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MenuTooltipBase_C", "Populate");

	Params::MenuTooltipBase_C_Populate Parms{};

	Parms.InDescription = std::move(InDescription);

	UObject::ProcessEvent(Func, &Parms);
}

}

