#pragma once
#include "OffsetBase.h"

class OFFSET;

namespace SDK
{
	class UWorld;
	class UEngine;
}
namespace A8CL
{
	namespace OFF
	{
		// Basic UE Functions

		extern OFFSET GEngine;
		extern OFFSET GWorld;

		extern OFFSET FMalloc;
		extern OFFSET FRealloc;
		extern OFFSET FFree;
		extern OFFSET FQuantizeSize;

		extern OFFSET FNameW;
		extern OFFSET FNameA;

		extern OFFSET FromStringTable;
		extern OFFSET FString;// I believe this is THE FString constructor of all time.

		extern OFFSET ProcessMulticastDelegate;
		extern OFFSET LogFInternalImpl;
		extern OFFSET IsNonPakFileNameAllowed;
		extern OFFSET FindFileInPakFiles;

		extern OFFSET UConsole;
		extern OFFSET Login;
		extern OFFSET PreLogin;	
		extern OFFSET Browse;
		extern OFFSET AppPreExit;
		extern OFFSET SpawnActor;

		extern OFFSET WorldGetNetMode;
		extern OFFSET ActorGetNetMode;
		extern OFFSET InitListen;
		extern OFFSET UniqueIdFromString;
		extern OFFSET SetUniqueId;
		extern OFFSET GameMapsSettings;
		extern OFFSET ReceiveInit;

		// Native Game Functions

		extern OFFSET MarinerPreLogin;
		extern OFFSET StartLogin;
		extern OFFSET SelectPrivateMatch; // 0xC1F5F0 retrieves the error string
		extern OFFSET SelectPlaylists;

		// Byte Patches

		constexpr ull EACFailure						= 0xA4CD30;
		constexpr ull TryGetCMSItemByAssetPath			= 0x9D9C90;
		constexpr ull GetInventorySkin					= 0xA0B1C0;
		constexpr ull IsCharacterOwned					= 0xA14180;
		constexpr ull IsItemOwned						= 0xA14D90;
		constexpr ull IsActiveBlastPassSeasonOwned		= 0xA13F10;
		constexpr ull IsBlastPassOwned					= 0xA140F0;
		constexpr ull GetGameVersion					= 0x9BC430;
		constexpr ull PartyErrorReason_AlreadyInSession = 0xA56810;
		constexpr ull StartupMovies						= 0xA428F5;
	}


	// Designed to automatically get and set global pointer variables obtained by offsets so that the syntax is equivalent to the original source (when it isn't)
	template <class Class, OFFSET& Offset>
	struct GPointerWrapper
	{
		inline static Class* GPointer{nullptr};

		inline bool IsInitialized() const
		{
			return this->GPointer != nullptr;
		}

		inline Class* GetPointer() const
		{
			return this->GPointer = *reinterpret_cast<Class**>(Offset.PlusBase());
		}

		inline Class* operator->() const
		{
			return this->IsInitialized() ? this->GPointer : this->GetPointer();
		}

		inline operator Class* () const
		{
			return this->IsInitialized() ? this->GPointer : this->GetPointer();
		}

		inline Class* operator&() const
		{
			return this->GetPointer();
		}


	};

	inline static GPointerWrapper<SDK::UEngine, OFF::GEngine> GEngine;
	inline static GPointerWrapper<SDK::UWorld, OFF::GWorld> GWorld;
}