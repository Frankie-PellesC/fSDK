/*+@@file@@----------------------------------------------------------------*//*!
 \file		PortableDeviceConnectApi.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep  3 20:11:23 2016
 \date		Modified on Sat Sep  3 20:11:23 2016
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
#ifndef __PortableDeviceConnectApi_h__
#define __PortableDeviceConnectApi_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IEnumPortableDeviceConnectors_FWD_DEFINED__
#define __IEnumPortableDeviceConnectors_FWD_DEFINED__
typedef interface IEnumPortableDeviceConnectors IEnumPortableDeviceConnectors;
#endif
#ifndef __IPortableDeviceConnector_FWD_DEFINED__
#define __IPortableDeviceConnector_FWD_DEFINED__
typedef interface IPortableDeviceConnector IPortableDeviceConnector;
#endif
#ifndef __IConnectionRequestCallback_FWD_DEFINED__
#define __IConnectionRequestCallback_FWD_DEFINED__
typedef interface IConnectionRequestCallback IConnectionRequestCallback;
#endif
#ifndef __EnumBthMtpConnectors_FWD_DEFINED__
#define __EnumBthMtpConnectors_FWD_DEFINED__
typedef struct EnumBthMtpConnectors EnumBthMtpConnectors;
#endif
#include <wtypes.h>
#include <propsys.h>
#include <PortableDeviceConnectImports.h>
DEFINE_DEVPROPKEY(DEVPKEY_MTPBTH_IsConnected, 0xea1237fa, 0x589d, 0x4472, 0x84, 0xe4, 0x0a, 0xbe, 0x36, 0xfd, 0x62, 0xef, 2);
extern RPC_IF_HANDLE __MIDL_itf_PortableDeviceConnectApi_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_PortableDeviceConnectApi_0000_0000_v0_0_s_ifspec;
#ifndef __IEnumPortableDeviceConnectors_INTERFACE_DEFINED__
#define __IEnumPortableDeviceConnectors_INTERFACE_DEFINED__
extern const IID IID_IEnumPortableDeviceConnectors;
typedef struct IEnumPortableDeviceConnectorsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumPortableDeviceConnectors * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumPortableDeviceConnectors * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumPortableDeviceConnectors * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumPortableDeviceConnectors * This, UINT32 cRequested, IPortableDeviceConnector ** pConnectors, UINT32 * pcFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumPortableDeviceConnectors * This, UINT32 cConnectors);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumPortableDeviceConnectors * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumPortableDeviceConnectors * This, IEnumPortableDeviceConnectors ** ppEnum);
	END_INTERFACE
}  IEnumPortableDeviceConnectorsVtbl;
interface IEnumPortableDeviceConnectors
{
	CONST_VTBL struct IEnumPortableDeviceConnectorsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumPortableDeviceConnectors_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumPortableDeviceConnectors_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumPortableDeviceConnectors_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumPortableDeviceConnectors_Next(This,cRequested,pConnectors,pcFetched) ( (This)->lpVtbl -> Next(This,cRequested,pConnectors,pcFetched) )
#define IEnumPortableDeviceConnectors_Skip(This,cConnectors) ( (This)->lpVtbl -> Skip(This,cConnectors) )
#define IEnumPortableDeviceConnectors_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumPortableDeviceConnectors_Clone(This,ppEnum) ( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
#endif
#ifndef __IPortableDeviceConnector_INTERFACE_DEFINED__
#define __IPortableDeviceConnector_INTERFACE_DEFINED__
extern const IID IID_IPortableDeviceConnector;
typedef struct IPortableDeviceConnectorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPortableDeviceConnector * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPortableDeviceConnector * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPortableDeviceConnector * This);
	HRESULT(STDMETHODCALLTYPE * Connect) (IPortableDeviceConnector * This, IConnectionRequestCallback * pCallback);
	HRESULT(STDMETHODCALLTYPE * Disconnect) (IPortableDeviceConnector * This, IConnectionRequestCallback * pCallback);
	HRESULT(STDMETHODCALLTYPE * Cancel) (IPortableDeviceConnector * This, IConnectionRequestCallback * pCallback);
	HRESULT(STDMETHODCALLTYPE * GetProperty) (IPortableDeviceConnector * This, const DEVPROPKEY * pPropertyKey, DEVPROPTYPE * pPropertyType, BYTE ** ppData, UINT32 * pcbData);
	HRESULT(STDMETHODCALLTYPE * SetProperty) (IPortableDeviceConnector * This, const DEVPROPKEY * pPropertyKey, DEVPROPTYPE PropertyType, const BYTE * pData, UINT32 cbData);
	HRESULT(STDMETHODCALLTYPE * GetPnPID) (IPortableDeviceConnector * This, LPWSTR * ppwszPnPID);
	END_INTERFACE
}  IPortableDeviceConnectorVtbl;
interface IPortableDeviceConnector
{
	CONST_VTBL struct IPortableDeviceConnectorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPortableDeviceConnector_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPortableDeviceConnector_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IPortableDeviceConnector_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IPortableDeviceConnector_Connect(This,pCallback) ( (This)->lpVtbl -> Connect(This,pCallback) )
#define IPortableDeviceConnector_Disconnect(This,pCallback) ( (This)->lpVtbl -> Disconnect(This,pCallback) )
#define IPortableDeviceConnector_Cancel(This,pCallback) ( (This)->lpVtbl -> Cancel(This,pCallback) )
#define IPortableDeviceConnector_GetProperty(This,pPropertyKey,pPropertyType,ppData,pcbData) ( (This)->lpVtbl -> GetProperty(This,pPropertyKey,pPropertyType,ppData,pcbData) )
#define IPortableDeviceConnector_SetProperty(This,pPropertyKey,PropertyType,pData,cbData) ( (This)->lpVtbl -> SetProperty(This,pPropertyKey,PropertyType,pData,cbData) )
#define IPortableDeviceConnector_GetPnPID(This,ppwszPnPID) ( (This)->lpVtbl -> GetPnPID(This,ppwszPnPID) )
#endif
#endif
#ifndef __IConnectionRequestCallback_INTERFACE_DEFINED__
#define __IConnectionRequestCallback_INTERFACE_DEFINED__
extern const IID IID_IConnectionRequestCallback;
typedef struct IConnectionRequestCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IConnectionRequestCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IConnectionRequestCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (IConnectionRequestCallback * This);
	HRESULT(STDMETHODCALLTYPE * OnComplete) (IConnectionRequestCallback * This, HRESULT hrStatus);
	END_INTERFACE
}  IConnectionRequestCallbackVtbl;
interface IConnectionRequestCallback
{
	CONST_VTBL struct IConnectionRequestCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IConnectionRequestCallback_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IConnectionRequestCallback_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IConnectionRequestCallback_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IConnectionRequestCallback_OnComplete(This,hrStatus) ( (This)->lpVtbl -> OnComplete(This,hrStatus) )
#endif
#endif
#ifndef __PortableDeviceConnectApiLib_LIBRARY_DEFINED__
#define __PortableDeviceConnectApiLib_LIBRARY_DEFINED__
extern const IID LIBID_PortableDeviceConnectApiLib;
extern const CLSID CLSID_EnumBthMtpConnectors;
#endif
#endif
