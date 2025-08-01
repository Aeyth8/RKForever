#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CharacterSelectButton

#include "Basic.hpp"

#include "Mariner_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CharacterSelectButton.CharacterSelectButton_C
// 0x0070 (0x3140 - 0x30D0)
class UCharacterSelectButton_C final : public UMarinerCharacterSelectButton
{
public:
	class UWidgetAnimation*                       EditTextAnim;                                      // 0x30D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       EditBackgroundAnim;                                // 0x30D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       HoveredAnim;                                       // 0x30E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Background;                                        // 0x30E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Border;                                            // 0x30F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button;                                            // 0x30F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ContentStateIcon;                                  // 0x3100(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 EditBackground;                                    // 0x3108(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarinerScaleBox*                       EditTextScaleBox;                                  // 0x3110(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x3118(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Level;                                             // 0x3120(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Material;                                          // 0x3128(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               RootSizeBox;                                       // 0x3130(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUnviewedItemWidget_C*                  UnviewedWidget;                                    // 0x3138(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ShowEditPrompt();
	void HideEditPrompt();

	struct FMarinerLayeredButtonAssets GetAssets() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CharacterSelectButton_C">();
	}
	static class UCharacterSelectButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCharacterSelectButton_C>();
	}
};
static_assert(alignof(UCharacterSelectButton_C) == 0x000008, "Wrong alignment on UCharacterSelectButton_C");
static_assert(sizeof(UCharacterSelectButton_C) == 0x003140, "Wrong size on UCharacterSelectButton_C");
static_assert(offsetof(UCharacterSelectButton_C, EditTextAnim) == 0x0030D0, "Member 'UCharacterSelectButton_C::EditTextAnim' has a wrong offset!");
static_assert(offsetof(UCharacterSelectButton_C, EditBackgroundAnim) == 0x0030D8, "Member 'UCharacterSelectButton_C::EditBackgroundAnim' has a wrong offset!");
static_assert(offsetof(UCharacterSelectButton_C, HoveredAnim) == 0x0030E0, "Member 'UCharacterSelectButton_C::HoveredAnim' has a wrong offset!");
static_assert(offsetof(UCharacterSelectButton_C, Background) == 0x0030E8, "Member 'UCharacterSelectButton_C::Background' has a wrong offset!");
static_assert(offsetof(UCharacterSelectButton_C, Border) == 0x0030F0, "Member 'UCharacterSelectButton_C::Border' has a wrong offset!");
static_assert(offsetof(UCharacterSelectButton_C, Button) == 0x0030F8, "Member 'UCharacterSelectButton_C::Button' has a wrong offset!");
static_assert(offsetof(UCharacterSelectButton_C, ContentStateIcon) == 0x003100, "Member 'UCharacterSelectButton_C::ContentStateIcon' has a wrong offset!");
static_assert(offsetof(UCharacterSelectButton_C, EditBackground) == 0x003108, "Member 'UCharacterSelectButton_C::EditBackground' has a wrong offset!");
static_assert(offsetof(UCharacterSelectButton_C, EditTextScaleBox) == 0x003110, "Member 'UCharacterSelectButton_C::EditTextScaleBox' has a wrong offset!");
static_assert(offsetof(UCharacterSelectButton_C, Icon) == 0x003118, "Member 'UCharacterSelectButton_C::Icon' has a wrong offset!");
static_assert(offsetof(UCharacterSelectButton_C, Level) == 0x003120, "Member 'UCharacterSelectButton_C::Level' has a wrong offset!");
static_assert(offsetof(UCharacterSelectButton_C, Material) == 0x003128, "Member 'UCharacterSelectButton_C::Material' has a wrong offset!");
static_assert(offsetof(UCharacterSelectButton_C, RootSizeBox) == 0x003130, "Member 'UCharacterSelectButton_C::RootSizeBox' has a wrong offset!");
static_assert(offsetof(UCharacterSelectButton_C, UnviewedWidget) == 0x003138, "Member 'UCharacterSelectButton_C::UnviewedWidget' has a wrong offset!");

}

