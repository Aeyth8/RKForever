#pragma once


/*

Written by Aeyth8

https://github.com/Aeyth8

*/


namespace SDK
{
	class UEngine;
	class UWorld;
	class UBlueprintFunctionLibrary;
	class UGameMapsSettings;
	class UClass;

	class UMarinerGameInstance;

	class UMarinerMenuStackLayer;
	
	// All game specific subclasses of UBlueprintFunctionLibrary
	class UMarinerPhysicsLibrary;
	class UMarinerFastCollisionUtils;
	class UMarinerGameplayFrameworkBlueprintLibrary;
	class UMarinerDamageLibrary;
	class UMarinerEditorFunctionLibrary;
	class UMarinerGlobalsFunctionLibrary;
	class UMarinerMathUtils;
	class UMarinerSkinBlueprintLibrary;
	class UMarinerUIBlueprintLibrary;
	class UMarinerUIHelpers;
	class UMarinerSoundBlueprintUtilities_C;

	class AMarinerPlayerController;
	class AMarinerCharacter;
	class AMarinerPlayerState;

	class FText;

	struct FMangoProfile;
}

namespace A8CL
{
namespace Mariner
{
	// -- Vars

	extern SDK::UGameMapsSettings* MapSettings;
	extern SDK::UMarinerGameInstance* GameInstance;
	extern SDK::UClass* PrivateMatchMenu;
	extern SDK::UClass* ServerList;
	extern SDK::UClass* DebugPlayMenu;

	// ===========================================
	// ##			  INITIALIZATION			## 
	// ===========================================

	void Init_Hooks();											// Called before entry, modifies the game's runtime instance before it even starts up, applying bytepatches and hooks.
	void Init_Engine();											// Called after entry, waits for the core game engine to initialize, and sets all pre-world variables.
	void Init_Vars();											// Called after game world is initialized, retrieves and sets any applicable pointer variables.
	void ThreadLoop();											// JMP into after Init_Vars, runs in an infinite loop until the game is shutdown, checks the networking and ensures that server->clients are synchronized.

	// For some reason this game does not follow the UGameMapsSettings like practically every other game, so I have to force it with a browse hook.
	extern bool bIsInitialized;

	// ===========================================
	// **			POINTER FUNCTIONS			**
	// ===========================================


	SDK::AMarinerPlayerController* Player(const int& Index = 0);
	SDK::AMarinerCharacter* Character(const int& Index = 0);
	SDK::FMangoProfile* GetLocalProfile();

	// ===========================================
	// **			 HELPER FUNCTIONS			**
	// ===========================================

	SDK::UMarinerMenuStackLayer* __fastcall PushLayerToActiveStack(SDK::UClass* Layer);

	// ===========================================
	// --				 EXTRA					--
	// ===========================================

	void LogFImpl(const char* File, int Line, __int64 Category, unsigned char& VerbosityType, wchar_t* Format);
	void LogFImpl(unsigned char& VerbosityType, wchar_t*& Format);
	void LogFImpl(const wchar_t* Format);
}
}

// -- FText Constructor

class FText
{
public:
	/** Loading policy to use with String Table assets */
	enum class EStringTableLoadingPolicy : unsigned char
	{
		/** Try and find the String Table, but do not attempt to load it */
		Find,
		/** Try and find the String Table, or attempt of load it if it cannot be found (note: the string table found may not be fully loaded) */
		FindOrLoad,
		/** Try and find the String Table, or attempt to load it if it cannot be found, or if it was found but not fully loaded */
		FindOrFullyLoad,
	};
	//static SDK::FText* FromStringTable(const __int64& InTableId, __int64& InKey, const EStringTableLoadingPolicy InLoadingPolicy = EStringTableLoadingPolicy::FindOrFullyLoad);
};
