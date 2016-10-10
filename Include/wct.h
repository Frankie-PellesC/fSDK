/*+@@file@@----------------------------------------------------------------*//*!
 \file		wct.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 00:16:05 2016
 \date		Modified on Mon Sep 19 00:16:05 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#if __POCC__ >= 500
#pragma once
#endif
typedef enum _WCT_OBJECT_TYPE
{
    WctCriticalSectionType = 1,
    WctSendMessageType,
    WctMutexType,
    WctAlpcType,
    WctComType,
    WctThreadWaitType,
    WctProcessWaitType,
    WctThreadType,
    WctComActivationType,
    WctUnknownType,
    WctSocketIoType,
    WctSmbIoType,
    WctMaxType
} WCT_OBJECT_TYPE;
typedef enum _WCT_OBJECT_STATUS
{
    WctStatusNoAccess = 1,
    WctStatusRunning,
    WctStatusBlocked,
    WctStatusPidOnly,
    WctStatusPidOnlyRpcss,
    WctStatusOwned,
    WctStatusNotOwned,
    WctStatusAbandoned,
    WctStatusUnknown,
    WctStatusError,
    WctStatusMax
} WCT_OBJECT_STATUS;
#define WCT_MAX_NODE_COUNT 16
#define WCT_OBJNAME_LENGTH 128
typedef struct _WAITCHAIN_NODE_INFO
{
    WCT_OBJECT_TYPE ObjectType;
    WCT_OBJECT_STATUS ObjectStatus;
    union
	{
        struct
		{
            WCHAR ObjectName[WCT_OBJNAME_LENGTH];
            LARGE_INTEGER Timeout;
            BOOL Alertable;
        } LockObject;
        struct
		{
            DWORD ProcessId;
            DWORD ThreadId;
            DWORD WaitTime;
            DWORD ContextSwitches;
        } ThreadObject;
    };
} WAITCHAIN_NODE_INFO, *PWAITCHAIN_NODE_INFO;
typedef LPVOID HWCT;
typedef VOID(CALLBACK *PWAITCHAINCALLBACK) (HWCT WctHandle, DWORD_PTR Context, DWORD CallbackStatus, LPDWORD NodeCount, PWAITCHAIN_NODE_INFO NodeInfoArray, LPBOOL IsCycle);
#define WCT_ASYNC_OPEN_FLAG 0x1
#define WCTP_OPEN_ALL_FLAGS (WCT_ASYNC_OPEN_FLAG)
WINADVAPI HWCT WINAPI OpenThreadWaitChainSession(DWORD Flags, PWAITCHAINCALLBACK callback);
WINADVAPI VOID WINAPI CloseThreadWaitChainSession(HWCT WctHandle);
#define WCT_OUT_OF_PROC_FLAG     0x1
#define WCT_OUT_OF_PROC_COM_FLAG 0x2
#define WCT_OUT_OF_PROC_CS_FLAG  0x4
#define WCT_NETWORK_IO_FLAG      0x8
#define WCTP_GETINFO_ALL_FLAGS (WCT_OUT_OF_PROC_FLAG|WCT_OUT_OF_PROC_COM_FLAG|WCT_OUT_OF_PROC_CS_FLAG)
WINADVAPI BOOL WINAPI GetThreadWaitChain(HWCT WctHandle, DWORD_PTR Context, DWORD Flags, DWORD ThreadId, LPDWORD NodeCount, PWAITCHAIN_NODE_INFO NodeInfoArray, LPBOOL IsCycle);
typedef HRESULT(*PCOGETCALLSTATE) (int, PULONG);
typedef HRESULT(*PCOGETACTIVATIONSTATE) (GUID, DWORD, DWORD *);
WINADVAPI VOID WINAPI RegisterWaitChainCOMCallback(PCOGETCALLSTATE CallStateCallback, PCOGETACTIVATIONSTATE ActivationStateCallback);
