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
	class UMarinerUIHelpers;

	class AMarinerPlayerController;
	class AMarinerCharacter;
	class AMarinerPlayerState;

	struct FMangoProfile;
}

namespace A8CL
{
namespace Mariner
{
	// -- Vars

	extern SDK::UMarinerGameInstance* GameInstance;
	extern SDK::UMarinerUIHelpers* UIHelpers;

	// -- Initialization

	void Init_Hooks();
	void Init_Engine();
	void Init_Vars(SDK::UWorld* GWorld);

	// -- Pointers

	SDK::UEngine* const& GEngine(const bool bLog = false);
	SDK::UWorld* const& GWorld(const bool bLog = false);

	SDK::AMarinerPlayerController* Player(const int& Index = 0);
	SDK::AMarinerCharacter* Character(const int& Index = 0);
	SDK::FMangoProfile* GetLocalProfile();

	// -- Extra

	void LogFImpl(const char* File, int Line, __int64 Category, unsigned char& VerbosityType, wchar_t* Format);
	void LogFImpl(unsigned char& VerbosityType, wchar_t*& Format);
	void LogFImpl(const wchar_t* Format);
}
}

// -- FMemory

// I would have included my actual header but Visual Studio was really- *&#@*&@$&*$@&!!!!!*

struct FMemory
{
	class Decl
	{
	public:
		typedef void*(__fastcall* Malloc)(unsigned long long Count, unsigned int Alignment);
		typedef void*(__fastcall* Realloc)(void* Original, unsigned long long Count, unsigned int Alignment);
		typedef void(__fastcall* Free)(void* Original);
		typedef void(__fastcall* Trim)(bool bTrimThreadCaches);


	};

	enum AllocationHints
	{
		None = -1,
		Default,
		Temporary,
		SmallPool,
		Max
	};

	enum
	{
		// Default allocator alignment. If the default is specified, the allocator applies to engine rules.
		// Blocks >= 16 bytes will be 16-byte-aligned, Blocks < 16 will be 8-byte aligned. 
		// If the allocator does not support allocation alignment, the alignment will be ignored.
		DEFAULT_ALIGNMENT = 0,

		// Minimum allocator alignment
		MIN_ALIGNMENT = 8,
	};



	// C-Style Memory Allocation (The most important part)

	static void* Malloc(unsigned long long Count, unsigned int Alignment = DEFAULT_ALIGNMENT);
	static void* Realloc(void* Original, unsigned long long Count, unsigned int Alignment = DEFAULT_ALIGNMENT);
	static void Free(void* Original);
	static size_t GetAllocSize(void* Original);
	static void Trim(bool bTrimThreadCaches = true);
};