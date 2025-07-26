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

typedef __int64(__thiscall* ShowMessageBoxMan_T)(SDK::UMarinerMessageBoxManager* This, SDK::FMarinerMessageBoxData& MessageData);
typedef __int64(__thiscall* ShowMessageBox_T)(SDK::UMarinerGameInstance* This, SDK::FMarinerMessageBoxData& MessageData);
typedef double(__fastcall* DownloadCMSData_T)(SDK::UMangoCMSManager* This);
typedef bool(__fastcall* IsLoggingIn_T)(SDK::UMarinerStartScreenMenu* This);

A8CL::OFFSET Login("IsLoggingIn", 0xCC6730);
A8CL::OFFSET Mango("Mango", 0x9ADEF0);
A8CL::OFFSET StartLogin("OnLoginStarted", 0x9CD7B0);
static SDK::UMarinerStartScreenMenu* StartScreen{nullptr};

static double Mangoing(SDK::UMangoCMSManager* This)
{
	//if (StartScreen) StartScreen->OnSkipButtonClicked();
	if (Mariner::GameInstance) Mariner::GameInstance->OnMovieCompleted();
	//return Mango.VerifyFC<DownloadCMSData_T>()(This);
}

static void OnLoginStarted(SDK::UMangoConnectionManager* This, uint32 NoClue)
{
	LogA("StartLogin", This->GetFullName());
	if (Mariner::GameInstance) Mariner::GameInstance->OnMovieCompleted();
}

static bool IsLoggingIn(SDK::UMarinerStartScreenMenu* This)
{
	LogA("IsLoggingIn", "Called");
	StartScreen = This;
	return Login.VerifyFC<IsLoggingIn_T>()(This);
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
		//Hooks::CreateAndEnableHook(StartLogin, HStartLogin);
		//Hooks::CreateAndEnableHook(Login, IsLoggingIn);
		//Hooks::CreateAndEnableHook(Mango, Mangoing);
		BytePatcher::ReplaceBytes(PB(0xA4CD30), {0xB0, 0x01, RETN, NOP, NOP});

		/*
			
		UMarinerGameInstance->MangoManagersInstance->MangoConnectionManager
		UMarinerGameInstance + 0x0230 + 0x0070

		Essentially to immediately jump to the ConnectionManager we can do UMarinerGameInstance + 672 [0x2A0]

		We start in MangoConnectionManager

		So MangoConnectionManager - 672 is the GameInstance pointer I need to pass and the function to call would be 0xA6D1F0

		48 81 E9 A0 02 00 00 - sub rcx, 0x2A0

		*/
		BYTE FrontendFixASM[] =
		{ 
			0x48, 0x8B, 0xCF,							//9CD7B0// mov rcx, rdi
			
			//0xC6, 0x81, 0xC3, 0x02, 0x00, 0x00, 0x01,	//9CD7B3// mov byte ptr ds:[rcx+2C3h], 1
			//0xC6, 0x81, 0xF1, 0x02, 0x00, 0x00, 0x00,	//9CD7BA// mov byte ptr ds:[rcx+2F1h], 0
			//0x48, 0xC7, 0x81, 0xF8, 0x02, 0x00, 0x00,	//9CD7C1// mov qword ptr ds:[rcx+2F8h], 0
		//	0x00, 0x00, 0x00, 0x00,

			//0x48, 0x81, 0xE9, 0xA0, 0x02, 0x00, 0x00,	//9CD7CC// sub rcx, 0x2A0 [UMarinerGameInstance]
			0x48, 0x8D, 0x91, 0xC8, 0x02, 0x00, 0x00,	//9CD7B4// lea rdx,qword ptr ds:[rcx+2C8]
			0xE8, 0x25, 0xFA, 0x09, 0x00,				//9CD7D3// call [GBA + 0xA6D1F0]
			RETN, NOP, NOP, NOP							//9CD7DA// filler
		};

		//BytePatcher::ReplaceBytes(PB(0x9CD7C1), FrontendFixASM);
		Hooks::CreateAndEnableHook(StartLogin, OnLoginStarted);
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

//SDK::* Mariner::Player(const int& Index)
//{
//	return static_cast<SDK::*>(Pointers::Player(Index));
//}