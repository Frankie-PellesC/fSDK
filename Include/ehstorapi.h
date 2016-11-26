/*+@@file@@----------------------------------------------------------------*//*!
 \file		ehstorapi.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul  9 19:38:55 2016
 \date		Modified on Sat Jul  9 19:38:55 2016
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
#ifndef __EhStorAPI_h__
#define __EhStorAPI_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IEnumEnhancedStorageACT_FWD_DEFINED__
#define __IEnumEnhancedStorageACT_FWD_DEFINED__
typedef interface IEnumEnhancedStorageACT IEnumEnhancedStorageACT;
#endif
#ifndef __IEnhancedStorageACT_FWD_DEFINED__
#define __IEnhancedStorageACT_FWD_DEFINED__
typedef interface IEnhancedStorageACT IEnhancedStorageACT;
#endif
#ifndef __IEnhancedStorageACT2_FWD_DEFINED__
#define __IEnhancedStorageACT2_FWD_DEFINED__
typedef interface IEnhancedStorageACT2 IEnhancedStorageACT2;
#endif
#ifndef __IEnhancedStorageSilo_FWD_DEFINED__
#define __IEnhancedStorageSilo_FWD_DEFINED__
typedef interface IEnhancedStorageSilo IEnhancedStorageSilo;
#endif
#ifndef __IEnhancedStorageSiloAction_FWD_DEFINED__
#define __IEnhancedStorageSiloAction_FWD_DEFINED__
typedef interface IEnhancedStorageSiloAction IEnhancedStorageSiloAction;
#endif
#ifndef __EnumEnhancedStorageACT_FWD_DEFINED__
#define __EnumEnhancedStorageACT_FWD_DEFINED__
typedef struct EnumEnhancedStorageACT EnumEnhancedStorageACT;
#endif
#ifndef __EnhancedStorageACT_FWD_DEFINED__
#define __EnhancedStorageACT_FWD_DEFINED__
typedef struct EnhancedStorageACT EnhancedStorageACT;
#endif
#ifndef __EnhancedStorageSilo_FWD_DEFINED__
#define __EnhancedStorageSilo_FWD_DEFINED__
typedef struct EnhancedStorageSilo EnhancedStorageSilo;
#endif
#ifndef __EnhancedStorageSiloAction_FWD_DEFINED__
#define __EnhancedStorageSiloAction_FWD_DEFINED__
typedef struct EnhancedStorageSiloAction EnhancedStorageSiloAction;
#endif
#include <unknwn.h>
#include <objidl.h>
#include <ocidl.h>
#include <propidl.h>
#include <portabledeviceapi.h>
#if (_WIN32_WINNT >= 0x0501)
typedef struct _ACT_AUTHORIZATION_STATE
{
	ULONG ulState;
} ACT_AUTHORIZATION_STATE;
typedef struct _SILO_INFO
{
	ULONG ulSTID;
	UCHAR SpecificationMajor;
	UCHAR SpecificationMinor;
	UCHAR ImplementationMajor;
	UCHAR ImplementationMinor;
	UCHAR type;
	UCHAR capabilities;
} SILO_INFO;
extern RPC_IF_HANDLE __MIDL_itf_EhStorAPI_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_EhStorAPI_0000_0000_v0_0_s_ifspec;
#ifndef __IEnumEnhancedStorageACT_INTERFACE_DEFINED__
#define __IEnumEnhancedStorageACT_INTERFACE_DEFINED__
extern const IID IID_IEnumEnhancedStorageACT;
typedef struct IEnumEnhancedStorageACTVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumEnhancedStorageACT * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumEnhancedStorageACT * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumEnhancedStorageACT * This);
	HRESULT(STDMETHODCALLTYPE * GetACTs) (IEnumEnhancedStorageACT * This, IEnhancedStorageACT *** pppIEnhancedStorageACTs, ULONG * pcEnhancedStorageACTs);
	HRESULT(STDMETHODCALLTYPE * GetMatchingACT) (IEnumEnhancedStorageACT * This, LPCWSTR szVolume, IEnhancedStorageACT ** ppIEnhancedStorageACT);
	END_INTERFACE
}  IEnumEnhancedStorageACTVtbl;
interface IEnumEnhancedStorageACT
{
	CONST_VTBL struct IEnumEnhancedStorageACTVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumEnhancedStorageACT_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumEnhancedStorageACT_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEnumEnhancedStorageACT_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEnumEnhancedStorageACT_GetACTs(This,pppIEnhancedStorageACTs,pcEnhancedStorageACTs)( (This)->lpVtbl -> GetACTs(This,pppIEnhancedStorageACTs,pcEnhancedStorageACTs) )
#define IEnumEnhancedStorageACT_GetMatchingACT(This,szVolume,ppIEnhancedStorageACT)( (This)->lpVtbl -> GetMatchingACT(This,szVolume,ppIEnhancedStorageACT) )
#endif
#endif
#ifndef __IEnhancedStorageACT_INTERFACE_DEFINED__
#define __IEnhancedStorageACT_INTERFACE_DEFINED__
extern const IID IID_IEnhancedStorageACT;
typedef struct IEnhancedStorageACTVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnhancedStorageACT * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnhancedStorageACT * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnhancedStorageACT * This);
	HRESULT(STDMETHODCALLTYPE * Authorize) (IEnhancedStorageACT * This, DWORD hwndParent, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * Unauthorize) (IEnhancedStorageACT * This);
	HRESULT(STDMETHODCALLTYPE * GetAuthorizationState) (IEnhancedStorageACT * This, ACT_AUTHORIZATION_STATE * pState);
	HRESULT(STDMETHODCALLTYPE * GetMatchingVolume) (IEnhancedStorageACT * This, LPWSTR * ppwszVolume);
	HRESULT(STDMETHODCALLTYPE * GetUniqueIdentity) (IEnhancedStorageACT * This, LPWSTR * ppwszIdentity);
	HRESULT(STDMETHODCALLTYPE * GetSilos) (IEnhancedStorageACT * This, IEnhancedStorageSilo *** pppIEnhancedStorageSilos, ULONG * pcEnhancedStorageSilos);
	END_INTERFACE
}  IEnhancedStorageACTVtbl;
interface IEnhancedStorageACT
{
	CONST_VTBL struct IEnhancedStorageACTVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnhancedStorageACT_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnhancedStorageACT_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEnhancedStorageACT_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEnhancedStorageACT_Authorize(This,hwndParent,dwFlags)( (This)->lpVtbl -> Authorize(This,hwndParent,dwFlags) )
#define IEnhancedStorageACT_Unauthorize(This)( (This)->lpVtbl -> Unauthorize(This) )
#define IEnhancedStorageACT_GetAuthorizationState(This,pState)( (This)->lpVtbl -> GetAuthorizationState(This,pState) )
#define IEnhancedStorageACT_GetMatchingVolume(This,ppwszVolume)( (This)->lpVtbl -> GetMatchingVolume(This,ppwszVolume) )
#define IEnhancedStorageACT_GetUniqueIdentity(This,ppwszIdentity)( (This)->lpVtbl -> GetUniqueIdentity(This,ppwszIdentity) )
#define IEnhancedStorageACT_GetSilos(This,pppIEnhancedStorageSilos,pcEnhancedStorageSilos)( (This)->lpVtbl -> GetSilos(This,pppIEnhancedStorageSilos,pcEnhancedStorageSilos) )
#endif
#endif
#ifndef __IEnhancedStorageACT2_INTERFACE_DEFINED__
#define __IEnhancedStorageACT2_INTERFACE_DEFINED__
extern const IID IID_IEnhancedStorageACT2;
typedef struct IEnhancedStorageACT2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnhancedStorageACT2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnhancedStorageACT2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnhancedStorageACT2 * This);
	HRESULT(STDMETHODCALLTYPE * Authorize) (IEnhancedStorageACT2 * This, DWORD hwndParent, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * Unauthorize) (IEnhancedStorageACT2 * This);
	HRESULT(STDMETHODCALLTYPE * GetAuthorizationState) (IEnhancedStorageACT2 * This, ACT_AUTHORIZATION_STATE * pState);
	HRESULT(STDMETHODCALLTYPE * GetMatchingVolume) (IEnhancedStorageACT2 * This, LPWSTR * ppwszVolume);
	HRESULT(STDMETHODCALLTYPE * GetUniqueIdentity) (IEnhancedStorageACT2 * This, LPWSTR * ppwszIdentity);
	HRESULT(STDMETHODCALLTYPE * GetSilos) (IEnhancedStorageACT2 * This, IEnhancedStorageSilo *** pppIEnhancedStorageSilos, ULONG * pcEnhancedStorageSilos);
	HRESULT(STDMETHODCALLTYPE * GetDeviceName) (IEnhancedStorageACT2 * This, LPWSTR * ppwszDeviceName);
	HRESULT(STDMETHODCALLTYPE * IsDeviceRemovable) (IEnhancedStorageACT2 * This, BOOL * pIsDeviceRemovable);
	END_INTERFACE
}  IEnhancedStorageACT2Vtbl;
interface IEnhancedStorageACT2
{
	CONST_VTBL struct IEnhancedStorageACT2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnhancedStorageACT2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnhancedStorageACT2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEnhancedStorageACT2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEnhancedStorageACT2_Authorize(This,hwndParent,dwFlags)( (This)->lpVtbl -> Authorize(This,hwndParent,dwFlags) )
#define IEnhancedStorageACT2_Unauthorize(This)( (This)->lpVtbl -> Unauthorize(This) )
#define IEnhancedStorageACT2_GetAuthorizationState(This,pState)( (This)->lpVtbl -> GetAuthorizationState(This,pState) )
#define IEnhancedStorageACT2_GetMatchingVolume(This,ppwszVolume)( (This)->lpVtbl -> GetMatchingVolume(This,ppwszVolume) )
#define IEnhancedStorageACT2_GetUniqueIdentity(This,ppwszIdentity)( (This)->lpVtbl -> GetUniqueIdentity(This,ppwszIdentity) )
#define IEnhancedStorageACT2_GetSilos(This,pppIEnhancedStorageSilos,pcEnhancedStorageSilos)( (This)->lpVtbl -> GetSilos(This,pppIEnhancedStorageSilos,pcEnhancedStorageSilos) )
#define IEnhancedStorageACT2_GetDeviceName(This,ppwszDeviceName)( (This)->lpVtbl -> GetDeviceName(This,ppwszDeviceName) )
#define IEnhancedStorageACT2_IsDeviceRemovable(This,pIsDeviceRemovable)( (This)->lpVtbl -> IsDeviceRemovable(This,pIsDeviceRemovable) )
#endif
#endif
#ifndef __IEnhancedStorageSilo_INTERFACE_DEFINED__
#define __IEnhancedStorageSilo_INTERFACE_DEFINED__
extern const IID IID_IEnhancedStorageSilo;
typedef struct IEnhancedStorageSiloVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnhancedStorageSilo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnhancedStorageSilo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnhancedStorageSilo * This);
	HRESULT(STDMETHODCALLTYPE * GetInfo) (IEnhancedStorageSilo * This, SILO_INFO * pSiloInfo);
	HRESULT(STDMETHODCALLTYPE * GetActions) (IEnhancedStorageSilo * This, IEnhancedStorageSiloAction *** pppIEnhancedStorageSiloActions, ULONG * pcEnhancedStorageSiloActions);
	HRESULT(STDMETHODCALLTYPE * SendCommand) (IEnhancedStorageSilo * This, UCHAR Command, BYTE * pbCommandBuffer, ULONG cbCommandBuffer, BYTE * pbResponseBuffer, ULONG * pcbResponseBuffer);
	HRESULT(STDMETHODCALLTYPE * GetPortableDevice) (IEnhancedStorageSilo * This, IPortableDevice ** ppIPortableDevice);
	HRESULT(STDMETHODCALLTYPE * GetDevicePath) (IEnhancedStorageSilo * This, LPWSTR * ppwszSiloDevicePath);
	END_INTERFACE
}  IEnhancedStorageSiloVtbl;
interface IEnhancedStorageSilo
{
	CONST_VTBL struct IEnhancedStorageSiloVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnhancedStorageSilo_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnhancedStorageSilo_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEnhancedStorageSilo_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEnhancedStorageSilo_GetInfo(This,pSiloInfo)( (This)->lpVtbl -> GetInfo(This,pSiloInfo) )
#define IEnhancedStorageSilo_GetActions(This,pppIEnhancedStorageSiloActions,pcEnhancedStorageSiloActions)( (This)->lpVtbl -> GetActions(This,pppIEnhancedStorageSiloActions,pcEnhancedStorageSiloActions) )
#define IEnhancedStorageSilo_SendCommand(This,Command,pbCommandBuffer,cbCommandBuffer,pbResponseBuffer,pcbResponseBuffer)( (This)->lpVtbl -> SendCommand(This,Command,pbCommandBuffer,cbCommandBuffer,pbResponseBuffer,pcbResponseBuffer) )
#define IEnhancedStorageSilo_GetPortableDevice(This,ppIPortableDevice)( (This)->lpVtbl -> GetPortableDevice(This,ppIPortableDevice) )
#define IEnhancedStorageSilo_GetDevicePath(This,ppwszSiloDevicePath)( (This)->lpVtbl -> GetDevicePath(This,ppwszSiloDevicePath) )
#endif
#endif
#ifndef __IEnhancedStorageSiloAction_INTERFACE_DEFINED__
#define __IEnhancedStorageSiloAction_INTERFACE_DEFINED__
extern const IID IID_IEnhancedStorageSiloAction;
typedef struct IEnhancedStorageSiloActionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnhancedStorageSiloAction * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnhancedStorageSiloAction * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnhancedStorageSiloAction * This);
	HRESULT(STDMETHODCALLTYPE * GetName) (IEnhancedStorageSiloAction * This, LPWSTR * ppwszActionName);
	HRESULT(STDMETHODCALLTYPE * GetDescription) (IEnhancedStorageSiloAction * This, LPWSTR * ppwszActionDescription);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IEnhancedStorageSiloAction * This);
	END_INTERFACE
}  IEnhancedStorageSiloActionVtbl;
interface IEnhancedStorageSiloAction
{
	CONST_VTBL struct IEnhancedStorageSiloActionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnhancedStorageSiloAction_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnhancedStorageSiloAction_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEnhancedStorageSiloAction_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEnhancedStorageSiloAction_GetName(This,ppwszActionName)( (This)->lpVtbl -> GetName(This,ppwszActionName) )
#define IEnhancedStorageSiloAction_GetDescription(This,ppwszActionDescription)( (This)->lpVtbl -> GetDescription(This,ppwszActionDescription) )
#define IEnhancedStorageSiloAction_Invoke(This)( (This)->lpVtbl -> Invoke(This) )
#endif
#endif
#ifndef __EnhancedStorageAPILib_LIBRARY_DEFINED__
#define __EnhancedStorageAPILib_LIBRARY_DEFINED__
extern const IID LIBID_EnhancedStorageAPILib;
extern const CLSID CLSID_EnumEnhancedStorageACT;
extern const CLSID CLSID_EnhancedStorageACT;
extern const CLSID CLSID_EnhancedStorageSilo;
extern const CLSID CLSID_EnhancedStorageSiloAction;
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_EhStorAPI_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_EhStorAPI_0000_0005_v0_0_s_ifspec;
#endif
