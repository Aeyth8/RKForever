#pragma once


/*

Written by Aeyth8

https://github.com/Aeyth8

*/


namespace SDK
{
	class UEngine;
	class UWorld;

	class UMarinerGameInstance;

	class AMarinerPlayerController;
	class AMarinerCharacter;
	class AMarinerPlayerState;
}

namespace A8CL
{
namespace Mariner
{
	// -- Vars

	extern SDK::UMarinerGameInstance* GameInstance;

	// -- Initialization

	void Init_Hooks();
	void Init_Engine();
	void Init_Vars(SDK::UWorld* GWorld);

	// -- Pointers

	SDK::UEngine* const& GEngine(const bool bLog = false);
	SDK::UWorld* const& GWorld(const bool bLog = false);

	SDK::AMarinerPlayerController* Player(const int& Index = 0);
	SDK::AMarinerCharacter* Character(const int& Index = 0);
}
}