/*+@@file@@----------------------------------------------------------------*//*!
 \file		wdstpdi.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 00:28:39 2016
 \date		Modified on Mon Sep 19 00:28:39 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _WDSTPDI_H
#define _WDSTPDI_H
#if __POCC__ >= 500
#pragma once
#endif
#define WDSTRANSPORTPROVIDERAPI        __stdcall 
#define WDSMCSAPI                      __stdcall
#define MC_SERVER_CURRENT_VERSION 1
#define TRANSPORTPROVIDER_CURRENT_VERSION 1
#define TRANSPORT_INVALID_HANDLE (HANDLE)-1
typedef enum _TRANSPORTPROVIDER_CALLBACK_ID
{
    WDS_TRANSPORTPROVIDER_CREATE_INSTANCE = 0,
    WDS_TRANSPORTPROVIDER_COMPARE_CONTENT,
    WDS_TRANSPORTPROVIDER_OPEN_CONTENT,
    WDS_TRANSPORTPROVIDER_USER_ACCESS_CHECK,
    WDS_TRANSPORTPROVIDER_GET_CONTENT_SIZE,
    WDS_TRANSPORTPROVIDER_READ_CONTENT,
    WDS_TRANSPORTPROVIDER_CLOSE_CONTENT,
    WDS_TRANSPORTPROVIDER_CLOSE_INSTANCE,
    WDS_TRANSPORTPROVIDER_SHUTDOWN,
    WDS_TRANSPORTPROVIDER_DUMP_STATE,
    WDS_TRANSPORTPROVIDER_REFRESH_SETTINGS,
    WDS_TRANSPORTPROVIDER_GET_CONTENT_METADATA,
    WDS_TRANSPORTPROVIDER_MAX_CALLBACKS,
} TRANSPORTPROVIDER_CALLBACK_ID, *PTRANSPORTPROVIDER_CALLBACK_ID;
typedef ULONG WDS_MC_SEVERITY;
#define WDS_MC_TRACE_VERBOSE           0x00010000
#define WDS_MC_TRACE_INFO              0x00020000
#define WDS_MC_TRACE_WARNING           0x00040000
#define WDS_MC_TRACE_ERROR             0x00080000
#define WDS_MC_TRACE_FATAL             0x00100000
typedef struct _WDS_TRANSPORTPROVIDER_INIT_PARAMS
{
    ULONG ulLength;
    ULONG ulMcServerVersion;
    HKEY hRegistryKey;
    HANDLE hProvider;
} WDS_TRANSPORTPROVIDER_INIT_PARAMS, *PWDS_TRANSPORTPROVIDER_INIT_PARAMS;
typedef struct _WDS_TRANSPORTPROVIDER_SETTINGS
{
    ULONG ulLength;
    ULONG ulProviderVersion;
} WDS_TRANSPORTPROVIDER_SETTINGS, *PWDS_TRANSPORTPROVIDER_SETTINGS;
HRESULT WDSTRANSPORTPROVIDERAPI WdsTransportProviderInitialize(PWDS_TRANSPORTPROVIDER_INIT_PARAMS pInParameters, PWDS_TRANSPORTPROVIDER_SETTINGS pSettings, ULONG ulLength);
HRESULT WDSTRANSPORTPROVIDERAPI WdsTransportProviderCreateInstance(PCWSTR pwszConfigString, PHANDLE phInstance);
HRESULT WDSTRANSPORTPROVIDERAPI WdsTransportProviderCompareContent(HANDLE hInstance, PCWSTR pwszContentName, HANDLE hContent, PBOOL pbContentMatches);
HRESULT WDSTRANSPORTPROVIDERAPI WdsTransportProviderOpenContent(HANDLE hInstance, PCWSTR pwszContentName, PHANDLE phContent);
HRESULT WDSTRANSPORTPROVIDERAPI WdsTransportProviderGetContentMetadata(HANDLE hContent, PVOID *pvData, PULONG pulLength);
HRESULT WDSTRANSPORTPROVIDERAPI WdsTransportProviderUserAccessCheck(HANDLE hContent, HANDLE hUserToken, PBOOL pbAccessAllowed);
HRESULT WDSTRANSPORTPROVIDERAPI WdsTransportProviderGetContentSize(HANDLE hContent, PULARGE_INTEGER pContentSize);
HRESULT WDSTRANSPORTPROVIDERAPI WdsTransportProviderReadContent(HANDLE hContent, PVOID pBuffer, ULONG ulBytesToRead, PULARGE_INTEGER pContentOffset, PVOID pvUserData);
HRESULT WDSTRANSPORTPROVIDERAPI WdsTransportProviderCloseContent(HANDLE hContent);
HRESULT WDSTRANSPORTPROVIDERAPI WdsTransportProviderCloseInstance(HANDLE hInstance);
HRESULT WDSTRANSPORTPROVIDERAPI WdsTransportProviderShutdown();
HRESULT WDSTRANSPORTPROVIDERAPI WdsTransportProviderDumpState();
HRESULT WDSTRANSPORTPROVIDERAPI WdsTransportProviderRefreshSettings();
HRESULT WDSMCSAPI WdsTransportServerRegisterCallback(HANDLE hProvider, TRANSPORTPROVIDER_CALLBACK_ID CallbackId, PVOID pfnCallback);
HRESULT WDSMCSAPI WdsTransportServerCompleteRead(HANDLE hProvider, ULONG ulBytesRead, PVOID pvUserData, HRESULT hReadResult);
HRESULT /*WDSMCSAPI*/ __cdecl WdsTransportServerTrace(HANDLE hProvider, WDS_MC_SEVERITY Severity, LPCWSTR pwszFormat, ...);
HRESULT WDSMCSAPI WdsTransportServerTraceV(HANDLE hProvider, WDS_MC_SEVERITY Severity, LPCWSTR pwszFormat, va_list Params);
PVOID WDSMCSAPI WdsTransportServerAllocateBuffer(HANDLE hProvider, ULONG ulBufferSize);
HRESULT WDSMCSAPI WdsTransportServerFreeBuffer(HANDLE hProvider, PVOID pvBuffer);
#endif
