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
#include "../../SDK/PrivateMatchMenu_classes.hpp"
#include "../../SDK/CharacterCustomization_classes.hpp"

/*

Written by Aeyth8

https://github.com/Aeyth8

*/


using namespace A8CL; using namespace Global;


// -- Vars

SDK::UMarinerGameInstance*				Mariner::GameInstance{nullptr};

// -- Constants

constexpr const BYTE NOP{0x90};
constexpr const BYTE RETN{0xC3};
constexpr const BYTE JMP{0xEB}; // Jump short https://www.felixcloutier.com/x86/jmp

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
	if (Mariner::GameInstance)
	{
		Mariner::GameInstance->OnMovieCompleted();		
	}

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

typedef SDK::FString*(__thiscall* CopyString)(SDK::FString* This, SDK::FString* NewString);

typedef __int64(__fastcall* PrivateMatchEH_T)(__int64* This, unsigned char IDK);
typedef void(__thiscall* EquipRequest_T)(SDK::UMarinerEquipItemToProfile* This, bool bSuccess);
typedef void(__thiscall* EquipActivate_T)(SDK::UMarinerEquipItemToProfile* This);
typedef SDK::FString*(__thiscall* GetAccountName_T)(SDK::UMangoPlayerManager* This, SDK::FString* InString);
typedef SDK::FMangoProfile*(__fastcall* GetMangoProfile_T)(SDK::UMangoPlayerManager* This);
typedef wchar_t*(__fastcall* GetMangoId_T)(SDK::UMangoPlayerManager* This);
typedef SDK::UMarinerLoadEquippedDataForCharacter*(__fastcall* LoadEquippedDataForCharacter_T)(SDK::UMarinerLoadEquippedDataForCharacter* This);
typedef SDK::FString* (__fastcall* GetBaseURL_T)(SDK::FString* retstr);
typedef __int64(__fastcall* ChangePerspective_T)(SDK::AMarinerPlayerController* This, SDK::FName PerspectiveName);

A8CL::OFFSET HandleEquipRequest("HandleEquipRequest", 0x929D50);
A8CL::OFFSET EquipActivate("UMarinerEquipItemToProfile::Activate", 0x908B50);
A8CL::OFFSET PrivateMatchEH("MarinerMainMenuHUD PrivateMatchErrorHandler", 0xC30E40); // 0xC1F5F0 retrieves the error string
//A8CL::OFFSET GetAccountName("UMangoManager::GetActiveAccountName", 0xA07DD0); I don't think this gets called anywhere
A8CL::OFFSET GetMangoProfile("GetMangoProfile", 0xA0C700);
A8CL::OFFSET GetMangoId("GetMangoId", 0xA0C6D0);
A8CL::OFFSET LoadEquippedDataForCharacter("UMarinerLoadEquippedDataForCharacter", 0x922870);
A8CL::OFFSET ChangePerspective("AMarinerPlayerController::ChangePerspective", 0xBD7A20);

static __int64 __fastcall Perspective(SDK::AMarinerPlayerController* This, SDK::FName PerspectiveName)
{
	LogA("ChangePerspective", PerspectiveName.ToString());
	return ChangePerspective.VerifyFC<ChangePerspective_T>()(This, PerspectiveName);
}

static SDK::UMarinerLoadEquippedDataForCharacter* __fastcall LoadEquip(SDK::UMarinerLoadEquippedDataForCharacter* This)
{
	LogA("UMarinerLoadEquippedDataForCharacter", This->EquippedSkinToLoad.Get()->GetFullName());
	return LoadEquippedDataForCharacter.VerifyFC<LoadEquippedDataForCharacter_T>()(This);
}

wchar_t* GetMangoIdHook(SDK::UMangoPlayerManager* This)
{
	LogA("GetMangoId", "Called");
	return GetMangoId.VerifyFC<GetMangoId_T>()(This);
}

SDK::FMangoProfile* GetMangoProfileHook(SDK::UMangoPlayerManager* This)
{
	LogA("GetMangoProfile", "Called");

	SDK::FMangoProfile* Profile = GetMangoProfile.VerifyFC<GetMangoProfile_T>()(This);
	Profile->MangoId = SDK::FString(L"Aeyth8");
	Profile->LastPlayedMatchId = SDK::FString(L"I Want To Kill Myself");

	for (SDK::FMangoEquipItem& Progress : Profile->Equipment)
	{
		LogA("GetMangoProfile", Progress.ItemID.ToString());
	}

	if (Mariner::Character())
	{
		SDK::FString NewName(L"Aeyth8");
		Call<CopyString>(PB(0x3AF6B0))(&Mariner::Character()->PlayerState->PlayerName, &NewName);
	}

	return Profile;
}


__int64 __fastcall PrivateMatchErrorHandler(__int64* This, unsigned char IDK)
{
	static const SDK::TSubclassOf<SDK::UPrivateMatchMenu_C> Class = SDK::UPrivateMatchMenu_C::FindClass("WidgetBlueprintGeneratedClass PrivateMatchMenu.PrivateMatchMenu_C");	
	Mariner::GameInstance->MenuManagerInstance->PushLayerToActiveStack(Class);
	
	//SDK::UPrivateMatchMenu_C* Menu = Pointers::GetLastOf<SDK::UPrivateMatchMenu_C>();

	/*__int64 Result = PrivateMatchEH.VerifyFC<PrivateMatchEH_T>()(This, 0);
	LogA("PrivateMatchErrorHandler", HexToString(IDK));
	LogA("PrivateMatchErrorHandler", reinterpret_cast<SDK::UObject*>(This)->GetFullName());
	return Result;*/
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
	/*Call<EquipME>(PB(0x915950))(This->WorldContextObject.Get(), This->ItemsToEquip, This->PlayableCharacter, true);
	SDK::UMarinerProfileObjectManager* ObjectManager = Pointers::GetLastOf<SDK::UMarinerProfileObjectManager>();
	ObjectManager->MulticastSetDebugSkin(TheSkin);
	Pointers::GetLastOf<SDK::AMarinerCharacterLite>()->LoadedSkinData = TheSkin->GetSkinAsset().Get();
	This->OnProfileUpdated();

	Pointers::GetLastOf<SDK::UMarinerInventoryBaseMenu>()->OnEquipSucceeded();*/
	//Call<EquipNOW>(PB(0xA30030))(Mariner::GameInstance->MangoManagersInstance->MangoPlayerManager);
	/*BYTE JustEQUIPITALREADY[19]{0};
	memset(&JustEQUIPITALREADY, NOP, 19);
	BytePatcher::ReplaceBytes(PB(0x929DC4), JustEQUIPITALREADY);

	HandleEquipRequest.VerifyFC<EquipRequestT>()(This, true);*/
	//This->OnProfileUpdated();

	//This->EquipItemToProfile(This->WorldContextObject.Get(), This->ItemsToEquip, This->PlayableCharacter, false);
	
	//OFF::ProcessMulticastDelegate.VerifyFC<UFunctions::Decl::ProcessMulticastDelegate>()((__int64*)(reinterpret_cast<Multicast&>(This->SucceededOnServer).Pad), 0LL);
	//OFF::ProcessMulticastDelegate.VerifyFC<UFunctions::Decl::ProcessMulticastDelegate>()(This + 0x30, 0LL);
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


void Mariner::Init_Hooks()
{
	if (Hooks::Init())
	{
		const wchar_t* MyMangoId = L"Aeyth8";
		wchar_t* GMangoId = (wchar_t*)PB(0x4937F70);
		memmove(GMangoId, MyMangoId, sizeof(wchar_t*));
		//*GMangoId = *const_cast<wchar_t*>(MyMangoId);
		BytePatcher::ReplaceBytes(PB(0xA0C6DA), {NOP, NOP});

		Hooks::CreateAndEnableHooks(HookList);
		Hooks::CreateAndEnableHook(OFF::StartLogin, OnLoginStarted); // I would rather do a bytepatch but it would rather crash, for now a hook works fine.
		Hooks::CreateAndEnableHook(PrivateMatchEH, PrivateMatchErrorHandler);
		Hooks::CreateAndEnableHook(GetMangoProfile, GetMangoProfileHook);
		Hooks::CreateAndEnableHook(ChangePerspective, Perspective);
		Hooks::CreateAndEnableHook(GetMangoId, GetMangoIdHook);
		//Hooks::CreateAndEnableHook(LoadEquippedDataForCharacter, LoadEquip); For some reason this causes the profile picture to be infinite loading screen

		BYTE NewName[37]{0x41, 0x00, 0x65, 0x00, 0x79, 0x00, 0x74, 0x00, 0x68, 0x00, 0x38};
		BytePatcher::ReplaceBytes(PB(0x3510060), NewName);
		BytePatcher::ReplaceBytes(PB(0x3053718), {0x41, 0x00, 0x65, 0x00, 0x79, 0x00, 0x74, 0x00, 0x68, 0x00, 0x38, 0x00, 0x00});
		//Hooks::CreateAndEnableHook(GetAccountName, GetAccountNameH);
		
		Hooks::CreateAndEnableHook(EquipActivate, IDK);
		//BytePatcher::ReplaceByte(PB(0x908D0D), 0xEB); Removes fail condition for byte 493BD40 which is compared a lot so I am going to just patch *it*
		//BytePatcher::ReplaceByte(PB(0x493BD40), 0x00); // I have no clue what this byte represents but patching it gets rid of some fail conditions, it doesn't get reverted but I assume it's an enum.
		//BytePatcher::ReplaceByte(PB(0x493BAD0), 0x00);
		BytePatcher::ReplaceByte(PB(0x908D04), 0xEB); // SHUTUP I HAVE A VALID MANGO ID
		//BytePatcher::ReplaceBytes(PB(0x4937F70), {}); // Some sort of global MangoId account, is referenced in UMangoManager::GetMangoId() disassembly

		/*BYTE NoJump[2]{NOP, NOP};
		BytePatcher::ReplaceBytes(PB(0x605C92), NoJump);
		BytePatcher::ReplaceBytes(PB(0x605C9C), NoJump);*/

		BytePatcher::ReplaceBytes(PB(0x909305),
			{
			 0x48, 0x8B, 0xCB,				// mov rcx, rbx
			 0xBA, 0x01, 0x00, 0x00, 0x00,	// mov edx, 1
			 NOP, 							// For easy alignment
			 0xE8, 0x3D, 0x0A, 0x02, 0x00,	// call "HandleEquipRequest" (That name was guessed)
			 RETN, NOP						// end function
			}
		); // Attempting to completely skip the STUPID API request that checks ownership and whatnot before equipping items, I have been on THIS FOR 9 HOURS

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

		LogA("GameInstance", HexToString(*(uintptr_t*)GameInstance));
		LogA("GameInstancePTR", HexToString((uintptr_t)GameInstance));
		//SDK::FMangoProfile& Profile = const_cast<SDK::FMangoProfile&>(GameInstance->MangoManagersInstance->MangoPlayerManager->GetMangoProfile());
		//Profile->MangoId = L"Aeyth8";
		//Mariner::GetLocalProfile()->MangoId = L"Aeyth8";
		//SDK::FMangoProfile& LocalProfile = reinterpret_cast<SDK::FMangoProfile&>(Mariner::GameInstance->MangoManagersInstance->MangoPlayerManager->Pad_98[320]);
		/*SDK::FMangoProfile* Profile = (SDK::FMangoProfile*)FMemory::Malloc(sizeof(SDK::FMangoProfile));
		Profile->MangoId = SDK::FString(L"Aeyth8");

		memmove(Mariner::GameInstance->MangoManagersInstance->MangoPlayerManager + 0x1D8, Profile, sizeof(SDK::FMangoProfile));*/
		SDK::FString NewName(L"Aeyth8");

		SDK::UMangoPlayerManager& Manager = *Mariner::GameInstance->MangoManagersInstance->MangoPlayerManager;
		SDK::FString* Name = reinterpret_cast<SDK::FString*>((((uintptr_t)&Manager) + 0x1D8 + 0x10));
		//SDK::FString* Name = (SDK::FString*)(Mariner::GameInstance->MangoManagersInstance->MangoPlayerManager + 0x1D8 + 0x10);
		Call<CopyString>(PB(0x3AF6B0))(Name, &NewName);
		Call<CopyString>(PB(0x3AF6B0))(&reinterpret_cast<SDK::FMangoProfile&>(PB(0x4937C80)).MangoId, &NewName);
		LogA("Name", Name->ToString());


		SDK::UCharacterCustomization_C* Customizer = Pointers::GetLastOf<SDK::UCharacterCustomization_C>();

		std::string CharacterData{""};
		for (const SDK::UMarinerPlayableCharacter* Character : Customizer->PlayableCharactersData)
		{
			CharacterData += std::format("CharacterName: {} | ", Character->CharacterName.ToString());
		}
		LogA("Name", Pointers::GetLastOf<SDK::UCharacterCustomization_C>()->LocalProfile.MangoId.ToString());

		LogA("Characters", CharacterData);
		
		SDK::FString ReturnStr{};
		Call<GetBaseURL_T>(PB(0x6DA7C0))(&ReturnStr);
		
		LogA("BaseURL", ReturnStr.ToString());


		SDK::AMarinerPlayerState* State = static_cast<SDK::AMarinerPlayerState*>(Mariner::Player()->PlayerState);
		if (State)
		{
			State->CurrentOnlinePlatform = Pointers::FString2FName(L"Steam");
			Call<CopyString>(PB(0x3AF6B0))(&State->CurrentPlatformID_Insecure, &NewName);
			LogA("State", "Succeeded");
		}
		
		//static_cast<SDK::AMarinerPlayerState*>(Mariner::Character()->PlayerState);
		/*unsigned char * Profile = (unsigned char*)Mariner::GameInstance->MangoManagersInstance->MangoPlayerManager + 0x1D8;
		SDK::FMangoProfile* LocalProfile = (SDK::FMangoProfile*)(Profile);

		const wchar_t* NewId = L"Aeyth8";
		int32 Length = wcslen(NewId);
		SDK::FString* Id = &LocalProfile->MangoId;

		if (Id->Data) FMemory::Free(Id->Data);
		Id->Data = (wchar_t*)FMemory::Malloc((Length + 1) * sizeof(wchar_t));
		memcpy(Id->Data, NewId, (Length + 1) * sizeof(wchar_t));

		Id->NumElements = Length;
		Id->MaxElements = Length + 1;*/

		//Call<CopyString>(PB(0x3AF6B0))(&LocalProfile->MangoId, &NewId);

		//LogA("MangoId", LocalProfile->MangoId.ToString());

		/*static const uint8 SpecialUniqueId[] = { 0x41, 0x00 , 0x65 , 0x00 , 0x79 , 0x00 , 0x74 , 0x00 , 0x68 , 0x00 , 0x38 , 0x00 , 0x52 , 0x00 , 0x4B , 0x00 , 0x46 , 0x00 , 0x6F , 0x00 , 0x72 , 0x00 , 0x65 , 0x00 , 0x76 , 0x00 , 0x65 , 0x00 , 0x72 , 0x00 };
		SDK::TArray<uint8>* RepBytes = (SDK::TArray<uint8>*)(FMemory::Malloc(sizeof(SDK::TArray<uint8>)));
		RepBytes->Data = (uint8*)FMemory::Malloc(30 * sizeof(uint8));
		memcpy(RepBytes->Data, SpecialUniqueId, sizeof(SpecialUniqueId));
		RepBytes->NumElements = 30;
		RepBytes->MaxElements = 30;


		if (Player()) Player()->PlayerState->UniqueId.ReplicationBytes = *RepBytes;*/
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