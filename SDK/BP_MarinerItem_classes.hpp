#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MarinerItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Mariner_structs.hpp"
#include "Mariner_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MarinerItem.BP_MarinerItem_C
// 0x0080 (0x06A0 - 0x0620)
class ABP_MarinerItem_C : public AMarinerItem
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0620(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               FX_Poe_Default_Secondary_Debuff;                   // 0x0628(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               FX_ItemInWorld;                                    // 0x0630(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        Picked_Up_FX;                                      // 0x0638(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InitialVerticalImpulse;                            // 0x0640(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BounceDampener;                                    // 0x0644(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BounceDampener_Threshold;                          // 0x0648(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BounceDampener_Cooldown;                           // 0x064C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           BounceDampener_Cooldown_Timer;                     // 0x0650(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          UsesBaseItemPhysicsOnDropped;                      // 0x0658(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_659[0x3];                                      // 0x0659(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ThirdPersonCastDistanceFromCrosshair;              // 0x065C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IgnoreBounceReduction;                             // 0x0660(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_661[0x3];                                      // 0x0661(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                SpawnLocation;                                     // 0x0664(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ItemStunActive;                                    // 0x0670(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                         Pad_671[0x3];                                      // 0x0671(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FailsafeStunDurationBuffer;                        // 0x0674(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           FailsafeStunRemovalTimer;                          // 0x0678(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	UMulticastInlineDelegateProperty_             ItemStunRemoved;                                   // 0x0680(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UParticleSystem*                        PoeStunEmitter;                                    // 0x0690(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PlayCollectFX;                                     // 0x0698(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ItemStunRemoved__DelegateSignature();
	void ExecuteUbergraph_BP_MarinerItem(int32 EntryPoint);
	void BP_DisabledToPool();
	void BP_EnabledFromPool();
	void OnTakeAnyDamage_Event_0(class AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void ToggleItemStun(bool StunActive, float StunDuration, class UParticleSystem* Emitter);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void SpawnDestroyedFX();
	void OnLocalClientRealityChanged(EMarinerRealityState OldReality, EMarinerRealityState NewReality);
	void OnFellOutOfWorld();
	void OnBounceDampenerCooldownComplete();
	void OnHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void BP_OnDropped(class AMarinerCharacter* CharacterDroppingItem);
	void OnWillPickUp();
	void HandleRealityChange(EMarinerRealityState NewReality);
	void HandleItemStunApplied(bool NewStunActiveStatus, float StunDuration);
	void OnRep_ItemStunActive();
	void TryRemoveItemStun();
	void GetCanItemBeStunned(bool* CanItemBeStunned);
	void GetIsItemStunned(bool* IsStunned);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MarinerItem_C">();
	}
	static class ABP_MarinerItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MarinerItem_C>();
	}
};
static_assert(alignof(ABP_MarinerItem_C) == 0x000008, "Wrong alignment on ABP_MarinerItem_C");
static_assert(sizeof(ABP_MarinerItem_C) == 0x0006A0, "Wrong size on ABP_MarinerItem_C");
static_assert(offsetof(ABP_MarinerItem_C, UberGraphFrame) == 0x000620, "Member 'ABP_MarinerItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_MarinerItem_C, FX_Poe_Default_Secondary_Debuff) == 0x000628, "Member 'ABP_MarinerItem_C::FX_Poe_Default_Secondary_Debuff' has a wrong offset!");
static_assert(offsetof(ABP_MarinerItem_C, FX_ItemInWorld) == 0x000630, "Member 'ABP_MarinerItem_C::FX_ItemInWorld' has a wrong offset!");
static_assert(offsetof(ABP_MarinerItem_C, Picked_Up_FX) == 0x000638, "Member 'ABP_MarinerItem_C::Picked_Up_FX' has a wrong offset!");
static_assert(offsetof(ABP_MarinerItem_C, InitialVerticalImpulse) == 0x000640, "Member 'ABP_MarinerItem_C::InitialVerticalImpulse' has a wrong offset!");
static_assert(offsetof(ABP_MarinerItem_C, BounceDampener) == 0x000644, "Member 'ABP_MarinerItem_C::BounceDampener' has a wrong offset!");
static_assert(offsetof(ABP_MarinerItem_C, BounceDampener_Threshold) == 0x000648, "Member 'ABP_MarinerItem_C::BounceDampener_Threshold' has a wrong offset!");
static_assert(offsetof(ABP_MarinerItem_C, BounceDampener_Cooldown) == 0x00064C, "Member 'ABP_MarinerItem_C::BounceDampener_Cooldown' has a wrong offset!");
static_assert(offsetof(ABP_MarinerItem_C, BounceDampener_Cooldown_Timer) == 0x000650, "Member 'ABP_MarinerItem_C::BounceDampener_Cooldown_Timer' has a wrong offset!");
static_assert(offsetof(ABP_MarinerItem_C, UsesBaseItemPhysicsOnDropped) == 0x000658, "Member 'ABP_MarinerItem_C::UsesBaseItemPhysicsOnDropped' has a wrong offset!");
static_assert(offsetof(ABP_MarinerItem_C, ThirdPersonCastDistanceFromCrosshair) == 0x00065C, "Member 'ABP_MarinerItem_C::ThirdPersonCastDistanceFromCrosshair' has a wrong offset!");
static_assert(offsetof(ABP_MarinerItem_C, IgnoreBounceReduction) == 0x000660, "Member 'ABP_MarinerItem_C::IgnoreBounceReduction' has a wrong offset!");
static_assert(offsetof(ABP_MarinerItem_C, SpawnLocation) == 0x000664, "Member 'ABP_MarinerItem_C::SpawnLocation' has a wrong offset!");
static_assert(offsetof(ABP_MarinerItem_C, ItemStunActive) == 0x000670, "Member 'ABP_MarinerItem_C::ItemStunActive' has a wrong offset!");
static_assert(offsetof(ABP_MarinerItem_C, FailsafeStunDurationBuffer) == 0x000674, "Member 'ABP_MarinerItem_C::FailsafeStunDurationBuffer' has a wrong offset!");
static_assert(offsetof(ABP_MarinerItem_C, FailsafeStunRemovalTimer) == 0x000678, "Member 'ABP_MarinerItem_C::FailsafeStunRemovalTimer' has a wrong offset!");
static_assert(offsetof(ABP_MarinerItem_C, ItemStunRemoved) == 0x000680, "Member 'ABP_MarinerItem_C::ItemStunRemoved' has a wrong offset!");
static_assert(offsetof(ABP_MarinerItem_C, PoeStunEmitter) == 0x000690, "Member 'ABP_MarinerItem_C::PoeStunEmitter' has a wrong offset!");
static_assert(offsetof(ABP_MarinerItem_C, PlayCollectFX) == 0x000698, "Member 'ABP_MarinerItem_C::PlayCollectFX' has a wrong offset!");

}

