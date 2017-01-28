/*+@@file@@----------------------------------------------------------------*//*!
 \file		upnphost.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 15:51:19 2016
 \date		Modified on Sat Sep 17 15:51:19 2016
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
#ifndef __upnphost_h__
#define __upnphost_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IUPnPEventSink_FWD_DEFINED__
#define __IUPnPEventSink_FWD_DEFINED__
typedef interface IUPnPEventSink IUPnPEventSink;
#endif
#ifndef __IUPnPEventSource_FWD_DEFINED__
#define __IUPnPEventSource_FWD_DEFINED__
typedef interface IUPnPEventSource IUPnPEventSource;
#endif
#ifndef __IUPnPRegistrar_FWD_DEFINED__
#define __IUPnPRegistrar_FWD_DEFINED__
typedef interface IUPnPRegistrar IUPnPRegistrar;
#endif
#ifndef __IUPnPReregistrar_FWD_DEFINED__
#define __IUPnPReregistrar_FWD_DEFINED__
typedef interface IUPnPReregistrar IUPnPReregistrar;
#endif
#ifndef __IUPnPDeviceControl_FWD_DEFINED__
#define __IUPnPDeviceControl_FWD_DEFINED__
typedef interface IUPnPDeviceControl IUPnPDeviceControl;
#endif
#ifndef __IUPnPDeviceProvider_FWD_DEFINED__
#define __IUPnPDeviceProvider_FWD_DEFINED__
typedef interface IUPnPDeviceProvider IUPnPDeviceProvider;
#endif
#ifndef __IUPnPRemoteEndpointInfo_FWD_DEFINED__
#define __IUPnPRemoteEndpointInfo_FWD_DEFINED__
typedef interface IUPnPRemoteEndpointInfo IUPnPRemoteEndpointInfo;
#endif
#ifndef __IUPnPEventSink_FWD_DEFINED__
#define __IUPnPEventSink_FWD_DEFINED__
typedef interface IUPnPEventSink IUPnPEventSink;
#endif
#ifndef __IUPnPEventSource_FWD_DEFINED__
#define __IUPnPEventSource_FWD_DEFINED__
typedef interface IUPnPEventSource IUPnPEventSource;
#endif
#ifndef __IUPnPRegistrar_FWD_DEFINED__
#define __IUPnPRegistrar_FWD_DEFINED__
typedef interface IUPnPRegistrar IUPnPRegistrar;
#endif
#ifndef __IUPnPReregistrar_FWD_DEFINED__
#define __IUPnPReregistrar_FWD_DEFINED__
typedef interface IUPnPReregistrar IUPnPReregistrar;
#endif
#ifndef __IUPnPDeviceControl_FWD_DEFINED__
#define __IUPnPDeviceControl_FWD_DEFINED__
typedef interface IUPnPDeviceControl IUPnPDeviceControl;
#endif
#ifndef __IUPnPDeviceProvider_FWD_DEFINED__
#define __IUPnPDeviceProvider_FWD_DEFINED__
typedef interface IUPnPDeviceProvider IUPnPDeviceProvider;
#endif
#ifndef __IUPnPRemoteEndpointInfo_FWD_DEFINED__
#define __IUPnPRemoteEndpointInfo_FWD_DEFINED__
typedef interface IUPnPRemoteEndpointInfo IUPnPRemoteEndpointInfo;
#endif
#ifndef __UPnPRegistrar_FWD_DEFINED__
#define __UPnPRegistrar_FWD_DEFINED__
typedef struct UPnPRegistrar UPnPRegistrar;
#endif
#ifndef __UPnPRemoteEndpointInfo_FWD_DEFINED__
#define __UPnPRemoteEndpointInfo_FWD_DEFINED__
typedef struct UPnPRemoteEndpointInfo UPnPRemoteEndpointInfo;
#endif
#include <ocidl.h>
#define UPNP_E_REQUIRED_ELEMENT_ERROR        MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0xA020)
#define UPNP_E_DUPLICATE_NOT_ALLOWED         MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0xA021)
#define UPNP_E_DUPLICATE_SERVICE_ID          MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0xA022)
#define UPNP_E_INVALID_DESCRIPTION           MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0xA023)
#define UPNP_E_INVALID_SERVICE               MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0xA024)
#define UPNP_E_INVALID_ICON                  MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0xA025)
#define UPNP_E_INVALID_XML                   MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0xA026)
#define UPNP_E_INVALID_ROOT_NAMESPACE        MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0xA027)
#define UPNP_E_SUFFIX_TOO_LONG               MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0xA028)
#define UPNP_E_URLBASE_PRESENT               MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0xA029)
#define UPNP_E_VALUE_TOO_LONG                MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0xA030)
#define UPNP_E_DEVICE_RUNNING                MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0xA031)
#define UPNP_E_DEVICE_NOTREGISTERED          MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0xA032)
#define REMOTE_ADDRESS_VALUE_NAME L"RemoteAddress"
#define ADDRESS_FAMILY_VALUE_NAME L"AddressFamily"
extern RPC_IF_HANDLE __MIDL_itf_upnphost_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_upnphost_0000_0000_v0_0_s_ifspec;
#ifndef __IUPnPEventSink_INTERFACE_DEFINED__
#define __IUPnPEventSink_INTERFACE_DEFINED__
extern const IID IID_IUPnPEventSink;
typedef struct IUPnPEventSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUPnPEventSink * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUPnPEventSink * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUPnPEventSink * This);
	HRESULT(STDMETHODCALLTYPE * OnStateChanged) (IUPnPEventSink * This, DWORD cChanges, DISPID rgdispidChanges[]);
	HRESULT(STDMETHODCALLTYPE * OnStateChangedSafe) (IUPnPEventSink * This, VARIANT varsadispidChanges);
	END_INTERFACE
}  IUPnPEventSinkVtbl;
interface IUPnPEventSink
{
	CONST_VTBL struct IUPnPEventSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUPnPEventSink_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUPnPEventSink_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUPnPEventSink_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUPnPEventSink_OnStateChanged(This,cChanges,rgdispidChanges) ( (This)->lpVtbl -> OnStateChanged(This,cChanges,rgdispidChanges) )
#define IUPnPEventSink_OnStateChangedSafe(This,varsadispidChanges) ( (This)->lpVtbl -> OnStateChangedSafe(This,varsadispidChanges) )
#endif
#endif
#ifndef __IUPnPEventSource_INTERFACE_DEFINED__
#define __IUPnPEventSource_INTERFACE_DEFINED__
extern const IID IID_IUPnPEventSource;
typedef struct IUPnPEventSourceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUPnPEventSource * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUPnPEventSource * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUPnPEventSource * This);
	HRESULT(STDMETHODCALLTYPE * Advise) (IUPnPEventSource * This, IUPnPEventSink * pesSubscriber);
	HRESULT(STDMETHODCALLTYPE * Unadvise) (IUPnPEventSource * This, IUPnPEventSink * pesSubscriber);
	END_INTERFACE
}  IUPnPEventSourceVtbl;
interface IUPnPEventSource
{
	CONST_VTBL struct IUPnPEventSourceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUPnPEventSource_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUPnPEventSource_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUPnPEventSource_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUPnPEventSource_Advise(This,pesSubscriber) ( (This)->lpVtbl -> Advise(This,pesSubscriber) )
#define IUPnPEventSource_Unadvise(This,pesSubscriber) ( (This)->lpVtbl -> Unadvise(This,pesSubscriber) )
#endif
#endif
#ifndef __IUPnPRegistrar_INTERFACE_DEFINED__
#define __IUPnPRegistrar_INTERFACE_DEFINED__
extern const IID IID_IUPnPRegistrar;
typedef struct IUPnPRegistrarVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUPnPRegistrar * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUPnPRegistrar * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUPnPRegistrar * This);
	HRESULT(STDMETHODCALLTYPE * RegisterDevice) (IUPnPRegistrar * This, BSTR bstrXMLDesc, BSTR bstrProgIDDeviceControlClass, BSTR bstrInitString, BSTR bstrContainerId, BSTR bstrResourcePath, long nLifeTime, BSTR * pbstrDeviceIdentifier);
	HRESULT(STDMETHODCALLTYPE * RegisterRunningDevice) (IUPnPRegistrar * This, BSTR bstrXMLDesc, IUnknown * punkDeviceControl, BSTR bstrInitString, BSTR bstrResourcePath, long nLifeTime, BSTR * pbstrDeviceIdentifier);
	HRESULT(STDMETHODCALLTYPE * RegisterDeviceProvider) (IUPnPRegistrar * This, BSTR bstrProviderName, BSTR bstrProgIDProviderClass, BSTR bstrInitString, BSTR bstrContainerId);
	HRESULT(STDMETHODCALLTYPE * GetUniqueDeviceName) (IUPnPRegistrar * This, BSTR bstrDeviceIdentifier, BSTR bstrTemplateUDN, BSTR * pbstrUDN);
	HRESULT(STDMETHODCALLTYPE * UnregisterDevice) (IUPnPRegistrar * This, BSTR bstrDeviceIdentifier, BOOL fPermanent);
	HRESULT(STDMETHODCALLTYPE * UnregisterDeviceProvider) (IUPnPRegistrar * This, BSTR bstrProviderName);
	END_INTERFACE
}  IUPnPRegistrarVtbl;
interface IUPnPRegistrar
{
	CONST_VTBL struct IUPnPRegistrarVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUPnPRegistrar_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUPnPRegistrar_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUPnPRegistrar_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUPnPRegistrar_RegisterDevice(This,bstrXMLDesc,bstrProgIDDeviceControlClass,bstrInitString,bstrContainerId,bstrResourcePath,nLifeTime,pbstrDeviceIdentifier) ( (This)->lpVtbl -> RegisterDevice(This,bstrXMLDesc,bstrProgIDDeviceControlClass,bstrInitString,bstrContainerId,bstrResourcePath,nLifeTime,pbstrDeviceIdentifier) )
#define IUPnPRegistrar_RegisterRunningDevice(This,bstrXMLDesc,punkDeviceControl,bstrInitString,bstrResourcePath,nLifeTime,pbstrDeviceIdentifier) ( (This)->lpVtbl -> RegisterRunningDevice(This,bstrXMLDesc,punkDeviceControl,bstrInitString,bstrResourcePath,nLifeTime,pbstrDeviceIdentifier) )
#define IUPnPRegistrar_RegisterDeviceProvider(This,bstrProviderName,bstrProgIDProviderClass,bstrInitString,bstrContainerId) ( (This)->lpVtbl -> RegisterDeviceProvider(This,bstrProviderName,bstrProgIDProviderClass,bstrInitString,bstrContainerId) )
#define IUPnPRegistrar_GetUniqueDeviceName(This,bstrDeviceIdentifier,bstrTemplateUDN,pbstrUDN) ( (This)->lpVtbl -> GetUniqueDeviceName(This,bstrDeviceIdentifier,bstrTemplateUDN,pbstrUDN) )
#define IUPnPRegistrar_UnregisterDevice(This,bstrDeviceIdentifier,fPermanent) ( (This)->lpVtbl -> UnregisterDevice(This,bstrDeviceIdentifier,fPermanent) )
#define IUPnPRegistrar_UnregisterDeviceProvider(This,bstrProviderName) ( (This)->lpVtbl -> UnregisterDeviceProvider(This,bstrProviderName) )
#endif
#endif
#ifndef __IUPnPReregistrar_INTERFACE_DEFINED__
#define __IUPnPReregistrar_INTERFACE_DEFINED__
extern const IID IID_IUPnPReregistrar;
typedef struct IUPnPReregistrarVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUPnPReregistrar * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUPnPReregistrar * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUPnPReregistrar * This);
	HRESULT(STDMETHODCALLTYPE * ReregisterDevice) (IUPnPReregistrar * This, BSTR bstrDeviceIdentifier, BSTR bstrXMLDesc, BSTR bstrProgIDDeviceControlClass, BSTR bstrInitString, BSTR bstrContainerId, BSTR bstrResourcePath, long nLifeTime);
	HRESULT(STDMETHODCALLTYPE * ReregisterRunningDevice) (IUPnPReregistrar * This, BSTR bstrDeviceIdentifier, BSTR bstrXMLDesc, IUnknown * punkDeviceControl, BSTR bstrInitString, BSTR bstrResourcePath, long nLifeTime);
	END_INTERFACE
}  IUPnPReregistrarVtbl;
interface IUPnPReregistrar
{
	CONST_VTBL struct IUPnPReregistrarVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUPnPReregistrar_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUPnPReregistrar_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUPnPReregistrar_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUPnPReregistrar_ReregisterDevice(This,bstrDeviceIdentifier,bstrXMLDesc,bstrProgIDDeviceControlClass,bstrInitString,bstrContainerId,bstrResourcePath,nLifeTime) ( (This)->lpVtbl -> ReregisterDevice(This,bstrDeviceIdentifier,bstrXMLDesc,bstrProgIDDeviceControlClass,bstrInitString,bstrContainerId,bstrResourcePath,nLifeTime) )
#define IUPnPReregistrar_ReregisterRunningDevice(This,bstrDeviceIdentifier,bstrXMLDesc,punkDeviceControl,bstrInitString,bstrResourcePath,nLifeTime) ( (This)->lpVtbl -> ReregisterRunningDevice(This,bstrDeviceIdentifier,bstrXMLDesc,punkDeviceControl,bstrInitString,bstrResourcePath,nLifeTime) )
#endif
#endif
#ifndef __IUPnPDeviceControl_INTERFACE_DEFINED__
#define __IUPnPDeviceControl_INTERFACE_DEFINED__
extern const IID IID_IUPnPDeviceControl;
typedef struct IUPnPDeviceControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUPnPDeviceControl * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUPnPDeviceControl * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUPnPDeviceControl * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IUPnPDeviceControl * This, BSTR bstrXMLDesc, BSTR bstrDeviceIdentifier, BSTR bstrInitString);
	HRESULT(STDMETHODCALLTYPE * GetServiceObject) (IUPnPDeviceControl * This, BSTR bstrUDN, BSTR bstrServiceId, IDispatch ** ppdispService);
	END_INTERFACE
}  IUPnPDeviceControlVtbl;
interface IUPnPDeviceControl
{
	CONST_VTBL struct IUPnPDeviceControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUPnPDeviceControl_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUPnPDeviceControl_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUPnPDeviceControl_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUPnPDeviceControl_Initialize(This,bstrXMLDesc,bstrDeviceIdentifier,bstrInitString) ( (This)->lpVtbl -> Initialize(This,bstrXMLDesc,bstrDeviceIdentifier,bstrInitString) )
#define IUPnPDeviceControl_GetServiceObject(This,bstrUDN,bstrServiceId,ppdispService) ( (This)->lpVtbl -> GetServiceObject(This,bstrUDN,bstrServiceId,ppdispService) )
#endif
#endif
#ifndef __IUPnPDeviceProvider_INTERFACE_DEFINED__
#define __IUPnPDeviceProvider_INTERFACE_DEFINED__
extern const IID IID_IUPnPDeviceProvider;
typedef struct IUPnPDeviceProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUPnPDeviceProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUPnPDeviceProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUPnPDeviceProvider * This);
	HRESULT(STDMETHODCALLTYPE * Start) (IUPnPDeviceProvider * This, BSTR bstrInitString);
	HRESULT(STDMETHODCALLTYPE * Stop) (IUPnPDeviceProvider * This);
	END_INTERFACE
}  IUPnPDeviceProviderVtbl;
interface IUPnPDeviceProvider
{
	CONST_VTBL struct IUPnPDeviceProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUPnPDeviceProvider_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUPnPDeviceProvider_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUPnPDeviceProvider_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUPnPDeviceProvider_Start(This,bstrInitString) ( (This)->lpVtbl -> Start(This,bstrInitString) )
#define IUPnPDeviceProvider_Stop(This) ( (This)->lpVtbl -> Stop(This) )
#endif
#endif
#ifndef __IUPnPRemoteEndpointInfo_INTERFACE_DEFINED__
#define __IUPnPRemoteEndpointInfo_INTERFACE_DEFINED__
extern const IID IID_IUPnPRemoteEndpointInfo;
typedef struct IUPnPRemoteEndpointInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUPnPRemoteEndpointInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUPnPRemoteEndpointInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUPnPRemoteEndpointInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetDwordValue) (IUPnPRemoteEndpointInfo * This, BSTR bstrValueName, DWORD * pdwValue);
	HRESULT(STDMETHODCALLTYPE * GetStringValue) (IUPnPRemoteEndpointInfo * This, BSTR bstrValueName, BSTR * pbstrValue);
	HRESULT(STDMETHODCALLTYPE * GetGuidValue) (IUPnPRemoteEndpointInfo * This, BSTR bstrValueName, GUID * pguidValue);
	END_INTERFACE
}  IUPnPRemoteEndpointInfoVtbl;
interface IUPnPRemoteEndpointInfo
{
	CONST_VTBL struct IUPnPRemoteEndpointInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUPnPRemoteEndpointInfo_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUPnPRemoteEndpointInfo_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUPnPRemoteEndpointInfo_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUPnPRemoteEndpointInfo_GetDwordValue(This,bstrValueName,pdwValue) ( (This)->lpVtbl -> GetDwordValue(This,bstrValueName,pdwValue) )
#define IUPnPRemoteEndpointInfo_GetStringValue(This,bstrValueName,pbstrValue) ( (This)->lpVtbl -> GetStringValue(This,bstrValueName,pbstrValue) )
#define IUPnPRemoteEndpointInfo_GetGuidValue(This,bstrValueName,pguidValue) ( (This)->lpVtbl -> GetGuidValue(This,bstrValueName,pguidValue) )
#endif
#endif
#ifndef __UPnPHostLib_LIBRARY_DEFINED__
#define __UPnPHostLib_LIBRARY_DEFINED__
extern const IID LIBID_UPnPHostLib;
extern const CLSID CLSID_UPnPRegistrar;
extern const CLSID CLSID_UPnPRemoteEndpointInfo;
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER VARIANT_UserSize(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree(unsigned long *, VARIANT *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
unsigned long __RPC_USER VARIANT_UserSize64(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal64(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree64(unsigned long *, VARIANT *);
#endif
