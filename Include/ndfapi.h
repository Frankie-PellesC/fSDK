/*+@@file@@----------------------------------------------------------------*//*!
 \file		ndfapi.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep 11 22:38:54 2016
 \date		Modified on Sun Sep 11 22:38:54 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef NDFAPI_H__
#define NDFAPI_H__
#if __POCC__ >= 500
#pragma once
#endif
#include <ndattrib.h>
#ifndef __CSADDR_DEFINED__
struct SOCKET_ADDRESS_LIST;
#endif
typedef PVOID NDFHANDLE; 
STDAPI NdfCreateIncident(LPCWSTR helperClassName, ULONG celt, HELPER_ATTRIBUTE *attributes, NDFHANDLE *handle);
STDAPI NdfCreateWinSockIncident(SOCKET sock, LPCWSTR host, USHORT port, LPCWSTR appId, SID *userId, NDFHANDLE *handle);
STDAPI NdfCreateWebIncident(LPCWSTR url, NDFHANDLE *handle);
STDAPI NdfCreateWebIncidentEx(LPCWSTR url, BOOL useWinHTTP, LPWSTR moduleName, NDFHANDLE *handle);
STDAPI NdfCreateSharingIncident(LPCWSTR UNCPath, NDFHANDLE *handle);
STDAPI NdfCreateDNSIncident(LPCWSTR hostname, WORD queryType, NDFHANDLE *handle);
STDAPI NdfCreateConnectivityIncident(NDFHANDLE *handle);
STDAPI NdfCreatePnrpIncident(LPCWSTR cloudname, LPCWSTR peername, BOOL diagnosePublish, LPCWSTR appId, NDFHANDLE *handle);
#define NDF_INBOUND_FLAG_EDGETRAVERSAL      0x00001
#define NDF_INBOUND_FLAG_HEALTHCHECK         0x00002
#ifdef __CSADDR_DEFINED__
STDAPI NdfCreateInboundIncident(LPCWSTR applicationID, LPCWSTR serviceID, SID *userID, const SOCKADDR_STORAGE *localTarget, IPPROTO protocol, DWORD dwFlags, NDFHANDLE *handle);
#endif
HRESULT WINAPI NdfCreateGroupingIncident(LPCWSTR CloudName, LPCWSTR GroupName, LPCWSTR Identity, LPCWSTR Invitation, SOCKET_ADDRESS_LIST *Addresses, LPCWSTR appId, NDFHANDLE *handle);
STDAPI NdfExecuteDiagnosis(NDFHANDLE handle, HWND hwnd);
STDAPI NdfCloseIncident(NDFHANDLE handle);
#define NDF_ADD_CAPTURE_TRACE   0x0001
STDAPI NdfDiagnoseIncident(NDFHANDLE Handle, ULONG *RootCauseCount, RootCauseInfo **RootCauses, DWORD dwWait, DWORD dwFlags);
STDAPI NdfRepairIncident(NDFHANDLE Handle, RepairInfoEx *RepairEx, DWORD dwWait);
STDAPI NdfCancelIncident(NDFHANDLE Handle);
STDAPI NdfGetTraceFile(NDFHANDLE Handle, LPCWSTR *TraceFileLocation);
#endif
