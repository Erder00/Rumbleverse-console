## This is basiclly UUU but without the annoying client, it's open source and build for rumbleverse. This also adds Linux support, as UUU does not run under wine. 

# Instructions

PRE-BUILD DLLS ARE IN THE /dlls FOLDER!

## Prerequisites
- Visual Studio 2022 Community Edition [Download here](https://visualstudio.microsoft.com/vs/community/)

## Compilation
1. Open `dllmain.cpp` with Visual Studio.
2. Build the solution.
3. Copy the DLL from `code\x64\Release`.

## injecting

1. open Rumbleverse
2. download a dll injector (this one works good: https://github.com/nefarius/Injector)
3. open terminal in the directory where your dll that you want to inject is located, use `Injector.exe --process-name RumbleverseClient-Win64-Shipping.exe --inject C:\path\to\your.dll`
