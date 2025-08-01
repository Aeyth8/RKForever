#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CharacterBundleWidget

#include "Basic.hpp"

#include "CharacterBundleWidget_classes.hpp"
#include "CharacterBundleWidget_parameters.hpp"


namespace SDK
{

// Function CharacterBundleWidget.CharacterBundleWidget_C.ExecuteUbergraph_CharacterBundleWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterBundleWidget_C::ExecuteUbergraph_CharacterBundleWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterBundleWidget_C", "ExecuteUbergraph_CharacterBundleWidget");

	Params::CharacterBundleWidget_C_ExecuteUbergraph_CharacterBundleWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharacterBundleWidget.CharacterBundleWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCharacterBundleWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterBundleWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterBundleWidget.CharacterBundleWidget_C.PopulateCharacter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMarinerPlayableCharacter*        Character_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterBundleWidget_C::PopulateCharacter(class UMarinerPlayableCharacter* Character_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterBundleWidget_C", "PopulateCharacter");

	Params::CharacterBundleWidget_C_PopulateCharacter Parms{};

	Parms.Character_0 = Character_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharacterBundleWidget.CharacterBundleWidget_C.GetCurrentCharacterPurchaseOffer
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMangoNativeOffer                Nativeoffer                                            (Parm, OutParm)

void UCharacterBundleWidget_C::GetCurrentCharacterPurchaseOffer(struct FMangoNativeOffer* Nativeoffer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterBundleWidget_C", "GetCurrentCharacterPurchaseOffer");

	Params::CharacterBundleWidget_C_GetCurrentCharacterPurchaseOffer Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Nativeoffer != nullptr)
		*Nativeoffer = std::move(Parms.Nativeoffer);
}


// Function CharacterBundleWidget.CharacterBundleWidget_C.OnCharacterPurchase
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMarinerLayeredButton*            ButtonInstance                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterBundleWidget_C::OnCharacterPurchase(class UMarinerLayeredButton* ButtonInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterBundleWidget_C", "OnCharacterPurchase");

	Params::CharacterBundleWidget_C_OnCharacterPurchase Parms{};

	Parms.ButtonInstance = ButtonInstance;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharacterBundleWidget.CharacterBundleWidget_C.GetAssets
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FMarinerLayeredButtonAssets      ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, ContainsInstancedReference)

struct FMarinerLayeredButtonAssets UCharacterBundleWidget_C::GetAssets() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterBundleWidget_C", "GetAssets");

	Params::CharacterBundleWidget_C_GetAssets Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

