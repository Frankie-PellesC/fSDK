/*+@@file@@----------------------------------------------------------------*//*!
 \file		shdeprecated.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Sep 16 23:21:48 2016
 \date		Modified on Fri Sep 16 23:21:48 2016
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
#ifndef __shdeprecated_h__
#define __shdeprecated_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ITravelEntry_FWD_DEFINED__
#define __ITravelEntry_FWD_DEFINED__
typedef interface ITravelEntry ITravelEntry;
#endif
#ifndef __ITravelLog_FWD_DEFINED__
#define __ITravelLog_FWD_DEFINED__
typedef interface ITravelLog ITravelLog;
#endif
#ifndef __IExpDispSupportXP_FWD_DEFINED__
#define __IExpDispSupportXP_FWD_DEFINED__
typedef interface IExpDispSupportXP IExpDispSupportXP;
#endif
#ifndef __IExpDispSupport_FWD_DEFINED__
#define __IExpDispSupport_FWD_DEFINED__
typedef interface IExpDispSupport IExpDispSupport;
#endif
#ifndef __IBrowserService_FWD_DEFINED__
#define __IBrowserService_FWD_DEFINED__
typedef interface IBrowserService IBrowserService;
#endif
#ifndef __IShellService_FWD_DEFINED__
#define __IShellService_FWD_DEFINED__
typedef interface IShellService IShellService;
#endif
#ifndef __IBrowserService2_FWD_DEFINED__
#define __IBrowserService2_FWD_DEFINED__
typedef interface IBrowserService2 IBrowserService2;
#endif
#ifndef __IBrowserService3_FWD_DEFINED__
#define __IBrowserService3_FWD_DEFINED__
typedef interface IBrowserService3 IBrowserService3;
#endif
#ifndef __IBrowserService4_FWD_DEFINED__
#define __IBrowserService4_FWD_DEFINED__
typedef interface IBrowserService4 IBrowserService4;
#endif
#ifndef __ITrackShellMenu_FWD_DEFINED__
#define __ITrackShellMenu_FWD_DEFINED__
typedef interface ITrackShellMenu ITrackShellMenu;
#endif
#ifndef __TrackShellMenu_FWD_DEFINED__
#define __TrackShellMenu_FWD_DEFINED__
typedef struct TrackShellMenu TrackShellMenu;
#endif
#include <objidl.h>
#include <ocidl.h>
#include <shtypes.h>
#include <tlogstg.h>
#include <shobjidl.h>
#include <hlink.h>
#include <exdisp.h>
#define TLOG_BACK       -1
#define TLOG_CURRENT     0
#define TLOG_FORE        1
#define TLMENUF_INCLUDECURRENT      0x00000001
#define TLMENUF_CHECKCURRENT        (TLMENUF_INCLUDECURRENT | 0x00000002)
#define TLMENUF_BACK                0x00000010
#define TLMENUF_FORE                0x00000020
#define TLMENUF_BACKANDFORTH        (TLMENUF_BACK | TLMENUF_FORE | TLMENUF_INCLUDECURRENT)
extern RPC_IF_HANDLE __MIDL_itf_shdeprecated_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shdeprecated_0000_0000_v0_0_s_ifspec;
#ifndef __ITravelEntry_INTERFACE_DEFINED__
#define __ITravelEntry_INTERFACE_DEFINED__
extern const IID IID_ITravelEntry;
typedef struct ITravelEntryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITravelEntry * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITravelEntry * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITravelEntry * This);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITravelEntry * This, IUnknown * punk);
	HRESULT(STDMETHODCALLTYPE * Update) (ITravelEntry * This, IUnknown * punk, BOOL fIsLocalAnchor);
	HRESULT(STDMETHODCALLTYPE * GetPidl) (ITravelEntry * This, PIDLIST_ABSOLUTE * ppidl);
	END_INTERFACE
}  ITravelEntryVtbl;
interface ITravelEntry
{
	CONST_VTBL struct ITravelEntryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITravelEntry_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITravelEntry_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITravelEntry_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITravelEntry_Invoke(This,punk) ( (This)->lpVtbl -> Invoke(This,punk) )
#define ITravelEntry_Update(This,punk,fIsLocalAnchor) ( (This)->lpVtbl -> Update(This,punk,fIsLocalAnchor) )
#define ITravelEntry_GetPidl(This,ppidl) ( (This)->lpVtbl -> GetPidl(This,ppidl) )
#endif
#endif
#ifndef __ITravelLog_INTERFACE_DEFINED__
#define __ITravelLog_INTERFACE_DEFINED__
extern const IID IID_ITravelLog;
typedef struct ITravelLogVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITravelLog * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITravelLog * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITravelLog * This);
	HRESULT(STDMETHODCALLTYPE * AddEntry) (ITravelLog * This, IUnknown * punk, BOOL fIsLocalAnchor);
	HRESULT(STDMETHODCALLTYPE * UpdateEntry) (ITravelLog * This, IUnknown * punk, BOOL fIsLocalAnchor);
	HRESULT(STDMETHODCALLTYPE * UpdateExternal) (ITravelLog * This, IUnknown * punk, IUnknown * punkHLBrowseContext);
	HRESULT(STDMETHODCALLTYPE * Travel) (ITravelLog * This, IUnknown * punk, int iOffset);
	HRESULT(STDMETHODCALLTYPE * GetTravelEntry) (ITravelLog * This, IUnknown * punk, int iOffset, ITravelEntry ** ppte);
	HRESULT(STDMETHODCALLTYPE * FindTravelEntry) (ITravelLog * This, IUnknown * punk, PCIDLIST_ABSOLUTE pidl, ITravelEntry ** ppte);
	HRESULT(STDMETHODCALLTYPE * GetToolTipText) (ITravelLog * This, IUnknown * punk, int iOffset, int idsTemplate, LPWSTR pwzText, DWORD cchText);
	HRESULT(STDMETHODCALLTYPE * InsertMenuEntries) (ITravelLog * This, IUnknown * punk, HMENU hmenu, int nPos, int idFirst, int idLast, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * Clone) (ITravelLog * This, ITravelLog ** pptl);
	DWORD(STDMETHODCALLTYPE * CountEntries) (ITravelLog * This, IUnknown * punk);
	HRESULT(STDMETHODCALLTYPE * Revert) (ITravelLog * This);
	END_INTERFACE
}  ITravelLogVtbl;
interface ITravelLog
{
	CONST_VTBL struct ITravelLogVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITravelLog_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITravelLog_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITravelLog_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITravelLog_AddEntry(This,punk,fIsLocalAnchor) ( (This)->lpVtbl -> AddEntry(This,punk,fIsLocalAnchor) )
#define ITravelLog_UpdateEntry(This,punk,fIsLocalAnchor) ( (This)->lpVtbl -> UpdateEntry(This,punk,fIsLocalAnchor) )
#define ITravelLog_UpdateExternal(This,punk,punkHLBrowseContext) ( (This)->lpVtbl -> UpdateExternal(This,punk,punkHLBrowseContext) )
#define ITravelLog_Travel(This,punk,iOffset) ( (This)->lpVtbl -> Travel(This,punk,iOffset) )
#define ITravelLog_GetTravelEntry(This,punk,iOffset,ppte) ( (This)->lpVtbl -> GetTravelEntry(This,punk,iOffset,ppte) )
#define ITravelLog_FindTravelEntry(This,punk,pidl,ppte) ( (This)->lpVtbl -> FindTravelEntry(This,punk,pidl,ppte) )
#define ITravelLog_GetToolTipText(This,punk,iOffset,idsTemplate,pwzText,cchText) ( (This)->lpVtbl -> GetToolTipText(This,punk,iOffset,idsTemplate,pwzText,cchText) )
#define ITravelLog_InsertMenuEntries(This,punk,hmenu,nPos,idFirst,idLast,dwFlags) ( (This)->lpVtbl -> InsertMenuEntries(This,punk,hmenu,nPos,idFirst,idLast,dwFlags) )
#define ITravelLog_Clone(This,pptl) ( (This)->lpVtbl -> Clone(This,pptl) )
#define ITravelLog_CountEntries(This,punk) ( (This)->lpVtbl -> CountEntries(This,punk) )
#define ITravelLog_Revert(This) ( (This)->lpVtbl -> Revert(This) )
#endif
HRESULT STDMETHODCALLTYPE ITravelLog_RemoteGetTravelEntry_Proxy(ITravelLog *This, IUnknown *punk, int iOffset, ITravelEntry **ppte);
void __RPC_STUB ITravelLog_RemoteGetTravelEntry_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
typedef void *CIE4ConnectionPoint;
extern RPC_IF_HANDLE __MIDL_itf_shdeprecated_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shdeprecated_0000_0002_v0_0_s_ifspec;
#ifndef __IExpDispSupportXP_INTERFACE_DEFINED__
#define __IExpDispSupportXP_INTERFACE_DEFINED__
extern const IID IID_IExpDispSupportXP;
typedef struct IExpDispSupportXPVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IExpDispSupportXP * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IExpDispSupportXP * This);
	ULONG(STDMETHODCALLTYPE * Release) (IExpDispSupportXP * This);
	HRESULT(STDMETHODCALLTYPE * FindCIE4ConnectionPoint) (IExpDispSupportXP * This, REFIID riid, CIE4ConnectionPoint ** ppccp);
	HRESULT(STDMETHODCALLTYPE * OnTranslateAccelerator) (IExpDispSupportXP * This, MSG * pMsg, DWORD grfModifiers);
	HRESULT(STDMETHODCALLTYPE * OnInvoke) (IExpDispSupportXP * This, DISPID dispidMember, REFIID iid, LCID lcid, WORD wFlags, DISPPARAMS * pdispparams, VARIANT * pVarResult, EXCEPINFO * pexcepinfo, UINT * puArgErr);
	END_INTERFACE
}  IExpDispSupportXPVtbl;
interface IExpDispSupportXP
{
	CONST_VTBL struct IExpDispSupportXPVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IExpDispSupportXP_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IExpDispSupportXP_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IExpDispSupportXP_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IExpDispSupportXP_FindCIE4ConnectionPoint(This,riid,ppccp) ( (This)->lpVtbl -> FindCIE4ConnectionPoint(This,riid,ppccp) )
#define IExpDispSupportXP_OnTranslateAccelerator(This,pMsg,grfModifiers) ( (This)->lpVtbl -> OnTranslateAccelerator(This,pMsg,grfModifiers) )
#define IExpDispSupportXP_OnInvoke(This,dispidMember,iid,lcid,wFlags,pdispparams,pVarResult,pexcepinfo,puArgErr) ( (This)->lpVtbl -> OnInvoke(This,dispidMember,iid,lcid,wFlags,pdispparams,pVarResult,pexcepinfo,puArgErr) )
#endif
#endif
#ifndef __IExpDispSupport_INTERFACE_DEFINED__
#define __IExpDispSupport_INTERFACE_DEFINED__
extern const IID IID_IExpDispSupport;
typedef struct IExpDispSupportVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IExpDispSupport * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IExpDispSupport * This);
	ULONG(STDMETHODCALLTYPE * Release) (IExpDispSupport * This);
	HRESULT(STDMETHODCALLTYPE * FindConnectionPoint) (IExpDispSupport * This, REFIID riid, IConnectionPoint ** ppccp);
	HRESULT(STDMETHODCALLTYPE * OnTranslateAccelerator) (IExpDispSupport * This, MSG * pMsg, DWORD grfModifiers);
	HRESULT(STDMETHODCALLTYPE * OnInvoke) (IExpDispSupport * This, DISPID dispidMember, REFIID iid, LCID lcid, WORD wFlags, DISPPARAMS * pdispparams, VARIANT * pVarResult, EXCEPINFO * pexcepinfo, UINT * puArgErr);
	END_INTERFACE
}  IExpDispSupportVtbl;
interface IExpDispSupport
{
	CONST_VTBL struct IExpDispSupportVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IExpDispSupport_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IExpDispSupport_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IExpDispSupport_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IExpDispSupport_FindConnectionPoint(This,riid,ppccp) ( (This)->lpVtbl -> FindConnectionPoint(This,riid,ppccp) )
#define IExpDispSupport_OnTranslateAccelerator(This,pMsg,grfModifiers) ( (This)->lpVtbl -> OnTranslateAccelerator(This,pMsg,grfModifiers) )
#define IExpDispSupport_OnInvoke(This,dispidMember,iid,lcid,wFlags,pdispparams,pVarResult,pexcepinfo,puArgErr) ( (This)->lpVtbl -> OnInvoke(This,dispidMember,iid,lcid,wFlags,pdispparams,pVarResult,pexcepinfo,puArgErr) )
#endif
#endif
typedef enum tagBNSTATE
{
	BNS_NORMAL = 0,
	BNS_BEGIN_NAVIGATE = 1,
	BNS_NAVIGATE = 2
} BNSTATE;
enum __MIDL___MIDL_itf_shdeprecated_0000_0004_0001
{
	SBSC_HIDE = 0,
	SBSC_SHOW = 1,
	SBSC_TOGGLE = 2,
	SBSC_QUERY = 3
};
#define BSF_REGISTERASDROPTARGET   0x00000001
#define BSF_THEATERMODE            0x00000002
#define BSF_NOLOCALFILEWARNING     0x00000010
#define BSF_UISETBYAUTOMATION      0x00000100
#define BSF_RESIZABLE              0x00000200
#define BSF_CANMAXIMIZE            0x00000400
#define BSF_TOPBROWSER             0x00000800
#define BSF_NAVNOHISTORY           0x00001000
#define BSF_HTMLNAVCANCELED        0x00002000
#define BSF_DONTSHOWNAVCANCELPAGE  0x00004000
#define BSF_SETNAVIGATABLECODEPAGE 0x00008000
#define BSF_DELEGATEDNAVIGATION    0x00010000
#define BSF_TRUSTEDFORACTIVEX      0x00020000
#define BSF_MERGEDMENUS            0x00040000
#define BSF_FEEDNAVIGATION         0x00080000
#define BSF_FEEDSUBSCRIBED         0x00100000
#define HLNF_CALLERUNTRUSTED            0x00200000
#define HLNF_TRUSTEDFORACTIVEX          0x00400000
#define HLNF_DISABLEWINDOWRESTRICTIONS  0x00800000
#define HLNF_TRUSTFIRSTDOWNLOAD         0x01000000
#define HLNF_UNTRUSTEDFORDOWNLOAD       0x02000000
#define SHHLNF_NOAUTOSELECT             0x04000000
#define SHHLNF_WRITENOHISTORY           0x08000000
#define HLNF_EXTERNALNAVIGATE           0x10000000
#define HLNF_ALLOW_AUTONAVIGATE         0x20000000
#define HLNF_NEWWINDOWSMANAGED          0x80000000
#ifndef INTERNET_MAX_URL_LENGTH
#define INTERNET_MAX_PATH_LENGTH        2048
#define INTERNET_MAX_SCHEME_LENGTH      32
#define INTERNET_MAX_URL_LENGTH         (INTERNET_MAX_SCHEME_LENGTH  + sizeof("://") + INTERNET_MAX_PATH_LENGTH)
#endif
extern RPC_IF_HANDLE __MIDL_itf_shdeprecated_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shdeprecated_0000_0004_v0_0_s_ifspec;
#ifndef __IBrowserService_INTERFACE_DEFINED__
#define __IBrowserService_INTERFACE_DEFINED__
extern const IID IID_IBrowserService;
typedef struct IBrowserServiceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBrowserService * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBrowserService * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBrowserService * This);
	HRESULT(STDMETHODCALLTYPE * GetParentSite) (IBrowserService * This, IOleInPlaceSite ** ppipsite);
	HRESULT(STDMETHODCALLTYPE * SetTitle) (IBrowserService * This, IShellView * psv, LPCWSTR pszName);
	HRESULT(STDMETHODCALLTYPE * GetTitle) (IBrowserService * This, IShellView * psv, LPWSTR pszName, DWORD cchName);
	HRESULT(STDMETHODCALLTYPE * GetOleObject) (IBrowserService * This, IOleObject ** ppobjv);
	HRESULT(STDMETHODCALLTYPE * GetTravelLog) (IBrowserService * This, ITravelLog ** pptl);
	HRESULT(STDMETHODCALLTYPE * ShowControlWindow) (IBrowserService * This, UINT id, BOOL fShow);
	HRESULT(STDMETHODCALLTYPE * IsControlWindowShown) (IBrowserService * This, UINT id, BOOL * pfShown);
	HRESULT(STDMETHODCALLTYPE * IEGetDisplayName) (IBrowserService * This, PCIDLIST_ABSOLUTE pidl, LPWSTR pwszName, UINT uFlags);
	HRESULT(STDMETHODCALLTYPE * IEParseDisplayName) (IBrowserService * This, UINT uiCP, LPCWSTR pwszPath, PIDLIST_ABSOLUTE * ppidlOut);
	HRESULT(STDMETHODCALLTYPE * DisplayParseError) (IBrowserService * This, HRESULT hres, LPCWSTR pwszPath);
	HRESULT(STDMETHODCALLTYPE * NavigateToPidl) (IBrowserService * This, PCIDLIST_ABSOLUTE pidl, DWORD grfHLNF);
	HRESULT(STDMETHODCALLTYPE * SetNavigateState) (IBrowserService * This, BNSTATE bnstate);
	HRESULT(STDMETHODCALLTYPE * GetNavigateState) (IBrowserService * This, BNSTATE * pbnstate);
	HRESULT(STDMETHODCALLTYPE * NotifyRedirect) (IBrowserService * This, IShellView * psv, PCIDLIST_ABSOLUTE pidl, BOOL * pfDidBrowse);
	HRESULT(STDMETHODCALLTYPE * UpdateWindowList) (IBrowserService * This);
	HRESULT(STDMETHODCALLTYPE * UpdateBackForwardState) (IBrowserService * This);
	HRESULT(STDMETHODCALLTYPE * SetFlags) (IBrowserService * This, DWORD dwFlags, DWORD dwFlagMask);
	HRESULT(STDMETHODCALLTYPE * GetFlags) (IBrowserService * This, DWORD * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * CanNavigateNow) (IBrowserService * This);
	HRESULT(STDMETHODCALLTYPE * GetPidl) (IBrowserService * This, PIDLIST_ABSOLUTE * ppidl);
	HRESULT(STDMETHODCALLTYPE * SetReferrer) (IBrowserService * This, PCIDLIST_ABSOLUTE pidl);
	DWORD(STDMETHODCALLTYPE * GetBrowserIndex) (IBrowserService * This);
	HRESULT(STDMETHODCALLTYPE * GetBrowserByIndex) (IBrowserService * This, DWORD dwID, IUnknown ** ppunk);
	HRESULT(STDMETHODCALLTYPE * GetHistoryObject) (IBrowserService * This, IOleObject ** ppole, IStream ** pstm, IBindCtx ** ppbc);
	HRESULT(STDMETHODCALLTYPE * SetHistoryObject) (IBrowserService * This, IOleObject * pole, BOOL fIsLocalAnchor);
	HRESULT(STDMETHODCALLTYPE * CacheOLEServer) (IBrowserService * This, IOleObject * pole);
	HRESULT(STDMETHODCALLTYPE * GetSetCodePage) (IBrowserService * This, VARIANT * pvarIn, VARIANT * pvarOut);
	HRESULT(STDMETHODCALLTYPE * OnHttpEquiv) (IBrowserService * This, IShellView * psv, BOOL fDone, VARIANT * pvarargIn, VARIANT * pvarargOut);
	HRESULT(STDMETHODCALLTYPE * GetPalette) (IBrowserService * This, HPALETTE * hpal);
	HRESULT(STDMETHODCALLTYPE * RegisterWindow) (IBrowserService * This, BOOL fForceRegister, int swc);
	END_INTERFACE
}  IBrowserServiceVtbl;
interface IBrowserService
{
	CONST_VTBL struct IBrowserServiceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBrowserService_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBrowserService_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IBrowserService_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IBrowserService_GetParentSite(This,ppipsite) ( (This)->lpVtbl -> GetParentSite(This,ppipsite) )
#define IBrowserService_SetTitle(This,psv,pszName) ( (This)->lpVtbl -> SetTitle(This,psv,pszName) )
#define IBrowserService_GetTitle(This,psv,pszName,cchName) ( (This)->lpVtbl -> GetTitle(This,psv,pszName,cchName) )
#define IBrowserService_GetOleObject(This,ppobjv) ( (This)->lpVtbl -> GetOleObject(This,ppobjv) )
#define IBrowserService_GetTravelLog(This,pptl) ( (This)->lpVtbl -> GetTravelLog(This,pptl) )
#define IBrowserService_ShowControlWindow(This,id,fShow) ( (This)->lpVtbl -> ShowControlWindow(This,id,fShow) )
#define IBrowserService_IsControlWindowShown(This,id,pfShown) ( (This)->lpVtbl -> IsControlWindowShown(This,id,pfShown) )
#define IBrowserService_IEGetDisplayName(This,pidl,pwszName,uFlags) ( (This)->lpVtbl -> IEGetDisplayName(This,pidl,pwszName,uFlags) )
#define IBrowserService_IEParseDisplayName(This,uiCP,pwszPath,ppidlOut) ( (This)->lpVtbl -> IEParseDisplayName(This,uiCP,pwszPath,ppidlOut) )
#define IBrowserService_DisplayParseError(This,hres,pwszPath) ( (This)->lpVtbl -> DisplayParseError(This,hres,pwszPath) )
#define IBrowserService_NavigateToPidl(This,pidl,grfHLNF) ( (This)->lpVtbl -> NavigateToPidl(This,pidl,grfHLNF) )
#define IBrowserService_SetNavigateState(This,bnstate) ( (This)->lpVtbl -> SetNavigateState(This,bnstate) )
#define IBrowserService_GetNavigateState(This,pbnstate) ( (This)->lpVtbl -> GetNavigateState(This,pbnstate) )
#define IBrowserService_NotifyRedirect(This,psv,pidl,pfDidBrowse) ( (This)->lpVtbl -> NotifyRedirect(This,psv,pidl,pfDidBrowse) )
#define IBrowserService_UpdateWindowList(This) ( (This)->lpVtbl -> UpdateWindowList(This) )
#define IBrowserService_UpdateBackForwardState(This) ( (This)->lpVtbl -> UpdateBackForwardState(This) )
#define IBrowserService_SetFlags(This,dwFlags,dwFlagMask) ( (This)->lpVtbl -> SetFlags(This,dwFlags,dwFlagMask) )
#define IBrowserService_GetFlags(This,pdwFlags) ( (This)->lpVtbl -> GetFlags(This,pdwFlags) )
#define IBrowserService_CanNavigateNow(This) ( (This)->lpVtbl -> CanNavigateNow(This) )
#define IBrowserService_GetPidl(This,ppidl) ( (This)->lpVtbl -> GetPidl(This,ppidl) )
#define IBrowserService_SetReferrer(This,pidl) ( (This)->lpVtbl -> SetReferrer(This,pidl) )
#define IBrowserService_GetBrowserIndex(This) ( (This)->lpVtbl -> GetBrowserIndex(This) )
#define IBrowserService_GetBrowserByIndex(This,dwID,ppunk) ( (This)->lpVtbl -> GetBrowserByIndex(This,dwID,ppunk) )
#define IBrowserService_GetHistoryObject(This,ppole,pstm,ppbc) ( (This)->lpVtbl -> GetHistoryObject(This,ppole,pstm,ppbc) )
#define IBrowserService_SetHistoryObject(This,pole,fIsLocalAnchor) ( (This)->lpVtbl -> SetHistoryObject(This,pole,fIsLocalAnchor) )
#define IBrowserService_CacheOLEServer(This,pole) ( (This)->lpVtbl -> CacheOLEServer(This,pole) )
#define IBrowserService_GetSetCodePage(This,pvarIn,pvarOut) ( (This)->lpVtbl -> GetSetCodePage(This,pvarIn,pvarOut) )
#define IBrowserService_OnHttpEquiv(This,psv,fDone,pvarargIn,pvarargOut) ( (This)->lpVtbl -> OnHttpEquiv(This,psv,fDone,pvarargIn,pvarargOut) )
#define IBrowserService_GetPalette(This,hpal) ( (This)->lpVtbl -> GetPalette(This,hpal) )
#define IBrowserService_RegisterWindow(This,fForceRegister,swc) ( (This)->lpVtbl -> RegisterWindow(This,fForceRegister,swc) )
#endif
#endif
#ifndef __IShellService_INTERFACE_DEFINED__
#define __IShellService_INTERFACE_DEFINED__
extern const IID IID_IShellService;
typedef struct IShellServiceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IShellService * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IShellService * This);
	ULONG(STDMETHODCALLTYPE * Release) (IShellService * This);
	HRESULT(STDMETHODCALLTYPE * SetOwner) (IShellService * This, IUnknown * punkOwner);
	END_INTERFACE
}  IShellServiceVtbl;
interface IShellService
{
	CONST_VTBL struct IShellServiceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IShellService_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IShellService_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IShellService_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IShellService_SetOwner(This,punkOwner) ( (This)->lpVtbl -> SetOwner(This,punkOwner) )
#endif
#endif
enum __MIDL___MIDL_itf_shdeprecated_0000_0006_0001
{
	SECURELOCK_NOCHANGE = -1,
	SECURELOCK_SET_UNSECURE = 0,
	SECURELOCK_SET_MIXED = (SECURELOCK_SET_UNSECURE + 1),
	SECURELOCK_SET_SECUREUNKNOWNBIT = (SECURELOCK_SET_MIXED + 1),
	SECURELOCK_SET_SECURE40BIT = (SECURELOCK_SET_SECUREUNKNOWNBIT + 1),
	SECURELOCK_SET_SECURE56BIT = (SECURELOCK_SET_SECURE40BIT + 1),
	SECURELOCK_SET_FORTEZZA = (SECURELOCK_SET_SECURE56BIT + 1),
	SECURELOCK_SET_SECURE128BIT = (SECURELOCK_SET_FORTEZZA + 1),
	SECURELOCK_FIRSTSUGGEST = (SECURELOCK_SET_SECURE128BIT + 1),
	SECURELOCK_SUGGEST_UNSECURE = SECURELOCK_FIRSTSUGGEST,
	SECURELOCK_SUGGEST_MIXED = (SECURELOCK_SUGGEST_UNSECURE + 1),
	SECURELOCK_SUGGEST_SECUREUNKNOWNBIT = (SECURELOCK_SUGGEST_MIXED + 1),
	SECURELOCK_SUGGEST_SECURE40BIT = (SECURELOCK_SUGGEST_SECUREUNKNOWNBIT + 1),
	SECURELOCK_SUGGEST_SECURE56BIT = (SECURELOCK_SUGGEST_SECURE40BIT + 1),
	SECURELOCK_SUGGEST_FORTEZZA = (SECURELOCK_SUGGEST_SECURE56BIT + 1),
	SECURELOCK_SUGGEST_SECURE128BIT = (SECURELOCK_SUGGEST_FORTEZZA + 1)
};
#pragma warning(push)
#pragma warning(disable:4214)
#include <pshpack8.h>
typedef struct __MIDL___MIDL_itf_shdeprecated_0000_0006_0002
{
	HWND _hwnd;
	ITravelLog *_ptl;
	IHlinkFrame *_phlf;
	IWebBrowser2 *_pautoWB2;
	IExpDispSupportXP *_pautoEDS;
	IShellService *_pautoSS;
	int _eSecureLockIcon;
	DWORD _fCreatingViewWindow:1;
	UINT _uActivateState;
	PCIDLIST_ABSOLUTE _pidlViewState;
	IOleCommandTarget *_pctView;
	PIDLIST_ABSOLUTE _pidlCur;
	IShellView *_psv;
	IShellFolder *_psf;
	HWND _hwndView;
	LPWSTR _pszTitleCur;
	PIDLIST_ABSOLUTE _pidlPending;
	IShellView *_psvPending;
	IShellFolder *_psfPending;
	HWND _hwndViewPending;
	LPWSTR _pszTitlePending;
	BOOL _fIsViewMSHTML;
	BOOL _fPrivacyImpacted;
	CLSID _clsidView;
	CLSID _clsidViewPending;
	HWND _hwndFrame;
}
BASEBROWSERDATAXP;
typedef struct __MIDL___MIDL_itf_shdeprecated_0000_0006_0002 *LPBASEBROWSERDATAXP;
typedef struct __MIDL___MIDL_itf_shdeprecated_0000_0006_0003
{
	HWND _hwnd;
	ITravelLog *_ptl;
	IHlinkFrame *_phlf;
	IWebBrowser2 *_pautoWB2;
	IExpDispSupport *_pautoEDS;
	IShellService *_pautoSS;
	int _eSecureLockIcon;
	DWORD _fCreatingViewWindow:1;
	UINT _uActivateState;
	PCIDLIST_ABSOLUTE _pidlViewState;
	IOleCommandTarget *_pctView;
	PIDLIST_ABSOLUTE _pidlCur;
	IShellView *_psv;
	IShellFolder *_psf;
	HWND _hwndView;
	LPWSTR _pszTitleCur;
	PIDLIST_ABSOLUTE _pidlPending;
	IShellView *_psvPending;
	IShellFolder *_psfPending;
	HWND _hwndViewPending;
	LPWSTR _pszTitlePending;
	BOOL _fIsViewMSHTML;
	BOOL _fPrivacyImpacted;
	CLSID _clsidView;
	CLSID _clsidViewPending;
	HWND _hwndFrame;
	LONG _lPhishingFilterStatus;
}
BASEBROWSERDATALH;
typedef struct __MIDL___MIDL_itf_shdeprecated_0000_0006_0003 *LPBASEBROWSERDATALH;
#if 0
typedef BASEBROWSERDATALH BASEBROWSERDATA;
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA) || (_WIN32_IE >= _WIN32_IE_IE70)
typedef BASEBROWSERDATALH BASEBROWSERDATA;
#else
typedef BASEBROWSERDATAXP BASEBROWSERDATA;
#endif
typedef const BASEBROWSERDATA *LPCBASEBROWSERDATA;
typedef BASEBROWSERDATA *LPBASEBROWSERDATA;
#pragma warning(pop)
#define VIEW_PRIORITY_RESTRICTED    0x00000070
#define VIEW_PRIORITY_CACHEHIT      0x00000050
#define VIEW_PRIORITY_STALECACHEHIT 0x00000045
#define VIEW_PRIORITY_USEASDEFAULT  0x00000043
#define VIEW_PRIORITY_SHELLEXT      0x00000040
#define VIEW_PRIORITY_CACHEMISS     0x00000030
#define VIEW_PRIORITY_INHERIT       0x00000020
#define VIEW_PRIORITY_SHELLEXT_ASBACKUP 0x0015
#define VIEW_PRIORITY_DESPERATE     0x00000010
#define VIEW_PRIORITY_NONE          0x00000000
typedef struct tagFolderSetData
{
	FOLDERSETTINGS _fs;
	SHELLVIEWID _vidRestore;
	DWORD _dwViewPriority;
}
FOLDERSETDATA;
typedef struct tagFolderSetData *LPFOLDERSETDATA;
#if !defined(HMONITOR_DECLARED) && !defined(HMONITOR) && (WINVER < 0x0500)
#define HMONITOR_DECLARED
#if 0
typedef HANDLE HMONITOR;
#endif
DECLARE_HANDLE(HMONITOR);
#endif
#if 0
typedef void *LPCREATESTRUCT;
typedef void NMHDR;
#endif
typedef struct SToolbarItem
{
	IDockingWindow *ptbar;
	BORDERWIDTHS rcBorderTool;
	LPWSTR pwszItem;
	BOOL fShow;
	HMONITOR hMon;
}
TOOLBARITEM;
typedef struct SToolbarItem *LPTOOLBARITEM;
#define ITB_VIEW        ((UINT)-1)
#include <poppack.h>
extern RPC_IF_HANDLE __MIDL_itf_shdeprecated_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shdeprecated_0000_0006_v0_0_s_ifspec;
#ifndef __IBrowserService2_INTERFACE_DEFINED__
#define __IBrowserService2_INTERFACE_DEFINED__
extern const IID IID_IBrowserService2;
typedef struct IBrowserService2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IBrowserService2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBrowserService2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBrowserService2 * This);
	HRESULT(STDMETHODCALLTYPE * GetParentSite) (IBrowserService2 * This, IOleInPlaceSite ** ppipsite);
	HRESULT(STDMETHODCALLTYPE * SetTitle) (IBrowserService2 * This, IShellView * psv, LPCWSTR pszName);
	HRESULT(STDMETHODCALLTYPE * GetTitle) (IBrowserService2 * This, IShellView * psv, LPWSTR pszName, DWORD cchName);
	HRESULT(STDMETHODCALLTYPE * GetOleObject) (IBrowserService2 * This, IOleObject ** ppobjv);
	HRESULT(STDMETHODCALLTYPE * GetTravelLog) (IBrowserService2 * This, ITravelLog ** pptl);
	HRESULT(STDMETHODCALLTYPE * ShowControlWindow) (IBrowserService2 * This, UINT id, BOOL fShow);
	HRESULT(STDMETHODCALLTYPE * IsControlWindowShown) (IBrowserService2 * This, UINT id, BOOL * pfShown);
	HRESULT(STDMETHODCALLTYPE * IEGetDisplayName) (IBrowserService2 * This, PCIDLIST_ABSOLUTE pidl, LPWSTR pwszName, UINT uFlags);
	HRESULT(STDMETHODCALLTYPE * IEParseDisplayName) (IBrowserService2 * This, UINT uiCP, LPCWSTR pwszPath, PIDLIST_ABSOLUTE * ppidlOut);
	HRESULT(STDMETHODCALLTYPE * DisplayParseError) (IBrowserService2 * This, HRESULT hres, LPCWSTR pwszPath);
	HRESULT(STDMETHODCALLTYPE * NavigateToPidl) (IBrowserService2 * This, PCIDLIST_ABSOLUTE pidl, DWORD grfHLNF);
	HRESULT(STDMETHODCALLTYPE * SetNavigateState) (IBrowserService2 * This, BNSTATE bnstate);
	HRESULT(STDMETHODCALLTYPE * GetNavigateState) (IBrowserService2 * This, BNSTATE * pbnstate);
	HRESULT(STDMETHODCALLTYPE * NotifyRedirect) (IBrowserService2 * This, IShellView * psv, PCIDLIST_ABSOLUTE pidl, BOOL * pfDidBrowse);
	HRESULT(STDMETHODCALLTYPE * UpdateWindowList) (IBrowserService2 * This);
	HRESULT(STDMETHODCALLTYPE * UpdateBackForwardState) (IBrowserService2 * This);
	HRESULT(STDMETHODCALLTYPE * SetFlags) (IBrowserService2 * This, DWORD dwFlags, DWORD dwFlagMask);
	HRESULT(STDMETHODCALLTYPE * GetFlags) (IBrowserService2 * This, DWORD * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * CanNavigateNow) (IBrowserService2 * This);
	HRESULT(STDMETHODCALLTYPE * GetPidl) (IBrowserService2 * This, PIDLIST_ABSOLUTE * ppidl);
	HRESULT(STDMETHODCALLTYPE * SetReferrer) (IBrowserService2 * This, PCIDLIST_ABSOLUTE pidl);
	DWORD(STDMETHODCALLTYPE * GetBrowserIndex) (IBrowserService2 * This);
	HRESULT(STDMETHODCALLTYPE * GetBrowserByIndex) (IBrowserService2 * This, DWORD dwID, IUnknown ** ppunk);
	HRESULT(STDMETHODCALLTYPE * GetHistoryObject) (IBrowserService2 * This, IOleObject ** ppole, IStream ** pstm, IBindCtx ** ppbc);
	HRESULT(STDMETHODCALLTYPE * SetHistoryObject) (IBrowserService2 * This, IOleObject * pole, BOOL fIsLocalAnchor);
	HRESULT(STDMETHODCALLTYPE * CacheOLEServer) (IBrowserService2 * This, IOleObject * pole);
	HRESULT(STDMETHODCALLTYPE * GetSetCodePage) (IBrowserService2 * This, VARIANT * pvarIn, VARIANT * pvarOut);
	HRESULT(STDMETHODCALLTYPE * OnHttpEquiv) (IBrowserService2 * This, IShellView * psv, BOOL fDone, VARIANT * pvarargIn, VARIANT * pvarargOut);
	HRESULT(STDMETHODCALLTYPE * GetPalette) (IBrowserService2 * This, HPALETTE * hpal);
	HRESULT(STDMETHODCALLTYPE * RegisterWindow) (IBrowserService2 * This, BOOL fForceRegister, int swc);
	LRESULT(STDMETHODCALLTYPE * WndProcBS) (IBrowserService2 * This, HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
	HRESULT(STDMETHODCALLTYPE * SetAsDefFolderSettings) (IBrowserService2 * This);
	HRESULT(STDMETHODCALLTYPE * GetViewRect) (IBrowserService2 * This, RECT * prc);
	HRESULT(STDMETHODCALLTYPE * OnSize) (IBrowserService2 * This, WPARAM wParam);
	HRESULT(STDMETHODCALLTYPE * OnCreate) (IBrowserService2 * This, struct tagCREATESTRUCTW * pcs);
	LRESULT(STDMETHODCALLTYPE * OnCommand) (IBrowserService2 * This, WPARAM wParam, LPARAM lParam);
	HRESULT(STDMETHODCALLTYPE * OnDestroy) (IBrowserService2 * This);
	LRESULT(STDMETHODCALLTYPE * OnNotify) (IBrowserService2 * This, struct tagNMHDR * pnm);
	HRESULT(STDMETHODCALLTYPE * OnSetFocus) (IBrowserService2 * This);
	HRESULT(STDMETHODCALLTYPE * OnFrameWindowActivateBS) (IBrowserService2 * This, BOOL fActive);
	HRESULT(STDMETHODCALLTYPE * ReleaseShellView) (IBrowserService2 * This);
	HRESULT(STDMETHODCALLTYPE * ActivatePendingView) (IBrowserService2 * This);
	HRESULT(STDMETHODCALLTYPE * CreateViewWindow) (IBrowserService2 * This, IShellView * psvNew, IShellView * psvOld, LPRECT prcView, HWND * phwnd);
	HRESULT(STDMETHODCALLTYPE * CreateBrowserPropSheetExt) (IBrowserService2 * This, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * GetViewWindow) (IBrowserService2 * This, HWND * phwndView);
	HRESULT(STDMETHODCALLTYPE * GetBaseBrowserData) (IBrowserService2 * This, LPCBASEBROWSERDATA * pbbd);
	LPBASEBROWSERDATA(STDMETHODCALLTYPE * PutBaseBrowserData) (IBrowserService2 * This);
	HRESULT(STDMETHODCALLTYPE * InitializeTravelLog) (IBrowserService2 * This, ITravelLog * ptl, DWORD dw);
	HRESULT(STDMETHODCALLTYPE * SetTopBrowser) (IBrowserService2 * This);
	HRESULT(STDMETHODCALLTYPE * Offline) (IBrowserService2 * This, int iCmd);
	HRESULT(STDMETHODCALLTYPE * AllowViewResize) (IBrowserService2 * This, BOOL f);
	HRESULT(STDMETHODCALLTYPE * SetActivateState) (IBrowserService2 * This, UINT u);
	HRESULT(STDMETHODCALLTYPE * UpdateSecureLockIcon) (IBrowserService2 * This, int eSecureLock);
	HRESULT(STDMETHODCALLTYPE * InitializeDownloadManager) (IBrowserService2 * This);
	HRESULT(STDMETHODCALLTYPE * InitializeTransitionSite) (IBrowserService2 * This);
	HRESULT(STDMETHODCALLTYPE * _Initialize) (IBrowserService2 * This, HWND hwnd, IUnknown * pauto);
	HRESULT(STDMETHODCALLTYPE * _CancelPendingNavigationAsync) (IBrowserService2 * This);
	HRESULT(STDMETHODCALLTYPE * _CancelPendingView) (IBrowserService2 * This);
	HRESULT(STDMETHODCALLTYPE * _MaySaveChanges) (IBrowserService2 * This);
	HRESULT(STDMETHODCALLTYPE * _PauseOrResumeView) (IBrowserService2 * This, BOOL fPaused);
	HRESULT(STDMETHODCALLTYPE * _DisableModeless) (IBrowserService2 * This);
	HRESULT(STDMETHODCALLTYPE * _NavigateToPidl) (IBrowserService2 * This, PCIDLIST_ABSOLUTE pidl, DWORD grfHLNF, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * _TryShell2Rename) (IBrowserService2 * This, IShellView * psv, PCIDLIST_ABSOLUTE pidlNew);
	HRESULT(STDMETHODCALLTYPE * _SwitchActivationNow) (IBrowserService2 * This);
	HRESULT(STDMETHODCALLTYPE * _ExecChildren) (IBrowserService2 * This, IUnknown * punkBar, BOOL fBroadcast, const GUID * pguidCmdGroup, DWORD nCmdID, DWORD nCmdexecopt, VARIANTARG * pvarargIn, VARIANTARG * pvarargOut);
	HRESULT(STDMETHODCALLTYPE * _SendChildren) (IBrowserService2 * This, HWND hwndBar, BOOL fBroadcast, UINT uMsg, WPARAM wParam, LPARAM lParam);
	HRESULT(STDMETHODCALLTYPE * GetFolderSetData) (IBrowserService2 * This, struct tagFolderSetData * pfsd);
	HRESULT(STDMETHODCALLTYPE * _OnFocusChange) (IBrowserService2 * This, UINT itb);
	HRESULT(STDMETHODCALLTYPE * v_ShowHideChildWindows) (IBrowserService2 * This, BOOL fChildOnly);
	UINT(STDMETHODCALLTYPE * _get_itbLastFocus) (IBrowserService2 * This);
	HRESULT(STDMETHODCALLTYPE * _put_itbLastFocus) (IBrowserService2 * This, UINT itbLastFocus);
	HRESULT(STDMETHODCALLTYPE * _UIActivateView) (IBrowserService2 * This, UINT uState);
	HRESULT(STDMETHODCALLTYPE * _GetViewBorderRect) (IBrowserService2 * This, RECT * prc);
	HRESULT(STDMETHODCALLTYPE * _UpdateViewRectSize) (IBrowserService2 * This);
	HRESULT(STDMETHODCALLTYPE * _ResizeNextBorder) (IBrowserService2 * This, UINT itb);
	HRESULT(STDMETHODCALLTYPE * _ResizeView) (IBrowserService2 * This);
	HRESULT(STDMETHODCALLTYPE * _GetEffectiveClientArea) (IBrowserService2 * This, LPRECT lprectBorder, HMONITOR hmon);
	IStream *(STDMETHODCALLTYPE *v_GetViewStream) (IBrowserService2 *This, PCIDLIST_ABSOLUTE pidl, DWORD grfMode, LPCWSTR pwszName);
	LRESULT(STDMETHODCALLTYPE * ForwardViewMsg) (IBrowserService2 * This, UINT uMsg, WPARAM wParam, LPARAM lParam);
	HRESULT(STDMETHODCALLTYPE * SetAcceleratorMenu) (IBrowserService2 * This, HACCEL hacc);
	int (STDMETHODCALLTYPE *_GetToolbarCount) (IBrowserService2 *This);
	LPTOOLBARITEM(STDMETHODCALLTYPE * _GetToolbarItem) (IBrowserService2 * This, int itb);
	HRESULT(STDMETHODCALLTYPE * _SaveToolbars) (IBrowserService2 * This, IStream * pstm);
	HRESULT(STDMETHODCALLTYPE * _LoadToolbars) (IBrowserService2 * This, IStream * pstm);
	HRESULT(STDMETHODCALLTYPE * _CloseAndReleaseToolbars) (IBrowserService2 * This, BOOL fClose);
	HRESULT(STDMETHODCALLTYPE * v_MayGetNextToolbarFocus) (IBrowserService2 * This, LPMSG lpMsg, UINT itbNext, int citb, LPTOOLBARITEM * pptbi, HWND * phwnd);
	HRESULT(STDMETHODCALLTYPE * _ResizeNextBorderHelper) (IBrowserService2 * This, UINT itb, BOOL bUseHmonitor);
	UINT(STDMETHODCALLTYPE * _FindTBar) (IBrowserService2 * This, IUnknown * punkSrc);
	HRESULT(STDMETHODCALLTYPE * _SetFocus) (IBrowserService2 * This, LPTOOLBARITEM ptbi, HWND hwnd, LPMSG lpMsg);
	HRESULT(STDMETHODCALLTYPE * v_MayTranslateAccelerator) (IBrowserService2 * This, MSG * pmsg);
	HRESULT(STDMETHODCALLTYPE * _GetBorderDWHelper) (IBrowserService2 * This, IUnknown * punkSrc, LPRECT lprectBorder, BOOL bUseHmonitor);
	HRESULT(STDMETHODCALLTYPE * v_CheckZoneCrossing) (IBrowserService2 * This, PCIDLIST_ABSOLUTE pidl);
	END_INTERFACE
}  IBrowserService2Vtbl;
interface IBrowserService2
{
	CONST_VTBL struct IBrowserService2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBrowserService2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBrowserService2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IBrowserService2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IBrowserService2_GetParentSite(This,ppipsite) ( (This)->lpVtbl -> GetParentSite(This,ppipsite) )
#define IBrowserService2_SetTitle(This,psv,pszName) ( (This)->lpVtbl -> SetTitle(This,psv,pszName) )
#define IBrowserService2_GetTitle(This,psv,pszName,cchName) ( (This)->lpVtbl -> GetTitle(This,psv,pszName,cchName) )
#define IBrowserService2_GetOleObject(This,ppobjv) ( (This)->lpVtbl -> GetOleObject(This,ppobjv) )
#define IBrowserService2_GetTravelLog(This,pptl) ( (This)->lpVtbl -> GetTravelLog(This,pptl) )
#define IBrowserService2_ShowControlWindow(This,id,fShow) ( (This)->lpVtbl -> ShowControlWindow(This,id,fShow) )
#define IBrowserService2_IsControlWindowShown(This,id,pfShown) ( (This)->lpVtbl -> IsControlWindowShown(This,id,pfShown) )
#define IBrowserService2_IEGetDisplayName(This,pidl,pwszName,uFlags) ( (This)->lpVtbl -> IEGetDisplayName(This,pidl,pwszName,uFlags) )
#define IBrowserService2_IEParseDisplayName(This,uiCP,pwszPath,ppidlOut) ( (This)->lpVtbl -> IEParseDisplayName(This,uiCP,pwszPath,ppidlOut) )
#define IBrowserService2_DisplayParseError(This,hres,pwszPath) ( (This)->lpVtbl -> DisplayParseError(This,hres,pwszPath) )
#define IBrowserService2_NavigateToPidl(This,pidl,grfHLNF) ( (This)->lpVtbl -> NavigateToPidl(This,pidl,grfHLNF) )
#define IBrowserService2_SetNavigateState(This,bnstate) ( (This)->lpVtbl -> SetNavigateState(This,bnstate) )
#define IBrowserService2_GetNavigateState(This,pbnstate) ( (This)->lpVtbl -> GetNavigateState(This,pbnstate) )
#define IBrowserService2_NotifyRedirect(This,psv,pidl,pfDidBrowse) ( (This)->lpVtbl -> NotifyRedirect(This,psv,pidl,pfDidBrowse) )
#define IBrowserService2_UpdateWindowList(This) ( (This)->lpVtbl -> UpdateWindowList(This) )
#define IBrowserService2_UpdateBackForwardState(This) ( (This)->lpVtbl -> UpdateBackForwardState(This) )
#define IBrowserService2_SetFlags(This,dwFlags,dwFlagMask) ( (This)->lpVtbl -> SetFlags(This,dwFlags,dwFlagMask) )
#define IBrowserService2_GetFlags(This,pdwFlags) ( (This)->lpVtbl -> GetFlags(This,pdwFlags) )
#define IBrowserService2_CanNavigateNow(This) ( (This)->lpVtbl -> CanNavigateNow(This) )
#define IBrowserService2_GetPidl(This,ppidl) ( (This)->lpVtbl -> GetPidl(This,ppidl) )
#define IBrowserService2_SetReferrer(This,pidl) ( (This)->lpVtbl -> SetReferrer(This,pidl) )
#define IBrowserService2_GetBrowserIndex(This) ( (This)->lpVtbl -> GetBrowserIndex(This) )
#define IBrowserService2_GetBrowserByIndex(This,dwID,ppunk) ( (This)->lpVtbl -> GetBrowserByIndex(This,dwID,ppunk) )
#define IBrowserService2_GetHistoryObject(This,ppole,pstm,ppbc) ( (This)->lpVtbl -> GetHistoryObject(This,ppole,pstm,ppbc) )
#define IBrowserService2_SetHistoryObject(This,pole,fIsLocalAnchor) ( (This)->lpVtbl -> SetHistoryObject(This,pole,fIsLocalAnchor) )
#define IBrowserService2_CacheOLEServer(This,pole) ( (This)->lpVtbl -> CacheOLEServer(This,pole) )
#define IBrowserService2_GetSetCodePage(This,pvarIn,pvarOut) ( (This)->lpVtbl -> GetSetCodePage(This,pvarIn,pvarOut) )
#define IBrowserService2_OnHttpEquiv(This,psv,fDone,pvarargIn,pvarargOut) ( (This)->lpVtbl -> OnHttpEquiv(This,psv,fDone,pvarargIn,pvarargOut) )
#define IBrowserService2_GetPalette(This,hpal) ( (This)->lpVtbl -> GetPalette(This,hpal) )
#define IBrowserService2_RegisterWindow(This,fForceRegister,swc) ( (This)->lpVtbl -> RegisterWindow(This,fForceRegister,swc) )
#define IBrowserService2_WndProcBS(This,hwnd,uMsg,wParam,lParam) ( (This)->lpVtbl -> WndProcBS(This,hwnd,uMsg,wParam,lParam) )
#define IBrowserService2_SetAsDefFolderSettings(This) ( (This)->lpVtbl -> SetAsDefFolderSettings(This) )
#define IBrowserService2_GetViewRect(This,prc) ( (This)->lpVtbl -> GetViewRect(This,prc) )
#define IBrowserService2_OnSize(This,wParam) ( (This)->lpVtbl -> OnSize(This,wParam) )
#define IBrowserService2_OnCreate(This,pcs) ( (This)->lpVtbl -> OnCreate(This,pcs) )
#define IBrowserService2_OnCommand(This,wParam,lParam) ( (This)->lpVtbl -> OnCommand(This,wParam,lParam) )
#define IBrowserService2_OnDestroy(This) ( (This)->lpVtbl -> OnDestroy(This) )
#define IBrowserService2_OnNotify(This,pnm) ( (This)->lpVtbl -> OnNotify(This,pnm) )
#define IBrowserService2_OnSetFocus(This) ( (This)->lpVtbl -> OnSetFocus(This) )
#define IBrowserService2_OnFrameWindowActivateBS(This,fActive) ( (This)->lpVtbl -> OnFrameWindowActivateBS(This,fActive) )
#define IBrowserService2_ReleaseShellView(This) ( (This)->lpVtbl -> ReleaseShellView(This) )
#define IBrowserService2_ActivatePendingView(This) ( (This)->lpVtbl -> ActivatePendingView(This) )
#define IBrowserService2_CreateViewWindow(This,psvNew,psvOld,prcView,phwnd) ( (This)->lpVtbl -> CreateViewWindow(This,psvNew,psvOld,prcView,phwnd) )
#define IBrowserService2_CreateBrowserPropSheetExt(This,riid,ppv) ( (This)->lpVtbl -> CreateBrowserPropSheetExt(This,riid,ppv) )
#define IBrowserService2_GetViewWindow(This,phwndView) ( (This)->lpVtbl -> GetViewWindow(This,phwndView) )
#define IBrowserService2_GetBaseBrowserData(This,pbbd) ( (This)->lpVtbl -> GetBaseBrowserData(This,pbbd) )
#define IBrowserService2_PutBaseBrowserData(This) ( (This)->lpVtbl -> PutBaseBrowserData(This) )
#define IBrowserService2_InitializeTravelLog(This,ptl,dw) ( (This)->lpVtbl -> InitializeTravelLog(This,ptl,dw) )
#define IBrowserService2_SetTopBrowser(This) ( (This)->lpVtbl -> SetTopBrowser(This) )
#define IBrowserService2_Offline(This,iCmd) ( (This)->lpVtbl -> Offline(This,iCmd) )
#define IBrowserService2_AllowViewResize(This,f) ( (This)->lpVtbl -> AllowViewResize(This,f) )
#define IBrowserService2_SetActivateState(This,u) ( (This)->lpVtbl -> SetActivateState(This,u) )
#define IBrowserService2_UpdateSecureLockIcon(This,eSecureLock) ( (This)->lpVtbl -> UpdateSecureLockIcon(This,eSecureLock) )
#define IBrowserService2_InitializeDownloadManager(This) ( (This)->lpVtbl -> InitializeDownloadManager(This) )
#define IBrowserService2_InitializeTransitionSite(This) ( (This)->lpVtbl -> InitializeTransitionSite(This) )
#define IBrowserService2__Initialize(This,hwnd,pauto) ( (This)->lpVtbl -> _Initialize(This,hwnd,pauto) )
#define IBrowserService2__CancelPendingNavigationAsync(This) ( (This)->lpVtbl -> _CancelPendingNavigationAsync(This) )
#define IBrowserService2__CancelPendingView(This) ( (This)->lpVtbl -> _CancelPendingView(This) )
#define IBrowserService2__MaySaveChanges(This) ( (This)->lpVtbl -> _MaySaveChanges(This) )
#define IBrowserService2__PauseOrResumeView(This,fPaused) ( (This)->lpVtbl -> _PauseOrResumeView(This,fPaused) )
#define IBrowserService2__DisableModeless(This) ( (This)->lpVtbl -> _DisableModeless(This) )
#define IBrowserService2__NavigateToPidl(This,pidl,grfHLNF,dwFlags) ( (This)->lpVtbl -> _NavigateToPidl(This,pidl,grfHLNF,dwFlags) )
#define IBrowserService2__TryShell2Rename(This,psv,pidlNew) ( (This)->lpVtbl -> _TryShell2Rename(This,psv,pidlNew) )
#define IBrowserService2__SwitchActivationNow(This) ( (This)->lpVtbl -> _SwitchActivationNow(This) )
#define IBrowserService2__ExecChildren(This,punkBar,fBroadcast,pguidCmdGroup,nCmdID,nCmdexecopt,pvarargIn,pvarargOut) ( (This)->lpVtbl -> _ExecChildren(This,punkBar,fBroadcast,pguidCmdGroup,nCmdID,nCmdexecopt,pvarargIn,pvarargOut) )
#define IBrowserService2__SendChildren(This,hwndBar,fBroadcast,uMsg,wParam,lParam) ( (This)->lpVtbl -> _SendChildren(This,hwndBar,fBroadcast,uMsg,wParam,lParam) )
#define IBrowserService2_GetFolderSetData(This,pfsd) ( (This)->lpVtbl -> GetFolderSetData(This,pfsd) )
#define IBrowserService2__OnFocusChange(This,itb) ( (This)->lpVtbl -> _OnFocusChange(This,itb) )
#define IBrowserService2_v_ShowHideChildWindows(This,fChildOnly) ( (This)->lpVtbl -> v_ShowHideChildWindows(This,fChildOnly) )
#define IBrowserService2__get_itbLastFocus(This) ( (This)->lpVtbl -> _get_itbLastFocus(This) )
#define IBrowserService2__put_itbLastFocus(This,itbLastFocus) ( (This)->lpVtbl -> _put_itbLastFocus(This,itbLastFocus) )
#define IBrowserService2__UIActivateView(This,uState) ( (This)->lpVtbl -> _UIActivateView(This,uState) )
#define IBrowserService2__GetViewBorderRect(This,prc) ( (This)->lpVtbl -> _GetViewBorderRect(This,prc) )
#define IBrowserService2__UpdateViewRectSize(This) ( (This)->lpVtbl -> _UpdateViewRectSize(This) )
#define IBrowserService2__ResizeNextBorder(This,itb) ( (This)->lpVtbl -> _ResizeNextBorder(This,itb) )
#define IBrowserService2__ResizeView(This) ( (This)->lpVtbl -> _ResizeView(This) )
#define IBrowserService2__GetEffectiveClientArea(This,lprectBorder,hmon) ( (This)->lpVtbl -> _GetEffectiveClientArea(This,lprectBorder,hmon) )
#define IBrowserService2_v_GetViewStream(This,pidl,grfMode,pwszName) ( (This)->lpVtbl -> v_GetViewStream(This,pidl,grfMode,pwszName) )
#define IBrowserService2_ForwardViewMsg(This,uMsg,wParam,lParam) ( (This)->lpVtbl -> ForwardViewMsg(This,uMsg,wParam,lParam) )
#define IBrowserService2_SetAcceleratorMenu(This,hacc) ( (This)->lpVtbl -> SetAcceleratorMenu(This,hacc) )
#define IBrowserService2__GetToolbarCount(This) ( (This)->lpVtbl -> _GetToolbarCount(This) )
#define IBrowserService2__GetToolbarItem(This,itb) ( (This)->lpVtbl -> _GetToolbarItem(This,itb) )
#define IBrowserService2__SaveToolbars(This,pstm) ( (This)->lpVtbl -> _SaveToolbars(This,pstm) )
#define IBrowserService2__LoadToolbars(This,pstm) ( (This)->lpVtbl -> _LoadToolbars(This,pstm) )
#define IBrowserService2__CloseAndReleaseToolbars(This,fClose) ( (This)->lpVtbl -> _CloseAndReleaseToolbars(This,fClose) )
#define IBrowserService2_v_MayGetNextToolbarFocus(This,lpMsg,itbNext,citb,pptbi,phwnd) ( (This)->lpVtbl -> v_MayGetNextToolbarFocus(This,lpMsg,itbNext,citb,pptbi,phwnd) )
#define IBrowserService2__ResizeNextBorderHelper(This,itb,bUseHmonitor) ( (This)->lpVtbl -> _ResizeNextBorderHelper(This,itb,bUseHmonitor) )
#define IBrowserService2__FindTBar(This,punkSrc) ( (This)->lpVtbl -> _FindTBar(This,punkSrc) )
#define IBrowserService2__SetFocus(This,ptbi,hwnd,lpMsg) ( (This)->lpVtbl -> _SetFocus(This,ptbi,hwnd,lpMsg) )
#define IBrowserService2_v_MayTranslateAccelerator(This,pmsg) ( (This)->lpVtbl -> v_MayTranslateAccelerator(This,pmsg) )
#define IBrowserService2__GetBorderDWHelper(This,punkSrc,lprectBorder,bUseHmonitor) ( (This)->lpVtbl -> _GetBorderDWHelper(This,punkSrc,lprectBorder,bUseHmonitor) )
#define IBrowserService2_v_CheckZoneCrossing(This,pidl) ( (This)->lpVtbl -> v_CheckZoneCrossing(This,pidl) )
#endif
#endif
#ifndef __IBrowserService3_INTERFACE_DEFINED__
#define __IBrowserService3_INTERFACE_DEFINED__
typedef enum __MIDL_IBrowserService3_0001
{
	IEPDN_BINDINGUI = 0x1
} IEPDNFLAGS;
extern const IID IID_IBrowserService3;
typedef struct IBrowserService3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IBrowserService3 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBrowserService3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBrowserService3 * This);
	HRESULT(STDMETHODCALLTYPE * GetParentSite) (IBrowserService3 * This, IOleInPlaceSite ** ppipsite);
	HRESULT(STDMETHODCALLTYPE * SetTitle) (IBrowserService3 * This, IShellView * psv, LPCWSTR pszName);
	HRESULT(STDMETHODCALLTYPE * GetTitle) (IBrowserService3 * This, IShellView * psv, LPWSTR pszName, DWORD cchName);
	HRESULT(STDMETHODCALLTYPE * GetOleObject) (IBrowserService3 * This, IOleObject ** ppobjv);
	HRESULT(STDMETHODCALLTYPE * GetTravelLog) (IBrowserService3 * This, ITravelLog ** pptl);
	HRESULT(STDMETHODCALLTYPE * ShowControlWindow) (IBrowserService3 * This, UINT id, BOOL fShow);
	HRESULT(STDMETHODCALLTYPE * IsControlWindowShown) (IBrowserService3 * This, UINT id, BOOL * pfShown);
	HRESULT(STDMETHODCALLTYPE * IEGetDisplayName) (IBrowserService3 * This, PCIDLIST_ABSOLUTE pidl, LPWSTR pwszName, UINT uFlags);
	HRESULT(STDMETHODCALLTYPE * IEParseDisplayName) (IBrowserService3 * This, UINT uiCP, LPCWSTR pwszPath, PIDLIST_ABSOLUTE * ppidlOut);
	HRESULT(STDMETHODCALLTYPE * DisplayParseError) (IBrowserService3 * This, HRESULT hres, LPCWSTR pwszPath);
	HRESULT(STDMETHODCALLTYPE * NavigateToPidl) (IBrowserService3 * This, PCIDLIST_ABSOLUTE pidl, DWORD grfHLNF);
	HRESULT(STDMETHODCALLTYPE * SetNavigateState) (IBrowserService3 * This, BNSTATE bnstate);
	HRESULT(STDMETHODCALLTYPE * GetNavigateState) (IBrowserService3 * This, BNSTATE * pbnstate);
	HRESULT(STDMETHODCALLTYPE * NotifyRedirect) (IBrowserService3 * This, IShellView * psv, PCIDLIST_ABSOLUTE pidl, BOOL * pfDidBrowse);
	HRESULT(STDMETHODCALLTYPE * UpdateWindowList) (IBrowserService3 * This);
	HRESULT(STDMETHODCALLTYPE * UpdateBackForwardState) (IBrowserService3 * This);
	HRESULT(STDMETHODCALLTYPE * SetFlags) (IBrowserService3 * This, DWORD dwFlags, DWORD dwFlagMask);
	HRESULT(STDMETHODCALLTYPE * GetFlags) (IBrowserService3 * This, DWORD * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * CanNavigateNow) (IBrowserService3 * This);
	HRESULT(STDMETHODCALLTYPE * GetPidl) (IBrowserService3 * This, PIDLIST_ABSOLUTE * ppidl);
	HRESULT(STDMETHODCALLTYPE * SetReferrer) (IBrowserService3 * This, PCIDLIST_ABSOLUTE pidl);
	DWORD(STDMETHODCALLTYPE * GetBrowserIndex) (IBrowserService3 * This);
	HRESULT(STDMETHODCALLTYPE * GetBrowserByIndex) (IBrowserService3 * This, DWORD dwID, IUnknown ** ppunk);
	HRESULT(STDMETHODCALLTYPE * GetHistoryObject) (IBrowserService3 * This, IOleObject ** ppole, IStream ** pstm, IBindCtx ** ppbc);
	HRESULT(STDMETHODCALLTYPE * SetHistoryObject) (IBrowserService3 * This, IOleObject * pole, BOOL fIsLocalAnchor);
	HRESULT(STDMETHODCALLTYPE * CacheOLEServer) (IBrowserService3 * This, IOleObject * pole);
	HRESULT(STDMETHODCALLTYPE * GetSetCodePage) (IBrowserService3 * This, VARIANT * pvarIn, VARIANT * pvarOut);
	HRESULT(STDMETHODCALLTYPE * OnHttpEquiv) (IBrowserService3 * This, IShellView * psv, BOOL fDone, VARIANT * pvarargIn, VARIANT * pvarargOut);
	HRESULT(STDMETHODCALLTYPE * GetPalette) (IBrowserService3 * This, HPALETTE * hpal);
	HRESULT(STDMETHODCALLTYPE * RegisterWindow) (IBrowserService3 * This, BOOL fForceRegister, int swc);
	LRESULT(STDMETHODCALLTYPE * WndProcBS) (IBrowserService3 * This, HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
	HRESULT(STDMETHODCALLTYPE * SetAsDefFolderSettings) (IBrowserService3 * This);
	HRESULT(STDMETHODCALLTYPE * GetViewRect) (IBrowserService3 * This, RECT * prc);
	HRESULT(STDMETHODCALLTYPE * OnSize) (IBrowserService3 * This, WPARAM wParam);
	HRESULT(STDMETHODCALLTYPE * OnCreate) (IBrowserService3 * This, struct tagCREATESTRUCTW * pcs);
	LRESULT(STDMETHODCALLTYPE * OnCommand) (IBrowserService3 * This, WPARAM wParam, LPARAM lParam);
	HRESULT(STDMETHODCALLTYPE * OnDestroy) (IBrowserService3 * This);
	LRESULT(STDMETHODCALLTYPE * OnNotify) (IBrowserService3 * This, struct tagNMHDR * pnm);
	HRESULT(STDMETHODCALLTYPE * OnSetFocus) (IBrowserService3 * This);
	HRESULT(STDMETHODCALLTYPE * OnFrameWindowActivateBS) (IBrowserService3 * This, BOOL fActive);
	HRESULT(STDMETHODCALLTYPE * ReleaseShellView) (IBrowserService3 * This);
	HRESULT(STDMETHODCALLTYPE * ActivatePendingView) (IBrowserService3 * This);
	HRESULT(STDMETHODCALLTYPE * CreateViewWindow) (IBrowserService3 * This, IShellView * psvNew, IShellView * psvOld, LPRECT prcView, HWND * phwnd);
	HRESULT(STDMETHODCALLTYPE * CreateBrowserPropSheetExt) (IBrowserService3 * This, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * GetViewWindow) (IBrowserService3 * This, HWND * phwndView);
	HRESULT(STDMETHODCALLTYPE * GetBaseBrowserData) (IBrowserService3 * This, LPCBASEBROWSERDATA * pbbd);
	LPBASEBROWSERDATA(STDMETHODCALLTYPE * PutBaseBrowserData) (IBrowserService3 * This);
	HRESULT(STDMETHODCALLTYPE * InitializeTravelLog) (IBrowserService3 * This, ITravelLog * ptl, DWORD dw);
	HRESULT(STDMETHODCALLTYPE * SetTopBrowser) (IBrowserService3 * This);
	HRESULT(STDMETHODCALLTYPE * Offline) (IBrowserService3 * This, int iCmd);
	HRESULT(STDMETHODCALLTYPE * AllowViewResize) (IBrowserService3 * This, BOOL f);
	HRESULT(STDMETHODCALLTYPE * SetActivateState) (IBrowserService3 * This, UINT u);
	HRESULT(STDMETHODCALLTYPE * UpdateSecureLockIcon) (IBrowserService3 * This, int eSecureLock);
	HRESULT(STDMETHODCALLTYPE * InitializeDownloadManager) (IBrowserService3 * This);
	HRESULT(STDMETHODCALLTYPE * InitializeTransitionSite) (IBrowserService3 * This);
	HRESULT(STDMETHODCALLTYPE * _Initialize) (IBrowserService3 * This, HWND hwnd, IUnknown * pauto);
	HRESULT(STDMETHODCALLTYPE * _CancelPendingNavigationAsync) (IBrowserService3 * This);
	HRESULT(STDMETHODCALLTYPE * _CancelPendingView) (IBrowserService3 * This);
	HRESULT(STDMETHODCALLTYPE * _MaySaveChanges) (IBrowserService3 * This);
	HRESULT(STDMETHODCALLTYPE * _PauseOrResumeView) (IBrowserService3 * This, BOOL fPaused);
	HRESULT(STDMETHODCALLTYPE * _DisableModeless) (IBrowserService3 * This);
	HRESULT(STDMETHODCALLTYPE * _NavigateToPidl) (IBrowserService3 * This, PCIDLIST_ABSOLUTE pidl, DWORD grfHLNF, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * _TryShell2Rename) (IBrowserService3 * This, IShellView * psv, PCIDLIST_ABSOLUTE pidlNew);
	HRESULT(STDMETHODCALLTYPE * _SwitchActivationNow) (IBrowserService3 * This);
	HRESULT(STDMETHODCALLTYPE * _ExecChildren) (IBrowserService3 * This, IUnknown * punkBar, BOOL fBroadcast, const GUID * pguidCmdGroup, DWORD nCmdID, DWORD nCmdexecopt, VARIANTARG * pvarargIn, VARIANTARG * pvarargOut);
	HRESULT(STDMETHODCALLTYPE * _SendChildren) (IBrowserService3 * This, HWND hwndBar, BOOL fBroadcast, UINT uMsg, WPARAM wParam, LPARAM lParam);
	HRESULT(STDMETHODCALLTYPE * GetFolderSetData) (IBrowserService3 * This, struct tagFolderSetData * pfsd);
	HRESULT(STDMETHODCALLTYPE * _OnFocusChange) (IBrowserService3 * This, UINT itb);
	HRESULT(STDMETHODCALLTYPE * v_ShowHideChildWindows) (IBrowserService3 * This, BOOL fChildOnly);
	UINT(STDMETHODCALLTYPE * _get_itbLastFocus) (IBrowserService3 * This);
	HRESULT(STDMETHODCALLTYPE * _put_itbLastFocus) (IBrowserService3 * This, UINT itbLastFocus);
	HRESULT(STDMETHODCALLTYPE * _UIActivateView) (IBrowserService3 * This, UINT uState);
	HRESULT(STDMETHODCALLTYPE * _GetViewBorderRect) (IBrowserService3 * This, RECT * prc);
	HRESULT(STDMETHODCALLTYPE * _UpdateViewRectSize) (IBrowserService3 * This);
	HRESULT(STDMETHODCALLTYPE * _ResizeNextBorder) (IBrowserService3 * This, UINT itb);
	HRESULT(STDMETHODCALLTYPE * _ResizeView) (IBrowserService3 * This);
	HRESULT(STDMETHODCALLTYPE * _GetEffectiveClientArea) (IBrowserService3 * This, LPRECT lprectBorder, HMONITOR hmon);
	IStream *(STDMETHODCALLTYPE *v_GetViewStream) (IBrowserService3 *This, PCIDLIST_ABSOLUTE pidl, DWORD grfMode, LPCWSTR pwszName);
	LRESULT(STDMETHODCALLTYPE * ForwardViewMsg) (IBrowserService3 * This, UINT uMsg, WPARAM wParam, LPARAM lParam);
	HRESULT(STDMETHODCALLTYPE * SetAcceleratorMenu) (IBrowserService3 * This, HACCEL hacc);
	int (STDMETHODCALLTYPE *_GetToolbarCount) (IBrowserService3 *This);
	LPTOOLBARITEM(STDMETHODCALLTYPE * _GetToolbarItem) (IBrowserService3 * This, int itb);
	HRESULT(STDMETHODCALLTYPE * _SaveToolbars) (IBrowserService3 * This, IStream * pstm);
	HRESULT(STDMETHODCALLTYPE * _LoadToolbars) (IBrowserService3 * This, IStream * pstm);
	HRESULT(STDMETHODCALLTYPE * _CloseAndReleaseToolbars) (IBrowserService3 * This, BOOL fClose);
	HRESULT(STDMETHODCALLTYPE * v_MayGetNextToolbarFocus) (IBrowserService3 * This, LPMSG lpMsg, UINT itbNext, int citb, LPTOOLBARITEM * pptbi, HWND * phwnd);
	HRESULT(STDMETHODCALLTYPE * _ResizeNextBorderHelper) (IBrowserService3 * This, UINT itb, BOOL bUseHmonitor);
	UINT(STDMETHODCALLTYPE * _FindTBar) (IBrowserService3 * This, IUnknown * punkSrc);
	HRESULT(STDMETHODCALLTYPE * _SetFocus) (IBrowserService3 * This, LPTOOLBARITEM ptbi, HWND hwnd, LPMSG lpMsg);
	HRESULT(STDMETHODCALLTYPE * v_MayTranslateAccelerator) (IBrowserService3 * This, MSG * pmsg);
	HRESULT(STDMETHODCALLTYPE * _GetBorderDWHelper) (IBrowserService3 * This, IUnknown * punkSrc, LPRECT lprectBorder, BOOL bUseHmonitor);
	HRESULT(STDMETHODCALLTYPE * v_CheckZoneCrossing) (IBrowserService3 * This, PCIDLIST_ABSOLUTE pidl);
	HRESULT(STDMETHODCALLTYPE * _PositionViewWindow) (IBrowserService3 * This, HWND hwnd, LPRECT prc);
	HRESULT(STDMETHODCALLTYPE * IEParseDisplayNameEx) (IBrowserService3 * This, UINT uiCP, LPCWSTR pwszPath, DWORD dwFlags, PIDLIST_ABSOLUTE * ppidlOut);
	END_INTERFACE
}  IBrowserService3Vtbl;
interface IBrowserService3
{
	CONST_VTBL struct IBrowserService3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBrowserService3_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBrowserService3_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IBrowserService3_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IBrowserService3_GetParentSite(This,ppipsite) ( (This)->lpVtbl -> GetParentSite(This,ppipsite) )
#define IBrowserService3_SetTitle(This,psv,pszName) ( (This)->lpVtbl -> SetTitle(This,psv,pszName) )
#define IBrowserService3_GetTitle(This,psv,pszName,cchName) ( (This)->lpVtbl -> GetTitle(This,psv,pszName,cchName) )
#define IBrowserService3_GetOleObject(This,ppobjv) ( (This)->lpVtbl -> GetOleObject(This,ppobjv) )
#define IBrowserService3_GetTravelLog(This,pptl) ( (This)->lpVtbl -> GetTravelLog(This,pptl) )
#define IBrowserService3_ShowControlWindow(This,id,fShow) ( (This)->lpVtbl -> ShowControlWindow(This,id,fShow) )
#define IBrowserService3_IsControlWindowShown(This,id,pfShown) ( (This)->lpVtbl -> IsControlWindowShown(This,id,pfShown) )
#define IBrowserService3_IEGetDisplayName(This,pidl,pwszName,uFlags) ( (This)->lpVtbl -> IEGetDisplayName(This,pidl,pwszName,uFlags) )
#define IBrowserService3_IEParseDisplayName(This,uiCP,pwszPath,ppidlOut) ( (This)->lpVtbl -> IEParseDisplayName(This,uiCP,pwszPath,ppidlOut) )
#define IBrowserService3_DisplayParseError(This,hres,pwszPath) ( (This)->lpVtbl -> DisplayParseError(This,hres,pwszPath) )
#define IBrowserService3_NavigateToPidl(This,pidl,grfHLNF) ( (This)->lpVtbl -> NavigateToPidl(This,pidl,grfHLNF) )
#define IBrowserService3_SetNavigateState(This,bnstate) ( (This)->lpVtbl -> SetNavigateState(This,bnstate) )
#define IBrowserService3_GetNavigateState(This,pbnstate) ( (This)->lpVtbl -> GetNavigateState(This,pbnstate) )
#define IBrowserService3_NotifyRedirect(This,psv,pidl,pfDidBrowse) ( (This)->lpVtbl -> NotifyRedirect(This,psv,pidl,pfDidBrowse) )
#define IBrowserService3_UpdateWindowList(This) ( (This)->lpVtbl -> UpdateWindowList(This) )
#define IBrowserService3_UpdateBackForwardState(This) ( (This)->lpVtbl -> UpdateBackForwardState(This) )
#define IBrowserService3_SetFlags(This,dwFlags,dwFlagMask) ( (This)->lpVtbl -> SetFlags(This,dwFlags,dwFlagMask) )
#define IBrowserService3_GetFlags(This,pdwFlags) ( (This)->lpVtbl -> GetFlags(This,pdwFlags) )
#define IBrowserService3_CanNavigateNow(This) ( (This)->lpVtbl -> CanNavigateNow(This) )
#define IBrowserService3_GetPidl(This,ppidl) ( (This)->lpVtbl -> GetPidl(This,ppidl) )
#define IBrowserService3_SetReferrer(This,pidl) ( (This)->lpVtbl -> SetReferrer(This,pidl) )
#define IBrowserService3_GetBrowserIndex(This) ( (This)->lpVtbl -> GetBrowserIndex(This) )
#define IBrowserService3_GetBrowserByIndex(This,dwID,ppunk) ( (This)->lpVtbl -> GetBrowserByIndex(This,dwID,ppunk) )
#define IBrowserService3_GetHistoryObject(This,ppole,pstm,ppbc) ( (This)->lpVtbl -> GetHistoryObject(This,ppole,pstm,ppbc) )
#define IBrowserService3_SetHistoryObject(This,pole,fIsLocalAnchor) ( (This)->lpVtbl -> SetHistoryObject(This,pole,fIsLocalAnchor) )
#define IBrowserService3_CacheOLEServer(This,pole) ( (This)->lpVtbl -> CacheOLEServer(This,pole) )
#define IBrowserService3_GetSetCodePage(This,pvarIn,pvarOut) ( (This)->lpVtbl -> GetSetCodePage(This,pvarIn,pvarOut) )
#define IBrowserService3_OnHttpEquiv(This,psv,fDone,pvarargIn,pvarargOut) ( (This)->lpVtbl -> OnHttpEquiv(This,psv,fDone,pvarargIn,pvarargOut) )
#define IBrowserService3_GetPalette(This,hpal) ( (This)->lpVtbl -> GetPalette(This,hpal) )
#define IBrowserService3_RegisterWindow(This,fForceRegister,swc) ( (This)->lpVtbl -> RegisterWindow(This,fForceRegister,swc) )
#define IBrowserService3_WndProcBS(This,hwnd,uMsg,wParam,lParam) ( (This)->lpVtbl -> WndProcBS(This,hwnd,uMsg,wParam,lParam) )
#define IBrowserService3_SetAsDefFolderSettings(This) ( (This)->lpVtbl -> SetAsDefFolderSettings(This) )
#define IBrowserService3_GetViewRect(This,prc) ( (This)->lpVtbl -> GetViewRect(This,prc) )
#define IBrowserService3_OnSize(This,wParam) ( (This)->lpVtbl -> OnSize(This,wParam) )
#define IBrowserService3_OnCreate(This,pcs) ( (This)->lpVtbl -> OnCreate(This,pcs) )
#define IBrowserService3_OnCommand(This,wParam,lParam) ( (This)->lpVtbl -> OnCommand(This,wParam,lParam) )
#define IBrowserService3_OnDestroy(This) ( (This)->lpVtbl -> OnDestroy(This) )
#define IBrowserService3_OnNotify(This,pnm) ( (This)->lpVtbl -> OnNotify(This,pnm) )
#define IBrowserService3_OnSetFocus(This) ( (This)->lpVtbl -> OnSetFocus(This) )
#define IBrowserService3_OnFrameWindowActivateBS(This,fActive) ( (This)->lpVtbl -> OnFrameWindowActivateBS(This,fActive) )
#define IBrowserService3_ReleaseShellView(This) ( (This)->lpVtbl -> ReleaseShellView(This) )
#define IBrowserService3_ActivatePendingView(This) ( (This)->lpVtbl -> ActivatePendingView(This) )
#define IBrowserService3_CreateViewWindow(This,psvNew,psvOld,prcView,phwnd) ( (This)->lpVtbl -> CreateViewWindow(This,psvNew,psvOld,prcView,phwnd) )
#define IBrowserService3_CreateBrowserPropSheetExt(This,riid,ppv) ( (This)->lpVtbl -> CreateBrowserPropSheetExt(This,riid,ppv) )
#define IBrowserService3_GetViewWindow(This,phwndView) ( (This)->lpVtbl -> GetViewWindow(This,phwndView) )
#define IBrowserService3_GetBaseBrowserData(This,pbbd) ( (This)->lpVtbl -> GetBaseBrowserData(This,pbbd) )
#define IBrowserService3_PutBaseBrowserData(This) ( (This)->lpVtbl -> PutBaseBrowserData(This) )
#define IBrowserService3_InitializeTravelLog(This,ptl,dw) ( (This)->lpVtbl -> InitializeTravelLog(This,ptl,dw) )
#define IBrowserService3_SetTopBrowser(This) ( (This)->lpVtbl -> SetTopBrowser(This) )
#define IBrowserService3_Offline(This,iCmd) ( (This)->lpVtbl -> Offline(This,iCmd) )
#define IBrowserService3_AllowViewResize(This,f) ( (This)->lpVtbl -> AllowViewResize(This,f) )
#define IBrowserService3_SetActivateState(This,u) ( (This)->lpVtbl -> SetActivateState(This,u) )
#define IBrowserService3_UpdateSecureLockIcon(This,eSecureLock) ( (This)->lpVtbl -> UpdateSecureLockIcon(This,eSecureLock) )
#define IBrowserService3_InitializeDownloadManager(This) ( (This)->lpVtbl -> InitializeDownloadManager(This) )
#define IBrowserService3_InitializeTransitionSite(This) ( (This)->lpVtbl -> InitializeTransitionSite(This) )
#define IBrowserService3__Initialize(This,hwnd,pauto) ( (This)->lpVtbl -> _Initialize(This,hwnd,pauto) )
#define IBrowserService3__CancelPendingNavigationAsync(This) ( (This)->lpVtbl -> _CancelPendingNavigationAsync(This) )
#define IBrowserService3__CancelPendingView(This) ( (This)->lpVtbl -> _CancelPendingView(This) )
#define IBrowserService3__MaySaveChanges(This) ( (This)->lpVtbl -> _MaySaveChanges(This) )
#define IBrowserService3__PauseOrResumeView(This,fPaused) ( (This)->lpVtbl -> _PauseOrResumeView(This,fPaused) )
#define IBrowserService3__DisableModeless(This) ( (This)->lpVtbl -> _DisableModeless(This) )
#define IBrowserService3__NavigateToPidl(This,pidl,grfHLNF,dwFlags) ( (This)->lpVtbl -> _NavigateToPidl(This,pidl,grfHLNF,dwFlags) )
#define IBrowserService3__TryShell2Rename(This,psv,pidlNew) ( (This)->lpVtbl -> _TryShell2Rename(This,psv,pidlNew) )
#define IBrowserService3__SwitchActivationNow(This) ( (This)->lpVtbl -> _SwitchActivationNow(This) )
#define IBrowserService3__ExecChildren(This,punkBar,fBroadcast,pguidCmdGroup,nCmdID,nCmdexecopt,pvarargIn,pvarargOut) ( (This)->lpVtbl -> _ExecChildren(This,punkBar,fBroadcast,pguidCmdGroup,nCmdID,nCmdexecopt,pvarargIn,pvarargOut) )
#define IBrowserService3__SendChildren(This,hwndBar,fBroadcast,uMsg,wParam,lParam) ( (This)->lpVtbl -> _SendChildren(This,hwndBar,fBroadcast,uMsg,wParam,lParam) )
#define IBrowserService3_GetFolderSetData(This,pfsd) ( (This)->lpVtbl -> GetFolderSetData(This,pfsd) )
#define IBrowserService3__OnFocusChange(This,itb) ( (This)->lpVtbl -> _OnFocusChange(This,itb) )
#define IBrowserService3_v_ShowHideChildWindows(This,fChildOnly) ( (This)->lpVtbl -> v_ShowHideChildWindows(This,fChildOnly) )
#define IBrowserService3__get_itbLastFocus(This) ( (This)->lpVtbl -> _get_itbLastFocus(This) )
#define IBrowserService3__put_itbLastFocus(This,itbLastFocus) ( (This)->lpVtbl -> _put_itbLastFocus(This,itbLastFocus) )
#define IBrowserService3__UIActivateView(This,uState) ( (This)->lpVtbl -> _UIActivateView(This,uState) )
#define IBrowserService3__GetViewBorderRect(This,prc) ( (This)->lpVtbl -> _GetViewBorderRect(This,prc) )
#define IBrowserService3__UpdateViewRectSize(This) ( (This)->lpVtbl -> _UpdateViewRectSize(This) )
#define IBrowserService3__ResizeNextBorder(This,itb) ( (This)->lpVtbl -> _ResizeNextBorder(This,itb) )
#define IBrowserService3__ResizeView(This) ( (This)->lpVtbl -> _ResizeView(This) )
#define IBrowserService3__GetEffectiveClientArea(This,lprectBorder,hmon) ( (This)->lpVtbl -> _GetEffectiveClientArea(This,lprectBorder,hmon) )
#define IBrowserService3_v_GetViewStream(This,pidl,grfMode,pwszName) ( (This)->lpVtbl -> v_GetViewStream(This,pidl,grfMode,pwszName) )
#define IBrowserService3_ForwardViewMsg(This,uMsg,wParam,lParam) ( (This)->lpVtbl -> ForwardViewMsg(This,uMsg,wParam,lParam) )
#define IBrowserService3_SetAcceleratorMenu(This,hacc) ( (This)->lpVtbl -> SetAcceleratorMenu(This,hacc) )
#define IBrowserService3__GetToolbarCount(This) ( (This)->lpVtbl -> _GetToolbarCount(This) )
#define IBrowserService3__GetToolbarItem(This,itb) ( (This)->lpVtbl -> _GetToolbarItem(This,itb) )
#define IBrowserService3__SaveToolbars(This,pstm) ( (This)->lpVtbl -> _SaveToolbars(This,pstm) )
#define IBrowserService3__LoadToolbars(This,pstm) ( (This)->lpVtbl -> _LoadToolbars(This,pstm) )
#define IBrowserService3__CloseAndReleaseToolbars(This,fClose) ( (This)->lpVtbl -> _CloseAndReleaseToolbars(This,fClose) )
#define IBrowserService3_v_MayGetNextToolbarFocus(This,lpMsg,itbNext,citb,pptbi,phwnd) ( (This)->lpVtbl -> v_MayGetNextToolbarFocus(This,lpMsg,itbNext,citb,pptbi,phwnd) )
#define IBrowserService3__ResizeNextBorderHelper(This,itb,bUseHmonitor) ( (This)->lpVtbl -> _ResizeNextBorderHelper(This,itb,bUseHmonitor) )
#define IBrowserService3__FindTBar(This,punkSrc) ( (This)->lpVtbl -> _FindTBar(This,punkSrc) )
#define IBrowserService3__SetFocus(This,ptbi,hwnd,lpMsg) ( (This)->lpVtbl -> _SetFocus(This,ptbi,hwnd,lpMsg) )
#define IBrowserService3_v_MayTranslateAccelerator(This,pmsg) ( (This)->lpVtbl -> v_MayTranslateAccelerator(This,pmsg) )
#define IBrowserService3__GetBorderDWHelper(This,punkSrc,lprectBorder,bUseHmonitor) ( (This)->lpVtbl -> _GetBorderDWHelper(This,punkSrc,lprectBorder,bUseHmonitor) )
#define IBrowserService3_v_CheckZoneCrossing(This,pidl) ( (This)->lpVtbl -> v_CheckZoneCrossing(This,pidl) )
#define IBrowserService3__PositionViewWindow(This,hwnd,prc) ( (This)->lpVtbl -> _PositionViewWindow(This,hwnd,prc) )
#define IBrowserService3_IEParseDisplayNameEx(This,uiCP,pwszPath,dwFlags,ppidlOut) ( (This)->lpVtbl -> IEParseDisplayNameEx(This,uiCP,pwszPath,dwFlags,ppidlOut) )
#endif
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA) || (_WIN32_IE >= _WIN32_IE_IE70)
extern RPC_IF_HANDLE __MIDL_itf_shdeprecated_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shdeprecated_0000_0008_v0_0_s_ifspec;
#ifndef __IBrowserService4_INTERFACE_DEFINED__
#define __IBrowserService4_INTERFACE_DEFINED__
extern const IID IID_IBrowserService4;
typedef struct IBrowserService4Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IBrowserService4 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBrowserService4 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBrowserService4 * This);
	HRESULT(STDMETHODCALLTYPE * GetParentSite) (IBrowserService4 * This, IOleInPlaceSite ** ppipsite);
	HRESULT(STDMETHODCALLTYPE * SetTitle) (IBrowserService4 * This, IShellView * psv, LPCWSTR pszName);
	HRESULT(STDMETHODCALLTYPE * GetTitle) (IBrowserService4 * This, IShellView * psv, LPWSTR pszName, DWORD cchName);
	HRESULT(STDMETHODCALLTYPE * GetOleObject) (IBrowserService4 * This, IOleObject ** ppobjv);
	HRESULT(STDMETHODCALLTYPE * GetTravelLog) (IBrowserService4 * This, ITravelLog ** pptl);
	HRESULT(STDMETHODCALLTYPE * ShowControlWindow) (IBrowserService4 * This, UINT id, BOOL fShow);
	HRESULT(STDMETHODCALLTYPE * IsControlWindowShown) (IBrowserService4 * This, UINT id, BOOL * pfShown);
	HRESULT(STDMETHODCALLTYPE * IEGetDisplayName) (IBrowserService4 * This, PCIDLIST_ABSOLUTE pidl, LPWSTR pwszName, UINT uFlags);
	HRESULT(STDMETHODCALLTYPE * IEParseDisplayName) (IBrowserService4 * This, UINT uiCP, LPCWSTR pwszPath, PIDLIST_ABSOLUTE * ppidlOut);
	HRESULT(STDMETHODCALLTYPE * DisplayParseError) (IBrowserService4 * This, HRESULT hres, LPCWSTR pwszPath);
	HRESULT(STDMETHODCALLTYPE * NavigateToPidl) (IBrowserService4 * This, PCIDLIST_ABSOLUTE pidl, DWORD grfHLNF);
	HRESULT(STDMETHODCALLTYPE * SetNavigateState) (IBrowserService4 * This, BNSTATE bnstate);
	HRESULT(STDMETHODCALLTYPE * GetNavigateState) (IBrowserService4 * This, BNSTATE * pbnstate);
	HRESULT(STDMETHODCALLTYPE * NotifyRedirect) (IBrowserService4 * This, IShellView * psv, PCIDLIST_ABSOLUTE pidl, BOOL * pfDidBrowse);
	HRESULT(STDMETHODCALLTYPE * UpdateWindowList) (IBrowserService4 * This);
	HRESULT(STDMETHODCALLTYPE * UpdateBackForwardState) (IBrowserService4 * This);
	HRESULT(STDMETHODCALLTYPE * SetFlags) (IBrowserService4 * This, DWORD dwFlags, DWORD dwFlagMask);
	HRESULT(STDMETHODCALLTYPE * GetFlags) (IBrowserService4 * This, DWORD * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * CanNavigateNow) (IBrowserService4 * This);
	HRESULT(STDMETHODCALLTYPE * GetPidl) (IBrowserService4 * This, PIDLIST_ABSOLUTE * ppidl);
	HRESULT(STDMETHODCALLTYPE * SetReferrer) (IBrowserService4 * This, PCIDLIST_ABSOLUTE pidl);
	DWORD(STDMETHODCALLTYPE * GetBrowserIndex) (IBrowserService4 * This);
	HRESULT(STDMETHODCALLTYPE * GetBrowserByIndex) (IBrowserService4 * This, DWORD dwID, IUnknown ** ppunk);
	HRESULT(STDMETHODCALLTYPE * GetHistoryObject) (IBrowserService4 * This, IOleObject ** ppole, IStream ** pstm, IBindCtx ** ppbc);
	HRESULT(STDMETHODCALLTYPE * SetHistoryObject) (IBrowserService4 * This, IOleObject * pole, BOOL fIsLocalAnchor);
	HRESULT(STDMETHODCALLTYPE * CacheOLEServer) (IBrowserService4 * This, IOleObject * pole);
	HRESULT(STDMETHODCALLTYPE * GetSetCodePage) (IBrowserService4 * This, VARIANT * pvarIn, VARIANT * pvarOut);
	HRESULT(STDMETHODCALLTYPE * OnHttpEquiv) (IBrowserService4 * This, IShellView * psv, BOOL fDone, VARIANT * pvarargIn, VARIANT * pvarargOut);
	HRESULT(STDMETHODCALLTYPE * GetPalette) (IBrowserService4 * This, HPALETTE * hpal);
	HRESULT(STDMETHODCALLTYPE * RegisterWindow) (IBrowserService4 * This, BOOL fForceRegister, int swc);
	LRESULT(STDMETHODCALLTYPE * WndProcBS) (IBrowserService4 * This, HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
	HRESULT(STDMETHODCALLTYPE * SetAsDefFolderSettings) (IBrowserService4 * This);
	HRESULT(STDMETHODCALLTYPE * GetViewRect) (IBrowserService4 * This, RECT * prc);
	HRESULT(STDMETHODCALLTYPE * OnSize) (IBrowserService4 * This, WPARAM wParam);
	HRESULT(STDMETHODCALLTYPE * OnCreate) (IBrowserService4 * This, struct tagCREATESTRUCTW * pcs);
	LRESULT(STDMETHODCALLTYPE * OnCommand) (IBrowserService4 * This, WPARAM wParam, LPARAM lParam);
	HRESULT(STDMETHODCALLTYPE * OnDestroy) (IBrowserService4 * This);
	LRESULT(STDMETHODCALLTYPE * OnNotify) (IBrowserService4 * This, struct tagNMHDR * pnm);
	HRESULT(STDMETHODCALLTYPE * OnSetFocus) (IBrowserService4 * This);
	HRESULT(STDMETHODCALLTYPE * OnFrameWindowActivateBS) (IBrowserService4 * This, BOOL fActive);
	HRESULT(STDMETHODCALLTYPE * ReleaseShellView) (IBrowserService4 * This);
	HRESULT(STDMETHODCALLTYPE * ActivatePendingView) (IBrowserService4 * This);
	HRESULT(STDMETHODCALLTYPE * CreateViewWindow) (IBrowserService4 * This, IShellView * psvNew, IShellView * psvOld, LPRECT prcView, HWND * phwnd);
	HRESULT(STDMETHODCALLTYPE * CreateBrowserPropSheetExt) (IBrowserService4 * This, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * GetViewWindow) (IBrowserService4 * This, HWND * phwndView);
	HRESULT(STDMETHODCALLTYPE * GetBaseBrowserData) (IBrowserService4 * This, LPCBASEBROWSERDATA * pbbd);
	LPBASEBROWSERDATA(STDMETHODCALLTYPE * PutBaseBrowserData) (IBrowserService4 * This);
	HRESULT(STDMETHODCALLTYPE * InitializeTravelLog) (IBrowserService4 * This, ITravelLog * ptl, DWORD dw);
	HRESULT(STDMETHODCALLTYPE * SetTopBrowser) (IBrowserService4 * This);
	HRESULT(STDMETHODCALLTYPE * Offline) (IBrowserService4 * This, int iCmd);
	HRESULT(STDMETHODCALLTYPE * AllowViewResize) (IBrowserService4 * This, BOOL f);
	HRESULT(STDMETHODCALLTYPE * SetActivateState) (IBrowserService4 * This, UINT u);
	HRESULT(STDMETHODCALLTYPE * UpdateSecureLockIcon) (IBrowserService4 * This, int eSecureLock);
	HRESULT(STDMETHODCALLTYPE * InitializeDownloadManager) (IBrowserService4 * This);
	HRESULT(STDMETHODCALLTYPE * InitializeTransitionSite) (IBrowserService4 * This);
	HRESULT(STDMETHODCALLTYPE * _Initialize) (IBrowserService4 * This, HWND hwnd, IUnknown * pauto);
	HRESULT(STDMETHODCALLTYPE * _CancelPendingNavigationAsync) (IBrowserService4 * This);
	HRESULT(STDMETHODCALLTYPE * _CancelPendingView) (IBrowserService4 * This);
	HRESULT(STDMETHODCALLTYPE * _MaySaveChanges) (IBrowserService4 * This);
	HRESULT(STDMETHODCALLTYPE * _PauseOrResumeView) (IBrowserService4 * This, BOOL fPaused);
	HRESULT(STDMETHODCALLTYPE * _DisableModeless) (IBrowserService4 * This);
	HRESULT(STDMETHODCALLTYPE * _NavigateToPidl) (IBrowserService4 * This, PCIDLIST_ABSOLUTE pidl, DWORD grfHLNF, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * _TryShell2Rename) (IBrowserService4 * This, IShellView * psv, PCIDLIST_ABSOLUTE pidlNew);
	HRESULT(STDMETHODCALLTYPE * _SwitchActivationNow) (IBrowserService4 * This);
	HRESULT(STDMETHODCALLTYPE * _ExecChildren) (IBrowserService4 * This, IUnknown * punkBar, BOOL fBroadcast, const GUID * pguidCmdGroup, DWORD nCmdID, DWORD nCmdexecopt, VARIANTARG * pvarargIn, VARIANTARG * pvarargOut);
	HRESULT(STDMETHODCALLTYPE * _SendChildren) (IBrowserService4 * This, HWND hwndBar, BOOL fBroadcast, UINT uMsg, WPARAM wParam, LPARAM lParam);
	HRESULT(STDMETHODCALLTYPE * GetFolderSetData) (IBrowserService4 * This, struct tagFolderSetData * pfsd);
	HRESULT(STDMETHODCALLTYPE * _OnFocusChange) (IBrowserService4 * This, UINT itb);
	HRESULT(STDMETHODCALLTYPE * v_ShowHideChildWindows) (IBrowserService4 * This, BOOL fChildOnly);
	UINT(STDMETHODCALLTYPE * _get_itbLastFocus) (IBrowserService4 * This);
	HRESULT(STDMETHODCALLTYPE * _put_itbLastFocus) (IBrowserService4 * This, UINT itbLastFocus);
	HRESULT(STDMETHODCALLTYPE * _UIActivateView) (IBrowserService4 * This, UINT uState);
	HRESULT(STDMETHODCALLTYPE * _GetViewBorderRect) (IBrowserService4 * This, RECT * prc);
	HRESULT(STDMETHODCALLTYPE * _UpdateViewRectSize) (IBrowserService4 * This);
	HRESULT(STDMETHODCALLTYPE * _ResizeNextBorder) (IBrowserService4 * This, UINT itb);
	HRESULT(STDMETHODCALLTYPE * _ResizeView) (IBrowserService4 * This);
	HRESULT(STDMETHODCALLTYPE * _GetEffectiveClientArea) (IBrowserService4 * This, LPRECT lprectBorder, HMONITOR hmon);
	IStream *(STDMETHODCALLTYPE *v_GetViewStream) (IBrowserService4 *This, PCIDLIST_ABSOLUTE pidl, DWORD grfMode, LPCWSTR pwszName);
	LRESULT(STDMETHODCALLTYPE * ForwardViewMsg) (IBrowserService4 * This, UINT uMsg, WPARAM wParam, LPARAM lParam);
	HRESULT(STDMETHODCALLTYPE * SetAcceleratorMenu) (IBrowserService4 * This, HACCEL hacc);
	int (STDMETHODCALLTYPE *_GetToolbarCount) (IBrowserService4 *This);
	LPTOOLBARITEM(STDMETHODCALLTYPE * _GetToolbarItem) (IBrowserService4 * This, int itb);
	HRESULT(STDMETHODCALLTYPE * _SaveToolbars) (IBrowserService4 * This, IStream * pstm);
	HRESULT(STDMETHODCALLTYPE * _LoadToolbars) (IBrowserService4 * This, IStream * pstm);
	HRESULT(STDMETHODCALLTYPE * _CloseAndReleaseToolbars) (IBrowserService4 * This, BOOL fClose);
	HRESULT(STDMETHODCALLTYPE * v_MayGetNextToolbarFocus) (IBrowserService4 * This, LPMSG lpMsg, UINT itbNext, int citb, LPTOOLBARITEM * pptbi, HWND * phwnd);
	HRESULT(STDMETHODCALLTYPE * _ResizeNextBorderHelper) (IBrowserService4 * This, UINT itb, BOOL bUseHmonitor);
	UINT(STDMETHODCALLTYPE * _FindTBar) (IBrowserService4 * This, IUnknown * punkSrc);
	HRESULT(STDMETHODCALLTYPE * _SetFocus) (IBrowserService4 * This, LPTOOLBARITEM ptbi, HWND hwnd, LPMSG lpMsg);
	HRESULT(STDMETHODCALLTYPE * v_MayTranslateAccelerator) (IBrowserService4 * This, MSG * pmsg);
	HRESULT(STDMETHODCALLTYPE * _GetBorderDWHelper) (IBrowserService4 * This, IUnknown * punkSrc, LPRECT lprectBorder, BOOL bUseHmonitor);
	HRESULT(STDMETHODCALLTYPE * v_CheckZoneCrossing) (IBrowserService4 * This, PCIDLIST_ABSOLUTE pidl);
	HRESULT(STDMETHODCALLTYPE * _PositionViewWindow) (IBrowserService4 * This, HWND hwnd, LPRECT prc);
	HRESULT(STDMETHODCALLTYPE * IEParseDisplayNameEx) (IBrowserService4 * This, UINT uiCP, LPCWSTR pwszPath, DWORD dwFlags, PIDLIST_ABSOLUTE * ppidlOut);
	HRESULT(STDMETHODCALLTYPE * ActivateView) (IBrowserService4 * This, BOOL fPendingView);
	HRESULT(STDMETHODCALLTYPE * SaveViewState) (IBrowserService4 * This);
	HRESULT(STDMETHODCALLTYPE * _ResizeAllBorders) (IBrowserService4 * This);
	END_INTERFACE
}  IBrowserService4Vtbl;
interface IBrowserService4
{
	CONST_VTBL struct IBrowserService4Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBrowserService4_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBrowserService4_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IBrowserService4_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IBrowserService4_GetParentSite(This,ppipsite) ( (This)->lpVtbl -> GetParentSite(This,ppipsite) )
#define IBrowserService4_SetTitle(This,psv,pszName) ( (This)->lpVtbl -> SetTitle(This,psv,pszName) )
#define IBrowserService4_GetTitle(This,psv,pszName,cchName) ( (This)->lpVtbl -> GetTitle(This,psv,pszName,cchName) )
#define IBrowserService4_GetOleObject(This,ppobjv) ( (This)->lpVtbl -> GetOleObject(This,ppobjv) )
#define IBrowserService4_GetTravelLog(This,pptl) ( (This)->lpVtbl -> GetTravelLog(This,pptl) )
#define IBrowserService4_ShowControlWindow(This,id,fShow) ( (This)->lpVtbl -> ShowControlWindow(This,id,fShow) )
#define IBrowserService4_IsControlWindowShown(This,id,pfShown) ( (This)->lpVtbl -> IsControlWindowShown(This,id,pfShown) )
#define IBrowserService4_IEGetDisplayName(This,pidl,pwszName,uFlags) ( (This)->lpVtbl -> IEGetDisplayName(This,pidl,pwszName,uFlags) )
#define IBrowserService4_IEParseDisplayName(This,uiCP,pwszPath,ppidlOut) ( (This)->lpVtbl -> IEParseDisplayName(This,uiCP,pwszPath,ppidlOut) )
#define IBrowserService4_DisplayParseError(This,hres,pwszPath) ( (This)->lpVtbl -> DisplayParseError(This,hres,pwszPath) )
#define IBrowserService4_NavigateToPidl(This,pidl,grfHLNF) ( (This)->lpVtbl -> NavigateToPidl(This,pidl,grfHLNF) )
#define IBrowserService4_SetNavigateState(This,bnstate) ( (This)->lpVtbl -> SetNavigateState(This,bnstate) )
#define IBrowserService4_GetNavigateState(This,pbnstate) ( (This)->lpVtbl -> GetNavigateState(This,pbnstate) )
#define IBrowserService4_NotifyRedirect(This,psv,pidl,pfDidBrowse) ( (This)->lpVtbl -> NotifyRedirect(This,psv,pidl,pfDidBrowse) )
#define IBrowserService4_UpdateWindowList(This) ( (This)->lpVtbl -> UpdateWindowList(This) )
#define IBrowserService4_UpdateBackForwardState(This) ( (This)->lpVtbl -> UpdateBackForwardState(This) )
#define IBrowserService4_SetFlags(This,dwFlags,dwFlagMask) ( (This)->lpVtbl -> SetFlags(This,dwFlags,dwFlagMask) )
#define IBrowserService4_GetFlags(This,pdwFlags) ( (This)->lpVtbl -> GetFlags(This,pdwFlags) )
#define IBrowserService4_CanNavigateNow(This) ( (This)->lpVtbl -> CanNavigateNow(This) )
#define IBrowserService4_GetPidl(This,ppidl) ( (This)->lpVtbl -> GetPidl(This,ppidl) )
#define IBrowserService4_SetReferrer(This,pidl) ( (This)->lpVtbl -> SetReferrer(This,pidl) )
#define IBrowserService4_GetBrowserIndex(This) ( (This)->lpVtbl -> GetBrowserIndex(This) )
#define IBrowserService4_GetBrowserByIndex(This,dwID,ppunk) ( (This)->lpVtbl -> GetBrowserByIndex(This,dwID,ppunk) )
#define IBrowserService4_GetHistoryObject(This,ppole,pstm,ppbc) ( (This)->lpVtbl -> GetHistoryObject(This,ppole,pstm,ppbc) )
#define IBrowserService4_SetHistoryObject(This,pole,fIsLocalAnchor) ( (This)->lpVtbl -> SetHistoryObject(This,pole,fIsLocalAnchor) )
#define IBrowserService4_CacheOLEServer(This,pole) ( (This)->lpVtbl -> CacheOLEServer(This,pole) )
#define IBrowserService4_GetSetCodePage(This,pvarIn,pvarOut) ( (This)->lpVtbl -> GetSetCodePage(This,pvarIn,pvarOut) )
#define IBrowserService4_OnHttpEquiv(This,psv,fDone,pvarargIn,pvarargOut) ( (This)->lpVtbl -> OnHttpEquiv(This,psv,fDone,pvarargIn,pvarargOut) )
#define IBrowserService4_GetPalette(This,hpal) ( (This)->lpVtbl -> GetPalette(This,hpal) )
#define IBrowserService4_RegisterWindow(This,fForceRegister,swc) ( (This)->lpVtbl -> RegisterWindow(This,fForceRegister,swc) )
#define IBrowserService4_WndProcBS(This,hwnd,uMsg,wParam,lParam) ( (This)->lpVtbl -> WndProcBS(This,hwnd,uMsg,wParam,lParam) )
#define IBrowserService4_SetAsDefFolderSettings(This) ( (This)->lpVtbl -> SetAsDefFolderSettings(This) )
#define IBrowserService4_GetViewRect(This,prc) ( (This)->lpVtbl -> GetViewRect(This,prc) )
#define IBrowserService4_OnSize(This,wParam) ( (This)->lpVtbl -> OnSize(This,wParam) )
#define IBrowserService4_OnCreate(This,pcs) ( (This)->lpVtbl -> OnCreate(This,pcs) )
#define IBrowserService4_OnCommand(This,wParam,lParam) ( (This)->lpVtbl -> OnCommand(This,wParam,lParam) )
#define IBrowserService4_OnDestroy(This) ( (This)->lpVtbl -> OnDestroy(This) )
#define IBrowserService4_OnNotify(This,pnm) ( (This)->lpVtbl -> OnNotify(This,pnm) )
#define IBrowserService4_OnSetFocus(This) ( (This)->lpVtbl -> OnSetFocus(This) )
#define IBrowserService4_OnFrameWindowActivateBS(This,fActive) ( (This)->lpVtbl -> OnFrameWindowActivateBS(This,fActive) )
#define IBrowserService4_ReleaseShellView(This) ( (This)->lpVtbl -> ReleaseShellView(This) )
#define IBrowserService4_ActivatePendingView(This) ( (This)->lpVtbl -> ActivatePendingView(This) )
#define IBrowserService4_CreateViewWindow(This,psvNew,psvOld,prcView,phwnd) ( (This)->lpVtbl -> CreateViewWindow(This,psvNew,psvOld,prcView,phwnd) )
#define IBrowserService4_CreateBrowserPropSheetExt(This,riid,ppv) ( (This)->lpVtbl -> CreateBrowserPropSheetExt(This,riid,ppv) )
#define IBrowserService4_GetViewWindow(This,phwndView) ( (This)->lpVtbl -> GetViewWindow(This,phwndView) )
#define IBrowserService4_GetBaseBrowserData(This,pbbd) ( (This)->lpVtbl -> GetBaseBrowserData(This,pbbd) )
#define IBrowserService4_PutBaseBrowserData(This) ( (This)->lpVtbl -> PutBaseBrowserData(This) )
#define IBrowserService4_InitializeTravelLog(This,ptl,dw) ( (This)->lpVtbl -> InitializeTravelLog(This,ptl,dw) )
#define IBrowserService4_SetTopBrowser(This) ( (This)->lpVtbl -> SetTopBrowser(This) )
#define IBrowserService4_Offline(This,iCmd) ( (This)->lpVtbl -> Offline(This,iCmd) )
#define IBrowserService4_AllowViewResize(This,f) ( (This)->lpVtbl -> AllowViewResize(This,f) )
#define IBrowserService4_SetActivateState(This,u) ( (This)->lpVtbl -> SetActivateState(This,u) )
#define IBrowserService4_UpdateSecureLockIcon(This,eSecureLock) ( (This)->lpVtbl -> UpdateSecureLockIcon(This,eSecureLock) )
#define IBrowserService4_InitializeDownloadManager(This) ( (This)->lpVtbl -> InitializeDownloadManager(This) )
#define IBrowserService4_InitializeTransitionSite(This) ( (This)->lpVtbl -> InitializeTransitionSite(This) )
#define IBrowserService4__Initialize(This,hwnd,pauto) ( (This)->lpVtbl -> _Initialize(This,hwnd,pauto) )
#define IBrowserService4__CancelPendingNavigationAsync(This) ( (This)->lpVtbl -> _CancelPendingNavigationAsync(This) )
#define IBrowserService4__CancelPendingView(This) ( (This)->lpVtbl -> _CancelPendingView(This) )
#define IBrowserService4__MaySaveChanges(This) ( (This)->lpVtbl -> _MaySaveChanges(This) )
#define IBrowserService4__PauseOrResumeView(This,fPaused) ( (This)->lpVtbl -> _PauseOrResumeView(This,fPaused) )
#define IBrowserService4__DisableModeless(This) ( (This)->lpVtbl -> _DisableModeless(This) )
#define IBrowserService4__NavigateToPidl(This,pidl,grfHLNF,dwFlags) ( (This)->lpVtbl -> _NavigateToPidl(This,pidl,grfHLNF,dwFlags) )
#define IBrowserService4__TryShell2Rename(This,psv,pidlNew) ( (This)->lpVtbl -> _TryShell2Rename(This,psv,pidlNew) )
#define IBrowserService4__SwitchActivationNow(This) ( (This)->lpVtbl -> _SwitchActivationNow(This) )
#define IBrowserService4__ExecChildren(This,punkBar,fBroadcast,pguidCmdGroup,nCmdID,nCmdexecopt,pvarargIn,pvarargOut) ( (This)->lpVtbl -> _ExecChildren(This,punkBar,fBroadcast,pguidCmdGroup,nCmdID,nCmdexecopt,pvarargIn,pvarargOut) )
#define IBrowserService4__SendChildren(This,hwndBar,fBroadcast,uMsg,wParam,lParam) ( (This)->lpVtbl -> _SendChildren(This,hwndBar,fBroadcast,uMsg,wParam,lParam) )
#define IBrowserService4_GetFolderSetData(This,pfsd) ( (This)->lpVtbl -> GetFolderSetData(This,pfsd) )
#define IBrowserService4__OnFocusChange(This,itb) ( (This)->lpVtbl -> _OnFocusChange(This,itb) )
#define IBrowserService4_v_ShowHideChildWindows(This,fChildOnly) ( (This)->lpVtbl -> v_ShowHideChildWindows(This,fChildOnly) )
#define IBrowserService4__get_itbLastFocus(This) ( (This)->lpVtbl -> _get_itbLastFocus(This) )
#define IBrowserService4__put_itbLastFocus(This,itbLastFocus) ( (This)->lpVtbl -> _put_itbLastFocus(This,itbLastFocus) )
#define IBrowserService4__UIActivateView(This,uState) ( (This)->lpVtbl -> _UIActivateView(This,uState) )
#define IBrowserService4__GetViewBorderRect(This,prc) ( (This)->lpVtbl -> _GetViewBorderRect(This,prc) )
#define IBrowserService4__UpdateViewRectSize(This) ( (This)->lpVtbl -> _UpdateViewRectSize(This) )
#define IBrowserService4__ResizeNextBorder(This,itb) ( (This)->lpVtbl -> _ResizeNextBorder(This,itb) )
#define IBrowserService4__ResizeView(This) ( (This)->lpVtbl -> _ResizeView(This) )
#define IBrowserService4__GetEffectiveClientArea(This,lprectBorder,hmon) ( (This)->lpVtbl -> _GetEffectiveClientArea(This,lprectBorder,hmon) )
#define IBrowserService4_v_GetViewStream(This,pidl,grfMode,pwszName) ( (This)->lpVtbl -> v_GetViewStream(This,pidl,grfMode,pwszName) )
#define IBrowserService4_ForwardViewMsg(This,uMsg,wParam,lParam) ( (This)->lpVtbl -> ForwardViewMsg(This,uMsg,wParam,lParam) )
#define IBrowserService4_SetAcceleratorMenu(This,hacc) ( (This)->lpVtbl -> SetAcceleratorMenu(This,hacc) )
#define IBrowserService4__GetToolbarCount(This) ( (This)->lpVtbl -> _GetToolbarCount(This) )
#define IBrowserService4__GetToolbarItem(This,itb) ( (This)->lpVtbl -> _GetToolbarItem(This,itb) )
#define IBrowserService4__SaveToolbars(This,pstm) ( (This)->lpVtbl -> _SaveToolbars(This,pstm) )
#define IBrowserService4__LoadToolbars(This,pstm) ( (This)->lpVtbl -> _LoadToolbars(This,pstm) )
#define IBrowserService4__CloseAndReleaseToolbars(This,fClose) ( (This)->lpVtbl -> _CloseAndReleaseToolbars(This,fClose) )
#define IBrowserService4_v_MayGetNextToolbarFocus(This,lpMsg,itbNext,citb,pptbi,phwnd) ( (This)->lpVtbl -> v_MayGetNextToolbarFocus(This,lpMsg,itbNext,citb,pptbi,phwnd) )
#define IBrowserService4__ResizeNextBorderHelper(This,itb,bUseHmonitor) ( (This)->lpVtbl -> _ResizeNextBorderHelper(This,itb,bUseHmonitor) )
#define IBrowserService4__FindTBar(This,punkSrc) ( (This)->lpVtbl -> _FindTBar(This,punkSrc) )
#define IBrowserService4__SetFocus(This,ptbi,hwnd,lpMsg) ( (This)->lpVtbl -> _SetFocus(This,ptbi,hwnd,lpMsg) )
#define IBrowserService4_v_MayTranslateAccelerator(This,pmsg) ( (This)->lpVtbl -> v_MayTranslateAccelerator(This,pmsg) )
#define IBrowserService4__GetBorderDWHelper(This,punkSrc,lprectBorder,bUseHmonitor) ( (This)->lpVtbl -> _GetBorderDWHelper(This,punkSrc,lprectBorder,bUseHmonitor) )
#define IBrowserService4_v_CheckZoneCrossing(This,pidl) ( (This)->lpVtbl -> v_CheckZoneCrossing(This,pidl) )
#define IBrowserService4__PositionViewWindow(This,hwnd,prc) ( (This)->lpVtbl -> _PositionViewWindow(This,hwnd,prc) )
#define IBrowserService4_IEParseDisplayNameEx(This,uiCP,pwszPath,dwFlags,ppidlOut) ( (This)->lpVtbl -> IEParseDisplayNameEx(This,uiCP,pwszPath,dwFlags,ppidlOut) )
#define IBrowserService4_ActivateView(This,fPendingView) ( (This)->lpVtbl -> ActivateView(This,fPendingView) )
#define IBrowserService4_SaveViewState(This) ( (This)->lpVtbl -> SaveViewState(This) )
#define IBrowserService4__ResizeAllBorders(This) ( (This)->lpVtbl -> _ResizeAllBorders(This) )
#endif
#endif
#endif
#if (_WIN32_IE >= _WIN32_IE_IE60)
extern RPC_IF_HANDLE __MIDL_itf_shdeprecated_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shdeprecated_0000_0009_v0_0_s_ifspec;
#ifndef __ITrackShellMenu_INTERFACE_DEFINED__
#define __ITrackShellMenu_INTERFACE_DEFINED__
extern const IID IID_ITrackShellMenu;
typedef struct ITrackShellMenuVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ITrackShellMenu *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITrackShellMenu * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITrackShellMenu * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (ITrackShellMenu * This, IShellMenuCallback * psmc, UINT uId, UINT uIdAncestor, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * GetMenuInfo) (ITrackShellMenu * This, IShellMenuCallback ** ppsmc, UINT * puId, UINT * puIdAncestor, DWORD * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * SetShellFolder) (ITrackShellMenu * This, IShellFolder * psf, PCIDLIST_ABSOLUTE pidlFolder, HKEY hKey, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * GetShellFolder) (ITrackShellMenu * This, DWORD * pdwFlags, PIDLIST_ABSOLUTE * ppidl, REFIID riid, void **ppv);
	HRESULT(STDMETHODCALLTYPE * SetMenu) (ITrackShellMenu * This, HMENU hmenu, HWND hwnd, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * GetMenu) (ITrackShellMenu * This, HMENU * phmenu, HWND * phwnd, DWORD * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * InvalidateItem) (ITrackShellMenu * This, LPSMDATA psmd, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * GetState) (ITrackShellMenu * This, LPSMDATA psmd);
	HRESULT(STDMETHODCALLTYPE * SetMenuToolbar) (ITrackShellMenu * This, IUnknown * punk, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * SetObscured) (ITrackShellMenu * This, HWND hwndTB, IUnknown * punkBand, DWORD dwSMSetFlags);
	HRESULT(STDMETHODCALLTYPE * Popup) (ITrackShellMenu * This, HWND hwnd, POINTL * ppt, RECTL * prcExclude, MP_POPUPFLAGS dwFlags);
	END_INTERFACE
}  ITrackShellMenuVtbl;
interface ITrackShellMenu
{
	CONST_VTBL struct ITrackShellMenuVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITrackShellMenu_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITrackShellMenu_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITrackShellMenu_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITrackShellMenu_Initialize(This,psmc,uId,uIdAncestor,dwFlags) ( (This)->lpVtbl -> Initialize(This,psmc,uId,uIdAncestor,dwFlags) )
#define ITrackShellMenu_GetMenuInfo(This,ppsmc,puId,puIdAncestor,pdwFlags) ( (This)->lpVtbl -> GetMenuInfo(This,ppsmc,puId,puIdAncestor,pdwFlags) )
#define ITrackShellMenu_SetShellFolder(This,psf,pidlFolder,hKey,dwFlags) ( (This)->lpVtbl -> SetShellFolder(This,psf,pidlFolder,hKey,dwFlags) )
#define ITrackShellMenu_GetShellFolder(This,pdwFlags,ppidl,riid,ppv) ( (This)->lpVtbl -> GetShellFolder(This,pdwFlags,ppidl,riid,ppv) )
#define ITrackShellMenu_SetMenu(This,hmenu,hwnd,dwFlags) ( (This)->lpVtbl -> SetMenu(This,hmenu,hwnd,dwFlags) )
#define ITrackShellMenu_GetMenu(This,phmenu,phwnd,pdwFlags) ( (This)->lpVtbl -> GetMenu(This,phmenu,phwnd,pdwFlags) )
#define ITrackShellMenu_InvalidateItem(This,psmd,dwFlags) ( (This)->lpVtbl -> InvalidateItem(This,psmd,dwFlags) )
#define ITrackShellMenu_GetState(This,psmd) ( (This)->lpVtbl -> GetState(This,psmd) )
#define ITrackShellMenu_SetMenuToolbar(This,punk,dwFlags) ( (This)->lpVtbl -> SetMenuToolbar(This,punk,dwFlags) )
#define ITrackShellMenu_SetObscured(This,hwndTB,punkBand,dwSMSetFlags) ( (This)->lpVtbl -> SetObscured(This,hwndTB,punkBand,dwSMSetFlags) )
#define ITrackShellMenu_Popup(This,hwnd,ppt,prcExclude,dwFlags) ( (This)->lpVtbl -> Popup(This,hwnd,ppt,prcExclude,dwFlags) )
#endif
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_shdeprecated_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shdeprecated_0000_0010_v0_0_s_ifspec;
#ifndef __ShellDeprecatedObjects_LIBRARY_DEFINED__
#define __ShellDeprecatedObjects_LIBRARY_DEFINED__
extern const IID LIBID_ShellDeprecatedObjects;
extern const CLSID CLSID_TrackShellMenu;
#endif
unsigned long __RPC_USER HMENU_UserSize(unsigned long *, unsigned long, HMENU *);
unsigned char *__RPC_USER HMENU_UserMarshal(unsigned long *, unsigned char *, HMENU *);
unsigned char *__RPC_USER HMENU_UserUnmarshal(unsigned long *, unsigned char *, HMENU *);
void __RPC_USER HMENU_UserFree(unsigned long *, HMENU *);
unsigned long __RPC_USER PCIDLIST_ABSOLUTE_UserSize(unsigned long *, unsigned long, PCIDLIST_ABSOLUTE *);
unsigned char *__RPC_USER PCIDLIST_ABSOLUTE_UserMarshal(unsigned long *, unsigned char *, PCIDLIST_ABSOLUTE *);
unsigned char *__RPC_USER PCIDLIST_ABSOLUTE_UserUnmarshal(unsigned long *, unsigned char *, PCIDLIST_ABSOLUTE *);
void __RPC_USER PCIDLIST_ABSOLUTE_UserFree(unsigned long *, PCIDLIST_ABSOLUTE *);
unsigned long __RPC_USER PIDLIST_ABSOLUTE_UserSize(unsigned long *, unsigned long, PIDLIST_ABSOLUTE *);
unsigned char *__RPC_USER PIDLIST_ABSOLUTE_UserMarshal(unsigned long *, unsigned char *, PIDLIST_ABSOLUTE *);
unsigned char *__RPC_USER PIDLIST_ABSOLUTE_UserUnmarshal(unsigned long *, unsigned char *, PIDLIST_ABSOLUTE *);
void __RPC_USER PIDLIST_ABSOLUTE_UserFree(unsigned long *, PIDLIST_ABSOLUTE *);
unsigned long __RPC_USER HMENU_UserSize64(unsigned long *, unsigned long, HMENU *);
unsigned char *__RPC_USER HMENU_UserMarshal64(unsigned long *, unsigned char *, HMENU *);
unsigned char *__RPC_USER HMENU_UserUnmarshal64(unsigned long *, unsigned char *, HMENU *);
void __RPC_USER HMENU_UserFree64(unsigned long *, HMENU *);
unsigned long __RPC_USER PCIDLIST_ABSOLUTE_UserSize64(unsigned long *, unsigned long, PCIDLIST_ABSOLUTE *);
unsigned char *__RPC_USER PCIDLIST_ABSOLUTE_UserMarshal64(unsigned long *, unsigned char *, PCIDLIST_ABSOLUTE *);
unsigned char *__RPC_USER PCIDLIST_ABSOLUTE_UserUnmarshal64(unsigned long *, unsigned char *, PCIDLIST_ABSOLUTE *);
void __RPC_USER PCIDLIST_ABSOLUTE_UserFree64(unsigned long *, PCIDLIST_ABSOLUTE *);
unsigned long __RPC_USER PIDLIST_ABSOLUTE_UserSize64(unsigned long *, unsigned long, PIDLIST_ABSOLUTE *);
unsigned char *__RPC_USER PIDLIST_ABSOLUTE_UserMarshal64(unsigned long *, unsigned char *, PIDLIST_ABSOLUTE *);
unsigned char *__RPC_USER PIDLIST_ABSOLUTE_UserUnmarshal64(unsigned long *, unsigned char *, PIDLIST_ABSOLUTE *);
void __RPC_USER PIDLIST_ABSOLUTE_UserFree64(unsigned long *, PIDLIST_ABSOLUTE *);
HRESULT STDMETHODCALLTYPE ITravelLog_GetTravelEntry_Proxy(ITravelLog *This, IUnknown *punk, int iOffset, ITravelEntry **ppte);
HRESULT STDMETHODCALLTYPE ITravelLog_GetTravelEntry_Stub(ITravelLog *This, IUnknown *punk, int iOffset, ITravelEntry **ppte);
#endif
