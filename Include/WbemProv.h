/*+@@file@@----------------------------------------------------------------*//*!
 \file		WbemProv.h
 \par Description
            Extension and update of headers for PellesC compiler suite.
 \par Project:
            PellesC Headers extension
 \date		Created  on Sun Jul 10 21:24:52 2016
 \date		Modified on Sun Jul 10 21:24:52 2016
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
#ifndef __wbemprov_h__
#define __wbemprov_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWbemPropertyProvider_FWD_DEFINED__
#define __IWbemPropertyProvider_FWD_DEFINED__
typedef interface IWbemPropertyProvider IWbemPropertyProvider;
#endif
#ifndef __IWbemUnboundObjectSink_FWD_DEFINED__
#define __IWbemUnboundObjectSink_FWD_DEFINED__
typedef interface IWbemUnboundObjectSink IWbemUnboundObjectSink;
#endif
#ifndef __IWbemEventProvider_FWD_DEFINED__
#define __IWbemEventProvider_FWD_DEFINED__
typedef interface IWbemEventProvider IWbemEventProvider;
#endif
#ifndef __IWbemEventProviderQuerySink_FWD_DEFINED__
#define __IWbemEventProviderQuerySink_FWD_DEFINED__
typedef interface IWbemEventProviderQuerySink IWbemEventProviderQuerySink;
#endif
#ifndef __IWbemEventProviderSecurity_FWD_DEFINED__
#define __IWbemEventProviderSecurity_FWD_DEFINED__
typedef interface IWbemEventProviderSecurity IWbemEventProviderSecurity;
#endif
#ifndef __IWbemEventConsumerProvider_FWD_DEFINED__
#define __IWbemEventConsumerProvider_FWD_DEFINED__
typedef interface IWbemEventConsumerProvider IWbemEventConsumerProvider;
#endif
#ifndef __IWbemProviderInitSink_FWD_DEFINED__
#define __IWbemProviderInitSink_FWD_DEFINED__
typedef interface IWbemProviderInitSink IWbemProviderInitSink;
#endif
#ifndef __IWbemProviderInit_FWD_DEFINED__
#define __IWbemProviderInit_FWD_DEFINED__
typedef interface IWbemProviderInit IWbemProviderInit;
#endif
#ifndef __IWbemHiPerfProvider_FWD_DEFINED__
#define __IWbemHiPerfProvider_FWD_DEFINED__
typedef interface IWbemHiPerfProvider IWbemHiPerfProvider;
#endif
#ifndef __IWbemDecoupledRegistrar_FWD_DEFINED__
#define __IWbemDecoupledRegistrar_FWD_DEFINED__
typedef interface IWbemDecoupledRegistrar IWbemDecoupledRegistrar;
#endif
#ifndef __WbemAdministrativeLocator_FWD_DEFINED__
#define __WbemAdministrativeLocator_FWD_DEFINED__
typedef struct WbemAdministrativeLocator WbemAdministrativeLocator;
#endif
#ifndef __WbemAuthenticatedLocator_FWD_DEFINED__
#define __WbemAuthenticatedLocator_FWD_DEFINED__
typedef struct WbemAuthenticatedLocator WbemAuthenticatedLocator;
#endif
#ifndef __WbemUnauthenticatedLocator_FWD_DEFINED__
#define __WbemUnauthenticatedLocator_FWD_DEFINED__
typedef struct WbemUnauthenticatedLocator WbemUnauthenticatedLocator;
#endif
#ifndef __WbemDecoupledRegistrar_FWD_DEFINED__
#define __WbemDecoupledRegistrar_FWD_DEFINED__
typedef struct WbemDecoupledRegistrar WbemDecoupledRegistrar;
#endif
#ifndef __WbemDecoupledBasicEventProvider_FWD_DEFINED__
#define __WbemDecoupledBasicEventProvider_FWD_DEFINED__
typedef struct WbemDecoupledBasicEventProvider WbemDecoupledBasicEventProvider;
#endif
#ifndef __IWbemUnboundObjectSink_FWD_DEFINED__
#define __IWbemUnboundObjectSink_FWD_DEFINED__
typedef interface IWbemUnboundObjectSink IWbemUnboundObjectSink;
#endif
#ifndef __IWbemPropertyProvider_FWD_DEFINED__
#define __IWbemPropertyProvider_FWD_DEFINED__
typedef interface IWbemPropertyProvider IWbemPropertyProvider;
#endif
#ifndef __IWbemEventProvider_FWD_DEFINED__
#define __IWbemEventProvider_FWD_DEFINED__
typedef interface IWbemEventProvider IWbemEventProvider;
#endif
#ifndef __IWbemEventProviderQuerySink_FWD_DEFINED__
#define __IWbemEventProviderQuerySink_FWD_DEFINED__
typedef interface IWbemEventProviderQuerySink IWbemEventProviderQuerySink;
#endif
#ifndef __IWbemEventProviderSecurity_FWD_DEFINED__
#define __IWbemEventProviderSecurity_FWD_DEFINED__
typedef interface IWbemEventProviderSecurity IWbemEventProviderSecurity;
#endif
#ifndef __IWbemProviderIdentity_FWD_DEFINED__
#define __IWbemProviderIdentity_FWD_DEFINED__
typedef interface IWbemProviderIdentity IWbemProviderIdentity;
#endif
#ifndef __IWbemEventConsumerProvider_FWD_DEFINED__
#define __IWbemEventConsumerProvider_FWD_DEFINED__
typedef interface IWbemEventConsumerProvider IWbemEventConsumerProvider;
#endif
#ifndef __IWbemProviderInitSink_FWD_DEFINED__
#define __IWbemProviderInitSink_FWD_DEFINED__
typedef interface IWbemProviderInitSink IWbemProviderInitSink;
#endif
#ifndef __IWbemProviderInit_FWD_DEFINED__
#define __IWbemProviderInit_FWD_DEFINED__
typedef interface IWbemProviderInit IWbemProviderInit;
#endif
#ifndef __IWbemHiPerfProvider_FWD_DEFINED__
#define __IWbemHiPerfProvider_FWD_DEFINED__
typedef interface IWbemHiPerfProvider IWbemHiPerfProvider;
#endif
#ifndef __IWbemDecoupledRegistrar_FWD_DEFINED__
#define __IWbemDecoupledRegistrar_FWD_DEFINED__
typedef interface IWbemDecoupledRegistrar IWbemDecoupledRegistrar;
#endif
#ifndef __IWbemDecoupledBasicEventProvider_FWD_DEFINED__
#define __IWbemDecoupledBasicEventProvider_FWD_DEFINED__
typedef interface IWbemDecoupledBasicEventProvider IWbemDecoupledBasicEventProvider;
#endif
#ifndef __IWbemEventSink_FWD_DEFINED__
#define __IWbemEventSink_FWD_DEFINED__
typedef interface IWbemEventSink IWbemEventSink;
#endif
#include "objidl.h"
#include "oleidl.h"
#include "oaidl.h"
#include "wbemcli.h"
typedef VARIANT WBEM_VARIANT;
typedef LPWSTR WBEM_WSTR;
typedef LPCWSTR WBEM_CWSTR;
typedef enum tag_WBEM_PROVIDER_REQUIREMENTS_TYPE
{
	WBEM_REQUIREMENTS_START_POSTFILTER = 0,
	WBEM_REQUIREMENTS_STOP_POSTFILTER = 1,
	WBEM_REQUIREMENTS_RECHECK_SUBSCRIPTIONS = 2
} WBEM_PROVIDER_REQUIREMENTS_TYPE;
extern RPC_IF_HANDLE __MIDL_itf_wbemprov_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wbemprov_0000_0000_v0_0_s_ifspec;
#ifndef __WbemProviders_v1_LIBRARY_DEFINED__
#define __WbemProviders_v1_LIBRARY_DEFINED__
extern const IID LIBID_WbemProviders_v1;
#ifndef __IWbemPropertyProvider_INTERFACE_DEFINED__
#define __IWbemPropertyProvider_INTERFACE_DEFINED__
extern const IID IID_IWbemPropertyProvider;
typedef struct IWbemPropertyProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWbemPropertyProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWbemPropertyProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWbemPropertyProvider * This);
	HRESULT(STDMETHODCALLTYPE * GetProperty) (IWbemPropertyProvider * This, long lFlags, const BSTR strLocale, const BSTR strClassMapping, const BSTR strInstMapping, const BSTR strPropMapping, VARIANT * pvValue);
	HRESULT(STDMETHODCALLTYPE * PutProperty) (IWbemPropertyProvider * This, long lFlags, const BSTR strLocale, const BSTR strClassMapping, const BSTR strInstMapping, const BSTR strPropMapping, const VARIANT * pvValue);
	END_INTERFACE
}  IWbemPropertyProviderVtbl;
interface IWbemPropertyProvider
{
	CONST_VTBL struct IWbemPropertyProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWbemPropertyProvider_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWbemPropertyProvider_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWbemPropertyProvider_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWbemPropertyProvider_GetProperty(This,lFlags,strLocale,strClassMapping,strInstMapping,strPropMapping,pvValue)( (This)->lpVtbl -> GetProperty(This,lFlags,strLocale,strClassMapping,strInstMapping,strPropMapping,pvValue) )
#define IWbemPropertyProvider_PutProperty(This,lFlags,strLocale,strClassMapping,strInstMapping,strPropMapping,pvValue)( (This)->lpVtbl -> PutProperty(This,lFlags,strLocale,strClassMapping,strInstMapping,strPropMapping,pvValue) )
#endif
#endif
#ifndef __IWbemUnboundObjectSink_INTERFACE_DEFINED__
#define __IWbemUnboundObjectSink_INTERFACE_DEFINED__
extern const IID IID_IWbemUnboundObjectSink;
typedef struct IWbemUnboundObjectSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWbemUnboundObjectSink * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWbemUnboundObjectSink * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWbemUnboundObjectSink * This);
	HRESULT(STDMETHODCALLTYPE * IndicateToConsumer) (IWbemUnboundObjectSink * This, IWbemClassObject * pLogicalConsumer, long lNumObjects, IWbemClassObject ** apObjects);
	END_INTERFACE
}  IWbemUnboundObjectSinkVtbl;
interface IWbemUnboundObjectSink
{
	CONST_VTBL struct IWbemUnboundObjectSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWbemUnboundObjectSink_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWbemUnboundObjectSink_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWbemUnboundObjectSink_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWbemUnboundObjectSink_IndicateToConsumer(This,pLogicalConsumer,lNumObjects,apObjects)( (This)->lpVtbl -> IndicateToConsumer(This,pLogicalConsumer,lNumObjects,apObjects) )
#endif
#endif
#ifndef __IWbemEventProvider_INTERFACE_DEFINED__
#define __IWbemEventProvider_INTERFACE_DEFINED__
extern const IID IID_IWbemEventProvider;
typedef struct IWbemEventProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWbemEventProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWbemEventProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWbemEventProvider * This);
	HRESULT(STDMETHODCALLTYPE * ProvideEvents) (IWbemEventProvider * This, IWbemObjectSink * pSink, long lFlags);
	END_INTERFACE
}  IWbemEventProviderVtbl;
interface IWbemEventProvider
{
	CONST_VTBL struct IWbemEventProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWbemEventProvider_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWbemEventProvider_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWbemEventProvider_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWbemEventProvider_ProvideEvents(This,pSink,lFlags)( (This)->lpVtbl -> ProvideEvents(This,pSink,lFlags) )
#endif
#endif
#ifndef __IWbemEventProviderQuerySink_INTERFACE_DEFINED__
#define __IWbemEventProviderQuerySink_INTERFACE_DEFINED__
extern const IID IID_IWbemEventProviderQuerySink;
typedef struct IWbemEventProviderQuerySinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWbemEventProviderQuerySink * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWbemEventProviderQuerySink * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWbemEventProviderQuerySink * This);
	HRESULT(STDMETHODCALLTYPE * NewQuery) (IWbemEventProviderQuerySink * This, unsigned long dwId, WBEM_WSTR wszQueryLanguage, WBEM_WSTR wszQuery);
	HRESULT(STDMETHODCALLTYPE * CancelQuery) (IWbemEventProviderQuerySink * This, unsigned long dwId);
	END_INTERFACE
}  IWbemEventProviderQuerySinkVtbl;
interface IWbemEventProviderQuerySink
{
	CONST_VTBL struct IWbemEventProviderQuerySinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWbemEventProviderQuerySink_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWbemEventProviderQuerySink_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWbemEventProviderQuerySink_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWbemEventProviderQuerySink_NewQuery(This,dwId,wszQueryLanguage,wszQuery)( (This)->lpVtbl -> NewQuery(This,dwId,wszQueryLanguage,wszQuery) )
#define IWbemEventProviderQuerySink_CancelQuery(This,dwId)( (This)->lpVtbl -> CancelQuery(This,dwId) )
#endif
#endif
#ifndef __IWbemEventProviderSecurity_INTERFACE_DEFINED__
#define __IWbemEventProviderSecurity_INTERFACE_DEFINED__
extern const IID IID_IWbemEventProviderSecurity;
typedef struct IWbemEventProviderSecurityVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWbemEventProviderSecurity * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWbemEventProviderSecurity * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWbemEventProviderSecurity * This);
	HRESULT(STDMETHODCALLTYPE * AccessCheck) (IWbemEventProviderSecurity * This, WBEM_CWSTR wszQueryLanguage, WBEM_CWSTR wszQuery, long lSidLength, const BYTE * pSid);
	END_INTERFACE
}  IWbemEventProviderSecurityVtbl;
interface IWbemEventProviderSecurity
{
	CONST_VTBL struct IWbemEventProviderSecurityVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWbemEventProviderSecurity_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWbemEventProviderSecurity_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWbemEventProviderSecurity_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWbemEventProviderSecurity_AccessCheck(This,wszQueryLanguage,wszQuery,lSidLength,pSid)( (This)->lpVtbl -> AccessCheck(This,wszQueryLanguage,wszQuery,lSidLength,pSid) )
#endif
#endif
#ifndef __IWbemEventConsumerProvider_INTERFACE_DEFINED__
#define __IWbemEventConsumerProvider_INTERFACE_DEFINED__
extern const IID IID_IWbemEventConsumerProvider;
typedef struct IWbemEventConsumerProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWbemEventConsumerProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWbemEventConsumerProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWbemEventConsumerProvider * This);
	HRESULT(STDMETHODCALLTYPE * FindConsumer) (IWbemEventConsumerProvider * This, IWbemClassObject * pLogicalConsumer, IWbemUnboundObjectSink ** ppConsumer);
	END_INTERFACE
}  IWbemEventConsumerProviderVtbl;
interface IWbemEventConsumerProvider
{
	CONST_VTBL struct IWbemEventConsumerProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWbemEventConsumerProvider_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWbemEventConsumerProvider_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWbemEventConsumerProvider_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWbemEventConsumerProvider_FindConsumer(This,pLogicalConsumer,ppConsumer)( (This)->lpVtbl -> FindConsumer(This,pLogicalConsumer,ppConsumer) )
#endif
#endif
#ifndef __IWbemProviderInitSink_INTERFACE_DEFINED__
#define __IWbemProviderInitSink_INTERFACE_DEFINED__
extern const IID IID_IWbemProviderInitSink;
typedef struct IWbemProviderInitSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWbemProviderInitSink * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWbemProviderInitSink * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWbemProviderInitSink * This);
	HRESULT(STDMETHODCALLTYPE * SetStatus) (IWbemProviderInitSink * This, LONG lStatus, LONG lFlags);
	END_INTERFACE
}  IWbemProviderInitSinkVtbl;
interface IWbemProviderInitSink
{
	CONST_VTBL struct IWbemProviderInitSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWbemProviderInitSink_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWbemProviderInitSink_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWbemProviderInitSink_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWbemProviderInitSink_SetStatus(This,lStatus,lFlags)( (This)->lpVtbl -> SetStatus(This,lStatus,lFlags) )
#endif
#endif
#ifndef __IWbemProviderInit_INTERFACE_DEFINED__
#define __IWbemProviderInit_INTERFACE_DEFINED__
extern const IID IID_IWbemProviderInit;
typedef struct IWbemProviderInitVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWbemProviderInit * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWbemProviderInit * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWbemProviderInit * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IWbemProviderInit * This, LPWSTR wszUser, LONG lFlags, LPWSTR wszNamespace, LPWSTR wszLocale, IWbemServices * pNamespace, IWbemContext * pCtx, IWbemProviderInitSink * pInitSink);
	END_INTERFACE
}  IWbemProviderInitVtbl;
interface IWbemProviderInit
{
	CONST_VTBL struct IWbemProviderInitVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWbemProviderInit_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWbemProviderInit_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWbemProviderInit_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWbemProviderInit_Initialize(This,wszUser,lFlags,wszNamespace,wszLocale,pNamespace,pCtx,pInitSink)( (This)->lpVtbl -> Initialize(This,wszUser,lFlags,wszNamespace,wszLocale,pNamespace,pCtx,pInitSink) )
#endif
#endif
#ifndef __IWbemHiPerfProvider_INTERFACE_DEFINED__
#define __IWbemHiPerfProvider_INTERFACE_DEFINED__
extern const IID IID_IWbemHiPerfProvider;
typedef struct IWbemHiPerfProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWbemHiPerfProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWbemHiPerfProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWbemHiPerfProvider * This);
	HRESULT(STDMETHODCALLTYPE * QueryInstances) (IWbemHiPerfProvider * This, IWbemServices * pNamespace, WCHAR * wszClass, long lFlags, IWbemContext * pCtx, IWbemObjectSink * pSink);
	HRESULT(STDMETHODCALLTYPE * CreateRefresher) (IWbemHiPerfProvider * This, IWbemServices * pNamespace, long lFlags, IWbemRefresher ** ppRefresher);
	HRESULT(STDMETHODCALLTYPE * CreateRefreshableObject) (IWbemHiPerfProvider * This, IWbemServices * pNamespace, IWbemObjectAccess * pTemplate, IWbemRefresher * pRefresher, long lFlags, IWbemContext * pContext, IWbemObjectAccess ** ppRefreshable, long *plId);
	HRESULT(STDMETHODCALLTYPE * StopRefreshing) (IWbemHiPerfProvider * This, IWbemRefresher * pRefresher, long lId, long lFlags);
	HRESULT(STDMETHODCALLTYPE * CreateRefreshableEnum) (IWbemHiPerfProvider * This, IWbemServices * pNamespace, LPCWSTR wszClass, IWbemRefresher * pRefresher, long lFlags, IWbemContext * pContext, IWbemHiPerfEnum * pHiPerfEnum, long *plId);
	HRESULT(STDMETHODCALLTYPE * GetObjects) (IWbemHiPerfProvider * This, IWbemServices * pNamespace, long lNumObjects, IWbemObjectAccess ** apObj, long lFlags, IWbemContext * pContext);
	END_INTERFACE
}  IWbemHiPerfProviderVtbl;
interface IWbemHiPerfProvider
{
	CONST_VTBL struct IWbemHiPerfProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWbemHiPerfProvider_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWbemHiPerfProvider_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWbemHiPerfProvider_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWbemHiPerfProvider_QueryInstances(This,pNamespace,wszClass,lFlags,pCtx,pSink)( (This)->lpVtbl -> QueryInstances(This,pNamespace,wszClass,lFlags,pCtx,pSink) )
#define IWbemHiPerfProvider_CreateRefresher(This,pNamespace,lFlags,ppRefresher)( (This)->lpVtbl -> CreateRefresher(This,pNamespace,lFlags,ppRefresher) )
#define IWbemHiPerfProvider_CreateRefreshableObject(This,pNamespace,pTemplate,pRefresher,lFlags,pContext,ppRefreshable,plId)( (This)->lpVtbl -> CreateRefreshableObject(This,pNamespace,pTemplate,pRefresher,lFlags,pContext,ppRefreshable,plId) )
#define IWbemHiPerfProvider_StopRefreshing(This,pRefresher,lId,lFlags)( (This)->lpVtbl -> StopRefreshing(This,pRefresher,lId,lFlags) )
#define IWbemHiPerfProvider_CreateRefreshableEnum(This,pNamespace,wszClass,pRefresher,lFlags,pContext,pHiPerfEnum,plId)( (This)->lpVtbl -> CreateRefreshableEnum(This,pNamespace,wszClass,pRefresher,lFlags,pContext,pHiPerfEnum,plId) )
#define IWbemHiPerfProvider_GetObjects(This,pNamespace,lNumObjects,apObj,lFlags,pContext)( (This)->lpVtbl -> GetObjects(This,pNamespace,lNumObjects,apObj,lFlags,pContext) )
#endif
#endif
#ifndef __IWbemDecoupledRegistrar_INTERFACE_DEFINED__
#define __IWbemDecoupledRegistrar_INTERFACE_DEFINED__
extern const IID IID_IWbemDecoupledRegistrar;
typedef struct IWbemDecoupledRegistrarVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWbemDecoupledRegistrar * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWbemDecoupledRegistrar * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWbemDecoupledRegistrar * This);
	HRESULT(STDMETHODCALLTYPE * Register) (IWbemDecoupledRegistrar * This, long a_Flags, IWbemContext * a_Context, LPCWSTR a_User, LPCWSTR a_Locale, LPCWSTR a_Scope, LPCWSTR a_Registration, IUnknown * pIUnknown);
	HRESULT(STDMETHODCALLTYPE * UnRegister) (IWbemDecoupledRegistrar * This);
	END_INTERFACE
}  IWbemDecoupledRegistrarVtbl;
interface IWbemDecoupledRegistrar
{
	CONST_VTBL struct IWbemDecoupledRegistrarVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWbemDecoupledRegistrar_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWbemDecoupledRegistrar_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWbemDecoupledRegistrar_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWbemDecoupledRegistrar_Register(This,a_Flags,a_Context,a_User,a_Locale,a_Scope,a_Registration,pIUnknown)( (This)->lpVtbl -> Register(This,a_Flags,a_Context,a_User,a_Locale,a_Scope,a_Registration,pIUnknown) )
#define IWbemDecoupledRegistrar_UnRegister(This)( (This)->lpVtbl -> UnRegister(This) )
#endif
#endif
extern const CLSID CLSID_WbemAdministrativeLocator;
extern const CLSID CLSID_WbemAuthenticatedLocator;
extern const CLSID CLSID_WbemUnauthenticatedLocator;
extern const CLSID CLSID_WbemDecoupledRegistrar;
extern const CLSID CLSID_WbemDecoupledBasicEventProvider;
#endif
#ifndef __IWbemProviderIdentity_INTERFACE_DEFINED__
#define __IWbemProviderIdentity_INTERFACE_DEFINED__
extern const IID IID_IWbemProviderIdentity;
typedef struct IWbemProviderIdentityVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWbemProviderIdentity * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWbemProviderIdentity * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWbemProviderIdentity * This);
	HRESULT(STDMETHODCALLTYPE * SetRegistrationObject) (IWbemProviderIdentity * This, long lFlags, IWbemClassObject * pProvReg);
	END_INTERFACE
}  IWbemProviderIdentityVtbl;
interface IWbemProviderIdentity
{
	CONST_VTBL struct IWbemProviderIdentityVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWbemProviderIdentity_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWbemProviderIdentity_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWbemProviderIdentity_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWbemProviderIdentity_SetRegistrationObject(This,lFlags,pProvReg)( (This)->lpVtbl -> SetRegistrationObject(This,lFlags,pProvReg) )
#endif
#endif
typedef enum tag_WBEM_EXTRA_RETURN_CODES
{
	WBEM_S_INITIALIZED = 0,
	WBEM_S_LIMITED_SERVICE = 0x43001,
	WBEM_S_INDIRECTLY_UPDATED = (WBEM_S_LIMITED_SERVICE + 1),
	WBEM_S_SUBJECT_TO_SDS = (WBEM_S_INDIRECTLY_UPDATED + 1),
	WBEM_E_RETRY_LATER = 0x80043001,
	WBEM_E_RESOURCE_CONTENTION = (WBEM_E_RETRY_LATER + 1)
} WBEM_EXTRA_RETURN_CODES;
typedef enum tag_WBEM_PROVIDER_FLAGS
{
	WBEM_FLAG_OWNER_UPDATE = 0x10000
} WBEM_PROVIDER_FLAGS;
extern RPC_IF_HANDLE __MIDL_itf_wbemprov_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wbemprov_0000_0007_v0_0_s_ifspec;
#ifndef __IWbemDecoupledBasicEventProvider_INTERFACE_DEFINED__
#define __IWbemDecoupledBasicEventProvider_INTERFACE_DEFINED__
extern const IID IID_IWbemDecoupledBasicEventProvider;
typedef struct IWbemDecoupledBasicEventProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWbemDecoupledBasicEventProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWbemDecoupledBasicEventProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWbemDecoupledBasicEventProvider * This);
	HRESULT(STDMETHODCALLTYPE * Register) (IWbemDecoupledBasicEventProvider * This, long a_Flags, IWbemContext * a_Context, LPCWSTR a_User, LPCWSTR a_Locale, LPCWSTR a_Scope, LPCWSTR a_Registration, IUnknown * pIUnknown);
	HRESULT(STDMETHODCALLTYPE * UnRegister) (IWbemDecoupledBasicEventProvider * This);
	HRESULT(STDMETHODCALLTYPE * GetSink) (IWbemDecoupledBasicEventProvider * This, long a_Flags, IWbemContext * a_Context, IWbemObjectSink ** a_Sink);
	HRESULT(STDMETHODCALLTYPE * GetService) (IWbemDecoupledBasicEventProvider * This, long a_Flags, IWbemContext * a_Context, IWbemServices ** a_Service);
	END_INTERFACE
}  IWbemDecoupledBasicEventProviderVtbl;
interface IWbemDecoupledBasicEventProvider
{
	CONST_VTBL struct IWbemDecoupledBasicEventProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWbemDecoupledBasicEventProvider_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWbemDecoupledBasicEventProvider_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWbemDecoupledBasicEventProvider_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWbemDecoupledBasicEventProvider_Register(This,a_Flags,a_Context,a_User,a_Locale,a_Scope,a_Registration,pIUnknown)( (This)->lpVtbl -> Register(This,a_Flags,a_Context,a_User,a_Locale,a_Scope,a_Registration,pIUnknown) )
#define IWbemDecoupledBasicEventProvider_UnRegister(This)( (This)->lpVtbl -> UnRegister(This) )
#define IWbemDecoupledBasicEventProvider_GetSink(This,a_Flags,a_Context,a_Sink)( (This)->lpVtbl -> GetSink(This,a_Flags,a_Context,a_Sink) )
#define IWbemDecoupledBasicEventProvider_GetService(This,a_Flags,a_Context,a_Service)( (This)->lpVtbl -> GetService(This,a_Flags,a_Context,a_Service) )
#endif
#endif
typedef enum tag_WBEM_BATCH_TYPE
{
	WBEM_FLAG_BATCH_IF_NEEDED = 0,
	WBEM_FLAG_MUST_BATCH = 0x1,
	WBEM_FLAG_MUST_NOT_BATCH = 0x2
} WBEM_BATCH_TYPE;
extern RPC_IF_HANDLE __MIDL_itf_wbemprov_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wbemprov_0000_0012_v0_0_s_ifspec;
#ifndef __IWbemEventSink_INTERFACE_DEFINED__
#define __IWbemEventSink_INTERFACE_DEFINED__
extern const IID IID_IWbemEventSink;
typedef struct IWbemEventSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWbemEventSink * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWbemEventSink * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWbemEventSink * This);
	HRESULT(STDMETHODCALLTYPE * Indicate) (IWbemEventSink * This, long lObjectCount, IWbemClassObject ** apObjArray);
	HRESULT(STDMETHODCALLTYPE * SetStatus) (IWbemEventSink * This, long lFlags, HRESULT hResult, BSTR strParam, IWbemClassObject * pObjParam);
	HRESULT(STDMETHODCALLTYPE * SetSinkSecurity) (IWbemEventSink * This, long lSDLength, BYTE * pSD);
	HRESULT(STDMETHODCALLTYPE * IsActive) (IWbemEventSink * This);
	HRESULT(STDMETHODCALLTYPE * GetRestrictedSink) (IWbemEventSink * This, long lNumQueries, const LPCWSTR * awszQueries, IUnknown * pCallback, IWbemEventSink ** ppSink);
	HRESULT(STDMETHODCALLTYPE * SetBatchingParameters) (IWbemEventSink * This, LONG lFlags, DWORD dwMaxBufferSize, DWORD dwMaxSendLatency);
	END_INTERFACE
}  IWbemEventSinkVtbl;
interface IWbemEventSink
{
	CONST_VTBL struct IWbemEventSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWbemEventSink_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWbemEventSink_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWbemEventSink_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWbemEventSink_Indicate(This,lObjectCount,apObjArray)( (This)->lpVtbl -> Indicate(This,lObjectCount,apObjArray) )
#define IWbemEventSink_SetStatus(This,lFlags,hResult,strParam,pObjParam)( (This)->lpVtbl -> SetStatus(This,lFlags,hResult,strParam,pObjParam) )
#define IWbemEventSink_SetSinkSecurity(This,lSDLength,pSD)( (This)->lpVtbl -> SetSinkSecurity(This,lSDLength,pSD) )
#define IWbemEventSink_IsActive(This)( (This)->lpVtbl -> IsActive(This) )
#define IWbemEventSink_GetRestrictedSink(This,lNumQueries,awszQueries,pCallback,ppSink)( (This)->lpVtbl -> GetRestrictedSink(This,lNumQueries,awszQueries,pCallback,ppSink) )
#define IWbemEventSink_SetBatchingParameters(This,lFlags,dwMaxBufferSize,dwMaxSendLatency)( (This)->lpVtbl -> SetBatchingParameters(This,lFlags,dwMaxBufferSize,dwMaxSendLatency) )
#endif
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
