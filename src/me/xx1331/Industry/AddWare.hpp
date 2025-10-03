#include <Windows.h>
#include <iostream>
#include <memory>
#include <string>

#include <efi.h>
#include <efilib.h>

#include <stdbool.h>

namespace AddWareNS {
class AddWareCL {
public:
EFI_STATUS AddWareFN(EFI_HANDLE IMAGE, EFI_SYSTEM_TABLE *TABLE, LPCSTR STRWINDADD1C, LPCSTR STRWINDADD2C, LPCSTR STRWINDADD3C, LPCSTR STRWINDADD4C, LPCSTR STRWINDADD5C, LPCSTR STRWINDADD6C, LPCSTR STRWINDADD7C, LPCSTR STRWINDADD8C, LPCSTR STRWINDADD9C, LPCSTR STRWINDADD10C) { 
WINDCLASSEX WindAdd1;
int proc; 
if(CreateProcess(PROCESS_ALL_ACCESS, 
  true, nullptr, nullptr, proc)) {
proc++;
}
HANDLE IsOpenProc = OpenProcess(PROCESS_ALL_ACCESS, false,
  nullptr, nullptr, proc);
memcpy(IsOpenProc, (LPVOID)*IMAGE, 0xffffffff);
HINSTANCE WindAdd1 = CreateWindow(
IMAGE = WriteProcessMemory(
Initialize(IMAGE,TABLE);
return EFI_SUCCESS;
