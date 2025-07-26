#include "pch.h"

#include "Aeyth8/Global.hpp"
#include "Aeyth8/Tools/Pointers.h"
#include <intrin.h>
#include "Aeyth8/Logic/Mariner.h"
#include "Aeyth8/Hooks/Hooks.hpp"
#include "Aeyth8/Offsets.h"

/*

Written by Aeyth8

https://github.com/Aeyth8

*/


// My entire codebase has been designed to use namespaces like this.
using namespace A8CL; using namespace Global; using namespace Pointers;

//A8CL::OFFSET MessageBoxCaller("MessageBoxCaller", 0xF30970);
//A8CL::OFFSET MessageBox_O("MessageBoxW", 0x0);

//typedef __int64(__fastcall* MessageBoxCaller_T)(int, const WCHAR*, const WCHAR*);
//__int64 MessageBoxCaller_H(int a, const WCHAR* b, const WCHAR* c)
//{
//	LogA("MessageBoxCaller", HexToString((uintptr_t)_ReturnAddress()));
//	return MessageBoxCaller.VerifyFC<MessageBoxCaller_T>()(a, b, c);
//}
//
//typedef int(__stdcall* MessageBoxW_T)(HWND hWnd, LPCWSTR lpText, LPCWSTR lpCaption, UINT uType);
//
//int MessageBoxW_Hook(HWND hWnd, LPCWSTR lpText, LPCWSTR lpCaption, UINT uType)
//{
//	LogA("ReturnAddress", HexToString((uintptr_t)_ReturnAddress()));
//	std::wstring Caption(lpCaption);
//	LogA("MessageBoxW", std::string(Caption.begin(), Caption.end()));
//	return MessageBox_O.VerifyFC<MessageBoxW_T>()(hWnd, lpText, lpCaption, uType);
//
//	// 0xF30970 is the messagebox 
//}


static void Init() {

	// Retrieves the Global Base Address (GBA) by getting the module handle casted as a uintptr_t
	GBA = (uintptr_t)GetModuleHandleA("Mariner-Win64-Shipping.exe");

	LogWin();
	LogA("GetCommandLineA", GetCommandLineA());
	LogA("INITIALIZED", "The Global Base Address [GBA] is " + HexToString(GBA));

	Mariner::Init_Hooks();

	//MessageBox_O.Address = (uintptr_t)GetProcAddress(GetModuleHandleW(L"user32.dll"), "MessageBoxW");
	while (UWorld() == nullptr)
	{
		Sleep(2000);
	}

	Mariner::Init_Vars(UWorld());

	

	if (!bConstructedUConsole) bConstructedUConsole = ConstructUConsole();
}

int __stdcall DllMain(HMODULE hModule, DWORD ulReasonForCall, LPVOID lpReserved) {
	DisableThreadLibraryCalls(hModule);

	if (ulReasonForCall != DLL_PROCESS_ATTACH)
		return 1;

	Global::InitLog();

	if (Proxy::Attach(hModule))
		ConstructThread(Init);

	return 1;
}