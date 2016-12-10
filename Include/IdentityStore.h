/*+@@file@@----------------------------------------------------------------*//*!
 \file		IdentityStore.h
 \par Description
            Extension and update of headers for PellesC compiler suite.
 \par Project:
            PellesC Headers extension
 \date		Created  on Sat Jul 16 20:16:20 2016
 \date		Modified on Sat Jul 16 20:16:20 2016
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
#ifndef __identitystore_h__
#define __identitystore_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IIdentityStore_FWD_DEFINED__
#define __IIdentityStore_FWD_DEFINED__
typedef interface IIdentityStore IIdentityStore;
#endif
#ifndef __AsyncIIdentityStore_FWD_DEFINED__
#define __AsyncIIdentityStore_FWD_DEFINED__
typedef interface AsyncIIdentityStore AsyncIIdentityStore;
#endif
#ifndef __CoClassIdentityStore_FWD_DEFINED__
#define __CoClassIdentityStore_FWD_DEFINED__
typedef struct CoClassIdentityStore CoClassIdentityStore;
#endif
#ifndef __CIdentityProfileHandler_FWD_DEFINED__
#define __CIdentityProfileHandler_FWD_DEFINED__
typedef struct CIdentityProfileHandler CIdentityProfileHandler;
#endif
#include <oaidl.h>
#include <ocidl.h>
#include <propsys.h>
#include <IdentityCommon.h>
#ifndef __IIdentityStore_INTERFACE_DEFINED__
#define __IIdentityStore_INTERFACE_DEFINED__
extern const IID IID_IIdentityStore;
typedef struct IIdentityStoreVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IIdentityStore * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IIdentityStore * This);
	ULONG(STDMETHODCALLTYPE * Release) (IIdentityStore * This);
	HRESULT(STDMETHODCALLTYPE * GetCount) (IIdentityStore * This, DWORD * pdwProviders);
	HRESULT(STDMETHODCALLTYPE * GetAt) (IIdentityStore * This, const DWORD dwProvider, GUID * pProvGuid, IUnknown ** ppIdentityProvider);
	HRESULT(STDMETHODCALLTYPE * AddToCache) (IIdentityStore * This, LPCWSTR lpszUniqueID, REFGUID ProviderGUID);
	HRESULT(STDMETHODCALLTYPE * ConvertToSid) (IIdentityStore * This, LPCWSTR lpszUniqueID, REFGUID ProviderGUID, USHORT cbSid, BYTE * pSid, USHORT * pcbRequiredSid);
	HRESULT(STDMETHODCALLTYPE * EnumerateIdentities) (IIdentityStore * This, const IDENTITY_TYPE eIdentityType, const PROPERTYKEY * pFilterkey, const PROPVARIANT * pFilterPropVarValue, IEnumUnknown ** ppIdentityEnum);
	HRESULT(STDMETHODCALLTYPE * Reset) (IIdentityStore * This);
	END_INTERFACE
}  IIdentityStoreVtbl;
interface IIdentityStore
{
	CONST_VTBL struct IIdentityStoreVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IIdentityStore_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IIdentityStore_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IIdentityStore_Release(This)( (This)->lpVtbl -> Release(This) )
#define IIdentityStore_GetCount(This,pdwProviders)( (This)->lpVtbl -> GetCount(This,pdwProviders) )
#define IIdentityStore_GetAt(This,dwProvider,pProvGuid,ppIdentityProvider)( (This)->lpVtbl -> GetAt(This,dwProvider,pProvGuid,ppIdentityProvider) )
#define IIdentityStore_AddToCache(This,lpszUniqueID,ProviderGUID)( (This)->lpVtbl -> AddToCache(This,lpszUniqueID,ProviderGUID) )
#define IIdentityStore_ConvertToSid(This,lpszUniqueID,ProviderGUID,cbSid,pSid,pcbRequiredSid)( (This)->lpVtbl -> ConvertToSid(This,lpszUniqueID,ProviderGUID,cbSid,pSid,pcbRequiredSid) )
#define IIdentityStore_EnumerateIdentities(This,eIdentityType,pFilterkey,pFilterPropVarValue,ppIdentityEnum)( (This)->lpVtbl -> EnumerateIdentities(This,eIdentityType,pFilterkey,pFilterPropVarValue,ppIdentityEnum) )
#define IIdentityStore_Reset(This)( (This)->lpVtbl -> Reset(This) )
#endif
#endif
#ifndef __AsyncIIdentityStore_INTERFACE_DEFINED__
#define __AsyncIIdentityStore_INTERFACE_DEFINED__
extern const IID IID_AsyncIIdentityStore;
typedef struct AsyncIIdentityStoreVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (AsyncIIdentityStore * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (AsyncIIdentityStore * This);
	ULONG(STDMETHODCALLTYPE * Release) (AsyncIIdentityStore * This);
	HRESULT(STDMETHODCALLTYPE * Begin_GetCount) (AsyncIIdentityStore * This);
	HRESULT(STDMETHODCALLTYPE * Finish_GetCount) (AsyncIIdentityStore * This, DWORD * pdwProviders);
	HRESULT(STDMETHODCALLTYPE * Begin_GetAt) (AsyncIIdentityStore * This, const DWORD dwProvider, GUID * pProvGuid);
	HRESULT(STDMETHODCALLTYPE * Finish_GetAt) (AsyncIIdentityStore * This, GUID * pProvGuid, IUnknown ** ppIdentityProvider);
	HRESULT(STDMETHODCALLTYPE * Begin_AddToCache) (AsyncIIdentityStore * This, LPCWSTR lpszUniqueID, REFGUID ProviderGUID);
	HRESULT(STDMETHODCALLTYPE * Finish_AddToCache) (AsyncIIdentityStore * This);
	HRESULT(STDMETHODCALLTYPE * Begin_ConvertToSid) (AsyncIIdentityStore * This, LPCWSTR lpszUniqueID, REFGUID ProviderGUID, USHORT cbSid, BYTE * pSid);
	HRESULT(STDMETHODCALLTYPE * Finish_ConvertToSid) (AsyncIIdentityStore * This, BYTE * pSid, USHORT * pcbRequiredSid);
	HRESULT(STDMETHODCALLTYPE * Begin_EnumerateIdentities) (AsyncIIdentityStore * This, const IDENTITY_TYPE eIdentityType, const PROPERTYKEY * pFilterkey, const PROPVARIANT * pFilterPropVarValue);
	HRESULT(STDMETHODCALLTYPE * Finish_EnumerateIdentities) (AsyncIIdentityStore * This, IEnumUnknown ** ppIdentityEnum);
	HRESULT(STDMETHODCALLTYPE * Begin_Reset) (AsyncIIdentityStore * This);
	HRESULT(STDMETHODCALLTYPE * Finish_Reset) (AsyncIIdentityStore * This);
	END_INTERFACE
}  AsyncIIdentityStoreVtbl;
interface AsyncIIdentityStore
{
	CONST_VTBL struct AsyncIIdentityStoreVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define AsyncIIdentityStore_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define AsyncIIdentityStore_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define AsyncIIdentityStore_Release(This)( (This)->lpVtbl -> Release(This) )
#define AsyncIIdentityStore_Begin_GetCount(This)( (This)->lpVtbl -> Begin_GetCount(This) )
#define AsyncIIdentityStore_Finish_GetCount(This,pdwProviders)( (This)->lpVtbl -> Finish_GetCount(This,pdwProviders) )
#define AsyncIIdentityStore_Begin_GetAt(This,dwProvider,pProvGuid)( (This)->lpVtbl -> Begin_GetAt(This,dwProvider,pProvGuid) )
#define AsyncIIdentityStore_Finish_GetAt(This,pProvGuid,ppIdentityProvider)( (This)->lpVtbl -> Finish_GetAt(This,pProvGuid,ppIdentityProvider) )
#define AsyncIIdentityStore_Begin_AddToCache(This,lpszUniqueID,ProviderGUID)( (This)->lpVtbl -> Begin_AddToCache(This,lpszUniqueID,ProviderGUID) )
#define AsyncIIdentityStore_Finish_AddToCache(This)( (This)->lpVtbl -> Finish_AddToCache(This) )
#define AsyncIIdentityStore_Begin_ConvertToSid(This,lpszUniqueID,ProviderGUID,cbSid,pSid)( (This)->lpVtbl -> Begin_ConvertToSid(This,lpszUniqueID,ProviderGUID,cbSid,pSid) )
#define AsyncIIdentityStore_Finish_ConvertToSid(This,pSid,pcbRequiredSid)( (This)->lpVtbl -> Finish_ConvertToSid(This,pSid,pcbRequiredSid) )
#define AsyncIIdentityStore_Begin_EnumerateIdentities(This,eIdentityType,pFilterkey,pFilterPropVarValue)( (This)->lpVtbl -> Begin_EnumerateIdentities(This,eIdentityType,pFilterkey,pFilterPropVarValue) )
#define AsyncIIdentityStore_Finish_EnumerateIdentities(This,ppIdentityEnum)( (This)->lpVtbl -> Finish_EnumerateIdentities(This,ppIdentityEnum) )
#define AsyncIIdentityStore_Begin_Reset(This)( (This)->lpVtbl -> Begin_Reset(This) )
#define AsyncIIdentityStore_Finish_Reset(This)( (This)->lpVtbl -> Finish_Reset(This) )
#endif
#endif
#ifndef __IdentityStoreLib_LIBRARY_DEFINED__
#define __IdentityStoreLib_LIBRARY_DEFINED__
extern const IID LIBID_IdentityStoreLib;
extern const CLSID CLSID_CoClassIdentityStore;
extern const CLSID CLSID_CIdentityProfileHandler;
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER LPSAFEARRAY_UserSize(unsigned long *, unsigned long, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserMarshal(unsigned long *, unsigned char *, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserUnmarshal(unsigned long *, unsigned char *, LPSAFEARRAY *);
void __RPC_USER LPSAFEARRAY_UserFree(unsigned long *, LPSAFEARRAY *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
unsigned long __RPC_USER LPSAFEARRAY_UserSize64(unsigned long *, unsigned long, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserMarshal64(unsigned long *, unsigned char *, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserUnmarshal64(unsigned long *, unsigned char *, LPSAFEARRAY *);
void __RPC_USER LPSAFEARRAY_UserFree64(unsigned long *, LPSAFEARRAY *);
#endif
