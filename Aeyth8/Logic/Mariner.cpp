#include "Mariner.h"
#include "../Global.hpp"
#include "../Hooks/Hooks.hpp"
#include "../Offsets.h"

#include "../Tools/Pointers.h"
#include "../Tools/UFunctions.hpp"
#include "../Tools/BytePatcher.h"

#include "../../SDK/Mariner_classes.hpp"
#include "../../SDK/Mariner_structs.hpp"
#include "../../SDK/DebugPlayMenu_classes.hpp"

/*

Written by Aeyth8

https://github.com/Aeyth8

*/


using namespace A8CL; using namespace Global;


// -- Vars

SDK::UMarinerGameInstance* Mariner::GameInstance{nullptr};
SDK::UMarinerUIHelpers*    Mariner::UIHelpers{nullptr};

// -- Constants

constexpr const BYTE NOP{0x90};
constexpr const BYTE RETN{0xC3};

// -- Hooks

// These numbers seem to be persistent across games
enum CharacterButtonIndex : unsigned char 
{
	Amphora = 12,
	Jayto = 11,
	Izell = 10,
	Plink = 9,
	Kayi = 8,
	Blastbeard = 7,
	Mysteen = 6,
	Topnotch = 5,
	Flux = 4,
	Boone = 3,
	Rev = 2,
	Leef = 1
};

static constexpr const int32 BaseIndex{2147482278};
static constexpr const int32& GetIndex(enum CharacterButtonIndex Character)
{	
	return BaseIndex + Character;
}

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

//A8CL::OFFSET ItemOwned("IsItemOwned", 0xA14D90); Never seems to get called when hooked, probably scrapped and swapped to using UMangoInventoryManager::GetInventorySkin()

void Mariner::Init_Hooks()
{
	if (Hooks::Init())
	{
		Hooks::CreateAndEnableHooks(HookList);
		Hooks::CreateAndEnableHook(OFF::StartLogin, OnLoginStarted); // I would rather do a bytepatch but it would rather crash, for now a hook works fine.

		BYTE ReturnOne[5]{0xB0, 0x01, RETN, NOP, NOP};

		BytePatcher::ReplaceBytes(PB(0xA4CD30), ReturnOne); // Removes the EAC failed to initialize popup.
		BytePatcher::ReplaceBytes(PB(0x9D9C90), ReturnOne); // UMangoCMSManager::TryGetCMSItemByAssetPath() should give ownership to all cosmetics/characters.
		BytePatcher::ReplaceBytes(PB(0xA0B1C0), ReturnOne); // UMangoInventoryManager::GetInventorySkin() should allow for all skins to be unlocked.
		BytePatcher::ReplaceBytes(PB(0xA14180), ReturnOne); // UMangoInventoryManager::IsCharacterOwned() should get rid of the stupid text saying we don't own them.
		BytePatcher::ReplaceBytes(PB(0x9BC430), {0xB0, 0x02, RETN, NOP, NOP}); // UMangoConnectionManager::GetGameVersion() should give us Mythic Edition.
		BytePatcher::ReplaceBytes(PB(0xA428F5), {NOP, NOP, NOP, NOP, NOP}); // Prevents the StartupMovies TArray from being filled with movie names, completely skipping the sequence. [Starts at 0xA42650]
		
	}
}

void Mariner::Init_Engine()
{
	while (GEngine() == nullptr) Sleep(25);

	// May be needed/used in the future for immediate initialization of certain configs.
}

void Mariner::Init_Vars(SDK::UWorld* GWorld)
{
	if (GWorld)
	{
		Mariner::GameInstance = static_cast<SDK::UMarinerGameInstance*>(GWorld->OwningGameInstance);
		Mariner::UIHelpers = static_cast<SDK::UMarinerUIHelpers*>(SDK::UBlueprintFunctionLibrary::GetDefaultObj());
		LogA("GameInstance", HexToString(*(uintptr_t*)GameInstance));
		LogA("GameInstancePTR", HexToString((uintptr_t)GameInstance));
	}
}

// -- Pointers

SDK::UEngine* const& Mariner::GEngine(const bool bLog)
{
	SDK::UEngine*& Engine = *reinterpret_cast<SDK::UEngine**>(OFF::GEngine.PlusBase());
	if (bLog && IsNull(Engine))
	{
		LogA("Logic", "GEngine is a null pointer!");
	}
	return Engine;
}

SDK::UWorld* const& Mariner::GWorld(const bool bLog)
{
	SDK::UWorld*& World = *reinterpret_cast<SDK::UWorld**>(OFF::GEngine.PlusBase());
	if (bLog && IsNull(World))
	{
		LogA("Logic", "GWorld is a null pointer!");
	}
	return World;
}

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