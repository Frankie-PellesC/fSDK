/*+@@file@@----------------------------------------------------------------*//*!
 \file		TimeProv.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 12:39:26 2016
 \date		Modified on Sat Sep 17 12:39:26 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef TIMEPROV_H
#define TIMEPROV_H
#if __POCC__ >= 500
#pragma once
#endif
#define wszW32TimeRegKeyTimeProviders		L"System\\CurrentControlSet\\Services\\W32Time\\TimeProviders"
#define wszW32TimeRegKeyPolicyTimeProviders	L"Software\\Policies\\Microsoft\\W32Time\\TimeProviders"
#define wszW32TimeRegValueEnabled			L"Enabled"
#define wszW32TimeRegValueDllName			L"DllName"
#define wszW32TimeRegValueInputProvider		L"InputProvider"
#define TSF_Hardware						0x00000001
#define TSF_Authenticated					0x00000002
#define TSF_IPv6							0x00000004
typedef enum TimeProvCmd
{
    TPC_TimeJumped,
    TPC_UpdateConfig,
    TPC_PollIntervalChanged,
    TPC_GetSamples,
    TPC_NetTopoChange,
    TPC_Query,
    TPC_Shutdown,
} TimeProvCmd;
typedef enum TimeSysInfo
{
    TSI_LastSyncTime,
    TSI_ClockTickSize,
    TSI_ClockPrecision,
    TSI_CurrentTime,
    TSI_PhaseOffset,
    TSI_TickCount,
    TSI_LeapFlags,
    TSI_Stratum,
    TSI_ReferenceIdentifier,
    TSI_PollInterval,
    TSI_RootDelay,
    TSI_RootDispersion,
    TSI_TSFlags,
    TSI_SeriviceRole,
} TimeSysInfo;
typedef enum TimeJumpedFlags
{ 
    TJF_Default=0, 
    TJF_UserRequested=1,
} TimeJumpedFlags;
typedef enum NetTopoChangeFlags
{ 
    NTC_Default=0,
    NTC_UserRequested=1,
} NetTopoChangeFlags;
typedef enum TimeProvState
{ 
    TPS_Running, 
    TPS_Error,
} TimeProvState; 
struct SetProviderStatusInfo; 
typedef void (__stdcall SetProviderStatusInfoFreeFunc) (struct SetProviderStatusInfo * pspsi);
typedef struct SetProviderStatusInfo
{ 
    TimeProvState                    tpsCurrentState;
    DWORD                            dwStratum;
    LPWSTR                           wszProvName;
    HANDLE                           hWaitEvent;
    SetProviderStatusInfoFreeFunc   *pfnFree;
    HRESULT                         *pHr;
    DWORD                           *pdwSysStratum;
} SetProviderStatusInfo;
typedef HRESULT(__stdcall GetTimeSysInfoFunc) (TimeSysInfo eInfo, void *pvInfo);
typedef HRESULT(__stdcall LogTimeProvEventFunc) (WORD wType, WCHAR *wszProvName, WCHAR *wszMessage);
typedef HRESULT(__stdcall AlertSamplesAvailFunc) (void);
typedef HRESULT(__stdcall SetProviderStatusFunc) (SetProviderStatusInfo *pspsi);
typedef struct TimeProvSysCallbacks
{
	DWORD dwSize;
	GetTimeSysInfoFunc *pfnGetTimeSysInfo;
	LogTimeProvEventFunc *pfnLogTimeProvEvent;
	AlertSamplesAvailFunc *pfnAlertSamplesAvail;
	SetProviderStatusFunc *pfnSetProviderStatus;
} TimeProvSysCallbacks;
typedef void * TimeProvArgs;
typedef struct TimeSample
{
    DWORD dwSize;
    DWORD dwRefid;
      signed __int64 toOffset;
      signed __int64 toDelay;
    unsigned __int64 tpDispersion;
    unsigned __int64 nSysTickCount;
      signed __int64 nSysPhaseOffset;
    BYTE nLeapFlags;
    BYTE nStratum;
    DWORD dwTSFlags;
    WCHAR wszUniqueName[256];
} TimeSample;
typedef struct TpcGetSamplesArgs
{
    BYTE * pbSampleBuf;
    DWORD cbSampleBuf;
    DWORD dwSamplesReturned;
    DWORD dwSamplesAvailable;
} TpcGetSamplesArgs;
typedef struct TpcTimeJumpedArgs
{ 
    TimeJumpedFlags tjfFlags; 
} TpcTimeJumpedArgs;
typedef struct TpcNetTopoChangeArgs
{ 
    NetTopoChangeFlags ntcfFlags;
} TpcNetTopoChangeArgs;
typedef void * TimeProvHandle;
HRESULT __stdcall TimeProvOpen(WCHAR *wszName, TimeProvSysCallbacks *pSysCallbacks, TimeProvHandle *phTimeProv);
HRESULT __stdcall TimeProvCommand(TimeProvHandle hTimeProv, TimeProvCmd eCmd, TimeProvArgs pvArgs);
HRESULT __stdcall TimeProvClose(TimeProvHandle hTimeProv);
#endif

