#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ServerListElement

#include "Basic.hpp"

#include "ServerListElement_classes.hpp"
#include "ServerListElement_parameters.hpp"


namespace SDK
{

// Function ServerListElement.ServerListElement_C.ExecuteUbergraph_ServerListElement
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UServerListElement_C::ExecuteUbergraph_ServerListElement(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ServerListElement_C", "ExecuteUbergraph_ServerListElement");

	Params::ServerListElement_C_ExecuteUbergraph_ServerListElement Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ServerListElement.ServerListElement_C.OnServerWidgetCreated
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Name_0                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                             Ping                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                             PlayerCount_0                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UServerListElement_C::OnServerWidgetCreated(const class FText& Name_0, const class FText& Ping, const class FText& PlayerCount_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ServerListElement_C", "OnServerWidgetCreated");

	Params::ServerListElement_C_OnServerWidgetCreated Parms{};

	Parms.Name_0 = std::move(Name_0);
	Parms.Ping = std::move(Ping);
	Parms.PlayerCount_0 = std::move(PlayerCount_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ServerListElement.ServerListElement_C.BndEvt__Button_79_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UServerListElement_C::BndEvt__Button_79_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ServerListElement_C", "BndEvt__Button_79_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ServerListElement.ServerListElement_C.HandleInput
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMarinerInputActions                    InInput                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UServerListElement_C::HandleInput(EMarinerInputActions InInput)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ServerListElement_C", "HandleInput");

	Params::ServerListElement_C_HandleInput Parms{};

	Parms.InInput = InInput;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

