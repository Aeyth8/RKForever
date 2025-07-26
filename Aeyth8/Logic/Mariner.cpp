#include "Mariner.h"
#include "../Global.hpp"
#include "../Hooks/Hooks.hpp"
#include "../Offsets.h"

#include "../Tools/Pointers.h"
#include "../Tools/UFunctions.hpp"
#include "../Tools/BytePatcher.h"

#include "../../SDK/Mariner_classes.hpp"
#include "../../SDK/Mariner_structs.hpp"

/*

Written by Aeyth8

https://github.com/Aeyth8

*/


using namespace A8CL; using namespace Global;


// -- Vars

SDK::UMarinerGameInstance* Mariner::GameInstance{nullptr};

// -- Constants

constexpr const BYTE NOP{0x90};
constexpr const BYTE RETN{0xC3};

// -- Hooks

static void OnLoginStarted(SDK::UMangoConnectionManager* This, uint32 NoClue)
{
	if (Mariner::GameInstance) Mariner::GameInstance->OnMovieCompleted();
}

static std::vector<Hooks::HookStructure> HookList =
{
	{OFF::UConsole, UFunctions::UConsole},
	{OFF::Browse, UFunctions::Browse},
	{OFF::AppPreExit, UFunctions::AppPreExit},
	{OFF::PreLogin, UFunctions::PreLogin},
	{OFF::MarinerPreLogin, UFunctions::PreLogin},
	{OFF::Login, UFunctions::Login},
	{OFF::InitListen, UFunctions::InitListen},
};


void Mariner::Init_Hooks()
{
	if (Hooks::Init())
	{
		Hooks::CreateAndEnableHooks(HookList);

		Hooks::CreateAndEnableHook(OFF::StartLogin, OnLoginStarted); // I would rather do a bytepatch but it would rather crash, for now a hook works fine.
		BytePatcher::ReplaceBytes(PB(0xA4CD30), {0xB0, 0x01, RETN, NOP, NOP}); // Removes the EAC failed to initialize popup.

		
	}
}

void Mariner::Init_Vars(SDK::UWorld* GWorld)
{
	if (GWorld)
	{
		Mariner::GameInstance = static_cast<SDK::UMarinerGameInstance*>(GWorld->OwningGameInstance);
		LogA("GameInstance", HexToString(*(uintptr_t*)GameInstance));
		LogA("GameInstancePTR", HexToString((uintptr_t)GameInstance));
	}
}

// -- Pointers

SDK::AMarinerPlayerController* Mariner::Player(const int& Index)
{
	return static_cast<SDK::AMarinerPlayerController*>(Pointers::Player(Index));
}

SDK::AMarinerCharacter* Mariner::Character(const int& Index)
{
	SDK::AMarinerPlayerController* Player = Mariner::Player(Index);
	if (!IsNull(Player))
	{
		return static_cast<SDK::AMarinerCharacter*>(Player->Character);
	}

	return nullptr;
}