/*+@@file@@----------------------------------------------------------------*//*!
 \file		oleTx2xa.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep  5 00:04:34 2016
 \date		Modified on Mon Sep  5 00:04:34 2016
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
#ifndef __oletx2xa_h__
#define __oletx2xa_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IDtcToXaMapper_FWD_DEFINED__
#define __IDtcToXaMapper_FWD_DEFINED__
typedef interface IDtcToXaMapper IDtcToXaMapper;
#endif
#ifndef __IDtcToXaHelperFactory_FWD_DEFINED__
#define __IDtcToXaHelperFactory_FWD_DEFINED__
typedef interface IDtcToXaHelperFactory IDtcToXaHelperFactory;
#endif
#ifndef __IDtcToXaHelper_FWD_DEFINED__
#define __IDtcToXaHelper_FWD_DEFINED__
typedef interface IDtcToXaHelper IDtcToXaHelper;
#endif
#ifndef __IDtcToXaHelperSinglePipe_FWD_DEFINED__
#define __IDtcToXaHelperSinglePipe_FWD_DEFINED__
typedef interface IDtcToXaHelperSinglePipe IDtcToXaHelperSinglePipe;
#endif
#include <unknwn.h>
#include <transact.h>
#include <txcoord.h>
#include <xa.h>
extern RPC_IF_HANDLE __MIDL_itf_oletx2xa_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_oletx2xa_0000_0000_v0_0_s_ifspec;
#ifndef __XaMapperTypes_INTERFACE_DEFINED__
#define __XaMapperTypes_INTERFACE_DEFINED__
typedef DWORD XA_SWITCH_FLAGS;
#define XA_SWITCH_F_DTC      0x00000001
#define XA_FMTID_DTC         0x00445443
#define XA_FMTID_DTC_VER1    0x01445443
const XID XID_NULL = { -1, 0, 0, '\0' };
extern RPC_IF_HANDLE XaMapperTypes_v0_0_c_ifspec;
extern RPC_IF_HANDLE XaMapperTypes_v0_0_s_ifspec;
#endif
#ifndef __XaMapperAPIs_INTERFACE_DEFINED__
#define __XaMapperAPIs_INTERFACE_DEFINED__
HRESULT __cdecl GetXaSwitch(XA_SWITCH_FLAGS XaSwitchFlags, xa_switch_t **ppXaSwitch);
extern RPC_IF_HANDLE XaMapperAPIs_v0_0_c_ifspec;
extern RPC_IF_HANDLE XaMapperAPIs_v0_0_s_ifspec;
#endif
#ifndef __IDtcToXaMapper_INTERFACE_DEFINED__
#define __IDtcToXaMapper_INTERFACE_DEFINED__
extern const IID IID_IDtcToXaMapper;
typedef struct IDtcToXaMapperVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDtcToXaMapper *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDtcToXaMapper *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDtcToXaMapper *This);
	HRESULT(STDMETHODCALLTYPE *RequestNewResourceManager) (IDtcToXaMapper *This, char *pszDSN, char *pszClientDllName, DWORD *pdwRMCookie);
	HRESULT(STDMETHODCALLTYPE *TranslateTridToXid) (IDtcToXaMapper *This, DWORD *pdwITransaction, DWORD dwRMCookie, XID *pXid);
	HRESULT(STDMETHODCALLTYPE *EnlistResourceManager) (IDtcToXaMapper *This, DWORD dwRMCookie, DWORD *pdwITransaction);
	HRESULT(STDMETHODCALLTYPE *ReleaseResourceManager) (IDtcToXaMapper *This, DWORD dwRMCookie);
	END_INTERFACE
}  IDtcToXaMapperVtbl;
interface IDtcToXaMapper
{
	CONST_VTBL struct IDtcToXaMapperVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDtcToXaMapper_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDtcToXaMapper_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IDtcToXaMapper_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IDtcToXaMapper_RequestNewResourceManager(This,pszDSN,pszClientDllName,pdwRMCookie) ( (This)->lpVtbl -> RequestNewResourceManager(This,pszDSN,pszClientDllName,pdwRMCookie) )
#define IDtcToXaMapper_TranslateTridToXid(This,pdwITransaction,dwRMCookie,pXid) ( (This)->lpVtbl -> TranslateTridToXid(This,pdwITransaction,dwRMCookie,pXid) )
#define IDtcToXaMapper_EnlistResourceManager(This,dwRMCookie,pdwITransaction) ( (This)->lpVtbl -> EnlistResourceManager(This,dwRMCookie,pdwITransaction) )
#define IDtcToXaMapper_ReleaseResourceManager(This,dwRMCookie) ( (This)->lpVtbl -> ReleaseResourceManager(This,dwRMCookie) )
#endif
#endif
#ifndef __IDtcToXaHelperFactory_INTERFACE_DEFINED__
#define __IDtcToXaHelperFactory_INTERFACE_DEFINED__
extern const IID IID_IDtcToXaHelperFactory;
typedef struct IDtcToXaHelperFactoryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDtcToXaHelperFactory *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDtcToXaHelperFactory *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDtcToXaHelperFactory *This);
	HRESULT(STDMETHODCALLTYPE *Create) (IDtcToXaHelperFactory *This, char *pszDSN, char *pszClientDllName, GUID *pguidRm, IDtcToXaHelper **ppXaHelper);
	END_INTERFACE
}  IDtcToXaHelperFactoryVtbl;
interface IDtcToXaHelperFactory
{
	CONST_VTBL struct IDtcToXaHelperFactoryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDtcToXaHelperFactory_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDtcToXaHelperFactory_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IDtcToXaHelperFactory_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IDtcToXaHelperFactory_Create(This,pszDSN,pszClientDllName,pguidRm,ppXaHelper) ( (This)->lpVtbl -> Create(This,pszDSN,pszClientDllName,pguidRm,ppXaHelper) )
#endif
#endif
#ifndef __IDtcToXaHelper_INTERFACE_DEFINED__
#define __IDtcToXaHelper_INTERFACE_DEFINED__
extern const IID IID_IDtcToXaHelper;
typedef struct IDtcToXaHelperVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDtcToXaHelper *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDtcToXaHelper *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDtcToXaHelper *This);
	HRESULT(STDMETHODCALLTYPE *Close) (IDtcToXaHelper *This, BOOL i_fDoRecovery);
	HRESULT(STDMETHODCALLTYPE *TranslateTridToXid) (IDtcToXaHelper *This, ITransaction *pITransaction, GUID *pguidBqual, XID *pXid);
	END_INTERFACE
}  IDtcToXaHelperVtbl;
interface IDtcToXaHelper
{
	CONST_VTBL struct IDtcToXaHelperVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDtcToXaHelper_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDtcToXaHelper_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IDtcToXaHelper_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IDtcToXaHelper_Close(This,i_fDoRecovery) ( (This)->lpVtbl -> Close(This,i_fDoRecovery) )
#define IDtcToXaHelper_TranslateTridToXid(This,pITransaction,pguidBqual,pXid) ( (This)->lpVtbl -> TranslateTridToXid(This,pITransaction,pguidBqual,pXid) )
#endif
#endif
#ifndef __IDtcToXaHelperSinglePipe_INTERFACE_DEFINED__
#define __IDtcToXaHelperSinglePipe_INTERFACE_DEFINED__
extern const IID IID_IDtcToXaHelperSinglePipe;
typedef struct IDtcToXaHelperSinglePipeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDtcToXaHelperSinglePipe *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDtcToXaHelperSinglePipe *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDtcToXaHelperSinglePipe *This);
	HRESULT(STDMETHODCALLTYPE *XARMCreate) (IDtcToXaHelperSinglePipe *This, char *pszDSN, char *pszClientDll, DWORD *pdwRMCookie);
	HRESULT(STDMETHODCALLTYPE *ConvertTridToXID) (IDtcToXaHelperSinglePipe *This, DWORD *pdwITrans, DWORD dwRMCookie, XID *pxid);
	HRESULT(STDMETHODCALLTYPE *EnlistWithRM) (IDtcToXaHelperSinglePipe *This, DWORD dwRMCookie, ITransaction *i_pITransaction, ITransactionResourceAsync *i_pITransRes, ITransactionEnlistmentAsync **o_ppITransEnslitment);
	void (STDMETHODCALLTYPE *ReleaseRMCookie) (IDtcToXaHelperSinglePipe *This, DWORD i_dwRMCookie, BOOL i_fNormal);
	END_INTERFACE
}  IDtcToXaHelperSinglePipeVtbl;
interface IDtcToXaHelperSinglePipe
{
	CONST_VTBL struct IDtcToXaHelperSinglePipeVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDtcToXaHelperSinglePipe_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDtcToXaHelperSinglePipe_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IDtcToXaHelperSinglePipe_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IDtcToXaHelperSinglePipe_XARMCreate(This,pszDSN,pszClientDll,pdwRMCookie) ( (This)->lpVtbl -> XARMCreate(This,pszDSN,pszClientDll,pdwRMCookie) )
#define IDtcToXaHelperSinglePipe_ConvertTridToXID(This,pdwITrans,dwRMCookie,pxid) ( (This)->lpVtbl -> ConvertTridToXID(This,pdwITrans,dwRMCookie,pxid) )
#define IDtcToXaHelperSinglePipe_EnlistWithRM(This,dwRMCookie,i_pITransaction,i_pITransRes,o_ppITransEnslitment) ( (This)->lpVtbl -> EnlistWithRM(This,dwRMCookie,i_pITransaction,i_pITransRes,o_ppITransEnslitment) )
#define IDtcToXaHelperSinglePipe_ReleaseRMCookie(This,i_dwRMCookie,i_fNormal) ( (This)->lpVtbl -> ReleaseRMCookie(This,i_dwRMCookie,i_fNormal) )
#endif
#endif
//#define  IID_IDtcToXaMapper                          __uuidof(IDtcToXaMapper)
//#define  IID_IDtcToXaHelperFactory                   __uuidof(IDtcToXaHelperFactory)
//#define  IID_IDtcToXaHelper                          __uuidof(IDtcToXaHelper)
//#define  IID_IDtcToXaHelperSinglePipe                __uuidof(IDtcToXaHelperSinglePipe)
extern RPC_IF_HANDLE __MIDL_itf_oletx2xa_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_oletx2xa_0000_0006_v0_0_s_ifspec;
#endif
