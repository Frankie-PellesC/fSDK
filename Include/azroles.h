/*+@@file@@----------------------------------------------------------------*//*!
 \file		azroles.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Jul  1 13:52:38 2016
 \date		Modified on Fri Jul  1 13:52:38 2016
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
#ifndef __azroles_h__
#define __azroles_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IAzAuthorizationStore_FWD_DEFINED__
#define __IAzAuthorizationStore_FWD_DEFINED__
typedef interface IAzAuthorizationStore IAzAuthorizationStore;
#endif
#ifndef __IAzAuthorizationStore2_FWD_DEFINED__
#define __IAzAuthorizationStore2_FWD_DEFINED__
typedef interface IAzAuthorizationStore2 IAzAuthorizationStore2;
#endif
#ifndef __IAzAuthorizationStore3_FWD_DEFINED__
#define __IAzAuthorizationStore3_FWD_DEFINED__
typedef interface IAzAuthorizationStore3 IAzAuthorizationStore3;
#endif
#ifndef __IAzApplication_FWD_DEFINED__
#define __IAzApplication_FWD_DEFINED__
typedef interface IAzApplication IAzApplication;
#endif
#ifndef __IAzApplication2_FWD_DEFINED__
#define __IAzApplication2_FWD_DEFINED__
typedef interface IAzApplication2 IAzApplication2;
#endif
#ifndef __IAzApplications_FWD_DEFINED__
#define __IAzApplications_FWD_DEFINED__
typedef interface IAzApplications IAzApplications;
#endif
#ifndef __IAzOperation_FWD_DEFINED__
#define __IAzOperation_FWD_DEFINED__
typedef interface IAzOperation IAzOperation;
#endif
#ifndef __IAzOperations_FWD_DEFINED__
#define __IAzOperations_FWD_DEFINED__
typedef interface IAzOperations IAzOperations;
#endif
#ifndef __IAzTask_FWD_DEFINED__
#define __IAzTask_FWD_DEFINED__
typedef interface IAzTask IAzTask;
#endif
#ifndef __IAzTasks_FWD_DEFINED__
#define __IAzTasks_FWD_DEFINED__
typedef interface IAzTasks IAzTasks;
#endif
#ifndef __IAzScope_FWD_DEFINED__
#define __IAzScope_FWD_DEFINED__
typedef interface IAzScope IAzScope;
#endif
#ifndef __IAzScopes_FWD_DEFINED__
#define __IAzScopes_FWD_DEFINED__
typedef interface IAzScopes IAzScopes;
#endif
#ifndef __IAzApplicationGroup_FWD_DEFINED__
#define __IAzApplicationGroup_FWD_DEFINED__
typedef interface IAzApplicationGroup IAzApplicationGroup;
#endif
#ifndef __IAzApplicationGroups_FWD_DEFINED__
#define __IAzApplicationGroups_FWD_DEFINED__
typedef interface IAzApplicationGroups IAzApplicationGroups;
#endif
#ifndef __IAzRole_FWD_DEFINED__
#define __IAzRole_FWD_DEFINED__
typedef interface IAzRole IAzRole;
#endif
#ifndef __IAzRoles_FWD_DEFINED__
#define __IAzRoles_FWD_DEFINED__
typedef interface IAzRoles IAzRoles;
#endif
#ifndef __IAzClientContext_FWD_DEFINED__
#define __IAzClientContext_FWD_DEFINED__
typedef interface IAzClientContext IAzClientContext;
#endif
#ifndef __IAzClientContext2_FWD_DEFINED__
#define __IAzClientContext2_FWD_DEFINED__
typedef interface IAzClientContext2 IAzClientContext2;
#endif
#ifndef __IAzBizRuleContext_FWD_DEFINED__
#define __IAzBizRuleContext_FWD_DEFINED__
typedef interface IAzBizRuleContext IAzBizRuleContext;
#endif
#ifndef __IAzBizRuleParameters_FWD_DEFINED__
#define __IAzBizRuleParameters_FWD_DEFINED__
typedef interface IAzBizRuleParameters IAzBizRuleParameters;
#endif
#ifndef __IAzBizRuleInterfaces_FWD_DEFINED__
#define __IAzBizRuleInterfaces_FWD_DEFINED__
typedef interface IAzBizRuleInterfaces IAzBizRuleInterfaces;
#endif
#ifndef __IAzClientContext3_FWD_DEFINED__
#define __IAzClientContext3_FWD_DEFINED__
typedef interface IAzClientContext3 IAzClientContext3;
#endif
#ifndef __IAzScope2_FWD_DEFINED__
#define __IAzScope2_FWD_DEFINED__
typedef interface IAzScope2 IAzScope2;
#endif
#ifndef __IAzApplication3_FWD_DEFINED__
#define __IAzApplication3_FWD_DEFINED__
typedef interface IAzApplication3 IAzApplication3;
#endif
#ifndef __IAzOperation2_FWD_DEFINED__
#define __IAzOperation2_FWD_DEFINED__
typedef interface IAzOperation2 IAzOperation2;
#endif
#ifndef __IAzRoleDefinitions_FWD_DEFINED__
#define __IAzRoleDefinitions_FWD_DEFINED__
typedef interface IAzRoleDefinitions IAzRoleDefinitions;
#endif
#ifndef __IAzRoleDefinition_FWD_DEFINED__
#define __IAzRoleDefinition_FWD_DEFINED__
typedef interface IAzRoleDefinition IAzRoleDefinition;
#endif
#ifndef __IAzRoleAssignment_FWD_DEFINED__
#define __IAzRoleAssignment_FWD_DEFINED__
typedef interface IAzRoleAssignment IAzRoleAssignment;
#endif
#ifndef __IAzRoleAssignments_FWD_DEFINED__
#define __IAzRoleAssignments_FWD_DEFINED__
typedef interface IAzRoleAssignments IAzRoleAssignments;
#endif
#ifndef __IAzPrincipalLocator_FWD_DEFINED__
#define __IAzPrincipalLocator_FWD_DEFINED__
typedef interface IAzPrincipalLocator IAzPrincipalLocator;
#endif
#ifndef __IAzNameResolver_FWD_DEFINED__
#define __IAzNameResolver_FWD_DEFINED__
typedef interface IAzNameResolver IAzNameResolver;
#endif
#ifndef __IAzObjectPicker_FWD_DEFINED__
#define __IAzObjectPicker_FWD_DEFINED__
typedef interface IAzObjectPicker IAzObjectPicker;
#endif
#ifndef __IAzApplicationGroup2_FWD_DEFINED__
#define __IAzApplicationGroup2_FWD_DEFINED__
typedef interface IAzApplicationGroup2 IAzApplicationGroup2;
#endif
#ifndef __IAzTask2_FWD_DEFINED__
#define __IAzTask2_FWD_DEFINED__
typedef interface IAzTask2 IAzTask2;
#endif
#ifndef __IAzAuthorizationStore_FWD_DEFINED__
#define __IAzAuthorizationStore_FWD_DEFINED__
typedef interface IAzAuthorizationStore IAzAuthorizationStore;
#endif
#ifndef __IAzAuthorizationStore2_FWD_DEFINED__
#define __IAzAuthorizationStore2_FWD_DEFINED__
typedef interface IAzAuthorizationStore2 IAzAuthorizationStore2;
#endif
#ifndef __IAzAuthorizationStore3_FWD_DEFINED__
#define __IAzAuthorizationStore3_FWD_DEFINED__
typedef interface IAzAuthorizationStore3 IAzAuthorizationStore3;
#endif
#ifndef __IAzApplication_FWD_DEFINED__
#define __IAzApplication_FWD_DEFINED__
typedef interface IAzApplication IAzApplication;
#endif
#ifndef __IAzApplication2_FWD_DEFINED__
#define __IAzApplication2_FWD_DEFINED__
typedef interface IAzApplication2 IAzApplication2;
#endif
#ifndef __IAzApplication3_FWD_DEFINED__
#define __IAzApplication3_FWD_DEFINED__
typedef interface IAzApplication3 IAzApplication3;
#endif
#ifndef __IAzApplications_FWD_DEFINED__
#define __IAzApplications_FWD_DEFINED__
typedef interface IAzApplications IAzApplications;
#endif
#ifndef __IAzOperation_FWD_DEFINED__
#define __IAzOperation_FWD_DEFINED__
typedef interface IAzOperation IAzOperation;
#endif
#ifndef __IAzOperation2_FWD_DEFINED__
#define __IAzOperation2_FWD_DEFINED__
typedef interface IAzOperation2 IAzOperation2;
#endif
#ifndef __IAzOperations_FWD_DEFINED__
#define __IAzOperations_FWD_DEFINED__
typedef interface IAzOperations IAzOperations;
#endif
#ifndef __IAzTask_FWD_DEFINED__
#define __IAzTask_FWD_DEFINED__
typedef interface IAzTask IAzTask;
#endif
#ifndef __IAzTask2_FWD_DEFINED__
#define __IAzTask2_FWD_DEFINED__
typedef interface IAzTask2 IAzTask2;
#endif
#ifndef __IAzTasks_FWD_DEFINED__
#define __IAzTasks_FWD_DEFINED__
typedef interface IAzTasks IAzTasks;
#endif
#ifndef __IAzRoleDefinition_FWD_DEFINED__
#define __IAzRoleDefinition_FWD_DEFINED__
typedef interface IAzRoleDefinition IAzRoleDefinition;
#endif
#ifndef __IAzRoleDefinitions_FWD_DEFINED__
#define __IAzRoleDefinitions_FWD_DEFINED__
typedef interface IAzRoleDefinitions IAzRoleDefinitions;
#endif
#ifndef __IAzApplicationGroup_FWD_DEFINED__
#define __IAzApplicationGroup_FWD_DEFINED__
typedef interface IAzApplicationGroup IAzApplicationGroup;
#endif
#ifndef __IAzApplicationGroup2_FWD_DEFINED__
#define __IAzApplicationGroup2_FWD_DEFINED__
typedef interface IAzApplicationGroup2 IAzApplicationGroup2;
#endif
#ifndef __IAzApplicationGroups_FWD_DEFINED__
#define __IAzApplicationGroups_FWD_DEFINED__
typedef interface IAzApplicationGroups IAzApplicationGroups;
#endif
#ifndef __IAzRole_FWD_DEFINED__
#define __IAzRole_FWD_DEFINED__
typedef interface IAzRole IAzRole;
#endif
#ifndef __IAzRoles_FWD_DEFINED__
#define __IAzRoles_FWD_DEFINED__
typedef interface IAzRoles IAzRoles;
#endif
#ifndef __IAzRoleAssignment_FWD_DEFINED__
#define __IAzRoleAssignment_FWD_DEFINED__
typedef interface IAzRoleAssignment IAzRoleAssignment;
#endif
#ifndef __IAzRoleAssignments_FWD_DEFINED__
#define __IAzRoleAssignments_FWD_DEFINED__
typedef interface IAzRoleAssignments IAzRoleAssignments;
#endif
#ifndef __IAzScope_FWD_DEFINED__
#define __IAzScope_FWD_DEFINED__
typedef interface IAzScope IAzScope;
#endif
#ifndef __IAzScope2_FWD_DEFINED__
#define __IAzScope2_FWD_DEFINED__
typedef interface IAzScope2 IAzScope2;
#endif
#ifndef __IAzScopes_FWD_DEFINED__
#define __IAzScopes_FWD_DEFINED__
typedef interface IAzScopes IAzScopes;
#endif
#ifndef __IAzClientContext_FWD_DEFINED__
#define __IAzClientContext_FWD_DEFINED__
typedef interface IAzClientContext IAzClientContext;
#endif
#ifndef __IAzClientContext2_FWD_DEFINED__
#define __IAzClientContext2_FWD_DEFINED__
typedef interface IAzClientContext2 IAzClientContext2;
#endif
#ifndef __IAzClientContext3_FWD_DEFINED__
#define __IAzClientContext3_FWD_DEFINED__
typedef interface IAzClientContext3 IAzClientContext3;
#endif
#ifndef __IAzBizRuleContext_FWD_DEFINED__
#define __IAzBizRuleContext_FWD_DEFINED__
typedef interface IAzBizRuleContext IAzBizRuleContext;
#endif
#ifndef __IAzBizRuleParameters_FWD_DEFINED__
#define __IAzBizRuleParameters_FWD_DEFINED__
typedef interface IAzBizRuleParameters IAzBizRuleParameters;
#endif
#ifndef __IAzBizRuleInterfaces_FWD_DEFINED__
#define __IAzBizRuleInterfaces_FWD_DEFINED__
typedef interface IAzBizRuleInterfaces IAzBizRuleInterfaces;
#endif
#ifndef __IAzPrincipalLocator_FWD_DEFINED__
#define __IAzPrincipalLocator_FWD_DEFINED__
typedef interface IAzPrincipalLocator IAzPrincipalLocator;
#endif
#ifndef __IAzNameResolver_FWD_DEFINED__
#define __IAzNameResolver_FWD_DEFINED__
typedef interface IAzNameResolver IAzNameResolver;
#endif
#ifndef __IAzObjectPicker_FWD_DEFINED__
#define __IAzObjectPicker_FWD_DEFINED__
typedef interface IAzObjectPicker IAzObjectPicker;
#endif
#ifndef __AzAuthorizationStore_FWD_DEFINED__
#define __AzAuthorizationStore_FWD_DEFINED__
typedef struct AzAuthorizationStore AzAuthorizationStore;
#endif
#ifndef __AzBizRuleContext_FWD_DEFINED__
#define __AzBizRuleContext_FWD_DEFINED__
typedef struct AzBizRuleContext AzBizRuleContext;
#endif
#ifndef __AzPrincipalLocator_FWD_DEFINED__
#define __AzPrincipalLocator_FWD_DEFINED__
typedef struct AzPrincipalLocator AzPrincipalLocator;
#endif
#include "oaidl.h"
#include "ocidl.h"
DEFINE_GUID(IID_IAzAuthorizationStore, 0xedbd9ca9, 0x9b82, 0x4f6a, 0x9e, 0x8b, 0x98, 0x30, 0x1e, 0x45, 0x0f, 0x14);
DEFINE_GUID(IID_IAzAuthorizationStore2, 0xb11e5584, 0xd577, 0x4273, 0xb6, 0xc5, 0x9, 0x73, 0xe0, 0xf8, 0xe8, 0xd);
DEFINE_GUID(IID_IAzAuthorizationStore3, 0xabc08425, 0x0c86, 0x4fa0, 0x9b, 0xe3, 0x71, 0x89, 0x95, 0x6c, 0x92, 0x6e);
DEFINE_GUID(CLSID_AzAuthorizationStore, 0xb2bcff59, 0xa757, 0x4b0b, 0xa1, 0xbc, 0xea, 0x69, 0x98, 0x1d, 0xa6, 0x9e);
DEFINE_GUID(IID_IAzBizRuleContext, 0xe192f17d, 0xd59f, 0x455e, 0xa1, 0x52, 0x94, 0x03, 0x16, 0xcd, 0x77, 0xb2);
DEFINE_GUID(CLSID_AzBizRuleContext, 0x5c2dc96f, 0x8d51, 0x434b, 0xb3, 0x3c, 0x37, 0x9b, 0xcc, 0xae, 0x77, 0xc3);
DEFINE_GUID(CLSID_AzPrincipalLocator, 0x483afb5d, 0x70df, 0x4e16, 0xab, 0xdc, 0xa1, 0xde, 0x4d, 0x01, 0x5a, 0x3e);
DEFINE_GUID(IID_IAzPrincipalLocator, 0xe5c3507d, 0xad6a, 0x4992, 0x9c, 0x7f, 0x74, 0xab, 0x48, 0x0b, 0x44, 0xcc);
DEFINE_GUID(IID_IAzNameResolver, 0x504d0f15, 0x73e2, 0x43df, 0xa8, 0x70, 0xa6, 0x4f, 0x40, 0x71, 0x4f, 0x53);
DEFINE_GUID(IID_IAzObjectPicker, 0x63130a48, 0x699a, 0x42d8, 0xbf, 0x01, 0xc6, 0x2a, 0xc3, 0xfb, 0x79, 0xf9);
DEFINE_GUID(IID_IAzApplication3, 0x181c845e, 0x7196, 0x4a7d, 0xac, 0x2e, 0x02, 0x0c, 0x0b, 0xb7, 0xa3, 0x03);
extern RPC_IF_HANDLE __MIDL_itf_azroles_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_azroles_0000_0000_v0_0_s_ifspec;
#ifndef __IAzAuthorizationStore_INTERFACE_DEFINED__
#define __IAzAuthorizationStore_INTERFACE_DEFINED__
extern const IID IID_IAzAuthorizationStore;
typedef struct IAzAuthorizationStoreVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAzAuthorizationStore * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAzAuthorizationStore * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAzAuthorizationStore * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAzAuthorizationStore * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAzAuthorizationStore * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAzAuthorizationStore * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAzAuthorizationStore * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IAzAuthorizationStore * This, BSTR * pbstrDescription);
	HRESULT(STDMETHODCALLTYPE * put_Description) (IAzAuthorizationStore * This, BSTR bstrDescription);
	HRESULT(STDMETHODCALLTYPE * get_ApplicationData) (IAzAuthorizationStore * This, BSTR * pbstrApplicationData);
	HRESULT(STDMETHODCALLTYPE * put_ApplicationData) (IAzAuthorizationStore * This, BSTR bstrApplicationData);
	HRESULT(STDMETHODCALLTYPE * get_DomainTimeout) (IAzAuthorizationStore * This, LONG * plProp);
	HRESULT(STDMETHODCALLTYPE * put_DomainTimeout) (IAzAuthorizationStore * This, LONG lProp);
	HRESULT(STDMETHODCALLTYPE * get_ScriptEngineTimeout) (IAzAuthorizationStore * This, LONG * plProp);
	HRESULT(STDMETHODCALLTYPE * put_ScriptEngineTimeout) (IAzAuthorizationStore * This, LONG lProp);
	HRESULT(STDMETHODCALLTYPE * get_MaxScriptEngines) (IAzAuthorizationStore * This, LONG * plProp);
	HRESULT(STDMETHODCALLTYPE * put_MaxScriptEngines) (IAzAuthorizationStore * This, LONG lProp);
	HRESULT(STDMETHODCALLTYPE * get_GenerateAudits) (IAzAuthorizationStore * This, BOOL * pbProp);
	HRESULT(STDMETHODCALLTYPE * put_GenerateAudits) (IAzAuthorizationStore * This, BOOL bProp);
	HRESULT(STDMETHODCALLTYPE * get_Writable) (IAzAuthorizationStore * This, BOOL * pfProp);
	HRESULT(STDMETHODCALLTYPE * GetProperty) (IAzAuthorizationStore * This, LONG lPropId, VARIANT varReserved, VARIANT * pvarProp);
	HRESULT(STDMETHODCALLTYPE * SetProperty) (IAzAuthorizationStore * This, LONG lPropId, VARIANT varProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * AddPropertyItem) (IAzAuthorizationStore * This, LONG lPropId, VARIANT varProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeletePropertyItem) (IAzAuthorizationStore * This, LONG lPropId, VARIANT varProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_PolicyAdministrators) (IAzAuthorizationStore * This, VARIANT * pvarAdmins);
	HRESULT(STDMETHODCALLTYPE * get_PolicyReaders) (IAzAuthorizationStore * This, VARIANT * pvarReaders);
	HRESULT(STDMETHODCALLTYPE * AddPolicyAdministrator) (IAzAuthorizationStore * This, BSTR bstrAdmin, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeletePolicyAdministrator) (IAzAuthorizationStore * This, BSTR bstrAdmin, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * AddPolicyReader) (IAzAuthorizationStore * This, BSTR bstrReader, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeletePolicyReader) (IAzAuthorizationStore * This, BSTR bstrReader, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IAzAuthorizationStore * This, LONG lFlags, BSTR bstrPolicyURL, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * UpdateCache) (IAzAuthorizationStore * This, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * Delete) (IAzAuthorizationStore * This, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_Applications) (IAzAuthorizationStore * This, IAzApplications ** ppAppCollection);
	HRESULT(STDMETHODCALLTYPE * OpenApplication) (IAzAuthorizationStore * This, BSTR bstrApplicationName, VARIANT varReserved, IAzApplication ** ppApplication);
	HRESULT(STDMETHODCALLTYPE * CreateApplication) (IAzAuthorizationStore * This, BSTR bstrApplicationName, VARIANT varReserved, IAzApplication ** ppApplication);
	HRESULT(STDMETHODCALLTYPE * DeleteApplication) (IAzAuthorizationStore * This, BSTR bstrApplicationName, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_ApplicationGroups) (IAzAuthorizationStore * This, IAzApplicationGroups ** ppGroupCollection);
	HRESULT(STDMETHODCALLTYPE * CreateApplicationGroup) (IAzAuthorizationStore * This, BSTR bstrGroupName, VARIANT varReserved, IAzApplicationGroup ** ppGroup);
	HRESULT(STDMETHODCALLTYPE * OpenApplicationGroup) (IAzAuthorizationStore * This, BSTR bstrGroupName, VARIANT varReserved, IAzApplicationGroup ** ppGroup);
	HRESULT(STDMETHODCALLTYPE * DeleteApplicationGroup) (IAzAuthorizationStore * This, BSTR bstrGroupName, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * Submit) (IAzAuthorizationStore * This, LONG lFlags, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_DelegatedPolicyUsers) (IAzAuthorizationStore * This, VARIANT * pvarDelegatedPolicyUsers);
	HRESULT(STDMETHODCALLTYPE * AddDelegatedPolicyUser) (IAzAuthorizationStore * This, BSTR bstrDelegatedPolicyUser, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeleteDelegatedPolicyUser) (IAzAuthorizationStore * This, BSTR bstrDelegatedPolicyUser, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_TargetMachine) (IAzAuthorizationStore * This, BSTR * pbstrTargetMachine);
	HRESULT(STDMETHODCALLTYPE * get_ApplyStoreSacl) (IAzAuthorizationStore * This, BOOL * pbApplyStoreSacl);
	HRESULT(STDMETHODCALLTYPE * put_ApplyStoreSacl) (IAzAuthorizationStore * This, BOOL bApplyStoreSacl);
	HRESULT(STDMETHODCALLTYPE * get_PolicyAdministratorsName) (IAzAuthorizationStore * This, VARIANT * pvarAdmins);
	HRESULT(STDMETHODCALLTYPE * get_PolicyReadersName) (IAzAuthorizationStore * This, VARIANT * pvarReaders);
	HRESULT(STDMETHODCALLTYPE * AddPolicyAdministratorName) (IAzAuthorizationStore * This, BSTR bstrAdmin, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeletePolicyAdministratorName) (IAzAuthorizationStore * This, BSTR bstrAdmin, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * AddPolicyReaderName) (IAzAuthorizationStore * This, BSTR bstrReader, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeletePolicyReaderName) (IAzAuthorizationStore * This, BSTR bstrReader, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_DelegatedPolicyUsersName) (IAzAuthorizationStore * This, VARIANT * pvarDelegatedPolicyUsers);
	HRESULT(STDMETHODCALLTYPE * AddDelegatedPolicyUserName) (IAzAuthorizationStore * This, BSTR bstrDelegatedPolicyUser, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeleteDelegatedPolicyUserName) (IAzAuthorizationStore * This, BSTR bstrDelegatedPolicyUser, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * CloseApplication) (IAzAuthorizationStore * This, BSTR bstrApplicationName, LONG lFlag);
	END_INTERFACE
}  IAzAuthorizationStoreVtbl;
interface IAzAuthorizationStore
{
	CONST_VTBL struct IAzAuthorizationStoreVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAzAuthorizationStore_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAzAuthorizationStore_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAzAuthorizationStore_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAzAuthorizationStore_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAzAuthorizationStore_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAzAuthorizationStore_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAzAuthorizationStore_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAzAuthorizationStore_get_Description(This,pbstrDescription)    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) )
#define IAzAuthorizationStore_put_Description(This,bstrDescription)    ( (This)->lpVtbl -> put_Description(This,bstrDescription) )
#define IAzAuthorizationStore_get_ApplicationData(This,pbstrApplicationData)    ( (This)->lpVtbl -> get_ApplicationData(This,pbstrApplicationData) )
#define IAzAuthorizationStore_put_ApplicationData(This,bstrApplicationData)    ( (This)->lpVtbl -> put_ApplicationData(This,bstrApplicationData) )
#define IAzAuthorizationStore_get_DomainTimeout(This,plProp)    ( (This)->lpVtbl -> get_DomainTimeout(This,plProp) )
#define IAzAuthorizationStore_put_DomainTimeout(This,lProp)    ( (This)->lpVtbl -> put_DomainTimeout(This,lProp) )
#define IAzAuthorizationStore_get_ScriptEngineTimeout(This,plProp)    ( (This)->lpVtbl -> get_ScriptEngineTimeout(This,plProp) )
#define IAzAuthorizationStore_put_ScriptEngineTimeout(This,lProp)    ( (This)->lpVtbl -> put_ScriptEngineTimeout(This,lProp) )
#define IAzAuthorizationStore_get_MaxScriptEngines(This,plProp)    ( (This)->lpVtbl -> get_MaxScriptEngines(This,plProp) )
#define IAzAuthorizationStore_put_MaxScriptEngines(This,lProp)    ( (This)->lpVtbl -> put_MaxScriptEngines(This,lProp) )
#define IAzAuthorizationStore_get_GenerateAudits(This,pbProp)    ( (This)->lpVtbl -> get_GenerateAudits(This,pbProp) )
#define IAzAuthorizationStore_put_GenerateAudits(This,bProp)    ( (This)->lpVtbl -> put_GenerateAudits(This,bProp) )
#define IAzAuthorizationStore_get_Writable(This,pfProp)    ( (This)->lpVtbl -> get_Writable(This,pfProp) )
#define IAzAuthorizationStore_GetProperty(This,lPropId,varReserved,pvarProp)    ( (This)->lpVtbl -> GetProperty(This,lPropId,varReserved,pvarProp) )
#define IAzAuthorizationStore_SetProperty(This,lPropId,varProp,varReserved)    ( (This)->lpVtbl -> SetProperty(This,lPropId,varProp,varReserved) )
#define IAzAuthorizationStore_AddPropertyItem(This,lPropId,varProp,varReserved)    ( (This)->lpVtbl -> AddPropertyItem(This,lPropId,varProp,varReserved) )
#define IAzAuthorizationStore_DeletePropertyItem(This,lPropId,varProp,varReserved)    ( (This)->lpVtbl -> DeletePropertyItem(This,lPropId,varProp,varReserved) )
#define IAzAuthorizationStore_get_PolicyAdministrators(This,pvarAdmins)    ( (This)->lpVtbl -> get_PolicyAdministrators(This,pvarAdmins) )
#define IAzAuthorizationStore_get_PolicyReaders(This,pvarReaders)    ( (This)->lpVtbl -> get_PolicyReaders(This,pvarReaders) )
#define IAzAuthorizationStore_AddPolicyAdministrator(This,bstrAdmin,varReserved)    ( (This)->lpVtbl -> AddPolicyAdministrator(This,bstrAdmin,varReserved) )
#define IAzAuthorizationStore_DeletePolicyAdministrator(This,bstrAdmin,varReserved)    ( (This)->lpVtbl -> DeletePolicyAdministrator(This,bstrAdmin,varReserved) )
#define IAzAuthorizationStore_AddPolicyReader(This,bstrReader,varReserved)    ( (This)->lpVtbl -> AddPolicyReader(This,bstrReader,varReserved) )
#define IAzAuthorizationStore_DeletePolicyReader(This,bstrReader,varReserved)    ( (This)->lpVtbl -> DeletePolicyReader(This,bstrReader,varReserved) )
#define IAzAuthorizationStore_Initialize(This,lFlags,bstrPolicyURL,varReserved)    ( (This)->lpVtbl -> Initialize(This,lFlags,bstrPolicyURL,varReserved) )
#define IAzAuthorizationStore_UpdateCache(This,varReserved)    ( (This)->lpVtbl -> UpdateCache(This,varReserved) )
#define IAzAuthorizationStore_Delete(This,varReserved)    ( (This)->lpVtbl -> Delete(This,varReserved) )
#define IAzAuthorizationStore_get_Applications(This,ppAppCollection)    ( (This)->lpVtbl -> get_Applications(This,ppAppCollection) )
#define IAzAuthorizationStore_OpenApplication(This,bstrApplicationName,varReserved,ppApplication)    ( (This)->lpVtbl -> OpenApplication(This,bstrApplicationName,varReserved,ppApplication) )
#define IAzAuthorizationStore_CreateApplication(This,bstrApplicationName,varReserved,ppApplication)    ( (This)->lpVtbl -> CreateApplication(This,bstrApplicationName,varReserved,ppApplication) )
#define IAzAuthorizationStore_DeleteApplication(This,bstrApplicationName,varReserved)    ( (This)->lpVtbl -> DeleteApplication(This,bstrApplicationName,varReserved) )
#define IAzAuthorizationStore_get_ApplicationGroups(This,ppGroupCollection)    ( (This)->lpVtbl -> get_ApplicationGroups(This,ppGroupCollection) )
#define IAzAuthorizationStore_CreateApplicationGroup(This,bstrGroupName,varReserved,ppGroup)    ( (This)->lpVtbl -> CreateApplicationGroup(This,bstrGroupName,varReserved,ppGroup) )
#define IAzAuthorizationStore_OpenApplicationGroup(This,bstrGroupName,varReserved,ppGroup)    ( (This)->lpVtbl -> OpenApplicationGroup(This,bstrGroupName,varReserved,ppGroup) )
#define IAzAuthorizationStore_DeleteApplicationGroup(This,bstrGroupName,varReserved)    ( (This)->lpVtbl -> DeleteApplicationGroup(This,bstrGroupName,varReserved) )
#define IAzAuthorizationStore_Submit(This,lFlags,varReserved)    ( (This)->lpVtbl -> Submit(This,lFlags,varReserved) )
#define IAzAuthorizationStore_get_DelegatedPolicyUsers(This,pvarDelegatedPolicyUsers)    ( (This)->lpVtbl -> get_DelegatedPolicyUsers(This,pvarDelegatedPolicyUsers) )
#define IAzAuthorizationStore_AddDelegatedPolicyUser(This,bstrDelegatedPolicyUser,varReserved)    ( (This)->lpVtbl -> AddDelegatedPolicyUser(This,bstrDelegatedPolicyUser,varReserved) )
#define IAzAuthorizationStore_DeleteDelegatedPolicyUser(This,bstrDelegatedPolicyUser,varReserved)    ( (This)->lpVtbl -> DeleteDelegatedPolicyUser(This,bstrDelegatedPolicyUser,varReserved) )
#define IAzAuthorizationStore_get_TargetMachine(This,pbstrTargetMachine)    ( (This)->lpVtbl -> get_TargetMachine(This,pbstrTargetMachine) )
#define IAzAuthorizationStore_get_ApplyStoreSacl(This,pbApplyStoreSacl)    ( (This)->lpVtbl -> get_ApplyStoreSacl(This,pbApplyStoreSacl) )
#define IAzAuthorizationStore_put_ApplyStoreSacl(This,bApplyStoreSacl)    ( (This)->lpVtbl -> put_ApplyStoreSacl(This,bApplyStoreSacl) )
#define IAzAuthorizationStore_get_PolicyAdministratorsName(This,pvarAdmins)    ( (This)->lpVtbl -> get_PolicyAdministratorsName(This,pvarAdmins) )
#define IAzAuthorizationStore_get_PolicyReadersName(This,pvarReaders)    ( (This)->lpVtbl -> get_PolicyReadersName(This,pvarReaders) )
#define IAzAuthorizationStore_AddPolicyAdministratorName(This,bstrAdmin,varReserved)    ( (This)->lpVtbl -> AddPolicyAdministratorName(This,bstrAdmin,varReserved) )
#define IAzAuthorizationStore_DeletePolicyAdministratorName(This,bstrAdmin,varReserved)    ( (This)->lpVtbl -> DeletePolicyAdministratorName(This,bstrAdmin,varReserved) )
#define IAzAuthorizationStore_AddPolicyReaderName(This,bstrReader,varReserved)    ( (This)->lpVtbl -> AddPolicyReaderName(This,bstrReader,varReserved) )
#define IAzAuthorizationStore_DeletePolicyReaderName(This,bstrReader,varReserved)    ( (This)->lpVtbl -> DeletePolicyReaderName(This,bstrReader,varReserved) )
#define IAzAuthorizationStore_get_DelegatedPolicyUsersName(This,pvarDelegatedPolicyUsers)    ( (This)->lpVtbl -> get_DelegatedPolicyUsersName(This,pvarDelegatedPolicyUsers) )
#define IAzAuthorizationStore_AddDelegatedPolicyUserName(This,bstrDelegatedPolicyUser,varReserved)    ( (This)->lpVtbl -> AddDelegatedPolicyUserName(This,bstrDelegatedPolicyUser,varReserved) )
#define IAzAuthorizationStore_DeleteDelegatedPolicyUserName(This,bstrDelegatedPolicyUser,varReserved)    ( (This)->lpVtbl -> DeleteDelegatedPolicyUserName(This,bstrDelegatedPolicyUser,varReserved) )
#define IAzAuthorizationStore_CloseApplication(This,bstrApplicationName,lFlag)    ( (This)->lpVtbl -> CloseApplication(This,bstrApplicationName,lFlag) )
#endif
#endif
#ifndef __IAzAuthorizationStore2_INTERFACE_DEFINED__
#define __IAzAuthorizationStore2_INTERFACE_DEFINED__
extern const IID IID_IAzAuthorizationStore2;
typedef struct IAzAuthorizationStore2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAzAuthorizationStore2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAzAuthorizationStore2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAzAuthorizationStore2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAzAuthorizationStore2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAzAuthorizationStore2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAzAuthorizationStore2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAzAuthorizationStore2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IAzAuthorizationStore2 * This, BSTR * pbstrDescription);
	HRESULT(STDMETHODCALLTYPE * put_Description) (IAzAuthorizationStore2 * This, BSTR bstrDescription);
	HRESULT(STDMETHODCALLTYPE * get_ApplicationData) (IAzAuthorizationStore2 * This, BSTR * pbstrApplicationData);
	HRESULT(STDMETHODCALLTYPE * put_ApplicationData) (IAzAuthorizationStore2 * This, BSTR bstrApplicationData);
	HRESULT(STDMETHODCALLTYPE * get_DomainTimeout) (IAzAuthorizationStore2 * This, LONG * plProp);
	HRESULT(STDMETHODCALLTYPE * put_DomainTimeout) (IAzAuthorizationStore2 * This, LONG lProp);
	HRESULT(STDMETHODCALLTYPE * get_ScriptEngineTimeout) (IAzAuthorizationStore2 * This, LONG * plProp);
	HRESULT(STDMETHODCALLTYPE * put_ScriptEngineTimeout) (IAzAuthorizationStore2 * This, LONG lProp);
	HRESULT(STDMETHODCALLTYPE * get_MaxScriptEngines) (IAzAuthorizationStore2 * This, LONG * plProp);
	HRESULT(STDMETHODCALLTYPE * put_MaxScriptEngines) (IAzAuthorizationStore2 * This, LONG lProp);
	HRESULT(STDMETHODCALLTYPE * get_GenerateAudits) (IAzAuthorizationStore2 * This, BOOL * pbProp);
	HRESULT(STDMETHODCALLTYPE * put_GenerateAudits) (IAzAuthorizationStore2 * This, BOOL bProp);
	HRESULT(STDMETHODCALLTYPE * get_Writable) (IAzAuthorizationStore2 * This, BOOL * pfProp);
	HRESULT(STDMETHODCALLTYPE * GetProperty) (IAzAuthorizationStore2 * This, LONG lPropId, VARIANT varReserved, VARIANT * pvarProp);
	HRESULT(STDMETHODCALLTYPE * SetProperty) (IAzAuthorizationStore2 * This, LONG lPropId, VARIANT varProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * AddPropertyItem) (IAzAuthorizationStore2 * This, LONG lPropId, VARIANT varProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeletePropertyItem) (IAzAuthorizationStore2 * This, LONG lPropId, VARIANT varProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_PolicyAdministrators) (IAzAuthorizationStore2 * This, VARIANT * pvarAdmins);
	HRESULT(STDMETHODCALLTYPE * get_PolicyReaders) (IAzAuthorizationStore2 * This, VARIANT * pvarReaders);
	HRESULT(STDMETHODCALLTYPE * AddPolicyAdministrator) (IAzAuthorizationStore2 * This, BSTR bstrAdmin, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeletePolicyAdministrator) (IAzAuthorizationStore2 * This, BSTR bstrAdmin, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * AddPolicyReader) (IAzAuthorizationStore2 * This, BSTR bstrReader, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeletePolicyReader) (IAzAuthorizationStore2 * This, BSTR bstrReader, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IAzAuthorizationStore2 * This, LONG lFlags, BSTR bstrPolicyURL, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * UpdateCache) (IAzAuthorizationStore2 * This, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * Delete) (IAzAuthorizationStore2 * This, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_Applications) (IAzAuthorizationStore2 * This, IAzApplications ** ppAppCollection);
	HRESULT(STDMETHODCALLTYPE * OpenApplication) (IAzAuthorizationStore2 * This, BSTR bstrApplicationName, VARIANT varReserved, IAzApplication ** ppApplication);
	HRESULT(STDMETHODCALLTYPE * CreateApplication) (IAzAuthorizationStore2 * This, BSTR bstrApplicationName, VARIANT varReserved, IAzApplication ** ppApplication);
	HRESULT(STDMETHODCALLTYPE * DeleteApplication) (IAzAuthorizationStore2 * This, BSTR bstrApplicationName, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_ApplicationGroups) (IAzAuthorizationStore2 * This, IAzApplicationGroups ** ppGroupCollection);
	HRESULT(STDMETHODCALLTYPE * CreateApplicationGroup) (IAzAuthorizationStore2 * This, BSTR bstrGroupName, VARIANT varReserved, IAzApplicationGroup ** ppGroup);
	HRESULT(STDMETHODCALLTYPE * OpenApplicationGroup) (IAzAuthorizationStore2 * This, BSTR bstrGroupName, VARIANT varReserved, IAzApplicationGroup ** ppGroup);
	HRESULT(STDMETHODCALLTYPE * DeleteApplicationGroup) (IAzAuthorizationStore2 * This, BSTR bstrGroupName, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * Submit) (IAzAuthorizationStore2 * This, LONG lFlags, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_DelegatedPolicyUsers) (IAzAuthorizationStore2 * This, VARIANT * pvarDelegatedPolicyUsers);
	HRESULT(STDMETHODCALLTYPE * AddDelegatedPolicyUser) (IAzAuthorizationStore2 * This, BSTR bstrDelegatedPolicyUser, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeleteDelegatedPolicyUser) (IAzAuthorizationStore2 * This, BSTR bstrDelegatedPolicyUser, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_TargetMachine) (IAzAuthorizationStore2 * This, BSTR * pbstrTargetMachine);
	HRESULT(STDMETHODCALLTYPE * get_ApplyStoreSacl) (IAzAuthorizationStore2 * This, BOOL * pbApplyStoreSacl);
	HRESULT(STDMETHODCALLTYPE * put_ApplyStoreSacl) (IAzAuthorizationStore2 * This, BOOL bApplyStoreSacl);
	HRESULT(STDMETHODCALLTYPE * get_PolicyAdministratorsName) (IAzAuthorizationStore2 * This, VARIANT * pvarAdmins);
	HRESULT(STDMETHODCALLTYPE * get_PolicyReadersName) (IAzAuthorizationStore2 * This, VARIANT * pvarReaders);
	HRESULT(STDMETHODCALLTYPE * AddPolicyAdministratorName) (IAzAuthorizationStore2 * This, BSTR bstrAdmin, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeletePolicyAdministratorName) (IAzAuthorizationStore2 * This, BSTR bstrAdmin, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * AddPolicyReaderName) (IAzAuthorizationStore2 * This, BSTR bstrReader, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeletePolicyReaderName) (IAzAuthorizationStore2 * This, BSTR bstrReader, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_DelegatedPolicyUsersName) (IAzAuthorizationStore2 * This, VARIANT * pvarDelegatedPolicyUsers);
	HRESULT(STDMETHODCALLTYPE * AddDelegatedPolicyUserName) (IAzAuthorizationStore2 * This, BSTR bstrDelegatedPolicyUser, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeleteDelegatedPolicyUserName) (IAzAuthorizationStore2 * This, BSTR bstrDelegatedPolicyUser, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * CloseApplication) (IAzAuthorizationStore2 * This, BSTR bstrApplicationName, LONG lFlag);
	HRESULT(STDMETHODCALLTYPE * OpenApplication2) (IAzAuthorizationStore2 * This, BSTR bstrApplicationName, VARIANT varReserved, IAzApplication2 ** ppApplication);
	HRESULT(STDMETHODCALLTYPE * CreateApplication2) (IAzAuthorizationStore2 * This, BSTR bstrApplicationName, VARIANT varReserved, IAzApplication2 ** ppApplication);
	END_INTERFACE
}  IAzAuthorizationStore2Vtbl;
interface IAzAuthorizationStore2
{
	CONST_VTBL struct IAzAuthorizationStore2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAzAuthorizationStore2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAzAuthorizationStore2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAzAuthorizationStore2_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAzAuthorizationStore2_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAzAuthorizationStore2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAzAuthorizationStore2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAzAuthorizationStore2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAzAuthorizationStore2_get_Description(This,pbstrDescription)    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) )
#define IAzAuthorizationStore2_put_Description(This,bstrDescription)    ( (This)->lpVtbl -> put_Description(This,bstrDescription) )
#define IAzAuthorizationStore2_get_ApplicationData(This,pbstrApplicationData)    ( (This)->lpVtbl -> get_ApplicationData(This,pbstrApplicationData) )
#define IAzAuthorizationStore2_put_ApplicationData(This,bstrApplicationData)    ( (This)->lpVtbl -> put_ApplicationData(This,bstrApplicationData) )
#define IAzAuthorizationStore2_get_DomainTimeout(This,plProp)    ( (This)->lpVtbl -> get_DomainTimeout(This,plProp) )
#define IAzAuthorizationStore2_put_DomainTimeout(This,lProp)    ( (This)->lpVtbl -> put_DomainTimeout(This,lProp) )
#define IAzAuthorizationStore2_get_ScriptEngineTimeout(This,plProp)    ( (This)->lpVtbl -> get_ScriptEngineTimeout(This,plProp) )
#define IAzAuthorizationStore2_put_ScriptEngineTimeout(This,lProp)    ( (This)->lpVtbl -> put_ScriptEngineTimeout(This,lProp) )
#define IAzAuthorizationStore2_get_MaxScriptEngines(This,plProp)    ( (This)->lpVtbl -> get_MaxScriptEngines(This,plProp) )
#define IAzAuthorizationStore2_put_MaxScriptEngines(This,lProp)    ( (This)->lpVtbl -> put_MaxScriptEngines(This,lProp) )
#define IAzAuthorizationStore2_get_GenerateAudits(This,pbProp)    ( (This)->lpVtbl -> get_GenerateAudits(This,pbProp) )
#define IAzAuthorizationStore2_put_GenerateAudits(This,bProp)    ( (This)->lpVtbl -> put_GenerateAudits(This,bProp) )
#define IAzAuthorizationStore2_get_Writable(This,pfProp)    ( (This)->lpVtbl -> get_Writable(This,pfProp) )
#define IAzAuthorizationStore2_GetProperty(This,lPropId,varReserved,pvarProp)    ( (This)->lpVtbl -> GetProperty(This,lPropId,varReserved,pvarProp) )
#define IAzAuthorizationStore2_SetProperty(This,lPropId,varProp,varReserved)    ( (This)->lpVtbl -> SetProperty(This,lPropId,varProp,varReserved) )
#define IAzAuthorizationStore2_AddPropertyItem(This,lPropId,varProp,varReserved)    ( (This)->lpVtbl -> AddPropertyItem(This,lPropId,varProp,varReserved) )
#define IAzAuthorizationStore2_DeletePropertyItem(This,lPropId,varProp,varReserved)    ( (This)->lpVtbl -> DeletePropertyItem(This,lPropId,varProp,varReserved) )
#define IAzAuthorizationStore2_get_PolicyAdministrators(This,pvarAdmins)    ( (This)->lpVtbl -> get_PolicyAdministrators(This,pvarAdmins) )
#define IAzAuthorizationStore2_get_PolicyReaders(This,pvarReaders)    ( (This)->lpVtbl -> get_PolicyReaders(This,pvarReaders) )
#define IAzAuthorizationStore2_AddPolicyAdministrator(This,bstrAdmin,varReserved)    ( (This)->lpVtbl -> AddPolicyAdministrator(This,bstrAdmin,varReserved) )
#define IAzAuthorizationStore2_DeletePolicyAdministrator(This,bstrAdmin,varReserved)    ( (This)->lpVtbl -> DeletePolicyAdministrator(This,bstrAdmin,varReserved) )
#define IAzAuthorizationStore2_AddPolicyReader(This,bstrReader,varReserved)    ( (This)->lpVtbl -> AddPolicyReader(This,bstrReader,varReserved) )
#define IAzAuthorizationStore2_DeletePolicyReader(This,bstrReader,varReserved)    ( (This)->lpVtbl -> DeletePolicyReader(This,bstrReader,varReserved) )
#define IAzAuthorizationStore2_Initialize(This,lFlags,bstrPolicyURL,varReserved)    ( (This)->lpVtbl -> Initialize(This,lFlags,bstrPolicyURL,varReserved) )
#define IAzAuthorizationStore2_UpdateCache(This,varReserved)    ( (This)->lpVtbl -> UpdateCache(This,varReserved) )
#define IAzAuthorizationStore2_Delete(This,varReserved)    ( (This)->lpVtbl -> Delete(This,varReserved) )
#define IAzAuthorizationStore2_get_Applications(This,ppAppCollection)    ( (This)->lpVtbl -> get_Applications(This,ppAppCollection) )
#define IAzAuthorizationStore2_OpenApplication(This,bstrApplicationName,varReserved,ppApplication)    ( (This)->lpVtbl -> OpenApplication(This,bstrApplicationName,varReserved,ppApplication) )
#define IAzAuthorizationStore2_CreateApplication(This,bstrApplicationName,varReserved,ppApplication)    ( (This)->lpVtbl -> CreateApplication(This,bstrApplicationName,varReserved,ppApplication) )
#define IAzAuthorizationStore2_DeleteApplication(This,bstrApplicationName,varReserved)    ( (This)->lpVtbl -> DeleteApplication(This,bstrApplicationName,varReserved) )
#define IAzAuthorizationStore2_get_ApplicationGroups(This,ppGroupCollection)    ( (This)->lpVtbl -> get_ApplicationGroups(This,ppGroupCollection) )
#define IAzAuthorizationStore2_CreateApplicationGroup(This,bstrGroupName,varReserved,ppGroup)    ( (This)->lpVtbl -> CreateApplicationGroup(This,bstrGroupName,varReserved,ppGroup) )
#define IAzAuthorizationStore2_OpenApplicationGroup(This,bstrGroupName,varReserved,ppGroup)    ( (This)->lpVtbl -> OpenApplicationGroup(This,bstrGroupName,varReserved,ppGroup) )
#define IAzAuthorizationStore2_DeleteApplicationGroup(This,bstrGroupName,varReserved)    ( (This)->lpVtbl -> DeleteApplicationGroup(This,bstrGroupName,varReserved) )
#define IAzAuthorizationStore2_Submit(This,lFlags,varReserved)    ( (This)->lpVtbl -> Submit(This,lFlags,varReserved) )
#define IAzAuthorizationStore2_get_DelegatedPolicyUsers(This,pvarDelegatedPolicyUsers)    ( (This)->lpVtbl -> get_DelegatedPolicyUsers(This,pvarDelegatedPolicyUsers) )
#define IAzAuthorizationStore2_AddDelegatedPolicyUser(This,bstrDelegatedPolicyUser,varReserved)    ( (This)->lpVtbl -> AddDelegatedPolicyUser(This,bstrDelegatedPolicyUser,varReserved) )
#define IAzAuthorizationStore2_DeleteDelegatedPolicyUser(This,bstrDelegatedPolicyUser,varReserved)    ( (This)->lpVtbl -> DeleteDelegatedPolicyUser(This,bstrDelegatedPolicyUser,varReserved) )
#define IAzAuthorizationStore2_get_TargetMachine(This,pbstrTargetMachine)    ( (This)->lpVtbl -> get_TargetMachine(This,pbstrTargetMachine) )
#define IAzAuthorizationStore2_get_ApplyStoreSacl(This,pbApplyStoreSacl)    ( (This)->lpVtbl -> get_ApplyStoreSacl(This,pbApplyStoreSacl) )
#define IAzAuthorizationStore2_put_ApplyStoreSacl(This,bApplyStoreSacl)    ( (This)->lpVtbl -> put_ApplyStoreSacl(This,bApplyStoreSacl) )
#define IAzAuthorizationStore2_get_PolicyAdministratorsName(This,pvarAdmins)    ( (This)->lpVtbl -> get_PolicyAdministratorsName(This,pvarAdmins) )
#define IAzAuthorizationStore2_get_PolicyReadersName(This,pvarReaders)    ( (This)->lpVtbl -> get_PolicyReadersName(This,pvarReaders) )
#define IAzAuthorizationStore2_AddPolicyAdministratorName(This,bstrAdmin,varReserved)    ( (This)->lpVtbl -> AddPolicyAdministratorName(This,bstrAdmin,varReserved) )
#define IAzAuthorizationStore2_DeletePolicyAdministratorName(This,bstrAdmin,varReserved)    ( (This)->lpVtbl -> DeletePolicyAdministratorName(This,bstrAdmin,varReserved) )
#define IAzAuthorizationStore2_AddPolicyReaderName(This,bstrReader,varReserved)    ( (This)->lpVtbl -> AddPolicyReaderName(This,bstrReader,varReserved) )
#define IAzAuthorizationStore2_DeletePolicyReaderName(This,bstrReader,varReserved)    ( (This)->lpVtbl -> DeletePolicyReaderName(This,bstrReader,varReserved) )
#define IAzAuthorizationStore2_get_DelegatedPolicyUsersName(This,pvarDelegatedPolicyUsers)    ( (This)->lpVtbl -> get_DelegatedPolicyUsersName(This,pvarDelegatedPolicyUsers) )
#define IAzAuthorizationStore2_AddDelegatedPolicyUserName(This,bstrDelegatedPolicyUser,varReserved)    ( (This)->lpVtbl -> AddDelegatedPolicyUserName(This,bstrDelegatedPolicyUser,varReserved) )
#define IAzAuthorizationStore2_DeleteDelegatedPolicyUserName(This,bstrDelegatedPolicyUser,varReserved)    ( (This)->lpVtbl -> DeleteDelegatedPolicyUserName(This,bstrDelegatedPolicyUser,varReserved) )
#define IAzAuthorizationStore2_CloseApplication(This,bstrApplicationName,lFlag)    ( (This)->lpVtbl -> CloseApplication(This,bstrApplicationName,lFlag) )
#define IAzAuthorizationStore2_OpenApplication2(This,bstrApplicationName,varReserved,ppApplication)    ( (This)->lpVtbl -> OpenApplication2(This,bstrApplicationName,varReserved,ppApplication) )
#define IAzAuthorizationStore2_CreateApplication2(This,bstrApplicationName,varReserved,ppApplication)    ( (This)->lpVtbl -> CreateApplication2(This,bstrApplicationName,varReserved,ppApplication) )
#endif
#endif
#ifndef __IAzAuthorizationStore3_INTERFACE_DEFINED__
#define __IAzAuthorizationStore3_INTERFACE_DEFINED__
extern const IID IID_IAzAuthorizationStore3;
typedef struct IAzAuthorizationStore3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAzAuthorizationStore3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAzAuthorizationStore3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAzAuthorizationStore3 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAzAuthorizationStore3 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAzAuthorizationStore3 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAzAuthorizationStore3 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAzAuthorizationStore3 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IAzAuthorizationStore3 * This, BSTR * pbstrDescription);
	HRESULT(STDMETHODCALLTYPE * put_Description) (IAzAuthorizationStore3 * This, BSTR bstrDescription);
	HRESULT(STDMETHODCALLTYPE * get_ApplicationData) (IAzAuthorizationStore3 * This, BSTR * pbstrApplicationData);
	HRESULT(STDMETHODCALLTYPE * put_ApplicationData) (IAzAuthorizationStore3 * This, BSTR bstrApplicationData);
	HRESULT(STDMETHODCALLTYPE * get_DomainTimeout) (IAzAuthorizationStore3 * This, LONG * plProp);
	HRESULT(STDMETHODCALLTYPE * put_DomainTimeout) (IAzAuthorizationStore3 * This, LONG lProp);
	HRESULT(STDMETHODCALLTYPE * get_ScriptEngineTimeout) (IAzAuthorizationStore3 * This, LONG * plProp);
	HRESULT(STDMETHODCALLTYPE * put_ScriptEngineTimeout) (IAzAuthorizationStore3 * This, LONG lProp);
	HRESULT(STDMETHODCALLTYPE * get_MaxScriptEngines) (IAzAuthorizationStore3 * This, LONG * plProp);
	HRESULT(STDMETHODCALLTYPE * put_MaxScriptEngines) (IAzAuthorizationStore3 * This, LONG lProp);
	HRESULT(STDMETHODCALLTYPE * get_GenerateAudits) (IAzAuthorizationStore3 * This, BOOL * pbProp);
	HRESULT(STDMETHODCALLTYPE * put_GenerateAudits) (IAzAuthorizationStore3 * This, BOOL bProp);
	HRESULT(STDMETHODCALLTYPE * get_Writable) (IAzAuthorizationStore3 * This, BOOL * pfProp);
	HRESULT(STDMETHODCALLTYPE * GetProperty) (IAzAuthorizationStore3 * This, LONG lPropId, VARIANT varReserved, VARIANT * pvarProp);
	HRESULT(STDMETHODCALLTYPE * SetProperty) (IAzAuthorizationStore3 * This, LONG lPropId, VARIANT varProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * AddPropertyItem) (IAzAuthorizationStore3 * This, LONG lPropId, VARIANT varProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeletePropertyItem) (IAzAuthorizationStore3 * This, LONG lPropId, VARIANT varProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_PolicyAdministrators) (IAzAuthorizationStore3 * This, VARIANT * pvarAdmins);
	HRESULT(STDMETHODCALLTYPE * get_PolicyReaders) (IAzAuthorizationStore3 * This, VARIANT * pvarReaders);
	HRESULT(STDMETHODCALLTYPE * AddPolicyAdministrator) (IAzAuthorizationStore3 * This, BSTR bstrAdmin, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeletePolicyAdministrator) (IAzAuthorizationStore3 * This, BSTR bstrAdmin, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * AddPolicyReader) (IAzAuthorizationStore3 * This, BSTR bstrReader, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeletePolicyReader) (IAzAuthorizationStore3 * This, BSTR bstrReader, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IAzAuthorizationStore3 * This, LONG lFlags, BSTR bstrPolicyURL, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * UpdateCache) (IAzAuthorizationStore3 * This, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * Delete) (IAzAuthorizationStore3 * This, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_Applications) (IAzAuthorizationStore3 * This, IAzApplications ** ppAppCollection);
	HRESULT(STDMETHODCALLTYPE * OpenApplication) (IAzAuthorizationStore3 * This, BSTR bstrApplicationName, VARIANT varReserved, IAzApplication ** ppApplication);
	HRESULT(STDMETHODCALLTYPE * CreateApplication) (IAzAuthorizationStore3 * This, BSTR bstrApplicationName, VARIANT varReserved, IAzApplication ** ppApplication);
	HRESULT(STDMETHODCALLTYPE * DeleteApplication) (IAzAuthorizationStore3 * This, BSTR bstrApplicationName, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_ApplicationGroups) (IAzAuthorizationStore3 * This, IAzApplicationGroups ** ppGroupCollection);
	HRESULT(STDMETHODCALLTYPE * CreateApplicationGroup) (IAzAuthorizationStore3 * This, BSTR bstrGroupName, VARIANT varReserved, IAzApplicationGroup ** ppGroup);
	HRESULT(STDMETHODCALLTYPE * OpenApplicationGroup) (IAzAuthorizationStore3 * This, BSTR bstrGroupName, VARIANT varReserved, IAzApplicationGroup ** ppGroup);
	HRESULT(STDMETHODCALLTYPE * DeleteApplicationGroup) (IAzAuthorizationStore3 * This, BSTR bstrGroupName, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * Submit) (IAzAuthorizationStore3 * This, LONG lFlags, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_DelegatedPolicyUsers) (IAzAuthorizationStore3 * This, VARIANT * pvarDelegatedPolicyUsers);
	HRESULT(STDMETHODCALLTYPE * AddDelegatedPolicyUser) (IAzAuthorizationStore3 * This, BSTR bstrDelegatedPolicyUser, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeleteDelegatedPolicyUser) (IAzAuthorizationStore3 * This, BSTR bstrDelegatedPolicyUser, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_TargetMachine) (IAzAuthorizationStore3 * This, BSTR * pbstrTargetMachine);
	HRESULT(STDMETHODCALLTYPE * get_ApplyStoreSacl) (IAzAuthorizationStore3 * This, BOOL * pbApplyStoreSacl);
	HRESULT(STDMETHODCALLTYPE * put_ApplyStoreSacl) (IAzAuthorizationStore3 * This, BOOL bApplyStoreSacl);
	HRESULT(STDMETHODCALLTYPE * get_PolicyAdministratorsName) (IAzAuthorizationStore3 * This, VARIANT * pvarAdmins);
	HRESULT(STDMETHODCALLTYPE * get_PolicyReadersName) (IAzAuthorizationStore3 * This, VARIANT * pvarReaders);
	HRESULT(STDMETHODCALLTYPE * AddPolicyAdministratorName) (IAzAuthorizationStore3 * This, BSTR bstrAdmin, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeletePolicyAdministratorName) (IAzAuthorizationStore3 * This, BSTR bstrAdmin, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * AddPolicyReaderName) (IAzAuthorizationStore3 * This, BSTR bstrReader, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeletePolicyReaderName) (IAzAuthorizationStore3 * This, BSTR bstrReader, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_DelegatedPolicyUsersName) (IAzAuthorizationStore3 * This, VARIANT * pvarDelegatedPolicyUsers);
	HRESULT(STDMETHODCALLTYPE * AddDelegatedPolicyUserName) (IAzAuthorizationStore3 * This, BSTR bstrDelegatedPolicyUser, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeleteDelegatedPolicyUserName) (IAzAuthorizationStore3 * This, BSTR bstrDelegatedPolicyUser, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * CloseApplication) (IAzAuthorizationStore3 * This, BSTR bstrApplicationName, LONG lFlag);
	HRESULT(STDMETHODCALLTYPE * OpenApplication2) (IAzAuthorizationStore3 * This, BSTR bstrApplicationName, VARIANT varReserved, IAzApplication2 ** ppApplication);
	HRESULT(STDMETHODCALLTYPE * CreateApplication2) (IAzAuthorizationStore3 * This, BSTR bstrApplicationName, VARIANT varReserved, IAzApplication2 ** ppApplication);
	HRESULT(STDMETHODCALLTYPE * IsUpdateNeeded) (IAzAuthorizationStore3 * This, VARIANT_BOOL * pbIsUpdateNeeded);
	HRESULT(STDMETHODCALLTYPE * BizruleGroupSupported) (IAzAuthorizationStore3 * This, VARIANT_BOOL * pbSupported);
	HRESULT(STDMETHODCALLTYPE * UpgradeStoresFunctionalLevel) (IAzAuthorizationStore3 * This, LONG lFunctionalLevel);
	HRESULT(STDMETHODCALLTYPE * IsFunctionalLevelUpgradeSupported) (IAzAuthorizationStore3 * This, LONG lFunctionalLevel, VARIANT_BOOL * pbSupported);
	HRESULT(STDMETHODCALLTYPE * GetSchemaVersion) (IAzAuthorizationStore3 * This, LONG * plMajorVersion, LONG * plMinorVersion);
	END_INTERFACE
}  IAzAuthorizationStore3Vtbl;
interface IAzAuthorizationStore3
{
	CONST_VTBL struct IAzAuthorizationStore3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAzAuthorizationStore3_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAzAuthorizationStore3_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAzAuthorizationStore3_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAzAuthorizationStore3_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAzAuthorizationStore3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAzAuthorizationStore3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAzAuthorizationStore3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAzAuthorizationStore3_get_Description(This,pbstrDescription)    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) )
#define IAzAuthorizationStore3_put_Description(This,bstrDescription)    ( (This)->lpVtbl -> put_Description(This,bstrDescription) )
#define IAzAuthorizationStore3_get_ApplicationData(This,pbstrApplicationData)    ( (This)->lpVtbl -> get_ApplicationData(This,pbstrApplicationData) )
#define IAzAuthorizationStore3_put_ApplicationData(This,bstrApplicationData)    ( (This)->lpVtbl -> put_ApplicationData(This,bstrApplicationData) )
#define IAzAuthorizationStore3_get_DomainTimeout(This,plProp)    ( (This)->lpVtbl -> get_DomainTimeout(This,plProp) )
#define IAzAuthorizationStore3_put_DomainTimeout(This,lProp)    ( (This)->lpVtbl -> put_DomainTimeout(This,lProp) )
#define IAzAuthorizationStore3_get_ScriptEngineTimeout(This,plProp)    ( (This)->lpVtbl -> get_ScriptEngineTimeout(This,plProp) )
#define IAzAuthorizationStore3_put_ScriptEngineTimeout(This,lProp)    ( (This)->lpVtbl -> put_ScriptEngineTimeout(This,lProp) )
#define IAzAuthorizationStore3_get_MaxScriptEngines(This,plProp)    ( (This)->lpVtbl -> get_MaxScriptEngines(This,plProp) )
#define IAzAuthorizationStore3_put_MaxScriptEngines(This,lProp)    ( (This)->lpVtbl -> put_MaxScriptEngines(This,lProp) )
#define IAzAuthorizationStore3_get_GenerateAudits(This,pbProp)    ( (This)->lpVtbl -> get_GenerateAudits(This,pbProp) )
#define IAzAuthorizationStore3_put_GenerateAudits(This,bProp)    ( (This)->lpVtbl -> put_GenerateAudits(This,bProp) )
#define IAzAuthorizationStore3_get_Writable(This,pfProp)    ( (This)->lpVtbl -> get_Writable(This,pfProp) )
#define IAzAuthorizationStore3_GetProperty(This,lPropId,varReserved,pvarProp)    ( (This)->lpVtbl -> GetProperty(This,lPropId,varReserved,pvarProp) )
#define IAzAuthorizationStore3_SetProperty(This,lPropId,varProp,varReserved)    ( (This)->lpVtbl -> SetProperty(This,lPropId,varProp,varReserved) )
#define IAzAuthorizationStore3_AddPropertyItem(This,lPropId,varProp,varReserved)    ( (This)->lpVtbl -> AddPropertyItem(This,lPropId,varProp,varReserved) )
#define IAzAuthorizationStore3_DeletePropertyItem(This,lPropId,varProp,varReserved)    ( (This)->lpVtbl -> DeletePropertyItem(This,lPropId,varProp,varReserved) )
#define IAzAuthorizationStore3_get_PolicyAdministrators(This,pvarAdmins)    ( (This)->lpVtbl -> get_PolicyAdministrators(This,pvarAdmins) )
#define IAzAuthorizationStore3_get_PolicyReaders(This,pvarReaders)    ( (This)->lpVtbl -> get_PolicyReaders(This,pvarReaders) )
#define IAzAuthorizationStore3_AddPolicyAdministrator(This,bstrAdmin,varReserved)    ( (This)->lpVtbl -> AddPolicyAdministrator(This,bstrAdmin,varReserved) )
#define IAzAuthorizationStore3_DeletePolicyAdministrator(This,bstrAdmin,varReserved)    ( (This)->lpVtbl -> DeletePolicyAdministrator(This,bstrAdmin,varReserved) )
#define IAzAuthorizationStore3_AddPolicyReader(This,bstrReader,varReserved)    ( (This)->lpVtbl -> AddPolicyReader(This,bstrReader,varReserved) )
#define IAzAuthorizationStore3_DeletePolicyReader(This,bstrReader,varReserved)    ( (This)->lpVtbl -> DeletePolicyReader(This,bstrReader,varReserved) )
#define IAzAuthorizationStore3_Initialize(This,lFlags,bstrPolicyURL,varReserved)    ( (This)->lpVtbl -> Initialize(This,lFlags,bstrPolicyURL,varReserved) )
#define IAzAuthorizationStore3_UpdateCache(This,varReserved)    ( (This)->lpVtbl -> UpdateCache(This,varReserved) )
#define IAzAuthorizationStore3_Delete(This,varReserved)    ( (This)->lpVtbl -> Delete(This,varReserved) )
#define IAzAuthorizationStore3_get_Applications(This,ppAppCollection)    ( (This)->lpVtbl -> get_Applications(This,ppAppCollection) )
#define IAzAuthorizationStore3_OpenApplication(This,bstrApplicationName,varReserved,ppApplication)    ( (This)->lpVtbl -> OpenApplication(This,bstrApplicationName,varReserved,ppApplication) )
#define IAzAuthorizationStore3_CreateApplication(This,bstrApplicationName,varReserved,ppApplication)    ( (This)->lpVtbl -> CreateApplication(This,bstrApplicationName,varReserved,ppApplication) )
#define IAzAuthorizationStore3_DeleteApplication(This,bstrApplicationName,varReserved)    ( (This)->lpVtbl -> DeleteApplication(This,bstrApplicationName,varReserved) )
#define IAzAuthorizationStore3_get_ApplicationGroups(This,ppGroupCollection)    ( (This)->lpVtbl -> get_ApplicationGroups(This,ppGroupCollection) )
#define IAzAuthorizationStore3_CreateApplicationGroup(This,bstrGroupName,varReserved,ppGroup)    ( (This)->lpVtbl -> CreateApplicationGroup(This,bstrGroupName,varReserved,ppGroup) )
#define IAzAuthorizationStore3_OpenApplicationGroup(This,bstrGroupName,varReserved,ppGroup)    ( (This)->lpVtbl -> OpenApplicationGroup(This,bstrGroupName,varReserved,ppGroup) )
#define IAzAuthorizationStore3_DeleteApplicationGroup(This,bstrGroupName,varReserved)    ( (This)->lpVtbl -> DeleteApplicationGroup(This,bstrGroupName,varReserved) )
#define IAzAuthorizationStore3_Submit(This,lFlags,varReserved)    ( (This)->lpVtbl -> Submit(This,lFlags,varReserved) )
#define IAzAuthorizationStore3_get_DelegatedPolicyUsers(This,pvarDelegatedPolicyUsers)    ( (This)->lpVtbl -> get_DelegatedPolicyUsers(This,pvarDelegatedPolicyUsers) )
#define IAzAuthorizationStore3_AddDelegatedPolicyUser(This,bstrDelegatedPolicyUser,varReserved)    ( (This)->lpVtbl -> AddDelegatedPolicyUser(This,bstrDelegatedPolicyUser,varReserved) )
#define IAzAuthorizationStore3_DeleteDelegatedPolicyUser(This,bstrDelegatedPolicyUser,varReserved)    ( (This)->lpVtbl -> DeleteDelegatedPolicyUser(This,bstrDelegatedPolicyUser,varReserved) )
#define IAzAuthorizationStore3_get_TargetMachine(This,pbstrTargetMachine)    ( (This)->lpVtbl -> get_TargetMachine(This,pbstrTargetMachine) )
#define IAzAuthorizationStore3_get_ApplyStoreSacl(This,pbApplyStoreSacl)    ( (This)->lpVtbl -> get_ApplyStoreSacl(This,pbApplyStoreSacl) )
#define IAzAuthorizationStore3_put_ApplyStoreSacl(This,bApplyStoreSacl)    ( (This)->lpVtbl -> put_ApplyStoreSacl(This,bApplyStoreSacl) )
#define IAzAuthorizationStore3_get_PolicyAdministratorsName(This,pvarAdmins)    ( (This)->lpVtbl -> get_PolicyAdministratorsName(This,pvarAdmins) )
#define IAzAuthorizationStore3_get_PolicyReadersName(This,pvarReaders)    ( (This)->lpVtbl -> get_PolicyReadersName(This,pvarReaders) )
#define IAzAuthorizationStore3_AddPolicyAdministratorName(This,bstrAdmin,varReserved)    ( (This)->lpVtbl -> AddPolicyAdministratorName(This,bstrAdmin,varReserved) )
#define IAzAuthorizationStore3_DeletePolicyAdministratorName(This,bstrAdmin,varReserved)    ( (This)->lpVtbl -> DeletePolicyAdministratorName(This,bstrAdmin,varReserved) )
#define IAzAuthorizationStore3_AddPolicyReaderName(This,bstrReader,varReserved)    ( (This)->lpVtbl -> AddPolicyReaderName(This,bstrReader,varReserved) )
#define IAzAuthorizationStore3_DeletePolicyReaderName(This,bstrReader,varReserved)    ( (This)->lpVtbl -> DeletePolicyReaderName(This,bstrReader,varReserved) )
#define IAzAuthorizationStore3_get_DelegatedPolicyUsersName(This,pvarDelegatedPolicyUsers)    ( (This)->lpVtbl -> get_DelegatedPolicyUsersName(This,pvarDelegatedPolicyUsers) )
#define IAzAuthorizationStore3_AddDelegatedPolicyUserName(This,bstrDelegatedPolicyUser,varReserved)    ( (This)->lpVtbl -> AddDelegatedPolicyUserName(This,bstrDelegatedPolicyUser,varReserved) )
#define IAzAuthorizationStore3_DeleteDelegatedPolicyUserName(This,bstrDelegatedPolicyUser,varReserved)    ( (This)->lpVtbl -> DeleteDelegatedPolicyUserName(This,bstrDelegatedPolicyUser,varReserved) )
#define IAzAuthorizationStore3_CloseApplication(This,bstrApplicationName,lFlag)    ( (This)->lpVtbl -> CloseApplication(This,bstrApplicationName,lFlag) )
#define IAzAuthorizationStore3_OpenApplication2(This,bstrApplicationName,varReserved,ppApplication)    ( (This)->lpVtbl -> OpenApplication2(This,bstrApplicationName,varReserved,ppApplication) )
#define IAzAuthorizationStore3_CreateApplication2(This,bstrApplicationName,varReserved,ppApplication)    ( (This)->lpVtbl -> CreateApplication2(This,bstrApplicationName,varReserved,ppApplication) )
#define IAzAuthorizationStore3_IsUpdateNeeded(This,pbIsUpdateNeeded)    ( (This)->lpVtbl -> IsUpdateNeeded(This,pbIsUpdateNeeded) )
#define IAzAuthorizationStore3_BizruleGroupSupported(This,pbSupported)    ( (This)->lpVtbl -> BizruleGroupSupported(This,pbSupported) )
#define IAzAuthorizationStore3_UpgradeStoresFunctionalLevel(This,lFunctionalLevel)    ( (This)->lpVtbl -> UpgradeStoresFunctionalLevel(This,lFunctionalLevel) )
#define IAzAuthorizationStore3_IsFunctionalLevelUpgradeSupported(This,lFunctionalLevel,pbSupported)    ( (This)->lpVtbl -> IsFunctionalLevelUpgradeSupported(This,lFunctionalLevel,pbSupported) )
#define IAzAuthorizationStore3_GetSchemaVersion(This,plMajorVersion,plMinorVersion)    ( (This)->lpVtbl -> GetSchemaVersion(This,plMajorVersion,plMinorVersion) )
#endif
#endif
#ifndef __IAzApplication_INTERFACE_DEFINED__
#define __IAzApplication_INTERFACE_DEFINED__
extern const IID IID_IAzApplication;
typedef struct IAzApplicationVtbl
{
BEGIN_INTERFACE
HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAzApplication * This, REFIID riid, void **ppvObject);
ULONG(STDMETHODCALLTYPE * AddRef) (IAzApplication * This);
ULONG(STDMETHODCALLTYPE * Release) (IAzApplication * This);
HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAzApplication * This, UINT * pctinfo);
HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAzApplication * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAzApplication * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
HRESULT(STDMETHODCALLTYPE * Invoke) (IAzApplication * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
HRESULT(STDMETHODCALLTYPE * get_Name) (IAzApplication * This, BSTR * pbstrName);
HRESULT(STDMETHODCALLTYPE * put_Name) (IAzApplication * This, BSTR bstrName);
HRESULT(STDMETHODCALLTYPE * get_Description) (IAzApplication * This, BSTR * pbstrDescription);
HRESULT(STDMETHODCALLTYPE * put_Description) (IAzApplication * This, BSTR bstrDescription);
HRESULT(STDMETHODCALLTYPE * get_ApplicationData) (IAzApplication * This, BSTR * pbstrApplicationData);
HRESULT(STDMETHODCALLTYPE * put_ApplicationData) (IAzApplication * This, BSTR bstrApplicationData);
HRESULT(STDMETHODCALLTYPE * get_AuthzInterfaceClsid) (IAzApplication * This, BSTR * pbstrProp);
HRESULT(STDMETHODCALLTYPE * put_AuthzInterfaceClsid) (IAzApplication * This, BSTR bstrProp);
HRESULT(STDMETHODCALLTYPE * get_Version) (IAzApplication * This, BSTR * pbstrProp);
HRESULT(STDMETHODCALLTYPE * put_Version) (IAzApplication * This, BSTR bstrProp);
HRESULT(STDMETHODCALLTYPE * get_GenerateAudits) (IAzApplication * This, BOOL * pbProp);
HRESULT(STDMETHODCALLTYPE * put_GenerateAudits) (IAzApplication * This, BOOL bProp);
HRESULT(STDMETHODCALLTYPE * get_ApplyStoreSacl) (IAzApplication * This, BOOL * pbProp);
HRESULT(STDMETHODCALLTYPE * put_ApplyStoreSacl) (IAzApplication * This, BOOL bProp);
HRESULT(STDMETHODCALLTYPE * get_Writable) (IAzApplication * This, BOOL * pfProp);
HRESULT(STDMETHODCALLTYPE * GetProperty) (IAzApplication * This, LONG lPropId, VARIANT varReserved, VARIANT * pvarProp);
HRESULT(STDMETHODCALLTYPE * SetProperty) (IAzApplication * This, LONG lPropId, VARIANT varProp, VARIANT varReserved);
HRESULT(STDMETHODCALLTYPE * get_PolicyAdministrators) (IAzApplication * This, VARIANT * pvarAdmins);
HRESULT(STDMETHODCALLTYPE * get_PolicyReaders) (IAzApplication * This, VARIANT * pvarReaders);
HRESULT(STDMETHODCALLTYPE * AddPolicyAdministrator) (IAzApplication * This, BSTR bstrAdmin, VARIANT varReserved);
HRESULT(STDMETHODCALLTYPE * DeletePolicyAdministrator) (IAzApplication * This, BSTR bstrAdmin, VARIANT varReserved);
HRESULT(STDMETHODCALLTYPE * AddPolicyReader) (IAzApplication * This, BSTR bstrReader, VARIANT varReserved);
HRESULT(STDMETHODCALLTYPE * DeletePolicyReader) (IAzApplication * This, BSTR bstrReader, VARIANT varReserved);
HRESULT(STDMETHODCALLTYPE * get_Scopes) (IAzApplication * This, IAzScopes ** ppScopeCollection);
HRESULT(STDMETHODCALLTYPE * OpenScope) (IAzApplication * This, BSTR bstrScopeName, VARIANT varReserved, IAzScope ** ppScope);
HRESULT(STDMETHODCALLTYPE * CreateScope) (IAzApplication * This, BSTR bstrScopeName, VARIANT varReserved, IAzScope ** ppScope);
HRESULT(STDMETHODCALLTYPE * DeleteScope) (IAzApplication * This, BSTR bstrScopeName, VARIANT varReserved);
HRESULT(STDMETHODCALLTYPE * get_Operations) (IAzApplication * This, IAzOperations ** ppOperationCollection);
HRESULT(STDMETHODCALLTYPE * OpenOperation) (IAzApplication * This, BSTR bstrOperationName, VARIANT varReserved, IAzOperation ** ppOperation);
HRESULT(STDMETHODCALLTYPE * CreateOperation) (IAzApplication * This, BSTR bstrOperationName, VARIANT varReserved, IAzOperation ** ppOperation);
HRESULT(STDMETHODCALLTYPE * DeleteOperation) (IAzApplication * This, BSTR bstrOperationName, VARIANT varReserved);
HRESULT(STDMETHODCALLTYPE * get_Tasks) (IAzApplication * This, IAzTasks ** ppTaskCollection);
HRESULT(STDMETHODCALLTYPE * OpenTask) (IAzApplication * This, BSTR bstrTaskName, VARIANT varReserved, IAzTask ** ppTask);
HRESULT(STDMETHODCALLTYPE * CreateTask) (IAzApplication * This, BSTR bstrTaskName, VARIANT varReserved, IAzTask ** ppTask);
HRESULT(STDMETHODCALLTYPE * DeleteTask) (IAzApplication * This, BSTR bstrTaskName, VARIANT varReserved);
HRESULT(STDMETHODCALLTYPE * get_ApplicationGroups) (IAzApplication * This, IAzApplicationGroups ** ppGroupCollection);
HRESULT(STDMETHODCALLTYPE * OpenApplicationGroup) (IAzApplication * This, BSTR bstrGroupName, VARIANT varReserved, IAzApplicationGroup ** ppGroup);
HRESULT(STDMETHODCALLTYPE * CreateApplicationGroup) (IAzApplication * This, BSTR bstrGroupName, VARIANT varReserved, IAzApplicationGroup ** ppGroup);
HRESULT(STDMETHODCALLTYPE * DeleteApplicationGroup) (IAzApplication * This, BSTR bstrGroupName, VARIANT varReserved);
HRESULT(STDMETHODCALLTYPE * get_Roles) (IAzApplication * This, IAzRoles ** ppRoleCollection);
HRESULT(STDMETHODCALLTYPE * OpenRole) (IAzApplication * This, BSTR bstrRoleName, VARIANT varReserved, IAzRole ** ppRole);
HRESULT(STDMETHODCALLTYPE * CreateRole) (IAzApplication * This, BSTR bstrRoleName, VARIANT varReserved, IAzRole ** ppRole);
HRESULT(STDMETHODCALLTYPE * DeleteRole) (IAzApplication * This, BSTR bstrRoleName, VARIANT varReserved);
HRESULT(STDMETHODCALLTYPE * InitializeClientContextFromToken) (IAzApplication * This, ULONGLONG ullTokenHandle, VARIANT varReserved, IAzClientContext ** ppClientContext);
HRESULT(STDMETHODCALLTYPE * AddPropertyItem) (IAzApplication * This, LONG lPropId, VARIANT varProp, VARIANT varReserved);
HRESULT(STDMETHODCALLTYPE * DeletePropertyItem) (IAzApplication * This, LONG lPropId, VARIANT varProp, VARIANT varReserved);
HRESULT(STDMETHODCALLTYPE * Submit) (IAzApplication * This, LONG lFlags, VARIANT varReserved);
HRESULT(STDMETHODCALLTYPE * InitializeClientContextFromName) (IAzApplication * This, BSTR ClientName, BSTR DomainName, VARIANT varReserved, IAzClientContext ** ppClientContext);
HRESULT(STDMETHODCALLTYPE * get_DelegatedPolicyUsers) (IAzApplication * This, VARIANT * pvarDelegatedPolicyUsers);
HRESULT(STDMETHODCALLTYPE * AddDelegatedPolicyUser) (IAzApplication * This, BSTR bstrDelegatedPolicyUser, VARIANT varReserved);
HRESULT(STDMETHODCALLTYPE * DeleteDelegatedPolicyUser) (IAzApplication * This, BSTR bstrDelegatedPolicyUser, VARIANT varReserved);
HRESULT(STDMETHODCALLTYPE * InitializeClientContextFromStringSid) (IAzApplication * This, BSTR SidString, LONG lOptions, VARIANT varReserved, IAzClientContext ** ppClientContext);
HRESULT(STDMETHODCALLTYPE * get_PolicyAdministratorsName) (IAzApplication * This, VARIANT * pvarAdmins);
HRESULT(STDMETHODCALLTYPE * get_PolicyReadersName) (IAzApplication * This, VARIANT * pvarReaders);
HRESULT(STDMETHODCALLTYPE * AddPolicyAdministratorName) (IAzApplication * This, BSTR bstrAdmin, VARIANT varReserved);
HRESULT(STDMETHODCALLTYPE * DeletePolicyAdministratorName) (IAzApplication * This, BSTR bstrAdmin, VARIANT varReserved);
HRESULT(STDMETHODCALLTYPE * AddPolicyReaderName) (IAzApplication * This, BSTR bstrReader, VARIANT varReserved);
HRESULT(STDMETHODCALLTYPE * DeletePolicyReaderName) (IAzApplication * This, BSTR bstrReader, VARIANT varReserved);
HRESULT(STDMETHODCALLTYPE * get_DelegatedPolicyUsersName) (IAzApplication * This, VARIANT * pvarDelegatedPolicyUsers);
HRESULT(STDMETHODCALLTYPE * AddDelegatedPolicyUserName) (IAzApplication * This, BSTR bstrDelegatedPolicyUser, VARIANT varReserved);
HRESULT(STDMETHODCALLTYPE * DeleteDelegatedPolicyUserName) (IAzApplication * This, BSTR bstrDelegatedPolicyUser, VARIANT varReserved);
END_INTERFACE
}  IAzApplicationVtbl;
interface IAzApplication
{
	CONST_VTBL struct IAzApplicationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAzApplication_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAzApplication_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAzApplication_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAzApplication_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAzApplication_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAzApplication_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAzApplication_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAzApplication_get_Name(This,pbstrName)    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
#define IAzApplication_put_Name(This,bstrName)    ( (This)->lpVtbl -> put_Name(This,bstrName) )
#define IAzApplication_get_Description(This,pbstrDescription)    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) )
#define IAzApplication_put_Description(This,bstrDescription)    ( (This)->lpVtbl -> put_Description(This,bstrDescription) )
#define IAzApplication_get_ApplicationData(This,pbstrApplicationData)    ( (This)->lpVtbl -> get_ApplicationData(This,pbstrApplicationData) )
#define IAzApplication_put_ApplicationData(This,bstrApplicationData)    ( (This)->lpVtbl -> put_ApplicationData(This,bstrApplicationData) )
#define IAzApplication_get_AuthzInterfaceClsid(This,pbstrProp)    ( (This)->lpVtbl -> get_AuthzInterfaceClsid(This,pbstrProp) )
#define IAzApplication_put_AuthzInterfaceClsid(This,bstrProp)    ( (This)->lpVtbl -> put_AuthzInterfaceClsid(This,bstrProp) )
#define IAzApplication_get_Version(This,pbstrProp)    ( (This)->lpVtbl -> get_Version(This,pbstrProp) )
#define IAzApplication_put_Version(This,bstrProp)    ( (This)->lpVtbl -> put_Version(This,bstrProp) )
#define IAzApplication_get_GenerateAudits(This,pbProp)    ( (This)->lpVtbl -> get_GenerateAudits(This,pbProp) )
#define IAzApplication_put_GenerateAudits(This,bProp)    ( (This)->lpVtbl -> put_GenerateAudits(This,bProp) )
#define IAzApplication_get_ApplyStoreSacl(This,pbProp)    ( (This)->lpVtbl -> get_ApplyStoreSacl(This,pbProp) )
#define IAzApplication_put_ApplyStoreSacl(This,bProp)    ( (This)->lpVtbl -> put_ApplyStoreSacl(This,bProp) )
#define IAzApplication_get_Writable(This,pfProp)    ( (This)->lpVtbl -> get_Writable(This,pfProp) )
#define IAzApplication_GetProperty(This,lPropId,varReserved,pvarProp)    ( (This)->lpVtbl -> GetProperty(This,lPropId,varReserved,pvarProp) )
#define IAzApplication_SetProperty(This,lPropId,varProp,varReserved)    ( (This)->lpVtbl -> SetProperty(This,lPropId,varProp,varReserved) )
#define IAzApplication_get_PolicyAdministrators(This,pvarAdmins)    ( (This)->lpVtbl -> get_PolicyAdministrators(This,pvarAdmins) )
#define IAzApplication_get_PolicyReaders(This,pvarReaders)    ( (This)->lpVtbl -> get_PolicyReaders(This,pvarReaders) )
#define IAzApplication_AddPolicyAdministrator(This,bstrAdmin,varReserved)    ( (This)->lpVtbl -> AddPolicyAdministrator(This,bstrAdmin,varReserved) )
#define IAzApplication_DeletePolicyAdministrator(This,bstrAdmin,varReserved)    ( (This)->lpVtbl -> DeletePolicyAdministrator(This,bstrAdmin,varReserved) )
#define IAzApplication_AddPolicyReader(This,bstrReader,varReserved)    ( (This)->lpVtbl -> AddPolicyReader(This,bstrReader,varReserved) )
#define IAzApplication_DeletePolicyReader(This,bstrReader,varReserved)    ( (This)->lpVtbl -> DeletePolicyReader(This,bstrReader,varReserved) )
#define IAzApplication_get_Scopes(This,ppScopeCollection)    ( (This)->lpVtbl -> get_Scopes(This,ppScopeCollection) )
#define IAzApplication_OpenScope(This,bstrScopeName,varReserved,ppScope)    ( (This)->lpVtbl -> OpenScope(This,bstrScopeName,varReserved,ppScope) )
#define IAzApplication_CreateScope(This,bstrScopeName,varReserved,ppScope)    ( (This)->lpVtbl -> CreateScope(This,bstrScopeName,varReserved,ppScope) )
#define IAzApplication_DeleteScope(This,bstrScopeName,varReserved)    ( (This)->lpVtbl -> DeleteScope(This,bstrScopeName,varReserved) )
#define IAzApplication_get_Operations(This,ppOperationCollection)    ( (This)->lpVtbl -> get_Operations(This,ppOperationCollection) )
#define IAzApplication_OpenOperation(This,bstrOperationName,varReserved,ppOperation)    ( (This)->lpVtbl -> OpenOperation(This,bstrOperationName,varReserved,ppOperation) )
#define IAzApplication_CreateOperation(This,bstrOperationName,varReserved,ppOperation)    ( (This)->lpVtbl -> CreateOperation(This,bstrOperationName,varReserved,ppOperation) )
#define IAzApplication_DeleteOperation(This,bstrOperationName,varReserved)    ( (This)->lpVtbl -> DeleteOperation(This,bstrOperationName,varReserved) )
#define IAzApplication_get_Tasks(This,ppTaskCollection)    ( (This)->lpVtbl -> get_Tasks(This,ppTaskCollection) )
#define IAzApplication_OpenTask(This,bstrTaskName,varReserved,ppTask)    ( (This)->lpVtbl -> OpenTask(This,bstrTaskName,varReserved,ppTask) )
#define IAzApplication_CreateTask(This,bstrTaskName,varReserved,ppTask)    ( (This)->lpVtbl -> CreateTask(This,bstrTaskName,varReserved,ppTask) )
#define IAzApplication_DeleteTask(This,bstrTaskName,varReserved)    ( (This)->lpVtbl -> DeleteTask(This,bstrTaskName,varReserved) )
#define IAzApplication_get_ApplicationGroups(This,ppGroupCollection)    ( (This)->lpVtbl -> get_ApplicationGroups(This,ppGroupCollection) )
#define IAzApplication_OpenApplicationGroup(This,bstrGroupName,varReserved,ppGroup)    ( (This)->lpVtbl -> OpenApplicationGroup(This,bstrGroupName,varReserved,ppGroup) )
#define IAzApplication_CreateApplicationGroup(This,bstrGroupName,varReserved,ppGroup)    ( (This)->lpVtbl -> CreateApplicationGroup(This,bstrGroupName,varReserved,ppGroup) )
#define IAzApplication_DeleteApplicationGroup(This,bstrGroupName,varReserved)    ( (This)->lpVtbl -> DeleteApplicationGroup(This,bstrGroupName,varReserved) )
#define IAzApplication_get_Roles(This,ppRoleCollection)    ( (This)->lpVtbl -> get_Roles(This,ppRoleCollection) )
#define IAzApplication_OpenRole(This,bstrRoleName,varReserved,ppRole)    ( (This)->lpVtbl -> OpenRole(This,bstrRoleName,varReserved,ppRole) )
#define IAzApplication_CreateRole(This,bstrRoleName,varReserved,ppRole)    ( (This)->lpVtbl -> CreateRole(This,bstrRoleName,varReserved,ppRole) )
#define IAzApplication_DeleteRole(This,bstrRoleName,varReserved)    ( (This)->lpVtbl -> DeleteRole(This,bstrRoleName,varReserved) )
#define IAzApplication_InitializeClientContextFromToken(This,ullTokenHandle,varReserved,ppClientContext)    ( (This)->lpVtbl -> InitializeClientContextFromToken(This,ullTokenHandle,varReserved,ppClientContext) )
#define IAzApplication_AddPropertyItem(This,lPropId,varProp,varReserved)    ( (This)->lpVtbl -> AddPropertyItem(This,lPropId,varProp,varReserved) )
#define IAzApplication_DeletePropertyItem(This,lPropId,varProp,varReserved)    ( (This)->lpVtbl -> DeletePropertyItem(This,lPropId,varProp,varReserved) )
#define IAzApplication_Submit(This,lFlags,varReserved)    ( (This)->lpVtbl -> Submit(This,lFlags,varReserved) )
#define IAzApplication_InitializeClientContextFromName(This,ClientName,DomainName,varReserved,ppClientContext)    ( (This)->lpVtbl -> InitializeClientContextFromName(This,ClientName,DomainName,varReserved,ppClientContext) )
#define IAzApplication_get_DelegatedPolicyUsers(This,pvarDelegatedPolicyUsers)    ( (This)->lpVtbl -> get_DelegatedPolicyUsers(This,pvarDelegatedPolicyUsers) )
#define IAzApplication_AddDelegatedPolicyUser(This,bstrDelegatedPolicyUser,varReserved)    ( (This)->lpVtbl -> AddDelegatedPolicyUser(This,bstrDelegatedPolicyUser,varReserved) )
#define IAzApplication_DeleteDelegatedPolicyUser(This,bstrDelegatedPolicyUser,varReserved)    ( (This)->lpVtbl -> DeleteDelegatedPolicyUser(This,bstrDelegatedPolicyUser,varReserved) )
#define IAzApplication_InitializeClientContextFromStringSid(This,SidString,lOptions,varReserved,ppClientContext)    ( (This)->lpVtbl -> InitializeClientContextFromStringSid(This,SidString,lOptions,varReserved,ppClientContext) )
#define IAzApplication_get_PolicyAdministratorsName(This,pvarAdmins)    ( (This)->lpVtbl -> get_PolicyAdministratorsName(This,pvarAdmins) )
#define IAzApplication_get_PolicyReadersName(This,pvarReaders)    ( (This)->lpVtbl -> get_PolicyReadersName(This,pvarReaders) )
#define IAzApplication_AddPolicyAdministratorName(This,bstrAdmin,varReserved)    ( (This)->lpVtbl -> AddPolicyAdministratorName(This,bstrAdmin,varReserved) )
#define IAzApplication_DeletePolicyAdministratorName(This,bstrAdmin,varReserved)    ( (This)->lpVtbl -> DeletePolicyAdministratorName(This,bstrAdmin,varReserved) )
#define IAzApplication_AddPolicyReaderName(This,bstrReader,varReserved)    ( (This)->lpVtbl -> AddPolicyReaderName(This,bstrReader,varReserved) )
#define IAzApplication_DeletePolicyReaderName(This,bstrReader,varReserved)    ( (This)->lpVtbl -> DeletePolicyReaderName(This,bstrReader,varReserved) )
#define IAzApplication_get_DelegatedPolicyUsersName(This,pvarDelegatedPolicyUsers)    ( (This)->lpVtbl -> get_DelegatedPolicyUsersName(This,pvarDelegatedPolicyUsers) )
#define IAzApplication_AddDelegatedPolicyUserName(This,bstrDelegatedPolicyUser,varReserved)    ( (This)->lpVtbl -> AddDelegatedPolicyUserName(This,bstrDelegatedPolicyUser,varReserved) )
#define IAzApplication_DeleteDelegatedPolicyUserName(This,bstrDelegatedPolicyUser,varReserved)    ( (This)->lpVtbl -> DeleteDelegatedPolicyUserName(This,bstrDelegatedPolicyUser,varReserved) )
#endif
#endif
#ifndef __IAzApplication2_INTERFACE_DEFINED__
#define __IAzApplication2_INTERFACE_DEFINED__
extern const IID IID_IAzApplication2;
typedef struct IAzApplication2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAzApplication2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAzApplication2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAzApplication2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAzApplication2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAzApplication2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAzApplication2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAzApplication2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IAzApplication2 * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * put_Name) (IAzApplication2 * This, BSTR bstrName);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IAzApplication2 * This, BSTR * pbstrDescription);
	HRESULT(STDMETHODCALLTYPE * put_Description) (IAzApplication2 * This, BSTR bstrDescription);
	HRESULT(STDMETHODCALLTYPE * get_ApplicationData) (IAzApplication2 * This, BSTR * pbstrApplicationData);
	HRESULT(STDMETHODCALLTYPE * put_ApplicationData) (IAzApplication2 * This, BSTR bstrApplicationData);
	HRESULT(STDMETHODCALLTYPE * get_AuthzInterfaceClsid) (IAzApplication2 * This, BSTR * pbstrProp);
	HRESULT(STDMETHODCALLTYPE * put_AuthzInterfaceClsid) (IAzApplication2 * This, BSTR bstrProp);
	HRESULT(STDMETHODCALLTYPE * get_Version) (IAzApplication2 * This, BSTR * pbstrProp);
	HRESULT(STDMETHODCALLTYPE * put_Version) (IAzApplication2 * This, BSTR bstrProp);
	HRESULT(STDMETHODCALLTYPE * get_GenerateAudits) (IAzApplication2 * This, BOOL * pbProp);
	HRESULT(STDMETHODCALLTYPE * put_GenerateAudits) (IAzApplication2 * This, BOOL bProp);
	HRESULT(STDMETHODCALLTYPE * get_ApplyStoreSacl) (IAzApplication2 * This, BOOL * pbProp);
	HRESULT(STDMETHODCALLTYPE * put_ApplyStoreSacl) (IAzApplication2 * This, BOOL bProp);
	HRESULT(STDMETHODCALLTYPE * get_Writable) (IAzApplication2 * This, BOOL * pfProp);
	HRESULT(STDMETHODCALLTYPE * GetProperty) (IAzApplication2 * This, LONG lPropId, VARIANT varReserved, VARIANT * pvarProp);
	HRESULT(STDMETHODCALLTYPE * SetProperty) (IAzApplication2 * This, LONG lPropId, VARIANT varProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_PolicyAdministrators) (IAzApplication2 * This, VARIANT * pvarAdmins);
	HRESULT(STDMETHODCALLTYPE * get_PolicyReaders) (IAzApplication2 * This, VARIANT * pvarReaders);
	HRESULT(STDMETHODCALLTYPE * AddPolicyAdministrator) (IAzApplication2 * This, BSTR bstrAdmin, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeletePolicyAdministrator) (IAzApplication2 * This, BSTR bstrAdmin, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * AddPolicyReader) (IAzApplication2 * This, BSTR bstrReader, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeletePolicyReader) (IAzApplication2 * This, BSTR bstrReader, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_Scopes) (IAzApplication2 * This, IAzScopes ** ppScopeCollection);
	HRESULT(STDMETHODCALLTYPE * OpenScope) (IAzApplication2 * This, BSTR bstrScopeName, VARIANT varReserved, IAzScope ** ppScope);
	HRESULT(STDMETHODCALLTYPE * CreateScope) (IAzApplication2 * This, BSTR bstrScopeName, VARIANT varReserved, IAzScope ** ppScope);
	HRESULT(STDMETHODCALLTYPE * DeleteScope) (IAzApplication2 * This, BSTR bstrScopeName, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_Operations) (IAzApplication2 * This, IAzOperations ** ppOperationCollection);
	HRESULT(STDMETHODCALLTYPE * OpenOperation) (IAzApplication2 * This, BSTR bstrOperationName, VARIANT varReserved, IAzOperation ** ppOperation);
	HRESULT(STDMETHODCALLTYPE * CreateOperation) (IAzApplication2 * This, BSTR bstrOperationName, VARIANT varReserved, IAzOperation ** ppOperation);
	HRESULT(STDMETHODCALLTYPE * DeleteOperation) (IAzApplication2 * This, BSTR bstrOperationName, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_Tasks) (IAzApplication2 * This, IAzTasks ** ppTaskCollection);
	HRESULT(STDMETHODCALLTYPE * OpenTask) (IAzApplication2 * This, BSTR bstrTaskName, VARIANT varReserved, IAzTask ** ppTask);
	HRESULT(STDMETHODCALLTYPE * CreateTask) (IAzApplication2 * This, BSTR bstrTaskName, VARIANT varReserved, IAzTask ** ppTask);
	HRESULT(STDMETHODCALLTYPE * DeleteTask) (IAzApplication2 * This, BSTR bstrTaskName, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_ApplicationGroups) (IAzApplication2 * This, IAzApplicationGroups ** ppGroupCollection);
	HRESULT(STDMETHODCALLTYPE * OpenApplicationGroup) (IAzApplication2 * This, BSTR bstrGroupName, VARIANT varReserved, IAzApplicationGroup ** ppGroup);
	HRESULT(STDMETHODCALLTYPE * CreateApplicationGroup) (IAzApplication2 * This, BSTR bstrGroupName, VARIANT varReserved, IAzApplicationGroup ** ppGroup);
	HRESULT(STDMETHODCALLTYPE * DeleteApplicationGroup) (IAzApplication2 * This, BSTR bstrGroupName, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_Roles) (IAzApplication2 * This, IAzRoles ** ppRoleCollection);
	HRESULT(STDMETHODCALLTYPE * OpenRole) (IAzApplication2 * This, BSTR bstrRoleName, VARIANT varReserved, IAzRole ** ppRole);
	HRESULT(STDMETHODCALLTYPE * CreateRole) (IAzApplication2 * This, BSTR bstrRoleName, VARIANT varReserved, IAzRole ** ppRole);
	HRESULT(STDMETHODCALLTYPE * DeleteRole) (IAzApplication2 * This, BSTR bstrRoleName, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * InitializeClientContextFromToken) (IAzApplication2 * This, ULONGLONG ullTokenHandle, VARIANT varReserved, IAzClientContext ** ppClientContext);
	HRESULT(STDMETHODCALLTYPE * AddPropertyItem) (IAzApplication2 * This, LONG lPropId, VARIANT varProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeletePropertyItem) (IAzApplication2 * This, LONG lPropId, VARIANT varProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * Submit) (IAzApplication2 * This, LONG lFlags, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * InitializeClientContextFromName) (IAzApplication2 * This, BSTR ClientName, BSTR DomainName, VARIANT varReserved, IAzClientContext ** ppClientContext);
	HRESULT(STDMETHODCALLTYPE * get_DelegatedPolicyUsers) (IAzApplication2 * This, VARIANT * pvarDelegatedPolicyUsers);
	HRESULT(STDMETHODCALLTYPE * AddDelegatedPolicyUser) (IAzApplication2 * This, BSTR bstrDelegatedPolicyUser, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeleteDelegatedPolicyUser) (IAzApplication2 * This, BSTR bstrDelegatedPolicyUser, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * InitializeClientContextFromStringSid) (IAzApplication2 * This, BSTR SidString, LONG lOptions, VARIANT varReserved, IAzClientContext ** ppClientContext);
	HRESULT(STDMETHODCALLTYPE * get_PolicyAdministratorsName) (IAzApplication2 * This, VARIANT * pvarAdmins);
	HRESULT(STDMETHODCALLTYPE * get_PolicyReadersName) (IAzApplication2 * This, VARIANT * pvarReaders);
	HRESULT(STDMETHODCALLTYPE * AddPolicyAdministratorName) (IAzApplication2 * This, BSTR bstrAdmin, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeletePolicyAdministratorName) (IAzApplication2 * This, BSTR bstrAdmin, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * AddPolicyReaderName) (IAzApplication2 * This, BSTR bstrReader, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeletePolicyReaderName) (IAzApplication2 * This, BSTR bstrReader, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_DelegatedPolicyUsersName) (IAzApplication2 * This, VARIANT * pvarDelegatedPolicyUsers);
	HRESULT(STDMETHODCALLTYPE * AddDelegatedPolicyUserName) (IAzApplication2 * This, BSTR bstrDelegatedPolicyUser, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeleteDelegatedPolicyUserName) (IAzApplication2 * This, BSTR bstrDelegatedPolicyUser, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * InitializeClientContextFromToken2) (IAzApplication2 * This, ULONG ulTokenHandleLowPart, ULONG ulTokenHandleHighPart, VARIANT varReserved, IAzClientContext2 ** ppClientContext);
	HRESULT(STDMETHODCALLTYPE * InitializeClientContext2) (IAzApplication2 * This, BSTR IdentifyingString, VARIANT varReserved, IAzClientContext2 ** ppClientContext);
	END_INTERFACE
}  IAzApplication2Vtbl;
interface IAzApplication2
{
	CONST_VTBL struct IAzApplication2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAzApplication2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAzApplication2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAzApplication2_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAzApplication2_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAzApplication2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAzApplication2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAzApplication2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAzApplication2_get_Name(This,pbstrName)    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
#define IAzApplication2_put_Name(This,bstrName)    ( (This)->lpVtbl -> put_Name(This,bstrName) )
#define IAzApplication2_get_Description(This,pbstrDescription)    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) )
#define IAzApplication2_put_Description(This,bstrDescription)    ( (This)->lpVtbl -> put_Description(This,bstrDescription) )
#define IAzApplication2_get_ApplicationData(This,pbstrApplicationData)    ( (This)->lpVtbl -> get_ApplicationData(This,pbstrApplicationData) )
#define IAzApplication2_put_ApplicationData(This,bstrApplicationData)    ( (This)->lpVtbl -> put_ApplicationData(This,bstrApplicationData) )
#define IAzApplication2_get_AuthzInterfaceClsid(This,pbstrProp)    ( (This)->lpVtbl -> get_AuthzInterfaceClsid(This,pbstrProp) )
#define IAzApplication2_put_AuthzInterfaceClsid(This,bstrProp)    ( (This)->lpVtbl -> put_AuthzInterfaceClsid(This,bstrProp) )
#define IAzApplication2_get_Version(This,pbstrProp)    ( (This)->lpVtbl -> get_Version(This,pbstrProp) )
#define IAzApplication2_put_Version(This,bstrProp)    ( (This)->lpVtbl -> put_Version(This,bstrProp) )
#define IAzApplication2_get_GenerateAudits(This,pbProp)    ( (This)->lpVtbl -> get_GenerateAudits(This,pbProp) )
#define IAzApplication2_put_GenerateAudits(This,bProp)    ( (This)->lpVtbl -> put_GenerateAudits(This,bProp) )
#define IAzApplication2_get_ApplyStoreSacl(This,pbProp)    ( (This)->lpVtbl -> get_ApplyStoreSacl(This,pbProp) )
#define IAzApplication2_put_ApplyStoreSacl(This,bProp)    ( (This)->lpVtbl -> put_ApplyStoreSacl(This,bProp) )
#define IAzApplication2_get_Writable(This,pfProp)    ( (This)->lpVtbl -> get_Writable(This,pfProp) )
#define IAzApplication2_GetProperty(This,lPropId,varReserved,pvarProp)    ( (This)->lpVtbl -> GetProperty(This,lPropId,varReserved,pvarProp) )
#define IAzApplication2_SetProperty(This,lPropId,varProp,varReserved)    ( (This)->lpVtbl -> SetProperty(This,lPropId,varProp,varReserved) )
#define IAzApplication2_get_PolicyAdministrators(This,pvarAdmins)    ( (This)->lpVtbl -> get_PolicyAdministrators(This,pvarAdmins) )
#define IAzApplication2_get_PolicyReaders(This,pvarReaders)    ( (This)->lpVtbl -> get_PolicyReaders(This,pvarReaders) )
#define IAzApplication2_AddPolicyAdministrator(This,bstrAdmin,varReserved)    ( (This)->lpVtbl -> AddPolicyAdministrator(This,bstrAdmin,varReserved) )
#define IAzApplication2_DeletePolicyAdministrator(This,bstrAdmin,varReserved)    ( (This)->lpVtbl -> DeletePolicyAdministrator(This,bstrAdmin,varReserved) )
#define IAzApplication2_AddPolicyReader(This,bstrReader,varReserved)    ( (This)->lpVtbl -> AddPolicyReader(This,bstrReader,varReserved) )
#define IAzApplication2_DeletePolicyReader(This,bstrReader,varReserved)    ( (This)->lpVtbl -> DeletePolicyReader(This,bstrReader,varReserved) )
#define IAzApplication2_get_Scopes(This,ppScopeCollection)    ( (This)->lpVtbl -> get_Scopes(This,ppScopeCollection) )
#define IAzApplication2_OpenScope(This,bstrScopeName,varReserved,ppScope)    ( (This)->lpVtbl -> OpenScope(This,bstrScopeName,varReserved,ppScope) )
#define IAzApplication2_CreateScope(This,bstrScopeName,varReserved,ppScope)    ( (This)->lpVtbl -> CreateScope(This,bstrScopeName,varReserved,ppScope) )
#define IAzApplication2_DeleteScope(This,bstrScopeName,varReserved)    ( (This)->lpVtbl -> DeleteScope(This,bstrScopeName,varReserved) )
#define IAzApplication2_get_Operations(This,ppOperationCollection)    ( (This)->lpVtbl -> get_Operations(This,ppOperationCollection) )
#define IAzApplication2_OpenOperation(This,bstrOperationName,varReserved,ppOperation)    ( (This)->lpVtbl -> OpenOperation(This,bstrOperationName,varReserved,ppOperation) )
#define IAzApplication2_CreateOperation(This,bstrOperationName,varReserved,ppOperation)    ( (This)->lpVtbl -> CreateOperation(This,bstrOperationName,varReserved,ppOperation) )
#define IAzApplication2_DeleteOperation(This,bstrOperationName,varReserved)    ( (This)->lpVtbl -> DeleteOperation(This,bstrOperationName,varReserved) )
#define IAzApplication2_get_Tasks(This,ppTaskCollection)    ( (This)->lpVtbl -> get_Tasks(This,ppTaskCollection) )
#define IAzApplication2_OpenTask(This,bstrTaskName,varReserved,ppTask)    ( (This)->lpVtbl -> OpenTask(This,bstrTaskName,varReserved,ppTask) )
#define IAzApplication2_CreateTask(This,bstrTaskName,varReserved,ppTask)    ( (This)->lpVtbl -> CreateTask(This,bstrTaskName,varReserved,ppTask) )
#define IAzApplication2_DeleteTask(This,bstrTaskName,varReserved)    ( (This)->lpVtbl -> DeleteTask(This,bstrTaskName,varReserved) )
#define IAzApplication2_get_ApplicationGroups(This,ppGroupCollection)    ( (This)->lpVtbl -> get_ApplicationGroups(This,ppGroupCollection) )
#define IAzApplication2_OpenApplicationGroup(This,bstrGroupName,varReserved,ppGroup)    ( (This)->lpVtbl -> OpenApplicationGroup(This,bstrGroupName,varReserved,ppGroup) )
#define IAzApplication2_CreateApplicationGroup(This,bstrGroupName,varReserved,ppGroup)    ( (This)->lpVtbl -> CreateApplicationGroup(This,bstrGroupName,varReserved,ppGroup) )
#define IAzApplication2_DeleteApplicationGroup(This,bstrGroupName,varReserved)    ( (This)->lpVtbl -> DeleteApplicationGroup(This,bstrGroupName,varReserved) )
#define IAzApplication2_get_Roles(This,ppRoleCollection)    ( (This)->lpVtbl -> get_Roles(This,ppRoleCollection) )
#define IAzApplication2_OpenRole(This,bstrRoleName,varReserved,ppRole)    ( (This)->lpVtbl -> OpenRole(This,bstrRoleName,varReserved,ppRole) )
#define IAzApplication2_CreateRole(This,bstrRoleName,varReserved,ppRole)    ( (This)->lpVtbl -> CreateRole(This,bstrRoleName,varReserved,ppRole) )
#define IAzApplication2_DeleteRole(This,bstrRoleName,varReserved)    ( (This)->lpVtbl -> DeleteRole(This,bstrRoleName,varReserved) )
#define IAzApplication2_InitializeClientContextFromToken(This,ullTokenHandle,varReserved,ppClientContext)    ( (This)->lpVtbl -> InitializeClientContextFromToken(This,ullTokenHandle,varReserved,ppClientContext) )
#define IAzApplication2_AddPropertyItem(This,lPropId,varProp,varReserved)    ( (This)->lpVtbl -> AddPropertyItem(This,lPropId,varProp,varReserved) )
#define IAzApplication2_DeletePropertyItem(This,lPropId,varProp,varReserved)    ( (This)->lpVtbl -> DeletePropertyItem(This,lPropId,varProp,varReserved) )
#define IAzApplication2_Submit(This,lFlags,varReserved)    ( (This)->lpVtbl -> Submit(This,lFlags,varReserved) )
#define IAzApplication2_InitializeClientContextFromName(This,ClientName,DomainName,varReserved,ppClientContext)    ( (This)->lpVtbl -> InitializeClientContextFromName(This,ClientName,DomainName,varReserved,ppClientContext) )
#define IAzApplication2_get_DelegatedPolicyUsers(This,pvarDelegatedPolicyUsers)    ( (This)->lpVtbl -> get_DelegatedPolicyUsers(This,pvarDelegatedPolicyUsers) )
#define IAzApplication2_AddDelegatedPolicyUser(This,bstrDelegatedPolicyUser,varReserved)    ( (This)->lpVtbl -> AddDelegatedPolicyUser(This,bstrDelegatedPolicyUser,varReserved) )
#define IAzApplication2_DeleteDelegatedPolicyUser(This,bstrDelegatedPolicyUser,varReserved)    ( (This)->lpVtbl -> DeleteDelegatedPolicyUser(This,bstrDelegatedPolicyUser,varReserved) )
#define IAzApplication2_InitializeClientContextFromStringSid(This,SidString,lOptions,varReserved,ppClientContext)    ( (This)->lpVtbl -> InitializeClientContextFromStringSid(This,SidString,lOptions,varReserved,ppClientContext) )
#define IAzApplication2_get_PolicyAdministratorsName(This,pvarAdmins)    ( (This)->lpVtbl -> get_PolicyAdministratorsName(This,pvarAdmins) )
#define IAzApplication2_get_PolicyReadersName(This,pvarReaders)    ( (This)->lpVtbl -> get_PolicyReadersName(This,pvarReaders) )
#define IAzApplication2_AddPolicyAdministratorName(This,bstrAdmin,varReserved)    ( (This)->lpVtbl -> AddPolicyAdministratorName(This,bstrAdmin,varReserved) )
#define IAzApplication2_DeletePolicyAdministratorName(This,bstrAdmin,varReserved)    ( (This)->lpVtbl -> DeletePolicyAdministratorName(This,bstrAdmin,varReserved) )
#define IAzApplication2_AddPolicyReaderName(This,bstrReader,varReserved)    ( (This)->lpVtbl -> AddPolicyReaderName(This,bstrReader,varReserved) )
#define IAzApplication2_DeletePolicyReaderName(This,bstrReader,varReserved)    ( (This)->lpVtbl -> DeletePolicyReaderName(This,bstrReader,varReserved) )
#define IAzApplication2_get_DelegatedPolicyUsersName(This,pvarDelegatedPolicyUsers)    ( (This)->lpVtbl -> get_DelegatedPolicyUsersName(This,pvarDelegatedPolicyUsers) )
#define IAzApplication2_AddDelegatedPolicyUserName(This,bstrDelegatedPolicyUser,varReserved)    ( (This)->lpVtbl -> AddDelegatedPolicyUserName(This,bstrDelegatedPolicyUser,varReserved) )
#define IAzApplication2_DeleteDelegatedPolicyUserName(This,bstrDelegatedPolicyUser,varReserved)    ( (This)->lpVtbl -> DeleteDelegatedPolicyUserName(This,bstrDelegatedPolicyUser,varReserved) )
#define IAzApplication2_InitializeClientContextFromToken2(This,ulTokenHandleLowPart,ulTokenHandleHighPart,varReserved,ppClientContext)    ( (This)->lpVtbl -> InitializeClientContextFromToken2(This,ulTokenHandleLowPart,ulTokenHandleHighPart,varReserved,ppClientContext) )
#define IAzApplication2_InitializeClientContext2(This,IdentifyingString,varReserved,ppClientContext)    ( (This)->lpVtbl -> InitializeClientContext2(This,IdentifyingString,varReserved,ppClientContext) )
#endif
#endif
#ifndef __IAzApplications_INTERFACE_DEFINED__
#define __IAzApplications_INTERFACE_DEFINED__
extern const IID IID_IAzApplications;
typedef struct IAzApplicationsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAzApplications * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAzApplications * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAzApplications * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAzApplications * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAzApplications * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAzApplications * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAzApplications * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IAzApplications * This, long Index, VARIANT * pvarObtPtr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IAzApplications * This, long *plCount);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IAzApplications * This, LPUNKNOWN * ppEnumPtr);
	END_INTERFACE
}  IAzApplicationsVtbl;
interface IAzApplications
{
	CONST_VTBL struct IAzApplicationsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAzApplications_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAzApplications_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAzApplications_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAzApplications_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAzApplications_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAzApplications_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAzApplications_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAzApplications_get_Item(This,Index,pvarObtPtr)    ( (This)->lpVtbl -> get_Item(This,Index,pvarObtPtr) )
#define IAzApplications_get_Count(This,plCount)    ( (This)->lpVtbl -> get_Count(This,plCount) )
#define IAzApplications_get__NewEnum(This,ppEnumPtr)    ( (This)->lpVtbl -> get__NewEnum(This,ppEnumPtr) )
#endif
#endif
#ifndef __IAzOperation_INTERFACE_DEFINED__
#define __IAzOperation_INTERFACE_DEFINED__
extern const IID IID_IAzOperation;
typedef struct IAzOperationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAzOperation * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAzOperation * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAzOperation * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAzOperation * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAzOperation * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAzOperation * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAzOperation * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IAzOperation * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * put_Name) (IAzOperation * This, BSTR bstrName);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IAzOperation * This, BSTR * pbstrDescription);
	HRESULT(STDMETHODCALLTYPE * put_Description) (IAzOperation * This, BSTR bstrDescription);
	HRESULT(STDMETHODCALLTYPE * get_ApplicationData) (IAzOperation * This, BSTR * pbstrApplicationData);
	HRESULT(STDMETHODCALLTYPE * put_ApplicationData) (IAzOperation * This, BSTR bstrApplicationData);
	HRESULT(STDMETHODCALLTYPE * get_OperationID) (IAzOperation * This, LONG * plProp);
	HRESULT(STDMETHODCALLTYPE * put_OperationID) (IAzOperation * This, LONG lProp);
	HRESULT(STDMETHODCALLTYPE * get_Writable) (IAzOperation * This, BOOL * pfProp);
	HRESULT(STDMETHODCALLTYPE * GetProperty) (IAzOperation * This, LONG lPropId, VARIANT varReserved, VARIANT * pvarProp);
	HRESULT(STDMETHODCALLTYPE * SetProperty) (IAzOperation * This, LONG lPropId, VARIANT varProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * Submit) (IAzOperation * This, LONG lFlags, VARIANT varReserved);
	END_INTERFACE
}  IAzOperationVtbl;
interface IAzOperation
{
	CONST_VTBL struct IAzOperationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAzOperation_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAzOperation_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAzOperation_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAzOperation_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAzOperation_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAzOperation_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAzOperation_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAzOperation_get_Name(This,pbstrName)    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
#define IAzOperation_put_Name(This,bstrName)    ( (This)->lpVtbl -> put_Name(This,bstrName) )
#define IAzOperation_get_Description(This,pbstrDescription)    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) )
#define IAzOperation_put_Description(This,bstrDescription)    ( (This)->lpVtbl -> put_Description(This,bstrDescription) )
#define IAzOperation_get_ApplicationData(This,pbstrApplicationData)    ( (This)->lpVtbl -> get_ApplicationData(This,pbstrApplicationData) )
#define IAzOperation_put_ApplicationData(This,bstrApplicationData)    ( (This)->lpVtbl -> put_ApplicationData(This,bstrApplicationData) )
#define IAzOperation_get_OperationID(This,plProp)    ( (This)->lpVtbl -> get_OperationID(This,plProp) )
#define IAzOperation_put_OperationID(This,lProp)    ( (This)->lpVtbl -> put_OperationID(This,lProp) )
#define IAzOperation_get_Writable(This,pfProp)    ( (This)->lpVtbl -> get_Writable(This,pfProp) )
#define IAzOperation_GetProperty(This,lPropId,varReserved,pvarProp)    ( (This)->lpVtbl -> GetProperty(This,lPropId,varReserved,pvarProp) )
#define IAzOperation_SetProperty(This,lPropId,varProp,varReserved)    ( (This)->lpVtbl -> SetProperty(This,lPropId,varProp,varReserved) )
#define IAzOperation_Submit(This,lFlags,varReserved)    ( (This)->lpVtbl -> Submit(This,lFlags,varReserved) )
#endif
#endif
#ifndef __IAzOperations_INTERFACE_DEFINED__
#define __IAzOperations_INTERFACE_DEFINED__
extern const IID IID_IAzOperations;
typedef struct IAzOperationsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAzOperations * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAzOperations * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAzOperations * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAzOperations * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAzOperations * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAzOperations * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAzOperations * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IAzOperations * This, LONG Index, VARIANT * pvarObtPtr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IAzOperations * This, LONG * plCount);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IAzOperations * This, LPUNKNOWN * ppEnumPtr);
	END_INTERFACE
}  IAzOperationsVtbl;
interface IAzOperations
{
	CONST_VTBL struct IAzOperationsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAzOperations_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAzOperations_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAzOperations_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAzOperations_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAzOperations_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAzOperations_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAzOperations_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAzOperations_get_Item(This,Index,pvarObtPtr)    ( (This)->lpVtbl -> get_Item(This,Index,pvarObtPtr) )
#define IAzOperations_get_Count(This,plCount)    ( (This)->lpVtbl -> get_Count(This,plCount) )
#define IAzOperations_get__NewEnum(This,ppEnumPtr)    ( (This)->lpVtbl -> get__NewEnum(This,ppEnumPtr) )
#endif
#endif
#ifndef __IAzTask_INTERFACE_DEFINED__
#define __IAzTask_INTERFACE_DEFINED__
extern const IID IID_IAzTask;
typedef struct IAzTaskVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAzTask * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAzTask * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAzTask * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAzTask * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAzTask * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAzTask * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAzTask * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IAzTask * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * put_Name) (IAzTask * This, BSTR bstrName);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IAzTask * This, BSTR * pbstrDescription);
	HRESULT(STDMETHODCALLTYPE * put_Description) (IAzTask * This, BSTR bstrDescription);
	HRESULT(STDMETHODCALLTYPE * get_ApplicationData) (IAzTask * This, BSTR * pbstrApplicationData);
	HRESULT(STDMETHODCALLTYPE * put_ApplicationData) (IAzTask * This, BSTR bstrApplicationData);
	HRESULT(STDMETHODCALLTYPE * get_BizRule) (IAzTask * This, BSTR * pbstrProp);
	HRESULT(STDMETHODCALLTYPE * put_BizRule) (IAzTask * This, BSTR bstrProp);
	HRESULT(STDMETHODCALLTYPE * get_BizRuleLanguage) (IAzTask * This, BSTR * pbstrProp);
	HRESULT(STDMETHODCALLTYPE * put_BizRuleLanguage) (IAzTask * This, BSTR bstrProp);
	HRESULT(STDMETHODCALLTYPE * get_BizRuleImportedPath) (IAzTask * This, BSTR * pbstrProp);
	HRESULT(STDMETHODCALLTYPE * put_BizRuleImportedPath) (IAzTask * This, BSTR bstrProp);
	HRESULT(STDMETHODCALLTYPE * get_IsRoleDefinition) (IAzTask * This, BOOL * pfProp);
	HRESULT(STDMETHODCALLTYPE * put_IsRoleDefinition) (IAzTask * This, BOOL fProp);
	HRESULT(STDMETHODCALLTYPE * get_Operations) (IAzTask * This, VARIANT * pvarProp);
	HRESULT(STDMETHODCALLTYPE * get_Tasks) (IAzTask * This, VARIANT * pvarProp);
	HRESULT(STDMETHODCALLTYPE * AddOperation) (IAzTask * This, BSTR bstrOp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeleteOperation) (IAzTask * This, BSTR bstrOp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * AddTask) (IAzTask * This, BSTR bstrTask, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeleteTask) (IAzTask * This, BSTR bstrTask, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_Writable) (IAzTask * This, BOOL * pfProp);
	HRESULT(STDMETHODCALLTYPE * GetProperty) (IAzTask * This, LONG lPropId, VARIANT varReserved, VARIANT * pvarProp);
	HRESULT(STDMETHODCALLTYPE * SetProperty) (IAzTask * This, LONG lPropId, VARIANT varProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * AddPropertyItem) (IAzTask * This, LONG lPropId, VARIANT varProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeletePropertyItem) (IAzTask * This, LONG lPropId, VARIANT varProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * Submit) (IAzTask * This, LONG lFlags, VARIANT varReserved);
	END_INTERFACE
}  IAzTaskVtbl;
interface IAzTask
{
	CONST_VTBL struct IAzTaskVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAzTask_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAzTask_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAzTask_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAzTask_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAzTask_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAzTask_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAzTask_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAzTask_get_Name(This,pbstrName)    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
#define IAzTask_put_Name(This,bstrName)    ( (This)->lpVtbl -> put_Name(This,bstrName) )
#define IAzTask_get_Description(This,pbstrDescription)    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) )
#define IAzTask_put_Description(This,bstrDescription)    ( (This)->lpVtbl -> put_Description(This,bstrDescription) )
#define IAzTask_get_ApplicationData(This,pbstrApplicationData)    ( (This)->lpVtbl -> get_ApplicationData(This,pbstrApplicationData) )
#define IAzTask_put_ApplicationData(This,bstrApplicationData)    ( (This)->lpVtbl -> put_ApplicationData(This,bstrApplicationData) )
#define IAzTask_get_BizRule(This,pbstrProp)    ( (This)->lpVtbl -> get_BizRule(This,pbstrProp) )
#define IAzTask_put_BizRule(This,bstrProp)    ( (This)->lpVtbl -> put_BizRule(This,bstrProp) )
#define IAzTask_get_BizRuleLanguage(This,pbstrProp)    ( (This)->lpVtbl -> get_BizRuleLanguage(This,pbstrProp) )
#define IAzTask_put_BizRuleLanguage(This,bstrProp)    ( (This)->lpVtbl -> put_BizRuleLanguage(This,bstrProp) )
#define IAzTask_get_BizRuleImportedPath(This,pbstrProp)    ( (This)->lpVtbl -> get_BizRuleImportedPath(This,pbstrProp) )
#define IAzTask_put_BizRuleImportedPath(This,bstrProp)    ( (This)->lpVtbl -> put_BizRuleImportedPath(This,bstrProp) )
#define IAzTask_get_IsRoleDefinition(This,pfProp)    ( (This)->lpVtbl -> get_IsRoleDefinition(This,pfProp) )
#define IAzTask_put_IsRoleDefinition(This,fProp)    ( (This)->lpVtbl -> put_IsRoleDefinition(This,fProp) )
#define IAzTask_get_Operations(This,pvarProp)    ( (This)->lpVtbl -> get_Operations(This,pvarProp) )
#define IAzTask_get_Tasks(This,pvarProp)    ( (This)->lpVtbl -> get_Tasks(This,pvarProp) )
#define IAzTask_AddOperation(This,bstrOp,varReserved)    ( (This)->lpVtbl -> AddOperation(This,bstrOp,varReserved) )
#define IAzTask_DeleteOperation(This,bstrOp,varReserved)    ( (This)->lpVtbl -> DeleteOperation(This,bstrOp,varReserved) )
#define IAzTask_AddTask(This,bstrTask,varReserved)    ( (This)->lpVtbl -> AddTask(This,bstrTask,varReserved) )
#define IAzTask_DeleteTask(This,bstrTask,varReserved)    ( (This)->lpVtbl -> DeleteTask(This,bstrTask,varReserved) )
#define IAzTask_get_Writable(This,pfProp)    ( (This)->lpVtbl -> get_Writable(This,pfProp) )
#define IAzTask_GetProperty(This,lPropId,varReserved,pvarProp)    ( (This)->lpVtbl -> GetProperty(This,lPropId,varReserved,pvarProp) )
#define IAzTask_SetProperty(This,lPropId,varProp,varReserved)    ( (This)->lpVtbl -> SetProperty(This,lPropId,varProp,varReserved) )
#define IAzTask_AddPropertyItem(This,lPropId,varProp,varReserved)    ( (This)->lpVtbl -> AddPropertyItem(This,lPropId,varProp,varReserved) )
#define IAzTask_DeletePropertyItem(This,lPropId,varProp,varReserved)    ( (This)->lpVtbl -> DeletePropertyItem(This,lPropId,varProp,varReserved) )
#define IAzTask_Submit(This,lFlags,varReserved)    ( (This)->lpVtbl -> Submit(This,lFlags,varReserved) )
#endif
#endif
#ifndef __IAzTasks_INTERFACE_DEFINED__
#define __IAzTasks_INTERFACE_DEFINED__
extern const IID IID_IAzTasks;
typedef struct IAzTasksVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAzTasks * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAzTasks * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAzTasks * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAzTasks * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAzTasks * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAzTasks * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAzTasks * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IAzTasks * This, LONG Index, VARIANT * pvarObtPtr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IAzTasks * This, LONG * plCount);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IAzTasks * This, LPUNKNOWN * ppEnumPtr);
	END_INTERFACE
}  IAzTasksVtbl;
interface IAzTasks
{
	CONST_VTBL struct IAzTasksVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAzTasks_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAzTasks_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAzTasks_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAzTasks_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAzTasks_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAzTasks_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAzTasks_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAzTasks_get_Item(This,Index,pvarObtPtr)    ( (This)->lpVtbl -> get_Item(This,Index,pvarObtPtr) )
#define IAzTasks_get_Count(This,plCount)    ( (This)->lpVtbl -> get_Count(This,plCount) )
#define IAzTasks_get__NewEnum(This,ppEnumPtr)    ( (This)->lpVtbl -> get__NewEnum(This,ppEnumPtr) )
#endif
#endif
#ifndef __IAzScope_INTERFACE_DEFINED__
#define __IAzScope_INTERFACE_DEFINED__
extern const IID IID_IAzScope;
typedef struct IAzScopeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAzScope * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAzScope * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAzScope * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAzScope * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAzScope * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAzScope * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAzScope * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IAzScope * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * put_Name) (IAzScope * This, BSTR bstrName);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IAzScope * This, BSTR * pbstrDescription);
	HRESULT(STDMETHODCALLTYPE * put_Description) (IAzScope * This, BSTR bstrDescription);
	HRESULT(STDMETHODCALLTYPE * get_ApplicationData) (IAzScope * This, BSTR * pbstrApplicationData);
	HRESULT(STDMETHODCALLTYPE * put_ApplicationData) (IAzScope * This, BSTR bstrApplicationData);
	HRESULT(STDMETHODCALLTYPE * get_Writable) (IAzScope * This, BOOL * pfProp);
	HRESULT(STDMETHODCALLTYPE * GetProperty) (IAzScope * This, LONG lPropId, VARIANT varReserved, VARIANT * pvarProp);
	HRESULT(STDMETHODCALLTYPE * SetProperty) (IAzScope * This, LONG lPropId, VARIANT varProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * AddPropertyItem) (IAzScope * This, LONG lPropId, VARIANT varProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeletePropertyItem) (IAzScope * This, LONG lPropId, VARIANT varProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_PolicyAdministrators) (IAzScope * This, VARIANT * pvarAdmins);
	HRESULT(STDMETHODCALLTYPE * get_PolicyReaders) (IAzScope * This, VARIANT * pvarReaders);
	HRESULT(STDMETHODCALLTYPE * AddPolicyAdministrator) (IAzScope * This, BSTR bstrAdmin, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeletePolicyAdministrator) (IAzScope * This, BSTR bstrAdmin, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * AddPolicyReader) (IAzScope * This, BSTR bstrReader, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeletePolicyReader) (IAzScope * This, BSTR bstrReader, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_ApplicationGroups) (IAzScope * This, IAzApplicationGroups ** ppGroupCollection);
	HRESULT(STDMETHODCALLTYPE * OpenApplicationGroup) (IAzScope * This, BSTR bstrGroupName, VARIANT varReserved, IAzApplicationGroup ** ppGroup);
	HRESULT(STDMETHODCALLTYPE * CreateApplicationGroup) (IAzScope * This, BSTR bstrGroupName, VARIANT varReserved, IAzApplicationGroup ** ppGroup);
	HRESULT(STDMETHODCALLTYPE * DeleteApplicationGroup) (IAzScope * This, BSTR bstrGroupName, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_Roles) (IAzScope * This, IAzRoles ** ppRoleCollection);
	HRESULT(STDMETHODCALLTYPE * OpenRole) (IAzScope * This, BSTR bstrRoleName, VARIANT varReserved, IAzRole ** ppRole);
	HRESULT(STDMETHODCALLTYPE * CreateRole) (IAzScope * This, BSTR bstrRoleName, VARIANT varReserved, IAzRole ** ppRole);
	HRESULT(STDMETHODCALLTYPE * DeleteRole) (IAzScope * This, BSTR bstrRoleName, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_Tasks) (IAzScope * This, IAzTasks ** ppTaskCollection);
	HRESULT(STDMETHODCALLTYPE * OpenTask) (IAzScope * This, BSTR bstrTaskName, VARIANT varReserved, IAzTask ** ppTask);
	HRESULT(STDMETHODCALLTYPE * CreateTask) (IAzScope * This, BSTR bstrTaskName, VARIANT varReserved, IAzTask ** ppTask);
	HRESULT(STDMETHODCALLTYPE * DeleteTask) (IAzScope * This, BSTR bstrTaskName, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * Submit) (IAzScope * This, LONG lFlags, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_CanBeDelegated) (IAzScope * This, BOOL * pfProp);
	HRESULT(STDMETHODCALLTYPE * get_BizrulesWritable) (IAzScope * This, BOOL * pfProp);
	HRESULT(STDMETHODCALLTYPE * get_PolicyAdministratorsName) (IAzScope * This, VARIANT * pvarAdmins);
	HRESULT(STDMETHODCALLTYPE * get_PolicyReadersName) (IAzScope * This, VARIANT * pvarReaders);
	HRESULT(STDMETHODCALLTYPE * AddPolicyAdministratorName) (IAzScope * This, BSTR bstrAdmin, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeletePolicyAdministratorName) (IAzScope * This, BSTR bstrAdmin, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * AddPolicyReaderName) (IAzScope * This, BSTR bstrReader, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeletePolicyReaderName) (IAzScope * This, BSTR bstrReader, VARIANT varReserved);
	END_INTERFACE
}  IAzScopeVtbl;
interface IAzScope
{
	CONST_VTBL struct IAzScopeVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAzScope_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAzScope_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAzScope_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAzScope_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAzScope_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAzScope_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAzScope_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAzScope_get_Name(This,pbstrName)    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
#define IAzScope_put_Name(This,bstrName)    ( (This)->lpVtbl -> put_Name(This,bstrName) )
#define IAzScope_get_Description(This,pbstrDescription)    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) )
#define IAzScope_put_Description(This,bstrDescription)    ( (This)->lpVtbl -> put_Description(This,bstrDescription) )
#define IAzScope_get_ApplicationData(This,pbstrApplicationData)    ( (This)->lpVtbl -> get_ApplicationData(This,pbstrApplicationData) )
#define IAzScope_put_ApplicationData(This,bstrApplicationData)    ( (This)->lpVtbl -> put_ApplicationData(This,bstrApplicationData) )
#define IAzScope_get_Writable(This,pfProp)    ( (This)->lpVtbl -> get_Writable(This,pfProp) )
#define IAzScope_GetProperty(This,lPropId,varReserved,pvarProp)    ( (This)->lpVtbl -> GetProperty(This,lPropId,varReserved,pvarProp) )
#define IAzScope_SetProperty(This,lPropId,varProp,varReserved)    ( (This)->lpVtbl -> SetProperty(This,lPropId,varProp,varReserved) )
#define IAzScope_AddPropertyItem(This,lPropId,varProp,varReserved)    ( (This)->lpVtbl -> AddPropertyItem(This,lPropId,varProp,varReserved) )
#define IAzScope_DeletePropertyItem(This,lPropId,varProp,varReserved)    ( (This)->lpVtbl -> DeletePropertyItem(This,lPropId,varProp,varReserved) )
#define IAzScope_get_PolicyAdministrators(This,pvarAdmins)    ( (This)->lpVtbl -> get_PolicyAdministrators(This,pvarAdmins) )
#define IAzScope_get_PolicyReaders(This,pvarReaders)    ( (This)->lpVtbl -> get_PolicyReaders(This,pvarReaders) )
#define IAzScope_AddPolicyAdministrator(This,bstrAdmin,varReserved)    ( (This)->lpVtbl -> AddPolicyAdministrator(This,bstrAdmin,varReserved) )
#define IAzScope_DeletePolicyAdministrator(This,bstrAdmin,varReserved)    ( (This)->lpVtbl -> DeletePolicyAdministrator(This,bstrAdmin,varReserved) )
#define IAzScope_AddPolicyReader(This,bstrReader,varReserved)    ( (This)->lpVtbl -> AddPolicyReader(This,bstrReader,varReserved) )
#define IAzScope_DeletePolicyReader(This,bstrReader,varReserved)    ( (This)->lpVtbl -> DeletePolicyReader(This,bstrReader,varReserved) )
#define IAzScope_get_ApplicationGroups(This,ppGroupCollection)    ( (This)->lpVtbl -> get_ApplicationGroups(This,ppGroupCollection) )
#define IAzScope_OpenApplicationGroup(This,bstrGroupName,varReserved,ppGroup)    ( (This)->lpVtbl -> OpenApplicationGroup(This,bstrGroupName,varReserved,ppGroup) )
#define IAzScope_CreateApplicationGroup(This,bstrGroupName,varReserved,ppGroup)    ( (This)->lpVtbl -> CreateApplicationGroup(This,bstrGroupName,varReserved,ppGroup) )
#define IAzScope_DeleteApplicationGroup(This,bstrGroupName,varReserved)    ( (This)->lpVtbl -> DeleteApplicationGroup(This,bstrGroupName,varReserved) )
#define IAzScope_get_Roles(This,ppRoleCollection)    ( (This)->lpVtbl -> get_Roles(This,ppRoleCollection) )
#define IAzScope_OpenRole(This,bstrRoleName,varReserved,ppRole)    ( (This)->lpVtbl -> OpenRole(This,bstrRoleName,varReserved,ppRole) )
#define IAzScope_CreateRole(This,bstrRoleName,varReserved,ppRole)    ( (This)->lpVtbl -> CreateRole(This,bstrRoleName,varReserved,ppRole) )
#define IAzScope_DeleteRole(This,bstrRoleName,varReserved)    ( (This)->lpVtbl -> DeleteRole(This,bstrRoleName,varReserved) )
#define IAzScope_get_Tasks(This,ppTaskCollection)    ( (This)->lpVtbl -> get_Tasks(This,ppTaskCollection) )
#define IAzScope_OpenTask(This,bstrTaskName,varReserved,ppTask)    ( (This)->lpVtbl -> OpenTask(This,bstrTaskName,varReserved,ppTask) )
#define IAzScope_CreateTask(This,bstrTaskName,varReserved,ppTask)    ( (This)->lpVtbl -> CreateTask(This,bstrTaskName,varReserved,ppTask) )
#define IAzScope_DeleteTask(This,bstrTaskName,varReserved)    ( (This)->lpVtbl -> DeleteTask(This,bstrTaskName,varReserved) )
#define IAzScope_Submit(This,lFlags,varReserved)    ( (This)->lpVtbl -> Submit(This,lFlags,varReserved) )
#define IAzScope_get_CanBeDelegated(This,pfProp)    ( (This)->lpVtbl -> get_CanBeDelegated(This,pfProp) )
#define IAzScope_get_BizrulesWritable(This,pfProp)    ( (This)->lpVtbl -> get_BizrulesWritable(This,pfProp) )
#define IAzScope_get_PolicyAdministratorsName(This,pvarAdmins)    ( (This)->lpVtbl -> get_PolicyAdministratorsName(This,pvarAdmins) )
#define IAzScope_get_PolicyReadersName(This,pvarReaders)    ( (This)->lpVtbl -> get_PolicyReadersName(This,pvarReaders) )
#define IAzScope_AddPolicyAdministratorName(This,bstrAdmin,varReserved)    ( (This)->lpVtbl -> AddPolicyAdministratorName(This,bstrAdmin,varReserved) )
#define IAzScope_DeletePolicyAdministratorName(This,bstrAdmin,varReserved)    ( (This)->lpVtbl -> DeletePolicyAdministratorName(This,bstrAdmin,varReserved) )
#define IAzScope_AddPolicyReaderName(This,bstrReader,varReserved)    ( (This)->lpVtbl -> AddPolicyReaderName(This,bstrReader,varReserved) )
#define IAzScope_DeletePolicyReaderName(This,bstrReader,varReserved)    ( (This)->lpVtbl -> DeletePolicyReaderName(This,bstrReader,varReserved) )
#endif
#endif
#ifndef __IAzScopes_INTERFACE_DEFINED__
#define __IAzScopes_INTERFACE_DEFINED__
extern const IID IID_IAzScopes;
typedef struct IAzScopesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAzScopes * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAzScopes * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAzScopes * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAzScopes * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAzScopes * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAzScopes * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAzScopes * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IAzScopes * This, LONG Index, VARIANT * pvarObtPtr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IAzScopes * This, LONG * plCount);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IAzScopes * This, LPUNKNOWN * ppEnumPtr);
	END_INTERFACE
}  IAzScopesVtbl;
interface IAzScopes
{
	CONST_VTBL struct IAzScopesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAzScopes_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAzScopes_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAzScopes_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAzScopes_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAzScopes_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAzScopes_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAzScopes_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAzScopes_get_Item(This,Index,pvarObtPtr)    ( (This)->lpVtbl -> get_Item(This,Index,pvarObtPtr) )
#define IAzScopes_get_Count(This,plCount)    ( (This)->lpVtbl -> get_Count(This,plCount) )
#define IAzScopes_get__NewEnum(This,ppEnumPtr)    ( (This)->lpVtbl -> get__NewEnum(This,ppEnumPtr) )
#endif
#endif
#ifndef __IAzApplicationGroup_INTERFACE_DEFINED__
#define __IAzApplicationGroup_INTERFACE_DEFINED__
extern const IID IID_IAzApplicationGroup;
typedef struct IAzApplicationGroupVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAzApplicationGroup * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAzApplicationGroup * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAzApplicationGroup * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAzApplicationGroup * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAzApplicationGroup * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAzApplicationGroup * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAzApplicationGroup * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IAzApplicationGroup * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * put_Name) (IAzApplicationGroup * This, BSTR bstrName);
	HRESULT(STDMETHODCALLTYPE * get_Type) (IAzApplicationGroup * This, LONG * plProp);
	HRESULT(STDMETHODCALLTYPE * put_Type) (IAzApplicationGroup * This, LONG lProp);
	HRESULT(STDMETHODCALLTYPE * get_LdapQuery) (IAzApplicationGroup * This, BSTR * pbstrProp);
	HRESULT(STDMETHODCALLTYPE * put_LdapQuery) (IAzApplicationGroup * This, BSTR bstrProp);
	HRESULT(STDMETHODCALLTYPE * get_AppMembers) (IAzApplicationGroup * This, VARIANT * pvarProp);
	HRESULT(STDMETHODCALLTYPE * get_AppNonMembers) (IAzApplicationGroup * This, VARIANT * pvarProp);
	HRESULT(STDMETHODCALLTYPE * get_Members) (IAzApplicationGroup * This, VARIANT * pvarProp);
	HRESULT(STDMETHODCALLTYPE * get_NonMembers) (IAzApplicationGroup * This, VARIANT * pvarProp);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IAzApplicationGroup * This, BSTR * pbstrDescription);
	HRESULT(STDMETHODCALLTYPE * put_Description) (IAzApplicationGroup * This, BSTR bstrDescription);
	HRESULT(STDMETHODCALLTYPE * AddAppMember) (IAzApplicationGroup * This, BSTR bstrProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeleteAppMember) (IAzApplicationGroup * This, BSTR bstrProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * AddAppNonMember) (IAzApplicationGroup * This, BSTR bstrProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeleteAppNonMember) (IAzApplicationGroup * This, BSTR bstrProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * AddMember) (IAzApplicationGroup * This, BSTR bstrProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeleteMember) (IAzApplicationGroup * This, BSTR bstrProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * AddNonMember) (IAzApplicationGroup * This, BSTR bstrProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeleteNonMember) (IAzApplicationGroup * This, BSTR bstrProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_Writable) (IAzApplicationGroup * This, BOOL * pfProp);
	HRESULT(STDMETHODCALLTYPE * GetProperty) (IAzApplicationGroup * This, LONG lPropId, VARIANT varReserved, VARIANT * pvarProp);
	HRESULT(STDMETHODCALLTYPE * SetProperty) (IAzApplicationGroup * This, LONG lPropId, VARIANT varProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * AddPropertyItem) (IAzApplicationGroup * This, LONG lPropId, VARIANT varProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeletePropertyItem) (IAzApplicationGroup * This, LONG lPropId, VARIANT varProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * Submit) (IAzApplicationGroup * This, LONG lFlags, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * AddMemberName) (IAzApplicationGroup * This, BSTR bstrProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeleteMemberName) (IAzApplicationGroup * This, BSTR bstrProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * AddNonMemberName) (IAzApplicationGroup * This, BSTR bstrProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeleteNonMemberName) (IAzApplicationGroup * This, BSTR bstrProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_MembersName) (IAzApplicationGroup * This, VARIANT * pvarProp);
	HRESULT(STDMETHODCALLTYPE * get_NonMembersName) (IAzApplicationGroup * This, VARIANT * pvarProp);
	END_INTERFACE
}  IAzApplicationGroupVtbl;
interface IAzApplicationGroup
{
	CONST_VTBL struct IAzApplicationGroupVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAzApplicationGroup_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAzApplicationGroup_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAzApplicationGroup_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAzApplicationGroup_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAzApplicationGroup_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAzApplicationGroup_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAzApplicationGroup_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAzApplicationGroup_get_Name(This,pbstrName)    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
#define IAzApplicationGroup_put_Name(This,bstrName)    ( (This)->lpVtbl -> put_Name(This,bstrName) )
#define IAzApplicationGroup_get_Type(This,plProp)    ( (This)->lpVtbl -> get_Type(This,plProp) )
#define IAzApplicationGroup_put_Type(This,lProp)    ( (This)->lpVtbl -> put_Type(This,lProp) )
#define IAzApplicationGroup_get_LdapQuery(This,pbstrProp)    ( (This)->lpVtbl -> get_LdapQuery(This,pbstrProp) )
#define IAzApplicationGroup_put_LdapQuery(This,bstrProp)    ( (This)->lpVtbl -> put_LdapQuery(This,bstrProp) )
#define IAzApplicationGroup_get_AppMembers(This,pvarProp)    ( (This)->lpVtbl -> get_AppMembers(This,pvarProp) )
#define IAzApplicationGroup_get_AppNonMembers(This,pvarProp)    ( (This)->lpVtbl -> get_AppNonMembers(This,pvarProp) )
#define IAzApplicationGroup_get_Members(This,pvarProp)    ( (This)->lpVtbl -> get_Members(This,pvarProp) )
#define IAzApplicationGroup_get_NonMembers(This,pvarProp)    ( (This)->lpVtbl -> get_NonMembers(This,pvarProp) )
#define IAzApplicationGroup_get_Description(This,pbstrDescription)    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) )
#define IAzApplicationGroup_put_Description(This,bstrDescription)    ( (This)->lpVtbl -> put_Description(This,bstrDescription) )
#define IAzApplicationGroup_AddAppMember(This,bstrProp,varReserved)    ( (This)->lpVtbl -> AddAppMember(This,bstrProp,varReserved) )
#define IAzApplicationGroup_DeleteAppMember(This,bstrProp,varReserved)    ( (This)->lpVtbl -> DeleteAppMember(This,bstrProp,varReserved) )
#define IAzApplicationGroup_AddAppNonMember(This,bstrProp,varReserved)    ( (This)->lpVtbl -> AddAppNonMember(This,bstrProp,varReserved) )
#define IAzApplicationGroup_DeleteAppNonMember(This,bstrProp,varReserved)    ( (This)->lpVtbl -> DeleteAppNonMember(This,bstrProp,varReserved) )
#define IAzApplicationGroup_AddMember(This,bstrProp,varReserved)    ( (This)->lpVtbl -> AddMember(This,bstrProp,varReserved) )
#define IAzApplicationGroup_DeleteMember(This,bstrProp,varReserved)    ( (This)->lpVtbl -> DeleteMember(This,bstrProp,varReserved) )
#define IAzApplicationGroup_AddNonMember(This,bstrProp,varReserved)    ( (This)->lpVtbl -> AddNonMember(This,bstrProp,varReserved) )
#define IAzApplicationGroup_DeleteNonMember(This,bstrProp,varReserved)    ( (This)->lpVtbl -> DeleteNonMember(This,bstrProp,varReserved) )
#define IAzApplicationGroup_get_Writable(This,pfProp)    ( (This)->lpVtbl -> get_Writable(This,pfProp) )
#define IAzApplicationGroup_GetProperty(This,lPropId,varReserved,pvarProp)    ( (This)->lpVtbl -> GetProperty(This,lPropId,varReserved,pvarProp) )
#define IAzApplicationGroup_SetProperty(This,lPropId,varProp,varReserved)    ( (This)->lpVtbl -> SetProperty(This,lPropId,varProp,varReserved) )
#define IAzApplicationGroup_AddPropertyItem(This,lPropId,varProp,varReserved)    ( (This)->lpVtbl -> AddPropertyItem(This,lPropId,varProp,varReserved) )
#define IAzApplicationGroup_DeletePropertyItem(This,lPropId,varProp,varReserved)    ( (This)->lpVtbl -> DeletePropertyItem(This,lPropId,varProp,varReserved) )
#define IAzApplicationGroup_Submit(This,lFlags,varReserved)    ( (This)->lpVtbl -> Submit(This,lFlags,varReserved) )
#define IAzApplicationGroup_AddMemberName(This,bstrProp,varReserved)    ( (This)->lpVtbl -> AddMemberName(This,bstrProp,varReserved) )
#define IAzApplicationGroup_DeleteMemberName(This,bstrProp,varReserved)    ( (This)->lpVtbl -> DeleteMemberName(This,bstrProp,varReserved) )
#define IAzApplicationGroup_AddNonMemberName(This,bstrProp,varReserved)    ( (This)->lpVtbl -> AddNonMemberName(This,bstrProp,varReserved) )
#define IAzApplicationGroup_DeleteNonMemberName(This,bstrProp,varReserved)    ( (This)->lpVtbl -> DeleteNonMemberName(This,bstrProp,varReserved) )
#define IAzApplicationGroup_get_MembersName(This,pvarProp)    ( (This)->lpVtbl -> get_MembersName(This,pvarProp) )
#define IAzApplicationGroup_get_NonMembersName(This,pvarProp)    ( (This)->lpVtbl -> get_NonMembersName(This,pvarProp) )
#endif
#endif
#ifndef __IAzApplicationGroups_INTERFACE_DEFINED__
#define __IAzApplicationGroups_INTERFACE_DEFINED__
extern const IID IID_IAzApplicationGroups;
typedef struct IAzApplicationGroupsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAzApplicationGroups * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAzApplicationGroups * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAzApplicationGroups * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAzApplicationGroups * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAzApplicationGroups * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAzApplicationGroups * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAzApplicationGroups * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IAzApplicationGroups * This, LONG Index, VARIANT * pvarObtPtr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IAzApplicationGroups * This, LONG * plCount);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IAzApplicationGroups * This, LPUNKNOWN * ppEnumPtr);
	END_INTERFACE
}  IAzApplicationGroupsVtbl;
interface IAzApplicationGroups
{
	CONST_VTBL struct IAzApplicationGroupsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAzApplicationGroups_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAzApplicationGroups_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAzApplicationGroups_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAzApplicationGroups_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAzApplicationGroups_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAzApplicationGroups_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAzApplicationGroups_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAzApplicationGroups_get_Item(This,Index,pvarObtPtr)    ( (This)->lpVtbl -> get_Item(This,Index,pvarObtPtr) )
#define IAzApplicationGroups_get_Count(This,plCount)    ( (This)->lpVtbl -> get_Count(This,plCount) )
#define IAzApplicationGroups_get__NewEnum(This,ppEnumPtr)    ( (This)->lpVtbl -> get__NewEnum(This,ppEnumPtr) )
#endif
#endif
#ifndef __IAzRole_INTERFACE_DEFINED__
#define __IAzRole_INTERFACE_DEFINED__
extern const IID IID_IAzRole;
typedef struct IAzRoleVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAzRole * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAzRole * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAzRole * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAzRole * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAzRole * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAzRole * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAzRole * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IAzRole * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * put_Name) (IAzRole * This, BSTR bstrName);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IAzRole * This, BSTR * pbstrDescription);
	HRESULT(STDMETHODCALLTYPE * put_Description) (IAzRole * This, BSTR bstrDescription);
	HRESULT(STDMETHODCALLTYPE * get_ApplicationData) (IAzRole * This, BSTR * pbstrApplicationData);
	HRESULT(STDMETHODCALLTYPE * put_ApplicationData) (IAzRole * This, BSTR bstrApplicationData);
	HRESULT(STDMETHODCALLTYPE * AddAppMember) (IAzRole * This, BSTR bstrProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeleteAppMember) (IAzRole * This, BSTR bstrProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * AddTask) (IAzRole * This, BSTR bstrProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeleteTask) (IAzRole * This, BSTR bstrProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * AddOperation) (IAzRole * This, BSTR bstrProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeleteOperation) (IAzRole * This, BSTR bstrProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * AddMember) (IAzRole * This, BSTR bstrProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeleteMember) (IAzRole * This, BSTR bstrProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_Writable) (IAzRole * This, BOOL * pfProp);
	HRESULT(STDMETHODCALLTYPE * GetProperty) (IAzRole * This, LONG lPropId, VARIANT varReserved, VARIANT * pvarProp);
	HRESULT(STDMETHODCALLTYPE * SetProperty) (IAzRole * This, LONG lPropId, VARIANT varProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_AppMembers) (IAzRole * This, VARIANT * pvarProp);
	HRESULT(STDMETHODCALLTYPE * get_Members) (IAzRole * This, VARIANT * pvarProp);
	HRESULT(STDMETHODCALLTYPE * get_Operations) (IAzRole * This, VARIANT * pvarProp);
	HRESULT(STDMETHODCALLTYPE * get_Tasks) (IAzRole * This, VARIANT * pvarProp);
	HRESULT(STDMETHODCALLTYPE * AddPropertyItem) (IAzRole * This, LONG lPropId, VARIANT varProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeletePropertyItem) (IAzRole * This, LONG lPropId, VARIANT varProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * Submit) (IAzRole * This, LONG lFlags, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * AddMemberName) (IAzRole * This, BSTR bstrProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeleteMemberName) (IAzRole * This, BSTR bstrProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_MembersName) (IAzRole * This, VARIANT * pvarProp);
	END_INTERFACE
}  IAzRoleVtbl;
interface IAzRole
{
	CONST_VTBL struct IAzRoleVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAzRole_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAzRole_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAzRole_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAzRole_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAzRole_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAzRole_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAzRole_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAzRole_get_Name(This,pbstrName)    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
#define IAzRole_put_Name(This,bstrName)    ( (This)->lpVtbl -> put_Name(This,bstrName) )
#define IAzRole_get_Description(This,pbstrDescription)    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) )
#define IAzRole_put_Description(This,bstrDescription)    ( (This)->lpVtbl -> put_Description(This,bstrDescription) )
#define IAzRole_get_ApplicationData(This,pbstrApplicationData)    ( (This)->lpVtbl -> get_ApplicationData(This,pbstrApplicationData) )
#define IAzRole_put_ApplicationData(This,bstrApplicationData)    ( (This)->lpVtbl -> put_ApplicationData(This,bstrApplicationData) )
#define IAzRole_AddAppMember(This,bstrProp,varReserved)    ( (This)->lpVtbl -> AddAppMember(This,bstrProp,varReserved) )
#define IAzRole_DeleteAppMember(This,bstrProp,varReserved)    ( (This)->lpVtbl -> DeleteAppMember(This,bstrProp,varReserved) )
#define IAzRole_AddTask(This,bstrProp,varReserved)    ( (This)->lpVtbl -> AddTask(This,bstrProp,varReserved) )
#define IAzRole_DeleteTask(This,bstrProp,varReserved)    ( (This)->lpVtbl -> DeleteTask(This,bstrProp,varReserved) )
#define IAzRole_AddOperation(This,bstrProp,varReserved)    ( (This)->lpVtbl -> AddOperation(This,bstrProp,varReserved) )
#define IAzRole_DeleteOperation(This,bstrProp,varReserved)    ( (This)->lpVtbl -> DeleteOperation(This,bstrProp,varReserved) )
#define IAzRole_AddMember(This,bstrProp,varReserved)    ( (This)->lpVtbl -> AddMember(This,bstrProp,varReserved) )
#define IAzRole_DeleteMember(This,bstrProp,varReserved)    ( (This)->lpVtbl -> DeleteMember(This,bstrProp,varReserved) )
#define IAzRole_get_Writable(This,pfProp)    ( (This)->lpVtbl -> get_Writable(This,pfProp) )
#define IAzRole_GetProperty(This,lPropId,varReserved,pvarProp)    ( (This)->lpVtbl -> GetProperty(This,lPropId,varReserved,pvarProp) )
#define IAzRole_SetProperty(This,lPropId,varProp,varReserved)    ( (This)->lpVtbl -> SetProperty(This,lPropId,varProp,varReserved) )
#define IAzRole_get_AppMembers(This,pvarProp)    ( (This)->lpVtbl -> get_AppMembers(This,pvarProp) )
#define IAzRole_get_Members(This,pvarProp)    ( (This)->lpVtbl -> get_Members(This,pvarProp) )
#define IAzRole_get_Operations(This,pvarProp)    ( (This)->lpVtbl -> get_Operations(This,pvarProp) )
#define IAzRole_get_Tasks(This,pvarProp)    ( (This)->lpVtbl -> get_Tasks(This,pvarProp) )
#define IAzRole_AddPropertyItem(This,lPropId,varProp,varReserved)    ( (This)->lpVtbl -> AddPropertyItem(This,lPropId,varProp,varReserved) )
#define IAzRole_DeletePropertyItem(This,lPropId,varProp,varReserved)    ( (This)->lpVtbl -> DeletePropertyItem(This,lPropId,varProp,varReserved) )
#define IAzRole_Submit(This,lFlags,varReserved)    ( (This)->lpVtbl -> Submit(This,lFlags,varReserved) )
#define IAzRole_AddMemberName(This,bstrProp,varReserved)    ( (This)->lpVtbl -> AddMemberName(This,bstrProp,varReserved) )
#define IAzRole_DeleteMemberName(This,bstrProp,varReserved)    ( (This)->lpVtbl -> DeleteMemberName(This,bstrProp,varReserved) )
#define IAzRole_get_MembersName(This,pvarProp)    ( (This)->lpVtbl -> get_MembersName(This,pvarProp) )
#endif
#endif
#ifndef __IAzRoles_INTERFACE_DEFINED__
#define __IAzRoles_INTERFACE_DEFINED__
extern const IID IID_IAzRoles;
typedef struct IAzRolesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAzRoles * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAzRoles * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAzRoles * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAzRoles * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAzRoles * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAzRoles * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAzRoles * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IAzRoles * This, LONG Index, VARIANT * pvarObtPtr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IAzRoles * This, LONG * plCount);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IAzRoles * This, LPUNKNOWN * ppEnumPtr);
	END_INTERFACE
}  IAzRolesVtbl;
interface IAzRoles
{
	CONST_VTBL struct IAzRolesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAzRoles_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAzRoles_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAzRoles_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAzRoles_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAzRoles_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAzRoles_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAzRoles_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAzRoles_get_Item(This,Index,pvarObtPtr)    ( (This)->lpVtbl -> get_Item(This,Index,pvarObtPtr) )
#define IAzRoles_get_Count(This,plCount)    ( (This)->lpVtbl -> get_Count(This,plCount) )
#define IAzRoles_get__NewEnum(This,ppEnumPtr)    ( (This)->lpVtbl -> get__NewEnum(This,ppEnumPtr) )
#endif
#endif
#ifndef __IAzClientContext_INTERFACE_DEFINED__
#define __IAzClientContext_INTERFACE_DEFINED__
extern const IID IID_IAzClientContext;
typedef struct IAzClientContextVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAzClientContext * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAzClientContext * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAzClientContext * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAzClientContext * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAzClientContext * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAzClientContext * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAzClientContext * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * AccessCheck) (IAzClientContext * This, BSTR bstrObjectName, VARIANT varScopeNames, VARIANT varOperations, VARIANT varParameterNames, VARIANT varParameterValues, VARIANT varInterfaceNames, VARIANT varInterfaceFlags, VARIANT varInterfaces, VARIANT * pvarResults);
	HRESULT(STDMETHODCALLTYPE * GetBusinessRuleString) (IAzClientContext * This, BSTR * pbstrBusinessRuleString);
	HRESULT(STDMETHODCALLTYPE * get_UserDn) (IAzClientContext * This, BSTR * pbstrProp);
	HRESULT(STDMETHODCALLTYPE * get_UserSamCompat) (IAzClientContext * This, BSTR * pbstrProp);
	HRESULT(STDMETHODCALLTYPE * get_UserDisplay) (IAzClientContext * This, BSTR * pbstrProp);
	HRESULT(STDMETHODCALLTYPE * get_UserGuid) (IAzClientContext * This, BSTR * pbstrProp);
	HRESULT(STDMETHODCALLTYPE * get_UserCanonical) (IAzClientContext * This, BSTR * pbstrProp);
	HRESULT(STDMETHODCALLTYPE * get_UserUpn) (IAzClientContext * This, BSTR * pbstrProp);
	HRESULT(STDMETHODCALLTYPE * get_UserDnsSamCompat) (IAzClientContext * This, BSTR * pbstrProp);
	HRESULT(STDMETHODCALLTYPE * GetProperty) (IAzClientContext * This, LONG lPropId, VARIANT varReserved, VARIANT * pvarProp);
	HRESULT(STDMETHODCALLTYPE * GetRoles) (IAzClientContext * This, BSTR bstrScopeName, VARIANT * pvarRoleNames);
	HRESULT(STDMETHODCALLTYPE * get_RoleForAccessCheck) (IAzClientContext * This, BSTR * pbstrProp);
	HRESULT(STDMETHODCALLTYPE * put_RoleForAccessCheck) (IAzClientContext * This, BSTR bstrProp);
	END_INTERFACE
}  IAzClientContextVtbl;
interface IAzClientContext
{
	CONST_VTBL struct IAzClientContextVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAzClientContext_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAzClientContext_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAzClientContext_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAzClientContext_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAzClientContext_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAzClientContext_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAzClientContext_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAzClientContext_AccessCheck(This,bstrObjectName,varScopeNames,varOperations,varParameterNames,varParameterValues,varInterfaceNames,varInterfaceFlags,varInterfaces,pvarResults)    ( (This)->lpVtbl -> AccessCheck(This,bstrObjectName,varScopeNames,varOperations,varParameterNames,varParameterValues,varInterfaceNames,varInterfaceFlags,varInterfaces,pvarResults) )
#define IAzClientContext_GetBusinessRuleString(This,pbstrBusinessRuleString)    ( (This)->lpVtbl -> GetBusinessRuleString(This,pbstrBusinessRuleString) )
#define IAzClientContext_get_UserDn(This,pbstrProp)    ( (This)->lpVtbl -> get_UserDn(This,pbstrProp) )
#define IAzClientContext_get_UserSamCompat(This,pbstrProp)    ( (This)->lpVtbl -> get_UserSamCompat(This,pbstrProp) )
#define IAzClientContext_get_UserDisplay(This,pbstrProp)    ( (This)->lpVtbl -> get_UserDisplay(This,pbstrProp) )
#define IAzClientContext_get_UserGuid(This,pbstrProp)    ( (This)->lpVtbl -> get_UserGuid(This,pbstrProp) )
#define IAzClientContext_get_UserCanonical(This,pbstrProp)    ( (This)->lpVtbl -> get_UserCanonical(This,pbstrProp) )
#define IAzClientContext_get_UserUpn(This,pbstrProp)    ( (This)->lpVtbl -> get_UserUpn(This,pbstrProp) )
#define IAzClientContext_get_UserDnsSamCompat(This,pbstrProp)    ( (This)->lpVtbl -> get_UserDnsSamCompat(This,pbstrProp) )
#define IAzClientContext_GetProperty(This,lPropId,varReserved,pvarProp)    ( (This)->lpVtbl -> GetProperty(This,lPropId,varReserved,pvarProp) )
#define IAzClientContext_GetRoles(This,bstrScopeName,pvarRoleNames)    ( (This)->lpVtbl -> GetRoles(This,bstrScopeName,pvarRoleNames) )
#define IAzClientContext_get_RoleForAccessCheck(This,pbstrProp)    ( (This)->lpVtbl -> get_RoleForAccessCheck(This,pbstrProp) )
#define IAzClientContext_put_RoleForAccessCheck(This,bstrProp)    ( (This)->lpVtbl -> put_RoleForAccessCheck(This,bstrProp) )
#endif
#endif
#ifndef __IAzClientContext2_INTERFACE_DEFINED__
#define __IAzClientContext2_INTERFACE_DEFINED__
extern const IID IID_IAzClientContext2;
typedef struct IAzClientContext2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAzClientContext2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAzClientContext2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAzClientContext2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAzClientContext2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAzClientContext2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAzClientContext2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAzClientContext2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * AccessCheck) (IAzClientContext2 * This, BSTR bstrObjectName, VARIANT varScopeNames, VARIANT varOperations, VARIANT varParameterNames, VARIANT varParameterValues, VARIANT varInterfaceNames, VARIANT varInterfaceFlags, VARIANT varInterfaces, VARIANT * pvarResults);
	HRESULT(STDMETHODCALLTYPE * GetBusinessRuleString) (IAzClientContext2 * This, BSTR * pbstrBusinessRuleString);
	HRESULT(STDMETHODCALLTYPE * get_UserDn) (IAzClientContext2 * This, BSTR * pbstrProp);
	HRESULT(STDMETHODCALLTYPE * get_UserSamCompat) (IAzClientContext2 * This, BSTR * pbstrProp);
	HRESULT(STDMETHODCALLTYPE * get_UserDisplay) (IAzClientContext2 * This, BSTR * pbstrProp);
	HRESULT(STDMETHODCALLTYPE * get_UserGuid) (IAzClientContext2 * This, BSTR * pbstrProp);
	HRESULT(STDMETHODCALLTYPE * get_UserCanonical) (IAzClientContext2 * This, BSTR * pbstrProp);
	HRESULT(STDMETHODCALLTYPE * get_UserUpn) (IAzClientContext2 * This, BSTR * pbstrProp);
	HRESULT(STDMETHODCALLTYPE * get_UserDnsSamCompat) (IAzClientContext2 * This, BSTR * pbstrProp);
	HRESULT(STDMETHODCALLTYPE * GetProperty) (IAzClientContext2 * This, LONG lPropId, VARIANT varReserved, VARIANT * pvarProp);
	HRESULT(STDMETHODCALLTYPE * GetRoles) (IAzClientContext2 * This, BSTR bstrScopeName, VARIANT * pvarRoleNames);
	HRESULT(STDMETHODCALLTYPE * get_RoleForAccessCheck) (IAzClientContext2 * This, BSTR * pbstrProp);
	HRESULT(STDMETHODCALLTYPE * put_RoleForAccessCheck) (IAzClientContext2 * This, BSTR bstrProp);
	HRESULT(STDMETHODCALLTYPE * GetAssignedScopesPage) (IAzClientContext2 * This, LONG lOptions, LONG PageSize, VARIANT * pvarCursor, VARIANT * pvarScopeNames);
	HRESULT(STDMETHODCALLTYPE * AddRoles) (IAzClientContext2 * This, VARIANT varRoles, BSTR bstrScopeName);
	HRESULT(STDMETHODCALLTYPE * AddApplicationGroups) (IAzClientContext2 * This, VARIANT varApplicationGroups);
	HRESULT(STDMETHODCALLTYPE * AddStringSids) (IAzClientContext2 * This, VARIANT varStringSids);
	HRESULT(STDMETHODCALLTYPE * put_LDAPQueryDN) (IAzClientContext2 * This, BSTR bstrLDAPQueryDN);
	HRESULT(STDMETHODCALLTYPE * get_LDAPQueryDN) (IAzClientContext2 * This, BSTR * pbstrLDAPQueryDN);
	END_INTERFACE
}  IAzClientContext2Vtbl;
interface IAzClientContext2
{
	CONST_VTBL struct IAzClientContext2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAzClientContext2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAzClientContext2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAzClientContext2_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAzClientContext2_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAzClientContext2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAzClientContext2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAzClientContext2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAzClientContext2_AccessCheck(This,bstrObjectName,varScopeNames,varOperations,varParameterNames,varParameterValues,varInterfaceNames,varInterfaceFlags,varInterfaces,pvarResults)    ( (This)->lpVtbl -> AccessCheck(This,bstrObjectName,varScopeNames,varOperations,varParameterNames,varParameterValues,varInterfaceNames,varInterfaceFlags,varInterfaces,pvarResults) )
#define IAzClientContext2_GetBusinessRuleString(This,pbstrBusinessRuleString)    ( (This)->lpVtbl -> GetBusinessRuleString(This,pbstrBusinessRuleString) )
#define IAzClientContext2_get_UserDn(This,pbstrProp)    ( (This)->lpVtbl -> get_UserDn(This,pbstrProp) )
#define IAzClientContext2_get_UserSamCompat(This,pbstrProp)    ( (This)->lpVtbl -> get_UserSamCompat(This,pbstrProp) )
#define IAzClientContext2_get_UserDisplay(This,pbstrProp)    ( (This)->lpVtbl -> get_UserDisplay(This,pbstrProp) )
#define IAzClientContext2_get_UserGuid(This,pbstrProp)    ( (This)->lpVtbl -> get_UserGuid(This,pbstrProp) )
#define IAzClientContext2_get_UserCanonical(This,pbstrProp)    ( (This)->lpVtbl -> get_UserCanonical(This,pbstrProp) )
#define IAzClientContext2_get_UserUpn(This,pbstrProp)    ( (This)->lpVtbl -> get_UserUpn(This,pbstrProp) )
#define IAzClientContext2_get_UserDnsSamCompat(This,pbstrProp)    ( (This)->lpVtbl -> get_UserDnsSamCompat(This,pbstrProp) )
#define IAzClientContext2_GetProperty(This,lPropId,varReserved,pvarProp)    ( (This)->lpVtbl -> GetProperty(This,lPropId,varReserved,pvarProp) )
#define IAzClientContext2_GetRoles(This,bstrScopeName,pvarRoleNames)    ( (This)->lpVtbl -> GetRoles(This,bstrScopeName,pvarRoleNames) )
#define IAzClientContext2_get_RoleForAccessCheck(This,pbstrProp)    ( (This)->lpVtbl -> get_RoleForAccessCheck(This,pbstrProp) )
#define IAzClientContext2_put_RoleForAccessCheck(This,bstrProp)    ( (This)->lpVtbl -> put_RoleForAccessCheck(This,bstrProp) )
#define IAzClientContext2_GetAssignedScopesPage(This,lOptions,PageSize,pvarCursor,pvarScopeNames)    ( (This)->lpVtbl -> GetAssignedScopesPage(This,lOptions,PageSize,pvarCursor,pvarScopeNames) )
#define IAzClientContext2_AddRoles(This,varRoles,bstrScopeName)    ( (This)->lpVtbl -> AddRoles(This,varRoles,bstrScopeName) )
#define IAzClientContext2_AddApplicationGroups(This,varApplicationGroups)    ( (This)->lpVtbl -> AddApplicationGroups(This,varApplicationGroups) )
#define IAzClientContext2_AddStringSids(This,varStringSids)    ( (This)->lpVtbl -> AddStringSids(This,varStringSids) )
#define IAzClientContext2_put_LDAPQueryDN(This,bstrLDAPQueryDN)    ( (This)->lpVtbl -> put_LDAPQueryDN(This,bstrLDAPQueryDN) )
#define IAzClientContext2_get_LDAPQueryDN(This,pbstrLDAPQueryDN)    ( (This)->lpVtbl -> get_LDAPQueryDN(This,pbstrLDAPQueryDN) )
#endif
#endif
#ifndef __IAzBizRuleContext_INTERFACE_DEFINED__
#define __IAzBizRuleContext_INTERFACE_DEFINED__
extern const IID IID_IAzBizRuleContext;
typedef struct IAzBizRuleContextVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAzBizRuleContext * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAzBizRuleContext * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAzBizRuleContext * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAzBizRuleContext * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAzBizRuleContext * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAzBizRuleContext * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAzBizRuleContext * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * put_BusinessRuleResult) (IAzBizRuleContext * This, BOOL bResult);
	HRESULT(STDMETHODCALLTYPE * put_BusinessRuleString) (IAzBizRuleContext * This, BSTR bstrBusinessRuleString);
	HRESULT(STDMETHODCALLTYPE * get_BusinessRuleString) (IAzBizRuleContext * This, BSTR * pbstrBusinessRuleString);
	HRESULT(STDMETHODCALLTYPE * GetParameter) (IAzBizRuleContext * This, BSTR bstrParameterName, VARIANT * pvarParameterValue);
	END_INTERFACE
}  IAzBizRuleContextVtbl;
interface IAzBizRuleContext
{
	CONST_VTBL struct IAzBizRuleContextVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAzBizRuleContext_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAzBizRuleContext_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAzBizRuleContext_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAzBizRuleContext_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAzBizRuleContext_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAzBizRuleContext_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAzBizRuleContext_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAzBizRuleContext_put_BusinessRuleResult(This,bResult)    ( (This)->lpVtbl -> put_BusinessRuleResult(This,bResult) )
#define IAzBizRuleContext_put_BusinessRuleString(This,bstrBusinessRuleString)    ( (This)->lpVtbl -> put_BusinessRuleString(This,bstrBusinessRuleString) )
#define IAzBizRuleContext_get_BusinessRuleString(This,pbstrBusinessRuleString)    ( (This)->lpVtbl -> get_BusinessRuleString(This,pbstrBusinessRuleString) )
#define IAzBizRuleContext_GetParameter(This,bstrParameterName,pvarParameterValue)    ( (This)->lpVtbl -> GetParameter(This,bstrParameterName,pvarParameterValue) )
#endif
#endif
#ifndef __IAzBizRuleParameters_INTERFACE_DEFINED__
#define __IAzBizRuleParameters_INTERFACE_DEFINED__
extern const IID IID_IAzBizRuleParameters;
typedef struct IAzBizRuleParametersVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAzBizRuleParameters * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAzBizRuleParameters * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAzBizRuleParameters * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAzBizRuleParameters * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAzBizRuleParameters * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAzBizRuleParameters * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAzBizRuleParameters * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * AddParameter) (IAzBizRuleParameters * This, BSTR bstrParameterName, VARIANT varParameterValue);
	HRESULT(STDMETHODCALLTYPE * AddParameters) (IAzBizRuleParameters * This, VARIANT varParameterNames, VARIANT varParameterValues);
	HRESULT(STDMETHODCALLTYPE * GetParameterValue) (IAzBizRuleParameters * This, BSTR bstrParameterName, VARIANT * pvarParameterValue);
	HRESULT(STDMETHODCALLTYPE * Remove) (IAzBizRuleParameters * This, BSTR varParameterName);
	HRESULT(STDMETHODCALLTYPE * RemoveAll) (IAzBizRuleParameters * This);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IAzBizRuleParameters * This, unsigned long *plCount);
	END_INTERFACE
}  IAzBizRuleParametersVtbl;
interface IAzBizRuleParameters
{
	CONST_VTBL struct IAzBizRuleParametersVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAzBizRuleParameters_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAzBizRuleParameters_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAzBizRuleParameters_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAzBizRuleParameters_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAzBizRuleParameters_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAzBizRuleParameters_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAzBizRuleParameters_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAzBizRuleParameters_AddParameter(This,bstrParameterName,varParameterValue)    ( (This)->lpVtbl -> AddParameter(This,bstrParameterName,varParameterValue) )
#define IAzBizRuleParameters_AddParameters(This,varParameterNames,varParameterValues)    ( (This)->lpVtbl -> AddParameters(This,varParameterNames,varParameterValues) )
#define IAzBizRuleParameters_GetParameterValue(This,bstrParameterName,pvarParameterValue)    ( (This)->lpVtbl -> GetParameterValue(This,bstrParameterName,pvarParameterValue) )
#define IAzBizRuleParameters_Remove(This,varParameterName)    ( (This)->lpVtbl -> Remove(This,varParameterName) )
#define IAzBizRuleParameters_RemoveAll(This)    ( (This)->lpVtbl -> RemoveAll(This) )
#define IAzBizRuleParameters_get_Count(This,plCount)    ( (This)->lpVtbl -> get_Count(This,plCount) )
#endif
#endif
#ifndef __IAzBizRuleInterfaces_INTERFACE_DEFINED__
#define __IAzBizRuleInterfaces_INTERFACE_DEFINED__
extern const IID IID_IAzBizRuleInterfaces;
typedef struct IAzBizRuleInterfacesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAzBizRuleInterfaces * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAzBizRuleInterfaces * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAzBizRuleInterfaces * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAzBizRuleInterfaces * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAzBizRuleInterfaces * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAzBizRuleInterfaces * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAzBizRuleInterfaces * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * AddInterface) (IAzBizRuleInterfaces * This, BSTR bstrInterfaceName, LONG lInterfaceFlag, VARIANT varInterface);
	HRESULT(STDMETHODCALLTYPE * AddInterfaces) (IAzBizRuleInterfaces * This, VARIANT varInterfaceNames, VARIANT varInterfaceFlags, VARIANT varInterfaces);
	HRESULT(STDMETHODCALLTYPE * GetInterfaceValue) (IAzBizRuleInterfaces * This, BSTR bstrInterfaceName, LONG * lInterfaceFlag, VARIANT * varInterface);
	HRESULT(STDMETHODCALLTYPE * Remove) (IAzBizRuleInterfaces * This, BSTR bstrInterfaceName);
	HRESULT(STDMETHODCALLTYPE * RemoveAll) (IAzBizRuleInterfaces * This);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IAzBizRuleInterfaces * This, unsigned long *plCount);
	END_INTERFACE
}  IAzBizRuleInterfacesVtbl;
interface IAzBizRuleInterfaces
{
	CONST_VTBL struct IAzBizRuleInterfacesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAzBizRuleInterfaces_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAzBizRuleInterfaces_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAzBizRuleInterfaces_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAzBizRuleInterfaces_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAzBizRuleInterfaces_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAzBizRuleInterfaces_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAzBizRuleInterfaces_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAzBizRuleInterfaces_AddInterface(This,bstrInterfaceName,lInterfaceFlag,varInterface)    ( (This)->lpVtbl -> AddInterface(This,bstrInterfaceName,lInterfaceFlag,varInterface) )
#define IAzBizRuleInterfaces_AddInterfaces(This,varInterfaceNames,varInterfaceFlags,varInterfaces)    ( (This)->lpVtbl -> AddInterfaces(This,varInterfaceNames,varInterfaceFlags,varInterfaces) )
#define IAzBizRuleInterfaces_GetInterfaceValue(This,bstrInterfaceName,lInterfaceFlag,varInterface)    ( (This)->lpVtbl -> GetInterfaceValue(This,bstrInterfaceName,lInterfaceFlag,varInterface) )
#define IAzBizRuleInterfaces_Remove(This,bstrInterfaceName)    ( (This)->lpVtbl -> Remove(This,bstrInterfaceName) )
#define IAzBizRuleInterfaces_RemoveAll(This)    ( (This)->lpVtbl -> RemoveAll(This) )
#define IAzBizRuleInterfaces_get_Count(This,plCount)    ( (This)->lpVtbl -> get_Count(This,plCount) )
#endif
#endif
#ifndef __IAzClientContext3_INTERFACE_DEFINED__
#define __IAzClientContext3_INTERFACE_DEFINED__
extern const IID IID_IAzClientContext3;
typedef struct IAzClientContext3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAzClientContext3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAzClientContext3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAzClientContext3 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAzClientContext3 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAzClientContext3 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAzClientContext3 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAzClientContext3 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * AccessCheck) (IAzClientContext3 * This, BSTR bstrObjectName, VARIANT varScopeNames, VARIANT varOperations, VARIANT varParameterNames, VARIANT varParameterValues, VARIANT varInterfaceNames, VARIANT varInterfaceFlags, VARIANT varInterfaces, VARIANT * pvarResults);
	HRESULT(STDMETHODCALLTYPE * GetBusinessRuleString) (IAzClientContext3 * This, BSTR * pbstrBusinessRuleString);
	HRESULT(STDMETHODCALLTYPE * get_UserDn) (IAzClientContext3 * This, BSTR * pbstrProp);
	HRESULT(STDMETHODCALLTYPE * get_UserSamCompat) (IAzClientContext3 * This, BSTR * pbstrProp);
	HRESULT(STDMETHODCALLTYPE * get_UserDisplay) (IAzClientContext3 * This, BSTR * pbstrProp);
	HRESULT(STDMETHODCALLTYPE * get_UserGuid) (IAzClientContext3 * This, BSTR * pbstrProp);
	HRESULT(STDMETHODCALLTYPE * get_UserCanonical) (IAzClientContext3 * This, BSTR * pbstrProp);
	HRESULT(STDMETHODCALLTYPE * get_UserUpn) (IAzClientContext3 * This, BSTR * pbstrProp);
	HRESULT(STDMETHODCALLTYPE * get_UserDnsSamCompat) (IAzClientContext3 * This, BSTR * pbstrProp);
	HRESULT(STDMETHODCALLTYPE * GetProperty) (IAzClientContext3 * This, LONG lPropId, VARIANT varReserved, VARIANT * pvarProp);
	HRESULT(STDMETHODCALLTYPE * GetRoles) (IAzClientContext3 * This, BSTR bstrScopeName, VARIANT * pvarRoleNames);
	HRESULT(STDMETHODCALLTYPE * get_RoleForAccessCheck) (IAzClientContext3 * This, BSTR * pbstrProp);
	HRESULT(STDMETHODCALLTYPE * put_RoleForAccessCheck) (IAzClientContext3 * This, BSTR bstrProp);
	HRESULT(STDMETHODCALLTYPE * GetAssignedScopesPage) (IAzClientContext3 * This, LONG lOptions, LONG PageSize, VARIANT * pvarCursor, VARIANT * pvarScopeNames);
	HRESULT(STDMETHODCALLTYPE * AddRoles) (IAzClientContext3 * This, VARIANT varRoles, BSTR bstrScopeName);
	HRESULT(STDMETHODCALLTYPE * AddApplicationGroups) (IAzClientContext3 * This, VARIANT varApplicationGroups);
	HRESULT(STDMETHODCALLTYPE * AddStringSids) (IAzClientContext3 * This, VARIANT varStringSids);
	HRESULT(STDMETHODCALLTYPE * put_LDAPQueryDN) (IAzClientContext3 * This, BSTR bstrLDAPQueryDN);
	HRESULT(STDMETHODCALLTYPE * get_LDAPQueryDN) (IAzClientContext3 * This, BSTR * pbstrLDAPQueryDN);
	HRESULT(STDMETHODCALLTYPE * AccessCheck2) (IAzClientContext3 * This, BSTR bstrObjectName, BSTR bstrScopeName, long lOperation, unsigned long *plResult);
	HRESULT(STDMETHODCALLTYPE * IsInRoleAssignment) (IAzClientContext3 * This, BSTR bstrScopeName, BSTR bstrRoleName, VARIANT_BOOL * pbIsInRole);
	HRESULT(STDMETHODCALLTYPE * GetOperations) (IAzClientContext3 * This, BSTR bstrScopeName, IAzOperations ** ppOperationCollection);
	HRESULT(STDMETHODCALLTYPE * GetTasks) (IAzClientContext3 * This, BSTR bstrScopeName, IAzTasks ** ppTaskCollection);
	HRESULT(STDMETHODCALLTYPE * get_BizRuleParameters) (IAzClientContext3 * This, IAzBizRuleParameters ** ppBizRuleParam);
	HRESULT(STDMETHODCALLTYPE * get_BizRuleInterfaces) (IAzClientContext3 * This, IAzBizRuleInterfaces ** ppBizRuleInterfaces);
	HRESULT(STDMETHODCALLTYPE * GetGroups) (IAzClientContext3 * This, BSTR bstrScopeName, ULONG ulOptions, VARIANT * pGroupArray);
	HRESULT(STDMETHODCALLTYPE * get_Sids) (IAzClientContext3 * This, VARIANT * pStringSidArray);
	END_INTERFACE
}  IAzClientContext3Vtbl;
interface IAzClientContext3
{
	CONST_VTBL struct IAzClientContext3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAzClientContext3_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAzClientContext3_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAzClientContext3_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAzClientContext3_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAzClientContext3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAzClientContext3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAzClientContext3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAzClientContext3_AccessCheck(This,bstrObjectName,varScopeNames,varOperations,varParameterNames,varParameterValues,varInterfaceNames,varInterfaceFlags,varInterfaces,pvarResults)    ( (This)->lpVtbl -> AccessCheck(This,bstrObjectName,varScopeNames,varOperations,varParameterNames,varParameterValues,varInterfaceNames,varInterfaceFlags,varInterfaces,pvarResults) )
#define IAzClientContext3_GetBusinessRuleString(This,pbstrBusinessRuleString)    ( (This)->lpVtbl -> GetBusinessRuleString(This,pbstrBusinessRuleString) )
#define IAzClientContext3_get_UserDn(This,pbstrProp)    ( (This)->lpVtbl -> get_UserDn(This,pbstrProp) )
#define IAzClientContext3_get_UserSamCompat(This,pbstrProp)    ( (This)->lpVtbl -> get_UserSamCompat(This,pbstrProp) )
#define IAzClientContext3_get_UserDisplay(This,pbstrProp)    ( (This)->lpVtbl -> get_UserDisplay(This,pbstrProp) )
#define IAzClientContext3_get_UserGuid(This,pbstrProp)    ( (This)->lpVtbl -> get_UserGuid(This,pbstrProp) )
#define IAzClientContext3_get_UserCanonical(This,pbstrProp)    ( (This)->lpVtbl -> get_UserCanonical(This,pbstrProp) )
#define IAzClientContext3_get_UserUpn(This,pbstrProp)    ( (This)->lpVtbl -> get_UserUpn(This,pbstrProp) )
#define IAzClientContext3_get_UserDnsSamCompat(This,pbstrProp)    ( (This)->lpVtbl -> get_UserDnsSamCompat(This,pbstrProp) )
#define IAzClientContext3_GetProperty(This,lPropId,varReserved,pvarProp)    ( (This)->lpVtbl -> GetProperty(This,lPropId,varReserved,pvarProp) )
#define IAzClientContext3_GetRoles(This,bstrScopeName,pvarRoleNames)    ( (This)->lpVtbl -> GetRoles(This,bstrScopeName,pvarRoleNames) )
#define IAzClientContext3_get_RoleForAccessCheck(This,pbstrProp)    ( (This)->lpVtbl -> get_RoleForAccessCheck(This,pbstrProp) )
#define IAzClientContext3_put_RoleForAccessCheck(This,bstrProp)    ( (This)->lpVtbl -> put_RoleForAccessCheck(This,bstrProp) )
#define IAzClientContext3_GetAssignedScopesPage(This,lOptions,PageSize,pvarCursor,pvarScopeNames)    ( (This)->lpVtbl -> GetAssignedScopesPage(This,lOptions,PageSize,pvarCursor,pvarScopeNames) )
#define IAzClientContext3_AddRoles(This,varRoles,bstrScopeName)    ( (This)->lpVtbl -> AddRoles(This,varRoles,bstrScopeName) )
#define IAzClientContext3_AddApplicationGroups(This,varApplicationGroups)    ( (This)->lpVtbl -> AddApplicationGroups(This,varApplicationGroups) )
#define IAzClientContext3_AddStringSids(This,varStringSids)    ( (This)->lpVtbl -> AddStringSids(This,varStringSids) )
#define IAzClientContext3_put_LDAPQueryDN(This,bstrLDAPQueryDN)    ( (This)->lpVtbl -> put_LDAPQueryDN(This,bstrLDAPQueryDN) )
#define IAzClientContext3_get_LDAPQueryDN(This,pbstrLDAPQueryDN)    ( (This)->lpVtbl -> get_LDAPQueryDN(This,pbstrLDAPQueryDN) )
#define IAzClientContext3_AccessCheck2(This,bstrObjectName,bstrScopeName,lOperation,plResult)    ( (This)->lpVtbl -> AccessCheck2(This,bstrObjectName,bstrScopeName,lOperation,plResult) )
#define IAzClientContext3_IsInRoleAssignment(This,bstrScopeName,bstrRoleName,pbIsInRole)    ( (This)->lpVtbl -> IsInRoleAssignment(This,bstrScopeName,bstrRoleName,pbIsInRole) )
#define IAzClientContext3_GetOperations(This,bstrScopeName,ppOperationCollection)    ( (This)->lpVtbl -> GetOperations(This,bstrScopeName,ppOperationCollection) )
#define IAzClientContext3_GetTasks(This,bstrScopeName,ppTaskCollection)    ( (This)->lpVtbl -> GetTasks(This,bstrScopeName,ppTaskCollection) )
#define IAzClientContext3_get_BizRuleParameters(This,ppBizRuleParam)    ( (This)->lpVtbl -> get_BizRuleParameters(This,ppBizRuleParam) )
#define IAzClientContext3_get_BizRuleInterfaces(This,ppBizRuleInterfaces)    ( (This)->lpVtbl -> get_BizRuleInterfaces(This,ppBizRuleInterfaces) )
#define IAzClientContext3_GetGroups(This,bstrScopeName,ulOptions,pGroupArray)    ( (This)->lpVtbl -> GetGroups(This,bstrScopeName,ulOptions,pGroupArray) )
#define IAzClientContext3_get_Sids(This,pStringSidArray)    ( (This)->lpVtbl -> get_Sids(This,pStringSidArray) )
#endif
#endif
#ifndef __IAzScope2_INTERFACE_DEFINED__
#define __IAzScope2_INTERFACE_DEFINED__
extern const IID IID_IAzScope2;
typedef struct IAzScope2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAzScope2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAzScope2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAzScope2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAzScope2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAzScope2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAzScope2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAzScope2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IAzScope2 * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * put_Name) (IAzScope2 * This, BSTR bstrName);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IAzScope2 * This, BSTR * pbstrDescription);
	HRESULT(STDMETHODCALLTYPE * put_Description) (IAzScope2 * This, BSTR bstrDescription);
	HRESULT(STDMETHODCALLTYPE * get_ApplicationData) (IAzScope2 * This, BSTR * pbstrApplicationData);
	HRESULT(STDMETHODCALLTYPE * put_ApplicationData) (IAzScope2 * This, BSTR bstrApplicationData);
	HRESULT(STDMETHODCALLTYPE * get_Writable) (IAzScope2 * This, BOOL * pfProp);
	HRESULT(STDMETHODCALLTYPE * GetProperty) (IAzScope2 * This, LONG lPropId, VARIANT varReserved, VARIANT * pvarProp);
	HRESULT(STDMETHODCALLTYPE * SetProperty) (IAzScope2 * This, LONG lPropId, VARIANT varProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * AddPropertyItem) (IAzScope2 * This, LONG lPropId, VARIANT varProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeletePropertyItem) (IAzScope2 * This, LONG lPropId, VARIANT varProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_PolicyAdministrators) (IAzScope2 * This, VARIANT * pvarAdmins);
	HRESULT(STDMETHODCALLTYPE * get_PolicyReaders) (IAzScope2 * This, VARIANT * pvarReaders);
	HRESULT(STDMETHODCALLTYPE * AddPolicyAdministrator) (IAzScope2 * This, BSTR bstrAdmin, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeletePolicyAdministrator) (IAzScope2 * This, BSTR bstrAdmin, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * AddPolicyReader) (IAzScope2 * This, BSTR bstrReader, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeletePolicyReader) (IAzScope2 * This, BSTR bstrReader, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_ApplicationGroups) (IAzScope2 * This, IAzApplicationGroups ** ppGroupCollection);
	HRESULT(STDMETHODCALLTYPE * OpenApplicationGroup) (IAzScope2 * This, BSTR bstrGroupName, VARIANT varReserved, IAzApplicationGroup ** ppGroup);
	HRESULT(STDMETHODCALLTYPE * CreateApplicationGroup) (IAzScope2 * This, BSTR bstrGroupName, VARIANT varReserved, IAzApplicationGroup ** ppGroup);
	HRESULT(STDMETHODCALLTYPE * DeleteApplicationGroup) (IAzScope2 * This, BSTR bstrGroupName, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_Roles) (IAzScope2 * This, IAzRoles ** ppRoleCollection);
	HRESULT(STDMETHODCALLTYPE * OpenRole) (IAzScope2 * This, BSTR bstrRoleName, VARIANT varReserved, IAzRole ** ppRole);
	HRESULT(STDMETHODCALLTYPE * CreateRole) (IAzScope2 * This, BSTR bstrRoleName, VARIANT varReserved, IAzRole ** ppRole);
	HRESULT(STDMETHODCALLTYPE * DeleteRole) (IAzScope2 * This, BSTR bstrRoleName, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_Tasks) (IAzScope2 * This, IAzTasks ** ppTaskCollection);
	HRESULT(STDMETHODCALLTYPE * OpenTask) (IAzScope2 * This, BSTR bstrTaskName, VARIANT varReserved, IAzTask ** ppTask);
	HRESULT(STDMETHODCALLTYPE * CreateTask) (IAzScope2 * This, BSTR bstrTaskName, VARIANT varReserved, IAzTask ** ppTask);
	HRESULT(STDMETHODCALLTYPE * DeleteTask) (IAzScope2 * This, BSTR bstrTaskName, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * Submit) (IAzScope2 * This, LONG lFlags, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_CanBeDelegated) (IAzScope2 * This, BOOL * pfProp);
	HRESULT(STDMETHODCALLTYPE * get_BizrulesWritable) (IAzScope2 * This, BOOL * pfProp);
	HRESULT(STDMETHODCALLTYPE * get_PolicyAdministratorsName) (IAzScope2 * This, VARIANT * pvarAdmins);
	HRESULT(STDMETHODCALLTYPE * get_PolicyReadersName) (IAzScope2 * This, VARIANT * pvarReaders);
	HRESULT(STDMETHODCALLTYPE * AddPolicyAdministratorName) (IAzScope2 * This, BSTR bstrAdmin, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeletePolicyAdministratorName) (IAzScope2 * This, BSTR bstrAdmin, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * AddPolicyReaderName) (IAzScope2 * This, BSTR bstrReader, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeletePolicyReaderName) (IAzScope2 * This, BSTR bstrReader, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_RoleDefinitions) (IAzScope2 * This, IAzRoleDefinitions ** ppRoleDefinitions);
	HRESULT(STDMETHODCALLTYPE * CreateRoleDefinition) (IAzScope2 * This, BSTR bstrRoleDefinitionName, IAzRoleDefinition ** ppRoleDefinitions);
	HRESULT(STDMETHODCALLTYPE * OpenRoleDefinition) (IAzScope2 * This, BSTR bstrRoleDefinitionName, IAzRoleDefinition ** ppRoleDefinitions);
	HRESULT(STDMETHODCALLTYPE * DeleteRoleDefinition) (IAzScope2 * This, BSTR bstrRoleDefinitionName);
	HRESULT(STDMETHODCALLTYPE * get_RoleAssignments) (IAzScope2 * This, IAzRoleAssignments ** ppRoleAssignments);
	HRESULT(STDMETHODCALLTYPE * CreateRoleAssignment) (IAzScope2 * This, BSTR bstrRoleAssignmentName, IAzRoleAssignment ** ppRoleAssignment);
	HRESULT(STDMETHODCALLTYPE * OpenRoleAssignment) (IAzScope2 * This, BSTR bstrRoleAssignmentName, IAzRoleAssignment ** ppRoleAssignment);
	HRESULT(STDMETHODCALLTYPE * DeleteRoleAssignment) (IAzScope2 * This, BSTR bstrRoleAssignmentName);
	END_INTERFACE
}  IAzScope2Vtbl;
interface IAzScope2
{
	CONST_VTBL struct IAzScope2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAzScope2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAzScope2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAzScope2_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAzScope2_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAzScope2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAzScope2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAzScope2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAzScope2_get_Name(This,pbstrName)    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
#define IAzScope2_put_Name(This,bstrName)    ( (This)->lpVtbl -> put_Name(This,bstrName) )
#define IAzScope2_get_Description(This,pbstrDescription)    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) )
#define IAzScope2_put_Description(This,bstrDescription)    ( (This)->lpVtbl -> put_Description(This,bstrDescription) )
#define IAzScope2_get_ApplicationData(This,pbstrApplicationData)    ( (This)->lpVtbl -> get_ApplicationData(This,pbstrApplicationData) )
#define IAzScope2_put_ApplicationData(This,bstrApplicationData)    ( (This)->lpVtbl -> put_ApplicationData(This,bstrApplicationData) )
#define IAzScope2_get_Writable(This,pfProp)    ( (This)->lpVtbl -> get_Writable(This,pfProp) )
#define IAzScope2_GetProperty(This,lPropId,varReserved,pvarProp)    ( (This)->lpVtbl -> GetProperty(This,lPropId,varReserved,pvarProp) )
#define IAzScope2_SetProperty(This,lPropId,varProp,varReserved)    ( (This)->lpVtbl -> SetProperty(This,lPropId,varProp,varReserved) )
#define IAzScope2_AddPropertyItem(This,lPropId,varProp,varReserved)    ( (This)->lpVtbl -> AddPropertyItem(This,lPropId,varProp,varReserved) )
#define IAzScope2_DeletePropertyItem(This,lPropId,varProp,varReserved)    ( (This)->lpVtbl -> DeletePropertyItem(This,lPropId,varProp,varReserved) )
#define IAzScope2_get_PolicyAdministrators(This,pvarAdmins)    ( (This)->lpVtbl -> get_PolicyAdministrators(This,pvarAdmins) )
#define IAzScope2_get_PolicyReaders(This,pvarReaders)    ( (This)->lpVtbl -> get_PolicyReaders(This,pvarReaders) )
#define IAzScope2_AddPolicyAdministrator(This,bstrAdmin,varReserved)    ( (This)->lpVtbl -> AddPolicyAdministrator(This,bstrAdmin,varReserved) )
#define IAzScope2_DeletePolicyAdministrator(This,bstrAdmin,varReserved)    ( (This)->lpVtbl -> DeletePolicyAdministrator(This,bstrAdmin,varReserved) )
#define IAzScope2_AddPolicyReader(This,bstrReader,varReserved)    ( (This)->lpVtbl -> AddPolicyReader(This,bstrReader,varReserved) )
#define IAzScope2_DeletePolicyReader(This,bstrReader,varReserved)    ( (This)->lpVtbl -> DeletePolicyReader(This,bstrReader,varReserved) )
#define IAzScope2_get_ApplicationGroups(This,ppGroupCollection)    ( (This)->lpVtbl -> get_ApplicationGroups(This,ppGroupCollection) )
#define IAzScope2_OpenApplicationGroup(This,bstrGroupName,varReserved,ppGroup)    ( (This)->lpVtbl -> OpenApplicationGroup(This,bstrGroupName,varReserved,ppGroup) )
#define IAzScope2_CreateApplicationGroup(This,bstrGroupName,varReserved,ppGroup)    ( (This)->lpVtbl -> CreateApplicationGroup(This,bstrGroupName,varReserved,ppGroup) )
#define IAzScope2_DeleteApplicationGroup(This,bstrGroupName,varReserved)    ( (This)->lpVtbl -> DeleteApplicationGroup(This,bstrGroupName,varReserved) )
#define IAzScope2_get_Roles(This,ppRoleCollection)    ( (This)->lpVtbl -> get_Roles(This,ppRoleCollection) )
#define IAzScope2_OpenRole(This,bstrRoleName,varReserved,ppRole)    ( (This)->lpVtbl -> OpenRole(This,bstrRoleName,varReserved,ppRole) )
#define IAzScope2_CreateRole(This,bstrRoleName,varReserved,ppRole)    ( (This)->lpVtbl -> CreateRole(This,bstrRoleName,varReserved,ppRole) )
#define IAzScope2_DeleteRole(This,bstrRoleName,varReserved)    ( (This)->lpVtbl -> DeleteRole(This,bstrRoleName,varReserved) )
#define IAzScope2_get_Tasks(This,ppTaskCollection)    ( (This)->lpVtbl -> get_Tasks(This,ppTaskCollection) )
#define IAzScope2_OpenTask(This,bstrTaskName,varReserved,ppTask)    ( (This)->lpVtbl -> OpenTask(This,bstrTaskName,varReserved,ppTask) )
#define IAzScope2_CreateTask(This,bstrTaskName,varReserved,ppTask)    ( (This)->lpVtbl -> CreateTask(This,bstrTaskName,varReserved,ppTask) )
#define IAzScope2_DeleteTask(This,bstrTaskName,varReserved)    ( (This)->lpVtbl -> DeleteTask(This,bstrTaskName,varReserved) )
#define IAzScope2_Submit(This,lFlags,varReserved)    ( (This)->lpVtbl -> Submit(This,lFlags,varReserved) )
#define IAzScope2_get_CanBeDelegated(This,pfProp)    ( (This)->lpVtbl -> get_CanBeDelegated(This,pfProp) )
#define IAzScope2_get_BizrulesWritable(This,pfProp)    ( (This)->lpVtbl -> get_BizrulesWritable(This,pfProp) )
#define IAzScope2_get_PolicyAdministratorsName(This,pvarAdmins)    ( (This)->lpVtbl -> get_PolicyAdministratorsName(This,pvarAdmins) )
#define IAzScope2_get_PolicyReadersName(This,pvarReaders)    ( (This)->lpVtbl -> get_PolicyReadersName(This,pvarReaders) )
#define IAzScope2_AddPolicyAdministratorName(This,bstrAdmin,varReserved)    ( (This)->lpVtbl -> AddPolicyAdministratorName(This,bstrAdmin,varReserved) )
#define IAzScope2_DeletePolicyAdministratorName(This,bstrAdmin,varReserved)    ( (This)->lpVtbl -> DeletePolicyAdministratorName(This,bstrAdmin,varReserved) )
#define IAzScope2_AddPolicyReaderName(This,bstrReader,varReserved)    ( (This)->lpVtbl -> AddPolicyReaderName(This,bstrReader,varReserved) )
#define IAzScope2_DeletePolicyReaderName(This,bstrReader,varReserved)    ( (This)->lpVtbl -> DeletePolicyReaderName(This,bstrReader,varReserved) )
#define IAzScope2_get_RoleDefinitions(This,ppRoleDefinitions)    ( (This)->lpVtbl -> get_RoleDefinitions(This,ppRoleDefinitions) )
#define IAzScope2_CreateRoleDefinition(This,bstrRoleDefinitionName,ppRoleDefinitions)    ( (This)->lpVtbl -> CreateRoleDefinition(This,bstrRoleDefinitionName,ppRoleDefinitions) )
#define IAzScope2_OpenRoleDefinition(This,bstrRoleDefinitionName,ppRoleDefinitions)    ( (This)->lpVtbl -> OpenRoleDefinition(This,bstrRoleDefinitionName,ppRoleDefinitions) )
#define IAzScope2_DeleteRoleDefinition(This,bstrRoleDefinitionName)    ( (This)->lpVtbl -> DeleteRoleDefinition(This,bstrRoleDefinitionName) )
#define IAzScope2_get_RoleAssignments(This,ppRoleAssignments)    ( (This)->lpVtbl -> get_RoleAssignments(This,ppRoleAssignments) )
#define IAzScope2_CreateRoleAssignment(This,bstrRoleAssignmentName,ppRoleAssignment)    ( (This)->lpVtbl -> CreateRoleAssignment(This,bstrRoleAssignmentName,ppRoleAssignment) )
#define IAzScope2_OpenRoleAssignment(This,bstrRoleAssignmentName,ppRoleAssignment)    ( (This)->lpVtbl -> OpenRoleAssignment(This,bstrRoleAssignmentName,ppRoleAssignment) )
#define IAzScope2_DeleteRoleAssignment(This,bstrRoleAssignmentName)    ( (This)->lpVtbl -> DeleteRoleAssignment(This,bstrRoleAssignmentName) )
#endif
#endif
#ifndef __IAzApplication3_INTERFACE_DEFINED__
#define __IAzApplication3_INTERFACE_DEFINED__
extern const IID IID_IAzApplication3;
typedef struct IAzApplication3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAzApplication3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAzApplication3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAzApplication3 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAzApplication3 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAzApplication3 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAzApplication3 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAzApplication3 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IAzApplication3 * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * put_Name) (IAzApplication3 * This, BSTR bstrName);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IAzApplication3 * This, BSTR * pbstrDescription);
	HRESULT(STDMETHODCALLTYPE * put_Description) (IAzApplication3 * This, BSTR bstrDescription);
	HRESULT(STDMETHODCALLTYPE * get_ApplicationData) (IAzApplication3 * This, BSTR * pbstrApplicationData);
	HRESULT(STDMETHODCALLTYPE * put_ApplicationData) (IAzApplication3 * This, BSTR bstrApplicationData);
	HRESULT(STDMETHODCALLTYPE * get_AuthzInterfaceClsid) (IAzApplication3 * This, BSTR * pbstrProp);
	HRESULT(STDMETHODCALLTYPE * put_AuthzInterfaceClsid) (IAzApplication3 * This, BSTR bstrProp);
	HRESULT(STDMETHODCALLTYPE * get_Version) (IAzApplication3 * This, BSTR * pbstrProp);
	HRESULT(STDMETHODCALLTYPE * put_Version) (IAzApplication3 * This, BSTR bstrProp);
	HRESULT(STDMETHODCALLTYPE * get_GenerateAudits) (IAzApplication3 * This, BOOL * pbProp);
	HRESULT(STDMETHODCALLTYPE * put_GenerateAudits) (IAzApplication3 * This, BOOL bProp);
	HRESULT(STDMETHODCALLTYPE * get_ApplyStoreSacl) (IAzApplication3 * This, BOOL * pbProp);
	HRESULT(STDMETHODCALLTYPE * put_ApplyStoreSacl) (IAzApplication3 * This, BOOL bProp);
	HRESULT(STDMETHODCALLTYPE * get_Writable) (IAzApplication3 * This, BOOL * pfProp);
	HRESULT(STDMETHODCALLTYPE * GetProperty) (IAzApplication3 * This, LONG lPropId, VARIANT varReserved, VARIANT * pvarProp);
	HRESULT(STDMETHODCALLTYPE * SetProperty) (IAzApplication3 * This, LONG lPropId, VARIANT varProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_PolicyAdministrators) (IAzApplication3 * This, VARIANT * pvarAdmins);
	HRESULT(STDMETHODCALLTYPE * get_PolicyReaders) (IAzApplication3 * This, VARIANT * pvarReaders);
	HRESULT(STDMETHODCALLTYPE * AddPolicyAdministrator) (IAzApplication3 * This, BSTR bstrAdmin, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeletePolicyAdministrator) (IAzApplication3 * This, BSTR bstrAdmin, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * AddPolicyReader) (IAzApplication3 * This, BSTR bstrReader, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeletePolicyReader) (IAzApplication3 * This, BSTR bstrReader, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_Scopes) (IAzApplication3 * This, IAzScopes ** ppScopeCollection);
	HRESULT(STDMETHODCALLTYPE * OpenScope) (IAzApplication3 * This, BSTR bstrScopeName, VARIANT varReserved, IAzScope ** ppScope);
	HRESULT(STDMETHODCALLTYPE * CreateScope) (IAzApplication3 * This, BSTR bstrScopeName, VARIANT varReserved, IAzScope ** ppScope);
	HRESULT(STDMETHODCALLTYPE * DeleteScope) (IAzApplication3 * This, BSTR bstrScopeName, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_Operations) (IAzApplication3 * This, IAzOperations ** ppOperationCollection);
	HRESULT(STDMETHODCALLTYPE * OpenOperation) (IAzApplication3 * This, BSTR bstrOperationName, VARIANT varReserved, IAzOperation ** ppOperation);
	HRESULT(STDMETHODCALLTYPE * CreateOperation) (IAzApplication3 * This, BSTR bstrOperationName, VARIANT varReserved, IAzOperation ** ppOperation);
	HRESULT(STDMETHODCALLTYPE * DeleteOperation) (IAzApplication3 * This, BSTR bstrOperationName, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_Tasks) (IAzApplication3 * This, IAzTasks ** ppTaskCollection);
	HRESULT(STDMETHODCALLTYPE * OpenTask) (IAzApplication3 * This, BSTR bstrTaskName, VARIANT varReserved, IAzTask ** ppTask);
	HRESULT(STDMETHODCALLTYPE * CreateTask) (IAzApplication3 * This, BSTR bstrTaskName, VARIANT varReserved, IAzTask ** ppTask);
	HRESULT(STDMETHODCALLTYPE * DeleteTask) (IAzApplication3 * This, BSTR bstrTaskName, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_ApplicationGroups) (IAzApplication3 * This, IAzApplicationGroups ** ppGroupCollection);
	HRESULT(STDMETHODCALLTYPE * OpenApplicationGroup) (IAzApplication3 * This, BSTR bstrGroupName, VARIANT varReserved, IAzApplicationGroup ** ppGroup);
	HRESULT(STDMETHODCALLTYPE * CreateApplicationGroup) (IAzApplication3 * This, BSTR bstrGroupName, VARIANT varReserved, IAzApplicationGroup ** ppGroup);
	HRESULT(STDMETHODCALLTYPE * DeleteApplicationGroup) (IAzApplication3 * This, BSTR bstrGroupName, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_Roles) (IAzApplication3 * This, IAzRoles ** ppRoleCollection);
	HRESULT(STDMETHODCALLTYPE * OpenRole) (IAzApplication3 * This, BSTR bstrRoleName, VARIANT varReserved, IAzRole ** ppRole);
	HRESULT(STDMETHODCALLTYPE * CreateRole) (IAzApplication3 * This, BSTR bstrRoleName, VARIANT varReserved, IAzRole ** ppRole);
	HRESULT(STDMETHODCALLTYPE * DeleteRole) (IAzApplication3 * This, BSTR bstrRoleName, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * InitializeClientContextFromToken) (IAzApplication3 * This, ULONGLONG ullTokenHandle, VARIANT varReserved, IAzClientContext ** ppClientContext);
	HRESULT(STDMETHODCALLTYPE * AddPropertyItem) (IAzApplication3 * This, LONG lPropId, VARIANT varProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeletePropertyItem) (IAzApplication3 * This, LONG lPropId, VARIANT varProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * Submit) (IAzApplication3 * This, LONG lFlags, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * InitializeClientContextFromName) (IAzApplication3 * This, BSTR ClientName, BSTR DomainName, VARIANT varReserved, IAzClientContext ** ppClientContext);
	HRESULT(STDMETHODCALLTYPE * get_DelegatedPolicyUsers) (IAzApplication3 * This, VARIANT * pvarDelegatedPolicyUsers);
	HRESULT(STDMETHODCALLTYPE * AddDelegatedPolicyUser) (IAzApplication3 * This, BSTR bstrDelegatedPolicyUser, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeleteDelegatedPolicyUser) (IAzApplication3 * This, BSTR bstrDelegatedPolicyUser, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * InitializeClientContextFromStringSid) (IAzApplication3 * This, BSTR SidString, LONG lOptions, VARIANT varReserved, IAzClientContext ** ppClientContext);
	HRESULT(STDMETHODCALLTYPE * get_PolicyAdministratorsName) (IAzApplication3 * This, VARIANT * pvarAdmins);
	HRESULT(STDMETHODCALLTYPE * get_PolicyReadersName) (IAzApplication3 * This, VARIANT * pvarReaders);
	HRESULT(STDMETHODCALLTYPE * AddPolicyAdministratorName) (IAzApplication3 * This, BSTR bstrAdmin, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeletePolicyAdministratorName) (IAzApplication3 * This, BSTR bstrAdmin, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * AddPolicyReaderName) (IAzApplication3 * This, BSTR bstrReader, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeletePolicyReaderName) (IAzApplication3 * This, BSTR bstrReader, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_DelegatedPolicyUsersName) (IAzApplication3 * This, VARIANT * pvarDelegatedPolicyUsers);
	HRESULT(STDMETHODCALLTYPE * AddDelegatedPolicyUserName) (IAzApplication3 * This, BSTR bstrDelegatedPolicyUser, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeleteDelegatedPolicyUserName) (IAzApplication3 * This, BSTR bstrDelegatedPolicyUser, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * InitializeClientContextFromToken2) (IAzApplication3 * This, ULONG ulTokenHandleLowPart, ULONG ulTokenHandleHighPart, VARIANT varReserved, IAzClientContext2 ** ppClientContext);
	HRESULT(STDMETHODCALLTYPE * InitializeClientContext2) (IAzApplication3 * This, BSTR IdentifyingString, VARIANT varReserved, IAzClientContext2 ** ppClientContext);
	HRESULT(STDMETHODCALLTYPE * ScopeExists) (IAzApplication3 * This, BSTR bstrScopeName, VARIANT_BOOL * pbExist);
	HRESULT(STDMETHODCALLTYPE * OpenScope2) (IAzApplication3 * This, BSTR bstrScopeName, IAzScope2 ** ppScope2);
	HRESULT(STDMETHODCALLTYPE * CreateScope2) (IAzApplication3 * This, BSTR bstrScopeName, IAzScope2 ** ppScope2);
	HRESULT(STDMETHODCALLTYPE * DeleteScope2) (IAzApplication3 * This, BSTR bstrScopeName);
	HRESULT(STDMETHODCALLTYPE * get_RoleDefinitions) (IAzApplication3 * This, IAzRoleDefinitions ** ppRoleDefinitions);
	HRESULT(STDMETHODCALLTYPE * CreateRoleDefinition) (IAzApplication3 * This, BSTR bstrRoleDefinitionName, IAzRoleDefinition ** ppRoleDefinitions);
	HRESULT(STDMETHODCALLTYPE * OpenRoleDefinition) (IAzApplication3 * This, BSTR bstrRoleDefinitionName, IAzRoleDefinition ** ppRoleDefinitions);
	HRESULT(STDMETHODCALLTYPE * DeleteRoleDefinition) (IAzApplication3 * This, BSTR bstrRoleDefinitionName);
	HRESULT(STDMETHODCALLTYPE * get_RoleAssignments) (IAzApplication3 * This, IAzRoleAssignments ** ppRoleAssignments);
	HRESULT(STDMETHODCALLTYPE * CreateRoleAssignment) (IAzApplication3 * This, BSTR bstrRoleAssignmentName, IAzRoleAssignment ** ppRoleAssignment);
	HRESULT(STDMETHODCALLTYPE * OpenRoleAssignment) (IAzApplication3 * This, BSTR bstrRoleAssignmentName, IAzRoleAssignment ** ppRoleAssignment);
	HRESULT(STDMETHODCALLTYPE * DeleteRoleAssignment) (IAzApplication3 * This, BSTR bstrRoleAssignmentName);
	HRESULT(STDMETHODCALLTYPE * get_BizRulesEnabled) (IAzApplication3 * This, VARIANT_BOOL * pbEnabled);
	HRESULT(STDMETHODCALLTYPE * put_BizRulesEnabled) (IAzApplication3 * This, VARIANT_BOOL bEnabled);
	END_INTERFACE
}  IAzApplication3Vtbl;
interface IAzApplication3
{
	CONST_VTBL struct IAzApplication3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAzApplication3_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAzApplication3_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAzApplication3_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAzApplication3_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAzApplication3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAzApplication3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAzApplication3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAzApplication3_get_Name(This,pbstrName)    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
#define IAzApplication3_put_Name(This,bstrName)    ( (This)->lpVtbl -> put_Name(This,bstrName) )
#define IAzApplication3_get_Description(This,pbstrDescription)    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) )
#define IAzApplication3_put_Description(This,bstrDescription)    ( (This)->lpVtbl -> put_Description(This,bstrDescription) )
#define IAzApplication3_get_ApplicationData(This,pbstrApplicationData)    ( (This)->lpVtbl -> get_ApplicationData(This,pbstrApplicationData) )
#define IAzApplication3_put_ApplicationData(This,bstrApplicationData)    ( (This)->lpVtbl -> put_ApplicationData(This,bstrApplicationData) )
#define IAzApplication3_get_AuthzInterfaceClsid(This,pbstrProp)    ( (This)->lpVtbl -> get_AuthzInterfaceClsid(This,pbstrProp) )
#define IAzApplication3_put_AuthzInterfaceClsid(This,bstrProp)    ( (This)->lpVtbl -> put_AuthzInterfaceClsid(This,bstrProp) )
#define IAzApplication3_get_Version(This,pbstrProp)    ( (This)->lpVtbl -> get_Version(This,pbstrProp) )
#define IAzApplication3_put_Version(This,bstrProp)    ( (This)->lpVtbl -> put_Version(This,bstrProp) )
#define IAzApplication3_get_GenerateAudits(This,pbProp)    ( (This)->lpVtbl -> get_GenerateAudits(This,pbProp) )
#define IAzApplication3_put_GenerateAudits(This,bProp)    ( (This)->lpVtbl -> put_GenerateAudits(This,bProp) )
#define IAzApplication3_get_ApplyStoreSacl(This,pbProp)    ( (This)->lpVtbl -> get_ApplyStoreSacl(This,pbProp) )
#define IAzApplication3_put_ApplyStoreSacl(This,bProp)    ( (This)->lpVtbl -> put_ApplyStoreSacl(This,bProp) )
#define IAzApplication3_get_Writable(This,pfProp)    ( (This)->lpVtbl -> get_Writable(This,pfProp) )
#define IAzApplication3_GetProperty(This,lPropId,varReserved,pvarProp)    ( (This)->lpVtbl -> GetProperty(This,lPropId,varReserved,pvarProp) )
#define IAzApplication3_SetProperty(This,lPropId,varProp,varReserved)    ( (This)->lpVtbl -> SetProperty(This,lPropId,varProp,varReserved) )
#define IAzApplication3_get_PolicyAdministrators(This,pvarAdmins)    ( (This)->lpVtbl -> get_PolicyAdministrators(This,pvarAdmins) )
#define IAzApplication3_get_PolicyReaders(This,pvarReaders)    ( (This)->lpVtbl -> get_PolicyReaders(This,pvarReaders) )
#define IAzApplication3_AddPolicyAdministrator(This,bstrAdmin,varReserved)    ( (This)->lpVtbl -> AddPolicyAdministrator(This,bstrAdmin,varReserved) )
#define IAzApplication3_DeletePolicyAdministrator(This,bstrAdmin,varReserved)    ( (This)->lpVtbl -> DeletePolicyAdministrator(This,bstrAdmin,varReserved) )
#define IAzApplication3_AddPolicyReader(This,bstrReader,varReserved)    ( (This)->lpVtbl -> AddPolicyReader(This,bstrReader,varReserved) )
#define IAzApplication3_DeletePolicyReader(This,bstrReader,varReserved)    ( (This)->lpVtbl -> DeletePolicyReader(This,bstrReader,varReserved) )
#define IAzApplication3_get_Scopes(This,ppScopeCollection)    ( (This)->lpVtbl -> get_Scopes(This,ppScopeCollection) )
#define IAzApplication3_OpenScope(This,bstrScopeName,varReserved,ppScope)    ( (This)->lpVtbl -> OpenScope(This,bstrScopeName,varReserved,ppScope) )
#define IAzApplication3_CreateScope(This,bstrScopeName,varReserved,ppScope)    ( (This)->lpVtbl -> CreateScope(This,bstrScopeName,varReserved,ppScope) )
#define IAzApplication3_DeleteScope(This,bstrScopeName,varReserved)    ( (This)->lpVtbl -> DeleteScope(This,bstrScopeName,varReserved) )
#define IAzApplication3_get_Operations(This,ppOperationCollection)    ( (This)->lpVtbl -> get_Operations(This,ppOperationCollection) )
#define IAzApplication3_OpenOperation(This,bstrOperationName,varReserved,ppOperation)    ( (This)->lpVtbl -> OpenOperation(This,bstrOperationName,varReserved,ppOperation) )
#define IAzApplication3_CreateOperation(This,bstrOperationName,varReserved,ppOperation)    ( (This)->lpVtbl -> CreateOperation(This,bstrOperationName,varReserved,ppOperation) )
#define IAzApplication3_DeleteOperation(This,bstrOperationName,varReserved)    ( (This)->lpVtbl -> DeleteOperation(This,bstrOperationName,varReserved) )
#define IAzApplication3_get_Tasks(This,ppTaskCollection)    ( (This)->lpVtbl -> get_Tasks(This,ppTaskCollection) )
#define IAzApplication3_OpenTask(This,bstrTaskName,varReserved,ppTask)    ( (This)->lpVtbl -> OpenTask(This,bstrTaskName,varReserved,ppTask) )
#define IAzApplication3_CreateTask(This,bstrTaskName,varReserved,ppTask)    ( (This)->lpVtbl -> CreateTask(This,bstrTaskName,varReserved,ppTask) )
#define IAzApplication3_DeleteTask(This,bstrTaskName,varReserved)    ( (This)->lpVtbl -> DeleteTask(This,bstrTaskName,varReserved) )
#define IAzApplication3_get_ApplicationGroups(This,ppGroupCollection)    ( (This)->lpVtbl -> get_ApplicationGroups(This,ppGroupCollection) )
#define IAzApplication3_OpenApplicationGroup(This,bstrGroupName,varReserved,ppGroup)    ( (This)->lpVtbl -> OpenApplicationGroup(This,bstrGroupName,varReserved,ppGroup) )
#define IAzApplication3_CreateApplicationGroup(This,bstrGroupName,varReserved,ppGroup)    ( (This)->lpVtbl -> CreateApplicationGroup(This,bstrGroupName,varReserved,ppGroup) )
#define IAzApplication3_DeleteApplicationGroup(This,bstrGroupName,varReserved)    ( (This)->lpVtbl -> DeleteApplicationGroup(This,bstrGroupName,varReserved) )
#define IAzApplication3_get_Roles(This,ppRoleCollection)    ( (This)->lpVtbl -> get_Roles(This,ppRoleCollection) )
#define IAzApplication3_OpenRole(This,bstrRoleName,varReserved,ppRole)    ( (This)->lpVtbl -> OpenRole(This,bstrRoleName,varReserved,ppRole) )
#define IAzApplication3_CreateRole(This,bstrRoleName,varReserved,ppRole)    ( (This)->lpVtbl -> CreateRole(This,bstrRoleName,varReserved,ppRole) )
#define IAzApplication3_DeleteRole(This,bstrRoleName,varReserved)    ( (This)->lpVtbl -> DeleteRole(This,bstrRoleName,varReserved) )
#define IAzApplication3_InitializeClientContextFromToken(This,ullTokenHandle,varReserved,ppClientContext)    ( (This)->lpVtbl -> InitializeClientContextFromToken(This,ullTokenHandle,varReserved,ppClientContext) )
#define IAzApplication3_AddPropertyItem(This,lPropId,varProp,varReserved)    ( (This)->lpVtbl -> AddPropertyItem(This,lPropId,varProp,varReserved) )
#define IAzApplication3_DeletePropertyItem(This,lPropId,varProp,varReserved)    ( (This)->lpVtbl -> DeletePropertyItem(This,lPropId,varProp,varReserved) )
#define IAzApplication3_Submit(This,lFlags,varReserved)    ( (This)->lpVtbl -> Submit(This,lFlags,varReserved) )
#define IAzApplication3_InitializeClientContextFromName(This,ClientName,DomainName,varReserved,ppClientContext)    ( (This)->lpVtbl -> InitializeClientContextFromName(This,ClientName,DomainName,varReserved,ppClientContext) )
#define IAzApplication3_get_DelegatedPolicyUsers(This,pvarDelegatedPolicyUsers)    ( (This)->lpVtbl -> get_DelegatedPolicyUsers(This,pvarDelegatedPolicyUsers) )
#define IAzApplication3_AddDelegatedPolicyUser(This,bstrDelegatedPolicyUser,varReserved)    ( (This)->lpVtbl -> AddDelegatedPolicyUser(This,bstrDelegatedPolicyUser,varReserved) )
#define IAzApplication3_DeleteDelegatedPolicyUser(This,bstrDelegatedPolicyUser,varReserved)    ( (This)->lpVtbl -> DeleteDelegatedPolicyUser(This,bstrDelegatedPolicyUser,varReserved) )
#define IAzApplication3_InitializeClientContextFromStringSid(This,SidString,lOptions,varReserved,ppClientContext)    ( (This)->lpVtbl -> InitializeClientContextFromStringSid(This,SidString,lOptions,varReserved,ppClientContext) )
#define IAzApplication3_get_PolicyAdministratorsName(This,pvarAdmins)    ( (This)->lpVtbl -> get_PolicyAdministratorsName(This,pvarAdmins) )
#define IAzApplication3_get_PolicyReadersName(This,pvarReaders)    ( (This)->lpVtbl -> get_PolicyReadersName(This,pvarReaders) )
#define IAzApplication3_AddPolicyAdministratorName(This,bstrAdmin,varReserved)    ( (This)->lpVtbl -> AddPolicyAdministratorName(This,bstrAdmin,varReserved) )
#define IAzApplication3_DeletePolicyAdministratorName(This,bstrAdmin,varReserved)    ( (This)->lpVtbl -> DeletePolicyAdministratorName(This,bstrAdmin,varReserved) )
#define IAzApplication3_AddPolicyReaderName(This,bstrReader,varReserved)    ( (This)->lpVtbl -> AddPolicyReaderName(This,bstrReader,varReserved) )
#define IAzApplication3_DeletePolicyReaderName(This,bstrReader,varReserved)    ( (This)->lpVtbl -> DeletePolicyReaderName(This,bstrReader,varReserved) )
#define IAzApplication3_get_DelegatedPolicyUsersName(This,pvarDelegatedPolicyUsers)    ( (This)->lpVtbl -> get_DelegatedPolicyUsersName(This,pvarDelegatedPolicyUsers) )
#define IAzApplication3_AddDelegatedPolicyUserName(This,bstrDelegatedPolicyUser,varReserved)    ( (This)->lpVtbl -> AddDelegatedPolicyUserName(This,bstrDelegatedPolicyUser,varReserved) )
#define IAzApplication3_DeleteDelegatedPolicyUserName(This,bstrDelegatedPolicyUser,varReserved)    ( (This)->lpVtbl -> DeleteDelegatedPolicyUserName(This,bstrDelegatedPolicyUser,varReserved) )
#define IAzApplication3_InitializeClientContextFromToken2(This,ulTokenHandleLowPart,ulTokenHandleHighPart,varReserved,ppClientContext)    ( (This)->lpVtbl -> InitializeClientContextFromToken2(This,ulTokenHandleLowPart,ulTokenHandleHighPart,varReserved,ppClientContext) )
#define IAzApplication3_InitializeClientContext2(This,IdentifyingString,varReserved,ppClientContext)    ( (This)->lpVtbl -> InitializeClientContext2(This,IdentifyingString,varReserved,ppClientContext) )
#define IAzApplication3_ScopeExists(This,bstrScopeName,pbExist)    ( (This)->lpVtbl -> ScopeExists(This,bstrScopeName,pbExist) )
#define IAzApplication3_OpenScope2(This,bstrScopeName,ppScope2)    ( (This)->lpVtbl -> OpenScope2(This,bstrScopeName,ppScope2) )
#define IAzApplication3_CreateScope2(This,bstrScopeName,ppScope2)    ( (This)->lpVtbl -> CreateScope2(This,bstrScopeName,ppScope2) )
#define IAzApplication3_DeleteScope2(This,bstrScopeName)    ( (This)->lpVtbl -> DeleteScope2(This,bstrScopeName) )
#define IAzApplication3_get_RoleDefinitions(This,ppRoleDefinitions)    ( (This)->lpVtbl -> get_RoleDefinitions(This,ppRoleDefinitions) )
#define IAzApplication3_CreateRoleDefinition(This,bstrRoleDefinitionName,ppRoleDefinitions)    ( (This)->lpVtbl -> CreateRoleDefinition(This,bstrRoleDefinitionName,ppRoleDefinitions) )
#define IAzApplication3_OpenRoleDefinition(This,bstrRoleDefinitionName,ppRoleDefinitions)    ( (This)->lpVtbl -> OpenRoleDefinition(This,bstrRoleDefinitionName,ppRoleDefinitions) )
#define IAzApplication3_DeleteRoleDefinition(This,bstrRoleDefinitionName)    ( (This)->lpVtbl -> DeleteRoleDefinition(This,bstrRoleDefinitionName) )
#define IAzApplication3_get_RoleAssignments(This,ppRoleAssignments)    ( (This)->lpVtbl -> get_RoleAssignments(This,ppRoleAssignments) )
#define IAzApplication3_CreateRoleAssignment(This,bstrRoleAssignmentName,ppRoleAssignment)    ( (This)->lpVtbl -> CreateRoleAssignment(This,bstrRoleAssignmentName,ppRoleAssignment) )
#define IAzApplication3_OpenRoleAssignment(This,bstrRoleAssignmentName,ppRoleAssignment)    ( (This)->lpVtbl -> OpenRoleAssignment(This,bstrRoleAssignmentName,ppRoleAssignment) )
#define IAzApplication3_DeleteRoleAssignment(This,bstrRoleAssignmentName)    ( (This)->lpVtbl -> DeleteRoleAssignment(This,bstrRoleAssignmentName) )
#define IAzApplication3_get_BizRulesEnabled(This,pbEnabled)    ( (This)->lpVtbl -> get_BizRulesEnabled(This,pbEnabled) )
#define IAzApplication3_put_BizRulesEnabled(This,bEnabled)    ( (This)->lpVtbl -> put_BizRulesEnabled(This,bEnabled) )
#endif
#endif
#ifndef __IAzOperation2_INTERFACE_DEFINED__
#define __IAzOperation2_INTERFACE_DEFINED__
extern const IID IID_IAzOperation2;
typedef struct IAzOperation2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAzOperation2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAzOperation2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAzOperation2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAzOperation2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAzOperation2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAzOperation2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAzOperation2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IAzOperation2 * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * put_Name) (IAzOperation2 * This, BSTR bstrName);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IAzOperation2 * This, BSTR * pbstrDescription);
	HRESULT(STDMETHODCALLTYPE * put_Description) (IAzOperation2 * This, BSTR bstrDescription);
	HRESULT(STDMETHODCALLTYPE * get_ApplicationData) (IAzOperation2 * This, BSTR * pbstrApplicationData);
	HRESULT(STDMETHODCALLTYPE * put_ApplicationData) (IAzOperation2 * This, BSTR bstrApplicationData);
	HRESULT(STDMETHODCALLTYPE * get_OperationID) (IAzOperation2 * This, LONG * plProp);
	HRESULT(STDMETHODCALLTYPE * put_OperationID) (IAzOperation2 * This, LONG lProp);
	HRESULT(STDMETHODCALLTYPE * get_Writable) (IAzOperation2 * This, BOOL * pfProp);
	HRESULT(STDMETHODCALLTYPE * GetProperty) (IAzOperation2 * This, LONG lPropId, VARIANT varReserved, VARIANT * pvarProp);
	HRESULT(STDMETHODCALLTYPE * SetProperty) (IAzOperation2 * This, LONG lPropId, VARIANT varProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * Submit) (IAzOperation2 * This, LONG lFlags, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * RoleAssignments) (IAzOperation2 * This, BSTR bstrScopeName, VARIANT_BOOL bRecursive, IAzRoleAssignments ** ppRoleAssignments);
	END_INTERFACE
}  IAzOperation2Vtbl;
interface IAzOperation2
{
	CONST_VTBL struct IAzOperation2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAzOperation2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAzOperation2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAzOperation2_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAzOperation2_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAzOperation2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAzOperation2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAzOperation2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAzOperation2_get_Name(This,pbstrName)    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
#define IAzOperation2_put_Name(This,bstrName)    ( (This)->lpVtbl -> put_Name(This,bstrName) )
#define IAzOperation2_get_Description(This,pbstrDescription)    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) )
#define IAzOperation2_put_Description(This,bstrDescription)    ( (This)->lpVtbl -> put_Description(This,bstrDescription) )
#define IAzOperation2_get_ApplicationData(This,pbstrApplicationData)    ( (This)->lpVtbl -> get_ApplicationData(This,pbstrApplicationData) )
#define IAzOperation2_put_ApplicationData(This,bstrApplicationData)    ( (This)->lpVtbl -> put_ApplicationData(This,bstrApplicationData) )
#define IAzOperation2_get_OperationID(This,plProp)    ( (This)->lpVtbl -> get_OperationID(This,plProp) )
#define IAzOperation2_put_OperationID(This,lProp)    ( (This)->lpVtbl -> put_OperationID(This,lProp) )
#define IAzOperation2_get_Writable(This,pfProp)    ( (This)->lpVtbl -> get_Writable(This,pfProp) )
#define IAzOperation2_GetProperty(This,lPropId,varReserved,pvarProp)    ( (This)->lpVtbl -> GetProperty(This,lPropId,varReserved,pvarProp) )
#define IAzOperation2_SetProperty(This,lPropId,varProp,varReserved)    ( (This)->lpVtbl -> SetProperty(This,lPropId,varProp,varReserved) )
#define IAzOperation2_Submit(This,lFlags,varReserved)    ( (This)->lpVtbl -> Submit(This,lFlags,varReserved) )
#define IAzOperation2_RoleAssignments(This,bstrScopeName,bRecursive,ppRoleAssignments)    ( (This)->lpVtbl -> RoleAssignments(This,bstrScopeName,bRecursive,ppRoleAssignments) )
#endif
#endif
#ifndef __IAzRoleDefinitions_INTERFACE_DEFINED__
#define __IAzRoleDefinitions_INTERFACE_DEFINED__
extern const IID IID_IAzRoleDefinitions;
typedef struct IAzRoleDefinitionsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAzRoleDefinitions * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAzRoleDefinitions * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAzRoleDefinitions * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAzRoleDefinitions * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAzRoleDefinitions * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAzRoleDefinitions * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAzRoleDefinitions * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IAzRoleDefinitions * This, LONG Index, VARIANT * pvarObtPtr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IAzRoleDefinitions * This, LONG * plCount);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IAzRoleDefinitions * This, LPUNKNOWN * ppEnumPtr);
	END_INTERFACE
}  IAzRoleDefinitionsVtbl;
interface IAzRoleDefinitions
{
	CONST_VTBL struct IAzRoleDefinitionsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAzRoleDefinitions_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAzRoleDefinitions_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAzRoleDefinitions_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAzRoleDefinitions_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAzRoleDefinitions_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAzRoleDefinitions_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAzRoleDefinitions_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAzRoleDefinitions_get_Item(This,Index,pvarObtPtr)    ( (This)->lpVtbl -> get_Item(This,Index,pvarObtPtr) )
#define IAzRoleDefinitions_get_Count(This,plCount)    ( (This)->lpVtbl -> get_Count(This,plCount) )
#define IAzRoleDefinitions_get__NewEnum(This,ppEnumPtr)    ( (This)->lpVtbl -> get__NewEnum(This,ppEnumPtr) )
#endif
#endif
#ifndef __IAzRoleDefinition_INTERFACE_DEFINED__
#define __IAzRoleDefinition_INTERFACE_DEFINED__
extern const IID IID_IAzRoleDefinition;
typedef struct IAzRoleDefinitionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAzRoleDefinition * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAzRoleDefinition * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAzRoleDefinition * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAzRoleDefinition * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAzRoleDefinition * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAzRoleDefinition * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAzRoleDefinition * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IAzRoleDefinition * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * put_Name) (IAzRoleDefinition * This, BSTR bstrName);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IAzRoleDefinition * This, BSTR * pbstrDescription);
	HRESULT(STDMETHODCALLTYPE * put_Description) (IAzRoleDefinition * This, BSTR bstrDescription);
	HRESULT(STDMETHODCALLTYPE * get_ApplicationData) (IAzRoleDefinition * This, BSTR * pbstrApplicationData);
	HRESULT(STDMETHODCALLTYPE * put_ApplicationData) (IAzRoleDefinition * This, BSTR bstrApplicationData);
	HRESULT(STDMETHODCALLTYPE * get_BizRule) (IAzRoleDefinition * This, BSTR * pbstrProp);
	HRESULT(STDMETHODCALLTYPE * put_BizRule) (IAzRoleDefinition * This, BSTR bstrProp);
	HRESULT(STDMETHODCALLTYPE * get_BizRuleLanguage) (IAzRoleDefinition * This, BSTR * pbstrProp);
	HRESULT(STDMETHODCALLTYPE * put_BizRuleLanguage) (IAzRoleDefinition * This, BSTR bstrProp);
	HRESULT(STDMETHODCALLTYPE * get_BizRuleImportedPath) (IAzRoleDefinition * This, BSTR * pbstrProp);
	HRESULT(STDMETHODCALLTYPE * put_BizRuleImportedPath) (IAzRoleDefinition * This, BSTR bstrProp);
	HRESULT(STDMETHODCALLTYPE * get_IsRoleDefinition) (IAzRoleDefinition * This, BOOL * pfProp);
	HRESULT(STDMETHODCALLTYPE * put_IsRoleDefinition) (IAzRoleDefinition * This, BOOL fProp);
	HRESULT(STDMETHODCALLTYPE * get_Operations) (IAzRoleDefinition * This, VARIANT * pvarProp);
	HRESULT(STDMETHODCALLTYPE * get_Tasks) (IAzRoleDefinition * This, VARIANT * pvarProp);
	HRESULT(STDMETHODCALLTYPE * AddOperation) (IAzRoleDefinition * This, BSTR bstrOp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeleteOperation) (IAzRoleDefinition * This, BSTR bstrOp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * AddTask) (IAzRoleDefinition * This, BSTR bstrTask, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeleteTask) (IAzRoleDefinition * This, BSTR bstrTask, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_Writable) (IAzRoleDefinition * This, BOOL * pfProp);
	HRESULT(STDMETHODCALLTYPE * GetProperty) (IAzRoleDefinition * This, LONG lPropId, VARIANT varReserved, VARIANT * pvarProp);
	HRESULT(STDMETHODCALLTYPE * SetProperty) (IAzRoleDefinition * This, LONG lPropId, VARIANT varProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * AddPropertyItem) (IAzRoleDefinition * This, LONG lPropId, VARIANT varProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeletePropertyItem) (IAzRoleDefinition * This, LONG lPropId, VARIANT varProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * Submit) (IAzRoleDefinition * This, LONG lFlags, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * RoleAssignments) (IAzRoleDefinition * This, BSTR bstrScopeName, VARIANT_BOOL bRecursive, IAzRoleAssignments ** ppRoleAssignments);
	HRESULT(STDMETHODCALLTYPE * AddRoleDefinition) (IAzRoleDefinition * This, BSTR bstrRoleDefinition);
	HRESULT(STDMETHODCALLTYPE * DeleteRoleDefinition) (IAzRoleDefinition * This, BSTR bstrRoleDefinition);
	HRESULT(STDMETHODCALLTYPE * get_RoleDefinitions) (IAzRoleDefinition * This, IAzRoleDefinitions ** ppRoleDefinitions);
	END_INTERFACE
}  IAzRoleDefinitionVtbl;
interface IAzRoleDefinition
{
	CONST_VTBL struct IAzRoleDefinitionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAzRoleDefinition_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAzRoleDefinition_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAzRoleDefinition_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAzRoleDefinition_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAzRoleDefinition_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAzRoleDefinition_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAzRoleDefinition_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAzRoleDefinition_get_Name(This,pbstrName)    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
#define IAzRoleDefinition_put_Name(This,bstrName)    ( (This)->lpVtbl -> put_Name(This,bstrName) )
#define IAzRoleDefinition_get_Description(This,pbstrDescription)    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) )
#define IAzRoleDefinition_put_Description(This,bstrDescription)    ( (This)->lpVtbl -> put_Description(This,bstrDescription) )
#define IAzRoleDefinition_get_ApplicationData(This,pbstrApplicationData)    ( (This)->lpVtbl -> get_ApplicationData(This,pbstrApplicationData) )
#define IAzRoleDefinition_put_ApplicationData(This,bstrApplicationData)    ( (This)->lpVtbl -> put_ApplicationData(This,bstrApplicationData) )
#define IAzRoleDefinition_get_BizRule(This,pbstrProp)    ( (This)->lpVtbl -> get_BizRule(This,pbstrProp) )
#define IAzRoleDefinition_put_BizRule(This,bstrProp)    ( (This)->lpVtbl -> put_BizRule(This,bstrProp) )
#define IAzRoleDefinition_get_BizRuleLanguage(This,pbstrProp)    ( (This)->lpVtbl -> get_BizRuleLanguage(This,pbstrProp) )
#define IAzRoleDefinition_put_BizRuleLanguage(This,bstrProp)    ( (This)->lpVtbl -> put_BizRuleLanguage(This,bstrProp) )
#define IAzRoleDefinition_get_BizRuleImportedPath(This,pbstrProp)    ( (This)->lpVtbl -> get_BizRuleImportedPath(This,pbstrProp) )
#define IAzRoleDefinition_put_BizRuleImportedPath(This,bstrProp)    ( (This)->lpVtbl -> put_BizRuleImportedPath(This,bstrProp) )
#define IAzRoleDefinition_get_IsRoleDefinition(This,pfProp)    ( (This)->lpVtbl -> get_IsRoleDefinition(This,pfProp) )
#define IAzRoleDefinition_put_IsRoleDefinition(This,fProp)    ( (This)->lpVtbl -> put_IsRoleDefinition(This,fProp) )
#define IAzRoleDefinition_get_Operations(This,pvarProp)    ( (This)->lpVtbl -> get_Operations(This,pvarProp) )
#define IAzRoleDefinition_get_Tasks(This,pvarProp)    ( (This)->lpVtbl -> get_Tasks(This,pvarProp) )
#define IAzRoleDefinition_AddOperation(This,bstrOp,varReserved)    ( (This)->lpVtbl -> AddOperation(This,bstrOp,varReserved) )
#define IAzRoleDefinition_DeleteOperation(This,bstrOp,varReserved)    ( (This)->lpVtbl -> DeleteOperation(This,bstrOp,varReserved) )
#define IAzRoleDefinition_AddTask(This,bstrTask,varReserved)    ( (This)->lpVtbl -> AddTask(This,bstrTask,varReserved) )
#define IAzRoleDefinition_DeleteTask(This,bstrTask,varReserved)    ( (This)->lpVtbl -> DeleteTask(This,bstrTask,varReserved) )
#define IAzRoleDefinition_get_Writable(This,pfProp)    ( (This)->lpVtbl -> get_Writable(This,pfProp) )
#define IAzRoleDefinition_GetProperty(This,lPropId,varReserved,pvarProp)    ( (This)->lpVtbl -> GetProperty(This,lPropId,varReserved,pvarProp) )
#define IAzRoleDefinition_SetProperty(This,lPropId,varProp,varReserved)    ( (This)->lpVtbl -> SetProperty(This,lPropId,varProp,varReserved) )
#define IAzRoleDefinition_AddPropertyItem(This,lPropId,varProp,varReserved)    ( (This)->lpVtbl -> AddPropertyItem(This,lPropId,varProp,varReserved) )
#define IAzRoleDefinition_DeletePropertyItem(This,lPropId,varProp,varReserved)    ( (This)->lpVtbl -> DeletePropertyItem(This,lPropId,varProp,varReserved) )
#define IAzRoleDefinition_Submit(This,lFlags,varReserved)    ( (This)->lpVtbl -> Submit(This,lFlags,varReserved) )
#define IAzRoleDefinition_RoleAssignments(This,bstrScopeName,bRecursive,ppRoleAssignments)    ( (This)->lpVtbl -> RoleAssignments(This,bstrScopeName,bRecursive,ppRoleAssignments) )
#define IAzRoleDefinition_AddRoleDefinition(This,bstrRoleDefinition)    ( (This)->lpVtbl -> AddRoleDefinition(This,bstrRoleDefinition) )
#define IAzRoleDefinition_DeleteRoleDefinition(This,bstrRoleDefinition)    ( (This)->lpVtbl -> DeleteRoleDefinition(This,bstrRoleDefinition) )
#define IAzRoleDefinition_get_RoleDefinitions(This,ppRoleDefinitions)    ( (This)->lpVtbl -> get_RoleDefinitions(This,ppRoleDefinitions) )
#endif
#endif
#ifndef __IAzRoleAssignment_INTERFACE_DEFINED__
#define __IAzRoleAssignment_INTERFACE_DEFINED__
extern const IID IID_IAzRoleAssignment;
typedef struct IAzRoleAssignmentVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAzRoleAssignment * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAzRoleAssignment * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAzRoleAssignment * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAzRoleAssignment * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAzRoleAssignment * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAzRoleAssignment * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAzRoleAssignment * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IAzRoleAssignment * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * put_Name) (IAzRoleAssignment * This, BSTR bstrName);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IAzRoleAssignment * This, BSTR * pbstrDescription);
	HRESULT(STDMETHODCALLTYPE * put_Description) (IAzRoleAssignment * This, BSTR bstrDescription);
	HRESULT(STDMETHODCALLTYPE * get_ApplicationData) (IAzRoleAssignment * This, BSTR * pbstrApplicationData);
	HRESULT(STDMETHODCALLTYPE * put_ApplicationData) (IAzRoleAssignment * This, BSTR bstrApplicationData);
	HRESULT(STDMETHODCALLTYPE * AddAppMember) (IAzRoleAssignment * This, BSTR bstrProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeleteAppMember) (IAzRoleAssignment * This, BSTR bstrProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * AddTask) (IAzRoleAssignment * This, BSTR bstrProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeleteTask) (IAzRoleAssignment * This, BSTR bstrProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * AddOperation) (IAzRoleAssignment * This, BSTR bstrProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeleteOperation) (IAzRoleAssignment * This, BSTR bstrProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * AddMember) (IAzRoleAssignment * This, BSTR bstrProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeleteMember) (IAzRoleAssignment * This, BSTR bstrProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_Writable) (IAzRoleAssignment * This, BOOL * pfProp);
	HRESULT(STDMETHODCALLTYPE * GetProperty) (IAzRoleAssignment * This, LONG lPropId, VARIANT varReserved, VARIANT * pvarProp);
	HRESULT(STDMETHODCALLTYPE * SetProperty) (IAzRoleAssignment * This, LONG lPropId, VARIANT varProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_AppMembers) (IAzRoleAssignment * This, VARIANT * pvarProp);
	HRESULT(STDMETHODCALLTYPE * get_Members) (IAzRoleAssignment * This, VARIANT * pvarProp);
	HRESULT(STDMETHODCALLTYPE * get_Operations) (IAzRoleAssignment * This, VARIANT * pvarProp);
	HRESULT(STDMETHODCALLTYPE * get_Tasks) (IAzRoleAssignment * This, VARIANT * pvarProp);
	HRESULT(STDMETHODCALLTYPE * AddPropertyItem) (IAzRoleAssignment * This, LONG lPropId, VARIANT varProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeletePropertyItem) (IAzRoleAssignment * This, LONG lPropId, VARIANT varProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * Submit) (IAzRoleAssignment * This, LONG lFlags, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * AddMemberName) (IAzRoleAssignment * This, BSTR bstrProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeleteMemberName) (IAzRoleAssignment * This, BSTR bstrProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_MembersName) (IAzRoleAssignment * This, VARIANT * pvarProp);
	HRESULT(STDMETHODCALLTYPE * AddRoleDefinition) (IAzRoleAssignment * This, BSTR bstrRoleDefinition);
	HRESULT(STDMETHODCALLTYPE * DeleteRoleDefinition) (IAzRoleAssignment * This, BSTR bstrRoleDefinition);
	HRESULT(STDMETHODCALLTYPE * get_RoleDefinitions) (IAzRoleAssignment * This, IAzRoleDefinitions ** ppRoleDefinitions);
	HRESULT(STDMETHODCALLTYPE * get_Scope) (IAzRoleAssignment * This, IAzScope ** ppScope);
	END_INTERFACE
}  IAzRoleAssignmentVtbl;
interface IAzRoleAssignment
{
	CONST_VTBL struct IAzRoleAssignmentVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAzRoleAssignment_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAzRoleAssignment_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAzRoleAssignment_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAzRoleAssignment_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAzRoleAssignment_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAzRoleAssignment_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAzRoleAssignment_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAzRoleAssignment_get_Name(This,pbstrName)    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
#define IAzRoleAssignment_put_Name(This,bstrName)    ( (This)->lpVtbl -> put_Name(This,bstrName) )
#define IAzRoleAssignment_get_Description(This,pbstrDescription)    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) )
#define IAzRoleAssignment_put_Description(This,bstrDescription)    ( (This)->lpVtbl -> put_Description(This,bstrDescription) )
#define IAzRoleAssignment_get_ApplicationData(This,pbstrApplicationData)    ( (This)->lpVtbl -> get_ApplicationData(This,pbstrApplicationData) )
#define IAzRoleAssignment_put_ApplicationData(This,bstrApplicationData)    ( (This)->lpVtbl -> put_ApplicationData(This,bstrApplicationData) )
#define IAzRoleAssignment_AddAppMember(This,bstrProp,varReserved)    ( (This)->lpVtbl -> AddAppMember(This,bstrProp,varReserved) )
#define IAzRoleAssignment_DeleteAppMember(This,bstrProp,varReserved)    ( (This)->lpVtbl -> DeleteAppMember(This,bstrProp,varReserved) )
#define IAzRoleAssignment_AddTask(This,bstrProp,varReserved)    ( (This)->lpVtbl -> AddTask(This,bstrProp,varReserved) )
#define IAzRoleAssignment_DeleteTask(This,bstrProp,varReserved)    ( (This)->lpVtbl -> DeleteTask(This,bstrProp,varReserved) )
#define IAzRoleAssignment_AddOperation(This,bstrProp,varReserved)    ( (This)->lpVtbl -> AddOperation(This,bstrProp,varReserved) )
#define IAzRoleAssignment_DeleteOperation(This,bstrProp,varReserved)    ( (This)->lpVtbl -> DeleteOperation(This,bstrProp,varReserved) )
#define IAzRoleAssignment_AddMember(This,bstrProp,varReserved)    ( (This)->lpVtbl -> AddMember(This,bstrProp,varReserved) )
#define IAzRoleAssignment_DeleteMember(This,bstrProp,varReserved)    ( (This)->lpVtbl -> DeleteMember(This,bstrProp,varReserved) )
#define IAzRoleAssignment_get_Writable(This,pfProp)    ( (This)->lpVtbl -> get_Writable(This,pfProp) )
#define IAzRoleAssignment_GetProperty(This,lPropId,varReserved,pvarProp)    ( (This)->lpVtbl -> GetProperty(This,lPropId,varReserved,pvarProp) )
#define IAzRoleAssignment_SetProperty(This,lPropId,varProp,varReserved)    ( (This)->lpVtbl -> SetProperty(This,lPropId,varProp,varReserved) )
#define IAzRoleAssignment_get_AppMembers(This,pvarProp)    ( (This)->lpVtbl -> get_AppMembers(This,pvarProp) )
#define IAzRoleAssignment_get_Members(This,pvarProp)    ( (This)->lpVtbl -> get_Members(This,pvarProp) )
#define IAzRoleAssignment_get_Operations(This,pvarProp)    ( (This)->lpVtbl -> get_Operations(This,pvarProp) )
#define IAzRoleAssignment_get_Tasks(This,pvarProp)    ( (This)->lpVtbl -> get_Tasks(This,pvarProp) )
#define IAzRoleAssignment_AddPropertyItem(This,lPropId,varProp,varReserved)    ( (This)->lpVtbl -> AddPropertyItem(This,lPropId,varProp,varReserved) )
#define IAzRoleAssignment_DeletePropertyItem(This,lPropId,varProp,varReserved)    ( (This)->lpVtbl -> DeletePropertyItem(This,lPropId,varProp,varReserved) )
#define IAzRoleAssignment_Submit(This,lFlags,varReserved)    ( (This)->lpVtbl -> Submit(This,lFlags,varReserved) )
#define IAzRoleAssignment_AddMemberName(This,bstrProp,varReserved)    ( (This)->lpVtbl -> AddMemberName(This,bstrProp,varReserved) )
#define IAzRoleAssignment_DeleteMemberName(This,bstrProp,varReserved)    ( (This)->lpVtbl -> DeleteMemberName(This,bstrProp,varReserved) )
#define IAzRoleAssignment_get_MembersName(This,pvarProp)    ( (This)->lpVtbl -> get_MembersName(This,pvarProp) )
#define IAzRoleAssignment_AddRoleDefinition(This,bstrRoleDefinition)    ( (This)->lpVtbl -> AddRoleDefinition(This,bstrRoleDefinition) )
#define IAzRoleAssignment_DeleteRoleDefinition(This,bstrRoleDefinition)    ( (This)->lpVtbl -> DeleteRoleDefinition(This,bstrRoleDefinition) )
#define IAzRoleAssignment_get_RoleDefinitions(This,ppRoleDefinitions)    ( (This)->lpVtbl -> get_RoleDefinitions(This,ppRoleDefinitions) )
#define IAzRoleAssignment_get_Scope(This,ppScope)    ( (This)->lpVtbl -> get_Scope(This,ppScope) )
#endif
#endif
#ifndef __IAzRoleAssignments_INTERFACE_DEFINED__
#define __IAzRoleAssignments_INTERFACE_DEFINED__
extern const IID IID_IAzRoleAssignments;
typedef struct IAzRoleAssignmentsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAzRoleAssignments * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAzRoleAssignments * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAzRoleAssignments * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAzRoleAssignments * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAzRoleAssignments * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAzRoleAssignments * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAzRoleAssignments * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IAzRoleAssignments * This, LONG Index, VARIANT * pvarObtPtr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IAzRoleAssignments * This, LONG * plCount);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IAzRoleAssignments * This, LPUNKNOWN * ppEnumPtr);
	END_INTERFACE
}  IAzRoleAssignmentsVtbl;
interface IAzRoleAssignments
{
	CONST_VTBL struct IAzRoleAssignmentsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAzRoleAssignments_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAzRoleAssignments_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAzRoleAssignments_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAzRoleAssignments_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAzRoleAssignments_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAzRoleAssignments_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAzRoleAssignments_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAzRoleAssignments_get_Item(This,Index,pvarObtPtr)    ( (This)->lpVtbl -> get_Item(This,Index,pvarObtPtr) )
#define IAzRoleAssignments_get_Count(This,plCount)    ( (This)->lpVtbl -> get_Count(This,plCount) )
#define IAzRoleAssignments_get__NewEnum(This,ppEnumPtr)    ( (This)->lpVtbl -> get__NewEnum(This,ppEnumPtr) )
#endif
#endif
#ifndef __IAzPrincipalLocator_INTERFACE_DEFINED__
#define __IAzPrincipalLocator_INTERFACE_DEFINED__
extern const IID IID_IAzPrincipalLocator;
typedef struct IAzPrincipalLocatorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAzPrincipalLocator * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAzPrincipalLocator * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAzPrincipalLocator * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAzPrincipalLocator * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAzPrincipalLocator * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAzPrincipalLocator * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAzPrincipalLocator * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_NameResolver) (IAzPrincipalLocator * This, IAzNameResolver ** ppNameResolver);
	HRESULT(STDMETHODCALLTYPE * get_ObjectPicker) (IAzPrincipalLocator * This, IAzObjectPicker ** ppObjectPicker);
	END_INTERFACE
}  IAzPrincipalLocatorVtbl;
interface IAzPrincipalLocator
{
	CONST_VTBL struct IAzPrincipalLocatorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAzPrincipalLocator_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAzPrincipalLocator_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAzPrincipalLocator_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAzPrincipalLocator_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAzPrincipalLocator_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAzPrincipalLocator_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAzPrincipalLocator_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAzPrincipalLocator_get_NameResolver(This,ppNameResolver)    ( (This)->lpVtbl -> get_NameResolver(This,ppNameResolver) )
#define IAzPrincipalLocator_get_ObjectPicker(This,ppObjectPicker)    ( (This)->lpVtbl -> get_ObjectPicker(This,ppObjectPicker) )
#endif
#endif
#ifndef __IAzNameResolver_INTERFACE_DEFINED__
#define __IAzNameResolver_INTERFACE_DEFINED__
extern const IID IID_IAzNameResolver;
typedef struct IAzNameResolverVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAzNameResolver * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAzNameResolver * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAzNameResolver * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAzNameResolver * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAzNameResolver * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAzNameResolver * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAzNameResolver * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * NameFromSid) (IAzNameResolver * This, BSTR bstrSid, long *pSidType, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * NamesFromSids) (IAzNameResolver * This, VARIANT vSids, VARIANT * pvSidTypes, VARIANT * pvNames);
	END_INTERFACE
}  IAzNameResolverVtbl;
interface IAzNameResolver
{
	CONST_VTBL struct IAzNameResolverVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAzNameResolver_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAzNameResolver_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAzNameResolver_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAzNameResolver_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAzNameResolver_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAzNameResolver_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAzNameResolver_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAzNameResolver_NameFromSid(This,bstrSid,pSidType,pbstrName)    ( (This)->lpVtbl -> NameFromSid(This,bstrSid,pSidType,pbstrName) )
#define IAzNameResolver_NamesFromSids(This,vSids,pvSidTypes,pvNames)    ( (This)->lpVtbl -> NamesFromSids(This,vSids,pvSidTypes,pvNames) )
#endif
#endif
#ifndef __IAzObjectPicker_INTERFACE_DEFINED__
#define __IAzObjectPicker_INTERFACE_DEFINED__
extern const IID IID_IAzObjectPicker;
typedef struct IAzObjectPickerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAzObjectPicker * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAzObjectPicker * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAzObjectPicker * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAzObjectPicker * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAzObjectPicker * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAzObjectPicker * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAzObjectPicker * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * GetPrincipals) (IAzObjectPicker * This, HWND hParentWnd, BSTR bstrTitle, VARIANT * pvSidTypes, VARIANT * pvNames, VARIANT * pvSids);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IAzObjectPicker * This, BSTR * pbstrName);
	END_INTERFACE
}  IAzObjectPickerVtbl;
interface IAzObjectPicker
{
	CONST_VTBL struct IAzObjectPickerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAzObjectPicker_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAzObjectPicker_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAzObjectPicker_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAzObjectPicker_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAzObjectPicker_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAzObjectPicker_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAzObjectPicker_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAzObjectPicker_GetPrincipals(This,hParentWnd,bstrTitle,pvSidTypes,pvNames,pvSids)    ( (This)->lpVtbl -> GetPrincipals(This,hParentWnd,bstrTitle,pvSidTypes,pvNames,pvSids) )
#define IAzObjectPicker_get_Name(This,pbstrName)    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
#endif
#endif
#ifndef __IAzApplicationGroup2_INTERFACE_DEFINED__
#define __IAzApplicationGroup2_INTERFACE_DEFINED__
extern const IID IID_IAzApplicationGroup2;
typedef struct IAzApplicationGroup2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAzApplicationGroup2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAzApplicationGroup2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAzApplicationGroup2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAzApplicationGroup2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAzApplicationGroup2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAzApplicationGroup2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAzApplicationGroup2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IAzApplicationGroup2 * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * put_Name) (IAzApplicationGroup2 * This, BSTR bstrName);
	HRESULT(STDMETHODCALLTYPE * get_Type) (IAzApplicationGroup2 * This, LONG * plProp);
	HRESULT(STDMETHODCALLTYPE * put_Type) (IAzApplicationGroup2 * This, LONG lProp);
	HRESULT(STDMETHODCALLTYPE * get_LdapQuery) (IAzApplicationGroup2 * This, BSTR * pbstrProp);
	HRESULT(STDMETHODCALLTYPE * put_LdapQuery) (IAzApplicationGroup2 * This, BSTR bstrProp);
	HRESULT(STDMETHODCALLTYPE * get_AppMembers) (IAzApplicationGroup2 * This, VARIANT * pvarProp);
	HRESULT(STDMETHODCALLTYPE * get_AppNonMembers) (IAzApplicationGroup2 * This, VARIANT * pvarProp);
	HRESULT(STDMETHODCALLTYPE * get_Members) (IAzApplicationGroup2 * This, VARIANT * pvarProp);
	HRESULT(STDMETHODCALLTYPE * get_NonMembers) (IAzApplicationGroup2 * This, VARIANT * pvarProp);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IAzApplicationGroup2 * This, BSTR * pbstrDescription);
	HRESULT(STDMETHODCALLTYPE * put_Description) (IAzApplicationGroup2 * This, BSTR bstrDescription);
	HRESULT(STDMETHODCALLTYPE * AddAppMember) (IAzApplicationGroup2 * This, BSTR bstrProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeleteAppMember) (IAzApplicationGroup2 * This, BSTR bstrProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * AddAppNonMember) (IAzApplicationGroup2 * This, BSTR bstrProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeleteAppNonMember) (IAzApplicationGroup2 * This, BSTR bstrProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * AddMember) (IAzApplicationGroup2 * This, BSTR bstrProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeleteMember) (IAzApplicationGroup2 * This, BSTR bstrProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * AddNonMember) (IAzApplicationGroup2 * This, BSTR bstrProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeleteNonMember) (IAzApplicationGroup2 * This, BSTR bstrProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_Writable) (IAzApplicationGroup2 * This, BOOL * pfProp);
	HRESULT(STDMETHODCALLTYPE * GetProperty) (IAzApplicationGroup2 * This, LONG lPropId, VARIANT varReserved, VARIANT * pvarProp);
	HRESULT(STDMETHODCALLTYPE * SetProperty) (IAzApplicationGroup2 * This, LONG lPropId, VARIANT varProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * AddPropertyItem) (IAzApplicationGroup2 * This, LONG lPropId, VARIANT varProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeletePropertyItem) (IAzApplicationGroup2 * This, LONG lPropId, VARIANT varProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * Submit) (IAzApplicationGroup2 * This, LONG lFlags, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * AddMemberName) (IAzApplicationGroup2 * This, BSTR bstrProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeleteMemberName) (IAzApplicationGroup2 * This, BSTR bstrProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * AddNonMemberName) (IAzApplicationGroup2 * This, BSTR bstrProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeleteNonMemberName) (IAzApplicationGroup2 * This, BSTR bstrProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_MembersName) (IAzApplicationGroup2 * This, VARIANT * pvarProp);
	HRESULT(STDMETHODCALLTYPE * get_NonMembersName) (IAzApplicationGroup2 * This, VARIANT * pvarProp);
	HRESULT(STDMETHODCALLTYPE * get_BizRule) (IAzApplicationGroup2 * This, BSTR * pbstrProp);
	HRESULT(STDMETHODCALLTYPE * put_BizRule) (IAzApplicationGroup2 * This, BSTR bstrProp);
	HRESULT(STDMETHODCALLTYPE * get_BizRuleLanguage) (IAzApplicationGroup2 * This, BSTR * pbstrProp);
	HRESULT(STDMETHODCALLTYPE * put_BizRuleLanguage) (IAzApplicationGroup2 * This, BSTR bstrProp);
	HRESULT(STDMETHODCALLTYPE * get_BizRuleImportedPath) (IAzApplicationGroup2 * This, BSTR * pbstrProp);
	HRESULT(STDMETHODCALLTYPE * put_BizRuleImportedPath) (IAzApplicationGroup2 * This, BSTR bstrProp);
	HRESULT(STDMETHODCALLTYPE * RoleAssignments) (IAzApplicationGroup2 * This, BSTR bstrScopeName, VARIANT_BOOL bRecursive, IAzRoleAssignments ** ppRoleAssignments);
	END_INTERFACE
}  IAzApplicationGroup2Vtbl;
interface IAzApplicationGroup2
{
	CONST_VTBL struct IAzApplicationGroup2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAzApplicationGroup2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAzApplicationGroup2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAzApplicationGroup2_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAzApplicationGroup2_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAzApplicationGroup2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAzApplicationGroup2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAzApplicationGroup2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAzApplicationGroup2_get_Name(This,pbstrName)    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
#define IAzApplicationGroup2_put_Name(This,bstrName)    ( (This)->lpVtbl -> put_Name(This,bstrName) )
#define IAzApplicationGroup2_get_Type(This,plProp)    ( (This)->lpVtbl -> get_Type(This,plProp) )
#define IAzApplicationGroup2_put_Type(This,lProp)    ( (This)->lpVtbl -> put_Type(This,lProp) )
#define IAzApplicationGroup2_get_LdapQuery(This,pbstrProp)    ( (This)->lpVtbl -> get_LdapQuery(This,pbstrProp) )
#define IAzApplicationGroup2_put_LdapQuery(This,bstrProp)    ( (This)->lpVtbl -> put_LdapQuery(This,bstrProp) )
#define IAzApplicationGroup2_get_AppMembers(This,pvarProp)    ( (This)->lpVtbl -> get_AppMembers(This,pvarProp) )
#define IAzApplicationGroup2_get_AppNonMembers(This,pvarProp)    ( (This)->lpVtbl -> get_AppNonMembers(This,pvarProp) )
#define IAzApplicationGroup2_get_Members(This,pvarProp)    ( (This)->lpVtbl -> get_Members(This,pvarProp) )
#define IAzApplicationGroup2_get_NonMembers(This,pvarProp)    ( (This)->lpVtbl -> get_NonMembers(This,pvarProp) )
#define IAzApplicationGroup2_get_Description(This,pbstrDescription)    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) )
#define IAzApplicationGroup2_put_Description(This,bstrDescription)    ( (This)->lpVtbl -> put_Description(This,bstrDescription) )
#define IAzApplicationGroup2_AddAppMember(This,bstrProp,varReserved)    ( (This)->lpVtbl -> AddAppMember(This,bstrProp,varReserved) )
#define IAzApplicationGroup2_DeleteAppMember(This,bstrProp,varReserved)    ( (This)->lpVtbl -> DeleteAppMember(This,bstrProp,varReserved) )
#define IAzApplicationGroup2_AddAppNonMember(This,bstrProp,varReserved)    ( (This)->lpVtbl -> AddAppNonMember(This,bstrProp,varReserved) )
#define IAzApplicationGroup2_DeleteAppNonMember(This,bstrProp,varReserved)    ( (This)->lpVtbl -> DeleteAppNonMember(This,bstrProp,varReserved) )
#define IAzApplicationGroup2_AddMember(This,bstrProp,varReserved)    ( (This)->lpVtbl -> AddMember(This,bstrProp,varReserved) )
#define IAzApplicationGroup2_DeleteMember(This,bstrProp,varReserved)    ( (This)->lpVtbl -> DeleteMember(This,bstrProp,varReserved) )
#define IAzApplicationGroup2_AddNonMember(This,bstrProp,varReserved)    ( (This)->lpVtbl -> AddNonMember(This,bstrProp,varReserved) )
#define IAzApplicationGroup2_DeleteNonMember(This,bstrProp,varReserved)    ( (This)->lpVtbl -> DeleteNonMember(This,bstrProp,varReserved) )
#define IAzApplicationGroup2_get_Writable(This,pfProp)    ( (This)->lpVtbl -> get_Writable(This,pfProp) )
#define IAzApplicationGroup2_GetProperty(This,lPropId,varReserved,pvarProp)    ( (This)->lpVtbl -> GetProperty(This,lPropId,varReserved,pvarProp) )
#define IAzApplicationGroup2_SetProperty(This,lPropId,varProp,varReserved)    ( (This)->lpVtbl -> SetProperty(This,lPropId,varProp,varReserved) )
#define IAzApplicationGroup2_AddPropertyItem(This,lPropId,varProp,varReserved)    ( (This)->lpVtbl -> AddPropertyItem(This,lPropId,varProp,varReserved) )
#define IAzApplicationGroup2_DeletePropertyItem(This,lPropId,varProp,varReserved)    ( (This)->lpVtbl -> DeletePropertyItem(This,lPropId,varProp,varReserved) )
#define IAzApplicationGroup2_Submit(This,lFlags,varReserved)    ( (This)->lpVtbl -> Submit(This,lFlags,varReserved) )
#define IAzApplicationGroup2_AddMemberName(This,bstrProp,varReserved)    ( (This)->lpVtbl -> AddMemberName(This,bstrProp,varReserved) )
#define IAzApplicationGroup2_DeleteMemberName(This,bstrProp,varReserved)    ( (This)->lpVtbl -> DeleteMemberName(This,bstrProp,varReserved) )
#define IAzApplicationGroup2_AddNonMemberName(This,bstrProp,varReserved)    ( (This)->lpVtbl -> AddNonMemberName(This,bstrProp,varReserved) )
#define IAzApplicationGroup2_DeleteNonMemberName(This,bstrProp,varReserved)    ( (This)->lpVtbl -> DeleteNonMemberName(This,bstrProp,varReserved) )
#define IAzApplicationGroup2_get_MembersName(This,pvarProp)    ( (This)->lpVtbl -> get_MembersName(This,pvarProp) )
#define IAzApplicationGroup2_get_NonMembersName(This,pvarProp)    ( (This)->lpVtbl -> get_NonMembersName(This,pvarProp) )
#define IAzApplicationGroup2_get_BizRule(This,pbstrProp)    ( (This)->lpVtbl -> get_BizRule(This,pbstrProp) )
#define IAzApplicationGroup2_put_BizRule(This,bstrProp)    ( (This)->lpVtbl -> put_BizRule(This,bstrProp) )
#define IAzApplicationGroup2_get_BizRuleLanguage(This,pbstrProp)    ( (This)->lpVtbl -> get_BizRuleLanguage(This,pbstrProp) )
#define IAzApplicationGroup2_put_BizRuleLanguage(This,bstrProp)    ( (This)->lpVtbl -> put_BizRuleLanguage(This,bstrProp) )
#define IAzApplicationGroup2_get_BizRuleImportedPath(This,pbstrProp)    ( (This)->lpVtbl -> get_BizRuleImportedPath(This,pbstrProp) )
#define IAzApplicationGroup2_put_BizRuleImportedPath(This,bstrProp)    ( (This)->lpVtbl -> put_BizRuleImportedPath(This,bstrProp) )
#define IAzApplicationGroup2_RoleAssignments(This,bstrScopeName,bRecursive,ppRoleAssignments)    ( (This)->lpVtbl -> RoleAssignments(This,bstrScopeName,bRecursive,ppRoleAssignments) )
#endif
#endif
#ifndef __IAzTask2_INTERFACE_DEFINED__
#define __IAzTask2_INTERFACE_DEFINED__
extern const IID IID_IAzTask2;
typedef struct IAzTask2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAzTask2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAzTask2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAzTask2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IAzTask2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IAzTask2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IAzTask2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IAzTask2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IAzTask2 * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * put_Name) (IAzTask2 * This, BSTR bstrName);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IAzTask2 * This, BSTR * pbstrDescription);
	HRESULT(STDMETHODCALLTYPE * put_Description) (IAzTask2 * This, BSTR bstrDescription);
	HRESULT(STDMETHODCALLTYPE * get_ApplicationData) (IAzTask2 * This, BSTR * pbstrApplicationData);
	HRESULT(STDMETHODCALLTYPE * put_ApplicationData) (IAzTask2 * This, BSTR bstrApplicationData);
	HRESULT(STDMETHODCALLTYPE * get_BizRule) (IAzTask2 * This, BSTR * pbstrProp);
	HRESULT(STDMETHODCALLTYPE * put_BizRule) (IAzTask2 * This, BSTR bstrProp);
	HRESULT(STDMETHODCALLTYPE * get_BizRuleLanguage) (IAzTask2 * This, BSTR * pbstrProp);
	HRESULT(STDMETHODCALLTYPE * put_BizRuleLanguage) (IAzTask2 * This, BSTR bstrProp);
	HRESULT(STDMETHODCALLTYPE * get_BizRuleImportedPath) (IAzTask2 * This, BSTR * pbstrProp);
	HRESULT(STDMETHODCALLTYPE * put_BizRuleImportedPath) (IAzTask2 * This, BSTR bstrProp);
	HRESULT(STDMETHODCALLTYPE * get_IsRoleDefinition) (IAzTask2 * This, BOOL * pfProp);
	HRESULT(STDMETHODCALLTYPE * put_IsRoleDefinition) (IAzTask2 * This, BOOL fProp);
	HRESULT(STDMETHODCALLTYPE * get_Operations) (IAzTask2 * This, VARIANT * pvarProp);
	HRESULT(STDMETHODCALLTYPE * get_Tasks) (IAzTask2 * This, VARIANT * pvarProp);
	HRESULT(STDMETHODCALLTYPE * AddOperation) (IAzTask2 * This, BSTR bstrOp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeleteOperation) (IAzTask2 * This, BSTR bstrOp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * AddTask) (IAzTask2 * This, BSTR bstrTask, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeleteTask) (IAzTask2 * This, BSTR bstrTask, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * get_Writable) (IAzTask2 * This, BOOL * pfProp);
	HRESULT(STDMETHODCALLTYPE * GetProperty) (IAzTask2 * This, LONG lPropId, VARIANT varReserved, VARIANT * pvarProp);
	HRESULT(STDMETHODCALLTYPE * SetProperty) (IAzTask2 * This, LONG lPropId, VARIANT varProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * AddPropertyItem) (IAzTask2 * This, LONG lPropId, VARIANT varProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * DeletePropertyItem) (IAzTask2 * This, LONG lPropId, VARIANT varProp, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * Submit) (IAzTask2 * This, LONG lFlags, VARIANT varReserved);
	HRESULT(STDMETHODCALLTYPE * RoleAssignments) (IAzTask2 * This, BSTR bstrScopeName, VARIANT_BOOL bRecursive, IAzRoleAssignments ** ppRoleAssignments);
	END_INTERFACE
}  IAzTask2Vtbl;
interface IAzTask2
{
	CONST_VTBL struct IAzTask2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAzTask2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAzTask2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAzTask2_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAzTask2_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IAzTask2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IAzTask2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IAzTask2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IAzTask2_get_Name(This,pbstrName)    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
#define IAzTask2_put_Name(This,bstrName)    ( (This)->lpVtbl -> put_Name(This,bstrName) )
#define IAzTask2_get_Description(This,pbstrDescription)    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) )
#define IAzTask2_put_Description(This,bstrDescription)    ( (This)->lpVtbl -> put_Description(This,bstrDescription) )
#define IAzTask2_get_ApplicationData(This,pbstrApplicationData)    ( (This)->lpVtbl -> get_ApplicationData(This,pbstrApplicationData) )
#define IAzTask2_put_ApplicationData(This,bstrApplicationData)    ( (This)->lpVtbl -> put_ApplicationData(This,bstrApplicationData) )
#define IAzTask2_get_BizRule(This,pbstrProp)    ( (This)->lpVtbl -> get_BizRule(This,pbstrProp) )
#define IAzTask2_put_BizRule(This,bstrProp)    ( (This)->lpVtbl -> put_BizRule(This,bstrProp) )
#define IAzTask2_get_BizRuleLanguage(This,pbstrProp)    ( (This)->lpVtbl -> get_BizRuleLanguage(This,pbstrProp) )
#define IAzTask2_put_BizRuleLanguage(This,bstrProp)    ( (This)->lpVtbl -> put_BizRuleLanguage(This,bstrProp) )
#define IAzTask2_get_BizRuleImportedPath(This,pbstrProp)    ( (This)->lpVtbl -> get_BizRuleImportedPath(This,pbstrProp) )
#define IAzTask2_put_BizRuleImportedPath(This,bstrProp)    ( (This)->lpVtbl -> put_BizRuleImportedPath(This,bstrProp) )
#define IAzTask2_get_IsRoleDefinition(This,pfProp)    ( (This)->lpVtbl -> get_IsRoleDefinition(This,pfProp) )
#define IAzTask2_put_IsRoleDefinition(This,fProp)    ( (This)->lpVtbl -> put_IsRoleDefinition(This,fProp) )
#define IAzTask2_get_Operations(This,pvarProp)    ( (This)->lpVtbl -> get_Operations(This,pvarProp) )
#define IAzTask2_get_Tasks(This,pvarProp)    ( (This)->lpVtbl -> get_Tasks(This,pvarProp) )
#define IAzTask2_AddOperation(This,bstrOp,varReserved)    ( (This)->lpVtbl -> AddOperation(This,bstrOp,varReserved) )
#define IAzTask2_DeleteOperation(This,bstrOp,varReserved)    ( (This)->lpVtbl -> DeleteOperation(This,bstrOp,varReserved) )
#define IAzTask2_AddTask(This,bstrTask,varReserved)    ( (This)->lpVtbl -> AddTask(This,bstrTask,varReserved) )
#define IAzTask2_DeleteTask(This,bstrTask,varReserved)    ( (This)->lpVtbl -> DeleteTask(This,bstrTask,varReserved) )
#define IAzTask2_get_Writable(This,pfProp)    ( (This)->lpVtbl -> get_Writable(This,pfProp) )
#define IAzTask2_GetProperty(This,lPropId,varReserved,pvarProp)    ( (This)->lpVtbl -> GetProperty(This,lPropId,varReserved,pvarProp) )
#define IAzTask2_SetProperty(This,lPropId,varProp,varReserved)    ( (This)->lpVtbl -> SetProperty(This,lPropId,varProp,varReserved) )
#define IAzTask2_AddPropertyItem(This,lPropId,varProp,varReserved)    ( (This)->lpVtbl -> AddPropertyItem(This,lPropId,varProp,varReserved) )
#define IAzTask2_DeletePropertyItem(This,lPropId,varProp,varReserved)    ( (This)->lpVtbl -> DeletePropertyItem(This,lPropId,varProp,varReserved) )
#define IAzTask2_Submit(This,lFlags,varReserved)    ( (This)->lpVtbl -> Submit(This,lFlags,varReserved) )
#define IAzTask2_RoleAssignments(This,bstrScopeName,bRecursive,ppRoleAssignments)    ( (This)->lpVtbl -> RoleAssignments(This,bstrScopeName,bRecursive,ppRoleAssignments) )
#endif
#endif
#ifndef __AZROLESLib_LIBRARY_DEFINED__
#define __AZROLESLib_LIBRARY_DEFINED__
typedef enum tagAZ_PROP_CONSTANTS
{
	AZ_PROP_NAME = 1,
	AZ_PROP_DESCRIPTION = 2,
	AZ_PROP_WRITABLE = 3,
	AZ_PROP_APPLICATION_DATA = 4,
	AZ_PROP_CHILD_CREATE = 5,
	AZ_MAX_APPLICATION_NAME_LENGTH = 512,
	AZ_MAX_OPERATION_NAME_LENGTH = 64,
	AZ_MAX_TASK_NAME_LENGTH = 64,
	AZ_MAX_SCOPE_NAME_LENGTH = 65536,
	AZ_MAX_GROUP_NAME_LENGTH = 64,
	AZ_MAX_ROLE_NAME_LENGTH = 64,
	AZ_MAX_NAME_LENGTH = 65536,
	AZ_MAX_DESCRIPTION_LENGTH = 1024,
	AZ_MAX_APPLICATION_DATA_LENGTH = 4096,
	AZ_SUBMIT_FLAG_ABORT = 0x1,
	AZ_SUBMIT_FLAG_FLUSH = 0x2,
	AZ_MAX_POLICY_URL_LENGTH = 65536,
	AZ_AZSTORE_FLAG_CREATE = 0x1,
	AZ_AZSTORE_FLAG_MANAGE_STORE_ONLY = 0x2,
	AZ_AZSTORE_FLAG_BATCH_UPDATE = 0x4,
	AZ_AZSTORE_FLAG_AUDIT_IS_CRITICAL = 0x8,
	AZ_AZSTORE_FORCE_APPLICATION_CLOSE = 0x10,
	AZ_AZSTORE_NT6_FUNCTION_LEVEL = 0x20,
	AZ_AZSTORE_FLAG_MANAGE_ONLY_PASSIVE_SUBMIT = 0x8000,
	AZ_PROP_AZSTORE_DOMAIN_TIMEOUT = 100,
	AZ_AZSTORE_DEFAULT_DOMAIN_TIMEOUT = (15 * 1000),
	AZ_PROP_AZSTORE_SCRIPT_ENGINE_TIMEOUT = 101,
	AZ_AZSTORE_MIN_DOMAIN_TIMEOUT = 500,
	AZ_AZSTORE_MIN_SCRIPT_ENGINE_TIMEOUT = (5 * 1000),
	AZ_AZSTORE_DEFAULT_SCRIPT_ENGINE_TIMEOUT = (45 * 1000),
	AZ_PROP_AZSTORE_MAX_SCRIPT_ENGINES = 102,
	AZ_AZSTORE_DEFAULT_MAX_SCRIPT_ENGINES = 120,
	AZ_PROP_AZSTORE_MAJOR_VERSION = 103,
	AZ_PROP_AZSTORE_MINOR_VERSION = 104,
	AZ_PROP_AZSTORE_TARGET_MACHINE = 105,
	AZ_PROP_AZTORE_IS_ADAM_INSTANCE = 106,
	AZ_PROP_OPERATION_ID = 200,
	AZ_PROP_TASK_OPERATIONS = 300,
	AZ_PROP_TASK_BIZRULE = 301,
	AZ_PROP_TASK_BIZRULE_LANGUAGE = 302,
	AZ_PROP_TASK_TASKS = 303,
	AZ_PROP_TASK_BIZRULE_IMPORTED_PATH = 304,
	AZ_PROP_TASK_IS_ROLE_DEFINITION = 305,
	AZ_MAX_TASK_BIZRULE_LENGTH = 65536,
	AZ_MAX_TASK_BIZRULE_LANGUAGE_LENGTH = 64,
	AZ_MAX_TASK_BIZRULE_IMPORTED_PATH_LENGTH = 512,
	AZ_MAX_BIZRULE_STRING = 65536,
	AZ_PROP_GROUP_TYPE = 400,
	AZ_GROUPTYPE_LDAP_QUERY = 1,
	AZ_GROUPTYPE_BASIC = 2,
	AZ_GROUPTYPE_BIZRULE = 3,
	AZ_PROP_GROUP_APP_MEMBERS = 401,
	AZ_PROP_GROUP_APP_NON_MEMBERS = 402,
	AZ_PROP_GROUP_LDAP_QUERY = 403,
	AZ_MAX_GROUP_LDAP_QUERY_LENGTH = 4096,
	AZ_PROP_GROUP_MEMBERS = 404,
	AZ_PROP_GROUP_NON_MEMBERS = 405,
	AZ_PROP_GROUP_MEMBERS_NAME = 406,
	AZ_PROP_GROUP_NON_MEMBERS_NAME = 407,
	AZ_PROP_GROUP_BIZRULE = 408,
	AZ_PROP_GROUP_BIZRULE_LANGUAGE = 409,
	AZ_PROP_GROUP_BIZRULE_IMPORTED_PATH = 410,
	AZ_MAX_GROUP_BIZRULE_LENGTH = 65536,
	AZ_MAX_GROUP_BIZRULE_LANGUAGE_LENGTH = 64,
	AZ_MAX_GROUP_BIZRULE_IMPORTED_PATH_LENGTH = 512,
	AZ_PROP_ROLE_APP_MEMBERS = 500,
	AZ_PROP_ROLE_MEMBERS = 501,
	AZ_PROP_ROLE_OPERATIONS = 502,
	AZ_PROP_ROLE_TASKS = 504,
	AZ_PROP_ROLE_MEMBERS_NAME = 505,
	AZ_PROP_SCOPE_BIZRULES_WRITABLE = 600,
	AZ_PROP_SCOPE_CAN_BE_DELEGATED = 601,
	AZ_PROP_CLIENT_CONTEXT_USER_DN = 700,
	AZ_PROP_CLIENT_CONTEXT_USER_SAM_COMPAT = 701,
	AZ_PROP_CLIENT_CONTEXT_USER_DISPLAY = 702,
	AZ_PROP_CLIENT_CONTEXT_USER_GUID = 703,
	AZ_PROP_CLIENT_CONTEXT_USER_CANONICAL = 704,
	AZ_PROP_CLIENT_CONTEXT_USER_UPN = 705,
	AZ_PROP_CLIENT_CONTEXT_USER_DNS_SAM_COMPAT = 707,
	AZ_PROP_CLIENT_CONTEXT_ROLE_FOR_ACCESS_CHECK = 708,
	AZ_PROP_CLIENT_CONTEXT_LDAP_QUERY_DN = 709,
	AZ_PROP_APPLICATION_AUTHZ_INTERFACE_CLSID = 800,
	AZ_PROP_APPLICATION_VERSION = 801,
	AZ_MAX_APPLICATION_VERSION_LENGTH = 512,
	AZ_PROP_APPLICATION_NAME = 802,
	AZ_PROP_APPLICATION_BIZRULE_ENABLED = 803,
	AZ_PROP_APPLY_STORE_SACL = 900,
	AZ_PROP_GENERATE_AUDITS = 901,
	AZ_PROP_POLICY_ADMINS = 902,
	AZ_PROP_POLICY_READERS = 903,
	AZ_PROP_DELEGATED_POLICY_USERS = 904,
	AZ_PROP_POLICY_ADMINS_NAME = 905,
	AZ_PROP_POLICY_READERS_NAME = 906,
	AZ_PROP_DELEGATED_POLICY_USERS_NAME = 907,
	AZ_CLIENT_CONTEXT_SKIP_GROUP = 1,
	AZ_CLIENT_CONTEXT_SKIP_LDAP_QUERY = 1,
	AZ_CLIENT_CONTEXT_GET_GROUP_RECURSIVE = 2,
	AZ_CLIENT_CONTEXT_GET_GROUPS_STORE_LEVEL_ONLY = 2
} AZ_PROP_CONSTANTS;
extern const IID LIBID_AZROLESLib;
extern const CLSID CLSID_AzAuthorizationStore;
extern const CLSID CLSID_AzBizRuleContext;
extern const CLSID CLSID_AzPrincipalLocator;
#endif
#ifndef OLESCRIPT_E_SYNTAX
#define OLESCRIPT_E_SYNTAX _HRESULT_TYPEDEF_(0x80020101L)
#endif
extern RPC_IF_HANDLE __MIDL_itf_azroles_0000_0034_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_azroles_0000_0034_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER HWND_UserSize(unsigned long *, unsigned long, HWND *);
unsigned char *__RPC_USER HWND_UserMarshal(unsigned long *, unsigned char *, HWND *);
unsigned char *__RPC_USER HWND_UserUnmarshal(unsigned long *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree(unsigned long *, HWND *);
unsigned long __RPC_USER VARIANT_UserSize(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree(unsigned long *, VARIANT *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
unsigned long __RPC_USER HWND_UserSize64(unsigned long *, unsigned long, HWND *);
unsigned char *__RPC_USER HWND_UserMarshal64(unsigned long *, unsigned char *, HWND *);
unsigned char *__RPC_USER HWND_UserUnmarshal64(unsigned long *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree64(unsigned long *, HWND *);
unsigned long __RPC_USER VARIANT_UserSize64(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal64(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree64(unsigned long *, VARIANT *);
#endif
