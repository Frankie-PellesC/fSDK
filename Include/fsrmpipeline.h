/*+@@file@@----------------------------------------------------------------*//*!
 \file		fsrmpipeline.h
 \par Description
            Extension and update of headers for PellesC compiler suite.
 \par Project:
            PellesC Headers extension
 \date		Created  on Sun Jul 10 18:38:42 2016
 \date		Modified on Sun Jul 10 18:38:42 2016
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
#ifndef __fsrmpipeline_h__
#define __fsrmpipeline_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IFsrmPropertyDefinition_FWD_DEFINED__
#define __IFsrmPropertyDefinition_FWD_DEFINED__
typedef interface IFsrmPropertyDefinition IFsrmPropertyDefinition;
#endif
#ifndef __IFsrmProperty_FWD_DEFINED__
#define __IFsrmProperty_FWD_DEFINED__
typedef interface IFsrmProperty IFsrmProperty;
#endif
#ifndef __IFsrmRule_FWD_DEFINED__
#define __IFsrmRule_FWD_DEFINED__
typedef interface IFsrmRule IFsrmRule;
#endif
#ifndef __IFsrmClassificationRule_FWD_DEFINED__
#define __IFsrmClassificationRule_FWD_DEFINED__
typedef interface IFsrmClassificationRule IFsrmClassificationRule;
#endif
#ifndef __IFsrmPipelineModuleDefinition_FWD_DEFINED__
#define __IFsrmPipelineModuleDefinition_FWD_DEFINED__
typedef interface IFsrmPipelineModuleDefinition IFsrmPipelineModuleDefinition;
#endif
#ifndef __IFsrmClassifierModuleDefinition_FWD_DEFINED__
#define __IFsrmClassifierModuleDefinition_FWD_DEFINED__
typedef interface IFsrmClassifierModuleDefinition IFsrmClassifierModuleDefinition;
#endif
#ifndef __IFsrmStorageModuleDefinition_FWD_DEFINED__
#define __IFsrmStorageModuleDefinition_FWD_DEFINED__
typedef interface IFsrmStorageModuleDefinition IFsrmStorageModuleDefinition;
#endif
#ifndef __IFsrmClassificationManager_FWD_DEFINED__
#define __IFsrmClassificationManager_FWD_DEFINED__
typedef interface IFsrmClassificationManager IFsrmClassificationManager;
#endif
#ifndef __IFsrmPropertyBag_FWD_DEFINED__
#define __IFsrmPropertyBag_FWD_DEFINED__
typedef interface IFsrmPropertyBag IFsrmPropertyBag;
#endif
#ifndef __IFsrmPipelineModuleImplementation_FWD_DEFINED__
#define __IFsrmPipelineModuleImplementation_FWD_DEFINED__
typedef interface IFsrmPipelineModuleImplementation IFsrmPipelineModuleImplementation;
#endif
#ifndef __IFsrmClassifierModuleImplementation_FWD_DEFINED__
#define __IFsrmClassifierModuleImplementation_FWD_DEFINED__
typedef interface IFsrmClassifierModuleImplementation IFsrmClassifierModuleImplementation;
#endif
#ifndef __IFsrmStorageModuleImplementation_FWD_DEFINED__
#define __IFsrmStorageModuleImplementation_FWD_DEFINED__
typedef interface IFsrmStorageModuleImplementation IFsrmStorageModuleImplementation;
#endif
#ifndef __IFsrmPipelineModuleConnector_FWD_DEFINED__
#define __IFsrmPipelineModuleConnector_FWD_DEFINED__
typedef interface IFsrmPipelineModuleConnector IFsrmPipelineModuleConnector;
#endif
#include "oaidl.h"
#include "fsrm.h"
#define	FSRM_DISPID_PROPERTY_DEFINITION	( ( FSRM_DISPID_FEATURE_CLASSIFICATION | 0x100000 )  )
#define	FSRM_DISPID_PROPERTY	( ( FSRM_DISPID_FEATURE_CLASSIFICATION | 0x200000 )  )
#define	FSRM_DISPID_RULE	( ( FSRM_DISPID_FEATURE_CLASSIFICATION | 0x300000 )  )
#define	FSRM_DISPID_CLASSIFICATION_RULE	( ( FSRM_DISPID_RULE | 0x10000 )  )
#define	FSRM_DISPID_EXPIRATION_RULE	( ( FSRM_DISPID_RULE | 0x20000 )  )
#define	FSRM_DISPID_PIPELINE_MODULE_DEFINITION	( ( FSRM_DISPID_FEATURE_CLASSIFICATION | 0x400000 )  )
#define	FSRM_DISPID_CLASSIFIER_MODULE_DEFINITION	( ( FSRM_DISPID_PIPELINE_MODULE_DEFINITION | 0x10000 )  )
#define	FSRM_DISPID_STORAGE_MODULE_DEFINITION	( ( FSRM_DISPID_PIPELINE_MODULE_DEFINITION | 0x20000 )  )
#define	FSRM_DISPID_CLASSIFICATION_MANAGER	( ( FSRM_DISPID_FEATURE_CLASSIFICATION | 0x500000 )  )
#define	FSRM_DISPID_PROPERTY_BAG	( ( FSRM_DISPID_FEATURE_PIPELINE | 0x100000 )  )
#define	FSRM_DISPID_PIPELINE_MODULE_IMPLEMENTATION	( ( FSRM_DISPID_FEATURE_PIPELINE | 0x200000 )  )
#define	FSRM_DISPID_CLASSIFIER_MODULE_IMPLEMENTATION	( ( FSRM_DISPID_PIPELINE_MODULE_IMPLEMENTATION | 0x10000 )  )
#define	FSRM_DISPID_STORAGE_MODULE_IMPLEMENTATION	( ( FSRM_DISPID_PIPELINE_MODULE_IMPLEMENTATION | 0x20000 )  )
#define	FSRM_DISPID_PIPELINE_MODULE_CONNECTOR	( ( FSRM_DISPID_FEATURE_PIPELINE | 0x300000 )  )
#define	FsrmMaxNumberPropertyDefinitions	( 100 )
extern RPC_IF_HANDLE __MIDL_itf_fsrmpipeline_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_fsrmpipeline_0000_0000_v0_0_s_ifspec;
#ifndef __IFsrmPropertyDefinition_INTERFACE_DEFINED__
#define __IFsrmPropertyDefinition_INTERFACE_DEFINED__
extern const IID IID_IFsrmPropertyDefinition;
typedef struct IFsrmPropertyDefinitionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFsrmPropertyDefinition * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFsrmPropertyDefinition * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFsrmPropertyDefinition * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFsrmPropertyDefinition * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFsrmPropertyDefinition * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFsrmPropertyDefinition * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFsrmPropertyDefinition * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IFsrmPropertyDefinition * This, FSRM_OBJECT_ID * id);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IFsrmPropertyDefinition * This, BSTR * description);
	HRESULT(STDMETHODCALLTYPE * put_Description) (IFsrmPropertyDefinition * This, BSTR description);
	HRESULT(STDMETHODCALLTYPE * Delete) (IFsrmPropertyDefinition * This);
	HRESULT(STDMETHODCALLTYPE * Commit) (IFsrmPropertyDefinition * This);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IFsrmPropertyDefinition * This, BSTR * name);
	HRESULT(STDMETHODCALLTYPE * put_Name) (IFsrmPropertyDefinition * This, BSTR name);
	HRESULT(STDMETHODCALLTYPE * get_Type) (IFsrmPropertyDefinition * This, FsrmPropertyDefinitionType * type);
	HRESULT(STDMETHODCALLTYPE * put_Type) (IFsrmPropertyDefinition * This, FsrmPropertyDefinitionType type);
	HRESULT(STDMETHODCALLTYPE * get_PossibleValues) (IFsrmPropertyDefinition * This, SAFEARRAY * *possibleValues);
	HRESULT(STDMETHODCALLTYPE * put_PossibleValues) (IFsrmPropertyDefinition * This, SAFEARRAY * possibleValues);
	HRESULT(STDMETHODCALLTYPE * get_ValueDescriptions) (IFsrmPropertyDefinition * This, SAFEARRAY * *valueDescriptions);
	HRESULT(STDMETHODCALLTYPE * put_ValueDescriptions) (IFsrmPropertyDefinition * This, SAFEARRAY * valueDescriptions);
	HRESULT(STDMETHODCALLTYPE * get_Parameters) (IFsrmPropertyDefinition * This, SAFEARRAY * *parameters);
	HRESULT(STDMETHODCALLTYPE * put_Parameters) (IFsrmPropertyDefinition * This, SAFEARRAY * parameters);
	END_INTERFACE
}  IFsrmPropertyDefinitionVtbl;
interface IFsrmPropertyDefinition
{
	CONST_VTBL struct IFsrmPropertyDefinitionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsrmPropertyDefinition_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsrmPropertyDefinition_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsrmPropertyDefinition_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsrmPropertyDefinition_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsrmPropertyDefinition_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsrmPropertyDefinition_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsrmPropertyDefinition_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsrmPropertyDefinition_get_Id(This,id)( (This)->lpVtbl -> get_Id(This,id) )
#define IFsrmPropertyDefinition_get_Description(This,description)( (This)->lpVtbl -> get_Description(This,description) )
#define IFsrmPropertyDefinition_put_Description(This,description)( (This)->lpVtbl -> put_Description(This,description) )
#define IFsrmPropertyDefinition_Delete(This)( (This)->lpVtbl -> Delete(This) )
#define IFsrmPropertyDefinition_Commit(This)( (This)->lpVtbl -> Commit(This) )
#define IFsrmPropertyDefinition_get_Name(This,name)( (This)->lpVtbl -> get_Name(This,name) )
#define IFsrmPropertyDefinition_put_Name(This,name)( (This)->lpVtbl -> put_Name(This,name) )
#define IFsrmPropertyDefinition_get_Type(This,type)( (This)->lpVtbl -> get_Type(This,type) )
#define IFsrmPropertyDefinition_put_Type(This,type)( (This)->lpVtbl -> put_Type(This,type) )
#define IFsrmPropertyDefinition_get_PossibleValues(This,possibleValues)( (This)->lpVtbl -> get_PossibleValues(This,possibleValues) )
#define IFsrmPropertyDefinition_put_PossibleValues(This,possibleValues)( (This)->lpVtbl -> put_PossibleValues(This,possibleValues) )
#define IFsrmPropertyDefinition_get_ValueDescriptions(This,valueDescriptions)( (This)->lpVtbl -> get_ValueDescriptions(This,valueDescriptions) )
#define IFsrmPropertyDefinition_put_ValueDescriptions(This,valueDescriptions)( (This)->lpVtbl -> put_ValueDescriptions(This,valueDescriptions) )
#define IFsrmPropertyDefinition_get_Parameters(This,parameters)( (This)->lpVtbl -> get_Parameters(This,parameters) )
#define IFsrmPropertyDefinition_put_Parameters(This,parameters)( (This)->lpVtbl -> put_Parameters(This,parameters) )
#endif
#endif
#ifndef __IFsrmProperty_INTERFACE_DEFINED__
#define __IFsrmProperty_INTERFACE_DEFINED__
extern const IID IID_IFsrmProperty;
typedef struct IFsrmPropertyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFsrmProperty * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFsrmProperty * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFsrmProperty * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFsrmProperty * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFsrmProperty * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFsrmProperty * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFsrmProperty * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IFsrmProperty * This, BSTR * name);
	HRESULT(STDMETHODCALLTYPE * get_Value) (IFsrmProperty * This, BSTR * value);
	HRESULT(STDMETHODCALLTYPE * get_Sources) (IFsrmProperty * This, SAFEARRAY * *sources);
	HRESULT(STDMETHODCALLTYPE * get_PropertyFlags) (IFsrmProperty * This, long *flags);
	END_INTERFACE
}  IFsrmPropertyVtbl;
interface IFsrmProperty
{
	CONST_VTBL struct IFsrmPropertyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsrmProperty_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsrmProperty_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsrmProperty_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsrmProperty_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsrmProperty_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsrmProperty_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsrmProperty_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsrmProperty_get_Name(This,name)( (This)->lpVtbl -> get_Name(This,name) )
#define IFsrmProperty_get_Value(This,value)( (This)->lpVtbl -> get_Value(This,value) )
#define IFsrmProperty_get_Sources(This,sources)( (This)->lpVtbl -> get_Sources(This,sources) )
#define IFsrmProperty_get_PropertyFlags(This,flags)( (This)->lpVtbl -> get_PropertyFlags(This,flags) )
#endif
#endif
#ifndef __IFsrmRule_INTERFACE_DEFINED__
#define __IFsrmRule_INTERFACE_DEFINED__
extern const IID IID_IFsrmRule;
typedef struct IFsrmRuleVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFsrmRule * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFsrmRule * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFsrmRule * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFsrmRule * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFsrmRule * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFsrmRule * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFsrmRule * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IFsrmRule * This, FSRM_OBJECT_ID * id);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IFsrmRule * This, BSTR * description);
	HRESULT(STDMETHODCALLTYPE * put_Description) (IFsrmRule * This, BSTR description);
	HRESULT(STDMETHODCALLTYPE * Delete) (IFsrmRule * This);
	HRESULT(STDMETHODCALLTYPE * Commit) (IFsrmRule * This);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IFsrmRule * This, BSTR * name);
	HRESULT(STDMETHODCALLTYPE * put_Name) (IFsrmRule * This, BSTR name);
	HRESULT(STDMETHODCALLTYPE * get_RuleType) (IFsrmRule * This, FsrmRuleType * ruleType);
	HRESULT(STDMETHODCALLTYPE * get_ModuleDefinitionName) (IFsrmRule * This, BSTR * moduleDefinitionName);
	HRESULT(STDMETHODCALLTYPE * put_ModuleDefinitionName) (IFsrmRule * This, BSTR moduleDefinitionName);
	HRESULT(STDMETHODCALLTYPE * get_NamespaceRoots) (IFsrmRule * This, SAFEARRAY * *namespaceRoots);
	HRESULT(STDMETHODCALLTYPE * put_NamespaceRoots) (IFsrmRule * This, SAFEARRAY * namespaceRoots);
	HRESULT(STDMETHODCALLTYPE * get_RuleFlags) (IFsrmRule * This, long *ruleFlags);
	HRESULT(STDMETHODCALLTYPE * put_RuleFlags) (IFsrmRule * This, long ruleFlags);
	HRESULT(STDMETHODCALLTYPE * get_Parameters) (IFsrmRule * This, SAFEARRAY * *parameters);
	HRESULT(STDMETHODCALLTYPE * put_Parameters) (IFsrmRule * This, SAFEARRAY * parameters);
	HRESULT(STDMETHODCALLTYPE * get_LastModified) (IFsrmRule * This, VARIANT * lastModified);
	END_INTERFACE
}  IFsrmRuleVtbl;
interface IFsrmRule
{
	CONST_VTBL struct IFsrmRuleVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsrmRule_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsrmRule_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsrmRule_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsrmRule_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsrmRule_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsrmRule_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsrmRule_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsrmRule_get_Id(This,id)( (This)->lpVtbl -> get_Id(This,id) )
#define IFsrmRule_get_Description(This,description)( (This)->lpVtbl -> get_Description(This,description) )
#define IFsrmRule_put_Description(This,description)( (This)->lpVtbl -> put_Description(This,description) )
#define IFsrmRule_Delete(This)( (This)->lpVtbl -> Delete(This) )
#define IFsrmRule_Commit(This)( (This)->lpVtbl -> Commit(This) )
#define IFsrmRule_get_Name(This,name)( (This)->lpVtbl -> get_Name(This,name) )
#define IFsrmRule_put_Name(This,name)( (This)->lpVtbl -> put_Name(This,name) )
#define IFsrmRule_get_RuleType(This,ruleType)( (This)->lpVtbl -> get_RuleType(This,ruleType) )
#define IFsrmRule_get_ModuleDefinitionName(This,moduleDefinitionName)( (This)->lpVtbl -> get_ModuleDefinitionName(This,moduleDefinitionName) )
#define IFsrmRule_put_ModuleDefinitionName(This,moduleDefinitionName)( (This)->lpVtbl -> put_ModuleDefinitionName(This,moduleDefinitionName) )
#define IFsrmRule_get_NamespaceRoots(This,namespaceRoots)( (This)->lpVtbl -> get_NamespaceRoots(This,namespaceRoots) )
#define IFsrmRule_put_NamespaceRoots(This,namespaceRoots)( (This)->lpVtbl -> put_NamespaceRoots(This,namespaceRoots) )
#define IFsrmRule_get_RuleFlags(This,ruleFlags)( (This)->lpVtbl -> get_RuleFlags(This,ruleFlags) )
#define IFsrmRule_put_RuleFlags(This,ruleFlags)( (This)->lpVtbl -> put_RuleFlags(This,ruleFlags) )
#define IFsrmRule_get_Parameters(This,parameters)( (This)->lpVtbl -> get_Parameters(This,parameters) )
#define IFsrmRule_put_Parameters(This,parameters)( (This)->lpVtbl -> put_Parameters(This,parameters) )
#define IFsrmRule_get_LastModified(This,lastModified)( (This)->lpVtbl -> get_LastModified(This,lastModified) )
#endif
#endif
#ifndef __IFsrmClassificationRule_INTERFACE_DEFINED__
#define __IFsrmClassificationRule_INTERFACE_DEFINED__
extern const IID IID_IFsrmClassificationRule;
typedef struct IFsrmClassificationRuleVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFsrmClassificationRule * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFsrmClassificationRule * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFsrmClassificationRule * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFsrmClassificationRule * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFsrmClassificationRule * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFsrmClassificationRule * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFsrmClassificationRule * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IFsrmClassificationRule * This, FSRM_OBJECT_ID * id);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IFsrmClassificationRule * This, BSTR * description);
	HRESULT(STDMETHODCALLTYPE * put_Description) (IFsrmClassificationRule * This, BSTR description);
	HRESULT(STDMETHODCALLTYPE * Delete) (IFsrmClassificationRule * This);
	HRESULT(STDMETHODCALLTYPE * Commit) (IFsrmClassificationRule * This);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IFsrmClassificationRule * This, BSTR * name);
	HRESULT(STDMETHODCALLTYPE * put_Name) (IFsrmClassificationRule * This, BSTR name);
	HRESULT(STDMETHODCALLTYPE * get_RuleType) (IFsrmClassificationRule * This, FsrmRuleType * ruleType);
	HRESULT(STDMETHODCALLTYPE * get_ModuleDefinitionName) (IFsrmClassificationRule * This, BSTR * moduleDefinitionName);
	HRESULT(STDMETHODCALLTYPE * put_ModuleDefinitionName) (IFsrmClassificationRule * This, BSTR moduleDefinitionName);
	HRESULT(STDMETHODCALLTYPE * get_NamespaceRoots) (IFsrmClassificationRule * This, SAFEARRAY * *namespaceRoots);
	HRESULT(STDMETHODCALLTYPE * put_NamespaceRoots) (IFsrmClassificationRule * This, SAFEARRAY * namespaceRoots);
	HRESULT(STDMETHODCALLTYPE * get_RuleFlags) (IFsrmClassificationRule * This, long *ruleFlags);
	HRESULT(STDMETHODCALLTYPE * put_RuleFlags) (IFsrmClassificationRule * This, long ruleFlags);
	HRESULT(STDMETHODCALLTYPE * get_Parameters) (IFsrmClassificationRule * This, SAFEARRAY * *parameters);
	HRESULT(STDMETHODCALLTYPE * put_Parameters) (IFsrmClassificationRule * This, SAFEARRAY * parameters);
	HRESULT(STDMETHODCALLTYPE * get_LastModified) (IFsrmClassificationRule * This, VARIANT * lastModified);
	HRESULT(STDMETHODCALLTYPE * get_ExecutionOption) (IFsrmClassificationRule * This, FsrmExecutionOption * executionOption);
	HRESULT(STDMETHODCALLTYPE * put_ExecutionOption) (IFsrmClassificationRule * This, FsrmExecutionOption executionOption);
	HRESULT(STDMETHODCALLTYPE * get_PropertyAffected) (IFsrmClassificationRule * This, BSTR * property);
	HRESULT(STDMETHODCALLTYPE * put_PropertyAffected) (IFsrmClassificationRule * This, BSTR property);
	HRESULT(STDMETHODCALLTYPE * get_Value) (IFsrmClassificationRule * This, BSTR * value);
	HRESULT(STDMETHODCALLTYPE * put_Value) (IFsrmClassificationRule * This, BSTR value);
	END_INTERFACE
}  IFsrmClassificationRuleVtbl;
interface IFsrmClassificationRule
{
	CONST_VTBL struct IFsrmClassificationRuleVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsrmClassificationRule_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsrmClassificationRule_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsrmClassificationRule_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsrmClassificationRule_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsrmClassificationRule_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsrmClassificationRule_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsrmClassificationRule_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsrmClassificationRule_get_Id(This,id)( (This)->lpVtbl -> get_Id(This,id) )
#define IFsrmClassificationRule_get_Description(This,description)( (This)->lpVtbl -> get_Description(This,description) )
#define IFsrmClassificationRule_put_Description(This,description)( (This)->lpVtbl -> put_Description(This,description) )
#define IFsrmClassificationRule_Delete(This)( (This)->lpVtbl -> Delete(This) )
#define IFsrmClassificationRule_Commit(This)( (This)->lpVtbl -> Commit(This) )
#define IFsrmClassificationRule_get_Name(This,name)( (This)->lpVtbl -> get_Name(This,name) )
#define IFsrmClassificationRule_put_Name(This,name)( (This)->lpVtbl -> put_Name(This,name) )
#define IFsrmClassificationRule_get_RuleType(This,ruleType)( (This)->lpVtbl -> get_RuleType(This,ruleType) )
#define IFsrmClassificationRule_get_ModuleDefinitionName(This,moduleDefinitionName)( (This)->lpVtbl -> get_ModuleDefinitionName(This,moduleDefinitionName) )
#define IFsrmClassificationRule_put_ModuleDefinitionName(This,moduleDefinitionName)( (This)->lpVtbl -> put_ModuleDefinitionName(This,moduleDefinitionName) )
#define IFsrmClassificationRule_get_NamespaceRoots(This,namespaceRoots)( (This)->lpVtbl -> get_NamespaceRoots(This,namespaceRoots) )
#define IFsrmClassificationRule_put_NamespaceRoots(This,namespaceRoots)( (This)->lpVtbl -> put_NamespaceRoots(This,namespaceRoots) )
#define IFsrmClassificationRule_get_RuleFlags(This,ruleFlags)( (This)->lpVtbl -> get_RuleFlags(This,ruleFlags) )
#define IFsrmClassificationRule_put_RuleFlags(This,ruleFlags)( (This)->lpVtbl -> put_RuleFlags(This,ruleFlags) )
#define IFsrmClassificationRule_get_Parameters(This,parameters)( (This)->lpVtbl -> get_Parameters(This,parameters) )
#define IFsrmClassificationRule_put_Parameters(This,parameters)( (This)->lpVtbl -> put_Parameters(This,parameters) )
#define IFsrmClassificationRule_get_LastModified(This,lastModified)( (This)->lpVtbl -> get_LastModified(This,lastModified) )
#define IFsrmClassificationRule_get_ExecutionOption(This,executionOption)( (This)->lpVtbl -> get_ExecutionOption(This,executionOption) )
#define IFsrmClassificationRule_put_ExecutionOption(This,executionOption)( (This)->lpVtbl -> put_ExecutionOption(This,executionOption) )
#define IFsrmClassificationRule_get_PropertyAffected(This,property)( (This)->lpVtbl -> get_PropertyAffected(This,property) )
#define IFsrmClassificationRule_put_PropertyAffected(This,property)( (This)->lpVtbl -> put_PropertyAffected(This,property) )
#define IFsrmClassificationRule_get_Value(This,value)( (This)->lpVtbl -> get_Value(This,value) )
#define IFsrmClassificationRule_put_Value(This,value)( (This)->lpVtbl -> put_Value(This,value) )
#endif
#endif
#ifndef __IFsrmPipelineModuleDefinition_INTERFACE_DEFINED__
#define __IFsrmPipelineModuleDefinition_INTERFACE_DEFINED__
extern const IID IID_IFsrmPipelineModuleDefinition;
typedef struct IFsrmPipelineModuleDefinitionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFsrmPipelineModuleDefinition * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFsrmPipelineModuleDefinition * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFsrmPipelineModuleDefinition * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFsrmPipelineModuleDefinition * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFsrmPipelineModuleDefinition * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFsrmPipelineModuleDefinition * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFsrmPipelineModuleDefinition * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IFsrmPipelineModuleDefinition * This, FSRM_OBJECT_ID * id);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IFsrmPipelineModuleDefinition * This, BSTR * description);
	HRESULT(STDMETHODCALLTYPE * put_Description) (IFsrmPipelineModuleDefinition * This, BSTR description);
	HRESULT(STDMETHODCALLTYPE * Delete) (IFsrmPipelineModuleDefinition * This);
	HRESULT(STDMETHODCALLTYPE * Commit) (IFsrmPipelineModuleDefinition * This);
	HRESULT(STDMETHODCALLTYPE * get_ModuleClsid) (IFsrmPipelineModuleDefinition * This, BSTR * moduleClsid);
	HRESULT(STDMETHODCALLTYPE * put_ModuleClsid) (IFsrmPipelineModuleDefinition * This, BSTR moduleClsid);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IFsrmPipelineModuleDefinition * This, BSTR * name);
	HRESULT(STDMETHODCALLTYPE * put_Name) (IFsrmPipelineModuleDefinition * This, BSTR name);
	HRESULT(STDMETHODCALLTYPE * get_Company) (IFsrmPipelineModuleDefinition * This, BSTR * company);
	HRESULT(STDMETHODCALLTYPE * put_Company) (IFsrmPipelineModuleDefinition * This, BSTR company);
	HRESULT(STDMETHODCALLTYPE * get_Version) (IFsrmPipelineModuleDefinition * This, BSTR * version);
	HRESULT(STDMETHODCALLTYPE * put_Version) (IFsrmPipelineModuleDefinition * This, BSTR version);
	HRESULT(STDMETHODCALLTYPE * get_ModuleType) (IFsrmPipelineModuleDefinition * This, FsrmPipelineModuleType * moduleType);
	HRESULT(STDMETHODCALLTYPE * get_Enabled) (IFsrmPipelineModuleDefinition * This, VARIANT_BOOL * enabled);
	HRESULT(STDMETHODCALLTYPE * put_Enabled) (IFsrmPipelineModuleDefinition * This, VARIANT_BOOL enabled);
	HRESULT(STDMETHODCALLTYPE * get_NeedsFileContent) (IFsrmPipelineModuleDefinition * This, VARIANT_BOOL * needsFileContent);
	HRESULT(STDMETHODCALLTYPE * put_NeedsFileContent) (IFsrmPipelineModuleDefinition * This, VARIANT_BOOL needsFileContent);
	HRESULT(STDMETHODCALLTYPE * get_Account) (IFsrmPipelineModuleDefinition * This, FsrmAccountType * retrievalAccount);
	HRESULT(STDMETHODCALLTYPE * put_Account) (IFsrmPipelineModuleDefinition * This, FsrmAccountType retrievalAccount);
	HRESULT(STDMETHODCALLTYPE * get_SupportedExtensions) (IFsrmPipelineModuleDefinition * This, SAFEARRAY * *supportedExtensions);
	HRESULT(STDMETHODCALLTYPE * put_SupportedExtensions) (IFsrmPipelineModuleDefinition * This, SAFEARRAY * supportedExtensions);
	HRESULT(STDMETHODCALLTYPE * get_Parameters) (IFsrmPipelineModuleDefinition * This, SAFEARRAY * *parameters);
	HRESULT(STDMETHODCALLTYPE * put_Parameters) (IFsrmPipelineModuleDefinition * This, SAFEARRAY * parameters);
	END_INTERFACE
}  IFsrmPipelineModuleDefinitionVtbl;
interface IFsrmPipelineModuleDefinition
{
	CONST_VTBL struct IFsrmPipelineModuleDefinitionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsrmPipelineModuleDefinition_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsrmPipelineModuleDefinition_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsrmPipelineModuleDefinition_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsrmPipelineModuleDefinition_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsrmPipelineModuleDefinition_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsrmPipelineModuleDefinition_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsrmPipelineModuleDefinition_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsrmPipelineModuleDefinition_get_Id(This,id)( (This)->lpVtbl -> get_Id(This,id) )
#define IFsrmPipelineModuleDefinition_get_Description(This,description)( (This)->lpVtbl -> get_Description(This,description) )
#define IFsrmPipelineModuleDefinition_put_Description(This,description)( (This)->lpVtbl -> put_Description(This,description) )
#define IFsrmPipelineModuleDefinition_Delete(This)( (This)->lpVtbl -> Delete(This) )
#define IFsrmPipelineModuleDefinition_Commit(This)( (This)->lpVtbl -> Commit(This) )
#define IFsrmPipelineModuleDefinition_get_ModuleClsid(This,moduleClsid)( (This)->lpVtbl -> get_ModuleClsid(This,moduleClsid) )
#define IFsrmPipelineModuleDefinition_put_ModuleClsid(This,moduleClsid)( (This)->lpVtbl -> put_ModuleClsid(This,moduleClsid) )
#define IFsrmPipelineModuleDefinition_get_Name(This,name)( (This)->lpVtbl -> get_Name(This,name) )
#define IFsrmPipelineModuleDefinition_put_Name(This,name)( (This)->lpVtbl -> put_Name(This,name) )
#define IFsrmPipelineModuleDefinition_get_Company(This,company)( (This)->lpVtbl -> get_Company(This,company) )
#define IFsrmPipelineModuleDefinition_put_Company(This,company)( (This)->lpVtbl -> put_Company(This,company) )
#define IFsrmPipelineModuleDefinition_get_Version(This,version)( (This)->lpVtbl -> get_Version(This,version) )
#define IFsrmPipelineModuleDefinition_put_Version(This,version)( (This)->lpVtbl -> put_Version(This,version) )
#define IFsrmPipelineModuleDefinition_get_ModuleType(This,moduleType)( (This)->lpVtbl -> get_ModuleType(This,moduleType) )
#define IFsrmPipelineModuleDefinition_get_Enabled(This,enabled)( (This)->lpVtbl -> get_Enabled(This,enabled) )
#define IFsrmPipelineModuleDefinition_put_Enabled(This,enabled)( (This)->lpVtbl -> put_Enabled(This,enabled) )
#define IFsrmPipelineModuleDefinition_get_NeedsFileContent(This,needsFileContent)( (This)->lpVtbl -> get_NeedsFileContent(This,needsFileContent) )
#define IFsrmPipelineModuleDefinition_put_NeedsFileContent(This,needsFileContent)( (This)->lpVtbl -> put_NeedsFileContent(This,needsFileContent) )
#define IFsrmPipelineModuleDefinition_get_Account(This,retrievalAccount)( (This)->lpVtbl -> get_Account(This,retrievalAccount) )
#define IFsrmPipelineModuleDefinition_put_Account(This,retrievalAccount)( (This)->lpVtbl -> put_Account(This,retrievalAccount) )
#define IFsrmPipelineModuleDefinition_get_SupportedExtensions(This,supportedExtensions)( (This)->lpVtbl -> get_SupportedExtensions(This,supportedExtensions) )
#define IFsrmPipelineModuleDefinition_put_SupportedExtensions(This,supportedExtensions)( (This)->lpVtbl -> put_SupportedExtensions(This,supportedExtensions) )
#define IFsrmPipelineModuleDefinition_get_Parameters(This,parameters)( (This)->lpVtbl -> get_Parameters(This,parameters) )
#define IFsrmPipelineModuleDefinition_put_Parameters(This,parameters)( (This)->lpVtbl -> put_Parameters(This,parameters) )
#endif
#endif
#ifndef __IFsrmClassifierModuleDefinition_INTERFACE_DEFINED__
#define __IFsrmClassifierModuleDefinition_INTERFACE_DEFINED__
extern const IID IID_IFsrmClassifierModuleDefinition;
typedef struct IFsrmClassifierModuleDefinitionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFsrmClassifierModuleDefinition * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFsrmClassifierModuleDefinition * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFsrmClassifierModuleDefinition * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFsrmClassifierModuleDefinition * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFsrmClassifierModuleDefinition * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFsrmClassifierModuleDefinition * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFsrmClassifierModuleDefinition * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IFsrmClassifierModuleDefinition * This, FSRM_OBJECT_ID * id);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IFsrmClassifierModuleDefinition * This, BSTR * description);
	HRESULT(STDMETHODCALLTYPE * put_Description) (IFsrmClassifierModuleDefinition * This, BSTR description);
	HRESULT(STDMETHODCALLTYPE * Delete) (IFsrmClassifierModuleDefinition * This);
	HRESULT(STDMETHODCALLTYPE * Commit) (IFsrmClassifierModuleDefinition * This);
	HRESULT(STDMETHODCALLTYPE * get_ModuleClsid) (IFsrmClassifierModuleDefinition * This, BSTR * moduleClsid);
	HRESULT(STDMETHODCALLTYPE * put_ModuleClsid) (IFsrmClassifierModuleDefinition * This, BSTR moduleClsid);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IFsrmClassifierModuleDefinition * This, BSTR * name);
	HRESULT(STDMETHODCALLTYPE * put_Name) (IFsrmClassifierModuleDefinition * This, BSTR name);
	HRESULT(STDMETHODCALLTYPE * get_Company) (IFsrmClassifierModuleDefinition * This, BSTR * company);
	HRESULT(STDMETHODCALLTYPE * put_Company) (IFsrmClassifierModuleDefinition * This, BSTR company);
	HRESULT(STDMETHODCALLTYPE * get_Version) (IFsrmClassifierModuleDefinition * This, BSTR * version);
	HRESULT(STDMETHODCALLTYPE * put_Version) (IFsrmClassifierModuleDefinition * This, BSTR version);
	HRESULT(STDMETHODCALLTYPE * get_ModuleType) (IFsrmClassifierModuleDefinition * This, FsrmPipelineModuleType * moduleType);
	HRESULT(STDMETHODCALLTYPE * get_Enabled) (IFsrmClassifierModuleDefinition * This, VARIANT_BOOL * enabled);
	HRESULT(STDMETHODCALLTYPE * put_Enabled) (IFsrmClassifierModuleDefinition * This, VARIANT_BOOL enabled);
	HRESULT(STDMETHODCALLTYPE * get_NeedsFileContent) (IFsrmClassifierModuleDefinition * This, VARIANT_BOOL * needsFileContent);
	HRESULT(STDMETHODCALLTYPE * put_NeedsFileContent) (IFsrmClassifierModuleDefinition * This, VARIANT_BOOL needsFileContent);
	HRESULT(STDMETHODCALLTYPE * get_Account) (IFsrmClassifierModuleDefinition * This, FsrmAccountType * retrievalAccount);
	HRESULT(STDMETHODCALLTYPE * put_Account) (IFsrmClassifierModuleDefinition * This, FsrmAccountType retrievalAccount);
	HRESULT(STDMETHODCALLTYPE * get_SupportedExtensions) (IFsrmClassifierModuleDefinition * This, SAFEARRAY * *supportedExtensions);
	HRESULT(STDMETHODCALLTYPE * put_SupportedExtensions) (IFsrmClassifierModuleDefinition * This, SAFEARRAY * supportedExtensions);
	HRESULT(STDMETHODCALLTYPE * get_Parameters) (IFsrmClassifierModuleDefinition * This, SAFEARRAY * *parameters);
	HRESULT(STDMETHODCALLTYPE * put_Parameters) (IFsrmClassifierModuleDefinition * This, SAFEARRAY * parameters);
	HRESULT(STDMETHODCALLTYPE * get_PropertiesAffected) (IFsrmClassifierModuleDefinition * This, SAFEARRAY * *propertiesAffected);
	HRESULT(STDMETHODCALLTYPE * put_PropertiesAffected) (IFsrmClassifierModuleDefinition * This, SAFEARRAY * propertiesAffected);
	HRESULT(STDMETHODCALLTYPE * get_PropertiesUsed) (IFsrmClassifierModuleDefinition * This, SAFEARRAY * *propertiesUsed);
	HRESULT(STDMETHODCALLTYPE * put_PropertiesUsed) (IFsrmClassifierModuleDefinition * This, SAFEARRAY * propertiesUsed);
	HRESULT(STDMETHODCALLTYPE * get_NeedsExplicitValue) (IFsrmClassifierModuleDefinition * This, VARIANT_BOOL * needsExplicitValue);
	HRESULT(STDMETHODCALLTYPE * put_NeedsExplicitValue) (IFsrmClassifierModuleDefinition * This, VARIANT_BOOL needsExplicitValue);
	END_INTERFACE
}  IFsrmClassifierModuleDefinitionVtbl;
interface IFsrmClassifierModuleDefinition
{
	CONST_VTBL struct IFsrmClassifierModuleDefinitionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsrmClassifierModuleDefinition_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsrmClassifierModuleDefinition_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsrmClassifierModuleDefinition_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsrmClassifierModuleDefinition_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsrmClassifierModuleDefinition_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsrmClassifierModuleDefinition_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsrmClassifierModuleDefinition_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsrmClassifierModuleDefinition_get_Id(This,id)( (This)->lpVtbl -> get_Id(This,id) )
#define IFsrmClassifierModuleDefinition_get_Description(This,description)( (This)->lpVtbl -> get_Description(This,description) )
#define IFsrmClassifierModuleDefinition_put_Description(This,description)( (This)->lpVtbl -> put_Description(This,description) )
#define IFsrmClassifierModuleDefinition_Delete(This)( (This)->lpVtbl -> Delete(This) )
#define IFsrmClassifierModuleDefinition_Commit(This)( (This)->lpVtbl -> Commit(This) )
#define IFsrmClassifierModuleDefinition_get_ModuleClsid(This,moduleClsid)( (This)->lpVtbl -> get_ModuleClsid(This,moduleClsid) )
#define IFsrmClassifierModuleDefinition_put_ModuleClsid(This,moduleClsid)( (This)->lpVtbl -> put_ModuleClsid(This,moduleClsid) )
#define IFsrmClassifierModuleDefinition_get_Name(This,name)( (This)->lpVtbl -> get_Name(This,name) )
#define IFsrmClassifierModuleDefinition_put_Name(This,name)( (This)->lpVtbl -> put_Name(This,name) )
#define IFsrmClassifierModuleDefinition_get_Company(This,company)( (This)->lpVtbl -> get_Company(This,company) )
#define IFsrmClassifierModuleDefinition_put_Company(This,company)( (This)->lpVtbl -> put_Company(This,company) )
#define IFsrmClassifierModuleDefinition_get_Version(This,version)( (This)->lpVtbl -> get_Version(This,version) )
#define IFsrmClassifierModuleDefinition_put_Version(This,version)( (This)->lpVtbl -> put_Version(This,version) )
#define IFsrmClassifierModuleDefinition_get_ModuleType(This,moduleType)( (This)->lpVtbl -> get_ModuleType(This,moduleType) )
#define IFsrmClassifierModuleDefinition_get_Enabled(This,enabled)( (This)->lpVtbl -> get_Enabled(This,enabled) )
#define IFsrmClassifierModuleDefinition_put_Enabled(This,enabled)( (This)->lpVtbl -> put_Enabled(This,enabled) )
#define IFsrmClassifierModuleDefinition_get_NeedsFileContent(This,needsFileContent)( (This)->lpVtbl -> get_NeedsFileContent(This,needsFileContent) )
#define IFsrmClassifierModuleDefinition_put_NeedsFileContent(This,needsFileContent)( (This)->lpVtbl -> put_NeedsFileContent(This,needsFileContent) )
#define IFsrmClassifierModuleDefinition_get_Account(This,retrievalAccount)( (This)->lpVtbl -> get_Account(This,retrievalAccount) )
#define IFsrmClassifierModuleDefinition_put_Account(This,retrievalAccount)( (This)->lpVtbl -> put_Account(This,retrievalAccount) )
#define IFsrmClassifierModuleDefinition_get_SupportedExtensions(This,supportedExtensions)( (This)->lpVtbl -> get_SupportedExtensions(This,supportedExtensions) )
#define IFsrmClassifierModuleDefinition_put_SupportedExtensions(This,supportedExtensions)( (This)->lpVtbl -> put_SupportedExtensions(This,supportedExtensions) )
#define IFsrmClassifierModuleDefinition_get_Parameters(This,parameters)( (This)->lpVtbl -> get_Parameters(This,parameters) )
#define IFsrmClassifierModuleDefinition_put_Parameters(This,parameters)( (This)->lpVtbl -> put_Parameters(This,parameters) )
#define IFsrmClassifierModuleDefinition_get_PropertiesAffected(This,propertiesAffected)( (This)->lpVtbl -> get_PropertiesAffected(This,propertiesAffected) )
#define IFsrmClassifierModuleDefinition_put_PropertiesAffected(This,propertiesAffected)( (This)->lpVtbl -> put_PropertiesAffected(This,propertiesAffected) )
#define IFsrmClassifierModuleDefinition_get_PropertiesUsed(This,propertiesUsed)( (This)->lpVtbl -> get_PropertiesUsed(This,propertiesUsed) )
#define IFsrmClassifierModuleDefinition_put_PropertiesUsed(This,propertiesUsed)( (This)->lpVtbl -> put_PropertiesUsed(This,propertiesUsed) )
#define IFsrmClassifierModuleDefinition_get_NeedsExplicitValue(This,needsExplicitValue)( (This)->lpVtbl -> get_NeedsExplicitValue(This,needsExplicitValue) )
#define IFsrmClassifierModuleDefinition_put_NeedsExplicitValue(This,needsExplicitValue)( (This)->lpVtbl -> put_NeedsExplicitValue(This,needsExplicitValue) )
#endif
#endif
#ifndef __IFsrmStorageModuleDefinition_INTERFACE_DEFINED__
#define __IFsrmStorageModuleDefinition_INTERFACE_DEFINED__
extern const IID IID_IFsrmStorageModuleDefinition;
typedef struct IFsrmStorageModuleDefinitionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFsrmStorageModuleDefinition * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFsrmStorageModuleDefinition * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFsrmStorageModuleDefinition * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFsrmStorageModuleDefinition * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFsrmStorageModuleDefinition * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFsrmStorageModuleDefinition * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFsrmStorageModuleDefinition * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Id) (IFsrmStorageModuleDefinition * This, FSRM_OBJECT_ID * id);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IFsrmStorageModuleDefinition * This, BSTR * description);
	HRESULT(STDMETHODCALLTYPE * put_Description) (IFsrmStorageModuleDefinition * This, BSTR description);
	HRESULT(STDMETHODCALLTYPE * Delete) (IFsrmStorageModuleDefinition * This);
	HRESULT(STDMETHODCALLTYPE * Commit) (IFsrmStorageModuleDefinition * This);
	HRESULT(STDMETHODCALLTYPE * get_ModuleClsid) (IFsrmStorageModuleDefinition * This, BSTR * moduleClsid);
	HRESULT(STDMETHODCALLTYPE * put_ModuleClsid) (IFsrmStorageModuleDefinition * This, BSTR moduleClsid);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IFsrmStorageModuleDefinition * This, BSTR * name);
	HRESULT(STDMETHODCALLTYPE * put_Name) (IFsrmStorageModuleDefinition * This, BSTR name);
	HRESULT(STDMETHODCALLTYPE * get_Company) (IFsrmStorageModuleDefinition * This, BSTR * company);
	HRESULT(STDMETHODCALLTYPE * put_Company) (IFsrmStorageModuleDefinition * This, BSTR company);
	HRESULT(STDMETHODCALLTYPE * get_Version) (IFsrmStorageModuleDefinition * This, BSTR * version);
	HRESULT(STDMETHODCALLTYPE * put_Version) (IFsrmStorageModuleDefinition * This, BSTR version);
	HRESULT(STDMETHODCALLTYPE * get_ModuleType) (IFsrmStorageModuleDefinition * This, FsrmPipelineModuleType * moduleType);
	HRESULT(STDMETHODCALLTYPE * get_Enabled) (IFsrmStorageModuleDefinition * This, VARIANT_BOOL * enabled);
	HRESULT(STDMETHODCALLTYPE * put_Enabled) (IFsrmStorageModuleDefinition * This, VARIANT_BOOL enabled);
	HRESULT(STDMETHODCALLTYPE * get_NeedsFileContent) (IFsrmStorageModuleDefinition * This, VARIANT_BOOL * needsFileContent);
	HRESULT(STDMETHODCALLTYPE * put_NeedsFileContent) (IFsrmStorageModuleDefinition * This, VARIANT_BOOL needsFileContent);
	HRESULT(STDMETHODCALLTYPE * get_Account) (IFsrmStorageModuleDefinition * This, FsrmAccountType * retrievalAccount);
	HRESULT(STDMETHODCALLTYPE * put_Account) (IFsrmStorageModuleDefinition * This, FsrmAccountType retrievalAccount);
	HRESULT(STDMETHODCALLTYPE * get_SupportedExtensions) (IFsrmStorageModuleDefinition * This, SAFEARRAY * *supportedExtensions);
	HRESULT(STDMETHODCALLTYPE * put_SupportedExtensions) (IFsrmStorageModuleDefinition * This, SAFEARRAY * supportedExtensions);
	HRESULT(STDMETHODCALLTYPE * get_Parameters) (IFsrmStorageModuleDefinition * This, SAFEARRAY * *parameters);
	HRESULT(STDMETHODCALLTYPE * put_Parameters) (IFsrmStorageModuleDefinition * This, SAFEARRAY * parameters);
	HRESULT(STDMETHODCALLTYPE * get_Capabilities) (IFsrmStorageModuleDefinition * This, FsrmStorageModuleCaps * capabilities);
	HRESULT(STDMETHODCALLTYPE * put_Capabilities) (IFsrmStorageModuleDefinition * This, FsrmStorageModuleCaps capabilities);
	HRESULT(STDMETHODCALLTYPE * get_StorageType) (IFsrmStorageModuleDefinition * This, FsrmStorageModuleType * storageType);
	HRESULT(STDMETHODCALLTYPE * put_StorageType) (IFsrmStorageModuleDefinition * This, FsrmStorageModuleType storageType);
	HRESULT(STDMETHODCALLTYPE * get_UpdatesFileContent) (IFsrmStorageModuleDefinition * This, VARIANT_BOOL * updatesFileContent);
	HRESULT(STDMETHODCALLTYPE * put_UpdatesFileContent) (IFsrmStorageModuleDefinition * This, VARIANT_BOOL updatesFileContent);
	END_INTERFACE
}  IFsrmStorageModuleDefinitionVtbl;
interface IFsrmStorageModuleDefinition
{
	CONST_VTBL struct IFsrmStorageModuleDefinitionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsrmStorageModuleDefinition_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsrmStorageModuleDefinition_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsrmStorageModuleDefinition_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsrmStorageModuleDefinition_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsrmStorageModuleDefinition_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsrmStorageModuleDefinition_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsrmStorageModuleDefinition_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsrmStorageModuleDefinition_get_Id(This,id)( (This)->lpVtbl -> get_Id(This,id) )
#define IFsrmStorageModuleDefinition_get_Description(This,description)( (This)->lpVtbl -> get_Description(This,description) )
#define IFsrmStorageModuleDefinition_put_Description(This,description)( (This)->lpVtbl -> put_Description(This,description) )
#define IFsrmStorageModuleDefinition_Delete(This)( (This)->lpVtbl -> Delete(This) )
#define IFsrmStorageModuleDefinition_Commit(This)( (This)->lpVtbl -> Commit(This) )
#define IFsrmStorageModuleDefinition_get_ModuleClsid(This,moduleClsid)( (This)->lpVtbl -> get_ModuleClsid(This,moduleClsid) )
#define IFsrmStorageModuleDefinition_put_ModuleClsid(This,moduleClsid)( (This)->lpVtbl -> put_ModuleClsid(This,moduleClsid) )
#define IFsrmStorageModuleDefinition_get_Name(This,name)( (This)->lpVtbl -> get_Name(This,name) )
#define IFsrmStorageModuleDefinition_put_Name(This,name)( (This)->lpVtbl -> put_Name(This,name) )
#define IFsrmStorageModuleDefinition_get_Company(This,company)( (This)->lpVtbl -> get_Company(This,company) )
#define IFsrmStorageModuleDefinition_put_Company(This,company)( (This)->lpVtbl -> put_Company(This,company) )
#define IFsrmStorageModuleDefinition_get_Version(This,version)( (This)->lpVtbl -> get_Version(This,version) )
#define IFsrmStorageModuleDefinition_put_Version(This,version)( (This)->lpVtbl -> put_Version(This,version) )
#define IFsrmStorageModuleDefinition_get_ModuleType(This,moduleType)( (This)->lpVtbl -> get_ModuleType(This,moduleType) )
#define IFsrmStorageModuleDefinition_get_Enabled(This,enabled)( (This)->lpVtbl -> get_Enabled(This,enabled) )
#define IFsrmStorageModuleDefinition_put_Enabled(This,enabled)( (This)->lpVtbl -> put_Enabled(This,enabled) )
#define IFsrmStorageModuleDefinition_get_NeedsFileContent(This,needsFileContent)( (This)->lpVtbl -> get_NeedsFileContent(This,needsFileContent) )
#define IFsrmStorageModuleDefinition_put_NeedsFileContent(This,needsFileContent)( (This)->lpVtbl -> put_NeedsFileContent(This,needsFileContent) )
#define IFsrmStorageModuleDefinition_get_Account(This,retrievalAccount)( (This)->lpVtbl -> get_Account(This,retrievalAccount) )
#define IFsrmStorageModuleDefinition_put_Account(This,retrievalAccount)( (This)->lpVtbl -> put_Account(This,retrievalAccount) )
#define IFsrmStorageModuleDefinition_get_SupportedExtensions(This,supportedExtensions)( (This)->lpVtbl -> get_SupportedExtensions(This,supportedExtensions) )
#define IFsrmStorageModuleDefinition_put_SupportedExtensions(This,supportedExtensions)( (This)->lpVtbl -> put_SupportedExtensions(This,supportedExtensions) )
#define IFsrmStorageModuleDefinition_get_Parameters(This,parameters)( (This)->lpVtbl -> get_Parameters(This,parameters) )
#define IFsrmStorageModuleDefinition_put_Parameters(This,parameters)( (This)->lpVtbl -> put_Parameters(This,parameters) )
#define IFsrmStorageModuleDefinition_get_Capabilities(This,capabilities)( (This)->lpVtbl -> get_Capabilities(This,capabilities) )
#define IFsrmStorageModuleDefinition_put_Capabilities(This,capabilities)( (This)->lpVtbl -> put_Capabilities(This,capabilities) )
#define IFsrmStorageModuleDefinition_get_StorageType(This,storageType)( (This)->lpVtbl -> get_StorageType(This,storageType) )
#define IFsrmStorageModuleDefinition_put_StorageType(This,storageType)( (This)->lpVtbl -> put_StorageType(This,storageType) )
#define IFsrmStorageModuleDefinition_get_UpdatesFileContent(This,updatesFileContent)( (This)->lpVtbl -> get_UpdatesFileContent(This,updatesFileContent) )
#define IFsrmStorageModuleDefinition_put_UpdatesFileContent(This,updatesFileContent)( (This)->lpVtbl -> put_UpdatesFileContent(This,updatesFileContent) )
#endif
#endif
#ifndef __IFsrmClassificationManager_INTERFACE_DEFINED__
#define __IFsrmClassificationManager_INTERFACE_DEFINED__
extern const IID IID_IFsrmClassificationManager;
typedef struct IFsrmClassificationManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFsrmClassificationManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFsrmClassificationManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFsrmClassificationManager * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFsrmClassificationManager * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFsrmClassificationManager * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFsrmClassificationManager * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFsrmClassificationManager * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_ClassificationReportFormats) (IFsrmClassificationManager * This, SAFEARRAY * *formats);
	HRESULT(STDMETHODCALLTYPE * put_ClassificationReportFormats) (IFsrmClassificationManager * This, SAFEARRAY * formats);
	HRESULT(STDMETHODCALLTYPE * get_Logging) (IFsrmClassificationManager * This, long *logging);
	HRESULT(STDMETHODCALLTYPE * put_Logging) (IFsrmClassificationManager * This, long logging);
	HRESULT(STDMETHODCALLTYPE * get_ClassificationReportMailTo) (IFsrmClassificationManager * This, BSTR * mailTo);
	HRESULT(STDMETHODCALLTYPE * put_ClassificationReportMailTo) (IFsrmClassificationManager * This, BSTR mailTo);
	HRESULT(STDMETHODCALLTYPE * get_ClassificationReportEnabled) (IFsrmClassificationManager * This, VARIANT_BOOL * reportEnabled);
	HRESULT(STDMETHODCALLTYPE * put_ClassificationReportEnabled) (IFsrmClassificationManager * This, VARIANT_BOOL reportEnabled);
	HRESULT(STDMETHODCALLTYPE * get_ClassificationLastReportPathWithoutExtension) (IFsrmClassificationManager * This, BSTR * lastReportPath);
	HRESULT(STDMETHODCALLTYPE * get_ClassificationLastError) (IFsrmClassificationManager * This, BSTR * lastError);
	HRESULT(STDMETHODCALLTYPE * get_ClassificationRunningStatus) (IFsrmClassificationManager * This, FsrmReportRunningStatus * runningStatus);
	HRESULT(STDMETHODCALLTYPE * EnumPropertyDefinitions) (IFsrmClassificationManager * This, FsrmEnumOptions options, IFsrmCollection ** propertyDefinitions);
	HRESULT(STDMETHODCALLTYPE * CreatePropertyDefinition) (IFsrmClassificationManager * This, IFsrmPropertyDefinition ** propertyDefinition);
	HRESULT(STDMETHODCALLTYPE * GetPropertyDefinition) (IFsrmClassificationManager * This, BSTR propertyName, IFsrmPropertyDefinition ** propertyDefinition);
	HRESULT(STDMETHODCALLTYPE * EnumRules) (IFsrmClassificationManager * This, FsrmRuleType ruleType, FsrmEnumOptions options, IFsrmCollection ** Rules);
	HRESULT(STDMETHODCALLTYPE * CreateRule) (IFsrmClassificationManager * This, FsrmRuleType ruleType, IFsrmRule ** Rule);
	HRESULT(STDMETHODCALLTYPE * GetRule) (IFsrmClassificationManager * This, BSTR ruleName, FsrmRuleType ruleType, IFsrmRule ** Rule);
	HRESULT(STDMETHODCALLTYPE * EnumModuleDefinitions) (IFsrmClassificationManager * This, FsrmPipelineModuleType moduleType, FsrmEnumOptions options, IFsrmCollection ** moduleDefinitions);
	HRESULT(STDMETHODCALLTYPE * CreateModuleDefinition) (IFsrmClassificationManager * This, FsrmPipelineModuleType moduleType, IFsrmPipelineModuleDefinition ** moduleDefinition);
	HRESULT(STDMETHODCALLTYPE * GetModuleDefinition) (IFsrmClassificationManager * This, BSTR moduleName, FsrmPipelineModuleType moduleType, IFsrmPipelineModuleDefinition ** moduleDefinition);
	HRESULT(STDMETHODCALLTYPE * RunClassification) (IFsrmClassificationManager * This, FsrmReportGenerationContext context, BSTR reserved);
	HRESULT(STDMETHODCALLTYPE * WaitForClassificationCompletion) (IFsrmClassificationManager * This, long waitSeconds, VARIANT_BOOL * completed);
	HRESULT(STDMETHODCALLTYPE * CancelClassification) (IFsrmClassificationManager * This);
	HRESULT(STDMETHODCALLTYPE * EnumFileProperties) (IFsrmClassificationManager * This, BSTR filePath, FsrmGetFilePropertyOptions options, IFsrmCollection ** fileProperties);
	HRESULT(STDMETHODCALLTYPE * GetFileProperty) (IFsrmClassificationManager * This, BSTR filePath, BSTR propertyName, FsrmGetFilePropertyOptions options, IFsrmProperty ** property);
	HRESULT(STDMETHODCALLTYPE * SetFileProperty) (IFsrmClassificationManager * This, BSTR filePath, BSTR propertyName, BSTR propertyValue);
	HRESULT(STDMETHODCALLTYPE * ClearFileProperty) (IFsrmClassificationManager * This, BSTR filePath, BSTR property);
	END_INTERFACE
}  IFsrmClassificationManagerVtbl;
interface IFsrmClassificationManager
{
	CONST_VTBL struct IFsrmClassificationManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsrmClassificationManager_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsrmClassificationManager_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsrmClassificationManager_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsrmClassificationManager_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsrmClassificationManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsrmClassificationManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsrmClassificationManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsrmClassificationManager_get_ClassificationReportFormats(This,formats)( (This)->lpVtbl -> get_ClassificationReportFormats(This,formats) )
#define IFsrmClassificationManager_put_ClassificationReportFormats(This,formats)( (This)->lpVtbl -> put_ClassificationReportFormats(This,formats) )
#define IFsrmClassificationManager_get_Logging(This,logging)( (This)->lpVtbl -> get_Logging(This,logging) )
#define IFsrmClassificationManager_put_Logging(This,logging)( (This)->lpVtbl -> put_Logging(This,logging) )
#define IFsrmClassificationManager_get_ClassificationReportMailTo(This,mailTo)( (This)->lpVtbl -> get_ClassificationReportMailTo(This,mailTo) )
#define IFsrmClassificationManager_put_ClassificationReportMailTo(This,mailTo)( (This)->lpVtbl -> put_ClassificationReportMailTo(This,mailTo) )
#define IFsrmClassificationManager_get_ClassificationReportEnabled(This,reportEnabled)( (This)->lpVtbl -> get_ClassificationReportEnabled(This,reportEnabled) )
#define IFsrmClassificationManager_put_ClassificationReportEnabled(This,reportEnabled)( (This)->lpVtbl -> put_ClassificationReportEnabled(This,reportEnabled) )
#define IFsrmClassificationManager_get_ClassificationLastReportPathWithoutExtension(This,lastReportPath)( (This)->lpVtbl -> get_ClassificationLastReportPathWithoutExtension(This,lastReportPath) )
#define IFsrmClassificationManager_get_ClassificationLastError(This,lastError)( (This)->lpVtbl -> get_ClassificationLastError(This,lastError) )
#define IFsrmClassificationManager_get_ClassificationRunningStatus(This,runningStatus)( (This)->lpVtbl -> get_ClassificationRunningStatus(This,runningStatus) )
#define IFsrmClassificationManager_EnumPropertyDefinitions(This,options,propertyDefinitions)( (This)->lpVtbl -> EnumPropertyDefinitions(This,options,propertyDefinitions) )
#define IFsrmClassificationManager_CreatePropertyDefinition(This,propertyDefinition)( (This)->lpVtbl -> CreatePropertyDefinition(This,propertyDefinition) )
#define IFsrmClassificationManager_GetPropertyDefinition(This,propertyName,propertyDefinition)( (This)->lpVtbl -> GetPropertyDefinition(This,propertyName,propertyDefinition) )
#define IFsrmClassificationManager_EnumRules(This,ruleType,options,Rules)( (This)->lpVtbl -> EnumRules(This,ruleType,options,Rules) )
#define IFsrmClassificationManager_CreateRule(This,ruleType,Rule)( (This)->lpVtbl -> CreateRule(This,ruleType,Rule) )
#define IFsrmClassificationManager_GetRule(This,ruleName,ruleType,Rule)( (This)->lpVtbl -> GetRule(This,ruleName,ruleType,Rule) )
#define IFsrmClassificationManager_EnumModuleDefinitions(This,moduleType,options,moduleDefinitions)( (This)->lpVtbl -> EnumModuleDefinitions(This,moduleType,options,moduleDefinitions) )
#define IFsrmClassificationManager_CreateModuleDefinition(This,moduleType,moduleDefinition)( (This)->lpVtbl -> CreateModuleDefinition(This,moduleType,moduleDefinition) )
#define IFsrmClassificationManager_GetModuleDefinition(This,moduleName,moduleType,moduleDefinition)( (This)->lpVtbl -> GetModuleDefinition(This,moduleName,moduleType,moduleDefinition) )
#define IFsrmClassificationManager_RunClassification(This,context,reserved)( (This)->lpVtbl -> RunClassification(This,context,reserved) )
#define IFsrmClassificationManager_WaitForClassificationCompletion(This,waitSeconds,completed)( (This)->lpVtbl -> WaitForClassificationCompletion(This,waitSeconds,completed) )
#define IFsrmClassificationManager_CancelClassification(This)( (This)->lpVtbl -> CancelClassification(This) )
#define IFsrmClassificationManager_EnumFileProperties(This,filePath,options,fileProperties)( (This)->lpVtbl -> EnumFileProperties(This,filePath,options,fileProperties) )
#define IFsrmClassificationManager_GetFileProperty(This,filePath,propertyName,options,property)( (This)->lpVtbl -> GetFileProperty(This,filePath,propertyName,options,property) )
#define IFsrmClassificationManager_SetFileProperty(This,filePath,propertyName,propertyValue)( (This)->lpVtbl -> SetFileProperty(This,filePath,propertyName,propertyValue) )
#define IFsrmClassificationManager_ClearFileProperty(This,filePath,property)( (This)->lpVtbl -> ClearFileProperty(This,filePath,property) )
#endif
#endif
#ifndef __IFsrmPropertyBag_INTERFACE_DEFINED__
#define __IFsrmPropertyBag_INTERFACE_DEFINED__
#define	MessageSizeLimit	( 4096 )
extern const IID IID_IFsrmPropertyBag;
typedef struct IFsrmPropertyBagVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFsrmPropertyBag * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFsrmPropertyBag * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFsrmPropertyBag * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFsrmPropertyBag * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFsrmPropertyBag * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFsrmPropertyBag * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFsrmPropertyBag * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IFsrmPropertyBag * This, BSTR * name);
	HRESULT(STDMETHODCALLTYPE * get_RelativePath) (IFsrmPropertyBag * This, BSTR * path);
	HRESULT(STDMETHODCALLTYPE * get_VolumeName) (IFsrmPropertyBag * This, BSTR * volumeName);
	HRESULT(STDMETHODCALLTYPE * get_RelativeNamespaceRoot) (IFsrmPropertyBag * This, BSTR * relativeNamespaceRoot);
	HRESULT(STDMETHODCALLTYPE * get_VolumeIndex) (IFsrmPropertyBag * This, unsigned long *volumeId);
	HRESULT(STDMETHODCALLTYPE * get_FileId) (IFsrmPropertyBag * This, VARIANT * fileId);
	HRESULT(STDMETHODCALLTYPE * get_ParentDirectoryId) (IFsrmPropertyBag * This, VARIANT * parentDirectoryId);
	HRESULT(STDMETHODCALLTYPE * get_Size) (IFsrmPropertyBag * This, VARIANT * size);
	HRESULT(STDMETHODCALLTYPE * get_SizeAllocated) (IFsrmPropertyBag * This, VARIANT * sizeAllocated);
	HRESULT(STDMETHODCALLTYPE * get_CreationTime) (IFsrmPropertyBag * This, VARIANT * creationTime);
	HRESULT(STDMETHODCALLTYPE * get_LastAccessTime) (IFsrmPropertyBag * This, VARIANT * lastAccessTime);
	HRESULT(STDMETHODCALLTYPE * get_LastModificationTime) (IFsrmPropertyBag * This, VARIANT * lastModificationTime);
	HRESULT(STDMETHODCALLTYPE * get_Attributes) (IFsrmPropertyBag * This, unsigned long *attributes);
	HRESULT(STDMETHODCALLTYPE * get_OwnerSid) (IFsrmPropertyBag * This, BSTR * ownerSid);
	HRESULT(STDMETHODCALLTYPE * get_FilePropertyNames) (IFsrmPropertyBag * This, SAFEARRAY * *filePropertyNames);
	HRESULT(STDMETHODCALLTYPE * get_Messages) (IFsrmPropertyBag * This, SAFEARRAY * *messages);
	HRESULT(STDMETHODCALLTYPE * get_PropertyBagFlags) (IFsrmPropertyBag * This, unsigned long *flags);
	HRESULT(STDMETHODCALLTYPE * GetFileProperty) (IFsrmPropertyBag * This, BSTR name, IFsrmProperty ** fileProperty);
	HRESULT(STDMETHODCALLTYPE * SetFileProperty) (IFsrmPropertyBag * This, BSTR name, BSTR value);
	HRESULT(STDMETHODCALLTYPE * AddMessage) (IFsrmPropertyBag * This, BSTR message);
	HRESULT(STDMETHODCALLTYPE * GetFileStreamInterface) (IFsrmPropertyBag * This, FsrmFileStreamingMode accessMode, FsrmFileStreamingInterfaceType interfaceType, VARIANT * pStreamInterface);
	END_INTERFACE
}  IFsrmPropertyBagVtbl;
interface IFsrmPropertyBag
{
	CONST_VTBL struct IFsrmPropertyBagVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsrmPropertyBag_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsrmPropertyBag_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsrmPropertyBag_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsrmPropertyBag_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsrmPropertyBag_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsrmPropertyBag_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsrmPropertyBag_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsrmPropertyBag_get_Name(This,name)( (This)->lpVtbl -> get_Name(This,name) )
#define IFsrmPropertyBag_get_RelativePath(This,path)( (This)->lpVtbl -> get_RelativePath(This,path) )
#define IFsrmPropertyBag_get_VolumeName(This,volumeName)( (This)->lpVtbl -> get_VolumeName(This,volumeName) )
#define IFsrmPropertyBag_get_RelativeNamespaceRoot(This,relativeNamespaceRoot)( (This)->lpVtbl -> get_RelativeNamespaceRoot(This,relativeNamespaceRoot) )
#define IFsrmPropertyBag_get_VolumeIndex(This,volumeId)( (This)->lpVtbl -> get_VolumeIndex(This,volumeId) )
#define IFsrmPropertyBag_get_FileId(This,fileId)( (This)->lpVtbl -> get_FileId(This,fileId) )
#define IFsrmPropertyBag_get_ParentDirectoryId(This,parentDirectoryId)( (This)->lpVtbl -> get_ParentDirectoryId(This,parentDirectoryId) )
#define IFsrmPropertyBag_get_Size(This,size)( (This)->lpVtbl -> get_Size(This,size) )
#define IFsrmPropertyBag_get_SizeAllocated(This,sizeAllocated)( (This)->lpVtbl -> get_SizeAllocated(This,sizeAllocated) )
#define IFsrmPropertyBag_get_CreationTime(This,creationTime)( (This)->lpVtbl -> get_CreationTime(This,creationTime) )
#define IFsrmPropertyBag_get_LastAccessTime(This,lastAccessTime)( (This)->lpVtbl -> get_LastAccessTime(This,lastAccessTime) )
#define IFsrmPropertyBag_get_LastModificationTime(This,lastModificationTime)( (This)->lpVtbl -> get_LastModificationTime(This,lastModificationTime) )
#define IFsrmPropertyBag_get_Attributes(This,attributes)( (This)->lpVtbl -> get_Attributes(This,attributes) )
#define IFsrmPropertyBag_get_OwnerSid(This,ownerSid)( (This)->lpVtbl -> get_OwnerSid(This,ownerSid) )
#define IFsrmPropertyBag_get_FilePropertyNames(This,filePropertyNames)( (This)->lpVtbl -> get_FilePropertyNames(This,filePropertyNames) )
#define IFsrmPropertyBag_get_Messages(This,messages)( (This)->lpVtbl -> get_Messages(This,messages) )
#define IFsrmPropertyBag_get_PropertyBagFlags(This,flags)( (This)->lpVtbl -> get_PropertyBagFlags(This,flags) )
#define IFsrmPropertyBag_GetFileProperty(This,name,fileProperty)( (This)->lpVtbl -> GetFileProperty(This,name,fileProperty) )
#define IFsrmPropertyBag_SetFileProperty(This,name,value)( (This)->lpVtbl -> SetFileProperty(This,name,value) )
#define IFsrmPropertyBag_AddMessage(This,message)( (This)->lpVtbl -> AddMessage(This,message) )
#define IFsrmPropertyBag_GetFileStreamInterface(This,accessMode,interfaceType,pStreamInterface)( (This)->lpVtbl -> GetFileStreamInterface(This,accessMode,interfaceType,pStreamInterface) )
#endif
#endif
#ifndef __IFsrmPipelineModuleImplementation_INTERFACE_DEFINED__
#define __IFsrmPipelineModuleImplementation_INTERFACE_DEFINED__
extern const IID IID_IFsrmPipelineModuleImplementation;
typedef struct IFsrmPipelineModuleImplementationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFsrmPipelineModuleImplementation * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFsrmPipelineModuleImplementation * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFsrmPipelineModuleImplementation * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFsrmPipelineModuleImplementation * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFsrmPipelineModuleImplementation * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFsrmPipelineModuleImplementation * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFsrmPipelineModuleImplementation * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * OnLoad) (IFsrmPipelineModuleImplementation * This, IFsrmPipelineModuleDefinition * moduleDefinition, IFsrmPipelineModuleConnector ** moduleConnector);
	HRESULT(STDMETHODCALLTYPE * OnUnload) (IFsrmPipelineModuleImplementation * This);
	END_INTERFACE
}  IFsrmPipelineModuleImplementationVtbl;
interface IFsrmPipelineModuleImplementation
{
	CONST_VTBL struct IFsrmPipelineModuleImplementationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsrmPipelineModuleImplementation_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsrmPipelineModuleImplementation_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsrmPipelineModuleImplementation_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsrmPipelineModuleImplementation_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsrmPipelineModuleImplementation_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsrmPipelineModuleImplementation_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsrmPipelineModuleImplementation_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsrmPipelineModuleImplementation_OnLoad(This,moduleDefinition,moduleConnector)( (This)->lpVtbl -> OnLoad(This,moduleDefinition,moduleConnector) )
#define IFsrmPipelineModuleImplementation_OnUnload(This)( (This)->lpVtbl -> OnUnload(This) )
#endif
#endif
#ifndef __IFsrmClassifierModuleImplementation_INTERFACE_DEFINED__
#define __IFsrmClassifierModuleImplementation_INTERFACE_DEFINED__
#define FsrmNeverModified  ((ULONGLONG) 0x0000000000000000ui64)
#define FsrmAlwaysModified ((ULONGLONG) 0xFFFFFFFFFFFFFFFFui64)
extern const IID IID_IFsrmClassifierModuleImplementation;
typedef struct IFsrmClassifierModuleImplementationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFsrmClassifierModuleImplementation * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFsrmClassifierModuleImplementation * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFsrmClassifierModuleImplementation * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFsrmClassifierModuleImplementation * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFsrmClassifierModuleImplementation * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFsrmClassifierModuleImplementation * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFsrmClassifierModuleImplementation * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * OnLoad) (IFsrmClassifierModuleImplementation * This, IFsrmPipelineModuleDefinition * moduleDefinition, IFsrmPipelineModuleConnector ** moduleConnector);
	HRESULT(STDMETHODCALLTYPE * OnUnload) (IFsrmClassifierModuleImplementation * This);
	HRESULT(STDMETHODCALLTYPE * get_LastModified) (IFsrmClassifierModuleImplementation * This, VARIANT * lastModified);
	HRESULT(STDMETHODCALLTYPE * UseRulesAndDefinitions) (IFsrmClassifierModuleImplementation * This, IFsrmCollection * rules, IFsrmCollection * propertyDefinitions);
	HRESULT(STDMETHODCALLTYPE * OnBeginFile) (IFsrmClassifierModuleImplementation * This, IFsrmPropertyBag * propertyBag, SAFEARRAY * arrayRuleIds);
	HRESULT(STDMETHODCALLTYPE * DoesPropertyValueApply) (IFsrmClassifierModuleImplementation * This, BSTR property, BSTR value, VARIANT_BOOL * applyValue, FSRM_OBJECT_ID idRule, FSRM_OBJECT_ID idPropDef);
	HRESULT(STDMETHODCALLTYPE * GetPropertyValueToApply) (IFsrmClassifierModuleImplementation * This, BSTR property, BSTR * value, FSRM_OBJECT_ID idRule, FSRM_OBJECT_ID idPropDef);
	HRESULT(STDMETHODCALLTYPE * OnEndFile) (IFsrmClassifierModuleImplementation * This);
	END_INTERFACE
}  IFsrmClassifierModuleImplementationVtbl;
interface IFsrmClassifierModuleImplementation
{
	CONST_VTBL struct IFsrmClassifierModuleImplementationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsrmClassifierModuleImplementation_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsrmClassifierModuleImplementation_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsrmClassifierModuleImplementation_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsrmClassifierModuleImplementation_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsrmClassifierModuleImplementation_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsrmClassifierModuleImplementation_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsrmClassifierModuleImplementation_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsrmClassifierModuleImplementation_OnLoad(This,moduleDefinition,moduleConnector)( (This)->lpVtbl -> OnLoad(This,moduleDefinition,moduleConnector) )
#define IFsrmClassifierModuleImplementation_OnUnload(This)( (This)->lpVtbl -> OnUnload(This) )
#define IFsrmClassifierModuleImplementation_get_LastModified(This,lastModified)( (This)->lpVtbl -> get_LastModified(This,lastModified) )
#define IFsrmClassifierModuleImplementation_UseRulesAndDefinitions(This,rules,propertyDefinitions)( (This)->lpVtbl -> UseRulesAndDefinitions(This,rules,propertyDefinitions) )
#define IFsrmClassifierModuleImplementation_OnBeginFile(This,propertyBag,arrayRuleIds)( (This)->lpVtbl -> OnBeginFile(This,propertyBag,arrayRuleIds) )
#define IFsrmClassifierModuleImplementation_DoesPropertyValueApply(This,property,value,applyValue,idRule,idPropDef)( (This)->lpVtbl -> DoesPropertyValueApply(This,property,value,applyValue,idRule,idPropDef) )
#define IFsrmClassifierModuleImplementation_GetPropertyValueToApply(This,property,value,idRule,idPropDef)( (This)->lpVtbl -> GetPropertyValueToApply(This,property,value,idRule,idPropDef) )
#define IFsrmClassifierModuleImplementation_OnEndFile(This)( (This)->lpVtbl -> OnEndFile(This) )
#endif
#endif
#ifndef __IFsrmStorageModuleImplementation_INTERFACE_DEFINED__
#define __IFsrmStorageModuleImplementation_INTERFACE_DEFINED__
extern const IID IID_IFsrmStorageModuleImplementation;
typedef struct IFsrmStorageModuleImplementationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFsrmStorageModuleImplementation * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFsrmStorageModuleImplementation * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFsrmStorageModuleImplementation * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFsrmStorageModuleImplementation * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFsrmStorageModuleImplementation * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFsrmStorageModuleImplementation * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFsrmStorageModuleImplementation * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * OnLoad) (IFsrmStorageModuleImplementation * This, IFsrmPipelineModuleDefinition * moduleDefinition, IFsrmPipelineModuleConnector ** moduleConnector);
	HRESULT(STDMETHODCALLTYPE * OnUnload) (IFsrmStorageModuleImplementation * This);
	HRESULT(STDMETHODCALLTYPE * UseDefinitions) (IFsrmStorageModuleImplementation * This, IFsrmCollection * propertyDefinitions);
	HRESULT(STDMETHODCALLTYPE * LoadProperties) (IFsrmStorageModuleImplementation * This, IFsrmPropertyBag * propertyBag);
	HRESULT(STDMETHODCALLTYPE * SaveProperties) (IFsrmStorageModuleImplementation * This, IFsrmPropertyBag * propertyBag);
	END_INTERFACE
}  IFsrmStorageModuleImplementationVtbl;
interface IFsrmStorageModuleImplementation
{
	CONST_VTBL struct IFsrmStorageModuleImplementationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsrmStorageModuleImplementation_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsrmStorageModuleImplementation_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsrmStorageModuleImplementation_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsrmStorageModuleImplementation_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsrmStorageModuleImplementation_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsrmStorageModuleImplementation_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsrmStorageModuleImplementation_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsrmStorageModuleImplementation_OnLoad(This,moduleDefinition,moduleConnector)( (This)->lpVtbl -> OnLoad(This,moduleDefinition,moduleConnector) )
#define IFsrmStorageModuleImplementation_OnUnload(This)( (This)->lpVtbl -> OnUnload(This) )
#define IFsrmStorageModuleImplementation_UseDefinitions(This,propertyDefinitions)( (This)->lpVtbl -> UseDefinitions(This,propertyDefinitions) )
#define IFsrmStorageModuleImplementation_LoadProperties(This,propertyBag)( (This)->lpVtbl -> LoadProperties(This,propertyBag) )
#define IFsrmStorageModuleImplementation_SaveProperties(This,propertyBag)( (This)->lpVtbl -> SaveProperties(This,propertyBag) )
#endif
#endif
#ifndef __IFsrmPipelineModuleConnector_INTERFACE_DEFINED__
#define __IFsrmPipelineModuleConnector_INTERFACE_DEFINED__
extern const IID IID_IFsrmPipelineModuleConnector;
typedef struct IFsrmPipelineModuleConnectorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFsrmPipelineModuleConnector * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFsrmPipelineModuleConnector * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFsrmPipelineModuleConnector * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IFsrmPipelineModuleConnector * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IFsrmPipelineModuleConnector * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IFsrmPipelineModuleConnector * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IFsrmPipelineModuleConnector * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_ModuleImplementation) (IFsrmPipelineModuleConnector * This, IFsrmPipelineModuleImplementation ** pipelineModuleImplementation);
	HRESULT(STDMETHODCALLTYPE * get_ModuleName) (IFsrmPipelineModuleConnector * This, BSTR * userName);
	HRESULT(STDMETHODCALLTYPE * get_HostingUserAccount) (IFsrmPipelineModuleConnector * This, BSTR * userAccount);
	HRESULT(STDMETHODCALLTYPE * get_HostingProcessPid) (IFsrmPipelineModuleConnector * This, long *pid);
	HRESULT(STDMETHODCALLTYPE * Bind) (IFsrmPipelineModuleConnector * This, IFsrmPipelineModuleDefinition * moduleDefinition, IFsrmPipelineModuleImplementation * moduleImplementation);
	END_INTERFACE
}  IFsrmPipelineModuleConnectorVtbl;
interface IFsrmPipelineModuleConnector
{
	CONST_VTBL struct IFsrmPipelineModuleConnectorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFsrmPipelineModuleConnector_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFsrmPipelineModuleConnector_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IFsrmPipelineModuleConnector_Release(This)( (This)->lpVtbl -> Release(This) )
#define IFsrmPipelineModuleConnector_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IFsrmPipelineModuleConnector_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IFsrmPipelineModuleConnector_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IFsrmPipelineModuleConnector_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IFsrmPipelineModuleConnector_get_ModuleImplementation(This,pipelineModuleImplementation)( (This)->lpVtbl -> get_ModuleImplementation(This,pipelineModuleImplementation) )
#define IFsrmPipelineModuleConnector_get_ModuleName(This,userName)( (This)->lpVtbl -> get_ModuleName(This,userName) )
#define IFsrmPipelineModuleConnector_get_HostingUserAccount(This,userAccount)( (This)->lpVtbl -> get_HostingUserAccount(This,userAccount) )
#define IFsrmPipelineModuleConnector_get_HostingProcessPid(This,pid)( (This)->lpVtbl -> get_HostingProcessPid(This,pid) )
#define IFsrmPipelineModuleConnector_Bind(This,moduleDefinition,moduleImplementation)( (This)->lpVtbl -> Bind(This,moduleDefinition,moduleImplementation) )
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
