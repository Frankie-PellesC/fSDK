/*+@@file@@----------------------------------------------------------------*//*!
 \file		IdentityProvider.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul 16 20:12:52 2016
 \date		Modified on Sat Jul 16 20:12:52 2016
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
#ifndef __identityprovider_h__
#define __identityprovider_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IIdentityAdvise_FWD_DEFINED__
#define __IIdentityAdvise_FWD_DEFINED__
typedef interface IIdentityAdvise IIdentityAdvise;
#endif
#ifndef __AsyncIIdentityAdvise_FWD_DEFINED__
#define __AsyncIIdentityAdvise_FWD_DEFINED__
typedef interface AsyncIIdentityAdvise AsyncIIdentityAdvise;
#endif
#ifndef __IIdentityProvider_FWD_DEFINED__
#define __IIdentityProvider_FWD_DEFINED__
typedef interface IIdentityProvider IIdentityProvider;
#endif
#ifndef __AsyncIIdentityProvider_FWD_DEFINED__
#define __AsyncIIdentityProvider_FWD_DEFINED__
typedef interface AsyncIIdentityProvider AsyncIIdentityProvider;
#endif
#ifndef __IAssociatedIdentityProvider_FWD_DEFINED__
#define __IAssociatedIdentityProvider_FWD_DEFINED__
typedef interface IAssociatedIdentityProvider IAssociatedIdentityProvider;
#endif
#ifndef __AsyncIAssociatedIdentityProvider_FWD_DEFINED__
#define __AsyncIAssociatedIdentityProvider_FWD_DEFINED__
typedef interface AsyncIAssociatedIdentityProvider AsyncIAssociatedIdentityProvider;
#endif
#include "oaidl.h"
#include "ocidl.h"
#include "propsys.h"
#include "IdentityCommon.h"
enum tag_IdentityUpdateEvent
{
	IDENTITY_ASSOCIATED = 0x1,
	IDENTITY_DISASSOCIATED = 0x2,
	IDENTITY_CREATED = 0x4,
	IDENTITY_IMPORTED = 0x8,
	IDENTITY_DELETED = 0x10,
	IDENTITY_PROPCHANGED = 0x20
};
#define      IDENTITY_KEYWORD_ASSOCIATED L"associated"
#define      IDENTITY_KEYWORD_LOCAL      L"local"
#define      IDENTITY_KEYWORD_HOMEGROUP  L"homegroup"
DEFINE_GUID(OID_OAssociatedIdentityProviderObject, 0x98c5a3dd, 0xdb68, 0x4f1a, 0x8d, 0x2b, 0x90, 0x79, 0xcd, 0xfe, 0xaf, 0x61);
extern RPC_IF_HANDLE __MIDL_itf_identityprovider_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_identityprovider_0000_0000_v0_0_s_ifspec;
#ifndef __IIdentityAdvise_INTERFACE_DEFINED__
#define __IIdentityAdvise_INTERFACE_DEFINED__
extern const IID IID_IIdentityAdvise;
typedef struct IIdentityAdviseVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IIdentityAdvise * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IIdentityAdvise * This);
	ULONG(STDMETHODCALLTYPE * Release) (IIdentityAdvise * This);
	HRESULT(STDMETHODCALLTYPE * IdentityUpdated) (IIdentityAdvise * This, DWORD dwIdentityUpdateEvents, LPCWSTR lpszUniqueID);
	END_INTERFACE
}  IIdentityAdviseVtbl;
interface IIdentityAdvise
{
	CONST_VTBL struct IIdentityAdviseVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IIdentityAdvise_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IIdentityAdvise_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IIdentityAdvise_Release(This)( (This)->lpVtbl -> Release(This) )
#define IIdentityAdvise_IdentityUpdated(This,dwIdentityUpdateEvents,lpszUniqueID)( (This)->lpVtbl -> IdentityUpdated(This,dwIdentityUpdateEvents,lpszUniqueID) )
#endif
#endif
#ifndef __AsyncIIdentityAdvise_INTERFACE_DEFINED__
#define __AsyncIIdentityAdvise_INTERFACE_DEFINED__
extern const IID IID_AsyncIIdentityAdvise;
typedef struct AsyncIIdentityAdviseVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (AsyncIIdentityAdvise * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (AsyncIIdentityAdvise * This);
	ULONG(STDMETHODCALLTYPE * Release) (AsyncIIdentityAdvise * This);
	HRESULT(STDMETHODCALLTYPE * Begin_IdentityUpdated) (AsyncIIdentityAdvise * This, DWORD dwIdentityUpdateEvents, LPCWSTR lpszUniqueID);
	HRESULT(STDMETHODCALLTYPE * Finish_IdentityUpdated) (AsyncIIdentityAdvise * This);
	END_INTERFACE
}  AsyncIIdentityAdviseVtbl;
interface AsyncIIdentityAdvise
{
	CONST_VTBL struct AsyncIIdentityAdviseVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define AsyncIIdentityAdvise_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define AsyncIIdentityAdvise_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define AsyncIIdentityAdvise_Release(This)( (This)->lpVtbl -> Release(This) )
#define AsyncIIdentityAdvise_Begin_IdentityUpdated(This,dwIdentityUpdateEvents,lpszUniqueID)( (This)->lpVtbl -> Begin_IdentityUpdated(This,dwIdentityUpdateEvents,lpszUniqueID) )
#define AsyncIIdentityAdvise_Finish_IdentityUpdated(This)( (This)->lpVtbl -> Finish_IdentityUpdated(This) )
#endif
#endif
#ifndef __IIdentityProvider_INTERFACE_DEFINED__
#define __IIdentityProvider_INTERFACE_DEFINED__
extern const IID IID_IIdentityProvider;
typedef struct IIdentityProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IIdentityProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IIdentityProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (IIdentityProvider * This);
	HRESULT(STDMETHODCALLTYPE * GetIdentityEnum) (IIdentityProvider * This, const IDENTITY_TYPE eIdentityType, const PROPERTYKEY * pFilterkey, const PROPVARIANT * pFilterPropVarValue, IEnumUnknown ** ppIdentityEnum);
	HRESULT(STDMETHODCALLTYPE * Create) (IIdentityProvider * This, LPCWSTR lpszUserName, IPropertyStore ** ppPropertyStore, const PROPVARIANT * pKeywordsToAdd);
	HRESULT(STDMETHODCALLTYPE * Import) (IIdentityProvider * This, IPropertyStore * pPropertyStore);
	HRESULT(STDMETHODCALLTYPE * Delete) (IIdentityProvider * This, LPCWSTR lpszUniqueID, const PROPVARIANT * pKeywordsToDelete);
	HRESULT(STDMETHODCALLTYPE * FindByUniqueID) (IIdentityProvider * This, LPCWSTR lpszUniqueID, IPropertyStore ** ppPropertyStore);
	HRESULT(STDMETHODCALLTYPE * GetProviderPropertyStore) (IIdentityProvider * This, IPropertyStore ** ppPropertyStore);
	HRESULT(STDMETHODCALLTYPE * Advise) (IIdentityProvider * This, IIdentityAdvise * pIdentityAdvise, DWORD dwIdentityUpdateEvents, DWORD * pdwCookie);
	HRESULT(STDMETHODCALLTYPE * UnAdvise) (IIdentityProvider * This, const DWORD dwCookie);
	END_INTERFACE
}  IIdentityProviderVtbl;
interface IIdentityProvider
{
	CONST_VTBL struct IIdentityProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IIdentityProvider_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IIdentityProvider_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IIdentityProvider_Release(This)( (This)->lpVtbl -> Release(This) )
#define IIdentityProvider_GetIdentityEnum(This,eIdentityType,pFilterkey,pFilterPropVarValue,ppIdentityEnum)( (This)->lpVtbl -> GetIdentityEnum(This,eIdentityType,pFilterkey,pFilterPropVarValue,ppIdentityEnum) )
#define IIdentityProvider_Create(This,lpszUserName,ppPropertyStore,pKeywordsToAdd)( (This)->lpVtbl -> Create(This,lpszUserName,ppPropertyStore,pKeywordsToAdd) )
#define IIdentityProvider_Import(This,pPropertyStore)( (This)->lpVtbl -> Import(This,pPropertyStore) )
#define IIdentityProvider_Delete(This,lpszUniqueID,pKeywordsToDelete)( (This)->lpVtbl -> Delete(This,lpszUniqueID,pKeywordsToDelete) )
#define IIdentityProvider_FindByUniqueID(This,lpszUniqueID,ppPropertyStore)( (This)->lpVtbl -> FindByUniqueID(This,lpszUniqueID,ppPropertyStore) )
#define IIdentityProvider_GetProviderPropertyStore(This,ppPropertyStore)( (This)->lpVtbl -> GetProviderPropertyStore(This,ppPropertyStore) )
#define IIdentityProvider_Advise(This,pIdentityAdvise,dwIdentityUpdateEvents,pdwCookie)( (This)->lpVtbl -> Advise(This,pIdentityAdvise,dwIdentityUpdateEvents,pdwCookie) )
#define IIdentityProvider_UnAdvise(This,dwCookie)( (This)->lpVtbl -> UnAdvise(This,dwCookie) )
#endif
#endif
#ifndef __AsyncIIdentityProvider_INTERFACE_DEFINED__
#define __AsyncIIdentityProvider_INTERFACE_DEFINED__
extern const IID IID_AsyncIIdentityProvider;
typedef struct AsyncIIdentityProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (AsyncIIdentityProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (AsyncIIdentityProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (AsyncIIdentityProvider * This);
	HRESULT(STDMETHODCALLTYPE * Begin_GetIdentityEnum) (AsyncIIdentityProvider * This, const IDENTITY_TYPE eIdentityType, const PROPERTYKEY * pFilterkey, const PROPVARIANT * pFilterPropVarValue);
	HRESULT(STDMETHODCALLTYPE * Finish_GetIdentityEnum) (AsyncIIdentityProvider * This, IEnumUnknown ** ppIdentityEnum);
	HRESULT(STDMETHODCALLTYPE * Begin_Create) (AsyncIIdentityProvider * This, LPCWSTR lpszUserName, const PROPVARIANT * pKeywordsToAdd);
	HRESULT(STDMETHODCALLTYPE * Finish_Create) (AsyncIIdentityProvider * This, IPropertyStore ** ppPropertyStore);
	HRESULT(STDMETHODCALLTYPE * Begin_Import) (AsyncIIdentityProvider * This, IPropertyStore * pPropertyStore);
	HRESULT(STDMETHODCALLTYPE * Finish_Import) (AsyncIIdentityProvider * This);
	HRESULT(STDMETHODCALLTYPE * Begin_Delete) (AsyncIIdentityProvider * This, LPCWSTR lpszUniqueID, const PROPVARIANT * pKeywordsToDelete);
	HRESULT(STDMETHODCALLTYPE * Finish_Delete) (AsyncIIdentityProvider * This);
	HRESULT(STDMETHODCALLTYPE * Begin_FindByUniqueID) (AsyncIIdentityProvider * This, LPCWSTR lpszUniqueID);
	HRESULT(STDMETHODCALLTYPE * Finish_FindByUniqueID) (AsyncIIdentityProvider * This, IPropertyStore ** ppPropertyStore);
	HRESULT(STDMETHODCALLTYPE * Begin_GetProviderPropertyStore) (AsyncIIdentityProvider * This);
	HRESULT(STDMETHODCALLTYPE * Finish_GetProviderPropertyStore) (AsyncIIdentityProvider * This, IPropertyStore ** ppPropertyStore);
	HRESULT(STDMETHODCALLTYPE * Begin_Advise) (AsyncIIdentityProvider * This, IIdentityAdvise * pIdentityAdvise, DWORD dwIdentityUpdateEvents);
	HRESULT(STDMETHODCALLTYPE * Finish_Advise) (AsyncIIdentityProvider * This, DWORD * pdwCookie);
	HRESULT(STDMETHODCALLTYPE * Begin_UnAdvise) (AsyncIIdentityProvider * This, const DWORD dwCookie);
	HRESULT(STDMETHODCALLTYPE * Finish_UnAdvise) (AsyncIIdentityProvider * This);
	END_INTERFACE
}  AsyncIIdentityProviderVtbl;
interface AsyncIIdentityProvider
{
	CONST_VTBL struct AsyncIIdentityProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define AsyncIIdentityProvider_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define AsyncIIdentityProvider_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define AsyncIIdentityProvider_Release(This)( (This)->lpVtbl -> Release(This) )
#define AsyncIIdentityProvider_Begin_GetIdentityEnum(This,eIdentityType,pFilterkey,pFilterPropVarValue)( (This)->lpVtbl -> Begin_GetIdentityEnum(This,eIdentityType,pFilterkey,pFilterPropVarValue) )
#define AsyncIIdentityProvider_Finish_GetIdentityEnum(This,ppIdentityEnum)( (This)->lpVtbl -> Finish_GetIdentityEnum(This,ppIdentityEnum) )
#define AsyncIIdentityProvider_Begin_Create(This,lpszUserName,pKeywordsToAdd)( (This)->lpVtbl -> Begin_Create(This,lpszUserName,pKeywordsToAdd) )
#define AsyncIIdentityProvider_Finish_Create(This,ppPropertyStore)( (This)->lpVtbl -> Finish_Create(This,ppPropertyStore) )
#define AsyncIIdentityProvider_Begin_Import(This,pPropertyStore)( (This)->lpVtbl -> Begin_Import(This,pPropertyStore) )
#define AsyncIIdentityProvider_Finish_Import(This)( (This)->lpVtbl -> Finish_Import(This) )
#define AsyncIIdentityProvider_Begin_Delete(This,lpszUniqueID,pKeywordsToDelete)( (This)->lpVtbl -> Begin_Delete(This,lpszUniqueID,pKeywordsToDelete) )
#define AsyncIIdentityProvider_Finish_Delete(This)( (This)->lpVtbl -> Finish_Delete(This) )
#define AsyncIIdentityProvider_Begin_FindByUniqueID(This,lpszUniqueID)( (This)->lpVtbl -> Begin_FindByUniqueID(This,lpszUniqueID) )
#define AsyncIIdentityProvider_Finish_FindByUniqueID(This,ppPropertyStore)( (This)->lpVtbl -> Finish_FindByUniqueID(This,ppPropertyStore) )
#define AsyncIIdentityProvider_Begin_GetProviderPropertyStore(This)( (This)->lpVtbl -> Begin_GetProviderPropertyStore(This) )
#define AsyncIIdentityProvider_Finish_GetProviderPropertyStore(This,ppPropertyStore)( (This)->lpVtbl -> Finish_GetProviderPropertyStore(This,ppPropertyStore) )
#define AsyncIIdentityProvider_Begin_Advise(This,pIdentityAdvise,dwIdentityUpdateEvents)( (This)->lpVtbl -> Begin_Advise(This,pIdentityAdvise,dwIdentityUpdateEvents) )
#define AsyncIIdentityProvider_Finish_Advise(This,pdwCookie)( (This)->lpVtbl -> Finish_Advise(This,pdwCookie) )
#define AsyncIIdentityProvider_Begin_UnAdvise(This,dwCookie)( (This)->lpVtbl -> Begin_UnAdvise(This,dwCookie) )
#define AsyncIIdentityProvider_Finish_UnAdvise(This)( (This)->lpVtbl -> Finish_UnAdvise(This) )
#endif
#endif
#ifndef __IAssociatedIdentityProvider_INTERFACE_DEFINED__
#define __IAssociatedIdentityProvider_INTERFACE_DEFINED__
extern const IID IID_IAssociatedIdentityProvider;
typedef struct IAssociatedIdentityProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAssociatedIdentityProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAssociatedIdentityProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAssociatedIdentityProvider * This);
	HRESULT(STDMETHODCALLTYPE * AssociateIdentity) (IAssociatedIdentityProvider * This, HWND hwndParent, IPropertyStore ** ppPropertyStore);
	HRESULT(STDMETHODCALLTYPE * DisassociateIdentity) (IAssociatedIdentityProvider * This, HWND hwndParent, LPCWSTR lpszUniqueID);
	HRESULT(STDMETHODCALLTYPE * ChangeCredential) (IAssociatedIdentityProvider * This, HWND hwndParent, LPCWSTR lpszUniqueID);
	END_INTERFACE
}  IAssociatedIdentityProviderVtbl;
interface IAssociatedIdentityProvider
{
	CONST_VTBL struct IAssociatedIdentityProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAssociatedIdentityProvider_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAssociatedIdentityProvider_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAssociatedIdentityProvider_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAssociatedIdentityProvider_AssociateIdentity(This,hwndParent,ppPropertyStore)( (This)->lpVtbl -> AssociateIdentity(This,hwndParent,ppPropertyStore) )
#define IAssociatedIdentityProvider_DisassociateIdentity(This,hwndParent,lpszUniqueID)( (This)->lpVtbl -> DisassociateIdentity(This,hwndParent,lpszUniqueID) )
#define IAssociatedIdentityProvider_ChangeCredential(This,hwndParent,lpszUniqueID)( (This)->lpVtbl -> ChangeCredential(This,hwndParent,lpszUniqueID) )
#endif
#endif
#ifndef __AsyncIAssociatedIdentityProvider_INTERFACE_DEFINED__
#define __AsyncIAssociatedIdentityProvider_INTERFACE_DEFINED__
extern const IID IID_AsyncIAssociatedIdentityProvider;
typedef struct AsyncIAssociatedIdentityProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (AsyncIAssociatedIdentityProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (AsyncIAssociatedIdentityProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (AsyncIAssociatedIdentityProvider * This);
	HRESULT(STDMETHODCALLTYPE * Begin_AssociateIdentity) (AsyncIAssociatedIdentityProvider * This, HWND hwndParent);
	HRESULT(STDMETHODCALLTYPE * Finish_AssociateIdentity) (AsyncIAssociatedIdentityProvider * This, IPropertyStore ** ppPropertyStore);
	HRESULT(STDMETHODCALLTYPE * Begin_DisassociateIdentity) (AsyncIAssociatedIdentityProvider * This, HWND hwndParent, LPCWSTR lpszUniqueID);
	HRESULT(STDMETHODCALLTYPE * Finish_DisassociateIdentity) (AsyncIAssociatedIdentityProvider * This);
	HRESULT(STDMETHODCALLTYPE * Begin_ChangeCredential) (AsyncIAssociatedIdentityProvider * This, HWND hwndParent, LPCWSTR lpszUniqueID);
	HRESULT(STDMETHODCALLTYPE * Finish_ChangeCredential) (AsyncIAssociatedIdentityProvider * This);
	END_INTERFACE
}  AsyncIAssociatedIdentityProviderVtbl;
interface AsyncIAssociatedIdentityProvider
{
	CONST_VTBL struct AsyncIAssociatedIdentityProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define AsyncIAssociatedIdentityProvider_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define AsyncIAssociatedIdentityProvider_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define AsyncIAssociatedIdentityProvider_Release(This)( (This)->lpVtbl -> Release(This) )
#define AsyncIAssociatedIdentityProvider_Begin_AssociateIdentity(This,hwndParent)( (This)->lpVtbl -> Begin_AssociateIdentity(This,hwndParent) )
#define AsyncIAssociatedIdentityProvider_Finish_AssociateIdentity(This,ppPropertyStore)( (This)->lpVtbl -> Finish_AssociateIdentity(This,ppPropertyStore) )
#define AsyncIAssociatedIdentityProvider_Begin_DisassociateIdentity(This,hwndParent,lpszUniqueID)( (This)->lpVtbl -> Begin_DisassociateIdentity(This,hwndParent,lpszUniqueID) )
#define AsyncIAssociatedIdentityProvider_Finish_DisassociateIdentity(This)( (This)->lpVtbl -> Finish_DisassociateIdentity(This) )
#define AsyncIAssociatedIdentityProvider_Begin_ChangeCredential(This,hwndParent,lpszUniqueID)( (This)->lpVtbl -> Begin_ChangeCredential(This,hwndParent,lpszUniqueID) )
#define AsyncIAssociatedIdentityProvider_Finish_ChangeCredential(This)( (This)->lpVtbl -> Finish_ChangeCredential(This) )
#endif
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER HWND_UserSize(unsigned long *, unsigned long, HWND *);
unsigned char *__RPC_USER HWND_UserMarshal(unsigned long *, unsigned char *, HWND *);
unsigned char *__RPC_USER HWND_UserUnmarshal(unsigned long *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree(unsigned long *, HWND *);
unsigned long __RPC_USER LPSAFEARRAY_UserSize(unsigned long *, unsigned long, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserMarshal(unsigned long *, unsigned char *, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserUnmarshal(unsigned long *, unsigned char *, LPSAFEARRAY *);
void __RPC_USER LPSAFEARRAY_UserFree(unsigned long *, LPSAFEARRAY *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
unsigned long __RPC_USER HWND_UserSize64(unsigned long *, unsigned long, HWND *);
unsigned char *__RPC_USER HWND_UserMarshal64(unsigned long *, unsigned char *, HWND *);
unsigned char *__RPC_USER HWND_UserUnmarshal64(unsigned long *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree64(unsigned long *, HWND *);
unsigned long __RPC_USER LPSAFEARRAY_UserSize64(unsigned long *, unsigned long, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserMarshal64(unsigned long *, unsigned char *, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserUnmarshal64(unsigned long *, unsigned char *, LPSAFEARRAY *);
void __RPC_USER LPSAFEARRAY_UserFree64(unsigned long *, LPSAFEARRAY *);
#endif
