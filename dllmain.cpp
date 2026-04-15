#include "Aeyth8/Global.hpp"
#include "Aeyth8/Logic/Mariner.h"
#include "Aeyth8/Tools/Pointers.h"
#include "Aeyth8/CmdArgs/CommandLineArgs.h"

#ifdef PROXY
#include "Aeyth8/Proxy8/ProxyTypes.h"
#include "Aeyth8/Proxy8/Entry/ProxyEntry.hpp"
#endif

#include "Aeyth8/Tools/UnrealTypes.h"
#include "Aeyth8/Offsets.h"

/*

Written by Aeyth8

https://github.com/Aeyth8

*/


// My entire codebase has been designed to use namespaces like this.
using namespace A8CL; using namespace Global; using namespace Pointers;

// Called immediately before WinMainCRTStartup (entry), runs in-thread of entry to execute code before anything else begins.
static void PreInit()
{
	GBA = Proxy8::GBA;

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

	while (GWorld == nullptr)
	{
		Sleep(100);
	}

	Mariner::Init_Vars();

	if (!bConstructedUConsole) bConstructedUConsole = ConstructUConsole(FName::NAME_FindOrAdd(CMLA::ConsoleKey.GetArgumentAsString()));
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