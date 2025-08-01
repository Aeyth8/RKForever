#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CustomComboBox

#include "Basic.hpp"

#include "CustomComboBox_classes.hpp"
#include "CustomComboBox_parameters.hpp"


namespace SDK
{

// Function CustomComboBox.CustomComboBox_C.GetAssets
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FMarinerLayeredButtonAssets      ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, ContainsInstancedReference)

struct FMarinerLayeredButtonAssets UCustomComboBox_C::GetAssets() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CustomComboBox_C", "GetAssets");

	Params::CustomComboBox_C_GetAssets Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

