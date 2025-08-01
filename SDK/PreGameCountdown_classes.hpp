#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PreGameCountdown

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PreGameCountdown.PreGameCountdown_C
// 0x0048 (0x0278 - 0x0230)
class UPreGameCountdown_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       CountdownAnim;                                     // 0x0238(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           MainPanel;                                         // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Ring1;                                             // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Ring2;                                             // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Time;                                              // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TimeBackground;                                    // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         PrevRemainingTime;                                 // 0x0268(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShouldDisplayTimer;                                // 0x026C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_26D[0x3];                                      // 0x026D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCharacterSelectMenu_C*                 CharacterSelectMenu;                               // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_PreGameCountdown(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PreGameCountdown_C">();
	}
	static class UPreGameCountdown_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPreGameCountdown_C>();
	}
};
static_assert(alignof(UPreGameCountdown_C) == 0x000008, "Wrong alignment on UPreGameCountdown_C");
static_assert(sizeof(UPreGameCountdown_C) == 0x000278, "Wrong size on UPreGameCountdown_C");
static_assert(offsetof(UPreGameCountdown_C, UberGraphFrame) == 0x000230, "Member 'UPreGameCountdown_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPreGameCountdown_C, CountdownAnim) == 0x000238, "Member 'UPreGameCountdown_C::CountdownAnim' has a wrong offset!");
static_assert(offsetof(UPreGameCountdown_C, MainPanel) == 0x000240, "Member 'UPreGameCountdown_C::MainPanel' has a wrong offset!");
static_assert(offsetof(UPreGameCountdown_C, Ring1) == 0x000248, "Member 'UPreGameCountdown_C::Ring1' has a wrong offset!");
static_assert(offsetof(UPreGameCountdown_C, Ring2) == 0x000250, "Member 'UPreGameCountdown_C::Ring2' has a wrong offset!");
static_assert(offsetof(UPreGameCountdown_C, Time) == 0x000258, "Member 'UPreGameCountdown_C::Time' has a wrong offset!");
static_assert(offsetof(UPreGameCountdown_C, TimeBackground) == 0x000260, "Member 'UPreGameCountdown_C::TimeBackground' has a wrong offset!");
static_assert(offsetof(UPreGameCountdown_C, PrevRemainingTime) == 0x000268, "Member 'UPreGameCountdown_C::PrevRemainingTime' has a wrong offset!");
static_assert(offsetof(UPreGameCountdown_C, ShouldDisplayTimer) == 0x00026C, "Member 'UPreGameCountdown_C::ShouldDisplayTimer' has a wrong offset!");
static_assert(offsetof(UPreGameCountdown_C, CharacterSelectMenu) == 0x000270, "Member 'UPreGameCountdown_C::CharacterSelectMenu' has a wrong offset!");

}

