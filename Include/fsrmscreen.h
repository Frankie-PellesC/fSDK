/*+@@file@@----------------------------------------------------------------*//*!
 \file		fsrmscreen.h
 \par Description
            Extension and update of headers for PellesC compiler suite.
 \par Project:
            PellesC Headers extension
 \date		Created  on Sun Jul 10 18:54:14 2016
 \date		Modified on Sun Jul 10 18:54:14 2016
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
#ifndef __fsrmscreen_h__
#define __fsrmscreen_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IFsrmFileGroup_FWD_DEFINED__
#define __IFsrmFileGroup_FWD_DEFINED__
typedef interface IFsrmFileGroup IFsrmFileGroup;
#endif
#ifndef __IFsrmFileGroupImported_FWD_DEFINED__
#define __IFsrmFileGroupImported_FWD_DEFINED__
typedef interface IFsrmFileGroupImported IFsrmFileGroupImported;
#endif
#ifndef __IFsrmFileGroupManager_FWD_DEFINED__
#define __IFsrmFileGroupManager_FWD_DEFINED__
typedef interface IFsrmFileGroupManager IFsrmFileGroupManager;
#endif
#ifndef __IFsrmFileScreenBase_FWD_DEFINED__
#define __IFsrmFileScreenBase_FWD_DEFINED__
typedef interface IFsrmFileScreenBase IFsrmFileScreenBase;
#endif
#ifndef __IFsrmFileScreen_FWD_DEFINED__
#define __IFsrmFileScreen_FWD_DEFINED__
typedef interface IFsrmFileScreen IFsrmFileScreen;
#endif
#ifndef __IFsrmFileScreenException_FWD_DEFINED__
#define __IFsrmFileScreenException_FWD_DEFINED__
typedef interface IFsrmFileScreenException IFsrmFileScreenException;
#endif
#ifndef __IFsrmFileScreenManager_FWD_DEFINED__
#define __IFsrmFileScreenManager_FWD_DEFINED__
typedef interface IFsrmFileScreenManager IFsrmFileScreenManager;
#endif
#ifndef __IFsrmFileScreenTemplate_FWD_DEFINED__
#define __IFsrmFileScreenTemplate_FWD_DEFINED__
typedef interface IFsrmFileScreenTemplate IFsrmFileScreenTemplate;
#endif
#ifndef __IFsrmFileScreenTemplateImported_FWD_DEFINED__
#define __IFsrmFileScreenTemplateImported_FWD_DEFINED__
typedef interface IFsrmFileScreenTemplateImported IFsrmFileScreenTemplateImported;
#endif
#ifndef __IFsrmFileScreenTemplateManager_FWD_DEFINED__
#define __IFsrmFileScreenTemplateManager_FWD_DEFINED__
typedef interface IFsrmFileScreenTemplateManager IFsrmFileScreenTemplateManager;
#endif
#include "oaidl.h"
#include "fsrmenums.h"
#include "fsrm.h"
#define	FSRM_DISPID_FILEGROUP	( ( FSRM_DISPID_FEATURE_FILESCREEN | 0x100000 )  )
#define	FSRM_DISPID_FILEGROUP_IMPORTED	( ( FSRM_DISPID_FILEGROUP | 0x10000 )  )
#define	FSRM_DISPID_FILEGROUP_MANAGER	( ( FSRM_DISPID_FEATURE_FILESCREEN | 0x200000 )  )
#define	FSRM_DISPID_FILESCREEN_BASE	( ( FSRM_DISPID_FEATURE_FILESCREEN | 0x300000 )  )
#define	FSRM_DISPID_FILESCREEN	( ( FSRM_DISPID_FILESCREEN_BASE | 0x10000 )  )
#define	FSRM_DISPID_FILESCREEN_TEMPLATE	( ( FSRM_DISPID_FILESCREEN_BASE | 0x20000 )  )
#define	FSRM_DISPID_FILESCREEN_TEMPLATE_IMPORTED	( ( FSRM_DISPID_FILESCREEN_TEMPLATE | 0x1000 )  )
#define	FSRM_DISPID_FILESCREEN_EXCEPTION	( ( FSRM_DISPID_FEATURE_FILESCREEN | 0x400000 )  )
#define	FSRM_DISPID_FILESCREEN_MANAGER	( ( FSRM_DISPID_FEATURE_FILESCREEN | 0x500000 )  )
#define	FSRM_DISPID_FILESCREEN_TEMPLATE_MANAGER	( ( FSRM_DISPID_FEATURE_FILESCREEN | 0x600000 )  )
extern RPC_IF_HANDLE __MIDL_itf_fsrmscreen_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_fsrmscreen_0000_0000_v0_0_s_ifspec;
#ifndef __IFsrmFileGroup_INTERFACE_DEFINED__
#define __IFsrmFileGroup_INTERFACE_DEFINED__
extern const IID IID_IFsrmFileGroup;
typedef struct IFsrmFileGroupVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFsrmFileGroup * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFsrmFileGroup * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFsrmFileGroup * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFsrmFileGroup * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFsrmFileGroup * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFsrmFileGroup * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFsrmFileGroup * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IFsrmFileGroup * This, FSRM_OBJECT_ID * id);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IFsrmFileGroup * This, BSTR * description);
	HRESULT(STDMETHODCALLTYPE * put_Description) (IFsrmFileGroup * This, BSTR description);
	HRESULT(STDMETHODCALLTYPE * Delete) (IFsrmFileGroup * This);
	HRESULT(STDMETHODCALLTYPE * Commit) (IFsrmFileGroup * This);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IFsrmFileGroup * This, BSTR * name);
	HRESULT(STDMETHODCALLTYPE * put_Name) (IFsrmFileGroup * This, BSTR name);
	HRESULT(STDMETHODCALLTYPE * get_Members) (IFsrmFileGroup * This, IFsrmMutableCollection ** members);
	HRESULT(STDMETHODCALLTYPE * put_Members) (IFsrmFileGroup * This, IFsrmMutableCollection * members);
	HRESULT(STDMETHODCALLTYPE * get_NonMembers) (IFsrmFileGroup * This, IFsrmMutableCollection ** nonMembers);
	HRESULT(STDMETHODCALLTYPE * put_NonMembers) (IFsrmFileGroup * This, IFsrmMutableCollection * nonMembers);
	END_INTERFACE
}  IFsrmFileGroupVtbl;
interface IFsrmFileGroup
{
	CONST_VTBL struct IFsrmFileGroupVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsrmFileGroup_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsrmFileGroup_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsrmFileGroup_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsrmFileGroup_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsrmFileGroup_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsrmFileGroup_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsrmFileGroup_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsrmFileGroup_get_Id(This,id)( (This)->lpVtbl -> get_Id(This,id) )
#define IFsrmFileGroup_get_Description(This,description)( (This)->lpVtbl -> get_Description(This,description) )
#define IFsrmFileGroup_put_Description(This,description)( (This)->lpVtbl -> put_Description(This,description) )
#define IFsrmFileGroup_Delete(This)( (This)->lpVtbl -> Delete(This) )
#define IFsrmFileGroup_Commit(This)( (This)->lpVtbl -> Commit(This) )
#define IFsrmFileGroup_get_Name(This,name)( (This)->lpVtbl -> get_Name(This,name) )
#define IFsrmFileGroup_put_Name(This,name)( (This)->lpVtbl -> put_Name(This,name) )
#define IFsrmFileGroup_get_Members(This,members)( (This)->lpVtbl -> get_Members(This,members) )
#define IFsrmFileGroup_put_Members(This,members)( (This)->lpVtbl -> put_Members(This,members) )
#define IFsrmFileGroup_get_NonMembers(This,nonMembers)( (This)->lpVtbl -> get_NonMembers(This,nonMembers) )
#define IFsrmFileGroup_put_NonMembers(This,nonMembers)( (This)->lpVtbl -> put_NonMembers(This,nonMembers) )
#endif
#endif
#ifndef __IFsrmFileGroupImported_INTERFACE_DEFINED__
#define __IFsrmFileGroupImported_INTERFACE_DEFINED__
extern const IID IID_IFsrmFileGroupImported;
typedef struct IFsrmFileGroupImportedVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFsrmFileGroupImported * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFsrmFileGroupImported * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFsrmFileGroupImported * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFsrmFileGroupImported * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFsrmFileGroupImported * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFsrmFileGroupImported * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFsrmFileGroupImported * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IFsrmFileGroupImported * This, FSRM_OBJECT_ID * id);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IFsrmFileGroupImported * This, BSTR * description);
	HRESULT(STDMETHODCALLTYPE * put_Description) (IFsrmFileGroupImported * This, BSTR description);
	HRESULT(STDMETHODCALLTYPE * Delete) (IFsrmFileGroupImported * This);
	HRESULT(STDMETHODCALLTYPE * Commit) (IFsrmFileGroupImported * This);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IFsrmFileGroupImported * This, BSTR * name);
	HRESULT(STDMETHODCALLTYPE * put_Name) (IFsrmFileGroupImported * This, BSTR name);
	HRESULT(STDMETHODCALLTYPE * get_Members) (IFsrmFileGroupImported * This, IFsrmMutableCollection ** members);
	HRESULT(STDMETHODCALLTYPE * put_Members) (IFsrmFileGroupImported * This, IFsrmMutableCollection * members);
	HRESULT(STDMETHODCALLTYPE * get_NonMembers) (IFsrmFileGroupImported * This, IFsrmMutableCollection ** nonMembers);
	HRESULT(STDMETHODCALLTYPE * put_NonMembers) (IFsrmFileGroupImported * This, IFsrmMutableCollection * nonMembers);
	HRESULT(STDMETHODCALLTYPE * get_OverwriteOnCommit) (IFsrmFileGroupImported * This, VARIANT_BOOL * overwrite);
	HRESULT(STDMETHODCALLTYPE * put_OverwriteOnCommit) (IFsrmFileGroupImported * This, VARIANT_BOOL overwrite);
	END_INTERFACE
}  IFsrmFileGroupImportedVtbl;
interface IFsrmFileGroupImported
{
	CONST_VTBL struct IFsrmFileGroupImportedVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsrmFileGroupImported_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsrmFileGroupImported_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsrmFileGroupImported_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsrmFileGroupImported_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsrmFileGroupImported_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsrmFileGroupImported_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsrmFileGroupImported_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsrmFileGroupImported_get_Id(This,id)( (This)->lpVtbl -> get_Id(This,id) )
#define IFsrmFileGroupImported_get_Description(This,description)( (This)->lpVtbl -> get_Description(This,description) )
#define IFsrmFileGroupImported_put_Description(This,description)( (This)->lpVtbl -> put_Description(This,description) )
#define IFsrmFileGroupImported_Delete(This)( (This)->lpVtbl -> Delete(This) )
#define IFsrmFileGroupImported_Commit(This)( (This)->lpVtbl -> Commit(This) )
#define IFsrmFileGroupImported_get_Name(This,name)( (This)->lpVtbl -> get_Name(This,name) )
#define IFsrmFileGroupImported_put_Name(This,name)( (This)->lpVtbl -> put_Name(This,name) )
#define IFsrmFileGroupImported_get_Members(This,members)( (This)->lpVtbl -> get_Members(This,members) )
#define IFsrmFileGroupImported_put_Members(This,members)( (This)->lpVtbl -> put_Members(This,members) )
#define IFsrmFileGroupImported_get_NonMembers(This,nonMembers)( (This)->lpVtbl -> get_NonMembers(This,nonMembers) )
#define IFsrmFileGroupImported_put_NonMembers(This,nonMembers)( (This)->lpVtbl -> put_NonMembers(This,nonMembers) )
#define IFsrmFileGroupImported_get_OverwriteOnCommit(This,overwrite)( (This)->lpVtbl -> get_OverwriteOnCommit(This,overwrite) )
#define IFsrmFileGroupImported_put_OverwriteOnCommit(This,overwrite)( (This)->lpVtbl -> put_OverwriteOnCommit(This,overwrite) )
#endif
#endif
#ifndef __IFsrmFileGroupManager_INTERFACE_DEFINED__
#define __IFsrmFileGroupManager_INTERFACE_DEFINED__
extern const IID IID_IFsrmFileGroupManager;
typedef struct IFsrmFileGroupManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFsrmFileGroupManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFsrmFileGroupManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFsrmFileGroupManager * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFsrmFileGroupManager * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFsrmFileGroupManager * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFsrmFileGroupManager * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFsrmFileGroupManager * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * CreateFileGroup) (IFsrmFileGroupManager * This, IFsrmFileGroup ** fileGroup);
	HRESULT(STDMETHODCALLTYPE * GetFileGroup) (IFsrmFileGroupManager * This, BSTR name, IFsrmFileGroup ** fileGroup);
	HRESULT(STDMETHODCALLTYPE * EnumFileGroups) (IFsrmFileGroupManager * This, FsrmEnumOptions options, IFsrmCommittableCollection ** fileGroups);
	HRESULT(STDMETHODCALLTYPE * ExportFileGroups) (IFsrmFileGroupManager * This, VARIANT * fileGroupNamesArray, BSTR * serializedFileGroups);
	HRESULT(STDMETHODCALLTYPE * ImportFileGroups) (IFsrmFileGroupManager * This, BSTR serializedFileGroups, VARIANT * fileGroupNamesArray, IFsrmCommittableCollection ** fileGroups);
	END_INTERFACE
}  IFsrmFileGroupManagerVtbl;
interface IFsrmFileGroupManager
{
	CONST_VTBL struct IFsrmFileGroupManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsrmFileGroupManager_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsrmFileGroupManager_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsrmFileGroupManager_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsrmFileGroupManager_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsrmFileGroupManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsrmFileGroupManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsrmFileGroupManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsrmFileGroupManager_CreateFileGroup(This,fileGroup)( (This)->lpVtbl -> CreateFileGroup(This,fileGroup) )
#define IFsrmFileGroupManager_GetFileGroup(This,name,fileGroup)( (This)->lpVtbl -> GetFileGroup(This,name,fileGroup) )
#define IFsrmFileGroupManager_EnumFileGroups(This,options,fileGroups)( (This)->lpVtbl -> EnumFileGroups(This,options,fileGroups) )
#define IFsrmFileGroupManager_ExportFileGroups(This,fileGroupNamesArray,serializedFileGroups)( (This)->lpVtbl -> ExportFileGroups(This,fileGroupNamesArray,serializedFileGroups) )
#define IFsrmFileGroupManager_ImportFileGroups(This,serializedFileGroups,fileGroupNamesArray,fileGroups)( (This)->lpVtbl -> ImportFileGroups(This,serializedFileGroups,fileGroupNamesArray,fileGroups) )
#endif
#endif
#ifndef __IFsrmFileScreenBase_INTERFACE_DEFINED__
#define __IFsrmFileScreenBase_INTERFACE_DEFINED__
extern const IID IID_IFsrmFileScreenBase;
typedef struct IFsrmFileScreenBaseVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFsrmFileScreenBase * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFsrmFileScreenBase * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFsrmFileScreenBase * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFsrmFileScreenBase * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFsrmFileScreenBase * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFsrmFileScreenBase * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFsrmFileScreenBase * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IFsrmFileScreenBase * This, FSRM_OBJECT_ID * id);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IFsrmFileScreenBase * This, BSTR * description);
	HRESULT(STDMETHODCALLTYPE * put_Description) (IFsrmFileScreenBase * This, BSTR description);
	HRESULT(STDMETHODCALLTYPE * Delete) (IFsrmFileScreenBase * This);
	HRESULT(STDMETHODCALLTYPE * Commit) (IFsrmFileScreenBase * This);
	HRESULT(STDMETHODCALLTYPE * get_BlockedFileGroups) (IFsrmFileScreenBase * This, IFsrmMutableCollection ** blockList);
	HRESULT(STDMETHODCALLTYPE * put_BlockedFileGroups) (IFsrmFileScreenBase * This, IFsrmMutableCollection * blockList);
	HRESULT(STDMETHODCALLTYPE * get_FileScreenFlags) (IFsrmFileScreenBase * This, long *fileScreenFlags);
	HRESULT(STDMETHODCALLTYPE * put_FileScreenFlags) (IFsrmFileScreenBase * This, long fileScreenFlags);
	HRESULT(STDMETHODCALLTYPE * CreateAction) (IFsrmFileScreenBase * This, FsrmActionType actionType, IFsrmAction ** action);
	HRESULT(STDMETHODCALLTYPE * EnumActions) (IFsrmFileScreenBase * This, IFsrmCollection ** actions);
	END_INTERFACE
}  IFsrmFileScreenBaseVtbl;
interface IFsrmFileScreenBase
{
	CONST_VTBL struct IFsrmFileScreenBaseVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsrmFileScreenBase_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsrmFileScreenBase_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsrmFileScreenBase_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsrmFileScreenBase_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsrmFileScreenBase_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsrmFileScreenBase_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsrmFileScreenBase_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsrmFileScreenBase_get_Id(This,id)( (This)->lpVtbl -> get_Id(This,id) )
#define IFsrmFileScreenBase_get_Description(This,description)( (This)->lpVtbl -> get_Description(This,description) )
#define IFsrmFileScreenBase_put_Description(This,description)( (This)->lpVtbl -> put_Description(This,description) )
#define IFsrmFileScreenBase_Delete(This)( (This)->lpVtbl -> Delete(This) )
#define IFsrmFileScreenBase_Commit(This)( (This)->lpVtbl -> Commit(This) )
#define IFsrmFileScreenBase_get_BlockedFileGroups(This,blockList)( (This)->lpVtbl -> get_BlockedFileGroups(This,blockList) )
#define IFsrmFileScreenBase_put_BlockedFileGroups(This,blockList)( (This)->lpVtbl -> put_BlockedFileGroups(This,blockList) )
#define IFsrmFileScreenBase_get_FileScreenFlags(This,fileScreenFlags)( (This)->lpVtbl -> get_FileScreenFlags(This,fileScreenFlags) )
#define IFsrmFileScreenBase_put_FileScreenFlags(This,fileScreenFlags)( (This)->lpVtbl -> put_FileScreenFlags(This,fileScreenFlags) )
#define IFsrmFileScreenBase_CreateAction(This,actionType,action)( (This)->lpVtbl -> CreateAction(This,actionType,action) )
#define IFsrmFileScreenBase_EnumActions(This,actions)( (This)->lpVtbl -> EnumActions(This,actions) )
#endif
#endif
#ifndef __IFsrmFileScreen_INTERFACE_DEFINED__
#define __IFsrmFileScreen_INTERFACE_DEFINED__
extern const IID IID_IFsrmFileScreen;
typedef struct IFsrmFileScreenVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFsrmFileScreen * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFsrmFileScreen * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFsrmFileScreen * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFsrmFileScreen * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFsrmFileScreen * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFsrmFileScreen * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFsrmFileScreen * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IFsrmFileScreen * This, FSRM_OBJECT_ID * id);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IFsrmFileScreen * This, BSTR * description);
	HRESULT(STDMETHODCALLTYPE * put_Description) (IFsrmFileScreen * This, BSTR description);
	HRESULT(STDMETHODCALLTYPE * Delete) (IFsrmFileScreen * This);
	HRESULT(STDMETHODCALLTYPE * Commit) (IFsrmFileScreen * This);
	HRESULT(STDMETHODCALLTYPE * get_BlockedFileGroups) (IFsrmFileScreen * This, IFsrmMutableCollection ** blockList);
	HRESULT(STDMETHODCALLTYPE * put_BlockedFileGroups) (IFsrmFileScreen * This, IFsrmMutableCollection * blockList);
	HRESULT(STDMETHODCALLTYPE * get_FileScreenFlags) (IFsrmFileScreen * This, long *fileScreenFlags);
	HRESULT(STDMETHODCALLTYPE * put_FileScreenFlags) (IFsrmFileScreen * This, long fileScreenFlags);
	HRESULT(STDMETHODCALLTYPE * CreateAction) (IFsrmFileScreen * This, FsrmActionType actionType, IFsrmAction ** action);
	HRESULT(STDMETHODCALLTYPE * EnumActions) (IFsrmFileScreen * This, IFsrmCollection ** actions);
	HRESULT(STDMETHODCALLTYPE * get_Path) (IFsrmFileScreen * This, BSTR * path);
	HRESULT(STDMETHODCALLTYPE * get_SourceTemplateName) (IFsrmFileScreen * This, BSTR * fileScreenTemplateName);
	HRESULT(STDMETHODCALLTYPE * get_MatchesSourceTemplate) (IFsrmFileScreen * This, VARIANT_BOOL * matches);
	HRESULT(STDMETHODCALLTYPE * get_UserSid) (IFsrmFileScreen * This, BSTR * userSid);
	HRESULT(STDMETHODCALLTYPE * get_UserAccount) (IFsrmFileScreen * This, BSTR * userAccount);
	HRESULT(STDMETHODCALLTYPE * ApplyTemplate) (IFsrmFileScreen * This, BSTR fileScreenTemplateName);
	END_INTERFACE
}  IFsrmFileScreenVtbl;
interface IFsrmFileScreen
{
	CONST_VTBL struct IFsrmFileScreenVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsrmFileScreen_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsrmFileScreen_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsrmFileScreen_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsrmFileScreen_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsrmFileScreen_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsrmFileScreen_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsrmFileScreen_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsrmFileScreen_get_Id(This,id)( (This)->lpVtbl -> get_Id(This,id) )
#define IFsrmFileScreen_get_Description(This,description)( (This)->lpVtbl -> get_Description(This,description) )
#define IFsrmFileScreen_put_Description(This,description)( (This)->lpVtbl -> put_Description(This,description) )
#define IFsrmFileScreen_Delete(This)( (This)->lpVtbl -> Delete(This) )
#define IFsrmFileScreen_Commit(This)( (This)->lpVtbl -> Commit(This) )
#define IFsrmFileScreen_get_BlockedFileGroups(This,blockList)( (This)->lpVtbl -> get_BlockedFileGroups(This,blockList) )
#define IFsrmFileScreen_put_BlockedFileGroups(This,blockList)( (This)->lpVtbl -> put_BlockedFileGroups(This,blockList) )
#define IFsrmFileScreen_get_FileScreenFlags(This,fileScreenFlags)( (This)->lpVtbl -> get_FileScreenFlags(This,fileScreenFlags) )
#define IFsrmFileScreen_put_FileScreenFlags(This,fileScreenFlags)( (This)->lpVtbl -> put_FileScreenFlags(This,fileScreenFlags) )
#define IFsrmFileScreen_CreateAction(This,actionType,action)( (This)->lpVtbl -> CreateAction(This,actionType,action) )
#define IFsrmFileScreen_EnumActions(This,actions)( (This)->lpVtbl -> EnumActions(This,actions) )
#define IFsrmFileScreen_get_Path(This,path)( (This)->lpVtbl -> get_Path(This,path) )
#define IFsrmFileScreen_get_SourceTemplateName(This,fileScreenTemplateName)( (This)->lpVtbl -> get_SourceTemplateName(This,fileScreenTemplateName) )
#define IFsrmFileScreen_get_MatchesSourceTemplate(This,matches)( (This)->lpVtbl -> get_MatchesSourceTemplate(This,matches) )
#define IFsrmFileScreen_get_UserSid(This,userSid)( (This)->lpVtbl -> get_UserSid(This,userSid) )
#define IFsrmFileScreen_get_UserAccount(This,userAccount)( (This)->lpVtbl -> get_UserAccount(This,userAccount) )
#define IFsrmFileScreen_ApplyTemplate(This,fileScreenTemplateName)( (This)->lpVtbl -> ApplyTemplate(This,fileScreenTemplateName) )
#endif
#endif
#ifndef __IFsrmFileScreenException_INTERFACE_DEFINED__
#define __IFsrmFileScreenException_INTERFACE_DEFINED__
extern const IID IID_IFsrmFileScreenException;
typedef struct IFsrmFileScreenExceptionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFsrmFileScreenException * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFsrmFileScreenException * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFsrmFileScreenException * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFsrmFileScreenException * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFsrmFileScreenException * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFsrmFileScreenException * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFsrmFileScreenException * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IFsrmFileScreenException * This, FSRM_OBJECT_ID * id);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IFsrmFileScreenException * This, BSTR * description);
	HRESULT(STDMETHODCALLTYPE * put_Description) (IFsrmFileScreenException * This, BSTR description);
	HRESULT(STDMETHODCALLTYPE * Delete) (IFsrmFileScreenException * This);
	HRESULT(STDMETHODCALLTYPE * Commit) (IFsrmFileScreenException * This);
	HRESULT(STDMETHODCALLTYPE * get_Path) (IFsrmFileScreenException * This, BSTR * path);
	HRESULT(STDMETHODCALLTYPE * get_AllowedFileGroups) (IFsrmFileScreenException * This, IFsrmMutableCollection ** allowList);
	HRESULT(STDMETHODCALLTYPE * put_AllowedFileGroups) (IFsrmFileScreenException * This, IFsrmMutableCollection * allowList);
	END_INTERFACE
}  IFsrmFileScreenExceptionVtbl;
interface IFsrmFileScreenException
{
	CONST_VTBL struct IFsrmFileScreenExceptionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsrmFileScreenException_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsrmFileScreenException_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsrmFileScreenException_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsrmFileScreenException_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsrmFileScreenException_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsrmFileScreenException_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsrmFileScreenException_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsrmFileScreenException_get_Id(This,id)( (This)->lpVtbl -> get_Id(This,id) )
#define IFsrmFileScreenException_get_Description(This,description)( (This)->lpVtbl -> get_Description(This,description) )
#define IFsrmFileScreenException_put_Description(This,description)( (This)->lpVtbl -> put_Description(This,description) )
#define IFsrmFileScreenException_Delete(This)( (This)->lpVtbl -> Delete(This) )
#define IFsrmFileScreenException_Commit(This)( (This)->lpVtbl -> Commit(This) )
#define IFsrmFileScreenException_get_Path(This,path)( (This)->lpVtbl -> get_Path(This,path) )
#define IFsrmFileScreenException_get_AllowedFileGroups(This,allowList)( (This)->lpVtbl -> get_AllowedFileGroups(This,allowList) )
#define IFsrmFileScreenException_put_AllowedFileGroups(This,allowList)( (This)->lpVtbl -> put_AllowedFileGroups(This,allowList) )
#endif
#endif
#ifndef __IFsrmFileScreenManager_INTERFACE_DEFINED__
#define __IFsrmFileScreenManager_INTERFACE_DEFINED__
extern const IID IID_IFsrmFileScreenManager;
typedef struct IFsrmFileScreenManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFsrmFileScreenManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFsrmFileScreenManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFsrmFileScreenManager * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFsrmFileScreenManager * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFsrmFileScreenManager * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFsrmFileScreenManager * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFsrmFileScreenManager * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_ActionVariables) (IFsrmFileScreenManager * This, SAFEARRAY * *variables);
	HRESULT(STDMETHODCALLTYPE * get_ActionVariableDescriptions) (IFsrmFileScreenManager * This, SAFEARRAY * *descriptions);
	HRESULT(STDMETHODCALLTYPE * CreateFileScreen) (IFsrmFileScreenManager * This, BSTR path, IFsrmFileScreen ** fileScreen);
	HRESULT(STDMETHODCALLTYPE * GetFileScreen) (IFsrmFileScreenManager * This, BSTR path, IFsrmFileScreen ** fileScreen);
	HRESULT(STDMETHODCALLTYPE * EnumFileScreens) (IFsrmFileScreenManager * This, BSTR path, FsrmEnumOptions options, IFsrmCommittableCollection ** fileScreens);
	HRESULT(STDMETHODCALLTYPE * CreateFileScreenException) (IFsrmFileScreenManager * This, BSTR path, IFsrmFileScreenException ** fileScreenException);
	HRESULT(STDMETHODCALLTYPE * GetFileScreenException) (IFsrmFileScreenManager * This, BSTR path, IFsrmFileScreenException ** fileScreenException);
	HRESULT(STDMETHODCALLTYPE * EnumFileScreenExceptions) (IFsrmFileScreenManager * This, BSTR path, FsrmEnumOptions options, IFsrmCommittableCollection ** fileScreenExceptions);
	HRESULT(STDMETHODCALLTYPE * CreateFileScreenCollection) (IFsrmFileScreenManager * This, IFsrmCommittableCollection ** collection);
	END_INTERFACE
}  IFsrmFileScreenManagerVtbl;
interface IFsrmFileScreenManager
{
	CONST_VTBL struct IFsrmFileScreenManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsrmFileScreenManager_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsrmFileScreenManager_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsrmFileScreenManager_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsrmFileScreenManager_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsrmFileScreenManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsrmFileScreenManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsrmFileScreenManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsrmFileScreenManager_get_ActionVariables(This,variables)( (This)->lpVtbl -> get_ActionVariables(This,variables) )
#define IFsrmFileScreenManager_get_ActionVariableDescriptions(This,descriptions)( (This)->lpVtbl -> get_ActionVariableDescriptions(This,descriptions) )
#define IFsrmFileScreenManager_CreateFileScreen(This,path,fileScreen)( (This)->lpVtbl -> CreateFileScreen(This,path,fileScreen) )
#define IFsrmFileScreenManager_GetFileScreen(This,path,fileScreen)( (This)->lpVtbl -> GetFileScreen(This,path,fileScreen) )
#define IFsrmFileScreenManager_EnumFileScreens(This,path,options,fileScreens)( (This)->lpVtbl -> EnumFileScreens(This,path,options,fileScreens) )
#define IFsrmFileScreenManager_CreateFileScreenException(This,path,fileScreenException)( (This)->lpVtbl -> CreateFileScreenException(This,path,fileScreenException) )
#define IFsrmFileScreenManager_GetFileScreenException(This,path,fileScreenException)( (This)->lpVtbl -> GetFileScreenException(This,path,fileScreenException) )
#define IFsrmFileScreenManager_EnumFileScreenExceptions(This,path,options,fileScreenExceptions)( (This)->lpVtbl -> EnumFileScreenExceptions(This,path,options,fileScreenExceptions) )
#define IFsrmFileScreenManager_CreateFileScreenCollection(This,collection)( (This)->lpVtbl -> CreateFileScreenCollection(This,collection) )
#endif
#endif
#ifndef __IFsrmFileScreenTemplate_INTERFACE_DEFINED__
#define __IFsrmFileScreenTemplate_INTERFACE_DEFINED__
extern const IID IID_IFsrmFileScreenTemplate;
typedef struct IFsrmFileScreenTemplateVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFsrmFileScreenTemplate * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFsrmFileScreenTemplate * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFsrmFileScreenTemplate * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFsrmFileScreenTemplate * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFsrmFileScreenTemplate * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFsrmFileScreenTemplate * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFsrmFileScreenTemplate * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IFsrmFileScreenTemplate * This, FSRM_OBJECT_ID * id);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IFsrmFileScreenTemplate * This, BSTR * description);
	HRESULT(STDMETHODCALLTYPE * put_Description) (IFsrmFileScreenTemplate * This, BSTR description);
	HRESULT(STDMETHODCALLTYPE * Delete) (IFsrmFileScreenTemplate * This);
	HRESULT(STDMETHODCALLTYPE * Commit) (IFsrmFileScreenTemplate * This);
	HRESULT(STDMETHODCALLTYPE * get_BlockedFileGroups) (IFsrmFileScreenTemplate * This, IFsrmMutableCollection ** blockList);
	HRESULT(STDMETHODCALLTYPE * put_BlockedFileGroups) (IFsrmFileScreenTemplate * This, IFsrmMutableCollection * blockList);
	HRESULT(STDMETHODCALLTYPE * get_FileScreenFlags) (IFsrmFileScreenTemplate * This, long *fileScreenFlags);
	HRESULT(STDMETHODCALLTYPE * put_FileScreenFlags) (IFsrmFileScreenTemplate * This, long fileScreenFlags);
	HRESULT(STDMETHODCALLTYPE * CreateAction) (IFsrmFileScreenTemplate * This, FsrmActionType actionType, IFsrmAction ** action);
	HRESULT(STDMETHODCALLTYPE * EnumActions) (IFsrmFileScreenTemplate * This, IFsrmCollection ** actions);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IFsrmFileScreenTemplate * This, BSTR * name);
	HRESULT(STDMETHODCALLTYPE * put_Name) (IFsrmFileScreenTemplate * This, BSTR name);
	HRESULT(STDMETHODCALLTYPE * CopyTemplate) (IFsrmFileScreenTemplate * This, BSTR fileScreenTemplateName);
	HRESULT(STDMETHODCALLTYPE * CommitAndUpdateDerived) (IFsrmFileScreenTemplate * This, FsrmCommitOptions commitOptions, FsrmTemplateApplyOptions applyOptions, IFsrmDerivedObjectsResult ** derivedObjectsResult);
	END_INTERFACE
}  IFsrmFileScreenTemplateVtbl;
interface IFsrmFileScreenTemplate
{
	CONST_VTBL struct IFsrmFileScreenTemplateVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsrmFileScreenTemplate_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsrmFileScreenTemplate_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsrmFileScreenTemplate_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsrmFileScreenTemplate_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsrmFileScreenTemplate_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsrmFileScreenTemplate_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsrmFileScreenTemplate_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsrmFileScreenTemplate_get_Id(This,id)( (This)->lpVtbl -> get_Id(This,id) )
#define IFsrmFileScreenTemplate_get_Description(This,description)( (This)->lpVtbl -> get_Description(This,description) )
#define IFsrmFileScreenTemplate_put_Description(This,description)( (This)->lpVtbl -> put_Description(This,description) )
#define IFsrmFileScreenTemplate_Delete(This)( (This)->lpVtbl -> Delete(This) )
#define IFsrmFileScreenTemplate_Commit(This)( (This)->lpVtbl -> Commit(This) )
#define IFsrmFileScreenTemplate_get_BlockedFileGroups(This,blockList)( (This)->lpVtbl -> get_BlockedFileGroups(This,blockList) )
#define IFsrmFileScreenTemplate_put_BlockedFileGroups(This,blockList)( (This)->lpVtbl -> put_BlockedFileGroups(This,blockList) )
#define IFsrmFileScreenTemplate_get_FileScreenFlags(This,fileScreenFlags)( (This)->lpVtbl -> get_FileScreenFlags(This,fileScreenFlags) )
#define IFsrmFileScreenTemplate_put_FileScreenFlags(This,fileScreenFlags)( (This)->lpVtbl -> put_FileScreenFlags(This,fileScreenFlags) )
#define IFsrmFileScreenTemplate_CreateAction(This,actionType,action)( (This)->lpVtbl -> CreateAction(This,actionType,action) )
#define IFsrmFileScreenTemplate_EnumActions(This,actions)( (This)->lpVtbl -> EnumActions(This,actions) )
#define IFsrmFileScreenTemplate_get_Name(This,name)( (This)->lpVtbl -> get_Name(This,name) )
#define IFsrmFileScreenTemplate_put_Name(This,name)( (This)->lpVtbl -> put_Name(This,name) )
#define IFsrmFileScreenTemplate_CopyTemplate(This,fileScreenTemplateName)( (This)->lpVtbl -> CopyTemplate(This,fileScreenTemplateName) )
#define IFsrmFileScreenTemplate_CommitAndUpdateDerived(This,commitOptions,applyOptions,derivedObjectsResult)( (This)->lpVtbl -> CommitAndUpdateDerived(This,commitOptions,applyOptions,derivedObjectsResult) )
#endif
#endif
#ifndef __IFsrmFileScreenTemplateImported_INTERFACE_DEFINED__
#define __IFsrmFileScreenTemplateImported_INTERFACE_DEFINED__
extern const IID IID_IFsrmFileScreenTemplateImported;
typedef struct IFsrmFileScreenTemplateImportedVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFsrmFileScreenTemplateImported * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFsrmFileScreenTemplateImported * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFsrmFileScreenTemplateImported * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFsrmFileScreenTemplateImported * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFsrmFileScreenTemplateImported * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFsrmFileScreenTemplateImported * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFsrmFileScreenTemplateImported * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IFsrmFileScreenTemplateImported * This, FSRM_OBJECT_ID * id);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IFsrmFileScreenTemplateImported * This, BSTR * description);
	HRESULT(STDMETHODCALLTYPE * put_Description) (IFsrmFileScreenTemplateImported * This, BSTR description);
	HRESULT(STDMETHODCALLTYPE * Delete) (IFsrmFileScreenTemplateImported * This);
	HRESULT(STDMETHODCALLTYPE * Commit) (IFsrmFileScreenTemplateImported * This);
	HRESULT(STDMETHODCALLTYPE * get_BlockedFileGroups) (IFsrmFileScreenTemplateImported * This, IFsrmMutableCollection ** blockList);
	HRESULT(STDMETHODCALLTYPE * put_BlockedFileGroups) (IFsrmFileScreenTemplateImported * This, IFsrmMutableCollection * blockList);
	HRESULT(STDMETHODCALLTYPE * get_FileScreenFlags) (IFsrmFileScreenTemplateImported * This, long *fileScreenFlags);
	HRESULT(STDMETHODCALLTYPE * put_FileScreenFlags) (IFsrmFileScreenTemplateImported * This, long fileScreenFlags);
	HRESULT(STDMETHODCALLTYPE * CreateAction) (IFsrmFileScreenTemplateImported * This, FsrmActionType actionType, IFsrmAction ** action);
	HRESULT(STDMETHODCALLTYPE * EnumActions) (IFsrmFileScreenTemplateImported * This, IFsrmCollection ** actions);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IFsrmFileScreenTemplateImported * This, BSTR * name);
	HRESULT(STDMETHODCALLTYPE * put_Name) (IFsrmFileScreenTemplateImported * This, BSTR name);
	HRESULT(STDMETHODCALLTYPE * CopyTemplate) (IFsrmFileScreenTemplateImported * This, BSTR fileScreenTemplateName);
	HRESULT(STDMETHODCALLTYPE * CommitAndUpdateDerived) (IFsrmFileScreenTemplateImported * This, FsrmCommitOptions commitOptions, FsrmTemplateApplyOptions applyOptions, IFsrmDerivedObjectsResult ** derivedObjectsResult);
	HRESULT(STDMETHODCALLTYPE * get_OverwriteOnCommit) (IFsrmFileScreenTemplateImported * This, VARIANT_BOOL * overwrite);
	HRESULT(STDMETHODCALLTYPE * put_OverwriteOnCommit) (IFsrmFileScreenTemplateImported * This, VARIANT_BOOL overwrite);
	END_INTERFACE
}  IFsrmFileScreenTemplateImportedVtbl;
interface IFsrmFileScreenTemplateImported
{
	CONST_VTBL struct IFsrmFileScreenTemplateImportedVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsrmFileScreenTemplateImported_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsrmFileScreenTemplateImported_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsrmFileScreenTemplateImported_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsrmFileScreenTemplateImported_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsrmFileScreenTemplateImported_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsrmFileScreenTemplateImported_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsrmFileScreenTemplateImported_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsrmFileScreenTemplateImported_get_Id(This,id)( (This)->lpVtbl -> get_Id(This,id) )
#define IFsrmFileScreenTemplateImported_get_Description(This,description)( (This)->lpVtbl -> get_Description(This,description) )
#define IFsrmFileScreenTemplateImported_put_Description(This,description)( (This)->lpVtbl -> put_Description(This,description) )
#define IFsrmFileScreenTemplateImported_Delete(This)( (This)->lpVtbl -> Delete(This) )
#define IFsrmFileScreenTemplateImported_Commit(This)( (This)->lpVtbl -> Commit(This) )
#define IFsrmFileScreenTemplateImported_get_BlockedFileGroups(This,blockList)( (This)->lpVtbl -> get_BlockedFileGroups(This,blockList) )
#define IFsrmFileScreenTemplateImported_put_BlockedFileGroups(This,blockList)( (This)->lpVtbl -> put_BlockedFileGroups(This,blockList) )
#define IFsrmFileScreenTemplateImported_get_FileScreenFlags(This,fileScreenFlags)( (This)->lpVtbl -> get_FileScreenFlags(This,fileScreenFlags) )
#define IFsrmFileScreenTemplateImported_put_FileScreenFlags(This,fileScreenFlags)( (This)->lpVtbl -> put_FileScreenFlags(This,fileScreenFlags) )
#define IFsrmFileScreenTemplateImported_CreateAction(This,actionType,action)( (This)->lpVtbl -> CreateAction(This,actionType,action) )
#define IFsrmFileScreenTemplateImported_EnumActions(This,actions)( (This)->lpVtbl -> EnumActions(This,actions) )
#define IFsrmFileScreenTemplateImported_get_Name(This,name)( (This)->lpVtbl -> get_Name(This,name) )
#define IFsrmFileScreenTemplateImported_put_Name(This,name)( (This)->lpVtbl -> put_Name(This,name) )
#define IFsrmFileScreenTemplateImported_CopyTemplate(This,fileScreenTemplateName)( (This)->lpVtbl -> CopyTemplate(This,fileScreenTemplateName) )
#define IFsrmFileScreenTemplateImported_CommitAndUpdateDerived(This,commitOptions,applyOptions,derivedObjectsResult)( (This)->lpVtbl -> CommitAndUpdateDerived(This,commitOptions,applyOptions,derivedObjectsResult) )
#define IFsrmFileScreenTemplateImported_get_OverwriteOnCommit(This,overwrite)( (This)->lpVtbl -> get_OverwriteOnCommit(This,overwrite) )
#define IFsrmFileScreenTemplateImported_put_OverwriteOnCommit(This,overwrite)( (This)->lpVtbl -> put_OverwriteOnCommit(This,overwrite) )
#endif
#endif
#ifndef __IFsrmFileScreenTemplateManager_INTERFACE_DEFINED__
#define __IFsrmFileScreenTemplateManager_INTERFACE_DEFINED__
extern const IID IID_IFsrmFileScreenTemplateManager;
typedef struct IFsrmFileScreenTemplateManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFsrmFileScreenTemplateManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFsrmFileScreenTemplateManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFsrmFileScreenTemplateManager * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFsrmFileScreenTemplateManager * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFsrmFileScreenTemplateManager * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFsrmFileScreenTemplateManager * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFsrmFileScreenTemplateManager * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * CreateTemplate) (IFsrmFileScreenTemplateManager * This, IFsrmFileScreenTemplate ** fileScreenTemplate);
	HRESULT(STDMETHODCALLTYPE * GetTemplate) (IFsrmFileScreenTemplateManager * This, BSTR name, IFsrmFileScreenTemplate ** fileScreenTemplate);
	HRESULT(STDMETHODCALLTYPE * EnumTemplates) (IFsrmFileScreenTemplateManager * This, FsrmEnumOptions options, IFsrmCommittableCollection ** fileScreenTemplates);
	HRESULT(STDMETHODCALLTYPE * ExportTemplates) (IFsrmFileScreenTemplateManager * This, VARIANT * fileScreenTemplateNamesArray, BSTR * serializedFileScreenTemplates);
	HRESULT(STDMETHODCALLTYPE * ImportTemplates) (IFsrmFileScreenTemplateManager * This, BSTR serializedFileScreenTemplates, VARIANT * fileScreenTemplateNamesArray, IFsrmCommittableCollection ** fileScreenTemplates);
	END_INTERFACE
}  IFsrmFileScreenTemplateManagerVtbl;
interface IFsrmFileScreenTemplateManager
{
	CONST_VTBL struct IFsrmFileScreenTemplateManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsrmFileScreenTemplateManager_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsrmFileScreenTemplateManager_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsrmFileScreenTemplateManager_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsrmFileScreenTemplateManager_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsrmFileScreenTemplateManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsrmFileScreenTemplateManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsrmFileScreenTemplateManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsrmFileScreenTemplateManager_CreateTemplate(This,fileScreenTemplate)( (This)->lpVtbl -> CreateTemplate(This,fileScreenTemplate) )
#define IFsrmFileScreenTemplateManager_GetTemplate(This,name,fileScreenTemplate)( (This)->lpVtbl -> GetTemplate(This,name,fileScreenTemplate) )
#define IFsrmFileScreenTemplateManager_EnumTemplates(This,options,fileScreenTemplates)( (This)->lpVtbl -> EnumTemplates(This,options,fileScreenTemplates) )
#define IFsrmFileScreenTemplateManager_ExportTemplates(This,fileScreenTemplateNamesArray,serializedFileScreenTemplates)( (This)->lpVtbl -> ExportTemplates(This,fileScreenTemplateNamesArray,serializedFileScreenTemplates) )
#define IFsrmFileScreenTemplateManager_ImportTemplates(This,serializedFileScreenTemplates,fileScreenTemplateNamesArray,fileScreenTemplates)( (This)->lpVtbl -> ImportTemplates(This,serializedFileScreenTemplates,fileScreenTemplateNamesArray,fileScreenTemplates) )
#endif
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER LPSAFEARRAY_UserSize(unsigned long *, unsigned long, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserMarshal(unsigned long *, unsigned char *, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserUnmarshal(unsigned long *, unsigned char *, LPSAFEARRAY *);
void __RPC_USER LPSAFEARRAY_UserFree(unsigned long *, LPSAFEARRAY *);
unsigned long __RPC_USER VARIANT_UserSize(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree(unsigned long *, VARIANT *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
unsigned long __RPC_USER LPSAFEARRAY_UserSize64(unsigned long *, unsigned long, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserMarshal64(unsigned long *, unsigned char *, LPSAFEARRAY *);
unsigned char *__RPC_USER LPSAFEARRAY_UserUnmarshal64(unsigned long *, unsigned char *, LPSAFEARRAY *);
void __RPC_USER LPSAFEARRAY_UserFree64(unsigned long *, LPSAFEARRAY *);
unsigned long __RPC_USER VARIANT_UserSize64(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal64(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree64(unsigned long *, VARIANT *);
#endif
