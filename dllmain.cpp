#include "Aeyth8/Global.hpp"
#include "Aeyth8/Logic/Mariner.h"
#include "Aeyth8/Tools/Pointers.h"
#include "Aeyth8/CmdArgs/CommandLineArgs.h"

#ifdef PROXY
#include "Aeyth8/Proxy8/ProxyTypes.h"
#endif

/*

Written by Aeyth8

https://github.com/Aeyth8

*/


// My entire codebase has been designed to use namespaces like this.
using namespace A8CL; using namespace Global; using namespace Pointers;

// Called immediately before WinMainCRTStartup (entry), runs in-thread of entry to execute code before anything else begins.
static void PreInit()
{
	// Retrieves the Global Base Address (GBA) by getting the module handle casted as a uintptr_t
	GBA = (uintptr_t)GetModuleHandleA("Mariner-Win64-Shipping.exe");

	CommandLineArguments::ParseCommandLine(GetCommandLineW(), CMLA::GlobalCommandLineArgs, CMLA::GlobalCommandLine);

	if (CMLA::WinCSOut.GetAsBool()) LogWin();
	LogA("GetCommandLineA", GetCommandLineA());
	LogA("INITIALIZED", "The Global Base Address [GBA] is " + HexToString(GBA));

	Mariner::Init_Hooks();	
}

static void Init() 
{
	Mariner::Init_Engine();
	Mariner::LogFImpl(L"Hooks have been fully initialized, this patch was made by Aeyth8, inspired by SyST3MDeV");

	SDK::UWorld* GWorld{nullptr};
	while ((GWorld = Mariner::GWorld()) == nullptr)
	{
		Sleep(100);
	}

	Mariner::Init_Vars(GWorld);

	if (!bConstructedUConsole) bConstructedUConsole = ConstructUConsole(CMLA::ConsoleKey.GetArgumentAsString());
}

int __stdcall DllMain(HMODULE hModule, DWORD ulReasonForCall, LPVOID lpReserved) {
	DisableThreadLibraryCalls(hModule);

	if (ulReasonForCall == DLL_PROCESS_ATTACH)
	{
		Global::InitLog();
		PreInit();

#ifdef PROXY
		if (Proxy::Attach(hModule))
#endif
			ConstructThread(Init);
	}
	return 1;
}