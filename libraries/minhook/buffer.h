﻿/*
 *  MinHook - The Minimalistic API Hooking Library for x64/x86
 *  Copyright (C) 2009-2017 Tsuda Kageyu. All rights reserved.
 */

#pragma once

// Size of each memory slot.
#if defined(_M_X64) || defined(__x86_64__)
    #define MEMORY_SLOT_SIZE 64
#else
    #define MEMORY_SLOT_SIZE 32
#endif

VOID   InitializeBuffer(VOID);
VOID   UninitializeBuffer(VOID);
LPVOID AllocateBuffer(LPVOID pOrigin);
VOID   FreeBuffer(LPVOID pBuffer);
BOOL   IsExecutableAddress(LPVOID pAddress);
