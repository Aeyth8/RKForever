#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PostGameBackground

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PostGameBackground.PostGameBackground_C
// 0x0018 (0x0248 - 0x0230)
class UPostGameBackground_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Background;                                        // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_248;                                         // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_PostGameBackground(int32 EntryPoint);
	void ApplyBackground();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PostGameBackground_C">();
	}
	static class UPostGameBackground_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPostGameBackground_C>();
	}
};
static_assert(alignof(UPostGameBackground_C) == 0x000008, "Wrong alignment on UPostGameBackground_C");
static_assert(sizeof(UPostGameBackground_C) == 0x000248, "Wrong size on UPostGameBackground_C");
static_assert(offsetof(UPostGameBackground_C, UberGraphFrame) == 0x000230, "Member 'UPostGameBackground_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPostGameBackground_C, Background) == 0x000238, "Member 'UPostGameBackground_C::Background' has a wrong offset!");
static_assert(offsetof(UPostGameBackground_C, Image_248) == 0x000240, "Member 'UPostGameBackground_C::Image_248' has a wrong offset!");

}

