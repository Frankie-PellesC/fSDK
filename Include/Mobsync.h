/*+@@file@@----------------------------------------------------------------*//*!
 \file		Mobsync.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug  7 22:20:47 2016
 \date		Modified on Sun Aug  7 22:20:47 2016
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
#ifndef __mobsync_h__
#define __mobsync_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ISyncMgrSynchronizeCallback_FWD_DEFINED__
#define __ISyncMgrSynchronizeCallback_FWD_DEFINED__
typedef interface ISyncMgrSynchronizeCallback ISyncMgrSynchronizeCallback;
#endif
#ifndef __ISyncMgrEnumItems_FWD_DEFINED__
#define __ISyncMgrEnumItems_FWD_DEFINED__
typedef interface ISyncMgrEnumItems ISyncMgrEnumItems;
#endif
#ifndef __ISyncMgrSynchronize_FWD_DEFINED__
#define __ISyncMgrSynchronize_FWD_DEFINED__
typedef interface ISyncMgrSynchronize ISyncMgrSynchronize;
#endif
#ifndef __ISyncMgrSynchronizeInvoke_FWD_DEFINED__
#define __ISyncMgrSynchronizeInvoke_FWD_DEFINED__
typedef interface ISyncMgrSynchronizeInvoke ISyncMgrSynchronizeInvoke;
#endif
#ifndef __ISyncMgrRegister_FWD_DEFINED__
#define __ISyncMgrRegister_FWD_DEFINED__
typedef interface ISyncMgrRegister ISyncMgrRegister;
#endif
#ifndef __SyncMgr_FWD_DEFINED__
#define __SyncMgr_FWD_DEFINED__
typedef struct SyncMgr SyncMgr;
#endif
#include <objidl.h>
#include <oleidl.h>
#include <shobjidl.h>
#define SYNCMGRITEMID        GUID
#define REFSYNCMGRITEMID     REFGUID
#define SYNCMGRERRORID       GUID
#define REFSYNCMGRERRORID    REFGUID
#define S_SYNCMGR_MISSINGITEMS       MAKE_SCODE(SEVERITY_SUCCESS,FACILITY_ITF,0x0201)
#define S_SYNCMGR_RETRYSYNC          MAKE_SCODE(SEVERITY_SUCCESS,FACILITY_ITF,0x0202)
#define S_SYNCMGR_CANCELITEM         MAKE_SCODE(SEVERITY_SUCCESS,FACILITY_ITF,0x0203)
#define S_SYNCMGR_CANCELALL          MAKE_SCODE(SEVERITY_SUCCESS,FACILITY_ITF,0x0204)
#define S_SYNCMGR_ITEMDELETED        MAKE_SCODE(SEVERITY_SUCCESS,FACILITY_ITF,0x0210)
#define S_SYNCMGR_ENUMITEMS          MAKE_SCODE(SEVERITY_SUCCESS,FACILITY_ITF,0x0211)
extern RPC_IF_HANDLE __MIDL_itf_mobsync_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mobsync_0000_0000_v0_0_s_ifspec;
#ifndef __ISyncMgrSynchronizeCallback_INTERFACE_DEFINED__
#define __ISyncMgrSynchronizeCallback_INTERFACE_DEFINED__
typedef ISyncMgrSynchronizeCallback *LPSYNCMGRSYNCHRONIZECALLBACK;
#define   SYNCMGRPROGRESSITEM_STATUSTEXT         0x0001
#define   SYNCMGRPROGRESSITEM_STATUSTYPE         0x0002
#define   SYNCMGRPROGRESSITEM_PROGVALUE          0x0004
#define   SYNCMGRPROGRESSITEM_MAXVALUE           0x0008
typedef enum _tagSYNCMGRSTATUS
{
	SYNCMGRSTATUS_STOPPED = 0,
	SYNCMGRSTATUS_SKIPPED = 0x1,
	SYNCMGRSTATUS_PENDING = 0x2,
	SYNCMGRSTATUS_UPDATING = 0x3,
	SYNCMGRSTATUS_SUCCEEDED = 0x4,
	SYNCMGRSTATUS_FAILED = 0x5,
	SYNCMGRSTATUS_PAUSED = 0x6,
	SYNCMGRSTATUS_RESUMING = 0x7,
	SYNCMGRSTATUS_UPDATING_INDETERMINATE = 0x8,
	SYNCMGRSTATUS_DELETED = 0x100
} SYNCMGRSTATUS;
typedef struct _tagSYNCMGRPROGRESSITEM
{
	DWORD cbSize;
	UINT mask;
	LPCWSTR lpcStatusText;
	DWORD dwStatusType;
	int iProgValue;
	int iMaxValue;
} SYNCMGRPROGRESSITEM;
typedef struct _tagSYNCMGRPROGRESSITEM *LPSYNCMGRPROGRESSITEM;
typedef enum _tagSYNCMGRLOGLEVEL
{
	SYNCMGRLOGLEVEL_INFORMATION = 0x1,
	SYNCMGRLOGLEVEL_WARNING = 0x2,
	SYNCMGRLOGLEVEL_ERROR = 0x3,
	SYNCMGRLOGLEVEL_LOGLEVELMAX = 0x3
} SYNCMGRLOGLEVEL;
#define   SYNCMGRLOGERROR_ERRORFLAGS                     0x0001
#define   SYNCMGRLOGERROR_ERRORID                        0x0002
#define   SYNCMGRLOGERROR_ITEMID                         0x0004
typedef enum _tagSYNCMGRERRORFLAGS
{
	SYNCMGRERRORFLAG_ENABLEJUMPTEXT = 0x1
} SYNCMGRERRORFLAGS;
typedef struct _tagSYNCMGRLOGERRORINFO
{
	DWORD cbSize;
	DWORD mask;
	DWORD dwSyncMgrErrorFlags;
	GUID ErrorID;
	GUID ItemID;
} SYNCMGRLOGERRORINFO;
typedef struct _tagSYNCMGRLOGERRORINFO *LPSYNCMGRLOGERRORINFO;
extern const IID IID_ISyncMgrSynchronizeCallback;
typedef struct ISyncMgrSynchronizeCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISyncMgrSynchronizeCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISyncMgrSynchronizeCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISyncMgrSynchronizeCallback * This);
	HRESULT(STDMETHODCALLTYPE * ShowPropertiesCompleted) (ISyncMgrSynchronizeCallback * This, HRESULT hr);
	HRESULT(STDMETHODCALLTYPE * PrepareForSyncCompleted) (ISyncMgrSynchronizeCallback * This, HRESULT hr);
	HRESULT(STDMETHODCALLTYPE * SynchronizeCompleted) (ISyncMgrSynchronizeCallback * This, HRESULT hr);
	HRESULT(STDMETHODCALLTYPE * ShowErrorCompleted) (ISyncMgrSynchronizeCallback * This, HRESULT hr, ULONG cItems, const GUID * pItemIDs);
	HRESULT(STDMETHODCALLTYPE * EnableModeless) (ISyncMgrSynchronizeCallback * This, BOOL fEnable);
	HRESULT(STDMETHODCALLTYPE * Progress) (ISyncMgrSynchronizeCallback * This, REFGUID ItemID, const SYNCMGRPROGRESSITEM * pSyncProgressItem);
	HRESULT(STDMETHODCALLTYPE * LogError) (ISyncMgrSynchronizeCallback * This, DWORD dwErrorLevel, LPCWSTR pszErrorText, const SYNCMGRLOGERRORINFO * pSyncLogError);
	HRESULT(STDMETHODCALLTYPE * DeleteLogError) (ISyncMgrSynchronizeCallback * This, REFGUID ErrorID, DWORD dwReserved);
	HRESULT(STDMETHODCALLTYPE * EstablishConnection) (ISyncMgrSynchronizeCallback * This, LPCWSTR pwszConnection, DWORD dwReserved);
	END_INTERFACE
}  ISyncMgrSynchronizeCallbackVtbl;
interface ISyncMgrSynchronizeCallback
{
	CONST_VTBL struct ISyncMgrSynchronizeCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISyncMgrSynchronizeCallback_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISyncMgrSynchronizeCallback_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISyncMgrSynchronizeCallback_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISyncMgrSynchronizeCallback_ShowPropertiesCompleted(This,hr) ( (This)->lpVtbl -> ShowPropertiesCompleted(This,hr) )
#define ISyncMgrSynchronizeCallback_PrepareForSyncCompleted(This,hr) ( (This)->lpVtbl -> PrepareForSyncCompleted(This,hr) )
#define ISyncMgrSynchronizeCallback_SynchronizeCompleted(This,hr) ( (This)->lpVtbl -> SynchronizeCompleted(This,hr) )
#define ISyncMgrSynchronizeCallback_ShowErrorCompleted(This,hr,cItems,pItemIDs) ( (This)->lpVtbl -> ShowErrorCompleted(This,hr,cItems,pItemIDs) )
#define ISyncMgrSynchronizeCallback_EnableModeless(This,fEnable) ( (This)->lpVtbl -> EnableModeless(This,fEnable) )
#define ISyncMgrSynchronizeCallback_Progress(This,ItemID,pSyncProgressItem) ( (This)->lpVtbl -> Progress(This,ItemID,pSyncProgressItem) )
#define ISyncMgrSynchronizeCallback_LogError(This,dwErrorLevel,pszErrorText,pSyncLogError) ( (This)->lpVtbl -> LogError(This,dwErrorLevel,pszErrorText,pSyncLogError) )
#define ISyncMgrSynchronizeCallback_DeleteLogError(This,ErrorID,dwReserved) ( (This)->lpVtbl -> DeleteLogError(This,ErrorID,dwReserved) )
#define ISyncMgrSynchronizeCallback_EstablishConnection(This,pwszConnection,dwReserved) ( (This)->lpVtbl -> EstablishConnection(This,pwszConnection,dwReserved) )
#endif
#endif
#ifndef __ISyncMgrEnumItems_INTERFACE_DEFINED__
#define __ISyncMgrEnumItems_INTERFACE_DEFINED__
typedef ISyncMgrEnumItems *LPSYNCMGRENUMITEMS;
typedef enum _tagSYNCMGRITEMFLAGS
{
	SYNCMGRITEM_HASPROPERTIES = 0x1,
	SYNCMGRITEM_TEMPORARY = 0x2,
	SYNCMGRITEM_ROAMINGUSER = 0x4,
	SYNCMGRITEM_LASTUPDATETIME = 0x8,
	SYNCMGRITEM_MAYDELETEITEM = 0x10,
	SYNCMGRITEM_HIDDEN = 0x20
} SYNCMGRITEMFLAGS;
#define SYNCMGRITEM_ITEMFLAGMASK  0x007F
#define	MAX_SYNCMGRITEMNAME	( 128 )
typedef struct _tagSYNCMGRITEM
{
	DWORD cbSize;
	DWORD dwFlags;
	GUID ItemID;
	DWORD dwItemState;
	HICON hIcon;
	WCHAR wszItemName[128];
	FILETIME ftLastUpdate;
} SYNCMGRITEM;
typedef struct _tagSYNCMGRITEM *LPSYNCMGRITEM;
extern const IID IID_ISyncMgrEnumItems;
typedef struct ISyncMgrEnumItemsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISyncMgrEnumItems * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISyncMgrEnumItems * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISyncMgrEnumItems * This);
	HRESULT(STDMETHODCALLTYPE * Next) (ISyncMgrEnumItems * This, ULONG celt, SYNCMGRITEM * rgelt, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (ISyncMgrEnumItems * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (ISyncMgrEnumItems * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (ISyncMgrEnumItems * This, ISyncMgrEnumItems ** ppenum);
	END_INTERFACE
}  ISyncMgrEnumItemsVtbl;
interface ISyncMgrEnumItems
{
	CONST_VTBL struct ISyncMgrEnumItemsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISyncMgrEnumItems_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISyncMgrEnumItems_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISyncMgrEnumItems_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISyncMgrEnumItems_Next(This,celt,rgelt,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
#define ISyncMgrEnumItems_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define ISyncMgrEnumItems_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define ISyncMgrEnumItems_Clone(This,ppenum) ( (This)->lpVtbl -> Clone(This,ppenum) )
#endif
#endif
#ifndef __ISyncMgrSynchronize_INTERFACE_DEFINED__
#define __ISyncMgrSynchronize_INTERFACE_DEFINED__
typedef ISyncMgrSynchronize *LPSYNCMGROnSynchronize;
typedef enum _tagSYNCMGRFLAG
{
	SYNCMGRFLAG_CONNECT = 0x1,
	SYNCMGRFLAG_PENDINGDISCONNECT = 0x2,
	SYNCMGRFLAG_MANUAL = 0x3,
	SYNCMGRFLAG_IDLE = 0x4,
	SYNCMGRFLAG_INVOKE = 0x5,
	SYNCMGRFLAG_SCHEDULED = 0x6,
	SYNCMGRFLAG_EVENTMASK = 0xff,
	SYNCMGRFLAG_SETTINGS = 0x100,
	SYNCMGRFLAG_MAYBOTHERUSER = 0x200
} SYNCMGRFLAG;
typedef enum _tagSYNCMGRHANDLERFLAGS
{
	SYNCMGRHANDLER_HASPROPERTIES = 0x1,
	SYNCMGRHANDLER_MAYESTABLISHCONNECTION = 0x2,
	SYNCMGRHANDLER_ALWAYSLISTHANDLER = 0x4,
	SYNCMGRHANDLER_HIDDEN = 0x8
} SYNCMGRHANDLERFLAGS;
#define SYNCMGRHANDLERFLAG_MASK 0x000f
#define	MAX_SYNCMGRHANDLERNAME	( 32 )
typedef struct _tagSYNCMGRHANDLERINFO
{
	DWORD cbSize;
	HICON hIcon;
	DWORD SyncMgrHandlerFlags;
	WCHAR wszHandlerName[32];
} SYNCMGRHANDLERINFO;
typedef struct _tagSYNCMGRHANDLERINFO *LPSYNCMGRHANDLERINFO;
typedef enum _tagSYNCMGRITEMSTATE
{
	SYNCMGRITEMSTATE_UNCHECKED = 0,
	SYNCMGRITEMSTATE_CHECKED = 0x1
} SYNCMGRITEMSTATE;
extern const IID IID_ISyncMgrSynchronize;
typedef struct ISyncMgrSynchronizeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISyncMgrSynchronize * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISyncMgrSynchronize * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISyncMgrSynchronize * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (ISyncMgrSynchronize * This, DWORD dwReserved, DWORD dwSyncMgrFlags, DWORD cbCookie, const BYTE * lpCookie);
	HRESULT(STDMETHODCALLTYPE * GetHandlerInfo) (ISyncMgrSynchronize * This, SYNCMGRHANDLERINFO ** ppSyncMgrHandlerInfo);
	HRESULT(STDMETHODCALLTYPE * EnumSyncMgrItems) (ISyncMgrSynchronize * This, ISyncMgrEnumItems ** ppSyncMgrEnumItems);
	HRESULT(STDMETHODCALLTYPE * GetItemObject) (ISyncMgrSynchronize * This, REFGUID ItemID, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * ShowProperties) (ISyncMgrSynchronize * This, HWND hWndParent, REFGUID ItemID);
	HRESULT(STDMETHODCALLTYPE * SetProgressCallback) (ISyncMgrSynchronize * This, ISyncMgrSynchronizeCallback * lpCallBack);
	HRESULT(STDMETHODCALLTYPE * PrepareForSync) (ISyncMgrSynchronize * This, ULONG cbNumItems, GUID * pItemIDs, HWND hWndParent, DWORD dwReserved);
	HRESULT(STDMETHODCALLTYPE * Synchronize) (ISyncMgrSynchronize * This, HWND hWndParent);
	HRESULT(STDMETHODCALLTYPE * SetItemStatus) (ISyncMgrSynchronize * This, REFGUID pItemID, DWORD dwSyncMgrStatus);
	HRESULT(STDMETHODCALLTYPE * ShowError) (ISyncMgrSynchronize * This, HWND hWndParent, REFGUID ErrorID);
	END_INTERFACE
}  ISyncMgrSynchronizeVtbl;
interface ISyncMgrSynchronize
{
	CONST_VTBL struct ISyncMgrSynchronizeVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISyncMgrSynchronize_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISyncMgrSynchronize_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISyncMgrSynchronize_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISyncMgrSynchronize_Initialize(This,dwReserved,dwSyncMgrFlags,cbCookie,lpCookie) ( (This)->lpVtbl -> Initialize(This,dwReserved,dwSyncMgrFlags,cbCookie,lpCookie) )
#define ISyncMgrSynchronize_GetHandlerInfo(This,ppSyncMgrHandlerInfo) ( (This)->lpVtbl -> GetHandlerInfo(This,ppSyncMgrHandlerInfo) )
#define ISyncMgrSynchronize_EnumSyncMgrItems(This,ppSyncMgrEnumItems) ( (This)->lpVtbl -> EnumSyncMgrItems(This,ppSyncMgrEnumItems) )
#define ISyncMgrSynchronize_GetItemObject(This,ItemID,riid,ppv) ( (This)->lpVtbl -> GetItemObject(This,ItemID,riid,ppv) )
#define ISyncMgrSynchronize_ShowProperties(This,hWndParent,ItemID) ( (This)->lpVtbl -> ShowProperties(This,hWndParent,ItemID) )
#define ISyncMgrSynchronize_SetProgressCallback(This,lpCallBack) ( (This)->lpVtbl -> SetProgressCallback(This,lpCallBack) )
#define ISyncMgrSynchronize_PrepareForSync(This,cbNumItems,pItemIDs,hWndParent,dwReserved) ( (This)->lpVtbl -> PrepareForSync(This,cbNumItems,pItemIDs,hWndParent,dwReserved) )
#define ISyncMgrSynchronize_Synchronize(This,hWndParent) ( (This)->lpVtbl -> Synchronize(This,hWndParent) )
#define ISyncMgrSynchronize_SetItemStatus(This,pItemID,dwSyncMgrStatus) ( (This)->lpVtbl -> SetItemStatus(This,pItemID,dwSyncMgrStatus) )
#define ISyncMgrSynchronize_ShowError(This,hWndParent,ErrorID) ( (This)->lpVtbl -> ShowError(This,hWndParent,ErrorID) )
#endif
#endif
#ifndef __ISyncMgrSynchronizeInvoke_INTERFACE_DEFINED__
#define __ISyncMgrSynchronizeInvoke_INTERFACE_DEFINED__
typedef ISyncMgrSynchronizeInvoke *LPSYNCMGRSYNCHRONIZEINVOKE;
typedef enum _tagSYNCMGRINVOKEFLAGS
{
	SYNCMGRINVOKE_STARTSYNC = 0x2,
	SYNCMGRINVOKE_MINIMIZED = 0x4
} SYNCMGRINVOKEFLAGS;
extern const IID IID_ISyncMgrSynchronizeInvoke;
typedef struct ISyncMgrSynchronizeInvokeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISyncMgrSynchronizeInvoke * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISyncMgrSynchronizeInvoke * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISyncMgrSynchronizeInvoke * This);
	HRESULT(STDMETHODCALLTYPE * UpdateItems) (ISyncMgrSynchronizeInvoke * This, DWORD dwInvokeFlags, REFCLSID clsid, DWORD cbCookie, const BYTE * pCookie);
	HRESULT(STDMETHODCALLTYPE * UpdateAll) (ISyncMgrSynchronizeInvoke * This);
	END_INTERFACE
}  ISyncMgrSynchronizeInvokeVtbl;
interface ISyncMgrSynchronizeInvoke
{
	CONST_VTBL struct ISyncMgrSynchronizeInvokeVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISyncMgrSynchronizeInvoke_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISyncMgrSynchronizeInvoke_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISyncMgrSynchronizeInvoke_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISyncMgrSynchronizeInvoke_UpdateItems(This,dwInvokeFlags,clsid,cbCookie,pCookie) ( (This)->lpVtbl -> UpdateItems(This,dwInvokeFlags,clsid,cbCookie,pCookie) )
#define ISyncMgrSynchronizeInvoke_UpdateAll(This) ( (This)->lpVtbl -> UpdateAll(This) )
#endif
#endif
#ifndef __ISyncMgrRegister_INTERFACE_DEFINED__
#define __ISyncMgrRegister_INTERFACE_DEFINED__
typedef ISyncMgrRegister *LPSYNCMGRREGISTER;
typedef enum _tagSYNCMGRREGISTERFLAGS
{
	SYNCMGRREGISTERFLAG_CONNECT = 0x1,
	SYNCMGRREGISTERFLAG_PENDINGDISCONNECT = 0x2,
	SYNCMGRREGISTERFLAG_IDLE = 0x4
} SYNCMGRREGISTERFLAGS;
#define SYNCMGRREGISTERFLAGS_MASK  0x07
extern const IID IID_ISyncMgrRegister;
typedef struct ISyncMgrRegisterVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISyncMgrRegister * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISyncMgrRegister * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISyncMgrRegister * This);
	HRESULT(STDMETHODCALLTYPE * RegisterSyncMgrHandler) (ISyncMgrRegister * This, REFCLSID clsidHandler, LPCWSTR pwszDescription, DWORD dwSyncMgrRegisterFlags);
	HRESULT(STDMETHODCALLTYPE * UnregisterSyncMgrHandler) (ISyncMgrRegister * This, REFCLSID clsidHandler, DWORD dwReserved);
	HRESULT(STDMETHODCALLTYPE * GetHandlerRegistrationInfo) (ISyncMgrRegister * This, REFCLSID clsidHandler, LPDWORD pdwSyncMgrRegisterFlags);
	END_INTERFACE
}  ISyncMgrRegisterVtbl;
interface ISyncMgrRegister
{
	CONST_VTBL struct ISyncMgrRegisterVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISyncMgrRegister_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISyncMgrRegister_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISyncMgrRegister_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISyncMgrRegister_RegisterSyncMgrHandler(This,clsidHandler,pwszDescription,dwSyncMgrRegisterFlags) ( (This)->lpVtbl -> RegisterSyncMgrHandler(This,clsidHandler,pwszDescription,dwSyncMgrRegisterFlags) )
#define ISyncMgrRegister_UnregisterSyncMgrHandler(This,clsidHandler,dwReserved) ( (This)->lpVtbl -> UnregisterSyncMgrHandler(This,clsidHandler,dwReserved) )
#define ISyncMgrRegister_GetHandlerRegistrationInfo(This,clsidHandler,pdwSyncMgrRegisterFlags) ( (This)->lpVtbl -> GetHandlerRegistrationInfo(This,clsidHandler,pdwSyncMgrRegisterFlags) )
#endif
#endif
#ifndef __SyncObjects_LIBRARY_DEFINED__
#define __SyncObjects_LIBRARY_DEFINED__
extern const IID LIBID_SyncObjects;
extern const CLSID CLSID_SyncMgr;
#endif
unsigned long __RPC_USER HICON_UserSize(unsigned long *, unsigned long, HICON *);
unsigned char *__RPC_USER HICON_UserMarshal(unsigned long *, unsigned char *, HICON *);
unsigned char *__RPC_USER HICON_UserUnmarshal(unsigned long *, unsigned char *, HICON *);
void __RPC_USER HICON_UserFree(unsigned long *, HICON *);
unsigned long __RPC_USER HWND_UserSize(unsigned long *, unsigned long, HWND *);
unsigned char *__RPC_USER HWND_UserMarshal(unsigned long *, unsigned char *, HWND *);
unsigned char *__RPC_USER HWND_UserUnmarshal(unsigned long *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree(unsigned long *, HWND *);
unsigned long __RPC_USER HICON_UserSize64(unsigned long *, unsigned long, HICON *);
unsigned char *__RPC_USER HICON_UserMarshal64(unsigned long *, unsigned char *, HICON *);
unsigned char *__RPC_USER HICON_UserUnmarshal64(unsigned long *, unsigned char *, HICON *);
void __RPC_USER HICON_UserFree64(unsigned long *, HICON *);
unsigned long __RPC_USER HWND_UserSize64(unsigned long *, unsigned long, HWND *);
unsigned char *__RPC_USER HWND_UserMarshal64(unsigned long *, unsigned char *, HWND *);
unsigned char *__RPC_USER HWND_UserUnmarshal64(unsigned long *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree64(unsigned long *, HWND *);
#endif
