/*+@@file@@----------------------------------------------------------------*//*!
 \file		gameux.h
 \par Description
            Extension and update of headers for PellesC compiler suite.
 \par Project:
            PellesC Headers extension
 \date		Created  on Mon Jul 11 00:10:05 2016
 \date		Modified on Mon Jul 11 00:10:05 2016
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
#ifndef __gameux_h__
#define __gameux_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IGameExplorer_FWD_DEFINED__
#define __IGameExplorer_FWD_DEFINED__
typedef interface IGameExplorer IGameExplorer;
#endif
#ifndef __IGameStatistics_FWD_DEFINED__
#define __IGameStatistics_FWD_DEFINED__
typedef interface IGameStatistics IGameStatistics;
#endif
#ifndef __IGameStatisticsMgr_FWD_DEFINED__
#define __IGameStatisticsMgr_FWD_DEFINED__
typedef interface IGameStatisticsMgr IGameStatisticsMgr;
#endif
#ifndef __IGameExplorer2_FWD_DEFINED__
#define __IGameExplorer2_FWD_DEFINED__
typedef interface IGameExplorer2 IGameExplorer2;
#endif
#ifndef __GameExplorer_FWD_DEFINED__
#define __GameExplorer_FWD_DEFINED__
typedef struct GameExplorer GameExplorer;
#endif
#ifndef __GameStatistics_FWD_DEFINED__
#define __GameStatistics_FWD_DEFINED__
typedef struct GameStatistics GameStatistics;
#endif
#include <oaidl.h>
#include <ocidl.h>
#include <shobjidl.h>
#define ID_GDF_XML __GDF_XML
#define ID_GDF_THUMBNAIL __GDF_THUMBNAIL
#define ID_ICON_ICO __ICON_ICO
#define ID_GDF_XML_STR L"__GDF_XML"
#define ID_GDF_THUMBNAIL_STR L"__GDF_THUMBNAIL"
typedef enum GAME_INSTALL_SCOPE
{
	GIS_NOT_INSTALLED = 1,
	GIS_CURRENT_USER = 2,
	GIS_ALL_USERS = 3
} GAME_INSTALL_SCOPE;
extern RPC_IF_HANDLE __MIDL_itf_gameux_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_gameux_0000_0000_v0_0_s_ifspec;
#ifndef __IGameExplorer_INTERFACE_DEFINED__
#define __IGameExplorer_INTERFACE_DEFINED__
extern const IID IID_IGameExplorer;
typedef struct IGameExplorerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGameExplorer * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGameExplorer * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGameExplorer * This);
	HRESULT(STDMETHODCALLTYPE * AddGame) (IGameExplorer * This, BSTR bstrGDFBinaryPath, BSTR bstrGameInstallDirectory, GAME_INSTALL_SCOPE installScope, GUID * pguidInstanceID);
	HRESULT(STDMETHODCALLTYPE * RemoveGame) (IGameExplorer * This, GUID guidInstanceID);
	HRESULT(STDMETHODCALLTYPE * UpdateGame) (IGameExplorer * This, GUID guidInstanceID);
	HRESULT(STDMETHODCALLTYPE * VerifyAccess) (IGameExplorer * This, BSTR bstrGDFBinaryPath, BOOL * pfHasAccess);
	END_INTERFACE
}  IGameExplorerVtbl;
interface IGameExplorer
{
	CONST_VTBL struct IGameExplorerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGameExplorer_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGameExplorer_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGameExplorer_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGameExplorer_AddGame(This,bstrGDFBinaryPath,bstrGameInstallDirectory,installScope,pguidInstanceID)( (This)->lpVtbl -> AddGame(This,bstrGDFBinaryPath,bstrGameInstallDirectory,installScope,pguidInstanceID) )
#define IGameExplorer_RemoveGame(This,guidInstanceID)( (This)->lpVtbl -> RemoveGame(This,guidInstanceID) )
#define IGameExplorer_UpdateGame(This,guidInstanceID)( (This)->lpVtbl -> UpdateGame(This,guidInstanceID) )
#define IGameExplorer_VerifyAccess(This,bstrGDFBinaryPath,pfHasAccess)( (This)->lpVtbl -> VerifyAccess(This,bstrGDFBinaryPath,pfHasAccess) )
#endif
#endif
typedef enum GAMESTATS_OPEN_TYPE
{
	GAMESTATS_OPEN_OPENORCREATE = 0,
	GAMESTATS_OPEN_OPENONLY = 1
} GAMESTATS_OPEN_TYPE;
typedef enum GAMESTATS_OPEN_RESULT
{
	GAMESTATS_OPEN_CREATED = 0,
	GAMESTATS_OPEN_OPENED = 1
} GAMESTATS_OPEN_RESULT;
extern RPC_IF_HANDLE __MIDL_itf_gameux_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_gameux_0000_0001_v0_0_s_ifspec;
#ifndef __IGameStatistics_INTERFACE_DEFINED__
#define __IGameStatistics_INTERFACE_DEFINED__
extern const IID IID_IGameStatistics;
typedef struct IGameStatisticsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGameStatistics * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGameStatistics * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGameStatistics * This);
	HRESULT(STDMETHODCALLTYPE * GetMaxCategoryLength) (IGameStatistics * This, UINT * cch);
	HRESULT(STDMETHODCALLTYPE * GetMaxNameLength) (IGameStatistics * This, UINT * cch);
	HRESULT(STDMETHODCALLTYPE * GetMaxValueLength) (IGameStatistics * This, UINT * cch);
	HRESULT(STDMETHODCALLTYPE * GetMaxCategories) (IGameStatistics * This, WORD * pMax);
	HRESULT(STDMETHODCALLTYPE * GetMaxStatsPerCategory) (IGameStatistics * This, WORD * pMax);
	HRESULT(STDMETHODCALLTYPE * SetCategoryTitle) (IGameStatistics * This, WORD categoryIndex, LPCWSTR title);
	HRESULT(STDMETHODCALLTYPE * GetCategoryTitle) (IGameStatistics * This, WORD categoryIndex, LPWSTR * pTitle);
	HRESULT(STDMETHODCALLTYPE * GetStatistic) (IGameStatistics * This, WORD categoryIndex, WORD statIndex, LPWSTR * pName, LPWSTR * pValue);
	HRESULT(STDMETHODCALLTYPE * SetStatistic) (IGameStatistics * This, WORD categoryIndex, WORD statIndex, LPCWSTR name, LPCWSTR value);
	HRESULT(STDMETHODCALLTYPE * Save) (IGameStatistics * This, BOOL trackChanges);
	HRESULT(STDMETHODCALLTYPE * SetLastPlayedCategory) (IGameStatistics * This, UINT categoryIndex);
	HRESULT(STDMETHODCALLTYPE * GetLastPlayedCategory) (IGameStatistics * This, UINT * pCategoryIndex);
	END_INTERFACE
}  IGameStatisticsVtbl;
interface IGameStatistics
{
	CONST_VTBL struct IGameStatisticsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGameStatistics_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGameStatistics_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGameStatistics_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGameStatistics_GetMaxCategoryLength(This,cch)( (This)->lpVtbl -> GetMaxCategoryLength(This,cch) )
#define IGameStatistics_GetMaxNameLength(This,cch)( (This)->lpVtbl -> GetMaxNameLength(This,cch) )
#define IGameStatistics_GetMaxValueLength(This,cch)( (This)->lpVtbl -> GetMaxValueLength(This,cch) )
#define IGameStatistics_GetMaxCategories(This,pMax)( (This)->lpVtbl -> GetMaxCategories(This,pMax) )
#define IGameStatistics_GetMaxStatsPerCategory(This,pMax)( (This)->lpVtbl -> GetMaxStatsPerCategory(This,pMax) )
#define IGameStatistics_SetCategoryTitle(This,categoryIndex,title)( (This)->lpVtbl -> SetCategoryTitle(This,categoryIndex,title) )
#define IGameStatistics_GetCategoryTitle(This,categoryIndex,pTitle)( (This)->lpVtbl -> GetCategoryTitle(This,categoryIndex,pTitle) )
#define IGameStatistics_GetStatistic(This,categoryIndex,statIndex,pName,pValue)( (This)->lpVtbl -> GetStatistic(This,categoryIndex,statIndex,pName,pValue) )
#define IGameStatistics_SetStatistic(This,categoryIndex,statIndex,name,value)( (This)->lpVtbl -> SetStatistic(This,categoryIndex,statIndex,name,value) )
#define IGameStatistics_Save(This,trackChanges)( (This)->lpVtbl -> Save(This,trackChanges) )
#define IGameStatistics_SetLastPlayedCategory(This,categoryIndex)( (This)->lpVtbl -> SetLastPlayedCategory(This,categoryIndex) )
#define IGameStatistics_GetLastPlayedCategory(This,pCategoryIndex)( (This)->lpVtbl -> GetLastPlayedCategory(This,pCategoryIndex) )
#endif
#endif
#ifndef __IGameStatisticsMgr_INTERFACE_DEFINED__
#define __IGameStatisticsMgr_INTERFACE_DEFINED__
extern const IID IID_IGameStatisticsMgr;
typedef struct IGameStatisticsMgrVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGameStatisticsMgr * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGameStatisticsMgr * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGameStatisticsMgr * This);
	HRESULT(STDMETHODCALLTYPE * GetGameStatistics) (IGameStatisticsMgr * This, LPCWSTR GDFBinaryPath, GAMESTATS_OPEN_TYPE openType, GAMESTATS_OPEN_RESULT * pOpenResult, IGameStatistics ** ppiStats);
	HRESULT(STDMETHODCALLTYPE * RemoveGameStatistics) (IGameStatisticsMgr * This, LPCWSTR GDFBinaryPath);
	END_INTERFACE
}  IGameStatisticsMgrVtbl;
interface IGameStatisticsMgr
{
	CONST_VTBL struct IGameStatisticsMgrVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGameStatisticsMgr_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGameStatisticsMgr_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGameStatisticsMgr_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGameStatisticsMgr_GetGameStatistics(This,GDFBinaryPath,openType,pOpenResult,ppiStats)( (This)->lpVtbl -> GetGameStatistics(This,GDFBinaryPath,openType,pOpenResult,ppiStats) )
#define IGameStatisticsMgr_RemoveGameStatistics(This,GDFBinaryPath)( (This)->lpVtbl -> RemoveGameStatistics(This,GDFBinaryPath) )
#endif
#endif
#ifndef __IGameExplorer2_INTERFACE_DEFINED__
#define __IGameExplorer2_INTERFACE_DEFINED__
extern const IID IID_IGameExplorer2;
typedef struct IGameExplorer2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGameExplorer2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGameExplorer2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGameExplorer2 * This);
	HRESULT(STDMETHODCALLTYPE * InstallGame) (IGameExplorer2 * This, LPCWSTR binaryGDFPath, LPCWSTR installDirectory, GAME_INSTALL_SCOPE installScope);
	HRESULT(STDMETHODCALLTYPE * UninstallGame) (IGameExplorer2 * This, LPCWSTR binaryGDFPath);
	HRESULT(STDMETHODCALLTYPE * CheckAccess) (IGameExplorer2 * This, LPCWSTR binaryGDFPath, BOOL * pHasAccess);
	END_INTERFACE
}  IGameExplorer2Vtbl;
interface IGameExplorer2
{
	CONST_VTBL struct IGameExplorer2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGameExplorer2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGameExplorer2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGameExplorer2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGameExplorer2_InstallGame(This,binaryGDFPath,installDirectory,installScope)( (This)->lpVtbl -> InstallGame(This,binaryGDFPath,installDirectory,installScope) )
#define IGameExplorer2_UninstallGame(This,binaryGDFPath)( (This)->lpVtbl -> UninstallGame(This,binaryGDFPath) )
#define IGameExplorer2_CheckAccess(This,binaryGDFPath,pHasAccess)( (This)->lpVtbl -> CheckAccess(This,binaryGDFPath,pHasAccess) )
#endif
#endif
#ifndef __gameuxLib_LIBRARY_DEFINED__
#define __gameuxLib_LIBRARY_DEFINED__
extern const IID LIBID_gameuxLib;
extern const CLSID CLSID_GameExplorer;
extern const CLSID CLSID_GameStatistics;
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
#endif
