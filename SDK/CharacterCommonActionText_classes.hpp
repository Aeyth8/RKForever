#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CharacterCommonActionText

#include "Basic.hpp"

#include "Mariner_structs.hpp"
#include "Mariner_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CharacterCommonActionText.CharacterCommonActionText_C
// 0x0008 (0x0420 - 0x0418)
class UCharacterCommonActionText_C final : public UMarinerAnimatedWidget
{
public:
	class UTextBlock*                             ActionText;                                        // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void PopulateActionText(const class FText& ActionText_0);
	void PopulateTeam(class AMarinerCharacter* Character);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CharacterCommonActionText_C">();
	}
	static class UCharacterCommonActionText_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCharacterCommonActionText_C>();
	}
};
static_assert(alignof(UCharacterCommonActionText_C) == 0x000008, "Wrong alignment on UCharacterCommonActionText_C");
static_assert(sizeof(UCharacterCommonActionText_C) == 0x000420, "Wrong size on UCharacterCommonActionText_C");
static_assert(offsetof(UCharacterCommonActionText_C, ActionText) == 0x000418, "Member 'UCharacterCommonActionText_C::ActionText' has a wrong offset!");

}

