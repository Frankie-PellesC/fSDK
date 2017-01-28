/*+@@file@@----------------------------------------------------------------*//*!
 \file		oledbdep.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep 11 23:50:49 2016
 \date		Modified on Sun Sep 11 23:50:49 2016
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
#ifndef __oledbdep_h__
#define __oledbdep_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IRowsetNextRowset_FWD_DEFINED__
#define __IRowsetNextRowset_FWD_DEFINED__
typedef interface IRowsetNextRowset IRowsetNextRowset;
#endif
#ifndef __IRowsetNewRowAfter_FWD_DEFINED__
#define __IRowsetNewRowAfter_FWD_DEFINED__
typedef interface IRowsetNewRowAfter IRowsetNewRowAfter;
#endif
#ifndef __IRowsetWithParameters_FWD_DEFINED__
#define __IRowsetWithParameters_FWD_DEFINED__
typedef interface IRowsetWithParameters IRowsetWithParameters;
#endif
#ifndef __IRowsetAsynch_FWD_DEFINED__
#define __IRowsetAsynch_FWD_DEFINED__
typedef interface IRowsetAsynch IRowsetAsynch;
#endif
#ifndef __IRowsetKeys_FWD_DEFINED__
#define __IRowsetKeys_FWD_DEFINED__
typedef interface IRowsetKeys IRowsetKeys;
#endif
#ifndef __IRowsetWatchAll_FWD_DEFINED__
#define __IRowsetWatchAll_FWD_DEFINED__
typedef interface IRowsetWatchAll IRowsetWatchAll;
#endif
#ifndef __IRowsetWatchNotify_FWD_DEFINED__
#define __IRowsetWatchNotify_FWD_DEFINED__
typedef interface IRowsetWatchNotify IRowsetWatchNotify;
#endif
#ifndef __IRowsetWatchRegion_FWD_DEFINED__
#define __IRowsetWatchRegion_FWD_DEFINED__
typedef interface IRowsetWatchRegion IRowsetWatchRegion;
#endif
#ifndef __IRowsetCopyRows_FWD_DEFINED__
#define __IRowsetCopyRows_FWD_DEFINED__
typedef interface IRowsetCopyRows IRowsetCopyRows;
#endif
#ifndef __IReadData_FWD_DEFINED__
#define __IReadData_FWD_DEFINED__
typedef interface IReadData IReadData;
#endif
#ifndef __ICommandCost_FWD_DEFINED__
#define __ICommandCost_FWD_DEFINED__
typedef interface ICommandCost ICommandCost;
#endif
#ifndef __ICommandValidate_FWD_DEFINED__
#define __ICommandValidate_FWD_DEFINED__
typedef interface ICommandValidate ICommandValidate;
#endif
#ifndef __ITableRename_FWD_DEFINED__
#define __ITableRename_FWD_DEFINED__
typedef interface ITableRename ITableRename;
#endif
#ifndef __IDBSchemaCommand_FWD_DEFINED__
#define __IDBSchemaCommand_FWD_DEFINED__
typedef interface IDBSchemaCommand IDBSchemaCommand;
#endif
#ifndef __IProvideMoniker_FWD_DEFINED__
#define __IProvideMoniker_FWD_DEFINED__
typedef interface IProvideMoniker IProvideMoniker;
#endif
#include <oledb.h>
#ifdef _WIN64
#include <pshpack8.h>
#else
#include <pshpack2.h>
#endif
extern RPC_IF_HANDLE __MIDL_itf_oledbdep_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_oledbdep_0000_0000_v0_0_s_ifspec;
#ifndef __DBStructureDefinitionsDep_INTERFACE_DEFINED__
#define __DBStructureDefinitionsDep_INTERFACE_DEFINED__
#ifndef UNALIGNED
#if defined(_MIPS_) || defined(_ALPHA_) || defined(_PPC_)
#define UNALIGNED __unaligned
#else
#define UNALIGNED
#endif
#endif
#undef OLEDBDECLSPEC
#if _MSC_VER >= 1100
#define OLEDBDECLSPEC __declspec(selectany)
#else
#define OLEDBDECLSPEC
#endif
#ifdef DBINITCONSTANTS
extern const OLEDBDECLSPEC GUID DB_PROPERTY_CHECK_OPTION = { 0xc8b5220b, 0x5cf3, 0x11ce, {0xad, 0xe5, 0x00, 0xaa, 0x00, 0x44, 0x77, 0x3d}};
extern const OLEDBDECLSPEC GUID DB_PROPERTY_CONSTRAINT_CHECK_DEFERRED = { 0xc8b521f0, 0x5cf3, 0x11ce, {0xad, 0xe5, 0x00, 0xaa, 0x00, 0x44, 0x77, 0x3d}};
extern const OLEDBDECLSPEC GUID DB_PROPERTY_DROP_CASCADE = { 0xc8b521f3, 0x5cf3, 0x11ce, {0xad, 0xe5, 0x00, 0xaa, 0x00, 0x44, 0x77, 0x3d}};
extern const OLEDBDECLSPEC GUID DB_PROPERTY_UNIQUE = { 0xc8b521f5, 0x5cf3, 0x11ce, {0xad, 0xe5, 0x00, 0xaa, 0x00, 0x44, 0x77, 0x3d}};
extern const OLEDBDECLSPEC GUID DB_PROPERTY_ON_COMMIT_PRESERVE_ROWS = { 0xc8b52230, 0x5cf3, 0x11ce, {0xad, 0xe5, 0x00, 0xaa, 0x00, 0x44, 0x77, 0x3d}};
extern const OLEDBDECLSPEC GUID DB_PROPERTY_PRIMARY = { 0xc8b521fc, 0x5cf3, 0x11ce, {0xad, 0xe5, 0x00, 0xaa, 0x00, 0x44, 0x77, 0x3d}};
extern const OLEDBDECLSPEC GUID DB_PROPERTY_CLUSTERED = { 0xc8b521ff, 0x5cf3, 0x11ce, {0xad, 0xe5, 0x00, 0xaa, 0x00, 0x44, 0x77, 0x3d}};
extern const OLEDBDECLSPEC GUID DB_PROPERTY_NONCLUSTERED = { 0xc8b52200, 0x5cf3, 0x11ce, {0xad, 0xe5, 0x00, 0xaa, 0x00, 0x44, 0x77, 0x3d}};
extern const OLEDBDECLSPEC GUID DB_PROPERTY_BTREE = { 0xc8b52201, 0x5cf3, 0x11ce, {0xad, 0xe5, 0x00, 0xaa, 0x00, 0x44, 0x77, 0x3d}};
extern const OLEDBDECLSPEC GUID DB_PROPERTY_HASH = { 0xc8b52202, 0x5cf3, 0x11ce, {0xad, 0xe5, 0x00, 0xaa, 0x00, 0x44, 0x77, 0x3d}};
extern const OLEDBDECLSPEC GUID DB_PROPERTY_FILLFACTOR = { 0xc8b52203, 0x5cf3, 0x11ce, {0xad, 0xe5, 0x00, 0xaa, 0x00, 0x44, 0x77, 0x3d}};
extern const OLEDBDECLSPEC GUID DB_PROPERTY_INITIALSIZE = { 0xc8b52204, 0x5cf3, 0x11ce, {0xad, 0xe5, 0x00, 0xaa, 0x00, 0x44, 0x77, 0x3d}};
extern const OLEDBDECLSPEC GUID DB_PROPERTY_DISALLOWNULL = { 0xc8b52205, 0x5cf3, 0x11ce, {0xad, 0xe5, 0x00, 0xaa, 0x00, 0x44, 0x77, 0x3d}};
extern const OLEDBDECLSPEC GUID DB_PROPERTY_IGNORENULL = { 0xc8b52206, 0x5cf3, 0x11ce, {0xad, 0xe5, 0x00, 0xaa, 0x00, 0x44, 0x77, 0x3d}};
extern const OLEDBDECLSPEC GUID DB_PROPERTY_IGNOREANYNULL = { 0xc8b52207, 0x5cf3, 0x11ce, {0xad, 0xe5, 0x00, 0xaa, 0x00, 0x44, 0x77, 0x3d}};
extern const OLEDBDECLSPEC GUID DB_PROPERTY_SORTBOOKMARKS = { 0xc8b52208, 0x5cf3, 0x11ce, {0xad, 0xe5, 0x00, 0xaa, 0x00, 0x44, 0x77, 0x3d}};
extern const OLEDBDECLSPEC GUID DB_PROPERTY_AUTOMATICUPDATE = { 0xc8b52209, 0x5cf3, 0x11ce, {0xad, 0xe5, 0x00, 0xaa, 0x00, 0x44, 0x77, 0x3d}};
extern const OLEDBDECLSPEC GUID DB_PROPERTY_EXPLICITUPDATE = { 0xc8b5220a, 0x5cf3, 0x11ce, {0xad, 0xe5, 0x00, 0xaa, 0x00, 0x44, 0x77, 0x3d}};
#else
extern const GUID DB_PROPERTY_CHECK_OPTION;
extern const GUID DB_PROPERTY_CONSTRAINT_CHECK_DEFERRED;
extern const GUID DB_PROPERTY_DROP_CASCADE;
extern const GUID DB_PROPERTY_ON_COMMIT_PRESERVE_ROWS;
extern const GUID DB_PROPERTY_UNIQUE;
extern const GUID DB_PROPERTY_PRIMARY;
extern const GUID DB_PROPERTY_CLUSTERED;
extern const GUID DB_PROPERTY_NONCLUSTERED;
extern const GUID DB_PROPERTY_BTREE;
extern const GUID DB_PROPERTY_HASH;
extern const GUID DB_PROPERTY_FILLFACTOR;
extern const GUID DB_PROPERTY_INITIALSIZE;
extern const GUID DB_PROPERTY_DISALLOWNULL;
extern const GUID DB_PROPERTY_IGNORENULL;
extern const GUID DB_PROPERTY_IGNOREANYNULL;
extern const GUID DB_PROPERTY_SORTBOOKMARKS;
extern const GUID DB_PROPERTY_AUTOMATICUPDATE;
extern const GUID DB_PROPERTY_EXPLICITUPDATE;
#endif
enum DBPROPENUM25_DEPRECATED
{
	DBPROP_ICommandCost = 0x8dL,
	DBPROP_ICommandTree = 0x8eL,
	DBPROP_ICommandValidate = 0x8fL,
	DBPROP_IDBSchemaCommand = 0x90L,
	DBPROP_IProvideMoniker = 0x7dL,
	DBPROP_IQuery = 0x92L,
	DBPROP_IReadData = 0x93L,
	DBPROP_IRowsetAsynch = 0x94L,
	DBPROP_IRowsetCopyRows = 0x95L,
	DBPROP_IRowsetKeys = 0x97L,
	DBPROP_IRowsetNewRowAfter = 0x98L,
	DBPROP_IRowsetNextRowset = 0x99L,
	DBPROP_IRowsetWatchAll = 0x9bL,
	DBPROP_IRowsetWatchNotify = 0x9cL,
	DBPROP_IRowsetWatchRegion = 0x9dL,
	DBPROP_IRowsetWithParameters = 0x9eL
};
enum DBREASONENUM25
{
	DBREASON_ROWSET_ROWSADDED = (DBREASON_ROW_ASYNCHINSERT + 1),
	DBREASON_ROWSET_POPULATIONCOMPLETE = (DBREASON_ROWSET_ROWSADDED + 1),
	DBREASON_ROWSET_POPULATIONSTOPPED = (DBREASON_ROWSET_POPULATIONCOMPLETE + 1)
};
extern RPC_IF_HANDLE DBStructureDefinitionsDep_v0_0_c_ifspec;
extern RPC_IF_HANDLE DBStructureDefinitionsDep_v0_0_s_ifspec;
#endif
#ifndef __IRowsetNextRowset_INTERFACE_DEFINED__
#define __IRowsetNextRowset_INTERFACE_DEFINED__
extern const IID IID_IRowsetNextRowset;
typedef struct IRowsetNextRowsetVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRowsetNextRowset * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRowsetNextRowset * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRowsetNextRowset * This);
	HRESULT(STDMETHODCALLTYPE * GetNextRowset) (IRowsetNextRowset * This, IUnknown * pUnkOuter, REFIID riid, IUnknown ** ppNextRowset);
	END_INTERFACE
}  IRowsetNextRowsetVtbl;
interface IRowsetNextRowset
{
	CONST_VTBL struct IRowsetNextRowsetVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRowsetNextRowset_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRowsetNextRowset_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRowsetNextRowset_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRowsetNextRowset_GetNextRowset(This,pUnkOuter,riid,ppNextRowset) ( (This)->lpVtbl -> GetNextRowset(This,pUnkOuter,riid,ppNextRowset) )
#endif
#endif
#ifndef __IRowsetNewRowAfter_INTERFACE_DEFINED__
#define __IRowsetNewRowAfter_INTERFACE_DEFINED__
extern const IID IID_IRowsetNewRowAfter;
typedef struct IRowsetNewRowAfterVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRowsetNewRowAfter * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRowsetNewRowAfter * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRowsetNewRowAfter * This);
	HRESULT(STDMETHODCALLTYPE * SetNewDataAfter) (IRowsetNewRowAfter * This, HCHAPTER hChapter, ULONG cbbmPrevious, const BYTE * pbmPrevious, HACCESSOR hAccessor, BYTE * pData, HROW * phRow);
	END_INTERFACE
}  IRowsetNewRowAfterVtbl;
interface IRowsetNewRowAfter
{
	CONST_VTBL struct IRowsetNewRowAfterVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRowsetNewRowAfter_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRowsetNewRowAfter_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRowsetNewRowAfter_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRowsetNewRowAfter_SetNewDataAfter(This,hChapter,cbbmPrevious,pbmPrevious,hAccessor,pData,phRow) ( (This)->lpVtbl -> SetNewDataAfter(This,hChapter,cbbmPrevious,pbmPrevious,hAccessor,pData,phRow) )
#endif
#endif
#ifndef __IRowsetWithParameters_INTERFACE_DEFINED__
#define __IRowsetWithParameters_INTERFACE_DEFINED__
extern const IID IID_IRowsetWithParameters;
typedef struct IRowsetWithParametersVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRowsetWithParameters * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRowsetWithParameters * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRowsetWithParameters * This);
	HRESULT(STDMETHODCALLTYPE * GetParameterInfo) (IRowsetWithParameters * This, DB_UPARAMS * pcParams, DBPARAMINFO ** prgParamInfo, OLECHAR ** ppNamesBuffer);
	HRESULT(STDMETHODCALLTYPE * Requery) (IRowsetWithParameters * This, DBPARAMS * pParams, ULONG * pulErrorParam, HCHAPTER * phReserved);
	END_INTERFACE
}  IRowsetWithParametersVtbl;
interface IRowsetWithParameters
{
	CONST_VTBL struct IRowsetWithParametersVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRowsetWithParameters_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRowsetWithParameters_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRowsetWithParameters_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRowsetWithParameters_GetParameterInfo(This,pcParams,prgParamInfo,ppNamesBuffer) ( (This)->lpVtbl -> GetParameterInfo(This,pcParams,prgParamInfo,ppNamesBuffer) )
#define IRowsetWithParameters_Requery(This,pParams,pulErrorParam,phReserved) ( (This)->lpVtbl -> Requery(This,pParams,pulErrorParam,phReserved) )
#endif
#endif
#ifndef __IRowsetAsynch_INTERFACE_DEFINED__
#define __IRowsetAsynch_INTERFACE_DEFINED__
extern const IID IID_IRowsetAsynch;
typedef struct IRowsetAsynchVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRowsetAsynch * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRowsetAsynch * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRowsetAsynch * This);
	HRESULT(STDMETHODCALLTYPE * RatioFinished) (IRowsetAsynch * This, DBCOUNTITEM * pulDenominator, DBCOUNTITEM * pulNumerator, DBCOUNTITEM * pcRows, BOOL * pfNewRows);
	HRESULT(STDMETHODCALLTYPE * Stop) (IRowsetAsynch * This);
	END_INTERFACE
}  IRowsetAsynchVtbl;
interface IRowsetAsynch
{
	CONST_VTBL struct IRowsetAsynchVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRowsetAsynch_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRowsetAsynch_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRowsetAsynch_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRowsetAsynch_RatioFinished(This,pulDenominator,pulNumerator,pcRows,pfNewRows) ( (This)->lpVtbl -> RatioFinished(This,pulDenominator,pulNumerator,pcRows,pfNewRows) )
#define IRowsetAsynch_Stop(This) ( (This)->lpVtbl -> Stop(This) )
#endif
#endif
#ifndef __IRowsetKeys_INTERFACE_DEFINED__
#define __IRowsetKeys_INTERFACE_DEFINED__
extern const IID IID_IRowsetKeys;
typedef struct IRowsetKeysVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRowsetKeys * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRowsetKeys * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRowsetKeys * This);
	HRESULT(STDMETHODCALLTYPE * ListKeys) (IRowsetKeys * This, DBORDINAL * pcColumns, DBORDINAL ** prgColumns);
	END_INTERFACE
}  IRowsetKeysVtbl;
interface IRowsetKeys
{
	CONST_VTBL struct IRowsetKeysVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRowsetKeys_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRowsetKeys_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRowsetKeys_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRowsetKeys_ListKeys(This,pcColumns,prgColumns) ( (This)->lpVtbl -> ListKeys(This,pcColumns,prgColumns) )
#endif
#endif
#ifndef __IRowsetWatchAll_INTERFACE_DEFINED__
#define __IRowsetWatchAll_INTERFACE_DEFINED__
extern const IID IID_IRowsetWatchAll;
typedef struct IRowsetWatchAllVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRowsetWatchAll * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRowsetWatchAll * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRowsetWatchAll * This);
	HRESULT(STDMETHODCALLTYPE * Acknowledge) (IRowsetWatchAll * This);
	HRESULT(STDMETHODCALLTYPE * Start) (IRowsetWatchAll * This);
	HRESULT(STDMETHODCALLTYPE * StopWatching) (IRowsetWatchAll * This);
	END_INTERFACE
}  IRowsetWatchAllVtbl;
interface IRowsetWatchAll
{
	CONST_VTBL struct IRowsetWatchAllVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRowsetWatchAll_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRowsetWatchAll_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRowsetWatchAll_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRowsetWatchAll_Acknowledge(This) ( (This)->lpVtbl -> Acknowledge(This) )
#define IRowsetWatchAll_Start(This) ( (This)->lpVtbl -> Start(This) )
#define IRowsetWatchAll_StopWatching(This) ( (This)->lpVtbl -> StopWatching(This) )
#endif
#endif
#ifndef __IRowsetWatchNotify_INTERFACE_DEFINED__
#define __IRowsetWatchNotify_INTERFACE_DEFINED__
typedef DWORD DBWATCHNOTIFY;
enum DBWATCHNOTIFYENUM
{
	DBWATCHNOTIFY_ROWSCHANGED = 1,
	DBWATCHNOTIFY_QUERYDONE = 2,
	DBWATCHNOTIFY_QUERYREEXECUTED = 3
};
extern const IID IID_IRowsetWatchNotify;
typedef struct IRowsetWatchNotifyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRowsetWatchNotify * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRowsetWatchNotify * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRowsetWatchNotify * This);
	HRESULT(STDMETHODCALLTYPE * OnChange) (IRowsetWatchNotify * This, IRowset * pRowset, DBWATCHNOTIFY eChangeReason);
	END_INTERFACE
}  IRowsetWatchNotifyVtbl;
interface IRowsetWatchNotify
{
	CONST_VTBL struct IRowsetWatchNotifyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRowsetWatchNotify_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRowsetWatchNotify_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRowsetWatchNotify_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRowsetWatchNotify_OnChange(This,pRowset,eChangeReason) ( (This)->lpVtbl -> OnChange(This,pRowset,eChangeReason) )
#endif
#endif
#ifndef __IRowsetWatchRegion_INTERFACE_DEFINED__
#define __IRowsetWatchRegion_INTERFACE_DEFINED__
typedef DWORD DBWATCHMODE;
enum DBWATCHMODEENUM
{
	DBWATCHMODE_ALL = 0x1,
	DBWATCHMODE_EXTEND = 0x2,
	DBWATCHMODE_MOVE = 0x4,
	DBWATCHMODE_COUNT = 0x8
};
typedef DWORD DBROWCHANGEKIND;
enum DBROWCHANGEKINDENUM
{
	DBROWCHANGEKIND_INSERT = 0,
	DBROWCHANGEKIND_DELETE = (DBROWCHANGEKIND_INSERT + 1),
	DBROWCHANGEKIND_UPDATE = (DBROWCHANGEKIND_DELETE + 1),
	DBROWCHANGEKIND_COUNT = (DBROWCHANGEKIND_UPDATE + 1)
};
typedef struct tagDBROWWATCHRANGE
{
	HWATCHREGION hRegion;
	DBROWCHANGEKIND eChangeKind;
	HROW hRow;
	DBCOUNTITEM iRow;
} DBROWWATCHCHANGE;
extern const IID IID_IRowsetWatchRegion;
typedef struct IRowsetWatchRegionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRowsetWatchRegion * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRowsetWatchRegion * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRowsetWatchRegion * This);
	HRESULT(STDMETHODCALLTYPE * Acknowledge) (IRowsetWatchRegion * This);
	HRESULT(STDMETHODCALLTYPE * Start) (IRowsetWatchRegion * This);
	HRESULT(STDMETHODCALLTYPE * StopWatching) (IRowsetWatchRegion * This);
	HRESULT(STDMETHODCALLTYPE * CreateWatchRegion) (IRowsetWatchRegion * This, DBWATCHMODE dwWatchMode, HWATCHREGION * phRegion);
	HRESULT(STDMETHODCALLTYPE * ChangeWatchMode) (IRowsetWatchRegion * This, HWATCHREGION hRegion, DBWATCHMODE dwWatchMode);
	HRESULT(STDMETHODCALLTYPE * DeleteWatchRegion) (IRowsetWatchRegion * This, HWATCHREGION hRegion);
	HRESULT(STDMETHODCALLTYPE * GetWatchRegionInfo) (IRowsetWatchRegion * This, HWATCHREGION hRegion, DBWATCHMODE * pdwWatchMode, HCHAPTER * phChapter, DBBKMARK * pcbBookmark, BYTE ** ppBookmark, DBROWCOUNT * pcRows);
	HRESULT(STDMETHODCALLTYPE * Refresh) (IRowsetWatchRegion * This, DBCOUNTITEM * pcChangesObtained, DBROWWATCHCHANGE ** prgChanges);
	HRESULT(STDMETHODCALLTYPE * ShrinkWatchRegion) (IRowsetWatchRegion * This, HWATCHREGION hRegion, HCHAPTER hChapter, DBBKMARK cbBookmark, BYTE * pBookmark, DBROWCOUNT cRows);
	END_INTERFACE
}  IRowsetWatchRegionVtbl;
interface IRowsetWatchRegion
{
	CONST_VTBL struct IRowsetWatchRegionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRowsetWatchRegion_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRowsetWatchRegion_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRowsetWatchRegion_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRowsetWatchRegion_Acknowledge(This) ( (This)->lpVtbl -> Acknowledge(This) )
#define IRowsetWatchRegion_Start(This) ( (This)->lpVtbl -> Start(This) )
#define IRowsetWatchRegion_StopWatching(This) ( (This)->lpVtbl -> StopWatching(This) )
#define IRowsetWatchRegion_CreateWatchRegion(This,dwWatchMode,phRegion) ( (This)->lpVtbl -> CreateWatchRegion(This,dwWatchMode,phRegion) )
#define IRowsetWatchRegion_ChangeWatchMode(This,hRegion,dwWatchMode) ( (This)->lpVtbl -> ChangeWatchMode(This,hRegion,dwWatchMode) )
#define IRowsetWatchRegion_DeleteWatchRegion(This,hRegion) ( (This)->lpVtbl -> DeleteWatchRegion(This,hRegion) )
#define IRowsetWatchRegion_GetWatchRegionInfo(This,hRegion,pdwWatchMode,phChapter,pcbBookmark,ppBookmark,pcRows) ( (This)->lpVtbl -> GetWatchRegionInfo(This,hRegion,pdwWatchMode,phChapter,pcbBookmark,ppBookmark,pcRows) )
#define IRowsetWatchRegion_Refresh(This,pcChangesObtained,prgChanges) ( (This)->lpVtbl -> Refresh(This,pcChangesObtained,prgChanges) )
#define IRowsetWatchRegion_ShrinkWatchRegion(This,hRegion,hChapter,cbBookmark,pBookmark,cRows) ( (This)->lpVtbl -> ShrinkWatchRegion(This,hRegion,hChapter,cbBookmark,pBookmark,cRows) )
#endif
#endif
#ifndef __IRowsetCopyRows_INTERFACE_DEFINED__
#define __IRowsetCopyRows_INTERFACE_DEFINED__
typedef WORD HSOURCE;
extern const IID IID_IRowsetCopyRows;
typedef struct IRowsetCopyRowsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRowsetCopyRows * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRowsetCopyRows * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRowsetCopyRows * This);
	HRESULT(STDMETHODCALLTYPE * CloseSource) (IRowsetCopyRows * This, HSOURCE hSourceID);
	HRESULT(STDMETHODCALLTYPE * CopyByHROWS) (IRowsetCopyRows * This, HSOURCE hSourceID, HCHAPTER hReserved, DBROWCOUNT cRows, const HROW rghRows[], ULONG bFlags);
	HRESULT(STDMETHODCALLTYPE * CopyRows) (IRowsetCopyRows * This, HSOURCE hSourceID, HCHAPTER hReserved, DBROWCOUNT cRows, ULONG bFlags, DBCOUNTITEM * pcRowsCopied);
	HRESULT(STDMETHODCALLTYPE * DefineSource) (IRowsetCopyRows * This, const IRowset * pRowsetSource, const DBORDINAL cColIds, const DB_LORDINAL rgSourceColumns[], const DB_LORDINAL rgTargetColumns[], HSOURCE * phSourceID);
	END_INTERFACE
}  IRowsetCopyRowsVtbl;
interface IRowsetCopyRows
{
	CONST_VTBL struct IRowsetCopyRowsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRowsetCopyRows_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRowsetCopyRows_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRowsetCopyRows_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRowsetCopyRows_CloseSource(This,hSourceID) ( (This)->lpVtbl -> CloseSource(This,hSourceID) )
#define IRowsetCopyRows_CopyByHROWS(This,hSourceID,hReserved,cRows,rghRows,bFlags) ( (This)->lpVtbl -> CopyByHROWS(This,hSourceID,hReserved,cRows,rghRows,bFlags) )
#define IRowsetCopyRows_CopyRows(This,hSourceID,hReserved,cRows,bFlags,pcRowsCopied) ( (This)->lpVtbl -> CopyRows(This,hSourceID,hReserved,cRows,bFlags,pcRowsCopied) )
#define IRowsetCopyRows_DefineSource(This,pRowsetSource,cColIds,rgSourceColumns,rgTargetColumns,phSourceID) ( (This)->lpVtbl -> DefineSource(This,pRowsetSource,cColIds,rgSourceColumns,rgTargetColumns,phSourceID) )
#endif
#endif
#ifndef __IReadData_INTERFACE_DEFINED__
#define __IReadData_INTERFACE_DEFINED__
extern const IID IID_IReadData;
typedef struct IReadDataVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IReadData * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IReadData * This);
	ULONG(STDMETHODCALLTYPE * Release) (IReadData * This);
	HRESULT(STDMETHODCALLTYPE * ReadData) (IReadData * This, HCHAPTER hChapter, DBBKMARK cbBookmark, const BYTE * pBookmark, DBROWOFFSET lRowsOffset, HACCESSOR hAccessor, DBROWCOUNT cRows, DBCOUNTITEM * pcRowsObtained, BYTE ** ppFixedData, DBLENGTH * pcbVariableTotal, BYTE ** ppVariableData);
	HRESULT(STDMETHODCALLTYPE * ReleaseChapter) (IReadData * This, HCHAPTER hChapter);
	END_INTERFACE
}  IReadDataVtbl;
interface IReadData
{
	CONST_VTBL struct IReadDataVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IReadData_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IReadData_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IReadData_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IReadData_ReadData(This,hChapter,cbBookmark,pBookmark,lRowsOffset,hAccessor,cRows,pcRowsObtained,ppFixedData,pcbVariableTotal,ppVariableData) ( (This)->lpVtbl -> ReadData(This,hChapter,cbBookmark,pBookmark,lRowsOffset,hAccessor,cRows,pcRowsObtained,ppFixedData,pcbVariableTotal,ppVariableData) )
#define IReadData_ReleaseChapter(This,hChapter) ( (This)->lpVtbl -> ReleaseChapter(This,hChapter) )
#endif
#endif
#ifndef __ICommandCost_INTERFACE_DEFINED__
#define __ICommandCost_INTERFACE_DEFINED__
typedef DWORD DBRESOURCEKIND;
enum DBRESOURCEKINDENUM
{
	DBRESOURCE_INVALID = 0,
	DBRESOURCE_TOTAL = 1,
	DBRESOURCE_CPU = 2,
	DBRESOURCE_MEMORY = 3,
	DBRESOURCE_DISK = 4,
	DBRESOURCE_NETWORK = 5,
	DBRESOURCE_RESPONSE = 6,
	DBRESOURCE_ROWS = 7,
	DBRESOURCE_OTHER = 8
};
typedef DWORD DBCOSTUNIT;
enum DBCOSTUNITENUM
{
	DBUNIT_INVALID = 0,
	DBUNIT_WEIGHT = 0x1,
	DBUNIT_PERCENT = 0x2,
	DBUNIT_MAXIMUM = 0x4,
	DBUNIT_MINIMUM = 0x8,
	DBUNIT_MICRO_SECOND = 0x10,
	DBUNIT_MILLI_SECOND = 0x20,
	DBUNIT_SECOND = 0x40,
	DBUNIT_MINUTE = 0x80,
	DBUNIT_HOUR = 0x100,
	DBUNIT_BYTE = 0x200,
	DBUNIT_KILO_BYTE = 0x400,
	DBUNIT_MEGA_BYTE = 0x800,
	DBUNIT_GIGA_BYTE = 0x1000,
	DBUNIT_NUM_MSGS = 0x2000,
	DBUNIT_NUM_LOCKS = 0x4000,
	DBUNIT_NUM_ROWS = 0x8000,
	DBUNIT_OTHER = 0x10000
};
typedef struct tagDBCOST
{
	DBRESOURCEKIND eKind;
	DBCOSTUNIT dwUnits;
	LONG lValue;
} DBCOST;
typedef DWORD DBEXECLIMITS;
enum DBEXECLIMITSENUM
{
	DBEXECLIMITS_ABORT = 1,
	DBEXECLIMITS_STOP = 2,
	DBEXECLIMITS_SUSPEND = 3
};
extern const IID IID_ICommandCost;
typedef struct ICommandCostVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICommandCost * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICommandCost * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICommandCost * This);
	HRESULT(STDMETHODCALLTYPE * GetAccumulatedCost) (ICommandCost * This, LPCOLESTR pwszRowsetName, ULONG * pcCostLimits, DBCOST ** prgCostLimits);
	HRESULT(STDMETHODCALLTYPE * GetCostEstimate) (ICommandCost * This, LPCOLESTR pwszRowsetName, ULONG * pcCostEstimates, DBCOST * prgCostEstimates);
	HRESULT(STDMETHODCALLTYPE * GetCostGoals) (ICommandCost * This, LPCOLESTR pwszRowsetName, ULONG * pcCostGoals, DBCOST * prgCostGoals);
	HRESULT(STDMETHODCALLTYPE * GetCostLimits) (ICommandCost * This, LPCOLESTR pwszRowsetName, ULONG * pcCostLimits, DBCOST * prgCostLimits);
	HRESULT(STDMETHODCALLTYPE * SetCostGoals) (ICommandCost * This, LPCOLESTR pwszRowsetName, ULONG cCostGoals, const DBCOST rgCostGoals[]);
	HRESULT(STDMETHODCALLTYPE * SetCostLimits) (ICommandCost * This, LPCOLESTR pwszRowsetName, ULONG cCostLimits, DBCOST * prgCostLimits, DBEXECLIMITS dwExecutionFlags);
	END_INTERFACE
}  ICommandCostVtbl;
interface ICommandCost
{
	CONST_VTBL struct ICommandCostVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICommandCost_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICommandCost_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ICommandCost_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ICommandCost_GetAccumulatedCost(This,pwszRowsetName,pcCostLimits,prgCostLimits) ( (This)->lpVtbl -> GetAccumulatedCost(This,pwszRowsetName,pcCostLimits,prgCostLimits) )
#define ICommandCost_GetCostEstimate(This,pwszRowsetName,pcCostEstimates,prgCostEstimates) ( (This)->lpVtbl -> GetCostEstimate(This,pwszRowsetName,pcCostEstimates,prgCostEstimates) )
#define ICommandCost_GetCostGoals(This,pwszRowsetName,pcCostGoals,prgCostGoals) ( (This)->lpVtbl -> GetCostGoals(This,pwszRowsetName,pcCostGoals,prgCostGoals) )
#define ICommandCost_GetCostLimits(This,pwszRowsetName,pcCostLimits,prgCostLimits) ( (This)->lpVtbl -> GetCostLimits(This,pwszRowsetName,pcCostLimits,prgCostLimits) )
#define ICommandCost_SetCostGoals(This,pwszRowsetName,cCostGoals,rgCostGoals) ( (This)->lpVtbl -> SetCostGoals(This,pwszRowsetName,cCostGoals,rgCostGoals) )
#define ICommandCost_SetCostLimits(This,pwszRowsetName,cCostLimits,prgCostLimits,dwExecutionFlags) ( (This)->lpVtbl -> SetCostLimits(This,pwszRowsetName,cCostLimits,prgCostLimits,dwExecutionFlags) )
#endif
#endif
#ifndef __ICommandValidate_INTERFACE_DEFINED__
#define __ICommandValidate_INTERFACE_DEFINED__
extern const IID IID_ICommandValidate;
typedef struct ICommandValidateVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICommandValidate * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICommandValidate * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICommandValidate * This);
	HRESULT(STDMETHODCALLTYPE * ValidateCompletely) (ICommandValidate * This);
	HRESULT(STDMETHODCALLTYPE * ValidateSyntax) (ICommandValidate * This);
	END_INTERFACE
}  ICommandValidateVtbl;
interface ICommandValidate
{
	CONST_VTBL struct ICommandValidateVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICommandValidate_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICommandValidate_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ICommandValidate_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ICommandValidate_ValidateCompletely(This) ( (This)->lpVtbl -> ValidateCompletely(This) )
#define ICommandValidate_ValidateSyntax(This) ( (This)->lpVtbl -> ValidateSyntax(This) )
#endif
#endif
#ifndef __ITableRename_INTERFACE_DEFINED__
#define __ITableRename_INTERFACE_DEFINED__
extern const IID IID_ITableRename;
typedef struct ITableRenameVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITableRename * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITableRename * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITableRename * This);
	HRESULT(STDMETHODCALLTYPE * RenameColumn) (ITableRename * This, DBID * pTableId, DBID * pOldColumnId, DBID * pNewColumnId);
	HRESULT(STDMETHODCALLTYPE * RenameTable) (ITableRename * This, DBID * pOldTableId, DBID * pOldIndexId, DBID * pNewTableId, DBID * pNewIndexId);
	END_INTERFACE
}  ITableRenameVtbl;
interface ITableRename
{
	CONST_VTBL struct ITableRenameVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITableRename_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITableRename_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITableRename_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITableRename_RenameColumn(This,pTableId,pOldColumnId,pNewColumnId) ( (This)->lpVtbl -> RenameColumn(This,pTableId,pOldColumnId,pNewColumnId) )
#define ITableRename_RenameTable(This,pOldTableId,pOldIndexId,pNewTableId,pNewIndexId) ( (This)->lpVtbl -> RenameTable(This,pOldTableId,pOldIndexId,pNewTableId,pNewIndexId) )
#endif
#endif
#ifndef __IDBSchemaCommand_INTERFACE_DEFINED__
#define __IDBSchemaCommand_INTERFACE_DEFINED__
extern const IID IID_IDBSchemaCommand;
typedef struct IDBSchemaCommandVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDBSchemaCommand * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDBSchemaCommand * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDBSchemaCommand * This);
	HRESULT(STDMETHODCALLTYPE * GetCommand) (IDBSchemaCommand * This, IUnknown * pUnkOuter, REFGUID rguidSchema, ICommand ** ppCommand);
	HRESULT(STDMETHODCALLTYPE * GetSchemas) (IDBSchemaCommand * This, ULONG * pcSchemas, GUID ** prgSchemas);
	END_INTERFACE
}  IDBSchemaCommandVtbl;
interface IDBSchemaCommand
{
	CONST_VTBL struct IDBSchemaCommandVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDBSchemaCommand_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDBSchemaCommand_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IDBSchemaCommand_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IDBSchemaCommand_GetCommand(This,pUnkOuter,rguidSchema,ppCommand) ( (This)->lpVtbl -> GetCommand(This,pUnkOuter,rguidSchema,ppCommand) )
#define IDBSchemaCommand_GetSchemas(This,pcSchemas,prgSchemas) ( (This)->lpVtbl -> GetSchemas(This,pcSchemas,prgSchemas) )
#endif
#endif
#ifndef __IProvideMoniker_INTERFACE_DEFINED__
#define __IProvideMoniker_INTERFACE_DEFINED__
extern const IID IID_IProvideMoniker;
typedef struct IProvideMonikerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IProvideMoniker * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IProvideMoniker * This);
	ULONG(STDMETHODCALLTYPE * Release) (IProvideMoniker * This);
	HRESULT(STDMETHODCALLTYPE * GetMoniker) (IProvideMoniker * This, IMoniker ** ppIMoniker);
	END_INTERFACE
}  IProvideMonikerVtbl;
interface IProvideMoniker
{
	CONST_VTBL struct IProvideMonikerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IProvideMoniker_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IProvideMoniker_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IProvideMoniker_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IProvideMoniker_GetMoniker(This,ppIMoniker) ( (This)->lpVtbl -> GetMoniker(This,ppIMoniker) )
#endif
#endif
#include <poppack.h>
extern RPC_IF_HANDLE __MIDL_itf_oledbdep_0000_0016_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_oledbdep_0000_0016_v0_0_s_ifspec;
#endif
