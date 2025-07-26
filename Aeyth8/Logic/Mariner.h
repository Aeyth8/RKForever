#pragma once


/*

Written by Aeyth8

https://github.com/Aeyth8

*/


namespace SDK
{
	class UWorld;

	class UMarinerGameInstance;

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
	void Init_Vars(SDK::UWorld* GWorld);

	// -- Pointers

	//SDK::* Player(const int& Index = 0);
}
}