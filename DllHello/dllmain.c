#include <windows.h>

static DWORD __stdcall rundll(__in LPVOID param) {
	MessageBoxA(NULL, "Hello World!", "DllHello", MB_OK | MB_ICONINFORMATION);
	FreeLibraryAndExitThread((HMODULE)param, 0);
	return 0;
}

BOOL APIENTRY DllMain(HMODULE module, DWORD reason, LPVOID reserved) {
	(void)reserved;
	HANDLE thread;

	if (reason != DLL_PROCESS_ATTACH)
		return TRUE;

	thread = CreateThread(NULL, 0, rundll, (LPVOID)module, 0, NULL);
	if (!thread) {
		MessageBoxA(NULL, "Failed to start main dll thread.", "DllHello", MB_OK | MB_ICONINFORMATION);
		FreeLibraryAndExitThread(module, 0);
	}

	return TRUE;
}