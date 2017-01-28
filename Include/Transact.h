/*+@@file@@----------------------------------------------------------------*//*!
 \file		Transact.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul  3 18:57:59 2016
 \date		Modified on Sun Jul  3 18:57:59 2016
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
#ifndef __transact_h__
#define __transact_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ITransaction_FWD_DEFINED__
#define __ITransaction_FWD_DEFINED__
typedef interface ITransaction ITransaction;
#endif
#ifndef __ITransactionCloner_FWD_DEFINED__
#define __ITransactionCloner_FWD_DEFINED__
typedef interface ITransactionCloner ITransactionCloner;
#endif
#ifndef __ITransaction2_FWD_DEFINED__
#define __ITransaction2_FWD_DEFINED__
typedef interface ITransaction2 ITransaction2;
#endif
#ifndef __ITransactionDispenser_FWD_DEFINED__
#define __ITransactionDispenser_FWD_DEFINED__
typedef interface ITransactionDispenser ITransactionDispenser;
#endif
#ifndef __ITransactionOptions_FWD_DEFINED__
#define __ITransactionOptions_FWD_DEFINED__
typedef interface ITransactionOptions ITransactionOptions;
#endif
#ifndef __ITransactionOutcomeEvents_FWD_DEFINED__
#define __ITransactionOutcomeEvents_FWD_DEFINED__
typedef interface ITransactionOutcomeEvents ITransactionOutcomeEvents;
#endif
#ifndef __ITmNodeName_FWD_DEFINED__
#define __ITmNodeName_FWD_DEFINED__
typedef interface ITmNodeName ITmNodeName;
#endif
#ifndef __IKernelTransaction_FWD_DEFINED__
#define __IKernelTransaction_FWD_DEFINED__
typedef interface IKernelTransaction IKernelTransaction;
#endif
#include <unknwn.h>
#include <winerror.h>
#ifndef DECLSPEC_UUID
#define DECLSPEC_UUID(x)
#endif
extern RPC_IF_HANDLE __MIDL_itf_transact_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_transact_0000_0000_v0_0_s_ifspec;
#ifndef __BasicTransactionTypes_INTERFACE_DEFINED__
#define __BasicTransactionTypes_INTERFACE_DEFINED__
typedef struct BOID
{
	byte rgb[16];
} BOID;
#define BOID_NULL (*((BOID*)(&IID_NULL)))
#ifndef MAX_TRAN_DESC_DEFINED
#define MAX_TRAN_DESC_DEFINED
typedef
enum TX_MISC_CONSTANTS
{
	MAX_TRAN_DESC = 40
} TX_MISC_CONSTANTS;
#endif
typedef BOID XACTUOW;
typedef LONG ISOLEVEL;
typedef enum ISOLATIONLEVEL
{
	ISOLATIONLEVEL_UNSPECIFIED = 0xffffffff,
	ISOLATIONLEVEL_CHAOS = 0x10,
	ISOLATIONLEVEL_READUNCOMMITTED = 0x100,
	ISOLATIONLEVEL_BROWSE = 0x100,
	ISOLATIONLEVEL_CURSORSTABILITY = 0x1000,
	ISOLATIONLEVEL_READCOMMITTED = 0x1000,
	ISOLATIONLEVEL_REPEATABLEREAD = 0x10000,
	ISOLATIONLEVEL_SERIALIZABLE = 0x100000,
	ISOLATIONLEVEL_ISOLATED = 0x100000
} ISOLATIONLEVEL;
typedef struct XACTTRANSINFO
{
	XACTUOW uow;
	ISOLEVEL isoLevel;
	ULONG isoFlags;
	DWORD grfTCSupported;
	DWORD grfRMSupported;
	DWORD grfTCSupportedRetaining;
	DWORD grfRMSupportedRetaining;
} XACTTRANSINFO;
typedef struct XACTSTATS
{
	ULONG cOpen;
	ULONG cCommitting;
	ULONG cCommitted;
	ULONG cAborting;
	ULONG cAborted;
	ULONG cInDoubt;
	ULONG cHeuristicDecision;
	FILETIME timeTransactionsUp;
} XACTSTATS;
typedef enum ISOFLAG
{
	ISOFLAG_RETAIN_COMMIT_DC = 1,
	ISOFLAG_RETAIN_COMMIT = 2,
	ISOFLAG_RETAIN_COMMIT_NO = 3,
	ISOFLAG_RETAIN_ABORT_DC = 4,
	ISOFLAG_RETAIN_ABORT = 8,
	ISOFLAG_RETAIN_ABORT_NO = 12,
	ISOFLAG_RETAIN_DONTCARE = (ISOFLAG_RETAIN_COMMIT_DC | ISOFLAG_RETAIN_ABORT_DC),
	ISOFLAG_RETAIN_BOTH = (ISOFLAG_RETAIN_COMMIT | ISOFLAG_RETAIN_ABORT),
	ISOFLAG_RETAIN_NONE = (ISOFLAG_RETAIN_COMMIT_NO | ISOFLAG_RETAIN_ABORT_NO),
	ISOFLAG_OPTIMISTIC = 16,
	ISOFLAG_READONLY = 32
} ISOFLAG;
typedef enum XACTTC
{
	XACTTC_NONE = 0,
	XACTTC_SYNC_PHASEONE = 1,
	XACTTC_SYNC_PHASETWO = 2,
	XACTTC_SYNC = 2,
	XACTTC_ASYNC_PHASEONE = 4,
	XACTTC_ASYNC = 4
} XACTTC;
typedef enum XACTRM
{
	XACTRM_OPTIMISTICLASTWINS = 1,
	XACTRM_NOREADONLYPREPARES = 2
} XACTRM;
typedef enum XACTCONST
{
	XACTCONST_TIMEOUTINFINITE = 0
} XACTCONST;
typedef enum XACTHEURISTIC
{
	XACTHEURISTIC_ABORT = 1,
	XACTHEURISTIC_COMMIT = 2,
	XACTHEURISTIC_DAMAGE = 3,
	XACTHEURISTIC_DANGER = 4
} XACTHEURISTIC;
typedef enum XACTSTAT
{
	XACTSTAT_NONE = 0,
	XACTSTAT_OPENNORMAL = 0x1,
	XACTSTAT_OPENREFUSED = 0x2,
	XACTSTAT_PREPARING = 0x4,
	XACTSTAT_PREPARED = 0x8,
	XACTSTAT_PREPARERETAINING = 0x10,
	XACTSTAT_PREPARERETAINED = 0x20,
	XACTSTAT_COMMITTING = 0x40,
	XACTSTAT_COMMITRETAINING = 0x80,
	XACTSTAT_ABORTING = 0x100,
	XACTSTAT_ABORTED = 0x200,
	XACTSTAT_COMMITTED = 0x400,
	XACTSTAT_HEURISTIC_ABORT = 0x800,
	XACTSTAT_HEURISTIC_COMMIT = 0x1000,
	XACTSTAT_HEURISTIC_DAMAGE = 0x2000,
	XACTSTAT_HEURISTIC_DANGER = 0x4000,
	XACTSTAT_FORCED_ABORT = 0x8000,
	XACTSTAT_FORCED_COMMIT = 0x10000,
	XACTSTAT_INDOUBT = 0x20000,
	XACTSTAT_CLOSED = 0x40000,
	XACTSTAT_OPEN = 0x3,
	XACTSTAT_NOTPREPARED = 0x7ffc3,
	XACTSTAT_ALL = 0x7ffff
} XACTSTAT;
typedef struct XACTOPT
{
	ULONG ulTimeout;
	char szDescription[40];
} XACTOPT;
extern RPC_IF_HANDLE BasicTransactionTypes_v0_0_c_ifspec;
extern RPC_IF_HANDLE BasicTransactionTypes_v0_0_s_ifspec;
#endif
#ifndef __ITransaction_INTERFACE_DEFINED__
#define __ITransaction_INTERFACE_DEFINED__
extern const IID IID_ITransaction;
typedef struct ITransactionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITransaction * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITransaction * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITransaction * This);
	HRESULT(STDMETHODCALLTYPE * Commit) (ITransaction * This, BOOL fRetaining, DWORD grfTC, DWORD grfRM);
	HRESULT(STDMETHODCALLTYPE * Abort) (ITransaction * This, BOID * pboidReason, BOOL fRetaining, BOOL fAsync);
	HRESULT(STDMETHODCALLTYPE * GetTransactionInfo) (ITransaction * This, XACTTRANSINFO * pinfo);
	END_INTERFACE
}  ITransactionVtbl;
interface ITransaction
{
	CONST_VTBL struct ITransactionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITransaction_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITransaction_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITransaction_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITransaction_Commit(This,fRetaining,grfTC,grfRM)( (This)->lpVtbl -> Commit(This,fRetaining,grfTC,grfRM) )
#define ITransaction_Abort(This,pboidReason,fRetaining,fAsync)( (This)->lpVtbl -> Abort(This,pboidReason,fRetaining,fAsync) )
#define ITransaction_GetTransactionInfo(This,pinfo)( (This)->lpVtbl -> GetTransactionInfo(This,pinfo) )
#endif
#endif
#ifndef __ITransactionCloner_INTERFACE_DEFINED__
#define __ITransactionCloner_INTERFACE_DEFINED__
extern const IID IID_ITransactionCloner;
typedef struct ITransactionClonerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITransactionCloner * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITransactionCloner * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITransactionCloner * This);
	HRESULT(STDMETHODCALLTYPE * Commit) (ITransactionCloner * This, BOOL fRetaining, DWORD grfTC, DWORD grfRM);
	HRESULT(STDMETHODCALLTYPE * Abort) (ITransactionCloner * This, BOID * pboidReason, BOOL fRetaining, BOOL fAsync);
	HRESULT(STDMETHODCALLTYPE * GetTransactionInfo) (ITransactionCloner * This, XACTTRANSINFO * pinfo);
	HRESULT(STDMETHODCALLTYPE * CloneWithCommitDisabled) (ITransactionCloner * This, ITransaction ** ppITransaction);
	END_INTERFACE
}  ITransactionClonerVtbl;
interface ITransactionCloner
{
	CONST_VTBL struct ITransactionClonerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITransactionCloner_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITransactionCloner_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITransactionCloner_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITransactionCloner_Commit(This,fRetaining,grfTC,grfRM)( (This)->lpVtbl -> Commit(This,fRetaining,grfTC,grfRM) )
#define ITransactionCloner_Abort(This,pboidReason,fRetaining,fAsync)( (This)->lpVtbl -> Abort(This,pboidReason,fRetaining,fAsync) )
#define ITransactionCloner_GetTransactionInfo(This,pinfo)( (This)->lpVtbl -> GetTransactionInfo(This,pinfo) )
#define ITransactionCloner_CloneWithCommitDisabled(This,ppITransaction)( (This)->lpVtbl -> CloneWithCommitDisabled(This,ppITransaction) )
#endif
#endif
#ifndef __ITransaction2_INTERFACE_DEFINED__
#define __ITransaction2_INTERFACE_DEFINED__
extern const IID IID_ITransaction2;
typedef struct ITransaction2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITransaction2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITransaction2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITransaction2 * This);
	HRESULT(STDMETHODCALLTYPE * Commit) (ITransaction2 * This, BOOL fRetaining, DWORD grfTC, DWORD grfRM);
	HRESULT(STDMETHODCALLTYPE * Abort) (ITransaction2 * This, BOID * pboidReason, BOOL fRetaining, BOOL fAsync);
	HRESULT(STDMETHODCALLTYPE * GetTransactionInfo) (ITransaction2 * This, XACTTRANSINFO * pinfo);
	HRESULT(STDMETHODCALLTYPE * CloneWithCommitDisabled) (ITransaction2 * This, ITransaction ** ppITransaction);
	HRESULT(STDMETHODCALLTYPE * GetTransactionInfo2) (ITransaction2 * This, XACTTRANSINFO * pinfo);
	END_INTERFACE
}  ITransaction2Vtbl;
interface ITransaction2
{
	CONST_VTBL struct ITransaction2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITransaction2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITransaction2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITransaction2_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITransaction2_Commit(This,fRetaining,grfTC,grfRM)( (This)->lpVtbl -> Commit(This,fRetaining,grfTC,grfRM) )
#define ITransaction2_Abort(This,pboidReason,fRetaining,fAsync)( (This)->lpVtbl -> Abort(This,pboidReason,fRetaining,fAsync) )
#define ITransaction2_GetTransactionInfo(This,pinfo)( (This)->lpVtbl -> GetTransactionInfo(This,pinfo) )
#define ITransaction2_CloneWithCommitDisabled(This,ppITransaction)( (This)->lpVtbl -> CloneWithCommitDisabled(This,ppITransaction) )
#define ITransaction2_GetTransactionInfo2(This,pinfo)( (This)->lpVtbl -> GetTransactionInfo2(This,pinfo) )
#endif
#endif
#ifndef __ITransactionDispenser_INTERFACE_DEFINED__
#define __ITransactionDispenser_INTERFACE_DEFINED__
extern const IID IID_ITransactionDispenser;
typedef struct ITransactionDispenserVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITransactionDispenser * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITransactionDispenser * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITransactionDispenser * This);
	HRESULT(STDMETHODCALLTYPE * GetOptionsObject) (ITransactionDispenser * This, ITransactionOptions ** ppOptions);
	HRESULT(STDMETHODCALLTYPE * BeginTransaction) (ITransactionDispenser * This, IUnknown * punkOuter, ISOLEVEL isoLevel, ULONG isoFlags, ITransactionOptions * pOptions, ITransaction ** ppTransaction);
	END_INTERFACE
}  ITransactionDispenserVtbl;
interface ITransactionDispenser
{
	CONST_VTBL struct ITransactionDispenserVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITransactionDispenser_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITransactionDispenser_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITransactionDispenser_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITransactionDispenser_GetOptionsObject(This,ppOptions)( (This)->lpVtbl -> GetOptionsObject(This,ppOptions) )
#define ITransactionDispenser_BeginTransaction(This,punkOuter,isoLevel,isoFlags,pOptions,ppTransaction)( (This)->lpVtbl -> BeginTransaction(This,punkOuter,isoLevel,isoFlags,pOptions,ppTransaction) )
#endif
#endif
#ifndef __ITransactionOptions_INTERFACE_DEFINED__
#define __ITransactionOptions_INTERFACE_DEFINED__
extern const IID IID_ITransactionOptions;
typedef struct ITransactionOptionsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITransactionOptions * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITransactionOptions * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITransactionOptions * This);
	HRESULT(STDMETHODCALLTYPE * SetOptions) (ITransactionOptions * This, XACTOPT * pOptions);
	HRESULT(STDMETHODCALLTYPE * GetOptions) (ITransactionOptions * This, XACTOPT * pOptions);
	END_INTERFACE
}  ITransactionOptionsVtbl;
interface ITransactionOptions
{
	CONST_VTBL struct ITransactionOptionsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITransactionOptions_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITransactionOptions_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITransactionOptions_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITransactionOptions_SetOptions(This,pOptions)( (This)->lpVtbl -> SetOptions(This,pOptions) )
#define ITransactionOptions_GetOptions(This,pOptions)( (This)->lpVtbl -> GetOptions(This,pOptions) )
#endif
#endif
#ifndef __ITransactionOutcomeEvents_INTERFACE_DEFINED__
#define __ITransactionOutcomeEvents_INTERFACE_DEFINED__
extern const IID IID_ITransactionOutcomeEvents;
typedef struct ITransactionOutcomeEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITransactionOutcomeEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITransactionOutcomeEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITransactionOutcomeEvents * This);
	HRESULT(STDMETHODCALLTYPE * Committed) (ITransactionOutcomeEvents * This, BOOL fRetaining, XACTUOW * pNewUOW, HRESULT hr);
	HRESULT(STDMETHODCALLTYPE * Aborted) (ITransactionOutcomeEvents * This, BOID * pboidReason, BOOL fRetaining, XACTUOW * pNewUOW, HRESULT hr);
	HRESULT(STDMETHODCALLTYPE * HeuristicDecision) (ITransactionOutcomeEvents * This, DWORD dwDecision, BOID * pboidReason, HRESULT hr);
	HRESULT(STDMETHODCALLTYPE * Indoubt) (ITransactionOutcomeEvents * This);
	END_INTERFACE
}  ITransactionOutcomeEventsVtbl;
interface ITransactionOutcomeEvents
{
	CONST_VTBL struct ITransactionOutcomeEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITransactionOutcomeEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITransactionOutcomeEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITransactionOutcomeEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITransactionOutcomeEvents_Committed(This,fRetaining,pNewUOW,hr)( (This)->lpVtbl -> Committed(This,fRetaining,pNewUOW,hr) )
#define ITransactionOutcomeEvents_Aborted(This,pboidReason,fRetaining,pNewUOW,hr)( (This)->lpVtbl -> Aborted(This,pboidReason,fRetaining,pNewUOW,hr) )
#define ITransactionOutcomeEvents_HeuristicDecision(This,dwDecision,pboidReason,hr)( (This)->lpVtbl -> HeuristicDecision(This,dwDecision,pboidReason,hr) )
#define ITransactionOutcomeEvents_Indoubt(This)( (This)->lpVtbl -> Indoubt(This) )
#endif
#endif
#ifndef __ITmNodeName_INTERFACE_DEFINED__
#define __ITmNodeName_INTERFACE_DEFINED__
extern const IID IID_ITmNodeName;
typedef struct ITmNodeNameVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITmNodeName * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITmNodeName * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITmNodeName * This);
	HRESULT(STDMETHODCALLTYPE * GetNodeNameSize) (ITmNodeName * This, ULONG * pcbNodeNameSize);
	HRESULT(STDMETHODCALLTYPE * GetNodeName) (ITmNodeName * This, ULONG cbNodeNameBufferSize, LPWSTR pNodeNameBuffer);
	END_INTERFACE
}  ITmNodeNameVtbl;
interface ITmNodeName
{
	CONST_VTBL struct ITmNodeNameVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITmNodeName_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITmNodeName_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITmNodeName_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITmNodeName_GetNodeNameSize(This,pcbNodeNameSize)( (This)->lpVtbl -> GetNodeNameSize(This,pcbNodeNameSize) )
#define ITmNodeName_GetNodeName(This,cbNodeNameBufferSize,pNodeNameBuffer)( (This)->lpVtbl -> GetNodeName(This,cbNodeNameBufferSize,pNodeNameBuffer) )
#endif
#endif
#ifndef __IKernelTransaction_INTERFACE_DEFINED__
#define __IKernelTransaction_INTERFACE_DEFINED__
extern const IID IID_IKernelTransaction;
typedef struct IKernelTransactionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IKernelTransaction * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IKernelTransaction * This);
	ULONG(STDMETHODCALLTYPE * Release) (IKernelTransaction * This);
	HRESULT(STDMETHODCALLTYPE * GetHandle) (IKernelTransaction * This, HANDLE * pHandle);
	END_INTERFACE
}  IKernelTransactionVtbl;
interface IKernelTransaction
{
	CONST_VTBL struct IKernelTransactionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IKernelTransaction_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IKernelTransaction_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IKernelTransaction_Release(This)( (This)->lpVtbl -> Release(This) )
#define IKernelTransaction_GetHandle(This,pHandle)( (This)->lpVtbl -> GetHandle(This,pHandle) )
#endif
#endif
DEFINE_GUID(IID_ITransaction, 0x0fb15084, 0xaf41, 0x11ce, 0xbd, 0x2b, 0x20, 0x4c, 0x4f, 0x4f, 0x50, 0x20);
DEFINE_GUID(IID_ITransactionCloner, 0x02656950, 0x2152, 0x11d0, 0x94, 0x4C, 0x00, 0xA0, 0xC9, 0x05, 0x41, 0x6E);
DEFINE_GUID(IID_ITransaction2, 0x34021548, 0x0065, 0x11d3, 0xba, 0xc1, 0x00, 0xc0, 0x4f, 0x79, 0x7b, 0xe2);
DEFINE_GUID(IID_ITransactionDispenser, 0x3A6AD9E1, 0x23B9, 0x11cf, 0xAD, 0x60, 0x00, 0xAA, 0x00, 0xA7, 0x4C, 0xCD);
DEFINE_GUID(IID_ITransactionOptions, 0x3A6AD9E0, 0x23B9, 0x11cf, 0xAD, 0x60, 0x00, 0xAA, 0x00, 0xA7, 0x4C, 0xCD);
DEFINE_GUID(IID_ITransactionOutcomeEvents, 0x3A6AD9E2, 0x23B9, 0x11cf, 0xAD, 0x60, 0x00, 0xAA, 0x00, 0xA7, 0x4C, 0xCD);
DEFINE_GUID(IID_ITmNodeName, 0x30274F88, 0x6EE4, 0x474e, 0x9B, 0x95, 0x78, 0x07, 0xBC, 0x9E, 0xF8, 0xCF);
DEFINE_GUID(IID_IKernelTransaction, 0x79427a2b, 0xf895, 0x40e0, 0xbe, 0x79, 0xb5, 0x7d, 0xc8, 0x2e, 0xd2, 0x31);
extern RPC_IF_HANDLE __MIDL_itf_transact_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_transact_0000_0009_v0_0_s_ifspec;
#endif
