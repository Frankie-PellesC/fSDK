/*+@@file@@----------------------------------------------------------------*//*!
 \file		DeleteBrowsingHistory.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Tue Jul  5 17:51:35 2016
 \date		Modified on Tue Jul  5 17:51:35 2016
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
#ifndef __deletebrowsinghistory_h__
#define __deletebrowsinghistory_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IDeleteBrowsingHistory_FWD_DEFINED__
#define __IDeleteBrowsingHistory_FWD_DEFINED__
typedef interface IDeleteBrowsingHistory IDeleteBrowsingHistory;
#endif
#include <ocidl.h>
DEFINE_GUID( CATID_DeleteBrowsingHistory, 0x31caf6e4,0xd6aa,0x4090,0xa0,0x50,0xa5,0xac,0x89,0x72,0xe9,0xef);
extern const GUID CATID_DeleteBrowsingHistory;
#define DELETE_BROWSING_HISTORY_HISTORY              0x0001
#define DELETE_BROWSING_HISTORY_COOKIES              0x0002
#define DELETE_BROWSING_HISTORY_TIF                  0x0004
#define DELETE_BROWSING_HISTORY_FORMDATA             0x0008
#define DELETE_BROWSING_HISTORY_PASSWORDS            0x0010
#define DELETE_BROWSING_HISTORY_PRESERVEFAVORITES    0x0020
extern RPC_IF_HANDLE __MIDL_itf_deletebrowsinghistory_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_deletebrowsinghistory_0000_0000_v0_0_s_ifspec;
#ifndef __IDeleteBrowsingHistory_INTERFACE_DEFINED__
#define __IDeleteBrowsingHistory_INTERFACE_DEFINED__ 
extern const IID IID_IDeleteBrowsingHistory;
typedef struct IDeleteBrowsingHistoryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDeleteBrowsingHistory *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDeleteBrowsingHistory * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDeleteBrowsingHistory * This);
	HRESULT(STDMETHODCALLTYPE * DeleteBrowsingHistory) (IDeleteBrowsingHistory * This, DWORD dwFlags);
	END_INTERFACE
} IDeleteBrowsingHistoryVtbl;
interface IDeleteBrowsingHistory
{
    CONST_VTBL struct IDeleteBrowsingHistoryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDeleteBrowsingHistory_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDeleteBrowsingHistory_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IDeleteBrowsingHistory_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IDeleteBrowsingHistory_DeleteBrowsingHistory(This,dwFlags)    ( (This)->lpVtbl -> DeleteBrowsingHistory(This,dwFlags) ) 
#endif
#endif
#endif
