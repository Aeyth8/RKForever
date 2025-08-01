#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PostGameDefaultStackBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Mariner_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PostGameDefaultStackBase.PostGameDefaultStackBase_C
// 0x0018 (0x0370 - 0x0358)
class UPostGameDefaultStackBase_C final : public UMarinerMenuStackBaseWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0358(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStackManagerContentWidget_C*           MenuContent;                                       // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDefaultPromptBanner_C*                 NavPrompts;                                        // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_PostGameDefaultStackBase(int32 EntryPoint);
	void Construct();

	struct FMarinerMenuStackBaseWidgetSetup GetWidgetSetup() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PostGameDefaultStackBase_C">();
	}
	static class UPostGameDefaultStackBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPostGameDefaultStackBase_C>();
	}
};
static_assert(alignof(UPostGameDefaultStackBase_C) == 0x000008, "Wrong alignment on UPostGameDefaultStackBase_C");
static_assert(sizeof(UPostGameDefaultStackBase_C) == 0x000370, "Wrong size on UPostGameDefaultStackBase_C");
static_assert(offsetof(UPostGameDefaultStackBase_C, UberGraphFrame) == 0x000358, "Member 'UPostGameDefaultStackBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPostGameDefaultStackBase_C, MenuContent) == 0x000360, "Member 'UPostGameDefaultStackBase_C::MenuContent' has a wrong offset!");
static_assert(offsetof(UPostGameDefaultStackBase_C, NavPrompts) == 0x000368, "Member 'UPostGameDefaultStackBase_C::NavPrompts' has a wrong offset!");

}

