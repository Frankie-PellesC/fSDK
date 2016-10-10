/*+@@file@@----------------------------------------------------------------*//*!
 \file		HLink.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Jul 11 18:49:03 2016
 \date		Modified on Mon Jul 11 18:49:03 2016
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
#ifndef __hlink_h__
#define __hlink_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IHlink_FWD_DEFINED__
#define __IHlink_FWD_DEFINED__
typedef interface IHlink IHlink;
#endif
#ifndef __IHlinkSite_FWD_DEFINED__
#define __IHlinkSite_FWD_DEFINED__
typedef interface IHlinkSite IHlinkSite;
#endif
#ifndef __IHlinkTarget_FWD_DEFINED__
#define __IHlinkTarget_FWD_DEFINED__
typedef interface IHlinkTarget IHlinkTarget;
#endif
#ifndef __IHlinkFrame_FWD_DEFINED__
#define __IHlinkFrame_FWD_DEFINED__
typedef interface IHlinkFrame IHlinkFrame;
#endif
#ifndef __IEnumHLITEM_FWD_DEFINED__
#define __IEnumHLITEM_FWD_DEFINED__
typedef interface IEnumHLITEM IEnumHLITEM;
#endif
#ifndef __IHlinkBrowseContext_FWD_DEFINED__
#define __IHlinkBrowseContext_FWD_DEFINED__
typedef interface IHlinkBrowseContext IHlinkBrowseContext;
#endif
#ifndef __IExtensionServices_FWD_DEFINED__
#define __IExtensionServices_FWD_DEFINED__
typedef interface IExtensionServices IExtensionServices;
#endif
#include "urlmon.h"
#pragma comment(lib,"uuid.lib")
#ifndef HLINK_H
#define HLINK_H
#define SID_SHlinkFrame IID_IHlinkFrame
#define IID_IHlinkSource IID_IHlinkTarget
#define IHlinkSource IHlinkTarget
#define IHlinkSourceVtbl IHlinkTargetVtbl
#define LPHLINKSOURCE LPHLINKTARGET
#ifndef _HLINK_ERRORS_DEFINED
#define _HLINK_ERRORS_DEFINED
#define HLINK_E_FIRST                    (OLE_E_LAST+1)
#define HLINK_S_FIRST                    (OLE_S_LAST+1)
#define HLINK_S_DONTHIDE                 (HLINK_S_FIRST)
#endif
#define CFSTR_HYPERLINK         (TEXT("Hyperlink"))
STDAPI HlinkCreateFromMoniker(IMoniker *pimkTrgt, LPCWSTR pwzLocation, LPCWSTR pwzFriendlyName, IHlinkSite *pihlsite, DWORD dwSiteData, IUnknown *piunkOuter, REFIID riid, void **ppvObj);
STDAPI HlinkCreateFromString(LPCWSTR pwzTarget, LPCWSTR pwzLocation, LPCWSTR pwzFriendlyName, IHlinkSite *pihlsite, DWORD dwSiteData, IUnknown *piunkOuter, REFIID riid, void **ppvObj);
STDAPI HlinkCreateFromData(IDataObject *piDataObj, IHlinkSite *pihlsite, DWORD dwSiteData, IUnknown *piunkOuter, REFIID riid, void **ppvObj);
STDAPI HlinkQueryCreateFromData(IDataObject *piDataObj);
STDAPI HlinkClone(IHlink *pihl, REFIID riid, IHlinkSite *pihlsiteForClone, DWORD dwSiteData, void **ppvObj);
STDAPI HlinkCreateBrowseContext(IUnknown *piunkOuter, REFIID riid, void **ppvObj);
STDAPI HlinkNavigateToStringReference(LPCWSTR pwzTarget, LPCWSTR pwzLocation, IHlinkSite *pihlsite, DWORD dwSiteData, IHlinkFrame *pihlframe, DWORD grfHLNF, LPBC pibc, IBindStatusCallback *pibsc, IHlinkBrowseContext *pihlbc);
STDAPI HlinkNavigate(IHlink *pihl, IHlinkFrame *pihlframe, DWORD grfHLNF, LPBC pbc, IBindStatusCallback *pibsc, IHlinkBrowseContext *pihlbc);
STDAPI HlinkOnNavigate(IHlinkFrame *pihlframe, IHlinkBrowseContext *pihlbc, DWORD grfHLNF, IMoniker *pimkTarget, LPCWSTR pwzLocation, LPCWSTR pwzFriendlyName, ULONG *puHLID);
STDAPI HlinkUpdateStackItem(IHlinkFrame *pihlframe, IHlinkBrowseContext *pihlbc, ULONG uHLID, IMoniker *pimkTrgt, LPCWSTR pwzLocation, LPCWSTR pwzFriendlyName);
STDAPI HlinkOnRenameDocument(DWORD dwReserved, IHlinkBrowseContext *pihlbc, IMoniker *pimkOld, IMoniker *pimkNew);
STDAPI HlinkResolveMonikerForData(LPMONIKER pimkReference, DWORD reserved, LPBC pibc, ULONG cFmtetc, FORMATETC *rgFmtetc, IBindStatusCallback *pibsc, LPMONIKER pimkBase);
STDAPI HlinkResolveStringForData(LPCWSTR pwzReference, DWORD reserved, LPBC pibc, ULONG cFmtetc, FORMATETC *rgFmtetc, IBindStatusCallback *pibsc, LPMONIKER pimkBase);
STDAPI HlinkParseDisplayName(LPBC pibc, LPCWSTR pwzDisplayName, BOOL fNoForceAbs, ULONG *pcchEaten, IMoniker **ppimk);
STDAPI HlinkCreateExtensionServices(LPCWSTR pwzAdditionalHeaders, HWND phwnd, LPCWSTR pszUsername, LPCWSTR pszPassword, IUnknown *piunkOuter, REFIID riid, void **ppvObj);
STDAPI HlinkPreprocessMoniker(LPBC pibc, IMoniker *pimkIn, IMoniker **ppimkOut);
STDAPI OleSaveToStreamEx(IUnknown *piunk, IStream *pistm, BOOL fClearDirty);
typedef enum _HLSR_NOREDEF10
{
	HLSR_HOME	= 0,
	HLSR_SEARCHPAGE	= 1,
	HLSR_HISTORYFOLDER	= 2
} HLSR;
STDAPI HlinkSetSpecialReference(ULONG uReference, LPCWSTR pwzReference);
STDAPI HlinkGetSpecialReference(ULONG uReference, LPWSTR *ppwzReference);
typedef enum _HLSHORTCUTF__NOREDEF10
{
	HLSHORTCUTF_DEFAULT = 0,
	HLSHORTCUTF_DONTACTUALLYCREATE = 0x1,
	HLSHORTCUTF_USEFILENAMEFROMFRIENDLYNAME = 0x2,
	HLSHORTCUTF_USEUNIQUEFILENAME = 0x4,
	HLSHORTCUTF_MAYUSEEXISTINGSHORTCUT = 0x8
} HLSHORTCUTF;
STDAPI HlinkCreateShortcut(DWORD grfHLSHORTCUTF, IHlink *pihl, LPCWSTR pwzDir, LPCWSTR pwzFileName, LPWSTR *ppwzShortcutFile, DWORD dwReserved);
STDAPI HlinkCreateShortcutFromMoniker(DWORD grfHLSHORTCUTF, IMoniker *pimkTarget, LPCWSTR pwzLocation, LPCWSTR pwzDir, LPCWSTR pwzFileName, LPWSTR *ppwzShortcutFile, DWORD dwReserved);
STDAPI HlinkCreateShortcutFromString(DWORD grfHLSHORTCUTF, LPCWSTR pwzTarget, LPCWSTR pwzLocation, LPCWSTR pwzDir, LPCWSTR pwzFileName, LPWSTR *ppwzShortcutFile, DWORD dwReserved);
STDAPI HlinkResolveShortcut(LPCWSTR pwzShortcutFileName, IHlinkSite *pihlsite, DWORD dwSiteData, IUnknown *piunkOuter, REFIID riid, void **ppvObj);
STDAPI HlinkResolveShortcutToMoniker(LPCWSTR pwzShortcutFileName, IMoniker **ppimkTarget, LPWSTR *ppwzLocation);
STDAPI HlinkResolveShortcutToString(LPCWSTR pwzShortcutFileName, LPWSTR *ppwzTarget, LPWSTR *ppwzLocation);
STDAPI HlinkIsShortcut(LPCWSTR pwzFileName);
STDAPI HlinkGetValueFromParams(LPCWSTR pwzParams, LPCWSTR pwzName, LPWSTR *ppwzValue);
typedef enum _HLTRANSLATEF_NOREDEF10
{
	HLTRANSLATEF_DEFAULT	= 0,
	HLTRANSLATEF_DONTAPPLYDEFAULTPREFIX	= 0x1
} 	HLTRANSLATEF;
STDAPI HlinkTranslateURL(LPCWSTR pwzURL, DWORD grfFlags, LPWSTR *ppwzTranslatedURL);
#ifndef _LPHLINK_DEFINED
#define _LPHLINK_DEFINED
extern RPC_IF_HANDLE __MIDL_itf_hlink_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_hlink_0000_0000_v0_0_s_ifspec;
#ifndef __IHlink_INTERFACE_DEFINED__
#define __IHlink_INTERFACE_DEFINED__ 
typedef  IHlink *LPHLINK;
typedef enum __MIDL_IHlink_0001
{
	HLNF_INTERNALJUMP	= 0x1,
	HLNF_OPENINNEWWINDOW	= 0x2,
	HLNF_NAVIGATINGBACK	= 0x4,
	HLNF_NAVIGATINGFORWARD	= 0x8,
	HLNF_NAVIGATINGTOSTACKITEM	= 0x10,
	HLNF_CREATENOHISTORY	= 0x20
} HLNF;
typedef enum __MIDL_IHlink_0002
{
	HLINKGETREF_DEFAULT	= 0,
	HLINKGETREF_ABSOLUTE	= 1,
	HLINKGETREF_RELATIVE	= 2
} HLINKGETREF;
typedef enum __MIDL_IHlink_0003
{
	HLFNAMEF_DEFAULT	= 0,
	HLFNAMEF_TRYCACHE	= 0x1,
	HLFNAMEF_TRYPRETTYTARGET	= 0x2,
	HLFNAMEF_TRYFULLTARGET	= 0x4,
	HLFNAMEF_TRYWIN95SHORTCUT	= 0x8
} HLFNAMEF;
typedef enum __MIDL_IHlink_0004
{
	HLINKMISC_RELATIVE	= 0x1
} HLINKMISC;
typedef enum __MIDL_IHlink_0005
{
	HLINKSETF_TARGET	= 0x1,
	HLINKSETF_LOCATION	= 0x2
} HLINKSETF;
extern const IID IID_IHlink;
typedef struct IHlinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IHlink *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IHlink * This);
	ULONG(STDMETHODCALLTYPE * Release) (IHlink * This);
	HRESULT(STDMETHODCALLTYPE * SetHlinkSite) (IHlink * This, IHlinkSite * pihlSite, DWORD dwSiteData);
	HRESULT(STDMETHODCALLTYPE * GetHlinkSite) (IHlink * This, IHlinkSite ** ppihlSite, DWORD * pdwSiteData);
	HRESULT(STDMETHODCALLTYPE * SetMonikerReference) (IHlink * This, DWORD grfHLSETF, IMoniker * pimkTarget, LPCWSTR pwzLocation);
	HRESULT(STDMETHODCALLTYPE * GetMonikerReference) (IHlink * This, DWORD dwWhichRef, IMoniker ** ppimkTarget, LPWSTR * ppwzLocation);
	HRESULT(STDMETHODCALLTYPE * SetStringReference) (IHlink * This, DWORD grfHLSETF, LPCWSTR pwzTarget, LPCWSTR pwzLocation);
	HRESULT(STDMETHODCALLTYPE * GetStringReference) (IHlink * This, DWORD dwWhichRef, LPWSTR * ppwzTarget, LPWSTR * ppwzLocation);
	HRESULT(STDMETHODCALLTYPE * SetFriendlyName) (IHlink * This, LPCWSTR pwzFriendlyName);
	HRESULT(STDMETHODCALLTYPE * GetFriendlyName) (IHlink * This, DWORD grfHLFNAMEF, LPWSTR * ppwzFriendlyName);
	HRESULT(STDMETHODCALLTYPE * SetTargetFrameName) (IHlink * This, LPCWSTR pwzTargetFrameName);
	HRESULT(STDMETHODCALLTYPE * GetTargetFrameName) (IHlink * This, LPWSTR * ppwzTargetFrameName);
	HRESULT(STDMETHODCALLTYPE * GetMiscStatus) (IHlink * This, DWORD * pdwStatus);
	HRESULT(STDMETHODCALLTYPE * Navigate) (IHlink * This, DWORD grfHLNF, LPBC pibc, IBindStatusCallback * pibsc, IHlinkBrowseContext * pihlbc);
	HRESULT(STDMETHODCALLTYPE * SetAdditionalParams) (IHlink * This, LPCWSTR pwzAdditionalParams);
	HRESULT(STDMETHODCALLTYPE * GetAdditionalParams) (IHlink * This, LPWSTR * ppwzAdditionalParams);
	END_INTERFACE
} IHlinkVtbl;
interface IHlink
{
    CONST_VTBL struct IHlinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IHlink_QueryInterface(This,riid,ppvObject)   ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IHlink_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IHlink_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IHlink_SetHlinkSite(This,pihlSite,dwSiteData)    ( (This)->lpVtbl -> SetHlinkSite(This,pihlSite,dwSiteData) ) 
#define IHlink_GetHlinkSite(This,ppihlSite,pdwSiteData)    ( (This)->lpVtbl -> GetHlinkSite(This,ppihlSite,pdwSiteData) ) 
#define IHlink_SetMonikerReference(This,grfHLSETF,pimkTarget,pwzLocation)    ( (This)->lpVtbl -> SetMonikerReference(This,grfHLSETF,pimkTarget,pwzLocation) ) 
#define IHlink_GetMonikerReference(This,dwWhichRef,ppimkTarget,ppwzLocation)    ( (This)->lpVtbl -> GetMonikerReference(This,dwWhichRef,ppimkTarget,ppwzLocation) ) 
#define IHlink_SetStringReference(This,grfHLSETF,pwzTarget,pwzLocation)    ( (This)->lpVtbl -> SetStringReference(This,grfHLSETF,pwzTarget,pwzLocation) ) 
#define IHlink_GetStringReference(This,dwWhichRef,ppwzTarget,ppwzLocation)    ( (This)->lpVtbl -> GetStringReference(This,dwWhichRef,ppwzTarget,ppwzLocation) ) 
#define IHlink_SetFriendlyName(This,pwzFriendlyName)    ( (This)->lpVtbl -> SetFriendlyName(This,pwzFriendlyName) ) 
#define IHlink_GetFriendlyName(This,grfHLFNAMEF,ppwzFriendlyName)    ( (This)->lpVtbl -> GetFriendlyName(This,grfHLFNAMEF,ppwzFriendlyName) ) 
#define IHlink_SetTargetFrameName(This,pwzTargetFrameName)    ( (This)->lpVtbl -> SetTargetFrameName(This,pwzTargetFrameName) ) 
#define IHlink_GetTargetFrameName(This,ppwzTargetFrameName)    ( (This)->lpVtbl -> GetTargetFrameName(This,ppwzTargetFrameName) ) 
#define IHlink_GetMiscStatus(This,pdwStatus)    ( (This)->lpVtbl -> GetMiscStatus(This,pdwStatus) ) 
#define IHlink_Navigate(This,grfHLNF,pibc,pibsc,pihlbc)    ( (This)->lpVtbl -> Navigate(This,grfHLNF,pibc,pibsc,pihlbc) ) 
#define IHlink_SetAdditionalParams(This,pwzAdditionalParams)    ( (This)->lpVtbl -> SetAdditionalParams(This,pwzAdditionalParams) ) 
#define IHlink_GetAdditionalParams(This,ppwzAdditionalParams)    ( (This)->lpVtbl -> GetAdditionalParams(This,ppwzAdditionalParams) ) 
#endif
HRESULT STDMETHODCALLTYPE IHlink_RemoteGetMonikerReference_Proxy(IHlink *This, DWORD dwWhichRef, IMoniker **ppimkTarget, LPWSTR *ppwzLocation);
void __RPC_STUB IHlink_RemoteGetMonikerReference_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IHlink_RemoteGetStringReference_Proxy(IHlink *This, DWORD dwWhichRef, LPWSTR *ppwzTarget, LPWSTR *ppwzLocation);
void __RPC_STUB IHlink_RemoteGetStringReference_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif 
#endif
#ifndef _LPHLINKSITE_DEFINED
#define _LPHLINKSITE_DEFINED
extern const GUID SID_SContainer;
extern RPC_IF_HANDLE __MIDL_itf_hlink_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_hlink_0000_0001_v0_0_s_ifspec;
#ifndef __IHlinkSite_INTERFACE_DEFINED__
#define __IHlinkSite_INTERFACE_DEFINED__ 
typedef  IHlinkSite *LPHLINKSITE;
typedef 
enum __MIDL_IHlinkSite_0001
{
	HLINKWHICHMK_CONTAINER	= 1,
	HLINKWHICHMK_BASE	= 2
} HLINKWHICHMK;
extern const IID IID_IHlinkSite;

typedef struct IHlinkSiteVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IHlinkSite *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IHlinkSite * This);
	ULONG(STDMETHODCALLTYPE * Release) (IHlinkSite * This);
	HRESULT(STDMETHODCALLTYPE * QueryService) (IHlinkSite * This, DWORD dwSiteData, REFGUID guidService, REFIID riid, IUnknown ** ppiunk);
	HRESULT(STDMETHODCALLTYPE * GetMoniker) (IHlinkSite * This, DWORD dwSiteData, DWORD dwAssign, DWORD dwWhich, IMoniker ** ppimk);
	HRESULT(STDMETHODCALLTYPE * ReadyToNavigate) (IHlinkSite * This, DWORD dwSiteData, DWORD dwReserved);
	HRESULT(STDMETHODCALLTYPE * OnNavigationComplete) (IHlinkSite * This, DWORD dwSiteData, DWORD dwreserved, HRESULT hrError, LPCWSTR pwzError);
	END_INTERFACE
} IHlinkSiteVtbl;
interface IHlinkSite
{
    CONST_VTBL struct IHlinkSiteVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IHlinkSite_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IHlinkSite_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IHlinkSite_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IHlinkSite_QueryService(This,dwSiteData,guidService,riid,ppiunk)    ( (This)->lpVtbl -> QueryService(This,dwSiteData,guidService,riid,ppiunk) ) 
#define IHlinkSite_GetMoniker(This,dwSiteData,dwAssign,dwWhich,ppimk)    ( (This)->lpVtbl -> GetMoniker(This,dwSiteData,dwAssign,dwWhich,ppimk) ) 
#define IHlinkSite_ReadyToNavigate(This,dwSiteData,dwReserved)    ( (This)->lpVtbl -> ReadyToNavigate(This,dwSiteData,dwReserved) ) 
#define IHlinkSite_OnNavigationComplete(This,dwSiteData,dwreserved,hrError,pwzError)    ( (This)->lpVtbl -> OnNavigationComplete(This,dwSiteData,dwreserved,hrError,pwzError) ) 
#endif
#endif 
#endif
#ifndef _LPHLINKTARGET_DEFINED
#define _LPHLINKTARGET_DEFINED
extern RPC_IF_HANDLE __MIDL_itf_hlink_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_hlink_0000_0002_v0_0_s_ifspec;
#ifndef __IHlinkTarget_INTERFACE_DEFINED__
#define __IHlinkTarget_INTERFACE_DEFINED__ 
typedef  IHlinkTarget *LPHLINKTARGET;
extern const IID IID_IHlinkTarget;
typedef struct IHlinkTargetVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IHlinkTarget *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IHlinkTarget * This);
	ULONG(STDMETHODCALLTYPE * Release) (IHlinkTarget * This);
	HRESULT(STDMETHODCALLTYPE * SetBrowseContext) (IHlinkTarget * This, IHlinkBrowseContext * pihlbc);
	HRESULT(STDMETHODCALLTYPE * GetBrowseContext) (IHlinkTarget * This, IHlinkBrowseContext ** ppihlbc);
	HRESULT(STDMETHODCALLTYPE * Navigate) (IHlinkTarget * This, DWORD grfHLNF, LPCWSTR pwzJumpLocation);
	HRESULT(STDMETHODCALLTYPE * GetMoniker) (IHlinkTarget * This, LPCWSTR pwzLocation, DWORD dwAssign, IMoniker ** ppimkLocation);
	HRESULT(STDMETHODCALLTYPE * GetFriendlyName) (IHlinkTarget * This, LPCWSTR pwzLocation, LPWSTR * ppwzFriendlyName);
	END_INTERFACE
} IHlinkTargetVtbl;
interface IHlinkTarget
{
    CONST_VTBL struct IHlinkTargetVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IHlinkTarget_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IHlinkTarget_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IHlinkTarget_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IHlinkTarget_SetBrowseContext(This,pihlbc)    ( (This)->lpVtbl -> SetBrowseContext(This,pihlbc) ) 
#define IHlinkTarget_GetBrowseContext(This,ppihlbc)    ( (This)->lpVtbl -> GetBrowseContext(This,ppihlbc) ) 
#define IHlinkTarget_Navigate(This,grfHLNF,pwzJumpLocation)    ( (This)->lpVtbl -> Navigate(This,grfHLNF,pwzJumpLocation) ) 
#define IHlinkTarget_GetMoniker(This,pwzLocation,dwAssign,ppimkLocation)    ( (This)->lpVtbl -> GetMoniker(This,pwzLocation,dwAssign,ppimkLocation) ) 
#define IHlinkTarget_GetFriendlyName(This,pwzLocation,ppwzFriendlyName)    ( (This)->lpVtbl -> GetFriendlyName(This,pwzLocation,ppwzFriendlyName) ) 
#endif
#endif 
#endif
#ifndef _LPHLINKFRAME_DEFINED
#define _LPHLINKFRAME_DEFINED
extern const GUID SID_SHlinkFrame;
extern RPC_IF_HANDLE __MIDL_itf_hlink_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_hlink_0000_0003_v0_0_s_ifspec;
#ifndef __IHlinkFrame_INTERFACE_DEFINED__
#define __IHlinkFrame_INTERFACE_DEFINED__ 
typedef  IHlinkFrame *LPHLINKFRAME;
extern const IID IID_IHlinkFrame;
typedef struct IHlinkFrameVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IHlinkFrame *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IHlinkFrame * This);
	ULONG(STDMETHODCALLTYPE * Release) (IHlinkFrame * This);
	HRESULT(STDMETHODCALLTYPE * SetBrowseContext) (IHlinkFrame * This, IHlinkBrowseContext * pihlbc);
	HRESULT(STDMETHODCALLTYPE * GetBrowseContext) (IHlinkFrame * This, IHlinkBrowseContext ** ppihlbc);
	HRESULT(STDMETHODCALLTYPE * Navigate) (IHlinkFrame * This, DWORD grfHLNF, LPBC pbc, IBindStatusCallback * pibsc, IHlink * pihlNavigate);
	HRESULT(STDMETHODCALLTYPE * OnNavigate) (IHlinkFrame * This, DWORD grfHLNF, IMoniker * pimkTarget, LPCWSTR pwzLocation, LPCWSTR pwzFriendlyName, DWORD dwreserved);
	HRESULT(STDMETHODCALLTYPE * UpdateHlink) (IHlinkFrame * This, ULONG uHLID, IMoniker * pimkTarget, LPCWSTR pwzLocation, LPCWSTR pwzFriendlyName);
	END_INTERFACE
} IHlinkFrameVtbl;
interface IHlinkFrame
{
    CONST_VTBL struct IHlinkFrameVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IHlinkFrame_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IHlinkFrame_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IHlinkFrame_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IHlinkFrame_SetBrowseContext(This,pihlbc)    ( (This)->lpVtbl -> SetBrowseContext(This,pihlbc) ) 
#define IHlinkFrame_GetBrowseContext(This,ppihlbc)    ( (This)->lpVtbl -> GetBrowseContext(This,ppihlbc) ) 
#define IHlinkFrame_Navigate(This,grfHLNF,pbc,pibsc,pihlNavigate)    ( (This)->lpVtbl -> Navigate(This,grfHLNF,pbc,pibsc,pihlNavigate) ) 
#define IHlinkFrame_OnNavigate(This,grfHLNF,pimkTarget,pwzLocation,pwzFriendlyName,dwreserved)    ( (This)->lpVtbl -> OnNavigate(This,grfHLNF,pimkTarget,pwzLocation,pwzFriendlyName,dwreserved) ) 
#define IHlinkFrame_UpdateHlink(This,uHLID,pimkTarget,pwzLocation,pwzFriendlyName)    ( (This)->lpVtbl -> UpdateHlink(This,uHLID,pimkTarget,pwzLocation,pwzFriendlyName) ) 
#endif
#endif 
#endif
#ifndef _LPENUMHLITEM_DEFINED
#define _LPENUMHLITEM_DEFINED
extern RPC_IF_HANDLE __MIDL_itf_hlink_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_hlink_0000_0004_v0_0_s_ifspec;
#ifndef __IEnumHLITEM_INTERFACE_DEFINED__
#define __IEnumHLITEM_INTERFACE_DEFINED__ 
typedef IEnumHLITEM *LPENUMHLITEM;
typedef struct tagHLITEM
{
	ULONG uHLID;
	LPWSTR pwzFriendlyName;
} HLITEM;
typedef HLITEM *LPHLITEM;
extern const IID IID_IEnumHLITEM;
typedef struct IEnumHLITEMVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IEnumHLITEM *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumHLITEM * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumHLITEM * This);
	HRESULT(__stdcall * Next) (IEnumHLITEM * This, ULONG celt, HLITEM * rgelt, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumHLITEM * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumHLITEM * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumHLITEM * This, IEnumHLITEM ** ppienumhlitem);
	END_INTERFACE
} IEnumHLITEMVtbl;
interface IEnumHLITEM
{
    CONST_VTBL struct IEnumHLITEMVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumHLITEM_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IEnumHLITEM_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IEnumHLITEM_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IEnumHLITEM_Next(This,celt,rgelt,pceltFetched)    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) ) 
#define IEnumHLITEM_Skip(This,celt)    ( (This)->lpVtbl -> Skip(This,celt) ) 
#define IEnumHLITEM_Reset(This)    ( (This)->lpVtbl -> Reset(This) ) 
#define IEnumHLITEM_Clone(This,ppienumhlitem)    ( (This)->lpVtbl -> Clone(This,ppienumhlitem) ) 
#endif
#endif 
#endif
#ifndef _LPHLINKBROWSECONTEXT_DEFINED
#define _LPHLINKBROWSECONTEXT_DEFINED
extern RPC_IF_HANDLE __MIDL_itf_hlink_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_hlink_0000_0005_v0_0_s_ifspec;
#ifndef __IHlinkBrowseContext_INTERFACE_DEFINED__
#define __IHlinkBrowseContext_INTERFACE_DEFINED__ 
typedef IHlinkBrowseContext *LPHLINKBROWSECONTEXT;
enum __MIDL_IHlinkBrowseContext_0001
{
	HLTB_DOCKEDLEFT	= 0,
	HLTB_DOCKEDTOP	= 1,
	HLTB_DOCKEDRIGHT	= 2,
	HLTB_DOCKEDBOTTOM	= 3,
	HLTB_FLOATING	= 4
};
typedef struct _tagHLTBINFO
{
	ULONG uDockType;
	RECT rcTbPos;
} HLTBINFO;
enum __MIDL_IHlinkBrowseContext_0002
{
	HLBWIF_HASFRAMEWNDINFO	= 0x1,
	HLBWIF_HASDOCWNDINFO	= 0x2,
	HLBWIF_FRAMEWNDMAXIMIZED	= 0x4,
	HLBWIF_DOCWNDMAXIMIZED	= 0x8,
	HLBWIF_HASWEBTOOLBARINFO	= 0x10,
	HLBWIF_WEBTOOLBARHIDDEN	= 0x20
};
typedef struct _tagHLBWINFO
{
	ULONG cbSize;
	DWORD grfHLBWIF;
	RECT rcFramePos;
	RECT rcDocPos;
	HLTBINFO hltbinfo;
} HLBWINFO;
typedef HLBWINFO *LPHLBWINFO;
enum __MIDL_IHlinkBrowseContext_0003
{
	HLID_INVALID	= 0,
	HLID_PREVIOUS	= 0xffffffff,
	HLID_NEXT	= 0xfffffffe,
	HLID_CURRENT	= 0xfffffffd,
	HLID_STACKBOTTOM	= 0xfffffffc,
	HLID_STACKTOP	= 0xfffffffb
};
enum __MIDL_IHlinkBrowseContext_0004
{
	HLQF_ISVALID	= 0x1,
	HLQF_ISCURRENT	= 0x2
};
extern const IID IID_IHlinkBrowseContext;
typedef struct IHlinkBrowseContextVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IHlinkBrowseContext * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IHlinkBrowseContext * This);
	ULONG(STDMETHODCALLTYPE * Release) (IHlinkBrowseContext * This);
	HRESULT(STDMETHODCALLTYPE * Register) (IHlinkBrowseContext * This, DWORD reserved, IUnknown * piunk, IMoniker * pimk, DWORD * pdwRegister);
	HRESULT(STDMETHODCALLTYPE * GetObject) (IHlinkBrowseContext * This, IMoniker * pimk, BOOL fBindIfRootRegistered, IUnknown ** ppiunk);
	HRESULT(STDMETHODCALLTYPE * Revoke) (IHlinkBrowseContext * This, DWORD dwRegister);
	HRESULT(STDMETHODCALLTYPE * SetBrowseWindowInfo) (IHlinkBrowseContext * This, HLBWINFO * phlbwi);
	HRESULT(STDMETHODCALLTYPE * GetBrowseWindowInfo) (IHlinkBrowseContext * This, HLBWINFO * phlbwi);
	HRESULT(STDMETHODCALLTYPE * SetInitialHlink) (IHlinkBrowseContext * This, IMoniker * pimkTarget, LPCWSTR pwzLocation, LPCWSTR pwzFriendlyName);
	HRESULT(STDMETHODCALLTYPE * OnNavigateHlink) (IHlinkBrowseContext * This, DWORD grfHLNF, IMoniker * pimkTarget, LPCWSTR pwzLocation, LPCWSTR pwzFriendlyName, ULONG * puHLID);
	HRESULT(STDMETHODCALLTYPE * UpdateHlink) (IHlinkBrowseContext * This, ULONG uHLID, IMoniker * pimkTarget, LPCWSTR pwzLocation, LPCWSTR pwzFriendlyName);
	HRESULT(STDMETHODCALLTYPE * EnumNavigationStack) (IHlinkBrowseContext * This, DWORD dwReserved, DWORD grfHLFNAMEF, IEnumHLITEM ** ppienumhlitem);
	HRESULT(STDMETHODCALLTYPE * QueryHlink) (IHlinkBrowseContext * This, DWORD grfHLQF, ULONG uHLID);
	HRESULT(STDMETHODCALLTYPE * GetHlink) (IHlinkBrowseContext * This, ULONG uHLID, IHlink ** ppihl);
	HRESULT(STDMETHODCALLTYPE * SetCurrentHlink) (IHlinkBrowseContext * This, ULONG uHLID);
	HRESULT(STDMETHODCALLTYPE * Clone) (IHlinkBrowseContext * This, IUnknown * piunkOuter, REFIID riid, IUnknown ** ppiunkObj);
	HRESULT(STDMETHODCALLTYPE * Close) (IHlinkBrowseContext * This, DWORD reserved);
	END_INTERFACE
} IHlinkBrowseContextVtbl;
interface IHlinkBrowseContext
{
	CONST_VTBL struct IHlinkBrowseContextVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IHlinkBrowseContext_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IHlinkBrowseContext_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IHlinkBrowseContext_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IHlinkBrowseContext_Register(This,reserved,piunk,pimk,pdwRegister)    ( (This)->lpVtbl -> Register(This,reserved,piunk,pimk,pdwRegister) ) 
#define IHlinkBrowseContext_GetObject(This,pimk,fBindIfRootRegistered,ppiunk)    ( (This)->lpVtbl -> GetObject(This,pimk,fBindIfRootRegistered,ppiunk) ) 
#define IHlinkBrowseContext_Revoke(This,dwRegister)    ( (This)->lpVtbl -> Revoke(This,dwRegister) ) 
#define IHlinkBrowseContext_SetBrowseWindowInfo(This,phlbwi)    ( (This)->lpVtbl -> SetBrowseWindowInfo(This,phlbwi) ) 
#define IHlinkBrowseContext_GetBrowseWindowInfo(This,phlbwi)    ( (This)->lpVtbl -> GetBrowseWindowInfo(This,phlbwi) ) 
#define IHlinkBrowseContext_SetInitialHlink(This,pimkTarget,pwzLocation,pwzFriendlyName)    ( (This)->lpVtbl -> SetInitialHlink(This,pimkTarget,pwzLocation,pwzFriendlyName) ) 
#define IHlinkBrowseContext_OnNavigateHlink(This,grfHLNF,pimkTarget,pwzLocation,pwzFriendlyName,puHLID)    ( (This)->lpVtbl -> OnNavigateHlink(This,grfHLNF,pimkTarget,pwzLocation,pwzFriendlyName,puHLID) ) 
#define IHlinkBrowseContext_UpdateHlink(This,uHLID,pimkTarget,pwzLocation,pwzFriendlyName)    ( (This)->lpVtbl -> UpdateHlink(This,uHLID,pimkTarget,pwzLocation,pwzFriendlyName) ) 
#define IHlinkBrowseContext_EnumNavigationStack(This,dwReserved,grfHLFNAMEF,ppienumhlitem)    ( (This)->lpVtbl -> EnumNavigationStack(This,dwReserved,grfHLFNAMEF,ppienumhlitem) ) 
#define IHlinkBrowseContext_QueryHlink(This,grfHLQF,uHLID)    ( (This)->lpVtbl -> QueryHlink(This,grfHLQF,uHLID) ) 
#define IHlinkBrowseContext_GetHlink(This,uHLID,ppihl)    ( (This)->lpVtbl -> GetHlink(This,uHLID,ppihl) ) 
#define IHlinkBrowseContext_SetCurrentHlink(This,uHLID)    ( (This)->lpVtbl -> SetCurrentHlink(This,uHLID) ) 
#define IHlinkBrowseContext_Clone(This,piunkOuter,riid,ppiunkObj)    ( (This)->lpVtbl -> Clone(This,piunkOuter,riid,ppiunkObj) ) 
#define IHlinkBrowseContext_Close(This,reserved)    ( (This)->lpVtbl -> Close(This,reserved) ) 
#endif
#endif 
#endif
#ifndef _LPEXTENSIONSERVICES_DEFINED
#define _LPEXTENSIONSERVICES_DEFINED
extern RPC_IF_HANDLE __MIDL_itf_hlink_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_hlink_0000_0006_v0_0_s_ifspec;
#ifndef __IExtensionServices_INTERFACE_DEFINED__
#define __IExtensionServices_INTERFACE_DEFINED__ 
typedef IExtensionServices *LPEXTENSIONSERVICES;
extern const IID IID_IExtensionServices;
typedef struct IExtensionServicesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IExtensionServices * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IExtensionServices * This);
	ULONG(STDMETHODCALLTYPE * Release) (IExtensionServices * This);
	HRESULT(STDMETHODCALLTYPE * SetAdditionalHeaders) (IExtensionServices * This, LPCWSTR pwzAdditionalHeaders);
	HRESULT(STDMETHODCALLTYPE * SetAuthenticateData) (IExtensionServices * This, HWND phwnd, LPCWSTR pwzUsername, LPCWSTR pwzPassword);
	END_INTERFACE
} IExtensionServicesVtbl;
interface IExtensionServices
{
	CONST_VTBL struct IExtensionServicesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IExtensionServices_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IExtensionServices_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IExtensionServices_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IExtensionServices_SetAdditionalHeaders(This,pwzAdditionalHeaders)    ( (This)->lpVtbl -> SetAdditionalHeaders(This,pwzAdditionalHeaders) ) 
#define IExtensionServices_SetAuthenticateData(This,phwnd,pwzUsername,pwzPassword)   ( (This)->lpVtbl -> SetAuthenticateData(This,phwnd,pwzUsername,pwzPassword) ) 
#endif
#endif 
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_hlink_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_hlink_0000_0007_v0_0_s_ifspec;
HRESULT STDMETHODCALLTYPE IHlink_GetMonikerReference_Proxy(IHlink *This, DWORD dwWhichRef, IMoniker **ppimkTarget, LPWSTR *ppwzLocation);
HRESULT STDMETHODCALLTYPE IHlink_GetMonikerReference_Stub(IHlink *This, DWORD dwWhichRef, IMoniker **ppimkTarget, LPWSTR *ppwzLocation);
HRESULT STDMETHODCALLTYPE IHlink_GetStringReference_Proxy(IHlink *This, DWORD dwWhichRef, LPWSTR *ppwzTarget, LPWSTR *ppwzLocation);
HRESULT STDMETHODCALLTYPE IHlink_GetStringReference_Stub(IHlink *This, DWORD dwWhichRef, LPWSTR *ppwzTarget, LPWSTR *ppwzLocation);
#endif
