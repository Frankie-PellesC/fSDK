/*+@@file@@----------------------------------------------------------------*//*!
 \file		wtsprotocol.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 19:01:01 2016
 \date		Modified on Mon Sep 19 19:01:01 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif
#include <rpc.h>
#include <rpcndr.h>
#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif
#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif
#ifndef __wtsprotocol_h__
#define __wtsprotocol_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWTSProtocolManager_FWD_DEFINED__
#define __IWTSProtocolManager_FWD_DEFINED__
typedef interface IWTSProtocolManager IWTSProtocolManager;
#endif
#ifndef __IWTSProtocolListener_FWD_DEFINED__
#define __IWTSProtocolListener_FWD_DEFINED__
typedef interface IWTSProtocolListener IWTSProtocolListener;
#endif
#ifndef __IWTSProtocolListenerCallback_FWD_DEFINED__
#define __IWTSProtocolListenerCallback_FWD_DEFINED__
typedef interface IWTSProtocolListenerCallback IWTSProtocolListenerCallback;
#endif
#ifndef __IWTSProtocolConnection_FWD_DEFINED__
#define __IWTSProtocolConnection_FWD_DEFINED__
typedef interface IWTSProtocolConnection IWTSProtocolConnection;
#endif
#ifndef __IWTSProtocolConnectionCallback_FWD_DEFINED__
#define __IWTSProtocolConnectionCallback_FWD_DEFINED__
typedef interface IWTSProtocolConnectionCallback IWTSProtocolConnectionCallback;
#endif
#ifndef __IWTSProtocolShadowConnection_FWD_DEFINED__
#define __IWTSProtocolShadowConnection_FWD_DEFINED__
typedef interface IWTSProtocolShadowConnection IWTSProtocolShadowConnection;
#endif
#ifndef __IWTSProtocolShadowCallback_FWD_DEFINED__
#define __IWTSProtocolShadowCallback_FWD_DEFINED__
typedef interface IWTSProtocolShadowCallback IWTSProtocolShadowCallback;
#endif
#ifndef __IWTSProtocolLicenseConnection_FWD_DEFINED__
#define __IWTSProtocolLicenseConnection_FWD_DEFINED__
typedef interface IWTSProtocolLicenseConnection IWTSProtocolLicenseConnection;
#endif
#ifndef __IWTSProtocolLogonErrorRedirector_FWD_DEFINED__
#define __IWTSProtocolLogonErrorRedirector_FWD_DEFINED__
typedef interface IWTSProtocolLogonErrorRedirector IWTSProtocolLogonErrorRedirector;
#endif
#include <oaidl.h>
#include <ocidl.h>
#include <wtsdefs.h>
extern RPC_IF_HANDLE __MIDL_itf_wtsprotocol_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wtsprotocol_0000_0000_v0_0_s_ifspec;
#ifndef __IWTSProtocolManager_INTERFACE_DEFINED__
#define __IWTSProtocolManager_INTERFACE_DEFINED__
extern const IID IID_IWTSProtocolManager;
typedef struct IWTSProtocolManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWTSProtocolManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWTSProtocolManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWTSProtocolManager * This);
	HRESULT(STDMETHODCALLTYPE * CreateListener) (IWTSProtocolManager * This, WCHAR * wszListenerName, IWTSProtocolListener ** pProtocolListener);
	HRESULT(STDMETHODCALLTYPE * NotifyServiceStateChange) (IWTSProtocolManager * This, WTS_SERVICE_STATE * pTSServiceStateChange);
	HRESULT(STDMETHODCALLTYPE * NotifySessionOfServiceStart) (IWTSProtocolManager * This, WTS_SESSION_ID * SessionId);
	HRESULT(STDMETHODCALLTYPE * NotifySessionOfServiceStop) (IWTSProtocolManager * This, WTS_SESSION_ID * SessionId);
	HRESULT(STDMETHODCALLTYPE * NotifySessionStateChange) (IWTSProtocolManager * This, WTS_SESSION_ID * SessionId, ULONG EventId);
	END_INTERFACE
}  IWTSProtocolManagerVtbl;
interface IWTSProtocolManager
{
	CONST_VTBL struct IWTSProtocolManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWTSProtocolManager_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWTSProtocolManager_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWTSProtocolManager_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWTSProtocolManager_CreateListener(This,wszListenerName,pProtocolListener) ( (This)->lpVtbl -> CreateListener(This,wszListenerName,pProtocolListener) )
#define IWTSProtocolManager_NotifyServiceStateChange(This,pTSServiceStateChange) ( (This)->lpVtbl -> NotifyServiceStateChange(This,pTSServiceStateChange) )
#define IWTSProtocolManager_NotifySessionOfServiceStart(This,SessionId) ( (This)->lpVtbl -> NotifySessionOfServiceStart(This,SessionId) )
#define IWTSProtocolManager_NotifySessionOfServiceStop(This,SessionId) ( (This)->lpVtbl -> NotifySessionOfServiceStop(This,SessionId) )
#define IWTSProtocolManager_NotifySessionStateChange(This,SessionId,EventId) ( (This)->lpVtbl -> NotifySessionStateChange(This,SessionId,EventId) )
#endif
#endif
#ifndef __IWTSProtocolListener_INTERFACE_DEFINED__
#define __IWTSProtocolListener_INTERFACE_DEFINED__
extern const IID IID_IWTSProtocolListener;
typedef struct IWTSProtocolListenerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWTSProtocolListener * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWTSProtocolListener * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWTSProtocolListener * This);
	HRESULT(STDMETHODCALLTYPE * StartListen) (IWTSProtocolListener * This, IWTSProtocolListenerCallback * pCallback);
	HRESULT(STDMETHODCALLTYPE * StopListen) (IWTSProtocolListener * This);
	END_INTERFACE
}  IWTSProtocolListenerVtbl;
interface IWTSProtocolListener
{
	CONST_VTBL struct IWTSProtocolListenerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWTSProtocolListener_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWTSProtocolListener_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWTSProtocolListener_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWTSProtocolListener_StartListen(This,pCallback) ( (This)->lpVtbl -> StartListen(This,pCallback) )
#define IWTSProtocolListener_StopListen(This) ( (This)->lpVtbl -> StopListen(This) )
#endif
#endif
#ifndef __IWTSProtocolListenerCallback_INTERFACE_DEFINED__
#define __IWTSProtocolListenerCallback_INTERFACE_DEFINED__
extern const IID IID_IWTSProtocolListenerCallback;
typedef struct IWTSProtocolListenerCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWTSProtocolListenerCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWTSProtocolListenerCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWTSProtocolListenerCallback * This);
	HRESULT(STDMETHODCALLTYPE * OnConnected) (IWTSProtocolListenerCallback * This, IWTSProtocolConnection * pConnection, IWTSProtocolConnectionCallback ** pCallback);
	END_INTERFACE
}  IWTSProtocolListenerCallbackVtbl;
interface IWTSProtocolListenerCallback
{
	CONST_VTBL struct IWTSProtocolListenerCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWTSProtocolListenerCallback_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWTSProtocolListenerCallback_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWTSProtocolListenerCallback_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWTSProtocolListenerCallback_OnConnected(This,pConnection,pCallback) ( (This)->lpVtbl -> OnConnected(This,pConnection,pCallback) )
#endif
#endif
#ifndef __IWTSProtocolConnection_INTERFACE_DEFINED__
#define __IWTSProtocolConnection_INTERFACE_DEFINED__
extern const IID IID_IWTSProtocolConnection;
typedef struct IWTSProtocolConnectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWTSProtocolConnection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWTSProtocolConnection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWTSProtocolConnection * This);
	HRESULT(STDMETHODCALLTYPE * GetLogonErrorRedirector) (IWTSProtocolConnection * This, IWTSProtocolLogonErrorRedirector ** ppLogonErrorRedir);
	HRESULT(STDMETHODCALLTYPE * SendPolicyData) (IWTSProtocolConnection * This, WTS_POLICY_DATA * pPolicyData);
	HRESULT(STDMETHODCALLTYPE * AcceptConnection) (IWTSProtocolConnection * This);
	HRESULT(STDMETHODCALLTYPE * GetClientData) (IWTSProtocolConnection * This, WTS_CLIENT_DATA * pClientData);
	HRESULT(STDMETHODCALLTYPE * GetUserCredentials) (IWTSProtocolConnection * This, WTS_USER_CREDENTIAL * pUserCreds);
	HRESULT(STDMETHODCALLTYPE * GetLicenseConnection) (IWTSProtocolConnection * This, IWTSProtocolLicenseConnection ** ppLicenseConnection);
	HRESULT(STDMETHODCALLTYPE * AuthenticateClientToSession) (IWTSProtocolConnection * This, WTS_SESSION_ID * SessionId);
	HRESULT(STDMETHODCALLTYPE * NotifySessionId) (IWTSProtocolConnection * This, WTS_SESSION_ID * SessionId);
	HRESULT(STDMETHODCALLTYPE * GetProtocolHandles) (IWTSProtocolConnection * This, HANDLE_PTR * pKeyboardHandle, HANDLE_PTR * pMouseHandle, HANDLE_PTR * pBeepHandle, HANDLE_PTR * pVideoHandle);
	HRESULT(STDMETHODCALLTYPE * ConnectNotify) (IWTSProtocolConnection * This, ULONG SessionId);
	HRESULT(STDMETHODCALLTYPE * IsUserAllowedToLogon) (IWTSProtocolConnection * This, ULONG SessionId, HANDLE_PTR UserToken, WCHAR * pDomainName, WCHAR * pUserName);
	HRESULT(STDMETHODCALLTYPE * SessionArbitrationEnumeration) (IWTSProtocolConnection * This, HANDLE_PTR hUserToken, BOOL bSingleSessionPerUserEnabled, ULONG * pSessionIdArray, ULONG * pdwSessionIdentifierCount);
	HRESULT(STDMETHODCALLTYPE * LogonNotify) (IWTSProtocolConnection * This, HANDLE_PTR hClientToken, WCHAR * wszUserName, WCHAR * wszDomainName, WTS_SESSION_ID * SessionId);
	HRESULT(STDMETHODCALLTYPE * GetUserData) (IWTSProtocolConnection * This, WTS_POLICY_DATA * pPolicyData, WTS_USER_DATA * pClientData);
	HRESULT(STDMETHODCALLTYPE * DisconnectNotify) (IWTSProtocolConnection * This);
	HRESULT(STDMETHODCALLTYPE * Close) (IWTSProtocolConnection * This);
	HRESULT(STDMETHODCALLTYPE * GetProtocolStatus) (IWTSProtocolConnection * This, WTS_PROTOCOL_STATUS * pProtocolStatus);
	HRESULT(STDMETHODCALLTYPE * GetLastInputTime) (IWTSProtocolConnection * This, ULONG64 * pLastInputTime);
	HRESULT(STDMETHODCALLTYPE * SetErrorInfo) (IWTSProtocolConnection * This, ULONG ulError);
	HRESULT(STDMETHODCALLTYPE * SendBeep) (IWTSProtocolConnection * This, ULONG Frequency, ULONG Duration);
	HRESULT(STDMETHODCALLTYPE * CreateVirtualChannel) (IWTSProtocolConnection * This, CHAR * szEndpointName, BOOL bStatic, ULONG RequestedPriority, ULONG_PTR * phChannel);
	HRESULT(STDMETHODCALLTYPE * QueryProperty) (IWTSProtocolConnection * This, GUID QueryType, ULONG ulNumEntriesIn, ULONG ulNumEntriesOut, PWTS_PROPERTY_VALUE pPropertyEntriesIn, PWTS_PROPERTY_VALUE pPropertyEntriesOut);
	HRESULT(STDMETHODCALLTYPE * GetShadowConnection) (IWTSProtocolConnection * This, IWTSProtocolShadowConnection ** ppShadowConnection);
	END_INTERFACE
}  IWTSProtocolConnectionVtbl;
interface IWTSProtocolConnection
{
	CONST_VTBL struct IWTSProtocolConnectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWTSProtocolConnection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWTSProtocolConnection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWTSProtocolConnection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWTSProtocolConnection_GetLogonErrorRedirector(This,ppLogonErrorRedir) ( (This)->lpVtbl -> GetLogonErrorRedirector(This,ppLogonErrorRedir) )
#define IWTSProtocolConnection_SendPolicyData(This,pPolicyData) ( (This)->lpVtbl -> SendPolicyData(This,pPolicyData) )
#define IWTSProtocolConnection_AcceptConnection(This) ( (This)->lpVtbl -> AcceptConnection(This) )
#define IWTSProtocolConnection_GetClientData(This,pClientData) ( (This)->lpVtbl -> GetClientData(This,pClientData) )
#define IWTSProtocolConnection_GetUserCredentials(This,pUserCreds) ( (This)->lpVtbl -> GetUserCredentials(This,pUserCreds) )
#define IWTSProtocolConnection_GetLicenseConnection(This,ppLicenseConnection) ( (This)->lpVtbl -> GetLicenseConnection(This,ppLicenseConnection) )
#define IWTSProtocolConnection_AuthenticateClientToSession(This,SessionId) ( (This)->lpVtbl -> AuthenticateClientToSession(This,SessionId) )
#define IWTSProtocolConnection_NotifySessionId(This,SessionId) ( (This)->lpVtbl -> NotifySessionId(This,SessionId) )
#define IWTSProtocolConnection_GetProtocolHandles(This,pKeyboardHandle,pMouseHandle,pBeepHandle,pVideoHandle) ( (This)->lpVtbl -> GetProtocolHandles(This,pKeyboardHandle,pMouseHandle,pBeepHandle,pVideoHandle) )
#define IWTSProtocolConnection_ConnectNotify(This,SessionId) ( (This)->lpVtbl -> ConnectNotify(This,SessionId) )
#define IWTSProtocolConnection_IsUserAllowedToLogon(This,SessionId,UserToken,pDomainName,pUserName) ( (This)->lpVtbl -> IsUserAllowedToLogon(This,SessionId,UserToken,pDomainName,pUserName) )
#define IWTSProtocolConnection_SessionArbitrationEnumeration(This,hUserToken,bSingleSessionPerUserEnabled,pSessionIdArray,pdwSessionIdentifierCount) ( (This)->lpVtbl -> SessionArbitrationEnumeration(This,hUserToken,bSingleSessionPerUserEnabled,pSessionIdArray,pdwSessionIdentifierCount) )
#define IWTSProtocolConnection_LogonNotify(This,hClientToken,wszUserName,wszDomainName,SessionId) ( (This)->lpVtbl -> LogonNotify(This,hClientToken,wszUserName,wszDomainName,SessionId) )
#define IWTSProtocolConnection_GetUserData(This,pPolicyData,pClientData) ( (This)->lpVtbl -> GetUserData(This,pPolicyData,pClientData) )
#define IWTSProtocolConnection_DisconnectNotify(This) ( (This)->lpVtbl -> DisconnectNotify(This) )
#define IWTSProtocolConnection_Close(This) ( (This)->lpVtbl -> Close(This) )
#define IWTSProtocolConnection_GetProtocolStatus(This,pProtocolStatus) ( (This)->lpVtbl -> GetProtocolStatus(This,pProtocolStatus) )
#define IWTSProtocolConnection_GetLastInputTime(This,pLastInputTime) ( (This)->lpVtbl -> GetLastInputTime(This,pLastInputTime) )
#define IWTSProtocolConnection_SetErrorInfo(This,ulError) ( (This)->lpVtbl -> SetErrorInfo(This,ulError) )
#define IWTSProtocolConnection_SendBeep(This,Frequency,Duration) ( (This)->lpVtbl -> SendBeep(This,Frequency,Duration) )
#define IWTSProtocolConnection_CreateVirtualChannel(This,szEndpointName,bStatic,RequestedPriority,phChannel) ( (This)->lpVtbl -> CreateVirtualChannel(This,szEndpointName,bStatic,RequestedPriority,phChannel) )
#define IWTSProtocolConnection_QueryProperty(This,QueryType,ulNumEntriesIn,ulNumEntriesOut,pPropertyEntriesIn,pPropertyEntriesOut) ( (This)->lpVtbl -> QueryProperty(This,QueryType,ulNumEntriesIn,ulNumEntriesOut,pPropertyEntriesIn,pPropertyEntriesOut) )
#define IWTSProtocolConnection_GetShadowConnection(This,ppShadowConnection) ( (This)->lpVtbl -> GetShadowConnection(This,ppShadowConnection) )
#endif
#endif
#ifndef __IWTSProtocolConnectionCallback_INTERFACE_DEFINED__
#define __IWTSProtocolConnectionCallback_INTERFACE_DEFINED__
extern const IID IID_IWTSProtocolConnectionCallback;
typedef struct IWTSProtocolConnectionCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWTSProtocolConnectionCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWTSProtocolConnectionCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWTSProtocolConnectionCallback * This);
	HRESULT(STDMETHODCALLTYPE * OnReady) (IWTSProtocolConnectionCallback * This);
	HRESULT(STDMETHODCALLTYPE * BrokenConnection) (IWTSProtocolConnectionCallback * This, ULONG Reason, ULONG Source);
	HRESULT(STDMETHODCALLTYPE * StopScreenUpdates) (IWTSProtocolConnectionCallback * This);
	HRESULT(STDMETHODCALLTYPE * RedrawWindow) (IWTSProtocolConnectionCallback * This, WTS_SMALL_RECT * rect);
	HRESULT(STDMETHODCALLTYPE * DisplayIOCtl) (IWTSProtocolConnectionCallback * This, WTS_DISPLAY_IOCTL * DisplayIOCtl);
	END_INTERFACE
}  IWTSProtocolConnectionCallbackVtbl;
interface IWTSProtocolConnectionCallback
{
	CONST_VTBL struct IWTSProtocolConnectionCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWTSProtocolConnectionCallback_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWTSProtocolConnectionCallback_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWTSProtocolConnectionCallback_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWTSProtocolConnectionCallback_OnReady(This) ( (This)->lpVtbl -> OnReady(This) )
#define IWTSProtocolConnectionCallback_BrokenConnection(This,Reason,Source) ( (This)->lpVtbl -> BrokenConnection(This,Reason,Source) )
#define IWTSProtocolConnectionCallback_StopScreenUpdates(This) ( (This)->lpVtbl -> StopScreenUpdates(This) )
#define IWTSProtocolConnectionCallback_RedrawWindow(This,rect) ( (This)->lpVtbl -> RedrawWindow(This,rect) )
#define IWTSProtocolConnectionCallback_DisplayIOCtl(This,DisplayIOCtl) ( (This)->lpVtbl -> DisplayIOCtl(This,DisplayIOCtl) )
#endif
#endif
#ifndef __IWTSProtocolShadowConnection_INTERFACE_DEFINED__
#define __IWTSProtocolShadowConnection_INTERFACE_DEFINED__
extern const IID IID_IWTSProtocolShadowConnection;
typedef struct IWTSProtocolShadowConnectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWTSProtocolShadowConnection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWTSProtocolShadowConnection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWTSProtocolShadowConnection * This);
	HRESULT(STDMETHODCALLTYPE * Start) (IWTSProtocolShadowConnection * This, WCHAR * pTargetServerName, DWORD TargetSessionId, BYTE HotKeyVk, USHORT HotkeyModifiers, IWTSProtocolShadowCallback * pShadowCallback);
	HRESULT(STDMETHODCALLTYPE * Stop) (IWTSProtocolShadowConnection * This);
	HRESULT(STDMETHODCALLTYPE * DoTarget) (IWTSProtocolShadowConnection * This, PBYTE pParam1, DWORD Param1Size, PBYTE pParam2, DWORD Param2Size, PBYTE pParam3, DWORD Param3Size, PBYTE pParam4, DWORD Param4Size, WCHAR * pClientName);
	END_INTERFACE
}  IWTSProtocolShadowConnectionVtbl;
interface IWTSProtocolShadowConnection
{
	CONST_VTBL struct IWTSProtocolShadowConnectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWTSProtocolShadowConnection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWTSProtocolShadowConnection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWTSProtocolShadowConnection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWTSProtocolShadowConnection_Start(This,pTargetServerName,TargetSessionId,HotKeyVk,HotkeyModifiers,pShadowCallback) ( (This)->lpVtbl -> Start(This,pTargetServerName,TargetSessionId,HotKeyVk,HotkeyModifiers,pShadowCallback) )
#define IWTSProtocolShadowConnection_Stop(This) ( (This)->lpVtbl -> Stop(This) )
#define IWTSProtocolShadowConnection_DoTarget(This,pParam1,Param1Size,pParam2,Param2Size,pParam3,Param3Size,pParam4,Param4Size,pClientName) ( (This)->lpVtbl -> DoTarget(This,pParam1,Param1Size,pParam2,Param2Size,pParam3,Param3Size,pParam4,Param4Size,pClientName) )
#endif
#endif
#ifndef __IWTSProtocolShadowCallback_INTERFACE_DEFINED__
#define __IWTSProtocolShadowCallback_INTERFACE_DEFINED__
extern const IID IID_IWTSProtocolShadowCallback;
typedef struct IWTSProtocolShadowCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWTSProtocolShadowCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWTSProtocolShadowCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWTSProtocolShadowCallback * This);
	HRESULT(STDMETHODCALLTYPE * StopShadow) (IWTSProtocolShadowCallback * This);
	HRESULT(STDMETHODCALLTYPE * InvokeTargetShadow) (IWTSProtocolShadowCallback * This, WCHAR * pTargetServerName, ULONG TargetSessionId, PBYTE pParam1, DWORD Param1Size, PBYTE pParam2, DWORD Param2Size, PBYTE pParam3, DWORD Param3Size, PBYTE pParam4, DWORD Param4Size, WCHAR * pClientName);
	END_INTERFACE
}  IWTSProtocolShadowCallbackVtbl;
interface IWTSProtocolShadowCallback
{
	CONST_VTBL struct IWTSProtocolShadowCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWTSProtocolShadowCallback_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWTSProtocolShadowCallback_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWTSProtocolShadowCallback_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWTSProtocolShadowCallback_StopShadow(This) ( (This)->lpVtbl -> StopShadow(This) )
#define IWTSProtocolShadowCallback_InvokeTargetShadow(This,pTargetServerName,TargetSessionId,pParam1,Param1Size,pParam2,Param2Size,pParam3,Param3Size,pParam4,Param4Size,pClientName) ( (This)->lpVtbl -> InvokeTargetShadow(This,pTargetServerName,TargetSessionId,pParam1,Param1Size,pParam2,Param2Size,pParam3,Param3Size,pParam4,Param4Size,pClientName) )
#endif
#endif
#ifndef __IWTSProtocolLicenseConnection_INTERFACE_DEFINED__
#define __IWTSProtocolLicenseConnection_INTERFACE_DEFINED__
extern const IID IID_IWTSProtocolLicenseConnection;
typedef struct IWTSProtocolLicenseConnectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWTSProtocolLicenseConnection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWTSProtocolLicenseConnection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWTSProtocolLicenseConnection * This);
	HRESULT(STDMETHODCALLTYPE * RequestLicensingCapabilities) (IWTSProtocolLicenseConnection * This, PWTS_LICENSE_CAPABILITIES ppLicenseCapabilities, ULONG * pcbLicenseCapabilities);
	HRESULT(STDMETHODCALLTYPE * SendClientLicense) (IWTSProtocolLicenseConnection * This, PBYTE pClientLicense, ULONG cbClientLicense);
	HRESULT(STDMETHODCALLTYPE * RequestClientLicense) (IWTSProtocolLicenseConnection * This, PBYTE Reserve1, ULONG Reserve2, PBYTE ppClientLicense, ULONG * pcbClientLicense);
	HRESULT(STDMETHODCALLTYPE * ProtocolComplete) (IWTSProtocolLicenseConnection * This, ULONG ulComplete);
	END_INTERFACE
}  IWTSProtocolLicenseConnectionVtbl;
interface IWTSProtocolLicenseConnection
{
	CONST_VTBL struct IWTSProtocolLicenseConnectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWTSProtocolLicenseConnection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWTSProtocolLicenseConnection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWTSProtocolLicenseConnection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWTSProtocolLicenseConnection_RequestLicensingCapabilities(This,ppLicenseCapabilities,pcbLicenseCapabilities) ( (This)->lpVtbl -> RequestLicensingCapabilities(This,ppLicenseCapabilities,pcbLicenseCapabilities) )
#define IWTSProtocolLicenseConnection_SendClientLicense(This,pClientLicense,cbClientLicense) ( (This)->lpVtbl -> SendClientLicense(This,pClientLicense,cbClientLicense) )
#define IWTSProtocolLicenseConnection_RequestClientLicense(This,Reserve1,Reserve2,ppClientLicense,pcbClientLicense) ( (This)->lpVtbl -> RequestClientLicense(This,Reserve1,Reserve2,ppClientLicense,pcbClientLicense) )
#define IWTSProtocolLicenseConnection_ProtocolComplete(This,ulComplete) ( (This)->lpVtbl -> ProtocolComplete(This,ulComplete) )
#endif
#endif
#ifndef __IWTSProtocolLogonErrorRedirector_INTERFACE_DEFINED__
#define __IWTSProtocolLogonErrorRedirector_INTERFACE_DEFINED__
extern const IID IID_IWTSProtocolLogonErrorRedirector;
typedef struct IWTSProtocolLogonErrorRedirectorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWTSProtocolLogonErrorRedirector * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWTSProtocolLogonErrorRedirector * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWTSProtocolLogonErrorRedirector * This);
	HRESULT(STDMETHODCALLTYPE * OnBeginPainting) (IWTSProtocolLogonErrorRedirector * This);
	HRESULT(STDMETHODCALLTYPE * RedirectStatus) (IWTSProtocolLogonErrorRedirector * This, LPCWSTR pszMessage, WTS_LOGON_ERROR_REDIRECTOR_RESPONSE * pResponse);
	HRESULT(STDMETHODCALLTYPE * RedirectMessage) (IWTSProtocolLogonErrorRedirector * This, LPCWSTR pszCaption, LPCWSTR pszMessage, UINT uType, WTS_LOGON_ERROR_REDIRECTOR_RESPONSE * pResponse);
	HRESULT(STDMETHODCALLTYPE * RedirectLogonError) (IWTSProtocolLogonErrorRedirector * This, LONG ntsStatus, LONG ntsSubstatus, LPCWSTR pszCaption, LPCWSTR pszMessage, UINT uType, WTS_LOGON_ERROR_REDIRECTOR_RESPONSE * pResponse);
	END_INTERFACE
}  IWTSProtocolLogonErrorRedirectorVtbl;
interface IWTSProtocolLogonErrorRedirector
{
	CONST_VTBL struct IWTSProtocolLogonErrorRedirectorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWTSProtocolLogonErrorRedirector_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWTSProtocolLogonErrorRedirector_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWTSProtocolLogonErrorRedirector_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWTSProtocolLogonErrorRedirector_OnBeginPainting(This) ( (This)->lpVtbl -> OnBeginPainting(This) )
#define IWTSProtocolLogonErrorRedirector_RedirectStatus(This,pszMessage,pResponse) ( (This)->lpVtbl -> RedirectStatus(This,pszMessage,pResponse) )
#define IWTSProtocolLogonErrorRedirector_RedirectMessage(This,pszCaption,pszMessage,uType,pResponse) ( (This)->lpVtbl -> RedirectMessage(This,pszCaption,pszMessage,uType,pResponse) )
#define IWTSProtocolLogonErrorRedirector_RedirectLogonError(This,ntsStatus,ntsSubstatus,pszCaption,pszMessage,uType,pResponse) ( (This)->lpVtbl -> RedirectLogonError(This,ntsStatus,ntsSubstatus,pszCaption,pszMessage,uType,pResponse) )
#endif
#endif
#endif
