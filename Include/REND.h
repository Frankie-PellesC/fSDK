/*+@@file@@----------------------------------------------------------------*//*!
 \file		REND.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Sep 16 19:40:59 2016
 \date		Modified on Fri Sep 16 19:40:59 2016
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
#ifndef __rend_h__
#define __rend_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ITDirectoryObjectConference_FWD_DEFINED__
#define __ITDirectoryObjectConference_FWD_DEFINED__
typedef interface ITDirectoryObjectConference ITDirectoryObjectConference;
#endif
#ifndef __ITDirectoryObjectUser_FWD_DEFINED__
#define __ITDirectoryObjectUser_FWD_DEFINED__
typedef interface ITDirectoryObjectUser ITDirectoryObjectUser;
#endif
#ifndef __IEnumDialableAddrs_FWD_DEFINED__
#define __IEnumDialableAddrs_FWD_DEFINED__
typedef interface IEnumDialableAddrs IEnumDialableAddrs;
#endif
#ifndef __ITDirectoryObject_FWD_DEFINED__
#define __ITDirectoryObject_FWD_DEFINED__
typedef interface ITDirectoryObject ITDirectoryObject;
#endif
#ifndef __IEnumDirectoryObject_FWD_DEFINED__
#define __IEnumDirectoryObject_FWD_DEFINED__
typedef interface IEnumDirectoryObject IEnumDirectoryObject;
#endif
#ifndef __ITILSConfig_FWD_DEFINED__
#define __ITILSConfig_FWD_DEFINED__
typedef interface ITILSConfig ITILSConfig;
#endif
#ifndef __ITDirectory_FWD_DEFINED__
#define __ITDirectory_FWD_DEFINED__
typedef interface ITDirectory ITDirectory;
#endif
#ifndef __IEnumDirectory_FWD_DEFINED__
#define __IEnumDirectory_FWD_DEFINED__
typedef interface IEnumDirectory IEnumDirectory;
#endif
#ifndef __ITRendezvous_FWD_DEFINED__
#define __ITRendezvous_FWD_DEFINED__
typedef interface ITRendezvous ITRendezvous;
#endif
#ifndef __ITRendezvous_FWD_DEFINED__
#define __ITRendezvous_FWD_DEFINED__
typedef interface ITRendezvous ITRendezvous;
#endif
#ifndef __ITDirectoryObjectConference_FWD_DEFINED__
#define __ITDirectoryObjectConference_FWD_DEFINED__
typedef interface ITDirectoryObjectConference ITDirectoryObjectConference;
#endif
#ifndef __ITDirectoryObjectUser_FWD_DEFINED__
#define __ITDirectoryObjectUser_FWD_DEFINED__
typedef interface ITDirectoryObjectUser ITDirectoryObjectUser;
#endif
#ifndef __ITDirectoryObject_FWD_DEFINED__
#define __ITDirectoryObject_FWD_DEFINED__
typedef interface ITDirectoryObject ITDirectoryObject;
#endif
#ifndef __ITILSConfig_FWD_DEFINED__
#define __ITILSConfig_FWD_DEFINED__
typedef interface ITILSConfig ITILSConfig;
#endif
#ifndef __ITDirectory_FWD_DEFINED__
#define __ITDirectory_FWD_DEFINED__
typedef interface ITDirectory ITDirectory;
#endif
#ifndef __Rendezvous_FWD_DEFINED__
#define __Rendezvous_FWD_DEFINED__
typedef struct Rendezvous Rendezvous;
#endif
#include <oaidl.h>
#include <tapi3if.h>
#define	IDISPDIROBJECT	( 0x10000 )
#define	IDISPDIROBJCONFERENCE	( 0x20000 )
#define	IDISPDIROBJUSER	( 0x30000 )
#define	IDISPDIRECTORY	( 0x10000 )
#define	IDISPILSCONFIG	( 0x20000 )
typedef enum DIRECTORY_TYPE
{
	DT_NTDS = 1,
	DT_ILS = 2
} DIRECTORY_TYPE;
typedef enum DIRECTORY_OBJECT_TYPE
{
	OT_CONFERENCE = 1,
	OT_USER = 2
} DIRECTORY_OBJECT_TYPE;
typedef enum RND_ADVERTISING_SCOPE
{
	RAS_LOCAL = 1,
	RAS_SITE = 2,
	RAS_REGION = 3,
	RAS_WORLD = 4
} RND_ADVERTISING_SCOPE;
extern RPC_IF_HANDLE __MIDL_itf_rend_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_rend_0000_0000_v0_0_s_ifspec;
#ifndef __ITDirectoryObjectConference_INTERFACE_DEFINED__
#define __ITDirectoryObjectConference_INTERFACE_DEFINED__
extern const IID IID_ITDirectoryObjectConference;
typedef struct ITDirectoryObjectConferenceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITDirectoryObjectConference * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITDirectoryObjectConference * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITDirectoryObjectConference * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITDirectoryObjectConference * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITDirectoryObjectConference * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITDirectoryObjectConference * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITDirectoryObjectConference * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Protocol) (ITDirectoryObjectConference * This, BSTR * ppProtocol);
	HRESULT(STDMETHODCALLTYPE * get_Originator) (ITDirectoryObjectConference * This, BSTR * ppOriginator);
	HRESULT(STDMETHODCALLTYPE * put_Originator) (ITDirectoryObjectConference * This, BSTR pOriginator);
	HRESULT(STDMETHODCALLTYPE * get_AdvertisingScope) (ITDirectoryObjectConference * This, RND_ADVERTISING_SCOPE * pAdvertisingScope);
	HRESULT(STDMETHODCALLTYPE * put_AdvertisingScope) (ITDirectoryObjectConference * This, RND_ADVERTISING_SCOPE AdvertisingScope);
	HRESULT(STDMETHODCALLTYPE * get_Url) (ITDirectoryObjectConference * This, BSTR * ppUrl);
	HRESULT(STDMETHODCALLTYPE * put_Url) (ITDirectoryObjectConference * This, BSTR pUrl);
	HRESULT(STDMETHODCALLTYPE * get_Description) (ITDirectoryObjectConference * This, BSTR * ppDescription);
	HRESULT(STDMETHODCALLTYPE * put_Description) (ITDirectoryObjectConference * This, BSTR pDescription);
	HRESULT(STDMETHODCALLTYPE * get_IsEncrypted) (ITDirectoryObjectConference * This, VARIANT_BOOL * pfEncrypted);
	HRESULT(STDMETHODCALLTYPE * put_IsEncrypted) (ITDirectoryObjectConference * This, VARIANT_BOOL fEncrypted);
	HRESULT(STDMETHODCALLTYPE * get_StartTime) (ITDirectoryObjectConference * This, DATE * pDate);
	HRESULT(STDMETHODCALLTYPE * put_StartTime) (ITDirectoryObjectConference * This, DATE Date);
	HRESULT(STDMETHODCALLTYPE * get_StopTime) (ITDirectoryObjectConference * This, DATE * pDate);
	HRESULT(STDMETHODCALLTYPE * put_StopTime) (ITDirectoryObjectConference * This, DATE Date);
	END_INTERFACE
}  ITDirectoryObjectConferenceVtbl;
interface ITDirectoryObjectConference
{
	CONST_VTBL struct ITDirectoryObjectConferenceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITDirectoryObjectConference_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITDirectoryObjectConference_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITDirectoryObjectConference_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITDirectoryObjectConference_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITDirectoryObjectConference_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITDirectoryObjectConference_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITDirectoryObjectConference_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITDirectoryObjectConference_get_Protocol(This,ppProtocol) ( (This)->lpVtbl -> get_Protocol(This,ppProtocol) )
#define ITDirectoryObjectConference_get_Originator(This,ppOriginator) ( (This)->lpVtbl -> get_Originator(This,ppOriginator) )
#define ITDirectoryObjectConference_put_Originator(This,pOriginator) ( (This)->lpVtbl -> put_Originator(This,pOriginator) )
#define ITDirectoryObjectConference_get_AdvertisingScope(This,pAdvertisingScope) ( (This)->lpVtbl -> get_AdvertisingScope(This,pAdvertisingScope) )
#define ITDirectoryObjectConference_put_AdvertisingScope(This,AdvertisingScope) ( (This)->lpVtbl -> put_AdvertisingScope(This,AdvertisingScope) )
#define ITDirectoryObjectConference_get_Url(This,ppUrl) ( (This)->lpVtbl -> get_Url(This,ppUrl) )
#define ITDirectoryObjectConference_put_Url(This,pUrl) ( (This)->lpVtbl -> put_Url(This,pUrl) )
#define ITDirectoryObjectConference_get_Description(This,ppDescription) ( (This)->lpVtbl -> get_Description(This,ppDescription) )
#define ITDirectoryObjectConference_put_Description(This,pDescription) ( (This)->lpVtbl -> put_Description(This,pDescription) )
#define ITDirectoryObjectConference_get_IsEncrypted(This,pfEncrypted) ( (This)->lpVtbl -> get_IsEncrypted(This,pfEncrypted) )
#define ITDirectoryObjectConference_put_IsEncrypted(This,fEncrypted) ( (This)->lpVtbl -> put_IsEncrypted(This,fEncrypted) )
#define ITDirectoryObjectConference_get_StartTime(This,pDate) ( (This)->lpVtbl -> get_StartTime(This,pDate) )
#define ITDirectoryObjectConference_put_StartTime(This,Date) ( (This)->lpVtbl -> put_StartTime(This,Date) )
#define ITDirectoryObjectConference_get_StopTime(This,pDate) ( (This)->lpVtbl -> get_StopTime(This,pDate) )
#define ITDirectoryObjectConference_put_StopTime(This,Date) ( (This)->lpVtbl -> put_StopTime(This,Date) )
#endif
#endif
#ifndef __ITDirectoryObjectUser_INTERFACE_DEFINED__
#define __ITDirectoryObjectUser_INTERFACE_DEFINED__
extern const IID IID_ITDirectoryObjectUser;
typedef struct ITDirectoryObjectUserVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITDirectoryObjectUser * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITDirectoryObjectUser * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITDirectoryObjectUser * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITDirectoryObjectUser * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITDirectoryObjectUser * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITDirectoryObjectUser * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITDirectoryObjectUser * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_IPPhonePrimary) (ITDirectoryObjectUser * This, BSTR * ppName);
	HRESULT(STDMETHODCALLTYPE * put_IPPhonePrimary) (ITDirectoryObjectUser * This, BSTR pName);
	END_INTERFACE
}  ITDirectoryObjectUserVtbl;
interface ITDirectoryObjectUser
{
	CONST_VTBL struct ITDirectoryObjectUserVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITDirectoryObjectUser_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITDirectoryObjectUser_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITDirectoryObjectUser_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITDirectoryObjectUser_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITDirectoryObjectUser_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITDirectoryObjectUser_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITDirectoryObjectUser_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITDirectoryObjectUser_get_IPPhonePrimary(This,ppName) ( (This)->lpVtbl -> get_IPPhonePrimary(This,ppName) )
#define ITDirectoryObjectUser_put_IPPhonePrimary(This,pName) ( (This)->lpVtbl -> put_IPPhonePrimary(This,pName) )
#endif
#endif
#ifndef __IEnumDialableAddrs_INTERFACE_DEFINED__
#define __IEnumDialableAddrs_INTERFACE_DEFINED__
extern const IID IID_IEnumDialableAddrs;
typedef struct IEnumDialableAddrsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumDialableAddrs * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumDialableAddrs * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumDialableAddrs * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumDialableAddrs * This, ULONG celt, BSTR * ppElements, ULONG * pcFetched);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumDialableAddrs * This);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumDialableAddrs * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumDialableAddrs * This, IEnumDialableAddrs ** ppEnum);
	END_INTERFACE
}  IEnumDialableAddrsVtbl;
interface IEnumDialableAddrs
{
	CONST_VTBL struct IEnumDialableAddrsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumDialableAddrs_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumDialableAddrs_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumDialableAddrs_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumDialableAddrs_Next(This,celt,ppElements,pcFetched) ( (This)->lpVtbl -> Next(This,celt,ppElements,pcFetched) )
#define IEnumDialableAddrs_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumDialableAddrs_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumDialableAddrs_Clone(This,ppEnum) ( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
#endif
#ifndef __ITDirectoryObject_INTERFACE_DEFINED__
#define __ITDirectoryObject_INTERFACE_DEFINED__
extern const IID IID_ITDirectoryObject;
typedef struct ITDirectoryObjectVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITDirectoryObject * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITDirectoryObject * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITDirectoryObject * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITDirectoryObject * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITDirectoryObject * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITDirectoryObject * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITDirectoryObject * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_ObjectType) (ITDirectoryObject * This, DIRECTORY_OBJECT_TYPE * pObjectType);
	HRESULT(STDMETHODCALLTYPE * get_Name) (ITDirectoryObject * This, BSTR * ppName);
	HRESULT(STDMETHODCALLTYPE * put_Name) (ITDirectoryObject * This, BSTR pName);
	HRESULT(STDMETHODCALLTYPE * get_DialableAddrs) (ITDirectoryObject * This, long dwAddressType, VARIANT * pVariant);
	HRESULT(STDMETHODCALLTYPE * EnumerateDialableAddrs) (ITDirectoryObject * This, DWORD dwAddressType, IEnumDialableAddrs ** ppEnumDialableAddrs);
	HRESULT(STDMETHODCALLTYPE * get_SecurityDescriptor) (ITDirectoryObject * This, IDispatch ** ppSecDes);
	HRESULT(STDMETHODCALLTYPE * put_SecurityDescriptor) (ITDirectoryObject * This, IDispatch * pSecDes);
	END_INTERFACE
}  ITDirectoryObjectVtbl;
interface ITDirectoryObject
{
	CONST_VTBL struct ITDirectoryObjectVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITDirectoryObject_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITDirectoryObject_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITDirectoryObject_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITDirectoryObject_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITDirectoryObject_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITDirectoryObject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITDirectoryObject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITDirectoryObject_get_ObjectType(This,pObjectType) ( (This)->lpVtbl -> get_ObjectType(This,pObjectType) )
#define ITDirectoryObject_get_Name(This,ppName) ( (This)->lpVtbl -> get_Name(This,ppName) )
#define ITDirectoryObject_put_Name(This,pName) ( (This)->lpVtbl -> put_Name(This,pName) )
#define ITDirectoryObject_get_DialableAddrs(This,dwAddressType,pVariant) ( (This)->lpVtbl -> get_DialableAddrs(This,dwAddressType,pVariant) )
#define ITDirectoryObject_EnumerateDialableAddrs(This,dwAddressType,ppEnumDialableAddrs) ( (This)->lpVtbl -> EnumerateDialableAddrs(This,dwAddressType,ppEnumDialableAddrs) )
#define ITDirectoryObject_get_SecurityDescriptor(This,ppSecDes) ( (This)->lpVtbl -> get_SecurityDescriptor(This,ppSecDes) )
#define ITDirectoryObject_put_SecurityDescriptor(This,pSecDes) ( (This)->lpVtbl -> put_SecurityDescriptor(This,pSecDes) )
#endif
#endif
#ifndef __IEnumDirectoryObject_INTERFACE_DEFINED__
#define __IEnumDirectoryObject_INTERFACE_DEFINED__
extern const IID IID_IEnumDirectoryObject;
typedef struct IEnumDirectoryObjectVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumDirectoryObject * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumDirectoryObject * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumDirectoryObject * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumDirectoryObject * This, ULONG celt, ITDirectoryObject ** pVal, ULONG * pcFetched);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumDirectoryObject * This);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumDirectoryObject * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumDirectoryObject * This, IEnumDirectoryObject ** ppEnum);
	END_INTERFACE
}  IEnumDirectoryObjectVtbl;
interface IEnumDirectoryObject
{
	CONST_VTBL struct IEnumDirectoryObjectVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumDirectoryObject_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumDirectoryObject_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumDirectoryObject_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumDirectoryObject_Next(This,celt,pVal,pcFetched) ( (This)->lpVtbl -> Next(This,celt,pVal,pcFetched) )
#define IEnumDirectoryObject_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumDirectoryObject_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumDirectoryObject_Clone(This,ppEnum) ( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
#endif
#ifndef __ITILSConfig_INTERFACE_DEFINED__
#define __ITILSConfig_INTERFACE_DEFINED__
extern const IID IID_ITILSConfig;
typedef struct ITILSConfigVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITILSConfig * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITILSConfig * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITILSConfig * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITILSConfig * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITILSConfig * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITILSConfig * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITILSConfig * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Port) (ITILSConfig * This, long *pPort);
	HRESULT(STDMETHODCALLTYPE * put_Port) (ITILSConfig * This, long Port);
	END_INTERFACE
}  ITILSConfigVtbl;
interface ITILSConfig
{
	CONST_VTBL struct ITILSConfigVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITILSConfig_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITILSConfig_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITILSConfig_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITILSConfig_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITILSConfig_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITILSConfig_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITILSConfig_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITILSConfig_get_Port(This,pPort) ( (This)->lpVtbl -> get_Port(This,pPort) )
#define ITILSConfig_put_Port(This,Port) ( (This)->lpVtbl -> put_Port(This,Port) )
#endif
#endif
#ifndef __ITDirectory_INTERFACE_DEFINED__
#define __ITDirectory_INTERFACE_DEFINED__
extern const IID IID_ITDirectory;
typedef struct ITDirectoryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITDirectory * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITDirectory * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITDirectory * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITDirectory * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITDirectory * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITDirectory * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITDirectory * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_DirectoryType) (ITDirectory * This, DIRECTORY_TYPE * pDirectoryType);
	HRESULT(STDMETHODCALLTYPE * get_DisplayName) (ITDirectory * This, BSTR * pName);
	HRESULT(STDMETHODCALLTYPE * get_IsDynamic) (ITDirectory * This, VARIANT_BOOL * pfDynamic);
	HRESULT(STDMETHODCALLTYPE * get_DefaultObjectTTL) (ITDirectory * This, long *pTTL);
	HRESULT(STDMETHODCALLTYPE * put_DefaultObjectTTL) (ITDirectory * This, long TTL);
	HRESULT(STDMETHODCALLTYPE * EnableAutoRefresh) (ITDirectory * This, VARIANT_BOOL fEnable);
	HRESULT(STDMETHODCALLTYPE * Connect) (ITDirectory * This, VARIANT_BOOL fSecure);
	HRESULT(STDMETHODCALLTYPE * Bind) (ITDirectory * This, BSTR pDomainName, BSTR pUserName, BSTR pPassword, long lFlags);
	HRESULT(STDMETHODCALLTYPE * AddDirectoryObject) (ITDirectory * This, ITDirectoryObject * pDirectoryObject);
	HRESULT(STDMETHODCALLTYPE * ModifyDirectoryObject) (ITDirectory * This, ITDirectoryObject * pDirectoryObject);
	HRESULT(STDMETHODCALLTYPE * RefreshDirectoryObject) (ITDirectory * This, ITDirectoryObject * pDirectoryObject);
	HRESULT(STDMETHODCALLTYPE * DeleteDirectoryObject) (ITDirectory * This, ITDirectoryObject * pDirectoryObject);
	HRESULT(STDMETHODCALLTYPE * get_DirectoryObjects) (ITDirectory * This, DIRECTORY_OBJECT_TYPE DirectoryObjectType, BSTR pName, VARIANT * pVariant);
	HRESULT(STDMETHODCALLTYPE * EnumerateDirectoryObjects) (ITDirectory * This, DIRECTORY_OBJECT_TYPE DirectoryObjectType, BSTR pName, IEnumDirectoryObject ** ppEnumObject);
	END_INTERFACE
}  ITDirectoryVtbl;
interface ITDirectory
{
	CONST_VTBL struct ITDirectoryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITDirectory_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITDirectory_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITDirectory_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITDirectory_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITDirectory_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITDirectory_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITDirectory_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITDirectory_get_DirectoryType(This,pDirectoryType) ( (This)->lpVtbl -> get_DirectoryType(This,pDirectoryType) )
#define ITDirectory_get_DisplayName(This,pName) ( (This)->lpVtbl -> get_DisplayName(This,pName) )
#define ITDirectory_get_IsDynamic(This,pfDynamic) ( (This)->lpVtbl -> get_IsDynamic(This,pfDynamic) )
#define ITDirectory_get_DefaultObjectTTL(This,pTTL) ( (This)->lpVtbl -> get_DefaultObjectTTL(This,pTTL) )
#define ITDirectory_put_DefaultObjectTTL(This,TTL) ( (This)->lpVtbl -> put_DefaultObjectTTL(This,TTL) )
#define ITDirectory_EnableAutoRefresh(This,fEnable) ( (This)->lpVtbl -> EnableAutoRefresh(This,fEnable) )
#define ITDirectory_Connect(This,fSecure) ( (This)->lpVtbl -> Connect(This,fSecure) )
#define ITDirectory_Bind(This,pDomainName,pUserName,pPassword,lFlags) ( (This)->lpVtbl -> Bind(This,pDomainName,pUserName,pPassword,lFlags) )
#define ITDirectory_AddDirectoryObject(This,pDirectoryObject) ( (This)->lpVtbl -> AddDirectoryObject(This,pDirectoryObject) )
#define ITDirectory_ModifyDirectoryObject(This,pDirectoryObject) ( (This)->lpVtbl -> ModifyDirectoryObject(This,pDirectoryObject) )
#define ITDirectory_RefreshDirectoryObject(This,pDirectoryObject) ( (This)->lpVtbl -> RefreshDirectoryObject(This,pDirectoryObject) )
#define ITDirectory_DeleteDirectoryObject(This,pDirectoryObject) ( (This)->lpVtbl -> DeleteDirectoryObject(This,pDirectoryObject) )
#define ITDirectory_get_DirectoryObjects(This,DirectoryObjectType,pName,pVariant) ( (This)->lpVtbl -> get_DirectoryObjects(This,DirectoryObjectType,pName,pVariant) )
#define ITDirectory_EnumerateDirectoryObjects(This,DirectoryObjectType,pName,ppEnumObject) ( (This)->lpVtbl -> EnumerateDirectoryObjects(This,DirectoryObjectType,pName,ppEnumObject) )
#endif
#endif
#ifndef __IEnumDirectory_INTERFACE_DEFINED__
#define __IEnumDirectory_INTERFACE_DEFINED__
extern const IID IID_IEnumDirectory;
typedef struct IEnumDirectoryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumDirectory * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumDirectory * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumDirectory * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumDirectory * This, ULONG celt, ITDirectory ** ppElements, ULONG * pcFetched);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumDirectory * This);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumDirectory * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumDirectory * This, IEnumDirectory ** ppEnum);
	END_INTERFACE
}  IEnumDirectoryVtbl;
interface IEnumDirectory
{
	CONST_VTBL struct IEnumDirectoryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumDirectory_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumDirectory_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumDirectory_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumDirectory_Next(This,celt,ppElements,pcFetched) ( (This)->lpVtbl -> Next(This,celt,ppElements,pcFetched) )
#define IEnumDirectory_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumDirectory_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumDirectory_Clone(This,ppEnum) ( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
#endif
#ifndef __ITRendezvous_INTERFACE_DEFINED__
#define __ITRendezvous_INTERFACE_DEFINED__
extern const IID IID_ITRendezvous;
typedef struct ITRendezvousVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITRendezvous * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITRendezvous * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITRendezvous * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITRendezvous * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITRendezvous * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITRendezvous * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITRendezvous * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_DefaultDirectories) (ITRendezvous * This, VARIANT * pVariant);
	HRESULT(STDMETHODCALLTYPE * EnumerateDefaultDirectories) (ITRendezvous * This, IEnumDirectory ** ppEnumDirectory);
	HRESULT(STDMETHODCALLTYPE * CreateDirectory) (ITRendezvous * This, DIRECTORY_TYPE DirectoryType, BSTR pName, ITDirectory ** ppDir);
	HRESULT(STDMETHODCALLTYPE * CreateDirectoryObject) (ITRendezvous * This, DIRECTORY_OBJECT_TYPE DirectoryObjectType, BSTR pName, ITDirectoryObject ** ppDirectoryObject);
	END_INTERFACE
}  ITRendezvousVtbl;
interface ITRendezvous
{
	CONST_VTBL struct ITRendezvousVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITRendezvous_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITRendezvous_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITRendezvous_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITRendezvous_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITRendezvous_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITRendezvous_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITRendezvous_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITRendezvous_get_DefaultDirectories(This,pVariant) ( (This)->lpVtbl -> get_DefaultDirectories(This,pVariant) )
#define ITRendezvous_EnumerateDefaultDirectories(This,ppEnumDirectory) ( (This)->lpVtbl -> EnumerateDefaultDirectories(This,ppEnumDirectory) )
#define ITRendezvous_CreateDirectory(This,DirectoryType,pName,ppDir) ( (This)->lpVtbl -> CreateDirectory(This,DirectoryType,pName,ppDir) )
#define ITRendezvous_CreateDirectoryObject(This,DirectoryObjectType,pName,ppDirectoryObject) ( (This)->lpVtbl -> CreateDirectoryObject(This,DirectoryObjectType,pName,ppDirectoryObject) )
#endif
#endif
#define RENDBIND_AUTHENTICATE       0x00000001
#define RENDBIND_DEFAULTDOMAINNAME  0x00000002
#define RENDBIND_DEFAULTUSERNAME    0x00000004
#define RENDBIND_DEFAULTPASSWORD    0x00000008
#define RENDBIND_DEFAULTCREDENTIALS 0x0000000e
#define __RendConstants_MODULE_DEFINED__
extern RPC_IF_HANDLE __MIDL_itf_rend_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_rend_0000_0009_v0_0_s_ifspec;
#ifndef __RENDLib_LIBRARY_DEFINED__
#define __RENDLib_LIBRARY_DEFINED__
extern const IID LIBID_RENDLib;
extern const CLSID CLSID_Rendezvous;
#ifndef __RendConstants_MODULE_DEFINED__
#define __RendConstants_MODULE_DEFINED__
const long RENDBIND_AUTHENTICATE = 0x1;
const long RENDBIND_DEFAULTDOMAINNAME = 0x2;
const long RENDBIND_DEFAULTUSERNAME = 0x4;
const long RENDBIND_DEFAULTPASSWORD = 0x8;
const long RENDBIND_DEFAULTCREDENTIALS = 0xe;
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
