#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PrimaryStackButtonWidget

#include "Basic.hpp"

#include "PrimaryStackButtonWidget_classes.hpp"
#include "PrimaryStackButtonWidget_parameters.hpp"


namespace SDK
{

// Function PrimaryStackButtonWidget.PrimaryStackButtonWidget_C.GetAssets
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FMarinerMenuStackButtonAssets    ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, ContainsInstancedReference)

struct FMarinerMenuStackButtonAssets UPrimaryStackButtonWidget_C::GetAssets() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PrimaryStackButtonWidget_C", "GetAssets");

	Params::PrimaryStackButtonWidget_C_GetAssets Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

