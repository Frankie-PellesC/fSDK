/*+@@file@@----------------------------------------------------------------*//*!
 \file		tlogstg.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Sep 16 23:27:33 2016
 \date		Modified on Fri Sep 16 23:27:33 2016
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
#ifndef __tlogstg_h__
#define __tlogstg_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ITravelLogEntry_FWD_DEFINED__
#define __ITravelLogEntry_FWD_DEFINED__
typedef interface ITravelLogEntry ITravelLogEntry;
#endif
#ifndef __ITravelLogClient_FWD_DEFINED__
#define __ITravelLogClient_FWD_DEFINED__
typedef interface ITravelLogClient ITravelLogClient;
#endif
#ifndef __IEnumTravelLogEntry_FWD_DEFINED__
#define __IEnumTravelLogEntry_FWD_DEFINED__
typedef interface IEnumTravelLogEntry IEnumTravelLogEntry;
#endif
#ifndef __ITravelLogStg_FWD_DEFINED__
#define __ITravelLogStg_FWD_DEFINED__
typedef interface ITravelLogStg ITravelLogStg;
#endif
#include <objidl.h>
#include <oleidl.h>
#include <shtypes.h>
#pragma comment(lib,"uuid.lib")
#define SID_STravelLogCursor IID_ITravelLogStg
typedef struct _WINDOWDATA
{
	DWORD dwWindowID;
	UINT uiCP;
	PIDLIST_ABSOLUTE pidl;
	LPWSTR lpszUrl;
	LPWSTR lpszUrlLocation;
	LPWSTR lpszTitle;
} WINDOWDATA;
typedef WINDOWDATA *LPWINDOWDATA;
typedef const WINDOWDATA *LPCWINDOWDATA;
extern RPC_IF_HANDLE __MIDL_itf_tlogstg_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tlogstg_0000_0000_v0_0_s_ifspec;
#ifndef __ITravelLogEntry_INTERFACE_DEFINED__
#define __ITravelLogEntry_INTERFACE_DEFINED__
extern const IID IID_ITravelLogEntry;
typedef struct ITravelLogEntryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITravelLogEntry * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITravelLogEntry * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITravelLogEntry * This);
	HRESULT(STDMETHODCALLTYPE * GetTitle) (ITravelLogEntry * This, LPWSTR * ppszTitle);
	HRESULT(STDMETHODCALLTYPE * GetURL) (ITravelLogEntry * This, LPWSTR * ppszURL);
	END_INTERFACE
}  ITravelLogEntryVtbl;
interface ITravelLogEntry
{
	CONST_VTBL struct ITravelLogEntryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITravelLogEntry_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITravelLogEntry_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITravelLogEntry_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITravelLogEntry_GetTitle(This,ppszTitle) ( (This)->lpVtbl -> GetTitle(This,ppszTitle) )
#define ITravelLogEntry_GetURL(This,ppszURL) ( (This)->lpVtbl -> GetURL(This,ppszURL) )
#endif
#endif
#ifndef __ITravelLogClient_INTERFACE_DEFINED__
#define __ITravelLogClient_INTERFACE_DEFINED__
extern const IID IID_ITravelLogClient;
typedef struct ITravelLogClientVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITravelLogClient * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITravelLogClient * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITravelLogClient * This);
	HRESULT(STDMETHODCALLTYPE * FindWindowByIndex) (ITravelLogClient * This, DWORD dwID, IUnknown ** ppunk);
	HRESULT(STDMETHODCALLTYPE * GetWindowData) (ITravelLogClient * This, IStream * pStream, LPWINDOWDATA pWinData);
	HRESULT(STDMETHODCALLTYPE * LoadHistoryPosition) (ITravelLogClient * This, LPWSTR pszUrlLocation, DWORD dwPosition);
	END_INTERFACE
}  ITravelLogClientVtbl;
interface ITravelLogClient
{
	CONST_VTBL struct ITravelLogClientVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITravelLogClient_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITravelLogClient_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITravelLogClient_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITravelLogClient_FindWindowByIndex(This,dwID,ppunk) ( (This)->lpVtbl -> FindWindowByIndex(This,dwID,ppunk) )
#define ITravelLogClient_GetWindowData(This,pStream,pWinData) ( (This)->lpVtbl -> GetWindowData(This,pStream,pWinData) )
#define ITravelLogClient_LoadHistoryPosition(This,pszUrlLocation,dwPosition) ( (This)->lpVtbl -> LoadHistoryPosition(This,pszUrlLocation,dwPosition) )
#endif
#endif
#ifndef __IEnumTravelLogEntry_INTERFACE_DEFINED__
#define __IEnumTravelLogEntry_INTERFACE_DEFINED__
extern const IID IID_IEnumTravelLogEntry;
typedef struct IEnumTravelLogEntryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumTravelLogEntry * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumTravelLogEntry * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumTravelLogEntry * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumTravelLogEntry * This, ULONG cElt, ITravelLogEntry ** rgElt, ULONG * pcEltFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumTravelLogEntry * This, ULONG cElt);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumTravelLogEntry * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumTravelLogEntry * This, IEnumTravelLogEntry ** ppEnum);
	END_INTERFACE
}  IEnumTravelLogEntryVtbl;
interface IEnumTravelLogEntry
{
	CONST_VTBL struct IEnumTravelLogEntryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumTravelLogEntry_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumTravelLogEntry_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IEnumTravelLogEntry_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IEnumTravelLogEntry_Next(This,cElt,rgElt,pcEltFetched) ( (This)->lpVtbl -> Next(This,cElt,rgElt,pcEltFetched) )
#define IEnumTravelLogEntry_Skip(This,cElt) ( (This)->lpVtbl -> Skip(This,cElt) )
#define IEnumTravelLogEntry_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IEnumTravelLogEntry_Clone(This,ppEnum) ( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
#endif
#ifndef __ITravelLogStg_INTERFACE_DEFINED__
#define __ITravelLogStg_INTERFACE_DEFINED__
enum tagTLENUMF
{
	TLEF_RELATIVE_INCLUDE_CURRENT = 0x1,
	TLEF_RELATIVE_BACK = 0x10,
	TLEF_RELATIVE_FORE = 0x20,
	TLEF_INCLUDE_UNINVOKEABLE = 0x40,
	TLEF_ABSOLUTE = 0x31
};
typedef DWORD TLENUMF;
extern const IID IID_ITravelLogStg;
typedef struct ITravelLogStgVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITravelLogStg * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITravelLogStg * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITravelLogStg * This);
	HRESULT(STDMETHODCALLTYPE * CreateEntry) (ITravelLogStg * This, LPCWSTR pszUrl, LPCWSTR pszTitle, ITravelLogEntry * ptleRelativeTo, BOOL fPrepend, ITravelLogEntry ** pptle);
	HRESULT(STDMETHODCALLTYPE * TravelTo) (ITravelLogStg * This, ITravelLogEntry * ptle);
	HRESULT(STDMETHODCALLTYPE * EnumEntries) (ITravelLogStg * This, TLENUMF flags, IEnumTravelLogEntry ** ppenum);
	HRESULT(STDMETHODCALLTYPE * FindEntries) (ITravelLogStg * This, TLENUMF flags, LPCWSTR pszUrl, IEnumTravelLogEntry ** ppenum);
	HRESULT(STDMETHODCALLTYPE * GetCount) (ITravelLogStg * This, TLENUMF flags, DWORD * pcEntries);
	HRESULT(STDMETHODCALLTYPE * RemoveEntry) (ITravelLogStg * This, ITravelLogEntry * ptle);
	HRESULT(STDMETHODCALLTYPE * GetRelativeEntry) (ITravelLogStg * This, int iOffset, ITravelLogEntry ** ptle);
	END_INTERFACE
}  ITravelLogStgVtbl;
interface ITravelLogStg
{
	CONST_VTBL struct ITravelLogStgVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITravelLogStg_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITravelLogStg_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITravelLogStg_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITravelLogStg_CreateEntry(This,pszUrl,pszTitle,ptleRelativeTo,fPrepend,pptle) ( (This)->lpVtbl -> CreateEntry(This,pszUrl,pszTitle,ptleRelativeTo,fPrepend,pptle) )
#define ITravelLogStg_TravelTo(This,ptle) ( (This)->lpVtbl -> TravelTo(This,ptle) )
#define ITravelLogStg_EnumEntries(This,flags,ppenum) ( (This)->lpVtbl -> EnumEntries(This,flags,ppenum) )
#define ITravelLogStg_FindEntries(This,flags,pszUrl,ppenum) ( (This)->lpVtbl -> FindEntries(This,flags,pszUrl,ppenum) )
#define ITravelLogStg_GetCount(This,flags,pcEntries) ( (This)->lpVtbl -> GetCount(This,flags,pcEntries) )
#define ITravelLogStg_RemoveEntry(This,ptle) ( (This)->lpVtbl -> RemoveEntry(This,ptle) )
#define ITravelLogStg_GetRelativeEntry(This,iOffset,ptle) ( (This)->lpVtbl -> GetRelativeEntry(This,iOffset,ptle) )
#endif
#endif
unsigned long __RPC_USER PIDLIST_ABSOLUTE_UserSize(unsigned long *, unsigned long, PIDLIST_ABSOLUTE *);
unsigned char *__RPC_USER PIDLIST_ABSOLUTE_UserMarshal(unsigned long *, unsigned char *, PIDLIST_ABSOLUTE *);
unsigned char *__RPC_USER PIDLIST_ABSOLUTE_UserUnmarshal(unsigned long *, unsigned char *, PIDLIST_ABSOLUTE *);
void __RPC_USER PIDLIST_ABSOLUTE_UserFree(unsigned long *, PIDLIST_ABSOLUTE *);
unsigned long __RPC_USER PIDLIST_ABSOLUTE_UserSize64(unsigned long *, unsigned long, PIDLIST_ABSOLUTE *);
unsigned char *__RPC_USER PIDLIST_ABSOLUTE_UserMarshal64(unsigned long *, unsigned char *, PIDLIST_ABSOLUTE *);
unsigned char *__RPC_USER PIDLIST_ABSOLUTE_UserUnmarshal64(unsigned long *, unsigned char *, PIDLIST_ABSOLUTE *);
void __RPC_USER PIDLIST_ABSOLUTE_UserFree64(unsigned long *, PIDLIST_ABSOLUTE *);
#endif
