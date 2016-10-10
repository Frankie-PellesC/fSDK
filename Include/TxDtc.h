/*+@@file@@----------------------------------------------------------------*//*!
 \file		TxDtc.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul  3 21:18:43 2016
 \date		Modified on Sun Jul  3 21:18:43 2016
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
#ifndef __txdtc_h__
#define __txdtc_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IXATransLookup_FWD_DEFINED__
#define __IXATransLookup_FWD_DEFINED__
typedef interface IXATransLookup IXATransLookup;
#endif
#ifndef __IXATransLookup2_FWD_DEFINED__
#define __IXATransLookup2_FWD_DEFINED__
typedef interface IXATransLookup2 IXATransLookup2;
#endif
#ifndef __IResourceManagerSink_FWD_DEFINED__
#define __IResourceManagerSink_FWD_DEFINED__
typedef interface IResourceManagerSink IResourceManagerSink;
#endif
#ifndef __IResourceManager_FWD_DEFINED__
#define __IResourceManager_FWD_DEFINED__
typedef interface IResourceManager IResourceManager;
#endif
#ifndef __ILastResourceManager_FWD_DEFINED__
#define __ILastResourceManager_FWD_DEFINED__
typedef interface ILastResourceManager ILastResourceManager;
#endif
#ifndef __IResourceManager2_FWD_DEFINED__
#define __IResourceManager2_FWD_DEFINED__
typedef interface IResourceManager2 IResourceManager2;
#endif
#ifndef __IXAConfig_FWD_DEFINED__
#define __IXAConfig_FWD_DEFINED__
typedef interface IXAConfig IXAConfig;
#endif
#ifndef __IRMHelper_FWD_DEFINED__
#define __IRMHelper_FWD_DEFINED__
typedef interface IRMHelper IRMHelper;
#endif
#ifndef __IXAObtainRMInfo_FWD_DEFINED__
#define __IXAObtainRMInfo_FWD_DEFINED__
typedef interface IXAObtainRMInfo IXAObtainRMInfo;
#endif
#ifndef __IResourceManagerFactory_FWD_DEFINED__
#define __IResourceManagerFactory_FWD_DEFINED__
typedef interface IResourceManagerFactory IResourceManagerFactory;
#endif
#ifndef __IResourceManagerFactory2_FWD_DEFINED__
#define __IResourceManagerFactory2_FWD_DEFINED__
typedef interface IResourceManagerFactory2 IResourceManagerFactory2;
#endif
#ifndef __IPrepareInfo_FWD_DEFINED__
#define __IPrepareInfo_FWD_DEFINED__
typedef interface IPrepareInfo IPrepareInfo;
#endif
#ifndef __IPrepareInfo2_FWD_DEFINED__
#define __IPrepareInfo2_FWD_DEFINED__
typedef interface IPrepareInfo2 IPrepareInfo2;
#endif
#ifndef __IGetDispenser_FWD_DEFINED__
#define __IGetDispenser_FWD_DEFINED__
typedef interface IGetDispenser IGetDispenser;
#endif
#ifndef __ITransactionVoterBallotAsync2_FWD_DEFINED__
#define __ITransactionVoterBallotAsync2_FWD_DEFINED__
typedef interface ITransactionVoterBallotAsync2 ITransactionVoterBallotAsync2;
#endif
#ifndef __ITransactionVoterNotifyAsync2_FWD_DEFINED__
#define __ITransactionVoterNotifyAsync2_FWD_DEFINED__
typedef interface ITransactionVoterNotifyAsync2 ITransactionVoterNotifyAsync2;
#endif
#ifndef __ITransactionVoterFactory2_FWD_DEFINED__
#define __ITransactionVoterFactory2_FWD_DEFINED__
typedef interface ITransactionVoterFactory2 ITransactionVoterFactory2;
#endif
#ifndef __ITransactionPhase0EnlistmentAsync_FWD_DEFINED__
#define __ITransactionPhase0EnlistmentAsync_FWD_DEFINED__
typedef interface ITransactionPhase0EnlistmentAsync ITransactionPhase0EnlistmentAsync;
#endif
#ifndef __ITransactionPhase0NotifyAsync_FWD_DEFINED__
#define __ITransactionPhase0NotifyAsync_FWD_DEFINED__
typedef interface ITransactionPhase0NotifyAsync ITransactionPhase0NotifyAsync;
#endif
#ifndef __ITransactionPhase0Factory_FWD_DEFINED__
#define __ITransactionPhase0Factory_FWD_DEFINED__
typedef interface ITransactionPhase0Factory ITransactionPhase0Factory;
#endif
#ifndef __ITransactionTransmitter_FWD_DEFINED__
#define __ITransactionTransmitter_FWD_DEFINED__
typedef interface ITransactionTransmitter ITransactionTransmitter;
#endif
#ifndef __ITransactionTransmitterFactory_FWD_DEFINED__
#define __ITransactionTransmitterFactory_FWD_DEFINED__
typedef interface ITransactionTransmitterFactory ITransactionTransmitterFactory;
#endif
#ifndef __ITransactionReceiver_FWD_DEFINED__
#define __ITransactionReceiver_FWD_DEFINED__
typedef interface ITransactionReceiver ITransactionReceiver;
#endif
#ifndef __ITransactionReceiverFactory_FWD_DEFINED__
#define __ITransactionReceiverFactory_FWD_DEFINED__
typedef interface ITransactionReceiverFactory ITransactionReceiverFactory;
#endif
#ifndef __IDtcLuConfigure_FWD_DEFINED__
#define __IDtcLuConfigure_FWD_DEFINED__
typedef interface IDtcLuConfigure IDtcLuConfigure;
#endif
#ifndef __IDtcLuRecovery_FWD_DEFINED__
#define __IDtcLuRecovery_FWD_DEFINED__
typedef interface IDtcLuRecovery IDtcLuRecovery;
#endif
#ifndef __IDtcLuRecoveryFactory_FWD_DEFINED__
#define __IDtcLuRecoveryFactory_FWD_DEFINED__
typedef interface IDtcLuRecoveryFactory IDtcLuRecoveryFactory;
#endif
#ifndef __IDtcLuRecoveryInitiatedByDtcTransWork_FWD_DEFINED__
#define __IDtcLuRecoveryInitiatedByDtcTransWork_FWD_DEFINED__
typedef interface IDtcLuRecoveryInitiatedByDtcTransWork IDtcLuRecoveryInitiatedByDtcTransWork;
#endif
#ifndef __IDtcLuRecoveryInitiatedByDtcStatusWork_FWD_DEFINED__
#define __IDtcLuRecoveryInitiatedByDtcStatusWork_FWD_DEFINED__
typedef interface IDtcLuRecoveryInitiatedByDtcStatusWork IDtcLuRecoveryInitiatedByDtcStatusWork;
#endif
#ifndef __IDtcLuRecoveryInitiatedByDtc_FWD_DEFINED__
#define __IDtcLuRecoveryInitiatedByDtc_FWD_DEFINED__
typedef interface IDtcLuRecoveryInitiatedByDtc IDtcLuRecoveryInitiatedByDtc;
#endif
#ifndef __IDtcLuRecoveryInitiatedByLuWork_FWD_DEFINED__
#define __IDtcLuRecoveryInitiatedByLuWork_FWD_DEFINED__
typedef interface IDtcLuRecoveryInitiatedByLuWork IDtcLuRecoveryInitiatedByLuWork;
#endif
#ifndef __IDtcLuRecoveryInitiatedByLu_FWD_DEFINED__
#define __IDtcLuRecoveryInitiatedByLu_FWD_DEFINED__
typedef interface IDtcLuRecoveryInitiatedByLu IDtcLuRecoveryInitiatedByLu;
#endif
#ifndef __IDtcLuRmEnlistment_FWD_DEFINED__
#define __IDtcLuRmEnlistment_FWD_DEFINED__
typedef interface IDtcLuRmEnlistment IDtcLuRmEnlistment;
#endif
#ifndef __IDtcLuRmEnlistmentSink_FWD_DEFINED__
#define __IDtcLuRmEnlistmentSink_FWD_DEFINED__
typedef interface IDtcLuRmEnlistmentSink IDtcLuRmEnlistmentSink;
#endif
#ifndef __IDtcLuRmEnlistmentFactory_FWD_DEFINED__
#define __IDtcLuRmEnlistmentFactory_FWD_DEFINED__
typedef interface IDtcLuRmEnlistmentFactory IDtcLuRmEnlistmentFactory;
#endif
#ifndef __IDtcLuSubordinateDtc_FWD_DEFINED__
#define __IDtcLuSubordinateDtc_FWD_DEFINED__
typedef interface IDtcLuSubordinateDtc IDtcLuSubordinateDtc;
#endif
#ifndef __IDtcLuSubordinateDtcSink_FWD_DEFINED__
#define __IDtcLuSubordinateDtcSink_FWD_DEFINED__
typedef interface IDtcLuSubordinateDtcSink IDtcLuSubordinateDtcSink;
#endif
#ifndef __IDtcLuSubordinateDtcFactory_FWD_DEFINED__
#define __IDtcLuSubordinateDtcFactory_FWD_DEFINED__
typedef interface IDtcLuSubordinateDtcFactory IDtcLuSubordinateDtcFactory;
#endif
#include "txcoord.h"
#define XACTTOMSG(dwXact) (dwXact-0x00040000+0x40000000)
typedef
	enum XACT_DTC_CONSTANTS { XACT_E_CONNECTION_REQUEST_DENIED = 0x8004d100L,
	XACT_E_TOOMANY_ENLISTMENTS = 0x8004d101L,
	XACT_E_DUPLICATE_GUID = 0x8004d102L,
	XACT_E_NOTSINGLEPHASE = 0x8004d103L,
	XACT_E_RECOVERYALREADYDONE = 0x8004d104L,
	XACT_E_PROTOCOL = 0x8004d105L,
	XACT_E_RM_FAILURE = 0x8004d106L,
	XACT_E_RECOVERY_FAILED = 0x8004d107L,
	XACT_E_LU_NOT_FOUND = 0x8004d108L,
	XACT_E_DUPLICATE_LU = 0x8004d109L,
	XACT_E_LU_NOT_CONNECTED = 0x8004d10aL,
	XACT_E_DUPLICATE_TRANSID = 0x8004d10bL,
	XACT_E_LU_BUSY = 0x8004d10cL,
	XACT_E_LU_NO_RECOVERY_PROCESS = 0x8004d10dL,
	XACT_E_LU_DOWN = 0x8004d10eL,
	XACT_E_LU_RECOVERING = 0x8004d10fL,
	XACT_E_LU_RECOVERY_MISMATCH = 0x8004d110L,
	XACT_E_RM_UNAVAILABLE = 0x8004d111L,
	XACT_E_LRMRECOVERYALREADYDONE = 0x8004d112L,
	XACT_E_NOLASTRESOURCEINTERFACE = 0x8004d113L,
	XACT_S_NONOTIFY = 0x4d100L,
	XACT_OK_NONOTIFY = 0x4d101L,
	dwUSER_MS_SQLSERVER = 0xffff
} XACT_DTC_CONSTANTS;
#ifndef _XID_T_DEFINED
#define _XID_T_DEFINED
typedef struct xid_t
{
	long formatID;
	long gtrid_length;
	long bqual_length;
	char data[128];
} XID;
#endif
#ifndef _XA_SWITCH_T_DEFINED
#define _XA_SWITCH_T_DEFINED
typedef struct xa_switch_t
{
	char name[32];
	long flags;
	long version;
	int (__cdecl * xa_open_entry) (char *__MIDL____MIDL_itf_txdtc_0000_00000000, int __MIDL____MIDL_itf_txdtc_0000_00000001, long __MIDL____MIDL_itf_txdtc_0000_00000002);
	int (__cdecl * xa_close_entry) (char *__MIDL____MIDL_itf_txdtc_0000_00000004, int __MIDL____MIDL_itf_txdtc_0000_00000005, long __MIDL____MIDL_itf_txdtc_0000_00000006);
	int (__cdecl * xa_start_entry) (XID * __MIDL____MIDL_itf_txdtc_0000_00000008, int __MIDL____MIDL_itf_txdtc_0000_00000009, long __MIDL____MIDL_itf_txdtc_0000_00000010);
	int (__cdecl * xa_end_entry) (XID * __MIDL____MIDL_itf_txdtc_0000_00000012, int __MIDL____MIDL_itf_txdtc_0000_00000013, long __MIDL____MIDL_itf_txdtc_0000_00000014);
	int (__cdecl * xa_rollback_entry) (XID * __MIDL____MIDL_itf_txdtc_0000_00000016, int __MIDL____MIDL_itf_txdtc_0000_00000017, long __MIDL____MIDL_itf_txdtc_0000_00000018);
	int (__cdecl * xa_prepare_entry) (XID * __MIDL____MIDL_itf_txdtc_0000_00000020, int __MIDL____MIDL_itf_txdtc_0000_00000021, long __MIDL____MIDL_itf_txdtc_0000_00000022);
	int (__cdecl * xa_commit_entry) (XID * __MIDL____MIDL_itf_txdtc_0000_00000024, int __MIDL____MIDL_itf_txdtc_0000_00000025, long __MIDL____MIDL_itf_txdtc_0000_00000026);
	int (__cdecl * xa_recover_entry) (XID * __MIDL____MIDL_itf_txdtc_0000_00000028, long __MIDL____MIDL_itf_txdtc_0000_00000029, int __MIDL____MIDL_itf_txdtc_0000_00000030, long __MIDL____MIDL_itf_txdtc_0000_00000031);
	int (__cdecl * xa_forget_entry) (XID * __MIDL____MIDL_itf_txdtc_0000_00000033, int __MIDL____MIDL_itf_txdtc_0000_00000034, long __MIDL____MIDL_itf_txdtc_0000_00000035);
	int (__cdecl * xa_complete_entry) (int *__MIDL____MIDL_itf_txdtc_0000_00000037, int *__MIDL____MIDL_itf_txdtc_0000_00000038, int __MIDL____MIDL_itf_txdtc_0000_00000039, long __MIDL____MIDL_itf_txdtc_0000_00000040);
} xa_switch_t;
#endif
extern RPC_IF_HANDLE __MIDL_itf_txdtc_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_txdtc_0000_0000_v0_0_s_ifspec;
#ifndef __IXATransLookup_INTERFACE_DEFINED__
#define __IXATransLookup_INTERFACE_DEFINED__
extern const IID IID_IXATransLookup;
typedef struct IXATransLookupVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IXATransLookup * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IXATransLookup * This);
	ULONG(STDMETHODCALLTYPE * Release) (IXATransLookup * This);
	HRESULT(STDMETHODCALLTYPE * Lookup) (IXATransLookup * This, ITransaction ** ppTransaction);
	END_INTERFACE
}  IXATransLookupVtbl;
interface IXATransLookup
{
	CONST_VTBL struct IXATransLookupVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IXATransLookup_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IXATransLookup_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IXATransLookup_Release(This)( (This)->lpVtbl -> Release(This) )
#define IXATransLookup_Lookup(This,ppTransaction)( (This)->lpVtbl -> Lookup(This,ppTransaction) )
#endif
#endif
#ifndef __IXATransLookup2_INTERFACE_DEFINED__
#define __IXATransLookup2_INTERFACE_DEFINED__
extern const IID IID_IXATransLookup2;
typedef struct IXATransLookup2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IXATransLookup2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IXATransLookup2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IXATransLookup2 * This);
	HRESULT(STDMETHODCALLTYPE * Lookup) (IXATransLookup2 * This, XID * pXID, ITransaction ** ppTransaction);
	END_INTERFACE
}  IXATransLookup2Vtbl;
interface IXATransLookup2
{
	CONST_VTBL struct IXATransLookup2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IXATransLookup2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IXATransLookup2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IXATransLookup2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IXATransLookup2_Lookup(This,pXID,ppTransaction)( (This)->lpVtbl -> Lookup(This,pXID,ppTransaction) )
#endif
#endif
#ifndef __IResourceManagerSink_INTERFACE_DEFINED__
#define __IResourceManagerSink_INTERFACE_DEFINED__
extern const IID IID_IResourceManagerSink;
typedef struct IResourceManagerSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IResourceManagerSink * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IResourceManagerSink * This);
	ULONG(STDMETHODCALLTYPE * Release) (IResourceManagerSink * This);
	HRESULT(STDMETHODCALLTYPE * TMDown) (IResourceManagerSink * This);
	END_INTERFACE
}  IResourceManagerSinkVtbl;
interface IResourceManagerSink
{
	CONST_VTBL struct IResourceManagerSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IResourceManagerSink_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IResourceManagerSink_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IResourceManagerSink_Release(This)( (This)->lpVtbl -> Release(This) )
#define IResourceManagerSink_TMDown(This)( (This)->lpVtbl -> TMDown(This) )
#endif
#endif
#ifndef __IResourceManager_INTERFACE_DEFINED__
#define __IResourceManager_INTERFACE_DEFINED__
extern const IID IID_IResourceManager;
typedef struct IResourceManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IResourceManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IResourceManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (IResourceManager * This);
	HRESULT(STDMETHODCALLTYPE * Enlist) (IResourceManager * This, ITransaction * pTransaction, ITransactionResourceAsync * pRes, XACTUOW * pUOW, LONG * pisoLevel, ITransactionEnlistmentAsync ** ppEnlist);
	HRESULT(STDMETHODCALLTYPE * Reenlist) (IResourceManager * This, byte * pPrepInfo, ULONG cbPrepInfo, DWORD lTimeout, XACTSTAT * pXactStat);
	HRESULT(STDMETHODCALLTYPE * ReenlistmentComplete) (IResourceManager * This);
	HRESULT(STDMETHODCALLTYPE * GetDistributedTransactionManager) (IResourceManager * This, REFIID iid, void **ppvObject);
	END_INTERFACE
}  IResourceManagerVtbl;
interface IResourceManager
{
	CONST_VTBL struct IResourceManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IResourceManager_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IResourceManager_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IResourceManager_Release(This)( (This)->lpVtbl -> Release(This) )
#define IResourceManager_Enlist(This,pTransaction,pRes,pUOW,pisoLevel,ppEnlist)( (This)->lpVtbl -> Enlist(This,pTransaction,pRes,pUOW,pisoLevel,ppEnlist) )
#define IResourceManager_Reenlist(This,pPrepInfo,cbPrepInfo,lTimeout,pXactStat)( (This)->lpVtbl -> Reenlist(This,pPrepInfo,cbPrepInfo,lTimeout,pXactStat) )
#define IResourceManager_ReenlistmentComplete(This)( (This)->lpVtbl -> ReenlistmentComplete(This) )
#define IResourceManager_GetDistributedTransactionManager(This,iid,ppvObject)( (This)->lpVtbl -> GetDistributedTransactionManager(This,iid,ppvObject) )
#endif
#endif
#ifndef __ILastResourceManager_INTERFACE_DEFINED__
#define __ILastResourceManager_INTERFACE_DEFINED__
extern const IID IID_ILastResourceManager;
typedef struct ILastResourceManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ILastResourceManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ILastResourceManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (ILastResourceManager * This);
	HRESULT(STDMETHODCALLTYPE * TransactionCommitted) (ILastResourceManager * This, byte * pPrepInfo, ULONG cbPrepInfo);
	HRESULT(STDMETHODCALLTYPE * RecoveryDone) (ILastResourceManager * This);
	END_INTERFACE
}  ILastResourceManagerVtbl;
interface ILastResourceManager
{
	CONST_VTBL struct ILastResourceManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ILastResourceManager_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ILastResourceManager_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ILastResourceManager_Release(This)( (This)->lpVtbl -> Release(This) )
#define ILastResourceManager_TransactionCommitted(This,pPrepInfo,cbPrepInfo)( (This)->lpVtbl -> TransactionCommitted(This,pPrepInfo,cbPrepInfo) )
#define ILastResourceManager_RecoveryDone(This)( (This)->lpVtbl -> RecoveryDone(This) )
#endif
#endif
#ifndef __IResourceManager2_INTERFACE_DEFINED__
#define __IResourceManager2_INTERFACE_DEFINED__
extern const IID IID_IResourceManager2;
typedef struct IResourceManager2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IResourceManager2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IResourceManager2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IResourceManager2 * This);
	HRESULT(STDMETHODCALLTYPE * Enlist) (IResourceManager2 * This, ITransaction * pTransaction, ITransactionResourceAsync * pRes, XACTUOW * pUOW, LONG * pisoLevel, ITransactionEnlistmentAsync ** ppEnlist);
	HRESULT(STDMETHODCALLTYPE * Reenlist) (IResourceManager2 * This, byte * pPrepInfo, ULONG cbPrepInfo, DWORD lTimeout, XACTSTAT * pXactStat);
	HRESULT(STDMETHODCALLTYPE * ReenlistmentComplete) (IResourceManager2 * This);
	HRESULT(STDMETHODCALLTYPE * GetDistributedTransactionManager) (IResourceManager2 * This, REFIID iid, void **ppvObject);
	HRESULT(STDMETHODCALLTYPE * Enlist2) (IResourceManager2 * This, ITransaction * pTransaction, ITransactionResourceAsync * pResAsync, XACTUOW * pUOW, LONG * pisoLevel, XID * pXid, ITransactionEnlistmentAsync ** ppEnlist);
	HRESULT(STDMETHODCALLTYPE * Reenlist2) (IResourceManager2 * This, XID * pXid, DWORD dwTimeout, XACTSTAT * pXactStat);
	END_INTERFACE
}  IResourceManager2Vtbl;
interface IResourceManager2
{
	CONST_VTBL struct IResourceManager2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IResourceManager2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IResourceManager2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IResourceManager2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IResourceManager2_Enlist(This,pTransaction,pRes,pUOW,pisoLevel,ppEnlist)( (This)->lpVtbl -> Enlist(This,pTransaction,pRes,pUOW,pisoLevel,ppEnlist) )
#define IResourceManager2_Reenlist(This,pPrepInfo,cbPrepInfo,lTimeout,pXactStat)( (This)->lpVtbl -> Reenlist(This,pPrepInfo,cbPrepInfo,lTimeout,pXactStat) )
#define IResourceManager2_ReenlistmentComplete(This)( (This)->lpVtbl -> ReenlistmentComplete(This) )
#define IResourceManager2_GetDistributedTransactionManager(This,iid,ppvObject)( (This)->lpVtbl -> GetDistributedTransactionManager(This,iid,ppvObject) )
#define IResourceManager2_Enlist2(This,pTransaction,pResAsync,pUOW,pisoLevel,pXid,ppEnlist)( (This)->lpVtbl -> Enlist2(This,pTransaction,pResAsync,pUOW,pisoLevel,pXid,ppEnlist) )
#define IResourceManager2_Reenlist2(This,pXid,dwTimeout,pXactStat)( (This)->lpVtbl -> Reenlist2(This,pXid,dwTimeout,pXactStat) )
#endif
#endif
#ifndef __IXAConfig_INTERFACE_DEFINED__
#define __IXAConfig_INTERFACE_DEFINED__
extern const IID IID_IXAConfig;
typedef struct IXAConfigVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IXAConfig * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IXAConfig * This);
	ULONG(STDMETHODCALLTYPE * Release) (IXAConfig * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IXAConfig * This, GUID clsidHelperDll);
	HRESULT(STDMETHODCALLTYPE * Terminate) (IXAConfig * This);
	END_INTERFACE
}  IXAConfigVtbl;
interface IXAConfig
{
	CONST_VTBL struct IXAConfigVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IXAConfig_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IXAConfig_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IXAConfig_Release(This)( (This)->lpVtbl -> Release(This) )
#define IXAConfig_Initialize(This,clsidHelperDll)( (This)->lpVtbl -> Initialize(This,clsidHelperDll) )
#define IXAConfig_Terminate(This)( (This)->lpVtbl -> Terminate(This) )
#endif
#endif
#ifndef __IRMHelper_INTERFACE_DEFINED__
#define __IRMHelper_INTERFACE_DEFINED__
extern const IID IID_IRMHelper;
typedef struct IRMHelperVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRMHelper * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRMHelper * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRMHelper * This);
	HRESULT(STDMETHODCALLTYPE * RMCount) (IRMHelper * This, DWORD dwcTotalNumberOfRMs);
	HRESULT(STDMETHODCALLTYPE * RMInfo) (IRMHelper * This, xa_switch_t * pXa_Switch, BOOL fCDeclCallingConv, char *pszOpenString, char *pszCloseString, GUID guidRMRecovery);
	END_INTERFACE
}  IRMHelperVtbl;
interface IRMHelper
{
	CONST_VTBL struct IRMHelperVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRMHelper_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRMHelper_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IRMHelper_Release(This)( (This)->lpVtbl -> Release(This) )
#define IRMHelper_RMCount(This,dwcTotalNumberOfRMs)( (This)->lpVtbl -> RMCount(This,dwcTotalNumberOfRMs) )
#define IRMHelper_RMInfo(This,pXa_Switch,fCDeclCallingConv,pszOpenString,pszCloseString,guidRMRecovery)( (This)->lpVtbl -> RMInfo(This,pXa_Switch,fCDeclCallingConv,pszOpenString,pszCloseString,guidRMRecovery) )
#endif
#endif
#ifndef __IXAObtainRMInfo_INTERFACE_DEFINED__
#define __IXAObtainRMInfo_INTERFACE_DEFINED__
extern const IID IID_IXAObtainRMInfo;
typedef struct IXAObtainRMInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IXAObtainRMInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IXAObtainRMInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IXAObtainRMInfo * This);
	HRESULT(STDMETHODCALLTYPE * ObtainRMInfo) (IXAObtainRMInfo * This, IRMHelper * pIRMHelper);
	END_INTERFACE
}  IXAObtainRMInfoVtbl;
interface IXAObtainRMInfo
{
	CONST_VTBL struct IXAObtainRMInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IXAObtainRMInfo_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IXAObtainRMInfo_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IXAObtainRMInfo_Release(This)( (This)->lpVtbl -> Release(This) )
#define IXAObtainRMInfo_ObtainRMInfo(This,pIRMHelper)( (This)->lpVtbl -> ObtainRMInfo(This,pIRMHelper) )
#endif
#endif
#ifndef __IResourceManagerFactory_INTERFACE_DEFINED__
#define __IResourceManagerFactory_INTERFACE_DEFINED__
extern const IID IID_IResourceManagerFactory;
typedef struct IResourceManagerFactoryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IResourceManagerFactory * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IResourceManagerFactory * This);
	ULONG(STDMETHODCALLTYPE * Release) (IResourceManagerFactory * This);
	HRESULT(STDMETHODCALLTYPE * Create) (IResourceManagerFactory * This, GUID * pguidRM, CHAR * pszRMName, IResourceManagerSink * pIResMgrSink, IResourceManager ** ppResMgr);
	END_INTERFACE
}  IResourceManagerFactoryVtbl;
interface IResourceManagerFactory
{
	CONST_VTBL struct IResourceManagerFactoryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IResourceManagerFactory_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IResourceManagerFactory_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IResourceManagerFactory_Release(This)( (This)->lpVtbl -> Release(This) )
#define IResourceManagerFactory_Create(This,pguidRM,pszRMName,pIResMgrSink,ppResMgr)( (This)->lpVtbl -> Create(This,pguidRM,pszRMName,pIResMgrSink,ppResMgr) )
#endif
#endif
#ifndef __IResourceManagerFactory2_INTERFACE_DEFINED__
#define __IResourceManagerFactory2_INTERFACE_DEFINED__
extern const IID IID_IResourceManagerFactory2;
typedef struct IResourceManagerFactory2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IResourceManagerFactory2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IResourceManagerFactory2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IResourceManagerFactory2 * This);
	HRESULT(STDMETHODCALLTYPE * Create) (IResourceManagerFactory2 * This, GUID * pguidRM, CHAR * pszRMName, IResourceManagerSink * pIResMgrSink, IResourceManager ** ppResMgr);
	HRESULT(STDMETHODCALLTYPE * CreateEx) (IResourceManagerFactory2 * This, GUID * pguidRM, CHAR * pszRMName, IResourceManagerSink * pIResMgrSink, REFIID riidRequested, void **ppvResMgr);
	END_INTERFACE
}  IResourceManagerFactory2Vtbl;
interface IResourceManagerFactory2
{
	CONST_VTBL struct IResourceManagerFactory2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IResourceManagerFactory2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IResourceManagerFactory2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IResourceManagerFactory2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IResourceManagerFactory2_Create(This,pguidRM,pszRMName,pIResMgrSink,ppResMgr)( (This)->lpVtbl -> Create(This,pguidRM,pszRMName,pIResMgrSink,ppResMgr) )
#define IResourceManagerFactory2_CreateEx(This,pguidRM,pszRMName,pIResMgrSink,riidRequested,ppvResMgr)( (This)->lpVtbl -> CreateEx(This,pguidRM,pszRMName,pIResMgrSink,riidRequested,ppvResMgr) )
#endif
#endif
#ifndef __IPrepareInfo_INTERFACE_DEFINED__
#define __IPrepareInfo_INTERFACE_DEFINED__
extern const IID IID_IPrepareInfo;
typedef struct IPrepareInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPrepareInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPrepareInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPrepareInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetPrepareInfoSize) (IPrepareInfo * This, ULONG * pcbPrepInfo);
	HRESULT(STDMETHODCALLTYPE * GetPrepareInfo) (IPrepareInfo * This, byte * pPrepInfo);
	END_INTERFACE
}  IPrepareInfoVtbl;
interface IPrepareInfo
{
	CONST_VTBL struct IPrepareInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPrepareInfo_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPrepareInfo_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IPrepareInfo_Release(This)( (This)->lpVtbl -> Release(This) )
#define IPrepareInfo_GetPrepareInfoSize(This,pcbPrepInfo)( (This)->lpVtbl -> GetPrepareInfoSize(This,pcbPrepInfo) )
#define IPrepareInfo_GetPrepareInfo(This,pPrepInfo)( (This)->lpVtbl -> GetPrepareInfo(This,pPrepInfo) )
#endif
#endif
#ifndef __IPrepareInfo2_INTERFACE_DEFINED__
#define __IPrepareInfo2_INTERFACE_DEFINED__
extern const IID IID_IPrepareInfo2;
typedef struct IPrepareInfo2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPrepareInfo2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPrepareInfo2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPrepareInfo2 * This);
	HRESULT(STDMETHODCALLTYPE * GetPrepareInfoSize) (IPrepareInfo2 * This, ULONG * pcbPrepInfo);
	HRESULT(STDMETHODCALLTYPE * GetPrepareInfo) (IPrepareInfo2 * This, ULONG cbPrepareInfo, byte * pPrepInfo);
	END_INTERFACE
}  IPrepareInfo2Vtbl;
interface IPrepareInfo2
{
	CONST_VTBL struct IPrepareInfo2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPrepareInfo2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPrepareInfo2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IPrepareInfo2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IPrepareInfo2_GetPrepareInfoSize(This,pcbPrepInfo)( (This)->lpVtbl -> GetPrepareInfoSize(This,pcbPrepInfo) )
#define IPrepareInfo2_GetPrepareInfo(This,cbPrepareInfo,pPrepInfo)( (This)->lpVtbl -> GetPrepareInfo(This,cbPrepareInfo,pPrepInfo) )
#endif
#endif
#ifndef __IGetDispenser_INTERFACE_DEFINED__
#define __IGetDispenser_INTERFACE_DEFINED__
extern const IID IID_IGetDispenser;
typedef struct IGetDispenserVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGetDispenser * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGetDispenser * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGetDispenser * This);
	HRESULT(STDMETHODCALLTYPE * GetDispenser) (IGetDispenser * This, REFIID iid, void **ppvObject);
	END_INTERFACE
}  IGetDispenserVtbl;
interface IGetDispenser
{
	CONST_VTBL struct IGetDispenserVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGetDispenser_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGetDispenser_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGetDispenser_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGetDispenser_GetDispenser(This,iid,ppvObject)( (This)->lpVtbl -> GetDispenser(This,iid,ppvObject) )
#endif
#endif
#ifndef __ITransactionVoterBallotAsync2_INTERFACE_DEFINED__
#define __ITransactionVoterBallotAsync2_INTERFACE_DEFINED__
extern const IID IID_ITransactionVoterBallotAsync2;
typedef struct ITransactionVoterBallotAsync2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITransactionVoterBallotAsync2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITransactionVoterBallotAsync2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITransactionVoterBallotAsync2 * This);
	HRESULT(STDMETHODCALLTYPE * VoteRequestDone) (ITransactionVoterBallotAsync2 * This, HRESULT hr, BOID * pboidReason);
	END_INTERFACE
}  ITransactionVoterBallotAsync2Vtbl;
interface ITransactionVoterBallotAsync2
{
	CONST_VTBL struct ITransactionVoterBallotAsync2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITransactionVoterBallotAsync2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITransactionVoterBallotAsync2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITransactionVoterBallotAsync2_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITransactionVoterBallotAsync2_VoteRequestDone(This,hr,pboidReason)( (This)->lpVtbl -> VoteRequestDone(This,hr,pboidReason) )
#endif
#endif
#ifndef __ITransactionVoterNotifyAsync2_INTERFACE_DEFINED__
#define __ITransactionVoterNotifyAsync2_INTERFACE_DEFINED__
extern const IID IID_ITransactionVoterNotifyAsync2;
typedef struct ITransactionVoterNotifyAsync2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITransactionVoterNotifyAsync2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITransactionVoterNotifyAsync2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITransactionVoterNotifyAsync2 * This);
	HRESULT(STDMETHODCALLTYPE * Committed) (ITransactionVoterNotifyAsync2 * This, BOOL fRetaining, XACTUOW * pNewUOW, HRESULT hr);
	HRESULT(STDMETHODCALLTYPE * Aborted) (ITransactionVoterNotifyAsync2 * This, BOID * pboidReason, BOOL fRetaining, XACTUOW * pNewUOW, HRESULT hr);
	HRESULT(STDMETHODCALLTYPE * HeuristicDecision) (ITransactionVoterNotifyAsync2 * This, DWORD dwDecision, BOID * pboidReason, HRESULT hr);
	HRESULT(STDMETHODCALLTYPE * Indoubt) (ITransactionVoterNotifyAsync2 * This);
	HRESULT(STDMETHODCALLTYPE * VoteRequest) (ITransactionVoterNotifyAsync2 * This);
	END_INTERFACE
}  ITransactionVoterNotifyAsync2Vtbl;
interface ITransactionVoterNotifyAsync2
{
	CONST_VTBL struct ITransactionVoterNotifyAsync2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITransactionVoterNotifyAsync2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITransactionVoterNotifyAsync2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITransactionVoterNotifyAsync2_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITransactionVoterNotifyAsync2_Committed(This,fRetaining,pNewUOW,hr)( (This)->lpVtbl -> Committed(This,fRetaining,pNewUOW,hr) )
#define ITransactionVoterNotifyAsync2_Aborted(This,pboidReason,fRetaining,pNewUOW,hr)( (This)->lpVtbl -> Aborted(This,pboidReason,fRetaining,pNewUOW,hr) )
#define ITransactionVoterNotifyAsync2_HeuristicDecision(This,dwDecision,pboidReason,hr)( (This)->lpVtbl -> HeuristicDecision(This,dwDecision,pboidReason,hr) )
#define ITransactionVoterNotifyAsync2_Indoubt(This)( (This)->lpVtbl -> Indoubt(This) )
#define ITransactionVoterNotifyAsync2_VoteRequest(This)( (This)->lpVtbl -> VoteRequest(This) )
#endif
#endif
#ifndef __ITransactionVoterFactory2_INTERFACE_DEFINED__
#define __ITransactionVoterFactory2_INTERFACE_DEFINED__
extern const IID IID_ITransactionVoterFactory2;
typedef struct ITransactionVoterFactory2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITransactionVoterFactory2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITransactionVoterFactory2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITransactionVoterFactory2 * This);
	HRESULT(STDMETHODCALLTYPE * Create) (ITransactionVoterFactory2 * This, ITransaction * pTransaction, ITransactionVoterNotifyAsync2 * pVoterNotify, ITransactionVoterBallotAsync2 ** ppVoterBallot);
	END_INTERFACE
}  ITransactionVoterFactory2Vtbl;
interface ITransactionVoterFactory2
{
	CONST_VTBL struct ITransactionVoterFactory2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITransactionVoterFactory2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITransactionVoterFactory2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITransactionVoterFactory2_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITransactionVoterFactory2_Create(This,pTransaction,pVoterNotify,ppVoterBallot)( (This)->lpVtbl -> Create(This,pTransaction,pVoterNotify,ppVoterBallot) )
#endif
#endif
#ifndef __ITransactionPhase0EnlistmentAsync_INTERFACE_DEFINED__
#define __ITransactionPhase0EnlistmentAsync_INTERFACE_DEFINED__
extern const IID IID_ITransactionPhase0EnlistmentAsync;
typedef struct ITransactionPhase0EnlistmentAsyncVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITransactionPhase0EnlistmentAsync * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITransactionPhase0EnlistmentAsync * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITransactionPhase0EnlistmentAsync * This);
	HRESULT(STDMETHODCALLTYPE * Enable) (ITransactionPhase0EnlistmentAsync * This);
	HRESULT(STDMETHODCALLTYPE * WaitForEnlistment) (ITransactionPhase0EnlistmentAsync * This);
	HRESULT(STDMETHODCALLTYPE * Phase0Done) (ITransactionPhase0EnlistmentAsync * This);
	HRESULT(STDMETHODCALLTYPE * Unenlist) (ITransactionPhase0EnlistmentAsync * This);
	HRESULT(STDMETHODCALLTYPE * GetTransaction) (ITransactionPhase0EnlistmentAsync * This, ITransaction ** ppITransaction);
	END_INTERFACE
}  ITransactionPhase0EnlistmentAsyncVtbl;
interface ITransactionPhase0EnlistmentAsync
{
	CONST_VTBL struct ITransactionPhase0EnlistmentAsyncVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITransactionPhase0EnlistmentAsync_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITransactionPhase0EnlistmentAsync_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITransactionPhase0EnlistmentAsync_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITransactionPhase0EnlistmentAsync_Enable(This)( (This)->lpVtbl -> Enable(This) )
#define ITransactionPhase0EnlistmentAsync_WaitForEnlistment(This)( (This)->lpVtbl -> WaitForEnlistment(This) )
#define ITransactionPhase0EnlistmentAsync_Phase0Done(This)( (This)->lpVtbl -> Phase0Done(This) )
#define ITransactionPhase0EnlistmentAsync_Unenlist(This)( (This)->lpVtbl -> Unenlist(This) )
#define ITransactionPhase0EnlistmentAsync_GetTransaction(This,ppITransaction)( (This)->lpVtbl -> GetTransaction(This,ppITransaction) )
#endif
#endif
#ifndef __ITransactionPhase0NotifyAsync_INTERFACE_DEFINED__
#define __ITransactionPhase0NotifyAsync_INTERFACE_DEFINED__
extern const IID IID_ITransactionPhase0NotifyAsync;
typedef struct ITransactionPhase0NotifyAsyncVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITransactionPhase0NotifyAsync * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITransactionPhase0NotifyAsync * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITransactionPhase0NotifyAsync * This);
	HRESULT(STDMETHODCALLTYPE * Phase0Request) (ITransactionPhase0NotifyAsync * This, BOOL fAbortingHint);
	HRESULT(STDMETHODCALLTYPE * EnlistCompleted) (ITransactionPhase0NotifyAsync * This, HRESULT status);
	END_INTERFACE
}  ITransactionPhase0NotifyAsyncVtbl;
interface ITransactionPhase0NotifyAsync
{
	CONST_VTBL struct ITransactionPhase0NotifyAsyncVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITransactionPhase0NotifyAsync_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITransactionPhase0NotifyAsync_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITransactionPhase0NotifyAsync_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITransactionPhase0NotifyAsync_Phase0Request(This,fAbortingHint)( (This)->lpVtbl -> Phase0Request(This,fAbortingHint) )
#define ITransactionPhase0NotifyAsync_EnlistCompleted(This,status)( (This)->lpVtbl -> EnlistCompleted(This,status) )
#endif
#endif
#ifndef __ITransactionPhase0Factory_INTERFACE_DEFINED__
#define __ITransactionPhase0Factory_INTERFACE_DEFINED__
extern const IID IID_ITransactionPhase0Factory;
typedef struct ITransactionPhase0FactoryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITransactionPhase0Factory * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITransactionPhase0Factory * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITransactionPhase0Factory * This);
	HRESULT(STDMETHODCALLTYPE * Create) (ITransactionPhase0Factory * This, ITransactionPhase0NotifyAsync * pPhase0Notify, ITransactionPhase0EnlistmentAsync ** ppPhase0Enlistment);
	END_INTERFACE
}  ITransactionPhase0FactoryVtbl;
interface ITransactionPhase0Factory
{
	CONST_VTBL struct ITransactionPhase0FactoryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITransactionPhase0Factory_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITransactionPhase0Factory_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITransactionPhase0Factory_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITransactionPhase0Factory_Create(This,pPhase0Notify,ppPhase0Enlistment)( (This)->lpVtbl -> Create(This,pPhase0Notify,ppPhase0Enlistment) )
#endif
#endif
#ifndef __ITransactionTransmitter_INTERFACE_DEFINED__
#define __ITransactionTransmitter_INTERFACE_DEFINED__
extern const IID IID_ITransactionTransmitter;
typedef struct ITransactionTransmitterVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITransactionTransmitter * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITransactionTransmitter * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITransactionTransmitter * This);
	HRESULT(STDMETHODCALLTYPE * Set) (ITransactionTransmitter * This, ITransaction * pTransaction);
	HRESULT(STDMETHODCALLTYPE * GetPropagationTokenSize) (ITransactionTransmitter * This, ULONG * pcbToken);
	HRESULT(STDMETHODCALLTYPE * MarshalPropagationToken) (ITransactionTransmitter * This, ULONG cbToken, byte * rgbToken, ULONG * pcbUsed);
	HRESULT(STDMETHODCALLTYPE * UnmarshalReturnToken) (ITransactionTransmitter * This, ULONG cbReturnToken, byte * rgbReturnToken);
	HRESULT(STDMETHODCALLTYPE * Reset) (ITransactionTransmitter * This);
	END_INTERFACE
}  ITransactionTransmitterVtbl;
interface ITransactionTransmitter
{
	CONST_VTBL struct ITransactionTransmitterVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITransactionTransmitter_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITransactionTransmitter_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITransactionTransmitter_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITransactionTransmitter_Set(This,pTransaction)( (This)->lpVtbl -> Set(This,pTransaction) )
#define ITransactionTransmitter_GetPropagationTokenSize(This,pcbToken)( (This)->lpVtbl -> GetPropagationTokenSize(This,pcbToken) )
#define ITransactionTransmitter_MarshalPropagationToken(This,cbToken,rgbToken,pcbUsed)( (This)->lpVtbl -> MarshalPropagationToken(This,cbToken,rgbToken,pcbUsed) )
#define ITransactionTransmitter_UnmarshalReturnToken(This,cbReturnToken,rgbReturnToken)( (This)->lpVtbl -> UnmarshalReturnToken(This,cbReturnToken,rgbReturnToken) )
#define ITransactionTransmitter_Reset(This)( (This)->lpVtbl -> Reset(This) )
#endif
#endif
#ifndef __ITransactionTransmitterFactory_INTERFACE_DEFINED__
#define __ITransactionTransmitterFactory_INTERFACE_DEFINED__
extern const IID IID_ITransactionTransmitterFactory;
typedef struct ITransactionTransmitterFactoryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITransactionTransmitterFactory * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITransactionTransmitterFactory * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITransactionTransmitterFactory * This);
	HRESULT(STDMETHODCALLTYPE * Create) (ITransactionTransmitterFactory * This, ITransactionTransmitter ** ppTransmitter);
	END_INTERFACE
}  ITransactionTransmitterFactoryVtbl;
interface ITransactionTransmitterFactory
{
	CONST_VTBL struct ITransactionTransmitterFactoryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITransactionTransmitterFactory_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITransactionTransmitterFactory_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITransactionTransmitterFactory_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITransactionTransmitterFactory_Create(This,ppTransmitter)( (This)->lpVtbl -> Create(This,ppTransmitter) )
#endif
#endif
#ifndef __ITransactionReceiver_INTERFACE_DEFINED__
#define __ITransactionReceiver_INTERFACE_DEFINED__
extern const IID IID_ITransactionReceiver;
typedef struct ITransactionReceiverVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITransactionReceiver * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITransactionReceiver * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITransactionReceiver * This);
	HRESULT(STDMETHODCALLTYPE * UnmarshalPropagationToken) (ITransactionReceiver * This, ULONG cbToken, byte * rgbToken, ITransaction ** ppTransaction);
	HRESULT(STDMETHODCALLTYPE * GetReturnTokenSize) (ITransactionReceiver * This, ULONG * pcbReturnToken);
	HRESULT(STDMETHODCALLTYPE * MarshalReturnToken) (ITransactionReceiver * This, ULONG cbReturnToken, byte * rgbReturnToken, ULONG * pcbUsed);
	HRESULT(STDMETHODCALLTYPE * Reset) (ITransactionReceiver * This);
	END_INTERFACE
}  ITransactionReceiverVtbl;
interface ITransactionReceiver
{
	CONST_VTBL struct ITransactionReceiverVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITransactionReceiver_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITransactionReceiver_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITransactionReceiver_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITransactionReceiver_UnmarshalPropagationToken(This,cbToken,rgbToken,ppTransaction)( (This)->lpVtbl -> UnmarshalPropagationToken(This,cbToken,rgbToken,ppTransaction) )
#define ITransactionReceiver_GetReturnTokenSize(This,pcbReturnToken)( (This)->lpVtbl -> GetReturnTokenSize(This,pcbReturnToken) )
#define ITransactionReceiver_MarshalReturnToken(This,cbReturnToken,rgbReturnToken,pcbUsed)( (This)->lpVtbl -> MarshalReturnToken(This,cbReturnToken,rgbReturnToken,pcbUsed) )
#define ITransactionReceiver_Reset(This)( (This)->lpVtbl -> Reset(This) )
#endif
#endif
#ifndef __ITransactionReceiverFactory_INTERFACE_DEFINED__
#define __ITransactionReceiverFactory_INTERFACE_DEFINED__
extern const IID IID_ITransactionReceiverFactory;
typedef struct ITransactionReceiverFactoryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITransactionReceiverFactory * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITransactionReceiverFactory * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITransactionReceiverFactory * This);
	HRESULT(STDMETHODCALLTYPE * Create) (ITransactionReceiverFactory * This, ITransactionReceiver ** ppReceiver);
	END_INTERFACE
}  ITransactionReceiverFactoryVtbl;
interface ITransactionReceiverFactory
{
	CONST_VTBL struct ITransactionReceiverFactoryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITransactionReceiverFactory_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITransactionReceiverFactory_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITransactionReceiverFactory_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITransactionReceiverFactory_Create(This,ppReceiver)( (This)->lpVtbl -> Create(This,ppReceiver) )
#endif
#endif
typedef struct _ProxyConfigParams
{
	WORD wcThreadsMax;
} PROXY_CONFIG_PARAMS;
extern RPC_IF_HANDLE __MIDL_itf_txdtc_0000_0024_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_txdtc_0000_0024_v0_0_s_ifspec;
#ifndef __IDtcLuConfigure_INTERFACE_DEFINED__
#define __IDtcLuConfigure_INTERFACE_DEFINED__
extern const IID IID_IDtcLuConfigure;
typedef struct IDtcLuConfigureVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDtcLuConfigure * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDtcLuConfigure * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDtcLuConfigure * This);
	HRESULT(STDMETHODCALLTYPE * Add) (IDtcLuConfigure * This, byte * pucLuPair, DWORD cbLuPair);
	HRESULT(STDMETHODCALLTYPE * Delete) (IDtcLuConfigure * This, byte * pucLuPair, DWORD cbLuPair);
	END_INTERFACE
}  IDtcLuConfigureVtbl;
interface IDtcLuConfigure
{
	CONST_VTBL struct IDtcLuConfigureVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDtcLuConfigure_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDtcLuConfigure_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDtcLuConfigure_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDtcLuConfigure_Add(This,pucLuPair,cbLuPair)( (This)->lpVtbl -> Add(This,pucLuPair,cbLuPair) )
#define IDtcLuConfigure_Delete(This,pucLuPair,cbLuPair)( (This)->lpVtbl -> Delete(This,pucLuPair,cbLuPair) )
#endif
#endif
#ifndef __IDtcLuRecovery_INTERFACE_DEFINED__
#define __IDtcLuRecovery_INTERFACE_DEFINED__
extern const IID IID_IDtcLuRecovery;
typedef struct IDtcLuRecoveryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDtcLuRecovery * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDtcLuRecovery * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDtcLuRecovery * This);
	END_INTERFACE
}  IDtcLuRecoveryVtbl;
interface IDtcLuRecovery
{
	CONST_VTBL struct IDtcLuRecoveryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDtcLuRecovery_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDtcLuRecovery_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDtcLuRecovery_Release(This)( (This)->lpVtbl -> Release(This) )
#endif
#endif
#ifndef __IDtcLuRecoveryFactory_INTERFACE_DEFINED__
#define __IDtcLuRecoveryFactory_INTERFACE_DEFINED__
extern const IID IID_IDtcLuRecoveryFactory;
typedef struct IDtcLuRecoveryFactoryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDtcLuRecoveryFactory * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDtcLuRecoveryFactory * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDtcLuRecoveryFactory * This);
	HRESULT(STDMETHODCALLTYPE * Create) (IDtcLuRecoveryFactory * This, byte * pucLuPair, DWORD cbLuPair, IDtcLuRecovery ** ppRecovery);
	END_INTERFACE
}  IDtcLuRecoveryFactoryVtbl;
interface IDtcLuRecoveryFactory
{
	CONST_VTBL struct IDtcLuRecoveryFactoryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDtcLuRecoveryFactory_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDtcLuRecoveryFactory_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDtcLuRecoveryFactory_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDtcLuRecoveryFactory_Create(This,pucLuPair,cbLuPair,ppRecovery)( (This)->lpVtbl -> Create(This,pucLuPair,cbLuPair,ppRecovery) )
#endif
#endif
typedef enum _DtcLu_LocalRecovery_Work
{
	DTCINITIATEDRECOVERYWORK_CHECKLUSTATUS = 1,
	DTCINITIATEDRECOVERYWORK_TRANS = (DTCINITIATEDRECOVERYWORK_CHECKLUSTATUS + 1),
	DTCINITIATEDRECOVERYWORK_TMDOWN = (DTCINITIATEDRECOVERYWORK_TRANS + 1)
} DTCINITIATEDRECOVERYWORK;
typedef enum _DtcLu_Xln
{
	DTCLUXLN_COLD = 1,
	DTCLUXLN_WARM = (DTCLUXLN_COLD + 1)
} DTCLUXLN;
typedef enum _DtcLu_Xln_Confirmation
{
	DTCLUXLNCONFIRMATION_CONFIRM = 1,
	DTCLUXLNCONFIRMATION_LOGNAMEMISMATCH = (DTCLUXLNCONFIRMATION_CONFIRM + 1),
	DTCLUXLNCONFIRMATION_COLDWARMMISMATCH = (DTCLUXLNCONFIRMATION_LOGNAMEMISMATCH + 1),
	DTCLUXLNCONFIRMATION_OBSOLETE = (DTCLUXLNCONFIRMATION_COLDWARMMISMATCH + 1)
} DTCLUXLNCONFIRMATION;
typedef enum _DtcLu_Xln_Response
{
	DTCLUXLNRESPONSE_OK_SENDOURXLNBACK = 1,
	DTCLUXLNRESPONSE_OK_SENDCONFIRMATION = (DTCLUXLNRESPONSE_OK_SENDOURXLNBACK + 1),
	DTCLUXLNRESPONSE_LOGNAMEMISMATCH = (DTCLUXLNRESPONSE_OK_SENDCONFIRMATION + 1),
	DTCLUXLNRESPONSE_COLDWARMMISMATCH = (DTCLUXLNRESPONSE_LOGNAMEMISMATCH + 1)
} DTCLUXLNRESPONSE;
typedef enum _DtcLu_Xln_Error
{
	DTCLUXLNERROR_PROTOCOL = 1,
	DTCLUXLNERROR_LOGNAMEMISMATCH = (DTCLUXLNERROR_PROTOCOL + 1),
	DTCLUXLNERROR_COLDWARMMISMATCH = (DTCLUXLNERROR_LOGNAMEMISMATCH + 1)
} DTCLUXLNERROR;
typedef enum _DtcLu_CompareState
{
	DTCLUCOMPARESTATE_COMMITTED = 1,
	DTCLUCOMPARESTATE_HEURISTICCOMMITTED = (DTCLUCOMPARESTATE_COMMITTED + 1),
	DTCLUCOMPARESTATE_HEURISTICMIXED = (DTCLUCOMPARESTATE_HEURISTICCOMMITTED + 1),
	DTCLUCOMPARESTATE_HEURISTICRESET = (DTCLUCOMPARESTATE_HEURISTICMIXED + 1),
	DTCLUCOMPARESTATE_INDOUBT = (DTCLUCOMPARESTATE_HEURISTICRESET + 1),
	DTCLUCOMPARESTATE_RESET = (DTCLUCOMPARESTATE_INDOUBT + 1)
} DTCLUCOMPARESTATE;
typedef enum _DtcLu_CompareStates_Confirmation
{
	DTCLUCOMPARESTATESCONFIRMATION_CONFIRM = 1,
	DTCLUCOMPARESTATESCONFIRMATION_PROTOCOL = (DTCLUCOMPARESTATESCONFIRMATION_CONFIRM + 1)
} DTCLUCOMPARESTATESCONFIRMATION;
typedef enum _DtcLu_CompareStates_Error
{
	DTCLUCOMPARESTATESERROR_PROTOCOL = 1
} DTCLUCOMPARESTATESERROR;
typedef enum _DtcLu_CompareStates_Response
{
	DTCLUCOMPARESTATESRESPONSE_OK = 1,
	DTCLUCOMPARESTATESRESPONSE_PROTOCOL = (DTCLUCOMPARESTATESRESPONSE_OK + 1)
} DTCLUCOMPARESTATESRESPONSE;
extern RPC_IF_HANDLE __MIDL_itf_txdtc_0000_0027_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_txdtc_0000_0027_v0_0_s_ifspec;
#ifndef __IDtcLuRecoveryInitiatedByDtcTransWork_INTERFACE_DEFINED__
#define __IDtcLuRecoveryInitiatedByDtcTransWork_INTERFACE_DEFINED__
extern const IID IID_IDtcLuRecoveryInitiatedByDtcTransWork;
typedef struct IDtcLuRecoveryInitiatedByDtcTransWorkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDtcLuRecoveryInitiatedByDtcTransWork * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDtcLuRecoveryInitiatedByDtcTransWork * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDtcLuRecoveryInitiatedByDtcTransWork * This);
	HRESULT(STDMETHODCALLTYPE * GetLogNameSizes) (IDtcLuRecoveryInitiatedByDtcTransWork * This, DWORD * pcbOurLogName, DWORD * pcbRemoteLogName);
	HRESULT(STDMETHODCALLTYPE * GetOurXln) (IDtcLuRecoveryInitiatedByDtcTransWork * This, DTCLUXLN * pXln, unsigned char *pOurLogName, unsigned char *pRemoteLogName, DWORD * pdwProtocol);
	HRESULT(STDMETHODCALLTYPE * HandleConfirmationFromOurXln) (IDtcLuRecoveryInitiatedByDtcTransWork * This, DTCLUXLNCONFIRMATION Confirmation);
	HRESULT(STDMETHODCALLTYPE * HandleTheirXlnResponse) (IDtcLuRecoveryInitiatedByDtcTransWork * This, DTCLUXLN Xln, unsigned char *pRemoteLogName, DWORD cbRemoteLogName, DWORD dwProtocol, DTCLUXLNCONFIRMATION * pConfirmation);
	HRESULT(STDMETHODCALLTYPE * HandleErrorFromOurXln) (IDtcLuRecoveryInitiatedByDtcTransWork * This, DTCLUXLNERROR Error);
	HRESULT(STDMETHODCALLTYPE * CheckForCompareStates) (IDtcLuRecoveryInitiatedByDtcTransWork * This, BOOL * fCompareStates);
	HRESULT(STDMETHODCALLTYPE * GetOurTransIdSize) (IDtcLuRecoveryInitiatedByDtcTransWork * This, DWORD * pcbOurTransId);
	HRESULT(STDMETHODCALLTYPE * GetOurCompareStates) (IDtcLuRecoveryInitiatedByDtcTransWork * This, unsigned char *pOurTransId, DTCLUCOMPARESTATE * pCompareState);
	HRESULT(STDMETHODCALLTYPE * HandleTheirCompareStatesResponse) (IDtcLuRecoveryInitiatedByDtcTransWork * This, DTCLUCOMPARESTATE CompareState, DTCLUCOMPARESTATESCONFIRMATION * pConfirmation);
	HRESULT(STDMETHODCALLTYPE * HandleErrorFromOurCompareStates) (IDtcLuRecoveryInitiatedByDtcTransWork * This, DTCLUCOMPARESTATESERROR Error);
	HRESULT(STDMETHODCALLTYPE * ConversationLost) (IDtcLuRecoveryInitiatedByDtcTransWork * This);
	HRESULT(STDMETHODCALLTYPE * GetRecoverySeqNum) (IDtcLuRecoveryInitiatedByDtcTransWork * This, LONG * plRecoverySeqNum);
	HRESULT(STDMETHODCALLTYPE * ObsoleteRecoverySeqNum) (IDtcLuRecoveryInitiatedByDtcTransWork * This, LONG lNewRecoverySeqNum);
	END_INTERFACE
}  IDtcLuRecoveryInitiatedByDtcTransWorkVtbl;
interface IDtcLuRecoveryInitiatedByDtcTransWork
{
	CONST_VTBL struct IDtcLuRecoveryInitiatedByDtcTransWorkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDtcLuRecoveryInitiatedByDtcTransWork_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDtcLuRecoveryInitiatedByDtcTransWork_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDtcLuRecoveryInitiatedByDtcTransWork_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDtcLuRecoveryInitiatedByDtcTransWork_GetLogNameSizes(This,pcbOurLogName,pcbRemoteLogName)( (This)->lpVtbl -> GetLogNameSizes(This,pcbOurLogName,pcbRemoteLogName) )
#define IDtcLuRecoveryInitiatedByDtcTransWork_GetOurXln(This,pXln,pOurLogName,pRemoteLogName,pdwProtocol)( (This)->lpVtbl -> GetOurXln(This,pXln,pOurLogName,pRemoteLogName,pdwProtocol) )
#define IDtcLuRecoveryInitiatedByDtcTransWork_HandleConfirmationFromOurXln(This,Confirmation)( (This)->lpVtbl -> HandleConfirmationFromOurXln(This,Confirmation) )
#define IDtcLuRecoveryInitiatedByDtcTransWork_HandleTheirXlnResponse(This,Xln,pRemoteLogName,cbRemoteLogName,dwProtocol,pConfirmation)( (This)->lpVtbl -> HandleTheirXlnResponse(This,Xln,pRemoteLogName,cbRemoteLogName,dwProtocol,pConfirmation) )
#define IDtcLuRecoveryInitiatedByDtcTransWork_HandleErrorFromOurXln(This,Error)( (This)->lpVtbl -> HandleErrorFromOurXln(This,Error) )
#define IDtcLuRecoveryInitiatedByDtcTransWork_CheckForCompareStates(This,fCompareStates)( (This)->lpVtbl -> CheckForCompareStates(This,fCompareStates) )
#define IDtcLuRecoveryInitiatedByDtcTransWork_GetOurTransIdSize(This,pcbOurTransId)( (This)->lpVtbl -> GetOurTransIdSize(This,pcbOurTransId) )
#define IDtcLuRecoveryInitiatedByDtcTransWork_GetOurCompareStates(This,pOurTransId,pCompareState)( (This)->lpVtbl -> GetOurCompareStates(This,pOurTransId,pCompareState) )
#define IDtcLuRecoveryInitiatedByDtcTransWork_HandleTheirCompareStatesResponse(This,CompareState,pConfirmation)( (This)->lpVtbl -> HandleTheirCompareStatesResponse(This,CompareState,pConfirmation) )
#define IDtcLuRecoveryInitiatedByDtcTransWork_HandleErrorFromOurCompareStates(This,Error)( (This)->lpVtbl -> HandleErrorFromOurCompareStates(This,Error) )
#define IDtcLuRecoveryInitiatedByDtcTransWork_ConversationLost(This)( (This)->lpVtbl -> ConversationLost(This) )
#define IDtcLuRecoveryInitiatedByDtcTransWork_GetRecoverySeqNum(This,plRecoverySeqNum)( (This)->lpVtbl -> GetRecoverySeqNum(This,plRecoverySeqNum) )
#define IDtcLuRecoveryInitiatedByDtcTransWork_ObsoleteRecoverySeqNum(This,lNewRecoverySeqNum)( (This)->lpVtbl -> ObsoleteRecoverySeqNum(This,lNewRecoverySeqNum) )
#endif
#endif
#ifndef __IDtcLuRecoveryInitiatedByDtcStatusWork_INTERFACE_DEFINED__
#define __IDtcLuRecoveryInitiatedByDtcStatusWork_INTERFACE_DEFINED__
extern const IID IID_IDtcLuRecoveryInitiatedByDtcStatusWork;
typedef struct IDtcLuRecoveryInitiatedByDtcStatusWorkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDtcLuRecoveryInitiatedByDtcStatusWork * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDtcLuRecoveryInitiatedByDtcStatusWork * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDtcLuRecoveryInitiatedByDtcStatusWork * This);
	HRESULT(STDMETHODCALLTYPE * HandleCheckLuStatus) (IDtcLuRecoveryInitiatedByDtcStatusWork * This, LONG lRecoverySeqNum);
	END_INTERFACE
}  IDtcLuRecoveryInitiatedByDtcStatusWorkVtbl;
interface IDtcLuRecoveryInitiatedByDtcStatusWork
{
	CONST_VTBL struct IDtcLuRecoveryInitiatedByDtcStatusWorkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDtcLuRecoveryInitiatedByDtcStatusWork_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDtcLuRecoveryInitiatedByDtcStatusWork_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDtcLuRecoveryInitiatedByDtcStatusWork_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDtcLuRecoveryInitiatedByDtcStatusWork_HandleCheckLuStatus(This,lRecoverySeqNum)( (This)->lpVtbl -> HandleCheckLuStatus(This,lRecoverySeqNum) )
#endif
#endif
#ifndef __IDtcLuRecoveryInitiatedByDtc_INTERFACE_DEFINED__
#define __IDtcLuRecoveryInitiatedByDtc_INTERFACE_DEFINED__
extern const IID IID_IDtcLuRecoveryInitiatedByDtc;
typedef struct IDtcLuRecoveryInitiatedByDtcVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDtcLuRecoveryInitiatedByDtc * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDtcLuRecoveryInitiatedByDtc * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDtcLuRecoveryInitiatedByDtc * This);
	HRESULT(STDMETHODCALLTYPE * GetWork) (IDtcLuRecoveryInitiatedByDtc * This, DTCINITIATEDRECOVERYWORK * pWork, void **ppv);
	END_INTERFACE
}  IDtcLuRecoveryInitiatedByDtcVtbl;
interface IDtcLuRecoveryInitiatedByDtc
{
	CONST_VTBL struct IDtcLuRecoveryInitiatedByDtcVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDtcLuRecoveryInitiatedByDtc_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDtcLuRecoveryInitiatedByDtc_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDtcLuRecoveryInitiatedByDtc_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDtcLuRecoveryInitiatedByDtc_GetWork(This,pWork,ppv)( (This)->lpVtbl -> GetWork(This,pWork,ppv) )
#endif
#endif
#ifndef __IDtcLuRecoveryInitiatedByLuWork_INTERFACE_DEFINED__
#define __IDtcLuRecoveryInitiatedByLuWork_INTERFACE_DEFINED__
extern const IID IID_IDtcLuRecoveryInitiatedByLuWork;
typedef struct IDtcLuRecoveryInitiatedByLuWorkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDtcLuRecoveryInitiatedByLuWork * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDtcLuRecoveryInitiatedByLuWork * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDtcLuRecoveryInitiatedByLuWork * This);
	HRESULT(STDMETHODCALLTYPE * HandleTheirXln) (IDtcLuRecoveryInitiatedByLuWork * This, LONG lRecoverySeqNum, DTCLUXLN Xln, unsigned char *pRemoteLogName, DWORD cbRemoteLogName, unsigned char *pOurLogName, DWORD cbOurLogName, DWORD dwProtocol, DTCLUXLNRESPONSE * pResponse);
	HRESULT(STDMETHODCALLTYPE * GetOurLogNameSize) (IDtcLuRecoveryInitiatedByLuWork * This, DWORD * pcbOurLogName);
	HRESULT(STDMETHODCALLTYPE * GetOurXln) (IDtcLuRecoveryInitiatedByLuWork * This, DTCLUXLN * pXln, unsigned char *pOurLogName, DWORD * pdwProtocol);
	HRESULT(STDMETHODCALLTYPE * HandleConfirmationOfOurXln) (IDtcLuRecoveryInitiatedByLuWork * This, DTCLUXLNCONFIRMATION Confirmation);
	HRESULT(STDMETHODCALLTYPE * HandleTheirCompareStates) (IDtcLuRecoveryInitiatedByLuWork * This, unsigned char *pRemoteTransId, DWORD cbRemoteTransId, DTCLUCOMPARESTATE CompareState, DTCLUCOMPARESTATESRESPONSE * pResponse, DTCLUCOMPARESTATE * pCompareState);
	HRESULT(STDMETHODCALLTYPE * HandleConfirmationOfOurCompareStates) (IDtcLuRecoveryInitiatedByLuWork * This, DTCLUCOMPARESTATESCONFIRMATION Confirmation);
	HRESULT(STDMETHODCALLTYPE * HandleErrorFromOurCompareStates) (IDtcLuRecoveryInitiatedByLuWork * This, DTCLUCOMPARESTATESERROR Error);
	HRESULT(STDMETHODCALLTYPE * ConversationLost) (IDtcLuRecoveryInitiatedByLuWork * This);
	END_INTERFACE
}  IDtcLuRecoveryInitiatedByLuWorkVtbl;
interface IDtcLuRecoveryInitiatedByLuWork
{
	CONST_VTBL struct IDtcLuRecoveryInitiatedByLuWorkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDtcLuRecoveryInitiatedByLuWork_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDtcLuRecoveryInitiatedByLuWork_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDtcLuRecoveryInitiatedByLuWork_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDtcLuRecoveryInitiatedByLuWork_HandleTheirXln(This,lRecoverySeqNum,Xln,pRemoteLogName,cbRemoteLogName,pOurLogName,cbOurLogName,dwProtocol,pResponse)( (This)->lpVtbl -> HandleTheirXln(This,lRecoverySeqNum,Xln,pRemoteLogName,cbRemoteLogName,pOurLogName,cbOurLogName,dwProtocol,pResponse) )
#define IDtcLuRecoveryInitiatedByLuWork_GetOurLogNameSize(This,pcbOurLogName)( (This)->lpVtbl -> GetOurLogNameSize(This,pcbOurLogName) )
#define IDtcLuRecoveryInitiatedByLuWork_GetOurXln(This,pXln,pOurLogName,pdwProtocol)( (This)->lpVtbl -> GetOurXln(This,pXln,pOurLogName,pdwProtocol) )
#define IDtcLuRecoveryInitiatedByLuWork_HandleConfirmationOfOurXln(This,Confirmation)( (This)->lpVtbl -> HandleConfirmationOfOurXln(This,Confirmation) )
#define IDtcLuRecoveryInitiatedByLuWork_HandleTheirCompareStates(This,pRemoteTransId,cbRemoteTransId,CompareState,pResponse,pCompareState)( (This)->lpVtbl -> HandleTheirCompareStates(This,pRemoteTransId,cbRemoteTransId,CompareState,pResponse,pCompareState) )
#define IDtcLuRecoveryInitiatedByLuWork_HandleConfirmationOfOurCompareStates(This,Confirmation)( (This)->lpVtbl -> HandleConfirmationOfOurCompareStates(This,Confirmation) )
#define IDtcLuRecoveryInitiatedByLuWork_HandleErrorFromOurCompareStates(This,Error)( (This)->lpVtbl -> HandleErrorFromOurCompareStates(This,Error) )
#define IDtcLuRecoveryInitiatedByLuWork_ConversationLost(This)( (This)->lpVtbl -> ConversationLost(This) )
#endif
#endif
#ifndef __IDtcLuRecoveryInitiatedByLu_INTERFACE_DEFINED__
#define __IDtcLuRecoveryInitiatedByLu_INTERFACE_DEFINED__
extern const IID IID_IDtcLuRecoveryInitiatedByLu;
typedef struct IDtcLuRecoveryInitiatedByLuVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDtcLuRecoveryInitiatedByLu * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDtcLuRecoveryInitiatedByLu * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDtcLuRecoveryInitiatedByLu * This);
	HRESULT(STDMETHODCALLTYPE * GetObjectToHandleWorkFromLu) (IDtcLuRecoveryInitiatedByLu * This, IDtcLuRecoveryInitiatedByLuWork ** ppWork);
	END_INTERFACE
}  IDtcLuRecoveryInitiatedByLuVtbl;
interface IDtcLuRecoveryInitiatedByLu
{
	CONST_VTBL struct IDtcLuRecoveryInitiatedByLuVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDtcLuRecoveryInitiatedByLu_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDtcLuRecoveryInitiatedByLu_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDtcLuRecoveryInitiatedByLu_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDtcLuRecoveryInitiatedByLu_GetObjectToHandleWorkFromLu(This,ppWork)( (This)->lpVtbl -> GetObjectToHandleWorkFromLu(This,ppWork) )
#endif
#endif
#ifndef __IDtcLuRmEnlistment_INTERFACE_DEFINED__
#define __IDtcLuRmEnlistment_INTERFACE_DEFINED__
extern const IID IID_IDtcLuRmEnlistment;
typedef struct IDtcLuRmEnlistmentVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDtcLuRmEnlistment * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDtcLuRmEnlistment * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDtcLuRmEnlistment * This);
	HRESULT(STDMETHODCALLTYPE * Unplug) (IDtcLuRmEnlistment * This, BOOL fConversationLost);
	HRESULT(STDMETHODCALLTYPE * BackedOut) (IDtcLuRmEnlistment * This);
	HRESULT(STDMETHODCALLTYPE * BackOut) (IDtcLuRmEnlistment * This);
	HRESULT(STDMETHODCALLTYPE * Committed) (IDtcLuRmEnlistment * This);
	HRESULT(STDMETHODCALLTYPE * Forget) (IDtcLuRmEnlistment * This);
	HRESULT(STDMETHODCALLTYPE * RequestCommit) (IDtcLuRmEnlistment * This);
	END_INTERFACE
}  IDtcLuRmEnlistmentVtbl;
interface IDtcLuRmEnlistment
{
	CONST_VTBL struct IDtcLuRmEnlistmentVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDtcLuRmEnlistment_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDtcLuRmEnlistment_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDtcLuRmEnlistment_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDtcLuRmEnlistment_Unplug(This,fConversationLost)( (This)->lpVtbl -> Unplug(This,fConversationLost) )
#define IDtcLuRmEnlistment_BackedOut(This)( (This)->lpVtbl -> BackedOut(This) )
#define IDtcLuRmEnlistment_BackOut(This)( (This)->lpVtbl -> BackOut(This) )
#define IDtcLuRmEnlistment_Committed(This)( (This)->lpVtbl -> Committed(This) )
#define IDtcLuRmEnlistment_Forget(This)( (This)->lpVtbl -> Forget(This) )
#define IDtcLuRmEnlistment_RequestCommit(This)( (This)->lpVtbl -> RequestCommit(This) )
#endif
#endif
#ifndef __IDtcLuRmEnlistmentSink_INTERFACE_DEFINED__
#define __IDtcLuRmEnlistmentSink_INTERFACE_DEFINED__
extern const IID IID_IDtcLuRmEnlistmentSink;
typedef struct IDtcLuRmEnlistmentSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDtcLuRmEnlistmentSink * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDtcLuRmEnlistmentSink * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDtcLuRmEnlistmentSink * This);
	HRESULT(STDMETHODCALLTYPE * AckUnplug) (IDtcLuRmEnlistmentSink * This);
	HRESULT(STDMETHODCALLTYPE * TmDown) (IDtcLuRmEnlistmentSink * This);
	HRESULT(STDMETHODCALLTYPE * SessionLost) (IDtcLuRmEnlistmentSink * This);
	HRESULT(STDMETHODCALLTYPE * BackedOut) (IDtcLuRmEnlistmentSink * This);
	HRESULT(STDMETHODCALLTYPE * BackOut) (IDtcLuRmEnlistmentSink * This);
	HRESULT(STDMETHODCALLTYPE * Committed) (IDtcLuRmEnlistmentSink * This);
	HRESULT(STDMETHODCALLTYPE * Forget) (IDtcLuRmEnlistmentSink * This);
	HRESULT(STDMETHODCALLTYPE * Prepare) (IDtcLuRmEnlistmentSink * This);
	HRESULT(STDMETHODCALLTYPE * RequestCommit) (IDtcLuRmEnlistmentSink * This);
	END_INTERFACE
}  IDtcLuRmEnlistmentSinkVtbl;
interface IDtcLuRmEnlistmentSink
{
	CONST_VTBL struct IDtcLuRmEnlistmentSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDtcLuRmEnlistmentSink_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDtcLuRmEnlistmentSink_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDtcLuRmEnlistmentSink_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDtcLuRmEnlistmentSink_AckUnplug(This)( (This)->lpVtbl -> AckUnplug(This) )
#define IDtcLuRmEnlistmentSink_TmDown(This)( (This)->lpVtbl -> TmDown(This) )
#define IDtcLuRmEnlistmentSink_SessionLost(This)( (This)->lpVtbl -> SessionLost(This) )
#define IDtcLuRmEnlistmentSink_BackedOut(This)( (This)->lpVtbl -> BackedOut(This) )
#define IDtcLuRmEnlistmentSink_BackOut(This)( (This)->lpVtbl -> BackOut(This) )
#define IDtcLuRmEnlistmentSink_Committed(This)( (This)->lpVtbl -> Committed(This) )
#define IDtcLuRmEnlistmentSink_Forget(This)( (This)->lpVtbl -> Forget(This) )
#define IDtcLuRmEnlistmentSink_Prepare(This)( (This)->lpVtbl -> Prepare(This) )
#define IDtcLuRmEnlistmentSink_RequestCommit(This)( (This)->lpVtbl -> RequestCommit(This) )
#endif
#endif
#ifndef __IDtcLuRmEnlistmentFactory_INTERFACE_DEFINED__
#define __IDtcLuRmEnlistmentFactory_INTERFACE_DEFINED__
extern const IID IID_IDtcLuRmEnlistmentFactory;
typedef struct IDtcLuRmEnlistmentFactoryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDtcLuRmEnlistmentFactory * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDtcLuRmEnlistmentFactory * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDtcLuRmEnlistmentFactory * This);
	HRESULT(STDMETHODCALLTYPE * Create) (IDtcLuRmEnlistmentFactory * This, unsigned char *pucLuPair, DWORD cbLuPair, ITransaction * pITransaction, unsigned char *pTransId, DWORD cbTransId, IDtcLuRmEnlistmentSink * pRmEnlistmentSink, IDtcLuRmEnlistment ** ppRmEnlistment);
	END_INTERFACE
}  IDtcLuRmEnlistmentFactoryVtbl;
interface IDtcLuRmEnlistmentFactory
{
	CONST_VTBL struct IDtcLuRmEnlistmentFactoryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDtcLuRmEnlistmentFactory_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDtcLuRmEnlistmentFactory_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDtcLuRmEnlistmentFactory_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDtcLuRmEnlistmentFactory_Create(This,pucLuPair,cbLuPair,pITransaction,pTransId,cbTransId,pRmEnlistmentSink,ppRmEnlistment)( (This)->lpVtbl -> Create(This,pucLuPair,cbLuPair,pITransaction,pTransId,cbTransId,pRmEnlistmentSink,ppRmEnlistment) )
#endif
#endif
#ifndef __IDtcLuSubordinateDtc_INTERFACE_DEFINED__
#define __IDtcLuSubordinateDtc_INTERFACE_DEFINED__
extern const IID IID_IDtcLuSubordinateDtc;
typedef struct IDtcLuSubordinateDtcVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDtcLuSubordinateDtc * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDtcLuSubordinateDtc * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDtcLuSubordinateDtc * This);
	HRESULT(STDMETHODCALLTYPE * Unplug) (IDtcLuSubordinateDtc * This, BOOL fConversationLost);
	HRESULT(STDMETHODCALLTYPE * BackedOut) (IDtcLuSubordinateDtc * This);
	HRESULT(STDMETHODCALLTYPE * BackOut) (IDtcLuSubordinateDtc * This);
	HRESULT(STDMETHODCALLTYPE * Committed) (IDtcLuSubordinateDtc * This);
	HRESULT(STDMETHODCALLTYPE * Forget) (IDtcLuSubordinateDtc * This);
	HRESULT(STDMETHODCALLTYPE * Prepare) (IDtcLuSubordinateDtc * This);
	HRESULT(STDMETHODCALLTYPE * RequestCommit) (IDtcLuSubordinateDtc * This);
	END_INTERFACE
}  IDtcLuSubordinateDtcVtbl;
interface IDtcLuSubordinateDtc
{
	CONST_VTBL struct IDtcLuSubordinateDtcVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDtcLuSubordinateDtc_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDtcLuSubordinateDtc_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDtcLuSubordinateDtc_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDtcLuSubordinateDtc_Unplug(This,fConversationLost)( (This)->lpVtbl -> Unplug(This,fConversationLost) )
#define IDtcLuSubordinateDtc_BackedOut(This)( (This)->lpVtbl -> BackedOut(This) )
#define IDtcLuSubordinateDtc_BackOut(This)( (This)->lpVtbl -> BackOut(This) )
#define IDtcLuSubordinateDtc_Committed(This)( (This)->lpVtbl -> Committed(This) )
#define IDtcLuSubordinateDtc_Forget(This)( (This)->lpVtbl -> Forget(This) )
#define IDtcLuSubordinateDtc_Prepare(This)( (This)->lpVtbl -> Prepare(This) )
#define IDtcLuSubordinateDtc_RequestCommit(This)( (This)->lpVtbl -> RequestCommit(This) )
#endif
#endif
#ifndef __IDtcLuSubordinateDtcSink_INTERFACE_DEFINED__
#define __IDtcLuSubordinateDtcSink_INTERFACE_DEFINED__
extern const IID IID_IDtcLuSubordinateDtcSink;
typedef struct IDtcLuSubordinateDtcSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDtcLuSubordinateDtcSink * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDtcLuSubordinateDtcSink * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDtcLuSubordinateDtcSink * This);
	HRESULT(STDMETHODCALLTYPE * AckUnplug) (IDtcLuSubordinateDtcSink * This);
	HRESULT(STDMETHODCALLTYPE * TmDown) (IDtcLuSubordinateDtcSink * This);
	HRESULT(STDMETHODCALLTYPE * SessionLost) (IDtcLuSubordinateDtcSink * This);
	HRESULT(STDMETHODCALLTYPE * BackedOut) (IDtcLuSubordinateDtcSink * This);
	HRESULT(STDMETHODCALLTYPE * BackOut) (IDtcLuSubordinateDtcSink * This);
	HRESULT(STDMETHODCALLTYPE * Committed) (IDtcLuSubordinateDtcSink * This);
	HRESULT(STDMETHODCALLTYPE * Forget) (IDtcLuSubordinateDtcSink * This);
	HRESULT(STDMETHODCALLTYPE * RequestCommit) (IDtcLuSubordinateDtcSink * This);
	END_INTERFACE
}  IDtcLuSubordinateDtcSinkVtbl;
interface IDtcLuSubordinateDtcSink
{
	CONST_VTBL struct IDtcLuSubordinateDtcSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDtcLuSubordinateDtcSink_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDtcLuSubordinateDtcSink_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDtcLuSubordinateDtcSink_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDtcLuSubordinateDtcSink_AckUnplug(This)( (This)->lpVtbl -> AckUnplug(This) )
#define IDtcLuSubordinateDtcSink_TmDown(This)( (This)->lpVtbl -> TmDown(This) )
#define IDtcLuSubordinateDtcSink_SessionLost(This)( (This)->lpVtbl -> SessionLost(This) )
#define IDtcLuSubordinateDtcSink_BackedOut(This)( (This)->lpVtbl -> BackedOut(This) )
#define IDtcLuSubordinateDtcSink_BackOut(This)( (This)->lpVtbl -> BackOut(This) )
#define IDtcLuSubordinateDtcSink_Committed(This)( (This)->lpVtbl -> Committed(This) )
#define IDtcLuSubordinateDtcSink_Forget(This)( (This)->lpVtbl -> Forget(This) )
#define IDtcLuSubordinateDtcSink_RequestCommit(This)( (This)->lpVtbl -> RequestCommit(This) )
#endif
#endif
#ifndef __IDtcLuSubordinateDtcFactory_INTERFACE_DEFINED__
#define __IDtcLuSubordinateDtcFactory_INTERFACE_DEFINED__
extern const IID IID_IDtcLuSubordinateDtcFactory;
typedef struct IDtcLuSubordinateDtcFactoryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDtcLuSubordinateDtcFactory * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDtcLuSubordinateDtcFactory * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDtcLuSubordinateDtcFactory * This);
	HRESULT(STDMETHODCALLTYPE * Create) (IDtcLuSubordinateDtcFactory * This, unsigned char *pucLuPair, DWORD cbLuPair, IUnknown * punkTransactionOuter, ISOLEVEL isoLevel, ULONG isoFlags, ITransactionOptions * pOptions, ITransaction ** ppTransaction, unsigned char *pTransId, DWORD cbTransId, IDtcLuSubordinateDtcSink * pSubordinateDtcSink, IDtcLuSubordinateDtc ** ppSubordinateDtc);
	END_INTERFACE
}  IDtcLuSubordinateDtcFactoryVtbl;
interface IDtcLuSubordinateDtcFactory
{
	CONST_VTBL struct IDtcLuSubordinateDtcFactoryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDtcLuSubordinateDtcFactory_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDtcLuSubordinateDtcFactory_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDtcLuSubordinateDtcFactory_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDtcLuSubordinateDtcFactory_Create(This,pucLuPair,cbLuPair,punkTransactionOuter,isoLevel,isoFlags,pOptions,ppTransaction,pTransId,cbTransId,pSubordinateDtcSink,ppSubordinateDtc)( (This)->lpVtbl -> Create(This,pucLuPair,cbLuPair,punkTransactionOuter,isoLevel,isoFlags,pOptions,ppTransaction,pTransId,cbTransId,pSubordinateDtcSink,ppSubordinateDtc) )
#endif
#endif
DEFINE_GUID(IID_IXATransLookup, 0xF3B1F131, 0xEEDA, 0x11ce, 0xAE, 0xD4, 0x00, 0xAA, 0x00, 0x51, 0xE2, 0xC4);
DEFINE_GUID(IID_IXATransLookup2, 0xbf193c85, 0xd1a, 0x4290, 0xb8, 0x8f, 0xd2, 0xcb, 0x88, 0x73, 0xd1, 0xe7);
DEFINE_GUID(IID_IResourceManagerSink, 0x0D563181, 0xDEFB, 0x11ce, 0xAE, 0xD1, 0x00, 0xAA, 0x00, 0x51, 0xE2, 0xC4);
DEFINE_GUID(IID_IResourceManager, 0x3741d21, 0x87eb, 0x11ce, 0x80, 0x81, 0x00, 0x80, 0xc7, 0x58, 0x52, 0x7e);
DEFINE_GUID(IID_IResourceManager2, 0xd136c69a, 0xf749, 0x11d1, 0x8f, 0x47, 0x0, 0xc0, 0x4f, 0x8e, 0xe5, 0x7d);
DEFINE_GUID(IID_ILastResourceManager, 0x4d964ad4, 0x5b33, 0x11d3, 0x8a, 0x91, 0x00, 0xc0, 0x4f, 0x79, 0xeb, 0x6d);
DEFINE_GUID(IID_IXAConfig, 0xC8A6E3A1, 0x9A8C, 0x11cf, 0xA3, 0x08, 0x00, 0xA0, 0xC9, 0x05, 0x41, 0x6E);
DEFINE_GUID(IID_IRMHelper, 0xE793F6D1, 0xF53D, 0x11cf, 0xA6, 0x0D, 0x00, 0xA0, 0xC9, 0x05, 0x41, 0x6E);
DEFINE_GUID(IID_IXAObtainRMInfo, 0xE793F6D2, 0xF53D, 0x11cf, 0xA6, 0x0D, 0x00, 0xA0, 0xC9, 0x05, 0x41, 0x6E);
DEFINE_GUID(IID_IXAResourceManager, 0x4131E751, 0x1AEA, 0x11d0, 0x94, 0x4B, 0x00, 0xA0, 0xC9, 0x05, 0x41, 0x6E);
DEFINE_GUID(IID_IXAResourceManagerFactory, 0x4131E750, 0x1AEA, 0x11d0, 0x94, 0x4B, 0x00, 0xA0, 0xC9, 0x05, 0x41, 0x6E);
DEFINE_GUID(IID_IXATransaction, 0x4131E752, 0x1AEA, 0x11d0, 0x94, 0x4B, 0x00, 0xA0, 0xC9, 0x05, 0x41, 0x6E);
DEFINE_GUID(IID_IResourceManagerFactory, 0x13741d20, 0x87eb, 0x11ce, 0x80, 0x81, 0x00, 0x80, 0xc7, 0x58, 0x52, 0x7e);
DEFINE_GUID(IID_IResourceManagerFactory2, 0x6b369c21, 0xfbd2, 0x11d1, 0x8f, 0x47, 0x0, 0xc0, 0x4f, 0x8e, 0xe5, 0x7d);
DEFINE_GUID(IID_IPrepareInfo, 0x80c7bfd0, 0x87ee, 0x11ce, 0x80, 0x81, 0x00, 0x80, 0xc7, 0x58, 0x52, 0x7e);
DEFINE_GUID(IID_IPrepareInfo2, 0x5FAB2547, 0x9779, 0x11d1, 0xB8, 0x86, 0x00, 0xC0, 0x4F, 0xB9, 0x61, 0x8A);
DEFINE_GUID(IID_IGetDispenser, 0xc23cc370, 0x87ef, 0x11ce, 0x80, 0x81, 0x00, 0x80, 0xc7, 0x58, 0x52, 0x7e);
DEFINE_GUID(IID_ITransactionVoterNotifyAsync2, 0x5433376b, 0x414d, 0x11d3, 0xb2, 0x6, 0x0, 0xc0, 0x4f, 0xc2, 0xf3, 0xef);
DEFINE_GUID(IID_ITransactionVoterBallotAsync2, 0x5433376c, 0x414d, 0x11d3, 0xb2, 0x6, 0x0, 0xc0, 0x4f, 0xc2, 0xf3, 0xef);
DEFINE_GUID(IID_ITransactionVoterFactory2, 0x5433376a, 0x414d, 0x11d3, 0xb2, 0x6, 0x0, 0xc0, 0x4f, 0xc2, 0xf3, 0xef);
DEFINE_GUID(IID_ITransactionPhase0EnlistmentAsync, 0x82DC88E1, 0xA954, 0x11d1, 0x8F, 0x88, 0x00, 0x60, 0x08, 0x95, 0xE7, 0xD5);
DEFINE_GUID(IID_ITransactionPhase0NotifyAsync, 0xEF081809, 0x0C76, 0x11d2, 0x87, 0xA6, 0x00, 0xC0, 0x4F, 0x99, 0x0F, 0x34);
DEFINE_GUID(IID_ITransactionPhase0Factory, 0x82DC88E0, 0xA954, 0x11d1, 0x8F, 0x88, 0x00, 0x60, 0x08, 0x95, 0xE7, 0xD5);
DEFINE_GUID(IID_ITransactionTransmitter, 0x59313E01, 0xB36C, 0x11cf, 0xA5, 0x39, 0x00, 0xAA, 0x00, 0x68, 0x87, 0xC3);
DEFINE_GUID(IID_ITransactionTransmitterFactory, 0x59313E00, 0xB36C, 0x11cf, 0xA5, 0x39, 0x00, 0xAA, 0x00, 0x68, 0x87, 0xC3);
DEFINE_GUID(IID_ITransactionReceiver, 0x59313E03, 0xB36C, 0x11cf, 0xA5, 0x39, 0x00, 0xAA, 0x00, 0x68, 0x87, 0xC3);
DEFINE_GUID(IID_ITransactionReceiverFactory, 0x59313E02, 0xB36C, 0x11cf, 0xA5, 0x39, 0x00, 0xAA, 0x00, 0x68, 0x87, 0xC3);
DEFINE_GUID(IID_IDtcLuConfigure, 0x4131E760, 0x1AEA, 0x11d0, 0x94, 0x4B, 0x00, 0xA0, 0xC9, 0x05, 0x41, 0x6E);
DEFINE_GUID(IID_IDtcLuRecovery, 0xac2b8ad2, 0xd6f0, 0x11d0, 0xb3, 0x86, 0x0, 0xa0, 0xc9, 0x8, 0x33, 0x65);
DEFINE_GUID(IID_IDtcLuRecoveryFactory, 0x4131E762, 0x1AEA, 0x11d0, 0x94, 0x4B, 0x00, 0xA0, 0xC9, 0x05, 0x41, 0x6E);
DEFINE_GUID(IID_IDtcLuRecoveryInitiatedByDtcTransWork, 0x4131E765, 0x1AEA, 0x11d0, 0x94, 0x4B, 0x00, 0xA0, 0xC9, 0x05, 0x41, 0x6E);
DEFINE_GUID(IID_IDtcLuRecoveryInitiatedByDtcStatusWork, 0x4131E766, 0x1AEA, 0x11d0, 0x94, 0x4B, 0x00, 0xA0, 0xC9, 0x05, 0x41, 0x6E);
DEFINE_GUID(IID_IDtcLuRecoveryInitiatedByDtc, 0x4131E764, 0x1AEA, 0x11d0, 0x94, 0x4B, 0x00, 0xA0, 0xC9, 0x05, 0x41, 0x6E);
DEFINE_GUID(IID_IDtcLuRecoveryInitiatedByLuWork, 0xac2b8ad1, 0xd6f0, 0x11d0, 0xb3, 0x86, 0x0, 0xa0, 0xc9, 0x8, 0x33, 0x65);
DEFINE_GUID(IID_IDtcLuRecoveryInitiatedByLu, 0x4131E768, 0x1AEA, 0x11d0, 0x94, 0x4B, 0x00, 0xA0, 0xC9, 0x05, 0x41, 0x6E);
DEFINE_GUID(IID_IDtcLuRmEnlistment, 0x4131E769, 0x1AEA, 0x11d0, 0x94, 0x4B, 0x00, 0xA0, 0xC9, 0x05, 0x41, 0x6E);
DEFINE_GUID(IID_IDtcLuRmEnlistmentSink, 0x4131E770, 0x1AEA, 0x11d0, 0x94, 0x4B, 0x00, 0xA0, 0xC9, 0x05, 0x41, 0x6E);
DEFINE_GUID(IID_IDtcLuRmEnlistmentFactory, 0x4131E771, 0x1AEA, 0x11d0, 0x94, 0x4B, 0x00, 0xA0, 0xC9, 0x05, 0x41, 0x6E);
DEFINE_GUID(IID_IDtcLuSubordinateDtc, 0x4131E773, 0x1AEA, 0x11d0, 0x94, 0x4B, 0x00, 0xA0, 0xC9, 0x05, 0x41, 0x6E);
DEFINE_GUID(IID_IDtcLuSubordinateDtcSink, 0x4131E774, 0x1AEA, 0x11d0, 0x94, 0x4B, 0x00, 0xA0, 0xC9, 0x05, 0x41, 0x6E);
DEFINE_GUID(IID_IDtcLuSubordinateDtcFactory, 0x4131E775, 0x1AEA, 0x11d0, 0x94, 0x4B, 0x00, 0xA0, 0xC9, 0x05, 0x41, 0x6E);
#pragma deprecated (IXAConfig)
extern RPC_IF_HANDLE __MIDL_itf_txdtc_0000_0038_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_txdtc_0000_0038_v0_0_s_ifspec;
#endif
