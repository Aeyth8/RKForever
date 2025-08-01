#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ProgressionRewardPreview

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Mariner_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ProgressionRewardPreview.ProgressionRewardPreview_C
// 0x0048 (0x0370 - 0x0328)
class UProgressionRewardPreview_C final : public UMarinerProgressionRewardPreview
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0328(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       BarProgressLoop;                                   // 0x0330(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       LevelUpAnim;                                       // 0x0338(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Backer;                                            // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             CharacterLevelNumber;                              // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Fuelparticles;                                     // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FuelParticlessmall;                                // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Glow;                                              // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Shockwave;                                         // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ProgressionRewardPreview(int32 EntryPoint);
	void BPOnLevelSet(bool bIsInit, int32 CurrentLevel, float CurrentLevelPercent);
	void InitCharacterXpProgressionBar(class UMarinerPlayableCharacter* CharacterPlayed, const struct FMangoMatchCharacterProgression& CharacterProgression, bool IsCharacter, float DurationPerLevelSeconds, float FinalDelaySeconds);

	struct FMarinerAnimatedProgressWidgetAnimations GetAnimations() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ProgressionRewardPreview_C">();
	}
	static class UProgressionRewardPreview_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProgressionRewardPreview_C>();
	}
};
static_assert(alignof(UProgressionRewardPreview_C) == 0x000008, "Wrong alignment on UProgressionRewardPreview_C");
static_assert(sizeof(UProgressionRewardPreview_C) == 0x000370, "Wrong size on UProgressionRewardPreview_C");
static_assert(offsetof(UProgressionRewardPreview_C, UberGraphFrame) == 0x000328, "Member 'UProgressionRewardPreview_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UProgressionRewardPreview_C, BarProgressLoop) == 0x000330, "Member 'UProgressionRewardPreview_C::BarProgressLoop' has a wrong offset!");
static_assert(offsetof(UProgressionRewardPreview_C, LevelUpAnim) == 0x000338, "Member 'UProgressionRewardPreview_C::LevelUpAnim' has a wrong offset!");
static_assert(offsetof(UProgressionRewardPreview_C, Backer) == 0x000340, "Member 'UProgressionRewardPreview_C::Backer' has a wrong offset!");
static_assert(offsetof(UProgressionRewardPreview_C, CharacterLevelNumber) == 0x000348, "Member 'UProgressionRewardPreview_C::CharacterLevelNumber' has a wrong offset!");
static_assert(offsetof(UProgressionRewardPreview_C, Fuelparticles) == 0x000350, "Member 'UProgressionRewardPreview_C::Fuelparticles' has a wrong offset!");
static_assert(offsetof(UProgressionRewardPreview_C, FuelParticlessmall) == 0x000358, "Member 'UProgressionRewardPreview_C::FuelParticlessmall' has a wrong offset!");
static_assert(offsetof(UProgressionRewardPreview_C, Glow) == 0x000360, "Member 'UProgressionRewardPreview_C::Glow' has a wrong offset!");
static_assert(offsetof(UProgressionRewardPreview_C, Shockwave) == 0x000368, "Member 'UProgressionRewardPreview_C::Shockwave' has a wrong offset!");

}

