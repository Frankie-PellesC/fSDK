/*+@@file@@----------------------------------------------------------------*//*!
 \file		winsync.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep  4 22:57:25 2016
 \date		Modified on Sun Sep  4 22:57:25 2016
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
#ifndef __winsync_h__
#define __winsync_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IClockVectorElement_FWD_DEFINED__
#define __IClockVectorElement_FWD_DEFINED__
typedef interface IClockVectorElement IClockVectorElement;
#endif
#ifndef __IFeedClockVectorElement_FWD_DEFINED__
#define __IFeedClockVectorElement_FWD_DEFINED__
typedef interface IFeedClockVectorElement IFeedClockVectorElement;
#endif
#ifndef __IClockVector_FWD_DEFINED__
#define __IClockVector_FWD_DEFINED__
typedef interface IClockVector IClockVector;
#endif
#ifndef __IFeedClockVector_FWD_DEFINED__
#define __IFeedClockVector_FWD_DEFINED__
typedef interface IFeedClockVector IFeedClockVector;
#endif
#ifndef __IEnumClockVector_FWD_DEFINED__
#define __IEnumClockVector_FWD_DEFINED__
typedef interface IEnumClockVector IEnumClockVector;
#endif
#ifndef __IEnumFeedClockVector_FWD_DEFINED__
#define __IEnumFeedClockVector_FWD_DEFINED__
typedef interface IEnumFeedClockVector IEnumFeedClockVector;
#endif
#ifndef __ICoreFragment_FWD_DEFINED__
#define __ICoreFragment_FWD_DEFINED__
typedef interface ICoreFragment ICoreFragment;
#endif
#ifndef __ICoreFragmentInspector_FWD_DEFINED__
#define __ICoreFragmentInspector_FWD_DEFINED__
typedef interface ICoreFragmentInspector ICoreFragmentInspector;
#endif
#ifndef __IRangeException_FWD_DEFINED__
#define __IRangeException_FWD_DEFINED__
typedef interface IRangeException IRangeException;
#endif
#ifndef __IEnumRangeExceptions_FWD_DEFINED__
#define __IEnumRangeExceptions_FWD_DEFINED__
typedef interface IEnumRangeExceptions IEnumRangeExceptions;
#endif
#ifndef __ISingleItemException_FWD_DEFINED__
#define __ISingleItemException_FWD_DEFINED__
typedef interface ISingleItemException ISingleItemException;
#endif
#ifndef __IEnumSingleItemExceptions_FWD_DEFINED__
#define __IEnumSingleItemExceptions_FWD_DEFINED__
typedef interface IEnumSingleItemExceptions IEnumSingleItemExceptions;
#endif
#ifndef __IChangeUnitException_FWD_DEFINED__
#define __IChangeUnitException_FWD_DEFINED__
typedef interface IChangeUnitException IChangeUnitException;
#endif
#ifndef __IEnumChangeUnitExceptions_FWD_DEFINED__
#define __IEnumChangeUnitExceptions_FWD_DEFINED__
typedef interface IEnumChangeUnitExceptions IEnumChangeUnitExceptions;
#endif
#ifndef __IReplicaKeyMap_FWD_DEFINED__
#define __IReplicaKeyMap_FWD_DEFINED__
typedef interface IReplicaKeyMap IReplicaKeyMap;
#endif
#ifndef __IConstructReplicaKeyMap_FWD_DEFINED__
#define __IConstructReplicaKeyMap_FWD_DEFINED__
typedef interface IConstructReplicaKeyMap IConstructReplicaKeyMap;
#endif
#ifndef __ISyncKnowledge_FWD_DEFINED__
#define __ISyncKnowledge_FWD_DEFINED__
typedef interface ISyncKnowledge ISyncKnowledge;
#endif
#ifndef __IForgottenKnowledge_FWD_DEFINED__
#define __IForgottenKnowledge_FWD_DEFINED__
typedef interface IForgottenKnowledge IForgottenKnowledge;
#endif
#ifndef __ISyncKnowledge2_FWD_DEFINED__
#define __ISyncKnowledge2_FWD_DEFINED__
typedef interface ISyncKnowledge2 ISyncKnowledge2;
#endif
#ifndef __IRecoverableErrorData_FWD_DEFINED__
#define __IRecoverableErrorData_FWD_DEFINED__
typedef interface IRecoverableErrorData IRecoverableErrorData;
#endif
#ifndef __IRecoverableError_FWD_DEFINED__
#define __IRecoverableError_FWD_DEFINED__
typedef interface IRecoverableError IRecoverableError;
#endif
#ifndef __IChangeConflict_FWD_DEFINED__
#define __IChangeConflict_FWD_DEFINED__
typedef interface IChangeConflict IChangeConflict;
#endif
#ifndef __ISyncCallback_FWD_DEFINED__
#define __ISyncCallback_FWD_DEFINED__
typedef interface ISyncCallback ISyncCallback;
#endif
#ifndef __ISyncCallback2_FWD_DEFINED__
#define __ISyncCallback2_FWD_DEFINED__
typedef interface ISyncCallback2 ISyncCallback2;
#endif
#ifndef __ISyncProvider_FWD_DEFINED__
#define __ISyncProvider_FWD_DEFINED__
typedef interface ISyncProvider ISyncProvider;
#endif
#ifndef __ISyncSessionState_FWD_DEFINED__
#define __ISyncSessionState_FWD_DEFINED__
typedef interface ISyncSessionState ISyncSessionState;
#endif
#ifndef __ISyncSessionExtendedErrorInfo_FWD_DEFINED__
#define __ISyncSessionExtendedErrorInfo_FWD_DEFINED__
typedef interface ISyncSessionExtendedErrorInfo ISyncSessionExtendedErrorInfo;
#endif
#ifndef __ISyncSessionState2_FWD_DEFINED__
#define __ISyncSessionState2_FWD_DEFINED__
typedef interface ISyncSessionState2 ISyncSessionState2;
#endif
#ifndef __ISyncFilterInfo_FWD_DEFINED__
#define __ISyncFilterInfo_FWD_DEFINED__
typedef interface ISyncFilterInfo ISyncFilterInfo;
#endif
#ifndef __ISyncFilterInfo2_FWD_DEFINED__
#define __ISyncFilterInfo2_FWD_DEFINED__
typedef interface ISyncFilterInfo2 ISyncFilterInfo2;
#endif
#ifndef __IChangeUnitListFilterInfo_FWD_DEFINED__
#define __IChangeUnitListFilterInfo_FWD_DEFINED__
typedef interface IChangeUnitListFilterInfo IChangeUnitListFilterInfo;
#endif
#ifndef __IEnumSyncChanges_FWD_DEFINED__
#define __IEnumSyncChanges_FWD_DEFINED__
typedef interface IEnumSyncChanges IEnumSyncChanges;
#endif
#ifndef __ISyncChangeBuilder_FWD_DEFINED__
#define __ISyncChangeBuilder_FWD_DEFINED__
typedef interface ISyncChangeBuilder ISyncChangeBuilder;
#endif
#ifndef __ISyncChangeBatchBase_FWD_DEFINED__
#define __ISyncChangeBatchBase_FWD_DEFINED__
typedef interface ISyncChangeBatchBase ISyncChangeBatchBase;
#endif
#ifndef __ISyncChangeBatch_FWD_DEFINED__
#define __ISyncChangeBatch_FWD_DEFINED__
typedef interface ISyncChangeBatch ISyncChangeBatch;
#endif
#ifndef __ISyncFullEnumerationChangeBatch_FWD_DEFINED__
#define __ISyncFullEnumerationChangeBatch_FWD_DEFINED__
typedef interface ISyncFullEnumerationChangeBatch ISyncFullEnumerationChangeBatch;
#endif
#ifndef __ISyncChangeBatchWithPrerequisite_FWD_DEFINED__
#define __ISyncChangeBatchWithPrerequisite_FWD_DEFINED__
typedef interface ISyncChangeBatchWithPrerequisite ISyncChangeBatchWithPrerequisite;
#endif
#ifndef __ISyncChangeBatchBase2_FWD_DEFINED__
#define __ISyncChangeBatchBase2_FWD_DEFINED__
typedef interface ISyncChangeBatchBase2 ISyncChangeBatchBase2;
#endif
#ifndef __ISyncChangeBatchAdvanced_FWD_DEFINED__
#define __ISyncChangeBatchAdvanced_FWD_DEFINED__
typedef interface ISyncChangeBatchAdvanced ISyncChangeBatchAdvanced;
#endif
#ifndef __IKnowledgeSyncProvider_FWD_DEFINED__
#define __IKnowledgeSyncProvider_FWD_DEFINED__
typedef interface IKnowledgeSyncProvider IKnowledgeSyncProvider;
#endif
#ifndef __ISyncChangeUnit_FWD_DEFINED__
#define __ISyncChangeUnit_FWD_DEFINED__
typedef interface ISyncChangeUnit ISyncChangeUnit;
#endif
#ifndef __IEnumSyncChangeUnits_FWD_DEFINED__
#define __IEnumSyncChangeUnits_FWD_DEFINED__
typedef interface IEnumSyncChangeUnits IEnumSyncChangeUnits;
#endif
#ifndef __ISyncChange_FWD_DEFINED__
#define __ISyncChange_FWD_DEFINED__
typedef interface ISyncChange ISyncChange;
#endif
#ifndef __ISyncChangeWithPrerequisite_FWD_DEFINED__
#define __ISyncChangeWithPrerequisite_FWD_DEFINED__
typedef interface ISyncChangeWithPrerequisite ISyncChangeWithPrerequisite;
#endif
#ifndef __ISyncFullEnumerationChange_FWD_DEFINED__
#define __ISyncFullEnumerationChange_FWD_DEFINED__
typedef interface ISyncFullEnumerationChange ISyncFullEnumerationChange;
#endif
#ifndef __IDataRetrieverCallback_FWD_DEFINED__
#define __IDataRetrieverCallback_FWD_DEFINED__
typedef interface IDataRetrieverCallback IDataRetrieverCallback;
#endif
#ifndef __ILoadChangeContext_FWD_DEFINED__
#define __ILoadChangeContext_FWD_DEFINED__
typedef interface ILoadChangeContext ILoadChangeContext;
#endif
#ifndef __ISynchronousDataRetriever_FWD_DEFINED__
#define __ISynchronousDataRetriever_FWD_DEFINED__
typedef interface ISynchronousDataRetriever ISynchronousDataRetriever;
#endif
#ifndef __IAsynchronousDataRetriever_FWD_DEFINED__
#define __IAsynchronousDataRetriever_FWD_DEFINED__
typedef interface IAsynchronousDataRetriever IAsynchronousDataRetriever;
#endif
#ifndef __IFilterRequestCallback_FWD_DEFINED__
#define __IFilterRequestCallback_FWD_DEFINED__
typedef interface IFilterRequestCallback IFilterRequestCallback;
#endif
#ifndef __IRequestFilteredSync_FWD_DEFINED__
#define __IRequestFilteredSync_FWD_DEFINED__
typedef interface IRequestFilteredSync IRequestFilteredSync;
#endif
#ifndef __ISupportFilteredSync_FWD_DEFINED__
#define __ISupportFilteredSync_FWD_DEFINED__
typedef interface ISupportFilteredSync ISupportFilteredSync;
#endif
#ifndef __ISupportLastWriteTime_FWD_DEFINED__
#define __ISupportLastWriteTime_FWD_DEFINED__
typedef interface ISupportLastWriteTime ISupportLastWriteTime;
#endif
#ifndef __IProviderConverter_FWD_DEFINED__
#define __IProviderConverter_FWD_DEFINED__
typedef interface IProviderConverter IProviderConverter;
#endif
#include <oleidl.h>
#pragma warning ( disable : 28718 )
typedef struct _ID_PARAMETER_PAIR
{
	BOOL fIsVariable;
	USHORT cbIdSize;
} ID_PARAMETER_PAIR;
typedef struct _ID_PARAMETERS
{
	DWORD dwSize;
	ID_PARAMETER_PAIR replicaId;
	ID_PARAMETER_PAIR itemId;
	ID_PARAMETER_PAIR changeUnitId;
} ID_PARAMETERS;
typedef struct _SYNC_SESSION_STATISTICS
{
	DWORD dwChangesApplied;
	DWORD dwChangesFailed;
} SYNC_SESSION_STATISTICS;
typedef struct _SYNC_VERSION
{
	DWORD dwLastUpdatingReplicaKey;
	ULONGLONG ullTickCount;
} SYNC_VERSION;
typedef struct _SYNC_RANGE
{
	BYTE *pbClosedLowerBound;
	BYTE *pbClosedUpperBound;
} SYNC_RANGE;
typedef struct _SYNC_TIME
{
	DWORD dwDate;
	DWORD dwTime;
} SYNC_TIME;
typedef enum __MIDL___MIDL_itf_winsync_0000_0000_0001
{
	SPR_SOURCE = 0,
	SPR_DESTINATION = (SPR_SOURCE + 1)
} SYNC_PROVIDER_ROLE;
typedef enum __MIDL___MIDL_itf_winsync_0000_0000_0002
{
	CRP_NONE = 0,
	CRP_DESTINATION_PROVIDER_WINS = (CRP_NONE + 1),
	CRP_SOURCE_PROVIDER_WINS = (CRP_DESTINATION_PROVIDER_WINS + 1),
	CRP_LAST = (CRP_SOURCE_PROVIDER_WINS + 1)
} CONFLICT_RESOLUTION_POLICY;
typedef enum __MIDL___MIDL_itf_winsync_0000_0000_0003
{
	SPS_CHANGE_DETECTION = 0,
	SPS_CHANGE_ENUMERATION = (SPS_CHANGE_DETECTION + 1),
	SPS_CHANGE_APPLICATION = (SPS_CHANGE_ENUMERATION + 1)
} SYNC_PROGRESS_STAGE;
typedef enum __MIDL___MIDL_itf_winsync_0000_0000_0004
{
	SFEA_FULL_ENUMERATION = 0,
	SFEA_PARTIAL_SYNC = (SFEA_FULL_ENUMERATION + 1),
	SFEA_ABORT = (SFEA_PARTIAL_SYNC + 1)
} SYNC_FULL_ENUMERATION_ACTION;
typedef enum __MIDL___MIDL_itf_winsync_0000_0000_0005
{
	SRA_DEFER = 0,
	SRA_ACCEPT_DESTINATION_PROVIDER = (SRA_DEFER + 1),
	SRA_ACCEPT_SOURCE_PROVIDER = (SRA_ACCEPT_DESTINATION_PROVIDER + 1),
	SRA_MERGE = (SRA_ACCEPT_SOURCE_PROVIDER + 1),
	SRA_TRANSFER_AND_DEFER = (SRA_MERGE + 1),
	SRA_LAST = (SRA_TRANSFER_AND_DEFER + 1)
} SYNC_RESOLVE_ACTION;
typedef enum __MIDL___MIDL_itf_winsync_0000_0000_0006
{
	SYNC_STATISTICS_RANGE_COUNT = 0
} SYNC_STATISTICS;
typedef enum __MIDL___MIDL_itf_winsync_0000_0000_0007
{
	SYNC_SERIALIZATION_VERSION_V1 = 1,
	SYNC_SERIALIZATION_VERSION_V2 = 4
} SYNC_SERIALIZATION_VERSION;
typedef enum __MIDL___MIDL_itf_winsync_0000_0000_0008
{
	FT_CURRENT_ITEMS_ONLY = 0
} FILTERING_TYPE;
typedef enum __MIDL___MIDL_itf_winsync_0000_0000_0009
{
	KCCR_COOKIE_KNOWLEDGE_EQUAL = 0,
	KCCR_COOKIE_KNOWLEDGE_CONTAINED = (KCCR_COOKIE_KNOWLEDGE_EQUAL + 1),
	KCCR_COOKIE_KNOWLEDGE_CONTAINS = (KCCR_COOKIE_KNOWLEDGE_CONTAINED + 1),
	KCCR_COOKIE_KNOWLEDGE_NOT_COMPARABLE = (KCCR_COOKIE_KNOWLEDGE_CONTAINS + 1)
} KNOWLEDGE_COOKIE_COMPARISON_RESULT;
extern RPC_IF_HANDLE __MIDL_itf_winsync_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_winsync_0000_0000_v0_0_s_ifspec;
#ifndef __IClockVectorElement_INTERFACE_DEFINED__
#define __IClockVectorElement_INTERFACE_DEFINED__
extern const IID IID_IClockVectorElement;
typedef struct IClockVectorElementVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IClockVectorElement * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IClockVectorElement * This);
	ULONG(STDMETHODCALLTYPE * Release) (IClockVectorElement * This);
	HRESULT(STDMETHODCALLTYPE * GetReplicaKey) (IClockVectorElement * This, DWORD * pdwReplicaKey);
	HRESULT(STDMETHODCALLTYPE * GetTickCount) (IClockVectorElement * This, ULONGLONG * pullTickCount);
	END_INTERFACE
}  IClockVectorElementVtbl;
interface IClockVectorElement
{
	CONST_VTBL struct IClockVectorElementVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IClockVectorElement_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IClockVectorElement_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IClockVectorElement_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IClockVectorElement_GetReplicaKey(This,pdwReplicaKey) ( (This)->lpVtbl -> GetReplicaKey(This,pdwReplicaKey) )
#define IClockVectorElement_GetTickCount(This,pullTickCount) ( (This)->lpVtbl -> GetTickCount(This,pullTickCount) )
#endif
#endif
#define SYNC_VERSION_FLAG_FROM_FEED              0x00000001
#define SYNC_VERSION_FLAG_HAS_BY                 0x00000002
extern RPC_IF_HANDLE __MIDL_itf_winsync_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_winsync_0000_0001_v0_0_s_ifspec;
#ifndef __IFeedClockVectorElement_INTERFACE_DEFINED__
#define __IFeedClockVectorElement_INTERFACE_DEFINED__
extern const IID IID_IFeedClockVectorElement;
typedef struct IFeedClockVectorElementVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFeedClockVectorElement * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFeedClockVectorElement * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFeedClockVectorElement * This);
	HRESULT(STDMETHODCALLTYPE * GetReplicaKey) (IFeedClockVectorElement * This, DWORD * pdwReplicaKey);
	HRESULT(STDMETHODCALLTYPE * GetTickCount) (IFeedClockVectorElement * This, ULONGLONG * pullTickCount);
	HRESULT(STDMETHODCALLTYPE * GetSyncTime) (IFeedClockVectorElement * This, SYNC_TIME * pSyncTime);
	HRESULT(STDMETHODCALLTYPE * GetFlags) (IFeedClockVectorElement * This, BYTE * pbFlags);
	END_INTERFACE
}  IFeedClockVectorElementVtbl;
interface IFeedClockVectorElement
{
	CONST_VTBL struct IFeedClockVectorElementVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFeedClockVectorElement_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFeedClockVectorElement_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IFeedClockVectorElement_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IFeedClockVectorElement_GetReplicaKey(This,pdwReplicaKey) ( (This)->lpVtbl -> GetReplicaKey(This,pdwReplicaKey) )
#define IFeedClockVectorElement_GetTickCount(This,pullTickCount) ( (This)->lpVtbl -> GetTickCount(This,pullTickCount) )
#define IFeedClockVectorElement_GetSyncTime(This,pSyncTime) ( (This)->lpVtbl -> GetSyncTime(This,pSyncTime) )
#define IFeedClockVectorElement_GetFlags(This,pbFlags) ( (This)->lpVtbl -> GetFlags(This,pbFlags) )
#endif
#endif
#ifndef __IClockVector_INTERFACE_DEFINED__
#define __IClockVector_INTERFACE_DEFINED__
extern const IID IID_IClockVector;
typedef struct IClockVectorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IClockVector * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IClockVector * This);
	ULONG(STDMETHODCALLTYPE * Release) (IClockVector * This);
	HRESULT(STDMETHODCALLTYPE * GetClockVectorElements) (IClockVector * This, REFIID riid, void **ppiEnumClockVector);
	HRESULT(STDMETHODCALLTYPE * GetClockVectorElementCount) (IClockVector * This, DWORD * pdwCount);
	END_INTERFACE
}  IClockVectorVtbl;
interface IClockVector
{
	CONST_VTBL struct IClockVectorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IClockVector_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IClockVector_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IClockVector_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IClockVector_GetClockVectorElements(This,riid,ppiEnumClockVector) ( (This)->lpVtbl -> GetClockVectorElements(This,riid,ppiEnumClockVector) )
#define IClockVector_GetClockVectorElementCount(This,pdwCount) ( (This)->lpVtbl -> GetClockVectorElementCount(This,pdwCount) )
#endif
#endif
#ifndef __IFeedClockVector_INTERFACE_DEFINED__
#define __IFeedClockVector_INTERFACE_DEFINED__
extern const IID IID_IFeedClockVector;
typedef struct IFeedClockVectorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFeedClockVector * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFeedClockVector * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFeedClockVector * This);
	HRESULT(STDMETHODCALLTYPE * GetClockVectorElements) (IFeedClockVector * This, REFIID riid, void **ppiEnumClockVector);
	HRESULT(STDMETHODCALLTYPE * GetClockVectorElementCount) (IFeedClockVector * This, DWORD * pdwCount);
	HRESULT(STDMETHODCALLTYPE * GetUpdateCount) (IFeedClockVector * This, DWORD * pdwUpdateCount);
	HRESULT(STDMETHODCALLTYPE * IsNoConflictsSpecified) (IFeedClockVector * This, BOOL * pfIsNoConflictsSpecified);
	END_INTERFACE
}  IFeedClockVectorVtbl;
interface IFeedClockVector
{
	CONST_VTBL struct IFeedClockVectorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFeedClockVector_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFeedClockVector_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IFeedClockVector_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IFeedClockVector_GetClockVectorElements(This,riid,ppiEnumClockVector) ( (This)->lpVtbl -> GetClockVectorElements(This,riid,ppiEnumClockVector) )
#define IFeedClockVector_GetClockVectorElementCount(This,pdwCount) ( (This)->lpVtbl -> GetClockVectorElementCount(This,pdwCount) )
#define IFeedClockVector_GetUpdateCount(This,pdwUpdateCount) ( (This)->lpVtbl -> GetUpdateCount(This,pdwUpdateCount) )
#define IFeedClockVector_IsNoConflictsSpecified(This,pfIsNoConflictsSpecified) ( (This)->lpVtbl -> IsNoConflictsSpecified(This,pfIsNoConflictsSpecified) )
#endif
#endif
#ifndef __IEnumClockVector_INTERFACE_DEFINED__
#define __IEnumClockVector_INTERFACE_DEFINED__
extern const IID IID_IEnumClockVector;
typedef struct IEnumClockVectorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumClockVector * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumClockVector * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumClockVector * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumClockVector * This, ULONG cClockVectorElements, IClockVectorElement ** ppiClockVectorElements, ULONG * pcFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumClockVector * This, ULONG cSyncVersions);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumClockVector * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumClockVector * This, IEnumClockVector ** ppiEnum);
	END_INTERFACE
}  IEnumClockVectorVtbl;
interface IEnumClockVector
{
	CONST_VTBL struct IEnumClockVectorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumClockVector_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumClockVector_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumClockVector_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumClockVector_Next(This,cClockVectorElements,ppiClockVectorElements,pcFetched) ( (This)->lpVtbl -> Next(This,cClockVectorElements,ppiClockVectorElements,pcFetched) )
#define IEnumClockVector_Skip(This,cSyncVersions) ( (This)->lpVtbl -> Skip(This,cSyncVersions) )
#define IEnumClockVector_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumClockVector_Clone(This,ppiEnum) ( (This)->lpVtbl -> Clone(This,ppiEnum) )
#endif
#endif
#ifndef __IEnumFeedClockVector_INTERFACE_DEFINED__
#define __IEnumFeedClockVector_INTERFACE_DEFINED__
extern const IID IID_IEnumFeedClockVector;
typedef struct IEnumFeedClockVectorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumFeedClockVector * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumFeedClockVector * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumFeedClockVector * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumFeedClockVector * This, ULONG cClockVectorElements, IFeedClockVectorElement ** ppiClockVectorElements, ULONG * pcFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumFeedClockVector * This, ULONG cSyncVersions);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumFeedClockVector * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumFeedClockVector * This, IEnumFeedClockVector ** ppiEnum);
	END_INTERFACE
}  IEnumFeedClockVectorVtbl;
interface IEnumFeedClockVector
{
	CONST_VTBL struct IEnumFeedClockVectorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumFeedClockVector_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumFeedClockVector_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumFeedClockVector_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumFeedClockVector_Next(This,cClockVectorElements,ppiClockVectorElements,pcFetched) ( (This)->lpVtbl -> Next(This,cClockVectorElements,ppiClockVectorElements,pcFetched) )
#define IEnumFeedClockVector_Skip(This,cSyncVersions) ( (This)->lpVtbl -> Skip(This,cSyncVersions) )
#define IEnumFeedClockVector_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumFeedClockVector_Clone(This,ppiEnum) ( (This)->lpVtbl -> Clone(This,ppiEnum) )
#endif
#endif
#ifndef __ICoreFragment_INTERFACE_DEFINED__
#define __ICoreFragment_INTERFACE_DEFINED__
extern const IID IID_ICoreFragment;
typedef struct ICoreFragmentVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICoreFragment * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICoreFragment * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICoreFragment * This);
	HRESULT(STDMETHODCALLTYPE * NextColumn) (ICoreFragment * This, BYTE * pChangeUnitId, DWORD * pChangeUnitIdSize);
	HRESULT(STDMETHODCALLTYPE * NextRange) (ICoreFragment * This, BYTE * pItemId, DWORD * pItemIdSize, IClockVector ** piClockVector);
	HRESULT(STDMETHODCALLTYPE * Reset) (ICoreFragment * This);
	HRESULT(STDMETHODCALLTYPE * GetColumnCount) (ICoreFragment * This, DWORD * pColumnCount);
	HRESULT(STDMETHODCALLTYPE * GetRangeCount) (ICoreFragment * This, DWORD * pRangeCount);
	END_INTERFACE
}  ICoreFragmentVtbl;
interface ICoreFragment
{
	CONST_VTBL struct ICoreFragmentVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICoreFragment_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICoreFragment_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ICoreFragment_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ICoreFragment_NextColumn(This,pChangeUnitId,pChangeUnitIdSize) ( (This)->lpVtbl -> NextColumn(This,pChangeUnitId,pChangeUnitIdSize) )
#define ICoreFragment_NextRange(This,pItemId,pItemIdSize,piClockVector) ( (This)->lpVtbl -> NextRange(This,pItemId,pItemIdSize,piClockVector) )
#define ICoreFragment_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define ICoreFragment_GetColumnCount(This,pColumnCount) ( (This)->lpVtbl -> GetColumnCount(This,pColumnCount) )
#define ICoreFragment_GetRangeCount(This,pRangeCount) ( (This)->lpVtbl -> GetRangeCount(This,pRangeCount) )
#endif
#endif
#ifndef __ICoreFragmentInspector_INTERFACE_DEFINED__
#define __ICoreFragmentInspector_INTERFACE_DEFINED__
extern const IID IID_ICoreFragmentInspector;
typedef struct ICoreFragmentInspectorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICoreFragmentInspector * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICoreFragmentInspector * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICoreFragmentInspector * This);
	HRESULT(STDMETHODCALLTYPE * NextCoreFragments) (ICoreFragmentInspector * This, ULONG requestedCount, ICoreFragment ** ppiCoreFragments, ULONG * pFetchedCount);
	HRESULT(STDMETHODCALLTYPE * Reset) (ICoreFragmentInspector * This);
	END_INTERFACE
}  ICoreFragmentInspectorVtbl;
interface ICoreFragmentInspector
{
	CONST_VTBL struct ICoreFragmentInspectorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICoreFragmentInspector_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICoreFragmentInspector_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ICoreFragmentInspector_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ICoreFragmentInspector_NextCoreFragments(This,requestedCount,ppiCoreFragments,pFetchedCount) ( (This)->lpVtbl -> NextCoreFragments(This,requestedCount,ppiCoreFragments,pFetchedCount) )
#define ICoreFragmentInspector_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#endif
#endif
#ifndef __IRangeException_INTERFACE_DEFINED__
#define __IRangeException_INTERFACE_DEFINED__
extern const IID IID_IRangeException;
typedef struct IRangeExceptionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRangeException * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRangeException * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRangeException * This);
	HRESULT(STDMETHODCALLTYPE * GetClosedRangeStart) (IRangeException * This, BYTE * pbClosedRangeStart, DWORD * pcbIdSize);
	HRESULT(STDMETHODCALLTYPE * GetClosedRangeEnd) (IRangeException * This, BYTE * pbClosedRangeEnd, DWORD * pcbIdSize);
	HRESULT(STDMETHODCALLTYPE * GetClockVector) (IRangeException * This, REFIID riid, void **ppUnk);
	END_INTERFACE
}  IRangeExceptionVtbl;
interface IRangeException
{
	CONST_VTBL struct IRangeExceptionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRangeException_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRangeException_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRangeException_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRangeException_GetClosedRangeStart(This,pbClosedRangeStart,pcbIdSize) ( (This)->lpVtbl -> GetClosedRangeStart(This,pbClosedRangeStart,pcbIdSize) )
#define IRangeException_GetClosedRangeEnd(This,pbClosedRangeEnd,pcbIdSize) ( (This)->lpVtbl -> GetClosedRangeEnd(This,pbClosedRangeEnd,pcbIdSize) )
#define IRangeException_GetClockVector(This,riid,ppUnk) ( (This)->lpVtbl -> GetClockVector(This,riid,ppUnk) )
#endif
#endif
#ifndef __IEnumRangeExceptions_INTERFACE_DEFINED__
#define __IEnumRangeExceptions_INTERFACE_DEFINED__
extern const IID IID_IEnumRangeExceptions;
typedef struct IEnumRangeExceptionsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumRangeExceptions * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumRangeExceptions * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumRangeExceptions * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumRangeExceptions * This, ULONG cExceptions, IRangeException ** ppRangeException, ULONG * pcFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumRangeExceptions * This, ULONG cExceptions);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumRangeExceptions * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumRangeExceptions * This, IEnumRangeExceptions ** ppEnum);
	END_INTERFACE
}  IEnumRangeExceptionsVtbl;
interface IEnumRangeExceptions
{
	CONST_VTBL struct IEnumRangeExceptionsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumRangeExceptions_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumRangeExceptions_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumRangeExceptions_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumRangeExceptions_Next(This,cExceptions,ppRangeException,pcFetched) ( (This)->lpVtbl -> Next(This,cExceptions,ppRangeException,pcFetched) )
#define IEnumRangeExceptions_Skip(This,cExceptions) ( (This)->lpVtbl -> Skip(This,cExceptions) )
#define IEnumRangeExceptions_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumRangeExceptions_Clone(This,ppEnum) ( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
#endif
#ifndef __ISingleItemException_INTERFACE_DEFINED__
#define __ISingleItemException_INTERFACE_DEFINED__
extern const IID IID_ISingleItemException;
typedef struct ISingleItemExceptionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISingleItemException * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISingleItemException * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISingleItemException * This);
	HRESULT(STDMETHODCALLTYPE * GetItemId) (ISingleItemException * This, BYTE * pbItemId, DWORD * pcbIdSize);
	HRESULT(STDMETHODCALLTYPE * GetClockVector) (ISingleItemException * This, REFIID riid, void **ppUnk);
	END_INTERFACE
}  ISingleItemExceptionVtbl;
interface ISingleItemException
{
	CONST_VTBL struct ISingleItemExceptionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISingleItemException_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISingleItemException_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISingleItemException_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISingleItemException_GetItemId(This,pbItemId,pcbIdSize) ( (This)->lpVtbl -> GetItemId(This,pbItemId,pcbIdSize) )
#define ISingleItemException_GetClockVector(This,riid,ppUnk) ( (This)->lpVtbl -> GetClockVector(This,riid,ppUnk) )
#endif
#endif
#ifndef __IEnumSingleItemExceptions_INTERFACE_DEFINED__
#define __IEnumSingleItemExceptions_INTERFACE_DEFINED__
extern const IID IID_IEnumSingleItemExceptions;
typedef struct IEnumSingleItemExceptionsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumSingleItemExceptions * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumSingleItemExceptions * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumSingleItemExceptions * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumSingleItemExceptions * This, ULONG cExceptions, ISingleItemException ** ppSingleItemException, ULONG * pcFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumSingleItemExceptions * This, ULONG cExceptions);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumSingleItemExceptions * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumSingleItemExceptions * This, IEnumSingleItemExceptions ** ppEnum);
	END_INTERFACE
}  IEnumSingleItemExceptionsVtbl;
interface IEnumSingleItemExceptions
{
	CONST_VTBL struct IEnumSingleItemExceptionsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumSingleItemExceptions_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumSingleItemExceptions_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumSingleItemExceptions_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumSingleItemExceptions_Next(This,cExceptions,ppSingleItemException,pcFetched) ( (This)->lpVtbl -> Next(This,cExceptions,ppSingleItemException,pcFetched) )
#define IEnumSingleItemExceptions_Skip(This,cExceptions) ( (This)->lpVtbl -> Skip(This,cExceptions) )
#define IEnumSingleItemExceptions_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumSingleItemExceptions_Clone(This,ppEnum) ( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
#endif
#ifndef __IChangeUnitException_INTERFACE_DEFINED__
#define __IChangeUnitException_INTERFACE_DEFINED__
extern const IID IID_IChangeUnitException;
typedef struct IChangeUnitExceptionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IChangeUnitException * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IChangeUnitException * This);
	ULONG(STDMETHODCALLTYPE * Release) (IChangeUnitException * This);
	HRESULT(STDMETHODCALLTYPE * GetItemId) (IChangeUnitException * This, BYTE * pbItemId, DWORD * pcbIdSize);
	HRESULT(STDMETHODCALLTYPE * GetChangeUnitId) (IChangeUnitException * This, BYTE * pbChangeUnitId, DWORD * pcbIdSize);
	HRESULT(STDMETHODCALLTYPE * GetClockVector) (IChangeUnitException * This, REFIID riid, void **ppUnk);
	END_INTERFACE
}  IChangeUnitExceptionVtbl;
interface IChangeUnitException
{
	CONST_VTBL struct IChangeUnitExceptionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IChangeUnitException_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IChangeUnitException_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IChangeUnitException_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IChangeUnitException_GetItemId(This,pbItemId,pcbIdSize) ( (This)->lpVtbl -> GetItemId(This,pbItemId,pcbIdSize) )
#define IChangeUnitException_GetChangeUnitId(This,pbChangeUnitId,pcbIdSize) ( (This)->lpVtbl -> GetChangeUnitId(This,pbChangeUnitId,pcbIdSize) )
#define IChangeUnitException_GetClockVector(This,riid,ppUnk) ( (This)->lpVtbl -> GetClockVector(This,riid,ppUnk) )
#endif
#endif
#ifndef __IEnumChangeUnitExceptions_INTERFACE_DEFINED__
#define __IEnumChangeUnitExceptions_INTERFACE_DEFINED__
extern const IID IID_IEnumChangeUnitExceptions;
typedef struct IEnumChangeUnitExceptionsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumChangeUnitExceptions * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumChangeUnitExceptions * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumChangeUnitExceptions * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumChangeUnitExceptions * This, ULONG cExceptions, IChangeUnitException ** ppChangeUnitException, ULONG * pcFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumChangeUnitExceptions * This, ULONG cExceptions);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumChangeUnitExceptions * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumChangeUnitExceptions * This, IEnumChangeUnitExceptions ** ppEnum);
	END_INTERFACE
}  IEnumChangeUnitExceptionsVtbl;
interface IEnumChangeUnitExceptions
{
	CONST_VTBL struct IEnumChangeUnitExceptionsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumChangeUnitExceptions_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumChangeUnitExceptions_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumChangeUnitExceptions_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumChangeUnitExceptions_Next(This,cExceptions,ppChangeUnitException,pcFetched) ( (This)->lpVtbl -> Next(This,cExceptions,ppChangeUnitException,pcFetched) )
#define IEnumChangeUnitExceptions_Skip(This,cExceptions) ( (This)->lpVtbl -> Skip(This,cExceptions) )
#define IEnumChangeUnitExceptions_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumChangeUnitExceptions_Clone(This,ppEnum) ( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
#endif
#ifndef __IReplicaKeyMap_INTERFACE_DEFINED__
#define __IReplicaKeyMap_INTERFACE_DEFINED__
extern const IID IID_IReplicaKeyMap;
typedef struct IReplicaKeyMapVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IReplicaKeyMap * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IReplicaKeyMap * This);
	ULONG(STDMETHODCALLTYPE * Release) (IReplicaKeyMap * This);
	HRESULT(STDMETHODCALLTYPE * LookupReplicaKey) (IReplicaKeyMap * This, const BYTE * pbReplicaId, DWORD * pdwReplicaKey);
	HRESULT(STDMETHODCALLTYPE * LookupReplicaId) (IReplicaKeyMap * This, DWORD dwReplicaKey, BYTE * pbReplicaId, DWORD * pcbIdSize);
	HRESULT(STDMETHODCALLTYPE * Serialize) (IReplicaKeyMap * This, BYTE * pbReplicaKeyMap, DWORD * pcbReplicaKeyMap);
	END_INTERFACE
}  IReplicaKeyMapVtbl;
interface IReplicaKeyMap
{
	CONST_VTBL struct IReplicaKeyMapVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IReplicaKeyMap_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IReplicaKeyMap_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IReplicaKeyMap_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IReplicaKeyMap_LookupReplicaKey(This,pbReplicaId,pdwReplicaKey) ( (This)->lpVtbl -> LookupReplicaKey(This,pbReplicaId,pdwReplicaKey) )
#define IReplicaKeyMap_LookupReplicaId(This,dwReplicaKey,pbReplicaId,pcbIdSize) ( (This)->lpVtbl -> LookupReplicaId(This,dwReplicaKey,pbReplicaId,pcbIdSize) )
#define IReplicaKeyMap_Serialize(This,pbReplicaKeyMap,pcbReplicaKeyMap) ( (This)->lpVtbl -> Serialize(This,pbReplicaKeyMap,pcbReplicaKeyMap) )
#endif
#endif
#ifndef __IConstructReplicaKeyMap_INTERFACE_DEFINED__
#define __IConstructReplicaKeyMap_INTERFACE_DEFINED__
extern const IID IID_IConstructReplicaKeyMap;
typedef struct IConstructReplicaKeyMapVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IConstructReplicaKeyMap * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IConstructReplicaKeyMap * This);
	ULONG(STDMETHODCALLTYPE * Release) (IConstructReplicaKeyMap * This);
	HRESULT(STDMETHODCALLTYPE * FindOrAddReplica) (IConstructReplicaKeyMap * This, const BYTE * pbReplicaId, DWORD * pdwReplicaKey);
	END_INTERFACE
}  IConstructReplicaKeyMapVtbl;
interface IConstructReplicaKeyMap
{
	CONST_VTBL struct IConstructReplicaKeyMapVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IConstructReplicaKeyMap_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IConstructReplicaKeyMap_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IConstructReplicaKeyMap_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IConstructReplicaKeyMap_FindOrAddReplica(This,pbReplicaId,pdwReplicaKey) ( (This)->lpVtbl -> FindOrAddReplica(This,pbReplicaId,pdwReplicaKey) )
#endif
#endif
#ifndef __ISyncKnowledge_INTERFACE_DEFINED__
#define __ISyncKnowledge_INTERFACE_DEFINED__
extern const IID IID_ISyncKnowledge;
typedef struct ISyncKnowledgeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISyncKnowledge * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISyncKnowledge * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISyncKnowledge * This);
	HRESULT(STDMETHODCALLTYPE * GetOwnerReplicaId) (ISyncKnowledge * This, BYTE * pbReplicaId, DWORD * pcbIdSize);
	HRESULT(STDMETHODCALLTYPE * Serialize) (ISyncKnowledge * This, BOOL fSerializeReplicaKeyMap, BYTE * pbKnowledge, DWORD * pcbKnowledge);
	HRESULT(STDMETHODCALLTYPE * SetLocalTickCount) (ISyncKnowledge * This, ULONGLONG ullTickCount);
	HRESULT(STDMETHODCALLTYPE * ContainsChange) (ISyncKnowledge * This, const BYTE * pbVersionOwnerReplicaId, const BYTE * pgidItemId, const SYNC_VERSION * pSyncVersion);
	HRESULT(STDMETHODCALLTYPE * ContainsChangeUnit) (ISyncKnowledge * This, const BYTE * pbVersionOwnerReplicaId, const BYTE * pbItemId, const BYTE * pbChangeUnitId, const SYNC_VERSION * pSyncVersion);
	HRESULT(STDMETHODCALLTYPE * GetScopeVector) (ISyncKnowledge * This, REFIID riid, void **ppUnk);
	HRESULT(STDMETHODCALLTYPE * GetReplicaKeyMap) (ISyncKnowledge * This, IReplicaKeyMap ** ppReplicaKeyMap);
	HRESULT(STDMETHODCALLTYPE * Clone) (ISyncKnowledge * This, ISyncKnowledge ** ppClonedKnowledge);
	HRESULT(STDMETHODCALLTYPE * ConvertVersion) (ISyncKnowledge * This, ISyncKnowledge * pKnowledgeIn, const BYTE * pbCurrentOwnerId, const SYNC_VERSION * pVersionIn, BYTE * pbNewOwnerId, DWORD * pcbIdSize, SYNC_VERSION * pVersionOut);
	HRESULT(STDMETHODCALLTYPE * MapRemoteToLocal) (ISyncKnowledge * This, ISyncKnowledge * pRemoteKnowledge, ISyncKnowledge ** ppMappedKnowledge);
	HRESULT(STDMETHODCALLTYPE * Union) (ISyncKnowledge * This, ISyncKnowledge * pKnowledge);
	HRESULT(STDMETHODCALLTYPE * ProjectOntoItem) (ISyncKnowledge * This, const BYTE * pbItemId, ISyncKnowledge ** ppKnowledgeOut);
	HRESULT(STDMETHODCALLTYPE * ProjectOntoChangeUnit) (ISyncKnowledge * This, const BYTE * pbItemId, const BYTE * pbChangeUnitId, ISyncKnowledge ** ppKnowledgeOut);
	HRESULT(STDMETHODCALLTYPE * ProjectOntoRange) (ISyncKnowledge * This, const SYNC_RANGE * psrngSyncRange, ISyncKnowledge ** ppKnowledgeOut);
	HRESULT(STDMETHODCALLTYPE * ExcludeItem) (ISyncKnowledge * This, const BYTE * pbItemId);
	HRESULT(STDMETHODCALLTYPE * ExcludeChangeUnit) (ISyncKnowledge * This, const BYTE * pbItemId, const BYTE * pbChangeUnitId);
	HRESULT(STDMETHODCALLTYPE * ContainsKnowledge) (ISyncKnowledge * This, ISyncKnowledge * pKnowledge);
	HRESULT(STDMETHODCALLTYPE * FindMinTickCountForReplica) (ISyncKnowledge * This, const BYTE * pbReplicaId, ULONGLONG * pullReplicaTickCount);
	HRESULT(STDMETHODCALLTYPE * GetRangeExceptions) (ISyncKnowledge * This, REFIID riid, void **ppUnk);
	HRESULT(STDMETHODCALLTYPE * GetSingleItemExceptions) (ISyncKnowledge * This, REFIID riid, void **ppUnk);
	HRESULT(STDMETHODCALLTYPE * GetChangeUnitExceptions) (ISyncKnowledge * This, REFIID riid, void **ppUnk);
	HRESULT(STDMETHODCALLTYPE * FindClockVectorForItem) (ISyncKnowledge * This, const BYTE * pbItemId, REFIID riid, void **ppUnk);
	HRESULT(STDMETHODCALLTYPE * FindClockVectorForChangeUnit) (ISyncKnowledge * This, const BYTE * pbItemId, const BYTE * pbChangeUnitId, REFIID riid, void **ppUnk);
	HRESULT(STDMETHODCALLTYPE * GetVersion) (ISyncKnowledge * This, DWORD * pdwVersion);
	END_INTERFACE
}  ISyncKnowledgeVtbl;
interface ISyncKnowledge
{
	CONST_VTBL struct ISyncKnowledgeVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISyncKnowledge_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISyncKnowledge_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISyncKnowledge_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISyncKnowledge_GetOwnerReplicaId(This,pbReplicaId,pcbIdSize) ( (This)->lpVtbl -> GetOwnerReplicaId(This,pbReplicaId,pcbIdSize) )
#define ISyncKnowledge_Serialize(This,fSerializeReplicaKeyMap,pbKnowledge,pcbKnowledge) ( (This)->lpVtbl -> Serialize(This,fSerializeReplicaKeyMap,pbKnowledge,pcbKnowledge) )
#define ISyncKnowledge_SetLocalTickCount(This,ullTickCount) ( (This)->lpVtbl -> SetLocalTickCount(This,ullTickCount) )
#define ISyncKnowledge_ContainsChange(This,pbVersionOwnerReplicaId,pgidItemId,pSyncVersion) ( (This)->lpVtbl -> ContainsChange(This,pbVersionOwnerReplicaId,pgidItemId,pSyncVersion) )
#define ISyncKnowledge_ContainsChangeUnit(This,pbVersionOwnerReplicaId,pbItemId,pbChangeUnitId,pSyncVersion) ( (This)->lpVtbl -> ContainsChangeUnit(This,pbVersionOwnerReplicaId,pbItemId,pbChangeUnitId,pSyncVersion) )
#define ISyncKnowledge_GetScopeVector(This,riid,ppUnk) ( (This)->lpVtbl -> GetScopeVector(This,riid,ppUnk) )
#define ISyncKnowledge_GetReplicaKeyMap(This,ppReplicaKeyMap) ( (This)->lpVtbl -> GetReplicaKeyMap(This,ppReplicaKeyMap) )
#define ISyncKnowledge_Clone(This,ppClonedKnowledge) ( (This)->lpVtbl -> Clone(This,ppClonedKnowledge) )
#define ISyncKnowledge_ConvertVersion(This,pKnowledgeIn,pbCurrentOwnerId,pVersionIn,pbNewOwnerId,pcbIdSize,pVersionOut) ( (This)->lpVtbl -> ConvertVersion(This,pKnowledgeIn,pbCurrentOwnerId,pVersionIn,pbNewOwnerId,pcbIdSize,pVersionOut) )
#define ISyncKnowledge_MapRemoteToLocal(This,pRemoteKnowledge,ppMappedKnowledge) ( (This)->lpVtbl -> MapRemoteToLocal(This,pRemoteKnowledge,ppMappedKnowledge) )
#define ISyncKnowledge_Union(This,pKnowledge) ( (This)->lpVtbl -> Union(This,pKnowledge) )
#define ISyncKnowledge_ProjectOntoItem(This,pbItemId,ppKnowledgeOut) ( (This)->lpVtbl -> ProjectOntoItem(This,pbItemId,ppKnowledgeOut) )
#define ISyncKnowledge_ProjectOntoChangeUnit(This,pbItemId,pbChangeUnitId,ppKnowledgeOut) ( (This)->lpVtbl -> ProjectOntoChangeUnit(This,pbItemId,pbChangeUnitId,ppKnowledgeOut) )
#define ISyncKnowledge_ProjectOntoRange(This,psrngSyncRange,ppKnowledgeOut) ( (This)->lpVtbl -> ProjectOntoRange(This,psrngSyncRange,ppKnowledgeOut) )
#define ISyncKnowledge_ExcludeItem(This,pbItemId) ( (This)->lpVtbl -> ExcludeItem(This,pbItemId) )
#define ISyncKnowledge_ExcludeChangeUnit(This,pbItemId,pbChangeUnitId) ( (This)->lpVtbl -> ExcludeChangeUnit(This,pbItemId,pbChangeUnitId) )
#define ISyncKnowledge_ContainsKnowledge(This,pKnowledge) ( (This)->lpVtbl -> ContainsKnowledge(This,pKnowledge) )
#define ISyncKnowledge_FindMinTickCountForReplica(This,pbReplicaId,pullReplicaTickCount) ( (This)->lpVtbl -> FindMinTickCountForReplica(This,pbReplicaId,pullReplicaTickCount) )
#define ISyncKnowledge_GetRangeExceptions(This,riid,ppUnk) ( (This)->lpVtbl -> GetRangeExceptions(This,riid,ppUnk) )
#define ISyncKnowledge_GetSingleItemExceptions(This,riid,ppUnk) ( (This)->lpVtbl -> GetSingleItemExceptions(This,riid,ppUnk) )
#define ISyncKnowledge_GetChangeUnitExceptions(This,riid,ppUnk) ( (This)->lpVtbl -> GetChangeUnitExceptions(This,riid,ppUnk) )
#define ISyncKnowledge_FindClockVectorForItem(This,pbItemId,riid,ppUnk) ( (This)->lpVtbl -> FindClockVectorForItem(This,pbItemId,riid,ppUnk) )
#define ISyncKnowledge_FindClockVectorForChangeUnit(This,pbItemId,pbChangeUnitId,riid,ppUnk) ( (This)->lpVtbl -> FindClockVectorForChangeUnit(This,pbItemId,pbChangeUnitId,riid,ppUnk) )
#define ISyncKnowledge_GetVersion(This,pdwVersion) ( (This)->lpVtbl -> GetVersion(This,pdwVersion) )
#endif
#endif
#ifndef __IForgottenKnowledge_INTERFACE_DEFINED__
#define __IForgottenKnowledge_INTERFACE_DEFINED__
extern const IID IID_IForgottenKnowledge;
typedef struct IForgottenKnowledgeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IForgottenKnowledge * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IForgottenKnowledge * This);
	ULONG(STDMETHODCALLTYPE * Release) (IForgottenKnowledge * This);
	HRESULT(STDMETHODCALLTYPE * GetOwnerReplicaId) (IForgottenKnowledge * This, BYTE * pbReplicaId, DWORD * pcbIdSize);
	HRESULT(STDMETHODCALLTYPE * Serialize) (IForgottenKnowledge * This, BOOL fSerializeReplicaKeyMap, BYTE * pbKnowledge, DWORD * pcbKnowledge);
	HRESULT(STDMETHODCALLTYPE * SetLocalTickCount) (IForgottenKnowledge * This, ULONGLONG ullTickCount);
	HRESULT(STDMETHODCALLTYPE * ContainsChange) (IForgottenKnowledge * This, const BYTE * pbVersionOwnerReplicaId, const BYTE * pgidItemId, const SYNC_VERSION * pSyncVersion);
	HRESULT(STDMETHODCALLTYPE * ContainsChangeUnit) (IForgottenKnowledge * This, const BYTE * pbVersionOwnerReplicaId, const BYTE * pbItemId, const BYTE * pbChangeUnitId, const SYNC_VERSION * pSyncVersion);
	HRESULT(STDMETHODCALLTYPE * GetScopeVector) (IForgottenKnowledge * This, REFIID riid, void **ppUnk);
	HRESULT(STDMETHODCALLTYPE * GetReplicaKeyMap) (IForgottenKnowledge * This, IReplicaKeyMap ** ppReplicaKeyMap);
	HRESULT(STDMETHODCALLTYPE * Clone) (IForgottenKnowledge * This, ISyncKnowledge ** ppClonedKnowledge);
	HRESULT(STDMETHODCALLTYPE * ConvertVersion) (IForgottenKnowledge * This, ISyncKnowledge * pKnowledgeIn, const BYTE * pbCurrentOwnerId, const SYNC_VERSION * pVersionIn, BYTE * pbNewOwnerId, DWORD * pcbIdSize, SYNC_VERSION * pVersionOut);
	HRESULT(STDMETHODCALLTYPE * MapRemoteToLocal) (IForgottenKnowledge * This, ISyncKnowledge * pRemoteKnowledge, ISyncKnowledge ** ppMappedKnowledge);
	HRESULT(STDMETHODCALLTYPE * Union) (IForgottenKnowledge * This, ISyncKnowledge * pKnowledge);
	HRESULT(STDMETHODCALLTYPE * ProjectOntoItem) (IForgottenKnowledge * This, const BYTE * pbItemId, ISyncKnowledge ** ppKnowledgeOut);
	HRESULT(STDMETHODCALLTYPE * ProjectOntoChangeUnit) (IForgottenKnowledge * This, const BYTE * pbItemId, const BYTE * pbChangeUnitId, ISyncKnowledge ** ppKnowledgeOut);
	HRESULT(STDMETHODCALLTYPE * ProjectOntoRange) (IForgottenKnowledge * This, const SYNC_RANGE * psrngSyncRange, ISyncKnowledge ** ppKnowledgeOut);
	HRESULT(STDMETHODCALLTYPE * ExcludeItem) (IForgottenKnowledge * This, const BYTE * pbItemId);
	HRESULT(STDMETHODCALLTYPE * ExcludeChangeUnit) (IForgottenKnowledge * This, const BYTE * pbItemId, const BYTE * pbChangeUnitId);
	HRESULT(STDMETHODCALLTYPE * ContainsKnowledge) (IForgottenKnowledge * This, ISyncKnowledge * pKnowledge);
	HRESULT(STDMETHODCALLTYPE * FindMinTickCountForReplica) (IForgottenKnowledge * This, const BYTE * pbReplicaId, ULONGLONG * pullReplicaTickCount);
	HRESULT(STDMETHODCALLTYPE * GetRangeExceptions) (IForgottenKnowledge * This, REFIID riid, void **ppUnk);
	HRESULT(STDMETHODCALLTYPE * GetSingleItemExceptions) (IForgottenKnowledge * This, REFIID riid, void **ppUnk);
	HRESULT(STDMETHODCALLTYPE * GetChangeUnitExceptions) (IForgottenKnowledge * This, REFIID riid, void **ppUnk);
	HRESULT(STDMETHODCALLTYPE * FindClockVectorForItem) (IForgottenKnowledge * This, const BYTE * pbItemId, REFIID riid, void **ppUnk);
	HRESULT(STDMETHODCALLTYPE * FindClockVectorForChangeUnit) (IForgottenKnowledge * This, const BYTE * pbItemId, const BYTE * pbChangeUnitId, REFIID riid, void **ppUnk);
	HRESULT(STDMETHODCALLTYPE * GetVersion) (IForgottenKnowledge * This, DWORD * pdwVersion);
	HRESULT(STDMETHODCALLTYPE * ForgetToVersion) (IForgottenKnowledge * This, ISyncKnowledge * pKnowledge, const SYNC_VERSION * pVersion);
	END_INTERFACE
}  IForgottenKnowledgeVtbl;
interface IForgottenKnowledge
{
	CONST_VTBL struct IForgottenKnowledgeVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IForgottenKnowledge_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IForgottenKnowledge_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IForgottenKnowledge_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IForgottenKnowledge_GetOwnerReplicaId(This,pbReplicaId,pcbIdSize) ( (This)->lpVtbl -> GetOwnerReplicaId(This,pbReplicaId,pcbIdSize) )
#define IForgottenKnowledge_Serialize(This,fSerializeReplicaKeyMap,pbKnowledge,pcbKnowledge) ( (This)->lpVtbl -> Serialize(This,fSerializeReplicaKeyMap,pbKnowledge,pcbKnowledge) )
#define IForgottenKnowledge_SetLocalTickCount(This,ullTickCount) ( (This)->lpVtbl -> SetLocalTickCount(This,ullTickCount) )
#define IForgottenKnowledge_ContainsChange(This,pbVersionOwnerReplicaId,pgidItemId,pSyncVersion) ( (This)->lpVtbl -> ContainsChange(This,pbVersionOwnerReplicaId,pgidItemId,pSyncVersion) )
#define IForgottenKnowledge_ContainsChangeUnit(This,pbVersionOwnerReplicaId,pbItemId,pbChangeUnitId,pSyncVersion) ( (This)->lpVtbl -> ContainsChangeUnit(This,pbVersionOwnerReplicaId,pbItemId,pbChangeUnitId,pSyncVersion) )
#define IForgottenKnowledge_GetScopeVector(This,riid,ppUnk) ( (This)->lpVtbl -> GetScopeVector(This,riid,ppUnk) )
#define IForgottenKnowledge_GetReplicaKeyMap(This,ppReplicaKeyMap) ( (This)->lpVtbl -> GetReplicaKeyMap(This,ppReplicaKeyMap) )
#define IForgottenKnowledge_Clone(This,ppClonedKnowledge) ( (This)->lpVtbl -> Clone(This,ppClonedKnowledge) )
#define IForgottenKnowledge_ConvertVersion(This,pKnowledgeIn,pbCurrentOwnerId,pVersionIn,pbNewOwnerId,pcbIdSize,pVersionOut) ( (This)->lpVtbl -> ConvertVersion(This,pKnowledgeIn,pbCurrentOwnerId,pVersionIn,pbNewOwnerId,pcbIdSize,pVersionOut) )
#define IForgottenKnowledge_MapRemoteToLocal(This,pRemoteKnowledge,ppMappedKnowledge) ( (This)->lpVtbl -> MapRemoteToLocal(This,pRemoteKnowledge,ppMappedKnowledge) )
#define IForgottenKnowledge_Union(This,pKnowledge) ( (This)->lpVtbl -> Union(This,pKnowledge) )
#define IForgottenKnowledge_ProjectOntoItem(This,pbItemId,ppKnowledgeOut) ( (This)->lpVtbl -> ProjectOntoItem(This,pbItemId,ppKnowledgeOut) )
#define IForgottenKnowledge_ProjectOntoChangeUnit(This,pbItemId,pbChangeUnitId,ppKnowledgeOut) ( (This)->lpVtbl -> ProjectOntoChangeUnit(This,pbItemId,pbChangeUnitId,ppKnowledgeOut) )
#define IForgottenKnowledge_ProjectOntoRange(This,psrngSyncRange,ppKnowledgeOut) ( (This)->lpVtbl -> ProjectOntoRange(This,psrngSyncRange,ppKnowledgeOut) )
#define IForgottenKnowledge_ExcludeItem(This,pbItemId) ( (This)->lpVtbl -> ExcludeItem(This,pbItemId) )
#define IForgottenKnowledge_ExcludeChangeUnit(This,pbItemId,pbChangeUnitId) ( (This)->lpVtbl -> ExcludeChangeUnit(This,pbItemId,pbChangeUnitId) )
#define IForgottenKnowledge_ContainsKnowledge(This,pKnowledge) ( (This)->lpVtbl -> ContainsKnowledge(This,pKnowledge) )
#define IForgottenKnowledge_FindMinTickCountForReplica(This,pbReplicaId,pullReplicaTickCount) ( (This)->lpVtbl -> FindMinTickCountForReplica(This,pbReplicaId,pullReplicaTickCount) )
#define IForgottenKnowledge_GetRangeExceptions(This,riid,ppUnk) ( (This)->lpVtbl -> GetRangeExceptions(This,riid,ppUnk) )
#define IForgottenKnowledge_GetSingleItemExceptions(This,riid,ppUnk) ( (This)->lpVtbl -> GetSingleItemExceptions(This,riid,ppUnk) )
#define IForgottenKnowledge_GetChangeUnitExceptions(This,riid,ppUnk) ( (This)->lpVtbl -> GetChangeUnitExceptions(This,riid,ppUnk) )
#define IForgottenKnowledge_FindClockVectorForItem(This,pbItemId,riid,ppUnk) ( (This)->lpVtbl -> FindClockVectorForItem(This,pbItemId,riid,ppUnk) )
#define IForgottenKnowledge_FindClockVectorForChangeUnit(This,pbItemId,pbChangeUnitId,riid,ppUnk) ( (This)->lpVtbl -> FindClockVectorForChangeUnit(This,pbItemId,pbChangeUnitId,riid,ppUnk) )
#define IForgottenKnowledge_GetVersion(This,pdwVersion) ( (This)->lpVtbl -> GetVersion(This,pdwVersion) )
#define IForgottenKnowledge_ForgetToVersion(This,pKnowledge,pVersion) ( (This)->lpVtbl -> ForgetToVersion(This,pKnowledge,pVersion) )
#endif
#endif
#define SYNC_SERIALIZE_REPLICA_KEY_MAP                 0x00000001
extern RPC_IF_HANDLE __MIDL_itf_winsync_0000_0018_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_winsync_0000_0018_v0_0_s_ifspec;
#ifndef __ISyncKnowledge2_INTERFACE_DEFINED__
#define __ISyncKnowledge2_INTERFACE_DEFINED__
extern const IID IID_ISyncKnowledge2;
typedef struct ISyncKnowledge2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISyncKnowledge2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISyncKnowledge2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISyncKnowledge2 * This);
	HRESULT(STDMETHODCALLTYPE * GetOwnerReplicaId) (ISyncKnowledge2 * This, BYTE * pbReplicaId, DWORD * pcbIdSize);
	HRESULT(STDMETHODCALLTYPE * Serialize) (ISyncKnowledge2 * This, BOOL fSerializeReplicaKeyMap, BYTE * pbKnowledge, DWORD * pcbKnowledge);
	HRESULT(STDMETHODCALLTYPE * SetLocalTickCount) (ISyncKnowledge2 * This, ULONGLONG ullTickCount);
	HRESULT(STDMETHODCALLTYPE * ContainsChange) (ISyncKnowledge2 * This, const BYTE * pbVersionOwnerReplicaId, const BYTE * pgidItemId, const SYNC_VERSION * pSyncVersion);
	HRESULT(STDMETHODCALLTYPE * ContainsChangeUnit) (ISyncKnowledge2 * This, const BYTE * pbVersionOwnerReplicaId, const BYTE * pbItemId, const BYTE * pbChangeUnitId, const SYNC_VERSION * pSyncVersion);
	HRESULT(STDMETHODCALLTYPE * GetScopeVector) (ISyncKnowledge2 * This, REFIID riid, void **ppUnk);
	HRESULT(STDMETHODCALLTYPE * GetReplicaKeyMap) (ISyncKnowledge2 * This, IReplicaKeyMap ** ppReplicaKeyMap);
	HRESULT(STDMETHODCALLTYPE * Clone) (ISyncKnowledge2 * This, ISyncKnowledge ** ppClonedKnowledge);
	HRESULT(STDMETHODCALLTYPE * ConvertVersion) (ISyncKnowledge2 * This, ISyncKnowledge * pKnowledgeIn, const BYTE * pbCurrentOwnerId, const SYNC_VERSION * pVersionIn, BYTE * pbNewOwnerId, DWORD * pcbIdSize, SYNC_VERSION * pVersionOut);
	HRESULT(STDMETHODCALLTYPE * MapRemoteToLocal) (ISyncKnowledge2 * This, ISyncKnowledge * pRemoteKnowledge, ISyncKnowledge ** ppMappedKnowledge);
	HRESULT(STDMETHODCALLTYPE * Union) (ISyncKnowledge2 * This, ISyncKnowledge * pKnowledge);
	HRESULT(STDMETHODCALLTYPE * ProjectOntoItem) (ISyncKnowledge2 * This, const BYTE * pbItemId, ISyncKnowledge ** ppKnowledgeOut);
	HRESULT(STDMETHODCALLTYPE * ProjectOntoChangeUnit) (ISyncKnowledge2 * This, const BYTE * pbItemId, const BYTE * pbChangeUnitId, ISyncKnowledge ** ppKnowledgeOut);
	HRESULT(STDMETHODCALLTYPE * ProjectOntoRange) (ISyncKnowledge2 * This, const SYNC_RANGE * psrngSyncRange, ISyncKnowledge ** ppKnowledgeOut);
	HRESULT(STDMETHODCALLTYPE * ExcludeItem) (ISyncKnowledge2 * This, const BYTE * pbItemId);
	HRESULT(STDMETHODCALLTYPE * ExcludeChangeUnit) (ISyncKnowledge2 * This, const BYTE * pbItemId, const BYTE * pbChangeUnitId);
	HRESULT(STDMETHODCALLTYPE * ContainsKnowledge) (ISyncKnowledge2 * This, ISyncKnowledge * pKnowledge);
	HRESULT(STDMETHODCALLTYPE * FindMinTickCountForReplica) (ISyncKnowledge2 * This, const BYTE * pbReplicaId, ULONGLONG * pullReplicaTickCount);
	HRESULT(STDMETHODCALLTYPE * GetRangeExceptions) (ISyncKnowledge2 * This, REFIID riid, void **ppUnk);
	HRESULT(STDMETHODCALLTYPE * GetSingleItemExceptions) (ISyncKnowledge2 * This, REFIID riid, void **ppUnk);
	HRESULT(STDMETHODCALLTYPE * GetChangeUnitExceptions) (ISyncKnowledge2 * This, REFIID riid, void **ppUnk);
	HRESULT(STDMETHODCALLTYPE * FindClockVectorForItem) (ISyncKnowledge2 * This, const BYTE * pbItemId, REFIID riid, void **ppUnk);
	HRESULT(STDMETHODCALLTYPE * FindClockVectorForChangeUnit) (ISyncKnowledge2 * This, const BYTE * pbItemId, const BYTE * pbChangeUnitId, REFIID riid, void **ppUnk);
	HRESULT(STDMETHODCALLTYPE * GetVersion) (ISyncKnowledge2 * This, DWORD * pdwVersion);
	HRESULT(STDMETHODCALLTYPE * GetIdParameters) (ISyncKnowledge2 * This, ID_PARAMETERS * pIdParameters);
	HRESULT(STDMETHODCALLTYPE * ProjectOntoColumnSet) (ISyncKnowledge2 * This, const BYTE ** ppColumns, DWORD count, ISyncKnowledge2 ** ppiKnowledgeOut);
	HRESULT(STDMETHODCALLTYPE * SerializeWithOptions) (ISyncKnowledge2 * This, SYNC_SERIALIZATION_VERSION targetFormatVersion, DWORD dwFlags, BYTE * pbBuffer, DWORD * pdwSerializedSize);
	HRESULT(STDMETHODCALLTYPE * GetLowestUncontainedId) (ISyncKnowledge2 * This, ISyncKnowledge2 * piSyncKnowledge, BYTE * pbItemId, DWORD * pcbItemIdSize);
	HRESULT(STDMETHODCALLTYPE * GetInspector) (ISyncKnowledge2 * This, REFIID riid, void **ppiInspector);
	HRESULT(STDMETHODCALLTYPE * GetMinimumSupportedVersion) (ISyncKnowledge2 * This, SYNC_SERIALIZATION_VERSION * pVersion);
	HRESULT(STDMETHODCALLTYPE * GetStatistics) (ISyncKnowledge2 * This, SYNC_STATISTICS which, DWORD * pValue);
	HRESULT(STDMETHODCALLTYPE * ContainsKnowledgeForItem) (ISyncKnowledge2 * This, ISyncKnowledge * pKnowledge, const BYTE * pbItemId);
	HRESULT(STDMETHODCALLTYPE * ContainsKnowledgeForChangeUnit) (ISyncKnowledge2 * This, ISyncKnowledge * pKnowledge, const BYTE * pbItemId, const BYTE * pbChangeUnitId);
	HRESULT(STDMETHODCALLTYPE * ProjectOntoKnowledgeWithPrerequisite) (ISyncKnowledge2 * This, ISyncKnowledge * pPrerequisiteKnowledge, ISyncKnowledge * pTemplateKnowledge, ISyncKnowledge ** ppProjectedKnowledge);
	HRESULT(STDMETHODCALLTYPE * Complement) (ISyncKnowledge2 * This, ISyncKnowledge * pSyncKnowledge, ISyncKnowledge ** ppComplementedKnowledge);
	HRESULT(STDMETHODCALLTYPE * IntersectsWithKnowledge) (ISyncKnowledge2 * This, ISyncKnowledge * pSyncKnowledge);
	HRESULT(STDMETHODCALLTYPE * GetKnowledgeCookie) (ISyncKnowledge2 * This, IUnknown ** ppKnowledgeCookie);
	HRESULT(STDMETHODCALLTYPE * CompareToKnowledgeCookie) (ISyncKnowledge2 * This, IUnknown * pKnowledgeCookie, KNOWLEDGE_COOKIE_COMPARISON_RESULT * pResult);
	END_INTERFACE
}  ISyncKnowledge2Vtbl;
interface ISyncKnowledge2
{
	CONST_VTBL struct ISyncKnowledge2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISyncKnowledge2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISyncKnowledge2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISyncKnowledge2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISyncKnowledge2_GetOwnerReplicaId(This,pbReplicaId,pcbIdSize) ( (This)->lpVtbl -> GetOwnerReplicaId(This,pbReplicaId,pcbIdSize) )
#define ISyncKnowledge2_Serialize(This,fSerializeReplicaKeyMap,pbKnowledge,pcbKnowledge) ( (This)->lpVtbl -> Serialize(This,fSerializeReplicaKeyMap,pbKnowledge,pcbKnowledge) )
#define ISyncKnowledge2_SetLocalTickCount(This,ullTickCount) ( (This)->lpVtbl -> SetLocalTickCount(This,ullTickCount) )
#define ISyncKnowledge2_ContainsChange(This,pbVersionOwnerReplicaId,pgidItemId,pSyncVersion) ( (This)->lpVtbl -> ContainsChange(This,pbVersionOwnerReplicaId,pgidItemId,pSyncVersion) )
#define ISyncKnowledge2_ContainsChangeUnit(This,pbVersionOwnerReplicaId,pbItemId,pbChangeUnitId,pSyncVersion) ( (This)->lpVtbl -> ContainsChangeUnit(This,pbVersionOwnerReplicaId,pbItemId,pbChangeUnitId,pSyncVersion) )
#define ISyncKnowledge2_GetScopeVector(This,riid,ppUnk) ( (This)->lpVtbl -> GetScopeVector(This,riid,ppUnk) )
#define ISyncKnowledge2_GetReplicaKeyMap(This,ppReplicaKeyMap) ( (This)->lpVtbl -> GetReplicaKeyMap(This,ppReplicaKeyMap) )
#define ISyncKnowledge2_Clone(This,ppClonedKnowledge) ( (This)->lpVtbl -> Clone(This,ppClonedKnowledge) )
#define ISyncKnowledge2_ConvertVersion(This,pKnowledgeIn,pbCurrentOwnerId,pVersionIn,pbNewOwnerId,pcbIdSize,pVersionOut) ( (This)->lpVtbl -> ConvertVersion(This,pKnowledgeIn,pbCurrentOwnerId,pVersionIn,pbNewOwnerId,pcbIdSize,pVersionOut) )
#define ISyncKnowledge2_MapRemoteToLocal(This,pRemoteKnowledge,ppMappedKnowledge) ( (This)->lpVtbl -> MapRemoteToLocal(This,pRemoteKnowledge,ppMappedKnowledge) )
#define ISyncKnowledge2_Union(This,pKnowledge) ( (This)->lpVtbl -> Union(This,pKnowledge) )
#define ISyncKnowledge2_ProjectOntoItem(This,pbItemId,ppKnowledgeOut) ( (This)->lpVtbl -> ProjectOntoItem(This,pbItemId,ppKnowledgeOut) )
#define ISyncKnowledge2_ProjectOntoChangeUnit(This,pbItemId,pbChangeUnitId,ppKnowledgeOut) ( (This)->lpVtbl -> ProjectOntoChangeUnit(This,pbItemId,pbChangeUnitId,ppKnowledgeOut) )
#define ISyncKnowledge2_ProjectOntoRange(This,psrngSyncRange,ppKnowledgeOut) ( (This)->lpVtbl -> ProjectOntoRange(This,psrngSyncRange,ppKnowledgeOut) )
#define ISyncKnowledge2_ExcludeItem(This,pbItemId) ( (This)->lpVtbl -> ExcludeItem(This,pbItemId) )
#define ISyncKnowledge2_ExcludeChangeUnit(This,pbItemId,pbChangeUnitId) ( (This)->lpVtbl -> ExcludeChangeUnit(This,pbItemId,pbChangeUnitId) )
#define ISyncKnowledge2_ContainsKnowledge(This,pKnowledge) ( (This)->lpVtbl -> ContainsKnowledge(This,pKnowledge) )
#define ISyncKnowledge2_FindMinTickCountForReplica(This,pbReplicaId,pullReplicaTickCount) ( (This)->lpVtbl -> FindMinTickCountForReplica(This,pbReplicaId,pullReplicaTickCount) )
#define ISyncKnowledge2_GetRangeExceptions(This,riid,ppUnk) ( (This)->lpVtbl -> GetRangeExceptions(This,riid,ppUnk) )
#define ISyncKnowledge2_GetSingleItemExceptions(This,riid,ppUnk) ( (This)->lpVtbl -> GetSingleItemExceptions(This,riid,ppUnk) )
#define ISyncKnowledge2_GetChangeUnitExceptions(This,riid,ppUnk) ( (This)->lpVtbl -> GetChangeUnitExceptions(This,riid,ppUnk) )
#define ISyncKnowledge2_FindClockVectorForItem(This,pbItemId,riid,ppUnk) ( (This)->lpVtbl -> FindClockVectorForItem(This,pbItemId,riid,ppUnk) )
#define ISyncKnowledge2_FindClockVectorForChangeUnit(This,pbItemId,pbChangeUnitId,riid,ppUnk) ( (This)->lpVtbl -> FindClockVectorForChangeUnit(This,pbItemId,pbChangeUnitId,riid,ppUnk) )
#define ISyncKnowledge2_GetVersion(This,pdwVersion) ( (This)->lpVtbl -> GetVersion(This,pdwVersion) )
#define ISyncKnowledge2_GetIdParameters(This,pIdParameters) ( (This)->lpVtbl -> GetIdParameters(This,pIdParameters) )
#define ISyncKnowledge2_ProjectOntoColumnSet(This,ppColumns,count,ppiKnowledgeOut) ( (This)->lpVtbl -> ProjectOntoColumnSet(This,ppColumns,count,ppiKnowledgeOut) )
#define ISyncKnowledge2_SerializeWithOptions(This,targetFormatVersion,dwFlags,pbBuffer,pdwSerializedSize) ( (This)->lpVtbl -> SerializeWithOptions(This,targetFormatVersion,dwFlags,pbBuffer,pdwSerializedSize) )
#define ISyncKnowledge2_GetLowestUncontainedId(This,piSyncKnowledge,pbItemId,pcbItemIdSize) ( (This)->lpVtbl -> GetLowestUncontainedId(This,piSyncKnowledge,pbItemId,pcbItemIdSize) )
#define ISyncKnowledge2_GetInspector(This,riid,ppiInspector) ( (This)->lpVtbl -> GetInspector(This,riid,ppiInspector) )
#define ISyncKnowledge2_GetMinimumSupportedVersion(This,pVersion) ( (This)->lpVtbl -> GetMinimumSupportedVersion(This,pVersion) )
#define ISyncKnowledge2_GetStatistics(This,which,pValue) ( (This)->lpVtbl -> GetStatistics(This,which,pValue) )
#define ISyncKnowledge2_ContainsKnowledgeForItem(This,pKnowledge,pbItemId) ( (This)->lpVtbl -> ContainsKnowledgeForItem(This,pKnowledge,pbItemId) )
#define ISyncKnowledge2_ContainsKnowledgeForChangeUnit(This,pKnowledge,pbItemId,pbChangeUnitId) ( (This)->lpVtbl -> ContainsKnowledgeForChangeUnit(This,pKnowledge,pbItemId,pbChangeUnitId) )
#define ISyncKnowledge2_ProjectOntoKnowledgeWithPrerequisite(This,pPrerequisiteKnowledge,pTemplateKnowledge,ppProjectedKnowledge) ( (This)->lpVtbl -> ProjectOntoKnowledgeWithPrerequisite(This,pPrerequisiteKnowledge,pTemplateKnowledge,ppProjectedKnowledge) )
#define ISyncKnowledge2_Complement(This,pSyncKnowledge,ppComplementedKnowledge) ( (This)->lpVtbl -> Complement(This,pSyncKnowledge,ppComplementedKnowledge) )
#define ISyncKnowledge2_IntersectsWithKnowledge(This,pSyncKnowledge) ( (This)->lpVtbl -> IntersectsWithKnowledge(This,pSyncKnowledge) )
#define ISyncKnowledge2_GetKnowledgeCookie(This,ppKnowledgeCookie) ( (This)->lpVtbl -> GetKnowledgeCookie(This,ppKnowledgeCookie) )
#define ISyncKnowledge2_CompareToKnowledgeCookie(This,pKnowledgeCookie,pResult) ( (This)->lpVtbl -> CompareToKnowledgeCookie(This,pKnowledgeCookie,pResult) )
#endif
#endif
#ifndef __IRecoverableErrorData_INTERFACE_DEFINED__
#define __IRecoverableErrorData_INTERFACE_DEFINED__
extern const IID IID_IRecoverableErrorData;
typedef struct IRecoverableErrorDataVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRecoverableErrorData * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRecoverableErrorData * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRecoverableErrorData * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IRecoverableErrorData * This, LPCWSTR pcszItemDisplayName, LPCWSTR pcszErrorDescription);
	HRESULT(STDMETHODCALLTYPE * GetItemDisplayName) (IRecoverableErrorData * This, LPWSTR pszItemDisplayName, DWORD * pcchItemDisplayName);
	HRESULT(STDMETHODCALLTYPE * GetErrorDescription) (IRecoverableErrorData * This, LPWSTR pszErrorDescription, DWORD * pcchErrorDescription);
	END_INTERFACE
}  IRecoverableErrorDataVtbl;
interface IRecoverableErrorData
{
	CONST_VTBL struct IRecoverableErrorDataVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRecoverableErrorData_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRecoverableErrorData_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRecoverableErrorData_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRecoverableErrorData_Initialize(This,pcszItemDisplayName,pcszErrorDescription) ( (This)->lpVtbl -> Initialize(This,pcszItemDisplayName,pcszErrorDescription) )
#define IRecoverableErrorData_GetItemDisplayName(This,pszItemDisplayName,pcchItemDisplayName) ( (This)->lpVtbl -> GetItemDisplayName(This,pszItemDisplayName,pcchItemDisplayName) )
#define IRecoverableErrorData_GetErrorDescription(This,pszErrorDescription,pcchErrorDescription) ( (This)->lpVtbl -> GetErrorDescription(This,pszErrorDescription,pcchErrorDescription) )
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_winsync_0000_0020_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_winsync_0000_0020_v0_0_s_ifspec;
#ifndef __IRecoverableError_INTERFACE_DEFINED__
#define __IRecoverableError_INTERFACE_DEFINED__
extern const IID IID_IRecoverableError;
typedef struct IRecoverableErrorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRecoverableError * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRecoverableError * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRecoverableError * This);
	HRESULT(STDMETHODCALLTYPE * GetStage) (IRecoverableError * This, SYNC_PROGRESS_STAGE * pStage);
	HRESULT(STDMETHODCALLTYPE * GetProvider) (IRecoverableError * This, SYNC_PROVIDER_ROLE * pProviderRole);
	HRESULT(STDMETHODCALLTYPE * GetChangeWithRecoverableError) (IRecoverableError * This, ISyncChange ** ppChangeWithRecoverableError);
	HRESULT(STDMETHODCALLTYPE * GetRecoverableErrorDataForChange) (IRecoverableError * This, HRESULT * phrError, IRecoverableErrorData ** ppErrorData);
	HRESULT(STDMETHODCALLTYPE * GetRecoverableErrorDataForChangeUnit) (IRecoverableError * This, ISyncChangeUnit * pChangeUnit, HRESULT * phrError, IRecoverableErrorData ** ppErrorData);
	END_INTERFACE
}  IRecoverableErrorVtbl;
interface IRecoverableError
{
	CONST_VTBL struct IRecoverableErrorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRecoverableError_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRecoverableError_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRecoverableError_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRecoverableError_GetStage(This,pStage) ( (This)->lpVtbl -> GetStage(This,pStage) )
#define IRecoverableError_GetProvider(This,pProviderRole) ( (This)->lpVtbl -> GetProvider(This,pProviderRole) )
#define IRecoverableError_GetChangeWithRecoverableError(This,ppChangeWithRecoverableError) ( (This)->lpVtbl -> GetChangeWithRecoverableError(This,ppChangeWithRecoverableError) )
#define IRecoverableError_GetRecoverableErrorDataForChange(This,phrError,ppErrorData) ( (This)->lpVtbl -> GetRecoverableErrorDataForChange(This,phrError,ppErrorData) )
#define IRecoverableError_GetRecoverableErrorDataForChangeUnit(This,pChangeUnit,phrError,ppErrorData) ( (This)->lpVtbl -> GetRecoverableErrorDataForChangeUnit(This,pChangeUnit,phrError,ppErrorData) )
#endif
#endif
#ifndef __IChangeConflict_INTERFACE_DEFINED__
#define __IChangeConflict_INTERFACE_DEFINED__
extern const IID IID_IChangeConflict;
typedef struct IChangeConflictVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IChangeConflict * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IChangeConflict * This);
	ULONG(STDMETHODCALLTYPE * Release) (IChangeConflict * This);
	HRESULT(STDMETHODCALLTYPE * GetDestinationProviderConflictingChange) (IChangeConflict * This, ISyncChange ** ppConflictingChange);
	HRESULT(STDMETHODCALLTYPE * GetSourceProviderConflictingChange) (IChangeConflict * This, ISyncChange ** ppConflictingChange);
	HRESULT(STDMETHODCALLTYPE * GetDestinationProviderConflictingData) (IChangeConflict * This, IUnknown ** ppConflictingData);
	HRESULT(STDMETHODCALLTYPE * GetSourceProviderConflictingData) (IChangeConflict * This, IUnknown ** ppConflictingData);
	HRESULT(STDMETHODCALLTYPE * GetResolveActionForChange) (IChangeConflict * This, SYNC_RESOLVE_ACTION * pResolveAction);
	HRESULT(STDMETHODCALLTYPE * SetResolveActionForChange) (IChangeConflict * This, SYNC_RESOLVE_ACTION resolveAction);
	HRESULT(STDMETHODCALLTYPE * GetResolveActionForChangeUnit) (IChangeConflict * This, ISyncChangeUnit * pChangeUnit, SYNC_RESOLVE_ACTION * pResolveAction);
	HRESULT(STDMETHODCALLTYPE * SetResolveActionForChangeUnit) (IChangeConflict * This, ISyncChangeUnit * pChangeUnit, SYNC_RESOLVE_ACTION resolveAction);
	END_INTERFACE
}  IChangeConflictVtbl;
interface IChangeConflict
{
	CONST_VTBL struct IChangeConflictVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IChangeConflict_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IChangeConflict_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IChangeConflict_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IChangeConflict_GetDestinationProviderConflictingChange(This,ppConflictingChange) ( (This)->lpVtbl -> GetDestinationProviderConflictingChange(This,ppConflictingChange) )
#define IChangeConflict_GetSourceProviderConflictingChange(This,ppConflictingChange) ( (This)->lpVtbl -> GetSourceProviderConflictingChange(This,ppConflictingChange) )
#define IChangeConflict_GetDestinationProviderConflictingData(This,ppConflictingData) ( (This)->lpVtbl -> GetDestinationProviderConflictingData(This,ppConflictingData) )
#define IChangeConflict_GetSourceProviderConflictingData(This,ppConflictingData) ( (This)->lpVtbl -> GetSourceProviderConflictingData(This,ppConflictingData) )
#define IChangeConflict_GetResolveActionForChange(This,pResolveAction) ( (This)->lpVtbl -> GetResolveActionForChange(This,pResolveAction) )
#define IChangeConflict_SetResolveActionForChange(This,resolveAction) ( (This)->lpVtbl -> SetResolveActionForChange(This,resolveAction) )
#define IChangeConflict_GetResolveActionForChangeUnit(This,pChangeUnit,pResolveAction) ( (This)->lpVtbl -> GetResolveActionForChangeUnit(This,pChangeUnit,pResolveAction) )
#define IChangeConflict_SetResolveActionForChangeUnit(This,pChangeUnit,resolveAction) ( (This)->lpVtbl -> SetResolveActionForChangeUnit(This,pChangeUnit,resolveAction) )
#endif
#endif
#ifndef __ISyncCallback_INTERFACE_DEFINED__
#define __ISyncCallback_INTERFACE_DEFINED__
extern const IID IID_ISyncCallback;
typedef struct ISyncCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISyncCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISyncCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISyncCallback * This);
	HRESULT(STDMETHODCALLTYPE * OnProgress) (ISyncCallback * This, SYNC_PROVIDER_ROLE provider, SYNC_PROGRESS_STAGE syncStage, DWORD dwCompletedWork, DWORD dwTotalWork);
	HRESULT(STDMETHODCALLTYPE * OnChange) (ISyncCallback * This, ISyncChange * pSyncChange);
	HRESULT(STDMETHODCALLTYPE * OnConflict) (ISyncCallback * This, IChangeConflict * pConflict);
	HRESULT(STDMETHODCALLTYPE * OnFullEnumerationNeeded) (ISyncCallback * This, SYNC_FULL_ENUMERATION_ACTION * pFullEnumerationAction);
	HRESULT(STDMETHODCALLTYPE * OnRecoverableError) (ISyncCallback * This, IRecoverableError * pRecoverableError);
	END_INTERFACE
}  ISyncCallbackVtbl;
interface ISyncCallback
{
	CONST_VTBL struct ISyncCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISyncCallback_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISyncCallback_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISyncCallback_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISyncCallback_OnProgress(This,provider,syncStage,dwCompletedWork,dwTotalWork) ( (This)->lpVtbl -> OnProgress(This,provider,syncStage,dwCompletedWork,dwTotalWork) )
#define ISyncCallback_OnChange(This,pSyncChange) ( (This)->lpVtbl -> OnChange(This,pSyncChange) )
#define ISyncCallback_OnConflict(This,pConflict) ( (This)->lpVtbl -> OnConflict(This,pConflict) )
#define ISyncCallback_OnFullEnumerationNeeded(This,pFullEnumerationAction) ( (This)->lpVtbl -> OnFullEnumerationNeeded(This,pFullEnumerationAction) )
#define ISyncCallback_OnRecoverableError(This,pRecoverableError) ( (This)->lpVtbl -> OnRecoverableError(This,pRecoverableError) )
#endif
#endif
#ifndef __ISyncCallback2_INTERFACE_DEFINED__
#define __ISyncCallback2_INTERFACE_DEFINED__
extern const IID IID_ISyncCallback2;
typedef struct ISyncCallback2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISyncCallback2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISyncCallback2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISyncCallback2 * This);
	HRESULT(STDMETHODCALLTYPE * OnProgress) (ISyncCallback2 * This, SYNC_PROVIDER_ROLE provider, SYNC_PROGRESS_STAGE syncStage, DWORD dwCompletedWork, DWORD dwTotalWork);
	HRESULT(STDMETHODCALLTYPE * OnChange) (ISyncCallback2 * This, ISyncChange * pSyncChange);
	HRESULT(STDMETHODCALLTYPE * OnConflict) (ISyncCallback2 * This, IChangeConflict * pConflict);
	HRESULT(STDMETHODCALLTYPE * OnFullEnumerationNeeded) (ISyncCallback2 * This, SYNC_FULL_ENUMERATION_ACTION * pFullEnumerationAction);
	HRESULT(STDMETHODCALLTYPE * OnRecoverableError) (ISyncCallback2 * This, IRecoverableError * pRecoverableError);
	HRESULT(STDMETHODCALLTYPE * OnChangeApplied) (ISyncCallback2 * This, DWORD dwChangesApplied, DWORD dwChangesFailed);
	HRESULT(STDMETHODCALLTYPE * OnChangeFailed) (ISyncCallback2 * This, DWORD dwChangesApplied, DWORD dwChangesFailed);
	END_INTERFACE
}  ISyncCallback2Vtbl;
interface ISyncCallback2
{
	CONST_VTBL struct ISyncCallback2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISyncCallback2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISyncCallback2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISyncCallback2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISyncCallback2_OnProgress(This,provider,syncStage,dwCompletedWork,dwTotalWork) ( (This)->lpVtbl -> OnProgress(This,provider,syncStage,dwCompletedWork,dwTotalWork) )
#define ISyncCallback2_OnChange(This,pSyncChange) ( (This)->lpVtbl -> OnChange(This,pSyncChange) )
#define ISyncCallback2_OnConflict(This,pConflict) ( (This)->lpVtbl -> OnConflict(This,pConflict) )
#define ISyncCallback2_OnFullEnumerationNeeded(This,pFullEnumerationAction) ( (This)->lpVtbl -> OnFullEnumerationNeeded(This,pFullEnumerationAction) )
#define ISyncCallback2_OnRecoverableError(This,pRecoverableError) ( (This)->lpVtbl -> OnRecoverableError(This,pRecoverableError) )
#define ISyncCallback2_OnChangeApplied(This,dwChangesApplied,dwChangesFailed) ( (This)->lpVtbl -> OnChangeApplied(This,dwChangesApplied,dwChangesFailed) )
#define ISyncCallback2_OnChangeFailed(This,dwChangesApplied,dwChangesFailed) ( (This)->lpVtbl -> OnChangeFailed(This,dwChangesApplied,dwChangesFailed) )
#endif
#endif
#ifndef __ISyncProvider_INTERFACE_DEFINED__
#define __ISyncProvider_INTERFACE_DEFINED__
extern const IID IID_ISyncProvider;
typedef struct ISyncProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISyncProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISyncProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISyncProvider * This);
	HRESULT(STDMETHODCALLTYPE * GetIdParameters) (ISyncProvider * This, ID_PARAMETERS * pIdParameters);
	END_INTERFACE
}  ISyncProviderVtbl;
interface ISyncProvider
{
	CONST_VTBL struct ISyncProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISyncProvider_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISyncProvider_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISyncProvider_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISyncProvider_GetIdParameters(This,pIdParameters) ( (This)->lpVtbl -> GetIdParameters(This,pIdParameters) )
#endif
#endif
#ifndef __ISyncSessionState_INTERFACE_DEFINED__
#define __ISyncSessionState_INTERFACE_DEFINED__
extern const IID IID_ISyncSessionState;
typedef struct ISyncSessionStateVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISyncSessionState * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISyncSessionState * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISyncSessionState * This);
	HRESULT(STDMETHODCALLTYPE * IsCanceled) (ISyncSessionState * This, BOOL * pfIsCanceled);
	HRESULT(STDMETHODCALLTYPE * GetInfoForChangeApplication) (ISyncSessionState * This, BYTE * pbChangeApplierInfo, DWORD * pcbChangeApplierInfo);
	HRESULT(STDMETHODCALLTYPE * LoadInfoFromChangeApplication) (ISyncSessionState * This, const BYTE * pbChangeApplierInfo, DWORD cbChangeApplierInfo);
	HRESULT(STDMETHODCALLTYPE * GetForgottenKnowledgeRecoveryRangeStart) (ISyncSessionState * This, BYTE * pbRangeStart, DWORD * pcbRangeStart);
	HRESULT(STDMETHODCALLTYPE * GetForgottenKnowledgeRecoveryRangeEnd) (ISyncSessionState * This, BYTE * pbRangeEnd, DWORD * pcbRangeEnd);
	HRESULT(STDMETHODCALLTYPE * SetForgottenKnowledgeRecoveryRange) (ISyncSessionState * This, const SYNC_RANGE * pRange);
	HRESULT(STDMETHODCALLTYPE * OnProgress) (ISyncSessionState * This, SYNC_PROVIDER_ROLE provider, SYNC_PROGRESS_STAGE syncStage, DWORD dwCompletedWork, DWORD dwTotalWork);
	END_INTERFACE
}  ISyncSessionStateVtbl;
interface ISyncSessionState
{
	CONST_VTBL struct ISyncSessionStateVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISyncSessionState_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISyncSessionState_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISyncSessionState_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISyncSessionState_IsCanceled(This,pfIsCanceled) ( (This)->lpVtbl -> IsCanceled(This,pfIsCanceled) )
#define ISyncSessionState_GetInfoForChangeApplication(This,pbChangeApplierInfo,pcbChangeApplierInfo) ( (This)->lpVtbl -> GetInfoForChangeApplication(This,pbChangeApplierInfo,pcbChangeApplierInfo) )
#define ISyncSessionState_LoadInfoFromChangeApplication(This,pbChangeApplierInfo,cbChangeApplierInfo) ( (This)->lpVtbl -> LoadInfoFromChangeApplication(This,pbChangeApplierInfo,cbChangeApplierInfo) )
#define ISyncSessionState_GetForgottenKnowledgeRecoveryRangeStart(This,pbRangeStart,pcbRangeStart) ( (This)->lpVtbl -> GetForgottenKnowledgeRecoveryRangeStart(This,pbRangeStart,pcbRangeStart) )
#define ISyncSessionState_GetForgottenKnowledgeRecoveryRangeEnd(This,pbRangeEnd,pcbRangeEnd) ( (This)->lpVtbl -> GetForgottenKnowledgeRecoveryRangeEnd(This,pbRangeEnd,pcbRangeEnd) )
#define ISyncSessionState_SetForgottenKnowledgeRecoveryRange(This,pRange) ( (This)->lpVtbl -> SetForgottenKnowledgeRecoveryRange(This,pRange) )
#define ISyncSessionState_OnProgress(This,provider,syncStage,dwCompletedWork,dwTotalWork) ( (This)->lpVtbl -> OnProgress(This,provider,syncStage,dwCompletedWork,dwTotalWork) )
#endif
#endif
#ifndef __ISyncSessionExtendedErrorInfo_INTERFACE_DEFINED__
#define __ISyncSessionExtendedErrorInfo_INTERFACE_DEFINED__
extern const IID IID_ISyncSessionExtendedErrorInfo;
typedef struct ISyncSessionExtendedErrorInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISyncSessionExtendedErrorInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISyncSessionExtendedErrorInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISyncSessionExtendedErrorInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetSyncProviderWithError) (ISyncSessionExtendedErrorInfo * This, ISyncProvider ** ppProviderWithError);
	END_INTERFACE
}  ISyncSessionExtendedErrorInfoVtbl;
interface ISyncSessionExtendedErrorInfo
{
	CONST_VTBL struct ISyncSessionExtendedErrorInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISyncSessionExtendedErrorInfo_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISyncSessionExtendedErrorInfo_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISyncSessionExtendedErrorInfo_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISyncSessionExtendedErrorInfo_GetSyncProviderWithError(This,ppProviderWithError) ( (This)->lpVtbl -> GetSyncProviderWithError(This,ppProviderWithError) )
#endif
#endif
#ifndef __ISyncSessionState2_INTERFACE_DEFINED__
#define __ISyncSessionState2_INTERFACE_DEFINED__
extern const IID IID_ISyncSessionState2;
typedef struct ISyncSessionState2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISyncSessionState2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISyncSessionState2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISyncSessionState2 * This);
	HRESULT(STDMETHODCALLTYPE * IsCanceled) (ISyncSessionState2 * This, BOOL * pfIsCanceled);
	HRESULT(STDMETHODCALLTYPE * GetInfoForChangeApplication) (ISyncSessionState2 * This, BYTE * pbChangeApplierInfo, DWORD * pcbChangeApplierInfo);
	HRESULT(STDMETHODCALLTYPE * LoadInfoFromChangeApplication) (ISyncSessionState2 * This, const BYTE * pbChangeApplierInfo, DWORD cbChangeApplierInfo);
	HRESULT(STDMETHODCALLTYPE * GetForgottenKnowledgeRecoveryRangeStart) (ISyncSessionState2 * This, BYTE * pbRangeStart, DWORD * pcbRangeStart);
	HRESULT(STDMETHODCALLTYPE * GetForgottenKnowledgeRecoveryRangeEnd) (ISyncSessionState2 * This, BYTE * pbRangeEnd, DWORD * pcbRangeEnd);
	HRESULT(STDMETHODCALLTYPE * SetForgottenKnowledgeRecoveryRange) (ISyncSessionState2 * This, const SYNC_RANGE * pRange);
	HRESULT(STDMETHODCALLTYPE * OnProgress) (ISyncSessionState2 * This, SYNC_PROVIDER_ROLE provider, SYNC_PROGRESS_STAGE syncStage, DWORD dwCompletedWork, DWORD dwTotalWork);
	HRESULT(STDMETHODCALLTYPE * SetProviderWithError) (ISyncSessionState2 * This, BOOL fSelf);
	HRESULT(STDMETHODCALLTYPE * GetSessionErrorStatus) (ISyncSessionState2 * This, HRESULT * phrSessionError);
	END_INTERFACE
}  ISyncSessionState2Vtbl;
interface ISyncSessionState2
{
	CONST_VTBL struct ISyncSessionState2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISyncSessionState2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISyncSessionState2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISyncSessionState2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISyncSessionState2_IsCanceled(This,pfIsCanceled) ( (This)->lpVtbl -> IsCanceled(This,pfIsCanceled) )
#define ISyncSessionState2_GetInfoForChangeApplication(This,pbChangeApplierInfo,pcbChangeApplierInfo) ( (This)->lpVtbl -> GetInfoForChangeApplication(This,pbChangeApplierInfo,pcbChangeApplierInfo) )
#define ISyncSessionState2_LoadInfoFromChangeApplication(This,pbChangeApplierInfo,cbChangeApplierInfo) ( (This)->lpVtbl -> LoadInfoFromChangeApplication(This,pbChangeApplierInfo,cbChangeApplierInfo) )
#define ISyncSessionState2_GetForgottenKnowledgeRecoveryRangeStart(This,pbRangeStart,pcbRangeStart) ( (This)->lpVtbl -> GetForgottenKnowledgeRecoveryRangeStart(This,pbRangeStart,pcbRangeStart) )
#define ISyncSessionState2_GetForgottenKnowledgeRecoveryRangeEnd(This,pbRangeEnd,pcbRangeEnd) ( (This)->lpVtbl -> GetForgottenKnowledgeRecoveryRangeEnd(This,pbRangeEnd,pcbRangeEnd) )
#define ISyncSessionState2_SetForgottenKnowledgeRecoveryRange(This,pRange) ( (This)->lpVtbl -> SetForgottenKnowledgeRecoveryRange(This,pRange) )
#define ISyncSessionState2_OnProgress(This,provider,syncStage,dwCompletedWork,dwTotalWork) ( (This)->lpVtbl -> OnProgress(This,provider,syncStage,dwCompletedWork,dwTotalWork) )
#define ISyncSessionState2_SetProviderWithError(This,fSelf) ( (This)->lpVtbl -> SetProviderWithError(This,fSelf) )
#define ISyncSessionState2_GetSessionErrorStatus(This,phrSessionError) ( (This)->lpVtbl -> GetSessionErrorStatus(This,phrSessionError) )
#endif
#endif
#ifndef __ISyncFilterInfo_INTERFACE_DEFINED__
#define __ISyncFilterInfo_INTERFACE_DEFINED__
extern const IID IID_ISyncFilterInfo;
typedef struct ISyncFilterInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISyncFilterInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISyncFilterInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISyncFilterInfo * This);
	HRESULT(STDMETHODCALLTYPE * Serialize) (ISyncFilterInfo * This, BYTE * pbBuffer, DWORD * pcbBuffer);
	END_INTERFACE
}  ISyncFilterInfoVtbl;
interface ISyncFilterInfo
{
	CONST_VTBL struct ISyncFilterInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISyncFilterInfo_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISyncFilterInfo_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISyncFilterInfo_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISyncFilterInfo_Serialize(This,pbBuffer,pcbBuffer) ( (This)->lpVtbl -> Serialize(This,pbBuffer,pcbBuffer) )
#endif
#endif
#define SYNC_FILTER_INFO_FLAG_ITEM_LIST          0x00000001
#define SYNC_FILTER_INFO_FLAG_CHANGE_UNIT_LIST   0x00000002
extern RPC_IF_HANDLE __MIDL_itf_winsync_0000_0029_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_winsync_0000_0029_v0_0_s_ifspec;
#ifndef __ISyncFilterInfo2_INTERFACE_DEFINED__
#define __ISyncFilterInfo2_INTERFACE_DEFINED__
extern const IID IID_ISyncFilterInfo2;
typedef struct ISyncFilterInfo2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISyncFilterInfo2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISyncFilterInfo2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISyncFilterInfo2 * This);
	HRESULT(STDMETHODCALLTYPE * Serialize) (ISyncFilterInfo2 * This, BYTE * pbBuffer, DWORD * pcbBuffer);
	HRESULT(STDMETHODCALLTYPE * GetFlags) (ISyncFilterInfo2 * This, DWORD * pdwFlags);
	END_INTERFACE
}  ISyncFilterInfo2Vtbl;
interface ISyncFilterInfo2
{
	CONST_VTBL struct ISyncFilterInfo2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISyncFilterInfo2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISyncFilterInfo2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISyncFilterInfo2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISyncFilterInfo2_Serialize(This,pbBuffer,pcbBuffer) ( (This)->lpVtbl -> Serialize(This,pbBuffer,pcbBuffer) )
#define ISyncFilterInfo2_GetFlags(This,pdwFlags) ( (This)->lpVtbl -> GetFlags(This,pdwFlags) )
#endif
#endif
#ifndef __IChangeUnitListFilterInfo_INTERFACE_DEFINED__
#define __IChangeUnitListFilterInfo_INTERFACE_DEFINED__
extern const IID IID_IChangeUnitListFilterInfo;
typedef struct IChangeUnitListFilterInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IChangeUnitListFilterInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IChangeUnitListFilterInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IChangeUnitListFilterInfo * This);
	HRESULT(STDMETHODCALLTYPE * Serialize) (IChangeUnitListFilterInfo * This, BYTE * pbBuffer, DWORD * pcbBuffer);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IChangeUnitListFilterInfo * This, const BYTE * const *ppbChangeUnitIds, DWORD dwChangeUnitCount);
	HRESULT(STDMETHODCALLTYPE * GetChangeUnitIdCount) (IChangeUnitListFilterInfo * This, DWORD * pdwChangeUnitIdCount);
	HRESULT(STDMETHODCALLTYPE * GetChangeUnitId) (IChangeUnitListFilterInfo * This, DWORD dwChangeUnitIdIndex, BYTE * pbChangeUnitId, DWORD * pcbIdSize);
	END_INTERFACE
}  IChangeUnitListFilterInfoVtbl;
interface IChangeUnitListFilterInfo
{
	CONST_VTBL struct IChangeUnitListFilterInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IChangeUnitListFilterInfo_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IChangeUnitListFilterInfo_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IChangeUnitListFilterInfo_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IChangeUnitListFilterInfo_Serialize(This,pbBuffer,pcbBuffer) ( (This)->lpVtbl -> Serialize(This,pbBuffer,pcbBuffer) )
#define IChangeUnitListFilterInfo_Initialize(This,ppbChangeUnitIds,dwChangeUnitCount) ( (This)->lpVtbl -> Initialize(This,ppbChangeUnitIds,dwChangeUnitCount) )
#define IChangeUnitListFilterInfo_GetChangeUnitIdCount(This,pdwChangeUnitIdCount) ( (This)->lpVtbl -> GetChangeUnitIdCount(This,pdwChangeUnitIdCount) )
#define IChangeUnitListFilterInfo_GetChangeUnitId(This,dwChangeUnitIdIndex,pbChangeUnitId,pcbIdSize) ( (This)->lpVtbl -> GetChangeUnitId(This,dwChangeUnitIdIndex,pbChangeUnitId,pcbIdSize) )
#endif
#endif
#ifndef __IEnumSyncChanges_INTERFACE_DEFINED__
#define __IEnumSyncChanges_INTERFACE_DEFINED__
extern const IID IID_IEnumSyncChanges;
typedef struct IEnumSyncChangesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumSyncChanges * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumSyncChanges * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumSyncChanges * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumSyncChanges * This, ULONG cChanges, ISyncChange ** ppChange, ULONG * pcFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumSyncChanges * This, ULONG cChanges);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumSyncChanges * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumSyncChanges * This, IEnumSyncChanges ** ppEnum);
	END_INTERFACE
}  IEnumSyncChangesVtbl;
interface IEnumSyncChanges
{
	CONST_VTBL struct IEnumSyncChangesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumSyncChanges_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumSyncChanges_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumSyncChanges_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumSyncChanges_Next(This,cChanges,ppChange,pcFetched) ( (This)->lpVtbl -> Next(This,cChanges,ppChange,pcFetched) )
#define IEnumSyncChanges_Skip(This,cChanges) ( (This)->lpVtbl -> Skip(This,cChanges) )
#define IEnumSyncChanges_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumSyncChanges_Clone(This,ppEnum) ( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
#endif
#ifndef __ISyncChangeBuilder_INTERFACE_DEFINED__
#define __ISyncChangeBuilder_INTERFACE_DEFINED__
extern const IID IID_ISyncChangeBuilder;
typedef struct ISyncChangeBuilderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISyncChangeBuilder * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISyncChangeBuilder * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISyncChangeBuilder * This);
	HRESULT(STDMETHODCALLTYPE * AddChangeUnitMetadata) (ISyncChangeBuilder * This, const BYTE * pbChangeUnitId, const SYNC_VERSION * pChangeUnitVersion);
	END_INTERFACE
}  ISyncChangeBuilderVtbl;
interface ISyncChangeBuilder
{
	CONST_VTBL struct ISyncChangeBuilderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISyncChangeBuilder_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISyncChangeBuilder_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISyncChangeBuilder_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISyncChangeBuilder_AddChangeUnitMetadata(This,pbChangeUnitId,pChangeUnitVersion) ( (This)->lpVtbl -> AddChangeUnitMetadata(This,pbChangeUnitId,pChangeUnitVersion) )
#endif
#endif
#define SYNC_CHANGE_FLAG_DELETED                 0x00000001
#define SYNC_CHANGE_FLAG_DOES_NOT_EXIST          0x00000002
extern RPC_IF_HANDLE __MIDL_itf_winsync_0000_0033_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_winsync_0000_0033_v0_0_s_ifspec;
#ifndef __ISyncChangeBatchBase_INTERFACE_DEFINED__
#define __ISyncChangeBatchBase_INTERFACE_DEFINED__
extern const IID IID_ISyncChangeBatchBase;
typedef struct ISyncChangeBatchBaseVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISyncChangeBatchBase * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISyncChangeBatchBase * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISyncChangeBatchBase * This);
	HRESULT(STDMETHODCALLTYPE * GetChangeEnumerator) (ISyncChangeBatchBase * This, IEnumSyncChanges ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * GetIsLastBatch) (ISyncChangeBatchBase * This, BOOL * pfLastBatch);
	HRESULT(STDMETHODCALLTYPE * GetWorkEstimateForBatch) (ISyncChangeBatchBase * This, DWORD * pdwWorkForBatch);
	HRESULT(STDMETHODCALLTYPE * GetRemainingWorkEstimateForSession) (ISyncChangeBatchBase * This, DWORD * pdwRemainingWorkForSession);
	HRESULT(STDMETHODCALLTYPE * BeginOrderedGroup) (ISyncChangeBatchBase * This, const BYTE * pbLowerBound);
	HRESULT(STDMETHODCALLTYPE * EndOrderedGroup) (ISyncChangeBatchBase * This, const BYTE * pbUpperBound, ISyncKnowledge * pMadeWithKnowledge);
	HRESULT(STDMETHODCALLTYPE * AddItemMetadataToGroup) (ISyncChangeBatchBase * This, const BYTE * pbOwnerReplicaId, const BYTE * pbItemId, const SYNC_VERSION * pChangeVersion, const SYNC_VERSION * pCreationVersion, DWORD dwFlags, DWORD dwWorkForChange, ISyncChangeBuilder ** ppChangeBuilder);
	HRESULT(STDMETHODCALLTYPE * GetLearnedKnowledge) (ISyncChangeBatchBase * This, ISyncKnowledge ** ppLearnedKnowledge);
	HRESULT(STDMETHODCALLTYPE * GetPrerequisiteKnowledge) (ISyncChangeBatchBase * This, ISyncKnowledge ** ppPrerequisteKnowledge);
	HRESULT(STDMETHODCALLTYPE * GetSourceForgottenKnowledge) (ISyncChangeBatchBase * This, IForgottenKnowledge ** ppSourceForgottenKnowledge);
	HRESULT(STDMETHODCALLTYPE * SetLastBatch) (ISyncChangeBatchBase * This);
	HRESULT(STDMETHODCALLTYPE * SetWorkEstimateForBatch) (ISyncChangeBatchBase * This, DWORD dwWorkForBatch);
	HRESULT(STDMETHODCALLTYPE * SetRemainingWorkEstimateForSession) (ISyncChangeBatchBase * This, DWORD dwRemainingWorkForSession);
	HRESULT(STDMETHODCALLTYPE * Serialize) (ISyncChangeBatchBase * This, BYTE * pbChangeBatch, DWORD * pcbChangeBatch);
	END_INTERFACE
}  ISyncChangeBatchBaseVtbl;
interface ISyncChangeBatchBase
{
	CONST_VTBL struct ISyncChangeBatchBaseVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISyncChangeBatchBase_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISyncChangeBatchBase_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISyncChangeBatchBase_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISyncChangeBatchBase_GetChangeEnumerator(This,ppEnum) ( (This)->lpVtbl -> GetChangeEnumerator(This,ppEnum) )
#define ISyncChangeBatchBase_GetIsLastBatch(This,pfLastBatch) ( (This)->lpVtbl -> GetIsLastBatch(This,pfLastBatch) )
#define ISyncChangeBatchBase_GetWorkEstimateForBatch(This,pdwWorkForBatch) ( (This)->lpVtbl -> GetWorkEstimateForBatch(This,pdwWorkForBatch) )
#define ISyncChangeBatchBase_GetRemainingWorkEstimateForSession(This,pdwRemainingWorkForSession) ( (This)->lpVtbl -> GetRemainingWorkEstimateForSession(This,pdwRemainingWorkForSession) )
#define ISyncChangeBatchBase_BeginOrderedGroup(This,pbLowerBound) ( (This)->lpVtbl -> BeginOrderedGroup(This,pbLowerBound) )
#define ISyncChangeBatchBase_EndOrderedGroup(This,pbUpperBound,pMadeWithKnowledge) ( (This)->lpVtbl -> EndOrderedGroup(This,pbUpperBound,pMadeWithKnowledge) )
#define ISyncChangeBatchBase_AddItemMetadataToGroup(This,pbOwnerReplicaId,pbItemId,pChangeVersion,pCreationVersion,dwFlags,dwWorkForChange,ppChangeBuilder) ( (This)->lpVtbl -> AddItemMetadataToGroup(This,pbOwnerReplicaId,pbItemId,pChangeVersion,pCreationVersion,dwFlags,dwWorkForChange,ppChangeBuilder) )
#define ISyncChangeBatchBase_GetLearnedKnowledge(This,ppLearnedKnowledge) ( (This)->lpVtbl -> GetLearnedKnowledge(This,ppLearnedKnowledge) )
#define ISyncChangeBatchBase_GetPrerequisiteKnowledge(This,ppPrerequisteKnowledge) ( (This)->lpVtbl -> GetPrerequisiteKnowledge(This,ppPrerequisteKnowledge) )
#define ISyncChangeBatchBase_GetSourceForgottenKnowledge(This,ppSourceForgottenKnowledge) ( (This)->lpVtbl -> GetSourceForgottenKnowledge(This,ppSourceForgottenKnowledge) )
#define ISyncChangeBatchBase_SetLastBatch(This) ( (This)->lpVtbl -> SetLastBatch(This) )
#define ISyncChangeBatchBase_SetWorkEstimateForBatch(This,dwWorkForBatch) ( (This)->lpVtbl -> SetWorkEstimateForBatch(This,dwWorkForBatch) )
#define ISyncChangeBatchBase_SetRemainingWorkEstimateForSession(This,dwRemainingWorkForSession) ( (This)->lpVtbl -> SetRemainingWorkEstimateForSession(This,dwRemainingWorkForSession) )
#define ISyncChangeBatchBase_Serialize(This,pbChangeBatch,pcbChangeBatch) ( (This)->lpVtbl -> Serialize(This,pbChangeBatch,pcbChangeBatch) )
#endif
#endif
#ifndef __ISyncChangeBatch_INTERFACE_DEFINED__
#define __ISyncChangeBatch_INTERFACE_DEFINED__
extern const IID IID_ISyncChangeBatch;
typedef struct ISyncChangeBatchVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISyncChangeBatch * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISyncChangeBatch * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISyncChangeBatch * This);
	HRESULT(STDMETHODCALLTYPE * GetChangeEnumerator) (ISyncChangeBatch * This, IEnumSyncChanges ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * GetIsLastBatch) (ISyncChangeBatch * This, BOOL * pfLastBatch);
	HRESULT(STDMETHODCALLTYPE * GetWorkEstimateForBatch) (ISyncChangeBatch * This, DWORD * pdwWorkForBatch);
	HRESULT(STDMETHODCALLTYPE * GetRemainingWorkEstimateForSession) (ISyncChangeBatch * This, DWORD * pdwRemainingWorkForSession);
	HRESULT(STDMETHODCALLTYPE * BeginOrderedGroup) (ISyncChangeBatch * This, const BYTE * pbLowerBound);
	HRESULT(STDMETHODCALLTYPE * EndOrderedGroup) (ISyncChangeBatch * This, const BYTE * pbUpperBound, ISyncKnowledge * pMadeWithKnowledge);
	HRESULT(STDMETHODCALLTYPE * AddItemMetadataToGroup) (ISyncChangeBatch * This, const BYTE * pbOwnerReplicaId, const BYTE * pbItemId, const SYNC_VERSION * pChangeVersion, const SYNC_VERSION * pCreationVersion, DWORD dwFlags, DWORD dwWorkForChange, ISyncChangeBuilder ** ppChangeBuilder);
	HRESULT(STDMETHODCALLTYPE * GetLearnedKnowledge) (ISyncChangeBatch * This, ISyncKnowledge ** ppLearnedKnowledge);
	HRESULT(STDMETHODCALLTYPE * GetPrerequisiteKnowledge) (ISyncChangeBatch * This, ISyncKnowledge ** ppPrerequisteKnowledge);
	HRESULT(STDMETHODCALLTYPE * GetSourceForgottenKnowledge) (ISyncChangeBatch * This, IForgottenKnowledge ** ppSourceForgottenKnowledge);
	HRESULT(STDMETHODCALLTYPE * SetLastBatch) (ISyncChangeBatch * This);
	HRESULT(STDMETHODCALLTYPE * SetWorkEstimateForBatch) (ISyncChangeBatch * This, DWORD dwWorkForBatch);
	HRESULT(STDMETHODCALLTYPE * SetRemainingWorkEstimateForSession) (ISyncChangeBatch * This, DWORD dwRemainingWorkForSession);
	HRESULT(STDMETHODCALLTYPE * Serialize) (ISyncChangeBatch * This, BYTE * pbChangeBatch, DWORD * pcbChangeBatch);
	HRESULT(STDMETHODCALLTYPE * BeginUnorderedGroup) (ISyncChangeBatch * This);
	HRESULT(STDMETHODCALLTYPE * EndUnorderedGroup) (ISyncChangeBatch * This, ISyncKnowledge * pMadeWithKnowledge, BOOL fAllChangesForKnowledge);
	HRESULT(STDMETHODCALLTYPE * AddLoggedConflict) (ISyncChangeBatch * This, const BYTE * pbOwnerReplicaId, const BYTE * pbItemId, const SYNC_VERSION * pChangeVersion, const SYNC_VERSION * pCreationVersion, DWORD dwFlags, DWORD dwWorkForChange, ISyncKnowledge * pConflictKnowledge, ISyncChangeBuilder ** ppChangeBuilder);
	END_INTERFACE
}  ISyncChangeBatchVtbl;
interface ISyncChangeBatch
{
	CONST_VTBL struct ISyncChangeBatchVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISyncChangeBatch_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISyncChangeBatch_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISyncChangeBatch_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISyncChangeBatch_GetChangeEnumerator(This,ppEnum) ( (This)->lpVtbl -> GetChangeEnumerator(This,ppEnum) )
#define ISyncChangeBatch_GetIsLastBatch(This,pfLastBatch) ( (This)->lpVtbl -> GetIsLastBatch(This,pfLastBatch) )
#define ISyncChangeBatch_GetWorkEstimateForBatch(This,pdwWorkForBatch) ( (This)->lpVtbl -> GetWorkEstimateForBatch(This,pdwWorkForBatch) )
#define ISyncChangeBatch_GetRemainingWorkEstimateForSession(This,pdwRemainingWorkForSession) ( (This)->lpVtbl -> GetRemainingWorkEstimateForSession(This,pdwRemainingWorkForSession) )
#define ISyncChangeBatch_BeginOrderedGroup(This,pbLowerBound) ( (This)->lpVtbl -> BeginOrderedGroup(This,pbLowerBound) )
#define ISyncChangeBatch_EndOrderedGroup(This,pbUpperBound,pMadeWithKnowledge) ( (This)->lpVtbl -> EndOrderedGroup(This,pbUpperBound,pMadeWithKnowledge) )
#define ISyncChangeBatch_AddItemMetadataToGroup(This,pbOwnerReplicaId,pbItemId,pChangeVersion,pCreationVersion,dwFlags,dwWorkForChange,ppChangeBuilder) ( (This)->lpVtbl -> AddItemMetadataToGroup(This,pbOwnerReplicaId,pbItemId,pChangeVersion,pCreationVersion,dwFlags,dwWorkForChange,ppChangeBuilder) )
#define ISyncChangeBatch_GetLearnedKnowledge(This,ppLearnedKnowledge) ( (This)->lpVtbl -> GetLearnedKnowledge(This,ppLearnedKnowledge) )
#define ISyncChangeBatch_GetPrerequisiteKnowledge(This,ppPrerequisteKnowledge) ( (This)->lpVtbl -> GetPrerequisiteKnowledge(This,ppPrerequisteKnowledge) )
#define ISyncChangeBatch_GetSourceForgottenKnowledge(This,ppSourceForgottenKnowledge) ( (This)->lpVtbl -> GetSourceForgottenKnowledge(This,ppSourceForgottenKnowledge) )
#define ISyncChangeBatch_SetLastBatch(This) ( (This)->lpVtbl -> SetLastBatch(This) )
#define ISyncChangeBatch_SetWorkEstimateForBatch(This,dwWorkForBatch) ( (This)->lpVtbl -> SetWorkEstimateForBatch(This,dwWorkForBatch) )
#define ISyncChangeBatch_SetRemainingWorkEstimateForSession(This,dwRemainingWorkForSession) ( (This)->lpVtbl -> SetRemainingWorkEstimateForSession(This,dwRemainingWorkForSession) )
#define ISyncChangeBatch_Serialize(This,pbChangeBatch,pcbChangeBatch) ( (This)->lpVtbl -> Serialize(This,pbChangeBatch,pcbChangeBatch) )
#define ISyncChangeBatch_BeginUnorderedGroup(This) ( (This)->lpVtbl -> BeginUnorderedGroup(This) )
#define ISyncChangeBatch_EndUnorderedGroup(This,pMadeWithKnowledge,fAllChangesForKnowledge) ( (This)->lpVtbl -> EndUnorderedGroup(This,pMadeWithKnowledge,fAllChangesForKnowledge) )
#define ISyncChangeBatch_AddLoggedConflict(This,pbOwnerReplicaId,pbItemId,pChangeVersion,pCreationVersion,dwFlags,dwWorkForChange,pConflictKnowledge,ppChangeBuilder) ( (This)->lpVtbl -> AddLoggedConflict(This,pbOwnerReplicaId,pbItemId,pChangeVersion,pCreationVersion,dwFlags,dwWorkForChange,pConflictKnowledge,ppChangeBuilder) )
#endif
#endif
#ifndef __ISyncFullEnumerationChangeBatch_INTERFACE_DEFINED__
#define __ISyncFullEnumerationChangeBatch_INTERFACE_DEFINED__
extern const IID IID_ISyncFullEnumerationChangeBatch;
typedef struct ISyncFullEnumerationChangeBatchVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISyncFullEnumerationChangeBatch * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISyncFullEnumerationChangeBatch * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISyncFullEnumerationChangeBatch * This);
	HRESULT(STDMETHODCALLTYPE * GetChangeEnumerator) (ISyncFullEnumerationChangeBatch * This, IEnumSyncChanges ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * GetIsLastBatch) (ISyncFullEnumerationChangeBatch * This, BOOL * pfLastBatch);
	HRESULT(STDMETHODCALLTYPE * GetWorkEstimateForBatch) (ISyncFullEnumerationChangeBatch * This, DWORD * pdwWorkForBatch);
	HRESULT(STDMETHODCALLTYPE * GetRemainingWorkEstimateForSession) (ISyncFullEnumerationChangeBatch * This, DWORD * pdwRemainingWorkForSession);
	HRESULT(STDMETHODCALLTYPE * BeginOrderedGroup) (ISyncFullEnumerationChangeBatch * This, const BYTE * pbLowerBound);
	HRESULT(STDMETHODCALLTYPE * EndOrderedGroup) (ISyncFullEnumerationChangeBatch * This, const BYTE * pbUpperBound, ISyncKnowledge * pMadeWithKnowledge);
	HRESULT(STDMETHODCALLTYPE * AddItemMetadataToGroup) (ISyncFullEnumerationChangeBatch * This, const BYTE * pbOwnerReplicaId, const BYTE * pbItemId, const SYNC_VERSION * pChangeVersion, const SYNC_VERSION * pCreationVersion, DWORD dwFlags, DWORD dwWorkForChange, ISyncChangeBuilder ** ppChangeBuilder);
	HRESULT(STDMETHODCALLTYPE * GetLearnedKnowledge) (ISyncFullEnumerationChangeBatch * This, ISyncKnowledge ** ppLearnedKnowledge);
	HRESULT(STDMETHODCALLTYPE * GetPrerequisiteKnowledge) (ISyncFullEnumerationChangeBatch * This, ISyncKnowledge ** ppPrerequisteKnowledge);
	HRESULT(STDMETHODCALLTYPE * GetSourceForgottenKnowledge) (ISyncFullEnumerationChangeBatch * This, IForgottenKnowledge ** ppSourceForgottenKnowledge);
	HRESULT(STDMETHODCALLTYPE * SetLastBatch) (ISyncFullEnumerationChangeBatch * This);
	HRESULT(STDMETHODCALLTYPE * SetWorkEstimateForBatch) (ISyncFullEnumerationChangeBatch * This, DWORD dwWorkForBatch);
	HRESULT(STDMETHODCALLTYPE * SetRemainingWorkEstimateForSession) (ISyncFullEnumerationChangeBatch * This, DWORD dwRemainingWorkForSession);
	HRESULT(STDMETHODCALLTYPE * Serialize) (ISyncFullEnumerationChangeBatch * This, BYTE * pbChangeBatch, DWORD * pcbChangeBatch);
	HRESULT(STDMETHODCALLTYPE * GetLearnedKnowledgeAfterRecoveryComplete) (ISyncFullEnumerationChangeBatch * This, ISyncKnowledge ** ppLearnedKnowledgeAfterRecoveryComplete);
	HRESULT(STDMETHODCALLTYPE * GetClosedLowerBoundItemId) (ISyncFullEnumerationChangeBatch * This, BYTE * pbClosedLowerBoundItemId, DWORD * pcbIdSize);
	HRESULT(STDMETHODCALLTYPE * GetClosedUpperBoundItemId) (ISyncFullEnumerationChangeBatch * This, BYTE * pbClosedUpperBoundItemId, DWORD * pcbIdSize);
	END_INTERFACE
}  ISyncFullEnumerationChangeBatchVtbl;
interface ISyncFullEnumerationChangeBatch
{
	CONST_VTBL struct ISyncFullEnumerationChangeBatchVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISyncFullEnumerationChangeBatch_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISyncFullEnumerationChangeBatch_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISyncFullEnumerationChangeBatch_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISyncFullEnumerationChangeBatch_GetChangeEnumerator(This,ppEnum) ( (This)->lpVtbl -> GetChangeEnumerator(This,ppEnum) )
#define ISyncFullEnumerationChangeBatch_GetIsLastBatch(This,pfLastBatch) ( (This)->lpVtbl -> GetIsLastBatch(This,pfLastBatch) )
#define ISyncFullEnumerationChangeBatch_GetWorkEstimateForBatch(This,pdwWorkForBatch) ( (This)->lpVtbl -> GetWorkEstimateForBatch(This,pdwWorkForBatch) )
#define ISyncFullEnumerationChangeBatch_GetRemainingWorkEstimateForSession(This,pdwRemainingWorkForSession) ( (This)->lpVtbl -> GetRemainingWorkEstimateForSession(This,pdwRemainingWorkForSession) )
#define ISyncFullEnumerationChangeBatch_BeginOrderedGroup(This,pbLowerBound) ( (This)->lpVtbl -> BeginOrderedGroup(This,pbLowerBound) )
#define ISyncFullEnumerationChangeBatch_EndOrderedGroup(This,pbUpperBound,pMadeWithKnowledge) ( (This)->lpVtbl -> EndOrderedGroup(This,pbUpperBound,pMadeWithKnowledge) )
#define ISyncFullEnumerationChangeBatch_AddItemMetadataToGroup(This,pbOwnerReplicaId,pbItemId,pChangeVersion,pCreationVersion,dwFlags,dwWorkForChange,ppChangeBuilder) ( (This)->lpVtbl -> AddItemMetadataToGroup(This,pbOwnerReplicaId,pbItemId,pChangeVersion,pCreationVersion,dwFlags,dwWorkForChange,ppChangeBuilder) )
#define ISyncFullEnumerationChangeBatch_GetLearnedKnowledge(This,ppLearnedKnowledge) ( (This)->lpVtbl -> GetLearnedKnowledge(This,ppLearnedKnowledge) )
#define ISyncFullEnumerationChangeBatch_GetPrerequisiteKnowledge(This,ppPrerequisteKnowledge) ( (This)->lpVtbl -> GetPrerequisiteKnowledge(This,ppPrerequisteKnowledge) )
#define ISyncFullEnumerationChangeBatch_GetSourceForgottenKnowledge(This,ppSourceForgottenKnowledge) ( (This)->lpVtbl -> GetSourceForgottenKnowledge(This,ppSourceForgottenKnowledge) )
#define ISyncFullEnumerationChangeBatch_SetLastBatch(This) ( (This)->lpVtbl -> SetLastBatch(This) )
#define ISyncFullEnumerationChangeBatch_SetWorkEstimateForBatch(This,dwWorkForBatch) ( (This)->lpVtbl -> SetWorkEstimateForBatch(This,dwWorkForBatch) )
#define ISyncFullEnumerationChangeBatch_SetRemainingWorkEstimateForSession(This,dwRemainingWorkForSession) ( (This)->lpVtbl -> SetRemainingWorkEstimateForSession(This,dwRemainingWorkForSession) )
#define ISyncFullEnumerationChangeBatch_Serialize(This,pbChangeBatch,pcbChangeBatch) ( (This)->lpVtbl -> Serialize(This,pbChangeBatch,pcbChangeBatch) )
#define ISyncFullEnumerationChangeBatch_GetLearnedKnowledgeAfterRecoveryComplete(This,ppLearnedKnowledgeAfterRecoveryComplete) ( (This)->lpVtbl -> GetLearnedKnowledgeAfterRecoveryComplete(This,ppLearnedKnowledgeAfterRecoveryComplete) )
#define ISyncFullEnumerationChangeBatch_GetClosedLowerBoundItemId(This,pbClosedLowerBoundItemId,pcbIdSize) ( (This)->lpVtbl -> GetClosedLowerBoundItemId(This,pbClosedLowerBoundItemId,pcbIdSize) )
#define ISyncFullEnumerationChangeBatch_GetClosedUpperBoundItemId(This,pbClosedUpperBoundItemId,pcbIdSize) ( (This)->lpVtbl -> GetClosedUpperBoundItemId(This,pbClosedUpperBoundItemId,pcbIdSize) )
#endif
#endif
#ifndef __ISyncChangeBatchWithPrerequisite_INTERFACE_DEFINED__
#define __ISyncChangeBatchWithPrerequisite_INTERFACE_DEFINED__
extern const IID IID_ISyncChangeBatchWithPrerequisite;
typedef struct ISyncChangeBatchWithPrerequisiteVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISyncChangeBatchWithPrerequisite * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISyncChangeBatchWithPrerequisite * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISyncChangeBatchWithPrerequisite * This);
	HRESULT(STDMETHODCALLTYPE * GetChangeEnumerator) (ISyncChangeBatchWithPrerequisite * This, IEnumSyncChanges ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * GetIsLastBatch) (ISyncChangeBatchWithPrerequisite * This, BOOL * pfLastBatch);
	HRESULT(STDMETHODCALLTYPE * GetWorkEstimateForBatch) (ISyncChangeBatchWithPrerequisite * This, DWORD * pdwWorkForBatch);
	HRESULT(STDMETHODCALLTYPE * GetRemainingWorkEstimateForSession) (ISyncChangeBatchWithPrerequisite * This, DWORD * pdwRemainingWorkForSession);
	HRESULT(STDMETHODCALLTYPE * BeginOrderedGroup) (ISyncChangeBatchWithPrerequisite * This, const BYTE * pbLowerBound);
	HRESULT(STDMETHODCALLTYPE * EndOrderedGroup) (ISyncChangeBatchWithPrerequisite * This, const BYTE * pbUpperBound, ISyncKnowledge * pMadeWithKnowledge);
	HRESULT(STDMETHODCALLTYPE * AddItemMetadataToGroup) (ISyncChangeBatchWithPrerequisite * This, const BYTE * pbOwnerReplicaId, const BYTE * pbItemId, const SYNC_VERSION * pChangeVersion, const SYNC_VERSION * pCreationVersion, DWORD dwFlags, DWORD dwWorkForChange, ISyncChangeBuilder ** ppChangeBuilder);
	HRESULT(STDMETHODCALLTYPE * GetLearnedKnowledge) (ISyncChangeBatchWithPrerequisite * This, ISyncKnowledge ** ppLearnedKnowledge);
	HRESULT(STDMETHODCALLTYPE * GetPrerequisiteKnowledge) (ISyncChangeBatchWithPrerequisite * This, ISyncKnowledge ** ppPrerequisteKnowledge);
	HRESULT(STDMETHODCALLTYPE * GetSourceForgottenKnowledge) (ISyncChangeBatchWithPrerequisite * This, IForgottenKnowledge ** ppSourceForgottenKnowledge);
	HRESULT(STDMETHODCALLTYPE * SetLastBatch) (ISyncChangeBatchWithPrerequisite * This);
	HRESULT(STDMETHODCALLTYPE * SetWorkEstimateForBatch) (ISyncChangeBatchWithPrerequisite * This, DWORD dwWorkForBatch);
	HRESULT(STDMETHODCALLTYPE * SetRemainingWorkEstimateForSession) (ISyncChangeBatchWithPrerequisite * This, DWORD dwRemainingWorkForSession);
	HRESULT(STDMETHODCALLTYPE * Serialize) (ISyncChangeBatchWithPrerequisite * This, BYTE * pbChangeBatch, DWORD * pcbChangeBatch);
	HRESULT(STDMETHODCALLTYPE * SetPrerequisiteKnowledge) (ISyncChangeBatchWithPrerequisite * This, ISyncKnowledge * pPrerequisiteKnowledge);
	HRESULT(STDMETHODCALLTYPE * GetLearnedKnowledgeWithPrerequisite) (ISyncChangeBatchWithPrerequisite * This, ISyncKnowledge * pDestinationKnowledge, ISyncKnowledge ** ppLearnedWithPrerequisiteKnowledge);
	HRESULT(STDMETHODCALLTYPE * GetLearnedForgottenKnowledge) (ISyncChangeBatchWithPrerequisite * This, IForgottenKnowledge ** ppLearnedForgottenKnowledge);
	END_INTERFACE
}  ISyncChangeBatchWithPrerequisiteVtbl;
interface ISyncChangeBatchWithPrerequisite
{
	CONST_VTBL struct ISyncChangeBatchWithPrerequisiteVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISyncChangeBatchWithPrerequisite_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISyncChangeBatchWithPrerequisite_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISyncChangeBatchWithPrerequisite_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISyncChangeBatchWithPrerequisite_GetChangeEnumerator(This,ppEnum) ( (This)->lpVtbl -> GetChangeEnumerator(This,ppEnum) )
#define ISyncChangeBatchWithPrerequisite_GetIsLastBatch(This,pfLastBatch) ( (This)->lpVtbl -> GetIsLastBatch(This,pfLastBatch) )
#define ISyncChangeBatchWithPrerequisite_GetWorkEstimateForBatch(This,pdwWorkForBatch) ( (This)->lpVtbl -> GetWorkEstimateForBatch(This,pdwWorkForBatch) )
#define ISyncChangeBatchWithPrerequisite_GetRemainingWorkEstimateForSession(This,pdwRemainingWorkForSession) ( (This)->lpVtbl -> GetRemainingWorkEstimateForSession(This,pdwRemainingWorkForSession) )
#define ISyncChangeBatchWithPrerequisite_BeginOrderedGroup(This,pbLowerBound) ( (This)->lpVtbl -> BeginOrderedGroup(This,pbLowerBound) )
#define ISyncChangeBatchWithPrerequisite_EndOrderedGroup(This,pbUpperBound,pMadeWithKnowledge) ( (This)->lpVtbl -> EndOrderedGroup(This,pbUpperBound,pMadeWithKnowledge) )
#define ISyncChangeBatchWithPrerequisite_AddItemMetadataToGroup(This,pbOwnerReplicaId,pbItemId,pChangeVersion,pCreationVersion,dwFlags,dwWorkForChange,ppChangeBuilder) ( (This)->lpVtbl -> AddItemMetadataToGroup(This,pbOwnerReplicaId,pbItemId,pChangeVersion,pCreationVersion,dwFlags,dwWorkForChange,ppChangeBuilder) )
#define ISyncChangeBatchWithPrerequisite_GetLearnedKnowledge(This,ppLearnedKnowledge) ( (This)->lpVtbl -> GetLearnedKnowledge(This,ppLearnedKnowledge) )
#define ISyncChangeBatchWithPrerequisite_GetPrerequisiteKnowledge(This,ppPrerequisteKnowledge) ( (This)->lpVtbl -> GetPrerequisiteKnowledge(This,ppPrerequisteKnowledge) )
#define ISyncChangeBatchWithPrerequisite_GetSourceForgottenKnowledge(This,ppSourceForgottenKnowledge) ( (This)->lpVtbl -> GetSourceForgottenKnowledge(This,ppSourceForgottenKnowledge) )
#define ISyncChangeBatchWithPrerequisite_SetLastBatch(This) ( (This)->lpVtbl -> SetLastBatch(This) )
#define ISyncChangeBatchWithPrerequisite_SetWorkEstimateForBatch(This,dwWorkForBatch) ( (This)->lpVtbl -> SetWorkEstimateForBatch(This,dwWorkForBatch) )
#define ISyncChangeBatchWithPrerequisite_SetRemainingWorkEstimateForSession(This,dwRemainingWorkForSession) ( (This)->lpVtbl -> SetRemainingWorkEstimateForSession(This,dwRemainingWorkForSession) )
#define ISyncChangeBatchWithPrerequisite_Serialize(This,pbChangeBatch,pcbChangeBatch) ( (This)->lpVtbl -> Serialize(This,pbChangeBatch,pcbChangeBatch) )
#define ISyncChangeBatchWithPrerequisite_SetPrerequisiteKnowledge(This,pPrerequisiteKnowledge) ( (This)->lpVtbl -> SetPrerequisiteKnowledge(This,pPrerequisiteKnowledge) )
#define ISyncChangeBatchWithPrerequisite_GetLearnedKnowledgeWithPrerequisite(This,pDestinationKnowledge,ppLearnedWithPrerequisiteKnowledge) ( (This)->lpVtbl -> GetLearnedKnowledgeWithPrerequisite(This,pDestinationKnowledge,ppLearnedWithPrerequisiteKnowledge) )
#define ISyncChangeBatchWithPrerequisite_GetLearnedForgottenKnowledge(This,ppLearnedForgottenKnowledge) ( (This)->lpVtbl -> GetLearnedForgottenKnowledge(This,ppLearnedForgottenKnowledge) )
#endif
#endif
#ifndef __ISyncChangeBatchBase2_INTERFACE_DEFINED__
#define __ISyncChangeBatchBase2_INTERFACE_DEFINED__
extern const IID IID_ISyncChangeBatchBase2;
typedef struct ISyncChangeBatchBase2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISyncChangeBatchBase2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISyncChangeBatchBase2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISyncChangeBatchBase2 * This);
	HRESULT(STDMETHODCALLTYPE * GetChangeEnumerator) (ISyncChangeBatchBase2 * This, IEnumSyncChanges ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * GetIsLastBatch) (ISyncChangeBatchBase2 * This, BOOL * pfLastBatch);
	HRESULT(STDMETHODCALLTYPE * GetWorkEstimateForBatch) (ISyncChangeBatchBase2 * This, DWORD * pdwWorkForBatch);
	HRESULT(STDMETHODCALLTYPE * GetRemainingWorkEstimateForSession) (ISyncChangeBatchBase2 * This, DWORD * pdwRemainingWorkForSession);
	HRESULT(STDMETHODCALLTYPE * BeginOrderedGroup) (ISyncChangeBatchBase2 * This, const BYTE * pbLowerBound);
	HRESULT(STDMETHODCALLTYPE * EndOrderedGroup) (ISyncChangeBatchBase2 * This, const BYTE * pbUpperBound, ISyncKnowledge * pMadeWithKnowledge);
	HRESULT(STDMETHODCALLTYPE * AddItemMetadataToGroup) (ISyncChangeBatchBase2 * This, const BYTE * pbOwnerReplicaId, const BYTE * pbItemId, const SYNC_VERSION * pChangeVersion, const SYNC_VERSION * pCreationVersion, DWORD dwFlags, DWORD dwWorkForChange, ISyncChangeBuilder ** ppChangeBuilder);
	HRESULT(STDMETHODCALLTYPE * GetLearnedKnowledge) (ISyncChangeBatchBase2 * This, ISyncKnowledge ** ppLearnedKnowledge);
	HRESULT(STDMETHODCALLTYPE * GetPrerequisiteKnowledge) (ISyncChangeBatchBase2 * This, ISyncKnowledge ** ppPrerequisteKnowledge);
	HRESULT(STDMETHODCALLTYPE * GetSourceForgottenKnowledge) (ISyncChangeBatchBase2 * This, IForgottenKnowledge ** ppSourceForgottenKnowledge);
	HRESULT(STDMETHODCALLTYPE * SetLastBatch) (ISyncChangeBatchBase2 * This);
	HRESULT(STDMETHODCALLTYPE * SetWorkEstimateForBatch) (ISyncChangeBatchBase2 * This, DWORD dwWorkForBatch);
	HRESULT(STDMETHODCALLTYPE * SetRemainingWorkEstimateForSession) (ISyncChangeBatchBase2 * This, DWORD dwRemainingWorkForSession);
	HRESULT(STDMETHODCALLTYPE * Serialize) (ISyncChangeBatchBase2 * This, BYTE * pbChangeBatch, DWORD * pcbChangeBatch);
	HRESULT(STDMETHODCALLTYPE * SerializeWithOptions) (ISyncChangeBatchBase2 * This, SYNC_SERIALIZATION_VERSION targetFormatVersion, DWORD dwFlags, BYTE * pbBuffer, DWORD * pdwSerializedSize);
	END_INTERFACE
}  ISyncChangeBatchBase2Vtbl;
interface ISyncChangeBatchBase2
{
	CONST_VTBL struct ISyncChangeBatchBase2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISyncChangeBatchBase2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISyncChangeBatchBase2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISyncChangeBatchBase2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISyncChangeBatchBase2_GetChangeEnumerator(This,ppEnum) ( (This)->lpVtbl -> GetChangeEnumerator(This,ppEnum) )
#define ISyncChangeBatchBase2_GetIsLastBatch(This,pfLastBatch) ( (This)->lpVtbl -> GetIsLastBatch(This,pfLastBatch) )
#define ISyncChangeBatchBase2_GetWorkEstimateForBatch(This,pdwWorkForBatch) ( (This)->lpVtbl -> GetWorkEstimateForBatch(This,pdwWorkForBatch) )
#define ISyncChangeBatchBase2_GetRemainingWorkEstimateForSession(This,pdwRemainingWorkForSession) ( (This)->lpVtbl -> GetRemainingWorkEstimateForSession(This,pdwRemainingWorkForSession) )
#define ISyncChangeBatchBase2_BeginOrderedGroup(This,pbLowerBound) ( (This)->lpVtbl -> BeginOrderedGroup(This,pbLowerBound) )
#define ISyncChangeBatchBase2_EndOrderedGroup(This,pbUpperBound,pMadeWithKnowledge) ( (This)->lpVtbl -> EndOrderedGroup(This,pbUpperBound,pMadeWithKnowledge) )
#define ISyncChangeBatchBase2_AddItemMetadataToGroup(This,pbOwnerReplicaId,pbItemId,pChangeVersion,pCreationVersion,dwFlags,dwWorkForChange,ppChangeBuilder) ( (This)->lpVtbl -> AddItemMetadataToGroup(This,pbOwnerReplicaId,pbItemId,pChangeVersion,pCreationVersion,dwFlags,dwWorkForChange,ppChangeBuilder) )
#define ISyncChangeBatchBase2_GetLearnedKnowledge(This,ppLearnedKnowledge) ( (This)->lpVtbl -> GetLearnedKnowledge(This,ppLearnedKnowledge) )
#define ISyncChangeBatchBase2_GetPrerequisiteKnowledge(This,ppPrerequisteKnowledge) ( (This)->lpVtbl -> GetPrerequisiteKnowledge(This,ppPrerequisteKnowledge) )
#define ISyncChangeBatchBase2_GetSourceForgottenKnowledge(This,ppSourceForgottenKnowledge) ( (This)->lpVtbl -> GetSourceForgottenKnowledge(This,ppSourceForgottenKnowledge) )
#define ISyncChangeBatchBase2_SetLastBatch(This) ( (This)->lpVtbl -> SetLastBatch(This) )
#define ISyncChangeBatchBase2_SetWorkEstimateForBatch(This,dwWorkForBatch) ( (This)->lpVtbl -> SetWorkEstimateForBatch(This,dwWorkForBatch) )
#define ISyncChangeBatchBase2_SetRemainingWorkEstimateForSession(This,dwRemainingWorkForSession) ( (This)->lpVtbl -> SetRemainingWorkEstimateForSession(This,dwRemainingWorkForSession) )
#define ISyncChangeBatchBase2_Serialize(This,pbChangeBatch,pcbChangeBatch) ( (This)->lpVtbl -> Serialize(This,pbChangeBatch,pcbChangeBatch) )
#define ISyncChangeBatchBase2_SerializeWithOptions(This,targetFormatVersion,dwFlags,pbBuffer,pdwSerializedSize) ( (This)->lpVtbl -> SerializeWithOptions(This,targetFormatVersion,dwFlags,pbBuffer,pdwSerializedSize) )
#endif
#endif
#ifndef __ISyncChangeBatchAdvanced_INTERFACE_DEFINED__
#define __ISyncChangeBatchAdvanced_INTERFACE_DEFINED__
extern const IID IID_ISyncChangeBatchAdvanced;
typedef struct ISyncChangeBatchAdvancedVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISyncChangeBatchAdvanced * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISyncChangeBatchAdvanced * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISyncChangeBatchAdvanced * This);
	HRESULT(STDMETHODCALLTYPE * GetFilterInfo) (ISyncChangeBatchAdvanced * This, ISyncFilterInfo ** ppFilterInfo);
	HRESULT(STDMETHODCALLTYPE * ConvertFullEnumerationChangeBatchToRegularChangeBatch) (ISyncChangeBatchAdvanced * This, ISyncChangeBatch ** ppChangeBatch);
	HRESULT(STDMETHODCALLTYPE * GetUpperBoundItemId) (ISyncChangeBatchAdvanced * This, BYTE * pbItemId, DWORD * pcbIdSize);
	HRESULT(STDMETHODCALLTYPE * GetBatchLevelKnowledgeShouldBeApplied) (ISyncChangeBatchAdvanced * This, BOOL * pfBatchKnowledgeShouldBeApplied);
	END_INTERFACE
}  ISyncChangeBatchAdvancedVtbl;
interface ISyncChangeBatchAdvanced
{
	CONST_VTBL struct ISyncChangeBatchAdvancedVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISyncChangeBatchAdvanced_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISyncChangeBatchAdvanced_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISyncChangeBatchAdvanced_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISyncChangeBatchAdvanced_GetFilterInfo(This,ppFilterInfo) ( (This)->lpVtbl -> GetFilterInfo(This,ppFilterInfo) )
#define ISyncChangeBatchAdvanced_ConvertFullEnumerationChangeBatchToRegularChangeBatch(This,ppChangeBatch) ( (This)->lpVtbl -> ConvertFullEnumerationChangeBatchToRegularChangeBatch(This,ppChangeBatch) )
#define ISyncChangeBatchAdvanced_GetUpperBoundItemId(This,pbItemId,pcbIdSize) ( (This)->lpVtbl -> GetUpperBoundItemId(This,pbItemId,pcbIdSize) )
#define ISyncChangeBatchAdvanced_GetBatchLevelKnowledgeShouldBeApplied(This,pfBatchKnowledgeShouldBeApplied) ( (This)->lpVtbl -> GetBatchLevelKnowledgeShouldBeApplied(This,pfBatchKnowledgeShouldBeApplied) )
#endif
#endif
#ifndef __IKnowledgeSyncProvider_INTERFACE_DEFINED__
#define __IKnowledgeSyncProvider_INTERFACE_DEFINED__
extern const IID IID_IKnowledgeSyncProvider;
typedef struct IKnowledgeSyncProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IKnowledgeSyncProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IKnowledgeSyncProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (IKnowledgeSyncProvider * This);
	HRESULT(STDMETHODCALLTYPE * GetIdParameters) (IKnowledgeSyncProvider * This, ID_PARAMETERS * pIdParameters);
	HRESULT(STDMETHODCALLTYPE * BeginSession) (IKnowledgeSyncProvider * This, SYNC_PROVIDER_ROLE role, ISyncSessionState * pSessionState);
	HRESULT(STDMETHODCALLTYPE * GetSyncBatchParameters) (IKnowledgeSyncProvider * This, ISyncKnowledge ** ppSyncKnowledge, DWORD * pdwRequestedBatchSize);
	HRESULT(STDMETHODCALLTYPE * GetChangeBatch) (IKnowledgeSyncProvider * This, DWORD dwBatchSize, ISyncKnowledge * pSyncKnowledge, ISyncChangeBatch ** ppSyncChangeBatch, IUnknown ** ppUnkDataRetriever);
	HRESULT(STDMETHODCALLTYPE * GetFullEnumerationChangeBatch) (IKnowledgeSyncProvider * This, DWORD dwBatchSize, const BYTE * pbLowerEnumerationBound, ISyncKnowledge * pSyncKnowledge, ISyncFullEnumerationChangeBatch ** ppSyncChangeBatch, IUnknown ** ppUnkDataRetriever);
	HRESULT(STDMETHODCALLTYPE * ProcessChangeBatch) (IKnowledgeSyncProvider * This, CONFLICT_RESOLUTION_POLICY resolutionPolicy, ISyncChangeBatch * pSourceChangeBatch, IUnknown * pUnkDataRetriever, ISyncCallback * pCallback, SYNC_SESSION_STATISTICS * pSyncSessionStatistics);
	HRESULT(STDMETHODCALLTYPE * ProcessFullEnumerationChangeBatch) (IKnowledgeSyncProvider * This, CONFLICT_RESOLUTION_POLICY resolutionPolicy, ISyncFullEnumerationChangeBatch * pSourceChangeBatch, IUnknown * pUnkDataRetriever, ISyncCallback * pCallback, SYNC_SESSION_STATISTICS * pSyncSessionStatistics);
	HRESULT(STDMETHODCALLTYPE * EndSession) (IKnowledgeSyncProvider * This, ISyncSessionState * pSessionState);
	END_INTERFACE
}  IKnowledgeSyncProviderVtbl;
interface IKnowledgeSyncProvider
{
	CONST_VTBL struct IKnowledgeSyncProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IKnowledgeSyncProvider_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IKnowledgeSyncProvider_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IKnowledgeSyncProvider_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IKnowledgeSyncProvider_GetIdParameters(This,pIdParameters) ( (This)->lpVtbl -> GetIdParameters(This,pIdParameters) )
#define IKnowledgeSyncProvider_BeginSession(This,role,pSessionState) ( (This)->lpVtbl -> BeginSession(This,role,pSessionState) )
#define IKnowledgeSyncProvider_GetSyncBatchParameters(This,ppSyncKnowledge,pdwRequestedBatchSize) ( (This)->lpVtbl -> GetSyncBatchParameters(This,ppSyncKnowledge,pdwRequestedBatchSize) )
#define IKnowledgeSyncProvider_GetChangeBatch(This,dwBatchSize,pSyncKnowledge,ppSyncChangeBatch,ppUnkDataRetriever) ( (This)->lpVtbl -> GetChangeBatch(This,dwBatchSize,pSyncKnowledge,ppSyncChangeBatch,ppUnkDataRetriever) )
#define IKnowledgeSyncProvider_GetFullEnumerationChangeBatch(This,dwBatchSize,pbLowerEnumerationBound,pSyncKnowledge,ppSyncChangeBatch,ppUnkDataRetriever) ( (This)->lpVtbl -> GetFullEnumerationChangeBatch(This,dwBatchSize,pbLowerEnumerationBound,pSyncKnowledge,ppSyncChangeBatch,ppUnkDataRetriever) )
#define IKnowledgeSyncProvider_ProcessChangeBatch(This,resolutionPolicy,pSourceChangeBatch,pUnkDataRetriever,pCallback,pSyncSessionStatistics) ( (This)->lpVtbl -> ProcessChangeBatch(This,resolutionPolicy,pSourceChangeBatch,pUnkDataRetriever,pCallback,pSyncSessionStatistics) )
#define IKnowledgeSyncProvider_ProcessFullEnumerationChangeBatch(This,resolutionPolicy,pSourceChangeBatch,pUnkDataRetriever,pCallback,pSyncSessionStatistics) ( (This)->lpVtbl -> ProcessFullEnumerationChangeBatch(This,resolutionPolicy,pSourceChangeBatch,pUnkDataRetriever,pCallback,pSyncSessionStatistics) )
#define IKnowledgeSyncProvider_EndSession(This,pSessionState) ( (This)->lpVtbl -> EndSession(This,pSessionState) )
#endif
#endif
#ifndef __ISyncChangeUnit_INTERFACE_DEFINED__
#define __ISyncChangeUnit_INTERFACE_DEFINED__
extern const IID IID_ISyncChangeUnit;
typedef struct ISyncChangeUnitVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISyncChangeUnit * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISyncChangeUnit * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISyncChangeUnit * This);
	HRESULT(STDMETHODCALLTYPE * GetItemChange) (ISyncChangeUnit * This, ISyncChange ** ppSyncChange);
	HRESULT(STDMETHODCALLTYPE * GetChangeUnitId) (ISyncChangeUnit * This, BYTE * pbChangeUnitId, DWORD * pcbIdSize);
	HRESULT(STDMETHODCALLTYPE * GetChangeUnitVersion) (ISyncChangeUnit * This, const BYTE * pbCurrentReplicaId, SYNC_VERSION * pVersion);
	END_INTERFACE
}  ISyncChangeUnitVtbl;
interface ISyncChangeUnit
{
	CONST_VTBL struct ISyncChangeUnitVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISyncChangeUnit_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISyncChangeUnit_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISyncChangeUnit_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISyncChangeUnit_GetItemChange(This,ppSyncChange) ( (This)->lpVtbl -> GetItemChange(This,ppSyncChange) )
#define ISyncChangeUnit_GetChangeUnitId(This,pbChangeUnitId,pcbIdSize) ( (This)->lpVtbl -> GetChangeUnitId(This,pbChangeUnitId,pcbIdSize) )
#define ISyncChangeUnit_GetChangeUnitVersion(This,pbCurrentReplicaId,pVersion) ( (This)->lpVtbl -> GetChangeUnitVersion(This,pbCurrentReplicaId,pVersion) )
#endif
#endif
#ifndef __IEnumSyncChangeUnits_INTERFACE_DEFINED__
#define __IEnumSyncChangeUnits_INTERFACE_DEFINED__
extern const IID IID_IEnumSyncChangeUnits;
typedef struct IEnumSyncChangeUnitsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumSyncChangeUnits * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumSyncChangeUnits * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumSyncChangeUnits * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumSyncChangeUnits * This, ULONG cChanges, ISyncChangeUnit ** ppChangeUnit, ULONG * pcFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumSyncChangeUnits * This, ULONG cChanges);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumSyncChangeUnits * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumSyncChangeUnits * This, IEnumSyncChangeUnits ** ppEnum);
	END_INTERFACE
}  IEnumSyncChangeUnitsVtbl;
interface IEnumSyncChangeUnits
{
	CONST_VTBL struct IEnumSyncChangeUnitsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumSyncChangeUnits_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumSyncChangeUnits_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumSyncChangeUnits_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumSyncChangeUnits_Next(This,cChanges,ppChangeUnit,pcFetched) ( (This)->lpVtbl -> Next(This,cChanges,ppChangeUnit,pcFetched) )
#define IEnumSyncChangeUnits_Skip(This,cChanges) ( (This)->lpVtbl -> Skip(This,cChanges) )
#define IEnumSyncChangeUnits_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumSyncChangeUnits_Clone(This,ppEnum) ( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
#endif
#ifndef __ISyncChange_INTERFACE_DEFINED__
#define __ISyncChange_INTERFACE_DEFINED__
extern const IID IID_ISyncChange;
typedef struct ISyncChangeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISyncChange * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISyncChange * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISyncChange * This);
	HRESULT(STDMETHODCALLTYPE * GetOwnerReplicaId) (ISyncChange * This, BYTE * pbReplicaId, DWORD * pcbIdSize);
	HRESULT(STDMETHODCALLTYPE * GetRootItemId) (ISyncChange * This, BYTE * pbRootItemId, DWORD * pcbIdSize);
	HRESULT(STDMETHODCALLTYPE * GetChangeVersion) (ISyncChange * This, const BYTE * pbCurrentReplicaId, SYNC_VERSION * pVersion);
	HRESULT(STDMETHODCALLTYPE * GetCreationVersion) (ISyncChange * This, const BYTE * pbCurrentReplicaId, SYNC_VERSION * pVersion);
	HRESULT(STDMETHODCALLTYPE * GetFlags) (ISyncChange * This, DWORD * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * GetWorkEstimate) (ISyncChange * This, DWORD * pdwWork);
	HRESULT(STDMETHODCALLTYPE * GetChangeUnits) (ISyncChange * This, IEnumSyncChangeUnits ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * GetMadeWithKnowledge) (ISyncChange * This, ISyncKnowledge ** ppMadeWithKnowledge);
	HRESULT(STDMETHODCALLTYPE * GetLearnedKnowledge) (ISyncChange * This, ISyncKnowledge ** ppLearnedKnowledge);
	HRESULT(STDMETHODCALLTYPE * SetWorkEstimate) (ISyncChange * This, DWORD dwWork);
	END_INTERFACE
}  ISyncChangeVtbl;
interface ISyncChange
{
	CONST_VTBL struct ISyncChangeVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISyncChange_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISyncChange_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISyncChange_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISyncChange_GetOwnerReplicaId(This,pbReplicaId,pcbIdSize) ( (This)->lpVtbl -> GetOwnerReplicaId(This,pbReplicaId,pcbIdSize) )
#define ISyncChange_GetRootItemId(This,pbRootItemId,pcbIdSize) ( (This)->lpVtbl -> GetRootItemId(This,pbRootItemId,pcbIdSize) )
#define ISyncChange_GetChangeVersion(This,pbCurrentReplicaId,pVersion) ( (This)->lpVtbl -> GetChangeVersion(This,pbCurrentReplicaId,pVersion) )
#define ISyncChange_GetCreationVersion(This,pbCurrentReplicaId,pVersion) ( (This)->lpVtbl -> GetCreationVersion(This,pbCurrentReplicaId,pVersion) )
#define ISyncChange_GetFlags(This,pdwFlags) ( (This)->lpVtbl -> GetFlags(This,pdwFlags) )
#define ISyncChange_GetWorkEstimate(This,pdwWork) ( (This)->lpVtbl -> GetWorkEstimate(This,pdwWork) )
#define ISyncChange_GetChangeUnits(This,ppEnum) ( (This)->lpVtbl -> GetChangeUnits(This,ppEnum) )
#define ISyncChange_GetMadeWithKnowledge(This,ppMadeWithKnowledge) ( (This)->lpVtbl -> GetMadeWithKnowledge(This,ppMadeWithKnowledge) )
#define ISyncChange_GetLearnedKnowledge(This,ppLearnedKnowledge) ( (This)->lpVtbl -> GetLearnedKnowledge(This,ppLearnedKnowledge) )
#define ISyncChange_SetWorkEstimate(This,dwWork) ( (This)->lpVtbl -> SetWorkEstimate(This,dwWork) )
#endif
#endif
#ifndef __ISyncChangeWithPrerequisite_INTERFACE_DEFINED__
#define __ISyncChangeWithPrerequisite_INTERFACE_DEFINED__
extern const IID IID_ISyncChangeWithPrerequisite;
typedef struct ISyncChangeWithPrerequisiteVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISyncChangeWithPrerequisite * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISyncChangeWithPrerequisite * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISyncChangeWithPrerequisite * This);
	HRESULT(STDMETHODCALLTYPE * GetPrerequisiteKnowledge) (ISyncChangeWithPrerequisite * This, ISyncKnowledge ** ppPrerequisiteKnowledge);
	HRESULT(STDMETHODCALLTYPE * GetLearnedKnowledgeWithPrerequisite) (ISyncChangeWithPrerequisite * This, ISyncKnowledge * pDestinationKnowledge, ISyncKnowledge ** ppLearnedKnowledgeWithPrerequisite);
	END_INTERFACE
}  ISyncChangeWithPrerequisiteVtbl;
interface ISyncChangeWithPrerequisite
{
	CONST_VTBL struct ISyncChangeWithPrerequisiteVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISyncChangeWithPrerequisite_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISyncChangeWithPrerequisite_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISyncChangeWithPrerequisite_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISyncChangeWithPrerequisite_GetPrerequisiteKnowledge(This,ppPrerequisiteKnowledge) ( (This)->lpVtbl -> GetPrerequisiteKnowledge(This,ppPrerequisiteKnowledge) )
#define ISyncChangeWithPrerequisite_GetLearnedKnowledgeWithPrerequisite(This,pDestinationKnowledge,ppLearnedKnowledgeWithPrerequisite) ( (This)->lpVtbl -> GetLearnedKnowledgeWithPrerequisite(This,pDestinationKnowledge,ppLearnedKnowledgeWithPrerequisite) )
#endif
#endif
#ifndef __ISyncFullEnumerationChange_INTERFACE_DEFINED__
#define __ISyncFullEnumerationChange_INTERFACE_DEFINED__
extern const IID IID_ISyncFullEnumerationChange;
typedef struct ISyncFullEnumerationChangeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISyncFullEnumerationChange * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISyncFullEnumerationChange * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISyncFullEnumerationChange * This);
	HRESULT(STDMETHODCALLTYPE * GetLearnedKnowledgeAfterRecoveryComplete) (ISyncFullEnumerationChange * This, ISyncKnowledge ** ppLearnedKnowledge);
	HRESULT(STDMETHODCALLTYPE * GetLearnedForgottenKnowledge) (ISyncFullEnumerationChange * This, IForgottenKnowledge ** ppLearnedForgottenKnowledge);
	END_INTERFACE
}  ISyncFullEnumerationChangeVtbl;
interface ISyncFullEnumerationChange
{
	CONST_VTBL struct ISyncFullEnumerationChangeVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISyncFullEnumerationChange_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISyncFullEnumerationChange_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISyncFullEnumerationChange_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISyncFullEnumerationChange_GetLearnedKnowledgeAfterRecoveryComplete(This,ppLearnedKnowledge) ( (This)->lpVtbl -> GetLearnedKnowledgeAfterRecoveryComplete(This,ppLearnedKnowledge) )
#define ISyncFullEnumerationChange_GetLearnedForgottenKnowledge(This,ppLearnedForgottenKnowledge) ( (This)->lpVtbl -> GetLearnedForgottenKnowledge(This,ppLearnedForgottenKnowledge) )
#endif
#endif
#ifndef __IDataRetrieverCallback_INTERFACE_DEFINED__
#define __IDataRetrieverCallback_INTERFACE_DEFINED__
extern const IID IID_IDataRetrieverCallback;
typedef struct IDataRetrieverCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDataRetrieverCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDataRetrieverCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDataRetrieverCallback * This);
	HRESULT(STDMETHODCALLTYPE * LoadChangeDataComplete) (IDataRetrieverCallback * This, IUnknown * pUnkData);
	HRESULT(STDMETHODCALLTYPE * LoadChangeDataError) (IDataRetrieverCallback * This, HRESULT hrError);
	END_INTERFACE
}  IDataRetrieverCallbackVtbl;
interface IDataRetrieverCallback
{
	CONST_VTBL struct IDataRetrieverCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDataRetrieverCallback_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDataRetrieverCallback_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IDataRetrieverCallback_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IDataRetrieverCallback_LoadChangeDataComplete(This,pUnkData) ( (This)->lpVtbl -> LoadChangeDataComplete(This,pUnkData) )
#define IDataRetrieverCallback_LoadChangeDataError(This,hrError) ( (This)->lpVtbl -> LoadChangeDataError(This,hrError) )
#endif
#endif
#ifndef __ILoadChangeContext_INTERFACE_DEFINED__
#define __ILoadChangeContext_INTERFACE_DEFINED__
extern const IID IID_ILoadChangeContext;
typedef struct ILoadChangeContextVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ILoadChangeContext * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ILoadChangeContext * This);
	ULONG(STDMETHODCALLTYPE * Release) (ILoadChangeContext * This);
	HRESULT(STDMETHODCALLTYPE * GetSyncChange) (ILoadChangeContext * This, ISyncChange ** ppSyncChange);
	HRESULT(STDMETHODCALLTYPE * SetRecoverableErrorOnChange) (ILoadChangeContext * This, HRESULT hrError, IRecoverableErrorData * pErrorData);
	HRESULT(STDMETHODCALLTYPE * SetRecoverableErrorOnChangeUnit) (ILoadChangeContext * This, HRESULT hrError, ISyncChangeUnit * pChangeUnit, IRecoverableErrorData * pErrorData);
	END_INTERFACE
}  ILoadChangeContextVtbl;
interface ILoadChangeContext
{
	CONST_VTBL struct ILoadChangeContextVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ILoadChangeContext_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ILoadChangeContext_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ILoadChangeContext_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ILoadChangeContext_GetSyncChange(This,ppSyncChange) ( (This)->lpVtbl -> GetSyncChange(This,ppSyncChange) )
#define ILoadChangeContext_SetRecoverableErrorOnChange(This,hrError,pErrorData) ( (This)->lpVtbl -> SetRecoverableErrorOnChange(This,hrError,pErrorData) )
#define ILoadChangeContext_SetRecoverableErrorOnChangeUnit(This,hrError,pChangeUnit,pErrorData) ( (This)->lpVtbl -> SetRecoverableErrorOnChangeUnit(This,hrError,pChangeUnit,pErrorData) )
#endif
#endif
#ifndef __ISynchronousDataRetriever_INTERFACE_DEFINED__
#define __ISynchronousDataRetriever_INTERFACE_DEFINED__
extern const IID IID_ISynchronousDataRetriever;
typedef struct ISynchronousDataRetrieverVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISynchronousDataRetriever * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISynchronousDataRetriever * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISynchronousDataRetriever * This);
	HRESULT(STDMETHODCALLTYPE * GetIdParameters) (ISynchronousDataRetriever * This, ID_PARAMETERS * pIdParameters);
	HRESULT(STDMETHODCALLTYPE * LoadChangeData) (ISynchronousDataRetriever * This, ILoadChangeContext * pLoadChangeContext, IUnknown ** ppUnkData);
	END_INTERFACE
}  ISynchronousDataRetrieverVtbl;
interface ISynchronousDataRetriever
{
	CONST_VTBL struct ISynchronousDataRetrieverVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISynchronousDataRetriever_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISynchronousDataRetriever_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISynchronousDataRetriever_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISynchronousDataRetriever_GetIdParameters(This,pIdParameters) ( (This)->lpVtbl -> GetIdParameters(This,pIdParameters) )
#define ISynchronousDataRetriever_LoadChangeData(This,pLoadChangeContext,ppUnkData) ( (This)->lpVtbl -> LoadChangeData(This,pLoadChangeContext,ppUnkData) )
#endif
#endif
#ifndef __IAsynchronousDataRetriever_INTERFACE_DEFINED__
#define __IAsynchronousDataRetriever_INTERFACE_DEFINED__
extern const IID IID_IAsynchronousDataRetriever;
typedef struct IAsynchronousDataRetrieverVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAsynchronousDataRetriever * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAsynchronousDataRetriever * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAsynchronousDataRetriever * This);
	HRESULT(STDMETHODCALLTYPE * GetIdParameters) (IAsynchronousDataRetriever * This, ID_PARAMETERS * pIdParameters);
	HRESULT(STDMETHODCALLTYPE * RegisterCallback) (IAsynchronousDataRetriever * This, IDataRetrieverCallback * pDataRetrieverCallback);
	HRESULT(STDMETHODCALLTYPE * RevokeCallback) (IAsynchronousDataRetriever * This, IDataRetrieverCallback * pDataRetrieverCallback);
	HRESULT(STDMETHODCALLTYPE * LoadChangeData) (IAsynchronousDataRetriever * This, ILoadChangeContext * pLoadChangeContext);
	END_INTERFACE
}  IAsynchronousDataRetrieverVtbl;
interface IAsynchronousDataRetriever
{
	CONST_VTBL struct IAsynchronousDataRetrieverVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAsynchronousDataRetriever_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAsynchronousDataRetriever_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IAsynchronousDataRetriever_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IAsynchronousDataRetriever_GetIdParameters(This,pIdParameters) ( (This)->lpVtbl -> GetIdParameters(This,pIdParameters) )
#define IAsynchronousDataRetriever_RegisterCallback(This,pDataRetrieverCallback) ( (This)->lpVtbl -> RegisterCallback(This,pDataRetrieverCallback) )
#define IAsynchronousDataRetriever_RevokeCallback(This,pDataRetrieverCallback) ( (This)->lpVtbl -> RevokeCallback(This,pDataRetrieverCallback) )
#define IAsynchronousDataRetriever_LoadChangeData(This,pLoadChangeContext) ( (This)->lpVtbl -> LoadChangeData(This,pLoadChangeContext) )
#endif
#endif
#ifndef __IFilterRequestCallback_INTERFACE_DEFINED__
#define __IFilterRequestCallback_INTERFACE_DEFINED__
extern const IID IID_IFilterRequestCallback;
typedef struct IFilterRequestCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFilterRequestCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFilterRequestCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFilterRequestCallback * This);
	HRESULT(STDMETHODCALLTYPE * RequestFilter) (IFilterRequestCallback * This, IUnknown * pFilter, FILTERING_TYPE filteringType);
	END_INTERFACE
}  IFilterRequestCallbackVtbl;
interface IFilterRequestCallback
{
	CONST_VTBL struct IFilterRequestCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFilterRequestCallback_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFilterRequestCallback_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IFilterRequestCallback_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IFilterRequestCallback_RequestFilter(This,pFilter,filteringType) ( (This)->lpVtbl -> RequestFilter(This,pFilter,filteringType) )
#endif
#endif
#ifndef __IRequestFilteredSync_INTERFACE_DEFINED__
#define __IRequestFilteredSync_INTERFACE_DEFINED__
extern const IID IID_IRequestFilteredSync;
typedef struct IRequestFilteredSyncVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRequestFilteredSync * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRequestFilteredSync * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRequestFilteredSync * This);
	HRESULT(STDMETHODCALLTYPE * SpecifyFilter) (IRequestFilteredSync * This, IFilterRequestCallback * pCallback);
	END_INTERFACE
}  IRequestFilteredSyncVtbl;
interface IRequestFilteredSync
{
	CONST_VTBL struct IRequestFilteredSyncVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRequestFilteredSync_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRequestFilteredSync_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRequestFilteredSync_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRequestFilteredSync_SpecifyFilter(This,pCallback) ( (This)->lpVtbl -> SpecifyFilter(This,pCallback) )
#endif
#endif
#ifndef __ISupportFilteredSync_INTERFACE_DEFINED__
#define __ISupportFilteredSync_INTERFACE_DEFINED__
extern const IID IID_ISupportFilteredSync;
typedef struct ISupportFilteredSyncVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISupportFilteredSync * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISupportFilteredSync * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISupportFilteredSync * This);
	HRESULT(STDMETHODCALLTYPE * AddFilter) (ISupportFilteredSync * This, IUnknown * pFilter, FILTERING_TYPE filteringType);
	END_INTERFACE
}  ISupportFilteredSyncVtbl;
interface ISupportFilteredSync
{
	CONST_VTBL struct ISupportFilteredSyncVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISupportFilteredSync_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISupportFilteredSync_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISupportFilteredSync_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISupportFilteredSync_AddFilter(This,pFilter,filteringType) ( (This)->lpVtbl -> AddFilter(This,pFilter,filteringType) )
#endif
#endif
#ifndef __ISupportLastWriteTime_INTERFACE_DEFINED__
#define __ISupportLastWriteTime_INTERFACE_DEFINED__
extern const IID IID_ISupportLastWriteTime;
typedef struct ISupportLastWriteTimeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISupportLastWriteTime * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISupportLastWriteTime * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISupportLastWriteTime * This);
	HRESULT(STDMETHODCALLTYPE * GetItemChangeTime) (ISupportLastWriteTime * This, const BYTE * pbItemId, ULONGLONG * pullTimestamp);
	HRESULT(STDMETHODCALLTYPE * GetChangeUnitChangeTime) (ISupportLastWriteTime * This, const BYTE * pbItemId, const BYTE * pbChangeUnitId, ULONGLONG * pullTimestamp);
	END_INTERFACE
}  ISupportLastWriteTimeVtbl;
interface ISupportLastWriteTime
{
	CONST_VTBL struct ISupportLastWriteTimeVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISupportLastWriteTime_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISupportLastWriteTime_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISupportLastWriteTime_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISupportLastWriteTime_GetItemChangeTime(This,pbItemId,pullTimestamp) ( (This)->lpVtbl -> GetItemChangeTime(This,pbItemId,pullTimestamp) )
#define ISupportLastWriteTime_GetChangeUnitChangeTime(This,pbItemId,pbChangeUnitId,pullTimestamp) ( (This)->lpVtbl -> GetChangeUnitChangeTime(This,pbItemId,pbChangeUnitId,pullTimestamp) )
#endif
#endif
#ifndef __IProviderConverter_INTERFACE_DEFINED__
#define __IProviderConverter_INTERFACE_DEFINED__
extern const IID IID_IProviderConverter;
typedef struct IProviderConverterVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IProviderConverter * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IProviderConverter * This);
	ULONG(STDMETHODCALLTYPE * Release) (IProviderConverter * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IProviderConverter * This, ISyncProvider * pISyncProvider);
	END_INTERFACE
}  IProviderConverterVtbl;
interface IProviderConverter
{
	CONST_VTBL struct IProviderConverterVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IProviderConverter_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IProviderConverter_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IProviderConverter_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IProviderConverter_Initialize(This,pISyncProvider) ( (This)->lpVtbl -> Initialize(This,pISyncProvider) )
#endif
#endif
#endif
