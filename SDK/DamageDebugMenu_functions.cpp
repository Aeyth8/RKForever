#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DamageDebugMenu

#include "Basic.hpp"

#include "DamageDebugMenu_classes.hpp"
#include "DamageDebugMenu_parameters.hpp"


namespace SDK
{

// Function DamageDebugMenu.DamageDebugMenu_C.OnDamageDebugRecordEntryClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageDebugRecordEntry_C*        EntryClicked                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDamageDebugMenu_C::OnDamageDebugRecordEntryClicked__DelegateSignature(class UDamageDebugRecordEntry_C* EntryClicked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DamageDebugMenu_C", "OnDamageDebugRecordEntryClicked__DelegateSignature");

	Params::DamageDebugMenu_C_OnDamageDebugRecordEntryClicked__DelegateSignature Parms{};

	Parms.EntryClicked = EntryClicked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DamageDebugMenu.DamageDebugMenu_C.ExecuteUbergraph_DamageDebugMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDamageDebugMenu_C::ExecuteUbergraph_DamageDebugMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DamageDebugMenu_C", "ExecuteUbergraph_DamageDebugMenu");

	Params::DamageDebugMenu_C_ExecuteUbergraph_DamageDebugMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DamageDebugMenu.DamageDebugMenu_C.BP_OnExited
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bToSubLayer                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDamageDebugMenu_C::BP_OnExited(bool bToSubLayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DamageDebugMenu_C", "BP_OnExited");

	Params::DamageDebugMenu_C_BP_OnExited Parms{};

	Parms.bToSubLayer = bToSubLayer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DamageDebugMenu.DamageDebugMenu_C.BP_OnEntered
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bFromSubMenu                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDamageDebugMenu_C::BP_OnEntered(bool bFromSubMenu)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DamageDebugMenu_C", "BP_OnEntered");

	Params::DamageDebugMenu_C_BP_OnEntered Parms{};

	Parms.bFromSubMenu = bFromSubMenu;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DamageDebugMenu.DamageDebugMenu_C.BndEvt__Button_127_K2Node_ComponentBoundEvent_125_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UDamageDebugMenu_C::BndEvt__Button_127_K2Node_ComponentBoundEvent_125_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DamageDebugMenu_C", "BndEvt__Button_127_K2Node_ComponentBoundEvent_125_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DamageDebugMenu.DamageDebugMenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDamageDebugMenu_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DamageDebugMenu_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DamageDebugMenu.DamageDebugMenu_C.OnDamageDebugArchiveCleared
// (BlueprintCallable, BlueprintEvent)

void UDamageDebugMenu_C::OnDamageDebugArchiveCleared()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DamageDebugMenu_C", "OnDamageDebugArchiveCleared");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DamageDebugMenu.DamageDebugMenu_C.OnDamageDebugRecordAdded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMarinerDamageDebugRecord*        AddedRecord                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDamageDebugMenu_C::OnDamageDebugRecordAdded(const class UMarinerDamageDebugRecord* AddedRecord)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DamageDebugMenu_C", "OnDamageDebugRecordAdded");

	Params::DamageDebugMenu_C_OnDamageDebugRecordAdded Parms{};

	Parms.AddedRecord = AddedRecord;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DamageDebugMenu.DamageDebugMenu_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDamageDebugMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DamageDebugMenu_C", "Tick");

	Params::DamageDebugMenu_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DamageDebugMenu.DamageDebugMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDamageDebugMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DamageDebugMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DamageDebugMenu.DamageDebugMenu_C.AddDamageDebugRecord
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMarinerDamageDebugRecord*        DamageRecord                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDamageDebugMenu_C::AddDamageDebugRecord(class UMarinerDamageDebugRecord* DamageRecord)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DamageDebugMenu_C", "AddDamageDebugRecord");

	Params::DamageDebugMenu_C_AddDamageDebugRecord Parms{};

	Parms.DamageRecord = DamageRecord;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DamageDebugMenu.DamageDebugMenu_C.SelectDamageDebugRecord
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageDebugRecordEntry_C*        DamageDebugRecordEntry                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDamageDebugMenu_C::SelectDamageDebugRecord(class UDamageDebugRecordEntry_C* DamageDebugRecordEntry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DamageDebugMenu_C", "SelectDamageDebugRecord");

	Params::DamageDebugMenu_C_SelectDamageDebugRecord Parms{};

	Parms.DamageDebugRecordEntry = DamageDebugRecordEntry;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DamageDebugMenu.DamageDebugMenu_C.ReconstructDamageDebugRecordList
// (Public, BlueprintCallable, BlueprintEvent)

void UDamageDebugMenu_C::ReconstructDamageDebugRecordList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DamageDebugMenu_C", "ReconstructDamageDebugRecordList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DamageDebugMenu.DamageDebugMenu_C.CreateDamageDebugRecordEntry
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMarinerDamageDebugRecord*        DamageRecord                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   DamageRecordIndex                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDamageDebugMenu_C::CreateDamageDebugRecordEntry(class UMarinerDamageDebugRecord*& DamageRecord, int32 DamageRecordIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DamageDebugMenu_C", "CreateDamageDebugRecordEntry");

	Params::DamageDebugMenu_C_CreateDamageDebugRecordEntry Parms{};

	Parms.DamageRecord = DamageRecord;
	Parms.DamageRecordIndex = DamageRecordIndex;

	UObject::ProcessEvent(Func, &Parms);

	DamageRecord = Parms.DamageRecord;
}


// Function DamageDebugMenu.DamageDebugMenu_C.GetLegendGridVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UDamageDebugMenu_C::GetLegendGridVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DamageDebugMenu_C", "GetLegendGridVisibility");

	Params::DamageDebugMenu_C_GetLegendGridVisibility Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function DamageDebugMenu.DamageDebugMenu_C.GetAOEOnlyLegendFieldVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UDamageDebugMenu_C::GetAOEOnlyLegendFieldVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DamageDebugMenu_C", "GetAOEOnlyLegendFieldVisibility");

	Params::DamageDebugMenu_C_GetAOEOnlyLegendFieldVisibility Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function DamageDebugMenu.DamageDebugMenu_C.SetSelectedDamageDebugRecordInfoWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      SelectedDamageDebugRecordInfo_0                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDamageDebugMenu_C::SetSelectedDamageDebugRecordInfoWidget(class UUserWidget* SelectedDamageDebugRecordInfo_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DamageDebugMenu_C", "SetSelectedDamageDebugRecordInfoWidget");

	Params::DamageDebugMenu_C_SetSelectedDamageDebugRecordInfoWidget Parms{};

	Parms.SelectedDamageDebugRecordInfo_0 = SelectedDamageDebugRecordInfo_0;

	UObject::ProcessEvent(Func, &Parms);
}

}

