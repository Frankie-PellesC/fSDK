/*+@@file@@----------------------------------------------------------------*//*!
 \file		msfeeds.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug 14 19:40:42 2016
 \date		Modified on Sun Aug 14 19:40:42 2016
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
#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif
#ifndef __msfeeds_h__
#define __msfeeds_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IXFeedsManager_FWD_DEFINED__
#define __IXFeedsManager_FWD_DEFINED__
typedef interface IXFeedsManager IXFeedsManager;
#endif
#ifndef __IXFeedsEnum_FWD_DEFINED__
#define __IXFeedsEnum_FWD_DEFINED__
typedef interface IXFeedsEnum IXFeedsEnum;
#endif
#ifndef __IXFeedFolder_FWD_DEFINED__
#define __IXFeedFolder_FWD_DEFINED__
typedef interface IXFeedFolder IXFeedFolder;
#endif
#ifndef __IXFeedFolderEvents_FWD_DEFINED__
#define __IXFeedFolderEvents_FWD_DEFINED__
typedef interface IXFeedFolderEvents IXFeedFolderEvents;
#endif
#ifndef __IXFeed_FWD_DEFINED__
#define __IXFeed_FWD_DEFINED__
typedef interface IXFeed IXFeed;
#endif
#ifndef __IXFeed2_FWD_DEFINED__
#define __IXFeed2_FWD_DEFINED__
typedef interface IXFeed2 IXFeed2;
#endif
#ifndef __IXFeedEvents_FWD_DEFINED__
#define __IXFeedEvents_FWD_DEFINED__
typedef interface IXFeedEvents IXFeedEvents;
#endif
#ifndef __IXFeedItem_FWD_DEFINED__
#define __IXFeedItem_FWD_DEFINED__
typedef interface IXFeedItem IXFeedItem;
#endif
#ifndef __IXFeedItem2_FWD_DEFINED__
#define __IXFeedItem2_FWD_DEFINED__
typedef interface IXFeedItem2 IXFeedItem2;
#endif
#ifndef __IXFeedEnclosure_FWD_DEFINED__
#define __IXFeedEnclosure_FWD_DEFINED__
typedef interface IXFeedEnclosure IXFeedEnclosure;
#endif
#ifndef __IFeedsManager_FWD_DEFINED__
#define __IFeedsManager_FWD_DEFINED__
typedef interface IFeedsManager IFeedsManager;
#endif
#ifndef __IFeedsEnum_FWD_DEFINED__
#define __IFeedsEnum_FWD_DEFINED__
typedef interface IFeedsEnum IFeedsEnum;
#endif
#ifndef __IFeedFolder_FWD_DEFINED__
#define __IFeedFolder_FWD_DEFINED__
typedef interface IFeedFolder IFeedFolder;
#endif
#ifndef __IFeedFolderEvents_FWD_DEFINED__
#define __IFeedFolderEvents_FWD_DEFINED__
typedef interface IFeedFolderEvents IFeedFolderEvents;
#endif
#ifndef __IFeed_FWD_DEFINED__
#define __IFeed_FWD_DEFINED__
typedef interface IFeed IFeed;
#endif
#ifndef __IFeed2_FWD_DEFINED__
#define __IFeed2_FWD_DEFINED__
typedef interface IFeed2 IFeed2;
#endif
#ifndef __IFeedEvents_FWD_DEFINED__
#define __IFeedEvents_FWD_DEFINED__
typedef interface IFeedEvents IFeedEvents;
#endif
#ifndef __IFeedItem_FWD_DEFINED__
#define __IFeedItem_FWD_DEFINED__
typedef interface IFeedItem IFeedItem;
#endif
#ifndef __IFeedItem2_FWD_DEFINED__
#define __IFeedItem2_FWD_DEFINED__
typedef interface IFeedItem2 IFeedItem2;
#endif
#ifndef __IFeedEnclosure_FWD_DEFINED__
#define __IFeedEnclosure_FWD_DEFINED__
typedef interface IFeedEnclosure IFeedEnclosure;
#endif
#ifndef __FeedsManager_FWD_DEFINED__
#define __FeedsManager_FWD_DEFINED__
typedef struct FeedsManager FeedsManager;
#endif
#ifndef __FeedFolderWatcher_FWD_DEFINED__
#define __FeedFolderWatcher_FWD_DEFINED__
typedef struct FeedFolderWatcher FeedFolderWatcher;
#endif
#ifndef __FeedWatcher_FWD_DEFINED__
#define __FeedWatcher_FWD_DEFINED__
typedef struct FeedWatcher FeedWatcher;
#endif
#include "oaidl.h"
DEFINE_GUID(CLSID_XFeedsManager, 0xfe6b11c3, 0xc72e, 0x4061, 0x86, 0xc6, 0x9d, 0x16, 0x31, 0x21, 0xf2, 0x29);
typedef enum FEEDS_BACKGROUNDSYNC_ACTION
{
	FBSA_DISABLE = 0,
	FBSA_ENABLE = 1,
	FBSA_RUNNOW = 2
} FEEDS_BACKGROUNDSYNC_ACTION;
typedef enum FEEDS_BACKGROUNDSYNC_STATUS
{
	FBSS_DISABLED = 0,
	FBSS_ENABLED = 1
} FEEDS_BACKGROUNDSYNC_STATUS;
typedef enum FEEDS_EVENTS_SCOPE
{
	FES_ALL = 0,
	FES_SELF_ONLY = 1,
	FES_SELF_AND_CHILDREN_ONLY = 2
} FEEDS_EVENTS_SCOPE;
typedef enum FEEDS_EVENTS_MASK
{
	FEM_FOLDEREVENTS = 0x1,
	FEM_FEEDEVENTS = 0x2
} FEEDS_EVENTS_MASK;
#define FEEDS_XML_COUNT_MAX ((UINT)-1)
typedef enum FEEDS_XML_SORT_PROPERTY
{
	FXSP_NONE = 0,
	FXSP_PUBDATE = 1,
	FXSP_DOWNLOADTIME = 2
} FEEDS_XML_SORT_PROPERTY;
typedef enum FEEDS_XML_SORT_ORDER
{
	FXSO_NONE = 0,
	FXSO_ASCENDING = 1,
	FXSO_DESCENDING = 2
} FEEDS_XML_SORT_ORDER;
typedef enum FEEDS_XML_FILTER_FLAGS
{
	FXFF_ALL = 0,
	FXFF_UNREAD = 0x1,
	FXFF_READ = 0x2
} FEEDS_XML_FILTER_FLAGS;
typedef enum FEEDS_XML_INCLUDE_FLAGS
{
	FXIF_NONE = 0,
	FXIF_CF_EXTENSIONS = 0x1
} FEEDS_XML_INCLUDE_FLAGS;
typedef enum FEEDS_DOWNLOAD_STATUS
{
	FDS_NONE = 0,
	FDS_PENDING = 1,
	FDS_DOWNLOADING = 2,
	FDS_DOWNLOADED = 3,
	FDS_DOWNLOAD_FAILED = 4
} FEEDS_DOWNLOAD_STATUS;
typedef enum FEEDS_SYNC_SETTING
{
	FSS_DEFAULT = 0,
	FSS_INTERVAL = 1,
	FSS_MANUAL = 2,
	FSS_SUGGESTED = 3
} FEEDS_SYNC_SETTING;
typedef enum FEEDS_DOWNLOAD_ERROR
{
	FDE_NONE = 0,
	FDE_DOWNLOAD_FAILED = 1,
	FDE_INVALID_FEED_FORMAT = 2,
	FDE_NORMALIZATION_FAILED = 3,
	FDE_PERSISTENCE_FAILED = 4,
	FDE_DOWNLOAD_BLOCKED = 5,
	FDE_CANCELED = 6,
	FDE_UNSUPPORTED_AUTH = 7,
	FDE_BACKGROUND_DOWNLOAD_DISABLED = 8,
	FDE_NOT_EXIST = 9,
	FDE_UNSUPPORTED_MSXML = 10,
	FDE_UNSUPPORTED_DTD = 11,
	FDE_DOWNLOAD_SIZE_LIMIT_EXCEEDED = 12,
	FDE_ACCESS_DENIED = 13,
	FDE_AUTH_FAILED = 14,
	FDE_INVALID_AUTH = 15
} FEEDS_DOWNLOAD_ERROR;
typedef enum FEEDS_EVENTS_ITEM_COUNT_FLAGS
{
	FEICF_READ_ITEM_COUNT_CHANGED = 0x1,
	FEICF_UNREAD_ITEM_COUNT_CHANGED = 0x2
} FEEDS_EVENTS_ITEM_COUNT_FLAGS;
typedef int FEICF;
typedef enum FEEDS_ERROR_CODE
{
	FEC_E_ERRORBASE = 0xc0040200L,
	FEC_E_INVALIDMSXMLPROPERTY = FEC_E_ERRORBASE,
	FEC_E_DOWNLOADSIZELIMITEXCEEDED = (FEC_E_INVALIDMSXMLPROPERTY + 1)
} FEEDS_ERROR_CODE;
extern RPC_IF_HANDLE __MIDL_itf_msfeeds_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msfeeds_0000_0000_v0_0_s_ifspec;
#ifndef __IXFeedsManager_INTERFACE_DEFINED__
#define __IXFeedsManager_INTERFACE_DEFINED__
extern const IID IID_IXFeedsManager;
typedef struct IXFeedsManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IXFeedsManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IXFeedsManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (IXFeedsManager * This);
	HRESULT(STDMETHODCALLTYPE * RootFolder) (IXFeedsManager * This, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * IsSubscribed) (IXFeedsManager * This, LPCWSTR pszUrl, BOOL * pbSubscribed);
	HRESULT(STDMETHODCALLTYPE * ExistsFeed) (IXFeedsManager * This, LPCWSTR pszPath, BOOL * pbFeedExists);
	HRESULT(STDMETHODCALLTYPE * GetFeed) (IXFeedsManager * This, LPCWSTR pszPath, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * GetFeedByUrl) (IXFeedsManager * This, LPCWSTR pszUrl, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * ExistsFolder) (IXFeedsManager * This, LPCWSTR pszPath, BOOL * pbFolderExists);
	HRESULT(STDMETHODCALLTYPE * GetFolder) (IXFeedsManager * This, LPCWSTR pszPath, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * DeleteFeed) (IXFeedsManager * This, LPCWSTR pszPath);
	HRESULT(STDMETHODCALLTYPE * DeleteFolder) (IXFeedsManager * This, LPCWSTR pszPath);
	HRESULT(STDMETHODCALLTYPE * BackgroundSync) (IXFeedsManager * This, FEEDS_BACKGROUNDSYNC_ACTION fbsa);
	HRESULT(STDMETHODCALLTYPE * BackgroundSyncStatus) (IXFeedsManager * This, FEEDS_BACKGROUNDSYNC_STATUS * pfbss);
	HRESULT(STDMETHODCALLTYPE * DefaultInterval) (IXFeedsManager * This, UINT * puiInterval);
	HRESULT(STDMETHODCALLTYPE * SetDefaultInterval) (IXFeedsManager * This, UINT uiInterval);
	HRESULT(STDMETHODCALLTYPE * AsyncSyncAll) (IXFeedsManager * This);
	HRESULT(STDMETHODCALLTYPE * Normalize) (IXFeedsManager * This, IStream * pStreamIn, IStream ** ppStreamOut);
	HRESULT(STDMETHODCALLTYPE * ItemCountLimit) (IXFeedsManager * This, UINT * puiItemCountLimit);
	END_INTERFACE
}  IXFeedsManagerVtbl;
interface IXFeedsManager
{
	CONST_VTBL struct IXFeedsManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IXFeedsManager_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IXFeedsManager_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IXFeedsManager_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IXFeedsManager_RootFolder(This,riid,ppv) ( (This)->lpVtbl -> RootFolder(This,riid,ppv) )
#define IXFeedsManager_IsSubscribed(This,pszUrl,pbSubscribed) ( (This)->lpVtbl -> IsSubscribed(This,pszUrl,pbSubscribed) )
#define IXFeedsManager_ExistsFeed(This,pszPath,pbFeedExists) ( (This)->lpVtbl -> ExistsFeed(This,pszPath,pbFeedExists) )
#define IXFeedsManager_GetFeed(This,pszPath,riid,ppv) ( (This)->lpVtbl -> GetFeed(This,pszPath,riid,ppv) )
#define IXFeedsManager_GetFeedByUrl(This,pszUrl,riid,ppv) ( (This)->lpVtbl -> GetFeedByUrl(This,pszUrl,riid,ppv) )
#define IXFeedsManager_ExistsFolder(This,pszPath,pbFolderExists) ( (This)->lpVtbl -> ExistsFolder(This,pszPath,pbFolderExists) )
#define IXFeedsManager_GetFolder(This,pszPath,riid,ppv) ( (This)->lpVtbl -> GetFolder(This,pszPath,riid,ppv) )
#define IXFeedsManager_DeleteFeed(This,pszPath) ( (This)->lpVtbl -> DeleteFeed(This,pszPath) )
#define IXFeedsManager_DeleteFolder(This,pszPath) ( (This)->lpVtbl -> DeleteFolder(This,pszPath) )
#define IXFeedsManager_BackgroundSync(This,fbsa) ( (This)->lpVtbl -> BackgroundSync(This,fbsa) )
#define IXFeedsManager_BackgroundSyncStatus(This,pfbss) ( (This)->lpVtbl -> BackgroundSyncStatus(This,pfbss) )
#define IXFeedsManager_DefaultInterval(This,puiInterval) ( (This)->lpVtbl -> DefaultInterval(This,puiInterval) )
#define IXFeedsManager_SetDefaultInterval(This,uiInterval) ( (This)->lpVtbl -> SetDefaultInterval(This,uiInterval) )
#define IXFeedsManager_AsyncSyncAll(This) ( (This)->lpVtbl -> AsyncSyncAll(This) )
#define IXFeedsManager_Normalize(This,pStreamIn,ppStreamOut) ( (This)->lpVtbl -> Normalize(This,pStreamIn,ppStreamOut) )
#define IXFeedsManager_ItemCountLimit(This,puiItemCountLimit) ( (This)->lpVtbl -> ItemCountLimit(This,puiItemCountLimit) )
#endif
#endif
#ifndef __IXFeedsEnum_INTERFACE_DEFINED__
#define __IXFeedsEnum_INTERFACE_DEFINED__
extern const IID IID_IXFeedsEnum;
typedef struct IXFeedsEnumVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IXFeedsEnum * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IXFeedsEnum * This);
	ULONG(STDMETHODCALLTYPE * Release) (IXFeedsEnum * This);
	HRESULT(STDMETHODCALLTYPE * Count) (IXFeedsEnum * This, UINT * puiCount);
	HRESULT(STDMETHODCALLTYPE * Item) (IXFeedsEnum * This, UINT uiIndex, REFIID riid, void **ppv);
	END_INTERFACE
}  IXFeedsEnumVtbl;
interface IXFeedsEnum
{
	CONST_VTBL struct IXFeedsEnumVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IXFeedsEnum_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IXFeedsEnum_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IXFeedsEnum_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IXFeedsEnum_Count(This,puiCount) ( (This)->lpVtbl -> Count(This,puiCount) )
#define IXFeedsEnum_Item(This,uiIndex,riid,ppv) ( (This)->lpVtbl -> Item(This,uiIndex,riid,ppv) )
#endif
#endif
#ifndef __IXFeedFolder_INTERFACE_DEFINED__
#define __IXFeedFolder_INTERFACE_DEFINED__
extern const IID IID_IXFeedFolder;
typedef struct IXFeedFolderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IXFeedFolder * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IXFeedFolder * This);
	ULONG(STDMETHODCALLTYPE * Release) (IXFeedFolder * This);
	HRESULT(STDMETHODCALLTYPE * Feeds) (IXFeedFolder * This, IXFeedsEnum ** ppfe);
	HRESULT(STDMETHODCALLTYPE * Subfolders) (IXFeedFolder * This, IXFeedsEnum ** ppfe);
	HRESULT(STDMETHODCALLTYPE * CreateFeed) (IXFeedFolder * This, LPCWSTR pszName, LPCWSTR pszUrl, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * CreateSubfolder) (IXFeedFolder * This, LPCWSTR pszName, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * ExistsFeed) (IXFeedFolder * This, LPCWSTR pszName, BOOL * pbFeedExists);
	HRESULT(STDMETHODCALLTYPE * ExistsSubfolder) (IXFeedFolder * This, LPCWSTR pszName, BOOL * pbSubfolderExists);
	HRESULT(STDMETHODCALLTYPE * GetFeed) (IXFeedFolder * This, LPCWSTR pszName, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * GetSubfolder) (IXFeedFolder * This, LPCWSTR pszName, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * Delete) (IXFeedFolder * This);
	HRESULT(STDMETHODCALLTYPE * Name) (IXFeedFolder * This, LPWSTR * ppszName);
	HRESULT(STDMETHODCALLTYPE * Rename) (IXFeedFolder * This, LPCWSTR pszName);
	HRESULT(STDMETHODCALLTYPE * Path) (IXFeedFolder * This, LPWSTR * ppszPath);
	HRESULT(STDMETHODCALLTYPE * Move) (IXFeedFolder * This, LPCWSTR pszPath);
	HRESULT(STDMETHODCALLTYPE * Parent) (IXFeedFolder * This, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * IsRoot) (IXFeedFolder * This, BOOL * pbIsRootFeedFolder);
	HRESULT(STDMETHODCALLTYPE * GetWatcher) (IXFeedFolder * This, FEEDS_EVENTS_SCOPE scope, FEEDS_EVENTS_MASK mask, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * TotalUnreadItemCount) (IXFeedFolder * This, UINT * puiTotalUnreadItemCount);
	HRESULT(STDMETHODCALLTYPE * TotalItemCount) (IXFeedFolder * This, UINT * puiTotalItemCount);
	END_INTERFACE
}  IXFeedFolderVtbl;
interface IXFeedFolder
{
	CONST_VTBL struct IXFeedFolderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IXFeedFolder_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IXFeedFolder_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IXFeedFolder_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IXFeedFolder_Feeds(This,ppfe) ( (This)->lpVtbl -> Feeds(This,ppfe) )
#define IXFeedFolder_Subfolders(This,ppfe) ( (This)->lpVtbl -> Subfolders(This,ppfe) )
#define IXFeedFolder_CreateFeed(This,pszName,pszUrl,riid,ppv) ( (This)->lpVtbl -> CreateFeed(This,pszName,pszUrl,riid,ppv) )
#define IXFeedFolder_CreateSubfolder(This,pszName,riid,ppv) ( (This)->lpVtbl -> CreateSubfolder(This,pszName,riid,ppv) )
#define IXFeedFolder_ExistsFeed(This,pszName,pbFeedExists) ( (This)->lpVtbl -> ExistsFeed(This,pszName,pbFeedExists) )
#define IXFeedFolder_ExistsSubfolder(This,pszName,pbSubfolderExists) ( (This)->lpVtbl -> ExistsSubfolder(This,pszName,pbSubfolderExists) )
#define IXFeedFolder_GetFeed(This,pszName,riid,ppv) ( (This)->lpVtbl -> GetFeed(This,pszName,riid,ppv) )
#define IXFeedFolder_GetSubfolder(This,pszName,riid,ppv) ( (This)->lpVtbl -> GetSubfolder(This,pszName,riid,ppv) )
#define IXFeedFolder_Delete(This) ( (This)->lpVtbl -> Delete(This) )
#define IXFeedFolder_Name(This,ppszName) ( (This)->lpVtbl -> Name(This,ppszName) )
#define IXFeedFolder_Rename(This,pszName) ( (This)->lpVtbl -> Rename(This,pszName) )
#define IXFeedFolder_Path(This,ppszPath) ( (This)->lpVtbl -> Path(This,ppszPath) )
#define IXFeedFolder_Move(This,pszPath) ( (This)->lpVtbl -> Move(This,pszPath) )
#define IXFeedFolder_Parent(This,riid,ppv) ( (This)->lpVtbl -> Parent(This,riid,ppv) )
#define IXFeedFolder_IsRoot(This,pbIsRootFeedFolder) ( (This)->lpVtbl -> IsRoot(This,pbIsRootFeedFolder) )
#define IXFeedFolder_GetWatcher(This,scope,mask,riid,ppv) ( (This)->lpVtbl -> GetWatcher(This,scope,mask,riid,ppv) )
#define IXFeedFolder_TotalUnreadItemCount(This,puiTotalUnreadItemCount) ( (This)->lpVtbl -> TotalUnreadItemCount(This,puiTotalUnreadItemCount) )
#define IXFeedFolder_TotalItemCount(This,puiTotalItemCount) ( (This)->lpVtbl -> TotalItemCount(This,puiTotalItemCount) )
#endif
#endif
#ifndef __IXFeedFolderEvents_INTERFACE_DEFINED__
#define __IXFeedFolderEvents_INTERFACE_DEFINED__
extern const IID IID_IXFeedFolderEvents;
typedef struct IXFeedFolderEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IXFeedFolderEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IXFeedFolderEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (IXFeedFolderEvents * This);
	HRESULT(STDMETHODCALLTYPE * Error) (IXFeedFolderEvents * This);
	HRESULT(STDMETHODCALLTYPE * FolderAdded) (IXFeedFolderEvents * This, LPCWSTR pszPath);
	HRESULT(STDMETHODCALLTYPE * FolderDeleted) (IXFeedFolderEvents * This, LPCWSTR pszPath);
	HRESULT(STDMETHODCALLTYPE * FolderRenamed) (IXFeedFolderEvents * This, LPCWSTR pszPath, LPCWSTR pszOldPath);
	HRESULT(STDMETHODCALLTYPE * FolderMovedFrom) (IXFeedFolderEvents * This, LPCWSTR pszPath, LPCWSTR pszOldPath);
	HRESULT(STDMETHODCALLTYPE * FolderMovedTo) (IXFeedFolderEvents * This, LPCWSTR pszPath, LPCWSTR pszOldPath);
	HRESULT(STDMETHODCALLTYPE * FolderItemCountChanged) (IXFeedFolderEvents * This, LPCWSTR pszPath, FEICF feicfFlags);
	HRESULT(STDMETHODCALLTYPE * FeedAdded) (IXFeedFolderEvents * This, LPCWSTR pszPath);
	HRESULT(STDMETHODCALLTYPE * FeedDeleted) (IXFeedFolderEvents * This, LPCWSTR pszPath);
	HRESULT(STDMETHODCALLTYPE * FeedRenamed) (IXFeedFolderEvents * This, LPCWSTR pszPath, LPCWSTR pszOldPath);
	HRESULT(STDMETHODCALLTYPE * FeedUrlChanged) (IXFeedFolderEvents * This, LPCWSTR pszPath);
	HRESULT(STDMETHODCALLTYPE * FeedMovedFrom) (IXFeedFolderEvents * This, LPCWSTR pszPath, LPCWSTR pszOldPath);
	HRESULT(STDMETHODCALLTYPE * FeedMovedTo) (IXFeedFolderEvents * This, LPCWSTR pszPath, LPCWSTR pszOldPath);
	HRESULT(STDMETHODCALLTYPE * FeedDownloading) (IXFeedFolderEvents * This, LPCWSTR pszPath);
	HRESULT(STDMETHODCALLTYPE * FeedDownloadCompleted) (IXFeedFolderEvents * This, LPCWSTR pszPath, FEEDS_DOWNLOAD_ERROR fde);
	HRESULT(STDMETHODCALLTYPE * FeedItemCountChanged) (IXFeedFolderEvents * This, LPCWSTR pszPath, FEICF feicfFlags);
	END_INTERFACE
}  IXFeedFolderEventsVtbl;
interface IXFeedFolderEvents
{
	CONST_VTBL struct IXFeedFolderEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IXFeedFolderEvents_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IXFeedFolderEvents_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IXFeedFolderEvents_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IXFeedFolderEvents_Error(This) ( (This)->lpVtbl -> Error(This) )
#define IXFeedFolderEvents_FolderAdded(This,pszPath) ( (This)->lpVtbl -> FolderAdded(This,pszPath) )
#define IXFeedFolderEvents_FolderDeleted(This,pszPath) ( (This)->lpVtbl -> FolderDeleted(This,pszPath) )
#define IXFeedFolderEvents_FolderRenamed(This,pszPath,pszOldPath) ( (This)->lpVtbl -> FolderRenamed(This,pszPath,pszOldPath) )
#define IXFeedFolderEvents_FolderMovedFrom(This,pszPath,pszOldPath) ( (This)->lpVtbl -> FolderMovedFrom(This,pszPath,pszOldPath) )
#define IXFeedFolderEvents_FolderMovedTo(This,pszPath,pszOldPath) ( (This)->lpVtbl -> FolderMovedTo(This,pszPath,pszOldPath) )
#define IXFeedFolderEvents_FolderItemCountChanged(This,pszPath,feicfFlags) ( (This)->lpVtbl -> FolderItemCountChanged(This,pszPath,feicfFlags) )
#define IXFeedFolderEvents_FeedAdded(This,pszPath) ( (This)->lpVtbl -> FeedAdded(This,pszPath) )
#define IXFeedFolderEvents_FeedDeleted(This,pszPath) ( (This)->lpVtbl -> FeedDeleted(This,pszPath) )
#define IXFeedFolderEvents_FeedRenamed(This,pszPath,pszOldPath) ( (This)->lpVtbl -> FeedRenamed(This,pszPath,pszOldPath) )
#define IXFeedFolderEvents_FeedUrlChanged(This,pszPath) ( (This)->lpVtbl -> FeedUrlChanged(This,pszPath) )
#define IXFeedFolderEvents_FeedMovedFrom(This,pszPath,pszOldPath) ( (This)->lpVtbl -> FeedMovedFrom(This,pszPath,pszOldPath) )
#define IXFeedFolderEvents_FeedMovedTo(This,pszPath,pszOldPath) ( (This)->lpVtbl -> FeedMovedTo(This,pszPath,pszOldPath) )
#define IXFeedFolderEvents_FeedDownloading(This,pszPath) ( (This)->lpVtbl -> FeedDownloading(This,pszPath) )
#define IXFeedFolderEvents_FeedDownloadCompleted(This,pszPath,fde) ( (This)->lpVtbl -> FeedDownloadCompleted(This,pszPath,fde) )
#define IXFeedFolderEvents_FeedItemCountChanged(This,pszPath,feicfFlags) ( (This)->lpVtbl -> FeedItemCountChanged(This,pszPath,feicfFlags) )
#endif
#endif
#ifndef __IXFeed_INTERFACE_DEFINED__
#define __IXFeed_INTERFACE_DEFINED__
extern const IID IID_IXFeed;
typedef struct IXFeedVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IXFeed * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IXFeed * This);
	ULONG(STDMETHODCALLTYPE * Release) (IXFeed * This);
	HRESULT(STDMETHODCALLTYPE * Xml) (IXFeed * This, UINT uiItemCount, FEEDS_XML_SORT_PROPERTY sortProperty, FEEDS_XML_SORT_ORDER sortOrder, FEEDS_XML_FILTER_FLAGS filterFlags, FEEDS_XML_INCLUDE_FLAGS includeFlags, IStream ** pps);
	HRESULT(STDMETHODCALLTYPE * Name) (IXFeed * This, LPWSTR * ppszName);
	HRESULT(STDMETHODCALLTYPE * Rename) (IXFeed * This, LPCWSTR pszName);
	HRESULT(STDMETHODCALLTYPE * Url) (IXFeed * This, LPWSTR * ppszUrl);
	HRESULT(STDMETHODCALLTYPE * SetUrl) (IXFeed * This, LPCWSTR pszUrl);
	HRESULT(STDMETHODCALLTYPE * LocalId) (IXFeed * This, GUID * pguid);
	HRESULT(STDMETHODCALLTYPE * Path) (IXFeed * This, LPWSTR * ppszPath);
	HRESULT(STDMETHODCALLTYPE * Move) (IXFeed * This, LPCWSTR pszPath);
	HRESULT(STDMETHODCALLTYPE * Parent) (IXFeed * This, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * LastWriteTime) (IXFeed * This, SYSTEMTIME * pstLastWriteTime);
	HRESULT(STDMETHODCALLTYPE * Delete) (IXFeed * This);
	HRESULT(STDMETHODCALLTYPE * Download) (IXFeed * This);
	HRESULT(STDMETHODCALLTYPE * AsyncDownload) (IXFeed * This);
	HRESULT(STDMETHODCALLTYPE * CancelAsyncDownload) (IXFeed * This);
	HRESULT(STDMETHODCALLTYPE * SyncSetting) (IXFeed * This, FEEDS_SYNC_SETTING * pfss);
	HRESULT(STDMETHODCALLTYPE * SetSyncSetting) (IXFeed * This, FEEDS_SYNC_SETTING fss);
	HRESULT(STDMETHODCALLTYPE * Interval) (IXFeed * This, UINT * puiInterval);
	HRESULT(STDMETHODCALLTYPE * SetInterval) (IXFeed * This, UINT uiInterval);
	HRESULT(STDMETHODCALLTYPE * LastDownloadTime) (IXFeed * This, SYSTEMTIME * pstLastDownloadTime);
	HRESULT(STDMETHODCALLTYPE * LocalEnclosurePath) (IXFeed * This, LPWSTR * ppszPath);
	HRESULT(STDMETHODCALLTYPE * Items) (IXFeed * This, IXFeedsEnum ** ppfe);
	HRESULT(STDMETHODCALLTYPE * GetItem) (IXFeed * This, UINT uiId, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * MarkAllItemsRead) (IXFeed * This);
	HRESULT(STDMETHODCALLTYPE * MaxItemCount) (IXFeed * This, UINT * puiMaxItemCount);
	HRESULT(STDMETHODCALLTYPE * SetMaxItemCount) (IXFeed * This, UINT uiMaxItemCount);
	HRESULT(STDMETHODCALLTYPE * DownloadEnclosuresAutomatically) (IXFeed * This, BOOL * pbDownloadEnclosuresAutomatically);
	HRESULT(STDMETHODCALLTYPE * SetDownloadEnclosuresAutomatically) (IXFeed * This, BOOL bDownloadEnclosuresAutomatically);
	HRESULT(STDMETHODCALLTYPE * DownloadStatus) (IXFeed * This, FEEDS_DOWNLOAD_STATUS * pfds);
	HRESULT(STDMETHODCALLTYPE * LastDownloadError) (IXFeed * This, FEEDS_DOWNLOAD_ERROR * pfde);
	HRESULT(STDMETHODCALLTYPE * Merge) (IXFeed * This, IStream * pStream, LPCWSTR pszUrl);
	HRESULT(STDMETHODCALLTYPE * DownloadUrl) (IXFeed * This, LPWSTR * ppszUrl);
	HRESULT(STDMETHODCALLTYPE * Title) (IXFeed * This, LPWSTR * ppszTitle);
	HRESULT(STDMETHODCALLTYPE * Description) (IXFeed * This, LPWSTR * ppszDescription);
	HRESULT(STDMETHODCALLTYPE * Link) (IXFeed * This, LPWSTR * ppszHomePage);
	HRESULT(STDMETHODCALLTYPE * Image) (IXFeed * This, LPWSTR * ppszImageUrl);
	HRESULT(STDMETHODCALLTYPE * LastBuildDate) (IXFeed * This, SYSTEMTIME * pstLastBuildDate);
	HRESULT(STDMETHODCALLTYPE * PubDate) (IXFeed * This, SYSTEMTIME * pstPubDate);
	HRESULT(STDMETHODCALLTYPE * Ttl) (IXFeed * This, UINT * puiTtl);
	HRESULT(STDMETHODCALLTYPE * Language) (IXFeed * This, LPWSTR * ppszLanguage);
	HRESULT(STDMETHODCALLTYPE * Copyright) (IXFeed * This, LPWSTR * ppszCopyright);
	HRESULT(STDMETHODCALLTYPE * IsList) (IXFeed * This, BOOL * pbIsList);
	HRESULT(STDMETHODCALLTYPE * GetWatcher) (IXFeed * This, FEEDS_EVENTS_SCOPE scope, FEEDS_EVENTS_MASK mask, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * UnreadItemCount) (IXFeed * This, UINT * puiUnreadItemCount);
	HRESULT(STDMETHODCALLTYPE * ItemCount) (IXFeed * This, UINT * puiItemCount);
	END_INTERFACE
}  IXFeedVtbl;
interface IXFeed
{
	CONST_VTBL struct IXFeedVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IXFeed_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IXFeed_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IXFeed_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IXFeed_Xml(This,uiItemCount,sortProperty,sortOrder,filterFlags,includeFlags,pps) ( (This)->lpVtbl -> Xml(This,uiItemCount,sortProperty,sortOrder,filterFlags,includeFlags,pps) )
#define IXFeed_Name(This,ppszName) ( (This)->lpVtbl -> Name(This,ppszName) )
#define IXFeed_Rename(This,pszName) ( (This)->lpVtbl -> Rename(This,pszName) )
#define IXFeed_Url(This,ppszUrl) ( (This)->lpVtbl -> Url(This,ppszUrl) )
#define IXFeed_SetUrl(This,pszUrl) ( (This)->lpVtbl -> SetUrl(This,pszUrl) )
#define IXFeed_LocalId(This,pguid) ( (This)->lpVtbl -> LocalId(This,pguid) )
#define IXFeed_Path(This,ppszPath) ( (This)->lpVtbl -> Path(This,ppszPath) )
#define IXFeed_Move(This,pszPath) ( (This)->lpVtbl -> Move(This,pszPath) )
#define IXFeed_Parent(This,riid,ppv) ( (This)->lpVtbl -> Parent(This,riid,ppv) )
#define IXFeed_LastWriteTime(This,pstLastWriteTime) ( (This)->lpVtbl -> LastWriteTime(This,pstLastWriteTime) )
#define IXFeed_Delete(This) ( (This)->lpVtbl -> Delete(This) )
#define IXFeed_Download(This) ( (This)->lpVtbl -> Download(This) )
#define IXFeed_AsyncDownload(This) ( (This)->lpVtbl -> AsyncDownload(This) )
#define IXFeed_CancelAsyncDownload(This) ( (This)->lpVtbl -> CancelAsyncDownload(This) )
#define IXFeed_SyncSetting(This,pfss) ( (This)->lpVtbl -> SyncSetting(This,pfss) )
#define IXFeed_SetSyncSetting(This,fss) ( (This)->lpVtbl -> SetSyncSetting(This,fss) )
#define IXFeed_Interval(This,puiInterval) ( (This)->lpVtbl -> Interval(This,puiInterval) )
#define IXFeed_SetInterval(This,uiInterval) ( (This)->lpVtbl -> SetInterval(This,uiInterval) )
#define IXFeed_LastDownloadTime(This,pstLastDownloadTime) ( (This)->lpVtbl -> LastDownloadTime(This,pstLastDownloadTime) )
#define IXFeed_LocalEnclosurePath(This,ppszPath) ( (This)->lpVtbl -> LocalEnclosurePath(This,ppszPath) )
#define IXFeed_Items(This,ppfe) ( (This)->lpVtbl -> Items(This,ppfe) )
#define IXFeed_GetItem(This,uiId,riid,ppv) ( (This)->lpVtbl -> GetItem(This,uiId,riid,ppv) )
#define IXFeed_MarkAllItemsRead(This) ( (This)->lpVtbl -> MarkAllItemsRead(This) )
#define IXFeed_MaxItemCount(This,puiMaxItemCount) ( (This)->lpVtbl -> MaxItemCount(This,puiMaxItemCount) )
#define IXFeed_SetMaxItemCount(This,uiMaxItemCount) ( (This)->lpVtbl -> SetMaxItemCount(This,uiMaxItemCount) )
#define IXFeed_DownloadEnclosuresAutomatically(This,pbDownloadEnclosuresAutomatically) ( (This)->lpVtbl -> DownloadEnclosuresAutomatically(This,pbDownloadEnclosuresAutomatically) )
#define IXFeed_SetDownloadEnclosuresAutomatically(This,bDownloadEnclosuresAutomatically) ( (This)->lpVtbl -> SetDownloadEnclosuresAutomatically(This,bDownloadEnclosuresAutomatically) )
#define IXFeed_DownloadStatus(This,pfds) ( (This)->lpVtbl -> DownloadStatus(This,pfds) )
#define IXFeed_LastDownloadError(This,pfde) ( (This)->lpVtbl -> LastDownloadError(This,pfde) )
#define IXFeed_Merge(This,pStream,pszUrl) ( (This)->lpVtbl -> Merge(This,pStream,pszUrl) )
#define IXFeed_DownloadUrl(This,ppszUrl) ( (This)->lpVtbl -> DownloadUrl(This,ppszUrl) )
#define IXFeed_Title(This,ppszTitle) ( (This)->lpVtbl -> Title(This,ppszTitle) )
#define IXFeed_Description(This,ppszDescription) ( (This)->lpVtbl -> Description(This,ppszDescription) )
#define IXFeed_Link(This,ppszHomePage) ( (This)->lpVtbl -> Link(This,ppszHomePage) )
#define IXFeed_Image(This,ppszImageUrl) ( (This)->lpVtbl -> Image(This,ppszImageUrl) )
#define IXFeed_LastBuildDate(This,pstLastBuildDate) ( (This)->lpVtbl -> LastBuildDate(This,pstLastBuildDate) )
#define IXFeed_PubDate(This,pstPubDate) ( (This)->lpVtbl -> PubDate(This,pstPubDate) )
#define IXFeed_Ttl(This,puiTtl) ( (This)->lpVtbl -> Ttl(This,puiTtl) )
#define IXFeed_Language(This,ppszLanguage) ( (This)->lpVtbl -> Language(This,ppszLanguage) )
#define IXFeed_Copyright(This,ppszCopyright) ( (This)->lpVtbl -> Copyright(This,ppszCopyright) )
#define IXFeed_IsList(This,pbIsList) ( (This)->lpVtbl -> IsList(This,pbIsList) )
#define IXFeed_GetWatcher(This,scope,mask,riid,ppv) ( (This)->lpVtbl -> GetWatcher(This,scope,mask,riid,ppv) )
#define IXFeed_UnreadItemCount(This,puiUnreadItemCount) ( (This)->lpVtbl -> UnreadItemCount(This,puiUnreadItemCount) )
#define IXFeed_ItemCount(This,puiItemCount) ( (This)->lpVtbl -> ItemCount(This,puiItemCount) )
#endif
#endif
#ifndef __IXFeed2_INTERFACE_DEFINED__
#define __IXFeed2_INTERFACE_DEFINED__
extern const IID IID_IXFeed2;
typedef struct IXFeed2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IXFeed2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IXFeed2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IXFeed2 * This);
	HRESULT(STDMETHODCALLTYPE * Xml) (IXFeed2 * This, UINT uiItemCount, FEEDS_XML_SORT_PROPERTY sortProperty, FEEDS_XML_SORT_ORDER sortOrder, FEEDS_XML_FILTER_FLAGS filterFlags, FEEDS_XML_INCLUDE_FLAGS includeFlags, IStream ** pps);
	HRESULT(STDMETHODCALLTYPE * Name) (IXFeed2 * This, LPWSTR * ppszName);
	HRESULT(STDMETHODCALLTYPE * Rename) (IXFeed2 * This, LPCWSTR pszName);
	HRESULT(STDMETHODCALLTYPE * Url) (IXFeed2 * This, LPWSTR * ppszUrl);
	HRESULT(STDMETHODCALLTYPE * SetUrl) (IXFeed2 * This, LPCWSTR pszUrl);
	HRESULT(STDMETHODCALLTYPE * LocalId) (IXFeed2 * This, GUID * pguid);
	HRESULT(STDMETHODCALLTYPE * Path) (IXFeed2 * This, LPWSTR * ppszPath);
	HRESULT(STDMETHODCALLTYPE * Move) (IXFeed2 * This, LPCWSTR pszPath);
	HRESULT(STDMETHODCALLTYPE * Parent) (IXFeed2 * This, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * LastWriteTime) (IXFeed2 * This, SYSTEMTIME * pstLastWriteTime);
	HRESULT(STDMETHODCALLTYPE * Delete) (IXFeed2 * This);
	HRESULT(STDMETHODCALLTYPE * Download) (IXFeed2 * This);
	HRESULT(STDMETHODCALLTYPE * AsyncDownload) (IXFeed2 * This);
	HRESULT(STDMETHODCALLTYPE * CancelAsyncDownload) (IXFeed2 * This);
	HRESULT(STDMETHODCALLTYPE * SyncSetting) (IXFeed2 * This, FEEDS_SYNC_SETTING * pfss);
	HRESULT(STDMETHODCALLTYPE * SetSyncSetting) (IXFeed2 * This, FEEDS_SYNC_SETTING fss);
	HRESULT(STDMETHODCALLTYPE * Interval) (IXFeed2 * This, UINT * puiInterval);
	HRESULT(STDMETHODCALLTYPE * SetInterval) (IXFeed2 * This, UINT uiInterval);
	HRESULT(STDMETHODCALLTYPE * LastDownloadTime) (IXFeed2 * This, SYSTEMTIME * pstLastDownloadTime);
	HRESULT(STDMETHODCALLTYPE * LocalEnclosurePath) (IXFeed2 * This, LPWSTR * ppszPath);
	HRESULT(STDMETHODCALLTYPE * Items) (IXFeed2 * This, IXFeedsEnum ** ppfe);
	HRESULT(STDMETHODCALLTYPE * GetItem) (IXFeed2 * This, UINT uiId, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * MarkAllItemsRead) (IXFeed2 * This);
	HRESULT(STDMETHODCALLTYPE * MaxItemCount) (IXFeed2 * This, UINT * puiMaxItemCount);
	HRESULT(STDMETHODCALLTYPE * SetMaxItemCount) (IXFeed2 * This, UINT uiMaxItemCount);
	HRESULT(STDMETHODCALLTYPE * DownloadEnclosuresAutomatically) (IXFeed2 * This, BOOL * pbDownloadEnclosuresAutomatically);
	HRESULT(STDMETHODCALLTYPE * SetDownloadEnclosuresAutomatically) (IXFeed2 * This, BOOL bDownloadEnclosuresAutomatically);
	HRESULT(STDMETHODCALLTYPE * DownloadStatus) (IXFeed2 * This, FEEDS_DOWNLOAD_STATUS * pfds);
	HRESULT(STDMETHODCALLTYPE * LastDownloadError) (IXFeed2 * This, FEEDS_DOWNLOAD_ERROR * pfde);
	HRESULT(STDMETHODCALLTYPE * Merge) (IXFeed2 * This, IStream * pStream, LPCWSTR pszUrl);
	HRESULT(STDMETHODCALLTYPE * DownloadUrl) (IXFeed2 * This, LPWSTR * ppszUrl);
	HRESULT(STDMETHODCALLTYPE * Title) (IXFeed2 * This, LPWSTR * ppszTitle);
	HRESULT(STDMETHODCALLTYPE * Description) (IXFeed2 * This, LPWSTR * ppszDescription);
	HRESULT(STDMETHODCALLTYPE * Link) (IXFeed2 * This, LPWSTR * ppszHomePage);
	HRESULT(STDMETHODCALLTYPE * Image) (IXFeed2 * This, LPWSTR * ppszImageUrl);
	HRESULT(STDMETHODCALLTYPE * LastBuildDate) (IXFeed2 * This, SYSTEMTIME * pstLastBuildDate);
	HRESULT(STDMETHODCALLTYPE * PubDate) (IXFeed2 * This, SYSTEMTIME * pstPubDate);
	HRESULT(STDMETHODCALLTYPE * Ttl) (IXFeed2 * This, UINT * puiTtl);
	HRESULT(STDMETHODCALLTYPE * Language) (IXFeed2 * This, LPWSTR * ppszLanguage);
	HRESULT(STDMETHODCALLTYPE * Copyright) (IXFeed2 * This, LPWSTR * ppszCopyright);
	HRESULT(STDMETHODCALLTYPE * IsList) (IXFeed2 * This, BOOL * pbIsList);
	HRESULT(STDMETHODCALLTYPE * GetWatcher) (IXFeed2 * This, FEEDS_EVENTS_SCOPE scope, FEEDS_EVENTS_MASK mask, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * UnreadItemCount) (IXFeed2 * This, UINT * puiUnreadItemCount);
	HRESULT(STDMETHODCALLTYPE * ItemCount) (IXFeed2 * This, UINT * puiItemCount);
	HRESULT(STDMETHODCALLTYPE * GetItemByEffectiveId) (IXFeed2 * This, UINT uiEffectiveId, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * LastItemDownloadTime) (IXFeed2 * This, SYSTEMTIME * pstLastItemDownloadTime);
	HRESULT(STDMETHODCALLTYPE * Username) (IXFeed2 * This, LPWSTR * ppszUsername);
	HRESULT(STDMETHODCALLTYPE * Password) (IXFeed2 * This, LPWSTR * ppszPassword);
	HRESULT(STDMETHODCALLTYPE * SetCredentials) (IXFeed2 * This, LPCWSTR pszUsername, LPCWSTR pszPassword);
	HRESULT(STDMETHODCALLTYPE * ClearCredentials) (IXFeed2 * This);
	END_INTERFACE
}  IXFeed2Vtbl;
interface IXFeed2
{
	CONST_VTBL struct IXFeed2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IXFeed2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IXFeed2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IXFeed2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IXFeed2_Xml(This,uiItemCount,sortProperty,sortOrder,filterFlags,includeFlags,pps) ( (This)->lpVtbl -> Xml(This,uiItemCount,sortProperty,sortOrder,filterFlags,includeFlags,pps) )
#define IXFeed2_Name(This,ppszName) ( (This)->lpVtbl -> Name(This,ppszName) )
#define IXFeed2_Rename(This,pszName) ( (This)->lpVtbl -> Rename(This,pszName) )
#define IXFeed2_Url(This,ppszUrl) ( (This)->lpVtbl -> Url(This,ppszUrl) )
#define IXFeed2_SetUrl(This,pszUrl) ( (This)->lpVtbl -> SetUrl(This,pszUrl) )
#define IXFeed2_LocalId(This,pguid) ( (This)->lpVtbl -> LocalId(This,pguid) )
#define IXFeed2_Path(This,ppszPath) ( (This)->lpVtbl -> Path(This,ppszPath) )
#define IXFeed2_Move(This,pszPath) ( (This)->lpVtbl -> Move(This,pszPath) )
#define IXFeed2_Parent(This,riid,ppv) ( (This)->lpVtbl -> Parent(This,riid,ppv) )
#define IXFeed2_LastWriteTime(This,pstLastWriteTime) ( (This)->lpVtbl -> LastWriteTime(This,pstLastWriteTime) )
#define IXFeed2_Delete(This) ( (This)->lpVtbl -> Delete(This) )
#define IXFeed2_Download(This) ( (This)->lpVtbl -> Download(This) )
#define IXFeed2_AsyncDownload(This) ( (This)->lpVtbl -> AsyncDownload(This) )
#define IXFeed2_CancelAsyncDownload(This) ( (This)->lpVtbl -> CancelAsyncDownload(This) )
#define IXFeed2_SyncSetting(This,pfss) ( (This)->lpVtbl -> SyncSetting(This,pfss) )
#define IXFeed2_SetSyncSetting(This,fss) ( (This)->lpVtbl -> SetSyncSetting(This,fss) )
#define IXFeed2_Interval(This,puiInterval) ( (This)->lpVtbl -> Interval(This,puiInterval) )
#define IXFeed2_SetInterval(This,uiInterval) ( (This)->lpVtbl -> SetInterval(This,uiInterval) )
#define IXFeed2_LastDownloadTime(This,pstLastDownloadTime) ( (This)->lpVtbl -> LastDownloadTime(This,pstLastDownloadTime) )
#define IXFeed2_LocalEnclosurePath(This,ppszPath) ( (This)->lpVtbl -> LocalEnclosurePath(This,ppszPath) )
#define IXFeed2_Items(This,ppfe) ( (This)->lpVtbl -> Items(This,ppfe) )
#define IXFeed2_GetItem(This,uiId,riid,ppv) ( (This)->lpVtbl -> GetItem(This,uiId,riid,ppv) )
#define IXFeed2_MarkAllItemsRead(This) ( (This)->lpVtbl -> MarkAllItemsRead(This) )
#define IXFeed2_MaxItemCount(This,puiMaxItemCount) ( (This)->lpVtbl -> MaxItemCount(This,puiMaxItemCount) )
#define IXFeed2_SetMaxItemCount(This,uiMaxItemCount) ( (This)->lpVtbl -> SetMaxItemCount(This,uiMaxItemCount) )
#define IXFeed2_DownloadEnclosuresAutomatically(This,pbDownloadEnclosuresAutomatically) ( (This)->lpVtbl -> DownloadEnclosuresAutomatically(This,pbDownloadEnclosuresAutomatically) )
#define IXFeed2_SetDownloadEnclosuresAutomatically(This,bDownloadEnclosuresAutomatically) ( (This)->lpVtbl -> SetDownloadEnclosuresAutomatically(This,bDownloadEnclosuresAutomatically) )
#define IXFeed2_DownloadStatus(This,pfds) ( (This)->lpVtbl -> DownloadStatus(This,pfds) )
#define IXFeed2_LastDownloadError(This,pfde) ( (This)->lpVtbl -> LastDownloadError(This,pfde) )
#define IXFeed2_Merge(This,pStream,pszUrl) ( (This)->lpVtbl -> Merge(This,pStream,pszUrl) )
#define IXFeed2_DownloadUrl(This,ppszUrl) ( (This)->lpVtbl -> DownloadUrl(This,ppszUrl) )
#define IXFeed2_Title(This,ppszTitle) ( (This)->lpVtbl -> Title(This,ppszTitle) )
#define IXFeed2_Description(This,ppszDescription) ( (This)->lpVtbl -> Description(This,ppszDescription) )
#define IXFeed2_Link(This,ppszHomePage) ( (This)->lpVtbl -> Link(This,ppszHomePage) )
#define IXFeed2_Image(This,ppszImageUrl) ( (This)->lpVtbl -> Image(This,ppszImageUrl) )
#define IXFeed2_LastBuildDate(This,pstLastBuildDate) ( (This)->lpVtbl -> LastBuildDate(This,pstLastBuildDate) )
#define IXFeed2_PubDate(This,pstPubDate) ( (This)->lpVtbl -> PubDate(This,pstPubDate) )
#define IXFeed2_Ttl(This,puiTtl) ( (This)->lpVtbl -> Ttl(This,puiTtl) )
#define IXFeed2_Language(This,ppszLanguage) ( (This)->lpVtbl -> Language(This,ppszLanguage) )
#define IXFeed2_Copyright(This,ppszCopyright) ( (This)->lpVtbl -> Copyright(This,ppszCopyright) )
#define IXFeed2_IsList(This,pbIsList) ( (This)->lpVtbl -> IsList(This,pbIsList) )
#define IXFeed2_GetWatcher(This,scope,mask,riid,ppv) ( (This)->lpVtbl -> GetWatcher(This,scope,mask,riid,ppv) )
#define IXFeed2_UnreadItemCount(This,puiUnreadItemCount) ( (This)->lpVtbl -> UnreadItemCount(This,puiUnreadItemCount) )
#define IXFeed2_ItemCount(This,puiItemCount) ( (This)->lpVtbl -> ItemCount(This,puiItemCount) )
#define IXFeed2_GetItemByEffectiveId(This,uiEffectiveId,riid,ppv) ( (This)->lpVtbl -> GetItemByEffectiveId(This,uiEffectiveId,riid,ppv) )
#define IXFeed2_LastItemDownloadTime(This,pstLastItemDownloadTime) ( (This)->lpVtbl -> LastItemDownloadTime(This,pstLastItemDownloadTime) )
#define IXFeed2_Username(This,ppszUsername) ( (This)->lpVtbl -> Username(This,ppszUsername) )
#define IXFeed2_Password(This,ppszPassword) ( (This)->lpVtbl -> Password(This,ppszPassword) )
#define IXFeed2_SetCredentials(This,pszUsername,pszPassword) ( (This)->lpVtbl -> SetCredentials(This,pszUsername,pszPassword) )
#define IXFeed2_ClearCredentials(This) ( (This)->lpVtbl -> ClearCredentials(This) )
#endif
#endif
#ifndef __IXFeedEvents_INTERFACE_DEFINED__
#define __IXFeedEvents_INTERFACE_DEFINED__
extern const IID IID_IXFeedEvents;
typedef struct IXFeedEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IXFeedEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IXFeedEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (IXFeedEvents * This);
	HRESULT(STDMETHODCALLTYPE * Error) (IXFeedEvents * This);
	HRESULT(STDMETHODCALLTYPE * FeedDeleted) (IXFeedEvents * This, LPCWSTR pszPath);
	HRESULT(STDMETHODCALLTYPE * FeedRenamed) (IXFeedEvents * This, LPCWSTR pszPath, LPCWSTR pszOldPath);
	HRESULT(STDMETHODCALLTYPE * FeedUrlChanged) (IXFeedEvents * This, LPCWSTR pszPath);
	HRESULT(STDMETHODCALLTYPE * FeedMoved) (IXFeedEvents * This, LPCWSTR pszPath, LPCWSTR pszOldPath);
	HRESULT(STDMETHODCALLTYPE * FeedDownloading) (IXFeedEvents * This, LPCWSTR pszPath);
	HRESULT(STDMETHODCALLTYPE * FeedDownloadCompleted) (IXFeedEvents * This, LPCWSTR pszPath, FEEDS_DOWNLOAD_ERROR fde);
	HRESULT(STDMETHODCALLTYPE * FeedItemCountChanged) (IXFeedEvents * This, LPCWSTR pszPath, FEICF feicfFlags);
	END_INTERFACE
}  IXFeedEventsVtbl;
interface IXFeedEvents
{
	CONST_VTBL struct IXFeedEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IXFeedEvents_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IXFeedEvents_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IXFeedEvents_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IXFeedEvents_Error(This) ( (This)->lpVtbl -> Error(This) )
#define IXFeedEvents_FeedDeleted(This,pszPath) ( (This)->lpVtbl -> FeedDeleted(This,pszPath) )
#define IXFeedEvents_FeedRenamed(This,pszPath,pszOldPath) ( (This)->lpVtbl -> FeedRenamed(This,pszPath,pszOldPath) )
#define IXFeedEvents_FeedUrlChanged(This,pszPath) ( (This)->lpVtbl -> FeedUrlChanged(This,pszPath) )
#define IXFeedEvents_FeedMoved(This,pszPath,pszOldPath) ( (This)->lpVtbl -> FeedMoved(This,pszPath,pszOldPath) )
#define IXFeedEvents_FeedDownloading(This,pszPath) ( (This)->lpVtbl -> FeedDownloading(This,pszPath) )
#define IXFeedEvents_FeedDownloadCompleted(This,pszPath,fde) ( (This)->lpVtbl -> FeedDownloadCompleted(This,pszPath,fde) )
#define IXFeedEvents_FeedItemCountChanged(This,pszPath,feicfFlags) ( (This)->lpVtbl -> FeedItemCountChanged(This,pszPath,feicfFlags) )
#endif
#endif
#ifndef __IXFeedItem_INTERFACE_DEFINED__
#define __IXFeedItem_INTERFACE_DEFINED__
extern const IID IID_IXFeedItem;
typedef struct IXFeedItemVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IXFeedItem * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IXFeedItem * This);
	ULONG(STDMETHODCALLTYPE * Release) (IXFeedItem * This);
	HRESULT(STDMETHODCALLTYPE * Xml) (IXFeedItem * This, FEEDS_XML_INCLUDE_FLAGS fxif, IStream ** pps);
	HRESULT(STDMETHODCALLTYPE * Title) (IXFeedItem * This, LPWSTR * ppszTitle);
	HRESULT(STDMETHODCALLTYPE * Link) (IXFeedItem * This, LPWSTR * ppszUrl);
	HRESULT(STDMETHODCALLTYPE * Guid) (IXFeedItem * This, LPWSTR * ppszGuid);
	HRESULT(STDMETHODCALLTYPE * Description) (IXFeedItem * This, LPWSTR * ppszDescription);
	HRESULT(STDMETHODCALLTYPE * PubDate) (IXFeedItem * This, SYSTEMTIME * pstPubDate);
	HRESULT(STDMETHODCALLTYPE * Comments) (IXFeedItem * This, LPWSTR * ppszUrl);
	HRESULT(STDMETHODCALLTYPE * Author) (IXFeedItem * This, LPWSTR * ppszAuthor);
	HRESULT(STDMETHODCALLTYPE * Enclosure) (IXFeedItem * This, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * IsRead) (IXFeedItem * This, BOOL * pbIsRead);
	HRESULT(STDMETHODCALLTYPE * SetIsRead) (IXFeedItem * This, BOOL bIsRead);
	HRESULT(STDMETHODCALLTYPE * LocalId) (IXFeedItem * This, UINT * puiId);
	HRESULT(STDMETHODCALLTYPE * Parent) (IXFeedItem * This, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * Delete) (IXFeedItem * This);
	HRESULT(STDMETHODCALLTYPE * DownloadUrl) (IXFeedItem * This, LPWSTR * ppszUrl);
	HRESULT(STDMETHODCALLTYPE * LastDownloadTime) (IXFeedItem * This, SYSTEMTIME * pstLastDownloadTime);
	HRESULT(STDMETHODCALLTYPE * Modified) (IXFeedItem * This, SYSTEMTIME * pstModifiedTime);
	END_INTERFACE
}  IXFeedItemVtbl;
interface IXFeedItem
{
	CONST_VTBL struct IXFeedItemVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IXFeedItem_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IXFeedItem_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IXFeedItem_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IXFeedItem_Xml(This,fxif,pps) ( (This)->lpVtbl -> Xml(This,fxif,pps) )
#define IXFeedItem_Title(This,ppszTitle) ( (This)->lpVtbl -> Title(This,ppszTitle) )
#define IXFeedItem_Link(This,ppszUrl) ( (This)->lpVtbl -> Link(This,ppszUrl) )
#define IXFeedItem_Guid(This,ppszGuid) ( (This)->lpVtbl -> Guid(This,ppszGuid) )
#define IXFeedItem_Description(This,ppszDescription) ( (This)->lpVtbl -> Description(This,ppszDescription) )
#define IXFeedItem_PubDate(This,pstPubDate) ( (This)->lpVtbl -> PubDate(This,pstPubDate) )
#define IXFeedItem_Comments(This,ppszUrl) ( (This)->lpVtbl -> Comments(This,ppszUrl) )
#define IXFeedItem_Author(This,ppszAuthor) ( (This)->lpVtbl -> Author(This,ppszAuthor) )
#define IXFeedItem_Enclosure(This,riid,ppv) ( (This)->lpVtbl -> Enclosure(This,riid,ppv) )
#define IXFeedItem_IsRead(This,pbIsRead) ( (This)->lpVtbl -> IsRead(This,pbIsRead) )
#define IXFeedItem_SetIsRead(This,bIsRead) ( (This)->lpVtbl -> SetIsRead(This,bIsRead) )
#define IXFeedItem_LocalId(This,puiId) ( (This)->lpVtbl -> LocalId(This,puiId) )
#define IXFeedItem_Parent(This,riid,ppv) ( (This)->lpVtbl -> Parent(This,riid,ppv) )
#define IXFeedItem_Delete(This) ( (This)->lpVtbl -> Delete(This) )
#define IXFeedItem_DownloadUrl(This,ppszUrl) ( (This)->lpVtbl -> DownloadUrl(This,ppszUrl) )
#define IXFeedItem_LastDownloadTime(This,pstLastDownloadTime) ( (This)->lpVtbl -> LastDownloadTime(This,pstLastDownloadTime) )
#define IXFeedItem_Modified(This,pstModifiedTime) ( (This)->lpVtbl -> Modified(This,pstModifiedTime) )
#endif
#endif
#ifndef __IXFeedItem2_INTERFACE_DEFINED__
#define __IXFeedItem2_INTERFACE_DEFINED__
extern const IID IID_IXFeedItem2;
typedef struct IXFeedItem2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IXFeedItem2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IXFeedItem2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IXFeedItem2 * This);
	HRESULT(STDMETHODCALLTYPE * Xml) (IXFeedItem2 * This, FEEDS_XML_INCLUDE_FLAGS fxif, IStream ** pps);
	HRESULT(STDMETHODCALLTYPE * Title) (IXFeedItem2 * This, LPWSTR * ppszTitle);
	HRESULT(STDMETHODCALLTYPE * Link) (IXFeedItem2 * This, LPWSTR * ppszUrl);
	HRESULT(STDMETHODCALLTYPE * Guid) (IXFeedItem2 * This, LPWSTR * ppszGuid);
	HRESULT(STDMETHODCALLTYPE * Description) (IXFeedItem2 * This, LPWSTR * ppszDescription);
	HRESULT(STDMETHODCALLTYPE * PubDate) (IXFeedItem2 * This, SYSTEMTIME * pstPubDate);
	HRESULT(STDMETHODCALLTYPE * Comments) (IXFeedItem2 * This, LPWSTR * ppszUrl);
	HRESULT(STDMETHODCALLTYPE * Author) (IXFeedItem2 * This, LPWSTR * ppszAuthor);
	HRESULT(STDMETHODCALLTYPE * Enclosure) (IXFeedItem2 * This, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * IsRead) (IXFeedItem2 * This, BOOL * pbIsRead);
	HRESULT(STDMETHODCALLTYPE * SetIsRead) (IXFeedItem2 * This, BOOL bIsRead);
	HRESULT(STDMETHODCALLTYPE * LocalId) (IXFeedItem2 * This, UINT * puiId);
	HRESULT(STDMETHODCALLTYPE * Parent) (IXFeedItem2 * This, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * Delete) (IXFeedItem2 * This);
	HRESULT(STDMETHODCALLTYPE * DownloadUrl) (IXFeedItem2 * This, LPWSTR * ppszUrl);
	HRESULT(STDMETHODCALLTYPE * LastDownloadTime) (IXFeedItem2 * This, SYSTEMTIME * pstLastDownloadTime);
	HRESULT(STDMETHODCALLTYPE * Modified) (IXFeedItem2 * This, SYSTEMTIME * pstModifiedTime);
	HRESULT(STDMETHODCALLTYPE * EffectiveId) (IXFeedItem2 * This, UINT * puiEffectiveId);
	END_INTERFACE
}  IXFeedItem2Vtbl;
interface IXFeedItem2
{
	CONST_VTBL struct IXFeedItem2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IXFeedItem2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IXFeedItem2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IXFeedItem2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IXFeedItem2_Xml(This,fxif,pps) ( (This)->lpVtbl -> Xml(This,fxif,pps) )
#define IXFeedItem2_Title(This,ppszTitle) ( (This)->lpVtbl -> Title(This,ppszTitle) )
#define IXFeedItem2_Link(This,ppszUrl) ( (This)->lpVtbl -> Link(This,ppszUrl) )
#define IXFeedItem2_Guid(This,ppszGuid) ( (This)->lpVtbl -> Guid(This,ppszGuid) )
#define IXFeedItem2_Description(This,ppszDescription) ( (This)->lpVtbl -> Description(This,ppszDescription) )
#define IXFeedItem2_PubDate(This,pstPubDate) ( (This)->lpVtbl -> PubDate(This,pstPubDate) )
#define IXFeedItem2_Comments(This,ppszUrl) ( (This)->lpVtbl -> Comments(This,ppszUrl) )
#define IXFeedItem2_Author(This,ppszAuthor) ( (This)->lpVtbl -> Author(This,ppszAuthor) )
#define IXFeedItem2_Enclosure(This,riid,ppv) ( (This)->lpVtbl -> Enclosure(This,riid,ppv) )
#define IXFeedItem2_IsRead(This,pbIsRead) ( (This)->lpVtbl -> IsRead(This,pbIsRead) )
#define IXFeedItem2_SetIsRead(This,bIsRead) ( (This)->lpVtbl -> SetIsRead(This,bIsRead) )
#define IXFeedItem2_LocalId(This,puiId) ( (This)->lpVtbl -> LocalId(This,puiId) )
#define IXFeedItem2_Parent(This,riid,ppv) ( (This)->lpVtbl -> Parent(This,riid,ppv) )
#define IXFeedItem2_Delete(This) ( (This)->lpVtbl -> Delete(This) )
#define IXFeedItem2_DownloadUrl(This,ppszUrl) ( (This)->lpVtbl -> DownloadUrl(This,ppszUrl) )
#define IXFeedItem2_LastDownloadTime(This,pstLastDownloadTime) ( (This)->lpVtbl -> LastDownloadTime(This,pstLastDownloadTime) )
#define IXFeedItem2_Modified(This,pstModifiedTime) ( (This)->lpVtbl -> Modified(This,pstModifiedTime) )
#define IXFeedItem2_EffectiveId(This,puiEffectiveId) ( (This)->lpVtbl -> EffectiveId(This,puiEffectiveId) )
#endif
#endif
#ifndef __IXFeedEnclosure_INTERFACE_DEFINED__
#define __IXFeedEnclosure_INTERFACE_DEFINED__
extern const IID IID_IXFeedEnclosure;
typedef struct IXFeedEnclosureVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IXFeedEnclosure * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IXFeedEnclosure * This);
	ULONG(STDMETHODCALLTYPE * Release) (IXFeedEnclosure * This);
	HRESULT(STDMETHODCALLTYPE * Url) (IXFeedEnclosure * This, LPWSTR * ppszUrl);
	HRESULT(STDMETHODCALLTYPE * Type) (IXFeedEnclosure * This, LPWSTR * ppszMimeType);
	HRESULT(STDMETHODCALLTYPE * Length) (IXFeedEnclosure * This, UINT * puiLength);
	HRESULT(STDMETHODCALLTYPE * AsyncDownload) (IXFeedEnclosure * This);
	HRESULT(STDMETHODCALLTYPE * CancelAsyncDownload) (IXFeedEnclosure * This);
	HRESULT(STDMETHODCALLTYPE * DownloadStatus) (IXFeedEnclosure * This, FEEDS_DOWNLOAD_STATUS * pfds);
	HRESULT(STDMETHODCALLTYPE * LastDownloadError) (IXFeedEnclosure * This, FEEDS_DOWNLOAD_ERROR * pfde);
	HRESULT(STDMETHODCALLTYPE * LocalPath) (IXFeedEnclosure * This, LPWSTR * ppszPath);
	HRESULT(STDMETHODCALLTYPE * Parent) (IXFeedEnclosure * This, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * DownloadUrl) (IXFeedEnclosure * This, LPWSTR * ppszUrl);
	HRESULT(STDMETHODCALLTYPE * DownloadMimeType) (IXFeedEnclosure * This, LPWSTR * ppszMimeType);
	HRESULT(STDMETHODCALLTYPE * RemoveFile) (IXFeedEnclosure * This);
	HRESULT(STDMETHODCALLTYPE * SetFile) (IXFeedEnclosure * This, LPCWSTR pszDownloadUrl, LPCWSTR pszDownloadFilePath, LPCWSTR pszDownloadMimeType, LPCWSTR pszEnclosureFilename);
	END_INTERFACE
}  IXFeedEnclosureVtbl;
interface IXFeedEnclosure
{
	CONST_VTBL struct IXFeedEnclosureVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IXFeedEnclosure_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IXFeedEnclosure_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IXFeedEnclosure_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IXFeedEnclosure_Url(This,ppszUrl) ( (This)->lpVtbl -> Url(This,ppszUrl) )
#define IXFeedEnclosure_Type(This,ppszMimeType) ( (This)->lpVtbl -> Type(This,ppszMimeType) )
#define IXFeedEnclosure_Length(This,puiLength) ( (This)->lpVtbl -> Length(This,puiLength) )
#define IXFeedEnclosure_AsyncDownload(This) ( (This)->lpVtbl -> AsyncDownload(This) )
#define IXFeedEnclosure_CancelAsyncDownload(This) ( (This)->lpVtbl -> CancelAsyncDownload(This) )
#define IXFeedEnclosure_DownloadStatus(This,pfds) ( (This)->lpVtbl -> DownloadStatus(This,pfds) )
#define IXFeedEnclosure_LastDownloadError(This,pfde) ( (This)->lpVtbl -> LastDownloadError(This,pfde) )
#define IXFeedEnclosure_LocalPath(This,ppszPath) ( (This)->lpVtbl -> LocalPath(This,ppszPath) )
#define IXFeedEnclosure_Parent(This,riid,ppv) ( (This)->lpVtbl -> Parent(This,riid,ppv) )
#define IXFeedEnclosure_DownloadUrl(This,ppszUrl) ( (This)->lpVtbl -> DownloadUrl(This,ppszUrl) )
#define IXFeedEnclosure_DownloadMimeType(This,ppszMimeType) ( (This)->lpVtbl -> DownloadMimeType(This,ppszMimeType) )
#define IXFeedEnclosure_RemoveFile(This) ( (This)->lpVtbl -> RemoveFile(This) )
#define IXFeedEnclosure_SetFile(This,pszDownloadUrl,pszDownloadFilePath,pszDownloadMimeType,pszEnclosureFilename) ( (This)->lpVtbl -> SetFile(This,pszDownloadUrl,pszDownloadFilePath,pszDownloadMimeType,pszEnclosureFilename) )
#endif
#endif
#ifndef __Feeds_LIBRARY_DEFINED__
#define __Feeds_LIBRARY_DEFINED__
extern const IID LIBID_Feeds;
#ifndef __IFeedsManager_INTERFACE_DEFINED__
#define __IFeedsManager_INTERFACE_DEFINED__
extern const IID IID_IFeedsManager;
typedef struct IFeedsManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFeedsManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFeedsManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFeedsManager * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFeedsManager * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFeedsManager * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFeedsManager * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFeedsManager * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_RootFolder) (IFeedsManager * This, IDispatch ** disp);
	HRESULT(STDMETHODCALLTYPE * IsSubscribed) (IFeedsManager * This, BSTR feedUrl, VARIANT_BOOL * subscribed);
	HRESULT(STDMETHODCALLTYPE * ExistsFeed) (IFeedsManager * This, BSTR feedPath, VARIANT_BOOL * exists);
	HRESULT(STDMETHODCALLTYPE * GetFeed) (IFeedsManager * This, BSTR feedPath, IDispatch ** disp);
	HRESULT(STDMETHODCALLTYPE * GetFeedByUrl) (IFeedsManager * This, BSTR feedUrl, IDispatch ** disp);
	HRESULT(STDMETHODCALLTYPE * ExistsFolder) (IFeedsManager * This, BSTR folderPath, VARIANT_BOOL * exists);
	HRESULT(STDMETHODCALLTYPE * GetFolder) (IFeedsManager * This, BSTR folderPath, IDispatch ** disp);
	HRESULT(STDMETHODCALLTYPE * DeleteFeed) (IFeedsManager * This, BSTR feedPath);
	HRESULT(STDMETHODCALLTYPE * DeleteFolder) (IFeedsManager * This, BSTR folderPath);
	HRESULT(STDMETHODCALLTYPE * BackgroundSync) (IFeedsManager * This, FEEDS_BACKGROUNDSYNC_ACTION action);
	HRESULT(STDMETHODCALLTYPE * get_BackgroundSyncStatus) (IFeedsManager * This, FEEDS_BACKGROUNDSYNC_STATUS * status);
	HRESULT(STDMETHODCALLTYPE * get_DefaultInterval) (IFeedsManager * This, LONG * minutes);
	HRESULT(STDMETHODCALLTYPE * put_DefaultInterval) (IFeedsManager * This, LONG minutes);
	HRESULT(STDMETHODCALLTYPE * AsyncSyncAll) (IFeedsManager * This);
	HRESULT(STDMETHODCALLTYPE * Normalize) (IFeedsManager * This, BSTR feedXmlIn, BSTR * feedXmlOut);
	HRESULT(STDMETHODCALLTYPE * get_ItemCountLimit) (IFeedsManager * This, LONG * itemCountLimit);
	END_INTERFACE
}  IFeedsManagerVtbl;
interface IFeedsManager
{
	CONST_VTBL struct IFeedsManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFeedsManager_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFeedsManager_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IFeedsManager_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IFeedsManager_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFeedsManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFeedsManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFeedsManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFeedsManager_get_RootFolder(This,disp) ( (This)->lpVtbl -> get_RootFolder(This,disp) )
#define IFeedsManager_IsSubscribed(This,feedUrl,subscribed) ( (This)->lpVtbl -> IsSubscribed(This,feedUrl,subscribed) )
#define IFeedsManager_ExistsFeed(This,feedPath,exists) ( (This)->lpVtbl -> ExistsFeed(This,feedPath,exists) )
#define IFeedsManager_GetFeed(This,feedPath,disp) ( (This)->lpVtbl -> GetFeed(This,feedPath,disp) )
#define IFeedsManager_GetFeedByUrl(This,feedUrl,disp) ( (This)->lpVtbl -> GetFeedByUrl(This,feedUrl,disp) )
#define IFeedsManager_ExistsFolder(This,folderPath,exists) ( (This)->lpVtbl -> ExistsFolder(This,folderPath,exists) )
#define IFeedsManager_GetFolder(This,folderPath,disp) ( (This)->lpVtbl -> GetFolder(This,folderPath,disp) )
#define IFeedsManager_DeleteFeed(This,feedPath) ( (This)->lpVtbl -> DeleteFeed(This,feedPath) )
#define IFeedsManager_DeleteFolder(This,folderPath) ( (This)->lpVtbl -> DeleteFolder(This,folderPath) )
#define IFeedsManager_BackgroundSync(This,action) ( (This)->lpVtbl -> BackgroundSync(This,action) )
#define IFeedsManager_get_BackgroundSyncStatus(This,status) ( (This)->lpVtbl -> get_BackgroundSyncStatus(This,status) )
#define IFeedsManager_get_DefaultInterval(This,minutes) ( (This)->lpVtbl -> get_DefaultInterval(This,minutes) )
#define IFeedsManager_put_DefaultInterval(This,minutes) ( (This)->lpVtbl -> put_DefaultInterval(This,minutes) )
#define IFeedsManager_AsyncSyncAll(This) ( (This)->lpVtbl -> AsyncSyncAll(This) )
#define IFeedsManager_Normalize(This,feedXmlIn,feedXmlOut) ( (This)->lpVtbl -> Normalize(This,feedXmlIn,feedXmlOut) )
#define IFeedsManager_get_ItemCountLimit(This,itemCountLimit) ( (This)->lpVtbl -> get_ItemCountLimit(This,itemCountLimit) )
#endif
#endif
#ifndef __IFeedsEnum_INTERFACE_DEFINED__
#define __IFeedsEnum_INTERFACE_DEFINED__
extern const IID IID_IFeedsEnum;
typedef struct IFeedsEnumVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFeedsEnum * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFeedsEnum * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFeedsEnum * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFeedsEnum * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFeedsEnum * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFeedsEnum * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFeedsEnum * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IFeedsEnum * This, LONG * count);
	HRESULT(STDMETHODCALLTYPE * Item) (IFeedsEnum * This, LONG index, IDispatch ** disp);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IFeedsEnum * This, IEnumVARIANT ** enumVar);
	END_INTERFACE
}  IFeedsEnumVtbl;
interface IFeedsEnum
{
	CONST_VTBL struct IFeedsEnumVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFeedsEnum_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFeedsEnum_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IFeedsEnum_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IFeedsEnum_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFeedsEnum_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFeedsEnum_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFeedsEnum_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFeedsEnum_get_Count(This,count) ( (This)->lpVtbl -> get_Count(This,count) )
#define IFeedsEnum_Item(This,index,disp) ( (This)->lpVtbl -> Item(This,index,disp) )
#define IFeedsEnum_get__NewEnum(This,enumVar) ( (This)->lpVtbl -> get__NewEnum(This,enumVar) )
#endif
#endif
#ifndef __IFeedFolder_INTERFACE_DEFINED__
#define __IFeedFolder_INTERFACE_DEFINED__
extern const IID IID_IFeedFolder;
typedef struct IFeedFolderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFeedFolder * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFeedFolder * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFeedFolder * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFeedFolder * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFeedFolder * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFeedFolder * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFeedFolder * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Feeds) (IFeedFolder * This, IDispatch ** disp);
	HRESULT(STDMETHODCALLTYPE * get_Subfolders) (IFeedFolder * This, IDispatch ** disp);
	HRESULT(STDMETHODCALLTYPE * CreateFeed) (IFeedFolder * This, BSTR feedName, BSTR feedUrl, IDispatch ** disp);
	HRESULT(STDMETHODCALLTYPE * CreateSubfolder) (IFeedFolder * This, BSTR folderName, IDispatch ** disp);
	HRESULT(STDMETHODCALLTYPE * ExistsFeed) (IFeedFolder * This, BSTR feedName, VARIANT_BOOL * exists);
	HRESULT(STDMETHODCALLTYPE * GetFeed) (IFeedFolder * This, BSTR feedName, IDispatch ** disp);
	HRESULT(STDMETHODCALLTYPE * ExistsSubfolder) (IFeedFolder * This, BSTR folderName, VARIANT_BOOL * exists);
	HRESULT(STDMETHODCALLTYPE * GetSubfolder) (IFeedFolder * This, BSTR folderName, IDispatch ** disp);
	HRESULT(STDMETHODCALLTYPE * Delete) (IFeedFolder * This);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IFeedFolder * This, BSTR * folderName);
	HRESULT(STDMETHODCALLTYPE * Rename) (IFeedFolder * This, BSTR folderName);
	HRESULT(STDMETHODCALLTYPE * get_Path) (IFeedFolder * This, BSTR * folderPath);
	HRESULT(STDMETHODCALLTYPE * Move) (IFeedFolder * This, BSTR newParentPath);
	HRESULT(STDMETHODCALLTYPE * get_Parent) (IFeedFolder * This, IDispatch ** disp);
	HRESULT(STDMETHODCALLTYPE * get_IsRoot) (IFeedFolder * This, VARIANT_BOOL * isRoot);
	HRESULT(STDMETHODCALLTYPE * get_TotalUnreadItemCount) (IFeedFolder * This, LONG * count);
	HRESULT(STDMETHODCALLTYPE * get_TotalItemCount) (IFeedFolder * This, LONG * count);
	HRESULT(STDMETHODCALLTYPE * GetWatcher) (IFeedFolder * This, FEEDS_EVENTS_SCOPE scope, FEEDS_EVENTS_MASK mask, IDispatch ** disp);
	END_INTERFACE
}  IFeedFolderVtbl;
interface IFeedFolder
{
	CONST_VTBL struct IFeedFolderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFeedFolder_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFeedFolder_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IFeedFolder_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IFeedFolder_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFeedFolder_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFeedFolder_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFeedFolder_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFeedFolder_get_Feeds(This,disp) ( (This)->lpVtbl -> get_Feeds(This,disp) )
#define IFeedFolder_get_Subfolders(This,disp) ( (This)->lpVtbl -> get_Subfolders(This,disp) )
#define IFeedFolder_CreateFeed(This,feedName,feedUrl,disp) ( (This)->lpVtbl -> CreateFeed(This,feedName,feedUrl,disp) )
#define IFeedFolder_CreateSubfolder(This,folderName,disp) ( (This)->lpVtbl -> CreateSubfolder(This,folderName,disp) )
#define IFeedFolder_ExistsFeed(This,feedName,exists) ( (This)->lpVtbl -> ExistsFeed(This,feedName,exists) )
#define IFeedFolder_GetFeed(This,feedName,disp) ( (This)->lpVtbl -> GetFeed(This,feedName,disp) )
#define IFeedFolder_ExistsSubfolder(This,folderName,exists) ( (This)->lpVtbl -> ExistsSubfolder(This,folderName,exists) )
#define IFeedFolder_GetSubfolder(This,folderName,disp) ( (This)->lpVtbl -> GetSubfolder(This,folderName,disp) )
#define IFeedFolder_Delete(This) ( (This)->lpVtbl -> Delete(This) )
#define IFeedFolder_get_Name(This,folderName) ( (This)->lpVtbl -> get_Name(This,folderName) )
#define IFeedFolder_Rename(This,folderName) ( (This)->lpVtbl -> Rename(This,folderName) )
#define IFeedFolder_get_Path(This,folderPath) ( (This)->lpVtbl -> get_Path(This,folderPath) )
#define IFeedFolder_Move(This,newParentPath) ( (This)->lpVtbl -> Move(This,newParentPath) )
#define IFeedFolder_get_Parent(This,disp) ( (This)->lpVtbl -> get_Parent(This,disp) )
#define IFeedFolder_get_IsRoot(This,isRoot) ( (This)->lpVtbl -> get_IsRoot(This,isRoot) )
#define IFeedFolder_get_TotalUnreadItemCount(This,count) ( (This)->lpVtbl -> get_TotalUnreadItemCount(This,count) )
#define IFeedFolder_get_TotalItemCount(This,count) ( (This)->lpVtbl -> get_TotalItemCount(This,count) )
#define IFeedFolder_GetWatcher(This,scope,mask,disp) ( (This)->lpVtbl -> GetWatcher(This,scope,mask,disp) )
#endif
#endif
#ifndef __IFeedFolderEvents_INTERFACE_DEFINED__
#define __IFeedFolderEvents_INTERFACE_DEFINED__
extern const IID IID_IFeedFolderEvents;
typedef struct IFeedFolderEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFeedFolderEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFeedFolderEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFeedFolderEvents * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFeedFolderEvents * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFeedFolderEvents * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFeedFolderEvents * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFeedFolderEvents * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Error) (IFeedFolderEvents * This);
	HRESULT(STDMETHODCALLTYPE * FolderAdded) (IFeedFolderEvents * This, const BSTR path);
	HRESULT(STDMETHODCALLTYPE * FolderDeleted) (IFeedFolderEvents * This, const BSTR path);
	HRESULT(STDMETHODCALLTYPE * FolderRenamed) (IFeedFolderEvents * This, const BSTR path, const BSTR oldPath);
	HRESULT(STDMETHODCALLTYPE * FolderMovedFrom) (IFeedFolderEvents * This, const BSTR path, const BSTR oldPath);
	HRESULT(STDMETHODCALLTYPE * FolderMovedTo) (IFeedFolderEvents * This, const BSTR path, const BSTR oldPath);
	HRESULT(STDMETHODCALLTYPE * FolderItemCountChanged) (IFeedFolderEvents * This, const BSTR path, LONG itemCountType);
	HRESULT(STDMETHODCALLTYPE * FeedAdded) (IFeedFolderEvents * This, const BSTR path);
	HRESULT(STDMETHODCALLTYPE * FeedDeleted) (IFeedFolderEvents * This, const BSTR path);
	HRESULT(STDMETHODCALLTYPE * FeedRenamed) (IFeedFolderEvents * This, const BSTR path, const BSTR oldPath);
	HRESULT(STDMETHODCALLTYPE * FeedUrlChanged) (IFeedFolderEvents * This, const BSTR path);
	HRESULT(STDMETHODCALLTYPE * FeedMovedFrom) (IFeedFolderEvents * This, const BSTR path, const BSTR oldPath);
	HRESULT(STDMETHODCALLTYPE * FeedMovedTo) (IFeedFolderEvents * This, const BSTR path, const BSTR oldPath);
	HRESULT(STDMETHODCALLTYPE * FeedDownloading) (IFeedFolderEvents * This, const BSTR path);
	HRESULT(STDMETHODCALLTYPE * FeedDownloadCompleted) (IFeedFolderEvents * This, const BSTR path, FEEDS_DOWNLOAD_ERROR error);
	HRESULT(STDMETHODCALLTYPE * FeedItemCountChanged) (IFeedFolderEvents * This, const BSTR path, LONG itemCountType);
	END_INTERFACE
}  IFeedFolderEventsVtbl;
interface IFeedFolderEvents
{
	CONST_VTBL struct IFeedFolderEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFeedFolderEvents_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFeedFolderEvents_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IFeedFolderEvents_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IFeedFolderEvents_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFeedFolderEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFeedFolderEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFeedFolderEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFeedFolderEvents_Error(This) ( (This)->lpVtbl -> Error(This) )
#define IFeedFolderEvents_FolderAdded(This,path) ( (This)->lpVtbl -> FolderAdded(This,path) )
#define IFeedFolderEvents_FolderDeleted(This,path) ( (This)->lpVtbl -> FolderDeleted(This,path) )
#define IFeedFolderEvents_FolderRenamed(This,path,oldPath) ( (This)->lpVtbl -> FolderRenamed(This,path,oldPath) )
#define IFeedFolderEvents_FolderMovedFrom(This,path,oldPath) ( (This)->lpVtbl -> FolderMovedFrom(This,path,oldPath) )
#define IFeedFolderEvents_FolderMovedTo(This,path,oldPath) ( (This)->lpVtbl -> FolderMovedTo(This,path,oldPath) )
#define IFeedFolderEvents_FolderItemCountChanged(This,path,itemCountType) ( (This)->lpVtbl -> FolderItemCountChanged(This,path,itemCountType) )
#define IFeedFolderEvents_FeedAdded(This,path) ( (This)->lpVtbl -> FeedAdded(This,path) )
#define IFeedFolderEvents_FeedDeleted(This,path) ( (This)->lpVtbl -> FeedDeleted(This,path) )
#define IFeedFolderEvents_FeedRenamed(This,path,oldPath) ( (This)->lpVtbl -> FeedRenamed(This,path,oldPath) )
#define IFeedFolderEvents_FeedUrlChanged(This,path) ( (This)->lpVtbl -> FeedUrlChanged(This,path) )
#define IFeedFolderEvents_FeedMovedFrom(This,path,oldPath) ( (This)->lpVtbl -> FeedMovedFrom(This,path,oldPath) )
#define IFeedFolderEvents_FeedMovedTo(This,path,oldPath) ( (This)->lpVtbl -> FeedMovedTo(This,path,oldPath) )
#define IFeedFolderEvents_FeedDownloading(This,path) ( (This)->lpVtbl -> FeedDownloading(This,path) )
#define IFeedFolderEvents_FeedDownloadCompleted(This,path,error) ( (This)->lpVtbl -> FeedDownloadCompleted(This,path,error) )
#define IFeedFolderEvents_FeedItemCountChanged(This,path,itemCountType) ( (This)->lpVtbl -> FeedItemCountChanged(This,path,itemCountType) )
#endif
#endif
#ifndef __IFeed_INTERFACE_DEFINED__
#define __IFeed_INTERFACE_DEFINED__
extern const IID IID_IFeed;
typedef struct IFeedVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFeed * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFeed * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFeed * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFeed * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFeed * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFeed * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFeed * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Xml) (IFeed * This, LONG count, FEEDS_XML_SORT_PROPERTY sortProperty, FEEDS_XML_SORT_ORDER sortOrder, FEEDS_XML_FILTER_FLAGS filterFlags, FEEDS_XML_INCLUDE_FLAGS includeFlags, BSTR * xml);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IFeed * This, BSTR * name);
	HRESULT(STDMETHODCALLTYPE * Rename) (IFeed * This, BSTR name);
	HRESULT(STDMETHODCALLTYPE * get_Url) (IFeed * This, BSTR * feedUrl);
	HRESULT(STDMETHODCALLTYPE * put_Url) (IFeed * This, BSTR feedUrl);
	HRESULT(STDMETHODCALLTYPE * get_LocalId) (IFeed * This, BSTR * feedGuid);
	HRESULT(STDMETHODCALLTYPE * get_Path) (IFeed * This, BSTR * path);
	HRESULT(STDMETHODCALLTYPE * Move) (IFeed * This, BSTR newParentPath);
	HRESULT(STDMETHODCALLTYPE * get_Parent) (IFeed * This, IDispatch ** disp);
	HRESULT(STDMETHODCALLTYPE * get_LastWriteTime) (IFeed * This, DATE * lastWrite);
	HRESULT(STDMETHODCALLTYPE * Delete) (IFeed * This);
	HRESULT(STDMETHODCALLTYPE * Download) (IFeed * This);
	HRESULT(STDMETHODCALLTYPE * AsyncDownload) (IFeed * This);
	HRESULT(STDMETHODCALLTYPE * CancelAsyncDownload) (IFeed * This);
	HRESULT(STDMETHODCALLTYPE * get_SyncSetting) (IFeed * This, FEEDS_SYNC_SETTING * syncSetting);
	HRESULT(STDMETHODCALLTYPE * put_SyncSetting) (IFeed * This, FEEDS_SYNC_SETTING syncSetting);
	HRESULT(STDMETHODCALLTYPE * get_Interval) (IFeed * This, LONG * minutes);
	HRESULT(STDMETHODCALLTYPE * put_Interval) (IFeed * This, LONG minutes);
	HRESULT(STDMETHODCALLTYPE * get_LastDownloadTime) (IFeed * This, DATE * lastDownload);
	HRESULT(STDMETHODCALLTYPE * get_LocalEnclosurePath) (IFeed * This, BSTR * path);
	HRESULT(STDMETHODCALLTYPE * get_Items) (IFeed * This, IDispatch ** disp);
	HRESULT(STDMETHODCALLTYPE * GetItem) (IFeed * This, LONG itemId, IDispatch ** disp);
	HRESULT(STDMETHODCALLTYPE * get_Title) (IFeed * This, BSTR * title);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IFeed * This, BSTR * description);
	HRESULT(STDMETHODCALLTYPE * get_Link) (IFeed * This, BSTR * homePage);
	HRESULT(STDMETHODCALLTYPE * get_Image) (IFeed * This, BSTR * imageUrl);
	HRESULT(STDMETHODCALLTYPE * get_LastBuildDate) (IFeed * This, DATE * lastBuildDate);
	HRESULT(STDMETHODCALLTYPE * get_PubDate) (IFeed * This, DATE * lastPopulateDate);
	HRESULT(STDMETHODCALLTYPE * get_Ttl) (IFeed * This, LONG * ttl);
	HRESULT(STDMETHODCALLTYPE * get_Language) (IFeed * This, BSTR * language);
	HRESULT(STDMETHODCALLTYPE * get_Copyright) (IFeed * This, BSTR * copyright);
	HRESULT(STDMETHODCALLTYPE * get_MaxItemCount) (IFeed * This, LONG * count);
	HRESULT(STDMETHODCALLTYPE * put_MaxItemCount) (IFeed * This, LONG count);
	HRESULT(STDMETHODCALLTYPE * get_DownloadEnclosuresAutomatically) (IFeed * This, VARIANT_BOOL * downloadEnclosuresAutomatically);
	HRESULT(STDMETHODCALLTYPE * put_DownloadEnclosuresAutomatically) (IFeed * This, VARIANT_BOOL downloadEnclosuresAutomatically);
	HRESULT(STDMETHODCALLTYPE * get_DownloadStatus) (IFeed * This, FEEDS_DOWNLOAD_STATUS * status);
	HRESULT(STDMETHODCALLTYPE * get_LastDownloadError) (IFeed * This, FEEDS_DOWNLOAD_ERROR * error);
	HRESULT(STDMETHODCALLTYPE * Merge) (IFeed * This, BSTR feedXml, BSTR feedUrl);
	HRESULT(STDMETHODCALLTYPE * get_DownloadUrl) (IFeed * This, BSTR * feedUrl);
	HRESULT(STDMETHODCALLTYPE * get_IsList) (IFeed * This, VARIANT_BOOL * isList);
	HRESULT(STDMETHODCALLTYPE * MarkAllItemsRead) (IFeed * This);
	HRESULT(STDMETHODCALLTYPE * GetWatcher) (IFeed * This, FEEDS_EVENTS_SCOPE scope, FEEDS_EVENTS_MASK mask, IDispatch ** disp);
	HRESULT(STDMETHODCALLTYPE * get_UnreadItemCount) (IFeed * This, LONG * count);
	HRESULT(STDMETHODCALLTYPE * get_ItemCount) (IFeed * This, LONG * count);
	END_INTERFACE
}  IFeedVtbl;
interface IFeed
{
	CONST_VTBL struct IFeedVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFeed_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFeed_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IFeed_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IFeed_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFeed_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFeed_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFeed_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFeed_Xml(This,count,sortProperty,sortOrder,filterFlags,includeFlags,xml) ( (This)->lpVtbl -> Xml(This,count,sortProperty,sortOrder,filterFlags,includeFlags,xml) )
#define IFeed_get_Name(This,name) ( (This)->lpVtbl -> get_Name(This,name) )
#define IFeed_Rename(This,name) ( (This)->lpVtbl -> Rename(This,name) )
#define IFeed_get_Url(This,feedUrl) ( (This)->lpVtbl -> get_Url(This,feedUrl) )
#define IFeed_put_Url(This,feedUrl) ( (This)->lpVtbl -> put_Url(This,feedUrl) )
#define IFeed_get_LocalId(This,feedGuid) ( (This)->lpVtbl -> get_LocalId(This,feedGuid) )
#define IFeed_get_Path(This,path) ( (This)->lpVtbl -> get_Path(This,path) )
#define IFeed_Move(This,newParentPath) ( (This)->lpVtbl -> Move(This,newParentPath) )
#define IFeed_get_Parent(This,disp) ( (This)->lpVtbl -> get_Parent(This,disp) )
#define IFeed_get_LastWriteTime(This,lastWrite) ( (This)->lpVtbl -> get_LastWriteTime(This,lastWrite) )
#define IFeed_Delete(This) ( (This)->lpVtbl -> Delete(This) )
#define IFeed_Download(This) ( (This)->lpVtbl -> Download(This) )
#define IFeed_AsyncDownload(This) ( (This)->lpVtbl -> AsyncDownload(This) )
#define IFeed_CancelAsyncDownload(This) ( (This)->lpVtbl -> CancelAsyncDownload(This) )
#define IFeed_get_SyncSetting(This,syncSetting) ( (This)->lpVtbl -> get_SyncSetting(This,syncSetting) )
#define IFeed_put_SyncSetting(This,syncSetting) ( (This)->lpVtbl -> put_SyncSetting(This,syncSetting) )
#define IFeed_get_Interval(This,minutes) ( (This)->lpVtbl -> get_Interval(This,minutes) )
#define IFeed_put_Interval(This,minutes) ( (This)->lpVtbl -> put_Interval(This,minutes) )
#define IFeed_get_LastDownloadTime(This,lastDownload) ( (This)->lpVtbl -> get_LastDownloadTime(This,lastDownload) )
#define IFeed_get_LocalEnclosurePath(This,path) ( (This)->lpVtbl -> get_LocalEnclosurePath(This,path) )
#define IFeed_get_Items(This,disp) ( (This)->lpVtbl -> get_Items(This,disp) )
#define IFeed_GetItem(This,itemId,disp) ( (This)->lpVtbl -> GetItem(This,itemId,disp) )
#define IFeed_get_Title(This,title) ( (This)->lpVtbl -> get_Title(This,title) )
#define IFeed_get_Description(This,description) ( (This)->lpVtbl -> get_Description(This,description) )
#define IFeed_get_Link(This,homePage) ( (This)->lpVtbl -> get_Link(This,homePage) )
#define IFeed_get_Image(This,imageUrl) ( (This)->lpVtbl -> get_Image(This,imageUrl) )
#define IFeed_get_LastBuildDate(This,lastBuildDate) ( (This)->lpVtbl -> get_LastBuildDate(This,lastBuildDate) )
#define IFeed_get_PubDate(This,lastPopulateDate) ( (This)->lpVtbl -> get_PubDate(This,lastPopulateDate) )
#define IFeed_get_Ttl(This,ttl) ( (This)->lpVtbl -> get_Ttl(This,ttl) )
#define IFeed_get_Language(This,language) ( (This)->lpVtbl -> get_Language(This,language) )
#define IFeed_get_Copyright(This,copyright) ( (This)->lpVtbl -> get_Copyright(This,copyright) )
#define IFeed_get_MaxItemCount(This,count) ( (This)->lpVtbl -> get_MaxItemCount(This,count) )
#define IFeed_put_MaxItemCount(This,count) ( (This)->lpVtbl -> put_MaxItemCount(This,count) )
#define IFeed_get_DownloadEnclosuresAutomatically(This,downloadEnclosuresAutomatically) ( (This)->lpVtbl -> get_DownloadEnclosuresAutomatically(This,downloadEnclosuresAutomatically) )
#define IFeed_put_DownloadEnclosuresAutomatically(This,downloadEnclosuresAutomatically) ( (This)->lpVtbl -> put_DownloadEnclosuresAutomatically(This,downloadEnclosuresAutomatically) )
#define IFeed_get_DownloadStatus(This,status) ( (This)->lpVtbl -> get_DownloadStatus(This,status) )
#define IFeed_get_LastDownloadError(This,error) ( (This)->lpVtbl -> get_LastDownloadError(This,error) )
#define IFeed_Merge(This,feedXml,feedUrl) ( (This)->lpVtbl -> Merge(This,feedXml,feedUrl) )
#define IFeed_get_DownloadUrl(This,feedUrl) ( (This)->lpVtbl -> get_DownloadUrl(This,feedUrl) )
#define IFeed_get_IsList(This,isList) ( (This)->lpVtbl -> get_IsList(This,isList) )
#define IFeed_MarkAllItemsRead(This) ( (This)->lpVtbl -> MarkAllItemsRead(This) )
#define IFeed_GetWatcher(This,scope,mask,disp) ( (This)->lpVtbl -> GetWatcher(This,scope,mask,disp) )
#define IFeed_get_UnreadItemCount(This,count) ( (This)->lpVtbl -> get_UnreadItemCount(This,count) )
#define IFeed_get_ItemCount(This,count) ( (This)->lpVtbl -> get_ItemCount(This,count) )
#endif
#endif
#ifndef __IFeed2_INTERFACE_DEFINED__
#define __IFeed2_INTERFACE_DEFINED__
extern const IID IID_IFeed2;
typedef struct IFeed2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFeed2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFeed2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFeed2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFeed2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFeed2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFeed2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFeed2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Xml) (IFeed2 * This, LONG count, FEEDS_XML_SORT_PROPERTY sortProperty, FEEDS_XML_SORT_ORDER sortOrder, FEEDS_XML_FILTER_FLAGS filterFlags, FEEDS_XML_INCLUDE_FLAGS includeFlags, BSTR * xml);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IFeed2 * This, BSTR * name);
	HRESULT(STDMETHODCALLTYPE * Rename) (IFeed2 * This, BSTR name);
	HRESULT(STDMETHODCALLTYPE * get_Url) (IFeed2 * This, BSTR * feedUrl);
	HRESULT(STDMETHODCALLTYPE * put_Url) (IFeed2 * This, BSTR feedUrl);
	HRESULT(STDMETHODCALLTYPE * get_LocalId) (IFeed2 * This, BSTR * feedGuid);
	HRESULT(STDMETHODCALLTYPE * get_Path) (IFeed2 * This, BSTR * path);
	HRESULT(STDMETHODCALLTYPE * Move) (IFeed2 * This, BSTR newParentPath);
	HRESULT(STDMETHODCALLTYPE * get_Parent) (IFeed2 * This, IDispatch ** disp);
	HRESULT(STDMETHODCALLTYPE * get_LastWriteTime) (IFeed2 * This, DATE * lastWrite);
	HRESULT(STDMETHODCALLTYPE * Delete) (IFeed2 * This);
	HRESULT(STDMETHODCALLTYPE * Download) (IFeed2 * This);
	HRESULT(STDMETHODCALLTYPE * AsyncDownload) (IFeed2 * This);
	HRESULT(STDMETHODCALLTYPE * CancelAsyncDownload) (IFeed2 * This);
	HRESULT(STDMETHODCALLTYPE * get_SyncSetting) (IFeed2 * This, FEEDS_SYNC_SETTING * syncSetting);
	HRESULT(STDMETHODCALLTYPE * put_SyncSetting) (IFeed2 * This, FEEDS_SYNC_SETTING syncSetting);
	HRESULT(STDMETHODCALLTYPE * get_Interval) (IFeed2 * This, LONG * minutes);
	HRESULT(STDMETHODCALLTYPE * put_Interval) (IFeed2 * This, LONG minutes);
	HRESULT(STDMETHODCALLTYPE * get_LastDownloadTime) (IFeed2 * This, DATE * lastDownload);
	HRESULT(STDMETHODCALLTYPE * get_LocalEnclosurePath) (IFeed2 * This, BSTR * path);
	HRESULT(STDMETHODCALLTYPE * get_Items) (IFeed2 * This, IDispatch ** disp);
	HRESULT(STDMETHODCALLTYPE * GetItem) (IFeed2 * This, LONG itemId, IDispatch ** disp);
	HRESULT(STDMETHODCALLTYPE * get_Title) (IFeed2 * This, BSTR * title);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IFeed2 * This, BSTR * description);
	HRESULT(STDMETHODCALLTYPE * get_Link) (IFeed2 * This, BSTR * homePage);
	HRESULT(STDMETHODCALLTYPE * get_Image) (IFeed2 * This, BSTR * imageUrl);
	HRESULT(STDMETHODCALLTYPE * get_LastBuildDate) (IFeed2 * This, DATE * lastBuildDate);
	HRESULT(STDMETHODCALLTYPE * get_PubDate) (IFeed2 * This, DATE * lastPopulateDate);
	HRESULT(STDMETHODCALLTYPE * get_Ttl) (IFeed2 * This, LONG * ttl);
	HRESULT(STDMETHODCALLTYPE * get_Language) (IFeed2 * This, BSTR * language);
	HRESULT(STDMETHODCALLTYPE * get_Copyright) (IFeed2 * This, BSTR * copyright);
	HRESULT(STDMETHODCALLTYPE * get_MaxItemCount) (IFeed2 * This, LONG * count);
	HRESULT(STDMETHODCALLTYPE * put_MaxItemCount) (IFeed2 * This, LONG count);
	HRESULT(STDMETHODCALLTYPE * get_DownloadEnclosuresAutomatically) (IFeed2 * This, VARIANT_BOOL * downloadEnclosuresAutomatically);
	HRESULT(STDMETHODCALLTYPE * put_DownloadEnclosuresAutomatically) (IFeed2 * This, VARIANT_BOOL downloadEnclosuresAutomatically);
	HRESULT(STDMETHODCALLTYPE * get_DownloadStatus) (IFeed2 * This, FEEDS_DOWNLOAD_STATUS * status);
	HRESULT(STDMETHODCALLTYPE * get_LastDownloadError) (IFeed2 * This, FEEDS_DOWNLOAD_ERROR * error);
	HRESULT(STDMETHODCALLTYPE * Merge) (IFeed2 * This, BSTR feedXml, BSTR feedUrl);
	HRESULT(STDMETHODCALLTYPE * get_DownloadUrl) (IFeed2 * This, BSTR * feedUrl);
	HRESULT(STDMETHODCALLTYPE * get_IsList) (IFeed2 * This, VARIANT_BOOL * isList);
	HRESULT(STDMETHODCALLTYPE * MarkAllItemsRead) (IFeed2 * This);
	HRESULT(STDMETHODCALLTYPE * GetWatcher) (IFeed2 * This, FEEDS_EVENTS_SCOPE scope, FEEDS_EVENTS_MASK mask, IDispatch ** disp);
	HRESULT(STDMETHODCALLTYPE * get_UnreadItemCount) (IFeed2 * This, LONG * count);
	HRESULT(STDMETHODCALLTYPE * get_ItemCount) (IFeed2 * This, LONG * count);
	HRESULT(STDMETHODCALLTYPE * GetItemByEffectiveId) (IFeed2 * This, LONG itemEffectiveId, IDispatch ** disp);
	HRESULT(STDMETHODCALLTYPE * get_LastItemDownloadTime) (IFeed2 * This, DATE * lastItemDownloadTime);
	HRESULT(STDMETHODCALLTYPE * get_Username) (IFeed2 * This, BSTR * username);
	HRESULT(STDMETHODCALLTYPE * get_Password) (IFeed2 * This, BSTR * password);
	HRESULT(STDMETHODCALLTYPE * SetCredentials) (IFeed2 * This, BSTR username, BSTR password);
	HRESULT(STDMETHODCALLTYPE * ClearCredentials) (IFeed2 * This);
	END_INTERFACE
}  IFeed2Vtbl;
interface IFeed2
{
	CONST_VTBL struct IFeed2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFeed2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFeed2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IFeed2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IFeed2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFeed2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFeed2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFeed2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFeed2_Xml(This,count,sortProperty,sortOrder,filterFlags,includeFlags,xml) ( (This)->lpVtbl -> Xml(This,count,sortProperty,sortOrder,filterFlags,includeFlags,xml) )
#define IFeed2_get_Name(This,name) ( (This)->lpVtbl -> get_Name(This,name) )
#define IFeed2_Rename(This,name) ( (This)->lpVtbl -> Rename(This,name) )
#define IFeed2_get_Url(This,feedUrl) ( (This)->lpVtbl -> get_Url(This,feedUrl) )
#define IFeed2_put_Url(This,feedUrl) ( (This)->lpVtbl -> put_Url(This,feedUrl) )
#define IFeed2_get_LocalId(This,feedGuid) ( (This)->lpVtbl -> get_LocalId(This,feedGuid) )
#define IFeed2_get_Path(This,path) ( (This)->lpVtbl -> get_Path(This,path) )
#define IFeed2_Move(This,newParentPath) ( (This)->lpVtbl -> Move(This,newParentPath) )
#define IFeed2_get_Parent(This,disp) ( (This)->lpVtbl -> get_Parent(This,disp) )
#define IFeed2_get_LastWriteTime(This,lastWrite) ( (This)->lpVtbl -> get_LastWriteTime(This,lastWrite) )
#define IFeed2_Delete(This) ( (This)->lpVtbl -> Delete(This) )
#define IFeed2_Download(This) ( (This)->lpVtbl -> Download(This) )
#define IFeed2_AsyncDownload(This) ( (This)->lpVtbl -> AsyncDownload(This) )
#define IFeed2_CancelAsyncDownload(This) ( (This)->lpVtbl -> CancelAsyncDownload(This) )
#define IFeed2_get_SyncSetting(This,syncSetting) ( (This)->lpVtbl -> get_SyncSetting(This,syncSetting) )
#define IFeed2_put_SyncSetting(This,syncSetting) ( (This)->lpVtbl -> put_SyncSetting(This,syncSetting) )
#define IFeed2_get_Interval(This,minutes) ( (This)->lpVtbl -> get_Interval(This,minutes) )
#define IFeed2_put_Interval(This,minutes) ( (This)->lpVtbl -> put_Interval(This,minutes) )
#define IFeed2_get_LastDownloadTime(This,lastDownload) ( (This)->lpVtbl -> get_LastDownloadTime(This,lastDownload) )
#define IFeed2_get_LocalEnclosurePath(This,path) ( (This)->lpVtbl -> get_LocalEnclosurePath(This,path) )
#define IFeed2_get_Items(This,disp) ( (This)->lpVtbl -> get_Items(This,disp) )
#define IFeed2_GetItem(This,itemId,disp) ( (This)->lpVtbl -> GetItem(This,itemId,disp) )
#define IFeed2_get_Title(This,title) ( (This)->lpVtbl -> get_Title(This,title) )
#define IFeed2_get_Description(This,description) ( (This)->lpVtbl -> get_Description(This,description) )
#define IFeed2_get_Link(This,homePage) ( (This)->lpVtbl -> get_Link(This,homePage) )
#define IFeed2_get_Image(This,imageUrl) ( (This)->lpVtbl -> get_Image(This,imageUrl) )
#define IFeed2_get_LastBuildDate(This,lastBuildDate) ( (This)->lpVtbl -> get_LastBuildDate(This,lastBuildDate) )
#define IFeed2_get_PubDate(This,lastPopulateDate) ( (This)->lpVtbl -> get_PubDate(This,lastPopulateDate) )
#define IFeed2_get_Ttl(This,ttl) ( (This)->lpVtbl -> get_Ttl(This,ttl) )
#define IFeed2_get_Language(This,language) ( (This)->lpVtbl -> get_Language(This,language) )
#define IFeed2_get_Copyright(This,copyright) ( (This)->lpVtbl -> get_Copyright(This,copyright) )
#define IFeed2_get_MaxItemCount(This,count) ( (This)->lpVtbl -> get_MaxItemCount(This,count) )
#define IFeed2_put_MaxItemCount(This,count) ( (This)->lpVtbl -> put_MaxItemCount(This,count) )
#define IFeed2_get_DownloadEnclosuresAutomatically(This,downloadEnclosuresAutomatically) ( (This)->lpVtbl -> get_DownloadEnclosuresAutomatically(This,downloadEnclosuresAutomatically) )
#define IFeed2_put_DownloadEnclosuresAutomatically(This,downloadEnclosuresAutomatically) ( (This)->lpVtbl -> put_DownloadEnclosuresAutomatically(This,downloadEnclosuresAutomatically) )
#define IFeed2_get_DownloadStatus(This,status) ( (This)->lpVtbl -> get_DownloadStatus(This,status) )
#define IFeed2_get_LastDownloadError(This,error) ( (This)->lpVtbl -> get_LastDownloadError(This,error) )
#define IFeed2_Merge(This,feedXml,feedUrl) ( (This)->lpVtbl -> Merge(This,feedXml,feedUrl) )
#define IFeed2_get_DownloadUrl(This,feedUrl) ( (This)->lpVtbl -> get_DownloadUrl(This,feedUrl) )
#define IFeed2_get_IsList(This,isList) ( (This)->lpVtbl -> get_IsList(This,isList) )
#define IFeed2_MarkAllItemsRead(This) ( (This)->lpVtbl -> MarkAllItemsRead(This) )
#define IFeed2_GetWatcher(This,scope,mask,disp) ( (This)->lpVtbl -> GetWatcher(This,scope,mask,disp) )
#define IFeed2_get_UnreadItemCount(This,count) ( (This)->lpVtbl -> get_UnreadItemCount(This,count) )
#define IFeed2_get_ItemCount(This,count) ( (This)->lpVtbl -> get_ItemCount(This,count) )
#define IFeed2_GetItemByEffectiveId(This,itemEffectiveId,disp) ( (This)->lpVtbl -> GetItemByEffectiveId(This,itemEffectiveId,disp) )
#define IFeed2_get_LastItemDownloadTime(This,lastItemDownloadTime) ( (This)->lpVtbl -> get_LastItemDownloadTime(This,lastItemDownloadTime) )
#define IFeed2_get_Username(This,username) ( (This)->lpVtbl -> get_Username(This,username) )
#define IFeed2_get_Password(This,password) ( (This)->lpVtbl -> get_Password(This,password) )
#define IFeed2_SetCredentials(This,username,password) ( (This)->lpVtbl -> SetCredentials(This,username,password) )
#define IFeed2_ClearCredentials(This) ( (This)->lpVtbl -> ClearCredentials(This) )
#endif
#endif
#ifndef __IFeedEvents_INTERFACE_DEFINED__
#define __IFeedEvents_INTERFACE_DEFINED__
extern const IID IID_IFeedEvents;
typedef struct IFeedEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFeedEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFeedEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFeedEvents * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFeedEvents * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFeedEvents * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFeedEvents * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFeedEvents * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Error) (IFeedEvents * This);
	HRESULT(STDMETHODCALLTYPE * FeedDeleted) (IFeedEvents * This, const BSTR path);
	HRESULT(STDMETHODCALLTYPE * FeedRenamed) (IFeedEvents * This, const BSTR path, const BSTR oldPath);
	HRESULT(STDMETHODCALLTYPE * FeedUrlChanged) (IFeedEvents * This, const BSTR path);
	HRESULT(STDMETHODCALLTYPE * FeedMoved) (IFeedEvents * This, const BSTR path, const BSTR oldPath);
	HRESULT(STDMETHODCALLTYPE * FeedDownloading) (IFeedEvents * This, const BSTR path);
	HRESULT(STDMETHODCALLTYPE * FeedDownloadCompleted) (IFeedEvents * This, const BSTR path, FEEDS_DOWNLOAD_ERROR error);
	HRESULT(STDMETHODCALLTYPE * FeedItemCountChanged) (IFeedEvents * This, const BSTR path, LONG itemCountType);
	END_INTERFACE
}  IFeedEventsVtbl;
interface IFeedEvents
{
	CONST_VTBL struct IFeedEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFeedEvents_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFeedEvents_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IFeedEvents_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IFeedEvents_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFeedEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFeedEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFeedEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFeedEvents_Error(This) ( (This)->lpVtbl -> Error(This) )
#define IFeedEvents_FeedDeleted(This,path) ( (This)->lpVtbl -> FeedDeleted(This,path) )
#define IFeedEvents_FeedRenamed(This,path,oldPath) ( (This)->lpVtbl -> FeedRenamed(This,path,oldPath) )
#define IFeedEvents_FeedUrlChanged(This,path) ( (This)->lpVtbl -> FeedUrlChanged(This,path) )
#define IFeedEvents_FeedMoved(This,path,oldPath) ( (This)->lpVtbl -> FeedMoved(This,path,oldPath) )
#define IFeedEvents_FeedDownloading(This,path) ( (This)->lpVtbl -> FeedDownloading(This,path) )
#define IFeedEvents_FeedDownloadCompleted(This,path,error) ( (This)->lpVtbl -> FeedDownloadCompleted(This,path,error) )
#define IFeedEvents_FeedItemCountChanged(This,path,itemCountType) ( (This)->lpVtbl -> FeedItemCountChanged(This,path,itemCountType) )
#endif
#endif
#ifndef __IFeedItem_INTERFACE_DEFINED__
#define __IFeedItem_INTERFACE_DEFINED__
extern const IID IID_IFeedItem;
typedef struct IFeedItemVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFeedItem * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFeedItem * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFeedItem * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFeedItem * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFeedItem * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFeedItem * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFeedItem * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Xml) (IFeedItem * This, FEEDS_XML_INCLUDE_FLAGS includeFlags, BSTR * xml);
	HRESULT(STDMETHODCALLTYPE * get_Title) (IFeedItem * This, BSTR * title);
	HRESULT(STDMETHODCALLTYPE * get_Link) (IFeedItem * This, BSTR * linkUrl);
	HRESULT(STDMETHODCALLTYPE * get_Guid) (IFeedItem * This, BSTR * itemGuid);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IFeedItem * This, BSTR * description);
	HRESULT(STDMETHODCALLTYPE * get_PubDate) (IFeedItem * This, DATE * pubDate);
	HRESULT(STDMETHODCALLTYPE * get_Comments) (IFeedItem * This, BSTR * comments);
	HRESULT(STDMETHODCALLTYPE * get_Author) (IFeedItem * This, BSTR * author);
	HRESULT(STDMETHODCALLTYPE * get_Enclosure) (IFeedItem * This, IDispatch ** disp);
	HRESULT(STDMETHODCALLTYPE * get_IsRead) (IFeedItem * This, VARIANT_BOOL * isRead);
	HRESULT(STDMETHODCALLTYPE * put_IsRead) (IFeedItem * This, VARIANT_BOOL isRead);
	HRESULT(STDMETHODCALLTYPE * get_LocalId) (IFeedItem * This, LONG * itemId);
	HRESULT(STDMETHODCALLTYPE * get_Parent) (IFeedItem * This, IDispatch ** disp);
	HRESULT(STDMETHODCALLTYPE * Delete) (IFeedItem * This);
	HRESULT(STDMETHODCALLTYPE * get_DownloadUrl) (IFeedItem * This, BSTR * itemUrl);
	HRESULT(STDMETHODCALLTYPE * get_LastDownloadTime) (IFeedItem * This, DATE * lastDownload);
	HRESULT(STDMETHODCALLTYPE * get_Modified) (IFeedItem * This, DATE * modified);
	END_INTERFACE
}  IFeedItemVtbl;
interface IFeedItem
{
	CONST_VTBL struct IFeedItemVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFeedItem_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFeedItem_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IFeedItem_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IFeedItem_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFeedItem_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFeedItem_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFeedItem_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFeedItem_Xml(This,includeFlags,xml) ( (This)->lpVtbl -> Xml(This,includeFlags,xml) )
#define IFeedItem_get_Title(This,title) ( (This)->lpVtbl -> get_Title(This,title) )
#define IFeedItem_get_Link(This,linkUrl) ( (This)->lpVtbl -> get_Link(This,linkUrl) )
#define IFeedItem_get_Guid(This,itemGuid) ( (This)->lpVtbl -> get_Guid(This,itemGuid) )
#define IFeedItem_get_Description(This,description) ( (This)->lpVtbl -> get_Description(This,description) )
#define IFeedItem_get_PubDate(This,pubDate) ( (This)->lpVtbl -> get_PubDate(This,pubDate) )
#define IFeedItem_get_Comments(This,comments) ( (This)->lpVtbl -> get_Comments(This,comments) )
#define IFeedItem_get_Author(This,author) ( (This)->lpVtbl -> get_Author(This,author) )
#define IFeedItem_get_Enclosure(This,disp) ( (This)->lpVtbl -> get_Enclosure(This,disp) )
#define IFeedItem_get_IsRead(This,isRead) ( (This)->lpVtbl -> get_IsRead(This,isRead) )
#define IFeedItem_put_IsRead(This,isRead) ( (This)->lpVtbl -> put_IsRead(This,isRead) )
#define IFeedItem_get_LocalId(This,itemId) ( (This)->lpVtbl -> get_LocalId(This,itemId) )
#define IFeedItem_get_Parent(This,disp) ( (This)->lpVtbl -> get_Parent(This,disp) )
#define IFeedItem_Delete(This) ( (This)->lpVtbl -> Delete(This) )
#define IFeedItem_get_DownloadUrl(This,itemUrl) ( (This)->lpVtbl -> get_DownloadUrl(This,itemUrl) )
#define IFeedItem_get_LastDownloadTime(This,lastDownload) ( (This)->lpVtbl -> get_LastDownloadTime(This,lastDownload) )
#define IFeedItem_get_Modified(This,modified) ( (This)->lpVtbl -> get_Modified(This,modified) )
#endif
#endif
#ifndef __IFeedItem2_INTERFACE_DEFINED__
#define __IFeedItem2_INTERFACE_DEFINED__
extern const IID IID_IFeedItem2;
typedef struct IFeedItem2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFeedItem2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFeedItem2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFeedItem2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFeedItem2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFeedItem2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFeedItem2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFeedItem2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Xml) (IFeedItem2 * This, FEEDS_XML_INCLUDE_FLAGS includeFlags, BSTR * xml);
	HRESULT(STDMETHODCALLTYPE * get_Title) (IFeedItem2 * This, BSTR * title);
	HRESULT(STDMETHODCALLTYPE * get_Link) (IFeedItem2 * This, BSTR * linkUrl);
	HRESULT(STDMETHODCALLTYPE * get_Guid) (IFeedItem2 * This, BSTR * itemGuid);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IFeedItem2 * This, BSTR * description);
	HRESULT(STDMETHODCALLTYPE * get_PubDate) (IFeedItem2 * This, DATE * pubDate);
	HRESULT(STDMETHODCALLTYPE * get_Comments) (IFeedItem2 * This, BSTR * comments);
	HRESULT(STDMETHODCALLTYPE * get_Author) (IFeedItem2 * This, BSTR * author);
	HRESULT(STDMETHODCALLTYPE * get_Enclosure) (IFeedItem2 * This, IDispatch ** disp);
	HRESULT(STDMETHODCALLTYPE * get_IsRead) (IFeedItem2 * This, VARIANT_BOOL * isRead);
	HRESULT(STDMETHODCALLTYPE * put_IsRead) (IFeedItem2 * This, VARIANT_BOOL isRead);
	HRESULT(STDMETHODCALLTYPE * get_LocalId) (IFeedItem2 * This, LONG * itemId);
	HRESULT(STDMETHODCALLTYPE * get_Parent) (IFeedItem2 * This, IDispatch ** disp);
	HRESULT(STDMETHODCALLTYPE * Delete) (IFeedItem2 * This);
	HRESULT(STDMETHODCALLTYPE * get_DownloadUrl) (IFeedItem2 * This, BSTR * itemUrl);
	HRESULT(STDMETHODCALLTYPE * get_LastDownloadTime) (IFeedItem2 * This, DATE * lastDownload);
	HRESULT(STDMETHODCALLTYPE * get_Modified) (IFeedItem2 * This, DATE * modified);
	HRESULT(STDMETHODCALLTYPE * get_EffectiveId) (IFeedItem2 * This, LONG * effectiveId);
	END_INTERFACE
}  IFeedItem2Vtbl;
interface IFeedItem2
{
	CONST_VTBL struct IFeedItem2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFeedItem2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFeedItem2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IFeedItem2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IFeedItem2_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFeedItem2_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFeedItem2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFeedItem2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFeedItem2_Xml(This,includeFlags,xml) ( (This)->lpVtbl -> Xml(This,includeFlags,xml) )
#define IFeedItem2_get_Title(This,title) ( (This)->lpVtbl -> get_Title(This,title) )
#define IFeedItem2_get_Link(This,linkUrl) ( (This)->lpVtbl -> get_Link(This,linkUrl) )
#define IFeedItem2_get_Guid(This,itemGuid) ( (This)->lpVtbl -> get_Guid(This,itemGuid) )
#define IFeedItem2_get_Description(This,description) ( (This)->lpVtbl -> get_Description(This,description) )
#define IFeedItem2_get_PubDate(This,pubDate) ( (This)->lpVtbl -> get_PubDate(This,pubDate) )
#define IFeedItem2_get_Comments(This,comments) ( (This)->lpVtbl -> get_Comments(This,comments) )
#define IFeedItem2_get_Author(This,author) ( (This)->lpVtbl -> get_Author(This,author) )
#define IFeedItem2_get_Enclosure(This,disp) ( (This)->lpVtbl -> get_Enclosure(This,disp) )
#define IFeedItem2_get_IsRead(This,isRead) ( (This)->lpVtbl -> get_IsRead(This,isRead) )
#define IFeedItem2_put_IsRead(This,isRead) ( (This)->lpVtbl -> put_IsRead(This,isRead) )
#define IFeedItem2_get_LocalId(This,itemId) ( (This)->lpVtbl -> get_LocalId(This,itemId) )
#define IFeedItem2_get_Parent(This,disp) ( (This)->lpVtbl -> get_Parent(This,disp) )
#define IFeedItem2_Delete(This) ( (This)->lpVtbl -> Delete(This) )
#define IFeedItem2_get_DownloadUrl(This,itemUrl) ( (This)->lpVtbl -> get_DownloadUrl(This,itemUrl) )
#define IFeedItem2_get_LastDownloadTime(This,lastDownload) ( (This)->lpVtbl -> get_LastDownloadTime(This,lastDownload) )
#define IFeedItem2_get_Modified(This,modified) ( (This)->lpVtbl -> get_Modified(This,modified) )
#define IFeedItem2_get_EffectiveId(This,effectiveId) ( (This)->lpVtbl -> get_EffectiveId(This,effectiveId) )
#endif
#endif
#ifndef __IFeedEnclosure_INTERFACE_DEFINED__
#define __IFeedEnclosure_INTERFACE_DEFINED__
extern const IID IID_IFeedEnclosure;
typedef struct IFeedEnclosureVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFeedEnclosure * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFeedEnclosure * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFeedEnclosure * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFeedEnclosure * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFeedEnclosure * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFeedEnclosure * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFeedEnclosure * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Url) (IFeedEnclosure * This, BSTR * enclosureUrl);
	HRESULT(STDMETHODCALLTYPE * get_Type) (IFeedEnclosure * This, BSTR * mimeType);
	HRESULT(STDMETHODCALLTYPE * get_Length) (IFeedEnclosure * This, LONG * length);
	HRESULT(STDMETHODCALLTYPE * AsyncDownload) (IFeedEnclosure * This);
	HRESULT(STDMETHODCALLTYPE * CancelAsyncDownload) (IFeedEnclosure * This);
	HRESULT(STDMETHODCALLTYPE * get_DownloadStatus) (IFeedEnclosure * This, FEEDS_DOWNLOAD_STATUS * status);
	HRESULT(STDMETHODCALLTYPE * get_LastDownloadError) (IFeedEnclosure * This, FEEDS_DOWNLOAD_ERROR * error);
	HRESULT(STDMETHODCALLTYPE * get_LocalPath) (IFeedEnclosure * This, BSTR * localPath);
	HRESULT(STDMETHODCALLTYPE * get_Parent) (IFeedEnclosure * This, IDispatch ** disp);
	HRESULT(STDMETHODCALLTYPE * get_DownloadUrl) (IFeedEnclosure * This, BSTR * enclosureUrl);
	HRESULT(STDMETHODCALLTYPE * get_DownloadMimeType) (IFeedEnclosure * This, BSTR * mimeType);
	HRESULT(STDMETHODCALLTYPE * RemoveFile) (IFeedEnclosure * This);
	HRESULT(STDMETHODCALLTYPE * SetFile) (IFeedEnclosure * This, BSTR downloadUrl, BSTR downloadFilePath, BSTR downloadMimeType, BSTR enclosureFilename);
	END_INTERFACE
}  IFeedEnclosureVtbl;
interface IFeedEnclosure
{
	CONST_VTBL struct IFeedEnclosureVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFeedEnclosure_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFeedEnclosure_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IFeedEnclosure_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IFeedEnclosure_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFeedEnclosure_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFeedEnclosure_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFeedEnclosure_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFeedEnclosure_get_Url(This,enclosureUrl) ( (This)->lpVtbl -> get_Url(This,enclosureUrl) )
#define IFeedEnclosure_get_Type(This,mimeType) ( (This)->lpVtbl -> get_Type(This,mimeType) )
#define IFeedEnclosure_get_Length(This,length) ( (This)->lpVtbl -> get_Length(This,length) )
#define IFeedEnclosure_AsyncDownload(This) ( (This)->lpVtbl -> AsyncDownload(This) )
#define IFeedEnclosure_CancelAsyncDownload(This) ( (This)->lpVtbl -> CancelAsyncDownload(This) )
#define IFeedEnclosure_get_DownloadStatus(This,status) ( (This)->lpVtbl -> get_DownloadStatus(This,status) )
#define IFeedEnclosure_get_LastDownloadError(This,error) ( (This)->lpVtbl -> get_LastDownloadError(This,error) )
#define IFeedEnclosure_get_LocalPath(This,localPath) ( (This)->lpVtbl -> get_LocalPath(This,localPath) )
#define IFeedEnclosure_get_Parent(This,disp) ( (This)->lpVtbl -> get_Parent(This,disp) )
#define IFeedEnclosure_get_DownloadUrl(This,enclosureUrl) ( (This)->lpVtbl -> get_DownloadUrl(This,enclosureUrl) )
#define IFeedEnclosure_get_DownloadMimeType(This,mimeType) ( (This)->lpVtbl -> get_DownloadMimeType(This,mimeType) )
#define IFeedEnclosure_RemoveFile(This) ( (This)->lpVtbl -> RemoveFile(This) )
#define IFeedEnclosure_SetFile(This,downloadUrl,downloadFilePath,downloadMimeType,enclosureFilename) ( (This)->lpVtbl -> SetFile(This,downloadUrl,downloadFilePath,downloadMimeType,enclosureFilename) )
#endif
#endif
extern const CLSID CLSID_FeedsManager;
extern const CLSID CLSID_FeedFolderWatcher;
extern const CLSID CLSID_FeedWatcher;
#endif
#endif
