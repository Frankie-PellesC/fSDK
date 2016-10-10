/*+@@file@@----------------------------------------------------------------*//*!
 \file		TxCoord.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul  3 21:28:26 2016
 \date		Modified on Sun Jul  3 21:28:26 2016
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
#ifndef __txcoord_h__
#define __txcoord_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ITransactionResourceAsync_FWD_DEFINED__
#define __ITransactionResourceAsync_FWD_DEFINED__
typedef interface ITransactionResourceAsync ITransactionResourceAsync;
#endif
#ifndef __ITransactionLastResourceAsync_FWD_DEFINED__
#define __ITransactionLastResourceAsync_FWD_DEFINED__
typedef interface ITransactionLastResourceAsync ITransactionLastResourceAsync;
#endif
#ifndef __ITransactionResource_FWD_DEFINED__
#define __ITransactionResource_FWD_DEFINED__
typedef interface ITransactionResource ITransactionResource;
#endif
#ifndef __ITransactionEnlistmentAsync_FWD_DEFINED__
#define __ITransactionEnlistmentAsync_FWD_DEFINED__
typedef interface ITransactionEnlistmentAsync ITransactionEnlistmentAsync;
#endif
#ifndef __ITransactionLastEnlistmentAsync_FWD_DEFINED__
#define __ITransactionLastEnlistmentAsync_FWD_DEFINED__
typedef interface ITransactionLastEnlistmentAsync ITransactionLastEnlistmentAsync;
#endif
#ifndef __ITransactionExportFactory_FWD_DEFINED__
#define __ITransactionExportFactory_FWD_DEFINED__
typedef interface ITransactionExportFactory ITransactionExportFactory;
#endif
#ifndef __ITransactionImportWhereabouts_FWD_DEFINED__
#define __ITransactionImportWhereabouts_FWD_DEFINED__
typedef interface ITransactionImportWhereabouts ITransactionImportWhereabouts;
#endif
#ifndef __ITransactionExport_FWD_DEFINED__
#define __ITransactionExport_FWD_DEFINED__
typedef interface ITransactionExport ITransactionExport;
#endif
#ifndef __ITransactionImport_FWD_DEFINED__
#define __ITransactionImport_FWD_DEFINED__
typedef interface ITransactionImport ITransactionImport;
#endif
#ifndef __ITipTransaction_FWD_DEFINED__
#define __ITipTransaction_FWD_DEFINED__
typedef interface ITipTransaction ITipTransaction;
#endif
#ifndef __ITipHelper_FWD_DEFINED__
#define __ITipHelper_FWD_DEFINED__
typedef interface ITipHelper ITipHelper;
#endif
#ifndef __ITipPullSink_FWD_DEFINED__
#define __ITipPullSink_FWD_DEFINED__
typedef interface ITipPullSink ITipPullSink;
#endif
#ifndef __IDtcNetworkAccessConfig_FWD_DEFINED__
#define __IDtcNetworkAccessConfig_FWD_DEFINED__
typedef interface IDtcNetworkAccessConfig IDtcNetworkAccessConfig;
#endif
#ifndef __IDtcNetworkAccessConfig2_FWD_DEFINED__
#define __IDtcNetworkAccessConfig2_FWD_DEFINED__
typedef interface IDtcNetworkAccessConfig2 IDtcNetworkAccessConfig2;
#endif
#ifndef __IDtcNetworkAccessConfig3_FWD_DEFINED__
#define __IDtcNetworkAccessConfig3_FWD_DEFINED__
typedef interface IDtcNetworkAccessConfig3 IDtcNetworkAccessConfig3;
#endif
#include "transact.h"
#include "objidl.h"
extern RPC_IF_HANDLE __MIDL_itf_txcoord_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_txcoord_0000_0000_v0_0_s_ifspec;
#ifndef __ITransactionResourceAsync_INTERFACE_DEFINED__
#define __ITransactionResourceAsync_INTERFACE_DEFINED__
extern const IID IID_ITransactionResourceAsync;
typedef struct ITransactionResourceAsyncVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITransactionResourceAsync * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITransactionResourceAsync * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITransactionResourceAsync * This);
	HRESULT(STDMETHODCALLTYPE * PrepareRequest) (ITransactionResourceAsync * This, BOOL fRetaining, DWORD grfRM, BOOL fWantMoniker, BOOL fSinglePhase);
	HRESULT(STDMETHODCALLTYPE * CommitRequest) (ITransactionResourceAsync * This, DWORD grfRM, XACTUOW * pNewUOW);
	HRESULT(STDMETHODCALLTYPE * AbortRequest) (ITransactionResourceAsync * This, BOID * pboidReason, BOOL fRetaining, XACTUOW * pNewUOW);
	HRESULT(STDMETHODCALLTYPE * TMDown) (ITransactionResourceAsync * This);
	END_INTERFACE
}  ITransactionResourceAsyncVtbl;
interface ITransactionResourceAsync
{
	CONST_VTBL struct ITransactionResourceAsyncVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITransactionResourceAsync_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITransactionResourceAsync_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITransactionResourceAsync_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITransactionResourceAsync_PrepareRequest(This,fRetaining,grfRM,fWantMoniker,fSinglePhase)( (This)->lpVtbl -> PrepareRequest(This,fRetaining,grfRM,fWantMoniker,fSinglePhase) )
#define ITransactionResourceAsync_CommitRequest(This,grfRM,pNewUOW)( (This)->lpVtbl -> CommitRequest(This,grfRM,pNewUOW) )
#define ITransactionResourceAsync_AbortRequest(This,pboidReason,fRetaining,pNewUOW)( (This)->lpVtbl -> AbortRequest(This,pboidReason,fRetaining,pNewUOW) )
#define ITransactionResourceAsync_TMDown(This)( (This)->lpVtbl -> TMDown(This) )
#endif
#endif
#ifndef __ITransactionLastResourceAsync_INTERFACE_DEFINED__
#define __ITransactionLastResourceAsync_INTERFACE_DEFINED__
extern const IID IID_ITransactionLastResourceAsync;
typedef struct ITransactionLastResourceAsyncVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITransactionLastResourceAsync * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITransactionLastResourceAsync * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITransactionLastResourceAsync * This);
	HRESULT(STDMETHODCALLTYPE * DelegateCommit) (ITransactionLastResourceAsync * This, DWORD grfRM);
	HRESULT(STDMETHODCALLTYPE * ForgetRequest) (ITransactionLastResourceAsync * This, XACTUOW * pNewUOW);
	END_INTERFACE
}  ITransactionLastResourceAsyncVtbl;
interface ITransactionLastResourceAsync
{
	CONST_VTBL struct ITransactionLastResourceAsyncVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITransactionLastResourceAsync_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITransactionLastResourceAsync_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITransactionLastResourceAsync_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITransactionLastResourceAsync_DelegateCommit(This,grfRM)( (This)->lpVtbl -> DelegateCommit(This,grfRM) )
#define ITransactionLastResourceAsync_ForgetRequest(This,pNewUOW)( (This)->lpVtbl -> ForgetRequest(This,pNewUOW) )
#endif
#endif
#ifndef __ITransactionResource_INTERFACE_DEFINED__
#define __ITransactionResource_INTERFACE_DEFINED__
extern const IID IID_ITransactionResource;
typedef struct ITransactionResourceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITransactionResource * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITransactionResource * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITransactionResource * This);
	HRESULT(STDMETHODCALLTYPE * PrepareRequest) (ITransactionResource * This, BOOL fRetaining, DWORD grfRM, BOOL fWantMoniker, BOOL fSinglePhase);
	HRESULT(STDMETHODCALLTYPE * CommitRequest) (ITransactionResource * This, DWORD grfRM, XACTUOW * pNewUOW);
	HRESULT(STDMETHODCALLTYPE * AbortRequest) (ITransactionResource * This, BOID * pboidReason, BOOL fRetaining, XACTUOW * pNewUOW);
	HRESULT(STDMETHODCALLTYPE * TMDown) (ITransactionResource * This);
	END_INTERFACE
}  ITransactionResourceVtbl;
interface ITransactionResource
{
	CONST_VTBL struct ITransactionResourceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITransactionResource_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITransactionResource_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITransactionResource_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITransactionResource_PrepareRequest(This,fRetaining,grfRM,fWantMoniker,fSinglePhase)( (This)->lpVtbl -> PrepareRequest(This,fRetaining,grfRM,fWantMoniker,fSinglePhase) )
#define ITransactionResource_CommitRequest(This,grfRM,pNewUOW)( (This)->lpVtbl -> CommitRequest(This,grfRM,pNewUOW) )
#define ITransactionResource_AbortRequest(This,pboidReason,fRetaining,pNewUOW)( (This)->lpVtbl -> AbortRequest(This,pboidReason,fRetaining,pNewUOW) )
#define ITransactionResource_TMDown(This)( (This)->lpVtbl -> TMDown(This) )
#endif
#endif
#ifndef __ITransactionEnlistmentAsync_INTERFACE_DEFINED__
#define __ITransactionEnlistmentAsync_INTERFACE_DEFINED__
extern const IID IID_ITransactionEnlistmentAsync;
typedef struct ITransactionEnlistmentAsyncVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITransactionEnlistmentAsync * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITransactionEnlistmentAsync * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITransactionEnlistmentAsync * This);
	HRESULT(STDMETHODCALLTYPE * PrepareRequestDone) (ITransactionEnlistmentAsync * This, HRESULT hr, IMoniker * pmk, BOID * pboidReason);
	HRESULT(STDMETHODCALLTYPE * CommitRequestDone) (ITransactionEnlistmentAsync * This, HRESULT hr);
	HRESULT(STDMETHODCALLTYPE * AbortRequestDone) (ITransactionEnlistmentAsync * This, HRESULT hr);
	END_INTERFACE
}  ITransactionEnlistmentAsyncVtbl;
interface ITransactionEnlistmentAsync
{
	CONST_VTBL struct ITransactionEnlistmentAsyncVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITransactionEnlistmentAsync_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITransactionEnlistmentAsync_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITransactionEnlistmentAsync_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITransactionEnlistmentAsync_PrepareRequestDone(This,hr,pmk,pboidReason)( (This)->lpVtbl -> PrepareRequestDone(This,hr,pmk,pboidReason) )
#define ITransactionEnlistmentAsync_CommitRequestDone(This,hr)( (This)->lpVtbl -> CommitRequestDone(This,hr) )
#define ITransactionEnlistmentAsync_AbortRequestDone(This,hr)( (This)->lpVtbl -> AbortRequestDone(This,hr) )
#endif
#endif
#ifndef __ITransactionLastEnlistmentAsync_INTERFACE_DEFINED__
#define __ITransactionLastEnlistmentAsync_INTERFACE_DEFINED__
extern const IID IID_ITransactionLastEnlistmentAsync;
typedef struct ITransactionLastEnlistmentAsyncVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITransactionLastEnlistmentAsync * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITransactionLastEnlistmentAsync * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITransactionLastEnlistmentAsync * This);
	HRESULT(STDMETHODCALLTYPE * TransactionOutcome) (ITransactionLastEnlistmentAsync * This, XACTSTAT XactStat, BOID * pboidReason);
	END_INTERFACE
}  ITransactionLastEnlistmentAsyncVtbl;
interface ITransactionLastEnlistmentAsync
{
	CONST_VTBL struct ITransactionLastEnlistmentAsyncVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITransactionLastEnlistmentAsync_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITransactionLastEnlistmentAsync_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITransactionLastEnlistmentAsync_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITransactionLastEnlistmentAsync_TransactionOutcome(This,XactStat,pboidReason)( (This)->lpVtbl -> TransactionOutcome(This,XactStat,pboidReason) )
#endif
#endif
#ifndef __ITransactionExportFactory_INTERFACE_DEFINED__
#define __ITransactionExportFactory_INTERFACE_DEFINED__
extern const IID IID_ITransactionExportFactory;
typedef struct ITransactionExportFactoryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITransactionExportFactory * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITransactionExportFactory * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITransactionExportFactory * This);
	HRESULT(STDMETHODCALLTYPE * GetRemoteClassId) (ITransactionExportFactory * This, CLSID * pclsid);
	HRESULT(STDMETHODCALLTYPE * Create) (ITransactionExportFactory * This, ULONG cbWhereabouts, byte * rgbWhereabouts, ITransactionExport ** ppExport);
	END_INTERFACE
}  ITransactionExportFactoryVtbl;
interface ITransactionExportFactory
{
	CONST_VTBL struct ITransactionExportFactoryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITransactionExportFactory_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITransactionExportFactory_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITransactionExportFactory_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITransactionExportFactory_GetRemoteClassId(This,pclsid)( (This)->lpVtbl -> GetRemoteClassId(This,pclsid) )
#define ITransactionExportFactory_Create(This,cbWhereabouts,rgbWhereabouts,ppExport)( (This)->lpVtbl -> Create(This,cbWhereabouts,rgbWhereabouts,ppExport) )
#endif
#endif
#ifndef __ITransactionImportWhereabouts_INTERFACE_DEFINED__
#define __ITransactionImportWhereabouts_INTERFACE_DEFINED__
extern const IID IID_ITransactionImportWhereabouts;
typedef struct ITransactionImportWhereaboutsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITransactionImportWhereabouts * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITransactionImportWhereabouts * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITransactionImportWhereabouts * This);
	HRESULT(STDMETHODCALLTYPE * GetWhereaboutsSize) (ITransactionImportWhereabouts * This, ULONG * pcbWhereabouts);
	HRESULT(STDMETHODCALLTYPE * GetWhereabouts) (ITransactionImportWhereabouts * This, ULONG cbWhereabouts, byte * rgbWhereabouts, ULONG * pcbUsed);
	END_INTERFACE
}  ITransactionImportWhereaboutsVtbl;
interface ITransactionImportWhereabouts
{
	CONST_VTBL struct ITransactionImportWhereaboutsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITransactionImportWhereabouts_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITransactionImportWhereabouts_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITransactionImportWhereabouts_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITransactionImportWhereabouts_GetWhereaboutsSize(This,pcbWhereabouts)( (This)->lpVtbl -> GetWhereaboutsSize(This,pcbWhereabouts) )
#define ITransactionImportWhereabouts_GetWhereabouts(This,cbWhereabouts,rgbWhereabouts,pcbUsed)( (This)->lpVtbl -> GetWhereabouts(This,cbWhereabouts,rgbWhereabouts,pcbUsed) )
#endif
HRESULT STDMETHODCALLTYPE ITransactionImportWhereabouts_RemoteGetWhereabouts_Proxy(ITransactionImportWhereabouts *This, ULONG *pcbUsed, ULONG cbWhereabouts, byte *rgbWhereabouts);
void __RPC_STUB ITransactionImportWhereabouts_RemoteGetWhereabouts_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __ITransactionExport_INTERFACE_DEFINED__
#define __ITransactionExport_INTERFACE_DEFINED__
extern const IID IID_ITransactionExport;
typedef struct ITransactionExportVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITransactionExport *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITransactionExport *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITransactionExport *This);
	HRESULT(STDMETHODCALLTYPE *Export) (ITransactionExport *This, IUnknown *punkTransaction, ULONG *pcbTransactionCookie);
	HRESULT(STDMETHODCALLTYPE *GetTransactionCookie) (ITransactionExport *This, IUnknown *punkTransaction, ULONG cbTransactionCookie, byte *rgbTransactionCookie, ULONG *pcbUsed);
	END_INTERFACE
}  ITransactionExportVtbl;
interface ITransactionExport
{
	CONST_VTBL struct ITransactionExportVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITransactionExport_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITransactionExport_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITransactionExport_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITransactionExport_Export(This,punkTransaction,pcbTransactionCookie)( (This)->lpVtbl -> Export(This,punkTransaction,pcbTransactionCookie) )
#define ITransactionExport_GetTransactionCookie(This,punkTransaction,cbTransactionCookie,rgbTransactionCookie,pcbUsed)( (This)->lpVtbl -> GetTransactionCookie(This,punkTransaction,cbTransactionCookie,rgbTransactionCookie,pcbUsed) )
#endif
HRESULT STDMETHODCALLTYPE ITransactionExport_RemoteGetTransactionCookie_Proxy(ITransactionExport *This, IUnknown *punkTransaction, ULONG *pcbUsed, ULONG cbTransactionCookie, byte *rgbTransactionCookie);
void __RPC_STUB ITransactionExport_RemoteGetTransactionCookie_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __ITransactionImport_INTERFACE_DEFINED__
#define __ITransactionImport_INTERFACE_DEFINED__
extern const IID IID_ITransactionImport;
typedef struct ITransactionImportVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITransactionImport *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITransactionImport *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITransactionImport *This);
	HRESULT(STDMETHODCALLTYPE *Import) (ITransactionImport *This, ULONG cbTransactionCookie, byte *rgbTransactionCookie, IID *piid, void **ppvTransaction);
	END_INTERFACE
}  ITransactionImportVtbl;
interface ITransactionImport
{
	CONST_VTBL struct ITransactionImportVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITransactionImport_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITransactionImport_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITransactionImport_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITransactionImport_Import(This,cbTransactionCookie,rgbTransactionCookie,piid,ppvTransaction)( (This)->lpVtbl -> Import(This,cbTransactionCookie,rgbTransactionCookie,piid,ppvTransaction) )
#endif
#endif
#ifndef __ITipTransaction_INTERFACE_DEFINED__
#define __ITipTransaction_INTERFACE_DEFINED__
extern const IID IID_ITipTransaction;
typedef struct ITipTransactionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITipTransaction *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITipTransaction *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITipTransaction *This);
	HRESULT(STDMETHODCALLTYPE *Push) (ITipTransaction *This, char *i_pszRemoteTmUrl, LPSTR *o_ppszRemoteTxUrl);
	HRESULT(STDMETHODCALLTYPE *GetTransactionUrl) (ITipTransaction *This, LPSTR *o_ppszLocalTxUrl);
	END_INTERFACE
}  ITipTransactionVtbl;
interface ITipTransaction
{
	CONST_VTBL struct ITipTransactionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITipTransaction_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITipTransaction_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITipTransaction_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITipTransaction_Push(This,i_pszRemoteTmUrl,o_ppszRemoteTxUrl)( (This)->lpVtbl -> Push(This,i_pszRemoteTmUrl,o_ppszRemoteTxUrl) )
#define ITipTransaction_GetTransactionUrl(This,o_ppszLocalTxUrl)( (This)->lpVtbl -> GetTransactionUrl(This,o_ppszLocalTxUrl) )
#endif
#endif
#ifndef __ITipHelper_INTERFACE_DEFINED__
#define __ITipHelper_INTERFACE_DEFINED__
extern const IID IID_ITipHelper;
typedef struct ITipHelperVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITipHelper *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITipHelper *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITipHelper *This);
	HRESULT(STDMETHODCALLTYPE *Pull) (ITipHelper *This, char *i_pszTxUrl, ITransaction **o_ppITransaction);
	HRESULT(STDMETHODCALLTYPE *PullAsync) (ITipHelper *This, char *i_pszTxUrl, ITipPullSink *i_pTipPullSink, ITransaction **o_ppITransaction);
	HRESULT(STDMETHODCALLTYPE *GetLocalTmUrl) (ITipHelper *This, char **o_ppszLocalTmUrl);
	END_INTERFACE
}  ITipHelperVtbl;
interface ITipHelper
{
	CONST_VTBL struct ITipHelperVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITipHelper_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITipHelper_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITipHelper_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITipHelper_Pull(This,i_pszTxUrl,o_ppITransaction)( (This)->lpVtbl -> Pull(This,i_pszTxUrl,o_ppITransaction) )
#define ITipHelper_PullAsync(This,i_pszTxUrl,i_pTipPullSink,o_ppITransaction)( (This)->lpVtbl -> PullAsync(This,i_pszTxUrl,i_pTipPullSink,o_ppITransaction) )
#define ITipHelper_GetLocalTmUrl(This,o_ppszLocalTmUrl)( (This)->lpVtbl -> GetLocalTmUrl(This,o_ppszLocalTmUrl) )
#endif
#endif
#ifndef __ITipPullSink_INTERFACE_DEFINED__
#define __ITipPullSink_INTERFACE_DEFINED__
extern const IID IID_ITipPullSink;
typedef struct ITipPullSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITipPullSink *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ITipPullSink *This);
	ULONG(STDMETHODCALLTYPE *Release) (ITipPullSink *This);
	HRESULT(STDMETHODCALLTYPE *PullComplete) (ITipPullSink *This, HRESULT i_hrPull);
	END_INTERFACE
}  ITipPullSinkVtbl;
interface ITipPullSink
{
	CONST_VTBL struct ITipPullSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITipPullSink_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITipPullSink_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITipPullSink_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITipPullSink_PullComplete(This,i_hrPull)( (This)->lpVtbl -> PullComplete(This,i_hrPull) )
#endif
#endif
#ifndef __IDtcNetworkAccessConfig_INTERFACE_DEFINED__
#define __IDtcNetworkAccessConfig_INTERFACE_DEFINED__
extern const IID IID_IDtcNetworkAccessConfig;
typedef struct IDtcNetworkAccessConfigVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDtcNetworkAccessConfig *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDtcNetworkAccessConfig *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDtcNetworkAccessConfig *This);
	HRESULT(STDMETHODCALLTYPE *GetAnyNetworkAccess) (IDtcNetworkAccessConfig *This, BOOL *pbAnyNetworkAccess);
	HRESULT(STDMETHODCALLTYPE *SetAnyNetworkAccess) (IDtcNetworkAccessConfig *This, BOOL bAnyNetworkAccess);
	HRESULT(STDMETHODCALLTYPE *GetNetworkAdministrationAccess) (IDtcNetworkAccessConfig *This, BOOL *pbNetworkAdministrationAccess);
	HRESULT(STDMETHODCALLTYPE *SetNetworkAdministrationAccess) (IDtcNetworkAccessConfig *This, BOOL bNetworkAdministrationAccess);
	HRESULT(STDMETHODCALLTYPE *GetNetworkTransactionAccess) (IDtcNetworkAccessConfig *This, BOOL *pbNetworkTransactionAccess);
	HRESULT(STDMETHODCALLTYPE *SetNetworkTransactionAccess) (IDtcNetworkAccessConfig *This, BOOL bNetworkTransactionAccess);
	HRESULT(STDMETHODCALLTYPE *GetNetworkClientAccess) (IDtcNetworkAccessConfig *This, BOOL *pbNetworkClientAccess);
	HRESULT(STDMETHODCALLTYPE *SetNetworkClientAccess) (IDtcNetworkAccessConfig *This, BOOL bNetworkClientAccess);
	HRESULT(STDMETHODCALLTYPE *GetNetworkTIPAccess) (IDtcNetworkAccessConfig *This, BOOL *pbNetworkTIPAccess);
	HRESULT(STDMETHODCALLTYPE *SetNetworkTIPAccess) (IDtcNetworkAccessConfig *This, BOOL bNetworkTIPAccess);
	HRESULT(STDMETHODCALLTYPE *GetXAAccess) (IDtcNetworkAccessConfig *This, BOOL *pbXAAccess);
	HRESULT(STDMETHODCALLTYPE *SetXAAccess) (IDtcNetworkAccessConfig *This, BOOL bXAAccess);
	HRESULT(STDMETHODCALLTYPE *RestartDtcService) (IDtcNetworkAccessConfig *This);
	END_INTERFACE
}  IDtcNetworkAccessConfigVtbl;
interface IDtcNetworkAccessConfig
{
	CONST_VTBL struct IDtcNetworkAccessConfigVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDtcNetworkAccessConfig_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDtcNetworkAccessConfig_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDtcNetworkAccessConfig_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDtcNetworkAccessConfig_GetAnyNetworkAccess(This,pbAnyNetworkAccess)( (This)->lpVtbl -> GetAnyNetworkAccess(This,pbAnyNetworkAccess) )
#define IDtcNetworkAccessConfig_SetAnyNetworkAccess(This,bAnyNetworkAccess)( (This)->lpVtbl -> SetAnyNetworkAccess(This,bAnyNetworkAccess) )
#define IDtcNetworkAccessConfig_GetNetworkAdministrationAccess(This,pbNetworkAdministrationAccess)( (This)->lpVtbl -> GetNetworkAdministrationAccess(This,pbNetworkAdministrationAccess) )
#define IDtcNetworkAccessConfig_SetNetworkAdministrationAccess(This,bNetworkAdministrationAccess)( (This)->lpVtbl -> SetNetworkAdministrationAccess(This,bNetworkAdministrationAccess) )
#define IDtcNetworkAccessConfig_GetNetworkTransactionAccess(This,pbNetworkTransactionAccess)( (This)->lpVtbl -> GetNetworkTransactionAccess(This,pbNetworkTransactionAccess) )
#define IDtcNetworkAccessConfig_SetNetworkTransactionAccess(This,bNetworkTransactionAccess)( (This)->lpVtbl -> SetNetworkTransactionAccess(This,bNetworkTransactionAccess) )
#define IDtcNetworkAccessConfig_GetNetworkClientAccess(This,pbNetworkClientAccess)( (This)->lpVtbl -> GetNetworkClientAccess(This,pbNetworkClientAccess) )
#define IDtcNetworkAccessConfig_SetNetworkClientAccess(This,bNetworkClientAccess)( (This)->lpVtbl -> SetNetworkClientAccess(This,bNetworkClientAccess) )
#define IDtcNetworkAccessConfig_GetNetworkTIPAccess(This,pbNetworkTIPAccess)( (This)->lpVtbl -> GetNetworkTIPAccess(This,pbNetworkTIPAccess) )
#define IDtcNetworkAccessConfig_SetNetworkTIPAccess(This,bNetworkTIPAccess)( (This)->lpVtbl -> SetNetworkTIPAccess(This,bNetworkTIPAccess) )
#define IDtcNetworkAccessConfig_GetXAAccess(This,pbXAAccess)( (This)->lpVtbl -> GetXAAccess(This,pbXAAccess) )
#define IDtcNetworkAccessConfig_SetXAAccess(This,bXAAccess)( (This)->lpVtbl -> SetXAAccess(This,bXAAccess) )
#define IDtcNetworkAccessConfig_RestartDtcService(This)( (This)->lpVtbl -> RestartDtcService(This) )
#endif
#endif
typedef enum AUTHENTICATION_LEVEL
{
	NO_AUTHENTICATION_REQUIRED = 0,
	INCOMING_AUTHENTICATION_REQUIRED = 1,
	MUTUAL_AUTHENTICATION_REQUIRED = 2
} AUTHENTICATION_LEVEL;
extern RPC_IF_HANDLE __MIDL_itf_txcoord_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_txcoord_0000_0013_v0_0_s_ifspec;
#ifndef __IDtcNetworkAccessConfig2_INTERFACE_DEFINED__
#define __IDtcNetworkAccessConfig2_INTERFACE_DEFINED__
extern const IID IID_IDtcNetworkAccessConfig2;
typedef struct IDtcNetworkAccessConfig2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDtcNetworkAccessConfig2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDtcNetworkAccessConfig2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDtcNetworkAccessConfig2 *This);
	HRESULT(STDMETHODCALLTYPE *GetAnyNetworkAccess) (IDtcNetworkAccessConfig2 *This, BOOL *pbAnyNetworkAccess);
	HRESULT(STDMETHODCALLTYPE *SetAnyNetworkAccess) (IDtcNetworkAccessConfig2 *This, BOOL bAnyNetworkAccess);
	HRESULT(STDMETHODCALLTYPE *GetNetworkAdministrationAccess) (IDtcNetworkAccessConfig2 *This, BOOL *pbNetworkAdministrationAccess);
	HRESULT(STDMETHODCALLTYPE *SetNetworkAdministrationAccess) (IDtcNetworkAccessConfig2 *This, BOOL bNetworkAdministrationAccess);
	HRESULT(STDMETHODCALLTYPE *GetNetworkTransactionAccess) (IDtcNetworkAccessConfig2 *This, BOOL *pbNetworkTransactionAccess);
	HRESULT(STDMETHODCALLTYPE *SetNetworkTransactionAccess) (IDtcNetworkAccessConfig2 *This, BOOL bNetworkTransactionAccess);
	HRESULT(STDMETHODCALLTYPE *GetNetworkClientAccess) (IDtcNetworkAccessConfig2 *This, BOOL *pbNetworkClientAccess);
	HRESULT(STDMETHODCALLTYPE *SetNetworkClientAccess) (IDtcNetworkAccessConfig2 *This, BOOL bNetworkClientAccess);
	HRESULT(STDMETHODCALLTYPE *GetNetworkTIPAccess) (IDtcNetworkAccessConfig2 *This, BOOL *pbNetworkTIPAccess);
	HRESULT(STDMETHODCALLTYPE *SetNetworkTIPAccess) (IDtcNetworkAccessConfig2 *This, BOOL bNetworkTIPAccess);
	HRESULT(STDMETHODCALLTYPE *GetXAAccess) (IDtcNetworkAccessConfig2 *This, BOOL *pbXAAccess);
	HRESULT(STDMETHODCALLTYPE *SetXAAccess) (IDtcNetworkAccessConfig2 *This, BOOL bXAAccess);
	HRESULT(STDMETHODCALLTYPE *RestartDtcService) (IDtcNetworkAccessConfig2 *This);
	HRESULT(STDMETHODCALLTYPE *GetNetworkInboundAccess) (IDtcNetworkAccessConfig2 *This, BOOL *pbInbound);
	HRESULT(STDMETHODCALLTYPE *GetNetworkOutboundAccess) (IDtcNetworkAccessConfig2 *This, BOOL *pbOutbound);
	HRESULT(STDMETHODCALLTYPE *SetNetworkInboundAccess) (IDtcNetworkAccessConfig2 *This, BOOL bInbound);
	HRESULT(STDMETHODCALLTYPE *SetNetworkOutboundAccess) (IDtcNetworkAccessConfig2 *This, BOOL bOutbound);
	HRESULT(STDMETHODCALLTYPE *GetAuthenticationLevel) (IDtcNetworkAccessConfig2 *This, AUTHENTICATION_LEVEL *pAuthLevel);
	HRESULT(STDMETHODCALLTYPE *SetAuthenticationLevel) (IDtcNetworkAccessConfig2 *This, AUTHENTICATION_LEVEL AuthLevel);
	END_INTERFACE
}  IDtcNetworkAccessConfig2Vtbl;
interface IDtcNetworkAccessConfig2
{
	CONST_VTBL struct IDtcNetworkAccessConfig2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDtcNetworkAccessConfig2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDtcNetworkAccessConfig2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDtcNetworkAccessConfig2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDtcNetworkAccessConfig2_GetAnyNetworkAccess(This,pbAnyNetworkAccess)( (This)->lpVtbl -> GetAnyNetworkAccess(This,pbAnyNetworkAccess) )
#define IDtcNetworkAccessConfig2_SetAnyNetworkAccess(This,bAnyNetworkAccess)( (This)->lpVtbl -> SetAnyNetworkAccess(This,bAnyNetworkAccess) )
#define IDtcNetworkAccessConfig2_GetNetworkAdministrationAccess(This,pbNetworkAdministrationAccess)( (This)->lpVtbl -> GetNetworkAdministrationAccess(This,pbNetworkAdministrationAccess) )
#define IDtcNetworkAccessConfig2_SetNetworkAdministrationAccess(This,bNetworkAdministrationAccess)( (This)->lpVtbl -> SetNetworkAdministrationAccess(This,bNetworkAdministrationAccess) )
#define IDtcNetworkAccessConfig2_GetNetworkTransactionAccess(This,pbNetworkTransactionAccess)( (This)->lpVtbl -> GetNetworkTransactionAccess(This,pbNetworkTransactionAccess) )
#define IDtcNetworkAccessConfig2_SetNetworkTransactionAccess(This,bNetworkTransactionAccess)( (This)->lpVtbl -> SetNetworkTransactionAccess(This,bNetworkTransactionAccess) )
#define IDtcNetworkAccessConfig2_GetNetworkClientAccess(This,pbNetworkClientAccess)( (This)->lpVtbl -> GetNetworkClientAccess(This,pbNetworkClientAccess) )
#define IDtcNetworkAccessConfig2_SetNetworkClientAccess(This,bNetworkClientAccess)( (This)->lpVtbl -> SetNetworkClientAccess(This,bNetworkClientAccess) )
#define IDtcNetworkAccessConfig2_GetNetworkTIPAccess(This,pbNetworkTIPAccess)( (This)->lpVtbl -> GetNetworkTIPAccess(This,pbNetworkTIPAccess) )
#define IDtcNetworkAccessConfig2_SetNetworkTIPAccess(This,bNetworkTIPAccess)( (This)->lpVtbl -> SetNetworkTIPAccess(This,bNetworkTIPAccess) )
#define IDtcNetworkAccessConfig2_GetXAAccess(This,pbXAAccess)( (This)->lpVtbl -> GetXAAccess(This,pbXAAccess) )
#define IDtcNetworkAccessConfig2_SetXAAccess(This,bXAAccess)( (This)->lpVtbl -> SetXAAccess(This,bXAAccess) )
#define IDtcNetworkAccessConfig2_RestartDtcService(This)( (This)->lpVtbl -> RestartDtcService(This) )
#define IDtcNetworkAccessConfig2_GetNetworkInboundAccess(This,pbInbound)( (This)->lpVtbl -> GetNetworkInboundAccess(This,pbInbound) )
#define IDtcNetworkAccessConfig2_GetNetworkOutboundAccess(This,pbOutbound)( (This)->lpVtbl -> GetNetworkOutboundAccess(This,pbOutbound) )
#define IDtcNetworkAccessConfig2_SetNetworkInboundAccess(This,bInbound)( (This)->lpVtbl -> SetNetworkInboundAccess(This,bInbound) )
#define IDtcNetworkAccessConfig2_SetNetworkOutboundAccess(This,bOutbound)( (This)->lpVtbl -> SetNetworkOutboundAccess(This,bOutbound) )
#define IDtcNetworkAccessConfig2_GetAuthenticationLevel(This,pAuthLevel)( (This)->lpVtbl -> GetAuthenticationLevel(This,pAuthLevel) )
#define IDtcNetworkAccessConfig2_SetAuthenticationLevel(This,AuthLevel)( (This)->lpVtbl -> SetAuthenticationLevel(This,AuthLevel) )
#endif
#endif
#ifndef __IDtcNetworkAccessConfig3_INTERFACE_DEFINED__
#define __IDtcNetworkAccessConfig3_INTERFACE_DEFINED__
extern const IID IID_IDtcNetworkAccessConfig3;
typedef struct IDtcNetworkAccessConfig3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDtcNetworkAccessConfig3 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDtcNetworkAccessConfig3 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDtcNetworkAccessConfig3 *This);
	HRESULT(STDMETHODCALLTYPE *GetAnyNetworkAccess) (IDtcNetworkAccessConfig3 *This, BOOL *pbAnyNetworkAccess);
	HRESULT(STDMETHODCALLTYPE *SetAnyNetworkAccess) (IDtcNetworkAccessConfig3 *This, BOOL bAnyNetworkAccess);
	HRESULT(STDMETHODCALLTYPE *GetNetworkAdministrationAccess) (IDtcNetworkAccessConfig3 *This, BOOL *pbNetworkAdministrationAccess);
	HRESULT(STDMETHODCALLTYPE *SetNetworkAdministrationAccess) (IDtcNetworkAccessConfig3 *This, BOOL bNetworkAdministrationAccess);
	HRESULT(STDMETHODCALLTYPE *GetNetworkTransactionAccess) (IDtcNetworkAccessConfig3 *This, BOOL *pbNetworkTransactionAccess);
	HRESULT(STDMETHODCALLTYPE *SetNetworkTransactionAccess) (IDtcNetworkAccessConfig3 *This, BOOL bNetworkTransactionAccess);
	HRESULT(STDMETHODCALLTYPE *GetNetworkClientAccess) (IDtcNetworkAccessConfig3 *This, BOOL *pbNetworkClientAccess);
	HRESULT(STDMETHODCALLTYPE *SetNetworkClientAccess) (IDtcNetworkAccessConfig3 *This, BOOL bNetworkClientAccess);
	HRESULT(STDMETHODCALLTYPE *GetNetworkTIPAccess) (IDtcNetworkAccessConfig3 *This, BOOL *pbNetworkTIPAccess);
	HRESULT(STDMETHODCALLTYPE *SetNetworkTIPAccess) (IDtcNetworkAccessConfig3 *This, BOOL bNetworkTIPAccess);
	HRESULT(STDMETHODCALLTYPE *GetXAAccess) (IDtcNetworkAccessConfig3 *This, BOOL *pbXAAccess);
	HRESULT(STDMETHODCALLTYPE *SetXAAccess) (IDtcNetworkAccessConfig3 *This, BOOL bXAAccess);
	HRESULT(STDMETHODCALLTYPE *RestartDtcService) (IDtcNetworkAccessConfig3 *This);
	HRESULT(STDMETHODCALLTYPE *GetNetworkInboundAccess) (IDtcNetworkAccessConfig3 *This, BOOL *pbInbound);
	HRESULT(STDMETHODCALLTYPE *GetNetworkOutboundAccess) (IDtcNetworkAccessConfig3 *This, BOOL *pbOutbound);
	HRESULT(STDMETHODCALLTYPE *SetNetworkInboundAccess) (IDtcNetworkAccessConfig3 *This, BOOL bInbound);
	HRESULT(STDMETHODCALLTYPE *SetNetworkOutboundAccess) (IDtcNetworkAccessConfig3 *This, BOOL bOutbound);
	HRESULT(STDMETHODCALLTYPE *GetAuthenticationLevel) (IDtcNetworkAccessConfig3 *This, AUTHENTICATION_LEVEL *pAuthLevel);
	HRESULT(STDMETHODCALLTYPE *SetAuthenticationLevel) (IDtcNetworkAccessConfig3 *This, AUTHENTICATION_LEVEL AuthLevel);
	HRESULT(STDMETHODCALLTYPE *GetLUAccess) (IDtcNetworkAccessConfig3 *This, BOOL *pbLUAccess);
	HRESULT(STDMETHODCALLTYPE *SetLUAccess) (IDtcNetworkAccessConfig3 *This, BOOL bLUAccess);
	END_INTERFACE
}  IDtcNetworkAccessConfig3Vtbl;
interface IDtcNetworkAccessConfig3
{
	CONST_VTBL struct IDtcNetworkAccessConfig3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDtcNetworkAccessConfig3_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDtcNetworkAccessConfig3_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDtcNetworkAccessConfig3_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDtcNetworkAccessConfig3_GetAnyNetworkAccess(This,pbAnyNetworkAccess)( (This)->lpVtbl -> GetAnyNetworkAccess(This,pbAnyNetworkAccess) )
#define IDtcNetworkAccessConfig3_SetAnyNetworkAccess(This,bAnyNetworkAccess)( (This)->lpVtbl -> SetAnyNetworkAccess(This,bAnyNetworkAccess) )
#define IDtcNetworkAccessConfig3_GetNetworkAdministrationAccess(This,pbNetworkAdministrationAccess)( (This)->lpVtbl -> GetNetworkAdministrationAccess(This,pbNetworkAdministrationAccess) )
#define IDtcNetworkAccessConfig3_SetNetworkAdministrationAccess(This,bNetworkAdministrationAccess)( (This)->lpVtbl -> SetNetworkAdministrationAccess(This,bNetworkAdministrationAccess) )
#define IDtcNetworkAccessConfig3_GetNetworkTransactionAccess(This,pbNetworkTransactionAccess)( (This)->lpVtbl -> GetNetworkTransactionAccess(This,pbNetworkTransactionAccess) )
#define IDtcNetworkAccessConfig3_SetNetworkTransactionAccess(This,bNetworkTransactionAccess)( (This)->lpVtbl -> SetNetworkTransactionAccess(This,bNetworkTransactionAccess) )
#define IDtcNetworkAccessConfig3_GetNetworkClientAccess(This,pbNetworkClientAccess)( (This)->lpVtbl -> GetNetworkClientAccess(This,pbNetworkClientAccess) )
#define IDtcNetworkAccessConfig3_SetNetworkClientAccess(This,bNetworkClientAccess)( (This)->lpVtbl -> SetNetworkClientAccess(This,bNetworkClientAccess) )
#define IDtcNetworkAccessConfig3_GetNetworkTIPAccess(This,pbNetworkTIPAccess)( (This)->lpVtbl -> GetNetworkTIPAccess(This,pbNetworkTIPAccess) )
#define IDtcNetworkAccessConfig3_SetNetworkTIPAccess(This,bNetworkTIPAccess)( (This)->lpVtbl -> SetNetworkTIPAccess(This,bNetworkTIPAccess) )
#define IDtcNetworkAccessConfig3_GetXAAccess(This,pbXAAccess)( (This)->lpVtbl -> GetXAAccess(This,pbXAAccess) )
#define IDtcNetworkAccessConfig3_SetXAAccess(This,bXAAccess)( (This)->lpVtbl -> SetXAAccess(This,bXAAccess) )
#define IDtcNetworkAccessConfig3_RestartDtcService(This)( (This)->lpVtbl -> RestartDtcService(This) )
#define IDtcNetworkAccessConfig3_GetNetworkInboundAccess(This,pbInbound)( (This)->lpVtbl -> GetNetworkInboundAccess(This,pbInbound) )
#define IDtcNetworkAccessConfig3_GetNetworkOutboundAccess(This,pbOutbound)( (This)->lpVtbl -> GetNetworkOutboundAccess(This,pbOutbound) )
#define IDtcNetworkAccessConfig3_SetNetworkInboundAccess(This,bInbound)( (This)->lpVtbl -> SetNetworkInboundAccess(This,bInbound) )
#define IDtcNetworkAccessConfig3_SetNetworkOutboundAccess(This,bOutbound)( (This)->lpVtbl -> SetNetworkOutboundAccess(This,bOutbound) )
#define IDtcNetworkAccessConfig3_GetAuthenticationLevel(This,pAuthLevel)( (This)->lpVtbl -> GetAuthenticationLevel(This,pAuthLevel) )
#define IDtcNetworkAccessConfig3_SetAuthenticationLevel(This,AuthLevel)( (This)->lpVtbl -> SetAuthenticationLevel(This,AuthLevel) )
#define IDtcNetworkAccessConfig3_GetLUAccess(This,pbLUAccess)( (This)->lpVtbl -> GetLUAccess(This,pbLUAccess) )
#define IDtcNetworkAccessConfig3_SetLUAccess(This,bLUAccess)( (This)->lpVtbl -> SetLUAccess(This,bLUAccess) )
#endif
#endif
DEFINE_GUID(IID_ITransactionResourceAsync, 0x69E971F0, 0x23CE, 0x11cf, 0xAD, 0x60, 0x00, 0xAA, 0x00, 0xA7, 0x4C, 0xCD);
DEFINE_GUID(IID_ITransactionLastResourceAsync, 0xC82BD532, 0x5B30, 0x11D3, 0x8A, 0x91, 0x00, 0xC0, 0x4F, 0x79, 0xEB, 0x6D);
DEFINE_GUID(IID_ITransactionResource, 0xEE5FF7B3, 0x4572, 0x11d0, 0x94, 0x52, 0x00, 0xA0, 0xC9, 0x05, 0x41, 0x6E);
DEFINE_GUID(IID_ITransactionEnlistmentAsync, 0x0fb15081, 0xaf41, 0x11ce, 0xbd, 0x2b, 0x20, 0x4c, 0x4f, 0x4f, 0x50, 0x20);
DEFINE_GUID(IID_ITransactionLastEnlistmentAsync, 0xC82BD533, 0x5B30, 0x11D3, 0x8A, 0x91, 0x00, 0xC0, 0x4F, 0x79, 0xEB, 0x6D);
DEFINE_GUID(IID_ITransactionExportFactory, 0xE1CF9B53, 0x8745, 0x11ce, 0xA9, 0xBA, 0x00, 0xAA, 0x00, 0x6C, 0x37, 0x06);
DEFINE_GUID(IID_ITransactionImportWhereabouts, 0x0141fda4, 0x8fc0, 0x11ce, 0xbd, 0x18, 0x20, 0x4c, 0x4f, 0x4f, 0x50, 0x20);
DEFINE_GUID(IID_ITransactionExport, 0x0141fda5, 0x8fc0, 0x11ce, 0xbd, 0x18, 0x20, 0x4c, 0x4f, 0x4f, 0x50, 0x20);
DEFINE_GUID(IID_ITransactionImport, 0xE1CF9B5A, 0x8745, 0x11ce, 0xA9, 0xBA, 0x00, 0xAA, 0x00, 0x6C, 0x37, 0x06);
DEFINE_GUID(IID_ITipTransaction, 0x17cf72d0, 0xbac5, 0x11d1, 0xb1, 0xbf, 0x0, 0xc0, 0x4f, 0xc2, 0xf3, 0xef);
DEFINE_GUID(IID_ITipHelper, 0x17cf72d1, 0xbac5, 0x11d1, 0xb1, 0xbf, 0x0, 0xc0, 0x4f, 0xc2, 0xf3, 0xef);
DEFINE_GUID(IID_ITipPullSink, 0x17cf72d2, 0xbac5, 0x11d1, 0xb1, 0xbf, 0x0, 0xc0, 0x4f, 0xc2, 0xf3, 0xef);
DEFINE_GUID(IID_IDtcNetworkAccessConfig, 0x9797c15d, 0xa428, 0x4291, 0x87, 0xb6, 0x9, 0x95, 0x3, 0x1a, 0x67, 0x8d);
DEFINE_GUID(IID_IDtcNetworkAccessConfig2, 0xa7aa013b, 0xeb7d, 0x4f42, 0xb4, 0x1c, 0xb2, 0xde, 0xc0, 0x9a, 0xe0, 0x34);
#pragma deprecated (ITipTransaction)
#pragma deprecated (ITipHelper)
#pragma deprecated (ITipPullSink)
extern RPC_IF_HANDLE __MIDL_itf_txcoord_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_txcoord_0000_0015_v0_0_s_ifspec;
HRESULT STDMETHODCALLTYPE ITransactionImportWhereabouts_GetWhereabouts_Proxy(ITransactionImportWhereabouts *This, ULONG cbWhereabouts, byte *rgbWhereabouts, ULONG *pcbUsed);
HRESULT STDMETHODCALLTYPE ITransactionImportWhereabouts_GetWhereabouts_Stub(ITransactionImportWhereabouts *This, ULONG *pcbUsed, ULONG cbWhereabouts, byte *rgbWhereabouts);
HRESULT STDMETHODCALLTYPE ITransactionExport_GetTransactionCookie_Proxy(ITransactionExport *This, IUnknown *punkTransaction, ULONG cbTransactionCookie, byte *rgbTransactionCookie, ULONG *pcbUsed);
HRESULT STDMETHODCALLTYPE ITransactionExport_GetTransactionCookie_Stub(ITransactionExport *This, IUnknown *punkTransaction, ULONG *pcbUsed, ULONG cbTransactionCookie, byte *rgbTransactionCookie);
#endif
