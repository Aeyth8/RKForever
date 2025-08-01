#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MainMenuCamera

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MainMenuCamera.MainMenuCamera_C
// 0x0000 (0x0780 - 0x0780)
class AMainMenuCamera_C final : public ACameraActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MainMenuCamera_C">();
	}
	static class AMainMenuCamera_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMainMenuCamera_C>();
	}
};
static_assert(alignof(AMainMenuCamera_C) == 0x000010, "Wrong alignment on AMainMenuCamera_C");
static_assert(sizeof(AMainMenuCamera_C) == 0x000780, "Wrong size on AMainMenuCamera_C");

}

