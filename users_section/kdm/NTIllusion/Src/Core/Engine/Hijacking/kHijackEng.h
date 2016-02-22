/******************************************************************************
  Author		: Kdm (Kodmaker@syshell.org)
  WebSite		: http://www.syshell.org

  Copyright (C) 2003,2004 Kdm
  *****************************************************************************
  This file is part of NtIllusion.

  NtIllusion is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  NtIllusion is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with NtIllusion; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
  ******************************************************************************/

#ifndef _KNTIHIJACKENG_H
#define _KNTIHIJACKENG_H

#define MakePtr(Type, BaseAddr, RVA) ((Type)((DWORD)(BaseAddr) + (DWORD)(RVA)))


void MarkModuleAsHooked();
int IsModuleAlreadyHooked();
int WakeUpProcess(DWORD pid);
int FixAllModules(char* ExePath);
int HijackApi(HMODULE hLocalModule, const char *DllName, const char *ApiName, PVOID pApiNew, PVOID *ApiOrg);
int HijackApiEx(HMODULE hLocalModule, const char *ntiDllName, const char *ntiApiName, PVOID pApiNew, PVOID *ApiOrg);
int HookApi(char* DllName, char* FuncName, DWORD ReplacementFunc, FARPROC* pFunc);
void SetUpHooks(int Flag, char* Dll);
void ShowResultOfHijack(int result, char* ApiName, char* ExePath, const char* ModuleName);
int HijackApiOfNewModule(HMODULE hLocalModule, const char* ModuleName, char *ExePath);
FARPROC WINAPI MyGetProcAddress(HMODULE hModule, LPCSTR lpProcName);

#endif