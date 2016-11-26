/*+@@file@@----------------------------------------------------------------*//*!
 \file		gpmgmt.h
 \par Description
            Extension and update of headers for PellesC compiler suite.
 \par Project:
            PellesC Headers extension
 \date		Created  on Mon Jul 11 18:34:13 2016
 \date		Modified on Mon Jul 11 18:34:13 2016
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
#ifndef __gpmgmt_h__
#define __gpmgmt_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IGPM_FWD_DEFINED__
#define __IGPM_FWD_DEFINED__
typedef interface IGPM IGPM;
#endif
#ifndef __IGPMDomain_FWD_DEFINED__
#define __IGPMDomain_FWD_DEFINED__
typedef interface IGPMDomain IGPMDomain;
#endif
#ifndef __IGPMBackupDir_FWD_DEFINED__
#define __IGPMBackupDir_FWD_DEFINED__
typedef interface IGPMBackupDir IGPMBackupDir;
#endif
#ifndef __IGPMSitesContainer_FWD_DEFINED__
#define __IGPMSitesContainer_FWD_DEFINED__
typedef interface IGPMSitesContainer IGPMSitesContainer;
#endif
#ifndef __IGPMSearchCriteria_FWD_DEFINED__
#define __IGPMSearchCriteria_FWD_DEFINED__
typedef interface IGPMSearchCriteria IGPMSearchCriteria;
#endif
#ifndef __IGPMTrustee_FWD_DEFINED__
#define __IGPMTrustee_FWD_DEFINED__
typedef interface IGPMTrustee IGPMTrustee;
#endif
#ifndef __IGPMPermission_FWD_DEFINED__
#define __IGPMPermission_FWD_DEFINED__
typedef interface IGPMPermission IGPMPermission;
#endif
#ifndef __IGPMSecurityInfo_FWD_DEFINED__
#define __IGPMSecurityInfo_FWD_DEFINED__
typedef interface IGPMSecurityInfo IGPMSecurityInfo;
#endif
#ifndef __IGPMBackup_FWD_DEFINED__
#define __IGPMBackup_FWD_DEFINED__
typedef interface IGPMBackup IGPMBackup;
#endif
#ifndef __IGPMBackupCollection_FWD_DEFINED__
#define __IGPMBackupCollection_FWD_DEFINED__
typedef interface IGPMBackupCollection IGPMBackupCollection;
#endif
#ifndef __IGPMSOM_FWD_DEFINED__
#define __IGPMSOM_FWD_DEFINED__
typedef interface IGPMSOM IGPMSOM;
#endif
#ifndef __IGPMSOMCollection_FWD_DEFINED__
#define __IGPMSOMCollection_FWD_DEFINED__
typedef interface IGPMSOMCollection IGPMSOMCollection;
#endif
#ifndef __IGPMWMIFilter_FWD_DEFINED__
#define __IGPMWMIFilter_FWD_DEFINED__
typedef interface IGPMWMIFilter IGPMWMIFilter;
#endif
#ifndef __IGPMWMIFilterCollection_FWD_DEFINED__
#define __IGPMWMIFilterCollection_FWD_DEFINED__
typedef interface IGPMWMIFilterCollection IGPMWMIFilterCollection;
#endif
#ifndef __IGPMRSOP_FWD_DEFINED__
#define __IGPMRSOP_FWD_DEFINED__
typedef interface IGPMRSOP IGPMRSOP;
#endif
#ifndef __IGPMGPO_FWD_DEFINED__
#define __IGPMGPO_FWD_DEFINED__
typedef interface IGPMGPO IGPMGPO;
#endif
#ifndef __IGPMGPOCollection_FWD_DEFINED__
#define __IGPMGPOCollection_FWD_DEFINED__
typedef interface IGPMGPOCollection IGPMGPOCollection;
#endif
#ifndef __IGPMGPOLink_FWD_DEFINED__
#define __IGPMGPOLink_FWD_DEFINED__
typedef interface IGPMGPOLink IGPMGPOLink;
#endif
#ifndef __IGPMGPOLinksCollection_FWD_DEFINED__
#define __IGPMGPOLinksCollection_FWD_DEFINED__
typedef interface IGPMGPOLinksCollection IGPMGPOLinksCollection;
#endif
#ifndef __IGPMCSECollection_FWD_DEFINED__
#define __IGPMCSECollection_FWD_DEFINED__
typedef interface IGPMCSECollection IGPMCSECollection;
#endif
#ifndef __IGPMClientSideExtension_FWD_DEFINED__
#define __IGPMClientSideExtension_FWD_DEFINED__
typedef interface IGPMClientSideExtension IGPMClientSideExtension;
#endif
#ifndef __IGPMAsyncCancel_FWD_DEFINED__
#define __IGPMAsyncCancel_FWD_DEFINED__
typedef interface IGPMAsyncCancel IGPMAsyncCancel;
#endif
#ifndef __IGPMAsyncProgress_FWD_DEFINED__
#define __IGPMAsyncProgress_FWD_DEFINED__
typedef interface IGPMAsyncProgress IGPMAsyncProgress;
#endif
#ifndef __IGPMStatusMsgCollection_FWD_DEFINED__
#define __IGPMStatusMsgCollection_FWD_DEFINED__
typedef interface IGPMStatusMsgCollection IGPMStatusMsgCollection;
#endif
#ifndef __IGPMStatusMessage_FWD_DEFINED__
#define __IGPMStatusMessage_FWD_DEFINED__
typedef interface IGPMStatusMessage IGPMStatusMessage;
#endif
#ifndef __IGPMConstants_FWD_DEFINED__
#define __IGPMConstants_FWD_DEFINED__
typedef interface IGPMConstants IGPMConstants;
#endif
#ifndef __IGPMResult_FWD_DEFINED__
#define __IGPMResult_FWD_DEFINED__
typedef interface IGPMResult IGPMResult;
#endif
#ifndef __IGPMMapEntryCollection_FWD_DEFINED__
#define __IGPMMapEntryCollection_FWD_DEFINED__
typedef interface IGPMMapEntryCollection IGPMMapEntryCollection;
#endif
#ifndef __IGPMMapEntry_FWD_DEFINED__
#define __IGPMMapEntry_FWD_DEFINED__
typedef interface IGPMMapEntry IGPMMapEntry;
#endif
#ifndef __IGPMMigrationTable_FWD_DEFINED__
#define __IGPMMigrationTable_FWD_DEFINED__
typedef interface IGPMMigrationTable IGPMMigrationTable;
#endif
#ifndef __IGPMBackupDirEx_FWD_DEFINED__
#define __IGPMBackupDirEx_FWD_DEFINED__
typedef interface IGPMBackupDirEx IGPMBackupDirEx;
#endif
#ifndef __IGPMStarterGPOBackupCollection_FWD_DEFINED__
#define __IGPMStarterGPOBackupCollection_FWD_DEFINED__
typedef interface IGPMStarterGPOBackupCollection IGPMStarterGPOBackupCollection;
#endif
#ifndef __IGPMStarterGPOBackup_FWD_DEFINED__
#define __IGPMStarterGPOBackup_FWD_DEFINED__
typedef interface IGPMStarterGPOBackup IGPMStarterGPOBackup;
#endif
#ifndef __IGPM2_FWD_DEFINED__
#define __IGPM2_FWD_DEFINED__
typedef interface IGPM2 IGPM2;
#endif
#ifndef __IGPMStarterGPO_FWD_DEFINED__
#define __IGPMStarterGPO_FWD_DEFINED__
typedef interface IGPMStarterGPO IGPMStarterGPO;
#endif
#ifndef __IGPMStarterGPOCollection_FWD_DEFINED__
#define __IGPMStarterGPOCollection_FWD_DEFINED__
typedef interface IGPMStarterGPOCollection IGPMStarterGPOCollection;
#endif
#ifndef __IGPMDomain2_FWD_DEFINED__
#define __IGPMDomain2_FWD_DEFINED__
typedef interface IGPMDomain2 IGPMDomain2;
#endif
#ifndef __IGPMConstants2_FWD_DEFINED__
#define __IGPMConstants2_FWD_DEFINED__
typedef interface IGPMConstants2 IGPMConstants2;
#endif
#ifndef __IGPMGPO2_FWD_DEFINED__
#define __IGPMGPO2_FWD_DEFINED__
typedef interface IGPMGPO2 IGPMGPO2;
#endif
#ifndef __GPM_FWD_DEFINED__
#define __GPM_FWD_DEFINED__
typedef struct GPM GPM;
#endif
#ifndef __GPMDomain_FWD_DEFINED__
#define __GPMDomain_FWD_DEFINED__
typedef struct GPMDomain GPMDomain;
#endif
#ifndef __GPMSitesContainer_FWD_DEFINED__
#define __GPMSitesContainer_FWD_DEFINED__
typedef struct GPMSitesContainer GPMSitesContainer;
#endif
#ifndef __GPMBackupDir_FWD_DEFINED__
#define __GPMBackupDir_FWD_DEFINED__
typedef struct GPMBackupDir GPMBackupDir;
#endif
#ifndef __GPMSOM_FWD_DEFINED__
#define __GPMSOM_FWD_DEFINED__
typedef struct GPMSOM GPMSOM;
#endif
#ifndef __GPMSearchCriteria_FWD_DEFINED__
#define __GPMSearchCriteria_FWD_DEFINED__
typedef struct GPMSearchCriteria GPMSearchCriteria;
#endif
#ifndef __GPMPermission_FWD_DEFINED__
#define __GPMPermission_FWD_DEFINED__
typedef struct GPMPermission GPMPermission;
#endif
#ifndef __GPMSecurityInfo_FWD_DEFINED__
#define __GPMSecurityInfo_FWD_DEFINED__
typedef struct GPMSecurityInfo GPMSecurityInfo;
#endif
#ifndef __GPMBackup_FWD_DEFINED__
#define __GPMBackup_FWD_DEFINED__
typedef struct GPMBackup GPMBackup;
#endif
#ifndef __GPMBackupCollection_FWD_DEFINED__
#define __GPMBackupCollection_FWD_DEFINED__
typedef struct GPMBackupCollection GPMBackupCollection;
#endif
#ifndef __GPMSOMCollection_FWD_DEFINED__
#define __GPMSOMCollection_FWD_DEFINED__
typedef struct GPMSOMCollection GPMSOMCollection;
#endif
#ifndef __GPMWMIFilter_FWD_DEFINED__
#define __GPMWMIFilter_FWD_DEFINED__
typedef struct GPMWMIFilter GPMWMIFilter;
#endif
#ifndef __GPMWMIFilterCollection_FWD_DEFINED__
#define __GPMWMIFilterCollection_FWD_DEFINED__
typedef struct GPMWMIFilterCollection GPMWMIFilterCollection;
#endif
#ifndef __GPMRSOP_FWD_DEFINED__
#define __GPMRSOP_FWD_DEFINED__
typedef struct GPMRSOP GPMRSOP;
#endif
#ifndef __GPMGPO_FWD_DEFINED__
#define __GPMGPO_FWD_DEFINED__
typedef struct GPMGPO GPMGPO;
#endif
#ifndef __GPMGPOCollection_FWD_DEFINED__
#define __GPMGPOCollection_FWD_DEFINED__
typedef struct GPMGPOCollection GPMGPOCollection;
#endif
#ifndef __GPMGPOLink_FWD_DEFINED__
#define __GPMGPOLink_FWD_DEFINED__
typedef struct GPMGPOLink GPMGPOLink;
#endif
#ifndef __GPMGPOLinksCollection_FWD_DEFINED__
#define __GPMGPOLinksCollection_FWD_DEFINED__
typedef struct GPMGPOLinksCollection GPMGPOLinksCollection;
#endif
#ifndef __GPMAsyncCancel_FWD_DEFINED__
#define __GPMAsyncCancel_FWD_DEFINED__
typedef struct GPMAsyncCancel GPMAsyncCancel;
#endif
#ifndef __GPMStatusMsgCollection_FWD_DEFINED__
#define __GPMStatusMsgCollection_FWD_DEFINED__
typedef struct GPMStatusMsgCollection GPMStatusMsgCollection;
#endif
#ifndef __GPMStatusMessage_FWD_DEFINED__
#define __GPMStatusMessage_FWD_DEFINED__
typedef struct GPMStatusMessage GPMStatusMessage;
#endif
#ifndef __GPMTrustee_FWD_DEFINED__
#define __GPMTrustee_FWD_DEFINED__
typedef struct GPMTrustee GPMTrustee;
#endif
#ifndef __GPMClientSideExtension_FWD_DEFINED__
#define __GPMClientSideExtension_FWD_DEFINED__
typedef struct GPMClientSideExtension GPMClientSideExtension;
#endif
#ifndef __GPMCSECollection_FWD_DEFINED__
#define __GPMCSECollection_FWD_DEFINED__
typedef struct GPMCSECollection GPMCSECollection;
#endif
#ifndef __GPMConstants_FWD_DEFINED__
#define __GPMConstants_FWD_DEFINED__
typedef struct GPMConstants GPMConstants;
#endif
#ifndef __GPMResult_FWD_DEFINED__
#define __GPMResult_FWD_DEFINED__
typedef struct GPMResult GPMResult;
#endif
#ifndef __GPMMapEntryCollection_FWD_DEFINED__
#define __GPMMapEntryCollection_FWD_DEFINED__
typedef struct GPMMapEntryCollection GPMMapEntryCollection;
#endif
#ifndef __GPMMapEntry_FWD_DEFINED__
#define __GPMMapEntry_FWD_DEFINED__
typedef struct GPMMapEntry GPMMapEntry;
#endif
#ifndef __GPMMigrationTable_FWD_DEFINED__
#define __GPMMigrationTable_FWD_DEFINED__
typedef struct GPMMigrationTable GPMMigrationTable;
#endif
#ifndef __GPMBackupDirEx_FWD_DEFINED__
#define __GPMBackupDirEx_FWD_DEFINED__
typedef struct GPMBackupDirEx GPMBackupDirEx;
#endif
#ifndef __GPMStarterGPOBackupCollection_FWD_DEFINED__
#define __GPMStarterGPOBackupCollection_FWD_DEFINED__
typedef struct GPMStarterGPOBackupCollection GPMStarterGPOBackupCollection;
#endif
#ifndef __GPMStarterGPOBackup_FWD_DEFINED__
#define __GPMStarterGPOBackup_FWD_DEFINED__
typedef struct GPMStarterGPOBackup GPMStarterGPOBackup;
#endif
#ifndef __GPMTemplate_FWD_DEFINED__
#define __GPMTemplate_FWD_DEFINED__
typedef struct GPMTemplate GPMTemplate;
#endif
#ifndef __GPMStarterGPOCollection_FWD_DEFINED__
#define __GPMStarterGPOCollection_FWD_DEFINED__
typedef struct GPMStarterGPOCollection GPMStarterGPOCollection;
#endif
#include <oaidl.h>
#include <ocidl.h>
typedef enum __MIDL___MIDL_itf_gpmgmt_0000_0000_0001
{
	rsopUnknown = 0,
	rsopPlanning = (rsopUnknown + 1),
	rsopLogging = (rsopPlanning + 1)
} GPMRSOPMode;
typedef enum __MIDL___MIDL_itf_gpmgmt_0000_0000_0002
{
	permGPOApply = 0x10000,
	permGPORead = 0x10100,
	permGPOEdit = 0x10101,
	permGPOEditSecurityAndDelete = 0x10102,
	permGPOCustom = 0x10103,
	permWMIFilterEdit = 0x20000,
	permWMIFilterFullControl = 0x20001,
	permWMIFilterCustom = 0x20002,
	permSOMLink = 0x1c0000,
	permSOMLogging = 0x180100,
	permSOMPlanning = 0x180200,
	permSOMWMICreate = 0x100300,
	permSOMWMIFullControl = 0x100301,
	permSOMGPOCreate = 0x100400,
	permStarterGPORead = 0x30500,
	permStarterGPOEdit = 0x30501,
	permStarterGPOFullControl = 0x30502,
	permStarterGPOCustom = 0x30503,
	permSOMStarterGPOCreate = 0x100500
} GPMPermissionType;
typedef enum __MIDL___MIDL_itf_gpmgmt_0000_0000_0003
{
	gpoPermissions = 0,
	gpoEffectivePermissions = (gpoPermissions + 1),
	gpoDisplayName = (gpoEffectivePermissions + 1),
	gpoWMIFilter = (gpoDisplayName + 1),
	gpoID = (gpoWMIFilter + 1),
	gpoComputerExtensions = (gpoID + 1),
	gpoUserExtensions = (gpoComputerExtensions + 1),
	somLinks = (gpoUserExtensions + 1),
	gpoDomain = (somLinks + 1),
	backupMostRecent = (gpoDomain + 1),
	starterGPOPermissions = (backupMostRecent + 1),
	starterGPOEffectivePermissions = (starterGPOPermissions + 1),
	starterGPODisplayName = (starterGPOEffectivePermissions + 1),
	starterGPOID = (starterGPODisplayName + 1),
	starterGPODomain = (starterGPOID + 1)
} GPMSearchProperty;
typedef enum __MIDL___MIDL_itf_gpmgmt_0000_0000_0004
{
	opEquals = 0,
	opContains = (opEquals + 1),
	opNotContains = (opContains + 1),
	opNotEquals = (opNotContains + 1)
} GPMSearchOperation;
typedef enum __MIDL___MIDL_itf_gpmgmt_0000_0000_0005
{
	repXML = 0,
	repHTML = (repXML + 1)
} GPMReportType;
typedef enum __MIDL___MIDL_itf_gpmgmt_0000_0000_0006
{
	typeUser = 0,
	typeComputer = (typeUser + 1),
	typeLocalGroup = (typeComputer + 1),
	typeGlobalGroup = (typeLocalGroup + 1),
	typeUniversalGroup = (typeGlobalGroup + 1),
	typeUNCPath = (typeUniversalGroup + 1),
	typeUnknown = (typeUNCPath + 1)
} GPMEntryType;
typedef enum __MIDL___MIDL_itf_gpmgmt_0000_0000_0007
{
	opDestinationSameAsSource = 0,
	opDestinationNone = (opDestinationSameAsSource + 1),
	opDestinationByRelativeName = (opDestinationNone + 1),
	opDestinationSet = (opDestinationByRelativeName + 1)
} GPMDestinationOption;
typedef enum __MIDL___MIDL_itf_gpmgmt_0000_0000_0008
{
	opReportLegacy = 0,
	opReportComments = 1
} GPMReportingOptions;
#define	GPM_USE_PDC	( 0 )
#define	GPM_USE_ANYDC	( 1 )
#define	GPM_DONOTUSE_W2KDC	( 2 )
#define	GPM_DONOT_VALIDATEDC	( 1 )
#define	GPM_MIGRATIONTABLE_ONLY	( 0x1 )
#define	GPM_PROCESS_SECURITY	( 0x2 )
#define	RSOP_NO_COMPUTER	( 0x10000 )
#define	RSOP_NO_USER	( 0x20000 )
#define	RSOP_PLANNING_ASSUME_SLOW_LINK	( 0x1 )
#define	RSOP_PLANNING_ASSUME_LOOPBACK_MERGE	( 0x2 )
#define	RSOP_PLANNING_ASSUME_LOOPBACK_REPLACE	( 0x4 )
#define	RSOP_PLANNING_ASSUME_USER_WQLFILTER_TRUE	( 0x8 )
#define	RSOP_PLANNING_ASSUME_COMP_WQLFILTER_TRUE	( 0x10 )
extern RPC_IF_HANDLE __MIDL_itf_gpmgmt_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_gpmgmt_0000_0000_v0_0_s_ifspec;
#ifndef __IGPM_INTERFACE_DEFINED__
#define __IGPM_INTERFACE_DEFINED__
extern const IID IID_IGPM;
typedef struct IGPMVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGPM * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGPM * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGPM * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IGPM * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IGPM * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IGPM * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IGPM * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * GetDomain) (IGPM * This, BSTR bstrDomain, BSTR bstrDomainController, long lDCFlags, IGPMDomain ** pIGPMDomain);
	HRESULT(STDMETHODCALLTYPE * GetBackupDir) (IGPM * This, BSTR bstrBackupDir, IGPMBackupDir ** pIGPMBackupDir);
	HRESULT(STDMETHODCALLTYPE * GetSitesContainer) (IGPM * This, BSTR bstrForest, BSTR bstrDomain, BSTR bstrDomainController, long lDCFlags, IGPMSitesContainer ** ppIGPMSitesContainer);
	HRESULT(STDMETHODCALLTYPE * GetRSOP) (IGPM * This, GPMRSOPMode gpmRSoPMode, BSTR bstrNamespace, long lFlags, IGPMRSOP ** ppIGPMRSOP);
	HRESULT(STDMETHODCALLTYPE * CreatePermission) (IGPM * This, BSTR bstrTrustee, GPMPermissionType perm, VARIANT_BOOL bInheritable, IGPMPermission ** ppPerm);
	HRESULT(STDMETHODCALLTYPE * CreateSearchCriteria) (IGPM * This, IGPMSearchCriteria ** ppIGPMSearchCriteria);
	HRESULT(STDMETHODCALLTYPE * CreateTrustee) (IGPM * This, BSTR bstrTrustee, IGPMTrustee ** ppIGPMTrustee);
	HRESULT(STDMETHODCALLTYPE * GetClientSideExtensions) (IGPM * This, IGPMCSECollection ** ppIGPMCSECollection);
	HRESULT(STDMETHODCALLTYPE * GetConstants) (IGPM * This, IGPMConstants ** ppIGPMConstants);
	HRESULT(STDMETHODCALLTYPE * GetMigrationTable) (IGPM * This, BSTR bstrMigrationTablePath, IGPMMigrationTable ** ppMigrationTable);
	HRESULT(STDMETHODCALLTYPE * CreateMigrationTable) (IGPM * This, IGPMMigrationTable ** ppMigrationTable);
	HRESULT(STDMETHODCALLTYPE * InitializeReporting) (IGPM * This, BSTR bstrAdmPath);
	END_INTERFACE
}  IGPMVtbl;
interface IGPM
{
	CONST_VTBL struct IGPMVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGPM_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGPM_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGPM_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGPM_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IGPM_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IGPM_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IGPM_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IGPM_GetDomain(This,bstrDomain,bstrDomainController,lDCFlags,pIGPMDomain)( (This)->lpVtbl -> GetDomain(This,bstrDomain,bstrDomainController,lDCFlags,pIGPMDomain) )
#define IGPM_GetBackupDir(This,bstrBackupDir,pIGPMBackupDir)( (This)->lpVtbl -> GetBackupDir(This,bstrBackupDir,pIGPMBackupDir) )
#define IGPM_GetSitesContainer(This,bstrForest,bstrDomain,bstrDomainController,lDCFlags,ppIGPMSitesContainer)( (This)->lpVtbl -> GetSitesContainer(This,bstrForest,bstrDomain,bstrDomainController,lDCFlags,ppIGPMSitesContainer) )
#define IGPM_GetRSOP(This,gpmRSoPMode,bstrNamespace,lFlags,ppIGPMRSOP)( (This)->lpVtbl -> GetRSOP(This,gpmRSoPMode,bstrNamespace,lFlags,ppIGPMRSOP) )
#define IGPM_CreatePermission(This,bstrTrustee,perm,bInheritable,ppPerm)( (This)->lpVtbl -> CreatePermission(This,bstrTrustee,perm,bInheritable,ppPerm) )
#define IGPM_CreateSearchCriteria(This,ppIGPMSearchCriteria)( (This)->lpVtbl -> CreateSearchCriteria(This,ppIGPMSearchCriteria) )
#define IGPM_CreateTrustee(This,bstrTrustee,ppIGPMTrustee)( (This)->lpVtbl -> CreateTrustee(This,bstrTrustee,ppIGPMTrustee) )
#define IGPM_GetClientSideExtensions(This,ppIGPMCSECollection)( (This)->lpVtbl -> GetClientSideExtensions(This,ppIGPMCSECollection) )
#define IGPM_GetConstants(This,ppIGPMConstants)( (This)->lpVtbl -> GetConstants(This,ppIGPMConstants) )
#define IGPM_GetMigrationTable(This,bstrMigrationTablePath,ppMigrationTable)( (This)->lpVtbl -> GetMigrationTable(This,bstrMigrationTablePath,ppMigrationTable) )
#define IGPM_CreateMigrationTable(This,ppMigrationTable)( (This)->lpVtbl -> CreateMigrationTable(This,ppMigrationTable) )
#define IGPM_InitializeReporting(This,bstrAdmPath)( (This)->lpVtbl -> InitializeReporting(This,bstrAdmPath) )
#endif
#endif
#ifndef __IGPMDomain_INTERFACE_DEFINED__
#define __IGPMDomain_INTERFACE_DEFINED__
extern const IID IID_IGPMDomain;
typedef struct IGPMDomainVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGPMDomain * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGPMDomain * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGPMDomain * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IGPMDomain * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IGPMDomain * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IGPMDomain * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IGPMDomain * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_DomainController) (IGPMDomain * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_Domain) (IGPMDomain * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * CreateGPO) (IGPMDomain * This, IGPMGPO ** ppNewGPO);
	HRESULT(STDMETHODCALLTYPE * GetGPO) (IGPMDomain * This, BSTR bstrGuid, IGPMGPO ** ppGPO);
	HRESULT(STDMETHODCALLTYPE * SearchGPOs) (IGPMDomain * This, IGPMSearchCriteria * pIGPMSearchCriteria, IGPMGPOCollection ** ppIGPMGPOCollection);
	HRESULT(STDMETHODCALLTYPE * RestoreGPO) (IGPMDomain * This, IGPMBackup * pIGPMBackup, long lDCFlags, VARIANT * pvarGPMProgress, VARIANT * pvarGPMCancel, IGPMResult ** ppIGPMResult);
	HRESULT(STDMETHODCALLTYPE * GetSOM) (IGPMDomain * This, BSTR bstrPath, IGPMSOM ** ppSOM);
	HRESULT(STDMETHODCALLTYPE * SearchSOMs) (IGPMDomain * This, IGPMSearchCriteria * pIGPMSearchCriteria, IGPMSOMCollection ** ppIGPMSOMCollection);
	HRESULT(STDMETHODCALLTYPE * GetWMIFilter) (IGPMDomain * This, BSTR bstrPath, IGPMWMIFilter ** ppWMIFilter);
	HRESULT(STDMETHODCALLTYPE * SearchWMIFilters) (IGPMDomain * This, IGPMSearchCriteria * pIGPMSearchCriteria, IGPMWMIFilterCollection ** ppIGPMWMIFilterCollection);
	END_INTERFACE
}  IGPMDomainVtbl;
interface IGPMDomain
{
	CONST_VTBL struct IGPMDomainVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGPMDomain_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGPMDomain_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGPMDomain_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGPMDomain_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IGPMDomain_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IGPMDomain_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IGPMDomain_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IGPMDomain_get_DomainController(This,pVal)( (This)->lpVtbl -> get_DomainController(This,pVal) )
#define IGPMDomain_get_Domain(This,pVal)( (This)->lpVtbl -> get_Domain(This,pVal) )
#define IGPMDomain_CreateGPO(This,ppNewGPO)( (This)->lpVtbl -> CreateGPO(This,ppNewGPO) )
#define IGPMDomain_GetGPO(This,bstrGuid,ppGPO)( (This)->lpVtbl -> GetGPO(This,bstrGuid,ppGPO) )
#define IGPMDomain_SearchGPOs(This,pIGPMSearchCriteria,ppIGPMGPOCollection)( (This)->lpVtbl -> SearchGPOs(This,pIGPMSearchCriteria,ppIGPMGPOCollection) )
#define IGPMDomain_RestoreGPO(This,pIGPMBackup,lDCFlags,pvarGPMProgress,pvarGPMCancel,ppIGPMResult)( (This)->lpVtbl -> RestoreGPO(This,pIGPMBackup,lDCFlags,pvarGPMProgress,pvarGPMCancel,ppIGPMResult) )
#define IGPMDomain_GetSOM(This,bstrPath,ppSOM)( (This)->lpVtbl -> GetSOM(This,bstrPath,ppSOM) )
#define IGPMDomain_SearchSOMs(This,pIGPMSearchCriteria,ppIGPMSOMCollection)( (This)->lpVtbl -> SearchSOMs(This,pIGPMSearchCriteria,ppIGPMSOMCollection) )
#define IGPMDomain_GetWMIFilter(This,bstrPath,ppWMIFilter)( (This)->lpVtbl -> GetWMIFilter(This,bstrPath,ppWMIFilter) )
#define IGPMDomain_SearchWMIFilters(This,pIGPMSearchCriteria,ppIGPMWMIFilterCollection)( (This)->lpVtbl -> SearchWMIFilters(This,pIGPMSearchCriteria,ppIGPMWMIFilterCollection) )
#endif
#endif
#ifndef __IGPMBackupDir_INTERFACE_DEFINED__
#define __IGPMBackupDir_INTERFACE_DEFINED__
extern const IID IID_IGPMBackupDir;
typedef struct IGPMBackupDirVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGPMBackupDir * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGPMBackupDir * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGPMBackupDir * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IGPMBackupDir * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IGPMBackupDir * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IGPMBackupDir * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IGPMBackupDir * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_BackupDirectory) (IGPMBackupDir * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * GetBackup) (IGPMBackupDir * This, BSTR bstrID, IGPMBackup ** ppBackup);
	HRESULT(STDMETHODCALLTYPE * SearchBackups) (IGPMBackupDir * This, IGPMSearchCriteria * pIGPMSearchCriteria, IGPMBackupCollection ** ppIGPMBackupCollection);
	END_INTERFACE
}  IGPMBackupDirVtbl;
interface IGPMBackupDir
{
	CONST_VTBL struct IGPMBackupDirVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGPMBackupDir_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGPMBackupDir_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGPMBackupDir_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGPMBackupDir_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IGPMBackupDir_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IGPMBackupDir_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IGPMBackupDir_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IGPMBackupDir_get_BackupDirectory(This,pVal)( (This)->lpVtbl -> get_BackupDirectory(This,pVal) )
#define IGPMBackupDir_GetBackup(This,bstrID,ppBackup)( (This)->lpVtbl -> GetBackup(This,bstrID,ppBackup) )
#define IGPMBackupDir_SearchBackups(This,pIGPMSearchCriteria,ppIGPMBackupCollection)( (This)->lpVtbl -> SearchBackups(This,pIGPMSearchCriteria,ppIGPMBackupCollection) )
#endif
#endif
#ifndef __IGPMSitesContainer_INTERFACE_DEFINED__
#define __IGPMSitesContainer_INTERFACE_DEFINED__
extern const IID IID_IGPMSitesContainer;
typedef struct IGPMSitesContainerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGPMSitesContainer * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGPMSitesContainer * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGPMSitesContainer * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IGPMSitesContainer * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IGPMSitesContainer * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IGPMSitesContainer * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IGPMSitesContainer * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_DomainController) (IGPMSitesContainer * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_Domain) (IGPMSitesContainer * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_Forest) (IGPMSitesContainer * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * GetSite) (IGPMSitesContainer * This, BSTR bstrSiteName, IGPMSOM ** ppSOM);
	HRESULT(STDMETHODCALLTYPE * SearchSites) (IGPMSitesContainer * This, IGPMSearchCriteria * pIGPMSearchCriteria, IGPMSOMCollection ** ppIGPMSOMCollection);
	END_INTERFACE
}  IGPMSitesContainerVtbl;
interface IGPMSitesContainer
{
	CONST_VTBL struct IGPMSitesContainerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGPMSitesContainer_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGPMSitesContainer_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGPMSitesContainer_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGPMSitesContainer_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IGPMSitesContainer_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IGPMSitesContainer_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IGPMSitesContainer_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IGPMSitesContainer_get_DomainController(This,pVal)( (This)->lpVtbl -> get_DomainController(This,pVal) )
#define IGPMSitesContainer_get_Domain(This,pVal)( (This)->lpVtbl -> get_Domain(This,pVal) )
#define IGPMSitesContainer_get_Forest(This,pVal)( (This)->lpVtbl -> get_Forest(This,pVal) )
#define IGPMSitesContainer_GetSite(This,bstrSiteName,ppSOM)( (This)->lpVtbl -> GetSite(This,bstrSiteName,ppSOM) )
#define IGPMSitesContainer_SearchSites(This,pIGPMSearchCriteria,ppIGPMSOMCollection)( (This)->lpVtbl -> SearchSites(This,pIGPMSearchCriteria,ppIGPMSOMCollection) )
#endif
#endif
#ifndef __IGPMSearchCriteria_INTERFACE_DEFINED__
#define __IGPMSearchCriteria_INTERFACE_DEFINED__
extern const IID IID_IGPMSearchCriteria;
typedef struct IGPMSearchCriteriaVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGPMSearchCriteria * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGPMSearchCriteria * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGPMSearchCriteria * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IGPMSearchCriteria * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IGPMSearchCriteria * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IGPMSearchCriteria * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IGPMSearchCriteria * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Add) (IGPMSearchCriteria * This, GPMSearchProperty searchProperty, GPMSearchOperation searchOperation, VARIANT varValue);
	END_INTERFACE
}  IGPMSearchCriteriaVtbl;
interface IGPMSearchCriteria
{
	CONST_VTBL struct IGPMSearchCriteriaVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGPMSearchCriteria_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGPMSearchCriteria_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGPMSearchCriteria_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGPMSearchCriteria_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IGPMSearchCriteria_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IGPMSearchCriteria_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IGPMSearchCriteria_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IGPMSearchCriteria_Add(This,searchProperty,searchOperation,varValue)( (This)->lpVtbl -> Add(This,searchProperty,searchOperation,varValue) )
#endif
#endif
#ifndef __IGPMTrustee_INTERFACE_DEFINED__
#define __IGPMTrustee_INTERFACE_DEFINED__
extern const IID IID_IGPMTrustee;
typedef struct IGPMTrusteeVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGPMTrustee * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGPMTrustee * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGPMTrustee * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IGPMTrustee * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IGPMTrustee * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IGPMTrustee * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IGPMTrustee * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_TrusteeSid) (IGPMTrustee * This, BSTR * bstrVal);
	HRESULT(STDMETHODCALLTYPE * get_TrusteeName) (IGPMTrustee * This, BSTR * bstrVal);
	HRESULT(STDMETHODCALLTYPE * get_TrusteeDomain) (IGPMTrustee * This, BSTR * bstrVal);
	HRESULT(STDMETHODCALLTYPE * get_TrusteeDSPath) (IGPMTrustee * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_TrusteeType) (IGPMTrustee * This, long *lVal);
	END_INTERFACE
}  IGPMTrusteeVtbl;
interface IGPMTrustee
{
	CONST_VTBL struct IGPMTrusteeVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGPMTrustee_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGPMTrustee_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGPMTrustee_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGPMTrustee_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IGPMTrustee_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IGPMTrustee_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IGPMTrustee_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IGPMTrustee_get_TrusteeSid(This,bstrVal)( (This)->lpVtbl -> get_TrusteeSid(This,bstrVal) )
#define IGPMTrustee_get_TrusteeName(This,bstrVal)( (This)->lpVtbl -> get_TrusteeName(This,bstrVal) )
#define IGPMTrustee_get_TrusteeDomain(This,bstrVal)( (This)->lpVtbl -> get_TrusteeDomain(This,bstrVal) )
#define IGPMTrustee_get_TrusteeDSPath(This,pVal)( (This)->lpVtbl -> get_TrusteeDSPath(This,pVal) )
#define IGPMTrustee_get_TrusteeType(This,lVal)( (This)->lpVtbl -> get_TrusteeType(This,lVal) )
#endif
#endif
#ifndef __IGPMPermission_INTERFACE_DEFINED__
#define __IGPMPermission_INTERFACE_DEFINED__
extern const IID IID_IGPMPermission;
typedef struct IGPMPermissionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGPMPermission * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGPMPermission * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGPMPermission * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IGPMPermission * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IGPMPermission * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IGPMPermission * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IGPMPermission * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Inherited) (IGPMPermission * This, VARIANT_BOOL * pVal);
	HRESULT(STDMETHODCALLTYPE * get_Inheritable) (IGPMPermission * This, VARIANT_BOOL * pVal);
	HRESULT(STDMETHODCALLTYPE * get_Denied) (IGPMPermission * This, VARIANT_BOOL * pVal);
	HRESULT(STDMETHODCALLTYPE * get_Permission) (IGPMPermission * This, GPMPermissionType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_Trustee) (IGPMPermission * This, IGPMTrustee ** ppIGPMTrustee);
	END_INTERFACE
}  IGPMPermissionVtbl;
interface IGPMPermission
{
	CONST_VTBL struct IGPMPermissionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGPMPermission_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGPMPermission_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGPMPermission_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGPMPermission_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IGPMPermission_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IGPMPermission_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IGPMPermission_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IGPMPermission_get_Inherited(This,pVal)( (This)->lpVtbl -> get_Inherited(This,pVal) )
#define IGPMPermission_get_Inheritable(This,pVal)( (This)->lpVtbl -> get_Inheritable(This,pVal) )
#define IGPMPermission_get_Denied(This,pVal)( (This)->lpVtbl -> get_Denied(This,pVal) )
#define IGPMPermission_get_Permission(This,pVal)( (This)->lpVtbl -> get_Permission(This,pVal) )
#define IGPMPermission_get_Trustee(This,ppIGPMTrustee)( (This)->lpVtbl -> get_Trustee(This,ppIGPMTrustee) )
#endif
#endif
#ifndef __IGPMSecurityInfo_INTERFACE_DEFINED__
#define __IGPMSecurityInfo_INTERFACE_DEFINED__
extern const IID IID_IGPMSecurityInfo;
typedef struct IGPMSecurityInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGPMSecurityInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGPMSecurityInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGPMSecurityInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IGPMSecurityInfo * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IGPMSecurityInfo * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IGPMSecurityInfo * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IGPMSecurityInfo * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IGPMSecurityInfo * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IGPMSecurityInfo * This, long lIndex, VARIANT * pVal);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IGPMSecurityInfo * This, IEnumVARIANT ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * Add) (IGPMSecurityInfo * This, IGPMPermission * pPerm);
	HRESULT(STDMETHODCALLTYPE * Remove) (IGPMSecurityInfo * This, IGPMPermission * pPerm);
	HRESULT(STDMETHODCALLTYPE * RemoveTrustee) (IGPMSecurityInfo * This, BSTR bstrTrustee);
	END_INTERFACE
}  IGPMSecurityInfoVtbl;
interface IGPMSecurityInfo
{
	CONST_VTBL struct IGPMSecurityInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGPMSecurityInfo_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGPMSecurityInfo_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGPMSecurityInfo_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGPMSecurityInfo_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IGPMSecurityInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IGPMSecurityInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IGPMSecurityInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IGPMSecurityInfo_get_Count(This,pVal)( (This)->lpVtbl -> get_Count(This,pVal) )
#define IGPMSecurityInfo_get_Item(This,lIndex,pVal)( (This)->lpVtbl -> get_Item(This,lIndex,pVal) )
#define IGPMSecurityInfo_get__NewEnum(This,ppEnum)( (This)->lpVtbl -> get__NewEnum(This,ppEnum) )
#define IGPMSecurityInfo_Add(This,pPerm)( (This)->lpVtbl -> Add(This,pPerm) )
#define IGPMSecurityInfo_Remove(This,pPerm)( (This)->lpVtbl -> Remove(This,pPerm) )
#define IGPMSecurityInfo_RemoveTrustee(This,bstrTrustee)( (This)->lpVtbl -> RemoveTrustee(This,bstrTrustee) )
#endif
#endif
#ifndef __IGPMBackup_INTERFACE_DEFINED__
#define __IGPMBackup_INTERFACE_DEFINED__
extern const IID IID_IGPMBackup;
typedef struct IGPMBackupVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGPMBackup * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGPMBackup * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGPMBackup * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IGPMBackup * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IGPMBackup * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IGPMBackup * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IGPMBackup * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_ID) (IGPMBackup * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_GPOID) (IGPMBackup * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_GPODomain) (IGPMBackup * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_GPODisplayName) (IGPMBackup * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_Timestamp) (IGPMBackup * This, DATE * pVal);
	HRESULT(STDMETHODCALLTYPE * get_Comment) (IGPMBackup * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_BackupDir) (IGPMBackup * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * Delete) (IGPMBackup * This);
	HRESULT(STDMETHODCALLTYPE * GenerateReport) (IGPMBackup * This, GPMReportType gpmReportType, VARIANT * pvarGPMProgress, VARIANT * pvarGPMCancel, IGPMResult ** ppIGPMResult);
	HRESULT(STDMETHODCALLTYPE * GenerateReportToFile) (IGPMBackup * This, GPMReportType gpmReportType, BSTR bstrTargetFilePath, IGPMResult ** ppIGPMResult);
	END_INTERFACE
}  IGPMBackupVtbl;
interface IGPMBackup
{
	CONST_VTBL struct IGPMBackupVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGPMBackup_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGPMBackup_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGPMBackup_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGPMBackup_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IGPMBackup_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IGPMBackup_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IGPMBackup_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IGPMBackup_get_ID(This,pVal)( (This)->lpVtbl -> get_ID(This,pVal) )
#define IGPMBackup_get_GPOID(This,pVal)( (This)->lpVtbl -> get_GPOID(This,pVal) )
#define IGPMBackup_get_GPODomain(This,pVal)( (This)->lpVtbl -> get_GPODomain(This,pVal) )
#define IGPMBackup_get_GPODisplayName(This,pVal)( (This)->lpVtbl -> get_GPODisplayName(This,pVal) )
#define IGPMBackup_get_Timestamp(This,pVal)( (This)->lpVtbl -> get_Timestamp(This,pVal) )
#define IGPMBackup_get_Comment(This,pVal)( (This)->lpVtbl -> get_Comment(This,pVal) )
#define IGPMBackup_get_BackupDir(This,pVal)( (This)->lpVtbl -> get_BackupDir(This,pVal) )
#define IGPMBackup_Delete(This)( (This)->lpVtbl -> Delete(This) )
#define IGPMBackup_GenerateReport(This,gpmReportType,pvarGPMProgress,pvarGPMCancel,ppIGPMResult)( (This)->lpVtbl -> GenerateReport(This,gpmReportType,pvarGPMProgress,pvarGPMCancel,ppIGPMResult) )
#define IGPMBackup_GenerateReportToFile(This,gpmReportType,bstrTargetFilePath,ppIGPMResult)( (This)->lpVtbl -> GenerateReportToFile(This,gpmReportType,bstrTargetFilePath,ppIGPMResult) )
#endif
#endif
#ifndef __IGPMBackupCollection_INTERFACE_DEFINED__
#define __IGPMBackupCollection_INTERFACE_DEFINED__
extern const IID IID_IGPMBackupCollection;
typedef struct IGPMBackupCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGPMBackupCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGPMBackupCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGPMBackupCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IGPMBackupCollection * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IGPMBackupCollection * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IGPMBackupCollection * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IGPMBackupCollection * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IGPMBackupCollection * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IGPMBackupCollection * This, long lIndex, VARIANT * pVal);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IGPMBackupCollection * This, IEnumVARIANT ** ppIGPMBackup);
	END_INTERFACE
}  IGPMBackupCollectionVtbl;
interface IGPMBackupCollection
{
	CONST_VTBL struct IGPMBackupCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGPMBackupCollection_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGPMBackupCollection_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGPMBackupCollection_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGPMBackupCollection_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IGPMBackupCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IGPMBackupCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IGPMBackupCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IGPMBackupCollection_get_Count(This,pVal)( (This)->lpVtbl -> get_Count(This,pVal) )
#define IGPMBackupCollection_get_Item(This,lIndex,pVal)( (This)->lpVtbl -> get_Item(This,lIndex,pVal) )
#define IGPMBackupCollection_get__NewEnum(This,ppIGPMBackup)( (This)->lpVtbl -> get__NewEnum(This,ppIGPMBackup) )
#endif
#endif
#ifndef __IGPMSOM_INTERFACE_DEFINED__
#define __IGPMSOM_INTERFACE_DEFINED__
typedef enum __MIDL_IGPMSOM_0001
{
	somSite = 0,
	somDomain = (somSite + 1),
	somOU = (somDomain + 1)
} GPMSOMType;
extern const IID IID_IGPMSOM;
typedef struct IGPMSOMVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGPMSOM * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGPMSOM * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGPMSOM * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IGPMSOM * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IGPMSOM * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IGPMSOM * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IGPMSOM * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_GPOInheritanceBlocked) (IGPMSOM * This, VARIANT_BOOL * pVal);
	HRESULT(STDMETHODCALLTYPE * put_GPOInheritanceBlocked) (IGPMSOM * This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IGPMSOM * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_Path) (IGPMSOM * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * CreateGPOLink) (IGPMSOM * This, long lLinkPos, IGPMGPO * pGPO, IGPMGPOLink ** ppNewGPOLink);
	HRESULT(STDMETHODCALLTYPE * get_Type) (IGPMSOM * This, GPMSOMType * pVal);
	HRESULT(STDMETHODCALLTYPE * GetGPOLinks) (IGPMSOM * This, IGPMGPOLinksCollection ** ppGPOLinks);
	HRESULT(STDMETHODCALLTYPE * GetInheritedGPOLinks) (IGPMSOM * This, IGPMGPOLinksCollection ** ppGPOLinks);
	HRESULT(STDMETHODCALLTYPE * GetSecurityInfo) (IGPMSOM * This, IGPMSecurityInfo ** ppSecurityInfo);
	HRESULT(STDMETHODCALLTYPE * SetSecurityInfo) (IGPMSOM * This, IGPMSecurityInfo * pSecurityInfo);
	END_INTERFACE
}  IGPMSOMVtbl;
interface IGPMSOM
{
	CONST_VTBL struct IGPMSOMVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGPMSOM_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGPMSOM_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGPMSOM_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGPMSOM_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IGPMSOM_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IGPMSOM_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IGPMSOM_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IGPMSOM_get_GPOInheritanceBlocked(This,pVal)( (This)->lpVtbl -> get_GPOInheritanceBlocked(This,pVal) )
#define IGPMSOM_put_GPOInheritanceBlocked(This,newVal)( (This)->lpVtbl -> put_GPOInheritanceBlocked(This,newVal) )
#define IGPMSOM_get_Name(This,pVal)( (This)->lpVtbl -> get_Name(This,pVal) )
#define IGPMSOM_get_Path(This,pVal)( (This)->lpVtbl -> get_Path(This,pVal) )
#define IGPMSOM_CreateGPOLink(This,lLinkPos,pGPO,ppNewGPOLink)( (This)->lpVtbl -> CreateGPOLink(This,lLinkPos,pGPO,ppNewGPOLink) )
#define IGPMSOM_get_Type(This,pVal)( (This)->lpVtbl -> get_Type(This,pVal) )
#define IGPMSOM_GetGPOLinks(This,ppGPOLinks)( (This)->lpVtbl -> GetGPOLinks(This,ppGPOLinks) )
#define IGPMSOM_GetInheritedGPOLinks(This,ppGPOLinks)( (This)->lpVtbl -> GetInheritedGPOLinks(This,ppGPOLinks) )
#define IGPMSOM_GetSecurityInfo(This,ppSecurityInfo)( (This)->lpVtbl -> GetSecurityInfo(This,ppSecurityInfo) )
#define IGPMSOM_SetSecurityInfo(This,pSecurityInfo)( (This)->lpVtbl -> SetSecurityInfo(This,pSecurityInfo) )
#endif
#endif
#ifndef __IGPMSOMCollection_INTERFACE_DEFINED__
#define __IGPMSOMCollection_INTERFACE_DEFINED__
extern const IID IID_IGPMSOMCollection;
typedef struct IGPMSOMCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGPMSOMCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGPMSOMCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGPMSOMCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IGPMSOMCollection * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IGPMSOMCollection * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IGPMSOMCollection * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IGPMSOMCollection * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IGPMSOMCollection * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IGPMSOMCollection * This, long lIndex, VARIANT * pVal);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IGPMSOMCollection * This, IEnumVARIANT ** ppIGPMSOM);
	END_INTERFACE
}  IGPMSOMCollectionVtbl;
interface IGPMSOMCollection
{
	CONST_VTBL struct IGPMSOMCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGPMSOMCollection_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGPMSOMCollection_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGPMSOMCollection_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGPMSOMCollection_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IGPMSOMCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IGPMSOMCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IGPMSOMCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IGPMSOMCollection_get_Count(This,pVal)( (This)->lpVtbl -> get_Count(This,pVal) )
#define IGPMSOMCollection_get_Item(This,lIndex,pVal)( (This)->lpVtbl -> get_Item(This,lIndex,pVal) )
#define IGPMSOMCollection_get__NewEnum(This,ppIGPMSOM)( (This)->lpVtbl -> get__NewEnum(This,ppIGPMSOM) )
#endif
#endif
#ifndef __IGPMWMIFilter_INTERFACE_DEFINED__
#define __IGPMWMIFilter_INTERFACE_DEFINED__
extern const IID IID_IGPMWMIFilter;
typedef struct IGPMWMIFilterVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGPMWMIFilter * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGPMWMIFilter * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGPMWMIFilter * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IGPMWMIFilter * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IGPMWMIFilter * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IGPMWMIFilter * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IGPMWMIFilter * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Path) (IGPMWMIFilter * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * put_Name) (IGPMWMIFilter * This, BSTR newVal);
	HRESULT(STDMETHODCALLTYPE * get_Name) (IGPMWMIFilter * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * put_Description) (IGPMWMIFilter * This, BSTR newVal);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IGPMWMIFilter * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * GetQueryList) (IGPMWMIFilter * This, VARIANT * pQryList);
	HRESULT(STDMETHODCALLTYPE * GetSecurityInfo) (IGPMWMIFilter * This, IGPMSecurityInfo ** ppSecurityInfo);
	HRESULT(STDMETHODCALLTYPE * SetSecurityInfo) (IGPMWMIFilter * This, IGPMSecurityInfo * pSecurityInfo);
	END_INTERFACE
}  IGPMWMIFilterVtbl;
interface IGPMWMIFilter
{
	CONST_VTBL struct IGPMWMIFilterVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGPMWMIFilter_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGPMWMIFilter_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGPMWMIFilter_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGPMWMIFilter_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IGPMWMIFilter_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IGPMWMIFilter_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IGPMWMIFilter_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IGPMWMIFilter_get_Path(This,pVal)( (This)->lpVtbl -> get_Path(This,pVal) )
#define IGPMWMIFilter_put_Name(This,newVal)( (This)->lpVtbl -> put_Name(This,newVal) )
#define IGPMWMIFilter_get_Name(This,pVal)( (This)->lpVtbl -> get_Name(This,pVal) )
#define IGPMWMIFilter_put_Description(This,newVal)( (This)->lpVtbl -> put_Description(This,newVal) )
#define IGPMWMIFilter_get_Description(This,pVal)( (This)->lpVtbl -> get_Description(This,pVal) )
#define IGPMWMIFilter_GetQueryList(This,pQryList)( (This)->lpVtbl -> GetQueryList(This,pQryList) )
#define IGPMWMIFilter_GetSecurityInfo(This,ppSecurityInfo)( (This)->lpVtbl -> GetSecurityInfo(This,ppSecurityInfo) )
#define IGPMWMIFilter_SetSecurityInfo(This,pSecurityInfo)( (This)->lpVtbl -> SetSecurityInfo(This,pSecurityInfo) )
#endif
#endif
#ifndef __IGPMWMIFilterCollection_INTERFACE_DEFINED__
#define __IGPMWMIFilterCollection_INTERFACE_DEFINED__
extern const IID IID_IGPMWMIFilterCollection;
typedef struct IGPMWMIFilterCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGPMWMIFilterCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGPMWMIFilterCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGPMWMIFilterCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IGPMWMIFilterCollection * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IGPMWMIFilterCollection * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IGPMWMIFilterCollection * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IGPMWMIFilterCollection * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IGPMWMIFilterCollection * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IGPMWMIFilterCollection * This, long lIndex, VARIANT * pVal);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IGPMWMIFilterCollection * This, IEnumVARIANT ** pVal);
	END_INTERFACE
}  IGPMWMIFilterCollectionVtbl;
interface IGPMWMIFilterCollection
{
	CONST_VTBL struct IGPMWMIFilterCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGPMWMIFilterCollection_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGPMWMIFilterCollection_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGPMWMIFilterCollection_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGPMWMIFilterCollection_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IGPMWMIFilterCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IGPMWMIFilterCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IGPMWMIFilterCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IGPMWMIFilterCollection_get_Count(This,pVal)( (This)->lpVtbl -> get_Count(This,pVal) )
#define IGPMWMIFilterCollection_get_Item(This,lIndex,pVal)( (This)->lpVtbl -> get_Item(This,lIndex,pVal) )
#define IGPMWMIFilterCollection_get__NewEnum(This,pVal)( (This)->lpVtbl -> get__NewEnum(This,pVal) )
#endif
#endif
#ifndef __IGPMRSOP_INTERFACE_DEFINED__
#define __IGPMRSOP_INTERFACE_DEFINED__
extern const IID IID_IGPMRSOP;
typedef struct IGPMRSOPVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGPMRSOP * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGPMRSOP * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGPMRSOP * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IGPMRSOP * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IGPMRSOP * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IGPMRSOP * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IGPMRSOP * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Mode) (IGPMRSOP * This, GPMRSOPMode * pVal);
	HRESULT(STDMETHODCALLTYPE * get_Namespace) (IGPMRSOP * This, BSTR * bstrVal);
	HRESULT(STDMETHODCALLTYPE * put_LoggingComputer) (IGPMRSOP * This, BSTR bstrVal);
	HRESULT(STDMETHODCALLTYPE * get_LoggingComputer) (IGPMRSOP * This, BSTR * bstrVal);
	HRESULT(STDMETHODCALLTYPE * put_LoggingUser) (IGPMRSOP * This, BSTR bstrVal);
	HRESULT(STDMETHODCALLTYPE * get_LoggingUser) (IGPMRSOP * This, BSTR * bstrVal);
	HRESULT(STDMETHODCALLTYPE * put_LoggingFlags) (IGPMRSOP * This, long lVal);
	HRESULT(STDMETHODCALLTYPE * get_LoggingFlags) (IGPMRSOP * This, long *lVal);
	HRESULT(STDMETHODCALLTYPE * put_PlanningFlags) (IGPMRSOP * This, long lVal);
	HRESULT(STDMETHODCALLTYPE * get_PlanningFlags) (IGPMRSOP * This, long *lVal);
	HRESULT(STDMETHODCALLTYPE * put_PlanningDomainController) (IGPMRSOP * This, BSTR bstrVal);
	HRESULT(STDMETHODCALLTYPE * get_PlanningDomainController) (IGPMRSOP * This, BSTR * bstrVal);
	HRESULT(STDMETHODCALLTYPE * put_PlanningSiteName) (IGPMRSOP * This, BSTR bstrVal);
	HRESULT(STDMETHODCALLTYPE * get_PlanningSiteName) (IGPMRSOP * This, BSTR * bstrVal);
	HRESULT(STDMETHODCALLTYPE * put_PlanningUser) (IGPMRSOP * This, BSTR bstrVal);
	HRESULT(STDMETHODCALLTYPE * get_PlanningUser) (IGPMRSOP * This, BSTR * bstrVal);
	HRESULT(STDMETHODCALLTYPE * put_PlanningUserSOM) (IGPMRSOP * This, BSTR bstrVal);
	HRESULT(STDMETHODCALLTYPE * get_PlanningUserSOM) (IGPMRSOP * This, BSTR * bstrVal);
	HRESULT(STDMETHODCALLTYPE * put_PlanningUserWMIFilters) (IGPMRSOP * This, VARIANT varVal);
	HRESULT(STDMETHODCALLTYPE * get_PlanningUserWMIFilters) (IGPMRSOP * This, VARIANT * varVal);
	HRESULT(STDMETHODCALLTYPE * put_PlanningUserSecurityGroups) (IGPMRSOP * This, VARIANT varVal);
	HRESULT(STDMETHODCALLTYPE * get_PlanningUserSecurityGroups) (IGPMRSOP * This, VARIANT * varVal);
	HRESULT(STDMETHODCALLTYPE * put_PlanningComputer) (IGPMRSOP * This, BSTR bstrVal);
	HRESULT(STDMETHODCALLTYPE * get_PlanningComputer) (IGPMRSOP * This, BSTR * bstrVal);
	HRESULT(STDMETHODCALLTYPE * put_PlanningComputerSOM) (IGPMRSOP * This, BSTR bstrVal);
	HRESULT(STDMETHODCALLTYPE * get_PlanningComputerSOM) (IGPMRSOP * This, BSTR * bstrVal);
	HRESULT(STDMETHODCALLTYPE * put_PlanningComputerWMIFilters) (IGPMRSOP * This, VARIANT varVal);
	HRESULT(STDMETHODCALLTYPE * get_PlanningComputerWMIFilters) (IGPMRSOP * This, VARIANT * varVal);
	HRESULT(STDMETHODCALLTYPE * put_PlanningComputerSecurityGroups) (IGPMRSOP * This, VARIANT varVal);
	HRESULT(STDMETHODCALLTYPE * get_PlanningComputerSecurityGroups) (IGPMRSOP * This, VARIANT * varVal);
	HRESULT(STDMETHODCALLTYPE * LoggingEnumerateUsers) (IGPMRSOP * This, VARIANT * varVal);
	HRESULT(STDMETHODCALLTYPE * CreateQueryResults) (IGPMRSOP * This);
	HRESULT(STDMETHODCALLTYPE * ReleaseQueryResults) (IGPMRSOP * This);
	HRESULT(STDMETHODCALLTYPE * GenerateReport) (IGPMRSOP * This, GPMReportType gpmReportType, VARIANT * pvarGPMProgress, VARIANT * pvarGPMCancel, IGPMResult ** ppIGPMResult);
	HRESULT(STDMETHODCALLTYPE * GenerateReportToFile) (IGPMRSOP * This, GPMReportType gpmReportType, BSTR bstrTargetFilePath, IGPMResult ** ppIGPMResult);
	END_INTERFACE
}  IGPMRSOPVtbl;
interface IGPMRSOP
{
	CONST_VTBL struct IGPMRSOPVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGPMRSOP_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGPMRSOP_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGPMRSOP_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGPMRSOP_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IGPMRSOP_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IGPMRSOP_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IGPMRSOP_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IGPMRSOP_get_Mode(This,pVal)( (This)->lpVtbl -> get_Mode(This,pVal) )
#define IGPMRSOP_get_Namespace(This,bstrVal)( (This)->lpVtbl -> get_Namespace(This,bstrVal) )
#define IGPMRSOP_put_LoggingComputer(This,bstrVal)( (This)->lpVtbl -> put_LoggingComputer(This,bstrVal) )
#define IGPMRSOP_get_LoggingComputer(This,bstrVal)( (This)->lpVtbl -> get_LoggingComputer(This,bstrVal) )
#define IGPMRSOP_put_LoggingUser(This,bstrVal)( (This)->lpVtbl -> put_LoggingUser(This,bstrVal) )
#define IGPMRSOP_get_LoggingUser(This,bstrVal)( (This)->lpVtbl -> get_LoggingUser(This,bstrVal) )
#define IGPMRSOP_put_LoggingFlags(This,lVal)( (This)->lpVtbl -> put_LoggingFlags(This,lVal) )
#define IGPMRSOP_get_LoggingFlags(This,lVal)( (This)->lpVtbl -> get_LoggingFlags(This,lVal) )
#define IGPMRSOP_put_PlanningFlags(This,lVal)( (This)->lpVtbl -> put_PlanningFlags(This,lVal) )
#define IGPMRSOP_get_PlanningFlags(This,lVal)( (This)->lpVtbl -> get_PlanningFlags(This,lVal) )
#define IGPMRSOP_put_PlanningDomainController(This,bstrVal)( (This)->lpVtbl -> put_PlanningDomainController(This,bstrVal) )
#define IGPMRSOP_get_PlanningDomainController(This,bstrVal)( (This)->lpVtbl -> get_PlanningDomainController(This,bstrVal) )
#define IGPMRSOP_put_PlanningSiteName(This,bstrVal)( (This)->lpVtbl -> put_PlanningSiteName(This,bstrVal) )
#define IGPMRSOP_get_PlanningSiteName(This,bstrVal)( (This)->lpVtbl -> get_PlanningSiteName(This,bstrVal) )
#define IGPMRSOP_put_PlanningUser(This,bstrVal)( (This)->lpVtbl -> put_PlanningUser(This,bstrVal) )
#define IGPMRSOP_get_PlanningUser(This,bstrVal)( (This)->lpVtbl -> get_PlanningUser(This,bstrVal) )
#define IGPMRSOP_put_PlanningUserSOM(This,bstrVal)( (This)->lpVtbl -> put_PlanningUserSOM(This,bstrVal) )
#define IGPMRSOP_get_PlanningUserSOM(This,bstrVal)( (This)->lpVtbl -> get_PlanningUserSOM(This,bstrVal) )
#define IGPMRSOP_put_PlanningUserWMIFilters(This,varVal)( (This)->lpVtbl -> put_PlanningUserWMIFilters(This,varVal) )
#define IGPMRSOP_get_PlanningUserWMIFilters(This,varVal)( (This)->lpVtbl -> get_PlanningUserWMIFilters(This,varVal) )
#define IGPMRSOP_put_PlanningUserSecurityGroups(This,varVal)( (This)->lpVtbl -> put_PlanningUserSecurityGroups(This,varVal) )
#define IGPMRSOP_get_PlanningUserSecurityGroups(This,varVal)( (This)->lpVtbl -> get_PlanningUserSecurityGroups(This,varVal) )
#define IGPMRSOP_put_PlanningComputer(This,bstrVal)( (This)->lpVtbl -> put_PlanningComputer(This,bstrVal) )
#define IGPMRSOP_get_PlanningComputer(This,bstrVal)( (This)->lpVtbl -> get_PlanningComputer(This,bstrVal) )
#define IGPMRSOP_put_PlanningComputerSOM(This,bstrVal)( (This)->lpVtbl -> put_PlanningComputerSOM(This,bstrVal) )
#define IGPMRSOP_get_PlanningComputerSOM(This,bstrVal)( (This)->lpVtbl -> get_PlanningComputerSOM(This,bstrVal) )
#define IGPMRSOP_put_PlanningComputerWMIFilters(This,varVal)( (This)->lpVtbl -> put_PlanningComputerWMIFilters(This,varVal) )
#define IGPMRSOP_get_PlanningComputerWMIFilters(This,varVal)( (This)->lpVtbl -> get_PlanningComputerWMIFilters(This,varVal) )
#define IGPMRSOP_put_PlanningComputerSecurityGroups(This,varVal)( (This)->lpVtbl -> put_PlanningComputerSecurityGroups(This,varVal) )
#define IGPMRSOP_get_PlanningComputerSecurityGroups(This,varVal)( (This)->lpVtbl -> get_PlanningComputerSecurityGroups(This,varVal) )
#define IGPMRSOP_LoggingEnumerateUsers(This,varVal)( (This)->lpVtbl -> LoggingEnumerateUsers(This,varVal) )
#define IGPMRSOP_CreateQueryResults(This)( (This)->lpVtbl -> CreateQueryResults(This) )
#define IGPMRSOP_ReleaseQueryResults(This)( (This)->lpVtbl -> ReleaseQueryResults(This) )
#define IGPMRSOP_GenerateReport(This,gpmReportType,pvarGPMProgress,pvarGPMCancel,ppIGPMResult)( (This)->lpVtbl -> GenerateReport(This,gpmReportType,pvarGPMProgress,pvarGPMCancel,ppIGPMResult) )
#define IGPMRSOP_GenerateReportToFile(This,gpmReportType,bstrTargetFilePath,ppIGPMResult)( (This)->lpVtbl -> GenerateReportToFile(This,gpmReportType,bstrTargetFilePath,ppIGPMResult) )
#endif
#endif
#ifndef __IGPMGPO_INTERFACE_DEFINED__
#define __IGPMGPO_INTERFACE_DEFINED__
extern const IID IID_IGPMGPO;
typedef struct IGPMGPOVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGPMGPO * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGPMGPO * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGPMGPO * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IGPMGPO * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IGPMGPO * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IGPMGPO * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IGPMGPO * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_DisplayName) (IGPMGPO * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * put_DisplayName) (IGPMGPO * This, BSTR newVal);
	HRESULT(STDMETHODCALLTYPE * get_Path) (IGPMGPO * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_ID) (IGPMGPO * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_DomainName) (IGPMGPO * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_CreationTime) (IGPMGPO * This, DATE * pDate);
	HRESULT(STDMETHODCALLTYPE * get_ModificationTime) (IGPMGPO * This, DATE * pDate);
	HRESULT(STDMETHODCALLTYPE * get_UserDSVersionNumber) (IGPMGPO * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_ComputerDSVersionNumber) (IGPMGPO * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_UserSysvolVersionNumber) (IGPMGPO * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_ComputerSysvolVersionNumber) (IGPMGPO * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * GetWMIFilter) (IGPMGPO * This, IGPMWMIFilter ** ppIGPMWMIFilter);
	HRESULT(STDMETHODCALLTYPE * SetWMIFilter) (IGPMGPO * This, IGPMWMIFilter * pIGPMWMIFilter);
	HRESULT(STDMETHODCALLTYPE * SetUserEnabled) (IGPMGPO * This, VARIANT_BOOL vbEnabled);
	HRESULT(STDMETHODCALLTYPE * SetComputerEnabled) (IGPMGPO * This, VARIANT_BOOL vbEnabled);
	HRESULT(STDMETHODCALLTYPE * IsUserEnabled) (IGPMGPO * This, VARIANT_BOOL * pvbEnabled);
	HRESULT(STDMETHODCALLTYPE * IsComputerEnabled) (IGPMGPO * This, VARIANT_BOOL * pvbEnabled);
	HRESULT(STDMETHODCALLTYPE * GetSecurityInfo) (IGPMGPO * This, IGPMSecurityInfo ** ppSecurityInfo);
	HRESULT(STDMETHODCALLTYPE * SetSecurityInfo) (IGPMGPO * This, IGPMSecurityInfo * pSecurityInfo);
	HRESULT(STDMETHODCALLTYPE * Delete) (IGPMGPO * This);
	HRESULT(STDMETHODCALLTYPE * Backup) (IGPMGPO * This, BSTR bstrBackupDir, BSTR bstrComment, VARIANT * pvarGPMProgress, VARIANT * pvarGPMCancel, IGPMResult ** ppIGPMResult);
	HRESULT(STDMETHODCALLTYPE * Import) (IGPMGPO * This, long lFlags, IGPMBackup * pIGPMBackup, VARIANT * pvarMigrationTable, VARIANT * pvarGPMProgress, VARIANT * pvarGPMCancel, IGPMResult ** ppIGPMResult);
	HRESULT(STDMETHODCALLTYPE * GenerateReport) (IGPMGPO * This, GPMReportType gpmReportType, VARIANT * pvarGPMProgress, VARIANT * pvarGPMCancel, IGPMResult ** ppIGPMResult);
	HRESULT(STDMETHODCALLTYPE * GenerateReportToFile) (IGPMGPO * This, GPMReportType gpmReportType, BSTR bstrTargetFilePath, IGPMResult ** ppIGPMResult);
	HRESULT(STDMETHODCALLTYPE * CopyTo) (IGPMGPO * This, long lFlags, IGPMDomain * pIGPMDomain, VARIANT * pvarNewDisplayName, VARIANT * pvarMigrationTable, VARIANT * pvarGPMProgress, VARIANT * pvarGPMCancel, IGPMResult ** ppIGPMResult);
	HRESULT(STDMETHODCALLTYPE * SetSecurityDescriptor) (IGPMGPO * This, long lFlags, IDispatch * pSD);
	HRESULT(STDMETHODCALLTYPE * GetSecurityDescriptor) (IGPMGPO * This, long lFlags, IDispatch ** ppSD);
	HRESULT(STDMETHODCALLTYPE * IsACLConsistent) (IGPMGPO * This, VARIANT_BOOL * pvbConsistent);
	HRESULT(STDMETHODCALLTYPE * MakeACLConsistent) (IGPMGPO * This);
	END_INTERFACE
}  IGPMGPOVtbl;
interface IGPMGPO
{
	CONST_VTBL struct IGPMGPOVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGPMGPO_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGPMGPO_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGPMGPO_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGPMGPO_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IGPMGPO_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IGPMGPO_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IGPMGPO_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IGPMGPO_get_DisplayName(This,pVal)( (This)->lpVtbl -> get_DisplayName(This,pVal) )
#define IGPMGPO_put_DisplayName(This,newVal)( (This)->lpVtbl -> put_DisplayName(This,newVal) )
#define IGPMGPO_get_Path(This,pVal)( (This)->lpVtbl -> get_Path(This,pVal) )
#define IGPMGPO_get_ID(This,pVal)( (This)->lpVtbl -> get_ID(This,pVal) )
#define IGPMGPO_get_DomainName(This,pVal)( (This)->lpVtbl -> get_DomainName(This,pVal) )
#define IGPMGPO_get_CreationTime(This,pDate)( (This)->lpVtbl -> get_CreationTime(This,pDate) )
#define IGPMGPO_get_ModificationTime(This,pDate)( (This)->lpVtbl -> get_ModificationTime(This,pDate) )
#define IGPMGPO_get_UserDSVersionNumber(This,pVal)( (This)->lpVtbl -> get_UserDSVersionNumber(This,pVal) )
#define IGPMGPO_get_ComputerDSVersionNumber(This,pVal)( (This)->lpVtbl -> get_ComputerDSVersionNumber(This,pVal) )
#define IGPMGPO_get_UserSysvolVersionNumber(This,pVal)( (This)->lpVtbl -> get_UserSysvolVersionNumber(This,pVal) )
#define IGPMGPO_get_ComputerSysvolVersionNumber(This,pVal)( (This)->lpVtbl -> get_ComputerSysvolVersionNumber(This,pVal) )
#define IGPMGPO_GetWMIFilter(This,ppIGPMWMIFilter)( (This)->lpVtbl -> GetWMIFilter(This,ppIGPMWMIFilter) )
#define IGPMGPO_SetWMIFilter(This,pIGPMWMIFilter)( (This)->lpVtbl -> SetWMIFilter(This,pIGPMWMIFilter) )
#define IGPMGPO_SetUserEnabled(This,vbEnabled)( (This)->lpVtbl -> SetUserEnabled(This,vbEnabled) )
#define IGPMGPO_SetComputerEnabled(This,vbEnabled)( (This)->lpVtbl -> SetComputerEnabled(This,vbEnabled) )
#define IGPMGPO_IsUserEnabled(This,pvbEnabled)( (This)->lpVtbl -> IsUserEnabled(This,pvbEnabled) )
#define IGPMGPO_IsComputerEnabled(This,pvbEnabled)( (This)->lpVtbl -> IsComputerEnabled(This,pvbEnabled) )
#define IGPMGPO_GetSecurityInfo(This,ppSecurityInfo)( (This)->lpVtbl -> GetSecurityInfo(This,ppSecurityInfo) )
#define IGPMGPO_SetSecurityInfo(This,pSecurityInfo)( (This)->lpVtbl -> SetSecurityInfo(This,pSecurityInfo) )
#define IGPMGPO_Delete(This)( (This)->lpVtbl -> Delete(This) )
#define IGPMGPO_Backup(This,bstrBackupDir,bstrComment,pvarGPMProgress,pvarGPMCancel,ppIGPMResult)( (This)->lpVtbl -> Backup(This,bstrBackupDir,bstrComment,pvarGPMProgress,pvarGPMCancel,ppIGPMResult) )
#define IGPMGPO_Import(This,lFlags,pIGPMBackup,pvarMigrationTable,pvarGPMProgress,pvarGPMCancel,ppIGPMResult)( (This)->lpVtbl -> Import(This,lFlags,pIGPMBackup,pvarMigrationTable,pvarGPMProgress,pvarGPMCancel,ppIGPMResult) )
#define IGPMGPO_GenerateReport(This,gpmReportType,pvarGPMProgress,pvarGPMCancel,ppIGPMResult)( (This)->lpVtbl -> GenerateReport(This,gpmReportType,pvarGPMProgress,pvarGPMCancel,ppIGPMResult) )
#define IGPMGPO_GenerateReportToFile(This,gpmReportType,bstrTargetFilePath,ppIGPMResult)( (This)->lpVtbl -> GenerateReportToFile(This,gpmReportType,bstrTargetFilePath,ppIGPMResult) )
#define IGPMGPO_CopyTo(This,lFlags,pIGPMDomain,pvarNewDisplayName,pvarMigrationTable,pvarGPMProgress,pvarGPMCancel,ppIGPMResult)( (This)->lpVtbl -> CopyTo(This,lFlags,pIGPMDomain,pvarNewDisplayName,pvarMigrationTable,pvarGPMProgress,pvarGPMCancel,ppIGPMResult) )
#define IGPMGPO_SetSecurityDescriptor(This,lFlags,pSD)( (This)->lpVtbl -> SetSecurityDescriptor(This,lFlags,pSD) )
#define IGPMGPO_GetSecurityDescriptor(This,lFlags,ppSD)( (This)->lpVtbl -> GetSecurityDescriptor(This,lFlags,ppSD) )
#define IGPMGPO_IsACLConsistent(This,pvbConsistent)( (This)->lpVtbl -> IsACLConsistent(This,pvbConsistent) )
#define IGPMGPO_MakeACLConsistent(This)( (This)->lpVtbl -> MakeACLConsistent(This) )
#endif
#endif
#ifndef __IGPMGPOCollection_INTERFACE_DEFINED__
#define __IGPMGPOCollection_INTERFACE_DEFINED__
extern const IID IID_IGPMGPOCollection;
typedef struct IGPMGPOCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGPMGPOCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGPMGPOCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGPMGPOCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IGPMGPOCollection * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IGPMGPOCollection * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IGPMGPOCollection * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IGPMGPOCollection * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IGPMGPOCollection * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IGPMGPOCollection * This, long lIndex, VARIANT * pVal);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IGPMGPOCollection * This, IEnumVARIANT ** ppIGPMGPOs);
	END_INTERFACE
}  IGPMGPOCollectionVtbl;
interface IGPMGPOCollection
{
	CONST_VTBL struct IGPMGPOCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGPMGPOCollection_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGPMGPOCollection_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGPMGPOCollection_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGPMGPOCollection_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IGPMGPOCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IGPMGPOCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IGPMGPOCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IGPMGPOCollection_get_Count(This,pVal)( (This)->lpVtbl -> get_Count(This,pVal) )
#define IGPMGPOCollection_get_Item(This,lIndex,pVal)( (This)->lpVtbl -> get_Item(This,lIndex,pVal) )
#define IGPMGPOCollection_get__NewEnum(This,ppIGPMGPOs)( (This)->lpVtbl -> get__NewEnum(This,ppIGPMGPOs) )
#endif
#endif
#ifndef __IGPMGPOLink_INTERFACE_DEFINED__
#define __IGPMGPOLink_INTERFACE_DEFINED__
extern const IID IID_IGPMGPOLink;
typedef struct IGPMGPOLinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGPMGPOLink * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGPMGPOLink * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGPMGPOLink * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IGPMGPOLink * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IGPMGPOLink * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IGPMGPOLink * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IGPMGPOLink * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_GPOID) (IGPMGPOLink * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_GPODomain) (IGPMGPOLink * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_Enabled) (IGPMGPOLink * This, VARIANT_BOOL * pVal);
	HRESULT(STDMETHODCALLTYPE * put_Enabled) (IGPMGPOLink * This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE * get_Enforced) (IGPMGPOLink * This, VARIANT_BOOL * pVal);
	HRESULT(STDMETHODCALLTYPE * put_Enforced) (IGPMGPOLink * This, VARIANT_BOOL newVal);
	HRESULT(STDMETHODCALLTYPE * get_SOMLinkOrder) (IGPMGPOLink * This, long *lVal);
	HRESULT(STDMETHODCALLTYPE * get_SOM) (IGPMGPOLink * This, IGPMSOM ** ppIGPMSOM);
	HRESULT(STDMETHODCALLTYPE * Delete) (IGPMGPOLink * This);
	END_INTERFACE
}  IGPMGPOLinkVtbl;
interface IGPMGPOLink
{
	CONST_VTBL struct IGPMGPOLinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGPMGPOLink_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGPMGPOLink_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGPMGPOLink_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGPMGPOLink_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IGPMGPOLink_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IGPMGPOLink_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IGPMGPOLink_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IGPMGPOLink_get_GPOID(This,pVal)( (This)->lpVtbl -> get_GPOID(This,pVal) )
#define IGPMGPOLink_get_GPODomain(This,pVal)( (This)->lpVtbl -> get_GPODomain(This,pVal) )
#define IGPMGPOLink_get_Enabled(This,pVal)( (This)->lpVtbl -> get_Enabled(This,pVal) )
#define IGPMGPOLink_put_Enabled(This,newVal)( (This)->lpVtbl -> put_Enabled(This,newVal) )
#define IGPMGPOLink_get_Enforced(This,pVal)( (This)->lpVtbl -> get_Enforced(This,pVal) )
#define IGPMGPOLink_put_Enforced(This,newVal)( (This)->lpVtbl -> put_Enforced(This,newVal) )
#define IGPMGPOLink_get_SOMLinkOrder(This,lVal)( (This)->lpVtbl -> get_SOMLinkOrder(This,lVal) )
#define IGPMGPOLink_get_SOM(This,ppIGPMSOM)( (This)->lpVtbl -> get_SOM(This,ppIGPMSOM) )
#define IGPMGPOLink_Delete(This)( (This)->lpVtbl -> Delete(This) )
#endif
#endif
#ifndef __IGPMGPOLinksCollection_INTERFACE_DEFINED__
#define __IGPMGPOLinksCollection_INTERFACE_DEFINED__
extern const IID IID_IGPMGPOLinksCollection;
typedef struct IGPMGPOLinksCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGPMGPOLinksCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGPMGPOLinksCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGPMGPOLinksCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IGPMGPOLinksCollection * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IGPMGPOLinksCollection * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IGPMGPOLinksCollection * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IGPMGPOLinksCollection * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IGPMGPOLinksCollection * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IGPMGPOLinksCollection * This, long lIndex, VARIANT * pVal);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IGPMGPOLinksCollection * This, IEnumVARIANT ** ppIGPMLinks);
	END_INTERFACE
}  IGPMGPOLinksCollectionVtbl;
interface IGPMGPOLinksCollection
{
	CONST_VTBL struct IGPMGPOLinksCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGPMGPOLinksCollection_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGPMGPOLinksCollection_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGPMGPOLinksCollection_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGPMGPOLinksCollection_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IGPMGPOLinksCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IGPMGPOLinksCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IGPMGPOLinksCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IGPMGPOLinksCollection_get_Count(This,pVal)( (This)->lpVtbl -> get_Count(This,pVal) )
#define IGPMGPOLinksCollection_get_Item(This,lIndex,pVal)( (This)->lpVtbl -> get_Item(This,lIndex,pVal) )
#define IGPMGPOLinksCollection_get__NewEnum(This,ppIGPMLinks)( (This)->lpVtbl -> get__NewEnum(This,ppIGPMLinks) )
#endif
#endif
#ifndef __IGPMCSECollection_INTERFACE_DEFINED__
#define __IGPMCSECollection_INTERFACE_DEFINED__
extern const IID IID_IGPMCSECollection;
typedef struct IGPMCSECollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGPMCSECollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGPMCSECollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGPMCSECollection * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IGPMCSECollection * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IGPMCSECollection * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IGPMCSECollection * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IGPMCSECollection * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IGPMCSECollection * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IGPMCSECollection * This, long lIndex, VARIANT * pVal);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IGPMCSECollection * This, IEnumVARIANT ** ppIGPMCSEs);
	END_INTERFACE
}  IGPMCSECollectionVtbl;
interface IGPMCSECollection
{
	CONST_VTBL struct IGPMCSECollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGPMCSECollection_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGPMCSECollection_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGPMCSECollection_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGPMCSECollection_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IGPMCSECollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IGPMCSECollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IGPMCSECollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IGPMCSECollection_get_Count(This,pVal)( (This)->lpVtbl -> get_Count(This,pVal) )
#define IGPMCSECollection_get_Item(This,lIndex,pVal)( (This)->lpVtbl -> get_Item(This,lIndex,pVal) )
#define IGPMCSECollection_get__NewEnum(This,ppIGPMCSEs)( (This)->lpVtbl -> get__NewEnum(This,ppIGPMCSEs) )
#endif
#endif
#ifndef __IGPMClientSideExtension_INTERFACE_DEFINED__
#define __IGPMClientSideExtension_INTERFACE_DEFINED__
extern const IID IID_IGPMClientSideExtension;
typedef struct IGPMClientSideExtensionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGPMClientSideExtension * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGPMClientSideExtension * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGPMClientSideExtension * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IGPMClientSideExtension * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IGPMClientSideExtension * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IGPMClientSideExtension * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IGPMClientSideExtension * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_ID) (IGPMClientSideExtension * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_DisplayName) (IGPMClientSideExtension * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * IsUserEnabled) (IGPMClientSideExtension * This, VARIANT_BOOL * pvbEnabled);
	HRESULT(STDMETHODCALLTYPE * IsComputerEnabled) (IGPMClientSideExtension * This, VARIANT_BOOL * pvbEnabled);
	END_INTERFACE
}  IGPMClientSideExtensionVtbl;
interface IGPMClientSideExtension
{
	CONST_VTBL struct IGPMClientSideExtensionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGPMClientSideExtension_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGPMClientSideExtension_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGPMClientSideExtension_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGPMClientSideExtension_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IGPMClientSideExtension_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IGPMClientSideExtension_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IGPMClientSideExtension_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IGPMClientSideExtension_get_ID(This,pVal)( (This)->lpVtbl -> get_ID(This,pVal) )
#define IGPMClientSideExtension_get_DisplayName(This,pVal)( (This)->lpVtbl -> get_DisplayName(This,pVal) )
#define IGPMClientSideExtension_IsUserEnabled(This,pvbEnabled)( (This)->lpVtbl -> IsUserEnabled(This,pvbEnabled) )
#define IGPMClientSideExtension_IsComputerEnabled(This,pvbEnabled)( (This)->lpVtbl -> IsComputerEnabled(This,pvbEnabled) )
#endif
#endif
#ifndef __IGPMAsyncCancel_INTERFACE_DEFINED__
#define __IGPMAsyncCancel_INTERFACE_DEFINED__
extern const IID IID_IGPMAsyncCancel;
typedef struct IGPMAsyncCancelVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGPMAsyncCancel * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGPMAsyncCancel * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGPMAsyncCancel * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IGPMAsyncCancel * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IGPMAsyncCancel * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IGPMAsyncCancel * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IGPMAsyncCancel * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Cancel) (IGPMAsyncCancel * This);
	END_INTERFACE
}  IGPMAsyncCancelVtbl;
interface IGPMAsyncCancel
{
	CONST_VTBL struct IGPMAsyncCancelVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGPMAsyncCancel_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGPMAsyncCancel_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGPMAsyncCancel_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGPMAsyncCancel_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IGPMAsyncCancel_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IGPMAsyncCancel_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IGPMAsyncCancel_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IGPMAsyncCancel_Cancel(This)( (This)->lpVtbl -> Cancel(This) )
#endif
#endif
#ifndef __IGPMAsyncProgress_INTERFACE_DEFINED__
#define __IGPMAsyncProgress_INTERFACE_DEFINED__
extern const IID IID_IGPMAsyncProgress;
typedef struct IGPMAsyncProgressVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGPMAsyncProgress * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGPMAsyncProgress * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGPMAsyncProgress * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IGPMAsyncProgress * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IGPMAsyncProgress * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IGPMAsyncProgress * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IGPMAsyncProgress * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Status) (IGPMAsyncProgress * This, long lProgressNumerator, long lProgressDenominator, HRESULT hrStatus, VARIANT * pResult, IGPMStatusMsgCollection * ppIGPMStatusMsgCollection);
	END_INTERFACE
}  IGPMAsyncProgressVtbl;
interface IGPMAsyncProgress
{
	CONST_VTBL struct IGPMAsyncProgressVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGPMAsyncProgress_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGPMAsyncProgress_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGPMAsyncProgress_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGPMAsyncProgress_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IGPMAsyncProgress_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IGPMAsyncProgress_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IGPMAsyncProgress_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IGPMAsyncProgress_Status(This,lProgressNumerator,lProgressDenominator,hrStatus,pResult,ppIGPMStatusMsgCollection)( (This)->lpVtbl -> Status(This,lProgressNumerator,lProgressDenominator,hrStatus,pResult,ppIGPMStatusMsgCollection) )
#endif
#endif
#ifndef __IGPMStatusMsgCollection_INTERFACE_DEFINED__
#define __IGPMStatusMsgCollection_INTERFACE_DEFINED__
extern const IID IID_IGPMStatusMsgCollection;
typedef struct IGPMStatusMsgCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGPMStatusMsgCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGPMStatusMsgCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGPMStatusMsgCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IGPMStatusMsgCollection * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IGPMStatusMsgCollection * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IGPMStatusMsgCollection * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IGPMStatusMsgCollection * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IGPMStatusMsgCollection * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IGPMStatusMsgCollection * This, long lIndex, VARIANT * pVal);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IGPMStatusMsgCollection * This, IEnumVARIANT ** pVal);
	END_INTERFACE
}  IGPMStatusMsgCollectionVtbl;
interface IGPMStatusMsgCollection
{
	CONST_VTBL struct IGPMStatusMsgCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGPMStatusMsgCollection_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGPMStatusMsgCollection_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGPMStatusMsgCollection_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGPMStatusMsgCollection_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IGPMStatusMsgCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IGPMStatusMsgCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IGPMStatusMsgCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IGPMStatusMsgCollection_get_Count(This,pVal)( (This)->lpVtbl -> get_Count(This,pVal) )
#define IGPMStatusMsgCollection_get_Item(This,lIndex,pVal)( (This)->lpVtbl -> get_Item(This,lIndex,pVal) )
#define IGPMStatusMsgCollection_get__NewEnum(This,pVal)( (This)->lpVtbl -> get__NewEnum(This,pVal) )
#endif
#endif
#ifndef __IGPMStatusMessage_INTERFACE_DEFINED__
#define __IGPMStatusMessage_INTERFACE_DEFINED__
extern const IID IID_IGPMStatusMessage;
typedef struct IGPMStatusMessageVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGPMStatusMessage * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGPMStatusMessage * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGPMStatusMessage * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IGPMStatusMessage * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IGPMStatusMessage * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IGPMStatusMessage * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IGPMStatusMessage * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_ObjectPath) (IGPMStatusMessage * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * ErrorCode) (IGPMStatusMessage * This);
	HRESULT(STDMETHODCALLTYPE * get_ExtensionName) (IGPMStatusMessage * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_SettingsName) (IGPMStatusMessage * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * OperationCode) (IGPMStatusMessage * This);
	HRESULT(STDMETHODCALLTYPE * get_Message) (IGPMStatusMessage * This, BSTR * pVal);
	END_INTERFACE
}  IGPMStatusMessageVtbl;
interface IGPMStatusMessage
{
	CONST_VTBL struct IGPMStatusMessageVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGPMStatusMessage_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGPMStatusMessage_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGPMStatusMessage_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGPMStatusMessage_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IGPMStatusMessage_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IGPMStatusMessage_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IGPMStatusMessage_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IGPMStatusMessage_get_ObjectPath(This,pVal)( (This)->lpVtbl -> get_ObjectPath(This,pVal) )
#define IGPMStatusMessage_ErrorCode(This)( (This)->lpVtbl -> ErrorCode(This) )
#define IGPMStatusMessage_get_ExtensionName(This,pVal)( (This)->lpVtbl -> get_ExtensionName(This,pVal) )
#define IGPMStatusMessage_get_SettingsName(This,pVal)( (This)->lpVtbl -> get_SettingsName(This,pVal) )
#define IGPMStatusMessage_OperationCode(This)( (This)->lpVtbl -> OperationCode(This) )
#define IGPMStatusMessage_get_Message(This,pVal)( (This)->lpVtbl -> get_Message(This,pVal) )
#endif
#endif
#ifndef __IGPMConstants_INTERFACE_DEFINED__
#define __IGPMConstants_INTERFACE_DEFINED__
extern const IID IID_IGPMConstants;
typedef struct IGPMConstantsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGPMConstants * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGPMConstants * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGPMConstants * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IGPMConstants * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IGPMConstants * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IGPMConstants * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IGPMConstants * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_PermGPOApply) (IGPMConstants * This, GPMPermissionType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_PermGPORead) (IGPMConstants * This, GPMPermissionType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_PermGPOEdit) (IGPMConstants * This, GPMPermissionType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_PermGPOEditSecurityAndDelete) (IGPMConstants * This, GPMPermissionType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_PermGPOCustom) (IGPMConstants * This, GPMPermissionType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_PermWMIFilterEdit) (IGPMConstants * This, GPMPermissionType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_PermWMIFilterFullControl) (IGPMConstants * This, GPMPermissionType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_PermWMIFilterCustom) (IGPMConstants * This, GPMPermissionType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_PermSOMLink) (IGPMConstants * This, GPMPermissionType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_PermSOMLogging) (IGPMConstants * This, GPMPermissionType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_PermSOMPlanning) (IGPMConstants * This, GPMPermissionType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_PermSOMGPOCreate) (IGPMConstants * This, GPMPermissionType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_PermSOMWMICreate) (IGPMConstants * This, GPMPermissionType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_PermSOMWMIFullControl) (IGPMConstants * This, GPMPermissionType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_SearchPropertyGPOPermissions) (IGPMConstants * This, GPMSearchProperty * pVal);
	HRESULT(STDMETHODCALLTYPE * get_SearchPropertyGPOEffectivePermissions) (IGPMConstants * This, GPMSearchProperty * pVal);
	HRESULT(STDMETHODCALLTYPE * get_SearchPropertyGPODisplayName) (IGPMConstants * This, GPMSearchProperty * pVal);
	HRESULT(STDMETHODCALLTYPE * get_SearchPropertyGPOWMIFilter) (IGPMConstants * This, GPMSearchProperty * pVal);
	HRESULT(STDMETHODCALLTYPE * get_SearchPropertyGPOID) (IGPMConstants * This, GPMSearchProperty * pVal);
	HRESULT(STDMETHODCALLTYPE * get_SearchPropertyGPOComputerExtensions) (IGPMConstants * This, GPMSearchProperty * pVal);
	HRESULT(STDMETHODCALLTYPE * get_SearchPropertyGPOUserExtensions) (IGPMConstants * This, GPMSearchProperty * pVal);
	HRESULT(STDMETHODCALLTYPE * get_SearchPropertySOMLinks) (IGPMConstants * This, GPMSearchProperty * pVal);
	HRESULT(STDMETHODCALLTYPE * get_SearchPropertyGPODomain) (IGPMConstants * This, GPMSearchProperty * pVal);
	HRESULT(STDMETHODCALLTYPE * get_SearchPropertyBackupMostRecent) (IGPMConstants * This, GPMSearchProperty * pVal);
	HRESULT(STDMETHODCALLTYPE * get_SearchOpEquals) (IGPMConstants * This, GPMSearchOperation * pVal);
	HRESULT(STDMETHODCALLTYPE * get_SearchOpContains) (IGPMConstants * This, GPMSearchOperation * pVal);
	HRESULT(STDMETHODCALLTYPE * get_SearchOpNotContains) (IGPMConstants * This, GPMSearchOperation * pVal);
	HRESULT(STDMETHODCALLTYPE * get_SearchOpNotEquals) (IGPMConstants * This, GPMSearchOperation * pVal);
	HRESULT(STDMETHODCALLTYPE * get_UsePDC) (IGPMConstants * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_UseAnyDC) (IGPMConstants * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_DoNotUseW2KDC) (IGPMConstants * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_SOMSite) (IGPMConstants * This, GPMSOMType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_SOMDomain) (IGPMConstants * This, GPMSOMType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_SOMOU) (IGPMConstants * This, GPMSOMType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_SecurityFlags) (IGPMConstants * This, VARIANT_BOOL vbOwner, VARIANT_BOOL vbGroup, VARIANT_BOOL vbDACL, VARIANT_BOOL vbSACL, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_DoNotValidateDC) (IGPMConstants * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_ReportHTML) (IGPMConstants * This, GPMReportType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_ReportXML) (IGPMConstants * This, GPMReportType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_RSOPModeUnknown) (IGPMConstants * This, GPMRSOPMode * pVal);
	HRESULT(STDMETHODCALLTYPE * get_RSOPModePlanning) (IGPMConstants * This, GPMRSOPMode * pVal);
	HRESULT(STDMETHODCALLTYPE * get_RSOPModeLogging) (IGPMConstants * This, GPMRSOPMode * pVal);
	HRESULT(STDMETHODCALLTYPE * get_EntryTypeUser) (IGPMConstants * This, GPMEntryType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_EntryTypeComputer) (IGPMConstants * This, GPMEntryType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_EntryTypeLocalGroup) (IGPMConstants * This, GPMEntryType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_EntryTypeGlobalGroup) (IGPMConstants * This, GPMEntryType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_EntryTypeUniversalGroup) (IGPMConstants * This, GPMEntryType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_EntryTypeUNCPath) (IGPMConstants * This, GPMEntryType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_EntryTypeUnknown) (IGPMConstants * This, GPMEntryType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_DestinationOptionSameAsSource) (IGPMConstants * This, GPMDestinationOption * pVal);
	HRESULT(STDMETHODCALLTYPE * get_DestinationOptionNone) (IGPMConstants * This, GPMDestinationOption * pVal);
	HRESULT(STDMETHODCALLTYPE * get_DestinationOptionByRelativeName) (IGPMConstants * This, GPMDestinationOption * pVal);
	HRESULT(STDMETHODCALLTYPE * get_DestinationOptionSet) (IGPMConstants * This, GPMDestinationOption * pVal);
	HRESULT(STDMETHODCALLTYPE * get_MigrationTableOnly) (IGPMConstants * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_ProcessSecurity) (IGPMConstants * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_RsopLoggingNoComputer) (IGPMConstants * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_RsopLoggingNoUser) (IGPMConstants * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_RsopPlanningAssumeSlowLink) (IGPMConstants * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_RsopPlanningLoopbackOption) (IGPMConstants * This, VARIANT_BOOL vbMerge, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_RsopPlanningAssumeUserWQLFilterTrue) (IGPMConstants * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_RsopPlanningAssumeCompWQLFilterTrue) (IGPMConstants * This, long *pVal);
	END_INTERFACE
}  IGPMConstantsVtbl;
interface IGPMConstants
{
	CONST_VTBL struct IGPMConstantsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGPMConstants_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGPMConstants_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGPMConstants_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGPMConstants_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IGPMConstants_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IGPMConstants_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IGPMConstants_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IGPMConstants_get_PermGPOApply(This,pVal)( (This)->lpVtbl -> get_PermGPOApply(This,pVal) )
#define IGPMConstants_get_PermGPORead(This,pVal)( (This)->lpVtbl -> get_PermGPORead(This,pVal) )
#define IGPMConstants_get_PermGPOEdit(This,pVal)( (This)->lpVtbl -> get_PermGPOEdit(This,pVal) )
#define IGPMConstants_get_PermGPOEditSecurityAndDelete(This,pVal)( (This)->lpVtbl -> get_PermGPOEditSecurityAndDelete(This,pVal) )
#define IGPMConstants_get_PermGPOCustom(This,pVal)( (This)->lpVtbl -> get_PermGPOCustom(This,pVal) )
#define IGPMConstants_get_PermWMIFilterEdit(This,pVal)( (This)->lpVtbl -> get_PermWMIFilterEdit(This,pVal) )
#define IGPMConstants_get_PermWMIFilterFullControl(This,pVal)( (This)->lpVtbl -> get_PermWMIFilterFullControl(This,pVal) )
#define IGPMConstants_get_PermWMIFilterCustom(This,pVal)( (This)->lpVtbl -> get_PermWMIFilterCustom(This,pVal) )
#define IGPMConstants_get_PermSOMLink(This,pVal)( (This)->lpVtbl -> get_PermSOMLink(This,pVal) )
#define IGPMConstants_get_PermSOMLogging(This,pVal)( (This)->lpVtbl -> get_PermSOMLogging(This,pVal) )
#define IGPMConstants_get_PermSOMPlanning(This,pVal)( (This)->lpVtbl -> get_PermSOMPlanning(This,pVal) )
#define IGPMConstants_get_PermSOMGPOCreate(This,pVal)( (This)->lpVtbl -> get_PermSOMGPOCreate(This,pVal) )
#define IGPMConstants_get_PermSOMWMICreate(This,pVal)( (This)->lpVtbl -> get_PermSOMWMICreate(This,pVal) )
#define IGPMConstants_get_PermSOMWMIFullControl(This,pVal)( (This)->lpVtbl -> get_PermSOMWMIFullControl(This,pVal) )
#define IGPMConstants_get_SearchPropertyGPOPermissions(This,pVal)( (This)->lpVtbl -> get_SearchPropertyGPOPermissions(This,pVal) )
#define IGPMConstants_get_SearchPropertyGPOEffectivePermissions(This,pVal)( (This)->lpVtbl -> get_SearchPropertyGPOEffectivePermissions(This,pVal) )
#define IGPMConstants_get_SearchPropertyGPODisplayName(This,pVal)( (This)->lpVtbl -> get_SearchPropertyGPODisplayName(This,pVal) )
#define IGPMConstants_get_SearchPropertyGPOWMIFilter(This,pVal)( (This)->lpVtbl -> get_SearchPropertyGPOWMIFilter(This,pVal) )
#define IGPMConstants_get_SearchPropertyGPOID(This,pVal)( (This)->lpVtbl -> get_SearchPropertyGPOID(This,pVal) )
#define IGPMConstants_get_SearchPropertyGPOComputerExtensions(This,pVal)( (This)->lpVtbl -> get_SearchPropertyGPOComputerExtensions(This,pVal) )
#define IGPMConstants_get_SearchPropertyGPOUserExtensions(This,pVal)( (This)->lpVtbl -> get_SearchPropertyGPOUserExtensions(This,pVal) )
#define IGPMConstants_get_SearchPropertySOMLinks(This,pVal)( (This)->lpVtbl -> get_SearchPropertySOMLinks(This,pVal) )
#define IGPMConstants_get_SearchPropertyGPODomain(This,pVal)( (This)->lpVtbl -> get_SearchPropertyGPODomain(This,pVal) )
#define IGPMConstants_get_SearchPropertyBackupMostRecent(This,pVal)( (This)->lpVtbl -> get_SearchPropertyBackupMostRecent(This,pVal) )
#define IGPMConstants_get_SearchOpEquals(This,pVal)( (This)->lpVtbl -> get_SearchOpEquals(This,pVal) )
#define IGPMConstants_get_SearchOpContains(This,pVal)( (This)->lpVtbl -> get_SearchOpContains(This,pVal) )
#define IGPMConstants_get_SearchOpNotContains(This,pVal)( (This)->lpVtbl -> get_SearchOpNotContains(This,pVal) )
#define IGPMConstants_get_SearchOpNotEquals(This,pVal)( (This)->lpVtbl -> get_SearchOpNotEquals(This,pVal) )
#define IGPMConstants_get_UsePDC(This,pVal)( (This)->lpVtbl -> get_UsePDC(This,pVal) )
#define IGPMConstants_get_UseAnyDC(This,pVal)( (This)->lpVtbl -> get_UseAnyDC(This,pVal) )
#define IGPMConstants_get_DoNotUseW2KDC(This,pVal)( (This)->lpVtbl -> get_DoNotUseW2KDC(This,pVal) )
#define IGPMConstants_get_SOMSite(This,pVal)( (This)->lpVtbl -> get_SOMSite(This,pVal) )
#define IGPMConstants_get_SOMDomain(This,pVal)( (This)->lpVtbl -> get_SOMDomain(This,pVal) )
#define IGPMConstants_get_SOMOU(This,pVal)( (This)->lpVtbl -> get_SOMOU(This,pVal) )
#define IGPMConstants_get_SecurityFlags(This,vbOwner,vbGroup,vbDACL,vbSACL,pVal)( (This)->lpVtbl -> get_SecurityFlags(This,vbOwner,vbGroup,vbDACL,vbSACL,pVal) )
#define IGPMConstants_get_DoNotValidateDC(This,pVal)( (This)->lpVtbl -> get_DoNotValidateDC(This,pVal) )
#define IGPMConstants_get_ReportHTML(This,pVal)( (This)->lpVtbl -> get_ReportHTML(This,pVal) )
#define IGPMConstants_get_ReportXML(This,pVal)( (This)->lpVtbl -> get_ReportXML(This,pVal) )
#define IGPMConstants_get_RSOPModeUnknown(This,pVal)( (This)->lpVtbl -> get_RSOPModeUnknown(This,pVal) )
#define IGPMConstants_get_RSOPModePlanning(This,pVal)( (This)->lpVtbl -> get_RSOPModePlanning(This,pVal) )
#define IGPMConstants_get_RSOPModeLogging(This,pVal)( (This)->lpVtbl -> get_RSOPModeLogging(This,pVal) )
#define IGPMConstants_get_EntryTypeUser(This,pVal)( (This)->lpVtbl -> get_EntryTypeUser(This,pVal) )
#define IGPMConstants_get_EntryTypeComputer(This,pVal)( (This)->lpVtbl -> get_EntryTypeComputer(This,pVal) )
#define IGPMConstants_get_EntryTypeLocalGroup(This,pVal)( (This)->lpVtbl -> get_EntryTypeLocalGroup(This,pVal) )
#define IGPMConstants_get_EntryTypeGlobalGroup(This,pVal)( (This)->lpVtbl -> get_EntryTypeGlobalGroup(This,pVal) )
#define IGPMConstants_get_EntryTypeUniversalGroup(This,pVal)( (This)->lpVtbl -> get_EntryTypeUniversalGroup(This,pVal) )
#define IGPMConstants_get_EntryTypeUNCPath(This,pVal)( (This)->lpVtbl -> get_EntryTypeUNCPath(This,pVal) )
#define IGPMConstants_get_EntryTypeUnknown(This,pVal)( (This)->lpVtbl -> get_EntryTypeUnknown(This,pVal) )
#define IGPMConstants_get_DestinationOptionSameAsSource(This,pVal)( (This)->lpVtbl -> get_DestinationOptionSameAsSource(This,pVal) )
#define IGPMConstants_get_DestinationOptionNone(This,pVal)( (This)->lpVtbl -> get_DestinationOptionNone(This,pVal) )
#define IGPMConstants_get_DestinationOptionByRelativeName(This,pVal)( (This)->lpVtbl -> get_DestinationOptionByRelativeName(This,pVal) )
#define IGPMConstants_get_DestinationOptionSet(This,pVal)( (This)->lpVtbl -> get_DestinationOptionSet(This,pVal) )
#define IGPMConstants_get_MigrationTableOnly(This,pVal)( (This)->lpVtbl -> get_MigrationTableOnly(This,pVal) )
#define IGPMConstants_get_ProcessSecurity(This,pVal)( (This)->lpVtbl -> get_ProcessSecurity(This,pVal) )
#define IGPMConstants_get_RsopLoggingNoComputer(This,pVal)( (This)->lpVtbl -> get_RsopLoggingNoComputer(This,pVal) )
#define IGPMConstants_get_RsopLoggingNoUser(This,pVal)( (This)->lpVtbl -> get_RsopLoggingNoUser(This,pVal) )
#define IGPMConstants_get_RsopPlanningAssumeSlowLink(This,pVal)( (This)->lpVtbl -> get_RsopPlanningAssumeSlowLink(This,pVal) )
#define IGPMConstants_get_RsopPlanningLoopbackOption(This,vbMerge,pVal)( (This)->lpVtbl -> get_RsopPlanningLoopbackOption(This,vbMerge,pVal) )
#define IGPMConstants_get_RsopPlanningAssumeUserWQLFilterTrue(This,pVal)( (This)->lpVtbl -> get_RsopPlanningAssumeUserWQLFilterTrue(This,pVal) )
#define IGPMConstants_get_RsopPlanningAssumeCompWQLFilterTrue(This,pVal)( (This)->lpVtbl -> get_RsopPlanningAssumeCompWQLFilterTrue(This,pVal) )
#endif
#endif
#ifndef __IGPMResult_INTERFACE_DEFINED__
#define __IGPMResult_INTERFACE_DEFINED__
extern const IID IID_IGPMResult;
typedef struct IGPMResultVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGPMResult * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGPMResult * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGPMResult * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IGPMResult * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IGPMResult * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IGPMResult * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IGPMResult * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Status) (IGPMResult * This, IGPMStatusMsgCollection ** ppIGPMStatusMsgCollection);
	HRESULT(STDMETHODCALLTYPE * get_Result) (IGPMResult * This, VARIANT * pvarResult);
	HRESULT(STDMETHODCALLTYPE * OverallStatus) (IGPMResult * This);
	END_INTERFACE
}  IGPMResultVtbl;
interface IGPMResult
{
	CONST_VTBL struct IGPMResultVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGPMResult_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGPMResult_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGPMResult_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGPMResult_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IGPMResult_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IGPMResult_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IGPMResult_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IGPMResult_get_Status(This,ppIGPMStatusMsgCollection)( (This)->lpVtbl -> get_Status(This,ppIGPMStatusMsgCollection) )
#define IGPMResult_get_Result(This,pvarResult)( (This)->lpVtbl -> get_Result(This,pvarResult) )
#define IGPMResult_OverallStatus(This)( (This)->lpVtbl -> OverallStatus(This) )
#endif
#endif
#ifndef __IGPMMapEntryCollection_INTERFACE_DEFINED__
#define __IGPMMapEntryCollection_INTERFACE_DEFINED__
extern const IID IID_IGPMMapEntryCollection;
typedef struct IGPMMapEntryCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGPMMapEntryCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGPMMapEntryCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGPMMapEntryCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IGPMMapEntryCollection * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IGPMMapEntryCollection * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IGPMMapEntryCollection * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IGPMMapEntryCollection * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IGPMMapEntryCollection * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IGPMMapEntryCollection * This, long lIndex, VARIANT * pVal);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IGPMMapEntryCollection * This, IEnumVARIANT ** pVal);
	END_INTERFACE
}  IGPMMapEntryCollectionVtbl;
interface IGPMMapEntryCollection
{
	CONST_VTBL struct IGPMMapEntryCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGPMMapEntryCollection_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGPMMapEntryCollection_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGPMMapEntryCollection_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGPMMapEntryCollection_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IGPMMapEntryCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IGPMMapEntryCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IGPMMapEntryCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IGPMMapEntryCollection_get_Count(This,pVal)( (This)->lpVtbl -> get_Count(This,pVal) )
#define IGPMMapEntryCollection_get_Item(This,lIndex,pVal)( (This)->lpVtbl -> get_Item(This,lIndex,pVal) )
#define IGPMMapEntryCollection_get__NewEnum(This,pVal)( (This)->lpVtbl -> get__NewEnum(This,pVal) )
#endif
#endif
#ifndef __IGPMMapEntry_INTERFACE_DEFINED__
#define __IGPMMapEntry_INTERFACE_DEFINED__
extern const IID IID_IGPMMapEntry;
typedef struct IGPMMapEntryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGPMMapEntry * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGPMMapEntry * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGPMMapEntry * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IGPMMapEntry * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IGPMMapEntry * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IGPMMapEntry * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IGPMMapEntry * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Source) (IGPMMapEntry * This, BSTR * pbstrSource);
	HRESULT(STDMETHODCALLTYPE * get_Destination) (IGPMMapEntry * This, BSTR * pbstrDestination);
	HRESULT(STDMETHODCALLTYPE * get_DestinationOption) (IGPMMapEntry * This, GPMDestinationOption * pgpmDestOption);
	HRESULT(STDMETHODCALLTYPE * get_EntryType) (IGPMMapEntry * This, GPMEntryType * pgpmEntryType);
	END_INTERFACE
}  IGPMMapEntryVtbl;
interface IGPMMapEntry
{
	CONST_VTBL struct IGPMMapEntryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGPMMapEntry_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGPMMapEntry_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGPMMapEntry_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGPMMapEntry_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IGPMMapEntry_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IGPMMapEntry_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IGPMMapEntry_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IGPMMapEntry_get_Source(This,pbstrSource)( (This)->lpVtbl -> get_Source(This,pbstrSource) )
#define IGPMMapEntry_get_Destination(This,pbstrDestination)( (This)->lpVtbl -> get_Destination(This,pbstrDestination) )
#define IGPMMapEntry_get_DestinationOption(This,pgpmDestOption)( (This)->lpVtbl -> get_DestinationOption(This,pgpmDestOption) )
#define IGPMMapEntry_get_EntryType(This,pgpmEntryType)( (This)->lpVtbl -> get_EntryType(This,pgpmEntryType) )
#endif
#endif
#ifndef __IGPMMigrationTable_INTERFACE_DEFINED__
#define __IGPMMigrationTable_INTERFACE_DEFINED__
extern const IID IID_IGPMMigrationTable;
typedef struct IGPMMigrationTableVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGPMMigrationTable * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGPMMigrationTable * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGPMMigrationTable * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IGPMMigrationTable * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IGPMMigrationTable * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IGPMMigrationTable * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IGPMMigrationTable * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Save) (IGPMMigrationTable * This, BSTR bstrMigrationTablePath);
	HRESULT(STDMETHODCALLTYPE * Add) (IGPMMigrationTable * This, long lFlags, VARIANT var);
	HRESULT(STDMETHODCALLTYPE * AddEntry) (IGPMMigrationTable * This, BSTR bstrSource, GPMEntryType gpmEntryType, VARIANT * pvarDestination, IGPMMapEntry ** ppEntry);
	HRESULT(STDMETHODCALLTYPE * GetEntry) (IGPMMigrationTable * This, BSTR bstrSource, IGPMMapEntry ** ppEntry);
	HRESULT(STDMETHODCALLTYPE * DeleteEntry) (IGPMMigrationTable * This, BSTR bstrSource);
	HRESULT(STDMETHODCALLTYPE * UpdateDestination) (IGPMMigrationTable * This, BSTR bstrSource, VARIANT * pvarDestination, IGPMMapEntry ** ppEntry);
	HRESULT(STDMETHODCALLTYPE * Validate) (IGPMMigrationTable * This, IGPMResult ** ppResult);
	HRESULT(STDMETHODCALLTYPE * GetEntries) (IGPMMigrationTable * This, IGPMMapEntryCollection ** ppEntries);
	END_INTERFACE
}  IGPMMigrationTableVtbl;
interface IGPMMigrationTable
{
	CONST_VTBL struct IGPMMigrationTableVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGPMMigrationTable_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGPMMigrationTable_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGPMMigrationTable_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGPMMigrationTable_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IGPMMigrationTable_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IGPMMigrationTable_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IGPMMigrationTable_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IGPMMigrationTable_Save(This,bstrMigrationTablePath)( (This)->lpVtbl -> Save(This,bstrMigrationTablePath) )
#define IGPMMigrationTable_Add(This,lFlags,var)( (This)->lpVtbl -> Add(This,lFlags,var) )
#define IGPMMigrationTable_AddEntry(This,bstrSource,gpmEntryType,pvarDestination,ppEntry)( (This)->lpVtbl -> AddEntry(This,bstrSource,gpmEntryType,pvarDestination,ppEntry) )
#define IGPMMigrationTable_GetEntry(This,bstrSource,ppEntry)( (This)->lpVtbl -> GetEntry(This,bstrSource,ppEntry) )
#define IGPMMigrationTable_DeleteEntry(This,bstrSource)( (This)->lpVtbl -> DeleteEntry(This,bstrSource) )
#define IGPMMigrationTable_UpdateDestination(This,bstrSource,pvarDestination,ppEntry)( (This)->lpVtbl -> UpdateDestination(This,bstrSource,pvarDestination,ppEntry) )
#define IGPMMigrationTable_Validate(This,ppResult)( (This)->lpVtbl -> Validate(This,ppResult) )
#define IGPMMigrationTable_GetEntries(This,ppEntries)( (This)->lpVtbl -> GetEntries(This,ppEntries) )
#endif
#endif
typedef enum __MIDL___MIDL_itf_gpmgmt_0000_0030_0001
{
	typeGPO = 0,
	typeStarterGPO = (typeGPO + 1)
} GPMBackupType;
typedef enum __MIDL___MIDL_itf_gpmgmt_0000_0030_0002
{
	typeSystem = 0,
	typeCustom = (typeSystem + 1)
} GPMStarterGPOType;
extern RPC_IF_HANDLE __MIDL_itf_gpmgmt_0000_0030_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_gpmgmt_0000_0030_v0_0_s_ifspec;
#ifndef __IGPMBackupDirEx_INTERFACE_DEFINED__
#define __IGPMBackupDirEx_INTERFACE_DEFINED__
extern const IID IID_IGPMBackupDirEx;
typedef struct IGPMBackupDirExVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGPMBackupDirEx * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGPMBackupDirEx * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGPMBackupDirEx * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IGPMBackupDirEx * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IGPMBackupDirEx * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IGPMBackupDirEx * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IGPMBackupDirEx * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_BackupDir) (IGPMBackupDirEx * This, BSTR * pbstrBackupDir);
	HRESULT(STDMETHODCALLTYPE * get_BackupType) (IGPMBackupDirEx * This, GPMBackupType * pgpmBackupType);
	HRESULT(STDMETHODCALLTYPE * GetBackup) (IGPMBackupDirEx * This, BSTR bstrID, VARIANT * pvarBackup);
	HRESULT(STDMETHODCALLTYPE * SearchBackups) (IGPMBackupDirEx * This, IGPMSearchCriteria * pIGPMSearchCriteria, VARIANT * pvarBackupCollection);
	END_INTERFACE
}  IGPMBackupDirExVtbl;
interface IGPMBackupDirEx
{
	CONST_VTBL struct IGPMBackupDirExVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGPMBackupDirEx_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGPMBackupDirEx_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGPMBackupDirEx_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGPMBackupDirEx_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IGPMBackupDirEx_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IGPMBackupDirEx_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IGPMBackupDirEx_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IGPMBackupDirEx_get_BackupDir(This,pbstrBackupDir)( (This)->lpVtbl -> get_BackupDir(This,pbstrBackupDir) )
#define IGPMBackupDirEx_get_BackupType(This,pgpmBackupType)( (This)->lpVtbl -> get_BackupType(This,pgpmBackupType) )
#define IGPMBackupDirEx_GetBackup(This,bstrID,pvarBackup)( (This)->lpVtbl -> GetBackup(This,bstrID,pvarBackup) )
#define IGPMBackupDirEx_SearchBackups(This,pIGPMSearchCriteria,pvarBackupCollection)( (This)->lpVtbl -> SearchBackups(This,pIGPMSearchCriteria,pvarBackupCollection) )
#endif
#endif
#ifndef __IGPMStarterGPOBackupCollection_INTERFACE_DEFINED__
#define __IGPMStarterGPOBackupCollection_INTERFACE_DEFINED__
extern const IID IID_IGPMStarterGPOBackupCollection;
typedef struct IGPMStarterGPOBackupCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGPMStarterGPOBackupCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGPMStarterGPOBackupCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGPMStarterGPOBackupCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IGPMStarterGPOBackupCollection * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IGPMStarterGPOBackupCollection * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IGPMStarterGPOBackupCollection * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IGPMStarterGPOBackupCollection * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IGPMStarterGPOBackupCollection * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IGPMStarterGPOBackupCollection * This, long lIndex, VARIANT * pVal);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IGPMStarterGPOBackupCollection * This, IEnumVARIANT ** ppIGPMTmplBackup);
	END_INTERFACE
}  IGPMStarterGPOBackupCollectionVtbl;
interface IGPMStarterGPOBackupCollection
{
	CONST_VTBL struct IGPMStarterGPOBackupCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGPMStarterGPOBackupCollection_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGPMStarterGPOBackupCollection_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGPMStarterGPOBackupCollection_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGPMStarterGPOBackupCollection_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IGPMStarterGPOBackupCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IGPMStarterGPOBackupCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IGPMStarterGPOBackupCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IGPMStarterGPOBackupCollection_get_Count(This,pVal)( (This)->lpVtbl -> get_Count(This,pVal) )
#define IGPMStarterGPOBackupCollection_get_Item(This,lIndex,pVal)( (This)->lpVtbl -> get_Item(This,lIndex,pVal) )
#define IGPMStarterGPOBackupCollection_get__NewEnum(This,ppIGPMTmplBackup)( (This)->lpVtbl -> get__NewEnum(This,ppIGPMTmplBackup) )
#endif
#endif
#ifndef __IGPMStarterGPOBackup_INTERFACE_DEFINED__
#define __IGPMStarterGPOBackup_INTERFACE_DEFINED__
extern const IID IID_IGPMStarterGPOBackup;
typedef struct IGPMStarterGPOBackupVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGPMStarterGPOBackup * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGPMStarterGPOBackup * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGPMStarterGPOBackup * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IGPMStarterGPOBackup * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IGPMStarterGPOBackup * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IGPMStarterGPOBackup * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IGPMStarterGPOBackup * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_BackupDir) (IGPMStarterGPOBackup * This, BSTR * pbstrBackupDir);
	HRESULT(STDMETHODCALLTYPE * get_Comment) (IGPMStarterGPOBackup * This, BSTR * pbstrComment);
	HRESULT(STDMETHODCALLTYPE * get_DisplayName) (IGPMStarterGPOBackup * This, BSTR * pbstrDisplayName);
	HRESULT(STDMETHODCALLTYPE * get_Domain) (IGPMStarterGPOBackup * This, BSTR * pbstrTemplateDomain);
	HRESULT(STDMETHODCALLTYPE * get_StarterGPOID) (IGPMStarterGPOBackup * This, BSTR * pbstrTemplateID);
	HRESULT(STDMETHODCALLTYPE * get_ID) (IGPMStarterGPOBackup * This, BSTR * pbstrID);
	HRESULT(STDMETHODCALLTYPE * get_Timestamp) (IGPMStarterGPOBackup * This, DATE * pTimestamp);
	HRESULT(STDMETHODCALLTYPE * get_Type) (IGPMStarterGPOBackup * This, GPMStarterGPOType * pType);
	HRESULT(STDMETHODCALLTYPE * Delete) (IGPMStarterGPOBackup * This);
	HRESULT(STDMETHODCALLTYPE * GenerateReport) (IGPMStarterGPOBackup * This, GPMReportType gpmReportType, VARIANT * pvarGPMProgress, VARIANT * pvarGPMCancel, IGPMResult ** ppIGPMResult);
	HRESULT(STDMETHODCALLTYPE * GenerateReportToFile) (IGPMStarterGPOBackup * This, GPMReportType gpmReportType, BSTR bstrTargetFilePath, IGPMResult ** ppIGPMResult);
	END_INTERFACE
}  IGPMStarterGPOBackupVtbl;
interface IGPMStarterGPOBackup
{
	CONST_VTBL struct IGPMStarterGPOBackupVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGPMStarterGPOBackup_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGPMStarterGPOBackup_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGPMStarterGPOBackup_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGPMStarterGPOBackup_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IGPMStarterGPOBackup_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IGPMStarterGPOBackup_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IGPMStarterGPOBackup_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IGPMStarterGPOBackup_get_BackupDir(This,pbstrBackupDir)( (This)->lpVtbl -> get_BackupDir(This,pbstrBackupDir) )
#define IGPMStarterGPOBackup_get_Comment(This,pbstrComment)( (This)->lpVtbl -> get_Comment(This,pbstrComment) )
#define IGPMStarterGPOBackup_get_DisplayName(This,pbstrDisplayName)( (This)->lpVtbl -> get_DisplayName(This,pbstrDisplayName) )
#define IGPMStarterGPOBackup_get_Domain(This,pbstrTemplateDomain)( (This)->lpVtbl -> get_Domain(This,pbstrTemplateDomain) )
#define IGPMStarterGPOBackup_get_StarterGPOID(This,pbstrTemplateID)( (This)->lpVtbl -> get_StarterGPOID(This,pbstrTemplateID) )
#define IGPMStarterGPOBackup_get_ID(This,pbstrID)( (This)->lpVtbl -> get_ID(This,pbstrID) )
#define IGPMStarterGPOBackup_get_Timestamp(This,pTimestamp)( (This)->lpVtbl -> get_Timestamp(This,pTimestamp) )
#define IGPMStarterGPOBackup_get_Type(This,pType)( (This)->lpVtbl -> get_Type(This,pType) )
#define IGPMStarterGPOBackup_Delete(This)( (This)->lpVtbl -> Delete(This) )
#define IGPMStarterGPOBackup_GenerateReport(This,gpmReportType,pvarGPMProgress,pvarGPMCancel,ppIGPMResult)( (This)->lpVtbl -> GenerateReport(This,gpmReportType,pvarGPMProgress,pvarGPMCancel,ppIGPMResult) )
#define IGPMStarterGPOBackup_GenerateReportToFile(This,gpmReportType,bstrTargetFilePath,ppIGPMResult)( (This)->lpVtbl -> GenerateReportToFile(This,gpmReportType,bstrTargetFilePath,ppIGPMResult) )
#endif
#endif
#ifndef __IGPM2_INTERFACE_DEFINED__
#define __IGPM2_INTERFACE_DEFINED__
extern const IID IID_IGPM2;
typedef struct IGPM2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGPM2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGPM2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGPM2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IGPM2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IGPM2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IGPM2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IGPM2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * GetDomain) (IGPM2 * This, BSTR bstrDomain, BSTR bstrDomainController, long lDCFlags, IGPMDomain ** pIGPMDomain);
	HRESULT(STDMETHODCALLTYPE * GetBackupDir) (IGPM2 * This, BSTR bstrBackupDir, IGPMBackupDir ** pIGPMBackupDir);
	HRESULT(STDMETHODCALLTYPE * GetSitesContainer) (IGPM2 * This, BSTR bstrForest, BSTR bstrDomain, BSTR bstrDomainController, long lDCFlags, IGPMSitesContainer ** ppIGPMSitesContainer);
	HRESULT(STDMETHODCALLTYPE * GetRSOP) (IGPM2 * This, GPMRSOPMode gpmRSoPMode, BSTR bstrNamespace, long lFlags, IGPMRSOP ** ppIGPMRSOP);
	HRESULT(STDMETHODCALLTYPE * CreatePermission) (IGPM2 * This, BSTR bstrTrustee, GPMPermissionType perm, VARIANT_BOOL bInheritable, IGPMPermission ** ppPerm);
	HRESULT(STDMETHODCALLTYPE * CreateSearchCriteria) (IGPM2 * This, IGPMSearchCriteria ** ppIGPMSearchCriteria);
	HRESULT(STDMETHODCALLTYPE * CreateTrustee) (IGPM2 * This, BSTR bstrTrustee, IGPMTrustee ** ppIGPMTrustee);
	HRESULT(STDMETHODCALLTYPE * GetClientSideExtensions) (IGPM2 * This, IGPMCSECollection ** ppIGPMCSECollection);
	HRESULT(STDMETHODCALLTYPE * GetConstants) (IGPM2 * This, IGPMConstants ** ppIGPMConstants);
	HRESULT(STDMETHODCALLTYPE * GetMigrationTable) (IGPM2 * This, BSTR bstrMigrationTablePath, IGPMMigrationTable ** ppMigrationTable);
	HRESULT(STDMETHODCALLTYPE * CreateMigrationTable) (IGPM2 * This, IGPMMigrationTable ** ppMigrationTable);
	HRESULT(STDMETHODCALLTYPE * InitializeReporting) (IGPM2 * This, BSTR bstrAdmPath);
	HRESULT(STDMETHODCALLTYPE * GetBackupDirEx) (IGPM2 * This, BSTR bstrBackupDir, GPMBackupType backupDirType, IGPMBackupDirEx ** ppIGPMBackupDirEx);
	HRESULT(STDMETHODCALLTYPE * InitializeReportingEx) (IGPM2 * This, BSTR bstrAdmPath, LONG reportingOptions);
	END_INTERFACE
}  IGPM2Vtbl;
interface IGPM2
{
	CONST_VTBL struct IGPM2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGPM2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGPM2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGPM2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGPM2_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IGPM2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IGPM2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IGPM2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IGPM2_GetDomain(This,bstrDomain,bstrDomainController,lDCFlags,pIGPMDomain)( (This)->lpVtbl -> GetDomain(This,bstrDomain,bstrDomainController,lDCFlags,pIGPMDomain) )
#define IGPM2_GetBackupDir(This,bstrBackupDir,pIGPMBackupDir)( (This)->lpVtbl -> GetBackupDir(This,bstrBackupDir,pIGPMBackupDir) )
#define IGPM2_GetSitesContainer(This,bstrForest,bstrDomain,bstrDomainController,lDCFlags,ppIGPMSitesContainer)( (This)->lpVtbl -> GetSitesContainer(This,bstrForest,bstrDomain,bstrDomainController,lDCFlags,ppIGPMSitesContainer) )
#define IGPM2_GetRSOP(This,gpmRSoPMode,bstrNamespace,lFlags,ppIGPMRSOP)( (This)->lpVtbl -> GetRSOP(This,gpmRSoPMode,bstrNamespace,lFlags,ppIGPMRSOP) )
#define IGPM2_CreatePermission(This,bstrTrustee,perm,bInheritable,ppPerm)( (This)->lpVtbl -> CreatePermission(This,bstrTrustee,perm,bInheritable,ppPerm) )
#define IGPM2_CreateSearchCriteria(This,ppIGPMSearchCriteria)( (This)->lpVtbl -> CreateSearchCriteria(This,ppIGPMSearchCriteria) )
#define IGPM2_CreateTrustee(This,bstrTrustee,ppIGPMTrustee)( (This)->lpVtbl -> CreateTrustee(This,bstrTrustee,ppIGPMTrustee) )
#define IGPM2_GetClientSideExtensions(This,ppIGPMCSECollection)( (This)->lpVtbl -> GetClientSideExtensions(This,ppIGPMCSECollection) )
#define IGPM2_GetConstants(This,ppIGPMConstants)( (This)->lpVtbl -> GetConstants(This,ppIGPMConstants) )
#define IGPM2_GetMigrationTable(This,bstrMigrationTablePath,ppMigrationTable)( (This)->lpVtbl -> GetMigrationTable(This,bstrMigrationTablePath,ppMigrationTable) )
#define IGPM2_CreateMigrationTable(This,ppMigrationTable)( (This)->lpVtbl -> CreateMigrationTable(This,ppMigrationTable) )
#define IGPM2_InitializeReporting(This,bstrAdmPath)( (This)->lpVtbl -> InitializeReporting(This,bstrAdmPath) )
#define IGPM2_GetBackupDirEx(This,bstrBackupDir,backupDirType,ppIGPMBackupDirEx)( (This)->lpVtbl -> GetBackupDirEx(This,bstrBackupDir,backupDirType,ppIGPMBackupDirEx) )
#define IGPM2_InitializeReportingEx(This,bstrAdmPath,reportingOptions)( (This)->lpVtbl -> InitializeReportingEx(This,bstrAdmPath,reportingOptions) )
#endif
#endif
#ifndef __IGPMStarterGPO_INTERFACE_DEFINED__
#define __IGPMStarterGPO_INTERFACE_DEFINED__
extern const IID IID_IGPMStarterGPO;
typedef struct IGPMStarterGPOVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGPMStarterGPO * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGPMStarterGPO * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGPMStarterGPO * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IGPMStarterGPO * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IGPMStarterGPO * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IGPMStarterGPO * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IGPMStarterGPO * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_DisplayName) (IGPMStarterGPO * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * put_DisplayName) (IGPMStarterGPO * This, BSTR newVal);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IGPMStarterGPO * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * put_Description) (IGPMStarterGPO * This, BSTR newVal);
	HRESULT(STDMETHODCALLTYPE * get_Author) (IGPMStarterGPO * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_Product) (IGPMStarterGPO * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_CreationTime) (IGPMStarterGPO * This, DATE * pVal);
	HRESULT(STDMETHODCALLTYPE * get_ID) (IGPMStarterGPO * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_ModifiedTime) (IGPMStarterGPO * This, DATE * pVal);
	HRESULT(STDMETHODCALLTYPE * get_Type) (IGPMStarterGPO * This, GPMStarterGPOType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_ComputerVersion) (IGPMStarterGPO * This, USHORT * pVal);
	HRESULT(STDMETHODCALLTYPE * get_UserVersion) (IGPMStarterGPO * This, USHORT * pVal);
	HRESULT(STDMETHODCALLTYPE * get_StarterGPOVersion) (IGPMStarterGPO * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * Delete) (IGPMStarterGPO * This);
	HRESULT(STDMETHODCALLTYPE * Save) (IGPMStarterGPO * This, BSTR bstrSaveFile, VARIANT_BOOL bOverwrite, VARIANT_BOOL bSaveAsSystem, VARIANT * bstrLanguage, VARIANT * bstrAuthor, VARIANT * bstrProduct, VARIANT * bstrUniqueID, VARIANT * bstrVersion, VARIANT * pvarGPMProgress, VARIANT * pvarGPMCancel, IGPMResult ** ppIGPMResult);
	HRESULT(STDMETHODCALLTYPE * Backup) (IGPMStarterGPO * This, BSTR bstrBackupDir, BSTR bstrComment, VARIANT * pvarGPMProgress, VARIANT * pvarGPMCancel, IGPMResult ** ppIGPMResult);
	HRESULT(STDMETHODCALLTYPE * CopyTo) (IGPMStarterGPO * This, VARIANT * pvarNewDisplayName, VARIANT * pvarGPMProgress, VARIANT * pvarGPMCancel, IGPMResult ** ppIGPMResult);
	HRESULT(STDMETHODCALLTYPE * GenerateReport) (IGPMStarterGPO * This, GPMReportType gpmReportType, VARIANT * pvarGPMProgress, VARIANT * pvarGPMCancel, IGPMResult ** ppIGPMResult);
	HRESULT(STDMETHODCALLTYPE * GenerateReportToFile) (IGPMStarterGPO * This, GPMReportType gpmReportType, BSTR bstrTargetFilePath, IGPMResult ** ppIGPMResult);
	HRESULT(STDMETHODCALLTYPE * GetSecurityInfo) (IGPMStarterGPO * This, IGPMSecurityInfo ** ppSecurityInfo);
	HRESULT(STDMETHODCALLTYPE * SetSecurityInfo) (IGPMStarterGPO * This, IGPMSecurityInfo * pSecurityInfo);
	END_INTERFACE
}  IGPMStarterGPOVtbl;
interface IGPMStarterGPO
{
	CONST_VTBL struct IGPMStarterGPOVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGPMStarterGPO_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGPMStarterGPO_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGPMStarterGPO_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGPMStarterGPO_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IGPMStarterGPO_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IGPMStarterGPO_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IGPMStarterGPO_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IGPMStarterGPO_get_DisplayName(This,pVal)( (This)->lpVtbl -> get_DisplayName(This,pVal) )
#define IGPMStarterGPO_put_DisplayName(This,newVal)( (This)->lpVtbl -> put_DisplayName(This,newVal) )
#define IGPMStarterGPO_get_Description(This,pVal)( (This)->lpVtbl -> get_Description(This,pVal) )
#define IGPMStarterGPO_put_Description(This,newVal)( (This)->lpVtbl -> put_Description(This,newVal) )
#define IGPMStarterGPO_get_Author(This,pVal)( (This)->lpVtbl -> get_Author(This,pVal) )
#define IGPMStarterGPO_get_Product(This,pVal)( (This)->lpVtbl -> get_Product(This,pVal) )
#define IGPMStarterGPO_get_CreationTime(This,pVal)( (This)->lpVtbl -> get_CreationTime(This,pVal) )
#define IGPMStarterGPO_get_ID(This,pVal)( (This)->lpVtbl -> get_ID(This,pVal) )
#define IGPMStarterGPO_get_ModifiedTime(This,pVal)( (This)->lpVtbl -> get_ModifiedTime(This,pVal) )
#define IGPMStarterGPO_get_Type(This,pVal)( (This)->lpVtbl -> get_Type(This,pVal) )
#define IGPMStarterGPO_get_ComputerVersion(This,pVal)( (This)->lpVtbl -> get_ComputerVersion(This,pVal) )
#define IGPMStarterGPO_get_UserVersion(This,pVal)( (This)->lpVtbl -> get_UserVersion(This,pVal) )
#define IGPMStarterGPO_get_StarterGPOVersion(This,pVal)( (This)->lpVtbl -> get_StarterGPOVersion(This,pVal) )
#define IGPMStarterGPO_Delete(This)( (This)->lpVtbl -> Delete(This) )
#define IGPMStarterGPO_Save(This,bstrSaveFile,bOverwrite,bSaveAsSystem,bstrLanguage,bstrAuthor,bstrProduct,bstrUniqueID,bstrVersion,pvarGPMProgress,pvarGPMCancel,ppIGPMResult)( (This)->lpVtbl -> Save(This,bstrSaveFile,bOverwrite,bSaveAsSystem,bstrLanguage,bstrAuthor,bstrProduct,bstrUniqueID,bstrVersion,pvarGPMProgress,pvarGPMCancel,ppIGPMResult) )
#define IGPMStarterGPO_Backup(This,bstrBackupDir,bstrComment,pvarGPMProgress,pvarGPMCancel,ppIGPMResult)( (This)->lpVtbl -> Backup(This,bstrBackupDir,bstrComment,pvarGPMProgress,pvarGPMCancel,ppIGPMResult) )
#define IGPMStarterGPO_CopyTo(This,pvarNewDisplayName,pvarGPMProgress,pvarGPMCancel,ppIGPMResult)( (This)->lpVtbl -> CopyTo(This,pvarNewDisplayName,pvarGPMProgress,pvarGPMCancel,ppIGPMResult) )
#define IGPMStarterGPO_GenerateReport(This,gpmReportType,pvarGPMProgress,pvarGPMCancel,ppIGPMResult)( (This)->lpVtbl -> GenerateReport(This,gpmReportType,pvarGPMProgress,pvarGPMCancel,ppIGPMResult) )
#define IGPMStarterGPO_GenerateReportToFile(This,gpmReportType,bstrTargetFilePath,ppIGPMResult)( (This)->lpVtbl -> GenerateReportToFile(This,gpmReportType,bstrTargetFilePath,ppIGPMResult) )
#define IGPMStarterGPO_GetSecurityInfo(This,ppSecurityInfo)( (This)->lpVtbl -> GetSecurityInfo(This,ppSecurityInfo) )
#define IGPMStarterGPO_SetSecurityInfo(This,pSecurityInfo)( (This)->lpVtbl -> SetSecurityInfo(This,pSecurityInfo) )
#endif
#endif
#ifndef __IGPMStarterGPOCollection_INTERFACE_DEFINED__
#define __IGPMStarterGPOCollection_INTERFACE_DEFINED__
extern const IID IID_IGPMStarterGPOCollection;
typedef struct IGPMStarterGPOCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGPMStarterGPOCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGPMStarterGPOCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGPMStarterGPOCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IGPMStarterGPOCollection * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IGPMStarterGPOCollection * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IGPMStarterGPOCollection * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IGPMStarterGPOCollection * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Count) (IGPMStarterGPOCollection * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_Item) (IGPMStarterGPOCollection * This, long lIndex, VARIANT * pVal);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (IGPMStarterGPOCollection * This, IEnumVARIANT ** ppIGPMTemplates);
	END_INTERFACE
}  IGPMStarterGPOCollectionVtbl;
interface IGPMStarterGPOCollection
{
	CONST_VTBL struct IGPMStarterGPOCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGPMStarterGPOCollection_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGPMStarterGPOCollection_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGPMStarterGPOCollection_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGPMStarterGPOCollection_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IGPMStarterGPOCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IGPMStarterGPOCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IGPMStarterGPOCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IGPMStarterGPOCollection_get_Count(This,pVal)( (This)->lpVtbl -> get_Count(This,pVal) )
#define IGPMStarterGPOCollection_get_Item(This,lIndex,pVal)( (This)->lpVtbl -> get_Item(This,lIndex,pVal) )
#define IGPMStarterGPOCollection_get__NewEnum(This,ppIGPMTemplates)( (This)->lpVtbl -> get__NewEnum(This,ppIGPMTemplates) )
#endif
#endif
#ifndef __IGPMDomain2_INTERFACE_DEFINED__
#define __IGPMDomain2_INTERFACE_DEFINED__
extern const IID IID_IGPMDomain2;
typedef struct IGPMDomain2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGPMDomain2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGPMDomain2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGPMDomain2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IGPMDomain2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IGPMDomain2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IGPMDomain2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IGPMDomain2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_DomainController) (IGPMDomain2 * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_Domain) (IGPMDomain2 * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * CreateGPO) (IGPMDomain2 * This, IGPMGPO ** ppNewGPO);
	HRESULT(STDMETHODCALLTYPE * GetGPO) (IGPMDomain2 * This, BSTR bstrGuid, IGPMGPO ** ppGPO);
	HRESULT(STDMETHODCALLTYPE * SearchGPOs) (IGPMDomain2 * This, IGPMSearchCriteria * pIGPMSearchCriteria, IGPMGPOCollection ** ppIGPMGPOCollection);
	HRESULT(STDMETHODCALLTYPE * RestoreGPO) (IGPMDomain2 * This, IGPMBackup * pIGPMBackup, long lDCFlags, VARIANT * pvarGPMProgress, VARIANT * pvarGPMCancel, IGPMResult ** ppIGPMResult);
	HRESULT(STDMETHODCALLTYPE * GetSOM) (IGPMDomain2 * This, BSTR bstrPath, IGPMSOM ** ppSOM);
	HRESULT(STDMETHODCALLTYPE * SearchSOMs) (IGPMDomain2 * This, IGPMSearchCriteria * pIGPMSearchCriteria, IGPMSOMCollection ** ppIGPMSOMCollection);
	HRESULT(STDMETHODCALLTYPE * GetWMIFilter) (IGPMDomain2 * This, BSTR bstrPath, IGPMWMIFilter ** ppWMIFilter);
	HRESULT(STDMETHODCALLTYPE * SearchWMIFilters) (IGPMDomain2 * This, IGPMSearchCriteria * pIGPMSearchCriteria, IGPMWMIFilterCollection ** ppIGPMWMIFilterCollection);
	HRESULT(STDMETHODCALLTYPE * CreateStarterGPO) (IGPMDomain2 * This, IGPMStarterGPO ** ppnewTemplate);
	HRESULT(STDMETHODCALLTYPE * CreateGPOFromStarterGPO) (IGPMDomain2 * This, IGPMStarterGPO * pGPOTemplate, IGPMGPO ** ppnewGPO);
	HRESULT(STDMETHODCALLTYPE * GetStarterGPO) (IGPMDomain2 * This, BSTR bstrGuid, IGPMStarterGPO ** ppTemplate);
	HRESULT(STDMETHODCALLTYPE * SearchStarterGPOs) (IGPMDomain2 * This, IGPMSearchCriteria * pIGPMSearchCriteria, IGPMStarterGPOCollection ** ppIGPMTemplateCollection);
	HRESULT(STDMETHODCALLTYPE * LoadStarterGPO) (IGPMDomain2 * This, BSTR bstrLoadFile, VARIANT_BOOL bOverwrite, VARIANT * pvarGPMProgress, VARIANT * pvarGPMCancel, IGPMResult ** ppIGPMResult);
	HRESULT(STDMETHODCALLTYPE * RestoreStarterGPO) (IGPMDomain2 * This, IGPMStarterGPOBackup * pIGPMTmplBackup, VARIANT * pvarGPMProgress, VARIANT * pvarGPMCancel, IGPMResult ** ppIGPMResult);
	END_INTERFACE
}  IGPMDomain2Vtbl;
interface IGPMDomain2
{
	CONST_VTBL struct IGPMDomain2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGPMDomain2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGPMDomain2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGPMDomain2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGPMDomain2_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IGPMDomain2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IGPMDomain2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IGPMDomain2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IGPMDomain2_get_DomainController(This,pVal)( (This)->lpVtbl -> get_DomainController(This,pVal) )
#define IGPMDomain2_get_Domain(This,pVal)( (This)->lpVtbl -> get_Domain(This,pVal) )
#define IGPMDomain2_CreateGPO(This,ppNewGPO)( (This)->lpVtbl -> CreateGPO(This,ppNewGPO) )
#define IGPMDomain2_GetGPO(This,bstrGuid,ppGPO)( (This)->lpVtbl -> GetGPO(This,bstrGuid,ppGPO) )
#define IGPMDomain2_SearchGPOs(This,pIGPMSearchCriteria,ppIGPMGPOCollection)( (This)->lpVtbl -> SearchGPOs(This,pIGPMSearchCriteria,ppIGPMGPOCollection) )
#define IGPMDomain2_RestoreGPO(This,pIGPMBackup,lDCFlags,pvarGPMProgress,pvarGPMCancel,ppIGPMResult)( (This)->lpVtbl -> RestoreGPO(This,pIGPMBackup,lDCFlags,pvarGPMProgress,pvarGPMCancel,ppIGPMResult) )
#define IGPMDomain2_GetSOM(This,bstrPath,ppSOM)( (This)->lpVtbl -> GetSOM(This,bstrPath,ppSOM) )
#define IGPMDomain2_SearchSOMs(This,pIGPMSearchCriteria,ppIGPMSOMCollection)( (This)->lpVtbl -> SearchSOMs(This,pIGPMSearchCriteria,ppIGPMSOMCollection) )
#define IGPMDomain2_GetWMIFilter(This,bstrPath,ppWMIFilter)( (This)->lpVtbl -> GetWMIFilter(This,bstrPath,ppWMIFilter) )
#define IGPMDomain2_SearchWMIFilters(This,pIGPMSearchCriteria,ppIGPMWMIFilterCollection)( (This)->lpVtbl -> SearchWMIFilters(This,pIGPMSearchCriteria,ppIGPMWMIFilterCollection) )
#define IGPMDomain2_CreateStarterGPO(This,ppnewTemplate)( (This)->lpVtbl -> CreateStarterGPO(This,ppnewTemplate) )
#define IGPMDomain2_CreateGPOFromStarterGPO(This,pGPOTemplate,ppnewGPO)( (This)->lpVtbl -> CreateGPOFromStarterGPO(This,pGPOTemplate,ppnewGPO) )
#define IGPMDomain2_GetStarterGPO(This,bstrGuid,ppTemplate)( (This)->lpVtbl -> GetStarterGPO(This,bstrGuid,ppTemplate) )
#define IGPMDomain2_SearchStarterGPOs(This,pIGPMSearchCriteria,ppIGPMTemplateCollection)( (This)->lpVtbl -> SearchStarterGPOs(This,pIGPMSearchCriteria,ppIGPMTemplateCollection) )
#define IGPMDomain2_LoadStarterGPO(This,bstrLoadFile,bOverwrite,pvarGPMProgress,pvarGPMCancel,ppIGPMResult)( (This)->lpVtbl -> LoadStarterGPO(This,bstrLoadFile,bOverwrite,pvarGPMProgress,pvarGPMCancel,ppIGPMResult) )
#define IGPMDomain2_RestoreStarterGPO(This,pIGPMTmplBackup,pvarGPMProgress,pvarGPMCancel,ppIGPMResult)( (This)->lpVtbl -> RestoreStarterGPO(This,pIGPMTmplBackup,pvarGPMProgress,pvarGPMCancel,ppIGPMResult) )
#endif
#endif
#ifndef __IGPMConstants2_INTERFACE_DEFINED__
#define __IGPMConstants2_INTERFACE_DEFINED__
extern const IID IID_IGPMConstants2;
typedef struct IGPMConstants2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGPMConstants2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGPMConstants2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGPMConstants2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IGPMConstants2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IGPMConstants2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IGPMConstants2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IGPMConstants2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_PermGPOApply) (IGPMConstants2 * This, GPMPermissionType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_PermGPORead) (IGPMConstants2 * This, GPMPermissionType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_PermGPOEdit) (IGPMConstants2 * This, GPMPermissionType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_PermGPOEditSecurityAndDelete) (IGPMConstants2 * This, GPMPermissionType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_PermGPOCustom) (IGPMConstants2 * This, GPMPermissionType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_PermWMIFilterEdit) (IGPMConstants2 * This, GPMPermissionType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_PermWMIFilterFullControl) (IGPMConstants2 * This, GPMPermissionType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_PermWMIFilterCustom) (IGPMConstants2 * This, GPMPermissionType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_PermSOMLink) (IGPMConstants2 * This, GPMPermissionType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_PermSOMLogging) (IGPMConstants2 * This, GPMPermissionType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_PermSOMPlanning) (IGPMConstants2 * This, GPMPermissionType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_PermSOMGPOCreate) (IGPMConstants2 * This, GPMPermissionType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_PermSOMWMICreate) (IGPMConstants2 * This, GPMPermissionType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_PermSOMWMIFullControl) (IGPMConstants2 * This, GPMPermissionType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_SearchPropertyGPOPermissions) (IGPMConstants2 * This, GPMSearchProperty * pVal);
	HRESULT(STDMETHODCALLTYPE * get_SearchPropertyGPOEffectivePermissions) (IGPMConstants2 * This, GPMSearchProperty * pVal);
	HRESULT(STDMETHODCALLTYPE * get_SearchPropertyGPODisplayName) (IGPMConstants2 * This, GPMSearchProperty * pVal);
	HRESULT(STDMETHODCALLTYPE * get_SearchPropertyGPOWMIFilter) (IGPMConstants2 * This, GPMSearchProperty * pVal);
	HRESULT(STDMETHODCALLTYPE * get_SearchPropertyGPOID) (IGPMConstants2 * This, GPMSearchProperty * pVal);
	HRESULT(STDMETHODCALLTYPE * get_SearchPropertyGPOComputerExtensions) (IGPMConstants2 * This, GPMSearchProperty * pVal);
	HRESULT(STDMETHODCALLTYPE * get_SearchPropertyGPOUserExtensions) (IGPMConstants2 * This, GPMSearchProperty * pVal);
	HRESULT(STDMETHODCALLTYPE * get_SearchPropertySOMLinks) (IGPMConstants2 * This, GPMSearchProperty * pVal);
	HRESULT(STDMETHODCALLTYPE * get_SearchPropertyGPODomain) (IGPMConstants2 * This, GPMSearchProperty * pVal);
	HRESULT(STDMETHODCALLTYPE * get_SearchPropertyBackupMostRecent) (IGPMConstants2 * This, GPMSearchProperty * pVal);
	HRESULT(STDMETHODCALLTYPE * get_SearchOpEquals) (IGPMConstants2 * This, GPMSearchOperation * pVal);
	HRESULT(STDMETHODCALLTYPE * get_SearchOpContains) (IGPMConstants2 * This, GPMSearchOperation * pVal);
	HRESULT(STDMETHODCALLTYPE * get_SearchOpNotContains) (IGPMConstants2 * This, GPMSearchOperation * pVal);
	HRESULT(STDMETHODCALLTYPE * get_SearchOpNotEquals) (IGPMConstants2 * This, GPMSearchOperation * pVal);
	HRESULT(STDMETHODCALLTYPE * get_UsePDC) (IGPMConstants2 * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_UseAnyDC) (IGPMConstants2 * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_DoNotUseW2KDC) (IGPMConstants2 * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_SOMSite) (IGPMConstants2 * This, GPMSOMType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_SOMDomain) (IGPMConstants2 * This, GPMSOMType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_SOMOU) (IGPMConstants2 * This, GPMSOMType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_SecurityFlags) (IGPMConstants2 * This, VARIANT_BOOL vbOwner, VARIANT_BOOL vbGroup, VARIANT_BOOL vbDACL, VARIANT_BOOL vbSACL, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_DoNotValidateDC) (IGPMConstants2 * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_ReportHTML) (IGPMConstants2 * This, GPMReportType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_ReportXML) (IGPMConstants2 * This, GPMReportType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_RSOPModeUnknown) (IGPMConstants2 * This, GPMRSOPMode * pVal);
	HRESULT(STDMETHODCALLTYPE * get_RSOPModePlanning) (IGPMConstants2 * This, GPMRSOPMode * pVal);
	HRESULT(STDMETHODCALLTYPE * get_RSOPModeLogging) (IGPMConstants2 * This, GPMRSOPMode * pVal);
	HRESULT(STDMETHODCALLTYPE * get_EntryTypeUser) (IGPMConstants2 * This, GPMEntryType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_EntryTypeComputer) (IGPMConstants2 * This, GPMEntryType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_EntryTypeLocalGroup) (IGPMConstants2 * This, GPMEntryType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_EntryTypeGlobalGroup) (IGPMConstants2 * This, GPMEntryType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_EntryTypeUniversalGroup) (IGPMConstants2 * This, GPMEntryType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_EntryTypeUNCPath) (IGPMConstants2 * This, GPMEntryType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_EntryTypeUnknown) (IGPMConstants2 * This, GPMEntryType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_DestinationOptionSameAsSource) (IGPMConstants2 * This, GPMDestinationOption * pVal);
	HRESULT(STDMETHODCALLTYPE * get_DestinationOptionNone) (IGPMConstants2 * This, GPMDestinationOption * pVal);
	HRESULT(STDMETHODCALLTYPE * get_DestinationOptionByRelativeName) (IGPMConstants2 * This, GPMDestinationOption * pVal);
	HRESULT(STDMETHODCALLTYPE * get_DestinationOptionSet) (IGPMConstants2 * This, GPMDestinationOption * pVal);
	HRESULT(STDMETHODCALLTYPE * get_MigrationTableOnly) (IGPMConstants2 * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_ProcessSecurity) (IGPMConstants2 * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_RsopLoggingNoComputer) (IGPMConstants2 * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_RsopLoggingNoUser) (IGPMConstants2 * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_RsopPlanningAssumeSlowLink) (IGPMConstants2 * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_RsopPlanningLoopbackOption) (IGPMConstants2 * This, VARIANT_BOOL vbMerge, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_RsopPlanningAssumeUserWQLFilterTrue) (IGPMConstants2 * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_RsopPlanningAssumeCompWQLFilterTrue) (IGPMConstants2 * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_BackupTypeGPO) (IGPMConstants2 * This, GPMBackupType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_BackupTypeStarterGPO) (IGPMConstants2 * This, GPMBackupType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_StarterGPOTypeSystem) (IGPMConstants2 * This, GPMStarterGPOType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_StarterGPOTypeCustom) (IGPMConstants2 * This, GPMStarterGPOType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_SearchPropertyStarterGPOPermissions) (IGPMConstants2 * This, GPMSearchProperty * pVal);
	HRESULT(STDMETHODCALLTYPE * get_SearchPropertyStarterGPOEffectivePermissions) (IGPMConstants2 * This, GPMSearchProperty * pVal);
	HRESULT(STDMETHODCALLTYPE * get_SearchPropertyStarterGPODisplayName) (IGPMConstants2 * This, GPMSearchProperty * pVal);
	HRESULT(STDMETHODCALLTYPE * get_SearchPropertyStarterGPOID) (IGPMConstants2 * This, GPMSearchProperty * pVal);
	HRESULT(STDMETHODCALLTYPE * get_SearchPropertyStarterGPODomain) (IGPMConstants2 * This, GPMSearchProperty * pVal);
	HRESULT(STDMETHODCALLTYPE * get_PermStarterGPORead) (IGPMConstants2 * This, GPMPermissionType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_PermStarterGPOEdit) (IGPMConstants2 * This, GPMPermissionType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_PermStarterGPOFullControl) (IGPMConstants2 * This, GPMPermissionType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_PermStarterGPOCustom) (IGPMConstants2 * This, GPMPermissionType * pVal);
	HRESULT(STDMETHODCALLTYPE * get_ReportLegacy) (IGPMConstants2 * This, GPMReportingOptions * pVal);
	HRESULT(STDMETHODCALLTYPE * get_ReportComments) (IGPMConstants2 * This, GPMReportingOptions * pVal);
	END_INTERFACE
}  IGPMConstants2Vtbl;
interface IGPMConstants2
{
	CONST_VTBL struct IGPMConstants2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGPMConstants2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGPMConstants2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGPMConstants2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGPMConstants2_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IGPMConstants2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IGPMConstants2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IGPMConstants2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IGPMConstants2_get_PermGPOApply(This,pVal)( (This)->lpVtbl -> get_PermGPOApply(This,pVal) )
#define IGPMConstants2_get_PermGPORead(This,pVal)( (This)->lpVtbl -> get_PermGPORead(This,pVal) )
#define IGPMConstants2_get_PermGPOEdit(This,pVal)( (This)->lpVtbl -> get_PermGPOEdit(This,pVal) )
#define IGPMConstants2_get_PermGPOEditSecurityAndDelete(This,pVal)( (This)->lpVtbl -> get_PermGPOEditSecurityAndDelete(This,pVal) )
#define IGPMConstants2_get_PermGPOCustom(This,pVal)( (This)->lpVtbl -> get_PermGPOCustom(This,pVal) )
#define IGPMConstants2_get_PermWMIFilterEdit(This,pVal)( (This)->lpVtbl -> get_PermWMIFilterEdit(This,pVal) )
#define IGPMConstants2_get_PermWMIFilterFullControl(This,pVal)( (This)->lpVtbl -> get_PermWMIFilterFullControl(This,pVal) )
#define IGPMConstants2_get_PermWMIFilterCustom(This,pVal)( (This)->lpVtbl -> get_PermWMIFilterCustom(This,pVal) )
#define IGPMConstants2_get_PermSOMLink(This,pVal)( (This)->lpVtbl -> get_PermSOMLink(This,pVal) )
#define IGPMConstants2_get_PermSOMLogging(This,pVal)( (This)->lpVtbl -> get_PermSOMLogging(This,pVal) )
#define IGPMConstants2_get_PermSOMPlanning(This,pVal)( (This)->lpVtbl -> get_PermSOMPlanning(This,pVal) )
#define IGPMConstants2_get_PermSOMGPOCreate(This,pVal)( (This)->lpVtbl -> get_PermSOMGPOCreate(This,pVal) )
#define IGPMConstants2_get_PermSOMWMICreate(This,pVal)( (This)->lpVtbl -> get_PermSOMWMICreate(This,pVal) )
#define IGPMConstants2_get_PermSOMWMIFullControl(This,pVal)( (This)->lpVtbl -> get_PermSOMWMIFullControl(This,pVal) )
#define IGPMConstants2_get_SearchPropertyGPOPermissions(This,pVal)( (This)->lpVtbl -> get_SearchPropertyGPOPermissions(This,pVal) )
#define IGPMConstants2_get_SearchPropertyGPOEffectivePermissions(This,pVal)( (This)->lpVtbl -> get_SearchPropertyGPOEffectivePermissions(This,pVal) )
#define IGPMConstants2_get_SearchPropertyGPODisplayName(This,pVal)( (This)->lpVtbl -> get_SearchPropertyGPODisplayName(This,pVal) )
#define IGPMConstants2_get_SearchPropertyGPOWMIFilter(This,pVal)( (This)->lpVtbl -> get_SearchPropertyGPOWMIFilter(This,pVal) )
#define IGPMConstants2_get_SearchPropertyGPOID(This,pVal)( (This)->lpVtbl -> get_SearchPropertyGPOID(This,pVal) )
#define IGPMConstants2_get_SearchPropertyGPOComputerExtensions(This,pVal)( (This)->lpVtbl -> get_SearchPropertyGPOComputerExtensions(This,pVal) )
#define IGPMConstants2_get_SearchPropertyGPOUserExtensions(This,pVal)( (This)->lpVtbl -> get_SearchPropertyGPOUserExtensions(This,pVal) )
#define IGPMConstants2_get_SearchPropertySOMLinks(This,pVal)( (This)->lpVtbl -> get_SearchPropertySOMLinks(This,pVal) )
#define IGPMConstants2_get_SearchPropertyGPODomain(This,pVal)( (This)->lpVtbl -> get_SearchPropertyGPODomain(This,pVal) )
#define IGPMConstants2_get_SearchPropertyBackupMostRecent(This,pVal)( (This)->lpVtbl -> get_SearchPropertyBackupMostRecent(This,pVal) )
#define IGPMConstants2_get_SearchOpEquals(This,pVal)( (This)->lpVtbl -> get_SearchOpEquals(This,pVal) )
#define IGPMConstants2_get_SearchOpContains(This,pVal)( (This)->lpVtbl -> get_SearchOpContains(This,pVal) )
#define IGPMConstants2_get_SearchOpNotContains(This,pVal)( (This)->lpVtbl -> get_SearchOpNotContains(This,pVal) )
#define IGPMConstants2_get_SearchOpNotEquals(This,pVal)( (This)->lpVtbl -> get_SearchOpNotEquals(This,pVal) )
#define IGPMConstants2_get_UsePDC(This,pVal)( (This)->lpVtbl -> get_UsePDC(This,pVal) )
#define IGPMConstants2_get_UseAnyDC(This,pVal)( (This)->lpVtbl -> get_UseAnyDC(This,pVal) )
#define IGPMConstants2_get_DoNotUseW2KDC(This,pVal)( (This)->lpVtbl -> get_DoNotUseW2KDC(This,pVal) )
#define IGPMConstants2_get_SOMSite(This,pVal)( (This)->lpVtbl -> get_SOMSite(This,pVal) )
#define IGPMConstants2_get_SOMDomain(This,pVal)( (This)->lpVtbl -> get_SOMDomain(This,pVal) )
#define IGPMConstants2_get_SOMOU(This,pVal)( (This)->lpVtbl -> get_SOMOU(This,pVal) )
#define IGPMConstants2_get_SecurityFlags(This,vbOwner,vbGroup,vbDACL,vbSACL,pVal)( (This)->lpVtbl -> get_SecurityFlags(This,vbOwner,vbGroup,vbDACL,vbSACL,pVal) )
#define IGPMConstants2_get_DoNotValidateDC(This,pVal)( (This)->lpVtbl -> get_DoNotValidateDC(This,pVal) )
#define IGPMConstants2_get_ReportHTML(This,pVal)( (This)->lpVtbl -> get_ReportHTML(This,pVal) )
#define IGPMConstants2_get_ReportXML(This,pVal)( (This)->lpVtbl -> get_ReportXML(This,pVal) )
#define IGPMConstants2_get_RSOPModeUnknown(This,pVal)( (This)->lpVtbl -> get_RSOPModeUnknown(This,pVal) )
#define IGPMConstants2_get_RSOPModePlanning(This,pVal)( (This)->lpVtbl -> get_RSOPModePlanning(This,pVal) )
#define IGPMConstants2_get_RSOPModeLogging(This,pVal)( (This)->lpVtbl -> get_RSOPModeLogging(This,pVal) )
#define IGPMConstants2_get_EntryTypeUser(This,pVal)( (This)->lpVtbl -> get_EntryTypeUser(This,pVal) )
#define IGPMConstants2_get_EntryTypeComputer(This,pVal)( (This)->lpVtbl -> get_EntryTypeComputer(This,pVal) )
#define IGPMConstants2_get_EntryTypeLocalGroup(This,pVal)( (This)->lpVtbl -> get_EntryTypeLocalGroup(This,pVal) )
#define IGPMConstants2_get_EntryTypeGlobalGroup(This,pVal)( (This)->lpVtbl -> get_EntryTypeGlobalGroup(This,pVal) )
#define IGPMConstants2_get_EntryTypeUniversalGroup(This,pVal)( (This)->lpVtbl -> get_EntryTypeUniversalGroup(This,pVal) )
#define IGPMConstants2_get_EntryTypeUNCPath(This,pVal)( (This)->lpVtbl -> get_EntryTypeUNCPath(This,pVal) )
#define IGPMConstants2_get_EntryTypeUnknown(This,pVal)( (This)->lpVtbl -> get_EntryTypeUnknown(This,pVal) )
#define IGPMConstants2_get_DestinationOptionSameAsSource(This,pVal)( (This)->lpVtbl -> get_DestinationOptionSameAsSource(This,pVal) )
#define IGPMConstants2_get_DestinationOptionNone(This,pVal)( (This)->lpVtbl -> get_DestinationOptionNone(This,pVal) )
#define IGPMConstants2_get_DestinationOptionByRelativeName(This,pVal)( (This)->lpVtbl -> get_DestinationOptionByRelativeName(This,pVal) )
#define IGPMConstants2_get_DestinationOptionSet(This,pVal)( (This)->lpVtbl -> get_DestinationOptionSet(This,pVal) )
#define IGPMConstants2_get_MigrationTableOnly(This,pVal)( (This)->lpVtbl -> get_MigrationTableOnly(This,pVal) )
#define IGPMConstants2_get_ProcessSecurity(This,pVal)( (This)->lpVtbl -> get_ProcessSecurity(This,pVal) )
#define IGPMConstants2_get_RsopLoggingNoComputer(This,pVal)( (This)->lpVtbl -> get_RsopLoggingNoComputer(This,pVal) )
#define IGPMConstants2_get_RsopLoggingNoUser(This,pVal)( (This)->lpVtbl -> get_RsopLoggingNoUser(This,pVal) )
#define IGPMConstants2_get_RsopPlanningAssumeSlowLink(This,pVal)( (This)->lpVtbl -> get_RsopPlanningAssumeSlowLink(This,pVal) )
#define IGPMConstants2_get_RsopPlanningLoopbackOption(This,vbMerge,pVal)( (This)->lpVtbl -> get_RsopPlanningLoopbackOption(This,vbMerge,pVal) )
#define IGPMConstants2_get_RsopPlanningAssumeUserWQLFilterTrue(This,pVal)( (This)->lpVtbl -> get_RsopPlanningAssumeUserWQLFilterTrue(This,pVal) )
#define IGPMConstants2_get_RsopPlanningAssumeCompWQLFilterTrue(This,pVal)( (This)->lpVtbl -> get_RsopPlanningAssumeCompWQLFilterTrue(This,pVal) )
#define IGPMConstants2_get_BackupTypeGPO(This,pVal)( (This)->lpVtbl -> get_BackupTypeGPO(This,pVal) )
#define IGPMConstants2_get_BackupTypeStarterGPO(This,pVal)( (This)->lpVtbl -> get_BackupTypeStarterGPO(This,pVal) )
#define IGPMConstants2_get_StarterGPOTypeSystem(This,pVal)( (This)->lpVtbl -> get_StarterGPOTypeSystem(This,pVal) )
#define IGPMConstants2_get_StarterGPOTypeCustom(This,pVal)( (This)->lpVtbl -> get_StarterGPOTypeCustom(This,pVal) )
#define IGPMConstants2_get_SearchPropertyStarterGPOPermissions(This,pVal)( (This)->lpVtbl -> get_SearchPropertyStarterGPOPermissions(This,pVal) )
#define IGPMConstants2_get_SearchPropertyStarterGPOEffectivePermissions(This,pVal)( (This)->lpVtbl -> get_SearchPropertyStarterGPOEffectivePermissions(This,pVal) )
#define IGPMConstants2_get_SearchPropertyStarterGPODisplayName(This,pVal)( (This)->lpVtbl -> get_SearchPropertyStarterGPODisplayName(This,pVal) )
#define IGPMConstants2_get_SearchPropertyStarterGPOID(This,pVal)( (This)->lpVtbl -> get_SearchPropertyStarterGPOID(This,pVal) )
#define IGPMConstants2_get_SearchPropertyStarterGPODomain(This,pVal)( (This)->lpVtbl -> get_SearchPropertyStarterGPODomain(This,pVal) )
#define IGPMConstants2_get_PermStarterGPORead(This,pVal)( (This)->lpVtbl -> get_PermStarterGPORead(This,pVal) )
#define IGPMConstants2_get_PermStarterGPOEdit(This,pVal)( (This)->lpVtbl -> get_PermStarterGPOEdit(This,pVal) )
#define IGPMConstants2_get_PermStarterGPOFullControl(This,pVal)( (This)->lpVtbl -> get_PermStarterGPOFullControl(This,pVal) )
#define IGPMConstants2_get_PermStarterGPOCustom(This,pVal)( (This)->lpVtbl -> get_PermStarterGPOCustom(This,pVal) )
#define IGPMConstants2_get_ReportLegacy(This,pVal)( (This)->lpVtbl -> get_ReportLegacy(This,pVal) )
#define IGPMConstants2_get_ReportComments(This,pVal)( (This)->lpVtbl -> get_ReportComments(This,pVal) )
#endif
#endif
#ifndef __IGPMGPO2_INTERFACE_DEFINED__
#define __IGPMGPO2_INTERFACE_DEFINED__
extern const IID IID_IGPMGPO2;
typedef struct IGPMGPO2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGPMGPO2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGPMGPO2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGPMGPO2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IGPMGPO2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IGPMGPO2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IGPMGPO2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IGPMGPO2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_DisplayName) (IGPMGPO2 * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * put_DisplayName) (IGPMGPO2 * This, BSTR newVal);
	HRESULT(STDMETHODCALLTYPE * get_Path) (IGPMGPO2 * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_ID) (IGPMGPO2 * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_DomainName) (IGPMGPO2 * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * get_CreationTime) (IGPMGPO2 * This, DATE * pDate);
	HRESULT(STDMETHODCALLTYPE * get_ModificationTime) (IGPMGPO2 * This, DATE * pDate);
	HRESULT(STDMETHODCALLTYPE * get_UserDSVersionNumber) (IGPMGPO2 * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_ComputerDSVersionNumber) (IGPMGPO2 * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_UserSysvolVersionNumber) (IGPMGPO2 * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * get_ComputerSysvolVersionNumber) (IGPMGPO2 * This, long *pVal);
	HRESULT(STDMETHODCALLTYPE * GetWMIFilter) (IGPMGPO2 * This, IGPMWMIFilter ** ppIGPMWMIFilter);
	HRESULT(STDMETHODCALLTYPE * SetWMIFilter) (IGPMGPO2 * This, IGPMWMIFilter * pIGPMWMIFilter);
	HRESULT(STDMETHODCALLTYPE * SetUserEnabled) (IGPMGPO2 * This, VARIANT_BOOL vbEnabled);
	HRESULT(STDMETHODCALLTYPE * SetComputerEnabled) (IGPMGPO2 * This, VARIANT_BOOL vbEnabled);
	HRESULT(STDMETHODCALLTYPE * IsUserEnabled) (IGPMGPO2 * This, VARIANT_BOOL * pvbEnabled);
	HRESULT(STDMETHODCALLTYPE * IsComputerEnabled) (IGPMGPO2 * This, VARIANT_BOOL * pvbEnabled);
	HRESULT(STDMETHODCALLTYPE * GetSecurityInfo) (IGPMGPO2 * This, IGPMSecurityInfo ** ppSecurityInfo);
	HRESULT(STDMETHODCALLTYPE * SetSecurityInfo) (IGPMGPO2 * This, IGPMSecurityInfo * pSecurityInfo);
	HRESULT(STDMETHODCALLTYPE * Delete) (IGPMGPO2 * This);
	HRESULT(STDMETHODCALLTYPE * Backup) (IGPMGPO2 * This, BSTR bstrBackupDir, BSTR bstrComment, VARIANT * pvarGPMProgress, VARIANT * pvarGPMCancel, IGPMResult ** ppIGPMResult);
	HRESULT(STDMETHODCALLTYPE * Import) (IGPMGPO2 * This, long lFlags, IGPMBackup * pIGPMBackup, VARIANT * pvarMigrationTable, VARIANT * pvarGPMProgress, VARIANT * pvarGPMCancel, IGPMResult ** ppIGPMResult);
	HRESULT(STDMETHODCALLTYPE * GenerateReport) (IGPMGPO2 * This, GPMReportType gpmReportType, VARIANT * pvarGPMProgress, VARIANT * pvarGPMCancel, IGPMResult ** ppIGPMResult);
	HRESULT(STDMETHODCALLTYPE * GenerateReportToFile) (IGPMGPO2 * This, GPMReportType gpmReportType, BSTR bstrTargetFilePath, IGPMResult ** ppIGPMResult);
	HRESULT(STDMETHODCALLTYPE * CopyTo) (IGPMGPO2 * This, long lFlags, IGPMDomain * pIGPMDomain, VARIANT * pvarNewDisplayName, VARIANT * pvarMigrationTable, VARIANT * pvarGPMProgress, VARIANT * pvarGPMCancel, IGPMResult ** ppIGPMResult);
	HRESULT(STDMETHODCALLTYPE * SetSecurityDescriptor) (IGPMGPO2 * This, long lFlags, IDispatch * pSD);
	HRESULT(STDMETHODCALLTYPE * GetSecurityDescriptor) (IGPMGPO2 * This, long lFlags, IDispatch ** ppSD);
	HRESULT(STDMETHODCALLTYPE * IsACLConsistent) (IGPMGPO2 * This, VARIANT_BOOL * pvbConsistent);
	HRESULT(STDMETHODCALLTYPE * MakeACLConsistent) (IGPMGPO2 * This);
	HRESULT(STDMETHODCALLTYPE * get_Description) (IGPMGPO2 * This, BSTR * pVal);
	HRESULT(STDMETHODCALLTYPE * put_Description) (IGPMGPO2 * This, BSTR newVal);
	END_INTERFACE
}  IGPMGPO2Vtbl;
interface IGPMGPO2
{
	CONST_VTBL struct IGPMGPO2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGPMGPO2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGPMGPO2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IGPMGPO2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IGPMGPO2_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IGPMGPO2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IGPMGPO2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IGPMGPO2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define IGPMGPO2_get_DisplayName(This,pVal)( (This)->lpVtbl -> get_DisplayName(This,pVal) )
#define IGPMGPO2_put_DisplayName(This,newVal)( (This)->lpVtbl -> put_DisplayName(This,newVal) )
#define IGPMGPO2_get_Path(This,pVal)( (This)->lpVtbl -> get_Path(This,pVal) )
#define IGPMGPO2_get_ID(This,pVal)( (This)->lpVtbl -> get_ID(This,pVal) )
#define IGPMGPO2_get_DomainName(This,pVal)( (This)->lpVtbl -> get_DomainName(This,pVal) )
#define IGPMGPO2_get_CreationTime(This,pDate)( (This)->lpVtbl -> get_CreationTime(This,pDate) )
#define IGPMGPO2_get_ModificationTime(This,pDate)( (This)->lpVtbl -> get_ModificationTime(This,pDate) )
#define IGPMGPO2_get_UserDSVersionNumber(This,pVal)( (This)->lpVtbl -> get_UserDSVersionNumber(This,pVal) )
#define IGPMGPO2_get_ComputerDSVersionNumber(This,pVal)( (This)->lpVtbl -> get_ComputerDSVersionNumber(This,pVal) )
#define IGPMGPO2_get_UserSysvolVersionNumber(This,pVal)( (This)->lpVtbl -> get_UserSysvolVersionNumber(This,pVal) )
#define IGPMGPO2_get_ComputerSysvolVersionNumber(This,pVal)( (This)->lpVtbl -> get_ComputerSysvolVersionNumber(This,pVal) )
#define IGPMGPO2_GetWMIFilter(This,ppIGPMWMIFilter)( (This)->lpVtbl -> GetWMIFilter(This,ppIGPMWMIFilter) )
#define IGPMGPO2_SetWMIFilter(This,pIGPMWMIFilter)( (This)->lpVtbl -> SetWMIFilter(This,pIGPMWMIFilter) )
#define IGPMGPO2_SetUserEnabled(This,vbEnabled)( (This)->lpVtbl -> SetUserEnabled(This,vbEnabled) )
#define IGPMGPO2_SetComputerEnabled(This,vbEnabled)( (This)->lpVtbl -> SetComputerEnabled(This,vbEnabled) )
#define IGPMGPO2_IsUserEnabled(This,pvbEnabled)( (This)->lpVtbl -> IsUserEnabled(This,pvbEnabled) )
#define IGPMGPO2_IsComputerEnabled(This,pvbEnabled)( (This)->lpVtbl -> IsComputerEnabled(This,pvbEnabled) )
#define IGPMGPO2_GetSecurityInfo(This,ppSecurityInfo)( (This)->lpVtbl -> GetSecurityInfo(This,ppSecurityInfo) )
#define IGPMGPO2_SetSecurityInfo(This,pSecurityInfo)( (This)->lpVtbl -> SetSecurityInfo(This,pSecurityInfo) )
#define IGPMGPO2_Delete(This)( (This)->lpVtbl -> Delete(This) )
#define IGPMGPO2_Backup(This,bstrBackupDir,bstrComment,pvarGPMProgress,pvarGPMCancel,ppIGPMResult)( (This)->lpVtbl -> Backup(This,bstrBackupDir,bstrComment,pvarGPMProgress,pvarGPMCancel,ppIGPMResult) )
#define IGPMGPO2_Import(This,lFlags,pIGPMBackup,pvarMigrationTable,pvarGPMProgress,pvarGPMCancel,ppIGPMResult)( (This)->lpVtbl -> Import(This,lFlags,pIGPMBackup,pvarMigrationTable,pvarGPMProgress,pvarGPMCancel,ppIGPMResult) )
#define IGPMGPO2_GenerateReport(This,gpmReportType,pvarGPMProgress,pvarGPMCancel,ppIGPMResult)( (This)->lpVtbl -> GenerateReport(This,gpmReportType,pvarGPMProgress,pvarGPMCancel,ppIGPMResult) )
#define IGPMGPO2_GenerateReportToFile(This,gpmReportType,bstrTargetFilePath,ppIGPMResult)( (This)->lpVtbl -> GenerateReportToFile(This,gpmReportType,bstrTargetFilePath,ppIGPMResult) )
#define IGPMGPO2_CopyTo(This,lFlags,pIGPMDomain,pvarNewDisplayName,pvarMigrationTable,pvarGPMProgress,pvarGPMCancel,ppIGPMResult)( (This)->lpVtbl -> CopyTo(This,lFlags,pIGPMDomain,pvarNewDisplayName,pvarMigrationTable,pvarGPMProgress,pvarGPMCancel,ppIGPMResult) )
#define IGPMGPO2_SetSecurityDescriptor(This,lFlags,pSD)( (This)->lpVtbl -> SetSecurityDescriptor(This,lFlags,pSD) )
#define IGPMGPO2_GetSecurityDescriptor(This,lFlags,ppSD)( (This)->lpVtbl -> GetSecurityDescriptor(This,lFlags,ppSD) )
#define IGPMGPO2_IsACLConsistent(This,pvbConsistent)( (This)->lpVtbl -> IsACLConsistent(This,pvbConsistent) )
#define IGPMGPO2_MakeACLConsistent(This)( (This)->lpVtbl -> MakeACLConsistent(This) )
#define IGPMGPO2_get_Description(This,pVal)( (This)->lpVtbl -> get_Description(This,pVal) )
#define IGPMGPO2_put_Description(This,newVal)( (This)->lpVtbl -> put_Description(This,newVal) )
#endif
#endif
#ifndef __GPMGMTLib_LIBRARY_DEFINED__
#define __GPMGMTLib_LIBRARY_DEFINED__
extern const IID LIBID_GPMGMTLib;
extern const CLSID CLSID_GPM;
extern const CLSID CLSID_GPMDomain;
extern const CLSID CLSID_GPMSitesContainer;
extern const CLSID CLSID_GPMBackupDir;
extern const CLSID CLSID_GPMSOM;
extern const CLSID CLSID_GPMSearchCriteria;
extern const CLSID CLSID_GPMPermission;
extern const CLSID CLSID_GPMSecurityInfo;
extern const CLSID CLSID_GPMBackup;
extern const CLSID CLSID_GPMBackupCollection;
extern const CLSID CLSID_GPMSOMCollection;
extern const CLSID CLSID_GPMWMIFilter;
extern const CLSID CLSID_GPMWMIFilterCollection;
extern const CLSID CLSID_GPMRSOP;
extern const CLSID CLSID_GPMGPO;
extern const CLSID CLSID_GPMGPOCollection;
extern const CLSID CLSID_GPMGPOLink;
extern const CLSID CLSID_GPMGPOLinksCollection;
extern const CLSID CLSID_GPMAsyncCancel;
extern const CLSID CLSID_GPMStatusMsgCollection;
extern const CLSID CLSID_GPMStatusMessage;
extern const CLSID CLSID_GPMTrustee;
extern const CLSID CLSID_GPMClientSideExtension;
extern const CLSID CLSID_GPMCSECollection;
extern const CLSID CLSID_GPMConstants;
extern const CLSID CLSID_GPMResult;
extern const CLSID CLSID_GPMMapEntryCollection;
extern const CLSID CLSID_GPMMapEntry;
extern const CLSID CLSID_GPMMigrationTable;
extern const CLSID CLSID_GPMBackupDirEx;
extern const CLSID CLSID_GPMStarterGPOBackupCollection;
extern const CLSID CLSID_GPMStarterGPOBackup;
extern const CLSID CLSID_GPMTemplate;
extern const CLSID CLSID_GPMStarterGPOCollection;
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
