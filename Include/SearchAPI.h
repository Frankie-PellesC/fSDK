/*+@@file@@----------------------------------------------------------------*//*!
 \file		SearchAPI.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Sep 16 22:58:39 2016
 \date		Modified on Fri Sep 16 22:58:39 2016
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
#ifndef __searchapi_h__
#define __searchapi_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IUrlAccessor_FWD_DEFINED__
#define __IUrlAccessor_FWD_DEFINED__
typedef interface IUrlAccessor IUrlAccessor;
#endif
#ifndef __IUrlAccessor2_FWD_DEFINED__
#define __IUrlAccessor2_FWD_DEFINED__
typedef interface IUrlAccessor2 IUrlAccessor2;
#endif
#ifndef __IUrlAccessor3_FWD_DEFINED__
#define __IUrlAccessor3_FWD_DEFINED__
typedef interface IUrlAccessor3 IUrlAccessor3;
#endif
#ifndef __IUrlAccessor4_FWD_DEFINED__
#define __IUrlAccessor4_FWD_DEFINED__
typedef interface IUrlAccessor4 IUrlAccessor4;
#endif
#ifndef __IOpLockStatus_FWD_DEFINED__
#define __IOpLockStatus_FWD_DEFINED__
typedef interface IOpLockStatus IOpLockStatus;
#endif
#ifndef __ISearchProtocolThreadContext_FWD_DEFINED__
#define __ISearchProtocolThreadContext_FWD_DEFINED__
typedef interface ISearchProtocolThreadContext ISearchProtocolThreadContext;
#endif
#ifndef __ISearchProtocol_FWD_DEFINED__
#define __ISearchProtocol_FWD_DEFINED__
typedef interface ISearchProtocol ISearchProtocol;
#endif
#ifndef __ISearchProtocol2_FWD_DEFINED__
#define __ISearchProtocol2_FWD_DEFINED__
typedef interface ISearchProtocol2 ISearchProtocol2;
#endif
#ifndef __IProtocolHandlerSite_FWD_DEFINED__
#define __IProtocolHandlerSite_FWD_DEFINED__
typedef interface IProtocolHandlerSite IProtocolHandlerSite;
#endif
#ifndef __ISearchRoot_FWD_DEFINED__
#define __ISearchRoot_FWD_DEFINED__
typedef interface ISearchRoot ISearchRoot;
#endif
#ifndef __IEnumSearchRoots_FWD_DEFINED__
#define __IEnumSearchRoots_FWD_DEFINED__
typedef interface IEnumSearchRoots IEnumSearchRoots;
#endif
#ifndef __ISearchScopeRule_FWD_DEFINED__
#define __ISearchScopeRule_FWD_DEFINED__
typedef interface ISearchScopeRule ISearchScopeRule;
#endif
#ifndef __IEnumSearchScopeRules_FWD_DEFINED__
#define __IEnumSearchScopeRules_FWD_DEFINED__
typedef interface IEnumSearchScopeRules IEnumSearchScopeRules;
#endif
#ifndef __ISearchCrawlScopeManager_FWD_DEFINED__
#define __ISearchCrawlScopeManager_FWD_DEFINED__
typedef interface ISearchCrawlScopeManager ISearchCrawlScopeManager;
#endif
#ifndef __ISearchCrawlScopeManager2_FWD_DEFINED__
#define __ISearchCrawlScopeManager2_FWD_DEFINED__
typedef interface ISearchCrawlScopeManager2 ISearchCrawlScopeManager2;
#endif
#ifndef __ISearchItemsChangedSink_FWD_DEFINED__
#define __ISearchItemsChangedSink_FWD_DEFINED__
typedef interface ISearchItemsChangedSink ISearchItemsChangedSink;
#endif
#ifndef __ISearchPersistentItemsChangedSink_FWD_DEFINED__
#define __ISearchPersistentItemsChangedSink_FWD_DEFINED__
typedef interface ISearchPersistentItemsChangedSink ISearchPersistentItemsChangedSink;
#endif
#ifndef __ISearchViewChangedSink_FWD_DEFINED__
#define __ISearchViewChangedSink_FWD_DEFINED__
typedef interface ISearchViewChangedSink ISearchViewChangedSink;
#endif
#ifndef __IGatherNotifyInline_FWD_DEFINED__
#define __IGatherNotifyInline_FWD_DEFINED__
typedef interface IGatherNotifyInline IGatherNotifyInline;
#endif
#ifndef __ISearchNotifyInlineSite_FWD_DEFINED__
#define __ISearchNotifyInlineSite_FWD_DEFINED__
typedef interface ISearchNotifyInlineSite ISearchNotifyInlineSite;
#endif
#ifndef __IGatherNotifyInlineInternal_FWD_DEFINED__
#define __IGatherNotifyInlineInternal_FWD_DEFINED__
typedef interface IGatherNotifyInlineInternal IGatherNotifyInlineInternal;
#endif
#ifndef __IGatherInlineStatus_FWD_DEFINED__
#define __IGatherInlineStatus_FWD_DEFINED__
typedef interface IGatherInlineStatus IGatherInlineStatus;
#endif
#ifndef __ISearchCatalogManager_FWD_DEFINED__
#define __ISearchCatalogManager_FWD_DEFINED__
typedef interface ISearchCatalogManager ISearchCatalogManager;
#endif
#ifndef __ISearchCatalogManager2_FWD_DEFINED__
#define __ISearchCatalogManager2_FWD_DEFINED__
typedef interface ISearchCatalogManager2 ISearchCatalogManager2;
#endif
#ifndef __ISearchQueryHelper_FWD_DEFINED__
#define __ISearchQueryHelper_FWD_DEFINED__
typedef interface ISearchQueryHelper ISearchQueryHelper;
#endif
#ifndef __IRowsetPrioritization_FWD_DEFINED__
#define __IRowsetPrioritization_FWD_DEFINED__
typedef interface IRowsetPrioritization IRowsetPrioritization;
#endif
#ifndef __IRowsetEvents_FWD_DEFINED__
#define __IRowsetEvents_FWD_DEFINED__
typedef interface IRowsetEvents IRowsetEvents;
#endif
#ifndef __ISearchManager_FWD_DEFINED__
#define __ISearchManager_FWD_DEFINED__
typedef interface ISearchManager ISearchManager;
#endif
#ifndef __ISearchLanguageSupport_FWD_DEFINED__
#define __ISearchLanguageSupport_FWD_DEFINED__
typedef interface ISearchLanguageSupport ISearchLanguageSupport;
#endif
#ifndef __ISearchCatalogManager_FWD_DEFINED__
#define __ISearchCatalogManager_FWD_DEFINED__
typedef interface ISearchCatalogManager ISearchCatalogManager;
#endif
#ifndef __ISearchCatalogManager2_FWD_DEFINED__
#define __ISearchCatalogManager2_FWD_DEFINED__
typedef interface ISearchCatalogManager2 ISearchCatalogManager2;
#endif
#ifndef __ISearchQueryHelper_FWD_DEFINED__
#define __ISearchQueryHelper_FWD_DEFINED__
typedef interface ISearchQueryHelper ISearchQueryHelper;
#endif
#ifndef __ISearchItemsChangedSink_FWD_DEFINED__
#define __ISearchItemsChangedSink_FWD_DEFINED__
typedef interface ISearchItemsChangedSink ISearchItemsChangedSink;
#endif
#ifndef __ISearchCrawlScopeManager_FWD_DEFINED__
#define __ISearchCrawlScopeManager_FWD_DEFINED__
typedef interface ISearchCrawlScopeManager ISearchCrawlScopeManager;
#endif
#ifndef __IEnumSearchScopeRules_FWD_DEFINED__
#define __IEnumSearchScopeRules_FWD_DEFINED__
typedef interface IEnumSearchScopeRules IEnumSearchScopeRules;
#endif
#ifndef __CSearchManager_FWD_DEFINED__
#define __CSearchManager_FWD_DEFINED__
typedef struct CSearchManager CSearchManager;
#endif
#ifndef __CSearchRoot_FWD_DEFINED__
#define __CSearchRoot_FWD_DEFINED__
typedef struct CSearchRoot CSearchRoot;
#endif
#ifndef __CSearchScopeRule_FWD_DEFINED__
#define __CSearchScopeRule_FWD_DEFINED__
typedef struct CSearchScopeRule CSearchScopeRule;
#endif
#ifndef __FilterRegistration_FWD_DEFINED__
#define __FilterRegistration_FWD_DEFINED__
typedef struct FilterRegistration FilterRegistration;
#endif
#include "unknwn.h"
#include "objidl.h"
#include "ocidl.h"
#include "propidl.h"
#include "filter.h"
#include "filtereg.h"
#include "propsys.h"
#include "oledb.h"
#include "StructuredQuery.h"
typedef LONG ITEMID;
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0000_v0_0_s_ifspec;
#ifndef __IUrlAccessor_INTERFACE_DEFINED__
#define __IUrlAccessor_INTERFACE_DEFINED__
extern const IID IID_IUrlAccessor;
typedef struct IUrlAccessorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUrlAccessor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUrlAccessor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUrlAccessor * This);
	HRESULT(STDMETHODCALLTYPE * AddRequestParameter) (IUrlAccessor * This, PROPSPEC * pSpec, PROPVARIANT * pVar);
	HRESULT(STDMETHODCALLTYPE * GetDocFormat) (IUrlAccessor * This, WCHAR wszDocFormat[], DWORD dwSize, DWORD * pdwLength);
	HRESULT(STDMETHODCALLTYPE * GetCLSID) (IUrlAccessor * This, CLSID * pClsid);
	HRESULT(STDMETHODCALLTYPE * GetHost) (IUrlAccessor * This, WCHAR wszHost[], DWORD dwSize, DWORD * pdwLength);
	HRESULT(STDMETHODCALLTYPE * IsDirectory) (IUrlAccessor * This);
	HRESULT(STDMETHODCALLTYPE * GetSize) (IUrlAccessor * This, ULONGLONG * pllSize);
	HRESULT(STDMETHODCALLTYPE * GetLastModified) (IUrlAccessor * This, FILETIME * pftLastModified);
	HRESULT(STDMETHODCALLTYPE * GetFileName) (IUrlAccessor * This, WCHAR wszFileName[], DWORD dwSize, DWORD * pdwLength);
	HRESULT(STDMETHODCALLTYPE * GetSecurityDescriptor) (IUrlAccessor * This, BYTE * pSD, DWORD dwSize, DWORD * pdwLength);
	HRESULT(STDMETHODCALLTYPE * GetRedirectedURL) (IUrlAccessor * This, WCHAR wszRedirectedURL[], DWORD dwSize, DWORD * pdwLength);
	HRESULT(STDMETHODCALLTYPE * GetSecurityProvider) (IUrlAccessor * This, CLSID * pSPClsid);
	HRESULT(STDMETHODCALLTYPE * BindToStream) (IUrlAccessor * This, IStream ** ppStream);
	HRESULT(STDMETHODCALLTYPE * BindToFilter) (IUrlAccessor * This, IFilter ** ppFilter);
	END_INTERFACE
}  IUrlAccessorVtbl;
interface IUrlAccessor
{
	CONST_VTBL struct IUrlAccessorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUrlAccessor_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUrlAccessor_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUrlAccessor_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUrlAccessor_AddRequestParameter(This,pSpec,pVar) ( (This)->lpVtbl -> AddRequestParameter(This,pSpec,pVar) )
#define IUrlAccessor_GetDocFormat(This,wszDocFormat,dwSize,pdwLength) ( (This)->lpVtbl -> GetDocFormat(This,wszDocFormat,dwSize,pdwLength) )
#define IUrlAccessor_GetCLSID(This,pClsid) ( (This)->lpVtbl -> GetCLSID(This,pClsid) )
#define IUrlAccessor_GetHost(This,wszHost,dwSize,pdwLength) ( (This)->lpVtbl -> GetHost(This,wszHost,dwSize,pdwLength) )
#define IUrlAccessor_IsDirectory(This) ( (This)->lpVtbl -> IsDirectory(This) )
#define IUrlAccessor_GetSize(This,pllSize) ( (This)->lpVtbl -> GetSize(This,pllSize) )
#define IUrlAccessor_GetLastModified(This,pftLastModified) ( (This)->lpVtbl -> GetLastModified(This,pftLastModified) )
#define IUrlAccessor_GetFileName(This,wszFileName,dwSize,pdwLength) ( (This)->lpVtbl -> GetFileName(This,wszFileName,dwSize,pdwLength) )
#define IUrlAccessor_GetSecurityDescriptor(This,pSD,dwSize,pdwLength) ( (This)->lpVtbl -> GetSecurityDescriptor(This,pSD,dwSize,pdwLength) )
#define IUrlAccessor_GetRedirectedURL(This,wszRedirectedURL,dwSize,pdwLength) ( (This)->lpVtbl -> GetRedirectedURL(This,wszRedirectedURL,dwSize,pdwLength) )
#define IUrlAccessor_GetSecurityProvider(This,pSPClsid) ( (This)->lpVtbl -> GetSecurityProvider(This,pSPClsid) )
#define IUrlAccessor_BindToStream(This,ppStream) ( (This)->lpVtbl -> BindToStream(This,ppStream) )
#define IUrlAccessor_BindToFilter(This,ppFilter) ( (This)->lpVtbl -> BindToFilter(This,ppFilter) )
#endif
#endif
#ifndef __IUrlAccessor2_INTERFACE_DEFINED__
#define __IUrlAccessor2_INTERFACE_DEFINED__
extern const IID IID_IUrlAccessor2;
typedef struct IUrlAccessor2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUrlAccessor2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUrlAccessor2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUrlAccessor2 * This);
	HRESULT(STDMETHODCALLTYPE * AddRequestParameter) (IUrlAccessor2 * This, PROPSPEC * pSpec, PROPVARIANT * pVar);
	HRESULT(STDMETHODCALLTYPE * GetDocFormat) (IUrlAccessor2 * This, WCHAR wszDocFormat[], DWORD dwSize, DWORD * pdwLength);
	HRESULT(STDMETHODCALLTYPE * GetCLSID) (IUrlAccessor2 * This, CLSID * pClsid);
	HRESULT(STDMETHODCALLTYPE * GetHost) (IUrlAccessor2 * This, WCHAR wszHost[], DWORD dwSize, DWORD * pdwLength);
	HRESULT(STDMETHODCALLTYPE * IsDirectory) (IUrlAccessor2 * This);
	HRESULT(STDMETHODCALLTYPE * GetSize) (IUrlAccessor2 * This, ULONGLONG * pllSize);
	HRESULT(STDMETHODCALLTYPE * GetLastModified) (IUrlAccessor2 * This, FILETIME * pftLastModified);
	HRESULT(STDMETHODCALLTYPE * GetFileName) (IUrlAccessor2 * This, WCHAR wszFileName[], DWORD dwSize, DWORD * pdwLength);
	HRESULT(STDMETHODCALLTYPE * GetSecurityDescriptor) (IUrlAccessor2 * This, BYTE * pSD, DWORD dwSize, DWORD * pdwLength);
	HRESULT(STDMETHODCALLTYPE * GetRedirectedURL) (IUrlAccessor2 * This, WCHAR wszRedirectedURL[], DWORD dwSize, DWORD * pdwLength);
	HRESULT(STDMETHODCALLTYPE * GetSecurityProvider) (IUrlAccessor2 * This, CLSID * pSPClsid);
	HRESULT(STDMETHODCALLTYPE * BindToStream) (IUrlAccessor2 * This, IStream ** ppStream);
	HRESULT(STDMETHODCALLTYPE * BindToFilter) (IUrlAccessor2 * This, IFilter ** ppFilter);
	HRESULT(STDMETHODCALLTYPE * GetDisplayUrl) (IUrlAccessor2 * This, WCHAR wszDocUrl[], DWORD dwSize, DWORD * pdwLength);
	HRESULT(STDMETHODCALLTYPE * IsDocument) (IUrlAccessor2 * This);
	HRESULT(STDMETHODCALLTYPE * GetCodePage) (IUrlAccessor2 * This, WCHAR wszCodePage[], DWORD dwSize, DWORD * pdwLength);
	END_INTERFACE
}  IUrlAccessor2Vtbl;
interface IUrlAccessor2
{
	CONST_VTBL struct IUrlAccessor2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUrlAccessor2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUrlAccessor2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUrlAccessor2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUrlAccessor2_AddRequestParameter(This,pSpec,pVar) ( (This)->lpVtbl -> AddRequestParameter(This,pSpec,pVar) )
#define IUrlAccessor2_GetDocFormat(This,wszDocFormat,dwSize,pdwLength) ( (This)->lpVtbl -> GetDocFormat(This,wszDocFormat,dwSize,pdwLength) )
#define IUrlAccessor2_GetCLSID(This,pClsid) ( (This)->lpVtbl -> GetCLSID(This,pClsid) )
#define IUrlAccessor2_GetHost(This,wszHost,dwSize,pdwLength) ( (This)->lpVtbl -> GetHost(This,wszHost,dwSize,pdwLength) )
#define IUrlAccessor2_IsDirectory(This) ( (This)->lpVtbl -> IsDirectory(This) )
#define IUrlAccessor2_GetSize(This,pllSize) ( (This)->lpVtbl -> GetSize(This,pllSize) )
#define IUrlAccessor2_GetLastModified(This,pftLastModified) ( (This)->lpVtbl -> GetLastModified(This,pftLastModified) )
#define IUrlAccessor2_GetFileName(This,wszFileName,dwSize,pdwLength) ( (This)->lpVtbl -> GetFileName(This,wszFileName,dwSize,pdwLength) )
#define IUrlAccessor2_GetSecurityDescriptor(This,pSD,dwSize,pdwLength) ( (This)->lpVtbl -> GetSecurityDescriptor(This,pSD,dwSize,pdwLength) )
#define IUrlAccessor2_GetRedirectedURL(This,wszRedirectedURL,dwSize,pdwLength) ( (This)->lpVtbl -> GetRedirectedURL(This,wszRedirectedURL,dwSize,pdwLength) )
#define IUrlAccessor2_GetSecurityProvider(This,pSPClsid) ( (This)->lpVtbl -> GetSecurityProvider(This,pSPClsid) )
#define IUrlAccessor2_BindToStream(This,ppStream) ( (This)->lpVtbl -> BindToStream(This,ppStream) )
#define IUrlAccessor2_BindToFilter(This,ppFilter) ( (This)->lpVtbl -> BindToFilter(This,ppFilter) )
#define IUrlAccessor2_GetDisplayUrl(This,wszDocUrl,dwSize,pdwLength) ( (This)->lpVtbl -> GetDisplayUrl(This,wszDocUrl,dwSize,pdwLength) )
#define IUrlAccessor2_IsDocument(This) ( (This)->lpVtbl -> IsDocument(This) )
#define IUrlAccessor2_GetCodePage(This,wszCodePage,dwSize,pdwLength) ( (This)->lpVtbl -> GetCodePage(This,wszCodePage,dwSize,pdwLength) )
#endif
#endif
#ifndef __IUrlAccessor3_INTERFACE_DEFINED__
#define __IUrlAccessor3_INTERFACE_DEFINED__
extern const IID IID_IUrlAccessor3;
typedef struct IUrlAccessor3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUrlAccessor3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUrlAccessor3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUrlAccessor3 * This);
	HRESULT(STDMETHODCALLTYPE * AddRequestParameter) (IUrlAccessor3 * This, PROPSPEC * pSpec, PROPVARIANT * pVar);
	HRESULT(STDMETHODCALLTYPE * GetDocFormat) (IUrlAccessor3 * This, WCHAR wszDocFormat[], DWORD dwSize, DWORD * pdwLength);
	HRESULT(STDMETHODCALLTYPE * GetCLSID) (IUrlAccessor3 * This, CLSID * pClsid);
	HRESULT(STDMETHODCALLTYPE * GetHost) (IUrlAccessor3 * This, WCHAR wszHost[], DWORD dwSize, DWORD * pdwLength);
	HRESULT(STDMETHODCALLTYPE * IsDirectory) (IUrlAccessor3 * This);
	HRESULT(STDMETHODCALLTYPE * GetSize) (IUrlAccessor3 * This, ULONGLONG * pllSize);
	HRESULT(STDMETHODCALLTYPE * GetLastModified) (IUrlAccessor3 * This, FILETIME * pftLastModified);
	HRESULT(STDMETHODCALLTYPE * GetFileName) (IUrlAccessor3 * This, WCHAR wszFileName[], DWORD dwSize, DWORD * pdwLength);
	HRESULT(STDMETHODCALLTYPE * GetSecurityDescriptor) (IUrlAccessor3 * This, BYTE * pSD, DWORD dwSize, DWORD * pdwLength);
	HRESULT(STDMETHODCALLTYPE * GetRedirectedURL) (IUrlAccessor3 * This, WCHAR wszRedirectedURL[], DWORD dwSize, DWORD * pdwLength);
	HRESULT(STDMETHODCALLTYPE * GetSecurityProvider) (IUrlAccessor3 * This, CLSID * pSPClsid);
	HRESULT(STDMETHODCALLTYPE * BindToStream) (IUrlAccessor3 * This, IStream ** ppStream);
	HRESULT(STDMETHODCALLTYPE * BindToFilter) (IUrlAccessor3 * This, IFilter ** ppFilter);
	HRESULT(STDMETHODCALLTYPE * GetDisplayUrl) (IUrlAccessor3 * This, WCHAR wszDocUrl[], DWORD dwSize, DWORD * pdwLength);
	HRESULT(STDMETHODCALLTYPE * IsDocument) (IUrlAccessor3 * This);
	HRESULT(STDMETHODCALLTYPE * GetCodePage) (IUrlAccessor3 * This, WCHAR wszCodePage[], DWORD dwSize, DWORD * pdwLength);
	HRESULT(STDMETHODCALLTYPE * GetImpersonationSidBlobs) (IUrlAccessor3 * This, LPCWSTR pcwszURL, DWORD * pcSidCount, BLOB ** ppSidBlobs);
	END_INTERFACE
}  IUrlAccessor3Vtbl;
interface IUrlAccessor3
{
	CONST_VTBL struct IUrlAccessor3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUrlAccessor3_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUrlAccessor3_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUrlAccessor3_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUrlAccessor3_AddRequestParameter(This,pSpec,pVar) ( (This)->lpVtbl -> AddRequestParameter(This,pSpec,pVar) )
#define IUrlAccessor3_GetDocFormat(This,wszDocFormat,dwSize,pdwLength) ( (This)->lpVtbl -> GetDocFormat(This,wszDocFormat,dwSize,pdwLength) )
#define IUrlAccessor3_GetCLSID(This,pClsid) ( (This)->lpVtbl -> GetCLSID(This,pClsid) )
#define IUrlAccessor3_GetHost(This,wszHost,dwSize,pdwLength) ( (This)->lpVtbl -> GetHost(This,wszHost,dwSize,pdwLength) )
#define IUrlAccessor3_IsDirectory(This) ( (This)->lpVtbl -> IsDirectory(This) )
#define IUrlAccessor3_GetSize(This,pllSize) ( (This)->lpVtbl -> GetSize(This,pllSize) )
#define IUrlAccessor3_GetLastModified(This,pftLastModified) ( (This)->lpVtbl -> GetLastModified(This,pftLastModified) )
#define IUrlAccessor3_GetFileName(This,wszFileName,dwSize,pdwLength) ( (This)->lpVtbl -> GetFileName(This,wszFileName,dwSize,pdwLength) )
#define IUrlAccessor3_GetSecurityDescriptor(This,pSD,dwSize,pdwLength) ( (This)->lpVtbl -> GetSecurityDescriptor(This,pSD,dwSize,pdwLength) )
#define IUrlAccessor3_GetRedirectedURL(This,wszRedirectedURL,dwSize,pdwLength) ( (This)->lpVtbl -> GetRedirectedURL(This,wszRedirectedURL,dwSize,pdwLength) )
#define IUrlAccessor3_GetSecurityProvider(This,pSPClsid) ( (This)->lpVtbl -> GetSecurityProvider(This,pSPClsid) )
#define IUrlAccessor3_BindToStream(This,ppStream) ( (This)->lpVtbl -> BindToStream(This,ppStream) )
#define IUrlAccessor3_BindToFilter(This,ppFilter) ( (This)->lpVtbl -> BindToFilter(This,ppFilter) )
#define IUrlAccessor3_GetDisplayUrl(This,wszDocUrl,dwSize,pdwLength) ( (This)->lpVtbl -> GetDisplayUrl(This,wszDocUrl,dwSize,pdwLength) )
#define IUrlAccessor3_IsDocument(This) ( (This)->lpVtbl -> IsDocument(This) )
#define IUrlAccessor3_GetCodePage(This,wszCodePage,dwSize,pdwLength) ( (This)->lpVtbl -> GetCodePage(This,wszCodePage,dwSize,pdwLength) )
#define IUrlAccessor3_GetImpersonationSidBlobs(This,pcwszURL,pcSidCount,ppSidBlobs) ( (This)->lpVtbl -> GetImpersonationSidBlobs(This,pcwszURL,pcSidCount,ppSidBlobs) )
#endif
#endif
#ifndef __IUrlAccessor4_INTERFACE_DEFINED__
#define __IUrlAccessor4_INTERFACE_DEFINED__
extern const IID IID_IUrlAccessor4;
typedef struct IUrlAccessor4Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IUrlAccessor4 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IUrlAccessor4 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IUrlAccessor4 * This);
	HRESULT(STDMETHODCALLTYPE * AddRequestParameter) (IUrlAccessor4 * This, PROPSPEC * pSpec, PROPVARIANT * pVar);
	HRESULT(STDMETHODCALLTYPE * GetDocFormat) (IUrlAccessor4 * This, WCHAR wszDocFormat[], DWORD dwSize, DWORD * pdwLength);
	HRESULT(STDMETHODCALLTYPE * GetCLSID) (IUrlAccessor4 * This, CLSID * pClsid);
	HRESULT(STDMETHODCALLTYPE * GetHost) (IUrlAccessor4 * This, WCHAR wszHost[], DWORD dwSize, DWORD * pdwLength);
	HRESULT(STDMETHODCALLTYPE * IsDirectory) (IUrlAccessor4 * This);
	HRESULT(STDMETHODCALLTYPE * GetSize) (IUrlAccessor4 * This, ULONGLONG * pllSize);
	HRESULT(STDMETHODCALLTYPE * GetLastModified) (IUrlAccessor4 * This, FILETIME * pftLastModified);
	HRESULT(STDMETHODCALLTYPE * GetFileName) (IUrlAccessor4 * This, WCHAR wszFileName[], DWORD dwSize, DWORD * pdwLength);
	HRESULT(STDMETHODCALLTYPE * GetSecurityDescriptor) (IUrlAccessor4 * This, BYTE * pSD, DWORD dwSize, DWORD * pdwLength);
	HRESULT(STDMETHODCALLTYPE * GetRedirectedURL) (IUrlAccessor4 * This, WCHAR wszRedirectedURL[], DWORD dwSize, DWORD * pdwLength);
	HRESULT(STDMETHODCALLTYPE * GetSecurityProvider) (IUrlAccessor4 * This, CLSID * pSPClsid);
	HRESULT(STDMETHODCALLTYPE * BindToStream) (IUrlAccessor4 * This, IStream ** ppStream);
	HRESULT(STDMETHODCALLTYPE * BindToFilter) (IUrlAccessor4 * This, IFilter ** ppFilter);
	HRESULT(STDMETHODCALLTYPE * GetDisplayUrl) (IUrlAccessor4 * This, WCHAR wszDocUrl[], DWORD dwSize, DWORD * pdwLength);
	HRESULT(STDMETHODCALLTYPE * IsDocument) (IUrlAccessor4 * This);
	HRESULT(STDMETHODCALLTYPE * GetCodePage) (IUrlAccessor4 * This, WCHAR wszCodePage[], DWORD dwSize, DWORD * pdwLength);
	HRESULT(STDMETHODCALLTYPE * GetImpersonationSidBlobs) (IUrlAccessor4 * This, LPCWSTR pcwszURL, DWORD * pcSidCount, BLOB ** ppSidBlobs);
	HRESULT(STDMETHODCALLTYPE * ShouldIndexItemContent) (IUrlAccessor4 * This, BOOL * pfIndexContent);
	HRESULT(STDMETHODCALLTYPE * ShouldIndexProperty) (IUrlAccessor4 * This, REFPROPERTYKEY key, BOOL * pfIndexProperty);
	END_INTERFACE
}  IUrlAccessor4Vtbl;
interface IUrlAccessor4
{
	CONST_VTBL struct IUrlAccessor4Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IUrlAccessor4_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IUrlAccessor4_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IUrlAccessor4_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IUrlAccessor4_AddRequestParameter(This,pSpec,pVar) ( (This)->lpVtbl -> AddRequestParameter(This,pSpec,pVar) )
#define IUrlAccessor4_GetDocFormat(This,wszDocFormat,dwSize,pdwLength) ( (This)->lpVtbl -> GetDocFormat(This,wszDocFormat,dwSize,pdwLength) )
#define IUrlAccessor4_GetCLSID(This,pClsid) ( (This)->lpVtbl -> GetCLSID(This,pClsid) )
#define IUrlAccessor4_GetHost(This,wszHost,dwSize,pdwLength) ( (This)->lpVtbl -> GetHost(This,wszHost,dwSize,pdwLength) )
#define IUrlAccessor4_IsDirectory(This) ( (This)->lpVtbl -> IsDirectory(This) )
#define IUrlAccessor4_GetSize(This,pllSize) ( (This)->lpVtbl -> GetSize(This,pllSize) )
#define IUrlAccessor4_GetLastModified(This,pftLastModified) ( (This)->lpVtbl -> GetLastModified(This,pftLastModified) )
#define IUrlAccessor4_GetFileName(This,wszFileName,dwSize,pdwLength) ( (This)->lpVtbl -> GetFileName(This,wszFileName,dwSize,pdwLength) )
#define IUrlAccessor4_GetSecurityDescriptor(This,pSD,dwSize,pdwLength) ( (This)->lpVtbl -> GetSecurityDescriptor(This,pSD,dwSize,pdwLength) )
#define IUrlAccessor4_GetRedirectedURL(This,wszRedirectedURL,dwSize,pdwLength) ( (This)->lpVtbl -> GetRedirectedURL(This,wszRedirectedURL,dwSize,pdwLength) )
#define IUrlAccessor4_GetSecurityProvider(This,pSPClsid) ( (This)->lpVtbl -> GetSecurityProvider(This,pSPClsid) )
#define IUrlAccessor4_BindToStream(This,ppStream) ( (This)->lpVtbl -> BindToStream(This,ppStream) )
#define IUrlAccessor4_BindToFilter(This,ppFilter) ( (This)->lpVtbl -> BindToFilter(This,ppFilter) )
#define IUrlAccessor4_GetDisplayUrl(This,wszDocUrl,dwSize,pdwLength) ( (This)->lpVtbl -> GetDisplayUrl(This,wszDocUrl,dwSize,pdwLength) )
#define IUrlAccessor4_IsDocument(This) ( (This)->lpVtbl -> IsDocument(This) )
#define IUrlAccessor4_GetCodePage(This,wszCodePage,dwSize,pdwLength) ( (This)->lpVtbl -> GetCodePage(This,wszCodePage,dwSize,pdwLength) )
#define IUrlAccessor4_GetImpersonationSidBlobs(This,pcwszURL,pcSidCount,ppSidBlobs) ( (This)->lpVtbl -> GetImpersonationSidBlobs(This,pcwszURL,pcSidCount,ppSidBlobs) )
#define IUrlAccessor4_ShouldIndexItemContent(This,pfIndexContent) ( (This)->lpVtbl -> ShouldIndexItemContent(This,pfIndexContent) )
#define IUrlAccessor4_ShouldIndexProperty(This,key,pfIndexProperty) ( (This)->lpVtbl -> ShouldIndexProperty(This,key,pfIndexProperty) )
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0004_v0_0_s_ifspec;
#ifndef __IOpLockStatus_INTERFACE_DEFINED__
#define __IOpLockStatus_INTERFACE_DEFINED__
extern const IID IID_IOpLockStatus;
typedef struct IOpLockStatusVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IOpLockStatus * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IOpLockStatus * This);
	ULONG(STDMETHODCALLTYPE * Release) (IOpLockStatus * This);
	HRESULT(STDMETHODCALLTYPE * IsOplockValid) (IOpLockStatus * This, BOOL * pfIsOplockValid);
	HRESULT(STDMETHODCALLTYPE * IsOplockBroken) (IOpLockStatus * This, BOOL * pfIsOplockBroken);
	HRESULT(STDMETHODCALLTYPE * GetOplockEventHandle) (IOpLockStatus * This, HANDLE * phOplockEv);
	END_INTERFACE
}  IOpLockStatusVtbl;
interface IOpLockStatus
{
	CONST_VTBL struct IOpLockStatusVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOpLockStatus_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOpLockStatus_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IOpLockStatus_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IOpLockStatus_IsOplockValid(This,pfIsOplockValid) ( (This)->lpVtbl -> IsOplockValid(This,pfIsOplockValid) )
#define IOpLockStatus_IsOplockBroken(This,pfIsOplockBroken) ( (This)->lpVtbl -> IsOplockBroken(This,pfIsOplockBroken) )
#define IOpLockStatus_GetOplockEventHandle(This,phOplockEv) ( (This)->lpVtbl -> GetOplockEventHandle(This,phOplockEv) )
#endif
#endif
#ifndef __ISearchProtocolThreadContext_INTERFACE_DEFINED__
#define __ISearchProtocolThreadContext_INTERFACE_DEFINED__
extern const IID IID_ISearchProtocolThreadContext;
typedef struct ISearchProtocolThreadContextVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISearchProtocolThreadContext * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISearchProtocolThreadContext * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISearchProtocolThreadContext * This);
	HRESULT(STDMETHODCALLTYPE * ThreadInit) (ISearchProtocolThreadContext * This);
	HRESULT(STDMETHODCALLTYPE * ThreadShutdown) (ISearchProtocolThreadContext * This);
	HRESULT(STDMETHODCALLTYPE * ThreadIdle) (ISearchProtocolThreadContext * This, DWORD dwTimeElaspedSinceLastCallInMS);
	END_INTERFACE
}  ISearchProtocolThreadContextVtbl;
interface ISearchProtocolThreadContext
{
	CONST_VTBL struct ISearchProtocolThreadContextVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISearchProtocolThreadContext_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISearchProtocolThreadContext_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISearchProtocolThreadContext_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISearchProtocolThreadContext_ThreadInit(This) ( (This)->lpVtbl -> ThreadInit(This) )
#define ISearchProtocolThreadContext_ThreadShutdown(This) ( (This)->lpVtbl -> ThreadShutdown(This) )
#define ISearchProtocolThreadContext_ThreadIdle(This,dwTimeElaspedSinceLastCallInMS) ( (This)->lpVtbl -> ThreadIdle(This,dwTimeElaspedSinceLastCallInMS) )
#endif
#endif
#pragma pack(8)
typedef struct _TIMEOUT_INFO
{
	DWORD dwSize;
	DWORD dwConnectTimeout;
	DWORD dwDataTimeout;
} TIMEOUT_INFO;
typedef enum _PROXY_ACCESS
{
	PROXY_ACCESS_PRECONFIG = 0,
	PROXY_ACCESS_DIRECT = (PROXY_ACCESS_PRECONFIG + 1),
	PROXY_ACCESS_PROXY = (PROXY_ACCESS_DIRECT + 1)
} PROXY_ACCESS;
typedef struct _PROXY_INFO
{
	DWORD dwSize;
	LPCWSTR pcwszUserAgent;
	PROXY_ACCESS paUseProxy;
	BOOL fLocalBypass;
	DWORD dwPortNumber;
	LPCWSTR pcwszProxyName;
	LPCWSTR pcwszBypassList;
} PROXY_INFO;
typedef enum _AUTH_TYPE
{
	eAUTH_TYPE_ANONYMOUS = 0,
	eAUTH_TYPE_NTLM = (eAUTH_TYPE_ANONYMOUS + 1),
	eAUTH_TYPE_BASIC = (eAUTH_TYPE_NTLM + 1)
} AUTH_TYPE;
typedef struct _AUTHENTICATION_INFO
{
	DWORD dwSize;
	AUTH_TYPE atAuthenticationType;
	LPCWSTR pcwszUser;
	LPCWSTR pcwszPassword;
} AUTHENTICATION_INFO;
typedef struct _INCREMENTAL_ACCESS_INFO
{
	DWORD dwSize;
	FILETIME ftLastModifiedTime;
} INCREMENTAL_ACCESS_INFO;
typedef struct _ITEM_INFO
{
	DWORD dwSize;
	LPCWSTR pcwszFromEMail;
	LPCWSTR pcwszApplicationName;
	LPCWSTR pcwszCatalogName;
	LPCWSTR pcwszContentClass;
} ITEM_INFO;
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0006_v0_0_s_ifspec;
#ifndef __ISearchProtocol_INTERFACE_DEFINED__
#define __ISearchProtocol_INTERFACE_DEFINED__
extern const IID IID_ISearchProtocol;
typedef struct ISearchProtocolVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISearchProtocol * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISearchProtocol * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISearchProtocol * This);
	HRESULT(STDMETHODCALLTYPE * Init) (ISearchProtocol * This, TIMEOUT_INFO * pTimeoutInfo, IProtocolHandlerSite * pProtocolHandlerSite, PROXY_INFO * pProxyInfo);
	HRESULT(STDMETHODCALLTYPE * CreateAccessor) (ISearchProtocol * This, LPCWSTR pcwszURL, AUTHENTICATION_INFO * pAuthenticationInfo, INCREMENTAL_ACCESS_INFO * pIncrementalAccessInfo, ITEM_INFO * pItemInfo, IUrlAccessor ** ppAccessor);
	HRESULT(STDMETHODCALLTYPE * CloseAccessor) (ISearchProtocol * This, IUrlAccessor * pAccessor);
	HRESULT(STDMETHODCALLTYPE * ShutDown) (ISearchProtocol * This);
	END_INTERFACE
}  ISearchProtocolVtbl;
interface ISearchProtocol
{
	CONST_VTBL struct ISearchProtocolVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISearchProtocol_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISearchProtocol_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISearchProtocol_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISearchProtocol_Init(This,pTimeoutInfo,pProtocolHandlerSite,pProxyInfo) ( (This)->lpVtbl -> Init(This,pTimeoutInfo,pProtocolHandlerSite,pProxyInfo) )
#define ISearchProtocol_CreateAccessor(This,pcwszURL,pAuthenticationInfo,pIncrementalAccessInfo,pItemInfo,ppAccessor) ( (This)->lpVtbl -> CreateAccessor(This,pcwszURL,pAuthenticationInfo,pIncrementalAccessInfo,pItemInfo,ppAccessor) )
#define ISearchProtocol_CloseAccessor(This,pAccessor) ( (This)->lpVtbl -> CloseAccessor(This,pAccessor) )
#define ISearchProtocol_ShutDown(This) ( (This)->lpVtbl -> ShutDown(This) )
#endif
#endif
#ifndef __ISearchProtocol2_INTERFACE_DEFINED__
#define __ISearchProtocol2_INTERFACE_DEFINED__
extern const IID IID_ISearchProtocol2;
typedef struct ISearchProtocol2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISearchProtocol2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISearchProtocol2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISearchProtocol2 * This);
	HRESULT(STDMETHODCALLTYPE * Init) (ISearchProtocol2 * This, TIMEOUT_INFO * pTimeoutInfo, IProtocolHandlerSite * pProtocolHandlerSite, PROXY_INFO * pProxyInfo);
	HRESULT(STDMETHODCALLTYPE * CreateAccessor) (ISearchProtocol2 * This, LPCWSTR pcwszURL, AUTHENTICATION_INFO * pAuthenticationInfo, INCREMENTAL_ACCESS_INFO * pIncrementalAccessInfo, ITEM_INFO * pItemInfo, IUrlAccessor ** ppAccessor);
	HRESULT(STDMETHODCALLTYPE * CloseAccessor) (ISearchProtocol2 * This, IUrlAccessor * pAccessor);
	HRESULT(STDMETHODCALLTYPE * ShutDown) (ISearchProtocol2 * This);
	HRESULT(STDMETHODCALLTYPE * CreateAccessorEx) (ISearchProtocol2 * This, LPCWSTR pcwszURL, AUTHENTICATION_INFO * pAuthenticationInfo, INCREMENTAL_ACCESS_INFO * pIncrementalAccessInfo, ITEM_INFO * pItemInfo, const BLOB * pUserData, IUrlAccessor ** ppAccessor);
	END_INTERFACE
}  ISearchProtocol2Vtbl;
interface ISearchProtocol2
{
	CONST_VTBL struct ISearchProtocol2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISearchProtocol2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISearchProtocol2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISearchProtocol2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISearchProtocol2_Init(This,pTimeoutInfo,pProtocolHandlerSite,pProxyInfo) ( (This)->lpVtbl -> Init(This,pTimeoutInfo,pProtocolHandlerSite,pProxyInfo) )
#define ISearchProtocol2_CreateAccessor(This,pcwszURL,pAuthenticationInfo,pIncrementalAccessInfo,pItemInfo,ppAccessor) ( (This)->lpVtbl -> CreateAccessor(This,pcwszURL,pAuthenticationInfo,pIncrementalAccessInfo,pItemInfo,ppAccessor) )
#define ISearchProtocol2_CloseAccessor(This,pAccessor) ( (This)->lpVtbl -> CloseAccessor(This,pAccessor) )
#define ISearchProtocol2_ShutDown(This) ( (This)->lpVtbl -> ShutDown(This) )
#define ISearchProtocol2_CreateAccessorEx(This,pcwszURL,pAuthenticationInfo,pIncrementalAccessInfo,pItemInfo,pUserData,ppAccessor) ( (This)->lpVtbl -> CreateAccessorEx(This,pcwszURL,pAuthenticationInfo,pIncrementalAccessInfo,pItemInfo,pUserData,ppAccessor) )
#endif
#endif
#ifndef __IProtocolHandlerSite_INTERFACE_DEFINED__
#define __IProtocolHandlerSite_INTERFACE_DEFINED__
extern const IID IID_IProtocolHandlerSite;
typedef struct IProtocolHandlerSiteVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IProtocolHandlerSite * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IProtocolHandlerSite * This);
	ULONG(STDMETHODCALLTYPE * Release) (IProtocolHandlerSite * This);
	HRESULT(STDMETHODCALLTYPE * GetFilter) (IProtocolHandlerSite * This, CLSID * pclsidObj, LPCWSTR pcwszContentType, LPCWSTR pcwszExtension, IFilter ** ppFilter);
	END_INTERFACE
}  IProtocolHandlerSiteVtbl;
interface IProtocolHandlerSite
{
	CONST_VTBL struct IProtocolHandlerSiteVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IProtocolHandlerSite_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IProtocolHandlerSite_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IProtocolHandlerSite_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IProtocolHandlerSite_GetFilter(This,pclsidObj,pcwszContentType,pcwszExtension,ppFilter) ( (This)->lpVtbl -> GetFilter(This,pclsidObj,pcwszContentType,pcwszExtension,ppFilter) )
#endif
#endif
#pragma pack()
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0009_v0_0_s_ifspec;
#ifndef __ISearchRoot_INTERFACE_DEFINED__
#define __ISearchRoot_INTERFACE_DEFINED__
extern const IID IID_ISearchRoot;
typedef struct ISearchRootVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISearchRoot * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISearchRoot * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISearchRoot * This);
	HRESULT(STDMETHODCALLTYPE * put_Schedule) (ISearchRoot * This, LPCWSTR pszTaskArg);
	HRESULT(STDMETHODCALLTYPE * get_Schedule) (ISearchRoot * This, LPWSTR * ppszTaskArg);
	HRESULT(STDMETHODCALLTYPE * put_RootURL) (ISearchRoot * This, LPCWSTR pszURL);
	HRESULT(STDMETHODCALLTYPE * get_RootURL) (ISearchRoot * This, LPWSTR * ppszURL);
	HRESULT(STDMETHODCALLTYPE * put_IsHierarchical) (ISearchRoot * This, BOOL fIsHierarchical);
	HRESULT(STDMETHODCALLTYPE * get_IsHierarchical) (ISearchRoot * This, BOOL * pfIsHierarchical);
	HRESULT(STDMETHODCALLTYPE * put_ProvidesNotifications) (ISearchRoot * This, BOOL fProvidesNotifications);
	HRESULT(STDMETHODCALLTYPE * get_ProvidesNotifications) (ISearchRoot * This, BOOL * pfProvidesNotifications);
	HRESULT(STDMETHODCALLTYPE * put_UseNotificationsOnly) (ISearchRoot * This, BOOL fUseNotificationsOnly);
	HRESULT(STDMETHODCALLTYPE * get_UseNotificationsOnly) (ISearchRoot * This, BOOL * pfUseNotificationsOnly);
	HRESULT(STDMETHODCALLTYPE * put_EnumerationDepth) (ISearchRoot * This, DWORD dwDepth);
	HRESULT(STDMETHODCALLTYPE * get_EnumerationDepth) (ISearchRoot * This, DWORD * pdwDepth);
	HRESULT(STDMETHODCALLTYPE * put_HostDepth) (ISearchRoot * This, DWORD dwDepth);
	HRESULT(STDMETHODCALLTYPE * get_HostDepth) (ISearchRoot * This, DWORD * pdwDepth);
	HRESULT(STDMETHODCALLTYPE * put_FollowDirectories) (ISearchRoot * This, BOOL fFollowDirectories);
	HRESULT(STDMETHODCALLTYPE * get_FollowDirectories) (ISearchRoot * This, BOOL * pfFollowDirectories);
	HRESULT(STDMETHODCALLTYPE * put_AuthenticationType) (ISearchRoot * This, AUTH_TYPE authType);
	HRESULT(STDMETHODCALLTYPE * get_AuthenticationType) (ISearchRoot * This, AUTH_TYPE * pAuthType);
	HRESULT(STDMETHODCALLTYPE * put_User) (ISearchRoot * This, LPCWSTR pszUser);
	HRESULT(STDMETHODCALLTYPE * get_User) (ISearchRoot * This, LPWSTR * ppszUser);
	HRESULT(STDMETHODCALLTYPE * put_Password) (ISearchRoot * This, LPCWSTR pszPassword);
	HRESULT(STDMETHODCALLTYPE * get_Password) (ISearchRoot * This, LPWSTR * ppszPassword);
	END_INTERFACE
}  ISearchRootVtbl;
interface ISearchRoot
{
	CONST_VTBL struct ISearchRootVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISearchRoot_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISearchRoot_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISearchRoot_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISearchRoot_put_Schedule(This,pszTaskArg) ( (This)->lpVtbl -> put_Schedule(This,pszTaskArg) )
#define ISearchRoot_get_Schedule(This,ppszTaskArg) ( (This)->lpVtbl -> get_Schedule(This,ppszTaskArg) )
#define ISearchRoot_put_RootURL(This,pszURL) ( (This)->lpVtbl -> put_RootURL(This,pszURL) )
#define ISearchRoot_get_RootURL(This,ppszURL) ( (This)->lpVtbl -> get_RootURL(This,ppszURL) )
#define ISearchRoot_put_IsHierarchical(This,fIsHierarchical) ( (This)->lpVtbl -> put_IsHierarchical(This,fIsHierarchical) )
#define ISearchRoot_get_IsHierarchical(This,pfIsHierarchical) ( (This)->lpVtbl -> get_IsHierarchical(This,pfIsHierarchical) )
#define ISearchRoot_put_ProvidesNotifications(This,fProvidesNotifications) ( (This)->lpVtbl -> put_ProvidesNotifications(This,fProvidesNotifications) )
#define ISearchRoot_get_ProvidesNotifications(This,pfProvidesNotifications) ( (This)->lpVtbl -> get_ProvidesNotifications(This,pfProvidesNotifications) )
#define ISearchRoot_put_UseNotificationsOnly(This,fUseNotificationsOnly) ( (This)->lpVtbl -> put_UseNotificationsOnly(This,fUseNotificationsOnly) )
#define ISearchRoot_get_UseNotificationsOnly(This,pfUseNotificationsOnly) ( (This)->lpVtbl -> get_UseNotificationsOnly(This,pfUseNotificationsOnly) )
#define ISearchRoot_put_EnumerationDepth(This,dwDepth) ( (This)->lpVtbl -> put_EnumerationDepth(This,dwDepth) )
#define ISearchRoot_get_EnumerationDepth(This,pdwDepth) ( (This)->lpVtbl -> get_EnumerationDepth(This,pdwDepth) )
#define ISearchRoot_put_HostDepth(This,dwDepth) ( (This)->lpVtbl -> put_HostDepth(This,dwDepth) )
#define ISearchRoot_get_HostDepth(This,pdwDepth) ( (This)->lpVtbl -> get_HostDepth(This,pdwDepth) )
#define ISearchRoot_put_FollowDirectories(This,fFollowDirectories) ( (This)->lpVtbl -> put_FollowDirectories(This,fFollowDirectories) )
#define ISearchRoot_get_FollowDirectories(This,pfFollowDirectories) ( (This)->lpVtbl -> get_FollowDirectories(This,pfFollowDirectories) )
#define ISearchRoot_put_AuthenticationType(This,authType) ( (This)->lpVtbl -> put_AuthenticationType(This,authType) )
#define ISearchRoot_get_AuthenticationType(This,pAuthType) ( (This)->lpVtbl -> get_AuthenticationType(This,pAuthType) )
#define ISearchRoot_put_User(This,pszUser) ( (This)->lpVtbl -> put_User(This,pszUser) )
#define ISearchRoot_get_User(This,ppszUser) ( (This)->lpVtbl -> get_User(This,ppszUser) )
#define ISearchRoot_put_Password(This,pszPassword) ( (This)->lpVtbl -> put_Password(This,pszPassword) )
#define ISearchRoot_get_Password(This,ppszPassword) ( (This)->lpVtbl -> get_Password(This,ppszPassword) )
#endif
#endif
#ifndef __IEnumSearchRoots_INTERFACE_DEFINED__
#define __IEnumSearchRoots_INTERFACE_DEFINED__
extern const IID IID_IEnumSearchRoots;
typedef struct IEnumSearchRootsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumSearchRoots * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumSearchRoots * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumSearchRoots * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumSearchRoots * This, ULONG celt, ISearchRoot ** rgelt, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumSearchRoots * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumSearchRoots * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumSearchRoots * This, IEnumSearchRoots ** ppenum);
	END_INTERFACE
}  IEnumSearchRootsVtbl;
interface IEnumSearchRoots
{
	CONST_VTBL struct IEnumSearchRootsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumSearchRoots_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumSearchRoots_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumSearchRoots_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumSearchRoots_Next(This,celt,rgelt,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
#define IEnumSearchRoots_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumSearchRoots_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumSearchRoots_Clone(This,ppenum) ( (This)->lpVtbl -> Clone(This,ppenum) )
#endif
#endif
typedef enum _FOLLOW_FLAGS
{
	FF_INDEXCOMPLEXURLS = 0x1,
	FF_SUPPRESSINDEXING = 0x2
} FOLLOW_FLAGS;
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0011_v0_0_s_ifspec;
#ifndef __ISearchScopeRule_INTERFACE_DEFINED__
#define __ISearchScopeRule_INTERFACE_DEFINED__
extern const IID IID_ISearchScopeRule;
typedef struct ISearchScopeRuleVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISearchScopeRule * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISearchScopeRule * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISearchScopeRule * This);
	HRESULT(STDMETHODCALLTYPE * get_PatternOrURL) (ISearchScopeRule * This, LPWSTR * ppszPatternOrURL);
	HRESULT(STDMETHODCALLTYPE * get_IsIncluded) (ISearchScopeRule * This, BOOL * pfIsIncluded);
	HRESULT(STDMETHODCALLTYPE * get_IsDefault) (ISearchScopeRule * This, BOOL * pfIsDefault);
	HRESULT(STDMETHODCALLTYPE * get_FollowFlags) (ISearchScopeRule * This, DWORD * pFollowFlags);
END_INTERFACE
}  ISearchScopeRuleVtbl;
interface ISearchScopeRule
{
	CONST_VTBL struct ISearchScopeRuleVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISearchScopeRule_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISearchScopeRule_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISearchScopeRule_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISearchScopeRule_get_PatternOrURL(This,ppszPatternOrURL) ( (This)->lpVtbl -> get_PatternOrURL(This,ppszPatternOrURL) )
#define ISearchScopeRule_get_IsIncluded(This,pfIsIncluded) ( (This)->lpVtbl -> get_IsIncluded(This,pfIsIncluded) )
#define ISearchScopeRule_get_IsDefault(This,pfIsDefault) ( (This)->lpVtbl -> get_IsDefault(This,pfIsDefault) )
#define ISearchScopeRule_get_FollowFlags(This,pFollowFlags) ( (This)->lpVtbl -> get_FollowFlags(This,pFollowFlags) )
#endif
#endif
#ifndef __IEnumSearchScopeRules_INTERFACE_DEFINED__
#define __IEnumSearchScopeRules_INTERFACE_DEFINED__
extern const IID IID_IEnumSearchScopeRules;
typedef struct IEnumSearchScopeRulesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumSearchScopeRules * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumSearchScopeRules * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumSearchScopeRules * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumSearchScopeRules * This, ULONG celt, ISearchScopeRule ** pprgelt, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumSearchScopeRules * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumSearchScopeRules * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumSearchScopeRules * This, IEnumSearchScopeRules ** ppenum);
	END_INTERFACE
}  IEnumSearchScopeRulesVtbl;
interface IEnumSearchScopeRules
{
	CONST_VTBL struct IEnumSearchScopeRulesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumSearchScopeRules_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumSearchScopeRules_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumSearchScopeRules_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumSearchScopeRules_Next(This,celt,pprgelt,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,pprgelt,pceltFetched) )
#define IEnumSearchScopeRules_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumSearchScopeRules_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumSearchScopeRules_Clone(This,ppenum) ( (This)->lpVtbl -> Clone(This,ppenum) )
#endif
#endif
typedef enum __MIDL___MIDL_itf_searchapi_0000_0013_0001
{
	CLUSIONREASON_UNKNOWNSCOPE = 0,
	CLUSIONREASON_DEFAULT = 1,
	CLUSIONREASON_USER = 2,
	CLUSIONREASON_GROUPPOLICY = 3
} CLUSION_REASON;
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0013_v0_0_s_ifspec;
#ifndef __ISearchCrawlScopeManager_INTERFACE_DEFINED__
#define __ISearchCrawlScopeManager_INTERFACE_DEFINED__
extern const IID IID_ISearchCrawlScopeManager;
typedef struct ISearchCrawlScopeManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISearchCrawlScopeManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISearchCrawlScopeManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISearchCrawlScopeManager * This);
	HRESULT(STDMETHODCALLTYPE * AddDefaultScopeRule) (ISearchCrawlScopeManager * This, LPCWSTR pszURL, BOOL fInclude, DWORD fFollowFlags);
	HRESULT(STDMETHODCALLTYPE * AddRoot) (ISearchCrawlScopeManager * This, ISearchRoot * pSearchRoot);
	HRESULT(STDMETHODCALLTYPE * RemoveRoot) (ISearchCrawlScopeManager * This, LPCWSTR pszURL);
	HRESULT(STDMETHODCALLTYPE * EnumerateRoots) (ISearchCrawlScopeManager * This, IEnumSearchRoots ** ppSearchRoots);
	HRESULT(STDMETHODCALLTYPE * AddHierarchicalScope) (ISearchCrawlScopeManager * This, LPCWSTR pszURL, BOOL fInclude, BOOL fDefault, BOOL fOverrideChildren);
	HRESULT(STDMETHODCALLTYPE * AddUserScopeRule) (ISearchCrawlScopeManager * This, LPCWSTR pszURL, BOOL fInclude, BOOL fOverrideChildren, DWORD fFollowFlags);
	HRESULT(STDMETHODCALLTYPE * RemoveScopeRule) (ISearchCrawlScopeManager * This, LPCWSTR pszRule);
	HRESULT(STDMETHODCALLTYPE * EnumerateScopeRules) (ISearchCrawlScopeManager * This, IEnumSearchScopeRules ** ppSearchScopeRules);
	HRESULT(STDMETHODCALLTYPE * HasParentScopeRule) (ISearchCrawlScopeManager * This, LPCWSTR pszURL, BOOL * pfHasParentRule);
	HRESULT(STDMETHODCALLTYPE * HasChildScopeRule) (ISearchCrawlScopeManager * This, LPCWSTR pszURL, BOOL * pfHasChildRule);
	HRESULT(STDMETHODCALLTYPE * IncludedInCrawlScope) (ISearchCrawlScopeManager * This, LPCWSTR pszURL, BOOL * pfIsIncluded);
	HRESULT(STDMETHODCALLTYPE * IncludedInCrawlScopeEx) (ISearchCrawlScopeManager * This, LPCWSTR pszURL, BOOL * pfIsIncluded, CLUSION_REASON * pReason);
	HRESULT(STDMETHODCALLTYPE * RevertToDefaultScopes) (ISearchCrawlScopeManager * This);
	HRESULT(STDMETHODCALLTYPE * SaveAll) (ISearchCrawlScopeManager * This);
	HRESULT(STDMETHODCALLTYPE * GetParentScopeVersionId) (ISearchCrawlScopeManager * This, LPCWSTR pszURL, LONG * plScopeId);
	HRESULT(STDMETHODCALLTYPE * RemoveDefaultScopeRule) (ISearchCrawlScopeManager * This, LPCWSTR pszURL);
	END_INTERFACE
}  ISearchCrawlScopeManagerVtbl;
interface ISearchCrawlScopeManager
{
	CONST_VTBL struct ISearchCrawlScopeManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISearchCrawlScopeManager_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISearchCrawlScopeManager_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISearchCrawlScopeManager_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISearchCrawlScopeManager_AddDefaultScopeRule(This,pszURL,fInclude,fFollowFlags) ( (This)->lpVtbl -> AddDefaultScopeRule(This,pszURL,fInclude,fFollowFlags) )
#define ISearchCrawlScopeManager_AddRoot(This,pSearchRoot) ( (This)->lpVtbl -> AddRoot(This,pSearchRoot) )
#define ISearchCrawlScopeManager_RemoveRoot(This,pszURL) ( (This)->lpVtbl -> RemoveRoot(This,pszURL) )
#define ISearchCrawlScopeManager_EnumerateRoots(This,ppSearchRoots) ( (This)->lpVtbl -> EnumerateRoots(This,ppSearchRoots) )
#define ISearchCrawlScopeManager_AddHierarchicalScope(This,pszURL,fInclude,fDefault,fOverrideChildren) ( (This)->lpVtbl -> AddHierarchicalScope(This,pszURL,fInclude,fDefault,fOverrideChildren) )
#define ISearchCrawlScopeManager_AddUserScopeRule(This,pszURL,fInclude,fOverrideChildren,fFollowFlags) ( (This)->lpVtbl -> AddUserScopeRule(This,pszURL,fInclude,fOverrideChildren,fFollowFlags) )
#define ISearchCrawlScopeManager_RemoveScopeRule(This,pszRule) ( (This)->lpVtbl -> RemoveScopeRule(This,pszRule) )
#define ISearchCrawlScopeManager_EnumerateScopeRules(This,ppSearchScopeRules) ( (This)->lpVtbl -> EnumerateScopeRules(This,ppSearchScopeRules) )
#define ISearchCrawlScopeManager_HasParentScopeRule(This,pszURL,pfHasParentRule) ( (This)->lpVtbl -> HasParentScopeRule(This,pszURL,pfHasParentRule) )
#define ISearchCrawlScopeManager_HasChildScopeRule(This,pszURL,pfHasChildRule) ( (This)->lpVtbl -> HasChildScopeRule(This,pszURL,pfHasChildRule) )
#define ISearchCrawlScopeManager_IncludedInCrawlScope(This,pszURL,pfIsIncluded) ( (This)->lpVtbl -> IncludedInCrawlScope(This,pszURL,pfIsIncluded) )
#define ISearchCrawlScopeManager_IncludedInCrawlScopeEx(This,pszURL,pfIsIncluded,pReason) ( (This)->lpVtbl -> IncludedInCrawlScopeEx(This,pszURL,pfIsIncluded,pReason) )
#define ISearchCrawlScopeManager_RevertToDefaultScopes(This) ( (This)->lpVtbl -> RevertToDefaultScopes(This) )
#define ISearchCrawlScopeManager_SaveAll(This) ( (This)->lpVtbl -> SaveAll(This) )
#define ISearchCrawlScopeManager_GetParentScopeVersionId(This,pszURL,plScopeId) ( (This)->lpVtbl -> GetParentScopeVersionId(This,pszURL,plScopeId) )
#define ISearchCrawlScopeManager_RemoveDefaultScopeRule(This,pszURL) ( (This)->lpVtbl -> RemoveDefaultScopeRule(This,pszURL) )
#endif
#endif
#ifndef __ISearchCrawlScopeManager2_INTERFACE_DEFINED__
#define __ISearchCrawlScopeManager2_INTERFACE_DEFINED__
extern const IID IID_ISearchCrawlScopeManager2;
typedef struct ISearchCrawlScopeManager2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISearchCrawlScopeManager2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISearchCrawlScopeManager2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISearchCrawlScopeManager2 * This);
	HRESULT(STDMETHODCALLTYPE * AddDefaultScopeRule) (ISearchCrawlScopeManager2 * This, LPCWSTR pszURL, BOOL fInclude, DWORD fFollowFlags);
	HRESULT(STDMETHODCALLTYPE * AddRoot) (ISearchCrawlScopeManager2 * This, ISearchRoot * pSearchRoot);
	HRESULT(STDMETHODCALLTYPE * RemoveRoot) (ISearchCrawlScopeManager2 * This, LPCWSTR pszURL);
	HRESULT(STDMETHODCALLTYPE * EnumerateRoots) (ISearchCrawlScopeManager2 * This, IEnumSearchRoots ** ppSearchRoots);
	HRESULT(STDMETHODCALLTYPE * AddHierarchicalScope) (ISearchCrawlScopeManager2 * This, LPCWSTR pszURL, BOOL fInclude, BOOL fDefault, BOOL fOverrideChildren);
	HRESULT(STDMETHODCALLTYPE * AddUserScopeRule) (ISearchCrawlScopeManager2 * This, LPCWSTR pszURL, BOOL fInclude, BOOL fOverrideChildren, DWORD fFollowFlags);
	HRESULT(STDMETHODCALLTYPE * RemoveScopeRule) (ISearchCrawlScopeManager2 * This, LPCWSTR pszRule);
	HRESULT(STDMETHODCALLTYPE * EnumerateScopeRules) (ISearchCrawlScopeManager2 * This, IEnumSearchScopeRules ** ppSearchScopeRules);
	HRESULT(STDMETHODCALLTYPE * HasParentScopeRule) (ISearchCrawlScopeManager2 * This, LPCWSTR pszURL, BOOL * pfHasParentRule);
	HRESULT(STDMETHODCALLTYPE * HasChildScopeRule) (ISearchCrawlScopeManager2 * This, LPCWSTR pszURL, BOOL * pfHasChildRule);
	HRESULT(STDMETHODCALLTYPE * IncludedInCrawlScope) (ISearchCrawlScopeManager2 * This, LPCWSTR pszURL, BOOL * pfIsIncluded);
	HRESULT(STDMETHODCALLTYPE * IncludedInCrawlScopeEx) (ISearchCrawlScopeManager2 * This, LPCWSTR pszURL, BOOL * pfIsIncluded, CLUSION_REASON * pReason);
	HRESULT(STDMETHODCALLTYPE * RevertToDefaultScopes) (ISearchCrawlScopeManager2 * This);
	HRESULT(STDMETHODCALLTYPE * SaveAll) (ISearchCrawlScopeManager2 * This);
	HRESULT(STDMETHODCALLTYPE * GetParentScopeVersionId) (ISearchCrawlScopeManager2 * This, LPCWSTR pszURL, LONG * plScopeId);
	HRESULT(STDMETHODCALLTYPE * RemoveDefaultScopeRule) (ISearchCrawlScopeManager2 * This, LPCWSTR pszURL);
	HRESULT(STDMETHODCALLTYPE * GetVersion) (ISearchCrawlScopeManager2 * This, long **plVersion, HANDLE * phFileMapping);
	END_INTERFACE
}  ISearchCrawlScopeManager2Vtbl;
interface ISearchCrawlScopeManager2
{
	CONST_VTBL struct ISearchCrawlScopeManager2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISearchCrawlScopeManager2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISearchCrawlScopeManager2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISearchCrawlScopeManager2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISearchCrawlScopeManager2_AddDefaultScopeRule(This,pszURL,fInclude,fFollowFlags) ( (This)->lpVtbl -> AddDefaultScopeRule(This,pszURL,fInclude,fFollowFlags) )
#define ISearchCrawlScopeManager2_AddRoot(This,pSearchRoot) ( (This)->lpVtbl -> AddRoot(This,pSearchRoot) )
#define ISearchCrawlScopeManager2_RemoveRoot(This,pszURL) ( (This)->lpVtbl -> RemoveRoot(This,pszURL) )
#define ISearchCrawlScopeManager2_EnumerateRoots(This,ppSearchRoots) ( (This)->lpVtbl -> EnumerateRoots(This,ppSearchRoots) )
#define ISearchCrawlScopeManager2_AddHierarchicalScope(This,pszURL,fInclude,fDefault,fOverrideChildren) ( (This)->lpVtbl -> AddHierarchicalScope(This,pszURL,fInclude,fDefault,fOverrideChildren) )
#define ISearchCrawlScopeManager2_AddUserScopeRule(This,pszURL,fInclude,fOverrideChildren,fFollowFlags) ( (This)->lpVtbl -> AddUserScopeRule(This,pszURL,fInclude,fOverrideChildren,fFollowFlags) )
#define ISearchCrawlScopeManager2_RemoveScopeRule(This,pszRule) ( (This)->lpVtbl -> RemoveScopeRule(This,pszRule) )
#define ISearchCrawlScopeManager2_EnumerateScopeRules(This,ppSearchScopeRules) ( (This)->lpVtbl -> EnumerateScopeRules(This,ppSearchScopeRules) )
#define ISearchCrawlScopeManager2_HasParentScopeRule(This,pszURL,pfHasParentRule) ( (This)->lpVtbl -> HasParentScopeRule(This,pszURL,pfHasParentRule) )
#define ISearchCrawlScopeManager2_HasChildScopeRule(This,pszURL,pfHasChildRule) ( (This)->lpVtbl -> HasChildScopeRule(This,pszURL,pfHasChildRule) )
#define ISearchCrawlScopeManager2_IncludedInCrawlScope(This,pszURL,pfIsIncluded) ( (This)->lpVtbl -> IncludedInCrawlScope(This,pszURL,pfIsIncluded) )
#define ISearchCrawlScopeManager2_IncludedInCrawlScopeEx(This,pszURL,pfIsIncluded,pReason) ( (This)->lpVtbl -> IncludedInCrawlScopeEx(This,pszURL,pfIsIncluded,pReason) )
#define ISearchCrawlScopeManager2_RevertToDefaultScopes(This) ( (This)->lpVtbl -> RevertToDefaultScopes(This) )
#define ISearchCrawlScopeManager2_SaveAll(This) ( (This)->lpVtbl -> SaveAll(This) )
#define ISearchCrawlScopeManager2_GetParentScopeVersionId(This,pszURL,plScopeId) ( (This)->lpVtbl -> GetParentScopeVersionId(This,pszURL,plScopeId) )
#define ISearchCrawlScopeManager2_RemoveDefaultScopeRule(This,pszURL) ( (This)->lpVtbl -> RemoveDefaultScopeRule(This,pszURL) )
#define ISearchCrawlScopeManager2_GetVersion(This,plVersion,phFileMapping) ( (This)->lpVtbl -> GetVersion(This,plVersion,phFileMapping) )
#endif
HRESULT STDMETHODCALLTYPE ISearchCrawlScopeManager2_RemoteGetVersion_Proxy(ISearchCrawlScopeManager2 *This, long *plVersion);
void __RPC_STUB ISearchCrawlScopeManager2_RemoteGetVersion_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
typedef enum _SEARCH_KIND_OF_CHANGE
{
	SEARCH_CHANGE_ADD = 0,
	SEARCH_CHANGE_DELETE = 1,
	SEARCH_CHANGE_MODIFY = 2,
	SEARCH_CHANGE_MOVE_RENAME = 3,
	SEARCH_CHANGE_SEMANTICS_DIRECTORY = 0x40000,
	SEARCH_CHANGE_SEMANTICS_SHALLOW = 0x80000,
	SEARCH_CHANGE_SEMANTICS_UPDATE_SECURITY = 0x400000
} SEARCH_KIND_OF_CHANGE;
typedef enum _SEARCH_NOTIFICATION_PRIORITY
{
	SEARCH_NORMAL_PRIORITY = 0,
	SEARCH_HIGH_PRIORITY = 1
} SEARCH_NOTIFICATION_PRIORITY;
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0015_v0_0_s_ifspec;
#ifndef __ISearchItemsChangedSink_INTERFACE_DEFINED__
#define __ISearchItemsChangedSink_INTERFACE_DEFINED__
typedef struct _SEARCH_ITEM_CHANGE
{
	SEARCH_KIND_OF_CHANGE Change;
	SEARCH_NOTIFICATION_PRIORITY Priority;
	BLOB *pUserData;
	LPWSTR lpwszURL;
	LPWSTR lpwszOldURL;
} SEARCH_ITEM_CHANGE;
extern const IID IID_ISearchItemsChangedSink;
typedef struct ISearchItemsChangedSinkVtbl
{
	BEGIN_INTERFACE
		HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISearchItemsChangedSink * This, REFIID riid, void **ppvObject);
		ULONG(STDMETHODCALLTYPE * AddRef) (ISearchItemsChangedSink * This);
		ULONG(STDMETHODCALLTYPE * Release) (ISearchItemsChangedSink * This);
		HRESULT(STDMETHODCALLTYPE * StartedMonitoringScope) (ISearchItemsChangedSink * This, LPCWSTR pszURL);
		HRESULT(STDMETHODCALLTYPE * StoppedMonitoringScope) (ISearchItemsChangedSink * This, LPCWSTR pszURL);
		HRESULT(STDMETHODCALLTYPE * OnItemsChanged) (ISearchItemsChangedSink * This, DWORD dwNumberOfChanges, SEARCH_ITEM_CHANGE rgDataChangeEntries[], DWORD rgdwDocIds[], HRESULT rghrCompletionCodes[]);
		END_INTERFACE
}  ISearchItemsChangedSinkVtbl;
interface ISearchItemsChangedSink
{
	CONST_VTBL struct ISearchItemsChangedSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISearchItemsChangedSink_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISearchItemsChangedSink_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISearchItemsChangedSink_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISearchItemsChangedSink_StartedMonitoringScope(This,pszURL) ( (This)->lpVtbl -> StartedMonitoringScope(This,pszURL) )
#define ISearchItemsChangedSink_StoppedMonitoringScope(This,pszURL) ( (This)->lpVtbl -> StoppedMonitoringScope(This,pszURL) )
#define ISearchItemsChangedSink_OnItemsChanged(This,dwNumberOfChanges,rgDataChangeEntries,rgdwDocIds,rghrCompletionCodes) ( (This)->lpVtbl -> OnItemsChanged(This,dwNumberOfChanges,rgDataChangeEntries,rgdwDocIds,rghrCompletionCodes) )
#endif
#endif
#ifndef __ISearchPersistentItemsChangedSink_INTERFACE_DEFINED__
#define __ISearchPersistentItemsChangedSink_INTERFACE_DEFINED__
typedef struct _SEARCH_ITEM_PERSISTENT_CHANGE
{
	SEARCH_KIND_OF_CHANGE Change;
	LPWSTR URL;
	LPWSTR OldURL;
	SEARCH_NOTIFICATION_PRIORITY Priority;
} SEARCH_ITEM_PERSISTENT_CHANGE;
extern const IID IID_ISearchPersistentItemsChangedSink;
typedef struct ISearchPersistentItemsChangedSinkVtbl
{
	BEGIN_INTERFACE
		HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISearchPersistentItemsChangedSink * This, REFIID riid, void **ppvObject);
		ULONG(STDMETHODCALLTYPE * AddRef) (ISearchPersistentItemsChangedSink * This);
		ULONG(STDMETHODCALLTYPE * Release) (ISearchPersistentItemsChangedSink * This);
		HRESULT(STDMETHODCALLTYPE * StartedMonitoringScope) (ISearchPersistentItemsChangedSink * This, LPCWSTR pszURL);
		HRESULT(STDMETHODCALLTYPE * StoppedMonitoringScope) (ISearchPersistentItemsChangedSink * This, LPCWSTR pszURL);
		HRESULT(STDMETHODCALLTYPE * OnItemsChanged) (ISearchPersistentItemsChangedSink * This, DWORD dwNumberOfChanges, SEARCH_ITEM_PERSISTENT_CHANGE DataChangeEntries[], HRESULT hrCompletionCodes[]);
		END_INTERFACE
}  ISearchPersistentItemsChangedSinkVtbl;
interface ISearchPersistentItemsChangedSink
{
	CONST_VTBL struct ISearchPersistentItemsChangedSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISearchPersistentItemsChangedSink_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISearchPersistentItemsChangedSink_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISearchPersistentItemsChangedSink_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISearchPersistentItemsChangedSink_StartedMonitoringScope(This,pszURL) ( (This)->lpVtbl -> StartedMonitoringScope(This,pszURL) )
#define ISearchPersistentItemsChangedSink_StoppedMonitoringScope(This,pszURL) ( (This)->lpVtbl -> StoppedMonitoringScope(This,pszURL) )
#define ISearchPersistentItemsChangedSink_OnItemsChanged(This,dwNumberOfChanges,DataChangeEntries,hrCompletionCodes) ( (This)->lpVtbl -> OnItemsChanged(This,dwNumberOfChanges,DataChangeEntries,hrCompletionCodes) )
#endif
#endif
#ifndef __ISearchViewChangedSink_INTERFACE_DEFINED__
#define __ISearchViewChangedSink_INTERFACE_DEFINED__
extern const IID IID_ISearchViewChangedSink;
typedef struct ISearchViewChangedSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISearchViewChangedSink * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISearchViewChangedSink * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISearchViewChangedSink * This);
	HRESULT(STDMETHODCALLTYPE * OnChange) (ISearchViewChangedSink * This, ITEMID * pdwDocID, SEARCH_ITEM_CHANGE * pChange, BOOL * pfInView);
	END_INTERFACE
}  ISearchViewChangedSinkVtbl;
interface ISearchViewChangedSink
{
	CONST_VTBL struct ISearchViewChangedSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISearchViewChangedSink_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISearchViewChangedSink_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISearchViewChangedSink_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISearchViewChangedSink_OnChange(This,pdwDocID,pChange,pfInView) ( (This)->lpVtbl -> OnChange(This,pdwDocID,pChange,pfInView) )
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0018_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0018_v0_0_s_ifspec;
#ifndef __IGatherNotifyInline_INTERFACE_DEFINED__
#define __IGatherNotifyInline_INTERFACE_DEFINED__
typedef struct _INLINE_NOTIFY_DATA_CHANGE_ENTRY
{
	LONG eChangeAdviseCode;
	LPCWSTR pszPhysicalAddress;
	const BLOB *pUserData;
} INLINE_NOTIFY_DATA_CHANGE_ENTRY;
extern const IID IID_IGatherNotifyInline;
typedef struct IGatherNotifyInlineVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGatherNotifyInline * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGatherNotifyInline * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGatherNotifyInline * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IGatherNotifyInline * This, LPCWSTR pszApplication, LPCWSTR pszCatalog, ISearchNotifyInlineSite * pClientSite, GUID * pGUIDCatalogResetSignature, GUID * pGUIDCheckPointSignature, DWORD * pdwLastCheckPointNumber);
	HRESULT(STDMETHODCALLTYPE * OnDataChange) (IGatherNotifyInline * This, DWORD dwNumberEntries, INLINE_NOTIFY_DATA_CHANGE_ENTRY rgDataChangeEntries[], DWORD rgdwDocIDs[], HRESULT rghrCompletionCodes[]);
	END_INTERFACE
}  IGatherNotifyInlineVtbl;
interface IGatherNotifyInline
{
	CONST_VTBL struct IGatherNotifyInlineVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGatherNotifyInline_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGatherNotifyInline_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IGatherNotifyInline_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IGatherNotifyInline_Initialize(This,pszApplication,pszCatalog,pClientSite,pGUIDCatalogResetSignature,pGUIDCheckPointSignature,pdwLastCheckPointNumber) ( (This)->lpVtbl -> Initialize(This,pszApplication,pszCatalog,pClientSite,pGUIDCatalogResetSignature,pGUIDCheckPointSignature,pdwLastCheckPointNumber) )
#define IGatherNotifyInline_OnDataChange(This,dwNumberEntries,rgDataChangeEntries,rgdwDocIDs,rghrCompletionCodes) ( (This)->lpVtbl -> OnDataChange(This,dwNumberEntries,rgDataChangeEntries,rgdwDocIDs,rghrCompletionCodes) )
#endif
#endif
#ifndef __ISearchNotifyInlineSite_INTERFACE_DEFINED__
#define __ISearchNotifyInlineSite_INTERFACE_DEFINED__
typedef enum _SEARCH_INDEXING_PHASE
{
	SEARCH_INDEXING_PHASE_GATHERER = 0,
	SEARCH_INDEXING_PHASE_QUERYABLE = 1,
	SEARCH_INDEXING_PHASE_PERSISTED = 2
} SEARCH_INDEXING_PHASE;
typedef struct _SEARCH_ITEM_INDEXING_STATUS
{
	DWORD dwDocID;
	HRESULT hrIndexingStatus;
} SEARCH_ITEM_INDEXING_STATUS;
extern const IID IID_ISearchNotifyInlineSite;
typedef struct ISearchNotifyInlineSiteVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ISearchNotifyInlineSite *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ISearchNotifyInlineSite *This);
	ULONG(STDMETHODCALLTYPE *Release) (ISearchNotifyInlineSite *This);
	HRESULT(STDMETHODCALLTYPE *OnItemIndexedStatusChange) (ISearchNotifyInlineSite *This, SEARCH_INDEXING_PHASE sipStatus, DWORD dwNumEntries, SEARCH_ITEM_INDEXING_STATUS rgItemStatusEntries[]);
	HRESULT(STDMETHODCALLTYPE *OnCatalogStatusChange) (ISearchNotifyInlineSite *This, REFGUID guidCatalogResetSignature, REFGUID guidCheckPointSignature, DWORD dwLastCheckPointNumber);
	END_INTERFACE
}  ISearchNotifyInlineSiteVtbl;
interface ISearchNotifyInlineSite
{
	CONST_VTBL struct ISearchNotifyInlineSiteVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISearchNotifyInlineSite_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISearchNotifyInlineSite_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISearchNotifyInlineSite_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISearchNotifyInlineSite_OnItemIndexedStatusChange(This,sipStatus,dwNumEntries,rgItemStatusEntries) ( (This)->lpVtbl -> OnItemIndexedStatusChange(This,sipStatus,dwNumEntries,rgItemStatusEntries) )
#define ISearchNotifyInlineSite_OnCatalogStatusChange(This,guidCatalogResetSignature,guidCheckPointSignature,dwLastCheckPointNumber) ( (This)->lpVtbl -> OnCatalogStatusChange(This,guidCatalogResetSignature,guidCheckPointSignature,dwLastCheckPointNumber) )
#endif
#endif
#ifndef __IGatherNotifyInlineInternal_INTERFACE_DEFINED__
#define __IGatherNotifyInlineInternal_INTERFACE_DEFINED__
extern const IID IID_IGatherNotifyInlineInternal;
typedef struct IGatherNotifyInlineInternalVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGatherNotifyInlineInternal * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGatherNotifyInlineInternal * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGatherNotifyInlineInternal * This);
	HRESULT(STDMETHODCALLTYPE * RegisterInlineNotificationClient) (IGatherNotifyInlineInternal * This, ISearchNotifyInlineSite * pClientSite, GUID * pGUIDCatalogResetSignature, GUID * pGUIDCheckPointSignature, DWORD * pdwLastCheckPointNumber, DWORD * pdwClientID);
	HRESULT(STDMETHODCALLTYPE * OnDataChangeInline) (IGatherNotifyInlineInternal * This, DWORD dwClientID, DWORD dwNumberEntries, INLINE_NOTIFY_DATA_CHANGE_ENTRY rgDataChangeEntries[], DWORD rgdwDocIDs[], HRESULT rghrCompletionCodes[]);
	HRESULT(STDMETHODCALLTYPE * SendItemIndexedStatusChange) (IGatherNotifyInlineInternal * This, DWORD dwClientID, SEARCH_INDEXING_PHASE sipStatus, DWORD dwNumEntries, SEARCH_ITEM_INDEXING_STATUS rgItemStatusEntries[]);
	HRESULT(STDMETHODCALLTYPE * ReleaseInlineNotificationClient) (IGatherNotifyInlineInternal * This, DWORD dwClientID);
	END_INTERFACE
}  IGatherNotifyInlineInternalVtbl;
interface IGatherNotifyInlineInternal
{
	CONST_VTBL struct IGatherNotifyInlineInternalVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGatherNotifyInlineInternal_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGatherNotifyInlineInternal_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IGatherNotifyInlineInternal_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IGatherNotifyInlineInternal_RegisterInlineNotificationClient(This,pClientSite,pGUIDCatalogResetSignature,pGUIDCheckPointSignature,pdwLastCheckPointNumber,pdwClientID) ( (This)->lpVtbl -> RegisterInlineNotificationClient(This,pClientSite,pGUIDCatalogResetSignature,pGUIDCheckPointSignature,pdwLastCheckPointNumber,pdwClientID) )
#define IGatherNotifyInlineInternal_OnDataChangeInline(This,dwClientID,dwNumberEntries,rgDataChangeEntries,rgdwDocIDs,rghrCompletionCodes) ( (This)->lpVtbl -> OnDataChangeInline(This,dwClientID,dwNumberEntries,rgDataChangeEntries,rgdwDocIDs,rghrCompletionCodes) )
#define IGatherNotifyInlineInternal_SendItemIndexedStatusChange(This,dwClientID,sipStatus,dwNumEntries,rgItemStatusEntries) ( (This)->lpVtbl -> SendItemIndexedStatusChange(This,dwClientID,sipStatus,dwNumEntries,rgItemStatusEntries) )
#define IGatherNotifyInlineInternal_ReleaseInlineNotificationClient(This,dwClientID) ( (This)->lpVtbl -> ReleaseInlineNotificationClient(This,dwClientID) )
#endif
#endif
#ifndef __IGatherInlineStatus_INTERFACE_DEFINED__
#define __IGatherInlineStatus_INTERFACE_DEFINED__
extern const IID IID_IGatherInlineStatus;
typedef struct IGatherInlineStatusVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGatherInlineStatus * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGatherInlineStatus * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGatherInlineStatus * This);
	HRESULT(STDMETHODCALLTYPE * SendInlineStatusChange) (IGatherInlineStatus * This, DWORD dwClientID, SEARCH_INDEXING_PHASE sipStatus, DWORD dwNumEntries, SEARCH_ITEM_INDEXING_STATUS rgItemStatusEntries[]);
	END_INTERFACE
}  IGatherInlineStatusVtbl;
interface IGatherInlineStatus
{
	CONST_VTBL struct IGatherInlineStatusVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGatherInlineStatus_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGatherInlineStatus_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IGatherInlineStatus_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IGatherInlineStatus_SendInlineStatusChange(This,dwClientID,sipStatus,dwNumEntries,rgItemStatusEntries) ( (This)->lpVtbl -> SendInlineStatusChange(This,dwClientID,sipStatus,dwNumEntries,rgItemStatusEntries) )
#endif
#endif
typedef enum _CatalogStatus
{
	CATALOG_STATUS_IDLE = 0,
	CATALOG_STATUS_PAUSED = 1,
	CATALOG_STATUS_RECOVERING = 2,
	CATALOG_STATUS_FULL_CRAWL = 3,
	CATALOG_STATUS_INCREMENTAL_CRAWL = 4,
	CATALOG_STATUS_PROCESSING_NOTIFICATIONS = 5,
	CATALOG_STATUS_SHUTTING_DOWN = 6
} CatalogStatus;
typedef enum _CatalogPausedReason
{
	CATALOG_PAUSED_REASON_NONE = 0,
	CATALOG_PAUSED_REASON_HIGH_IO = 1,
	CATALOG_PAUSED_REASON_HIGH_CPU = 2,
	CATALOG_PAUSED_REASON_HIGH_NTF_RATE = 3,
	CATALOG_PAUSED_REASON_LOW_BATTERY = 4,
	CATALOG_PAUSED_REASON_LOW_MEMORY = 5,
	CATALOG_PAUSED_REASON_LOW_DISK = 6,
	CATALOG_PAUSED_REASON_DELAYED_RECOVERY = 7,
	CATALOG_PAUSED_REASON_USER_ACTIVE = 8,
	CATALOG_PAUSED_REASON_EXTERNAL = 9,
	CATALOG_PAUSED_REASON_UPGRADING = 10
} CatalogPausedReason;
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0022_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0022_v0_0_s_ifspec;
#ifndef __ISearchCatalogManager_INTERFACE_DEFINED__
#define __ISearchCatalogManager_INTERFACE_DEFINED__
extern const IID IID_ISearchCatalogManager;
typedef struct ISearchCatalogManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISearchCatalogManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISearchCatalogManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISearchCatalogManager * This);
	HRESULT(STDMETHODCALLTYPE * get_Name) (ISearchCatalogManager * This, LPWSTR * pszName);
	HRESULT(STDMETHODCALLTYPE * GetParameter) (ISearchCatalogManager * This, LPCWSTR pszName, PROPVARIANT ** ppValue);
	HRESULT(STDMETHODCALLTYPE * SetParameter) (ISearchCatalogManager * This, LPCWSTR pszName, PROPVARIANT * pValue);
	HRESULT(STDMETHODCALLTYPE * GetCatalogStatus) (ISearchCatalogManager * This, CatalogStatus * pStatus, CatalogPausedReason * pPausedReason);
	HRESULT(STDMETHODCALLTYPE * Reset) (ISearchCatalogManager * This);
	HRESULT(STDMETHODCALLTYPE * Reindex) (ISearchCatalogManager * This);
	HRESULT(STDMETHODCALLTYPE * ReindexMatchingURLs) (ISearchCatalogManager * This, LPCWSTR pszPattern);
	HRESULT(STDMETHODCALLTYPE * ReindexSearchRoot) (ISearchCatalogManager * This, LPCWSTR pszRootURL);
	HRESULT(STDMETHODCALLTYPE * put_ConnectTimeout) (ISearchCatalogManager * This, DWORD dwConnectTimeout);
	HRESULT(STDMETHODCALLTYPE * get_ConnectTimeout) (ISearchCatalogManager * This, DWORD * pdwConnectTimeout);
	HRESULT(STDMETHODCALLTYPE * put_DataTimeout) (ISearchCatalogManager * This, DWORD dwDataTimeout);
	HRESULT(STDMETHODCALLTYPE * get_DataTimeout) (ISearchCatalogManager * This, DWORD * pdwDataTimeout);
	HRESULT(STDMETHODCALLTYPE * NumberOfItems) (ISearchCatalogManager * This, LONG * plCount);
	HRESULT(STDMETHODCALLTYPE * NumberOfItemsToIndex) (ISearchCatalogManager * This, LONG * plIncrementalCount, LONG * plNotificationQueue, LONG * plHighPriorityQueue);
	HRESULT(STDMETHODCALLTYPE * URLBeingIndexed) (ISearchCatalogManager * This, LPWSTR * pszUrl);
	HRESULT(STDMETHODCALLTYPE * GetURLIndexingState) (ISearchCatalogManager * This, LPCWSTR pszURL, DWORD * pdwState);
	HRESULT(STDMETHODCALLTYPE * GetPersistentItemsChangedSink) (ISearchCatalogManager * This, ISearchPersistentItemsChangedSink ** ppISearchPersistentItemsChangedSink);
	HRESULT(STDMETHODCALLTYPE * RegisterViewForNotification) (ISearchCatalogManager * This, LPCWSTR pszView, ISearchViewChangedSink * pViewChangedSink, DWORD * pdwCookie);
	HRESULT(STDMETHODCALLTYPE * GetItemsChangedSink) (ISearchCatalogManager * This, ISearchNotifyInlineSite * pISearchNotifyInlineSite, REFIID riid, void **ppv, GUID * pGUIDCatalogResetSignature, GUID * pGUIDCheckPointSignature, DWORD * pdwLastCheckPointNumber);
	HRESULT(STDMETHODCALLTYPE * UnregisterViewForNotification) (ISearchCatalogManager * This, DWORD dwCookie);
	HRESULT(STDMETHODCALLTYPE * SetExtensionClusion) (ISearchCatalogManager * This, LPCWSTR pszExtension, BOOL fExclude);
	HRESULT(STDMETHODCALLTYPE * EnumerateExcludedExtensions) (ISearchCatalogManager * This, IEnumString ** ppExtensions);
	HRESULT(STDMETHODCALLTYPE * GetQueryHelper) (ISearchCatalogManager * This, ISearchQueryHelper ** ppSearchQueryHelper);
	HRESULT(STDMETHODCALLTYPE * put_DiacriticSensitivity) (ISearchCatalogManager * This, BOOL fDiacriticSensitive);
	HRESULT(STDMETHODCALLTYPE * get_DiacriticSensitivity) (ISearchCatalogManager * This, BOOL * pfDiacriticSensitive);
	HRESULT(STDMETHODCALLTYPE * GetCrawlScopeManager) (ISearchCatalogManager * This, ISearchCrawlScopeManager ** ppCrawlScopeManager);
	END_INTERFACE
}  ISearchCatalogManagerVtbl;
interface ISearchCatalogManager
{
	CONST_VTBL struct ISearchCatalogManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISearchCatalogManager_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISearchCatalogManager_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISearchCatalogManager_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISearchCatalogManager_get_Name(This,pszName) ( (This)->lpVtbl -> get_Name(This,pszName) )
#define ISearchCatalogManager_GetParameter(This,pszName,ppValue) ( (This)->lpVtbl -> GetParameter(This,pszName,ppValue) )
#define ISearchCatalogManager_SetParameter(This,pszName,pValue) ( (This)->lpVtbl -> SetParameter(This,pszName,pValue) )
#define ISearchCatalogManager_GetCatalogStatus(This,pStatus,pPausedReason) ( (This)->lpVtbl -> GetCatalogStatus(This,pStatus,pPausedReason) )
#define ISearchCatalogManager_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define ISearchCatalogManager_Reindex(This) ( (This)->lpVtbl -> Reindex(This) )
#define ISearchCatalogManager_ReindexMatchingURLs(This,pszPattern) ( (This)->lpVtbl -> ReindexMatchingURLs(This,pszPattern) )
#define ISearchCatalogManager_ReindexSearchRoot(This,pszRootURL) ( (This)->lpVtbl -> ReindexSearchRoot(This,pszRootURL) )
#define ISearchCatalogManager_put_ConnectTimeout(This,dwConnectTimeout) ( (This)->lpVtbl -> put_ConnectTimeout(This,dwConnectTimeout) )
#define ISearchCatalogManager_get_ConnectTimeout(This,pdwConnectTimeout) ( (This)->lpVtbl -> get_ConnectTimeout(This,pdwConnectTimeout) )
#define ISearchCatalogManager_put_DataTimeout(This,dwDataTimeout) ( (This)->lpVtbl -> put_DataTimeout(This,dwDataTimeout) )
#define ISearchCatalogManager_get_DataTimeout(This,pdwDataTimeout) ( (This)->lpVtbl -> get_DataTimeout(This,pdwDataTimeout) )
#define ISearchCatalogManager_NumberOfItems(This,plCount) ( (This)->lpVtbl -> NumberOfItems(This,plCount) )
#define ISearchCatalogManager_NumberOfItemsToIndex(This,plIncrementalCount,plNotificationQueue,plHighPriorityQueue) ( (This)->lpVtbl -> NumberOfItemsToIndex(This,plIncrementalCount,plNotificationQueue,plHighPriorityQueue) )
#define ISearchCatalogManager_URLBeingIndexed(This,pszUrl) ( (This)->lpVtbl -> URLBeingIndexed(This,pszUrl) )
#define ISearchCatalogManager_GetURLIndexingState(This,pszURL,pdwState) ( (This)->lpVtbl -> GetURLIndexingState(This,pszURL,pdwState) )
#define ISearchCatalogManager_GetPersistentItemsChangedSink(This,ppISearchPersistentItemsChangedSink) ( (This)->lpVtbl -> GetPersistentItemsChangedSink(This,ppISearchPersistentItemsChangedSink) )
#define ISearchCatalogManager_RegisterViewForNotification(This,pszView,pViewChangedSink,pdwCookie) ( (This)->lpVtbl -> RegisterViewForNotification(This,pszView,pViewChangedSink,pdwCookie) )
#define ISearchCatalogManager_GetItemsChangedSink(This,pISearchNotifyInlineSite,riid,ppv,pGUIDCatalogResetSignature,pGUIDCheckPointSignature,pdwLastCheckPointNumber) ( (This)->lpVtbl -> GetItemsChangedSink(This,pISearchNotifyInlineSite,riid,ppv,pGUIDCatalogResetSignature,pGUIDCheckPointSignature,pdwLastCheckPointNumber) )
#define ISearchCatalogManager_UnregisterViewForNotification(This,dwCookie) ( (This)->lpVtbl -> UnregisterViewForNotification(This,dwCookie) )
#define ISearchCatalogManager_SetExtensionClusion(This,pszExtension,fExclude) ( (This)->lpVtbl -> SetExtensionClusion(This,pszExtension,fExclude) )
#define ISearchCatalogManager_EnumerateExcludedExtensions(This,ppExtensions) ( (This)->lpVtbl -> EnumerateExcludedExtensions(This,ppExtensions) )
#define ISearchCatalogManager_GetQueryHelper(This,ppSearchQueryHelper) ( (This)->lpVtbl -> GetQueryHelper(This,ppSearchQueryHelper) )
#define ISearchCatalogManager_put_DiacriticSensitivity(This,fDiacriticSensitive) ( (This)->lpVtbl -> put_DiacriticSensitivity(This,fDiacriticSensitive) )
#define ISearchCatalogManager_get_DiacriticSensitivity(This,pfDiacriticSensitive) ( (This)->lpVtbl -> get_DiacriticSensitivity(This,pfDiacriticSensitive) )
#define ISearchCatalogManager_GetCrawlScopeManager(This,ppCrawlScopeManager) ( (This)->lpVtbl -> GetCrawlScopeManager(This,ppCrawlScopeManager) )
#endif
#endif
enum tagPRIORITIZE_FLAGS
{
	PRIORITIZE_FLAG_RETRYFAILEDITEMS = 0x1,
	PRIORITIZE_FLAG_IGNOREFAILURECOUNT = 0x2
};
typedef int PRIORITIZE_FLAGS;
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0023_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0023_v0_0_s_ifspec;
#ifndef __ISearchCatalogManager2_INTERFACE_DEFINED__
#define __ISearchCatalogManager2_INTERFACE_DEFINED__
extern const IID IID_ISearchCatalogManager2;
typedef struct ISearchCatalogManager2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISearchCatalogManager2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISearchCatalogManager2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISearchCatalogManager2 * This);
	HRESULT(STDMETHODCALLTYPE * get_Name) (ISearchCatalogManager2 * This, LPWSTR * pszName);
	HRESULT(STDMETHODCALLTYPE * GetParameter) (ISearchCatalogManager2 * This, LPCWSTR pszName, PROPVARIANT ** ppValue);
	HRESULT(STDMETHODCALLTYPE * SetParameter) (ISearchCatalogManager2 * This, LPCWSTR pszName, PROPVARIANT * pValue);
	HRESULT(STDMETHODCALLTYPE * GetCatalogStatus) (ISearchCatalogManager2 * This, CatalogStatus * pStatus, CatalogPausedReason * pPausedReason);
	HRESULT(STDMETHODCALLTYPE * Reset) (ISearchCatalogManager2 * This);
	HRESULT(STDMETHODCALLTYPE * Reindex) (ISearchCatalogManager2 * This);
	HRESULT(STDMETHODCALLTYPE * ReindexMatchingURLs) (ISearchCatalogManager2 * This, LPCWSTR pszPattern);
	HRESULT(STDMETHODCALLTYPE * ReindexSearchRoot) (ISearchCatalogManager2 * This, LPCWSTR pszRootURL);
	HRESULT(STDMETHODCALLTYPE * put_ConnectTimeout) (ISearchCatalogManager2 * This, DWORD dwConnectTimeout);
	HRESULT(STDMETHODCALLTYPE * get_ConnectTimeout) (ISearchCatalogManager2 * This, DWORD * pdwConnectTimeout);
	HRESULT(STDMETHODCALLTYPE * put_DataTimeout) (ISearchCatalogManager2 * This, DWORD dwDataTimeout);
	HRESULT(STDMETHODCALLTYPE * get_DataTimeout) (ISearchCatalogManager2 * This, DWORD * pdwDataTimeout);
	HRESULT(STDMETHODCALLTYPE * NumberOfItems) (ISearchCatalogManager2 * This, LONG * plCount);
	HRESULT(STDMETHODCALLTYPE * NumberOfItemsToIndex) (ISearchCatalogManager2 * This, LONG * plIncrementalCount, LONG * plNotificationQueue, LONG * plHighPriorityQueue);
	HRESULT(STDMETHODCALLTYPE * URLBeingIndexed) (ISearchCatalogManager2 * This, LPWSTR * pszUrl);
	HRESULT(STDMETHODCALLTYPE * GetURLIndexingState) (ISearchCatalogManager2 * This, LPCWSTR pszURL, DWORD * pdwState);
	HRESULT(STDMETHODCALLTYPE * GetPersistentItemsChangedSink) (ISearchCatalogManager2 * This, ISearchPersistentItemsChangedSink ** ppISearchPersistentItemsChangedSink);
	HRESULT(STDMETHODCALLTYPE * RegisterViewForNotification) (ISearchCatalogManager2 * This, LPCWSTR pszView, ISearchViewChangedSink * pViewChangedSink, DWORD * pdwCookie);
	HRESULT(STDMETHODCALLTYPE * GetItemsChangedSink) (ISearchCatalogManager2 * This, ISearchNotifyInlineSite * pISearchNotifyInlineSite, REFIID riid, void **ppv, GUID * pGUIDCatalogResetSignature, GUID * pGUIDCheckPointSignature, DWORD * pdwLastCheckPointNumber);
	HRESULT(STDMETHODCALLTYPE * UnregisterViewForNotification) (ISearchCatalogManager2 * This, DWORD dwCookie);
	HRESULT(STDMETHODCALLTYPE * SetExtensionClusion) (ISearchCatalogManager2 * This, LPCWSTR pszExtension, BOOL fExclude);
	HRESULT(STDMETHODCALLTYPE * EnumerateExcludedExtensions) (ISearchCatalogManager2 * This, IEnumString ** ppExtensions);
	HRESULT(STDMETHODCALLTYPE * GetQueryHelper) (ISearchCatalogManager2 * This, ISearchQueryHelper ** ppSearchQueryHelper);
	HRESULT(STDMETHODCALLTYPE * put_DiacriticSensitivity) (ISearchCatalogManager2 * This, BOOL fDiacriticSensitive);
	HRESULT(STDMETHODCALLTYPE * get_DiacriticSensitivity) (ISearchCatalogManager2 * This, BOOL * pfDiacriticSensitive);
	HRESULT(STDMETHODCALLTYPE * GetCrawlScopeManager) (ISearchCatalogManager2 * This, ISearchCrawlScopeManager ** ppCrawlScopeManager);
	HRESULT(STDMETHODCALLTYPE * PrioritizeMatchingURLs) (ISearchCatalogManager2 * This, LPCWSTR pszPattern, PRIORITIZE_FLAGS dwPrioritizeFlags);
	END_INTERFACE
}  ISearchCatalogManager2Vtbl;
interface ISearchCatalogManager2
{
	CONST_VTBL struct ISearchCatalogManager2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISearchCatalogManager2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISearchCatalogManager2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISearchCatalogManager2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISearchCatalogManager2_get_Name(This,pszName) ( (This)->lpVtbl -> get_Name(This,pszName) )
#define ISearchCatalogManager2_GetParameter(This,pszName,ppValue) ( (This)->lpVtbl -> GetParameter(This,pszName,ppValue) )
#define ISearchCatalogManager2_SetParameter(This,pszName,pValue) ( (This)->lpVtbl -> SetParameter(This,pszName,pValue) )
#define ISearchCatalogManager2_GetCatalogStatus(This,pStatus,pPausedReason) ( (This)->lpVtbl -> GetCatalogStatus(This,pStatus,pPausedReason) )
#define ISearchCatalogManager2_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define ISearchCatalogManager2_Reindex(This) ( (This)->lpVtbl -> Reindex(This) )
#define ISearchCatalogManager2_ReindexMatchingURLs(This,pszPattern) ( (This)->lpVtbl -> ReindexMatchingURLs(This,pszPattern) )
#define ISearchCatalogManager2_ReindexSearchRoot(This,pszRootURL) ( (This)->lpVtbl -> ReindexSearchRoot(This,pszRootURL) )
#define ISearchCatalogManager2_put_ConnectTimeout(This,dwConnectTimeout) ( (This)->lpVtbl -> put_ConnectTimeout(This,dwConnectTimeout) )
#define ISearchCatalogManager2_get_ConnectTimeout(This,pdwConnectTimeout) ( (This)->lpVtbl -> get_ConnectTimeout(This,pdwConnectTimeout) )
#define ISearchCatalogManager2_put_DataTimeout(This,dwDataTimeout) ( (This)->lpVtbl -> put_DataTimeout(This,dwDataTimeout) )
#define ISearchCatalogManager2_get_DataTimeout(This,pdwDataTimeout) ( (This)->lpVtbl -> get_DataTimeout(This,pdwDataTimeout) )
#define ISearchCatalogManager2_NumberOfItems(This,plCount) ( (This)->lpVtbl -> NumberOfItems(This,plCount) )
#define ISearchCatalogManager2_NumberOfItemsToIndex(This,plIncrementalCount,plNotificationQueue,plHighPriorityQueue) ( (This)->lpVtbl -> NumberOfItemsToIndex(This,plIncrementalCount,plNotificationQueue,plHighPriorityQueue) )
#define ISearchCatalogManager2_URLBeingIndexed(This,pszUrl) ( (This)->lpVtbl -> URLBeingIndexed(This,pszUrl) )
#define ISearchCatalogManager2_GetURLIndexingState(This,pszURL,pdwState) ( (This)->lpVtbl -> GetURLIndexingState(This,pszURL,pdwState) )
#define ISearchCatalogManager2_GetPersistentItemsChangedSink(This,ppISearchPersistentItemsChangedSink) ( (This)->lpVtbl -> GetPersistentItemsChangedSink(This,ppISearchPersistentItemsChangedSink) )
#define ISearchCatalogManager2_RegisterViewForNotification(This,pszView,pViewChangedSink,pdwCookie) ( (This)->lpVtbl -> RegisterViewForNotification(This,pszView,pViewChangedSink,pdwCookie) )
#define ISearchCatalogManager2_GetItemsChangedSink(This,pISearchNotifyInlineSite,riid,ppv,pGUIDCatalogResetSignature,pGUIDCheckPointSignature,pdwLastCheckPointNumber) ( (This)->lpVtbl -> GetItemsChangedSink(This,pISearchNotifyInlineSite,riid,ppv,pGUIDCatalogResetSignature,pGUIDCheckPointSignature,pdwLastCheckPointNumber) )
#define ISearchCatalogManager2_UnregisterViewForNotification(This,dwCookie) ( (This)->lpVtbl -> UnregisterViewForNotification(This,dwCookie) )
#define ISearchCatalogManager2_SetExtensionClusion(This,pszExtension,fExclude) ( (This)->lpVtbl -> SetExtensionClusion(This,pszExtension,fExclude) )
#define ISearchCatalogManager2_EnumerateExcludedExtensions(This,ppExtensions) ( (This)->lpVtbl -> EnumerateExcludedExtensions(This,ppExtensions) )
#define ISearchCatalogManager2_GetQueryHelper(This,ppSearchQueryHelper) ( (This)->lpVtbl -> GetQueryHelper(This,ppSearchQueryHelper) )
#define ISearchCatalogManager2_put_DiacriticSensitivity(This,fDiacriticSensitive) ( (This)->lpVtbl -> put_DiacriticSensitivity(This,fDiacriticSensitive) )
#define ISearchCatalogManager2_get_DiacriticSensitivity(This,pfDiacriticSensitive) ( (This)->lpVtbl -> get_DiacriticSensitivity(This,pfDiacriticSensitive) )
#define ISearchCatalogManager2_GetCrawlScopeManager(This,ppCrawlScopeManager) ( (This)->lpVtbl -> GetCrawlScopeManager(This,ppCrawlScopeManager) )
#define ISearchCatalogManager2_PrioritizeMatchingURLs(This,pszPattern,dwPrioritizeFlags) ( (This)->lpVtbl -> PrioritizeMatchingURLs(This,pszPattern,dwPrioritizeFlags) )
#endif
#endif
#ifndef __ISearchQueryHelper_INTERFACE_DEFINED__
#define __ISearchQueryHelper_INTERFACE_DEFINED__
typedef enum _SEARCH_TERM_EXPANSION
{
	SEARCH_TERM_NO_EXPANSION = 0,
	SEARCH_TERM_PREFIX_ALL = (SEARCH_TERM_NO_EXPANSION + 1),
	SEARCH_TERM_STEM_ALL = (SEARCH_TERM_PREFIX_ALL + 1)
} SEARCH_TERM_EXPANSION;
typedef enum _SEARCH_QUERY_SYNTAX
{
	SEARCH_NO_QUERY_SYNTAX = 0,
	SEARCH_ADVANCED_QUERY_SYNTAX = (SEARCH_NO_QUERY_SYNTAX + 1),
	SEARCH_NATURAL_QUERY_SYNTAX = (SEARCH_ADVANCED_QUERY_SYNTAX + 1)
} SEARCH_QUERY_SYNTAX;
typedef struct _SEARCH_COLUMN_PROPERTIES
{
	PROPVARIANT Value;
	LCID lcid;
} SEARCH_COLUMN_PROPERTIES;
extern const IID IID_ISearchQueryHelper;
typedef struct ISearchQueryHelperVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISearchQueryHelper * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISearchQueryHelper * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISearchQueryHelper * This);
	HRESULT(STDMETHODCALLTYPE * get_ConnectionString) (ISearchQueryHelper * This, LPWSTR * pszConnectionString);
	HRESULT(STDMETHODCALLTYPE * put_QueryContentLocale) (ISearchQueryHelper * This, LCID lcid);
	HRESULT(STDMETHODCALLTYPE * get_QueryContentLocale) (ISearchQueryHelper * This, LCID * plcid);
	HRESULT(STDMETHODCALLTYPE * put_QueryKeywordLocale) (ISearchQueryHelper * This, LCID lcid);
	HRESULT(STDMETHODCALLTYPE * get_QueryKeywordLocale) (ISearchQueryHelper * This, LCID * plcid);
	HRESULT(STDMETHODCALLTYPE * put_QueryTermExpansion) (ISearchQueryHelper * This, SEARCH_TERM_EXPANSION expandTerms);
	HRESULT(STDMETHODCALLTYPE * get_QueryTermExpansion) (ISearchQueryHelper * This, SEARCH_TERM_EXPANSION * pExpandTerms);
	HRESULT(STDMETHODCALLTYPE * put_QuerySyntax) (ISearchQueryHelper * This, SEARCH_QUERY_SYNTAX querySyntax);
	HRESULT(STDMETHODCALLTYPE * get_QuerySyntax) (ISearchQueryHelper * This, SEARCH_QUERY_SYNTAX * pQuerySyntax);
	HRESULT(STDMETHODCALLTYPE * put_QueryContentProperties) (ISearchQueryHelper * This, LPCWSTR pszContentProperties);
	HRESULT(STDMETHODCALLTYPE * get_QueryContentProperties) (ISearchQueryHelper * This, LPWSTR * ppszContentProperties);
	HRESULT(STDMETHODCALLTYPE * put_QuerySelectColumns) (ISearchQueryHelper * This, LPCWSTR pszSelectColumns);
	HRESULT(STDMETHODCALLTYPE * get_QuerySelectColumns) (ISearchQueryHelper * This, LPWSTR * ppszSelectColumns);
	HRESULT(STDMETHODCALLTYPE * put_QueryWhereRestrictions) (ISearchQueryHelper * This, LPCWSTR pszRestrictions);
	HRESULT(STDMETHODCALLTYPE * get_QueryWhereRestrictions) (ISearchQueryHelper * This, LPWSTR * ppszRestrictions);
	HRESULT(STDMETHODCALLTYPE * put_QuerySorting) (ISearchQueryHelper * This, LPCWSTR pszSorting);
	HRESULT(STDMETHODCALLTYPE * get_QuerySorting) (ISearchQueryHelper * This, LPWSTR * ppszSorting);
	HRESULT(STDMETHODCALLTYPE * GenerateSQLFromUserQuery) (ISearchQueryHelper * This, LPCWSTR pszQuery, LPWSTR * ppszSQL);
	HRESULT(STDMETHODCALLTYPE * WriteProperties) (ISearchQueryHelper * This, ITEMID itemID, DWORD dwNumberOfColumns, PROPERTYKEY * pColumns, SEARCH_COLUMN_PROPERTIES * pValues, FILETIME * pftGatherModifiedTime);
	HRESULT(STDMETHODCALLTYPE * put_QueryMaxResults) (ISearchQueryHelper * This, LONG cMaxResults);
	HRESULT(STDMETHODCALLTYPE * get_QueryMaxResults) (ISearchQueryHelper * This, LONG * pcMaxResults);
	END_INTERFACE
}  ISearchQueryHelperVtbl;
interface ISearchQueryHelper
{
	CONST_VTBL struct ISearchQueryHelperVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISearchQueryHelper_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISearchQueryHelper_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISearchQueryHelper_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISearchQueryHelper_get_ConnectionString(This,pszConnectionString) ( (This)->lpVtbl -> get_ConnectionString(This,pszConnectionString) )
#define ISearchQueryHelper_put_QueryContentLocale(This,lcid) ( (This)->lpVtbl -> put_QueryContentLocale(This,lcid) )
#define ISearchQueryHelper_get_QueryContentLocale(This,plcid) ( (This)->lpVtbl -> get_QueryContentLocale(This,plcid) )
#define ISearchQueryHelper_put_QueryKeywordLocale(This,lcid) ( (This)->lpVtbl -> put_QueryKeywordLocale(This,lcid) )
#define ISearchQueryHelper_get_QueryKeywordLocale(This,plcid) ( (This)->lpVtbl -> get_QueryKeywordLocale(This,plcid) )
#define ISearchQueryHelper_put_QueryTermExpansion(This,expandTerms) ( (This)->lpVtbl -> put_QueryTermExpansion(This,expandTerms) )
#define ISearchQueryHelper_get_QueryTermExpansion(This,pExpandTerms) ( (This)->lpVtbl -> get_QueryTermExpansion(This,pExpandTerms) )
#define ISearchQueryHelper_put_QuerySyntax(This,querySyntax) ( (This)->lpVtbl -> put_QuerySyntax(This,querySyntax) )
#define ISearchQueryHelper_get_QuerySyntax(This,pQuerySyntax) ( (This)->lpVtbl -> get_QuerySyntax(This,pQuerySyntax) )
#define ISearchQueryHelper_put_QueryContentProperties(This,pszContentProperties) ( (This)->lpVtbl -> put_QueryContentProperties(This,pszContentProperties) )
#define ISearchQueryHelper_get_QueryContentProperties(This,ppszContentProperties) ( (This)->lpVtbl -> get_QueryContentProperties(This,ppszContentProperties) )
#define ISearchQueryHelper_put_QuerySelectColumns(This,pszSelectColumns) ( (This)->lpVtbl -> put_QuerySelectColumns(This,pszSelectColumns) )
#define ISearchQueryHelper_get_QuerySelectColumns(This,ppszSelectColumns) ( (This)->lpVtbl -> get_QuerySelectColumns(This,ppszSelectColumns) )
#define ISearchQueryHelper_put_QueryWhereRestrictions(This,pszRestrictions) ( (This)->lpVtbl -> put_QueryWhereRestrictions(This,pszRestrictions) )
#define ISearchQueryHelper_get_QueryWhereRestrictions(This,ppszRestrictions) ( (This)->lpVtbl -> get_QueryWhereRestrictions(This,ppszRestrictions) )
#define ISearchQueryHelper_put_QuerySorting(This,pszSorting) ( (This)->lpVtbl -> put_QuerySorting(This,pszSorting) )
#define ISearchQueryHelper_get_QuerySorting(This,ppszSorting) ( (This)->lpVtbl -> get_QuerySorting(This,ppszSorting) )
#define ISearchQueryHelper_GenerateSQLFromUserQuery(This,pszQuery,ppszSQL) ( (This)->lpVtbl -> GenerateSQLFromUserQuery(This,pszQuery,ppszSQL) )
#define ISearchQueryHelper_WriteProperties(This,itemID,dwNumberOfColumns,pColumns,pValues,pftGatherModifiedTime) ( (This)->lpVtbl -> WriteProperties(This,itemID,dwNumberOfColumns,pColumns,pValues,pftGatherModifiedTime) )
#define ISearchQueryHelper_put_QueryMaxResults(This,cMaxResults) ( (This)->lpVtbl -> put_QueryMaxResults(This,cMaxResults) )
#define ISearchQueryHelper_get_QueryMaxResults(This,pcMaxResults) ( (This)->lpVtbl -> get_QueryMaxResults(This,pcMaxResults) )
#endif
#endif
typedef enum __MIDL___MIDL_itf_searchapi_0000_0025_0001
{
	PRIORITY_LEVEL_FOREGROUND = 0,
	PRIORITY_LEVEL_HIGH = 1,
	PRIORITY_LEVEL_LOW = 2,
	PRIORITY_LEVEL_DEFAULT = 3
} PRIORITY_LEVEL;
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0025_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0025_v0_0_s_ifspec;
#ifndef __IRowsetPrioritization_INTERFACE_DEFINED__
#define __IRowsetPrioritization_INTERFACE_DEFINED__
extern const IID IID_IRowsetPrioritization;
typedef struct IRowsetPrioritizationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRowsetPrioritization * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRowsetPrioritization * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRowsetPrioritization * This);
	HRESULT(STDMETHODCALLTYPE * SetScopePriority) (IRowsetPrioritization * This, PRIORITY_LEVEL priority, DWORD scopeStatisticsEventFrequency);
	HRESULT(STDMETHODCALLTYPE * GetScopePriority) (IRowsetPrioritization * This, PRIORITY_LEVEL * priority, DWORD * scopeStatisticsEventFrequency);
	HRESULT(STDMETHODCALLTYPE * GetScopeStatistics) (IRowsetPrioritization * This, DWORD * indexedDocumentCount, DWORD * oustandingAddCount, DWORD * oustandingModifyCount);
	END_INTERFACE
}  IRowsetPrioritizationVtbl;
interface IRowsetPrioritization
{
	CONST_VTBL struct IRowsetPrioritizationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRowsetPrioritization_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRowsetPrioritization_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRowsetPrioritization_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRowsetPrioritization_SetScopePriority(This,priority,scopeStatisticsEventFrequency) ( (This)->lpVtbl -> SetScopePriority(This,priority,scopeStatisticsEventFrequency) )
#define IRowsetPrioritization_GetScopePriority(This,priority,scopeStatisticsEventFrequency) ( (This)->lpVtbl -> GetScopePriority(This,priority,scopeStatisticsEventFrequency) )
#define IRowsetPrioritization_GetScopeStatistics(This,indexedDocumentCount,oustandingAddCount,oustandingModifyCount) ( (This)->lpVtbl -> GetScopeStatistics(This,indexedDocumentCount,oustandingAddCount,oustandingModifyCount) )
#endif
#endif
typedef enum __MIDL___MIDL_itf_searchapi_0000_0026_0001
{
	ROWSETEVENT_ITEMSTATE_NOTINROWSET = 0,
	ROWSETEVENT_ITEMSTATE_INROWSET = 1,
	ROWSETEVENT_ITEMSTATE_UNKNOWN = 2
} ROWSETEVENT_ITEMSTATE;
typedef enum __MIDL___MIDL_itf_searchapi_0000_0026_0002
{
	ROWSETEVENT_TYPE_DATAEXPIRED = 0,
	ROWSETEVENT_TYPE_FOREGROUNDLOST = 1,
	ROWSETEVENT_TYPE_SCOPESTATISTICS = 2
} ROWSETEVENT_TYPE;
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0026_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0026_v0_0_s_ifspec;
#ifndef __IRowsetEvents_INTERFACE_DEFINED__
#define __IRowsetEvents_INTERFACE_DEFINED__
extern const IID IID_IRowsetEvents;
typedef struct IRowsetEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRowsetEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRowsetEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRowsetEvents * This);
	HRESULT(STDMETHODCALLTYPE * OnNewItem) (IRowsetEvents * This, REFPROPVARIANT itemID, ROWSETEVENT_ITEMSTATE newItemState);
	HRESULT(STDMETHODCALLTYPE * OnChangedItem) (IRowsetEvents * This, REFPROPVARIANT itemID, ROWSETEVENT_ITEMSTATE rowsetItemState, ROWSETEVENT_ITEMSTATE changedItemState);
	HRESULT(STDMETHODCALLTYPE * OnDeletedItem) (IRowsetEvents * This, REFPROPVARIANT itemID, ROWSETEVENT_ITEMSTATE deletedItemState);
	HRESULT(STDMETHODCALLTYPE * OnRowsetEvent) (IRowsetEvents * This, ROWSETEVENT_TYPE eventType, REFPROPVARIANT eventData);
	END_INTERFACE
}  IRowsetEventsVtbl;
interface IRowsetEvents
{
	CONST_VTBL struct IRowsetEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRowsetEvents_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRowsetEvents_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRowsetEvents_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRowsetEvents_OnNewItem(This,itemID,newItemState) ( (This)->lpVtbl -> OnNewItem(This,itemID,newItemState) )
#define IRowsetEvents_OnChangedItem(This,itemID,rowsetItemState,changedItemState) ( (This)->lpVtbl -> OnChangedItem(This,itemID,rowsetItemState,changedItemState) )
#define IRowsetEvents_OnDeletedItem(This,itemID,deletedItemState) ( (This)->lpVtbl -> OnDeletedItem(This,itemID,deletedItemState) )
#define IRowsetEvents_OnRowsetEvent(This,eventType,eventData) ( (This)->lpVtbl -> OnRowsetEvent(This,eventType,eventData) )
#endif
#endif
#ifndef __ISearchManager_INTERFACE_DEFINED__
#define __ISearchManager_INTERFACE_DEFINED__
extern const IID IID_ISearchManager;
typedef struct ISearchManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISearchManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISearchManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISearchManager * This);
	HRESULT(STDMETHODCALLTYPE * GetIndexerVersionStr) (ISearchManager * This, LPWSTR * ppszVersionString);
	HRESULT(STDMETHODCALLTYPE * GetIndexerVersion) (ISearchManager * This, DWORD * pdwMajor, DWORD * pdwMinor);
	HRESULT(STDMETHODCALLTYPE * GetParameter) (ISearchManager * This, LPCWSTR pszName, PROPVARIANT ** ppValue);
	HRESULT(STDMETHODCALLTYPE * SetParameter) (ISearchManager * This, LPCWSTR pszName, const PROPVARIANT * pValue);
	HRESULT(STDMETHODCALLTYPE * get_ProxyName) (ISearchManager * This, LPWSTR * ppszProxyName);
	HRESULT(STDMETHODCALLTYPE * get_BypassList) (ISearchManager * This, LPWSTR * ppszBypassList);
	HRESULT(STDMETHODCALLTYPE * SetProxy) (ISearchManager * This, PROXY_ACCESS sUseProxy, BOOL fLocalByPassProxy, DWORD dwPortNumber, LPCWSTR pszProxyName, LPCWSTR pszByPassList);
	HRESULT(STDMETHODCALLTYPE * GetCatalog) (ISearchManager * This, LPCWSTR pszCatalog, ISearchCatalogManager ** ppCatalogManager);
	HRESULT(STDMETHODCALLTYPE * get_UserAgent) (ISearchManager * This, LPWSTR * ppszUserAgent);
	HRESULT(STDMETHODCALLTYPE * put_UserAgent) (ISearchManager * This, LPCWSTR pszUserAgent);
	HRESULT(STDMETHODCALLTYPE * get_UseProxy) (ISearchManager * This, PROXY_ACCESS * pUseProxy);
	HRESULT(STDMETHODCALLTYPE * get_LocalBypass) (ISearchManager * This, BOOL * pfLocalBypass);
	HRESULT(STDMETHODCALLTYPE * get_PortNumber) (ISearchManager * This, DWORD * pdwPortNumber);
	END_INTERFACE
}  ISearchManagerVtbl;
interface ISearchManager
{
	CONST_VTBL struct ISearchManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISearchManager_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISearchManager_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISearchManager_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISearchManager_GetIndexerVersionStr(This,ppszVersionString) ( (This)->lpVtbl -> GetIndexerVersionStr(This,ppszVersionString) )
#define ISearchManager_GetIndexerVersion(This,pdwMajor,pdwMinor) ( (This)->lpVtbl -> GetIndexerVersion(This,pdwMajor,pdwMinor) )
#define ISearchManager_GetParameter(This,pszName,ppValue) ( (This)->lpVtbl -> GetParameter(This,pszName,ppValue) )
#define ISearchManager_SetParameter(This,pszName,pValue) ( (This)->lpVtbl -> SetParameter(This,pszName,pValue) )
#define ISearchManager_get_ProxyName(This,ppszProxyName) ( (This)->lpVtbl -> get_ProxyName(This,ppszProxyName) )
#define ISearchManager_get_BypassList(This,ppszBypassList) ( (This)->lpVtbl -> get_BypassList(This,ppszBypassList) )
#define ISearchManager_SetProxy(This,sUseProxy,fLocalByPassProxy,dwPortNumber,pszProxyName,pszByPassList) ( (This)->lpVtbl -> SetProxy(This,sUseProxy,fLocalByPassProxy,dwPortNumber,pszProxyName,pszByPassList) )
#define ISearchManager_GetCatalog(This,pszCatalog,ppCatalogManager) ( (This)->lpVtbl -> GetCatalog(This,pszCatalog,ppCatalogManager) )
#define ISearchManager_get_UserAgent(This,ppszUserAgent) ( (This)->lpVtbl -> get_UserAgent(This,ppszUserAgent) )
#define ISearchManager_put_UserAgent(This,pszUserAgent) ( (This)->lpVtbl -> put_UserAgent(This,pszUserAgent) )
#define ISearchManager_get_UseProxy(This,pUseProxy) ( (This)->lpVtbl -> get_UseProxy(This,pUseProxy) )
#define ISearchManager_get_LocalBypass(This,pfLocalBypass) ( (This)->lpVtbl -> get_LocalBypass(This,pfLocalBypass) )
#define ISearchManager_get_PortNumber(This,pdwPortNumber) ( (This)->lpVtbl -> get_PortNumber(This,pdwPortNumber) )
#endif
#endif
extern const CLSID CLSID_CSearchLanguageSupport;
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0028_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_searchapi_0000_0028_v0_0_s_ifspec;
#ifndef __ISearchLanguageSupport_INTERFACE_DEFINED__
#define __ISearchLanguageSupport_INTERFACE_DEFINED__
extern const IID IID_ISearchLanguageSupport;
typedef struct ISearchLanguageSupportVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISearchLanguageSupport * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISearchLanguageSupport * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISearchLanguageSupport * This);
	HRESULT(STDMETHODCALLTYPE * SetDiacriticSensitivity) (ISearchLanguageSupport * This, BOOL fDiacriticSensitive);
	HRESULT(STDMETHODCALLTYPE * GetDiacriticSensitivity) (ISearchLanguageSupport * This, BOOL * pfDiacriticSensitive);
	HRESULT(STDMETHODCALLTYPE * LoadWordBreaker) (ISearchLanguageSupport * This, LCID lcid, REFIID riid, void **ppWordBreaker, LCID * pLcidUsed);
	HRESULT(STDMETHODCALLTYPE * LoadStemmer) (ISearchLanguageSupport * This, LCID lcid, REFIID riid, void **ppStemmer, LCID * pLcidUsed);
	HRESULT(STDMETHODCALLTYPE * IsPrefixNormalized) (ISearchLanguageSupport * This, LPCWSTR pwcsQueryToken, ULONG cwcQueryToken, LPCWSTR pwcsDocumentToken, ULONG cwcDocumentToken, ULONG * pulPrefixLength);
	END_INTERFACE
}  ISearchLanguageSupportVtbl;
interface ISearchLanguageSupport
{
	CONST_VTBL struct ISearchLanguageSupportVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISearchLanguageSupport_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISearchLanguageSupport_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISearchLanguageSupport_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISearchLanguageSupport_SetDiacriticSensitivity(This,fDiacriticSensitive) ( (This)->lpVtbl -> SetDiacriticSensitivity(This,fDiacriticSensitive) )
#define ISearchLanguageSupport_GetDiacriticSensitivity(This,pfDiacriticSensitive) ( (This)->lpVtbl -> GetDiacriticSensitivity(This,pfDiacriticSensitive) )
#define ISearchLanguageSupport_LoadWordBreaker(This,lcid,riid,ppWordBreaker,pLcidUsed) ( (This)->lpVtbl -> LoadWordBreaker(This,lcid,riid,ppWordBreaker,pLcidUsed) )
#define ISearchLanguageSupport_LoadStemmer(This,lcid,riid,ppStemmer,pLcidUsed) ( (This)->lpVtbl -> LoadStemmer(This,lcid,riid,ppStemmer,pLcidUsed) )
#define ISearchLanguageSupport_IsPrefixNormalized(This,pwcsQueryToken,cwcQueryToken,pwcsDocumentToken,cwcDocumentToken,pulPrefixLength) ( (This)->lpVtbl -> IsPrefixNormalized(This,pwcsQueryToken,cwcQueryToken,pwcsDocumentToken,cwcDocumentToken,pulPrefixLength) )
#endif
#endif
#ifndef __SearchAPILib_LIBRARY_DEFINED__
#define __SearchAPILib_LIBRARY_DEFINED__
extern const IID LIBID_SearchAPILib;
extern const CLSID CLSID_CSearchManager;
extern const CLSID CLSID_CSearchRoot;
extern const CLSID CLSID_CSearchScopeRule;
extern const CLSID CLSID_FilterRegistration;
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
HRESULT STDMETHODCALLTYPE ISearchCrawlScopeManager2_GetVersion_Proxy(ISearchCrawlScopeManager2 *This, long **plVersion, HANDLE *phFileMapping);
HRESULT STDMETHODCALLTYPE ISearchCrawlScopeManager2_GetVersion_Stub(ISearchCrawlScopeManager2 *This, long *plVersion);
#endif
