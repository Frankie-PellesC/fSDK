/*+@@file@@----------------------------------------------------------------*//*!
 \file		OleAcc.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep  4 22:43:05 2016
 \date		Modified on Sun Sep  4 22:43:05 2016
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
#ifndef __oleacc_h__
#define __oleacc_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IAccessible_FWD_DEFINED__
#define __IAccessible_FWD_DEFINED__
typedef interface IAccessible IAccessible;
#endif
#ifndef __IAccessibleHandler_FWD_DEFINED__
#define __IAccessibleHandler_FWD_DEFINED__
typedef interface IAccessibleHandler IAccessibleHandler;
#endif
#ifndef __IAccIdentity_FWD_DEFINED__
#define __IAccIdentity_FWD_DEFINED__
typedef interface IAccIdentity IAccIdentity;
#endif
#ifndef __IAccPropServer_FWD_DEFINED__
#define __IAccPropServer_FWD_DEFINED__
typedef interface IAccPropServer IAccPropServer;
#endif
#ifndef __IAccPropServices_FWD_DEFINED__
#define __IAccPropServices_FWD_DEFINED__
typedef interface IAccPropServices IAccPropServices;
#endif
#ifndef __IAccessible_FWD_DEFINED__
#define __IAccessible_FWD_DEFINED__
typedef interface IAccessible IAccessible;
#endif
#ifndef __IAccessibleHandler_FWD_DEFINED__
#define __IAccessibleHandler_FWD_DEFINED__
typedef interface IAccessibleHandler IAccessibleHandler;
#endif
#ifndef __IAccIdentity_FWD_DEFINED__
#define __IAccIdentity_FWD_DEFINED__
typedef interface IAccIdentity IAccIdentity;
#endif
#ifndef __IAccPropServer_FWD_DEFINED__
#define __IAccPropServer_FWD_DEFINED__
typedef interface IAccPropServer IAccPropServer;
#endif
#ifndef __IAccPropServices_FWD_DEFINED__
#define __IAccPropServices_FWD_DEFINED__
typedef interface IAccPropServices IAccPropServices;
#endif
#ifndef __CAccPropServices_FWD_DEFINED__
#define __CAccPropServices_FWD_DEFINED__
typedef struct CAccPropServices CAccPropServices;
#endif
#include <oaidl.h>
typedef LRESULT(STDAPICALLTYPE *LPFNLRESULTFROMOBJECT) (REFIID riid, WPARAM wParam, LPUNKNOWN punk);
typedef HRESULT(STDAPICALLTYPE *LPFNOBJECTFROMLRESULT) (LRESULT lResult, REFIID riid, WPARAM wParam, void **ppvObject);
typedef HRESULT(STDAPICALLTYPE *LPFNACCESSIBLEOBJECTFROMWINDOW) (HWND hwnd, DWORD dwId, REFIID riid, void **ppvObject);
typedef HRESULT(STDAPICALLTYPE *LPFNACCESSIBLEOBJECTFROMPOINT) (POINT ptScreen, IAccessible **ppacc, VARIANT *pvarChild);
typedef HRESULT(STDAPICALLTYPE *LPFNCREATESTDACCESSIBLEOBJECT) (HWND hwnd, LONG idObject, REFIID riid, void **ppvObject);
typedef HRESULT(STDAPICALLTYPE *LPFNACCESSIBLECHILDREN) (IAccessible *paccContainer, LONG iChildStart, LONG cChildren, VARIANT *rgvarChildren, LONG *pcObtained);
DEFINE_GUID(LIBID_Accessibility, 0x1ea4dbf0, 0x3c3b, 0x11cf, 0x81, 0x0c, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(IID_IAccessible, 0x618736e0, 0x3c3d, 0x11cf, 0x81, 0x0c, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(IID_IAccessibleHandler, 0x03022430, 0xABC4, 0x11d0, 0xBD, 0xE2, 0x00, 0xAA, 0x00, 0x1A, 0x19, 0x53);
DEFINE_GUID(IID_IAccIdentity, 0x7852b78d, 0x1cfd, 0x41c1, 0xa6, 0x15, 0x9c, 0x0c, 0x85, 0x96, 0x0b, 0x5f);
DEFINE_GUID(IID_IAccPropServer, 0x76c0dbbb, 0x15e0, 0x4e7b, 0xb6, 0x1b, 0x20, 0xee, 0xea, 0x20, 0x01, 0xe0);
DEFINE_GUID(IID_IAccPropServices, 0x6e26e776, 0x04f0, 0x495d, 0x80, 0xe4, 0x33, 0x30, 0x35, 0x2e, 0x31, 0x69);
DEFINE_GUID(IID_IAccPropMgrInternal, 0x2bd370a9, 0x3e7f, 0x4edd, 0x8a, 0x85, 0xf8, 0xfe, 0xd1, 0xf8, 0xe5, 0x1f);
DEFINE_GUID(CLSID_AccPropServices, 0xb5f8350b, 0x0548, 0x48b1, 0xa6, 0xee, 0x88, 0xbd, 0x00, 0xb4, 0xa5, 0xe7);
DEFINE_GUID(IIS_IsOleaccProxy, 0x902697fa, 0x80e4, 0x4560, 0x80, 0x2a, 0xa1, 0x3f, 0x22, 0xa6, 0x47, 0x09);
STDAPI_(LRESULT)LresultFromObject(REFIID riid, WPARAM wParam, LPUNKNOWN punk);
STDAPI ObjectFromLresult(LRESULT lResult, REFIID riid, WPARAM wParam, void **ppvObject);
STDAPI WindowFromAccessibleObject(IAccessible *, HWND *phwnd);
STDAPI AccessibleObjectFromWindow(HWND hwnd, DWORD dwId, REFIID riid, void **ppvObject);
STDAPI AccessibleObjectFromEvent(HWND hwnd, DWORD dwId, DWORD dwChildId, IAccessible **ppacc, VARIANT *pvarChild);
STDAPI AccessibleObjectFromPoint(POINT ptScreen, IAccessible **ppacc, VARIANT *pvarChild);
STDAPI AccessibleChildren(IAccessible *paccContainer, LONG iChildStart, LONG cChildren, VARIANT *rgvarChildren, LONG *pcObtained);
STDAPI_(UINT)GetRoleTextA(DWORD lRole, LPSTR lpszRole, UINT cchRoleMax);
STDAPI_(UINT)GetRoleTextW(DWORD lRole, LPWSTR lpszRole, UINT cchRoleMax);
#ifdef UNICODE
#define GetRoleText     GetRoleTextW
#else
#define GetRoleText     GetRoleTextA
#endif
STDAPI_(UINT)GetStateTextA(DWORD lStateBit, LPSTR lpszState, UINT cchState);
STDAPI_(UINT)GetStateTextW(DWORD lStateBit, LPWSTR lpszState, UINT cchState);
#ifdef UNICODE
#define GetStateText    GetStateTextW
#else
#define GetStateText    GetStateTextA
#endif
STDAPI_(VOID)GetOleaccVersionInfo(DWORD * pVer, DWORD * pBuild);
STDAPI CreateStdAccessibleObject(HWND hwnd, LONG idObject, REFIID riid, void **ppvObject);
STDAPI CreateStdAccessibleProxyA(HWND hwnd, LPCSTR pClassName, LONG idObject, REFIID riid, void **ppvObject);
STDAPI CreateStdAccessibleProxyW(HWND hwnd, LPCWSTR pClassName, LONG idObject, REFIID riid, void **ppvObject);
#ifdef UNICODE
#define CreateStdAccessibleProxy     CreateStdAccessibleProxyW
#else
#define CreateStdAccessibleProxy     CreateStdAccessibleProxyA
#endif
#define MSAA_MENU_SIG 0xAA0DF00DL
typedef struct tagMSAAMENUINFO
{
	DWORD dwMSAASignature;
	DWORD cchWText;
	LPWSTR pszWText;
} MSAAMENUINFO, *LPMSAAMENUINFO;
DEFINE_GUID(PROPID_ACC_NAME, 0x608d3df8, 0x8128, 0x4aa7, 0xa4, 0x28, 0xf5, 0x5e, 0x49, 0x26, 0x72, 0x91);
DEFINE_GUID(PROPID_ACC_VALUE, 0x123fe443, 0x211a, 0x4615, 0x95, 0x27, 0xc4, 0x5a, 0x7e, 0x93, 0x71, 0x7a);
DEFINE_GUID(PROPID_ACC_DESCRIPTION, 0x4d48dfe4, 0xbd3f, 0x491f, 0xa6, 0x48, 0x49, 0x2d, 0x6f, 0x20, 0xc5, 0x88);
DEFINE_GUID(PROPID_ACC_ROLE, 0xcb905ff2, 0x7bd1, 0x4c05, 0xb3, 0xc8, 0xe6, 0xc2, 0x41, 0x36, 0x4d, 0x70);
DEFINE_GUID(PROPID_ACC_STATE, 0xa8d4d5b0, 0x0a21, 0x42d0, 0xa5, 0xc0, 0x51, 0x4e, 0x98, 0x4f, 0x45, 0x7b);
DEFINE_GUID(PROPID_ACC_HELP, 0xc831e11f, 0x44db, 0x4a99, 0x97, 0x68, 0xcb, 0x8f, 0x97, 0x8b, 0x72, 0x31);
DEFINE_GUID(PROPID_ACC_KEYBOARDSHORTCUT, 0x7d9bceee, 0x7d1e, 0x4979, 0x93, 0x82, 0x51, 0x80, 0xf4, 0x17, 0x2c, 0x34);
DEFINE_GUID(PROPID_ACC_DEFAULTACTION, 0x180c072b, 0xc27f, 0x43c7, 0x99, 0x22, 0xf6, 0x35, 0x62, 0xa4, 0x63, 0x2b);
DEFINE_GUID(PROPID_ACC_HELPTOPIC, 0x787d1379, 0x8ede, 0x440b, 0x8a, 0xec, 0x11, 0xf7, 0xbf, 0x90, 0x30, 0xb3);
DEFINE_GUID(PROPID_ACC_FOCUS, 0x6eb335df, 0x1c29, 0x4127, 0xb1, 0x2c, 0xde, 0xe9, 0xfd, 0x15, 0x7f, 0x2b);
DEFINE_GUID(PROPID_ACC_SELECTION, 0xb99d073c, 0xd731, 0x405b, 0x90, 0x61, 0xd9, 0x5e, 0x8f, 0x84, 0x29, 0x84);
DEFINE_GUID(PROPID_ACC_PARENT, 0x474c22b6, 0xffc2, 0x467a, 0xb1, 0xb5, 0xe9, 0x58, 0xb4, 0x65, 0x73, 0x30);
DEFINE_GUID(PROPID_ACC_NAV_UP, 0x016e1a2b, 0x1a4e, 0x4767, 0x86, 0x12, 0x33, 0x86, 0xf6, 0x69, 0x35, 0xec);
DEFINE_GUID(PROPID_ACC_NAV_DOWN, 0x031670ed, 0x3cdf, 0x48d2, 0x96, 0x13, 0x13, 0x8f, 0x2d, 0xd8, 0xa6, 0x68);
DEFINE_GUID(PROPID_ACC_NAV_LEFT, 0x228086cb, 0x82f1, 0x4a39, 0x87, 0x05, 0xdc, 0xdc, 0x0f, 0xff, 0x92, 0xf5);
DEFINE_GUID(PROPID_ACC_NAV_RIGHT, 0xcd211d9f, 0xe1cb, 0x4fe5, 0xa7, 0x7c, 0x92, 0x0b, 0x88, 0x4d, 0x09, 0x5b);
DEFINE_GUID(PROPID_ACC_NAV_PREV, 0x776d3891, 0xc73b, 0x4480, 0xb3, 0xf6, 0x07, 0x6a, 0x16, 0xa1, 0x5a, 0xf6);
DEFINE_GUID(PROPID_ACC_NAV_NEXT, 0x1cdc5455, 0x8cd9, 0x4c92, 0xa3, 0x71, 0x39, 0x39, 0xa2, 0xfe, 0x3e, 0xee);
DEFINE_GUID(PROPID_ACC_NAV_FIRSTCHILD, 0xcfd02558, 0x557b, 0x4c67, 0x84, 0xf9, 0x2a, 0x09, 0xfc, 0xe4, 0x07, 0x49);
DEFINE_GUID(PROPID_ACC_NAV_LASTCHILD, 0x302ecaa5, 0x48d5, 0x4f8d, 0xb6, 0x71, 0x1a, 0x8d, 0x20, 0xa7, 0x78, 0x32);
DEFINE_GUID(PROPID_ACC_ROLEMAP, 0xf79acda2, 0x140d, 0x4fe6, 0x89, 0x14, 0x20, 0x84, 0x76, 0x32, 0x82, 0x69);
DEFINE_GUID(PROPID_ACC_VALUEMAP, 0xda1c3d79, 0xfc5c, 0x420e, 0xb3, 0x99, 0x9d, 0x15, 0x33, 0x54, 0x9e, 0x75);
DEFINE_GUID(PROPID_ACC_STATEMAP, 0x43946c5e, 0x0ac0, 0x4042, 0xb5, 0x25, 0x07, 0xbb, 0xdb, 0xe1, 0x7f, 0xa7);
DEFINE_GUID(PROPID_ACC_DESCRIPTIONMAP, 0x1ff1435f, 0x8a14, 0x477b, 0xb2, 0x26, 0xa0, 0xab, 0xe2, 0x79, 0x97, 0x5d);
DEFINE_GUID(PROPID_ACC_DODEFAULTACTION, 0x1ba09523, 0x2e3b, 0x49a6, 0xa0, 0x59, 0x59, 0x68, 0x2a, 0x3c, 0x48, 0xfd);
extern RPC_IF_HANDLE __MIDL_itf_oleacc_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_oleacc_0000_0000_v0_0_s_ifspec;
#ifndef __IAccessible_INTERFACE_DEFINED__
#define __IAccessible_INTERFACE_DEFINED__
#define	DISPID_ACC_PARENT	( -5000 )
#define	DISPID_ACC_CHILDCOUNT	( -5001 )
#define	DISPID_ACC_CHILD	( -5002 )
#define	DISPID_ACC_NAME	( -5003 )
#define	DISPID_ACC_VALUE	( -5004 )
#define	DISPID_ACC_DESCRIPTION	( -5005 )
#define	DISPID_ACC_ROLE	( -5006 )
#define	DISPID_ACC_STATE	( -5007 )
#define	DISPID_ACC_HELP	( -5008 )
#define	DISPID_ACC_HELPTOPIC	( -5009 )
#define	DISPID_ACC_KEYBOARDSHORTCUT	( -5010 )
#define	DISPID_ACC_FOCUS	( -5011 )
#define	DISPID_ACC_SELECTION	( -5012 )
#define	DISPID_ACC_DEFAULTACTION	( -5013 )
#define	DISPID_ACC_SELECT	( -5014 )
#define	DISPID_ACC_LOCATION	( -5015 )
#define	DISPID_ACC_NAVIGATE	( -5016 )
#define	DISPID_ACC_HITTEST	( -5017 )
#define	DISPID_ACC_DODEFAULTACTION	( -5018 )
typedef IAccessible *LPACCESSIBLE;
#define	NAVDIR_MIN	( 0 )
#define	NAVDIR_UP	( 0x1 )
#define	NAVDIR_DOWN	( 0x2 )
#define	NAVDIR_LEFT	( 0x3 )
#define	NAVDIR_RIGHT	( 0x4 )
#define	NAVDIR_NEXT	( 0x5 )
#define	NAVDIR_PREVIOUS	( 0x6 )
#define	NAVDIR_FIRSTCHILD	( 0x7 )
#define	NAVDIR_LASTCHILD	( 0x8 )
#define	NAVDIR_MAX	( 0x9 )
#define	SELFLAG_NONE	( 0 )
#define	SELFLAG_TAKEFOCUS	( 0x1 )
#define	SELFLAG_TAKESELECTION	( 0x2 )
#define	SELFLAG_EXTENDSELECTION	( 0x4 )
#define	SELFLAG_ADDSELECTION	( 0x8 )
#define	SELFLAG_REMOVESELECTION	( 0x10 )
#define	SELFLAG_VALID	( 0x1f )
#ifndef STATE_SYSTEM_UNAVAILABLE
#define	STATE_SYSTEM_NORMAL	( 0 )
#define	STATE_SYSTEM_UNAVAILABLE	( 0x1 )
#define	STATE_SYSTEM_SELECTED	( 0x2 )
#define	STATE_SYSTEM_FOCUSED	( 0x4 )
#define	STATE_SYSTEM_PRESSED	( 0x8 )
#define	STATE_SYSTEM_CHECKED	( 0x10 )
#define	STATE_SYSTEM_MIXED	( 0x20 )
#define	STATE_SYSTEM_INDETERMINATE	( STATE_SYSTEM_MIXED )
#define	STATE_SYSTEM_READONLY	( 0x40 )
#define	STATE_SYSTEM_HOTTRACKED	( 0x80 )
#define	STATE_SYSTEM_DEFAULT	( 0x100 )
#define	STATE_SYSTEM_EXPANDED	( 0x200 )
#define	STATE_SYSTEM_COLLAPSED	( 0x400 )
#define	STATE_SYSTEM_BUSY	( 0x800 )
#define	STATE_SYSTEM_FLOATING	( 0x1000 )
#define	STATE_SYSTEM_MARQUEED	( 0x2000 )
#define	STATE_SYSTEM_ANIMATED	( 0x4000 )
#define	STATE_SYSTEM_INVISIBLE	( 0x8000 )
#define	STATE_SYSTEM_OFFSCREEN	( 0x10000 )
#define	STATE_SYSTEM_SIZEABLE	( 0x20000 )
#define	STATE_SYSTEM_MOVEABLE	( 0x40000 )
#define	STATE_SYSTEM_SELFVOICING	( 0x80000 )
#define	STATE_SYSTEM_FOCUSABLE	( 0x100000 )
#define	STATE_SYSTEM_SELECTABLE	( 0x200000 )
#define	STATE_SYSTEM_LINKED	( 0x400000 )
#define	STATE_SYSTEM_TRAVERSED	( 0x800000 )
#define	STATE_SYSTEM_MULTISELECTABLE	( 0x1000000 )
#define	STATE_SYSTEM_EXTSELECTABLE	( 0x2000000 )
#define	STATE_SYSTEM_ALERT_LOW	( 0x4000000 )
#define	STATE_SYSTEM_ALERT_MEDIUM	( 0x8000000 )
#define	STATE_SYSTEM_ALERT_HIGH	( 0x10000000 )
#define	STATE_SYSTEM_PROTECTED	( 0x20000000 )
#define	STATE_SYSTEM_VALID	( 0x7fffffff )
#endif
#ifndef STATE_SYSTEM_HASPOPUP
#define	STATE_SYSTEM_HASPOPUP	( 0x40000000 )
#endif
#define	ROLE_SYSTEM_TITLEBAR	( 0x1 )
#define	ROLE_SYSTEM_MENUBAR	( 0x2 )
#define	ROLE_SYSTEM_SCROLLBAR	( 0x3 )
#define	ROLE_SYSTEM_GRIP	( 0x4 )
#define	ROLE_SYSTEM_SOUND	( 0x5 )
#define	ROLE_SYSTEM_CURSOR	( 0x6 )
#define	ROLE_SYSTEM_CARET	( 0x7 )
#define	ROLE_SYSTEM_ALERT	( 0x8 )
#define	ROLE_SYSTEM_WINDOW	( 0x9 )
#define	ROLE_SYSTEM_CLIENT	( 0xa )
#define	ROLE_SYSTEM_MENUPOPUP	( 0xb )
#define	ROLE_SYSTEM_MENUITEM	( 0xc )
#define	ROLE_SYSTEM_TOOLTIP	( 0xd )
#define	ROLE_SYSTEM_APPLICATION	( 0xe )
#define	ROLE_SYSTEM_DOCUMENT	( 0xf )
#define	ROLE_SYSTEM_PANE	( 0x10 )
#define	ROLE_SYSTEM_CHART	( 0x11 )
#define	ROLE_SYSTEM_DIALOG	( 0x12 )
#define	ROLE_SYSTEM_BORDER	( 0x13 )
#define	ROLE_SYSTEM_GROUPING	( 0x14 )
#define	ROLE_SYSTEM_SEPARATOR	( 0x15 )
#define	ROLE_SYSTEM_TOOLBAR	( 0x16 )
#define	ROLE_SYSTEM_STATUSBAR	( 0x17 )
#define	ROLE_SYSTEM_TABLE	( 0x18 )
#define	ROLE_SYSTEM_COLUMNHEADER	( 0x19 )
#define	ROLE_SYSTEM_ROWHEADER	( 0x1a )
#define	ROLE_SYSTEM_COLUMN	( 0x1b )
#define	ROLE_SYSTEM_ROW	( 0x1c )
#define	ROLE_SYSTEM_CELL	( 0x1d )
#define	ROLE_SYSTEM_LINK	( 0x1e )
#define	ROLE_SYSTEM_HELPBALLOON	( 0x1f )
#define	ROLE_SYSTEM_CHARACTER	( 0x20 )
#define	ROLE_SYSTEM_LIST	( 0x21 )
#define	ROLE_SYSTEM_LISTITEM	( 0x22 )
#define	ROLE_SYSTEM_OUTLINE	( 0x23 )
#define	ROLE_SYSTEM_OUTLINEITEM	( 0x24 )
#define	ROLE_SYSTEM_PAGETAB	( 0x25 )
#define	ROLE_SYSTEM_PROPERTYPAGE	( 0x26 )
#define	ROLE_SYSTEM_INDICATOR	( 0x27 )
#define	ROLE_SYSTEM_GRAPHIC	( 0x28 )
#define	ROLE_SYSTEM_STATICTEXT	( 0x29 )
#define	ROLE_SYSTEM_TEXT	( 0x2a )
#define	ROLE_SYSTEM_PUSHBUTTON	( 0x2b )
#define	ROLE_SYSTEM_CHECKBUTTON	( 0x2c )
#define	ROLE_SYSTEM_RADIOBUTTON	( 0x2d )
#define	ROLE_SYSTEM_COMBOBOX	( 0x2e )
#define	ROLE_SYSTEM_DROPLIST	( 0x2f )
#define	ROLE_SYSTEM_PROGRESSBAR	( 0x30 )
#define	ROLE_SYSTEM_DIAL	( 0x31 )
#define	ROLE_SYSTEM_HOTKEYFIELD	( 0x32 )
#define	ROLE_SYSTEM_SLIDER	( 0x33 )
#define	ROLE_SYSTEM_SPINBUTTON	( 0x34 )
#define	ROLE_SYSTEM_DIAGRAM	( 0x35 )
#define	ROLE_SYSTEM_ANIMATION	( 0x36 )
#define	ROLE_SYSTEM_EQUATION	( 0x37 )
#define	ROLE_SYSTEM_BUTTONDROPDOWN	( 0x38 )
#define	ROLE_SYSTEM_BUTTONMENU	( 0x39 )
#define	ROLE_SYSTEM_BUTTONDROPDOWNGRID	( 0x3a )
#define	ROLE_SYSTEM_WHITESPACE	( 0x3b )
#define	ROLE_SYSTEM_PAGETABLIST	( 0x3c )
#define	ROLE_SYSTEM_CLOCK	( 0x3d )
#define	ROLE_SYSTEM_SPLITBUTTON	( 0x3e )
#define	ROLE_SYSTEM_IPADDRESS	( 0x3f )
#define	ROLE_SYSTEM_OUTLINEBUTTON	( 0x40 )
extern const IID IID_IAccessible;
typedef struct IAccessibleVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAccessible * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAccessible * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAccessible * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAccessible * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAccessible * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAccessible * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAccessible * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_accParent) (IAccessible * This, IDispatch ** ppdispParent);
	HRESULT(STDMETHODCALLTYPE * get_accChildCount) (IAccessible * This, long *pcountChildren);
	HRESULT(STDMETHODCALLTYPE * get_accChild) (IAccessible * This, VARIANT varChild, IDispatch ** ppdispChild);
	HRESULT(STDMETHODCALLTYPE * get_accName) (IAccessible * This, VARIANT varChild, BSTR * pszName);
	HRESULT(STDMETHODCALLTYPE * get_accValue) (IAccessible * This, VARIANT varChild, BSTR * pszValue);
	HRESULT(STDMETHODCALLTYPE * get_accDescription) (IAccessible * This, VARIANT varChild, BSTR * pszDescription);
	HRESULT(STDMETHODCALLTYPE * get_accRole) (IAccessible * This, VARIANT varChild, VARIANT * pvarRole);
	HRESULT(STDMETHODCALLTYPE * get_accState) (IAccessible * This, VARIANT varChild, VARIANT * pvarState);
	HRESULT(STDMETHODCALLTYPE * get_accHelp) (IAccessible * This, VARIANT varChild, BSTR * pszHelp);
	HRESULT(STDMETHODCALLTYPE * get_accHelpTopic) (IAccessible * This, BSTR * pszHelpFile, VARIANT varChild, long *pidTopic);
	HRESULT(STDMETHODCALLTYPE * get_accKeyboardShortcut) (IAccessible * This, VARIANT varChild, BSTR * pszKeyboardShortcut);
	HRESULT(STDMETHODCALLTYPE * get_accFocus) (IAccessible * This, VARIANT * pvarChild);
	HRESULT(STDMETHODCALLTYPE * get_accSelection) (IAccessible * This, VARIANT * pvarChildren);
	HRESULT(STDMETHODCALLTYPE * get_accDefaultAction) (IAccessible * This, VARIANT varChild, BSTR * pszDefaultAction);
	HRESULT(STDMETHODCALLTYPE * accSelect) (IAccessible * This, long flagsSelect, VARIANT varChild);
	HRESULT(STDMETHODCALLTYPE * accLocation) (IAccessible * This, long *pxLeft, long *pyTop, long *pcxWidth, long *pcyHeight, VARIANT varChild);
	HRESULT(STDMETHODCALLTYPE * accNavigate) (IAccessible * This, long navDir, VARIANT varStart, VARIANT * pvarEndUpAt);
	HRESULT(STDMETHODCALLTYPE * accHitTest) (IAccessible * This, long xLeft, long yTop, VARIANT * pvarChild);
	HRESULT(STDMETHODCALLTYPE * accDoDefaultAction) (IAccessible * This, VARIANT varChild);
	HRESULT(STDMETHODCALLTYPE * put_accName) (IAccessible * This, VARIANT varChild, BSTR szName);
	HRESULT(STDMETHODCALLTYPE * put_accValue) (IAccessible * This, VARIANT varChild, BSTR szValue);
	END_INTERFACE
}  IAccessibleVtbl;
interface IAccessible
{
	CONST_VTBL struct IAccessibleVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAccessible_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAccessible_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IAccessible_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IAccessible_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAccessible_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAccessible_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAccessible_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAccessible_get_accParent(This,ppdispParent) ( (This)->lpVtbl -> get_accParent(This,ppdispParent) )
#define IAccessible_get_accChildCount(This,pcountChildren) ( (This)->lpVtbl -> get_accChildCount(This,pcountChildren) )
#define IAccessible_get_accChild(This,varChild,ppdispChild) ( (This)->lpVtbl -> get_accChild(This,varChild,ppdispChild) )
#define IAccessible_get_accName(This,varChild,pszName) ( (This)->lpVtbl -> get_accName(This,varChild,pszName) )
#define IAccessible_get_accValue(This,varChild,pszValue) ( (This)->lpVtbl -> get_accValue(This,varChild,pszValue) )
#define IAccessible_get_accDescription(This,varChild,pszDescription) ( (This)->lpVtbl -> get_accDescription(This,varChild,pszDescription) )
#define IAccessible_get_accRole(This,varChild,pvarRole) ( (This)->lpVtbl -> get_accRole(This,varChild,pvarRole) )
#define IAccessible_get_accState(This,varChild,pvarState) ( (This)->lpVtbl -> get_accState(This,varChild,pvarState) )
#define IAccessible_get_accHelp(This,varChild,pszHelp) ( (This)->lpVtbl -> get_accHelp(This,varChild,pszHelp) )
#define IAccessible_get_accHelpTopic(This,pszHelpFile,varChild,pidTopic) ( (This)->lpVtbl -> get_accHelpTopic(This,pszHelpFile,varChild,pidTopic) )
#define IAccessible_get_accKeyboardShortcut(This,varChild,pszKeyboardShortcut) ( (This)->lpVtbl -> get_accKeyboardShortcut(This,varChild,pszKeyboardShortcut) )
#define IAccessible_get_accFocus(This,pvarChild) ( (This)->lpVtbl -> get_accFocus(This,pvarChild) )
#define IAccessible_get_accSelection(This,pvarChildren) ( (This)->lpVtbl -> get_accSelection(This,pvarChildren) )
#define IAccessible_get_accDefaultAction(This,varChild,pszDefaultAction) ( (This)->lpVtbl -> get_accDefaultAction(This,varChild,pszDefaultAction) )
#define IAccessible_accSelect(This,flagsSelect,varChild) ( (This)->lpVtbl -> accSelect(This,flagsSelect,varChild) )
#define IAccessible_accLocation(This,pxLeft,pyTop,pcxWidth,pcyHeight,varChild) ( (This)->lpVtbl -> accLocation(This,pxLeft,pyTop,pcxWidth,pcyHeight,varChild) )
#define IAccessible_accNavigate(This,navDir,varStart,pvarEndUpAt) ( (This)->lpVtbl -> accNavigate(This,navDir,varStart,pvarEndUpAt) )
#define IAccessible_accHitTest(This,xLeft,yTop,pvarChild) ( (This)->lpVtbl -> accHitTest(This,xLeft,yTop,pvarChild) )
#define IAccessible_accDoDefaultAction(This,varChild) ( (This)->lpVtbl -> accDoDefaultAction(This,varChild) )
#define IAccessible_put_accName(This,varChild,szName) ( (This)->lpVtbl -> put_accName(This,varChild,szName) )
#define IAccessible_put_accValue(This,varChild,szValue) ( (This)->lpVtbl -> put_accValue(This,varChild,szValue) )
#endif
#endif
#ifndef __IAccessibleHandler_INTERFACE_DEFINED__
#define __IAccessibleHandler_INTERFACE_DEFINED__
typedef IAccessibleHandler *LPACCESSIBLEHANDLER;
extern const IID IID_IAccessibleHandler;
typedef struct IAccessibleHandlerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAccessibleHandler * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAccessibleHandler * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAccessibleHandler * This);
	HRESULT(STDMETHODCALLTYPE * AccessibleObjectFromID) (IAccessibleHandler * This, long hwnd, long lObjectID, LPACCESSIBLE * pIAccessible);
	END_INTERFACE
}  IAccessibleHandlerVtbl;
interface IAccessibleHandler
{
	CONST_VTBL struct IAccessibleHandlerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAccessibleHandler_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAccessibleHandler_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IAccessibleHandler_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IAccessibleHandler_AccessibleObjectFromID(This,hwnd,lObjectID,pIAccessible) ( (This)->lpVtbl -> AccessibleObjectFromID(This,hwnd,lObjectID,pIAccessible) )
#endif
#endif
typedef enum AnnoScope
{
	ANNO_THIS = 0,
	ANNO_CONTAINER = 1
} AnnoScope;
typedef GUID MSAAPROPID;
extern RPC_IF_HANDLE __MIDL_itf_oleacc_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_oleacc_0000_0002_v0_0_s_ifspec;
#ifndef __IAccIdentity_INTERFACE_DEFINED__
#define __IAccIdentity_INTERFACE_DEFINED__
extern const IID IID_IAccIdentity;
typedef struct IAccIdentityVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAccIdentity * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAccIdentity * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAccIdentity * This);
	HRESULT(STDMETHODCALLTYPE * GetIdentityString) (IAccIdentity * This, DWORD dwIDChild, BYTE ** ppIDString, DWORD * pdwIDStringLen);
	END_INTERFACE
}  IAccIdentityVtbl;
interface IAccIdentity
{
	CONST_VTBL struct IAccIdentityVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAccIdentity_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAccIdentity_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IAccIdentity_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IAccIdentity_GetIdentityString(This,dwIDChild,ppIDString,pdwIDStringLen) ( (This)->lpVtbl -> GetIdentityString(This,dwIDChild,ppIDString,pdwIDStringLen) )
#endif
#endif
#ifndef __IAccPropServer_INTERFACE_DEFINED__
#define __IAccPropServer_INTERFACE_DEFINED__
extern const IID IID_IAccPropServer;
typedef struct IAccPropServerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAccPropServer * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAccPropServer * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAccPropServer * This);
	HRESULT(STDMETHODCALLTYPE * GetPropValue) (IAccPropServer * This, const BYTE * pIDString, DWORD dwIDStringLen, MSAAPROPID idProp, VARIANT * pvarValue, BOOL * pfHasProp);
	END_INTERFACE
}  IAccPropServerVtbl;
interface IAccPropServer
{
	CONST_VTBL struct IAccPropServerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAccPropServer_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAccPropServer_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IAccPropServer_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IAccPropServer_GetPropValue(This,pIDString,dwIDStringLen,idProp,pvarValue,pfHasProp) ( (This)->lpVtbl -> GetPropValue(This,pIDString,dwIDStringLen,idProp,pvarValue,pfHasProp) )
#endif
#endif
#ifndef __IAccPropServices_INTERFACE_DEFINED__
#define __IAccPropServices_INTERFACE_DEFINED__
extern const IID IID_IAccPropServices;
typedef struct IAccPropServicesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAccPropServices * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAccPropServices * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAccPropServices * This);
	HRESULT(STDMETHODCALLTYPE * SetPropValue) (IAccPropServices * This, const BYTE * pIDString, DWORD dwIDStringLen, MSAAPROPID idProp, VARIANT var);
	HRESULT(STDMETHODCALLTYPE * SetPropServer) (IAccPropServices * This, const BYTE * pIDString, DWORD dwIDStringLen, const MSAAPROPID * paProps, int cProps, IAccPropServer * pServer, AnnoScope annoScope);
	HRESULT(STDMETHODCALLTYPE * ClearProps) (IAccPropServices * This, const BYTE * pIDString, DWORD dwIDStringLen, const MSAAPROPID * paProps, int cProps);
	HRESULT(STDMETHODCALLTYPE * SetHwndProp) (IAccPropServices * This, HWND hwnd, DWORD idObject, DWORD idChild, MSAAPROPID idProp, VARIANT var);
	HRESULT(STDMETHODCALLTYPE * SetHwndPropStr) (IAccPropServices * This, HWND hwnd, DWORD idObject, DWORD idChild, MSAAPROPID idProp, LPCWSTR str);
	HRESULT(STDMETHODCALLTYPE * SetHwndPropServer) (IAccPropServices * This, HWND hwnd, DWORD idObject, DWORD idChild, const MSAAPROPID * paProps, int cProps, IAccPropServer * pServer, AnnoScope annoScope);
	HRESULT(STDMETHODCALLTYPE * ClearHwndProps) (IAccPropServices * This, HWND hwnd, DWORD idObject, DWORD idChild, const MSAAPROPID * paProps, int cProps);
	HRESULT(STDMETHODCALLTYPE * ComposeHwndIdentityString) (IAccPropServices * This, HWND hwnd, DWORD idObject, DWORD idChild, BYTE ** ppIDString, DWORD * pdwIDStringLen);
	HRESULT(STDMETHODCALLTYPE * DecomposeHwndIdentityString) (IAccPropServices * This, const BYTE * pIDString, DWORD dwIDStringLen, HWND * phwnd, DWORD * pidObject, DWORD * pidChild);
	HRESULT(STDMETHODCALLTYPE * SetHmenuProp) (IAccPropServices * This, HMENU hmenu, DWORD idChild, MSAAPROPID idProp, VARIANT var);
	HRESULT(STDMETHODCALLTYPE * SetHmenuPropStr) (IAccPropServices * This, HMENU hmenu, DWORD idChild, MSAAPROPID idProp, LPCWSTR str);
	HRESULT(STDMETHODCALLTYPE * SetHmenuPropServer) (IAccPropServices * This, HMENU hmenu, DWORD idChild, const MSAAPROPID * paProps, int cProps, IAccPropServer * pServer, AnnoScope annoScope);
	HRESULT(STDMETHODCALLTYPE * ClearHmenuProps) (IAccPropServices * This, HMENU hmenu, DWORD idChild, const MSAAPROPID * paProps, int cProps);
	HRESULT(STDMETHODCALLTYPE * ComposeHmenuIdentityString) (IAccPropServices * This, HMENU hmenu, DWORD idChild, BYTE ** ppIDString, DWORD * pdwIDStringLen);
	HRESULT(STDMETHODCALLTYPE * DecomposeHmenuIdentityString) (IAccPropServices * This, const BYTE * pIDString, DWORD dwIDStringLen, HMENU * phmenu, DWORD * pidChild);
	END_INTERFACE
}  IAccPropServicesVtbl;
interface IAccPropServices
{
	CONST_VTBL struct IAccPropServicesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAccPropServices_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAccPropServices_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IAccPropServices_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IAccPropServices_SetPropValue(This,pIDString,dwIDStringLen,idProp,var) ( (This)->lpVtbl -> SetPropValue(This,pIDString,dwIDStringLen,idProp,var) )
#define IAccPropServices_SetPropServer(This,pIDString,dwIDStringLen,paProps,cProps,pServer,annoScope) ( (This)->lpVtbl -> SetPropServer(This,pIDString,dwIDStringLen,paProps,cProps,pServer,annoScope) )
#define IAccPropServices_ClearProps(This,pIDString,dwIDStringLen,paProps,cProps) ( (This)->lpVtbl -> ClearProps(This,pIDString,dwIDStringLen,paProps,cProps) )
#define IAccPropServices_SetHwndProp(This,hwnd,idObject,idChild,idProp,var) ( (This)->lpVtbl -> SetHwndProp(This,hwnd,idObject,idChild,idProp,var) )
#define IAccPropServices_SetHwndPropStr(This,hwnd,idObject,idChild,idProp,str) ( (This)->lpVtbl -> SetHwndPropStr(This,hwnd,idObject,idChild,idProp,str) )
#define IAccPropServices_SetHwndPropServer(This,hwnd,idObject,idChild,paProps,cProps,pServer,annoScope) ( (This)->lpVtbl -> SetHwndPropServer(This,hwnd,idObject,idChild,paProps,cProps,pServer,annoScope) )
#define IAccPropServices_ClearHwndProps(This,hwnd,idObject,idChild,paProps,cProps) ( (This)->lpVtbl -> ClearHwndProps(This,hwnd,idObject,idChild,paProps,cProps) )
#define IAccPropServices_ComposeHwndIdentityString(This,hwnd,idObject,idChild,ppIDString,pdwIDStringLen) ( (This)->lpVtbl -> ComposeHwndIdentityString(This,hwnd,idObject,idChild,ppIDString,pdwIDStringLen) )
#define IAccPropServices_DecomposeHwndIdentityString(This,pIDString,dwIDStringLen,phwnd,pidObject,pidChild) ( (This)->lpVtbl -> DecomposeHwndIdentityString(This,pIDString,dwIDStringLen,phwnd,pidObject,pidChild) )
#define IAccPropServices_SetHmenuProp(This,hmenu,idChild,idProp,var) ( (This)->lpVtbl -> SetHmenuProp(This,hmenu,idChild,idProp,var) )
#define IAccPropServices_SetHmenuPropStr(This,hmenu,idChild,idProp,str) ( (This)->lpVtbl -> SetHmenuPropStr(This,hmenu,idChild,idProp,str) )
#define IAccPropServices_SetHmenuPropServer(This,hmenu,idChild,paProps,cProps,pServer,annoScope) ( (This)->lpVtbl -> SetHmenuPropServer(This,hmenu,idChild,paProps,cProps,pServer,annoScope) )
#define IAccPropServices_ClearHmenuProps(This,hmenu,idChild,paProps,cProps) ( (This)->lpVtbl -> ClearHmenuProps(This,hmenu,idChild,paProps,cProps) )
#define IAccPropServices_ComposeHmenuIdentityString(This,hmenu,idChild,ppIDString,pdwIDStringLen) ( (This)->lpVtbl -> ComposeHmenuIdentityString(This,hmenu,idChild,ppIDString,pdwIDStringLen) )
#define IAccPropServices_DecomposeHmenuIdentityString(This,pIDString,dwIDStringLen,phmenu,pidChild) ( (This)->lpVtbl -> DecomposeHmenuIdentityString(This,pIDString,dwIDStringLen,phmenu,pidChild) )
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_oleacc_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_oleacc_0000_0005_v0_0_s_ifspec;
#ifndef __Accessibility_LIBRARY_DEFINED__
#define __Accessibility_LIBRARY_DEFINED__
extern const IID LIBID_Accessibility;
extern const CLSID CLSID_CAccPropServices;
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER HMENU_UserSize(unsigned long *, unsigned long, HMENU *);
unsigned char *__RPC_USER HMENU_UserMarshal(unsigned long *, unsigned char *, HMENU *);
unsigned char *__RPC_USER HMENU_UserUnmarshal(unsigned long *, unsigned char *, HMENU *);
void __RPC_USER HMENU_UserFree(unsigned long *, HMENU *);
unsigned long __RPC_USER HWND_UserSize(unsigned long *, unsigned long, HWND *);
unsigned char *__RPC_USER HWND_UserMarshal(unsigned long *, unsigned char *, HWND *);
unsigned char *__RPC_USER HWND_UserUnmarshal(unsigned long *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree(unsigned long *, HWND *);
unsigned long __RPC_USER VARIANT_UserSize(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree(unsigned long *, VARIANT *);
#endif
