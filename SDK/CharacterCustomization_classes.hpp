#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CharacterCustomization

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "MangoClient_structs.hpp"
#include "Mariner_structs.hpp"
#include "Mariner_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CharacterCustomization.CharacterCustomization_C
// 0x0370 (0x0850 - 0x04E0)
class UCharacterCustomization_C final : public UMarinerMenu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBaseContentWidget_C*                   BaseContentWidget;                                 // 0x04E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class CharacterUpsellWidget_0::UCharacterUpsellWidget_C* CharacterUpsellWidget;                             // 0x04F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPurchasePreviewWidget_C*               PurchasePreviewWidget;                             // 0x04F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCharacterStoryandAbilities_C*          StoryAndAbilities;                                 // 0x0500(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNewItemLine_C*                         UnviewedArtifacts;                                 // 0x0508(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNewItemLine_C*                         UnviewedMegaBlasts;                                // 0x0510(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNewItemLine_C*                         UnviewedReturnTrails;                              // 0x0518(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AMarinerCharacterSpawner*               CharacterSpawner;                                  // 0x0520(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMarinerPlayableCharacter*>      PlayableCharactersData;                            // 0x0528(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FMangoProfile                          LocalProfile;                                      // 0x0538(0x02E0)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ACharacterCustomizationPedestalInterior_C* PedestalInteriorActor;                             // 0x0818(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMarinerCharacterLite*                  LastLoadedCharacter;                               // 0x0820(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharacterSelectButton_C*               CurrentCharacterIcon;                              // 0x0828(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAsyncCharacterSpawner_C*               AsyncCharacterSpawner;                             // 0x0830(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 LastCharacterName;                                 // 0x0838(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          CurrentCharacterWasSpawned;                        // 0x0848(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_CharacterCustomization(int32 EntryPoint);
	void CharacterClicked(class UMarinerLayeredButton* Instance);
	void OnPurchaseGenericSelected();
	void SpawnCurrentCharacter();
	void OnExit();
	void HandleInputDeviceChanged(EPlayerInputType InputType);
	void BP_OnEntered(bool bFromSubMenu);
	void BP_OnExited(bool bToSubLayer);
	void IconAdded(class UMarinerLayeredButton* LayeredButtonTemplate, class UMarinerPlayableCharacter* Character);
	void CreateCharacterIcons();
	void ApplyProfileSkinToCharacter();
	void OnProfileUpdated();
	void UpdateCharacterHeader();
	void ApplyImageToButtonStyle(const struct FButtonStyle& ButtonStyle, const struct FSlateBrush& Image, struct FButtonStyle* ButtonStyle1);
	void SetupPlayableCharacters();
	void SetSelectedCharacter(class UMarinerLayeredButton* ButtonInstance);
	bool HandleInput(EMarinerInputActions InInput);
	void GetCharacterClassUIData(class UClass* CharacterClass, class UClass** UIData);
	void GetCurrentCharacter(class UMarinerPlayableCharacter** Character);
	void UpdatePrompts();
	void CanCustomizeCurrentCharacter(bool* Allowed);
	void CanPurchaseCurrentCharacter(bool* Allowed);
	void GetCurrentCharacterPurchaseOffer(struct FMangoPurchaseOffer* PurchaseOffer, bool* IsValid);
	void UpdateTooltip();
	void UpdateUnviewedWidgets();
	void OnPracticePopupConfirm(struct FKey& KeyPressed);
	void OnPracticePopupCancel(struct FKey& KeyPressed);
	void InitActors();

	void GetLocalProfile(struct FMangoProfile* LocalProfile_0) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CharacterCustomization_C">();
	}
	static class UCharacterCustomization_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCharacterCustomization_C>();
	}
};
static_assert(alignof(UCharacterCustomization_C) == 0x000008, "Wrong alignment on UCharacterCustomization_C");
static_assert(sizeof(UCharacterCustomization_C) == 0x000850, "Wrong size on UCharacterCustomization_C");
static_assert(offsetof(UCharacterCustomization_C, UberGraphFrame) == 0x0004E0, "Member 'UCharacterCustomization_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCharacterCustomization_C, BaseContentWidget) == 0x0004E8, "Member 'UCharacterCustomization_C::BaseContentWidget' has a wrong offset!");
static_assert(offsetof(UCharacterCustomization_C, CharacterUpsellWidget) == 0x0004F0, "Member 'UCharacterCustomization_C::CharacterUpsellWidget' has a wrong offset!");
static_assert(offsetof(UCharacterCustomization_C, PurchasePreviewWidget) == 0x0004F8, "Member 'UCharacterCustomization_C::PurchasePreviewWidget' has a wrong offset!");
static_assert(offsetof(UCharacterCustomization_C, StoryAndAbilities) == 0x000500, "Member 'UCharacterCustomization_C::StoryAndAbilities' has a wrong offset!");
static_assert(offsetof(UCharacterCustomization_C, UnviewedArtifacts) == 0x000508, "Member 'UCharacterCustomization_C::UnviewedArtifacts' has a wrong offset!");
static_assert(offsetof(UCharacterCustomization_C, UnviewedMegaBlasts) == 0x000510, "Member 'UCharacterCustomization_C::UnviewedMegaBlasts' has a wrong offset!");
static_assert(offsetof(UCharacterCustomization_C, UnviewedReturnTrails) == 0x000518, "Member 'UCharacterCustomization_C::UnviewedReturnTrails' has a wrong offset!");
static_assert(offsetof(UCharacterCustomization_C, CharacterSpawner) == 0x000520, "Member 'UCharacterCustomization_C::CharacterSpawner' has a wrong offset!");
static_assert(offsetof(UCharacterCustomization_C, PlayableCharactersData) == 0x000528, "Member 'UCharacterCustomization_C::PlayableCharactersData' has a wrong offset!");
static_assert(offsetof(UCharacterCustomization_C, LocalProfile) == 0x000538, "Member 'UCharacterCustomization_C::LocalProfile' has a wrong offset!");
static_assert(offsetof(UCharacterCustomization_C, PedestalInteriorActor) == 0x000818, "Member 'UCharacterCustomization_C::PedestalInteriorActor' has a wrong offset!");
static_assert(offsetof(UCharacterCustomization_C, LastLoadedCharacter) == 0x000820, "Member 'UCharacterCustomization_C::LastLoadedCharacter' has a wrong offset!");
static_assert(offsetof(UCharacterCustomization_C, CurrentCharacterIcon) == 0x000828, "Member 'UCharacterCustomization_C::CurrentCharacterIcon' has a wrong offset!");
static_assert(offsetof(UCharacterCustomization_C, AsyncCharacterSpawner) == 0x000830, "Member 'UCharacterCustomization_C::AsyncCharacterSpawner' has a wrong offset!");
static_assert(offsetof(UCharacterCustomization_C, LastCharacterName) == 0x000838, "Member 'UCharacterCustomization_C::LastCharacterName' has a wrong offset!");
static_assert(offsetof(UCharacterCustomization_C, CurrentCharacterWasSpawned) == 0x000848, "Member 'UCharacterCustomization_C::CurrentCharacterWasSpawned' has a wrong offset!");

}

