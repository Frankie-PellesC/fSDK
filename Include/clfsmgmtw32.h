/*+@@file@@----------------------------------------------------------------*//*!
 \file		clfsmgmtw32.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul  3 17:16:12 2016
 \date		Modified on Sun Jul  3 17:16:12 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __CLFSMGMTW32_H__
#define __CLFSMGMTW32_H__
#if __POCC__ >= 500
#pragma once
#endif
#ifdef CLFS_KERNEL_MODE
#    undef CLFS_KERNEL_MODE
#endif
#include <clfsmgmt.h>

#if (_WIN32_WINNT >= _WIN32_WINNT_WS03)
typedef VOID(*PLOG_TAIL_ADVANCE_CALLBACK) (HANDLE hLogFile, CLFS_LSN lsnTarget, PVOID pvClientContext);
#endif
#if (_WIN32_WINNT >= _WIN32_WINNT_WS03)
typedef VOID(*PLOG_FULL_HANDLER_CALLBACK) (HANDLE hLogFile, DWORD dwError, BOOL fLogIsPinned, PVOID pvClientContext);
#endif
#if (_WIN32_WINNT >= _WIN32_WINNT_WS03)
typedef VOID(*PLOG_UNPINNED_CALLBACK) (HANDLE hLogFile, PVOID pvClientContext);
#endif
#if (_WIN32_WINNT >= _WIN32_WINNT_WS03)
typedef struct _LOG_MANAGEMENT_CALLBACKS
{
	PVOID CallbackContext;
	PLOG_TAIL_ADVANCE_CALLBACK AdvanceTailCallback;
	PLOG_FULL_HANDLER_CALLBACK LogFullHandlerCallback;
	PLOG_UNPINNED_CALLBACK LogUnpinnedCallback;
}
LOG_MANAGEMENT_CALLBACKS, *PLOG_MANAGEMENT_CALLBACKS;
#endif
#if (_WIN32_WINNT >= _WIN32_WINNT_WS03)
CLFSUSER_API BOOL WINAPI RegisterManageableLogClient(HANDLE hLog, PLOG_MANAGEMENT_CALLBACKS pCallbacks);
#endif
#if (_WIN32_WINNT >= _WIN32_WINNT_WS03)
CLFSUSER_API BOOL WINAPI DeregisterManageableLogClient(HANDLE hLog);
#endif
#if (_WIN32_WINNT >= _WIN32_WINNT_WS03)
CLFSUSER_API BOOL WINAPI ReadLogNotification(HANDLE hLog, PCLFS_MGMT_NOTIFICATION pNotification, LPOVERLAPPED lpOverlapped);
#endif
#if (_WIN32_WINNT >= _WIN32_WINNT_WS03)
CLFSUSER_API BOOL WINAPI InstallLogPolicy(HANDLE hLog, PCLFS_MGMT_POLICY pPolicy);
#endif
#if (_WIN32_WINNT >= _WIN32_WINNT_WS03)
CLFSUSER_API BOOL WINAPI RemoveLogPolicy(HANDLE hLog, CLFS_MGMT_POLICY_TYPE ePolicyType);
#endif
#if (_WIN32_WINNT >= _WIN32_WINNT_WS03)
CLFSUSER_API BOOL WINAPI QueryLogPolicy(HANDLE hLog, CLFS_MGMT_POLICY_TYPE ePolicyType, PCLFS_MGMT_POLICY pPolicyBuffer, PULONG pcbPolicyBuffer);
#endif
#if (_WIN32_WINNT >= _WIN32_WINNT_WS03)
CLFSUSER_API BOOL WINAPI SetLogFileSizeWithPolicy(HANDLE hLog, PULONGLONG pDesiredSize, PULONGLONG pResultingSize);
#endif
#if (_WIN32_WINNT >= _WIN32_WINNT_WS03)
CLFSUSER_API BOOL WINAPI HandleLogFull(HANDLE hLog);
#endif
#if (_WIN32_WINNT >= _WIN32_WINNT_WS03)
CLFSUSER_API BOOL WINAPI LogTailAdvanceFailure(HANDLE hLog, DWORD dwReason);
#endif
#if (_WIN32_WINNT >= _WIN32_WINNT_WS03)
CLFSUSER_API BOOL WINAPI RegisterForLogWriteNotification(HANDLE hLog, ULONG cbThreshold, BOOL fEnable);
#endif
#endif
