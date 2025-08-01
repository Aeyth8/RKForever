#include "Hooks/Hooks.hpp"

namespace A8CL
{
namespace OFF
{
	// Basic UE Functions

	OFFSET GEngine("GEngine", 0x4AC8278);
	OFFSET GWorld("GWorld", 0x4ACAAF0);

	OFFSET FMalloc("FMemory::Malloc", 0xE4ED20);
	OFFSET FRealloc("FMemory::Realloc", 0xE50F10);
	OFFSET FFree("FMemory::Free", 0xE40660);
	OFFSET FQuantizeSize("FMemory::QuantizeSize", 0xE50A90);

	OFFSET FromStringTable("FText::FromStringTable", 0xE80850);
	OFFSET FString("FString::FString", 0x3AF6B0);

	OFFSET ProcessMulticastDelegate("ProcessMulticastDelegate", 0x3C1BA0);
	OFFSET LogFInternalImpl("FMsg::Logf_InternalImpl", 0xE86E90);
	OFFSET IsNonPakFileNameAllowed("FPakPlatformFile::IsNonPakFilenameAllowed", 0x1D0D6E0);
	OFFSET FindFileInPakFiles("FPakPlatformFile::FindFileInPakFiles", 0x1D09930);
	
	OFFSET UConsole("UConsole::ConsoleCommand", 0x2439460);
	OFFSET Login("AGameModeBase::Login", 0x20218B0);
	OFFSET PreLogin("AGameModeBase::PreLogin", 0x20252E0);
	OFFSET Browse("UEngine::Browse", 0x24151B0);
	OFFSET AppPreExit("FEngineLoop::AppPreExit", 0x3B1680);
	OFFSET SpawnActor("UWorld::SpawnActor", 0x20D21B0);

	OFFSET WorldGetNetMode("UWorld::InternalGetNetMode", 0x0);
	OFFSET ActorGetNetMode("AActor::InternalGetNetMode", 0x0);
	OFFSET InitListen("UIpNetDriver::InitListen", 0x670970);

	// Native Game Functions

	OFFSET MarinerPreLogin("AGameModeBase::PreLogin", 0x95E5C0);
	OFFSET ShowMessageBox("UMarinerGameInstance::ShowMessageBox", 0xA80AF0);
	OFFSET ShowMessageBoxManager("UMarinerMessageBoxManager::ShowMessageBox", 0xCA1CE0);
	OFFSET StartLogin("OnLoginStarted", 0x9CD7B0);

	// Imported DLL Functions

}
}