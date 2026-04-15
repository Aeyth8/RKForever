#include "UFunctions.hpp"
#include "Pointers.h"
#include "UnrealTypes.h"
#include "../Global.hpp"
#include "../Hooks/Hooks.hpp"
#include "../Offsets.h"


/*

Written by Aeyth8

https://github.com/Aeyth8

*/

using namespace A8CL;

/*
		Helpers
*/



const std::string& UFunctions::Helpers::FURLParser(SDK::FURL& URL)
{
	FURLParseCache.clear();

	// Parses FStrings
	for (int i{0}; i < 5; ++i)
	{
		if (&URL->*FURLPointers[i])
		{
			FURLParseCache += ("[" + FURLPointerNames[i] + "]: " + (URL.*FURLPointers[i]).ToString());

			// Combines the host and port
			if (i == 1 && URL.Port) FURLParseCache += ":" + std::to_string(URL.Port);
			FURLParseCache += " | ";
		}
	}
	if (&URL.Valid) FURLParseCache += ("[Valid]:" + std::to_string(URL.Valid) + " | ");

	if (URL.Op.Num() > 0) {
		FURLParseCache += "[Options]: ";
		for (int i{0}; i < URL.Op.Num(); ++i) FURLParseCache += ("?" + URL.Op[i].ToString());
		FURLParseCache += " | ";
	}
	
	return FURLParseCache;
}

const std::string& UFunctions::Helpers::FLPIParser(SDK::FFullyLoadedPackagesInfo& Info)
{
	FLPIParseCache.clear();

	FLPIParseCache += "\n[FullyLoadType]: " + FullyLoadPackageType[(int)Info.FullyLoadType];
	FLPIParseCache += " | [Tag]: " + Info.Tag.ToString() + " | [PackagesToLoad]: { ";

	for (int i{0}; i < Info.PackagesToLoad.Num(); ++i) FLPIParseCache += Info.PackagesToLoad[i].ToString() + " | ";
	FLPIParseCache += " } | [LoadedObjects]: { ";

	for (int i{0}; i < Info.LoadedObjects.Num(); ++i) FLPIParseCache +=  Info.LoadedObjects[i]->GetFullName() + " | ";
	FLPIParseCache += " }\n";

	return FLPIParseCache;
}

const std::string& UFunctions::Helpers::FLPIParser_T(SDK::TArray<SDK::FFullyLoadedPackagesInfo>& Info)
{
	std::string Return;

	for (int i{0}; i < Info.Num(); ++i) Return += UFunctions::Helpers::FLPIParser(Info[i]) + "\n";

	return Return;
}

const std::string& UFunctions::Helpers::FWorldContextParser(SDK::FWorldContext& Context)
{
	FWorldContextParseCache.clear();

	FWorldContextParseCache += ("\n[LastURL]: " + FURLParser(Context.LastURL));
	FWorldContextParseCache += ("\n[LastRemoteURL]: " + FURLParser(Context.LastRemoteURL));
	FWorldContextParseCache += ("\n[PackagesToFullyLoad]: " + FLPIParser_T(Context.PackagesToFullyLoad) + "\n[LoadedLevelsForPendingMapChange]: { ");

	for (int i{0}; i < Context.LoadedLevelsForPendingMapChange.Num(); ++i) FWorldContextParseCache += (Context.LoadedLevelsForPendingMapChange[i]->GetFullName() + " | ");
	FWorldContextParseCache += " }\n";

	// I don't think the rest is very important..

	return FWorldContextParseCache;
}

void UFunctions::Helpers::ProcessEnd()
{
	Hooks::DisableAllHooks();
	Hooks::Uninit(); 
	Global::CloseLog();
}

extern "C" bool IsInLocalDirectory(const wchar_t*);

bool UFunctions::Helpers::CheckForLocalDirectory(const wchar_t* Filename)
{
	return IsInLocalDirectory(Filename);
}


using namespace Global;


/*
		UFunctions
*/

#include "../CmdArgs/CommandLineArgs.h"

#include "../../Dumper-7/SDK/Mariner_classes.hpp"
#include "../../Dumper-7/SDK/CharacterCustomization_classes.hpp"
#include "../../Dumper-7/SDK/DebugPlayMenu_classes.hpp"
#include "../Logic/Mariner.h"
#include "../../Dumper-7/SDK/ServerList_classes.hpp"

void UFunctions::UConsole(SDK::UConsole* This, SDK::FString& Command)
{
	std::string StrCommand = Command.ToString();

	LogA("UConsole", StrCommand);
	//if (StrCommand == "char") Pointers::GetLastOf<SDK::UCharacterCustomization_C>(false)->LocalProfile.MangoId = L"Aeyth8";
	if (StrCommand == "debug")
	{
		/*SDK::UMarinerPlaylistMenu* Menu = Pointers::GetLastOf<SDK::UMarinerPlaylistMenu>();
		SDK::UClass* Widget = Menu->DebugPlayMenuType.Get();
		SDK::UUserWidget* DebugMenu = Mariner::UIHelpers->CreateWidgetWithOwner(Widget, Menu);
		DebugMenu->SetVisibility(SDK::ESlateVisibility::Visible);*/

		//SDK::UMarinerMenuStackManager* Manager = Pointers::GetLastOf<SDK::UMarinerMenuStackManager>();
		//static const SDK::TSubclassOf<SDK::UServerList_C> Class = SDK::UServerList_C::FindClass("WidgetBlueprintGeneratedClass DebugPlayMenu.DebugPlayMenu_C");
		if (Mariner::GameInstance) Mariner::GameInstance->MenuManagerInstance->PushLayerToActiveStack(Mariner::DebugPlayMenu);
		//Mariner::GameInstance->MenuManagerInstance->PushLayerToActiveStack(Pointers::GetLastOf<SDK::UMarinerPlaylistMenu>()->DebugPlayMenuType.Get())
		
		//Manager->PushToActiveStack(Pointers::GetLastOf<SDK::UDebugPlayMenu_C>());
	}
	else if (StrCommand == "name")
	{
		//Mariner::GameInstance->ShowMessageBox(Pointers::GetLastOf<SDK::UMarinerInventoryBaseMenu>()->EquipActiveMessageBox);
		LogA("MangoId", Mariner::GameInstance->MangoManagersInstance->MangoPlayerManager->GetMangoId().MangoIdStr.ToString());

		const wchar_t* Name = (const wchar_t*)PB(0x4937F70);
		char cName[260]{0};
		wcstombs_s(0, cName, Name, lstrlenW(Name));

		LogA("GMangoId", std::string(cName));
		//LogA("MangoId", Mariner::GetLocalProfile()->MangoId.ToString());
	}
	else if (StrCommand == "firstperson")
	{
		//Mariner::Player()->ChangePerspective(Pointers::FString2FName(L"SpecialAbility"));

		
		//Mariner::Player()->ApplyPerspective(Pointers::FString2FName(L"Default"), Mariner::Player()->GetDefaultPerspective(SDK::EMarinerCameraPerspectiveType::ThirdPerson));
		//Mariner::Player()->bInfiniteAmmo = true;
	}
	else if (StrCommand == "skin")
	{
		std::vector<SDK::UMarinerSkinCollectionDataAsset*> Assets = Pointers::FindObjects<SDK::UMarinerSkinCollectionDataAsset>();
		for (SDK::UMarinerSkinCollectionDataAsset*& Asset : Assets)
		{
			//SDK::UMarinerSkinUIData* Data = Asset->SkinUIData.Get();
			LogA("Asset", Asset->GetFullName());
		}
		/*SDK::AMarinerCharacter* Character = Pointers::Character<SDK::AMarinerCharacter>();
		if (Character)
		{
			//auto Skin = Character->LoadedSkinCollectionData->GetSkinUIData_ForceLoaded();
			//LogA(Skin->CharacterName.ToString(), Skin->)
		}*/
	}

	OFF::UConsole.VerifyFC<Decl::UConsole>()(This, Command);
}

UFunctions::BrowseReturnVal UFunctions::Browse(SDK::UEngine* This, SDK::FWorldContext& WorldContext, SDK::FURL URL, SDK::FString& Error)
{
	// Calling GetDefaultObj for this game does not work for overriding the default map, so I made this logic.
	// And then I ended up hooking the constructor to force grab the instance, it did not work.

	if (!Mariner::bIsInitialized)
	{
		Mariner::bIsInitialized = true;

		wchar_t* OverrideMap = const_cast<wchar_t*>(CMLA::GameDefaultMap.GetArgumentAsString());

		wchar_t MapBuffer[150]{0};
		wchar_t* Period = FindChar(OverrideMap, L'.', true);

		Substring(OverrideMap, MapBuffer, (uint16)0, uint16(Period - OverrideMap));
		SDK::FString CopyMap{MapBuffer};

		// I don't like the idea of distorting the logic for CMLA in this one game so I'm parsing the period out of the map name as browse does not use it.

		OFF::FString.VerifyFC<Decl::CopyString>()(&URL.Map, &CopyMap);
	}

	if (!Global::bConstructedUConsole) { Global::bConstructedUConsole = Pointers::ConstructUConsole(FName::NAME_FindOrAdd(CMLA::ConsoleKey.GetArgumentAsString()));
		LogA("Browse", "Constructed UConsole early.");
	}

	LogA("Browse", Helpers::FURLParser(URL));
	//LogA("Browse", Helpers::FWorldContextParser(WorldContext));

	return OFF::Browse.VerifyFC<Decl::Browse>()(This, WorldContext, URL, Error);
	
}

bool UFunctions::InitListen(SDK::UIpNetDriver* This, int32_t* InNotify, SDK::FURL& LocalURL, bool bReuseAddressAndPort, SDK::FString& Error)
{
	LogA("InitListen", This->GetFullName() + " | " + Helpers::FURLParser(LocalURL));
	LocalURL.Port = wcstol(CMLA::ServerPort.GetArgumentAsString(), 0, 10);

	return OFF::InitListen.VerifyFC<Decl::InitListen>()(This, InNotify, LocalURL, bReuseAddressAndPort, Error);
}

SDK::APlayerController* UFunctions::Login(SDK::APlayerController* This, SDK::UPlayer* NewPlayer, SDK::ENetRole InRemoteRole, SDK::FString& Portal, SDK::FString& Options, SDK::FUniqueNetIdRepl& UniqueId, SDK::FString& ErrorMessage)
{
	LogA("Login", "Called.");

	return OFF::Login.VerifyFC<Decl::Login>()(This, NewPlayer, InRemoteRole, Portal, Options, UniqueId, ErrorMessage);
}

void UFunctions::PreLogin(SDK::AGameModeBase* This, SDK::FString* Options, SDK::FString* Address, SDK::FUniqueNetIdRepl* UniqueId, SDK::FString* ErrorMessage)
{
	LogA("PreLogin", std::format("[AGameModeBase]: {} | [Options]: {} | [Address]: {} | [ErrorMessage]: {}", This->GetFullName(), Options->ToString(), Address->ToString(), ErrorMessage->ToString()));
	//OFF::MarinerPreLogin.VerifyFC<Decl::PreLogin>()(This, Options, Address, UniqueId, ErrorMessage);
}

void UFunctions::AppPreExit()
{
	Global::ConstructThread(Helpers::ProcessEnd);
	OFF::AppPreExit.VerifyFC<Decl::AppPreExit>()();
}

__int64* UFunctions::SpawnActor(SDK::UWorld* This, SDK::UClass* Class, const SDK::FVector& Location, const SDK::FRotator& Rotation, FActorSpawnParameters& SpawnParameters)
{



}

void UFunctions::ProcessEvent(SDK::UObject* This, SDK::UFunction* Function, LPVOID Parms)
{
	//LogA("PE", This->GetFullName() + " | " + std::to_string(This->Name.ComparisonIndex));

	//OFF::ProcessEvent.VerifyFC<Decl::ProcessEvent>()(This, Function, Parms);
}

bool UFunctions::IsNonPakFilenameAllowed(__int64* This, SDK::FString& InFilename)
{
	if (!InFilename) return false;

	if (Helpers::CheckForLocalDirectory(InFilename.Data) && GetFileAttributesW(InFilename.Data) != INVALID_FILE_ATTRIBUTES)
	{
		//LogA("IsNonPakFilenameAllowed OVERRIDE", InFilename.ToString());
		return true;
	}

	return OFF::IsNonPakFileNameAllowed.VerifyFC<Decl::IsNonPakFilenameAllowed>()(This, InFilename);
}

bool UFunctions::FindFileInPakFiles(__int64* This, const wchar_t* Filename, __int64** OutPakFile, __int64* OutEntry)
{
	if (Helpers::CheckForLocalDirectory(Filename) && GetFileAttributesW(Filename) != INVALID_FILE_ATTRIBUTES)
	{
		/*std::wstring WFile(Filename);
		LogA("FindFileInPakFiles OVERRIDE", std::string(WFile.begin(), WFile.end()));*/
		return false;
	}
	return OFF::FindFileInPakFiles.VerifyFC<Decl::FindFileInPakFiles>()(This, Filename, OutPakFile, OutEntry);
}