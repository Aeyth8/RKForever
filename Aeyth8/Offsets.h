#pragma once

class OFFSET;

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

	// Native Game Functions

	extern OFFSET MarinerPreLogin;
	extern OFFSET ShowMessageBox;
	extern OFFSET ShowMessageBoxManager;
	extern OFFSET StartLogin;

	// Imported DLL Functions


}
}