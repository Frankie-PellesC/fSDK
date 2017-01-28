/*+@@file@@----------------------------------------------------------------*//*!
 \file		ShlDisp.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Wed Jul  6 16:40:44 2016
 \date		Modified on Wed Jul  6 16:40:44 2016
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
#ifndef __shldisp_h__
#define __shldisp_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IFolderViewOC_FWD_DEFINED__
#define __IFolderViewOC_FWD_DEFINED__
typedef interface IFolderViewOC IFolderViewOC;
#endif
#ifndef __DShellFolderViewEvents_FWD_DEFINED__
#define __DShellFolderViewEvents_FWD_DEFINED__
typedef interface DShellFolderViewEvents DShellFolderViewEvents;
#endif
#ifndef __ShellFolderViewOC_FWD_DEFINED__
#define __ShellFolderViewOC_FWD_DEFINED__
typedef struct ShellFolderViewOC ShellFolderViewOC;
#endif
#ifndef __DFConstraint_FWD_DEFINED__
#define __DFConstraint_FWD_DEFINED__
typedef interface DFConstraint DFConstraint;
#endif
#ifndef __FolderItem_FWD_DEFINED__
#define __FolderItem_FWD_DEFINED__
typedef interface FolderItem FolderItem;
#endif
#ifndef __FolderItems_FWD_DEFINED__
#define __FolderItems_FWD_DEFINED__
typedef interface FolderItems FolderItems;
#endif
#ifndef __FolderItemVerb_FWD_DEFINED__
#define __FolderItemVerb_FWD_DEFINED__
typedef interface FolderItemVerb FolderItemVerb;
#endif
#ifndef __FolderItemVerbs_FWD_DEFINED__
#define __FolderItemVerbs_FWD_DEFINED__
typedef interface FolderItemVerbs FolderItemVerbs;
#endif
#ifndef __Folder_FWD_DEFINED__
#define __Folder_FWD_DEFINED__
typedef interface Folder Folder;
#endif
#ifndef __Folder2_FWD_DEFINED__
#define __Folder2_FWD_DEFINED__
typedef interface Folder2 Folder2;
#endif
#ifndef __Folder3_FWD_DEFINED__
#define __Folder3_FWD_DEFINED__
typedef interface Folder3 Folder3;
#endif
#ifndef __FolderItem2_FWD_DEFINED__
#define __FolderItem2_FWD_DEFINED__
typedef interface FolderItem2 FolderItem2;
#endif
#ifndef __ShellFolderItem_FWD_DEFINED__
#define __ShellFolderItem_FWD_DEFINED__
typedef struct ShellFolderItem ShellFolderItem;
#endif
#ifndef __FolderItems2_FWD_DEFINED__
#define __FolderItems2_FWD_DEFINED__
typedef interface FolderItems2 FolderItems2;
#endif
#ifndef __FolderItems3_FWD_DEFINED__
#define __FolderItems3_FWD_DEFINED__
typedef interface FolderItems3 FolderItems3;
#endif
#ifndef __IShellLinkDual_FWD_DEFINED__
#define __IShellLinkDual_FWD_DEFINED__
typedef interface IShellLinkDual IShellLinkDual;
#endif
#ifndef __IShellLinkDual2_FWD_DEFINED__
#define __IShellLinkDual2_FWD_DEFINED__
typedef interface IShellLinkDual2 IShellLinkDual2;
#endif
#ifndef __ShellLinkObject_FWD_DEFINED__
#define __ShellLinkObject_FWD_DEFINED__
typedef struct ShellLinkObject ShellLinkObject;
#endif
#ifndef __IShellFolderViewDual_FWD_DEFINED__
#define __IShellFolderViewDual_FWD_DEFINED__
typedef interface IShellFolderViewDual IShellFolderViewDual;
#endif
#ifndef __IShellFolderViewDual2_FWD_DEFINED__
#define __IShellFolderViewDual2_FWD_DEFINED__
typedef interface IShellFolderViewDual2 IShellFolderViewDual2;
#endif
#ifndef __IShellFolderViewDual3_FWD_DEFINED__
#define __IShellFolderViewDual3_FWD_DEFINED__
typedef interface IShellFolderViewDual3 IShellFolderViewDual3;
#endif
#ifndef __ShellFolderView_FWD_DEFINED__
#define __ShellFolderView_FWD_DEFINED__
typedef struct ShellFolderView ShellFolderView;
#endif
#ifndef __IShellDispatch_FWD_DEFINED__
#define __IShellDispatch_FWD_DEFINED__
typedef interface IShellDispatch IShellDispatch;
#endif
#ifndef __IShellDispatch2_FWD_DEFINED__
#define __IShellDispatch2_FWD_DEFINED__
typedef interface IShellDispatch2 IShellDispatch2;
#endif
#ifndef __IShellDispatch3_FWD_DEFINED__
#define __IShellDispatch3_FWD_DEFINED__
typedef interface IShellDispatch3 IShellDispatch3;
#endif
#ifndef __IShellDispatch4_FWD_DEFINED__
#define __IShellDispatch4_FWD_DEFINED__
typedef interface IShellDispatch4 IShellDispatch4;
#endif
#ifndef __IShellDispatch5_FWD_DEFINED__
#define __IShellDispatch5_FWD_DEFINED__
typedef interface IShellDispatch5 IShellDispatch5;
#endif
#ifndef __Shell_FWD_DEFINED__
#define __Shell_FWD_DEFINED__
typedef struct Shell Shell;
#endif
#ifndef __ShellDispatchInproc_FWD_DEFINED__
#define __ShellDispatchInproc_FWD_DEFINED__
typedef struct ShellDispatchInproc ShellDispatchInproc;
#endif
#ifndef __IFileSearchBand_FWD_DEFINED__
#define __IFileSearchBand_FWD_DEFINED__
typedef interface IFileSearchBand IFileSearchBand;
#endif
#ifndef __FileSearchBand_FWD_DEFINED__
#define __FileSearchBand_FWD_DEFINED__
typedef struct FileSearchBand FileSearchBand;
#endif
#ifndef __IWebWizardHost_FWD_DEFINED__
#define __IWebWizardHost_FWD_DEFINED__
typedef interface IWebWizardHost IWebWizardHost;
#endif
#ifndef __INewWDEvents_FWD_DEFINED__
#define __INewWDEvents_FWD_DEFINED__
typedef interface INewWDEvents INewWDEvents;
#endif
#ifndef __IAutoComplete_FWD_DEFINED__
#define __IAutoComplete_FWD_DEFINED__
typedef interface IAutoComplete IAutoComplete;
#endif
#ifndef __IAutoComplete2_FWD_DEFINED__
#define __IAutoComplete2_FWD_DEFINED__
typedef interface IAutoComplete2 IAutoComplete2;
#endif
#ifndef __IEnumACString_FWD_DEFINED__
#define __IEnumACString_FWD_DEFINED__
typedef interface IEnumACString IEnumACString;
#endif
#ifndef __IAsyncOperation_FWD_DEFINED__
#define __IAsyncOperation_FWD_DEFINED__
typedef interface IAsyncOperation IAsyncOperation;
#endif
#include <ocidl.h>
#pragma once
extern RPC_IF_HANDLE __MIDL_itf_shldisp_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shldisp_0000_0000_v0_0_s_ifspec;
#ifndef __Shell32_LIBRARY_DEFINED__
#define __Shell32_LIBRARY_DEFINED__
typedef DECLSPEC_UUID("35f1a0d0-3e9a-11d2-8499-005345000000")
enum OfflineFolderStatus
{
OFS_INACTIVE = -1,
	OFS_ONLINE = (OFS_INACTIVE + 1),
	OFS_OFFLINE = (OFS_ONLINE + 1),
	OFS_SERVERBACK = (OFS_OFFLINE + 1),
	OFS_DIRTYCACHE = (OFS_SERVERBACK + 1)
} OfflineFolderStatus;
typedef DECLSPEC_UUID("742A99A0-C77E-11D0-A32C-00A0C91EEDBA")
enum ShellFolderViewOptions
{
SFVVO_SHOWALLOBJECTS = 0x1,
	SFVVO_SHOWEXTENSIONS = 0x2,
	SFVVO_SHOWCOMPCOLOR = 0x8,
	SFVVO_SHOWSYSFILES = 0x20,
	SFVVO_WIN95CLASSIC = 0x40,
	SFVVO_DOUBLECLICKINWEBVIEW = 0x80,
	SFVVO_DESKTOPHTML = 0x200
} ShellFolderViewOptions;
typedef DECLSPEC_UUID("CA31EA20-48D0-11CF-8350-444553540000")
enum ShellSpecialFolderConstants
{
ssfDESKTOP = 0,
	ssfPROGRAMS = 0x2,
	ssfCONTROLS = 0x3,
	ssfPRINTERS = 0x4,
	ssfPERSONAL = 0x5,
	ssfFAVORITES = 0x6,
	ssfSTARTUP = 0x7,
	ssfRECENT = 0x8,
	ssfSENDTO = 0x9,
	ssfBITBUCKET = 0xa,
	ssfSTARTMENU = 0xb,
	ssfDESKTOPDIRECTORY = 0x10,
	ssfDRIVES = 0x11,
	ssfNETWORK = 0x12,
	ssfNETHOOD = 0x13,
	ssfFONTS = 0x14,
	ssfTEMPLATES = 0x15,
	ssfCOMMONSTARTMENU = 0x16,
	ssfCOMMONPROGRAMS = 0x17,
	ssfCOMMONSTARTUP = 0x18,
	ssfCOMMONDESKTOPDIR = 0x19,
	ssfAPPDATA = 0x1a,
	ssfPRINTHOOD = 0x1b,
	ssfLOCALAPPDATA = 0x1c,
	ssfALTSTARTUP = 0x1d,
	ssfCOMMONALTSTARTUP = 0x1e,
	ssfCOMMONFAVORITES = 0x1f,
	ssfINTERNETCACHE = 0x20,
	ssfCOOKIES = 0x21,
	ssfHISTORY = 0x22,
	ssfCOMMONAPPDATA = 0x23,
	ssfWINDOWS = 0x24,
	ssfSYSTEM = 0x25,
	ssfPROGRAMFILES = 0x26,
	ssfMYPICTURES = 0x27,
	ssfPROFILE = 0x28,
	ssfSYSTEMx86 = 0x29,
	ssfPROGRAMFILESx86 = 0x30
} ShellSpecialFolderConstants;
extern const IID LIBID_Shell32;
#ifndef __IFolderViewOC_INTERFACE_DEFINED__
#define __IFolderViewOC_INTERFACE_DEFINED__
extern const IID IID_IFolderViewOC;
typedef struct IFolderViewOCVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IFolderViewOC *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IFolderViewOC *This);
	ULONG(STDMETHODCALLTYPE *Release) (IFolderViewOC *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IFolderViewOC *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IFolderViewOC *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IFolderViewOC *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IFolderViewOC *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *SetFolderView) (IFolderViewOC *This, IDispatch *pdisp);
	END_INTERFACE
}  IFolderViewOCVtbl;
interface IFolderViewOC
{
	CONST_VTBL struct IFolderViewOCVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFolderViewOC_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFolderViewOC_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFolderViewOC_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFolderViewOC_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFolderViewOC_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFolderViewOC_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFolderViewOC_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFolderViewOC_SetFolderView(This,pdisp)( (This)->lpVtbl -> SetFolderView(This,pdisp) )
#endif
#endif
#ifndef __DShellFolderViewEvents_DISPINTERFACE_DEFINED__
#define __DShellFolderViewEvents_DISPINTERFACE_DEFINED__
extern const IID DIID_DShellFolderViewEvents;
typedef struct DShellFolderViewEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (DShellFolderViewEvents *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (DShellFolderViewEvents *This);
	ULONG(STDMETHODCALLTYPE *Release) (DShellFolderViewEvents *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (DShellFolderViewEvents *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (DShellFolderViewEvents *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (DShellFolderViewEvents *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (DShellFolderViewEvents *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	END_INTERFACE
}  DShellFolderViewEventsVtbl;
interface DShellFolderViewEvents
{
	CONST_VTBL struct DShellFolderViewEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define DShellFolderViewEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define DShellFolderViewEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define DShellFolderViewEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define DShellFolderViewEvents_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define DShellFolderViewEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define DShellFolderViewEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define DShellFolderViewEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#endif
#endif
extern const CLSID CLSID_ShellFolderViewOC;
#ifndef __DFConstraint_INTERFACE_DEFINED__
#define __DFConstraint_INTERFACE_DEFINED__
extern const IID IID_DFConstraint;
typedef struct DFConstraintVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (DFConstraint *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (DFConstraint *This);
	ULONG(STDMETHODCALLTYPE *Release) (DFConstraint *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (DFConstraint *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (DFConstraint *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (DFConstraint *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (DFConstraint *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Name) (DFConstraint *This, BSTR *pbs);
	HRESULT(STDMETHODCALLTYPE *get_Value) (DFConstraint *This, VARIANT *pv);
	END_INTERFACE
}  DFConstraintVtbl;
interface DFConstraint
{
	CONST_VTBL struct DFConstraintVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define DFConstraint_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define DFConstraint_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define DFConstraint_Release(This)( (This)->lpVtbl -> Release(This) )
#define DFConstraint_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define DFConstraint_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define DFConstraint_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define DFConstraint_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define DFConstraint_get_Name(This,pbs)( (This)->lpVtbl -> get_Name(This,pbs) )
#define DFConstraint_get_Value(This,pv)( (This)->lpVtbl -> get_Value(This,pv) )
#endif
#endif
#ifndef __FolderItem_INTERFACE_DEFINED__
#define __FolderItem_INTERFACE_DEFINED__
typedef FolderItem *LPFOLDERITEM;
extern const IID IID_FolderItem;
typedef struct FolderItemVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (FolderItem *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (FolderItem *This);
	ULONG(STDMETHODCALLTYPE *Release) (FolderItem *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (FolderItem *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (FolderItem *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (FolderItem *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (FolderItem *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Application) (FolderItem *This, IDispatch **ppid);
	HRESULT(STDMETHODCALLTYPE *get_Parent) (FolderItem *This, IDispatch **ppid);
	HRESULT(STDMETHODCALLTYPE *get_Name) (FolderItem *This, BSTR *pbs);
	HRESULT(STDMETHODCALLTYPE *put_Name) (FolderItem *This, BSTR bs);
	HRESULT(STDMETHODCALLTYPE *get_Path) (FolderItem *This, BSTR *pbs);
	HRESULT(STDMETHODCALLTYPE *get_GetLink) (FolderItem *This, IDispatch **ppid);
	HRESULT(STDMETHODCALLTYPE *get_GetFolder) (FolderItem *This, IDispatch **ppid);
	HRESULT(STDMETHODCALLTYPE *get_IsLink) (FolderItem *This, VARIANT_BOOL *pb);
	HRESULT(STDMETHODCALLTYPE *get_IsFolder) (FolderItem *This, VARIANT_BOOL *pb);
	HRESULT(STDMETHODCALLTYPE *get_IsFileSystem) (FolderItem *This, VARIANT_BOOL *pb);
	HRESULT(STDMETHODCALLTYPE *get_IsBrowsable) (FolderItem *This, VARIANT_BOOL *pb);
	HRESULT(STDMETHODCALLTYPE *get_ModifyDate) (FolderItem *This, DATE *pdt);
	HRESULT(STDMETHODCALLTYPE *put_ModifyDate) (FolderItem *This, DATE dt);
	HRESULT(STDMETHODCALLTYPE *get_Size) (FolderItem *This, LONG *pul);
	HRESULT(STDMETHODCALLTYPE *get_Type) (FolderItem *This, BSTR *pbs);
	HRESULT(STDMETHODCALLTYPE *Verbs) (FolderItem *This, FolderItemVerbs **ppfic);
	HRESULT(STDMETHODCALLTYPE *InvokeVerb) (FolderItem *This, VARIANT vVerb);
	END_INTERFACE
}  FolderItemVtbl;
interface FolderItem
{
	CONST_VTBL struct FolderItemVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define FolderItem_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define FolderItem_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define FolderItem_Release(This)( (This)->lpVtbl -> Release(This) )
#define FolderItem_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define FolderItem_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define FolderItem_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define FolderItem_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define FolderItem_get_Application(This,ppid)( (This)->lpVtbl -> get_Application(This,ppid) )
#define FolderItem_get_Parent(This,ppid)( (This)->lpVtbl -> get_Parent(This,ppid) )
#define FolderItem_get_Name(This,pbs)( (This)->lpVtbl -> get_Name(This,pbs) )
#define FolderItem_put_Name(This,bs)( (This)->lpVtbl -> put_Name(This,bs) )
#define FolderItem_get_Path(This,pbs)( (This)->lpVtbl -> get_Path(This,pbs) )
#define FolderItem_get_GetLink(This,ppid)( (This)->lpVtbl -> get_GetLink(This,ppid) )
#define FolderItem_get_GetFolder(This,ppid)( (This)->lpVtbl -> get_GetFolder(This,ppid) )
#define FolderItem_get_IsLink(This,pb)( (This)->lpVtbl -> get_IsLink(This,pb) )
#define FolderItem_get_IsFolder(This,pb)( (This)->lpVtbl -> get_IsFolder(This,pb) )
#define FolderItem_get_IsFileSystem(This,pb)( (This)->lpVtbl -> get_IsFileSystem(This,pb) )
#define FolderItem_get_IsBrowsable(This,pb)( (This)->lpVtbl -> get_IsBrowsable(This,pb) )
#define FolderItem_get_ModifyDate(This,pdt)( (This)->lpVtbl -> get_ModifyDate(This,pdt) )
#define FolderItem_put_ModifyDate(This,dt)( (This)->lpVtbl -> put_ModifyDate(This,dt) )
#define FolderItem_get_Size(This,pul)( (This)->lpVtbl -> get_Size(This,pul) )
#define FolderItem_get_Type(This,pbs)( (This)->lpVtbl -> get_Type(This,pbs) )
#define FolderItem_Verbs(This,ppfic)( (This)->lpVtbl -> Verbs(This,ppfic) )
#define FolderItem_InvokeVerb(This,vVerb)( (This)->lpVtbl -> InvokeVerb(This,vVerb) )
#endif
#endif
#ifndef __FolderItems_INTERFACE_DEFINED__
#define __FolderItems_INTERFACE_DEFINED__
extern const IID IID_FolderItems;
typedef struct FolderItemsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (FolderItems *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (FolderItems *This);
	ULONG(STDMETHODCALLTYPE *Release) (FolderItems *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (FolderItems *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (FolderItems *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (FolderItems *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (FolderItems *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Count) (FolderItems *This, long *plCount);
	HRESULT(STDMETHODCALLTYPE *get_Application) (FolderItems *This, IDispatch **ppid);
	HRESULT(STDMETHODCALLTYPE *get_Parent) (FolderItems *This, IDispatch **ppid);
	HRESULT(STDMETHODCALLTYPE *Item) (FolderItems *This, VARIANT index, FolderItem **ppid);
	HRESULT(STDMETHODCALLTYPE *_NewEnum) (FolderItems *This, IUnknown **ppunk);
	END_INTERFACE
}  FolderItemsVtbl;
interface FolderItems
{
	CONST_VTBL struct FolderItemsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define FolderItems_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define FolderItems_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define FolderItems_Release(This)( (This)->lpVtbl -> Release(This) )
#define FolderItems_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define FolderItems_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define FolderItems_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define FolderItems_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define FolderItems_get_Count(This,plCount)( (This)->lpVtbl -> get_Count(This,plCount) )
#define FolderItems_get_Application(This,ppid)( (This)->lpVtbl -> get_Application(This,ppid) )
#define FolderItems_get_Parent(This,ppid)( (This)->lpVtbl -> get_Parent(This,ppid) )
#define FolderItems_Item(This,index,ppid)( (This)->lpVtbl -> Item(This,index,ppid) )
#define FolderItems__NewEnum(This,ppunk)( (This)->lpVtbl -> _NewEnum(This,ppunk) )
#endif
#endif
#ifndef __FolderItemVerb_INTERFACE_DEFINED__
#define __FolderItemVerb_INTERFACE_DEFINED__
extern const IID IID_FolderItemVerb;
typedef struct FolderItemVerbVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (FolderItemVerb *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (FolderItemVerb *This);
	ULONG(STDMETHODCALLTYPE *Release) (FolderItemVerb *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (FolderItemVerb *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (FolderItemVerb *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (FolderItemVerb *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (FolderItemVerb *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Application) (FolderItemVerb *This, IDispatch **ppid);
	HRESULT(STDMETHODCALLTYPE *get_Parent) (FolderItemVerb *This, IDispatch **ppid);
	HRESULT(STDMETHODCALLTYPE *get_Name) (FolderItemVerb *This, BSTR *pbs);
	HRESULT(STDMETHODCALLTYPE *DoIt) (FolderItemVerb *This);
	END_INTERFACE
}  FolderItemVerbVtbl;
interface FolderItemVerb
{
	CONST_VTBL struct FolderItemVerbVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define FolderItemVerb_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define FolderItemVerb_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define FolderItemVerb_Release(This)( (This)->lpVtbl -> Release(This) )
#define FolderItemVerb_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define FolderItemVerb_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define FolderItemVerb_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define FolderItemVerb_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define FolderItemVerb_get_Application(This,ppid)( (This)->lpVtbl -> get_Application(This,ppid) )
#define FolderItemVerb_get_Parent(This,ppid)( (This)->lpVtbl -> get_Parent(This,ppid) )
#define FolderItemVerb_get_Name(This,pbs)( (This)->lpVtbl -> get_Name(This,pbs) )
#define FolderItemVerb_DoIt(This)( (This)->lpVtbl -> DoIt(This) )
#endif
#endif
#ifndef __FolderItemVerbs_INTERFACE_DEFINED__
#define __FolderItemVerbs_INTERFACE_DEFINED__
extern const IID IID_FolderItemVerbs;
typedef struct FolderItemVerbsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (FolderItemVerbs *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (FolderItemVerbs *This);
	ULONG(STDMETHODCALLTYPE *Release) (FolderItemVerbs *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (FolderItemVerbs *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (FolderItemVerbs *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (FolderItemVerbs *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (FolderItemVerbs *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Count) (FolderItemVerbs *This, long *plCount);
	HRESULT(STDMETHODCALLTYPE *get_Application) (FolderItemVerbs *This, IDispatch **ppid);
	HRESULT(STDMETHODCALLTYPE *get_Parent) (FolderItemVerbs *This, IDispatch **ppid);
	HRESULT(STDMETHODCALLTYPE *Item) (FolderItemVerbs *This, VARIANT index, FolderItemVerb **ppid);
	HRESULT(STDMETHODCALLTYPE *_NewEnum) (FolderItemVerbs *This, IUnknown **ppunk);
	END_INTERFACE
}  FolderItemVerbsVtbl;
interface FolderItemVerbs
{
	CONST_VTBL struct FolderItemVerbsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define FolderItemVerbs_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define FolderItemVerbs_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define FolderItemVerbs_Release(This)( (This)->lpVtbl -> Release(This) )
#define FolderItemVerbs_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define FolderItemVerbs_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define FolderItemVerbs_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define FolderItemVerbs_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define FolderItemVerbs_get_Count(This,plCount)( (This)->lpVtbl -> get_Count(This,plCount) )
#define FolderItemVerbs_get_Application(This,ppid)( (This)->lpVtbl -> get_Application(This,ppid) )
#define FolderItemVerbs_get_Parent(This,ppid)( (This)->lpVtbl -> get_Parent(This,ppid) )
#define FolderItemVerbs_Item(This,index,ppid)( (This)->lpVtbl -> Item(This,index,ppid) )
#define FolderItemVerbs__NewEnum(This,ppunk)( (This)->lpVtbl -> _NewEnum(This,ppunk) )
#endif
#endif
#ifndef __Folder_INTERFACE_DEFINED__
#define __Folder_INTERFACE_DEFINED__
extern const IID IID_Folder;
typedef struct FolderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (Folder *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (Folder *This);
	ULONG(STDMETHODCALLTYPE *Release) (Folder *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (Folder *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (Folder *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (Folder *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (Folder *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Title) (Folder *This, BSTR *pbs);
	HRESULT(STDMETHODCALLTYPE *get_Application) (Folder *This, IDispatch **ppid);
	HRESULT(STDMETHODCALLTYPE *get_Parent) (Folder *This, IDispatch **ppid);
	HRESULT(STDMETHODCALLTYPE *get_ParentFolder) (Folder *This, Folder **ppsf);
	HRESULT(STDMETHODCALLTYPE *Items) (Folder *This, FolderItems **ppid);
	HRESULT(STDMETHODCALLTYPE *ParseName) (Folder *This, BSTR bName, FolderItem **ppid);
	HRESULT(STDMETHODCALLTYPE *NewFolder) (Folder *This, BSTR bName, VARIANT vOptions);
	HRESULT(STDMETHODCALLTYPE *MoveHere) (Folder *This, VARIANT vItem, VARIANT vOptions);
	HRESULT(STDMETHODCALLTYPE *CopyHere) (Folder *This, VARIANT vItem, VARIANT vOptions);
	HRESULT(STDMETHODCALLTYPE *GetDetailsOf) (Folder *This, VARIANT vItem, int iColumn, BSTR *pbs);
	END_INTERFACE
}  FolderVtbl;
interface Folder
{
	CONST_VTBL struct FolderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define Folder_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define Folder_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define Folder_Release(This)( (This)->lpVtbl -> Release(This) )
#define Folder_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define Folder_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define Folder_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define Folder_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define Folder_get_Title(This,pbs)( (This)->lpVtbl -> get_Title(This,pbs) )
#define Folder_get_Application(This,ppid)( (This)->lpVtbl -> get_Application(This,ppid) )
#define Folder_get_Parent(This,ppid)( (This)->lpVtbl -> get_Parent(This,ppid) )
#define Folder_get_ParentFolder(This,ppsf)( (This)->lpVtbl -> get_ParentFolder(This,ppsf) )
#define Folder_Items(This,ppid)( (This)->lpVtbl -> Items(This,ppid) )
#define Folder_ParseName(This,bName,ppid)( (This)->lpVtbl -> ParseName(This,bName,ppid) )
#define Folder_NewFolder(This,bName,vOptions)( (This)->lpVtbl -> NewFolder(This,bName,vOptions) )
#define Folder_MoveHere(This,vItem,vOptions)( (This)->lpVtbl -> MoveHere(This,vItem,vOptions) )
#define Folder_CopyHere(This,vItem,vOptions)( (This)->lpVtbl -> CopyHere(This,vItem,vOptions) )
#define Folder_GetDetailsOf(This,vItem,iColumn,pbs)( (This)->lpVtbl -> GetDetailsOf(This,vItem,iColumn,pbs) )
#endif
#endif
#ifndef __Folder2_INTERFACE_DEFINED__
#define __Folder2_INTERFACE_DEFINED__
extern const IID IID_Folder2;
typedef struct Folder2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (Folder2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (Folder2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (Folder2 *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (Folder2 *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (Folder2 *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (Folder2 *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (Folder2 *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Title) (Folder2 *This, BSTR *pbs);
	HRESULT(STDMETHODCALLTYPE *get_Application) (Folder2 *This, IDispatch **ppid);
	HRESULT(STDMETHODCALLTYPE *get_Parent) (Folder2 *This, IDispatch **ppid);
	HRESULT(STDMETHODCALLTYPE *get_ParentFolder) (Folder2 *This, Folder **ppsf);
	HRESULT(STDMETHODCALLTYPE *Items) (Folder2 *This, FolderItems **ppid);
	HRESULT(STDMETHODCALLTYPE *ParseName) (Folder2 *This, BSTR bName, FolderItem **ppid);
	HRESULT(STDMETHODCALLTYPE *NewFolder) (Folder2 *This, BSTR bName, VARIANT vOptions);
	HRESULT(STDMETHODCALLTYPE *MoveHere) (Folder2 *This, VARIANT vItem, VARIANT vOptions);
	HRESULT(STDMETHODCALLTYPE *CopyHere) (Folder2 *This, VARIANT vItem, VARIANT vOptions);
	HRESULT(STDMETHODCALLTYPE *GetDetailsOf) (Folder2 *This, VARIANT vItem, int iColumn, BSTR *pbs);
	HRESULT(STDMETHODCALLTYPE *get_Self) (Folder2 *This, FolderItem **ppfi);
	HRESULT(STDMETHODCALLTYPE *get_OfflineStatus) (Folder2 *This, LONG *pul);
	HRESULT(STDMETHODCALLTYPE *Synchronize) (Folder2 *This);
	HRESULT(STDMETHODCALLTYPE *get_HaveToShowWebViewBarricade) (Folder2 *This, VARIANT_BOOL *pbHaveToShowWebViewBarricade);
	HRESULT(STDMETHODCALLTYPE *DismissedWebViewBarricade) (Folder2 *This);
	END_INTERFACE
}  Folder2Vtbl;
interface Folder2
{
	CONST_VTBL struct Folder2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define Folder2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define Folder2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define Folder2_Release(This)( (This)->lpVtbl -> Release(This) )
#define Folder2_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define Folder2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define Folder2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define Folder2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define Folder2_get_Title(This,pbs)( (This)->lpVtbl -> get_Title(This,pbs) )
#define Folder2_get_Application(This,ppid)( (This)->lpVtbl -> get_Application(This,ppid) )
#define Folder2_get_Parent(This,ppid)( (This)->lpVtbl -> get_Parent(This,ppid) )
#define Folder2_get_ParentFolder(This,ppsf)( (This)->lpVtbl -> get_ParentFolder(This,ppsf) )
#define Folder2_Items(This,ppid)( (This)->lpVtbl -> Items(This,ppid) )
#define Folder2_ParseName(This,bName,ppid)( (This)->lpVtbl -> ParseName(This,bName,ppid) )
#define Folder2_NewFolder(This,bName,vOptions)( (This)->lpVtbl -> NewFolder(This,bName,vOptions) )
#define Folder2_MoveHere(This,vItem,vOptions)( (This)->lpVtbl -> MoveHere(This,vItem,vOptions) )
#define Folder2_CopyHere(This,vItem,vOptions)( (This)->lpVtbl -> CopyHere(This,vItem,vOptions) )
#define Folder2_GetDetailsOf(This,vItem,iColumn,pbs)( (This)->lpVtbl -> GetDetailsOf(This,vItem,iColumn,pbs) )
#define Folder2_get_Self(This,ppfi)( (This)->lpVtbl -> get_Self(This,ppfi) )
#define Folder2_get_OfflineStatus(This,pul)( (This)->lpVtbl -> get_OfflineStatus(This,pul) )
#define Folder2_Synchronize(This)( (This)->lpVtbl -> Synchronize(This) )
#define Folder2_get_HaveToShowWebViewBarricade(This,pbHaveToShowWebViewBarricade)( (This)->lpVtbl -> get_HaveToShowWebViewBarricade(This,pbHaveToShowWebViewBarricade) )
#define Folder2_DismissedWebViewBarricade(This)( (This)->lpVtbl -> DismissedWebViewBarricade(This) )
#endif
#endif
#ifndef __Folder3_INTERFACE_DEFINED__
#define __Folder3_INTERFACE_DEFINED__
extern const IID IID_Folder3;
typedef struct Folder3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (Folder3 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (Folder3 *This);
	ULONG(STDMETHODCALLTYPE *Release) (Folder3 *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (Folder3 *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (Folder3 *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (Folder3 *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (Folder3 *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Title) (Folder3 *This, BSTR *pbs);
	HRESULT(STDMETHODCALLTYPE *get_Application) (Folder3 *This, IDispatch **ppid);
	HRESULT(STDMETHODCALLTYPE *get_Parent) (Folder3 *This, IDispatch **ppid);
	HRESULT(STDMETHODCALLTYPE *get_ParentFolder) (Folder3 *This, Folder **ppsf);
	HRESULT(STDMETHODCALLTYPE *Items) (Folder3 *This, FolderItems **ppid);
	HRESULT(STDMETHODCALLTYPE *ParseName) (Folder3 *This, BSTR bName, FolderItem **ppid);
	HRESULT(STDMETHODCALLTYPE *NewFolder) (Folder3 *This, BSTR bName, VARIANT vOptions);
	HRESULT(STDMETHODCALLTYPE *MoveHere) (Folder3 *This, VARIANT vItem, VARIANT vOptions);
	HRESULT(STDMETHODCALLTYPE *CopyHere) (Folder3 *This, VARIANT vItem, VARIANT vOptions);
	HRESULT(STDMETHODCALLTYPE *GetDetailsOf) (Folder3 *This, VARIANT vItem, int iColumn, BSTR *pbs);
	HRESULT(STDMETHODCALLTYPE *get_Self) (Folder3 *This, FolderItem **ppfi);
	HRESULT(STDMETHODCALLTYPE *get_OfflineStatus) (Folder3 *This, LONG *pul);
	HRESULT(STDMETHODCALLTYPE *Synchronize) (Folder3 *This);
	HRESULT(STDMETHODCALLTYPE *get_HaveToShowWebViewBarricade) (Folder3 *This, VARIANT_BOOL *pbHaveToShowWebViewBarricade);
	HRESULT(STDMETHODCALLTYPE *DismissedWebViewBarricade) (Folder3 *This);
	HRESULT(STDMETHODCALLTYPE *get_ShowWebViewBarricade) (Folder3 *This, VARIANT_BOOL *pbShowWebViewBarricade);
	HRESULT(STDMETHODCALLTYPE *put_ShowWebViewBarricade) (Folder3 *This, VARIANT_BOOL bShowWebViewBarricade);
	END_INTERFACE
}  Folder3Vtbl;
interface Folder3
{
	CONST_VTBL struct Folder3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define Folder3_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define Folder3_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define Folder3_Release(This)( (This)->lpVtbl -> Release(This) )
#define Folder3_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define Folder3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define Folder3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define Folder3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define Folder3_get_Title(This,pbs)( (This)->lpVtbl -> get_Title(This,pbs) )
#define Folder3_get_Application(This,ppid)( (This)->lpVtbl -> get_Application(This,ppid) )
#define Folder3_get_Parent(This,ppid)( (This)->lpVtbl -> get_Parent(This,ppid) )
#define Folder3_get_ParentFolder(This,ppsf)( (This)->lpVtbl -> get_ParentFolder(This,ppsf) )
#define Folder3_Items(This,ppid)( (This)->lpVtbl -> Items(This,ppid) )
#define Folder3_ParseName(This,bName,ppid)( (This)->lpVtbl -> ParseName(This,bName,ppid) )
#define Folder3_NewFolder(This,bName,vOptions)( (This)->lpVtbl -> NewFolder(This,bName,vOptions) )
#define Folder3_MoveHere(This,vItem,vOptions)( (This)->lpVtbl -> MoveHere(This,vItem,vOptions) )
#define Folder3_CopyHere(This,vItem,vOptions)( (This)->lpVtbl -> CopyHere(This,vItem,vOptions) )
#define Folder3_GetDetailsOf(This,vItem,iColumn,pbs)( (This)->lpVtbl -> GetDetailsOf(This,vItem,iColumn,pbs) )
#define Folder3_get_Self(This,ppfi)( (This)->lpVtbl -> get_Self(This,ppfi) )
#define Folder3_get_OfflineStatus(This,pul)( (This)->lpVtbl -> get_OfflineStatus(This,pul) )
#define Folder3_Synchronize(This)( (This)->lpVtbl -> Synchronize(This) )
#define Folder3_get_HaveToShowWebViewBarricade(This,pbHaveToShowWebViewBarricade)( (This)->lpVtbl -> get_HaveToShowWebViewBarricade(This,pbHaveToShowWebViewBarricade) )
#define Folder3_DismissedWebViewBarricade(This)( (This)->lpVtbl -> DismissedWebViewBarricade(This) )
#define Folder3_get_ShowWebViewBarricade(This,pbShowWebViewBarricade)( (This)->lpVtbl -> get_ShowWebViewBarricade(This,pbShowWebViewBarricade) )
#define Folder3_put_ShowWebViewBarricade(This,bShowWebViewBarricade)( (This)->lpVtbl -> put_ShowWebViewBarricade(This,bShowWebViewBarricade) )
#endif
#endif
#ifndef __FolderItem2_INTERFACE_DEFINED__
#define __FolderItem2_INTERFACE_DEFINED__
extern const IID IID_FolderItem2;
typedef struct FolderItem2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (FolderItem2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (FolderItem2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (FolderItem2 *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (FolderItem2 *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (FolderItem2 *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (FolderItem2 *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (FolderItem2 *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Application) (FolderItem2 *This, IDispatch **ppid);
	HRESULT(STDMETHODCALLTYPE *get_Parent) (FolderItem2 *This, IDispatch **ppid);
	HRESULT(STDMETHODCALLTYPE *get_Name) (FolderItem2 *This, BSTR *pbs);
	HRESULT(STDMETHODCALLTYPE *put_Name) (FolderItem2 *This, BSTR bs);
	HRESULT(STDMETHODCALLTYPE *get_Path) (FolderItem2 *This, BSTR *pbs);
	HRESULT(STDMETHODCALLTYPE *get_GetLink) (FolderItem2 *This, IDispatch **ppid);
	HRESULT(STDMETHODCALLTYPE *get_GetFolder) (FolderItem2 *This, IDispatch **ppid);
	HRESULT(STDMETHODCALLTYPE *get_IsLink) (FolderItem2 *This, VARIANT_BOOL *pb);
	HRESULT(STDMETHODCALLTYPE *get_IsFolder) (FolderItem2 *This, VARIANT_BOOL *pb);
	HRESULT(STDMETHODCALLTYPE *get_IsFileSystem) (FolderItem2 *This, VARIANT_BOOL *pb);
	HRESULT(STDMETHODCALLTYPE *get_IsBrowsable) (FolderItem2 *This, VARIANT_BOOL *pb);
	HRESULT(STDMETHODCALLTYPE *get_ModifyDate) (FolderItem2 *This, DATE *pdt);
	HRESULT(STDMETHODCALLTYPE *put_ModifyDate) (FolderItem2 *This, DATE dt);
	HRESULT(STDMETHODCALLTYPE *get_Size) (FolderItem2 *This, LONG *pul);
	HRESULT(STDMETHODCALLTYPE *get_Type) (FolderItem2 *This, BSTR *pbs);
	HRESULT(STDMETHODCALLTYPE *Verbs) (FolderItem2 *This, FolderItemVerbs **ppfic);
	HRESULT(STDMETHODCALLTYPE *InvokeVerb) (FolderItem2 *This, VARIANT vVerb);
	HRESULT(STDMETHODCALLTYPE *InvokeVerbEx) (FolderItem2 *This, VARIANT vVerb, VARIANT vArgs);
	HRESULT(STDMETHODCALLTYPE *ExtendedProperty) (FolderItem2 *This, BSTR bstrPropName, VARIANT *pvRet);
	END_INTERFACE
}  FolderItem2Vtbl;
interface FolderItem2
{
	CONST_VTBL struct FolderItem2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define FolderItem2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define FolderItem2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define FolderItem2_Release(This)( (This)->lpVtbl -> Release(This) )
#define FolderItem2_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define FolderItem2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define FolderItem2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define FolderItem2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define FolderItem2_get_Application(This,ppid)( (This)->lpVtbl -> get_Application(This,ppid) )
#define FolderItem2_get_Parent(This,ppid)( (This)->lpVtbl -> get_Parent(This,ppid) )
#define FolderItem2_get_Name(This,pbs)( (This)->lpVtbl -> get_Name(This,pbs) )
#define FolderItem2_put_Name(This,bs)( (This)->lpVtbl -> put_Name(This,bs) )
#define FolderItem2_get_Path(This,pbs)( (This)->lpVtbl -> get_Path(This,pbs) )
#define FolderItem2_get_GetLink(This,ppid)( (This)->lpVtbl -> get_GetLink(This,ppid) )
#define FolderItem2_get_GetFolder(This,ppid)( (This)->lpVtbl -> get_GetFolder(This,ppid) )
#define FolderItem2_get_IsLink(This,pb)( (This)->lpVtbl -> get_IsLink(This,pb) )
#define FolderItem2_get_IsFolder(This,pb)( (This)->lpVtbl -> get_IsFolder(This,pb) )
#define FolderItem2_get_IsFileSystem(This,pb)( (This)->lpVtbl -> get_IsFileSystem(This,pb) )
#define FolderItem2_get_IsBrowsable(This,pb)( (This)->lpVtbl -> get_IsBrowsable(This,pb) )
#define FolderItem2_get_ModifyDate(This,pdt)( (This)->lpVtbl -> get_ModifyDate(This,pdt) )
#define FolderItem2_put_ModifyDate(This,dt)( (This)->lpVtbl -> put_ModifyDate(This,dt) )
#define FolderItem2_get_Size(This,pul)( (This)->lpVtbl -> get_Size(This,pul) )
#define FolderItem2_get_Type(This,pbs)( (This)->lpVtbl -> get_Type(This,pbs) )
#define FolderItem2_Verbs(This,ppfic)( (This)->lpVtbl -> Verbs(This,ppfic) )
#define FolderItem2_InvokeVerb(This,vVerb)( (This)->lpVtbl -> InvokeVerb(This,vVerb) )
#define FolderItem2_InvokeVerbEx(This,vVerb,vArgs)( (This)->lpVtbl -> InvokeVerbEx(This,vVerb,vArgs) )
#define FolderItem2_ExtendedProperty(This,bstrPropName,pvRet)( (This)->lpVtbl -> ExtendedProperty(This,bstrPropName,pvRet) )
#endif
#endif
extern const CLSID CLSID_ShellFolderItem;
#ifndef __FolderItems2_INTERFACE_DEFINED__
#define __FolderItems2_INTERFACE_DEFINED__
extern const IID IID_FolderItems2;
typedef struct FolderItems2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (FolderItems2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (FolderItems2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (FolderItems2 *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (FolderItems2 *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (FolderItems2 *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (FolderItems2 *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (FolderItems2 *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Count) (FolderItems2 *This, long *plCount);
	HRESULT(STDMETHODCALLTYPE *get_Application) (FolderItems2 *This, IDispatch **ppid);
	HRESULT(STDMETHODCALLTYPE *get_Parent) (FolderItems2 *This, IDispatch **ppid);
	HRESULT(STDMETHODCALLTYPE *Item) (FolderItems2 *This, VARIANT index, FolderItem **ppid);
	HRESULT(STDMETHODCALLTYPE *_NewEnum) (FolderItems2 *This, IUnknown **ppunk);
	HRESULT(STDMETHODCALLTYPE *InvokeVerbEx) (FolderItems2 *This, VARIANT vVerb, VARIANT vArgs);
	END_INTERFACE
}  FolderItems2Vtbl;
interface FolderItems2
{
	CONST_VTBL struct FolderItems2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define FolderItems2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define FolderItems2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define FolderItems2_Release(This)( (This)->lpVtbl -> Release(This) )
#define FolderItems2_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define FolderItems2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define FolderItems2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define FolderItems2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define FolderItems2_get_Count(This,plCount)( (This)->lpVtbl -> get_Count(This,plCount) )
#define FolderItems2_get_Application(This,ppid)( (This)->lpVtbl -> get_Application(This,ppid) )
#define FolderItems2_get_Parent(This,ppid)( (This)->lpVtbl -> get_Parent(This,ppid) )
#define FolderItems2_Item(This,index,ppid)( (This)->lpVtbl -> Item(This,index,ppid) )
#define FolderItems2__NewEnum(This,ppunk)( (This)->lpVtbl -> _NewEnum(This,ppunk) )
#define FolderItems2_InvokeVerbEx(This,vVerb,vArgs)( (This)->lpVtbl -> InvokeVerbEx(This,vVerb,vArgs) )
#endif
#endif
#ifndef __FolderItems3_INTERFACE_DEFINED__
#define __FolderItems3_INTERFACE_DEFINED__
extern const IID IID_FolderItems3;
typedef struct FolderItems3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (FolderItems3 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (FolderItems3 *This);
	ULONG(STDMETHODCALLTYPE *Release) (FolderItems3 *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (FolderItems3 *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (FolderItems3 *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (FolderItems3 *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (FolderItems3 *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Count) (FolderItems3 *This, long *plCount);
	HRESULT(STDMETHODCALLTYPE *get_Application) (FolderItems3 *This, IDispatch **ppid);
	HRESULT(STDMETHODCALLTYPE *get_Parent) (FolderItems3 *This, IDispatch **ppid);
	HRESULT(STDMETHODCALLTYPE *Item) (FolderItems3 *This, VARIANT index, FolderItem **ppid);
	HRESULT(STDMETHODCALLTYPE *_NewEnum) (FolderItems3 *This, IUnknown **ppunk);
	HRESULT(STDMETHODCALLTYPE *InvokeVerbEx) (FolderItems3 *This, VARIANT vVerb, VARIANT vArgs);
	HRESULT(STDMETHODCALLTYPE *Filter) (FolderItems3 *This, long grfFlags, BSTR bstrFileSpec);
	HRESULT(STDMETHODCALLTYPE *get_Verbs) (FolderItems3 *This, FolderItemVerbs **ppfic);
	END_INTERFACE
}  FolderItems3Vtbl;
interface FolderItems3
{
	CONST_VTBL struct FolderItems3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define FolderItems3_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define FolderItems3_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define FolderItems3_Release(This)( (This)->lpVtbl -> Release(This) )
#define FolderItems3_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define FolderItems3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define FolderItems3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define FolderItems3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define FolderItems3_get_Count(This,plCount)( (This)->lpVtbl -> get_Count(This,plCount) )
#define FolderItems3_get_Application(This,ppid)( (This)->lpVtbl -> get_Application(This,ppid) )
#define FolderItems3_get_Parent(This,ppid)( (This)->lpVtbl -> get_Parent(This,ppid) )
#define FolderItems3_Item(This,index,ppid)( (This)->lpVtbl -> Item(This,index,ppid) )
#define FolderItems3__NewEnum(This,ppunk)( (This)->lpVtbl -> _NewEnum(This,ppunk) )
#define FolderItems3_InvokeVerbEx(This,vVerb,vArgs)( (This)->lpVtbl -> InvokeVerbEx(This,vVerb,vArgs) )
#define FolderItems3_Filter(This,grfFlags,bstrFileSpec)( (This)->lpVtbl -> Filter(This,grfFlags,bstrFileSpec) )
#define FolderItems3_get_Verbs(This,ppfic)( (This)->lpVtbl -> get_Verbs(This,ppfic) )
#endif
#endif
#ifndef __IShellLinkDual_INTERFACE_DEFINED__
#define __IShellLinkDual_INTERFACE_DEFINED__
extern const IID IID_IShellLinkDual;
typedef struct IShellLinkDualVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IShellLinkDual *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IShellLinkDual *This);
	ULONG(STDMETHODCALLTYPE *Release) (IShellLinkDual *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IShellLinkDual *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IShellLinkDual *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IShellLinkDual *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IShellLinkDual *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Path) (IShellLinkDual *This, BSTR *pbs);
	HRESULT(STDMETHODCALLTYPE *put_Path) (IShellLinkDual *This, BSTR bs);
	HRESULT(STDMETHODCALLTYPE *get_Description) (IShellLinkDual *This, BSTR *pbs);
	HRESULT(STDMETHODCALLTYPE *put_Description) (IShellLinkDual *This, BSTR bs);
	HRESULT(STDMETHODCALLTYPE *get_WorkingDirectory) (IShellLinkDual *This, BSTR *pbs);
	HRESULT(STDMETHODCALLTYPE *put_WorkingDirectory) (IShellLinkDual *This, BSTR bs);
	HRESULT(STDMETHODCALLTYPE *get_Arguments) (IShellLinkDual *This, BSTR *pbs);
	HRESULT(STDMETHODCALLTYPE *put_Arguments) (IShellLinkDual *This, BSTR bs);
	HRESULT(STDMETHODCALLTYPE *get_Hotkey) (IShellLinkDual *This, int *piHK);
	HRESULT(STDMETHODCALLTYPE *put_Hotkey) (IShellLinkDual *This, int iHK);
	HRESULT(STDMETHODCALLTYPE *get_ShowCommand) (IShellLinkDual *This, int *piShowCommand);
	HRESULT(STDMETHODCALLTYPE *put_ShowCommand) (IShellLinkDual *This, int iShowCommand);
	HRESULT(STDMETHODCALLTYPE *Resolve) (IShellLinkDual *This, int fFlags);
	HRESULT(STDMETHODCALLTYPE *GetIconLocation) (IShellLinkDual *This, BSTR *pbs, int *piIcon);
	HRESULT(STDMETHODCALLTYPE *SetIconLocation) (IShellLinkDual *This, BSTR bs, int iIcon);
	HRESULT(STDMETHODCALLTYPE *Save) (IShellLinkDual *This, VARIANT vWhere);
	END_INTERFACE
}  IShellLinkDualVtbl;
interface IShellLinkDual
{
	CONST_VTBL struct IShellLinkDualVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IShellLinkDual_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IShellLinkDual_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IShellLinkDual_Release(This)( (This)->lpVtbl -> Release(This) )
#define IShellLinkDual_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IShellLinkDual_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IShellLinkDual_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IShellLinkDual_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IShellLinkDual_get_Path(This,pbs)( (This)->lpVtbl -> get_Path(This,pbs) )
#define IShellLinkDual_put_Path(This,bs)( (This)->lpVtbl -> put_Path(This,bs) )
#define IShellLinkDual_get_Description(This,pbs)( (This)->lpVtbl -> get_Description(This,pbs) )
#define IShellLinkDual_put_Description(This,bs)( (This)->lpVtbl -> put_Description(This,bs) )
#define IShellLinkDual_get_WorkingDirectory(This,pbs)( (This)->lpVtbl -> get_WorkingDirectory(This,pbs) )
#define IShellLinkDual_put_WorkingDirectory(This,bs)( (This)->lpVtbl -> put_WorkingDirectory(This,bs) )
#define IShellLinkDual_get_Arguments(This,pbs)( (This)->lpVtbl -> get_Arguments(This,pbs) )
#define IShellLinkDual_put_Arguments(This,bs)( (This)->lpVtbl -> put_Arguments(This,bs) )
#define IShellLinkDual_get_Hotkey(This,piHK)( (This)->lpVtbl -> get_Hotkey(This,piHK) )
#define IShellLinkDual_put_Hotkey(This,iHK)( (This)->lpVtbl -> put_Hotkey(This,iHK) )
#define IShellLinkDual_get_ShowCommand(This,piShowCommand)( (This)->lpVtbl -> get_ShowCommand(This,piShowCommand) )
#define IShellLinkDual_put_ShowCommand(This,iShowCommand)( (This)->lpVtbl -> put_ShowCommand(This,iShowCommand) )
#define IShellLinkDual_Resolve(This,fFlags)( (This)->lpVtbl -> Resolve(This,fFlags) )
#define IShellLinkDual_GetIconLocation(This,pbs,piIcon)( (This)->lpVtbl -> GetIconLocation(This,pbs,piIcon) )
#define IShellLinkDual_SetIconLocation(This,bs,iIcon)( (This)->lpVtbl -> SetIconLocation(This,bs,iIcon) )
#define IShellLinkDual_Save(This,vWhere)( (This)->lpVtbl -> Save(This,vWhere) )
#endif
#endif
#ifndef __IShellLinkDual2_INTERFACE_DEFINED__
#define __IShellLinkDual2_INTERFACE_DEFINED__
extern const IID IID_IShellLinkDual2;
typedef struct IShellLinkDual2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IShellLinkDual2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IShellLinkDual2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IShellLinkDual2 *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IShellLinkDual2 *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IShellLinkDual2 *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IShellLinkDual2 *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IShellLinkDual2 *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Path) (IShellLinkDual2 *This, BSTR *pbs);
	HRESULT(STDMETHODCALLTYPE *put_Path) (IShellLinkDual2 *This, BSTR bs);
	HRESULT(STDMETHODCALLTYPE *get_Description) (IShellLinkDual2 *This, BSTR *pbs);
	HRESULT(STDMETHODCALLTYPE *put_Description) (IShellLinkDual2 *This, BSTR bs);
	HRESULT(STDMETHODCALLTYPE *get_WorkingDirectory) (IShellLinkDual2 *This, BSTR *pbs);
	HRESULT(STDMETHODCALLTYPE *put_WorkingDirectory) (IShellLinkDual2 *This, BSTR bs);
	HRESULT(STDMETHODCALLTYPE *get_Arguments) (IShellLinkDual2 *This, BSTR *pbs);
	HRESULT(STDMETHODCALLTYPE *put_Arguments) (IShellLinkDual2 *This, BSTR bs);
	HRESULT(STDMETHODCALLTYPE *get_Hotkey) (IShellLinkDual2 *This, int *piHK);
	HRESULT(STDMETHODCALLTYPE *put_Hotkey) (IShellLinkDual2 *This, int iHK);
	HRESULT(STDMETHODCALLTYPE *get_ShowCommand) (IShellLinkDual2 *This, int *piShowCommand);
	HRESULT(STDMETHODCALLTYPE *put_ShowCommand) (IShellLinkDual2 *This, int iShowCommand);
	HRESULT(STDMETHODCALLTYPE *Resolve) (IShellLinkDual2 *This, int fFlags);
	HRESULT(STDMETHODCALLTYPE *GetIconLocation) (IShellLinkDual2 *This, BSTR *pbs, int *piIcon);
	HRESULT(STDMETHODCALLTYPE *SetIconLocation) (IShellLinkDual2 *This, BSTR bs, int iIcon);
	HRESULT(STDMETHODCALLTYPE *Save) (IShellLinkDual2 *This, VARIANT vWhere);
	HRESULT(STDMETHODCALLTYPE *get_Target) (IShellLinkDual2 *This, FolderItem **ppfi);
	END_INTERFACE
}  IShellLinkDual2Vtbl;
interface IShellLinkDual2
{
	CONST_VTBL struct IShellLinkDual2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IShellLinkDual2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IShellLinkDual2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IShellLinkDual2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IShellLinkDual2_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IShellLinkDual2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IShellLinkDual2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IShellLinkDual2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IShellLinkDual2_get_Path(This,pbs)( (This)->lpVtbl -> get_Path(This,pbs) )
#define IShellLinkDual2_put_Path(This,bs)( (This)->lpVtbl -> put_Path(This,bs) )
#define IShellLinkDual2_get_Description(This,pbs)( (This)->lpVtbl -> get_Description(This,pbs) )
#define IShellLinkDual2_put_Description(This,bs)( (This)->lpVtbl -> put_Description(This,bs) )
#define IShellLinkDual2_get_WorkingDirectory(This,pbs)( (This)->lpVtbl -> get_WorkingDirectory(This,pbs) )
#define IShellLinkDual2_put_WorkingDirectory(This,bs)( (This)->lpVtbl -> put_WorkingDirectory(This,bs) )
#define IShellLinkDual2_get_Arguments(This,pbs)( (This)->lpVtbl -> get_Arguments(This,pbs) )
#define IShellLinkDual2_put_Arguments(This,bs)( (This)->lpVtbl -> put_Arguments(This,bs) )
#define IShellLinkDual2_get_Hotkey(This,piHK)( (This)->lpVtbl -> get_Hotkey(This,piHK) )
#define IShellLinkDual2_put_Hotkey(This,iHK)( (This)->lpVtbl -> put_Hotkey(This,iHK) )
#define IShellLinkDual2_get_ShowCommand(This,piShowCommand)( (This)->lpVtbl -> get_ShowCommand(This,piShowCommand) )
#define IShellLinkDual2_put_ShowCommand(This,iShowCommand)( (This)->lpVtbl -> put_ShowCommand(This,iShowCommand) )
#define IShellLinkDual2_Resolve(This,fFlags)( (This)->lpVtbl -> Resolve(This,fFlags) )
#define IShellLinkDual2_GetIconLocation(This,pbs,piIcon)( (This)->lpVtbl -> GetIconLocation(This,pbs,piIcon) )
#define IShellLinkDual2_SetIconLocation(This,bs,iIcon)( (This)->lpVtbl -> SetIconLocation(This,bs,iIcon) )
#define IShellLinkDual2_Save(This,vWhere)( (This)->lpVtbl -> Save(This,vWhere) )
#define IShellLinkDual2_get_Target(This,ppfi)( (This)->lpVtbl -> get_Target(This,ppfi) )
#endif
#endif
extern const CLSID CLSID_ShellLinkObject;
#ifndef __IShellFolderViewDual_INTERFACE_DEFINED__
#define __IShellFolderViewDual_INTERFACE_DEFINED__
extern const IID IID_IShellFolderViewDual;
typedef struct IShellFolderViewDualVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IShellFolderViewDual *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IShellFolderViewDual *This);
	ULONG(STDMETHODCALLTYPE *Release) (IShellFolderViewDual *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IShellFolderViewDual *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IShellFolderViewDual *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IShellFolderViewDual *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IShellFolderViewDual *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Application) (IShellFolderViewDual *This, IDispatch **ppid);
	HRESULT(STDMETHODCALLTYPE *get_Parent) (IShellFolderViewDual *This, IDispatch **ppid);
	HRESULT(STDMETHODCALLTYPE *get_Folder) (IShellFolderViewDual *This, Folder **ppid);
	HRESULT(STDMETHODCALLTYPE *SelectedItems) (IShellFolderViewDual *This, FolderItems **ppid);
	HRESULT(STDMETHODCALLTYPE *get_FocusedItem) (IShellFolderViewDual *This, FolderItem **ppid);
	HRESULT(STDMETHODCALLTYPE *SelectItem) (IShellFolderViewDual *This, VARIANT *pvfi, int dwFlags);
	HRESULT(STDMETHODCALLTYPE *PopupItemMenu) (IShellFolderViewDual *This, FolderItem *pfi, VARIANT vx, VARIANT vy, BSTR *pbs);
	HRESULT(STDMETHODCALLTYPE *get_Script) (IShellFolderViewDual *This, IDispatch **ppDisp);
	HRESULT(STDMETHODCALLTYPE *get_ViewOptions) (IShellFolderViewDual *This, long *plViewOptions);
	END_INTERFACE
}  IShellFolderViewDualVtbl;
interface IShellFolderViewDual
{
	CONST_VTBL struct IShellFolderViewDualVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IShellFolderViewDual_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IShellFolderViewDual_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IShellFolderViewDual_Release(This)( (This)->lpVtbl -> Release(This) )
#define IShellFolderViewDual_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IShellFolderViewDual_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IShellFolderViewDual_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IShellFolderViewDual_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IShellFolderViewDual_get_Application(This,ppid)( (This)->lpVtbl -> get_Application(This,ppid) )
#define IShellFolderViewDual_get_Parent(This,ppid)( (This)->lpVtbl -> get_Parent(This,ppid) )
#define IShellFolderViewDual_get_Folder(This,ppid)( (This)->lpVtbl -> get_Folder(This,ppid) )
#define IShellFolderViewDual_SelectedItems(This,ppid)( (This)->lpVtbl -> SelectedItems(This,ppid) )
#define IShellFolderViewDual_get_FocusedItem(This,ppid)( (This)->lpVtbl -> get_FocusedItem(This,ppid) )
#define IShellFolderViewDual_SelectItem(This,pvfi,dwFlags)( (This)->lpVtbl -> SelectItem(This,pvfi,dwFlags) )
#define IShellFolderViewDual_PopupItemMenu(This,pfi,vx,vy,pbs)( (This)->lpVtbl -> PopupItemMenu(This,pfi,vx,vy,pbs) )
#define IShellFolderViewDual_get_Script(This,ppDisp)( (This)->lpVtbl -> get_Script(This,ppDisp) )
#define IShellFolderViewDual_get_ViewOptions(This,plViewOptions)( (This)->lpVtbl -> get_ViewOptions(This,plViewOptions) )
#endif
#endif
#ifndef __IShellFolderViewDual2_INTERFACE_DEFINED__
#define __IShellFolderViewDual2_INTERFACE_DEFINED__
extern const IID IID_IShellFolderViewDual2;
typedef struct IShellFolderViewDual2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IShellFolderViewDual2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IShellFolderViewDual2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IShellFolderViewDual2 *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IShellFolderViewDual2 *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IShellFolderViewDual2 *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IShellFolderViewDual2 *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IShellFolderViewDual2 *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Application) (IShellFolderViewDual2 *This, IDispatch **ppid);
	HRESULT(STDMETHODCALLTYPE *get_Parent) (IShellFolderViewDual2 *This, IDispatch **ppid);
	HRESULT(STDMETHODCALLTYPE *get_Folder) (IShellFolderViewDual2 *This, Folder **ppid);
	HRESULT(STDMETHODCALLTYPE *SelectedItems) (IShellFolderViewDual2 *This, FolderItems **ppid);
	HRESULT(STDMETHODCALLTYPE *get_FocusedItem) (IShellFolderViewDual2 *This, FolderItem **ppid);
	HRESULT(STDMETHODCALLTYPE *SelectItem) (IShellFolderViewDual2 *This, VARIANT *pvfi, int dwFlags);
	HRESULT(STDMETHODCALLTYPE *PopupItemMenu) (IShellFolderViewDual2 *This, FolderItem *pfi, VARIANT vx, VARIANT vy, BSTR *pbs);
	HRESULT(STDMETHODCALLTYPE *get_Script) (IShellFolderViewDual2 *This, IDispatch **ppDisp);
	HRESULT(STDMETHODCALLTYPE *get_ViewOptions) (IShellFolderViewDual2 *This, long *plViewOptions);
	HRESULT(STDMETHODCALLTYPE *get_CurrentViewMode) (IShellFolderViewDual2 *This, UINT *pViewMode);
	HRESULT(STDMETHODCALLTYPE *put_CurrentViewMode) (IShellFolderViewDual2 *This, UINT ViewMode);
	HRESULT(STDMETHODCALLTYPE *SelectItemRelative) (IShellFolderViewDual2 *This, int iRelative);
	END_INTERFACE
}  IShellFolderViewDual2Vtbl;
interface IShellFolderViewDual2
{
	CONST_VTBL struct IShellFolderViewDual2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IShellFolderViewDual2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IShellFolderViewDual2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IShellFolderViewDual2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IShellFolderViewDual2_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IShellFolderViewDual2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IShellFolderViewDual2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IShellFolderViewDual2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IShellFolderViewDual2_get_Application(This,ppid)( (This)->lpVtbl -> get_Application(This,ppid) )
#define IShellFolderViewDual2_get_Parent(This,ppid)( (This)->lpVtbl -> get_Parent(This,ppid) )
#define IShellFolderViewDual2_get_Folder(This,ppid)( (This)->lpVtbl -> get_Folder(This,ppid) )
#define IShellFolderViewDual2_SelectedItems(This,ppid)( (This)->lpVtbl -> SelectedItems(This,ppid) )
#define IShellFolderViewDual2_get_FocusedItem(This,ppid)( (This)->lpVtbl -> get_FocusedItem(This,ppid) )
#define IShellFolderViewDual2_SelectItem(This,pvfi,dwFlags)( (This)->lpVtbl -> SelectItem(This,pvfi,dwFlags) )
#define IShellFolderViewDual2_PopupItemMenu(This,pfi,vx,vy,pbs)( (This)->lpVtbl -> PopupItemMenu(This,pfi,vx,vy,pbs) )
#define IShellFolderViewDual2_get_Script(This,ppDisp)( (This)->lpVtbl -> get_Script(This,ppDisp) )
#define IShellFolderViewDual2_get_ViewOptions(This,plViewOptions)( (This)->lpVtbl -> get_ViewOptions(This,plViewOptions) )
#define IShellFolderViewDual2_get_CurrentViewMode(This,pViewMode)( (This)->lpVtbl -> get_CurrentViewMode(This,pViewMode) )
#define IShellFolderViewDual2_put_CurrentViewMode(This,ViewMode)( (This)->lpVtbl -> put_CurrentViewMode(This,ViewMode) )
#define IShellFolderViewDual2_SelectItemRelative(This,iRelative)( (This)->lpVtbl -> SelectItemRelative(This,iRelative) )
#endif
#endif
#ifndef __IShellFolderViewDual3_INTERFACE_DEFINED__
#define __IShellFolderViewDual3_INTERFACE_DEFINED__
extern const IID IID_IShellFolderViewDual3;
typedef struct IShellFolderViewDual3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IShellFolderViewDual3 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IShellFolderViewDual3 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IShellFolderViewDual3 *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IShellFolderViewDual3 *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IShellFolderViewDual3 *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IShellFolderViewDual3 *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IShellFolderViewDual3 *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Application) (IShellFolderViewDual3 *This, IDispatch **ppid);
	HRESULT(STDMETHODCALLTYPE *get_Parent) (IShellFolderViewDual3 *This, IDispatch **ppid);
	HRESULT(STDMETHODCALLTYPE *get_Folder) (IShellFolderViewDual3 *This, Folder **ppid);
	HRESULT(STDMETHODCALLTYPE *SelectedItems) (IShellFolderViewDual3 *This, FolderItems **ppid);
	HRESULT(STDMETHODCALLTYPE *get_FocusedItem) (IShellFolderViewDual3 *This, FolderItem **ppid);
	HRESULT(STDMETHODCALLTYPE *SelectItem) (IShellFolderViewDual3 *This, VARIANT *pvfi, int dwFlags);
	HRESULT(STDMETHODCALLTYPE *PopupItemMenu) (IShellFolderViewDual3 *This, FolderItem *pfi, VARIANT vx, VARIANT vy, BSTR *pbs);
	HRESULT(STDMETHODCALLTYPE *get_Script) (IShellFolderViewDual3 *This, IDispatch **ppDisp);
	HRESULT(STDMETHODCALLTYPE *get_ViewOptions) (IShellFolderViewDual3 *This, long *plViewOptions);
	HRESULT(STDMETHODCALLTYPE *get_CurrentViewMode) (IShellFolderViewDual3 *This, UINT *pViewMode);
	HRESULT(STDMETHODCALLTYPE *put_CurrentViewMode) (IShellFolderViewDual3 *This, UINT ViewMode);
	HRESULT(STDMETHODCALLTYPE *SelectItemRelative) (IShellFolderViewDual3 *This, int iRelative);
	HRESULT(STDMETHODCALLTYPE *get_GroupBy) (IShellFolderViewDual3 *This, BSTR *pbstrGroupBy);
	HRESULT(STDMETHODCALLTYPE *put_GroupBy) (IShellFolderViewDual3 *This, BSTR bstrGroupBy);
	HRESULT(STDMETHODCALLTYPE *get_FolderFlags) (IShellFolderViewDual3 *This, DWORD *pdwFlags);
	HRESULT(STDMETHODCALLTYPE *put_FolderFlags) (IShellFolderViewDual3 *This, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE *get_SortColumns) (IShellFolderViewDual3 *This, BSTR *pbstrSortColumns);
	HRESULT(STDMETHODCALLTYPE *put_SortColumns) (IShellFolderViewDual3 *This, BSTR bstrSortColumns);
	HRESULT(STDMETHODCALLTYPE *put_IconSize) (IShellFolderViewDual3 *This, int iIconSize);
	HRESULT(STDMETHODCALLTYPE *get_IconSize) (IShellFolderViewDual3 *This, int *piIconSize);
	HRESULT(STDMETHODCALLTYPE *FilterView) (IShellFolderViewDual3 *This, BSTR bstrFilterText);
	END_INTERFACE
}  IShellFolderViewDual3Vtbl;
interface IShellFolderViewDual3
{
	CONST_VTBL struct IShellFolderViewDual3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IShellFolderViewDual3_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IShellFolderViewDual3_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IShellFolderViewDual3_Release(This)( (This)->lpVtbl -> Release(This) )
#define IShellFolderViewDual3_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IShellFolderViewDual3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IShellFolderViewDual3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IShellFolderViewDual3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IShellFolderViewDual3_get_Application(This,ppid)( (This)->lpVtbl -> get_Application(This,ppid) )
#define IShellFolderViewDual3_get_Parent(This,ppid)( (This)->lpVtbl -> get_Parent(This,ppid) )
#define IShellFolderViewDual3_get_Folder(This,ppid)( (This)->lpVtbl -> get_Folder(This,ppid) )
#define IShellFolderViewDual3_SelectedItems(This,ppid)( (This)->lpVtbl -> SelectedItems(This,ppid) )
#define IShellFolderViewDual3_get_FocusedItem(This,ppid)( (This)->lpVtbl -> get_FocusedItem(This,ppid) )
#define IShellFolderViewDual3_SelectItem(This,pvfi,dwFlags)( (This)->lpVtbl -> SelectItem(This,pvfi,dwFlags) )
#define IShellFolderViewDual3_PopupItemMenu(This,pfi,vx,vy,pbs)( (This)->lpVtbl -> PopupItemMenu(This,pfi,vx,vy,pbs) )
#define IShellFolderViewDual3_get_Script(This,ppDisp)( (This)->lpVtbl -> get_Script(This,ppDisp) )
#define IShellFolderViewDual3_get_ViewOptions(This,plViewOptions)( (This)->lpVtbl -> get_ViewOptions(This,plViewOptions) )
#define IShellFolderViewDual3_get_CurrentViewMode(This,pViewMode)( (This)->lpVtbl -> get_CurrentViewMode(This,pViewMode) )
#define IShellFolderViewDual3_put_CurrentViewMode(This,ViewMode)( (This)->lpVtbl -> put_CurrentViewMode(This,ViewMode) )
#define IShellFolderViewDual3_SelectItemRelative(This,iRelative)( (This)->lpVtbl -> SelectItemRelative(This,iRelative) )
#define IShellFolderViewDual3_get_GroupBy(This,pbstrGroupBy)( (This)->lpVtbl -> get_GroupBy(This,pbstrGroupBy) )
#define IShellFolderViewDual3_put_GroupBy(This,bstrGroupBy)( (This)->lpVtbl -> put_GroupBy(This,bstrGroupBy) )
#define IShellFolderViewDual3_get_FolderFlags(This,pdwFlags)( (This)->lpVtbl -> get_FolderFlags(This,pdwFlags) )
#define IShellFolderViewDual3_put_FolderFlags(This,dwFlags)( (This)->lpVtbl -> put_FolderFlags(This,dwFlags) )
#define IShellFolderViewDual3_get_SortColumns(This,pbstrSortColumns)( (This)->lpVtbl -> get_SortColumns(This,pbstrSortColumns) )
#define IShellFolderViewDual3_put_SortColumns(This,bstrSortColumns)( (This)->lpVtbl -> put_SortColumns(This,bstrSortColumns) )
#define IShellFolderViewDual3_put_IconSize(This,iIconSize)( (This)->lpVtbl -> put_IconSize(This,iIconSize) )
#define IShellFolderViewDual3_get_IconSize(This,piIconSize)( (This)->lpVtbl -> get_IconSize(This,piIconSize) )
#define IShellFolderViewDual3_FilterView(This,bstrFilterText)( (This)->lpVtbl -> FilterView(This,bstrFilterText) )
#endif
#endif
extern const CLSID CLSID_ShellFolderView;
#ifndef __IShellDispatch_INTERFACE_DEFINED__
#define __IShellDispatch_INTERFACE_DEFINED__
extern const IID IID_IShellDispatch;
typedef struct IShellDispatchVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IShellDispatch *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IShellDispatch *This);
	ULONG(STDMETHODCALLTYPE *Release) (IShellDispatch *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IShellDispatch *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IShellDispatch *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IShellDispatch *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IShellDispatch *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Application) (IShellDispatch *This, IDispatch **ppid);
	HRESULT(STDMETHODCALLTYPE *get_Parent) (IShellDispatch *This, IDispatch **ppid);
	HRESULT(STDMETHODCALLTYPE *NameSpace) (IShellDispatch *This, VARIANT vDir, Folder **ppsdf);
	HRESULT(STDMETHODCALLTYPE *BrowseForFolder) (IShellDispatch *This, long Hwnd, BSTR Title, long Options, VARIANT RootFolder, Folder **ppsdf);
	HRESULT(STDMETHODCALLTYPE *Windows) (IShellDispatch *This, IDispatch **ppid);
	HRESULT(STDMETHODCALLTYPE *Open) (IShellDispatch *This, VARIANT vDir);
	HRESULT(STDMETHODCALLTYPE *Explore) (IShellDispatch *This, VARIANT vDir);
	HRESULT(STDMETHODCALLTYPE *MinimizeAll) (IShellDispatch *This);
	HRESULT(STDMETHODCALLTYPE *UndoMinimizeALL) (IShellDispatch *This);
	HRESULT(STDMETHODCALLTYPE *FileRun) (IShellDispatch *This);
	HRESULT(STDMETHODCALLTYPE *CascadeWindows) (IShellDispatch *This);
	HRESULT(STDMETHODCALLTYPE *TileVertically) (IShellDispatch *This);
	HRESULT(STDMETHODCALLTYPE *TileHorizontally) (IShellDispatch *This);
	HRESULT(STDMETHODCALLTYPE *ShutdownWindows) (IShellDispatch *This);
	HRESULT(STDMETHODCALLTYPE *Suspend) (IShellDispatch *This);
	HRESULT(STDMETHODCALLTYPE *EjectPC) (IShellDispatch *This);
	HRESULT(STDMETHODCALLTYPE *SetTime) (IShellDispatch *This);
	HRESULT(STDMETHODCALLTYPE *TrayProperties) (IShellDispatch *This);
	HRESULT(STDMETHODCALLTYPE *Help) (IShellDispatch *This);
	HRESULT(STDMETHODCALLTYPE *FindFiles) (IShellDispatch *This);
	HRESULT(STDMETHODCALLTYPE *FindComputer) (IShellDispatch *This);
	HRESULT(STDMETHODCALLTYPE *RefreshMenu) (IShellDispatch *This);
	HRESULT(STDMETHODCALLTYPE *ControlPanelItem) (IShellDispatch *This, BSTR bstrDir);
	END_INTERFACE
}  IShellDispatchVtbl;
interface IShellDispatch
{
	CONST_VTBL struct IShellDispatchVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IShellDispatch_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IShellDispatch_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IShellDispatch_Release(This)( (This)->lpVtbl -> Release(This) )
#define IShellDispatch_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IShellDispatch_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IShellDispatch_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IShellDispatch_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IShellDispatch_get_Application(This,ppid)( (This)->lpVtbl -> get_Application(This,ppid) )
#define IShellDispatch_get_Parent(This,ppid)( (This)->lpVtbl -> get_Parent(This,ppid) )
#define IShellDispatch_NameSpace(This,vDir,ppsdf)( (This)->lpVtbl -> NameSpace(This,vDir,ppsdf) )
#define IShellDispatch_BrowseForFolder(This,Hwnd,Title,Options,RootFolder,ppsdf)( (This)->lpVtbl -> BrowseForFolder(This,Hwnd,Title,Options,RootFolder,ppsdf) )
#define IShellDispatch_Windows(This,ppid)( (This)->lpVtbl -> Windows(This,ppid) )
#define IShellDispatch_Open(This,vDir)( (This)->lpVtbl -> Open(This,vDir) )
#define IShellDispatch_Explore(This,vDir)( (This)->lpVtbl -> Explore(This,vDir) )
#define IShellDispatch_MinimizeAll(This)( (This)->lpVtbl -> MinimizeAll(This) )
#define IShellDispatch_UndoMinimizeALL(This)( (This)->lpVtbl -> UndoMinimizeALL(This) )
#define IShellDispatch_FileRun(This)( (This)->lpVtbl -> FileRun(This) )
#define IShellDispatch_CascadeWindows(This)( (This)->lpVtbl -> CascadeWindows(This) )
#define IShellDispatch_TileVertically(This)( (This)->lpVtbl -> TileVertically(This) )
#define IShellDispatch_TileHorizontally(This)( (This)->lpVtbl -> TileHorizontally(This) )
#define IShellDispatch_ShutdownWindows(This)( (This)->lpVtbl -> ShutdownWindows(This) )
#define IShellDispatch_Suspend(This)( (This)->lpVtbl -> Suspend(This) )
#define IShellDispatch_EjectPC(This)( (This)->lpVtbl -> EjectPC(This) )
#define IShellDispatch_SetTime(This)( (This)->lpVtbl -> SetTime(This) )
#define IShellDispatch_TrayProperties(This)( (This)->lpVtbl -> TrayProperties(This) )
#define IShellDispatch_Help(This)( (This)->lpVtbl -> Help(This) )
#define IShellDispatch_FindFiles(This)( (This)->lpVtbl -> FindFiles(This) )
#define IShellDispatch_FindComputer(This)( (This)->lpVtbl -> FindComputer(This) )
#define IShellDispatch_RefreshMenu(This)( (This)->lpVtbl -> RefreshMenu(This) )
#define IShellDispatch_ControlPanelItem(This,bstrDir)( (This)->lpVtbl -> ControlPanelItem(This,bstrDir) )
#endif
#endif
#ifndef __IShellDispatch2_INTERFACE_DEFINED__
#define __IShellDispatch2_INTERFACE_DEFINED__
extern const IID IID_IShellDispatch2;
typedef struct IShellDispatch2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IShellDispatch2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IShellDispatch2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IShellDispatch2 *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IShellDispatch2 *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IShellDispatch2 *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IShellDispatch2 *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IShellDispatch2 *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Application) (IShellDispatch2 *This, IDispatch **ppid);
	HRESULT(STDMETHODCALLTYPE *get_Parent) (IShellDispatch2 *This, IDispatch **ppid);
	HRESULT(STDMETHODCALLTYPE *NameSpace) (IShellDispatch2 *This, VARIANT vDir, Folder **ppsdf);
	HRESULT(STDMETHODCALLTYPE *BrowseForFolder) (IShellDispatch2 *This, long Hwnd, BSTR Title, long Options, VARIANT RootFolder, Folder **ppsdf);
	HRESULT(STDMETHODCALLTYPE *Windows) (IShellDispatch2 *This, IDispatch **ppid);
	HRESULT(STDMETHODCALLTYPE *Open) (IShellDispatch2 *This, VARIANT vDir);
	HRESULT(STDMETHODCALLTYPE *Explore) (IShellDispatch2 *This, VARIANT vDir);
	HRESULT(STDMETHODCALLTYPE *MinimizeAll) (IShellDispatch2 *This);
	HRESULT(STDMETHODCALLTYPE *UndoMinimizeALL) (IShellDispatch2 *This);
	HRESULT(STDMETHODCALLTYPE *FileRun) (IShellDispatch2 *This);
	HRESULT(STDMETHODCALLTYPE *CascadeWindows) (IShellDispatch2 *This);
	HRESULT(STDMETHODCALLTYPE *TileVertically) (IShellDispatch2 *This);
	HRESULT(STDMETHODCALLTYPE *TileHorizontally) (IShellDispatch2 *This);
	HRESULT(STDMETHODCALLTYPE *ShutdownWindows) (IShellDispatch2 *This);
	HRESULT(STDMETHODCALLTYPE *Suspend) (IShellDispatch2 *This);
	HRESULT(STDMETHODCALLTYPE *EjectPC) (IShellDispatch2 *This);
	HRESULT(STDMETHODCALLTYPE *SetTime) (IShellDispatch2 *This);
	HRESULT(STDMETHODCALLTYPE *TrayProperties) (IShellDispatch2 *This);
	HRESULT(STDMETHODCALLTYPE *Help) (IShellDispatch2 *This);
	HRESULT(STDMETHODCALLTYPE *FindFiles) (IShellDispatch2 *This);
	HRESULT(STDMETHODCALLTYPE *FindComputer) (IShellDispatch2 *This);
	HRESULT(STDMETHODCALLTYPE *RefreshMenu) (IShellDispatch2 *This);
	HRESULT(STDMETHODCALLTYPE *ControlPanelItem) (IShellDispatch2 *This, BSTR bstrDir);
	HRESULT(STDMETHODCALLTYPE *IsRestricted) (IShellDispatch2 *This, BSTR Group, BSTR Restriction, long *plRestrictValue);
	HRESULT(STDMETHODCALLTYPE *ShellExecute) (IShellDispatch2 *This, BSTR File, VARIANT vArgs, VARIANT vDir, VARIANT vOperation, VARIANT vShow);
	HRESULT(STDMETHODCALLTYPE *FindPrinter) (IShellDispatch2 *This, BSTR name, BSTR location, BSTR model);
	HRESULT(STDMETHODCALLTYPE *GetSystemInformation) (IShellDispatch2 *This, BSTR name, VARIANT *pv);
	HRESULT(STDMETHODCALLTYPE *ServiceStart) (IShellDispatch2 *This, BSTR ServiceName, VARIANT Persistent, VARIANT *pSuccess);
	HRESULT(STDMETHODCALLTYPE *ServiceStop) (IShellDispatch2 *This, BSTR ServiceName, VARIANT Persistent, VARIANT *pSuccess);
	HRESULT(STDMETHODCALLTYPE *IsServiceRunning) (IShellDispatch2 *This, BSTR ServiceName, VARIANT *pRunning);
	HRESULT(STDMETHODCALLTYPE *CanStartStopService) (IShellDispatch2 *This, BSTR ServiceName, VARIANT *pCanStartStop);
	HRESULT(STDMETHODCALLTYPE *ShowBrowserBar) (IShellDispatch2 *This, BSTR bstrClsid, VARIANT bShow, VARIANT *pSuccess);
	END_INTERFACE
}  IShellDispatch2Vtbl;
interface IShellDispatch2
{
	CONST_VTBL struct IShellDispatch2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IShellDispatch2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IShellDispatch2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IShellDispatch2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IShellDispatch2_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IShellDispatch2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IShellDispatch2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IShellDispatch2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IShellDispatch2_get_Application(This,ppid)( (This)->lpVtbl -> get_Application(This,ppid) )
#define IShellDispatch2_get_Parent(This,ppid)( (This)->lpVtbl -> get_Parent(This,ppid) )
#define IShellDispatch2_NameSpace(This,vDir,ppsdf)( (This)->lpVtbl -> NameSpace(This,vDir,ppsdf) )
#define IShellDispatch2_BrowseForFolder(This,Hwnd,Title,Options,RootFolder,ppsdf)( (This)->lpVtbl -> BrowseForFolder(This,Hwnd,Title,Options,RootFolder,ppsdf) )
#define IShellDispatch2_Windows(This,ppid)( (This)->lpVtbl -> Windows(This,ppid) )
#define IShellDispatch2_Open(This,vDir)( (This)->lpVtbl -> Open(This,vDir) )
#define IShellDispatch2_Explore(This,vDir)( (This)->lpVtbl -> Explore(This,vDir) )
#define IShellDispatch2_MinimizeAll(This)( (This)->lpVtbl -> MinimizeAll(This) )
#define IShellDispatch2_UndoMinimizeALL(This)( (This)->lpVtbl -> UndoMinimizeALL(This) )
#define IShellDispatch2_FileRun(This)( (This)->lpVtbl -> FileRun(This) )
#define IShellDispatch2_CascadeWindows(This)( (This)->lpVtbl -> CascadeWindows(This) )
#define IShellDispatch2_TileVertically(This)( (This)->lpVtbl -> TileVertically(This) )
#define IShellDispatch2_TileHorizontally(This)( (This)->lpVtbl -> TileHorizontally(This) )
#define IShellDispatch2_ShutdownWindows(This)( (This)->lpVtbl -> ShutdownWindows(This) )
#define IShellDispatch2_Suspend(This)( (This)->lpVtbl -> Suspend(This) )
#define IShellDispatch2_EjectPC(This)( (This)->lpVtbl -> EjectPC(This) )
#define IShellDispatch2_SetTime(This)( (This)->lpVtbl -> SetTime(This) )
#define IShellDispatch2_TrayProperties(This)( (This)->lpVtbl -> TrayProperties(This) )
#define IShellDispatch2_Help(This)( (This)->lpVtbl -> Help(This) )
#define IShellDispatch2_FindFiles(This)( (This)->lpVtbl -> FindFiles(This) )
#define IShellDispatch2_FindComputer(This)( (This)->lpVtbl -> FindComputer(This) )
#define IShellDispatch2_RefreshMenu(This)( (This)->lpVtbl -> RefreshMenu(This) )
#define IShellDispatch2_ControlPanelItem(This,bstrDir)( (This)->lpVtbl -> ControlPanelItem(This,bstrDir) )
#define IShellDispatch2_IsRestricted(This,Group,Restriction,plRestrictValue)( (This)->lpVtbl -> IsRestricted(This,Group,Restriction,plRestrictValue) )
#define IShellDispatch2_ShellExecute(This,File,vArgs,vDir,vOperation,vShow)( (This)->lpVtbl -> ShellExecute(This,File,vArgs,vDir,vOperation,vShow) )
#define IShellDispatch2_FindPrinter(This,name,location,model)( (This)->lpVtbl -> FindPrinter(This,name,location,model) )
#define IShellDispatch2_GetSystemInformation(This,name,pv)( (This)->lpVtbl -> GetSystemInformation(This,name,pv) )
#define IShellDispatch2_ServiceStart(This,ServiceName,Persistent,pSuccess)( (This)->lpVtbl -> ServiceStart(This,ServiceName,Persistent,pSuccess) )
#define IShellDispatch2_ServiceStop(This,ServiceName,Persistent,pSuccess)( (This)->lpVtbl -> ServiceStop(This,ServiceName,Persistent,pSuccess) )
#define IShellDispatch2_IsServiceRunning(This,ServiceName,pRunning)( (This)->lpVtbl -> IsServiceRunning(This,ServiceName,pRunning) )
#define IShellDispatch2_CanStartStopService(This,ServiceName,pCanStartStop)( (This)->lpVtbl -> CanStartStopService(This,ServiceName,pCanStartStop) )
#define IShellDispatch2_ShowBrowserBar(This,bstrClsid,bShow,pSuccess)( (This)->lpVtbl -> ShowBrowserBar(This,bstrClsid,bShow,pSuccess) )
#endif
#endif
#ifndef __IShellDispatch3_INTERFACE_DEFINED__
#define __IShellDispatch3_INTERFACE_DEFINED__
extern const IID IID_IShellDispatch3;
typedef struct IShellDispatch3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IShellDispatch3 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IShellDispatch3 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IShellDispatch3 *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IShellDispatch3 *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IShellDispatch3 *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IShellDispatch3 *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IShellDispatch3 *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Application) (IShellDispatch3 *This, IDispatch **ppid);
	HRESULT(STDMETHODCALLTYPE *get_Parent) (IShellDispatch3 *This, IDispatch **ppid);
	HRESULT(STDMETHODCALLTYPE *NameSpace) (IShellDispatch3 *This, VARIANT vDir, Folder **ppsdf);
	HRESULT(STDMETHODCALLTYPE *BrowseForFolder) (IShellDispatch3 *This, long Hwnd, BSTR Title, long Options, VARIANT RootFolder, Folder **ppsdf);
	HRESULT(STDMETHODCALLTYPE *Windows) (IShellDispatch3 *This, IDispatch **ppid);
	HRESULT(STDMETHODCALLTYPE *Open) (IShellDispatch3 *This, VARIANT vDir);
	HRESULT(STDMETHODCALLTYPE *Explore) (IShellDispatch3 *This, VARIANT vDir);
	HRESULT(STDMETHODCALLTYPE *MinimizeAll) (IShellDispatch3 *This);
	HRESULT(STDMETHODCALLTYPE *UndoMinimizeALL) (IShellDispatch3 *This);
	HRESULT(STDMETHODCALLTYPE *FileRun) (IShellDispatch3 *This);
	HRESULT(STDMETHODCALLTYPE *CascadeWindows) (IShellDispatch3 *This);
	HRESULT(STDMETHODCALLTYPE *TileVertically) (IShellDispatch3 *This);
	HRESULT(STDMETHODCALLTYPE *TileHorizontally) (IShellDispatch3 *This);
	HRESULT(STDMETHODCALLTYPE *ShutdownWindows) (IShellDispatch3 *This);
	HRESULT(STDMETHODCALLTYPE *Suspend) (IShellDispatch3 *This);
	HRESULT(STDMETHODCALLTYPE *EjectPC) (IShellDispatch3 *This);
	HRESULT(STDMETHODCALLTYPE *SetTime) (IShellDispatch3 *This);
	HRESULT(STDMETHODCALLTYPE *TrayProperties) (IShellDispatch3 *This);
	HRESULT(STDMETHODCALLTYPE *Help) (IShellDispatch3 *This);
	HRESULT(STDMETHODCALLTYPE *FindFiles) (IShellDispatch3 *This);
	HRESULT(STDMETHODCALLTYPE *FindComputer) (IShellDispatch3 *This);
	HRESULT(STDMETHODCALLTYPE *RefreshMenu) (IShellDispatch3 *This);
	HRESULT(STDMETHODCALLTYPE *ControlPanelItem) (IShellDispatch3 *This, BSTR bstrDir);
	HRESULT(STDMETHODCALLTYPE *IsRestricted) (IShellDispatch3 *This, BSTR Group, BSTR Restriction, long *plRestrictValue);
	HRESULT(STDMETHODCALLTYPE *ShellExecute) (IShellDispatch3 *This, BSTR File, VARIANT vArgs, VARIANT vDir, VARIANT vOperation, VARIANT vShow);
	HRESULT(STDMETHODCALLTYPE *FindPrinter) (IShellDispatch3 *This, BSTR name, BSTR location, BSTR model);
	HRESULT(STDMETHODCALLTYPE *GetSystemInformation) (IShellDispatch3 *This, BSTR name, VARIANT *pv);
	HRESULT(STDMETHODCALLTYPE *ServiceStart) (IShellDispatch3 *This, BSTR ServiceName, VARIANT Persistent, VARIANT *pSuccess);
	HRESULT(STDMETHODCALLTYPE *ServiceStop) (IShellDispatch3 *This, BSTR ServiceName, VARIANT Persistent, VARIANT *pSuccess);
	HRESULT(STDMETHODCALLTYPE *IsServiceRunning) (IShellDispatch3 *This, BSTR ServiceName, VARIANT *pRunning);
	HRESULT(STDMETHODCALLTYPE *CanStartStopService) (IShellDispatch3 *This, BSTR ServiceName, VARIANT *pCanStartStop);
	HRESULT(STDMETHODCALLTYPE *ShowBrowserBar) (IShellDispatch3 *This, BSTR bstrClsid, VARIANT bShow, VARIANT *pSuccess);
	HRESULT(STDMETHODCALLTYPE *AddToRecent) (IShellDispatch3 *This, VARIANT varFile, BSTR bstrCategory);
	END_INTERFACE
}  IShellDispatch3Vtbl;
interface IShellDispatch3
{
	CONST_VTBL struct IShellDispatch3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IShellDispatch3_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IShellDispatch3_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IShellDispatch3_Release(This)( (This)->lpVtbl -> Release(This) )
#define IShellDispatch3_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IShellDispatch3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IShellDispatch3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IShellDispatch3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IShellDispatch3_get_Application(This,ppid)( (This)->lpVtbl -> get_Application(This,ppid) )
#define IShellDispatch3_get_Parent(This,ppid)( (This)->lpVtbl -> get_Parent(This,ppid) )
#define IShellDispatch3_NameSpace(This,vDir,ppsdf)( (This)->lpVtbl -> NameSpace(This,vDir,ppsdf) )
#define IShellDispatch3_BrowseForFolder(This,Hwnd,Title,Options,RootFolder,ppsdf)( (This)->lpVtbl -> BrowseForFolder(This,Hwnd,Title,Options,RootFolder,ppsdf) )
#define IShellDispatch3_Windows(This,ppid)( (This)->lpVtbl -> Windows(This,ppid) )
#define IShellDispatch3_Open(This,vDir)( (This)->lpVtbl -> Open(This,vDir) )
#define IShellDispatch3_Explore(This,vDir)( (This)->lpVtbl -> Explore(This,vDir) )
#define IShellDispatch3_MinimizeAll(This)( (This)->lpVtbl -> MinimizeAll(This) )
#define IShellDispatch3_UndoMinimizeALL(This)( (This)->lpVtbl -> UndoMinimizeALL(This) )
#define IShellDispatch3_FileRun(This)( (This)->lpVtbl -> FileRun(This) )
#define IShellDispatch3_CascadeWindows(This)( (This)->lpVtbl -> CascadeWindows(This) )
#define IShellDispatch3_TileVertically(This)( (This)->lpVtbl -> TileVertically(This) )
#define IShellDispatch3_TileHorizontally(This)( (This)->lpVtbl -> TileHorizontally(This) )
#define IShellDispatch3_ShutdownWindows(This)( (This)->lpVtbl -> ShutdownWindows(This) )
#define IShellDispatch3_Suspend(This)( (This)->lpVtbl -> Suspend(This) )
#define IShellDispatch3_EjectPC(This)( (This)->lpVtbl -> EjectPC(This) )
#define IShellDispatch3_SetTime(This)( (This)->lpVtbl -> SetTime(This) )
#define IShellDispatch3_TrayProperties(This)( (This)->lpVtbl -> TrayProperties(This) )
#define IShellDispatch3_Help(This)( (This)->lpVtbl -> Help(This) )
#define IShellDispatch3_FindFiles(This)( (This)->lpVtbl -> FindFiles(This) )
#define IShellDispatch3_FindComputer(This)( (This)->lpVtbl -> FindComputer(This) )
#define IShellDispatch3_RefreshMenu(This)( (This)->lpVtbl -> RefreshMenu(This) )
#define IShellDispatch3_ControlPanelItem(This,bstrDir)( (This)->lpVtbl -> ControlPanelItem(This,bstrDir) )
#define IShellDispatch3_IsRestricted(This,Group,Restriction,plRestrictValue)( (This)->lpVtbl -> IsRestricted(This,Group,Restriction,plRestrictValue) )
#define IShellDispatch3_ShellExecute(This,File,vArgs,vDir,vOperation,vShow)( (This)->lpVtbl -> ShellExecute(This,File,vArgs,vDir,vOperation,vShow) )
#define IShellDispatch3_FindPrinter(This,name,location,model)( (This)->lpVtbl -> FindPrinter(This,name,location,model) )
#define IShellDispatch3_GetSystemInformation(This,name,pv)( (This)->lpVtbl -> GetSystemInformation(This,name,pv) )
#define IShellDispatch3_ServiceStart(This,ServiceName,Persistent,pSuccess)( (This)->lpVtbl -> ServiceStart(This,ServiceName,Persistent,pSuccess) )
#define IShellDispatch3_ServiceStop(This,ServiceName,Persistent,pSuccess)( (This)->lpVtbl -> ServiceStop(This,ServiceName,Persistent,pSuccess) )
#define IShellDispatch3_IsServiceRunning(This,ServiceName,pRunning)( (This)->lpVtbl -> IsServiceRunning(This,ServiceName,pRunning) )
#define IShellDispatch3_CanStartStopService(This,ServiceName,pCanStartStop)( (This)->lpVtbl -> CanStartStopService(This,ServiceName,pCanStartStop) )
#define IShellDispatch3_ShowBrowserBar(This,bstrClsid,bShow,pSuccess)( (This)->lpVtbl -> ShowBrowserBar(This,bstrClsid,bShow,pSuccess) )
#define IShellDispatch3_AddToRecent(This,varFile,bstrCategory)( (This)->lpVtbl -> AddToRecent(This,varFile,bstrCategory) )
#endif
#endif
#ifndef __IShellDispatch4_INTERFACE_DEFINED__
#define __IShellDispatch4_INTERFACE_DEFINED__
extern const IID IID_IShellDispatch4;
typedef struct IShellDispatch4Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IShellDispatch4 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IShellDispatch4 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IShellDispatch4 *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IShellDispatch4 *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IShellDispatch4 *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IShellDispatch4 *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IShellDispatch4 *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Application) (IShellDispatch4 *This, IDispatch **ppid);
	HRESULT(STDMETHODCALLTYPE *get_Parent) (IShellDispatch4 *This, IDispatch **ppid);
	HRESULT(STDMETHODCALLTYPE *NameSpace) (IShellDispatch4 *This, VARIANT vDir, Folder **ppsdf);
	HRESULT(STDMETHODCALLTYPE *BrowseForFolder) (IShellDispatch4 *This, long Hwnd, BSTR Title, long Options, VARIANT RootFolder, Folder **ppsdf);
	HRESULT(STDMETHODCALLTYPE *Windows) (IShellDispatch4 *This, IDispatch **ppid);
	HRESULT(STDMETHODCALLTYPE *Open) (IShellDispatch4 *This, VARIANT vDir);
	HRESULT(STDMETHODCALLTYPE *Explore) (IShellDispatch4 *This, VARIANT vDir);
	HRESULT(STDMETHODCALLTYPE *MinimizeAll) (IShellDispatch4 *This);
	HRESULT(STDMETHODCALLTYPE *UndoMinimizeALL) (IShellDispatch4 *This);
	HRESULT(STDMETHODCALLTYPE *FileRun) (IShellDispatch4 *This);
	HRESULT(STDMETHODCALLTYPE *CascadeWindows) (IShellDispatch4 *This);
	HRESULT(STDMETHODCALLTYPE *TileVertically) (IShellDispatch4 *This);
	HRESULT(STDMETHODCALLTYPE *TileHorizontally) (IShellDispatch4 *This);
	HRESULT(STDMETHODCALLTYPE *ShutdownWindows) (IShellDispatch4 *This);
	HRESULT(STDMETHODCALLTYPE *Suspend) (IShellDispatch4 *This);
	HRESULT(STDMETHODCALLTYPE *EjectPC) (IShellDispatch4 *This);
	HRESULT(STDMETHODCALLTYPE *SetTime) (IShellDispatch4 *This);
	HRESULT(STDMETHODCALLTYPE *TrayProperties) (IShellDispatch4 *This);
	HRESULT(STDMETHODCALLTYPE *Help) (IShellDispatch4 *This);
	HRESULT(STDMETHODCALLTYPE *FindFiles) (IShellDispatch4 *This);
	HRESULT(STDMETHODCALLTYPE *FindComputer) (IShellDispatch4 *This);
	HRESULT(STDMETHODCALLTYPE *RefreshMenu) (IShellDispatch4 *This);
	HRESULT(STDMETHODCALLTYPE *ControlPanelItem) (IShellDispatch4 *This, BSTR bstrDir);
	HRESULT(STDMETHODCALLTYPE *IsRestricted) (IShellDispatch4 *This, BSTR Group, BSTR Restriction, long *plRestrictValue);
	HRESULT(STDMETHODCALLTYPE *ShellExecute) (IShellDispatch4 *This, BSTR File, VARIANT vArgs, VARIANT vDir, VARIANT vOperation, VARIANT vShow);
	HRESULT(STDMETHODCALLTYPE *FindPrinter) (IShellDispatch4 *This, BSTR name, BSTR location, BSTR model);
	HRESULT(STDMETHODCALLTYPE *GetSystemInformation) (IShellDispatch4 *This, BSTR name, VARIANT *pv);
	HRESULT(STDMETHODCALLTYPE *ServiceStart) (IShellDispatch4 *This, BSTR ServiceName, VARIANT Persistent, VARIANT *pSuccess);
	HRESULT(STDMETHODCALLTYPE *ServiceStop) (IShellDispatch4 *This, BSTR ServiceName, VARIANT Persistent, VARIANT *pSuccess);
	HRESULT(STDMETHODCALLTYPE *IsServiceRunning) (IShellDispatch4 *This, BSTR ServiceName, VARIANT *pRunning);
	HRESULT(STDMETHODCALLTYPE *CanStartStopService) (IShellDispatch4 *This, BSTR ServiceName, VARIANT *pCanStartStop);
	HRESULT(STDMETHODCALLTYPE *ShowBrowserBar) (IShellDispatch4 *This, BSTR bstrClsid, VARIANT bShow, VARIANT *pSuccess);
	HRESULT(STDMETHODCALLTYPE *AddToRecent) (IShellDispatch4 *This, VARIANT varFile, BSTR bstrCategory);
	HRESULT(STDMETHODCALLTYPE *WindowsSecurity) (IShellDispatch4 *This);
	HRESULT(STDMETHODCALLTYPE *ToggleDesktop) (IShellDispatch4 *This);
	HRESULT(STDMETHODCALLTYPE *ExplorerPolicy) (IShellDispatch4 *This, BSTR bstrPolicyName, VARIANT *pValue);
	HRESULT(STDMETHODCALLTYPE *GetSetting) (IShellDispatch4 *This, long lSetting, VARIANT_BOOL *pResult);
	END_INTERFACE
}  IShellDispatch4Vtbl;
interface IShellDispatch4
{
	CONST_VTBL struct IShellDispatch4Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IShellDispatch4_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IShellDispatch4_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IShellDispatch4_Release(This)( (This)->lpVtbl -> Release(This) )
#define IShellDispatch4_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IShellDispatch4_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IShellDispatch4_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IShellDispatch4_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IShellDispatch4_get_Application(This,ppid)( (This)->lpVtbl -> get_Application(This,ppid) )
#define IShellDispatch4_get_Parent(This,ppid)( (This)->lpVtbl -> get_Parent(This,ppid) )
#define IShellDispatch4_NameSpace(This,vDir,ppsdf)( (This)->lpVtbl -> NameSpace(This,vDir,ppsdf) )
#define IShellDispatch4_BrowseForFolder(This,Hwnd,Title,Options,RootFolder,ppsdf)( (This)->lpVtbl -> BrowseForFolder(This,Hwnd,Title,Options,RootFolder,ppsdf) )
#define IShellDispatch4_Windows(This,ppid)( (This)->lpVtbl -> Windows(This,ppid) )
#define IShellDispatch4_Open(This,vDir)( (This)->lpVtbl -> Open(This,vDir) )
#define IShellDispatch4_Explore(This,vDir)( (This)->lpVtbl -> Explore(This,vDir) )
#define IShellDispatch4_MinimizeAll(This)( (This)->lpVtbl -> MinimizeAll(This) )
#define IShellDispatch4_UndoMinimizeALL(This)( (This)->lpVtbl -> UndoMinimizeALL(This) )
#define IShellDispatch4_FileRun(This)( (This)->lpVtbl -> FileRun(This) )
#define IShellDispatch4_CascadeWindows(This)( (This)->lpVtbl -> CascadeWindows(This) )
#define IShellDispatch4_TileVertically(This)( (This)->lpVtbl -> TileVertically(This) )
#define IShellDispatch4_TileHorizontally(This)( (This)->lpVtbl -> TileHorizontally(This) )
#define IShellDispatch4_ShutdownWindows(This)( (This)->lpVtbl -> ShutdownWindows(This) )
#define IShellDispatch4_Suspend(This)( (This)->lpVtbl -> Suspend(This) )
#define IShellDispatch4_EjectPC(This)( (This)->lpVtbl -> EjectPC(This) )
#define IShellDispatch4_SetTime(This)( (This)->lpVtbl -> SetTime(This) )
#define IShellDispatch4_TrayProperties(This)( (This)->lpVtbl -> TrayProperties(This) )
#define IShellDispatch4_Help(This)( (This)->lpVtbl -> Help(This) )
#define IShellDispatch4_FindFiles(This)( (This)->lpVtbl -> FindFiles(This) )
#define IShellDispatch4_FindComputer(This)( (This)->lpVtbl -> FindComputer(This) )
#define IShellDispatch4_RefreshMenu(This)( (This)->lpVtbl -> RefreshMenu(This) )
#define IShellDispatch4_ControlPanelItem(This,bstrDir)( (This)->lpVtbl -> ControlPanelItem(This,bstrDir) )
#define IShellDispatch4_IsRestricted(This,Group,Restriction,plRestrictValue)( (This)->lpVtbl -> IsRestricted(This,Group,Restriction,plRestrictValue) )
#define IShellDispatch4_ShellExecute(This,File,vArgs,vDir,vOperation,vShow)( (This)->lpVtbl -> ShellExecute(This,File,vArgs,vDir,vOperation,vShow) )
#define IShellDispatch4_FindPrinter(This,name,location,model)( (This)->lpVtbl -> FindPrinter(This,name,location,model) )
#define IShellDispatch4_GetSystemInformation(This,name,pv)( (This)->lpVtbl -> GetSystemInformation(This,name,pv) )
#define IShellDispatch4_ServiceStart(This,ServiceName,Persistent,pSuccess)( (This)->lpVtbl -> ServiceStart(This,ServiceName,Persistent,pSuccess) )
#define IShellDispatch4_ServiceStop(This,ServiceName,Persistent,pSuccess)( (This)->lpVtbl -> ServiceStop(This,ServiceName,Persistent,pSuccess) )
#define IShellDispatch4_IsServiceRunning(This,ServiceName,pRunning)( (This)->lpVtbl -> IsServiceRunning(This,ServiceName,pRunning) )
#define IShellDispatch4_CanStartStopService(This,ServiceName,pCanStartStop)( (This)->lpVtbl -> CanStartStopService(This,ServiceName,pCanStartStop) )
#define IShellDispatch4_ShowBrowserBar(This,bstrClsid,bShow,pSuccess)( (This)->lpVtbl -> ShowBrowserBar(This,bstrClsid,bShow,pSuccess) )
#define IShellDispatch4_AddToRecent(This,varFile,bstrCategory)( (This)->lpVtbl -> AddToRecent(This,varFile,bstrCategory) )
#define IShellDispatch4_WindowsSecurity(This)( (This)->lpVtbl -> WindowsSecurity(This) )
#define IShellDispatch4_ToggleDesktop(This)( (This)->lpVtbl -> ToggleDesktop(This) )
#define IShellDispatch4_ExplorerPolicy(This,bstrPolicyName,pValue)( (This)->lpVtbl -> ExplorerPolicy(This,bstrPolicyName,pValue) )
#define IShellDispatch4_GetSetting(This,lSetting,pResult)( (This)->lpVtbl -> GetSetting(This,lSetting,pResult) )
#endif
#endif
#ifndef __IShellDispatch5_INTERFACE_DEFINED__
#define __IShellDispatch5_INTERFACE_DEFINED__
extern const IID IID_IShellDispatch5;
typedef struct IShellDispatch5Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IShellDispatch5 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IShellDispatch5 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IShellDispatch5 *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IShellDispatch5 *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IShellDispatch5 *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IShellDispatch5 *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IShellDispatch5 *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *get_Application) (IShellDispatch5 *This, IDispatch **ppid);
	HRESULT(STDMETHODCALLTYPE *get_Parent) (IShellDispatch5 *This, IDispatch **ppid);
	HRESULT(STDMETHODCALLTYPE *NameSpace) (IShellDispatch5 *This, VARIANT vDir, Folder **ppsdf);
	HRESULT(STDMETHODCALLTYPE *BrowseForFolder) (IShellDispatch5 *This, long Hwnd, BSTR Title, long Options, VARIANT RootFolder, Folder **ppsdf);
	HRESULT(STDMETHODCALLTYPE *Windows) (IShellDispatch5 *This, IDispatch **ppid);
	HRESULT(STDMETHODCALLTYPE *Open) (IShellDispatch5 *This, VARIANT vDir);
	HRESULT(STDMETHODCALLTYPE *Explore) (IShellDispatch5 *This, VARIANT vDir);
	HRESULT(STDMETHODCALLTYPE *MinimizeAll) (IShellDispatch5 *This);
	HRESULT(STDMETHODCALLTYPE *UndoMinimizeALL) (IShellDispatch5 *This);
	HRESULT(STDMETHODCALLTYPE *FileRun) (IShellDispatch5 *This);
	HRESULT(STDMETHODCALLTYPE *CascadeWindows) (IShellDispatch5 *This);
	HRESULT(STDMETHODCALLTYPE *TileVertically) (IShellDispatch5 *This);
	HRESULT(STDMETHODCALLTYPE *TileHorizontally) (IShellDispatch5 *This);
	HRESULT(STDMETHODCALLTYPE *ShutdownWindows) (IShellDispatch5 *This);
	HRESULT(STDMETHODCALLTYPE *Suspend) (IShellDispatch5 *This);
	HRESULT(STDMETHODCALLTYPE *EjectPC) (IShellDispatch5 *This);
	HRESULT(STDMETHODCALLTYPE *SetTime) (IShellDispatch5 *This);
	HRESULT(STDMETHODCALLTYPE *TrayProperties) (IShellDispatch5 *This);
	HRESULT(STDMETHODCALLTYPE *Help) (IShellDispatch5 *This);
	HRESULT(STDMETHODCALLTYPE *FindFiles) (IShellDispatch5 *This);
	HRESULT(STDMETHODCALLTYPE *FindComputer) (IShellDispatch5 *This);
	HRESULT(STDMETHODCALLTYPE *RefreshMenu) (IShellDispatch5 *This);
	HRESULT(STDMETHODCALLTYPE *ControlPanelItem) (IShellDispatch5 *This, BSTR bstrDir);
	HRESULT(STDMETHODCALLTYPE *IsRestricted) (IShellDispatch5 *This, BSTR Group, BSTR Restriction, long *plRestrictValue);
	HRESULT(STDMETHODCALLTYPE *ShellExecute) (IShellDispatch5 *This, BSTR File, VARIANT vArgs, VARIANT vDir, VARIANT vOperation, VARIANT vShow);
	HRESULT(STDMETHODCALLTYPE *FindPrinter) (IShellDispatch5 *This, BSTR name, BSTR location, BSTR model);
	HRESULT(STDMETHODCALLTYPE *GetSystemInformation) (IShellDispatch5 *This, BSTR name, VARIANT *pv);
	HRESULT(STDMETHODCALLTYPE *ServiceStart) (IShellDispatch5 *This, BSTR ServiceName, VARIANT Persistent, VARIANT *pSuccess);
	HRESULT(STDMETHODCALLTYPE *ServiceStop) (IShellDispatch5 *This, BSTR ServiceName, VARIANT Persistent, VARIANT *pSuccess);
	HRESULT(STDMETHODCALLTYPE *IsServiceRunning) (IShellDispatch5 *This, BSTR ServiceName, VARIANT *pRunning);
	HRESULT(STDMETHODCALLTYPE *CanStartStopService) (IShellDispatch5 *This, BSTR ServiceName, VARIANT *pCanStartStop);
	HRESULT(STDMETHODCALLTYPE *ShowBrowserBar) (IShellDispatch5 *This, BSTR bstrClsid, VARIANT bShow, VARIANT *pSuccess);
	HRESULT(STDMETHODCALLTYPE *AddToRecent) (IShellDispatch5 *This, VARIANT varFile, BSTR bstrCategory);
	HRESULT(STDMETHODCALLTYPE *WindowsSecurity) (IShellDispatch5 *This);
	HRESULT(STDMETHODCALLTYPE *ToggleDesktop) (IShellDispatch5 *This);
	HRESULT(STDMETHODCALLTYPE *ExplorerPolicy) (IShellDispatch5 *This, BSTR bstrPolicyName, VARIANT *pValue);
	HRESULT(STDMETHODCALLTYPE *GetSetting) (IShellDispatch5 *This, long lSetting, VARIANT_BOOL *pResult);
	HRESULT(STDMETHODCALLTYPE *WindowSwitcher) (IShellDispatch5 *This);
	END_INTERFACE
}  IShellDispatch5Vtbl;
interface IShellDispatch5
{
	CONST_VTBL struct IShellDispatch5Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IShellDispatch5_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IShellDispatch5_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IShellDispatch5_Release(This)( (This)->lpVtbl -> Release(This) )
#define IShellDispatch5_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IShellDispatch5_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IShellDispatch5_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IShellDispatch5_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IShellDispatch5_get_Application(This,ppid)( (This)->lpVtbl -> get_Application(This,ppid) )
#define IShellDispatch5_get_Parent(This,ppid)( (This)->lpVtbl -> get_Parent(This,ppid) )
#define IShellDispatch5_NameSpace(This,vDir,ppsdf)( (This)->lpVtbl -> NameSpace(This,vDir,ppsdf) )
#define IShellDispatch5_BrowseForFolder(This,Hwnd,Title,Options,RootFolder,ppsdf)( (This)->lpVtbl -> BrowseForFolder(This,Hwnd,Title,Options,RootFolder,ppsdf) )
#define IShellDispatch5_Windows(This,ppid)( (This)->lpVtbl -> Windows(This,ppid) )
#define IShellDispatch5_Open(This,vDir)( (This)->lpVtbl -> Open(This,vDir) )
#define IShellDispatch5_Explore(This,vDir)( (This)->lpVtbl -> Explore(This,vDir) )
#define IShellDispatch5_MinimizeAll(This)( (This)->lpVtbl -> MinimizeAll(This) )
#define IShellDispatch5_UndoMinimizeALL(This)( (This)->lpVtbl -> UndoMinimizeALL(This) )
#define IShellDispatch5_FileRun(This)( (This)->lpVtbl -> FileRun(This) )
#define IShellDispatch5_CascadeWindows(This)( (This)->lpVtbl -> CascadeWindows(This) )
#define IShellDispatch5_TileVertically(This)( (This)->lpVtbl -> TileVertically(This) )
#define IShellDispatch5_TileHorizontally(This)( (This)->lpVtbl -> TileHorizontally(This) )
#define IShellDispatch5_ShutdownWindows(This)( (This)->lpVtbl -> ShutdownWindows(This) )
#define IShellDispatch5_Suspend(This)( (This)->lpVtbl -> Suspend(This) )
#define IShellDispatch5_EjectPC(This)( (This)->lpVtbl -> EjectPC(This) )
#define IShellDispatch5_SetTime(This)( (This)->lpVtbl -> SetTime(This) )
#define IShellDispatch5_TrayProperties(This)( (This)->lpVtbl -> TrayProperties(This) )
#define IShellDispatch5_Help(This)( (This)->lpVtbl -> Help(This) )
#define IShellDispatch5_FindFiles(This)( (This)->lpVtbl -> FindFiles(This) )
#define IShellDispatch5_FindComputer(This)( (This)->lpVtbl -> FindComputer(This) )
#define IShellDispatch5_RefreshMenu(This)( (This)->lpVtbl -> RefreshMenu(This) )
#define IShellDispatch5_ControlPanelItem(This,bstrDir)( (This)->lpVtbl -> ControlPanelItem(This,bstrDir) )
#define IShellDispatch5_IsRestricted(This,Group,Restriction,plRestrictValue)( (This)->lpVtbl -> IsRestricted(This,Group,Restriction,plRestrictValue) )
#define IShellDispatch5_ShellExecute(This,File,vArgs,vDir,vOperation,vShow)( (This)->lpVtbl -> ShellExecute(This,File,vArgs,vDir,vOperation,vShow) )
#define IShellDispatch5_FindPrinter(This,name,location,model)( (This)->lpVtbl -> FindPrinter(This,name,location,model) )
#define IShellDispatch5_GetSystemInformation(This,name,pv)( (This)->lpVtbl -> GetSystemInformation(This,name,pv) )
#define IShellDispatch5_ServiceStart(This,ServiceName,Persistent,pSuccess)( (This)->lpVtbl -> ServiceStart(This,ServiceName,Persistent,pSuccess) )
#define IShellDispatch5_ServiceStop(This,ServiceName,Persistent,pSuccess)( (This)->lpVtbl -> ServiceStop(This,ServiceName,Persistent,pSuccess) )
#define IShellDispatch5_IsServiceRunning(This,ServiceName,pRunning)( (This)->lpVtbl -> IsServiceRunning(This,ServiceName,pRunning) )
#define IShellDispatch5_CanStartStopService(This,ServiceName,pCanStartStop)( (This)->lpVtbl -> CanStartStopService(This,ServiceName,pCanStartStop) )
#define IShellDispatch5_ShowBrowserBar(This,bstrClsid,bShow,pSuccess)( (This)->lpVtbl -> ShowBrowserBar(This,bstrClsid,bShow,pSuccess) )
#define IShellDispatch5_AddToRecent(This,varFile,bstrCategory)( (This)->lpVtbl -> AddToRecent(This,varFile,bstrCategory) )
#define IShellDispatch5_WindowsSecurity(This)( (This)->lpVtbl -> WindowsSecurity(This) )
#define IShellDispatch5_ToggleDesktop(This)( (This)->lpVtbl -> ToggleDesktop(This) )
#define IShellDispatch5_ExplorerPolicy(This,bstrPolicyName,pValue)( (This)->lpVtbl -> ExplorerPolicy(This,bstrPolicyName,pValue) )
#define IShellDispatch5_GetSetting(This,lSetting,pResult)( (This)->lpVtbl -> GetSetting(This,lSetting,pResult) )
#define IShellDispatch5_WindowSwitcher(This)( (This)->lpVtbl -> WindowSwitcher(This) )
#endif
#endif
extern const CLSID CLSID_Shell;
extern const CLSID CLSID_ShellDispatchInproc;
#ifndef __IFileSearchBand_INTERFACE_DEFINED__
#define __IFileSearchBand_INTERFACE_DEFINED__
extern const IID IID_IFileSearchBand;
typedef struct IFileSearchBandVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IFileSearchBand *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IFileSearchBand *This);
	ULONG(STDMETHODCALLTYPE *Release) (IFileSearchBand *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IFileSearchBand *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IFileSearchBand *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IFileSearchBand *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IFileSearchBand *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *SetFocus) (IFileSearchBand *This);
	HRESULT(STDMETHODCALLTYPE *SetSearchParameters) (IFileSearchBand *This, BSTR *pbstrSearchID, VARIANT_BOOL bNavToResults, VARIANT *pvarScope, VARIANT *pvarQueryFile);
	HRESULT(STDMETHODCALLTYPE *get_SearchID) (IFileSearchBand *This, BSTR *pbstrSearchID);
	HRESULT(STDMETHODCALLTYPE *get_Scope) (IFileSearchBand *This, VARIANT *pvarScope);
	HRESULT(STDMETHODCALLTYPE *get_QueryFile) (IFileSearchBand *This, VARIANT *pvarFile);
	END_INTERFACE
}  IFileSearchBandVtbl;
interface IFileSearchBand
{
	CONST_VTBL struct IFileSearchBandVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFileSearchBand_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFileSearchBand_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFileSearchBand_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFileSearchBand_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFileSearchBand_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFileSearchBand_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFileSearchBand_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFileSearchBand_SetFocus(This)( (This)->lpVtbl -> SetFocus(This) )
#define IFileSearchBand_SetSearchParameters(This,pbstrSearchID,bNavToResults,pvarScope,pvarQueryFile)( (This)->lpVtbl -> SetSearchParameters(This,pbstrSearchID,bNavToResults,pvarScope,pvarQueryFile) )
#define IFileSearchBand_get_SearchID(This,pbstrSearchID)( (This)->lpVtbl -> get_SearchID(This,pbstrSearchID) )
#define IFileSearchBand_get_Scope(This,pvarScope)( (This)->lpVtbl -> get_Scope(This,pvarScope) )
#define IFileSearchBand_get_QueryFile(This,pvarFile)( (This)->lpVtbl -> get_QueryFile(This,pvarFile) )
#endif
#endif
extern const CLSID CLSID_FileSearchBand;
#ifndef __IWebWizardHost_INTERFACE_DEFINED__
#define __IWebWizardHost_INTERFACE_DEFINED__
extern const IID IID_IWebWizardHost;
typedef struct IWebWizardHostVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IWebWizardHost *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IWebWizardHost *This);
	ULONG(STDMETHODCALLTYPE *Release) (IWebWizardHost *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IWebWizardHost *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IWebWizardHost *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IWebWizardHost *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IWebWizardHost *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *FinalBack) (IWebWizardHost *This);
	HRESULT(STDMETHODCALLTYPE *FinalNext) (IWebWizardHost *This);
	HRESULT(STDMETHODCALLTYPE *Cancel) (IWebWizardHost *This);
	HRESULT(STDMETHODCALLTYPE *put_Caption) (IWebWizardHost *This, BSTR bstrCaption);
	HRESULT(STDMETHODCALLTYPE *get_Caption) (IWebWizardHost *This, BSTR *pbstrCaption);
	HRESULT(STDMETHODCALLTYPE *put_Property) (IWebWizardHost *This, BSTR bstrPropertyName, VARIANT *pvProperty);
	HRESULT(STDMETHODCALLTYPE *get_Property) (IWebWizardHost *This, BSTR bstrPropertyName, VARIANT *pvProperty);
	HRESULT(STDMETHODCALLTYPE *SetWizardButtons) (IWebWizardHost *This, VARIANT_BOOL vfEnableBack, VARIANT_BOOL vfEnableNext, VARIANT_BOOL vfLastPage);
	HRESULT(STDMETHODCALLTYPE *SetHeaderText) (IWebWizardHost *This, BSTR bstrHeaderTitle, BSTR bstrHeaderSubtitle);
	END_INTERFACE
}  IWebWizardHostVtbl;
interface IWebWizardHost
{
	CONST_VTBL struct IWebWizardHostVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWebWizardHost_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWebWizardHost_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IWebWizardHost_Release(This)( (This)->lpVtbl -> Release(This) )
#define IWebWizardHost_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IWebWizardHost_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IWebWizardHost_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IWebWizardHost_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IWebWizardHost_FinalBack(This)( (This)->lpVtbl -> FinalBack(This) )
#define IWebWizardHost_FinalNext(This)( (This)->lpVtbl -> FinalNext(This) )
#define IWebWizardHost_Cancel(This)( (This)->lpVtbl -> Cancel(This) )
#define IWebWizardHost_put_Caption(This,bstrCaption)( (This)->lpVtbl -> put_Caption(This,bstrCaption) )
#define IWebWizardHost_get_Caption(This,pbstrCaption)( (This)->lpVtbl -> get_Caption(This,pbstrCaption) )
#define IWebWizardHost_put_Property(This,bstrPropertyName,pvProperty)( (This)->lpVtbl -> put_Property(This,bstrPropertyName,pvProperty) )
#define IWebWizardHost_get_Property(This,bstrPropertyName,pvProperty)( (This)->lpVtbl -> get_Property(This,bstrPropertyName,pvProperty) )
#define IWebWizardHost_SetWizardButtons(This,vfEnableBack,vfEnableNext,vfLastPage)( (This)->lpVtbl -> SetWizardButtons(This,vfEnableBack,vfEnableNext,vfLastPage) )
#define IWebWizardHost_SetHeaderText(This,bstrHeaderTitle,bstrHeaderSubtitle)( (This)->lpVtbl -> SetHeaderText(This,bstrHeaderTitle,bstrHeaderSubtitle) )
#endif
#endif
#ifndef __INewWDEvents_INTERFACE_DEFINED__
#define __INewWDEvents_INTERFACE_DEFINED__
extern const IID IID_INewWDEvents;
typedef struct INewWDEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (INewWDEvents *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (INewWDEvents *This);
	ULONG(STDMETHODCALLTYPE *Release) (INewWDEvents *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (INewWDEvents *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (INewWDEvents *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (INewWDEvents *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (INewWDEvents *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	HRESULT(STDMETHODCALLTYPE *FinalBack) (INewWDEvents *This);
	HRESULT(STDMETHODCALLTYPE *FinalNext) (INewWDEvents *This);
	HRESULT(STDMETHODCALLTYPE *Cancel) (INewWDEvents *This);
	HRESULT(STDMETHODCALLTYPE *put_Caption) (INewWDEvents *This, BSTR bstrCaption);
	HRESULT(STDMETHODCALLTYPE *get_Caption) (INewWDEvents *This, BSTR *pbstrCaption);
	HRESULT(STDMETHODCALLTYPE *put_Property) (INewWDEvents *This, BSTR bstrPropertyName, VARIANT *pvProperty);
	HRESULT(STDMETHODCALLTYPE *get_Property) (INewWDEvents *This, BSTR bstrPropertyName, VARIANT *pvProperty);
	HRESULT(STDMETHODCALLTYPE *SetWizardButtons) (INewWDEvents *This, VARIANT_BOOL vfEnableBack, VARIANT_BOOL vfEnableNext, VARIANT_BOOL vfLastPage);
	HRESULT(STDMETHODCALLTYPE *SetHeaderText) (INewWDEvents *This, BSTR bstrHeaderTitle, BSTR bstrHeaderSubtitle);
	HRESULT(STDMETHODCALLTYPE *PassportAuthenticate) (INewWDEvents *This, BSTR bstrSignInUrl, VARIANT_BOOL *pvfAuthenitcated);
	END_INTERFACE
}  INewWDEventsVtbl;
interface INewWDEvents
{
	CONST_VTBL struct INewWDEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define INewWDEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define INewWDEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define INewWDEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define INewWDEvents_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define INewWDEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define INewWDEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define INewWDEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define INewWDEvents_FinalBack(This)( (This)->lpVtbl -> FinalBack(This) )
#define INewWDEvents_FinalNext(This)( (This)->lpVtbl -> FinalNext(This) )
#define INewWDEvents_Cancel(This)( (This)->lpVtbl -> Cancel(This) )
#define INewWDEvents_put_Caption(This,bstrCaption)( (This)->lpVtbl -> put_Caption(This,bstrCaption) )
#define INewWDEvents_get_Caption(This,pbstrCaption)( (This)->lpVtbl -> get_Caption(This,pbstrCaption) )
#define INewWDEvents_put_Property(This,bstrPropertyName,pvProperty)( (This)->lpVtbl -> put_Property(This,bstrPropertyName,pvProperty) )
#define INewWDEvents_get_Property(This,bstrPropertyName,pvProperty)( (This)->lpVtbl -> get_Property(This,bstrPropertyName,pvProperty) )
#define INewWDEvents_SetWizardButtons(This,vfEnableBack,vfEnableNext,vfLastPage)( (This)->lpVtbl -> SetWizardButtons(This,vfEnableBack,vfEnableNext,vfLastPage) )
#define INewWDEvents_SetHeaderText(This,bstrHeaderTitle,bstrHeaderSubtitle)( (This)->lpVtbl -> SetHeaderText(This,bstrHeaderTitle,bstrHeaderSubtitle) )
#define INewWDEvents_PassportAuthenticate(This,bstrSignInUrl,pvfAuthenitcated)( (This)->lpVtbl -> PassportAuthenticate(This,bstrSignInUrl,pvfAuthenitcated) )
#endif
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_shldisp_0001_0067_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shldisp_0001_0067_v0_0_s_ifspec;
#ifndef __IAutoComplete_INTERFACE_DEFINED__
#define __IAutoComplete_INTERFACE_DEFINED__
typedef IAutoComplete *LPAUTOCOMPLETE;
extern const IID IID_IAutoComplete;
typedef struct IAutoCompleteVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAutoComplete *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAutoComplete *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAutoComplete *This);
	HRESULT(STDMETHODCALLTYPE *Init) (IAutoComplete *This, HWND hwndEdit, IUnknown *punkACL, LPCWSTR pwszRegKeyPath, LPCWSTR pwszQuickComplete);
	HRESULT(STDMETHODCALLTYPE *Enable) (IAutoComplete *This, BOOL fEnable);
	END_INTERFACE
}  IAutoCompleteVtbl;
interface IAutoComplete
{
	CONST_VTBL struct IAutoCompleteVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAutoComplete_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAutoComplete_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAutoComplete_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAutoComplete_Init(This,hwndEdit,punkACL,pwszRegKeyPath,pwszQuickComplete)( (This)->lpVtbl -> Init(This,hwndEdit,punkACL,pwszRegKeyPath,pwszQuickComplete) )
#define IAutoComplete_Enable(This,fEnable)( (This)->lpVtbl -> Enable(This,fEnable) )
#endif
#endif
#ifndef __IAutoComplete2_INTERFACE_DEFINED__
#define __IAutoComplete2_INTERFACE_DEFINED__
typedef IAutoComplete2 *LPAUTOCOMPLETE2;
typedef enum _tagAUTOCOMPLETEOPTIONS
{
	ACO_NONE = 0,
	ACO_AUTOSUGGEST = 0x1,
	ACO_AUTOAPPEND = 0x2,
	ACO_SEARCH = 0x4,
	ACO_FILTERPREFIXES = 0x8,
	ACO_USETAB = 0x10,
	ACO_UPDOWNKEYDROPSLIST = 0x20,
	ACO_RTLREADING = 0x40,
	ACO_WORD_FILTER = 0x80,
	ACO_NOPREFIXFILTERING = 0x100
} AUTOCOMPLETEOPTIONS;
extern const IID IID_IAutoComplete2;
typedef struct IAutoComplete2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAutoComplete2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAutoComplete2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAutoComplete2 *This);
	HRESULT(STDMETHODCALLTYPE *Init) (IAutoComplete2 *This, HWND hwndEdit, IUnknown *punkACL, LPCWSTR pwszRegKeyPath, LPCWSTR pwszQuickComplete);
	HRESULT(STDMETHODCALLTYPE *Enable) (IAutoComplete2 *This, BOOL fEnable);
	HRESULT(STDMETHODCALLTYPE *SetOptions) (IAutoComplete2 *This, DWORD dwFlag);
	HRESULT(STDMETHODCALLTYPE *GetOptions) (IAutoComplete2 *This, DWORD *pdwFlag);
	END_INTERFACE
}  IAutoComplete2Vtbl;
interface IAutoComplete2
{
	CONST_VTBL struct IAutoComplete2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAutoComplete2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAutoComplete2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAutoComplete2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAutoComplete2_Init(This,hwndEdit,punkACL,pwszRegKeyPath,pwszQuickComplete)( (This)->lpVtbl -> Init(This,hwndEdit,punkACL,pwszRegKeyPath,pwszQuickComplete) )
#define IAutoComplete2_Enable(This,fEnable)( (This)->lpVtbl -> Enable(This,fEnable) )
#define IAutoComplete2_SetOptions(This,dwFlag)( (This)->lpVtbl -> SetOptions(This,dwFlag) )
#define IAutoComplete2_GetOptions(This,pdwFlag)( (This)->lpVtbl -> GetOptions(This,pdwFlag) )
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_shldisp_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shldisp_0000_0002_v0_0_s_ifspec;
#ifndef __IEnumACString_INTERFACE_DEFINED__
#define __IEnumACString_INTERFACE_DEFINED__
typedef IEnumACString *PENUMACSTRING;
typedef IEnumACString *LPENUMACSTRING;
typedef enum _tagACENUMOPTION
{
	ACEO_NONE = 0,
	ACEO_MOSTRECENTFIRST = 0x1,
	ACEO_FIRSTUNUSED = 0x10000
} ACENUMOPTION;
extern const IID IID_IEnumACString;
typedef struct IEnumACStringVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IEnumACString *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IEnumACString *This);
	ULONG(STDMETHODCALLTYPE *Release) (IEnumACString *This);
	HRESULT(STDMETHODCALLTYPE *Next) (IEnumACString *This, ULONG celt, LPOLESTR *rgelt, ULONG *pceltFetched);
	HRESULT(STDMETHODCALLTYPE *Skip) (IEnumACString *This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE *Reset) (IEnumACString *This);
	HRESULT(STDMETHODCALLTYPE *Clone) (IEnumACString *This, IEnumString **ppenum);
	HRESULT(STDMETHODCALLTYPE *NextItem) (IEnumACString *This, LPWSTR pszUrl, ULONG cchMax, ULONG *pulSortIndex);
	HRESULT(STDMETHODCALLTYPE *SetEnumOptions) (IEnumACString *This, DWORD dwOptions);
	HRESULT(STDMETHODCALLTYPE *GetEnumOptions) (IEnumACString *This, DWORD *pdwOptions);
	END_INTERFACE
}  IEnumACStringVtbl;
interface IEnumACString
{
	CONST_VTBL struct IEnumACStringVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumACString_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumACString_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEnumACString_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEnumACString_Next(This,celt,rgelt,pceltFetched)( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
#define IEnumACString_Skip(This,celt)( (This)->lpVtbl -> Skip(This,celt) )
#define IEnumACString_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define IEnumACString_Clone(This,ppenum)( (This)->lpVtbl -> Clone(This,ppenum) )
#define IEnumACString_NextItem(This,pszUrl,cchMax,pulSortIndex)( (This)->lpVtbl -> NextItem(This,pszUrl,cchMax,pulSortIndex) )
#define IEnumACString_SetEnumOptions(This,dwOptions)( (This)->lpVtbl -> SetEnumOptions(This,dwOptions) )
#define IEnumACString_GetEnumOptions(This,pdwOptions)( (This)->lpVtbl -> GetEnumOptions(This,pdwOptions) )
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_shldisp_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shldisp_0000_0003_v0_0_s_ifspec;
#ifndef __IAsyncOperation_INTERFACE_DEFINED__
#define __IAsyncOperation_INTERFACE_DEFINED__
typedef IAsyncOperation *LPASYNCOPERATION;
extern const IID IID_IAsyncOperation;
typedef struct IAsyncOperationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAsyncOperation *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAsyncOperation *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAsyncOperation *This);
	HRESULT(STDMETHODCALLTYPE *SetAsyncMode) (IAsyncOperation *This, BOOL fDoOpAsync);
	HRESULT(STDMETHODCALLTYPE *GetAsyncMode) (IAsyncOperation *This, BOOL *pfIsOpAsync);
	HRESULT(STDMETHODCALLTYPE *StartOperation) (IAsyncOperation *This, IBindCtx *pbcReserved);
	HRESULT(STDMETHODCALLTYPE *InOperation) (IAsyncOperation *This, BOOL *pfInAsyncOp);
	HRESULT(STDMETHODCALLTYPE *EndOperation) (IAsyncOperation *This, HRESULT hResult, IBindCtx *pbcReserved, DWORD dwEffects);
	END_INTERFACE
}  IAsyncOperationVtbl;
interface IAsyncOperation
{
	CONST_VTBL struct IAsyncOperationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAsyncOperation_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAsyncOperation_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAsyncOperation_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAsyncOperation_SetAsyncMode(This,fDoOpAsync)( (This)->lpVtbl -> SetAsyncMode(This,fDoOpAsync) )
#define IAsyncOperation_GetAsyncMode(This,pfIsOpAsync)( (This)->lpVtbl -> GetAsyncMode(This,pfIsOpAsync) )
#define IAsyncOperation_StartOperation(This,pbcReserved)( (This)->lpVtbl -> StartOperation(This,pbcReserved) )
#define IAsyncOperation_InOperation(This,pfInAsyncOp)( (This)->lpVtbl -> InOperation(This,pfInAsyncOp) )
#define IAsyncOperation_EndOperation(This,hResult,pbcReserved,dwEffects)( (This)->lpVtbl -> EndOperation(This,hResult,pbcReserved,dwEffects) )
#endif
#endif
#endif
