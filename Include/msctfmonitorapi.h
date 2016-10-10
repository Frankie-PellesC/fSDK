/*+@@file@@----------------------------------------------------------------*//*!
 \file		msctfmonitorapi.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug 14 18:44:59 2016
 \date		Modified on Sun Aug 14 18:44:59 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#if __POCC__ >= 500
#pragma once
#endif
#define DCM_FLAGS_TASKENG         0x00000001
#define DCM_FLAGS_CTFMON          0x00000002
#define DCM_FLAGS_LOCALTHREADTSF  0x00000004
extern BOOL WINAPI DoMsCtfMonitor(DWORD dwFlags, HANDLE hEventForServiceStop);
#define ILMCM_CHECKLAYOUTANDTIPENABLED    0x00001
extern HRESULT WINAPI InitLocalMsCtfMonitor(DWORD dwFlags);
extern HRESULT WINAPI UninitLocalMsCtfMonitor();
