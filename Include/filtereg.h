/*+@@file@@----------------------------------------------------------------*//*!
 \file		filtereg.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 10 17:55:34 2016
 \date		Modified on Sun Jul 10 17:55:34 2016
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
#ifndef __filtereg_h__
#define __filtereg_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ILoadFilter_FWD_DEFINED__
#define __ILoadFilter_FWD_DEFINED__
typedef interface ILoadFilter ILoadFilter;
#endif
#include "oaidl.h"
#include "ocidl.h"
#include "filter.h"
extern const CLSID CLSID_FilterRegistration;
extern RPC_IF_HANDLE __MIDL_itf_filtereg_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_filtereg_0000_0000_v0_0_s_ifspec;
#ifndef __ILoadFilter_INTERFACE_DEFINED__
#define __ILoadFilter_INTERFACE_DEFINED__ 
typedef struct _FILTERED_DATA_SOURCES
{
	const WCHAR *pwcsExtension;
	const WCHAR *pwcsMime;
	const CLSID *pClsid;
	const WCHAR *pwcsOverride;
} 	FILTERED_DATA_SOURCES;
extern const IID IID_ILoadFilter;
typedef struct ILoadFilterVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ILoadFilter * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ILoadFilter * This);
	ULONG(STDMETHODCALLTYPE * Release) (ILoadFilter * This);
	HRESULT(STDMETHODCALLTYPE * LoadIFilter) (ILoadFilter * This, LPCWSTR pwcsPath, FILTERED_DATA_SOURCES * pFilteredSources, IUnknown * pUnkOuter, BOOL fUseDefault, CLSID * pFilterClsid, int *SearchDecSize, WCHAR ** pwcsSearchDesc, IFilter ** ppIFilt);
	HRESULT(STDMETHODCALLTYPE * LoadIFilterFromStorage) (ILoadFilter * This, IStorage * pStg, IUnknown * pUnkOuter, LPCWSTR pwcsOverride, BOOL fUseDefault, CLSID * pFilterClsid, int *SearchDecSize, WCHAR ** pwcsSearchDesc, IFilter ** ppIFilt);
	HRESULT(STDMETHODCALLTYPE * LoadIFilterFromStream) (ILoadFilter * This, IStream * pStm, FILTERED_DATA_SOURCES * pFilteredSources, IUnknown * pUnkOuter, BOOL fUseDefault, CLSID * pFilterClsid, int *SearchDecSize, WCHAR ** pwcsSearchDesc, IFilter ** ppIFilt);
	END_INTERFACE
} ILoadFilterVtbl;
interface ILoadFilter
{
    CONST_VTBL struct ILoadFilterVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ILoadFilter_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define ILoadFilter_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define ILoadFilter_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define ILoadFilter_LoadIFilter(This,pwcsPath,pFilteredSources,pUnkOuter,fUseDefault,pFilterClsid,SearchDecSize,pwcsSearchDesc,ppIFilt)    ( (This)->lpVtbl -> LoadIFilter(This,pwcsPath,pFilteredSources,pUnkOuter,fUseDefault,pFilterClsid,SearchDecSize,pwcsSearchDesc,ppIFilt) ) 
#define ILoadFilter_LoadIFilterFromStorage(This,pStg,pUnkOuter,pwcsOverride,fUseDefault,pFilterClsid,SearchDecSize,pwcsSearchDesc,ppIFilt)    ( (This)->lpVtbl -> LoadIFilterFromStorage(This,pStg,pUnkOuter,pwcsOverride,fUseDefault,pFilterClsid,SearchDecSize,pwcsSearchDesc,ppIFilt) ) 
#define ILoadFilter_LoadIFilterFromStream(This,pStm,pFilteredSources,pUnkOuter,fUseDefault,pFilterClsid,SearchDecSize,pwcsSearchDesc,ppIFilt)    ( (This)->lpVtbl -> LoadIFilterFromStream(This,pStm,pFilteredSources,pUnkOuter,fUseDefault,pFilterClsid,SearchDecSize,pwcsSearchDesc,ppIFilt) ) 
#endif
#endif
#endif
