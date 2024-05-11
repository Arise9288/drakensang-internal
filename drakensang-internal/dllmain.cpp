#pragma once

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <iostream>

HINSTANCE dllHandle;
uintptr_t moduleBase;

DWORD WINAPI EjectThread(LPVOID lpParameter) {
    FreeLibraryAndExitThread(dllHandle, 0);
    return 0;
}

DWORD WINAPI MainThread() {
    moduleBase = (uintptr_t)GetModuleHandle(L"dro_client64.exe");
    AllocConsole();
    FILE* fp;
    freopen_s(&fp, "CONOUT$", "w", stdout);


    printf("Module base: %llx\n", moduleBase);


    //fclose(fp);
    FreeConsole();
    CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)EjectThread, NULL, 0, NULL);
    return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ulReasonForCall, LPVOID lpReserved) {
    if (ulReasonForCall == DLL_PROCESS_ATTACH) {
        dllHandle = hModule;
        CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)MainThread, NULL, 0, NULL);
    }
    return TRUE;
}
