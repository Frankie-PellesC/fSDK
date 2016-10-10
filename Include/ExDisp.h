/*+@@file@@----------------------------------------------------------------*//*!
 \file		ExDisp.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Wed Jun 29 14:22:53 2016
 \date		Modified on Wed Jun 29 14:22:53 2016
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
#ifndef __exdisp_h__
#define __exdisp_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWebBrowser_FWD_DEFINED__
#define __IWebBrowser_FWD_DEFINED__
typedef interface IWebBrowser IWebBrowser;
#endif
#ifndef __DWebBrowserEvents_FWD_DEFINED__
#define __DWebBrowserEvents_FWD_DEFINED__
typedef interface DWebBrowserEvents DWebBrowserEvents;
#endif
#ifndef __IWebBrowserApp_FWD_DEFINED__
#define __IWebBrowserApp_FWD_DEFINED__
typedef interface IWebBrowserApp IWebBrowserApp;
#endif
#ifndef __IWebBrowser2_FWD_DEFINED__
#define __IWebBrowser2_FWD_DEFINED__
typedef interface IWebBrowser2 IWebBrowser2;
#endif
#ifndef __DWebBrowserEvents2_FWD_DEFINED__
#define __DWebBrowserEvents2_FWD_DEFINED__
typedef interface DWebBrowserEvents2 DWebBrowserEvents2;
#endif
#ifndef __WebBrowser_V1_FWD_DEFINED__
#define __WebBrowser_V1_FWD_DEFINED__
typedef struct WebBrowser_V1 WebBrowser_V1;
#endif
#ifndef __WebBrowser_FWD_DEFINED__
#define __WebBrowser_FWD_DEFINED__
typedef struct WebBrowser WebBrowser;
#endif
#ifndef __InternetExplorer_FWD_DEFINED__
#define __InternetExplorer_FWD_DEFINED__
typedef struct InternetExplorer InternetExplorer;
#endif
#ifndef __InternetExplorerMedium_FWD_DEFINED__
#define __InternetExplorerMedium_FWD_DEFINED__
typedef struct InternetExplorerMedium InternetExplorerMedium;
#endif
#ifndef __ShellBrowserWindow_FWD_DEFINED__
#define __ShellBrowserWindow_FWD_DEFINED__
typedef struct ShellBrowserWindow ShellBrowserWindow;
#endif
#ifndef __DShellWindowsEvents_FWD_DEFINED__
#define __DShellWindowsEvents_FWD_DEFINED__
typedef interface DShellWindowsEvents DShellWindowsEvents;
#endif
#ifndef __IShellWindows_FWD_DEFINED__
#define __IShellWindows_FWD_DEFINED__
typedef interface IShellWindows IShellWindows;
#endif
#ifndef __ShellWindows_FWD_DEFINED__
#define __ShellWindows_FWD_DEFINED__
typedef struct ShellWindows ShellWindows;
#endif
#ifndef __IShellUIHelper_FWD_DEFINED__
#define __IShellUIHelper_FWD_DEFINED__
typedef interface IShellUIHelper IShellUIHelper;
#endif
#ifndef __IShellUIHelper2_FWD_DEFINED__
#define __IShellUIHelper2_FWD_DEFINED__
typedef interface IShellUIHelper2 IShellUIHelper2;
#endif
#ifndef __IShellUIHelper3_FWD_DEFINED__
#define __IShellUIHelper3_FWD_DEFINED__
typedef interface IShellUIHelper3 IShellUIHelper3;
#endif
#ifndef __ShellUIHelper_FWD_DEFINED__
#define __ShellUIHelper_FWD_DEFINED__
typedef struct ShellUIHelper ShellUIHelper;
#endif
#ifndef __DShellNameSpaceEvents_FWD_DEFINED__
#define __DShellNameSpaceEvents_FWD_DEFINED__
typedef interface DShellNameSpaceEvents DShellNameSpaceEvents;
#endif
#ifndef __IShellFavoritesNameSpace_FWD_DEFINED__
#define __IShellFavoritesNameSpace_FWD_DEFINED__
typedef interface IShellFavoritesNameSpace IShellFavoritesNameSpace;
#endif
#ifndef __IShellNameSpace_FWD_DEFINED__
#define __IShellNameSpace_FWD_DEFINED__
typedef interface IShellNameSpace IShellNameSpace;
#endif
#ifndef __ShellNameSpace_FWD_DEFINED__
#define __ShellNameSpace_FWD_DEFINED__
typedef struct ShellNameSpace ShellNameSpace;
#endif
#ifndef __IScriptErrorList_FWD_DEFINED__
#define __IScriptErrorList_FWD_DEFINED__
typedef interface IScriptErrorList IScriptErrorList;
#endif
#ifndef __CScriptErrorList_FWD_DEFINED__
#define __CScriptErrorList_FWD_DEFINED__
typedef struct CScriptErrorList CScriptErrorList;
#endif
#include "ocidl.h"
#include "docobj.h"
#define SID_SkipHung IID_IEnumVARIANT
extern RPC_IF_HANDLE __MIDL_itf_exdisp_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_exdisp_0000_0000_v0_0_s_ifspec;
#ifndef __SHDocVw_LIBRARY_DEFINED__
#define __SHDocVw_LIBRARY_DEFINED__
typedef DECLSPEC_UUID("34A226E0-DF30-11CF-89A9-00A0C9054129")
enum CommandStateChangeConstants
{
	CSC_UPDATECOMMANDS = (int)0xffffffff,
	CSC_NAVIGATEFORWARD = 0x1,
	CSC_NAVIGATEBACK = 0x2
} CommandStateChangeConstants;
typedef DECLSPEC_UUID("65507BE0-91A8-11d3-A845-009027220E6D")
enum SecureLockIconConstants
{
	secureLockIconUnsecure = 0,
	secureLockIconMixed = 0x1,
	secureLockIconSecureUnknownBits = 0x2,
	secureLockIconSecure40Bit = 0x3,
	secureLockIconSecure56Bit = 0x4,
	secureLockIconSecureFortezza = 0x5,
	secureLockIconSecure128Bit = 0x6
} SecureLockIconConstants;
typedef DECLSPEC_UUID("a8317d46-03cb-4975-ae94-85e9f2e1d020")
enum NewProcessCauseConstants
{
	ProtectedModeRedirect = 0x1
} NewProcessCauseConstants;
typedef DECLSPEC_UUID("F41E6981-28E5-11d0-82B4-00A0C90C29C5")
enum ShellWindowTypeConstants
{
	SWC_EXPLORER = 0,
	SWC_BROWSER = 0x1,
	SWC_3RDPARTY = 0x2,
	SWC_CALLBACK = 0x4,
	SWC_DESKTOP = 0x8
} ShellWindowTypeConstants;
typedef DECLSPEC_UUID("7716a370-38ca-11d0-a48b-00a0c90a8f39")
enum ShellWindowFindWindowOptions
{
	SWFO_NEEDDISPATCH = 0x1,
	SWFO_INCLUDEPENDING = 0x2,
	SWFO_COOKIEPASSED = 0x4
} ShellWindowFindWindowOptions;
extern const IID LIBID_SHDocVw;
#ifndef __IWebBrowser_INTERFACE_DEFINED__
#define __IWebBrowser_INTERFACE_DEFINED__
typedef DECLSPEC_UUID("14EE5380-A378-11cf-A731-00A0C9082637")
enum BrowserNavConstants
{
	navOpenInNewWindow = 0x1,
	navNoHistory = 0x2,
	navNoReadFromCache = 0x4,
	navNoWriteToCache = 0x8,
	navAllowAutosearch = 0x10,
	navBrowserBar = 0x20,
	navHyperlink = 0x40,
	navEnforceRestricted = 0x80,
	navNewWindowsManaged = 0x100,
	navUntrustedForDownload = 0x200,
	navTrustedForActiveX = 0x400,
	navOpenInNewTab = 0x800,
	navOpenInBackgroundTab = 0x1000,
	navKeepWordWheelText = 0x2000,
	navVirtualTab = 0x4000,
	navBlockRedirectsXDomain = 0x8000,
	navOpenNewForegroundTab = 0x10000
} BrowserNavConstants;
typedef DECLSPEC_UUID("C317C261-A991-11cf-A731-00A0C9082637")
enum RefreshConstants
{
	REFRESH_NORMAL = 0,
	REFRESH_IFEXPIRED = 1,
	REFRESH_COMPLETELY = 3
} RefreshConstants;
extern const IID IID_IWebBrowser;
typedef struct IWebBrowserVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWebBrowser *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWebBrowser *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWebBrowser *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IWebBrowser *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IWebBrowser *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IWebBrowser *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IWebBrowser *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *GoBack) (IWebBrowser *This);
	HRESULT(STDMETHODCALLTYPE *GoForward) (IWebBrowser *This);
	HRESULT(STDMETHODCALLTYPE *GoHome) (IWebBrowser *This);
	HRESULT(STDMETHODCALLTYPE *GoSearch) (IWebBrowser *This);
	HRESULT(STDMETHODCALLTYPE *Navigate) (IWebBrowser *This, BSTR URL, VARIANT *Flags, VARIANT *TargetFrameName, VARIANT *PostData, VARIANT *Headers);
	HRESULT(STDMETHODCALLTYPE *Refresh) (IWebBrowser *This);
	HRESULT(STDMETHODCALLTYPE *Refresh2) (IWebBrowser *This, VARIANT *Level);
	HRESULT(STDMETHODCALLTYPE *Stop) (IWebBrowser *This);
	HRESULT(STDMETHODCALLTYPE *get_Application) (IWebBrowser *This, IDispatch **ppDisp);
	HRESULT(STDMETHODCALLTYPE *get_Parent) (IWebBrowser *This, IDispatch **ppDisp);
	HRESULT(STDMETHODCALLTYPE *get_Container) (IWebBrowser *This, IDispatch **ppDisp);
	HRESULT(STDMETHODCALLTYPE *get_Document) (IWebBrowser *This, IDispatch **ppDisp);
	HRESULT(STDMETHODCALLTYPE *get_TopLevelContainer) (IWebBrowser *This, VARIANT_BOOL *pBool);
	HRESULT(STDMETHODCALLTYPE *get_Type) (IWebBrowser *This, BSTR *Type);
	HRESULT(STDMETHODCALLTYPE *get_Left) (IWebBrowser *This, long *pl);
	HRESULT(STDMETHODCALLTYPE *put_Left) (IWebBrowser *This, long Left);
	HRESULT(STDMETHODCALLTYPE *get_Top) (IWebBrowser *This, long *pl);
	HRESULT(STDMETHODCALLTYPE *put_Top) (IWebBrowser *This, long Top);
	HRESULT(STDMETHODCALLTYPE *get_Width) (IWebBrowser *This, long *pl);
	HRESULT(STDMETHODCALLTYPE *put_Width) (IWebBrowser *This, long Width);
	HRESULT(STDMETHODCALLTYPE *get_Height) (IWebBrowser *This, long *pl);
	HRESULT(STDMETHODCALLTYPE *put_Height) (IWebBrowser *This, long Height);
	HRESULT(STDMETHODCALLTYPE *get_LocationName) (IWebBrowser *This, BSTR *LocationName);
	HRESULT(STDMETHODCALLTYPE *get_LocationURL) (IWebBrowser *This, BSTR *LocationURL);
	HRESULT(STDMETHODCALLTYPE *get_Busy) (IWebBrowser *This, VARIANT_BOOL *pBool);
	END_INTERFACE
} IWebBrowserVtbl;
interface IWebBrowser
{
	CONST_VTBL struct IWebBrowserVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWebBrowser_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWebBrowser_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IWebBrowser_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IWebBrowser_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWebBrowser_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWebBrowser_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWebBrowser_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWebBrowser_GoBack(This)    ( (This)->lpVtbl -> GoBack(This) )
#define IWebBrowser_GoForward(This)    ( (This)->lpVtbl -> GoForward(This) )
#define IWebBrowser_GoHome(This)    ( (This)->lpVtbl -> GoHome(This) )
#define IWebBrowser_GoSearch(This)    ( (This)->lpVtbl -> GoSearch(This) )
#define IWebBrowser_Navigate(This,URL,Flags,TargetFrameName,PostData,Headers)    ( (This)->lpVtbl -> Navigate(This,URL,Flags,TargetFrameName,PostData,Headers) )
#define IWebBrowser_Refresh(This)    ( (This)->lpVtbl -> Refresh(This) )
#define IWebBrowser_Refresh2(This,Level)    ( (This)->lpVtbl -> Refresh2(This,Level) )
#define IWebBrowser_Stop(This)    ( (This)->lpVtbl -> Stop(This) )
#define IWebBrowser_get_Application(This,ppDisp)    ( (This)->lpVtbl -> get_Application(This,ppDisp) )
#define IWebBrowser_get_Parent(This,ppDisp)    ( (This)->lpVtbl -> get_Parent(This,ppDisp) )
#define IWebBrowser_get_Container(This,ppDisp)    ( (This)->lpVtbl -> get_Container(This,ppDisp) )
#define IWebBrowser_get_Document(This,ppDisp)    ( (This)->lpVtbl -> get_Document(This,ppDisp) )
#define IWebBrowser_get_TopLevelContainer(This,pBool)    ( (This)->lpVtbl -> get_TopLevelContainer(This,pBool) )
#define IWebBrowser_get_Type(This,Type)    ( (This)->lpVtbl -> get_Type(This,Type) )
#define IWebBrowser_get_Left(This,pl)    ( (This)->lpVtbl -> get_Left(This,pl) )
#define IWebBrowser_put_Left(This,Left)    ( (This)->lpVtbl -> put_Left(This,Left) )
#define IWebBrowser_get_Top(This,pl)    ( (This)->lpVtbl -> get_Top(This,pl) )
#define IWebBrowser_put_Top(This,Top)    ( (This)->lpVtbl -> put_Top(This,Top) )
#define IWebBrowser_get_Width(This,pl)    ( (This)->lpVtbl -> get_Width(This,pl) )
#define IWebBrowser_put_Width(This,Width)    ( (This)->lpVtbl -> put_Width(This,Width) )
#define IWebBrowser_get_Height(This,pl)    ( (This)->lpVtbl -> get_Height(This,pl) )
#define IWebBrowser_put_Height(This,Height)    ( (This)->lpVtbl -> put_Height(This,Height) )
#define IWebBrowser_get_LocationName(This,LocationName)    ( (This)->lpVtbl -> get_LocationName(This,LocationName) )
#define IWebBrowser_get_LocationURL(This,LocationURL)    ( (This)->lpVtbl -> get_LocationURL(This,LocationURL) )
#define IWebBrowser_get_Busy(This,pBool)    ( (This)->lpVtbl -> get_Busy(This,pBool) )
#endif
#endif
#ifndef __DWebBrowserEvents_DISPINTERFACE_DEFINED__
#define __DWebBrowserEvents_DISPINTERFACE_DEFINED__
extern const IID DIID_DWebBrowserEvents;
typedef struct DWebBrowserEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (DWebBrowserEvents *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (DWebBrowserEvents *This);
	ULONG(STDMETHODCALLTYPE *Release) (DWebBrowserEvents *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (DWebBrowserEvents *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (DWebBrowserEvents *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (DWebBrowserEvents *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (DWebBrowserEvents *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	END_INTERFACE
} DWebBrowserEventsVtbl;
interface DWebBrowserEvents
{
	CONST_VTBL struct DWebBrowserEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define DWebBrowserEvents_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define DWebBrowserEvents_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define DWebBrowserEvents_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define DWebBrowserEvents_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define DWebBrowserEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define DWebBrowserEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define DWebBrowserEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#endif
#endif
#ifndef __IWebBrowserApp_INTERFACE_DEFINED__
#define __IWebBrowserApp_INTERFACE_DEFINED__
extern const IID IID_IWebBrowserApp;
typedef struct IWebBrowserAppVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWebBrowserApp *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWebBrowserApp *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWebBrowserApp *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IWebBrowserApp *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IWebBrowserApp *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IWebBrowserApp *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IWebBrowserApp *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *GoBack) (IWebBrowserApp *This);
	HRESULT(STDMETHODCALLTYPE *GoForward) (IWebBrowserApp *This);
	HRESULT(STDMETHODCALLTYPE *GoHome) (IWebBrowserApp *This);
	HRESULT(STDMETHODCALLTYPE *GoSearch) (IWebBrowserApp *This);
	HRESULT(STDMETHODCALLTYPE *Navigate) (IWebBrowserApp *This, BSTR URL, VARIANT *Flags, VARIANT *TargetFrameName, VARIANT *PostData, VARIANT *Headers);
	HRESULT(STDMETHODCALLTYPE *Refresh) (IWebBrowserApp *This);
	HRESULT(STDMETHODCALLTYPE *Refresh2) (IWebBrowserApp *This, VARIANT *Level);
	HRESULT(STDMETHODCALLTYPE *Stop) (IWebBrowserApp *This);
	HRESULT(STDMETHODCALLTYPE *get_Application) (IWebBrowserApp *This, IDispatch **ppDisp);
	HRESULT(STDMETHODCALLTYPE *get_Parent) (IWebBrowserApp *This, IDispatch **ppDisp);
	HRESULT(STDMETHODCALLTYPE *get_Container) (IWebBrowserApp *This, IDispatch **ppDisp);
	HRESULT(STDMETHODCALLTYPE *get_Document) (IWebBrowserApp *This, IDispatch **ppDisp);
	HRESULT(STDMETHODCALLTYPE *get_TopLevelContainer) (IWebBrowserApp *This, VARIANT_BOOL *pBool);
	HRESULT(STDMETHODCALLTYPE *get_Type) (IWebBrowserApp *This, BSTR *Type);
	HRESULT(STDMETHODCALLTYPE *get_Left) (IWebBrowserApp *This, long *pl);
	HRESULT(STDMETHODCALLTYPE *put_Left) (IWebBrowserApp *This, long Left);
	HRESULT(STDMETHODCALLTYPE *get_Top) (IWebBrowserApp *This, long *pl);
	HRESULT(STDMETHODCALLTYPE *put_Top) (IWebBrowserApp *This, long Top);
	HRESULT(STDMETHODCALLTYPE *get_Width) (IWebBrowserApp *This, long *pl);
	HRESULT(STDMETHODCALLTYPE *put_Width) (IWebBrowserApp *This, long Width);
	HRESULT(STDMETHODCALLTYPE *get_Height) (IWebBrowserApp *This, long *pl);
	HRESULT(STDMETHODCALLTYPE *put_Height) (IWebBrowserApp *This, long Height);
	HRESULT(STDMETHODCALLTYPE *get_LocationName) (IWebBrowserApp *This, BSTR *LocationName);
	HRESULT(STDMETHODCALLTYPE *get_LocationURL) (IWebBrowserApp *This, BSTR *LocationURL);
	HRESULT(STDMETHODCALLTYPE *get_Busy) (IWebBrowserApp *This, VARIANT_BOOL *pBool);
	HRESULT(STDMETHODCALLTYPE *Quit) (IWebBrowserApp *This);
	HRESULT(STDMETHODCALLTYPE *ClientToWindow) (IWebBrowserApp *This, int *pcx, int *pcy);
	HRESULT(STDMETHODCALLTYPE *PutProperty) (IWebBrowserApp *This, BSTR Property, VARIANT vtValue);
	HRESULT(STDMETHODCALLTYPE *GetProperty) (IWebBrowserApp *This, BSTR Property, VARIANT *pvtValue);
	HRESULT(STDMETHODCALLTYPE *get_Name) (IWebBrowserApp *This, BSTR *Name);
	HRESULT(STDMETHODCALLTYPE *get_HWND) (IWebBrowserApp *This, SHANDLE_PTR *pHWND);
	HRESULT(STDMETHODCALLTYPE *get_FullName) (IWebBrowserApp *This, BSTR *FullName);
	HRESULT(STDMETHODCALLTYPE *get_Path) (IWebBrowserApp *This, BSTR *Path);
	HRESULT(STDMETHODCALLTYPE *get_Visible) (IWebBrowserApp *This, VARIANT_BOOL *pBool);
	HRESULT(STDMETHODCALLTYPE *put_Visible) (IWebBrowserApp *This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE *get_StatusBar) (IWebBrowserApp *This, VARIANT_BOOL *pBool);
	HRESULT(STDMETHODCALLTYPE *put_StatusBar) (IWebBrowserApp *This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE *get_StatusText) (IWebBrowserApp *This, BSTR *StatusText);
	HRESULT(STDMETHODCALLTYPE *put_StatusText) (IWebBrowserApp *This, BSTR StatusText);
	HRESULT(STDMETHODCALLTYPE *get_ToolBar) (IWebBrowserApp *This, int *Value);
	HRESULT(STDMETHODCALLTYPE *put_ToolBar) (IWebBrowserApp *This, int Value);
	HRESULT(STDMETHODCALLTYPE *get_MenuBar) (IWebBrowserApp *This, VARIANT_BOOL *Value);
	HRESULT(STDMETHODCALLTYPE *put_MenuBar) (IWebBrowserApp *This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE *get_FullScreen) (IWebBrowserApp *This, VARIANT_BOOL *pbFullScreen);
	HRESULT(STDMETHODCALLTYPE *put_FullScreen) (IWebBrowserApp *This, VARIANT_BOOL bFullScreen);
	END_INTERFACE
} IWebBrowserAppVtbl;
interface IWebBrowserApp
{
	CONST_VTBL struct IWebBrowserAppVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWebBrowserApp_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWebBrowserApp_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IWebBrowserApp_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IWebBrowserApp_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWebBrowserApp_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWebBrowserApp_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWebBrowserApp_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWebBrowserApp_GoBack(This)    ( (This)->lpVtbl -> GoBack(This) )
#define IWebBrowserApp_GoForward(This)    ( (This)->lpVtbl -> GoForward(This) )
#define IWebBrowserApp_GoHome(This)    ( (This)->lpVtbl -> GoHome(This) )
#define IWebBrowserApp_GoSearch(This)    ( (This)->lpVtbl -> GoSearch(This) )
#define IWebBrowserApp_Navigate(This,URL,Flags,TargetFrameName,PostData,Headers)    ( (This)->lpVtbl -> Navigate(This,URL,Flags,TargetFrameName,PostData,Headers) )
#define IWebBrowserApp_Refresh(This)    ( (This)->lpVtbl -> Refresh(This) )
#define IWebBrowserApp_Refresh2(This,Level)    ( (This)->lpVtbl -> Refresh2(This,Level) )
#define IWebBrowserApp_Stop(This)    ( (This)->lpVtbl -> Stop(This) )
#define IWebBrowserApp_get_Application(This,ppDisp)    ( (This)->lpVtbl -> get_Application(This,ppDisp) )
#define IWebBrowserApp_get_Parent(This,ppDisp)    ( (This)->lpVtbl -> get_Parent(This,ppDisp) )
#define IWebBrowserApp_get_Container(This,ppDisp)    ( (This)->lpVtbl -> get_Container(This,ppDisp) )
#define IWebBrowserApp_get_Document(This,ppDisp)    ( (This)->lpVtbl -> get_Document(This,ppDisp) )
#define IWebBrowserApp_get_TopLevelContainer(This,pBool)    ( (This)->lpVtbl -> get_TopLevelContainer(This,pBool) )
#define IWebBrowserApp_get_Type(This,Type)    ( (This)->lpVtbl -> get_Type(This,Type) )
#define IWebBrowserApp_get_Left(This,pl)    ( (This)->lpVtbl -> get_Left(This,pl) )
#define IWebBrowserApp_put_Left(This,Left)    ( (This)->lpVtbl -> put_Left(This,Left) )
#define IWebBrowserApp_get_Top(This,pl)    ( (This)->lpVtbl -> get_Top(This,pl) )
#define IWebBrowserApp_put_Top(This,Top)    ( (This)->lpVtbl -> put_Top(This,Top) )
#define IWebBrowserApp_get_Width(This,pl)    ( (This)->lpVtbl -> get_Width(This,pl) )
#define IWebBrowserApp_put_Width(This,Width)    ( (This)->lpVtbl -> put_Width(This,Width) )
#define IWebBrowserApp_get_Height(This,pl)    ( (This)->lpVtbl -> get_Height(This,pl) )
#define IWebBrowserApp_put_Height(This,Height)    ( (This)->lpVtbl -> put_Height(This,Height) )
#define IWebBrowserApp_get_LocationName(This,LocationName)    ( (This)->lpVtbl -> get_LocationName(This,LocationName) )
#define IWebBrowserApp_get_LocationURL(This,LocationURL)    ( (This)->lpVtbl -> get_LocationURL(This,LocationURL) )
#define IWebBrowserApp_get_Busy(This,pBool)    ( (This)->lpVtbl -> get_Busy(This,pBool) )
#define IWebBrowserApp_Quit(This)    ( (This)->lpVtbl -> Quit(This) )
#define IWebBrowserApp_ClientToWindow(This,pcx,pcy)    ( (This)->lpVtbl -> ClientToWindow(This,pcx,pcy) )
#define IWebBrowserApp_PutProperty(This,Property,vtValue)    ( (This)->lpVtbl -> PutProperty(This,Property,vtValue) )
#define IWebBrowserApp_GetProperty(This,Property,pvtValue)    ( (This)->lpVtbl -> GetProperty(This,Property,pvtValue) )
#define IWebBrowserApp_get_Name(This,Name)    ( (This)->lpVtbl -> get_Name(This,Name) )
#define IWebBrowserApp_get_HWND(This,pHWND)    ( (This)->lpVtbl -> get_HWND(This,pHWND) )
#define IWebBrowserApp_get_FullName(This,FullName)    ( (This)->lpVtbl -> get_FullName(This,FullName) )
#define IWebBrowserApp_get_Path(This,Path)    ( (This)->lpVtbl -> get_Path(This,Path) )
#define IWebBrowserApp_get_Visible(This,pBool)    ( (This)->lpVtbl -> get_Visible(This,pBool) )
#define IWebBrowserApp_put_Visible(This,Value)    ( (This)->lpVtbl -> put_Visible(This,Value) )
#define IWebBrowserApp_get_StatusBar(This,pBool)    ( (This)->lpVtbl -> get_StatusBar(This,pBool) )
#define IWebBrowserApp_put_StatusBar(This,Value)    ( (This)->lpVtbl -> put_StatusBar(This,Value) )
#define IWebBrowserApp_get_StatusText(This,StatusText)    ( (This)->lpVtbl -> get_StatusText(This,StatusText) )
#define IWebBrowserApp_put_StatusText(This,StatusText)    ( (This)->lpVtbl -> put_StatusText(This,StatusText) )
#define IWebBrowserApp_get_ToolBar(This,Value)    ( (This)->lpVtbl -> get_ToolBar(This,Value) )
#define IWebBrowserApp_put_ToolBar(This,Value)    ( (This)->lpVtbl -> put_ToolBar(This,Value) )
#define IWebBrowserApp_get_MenuBar(This,Value)    ( (This)->lpVtbl -> get_MenuBar(This,Value) )
#define IWebBrowserApp_put_MenuBar(This,Value)    ( (This)->lpVtbl -> put_MenuBar(This,Value) )
#define IWebBrowserApp_get_FullScreen(This,pbFullScreen)    ( (This)->lpVtbl -> get_FullScreen(This,pbFullScreen) )
#define IWebBrowserApp_put_FullScreen(This,bFullScreen)    ( (This)->lpVtbl -> put_FullScreen(This,bFullScreen) )
#endif
#endif
#ifndef __IWebBrowser2_INTERFACE_DEFINED__
#define __IWebBrowser2_INTERFACE_DEFINED__
extern const IID IID_IWebBrowser2;
typedef struct IWebBrowser2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWebBrowser2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWebBrowser2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWebBrowser2 *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IWebBrowser2 *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IWebBrowser2 *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IWebBrowser2 *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IWebBrowser2 *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *GoBack) (IWebBrowser2 *This);
	HRESULT(STDMETHODCALLTYPE *GoForward) (IWebBrowser2 *This);
	HRESULT(STDMETHODCALLTYPE *GoHome) (IWebBrowser2 *This);
	HRESULT(STDMETHODCALLTYPE *GoSearch) (IWebBrowser2 *This);
	HRESULT(STDMETHODCALLTYPE *Navigate) (IWebBrowser2 *This, BSTR URL, VARIANT *Flags, VARIANT *TargetFrameName, VARIANT *PostData, VARIANT *Headers);
	HRESULT(STDMETHODCALLTYPE *Refresh) (IWebBrowser2 *This);
	HRESULT(STDMETHODCALLTYPE *Refresh2) (IWebBrowser2 *This, VARIANT *Level);
	HRESULT(STDMETHODCALLTYPE *Stop) (IWebBrowser2 *This);
	HRESULT(STDMETHODCALLTYPE *get_Application) (IWebBrowser2 *This, IDispatch **ppDisp);
	HRESULT(STDMETHODCALLTYPE *get_Parent) (IWebBrowser2 *This, IDispatch **ppDisp);
	HRESULT(STDMETHODCALLTYPE *get_Container) (IWebBrowser2 *This, IDispatch **ppDisp);
	HRESULT(STDMETHODCALLTYPE *get_Document) (IWebBrowser2 *This, IDispatch **ppDisp);
	HRESULT(STDMETHODCALLTYPE *get_TopLevelContainer) (IWebBrowser2 *This, VARIANT_BOOL *pBool);
	HRESULT(STDMETHODCALLTYPE *get_Type) (IWebBrowser2 *This, BSTR *Type);
	HRESULT(STDMETHODCALLTYPE *get_Left) (IWebBrowser2 *This, long *pl);
	HRESULT(STDMETHODCALLTYPE *put_Left) (IWebBrowser2 *This, long Left);
	HRESULT(STDMETHODCALLTYPE *get_Top) (IWebBrowser2 *This, long *pl);
	HRESULT(STDMETHODCALLTYPE *put_Top) (IWebBrowser2 *This, long Top);
	HRESULT(STDMETHODCALLTYPE *get_Width) (IWebBrowser2 *This, long *pl);
	HRESULT(STDMETHODCALLTYPE *put_Width) (IWebBrowser2 *This, long Width);
	HRESULT(STDMETHODCALLTYPE *get_Height) (IWebBrowser2 *This, long *pl);
	HRESULT(STDMETHODCALLTYPE *put_Height) (IWebBrowser2 *This, long Height);
	HRESULT(STDMETHODCALLTYPE *get_LocationName) (IWebBrowser2 *This, BSTR *LocationName);
	HRESULT(STDMETHODCALLTYPE *get_LocationURL) (IWebBrowser2 *This, BSTR *LocationURL);
	HRESULT(STDMETHODCALLTYPE *get_Busy) (IWebBrowser2 *This, VARIANT_BOOL *pBool);
	HRESULT(STDMETHODCALLTYPE *Quit) (IWebBrowser2 *This);
	HRESULT(STDMETHODCALLTYPE *ClientToWindow) (IWebBrowser2 *This, int *pcx, int *pcy);
	HRESULT(STDMETHODCALLTYPE *PutProperty) (IWebBrowser2 *This, BSTR Property, VARIANT vtValue);
	HRESULT(STDMETHODCALLTYPE *GetProperty) (IWebBrowser2 *This, BSTR Property, VARIANT *pvtValue);
	HRESULT(STDMETHODCALLTYPE *get_Name) (IWebBrowser2 *This, BSTR *Name);
	HRESULT(STDMETHODCALLTYPE *get_HWND) (IWebBrowser2 *This, SHANDLE_PTR *pHWND);
	HRESULT(STDMETHODCALLTYPE *get_FullName) (IWebBrowser2 *This, BSTR *FullName);
	HRESULT(STDMETHODCALLTYPE *get_Path) (IWebBrowser2 *This, BSTR *Path);
	HRESULT(STDMETHODCALLTYPE *get_Visible) (IWebBrowser2 *This, VARIANT_BOOL *pBool);
	HRESULT(STDMETHODCALLTYPE *put_Visible) (IWebBrowser2 *This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE *get_StatusBar) (IWebBrowser2 *This, VARIANT_BOOL *pBool);
	HRESULT(STDMETHODCALLTYPE *put_StatusBar) (IWebBrowser2 *This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE *get_StatusText) (IWebBrowser2 *This, BSTR *StatusText);
	HRESULT(STDMETHODCALLTYPE *put_StatusText) (IWebBrowser2 *This, BSTR StatusText);
	HRESULT(STDMETHODCALLTYPE *get_ToolBar) (IWebBrowser2 *This, int *Value);
	HRESULT(STDMETHODCALLTYPE *put_ToolBar) (IWebBrowser2 *This, int Value);
	HRESULT(STDMETHODCALLTYPE *get_MenuBar) (IWebBrowser2 *This, VARIANT_BOOL *Value);
	HRESULT(STDMETHODCALLTYPE *put_MenuBar) (IWebBrowser2 *This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE *get_FullScreen) (IWebBrowser2 *This, VARIANT_BOOL *pbFullScreen);
	HRESULT(STDMETHODCALLTYPE *put_FullScreen) (IWebBrowser2 *This, VARIANT_BOOL bFullScreen);
	HRESULT(STDMETHODCALLTYPE *Navigate2) (IWebBrowser2 *This, VARIANT *URL, VARIANT *Flags, VARIANT *TargetFrameName, VARIANT *PostData, VARIANT *Headers);
	HRESULT(STDMETHODCALLTYPE *QueryStatusWB) (IWebBrowser2 *This, OLECMDID cmdID, OLECMDF *pcmdf);
	HRESULT(STDMETHODCALLTYPE *ExecWB) (IWebBrowser2 *This, OLECMDID cmdID, OLECMDEXECOPT cmdexecopt, VARIANT *pvaIn, VARIANT *pvaOut);
	HRESULT(STDMETHODCALLTYPE *ShowBrowserBar) (IWebBrowser2 *This, VARIANT *pvaClsid, VARIANT *pvarShow, VARIANT *pvarSize);
	HRESULT(STDMETHODCALLTYPE *get_ReadyState) (IWebBrowser2 *This, READYSTATE *plReadyState);
	HRESULT(STDMETHODCALLTYPE *get_Offline) (IWebBrowser2 *This, VARIANT_BOOL *pbOffline);
	HRESULT(STDMETHODCALLTYPE *put_Offline) (IWebBrowser2 *This, VARIANT_BOOL bOffline);
	HRESULT(STDMETHODCALLTYPE *get_Silent) (IWebBrowser2 *This, VARIANT_BOOL *pbSilent);
	HRESULT(STDMETHODCALLTYPE *put_Silent) (IWebBrowser2 *This, VARIANT_BOOL bSilent);
	HRESULT(STDMETHODCALLTYPE *get_RegisterAsBrowser) (IWebBrowser2 *This, VARIANT_BOOL *pbRegister);
	HRESULT(STDMETHODCALLTYPE *put_RegisterAsBrowser) (IWebBrowser2 *This, VARIANT_BOOL bRegister);
	HRESULT(STDMETHODCALLTYPE *get_RegisterAsDropTarget) (IWebBrowser2 *This, VARIANT_BOOL *pbRegister);
	HRESULT(STDMETHODCALLTYPE *put_RegisterAsDropTarget) (IWebBrowser2 *This, VARIANT_BOOL bRegister);
	HRESULT(STDMETHODCALLTYPE *get_TheaterMode) (IWebBrowser2 *This, VARIANT_BOOL *pbRegister);
	HRESULT(STDMETHODCALLTYPE *put_TheaterMode) (IWebBrowser2 *This, VARIANT_BOOL bRegister);
	HRESULT(STDMETHODCALLTYPE *get_AddressBar) (IWebBrowser2 *This, VARIANT_BOOL *Value);
	HRESULT(STDMETHODCALLTYPE *put_AddressBar) (IWebBrowser2 *This, VARIANT_BOOL Value);
	HRESULT(STDMETHODCALLTYPE *get_Resizable) (IWebBrowser2 *This, VARIANT_BOOL *Value);
	HRESULT(STDMETHODCALLTYPE *put_Resizable) (IWebBrowser2 *This, VARIANT_BOOL Value);
	END_INTERFACE
} IWebBrowser2Vtbl;
interface IWebBrowser2
{
	CONST_VTBL struct IWebBrowser2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWebBrowser2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWebBrowser2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IWebBrowser2_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IWebBrowser2_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWebBrowser2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWebBrowser2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWebBrowser2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWebBrowser2_GoBack(This)    ( (This)->lpVtbl -> GoBack(This) )
#define IWebBrowser2_GoForward(This)    ( (This)->lpVtbl -> GoForward(This) )
#define IWebBrowser2_GoHome(This)    ( (This)->lpVtbl -> GoHome(This) )
#define IWebBrowser2_GoSearch(This)    ( (This)->lpVtbl -> GoSearch(This) )
#define IWebBrowser2_Navigate(This,URL,Flags,TargetFrameName,PostData,Headers)    ( (This)->lpVtbl -> Navigate(This,URL,Flags,TargetFrameName,PostData,Headers) )
#define IWebBrowser2_Refresh(This)    ( (This)->lpVtbl -> Refresh(This) )
#define IWebBrowser2_Refresh2(This,Level)    ( (This)->lpVtbl -> Refresh2(This,Level) )
#define IWebBrowser2_Stop(This)    ( (This)->lpVtbl -> Stop(This) )
#define IWebBrowser2_get_Application(This,ppDisp)    ( (This)->lpVtbl -> get_Application(This,ppDisp) )
#define IWebBrowser2_get_Parent(This,ppDisp)    ( (This)->lpVtbl -> get_Parent(This,ppDisp) )
#define IWebBrowser2_get_Container(This,ppDisp)    ( (This)->lpVtbl -> get_Container(This,ppDisp) )
#define IWebBrowser2_get_Document(This,ppDisp)    ( (This)->lpVtbl -> get_Document(This,ppDisp) )
#define IWebBrowser2_get_TopLevelContainer(This,pBool)    ( (This)->lpVtbl -> get_TopLevelContainer(This,pBool) )
#define IWebBrowser2_get_Type(This,Type)    ( (This)->lpVtbl -> get_Type(This,Type) )
#define IWebBrowser2_get_Left(This,pl)    ( (This)->lpVtbl -> get_Left(This,pl) )
#define IWebBrowser2_put_Left(This,Left)    ( (This)->lpVtbl -> put_Left(This,Left) )
#define IWebBrowser2_get_Top(This,pl)    ( (This)->lpVtbl -> get_Top(This,pl) )
#define IWebBrowser2_put_Top(This,Top)    ( (This)->lpVtbl -> put_Top(This,Top) )
#define IWebBrowser2_get_Width(This,pl)    ( (This)->lpVtbl -> get_Width(This,pl) )
#define IWebBrowser2_put_Width(This,Width)    ( (This)->lpVtbl -> put_Width(This,Width) )
#define IWebBrowser2_get_Height(This,pl)    ( (This)->lpVtbl -> get_Height(This,pl) )
#define IWebBrowser2_put_Height(This,Height)    ( (This)->lpVtbl -> put_Height(This,Height) )
#define IWebBrowser2_get_LocationName(This,LocationName)    ( (This)->lpVtbl -> get_LocationName(This,LocationName) )
#define IWebBrowser2_get_LocationURL(This,LocationURL)    ( (This)->lpVtbl -> get_LocationURL(This,LocationURL) )
#define IWebBrowser2_get_Busy(This,pBool)    ( (This)->lpVtbl -> get_Busy(This,pBool) )
#define IWebBrowser2_Quit(This)    ( (This)->lpVtbl -> Quit(This) )
#define IWebBrowser2_ClientToWindow(This,pcx,pcy)    ( (This)->lpVtbl -> ClientToWindow(This,pcx,pcy) )
#define IWebBrowser2_PutProperty(This,Property,vtValue)    ( (This)->lpVtbl -> PutProperty(This,Property,vtValue) )
#define IWebBrowser2_GetProperty(This,Property,pvtValue)    ( (This)->lpVtbl -> GetProperty(This,Property,pvtValue) )
#define IWebBrowser2_get_Name(This,Name)    ( (This)->lpVtbl -> get_Name(This,Name) )
#define IWebBrowser2_get_HWND(This,pHWND)    ( (This)->lpVtbl -> get_HWND(This,pHWND) )
#define IWebBrowser2_get_FullName(This,FullName)    ( (This)->lpVtbl -> get_FullName(This,FullName) )
#define IWebBrowser2_get_Path(This,Path)    ( (This)->lpVtbl -> get_Path(This,Path) )
#define IWebBrowser2_get_Visible(This,pBool)    ( (This)->lpVtbl -> get_Visible(This,pBool) )
#define IWebBrowser2_put_Visible(This,Value)    ( (This)->lpVtbl -> put_Visible(This,Value) )
#define IWebBrowser2_get_StatusBar(This,pBool)    ( (This)->lpVtbl -> get_StatusBar(This,pBool) )
#define IWebBrowser2_put_StatusBar(This,Value)    ( (This)->lpVtbl -> put_StatusBar(This,Value) )
#define IWebBrowser2_get_StatusText(This,StatusText)    ( (This)->lpVtbl -> get_StatusText(This,StatusText) )
#define IWebBrowser2_put_StatusText(This,StatusText)    ( (This)->lpVtbl -> put_StatusText(This,StatusText) )
#define IWebBrowser2_get_ToolBar(This,Value)    ( (This)->lpVtbl -> get_ToolBar(This,Value) )
#define IWebBrowser2_put_ToolBar(This,Value)    ( (This)->lpVtbl -> put_ToolBar(This,Value) )
#define IWebBrowser2_get_MenuBar(This,Value)    ( (This)->lpVtbl -> get_MenuBar(This,Value) )
#define IWebBrowser2_put_MenuBar(This,Value)    ( (This)->lpVtbl -> put_MenuBar(This,Value) )
#define IWebBrowser2_get_FullScreen(This,pbFullScreen)    ( (This)->lpVtbl -> get_FullScreen(This,pbFullScreen) )
#define IWebBrowser2_put_FullScreen(This,bFullScreen)    ( (This)->lpVtbl -> put_FullScreen(This,bFullScreen) )
#define IWebBrowser2_Navigate2(This,URL,Flags,TargetFrameName,PostData,Headers)    ( (This)->lpVtbl -> Navigate2(This,URL,Flags,TargetFrameName,PostData,Headers) )
#define IWebBrowser2_QueryStatusWB(This,cmdID,pcmdf)    ( (This)->lpVtbl -> QueryStatusWB(This,cmdID,pcmdf) )
#define IWebBrowser2_ExecWB(This,cmdID,cmdexecopt,pvaIn,pvaOut)    ( (This)->lpVtbl -> ExecWB(This,cmdID,cmdexecopt,pvaIn,pvaOut) )
#define IWebBrowser2_ShowBrowserBar(This,pvaClsid,pvarShow,pvarSize)    ( (This)->lpVtbl -> ShowBrowserBar(This,pvaClsid,pvarShow,pvarSize) )
#define IWebBrowser2_get_ReadyState(This,plReadyState)    ( (This)->lpVtbl -> get_ReadyState(This,plReadyState) )
#define IWebBrowser2_get_Offline(This,pbOffline)    ( (This)->lpVtbl -> get_Offline(This,pbOffline) )
#define IWebBrowser2_put_Offline(This,bOffline)    ( (This)->lpVtbl -> put_Offline(This,bOffline) )
#define IWebBrowser2_get_Silent(This,pbSilent)    ( (This)->lpVtbl -> get_Silent(This,pbSilent) )
#define IWebBrowser2_put_Silent(This,bSilent)    ( (This)->lpVtbl -> put_Silent(This,bSilent) )
#define IWebBrowser2_get_RegisterAsBrowser(This,pbRegister)    ( (This)->lpVtbl -> get_RegisterAsBrowser(This,pbRegister) )
#define IWebBrowser2_put_RegisterAsBrowser(This,bRegister)    ( (This)->lpVtbl -> put_RegisterAsBrowser(This,bRegister) )
#define IWebBrowser2_get_RegisterAsDropTarget(This,pbRegister)    ( (This)->lpVtbl -> get_RegisterAsDropTarget(This,pbRegister) )
#define IWebBrowser2_put_RegisterAsDropTarget(This,bRegister)    ( (This)->lpVtbl -> put_RegisterAsDropTarget(This,bRegister) )
#define IWebBrowser2_get_TheaterMode(This,pbRegister)    ( (This)->lpVtbl -> get_TheaterMode(This,pbRegister) )
#define IWebBrowser2_put_TheaterMode(This,bRegister)    ( (This)->lpVtbl -> put_TheaterMode(This,bRegister) )
#define IWebBrowser2_get_AddressBar(This,Value)    ( (This)->lpVtbl -> get_AddressBar(This,Value) )
#define IWebBrowser2_put_AddressBar(This,Value)    ( (This)->lpVtbl -> put_AddressBar(This,Value) )
#define IWebBrowser2_get_Resizable(This,Value)    ( (This)->lpVtbl -> get_Resizable(This,Value) )
#define IWebBrowser2_put_Resizable(This,Value)    ( (This)->lpVtbl -> put_Resizable(This,Value) )
#endif
#endif
#ifndef __DWebBrowserEvents2_DISPINTERFACE_DEFINED__
#define __DWebBrowserEvents2_DISPINTERFACE_DEFINED__
extern const IID DIID_DWebBrowserEvents2;
typedef struct DWebBrowserEvents2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (DWebBrowserEvents2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (DWebBrowserEvents2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (DWebBrowserEvents2 *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (DWebBrowserEvents2 *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (DWebBrowserEvents2 *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (DWebBrowserEvents2 *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (DWebBrowserEvents2 *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	END_INTERFACE} DWebBrowserEvents2Vtbl;
interface DWebBrowserEvents2
{
	CONST_VTBL struct DWebBrowserEvents2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define DWebBrowserEvents2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define DWebBrowserEvents2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define DWebBrowserEvents2_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define DWebBrowserEvents2_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define DWebBrowserEvents2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define DWebBrowserEvents2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define DWebBrowserEvents2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#endif
#endif
extern const CLSID CLSID_WebBrowser_V1;
extern const CLSID CLSID_WebBrowser;
extern const CLSID CLSID_InternetExplorer;
extern const CLSID CLSID_InternetExplorerMedium;
extern const CLSID CLSID_ShellBrowserWindow;
#ifndef __DShellWindowsEvents_DISPINTERFACE_DEFINED__
#define __DShellWindowsEvents_DISPINTERFACE_DEFINED__
extern const IID DIID_DShellWindowsEvents;
typedef struct DShellWindowsEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (DShellWindowsEvents *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (DShellWindowsEvents *This);
	ULONG(STDMETHODCALLTYPE *Release) (DShellWindowsEvents *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (DShellWindowsEvents *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (DShellWindowsEvents *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (DShellWindowsEvents *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (DShellWindowsEvents *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	END_INTERFACE
} DShellWindowsEventsVtbl;
interface DShellWindowsEvents
{
	CONST_VTBL struct DShellWindowsEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define DShellWindowsEvents_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define DShellWindowsEvents_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define DShellWindowsEvents_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define DShellWindowsEvents_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define DShellWindowsEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define DShellWindowsEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define DShellWindowsEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#endif
#endif
#ifndef __IShellWindows_INTERFACE_DEFINED__
#define __IShellWindows_INTERFACE_DEFINED__
extern const IID IID_IShellWindows;
typedef struct IShellWindowsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IShellWindows *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IShellWindows *This);
	ULONG(STDMETHODCALLTYPE *Release) (IShellWindows *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IShellWindows *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IShellWindows *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IShellWindows *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IShellWindows *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Count) (IShellWindows *This, long *Count);
	HRESULT(STDMETHODCALLTYPE *Item) (IShellWindows *This, VARIANT index, IDispatch **Folder);
	HRESULT(STDMETHODCALLTYPE *_NewEnum) (IShellWindows *This, IUnknown **ppunk);
	HRESULT(STDMETHODCALLTYPE *Register) (IShellWindows *This, IDispatch *pid, long hwnd, int swClass, long *plCookie);
	HRESULT(STDMETHODCALLTYPE *RegisterPending) (IShellWindows *This, long lThreadId, VARIANT *pvarloc, VARIANT *pvarlocRoot, int swClass, long *plCookie);
	HRESULT(STDMETHODCALLTYPE *Revoke) (IShellWindows *This, long lCookie);
	HRESULT(STDMETHODCALLTYPE *OnNavigate) (IShellWindows *This, long lCookie, VARIANT *pvarLoc);
	HRESULT(STDMETHODCALLTYPE *OnActivated) (IShellWindows *This, long lCookie, VARIANT_BOOL fActive);
	HRESULT(STDMETHODCALLTYPE *FindWindowSW) (IShellWindows *This, VARIANT *pvarLoc, VARIANT *pvarLocRoot, int swClass, long *phwnd, int swfwOptions, IDispatch **ppdispOut);
	HRESULT(STDMETHODCALLTYPE *OnCreated) (IShellWindows *This, long lCookie, IUnknown *punk);
	HRESULT(STDMETHODCALLTYPE *ProcessAttachDetach) (IShellWindows *This, VARIANT_BOOL fAttach);
	END_INTERFACE
} IShellWindowsVtbl;
interface IShellWindows
{
	CONST_VTBL struct IShellWindowsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IShellWindows_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IShellWindows_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IShellWindows_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IShellWindows_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IShellWindows_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IShellWindows_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IShellWindows_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IShellWindows_get_Count(This,Count)    ( (This)->lpVtbl -> get_Count(This,Count) )
#define IShellWindows_Item(This,index,Folder)    ( (This)->lpVtbl -> Item(This,index,Folder) )
#define IShellWindows__NewEnum(This,ppunk)    ( (This)->lpVtbl -> _NewEnum(This,ppunk) )
#define IShellWindows_Register(This,pid,hwnd,swClass,plCookie)    ( (This)->lpVtbl -> Register(This,pid,hwnd,swClass,plCookie) )
#define IShellWindows_RegisterPending(This,lThreadId,pvarloc,pvarlocRoot,swClass,plCookie)    ( (This)->lpVtbl -> RegisterPending(This,lThreadId,pvarloc,pvarlocRoot,swClass,plCookie) )
#define IShellWindows_Revoke(This,lCookie)    ( (This)->lpVtbl -> Revoke(This,lCookie) )
#define IShellWindows_OnNavigate(This,lCookie,pvarLoc)    ( (This)->lpVtbl -> OnNavigate(This,lCookie,pvarLoc) )
#define IShellWindows_OnActivated(This,lCookie,fActive)    ( (This)->lpVtbl -> OnActivated(This,lCookie,fActive) )
#define IShellWindows_FindWindowSW(This,pvarLoc,pvarLocRoot,swClass,phwnd,swfwOptions,ppdispOut)    ( (This)->lpVtbl -> FindWindowSW(This,pvarLoc,pvarLocRoot,swClass,phwnd,swfwOptions,ppdispOut) )
#define IShellWindows_OnCreated(This,lCookie,punk)    ( (This)->lpVtbl -> OnCreated(This,lCookie,punk) )
#define IShellWindows_ProcessAttachDetach(This,fAttach)    ( (This)->lpVtbl -> ProcessAttachDetach(This,fAttach) )
#endif
#endif
extern const CLSID CLSID_ShellWindows;
#ifndef __IShellUIHelper_INTERFACE_DEFINED__
#define __IShellUIHelper_INTERFACE_DEFINED__
extern const IID IID_IShellUIHelper;
typedef struct IShellUIHelperVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IShellUIHelper *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IShellUIHelper *This);
	ULONG(STDMETHODCALLTYPE *Release) (IShellUIHelper *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IShellUIHelper *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IShellUIHelper *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IShellUIHelper *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IShellUIHelper *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *ResetFirstBootMode) (IShellUIHelper *This);
	HRESULT(STDMETHODCALLTYPE *ResetSafeMode) (IShellUIHelper *This);
	HRESULT(STDMETHODCALLTYPE *RefreshOfflineDesktop) (IShellUIHelper *This);
	HRESULT(STDMETHODCALLTYPE *AddFavorite) (IShellUIHelper *This, BSTR URL, VARIANT *Title);
	HRESULT(STDMETHODCALLTYPE *AddChannel) (IShellUIHelper *This, BSTR URL);
	HRESULT(STDMETHODCALLTYPE *AddDesktopComponent) (IShellUIHelper *This, BSTR URL, BSTR Type, VARIANT *Left, VARIANT *Top, VARIANT *Width, VARIANT *Height);
	HRESULT(STDMETHODCALLTYPE *IsSubscribed) (IShellUIHelper *This, BSTR URL, VARIANT_BOOL *pBool);
	HRESULT(STDMETHODCALLTYPE *NavigateAndFind) (IShellUIHelper *This, BSTR URL, BSTR strQuery, VARIANT *varTargetFrame);
	HRESULT(STDMETHODCALLTYPE *ImportExportFavorites) (IShellUIHelper *This, VARIANT_BOOL fImport, BSTR strImpExpPath);
	HRESULT(STDMETHODCALLTYPE *AutoCompleteSaveForm) (IShellUIHelper *This, VARIANT *Form);
	HRESULT(STDMETHODCALLTYPE *AutoScan) (IShellUIHelper *This, BSTR strSearch, BSTR strFailureUrl, VARIANT *pvarTargetFrame);
	HRESULT(STDMETHODCALLTYPE *AutoCompleteAttach) (IShellUIHelper *This, VARIANT *Reserved);
	HRESULT(STDMETHODCALLTYPE *ShowBrowserUI) (IShellUIHelper *This, BSTR bstrName, VARIANT *pvarIn, VARIANT *pvarOut);
	END_INTERFACE
} IShellUIHelperVtbl;
interface IShellUIHelper
{
	CONST_VTBL struct IShellUIHelperVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IShellUIHelper_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IShellUIHelper_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IShellUIHelper_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IShellUIHelper_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IShellUIHelper_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IShellUIHelper_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IShellUIHelper_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IShellUIHelper_ResetFirstBootMode(This)    ( (This)->lpVtbl -> ResetFirstBootMode(This) )
#define IShellUIHelper_ResetSafeMode(This)    ( (This)->lpVtbl -> ResetSafeMode(This) )
#define IShellUIHelper_RefreshOfflineDesktop(This)    ( (This)->lpVtbl -> RefreshOfflineDesktop(This) )
#define IShellUIHelper_AddFavorite(This,URL,Title)    ( (This)->lpVtbl -> AddFavorite(This,URL,Title) )
#define IShellUIHelper_AddChannel(This,URL)    ( (This)->lpVtbl -> AddChannel(This,URL) )
#define IShellUIHelper_AddDesktopComponent(This,URL,Type,Left,Top,Width,Height)    ( (This)->lpVtbl -> AddDesktopComponent(This,URL,Type,Left,Top,Width,Height) )
#define IShellUIHelper_IsSubscribed(This,URL,pBool)    ( (This)->lpVtbl -> IsSubscribed(This,URL,pBool) )
#define IShellUIHelper_NavigateAndFind(This,URL,strQuery,varTargetFrame)    ( (This)->lpVtbl -> NavigateAndFind(This,URL,strQuery,varTargetFrame) )
#define IShellUIHelper_ImportExportFavorites(This,fImport,strImpExpPath)    ( (This)->lpVtbl -> ImportExportFavorites(This,fImport,strImpExpPath) )
#define IShellUIHelper_AutoCompleteSaveForm(This,Form)    ( (This)->lpVtbl -> AutoCompleteSaveForm(This,Form) )
#define IShellUIHelper_AutoScan(This,strSearch,strFailureUrl,pvarTargetFrame)    ( (This)->lpVtbl -> AutoScan(This,strSearch,strFailureUrl,pvarTargetFrame) )
#define IShellUIHelper_AutoCompleteAttach(This,Reserved)    ( (This)->lpVtbl -> AutoCompleteAttach(This,Reserved) )
#define IShellUIHelper_ShowBrowserUI(This,bstrName,pvarIn,pvarOut)    ( (This)->lpVtbl -> ShowBrowserUI(This,bstrName,pvarIn,pvarOut) )
#endif
#endif
#ifndef __IShellUIHelper2_INTERFACE_DEFINED__
#define __IShellUIHelper2_INTERFACE_DEFINED__
extern const IID IID_IShellUIHelper2;
typedef struct IShellUIHelper2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IShellUIHelper2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IShellUIHelper2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IShellUIHelper2 *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IShellUIHelper2 *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IShellUIHelper2 *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IShellUIHelper2 *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IShellUIHelper2 *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *ResetFirstBootMode) (IShellUIHelper2 *This);
	HRESULT(STDMETHODCALLTYPE *ResetSafeMode) (IShellUIHelper2 *This);
	HRESULT(STDMETHODCALLTYPE *RefreshOfflineDesktop) (IShellUIHelper2 *This);
	HRESULT(STDMETHODCALLTYPE *AddFavorite) (IShellUIHelper2 *This, BSTR URL, VARIANT *Title);
	HRESULT(STDMETHODCALLTYPE *AddChannel) (IShellUIHelper2 *This, BSTR URL);
	HRESULT(STDMETHODCALLTYPE *AddDesktopComponent) (IShellUIHelper2 *This, BSTR URL, BSTR Type, VARIANT *Left, VARIANT *Top, VARIANT *Width, VARIANT *Height);
	HRESULT(STDMETHODCALLTYPE *IsSubscribed) (IShellUIHelper2 *This, BSTR URL, VARIANT_BOOL *pBool);
	HRESULT(STDMETHODCALLTYPE *NavigateAndFind) (IShellUIHelper2 *This, BSTR URL, BSTR strQuery, VARIANT *varTargetFrame);
	HRESULT(STDMETHODCALLTYPE *ImportExportFavorites) (IShellUIHelper2 *This, VARIANT_BOOL fImport, BSTR strImpExpPath);
	HRESULT(STDMETHODCALLTYPE *AutoCompleteSaveForm) (IShellUIHelper2 *This, VARIANT *Form);
	HRESULT(STDMETHODCALLTYPE *AutoScan) (IShellUIHelper2 *This, BSTR strSearch, BSTR strFailureUrl, VARIANT *pvarTargetFrame);
	HRESULT(STDMETHODCALLTYPE *AutoCompleteAttach) (IShellUIHelper2 *This, VARIANT *Reserved);
	HRESULT(STDMETHODCALLTYPE *ShowBrowserUI) (IShellUIHelper2 *This, BSTR bstrName, VARIANT *pvarIn, VARIANT *pvarOut);
	HRESULT(STDMETHODCALLTYPE *AddSearchProvider) (IShellUIHelper2 *This, BSTR URL);
	HRESULT(STDMETHODCALLTYPE *RunOnceShown) (IShellUIHelper2 *This);
	HRESULT(STDMETHODCALLTYPE *SkipRunOnce) (IShellUIHelper2 *This);
	HRESULT(STDMETHODCALLTYPE *CustomizeSettings) (IShellUIHelper2 *This, VARIANT_BOOL fSQM, VARIANT_BOOL fPhishing, BSTR bstrLocale);
	HRESULT(STDMETHODCALLTYPE *SqmEnabled) (IShellUIHelper2 *This, VARIANT_BOOL *pfEnabled);
	HRESULT(STDMETHODCALLTYPE *PhishingEnabled) (IShellUIHelper2 *This, VARIANT_BOOL *pfEnabled);
	HRESULT(STDMETHODCALLTYPE *BrandImageUri) (IShellUIHelper2 *This, BSTR *pbstrUri);
	HRESULT(STDMETHODCALLTYPE *SkipTabsWelcome) (IShellUIHelper2 *This);
	HRESULT(STDMETHODCALLTYPE *DiagnoseConnection) (IShellUIHelper2 *This);
	HRESULT(STDMETHODCALLTYPE *CustomizeClearType) (IShellUIHelper2 *This, VARIANT_BOOL fSet);
	HRESULT(STDMETHODCALLTYPE *IsSearchProviderInstalled) (IShellUIHelper2 *This, BSTR URL, DWORD *pdwResult);
	HRESULT(STDMETHODCALLTYPE *IsSearchMigrated) (IShellUIHelper2 *This, VARIANT_BOOL *pfMigrated);
	HRESULT(STDMETHODCALLTYPE *DefaultSearchProvider) (IShellUIHelper2 *This, BSTR *pbstrName);
	HRESULT(STDMETHODCALLTYPE *RunOnceRequiredSettingsComplete) (IShellUIHelper2 *This, VARIANT_BOOL fComplete);
	HRESULT(STDMETHODCALLTYPE *RunOnceHasShown) (IShellUIHelper2 *This, VARIANT_BOOL *pfShown);
	HRESULT(STDMETHODCALLTYPE *SearchGuideUrl) (IShellUIHelper2 *This, BSTR *pbstrUrl);
	END_INTERFACE
} IShellUIHelper2Vtbl;
interface IShellUIHelper2
{
	CONST_VTBL struct IShellUIHelper2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IShellUIHelper2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IShellUIHelper2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IShellUIHelper2_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IShellUIHelper2_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IShellUIHelper2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IShellUIHelper2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IShellUIHelper2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IShellUIHelper2_ResetFirstBootMode(This)    ( (This)->lpVtbl -> ResetFirstBootMode(This) )
#define IShellUIHelper2_ResetSafeMode(This)    ( (This)->lpVtbl -> ResetSafeMode(This) )
#define IShellUIHelper2_RefreshOfflineDesktop(This)    ( (This)->lpVtbl -> RefreshOfflineDesktop(This) )
#define IShellUIHelper2_AddFavorite(This,URL,Title)    ( (This)->lpVtbl -> AddFavorite(This,URL,Title) )
#define IShellUIHelper2_AddChannel(This,URL)    ( (This)->lpVtbl -> AddChannel(This,URL) )
#define IShellUIHelper2_AddDesktopComponent(This,URL,Type,Left,Top,Width,Height)    ( (This)->lpVtbl -> AddDesktopComponent(This,URL,Type,Left,Top,Width,Height) )
#define IShellUIHelper2_IsSubscribed(This,URL,pBool)    ( (This)->lpVtbl -> IsSubscribed(This,URL,pBool) )
#define IShellUIHelper2_NavigateAndFind(This,URL,strQuery,varTargetFrame)    ( (This)->lpVtbl -> NavigateAndFind(This,URL,strQuery,varTargetFrame) )
#define IShellUIHelper2_ImportExportFavorites(This,fImport,strImpExpPath)    ( (This)->lpVtbl -> ImportExportFavorites(This,fImport,strImpExpPath) )
#define IShellUIHelper2_AutoCompleteSaveForm(This,Form)    ( (This)->lpVtbl -> AutoCompleteSaveForm(This,Form) )
#define IShellUIHelper2_AutoScan(This,strSearch,strFailureUrl,pvarTargetFrame)    ( (This)->lpVtbl -> AutoScan(This,strSearch,strFailureUrl,pvarTargetFrame) )
#define IShellUIHelper2_AutoCompleteAttach(This,Reserved)    ( (This)->lpVtbl -> AutoCompleteAttach(This,Reserved) )
#define IShellUIHelper2_ShowBrowserUI(This,bstrName,pvarIn,pvarOut)    ( (This)->lpVtbl -> ShowBrowserUI(This,bstrName,pvarIn,pvarOut) )
#define IShellUIHelper2_AddSearchProvider(This,URL)    ( (This)->lpVtbl -> AddSearchProvider(This,URL) )
#define IShellUIHelper2_RunOnceShown(This)    ( (This)->lpVtbl -> RunOnceShown(This) )
#define IShellUIHelper2_SkipRunOnce(This)    ( (This)->lpVtbl -> SkipRunOnce(This) )
#define IShellUIHelper2_CustomizeSettings(This,fSQM,fPhishing,bstrLocale)    ( (This)->lpVtbl -> CustomizeSettings(This,fSQM,fPhishing,bstrLocale) )
#define IShellUIHelper2_SqmEnabled(This,pfEnabled)    ( (This)->lpVtbl -> SqmEnabled(This,pfEnabled) )
#define IShellUIHelper2_PhishingEnabled(This,pfEnabled)    ( (This)->lpVtbl -> PhishingEnabled(This,pfEnabled) )
#define IShellUIHelper2_BrandImageUri(This,pbstrUri)    ( (This)->lpVtbl -> BrandImageUri(This,pbstrUri) )
#define IShellUIHelper2_SkipTabsWelcome(This)    ( (This)->lpVtbl -> SkipTabsWelcome(This) )
#define IShellUIHelper2_DiagnoseConnection(This)    ( (This)->lpVtbl -> DiagnoseConnection(This) )
#define IShellUIHelper2_CustomizeClearType(This,fSet)    ( (This)->lpVtbl -> CustomizeClearType(This,fSet) )
#define IShellUIHelper2_IsSearchProviderInstalled(This,URL,pdwResult)    ( (This)->lpVtbl -> IsSearchProviderInstalled(This,URL,pdwResult) )
#define IShellUIHelper2_IsSearchMigrated(This,pfMigrated)    ( (This)->lpVtbl -> IsSearchMigrated(This,pfMigrated) )
#define IShellUIHelper2_DefaultSearchProvider(This,pbstrName)    ( (This)->lpVtbl -> DefaultSearchProvider(This,pbstrName) )
#define IShellUIHelper2_RunOnceRequiredSettingsComplete(This,fComplete)    ( (This)->lpVtbl -> RunOnceRequiredSettingsComplete(This,fComplete) )
#define IShellUIHelper2_RunOnceHasShown(This,pfShown)    ( (This)->lpVtbl -> RunOnceHasShown(This,pfShown) )
#define IShellUIHelper2_SearchGuideUrl(This,pbstrUrl)    ( (This)->lpVtbl -> SearchGuideUrl(This,pbstrUrl) )
#endif
#endif
#ifndef __IShellUIHelper3_INTERFACE_DEFINED__
#define __IShellUIHelper3_INTERFACE_DEFINED__
extern const IID IID_IShellUIHelper3;
typedef struct IShellUIHelper3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IShellUIHelper3 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IShellUIHelper3 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IShellUIHelper3 *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IShellUIHelper3 *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IShellUIHelper3 *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IShellUIHelper3 *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IShellUIHelper3 *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *ResetFirstBootMode) (IShellUIHelper3 *This);
	HRESULT(STDMETHODCALLTYPE *ResetSafeMode) (IShellUIHelper3 *This);
	HRESULT(STDMETHODCALLTYPE *RefreshOfflineDesktop) (IShellUIHelper3 *This);
	HRESULT(STDMETHODCALLTYPE *AddFavorite) (IShellUIHelper3 *This, BSTR URL, VARIANT *Title);
	HRESULT(STDMETHODCALLTYPE *AddChannel) (IShellUIHelper3 *This, BSTR URL);
	HRESULT(STDMETHODCALLTYPE *AddDesktopComponent) (IShellUIHelper3 *This, BSTR URL, BSTR Type, VARIANT *Left, VARIANT *Top, VARIANT *Width, VARIANT *Height);
	HRESULT(STDMETHODCALLTYPE *IsSubscribed) (IShellUIHelper3 *This, BSTR URL, VARIANT_BOOL *pBool);
	HRESULT(STDMETHODCALLTYPE *NavigateAndFind) (IShellUIHelper3 *This, BSTR URL, BSTR strQuery, VARIANT *varTargetFrame);
	HRESULT(STDMETHODCALLTYPE *ImportExportFavorites) (IShellUIHelper3 *This, VARIANT_BOOL fImport, BSTR strImpExpPath);
	HRESULT(STDMETHODCALLTYPE *AutoCompleteSaveForm) (IShellUIHelper3 *This, VARIANT *Form);
	HRESULT(STDMETHODCALLTYPE *AutoScan) (IShellUIHelper3 *This, BSTR strSearch, BSTR strFailureUrl, VARIANT *pvarTargetFrame);
	HRESULT(STDMETHODCALLTYPE *AutoCompleteAttach) (IShellUIHelper3 *This, VARIANT *Reserved);
	HRESULT(STDMETHODCALLTYPE *ShowBrowserUI) (IShellUIHelper3 *This, BSTR bstrName, VARIANT *pvarIn, VARIANT *pvarOut);
	HRESULT(STDMETHODCALLTYPE *AddSearchProvider) (IShellUIHelper3 *This, BSTR URL);
	HRESULT(STDMETHODCALLTYPE *RunOnceShown) (IShellUIHelper3 *This);
	HRESULT(STDMETHODCALLTYPE *SkipRunOnce) (IShellUIHelper3 *This);
	HRESULT(STDMETHODCALLTYPE *CustomizeSettings) (IShellUIHelper3 *This, VARIANT_BOOL fSQM, VARIANT_BOOL fPhishing, BSTR bstrLocale);
	HRESULT(STDMETHODCALLTYPE *SqmEnabled) (IShellUIHelper3 *This, VARIANT_BOOL *pfEnabled);
	HRESULT(STDMETHODCALLTYPE *PhishingEnabled) (IShellUIHelper3 *This, VARIANT_BOOL *pfEnabled);
	HRESULT(STDMETHODCALLTYPE *BrandImageUri) (IShellUIHelper3 *This, BSTR *pbstrUri);
	HRESULT(STDMETHODCALLTYPE *SkipTabsWelcome) (IShellUIHelper3 *This);
	HRESULT(STDMETHODCALLTYPE *DiagnoseConnection) (IShellUIHelper3 *This);
	HRESULT(STDMETHODCALLTYPE *CustomizeClearType) (IShellUIHelper3 *This, VARIANT_BOOL fSet);
	HRESULT(STDMETHODCALLTYPE *IsSearchProviderInstalled) (IShellUIHelper3 *This, BSTR URL, DWORD *pdwResult);
	HRESULT(STDMETHODCALLTYPE *IsSearchMigrated) (IShellUIHelper3 *This, VARIANT_BOOL *pfMigrated);
	HRESULT(STDMETHODCALLTYPE *DefaultSearchProvider) (IShellUIHelper3 *This, BSTR *pbstrName);
	HRESULT(STDMETHODCALLTYPE *RunOnceRequiredSettingsComplete) (IShellUIHelper3 *This, VARIANT_BOOL fComplete);
	HRESULT(STDMETHODCALLTYPE *RunOnceHasShown) (IShellUIHelper3 *This, VARIANT_BOOL *pfShown);
	HRESULT(STDMETHODCALLTYPE *SearchGuideUrl) (IShellUIHelper3 *This, BSTR *pbstrUrl);
	HRESULT(STDMETHODCALLTYPE *AddService) (IShellUIHelper3 *This, BSTR URL);
	HRESULT(STDMETHODCALLTYPE *IsServiceInstalled) (IShellUIHelper3 *This, BSTR URL, BSTR Verb, DWORD *pdwResult);
	HRESULT(STDMETHODCALLTYPE *InPrivateFilteringEnabled) (IShellUIHelper3 *This, VARIANT_BOOL *pfEnabled);
	HRESULT(STDMETHODCALLTYPE *AddToFavoritesBar) (IShellUIHelper3 *This, BSTR URL, BSTR Title, VARIANT *Type);
	HRESULT(STDMETHODCALLTYPE *BuildNewTabPage) (IShellUIHelper3 *This);
	HRESULT(STDMETHODCALLTYPE *SetRecentlyClosedVisible) (IShellUIHelper3 *This, VARIANT_BOOL fVisible);
	HRESULT(STDMETHODCALLTYPE *SetActivitiesVisible) (IShellUIHelper3 *This, VARIANT_BOOL fVisible);
	HRESULT(STDMETHODCALLTYPE *ContentDiscoveryReset) (IShellUIHelper3 *This);
	HRESULT(STDMETHODCALLTYPE *IsSuggestedSitesEnabled) (IShellUIHelper3 *This, VARIANT_BOOL *pfEnabled);
	HRESULT(STDMETHODCALLTYPE *EnableSuggestedSites) (IShellUIHelper3 *This, VARIANT_BOOL fEnable);
	HRESULT(STDMETHODCALLTYPE *NavigateToSuggestedSites) (IShellUIHelper3 *This, BSTR bstrRelativeUrl);
	HRESULT(STDMETHODCALLTYPE *ShowTabsHelp) (IShellUIHelper3 *This);
	HRESULT(STDMETHODCALLTYPE *ShowInPrivateHelp) (IShellUIHelper3 *This);
	END_INTERFACE
} IShellUIHelper3Vtbl;
interface IShellUIHelper3
{
	CONST_VTBL struct IShellUIHelper3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IShellUIHelper3_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IShellUIHelper3_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IShellUIHelper3_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IShellUIHelper3_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IShellUIHelper3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IShellUIHelper3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IShellUIHelper3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IShellUIHelper3_ResetFirstBootMode(This)    ( (This)->lpVtbl -> ResetFirstBootMode(This) )
#define IShellUIHelper3_ResetSafeMode(This)    ( (This)->lpVtbl -> ResetSafeMode(This) )
#define IShellUIHelper3_RefreshOfflineDesktop(This)    ( (This)->lpVtbl -> RefreshOfflineDesktop(This) )
#define IShellUIHelper3_AddFavorite(This,URL,Title)    ( (This)->lpVtbl -> AddFavorite(This,URL,Title) )
#define IShellUIHelper3_AddChannel(This,URL)    ( (This)->lpVtbl -> AddChannel(This,URL) )
#define IShellUIHelper3_AddDesktopComponent(This,URL,Type,Left,Top,Width,Height)    ( (This)->lpVtbl -> AddDesktopComponent(This,URL,Type,Left,Top,Width,Height) )
#define IShellUIHelper3_IsSubscribed(This,URL,pBool)    ( (This)->lpVtbl -> IsSubscribed(This,URL,pBool) )
#define IShellUIHelper3_NavigateAndFind(This,URL,strQuery,varTargetFrame)    ( (This)->lpVtbl -> NavigateAndFind(This,URL,strQuery,varTargetFrame) )
#define IShellUIHelper3_ImportExportFavorites(This,fImport,strImpExpPath)    ( (This)->lpVtbl -> ImportExportFavorites(This,fImport,strImpExpPath) )
#define IShellUIHelper3_AutoCompleteSaveForm(This,Form)    ( (This)->lpVtbl -> AutoCompleteSaveForm(This,Form) )
#define IShellUIHelper3_AutoScan(This,strSearch,strFailureUrl,pvarTargetFrame)    ( (This)->lpVtbl -> AutoScan(This,strSearch,strFailureUrl,pvarTargetFrame) )
#define IShellUIHelper3_AutoCompleteAttach(This,Reserved)    ( (This)->lpVtbl -> AutoCompleteAttach(This,Reserved) )
#define IShellUIHelper3_ShowBrowserUI(This,bstrName,pvarIn,pvarOut)    ( (This)->lpVtbl -> ShowBrowserUI(This,bstrName,pvarIn,pvarOut) )
#define IShellUIHelper3_AddSearchProvider(This,URL)    ( (This)->lpVtbl -> AddSearchProvider(This,URL) )
#define IShellUIHelper3_RunOnceShown(This)    ( (This)->lpVtbl -> RunOnceShown(This) )
#define IShellUIHelper3_SkipRunOnce(This)    ( (This)->lpVtbl -> SkipRunOnce(This) )
#define IShellUIHelper3_CustomizeSettings(This,fSQM,fPhishing,bstrLocale)    ( (This)->lpVtbl -> CustomizeSettings(This,fSQM,fPhishing,bstrLocale) )
#define IShellUIHelper3_SqmEnabled(This,pfEnabled)    ( (This)->lpVtbl -> SqmEnabled(This,pfEnabled) )
#define IShellUIHelper3_PhishingEnabled(This,pfEnabled)    ( (This)->lpVtbl -> PhishingEnabled(This,pfEnabled) )
#define IShellUIHelper3_BrandImageUri(This,pbstrUri)    ( (This)->lpVtbl -> BrandImageUri(This,pbstrUri) )
#define IShellUIHelper3_SkipTabsWelcome(This)    ( (This)->lpVtbl -> SkipTabsWelcome(This) )
#define IShellUIHelper3_DiagnoseConnection(This)    ( (This)->lpVtbl -> DiagnoseConnection(This) )
#define IShellUIHelper3_CustomizeClearType(This,fSet)    ( (This)->lpVtbl -> CustomizeClearType(This,fSet) )
#define IShellUIHelper3_IsSearchProviderInstalled(This,URL,pdwResult)    ( (This)->lpVtbl -> IsSearchProviderInstalled(This,URL,pdwResult) )
#define IShellUIHelper3_IsSearchMigrated(This,pfMigrated)    ( (This)->lpVtbl -> IsSearchMigrated(This,pfMigrated) )
#define IShellUIHelper3_DefaultSearchProvider(This,pbstrName)    ( (This)->lpVtbl -> DefaultSearchProvider(This,pbstrName) )
#define IShellUIHelper3_RunOnceRequiredSettingsComplete(This,fComplete)    ( (This)->lpVtbl -> RunOnceRequiredSettingsComplete(This,fComplete) )
#define IShellUIHelper3_RunOnceHasShown(This,pfShown)    ( (This)->lpVtbl -> RunOnceHasShown(This,pfShown) )
#define IShellUIHelper3_SearchGuideUrl(This,pbstrUrl)    ( (This)->lpVtbl -> SearchGuideUrl(This,pbstrUrl) )
#define IShellUIHelper3_AddService(This,URL)    ( (This)->lpVtbl -> AddService(This,URL) )
#define IShellUIHelper3_IsServiceInstalled(This,URL,Verb,pdwResult)    ( (This)->lpVtbl -> IsServiceInstalled(This,URL,Verb,pdwResult) )
#define IShellUIHelper3_InPrivateFilteringEnabled(This,pfEnabled)    ( (This)->lpVtbl -> InPrivateFilteringEnabled(This,pfEnabled) )
#define IShellUIHelper3_AddToFavoritesBar(This,URL,Title,Type)    ( (This)->lpVtbl -> AddToFavoritesBar(This,URL,Title,Type) )
#define IShellUIHelper3_BuildNewTabPage(This)    ( (This)->lpVtbl -> BuildNewTabPage(This) )
#define IShellUIHelper3_SetRecentlyClosedVisible(This,fVisible)    ( (This)->lpVtbl -> SetRecentlyClosedVisible(This,fVisible) )
#define IShellUIHelper3_SetActivitiesVisible(This,fVisible)    ( (This)->lpVtbl -> SetActivitiesVisible(This,fVisible) )
#define IShellUIHelper3_ContentDiscoveryReset(This)    ( (This)->lpVtbl -> ContentDiscoveryReset(This) )
#define IShellUIHelper3_IsSuggestedSitesEnabled(This,pfEnabled)    ( (This)->lpVtbl -> IsSuggestedSitesEnabled(This,pfEnabled) )
#define IShellUIHelper3_EnableSuggestedSites(This,fEnable)    ( (This)->lpVtbl -> EnableSuggestedSites(This,fEnable) )
#define IShellUIHelper3_NavigateToSuggestedSites(This,bstrRelativeUrl)    ( (This)->lpVtbl -> NavigateToSuggestedSites(This,bstrRelativeUrl) )
#define IShellUIHelper3_ShowTabsHelp(This)    ( (This)->lpVtbl -> ShowTabsHelp(This) )
#define IShellUIHelper3_ShowInPrivateHelp(This)    ( (This)->lpVtbl -> ShowInPrivateHelp(This) )
#endif
#endif
	extern const CLSID CLSID_ShellUIHelper;
#ifndef __DShellNameSpaceEvents_DISPINTERFACE_DEFINED__
#define __DShellNameSpaceEvents_DISPINTERFACE_DEFINED__
extern const IID DIID_DShellNameSpaceEvents;
typedef struct DShellNameSpaceEventsVtbl
{
	BEGIN_INTERFACE HRESULT(STDMETHODCALLTYPE *QueryInterface) (DShellNameSpaceEvents *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (DShellNameSpaceEvents *This);
	ULONG(STDMETHODCALLTYPE *Release) (DShellNameSpaceEvents *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (DShellNameSpaceEvents *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (DShellNameSpaceEvents *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (DShellNameSpaceEvents *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (DShellNameSpaceEvents *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	END_INTERFACE
} DShellNameSpaceEventsVtbl;
interface DShellNameSpaceEvents
{
	CONST_VTBL struct DShellNameSpaceEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define DShellNameSpaceEvents_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define DShellNameSpaceEvents_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define DShellNameSpaceEvents_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define DShellNameSpaceEvents_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define DShellNameSpaceEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define DShellNameSpaceEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define DShellNameSpaceEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#endif
#endif
#ifndef __IShellFavoritesNameSpace_INTERFACE_DEFINED__
#define __IShellFavoritesNameSpace_INTERFACE_DEFINED__
extern const IID IID_IShellFavoritesNameSpace;
typedef struct IShellFavoritesNameSpaceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IShellFavoritesNameSpace *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IShellFavoritesNameSpace *This);
	ULONG(STDMETHODCALLTYPE *Release) (IShellFavoritesNameSpace *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IShellFavoritesNameSpace *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IShellFavoritesNameSpace *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IShellFavoritesNameSpace *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IShellFavoritesNameSpace *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *MoveSelectionUp) (IShellFavoritesNameSpace *This);
	HRESULT(STDMETHODCALLTYPE *MoveSelectionDown) (IShellFavoritesNameSpace *This);
	HRESULT(STDMETHODCALLTYPE *ResetSort) (IShellFavoritesNameSpace *This);
	HRESULT(STDMETHODCALLTYPE *NewFolder) (IShellFavoritesNameSpace *This);
	HRESULT(STDMETHODCALLTYPE *Synchronize) (IShellFavoritesNameSpace *This);
	HRESULT(STDMETHODCALLTYPE *Import) (IShellFavoritesNameSpace *This);
	HRESULT(STDMETHODCALLTYPE *Export) (IShellFavoritesNameSpace *This);
	HRESULT(STDMETHODCALLTYPE *InvokeContextMenuCommand) (IShellFavoritesNameSpace *This, BSTR strCommand);
	HRESULT(STDMETHODCALLTYPE *MoveSelectionTo) (IShellFavoritesNameSpace *This);
	HRESULT(STDMETHODCALLTYPE *get_SubscriptionsEnabled) (IShellFavoritesNameSpace *This, VARIANT_BOOL *pBool);
	HRESULT(STDMETHODCALLTYPE *CreateSubscriptionForSelection) (IShellFavoritesNameSpace *This, VARIANT_BOOL *pBool);
	HRESULT(STDMETHODCALLTYPE *DeleteSubscriptionForSelection) (IShellFavoritesNameSpace *This, VARIANT_BOOL *pBool);
	HRESULT(STDMETHODCALLTYPE *SetRoot) (IShellFavoritesNameSpace *This, BSTR bstrFullPath);
	END_INTERFACE
} IShellFavoritesNameSpaceVtbl;
interface IShellFavoritesNameSpace
{
	CONST_VTBL struct IShellFavoritesNameSpaceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IShellFavoritesNameSpace_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IShellFavoritesNameSpace_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IShellFavoritesNameSpace_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IShellFavoritesNameSpace_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IShellFavoritesNameSpace_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IShellFavoritesNameSpace_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IShellFavoritesNameSpace_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IShellFavoritesNameSpace_MoveSelectionUp(This)    ( (This)->lpVtbl -> MoveSelectionUp(This) )
#define IShellFavoritesNameSpace_MoveSelectionDown(This)    ( (This)->lpVtbl -> MoveSelectionDown(This) )
#define IShellFavoritesNameSpace_ResetSort(This)    ( (This)->lpVtbl -> ResetSort(This) )
#define IShellFavoritesNameSpace_NewFolder(This)    ( (This)->lpVtbl -> NewFolder(This) )
#define IShellFavoritesNameSpace_Synchronize(This)    ( (This)->lpVtbl -> Synchronize(This) )
#define IShellFavoritesNameSpace_Import(This)    ( (This)->lpVtbl -> Import(This) )
#define IShellFavoritesNameSpace_Export(This)    ( (This)->lpVtbl -> Export(This) )
#define IShellFavoritesNameSpace_InvokeContextMenuCommand(This,strCommand)    ( (This)->lpVtbl -> InvokeContextMenuCommand(This,strCommand) )
#define IShellFavoritesNameSpace_MoveSelectionTo(This)    ( (This)->lpVtbl -> MoveSelectionTo(This) )
#define IShellFavoritesNameSpace_get_SubscriptionsEnabled(This,pBool)    ( (This)->lpVtbl -> get_SubscriptionsEnabled(This,pBool) )
#define IShellFavoritesNameSpace_CreateSubscriptionForSelection(This,pBool)    ( (This)->lpVtbl -> CreateSubscriptionForSelection(This,pBool) )
#define IShellFavoritesNameSpace_DeleteSubscriptionForSelection(This,pBool)    ( (This)->lpVtbl -> DeleteSubscriptionForSelection(This,pBool) )
#define IShellFavoritesNameSpace_SetRoot(This,bstrFullPath)    ( (This)->lpVtbl -> SetRoot(This,bstrFullPath) )
#endif
#endif
#ifndef __IShellNameSpace_INTERFACE_DEFINED__
#define __IShellNameSpace_INTERFACE_DEFINED__
extern const IID IID_IShellNameSpace;
typedef struct IShellNameSpaceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IShellNameSpace *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IShellNameSpace *This);
	ULONG(STDMETHODCALLTYPE *Release) (IShellNameSpace *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IShellNameSpace *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IShellNameSpace *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IShellNameSpace *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IShellNameSpace *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *MoveSelectionUp) (IShellNameSpace *This);
	HRESULT(STDMETHODCALLTYPE *MoveSelectionDown) (IShellNameSpace *This);
	HRESULT(STDMETHODCALLTYPE *ResetSort) (IShellNameSpace *This);
	HRESULT(STDMETHODCALLTYPE *NewFolder) (IShellNameSpace *This);
	HRESULT(STDMETHODCALLTYPE *Synchronize) (IShellNameSpace *This);
	HRESULT(STDMETHODCALLTYPE *Import) (IShellNameSpace *This);
	HRESULT(STDMETHODCALLTYPE *Export) (IShellNameSpace *This);
	HRESULT(STDMETHODCALLTYPE *InvokeContextMenuCommand) (IShellNameSpace *This, BSTR strCommand);
	HRESULT(STDMETHODCALLTYPE *MoveSelectionTo) (IShellNameSpace *This);
	HRESULT(STDMETHODCALLTYPE *get_SubscriptionsEnabled) (IShellNameSpace *This, VARIANT_BOOL *pBool);
	HRESULT(STDMETHODCALLTYPE *CreateSubscriptionForSelection) (IShellNameSpace *This, VARIANT_BOOL *pBool);
	HRESULT(STDMETHODCALLTYPE *DeleteSubscriptionForSelection) (IShellNameSpace *This, VARIANT_BOOL *pBool);
	HRESULT(STDMETHODCALLTYPE *SetRoot) (IShellNameSpace *This, BSTR bstrFullPath);
	HRESULT(STDMETHODCALLTYPE *get_EnumOptions) (IShellNameSpace *This, LONG *pgrfEnumFlags);
	HRESULT(STDMETHODCALLTYPE *put_EnumOptions) (IShellNameSpace *This, LONG lVal);
	HRESULT(STDMETHODCALLTYPE *get_SelectedItem) (IShellNameSpace *This, IDispatch **pItem);
	HRESULT(STDMETHODCALLTYPE *put_SelectedItem) (IShellNameSpace *This, IDispatch *pItem);
	HRESULT(STDMETHODCALLTYPE *get_Root) (IShellNameSpace *This, VARIANT *pvar);
	HRESULT(STDMETHODCALLTYPE *put_Root) (IShellNameSpace *This, VARIANT var);
	HRESULT(STDMETHODCALLTYPE *get_Depth) (IShellNameSpace *This, int *piDepth);
	HRESULT(STDMETHODCALLTYPE *put_Depth) (IShellNameSpace *This, int iDepth);
	HRESULT(STDMETHODCALLTYPE *get_Mode) (IShellNameSpace *This, UINT *puMode);
	HRESULT(STDMETHODCALLTYPE *put_Mode) (IShellNameSpace *This, UINT uMode);
	HRESULT(STDMETHODCALLTYPE *get_Flags) (IShellNameSpace *This, DWORD *pdwFlags);
	HRESULT(STDMETHODCALLTYPE *put_Flags) (IShellNameSpace *This, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE *put_TVFlags) (IShellNameSpace *This, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE *get_TVFlags) (IShellNameSpace *This, DWORD *dwFlags);
	HRESULT(STDMETHODCALLTYPE *get_Columns) (IShellNameSpace *This, BSTR *bstrColumns);
	HRESULT(STDMETHODCALLTYPE *put_Columns) (IShellNameSpace *This, BSTR bstrColumns);
	HRESULT(STDMETHODCALLTYPE *get_CountViewTypes) (IShellNameSpace *This, int *piTypes);
	HRESULT(STDMETHODCALLTYPE *SetViewType) (IShellNameSpace *This, int iType);
	HRESULT(STDMETHODCALLTYPE *SelectedItems) (IShellNameSpace *This, IDispatch **ppid);
	HRESULT(STDMETHODCALLTYPE *Expand) (IShellNameSpace *This, VARIANT var, int iDepth);
	HRESULT(STDMETHODCALLTYPE *UnselectAll) (IShellNameSpace *This);
	END_INTERFACE
} IShellNameSpaceVtbl;
interface IShellNameSpace
{
	CONST_VTBL struct IShellNameSpaceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IShellNameSpace_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IShellNameSpace_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IShellNameSpace_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IShellNameSpace_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IShellNameSpace_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IShellNameSpace_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IShellNameSpace_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IShellNameSpace_MoveSelectionUp(This)    ( (This)->lpVtbl -> MoveSelectionUp(This) )
#define IShellNameSpace_MoveSelectionDown(This)    ( (This)->lpVtbl -> MoveSelectionDown(This) )
#define IShellNameSpace_ResetSort(This)    ( (This)->lpVtbl -> ResetSort(This) )
#define IShellNameSpace_NewFolder(This)    ( (This)->lpVtbl -> NewFolder(This) )
#define IShellNameSpace_Synchronize(This)    ( (This)->lpVtbl -> Synchronize(This) )
#define IShellNameSpace_Import(This)    ( (This)->lpVtbl -> Import(This) )
#define IShellNameSpace_Export(This)    ( (This)->lpVtbl -> Export(This) )
#define IShellNameSpace_InvokeContextMenuCommand(This,strCommand)    ( (This)->lpVtbl -> InvokeContextMenuCommand(This,strCommand) )
#define IShellNameSpace_MoveSelectionTo(This)    ( (This)->lpVtbl -> MoveSelectionTo(This) )
#define IShellNameSpace_get_SubscriptionsEnabled(This,pBool)    ( (This)->lpVtbl -> get_SubscriptionsEnabled(This,pBool) )
#define IShellNameSpace_CreateSubscriptionForSelection(This,pBool)    ( (This)->lpVtbl -> CreateSubscriptionForSelection(This,pBool) )
#define IShellNameSpace_DeleteSubscriptionForSelection(This,pBool)    ( (This)->lpVtbl -> DeleteSubscriptionForSelection(This,pBool) )
#define IShellNameSpace_SetRoot(This,bstrFullPath)    ( (This)->lpVtbl -> SetRoot(This,bstrFullPath) )
#define IShellNameSpace_get_EnumOptions(This,pgrfEnumFlags)    ( (This)->lpVtbl -> get_EnumOptions(This,pgrfEnumFlags) )
#define IShellNameSpace_put_EnumOptions(This,lVal)    ( (This)->lpVtbl -> put_EnumOptions(This,lVal) )
#define IShellNameSpace_get_SelectedItem(This,pItem)    ( (This)->lpVtbl -> get_SelectedItem(This,pItem) )
#define IShellNameSpace_put_SelectedItem(This,pItem)    ( (This)->lpVtbl -> put_SelectedItem(This,pItem) )
#define IShellNameSpace_get_Root(This,pvar)    ( (This)->lpVtbl -> get_Root(This,pvar) )
#define IShellNameSpace_put_Root(This,var)    ( (This)->lpVtbl -> put_Root(This,var) )
#define IShellNameSpace_get_Depth(This,piDepth)    ( (This)->lpVtbl -> get_Depth(This,piDepth) )
#define IShellNameSpace_put_Depth(This,iDepth)    ( (This)->lpVtbl -> put_Depth(This,iDepth) )
#define IShellNameSpace_get_Mode(This,puMode)    ( (This)->lpVtbl -> get_Mode(This,puMode) )
#define IShellNameSpace_put_Mode(This,uMode)    ( (This)->lpVtbl -> put_Mode(This,uMode) )
#define IShellNameSpace_get_Flags(This,pdwFlags)    ( (This)->lpVtbl -> get_Flags(This,pdwFlags) )
#define IShellNameSpace_put_Flags(This,dwFlags)    ( (This)->lpVtbl -> put_Flags(This,dwFlags) )
#define IShellNameSpace_put_TVFlags(This,dwFlags)    ( (This)->lpVtbl -> put_TVFlags(This,dwFlags) )
#define IShellNameSpace_get_TVFlags(This,dwFlags)    ( (This)->lpVtbl -> get_TVFlags(This,dwFlags) )
#define IShellNameSpace_get_Columns(This,bstrColumns)    ( (This)->lpVtbl -> get_Columns(This,bstrColumns) )
#define IShellNameSpace_put_Columns(This,bstrColumns)    ( (This)->lpVtbl -> put_Columns(This,bstrColumns) )
#define IShellNameSpace_get_CountViewTypes(This,piTypes)    ( (This)->lpVtbl -> get_CountViewTypes(This,piTypes) )
#define IShellNameSpace_SetViewType(This,iType)    ( (This)->lpVtbl -> SetViewType(This,iType) )
#define IShellNameSpace_SelectedItems(This,ppid)    ( (This)->lpVtbl -> SelectedItems(This,ppid) )
#define IShellNameSpace_Expand(This,var,iDepth)    ( (This)->lpVtbl -> Expand(This,var,iDepth) )
#define IShellNameSpace_UnselectAll(This)    ( (This)->lpVtbl -> UnselectAll(This) )
#endif
#endif
extern const CLSID CLSID_ShellNameSpace;
#ifndef __IScriptErrorList_INTERFACE_DEFINED__
#define __IScriptErrorList_INTERFACE_DEFINED__
extern const IID IID_IScriptErrorList;
typedef struct IScriptErrorListVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IScriptErrorList *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IScriptErrorList *This);
	ULONG(STDMETHODCALLTYPE *Release) (IScriptErrorList *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IScriptErrorList *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IScriptErrorList *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IScriptErrorList *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IScriptErrorList *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *advanceError) (IScriptErrorList *This);
	HRESULT(STDMETHODCALLTYPE *retreatError) (IScriptErrorList *This);
	HRESULT(STDMETHODCALLTYPE *canAdvanceError) (IScriptErrorList *This, BOOL *pfCanAdvance);
	HRESULT(STDMETHODCALLTYPE *canRetreatError) (IScriptErrorList *This, BOOL *pfCanRetreat);
	HRESULT(STDMETHODCALLTYPE *getErrorLine) (IScriptErrorList *This, LONG *plLine);
	HRESULT(STDMETHODCALLTYPE *getErrorChar) (IScriptErrorList *This, LONG *plChar);
	HRESULT(STDMETHODCALLTYPE *getErrorCode) (IScriptErrorList *This, LONG *plCode);
	HRESULT(STDMETHODCALLTYPE *getErrorMsg) (IScriptErrorList *This, BSTR *pstr);
	HRESULT(STDMETHODCALLTYPE *getErrorUrl) (IScriptErrorList *This, BSTR *pstr);
	HRESULT(STDMETHODCALLTYPE *getAlwaysShowLockState) (IScriptErrorList *This, BOOL *pfAlwaysShowLocked);
	HRESULT(STDMETHODCALLTYPE *getDetailsPaneOpen) (IScriptErrorList *This, BOOL *pfDetailsPaneOpen);
	HRESULT(STDMETHODCALLTYPE *setDetailsPaneOpen) (IScriptErrorList *This, BOOL fDetailsPaneOpen);
	HRESULT(STDMETHODCALLTYPE *getPerErrorDisplay) (IScriptErrorList *This, BOOL *pfPerErrorDisplay);
	HRESULT(STDMETHODCALLTYPE *setPerErrorDisplay) (IScriptErrorList *This, BOOL fPerErrorDisplay);
	END_INTERFACE
} IScriptErrorListVtbl;
interface IScriptErrorList
{
	CONST_VTBL struct IScriptErrorListVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IScriptErrorList_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IScriptErrorList_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IScriptErrorList_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IScriptErrorList_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IScriptErrorList_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IScriptErrorList_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IScriptErrorList_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IScriptErrorList_advanceError(This)    ( (This)->lpVtbl -> advanceError(This) )
#define IScriptErrorList_retreatError(This)    ( (This)->lpVtbl -> retreatError(This) )
#define IScriptErrorList_canAdvanceError(This,pfCanAdvance)    ( (This)->lpVtbl -> canAdvanceError(This,pfCanAdvance) )
#define IScriptErrorList_canRetreatError(This,pfCanRetreat)    ( (This)->lpVtbl -> canRetreatError(This,pfCanRetreat) )
#define IScriptErrorList_getErrorLine(This,plLine)    ( (This)->lpVtbl -> getErrorLine(This,plLine) )
#define IScriptErrorList_getErrorChar(This,plChar)    ( (This)->lpVtbl -> getErrorChar(This,plChar) )
#define IScriptErrorList_getErrorCode(This,plCode)    ( (This)->lpVtbl -> getErrorCode(This,plCode) )
#define IScriptErrorList_getErrorMsg(This,pstr)    ( (This)->lpVtbl -> getErrorMsg(This,pstr) )
#define IScriptErrorList_getErrorUrl(This,pstr)    ( (This)->lpVtbl -> getErrorUrl(This,pstr) )
#define IScriptErrorList_getAlwaysShowLockState(This,pfAlwaysShowLocked)    ( (This)->lpVtbl -> getAlwaysShowLockState(This,pfAlwaysShowLocked) )
#define IScriptErrorList_getDetailsPaneOpen(This,pfDetailsPaneOpen)    ( (This)->lpVtbl -> getDetailsPaneOpen(This,pfDetailsPaneOpen) )
#define IScriptErrorList_setDetailsPaneOpen(This,fDetailsPaneOpen)    ( (This)->lpVtbl -> setDetailsPaneOpen(This,fDetailsPaneOpen) )
#define IScriptErrorList_getPerErrorDisplay(This,pfPerErrorDisplay)    ( (This)->lpVtbl -> getPerErrorDisplay(This,pfPerErrorDisplay) )
#define IScriptErrorList_setPerErrorDisplay(This,fPerErrorDisplay)    ( (This)->lpVtbl -> setPerErrorDisplay(This,fPerErrorDisplay) )
#endif
#endif
extern const CLSID CLSID_CScriptErrorList;
#endif
#endif
