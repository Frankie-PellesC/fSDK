/*+@@file@@----------------------------------------------------------------*//*!
 \file		iextag.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul 16 20:49:46 2016
 \date		Modified on Sat Jul 16 20:49:46 2016
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
#ifndef __iextag_h__
#define __iextag_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IPeerFactory_FWD_DEFINED__
#define __IPeerFactory_FWD_DEFINED__
typedef interface IPeerFactory IPeerFactory;
#endif
#ifndef __IHomePage_FWD_DEFINED__
#define __IHomePage_FWD_DEFINED__
typedef interface IHomePage IHomePage;
#endif
#ifndef __IClientCaps_FWD_DEFINED__
#define __IClientCaps_FWD_DEFINED__
typedef interface IClientCaps IClientCaps;
#endif
#ifndef __IIntelliForms_FWD_DEFINED__
#define __IIntelliForms_FWD_DEFINED__
typedef interface IIntelliForms IIntelliForms;
#endif
#ifndef __Iwfolders_FWD_DEFINED__
#define __Iwfolders_FWD_DEFINED__
typedef interface Iwfolders Iwfolders;
#endif
#ifndef __IAnchorClick_FWD_DEFINED__
#define __IAnchorClick_FWD_DEFINED__
typedef interface IAnchorClick IAnchorClick;
#endif
#ifndef __HTMLPersistEvents_FWD_DEFINED__
#define __HTMLPersistEvents_FWD_DEFINED__
typedef interface HTMLPersistEvents HTMLPersistEvents;
#endif
#ifndef __IHTMLUserDataOM_FWD_DEFINED__
#define __IHTMLUserDataOM_FWD_DEFINED__
typedef interface IHTMLUserDataOM IHTMLUserDataOM;
#endif
#ifndef __IHTMLPersistDataOM_FWD_DEFINED__
#define __IHTMLPersistDataOM_FWD_DEFINED__
typedef interface IHTMLPersistDataOM IHTMLPersistDataOM;
#endif
#ifndef __IHTMLPersistData_FWD_DEFINED__
#define __IHTMLPersistData_FWD_DEFINED__
typedef interface IHTMLPersistData IHTMLPersistData;
#endif
#ifndef __IDownloadBehavior_FWD_DEFINED__
#define __IDownloadBehavior_FWD_DEFINED__
typedef interface IDownloadBehavior IDownloadBehavior;
#endif
#ifndef __LayoutRectEvents_FWD_DEFINED__
#define __LayoutRectEvents_FWD_DEFINED__
typedef interface LayoutRectEvents LayoutRectEvents;
#endif
#ifndef __ILayoutRect_FWD_DEFINED__
#define __ILayoutRect_FWD_DEFINED__
typedef interface ILayoutRect ILayoutRect;
#endif
#ifndef __IDeviceRect_FWD_DEFINED__
#define __IDeviceRect_FWD_DEFINED__
typedef interface IDeviceRect IDeviceRect;
#endif
#ifndef __ITemplatePrinter_FWD_DEFINED__
#define __ITemplatePrinter_FWD_DEFINED__
typedef interface ITemplatePrinter ITemplatePrinter;
#endif
#ifndef __ITemplatePrinter2_FWD_DEFINED__
#define __ITemplatePrinter2_FWD_DEFINED__
typedef interface ITemplatePrinter2 ITemplatePrinter2;
#endif
#ifndef __ITemplatePrinter3_FWD_DEFINED__
#define __ITemplatePrinter3_FWD_DEFINED__
typedef interface ITemplatePrinter3 ITemplatePrinter3;
#endif
#ifndef __IHeaderFooter_FWD_DEFINED__
#define __IHeaderFooter_FWD_DEFINED__
typedef interface IHeaderFooter IHeaderFooter;
#endif
#ifndef __IHeaderFooter2_FWD_DEFINED__
#define __IHeaderFooter2_FWD_DEFINED__
typedef interface IHeaderFooter2 IHeaderFooter2;
#endif
#ifndef __PeerFactory_FWD_DEFINED__
#define __PeerFactory_FWD_DEFINED__
typedef struct PeerFactory PeerFactory;
#endif
#ifndef __ClientCaps_FWD_DEFINED__
#define __ClientCaps_FWD_DEFINED__
typedef struct ClientCaps ClientCaps;
#endif
#ifndef __IntelliForms_FWD_DEFINED__
#define __IntelliForms_FWD_DEFINED__
typedef struct IntelliForms IntelliForms;
#endif
#ifndef __HomePage_FWD_DEFINED__
#define __HomePage_FWD_DEFINED__
typedef struct HomePage HomePage;
#endif
#ifndef __CPersistUserData_FWD_DEFINED__
#define __CPersistUserData_FWD_DEFINED__
typedef struct CPersistUserData CPersistUserData;
#endif
#ifndef __CPersistDataPeer_FWD_DEFINED__
#define __CPersistDataPeer_FWD_DEFINED__
typedef struct CPersistDataPeer CPersistDataPeer;
#endif
#ifndef __CPersistShortcut_FWD_DEFINED__
#define __CPersistShortcut_FWD_DEFINED__
typedef struct CPersistShortcut CPersistShortcut;
#endif
#ifndef __CPersistHistory_FWD_DEFINED__
#define __CPersistHistory_FWD_DEFINED__
typedef struct CPersistHistory CPersistHistory;
#endif
#ifndef __CPersistSnapshot_FWD_DEFINED__
#define __CPersistSnapshot_FWD_DEFINED__
typedef struct CPersistSnapshot CPersistSnapshot;
#endif
#ifndef __CDownloadBehavior_FWD_DEFINED__
#define __CDownloadBehavior_FWD_DEFINED__
typedef struct CDownloadBehavior CDownloadBehavior;
#endif
#ifndef __wfolders_FWD_DEFINED__
#define __wfolders_FWD_DEFINED__
typedef struct wfolders wfolders;
#endif
#ifndef __AnchorClick_FWD_DEFINED__
#define __AnchorClick_FWD_DEFINED__
typedef struct AnchorClick AnchorClick;
#endif
#ifndef __CLayoutRect_FWD_DEFINED__
#define __CLayoutRect_FWD_DEFINED__
typedef struct CLayoutRect CLayoutRect;
#endif
#ifndef __CDeviceRect_FWD_DEFINED__
#define __CDeviceRect_FWD_DEFINED__
typedef struct CDeviceRect CDeviceRect;
#endif
#ifndef __CTemplatePrinter_FWD_DEFINED__
#define __CTemplatePrinter_FWD_DEFINED__
typedef struct CTemplatePrinter CTemplatePrinter;
#endif
#ifndef __CHeaderFooter_FWD_DEFINED__
#define __CHeaderFooter_FWD_DEFINED__
typedef struct CHeaderFooter CHeaderFooter;
#endif
#include "oaidl.h"
#include "ocidl.h"
extern RPC_IF_HANDLE __MIDL_itf_iextag_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_iextag_0000_0000_v0_0_s_ifspec;
#ifndef __IPeerFactory_INTERFACE_DEFINED__
#define __IPeerFactory_INTERFACE_DEFINED__
extern const IID IID_IPeerFactory;
typedef struct IPeerFactoryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPeerFactory * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPeerFactory * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPeerFactory * This);
	END_INTERFACE
}  IPeerFactoryVtbl;
interface IPeerFactory
{
	CONST_VTBL struct IPeerFactoryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPeerFactory_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPeerFactory_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IPeerFactory_Release(This)( (This)->lpVtbl -> Release(This) )
#endif
#endif
#ifndef __IHomePage_INTERFACE_DEFINED__
#define __IHomePage_INTERFACE_DEFINED__
extern const IID IID_IHomePage;
typedef struct IHomePageVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IHomePage * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IHomePage * This);
	ULONG(STDMETHODCALLTYPE * Release) (IHomePage * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IHomePage * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IHomePage * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IHomePage * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IHomePage * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * navigateHomePage) (IHomePage * This);
	HRESULT(STDMETHODCALLTYPE * setHomePage) (IHomePage * This, BSTR bstrURL);
	HRESULT(STDMETHODCALLTYPE * isHomePage) (IHomePage * This, BSTR bstrURL, VARIANT_BOOL * p);
	END_INTERFACE
}  IHomePageVtbl;
interface IHomePage
{
	CONST_VTBL struct IHomePageVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IHomePage_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IHomePage_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IHomePage_Release(This)( (This)->lpVtbl -> Release(This) )
#define IHomePage_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IHomePage_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IHomePage_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IHomePage_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IHomePage_navigateHomePage(This)( (This)->lpVtbl -> navigateHomePage(This) )
#define IHomePage_setHomePage(This,bstrURL)( (This)->lpVtbl -> setHomePage(This,bstrURL) )
#define IHomePage_isHomePage(This,bstrURL,p)( (This)->lpVtbl -> isHomePage(This,bstrURL,p) )
#endif
#endif
#ifndef __IClientCaps_INTERFACE_DEFINED__
#define __IClientCaps_INTERFACE_DEFINED__
extern const IID IID_IClientCaps;
typedef struct IClientCapsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IClientCaps * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IClientCaps * This);
	ULONG(STDMETHODCALLTYPE * Release) (IClientCaps * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IClientCaps * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IClientCaps * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IClientCaps * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IClientCaps * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_javaEnabled) (IClientCaps * This, VARIANT_BOOL * pVal);
	HRESULT(STDMETHODCALLTYPE * get_cookieEnabled) (IClientCaps * This, VARIANT_BOOL * pVal);
	HRESULT(STDMETHODCALLTYPE * get_cpuClass) (IClientCaps * This, BSTR * p);
	HRESULT(STDMETHODCALLTYPE * get_systemLanguage) (IClientCaps * This, BSTR * p);
	HRESULT(STDMETHODCALLTYPE * get_userLanguage) (IClientCaps * This, BSTR * p);
	HRESULT(STDMETHODCALLTYPE * get_platform) (IClientCaps * This, BSTR * p);
	HRESULT(STDMETHODCALLTYPE * get_connectionSpeed) (IClientCaps * This, long *p);
	HRESULT(STDMETHODCALLTYPE * get_onLine) (IClientCaps * This, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * get_colorDepth) (IClientCaps * This, long *p);
	HRESULT(STDMETHODCALLTYPE * get_bufferDepth) (IClientCaps * This, long *p);
	HRESULT(STDMETHODCALLTYPE * get_width) (IClientCaps * This, long *p);
	HRESULT(STDMETHODCALLTYPE * get_height) (IClientCaps * This, long *p);
	HRESULT(STDMETHODCALLTYPE * get_availHeight) (IClientCaps * This, long *p);
	HRESULT(STDMETHODCALLTYPE * get_availWidth) (IClientCaps * This, long *p);
	HRESULT(STDMETHODCALLTYPE * get_connectionType) (IClientCaps * This, BSTR * p);
	HRESULT(STDMETHODCALLTYPE * isComponentInstalled) (IClientCaps * This, BSTR bstrName, BSTR bstrType, BSTR bStrVer, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * getComponentVersion) (IClientCaps * This, BSTR bstrName, BSTR bstrType, BSTR * pbstrVer);
	HRESULT(STDMETHODCALLTYPE * compareVersions) (IClientCaps * This, BSTR bstrVer1, BSTR bstrVer2, long *p);
	HRESULT(STDMETHODCALLTYPE * addComponentRequest) (IClientCaps * This, BSTR bstrName, BSTR bstrType, BSTR bstrVer);
	HRESULT(STDMETHODCALLTYPE * doComponentRequest) (IClientCaps * This, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * clearComponentRequest) (IClientCaps * This);
	END_INTERFACE
}  IClientCapsVtbl;
interface IClientCaps
{
	CONST_VTBL struct IClientCapsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IClientCaps_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IClientCaps_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IClientCaps_Release(This)( (This)->lpVtbl -> Release(This) )
#define IClientCaps_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IClientCaps_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IClientCaps_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IClientCaps_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IClientCaps_get_javaEnabled(This,pVal)( (This)->lpVtbl -> get_javaEnabled(This,pVal) )
#define IClientCaps_get_cookieEnabled(This,pVal)( (This)->lpVtbl -> get_cookieEnabled(This,pVal) )
#define IClientCaps_get_cpuClass(This,p)( (This)->lpVtbl -> get_cpuClass(This,p) )
#define IClientCaps_get_systemLanguage(This,p)( (This)->lpVtbl -> get_systemLanguage(This,p) )
#define IClientCaps_get_userLanguage(This,p)( (This)->lpVtbl -> get_userLanguage(This,p) )
#define IClientCaps_get_platform(This,p)( (This)->lpVtbl -> get_platform(This,p) )
#define IClientCaps_get_connectionSpeed(This,p)( (This)->lpVtbl -> get_connectionSpeed(This,p) )
#define IClientCaps_get_onLine(This,p)( (This)->lpVtbl -> get_onLine(This,p) )
#define IClientCaps_get_colorDepth(This,p)( (This)->lpVtbl -> get_colorDepth(This,p) )
#define IClientCaps_get_bufferDepth(This,p)( (This)->lpVtbl -> get_bufferDepth(This,p) )
#define IClientCaps_get_width(This,p)( (This)->lpVtbl -> get_width(This,p) )
#define IClientCaps_get_height(This,p)( (This)->lpVtbl -> get_height(This,p) )
#define IClientCaps_get_availHeight(This,p)( (This)->lpVtbl -> get_availHeight(This,p) )
#define IClientCaps_get_availWidth(This,p)( (This)->lpVtbl -> get_availWidth(This,p) )
#define IClientCaps_get_connectionType(This,p)( (This)->lpVtbl -> get_connectionType(This,p) )
#define IClientCaps_isComponentInstalled(This,bstrName,bstrType,bStrVer,p)( (This)->lpVtbl -> isComponentInstalled(This,bstrName,bstrType,bStrVer,p) )
#define IClientCaps_getComponentVersion(This,bstrName,bstrType,pbstrVer)( (This)->lpVtbl -> getComponentVersion(This,bstrName,bstrType,pbstrVer) )
#define IClientCaps_compareVersions(This,bstrVer1,bstrVer2,p)( (This)->lpVtbl -> compareVersions(This,bstrVer1,bstrVer2,p) )
#define IClientCaps_addComponentRequest(This,bstrName,bstrType,bstrVer)( (This)->lpVtbl -> addComponentRequest(This,bstrName,bstrType,bstrVer) )
#define IClientCaps_doComponentRequest(This,p)( (This)->lpVtbl -> doComponentRequest(This,p) )
#define IClientCaps_clearComponentRequest(This)( (This)->lpVtbl -> clearComponentRequest(This) )
#endif
#endif
#ifndef __IIntelliForms_INTERFACE_DEFINED__
#define __IIntelliForms_INTERFACE_DEFINED__
extern const IID IID_IIntelliForms;
typedef struct IIntelliFormsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IIntelliForms * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IIntelliForms * This);
	ULONG(STDMETHODCALLTYPE * Release) (IIntelliForms * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IIntelliForms * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IIntelliForms * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IIntelliForms * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IIntelliForms * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_enabled) (IIntelliForms * This, VARIANT_BOOL * pVal);
	HRESULT(STDMETHODCALLTYPE * put_enabled) (IIntelliForms * This, VARIANT_BOOL bVal);
	END_INTERFACE
}  IIntelliFormsVtbl;
interface IIntelliForms
{
	CONST_VTBL struct IIntelliFormsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IIntelliForms_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IIntelliForms_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IIntelliForms_Release(This)( (This)->lpVtbl -> Release(This) )
#define IIntelliForms_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IIntelliForms_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IIntelliForms_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IIntelliForms_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IIntelliForms_get_enabled(This,pVal)( (This)->lpVtbl -> get_enabled(This,pVal) )
#define IIntelliForms_put_enabled(This,bVal)( (This)->lpVtbl -> put_enabled(This,bVal) )
#endif
#endif
#ifndef __Iwfolders_INTERFACE_DEFINED__
#define __Iwfolders_INTERFACE_DEFINED__
extern const IID IID_Iwfolders;
typedef struct IwfoldersVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (Iwfolders * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (Iwfolders * This);
	ULONG(STDMETHODCALLTYPE * Release) (Iwfolders * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (Iwfolders * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (Iwfolders * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (Iwfolders * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (Iwfolders * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * navigate) (Iwfolders * This, BSTR bstrUrl, BSTR * pbstrRetVal);
	HRESULT(STDMETHODCALLTYPE * navigateFrame) (Iwfolders * This, BSTR bstrUrl, BSTR bstrTargetFrame, BSTR * pbstrRetVal);
	HRESULT(STDMETHODCALLTYPE * navigateNoSite) (Iwfolders * This, BSTR bstrUrl, BSTR bstrTargetFrame, DWORD dwhwnd, IUnknown * pwb);
	END_INTERFACE
}  IwfoldersVtbl;
interface Iwfolders
{
	CONST_VTBL struct IwfoldersVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define Iwfolders_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define Iwfolders_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define Iwfolders_Release(This)( (This)->lpVtbl -> Release(This) )
#define Iwfolders_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define Iwfolders_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define Iwfolders_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define Iwfolders_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define Iwfolders_navigate(This,bstrUrl,pbstrRetVal)( (This)->lpVtbl -> navigate(This,bstrUrl,pbstrRetVal) )
#define Iwfolders_navigateFrame(This,bstrUrl,bstrTargetFrame,pbstrRetVal)( (This)->lpVtbl -> navigateFrame(This,bstrUrl,bstrTargetFrame,pbstrRetVal) )
#define Iwfolders_navigateNoSite(This,bstrUrl,bstrTargetFrame,dwhwnd,pwb)( (This)->lpVtbl -> navigateNoSite(This,bstrUrl,bstrTargetFrame,dwhwnd,pwb) )
#endif
#endif
#ifndef __IAnchorClick_INTERFACE_DEFINED__
#define __IAnchorClick_INTERFACE_DEFINED__
extern const IID IID_IAnchorClick;
typedef struct IAnchorClickVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAnchorClick * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAnchorClick * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAnchorClick * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAnchorClick * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAnchorClick * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAnchorClick * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAnchorClick * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * ProcOnClick) (IAnchorClick * This);
	END_INTERFACE
}  IAnchorClickVtbl;
interface IAnchorClick
{
	CONST_VTBL struct IAnchorClickVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAnchorClick_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAnchorClick_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAnchorClick_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAnchorClick_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAnchorClick_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAnchorClick_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAnchorClick_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAnchorClick_ProcOnClick(This)( (This)->lpVtbl -> ProcOnClick(This) )
#endif
#endif
#ifndef __IHTMLUserDataOM_INTERFACE_DEFINED__
#define __IHTMLUserDataOM_INTERFACE_DEFINED__
extern const IID IID_IHTMLUserDataOM;
typedef struct IHTMLUserDataOMVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IHTMLUserDataOM * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IHTMLUserDataOM * This);
	ULONG(STDMETHODCALLTYPE * Release) (IHTMLUserDataOM * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IHTMLUserDataOM * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IHTMLUserDataOM * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IHTMLUserDataOM * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IHTMLUserDataOM * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_XMLDocument) (IHTMLUserDataOM * This, IDispatch ** p);
	HRESULT(STDMETHODCALLTYPE * save) (IHTMLUserDataOM * This, BSTR strName);
	HRESULT(STDMETHODCALLTYPE * load) (IHTMLUserDataOM * This, BSTR strName);
	HRESULT(STDMETHODCALLTYPE * getAttribute) (IHTMLUserDataOM * This, BSTR name, VARIANT * pValue);
	HRESULT(STDMETHODCALLTYPE * setAttribute) (IHTMLUserDataOM * This, BSTR name, VARIANT value);
	HRESULT(STDMETHODCALLTYPE * removeAttribute) (IHTMLUserDataOM * This, BSTR name);
	HRESULT(STDMETHODCALLTYPE * put_expires) (IHTMLUserDataOM * This, BSTR bstr);
	HRESULT(STDMETHODCALLTYPE * get_expires) (IHTMLUserDataOM * This, BSTR * pbstr);
	END_INTERFACE
}  IHTMLUserDataOMVtbl;
interface IHTMLUserDataOM
{
	CONST_VTBL struct IHTMLUserDataOMVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IHTMLUserDataOM_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IHTMLUserDataOM_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IHTMLUserDataOM_Release(This)( (This)->lpVtbl -> Release(This) )
#define IHTMLUserDataOM_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IHTMLUserDataOM_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IHTMLUserDataOM_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IHTMLUserDataOM_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IHTMLUserDataOM_get_XMLDocument(This,p)( (This)->lpVtbl -> get_XMLDocument(This,p) )
#define IHTMLUserDataOM_save(This,strName)( (This)->lpVtbl -> save(This,strName) )
#define IHTMLUserDataOM_load(This,strName)( (This)->lpVtbl -> load(This,strName) )
#define IHTMLUserDataOM_getAttribute(This,name,pValue)( (This)->lpVtbl -> getAttribute(This,name,pValue) )
#define IHTMLUserDataOM_setAttribute(This,name,value)( (This)->lpVtbl -> setAttribute(This,name,value) )
#define IHTMLUserDataOM_removeAttribute(This,name)( (This)->lpVtbl -> removeAttribute(This,name) )
#define IHTMLUserDataOM_put_expires(This,bstr)( (This)->lpVtbl -> put_expires(This,bstr) )
#define IHTMLUserDataOM_get_expires(This,pbstr)( (This)->lpVtbl -> get_expires(This,pbstr) )
#endif
#endif
#ifndef __IHTMLPersistDataOM_INTERFACE_DEFINED__
#define __IHTMLPersistDataOM_INTERFACE_DEFINED__
extern const IID IID_IHTMLPersistDataOM;
typedef struct IHTMLPersistDataOMVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IHTMLPersistDataOM * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IHTMLPersistDataOM * This);
	ULONG(STDMETHODCALLTYPE * Release) (IHTMLPersistDataOM * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IHTMLPersistDataOM * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IHTMLPersistDataOM * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IHTMLPersistDataOM * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IHTMLPersistDataOM * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_XMLDocument) (IHTMLPersistDataOM * This, IDispatch ** p);
	HRESULT(STDMETHODCALLTYPE * getAttribute) (IHTMLPersistDataOM * This, BSTR name, VARIANT * pValue);
	HRESULT(STDMETHODCALLTYPE * setAttribute) (IHTMLPersistDataOM * This, BSTR name, VARIANT value);
	HRESULT(STDMETHODCALLTYPE * removeAttribute) (IHTMLPersistDataOM * This, BSTR name);
	END_INTERFACE
}  IHTMLPersistDataOMVtbl;
interface IHTMLPersistDataOM
{
	CONST_VTBL struct IHTMLPersistDataOMVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IHTMLPersistDataOM_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IHTMLPersistDataOM_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IHTMLPersistDataOM_Release(This)( (This)->lpVtbl -> Release(This) )
#define IHTMLPersistDataOM_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IHTMLPersistDataOM_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IHTMLPersistDataOM_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IHTMLPersistDataOM_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IHTMLPersistDataOM_get_XMLDocument(This,p)( (This)->lpVtbl -> get_XMLDocument(This,p) )
#define IHTMLPersistDataOM_getAttribute(This,name,pValue)( (This)->lpVtbl -> getAttribute(This,name,pValue) )
#define IHTMLPersistDataOM_setAttribute(This,name,value)( (This)->lpVtbl -> setAttribute(This,name,value) )
#define IHTMLPersistDataOM_removeAttribute(This,name)( (This)->lpVtbl -> removeAttribute(This,name) )
#endif
#endif
#ifndef __IHTMLPersistData_INTERFACE_DEFINED__
#define __IHTMLPersistData_INTERFACE_DEFINED__
extern const IID IID_IHTMLPersistData;
typedef struct IHTMLPersistDataVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IHTMLPersistData * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IHTMLPersistData * This);
	ULONG(STDMETHODCALLTYPE * Release) (IHTMLPersistData * This);
	HRESULT(STDMETHODCALLTYPE * save) (IHTMLPersistData * This, IUnknown * pUnk, long lType, VARIANT_BOOL * fContinueBroacast);
	HRESULT(STDMETHODCALLTYPE * load) (IHTMLPersistData * This, IUnknown * pUnk, long lType, VARIANT_BOOL * fDoDefault);
	HRESULT(STDMETHODCALLTYPE * queryType) (IHTMLPersistData * This, long lType, VARIANT_BOOL * pfSupportsType);
	END_INTERFACE
}  IHTMLPersistDataVtbl;
interface IHTMLPersistData
{
	CONST_VTBL struct IHTMLPersistDataVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IHTMLPersistData_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IHTMLPersistData_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IHTMLPersistData_Release(This)( (This)->lpVtbl -> Release(This) )
#define IHTMLPersistData_save(This,pUnk,lType,fContinueBroacast)( (This)->lpVtbl -> save(This,pUnk,lType,fContinueBroacast) )
#define IHTMLPersistData_load(This,pUnk,lType,fDoDefault)( (This)->lpVtbl -> load(This,pUnk,lType,fDoDefault) )
#define IHTMLPersistData_queryType(This,lType,pfSupportsType)( (This)->lpVtbl -> queryType(This,lType,pfSupportsType) )
#endif
#endif
#ifndef __IDownloadBehavior_INTERFACE_DEFINED__
#define __IDownloadBehavior_INTERFACE_DEFINED__
extern const IID IID_IDownloadBehavior;
typedef struct IDownloadBehaviorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDownloadBehavior * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDownloadBehavior * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDownloadBehavior * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IDownloadBehavior * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IDownloadBehavior * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IDownloadBehavior * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IDownloadBehavior * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * startDownload) (IDownloadBehavior * This, BSTR bstrUrl, IDispatch * pdispCallback);
	END_INTERFACE
}  IDownloadBehaviorVtbl;
interface IDownloadBehavior
{
	CONST_VTBL struct IDownloadBehaviorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDownloadBehavior_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDownloadBehavior_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDownloadBehavior_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDownloadBehavior_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IDownloadBehavior_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IDownloadBehavior_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IDownloadBehavior_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IDownloadBehavior_startDownload(This,bstrUrl,pdispCallback)( (This)->lpVtbl -> startDownload(This,bstrUrl,pdispCallback) )
#endif
#endif
#ifndef __ILayoutRect_INTERFACE_DEFINED__
#define __ILayoutRect_INTERFACE_DEFINED__
extern const IID IID_ILayoutRect;
typedef struct ILayoutRectVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ILayoutRect * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ILayoutRect * This);
	ULONG(STDMETHODCALLTYPE * Release) (ILayoutRect * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ILayoutRect * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ILayoutRect * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ILayoutRect * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ILayoutRect * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * put_nextRect) (ILayoutRect * This, BSTR bstrElementId);
	HRESULT(STDMETHODCALLTYPE * get_nextRect) (ILayoutRect * This, BSTR * pbstrElementId);
	HRESULT(STDMETHODCALLTYPE * put_contentSrc) (ILayoutRect * This, VARIANT varContentSrc);
	HRESULT(STDMETHODCALLTYPE * get_contentSrc) (ILayoutRect * This, VARIANT * pvarContentSrc);
	HRESULT(STDMETHODCALLTYPE * put_honorPageBreaks) (ILayoutRect * This, VARIANT_BOOL v);
	HRESULT(STDMETHODCALLTYPE * get_honorPageBreaks) (ILayoutRect * This, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * put_honorPageRules) (ILayoutRect * This, VARIANT_BOOL v);
	HRESULT(STDMETHODCALLTYPE * get_honorPageRules) (ILayoutRect * This, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * put_nextRectElement) (ILayoutRect * This, IDispatch * pElem);
	HRESULT(STDMETHODCALLTYPE * get_nextRectElement) (ILayoutRect * This, IDispatch ** ppElem);
	HRESULT(STDMETHODCALLTYPE * get_contentDocument) (ILayoutRect * This, IDispatch ** pDoc);
	END_INTERFACE
}  ILayoutRectVtbl;
interface ILayoutRect
{
	CONST_VTBL struct ILayoutRectVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ILayoutRect_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ILayoutRect_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ILayoutRect_Release(This)( (This)->lpVtbl -> Release(This) )
#define ILayoutRect_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ILayoutRect_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ILayoutRect_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ILayoutRect_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ILayoutRect_put_nextRect(This,bstrElementId)( (This)->lpVtbl -> put_nextRect(This,bstrElementId) )
#define ILayoutRect_get_nextRect(This,pbstrElementId)( (This)->lpVtbl -> get_nextRect(This,pbstrElementId) )
#define ILayoutRect_put_contentSrc(This,varContentSrc)( (This)->lpVtbl -> put_contentSrc(This,varContentSrc) )
#define ILayoutRect_get_contentSrc(This,pvarContentSrc)( (This)->lpVtbl -> get_contentSrc(This,pvarContentSrc) )
#define ILayoutRect_put_honorPageBreaks(This,v)( (This)->lpVtbl -> put_honorPageBreaks(This,v) )
#define ILayoutRect_get_honorPageBreaks(This,p)( (This)->lpVtbl -> get_honorPageBreaks(This,p) )
#define ILayoutRect_put_honorPageRules(This,v)( (This)->lpVtbl -> put_honorPageRules(This,v) )
#define ILayoutRect_get_honorPageRules(This,p)( (This)->lpVtbl -> get_honorPageRules(This,p) )
#define ILayoutRect_put_nextRectElement(This,pElem)( (This)->lpVtbl -> put_nextRectElement(This,pElem) )
#define ILayoutRect_get_nextRectElement(This,ppElem)( (This)->lpVtbl -> get_nextRectElement(This,ppElem) )
#define ILayoutRect_get_contentDocument(This,pDoc)( (This)->lpVtbl -> get_contentDocument(This,pDoc) )
#endif
#endif
#ifndef __IDeviceRect_INTERFACE_DEFINED__
#define __IDeviceRect_INTERFACE_DEFINED__
extern const IID IID_IDeviceRect;
typedef struct IDeviceRectVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDeviceRect * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDeviceRect * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDeviceRect * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IDeviceRect * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IDeviceRect * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IDeviceRect * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IDeviceRect * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	END_INTERFACE
}  IDeviceRectVtbl;
interface IDeviceRect
{
	CONST_VTBL struct IDeviceRectVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDeviceRect_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDeviceRect_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDeviceRect_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDeviceRect_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IDeviceRect_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IDeviceRect_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IDeviceRect_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#endif
#endif
#ifndef __ITemplatePrinter_INTERFACE_DEFINED__
#define __ITemplatePrinter_INTERFACE_DEFINED__
extern const IID IID_ITemplatePrinter;
typedef struct ITemplatePrinterVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITemplatePrinter * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITemplatePrinter * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITemplatePrinter * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITemplatePrinter * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITemplatePrinter * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITemplatePrinter * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITemplatePrinter * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * startDoc) (ITemplatePrinter * This, BSTR bstrTitle, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * stopDoc) (ITemplatePrinter * This);
	HRESULT(STDMETHODCALLTYPE * printBlankPage) (ITemplatePrinter * This);
	HRESULT(STDMETHODCALLTYPE * printPage) (ITemplatePrinter * This, IDispatch * pElemDisp);
	HRESULT(STDMETHODCALLTYPE * ensurePrintDialogDefaults) (ITemplatePrinter * This, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * showPrintDialog) (ITemplatePrinter * This, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * showPageSetupDialog) (ITemplatePrinter * This, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * printNonNative) (ITemplatePrinter * This, IUnknown * pMarkup, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * printNonNativeFrames) (ITemplatePrinter * This, IUnknown * pMarkup, VARIANT_BOOL fActiveFrame);
	HRESULT(STDMETHODCALLTYPE * put_framesetDocument) (ITemplatePrinter * This, VARIANT_BOOL v);
	HRESULT(STDMETHODCALLTYPE * get_framesetDocument) (ITemplatePrinter * This, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * put_frameActive) (ITemplatePrinter * This, VARIANT_BOOL v);
	HRESULT(STDMETHODCALLTYPE * get_frameActive) (ITemplatePrinter * This, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * put_frameAsShown) (ITemplatePrinter * This, VARIANT_BOOL v);
	HRESULT(STDMETHODCALLTYPE * get_frameAsShown) (ITemplatePrinter * This, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * put_selection) (ITemplatePrinter * This, VARIANT_BOOL v);
	HRESULT(STDMETHODCALLTYPE * get_selection) (ITemplatePrinter * This, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * put_selectedPages) (ITemplatePrinter * This, VARIANT_BOOL v);
	HRESULT(STDMETHODCALLTYPE * get_selectedPages) (ITemplatePrinter * This, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * put_currentPage) (ITemplatePrinter * This, VARIANT_BOOL v);
	HRESULT(STDMETHODCALLTYPE * get_currentPage) (ITemplatePrinter * This, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * put_currentPageAvail) (ITemplatePrinter * This, VARIANT_BOOL v);
	HRESULT(STDMETHODCALLTYPE * get_currentPageAvail) (ITemplatePrinter * This, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * put_collate) (ITemplatePrinter * This, VARIANT_BOOL v);
	HRESULT(STDMETHODCALLTYPE * get_collate) (ITemplatePrinter * This, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * get_duplex) (ITemplatePrinter * This, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * put_copies) (ITemplatePrinter * This, WORD v);
	HRESULT(STDMETHODCALLTYPE * get_copies) (ITemplatePrinter * This, WORD * p);
	HRESULT(STDMETHODCALLTYPE * put_pageFrom) (ITemplatePrinter * This, WORD v);
	HRESULT(STDMETHODCALLTYPE * get_pageFrom) (ITemplatePrinter * This, WORD * p);
	HRESULT(STDMETHODCALLTYPE * put_pageTo) (ITemplatePrinter * This, WORD v);
	HRESULT(STDMETHODCALLTYPE * get_pageTo) (ITemplatePrinter * This, WORD * p);
	HRESULT(STDMETHODCALLTYPE * put_tableOfLinks) (ITemplatePrinter * This, VARIANT_BOOL v);
	HRESULT(STDMETHODCALLTYPE * get_tableOfLinks) (ITemplatePrinter * This, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * put_allLinkedDocuments) (ITemplatePrinter * This, VARIANT_BOOL v);
	HRESULT(STDMETHODCALLTYPE * get_allLinkedDocuments) (ITemplatePrinter * This, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * put_header) (ITemplatePrinter * This, BSTR bstrHeader);
	HRESULT(STDMETHODCALLTYPE * get_header) (ITemplatePrinter * This, BSTR * bstrHeader);
	HRESULT(STDMETHODCALLTYPE * put_footer) (ITemplatePrinter * This, BSTR bstrFooter);
	HRESULT(STDMETHODCALLTYPE * get_footer) (ITemplatePrinter * This, BSTR * bstrFooter);
	HRESULT(STDMETHODCALLTYPE * put_marginLeft) (ITemplatePrinter * This, long v);
	HRESULT(STDMETHODCALLTYPE * get_marginLeft) (ITemplatePrinter * This, long *p);
	HRESULT(STDMETHODCALLTYPE * put_marginRight) (ITemplatePrinter * This, long v);
	HRESULT(STDMETHODCALLTYPE * get_marginRight) (ITemplatePrinter * This, long *p);
	HRESULT(STDMETHODCALLTYPE * put_marginTop) (ITemplatePrinter * This, long v);
	HRESULT(STDMETHODCALLTYPE * get_marginTop) (ITemplatePrinter * This, long *p);
	HRESULT(STDMETHODCALLTYPE * put_marginBottom) (ITemplatePrinter * This, long v);
	HRESULT(STDMETHODCALLTYPE * get_marginBottom) (ITemplatePrinter * This, long *p);
	HRESULT(STDMETHODCALLTYPE * get_pageWidth) (ITemplatePrinter * This, long *p);
	HRESULT(STDMETHODCALLTYPE * get_pageHeight) (ITemplatePrinter * This, long *p);
	HRESULT(STDMETHODCALLTYPE * get_unprintableLeft) (ITemplatePrinter * This, long *p);
	HRESULT(STDMETHODCALLTYPE * get_unprintableTop) (ITemplatePrinter * This, long *p);
	HRESULT(STDMETHODCALLTYPE * get_unprintableRight) (ITemplatePrinter * This, long *p);
	HRESULT(STDMETHODCALLTYPE * get_unprintableBottom) (ITemplatePrinter * This, long *p);
	HRESULT(STDMETHODCALLTYPE * updatePageStatus) (ITemplatePrinter * This, long *p);
	END_INTERFACE
}  ITemplatePrinterVtbl;
interface ITemplatePrinter
{
	CONST_VTBL struct ITemplatePrinterVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITemplatePrinter_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITemplatePrinter_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITemplatePrinter_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITemplatePrinter_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITemplatePrinter_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITemplatePrinter_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITemplatePrinter_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITemplatePrinter_startDoc(This,bstrTitle,p)( (This)->lpVtbl -> startDoc(This,bstrTitle,p) )
#define ITemplatePrinter_stopDoc(This)( (This)->lpVtbl -> stopDoc(This) )
#define ITemplatePrinter_printBlankPage(This)( (This)->lpVtbl -> printBlankPage(This) )
#define ITemplatePrinter_printPage(This,pElemDisp)( (This)->lpVtbl -> printPage(This,pElemDisp) )
#define ITemplatePrinter_ensurePrintDialogDefaults(This,p)( (This)->lpVtbl -> ensurePrintDialogDefaults(This,p) )
#define ITemplatePrinter_showPrintDialog(This,p)( (This)->lpVtbl -> showPrintDialog(This,p) )
#define ITemplatePrinter_showPageSetupDialog(This,p)( (This)->lpVtbl -> showPageSetupDialog(This,p) )
#define ITemplatePrinter_printNonNative(This,pMarkup,p)( (This)->lpVtbl -> printNonNative(This,pMarkup,p) )
#define ITemplatePrinter_printNonNativeFrames(This,pMarkup,fActiveFrame)( (This)->lpVtbl -> printNonNativeFrames(This,pMarkup,fActiveFrame) )
#define ITemplatePrinter_put_framesetDocument(This,v)( (This)->lpVtbl -> put_framesetDocument(This,v) )
#define ITemplatePrinter_get_framesetDocument(This,p)( (This)->lpVtbl -> get_framesetDocument(This,p) )
#define ITemplatePrinter_put_frameActive(This,v)( (This)->lpVtbl -> put_frameActive(This,v) )
#define ITemplatePrinter_get_frameActive(This,p)( (This)->lpVtbl -> get_frameActive(This,p) )
#define ITemplatePrinter_put_frameAsShown(This,v)( (This)->lpVtbl -> put_frameAsShown(This,v) )
#define ITemplatePrinter_get_frameAsShown(This,p)( (This)->lpVtbl -> get_frameAsShown(This,p) )
#define ITemplatePrinter_put_selection(This,v)( (This)->lpVtbl -> put_selection(This,v) )
#define ITemplatePrinter_get_selection(This,p)( (This)->lpVtbl -> get_selection(This,p) )
#define ITemplatePrinter_put_selectedPages(This,v)( (This)->lpVtbl -> put_selectedPages(This,v) )
#define ITemplatePrinter_get_selectedPages(This,p)( (This)->lpVtbl -> get_selectedPages(This,p) )
#define ITemplatePrinter_put_currentPage(This,v)( (This)->lpVtbl -> put_currentPage(This,v) )
#define ITemplatePrinter_get_currentPage(This,p)( (This)->lpVtbl -> get_currentPage(This,p) )
#define ITemplatePrinter_put_currentPageAvail(This,v)( (This)->lpVtbl -> put_currentPageAvail(This,v) )
#define ITemplatePrinter_get_currentPageAvail(This,p)( (This)->lpVtbl -> get_currentPageAvail(This,p) )
#define ITemplatePrinter_put_collate(This,v)( (This)->lpVtbl -> put_collate(This,v) )
#define ITemplatePrinter_get_collate(This,p)( (This)->lpVtbl -> get_collate(This,p) )
#define ITemplatePrinter_get_duplex(This,p)( (This)->lpVtbl -> get_duplex(This,p) )
#define ITemplatePrinter_put_copies(This,v)( (This)->lpVtbl -> put_copies(This,v) )
#define ITemplatePrinter_get_copies(This,p)( (This)->lpVtbl -> get_copies(This,p) )
#define ITemplatePrinter_put_pageFrom(This,v)( (This)->lpVtbl -> put_pageFrom(This,v) )
#define ITemplatePrinter_get_pageFrom(This,p)( (This)->lpVtbl -> get_pageFrom(This,p) )
#define ITemplatePrinter_put_pageTo(This,v)( (This)->lpVtbl -> put_pageTo(This,v) )
#define ITemplatePrinter_get_pageTo(This,p)( (This)->lpVtbl -> get_pageTo(This,p) )
#define ITemplatePrinter_put_tableOfLinks(This,v)( (This)->lpVtbl -> put_tableOfLinks(This,v) )
#define ITemplatePrinter_get_tableOfLinks(This,p)( (This)->lpVtbl -> get_tableOfLinks(This,p) )
#define ITemplatePrinter_put_allLinkedDocuments(This,v)( (This)->lpVtbl -> put_allLinkedDocuments(This,v) )
#define ITemplatePrinter_get_allLinkedDocuments(This,p)( (This)->lpVtbl -> get_allLinkedDocuments(This,p) )
#define ITemplatePrinter_put_header(This,bstrHeader)( (This)->lpVtbl -> put_header(This,bstrHeader) )
#define ITemplatePrinter_get_header(This,bstrHeader)( (This)->lpVtbl -> get_header(This,bstrHeader) )
#define ITemplatePrinter_put_footer(This,bstrFooter)( (This)->lpVtbl -> put_footer(This,bstrFooter) )
#define ITemplatePrinter_get_footer(This,bstrFooter)( (This)->lpVtbl -> get_footer(This,bstrFooter) )
#define ITemplatePrinter_put_marginLeft(This,v)( (This)->lpVtbl -> put_marginLeft(This,v) )
#define ITemplatePrinter_get_marginLeft(This,p)( (This)->lpVtbl -> get_marginLeft(This,p) )
#define ITemplatePrinter_put_marginRight(This,v)( (This)->lpVtbl -> put_marginRight(This,v) )
#define ITemplatePrinter_get_marginRight(This,p)( (This)->lpVtbl -> get_marginRight(This,p) )
#define ITemplatePrinter_put_marginTop(This,v)( (This)->lpVtbl -> put_marginTop(This,v) )
#define ITemplatePrinter_get_marginTop(This,p)( (This)->lpVtbl -> get_marginTop(This,p) )
#define ITemplatePrinter_put_marginBottom(This,v)( (This)->lpVtbl -> put_marginBottom(This,v) )
#define ITemplatePrinter_get_marginBottom(This,p)( (This)->lpVtbl -> get_marginBottom(This,p) )
#define ITemplatePrinter_get_pageWidth(This,p)( (This)->lpVtbl -> get_pageWidth(This,p) )
#define ITemplatePrinter_get_pageHeight(This,p)( (This)->lpVtbl -> get_pageHeight(This,p) )
#define ITemplatePrinter_get_unprintableLeft(This,p)( (This)->lpVtbl -> get_unprintableLeft(This,p) )
#define ITemplatePrinter_get_unprintableTop(This,p)( (This)->lpVtbl -> get_unprintableTop(This,p) )
#define ITemplatePrinter_get_unprintableRight(This,p)( (This)->lpVtbl -> get_unprintableRight(This,p) )
#define ITemplatePrinter_get_unprintableBottom(This,p)( (This)->lpVtbl -> get_unprintableBottom(This,p) )
#define ITemplatePrinter_updatePageStatus(This,p)( (This)->lpVtbl -> updatePageStatus(This,p) )
#endif
#endif
#ifndef __ITemplatePrinter2_INTERFACE_DEFINED__
#define __ITemplatePrinter2_INTERFACE_DEFINED__
extern const IID IID_ITemplatePrinter2;
typedef struct ITemplatePrinter2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITemplatePrinter2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITemplatePrinter2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITemplatePrinter2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITemplatePrinter2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITemplatePrinter2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITemplatePrinter2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITemplatePrinter2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * startDoc) (ITemplatePrinter2 * This, BSTR bstrTitle, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * stopDoc) (ITemplatePrinter2 * This);
	HRESULT(STDMETHODCALLTYPE * printBlankPage) (ITemplatePrinter2 * This);
	HRESULT(STDMETHODCALLTYPE * printPage) (ITemplatePrinter2 * This, IDispatch * pElemDisp);
	HRESULT(STDMETHODCALLTYPE * ensurePrintDialogDefaults) (ITemplatePrinter2 * This, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * showPrintDialog) (ITemplatePrinter2 * This, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * showPageSetupDialog) (ITemplatePrinter2 * This, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * printNonNative) (ITemplatePrinter2 * This, IUnknown * pMarkup, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * printNonNativeFrames) (ITemplatePrinter2 * This, IUnknown * pMarkup, VARIANT_BOOL fActiveFrame);
	HRESULT(STDMETHODCALLTYPE * put_framesetDocument) (ITemplatePrinter2 * This, VARIANT_BOOL v);
	HRESULT(STDMETHODCALLTYPE * get_framesetDocument) (ITemplatePrinter2 * This, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * put_frameActive) (ITemplatePrinter2 * This, VARIANT_BOOL v);
	HRESULT(STDMETHODCALLTYPE * get_frameActive) (ITemplatePrinter2 * This, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * put_frameAsShown) (ITemplatePrinter2 * This, VARIANT_BOOL v);
	HRESULT(STDMETHODCALLTYPE * get_frameAsShown) (ITemplatePrinter2 * This, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * put_selection) (ITemplatePrinter2 * This, VARIANT_BOOL v);
	HRESULT(STDMETHODCALLTYPE * get_selection) (ITemplatePrinter2 * This, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * put_selectedPages) (ITemplatePrinter2 * This, VARIANT_BOOL v);
	HRESULT(STDMETHODCALLTYPE * get_selectedPages) (ITemplatePrinter2 * This, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * put_currentPage) (ITemplatePrinter2 * This, VARIANT_BOOL v);
	HRESULT(STDMETHODCALLTYPE * get_currentPage) (ITemplatePrinter2 * This, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * put_currentPageAvail) (ITemplatePrinter2 * This, VARIANT_BOOL v);
	HRESULT(STDMETHODCALLTYPE * get_currentPageAvail) (ITemplatePrinter2 * This, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * put_collate) (ITemplatePrinter2 * This, VARIANT_BOOL v);
	HRESULT(STDMETHODCALLTYPE * get_collate) (ITemplatePrinter2 * This, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * get_duplex) (ITemplatePrinter2 * This, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * put_copies) (ITemplatePrinter2 * This, WORD v);
	HRESULT(STDMETHODCALLTYPE * get_copies) (ITemplatePrinter2 * This, WORD * p);
	HRESULT(STDMETHODCALLTYPE * put_pageFrom) (ITemplatePrinter2 * This, WORD v);
	HRESULT(STDMETHODCALLTYPE * get_pageFrom) (ITemplatePrinter2 * This, WORD * p);
	HRESULT(STDMETHODCALLTYPE * put_pageTo) (ITemplatePrinter2 * This, WORD v);
	HRESULT(STDMETHODCALLTYPE * get_pageTo) (ITemplatePrinter2 * This, WORD * p);
	HRESULT(STDMETHODCALLTYPE * put_tableOfLinks) (ITemplatePrinter2 * This, VARIANT_BOOL v);
	HRESULT(STDMETHODCALLTYPE * get_tableOfLinks) (ITemplatePrinter2 * This, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * put_allLinkedDocuments) (ITemplatePrinter2 * This, VARIANT_BOOL v);
	HRESULT(STDMETHODCALLTYPE * get_allLinkedDocuments) (ITemplatePrinter2 * This, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * put_header) (ITemplatePrinter2 * This, BSTR bstrHeader);
	HRESULT(STDMETHODCALLTYPE * get_header) (ITemplatePrinter2 * This, BSTR * bstrHeader);
	HRESULT(STDMETHODCALLTYPE * put_footer) (ITemplatePrinter2 * This, BSTR bstrFooter);
	HRESULT(STDMETHODCALLTYPE * get_footer) (ITemplatePrinter2 * This, BSTR * bstrFooter);
	HRESULT(STDMETHODCALLTYPE * put_marginLeft) (ITemplatePrinter2 * This, long v);
	HRESULT(STDMETHODCALLTYPE * get_marginLeft) (ITemplatePrinter2 * This, long *p);
	HRESULT(STDMETHODCALLTYPE * put_marginRight) (ITemplatePrinter2 * This, long v);
	HRESULT(STDMETHODCALLTYPE * get_marginRight) (ITemplatePrinter2 * This, long *p);
	HRESULT(STDMETHODCALLTYPE * put_marginTop) (ITemplatePrinter2 * This, long v);
	HRESULT(STDMETHODCALLTYPE * get_marginTop) (ITemplatePrinter2 * This, long *p);
	HRESULT(STDMETHODCALLTYPE * put_marginBottom) (ITemplatePrinter2 * This, long v);
	HRESULT(STDMETHODCALLTYPE * get_marginBottom) (ITemplatePrinter2 * This, long *p);
	HRESULT(STDMETHODCALLTYPE * get_pageWidth) (ITemplatePrinter2 * This, long *p);
	HRESULT(STDMETHODCALLTYPE * get_pageHeight) (ITemplatePrinter2 * This, long *p);
	HRESULT(STDMETHODCALLTYPE * get_unprintableLeft) (ITemplatePrinter2 * This, long *p);
	HRESULT(STDMETHODCALLTYPE * get_unprintableTop) (ITemplatePrinter2 * This, long *p);
	HRESULT(STDMETHODCALLTYPE * get_unprintableRight) (ITemplatePrinter2 * This, long *p);
	HRESULT(STDMETHODCALLTYPE * get_unprintableBottom) (ITemplatePrinter2 * This, long *p);
	HRESULT(STDMETHODCALLTYPE * updatePageStatus) (ITemplatePrinter2 * This, long *p);
	HRESULT(STDMETHODCALLTYPE * put_selectionEnabled) (ITemplatePrinter2 * This, VARIANT_BOOL v);
	HRESULT(STDMETHODCALLTYPE * get_selectionEnabled) (ITemplatePrinter2 * This, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * put_frameActiveEnabled) (ITemplatePrinter2 * This, VARIANT_BOOL v);
	HRESULT(STDMETHODCALLTYPE * get_frameActiveEnabled) (ITemplatePrinter2 * This, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * put_orientation) (ITemplatePrinter2 * This, BSTR v);
	HRESULT(STDMETHODCALLTYPE * get_orientation) (ITemplatePrinter2 * This, BSTR * p);
	HRESULT(STDMETHODCALLTYPE * put_usePrinterCopyCollate) (ITemplatePrinter2 * This, VARIANT_BOOL v);
	HRESULT(STDMETHODCALLTYPE * get_usePrinterCopyCollate) (ITemplatePrinter2 * This, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * deviceSupports) (ITemplatePrinter2 * This, BSTR bstrProperty, VARIANT * pvar);
	END_INTERFACE
}  ITemplatePrinter2Vtbl;
interface ITemplatePrinter2
{
	CONST_VTBL struct ITemplatePrinter2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITemplatePrinter2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITemplatePrinter2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITemplatePrinter2_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITemplatePrinter2_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITemplatePrinter2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITemplatePrinter2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITemplatePrinter2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITemplatePrinter2_startDoc(This,bstrTitle,p)( (This)->lpVtbl -> startDoc(This,bstrTitle,p) )
#define ITemplatePrinter2_stopDoc(This)( (This)->lpVtbl -> stopDoc(This) )
#define ITemplatePrinter2_printBlankPage(This)( (This)->lpVtbl -> printBlankPage(This) )
#define ITemplatePrinter2_printPage(This,pElemDisp)( (This)->lpVtbl -> printPage(This,pElemDisp) )
#define ITemplatePrinter2_ensurePrintDialogDefaults(This,p)( (This)->lpVtbl -> ensurePrintDialogDefaults(This,p) )
#define ITemplatePrinter2_showPrintDialog(This,p)( (This)->lpVtbl -> showPrintDialog(This,p) )
#define ITemplatePrinter2_showPageSetupDialog(This,p)( (This)->lpVtbl -> showPageSetupDialog(This,p) )
#define ITemplatePrinter2_printNonNative(This,pMarkup,p)( (This)->lpVtbl -> printNonNative(This,pMarkup,p) )
#define ITemplatePrinter2_printNonNativeFrames(This,pMarkup,fActiveFrame)( (This)->lpVtbl -> printNonNativeFrames(This,pMarkup,fActiveFrame) )
#define ITemplatePrinter2_put_framesetDocument(This,v)( (This)->lpVtbl -> put_framesetDocument(This,v) )
#define ITemplatePrinter2_get_framesetDocument(This,p)( (This)->lpVtbl -> get_framesetDocument(This,p) )
#define ITemplatePrinter2_put_frameActive(This,v)( (This)->lpVtbl -> put_frameActive(This,v) )
#define ITemplatePrinter2_get_frameActive(This,p)( (This)->lpVtbl -> get_frameActive(This,p) )
#define ITemplatePrinter2_put_frameAsShown(This,v)( (This)->lpVtbl -> put_frameAsShown(This,v) )
#define ITemplatePrinter2_get_frameAsShown(This,p)( (This)->lpVtbl -> get_frameAsShown(This,p) )
#define ITemplatePrinter2_put_selection(This,v)( (This)->lpVtbl -> put_selection(This,v) )
#define ITemplatePrinter2_get_selection(This,p)( (This)->lpVtbl -> get_selection(This,p) )
#define ITemplatePrinter2_put_selectedPages(This,v)( (This)->lpVtbl -> put_selectedPages(This,v) )
#define ITemplatePrinter2_get_selectedPages(This,p)( (This)->lpVtbl -> get_selectedPages(This,p) )
#define ITemplatePrinter2_put_currentPage(This,v)( (This)->lpVtbl -> put_currentPage(This,v) )
#define ITemplatePrinter2_get_currentPage(This,p)( (This)->lpVtbl -> get_currentPage(This,p) )
#define ITemplatePrinter2_put_currentPageAvail(This,v)( (This)->lpVtbl -> put_currentPageAvail(This,v) )
#define ITemplatePrinter2_get_currentPageAvail(This,p)( (This)->lpVtbl -> get_currentPageAvail(This,p) )
#define ITemplatePrinter2_put_collate(This,v)( (This)->lpVtbl -> put_collate(This,v) )
#define ITemplatePrinter2_get_collate(This,p)( (This)->lpVtbl -> get_collate(This,p) )
#define ITemplatePrinter2_get_duplex(This,p)( (This)->lpVtbl -> get_duplex(This,p) )
#define ITemplatePrinter2_put_copies(This,v)( (This)->lpVtbl -> put_copies(This,v) )
#define ITemplatePrinter2_get_copies(This,p)( (This)->lpVtbl -> get_copies(This,p) )
#define ITemplatePrinter2_put_pageFrom(This,v)( (This)->lpVtbl -> put_pageFrom(This,v) )
#define ITemplatePrinter2_get_pageFrom(This,p)( (This)->lpVtbl -> get_pageFrom(This,p) )
#define ITemplatePrinter2_put_pageTo(This,v)( (This)->lpVtbl -> put_pageTo(This,v) )
#define ITemplatePrinter2_get_pageTo(This,p)( (This)->lpVtbl -> get_pageTo(This,p) )
#define ITemplatePrinter2_put_tableOfLinks(This,v)( (This)->lpVtbl -> put_tableOfLinks(This,v) )
#define ITemplatePrinter2_get_tableOfLinks(This,p)( (This)->lpVtbl -> get_tableOfLinks(This,p) )
#define ITemplatePrinter2_put_allLinkedDocuments(This,v)( (This)->lpVtbl -> put_allLinkedDocuments(This,v) )
#define ITemplatePrinter2_get_allLinkedDocuments(This,p)( (This)->lpVtbl -> get_allLinkedDocuments(This,p) )
#define ITemplatePrinter2_put_header(This,bstrHeader)( (This)->lpVtbl -> put_header(This,bstrHeader) )
#define ITemplatePrinter2_get_header(This,bstrHeader)( (This)->lpVtbl -> get_header(This,bstrHeader) )
#define ITemplatePrinter2_put_footer(This,bstrFooter)( (This)->lpVtbl -> put_footer(This,bstrFooter) )
#define ITemplatePrinter2_get_footer(This,bstrFooter)( (This)->lpVtbl -> get_footer(This,bstrFooter) )
#define ITemplatePrinter2_put_marginLeft(This,v)( (This)->lpVtbl -> put_marginLeft(This,v) )
#define ITemplatePrinter2_get_marginLeft(This,p)( (This)->lpVtbl -> get_marginLeft(This,p) )
#define ITemplatePrinter2_put_marginRight(This,v)( (This)->lpVtbl -> put_marginRight(This,v) )
#define ITemplatePrinter2_get_marginRight(This,p)( (This)->lpVtbl -> get_marginRight(This,p) )
#define ITemplatePrinter2_put_marginTop(This,v)( (This)->lpVtbl -> put_marginTop(This,v) )
#define ITemplatePrinter2_get_marginTop(This,p)( (This)->lpVtbl -> get_marginTop(This,p) )
#define ITemplatePrinter2_put_marginBottom(This,v)( (This)->lpVtbl -> put_marginBottom(This,v) )
#define ITemplatePrinter2_get_marginBottom(This,p)( (This)->lpVtbl -> get_marginBottom(This,p) )
#define ITemplatePrinter2_get_pageWidth(This,p)( (This)->lpVtbl -> get_pageWidth(This,p) )
#define ITemplatePrinter2_get_pageHeight(This,p)( (This)->lpVtbl -> get_pageHeight(This,p) )
#define ITemplatePrinter2_get_unprintableLeft(This,p)( (This)->lpVtbl -> get_unprintableLeft(This,p) )
#define ITemplatePrinter2_get_unprintableTop(This,p)( (This)->lpVtbl -> get_unprintableTop(This,p) )
#define ITemplatePrinter2_get_unprintableRight(This,p)( (This)->lpVtbl -> get_unprintableRight(This,p) )
#define ITemplatePrinter2_get_unprintableBottom(This,p)( (This)->lpVtbl -> get_unprintableBottom(This,p) )
#define ITemplatePrinter2_updatePageStatus(This,p)( (This)->lpVtbl -> updatePageStatus(This,p) )
#define ITemplatePrinter2_put_selectionEnabled(This,v)( (This)->lpVtbl -> put_selectionEnabled(This,v) )
#define ITemplatePrinter2_get_selectionEnabled(This,p)( (This)->lpVtbl -> get_selectionEnabled(This,p) )
#define ITemplatePrinter2_put_frameActiveEnabled(This,v)( (This)->lpVtbl -> put_frameActiveEnabled(This,v) )
#define ITemplatePrinter2_get_frameActiveEnabled(This,p)( (This)->lpVtbl -> get_frameActiveEnabled(This,p) )
#define ITemplatePrinter2_put_orientation(This,v)( (This)->lpVtbl -> put_orientation(This,v) )
#define ITemplatePrinter2_get_orientation(This,p)( (This)->lpVtbl -> get_orientation(This,p) )
#define ITemplatePrinter2_put_usePrinterCopyCollate(This,v)( (This)->lpVtbl -> put_usePrinterCopyCollate(This,v) )
#define ITemplatePrinter2_get_usePrinterCopyCollate(This,p)( (This)->lpVtbl -> get_usePrinterCopyCollate(This,p) )
#define ITemplatePrinter2_deviceSupports(This,bstrProperty,pvar)( (This)->lpVtbl -> deviceSupports(This,bstrProperty,pvar) )
#endif
#endif
#ifndef __ITemplatePrinter3_INTERFACE_DEFINED__
#define __ITemplatePrinter3_INTERFACE_DEFINED__
extern const IID IID_ITemplatePrinter3;
typedef struct ITemplatePrinter3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITemplatePrinter3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITemplatePrinter3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITemplatePrinter3 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ITemplatePrinter3 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ITemplatePrinter3 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ITemplatePrinter3 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ITemplatePrinter3 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * startDoc) (ITemplatePrinter3 * This, BSTR bstrTitle, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * stopDoc) (ITemplatePrinter3 * This);
	HRESULT(STDMETHODCALLTYPE * printBlankPage) (ITemplatePrinter3 * This);
	HRESULT(STDMETHODCALLTYPE * printPage) (ITemplatePrinter3 * This, IDispatch * pElemDisp);
	HRESULT(STDMETHODCALLTYPE * ensurePrintDialogDefaults) (ITemplatePrinter3 * This, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * showPrintDialog) (ITemplatePrinter3 * This, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * showPageSetupDialog) (ITemplatePrinter3 * This, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * printNonNative) (ITemplatePrinter3 * This, IUnknown * pMarkup, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * printNonNativeFrames) (ITemplatePrinter3 * This, IUnknown * pMarkup, VARIANT_BOOL fActiveFrame);
	HRESULT(STDMETHODCALLTYPE * put_framesetDocument) (ITemplatePrinter3 * This, VARIANT_BOOL v);
	HRESULT(STDMETHODCALLTYPE * get_framesetDocument) (ITemplatePrinter3 * This, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * put_frameActive) (ITemplatePrinter3 * This, VARIANT_BOOL v);
	HRESULT(STDMETHODCALLTYPE * get_frameActive) (ITemplatePrinter3 * This, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * put_frameAsShown) (ITemplatePrinter3 * This, VARIANT_BOOL v);
	HRESULT(STDMETHODCALLTYPE * get_frameAsShown) (ITemplatePrinter3 * This, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * put_selection) (ITemplatePrinter3 * This, VARIANT_BOOL v);
	HRESULT(STDMETHODCALLTYPE * get_selection) (ITemplatePrinter3 * This, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * put_selectedPages) (ITemplatePrinter3 * This, VARIANT_BOOL v);
	HRESULT(STDMETHODCALLTYPE * get_selectedPages) (ITemplatePrinter3 * This, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * put_currentPage) (ITemplatePrinter3 * This, VARIANT_BOOL v);
	HRESULT(STDMETHODCALLTYPE * get_currentPage) (ITemplatePrinter3 * This, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * put_currentPageAvail) (ITemplatePrinter3 * This, VARIANT_BOOL v);
	HRESULT(STDMETHODCALLTYPE * get_currentPageAvail) (ITemplatePrinter3 * This, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * put_collate) (ITemplatePrinter3 * This, VARIANT_BOOL v);
	HRESULT(STDMETHODCALLTYPE * get_collate) (ITemplatePrinter3 * This, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * get_duplex) (ITemplatePrinter3 * This, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * put_copies) (ITemplatePrinter3 * This, WORD v);
	HRESULT(STDMETHODCALLTYPE * get_copies) (ITemplatePrinter3 * This, WORD * p);
	HRESULT(STDMETHODCALLTYPE * put_pageFrom) (ITemplatePrinter3 * This, WORD v);
	HRESULT(STDMETHODCALLTYPE * get_pageFrom) (ITemplatePrinter3 * This, WORD * p);
	HRESULT(STDMETHODCALLTYPE * put_pageTo) (ITemplatePrinter3 * This, WORD v);
	HRESULT(STDMETHODCALLTYPE * get_pageTo) (ITemplatePrinter3 * This, WORD * p);
	HRESULT(STDMETHODCALLTYPE * put_tableOfLinks) (ITemplatePrinter3 * This, VARIANT_BOOL v);
	HRESULT(STDMETHODCALLTYPE * get_tableOfLinks) (ITemplatePrinter3 * This, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * put_allLinkedDocuments) (ITemplatePrinter3 * This, VARIANT_BOOL v);
	HRESULT(STDMETHODCALLTYPE * get_allLinkedDocuments) (ITemplatePrinter3 * This, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * put_header) (ITemplatePrinter3 * This, BSTR bstrHeader);
	HRESULT(STDMETHODCALLTYPE * get_header) (ITemplatePrinter3 * This, BSTR * bstrHeader);
	HRESULT(STDMETHODCALLTYPE * put_footer) (ITemplatePrinter3 * This, BSTR bstrFooter);
	HRESULT(STDMETHODCALLTYPE * get_footer) (ITemplatePrinter3 * This, BSTR * bstrFooter);
	HRESULT(STDMETHODCALLTYPE * put_marginLeft) (ITemplatePrinter3 * This, long v);
	HRESULT(STDMETHODCALLTYPE * get_marginLeft) (ITemplatePrinter3 * This, long *p);
	HRESULT(STDMETHODCALLTYPE * put_marginRight) (ITemplatePrinter3 * This, long v);
	HRESULT(STDMETHODCALLTYPE * get_marginRight) (ITemplatePrinter3 * This, long *p);
	HRESULT(STDMETHODCALLTYPE * put_marginTop) (ITemplatePrinter3 * This, long v);
	HRESULT(STDMETHODCALLTYPE * get_marginTop) (ITemplatePrinter3 * This, long *p);
	HRESULT(STDMETHODCALLTYPE * put_marginBottom) (ITemplatePrinter3 * This, long v);
	HRESULT(STDMETHODCALLTYPE * get_marginBottom) (ITemplatePrinter3 * This, long *p);
	HRESULT(STDMETHODCALLTYPE * get_pageWidth) (ITemplatePrinter3 * This, long *p);
	HRESULT(STDMETHODCALLTYPE * get_pageHeight) (ITemplatePrinter3 * This, long *p);
	HRESULT(STDMETHODCALLTYPE * get_unprintableLeft) (ITemplatePrinter3 * This, long *p);
	HRESULT(STDMETHODCALLTYPE * get_unprintableTop) (ITemplatePrinter3 * This, long *p);
	HRESULT(STDMETHODCALLTYPE * get_unprintableRight) (ITemplatePrinter3 * This, long *p);
	HRESULT(STDMETHODCALLTYPE * get_unprintableBottom) (ITemplatePrinter3 * This, long *p);
	HRESULT(STDMETHODCALLTYPE * updatePageStatus) (ITemplatePrinter3 * This, long *p);
	HRESULT(STDMETHODCALLTYPE * put_selectionEnabled) (ITemplatePrinter3 * This, VARIANT_BOOL v);
	HRESULT(STDMETHODCALLTYPE * get_selectionEnabled) (ITemplatePrinter3 * This, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * put_frameActiveEnabled) (ITemplatePrinter3 * This, VARIANT_BOOL v);
	HRESULT(STDMETHODCALLTYPE * get_frameActiveEnabled) (ITemplatePrinter3 * This, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * put_orientation) (ITemplatePrinter3 * This, BSTR v);
	HRESULT(STDMETHODCALLTYPE * get_orientation) (ITemplatePrinter3 * This, BSTR * p);
	HRESULT(STDMETHODCALLTYPE * put_usePrinterCopyCollate) (ITemplatePrinter3 * This, VARIANT_BOOL v);
	HRESULT(STDMETHODCALLTYPE * get_usePrinterCopyCollate) (ITemplatePrinter3 * This, VARIANT_BOOL * p);
	HRESULT(STDMETHODCALLTYPE * deviceSupports) (ITemplatePrinter3 * This, BSTR bstrProperty, VARIANT * pvar);
	HRESULT(STDMETHODCALLTYPE * put_headerFooterFont) (ITemplatePrinter3 * This, BSTR bstrFooter);
	HRESULT(STDMETHODCALLTYPE * get_headerFooterFont) (ITemplatePrinter3 * This, BSTR * bstrFooter);
	HRESULT(STDMETHODCALLTYPE * getPageMarginTop) (ITemplatePrinter3 * This, IDispatch * pageRule, long pageWidth, long pageHeight, VARIANT * pMargin);
	HRESULT(STDMETHODCALLTYPE * getPageMarginRight) (ITemplatePrinter3 * This, IDispatch * pageRule, long pageWidth, long pageHeight, VARIANT * pMargin);
	HRESULT(STDMETHODCALLTYPE * getPageMarginBottom) (ITemplatePrinter3 * This, IDispatch * pageRule, long pageWidth, long pageHeight, VARIANT * pMargin);
	HRESULT(STDMETHODCALLTYPE * getPageMarginLeft) (ITemplatePrinter3 * This, IDispatch * pageRule, long pageWidth, long pageHeight, VARIANT * pMargin);
	HRESULT(STDMETHODCALLTYPE * getPageMarginTopImportant) (ITemplatePrinter3 * This, IDispatch * pageRule, VARIANT_BOOL * pbImportant);
	HRESULT(STDMETHODCALLTYPE * getPageMarginRightImportant) (ITemplatePrinter3 * This, IDispatch * pageRule, VARIANT_BOOL * pbImportant);
	HRESULT(STDMETHODCALLTYPE * getPageMarginBottomImportant) (ITemplatePrinter3 * This, IDispatch * pageRule, VARIANT_BOOL * pbImportant);
	HRESULT(STDMETHODCALLTYPE * getPageMarginLeftImportant) (ITemplatePrinter3 * This, IDispatch * pageRule, VARIANT_BOOL * pbImportant);
	END_INTERFACE
}  ITemplatePrinter3Vtbl;
interface ITemplatePrinter3
{
	CONST_VTBL struct ITemplatePrinter3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITemplatePrinter3_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITemplatePrinter3_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ITemplatePrinter3_Release(This)( (This)->lpVtbl -> Release(This) )
#define ITemplatePrinter3_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ITemplatePrinter3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ITemplatePrinter3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ITemplatePrinter3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ITemplatePrinter3_startDoc(This,bstrTitle,p)( (This)->lpVtbl -> startDoc(This,bstrTitle,p) )
#define ITemplatePrinter3_stopDoc(This)( (This)->lpVtbl -> stopDoc(This) )
#define ITemplatePrinter3_printBlankPage(This)( (This)->lpVtbl -> printBlankPage(This) )
#define ITemplatePrinter3_printPage(This,pElemDisp)( (This)->lpVtbl -> printPage(This,pElemDisp) )
#define ITemplatePrinter3_ensurePrintDialogDefaults(This,p)( (This)->lpVtbl -> ensurePrintDialogDefaults(This,p) )
#define ITemplatePrinter3_showPrintDialog(This,p)( (This)->lpVtbl -> showPrintDialog(This,p) )
#define ITemplatePrinter3_showPageSetupDialog(This,p)( (This)->lpVtbl -> showPageSetupDialog(This,p) )
#define ITemplatePrinter3_printNonNative(This,pMarkup,p)( (This)->lpVtbl -> printNonNative(This,pMarkup,p) )
#define ITemplatePrinter3_printNonNativeFrames(This,pMarkup,fActiveFrame)( (This)->lpVtbl -> printNonNativeFrames(This,pMarkup,fActiveFrame) )
#define ITemplatePrinter3_put_framesetDocument(This,v)( (This)->lpVtbl -> put_framesetDocument(This,v) )
#define ITemplatePrinter3_get_framesetDocument(This,p)( (This)->lpVtbl -> get_framesetDocument(This,p) )
#define ITemplatePrinter3_put_frameActive(This,v)( (This)->lpVtbl -> put_frameActive(This,v) )
#define ITemplatePrinter3_get_frameActive(This,p)( (This)->lpVtbl -> get_frameActive(This,p) )
#define ITemplatePrinter3_put_frameAsShown(This,v)( (This)->lpVtbl -> put_frameAsShown(This,v) )
#define ITemplatePrinter3_get_frameAsShown(This,p)( (This)->lpVtbl -> get_frameAsShown(This,p) )
#define ITemplatePrinter3_put_selection(This,v)( (This)->lpVtbl -> put_selection(This,v) )
#define ITemplatePrinter3_get_selection(This,p)( (This)->lpVtbl -> get_selection(This,p) )
#define ITemplatePrinter3_put_selectedPages(This,v)( (This)->lpVtbl -> put_selectedPages(This,v) )
#define ITemplatePrinter3_get_selectedPages(This,p)( (This)->lpVtbl -> get_selectedPages(This,p) )
#define ITemplatePrinter3_put_currentPage(This,v)( (This)->lpVtbl -> put_currentPage(This,v) )
#define ITemplatePrinter3_get_currentPage(This,p)( (This)->lpVtbl -> get_currentPage(This,p) )
#define ITemplatePrinter3_put_currentPageAvail(This,v)( (This)->lpVtbl -> put_currentPageAvail(This,v) )
#define ITemplatePrinter3_get_currentPageAvail(This,p)( (This)->lpVtbl -> get_currentPageAvail(This,p) )
#define ITemplatePrinter3_put_collate(This,v)( (This)->lpVtbl -> put_collate(This,v) )
#define ITemplatePrinter3_get_collate(This,p)( (This)->lpVtbl -> get_collate(This,p) )
#define ITemplatePrinter3_get_duplex(This,p)( (This)->lpVtbl -> get_duplex(This,p) )
#define ITemplatePrinter3_put_copies(This,v)( (This)->lpVtbl -> put_copies(This,v) )
#define ITemplatePrinter3_get_copies(This,p)( (This)->lpVtbl -> get_copies(This,p) )
#define ITemplatePrinter3_put_pageFrom(This,v)( (This)->lpVtbl -> put_pageFrom(This,v) )
#define ITemplatePrinter3_get_pageFrom(This,p)( (This)->lpVtbl -> get_pageFrom(This,p) )
#define ITemplatePrinter3_put_pageTo(This,v)( (This)->lpVtbl -> put_pageTo(This,v) )
#define ITemplatePrinter3_get_pageTo(This,p)( (This)->lpVtbl -> get_pageTo(This,p) )
#define ITemplatePrinter3_put_tableOfLinks(This,v)( (This)->lpVtbl -> put_tableOfLinks(This,v) )
#define ITemplatePrinter3_get_tableOfLinks(This,p)( (This)->lpVtbl -> get_tableOfLinks(This,p) )
#define ITemplatePrinter3_put_allLinkedDocuments(This,v)( (This)->lpVtbl -> put_allLinkedDocuments(This,v) )
#define ITemplatePrinter3_get_allLinkedDocuments(This,p)( (This)->lpVtbl -> get_allLinkedDocuments(This,p) )
#define ITemplatePrinter3_put_header(This,bstrHeader)( (This)->lpVtbl -> put_header(This,bstrHeader) )
#define ITemplatePrinter3_get_header(This,bstrHeader)( (This)->lpVtbl -> get_header(This,bstrHeader) )
#define ITemplatePrinter3_put_footer(This,bstrFooter)( (This)->lpVtbl -> put_footer(This,bstrFooter) )
#define ITemplatePrinter3_get_footer(This,bstrFooter)( (This)->lpVtbl -> get_footer(This,bstrFooter) )
#define ITemplatePrinter3_put_marginLeft(This,v)( (This)->lpVtbl -> put_marginLeft(This,v) )
#define ITemplatePrinter3_get_marginLeft(This,p)( (This)->lpVtbl -> get_marginLeft(This,p) )
#define ITemplatePrinter3_put_marginRight(This,v)( (This)->lpVtbl -> put_marginRight(This,v) )
#define ITemplatePrinter3_get_marginRight(This,p)( (This)->lpVtbl -> get_marginRight(This,p) )
#define ITemplatePrinter3_put_marginTop(This,v)( (This)->lpVtbl -> put_marginTop(This,v) )
#define ITemplatePrinter3_get_marginTop(This,p)( (This)->lpVtbl -> get_marginTop(This,p) )
#define ITemplatePrinter3_put_marginBottom(This,v)( (This)->lpVtbl -> put_marginBottom(This,v) )
#define ITemplatePrinter3_get_marginBottom(This,p)( (This)->lpVtbl -> get_marginBottom(This,p) )
#define ITemplatePrinter3_get_pageWidth(This,p)( (This)->lpVtbl -> get_pageWidth(This,p) )
#define ITemplatePrinter3_get_pageHeight(This,p)( (This)->lpVtbl -> get_pageHeight(This,p) )
#define ITemplatePrinter3_get_unprintableLeft(This,p)( (This)->lpVtbl -> get_unprintableLeft(This,p) )
#define ITemplatePrinter3_get_unprintableTop(This,p)( (This)->lpVtbl -> get_unprintableTop(This,p) )
#define ITemplatePrinter3_get_unprintableRight(This,p)( (This)->lpVtbl -> get_unprintableRight(This,p) )
#define ITemplatePrinter3_get_unprintableBottom(This,p)( (This)->lpVtbl -> get_unprintableBottom(This,p) )
#define ITemplatePrinter3_updatePageStatus(This,p)( (This)->lpVtbl -> updatePageStatus(This,p) )
#define ITemplatePrinter3_put_selectionEnabled(This,v)( (This)->lpVtbl -> put_selectionEnabled(This,v) )
#define ITemplatePrinter3_get_selectionEnabled(This,p)( (This)->lpVtbl -> get_selectionEnabled(This,p) )
#define ITemplatePrinter3_put_frameActiveEnabled(This,v)( (This)->lpVtbl -> put_frameActiveEnabled(This,v) )
#define ITemplatePrinter3_get_frameActiveEnabled(This,p)( (This)->lpVtbl -> get_frameActiveEnabled(This,p) )
#define ITemplatePrinter3_put_orientation(This,v)( (This)->lpVtbl -> put_orientation(This,v) )
#define ITemplatePrinter3_get_orientation(This,p)( (This)->lpVtbl -> get_orientation(This,p) )
#define ITemplatePrinter3_put_usePrinterCopyCollate(This,v)( (This)->lpVtbl -> put_usePrinterCopyCollate(This,v) )
#define ITemplatePrinter3_get_usePrinterCopyCollate(This,p)( (This)->lpVtbl -> get_usePrinterCopyCollate(This,p) )
#define ITemplatePrinter3_deviceSupports(This,bstrProperty,pvar)( (This)->lpVtbl -> deviceSupports(This,bstrProperty,pvar) )
#define ITemplatePrinter3_put_headerFooterFont(This,bstrFooter)( (This)->lpVtbl -> put_headerFooterFont(This,bstrFooter) )
#define ITemplatePrinter3_get_headerFooterFont(This,bstrFooter)( (This)->lpVtbl -> get_headerFooterFont(This,bstrFooter) )
#define ITemplatePrinter3_getPageMarginTop(This,pageRule,pageWidth,pageHeight,pMargin)( (This)->lpVtbl -> getPageMarginTop(This,pageRule,pageWidth,pageHeight,pMargin) )
#define ITemplatePrinter3_getPageMarginRight(This,pageRule,pageWidth,pageHeight,pMargin)( (This)->lpVtbl -> getPageMarginRight(This,pageRule,pageWidth,pageHeight,pMargin) )
#define ITemplatePrinter3_getPageMarginBottom(This,pageRule,pageWidth,pageHeight,pMargin)( (This)->lpVtbl -> getPageMarginBottom(This,pageRule,pageWidth,pageHeight,pMargin) )
#define ITemplatePrinter3_getPageMarginLeft(This,pageRule,pageWidth,pageHeight,pMargin)( (This)->lpVtbl -> getPageMarginLeft(This,pageRule,pageWidth,pageHeight,pMargin) )
#define ITemplatePrinter3_getPageMarginTopImportant(This,pageRule,pbImportant)( (This)->lpVtbl -> getPageMarginTopImportant(This,pageRule,pbImportant) )
#define ITemplatePrinter3_getPageMarginRightImportant(This,pageRule,pbImportant)( (This)->lpVtbl -> getPageMarginRightImportant(This,pageRule,pbImportant) )
#define ITemplatePrinter3_getPageMarginBottomImportant(This,pageRule,pbImportant)( (This)->lpVtbl -> getPageMarginBottomImportant(This,pageRule,pbImportant) )
#define ITemplatePrinter3_getPageMarginLeftImportant(This,pageRule,pbImportant)( (This)->lpVtbl -> getPageMarginLeftImportant(This,pageRule,pbImportant) )
#endif
#endif
#ifndef __IHeaderFooter_INTERFACE_DEFINED__
#define __IHeaderFooter_INTERFACE_DEFINED__
extern const IID IID_IHeaderFooter;
typedef struct IHeaderFooterVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IHeaderFooter * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IHeaderFooter * This);
	ULONG(STDMETHODCALLTYPE * Release) (IHeaderFooter * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IHeaderFooter * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IHeaderFooter * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IHeaderFooter * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IHeaderFooter * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_htmlHead) (IHeaderFooter * This, BSTR * p);
	HRESULT(STDMETHODCALLTYPE * get_htmlFoot) (IHeaderFooter * This, BSTR * p);
	HRESULT(STDMETHODCALLTYPE * put_textHead) (IHeaderFooter * This, BSTR v);
	HRESULT(STDMETHODCALLTYPE * get_textHead) (IHeaderFooter * This, BSTR * p);
	HRESULT(STDMETHODCALLTYPE * put_textFoot) (IHeaderFooter * This, BSTR v);
	HRESULT(STDMETHODCALLTYPE * get_textFoot) (IHeaderFooter * This, BSTR * p);
	HRESULT(STDMETHODCALLTYPE * put_page) (IHeaderFooter * This, DWORD v);
	HRESULT(STDMETHODCALLTYPE * get_page) (IHeaderFooter * This, DWORD * p);
	HRESULT(STDMETHODCALLTYPE * put_pageTotal) (IHeaderFooter * This, DWORD v);
	HRESULT(STDMETHODCALLTYPE * get_pageTotal) (IHeaderFooter * This, DWORD * p);
	HRESULT(STDMETHODCALLTYPE * put_URL) (IHeaderFooter * This, BSTR v);
	HRESULT(STDMETHODCALLTYPE * get_URL) (IHeaderFooter * This, BSTR * p);
	HRESULT(STDMETHODCALLTYPE * put_title) (IHeaderFooter * This, BSTR v);
	HRESULT(STDMETHODCALLTYPE * get_title) (IHeaderFooter * This, BSTR * p);
	HRESULT(STDMETHODCALLTYPE * put_dateShort) (IHeaderFooter * This, BSTR v);
	HRESULT(STDMETHODCALLTYPE * get_dateShort) (IHeaderFooter * This, BSTR * p);
	HRESULT(STDMETHODCALLTYPE * put_dateLong) (IHeaderFooter * This, BSTR v);
	HRESULT(STDMETHODCALLTYPE * get_dateLong) (IHeaderFooter * This, BSTR * p);
	HRESULT(STDMETHODCALLTYPE * put_timeShort) (IHeaderFooter * This, BSTR v);
	HRESULT(STDMETHODCALLTYPE * get_timeShort) (IHeaderFooter * This, BSTR * p);
	HRESULT(STDMETHODCALLTYPE * put_timeLong) (IHeaderFooter * This, BSTR v);
	HRESULT(STDMETHODCALLTYPE * get_timeLong) (IHeaderFooter * This, BSTR * p);
	END_INTERFACE
}  IHeaderFooterVtbl;
interface IHeaderFooter
{
	CONST_VTBL struct IHeaderFooterVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IHeaderFooter_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IHeaderFooter_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IHeaderFooter_Release(This)( (This)->lpVtbl -> Release(This) )
#define IHeaderFooter_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IHeaderFooter_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IHeaderFooter_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IHeaderFooter_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IHeaderFooter_get_htmlHead(This,p)( (This)->lpVtbl -> get_htmlHead(This,p) )
#define IHeaderFooter_get_htmlFoot(This,p)( (This)->lpVtbl -> get_htmlFoot(This,p) )
#define IHeaderFooter_put_textHead(This,v)( (This)->lpVtbl -> put_textHead(This,v) )
#define IHeaderFooter_get_textHead(This,p)( (This)->lpVtbl -> get_textHead(This,p) )
#define IHeaderFooter_put_textFoot(This,v)( (This)->lpVtbl -> put_textFoot(This,v) )
#define IHeaderFooter_get_textFoot(This,p)( (This)->lpVtbl -> get_textFoot(This,p) )
#define IHeaderFooter_put_page(This,v)( (This)->lpVtbl -> put_page(This,v) )
#define IHeaderFooter_get_page(This,p)( (This)->lpVtbl -> get_page(This,p) )
#define IHeaderFooter_put_pageTotal(This,v)( (This)->lpVtbl -> put_pageTotal(This,v) )
#define IHeaderFooter_get_pageTotal(This,p)( (This)->lpVtbl -> get_pageTotal(This,p) )
#define IHeaderFooter_put_URL(This,v)( (This)->lpVtbl -> put_URL(This,v) )
#define IHeaderFooter_get_URL(This,p)( (This)->lpVtbl -> get_URL(This,p) )
#define IHeaderFooter_put_title(This,v)( (This)->lpVtbl -> put_title(This,v) )
#define IHeaderFooter_get_title(This,p)( (This)->lpVtbl -> get_title(This,p) )
#define IHeaderFooter_put_dateShort(This,v)( (This)->lpVtbl -> put_dateShort(This,v) )
#define IHeaderFooter_get_dateShort(This,p)( (This)->lpVtbl -> get_dateShort(This,p) )
#define IHeaderFooter_put_dateLong(This,v)( (This)->lpVtbl -> put_dateLong(This,v) )
#define IHeaderFooter_get_dateLong(This,p)( (This)->lpVtbl -> get_dateLong(This,p) )
#define IHeaderFooter_put_timeShort(This,v)( (This)->lpVtbl -> put_timeShort(This,v) )
#define IHeaderFooter_get_timeShort(This,p)( (This)->lpVtbl -> get_timeShort(This,p) )
#define IHeaderFooter_put_timeLong(This,v)( (This)->lpVtbl -> put_timeLong(This,v) )
#define IHeaderFooter_get_timeLong(This,p)( (This)->lpVtbl -> get_timeLong(This,p) )
#endif
#endif
#ifndef __IHeaderFooter2_INTERFACE_DEFINED__
#define __IHeaderFooter2_INTERFACE_DEFINED__
extern const IID IID_IHeaderFooter2;
typedef struct IHeaderFooter2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IHeaderFooter2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IHeaderFooter2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IHeaderFooter2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IHeaderFooter2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IHeaderFooter2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IHeaderFooter2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IHeaderFooter2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_htmlHead) (IHeaderFooter2 * This, BSTR * p);
	HRESULT(STDMETHODCALLTYPE * get_htmlFoot) (IHeaderFooter2 * This, BSTR * p);
	HRESULT(STDMETHODCALLTYPE * put_textHead) (IHeaderFooter2 * This, BSTR v);
	HRESULT(STDMETHODCALLTYPE * get_textHead) (IHeaderFooter2 * This, BSTR * p);
	HRESULT(STDMETHODCALLTYPE * put_textFoot) (IHeaderFooter2 * This, BSTR v);
	HRESULT(STDMETHODCALLTYPE * get_textFoot) (IHeaderFooter2 * This, BSTR * p);
	HRESULT(STDMETHODCALLTYPE * put_page) (IHeaderFooter2 * This, DWORD v);
	HRESULT(STDMETHODCALLTYPE * get_page) (IHeaderFooter2 * This, DWORD * p);
	HRESULT(STDMETHODCALLTYPE * put_pageTotal) (IHeaderFooter2 * This, DWORD v);
	HRESULT(STDMETHODCALLTYPE * get_pageTotal) (IHeaderFooter2 * This, DWORD * p);
	HRESULT(STDMETHODCALLTYPE * put_URL) (IHeaderFooter2 * This, BSTR v);
	HRESULT(STDMETHODCALLTYPE * get_URL) (IHeaderFooter2 * This, BSTR * p);
	HRESULT(STDMETHODCALLTYPE * put_title) (IHeaderFooter2 * This, BSTR v);
	HRESULT(STDMETHODCALLTYPE * get_title) (IHeaderFooter2 * This, BSTR * p);
	HRESULT(STDMETHODCALLTYPE * put_dateShort) (IHeaderFooter2 * This, BSTR v);
	HRESULT(STDMETHODCALLTYPE * get_dateShort) (IHeaderFooter2 * This, BSTR * p);
	HRESULT(STDMETHODCALLTYPE * put_dateLong) (IHeaderFooter2 * This, BSTR v);
	HRESULT(STDMETHODCALLTYPE * get_dateLong) (IHeaderFooter2 * This, BSTR * p);
	HRESULT(STDMETHODCALLTYPE * put_timeShort) (IHeaderFooter2 * This, BSTR v);
	HRESULT(STDMETHODCALLTYPE * get_timeShort) (IHeaderFooter2 * This, BSTR * p);
	HRESULT(STDMETHODCALLTYPE * put_timeLong) (IHeaderFooter2 * This, BSTR v);
	HRESULT(STDMETHODCALLTYPE * get_timeLong) (IHeaderFooter2 * This, BSTR * p);
	HRESULT(STDMETHODCALLTYPE * put_font) (IHeaderFooter2 * This, BSTR v);
	HRESULT(STDMETHODCALLTYPE * get_font) (IHeaderFooter2 * This, BSTR * p);
	END_INTERFACE
}  IHeaderFooter2Vtbl;
interface IHeaderFooter2
{
	CONST_VTBL struct IHeaderFooter2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IHeaderFooter2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IHeaderFooter2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IHeaderFooter2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IHeaderFooter2_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IHeaderFooter2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IHeaderFooter2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IHeaderFooter2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IHeaderFooter2_get_htmlHead(This,p)( (This)->lpVtbl -> get_htmlHead(This,p) )
#define IHeaderFooter2_get_htmlFoot(This,p)( (This)->lpVtbl -> get_htmlFoot(This,p) )
#define IHeaderFooter2_put_textHead(This,v)( (This)->lpVtbl -> put_textHead(This,v) )
#define IHeaderFooter2_get_textHead(This,p)( (This)->lpVtbl -> get_textHead(This,p) )
#define IHeaderFooter2_put_textFoot(This,v)( (This)->lpVtbl -> put_textFoot(This,v) )
#define IHeaderFooter2_get_textFoot(This,p)( (This)->lpVtbl -> get_textFoot(This,p) )
#define IHeaderFooter2_put_page(This,v)( (This)->lpVtbl -> put_page(This,v) )
#define IHeaderFooter2_get_page(This,p)( (This)->lpVtbl -> get_page(This,p) )
#define IHeaderFooter2_put_pageTotal(This,v)( (This)->lpVtbl -> put_pageTotal(This,v) )
#define IHeaderFooter2_get_pageTotal(This,p)( (This)->lpVtbl -> get_pageTotal(This,p) )
#define IHeaderFooter2_put_URL(This,v)( (This)->lpVtbl -> put_URL(This,v) )
#define IHeaderFooter2_get_URL(This,p)( (This)->lpVtbl -> get_URL(This,p) )
#define IHeaderFooter2_put_title(This,v)( (This)->lpVtbl -> put_title(This,v) )
#define IHeaderFooter2_get_title(This,p)( (This)->lpVtbl -> get_title(This,p) )
#define IHeaderFooter2_put_dateShort(This,v)( (This)->lpVtbl -> put_dateShort(This,v) )
#define IHeaderFooter2_get_dateShort(This,p)( (This)->lpVtbl -> get_dateShort(This,p) )
#define IHeaderFooter2_put_dateLong(This,v)( (This)->lpVtbl -> put_dateLong(This,v) )
#define IHeaderFooter2_get_dateLong(This,p)( (This)->lpVtbl -> get_dateLong(This,p) )
#define IHeaderFooter2_put_timeShort(This,v)( (This)->lpVtbl -> put_timeShort(This,v) )
#define IHeaderFooter2_get_timeShort(This,p)( (This)->lpVtbl -> get_timeShort(This,p) )
#define IHeaderFooter2_put_timeLong(This,v)( (This)->lpVtbl -> put_timeLong(This,v) )
#define IHeaderFooter2_get_timeLong(This,p)( (This)->lpVtbl -> get_timeLong(This,p) )
#define IHeaderFooter2_put_font(This,v)( (This)->lpVtbl -> put_font(This,v) )
#define IHeaderFooter2_get_font(This,p)( (This)->lpVtbl -> get_font(This,p) )
#endif
#endif
#ifndef __IEXTagLib_LIBRARY_DEFINED__
#define __IEXTagLib_LIBRARY_DEFINED__
extern const IID LIBID_IEXTagLib;
extern const CLSID CLSID_PeerFactory;
extern const CLSID CLSID_ClientCaps;
extern const CLSID CLSID_IntelliForms;
extern const CLSID CLSID_HomePage;
extern const CLSID CLSID_CPersistUserData;
extern const CLSID CLSID_CPersistDataPeer;
extern const CLSID CLSID_CPersistShortcut;
extern const CLSID CLSID_CPersistHistory;
extern const CLSID CLSID_CPersistSnapshot;
extern const CLSID CLSID_CDownloadBehavior;
extern const CLSID CLSID_wfolders;
extern const CLSID CLSID_AnchorClick;
extern const CLSID CLSID_CLayoutRect;
extern const CLSID CLSID_CDeviceRect;
extern const CLSID CLSID_CTemplatePrinter;
extern const CLSID CLSID_CHeaderFooter;
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER VARIANT_UserSize(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree(unsigned long *, VARIANT *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
unsigned long __RPC_USER VARIANT_UserSize64(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal64(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree64(unsigned long *, VARIANT *);
#endif
