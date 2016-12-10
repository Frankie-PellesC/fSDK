/*+@@file@@----------------------------------------------------------------*//*!
 \file		MsHtmHst.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug 14 19:57:15 2016
 \date		Modified on Sun Aug 14 19:57:15 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
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
#ifndef __mshtmhst_h__
#define __mshtmhst_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IHostDialogHelper_FWD_DEFINED__
#define __IHostDialogHelper_FWD_DEFINED__
typedef interface IHostDialogHelper IHostDialogHelper;
#endif
#ifndef __HostDialogHelper_FWD_DEFINED__
#define __HostDialogHelper_FWD_DEFINED__
typedef struct HostDialogHelper HostDialogHelper;
#endif
#ifndef __IDocHostUIHandler_FWD_DEFINED__
#define __IDocHostUIHandler_FWD_DEFINED__
typedef interface IDocHostUIHandler IDocHostUIHandler;
#endif
#ifndef __IDocHostUIHandler2_FWD_DEFINED__
#define __IDocHostUIHandler2_FWD_DEFINED__
typedef interface IDocHostUIHandler2 IDocHostUIHandler2;
#endif
#ifndef __ICustomDoc_FWD_DEFINED__
#define __ICustomDoc_FWD_DEFINED__
typedef interface ICustomDoc ICustomDoc;
#endif
#ifndef __IDocHostShowUI_FWD_DEFINED__
#define __IDocHostShowUI_FWD_DEFINED__
typedef interface IDocHostShowUI IDocHostShowUI;
#endif
#ifndef __IClassFactoryEx_FWD_DEFINED__
#define __IClassFactoryEx_FWD_DEFINED__
typedef interface IClassFactoryEx IClassFactoryEx;
#endif
#ifndef __IHTMLOMWindowServices_FWD_DEFINED__
#define __IHTMLOMWindowServices_FWD_DEFINED__
typedef interface IHTMLOMWindowServices IHTMLOMWindowServices;
#endif
#include <ocidl.h>
#include <docobj.h>
#pragma comment(lib,"uuid.lib")
#ifndef MSHTMHST_H
#define MSHTMHST_H
#define CONTEXT_MENU_DEFAULT        0
#define CONTEXT_MENU_IMAGE          1
#define CONTEXT_MENU_CONTROL        2
#define CONTEXT_MENU_TABLE          3
#define CONTEXT_MENU_TEXTSELECT     4
#define CONTEXT_MENU_ANCHOR         5
#define CONTEXT_MENU_UNKNOWN        6
#define CONTEXT_MENU_IMGDYNSRC      7
#define CONTEXT_MENU_IMGART         8
#define CONTEXT_MENU_DEBUG          9
#define CONTEXT_MENU_VSCROLL        10
#define CONTEXT_MENU_HSCROLL        11
#define MENUEXT_SHOWDIALOG           0x1
#define DOCHOSTUIFLAG_BROWSER       (DOCHOSTUIFLAG_DISABLE_HELP_MENU | DOCHOSTUIFLAG_DISABLE_SCRIPT_INACTIVE)
#define HTMLDLG_NOUI                     0x0010
#define HTMLDLG_MODAL                    0x0020
#define HTMLDLG_MODELESS                 0x0040
#define HTMLDLG_PRINT_TEMPLATE           0x0080
#define HTMLDLG_VERIFY                   0x0100
#define HTMLDLG_ALLOW_UNKNOWN_THREAD     0x0200
#define PRINT_DONTBOTHERUSER             0x01
#define PRINT_WAITFORCOMPLETION          0x02
#define CMDID_SCRIPTSITE_URL                0
#define CMDID_SCRIPTSITE_HTMLDLGTRUST       1
#define CMDID_SCRIPTSITE_SECSTATE           2
#define CMDID_SCRIPTSITE_SID                3
#define CMDID_SCRIPTSITE_TRUSTEDDOC         4
#define CMDID_SCRIPTSITE_SECURITY_WINDOW    5
#define CMDID_SCRIPTSITE_NAMESPACE          6
#define CMDID_SCRIPTSITE_IURI               7
extern const GUID CGID_ScriptSite;
extern const GUID CGID_MSHTML;
#define CMDSETID_Forms3 CGID_MSHTML
#define SZ_HTML_CLIENTSITE_OBJECTPARAM L"{d4db6850-5385-11d0-89e9-00a0c90a90ac}"
#ifndef __IHTMLWindow2_FWD_DEFINED__
#define __IHTMLWindow2_FWD_DEFINED__
typedef interface IHTMLWindow2 IHTMLWindow2;
#endif
typedef HRESULT STDAPICALLTYPE SHOWHTMLDIALOGFN(HWND hwndParent, IMoniker *pmk, VARIANT *pvarArgIn, WCHAR *pchOptions, VARIANT *pvArgOut);
typedef HRESULT STDAPICALLTYPE SHOWHTMLDIALOGEXFN(HWND hwndParent, IMoniker *pmk, DWORD dwDialogFlags, VARIANT *pvarArgIn, WCHAR *pchOptions, VARIANT *pvArgOut);
typedef HRESULT STDAPICALLTYPE SHOWMODELESSHTMLDIALOGFN(HWND hwndParent, IMoniker *pmk, VARIANT *pvarArgIn, VARIANT *pvarOptions, IHTMLWindow2 **ppWindow);
typedef HRESULT STDAPICALLTYPE IEREGISTERXMLNSFN(LPCWSTR lpszURI, GUID clsid, BOOL fMachine);
typedef HRESULT STDAPICALLTYPE IEISXMLNSREGISTEREDFN(LPCWSTR lpszURI, GUID *pCLSID);
STDAPI ShowHTMLDialog(HWND hwndParent, IMoniker *pMk, VARIANT *pvarArgIn, LPWSTR pchOptions, VARIANT *pvarArgOut);
STDAPI ShowHTMLDialogEx(HWND hwndParent, IMoniker *pMk, DWORD dwDialogFlags, VARIANT *pvarArgIn, LPWSTR pchOptions, VARIANT *pvarArgOut);
STDAPI ShowModelessHTMLDialog(HWND hwndParent, IMoniker *pMk, VARIANT *pvarArgIn, VARIANT *pvarOptions, IHTMLWindow2 **ppWindow);
STDAPI RunHTMLApplication(HINSTANCE hinst, HINSTANCE hPrevInst, LPSTR szCmdLine, int nCmdShow);
STDAPI CreateHTMLPropertyPage(IMoniker *pmk, IPropertyPage **ppPP);
STDAPI IERegisterXMLNS(LPCWSTR lpszURI, GUID clsid, BOOL fMachine);
STDAPI IEIsXMLNSRegistered(LPCWSTR lpszURI, GUID *pCLSID);
extern RPC_IF_HANDLE __MIDL_itf_mshtmhst_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mshtmhst_0000_0000_v0_0_s_ifspec;
#ifndef __IHostDialogHelper_INTERFACE_DEFINED__
#define __IHostDialogHelper_INTERFACE_DEFINED__
extern const IID IID_IHostDialogHelper;
typedef struct IHostDialogHelperVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IHostDialogHelper *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IHostDialogHelper *This);
	ULONG(STDMETHODCALLTYPE *Release) (IHostDialogHelper *This);
	HRESULT(STDMETHODCALLTYPE *ShowHTMLDialog) (IHostDialogHelper *This, HWND hwndParent, IMoniker *pMk, VARIANT *pvarArgIn, WCHAR *pchOptions, VARIANT *pvarArgOut, IUnknown *punkHost);
	END_INTERFACE
}  IHostDialogHelperVtbl;
interface IHostDialogHelper
{
	CONST_VTBL struct IHostDialogHelperVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IHostDialogHelper_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IHostDialogHelper_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IHostDialogHelper_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IHostDialogHelper_ShowHTMLDialog(This,hwndParent,pMk,pvarArgIn,pchOptions,pvarArgOut,punkHost) ( (This)->lpVtbl -> ShowHTMLDialog(This,hwndParent,pMk,pvarArgIn,pchOptions,pvarArgOut,punkHost) )
#endif
#endif
extern const GUID CLSID_HostDialogHelper;
typedef enum tagDOCHOSTUITYPE
{
	DOCHOSTUITYPE_BROWSE = 0,
	DOCHOSTUITYPE_AUTHOR = 1
} DOCHOSTUITYPE;
typedef enum tagDOCHOSTUIDBLCLK
{
	DOCHOSTUIDBLCLK_DEFAULT = 0,
	DOCHOSTUIDBLCLK_SHOWPROPERTIES = 1,
	DOCHOSTUIDBLCLK_SHOWCODE = 2
} DOCHOSTUIDBLCLK;
typedef enum tagDOCHOSTUIFLAG
{
	DOCHOSTUIFLAG_DIALOG = 0x1,
	DOCHOSTUIFLAG_DISABLE_HELP_MENU = 0x2,
	DOCHOSTUIFLAG_NO3DBORDER = 0x4,
	DOCHOSTUIFLAG_SCROLL_NO = 0x8,
	DOCHOSTUIFLAG_DISABLE_SCRIPT_INACTIVE = 0x10,
	DOCHOSTUIFLAG_OPENNEWWIN = 0x20,
	DOCHOSTUIFLAG_DISABLE_OFFSCREEN = 0x40,
	DOCHOSTUIFLAG_FLAT_SCROLLBAR = 0x80,
	DOCHOSTUIFLAG_DIV_BLOCKDEFAULT = 0x100,
	DOCHOSTUIFLAG_ACTIVATE_CLIENTHIT_ONLY = 0x200,
	DOCHOSTUIFLAG_OVERRIDEBEHAVIORFACTORY = 0x400,
	DOCHOSTUIFLAG_CODEPAGELINKEDFONTS = 0x800,
	DOCHOSTUIFLAG_URL_ENCODING_DISABLE_UTF8 = 0x1000,
	DOCHOSTUIFLAG_URL_ENCODING_ENABLE_UTF8 = 0x2000,
	DOCHOSTUIFLAG_ENABLE_FORMS_AUTOCOMPLETE = 0x4000,
	DOCHOSTUIFLAG_ENABLE_INPLACE_NAVIGATION = 0x10000,
	DOCHOSTUIFLAG_IME_ENABLE_RECONVERSION = 0x20000,
	DOCHOSTUIFLAG_THEME = 0x40000,
	DOCHOSTUIFLAG_NOTHEME = 0x80000,
	DOCHOSTUIFLAG_NOPICS = 0x100000,
	DOCHOSTUIFLAG_NO3DOUTERBORDER = 0x200000,
	DOCHOSTUIFLAG_DISABLE_EDIT_NS_FIXUP = 0x400000,
	DOCHOSTUIFLAG_LOCAL_MACHINE_ACCESS_CHECK = 0x800000,
	DOCHOSTUIFLAG_DISABLE_UNTRUSTEDPROTOCOL = 0x1000000,
	DOCHOSTUIFLAG_HOST_NAVIGATES = 0x2000000,
	DOCHOSTUIFLAG_ENABLE_REDIRECT_NOTIFICATION = 0x4000000,
	DOCHOSTUIFLAG_USE_WINDOWLESS_SELECTCONTROL = 0x8000000,
	DOCHOSTUIFLAG_USE_WINDOWED_SELECTCONTROL = 0x10000000,
	DOCHOSTUIFLAG_ENABLE_ACTIVEX_INACTIVATE_MODE = 0x20000000,
	DOCHOSTUIFLAG_DPI_AWARE = 0x40000000
} DOCHOSTUIFLAG;
#define DOCHOSTUIATOM_ENABLE_HIRES   _T("TridentEnableHiRes")
extern RPC_IF_HANDLE __MIDL_itf_mshtmhst_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mshtmhst_0000_0001_v0_0_s_ifspec;
#ifndef __IDocHostUIHandler_INTERFACE_DEFINED__
#define __IDocHostUIHandler_INTERFACE_DEFINED__
typedef struct _DOCHOSTUIINFO
{
	ULONG cbSize;
	DWORD dwFlags;
	DWORD dwDoubleClick;
	OLECHAR *pchHostCss;
	OLECHAR *pchHostNS;
} DOCHOSTUIINFO;
extern const IID IID_IDocHostUIHandler;
typedef struct IDocHostUIHandlerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDocHostUIHandler *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDocHostUIHandler *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDocHostUIHandler *This);
	HRESULT(STDMETHODCALLTYPE *ShowContextMenu) (IDocHostUIHandler *This, DWORD dwID, POINT *ppt, IUnknown *pcmdtReserved, IDispatch *pdispReserved);
	HRESULT(STDMETHODCALLTYPE *GetHostInfo) (IDocHostUIHandler *This, DOCHOSTUIINFO *pInfo);
	HRESULT(STDMETHODCALLTYPE *ShowUI) (IDocHostUIHandler *This, DWORD dwID, IOleInPlaceActiveObject *pActiveObject, IOleCommandTarget *pCommandTarget, IOleInPlaceFrame *pFrame, IOleInPlaceUIWindow *pDoc);
	HRESULT(STDMETHODCALLTYPE *HideUI) (IDocHostUIHandler *This);
	HRESULT(STDMETHODCALLTYPE *UpdateUI) (IDocHostUIHandler *This);
	HRESULT(STDMETHODCALLTYPE *EnableModeless) (IDocHostUIHandler *This, BOOL fEnable);
	HRESULT(STDMETHODCALLTYPE *OnDocWindowActivate) (IDocHostUIHandler *This, BOOL fActivate);
	HRESULT(STDMETHODCALLTYPE *OnFrameWindowActivate) (IDocHostUIHandler *This, BOOL fActivate);
	HRESULT(STDMETHODCALLTYPE *ResizeBorder) (IDocHostUIHandler *This, LPCRECT prcBorder, IOleInPlaceUIWindow *pUIWindow, BOOL fRameWindow);
	HRESULT(STDMETHODCALLTYPE *TranslateAccelerator) (IDocHostUIHandler *This, LPMSG lpMsg, const GUID *pguidCmdGroup, DWORD nCmdID);
	HRESULT(STDMETHODCALLTYPE *GetOptionKeyPath) (IDocHostUIHandler *This, LPOLESTR *pchKey, DWORD dw);
	HRESULT(STDMETHODCALLTYPE *GetDropTarget) (IDocHostUIHandler *This, IDropTarget *pDropTarget, IDropTarget **ppDropTarget);
	HRESULT(STDMETHODCALLTYPE *GetExternal) (IDocHostUIHandler *This, IDispatch **ppDispatch);
	HRESULT(STDMETHODCALLTYPE *TranslateUrl) (IDocHostUIHandler *This, DWORD dwTranslate, OLECHAR *pchURLIn, OLECHAR **ppchURLOut);
	HRESULT(STDMETHODCALLTYPE *FilterDataObject) (IDocHostUIHandler *This, IDataObject *pDO, IDataObject **ppDORet);
	END_INTERFACE
}  IDocHostUIHandlerVtbl;
interface IDocHostUIHandler
{
	CONST_VTBL struct IDocHostUIHandlerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDocHostUIHandler_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDocHostUIHandler_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IDocHostUIHandler_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IDocHostUIHandler_ShowContextMenu(This,dwID,ppt,pcmdtReserved,pdispReserved) ( (This)->lpVtbl -> ShowContextMenu(This,dwID,ppt,pcmdtReserved,pdispReserved) )
#define IDocHostUIHandler_GetHostInfo(This,pInfo) ( (This)->lpVtbl -> GetHostInfo(This,pInfo) )
#define IDocHostUIHandler_ShowUI(This,dwID,pActiveObject,pCommandTarget,pFrame,pDoc) ( (This)->lpVtbl -> ShowUI(This,dwID,pActiveObject,pCommandTarget,pFrame,pDoc) )
#define IDocHostUIHandler_HideUI(This) ( (This)->lpVtbl -> HideUI(This) )
#define IDocHostUIHandler_UpdateUI(This) ( (This)->lpVtbl -> UpdateUI(This) )
#define IDocHostUIHandler_EnableModeless(This,fEnable) ( (This)->lpVtbl -> EnableModeless(This,fEnable) )
#define IDocHostUIHandler_OnDocWindowActivate(This,fActivate) ( (This)->lpVtbl -> OnDocWindowActivate(This,fActivate) )
#define IDocHostUIHandler_OnFrameWindowActivate(This,fActivate) ( (This)->lpVtbl -> OnFrameWindowActivate(This,fActivate) )
#define IDocHostUIHandler_ResizeBorder(This,prcBorder,pUIWindow,fRameWindow) ( (This)->lpVtbl -> ResizeBorder(This,prcBorder,pUIWindow,fRameWindow) )
#define IDocHostUIHandler_TranslateAccelerator(This,lpMsg,pguidCmdGroup,nCmdID) ( (This)->lpVtbl -> TranslateAccelerator(This,lpMsg,pguidCmdGroup,nCmdID) )
#define IDocHostUIHandler_GetOptionKeyPath(This,pchKey,dw) ( (This)->lpVtbl -> GetOptionKeyPath(This,pchKey,dw) )
#define IDocHostUIHandler_GetDropTarget(This,pDropTarget,ppDropTarget) ( (This)->lpVtbl -> GetDropTarget(This,pDropTarget,ppDropTarget) )
#define IDocHostUIHandler_GetExternal(This,ppDispatch) ( (This)->lpVtbl -> GetExternal(This,ppDispatch) )
#define IDocHostUIHandler_TranslateUrl(This,dwTranslate,pchURLIn,ppchURLOut) ( (This)->lpVtbl -> TranslateUrl(This,dwTranslate,pchURLIn,ppchURLOut) )
#define IDocHostUIHandler_FilterDataObject(This,pDO,ppDORet) ( (This)->lpVtbl -> FilterDataObject(This,pDO,ppDORet) )
#endif
#endif
#ifndef __IDocHostUIHandler2_INTERFACE_DEFINED__
#define __IDocHostUIHandler2_INTERFACE_DEFINED__
extern const IID IID_IDocHostUIHandler2;
typedef struct IDocHostUIHandler2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDocHostUIHandler2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDocHostUIHandler2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDocHostUIHandler2 *This);
	HRESULT(STDMETHODCALLTYPE *ShowContextMenu) (IDocHostUIHandler2 *This, DWORD dwID, POINT *ppt, IUnknown *pcmdtReserved, IDispatch *pdispReserved);
	HRESULT(STDMETHODCALLTYPE *GetHostInfo) (IDocHostUIHandler2 *This, DOCHOSTUIINFO *pInfo);
	HRESULT(STDMETHODCALLTYPE *ShowUI) (IDocHostUIHandler2 *This, DWORD dwID, IOleInPlaceActiveObject *pActiveObject, IOleCommandTarget *pCommandTarget, IOleInPlaceFrame *pFrame, IOleInPlaceUIWindow *pDoc);
	HRESULT(STDMETHODCALLTYPE *HideUI) (IDocHostUIHandler2 *This);
	HRESULT(STDMETHODCALLTYPE *UpdateUI) (IDocHostUIHandler2 *This);
	HRESULT(STDMETHODCALLTYPE *EnableModeless) (IDocHostUIHandler2 *This, BOOL fEnable);
	HRESULT(STDMETHODCALLTYPE *OnDocWindowActivate) (IDocHostUIHandler2 *This, BOOL fActivate);
	HRESULT(STDMETHODCALLTYPE *OnFrameWindowActivate) (IDocHostUIHandler2 *This, BOOL fActivate);
	HRESULT(STDMETHODCALLTYPE *ResizeBorder) (IDocHostUIHandler2 *This, LPCRECT prcBorder, IOleInPlaceUIWindow *pUIWindow, BOOL fRameWindow);
	HRESULT(STDMETHODCALLTYPE *TranslateAccelerator) (IDocHostUIHandler2 *This, LPMSG lpMsg, const GUID *pguidCmdGroup, DWORD nCmdID);
	HRESULT(STDMETHODCALLTYPE *GetOptionKeyPath) (IDocHostUIHandler2 *This, LPOLESTR *pchKey, DWORD dw);
	HRESULT(STDMETHODCALLTYPE *GetDropTarget) (IDocHostUIHandler2 *This, IDropTarget *pDropTarget, IDropTarget **ppDropTarget);
	HRESULT(STDMETHODCALLTYPE *GetExternal) (IDocHostUIHandler2 *This, IDispatch **ppDispatch);
	HRESULT(STDMETHODCALLTYPE *TranslateUrl) (IDocHostUIHandler2 *This, DWORD dwTranslate, OLECHAR *pchURLIn, OLECHAR **ppchURLOut);
	HRESULT(STDMETHODCALLTYPE *FilterDataObject) (IDocHostUIHandler2 *This, IDataObject *pDO, IDataObject **ppDORet);
	HRESULT(STDMETHODCALLTYPE *GetOverrideKeyPath) (IDocHostUIHandler2 *This, LPOLESTR *pchKey, DWORD dw);
	END_INTERFACE
}  IDocHostUIHandler2Vtbl;
interface IDocHostUIHandler2
{
	CONST_VTBL struct IDocHostUIHandler2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDocHostUIHandler2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDocHostUIHandler2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IDocHostUIHandler2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IDocHostUIHandler2_ShowContextMenu(This,dwID,ppt,pcmdtReserved,pdispReserved) ( (This)->lpVtbl -> ShowContextMenu(This,dwID,ppt,pcmdtReserved,pdispReserved) )
#define IDocHostUIHandler2_GetHostInfo(This,pInfo) ( (This)->lpVtbl -> GetHostInfo(This,pInfo) )
#define IDocHostUIHandler2_ShowUI(This,dwID,pActiveObject,pCommandTarget,pFrame,pDoc) ( (This)->lpVtbl -> ShowUI(This,dwID,pActiveObject,pCommandTarget,pFrame,pDoc) )
#define IDocHostUIHandler2_HideUI(This) ( (This)->lpVtbl -> HideUI(This) )
#define IDocHostUIHandler2_UpdateUI(This) ( (This)->lpVtbl -> UpdateUI(This) )
#define IDocHostUIHandler2_EnableModeless(This,fEnable) ( (This)->lpVtbl -> EnableModeless(This,fEnable) )
#define IDocHostUIHandler2_OnDocWindowActivate(This,fActivate) ( (This)->lpVtbl -> OnDocWindowActivate(This,fActivate) )
#define IDocHostUIHandler2_OnFrameWindowActivate(This,fActivate) ( (This)->lpVtbl -> OnFrameWindowActivate(This,fActivate) )
#define IDocHostUIHandler2_ResizeBorder(This,prcBorder,pUIWindow,fRameWindow) ( (This)->lpVtbl -> ResizeBorder(This,prcBorder,pUIWindow,fRameWindow) )
#define IDocHostUIHandler2_TranslateAccelerator(This,lpMsg,pguidCmdGroup,nCmdID) ( (This)->lpVtbl -> TranslateAccelerator(This,lpMsg,pguidCmdGroup,nCmdID) )
#define IDocHostUIHandler2_GetOptionKeyPath(This,pchKey,dw) ( (This)->lpVtbl -> GetOptionKeyPath(This,pchKey,dw) )
#define IDocHostUIHandler2_GetDropTarget(This,pDropTarget,ppDropTarget) ( (This)->lpVtbl -> GetDropTarget(This,pDropTarget,ppDropTarget) )
#define IDocHostUIHandler2_GetExternal(This,ppDispatch) ( (This)->lpVtbl -> GetExternal(This,ppDispatch) )
#define IDocHostUIHandler2_TranslateUrl(This,dwTranslate,pchURLIn,ppchURLOut) ( (This)->lpVtbl -> TranslateUrl(This,dwTranslate,pchURLIn,ppchURLOut) )
#define IDocHostUIHandler2_FilterDataObject(This,pDO,ppDORet) ( (This)->lpVtbl -> FilterDataObject(This,pDO,ppDORet) )
#define IDocHostUIHandler2_GetOverrideKeyPath(This,pchKey,dw) ( (This)->lpVtbl -> GetOverrideKeyPath(This,pchKey,dw) )
#endif
#endif
DEFINE_GUID(CGID_DocHostCommandHandler, 0xf38bc242, 0xb950, 0x11d1, 0x89, 0x18, 0x00, 0xc0, 0x4f, 0xc2, 0xc8, 0x36);
extern RPC_IF_HANDLE __MIDL_itf_mshtmhst_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mshtmhst_0000_0003_v0_0_s_ifspec;
#ifndef __ICustomDoc_INTERFACE_DEFINED__
#define __ICustomDoc_INTERFACE_DEFINED__
extern const IID IID_ICustomDoc;
typedef struct ICustomDocVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICustomDoc * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICustomDoc * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICustomDoc * This);
	HRESULT(STDMETHODCALLTYPE * SetUIHandler) (ICustomDoc * This, IDocHostUIHandler * pUIHandler);
	END_INTERFACE
}  ICustomDocVtbl;
interface ICustomDoc
{
	CONST_VTBL struct ICustomDocVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICustomDoc_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICustomDoc_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ICustomDoc_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ICustomDoc_SetUIHandler(This,pUIHandler) ( (This)->lpVtbl -> SetUIHandler(This,pUIHandler) )
#endif
#endif
#ifndef __IDocHostShowUI_INTERFACE_DEFINED__
#define __IDocHostShowUI_INTERFACE_DEFINED__
extern const IID IID_IDocHostShowUI;
typedef struct IDocHostShowUIVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDocHostShowUI * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDocHostShowUI * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDocHostShowUI * This);
	HRESULT(STDMETHODCALLTYPE * ShowMessage) (IDocHostShowUI * This, HWND hwnd, LPOLESTR lpstrText, LPOLESTR lpstrCaption, DWORD dwType, LPOLESTR lpstrHelpFile, DWORD dwHelpContext, LRESULT * plResult);
	HRESULT(STDMETHODCALLTYPE * ShowHelp) (IDocHostShowUI * This, HWND hwnd, LPOLESTR pszHelpFile, UINT uCommand, DWORD dwData, POINT ptMouse, IDispatch * pDispatchObjectHit);
	END_INTERFACE
}  IDocHostShowUIVtbl;
interface IDocHostShowUI
{
	CONST_VTBL struct IDocHostShowUIVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDocHostShowUI_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDocHostShowUI_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IDocHostShowUI_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IDocHostShowUI_ShowMessage(This,hwnd,lpstrText,lpstrCaption,dwType,lpstrHelpFile,dwHelpContext,plResult) ( (This)->lpVtbl -> ShowMessage(This,hwnd,lpstrText,lpstrCaption,dwType,lpstrHelpFile,dwHelpContext,plResult) )
#define IDocHostShowUI_ShowHelp(This,hwnd,pszHelpFile,uCommand,dwData,ptMouse,pDispatchObjectHit) ( (This)->lpVtbl -> ShowHelp(This,hwnd,pszHelpFile,uCommand,dwData,ptMouse,pDispatchObjectHit) )
#endif
#endif
#define IClassFactory3      IClassFactoryEx
#define IID_IClassFactory3  IID_IClassFactoryEx
extern RPC_IF_HANDLE __MIDL_itf_mshtmhst_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mshtmhst_0000_0005_v0_0_s_ifspec;
#ifndef __IClassFactoryEx_INTERFACE_DEFINED__
#define __IClassFactoryEx_INTERFACE_DEFINED__
extern const IID IID_IClassFactoryEx;
typedef struct IClassFactoryExVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IClassFactoryEx * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IClassFactoryEx * This);
	ULONG(STDMETHODCALLTYPE * Release) (IClassFactoryEx * This);
	HRESULT(STDMETHODCALLTYPE * CreateInstance) (IClassFactoryEx * This, IUnknown * pUnkOuter, REFIID riid, void **ppvObject);
	HRESULT(STDMETHODCALLTYPE * LockServer) (IClassFactoryEx * This, BOOL fLock);
	HRESULT(STDMETHODCALLTYPE * CreateInstanceWithContext) (IClassFactoryEx * This, IUnknown * punkContext, IUnknown * punkOuter, REFIID riid, void **ppv);
	END_INTERFACE
}  IClassFactoryExVtbl;
interface IClassFactoryEx
{
	CONST_VTBL struct IClassFactoryExVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IClassFactoryEx_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IClassFactoryEx_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IClassFactoryEx_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IClassFactoryEx_CreateInstance(This,pUnkOuter,riid,ppvObject) ( (This)->lpVtbl -> CreateInstance(This,pUnkOuter,riid,ppvObject) )
#define IClassFactoryEx_LockServer(This,fLock) ( (This)->lpVtbl -> LockServer(This,fLock) )
#define IClassFactoryEx_CreateInstanceWithContext(This,punkContext,punkOuter,riid,ppv) ( (This)->lpVtbl -> CreateInstanceWithContext(This,punkContext,punkOuter,riid,ppv) )
#endif
#endif
#ifndef __IHTMLOMWindowServices_INTERFACE_DEFINED__
#define __IHTMLOMWindowServices_INTERFACE_DEFINED__
extern const IID IID_IHTMLOMWindowServices;
typedef struct IHTMLOMWindowServicesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IHTMLOMWindowServices * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IHTMLOMWindowServices * This);
	ULONG(STDMETHODCALLTYPE * Release) (IHTMLOMWindowServices * This);
	HRESULT(STDMETHODCALLTYPE * moveTo) (IHTMLOMWindowServices * This, LONG x, LONG y);
	HRESULT(STDMETHODCALLTYPE * moveBy) (IHTMLOMWindowServices * This, LONG x, LONG y);
	HRESULT(STDMETHODCALLTYPE * resizeTo) (IHTMLOMWindowServices * This, LONG x, LONG y);
	HRESULT(STDMETHODCALLTYPE * resizeBy) (IHTMLOMWindowServices * This, LONG x, LONG y);
	END_INTERFACE
}  IHTMLOMWindowServicesVtbl;
interface IHTMLOMWindowServices
{
	CONST_VTBL struct IHTMLOMWindowServicesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IHTMLOMWindowServices_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IHTMLOMWindowServices_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IHTMLOMWindowServices_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IHTMLOMWindowServices_moveTo(This,x,y) ( (This)->lpVtbl -> moveTo(This,x,y) )
#define IHTMLOMWindowServices_moveBy(This,x,y) ( (This)->lpVtbl -> moveBy(This,x,y) )
#define IHTMLOMWindowServices_resizeTo(This,x,y) ( (This)->lpVtbl -> resizeTo(This,x,y) )
#define IHTMLOMWindowServices_resizeBy(This,x,y) ( (This)->lpVtbl -> resizeBy(This,x,y) )
#endif
#endif
#define SID_SHTMLOMWindowServices  IID_IHTMLOMWindowServices
#endif
extern RPC_IF_HANDLE __MIDL_itf_mshtmhst_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mshtmhst_0000_0007_v0_0_s_ifspec;
#endif
