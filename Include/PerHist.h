/*+@@file@@----------------------------------------------------------------*//*!
 \file		PerHist.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 12 00:16:24 2016
 \date		Modified on Mon Sep 12 00:16:24 2016
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
#ifndef __perhist_h__
#define __perhist_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IPersistHistory_FWD_DEFINED__
#define __IPersistHistory_FWD_DEFINED__
typedef interface IPersistHistory IPersistHistory;
#endif
#include <objidl.h>
#include <oleidl.h>
#pragma comment(lib,"uuid.lib")
#ifndef _LPPERSISTHISTORY_DEFINED
#define _LPPERSISTHISTORY_DEFINED
extern RPC_IF_HANDLE __MIDL_itf_perhist_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_perhist_0000_0000_v0_0_s_ifspec;
#ifndef __IPersistHistory_INTERFACE_DEFINED__
#define __IPersistHistory_INTERFACE_DEFINED__
typedef IPersistHistory *LPPERSISTHISTORY;
extern const IID IID_IPersistHistory;
typedef struct IPersistHistoryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPersistHistory * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPersistHistory * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPersistHistory * This);
	HRESULT(STDMETHODCALLTYPE * GetClassID) (IPersistHistory * This, CLSID * pClassID);
	HRESULT(STDMETHODCALLTYPE * LoadHistory) (IPersistHistory * This, IStream * pStream, IBindCtx * pbc);
	HRESULT(STDMETHODCALLTYPE * SaveHistory) (IPersistHistory * This, IStream * pStream);
	HRESULT(STDMETHODCALLTYPE * SetPositionCookie) (IPersistHistory * This, DWORD dwPositioncookie);
	HRESULT(STDMETHODCALLTYPE * GetPositionCookie) (IPersistHistory * This, DWORD * pdwPositioncookie);
	END_INTERFACE
}  IPersistHistoryVtbl;
interface IPersistHistory
{
	CONST_VTBL struct IPersistHistoryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPersistHistory_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPersistHistory_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IPersistHistory_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IPersistHistory_GetClassID(This,pClassID) ( (This)->lpVtbl -> GetClassID(This,pClassID) )
#define IPersistHistory_LoadHistory(This,pStream,pbc) ( (This)->lpVtbl -> LoadHistory(This,pStream,pbc) )
#define IPersistHistory_SaveHistory(This,pStream) ( (This)->lpVtbl -> SaveHistory(This,pStream) )
#define IPersistHistory_SetPositionCookie(This,dwPositioncookie) ( (This)->lpVtbl -> SetPositionCookie(This,dwPositioncookie) )
#define IPersistHistory_GetPositionCookie(This,pdwPositioncookie) ( (This)->lpVtbl -> GetPositionCookie(This,pdwPositioncookie) )
#endif
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_perhist_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_perhist_0000_0001_v0_0_s_ifspec;
#endif
