// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"

#include <thread>
#include <xapofx.h>

#pragma comment(lib, "XAPOFX.lib")

FX_API_(HRESULT) CreateFX_OWO(
    REFCLSID                clsid,
    IUnknown** pEffect,
    const void* pInitDat = 0,
    UINT32 InitDataByteSize = 0
) {
    return CreateFX(clsid, pEffect, pInitDat, InitDataByteSize);
}

void MainThread() {
    Sleep(15 * 1000);

    LoadLibraryA("rocketforever.dll");
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    if (ul_reason_for_call == DLL_PROCESS_ATTACH) {
        std::thread t(MainThread);

        t.detach();
    }

    return TRUE;
}

