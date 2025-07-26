#pragma once

class OFFSET;

namespace A8CL
{
namespace OFF
{
	// Basic UE Functions

	extern OFFSET FFree;

	extern OFFSET UConsole;
	extern OFFSET Login;
	extern OFFSET PreLogin;
	extern OFFSET MarinerPreLogin;
	extern OFFSET Browse;
	extern OFFSET AppPreExit;
	extern OFFSET SpawnActor;

	extern OFFSET WorldGetNetMode;
	extern OFFSET ActorGetNetMode;
	extern OFFSET InitListen;

	// Native Game Functions

	extern OFFSET ShowMessageBox;
	extern OFFSET ShowMessageBoxManager;

	// Imported DLL Functions

	//OFFSET IsSnapNetLicenseValid;

}
}