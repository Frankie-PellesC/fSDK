/*+@@file@@----------------------------------------------------------------*//*!
 \file		wdstci.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 00:24:36 2016
 \date		Modified on Mon Sep 19 00:24:36 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _WDSTCI_H
#define _WDSTCI_H
#if __POCC__ >= 500
#pragma once
#endif
#include <windows.h>
#define WDSTCIAPI									__stdcall
#define WDS_TRANSPORTCLIENT_CURRENT_API_VERSION		1
#define WDS_TRANSPORTCLIENT_PROTOCOL_MULTICAST		0x00000001
#define WDS_TRANSPORTCLIENT_AUTH    0x1
#define WDS_TRANSPORTCLIENT_NO_AUTH 0x2
typedef enum _TRANSPORTCLIENT_CALLBACK_ID
{
    WDS_TRANSPORTCLIENT_SESSION_START = 0,
    WDS_TRANSPORTCLIENT_RECEIVE_CONTENTS,
    WDS_TRANSPORTCLIENT_SESSION_COMPLETE,
    WDS_TRANSPORTCLIENT_RECEIVE_METADATA,
    WDS_TRANSPORTCLIENT_SESSION_STARTEX,
    WDS_TRANSPORTCLIENT_MAX_CALLBACKS,
} TRANSPORTCLIENT_CALLBACK_ID, *PTRANSPORTCLIENT_CALLBACK_ID;
typedef struct _TRANSPORTCLIENT_SESSION_INFO
{
    ULONG ulStructureLength;
    ULARGE_INTEGER ullFileSize;
    ULONG ulBlockSize;
} TRANSPORTCLIENT_SESSION_INFO, *PTRANSPORTCLIENT_SESSION_INFO;
#define WDS_TRANSPORTCLIENT_NO_CACHE                0
#define WDS_TRANSPORTCLIENT_STATUS_IN_PROGRESS      0x0001
#define WDS_TRANSPORTCLIENT_STATUS_SUCCESS          0x0002
#define WDS_TRANSPORTCLIENT_STATUS_FAILURE          0x0003
typedef VOID(CALLBACK *PFN_WdsTransportClientSessionStart) (HANDLE hSessionKey, PVOID pCallerData, PULARGE_INTEGER FileSize);
typedef VOID(CALLBACK *PFN_WdsTransportClientSessionStartEx) (HANDLE hSessionKey, PVOID pCallerData, PTRANSPORTCLIENT_SESSION_INFO Info);
typedef VOID(CALLBACK *PFN_WdsTransportClientReceiveMetadata) (HANDLE hSessionKey, PVOID pCallerData, PVOID pMetadata, ULONG ulSize);
typedef VOID(CALLBACK *PFN_WdsTransportClientReceiveContents) (HANDLE hSessionKey, PVOID pCallerData, PVOID pContents, ULONG ulSize, PULARGE_INTEGER pContentOffset);
typedef VOID(CALLBACK *PFN_WdsTransportClientSessionComplete) (HANDLE hSessionKey, PVOID pCallerData, DWORD dwError);
typedef struct _WDS_TRANSPORTCLIENT_REQUEST 
{
    ULONG ulLength;
    ULONG ulApiVersion;
    ULONG ulAuthLevel;
    LPCWSTR pwszServer;
    LPCWSTR pwszNamespace;
    LPCWSTR pwszObjectName;
    ULONG ulCacheSize;
    ULONG ulProtocol;
    PVOID pvProtocolData;
    ULONG ulProtocolDataLength;
} WDS_TRANSPORTCLIENT_REQUEST, *PWDS_TRANSPORTCLIENT_REQUEST;
DWORD WDSTCIAPI WdsTransportClientInitialize();
DWORD WDSTCIAPI WdsTransportClientInitializeSession(PWDS_TRANSPORTCLIENT_REQUEST pSessionRequest, PVOID pCallerData, PHANDLE hSessionKey);
DWORD WDSTCIAPI WdsTransportClientRegisterCallback(HANDLE hSessionKey, TRANSPORTCLIENT_CALLBACK_ID CallbackId, PVOID pfnCallback);
DWORD WDSTCIAPI WdsTransportClientStartSession(HANDLE hSessionKey);
DWORD WDSTCIAPI WdsTransportClientCompleteReceive(HANDLE hSessionKey, ULONG ulSize, PULARGE_INTEGER pullOffset);
DWORD WDSTCIAPI WdsTransportClientCancelSession(HANDLE hSessionKey);
DWORD WDSTCIAPI WdsTransportClientCancelSessionEx(HANDLE hSessionKey, DWORD dwErrorCode);
DWORD WDSTCIAPI WdsTransportClientWaitForCompletion(HANDLE hSessionKey, ULONG uTimeout);
DWORD WDSTCIAPI WdsTransportClientQueryStatus(HANDLE hSessionKey, PULONG puStatus, PULONG puErrorCode);
DWORD WDSTCIAPI WdsTransportClientCloseSession(HANDLE hSessionKey);
DWORD WDSTCIAPI WdsTransportClientAddRefBuffer(PVOID pvBuffer);
DWORD WDSTCIAPI WdsTransportClientReleaseBuffer(PVOID pvBuffer);
DWORD WDSTCIAPI WdsTransportClientShutdown();
#endif
