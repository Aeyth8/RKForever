#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CharacterAnimationInterface

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "E_ItemActivationTypes_structs.hpp"
#include "DodgeDirections_structs.hpp"
#include "Mariner_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass CharacterAnimationInterface.CharacterAnimationInterface_C
// 0x0000 (0x0028 - 0x0028)
class ICharacterAnimationInterface_C final : public IInterface
{
public:
	void Anim_DodgeStarted(EDodgeDirections DodgeCardinalDirection);
	void Anim_CharacterEmote(EMarinerInputActions MarinerInputAction);
	void Anim_ItemActivation(const E_ItemActivationTypes ItemUseType);
	void Anim_DebugPlayAnimation(const class FString& Character, const class FString& Number);
	void Anim_PregameEmote(int32 Number);
	void Anim_SpawnProp(class USkeletalMesh* SkeletalMesh, class UAnimSequence* Animation, class FName Socket, bool LoopAnim);
	void Anim_DestroyProp();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CharacterAnimationInterface_C">();
	}
	static class ICharacterAnimationInterface_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ICharacterAnimationInterface_C>();
	}
};
static_assert(alignof(ICharacterAnimationInterface_C) == 0x000008, "Wrong alignment on ICharacterAnimationInterface_C");
static_assert(sizeof(ICharacterAnimationInterface_C) == 0x000028, "Wrong size on ICharacterAnimationInterface_C");

}

