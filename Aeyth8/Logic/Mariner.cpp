#include "Mariner.h"
#include "../Global.hpp"
#include "../Hooks/Hooks.hpp"
#include "../Offsets.h"

#include "../Tools/Pointers.h"
#include "../Tools/UFunctions.hpp"
#include "../Tools/BytePatcher.h"
#include "../CmdArgs/CommandLineArgs.h"

#include "../../Dumper-7/SDK/EngineSettings_classes.hpp"

#include "../../Dumper-7/SDK/Mariner_classes.hpp"
#include "../../Dumper-7/SDK/Mariner_structs.hpp"
#include "../../Dumper-7/SDK/DebugPlayMenu_classes.hpp"
#include "../../Dumper-7/SDK/PrivateMatchMenu_classes.hpp"
#include "../../Dumper-7/SDK/CharacterCustomization_classes.hpp"
#include "../../Dumper-7/SDK/ServerList_classes.hpp"
#include "../../Dumper-7/SDK/DefaultPlaylistGroupButton_classes.hpp"

/*

Written by Aeyth8

https://github.com/Aeyth8

*/


using namespace A8CL; using namespace Global;


// -- Vars

SDK::UGameMapsSettings*					Mariner::MapSettings{nullptr};

SDK::UMarinerGameInstance*				Mariner::GameInstance{nullptr};
SDK::UClass*							Mariner::PrivateMatchMenu{nullptr};
SDK::UClass*							Mariner::DebugPlayMenu{nullptr};
SDK::UClass*							Mariner::ServerList{nullptr};

bool									Mariner::bIsInitialized{false};

// -- Constants

constexpr const BYTE NOP{0x90};
constexpr const BYTE RETN{0xC3};
constexpr const BYTE JMP{0xEB}; // Jump short https://www.felixcloutier.com/x86/jmp

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

// -- UI Hooks

static void OnLoginStarted(SDK::UMangoConnectionManager* This, uint32 NoClue)
{
	if (Mariner::GameInstance) Mariner::GameInstance->OnMovieCompleted();		
}

static void __fastcall OnPrivateMatchSelected(SDK::AMarinerMainMenuHUD* This, unsigned char IDK)
{
	Mariner::PushLayerToActiveStack(Mariner::PrivateMatchMenu);	
}

static void __fastcall OnPlaylistSelected(SDK::UObject* This)
{
	Mariner::PushLayerToActiveStack(Mariner::ServerList);	
}

static std::vector<Hooks::HookStructure> MenuHooks =
{
	{OFF::StartLogin, OnLoginStarted},
	{OFF::SelectPrivateMatch, OnPrivateMatchSelected},
	{OFF::SelectPlaylists, OnPlaylistSelected},
};

static SDK::UGameMapsSettings* __fastcall UGameMapSettings(SDK::UGameMapsSettings* This, void* FObjectInitializer)
{
	OFF::GameMapsSettings.VerifyFC<SDK::UGameMapsSettings* (__fastcall*)(SDK::UGameMapsSettings*, void*)>()(This, FObjectInitializer);
	Mariner::MapSettings = This;

	//LogA(This->GetFullName(), "Constructor");

	return This;
}

// -- Hooks

static std::vector<Hooks::HookStructure> HookList =
{
	{OFF::UConsole, UFunctions::UConsole},
	{OFF::Browse, UFunctions::Browse},
	{OFF::AppPreExit, UFunctions::AppPreExit},
	{OFF::PreLogin, UFunctions::PreLogin},
	{OFF::MarinerPreLogin, UFunctions::PreLogin},
	{OFF::Login, UFunctions::Login},
	{OFF::InitListen, UFunctions::InitListen},
	{OFF::FindFileInPakFiles, UFunctions::FindFileInPakFiles},
	{OFF::IsNonPakFileNameAllowed, UFunctions::IsNonPakFilenameAllowed},
	//{OFF::GameMapsSettings, UGameMapSettings},
};

typedef __int64(__fastcall* GenericFunc)(__int64* This);
typedef __int64(__fastcall* PrivateMatchEH_T)(__int64* This, unsigned char IDK);
typedef void(__thiscall* EquipRequest_T)(SDK::UMarinerEquipItemToProfile* This, bool bSuccess);
typedef void(__thiscall* EquipActivate_T)(SDK::UMarinerEquipItemToProfile* This);
typedef SDK::FString*(__thiscall* GetAccountName_T)(SDK::UMangoPlayerManager* This, SDK::FString* InString);
typedef SDK::FMangoProfile*(__fastcall* GetMangoProfile_T)(SDK::UMangoPlayerManager* This);
typedef wchar_t*(__fastcall* GetMangoId_T)(SDK::UMangoPlayerManager* This);
typedef SDK::UMarinerLoadEquippedDataForCharacter*(__fastcall* LoadEquippedDataForCharacter_T)(SDK::UMarinerLoadEquippedDataForCharacter* This);
typedef SDK::FString* (__fastcall* GetBaseURL_T)(SDK::FString* retstr);
typedef __int64(__fastcall* ChangePerspective_T)(SDK::AMarinerPlayerController* This, SDK::FName PerspectiveName);
typedef __int64(__fastcall* SelectPrivateMatchOrSmth_T)(SDK::AMarinerHUD* This);
typedef SDK::UMarinerMenuStackLayer*(__fastcall* PushLayerToActiveStack_T)(SDK::UMarinerMenuStackManager* This, SDK::UMarinerMenuStackLayer* Layer);

A8CL::OFFSET HandleEquipRequest("HandleEquipRequest", 0x929D50);
A8CL::OFFSET EquipActivate("UMarinerEquipItemToProfile::Activate", 0x908B50);

//A8CL::OFFSET GetAccountName("UMangoManager::GetActiveAccountName", 0xA07DD0); I don't think this gets called anywhere
A8CL::OFFSET GetMangoProfile("GetMangoProfile", 0xA0C700);
A8CL::OFFSET GetMangoId("GetMangoId", 0xA0C6D0);
A8CL::OFFSET LoadEquippedDataForCharacter("UMarinerLoadEquippedDataForCharacter", 0x922870);
A8CL::OFFSET ChangePerspective("AMarinerPlayerController::ChangePerspective", 0xBD7A20);
A8CL::OFFSET SelectPrivateMatchOrSmth("SelectPrivateMatchOrSmth", 0xC13860);
A8CL::OFFSET PushLayerToActiveStack("UMarinerMenuStackManager::PushToActiveStack", 0xC638F0);

A8CL::OFFSET StartSelected("UMarinerPrivateMatchMenu::OnStartSelected", 0xCEDEE0);

static SDK::UMarinerLoadEquippedDataForCharacter* __fastcall LoadEquip(SDK::UMarinerLoadEquippedDataForCharacter* This)
{
	LogA("UMarinerLoadEquippedDataForCharacter", This->EquippedSkinToLoad.Get()->GetFullName());
	return LoadEquippedDataForCharacter.VerifyFC<LoadEquippedDataForCharacter_T>()(This);
}

SDK::UMarinerMenuStackLayer* __fastcall PushToActiveStack(SDK::UMarinerMenuStackManager* This, SDK::UMarinerMenuStackLayer* Layer)
{
	LogA(PushLayerToActiveStack.GetName(), Layer->GetFullName());
	return PushLayerToActiveStack.VerifyFC<PushLayerToActiveStack_T>()(This, Layer);
}

__int64 __fastcall SelectPrivateMatch(SDK::AMarinerHUD* This)
{
	LogA(SelectPrivateMatchOrSmth.GetName(), This->GetFullName());
	return SelectPrivateMatchOrSmth.VerifyFC<SelectPrivateMatchOrSmth_T>()(This);
}

// So CharacterCustomization_C is persistent across levels, the entire game

typedef void(__thiscall* EquipNOW)(SDK::UMangoPlayerManager* This);
typedef SDK::UMarinerEquipItemToProfile*(__fastcall* EquipME)(SDK::UObject* World, SDK::TArray<SDK::UMarinerCMSItemDataAsset*>& ItemsToEquip, SDK::UMarinerPlayableCharacter* PlayableCharacter, bool bRanked);

void IDK(SDK::UMarinerEquipItemToProfile* This) // UMarinerEquipItemToProfile::Activate()
{
	std::string ItemsToEquip;

	SDK::UMarinerSkinCollectionDataAsset* TheSkin = 0;
	for (SDK::UMarinerCMSItemDataAsset*& DataAsset : This->ItemsToEquip)
	{
		TheSkin = static_cast<SDK::UMarinerSkinCollectionDataAsset*>(DataAsset);
		ItemsToEquip += DataAsset->GetFullName() + " | ";
	}
	LogA("SDK::UMarinerEquipItemToProfile::Activate", ItemsToEquip);
	LogA("Some stupid comparison byte", HexToString(OffsetToByte(PB(0x493BD40))));

	//EquipActivate.VerifyFC<EquipActivate_T>()(This);

	SDK::UCharacterCustomization_C* Custom = Pointers::GetLastOf<SDK::UCharacterCustomization_C>();

	if (Custom)
	{
		std::string Data{ "" };
		for (SDK::UMarinerPlayableCharacter*& Char : Custom->PlayableCharactersData)
		{

			Data += std::format("CharacterName: {}, ", Char->CharacterName.ToString());
		}
		LogA("Characters", Data);
	}	
}

/*

I have spent SO MUCH TIME TRYING TO FIND THIS, so I will post exactly what the issue is.

0x605C70 - UniqueIdValidator

I have no proper name to give this, but this stupid function makes the MangoId 'INVALID' if your AMarinerPlayerState->UniqueId is invalid, so forcing the change does not matter.
I am patching this worthless function so that it never needs to validate the pointless UniqueId again.


*/

/*

UMangoPlayerManager Pad_98 [Size] Hex 0x6F0 | Decimal 1776 (Bytes) [14208 bits]

000  -> 320			[320] ???
320  -> 1056		[736] FMangoProfile
1056 -> 1176		[720] ???

*/

typedef void(__thiscall* SetUniqueId_T)(SDK::FUniqueNetIdRepl This, SDK::FName Type, const SDK::FString& Contents);
void SetUniqueId(SDK::FUniqueNetIdRepl This, SDK::FName Type, const SDK::FString& Contents)
{
	OFF::UniqueIdFromString.VerifyFC<SetUniqueId_T>()(This, Type, Contents);
}

A8CL::OFFSET MenuThingy("Idk", 0xBA56D0);
typedef void(__thiscall* MenuThing_T)(SDK::UMarinerGameInstance* This, SDK::FString* LastPagePath, SDK::FString* CurrentPagePath, int Var4, SDK::FString* ActionType);

void MenuThing(SDK::UMarinerGameInstance* This, SDK::FString* LastPagePath, SDK::FString* CurrentPagePath, int Var4, SDK::FString* ActionType)
{
	LogA(MenuThingy.GetName(), std::format("[This]: {} | [LastPagePath]: {} | [CurrentPagePath]: {} | [Var4]: {} | [ActionType] {}", This->GetFullName(), LastPagePath->ToString(), CurrentPagePath->ToString(), std::to_string(Var4), ActionType->ToString()));
	return MenuThingy.VerifyFC<MenuThing_T>()(This, LastPagePath, CurrentPagePath, Var4, ActionType);
}
#include <intrin.h>
A8CL::OFFSET Stupid("idiot", 0x242A9E0);
void IdkYet(SDK::UEngine* This, SDK::FWorldContext& Context, float Idk)
{

	LogA("Browse", HexToString((uintptr_t)_ReturnAddress() - GBA));
	LogA(This->GetFullName(), UFunctions::Helpers::FWorldContextParser(Context) + " | Float: " + std::to_string(Idk));
	Stupid.VerifyFC<void(__thiscall*)(SDK::UEngine* This, SDK::FWorldContext& IDK, float Idk)>()(This, Context, Idk);
}

void __fastcall InitGI(SDK::UMarinerGameInstance* This)
{
	LogA("ReceiveInit", This->GetFullName());
	OFF::ReceiveInit.VerifyFC<void(__fastcall*)(SDK::UMarinerGameInstance*)>()(This);
}

void Mariner::Init_Hooks()
{
	if (Hooks::Init())
	{
		Hooks::CreateAndEnableHooks(HookList);
		Hooks::CreateAndEnableHooks(MenuHooks);
		Hooks::CreateAndEnableHook(OFF::ReceiveInit, InitGI);
		//Hooks::CreateAndEnableHook(LoadEquippedDataForCharacter, LoadEquip); For some reason this causes the profile picture to be infinite loading screen

		/*BYTE NewName[37]{0x41, 0x00, 0x65, 0x00, 0x79, 0x00, 0x74, 0x00, 0x68, 0x00, 0x38};
		BytePatcher::ReplaceBytes(PB(0x3510060), NewName);
		BytePatcher::ReplaceBytes(PB(0x3053718), {0x41, 0x00, 0x65, 0x00, 0x79, 0x00, 0x74, 0x00, 0x68, 0x00, 0x38, 0x00, 0x00});*/
		//Hooks::CreateAndEnableHook(GetAccountName, GetAccountNameH);
		
		//Hooks::CreateAndEnableHook(EquipActivate, IDK);
		//BytePatcher::ReplaceByte(PB(0x908D0D), 0xEB); Removes fail condition for byte 493BD40 which is compared a lot so I am going to just patch *it*
		//BytePatcher::ReplaceByte(PB(0x493BD40), 0x00); // I have no clue what this byte represents but patching it gets rid of some fail conditions, it doesn't get reverted but I assume it's an enum.
		//BytePatcher::ReplaceByte(PB(0x493BAD0), 0x00);
		//BytePatcher::ReplaceByte(PB(0x908D04), 0xEB); // SHUTUP I HAVE A VALID MANGO ID
		//BytePatcher::ReplaceBytes(PB(0x4937F70), {}); // Some sort of global MangoId account, is referenced in UMangoManager::GetMangoId() disassembly

		/*BYTE NoJump[2]{NOP, NOP};
		BytePatcher::ReplaceBytes(PB(0x605C92), NoJump);
		BytePatcher::ReplaceBytes(PB(0x605C9C), NoJump);*/

		/*BytePatcher::ReplaceBytes(PB(0x909305),
			{
			 0x48, 0x8B, 0xCB,				// mov rcx, rbx
			 0xBA, 0x01, 0x00, 0x00, 0x00,	// mov edx, 1
			 NOP, 							// For easy alignment
			 0xE8, 0x3D, 0x0A, 0x02, 0x00,	// call "HandleEquipRequest" (That name was guessed)
			 RETN, NOP						// end function
			}
		);*/ // Attempting to completely skip the STUPID API request that checks ownership and whatnot before equipping items, I have been on THIS FOR 9 HOURS

		// mov al, 1
		BYTE ReturnOne[5]{0xB0, 0x01, RETN, NOP, NOP};  

		BytePatcher::ReplaceBytes(PB(0xA4CD30), ReturnOne); // Removes the EAC failed to initialize popup.
		BytePatcher::ReplaceBytes(PB(0x9D9C90), ReturnOne); // UMangoCMSManager::TryGetCMSItemByAssetPath() should give ownership to all cosmetics/characters.
		BytePatcher::ReplaceBytes(PB(0xA0B1C0), ReturnOne); // UMangoInventoryManager::GetInventorySkin() should allow for all skins to be unlocked.
		BytePatcher::ReplaceBytes(PB(0xA14180), ReturnOne); // UMangoInventoryManager::IsCharacterOwned() should get rid of the stupid text saying we don't own them.
		BytePatcher::ReplaceBytes(PB(0xA14D90), ReturnOne); // UMangoInventoryManager::IsItemOwned() should unlock all emotes.
		BytePatcher::ReplaceBytes(PB(0xA13F10), ReturnOne); // UMangoInventoryManager::IsActiveBlastPassSeasonOwned
		BytePatcher::ReplaceBytes(PB(0xA140F0), ReturnOne); // UMangoInventoryManager::IsBlastPassOwned
		BytePatcher::ReplaceBytes(PB(0x9BC430), {0xB0, 0x02, RETN, NOP, NOP}); // UMangoConnectionManager::GetGameVersion() should give us Mythic Edition.		
		BytePatcher::ReplaceBytes(PB(0xA56810), {NOP, NOP, NOP, NOP, NOP, NOP, NOP, 0x0F, 0x84}); // Patches the stupid PartyErrorReason_AlreadyInSession preventing you from launching a second instance of the game.

		if (CMLA::SkipMovies.GetAsBool()) BytePatcher::ReplaceBytes(PB(0xA428F5), {NOP, NOP, NOP, NOP, NOP}); // Prevents the StartupMovies TArray from being filled with movie names, completely skipping the sequence. [Starts at 0xA42650]
	
		//BytePatcher::ReplaceBytes(PB(0x9C4480), ReturnOne); // Enables "E3 Mode" / Puts you in a limbo state, I've never seen a temp world before but that's a thing
		//BytePatcher::ReplaceBytes(PB(0x9C3BB0), ReturnOne); // Enables "Demo Mode" / removes the store
		//BytePatcher::ReplaceBytes(PB(0x9C4B00), ReturnOne); // UMarinerGlobalsFunctionLibrary::IsOSSOrigin
		//BytePatcher::ReplaceBytes(PB(0x9C4BB0), {0xB0, 0x01, RETN, NOP, NOP, NOP}); // UMarinerGlobalsFunctionLibrary::IsOSSSteam
		//BytePatcher::ReplaceBytes(PB(0x9DAE40), ReturnOne); // UMarinerGameGlobals::ValidateSkin
		//BytePatcher::ReplaceBytes(PB(0x93A500), ReturnOne);
		//BytePatcher::ReplaceBytes(PB(0xCE3DF0), ReturnOne); // No idea it's some validation function in AMarinerMainMenuHUD which has no functions exposed in the SDK
		//BytePatcher::ReplaceBytes(PB(0x9F9920), ReturnOne); // UMangoPartyManager::AreWePartyLeader

		//BytePatcher::ReplaceBytes(PB(0xA797CD), {NOP, NOP, NOP, NOP, NOP}); // UMarinerGameUserSettings::SetSavedCulture patches out the ProcessMulticastDelegate for changing settings
	}
}

void Mariner::Init_Engine()
{
	while (GEngine() == nullptr) Sleep(25);

	if (!IsNull(Mariner::MapSettings = SDK::UGameMapsSettings::GetDefaultObj()))
	{
		Mariner::MapSettings->GameDefaultMap.AssetPathName = Pointers::FString2FName(CMLA::GameDefaultMap.GetArgumentAsString());
		Mariner::MapSettings->TransitionMap.AssetPathName = Pointers::FString2FName(CMLA::TransitionMap.GetArgumentAsString());
		Mariner::MapSettings->GlobalDefaultGameMode.AssetPathName = Pointers::FString2FName(CMLA::GlobalDefaultGameMode.GetArgumentAsString());
	}

	SDK::UGameMapsSettings* New = (SDK::UGameMapsSettings*)Call<SDK::UClass*(__fastcall*)()>(PB(0x1777850))();

	LogA("Maps", HexToString((uintptr_t)Mariner::MapSettings) + " | " + HexToString((uintptr_t)New));
	LogA("Map", New->GetFullName());
	LogA("OldMap", Mariner::MapSettings->GetFullName());
}

void Mariner::Init_Vars(SDK::UWorld* GWorld)
{
	if (GWorld)
	{
		Mariner::GameInstance = static_cast<SDK::UMarinerGameInstance*>(GWorld->OwningGameInstance);
		Mariner::ServerList = SDK::UServerList_C::FindClass("WidgetBlueprintGeneratedClass ServerList.ServerList_C");
		Mariner::PrivateMatchMenu = SDK::UPrivateMatchMenu_C::FindClass("WidgetBlueprintGeneratedClass PrivateMatchMenu.PrivateMatchMenu_C");
		Mariner::DebugPlayMenu = SDK::UDebugPlayMenu_C::FindClass("WidgetBlueprintGeneratedClass DebugPlayMenu.DebugPlayMenu_C");

		SDK::UMarinerMenuGlobals* MenuGlobals = GetBlueprintClass<SDK::UMarinerGlobalsFunctionLibrary>()->GetMenuGlobals();
		for (SDK::FMarinerCulture& Culture : MenuGlobals->CultureList)
		{
			LogA("Culture", Culture.LanguageCode.ToString() + " | " + Culture.DisplayName.ToString());
		}
		LogA("GetCurrentCulture", GetBlueprintClass<SDK::UMarinerGlobalsFunctionLibrary>()->GetCurrentCulture().ToString());
		
		SDK::FString NewURL{L"127.0.0.1:443"};
		OFF::FString.VerifyFC<UFunctions::Decl::CopyString>()(reinterpret_cast<SDK::FString*>(PB(0x492FCA8)), &NewURL);
		OFF::FString.VerifyFC<UFunctions::Decl::CopyString>()(reinterpret_cast<SDK::FString*>(PB(0x492FD08)), &NewURL);

		LogA("CMS", reinterpret_cast<SDK::FString*>(PB(0x492FCA8))->ToString()); // cms.ops.rocketarena.com
		LogA("STAGE", reinterpret_cast<SDK::FString*>(PB(0x492FD08))->ToString()); // stage.ops.rocketarena.com
		
		//SetUniqueId(Player()->PlayerState->UniqueId, Pointers::FString2FName(L"WINDOWS"), L"Aeyth8");

		/*unsigned char * Profile = (unsigned char*)Mariner::GameInstance->MangoManagersInstance->MangoPlayerManager + 0x1D8;
		SDK::FMangoProfile* LocalProfile = (SDK::FMangoProfile*)(Profile);*/

		
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
	SDK::UWorld*& World = *reinterpret_cast<SDK::UWorld**>(OFF::GWorld.PlusBase());
	if (bLog && IsNull(World))
	{
		LogA("Logic", "GWorld is a null pointer!");
	}
	return World;
}

SDK::UBlueprintFunctionLibrary* const& Mariner::BlueprintFunctionLibrary()
{
	static SDK::UBlueprintFunctionLibrary* Library{nullptr};
	if (!Library) Library = SDK::UBlueprintFunctionLibrary::GetDefaultObj();

	return Library;
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

SDK::FMangoProfile* Mariner::GetLocalProfile()
{
	if (Mariner::GameInstance)
	{
		static SDK::FMangoProfile GMangoProfile = reinterpret_cast<SDK::FMangoProfile&>(PB(0x4937C80));
		return &GMangoProfile;
	}

	LogA("Logic", "FMangoProfile local profile is a null pointer!");
	return nullptr;
}

// -- Helpers

SDK::UMarinerMenuStackLayer* __fastcall Mariner::PushLayerToActiveStack(SDK::UClass* Layer)
{
	if (Mariner::GameInstance && Mariner::GameInstance->MenuManagerInstance)
	{
		return Mariner::GameInstance->MenuManagerInstance->PushLayerToActiveStack(Layer);
	}
	return nullptr;
}

// -- Extra

void Mariner::LogFImpl(const char* File, int Line, __int64 Category, unsigned char& VerbosityType, wchar_t* Format)
{
	OFF::LogFInternalImpl.VerifyFC<UFunctions::Decl::LogFImpl>()(File, Line, Category, (UFunctions::ELogVerbosity)VerbosityType, Format);
}

void Mariner::LogFImpl(unsigned char& VerbosityType, wchar_t*& Format)
{
	static uintptr_t Category = PB(0x493BD44);
	//static SDK::FName Category = Pointers::FString2FName(L"A8CL");
	//static __int64 CategoryIndex = Category.ComparisonIndex;

	Mariner::LogFImpl(0, 0, Category, VerbosityType, Format);
}

void Mariner::LogFImpl(const wchar_t* Format)
{
	static unsigned char Verbosity = UFunctions::ELogVerbosity::Display;
	Mariner::LogFImpl(Verbosity, (wchar_t*&)Format);
}

// -- FText

//SDK::FText* FText::FromStringTable(const __int64& InTableId, __int64& InKey, const EStringTableLoadingPolicy InLoadingPolicy)
//{
//	return OFF::FromStringTable.VerifyFC<UFunctions::Decl::FromStringTable>()((SDK::FName&)InTableId, (SDK::FString&)InKey, (unsigned char)InLoadingPolicy);
//}

// -- FMemory

void* FMemory::Malloc(unsigned long long Count, unsigned int Alignment)
{
	return OFF::FMalloc.VerifyFC<Decl::Malloc>()(Count, Alignment);
}

void* FMemory::Realloc(void* Original, unsigned long long Count, unsigned int Alignment)
{
	return OFF::FRealloc.VerifyFC<Decl::Realloc>()(Original, Count, Alignment);
}

void FMemory::Free(void* Original)
{
	OFF::FFree.VerifyFC<Decl::Free>()(Original);
}