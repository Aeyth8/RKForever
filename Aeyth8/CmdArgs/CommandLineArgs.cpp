#include "CommandLineArgs.h"


/*

Written by Aeyth8

https://github.com/Aeyth8

Copyright (C) 2025 Aeyth8

*/

namespace A8CL
{
namespace CMLA
{
	// -- Individual args for manual use 
	CommandLineParameter<wchar_t> GameDefaultMap(L"GameDefaultMap", L"/Game/Maps/WorldMapMainMenu.WorldMapMainMenu");
	CommandLineParameter<wchar_t> TransitionMap(L"TransitionMap", L"None");
	CommandLineParameter<wchar_t> GlobalDefaultGameMode(L"GlobalDefaultGameMode", L"/Game/GameModes/TDM/GM_TDM.GM_TDM_C");
	CommandLineParameter<wchar_t> ServerPort(L"ServerPort", L"1170");
	CommandLineParameter<wchar_t> HookAndLogProcessEvent(L"HookPE");
	CommandLineParameter<wchar_t> SkipMovies(L"SkipMovies");
	CommandLineParameter<wchar_t> WinCSOut(L"log");
	CommandLineParameter<wchar_t> ConsoleKey(L"ConsoleKey", L"Tilde");

	// -- Global array for automated parsing, not generally needed for manual usage.
	CArray<CommandLineParameter<wchar_t>*> GlobalCommandLineArgs = CommandLineParameter<wchar_t>::GCommands();

	// -- Global array for command line arguments retrieved from the WinAPI, not used but good for reference/ease of access.
	CArray<wchar_t*>* GlobalCommandLine{nullptr};
}
}