#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LoginRewardButton

#include "Basic.hpp"

#include "MangoClient_structs.hpp"
#include "Engine_structs.hpp"
#include "Mariner_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LoginRewardButton.LoginRewardButton_C
// 0x0070 (0x2FE8 - 0x2F78)
class ULoginRewardButton_C final : public UMarinerLayeredButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x2F78(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       HoveredAnim;                                       // 0x2F80(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AvailableToClaim;                                  // 0x2F88(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Background;                                        // 0x2F90(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Border;                                            // 0x2F98(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button;                                            // 0x2FA0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Fuelparticles;                                     // 0x2FA8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Glow;                                              // 0x2FB0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             HeaderText;                                        // 0x2FB8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x2FC0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x2FC8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Material;                                          // 0x2FD0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ProgressText;                                      // 0x2FD8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               RootSizeBox;                                       // 0x2FE0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_LoginRewardButton(int32 EntryPoint);
	void ClaimReward(bool bWasSuccessful, const EMangoQuestSlot SlotId, const struct FMangoQuestDescription& NewQuest);
	void Construct();
	void Init();
	void IsClaimable(int32* Progress, int32* Goal, bool* IsClaimable_0);

	struct FMarinerLayeredButtonAssets GetAssets() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LoginRewardButton_C">();
	}
	static class ULoginRewardButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULoginRewardButton_C>();
	}
};
static_assert(alignof(ULoginRewardButton_C) == 0x000008, "Wrong alignment on ULoginRewardButton_C");
static_assert(sizeof(ULoginRewardButton_C) == 0x002FE8, "Wrong size on ULoginRewardButton_C");
static_assert(offsetof(ULoginRewardButton_C, UberGraphFrame) == 0x002F78, "Member 'ULoginRewardButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULoginRewardButton_C, HoveredAnim) == 0x002F80, "Member 'ULoginRewardButton_C::HoveredAnim' has a wrong offset!");
static_assert(offsetof(ULoginRewardButton_C, AvailableToClaim) == 0x002F88, "Member 'ULoginRewardButton_C::AvailableToClaim' has a wrong offset!");
static_assert(offsetof(ULoginRewardButton_C, Background) == 0x002F90, "Member 'ULoginRewardButton_C::Background' has a wrong offset!");
static_assert(offsetof(ULoginRewardButton_C, Border) == 0x002F98, "Member 'ULoginRewardButton_C::Border' has a wrong offset!");
static_assert(offsetof(ULoginRewardButton_C, Button) == 0x002FA0, "Member 'ULoginRewardButton_C::Button' has a wrong offset!");
static_assert(offsetof(ULoginRewardButton_C, Fuelparticles) == 0x002FA8, "Member 'ULoginRewardButton_C::Fuelparticles' has a wrong offset!");
static_assert(offsetof(ULoginRewardButton_C, Glow) == 0x002FB0, "Member 'ULoginRewardButton_C::Glow' has a wrong offset!");
static_assert(offsetof(ULoginRewardButton_C, HeaderText) == 0x002FB8, "Member 'ULoginRewardButton_C::HeaderText' has a wrong offset!");
static_assert(offsetof(ULoginRewardButton_C, Icon) == 0x002FC0, "Member 'ULoginRewardButton_C::Icon' has a wrong offset!");
static_assert(offsetof(ULoginRewardButton_C, Image_0) == 0x002FC8, "Member 'ULoginRewardButton_C::Image_0' has a wrong offset!");
static_assert(offsetof(ULoginRewardButton_C, Material) == 0x002FD0, "Member 'ULoginRewardButton_C::Material' has a wrong offset!");
static_assert(offsetof(ULoginRewardButton_C, ProgressText) == 0x002FD8, "Member 'ULoginRewardButton_C::ProgressText' has a wrong offset!");
static_assert(offsetof(ULoginRewardButton_C, RootSizeBox) == 0x002FE0, "Member 'ULoginRewardButton_C::RootSizeBox' has a wrong offset!");

}

