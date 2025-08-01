#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CharacterCustomizationPedestalInterior

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass CharacterCustomizationPedestalInterior.CharacterCustomizationPedestalInterior_C
// 0x0048 (0x0260 - 0x0218)
class ACharacterCustomizationPedestalInterior_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0218(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   PedestalInteriorMesh;                              // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         RotationResetTimeline_NewTrack_0_F7ECA4734BE7E1B33D4844A32E89B41D; // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            RotationResetTimeline__Direction_F7ECA4734BE7E1B33D4844A32E89B41D; // 0x0234(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_235[0x3];                                      // 0x0235(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     RotationResetTimeline;                             // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ResetRotatingComplete;                             // 0x0240(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_241[0x7];                                      // 0x0241(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AMarinerCharacterLite*                  LoadedChar;                                        // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               StartRotPosition;                                  // 0x0250(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_CharacterCustomizationPedestalInterior(int32 EntryPoint);
	void AttachToTheChar(class AMarinerCharacterLite* LoadedChar_0);
	void Reset_Rotation();
	void RotationResetTimeline__FinishedFunc();
	void RotationResetTimeline__UpdateFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CharacterCustomizationPedestalInterior_C">();
	}
	static class ACharacterCustomizationPedestalInterior_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACharacterCustomizationPedestalInterior_C>();
	}
};
static_assert(alignof(ACharacterCustomizationPedestalInterior_C) == 0x000008, "Wrong alignment on ACharacterCustomizationPedestalInterior_C");
static_assert(sizeof(ACharacterCustomizationPedestalInterior_C) == 0x000260, "Wrong size on ACharacterCustomizationPedestalInterior_C");
static_assert(offsetof(ACharacterCustomizationPedestalInterior_C, UberGraphFrame) == 0x000218, "Member 'ACharacterCustomizationPedestalInterior_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ACharacterCustomizationPedestalInterior_C, PedestalInteriorMesh) == 0x000220, "Member 'ACharacterCustomizationPedestalInterior_C::PedestalInteriorMesh' has a wrong offset!");
static_assert(offsetof(ACharacterCustomizationPedestalInterior_C, DefaultSceneRoot) == 0x000228, "Member 'ACharacterCustomizationPedestalInterior_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ACharacterCustomizationPedestalInterior_C, RotationResetTimeline_NewTrack_0_F7ECA4734BE7E1B33D4844A32E89B41D) == 0x000230, "Member 'ACharacterCustomizationPedestalInterior_C::RotationResetTimeline_NewTrack_0_F7ECA4734BE7E1B33D4844A32E89B41D' has a wrong offset!");
static_assert(offsetof(ACharacterCustomizationPedestalInterior_C, RotationResetTimeline__Direction_F7ECA4734BE7E1B33D4844A32E89B41D) == 0x000234, "Member 'ACharacterCustomizationPedestalInterior_C::RotationResetTimeline__Direction_F7ECA4734BE7E1B33D4844A32E89B41D' has a wrong offset!");
static_assert(offsetof(ACharacterCustomizationPedestalInterior_C, RotationResetTimeline) == 0x000238, "Member 'ACharacterCustomizationPedestalInterior_C::RotationResetTimeline' has a wrong offset!");
static_assert(offsetof(ACharacterCustomizationPedestalInterior_C, ResetRotatingComplete) == 0x000240, "Member 'ACharacterCustomizationPedestalInterior_C::ResetRotatingComplete' has a wrong offset!");
static_assert(offsetof(ACharacterCustomizationPedestalInterior_C, LoadedChar) == 0x000248, "Member 'ACharacterCustomizationPedestalInterior_C::LoadedChar' has a wrong offset!");
static_assert(offsetof(ACharacterCustomizationPedestalInterior_C, StartRotPosition) == 0x000250, "Member 'ACharacterCustomizationPedestalInterior_C::StartRotPosition' has a wrong offset!");

}

