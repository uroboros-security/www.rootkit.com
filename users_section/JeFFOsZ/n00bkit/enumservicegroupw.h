#include <winsock2.h>
#include <windows.h>
#include <time.h>
#include "ntdll.h"

typedef BOOL (WINAPI* ENUMSERVICEGROUPW)(SC_HANDLE,DWORD,DWORD,LPBYTE,DWORD,LPDWORD,LPDWORD,LPDWORD,DWORD);

#ifndef __ENUMSERVICEGROUPW__
#define __ENUMSERVICEGROUPW__

ENUMSERVICEGROUPW OldEnumServiceGroupW;
BOOL WINAPI NewEnumServiceGroupW(SC_HANDLE,DWORD,DWORD,LPBYTE,DWORD,LPDWORD,LPDWORD,LPDWORD,DWORD);

#endif 