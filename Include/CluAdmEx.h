/*+@@file@@----------------------------------------------------------------*//*!
 \file		CluAdmEx.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul  3 17:26:45 2016
 \date		Modified on Sun Jul  3 17:26:45 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
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
#ifndef __cluadmex_h__
#define __cluadmex_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IGetClusterUIInfo_FWD_DEFINED__
#define __IGetClusterUIInfo_FWD_DEFINED__
typedef interface IGetClusterUIInfo IGetClusterUIInfo;
#endif
#ifndef __IGetClusterDataInfo_FWD_DEFINED__
#define __IGetClusterDataInfo_FWD_DEFINED__
typedef interface IGetClusterDataInfo IGetClusterDataInfo;
#endif
#ifndef __IGetClusterObjectInfo_FWD_DEFINED__
#define __IGetClusterObjectInfo_FWD_DEFINED__
typedef interface IGetClusterObjectInfo IGetClusterObjectInfo;
#endif
#ifndef __IGetClusterNodeInfo_FWD_DEFINED__
#define __IGetClusterNodeInfo_FWD_DEFINED__
typedef interface IGetClusterNodeInfo IGetClusterNodeInfo;
#endif
#ifndef __IGetClusterGroupInfo_FWD_DEFINED__
#define __IGetClusterGroupInfo_FWD_DEFINED__
typedef interface IGetClusterGroupInfo IGetClusterGroupInfo;
#endif
#ifndef __IGetClusterResourceInfo_FWD_DEFINED__
#define __IGetClusterResourceInfo_FWD_DEFINED__
typedef interface IGetClusterResourceInfo IGetClusterResourceInfo;
#endif
#ifndef __IGetClusterNetworkInfo_FWD_DEFINED__
#define __IGetClusterNetworkInfo_FWD_DEFINED__
typedef interface IGetClusterNetworkInfo IGetClusterNetworkInfo;
#endif
#ifndef __IGetClusterNetInterfaceInfo_FWD_DEFINED__
#define __IGetClusterNetInterfaceInfo_FWD_DEFINED__
typedef interface IGetClusterNetInterfaceInfo IGetClusterNetInterfaceInfo;
#endif
#ifndef __IWCPropertySheetCallback_FWD_DEFINED__
#define __IWCPropertySheetCallback_FWD_DEFINED__
typedef interface IWCPropertySheetCallback IWCPropertySheetCallback;
#endif
#ifndef __IWEExtendPropertySheet_FWD_DEFINED__
#define __IWEExtendPropertySheet_FWD_DEFINED__
typedef interface IWEExtendPropertySheet IWEExtendPropertySheet;
#endif
#ifndef __IWCWizardCallback_FWD_DEFINED__
#define __IWCWizardCallback_FWD_DEFINED__
typedef interface IWCWizardCallback IWCWizardCallback;
#endif
#ifndef __IWEExtendWizard_FWD_DEFINED__
#define __IWEExtendWizard_FWD_DEFINED__
typedef interface IWEExtendWizard IWEExtendWizard;
#endif
#ifndef __IWCContextMenuCallback_FWD_DEFINED__
#define __IWCContextMenuCallback_FWD_DEFINED__
typedef interface IWCContextMenuCallback IWCContextMenuCallback;
#endif
#ifndef __IWEExtendContextMenu_FWD_DEFINED__
#define __IWEExtendContextMenu_FWD_DEFINED__
typedef interface IWEExtendContextMenu IWEExtendContextMenu;
#endif
#ifndef __IWEInvokeCommand_FWD_DEFINED__
#define __IWEInvokeCommand_FWD_DEFINED__
typedef interface IWEInvokeCommand IWEInvokeCommand;
#endif
#ifndef __IWCWizard97Callback_FWD_DEFINED__
#define __IWCWizard97Callback_FWD_DEFINED__
typedef interface IWCWizard97Callback IWCWizard97Callback;
#endif
#ifndef __IWEExtendWizard97_FWD_DEFINED__
#define __IWEExtendWizard97_FWD_DEFINED__
typedef interface IWEExtendWizard97 IWEExtendWizard97;
#endif
#include "oaidl.h"
#include "clusapi.h"
typedef enum _CLUADMEX_OBJECT_TYPE
{
	CLUADMEX_OT_NONE = 0,
	CLUADMEX_OT_CLUSTER = (CLUADMEX_OT_NONE + 1),
	CLUADMEX_OT_NODE = (CLUADMEX_OT_CLUSTER + 1),
	CLUADMEX_OT_GROUP = (CLUADMEX_OT_NODE + 1),
	CLUADMEX_OT_RESOURCE = (CLUADMEX_OT_GROUP + 1),
	CLUADMEX_OT_RESOURCETYPE = (CLUADMEX_OT_RESOURCE + 1),
	CLUADMEX_OT_NETWORK = (CLUADMEX_OT_RESOURCETYPE + 1),
	CLUADMEX_OT_NETINTERFACE = (CLUADMEX_OT_NETWORK + 1)
} CLUADMEX_OBJECT_TYPE;
extern RPC_IF_HANDLE __MIDL_itf_cluadmex_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_cluadmex_0000_0000_v0_0_s_ifspec;
#ifndef __IGetClusterUIInfo_INTERFACE_DEFINED__
#define __IGetClusterUIInfo_INTERFACE_DEFINED__
extern const IID IID_IGetClusterUIInfo;
typedef struct IGetClusterUIInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGetClusterUIInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGetClusterUIInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGetClusterUIInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetClusterName) (IGetClusterUIInfo * This, BSTR lpszName, LONG * pcchName);
	LCID(STDMETHODCALLTYPE * GetLocale) (IGetClusterUIInfo * This);
	HFONT(STDMETHODCALLTYPE * GetFont) (IGetClusterUIInfo * This);
	HICON(STDMETHODCALLTYPE * GetIcon) (IGetClusterUIInfo * This);
	END_INTERFACE
}  IGetClusterUIInfoVtbl;
interface IGetClusterUIInfo
{
	CONST_VTBL struct IGetClusterUIInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGetClusterUIInfo_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGetClusterUIInfo_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGetClusterUIInfo_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGetClusterUIInfo_GetClusterName(This,lpszName,pcchName)( (This)->lpVtbl -> GetClusterName(This,lpszName,pcchName) )
#define IGetClusterUIInfo_GetLocale(This)( (This)->lpVtbl -> GetLocale(This) )
#define IGetClusterUIInfo_GetFont(This)( (This)->lpVtbl -> GetFont(This) )
#define IGetClusterUIInfo_GetIcon(This)( (This)->lpVtbl -> GetIcon(This) )
#endif
#endif
#ifndef __IGetClusterDataInfo_INTERFACE_DEFINED__
#define __IGetClusterDataInfo_INTERFACE_DEFINED__
extern const IID IID_IGetClusterDataInfo;
typedef struct IGetClusterDataInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGetClusterDataInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGetClusterDataInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGetClusterDataInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetClusterName) (IGetClusterDataInfo * This, BSTR lpszName, LONG * pcchName);
	HCLUSTER(STDMETHODCALLTYPE * GetClusterHandle) (IGetClusterDataInfo * This);
	LONG(STDMETHODCALLTYPE * GetObjectCount) (IGetClusterDataInfo * This);
	END_INTERFACE
}  IGetClusterDataInfoVtbl;
interface IGetClusterDataInfo
{
	CONST_VTBL struct IGetClusterDataInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGetClusterDataInfo_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGetClusterDataInfo_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGetClusterDataInfo_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGetClusterDataInfo_GetClusterName(This,lpszName,pcchName)( (This)->lpVtbl -> GetClusterName(This,lpszName,pcchName) )
#define IGetClusterDataInfo_GetClusterHandle(This)( (This)->lpVtbl -> GetClusterHandle(This) )
#define IGetClusterDataInfo_GetObjectCount(This)( (This)->lpVtbl -> GetObjectCount(This) )
#endif
#endif
#ifndef __IGetClusterObjectInfo_INTERFACE_DEFINED__
#define __IGetClusterObjectInfo_INTERFACE_DEFINED__
extern const IID IID_IGetClusterObjectInfo;
typedef struct IGetClusterObjectInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGetClusterObjectInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGetClusterObjectInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGetClusterObjectInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetObjectName) (IGetClusterObjectInfo * This, LONG lObjIndex, BSTR lpszName, LONG * pcchName);
	CLUADMEX_OBJECT_TYPE(STDMETHODCALLTYPE * GetObjectType) (IGetClusterObjectInfo * This, LONG lObjIndex);
	END_INTERFACE
}  IGetClusterObjectInfoVtbl;
interface IGetClusterObjectInfo
{
	CONST_VTBL struct IGetClusterObjectInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGetClusterObjectInfo_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGetClusterObjectInfo_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGetClusterObjectInfo_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGetClusterObjectInfo_GetObjectName(This,lObjIndex,lpszName,pcchName)( (This)->lpVtbl -> GetObjectName(This,lObjIndex,lpszName,pcchName) )
#define IGetClusterObjectInfo_GetObjectType(This,lObjIndex)( (This)->lpVtbl -> GetObjectType(This,lObjIndex) )
#endif
#endif
#ifndef __IGetClusterNodeInfo_INTERFACE_DEFINED__
#define __IGetClusterNodeInfo_INTERFACE_DEFINED__
extern const IID IID_IGetClusterNodeInfo;
typedef struct IGetClusterNodeInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGetClusterNodeInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGetClusterNodeInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGetClusterNodeInfo * This);
	HNODE(STDMETHODCALLTYPE * GetNodeHandle) (IGetClusterNodeInfo * This, LONG lObjIndex);
	END_INTERFACE
}  IGetClusterNodeInfoVtbl;
interface IGetClusterNodeInfo
{
	CONST_VTBL struct IGetClusterNodeInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGetClusterNodeInfo_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGetClusterNodeInfo_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGetClusterNodeInfo_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGetClusterNodeInfo_GetNodeHandle(This,lObjIndex)( (This)->lpVtbl -> GetNodeHandle(This,lObjIndex) )
#endif
#endif
#ifndef __IGetClusterGroupInfo_INTERFACE_DEFINED__
#define __IGetClusterGroupInfo_INTERFACE_DEFINED__
extern const IID IID_IGetClusterGroupInfo;
typedef struct IGetClusterGroupInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGetClusterGroupInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGetClusterGroupInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGetClusterGroupInfo * This);
	HGROUP(STDMETHODCALLTYPE * GetGroupHandle) (IGetClusterGroupInfo * This, LONG lObjIndex);
	END_INTERFACE
}  IGetClusterGroupInfoVtbl;
interface IGetClusterGroupInfo
{
	CONST_VTBL struct IGetClusterGroupInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGetClusterGroupInfo_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGetClusterGroupInfo_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGetClusterGroupInfo_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGetClusterGroupInfo_GetGroupHandle(This,lObjIndex)( (This)->lpVtbl -> GetGroupHandle(This,lObjIndex) )
#endif
#endif
#ifndef __IGetClusterResourceInfo_INTERFACE_DEFINED__
#define __IGetClusterResourceInfo_INTERFACE_DEFINED__
extern const IID IID_IGetClusterResourceInfo;
typedef struct IGetClusterResourceInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGetClusterResourceInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGetClusterResourceInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGetClusterResourceInfo * This);
	HRESOURCE(STDMETHODCALLTYPE * GetResourceHandle) (IGetClusterResourceInfo * This, LONG lObjIndex);
	HRESULT(STDMETHODCALLTYPE * GetResourceTypeName) (IGetClusterResourceInfo * This, LONG lObjIndex, BSTR lpszResTypeName, LONG * pcchResTypeName);
	BOOL(STDMETHODCALLTYPE * GetResourceNetworkName) (IGetClusterResourceInfo * This, LONG lObjIndex, BSTR lpszNetName, ULONG * pcchNetName);
	END_INTERFACE
}  IGetClusterResourceInfoVtbl;
interface IGetClusterResourceInfo
{
	CONST_VTBL struct IGetClusterResourceInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGetClusterResourceInfo_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGetClusterResourceInfo_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGetClusterResourceInfo_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGetClusterResourceInfo_GetResourceHandle(This,lObjIndex)( (This)->lpVtbl -> GetResourceHandle(This,lObjIndex) )
#define IGetClusterResourceInfo_GetResourceTypeName(This,lObjIndex,lpszResTypeName,pcchResTypeName)( (This)->lpVtbl -> GetResourceTypeName(This,lObjIndex,lpszResTypeName,pcchResTypeName) )
#define IGetClusterResourceInfo_GetResourceNetworkName(This,lObjIndex,lpszNetName,pcchNetName)( (This)->lpVtbl -> GetResourceNetworkName(This,lObjIndex,lpszNetName,pcchNetName) )
#endif
#endif
#ifndef __IGetClusterNetworkInfo_INTERFACE_DEFINED__
#define __IGetClusterNetworkInfo_INTERFACE_DEFINED__
extern const IID IID_IGetClusterNetworkInfo;
typedef struct IGetClusterNetworkInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGetClusterNetworkInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGetClusterNetworkInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGetClusterNetworkInfo * This);
	HNETWORK(STDMETHODCALLTYPE * GetNetworkHandle) (IGetClusterNetworkInfo * This, LONG lObjIndex);
	END_INTERFACE
}  IGetClusterNetworkInfoVtbl;
interface IGetClusterNetworkInfo
{
	CONST_VTBL struct IGetClusterNetworkInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGetClusterNetworkInfo_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGetClusterNetworkInfo_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGetClusterNetworkInfo_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGetClusterNetworkInfo_GetNetworkHandle(This,lObjIndex)( (This)->lpVtbl -> GetNetworkHandle(This,lObjIndex) )
#endif
#endif
#ifndef __IGetClusterNetInterfaceInfo_INTERFACE_DEFINED__
#define __IGetClusterNetInterfaceInfo_INTERFACE_DEFINED__
extern const IID IID_IGetClusterNetInterfaceInfo;
typedef struct IGetClusterNetInterfaceInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGetClusterNetInterfaceInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGetClusterNetInterfaceInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGetClusterNetInterfaceInfo * This);
	HNETINTERFACE(STDMETHODCALLTYPE * GetNetInterfaceHandle) (IGetClusterNetInterfaceInfo * This, LONG lObjIndex);
	END_INTERFACE
}  IGetClusterNetInterfaceInfoVtbl;
interface IGetClusterNetInterfaceInfo
{
	CONST_VTBL struct IGetClusterNetInterfaceInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGetClusterNetInterfaceInfo_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGetClusterNetInterfaceInfo_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGetClusterNetInterfaceInfo_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGetClusterNetInterfaceInfo_GetNetInterfaceHandle(This,lObjIndex)( (This)->lpVtbl -> GetNetInterfaceHandle(This,lObjIndex) )
#endif
#endif
#ifndef __IWCPropertySheetCallback_INTERFACE_DEFINED__
#define __IWCPropertySheetCallback_INTERFACE_DEFINED__
extern const IID IID_IWCPropertySheetCallback;
typedef struct IWCPropertySheetCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWCPropertySheetCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWCPropertySheetCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWCPropertySheetCallback * This);
	HRESULT(STDMETHODCALLTYPE * AddPropertySheetPage) (IWCPropertySheetCallback * This, LONG * hpage);
	END_INTERFACE
}  IWCPropertySheetCallbackVtbl;
interface IWCPropertySheetCallback
{
	CONST_VTBL struct IWCPropertySheetCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWCPropertySheetCallback_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWCPropertySheetCallback_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWCPropertySheetCallback_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWCPropertySheetCallback_AddPropertySheetPage(This,hpage)( (This)->lpVtbl -> AddPropertySheetPage(This,hpage) )
#endif
#endif
#ifndef __IWEExtendPropertySheet_INTERFACE_DEFINED__
#define __IWEExtendPropertySheet_INTERFACE_DEFINED__
extern const IID IID_IWEExtendPropertySheet;
typedef struct IWEExtendPropertySheetVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWEExtendPropertySheet * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWEExtendPropertySheet * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWEExtendPropertySheet * This);
	HRESULT(STDMETHODCALLTYPE * CreatePropertySheetPages) (IWEExtendPropertySheet * This, IUnknown * piData, IWCPropertySheetCallback * piCallback);
	END_INTERFACE
}  IWEExtendPropertySheetVtbl;
interface IWEExtendPropertySheet
{
	CONST_VTBL struct IWEExtendPropertySheetVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWEExtendPropertySheet_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWEExtendPropertySheet_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWEExtendPropertySheet_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWEExtendPropertySheet_CreatePropertySheetPages(This,piData,piCallback)( (This)->lpVtbl -> CreatePropertySheetPages(This,piData,piCallback) )
#endif
#endif
#ifndef __IWCWizardCallback_INTERFACE_DEFINED__
#define __IWCWizardCallback_INTERFACE_DEFINED__
extern const IID IID_IWCWizardCallback;
typedef struct IWCWizardCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWCWizardCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWCWizardCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWCWizardCallback * This);
	HRESULT(STDMETHODCALLTYPE * AddWizardPage) (IWCWizardCallback * This, LONG * hpage);
	HRESULT(STDMETHODCALLTYPE * EnableNext) (IWCWizardCallback * This, LONG * hpage, BOOL bEnable);
	END_INTERFACE
}  IWCWizardCallbackVtbl;
interface IWCWizardCallback
{
	CONST_VTBL struct IWCWizardCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWCWizardCallback_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWCWizardCallback_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWCWizardCallback_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWCWizardCallback_AddWizardPage(This,hpage)( (This)->lpVtbl -> AddWizardPage(This,hpage) )
#define IWCWizardCallback_EnableNext(This,hpage,bEnable)( (This)->lpVtbl -> EnableNext(This,hpage,bEnable) )
#endif
#endif
#ifndef __IWEExtendWizard_INTERFACE_DEFINED__
#define __IWEExtendWizard_INTERFACE_DEFINED__
extern const IID IID_IWEExtendWizard;
typedef struct IWEExtendWizardVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWEExtendWizard * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWEExtendWizard * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWEExtendWizard * This);
	HRESULT(STDMETHODCALLTYPE * CreateWizardPages) (IWEExtendWizard * This, IUnknown * piData, IWCWizardCallback * piCallback);
	END_INTERFACE
}  IWEExtendWizardVtbl;
interface IWEExtendWizard
{
	CONST_VTBL struct IWEExtendWizardVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWEExtendWizard_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWEExtendWizard_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWEExtendWizard_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWEExtendWizard_CreateWizardPages(This,piData,piCallback)( (This)->lpVtbl -> CreateWizardPages(This,piData,piCallback) )
#endif
#endif
#ifndef __IWCContextMenuCallback_INTERFACE_DEFINED__
#define __IWCContextMenuCallback_INTERFACE_DEFINED__
extern const IID IID_IWCContextMenuCallback;
typedef struct IWCContextMenuCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWCContextMenuCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWCContextMenuCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWCContextMenuCallback * This);
	HRESULT(STDMETHODCALLTYPE * AddExtensionMenuItem) (IWCContextMenuCallback * This, BSTR lpszName, BSTR lpszStatusBarText, ULONG nCommandID, ULONG nSubmenuCommandID, ULONG uFlags);
	END_INTERFACE
}  IWCContextMenuCallbackVtbl;
interface IWCContextMenuCallback
{
	CONST_VTBL struct IWCContextMenuCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWCContextMenuCallback_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWCContextMenuCallback_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWCContextMenuCallback_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWCContextMenuCallback_AddExtensionMenuItem(This,lpszName,lpszStatusBarText,nCommandID,nSubmenuCommandID,uFlags)( (This)->lpVtbl -> AddExtensionMenuItem(This,lpszName,lpszStatusBarText,nCommandID,nSubmenuCommandID,uFlags) )
#endif
#endif
#ifndef __IWEExtendContextMenu_INTERFACE_DEFINED__
#define __IWEExtendContextMenu_INTERFACE_DEFINED__
extern const IID IID_IWEExtendContextMenu;
typedef struct IWEExtendContextMenuVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWEExtendContextMenu * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWEExtendContextMenu * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWEExtendContextMenu * This);
	HRESULT(STDMETHODCALLTYPE * AddContextMenuItems) (IWEExtendContextMenu * This, IUnknown * piData, IWCContextMenuCallback * piCallback);
	END_INTERFACE
}  IWEExtendContextMenuVtbl;
interface IWEExtendContextMenu
{
	CONST_VTBL struct IWEExtendContextMenuVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWEExtendContextMenu_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWEExtendContextMenu_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWEExtendContextMenu_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWEExtendContextMenu_AddContextMenuItems(This,piData,piCallback)( (This)->lpVtbl -> AddContextMenuItems(This,piData,piCallback) )
#endif
#endif
#ifndef __IWEInvokeCommand_INTERFACE_DEFINED__
#define __IWEInvokeCommand_INTERFACE_DEFINED__
extern const IID IID_IWEInvokeCommand;
typedef struct IWEInvokeCommandVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWEInvokeCommand * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWEInvokeCommand * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWEInvokeCommand * This);
	HRESULT(STDMETHODCALLTYPE * InvokeCommand) (IWEInvokeCommand * This, ULONG nCommandID, IUnknown * piData);
	END_INTERFACE
}  IWEInvokeCommandVtbl;
interface IWEInvokeCommand
{
	CONST_VTBL struct IWEInvokeCommandVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWEInvokeCommand_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWEInvokeCommand_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWEInvokeCommand_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWEInvokeCommand_InvokeCommand(This,nCommandID,piData)( (This)->lpVtbl -> InvokeCommand(This,nCommandID,piData) )
#endif
#endif
#ifndef __IWCWizard97Callback_INTERFACE_DEFINED__
#define __IWCWizard97Callback_INTERFACE_DEFINED__
extern const IID IID_IWCWizard97Callback;
typedef struct IWCWizard97CallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWCWizard97Callback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWCWizard97Callback * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWCWizard97Callback * This);
	HRESULT(STDMETHODCALLTYPE * AddWizard97Page) (IWCWizard97Callback * This, LONG * hpage);
	HRESULT(STDMETHODCALLTYPE * EnableNext) (IWCWizard97Callback * This, LONG * hpage, BOOL bEnable);
	END_INTERFACE
}  IWCWizard97CallbackVtbl;
interface IWCWizard97Callback
{
	CONST_VTBL struct IWCWizard97CallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWCWizard97Callback_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWCWizard97Callback_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWCWizard97Callback_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWCWizard97Callback_AddWizard97Page(This,hpage)( (This)->lpVtbl -> AddWizard97Page(This,hpage) )
#define IWCWizard97Callback_EnableNext(This,hpage,bEnable)( (This)->lpVtbl -> EnableNext(This,hpage,bEnable) )
#endif
#endif
#ifndef __IWEExtendWizard97_INTERFACE_DEFINED__
#define __IWEExtendWizard97_INTERFACE_DEFINED__
extern const IID IID_IWEExtendWizard97;
typedef struct IWEExtendWizard97Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWEExtendWizard97 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWEExtendWizard97 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWEExtendWizard97 * This);
	HRESULT(STDMETHODCALLTYPE * CreateWizard97Pages) (IWEExtendWizard97 * This, IUnknown * piData, IWCWizard97Callback * piCallback);
	END_INTERFACE
}  IWEExtendWizard97Vtbl;
interface IWEExtendWizard97
{
	CONST_VTBL struct IWEExtendWizard97Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWEExtendWizard97_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWEExtendWizard97_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWEExtendWizard97_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWEExtendWizard97_CreateWizard97Pages(This,piData,piCallback)( (This)->lpVtbl -> CreateWizard97Pages(This,piData,piCallback) )
#endif
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
