#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OrderDetailsMessageBox

#include "Basic.hpp"

#include "MangoClient_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Mariner_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass OrderDetailsMessageBox.OrderDetailsMessageBox_C
// 0x00B0 (0x0508 - 0x0458)
class UOrderDetailsMessageBox_C final : public UMarinerOrderDetailsMessageBox
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0458(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             Body;                                              // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Center;                                            // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           FireworkRoot;                                      // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Header;                                            // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_228;                                         // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_349;                                         // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Material;                                          // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 OpacityBacker;                                     // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarinerHorizontalBox*                  RewardPanel;                                       // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarinerScrollBox*                      RewardScrollBox;                                   // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TopBar;                                            // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 WinningTeamGlow;                                   // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         StartingDelay;                                     // 0x04C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              SpawnRange;                                        // 0x04CC(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              ScaleRange;                                        // 0x04D4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EndTime;                                           // 0x04DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AccumulatedTime;                                   // 0x04E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E4[0x4];                                      // 0x04E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FLinearColor>                   Colors;                                            // 0x04E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UFireworkFX_C*>                  FireworkFX;                                        // 0x04F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)

public:
	void ExecuteUbergraph_OrderDetailsMessageBox(int32 EntryPoint);
	void BP_Populate();
	void StartFireworks();
	void CreateFirework();
	void AccumulateTime(float Time, bool* IsComplete);
	void SetHeaderAndBody(struct FMangoOrderDetails& OrderDetails);
	void AddRewardWidget(class UDefaultRewardButton_C** ButtonInstance);
	void AddRocketbucksWidgets(struct FMangoOrderDetails& OrderDetails);
	void AddItemWidgets(struct FMangoOrderDetails& OrderDetails);
	void AddBlastPassWidgets(const class FString& OfferId, struct FMangoOrderDetails& OrderDetails);
	void GetOrderObjectCount(struct FMangoOrderDetails& OrderDetails, int32* Count);
	void AddXPBonusWidgets(struct FMangoOrderDetails& OrderDetails);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OrderDetailsMessageBox_C">();
	}
	static class UOrderDetailsMessageBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOrderDetailsMessageBox_C>();
	}
};
static_assert(alignof(UOrderDetailsMessageBox_C) == 0x000008, "Wrong alignment on UOrderDetailsMessageBox_C");
static_assert(sizeof(UOrderDetailsMessageBox_C) == 0x000508, "Wrong size on UOrderDetailsMessageBox_C");
static_assert(offsetof(UOrderDetailsMessageBox_C, UberGraphFrame) == 0x000458, "Member 'UOrderDetailsMessageBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UOrderDetailsMessageBox_C, Body) == 0x000460, "Member 'UOrderDetailsMessageBox_C::Body' has a wrong offset!");
static_assert(offsetof(UOrderDetailsMessageBox_C, Center) == 0x000468, "Member 'UOrderDetailsMessageBox_C::Center' has a wrong offset!");
static_assert(offsetof(UOrderDetailsMessageBox_C, FireworkRoot) == 0x000470, "Member 'UOrderDetailsMessageBox_C::FireworkRoot' has a wrong offset!");
static_assert(offsetof(UOrderDetailsMessageBox_C, Header) == 0x000478, "Member 'UOrderDetailsMessageBox_C::Header' has a wrong offset!");
static_assert(offsetof(UOrderDetailsMessageBox_C, Image_1) == 0x000480, "Member 'UOrderDetailsMessageBox_C::Image_1' has a wrong offset!");
static_assert(offsetof(UOrderDetailsMessageBox_C, Image_228) == 0x000488, "Member 'UOrderDetailsMessageBox_C::Image_228' has a wrong offset!");
static_assert(offsetof(UOrderDetailsMessageBox_C, Image_349) == 0x000490, "Member 'UOrderDetailsMessageBox_C::Image_349' has a wrong offset!");
static_assert(offsetof(UOrderDetailsMessageBox_C, Material) == 0x000498, "Member 'UOrderDetailsMessageBox_C::Material' has a wrong offset!");
static_assert(offsetof(UOrderDetailsMessageBox_C, OpacityBacker) == 0x0004A0, "Member 'UOrderDetailsMessageBox_C::OpacityBacker' has a wrong offset!");
static_assert(offsetof(UOrderDetailsMessageBox_C, RewardPanel) == 0x0004A8, "Member 'UOrderDetailsMessageBox_C::RewardPanel' has a wrong offset!");
static_assert(offsetof(UOrderDetailsMessageBox_C, RewardScrollBox) == 0x0004B0, "Member 'UOrderDetailsMessageBox_C::RewardScrollBox' has a wrong offset!");
static_assert(offsetof(UOrderDetailsMessageBox_C, TopBar) == 0x0004B8, "Member 'UOrderDetailsMessageBox_C::TopBar' has a wrong offset!");
static_assert(offsetof(UOrderDetailsMessageBox_C, WinningTeamGlow) == 0x0004C0, "Member 'UOrderDetailsMessageBox_C::WinningTeamGlow' has a wrong offset!");
static_assert(offsetof(UOrderDetailsMessageBox_C, StartingDelay) == 0x0004C8, "Member 'UOrderDetailsMessageBox_C::StartingDelay' has a wrong offset!");
static_assert(offsetof(UOrderDetailsMessageBox_C, SpawnRange) == 0x0004CC, "Member 'UOrderDetailsMessageBox_C::SpawnRange' has a wrong offset!");
static_assert(offsetof(UOrderDetailsMessageBox_C, ScaleRange) == 0x0004D4, "Member 'UOrderDetailsMessageBox_C::ScaleRange' has a wrong offset!");
static_assert(offsetof(UOrderDetailsMessageBox_C, EndTime) == 0x0004DC, "Member 'UOrderDetailsMessageBox_C::EndTime' has a wrong offset!");
static_assert(offsetof(UOrderDetailsMessageBox_C, AccumulatedTime) == 0x0004E0, "Member 'UOrderDetailsMessageBox_C::AccumulatedTime' has a wrong offset!");
static_assert(offsetof(UOrderDetailsMessageBox_C, Colors) == 0x0004E8, "Member 'UOrderDetailsMessageBox_C::Colors' has a wrong offset!");
static_assert(offsetof(UOrderDetailsMessageBox_C, FireworkFX) == 0x0004F8, "Member 'UOrderDetailsMessageBox_C::FireworkFX' has a wrong offset!");

}

