#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NewsMenuStack

#include "Basic.hpp"

#include "MangoClient_structs.hpp"
#include "Engine_structs.hpp"
#include "Mariner_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass NewsMenuStack.NewsMenuStack_C
// 0x0088 (0x0720 - 0x0698)
class UNewsMenuStack_C final : public UMarinerMenuStackManager
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0698(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNewsDefaultStackBase_C*                DefaultStackBase;                                  // 0x06A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCircularThrobber*                      Loading;                                           // 0x06A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarinerGridPanel*                      NavRibbon;                                         // 0x06B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USecondaryStackButtonWidget_C*          News1;                                             // 0x06B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USecondaryStackButtonWidget_C*          News2;                                             // 0x06C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USecondaryStackButtonWidget_C*          News3;                                             // 0x06C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 NewsBackground;                                    // 0x06D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FMangoNews                             PendingNews;                                       // 0x06D8(0x0048)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_NewsMenuStack(int32 EntryPoint);
	void BP_OnEntered(bool bFromSubMenu);
	void NewsLoaded();
	void ConstructNewsStacks();
	void ShowLoading(bool IsVisible_0);
	void OnNewsStackActivated(class UMarinerMenuStackButton* Button, int32 StackIndex);
	void OnNewsStackPopulated();
	void OnNewsImageLoaded(class FName& ImageId, class UTexture2D* Texture);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NewsMenuStack_C">();
	}
	static class UNewsMenuStack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNewsMenuStack_C>();
	}
};
static_assert(alignof(UNewsMenuStack_C) == 0x000008, "Wrong alignment on UNewsMenuStack_C");
static_assert(sizeof(UNewsMenuStack_C) == 0x000720, "Wrong size on UNewsMenuStack_C");
static_assert(offsetof(UNewsMenuStack_C, UberGraphFrame) == 0x000698, "Member 'UNewsMenuStack_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UNewsMenuStack_C, DefaultStackBase) == 0x0006A0, "Member 'UNewsMenuStack_C::DefaultStackBase' has a wrong offset!");
static_assert(offsetof(UNewsMenuStack_C, Loading) == 0x0006A8, "Member 'UNewsMenuStack_C::Loading' has a wrong offset!");
static_assert(offsetof(UNewsMenuStack_C, NavRibbon) == 0x0006B0, "Member 'UNewsMenuStack_C::NavRibbon' has a wrong offset!");
static_assert(offsetof(UNewsMenuStack_C, News1) == 0x0006B8, "Member 'UNewsMenuStack_C::News1' has a wrong offset!");
static_assert(offsetof(UNewsMenuStack_C, News2) == 0x0006C0, "Member 'UNewsMenuStack_C::News2' has a wrong offset!");
static_assert(offsetof(UNewsMenuStack_C, News3) == 0x0006C8, "Member 'UNewsMenuStack_C::News3' has a wrong offset!");
static_assert(offsetof(UNewsMenuStack_C, NewsBackground) == 0x0006D0, "Member 'UNewsMenuStack_C::NewsBackground' has a wrong offset!");
static_assert(offsetof(UNewsMenuStack_C, PendingNews) == 0x0006D8, "Member 'UNewsMenuStack_C::PendingNews' has a wrong offset!");

}

