/*+@@file@@----------------------------------------------------------------*//*!
 \file		DataContainerVersion.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Tue Jul  5 13:54:15 2016
 \date		Modified on Tue Jul  5 13:54:15 2016
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
#ifndef __datacontainerversion_h__
#define __datacontainerversion_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWMSDataContainerVersion_FWD_DEFINED__
#define __IWMSDataContainerVersion_FWD_DEFINED__
typedef interface IWMSDataContainerVersion IWMSDataContainerVersion;
#endif
#include "objidl.h"
#if _MSC_VER > 1000
#pragma once
#endif
EXTERN_GUID(IID_IWMSDataContainerVersion, 0x3AE75C14, 0x2B3A, 0x11d2, 0x9E, 0xF7, 0x00, 0x60, 0x97, 0xD2, 0xD7, 0xCF);
typedef enum WMS_DATA_CONTAINER_VERSION_CACHE_FLAGS
{
	WMS_DATA_CONTAINER_VERSION_ALLOW_PROXY_CACHING = 0x1,
	WMS_DATA_CONTAINER_VERSION_ALLOW_PLAYER_CACHING = 0x2,
	WMS_DATA_CONTAINER_VERSION_ALLOW_STREAM_SPLITTING = 0x4
} WMS_DATA_CONTAINER_VERSION_CACHE_FLAGS;
extern RPC_IF_HANDLE __MIDL_itf_datacontainerversion_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_datacontainerversion_0000_0000_v0_0_s_ifspec;
#ifndef __IWMSDataContainerVersion_INTERFACE_DEFINED__
#define __IWMSDataContainerVersion_INTERFACE_DEFINED__
extern const IID IID_IWMSDataContainerVersion;
typedef struct IWMSDataContainerVersionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMSDataContainerVersion * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMSDataContainerVersion * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMSDataContainerVersion * This);
	HRESULT(STDMETHODCALLTYPE * GetLastModifiedTime) (IWMSDataContainerVersion * This, DATE * pdateLastModifiedTime);
	HRESULT(STDMETHODCALLTYPE * SetLastModifiedTime) (IWMSDataContainerVersion * This, DATE dateLastModifiedTime);
	HRESULT(STDMETHODCALLTYPE * GetExpirationTime) (IWMSDataContainerVersion * This, DATE * pdateExpirationTime);
	HRESULT(STDMETHODCALLTYPE * SetExpirationTime) (IWMSDataContainerVersion * This, DATE dateExpirationTime);
	HRESULT(STDMETHODCALLTYPE * GetCacheFlags) (IWMSDataContainerVersion * This, long *plFlags);
	HRESULT(STDMETHODCALLTYPE * SetCacheFlags) (IWMSDataContainerVersion * This, long lFlags);
	HRESULT(STDMETHODCALLTYPE * GetContentSize) (IWMSDataContainerVersion * This, long *plContentSizeLow, long *plContentSizeHigh);
	HRESULT(STDMETHODCALLTYPE * SetContentSize) (IWMSDataContainerVersion * This, long lContentSizeLow, long lContentSizeHigh);
	HRESULT(STDMETHODCALLTYPE * GetEntityTagCount) (IWMSDataContainerVersion * This, long *plNumEntityTags);
	HRESULT(STDMETHODCALLTYPE * GetEntityTag) (IWMSDataContainerVersion * This, long lTagNum, BSTR * pszEntityTag);
	HRESULT(STDMETHODCALLTYPE * SetEntityTag) (IWMSDataContainerVersion * This, BSTR szEntityTag);
	HRESULT(STDMETHODCALLTYPE * Compare) (IWMSDataContainerVersion * This, IWMSDataContainerVersion * pVersion, VARIANT_BOOL * pvfEqual);
	END_INTERFACE
}  IWMSDataContainerVersionVtbl;
interface IWMSDataContainerVersion
{
	CONST_VTBL struct IWMSDataContainerVersionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSDataContainerVersion_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSDataContainerVersion_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWMSDataContainerVersion_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWMSDataContainerVersion_GetLastModifiedTime(This,pdateLastModifiedTime)( (This)->lpVtbl -> GetLastModifiedTime(This,pdateLastModifiedTime) )
#define IWMSDataContainerVersion_SetLastModifiedTime(This,dateLastModifiedTime)( (This)->lpVtbl -> SetLastModifiedTime(This,dateLastModifiedTime) )
#define IWMSDataContainerVersion_GetExpirationTime(This,pdateExpirationTime)( (This)->lpVtbl -> GetExpirationTime(This,pdateExpirationTime) )
#define IWMSDataContainerVersion_SetExpirationTime(This,dateExpirationTime)( (This)->lpVtbl -> SetExpirationTime(This,dateExpirationTime) )
#define IWMSDataContainerVersion_GetCacheFlags(This,plFlags)( (This)->lpVtbl -> GetCacheFlags(This,plFlags) )
#define IWMSDataContainerVersion_SetCacheFlags(This,lFlags)( (This)->lpVtbl -> SetCacheFlags(This,lFlags) )
#define IWMSDataContainerVersion_GetContentSize(This,plContentSizeLow,plContentSizeHigh)( (This)->lpVtbl -> GetContentSize(This,plContentSizeLow,plContentSizeHigh) )
#define IWMSDataContainerVersion_SetContentSize(This,lContentSizeLow,lContentSizeHigh)( (This)->lpVtbl -> SetContentSize(This,lContentSizeLow,lContentSizeHigh) )
#define IWMSDataContainerVersion_GetEntityTagCount(This,plNumEntityTags)( (This)->lpVtbl -> GetEntityTagCount(This,plNumEntityTags) )
#define IWMSDataContainerVersion_GetEntityTag(This,lTagNum,pszEntityTag)( (This)->lpVtbl -> GetEntityTag(This,lTagNum,pszEntityTag) )
#define IWMSDataContainerVersion_SetEntityTag(This,szEntityTag)( (This)->lpVtbl -> SetEntityTag(This,szEntityTag) )
#define IWMSDataContainerVersion_Compare(This,pVersion,pvfEqual)( (This)->lpVtbl -> Compare(This,pVersion,pvfEqual) )
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
