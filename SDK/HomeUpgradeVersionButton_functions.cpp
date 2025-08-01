#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HomeUpgradeVersionButton

#include "Basic.hpp"

#include "HomeUpgradeVersionButton_classes.hpp"
#include "HomeUpgradeVersionButton_parameters.hpp"


namespace SDK
{

// Function HomeUpgradeVersionButton.HomeUpgradeVersionButton_C.GetAssets
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FMarinerLayeredButtonAssets      ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, ContainsInstancedReference)

struct FMarinerLayeredButtonAssets UHomeUpgradeVersionButton_C::GetAssets() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HomeUpgradeVersionButton_C", "GetAssets");

	Params::HomeUpgradeVersionButton_C_GetAssets Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

