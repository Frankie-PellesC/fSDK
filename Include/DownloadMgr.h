/*+@@file@@----------------------------------------------------------------*//*!
 \file		DownloadMgr.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Wed Jul  6 14:07:19 2016
 \date		Modified on Wed Jul  6 14:07:19 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
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
#ifndef __downloadmgr_h__
#define __downloadmgr_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IDownloadManager_FWD_DEFINED__
#define __IDownloadManager_FWD_DEFINED__
typedef interface IDownloadManager IDownloadManager;
#endif
#include <unknwn.h>
#include <ocidl.h>
#pragma comment(lib,"uuid.lib")
DEFINE_GUID(IID_IDownloadManager, 0x988934a4, 0x064b, 0x11d3, 0xbb, 0x80, 0x0, 0x10, 0x4b, 0x35, 0xe7, 0xf9);
#define SID_SDownloadManager IID_IDownloadManager
extern RPC_IF_HANDLE __MIDL_itf_downloadmgr_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_downloadmgr_0000_0000_v0_0_s_ifspec;
#ifndef __IDownloadManager_INTERFACE_DEFINED__
#define __IDownloadManager_INTERFACE_DEFINED__ 
extern const IID IID_IDownloadManager;

typedef struct IDownloadManagerVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDownloadManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDownloadManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDownloadManager * This);
	HRESULT(STDMETHODCALLTYPE * Download) (IDownloadManager * This, IMoniker * pmk, IBindCtx * pbc, DWORD dwBindVerb, LONG grfBINDF, BINDINFO * pBindInfo, LPCOLESTR pszHeaders, LPCOLESTR pszRedir, UINT uiCP);
    END_INTERFACE
} IDownloadManagerVtbl;
interface IDownloadManager
{
    CONST_VTBL struct IDownloadManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDownloadManager_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDownloadManager_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IDownloadManager_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IDownloadManager_Download(This,pmk,pbc,dwBindVerb,grfBINDF,pBindInfo,pszHeaders,pszRedir,uiCP)    ( (This)->lpVtbl -> Download(This,pmk,pbc,dwBindVerb,grfBINDF,pBindInfo,pszHeaders,pszRedir,uiCP) ) 
#endif
#endif
#endif
