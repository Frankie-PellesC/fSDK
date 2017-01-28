/*+@@file@@----------------------------------------------------------------*//*!
 \file		TSGPolicyEngine.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 13:00:21 2016
 \date		Modified on Sat Sep 17 13:00:21 2016
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
#ifndef __tsgpolicyengine_h__
#define __tsgpolicyengine_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ITSGAuthorizeConnectionSink_FWD_DEFINED__
#define __ITSGAuthorizeConnectionSink_FWD_DEFINED__
typedef interface ITSGAuthorizeConnectionSink ITSGAuthorizeConnectionSink;
#endif
#ifndef __ITSGAuthorizeResourceSink_FWD_DEFINED__
#define __ITSGAuthorizeResourceSink_FWD_DEFINED__
typedef interface ITSGAuthorizeResourceSink ITSGAuthorizeResourceSink;
#endif
#ifndef __ITSGPolicyEngine_FWD_DEFINED__
#define __ITSGPolicyEngine_FWD_DEFINED__
typedef interface ITSGPolicyEngine ITSGPolicyEngine;
#endif
#ifndef __ITSGAccountingEngine_FWD_DEFINED__
#define __ITSGAccountingEngine_FWD_DEFINED__
typedef interface ITSGAccountingEngine ITSGAccountingEngine;
#endif
#include <oaidl.h>
#include <ocidl.h>
typedef enum __MIDL___MIDL_itf_tsgpolicyengine_0000_0000_0001
{
	AA_AUTH_MIN = 0,
	AA_AUTH_BASIC = (AA_AUTH_MIN + 1),
	AA_AUTH_NTLM = (AA_AUTH_BASIC + 1),
	AA_AUTH_SC = (AA_AUTH_NTLM + 1),
	AA_AUTH_LOGGEDONCREDENTIALS = (AA_AUTH_SC + 1),
	AA_AUTH_NEGOTIATE = (AA_AUTH_LOGGEDONCREDENTIALS + 1),
	AA_AUTH_ANY = (AA_AUTH_NEGOTIATE + 1),
	AA_AUTH_COOKIE = (AA_AUTH_ANY + 1),
	AA_AUTH_MAX = (AA_AUTH_COOKIE + 1)
} AAAuthSchemes;
typedef enum __MIDL___MIDL_itf_tsgpolicyengine_0000_0000_0002
{
	AA_MAIN_SESSION_CREATION = 0,
	AA_SUB_SESSION_CREATION = (AA_MAIN_SESSION_CREATION + 1),
	AA_SUB_SESSION_CLOSED = (AA_SUB_SESSION_CREATION + 1),
	AA_MAIN_SESSION_CLOSED = (AA_SUB_SESSION_CLOSED + 1)
} AAAccountingDataType;
typedef struct __MIDL___MIDL_itf_tsgpolicyengine_0000_0000_0003
{
	BSTR userName;
	BSTR clientName;
	AAAuthSchemes authType;
	BSTR resourceName;
	int portNumber;
	BSTR protocolName;
	int numberOfBytesReceived;
	int numberOfBytesTransfered;
	BSTR reasonForDisconnect;
	GUID mainSessionId;
	int subSessionId;
} AAAccountingData;
typedef enum __MIDL___MIDL_itf_tsgpolicyengine_0000_0000_0004
{
	SESSION_TIMEOUT_ACTION_DISCONNECT = 0,
	SESSION_TIMEOUT_ACTION_SILENT_REAUTH = (SESSION_TIMEOUT_ACTION_DISCONNECT + 1)
} SESSION_TIMEOUT_ACTION_TYPE;
typedef enum __MIDL___MIDL_itf_tsgpolicyengine_0000_0000_0005
{
	EnableAllRedirections = 0,
	DisableAllRedirections = (EnableAllRedirections + 1),
	DriveRedirectionDisabled = (DisableAllRedirections + 1),
	PrinterRedirectionDisabled = (DriveRedirectionDisabled + 1),
	PortRedirectionDisabled = (PrinterRedirectionDisabled + 1),
	ClipboardRedirectionDisabled = (PortRedirectionDisabled + 1),
	PnpRedirectionDisabled = (ClipboardRedirectionDisabled + 1),
	AllowOnlySDRServers = (PnpRedirectionDisabled + 1)
} PolicyAttributeType;
#define MAX_POLICY_ATTRIBUTES 20
typedef DWORD PolicyAttributes[20];
typedef enum __MIDL___MIDL_itf_tsgpolicyengine_0000_0000_0006
{
	AA_UNTRUSTED = 0,
	AA_TRUSTEDUSER_UNTRUSTEDCLIENT = (AA_UNTRUSTED + 1),
	AA_TRUSTEDUSER_TRUSTEDCLIENT = (AA_TRUSTEDUSER_UNTRUSTEDCLIENT + 1)
} AATrustClassID;
extern RPC_IF_HANDLE __MIDL_itf_tsgpolicyengine_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tsgpolicyengine_0000_0000_v0_0_s_ifspec;
#ifndef __ITSGAuthorizeConnectionSink_INTERFACE_DEFINED__
#define __ITSGAuthorizeConnectionSink_INTERFACE_DEFINED__
extern const IID IID_ITSGAuthorizeConnectionSink;
typedef struct ITSGAuthorizeConnectionSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITSGAuthorizeConnectionSink * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITSGAuthorizeConnectionSink * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITSGAuthorizeConnectionSink * This);
	HRESULT(STDMETHODCALLTYPE * OnConnectionAuthorized) (ITSGAuthorizeConnectionSink * This, HRESULT hrIn, GUID mainSessionId, ULONG cbSoHResponse, BYTE * pbSoHResponse, ULONG idleTimeout, ULONG sessionTimeout, SESSION_TIMEOUT_ACTION_TYPE sessionTimeoutAction, AATrustClassID trustClass, PolicyAttributes policyAttributes);
	END_INTERFACE
}  ITSGAuthorizeConnectionSinkVtbl;
interface ITSGAuthorizeConnectionSink
{
	CONST_VTBL struct ITSGAuthorizeConnectionSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITSGAuthorizeConnectionSink_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITSGAuthorizeConnectionSink_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITSGAuthorizeConnectionSink_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITSGAuthorizeConnectionSink_OnConnectionAuthorized(This,hrIn,mainSessionId,cbSoHResponse,pbSoHResponse,idleTimeout,sessionTimeout,sessionTimeoutAction,trustClass,policyAttributes) ( (This)->lpVtbl -> OnConnectionAuthorized(This,hrIn,mainSessionId,cbSoHResponse,pbSoHResponse,idleTimeout,sessionTimeout,sessionTimeoutAction,trustClass,policyAttributes) )
#endif
#endif
#ifndef __ITSGAuthorizeResourceSink_INTERFACE_DEFINED__
#define __ITSGAuthorizeResourceSink_INTERFACE_DEFINED__
extern const IID IID_ITSGAuthorizeResourceSink;
typedef struct ITSGAuthorizeResourceSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITSGAuthorizeResourceSink * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITSGAuthorizeResourceSink * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITSGAuthorizeResourceSink * This);
	HRESULT(STDMETHODCALLTYPE * OnChannelAuthorized) (ITSGAuthorizeResourceSink * This, HRESULT hrIn, GUID mainSessionId, int subSessionId, BSTR * allowedResourceNames, ULONG numAllowedResourceNames, BSTR * failedResourceNames, ULONG numFailedResourceNames);
	END_INTERFACE
}  ITSGAuthorizeResourceSinkVtbl;
interface ITSGAuthorizeResourceSink
{
	CONST_VTBL struct ITSGAuthorizeResourceSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITSGAuthorizeResourceSink_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITSGAuthorizeResourceSink_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITSGAuthorizeResourceSink_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITSGAuthorizeResourceSink_OnChannelAuthorized(This,hrIn,mainSessionId,subSessionId,allowedResourceNames,numAllowedResourceNames,failedResourceNames,numFailedResourceNames) ( (This)->lpVtbl -> OnChannelAuthorized(This,hrIn,mainSessionId,subSessionId,allowedResourceNames,numAllowedResourceNames,failedResourceNames,numFailedResourceNames) )
#endif
#endif
#ifndef __ITSGPolicyEngine_INTERFACE_DEFINED__
#define __ITSGPolicyEngine_INTERFACE_DEFINED__
extern const IID IID_ITSGPolicyEngine;
typedef struct ITSGPolicyEngineVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITSGPolicyEngine * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITSGPolicyEngine * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITSGPolicyEngine * This);
	HRESULT(STDMETHODCALLTYPE * AuthorizeConnection) (ITSGPolicyEngine * This, GUID mainSessionId, BSTR username, AAAuthSchemes authType, BSTR clientMachineIP, BSTR clientMachineName, BYTE * sohData, ULONG numSOHBytes, BYTE * cookieData, ULONG numCookieBytes, HANDLE_PTR userToken, ITSGAuthorizeConnectionSink * pSink);
	HRESULT(STDMETHODCALLTYPE * AuthorizeResource) (ITSGPolicyEngine * This, GUID mainSessionId, int subSessionId, BSTR username, BSTR * resourceNames, ULONG numResources, BSTR * alternateResourceNames, ULONG numAlternateResourceName, ULONG portNumber, BSTR operation, BYTE * cookie, ULONG numBytesInCookie, ITSGAuthorizeResourceSink * pSink);
	HRESULT(STDMETHODCALLTYPE * Refresh) (ITSGPolicyEngine * This);
	HRESULT(STDMETHODCALLTYPE * IsQuarantineEnabled) (ITSGPolicyEngine * This, BOOL * quarantineEnabled);
	END_INTERFACE
}  ITSGPolicyEngineVtbl;
interface ITSGPolicyEngine
{
	CONST_VTBL struct ITSGPolicyEngineVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITSGPolicyEngine_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITSGPolicyEngine_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITSGPolicyEngine_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITSGPolicyEngine_AuthorizeConnection(This,mainSessionId,username,authType,clientMachineIP,clientMachineName,sohData,numSOHBytes,cookieData,numCookieBytes,userToken,pSink) ( (This)->lpVtbl -> AuthorizeConnection(This,mainSessionId,username,authType,clientMachineIP,clientMachineName,sohData,numSOHBytes,cookieData,numCookieBytes,userToken,pSink) )
#define ITSGPolicyEngine_AuthorizeResource(This,mainSessionId,subSessionId,username,resourceNames,numResources,alternateResourceNames,numAlternateResourceName,portNumber,operation,cookie,numBytesInCookie,pSink) ( (This)->lpVtbl -> AuthorizeResource(This,mainSessionId,subSessionId,username,resourceNames,numResources,alternateResourceNames,numAlternateResourceName,portNumber,operation,cookie,numBytesInCookie,pSink) )
#define ITSGPolicyEngine_Refresh(This) ( (This)->lpVtbl -> Refresh(This) )
#define ITSGPolicyEngine_IsQuarantineEnabled(This,quarantineEnabled) ( (This)->lpVtbl -> IsQuarantineEnabled(This,quarantineEnabled) )
#endif
#endif
#ifndef __ITSGAccountingEngine_INTERFACE_DEFINED__
#define __ITSGAccountingEngine_INTERFACE_DEFINED__
extern const IID IID_ITSGAccountingEngine;
typedef struct ITSGAccountingEngineVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITSGAccountingEngine * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITSGAccountingEngine * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITSGAccountingEngine * This);
	HRESULT(STDMETHODCALLTYPE * DoAccounting) (ITSGAccountingEngine * This, AAAccountingDataType accountingDataType, AAAccountingData accountingData);
	END_INTERFACE
}  ITSGAccountingEngineVtbl;
interface ITSGAccountingEngine
{
	CONST_VTBL struct ITSGAccountingEngineVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITSGAccountingEngine_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITSGAccountingEngine_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITSGAccountingEngine_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITSGAccountingEngine_DoAccounting(This,accountingDataType,accountingData) ( (This)->lpVtbl -> DoAccounting(This,accountingDataType,accountingData) )
#endif
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
#endif
