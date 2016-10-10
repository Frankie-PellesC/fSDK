/*+@@file@@----------------------------------------------------------------*//*!
 \file		IEProcess.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul 16 20:36:15 2016
 \date		Modified on Sat Jul 16 20:36:15 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __IEProcess_h__
#define __IEProcess_h__
#if __POCC__ >= 500
#pragma once
#endif
#if (_WIN32_IE >= _WIN32_IE_IE80)
#define IEPROCESS_MODULE_NAME               L"IERtUtil.dll"
#define IEGetProcessModule_PROC_NAME        "IEGetProcessModule"
#endif
typedef HMODULE (*IEGetProcessModule_t)(void);
typedef struct IE80TabWindowExports
{
	HRESULT(WINAPI * WaitForTabWindow) (BOOL allowUnknownThread, HWND proposedParentWindow, HWND * pActualParentWindow);
	HRESULT(WINAPI * AcquireModalDialogLockAndParent) (HWND proposedParentWindow, HWND * pActualParentWindow, HANDLE * phModalDialogLock);
	void (WINAPI * ReleaseModalDialogLockAndParent) (HANDLE hModalDialogLock);
} IE80TabWindowExports;
#if (_WIN32_IE >= _WIN32_IE_IE80)
#define IETabWindowExports                  IE80TabWindowExports
#define IEGetTabWindowExports_PROC_NAME     "IEGetTabWindowExports"
#endif
typedef const IETabWindowExports* (*IEGetTabWindowExports_t)(void);
#endif
