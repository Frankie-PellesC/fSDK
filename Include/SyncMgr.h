/*+@@file@@----------------------------------------------------------------*//*!
 \file		SyncMgr.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 02:05:42 2016
 \date		Modified on Sat Sep 17 02:05:42 2016
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
#ifndef __syncmgr_h__
#define __syncmgr_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ISyncMgrHandlerCollection_FWD_DEFINED__
#define __ISyncMgrHandlerCollection_FWD_DEFINED__
typedef interface ISyncMgrHandlerCollection ISyncMgrHandlerCollection;
#endif
#ifndef __ISyncMgrHandler_FWD_DEFINED__
#define __ISyncMgrHandler_FWD_DEFINED__
typedef interface ISyncMgrHandler ISyncMgrHandler;
#endif
#ifndef __ISyncMgrHandlerInfo_FWD_DEFINED__
#define __ISyncMgrHandlerInfo_FWD_DEFINED__
typedef interface ISyncMgrHandlerInfo ISyncMgrHandlerInfo;
#endif
#ifndef __ISyncMgrSyncItemContainer_FWD_DEFINED__
#define __ISyncMgrSyncItemContainer_FWD_DEFINED__
typedef interface ISyncMgrSyncItemContainer ISyncMgrSyncItemContainer;
#endif
#ifndef __ISyncMgrSyncItem_FWD_DEFINED__
#define __ISyncMgrSyncItem_FWD_DEFINED__
typedef interface ISyncMgrSyncItem ISyncMgrSyncItem;
#endif
#ifndef __ISyncMgrSyncItemInfo_FWD_DEFINED__
#define __ISyncMgrSyncItemInfo_FWD_DEFINED__
typedef interface ISyncMgrSyncItemInfo ISyncMgrSyncItemInfo;
#endif
#ifndef __IEnumSyncMgrSyncItems_FWD_DEFINED__
#define __IEnumSyncMgrSyncItems_FWD_DEFINED__
typedef interface IEnumSyncMgrSyncItems IEnumSyncMgrSyncItems;
#endif
#ifndef __ISyncMgrSessionCreator_FWD_DEFINED__
#define __ISyncMgrSessionCreator_FWD_DEFINED__
typedef interface ISyncMgrSessionCreator ISyncMgrSessionCreator;
#endif
#ifndef __ISyncMgrSyncCallback_FWD_DEFINED__
#define __ISyncMgrSyncCallback_FWD_DEFINED__
typedef interface ISyncMgrSyncCallback ISyncMgrSyncCallback;
#endif
#ifndef __ISyncMgrUIOperation_FWD_DEFINED__
#define __ISyncMgrUIOperation_FWD_DEFINED__
typedef interface ISyncMgrUIOperation ISyncMgrUIOperation;
#endif
#ifndef __ISyncMgrEventLinkUIOperation_FWD_DEFINED__
#define __ISyncMgrEventLinkUIOperation_FWD_DEFINED__
typedef interface ISyncMgrEventLinkUIOperation ISyncMgrEventLinkUIOperation;
#endif
#ifndef __ISyncMgrScheduleWizardUIOperation_FWD_DEFINED__
#define __ISyncMgrScheduleWizardUIOperation_FWD_DEFINED__
typedef interface ISyncMgrScheduleWizardUIOperation ISyncMgrScheduleWizardUIOperation;
#endif
#ifndef __ISyncMgrSyncResult_FWD_DEFINED__
#define __ISyncMgrSyncResult_FWD_DEFINED__
typedef interface ISyncMgrSyncResult ISyncMgrSyncResult;
#endif
#ifndef __ISyncMgrControl_FWD_DEFINED__
#define __ISyncMgrControl_FWD_DEFINED__
typedef interface ISyncMgrControl ISyncMgrControl;
#endif
#ifndef __ISyncMgrEventStore_FWD_DEFINED__
#define __ISyncMgrEventStore_FWD_DEFINED__
typedef interface ISyncMgrEventStore ISyncMgrEventStore;
#endif
#ifndef __ISyncMgrEvent_FWD_DEFINED__
#define __ISyncMgrEvent_FWD_DEFINED__
typedef interface ISyncMgrEvent ISyncMgrEvent;
#endif
#ifndef __IEnumSyncMgrEvents_FWD_DEFINED__
#define __IEnumSyncMgrEvents_FWD_DEFINED__
typedef interface IEnumSyncMgrEvents IEnumSyncMgrEvents;
#endif
#ifndef __ISyncMgrConflictStore_FWD_DEFINED__
#define __ISyncMgrConflictStore_FWD_DEFINED__
typedef interface ISyncMgrConflictStore ISyncMgrConflictStore;
#endif
#ifndef __IEnumSyncMgrConflict_FWD_DEFINED__
#define __IEnumSyncMgrConflict_FWD_DEFINED__
typedef interface IEnumSyncMgrConflict IEnumSyncMgrConflict;
#endif
#ifndef __ISyncMgrConflict_FWD_DEFINED__
#define __ISyncMgrConflict_FWD_DEFINED__
typedef interface ISyncMgrConflict ISyncMgrConflict;
#endif
#ifndef __ISyncMgrResolutionHandler_FWD_DEFINED__
#define __ISyncMgrResolutionHandler_FWD_DEFINED__
typedef interface ISyncMgrResolutionHandler ISyncMgrResolutionHandler;
#endif
#ifndef __ISyncMgrConflictPresenter_FWD_DEFINED__
#define __ISyncMgrConflictPresenter_FWD_DEFINED__
typedef interface ISyncMgrConflictPresenter ISyncMgrConflictPresenter;
#endif
#ifndef __ISyncMgrConflictResolveInfo_FWD_DEFINED__
#define __ISyncMgrConflictResolveInfo_FWD_DEFINED__
typedef interface ISyncMgrConflictResolveInfo ISyncMgrConflictResolveInfo;
#endif
#ifndef __ISyncMgrConflictFolder_FWD_DEFINED__
#define __ISyncMgrConflictFolder_FWD_DEFINED__
typedef interface ISyncMgrConflictFolder ISyncMgrConflictFolder;
#endif
#ifndef __ISyncMgrConflictItems_FWD_DEFINED__
#define __ISyncMgrConflictItems_FWD_DEFINED__
typedef interface ISyncMgrConflictItems ISyncMgrConflictItems;
#endif
#ifndef __ISyncMgrConflictResolutionItems_FWD_DEFINED__
#define __ISyncMgrConflictResolutionItems_FWD_DEFINED__
typedef interface ISyncMgrConflictResolutionItems ISyncMgrConflictResolutionItems;
#endif
#ifndef __SyncMgrClient_FWD_DEFINED__
#define __SyncMgrClient_FWD_DEFINED__
typedef struct SyncMgrClient SyncMgrClient;
#endif
#ifndef __SyncMgrControl_FWD_DEFINED__
#define __SyncMgrControl_FWD_DEFINED__
typedef struct SyncMgrControl SyncMgrControl;
#endif
#ifndef __SyncMgrScheduleWizard_FWD_DEFINED__
#define __SyncMgrScheduleWizard_FWD_DEFINED__
typedef struct SyncMgrScheduleWizard SyncMgrScheduleWizard;
#endif
#ifndef __SyncMgrFolder_FWD_DEFINED__
#define __SyncMgrFolder_FWD_DEFINED__
typedef struct SyncMgrFolder SyncMgrFolder;
#endif
#ifndef __SyncSetupFolder_FWD_DEFINED__
#define __SyncSetupFolder_FWD_DEFINED__
typedef struct SyncSetupFolder SyncSetupFolder;
#endif
#ifndef __ConflictFolder_FWD_DEFINED__
#define __ConflictFolder_FWD_DEFINED__
typedef struct ConflictFolder ConflictFolder;
#endif
#ifndef __SyncResultsFolder_FWD_DEFINED__
#define __SyncResultsFolder_FWD_DEFINED__
typedef struct SyncResultsFolder SyncResultsFolder;
#endif
#ifndef __SimpleConflictPresenter_FWD_DEFINED__
#define __SimpleConflictPresenter_FWD_DEFINED__
typedef struct SimpleConflictPresenter SimpleConflictPresenter;
#endif
#include <objidl.h>
#include <oleidl.h>
#include <shobjidl.h>
#define	MAX_SYNCMGR_ID	( 64 )
#define	MAX_SYNCMGR_PROGRESSTEXT	( 260 )
#define	MAX_SYNCMGR_NAME	( 128 )
extern RPC_IF_HANDLE __MIDL_itf_syncmgr_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_syncmgr_0000_0000_v0_0_s_ifspec;
#ifndef __ISyncMgrHandlerCollection_INTERFACE_DEFINED__
#define __ISyncMgrHandlerCollection_INTERFACE_DEFINED__
extern const IID IID_ISyncMgrHandlerCollection;
typedef struct ISyncMgrHandlerCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISyncMgrHandlerCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISyncMgrHandlerCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISyncMgrHandlerCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetHandlerEnumerator) (ISyncMgrHandlerCollection * This, IEnumString ** ppenum);
	HRESULT(STDMETHODCALLTYPE * BindToHandler) (ISyncMgrHandlerCollection * This, LPCWSTR pszHandlerID, REFIID riid, void **ppv);
END_INTERFACE
}  ISyncMgrHandlerCollectionVtbl;
interface ISyncMgrHandlerCollection
{
	CONST_VTBL struct ISyncMgrHandlerCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISyncMgrHandlerCollection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISyncMgrHandlerCollection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISyncMgrHandlerCollection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISyncMgrHandlerCollection_GetHandlerEnumerator(This,ppenum) ( (This)->lpVtbl -> GetHandlerEnumerator(This,ppenum) )
#define ISyncMgrHandlerCollection_BindToHandler(This,pszHandlerID,riid,ppv) ( (This)->lpVtbl -> BindToHandler(This,pszHandlerID,riid,ppv) )
#endif
#endif
typedef enum SYNCMGR_HANDLER_CAPABILITIES
{
	SYNCMGR_HCM_NONE = 0,
	SYNCMGR_HCM_PROVIDES_ICON = 0x1,
	SYNCMGR_HCM_EVENT_STORE = 0x2,
	SYNCMGR_HCM_CONFLICT_STORE = 0x4,
	SYNCMGR_HCM_SUPPORTS_CONCURRENT_SESSIONS = 0x10,
	SYNCMGR_HCM_CAN_BROWSE_CONTENT = 0x10000,
	SYNCMGR_HCM_CAN_SHOW_SCHEDULE = 0x20000,
	SYNCMGR_HCM_QUERY_BEFORE_ACTIVATE = 0x100000,
	SYNCMGR_HCM_QUERY_BEFORE_DEACTIVATE = 0x200000,
	SYNCMGR_HCM_QUERY_BEFORE_ENABLE = 0x400000,
	SYNCMGR_HCM_QUERY_BEFORE_DISABLE = 0x800000,
	SYNCMGR_HCM_VALID_MASK = 0xf30017
} SYNCMGR_HANDLER_CAPABILITIES;
typedef enum SYNCMGR_HANDLER_POLICIES
{
	SYNCMGR_HPM_NONE = 0,
	SYNCMGR_HPM_PREVENT_ACTIVATE = 0x1,
	SYNCMGR_HPM_PREVENT_DEACTIVATE = 0x2,
	SYNCMGR_HPM_PREVENT_ENABLE = 0x4,
	SYNCMGR_HPM_PREVENT_DISABLE = 0x8,
	SYNCMGR_HPM_PREVENT_START_SYNC = 0x10,
	SYNCMGR_HPM_PREVENT_STOP_SYNC = 0x20,
	SYNCMGR_HPM_DISABLE_ENABLE = 0x100,
	SYNCMGR_HPM_DISABLE_DISABLE = 0x200,
	SYNCMGR_HPM_DISABLE_START_SYNC = 0x400,
	SYNCMGR_HPM_DISABLE_STOP_SYNC = 0x800,
	SYNCMGR_HPM_DISABLE_BROWSE = 0x1000,
	SYNCMGR_HPM_DISABLE_SCHEDULE = 0x2000,
	SYNCMGR_HPM_HIDDEN_BY_DEFAULT = 0x10000,
	SYNCMGR_HPM_BACKGROUND_SYNC_ONLY = (SYNCMGR_HPM_PREVENT_START_SYNC | SYNCMGR_HPM_PREVENT_STOP_SYNC),
	SYNCMGR_HPM_VALID_MASK = 0x12f3f
} SYNCMGR_HANDLER_POLICIES;
extern RPC_IF_HANDLE __MIDL_itf_syncmgr_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_syncmgr_0000_0001_v0_0_s_ifspec;
#ifndef __ISyncMgrHandler_INTERFACE_DEFINED__
#define __ISyncMgrHandler_INTERFACE_DEFINED__
extern const IID IID_ISyncMgrHandler;
typedef struct ISyncMgrHandlerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISyncMgrHandler * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISyncMgrHandler * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISyncMgrHandler * This);
	HRESULT(STDMETHODCALLTYPE * GetName) (ISyncMgrHandler * This, LPWSTR * ppszName);
	HRESULT(STDMETHODCALLTYPE * GetHandlerInfo) (ISyncMgrHandler * This, ISyncMgrHandlerInfo ** ppHandlerInfo);
	HRESULT(STDMETHODCALLTYPE * GetObject) (ISyncMgrHandler * This, REFGUID rguidObjectID, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * GetCapabilities) (ISyncMgrHandler * This, SYNCMGR_HANDLER_CAPABILITIES * pmCapabilities);
	HRESULT(STDMETHODCALLTYPE * GetPolicies) (ISyncMgrHandler * This, SYNCMGR_HANDLER_POLICIES * pmPolicies);
	HRESULT(STDMETHODCALLTYPE * Activate) (ISyncMgrHandler * This, BOOL fActivate);
	HRESULT(STDMETHODCALLTYPE * Enable) (ISyncMgrHandler * This, BOOL fEnable);
	HRESULT(STDMETHODCALLTYPE * Synchronize) (ISyncMgrHandler * This, LPCWSTR * ppszItemIDs, ULONG cItems, HWND hwndOwner, ISyncMgrSessionCreator * pSessionCreator, IUnknown * punk);
	END_INTERFACE
}  ISyncMgrHandlerVtbl;
interface ISyncMgrHandler
{
	CONST_VTBL struct ISyncMgrHandlerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISyncMgrHandler_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISyncMgrHandler_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISyncMgrHandler_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISyncMgrHandler_GetName(This,ppszName) ( (This)->lpVtbl -> GetName(This,ppszName) )
#define ISyncMgrHandler_GetHandlerInfo(This,ppHandlerInfo) ( (This)->lpVtbl -> GetHandlerInfo(This,ppHandlerInfo) )
#define ISyncMgrHandler_GetObject(This,rguidObjectID,riid,ppv) ( (This)->lpVtbl -> GetObject(This,rguidObjectID,riid,ppv) )
#define ISyncMgrHandler_GetCapabilities(This,pmCapabilities) ( (This)->lpVtbl -> GetCapabilities(This,pmCapabilities) )
#define ISyncMgrHandler_GetPolicies(This,pmPolicies) ( (This)->lpVtbl -> GetPolicies(This,pmPolicies) )
#define ISyncMgrHandler_Activate(This,fActivate) ( (This)->lpVtbl -> Activate(This,fActivate) )
#define ISyncMgrHandler_Enable(This,fEnable) ( (This)->lpVtbl -> Enable(This,fEnable) )
#define ISyncMgrHandler_Synchronize(This,ppszItemIDs,cItems,hwndOwner,pSessionCreator,punk) ( (This)->lpVtbl -> Synchronize(This,ppszItemIDs,cItems,hwndOwner,pSessionCreator,punk) )
#endif
#endif
typedef enum SYNCMGR_HANDLER_TYPE
{
	SYNCMGR_HT_UNSPECIFIED = 0,
	SYNCMGR_HT_APPLICATION = 1,
	SYNCMGR_HT_DEVICE = 2,
	SYNCMGR_HT_FOLDER = 3,
	SYNCMGR_HT_SERVICE = 4,
	SYNCMGR_HT_COMPUTER = 5,
	SYNCMGR_HT_MIN = 0,
	SYNCMGR_HT_MAX = SYNCMGR_HT_COMPUTER
} SYNCMGR_HANDLER_TYPE;
extern RPC_IF_HANDLE __MIDL_itf_syncmgr_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_syncmgr_0000_0002_v0_0_s_ifspec;
#ifndef __ISyncMgrHandlerInfo_INTERFACE_DEFINED__
#define __ISyncMgrHandlerInfo_INTERFACE_DEFINED__
extern const IID IID_ISyncMgrHandlerInfo;
typedef struct ISyncMgrHandlerInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISyncMgrHandlerInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISyncMgrHandlerInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISyncMgrHandlerInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetType) (ISyncMgrHandlerInfo * This, SYNCMGR_HANDLER_TYPE * pnType);
	HRESULT(STDMETHODCALLTYPE * GetTypeLabel) (ISyncMgrHandlerInfo * This, LPWSTR * ppszTypeLabel);
	HRESULT(STDMETHODCALLTYPE * GetComment) (ISyncMgrHandlerInfo * This, LPWSTR * ppszComment);
	HRESULT(STDMETHODCALLTYPE * GetLastSyncTime) (ISyncMgrHandlerInfo * This, FILETIME * pftLastSync);
	HRESULT(STDMETHODCALLTYPE * IsActive) (ISyncMgrHandlerInfo * This);
	HRESULT(STDMETHODCALLTYPE * IsEnabled) (ISyncMgrHandlerInfo * This);
	HRESULT(STDMETHODCALLTYPE * IsConnected) (ISyncMgrHandlerInfo * This);
END_INTERFACE
}  ISyncMgrHandlerInfoVtbl;
interface ISyncMgrHandlerInfo
{
	CONST_VTBL struct ISyncMgrHandlerInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISyncMgrHandlerInfo_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISyncMgrHandlerInfo_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISyncMgrHandlerInfo_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISyncMgrHandlerInfo_GetType(This,pnType) ( (This)->lpVtbl -> GetType(This,pnType) )
#define ISyncMgrHandlerInfo_GetTypeLabel(This,ppszTypeLabel) ( (This)->lpVtbl -> GetTypeLabel(This,ppszTypeLabel) )
#define ISyncMgrHandlerInfo_GetComment(This,ppszComment) ( (This)->lpVtbl -> GetComment(This,ppszComment) )
#define ISyncMgrHandlerInfo_GetLastSyncTime(This,pftLastSync) ( (This)->lpVtbl -> GetLastSyncTime(This,pftLastSync) )
#define ISyncMgrHandlerInfo_IsActive(This) ( (This)->lpVtbl -> IsActive(This) )
#define ISyncMgrHandlerInfo_IsEnabled(This) ( (This)->lpVtbl -> IsEnabled(This) )
#define ISyncMgrHandlerInfo_IsConnected(This) ( (This)->lpVtbl -> IsConnected(This) )
#endif
#endif
#ifndef __ISyncMgrSyncItemContainer_INTERFACE_DEFINED__
#define __ISyncMgrSyncItemContainer_INTERFACE_DEFINED__
extern const IID IID_ISyncMgrSyncItemContainer;
typedef struct ISyncMgrSyncItemContainerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISyncMgrSyncItemContainer * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISyncMgrSyncItemContainer * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISyncMgrSyncItemContainer * This);
	HRESULT(STDMETHODCALLTYPE * GetSyncItem) (ISyncMgrSyncItemContainer * This, LPCWSTR pszItemID, ISyncMgrSyncItem ** ppItem);
	HRESULT(STDMETHODCALLTYPE * GetSyncItemEnumerator) (ISyncMgrSyncItemContainer * This, IEnumSyncMgrSyncItems ** ppenum);
	HRESULT(STDMETHODCALLTYPE * GetSyncItemCount) (ISyncMgrSyncItemContainer * This, ULONG * pcItems);
	END_INTERFACE
}  ISyncMgrSyncItemContainerVtbl;
interface ISyncMgrSyncItemContainer
{
	CONST_VTBL struct ISyncMgrSyncItemContainerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISyncMgrSyncItemContainer_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISyncMgrSyncItemContainer_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISyncMgrSyncItemContainer_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISyncMgrSyncItemContainer_GetSyncItem(This,pszItemID,ppItem) ( (This)->lpVtbl -> GetSyncItem(This,pszItemID,ppItem) )
#define ISyncMgrSyncItemContainer_GetSyncItemEnumerator(This,ppenum) ( (This)->lpVtbl -> GetSyncItemEnumerator(This,ppenum) )
#define ISyncMgrSyncItemContainer_GetSyncItemCount(This,pcItems) ( (This)->lpVtbl -> GetSyncItemCount(This,pcItems) )
#endif
#endif
typedef enum SYNCMGR_ITEM_CAPABILITIES
{
	SYNCMGR_ICM_NONE = 0,
	SYNCMGR_ICM_PROVIDES_ICON = 0x1,
	SYNCMGR_ICM_EVENT_STORE = 0x2,
	SYNCMGR_ICM_CONFLICT_STORE = 0x4,
	SYNCMGR_ICM_CAN_DELETE = 0x10,
	SYNCMGR_ICM_CAN_BROWSE_CONTENT = 0x10000,
	SYNCMGR_ICM_QUERY_BEFORE_ENABLE = 0x100000,
	SYNCMGR_ICM_QUERY_BEFORE_DISABLE = 0x200000,
	SYNCMGR_ICM_QUERY_BEFORE_DELETE = 0x400000,
	SYNCMGR_ICM_VALID_MASK = 0x710017
} SYNCMGR_ITEM_CAPABILITIES;
typedef enum SYNCMGR_ITEM_POLICIES
{
	SYNCMGR_IPM_NONE = 0,
	SYNCMGR_IPM_PREVENT_ENABLE = 0x1,
	SYNCMGR_IPM_PREVENT_DISABLE = 0x2,
	SYNCMGR_IPM_PREVENT_START_SYNC = 0x4,
	SYNCMGR_IPM_PREVENT_STOP_SYNC = 0x8,
	SYNCMGR_IPM_DISABLE_ENABLE = 0x10,
	SYNCMGR_IPM_DISABLE_DISABLE = 0x20,
	SYNCMGR_IPM_DISABLE_START_SYNC = 0x40,
	SYNCMGR_IPM_DISABLE_STOP_SYNC = 0x80,
	SYNCMGR_IPM_DISABLE_BROWSE = 0x100,
	SYNCMGR_IPM_DISABLE_DELETE = 0x200,
	SYNCMGR_IPM_HIDDEN_BY_DEFAULT = 0x10000,
	SYNCMGR_IPM_VALID_MASK = 0x102ff
} SYNCMGR_ITEM_POLICIES;
extern RPC_IF_HANDLE __MIDL_itf_syncmgr_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_syncmgr_0000_0004_v0_0_s_ifspec;
#ifndef __ISyncMgrSyncItem_INTERFACE_DEFINED__
#define __ISyncMgrSyncItem_INTERFACE_DEFINED__
extern const IID IID_ISyncMgrSyncItem;
typedef struct ISyncMgrSyncItemVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISyncMgrSyncItem * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISyncMgrSyncItem * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISyncMgrSyncItem * This);
	HRESULT(STDMETHODCALLTYPE * GetItemID) (ISyncMgrSyncItem * This, LPWSTR * ppszItemID);
	HRESULT(STDMETHODCALLTYPE * GetName) (ISyncMgrSyncItem * This, LPWSTR * ppszName);
	HRESULT(STDMETHODCALLTYPE * GetItemInfo) (ISyncMgrSyncItem * This, ISyncMgrSyncItemInfo ** ppItemInfo);
	HRESULT(STDMETHODCALLTYPE * GetObject) (ISyncMgrSyncItem * This, REFGUID rguidObjectID, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * GetCapabilities) (ISyncMgrSyncItem * This, SYNCMGR_ITEM_CAPABILITIES * pmCapabilities);
	HRESULT(STDMETHODCALLTYPE * GetPolicies) (ISyncMgrSyncItem * This, SYNCMGR_ITEM_POLICIES * pmPolicies);
	HRESULT(STDMETHODCALLTYPE * Enable) (ISyncMgrSyncItem * This, BOOL fEnable);
	HRESULT(STDMETHODCALLTYPE * Delete) (ISyncMgrSyncItem * This);
	END_INTERFACE
}  ISyncMgrSyncItemVtbl;
interface ISyncMgrSyncItem
{
	CONST_VTBL struct ISyncMgrSyncItemVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISyncMgrSyncItem_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISyncMgrSyncItem_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISyncMgrSyncItem_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISyncMgrSyncItem_GetItemID(This,ppszItemID) ( (This)->lpVtbl -> GetItemID(This,ppszItemID) )
#define ISyncMgrSyncItem_GetName(This,ppszName) ( (This)->lpVtbl -> GetName(This,ppszName) )
#define ISyncMgrSyncItem_GetItemInfo(This,ppItemInfo) ( (This)->lpVtbl -> GetItemInfo(This,ppItemInfo) )
#define ISyncMgrSyncItem_GetObject(This,rguidObjectID,riid,ppv) ( (This)->lpVtbl -> GetObject(This,rguidObjectID,riid,ppv) )
#define ISyncMgrSyncItem_GetCapabilities(This,pmCapabilities) ( (This)->lpVtbl -> GetCapabilities(This,pmCapabilities) )
#define ISyncMgrSyncItem_GetPolicies(This,pmPolicies) ( (This)->lpVtbl -> GetPolicies(This,pmPolicies) )
#define ISyncMgrSyncItem_Enable(This,fEnable) ( (This)->lpVtbl -> Enable(This,fEnable) )
#define ISyncMgrSyncItem_Delete(This) ( (This)->lpVtbl -> Delete(This) )
#endif
#endif
#ifndef __ISyncMgrSyncItemInfo_INTERFACE_DEFINED__
#define __ISyncMgrSyncItemInfo_INTERFACE_DEFINED__
extern const IID IID_ISyncMgrSyncItemInfo;
typedef struct ISyncMgrSyncItemInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISyncMgrSyncItemInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISyncMgrSyncItemInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISyncMgrSyncItemInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeLabel) (ISyncMgrSyncItemInfo * This, LPWSTR * ppszTypeLabel);
	HRESULT(STDMETHODCALLTYPE * GetComment) (ISyncMgrSyncItemInfo * This, LPWSTR * ppszComment);
	HRESULT(STDMETHODCALLTYPE * GetLastSyncTime) (ISyncMgrSyncItemInfo * This, FILETIME * pftLastSync);
	HRESULT(STDMETHODCALLTYPE * IsEnabled) (ISyncMgrSyncItemInfo * This);
	HRESULT(STDMETHODCALLTYPE * IsConnected) (ISyncMgrSyncItemInfo * This);
	END_INTERFACE
}  ISyncMgrSyncItemInfoVtbl;
interface ISyncMgrSyncItemInfo
{
	CONST_VTBL struct ISyncMgrSyncItemInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISyncMgrSyncItemInfo_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISyncMgrSyncItemInfo_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISyncMgrSyncItemInfo_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISyncMgrSyncItemInfo_GetTypeLabel(This,ppszTypeLabel) ( (This)->lpVtbl -> GetTypeLabel(This,ppszTypeLabel) )
#define ISyncMgrSyncItemInfo_GetComment(This,ppszComment) ( (This)->lpVtbl -> GetComment(This,ppszComment) )
#define ISyncMgrSyncItemInfo_GetLastSyncTime(This,pftLastSync) ( (This)->lpVtbl -> GetLastSyncTime(This,pftLastSync) )
#define ISyncMgrSyncItemInfo_IsEnabled(This) ( (This)->lpVtbl -> IsEnabled(This) )
#define ISyncMgrSyncItemInfo_IsConnected(This) ( (This)->lpVtbl -> IsConnected(This) )
#endif
#endif
#ifndef __IEnumSyncMgrSyncItems_INTERFACE_DEFINED__
#define __IEnumSyncMgrSyncItems_INTERFACE_DEFINED__
extern const IID IID_IEnumSyncMgrSyncItems;
typedef struct IEnumSyncMgrSyncItemsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumSyncMgrSyncItems * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumSyncMgrSyncItems * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumSyncMgrSyncItems * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumSyncMgrSyncItems * This, ULONG celt, ISyncMgrSyncItem ** rgelt, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumSyncMgrSyncItems * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumSyncMgrSyncItems * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumSyncMgrSyncItems * This, IEnumSyncMgrSyncItems ** ppenum);
	END_INTERFACE
}  IEnumSyncMgrSyncItemsVtbl;
interface IEnumSyncMgrSyncItems
{
	CONST_VTBL struct IEnumSyncMgrSyncItemsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumSyncMgrSyncItems_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumSyncMgrSyncItems_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumSyncMgrSyncItems_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumSyncMgrSyncItems_Next(This,celt,rgelt,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
#define IEnumSyncMgrSyncItems_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumSyncMgrSyncItems_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumSyncMgrSyncItems_Clone(This,ppenum) ( (This)->lpVtbl -> Clone(This,ppenum) )
#endif
#endif
typedef enum SYNCMGR_PROGRESS_STATUS
{
	SYNCMGR_PS_UPDATING = 1,
	SYNCMGR_PS_UPDATING_INDETERMINATE = 2,
	SYNCMGR_PS_SUCCEEDED = 3,
	SYNCMGR_PS_FAILED = 4,
	SYNCMGR_PS_CANCELED = 5,
	SYNCMGR_PS_DISCONNECTED = 6,
	SYNCMGR_PS_MAX = SYNCMGR_PS_DISCONNECTED
} SYNCMGR_PROGRESS_STATUS;
typedef enum SYNCMGR_CANCEL_REQUEST
{
	SYNCMGR_CR_NONE = 0,
	SYNCMGR_CR_CANCEL_ITEM = 1,
	SYNCMGR_CR_CANCEL_ALL = 2,
	SYNCMGR_CR_MAX = SYNCMGR_CR_CANCEL_ALL
} SYNCMGR_CANCEL_REQUEST;
typedef enum SYNCMGR_EVENT_LEVEL
{
	SYNCMGR_EL_INFORMATION = 1,
	SYNCMGR_EL_WARNING = 2,
	SYNCMGR_EL_ERROR = 3,
	SYNCMGR_EL_MAX = SYNCMGR_EL_ERROR
} SYNCMGR_EVENT_LEVEL;
typedef enum SYNCMGR_EVENT_FLAGS
{
	SYNCMGR_EF_NONE = 0,
	SYNCMGR_EF_VALID = 0
} SYNCMGR_EVENT_FLAGS;
extern RPC_IF_HANDLE __MIDL_itf_syncmgr_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_syncmgr_0000_0007_v0_0_s_ifspec;
#ifndef __ISyncMgrSessionCreator_INTERFACE_DEFINED__
#define __ISyncMgrSessionCreator_INTERFACE_DEFINED__
extern const IID IID_ISyncMgrSessionCreator;
typedef struct ISyncMgrSessionCreatorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISyncMgrSessionCreator * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISyncMgrSessionCreator * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISyncMgrSessionCreator * This);
	HRESULT(STDMETHODCALLTYPE * CreateSession) (ISyncMgrSessionCreator * This, LPCWSTR pszHandlerID, LPCWSTR * ppszItemIDs, ULONG cItems, ISyncMgrSyncCallback ** ppCallback);
	END_INTERFACE
}  ISyncMgrSessionCreatorVtbl;
interface ISyncMgrSessionCreator
{
	CONST_VTBL struct ISyncMgrSessionCreatorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISyncMgrSessionCreator_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISyncMgrSessionCreator_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISyncMgrSessionCreator_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISyncMgrSessionCreator_CreateSession(This,pszHandlerID,ppszItemIDs,cItems,ppCallback) ( (This)->lpVtbl -> CreateSession(This,pszHandlerID,ppszItemIDs,cItems,ppCallback) )
#endif
#endif
#ifndef __ISyncMgrSyncCallback_INTERFACE_DEFINED__
#define __ISyncMgrSyncCallback_INTERFACE_DEFINED__
extern const IID IID_ISyncMgrSyncCallback;
typedef struct ISyncMgrSyncCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISyncMgrSyncCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISyncMgrSyncCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISyncMgrSyncCallback * This);
	HRESULT(STDMETHODCALLTYPE * ReportProgress) (ISyncMgrSyncCallback * This, LPCWSTR pszItemID, LPCWSTR pszProgressText, SYNCMGR_PROGRESS_STATUS nStatus, ULONG uCurrentStep, ULONG uMaxStep, SYNCMGR_CANCEL_REQUEST * pnCancelRequest);
	HRESULT(STDMETHODCALLTYPE * SetHandlerProgressText) (ISyncMgrSyncCallback * This, LPCWSTR pszProgressText, SYNCMGR_CANCEL_REQUEST * pnCancelRequest);
	HRESULT(STDMETHODCALLTYPE * ReportEvent) (ISyncMgrSyncCallback * This, LPCWSTR pszItemID, SYNCMGR_EVENT_LEVEL nLevel, SYNCMGR_EVENT_FLAGS nFlags, LPCWSTR pszName, LPCWSTR pszDescription, LPCWSTR pszLinkText, LPCWSTR pszLinkReference, LPCWSTR pszContext, GUID * pguidEventID);
	HRESULT(STDMETHODCALLTYPE * CanContinue) (ISyncMgrSyncCallback * This, LPCWSTR pszItemID);
	HRESULT(STDMETHODCALLTYPE * QueryForAdditionalItems) (ISyncMgrSyncCallback * This, IEnumString ** ppenumItemIDs, IEnumUnknown ** ppenumPunks);
	HRESULT(STDMETHODCALLTYPE * AddItemToSession) (ISyncMgrSyncCallback * This, LPCWSTR pszItemID);
	HRESULT(STDMETHODCALLTYPE * AddIUnknownToSession) (ISyncMgrSyncCallback * This, IUnknown * punk);
	HRESULT(STDMETHODCALLTYPE * ProposeItem) (ISyncMgrSyncCallback * This, ISyncMgrSyncItem * pNewItem);
	HRESULT(STDMETHODCALLTYPE * CommitItem) (ISyncMgrSyncCallback * This, LPCWSTR pszItemID);
	HRESULT(STDMETHODCALLTYPE * ReportManualSync) (ISyncMgrSyncCallback * This);
END_INTERFACE
}  ISyncMgrSyncCallbackVtbl;
interface ISyncMgrSyncCallback
{
	CONST_VTBL struct ISyncMgrSyncCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISyncMgrSyncCallback_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISyncMgrSyncCallback_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISyncMgrSyncCallback_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISyncMgrSyncCallback_ReportProgress(This,pszItemID,pszProgressText,nStatus,uCurrentStep,uMaxStep,pnCancelRequest) ( (This)->lpVtbl -> ReportProgress(This,pszItemID,pszProgressText,nStatus,uCurrentStep,uMaxStep,pnCancelRequest) )
#define ISyncMgrSyncCallback_SetHandlerProgressText(This,pszProgressText,pnCancelRequest) ( (This)->lpVtbl -> SetHandlerProgressText(This,pszProgressText,pnCancelRequest) )
#define ISyncMgrSyncCallback_ReportEvent(This,pszItemID,nLevel,nFlags,pszName,pszDescription,pszLinkText,pszLinkReference,pszContext,pguidEventID) ( (This)->lpVtbl -> ReportEvent(This,pszItemID,nLevel,nFlags,pszName,pszDescription,pszLinkText,pszLinkReference,pszContext,pguidEventID) )
#define ISyncMgrSyncCallback_CanContinue(This,pszItemID) ( (This)->lpVtbl -> CanContinue(This,pszItemID) )
#define ISyncMgrSyncCallback_QueryForAdditionalItems(This,ppenumItemIDs,ppenumPunks) ( (This)->lpVtbl -> QueryForAdditionalItems(This,ppenumItemIDs,ppenumPunks) )
#define ISyncMgrSyncCallback_AddItemToSession(This,pszItemID) ( (This)->lpVtbl -> AddItemToSession(This,pszItemID) )
#define ISyncMgrSyncCallback_AddIUnknownToSession(This,punk) ( (This)->lpVtbl -> AddIUnknownToSession(This,punk) )
#define ISyncMgrSyncCallback_ProposeItem(This,pNewItem) ( (This)->lpVtbl -> ProposeItem(This,pNewItem) )
#define ISyncMgrSyncCallback_CommitItem(This,pszItemID) ( (This)->lpVtbl -> CommitItem(This,pszItemID) )
#define ISyncMgrSyncCallback_ReportManualSync(This) ( (This)->lpVtbl -> ReportManualSync(This) )
#endif
#endif
#ifndef __ISyncMgrUIOperation_INTERFACE_DEFINED__
#define __ISyncMgrUIOperation_INTERFACE_DEFINED__
extern const IID IID_ISyncMgrUIOperation;
typedef struct ISyncMgrUIOperationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISyncMgrUIOperation * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISyncMgrUIOperation * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISyncMgrUIOperation * This);
	HRESULT(STDMETHODCALLTYPE * Run) (ISyncMgrUIOperation * This, HWND hwndOwner);
	END_INTERFACE
}  ISyncMgrUIOperationVtbl;
interface ISyncMgrUIOperation
{
	CONST_VTBL struct ISyncMgrUIOperationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISyncMgrUIOperation_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISyncMgrUIOperation_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISyncMgrUIOperation_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISyncMgrUIOperation_Run(This,hwndOwner) ( (This)->lpVtbl -> Run(This,hwndOwner) )
#endif
#endif
#ifndef __ISyncMgrEventLinkUIOperation_INTERFACE_DEFINED__
#define __ISyncMgrEventLinkUIOperation_INTERFACE_DEFINED__
extern const IID IID_ISyncMgrEventLinkUIOperation;
typedef struct ISyncMgrEventLinkUIOperationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISyncMgrEventLinkUIOperation * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISyncMgrEventLinkUIOperation * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISyncMgrEventLinkUIOperation * This);
	HRESULT(STDMETHODCALLTYPE * Run) (ISyncMgrEventLinkUIOperation * This, HWND hwndOwner);
	HRESULT(STDMETHODCALLTYPE * Init) (ISyncMgrEventLinkUIOperation * This, REFGUID rguidEventID, ISyncMgrEvent * pEvent);
	END_INTERFACE
}  ISyncMgrEventLinkUIOperationVtbl;
interface ISyncMgrEventLinkUIOperation
{
	CONST_VTBL struct ISyncMgrEventLinkUIOperationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISyncMgrEventLinkUIOperation_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISyncMgrEventLinkUIOperation_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISyncMgrEventLinkUIOperation_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISyncMgrEventLinkUIOperation_Run(This,hwndOwner) ( (This)->lpVtbl -> Run(This,hwndOwner) )
#define ISyncMgrEventLinkUIOperation_Init(This,rguidEventID,pEvent) ( (This)->lpVtbl -> Init(This,rguidEventID,pEvent) )
#endif
#endif
#ifndef __ISyncMgrScheduleWizardUIOperation_INTERFACE_DEFINED__
#define __ISyncMgrScheduleWizardUIOperation_INTERFACE_DEFINED__
extern const IID IID_ISyncMgrScheduleWizardUIOperation;
typedef struct ISyncMgrScheduleWizardUIOperationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISyncMgrScheduleWizardUIOperation * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISyncMgrScheduleWizardUIOperation * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISyncMgrScheduleWizardUIOperation * This);
	HRESULT(STDMETHODCALLTYPE * Run) (ISyncMgrScheduleWizardUIOperation * This, HWND hwndOwner);
	HRESULT(STDMETHODCALLTYPE * InitWizard) (ISyncMgrScheduleWizardUIOperation * This, LPCWSTR pszHandlerID);
	END_INTERFACE
}  ISyncMgrScheduleWizardUIOperationVtbl;
interface ISyncMgrScheduleWizardUIOperation
{
	CONST_VTBL struct ISyncMgrScheduleWizardUIOperationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISyncMgrScheduleWizardUIOperation_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISyncMgrScheduleWizardUIOperation_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISyncMgrScheduleWizardUIOperation_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISyncMgrScheduleWizardUIOperation_Run(This,hwndOwner) ( (This)->lpVtbl -> Run(This,hwndOwner) )
#define ISyncMgrScheduleWizardUIOperation_InitWizard(This,pszHandlerID) ( (This)->lpVtbl -> InitWizard(This,pszHandlerID) )
#endif
#endif
#ifndef __ISyncMgrSyncResult_INTERFACE_DEFINED__
#define __ISyncMgrSyncResult_INTERFACE_DEFINED__
extern const IID IID_ISyncMgrSyncResult;
typedef struct ISyncMgrSyncResultVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISyncMgrSyncResult * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISyncMgrSyncResult * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISyncMgrSyncResult * This);
	HRESULT(STDMETHODCALLTYPE * Result) (ISyncMgrSyncResult * This, SYNCMGR_PROGRESS_STATUS nStatus, UINT cError, UINT cConflicts);
	END_INTERFACE
}  ISyncMgrSyncResultVtbl;
interface ISyncMgrSyncResult
{
	CONST_VTBL struct ISyncMgrSyncResultVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISyncMgrSyncResult_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISyncMgrSyncResult_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISyncMgrSyncResult_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISyncMgrSyncResult_Result(This,nStatus,cError,cConflicts) ( (This)->lpVtbl -> Result(This,nStatus,cError,cConflicts) )
#endif
#endif
typedef enum SYNCMGR_CONTROL_FLAGS
{
	SYNCMGR_CF_NONE = 0,
	SYNCMGR_CF_NOWAIT = 0,
	SYNCMGR_CF_WAIT = 0x1,
	SYNCMGR_CF_NOUI = 0x2,
	SYNCMGR_CF_VALID = 0x3
} SYNCMGR_CONTROL_FLAGS;
typedef enum SYNCMGR_SYNC_CONTROL_FLAGS
{
	SYNCMGR_SCF_NONE = 0,
	SYNCMGR_SCF_IGNORE_IF_ALREADY_SYNCING = 0x1,
	SYNCMGR_SCF_VALID = 0x1
} SYNCMGR_SYNC_CONTROL_FLAGS;
typedef enum SYNCMGR_UPDATE_REASON
{
	SYNCMGR_UR_ADDED = 0,
	SYNCMGR_UR_CHANGED = 1,
	SYNCMGR_UR_REMOVED = 2,
	SYNCMGR_UR_MAX = SYNCMGR_UR_REMOVED
} SYNCMGR_UPDATE_REASON;
extern RPC_IF_HANDLE __MIDL_itf_syncmgr_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_syncmgr_0000_0013_v0_0_s_ifspec;
#ifndef __ISyncMgrControl_INTERFACE_DEFINED__
#define __ISyncMgrControl_INTERFACE_DEFINED__
extern const IID IID_ISyncMgrControl;
typedef struct ISyncMgrControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISyncMgrControl * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISyncMgrControl * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISyncMgrControl * This);
	HRESULT(STDMETHODCALLTYPE * StartHandlerSync) (ISyncMgrControl * This, LPCWSTR pszHandlerID, HWND hwndOwner, IUnknown * punk, SYNCMGR_SYNC_CONTROL_FLAGS nSyncControlFlags, ISyncMgrSyncResult * pResult);
	HRESULT(STDMETHODCALLTYPE * StartItemSync) (ISyncMgrControl * This, LPCWSTR pszHandlerID, LPCWSTR * ppszItemIDs, ULONG cItems, HWND hwndOwner, IUnknown * punk, SYNCMGR_SYNC_CONTROL_FLAGS nSyncControlFlags, ISyncMgrSyncResult * pResult);
	HRESULT(STDMETHODCALLTYPE * StartSyncAll) (ISyncMgrControl * This, HWND hwndOwner);
	HRESULT(STDMETHODCALLTYPE * StopHandlerSync) (ISyncMgrControl * This, LPCWSTR pszHandlerID);
	HRESULT(STDMETHODCALLTYPE * StopItemSync) (ISyncMgrControl * This, LPCWSTR pszHandlerID, LPCWSTR * ppszItemIDs, ULONG cItems);
	HRESULT(STDMETHODCALLTYPE * StopSyncAll) (ISyncMgrControl * This);
	HRESULT(STDMETHODCALLTYPE * UpdateHandlerCollection) (ISyncMgrControl * This, REFCLSID rclsidCollectionID, SYNCMGR_CONTROL_FLAGS nControlFlags);
	HRESULT(STDMETHODCALLTYPE * UpdateHandler) (ISyncMgrControl * This, LPCWSTR pszHandlerID, SYNCMGR_CONTROL_FLAGS nControlFlags);
	HRESULT(STDMETHODCALLTYPE * UpdateItem) (ISyncMgrControl * This, LPCWSTR pszHandlerID, LPCWSTR pszItemID, SYNCMGR_CONTROL_FLAGS nControlFlags);
	HRESULT(STDMETHODCALLTYPE * UpdateEvents) (ISyncMgrControl * This, LPCWSTR pszHandlerID, LPCWSTR pszItemID, SYNCMGR_CONTROL_FLAGS nControlFlags);
	HRESULT(STDMETHODCALLTYPE * UpdateConflict) (ISyncMgrControl * This, LPCWSTR pszHandlerID, LPCWSTR pszItemID, ISyncMgrConflict * pConflict, SYNCMGR_UPDATE_REASON nReason);
	HRESULT(STDMETHODCALLTYPE * UpdateConflicts) (ISyncMgrControl * This, LPCWSTR pszHandlerID, LPCWSTR pszItemID, SYNCMGR_CONTROL_FLAGS nControlFlags);
	HRESULT(STDMETHODCALLTYPE * ActivateHandler) (ISyncMgrControl * This, BOOL fActivate, LPCWSTR pszHandlerID, HWND hwndOwner, SYNCMGR_CONTROL_FLAGS nControlFlags);
	HRESULT(STDMETHODCALLTYPE * EnableHandler) (ISyncMgrControl * This, BOOL fEnable, LPCWSTR pszHandlerID, HWND hwndOwner, SYNCMGR_CONTROL_FLAGS nControlFlags);
	HRESULT(STDMETHODCALLTYPE * EnableItem) (ISyncMgrControl * This, BOOL fEnable, LPCWSTR pszHandlerID, LPCWSTR pszItemID, HWND hwndOwner, SYNCMGR_CONTROL_FLAGS nControlFlags);
	END_INTERFACE
}  ISyncMgrControlVtbl;
interface ISyncMgrControl
{
	CONST_VTBL struct ISyncMgrControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISyncMgrControl_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISyncMgrControl_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISyncMgrControl_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISyncMgrControl_StartHandlerSync(This,pszHandlerID,hwndOwner,punk,nSyncControlFlags,pResult) ( (This)->lpVtbl -> StartHandlerSync(This,pszHandlerID,hwndOwner,punk,nSyncControlFlags,pResult) )
#define ISyncMgrControl_StartItemSync(This,pszHandlerID,ppszItemIDs,cItems,hwndOwner,punk,nSyncControlFlags,pResult) ( (This)->lpVtbl -> StartItemSync(This,pszHandlerID,ppszItemIDs,cItems,hwndOwner,punk,nSyncControlFlags,pResult) )
#define ISyncMgrControl_StartSyncAll(This,hwndOwner) ( (This)->lpVtbl -> StartSyncAll(This,hwndOwner) )
#define ISyncMgrControl_StopHandlerSync(This,pszHandlerID) ( (This)->lpVtbl -> StopHandlerSync(This,pszHandlerID) )
#define ISyncMgrControl_StopItemSync(This,pszHandlerID,ppszItemIDs,cItems) ( (This)->lpVtbl -> StopItemSync(This,pszHandlerID,ppszItemIDs,cItems) )
#define ISyncMgrControl_StopSyncAll(This) ( (This)->lpVtbl -> StopSyncAll(This) )
#define ISyncMgrControl_UpdateHandlerCollection(This,rclsidCollectionID,nControlFlags) ( (This)->lpVtbl -> UpdateHandlerCollection(This,rclsidCollectionID,nControlFlags) )
#define ISyncMgrControl_UpdateHandler(This,pszHandlerID,nControlFlags) ( (This)->lpVtbl -> UpdateHandler(This,pszHandlerID,nControlFlags) )
#define ISyncMgrControl_UpdateItem(This,pszHandlerID,pszItemID,nControlFlags) ( (This)->lpVtbl -> UpdateItem(This,pszHandlerID,pszItemID,nControlFlags) )
#define ISyncMgrControl_UpdateEvents(This,pszHandlerID,pszItemID,nControlFlags) ( (This)->lpVtbl -> UpdateEvents(This,pszHandlerID,pszItemID,nControlFlags) )
#define ISyncMgrControl_UpdateConflict(This,pszHandlerID,pszItemID,pConflict,nReason) ( (This)->lpVtbl -> UpdateConflict(This,pszHandlerID,pszItemID,pConflict,nReason) )
#define ISyncMgrControl_UpdateConflicts(This,pszHandlerID,pszItemID,nControlFlags) ( (This)->lpVtbl -> UpdateConflicts(This,pszHandlerID,pszItemID,nControlFlags) )
#define ISyncMgrControl_ActivateHandler(This,fActivate,pszHandlerID,hwndOwner,nControlFlags) ( (This)->lpVtbl -> ActivateHandler(This,fActivate,pszHandlerID,hwndOwner,nControlFlags) )
#define ISyncMgrControl_EnableHandler(This,fEnable,pszHandlerID,hwndOwner,nControlFlags) ( (This)->lpVtbl -> EnableHandler(This,fEnable,pszHandlerID,hwndOwner,nControlFlags) )
#define ISyncMgrControl_EnableItem(This,fEnable,pszHandlerID,pszItemID,hwndOwner,nControlFlags) ( (This)->lpVtbl -> EnableItem(This,fEnable,pszHandlerID,pszItemID,hwndOwner,nControlFlags) )
#endif
#endif
#ifndef __ISyncMgrEventStore_INTERFACE_DEFINED__
#define __ISyncMgrEventStore_INTERFACE_DEFINED__
extern const IID IID_ISyncMgrEventStore;
typedef struct ISyncMgrEventStoreVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISyncMgrEventStore * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISyncMgrEventStore * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISyncMgrEventStore * This);
	HRESULT(STDMETHODCALLTYPE * GetEventEnumerator) (ISyncMgrEventStore * This, IEnumSyncMgrEvents ** ppenum);
	HRESULT(STDMETHODCALLTYPE * GetEventCount) (ISyncMgrEventStore * This, ULONG * pcEvents);
	HRESULT(STDMETHODCALLTYPE * GetEvent) (ISyncMgrEventStore * This, REFGUID rguidEventID, ISyncMgrEvent ** ppEvent);
	HRESULT(STDMETHODCALLTYPE * RemoveEvent) (ISyncMgrEventStore * This, GUID * pguidEventIDs, ULONG cEvents);
	END_INTERFACE
}  ISyncMgrEventStoreVtbl;
interface ISyncMgrEventStore
{
	CONST_VTBL struct ISyncMgrEventStoreVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISyncMgrEventStore_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISyncMgrEventStore_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISyncMgrEventStore_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISyncMgrEventStore_GetEventEnumerator(This,ppenum) ( (This)->lpVtbl -> GetEventEnumerator(This,ppenum) )
#define ISyncMgrEventStore_GetEventCount(This,pcEvents) ( (This)->lpVtbl -> GetEventCount(This,pcEvents) )
#define ISyncMgrEventStore_GetEvent(This,rguidEventID,ppEvent) ( (This)->lpVtbl -> GetEvent(This,rguidEventID,ppEvent) )
#define ISyncMgrEventStore_RemoveEvent(This,pguidEventIDs,cEvents) ( (This)->lpVtbl -> RemoveEvent(This,pguidEventIDs,cEvents) )
#endif
#endif
#ifndef __ISyncMgrEvent_INTERFACE_DEFINED__
#define __ISyncMgrEvent_INTERFACE_DEFINED__
extern const IID IID_ISyncMgrEvent;
typedef struct ISyncMgrEventVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISyncMgrEvent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISyncMgrEvent * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISyncMgrEvent * This);
	HRESULT(STDMETHODCALLTYPE * GetEventID) (ISyncMgrEvent * This, GUID * pguidEventID);
	HRESULT(STDMETHODCALLTYPE * GetHandlerID) (ISyncMgrEvent * This, LPWSTR * ppszHandlerID);
	HRESULT(STDMETHODCALLTYPE * GetItemID) (ISyncMgrEvent * This, LPWSTR * ppszItemID);
	HRESULT(STDMETHODCALLTYPE * GetLevel) (ISyncMgrEvent * This, SYNCMGR_EVENT_LEVEL * pnLevel);
	HRESULT(STDMETHODCALLTYPE * GetFlags) (ISyncMgrEvent * This, SYNCMGR_EVENT_FLAGS * pnFlags);
	HRESULT(STDMETHODCALLTYPE * GetTime) (ISyncMgrEvent * This, FILETIME * pfCreationTime);
	HRESULT(STDMETHODCALLTYPE * GetName) (ISyncMgrEvent * This, LPWSTR * ppszName);
	HRESULT(STDMETHODCALLTYPE * GetDescription) (ISyncMgrEvent * This, LPWSTR * ppszDescription);
	HRESULT(STDMETHODCALLTYPE * GetLinkText) (ISyncMgrEvent * This, LPWSTR * ppszLinkText);
	HRESULT(STDMETHODCALLTYPE * GetLinkReference) (ISyncMgrEvent * This, LPWSTR * ppszLinkReference);
	HRESULT(STDMETHODCALLTYPE * GetContext) (ISyncMgrEvent * This, LPWSTR * ppszContext);
	END_INTERFACE
}  ISyncMgrEventVtbl;
interface ISyncMgrEvent
{
	CONST_VTBL struct ISyncMgrEventVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISyncMgrEvent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISyncMgrEvent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISyncMgrEvent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISyncMgrEvent_GetEventID(This,pguidEventID) ( (This)->lpVtbl -> GetEventID(This,pguidEventID) )
#define ISyncMgrEvent_GetHandlerID(This,ppszHandlerID) ( (This)->lpVtbl -> GetHandlerID(This,ppszHandlerID) )
#define ISyncMgrEvent_GetItemID(This,ppszItemID) ( (This)->lpVtbl -> GetItemID(This,ppszItemID) )
#define ISyncMgrEvent_GetLevel(This,pnLevel) ( (This)->lpVtbl -> GetLevel(This,pnLevel) )
#define ISyncMgrEvent_GetFlags(This,pnFlags) ( (This)->lpVtbl -> GetFlags(This,pnFlags) )
#define ISyncMgrEvent_GetTime(This,pfCreationTime) ( (This)->lpVtbl -> GetTime(This,pfCreationTime) )
#define ISyncMgrEvent_GetName(This,ppszName) ( (This)->lpVtbl -> GetName(This,ppszName) )
#define ISyncMgrEvent_GetDescription(This,ppszDescription) ( (This)->lpVtbl -> GetDescription(This,ppszDescription) )
#define ISyncMgrEvent_GetLinkText(This,ppszLinkText) ( (This)->lpVtbl -> GetLinkText(This,ppszLinkText) )
#define ISyncMgrEvent_GetLinkReference(This,ppszLinkReference) ( (This)->lpVtbl -> GetLinkReference(This,ppszLinkReference) )
#define ISyncMgrEvent_GetContext(This,ppszContext) ( (This)->lpVtbl -> GetContext(This,ppszContext) )
#endif
#endif
#ifndef __IEnumSyncMgrEvents_INTERFACE_DEFINED__
#define __IEnumSyncMgrEvents_INTERFACE_DEFINED__
extern const IID IID_IEnumSyncMgrEvents;
typedef struct IEnumSyncMgrEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumSyncMgrEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumSyncMgrEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumSyncMgrEvents * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumSyncMgrEvents * This, ULONG celt, ISyncMgrEvent ** rgelt, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumSyncMgrEvents * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumSyncMgrEvents * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumSyncMgrEvents * This, IEnumSyncMgrEvents ** ppenum);
	END_INTERFACE
}  IEnumSyncMgrEventsVtbl;
interface IEnumSyncMgrEvents
{
	CONST_VTBL struct IEnumSyncMgrEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumSyncMgrEvents_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumSyncMgrEvents_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumSyncMgrEvents_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumSyncMgrEvents_Next(This,celt,rgelt,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
#define IEnumSyncMgrEvents_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumSyncMgrEvents_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumSyncMgrEvents_Clone(This,ppenum) ( (This)->lpVtbl -> Clone(This,ppenum) )
#endif
#endif
typedef struct SYNCMGR_CONFLICT_ID_INFO
{
	BYTE_BLOB *pblobID;
	BYTE_BLOB *pblobExtra;
} SYNCMGR_CONFLICT_ID_INFO;
typedef struct SYNCMGR_CONFLICT_ID_INFO *PSYNCMGR_CONFLICT_ID_INFO;
extern RPC_IF_HANDLE __MIDL_itf_syncmgr_0000_0017_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_syncmgr_0000_0017_v0_0_s_ifspec;
#ifndef __ISyncMgrConflictStore_INTERFACE_DEFINED__
#define __ISyncMgrConflictStore_INTERFACE_DEFINED__
extern const IID IID_ISyncMgrConflictStore;
typedef struct ISyncMgrConflictStoreVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISyncMgrConflictStore * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISyncMgrConflictStore * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISyncMgrConflictStore * This);
	HRESULT(STDMETHODCALLTYPE * EnumConflicts) (ISyncMgrConflictStore * This, LPCWSTR pszHandlerID, LPCWSTR pszItemID, IEnumSyncMgrConflict ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * BindToConflict) (ISyncMgrConflictStore * This, const SYNCMGR_CONFLICT_ID_INFO * pConflictIdInfo, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * RemoveConflicts) (ISyncMgrConflictStore * This, const SYNCMGR_CONFLICT_ID_INFO * rgConflictIdInfo, DWORD cConflicts);
	HRESULT(STDMETHODCALLTYPE * GetCount) (ISyncMgrConflictStore * This, LPCWSTR pszHandlerID, LPCWSTR pszItemID, DWORD * pnConflicts);
	END_INTERFACE
}  ISyncMgrConflictStoreVtbl;
interface ISyncMgrConflictStore
{
	CONST_VTBL struct ISyncMgrConflictStoreVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISyncMgrConflictStore_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISyncMgrConflictStore_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISyncMgrConflictStore_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISyncMgrConflictStore_EnumConflicts(This,pszHandlerID,pszItemID,ppEnum) ( (This)->lpVtbl -> EnumConflicts(This,pszHandlerID,pszItemID,ppEnum) )
#define ISyncMgrConflictStore_BindToConflict(This,pConflictIdInfo,riid,ppv) ( (This)->lpVtbl -> BindToConflict(This,pConflictIdInfo,riid,ppv) )
#define ISyncMgrConflictStore_RemoveConflicts(This,rgConflictIdInfo,cConflicts) ( (This)->lpVtbl -> RemoveConflicts(This,rgConflictIdInfo,cConflicts) )
#define ISyncMgrConflictStore_GetCount(This,pszHandlerID,pszItemID,pnConflicts) ( (This)->lpVtbl -> GetCount(This,pszHandlerID,pszItemID,pnConflicts) )
#endif
#endif
#ifndef __IEnumSyncMgrConflict_INTERFACE_DEFINED__
#define __IEnumSyncMgrConflict_INTERFACE_DEFINED__
extern const IID IID_IEnumSyncMgrConflict;
typedef struct IEnumSyncMgrConflictVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumSyncMgrConflict * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumSyncMgrConflict * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumSyncMgrConflict * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumSyncMgrConflict * This, ULONG celt, ISyncMgrConflict ** rgelt, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumSyncMgrConflict * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumSyncMgrConflict * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumSyncMgrConflict * This, IEnumSyncMgrConflict ** ppenum);
	END_INTERFACE
}  IEnumSyncMgrConflictVtbl;
interface IEnumSyncMgrConflict
{
	CONST_VTBL struct IEnumSyncMgrConflictVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumSyncMgrConflict_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumSyncMgrConflict_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumSyncMgrConflict_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumSyncMgrConflict_Next(This,celt,rgelt,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
#define IEnumSyncMgrConflict_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumSyncMgrConflict_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumSyncMgrConflict_Clone(This,ppenum) ( (This)->lpVtbl -> Clone(This,ppenum) )
#endif
#endif
typedef enum SYNCMGR_CONFLICT_ITEM_TYPE
{
	SYNCMGR_CIT_UPDATED = 0x1,
	SYNCMGR_CIT_DELETED = 0x2
} SYNCMGR_CONFLICT_ITEM_TYPE;
typedef DWORD SYNCMGR_CONFLICT_ITEM_TYPE_FLAG;
extern RPC_IF_HANDLE __MIDL_itf_syncmgr_0000_0019_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_syncmgr_0000_0019_v0_0_s_ifspec;
#ifndef __ISyncMgrConflict_INTERFACE_DEFINED__
#define __ISyncMgrConflict_INTERFACE_DEFINED__
extern const IID IID_ISyncMgrConflict;
typedef struct ISyncMgrConflictVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISyncMgrConflict * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISyncMgrConflict * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISyncMgrConflict * This);
	HRESULT(STDMETHODCALLTYPE * GetProperty) (ISyncMgrConflict * This, REFPROPERTYKEY propkey, PROPVARIANT * ppropvar);
	HRESULT(STDMETHODCALLTYPE * GetConflictIdInfo) (ISyncMgrConflict * This, SYNCMGR_CONFLICT_ID_INFO * pConflictIdInfo);
	HRESULT(STDMETHODCALLTYPE * GetItemsArray) (ISyncMgrConflict * This, ISyncMgrConflictItems ** ppArray);
	HRESULT(STDMETHODCALLTYPE * Resolve) (ISyncMgrConflict * This, ISyncMgrConflictResolveInfo * pResolveInfo);
	HRESULT(STDMETHODCALLTYPE * GetResolutionHandler) (ISyncMgrConflict * This, REFIID riid, void **ppvResolutionHandler);
	END_INTERFACE
}  ISyncMgrConflictVtbl;
interface ISyncMgrConflict
{
	CONST_VTBL struct ISyncMgrConflictVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISyncMgrConflict_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISyncMgrConflict_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISyncMgrConflict_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISyncMgrConflict_GetProperty(This,propkey,ppropvar) ( (This)->lpVtbl -> GetProperty(This,propkey,ppropvar) )
#define ISyncMgrConflict_GetConflictIdInfo(This,pConflictIdInfo) ( (This)->lpVtbl -> GetConflictIdInfo(This,pConflictIdInfo) )
#define ISyncMgrConflict_GetItemsArray(This,ppArray) ( (This)->lpVtbl -> GetItemsArray(This,ppArray) )
#define ISyncMgrConflict_Resolve(This,pResolveInfo) ( (This)->lpVtbl -> Resolve(This,pResolveInfo) )
#define ISyncMgrConflict_GetResolutionHandler(This,riid,ppvResolutionHandler) ( (This)->lpVtbl -> GetResolutionHandler(This,riid,ppvResolutionHandler) )
#endif
#endif
typedef enum SYNCMGR_RESOLUTION_ABILITIES
{
	SYNCMGR_RA_KEEPOTHER = 0x1,
	SYNCMGR_RA_KEEPRECENT = 0x2,
	SYNCMGR_RA_REMOVEFROMSYNCSET = 0x4,
	SYNCMGR_RA_KEEP_SINGLE = 0x8,
	SYNCMGR_RA_KEEP_MULTIPLE = 0x10,
	SYNCMGR_RA_VALID = 0x1f
} SYNCMGR_RESOLUTION_ABILITIES;
typedef DWORD SYNCMGR_RESOLUTION_ABILITIES_FLAGS;
typedef enum SYNCMGR_RESOLUTION_FEEDBACK
{
	SYNCMGR_RF_CONTINUE = 0,
	SYNCMGR_RF_REFRESH = (SYNCMGR_RF_CONTINUE + 1),
	SYNCMGR_RF_CANCEL = (SYNCMGR_RF_REFRESH + 1)
} SYNCMGR_RESOLUTION_FEEDBACK;
extern RPC_IF_HANDLE __MIDL_itf_syncmgr_0000_0020_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_syncmgr_0000_0020_v0_0_s_ifspec;
#ifndef __ISyncMgrResolutionHandler_INTERFACE_DEFINED__
#define __ISyncMgrResolutionHandler_INTERFACE_DEFINED__
extern const IID IID_ISyncMgrResolutionHandler;
typedef struct ISyncMgrResolutionHandlerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISyncMgrResolutionHandler * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISyncMgrResolutionHandler * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISyncMgrResolutionHandler * This);
	HRESULT(STDMETHODCALLTYPE * QueryAbilities) (ISyncMgrResolutionHandler * This, SYNCMGR_RESOLUTION_ABILITIES_FLAGS * pdwAbilities);
	HRESULT(STDMETHODCALLTYPE * KeepOther) (ISyncMgrResolutionHandler * This, IShellItem * psiOther, SYNCMGR_RESOLUTION_FEEDBACK * pFeedback);
	HRESULT(STDMETHODCALLTYPE * KeepRecent) (ISyncMgrResolutionHandler * This, SYNCMGR_RESOLUTION_FEEDBACK * pFeedback);
	HRESULT(STDMETHODCALLTYPE * RemoveFromSyncSet) (ISyncMgrResolutionHandler * This, SYNCMGR_RESOLUTION_FEEDBACK * pFeedback);
	HRESULT(STDMETHODCALLTYPE * KeepItems) (ISyncMgrResolutionHandler * This, ISyncMgrConflictResolutionItems * pArray, SYNCMGR_RESOLUTION_FEEDBACK * pFeedback);
	END_INTERFACE
}  ISyncMgrResolutionHandlerVtbl;
interface ISyncMgrResolutionHandler
{
	CONST_VTBL struct ISyncMgrResolutionHandlerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISyncMgrResolutionHandler_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISyncMgrResolutionHandler_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISyncMgrResolutionHandler_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISyncMgrResolutionHandler_QueryAbilities(This,pdwAbilities) ( (This)->lpVtbl -> QueryAbilities(This,pdwAbilities) )
#define ISyncMgrResolutionHandler_KeepOther(This,psiOther,pFeedback) ( (This)->lpVtbl -> KeepOther(This,psiOther,pFeedback) )
#define ISyncMgrResolutionHandler_KeepRecent(This,pFeedback) ( (This)->lpVtbl -> KeepRecent(This,pFeedback) )
#define ISyncMgrResolutionHandler_RemoveFromSyncSet(This,pFeedback) ( (This)->lpVtbl -> RemoveFromSyncSet(This,pFeedback) )
#define ISyncMgrResolutionHandler_KeepItems(This,pArray,pFeedback) ( (This)->lpVtbl -> KeepItems(This,pArray,pFeedback) )
#endif
#endif
#ifndef __ISyncMgrConflictPresenter_INTERFACE_DEFINED__
#define __ISyncMgrConflictPresenter_INTERFACE_DEFINED__
extern const IID IID_ISyncMgrConflictPresenter;
typedef struct ISyncMgrConflictPresenterVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISyncMgrConflictPresenter * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISyncMgrConflictPresenter * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISyncMgrConflictPresenter * This);
	HRESULT(STDMETHODCALLTYPE * PresentConflict) (ISyncMgrConflictPresenter * This, ISyncMgrConflict * pConflict, ISyncMgrConflictResolveInfo * pResolveInfo);
	END_INTERFACE
}  ISyncMgrConflictPresenterVtbl;
interface ISyncMgrConflictPresenter
{
	CONST_VTBL struct ISyncMgrConflictPresenterVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISyncMgrConflictPresenter_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISyncMgrConflictPresenter_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISyncMgrConflictPresenter_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISyncMgrConflictPresenter_PresentConflict(This,pConflict,pResolveInfo) ( (This)->lpVtbl -> PresentConflict(This,pConflict,pResolveInfo) )
#endif
#endif
typedef enum SYNCMGR_PRESENTER_NEXT_STEP
{
	SYNCMGR_PNS_CONTINUE = 0,
	SYNCMGR_PNS_DEFAULT = (SYNCMGR_PNS_CONTINUE + 1),
	SYNCMGR_PNS_CANCEL = (SYNCMGR_PNS_DEFAULT + 1)
} SYNCMGR_PRESENTER_NEXT_STEP;
typedef enum SYNCMGR_PRESENTER_CHOICE
{
	SYNCMGR_PC_NO_CHOICE = 0,
	SYNCMGR_PC_KEEP_ONE = (SYNCMGR_PC_NO_CHOICE + 1),
	SYNCMGR_PC_KEEP_MULTIPLE = (SYNCMGR_PC_KEEP_ONE + 1),
	SYNCMGR_PC_KEEP_RECENT = (SYNCMGR_PC_KEEP_MULTIPLE + 1),
	SYNCMGR_PC_REMOVE_FROM_SYNC_SET = (SYNCMGR_PC_KEEP_RECENT + 1),
	SYNCMGR_PC_SKIP = (SYNCMGR_PC_REMOVE_FROM_SYNC_SET + 1)
} SYNCMGR_PRESENTER_CHOICE;
extern RPC_IF_HANDLE __MIDL_itf_syncmgr_0000_0022_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_syncmgr_0000_0022_v0_0_s_ifspec;
#ifndef __ISyncMgrConflictResolveInfo_INTERFACE_DEFINED__
#define __ISyncMgrConflictResolveInfo_INTERFACE_DEFINED__
extern const IID IID_ISyncMgrConflictResolveInfo;
typedef struct ISyncMgrConflictResolveInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISyncMgrConflictResolveInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISyncMgrConflictResolveInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISyncMgrConflictResolveInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetIterationInfo) (ISyncMgrConflictResolveInfo * This, UINT * pnCurrentConflict, UINT * pcConflicts, UINT * pcRemainingForApplyToAll);
	HRESULT(STDMETHODCALLTYPE * GetPresenterNextStep) (ISyncMgrConflictResolveInfo * This, SYNCMGR_PRESENTER_NEXT_STEP * pnPresenterNextStep);
	HRESULT(STDMETHODCALLTYPE * GetPresenterChoice) (ISyncMgrConflictResolveInfo * This, SYNCMGR_PRESENTER_CHOICE * pnPresenterChoice, BOOL * pfApplyToAll);
	HRESULT(STDMETHODCALLTYPE * GetItemChoiceCount) (ISyncMgrConflictResolveInfo * This, UINT * pcChoices);
	HRESULT(STDMETHODCALLTYPE * GetItemChoice) (ISyncMgrConflictResolveInfo * This, UINT iChoice, UINT * piChoiceIndex);
	HRESULT(STDMETHODCALLTYPE * SetPresenterNextStep) (ISyncMgrConflictResolveInfo * This, SYNCMGR_PRESENTER_NEXT_STEP nPresenterNextStep);
	HRESULT(STDMETHODCALLTYPE * SetPresenterChoice) (ISyncMgrConflictResolveInfo * This, SYNCMGR_PRESENTER_CHOICE nPresenterChoice, BOOL fApplyToAll);
	HRESULT(STDMETHODCALLTYPE * SetItemChoices) (ISyncMgrConflictResolveInfo * This, UINT * prgiConflictItemIndexes, UINT cChoices);
	END_INTERFACE
}  ISyncMgrConflictResolveInfoVtbl;
interface ISyncMgrConflictResolveInfo
{
	CONST_VTBL struct ISyncMgrConflictResolveInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISyncMgrConflictResolveInfo_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISyncMgrConflictResolveInfo_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISyncMgrConflictResolveInfo_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISyncMgrConflictResolveInfo_GetIterationInfo(This,pnCurrentConflict,pcConflicts,pcRemainingForApplyToAll) ( (This)->lpVtbl -> GetIterationInfo(This,pnCurrentConflict,pcConflicts,pcRemainingForApplyToAll) )
#define ISyncMgrConflictResolveInfo_GetPresenterNextStep(This,pnPresenterNextStep) ( (This)->lpVtbl -> GetPresenterNextStep(This,pnPresenterNextStep) )
#define ISyncMgrConflictResolveInfo_GetPresenterChoice(This,pnPresenterChoice,pfApplyToAll) ( (This)->lpVtbl -> GetPresenterChoice(This,pnPresenterChoice,pfApplyToAll) )
#define ISyncMgrConflictResolveInfo_GetItemChoiceCount(This,pcChoices) ( (This)->lpVtbl -> GetItemChoiceCount(This,pcChoices) )
#define ISyncMgrConflictResolveInfo_GetItemChoice(This,iChoice,piChoiceIndex) ( (This)->lpVtbl -> GetItemChoice(This,iChoice,piChoiceIndex) )
#define ISyncMgrConflictResolveInfo_SetPresenterNextStep(This,nPresenterNextStep) ( (This)->lpVtbl -> SetPresenterNextStep(This,nPresenterNextStep) )
#define ISyncMgrConflictResolveInfo_SetPresenterChoice(This,nPresenterChoice,fApplyToAll) ( (This)->lpVtbl -> SetPresenterChoice(This,nPresenterChoice,fApplyToAll) )
#define ISyncMgrConflictResolveInfo_SetItemChoices(This,prgiConflictItemIndexes,cChoices) ( (This)->lpVtbl -> SetItemChoices(This,prgiConflictItemIndexes,cChoices) )
#endif
#endif
#ifndef __ISyncMgrConflictFolder_INTERFACE_DEFINED__
#define __ISyncMgrConflictFolder_INTERFACE_DEFINED__
extern const IID IID_ISyncMgrConflictFolder;
typedef struct ISyncMgrConflictFolderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISyncMgrConflictFolder * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISyncMgrConflictFolder * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISyncMgrConflictFolder * This);
	HRESULT(STDMETHODCALLTYPE * GetConflictIDList) (ISyncMgrConflictFolder * This, ISyncMgrConflict * pConflict, PIDLIST_RELATIVE * ppidlConflict);
	END_INTERFACE
}  ISyncMgrConflictFolderVtbl;
interface ISyncMgrConflictFolder
{
	CONST_VTBL struct ISyncMgrConflictFolderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISyncMgrConflictFolder_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISyncMgrConflictFolder_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISyncMgrConflictFolder_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISyncMgrConflictFolder_GetConflictIDList(This,pConflict,ppidlConflict) ( (This)->lpVtbl -> GetConflictIDList(This,pConflict,ppidlConflict) )
#endif
#endif
typedef struct CONFIRM_CONFLICT_ITEM
{
	IShellItem2 *pShellItem;
	LPWSTR pszOriginalName;
	LPWSTR pszAlternateName;
	LPWSTR pszLocationShort;
	LPWSTR pszLocationFull;
	SYNCMGR_CONFLICT_ITEM_TYPE nType;
} CONFIRM_CONFLICT_ITEM;
typedef struct CONFIRM_CONFLICT_RESULT_INFO
{
	LPWSTR pszNewName;
	UINT iItemIndex;
} CONFIRM_CONFLICT_RESULT_INFO;
extern RPC_IF_HANDLE __MIDL_itf_syncmgr_0000_0024_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_syncmgr_0000_0024_v0_0_s_ifspec;
#ifndef __ISyncMgrConflictItems_INTERFACE_DEFINED__
#define __ISyncMgrConflictItems_INTERFACE_DEFINED__
extern const IID IID_ISyncMgrConflictItems;
typedef struct ISyncMgrConflictItemsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISyncMgrConflictItems * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISyncMgrConflictItems * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISyncMgrConflictItems * This);
	HRESULT(STDMETHODCALLTYPE * GetCount) (ISyncMgrConflictItems * This, UINT * pCount);
	HRESULT(STDMETHODCALLTYPE * GetItem) (ISyncMgrConflictItems * This, UINT iIndex, CONFIRM_CONFLICT_ITEM * pItemInfo);
	END_INTERFACE
}  ISyncMgrConflictItemsVtbl;
interface ISyncMgrConflictItems
{
	CONST_VTBL struct ISyncMgrConflictItemsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISyncMgrConflictItems_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISyncMgrConflictItems_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISyncMgrConflictItems_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISyncMgrConflictItems_GetCount(This,pCount) ( (This)->lpVtbl -> GetCount(This,pCount) )
#define ISyncMgrConflictItems_GetItem(This,iIndex,pItemInfo) ( (This)->lpVtbl -> GetItem(This,iIndex,pItemInfo) )
#endif
#endif
#ifndef __ISyncMgrConflictResolutionItems_INTERFACE_DEFINED__
#define __ISyncMgrConflictResolutionItems_INTERFACE_DEFINED__
extern const IID IID_ISyncMgrConflictResolutionItems;
typedef struct ISyncMgrConflictResolutionItemsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISyncMgrConflictResolutionItems * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISyncMgrConflictResolutionItems * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISyncMgrConflictResolutionItems * This);
	HRESULT(STDMETHODCALLTYPE * GetCount) (ISyncMgrConflictResolutionItems * This, UINT * pCount);
	HRESULT(STDMETHODCALLTYPE * GetItem) (ISyncMgrConflictResolutionItems * This, UINT iIndex, CONFIRM_CONFLICT_RESULT_INFO * pItemInfo);
	END_INTERFACE
}  ISyncMgrConflictResolutionItemsVtbl;
interface ISyncMgrConflictResolutionItems
{
	CONST_VTBL struct ISyncMgrConflictResolutionItemsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISyncMgrConflictResolutionItems_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISyncMgrConflictResolutionItems_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISyncMgrConflictResolutionItems_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISyncMgrConflictResolutionItems_GetCount(This,pCount) ( (This)->lpVtbl -> GetCount(This,pCount) )
#define ISyncMgrConflictResolutionItems_GetItem(This,iIndex,pItemInfo) ( (This)->lpVtbl -> GetItem(This,iIndex,pItemInfo) )
#endif
#endif
#ifndef __SyncMgrObjects_LIBRARY_DEFINED__
#define __SyncMgrObjects_LIBRARY_DEFINED__
extern const IID LIBID_SyncMgrObjects;
extern const CLSID CLSID_SyncMgrClient;
extern const CLSID CLSID_SyncMgrControl;
extern const CLSID CLSID_SyncMgrScheduleWizard;
extern const CLSID CLSID_SyncMgrFolder;
extern const CLSID CLSID_SyncSetupFolder;
extern const CLSID CLSID_ConflictFolder;
extern const CLSID CLSID_SyncResultsFolder;
extern const CLSID CLSID_SimpleConflictPresenter;
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER HWND_UserSize(unsigned long *, unsigned long, HWND *);
unsigned char *__RPC_USER HWND_UserMarshal(unsigned long *, unsigned char *, HWND *);
unsigned char *__RPC_USER HWND_UserUnmarshal(unsigned long *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree(unsigned long *, HWND *);
unsigned long __RPC_USER LPSAFEARRAY_UserSize(unsigned long *, unsigned long, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserMarshal(unsigned long *, unsigned char *, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserUnmarshal(unsigned long *, unsigned char *, LPSAFEARRAY *);
void __RPC_USER LPSAFEARRAY_UserFree(unsigned long *, LPSAFEARRAY *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
unsigned long __RPC_USER HWND_UserSize64(unsigned long *, unsigned long, HWND *);
unsigned char *__RPC_USER HWND_UserMarshal64(unsigned long *, unsigned char *, HWND *);
unsigned char *__RPC_USER HWND_UserUnmarshal64(unsigned long *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree64(unsigned long *, HWND *);
unsigned long __RPC_USER LPSAFEARRAY_UserSize64(unsigned long *, unsigned long, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserMarshal64(unsigned long *, unsigned char *, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserUnmarshal64(unsigned long *, unsigned char *, LPSAFEARRAY *);
void __RPC_USER LPSAFEARRAY_UserFree64(unsigned long *, LPSAFEARRAY *);
#endif
