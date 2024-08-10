#include "pch.h"
#include "SDK.h"


#include<windows.h>
// - C++ Exceptions are /EHa (Yes with SEH Exceptions)

void EnableConsole();

void ExecuteConsoleCommand(const wchar_t* cmd) {
	CG::UWorld* world = CG::UObject::FindObject<CG::UWorld>("World SheikEntry.SheikEntry");
	CG::APlayerController* playercontroller = CG::UObject::FindObjects<CG::APlayerController>().back();
	CG::UObject::FindObjects<CG::UKismetSystemLibrary>().back()->ExecuteConsoleCommand(world, CG::FString(cmd), playercontroller);
}



void projectKOMainThread() {
	CG::InitSdk();
	EnableConsole();
	std::vector<CG::APlayerController*> playercontrollers = CG::UObject::FindObjects<CG::APlayerController>();
	CG::APlayerController* playercontroller = playercontrollers.back();
}

template <typename T>
T* getLastOfType() {
	return CG::UObject::FindObjects<T>().back();
}


void EnableConsole() {
	getLastOfType<CG::UInputSettings>()->ConsoleKeys[0].KeyName = getLastOfType<CG::UKismetStringLibrary>()->Conv_StringToName(L"Comma");
	CG::UEngine* Engine = getLastOfType<CG::UEngine>();
	CG::UObject* NewObject = getLastOfType<CG::UGameplayStatics>()->SpawnObject(Engine->ConsoleClass, Engine->GameViewport);
	Engine->GameViewport->ViewportConsole = (CG::UConsole*)NewObject;
}



BOOL APIENTRY DllMain(HMODULE hModule, DWORD ulReasonForCall, LPVOID lpReserved)
{
	DisableThreadLibraryCalls(hModule);

	if (ulReasonForCall != DLL_PROCESS_ATTACH)
		return TRUE;

	HANDLE hThread = CreateThread(nullptr, 0,
		(LPTHREAD_START_ROUTINE)projectKOMainThread, hModule, 0, 0);
	if (hThread != nullptr)
		CloseHandle(hThread);

	// TODO: Fill your code here

	return TRUE;
}