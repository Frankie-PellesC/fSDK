/*+@@file@@----------------------------------------------------------------*//*!
 \file		wcndevice.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep  4 18:25:58 2016
 \date		Modified on Sun Sep  4 18:25:58 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif
#include "rpc.h"
#include "rpcndr.h"
#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif
#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif
#ifndef __wcndevice_h__
#define __wcndevice_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWCNDevice_FWD_DEFINED__
#define __IWCNDevice_FWD_DEFINED__
typedef interface IWCNDevice IWCNDevice;
#endif
#ifndef __IWCNConnectNotify_FWD_DEFINED__
#define __IWCNConnectNotify_FWD_DEFINED__
typedef interface IWCNConnectNotify IWCNConnectNotify;
#endif
#ifndef __WCNDeviceObject_FWD_DEFINED__
#define __WCNDeviceObject_FWD_DEFINED__
typedef struct WCNDeviceObject WCNDeviceObject;
#endif
#include "objidl.h"
#include "WcnTypes.h"
#if NTDDI_VERSION >= NTDDI_WIN7
#define	WCN_API_MAX_BUFFER_SIZE	( 2096 )
typedef enum tagWCN_PASSWORD_TYPE
{
	WCN_PASSWORD_TYPE_PUSH_BUTTON = 0,
	WCN_PASSWORD_TYPE_PIN = (WCN_PASSWORD_TYPE_PUSH_BUTTON + 1)
} WCN_PASSWORD_TYPE;
typedef enum tagWCN_SESSION_STATUS
{
	WCN_SESSION_STATUS_SUCCESS = 0,
	WCN_SESSION_STATUS_FAILURE_GENERIC = (WCN_SESSION_STATUS_SUCCESS + 1),
	WCN_SESSION_STATUS_FAILURE_TIMEOUT = (WCN_SESSION_STATUS_FAILURE_GENERIC + 1)
} WCN_SESSION_STATUS;
typedef struct tagWCN_VENDOR_EXTENSION_SPEC
{
	DWORD VendorId;
	DWORD SubType;
	DWORD Index;
	DWORD Flags;
} WCN_VENDOR_EXTENSION_SPEC;
#define	WCN_MICROSOFT_VENDOR_ID	( 311 )
#define	WCN_NO_SUBTYPE	( 0xfffffffe )
#define	WCN_FLAG_DISCOVERY_VE	( 0x1 )
#define	WCN_FLAG_AUTHENTICATED_VE	( 0x2 )
#define	WCN_FLAG_ENCRYPTED_VE	( 0x4 )
extern RPC_IF_HANDLE __MIDL_itf_wcndevice_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wcndevice_0000_0000_v0_0_s_ifspec;
#ifndef __IWCNDevice_INTERFACE_DEFINED__
#define __IWCNDevice_INTERFACE_DEFINED__
extern const IID IID_IWCNDevice;
typedef struct IWCNDeviceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWCNDevice * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWCNDevice * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWCNDevice * This);
	HRESULT(STDMETHODCALLTYPE * SetPassword) (IWCNDevice * This, WCN_PASSWORD_TYPE Type, DWORD dwPasswordLength, const BYTE pbPassword[]);
	HRESULT(STDMETHODCALLTYPE * Connect) (IWCNDevice * This, IWCNConnectNotify * pNotify);
	HRESULT(STDMETHODCALLTYPE * GetAttribute) (IWCNDevice * This, WCN_ATTRIBUTE_TYPE AttributeType, DWORD dwMaxBufferSize, BYTE pbBuffer[], DWORD * pdwBufferUsed);
	HRESULT(STDMETHODCALLTYPE * GetIntegerAttribute) (IWCNDevice * This, WCN_ATTRIBUTE_TYPE AttributeType, UINT * puInteger);
	HRESULT(STDMETHODCALLTYPE * GetStringAttribute) (IWCNDevice * This, WCN_ATTRIBUTE_TYPE AttributeType, DWORD cchMaxString, WCHAR wszString[]);
	HRESULT(STDMETHODCALLTYPE * GetNetworkProfile) (IWCNDevice * This, DWORD cchMaxStringLength, LPWSTR wszProfile);
	HRESULT(STDMETHODCALLTYPE * SetNetworkProfile) (IWCNDevice * This, LPCWSTR pszProfileXml);
	HRESULT(STDMETHODCALLTYPE * GetVendorExtension) (IWCNDevice * This, const WCN_VENDOR_EXTENSION_SPEC * pVendorExtSpec, DWORD dwMaxBufferSize, BYTE pbBuffer[], DWORD * pdwBufferUsed);
	HRESULT(STDMETHODCALLTYPE * SetVendorExtension) (IWCNDevice * This, const WCN_VENDOR_EXTENSION_SPEC * pVendorExtSpec, DWORD cbBuffer, const BYTE pbBuffer[]);
	HRESULT(STDMETHODCALLTYPE * Unadvise) (IWCNDevice * This);
	END_INTERFACE
}  IWCNDeviceVtbl;
interface IWCNDevice
{
	CONST_VTBL struct IWCNDeviceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWCNDevice_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWCNDevice_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWCNDevice_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWCNDevice_SetPassword(This,Type,dwPasswordLength,pbPassword) ( (This)->lpVtbl -> SetPassword(This,Type,dwPasswordLength,pbPassword) )
#define IWCNDevice_Connect(This,pNotify) ( (This)->lpVtbl -> Connect(This,pNotify) )
#define IWCNDevice_GetAttribute(This,AttributeType,dwMaxBufferSize,pbBuffer,pdwBufferUsed) ( (This)->lpVtbl -> GetAttribute(This,AttributeType,dwMaxBufferSize,pbBuffer,pdwBufferUsed) )
#define IWCNDevice_GetIntegerAttribute(This,AttributeType,puInteger) ( (This)->lpVtbl -> GetIntegerAttribute(This,AttributeType,puInteger) )
#define IWCNDevice_GetStringAttribute(This,AttributeType,cchMaxString,wszString) ( (This)->lpVtbl -> GetStringAttribute(This,AttributeType,cchMaxString,wszString) )
#define IWCNDevice_GetNetworkProfile(This,cchMaxStringLength,wszProfile) ( (This)->lpVtbl -> GetNetworkProfile(This,cchMaxStringLength,wszProfile) )
#define IWCNDevice_SetNetworkProfile(This,pszProfileXml) ( (This)->lpVtbl -> SetNetworkProfile(This,pszProfileXml) )
#define IWCNDevice_GetVendorExtension(This,pVendorExtSpec,dwMaxBufferSize,pbBuffer,pdwBufferUsed) ( (This)->lpVtbl -> GetVendorExtension(This,pVendorExtSpec,dwMaxBufferSize,pbBuffer,pdwBufferUsed) )
#define IWCNDevice_SetVendorExtension(This,pVendorExtSpec,cbBuffer,pbBuffer) ( (This)->lpVtbl -> SetVendorExtension(This,pVendorExtSpec,cbBuffer,pbBuffer) )
#define IWCNDevice_Unadvise(This) ( (This)->lpVtbl -> Unadvise(This) )
#endif
#endif
#ifndef __IWCNConnectNotify_INTERFACE_DEFINED__
#define __IWCNConnectNotify_INTERFACE_DEFINED__
extern const IID IID_IWCNConnectNotify;
typedef struct IWCNConnectNotifyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWCNConnectNotify * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWCNConnectNotify * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWCNConnectNotify * This);
	HRESULT(STDMETHODCALLTYPE * ConnectSucceeded) (IWCNConnectNotify * This);
	HRESULT(STDMETHODCALLTYPE * ConnectFailed) (IWCNConnectNotify * This, HRESULT hrFailure);
	END_INTERFACE
}  IWCNConnectNotifyVtbl;
interface IWCNConnectNotify
{
	CONST_VTBL struct IWCNConnectNotifyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWCNConnectNotify_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWCNConnectNotify_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWCNConnectNotify_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWCNConnectNotify_ConnectSucceeded(This) ( (This)->lpVtbl -> ConnectSucceeded(This) )
#define IWCNConnectNotify_ConnectFailed(This,hrFailure) ( (This)->lpVtbl -> ConnectFailed(This,hrFailure) )
#endif
#endif
#ifndef __WCNDeviceObjectLibrary_LIBRARY_DEFINED__
#define __WCNDeviceObjectLibrary_LIBRARY_DEFINED__
extern const IID LIBID_WCNDeviceObjectLibrary;
extern const CLSID CLSID_WCNDeviceObject;
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_wcndevice_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wcndevice_0000_0002_v0_0_s_ifspec;
#endif
