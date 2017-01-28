/*+@@file@@----------------------------------------------------------------*//*!
 \file		tspubplugincom.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 13:02:14 2016
 \date		Modified on Sat Sep 17 13:02:14 2016
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
#ifndef __tspubplugincom_h__
#define __tspubplugincom_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ItsPubPlugin_FWD_DEFINED__
#define __ItsPubPlugin_FWD_DEFINED__
typedef interface ItsPubPlugin ItsPubPlugin;
#endif
#include <oaidl.h>
#include <ocidl.h>
#ifndef __ItsPubPlugin_INTERFACE_DEFINED__
#define __ItsPubPlugin_INTERFACE_DEFINED__
typedef struct __MIDL_ItsPubPlugin_0001
{
	WCHAR alias[256];
	WCHAR name[256];
	WCHAR *resourceFileContents;
	WCHAR fileExtension[24];
	WCHAR resourcePluginType[256];
	boolean isDiscoverable;
	long resourceType;
	unsigned long pceIconSize;
	byte *iconContents;
	unsigned long pcePluginBlobSize;
	byte *blobContents;
} pluginResource;
extern const IID IID_ItsPubPlugin;
typedef struct ItsPubPluginVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ItsPubPlugin * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ItsPubPlugin * This);
	ULONG(STDMETHODCALLTYPE * Release) (ItsPubPlugin * This);
	HRESULT(STDMETHODCALLTYPE * GetResourceList) (ItsPubPlugin * This, LPCWSTR userID, LONG * pceAppListSize, pluginResource ** resourceList);
	HRESULT(STDMETHODCALLTYPE * GetResource) (ItsPubPlugin * This, LPCWSTR alias, LONG flags, pluginResource * resource);
	HRESULT(STDMETHODCALLTYPE * GetCacheLastUpdateTime) (ItsPubPlugin * This, unsigned long long *lastUpdateTime);
	HRESULT(STDMETHODCALLTYPE * get_pluginName) (ItsPubPlugin * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_pluginVersion) (ItsPubPlugin * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * ResolveResource) (ItsPubPlugin * This, DWORD * resourceType, wchar_t resourceLocation[256], wchar_t endPointName[256], wchar_t * userID, wchar_t * alias);
	END_INTERFACE
}  ItsPubPluginVtbl;
interface ItsPubPlugin
{
	CONST_VTBL struct ItsPubPluginVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ItsPubPlugin_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ItsPubPlugin_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ItsPubPlugin_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ItsPubPlugin_GetResourceList(This,userID,pceAppListSize,resourceList) ( (This)->lpVtbl -> GetResourceList(This,userID,pceAppListSize,resourceList) )
#define ItsPubPlugin_GetResource(This,alias,flags,resource) ( (This)->lpVtbl -> GetResource(This,alias,flags,resource) )
#define ItsPubPlugin_GetCacheLastUpdateTime(This,lastUpdateTime) ( (This)->lpVtbl -> GetCacheLastUpdateTime(This,lastUpdateTime) )
#define ItsPubPlugin_get_pluginName(This,pVal) ( (This)->lpVtbl -> get_pluginName(This,pVal) )
#define ItsPubPlugin_get_pluginVersion(This,pVal) ( (This)->lpVtbl -> get_pluginVersion(This,pVal) )
#define ItsPubPlugin_ResolveResource(This,resourceType,resourceLocation,endPointName,userID,alias) ( (This)->lpVtbl -> ResolveResource(This,resourceType,resourceLocation,endPointName,userID,alias) )
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
