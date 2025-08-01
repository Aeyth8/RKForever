#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CharacterCommonGuttered

#include "Basic.hpp"

#include "CharacterCommonGuttered_classes.hpp"
#include "CharacterCommonGuttered_parameters.hpp"


namespace SDK
{

// Function CharacterCommonGuttered.CharacterCommonGuttered_C.OnIconRefresh__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCharacterCommonGuttered_C::OnIconRefresh__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCommonGuttered_C", "OnIconRefresh__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterCommonGuttered.CharacterCommonGuttered_C.PopulateTeam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMarinerCharacter*                Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterCommonGuttered_C::PopulateTeam(class AMarinerCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCommonGuttered_C", "PopulateTeam");

	Params::CharacterCommonGuttered_C_PopulateTeam Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharacterCommonGuttered.CharacterCommonGuttered_C.SetCirclePinRenderAngle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   RenderAngle                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterCommonGuttered_C::SetCirclePinRenderAngle(float RenderAngle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCommonGuttered_C", "SetCirclePinRenderAngle");

	Params::CharacterCommonGuttered_C_SetCirclePinRenderAngle Parms{};

	Parms.RenderAngle = RenderAngle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharacterCommonGuttered.CharacterCommonGuttered_C.SetIconBrush
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                      IconBrush_0                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UCharacterCommonGuttered_C::SetIconBrush(const struct FSlateBrush& IconBrush_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCommonGuttered_C", "SetIconBrush");

	Params::CharacterCommonGuttered_C_SetIconBrush Parms{};

	Parms.IconBrush_0 = std::move(IconBrush_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharacterCommonGuttered.CharacterCommonGuttered_C.PlayFlashAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UCharacterCommonGuttered_C::PlayFlashAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCommonGuttered_C", "PlayFlashAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterCommonGuttered.CharacterCommonGuttered_C.SetCharacterBrush
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                      CharacterBrush_0                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UCharacterCommonGuttered_C::SetCharacterBrush(const struct FSlateBrush& CharacterBrush_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCommonGuttered_C", "SetCharacterBrush");

	Params::CharacterCommonGuttered_C_SetCharacterBrush Parms{};

	Parms.CharacterBrush_0 = std::move(CharacterBrush_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharacterCommonGuttered.CharacterCommonGuttered_C.RefreshIcon
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCharacterCommonGuttered_C::RefreshIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCommonGuttered_C", "RefreshIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterCommonGuttered.CharacterCommonGuttered_C.SetGameModeWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           GameModeWidget_0                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMarinerPlayerState*              PlayerState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterCommonGuttered_C::SetGameModeWidget(class UClass* GameModeWidget_0, class AMarinerPlayerState* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCommonGuttered_C", "SetGameModeWidget");

	Params::CharacterCommonGuttered_C_SetGameModeWidget Parms{};

	Parms.GameModeWidget_0 = GameModeWidget_0;
	Parms.PlayerState = PlayerState;

	UObject::ProcessEvent(Func, &Parms);
}

}

