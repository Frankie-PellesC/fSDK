/*+@@file@@----------------------------------------------------------------*//*!
 \file		streamcache.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 01:33:37 2016
 \date		Modified on Sat Sep 17 01:33:37 2016
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
#ifndef __streamcache_h__
#define __streamcache_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWMSCacheProxy_FWD_DEFINED__
#define __IWMSCacheProxy_FWD_DEFINED__
typedef interface IWMSCacheProxy IWMSCacheProxy;
#endif
#ifndef __IWMSCacheProxyCallback_FWD_DEFINED__
#define __IWMSCacheProxyCallback_FWD_DEFINED__
typedef interface IWMSCacheProxyCallback IWMSCacheProxyCallback;
#endif
#ifndef __IWMSCacheProxyServer_FWD_DEFINED__
#define __IWMSCacheProxyServer_FWD_DEFINED__
typedef interface IWMSCacheProxyServer IWMSCacheProxyServer;
#endif
#ifndef __IWMSCacheProxyServerCallback_FWD_DEFINED__
#define __IWMSCacheProxyServerCallback_FWD_DEFINED__
typedef interface IWMSCacheProxyServerCallback IWMSCacheProxyServerCallback;
#endif
#ifndef __IWMSCacheItemDescriptor_FWD_DEFINED__
#define __IWMSCacheItemDescriptor_FWD_DEFINED__
typedef interface IWMSCacheItemDescriptor IWMSCacheItemDescriptor;
#endif
#ifndef __IWMSCacheItemCollection_FWD_DEFINED__
#define __IWMSCacheItemCollection_FWD_DEFINED__
typedef interface IWMSCacheItemCollection IWMSCacheItemCollection;
#endif
#include <objidl.h>
#include <nsscore.h>
#include <DataContainerVersion.h>
#include <event.h>
#include <WMSProxy.h>
EXTERN_GUID(IID_IWMSCacheProxy, 0x2E34AB83, 0x0D3D, 0x11d2, 0x9E, 0xEE, 0x00, 0x60, 0x97, 0xD2, 0xD7, 0xCF);
EXTERN_GUID(IID_IWMSCacheProxyCallback, 0x2E34AB84, 0x0D3D, 0x11d2, 0x9E, 0xEE, 0x00, 0x60, 0x97, 0xD2, 0xD7, 0xCF);
EXTERN_GUID(IID_IWMSCacheProxyServer, 0x68F2A550, 0xD815, 0x11D2, 0xBE, 0xF6, 0x00, 0xA0, 0xC9, 0x5E, 0xC3, 0x43);
EXTERN_GUID(IID_IWMSCacheProxyServerCallback, 0x68F2A551, 0xD815, 0x11D2, 0xBE, 0xF6, 0x00, 0xA0, 0xC9, 0x5E, 0xC3, 0x43);
EXTERN_GUID(IID_IWMSCacheItemDescriptor, 0xC3CBA330, 0xAC05, 0x11D2, 0xBE, 0xF0, 0x00, 0xA0, 0xC9, 0x5E, 0xC3, 0x43);
EXTERN_GUID(IID_IWMSCacheItemCollection, 0xE6E05D80, 0xF45C, 0x11D2, 0xBE, 0xFE, 0x00, 0xA0, 0xC9, 0x5E, 0xC3, 0x43);
typedef enum WMS_CACHE_QUERY_MISS_RESPONSE
{
	WMS_CACHE_QUERY_MISS_SKIP = 0,
	WMS_CACHE_QUERY_MISS_DISCONNECT = (WMS_CACHE_QUERY_MISS_SKIP + 1),
	WMS_CACHE_QUERY_MISS_REDIRECT = (WMS_CACHE_QUERY_MISS_DISCONNECT + 1),
	WMS_CACHE_QUERY_MISS_REDIRECT_TO_PROXY = (WMS_CACHE_QUERY_MISS_REDIRECT + 1),
	WMS_CACHE_QUERY_MISS_PLAY_BROADCAST = (WMS_CACHE_QUERY_MISS_REDIRECT_TO_PROXY + 1),
	WMS_CACHE_QUERY_MISS_PLAY_ON_DEMAND = (WMS_CACHE_QUERY_MISS_PLAY_BROADCAST + 1),
	WMS_CACHE_QUERY_MISS_FORWARD_REQUEST = (WMS_CACHE_QUERY_MISS_PLAY_ON_DEMAND + 1),
	WMS_CACHE_QUERY_MISS_PROCESS_REQUEST = (WMS_CACHE_QUERY_MISS_FORWARD_REQUEST + 1)
} WMS_CACHE_QUERY_MISS_RESPONSE;
typedef enum WMS_CACHE_QUERY_RESPONSE
{
	WMS_CACHE_QUERY_HIT_PLAY_ON_DEMAND = 0,
	WMS_CACHE_QUERY_HIT_PLAY_BROADCAST = (WMS_CACHE_QUERY_HIT_PLAY_ON_DEMAND + 1),
	WMS_CACHE_QUERY_HIT_PROCESS_REQUEST = (WMS_CACHE_QUERY_HIT_PLAY_BROADCAST + 1),
	WMS_CACHE_QUERY_MISS = (WMS_CACHE_QUERY_HIT_PROCESS_REQUEST + 1)
} WMS_CACHE_QUERY_RESPONSE;
typedef enum WMS_CACHE_VERSION_COMPARE_RESPONSE
{
	WMS_CACHE_VERSION_FAIL_TO_CHECK_VERSION = 0,
	WMS_CACHE_VERSION_CACHE_STALE = (WMS_CACHE_VERSION_FAIL_TO_CHECK_VERSION + 1),
	WMS_CACHE_VERSION_CACHE_UP_TO_DATE = (WMS_CACHE_VERSION_CACHE_STALE + 1)
} WMS_CACHE_VERSION_COMPARE_RESPONSE;
typedef enum WMS_CACHE_CONTENT_TYPE_FLAGS
{
	WMS_CACHE_CONTENT_TYPE_BROADCAST = 0x1,
	WMS_CACHE_CONTENT_TYPE_PLAYLIST = 0x2
} WMS_CACHE_CONTENT_TYPE_FLAGS;
typedef enum WMS_CACHE_QUERY_TYPE_FLAGS
{
	WMS_CACHE_QUERY_OPEN = 0x1,
	WMS_CACHE_QUERY_GET_CONTENT_INFO = 0x2,
	WMS_CACHE_QUERY_CACHE_EVENT = 0x4,
	WMS_CACHE_QUERY_REVERSE_PROXY = 0x8,
	WMS_CACHE_QUERY_LOCAL_EVENT = 0x10
} WMS_CACHE_QUERY_TYPE_FLAGS;
typedef enum WMS_CACHE_CONTENT_DOWNLOAD_FLAGS
{
	WMS_CONTENT_DOWNLOAD_ABORT_IF_BCAST = 0x1
} WMS_CACHE_CONTENT_DOWNLOAD_FLAGS;
typedef enum WMS_CACHE_REMOTE_EVENT_FLAGS
{
	WMS_CACHE_REMOTE_OPEN = 0x1,
	WMS_CACHE_REMOTE_CLOSE = 0x2,
	WMS_CACHE_REMOTE_LOG = 0x4
} WMS_CACHE_REMOTE_EVENT_FLAGS;
extern RPC_IF_HANDLE __MIDL_itf_streamcache_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_streamcache_0000_0000_v0_0_s_ifspec;
#ifndef __IWMSCacheProxy_INTERFACE_DEFINED__
#define __IWMSCacheProxy_INTERFACE_DEFINED__
extern const IID IID_IWMSCacheProxy;
typedef struct IWMSCacheProxyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMSCacheProxy * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMSCacheProxy * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMSCacheProxy * This);
	HRESULT(STDMETHODCALLTYPE * QueryCache) (IWMSCacheProxy * This, BSTR bstrOriginUrl, IWMSContext * pUserContext, IWMSCommandContext * pCommandContext, IWMSContext * pPresentationContext, long lQueryType, IWMSCacheProxyCallback * pCallback, VARIANT varContext);
	HRESULT(STDMETHODCALLTYPE * QueryCacheMissPolicy) (IWMSCacheProxy * This, BSTR bstrOriginUrl, IWMSContext * pUserContext, IWMSCommandContext * pCommandContext, IWMSContext * pPresentationContext, IUnknown * pCachePluginContext, long lQueryType, IWMSCacheProxyCallback * pCallback, VARIANT varContext);
	HRESULT(STDMETHODCALLTYPE * RemoveCacheItem) (IWMSCacheProxy * This, BSTR bstrOriginUrl, IWMSCacheProxyCallback * pCallback, VARIANT varContext);
	HRESULT(STDMETHODCALLTYPE * RemoveAllCacheItems) (IWMSCacheProxy * This, IWMSCacheProxyCallback * pCallback, VARIANT varContext);
	HRESULT(STDMETHODCALLTYPE * AddCacheItem) (IWMSCacheProxy * This, BSTR bstrOriginUrl, BSTR bstrPrestuffUrl, long lExpiration, long lBandwidth, long lRemoteEventFlags, IWMSCacheProxyCallback * pCallback, VARIANT varContext);
	HRESULT(STDMETHODCALLTYPE * QuerySpaceForCacheItem) (IWMSCacheProxy * This, long lContentSizeLow, long lContentSizeHigh, VARIANT_BOOL * pvarfSpaceAvail);
	HRESULT(STDMETHODCALLTYPE * FindCacheItem) (IWMSCacheProxy * This, BSTR bstrOriginUrl, IWMSCacheItemDescriptor ** ppCacheItemDescriptor);
	HRESULT(STDMETHODCALLTYPE * CreateCacheItemCollection) (IWMSCacheProxy * This, IWMSCacheItemCollection ** ppCacheItemCollection);
	HRESULT(STDMETHODCALLTYPE * OnCacheClientClose) (IWMSCacheProxy * This, HRESULT resultHr, IWMSContext * pUserContext, IWMSContext * pPresentationContext);
	END_INTERFACE
}  IWMSCacheProxyVtbl;
interface IWMSCacheProxy
{
	CONST_VTBL struct IWMSCacheProxyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSCacheProxy_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSCacheProxy_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSCacheProxy_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSCacheProxy_QueryCache(This,bstrOriginUrl,pUserContext,pCommandContext,pPresentationContext,lQueryType,pCallback,varContext) ( (This)->lpVtbl -> QueryCache(This,bstrOriginUrl,pUserContext,pCommandContext,pPresentationContext,lQueryType,pCallback,varContext) )
#define IWMSCacheProxy_QueryCacheMissPolicy(This,bstrOriginUrl,pUserContext,pCommandContext,pPresentationContext,pCachePluginContext,lQueryType,pCallback,varContext) ( (This)->lpVtbl -> QueryCacheMissPolicy(This,bstrOriginUrl,pUserContext,pCommandContext,pPresentationContext,pCachePluginContext,lQueryType,pCallback,varContext) )
#define IWMSCacheProxy_RemoveCacheItem(This,bstrOriginUrl,pCallback,varContext) ( (This)->lpVtbl -> RemoveCacheItem(This,bstrOriginUrl,pCallback,varContext) )
#define IWMSCacheProxy_RemoveAllCacheItems(This,pCallback,varContext) ( (This)->lpVtbl -> RemoveAllCacheItems(This,pCallback,varContext) )
#define IWMSCacheProxy_AddCacheItem(This,bstrOriginUrl,bstrPrestuffUrl,lExpiration,lBandwidth,lRemoteEventFlags,pCallback,varContext) ( (This)->lpVtbl -> AddCacheItem(This,bstrOriginUrl,bstrPrestuffUrl,lExpiration,lBandwidth,lRemoteEventFlags,pCallback,varContext) )
#define IWMSCacheProxy_QuerySpaceForCacheItem(This,lContentSizeLow,lContentSizeHigh,pvarfSpaceAvail) ( (This)->lpVtbl -> QuerySpaceForCacheItem(This,lContentSizeLow,lContentSizeHigh,pvarfSpaceAvail) )
#define IWMSCacheProxy_FindCacheItem(This,bstrOriginUrl,ppCacheItemDescriptor) ( (This)->lpVtbl -> FindCacheItem(This,bstrOriginUrl,ppCacheItemDescriptor) )
#define IWMSCacheProxy_CreateCacheItemCollection(This,ppCacheItemCollection) ( (This)->lpVtbl -> CreateCacheItemCollection(This,ppCacheItemCollection) )
#define IWMSCacheProxy_OnCacheClientClose(This,resultHr,pUserContext,pPresentationContext) ( (This)->lpVtbl -> OnCacheClientClose(This,resultHr,pUserContext,pPresentationContext) )
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_streamcache_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_streamcache_0000_0001_v0_0_s_ifspec;
#ifndef __IWMSCacheProxyCallback_INTERFACE_DEFINED__
#define __IWMSCacheProxyCallback_INTERFACE_DEFINED__
extern const IID IID_IWMSCacheProxyCallback;
typedef struct IWMSCacheProxyCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMSCacheProxyCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMSCacheProxyCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMSCacheProxyCallback * This);
	HRESULT(STDMETHODCALLTYPE * OnQueryCache) (IWMSCacheProxyCallback * This, long lHr, WMS_CACHE_QUERY_RESPONSE Response, BSTR bstrCacheUrl, IWMSContext * pContentInfo, IUnknown * pCachePluginContext, VARIANT varContext);
	HRESULT(STDMETHODCALLTYPE * OnQueryCacheMissPolicy) (IWMSCacheProxyCallback * This, long lHr, WMS_CACHE_QUERY_MISS_RESPONSE CacheMissPolicy, BSTR bstrUrl, IWMSProxyContext * pProxyContext, IWMSContext * pContentInfo, VARIANT varContext);
	HRESULT(STDMETHODCALLTYPE * OnRemoveCacheItem) (IWMSCacheProxyCallback * This, long lHr, VARIANT varContext);
	HRESULT(STDMETHODCALLTYPE * OnRemoveAllCacheItems) (IWMSCacheProxyCallback * This, long lHr, VARIANT varContext);
	HRESULT(STDMETHODCALLTYPE * OnAddCacheItem) (IWMSCacheProxyCallback * This, long lHr, IWMSCacheItemDescriptor * pCacheItemDescriptor, VARIANT varServerContext);
	END_INTERFACE
}  IWMSCacheProxyCallbackVtbl;
interface IWMSCacheProxyCallback
{
	CONST_VTBL struct IWMSCacheProxyCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSCacheProxyCallback_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSCacheProxyCallback_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSCacheProxyCallback_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSCacheProxyCallback_OnQueryCache(This,lHr,Response,bstrCacheUrl,pContentInfo,pCachePluginContext,varContext) ( (This)->lpVtbl -> OnQueryCache(This,lHr,Response,bstrCacheUrl,pContentInfo,pCachePluginContext,varContext) )
#define IWMSCacheProxyCallback_OnQueryCacheMissPolicy(This,lHr,CacheMissPolicy,bstrUrl,pProxyContext,pContentInfo,varContext) ( (This)->lpVtbl -> OnQueryCacheMissPolicy(This,lHr,CacheMissPolicy,bstrUrl,pProxyContext,pContentInfo,varContext) )
#define IWMSCacheProxyCallback_OnRemoveCacheItem(This,lHr,varContext) ( (This)->lpVtbl -> OnRemoveCacheItem(This,lHr,varContext) )
#define IWMSCacheProxyCallback_OnRemoveAllCacheItems(This,lHr,varContext) ( (This)->lpVtbl -> OnRemoveAllCacheItems(This,lHr,varContext) )
#define IWMSCacheProxyCallback_OnAddCacheItem(This,lHr,pCacheItemDescriptor,varServerContext) ( (This)->lpVtbl -> OnAddCacheItem(This,lHr,pCacheItemDescriptor,varServerContext) )
#endif
#endif
#ifndef __IWMSCacheProxyServer_INTERFACE_DEFINED__
#define __IWMSCacheProxyServer_INTERFACE_DEFINED__
extern const IID IID_IWMSCacheProxyServer;
typedef struct IWMSCacheProxyServerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMSCacheProxyServer * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMSCacheProxyServer * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMSCacheProxyServer * This);
	HRESULT(STDMETHODCALLTYPE * GetContentInformation) (IWMSCacheProxyServer * This, BSTR bstrOriginUrl, IWMSContext * pPresentationContext, IWMSCacheProxy * pICacheProxy, IWMSProxyContext * pIProxyContext, IWMSCacheProxyServerCallback * pCallback, VARIANT varContext);
	HRESULT(STDMETHODCALLTYPE * CompareContentInformation) (IWMSCacheProxyServer * This, BSTR bstrOriginUrl, IWMSContext * pContentInfo, IWMSContext * pPresentationContext, IWMSCacheProxy * pICacheProxy, IWMSProxyContext * pIProxyContext, IWMSCacheProxyServerCallback * pCallback, VARIANT varContext);
	HRESULT(STDMETHODCALLTYPE * DownloadContent) (IWMSCacheProxyServer * This, BSTR bstrOriginUrl, BSTR bstrCacheUrl, long lBandwidth, long lQuotaLow, long lQuotaHigh, long lBitFlags, IWMSCacheProxy * pICacheProxy, IWMSProxyContext * pIProxyContext, IWMSCacheProxyServerCallback * pCallback, VARIANT varContext);
	HRESULT(STDMETHODCALLTYPE * CancelDownloadContent) (IWMSCacheProxyServer * This, IWMSContext * pArchiveContext, IWMSCacheProxyServerCallback * pCallback, VARIANT varContext);
	END_INTERFACE
}  IWMSCacheProxyServerVtbl;
interface IWMSCacheProxyServer
{
	CONST_VTBL struct IWMSCacheProxyServerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSCacheProxyServer_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSCacheProxyServer_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSCacheProxyServer_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSCacheProxyServer_GetContentInformation(This,bstrOriginUrl,pPresentationContext,pICacheProxy,pIProxyContext,pCallback,varContext) ( (This)->lpVtbl -> GetContentInformation(This,bstrOriginUrl,pPresentationContext,pICacheProxy,pIProxyContext,pCallback,varContext) )
#define IWMSCacheProxyServer_CompareContentInformation(This,bstrOriginUrl,pContentInfo,pPresentationContext,pICacheProxy,pIProxyContext,pCallback,varContext) ( (This)->lpVtbl -> CompareContentInformation(This,bstrOriginUrl,pContentInfo,pPresentationContext,pICacheProxy,pIProxyContext,pCallback,varContext) )
#define IWMSCacheProxyServer_DownloadContent(This,bstrOriginUrl,bstrCacheUrl,lBandwidth,lQuotaLow,lQuotaHigh,lBitFlags,pICacheProxy,pIProxyContext,pCallback,varContext) ( (This)->lpVtbl -> DownloadContent(This,bstrOriginUrl,bstrCacheUrl,lBandwidth,lQuotaLow,lQuotaHigh,lBitFlags,pICacheProxy,pIProxyContext,pCallback,varContext) )
#define IWMSCacheProxyServer_CancelDownloadContent(This,pArchiveContext,pCallback,varContext) ( (This)->lpVtbl -> CancelDownloadContent(This,pArchiveContext,pCallback,varContext) )
#endif
#endif
#ifndef __IWMSCacheProxyServerCallback_INTERFACE_DEFINED__
#define __IWMSCacheProxyServerCallback_INTERFACE_DEFINED__
extern const IID IID_IWMSCacheProxyServerCallback;
typedef struct IWMSCacheProxyServerCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMSCacheProxyServerCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMSCacheProxyServerCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMSCacheProxyServerCallback * This);
	HRESULT(STDMETHODCALLTYPE * OnGetContentInformation) (IWMSCacheProxyServerCallback * This, long lHr, IWMSContext * pContentInfo, VARIANT varContext);
	HRESULT(STDMETHODCALLTYPE * OnCompareContentInformation) (IWMSCacheProxyServerCallback * This, long lHr, WMS_CACHE_VERSION_COMPARE_RESPONSE CompareResponse, IWMSContext * pNewContentInfo, VARIANT varContext);
	HRESULT(STDMETHODCALLTYPE * OnDownloadContentProgress) (IWMSCacheProxyServerCallback * This, long lHr, WMS_RECORD_PROGRESS_OPCODE opCode, IWMSContext * pArchiveContext, VARIANT varContext);
	HRESULT(STDMETHODCALLTYPE * OnDownloadContentFinished) (IWMSCacheProxyServerCallback * This, long lHr, SAFEARRAY * psaArchiveContexts, VARIANT varContext);
	HRESULT(STDMETHODCALLTYPE * OnCancelDownloadContent) (IWMSCacheProxyServerCallback * This, long lHr, VARIANT varContext);
	END_INTERFACE
}  IWMSCacheProxyServerCallbackVtbl;
interface IWMSCacheProxyServerCallback
{
	CONST_VTBL struct IWMSCacheProxyServerCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSCacheProxyServerCallback_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSCacheProxyServerCallback_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSCacheProxyServerCallback_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSCacheProxyServerCallback_OnGetContentInformation(This,lHr,pContentInfo,varContext) ( (This)->lpVtbl -> OnGetContentInformation(This,lHr,pContentInfo,varContext) )
#define IWMSCacheProxyServerCallback_OnCompareContentInformation(This,lHr,CompareResponse,pNewContentInfo,varContext) ( (This)->lpVtbl -> OnCompareContentInformation(This,lHr,CompareResponse,pNewContentInfo,varContext) )
#define IWMSCacheProxyServerCallback_OnDownloadContentProgress(This,lHr,opCode,pArchiveContext,varContext) ( (This)->lpVtbl -> OnDownloadContentProgress(This,lHr,opCode,pArchiveContext,varContext) )
#define IWMSCacheProxyServerCallback_OnDownloadContentFinished(This,lHr,psaArchiveContexts,varContext) ( (This)->lpVtbl -> OnDownloadContentFinished(This,lHr,psaArchiveContexts,varContext) )
#define IWMSCacheProxyServerCallback_OnCancelDownloadContent(This,lHr,varContext) ( (This)->lpVtbl -> OnCancelDownloadContent(This,lHr,varContext) )
#endif
#endif
#ifndef __IWMSCacheItemDescriptor_INTERFACE_DEFINED__
#define __IWMSCacheItemDescriptor_INTERFACE_DEFINED__
extern const IID IID_IWMSCacheItemDescriptor;
typedef struct IWMSCacheItemDescriptorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMSCacheItemDescriptor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMSCacheItemDescriptor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMSCacheItemDescriptor * This);
	HRESULT(STDMETHODCALLTYPE * GetOriginUrl) (IWMSCacheItemDescriptor * This, BSTR * pbstrOriginUrl);
	HRESULT(STDMETHODCALLTYPE * GetCacheUrl) (IWMSCacheItemDescriptor * This, BSTR * pbstrCacheUrl);
	HRESULT(STDMETHODCALLTYPE * GetContentInformation) (IWMSCacheItemDescriptor * This, IWMSContext ** ppContentInfo);
	HRESULT(STDMETHODCALLTYPE * GetContentSize) (IWMSCacheItemDescriptor * This, long *plContentSizeLow, long *plContentSizeHigh);
	END_INTERFACE
}  IWMSCacheItemDescriptorVtbl;
interface IWMSCacheItemDescriptor
{
	CONST_VTBL struct IWMSCacheItemDescriptorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSCacheItemDescriptor_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSCacheItemDescriptor_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSCacheItemDescriptor_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSCacheItemDescriptor_GetOriginUrl(This,pbstrOriginUrl) ( (This)->lpVtbl -> GetOriginUrl(This,pbstrOriginUrl) )
#define IWMSCacheItemDescriptor_GetCacheUrl(This,pbstrCacheUrl) ( (This)->lpVtbl -> GetCacheUrl(This,pbstrCacheUrl) )
#define IWMSCacheItemDescriptor_GetContentInformation(This,ppContentInfo) ( (This)->lpVtbl -> GetContentInformation(This,ppContentInfo) )
#define IWMSCacheItemDescriptor_GetContentSize(This,plContentSizeLow,plContentSizeHigh) ( (This)->lpVtbl -> GetContentSize(This,plContentSizeLow,plContentSizeHigh) )
#endif
#endif
#ifndef __IWMSCacheItemCollection_INTERFACE_DEFINED__
#define __IWMSCacheItemCollection_INTERFACE_DEFINED__
extern const IID IID_IWMSCacheItemCollection;
typedef struct IWMSCacheItemCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMSCacheItemCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMSCacheItemCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMSCacheItemCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetCount) (IWMSCacheItemCollection * This, long *plNumCacheItemDescriptors);
	HRESULT(STDMETHODCALLTYPE * GetItem) (IWMSCacheItemCollection * This, long lIndex, IWMSCacheItemDescriptor ** ppCacheItemDescriptor);
	END_INTERFACE
}  IWMSCacheItemCollectionVtbl;
interface IWMSCacheItemCollection
{
	CONST_VTBL struct IWMSCacheItemCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSCacheItemCollection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSCacheItemCollection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSCacheItemCollection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSCacheItemCollection_GetCount(This,plNumCacheItemDescriptors) ( (This)->lpVtbl -> GetCount(This,plNumCacheItemDescriptors) )
#define IWMSCacheItemCollection_GetItem(This,lIndex,ppCacheItemDescriptor) ( (This)->lpVtbl -> GetItem(This,lIndex,ppCacheItemDescriptor) )
#endif
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER LPSAFEARRAY_UserSize(unsigned long *, unsigned long, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserMarshal(unsigned long *, unsigned char *, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserUnmarshal(unsigned long *, unsigned char *, LPSAFEARRAY *);
void __RPC_USER LPSAFEARRAY_UserFree(unsigned long *, LPSAFEARRAY *);
unsigned long __RPC_USER VARIANT_UserSize(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree(unsigned long *, VARIANT *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
unsigned long __RPC_USER LPSAFEARRAY_UserSize64(unsigned long *, unsigned long, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserMarshal64(unsigned long *, unsigned char *, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserUnmarshal64(unsigned long *, unsigned char *, LPSAFEARRAY *);
void __RPC_USER LPSAFEARRAY_UserFree64(unsigned long *, LPSAFEARRAY *);
unsigned long __RPC_USER VARIANT_UserSize64(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal64(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree64(unsigned long *, VARIANT *);
#endif
