#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CreditsMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Mariner_structs.hpp"
#include "Mariner_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CreditsMenu.CreditsMenu_C
// 0x0038 (0x0518 - 0x04E0)
class UCreditsMenu_C final : public UMarinerMenu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UDefaultPrompt_C*                       BackPrompt;                                        // 0x04E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           CreditsPane;                                       // 0x04F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Logo;                                              // 0x04F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              LogoPane;                                          // 0x0500(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         CurrentPositionY;                                  // 0x0508(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Speed;                                             // 0x050C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InputMultiplier;                                   // 0x0510(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StartingPositionY;                                 // 0x0514(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CreditsMenu(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BP_OnEntered(bool bFromSubMenu);
	void BuildCredits();
	bool HandleInput(EMarinerInputActions InInput);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	bool HandleInputPressed(EMarinerInputActions InInput);
	bool HandleInputReleased(EMarinerInputActions InInput);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CreditsMenu_C">();
	}
	static class UCreditsMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCreditsMenu_C>();
	}
};
static_assert(alignof(UCreditsMenu_C) == 0x000008, "Wrong alignment on UCreditsMenu_C");
static_assert(sizeof(UCreditsMenu_C) == 0x000518, "Wrong size on UCreditsMenu_C");
static_assert(offsetof(UCreditsMenu_C, UberGraphFrame) == 0x0004E0, "Member 'UCreditsMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCreditsMenu_C, BackPrompt) == 0x0004E8, "Member 'UCreditsMenu_C::BackPrompt' has a wrong offset!");
static_assert(offsetof(UCreditsMenu_C, CreditsPane) == 0x0004F0, "Member 'UCreditsMenu_C::CreditsPane' has a wrong offset!");
static_assert(offsetof(UCreditsMenu_C, Logo) == 0x0004F8, "Member 'UCreditsMenu_C::Logo' has a wrong offset!");
static_assert(offsetof(UCreditsMenu_C, LogoPane) == 0x000500, "Member 'UCreditsMenu_C::LogoPane' has a wrong offset!");
static_assert(offsetof(UCreditsMenu_C, CurrentPositionY) == 0x000508, "Member 'UCreditsMenu_C::CurrentPositionY' has a wrong offset!");
static_assert(offsetof(UCreditsMenu_C, Speed) == 0x00050C, "Member 'UCreditsMenu_C::Speed' has a wrong offset!");
static_assert(offsetof(UCreditsMenu_C, InputMultiplier) == 0x000510, "Member 'UCreditsMenu_C::InputMultiplier' has a wrong offset!");
static_assert(offsetof(UCreditsMenu_C, StartingPositionY) == 0x000514, "Member 'UCreditsMenu_C::StartingPositionY' has a wrong offset!");

}

