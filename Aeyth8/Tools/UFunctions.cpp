#include "UFunctions.hpp"
#include "Pointers.h"
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

bool UFunctions::Helpers::CheckForLocalDirectory(const wchar_t* Filename, unsigned char& Byte)
{
	while ((Byte & 0b11) < 3)
	{
		// 1,3,6								  // 2,4,7
		if (Filename[((Byte & 0b11) * 3) + 0] != '.' || Filename[((Byte & 0b11) * 3) + 1] != '.')
		{
			break;
		}

		// 0,5,8 (due to iterators and arrays this is technically 1,6,9)
		if (Filename[((Byte & 0b11) * 3) + 2] != '/' && Filename[((Byte & 0b11) * 3) + 2] != '\\')
		{
			break;
		}

		Byte |= (1 << ((Byte & 0b11) + 2));

		Byte = (Byte & ~0b11) | ((Byte & 0b11) + 1);
	}

	// This logic ensures that we are only allowing file overrides from within the game directory, and disallowing from externals such as AppData\Local
	return ((Byte & 0b00011100) == 0b00011100);
}


using namespace Global;


/*
		UFunctions
*/

#include "../CmdArgs/CommandLineArgs.h"

#include "../../SDK/Mariner_classes.hpp"
#include "../../SDK/CharacterCustomization_classes.hpp"
#include "../../SDK/DebugPlayMenu_classes.hpp"
#include "../Logic/Mariner.h"
#include "../../SDK/ServerList_classes.hpp"

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

	if (!Global::bConstructedUConsole) { Global::bConstructedUConsole = Pointers::ConstructUConsole(CMLA::ConsoleKey.GetArgumentAsString());
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

	BYTE X{0};

	X |= (OFF::IsNonPakFileNameAllowed.VerifyFC<Decl::IsNonPakFilenameAllowed>()(This, InFilename) << 5);

	if (UFunctions::Helpers::CheckForLocalDirectory(InFilename.CStr(), X) && GetFileAttributesW(InFilename.CStr()) != INVALID_FILE_ATTRIBUTES)
	{
		//LogA("IsNonPakFilenameAllowed OVERRIDE", InFilename.ToString());
		return true;
	}
	
	// Returns the result of the actual function which is stored in the 6th bit.
	return X & 0b00100000;
}

bool UFunctions::FindFileInPakFiles(__int64* This, const wchar_t* Filename, __int64** OutPakFile, __int64* OutEntry)
{
	// 00000000
	BYTE X{0};

	// 00[0]00000
	// The return result of the real function (bool) 0/1 will be crammed into the 6th bit.
	X |= (OFF::FindFileInPakFiles.VerifyFC<Decl::FindFileInPakFiles>()(This, Filename, OutPakFile, OutEntry) << 5);

	// This logic ensures that we are only allowing file overrides from within the game directory, and disallowing from externals such as AppData\Local
	if (UFunctions::Helpers::CheckForLocalDirectory(Filename, X))
	{
		// If the file already exists within the pak file
		if (X & 0b00100000 && GetFileAttributesW(Filename) != INVALID_FILE_ATTRIBUTES)
		{
			//std::wstring WFile(Filename);
			//LogA("FindFileInPakFiles OVERRIDE", std::string(WFile.begin(), WFile.end()));
			return false;
		}
	}

	// Returns the result of the actual function which is stored in the 6th bit.
	return X & 0b00100000;
}