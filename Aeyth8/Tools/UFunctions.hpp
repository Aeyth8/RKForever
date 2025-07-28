#pragma once
#include "../../SDK/Engine_classes.hpp"
#include "../../SDK/OnlineSubsystemUtils_classes.hpp"


/*

Written by Aeyth8

https://github.com/Aeyth8

*/

namespace A8CL
{



class UFunctions
{
public:

	class Helpers
	{
	private:

		const inline static SDK::FString SDK::FURL::* FURLPointers[] = {&SDK::FURL::Protocol, &SDK::FURL::Host, &SDK::FURL::Map, &SDK::FURL::RedirectURL, &SDK::FURL::Portal};
		const inline static std::string FURLPointerNames[] = { "Protocol", "Host", "Map", "RedirectURL", "Portal" };
		inline static std::string FURLParseCache{""};

		const inline static std::string FullyLoadPackageType[] = { "Map = 0", "Game_PreLoadClass = 1", "Game_PostLoadClass = 2", "Always = 3", "Mutator = 4", "MAX = 5" };
		inline static std::string FLPIParseCache{""};


		inline static std::string FWorldContextParseCache{""};

	public:

		const static std::string& FURLParser(SDK::FURL& URL);
		const static std::string& FLPIParser(SDK::FFullyLoadedPackagesInfo& Info);
		const static std::string& FLPIParser_T(SDK::TArray<SDK::FFullyLoadedPackagesInfo>& Info);
		const static std::string& FWorldContextParser(SDK::FWorldContext& Context);

	public:

		static void ProcessEnd();

	public:

	};

	enum ELogVerbosity : unsigned char
	{
		// Not used
		NoLogging = 0,

		// Always prints fatal error to console (and log file) and crashes (even if logging is disabled)
		Fatal,

		/**
		 * Prints an error to console (and log file).
		 * Commandlets and the editor collect and report errors. Error messages result in commandlet failure.
		 */
		Error,

		/**
		 * Prints a warning to console (and log file).
		 * Commandlets and the editor collect and report warnings. Warnings can be treated as an error.
		 */
		Warning,

		/** Prints a message to console (and log file) */
		Display,

		/** Prints a message to a log file (does not print to console) */
		Log,

		/**
		 * Prints a verbose message to a log file (if Verbose logging is enabled for the given category,
		 * usually used for detailed logging)
		 */
		Verbose,

		/**
		 * Prints a verbose message to a log file (if VeryVerbose logging is enabled,
		 * usually used for detailed logging that would otherwise spam output)
		 */
		VeryVerbose,

		// Log masks and special Enum values

		All				= VeryVerbose, NumVerbosity,
		VerbosityMask	= 0xf,
		SetColor		= 0x40, // not actually a verbosity, used to set the color of an output device 
		BreakOnLog		= 0x80
	};

	enum BrowseReturnVal
	{
		/** Successfully browsed to a new map. */
		Success,
		/** Immediately failed to browse. */
		Failure,
		/** A connection is pending. */
		Pending,
	};

	struct FActorSpawnParameters
	{
		SDK::FName Name;

		SDK::AActor* Template;

		SDK::AActor* Owner;

		SDK::APawn* Instigator;

		SDK::ULevel* OverrideLevel;

		SDK::ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingOverride;
	};

	class Decl
	{
	public:
		typedef void(__thiscall* UConsole)(SDK::UConsole* This, SDK::FString& Command);

		typedef BrowseReturnVal(__thiscall* Browse)(SDK::UEngine* This, SDK::FWorldContext& WorldContext, SDK::FURL URL, SDK::FString& Error);

		typedef bool(__thiscall* InitListen)(SDK::UIpNetDriver*, int32_t*, SDK::FURL& LocalURL, bool bReuseAddressAndPort, SDK::FString& Error);

		typedef SDK::APlayerController* (__thiscall* Login)(SDK::APlayerController* This, SDK::UPlayer* NewPlayer, SDK::ENetRole InRemoteRole, SDK::FString& Portal, SDK::FString& Options, SDK::FUniqueNetIdRepl& UniqueId, SDK::FString& ErrorMessage);

		typedef void(__thiscall* PreLogin)(SDK::AGameModeBase* This, SDK::FString* Options, SDK::FString* Address, SDK::FUniqueNetIdRepl* UniqueId, SDK::FString* ErrorMessage);

		typedef bool(__thiscall* CreateNamedNetDriver)(SDK::UEngine*, SDK::UWorld* InWorld, SDK::FName NetDriverName, SDK::FName NetDriverDefinition);

		typedef void(__thiscall* AppPreExit)();

		typedef __int64*(__fastcall* SpawnActor)(SDK::UWorld* This, SDK::UClass* Class, const SDK::FVector& Location, const SDK::FRotator& Rotation, FActorSpawnParameters& SpawnParameters);

		typedef void(__thiscall* ProcessEvent)(SDK::UObject* This, SDK::UFunction* Function, LPVOID Parms);

		typedef bool(__thiscall* IsNonPakFilenameAllowed)(__int64* This, SDK::FString& InFilename);

		typedef bool(__thiscall* FindFileInPakFiles)(__int64* This, const wchar_t* Filename, __int64** OutPakFile, __int64* OutEntry);

		typedef void(__thiscall* ProcessMulticastDelegate)(__int64* This, void* Parameters);

		//typedef void(__fastcall* LogFImpl)(const char* File, int Line, const SDK::FName& Category, ELogVerbosity VerbosityType, wchar_t* Format);
		typedef void(__fastcall* LogFImpl)(const char* File, int Line, __int64 Category, ELogVerbosity VerbosityType, wchar_t* Fmt);
	};

	

	static void UConsole(SDK::UConsole* This, SDK::FString& Command);

	static BrowseReturnVal Browse(SDK::UEngine* This, SDK::FWorldContext& WorldContext, SDK::FURL URL, SDK::FString& Error);

	static bool InitListen(SDK::UIpNetDriver* This, int32_t* InNotify, SDK::FURL& LocalURL, bool bReuseAddressAndPort, SDK::FString& Error);

	static SDK::APlayerController* Login(SDK::APlayerController* This, SDK::UPlayer* NewPlayer, SDK::ENetRole InRemoteRole, SDK::FString& Portal, SDK::FString& Options, SDK::FUniqueNetIdRepl& UniqueId, SDK::FString& ErrorMessage);

	static void PreLogin(SDK::AGameModeBase* This, SDK::FString* Options, SDK::FString* Address, SDK::FUniqueNetIdRepl* UniqueId, SDK::FString* ErrorMessage);

	static void AppPreExit();

	static __int64* SpawnActor(SDK::UWorld* This, SDK::UClass* Class, const SDK::FVector& Location, const SDK::FRotator& Rotation, FActorSpawnParameters& SpawnParameters);

	static void ProcessEvent(SDK::UObject* This, SDK::UFunction* Function, LPVOID Parms);




















};














}