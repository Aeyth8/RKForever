#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CharacterCommonGameMode

#include "Basic.hpp"

#include "Mariner_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CharacterCommonGameMode.CharacterCommonGameMode_C
// 0x0020 (0x0438 - 0x0418)
class UCharacterCommonGameMode_C final : public UMarinerAnimatedWidget
{
public:
	class UScaleBox*                              ContentBox;                                        // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarinerPinGameModeWidget*              GameModeWidget;                                    // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastInlineDelegateProperty_             OnUpdateWidgetVisibility;                          // 0x0428(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnUpdateWidgetVisibility__DelegateSignature(bool ShouldDisplay);
	void RemoveGameModeWidget();
	void CreateGameModeWidget(class UClass* WidgetClass, class UMarinerPinGameModeWidget** WidgetInstance);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CharacterCommonGameMode_C">();
	}
	static class UCharacterCommonGameMode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCharacterCommonGameMode_C>();
	}
};
static_assert(alignof(UCharacterCommonGameMode_C) == 0x000008, "Wrong alignment on UCharacterCommonGameMode_C");
static_assert(sizeof(UCharacterCommonGameMode_C) == 0x000438, "Wrong size on UCharacterCommonGameMode_C");
static_assert(offsetof(UCharacterCommonGameMode_C, ContentBox) == 0x000418, "Member 'UCharacterCommonGameMode_C::ContentBox' has a wrong offset!");
static_assert(offsetof(UCharacterCommonGameMode_C, GameModeWidget) == 0x000420, "Member 'UCharacterCommonGameMode_C::GameModeWidget' has a wrong offset!");
static_assert(offsetof(UCharacterCommonGameMode_C, OnUpdateWidgetVisibility) == 0x000428, "Member 'UCharacterCommonGameMode_C::OnUpdateWidgetVisibility' has a wrong offset!");

}

