#ifndef _HOOKINTERFACE9_H_68d55f49_2033_4bde_b480_3c9813604f3b_
#define _HOOKINTERFACE9_H_68d55f49_2033_4bde_b480_3c9813604f3b_

#include "MyLibraryUser.h"

NTSTATUS HookDirect3D9(PVOID *ModuleBase, PDHOOK_HOOK_INFO Context);
NTSTATUS UnHookDirect3D9(PVOID ModuleBase);

#endif // _HOOKINTERFACE9_H_68d55f49_2033_4bde_b480_3c9813604f3b_