/*+@@file@@----------------------------------------------------------------*//*!
 \file		fsrmquota.h
 \par Description
            Extension and update of headers for PellesC compiler suite.
 \par Project:
            PellesC Headers extension
 \date		Created  on Sun Jul 10 18:44:52 2016
 \date		Modified on Sun Jul 10 18:44:52 2016
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
#ifndef __fsrmquota_h__
#define __fsrmquota_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IFsrmQuotaBase_FWD_DEFINED__
#define __IFsrmQuotaBase_FWD_DEFINED__
typedef interface IFsrmQuotaBase IFsrmQuotaBase;
#endif
#ifndef __IFsrmQuotaObject_FWD_DEFINED__
#define __IFsrmQuotaObject_FWD_DEFINED__
typedef interface IFsrmQuotaObject IFsrmQuotaObject;
#endif
#ifndef __IFsrmQuota_FWD_DEFINED__
#define __IFsrmQuota_FWD_DEFINED__
typedef interface IFsrmQuota IFsrmQuota;
#endif
#ifndef __IFsrmAutoApplyQuota_FWD_DEFINED__
#define __IFsrmAutoApplyQuota_FWD_DEFINED__
typedef interface IFsrmAutoApplyQuota IFsrmAutoApplyQuota;
#endif
#ifndef __IFsrmQuotaManager_FWD_DEFINED__
#define __IFsrmQuotaManager_FWD_DEFINED__
typedef interface IFsrmQuotaManager IFsrmQuotaManager;
#endif
#ifndef __IFsrmQuotaManagerEx_FWD_DEFINED__
#define __IFsrmQuotaManagerEx_FWD_DEFINED__
typedef interface IFsrmQuotaManagerEx IFsrmQuotaManagerEx;
#endif
#ifndef __IFsrmQuotaTemplate_FWD_DEFINED__
#define __IFsrmQuotaTemplate_FWD_DEFINED__
typedef interface IFsrmQuotaTemplate IFsrmQuotaTemplate;
#endif
#ifndef __IFsrmQuotaTemplateImported_FWD_DEFINED__
#define __IFsrmQuotaTemplateImported_FWD_DEFINED__
typedef interface IFsrmQuotaTemplateImported IFsrmQuotaTemplateImported;
#endif
#ifndef __IFsrmQuotaTemplateManager_FWD_DEFINED__
#define __IFsrmQuotaTemplateManager_FWD_DEFINED__
typedef interface IFsrmQuotaTemplateManager IFsrmQuotaTemplateManager;
#endif
#include "oaidl.h"
#include "fsrmenums.h"
#include "fsrm.h"
#define	FSRM_DISPID_QUOTA_BASE	( ( FSRM_DISPID_FEATURE_QUOTA | 0x100000 )  )
#define	FSRM_DISPID_QUOTA_OBJECT	( ( FSRM_DISPID_QUOTA_BASE | 0x10000 )  )
#define	FSRM_DISPID_QUOTA	( ( FSRM_DISPID_QUOTA_OBJECT | 0x1000 )  )
#define	FSRM_DISPID_AUTOAPPLYQUOTA	( ( FSRM_DISPID_QUOTA_OBJECT | 0x2000 )  )
#define	FSRM_DISPID_QUOTA_TEMPLATE	( ( FSRM_DISPID_QUOTA_BASE | 0x20000 )  )
#define	FSRM_DISPID_QUOTA_TEMPLATE_IMPORTED	( ( FSRM_DISPID_QUOTA_TEMPLATE | 0x1000 )  )
#define	FSRM_DISPID_QUOTA_MANAGER	( ( FSRM_DISPID_FEATURE_QUOTA | 0x200000 )  )
#define	FSRM_DISPID_QUOTA_TEMPLATE_MANAGER	( ( FSRM_DISPID_FEATURE_QUOTA | 0x300000 )  )
#define	FSRM_DISPID_QUOTA_MANAGER_EX	( ( FSRM_DISPID_FEATURE_QUOTA | 0x400000 )  )
typedef long FSRM_QUOTA_THRESHOLD;
#define	FsrmMaxNumberThresholds	( 16 )
#define	FsrmMinThresholdValue	( 1 )
#define	FsrmMaxThresholdValue	( 250 )
#define	FsrmMinQuotaLimit	( 1024 )
#define	FsrmMaxExcludeFolders	( 32 )
extern RPC_IF_HANDLE __MIDL_itf_fsrmquota_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_fsrmquota_0000_0000_v0_0_s_ifspec;
#ifndef __IFsrmQuotaBase_INTERFACE_DEFINED__
#define __IFsrmQuotaBase_INTERFACE_DEFINED__
extern const IID IID_IFsrmQuotaBase;
typedef struct IFsrmQuotaBaseVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFsrmQuotaBase * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFsrmQuotaBase * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFsrmQuotaBase * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFsrmQuotaBase * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFsrmQuotaBase * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFsrmQuotaBase * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFsrmQuotaBase * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IFsrmQuotaBase * This, FSRM_OBJECT_ID * id);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IFsrmQuotaBase * This, BSTR * description);
	HRESULT(STDMETHODCALLTYPE * put_Description) (IFsrmQuotaBase * This, BSTR description);
	HRESULT(STDMETHODCALLTYPE * Delete) (IFsrmQuotaBase * This);
	HRESULT(STDMETHODCALLTYPE * Commit) (IFsrmQuotaBase * This);
	HRESULT(STDMETHODCALLTYPE * get_QuotaLimit) (IFsrmQuotaBase * This, VARIANT * quotaLimit);
	HRESULT(STDMETHODCALLTYPE * put_QuotaLimit) (IFsrmQuotaBase * This, VARIANT quotaLimit);
	HRESULT(STDMETHODCALLTYPE * get_QuotaFlags) (IFsrmQuotaBase * This, long *quotaFlags);
	HRESULT(STDMETHODCALLTYPE * put_QuotaFlags) (IFsrmQuotaBase * This, long quotaFlags);
	HRESULT(STDMETHODCALLTYPE * get_Thresholds) (IFsrmQuotaBase * This, SAFEARRAY * *thresholds);
	HRESULT(STDMETHODCALLTYPE * AddThreshold) (IFsrmQuotaBase * This, FSRM_QUOTA_THRESHOLD threshold);
	HRESULT(STDMETHODCALLTYPE * DeleteThreshold) (IFsrmQuotaBase * This, FSRM_QUOTA_THRESHOLD threshold);
	HRESULT(STDMETHODCALLTYPE * ModifyThreshold) (IFsrmQuotaBase * This, FSRM_QUOTA_THRESHOLD threshold, FSRM_QUOTA_THRESHOLD newThreshold);
	HRESULT(STDMETHODCALLTYPE * CreateThresholdAction) (IFsrmQuotaBase * This, FSRM_QUOTA_THRESHOLD threshold, FsrmActionType actionType, IFsrmAction ** action);
	HRESULT(STDMETHODCALLTYPE * EnumThresholdActions) (IFsrmQuotaBase * This, FSRM_QUOTA_THRESHOLD threshold, IFsrmCollection ** actions);
	END_INTERFACE
}  IFsrmQuotaBaseVtbl;
interface IFsrmQuotaBase
{
	CONST_VTBL struct IFsrmQuotaBaseVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsrmQuotaBase_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsrmQuotaBase_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsrmQuotaBase_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsrmQuotaBase_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsrmQuotaBase_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsrmQuotaBase_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsrmQuotaBase_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsrmQuotaBase_get_Id(This,id)( (This)->lpVtbl -> get_Id(This,id) )
#define IFsrmQuotaBase_get_Description(This,description)( (This)->lpVtbl -> get_Description(This,description) )
#define IFsrmQuotaBase_put_Description(This,description)( (This)->lpVtbl -> put_Description(This,description) )
#define IFsrmQuotaBase_Delete(This)( (This)->lpVtbl -> Delete(This) )
#define IFsrmQuotaBase_Commit(This)( (This)->lpVtbl -> Commit(This) )
#define IFsrmQuotaBase_get_QuotaLimit(This,quotaLimit)( (This)->lpVtbl -> get_QuotaLimit(This,quotaLimit) )
#define IFsrmQuotaBase_put_QuotaLimit(This,quotaLimit)( (This)->lpVtbl -> put_QuotaLimit(This,quotaLimit) )
#define IFsrmQuotaBase_get_QuotaFlags(This,quotaFlags)( (This)->lpVtbl -> get_QuotaFlags(This,quotaFlags) )
#define IFsrmQuotaBase_put_QuotaFlags(This,quotaFlags)( (This)->lpVtbl -> put_QuotaFlags(This,quotaFlags) )
#define IFsrmQuotaBase_get_Thresholds(This,thresholds)( (This)->lpVtbl -> get_Thresholds(This,thresholds) )
#define IFsrmQuotaBase_AddThreshold(This,threshold)( (This)->lpVtbl -> AddThreshold(This,threshold) )
#define IFsrmQuotaBase_DeleteThreshold(This,threshold)( (This)->lpVtbl -> DeleteThreshold(This,threshold) )
#define IFsrmQuotaBase_ModifyThreshold(This,threshold,newThreshold)( (This)->lpVtbl -> ModifyThreshold(This,threshold,newThreshold) )
#define IFsrmQuotaBase_CreateThresholdAction(This,threshold,actionType,action)( (This)->lpVtbl -> CreateThresholdAction(This,threshold,actionType,action) )
#define IFsrmQuotaBase_EnumThresholdActions(This,threshold,actions)( (This)->lpVtbl -> EnumThresholdActions(This,threshold,actions) )
#endif
#endif
#ifndef __IFsrmQuotaObject_INTERFACE_DEFINED__
#define __IFsrmQuotaObject_INTERFACE_DEFINED__
extern const IID IID_IFsrmQuotaObject;
typedef struct IFsrmQuotaObjectVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFsrmQuotaObject * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFsrmQuotaObject * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFsrmQuotaObject * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFsrmQuotaObject * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFsrmQuotaObject * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFsrmQuotaObject * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFsrmQuotaObject * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IFsrmQuotaObject * This, FSRM_OBJECT_ID * id);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IFsrmQuotaObject * This, BSTR * description);
	HRESULT(STDMETHODCALLTYPE * put_Description) (IFsrmQuotaObject * This, BSTR description);
	HRESULT(STDMETHODCALLTYPE * Delete) (IFsrmQuotaObject * This);
	HRESULT(STDMETHODCALLTYPE * Commit) (IFsrmQuotaObject * This);
	HRESULT(STDMETHODCALLTYPE * get_QuotaLimit) (IFsrmQuotaObject * This, VARIANT * quotaLimit);
	HRESULT(STDMETHODCALLTYPE * put_QuotaLimit) (IFsrmQuotaObject * This, VARIANT quotaLimit);
	HRESULT(STDMETHODCALLTYPE * get_QuotaFlags) (IFsrmQuotaObject * This, long *quotaFlags);
	HRESULT(STDMETHODCALLTYPE * put_QuotaFlags) (IFsrmQuotaObject * This, long quotaFlags);
	HRESULT(STDMETHODCALLTYPE * get_Thresholds) (IFsrmQuotaObject * This, SAFEARRAY * *thresholds);
	HRESULT(STDMETHODCALLTYPE * AddThreshold) (IFsrmQuotaObject * This, FSRM_QUOTA_THRESHOLD threshold);
	HRESULT(STDMETHODCALLTYPE * DeleteThreshold) (IFsrmQuotaObject * This, FSRM_QUOTA_THRESHOLD threshold);
	HRESULT(STDMETHODCALLTYPE * ModifyThreshold) (IFsrmQuotaObject * This, FSRM_QUOTA_THRESHOLD threshold, FSRM_QUOTA_THRESHOLD newThreshold);
	HRESULT(STDMETHODCALLTYPE * CreateThresholdAction) (IFsrmQuotaObject * This, FSRM_QUOTA_THRESHOLD threshold, FsrmActionType actionType, IFsrmAction ** action);
	HRESULT(STDMETHODCALLTYPE * EnumThresholdActions) (IFsrmQuotaObject * This, FSRM_QUOTA_THRESHOLD threshold, IFsrmCollection ** actions);
	HRESULT(STDMETHODCALLTYPE * get_Path) (IFsrmQuotaObject * This, BSTR * path);
	HRESULT(STDMETHODCALLTYPE * get_UserSid) (IFsrmQuotaObject * This, BSTR * userSid);
	HRESULT(STDMETHODCALLTYPE * get_UserAccount) (IFsrmQuotaObject * This, BSTR * userAccount);
	HRESULT(STDMETHODCALLTYPE * get_SourceTemplateName) (IFsrmQuotaObject * This, BSTR * quotaTemplateName);
	HRESULT(STDMETHODCALLTYPE * get_MatchesSourceTemplate) (IFsrmQuotaObject * This, VARIANT_BOOL * matches);
	HRESULT(STDMETHODCALLTYPE * ApplyTemplate) (IFsrmQuotaObject * This, BSTR quotaTemplateName);
	END_INTERFACE
}  IFsrmQuotaObjectVtbl;
interface IFsrmQuotaObject
{
	CONST_VTBL struct IFsrmQuotaObjectVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsrmQuotaObject_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsrmQuotaObject_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsrmQuotaObject_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsrmQuotaObject_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsrmQuotaObject_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsrmQuotaObject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsrmQuotaObject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsrmQuotaObject_get_Id(This,id)( (This)->lpVtbl -> get_Id(This,id) )
#define IFsrmQuotaObject_get_Description(This,description)( (This)->lpVtbl -> get_Description(This,description) )
#define IFsrmQuotaObject_put_Description(This,description)( (This)->lpVtbl -> put_Description(This,description) )
#define IFsrmQuotaObject_Delete(This)( (This)->lpVtbl -> Delete(This) )
#define IFsrmQuotaObject_Commit(This)( (This)->lpVtbl -> Commit(This) )
#define IFsrmQuotaObject_get_QuotaLimit(This,quotaLimit)( (This)->lpVtbl -> get_QuotaLimit(This,quotaLimit) )
#define IFsrmQuotaObject_put_QuotaLimit(This,quotaLimit)( (This)->lpVtbl -> put_QuotaLimit(This,quotaLimit) )
#define IFsrmQuotaObject_get_QuotaFlags(This,quotaFlags)( (This)->lpVtbl -> get_QuotaFlags(This,quotaFlags) )
#define IFsrmQuotaObject_put_QuotaFlags(This,quotaFlags)( (This)->lpVtbl -> put_QuotaFlags(This,quotaFlags) )
#define IFsrmQuotaObject_get_Thresholds(This,thresholds)( (This)->lpVtbl -> get_Thresholds(This,thresholds) )
#define IFsrmQuotaObject_AddThreshold(This,threshold)( (This)->lpVtbl -> AddThreshold(This,threshold) )
#define IFsrmQuotaObject_DeleteThreshold(This,threshold)( (This)->lpVtbl -> DeleteThreshold(This,threshold) )
#define IFsrmQuotaObject_ModifyThreshold(This,threshold,newThreshold)( (This)->lpVtbl -> ModifyThreshold(This,threshold,newThreshold) )
#define IFsrmQuotaObject_CreateThresholdAction(This,threshold,actionType,action)( (This)->lpVtbl -> CreateThresholdAction(This,threshold,actionType,action) )
#define IFsrmQuotaObject_EnumThresholdActions(This,threshold,actions)( (This)->lpVtbl -> EnumThresholdActions(This,threshold,actions) )
#define IFsrmQuotaObject_get_Path(This,path)( (This)->lpVtbl -> get_Path(This,path) )
#define IFsrmQuotaObject_get_UserSid(This,userSid)( (This)->lpVtbl -> get_UserSid(This,userSid) )
#define IFsrmQuotaObject_get_UserAccount(This,userAccount)( (This)->lpVtbl -> get_UserAccount(This,userAccount) )
#define IFsrmQuotaObject_get_SourceTemplateName(This,quotaTemplateName)( (This)->lpVtbl -> get_SourceTemplateName(This,quotaTemplateName) )
#define IFsrmQuotaObject_get_MatchesSourceTemplate(This,matches)( (This)->lpVtbl -> get_MatchesSourceTemplate(This,matches) )
#define IFsrmQuotaObject_ApplyTemplate(This,quotaTemplateName)( (This)->lpVtbl -> ApplyTemplate(This,quotaTemplateName) )
#endif
#endif
#ifndef __IFsrmQuota_INTERFACE_DEFINED__
#define __IFsrmQuota_INTERFACE_DEFINED__
extern const IID IID_IFsrmQuota;
typedef struct IFsrmQuotaVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFsrmQuota * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFsrmQuota * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFsrmQuota * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFsrmQuota * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFsrmQuota * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFsrmQuota * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFsrmQuota * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IFsrmQuota * This, FSRM_OBJECT_ID * id);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IFsrmQuota * This, BSTR * description);
	HRESULT(STDMETHODCALLTYPE * put_Description) (IFsrmQuota * This, BSTR description);
	HRESULT(STDMETHODCALLTYPE * Delete) (IFsrmQuota * This);
	HRESULT(STDMETHODCALLTYPE * Commit) (IFsrmQuota * This);
	HRESULT(STDMETHODCALLTYPE * get_QuotaLimit) (IFsrmQuota * This, VARIANT * quotaLimit);
	HRESULT(STDMETHODCALLTYPE * put_QuotaLimit) (IFsrmQuota * This, VARIANT quotaLimit);
	HRESULT(STDMETHODCALLTYPE * get_QuotaFlags) (IFsrmQuota * This, long *quotaFlags);
	HRESULT(STDMETHODCALLTYPE * put_QuotaFlags) (IFsrmQuota * This, long quotaFlags);
	HRESULT(STDMETHODCALLTYPE * get_Thresholds) (IFsrmQuota * This, SAFEARRAY * *thresholds);
	HRESULT(STDMETHODCALLTYPE * AddThreshold) (IFsrmQuota * This, FSRM_QUOTA_THRESHOLD threshold);
	HRESULT(STDMETHODCALLTYPE * DeleteThreshold) (IFsrmQuota * This, FSRM_QUOTA_THRESHOLD threshold);
	HRESULT(STDMETHODCALLTYPE * ModifyThreshold) (IFsrmQuota * This, FSRM_QUOTA_THRESHOLD threshold, FSRM_QUOTA_THRESHOLD newThreshold);
	HRESULT(STDMETHODCALLTYPE * CreateThresholdAction) (IFsrmQuota * This, FSRM_QUOTA_THRESHOLD threshold, FsrmActionType actionType, IFsrmAction ** action);
	HRESULT(STDMETHODCALLTYPE * EnumThresholdActions) (IFsrmQuota * This, FSRM_QUOTA_THRESHOLD threshold, IFsrmCollection ** actions);
	HRESULT(STDMETHODCALLTYPE * get_Path) (IFsrmQuota * This, BSTR * path);
	HRESULT(STDMETHODCALLTYPE * get_UserSid) (IFsrmQuota * This, BSTR * userSid);
	HRESULT(STDMETHODCALLTYPE * get_UserAccount) (IFsrmQuota * This, BSTR * userAccount);
	HRESULT(STDMETHODCALLTYPE * get_SourceTemplateName) (IFsrmQuota * This, BSTR * quotaTemplateName);
	HRESULT(STDMETHODCALLTYPE * get_MatchesSourceTemplate) (IFsrmQuota * This, VARIANT_BOOL * matches);
	HRESULT(STDMETHODCALLTYPE * ApplyTemplate) (IFsrmQuota * This, BSTR quotaTemplateName);
	HRESULT(STDMETHODCALLTYPE * get_QuotaUsed) (IFsrmQuota * This, VARIANT * used);
	HRESULT(STDMETHODCALLTYPE * get_QuotaPeakUsage) (IFsrmQuota * This, VARIANT * peakUsage);
	HRESULT(STDMETHODCALLTYPE * get_QuotaPeakUsageTime) (IFsrmQuota * This, DATE * peakUsageDateTime);
	HRESULT(STDMETHODCALLTYPE * ResetPeakUsage) (IFsrmQuota * This);
	HRESULT(STDMETHODCALLTYPE * RefreshUsageProperties) (IFsrmQuota * This);
	END_INTERFACE
}  IFsrmQuotaVtbl;
interface IFsrmQuota
{
	CONST_VTBL struct IFsrmQuotaVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsrmQuota_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsrmQuota_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsrmQuota_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsrmQuota_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsrmQuota_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsrmQuota_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsrmQuota_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsrmQuota_get_Id(This,id)( (This)->lpVtbl -> get_Id(This,id) )
#define IFsrmQuota_get_Description(This,description)( (This)->lpVtbl -> get_Description(This,description) )
#define IFsrmQuota_put_Description(This,description)( (This)->lpVtbl -> put_Description(This,description) )
#define IFsrmQuota_Delete(This)( (This)->lpVtbl -> Delete(This) )
#define IFsrmQuota_Commit(This)( (This)->lpVtbl -> Commit(This) )
#define IFsrmQuota_get_QuotaLimit(This,quotaLimit)( (This)->lpVtbl -> get_QuotaLimit(This,quotaLimit) )
#define IFsrmQuota_put_QuotaLimit(This,quotaLimit)( (This)->lpVtbl -> put_QuotaLimit(This,quotaLimit) )
#define IFsrmQuota_get_QuotaFlags(This,quotaFlags)( (This)->lpVtbl -> get_QuotaFlags(This,quotaFlags) )
#define IFsrmQuota_put_QuotaFlags(This,quotaFlags)( (This)->lpVtbl -> put_QuotaFlags(This,quotaFlags) )
#define IFsrmQuota_get_Thresholds(This,thresholds)( (This)->lpVtbl -> get_Thresholds(This,thresholds) )
#define IFsrmQuota_AddThreshold(This,threshold)( (This)->lpVtbl -> AddThreshold(This,threshold) )
#define IFsrmQuota_DeleteThreshold(This,threshold)( (This)->lpVtbl -> DeleteThreshold(This,threshold) )
#define IFsrmQuota_ModifyThreshold(This,threshold,newThreshold)( (This)->lpVtbl -> ModifyThreshold(This,threshold,newThreshold) )
#define IFsrmQuota_CreateThresholdAction(This,threshold,actionType,action)( (This)->lpVtbl -> CreateThresholdAction(This,threshold,actionType,action) )
#define IFsrmQuota_EnumThresholdActions(This,threshold,actions)( (This)->lpVtbl -> EnumThresholdActions(This,threshold,actions) )
#define IFsrmQuota_get_Path(This,path)( (This)->lpVtbl -> get_Path(This,path) )
#define IFsrmQuota_get_UserSid(This,userSid)( (This)->lpVtbl -> get_UserSid(This,userSid) )
#define IFsrmQuota_get_UserAccount(This,userAccount)( (This)->lpVtbl -> get_UserAccount(This,userAccount) )
#define IFsrmQuota_get_SourceTemplateName(This,quotaTemplateName)( (This)->lpVtbl -> get_SourceTemplateName(This,quotaTemplateName) )
#define IFsrmQuota_get_MatchesSourceTemplate(This,matches)( (This)->lpVtbl -> get_MatchesSourceTemplate(This,matches) )
#define IFsrmQuota_ApplyTemplate(This,quotaTemplateName)( (This)->lpVtbl -> ApplyTemplate(This,quotaTemplateName) )
#define IFsrmQuota_get_QuotaUsed(This,used)( (This)->lpVtbl -> get_QuotaUsed(This,used) )
#define IFsrmQuota_get_QuotaPeakUsage(This,peakUsage)( (This)->lpVtbl -> get_QuotaPeakUsage(This,peakUsage) )
#define IFsrmQuota_get_QuotaPeakUsageTime(This,peakUsageDateTime)( (This)->lpVtbl -> get_QuotaPeakUsageTime(This,peakUsageDateTime) )
#define IFsrmQuota_ResetPeakUsage(This)( (This)->lpVtbl -> ResetPeakUsage(This) )
#define IFsrmQuota_RefreshUsageProperties(This)( (This)->lpVtbl -> RefreshUsageProperties(This) )
#endif
#endif
#ifndef __IFsrmAutoApplyQuota_INTERFACE_DEFINED__
#define __IFsrmAutoApplyQuota_INTERFACE_DEFINED__
extern const IID IID_IFsrmAutoApplyQuota;
typedef struct IFsrmAutoApplyQuotaVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFsrmAutoApplyQuota * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFsrmAutoApplyQuota * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFsrmAutoApplyQuota * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFsrmAutoApplyQuota * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFsrmAutoApplyQuota * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFsrmAutoApplyQuota * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFsrmAutoApplyQuota * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IFsrmAutoApplyQuota * This, FSRM_OBJECT_ID * id);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IFsrmAutoApplyQuota * This, BSTR * description);
	HRESULT(STDMETHODCALLTYPE * put_Description) (IFsrmAutoApplyQuota * This, BSTR description);
	HRESULT(STDMETHODCALLTYPE * Delete) (IFsrmAutoApplyQuota * This);
	HRESULT(STDMETHODCALLTYPE * Commit) (IFsrmAutoApplyQuota * This);
	HRESULT(STDMETHODCALLTYPE * get_QuotaLimit) (IFsrmAutoApplyQuota * This, VARIANT * quotaLimit);
	HRESULT(STDMETHODCALLTYPE * put_QuotaLimit) (IFsrmAutoApplyQuota * This, VARIANT quotaLimit);
	HRESULT(STDMETHODCALLTYPE * get_QuotaFlags) (IFsrmAutoApplyQuota * This, long *quotaFlags);
	HRESULT(STDMETHODCALLTYPE * put_QuotaFlags) (IFsrmAutoApplyQuota * This, long quotaFlags);
	HRESULT(STDMETHODCALLTYPE * get_Thresholds) (IFsrmAutoApplyQuota * This, SAFEARRAY * *thresholds);
	HRESULT(STDMETHODCALLTYPE * AddThreshold) (IFsrmAutoApplyQuota * This, FSRM_QUOTA_THRESHOLD threshold);
	HRESULT(STDMETHODCALLTYPE * DeleteThreshold) (IFsrmAutoApplyQuota * This, FSRM_QUOTA_THRESHOLD threshold);
	HRESULT(STDMETHODCALLTYPE * ModifyThreshold) (IFsrmAutoApplyQuota * This, FSRM_QUOTA_THRESHOLD threshold, FSRM_QUOTA_THRESHOLD newThreshold);
	HRESULT(STDMETHODCALLTYPE * CreateThresholdAction) (IFsrmAutoApplyQuota * This, FSRM_QUOTA_THRESHOLD threshold, FsrmActionType actionType, IFsrmAction ** action);
	HRESULT(STDMETHODCALLTYPE * EnumThresholdActions) (IFsrmAutoApplyQuota * This, FSRM_QUOTA_THRESHOLD threshold, IFsrmCollection ** actions);
	HRESULT(STDMETHODCALLTYPE * get_Path) (IFsrmAutoApplyQuota * This, BSTR * path);
	HRESULT(STDMETHODCALLTYPE * get_UserSid) (IFsrmAutoApplyQuota * This, BSTR * userSid);
	HRESULT(STDMETHODCALLTYPE * get_UserAccount) (IFsrmAutoApplyQuota * This, BSTR * userAccount);
	HRESULT(STDMETHODCALLTYPE * get_SourceTemplateName) (IFsrmAutoApplyQuota * This, BSTR * quotaTemplateName);
	HRESULT(STDMETHODCALLTYPE * get_MatchesSourceTemplate) (IFsrmAutoApplyQuota * This, VARIANT_BOOL * matches);
	HRESULT(STDMETHODCALLTYPE * ApplyTemplate) (IFsrmAutoApplyQuota * This, BSTR quotaTemplateName);
	HRESULT(STDMETHODCALLTYPE * get_ExcludeFolders) (IFsrmAutoApplyQuota * This, SAFEARRAY * *folders);
	HRESULT(STDMETHODCALLTYPE * put_ExcludeFolders) (IFsrmAutoApplyQuota * This, SAFEARRAY * folders);
	HRESULT(STDMETHODCALLTYPE * CommitAndUpdateDerived) (IFsrmAutoApplyQuota * This, FsrmCommitOptions commitOptions, FsrmTemplateApplyOptions applyOptions, IFsrmDerivedObjectsResult ** derivedObjectsResult);
	END_INTERFACE
}  IFsrmAutoApplyQuotaVtbl;
interface IFsrmAutoApplyQuota
{
	CONST_VTBL struct IFsrmAutoApplyQuotaVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsrmAutoApplyQuota_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsrmAutoApplyQuota_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsrmAutoApplyQuota_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsrmAutoApplyQuota_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsrmAutoApplyQuota_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsrmAutoApplyQuota_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsrmAutoApplyQuota_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsrmAutoApplyQuota_get_Id(This,id)( (This)->lpVtbl -> get_Id(This,id) )
#define IFsrmAutoApplyQuota_get_Description(This,description)( (This)->lpVtbl -> get_Description(This,description) )
#define IFsrmAutoApplyQuota_put_Description(This,description)( (This)->lpVtbl -> put_Description(This,description) )
#define IFsrmAutoApplyQuota_Delete(This)( (This)->lpVtbl -> Delete(This) )
#define IFsrmAutoApplyQuota_Commit(This)( (This)->lpVtbl -> Commit(This) )
#define IFsrmAutoApplyQuota_get_QuotaLimit(This,quotaLimit)( (This)->lpVtbl -> get_QuotaLimit(This,quotaLimit) )
#define IFsrmAutoApplyQuota_put_QuotaLimit(This,quotaLimit)( (This)->lpVtbl -> put_QuotaLimit(This,quotaLimit) )
#define IFsrmAutoApplyQuota_get_QuotaFlags(This,quotaFlags)( (This)->lpVtbl -> get_QuotaFlags(This,quotaFlags) )
#define IFsrmAutoApplyQuota_put_QuotaFlags(This,quotaFlags)( (This)->lpVtbl -> put_QuotaFlags(This,quotaFlags) )
#define IFsrmAutoApplyQuota_get_Thresholds(This,thresholds)( (This)->lpVtbl -> get_Thresholds(This,thresholds) )
#define IFsrmAutoApplyQuota_AddThreshold(This,threshold)( (This)->lpVtbl -> AddThreshold(This,threshold) )
#define IFsrmAutoApplyQuota_DeleteThreshold(This,threshold)( (This)->lpVtbl -> DeleteThreshold(This,threshold) )
#define IFsrmAutoApplyQuota_ModifyThreshold(This,threshold,newThreshold)( (This)->lpVtbl -> ModifyThreshold(This,threshold,newThreshold) )
#define IFsrmAutoApplyQuota_CreateThresholdAction(This,threshold,actionType,action)( (This)->lpVtbl -> CreateThresholdAction(This,threshold,actionType,action) )
#define IFsrmAutoApplyQuota_EnumThresholdActions(This,threshold,actions)( (This)->lpVtbl -> EnumThresholdActions(This,threshold,actions) )
#define IFsrmAutoApplyQuota_get_Path(This,path)( (This)->lpVtbl -> get_Path(This,path) )
#define IFsrmAutoApplyQuota_get_UserSid(This,userSid)( (This)->lpVtbl -> get_UserSid(This,userSid) )
#define IFsrmAutoApplyQuota_get_UserAccount(This,userAccount)( (This)->lpVtbl -> get_UserAccount(This,userAccount) )
#define IFsrmAutoApplyQuota_get_SourceTemplateName(This,quotaTemplateName)( (This)->lpVtbl -> get_SourceTemplateName(This,quotaTemplateName) )
#define IFsrmAutoApplyQuota_get_MatchesSourceTemplate(This,matches)( (This)->lpVtbl -> get_MatchesSourceTemplate(This,matches) )
#define IFsrmAutoApplyQuota_ApplyTemplate(This,quotaTemplateName)( (This)->lpVtbl -> ApplyTemplate(This,quotaTemplateName) )
#define IFsrmAutoApplyQuota_get_ExcludeFolders(This,folders)( (This)->lpVtbl -> get_ExcludeFolders(This,folders) )
#define IFsrmAutoApplyQuota_put_ExcludeFolders(This,folders)( (This)->lpVtbl -> put_ExcludeFolders(This,folders) )
#define IFsrmAutoApplyQuota_CommitAndUpdateDerived(This,commitOptions,applyOptions,derivedObjectsResult)( (This)->lpVtbl -> CommitAndUpdateDerived(This,commitOptions,applyOptions,derivedObjectsResult) )
#endif
#endif
#ifndef __IFsrmQuotaManager_INTERFACE_DEFINED__
#define __IFsrmQuotaManager_INTERFACE_DEFINED__
extern const IID IID_IFsrmQuotaManager;
typedef struct IFsrmQuotaManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFsrmQuotaManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFsrmQuotaManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFsrmQuotaManager * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFsrmQuotaManager * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFsrmQuotaManager * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFsrmQuotaManager * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFsrmQuotaManager * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_ActionVariables) (IFsrmQuotaManager * This, SAFEARRAY * *variables);
	HRESULT(STDMETHODCALLTYPE * get_ActionVariableDescriptions) (IFsrmQuotaManager * This, SAFEARRAY * *descriptions);
	HRESULT(STDMETHODCALLTYPE * CreateQuota) (IFsrmQuotaManager * This, BSTR path, IFsrmQuota ** quota);
	HRESULT(STDMETHODCALLTYPE * CreateAutoApplyQuota) (IFsrmQuotaManager * This, BSTR quotaTemplateName, BSTR path, IFsrmAutoApplyQuota ** quota);
	HRESULT(STDMETHODCALLTYPE * GetQuota) (IFsrmQuotaManager * This, BSTR path, IFsrmQuota ** quota);
	HRESULT(STDMETHODCALLTYPE * GetAutoApplyQuota) (IFsrmQuotaManager * This, BSTR path, IFsrmAutoApplyQuota ** quota);
	HRESULT(STDMETHODCALLTYPE * GetRestrictiveQuota) (IFsrmQuotaManager * This, BSTR path, IFsrmQuota ** quota);
	HRESULT(STDMETHODCALLTYPE * EnumQuotas) (IFsrmQuotaManager * This, BSTR path, FsrmEnumOptions options, IFsrmCommittableCollection ** quotas);
	HRESULT(STDMETHODCALLTYPE * EnumAutoApplyQuotas) (IFsrmQuotaManager * This, BSTR path, FsrmEnumOptions options, IFsrmCommittableCollection ** quotas);
	HRESULT(STDMETHODCALLTYPE * EnumEffectiveQuotas) (IFsrmQuotaManager * This, BSTR path, FsrmEnumOptions options, IFsrmCommittableCollection ** quotas);
	HRESULT(STDMETHODCALLTYPE * Scan) (IFsrmQuotaManager * This, BSTR strPath);
	HRESULT(STDMETHODCALLTYPE * CreateQuotaCollection) (IFsrmQuotaManager * This, IFsrmCommittableCollection ** collection);
	END_INTERFACE
}  IFsrmQuotaManagerVtbl;
interface IFsrmQuotaManager
{
	CONST_VTBL struct IFsrmQuotaManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsrmQuotaManager_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsrmQuotaManager_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsrmQuotaManager_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsrmQuotaManager_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsrmQuotaManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsrmQuotaManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsrmQuotaManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsrmQuotaManager_get_ActionVariables(This,variables)( (This)->lpVtbl -> get_ActionVariables(This,variables) )
#define IFsrmQuotaManager_get_ActionVariableDescriptions(This,descriptions)( (This)->lpVtbl -> get_ActionVariableDescriptions(This,descriptions) )
#define IFsrmQuotaManager_CreateQuota(This,path,quota)( (This)->lpVtbl -> CreateQuota(This,path,quota) )
#define IFsrmQuotaManager_CreateAutoApplyQuota(This,quotaTemplateName,path,quota)( (This)->lpVtbl -> CreateAutoApplyQuota(This,quotaTemplateName,path,quota) )
#define IFsrmQuotaManager_GetQuota(This,path,quota)( (This)->lpVtbl -> GetQuota(This,path,quota) )
#define IFsrmQuotaManager_GetAutoApplyQuota(This,path,quota)( (This)->lpVtbl -> GetAutoApplyQuota(This,path,quota) )
#define IFsrmQuotaManager_GetRestrictiveQuota(This,path,quota)( (This)->lpVtbl -> GetRestrictiveQuota(This,path,quota) )
#define IFsrmQuotaManager_EnumQuotas(This,path,options,quotas)( (This)->lpVtbl -> EnumQuotas(This,path,options,quotas) )
#define IFsrmQuotaManager_EnumAutoApplyQuotas(This,path,options,quotas)( (This)->lpVtbl -> EnumAutoApplyQuotas(This,path,options,quotas) )
#define IFsrmQuotaManager_EnumEffectiveQuotas(This,path,options,quotas)( (This)->lpVtbl -> EnumEffectiveQuotas(This,path,options,quotas) )
#define IFsrmQuotaManager_Scan(This,strPath)( (This)->lpVtbl -> Scan(This,strPath) )
#define IFsrmQuotaManager_CreateQuotaCollection(This,collection)( (This)->lpVtbl -> CreateQuotaCollection(This,collection) )
#endif
#endif
#ifndef __IFsrmQuotaManagerEx_INTERFACE_DEFINED__
#define __IFsrmQuotaManagerEx_INTERFACE_DEFINED__
extern const IID IID_IFsrmQuotaManagerEx;
typedef struct IFsrmQuotaManagerExVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFsrmQuotaManagerEx * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFsrmQuotaManagerEx * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFsrmQuotaManagerEx * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFsrmQuotaManagerEx * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFsrmQuotaManagerEx * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFsrmQuotaManagerEx * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFsrmQuotaManagerEx * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_ActionVariables) (IFsrmQuotaManagerEx * This, SAFEARRAY * *variables);
	HRESULT(STDMETHODCALLTYPE * get_ActionVariableDescriptions) (IFsrmQuotaManagerEx * This, SAFEARRAY * *descriptions);
	HRESULT(STDMETHODCALLTYPE * CreateQuota) (IFsrmQuotaManagerEx * This, BSTR path, IFsrmQuota ** quota);
	HRESULT(STDMETHODCALLTYPE * CreateAutoApplyQuota) (IFsrmQuotaManagerEx * This, BSTR quotaTemplateName, BSTR path, IFsrmAutoApplyQuota ** quota);
	HRESULT(STDMETHODCALLTYPE * GetQuota) (IFsrmQuotaManagerEx * This, BSTR path, IFsrmQuota ** quota);
	HRESULT(STDMETHODCALLTYPE * GetAutoApplyQuota) (IFsrmQuotaManagerEx * This, BSTR path, IFsrmAutoApplyQuota ** quota);
	HRESULT(STDMETHODCALLTYPE * GetRestrictiveQuota) (IFsrmQuotaManagerEx * This, BSTR path, IFsrmQuota ** quota);
	HRESULT(STDMETHODCALLTYPE * EnumQuotas) (IFsrmQuotaManagerEx * This, BSTR path, FsrmEnumOptions options, IFsrmCommittableCollection ** quotas);
	HRESULT(STDMETHODCALLTYPE * EnumAutoApplyQuotas) (IFsrmQuotaManagerEx * This, BSTR path, FsrmEnumOptions options, IFsrmCommittableCollection ** quotas);
	HRESULT(STDMETHODCALLTYPE * EnumEffectiveQuotas) (IFsrmQuotaManagerEx * This, BSTR path, FsrmEnumOptions options, IFsrmCommittableCollection ** quotas);
	HRESULT(STDMETHODCALLTYPE * Scan) (IFsrmQuotaManagerEx * This, BSTR strPath);
	HRESULT(STDMETHODCALLTYPE * CreateQuotaCollection) (IFsrmQuotaManagerEx * This, IFsrmCommittableCollection ** collection);
	HRESULT(STDMETHODCALLTYPE * IsAffectedByQuota) (IFsrmQuotaManagerEx * This, BSTR path, FsrmEnumOptions options, VARIANT_BOOL * affected);
	END_INTERFACE
}  IFsrmQuotaManagerExVtbl;
interface IFsrmQuotaManagerEx
{
	CONST_VTBL struct IFsrmQuotaManagerExVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsrmQuotaManagerEx_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsrmQuotaManagerEx_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsrmQuotaManagerEx_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsrmQuotaManagerEx_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsrmQuotaManagerEx_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsrmQuotaManagerEx_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsrmQuotaManagerEx_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsrmQuotaManagerEx_get_ActionVariables(This,variables)( (This)->lpVtbl -> get_ActionVariables(This,variables) )
#define IFsrmQuotaManagerEx_get_ActionVariableDescriptions(This,descriptions)( (This)->lpVtbl -> get_ActionVariableDescriptions(This,descriptions) )
#define IFsrmQuotaManagerEx_CreateQuota(This,path,quota)( (This)->lpVtbl -> CreateQuota(This,path,quota) )
#define IFsrmQuotaManagerEx_CreateAutoApplyQuota(This,quotaTemplateName,path,quota)( (This)->lpVtbl -> CreateAutoApplyQuota(This,quotaTemplateName,path,quota) )
#define IFsrmQuotaManagerEx_GetQuota(This,path,quota)( (This)->lpVtbl -> GetQuota(This,path,quota) )
#define IFsrmQuotaManagerEx_GetAutoApplyQuota(This,path,quota)( (This)->lpVtbl -> GetAutoApplyQuota(This,path,quota) )
#define IFsrmQuotaManagerEx_GetRestrictiveQuota(This,path,quota)( (This)->lpVtbl -> GetRestrictiveQuota(This,path,quota) )
#define IFsrmQuotaManagerEx_EnumQuotas(This,path,options,quotas)( (This)->lpVtbl -> EnumQuotas(This,path,options,quotas) )
#define IFsrmQuotaManagerEx_EnumAutoApplyQuotas(This,path,options,quotas)( (This)->lpVtbl -> EnumAutoApplyQuotas(This,path,options,quotas) )
#define IFsrmQuotaManagerEx_EnumEffectiveQuotas(This,path,options,quotas)( (This)->lpVtbl -> EnumEffectiveQuotas(This,path,options,quotas) )
#define IFsrmQuotaManagerEx_Scan(This,strPath)( (This)->lpVtbl -> Scan(This,strPath) )
#define IFsrmQuotaManagerEx_CreateQuotaCollection(This,collection)( (This)->lpVtbl -> CreateQuotaCollection(This,collection) )
#define IFsrmQuotaManagerEx_IsAffectedByQuota(This,path,options,affected)( (This)->lpVtbl -> IsAffectedByQuota(This,path,options,affected) )
#endif
#endif
#ifndef __IFsrmQuotaTemplate_INTERFACE_DEFINED__
#define __IFsrmQuotaTemplate_INTERFACE_DEFINED__
extern const IID IID_IFsrmQuotaTemplate;
typedef struct IFsrmQuotaTemplateVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFsrmQuotaTemplate * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFsrmQuotaTemplate * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFsrmQuotaTemplate * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFsrmQuotaTemplate * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFsrmQuotaTemplate * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFsrmQuotaTemplate * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFsrmQuotaTemplate * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IFsrmQuotaTemplate * This, FSRM_OBJECT_ID * id);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IFsrmQuotaTemplate * This, BSTR * description);
	HRESULT(STDMETHODCALLTYPE * put_Description) (IFsrmQuotaTemplate * This, BSTR description);
	HRESULT(STDMETHODCALLTYPE * Delete) (IFsrmQuotaTemplate * This);
	HRESULT(STDMETHODCALLTYPE * Commit) (IFsrmQuotaTemplate * This);
	HRESULT(STDMETHODCALLTYPE * get_QuotaLimit) (IFsrmQuotaTemplate * This, VARIANT * quotaLimit);
	HRESULT(STDMETHODCALLTYPE * put_QuotaLimit) (IFsrmQuotaTemplate * This, VARIANT quotaLimit);
	HRESULT(STDMETHODCALLTYPE * get_QuotaFlags) (IFsrmQuotaTemplate * This, long *quotaFlags);
	HRESULT(STDMETHODCALLTYPE * put_QuotaFlags) (IFsrmQuotaTemplate * This, long quotaFlags);
	HRESULT(STDMETHODCALLTYPE * get_Thresholds) (IFsrmQuotaTemplate * This, SAFEARRAY * *thresholds);
	HRESULT(STDMETHODCALLTYPE * AddThreshold) (IFsrmQuotaTemplate * This, FSRM_QUOTA_THRESHOLD threshold);
	HRESULT(STDMETHODCALLTYPE * DeleteThreshold) (IFsrmQuotaTemplate * This, FSRM_QUOTA_THRESHOLD threshold);
	HRESULT(STDMETHODCALLTYPE * ModifyThreshold) (IFsrmQuotaTemplate * This, FSRM_QUOTA_THRESHOLD threshold, FSRM_QUOTA_THRESHOLD newThreshold);
	HRESULT(STDMETHODCALLTYPE * CreateThresholdAction) (IFsrmQuotaTemplate * This, FSRM_QUOTA_THRESHOLD threshold, FsrmActionType actionType, IFsrmAction ** action);
	HRESULT(STDMETHODCALLTYPE * EnumThresholdActions) (IFsrmQuotaTemplate * This, FSRM_QUOTA_THRESHOLD threshold, IFsrmCollection ** actions);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IFsrmQuotaTemplate * This, BSTR * name);
	HRESULT(STDMETHODCALLTYPE * put_Name) (IFsrmQuotaTemplate * This, BSTR name);
	HRESULT(STDMETHODCALLTYPE * CopyTemplate) (IFsrmQuotaTemplate * This, BSTR quotaTemplateName);
	HRESULT(STDMETHODCALLTYPE * CommitAndUpdateDerived) (IFsrmQuotaTemplate * This, FsrmCommitOptions commitOptions, FsrmTemplateApplyOptions applyOptions, IFsrmDerivedObjectsResult ** derivedObjectsResult);
	END_INTERFACE
}  IFsrmQuotaTemplateVtbl;
interface IFsrmQuotaTemplate
{
	CONST_VTBL struct IFsrmQuotaTemplateVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsrmQuotaTemplate_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsrmQuotaTemplate_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsrmQuotaTemplate_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsrmQuotaTemplate_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsrmQuotaTemplate_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsrmQuotaTemplate_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsrmQuotaTemplate_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsrmQuotaTemplate_get_Id(This,id)( (This)->lpVtbl -> get_Id(This,id) )
#define IFsrmQuotaTemplate_get_Description(This,description)( (This)->lpVtbl -> get_Description(This,description) )
#define IFsrmQuotaTemplate_put_Description(This,description)( (This)->lpVtbl -> put_Description(This,description) )
#define IFsrmQuotaTemplate_Delete(This)( (This)->lpVtbl -> Delete(This) )
#define IFsrmQuotaTemplate_Commit(This)( (This)->lpVtbl -> Commit(This) )
#define IFsrmQuotaTemplate_get_QuotaLimit(This,quotaLimit)( (This)->lpVtbl -> get_QuotaLimit(This,quotaLimit) )
#define IFsrmQuotaTemplate_put_QuotaLimit(This,quotaLimit)( (This)->lpVtbl -> put_QuotaLimit(This,quotaLimit) )
#define IFsrmQuotaTemplate_get_QuotaFlags(This,quotaFlags)( (This)->lpVtbl -> get_QuotaFlags(This,quotaFlags) )
#define IFsrmQuotaTemplate_put_QuotaFlags(This,quotaFlags)( (This)->lpVtbl -> put_QuotaFlags(This,quotaFlags) )
#define IFsrmQuotaTemplate_get_Thresholds(This,thresholds)( (This)->lpVtbl -> get_Thresholds(This,thresholds) )
#define IFsrmQuotaTemplate_AddThreshold(This,threshold)( (This)->lpVtbl -> AddThreshold(This,threshold) )
#define IFsrmQuotaTemplate_DeleteThreshold(This,threshold)( (This)->lpVtbl -> DeleteThreshold(This,threshold) )
#define IFsrmQuotaTemplate_ModifyThreshold(This,threshold,newThreshold)( (This)->lpVtbl -> ModifyThreshold(This,threshold,newThreshold) )
#define IFsrmQuotaTemplate_CreateThresholdAction(This,threshold,actionType,action)( (This)->lpVtbl -> CreateThresholdAction(This,threshold,actionType,action) )
#define IFsrmQuotaTemplate_EnumThresholdActions(This,threshold,actions)( (This)->lpVtbl -> EnumThresholdActions(This,threshold,actions) )
#define IFsrmQuotaTemplate_get_Name(This,name)( (This)->lpVtbl -> get_Name(This,name) )
#define IFsrmQuotaTemplate_put_Name(This,name)( (This)->lpVtbl -> put_Name(This,name) )
#define IFsrmQuotaTemplate_CopyTemplate(This,quotaTemplateName)( (This)->lpVtbl -> CopyTemplate(This,quotaTemplateName) )
#define IFsrmQuotaTemplate_CommitAndUpdateDerived(This,commitOptions,applyOptions,derivedObjectsResult)( (This)->lpVtbl -> CommitAndUpdateDerived(This,commitOptions,applyOptions,derivedObjectsResult) )
#endif
#endif
#ifndef __IFsrmQuotaTemplateImported_INTERFACE_DEFINED__
#define __IFsrmQuotaTemplateImported_INTERFACE_DEFINED__
extern const IID IID_IFsrmQuotaTemplateImported;
typedef struct IFsrmQuotaTemplateImportedVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFsrmQuotaTemplateImported * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFsrmQuotaTemplateImported * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFsrmQuotaTemplateImported * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFsrmQuotaTemplateImported * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFsrmQuotaTemplateImported * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFsrmQuotaTemplateImported * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFsrmQuotaTemplateImported * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IFsrmQuotaTemplateImported * This, FSRM_OBJECT_ID * id);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IFsrmQuotaTemplateImported * This, BSTR * description);
	HRESULT(STDMETHODCALLTYPE * put_Description) (IFsrmQuotaTemplateImported * This, BSTR description);
	HRESULT(STDMETHODCALLTYPE * Delete) (IFsrmQuotaTemplateImported * This);
	HRESULT(STDMETHODCALLTYPE * Commit) (IFsrmQuotaTemplateImported * This);
	HRESULT(STDMETHODCALLTYPE * get_QuotaLimit) (IFsrmQuotaTemplateImported * This, VARIANT * quotaLimit);
	HRESULT(STDMETHODCALLTYPE * put_QuotaLimit) (IFsrmQuotaTemplateImported * This, VARIANT quotaLimit);
	HRESULT(STDMETHODCALLTYPE * get_QuotaFlags) (IFsrmQuotaTemplateImported * This, long *quotaFlags);
	HRESULT(STDMETHODCALLTYPE * put_QuotaFlags) (IFsrmQuotaTemplateImported * This, long quotaFlags);
	HRESULT(STDMETHODCALLTYPE * get_Thresholds) (IFsrmQuotaTemplateImported * This, SAFEARRAY * *thresholds);
	HRESULT(STDMETHODCALLTYPE * AddThreshold) (IFsrmQuotaTemplateImported * This, FSRM_QUOTA_THRESHOLD threshold);
	HRESULT(STDMETHODCALLTYPE * DeleteThreshold) (IFsrmQuotaTemplateImported * This, FSRM_QUOTA_THRESHOLD threshold);
	HRESULT(STDMETHODCALLTYPE * ModifyThreshold) (IFsrmQuotaTemplateImported * This, FSRM_QUOTA_THRESHOLD threshold, FSRM_QUOTA_THRESHOLD newThreshold);
	HRESULT(STDMETHODCALLTYPE * CreateThresholdAction) (IFsrmQuotaTemplateImported * This, FSRM_QUOTA_THRESHOLD threshold, FsrmActionType actionType, IFsrmAction ** action);
	HRESULT(STDMETHODCALLTYPE * EnumThresholdActions) (IFsrmQuotaTemplateImported * This, FSRM_QUOTA_THRESHOLD threshold, IFsrmCollection ** actions);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IFsrmQuotaTemplateImported * This, BSTR * name);
	HRESULT(STDMETHODCALLTYPE * put_Name) (IFsrmQuotaTemplateImported * This, BSTR name);
	HRESULT(STDMETHODCALLTYPE * CopyTemplate) (IFsrmQuotaTemplateImported * This, BSTR quotaTemplateName);
	HRESULT(STDMETHODCALLTYPE * CommitAndUpdateDerived) (IFsrmQuotaTemplateImported * This, FsrmCommitOptions commitOptions, FsrmTemplateApplyOptions applyOptions, IFsrmDerivedObjectsResult ** derivedObjectsResult);
	HRESULT(STDMETHODCALLTYPE * get_OverwriteOnCommit) (IFsrmQuotaTemplateImported * This, VARIANT_BOOL * overwrite);
	HRESULT(STDMETHODCALLTYPE * put_OverwriteOnCommit) (IFsrmQuotaTemplateImported * This, VARIANT_BOOL overwrite);
	END_INTERFACE
}  IFsrmQuotaTemplateImportedVtbl;
interface IFsrmQuotaTemplateImported
{
	CONST_VTBL struct IFsrmQuotaTemplateImportedVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsrmQuotaTemplateImported_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsrmQuotaTemplateImported_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsrmQuotaTemplateImported_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsrmQuotaTemplateImported_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsrmQuotaTemplateImported_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsrmQuotaTemplateImported_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsrmQuotaTemplateImported_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsrmQuotaTemplateImported_get_Id(This,id)( (This)->lpVtbl -> get_Id(This,id) )
#define IFsrmQuotaTemplateImported_get_Description(This,description)( (This)->lpVtbl -> get_Description(This,description) )
#define IFsrmQuotaTemplateImported_put_Description(This,description)( (This)->lpVtbl -> put_Description(This,description) )
#define IFsrmQuotaTemplateImported_Delete(This)( (This)->lpVtbl -> Delete(This) )
#define IFsrmQuotaTemplateImported_Commit(This)( (This)->lpVtbl -> Commit(This) )
#define IFsrmQuotaTemplateImported_get_QuotaLimit(This,quotaLimit)( (This)->lpVtbl -> get_QuotaLimit(This,quotaLimit) )
#define IFsrmQuotaTemplateImported_put_QuotaLimit(This,quotaLimit)( (This)->lpVtbl -> put_QuotaLimit(This,quotaLimit) )
#define IFsrmQuotaTemplateImported_get_QuotaFlags(This,quotaFlags)( (This)->lpVtbl -> get_QuotaFlags(This,quotaFlags) )
#define IFsrmQuotaTemplateImported_put_QuotaFlags(This,quotaFlags)( (This)->lpVtbl -> put_QuotaFlags(This,quotaFlags) )
#define IFsrmQuotaTemplateImported_get_Thresholds(This,thresholds)( (This)->lpVtbl -> get_Thresholds(This,thresholds) )
#define IFsrmQuotaTemplateImported_AddThreshold(This,threshold)( (This)->lpVtbl -> AddThreshold(This,threshold) )
#define IFsrmQuotaTemplateImported_DeleteThreshold(This,threshold)( (This)->lpVtbl -> DeleteThreshold(This,threshold) )
#define IFsrmQuotaTemplateImported_ModifyThreshold(This,threshold,newThreshold)( (This)->lpVtbl -> ModifyThreshold(This,threshold,newThreshold) )
#define IFsrmQuotaTemplateImported_CreateThresholdAction(This,threshold,actionType,action)( (This)->lpVtbl -> CreateThresholdAction(This,threshold,actionType,action) )
#define IFsrmQuotaTemplateImported_EnumThresholdActions(This,threshold,actions)( (This)->lpVtbl -> EnumThresholdActions(This,threshold,actions) )
#define IFsrmQuotaTemplateImported_get_Name(This,name)( (This)->lpVtbl -> get_Name(This,name) )
#define IFsrmQuotaTemplateImported_put_Name(This,name)( (This)->lpVtbl -> put_Name(This,name) )
#define IFsrmQuotaTemplateImported_CopyTemplate(This,quotaTemplateName)( (This)->lpVtbl -> CopyTemplate(This,quotaTemplateName) )
#define IFsrmQuotaTemplateImported_CommitAndUpdateDerived(This,commitOptions,applyOptions,derivedObjectsResult)( (This)->lpVtbl -> CommitAndUpdateDerived(This,commitOptions,applyOptions,derivedObjectsResult) )
#define IFsrmQuotaTemplateImported_get_OverwriteOnCommit(This,overwrite)( (This)->lpVtbl -> get_OverwriteOnCommit(This,overwrite) )
#define IFsrmQuotaTemplateImported_put_OverwriteOnCommit(This,overwrite)( (This)->lpVtbl -> put_OverwriteOnCommit(This,overwrite) )
#endif
#endif
#ifndef __IFsrmQuotaTemplateManager_INTERFACE_DEFINED__
#define __IFsrmQuotaTemplateManager_INTERFACE_DEFINED__
extern const IID IID_IFsrmQuotaTemplateManager;
typedef struct IFsrmQuotaTemplateManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFsrmQuotaTemplateManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFsrmQuotaTemplateManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFsrmQuotaTemplateManager * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFsrmQuotaTemplateManager * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFsrmQuotaTemplateManager * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFsrmQuotaTemplateManager * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFsrmQuotaTemplateManager * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * CreateTemplate) (IFsrmQuotaTemplateManager * This, IFsrmQuotaTemplate ** quotaTemplate);
	HRESULT(STDMETHODCALLTYPE * GetTemplate) (IFsrmQuotaTemplateManager * This, BSTR name, IFsrmQuotaTemplate ** quotaTemplate);
	HRESULT(STDMETHODCALLTYPE * EnumTemplates) (IFsrmQuotaTemplateManager * This, FsrmEnumOptions options, IFsrmCommittableCollection ** quotaTemplates);
	HRESULT(STDMETHODCALLTYPE * ExportTemplates) (IFsrmQuotaTemplateManager * This, VARIANT * quotaTemplateNamesArray, BSTR * serializedQuotaTemplates);
	HRESULT(STDMETHODCALLTYPE * ImportTemplates) (IFsrmQuotaTemplateManager * This, BSTR serializedQuotaTemplates, VARIANT * quotaTemplateNamesArray, IFsrmCommittableCollection ** quotaTemplates);
	END_INTERFACE
}  IFsrmQuotaTemplateManagerVtbl;
interface IFsrmQuotaTemplateManager
{
	CONST_VTBL struct IFsrmQuotaTemplateManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsrmQuotaTemplateManager_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsrmQuotaTemplateManager_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsrmQuotaTemplateManager_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsrmQuotaTemplateManager_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsrmQuotaTemplateManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsrmQuotaTemplateManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsrmQuotaTemplateManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsrmQuotaTemplateManager_CreateTemplate(This,quotaTemplate)( (This)->lpVtbl -> CreateTemplate(This,quotaTemplate) )
#define IFsrmQuotaTemplateManager_GetTemplate(This,name,quotaTemplate)( (This)->lpVtbl -> GetTemplate(This,name,quotaTemplate) )
#define IFsrmQuotaTemplateManager_EnumTemplates(This,options,quotaTemplates)( (This)->lpVtbl -> EnumTemplates(This,options,quotaTemplates) )
#define IFsrmQuotaTemplateManager_ExportTemplates(This,quotaTemplateNamesArray,serializedQuotaTemplates)( (This)->lpVtbl -> ExportTemplates(This,quotaTemplateNamesArray,serializedQuotaTemplates) )
#define IFsrmQuotaTemplateManager_ImportTemplates(This,serializedQuotaTemplates,quotaTemplateNamesArray,quotaTemplates)( (This)->lpVtbl -> ImportTemplates(This,serializedQuotaTemplates,quotaTemplateNamesArray,quotaTemplates) )
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
