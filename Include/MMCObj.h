/*+@@file@@----------------------------------------------------------------*//*!
 \file		MMCObj.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug  7 22:15:35 2016
 \date		Modified on Sun Aug  7 22:15:35 2016
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
#ifndef __mmcobj_h__
#define __mmcobj_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ISnapinProperties_FWD_DEFINED__
#define __ISnapinProperties_FWD_DEFINED__
typedef interface ISnapinProperties ISnapinProperties;
#endif
#ifndef __ISnapinPropertiesCallback_FWD_DEFINED__
#define __ISnapinPropertiesCallback_FWD_DEFINED__
typedef interface ISnapinPropertiesCallback ISnapinPropertiesCallback;
#endif
#ifndef ___Application_FWD_DEFINED__
#define ___Application_FWD_DEFINED__
typedef interface _Application _Application;
#endif
#ifndef ___AppEvents_FWD_DEFINED__
#define ___AppEvents_FWD_DEFINED__
typedef interface _AppEvents _AppEvents;
#endif
#ifndef __AppEvents_FWD_DEFINED__
#define __AppEvents_FWD_DEFINED__
typedef interface AppEvents AppEvents;
#endif
#ifndef __Application_FWD_DEFINED__
#define __Application_FWD_DEFINED__
typedef struct Application Application;
#endif
#ifndef ___EventConnector_FWD_DEFINED__
#define ___EventConnector_FWD_DEFINED__
typedef interface _EventConnector _EventConnector;
#endif
#ifndef __AppEventsDHTMLConnector_FWD_DEFINED__
#define __AppEventsDHTMLConnector_FWD_DEFINED__
typedef struct AppEventsDHTMLConnector AppEventsDHTMLConnector;
#endif
#ifndef __Frame_FWD_DEFINED__
#define __Frame_FWD_DEFINED__
typedef interface Frame Frame;
#endif
#ifndef __Node_FWD_DEFINED__
#define __Node_FWD_DEFINED__
typedef interface Node Node;
#endif
#ifndef __ScopeNamespace_FWD_DEFINED__
#define __ScopeNamespace_FWD_DEFINED__
typedef interface ScopeNamespace ScopeNamespace;
#endif
#ifndef __Document_FWD_DEFINED__
#define __Document_FWD_DEFINED__
typedef interface Document Document;
#endif
#ifndef __SnapIn_FWD_DEFINED__
#define __SnapIn_FWD_DEFINED__
typedef interface SnapIn SnapIn;
#endif
#ifndef __SnapIns_FWD_DEFINED__
#define __SnapIns_FWD_DEFINED__
typedef interface SnapIns SnapIns;
#endif
#ifndef __Extension_FWD_DEFINED__
#define __Extension_FWD_DEFINED__
typedef interface Extension Extension;
#endif
#ifndef __Extensions_FWD_DEFINED__
#define __Extensions_FWD_DEFINED__
typedef interface Extensions Extensions;
#endif
#ifndef __Columns_FWD_DEFINED__
#define __Columns_FWD_DEFINED__
typedef interface Columns Columns;
#endif
#ifndef __Column_FWD_DEFINED__
#define __Column_FWD_DEFINED__
typedef interface Column Column;
#endif
#ifndef __Views_FWD_DEFINED__
#define __Views_FWD_DEFINED__
typedef interface Views Views;
#endif
#ifndef __View_FWD_DEFINED__
#define __View_FWD_DEFINED__
typedef interface View View;
#endif
#ifndef __Nodes_FWD_DEFINED__
#define __Nodes_FWD_DEFINED__
typedef interface Nodes Nodes;
#endif
#ifndef __ContextMenu_FWD_DEFINED__
#define __ContextMenu_FWD_DEFINED__
typedef interface ContextMenu ContextMenu;
#endif
#ifndef __MenuItem_FWD_DEFINED__
#define __MenuItem_FWD_DEFINED__
typedef interface MenuItem MenuItem;
#endif
#ifndef __Properties_FWD_DEFINED__
#define __Properties_FWD_DEFINED__
typedef interface Properties Properties;
#endif
#ifndef __Property_FWD_DEFINED__
#define __Property_FWD_DEFINED__
typedef interface Property Property;
#endif
#include <oaidl.h>
#ifndef MMC_VER
#define MMC_VER 0x0200
#endif
#if (MMC_VER >= 0x0200)
typedef _Application *PAPPLICATION;
typedef _Application **PPAPPLICATION;
typedef Column *PCOLUMN;
typedef Column **PPCOLUMN;
typedef Columns *PCOLUMNS;
typedef Columns **PPCOLUMNS;
typedef ContextMenu *PCONTEXTMENU;
typedef ContextMenu **PPCONTEXTMENU;
typedef Document *PDOCUMENT;
typedef Document **PPDOCUMENT;
typedef Frame *PFRAME;
typedef Frame **PPFRAME;
typedef MenuItem *PMENUITEM;
typedef MenuItem **PPMENUITEM;
typedef Node *PNODE;
typedef Node **PPNODE;
typedef Nodes *PNODES;
typedef Nodes **PPNODES;
typedef Properties *PPROPERTIES;
typedef Properties **PPPROPERTIES;
typedef Property *PPROPERTY;
typedef Property **PPPROPERTY;
typedef ScopeNamespace *PSCOPENAMESPACE;
typedef ScopeNamespace **PPSCOPENAMESPACE;
typedef SnapIn *PSNAPIN;
typedef SnapIn **PPSNAPIN;
typedef SnapIns *PSNAPINS;
typedef SnapIns **PPSNAPINS;
typedef Extension *PEXTENSION;
typedef Extension **PPEXTENSION;
typedef Extensions *PEXTENSIONS;
typedef Extensions **PPEXTENSIONS;
typedef View *PVIEW;
typedef View **PPVIEW;
typedef Views *PVIEWS;
typedef Views **PPVIEWS;
typedef ISnapinProperties *LPSNAPINPROPERTIES;
typedef ISnapinPropertiesCallback *LPSNAPINPROPERTIESCALLBACK;
typedef BOOL *PBOOL;
typedef int *PINT;
typedef BSTR *PBSTR;
typedef VARIANT *PVARIANT;
typedef long *PLONG;
typedef IDispatch *PDISPATCH;
typedef IDispatch **PPDISPATCH;
extern RPC_IF_HANDLE __MIDL_itf_mmcobj_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mmcobj_0000_0000_v0_0_s_ifspec;
#ifndef __ISnapinProperties_INTERFACE_DEFINED__
#define __ISnapinProperties_INTERFACE_DEFINED__
typedef enum _MMC_PROPERTY_ACTION
{
	MMC_PROPACT_DELETING = 1,
	MMC_PROPACT_CHANGING = (MMC_PROPACT_DELETING + 1),
	MMC_PROPACT_INITIALIZED = (MMC_PROPACT_CHANGING + 1)
} MMC_PROPERTY_ACTION;
typedef struct _MMC_SNAPIN_PROPERTY
{
	LPCOLESTR pszPropName;
	VARIANT varValue;
	MMC_PROPERTY_ACTION eAction;
} MMC_SNAPIN_PROPERTY;
extern const IID IID_ISnapinProperties;
typedef struct ISnapinPropertiesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISnapinProperties * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISnapinProperties * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISnapinProperties * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (ISnapinProperties * This, Properties * pProperties);
	HRESULT(STDMETHODCALLTYPE * QueryPropertyNames) (ISnapinProperties * This, ISnapinPropertiesCallback * pCallback);
	HRESULT(STDMETHODCALLTYPE * PropertiesChanged) (ISnapinProperties * This, long cProperties, MMC_SNAPIN_PROPERTY * pProperties);
	END_INTERFACE
}  ISnapinPropertiesVtbl;
interface ISnapinProperties
{
	CONST_VTBL struct ISnapinPropertiesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISnapinProperties_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISnapinProperties_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISnapinProperties_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISnapinProperties_Initialize(This,pProperties) ( (This)->lpVtbl -> Initialize(This,pProperties) )
#define ISnapinProperties_QueryPropertyNames(This,pCallback) ( (This)->lpVtbl -> QueryPropertyNames(This,pCallback) )
#define ISnapinProperties_PropertiesChanged(This,cProperties,pProperties) ( (This)->lpVtbl -> PropertiesChanged(This,cProperties,pProperties) )
#endif
#endif
#ifndef __ISnapinPropertiesCallback_INTERFACE_DEFINED__
#define __ISnapinPropertiesCallback_INTERFACE_DEFINED__
#define	MMC_PROP_CHANGEAFFECTSUI	( 0x1 )
#define	MMC_PROP_MODIFIABLE	( 0x2 )
#define	MMC_PROP_REMOVABLE	( 0x4 )
#define	MMC_PROP_PERSIST	( 0x8 )
extern const IID IID_ISnapinPropertiesCallback;
typedef struct ISnapinPropertiesCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISnapinPropertiesCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISnapinPropertiesCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISnapinPropertiesCallback * This);
	HRESULT(STDMETHODCALLTYPE * AddPropertyName) (ISnapinPropertiesCallback * This, LPCOLESTR pszPropName, DWORD dwFlags);
	END_INTERFACE
}  ISnapinPropertiesCallbackVtbl;
interface ISnapinPropertiesCallback
{
	CONST_VTBL struct ISnapinPropertiesCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISnapinPropertiesCallback_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISnapinPropertiesCallback_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISnapinPropertiesCallback_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISnapinPropertiesCallback_AddPropertyName(This,pszPropName,dwFlags) ( (This)->lpVtbl -> AddPropertyName(This,pszPropName,dwFlags) )
#endif
#endif
#ifndef __MMC20_LIBRARY_DEFINED__
#define __MMC20_LIBRARY_DEFINED__
typedef enum DocumentMode
{
	DocumentMode_Author = 0,
	DocumentMode_User = (DocumentMode_Author + 1),
	DocumentMode_User_MDI = (DocumentMode_User + 1),
	DocumentMode_User_SDI = (DocumentMode_User_MDI + 1)
} _DocumentMode;
typedef enum DocumentMode DOCUMENTMODE;
typedef enum DocumentMode *PDOCUMENTMODE;
typedef enum DocumentMode **PPDOCUMENTMODE;
typedef enum ListViewMode
{
	ListMode_Small_Icons = 0,
	ListMode_Large_Icons = (ListMode_Small_Icons + 1),
	ListMode_List = (ListMode_Large_Icons + 1),
	ListMode_Detail = (ListMode_List + 1),
	ListMode_Filtered = (ListMode_Detail + 1)
} _ListViewMode;
typedef enum ListViewMode LISTVIEWMODE;
typedef enum ListViewMode *PLISTVIEWMODE;
typedef enum ListViewMode **PPLISTVIEWMODE;
typedef enum ViewOptions
{
	ViewOption_Default = 0,
	ViewOption_ScopeTreeHidden = 0x1,
	ViewOption_NoToolBars = 0x2,
	ViewOption_NotPersistable = 0x4,
	ViewOption_ActionPaneHidden = 0x8
} _ViewOptions;
typedef enum ViewOptions VIEWOPTIONS;
typedef enum ViewOptions *PVIEWOPTIONS;
typedef enum ViewOptions **PPVIEWOPTIONS;
typedef enum ExportListOptions
{
	ExportListOptions_Default = 0,
	ExportListOptions_Unicode = 0x1,
	ExportListOptions_TabDelimited = 0x2,
	ExportListOptions_SelectedItemsOnly = 0x4
} _ExportListOptions;
typedef enum ExportListOptions EXPORTLISTOPTIONS;
extern const IID LIBID_MMC20;
#ifndef ___Application_INTERFACE_DEFINED__
#define ___Application_INTERFACE_DEFINED__
extern const IID IID__Application;
typedef struct _ApplicationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (_Application * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (_Application * This);
	ULONG(STDMETHODCALLTYPE * Release) (_Application * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (_Application * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (_Application * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (_Application * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (_Application * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	void (STDMETHODCALLTYPE * Help) (_Application * This);
	void (STDMETHODCALLTYPE * Quit) (_Application * This);
	HRESULT(STDMETHODCALLTYPE * get_Document) (_Application * This, PPDOCUMENT Document);
	HRESULT(STDMETHODCALLTYPE * Load) (_Application * This, BSTR Filename);
	HRESULT(STDMETHODCALLTYPE * get_Frame) (_Application * This, PPFRAME Frame);
	HRESULT(STDMETHODCALLTYPE * get_Visible) (_Application * This, PBOOL Visible);
	HRESULT(STDMETHODCALLTYPE * Show) (_Application * This);
	HRESULT(STDMETHODCALLTYPE * Hide) (_Application * This);
	HRESULT(STDMETHODCALLTYPE * get_UserControl) (_Application * This, PBOOL UserControl);
	HRESULT(STDMETHODCALLTYPE * put_UserControl) (_Application * This, BOOL UserControl);
	HRESULT(STDMETHODCALLTYPE * get_VersionMajor) (_Application * This, PLONG VersionMajor);
	HRESULT(STDMETHODCALLTYPE * get_VersionMinor) (_Application * This, PLONG VersionMinor);
	END_INTERFACE
}  _ApplicationVtbl;
interface _Application
{
	CONST_VTBL struct _ApplicationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define _Application_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define _Application_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define _Application_Release(This) ( (This)->lpVtbl -> Release(This) )
#define _Application_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define _Application_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define _Application_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define _Application_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define _Application_Help(This) ( (This)->lpVtbl -> Help(This) )
#define _Application_Quit(This) ( (This)->lpVtbl -> Quit(This) )
#define _Application_get_Document(This,Document) ( (This)->lpVtbl -> get_Document(This,Document) )
#define _Application_Load(This,Filename) ( (This)->lpVtbl -> Load(This,Filename) )
#define _Application_get_Frame(This,Frame) ( (This)->lpVtbl -> get_Frame(This,Frame) )
#define _Application_get_Visible(This,Visible) ( (This)->lpVtbl -> get_Visible(This,Visible) )
#define _Application_Show(This) ( (This)->lpVtbl -> Show(This) )
#define _Application_Hide(This) ( (This)->lpVtbl -> Hide(This) )
#define _Application_get_UserControl(This,UserControl) ( (This)->lpVtbl -> get_UserControl(This,UserControl) )
#define _Application_put_UserControl(This,UserControl) ( (This)->lpVtbl -> put_UserControl(This,UserControl) )
#define _Application_get_VersionMajor(This,VersionMajor) ( (This)->lpVtbl -> get_VersionMajor(This,VersionMajor) )
#define _Application_get_VersionMinor(This,VersionMinor) ( (This)->lpVtbl -> get_VersionMinor(This,VersionMinor) )
#endif
#endif
#ifndef ___AppEvents_INTERFACE_DEFINED__
#define ___AppEvents_INTERFACE_DEFINED__
extern const IID IID__AppEvents;
typedef struct _AppEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (_AppEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (_AppEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (_AppEvents * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (_AppEvents * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (_AppEvents * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (_AppEvents * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (_AppEvents * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * OnQuit) (_AppEvents * This, PAPPLICATION Application);
	HRESULT(STDMETHODCALLTYPE * OnDocumentOpen) (_AppEvents * This, PDOCUMENT Document, BOOL New);
	HRESULT(STDMETHODCALLTYPE * OnDocumentClose) (_AppEvents * This, PDOCUMENT Document);
	HRESULT(STDMETHODCALLTYPE * OnSnapInAdded) (_AppEvents * This, PDOCUMENT Document, PSNAPIN SnapIn);
	HRESULT(STDMETHODCALLTYPE * OnSnapInRemoved) (_AppEvents * This, PDOCUMENT Document, PSNAPIN SnapIn);
	HRESULT(STDMETHODCALLTYPE * OnNewView) (_AppEvents * This, PVIEW View);
	HRESULT(STDMETHODCALLTYPE * OnViewClose) (_AppEvents * This, PVIEW View);
	HRESULT(STDMETHODCALLTYPE * OnViewChange) (_AppEvents * This, PVIEW View, PNODE NewOwnerNode);
	HRESULT(STDMETHODCALLTYPE * OnSelectionChange) (_AppEvents * This, PVIEW View, PNODES NewNodes);
	HRESULT(STDMETHODCALLTYPE * OnContextMenuExecuted) (_AppEvents * This, PMENUITEM MenuItem);
	HRESULT(STDMETHODCALLTYPE * OnToolbarButtonClicked) (_AppEvents * This);
	HRESULT(STDMETHODCALLTYPE * OnListUpdated) (_AppEvents * This, PVIEW View);
	END_INTERFACE
}  _AppEventsVtbl;
interface _AppEvents
{
	CONST_VTBL struct _AppEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define _AppEvents_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define _AppEvents_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define _AppEvents_Release(This) ( (This)->lpVtbl -> Release(This) )
#define _AppEvents_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define _AppEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define _AppEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define _AppEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define _AppEvents_OnQuit(This,Application) ( (This)->lpVtbl -> OnQuit(This,Application) )
#define _AppEvents_OnDocumentOpen(This,Document,New) ( (This)->lpVtbl -> OnDocumentOpen(This,Document,New) )
#define _AppEvents_OnDocumentClose(This,Document) ( (This)->lpVtbl -> OnDocumentClose(This,Document) )
#define _AppEvents_OnSnapInAdded(This,Document,SnapIn) ( (This)->lpVtbl -> OnSnapInAdded(This,Document,SnapIn) )
#define _AppEvents_OnSnapInRemoved(This,Document,SnapIn) ( (This)->lpVtbl -> OnSnapInRemoved(This,Document,SnapIn) )
#define _AppEvents_OnNewView(This,View) ( (This)->lpVtbl -> OnNewView(This,View) )
#define _AppEvents_OnViewClose(This,View) ( (This)->lpVtbl -> OnViewClose(This,View) )
#define _AppEvents_OnViewChange(This,View,NewOwnerNode) ( (This)->lpVtbl -> OnViewChange(This,View,NewOwnerNode) )
#define _AppEvents_OnSelectionChange(This,View,NewNodes) ( (This)->lpVtbl -> OnSelectionChange(This,View,NewNodes) )
#define _AppEvents_OnContextMenuExecuted(This,MenuItem) ( (This)->lpVtbl -> OnContextMenuExecuted(This,MenuItem) )
#define _AppEvents_OnToolbarButtonClicked(This) ( (This)->lpVtbl -> OnToolbarButtonClicked(This) )
#define _AppEvents_OnListUpdated(This,View) ( (This)->lpVtbl -> OnListUpdated(This,View) )
#endif
#endif
#ifndef __AppEvents_DISPINTERFACE_DEFINED__
#define __AppEvents_DISPINTERFACE_DEFINED__
extern const IID DIID_AppEvents;
typedef struct AppEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (AppEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (AppEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (AppEvents * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (AppEvents * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (AppEvents * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (AppEvents * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (AppEvents * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	END_INTERFACE
}  AppEventsVtbl;
interface AppEvents
{
	CONST_VTBL struct AppEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define AppEvents_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define AppEvents_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define AppEvents_Release(This) ( (This)->lpVtbl -> Release(This) )
#define AppEvents_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define AppEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define AppEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define AppEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#endif
#endif
extern const CLSID CLSID_Application;
#ifndef ___EventConnector_INTERFACE_DEFINED__
#define ___EventConnector_INTERFACE_DEFINED__
extern const IID IID__EventConnector;
typedef struct _EventConnectorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (_EventConnector * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (_EventConnector * This);
	ULONG(STDMETHODCALLTYPE * Release) (_EventConnector * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (_EventConnector * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (_EventConnector * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (_EventConnector * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (_EventConnector * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * ConnectTo) (_EventConnector * This, PAPPLICATION Application);
	HRESULT(STDMETHODCALLTYPE * Disconnect) (_EventConnector * This);
	END_INTERFACE
}  _EventConnectorVtbl;
interface _EventConnector
{
	CONST_VTBL struct _EventConnectorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define _EventConnector_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define _EventConnector_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define _EventConnector_Release(This) ( (This)->lpVtbl -> Release(This) )
#define _EventConnector_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define _EventConnector_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define _EventConnector_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define _EventConnector_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define _EventConnector_ConnectTo(This,Application) ( (This)->lpVtbl -> ConnectTo(This,Application) )
#define _EventConnector_Disconnect(This) ( (This)->lpVtbl -> Disconnect(This) )
#endif
#endif
extern const CLSID CLSID_AppEventsDHTMLConnector;
#ifndef __Frame_INTERFACE_DEFINED__
#define __Frame_INTERFACE_DEFINED__
extern const IID IID_Frame;
typedef struct FrameVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (Frame * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (Frame * This);
	ULONG(STDMETHODCALLTYPE * Release) (Frame * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (Frame * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (Frame * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (Frame * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (Frame * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Maximize) (Frame * This);
	HRESULT(STDMETHODCALLTYPE * Minimize) (Frame * This);
	HRESULT(STDMETHODCALLTYPE * Restore) (Frame * This);
	HRESULT(STDMETHODCALLTYPE * get_Top) (Frame * This, PINT Top);
	HRESULT(STDMETHODCALLTYPE * put_Top) (Frame * This, int top);
	HRESULT(STDMETHODCALLTYPE * get_Bottom) (Frame * This, PINT Bottom);
	HRESULT(STDMETHODCALLTYPE * put_Bottom) (Frame * This, int bottom);
	HRESULT(STDMETHODCALLTYPE * get_Left) (Frame * This, PINT Left);
	HRESULT(STDMETHODCALLTYPE * put_Left) (Frame * This, int left);
	HRESULT(STDMETHODCALLTYPE * get_Right) (Frame * This, PINT Right);
	HRESULT(STDMETHODCALLTYPE * put_Right) (Frame * This, int right);
	END_INTERFACE
}  FrameVtbl;
interface Frame
{
	CONST_VTBL struct FrameVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define Frame_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define Frame_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define Frame_Release(This) ( (This)->lpVtbl -> Release(This) )
#define Frame_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define Frame_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define Frame_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define Frame_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define Frame_Maximize(This) ( (This)->lpVtbl -> Maximize(This) )
#define Frame_Minimize(This) ( (This)->lpVtbl -> Minimize(This) )
#define Frame_Restore(This) ( (This)->lpVtbl -> Restore(This) )
#define Frame_get_Top(This,Top) ( (This)->lpVtbl -> get_Top(This,Top) )
#define Frame_put_Top(This,top) ( (This)->lpVtbl -> put_Top(This,top) )
#define Frame_get_Bottom(This,Bottom) ( (This)->lpVtbl -> get_Bottom(This,Bottom) )
#define Frame_put_Bottom(This,bottom) ( (This)->lpVtbl -> put_Bottom(This,bottom) )
#define Frame_get_Left(This,Left) ( (This)->lpVtbl -> get_Left(This,Left) )
#define Frame_put_Left(This,left) ( (This)->lpVtbl -> put_Left(This,left) )
#define Frame_get_Right(This,Right) ( (This)->lpVtbl -> get_Right(This,Right) )
#define Frame_put_Right(This,right) ( (This)->lpVtbl -> put_Right(This,right) )
#endif
#endif
#ifndef __Node_INTERFACE_DEFINED__
#define __Node_INTERFACE_DEFINED__
extern const IID IID_Node;
typedef struct NodeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (Node * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (Node * This);
	ULONG(STDMETHODCALLTYPE * Release) (Node * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (Node * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (Node * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (Node * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (Node * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Name) (Node * This, PBSTR Name);
	HRESULT(STDMETHODCALLTYPE * get_Property) (Node * This, BSTR PropertyName, PBSTR PropertyValue);
	HRESULT(STDMETHODCALLTYPE * get_Bookmark) (Node * This, PBSTR Bookmark);
	HRESULT(STDMETHODCALLTYPE * IsScopeNode) (Node * This, PBOOL IsScopeNode);
	HRESULT(STDMETHODCALLTYPE * get_Nodetype) (Node * This, PBSTR Nodetype);
	END_INTERFACE
}  NodeVtbl;
interface Node
{
	CONST_VTBL struct NodeVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define Node_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define Node_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define Node_Release(This) ( (This)->lpVtbl -> Release(This) )
#define Node_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define Node_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define Node_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define Node_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define Node_get_Name(This,Name) ( (This)->lpVtbl -> get_Name(This,Name) )
#define Node_get_Property(This,PropertyName,PropertyValue) ( (This)->lpVtbl -> get_Property(This,PropertyName,PropertyValue) )
#define Node_get_Bookmark(This,Bookmark) ( (This)->lpVtbl -> get_Bookmark(This,Bookmark) )
#define Node_IsScopeNode(This,IsScopeNode) ( (This)->lpVtbl -> IsScopeNode(This,IsScopeNode) )
#define Node_get_Nodetype(This,Nodetype) ( (This)->lpVtbl -> get_Nodetype(This,Nodetype) )
#endif
#endif
#ifndef __ScopeNamespace_INTERFACE_DEFINED__
#define __ScopeNamespace_INTERFACE_DEFINED__
extern const IID IID_ScopeNamespace;
typedef struct ScopeNamespaceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ScopeNamespace * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ScopeNamespace * This);
	ULONG(STDMETHODCALLTYPE * Release) (ScopeNamespace * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ScopeNamespace * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ScopeNamespace * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ScopeNamespace * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ScopeNamespace * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * GetParent) (ScopeNamespace * This, PNODE Node, PPNODE Parent);
	HRESULT(STDMETHODCALLTYPE * GetChild) (ScopeNamespace * This, PNODE Node, PPNODE Child);
	HRESULT(STDMETHODCALLTYPE * GetNext) (ScopeNamespace * This, PNODE Node, PPNODE Next);
	HRESULT(STDMETHODCALLTYPE * GetRoot) (ScopeNamespace * This, PPNODE Root);
	HRESULT(STDMETHODCALLTYPE * Expand) (ScopeNamespace * This, PNODE Node);
	END_INTERFACE
}  ScopeNamespaceVtbl;
interface ScopeNamespace
{
	CONST_VTBL struct ScopeNamespaceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ScopeNamespace_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ScopeNamespace_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ScopeNamespace_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ScopeNamespace_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ScopeNamespace_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ScopeNamespace_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ScopeNamespace_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ScopeNamespace_GetParent(This,Node,Parent) ( (This)->lpVtbl -> GetParent(This,Node,Parent) )
#define ScopeNamespace_GetChild(This,Node,Child) ( (This)->lpVtbl -> GetChild(This,Node,Child) )
#define ScopeNamespace_GetNext(This,Node,Next) ( (This)->lpVtbl -> GetNext(This,Node,Next) )
#define ScopeNamespace_GetRoot(This,Root) ( (This)->lpVtbl -> GetRoot(This,Root) )
#define ScopeNamespace_Expand(This,Node) ( (This)->lpVtbl -> Expand(This,Node) )
#endif
#endif
#ifndef __Document_INTERFACE_DEFINED__
#define __Document_INTERFACE_DEFINED__
extern const IID IID_Document;
typedef struct DocumentVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (Document * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (Document * This);
	ULONG(STDMETHODCALLTYPE * Release) (Document * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (Document * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (Document * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (Document * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (Document * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Save) (Document * This);
	HRESULT(STDMETHODCALLTYPE * SaveAs) (Document * This, BSTR Filename);
	HRESULT(STDMETHODCALLTYPE * Close) (Document * This, BOOL SaveChanges);
	HRESULT(STDMETHODCALLTYPE * get_Views) (Document * This, PPVIEWS Views);
	HRESULT(STDMETHODCALLTYPE * get_SnapIns) (Document * This, PPSNAPINS SnapIns);
	HRESULT(STDMETHODCALLTYPE * get_ActiveView) (Document * This, PPVIEW View);
	HRESULT(STDMETHODCALLTYPE * get_Name) (Document * This, PBSTR Name);
	HRESULT(STDMETHODCALLTYPE * put_Name) (Document * This, BSTR Name);
	HRESULT(STDMETHODCALLTYPE * get_Location) (Document * This, PBSTR Location);
	HRESULT(STDMETHODCALLTYPE * get_IsSaved) (Document * This, PBOOL IsSaved);
	HRESULT(STDMETHODCALLTYPE * get_Mode) (Document * This, PDOCUMENTMODE Mode);
	HRESULT(STDMETHODCALLTYPE * put_Mode) (Document * This, DOCUMENTMODE Mode);
	HRESULT(STDMETHODCALLTYPE * get_RootNode) (Document * This, PPNODE Node);
	HRESULT(STDMETHODCALLTYPE * get_ScopeNamespace) (Document * This, PPSCOPENAMESPACE ScopeNamespace);
	HRESULT(STDMETHODCALLTYPE * CreateProperties) (Document * This, PPPROPERTIES Properties);
	HRESULT(STDMETHODCALLTYPE * get_Application) (Document * This, PPAPPLICATION Application);
	END_INTERFACE
}  DocumentVtbl;
interface Document
{
	CONST_VTBL struct DocumentVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define Document_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define Document_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define Document_Release(This) ( (This)->lpVtbl -> Release(This) )
#define Document_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define Document_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define Document_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define Document_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define Document_Save(This) ( (This)->lpVtbl -> Save(This) )
#define Document_SaveAs(This,Filename) ( (This)->lpVtbl -> SaveAs(This,Filename) )
#define Document_Close(This,SaveChanges) ( (This)->lpVtbl -> Close(This,SaveChanges) )
#define Document_get_Views(This,Views) ( (This)->lpVtbl -> get_Views(This,Views) )
#define Document_get_SnapIns(This,SnapIns) ( (This)->lpVtbl -> get_SnapIns(This,SnapIns) )
#define Document_get_ActiveView(This,View) ( (This)->lpVtbl -> get_ActiveView(This,View) )
#define Document_get_Name(This,Name) ( (This)->lpVtbl -> get_Name(This,Name) )
#define Document_put_Name(This,Name) ( (This)->lpVtbl -> put_Name(This,Name) )
#define Document_get_Location(This,Location) ( (This)->lpVtbl -> get_Location(This,Location) )
#define Document_get_IsSaved(This,IsSaved) ( (This)->lpVtbl -> get_IsSaved(This,IsSaved) )
#define Document_get_Mode(This,Mode) ( (This)->lpVtbl -> get_Mode(This,Mode) )
#define Document_put_Mode(This,Mode) ( (This)->lpVtbl -> put_Mode(This,Mode) )
#define Document_get_RootNode(This,Node) ( (This)->lpVtbl -> get_RootNode(This,Node) )
#define Document_get_ScopeNamespace(This,ScopeNamespace) ( (This)->lpVtbl -> get_ScopeNamespace(This,ScopeNamespace) )
#define Document_CreateProperties(This,Properties) ( (This)->lpVtbl -> CreateProperties(This,Properties) )
#define Document_get_Application(This,Application) ( (This)->lpVtbl -> get_Application(This,Application) )
#endif
#endif
#ifndef __SnapIn_INTERFACE_DEFINED__
#define __SnapIn_INTERFACE_DEFINED__
extern const IID IID_SnapIn;
typedef struct SnapInVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (SnapIn * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (SnapIn * This);
	ULONG(STDMETHODCALLTYPE * Release) (SnapIn * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (SnapIn * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (SnapIn * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (SnapIn * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (SnapIn * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Name) (SnapIn * This, PBSTR Name);
	HRESULT(STDMETHODCALLTYPE * get_Vendor) (SnapIn * This, PBSTR Vendor);
	HRESULT(STDMETHODCALLTYPE * get_Version) (SnapIn * This, PBSTR Version);
	HRESULT(STDMETHODCALLTYPE * get_Extensions) (SnapIn * This, PPEXTENSIONS Extensions);
	HRESULT(STDMETHODCALLTYPE * get_SnapinCLSID) (SnapIn * This, PBSTR SnapinCLSID);
	HRESULT(STDMETHODCALLTYPE * get_Properties) (SnapIn * This, PPPROPERTIES Properties);
	HRESULT(STDMETHODCALLTYPE * EnableAllExtensions) (SnapIn * This, BOOL Enable);
	END_INTERFACE
}  SnapInVtbl;
interface SnapIn
{
	CONST_VTBL struct SnapInVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define SnapIn_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define SnapIn_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define SnapIn_Release(This) ( (This)->lpVtbl -> Release(This) )
#define SnapIn_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define SnapIn_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define SnapIn_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define SnapIn_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define SnapIn_get_Name(This,Name) ( (This)->lpVtbl -> get_Name(This,Name) )
#define SnapIn_get_Vendor(This,Vendor) ( (This)->lpVtbl -> get_Vendor(This,Vendor) )
#define SnapIn_get_Version(This,Version) ( (This)->lpVtbl -> get_Version(This,Version) )
#define SnapIn_get_Extensions(This,Extensions) ( (This)->lpVtbl -> get_Extensions(This,Extensions) )
#define SnapIn_get_SnapinCLSID(This,SnapinCLSID) ( (This)->lpVtbl -> get_SnapinCLSID(This,SnapinCLSID) )
#define SnapIn_get_Properties(This,Properties) ( (This)->lpVtbl -> get_Properties(This,Properties) )
#define SnapIn_EnableAllExtensions(This,Enable) ( (This)->lpVtbl -> EnableAllExtensions(This,Enable) )
#endif
#endif
#ifndef __SnapIns_INTERFACE_DEFINED__
#define __SnapIns_INTERFACE_DEFINED__
extern const IID IID_SnapIns;
typedef struct SnapInsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (SnapIns * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (SnapIns * This);
	ULONG(STDMETHODCALLTYPE * Release) (SnapIns * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (SnapIns * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (SnapIns * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (SnapIns * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (SnapIns * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (SnapIns * This, IUnknown ** retval);
	HRESULT(STDMETHODCALLTYPE * Item) (SnapIns * This, long Index, PPSNAPIN SnapIn);
	HRESULT(STDMETHODCALLTYPE * get_Count) (SnapIns * This, PLONG Count);
	HRESULT(STDMETHODCALLTYPE * Add) (SnapIns * This, BSTR SnapinNameOrCLSID, VARIANT ParentSnapin, VARIANT Properties, PPSNAPIN SnapIn);
	HRESULT(STDMETHODCALLTYPE * Remove) (SnapIns * This, PSNAPIN SnapIn);
	END_INTERFACE
}  SnapInsVtbl;
interface SnapIns
{
	CONST_VTBL struct SnapInsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define SnapIns_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define SnapIns_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define SnapIns_Release(This) ( (This)->lpVtbl -> Release(This) )
#define SnapIns_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define SnapIns_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define SnapIns_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define SnapIns_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define SnapIns_get__NewEnum(This,retval) ( (This)->lpVtbl -> get__NewEnum(This,retval) )
#define SnapIns_Item(This,Index,SnapIn) ( (This)->lpVtbl -> Item(This,Index,SnapIn) )
#define SnapIns_get_Count(This,Count) ( (This)->lpVtbl -> get_Count(This,Count) )
#define SnapIns_Add(This,SnapinNameOrCLSID,ParentSnapin,Properties,SnapIn) ( (This)->lpVtbl -> Add(This,SnapinNameOrCLSID,ParentSnapin,Properties,SnapIn) )
#define SnapIns_Remove(This,SnapIn) ( (This)->lpVtbl -> Remove(This,SnapIn) )
#endif
#endif
#ifndef __Extension_INTERFACE_DEFINED__
#define __Extension_INTERFACE_DEFINED__
extern const IID IID_Extension;
typedef struct ExtensionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (Extension * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (Extension * This);
	ULONG(STDMETHODCALLTYPE * Release) (Extension * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (Extension * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (Extension * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (Extension * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (Extension * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Name) (Extension * This, PBSTR Name);
	HRESULT(STDMETHODCALLTYPE * get_Vendor) (Extension * This, PBSTR Vendor);
	HRESULT(STDMETHODCALLTYPE * get_Version) (Extension * This, PBSTR Version);
	HRESULT(STDMETHODCALLTYPE * get_Extensions) (Extension * This, PPEXTENSIONS Extensions);
	HRESULT(STDMETHODCALLTYPE * get_SnapinCLSID) (Extension * This, PBSTR SnapinCLSID);
	HRESULT(STDMETHODCALLTYPE * EnableAllExtensions) (Extension * This, BOOL Enable);
	HRESULT(STDMETHODCALLTYPE * Enable) (Extension * This, BOOL Enable);
	END_INTERFACE
}  ExtensionVtbl;
interface Extension
{
	CONST_VTBL struct ExtensionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define Extension_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define Extension_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define Extension_Release(This) ( (This)->lpVtbl -> Release(This) )
#define Extension_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define Extension_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define Extension_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define Extension_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define Extension_get_Name(This,Name) ( (This)->lpVtbl -> get_Name(This,Name) )
#define Extension_get_Vendor(This,Vendor) ( (This)->lpVtbl -> get_Vendor(This,Vendor) )
#define Extension_get_Version(This,Version) ( (This)->lpVtbl -> get_Version(This,Version) )
#define Extension_get_Extensions(This,Extensions) ( (This)->lpVtbl -> get_Extensions(This,Extensions) )
#define Extension_get_SnapinCLSID(This,SnapinCLSID) ( (This)->lpVtbl -> get_SnapinCLSID(This,SnapinCLSID) )
#define Extension_EnableAllExtensions(This,Enable) ( (This)->lpVtbl -> EnableAllExtensions(This,Enable) )
#define Extension_Enable(This,Enable) ( (This)->lpVtbl -> Enable(This,Enable) )
#endif
#endif
#ifndef __Extensions_INTERFACE_DEFINED__
#define __Extensions_INTERFACE_DEFINED__
extern const IID IID_Extensions;
typedef struct ExtensionsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (Extensions * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (Extensions * This);
	ULONG(STDMETHODCALLTYPE * Release) (Extensions * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (Extensions * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (Extensions * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (Extensions * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (Extensions * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (Extensions * This, IUnknown ** retval);
	HRESULT(STDMETHODCALLTYPE * Item) (Extensions * This, long Index, PPEXTENSION Extension);
	HRESULT(STDMETHODCALLTYPE * get_Count) (Extensions * This, PLONG Count);
	END_INTERFACE
}  ExtensionsVtbl;
interface Extensions
{
	CONST_VTBL struct ExtensionsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define Extensions_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define Extensions_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define Extensions_Release(This) ( (This)->lpVtbl -> Release(This) )
#define Extensions_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define Extensions_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define Extensions_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define Extensions_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define Extensions_get__NewEnum(This,retval) ( (This)->lpVtbl -> get__NewEnum(This,retval) )
#define Extensions_Item(This,Index,Extension) ( (This)->lpVtbl -> Item(This,Index,Extension) )
#define Extensions_get_Count(This,Count) ( (This)->lpVtbl -> get_Count(This,Count) )
#endif
#endif
#ifndef __Columns_INTERFACE_DEFINED__
#define __Columns_INTERFACE_DEFINED__
extern const IID IID_Columns;
typedef struct ColumnsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (Columns * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (Columns * This);
	ULONG(STDMETHODCALLTYPE * Release) (Columns * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (Columns * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (Columns * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (Columns * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (Columns * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Item) (Columns * This, long Index, PPCOLUMN Column);
	HRESULT(STDMETHODCALLTYPE * get_Count) (Columns * This, PLONG Count);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (Columns * This, IUnknown ** retval);
	END_INTERFACE
}  ColumnsVtbl;
interface Columns
{
	CONST_VTBL struct ColumnsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define Columns_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define Columns_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define Columns_Release(This) ( (This)->lpVtbl -> Release(This) )
#define Columns_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define Columns_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define Columns_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define Columns_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define Columns_Item(This,Index,Column) ( (This)->lpVtbl -> Item(This,Index,Column) )
#define Columns_get_Count(This,Count) ( (This)->lpVtbl -> get_Count(This,Count) )
#define Columns_get__NewEnum(This,retval) ( (This)->lpVtbl -> get__NewEnum(This,retval) )
#endif
#endif
#ifndef __Column_INTERFACE_DEFINED__
#define __Column_INTERFACE_DEFINED__
typedef enum ColumnSortOrder
{
	SortOrder_Ascending = 0,
	SortOrder_Descending = (SortOrder_Ascending + 1)
} _ColumnSortOrder;
typedef enum ColumnSortOrder COLUMNSORTORDER;
extern const IID IID_Column;
typedef struct ColumnVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (Column * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (Column * This);
	ULONG(STDMETHODCALLTYPE * Release) (Column * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (Column * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (Column * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (Column * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (Column * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Name) (Column * This, BSTR * Name);
	HRESULT(STDMETHODCALLTYPE * get_Width) (Column * This, PLONG Width);
	HRESULT(STDMETHODCALLTYPE * put_Width) (Column * This, long Width);
	HRESULT(STDMETHODCALLTYPE * get_DisplayPosition) (Column * This, PLONG DisplayPosition);
	HRESULT(STDMETHODCALLTYPE * put_DisplayPosition) (Column * This, long Index);
	HRESULT(STDMETHODCALLTYPE * get_Hidden) (Column * This, PBOOL Hidden);
	HRESULT(STDMETHODCALLTYPE * put_Hidden) (Column * This, BOOL Hidden);
	HRESULT(STDMETHODCALLTYPE * SetAsSortColumn) (Column * This, COLUMNSORTORDER SortOrder);
	HRESULT(STDMETHODCALLTYPE * IsSortColumn) (Column * This, PBOOL IsSortColumn);
	END_INTERFACE
}  ColumnVtbl;
interface Column
{
	CONST_VTBL struct ColumnVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define Column_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define Column_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define Column_Release(This) ( (This)->lpVtbl -> Release(This) )
#define Column_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define Column_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define Column_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define Column_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define Column_Name(This,Name) ( (This)->lpVtbl -> Name(This,Name) )
#define Column_get_Width(This,Width) ( (This)->lpVtbl -> get_Width(This,Width) )
#define Column_put_Width(This,Width) ( (This)->lpVtbl -> put_Width(This,Width) )
#define Column_get_DisplayPosition(This,DisplayPosition) ( (This)->lpVtbl -> get_DisplayPosition(This,DisplayPosition) )
#define Column_put_DisplayPosition(This,Index) ( (This)->lpVtbl -> put_DisplayPosition(This,Index) )
#define Column_get_Hidden(This,Hidden) ( (This)->lpVtbl -> get_Hidden(This,Hidden) )
#define Column_put_Hidden(This,Hidden) ( (This)->lpVtbl -> put_Hidden(This,Hidden) )
#define Column_SetAsSortColumn(This,SortOrder) ( (This)->lpVtbl -> SetAsSortColumn(This,SortOrder) )
#define Column_IsSortColumn(This,IsSortColumn) ( (This)->lpVtbl -> IsSortColumn(This,IsSortColumn) )
#endif
#endif
#ifndef __Views_INTERFACE_DEFINED__
#define __Views_INTERFACE_DEFINED__
extern const IID IID_Views;
typedef struct ViewsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (Views * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (Views * This);
	ULONG(STDMETHODCALLTYPE * Release) (Views * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (Views * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (Views * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (Views * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (Views * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Item) (Views * This, long Index, PPVIEW View);
	HRESULT(STDMETHODCALLTYPE * get_Count) (Views * This, PLONG Count);
	HRESULT(STDMETHODCALLTYPE * Add) (Views * This, PNODE Node, VIEWOPTIONS viewOptions);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (Views * This, IUnknown ** retval);
	END_INTERFACE
}  ViewsVtbl;
interface Views
{
	CONST_VTBL struct ViewsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define Views_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define Views_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define Views_Release(This) ( (This)->lpVtbl -> Release(This) )
#define Views_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define Views_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define Views_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define Views_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define Views_Item(This,Index,View) ( (This)->lpVtbl -> Item(This,Index,View) )
#define Views_get_Count(This,Count) ( (This)->lpVtbl -> get_Count(This,Count) )
#define Views_Add(This,Node,viewOptions) ( (This)->lpVtbl -> Add(This,Node,viewOptions) )
#define Views_get__NewEnum(This,retval) ( (This)->lpVtbl -> get__NewEnum(This,retval) )
#endif
#endif
#ifndef __View_INTERFACE_DEFINED__
#define __View_INTERFACE_DEFINED__
extern const IID IID_View;
typedef struct ViewVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (View * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (View * This);
	ULONG(STDMETHODCALLTYPE * Release) (View * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (View * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (View * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (View * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (View * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_ActiveScopeNode) (View * This, PPNODE Node);
	HRESULT(STDMETHODCALLTYPE * put_ActiveScopeNode) (View * This, PNODE Node);
	HRESULT(STDMETHODCALLTYPE * get_Selection) (View * This, PPNODES Nodes);
	HRESULT(STDMETHODCALLTYPE * get_ListItems) (View * This, PPNODES Nodes);
	HRESULT(STDMETHODCALLTYPE * SnapinScopeObject) (View * This, VARIANT ScopeNode, PPDISPATCH ScopeNodeObject);
	HRESULT(STDMETHODCALLTYPE * SnapinSelectionObject) (View * This, PPDISPATCH SelectionObject);
	HRESULT(STDMETHODCALLTYPE * Is) (View * This, PVIEW View, VARIANT_BOOL * TheSame);
	HRESULT(STDMETHODCALLTYPE * get_Document) (View * This, PPDOCUMENT Document);
	HRESULT(STDMETHODCALLTYPE * SelectAll) (View * This);
	HRESULT(STDMETHODCALLTYPE * Select) (View * This, PNODE Node);
	HRESULT(STDMETHODCALLTYPE * Deselect) (View * This, PNODE Node);
	HRESULT(STDMETHODCALLTYPE * IsSelected) (View * This, PNODE Node, PBOOL IsSelected);
	HRESULT(STDMETHODCALLTYPE * DisplayScopeNodePropertySheet) (View * This, VARIANT ScopeNode);
	HRESULT(STDMETHODCALLTYPE * DisplaySelectionPropertySheet) (View * This);
	HRESULT(STDMETHODCALLTYPE * CopyScopeNode) (View * This, VARIANT ScopeNode);
	HRESULT(STDMETHODCALLTYPE * CopySelection) (View * This);
	HRESULT(STDMETHODCALLTYPE * DeleteScopeNode) (View * This, VARIANT ScopeNode);
	HRESULT(STDMETHODCALLTYPE * DeleteSelection) (View * This);
	HRESULT(STDMETHODCALLTYPE * RenameScopeNode) (View * This, BSTR NewName, VARIANT ScopeNode);
	HRESULT(STDMETHODCALLTYPE * RenameSelectedItem) (View * This, BSTR NewName);
	HRESULT(STDMETHODCALLTYPE * get_ScopeNodeContextMenu) (View * This, VARIANT ScopeNode, PPCONTEXTMENU ContextMenu);
	HRESULT(STDMETHODCALLTYPE * get_SelectionContextMenu) (View * This, PPCONTEXTMENU ContextMenu);
	HRESULT(STDMETHODCALLTYPE * RefreshScopeNode) (View * This, VARIANT ScopeNode);
	HRESULT(STDMETHODCALLTYPE * RefreshSelection) (View * This);
	HRESULT(STDMETHODCALLTYPE * ExecuteSelectionMenuItem) (View * This, BSTR MenuItemPath);
	HRESULT(STDMETHODCALLTYPE * ExecuteScopeNodeMenuItem) (View * This, BSTR MenuItemPath, VARIANT ScopeNode);
	HRESULT(STDMETHODCALLTYPE * ExecuteShellCommand) (View * This, BSTR Command, BSTR Directory, BSTR Parameters, BSTR WindowState);
	HRESULT(STDMETHODCALLTYPE * get_Frame) (View * This, PPFRAME Frame);
	HRESULT(STDMETHODCALLTYPE * Close) (View * This);
	HRESULT(STDMETHODCALLTYPE * get_ScopeTreeVisible) (View * This, PBOOL Visible);
	HRESULT(STDMETHODCALLTYPE * put_ScopeTreeVisible) (View * This, BOOL Visible);
	HRESULT(STDMETHODCALLTYPE * Back) (View * This);
	HRESULT(STDMETHODCALLTYPE * Forward) (View * This);
	HRESULT(STDMETHODCALLTYPE * put_StatusBarText) (View * This, BSTR StatusBarText);
	HRESULT(STDMETHODCALLTYPE * get_Memento) (View * This, PBSTR Memento);
	HRESULT(STDMETHODCALLTYPE * ViewMemento) (View * This, BSTR Memento);
	HRESULT(STDMETHODCALLTYPE * get_Columns) (View * This, PPCOLUMNS Columns);
	HRESULT(STDMETHODCALLTYPE * get_CellContents) (View * This, PNODE Node, long Column, PBSTR CellContents);
	HRESULT(STDMETHODCALLTYPE * ExportList) (View * This, BSTR File, EXPORTLISTOPTIONS exportoptions);
	HRESULT(STDMETHODCALLTYPE * get_ListViewMode) (View * This, PLISTVIEWMODE Mode);
	HRESULT(STDMETHODCALLTYPE * put_ListViewMode) (View * This, LISTVIEWMODE mode);
	HRESULT(STDMETHODCALLTYPE * get_ControlObject) (View * This, PPDISPATCH Control);
	END_INTERFACE
}  ViewVtbl;
interface View
{
	CONST_VTBL struct ViewVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define View_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define View_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define View_Release(This) ( (This)->lpVtbl -> Release(This) )
#define View_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define View_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define View_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define View_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define View_get_ActiveScopeNode(This,Node) ( (This)->lpVtbl -> get_ActiveScopeNode(This,Node) )
#define View_put_ActiveScopeNode(This,Node) ( (This)->lpVtbl -> put_ActiveScopeNode(This,Node) )
#define View_get_Selection(This,Nodes) ( (This)->lpVtbl -> get_Selection(This,Nodes) )
#define View_get_ListItems(This,Nodes) ( (This)->lpVtbl -> get_ListItems(This,Nodes) )
#define View_SnapinScopeObject(This,ScopeNode,ScopeNodeObject) ( (This)->lpVtbl -> SnapinScopeObject(This,ScopeNode,ScopeNodeObject) )
#define View_SnapinSelectionObject(This,SelectionObject) ( (This)->lpVtbl -> SnapinSelectionObject(This,SelectionObject) )
#define View_Is(This,View,TheSame) ( (This)->lpVtbl -> Is(This,View,TheSame) )
#define View_get_Document(This,Document) ( (This)->lpVtbl -> get_Document(This,Document) )
#define View_SelectAll(This) ( (This)->lpVtbl -> SelectAll(This) )
#define View_Select(This,Node) ( (This)->lpVtbl -> Select(This,Node) )
#define View_Deselect(This,Node) ( (This)->lpVtbl -> Deselect(This,Node) )
#define View_IsSelected(This,Node,IsSelected) ( (This)->lpVtbl -> IsSelected(This,Node,IsSelected) )
#define View_DisplayScopeNodePropertySheet(This,ScopeNode) ( (This)->lpVtbl -> DisplayScopeNodePropertySheet(This,ScopeNode) )
#define View_DisplaySelectionPropertySheet(This) ( (This)->lpVtbl -> DisplaySelectionPropertySheet(This) )
#define View_CopyScopeNode(This,ScopeNode) ( (This)->lpVtbl -> CopyScopeNode(This,ScopeNode) )
#define View_CopySelection(This) ( (This)->lpVtbl -> CopySelection(This) )
#define View_DeleteScopeNode(This,ScopeNode) ( (This)->lpVtbl -> DeleteScopeNode(This,ScopeNode) )
#define View_DeleteSelection(This) ( (This)->lpVtbl -> DeleteSelection(This) )
#define View_RenameScopeNode(This,NewName,ScopeNode) ( (This)->lpVtbl -> RenameScopeNode(This,NewName,ScopeNode) )
#define View_RenameSelectedItem(This,NewName) ( (This)->lpVtbl -> RenameSelectedItem(This,NewName) )
#define View_get_ScopeNodeContextMenu(This,ScopeNode,ContextMenu) ( (This)->lpVtbl -> get_ScopeNodeContextMenu(This,ScopeNode,ContextMenu) )
#define View_get_SelectionContextMenu(This,ContextMenu) ( (This)->lpVtbl -> get_SelectionContextMenu(This,ContextMenu) )
#define View_RefreshScopeNode(This,ScopeNode) ( (This)->lpVtbl -> RefreshScopeNode(This,ScopeNode) )
#define View_RefreshSelection(This) ( (This)->lpVtbl -> RefreshSelection(This) )
#define View_ExecuteSelectionMenuItem(This,MenuItemPath) ( (This)->lpVtbl -> ExecuteSelectionMenuItem(This,MenuItemPath) )
#define View_ExecuteScopeNodeMenuItem(This,MenuItemPath,ScopeNode) ( (This)->lpVtbl -> ExecuteScopeNodeMenuItem(This,MenuItemPath,ScopeNode) )
#define View_ExecuteShellCommand(This,Command,Directory,Parameters,WindowState) ( (This)->lpVtbl -> ExecuteShellCommand(This,Command,Directory,Parameters,WindowState) )
#define View_get_Frame(This,Frame) ( (This)->lpVtbl -> get_Frame(This,Frame) )
#define View_Close(This) ( (This)->lpVtbl -> Close(This) )
#define View_get_ScopeTreeVisible(This,Visible) ( (This)->lpVtbl -> get_ScopeTreeVisible(This,Visible) )
#define View_put_ScopeTreeVisible(This,Visible) ( (This)->lpVtbl -> put_ScopeTreeVisible(This,Visible) )
#define View_Back(This) ( (This)->lpVtbl -> Back(This) )
#define View_Forward(This) ( (This)->lpVtbl -> Forward(This) )
#define View_put_StatusBarText(This,StatusBarText) ( (This)->lpVtbl -> put_StatusBarText(This,StatusBarText) )
#define View_get_Memento(This,Memento) ( (This)->lpVtbl -> get_Memento(This,Memento) )
#define View_ViewMemento(This,Memento) ( (This)->lpVtbl -> ViewMemento(This,Memento) )
#define View_get_Columns(This,Columns) ( (This)->lpVtbl -> get_Columns(This,Columns) )
#define View_get_CellContents(This,Node,Column,CellContents) ( (This)->lpVtbl -> get_CellContents(This,Node,Column,CellContents) )
#define View_ExportList(This,File,exportoptions) ( (This)->lpVtbl -> ExportList(This,File,exportoptions) )
#define View_get_ListViewMode(This,Mode) ( (This)->lpVtbl -> get_ListViewMode(This,Mode) )
#define View_put_ListViewMode(This,mode) ( (This)->lpVtbl -> put_ListViewMode(This,mode) )
#define View_get_ControlObject(This,Control) ( (This)->lpVtbl -> get_ControlObject(This,Control) )
#endif
#endif
#ifndef __Nodes_INTERFACE_DEFINED__
#define __Nodes_INTERFACE_DEFINED__
extern const IID IID_Nodes;
typedef struct NodesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (Nodes * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (Nodes * This);
	ULONG(STDMETHODCALLTYPE * Release) (Nodes * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (Nodes * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (Nodes * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (Nodes * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (Nodes * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (Nodes * This, IUnknown ** retval);
	HRESULT(STDMETHODCALLTYPE * Item) (Nodes * This, long Index, PPNODE Node);
	HRESULT(STDMETHODCALLTYPE * get_Count) (Nodes * This, PLONG Count);
	END_INTERFACE
}  NodesVtbl;
interface Nodes
{
	CONST_VTBL struct NodesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define Nodes_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define Nodes_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define Nodes_Release(This) ( (This)->lpVtbl -> Release(This) )
#define Nodes_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define Nodes_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define Nodes_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define Nodes_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define Nodes_get__NewEnum(This,retval) ( (This)->lpVtbl -> get__NewEnum(This,retval) )
#define Nodes_Item(This,Index,Node) ( (This)->lpVtbl -> Item(This,Index,Node) )
#define Nodes_get_Count(This,Count) ( (This)->lpVtbl -> get_Count(This,Count) )
#endif
#endif
#ifndef __ContextMenu_INTERFACE_DEFINED__
#define __ContextMenu_INTERFACE_DEFINED__
extern const IID IID_ContextMenu;
typedef struct ContextMenuVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ContextMenu * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ContextMenu * This);
	ULONG(STDMETHODCALLTYPE * Release) (ContextMenu * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ContextMenu * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ContextMenu * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ContextMenu * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ContextMenu * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (ContextMenu * This, IUnknown ** retval);
	HRESULT(STDMETHODCALLTYPE * get_Item) (ContextMenu * This, VARIANT IndexOrPath, PPMENUITEM MenuItem);
	HRESULT(STDMETHODCALLTYPE * get_Count) (ContextMenu * This, PLONG Count);
	END_INTERFACE
}  ContextMenuVtbl;
interface ContextMenu
{
	CONST_VTBL struct ContextMenuVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ContextMenu_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ContextMenu_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ContextMenu_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ContextMenu_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ContextMenu_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ContextMenu_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ContextMenu_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ContextMenu_get__NewEnum(This,retval) ( (This)->lpVtbl -> get__NewEnum(This,retval) )
#define ContextMenu_get_Item(This,IndexOrPath,MenuItem) ( (This)->lpVtbl -> get_Item(This,IndexOrPath,MenuItem) )
#define ContextMenu_get_Count(This,Count) ( (This)->lpVtbl -> get_Count(This,Count) )
#endif
#endif
#ifndef __MenuItem_INTERFACE_DEFINED__
#define __MenuItem_INTERFACE_DEFINED__
extern const IID IID_MenuItem;
typedef struct MenuItemVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (MenuItem * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (MenuItem * This);
	ULONG(STDMETHODCALLTYPE * Release) (MenuItem * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (MenuItem * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (MenuItem * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (MenuItem * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (MenuItem * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_DisplayName) (MenuItem * This, PBSTR DisplayName);
	HRESULT(STDMETHODCALLTYPE * get_LanguageIndependentName) (MenuItem * This, PBSTR LanguageIndependentName);
	HRESULT(STDMETHODCALLTYPE * get_Path) (MenuItem * This, PBSTR Path);
	HRESULT(STDMETHODCALLTYPE * get_LanguageIndependentPath) (MenuItem * This, PBSTR LanguageIndependentPath);
	HRESULT(STDMETHODCALLTYPE * Execute) (MenuItem * This);
	HRESULT(STDMETHODCALLTYPE * get_Enabled) (MenuItem * This, PBOOL Enabled);
	END_INTERFACE
}  MenuItemVtbl;
interface MenuItem
{
	CONST_VTBL struct MenuItemVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define MenuItem_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define MenuItem_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define MenuItem_Release(This) ( (This)->lpVtbl -> Release(This) )
#define MenuItem_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define MenuItem_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define MenuItem_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define MenuItem_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define MenuItem_get_DisplayName(This,DisplayName) ( (This)->lpVtbl -> get_DisplayName(This,DisplayName) )
#define MenuItem_get_LanguageIndependentName(This,LanguageIndependentName) ( (This)->lpVtbl -> get_LanguageIndependentName(This,LanguageIndependentName) )
#define MenuItem_get_Path(This,Path) ( (This)->lpVtbl -> get_Path(This,Path) )
#define MenuItem_get_LanguageIndependentPath(This,LanguageIndependentPath) ( (This)->lpVtbl -> get_LanguageIndependentPath(This,LanguageIndependentPath) )
#define MenuItem_Execute(This) ( (This)->lpVtbl -> Execute(This) )
#define MenuItem_get_Enabled(This,Enabled) ( (This)->lpVtbl -> get_Enabled(This,Enabled) )
#endif
#endif
#ifndef __Properties_INTERFACE_DEFINED__
#define __Properties_INTERFACE_DEFINED__
extern const IID IID_Properties;
typedef struct PropertiesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (Properties * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (Properties * This);
	ULONG(STDMETHODCALLTYPE * Release) (Properties * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (Properties * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (Properties * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (Properties * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (Properties * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (Properties * This, IUnknown ** retval);
	HRESULT(STDMETHODCALLTYPE * Item) (Properties * This, BSTR Name, PPPROPERTY Property);
	HRESULT(STDMETHODCALLTYPE * get_Count) (Properties * This, PLONG Count);
	HRESULT(STDMETHODCALLTYPE * Remove) (Properties * This, BSTR Name);
	END_INTERFACE
}  PropertiesVtbl;
interface Properties
{
	CONST_VTBL struct PropertiesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define Properties_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define Properties_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define Properties_Release(This) ( (This)->lpVtbl -> Release(This) )
#define Properties_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define Properties_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define Properties_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define Properties_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define Properties_get__NewEnum(This,retval) ( (This)->lpVtbl -> get__NewEnum(This,retval) )
#define Properties_Item(This,Name,Property) ( (This)->lpVtbl -> Item(This,Name,Property) )
#define Properties_get_Count(This,Count) ( (This)->lpVtbl -> get_Count(This,Count) )
#define Properties_Remove(This,Name) ( (This)->lpVtbl -> Remove(This,Name) )
#endif
#endif
#ifndef __Property_INTERFACE_DEFINED__
#define __Property_INTERFACE_DEFINED__
extern const IID IID_Property;
typedef struct PropertyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (Property * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (Property * This);
	ULONG(STDMETHODCALLTYPE * Release) (Property * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (Property * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (Property * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (Property * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (Property * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Value) (Property * This, PVARIANT Value);
	HRESULT(STDMETHODCALLTYPE * put_Value) (Property * This, VARIANT Value);
	HRESULT(STDMETHODCALLTYPE * get_Name) (Property * This, PBSTR Name);
	END_INTERFACE
}  PropertyVtbl;
interface Property
{
	CONST_VTBL struct PropertyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define Property_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define Property_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define Property_Release(This) ( (This)->lpVtbl -> Release(This) )
#define Property_GetTypeInfoCount(This,pctinfo) ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define Property_GetTypeInfo(This,iTInfo,lcid,ppTInfo) ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define Property_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define Property_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define Property_get_Value(This,Value) ( (This)->lpVtbl -> get_Value(This,Value) )
#define Property_put_Value(This,Value) ( (This)->lpVtbl -> put_Value(This,Value) )
#define Property_get_Name(This,Name) ( (This)->lpVtbl -> get_Name(This,Name) )
#endif
#endif
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_mmcobj_0001_0042_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mmcobj_0001_0042_v0_0_s_ifspec;
unsigned long __RPC_USER VARIANT_UserSize(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree(unsigned long *, VARIANT *);
unsigned long __RPC_USER VARIANT_UserSize64(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal64(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree64(unsigned long *, VARIANT *);
#endif
