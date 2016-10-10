/*+@@file@@----------------------------------------------------------------*//*!
 \file		ChanMgr.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul  3 16:13:37 2016
 \date		Modified on Sun Jul  3 16:13:37 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif
#include "rpc.h"
#include "rpcndr.h"
#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif
#ifndef __chanmgr_h__
#define __chanmgr_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IChannelMgr_FWD_DEFINED__
#define __IChannelMgr_FWD_DEFINED__
typedef interface IChannelMgr IChannelMgr;
#endif
#ifndef __IEnumChannels_FWD_DEFINED__
#define __IEnumChannels_FWD_DEFINED__
typedef interface IEnumChannels IEnumChannels;
#endif
#ifndef __ChannelMgr_FWD_DEFINED__
#define __ChannelMgr_FWD_DEFINED__
typedef struct ChannelMgr ChannelMgr;
#endif
#include "unknwn.h"
#pragma comment(lib,"uuid.lib")
extern RPC_IF_HANDLE __MIDL_itf_chanmgr_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_chanmgr_0000_0000_v0_0_s_ifspec;
#ifndef __CHANNELMGR_LIBRARY_DEFINED__
#define __CHANNELMGR_LIBRARY_DEFINED__
extern const IID LIBID_CHANNELMGR;
#ifndef __IChannelMgr_INTERFACE_DEFINED__
#define __IChannelMgr_INTERFACE_DEFINED__
typedef struct _tagChannelShortcutInfo
{
	DWORD cbSize;
	LPWSTR pszTitle;
	LPWSTR pszURL;
	LPWSTR pszLogo;
	LPWSTR pszIcon;
	LPWSTR pszWideLogo;
	BOOL bIsSoftware;
} CHANNELSHORTCUTINFO;
typedef struct _tagChannelCategoryInfo
{
	DWORD cbSize;
	LPWSTR pszTitle;
	LPWSTR pszURL;
	LPWSTR pszLogo;
	LPWSTR pszIcon;
	LPWSTR pszWideLogo;
} CHANNELCATEGORYINFO;
typedef
	enum _tagChannelEnumFlags { CHANENUM_CHANNELFOLDER = 0x1,
	CHANENUM_SOFTUPDATEFOLDER = 0x2,
	CHANENUM_DESKTOPFOLDER = 0x4,
	CHANENUM_TITLE = 0x10000,
	CHANENUM_PATH = 0x20000,
	CHANENUM_URL = 0x40000,
	CHANENUM_SUBSCRIBESTATE = 0x80000
} CHANNELENUMFLAGS;
#define CHANENUM_ALLFOLDERS (CHANENUM_CHANNELFOLDER | CHANENUM_SOFTUPDATEFOLDER | CHANENUM_DESKTOPFOLDER )
#define CHANENUM_ALLDATA    (CHANENUM_TITLE         | CHANENUM_PATH             | CHANENUM_URL           | CHANENUM_SUBSCRIBESTATE )
#define CHANENUM_ALL        (CHANENUM_CHANNELFOLDER | CHANENUM_SOFTUPDATEFOLDER | CHANENUM_DESKTOPFOLDER | CHANENUM_TITLE | CHANENUM_PATH | CHANENUM_URL | CHANENUM_SUBSCRIBESTATE)
extern const IID IID_IChannelMgr;
typedef struct IChannelMgrVtbl
{
BEGIN_INTERFACE
HRESULT(STDMETHODCALLTYPE * QueryInterface) (IChannelMgr * This, REFIID riid, void **ppvObject);
ULONG(STDMETHODCALLTYPE * AddRef) (IChannelMgr * This);
ULONG(STDMETHODCALLTYPE * Release) (IChannelMgr * This);
HRESULT(STDMETHODCALLTYPE * AddChannelShortcut) (IChannelMgr * This, CHANNELSHORTCUTINFO * pChannelInfo);
HRESULT(STDMETHODCALLTYPE * DeleteChannelShortcut) (IChannelMgr * This, LPWSTR pszTitle);
HRESULT(STDMETHODCALLTYPE * AddCategory) (IChannelMgr * This, CHANNELCATEGORYINFO * pCategoryInfo);
HRESULT(STDMETHODCALLTYPE * DeleteCategory) (IChannelMgr * This, LPWSTR pszTitle);
HRESULT(STDMETHODCALLTYPE * EnumChannels) (IChannelMgr * This, DWORD dwEnumFlags, LPCWSTR pszURL, IEnumChannels ** pIEnumChannels);
END_INTERFACE
} IChannelMgrVtbl;
interface IChannelMgr
{
	CONST_VTBL struct IChannelMgrVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IChannelMgr_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IChannelMgr_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IChannelMgr_Release(This)( (This)->lpVtbl -> Release(This) )
#define IChannelMgr_AddChannelShortcut(This,pChannelInfo)( (This)->lpVtbl -> AddChannelShortcut(This,pChannelInfo) )
#define IChannelMgr_DeleteChannelShortcut(This,pszTitle)( (This)->lpVtbl -> DeleteChannelShortcut(This,pszTitle) )
#define IChannelMgr_AddCategory(This,pCategoryInfo)( (This)->lpVtbl -> AddCategory(This,pCategoryInfo) )
#define IChannelMgr_DeleteCategory(This,pszTitle)( (This)->lpVtbl -> DeleteCategory(This,pszTitle) )
#define IChannelMgr_EnumChannels(This,dwEnumFlags,pszURL,pIEnumChannels)( (This)->lpVtbl -> EnumChannels(This,dwEnumFlags,pszURL,pIEnumChannels) )
#endif
HRESULT STDMETHODCALLTYPE IChannelMgr_AddChannelShortcut_Proxy(IChannelMgr *This, CHANNELSHORTCUTINFO *pChannelInfo);
void __RPC_STUB IChannelMgr_AddChannelShortcut_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IChannelMgr_DeleteChannelShortcut_Proxy(IChannelMgr *This, LPWSTR pszTitle);
void __RPC_STUB IChannelMgr_DeleteChannelShortcut_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IChannelMgr_AddCategory_Proxy(IChannelMgr *This, CHANNELCATEGORYINFO *pCategoryInfo);
void __RPC_STUB IChannelMgr_AddCategory_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IChannelMgr_DeleteCategory_Proxy(IChannelMgr *This, LPWSTR pszTitle);
void __RPC_STUB IChannelMgr_DeleteCategory_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IChannelMgr_EnumChannels_Proxy(IChannelMgr *This, DWORD dwEnumFlags, LPCWSTR pszURL, IEnumChannels **pIEnumChannels);
void __RPC_STUB IChannelMgr_EnumChannels_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IEnumChannels_INTERFACE_DEFINED__
#define __IEnumChannels_INTERFACE_DEFINED__
typedef
	enum _tagSubcriptionState { SUBSTATE_NOTSUBSCRIBED = 0,
	SUBSTATE_PARTIALSUBSCRIPTION = (SUBSTATE_NOTSUBSCRIBED + 1),
	SUBSTATE_FULLSUBSCRIPTION = (SUBSTATE_PARTIALSUBSCRIPTION + 1)
} SUBSCRIPTIONSTATE;
typedef struct _tagChannelInfo
{
	LPOLESTR pszTitle;
	LPOLESTR pszPath;
	LPOLESTR pszURL;
	SUBSCRIPTIONSTATE stSubscriptionState;
} CHANNELENUMINFO;
extern const IID IID_IEnumChannels;
typedef struct IEnumChannelsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IEnumChannels *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IEnumChannels *This);
	ULONG(STDMETHODCALLTYPE *Release) (IEnumChannels *This);
	HRESULT(STDMETHODCALLTYPE *Next) (IEnumChannels *This, ULONG celt, CHANNELENUMINFO *rgChanInf, ULONG *pceltFetched);
	HRESULT(STDMETHODCALLTYPE *Skip) (IEnumChannels *This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE *Reset) (IEnumChannels *This);
	HRESULT(STDMETHODCALLTYPE *Clone) (IEnumChannels *This, IEnumChannels **ppenum);
	END_INTERFACE
} IEnumChannelsVtbl;
interface IEnumChannels
{
	CONST_VTBL struct IEnumChannelsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumChannels_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumChannels_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEnumChannels_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEnumChannels_Next(This,celt,rgChanInf,pceltFetched)( (This)->lpVtbl -> Next(This,celt,rgChanInf,pceltFetched) )
#define IEnumChannels_Skip(This,celt)( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumChannels_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define IEnumChannels_Clone(This,ppenum)( (This)->lpVtbl -> Clone(This,ppenum) )
#endif
HRESULT STDMETHODCALLTYPE IEnumChannels_Next_Proxy(IEnumChannels *This, ULONG celt, CHANNELENUMINFO *rgChanInf, ULONG *pceltFetched);
void __RPC_STUB IEnumChannels_Next_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IEnumChannels_Skip_Proxy(IEnumChannels *This, ULONG celt);
void __RPC_STUB IEnumChannels_Skip_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IEnumChannels_Reset_Proxy(IEnumChannels *This);
void __RPC_STUB IEnumChannels_Reset_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IEnumChannels_Clone_Proxy(IEnumChannels *This, IEnumChannels **ppenum);
void __RPC_STUB IEnumChannels_Clone_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
extern const CLSID CLSID_ChannelMgr;
#endif
#endif
