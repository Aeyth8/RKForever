#include "Hooks/Hooks.hpp"

namespace A8CL
{
namespace OFF
{
	// Basic UE Functions

	OFFSET FFree("FMemory::Free", 0x0);

	OFFSET UConsole("UConsole::ConsoleCommand", 0x2439460);
	OFFSET Login("AGameModeBase::Login", 0x20218B0);
	OFFSET PreLogin("AGameModeBase::PreLogin", 0x20252E0);
	OFFSET Browse("UEngine::Browse", 0x24151B0);
	OFFSET AppPreExit("FEngineLoop::AppPreExit", 0x3B1680);
	OFFSET SpawnActor("UWorld::SpawnActor", 0x0);

	OFFSET WorldGetNetMode("UWorld::InternalGetNetMode", 0x0);
	OFFSET ActorGetNetMode("AActor::InternalGetNetMode", 0x0);
	OFFSET InitListen("UIpNetDriver::InitListen", 0x670970);

	// Native Game Functions

	OFFSET MarinerPreLogin("Mariner PreLogin", 0x95E5C0);
	OFFSET ShowMessageBox("UMarinerGameInstance::ShowMessageBox", 0xA80AF0);
	OFFSET ShowMessageBoxManager("UMarinerMessageBoxManager::ShowMessageBox", 0xCA1CE0);

	// Imported DLL Functions

	//OFFSET IsSnapNetLicenseValid("IsSnapNetLicenseValid", 0x00825C0);
}
}