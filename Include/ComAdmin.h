/*+@@file@@----------------------------------------------------------------*//*!
 \file		ComAdmin.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul  3 20:10:28 2016
 \date		Modified on Sun Jul  3 20:10:28 2016
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
#ifndef __comadmin_h__
#define __comadmin_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ICOMAdminCatalog_FWD_DEFINED__
#define __ICOMAdminCatalog_FWD_DEFINED__
typedef interface ICOMAdminCatalog ICOMAdminCatalog;
#endif
#ifndef __ICOMAdminCatalog2_FWD_DEFINED__
#define __ICOMAdminCatalog2_FWD_DEFINED__
typedef interface ICOMAdminCatalog2 ICOMAdminCatalog2;
#endif
#ifndef __ICatalogObject_FWD_DEFINED__
#define __ICatalogObject_FWD_DEFINED__
typedef interface ICatalogObject ICatalogObject;
#endif
#ifndef __ICatalogCollection_FWD_DEFINED__
#define __ICatalogCollection_FWD_DEFINED__
typedef interface ICatalogCollection ICatalogCollection;
#endif
#ifndef __COMAdminCatalog_FWD_DEFINED__
#define __COMAdminCatalog_FWD_DEFINED__
typedef struct COMAdminCatalog COMAdminCatalog;
#endif
#ifndef __COMAdminCatalogObject_FWD_DEFINED__
#define __COMAdminCatalogObject_FWD_DEFINED__
typedef struct COMAdminCatalogObject COMAdminCatalogObject;
#endif
#ifndef __COMAdminCatalogCollection_FWD_DEFINED__
#define __COMAdminCatalogCollection_FWD_DEFINED__
typedef struct COMAdminCatalogCollection COMAdminCatalogCollection;
#endif
#include <unknwn.h>
#include <oaidl.h>
#include <objbase.h>
#ifndef DECLSPEC_UUID
#define DECLSPEC_UUID(x)
#endif
extern RPC_IF_HANDLE __MIDL_itf_comadmin_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_comadmin_0000_0000_v0_0_s_ifspec;
#ifndef __ICOMAdminCatalog_INTERFACE_DEFINED__
#define __ICOMAdminCatalog_INTERFACE_DEFINED__
extern const IID IID_ICOMAdminCatalog;
typedef struct ICOMAdminCatalogVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICOMAdminCatalog * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICOMAdminCatalog * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICOMAdminCatalog * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICOMAdminCatalog * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICOMAdminCatalog * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICOMAdminCatalog * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICOMAdminCatalog * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * GetCollection) (ICOMAdminCatalog * This, BSTR bstrCollName, IDispatch ** ppCatalogCollection);
	HRESULT(STDMETHODCALLTYPE * Connect) (ICOMAdminCatalog * This, BSTR bstrCatalogServerName, IDispatch ** ppCatalogCollection);
	HRESULT(STDMETHODCALLTYPE * get_MajorVersion) (ICOMAdminCatalog * This, long *plMajorVersion);
	HRESULT(STDMETHODCALLTYPE * get_MinorVersion) (ICOMAdminCatalog * This, long *plMinorVersion);
	HRESULT(STDMETHODCALLTYPE * GetCollectionByQuery) (ICOMAdminCatalog * This, BSTR bstrCollName, SAFEARRAY * *ppsaVarQuery, IDispatch ** ppCatalogCollection);
	HRESULT(STDMETHODCALLTYPE * ImportComponent) (ICOMAdminCatalog * This, BSTR bstrApplIDOrName, BSTR bstrCLSIDOrProgID);
	HRESULT(STDMETHODCALLTYPE * InstallComponent) (ICOMAdminCatalog * This, BSTR bstrApplIDOrName, BSTR bstrDLL, BSTR bstrTLB, BSTR bstrPSDLL);
	HRESULT(STDMETHODCALLTYPE * ShutdownApplication) (ICOMAdminCatalog * This, BSTR bstrApplIDOrName);
	HRESULT(STDMETHODCALLTYPE * ExportApplication) (ICOMAdminCatalog * This, BSTR bstrApplIDOrName, BSTR bstrApplicationFile, long lOptions);
	HRESULT(STDMETHODCALLTYPE * InstallApplication) (ICOMAdminCatalog * This, BSTR bstrApplicationFile, BSTR bstrDestinationDirectory, long lOptions, BSTR bstrUserId, BSTR bstrPassword, BSTR bstrRSN);
	HRESULT(STDMETHODCALLTYPE * StopRouter) (ICOMAdminCatalog * This);
	HRESULT(STDMETHODCALLTYPE * RefreshRouter) (ICOMAdminCatalog * This);
	HRESULT(STDMETHODCALLTYPE * StartRouter) (ICOMAdminCatalog * This);
	HRESULT(STDMETHODCALLTYPE * Reserved1) (ICOMAdminCatalog * This);
	HRESULT(STDMETHODCALLTYPE * Reserved2) (ICOMAdminCatalog * This);
	HRESULT(STDMETHODCALLTYPE * InstallMultipleComponents) (ICOMAdminCatalog * This, BSTR bstrApplIDOrName, SAFEARRAY * *ppsaVarFileNames, SAFEARRAY * *ppsaVarCLSIDs);
	HRESULT(STDMETHODCALLTYPE * GetMultipleComponentsInfo) (ICOMAdminCatalog * This, BSTR bstrApplIdOrName, SAFEARRAY * *ppsaVarFileNames, SAFEARRAY * *ppsaVarCLSIDs, SAFEARRAY * *ppsaVarClassNames, SAFEARRAY * *ppsaVarFileFlags, SAFEARRAY * *ppsaVarComponentFlags);
	HRESULT(STDMETHODCALLTYPE * RefreshComponents) (ICOMAdminCatalog * This);
	HRESULT(STDMETHODCALLTYPE * BackupREGDB) (ICOMAdminCatalog * This, BSTR bstrBackupFilePath);
	HRESULT(STDMETHODCALLTYPE * RestoreREGDB) (ICOMAdminCatalog * This, BSTR bstrBackupFilePath);
	HRESULT(STDMETHODCALLTYPE * QueryApplicationFile) (ICOMAdminCatalog * This, BSTR bstrApplicationFile, BSTR * pbstrApplicationName, BSTR * pbstrApplicationDescription, VARIANT_BOOL * pbHasUsers, VARIANT_BOOL * pbIsProxy, SAFEARRAY * *ppsaVarFileNames);
	HRESULT(STDMETHODCALLTYPE * StartApplication) (ICOMAdminCatalog * This, BSTR bstrApplIdOrName);
	HRESULT(STDMETHODCALLTYPE * ServiceCheck) (ICOMAdminCatalog * This, long lService, long *plStatus);
	HRESULT(STDMETHODCALLTYPE * InstallMultipleEventClasses) (ICOMAdminCatalog * This, BSTR bstrApplIdOrName, SAFEARRAY * *ppsaVarFileNames, SAFEARRAY * *ppsaVarCLSIDS);
	HRESULT(STDMETHODCALLTYPE * InstallEventClass) (ICOMAdminCatalog * This, BSTR bstrApplIdOrName, BSTR bstrDLL, BSTR bstrTLB, BSTR bstrPSDLL);
	HRESULT(STDMETHODCALLTYPE * GetEventClassesForIID) (ICOMAdminCatalog * This, BSTR bstrIID, SAFEARRAY * *ppsaVarCLSIDs, SAFEARRAY * *ppsaVarProgIDs, SAFEARRAY * *ppsaVarDescriptions);
	END_INTERFACE
}  ICOMAdminCatalogVtbl;
interface ICOMAdminCatalog
{
	CONST_VTBL struct ICOMAdminCatalogVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICOMAdminCatalog_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICOMAdminCatalog_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICOMAdminCatalog_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICOMAdminCatalog_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICOMAdminCatalog_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICOMAdminCatalog_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICOMAdminCatalog_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICOMAdminCatalog_GetCollection(This,bstrCollName,ppCatalogCollection)( (This)->lpVtbl -> GetCollection(This,bstrCollName,ppCatalogCollection) )
#define ICOMAdminCatalog_Connect(This,bstrCatalogServerName,ppCatalogCollection)( (This)->lpVtbl -> Connect(This,bstrCatalogServerName,ppCatalogCollection) )
#define ICOMAdminCatalog_get_MajorVersion(This,plMajorVersion)( (This)->lpVtbl -> get_MajorVersion(This,plMajorVersion) )
#define ICOMAdminCatalog_get_MinorVersion(This,plMinorVersion)( (This)->lpVtbl -> get_MinorVersion(This,plMinorVersion) )
#define ICOMAdminCatalog_GetCollectionByQuery(This,bstrCollName,ppsaVarQuery,ppCatalogCollection)( (This)->lpVtbl -> GetCollectionByQuery(This,bstrCollName,ppsaVarQuery,ppCatalogCollection) )
#define ICOMAdminCatalog_ImportComponent(This,bstrApplIDOrName,bstrCLSIDOrProgID)( (This)->lpVtbl -> ImportComponent(This,bstrApplIDOrName,bstrCLSIDOrProgID) )
#define ICOMAdminCatalog_InstallComponent(This,bstrApplIDOrName,bstrDLL,bstrTLB,bstrPSDLL)( (This)->lpVtbl -> InstallComponent(This,bstrApplIDOrName,bstrDLL,bstrTLB,bstrPSDLL) )
#define ICOMAdminCatalog_ShutdownApplication(This,bstrApplIDOrName)( (This)->lpVtbl -> ShutdownApplication(This,bstrApplIDOrName) )
#define ICOMAdminCatalog_ExportApplication(This,bstrApplIDOrName,bstrApplicationFile,lOptions)( (This)->lpVtbl -> ExportApplication(This,bstrApplIDOrName,bstrApplicationFile,lOptions) )
#define ICOMAdminCatalog_InstallApplication(This,bstrApplicationFile,bstrDestinationDirectory,lOptions,bstrUserId,bstrPassword,bstrRSN)( (This)->lpVtbl -> InstallApplication(This,bstrApplicationFile,bstrDestinationDirectory,lOptions,bstrUserId,bstrPassword,bstrRSN) )
#define ICOMAdminCatalog_StopRouter(This)( (This)->lpVtbl -> StopRouter(This) )
#define ICOMAdminCatalog_RefreshRouter(This)( (This)->lpVtbl -> RefreshRouter(This) )
#define ICOMAdminCatalog_StartRouter(This)( (This)->lpVtbl -> StartRouter(This) )
#define ICOMAdminCatalog_Reserved1(This)( (This)->lpVtbl -> Reserved1(This) )
#define ICOMAdminCatalog_Reserved2(This)( (This)->lpVtbl -> Reserved2(This) )
#define ICOMAdminCatalog_InstallMultipleComponents(This,bstrApplIDOrName,ppsaVarFileNames,ppsaVarCLSIDs)( (This)->lpVtbl -> InstallMultipleComponents(This,bstrApplIDOrName,ppsaVarFileNames,ppsaVarCLSIDs) )
#define ICOMAdminCatalog_GetMultipleComponentsInfo(This,bstrApplIdOrName,ppsaVarFileNames,ppsaVarCLSIDs,ppsaVarClassNames,ppsaVarFileFlags,ppsaVarComponentFlags)( (This)->lpVtbl -> GetMultipleComponentsInfo(This,bstrApplIdOrName,ppsaVarFileNames,ppsaVarCLSIDs,ppsaVarClassNames,ppsaVarFileFlags,ppsaVarComponentFlags) )
#define ICOMAdminCatalog_RefreshComponents(This)( (This)->lpVtbl -> RefreshComponents(This) )
#define ICOMAdminCatalog_BackupREGDB(This,bstrBackupFilePath)( (This)->lpVtbl -> BackupREGDB(This,bstrBackupFilePath) )
#define ICOMAdminCatalog_RestoreREGDB(This,bstrBackupFilePath)( (This)->lpVtbl -> RestoreREGDB(This,bstrBackupFilePath) )
#define ICOMAdminCatalog_QueryApplicationFile(This,bstrApplicationFile,pbstrApplicationName,pbstrApplicationDescription,pbHasUsers,pbIsProxy,ppsaVarFileNames)( (This)->lpVtbl -> QueryApplicationFile(This,bstrApplicationFile,pbstrApplicationName,pbstrApplicationDescription,pbHasUsers,pbIsProxy,ppsaVarFileNames) )
#define ICOMAdminCatalog_StartApplication(This,bstrApplIdOrName)( (This)->lpVtbl -> StartApplication(This,bstrApplIdOrName) )
#define ICOMAdminCatalog_ServiceCheck(This,lService,plStatus)( (This)->lpVtbl -> ServiceCheck(This,lService,plStatus) )
#define ICOMAdminCatalog_InstallMultipleEventClasses(This,bstrApplIdOrName,ppsaVarFileNames,ppsaVarCLSIDS)( (This)->lpVtbl -> InstallMultipleEventClasses(This,bstrApplIdOrName,ppsaVarFileNames,ppsaVarCLSIDS) )
#define ICOMAdminCatalog_InstallEventClass(This,bstrApplIdOrName,bstrDLL,bstrTLB,bstrPSDLL)( (This)->lpVtbl -> InstallEventClass(This,bstrApplIdOrName,bstrDLL,bstrTLB,bstrPSDLL) )
#define ICOMAdminCatalog_GetEventClassesForIID(This,bstrIID,ppsaVarCLSIDs,ppsaVarProgIDs,ppsaVarDescriptions)( (This)->lpVtbl -> GetEventClassesForIID(This,bstrIID,ppsaVarCLSIDs,ppsaVarProgIDs,ppsaVarDescriptions) )
#endif
#endif
typedef enum COMAdminInUse
{
	COMAdminNotInUse = 0,
	COMAdminInUseByCatalog = 0x1,
	COMAdminInUseByRegistryUnknown = 0x2,
	COMAdminInUseByRegistryProxyStub = 0x3,
	COMAdminInUseByRegistryTypeLib = 0x4,
	COMAdminInUseByRegistryClsid = 0x5
} COMAdminInUse;
extern RPC_IF_HANDLE __MIDL_itf_comadmin_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_comadmin_0000_0001_v0_0_s_ifspec;
#ifndef __ICOMAdminCatalog2_INTERFACE_DEFINED__
#define __ICOMAdminCatalog2_INTERFACE_DEFINED__
extern const IID IID_ICOMAdminCatalog2;
typedef struct ICOMAdminCatalog2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICOMAdminCatalog2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICOMAdminCatalog2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICOMAdminCatalog2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICOMAdminCatalog2 * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICOMAdminCatalog2 * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICOMAdminCatalog2 * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICOMAdminCatalog2 * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * GetCollection) (ICOMAdminCatalog2 * This, BSTR bstrCollName, IDispatch ** ppCatalogCollection);
	HRESULT(STDMETHODCALLTYPE * Connect) (ICOMAdminCatalog2 * This, BSTR bstrCatalogServerName, IDispatch ** ppCatalogCollection);
	HRESULT(STDMETHODCALLTYPE * get_MajorVersion) (ICOMAdminCatalog2 * This, long *plMajorVersion);
	HRESULT(STDMETHODCALLTYPE * get_MinorVersion) (ICOMAdminCatalog2 * This, long *plMinorVersion);
	HRESULT(STDMETHODCALLTYPE * GetCollectionByQuery) (ICOMAdminCatalog2 * This, BSTR bstrCollName, SAFEARRAY * *ppsaVarQuery, IDispatch ** ppCatalogCollection);
	HRESULT(STDMETHODCALLTYPE * ImportComponent) (ICOMAdminCatalog2 * This, BSTR bstrApplIDOrName, BSTR bstrCLSIDOrProgID);
	HRESULT(STDMETHODCALLTYPE * InstallComponent) (ICOMAdminCatalog2 * This, BSTR bstrApplIDOrName, BSTR bstrDLL, BSTR bstrTLB, BSTR bstrPSDLL);
	HRESULT(STDMETHODCALLTYPE * ShutdownApplication) (ICOMAdminCatalog2 * This, BSTR bstrApplIDOrName);
	HRESULT(STDMETHODCALLTYPE * ExportApplication) (ICOMAdminCatalog2 * This, BSTR bstrApplIDOrName, BSTR bstrApplicationFile, long lOptions);
	HRESULT(STDMETHODCALLTYPE * InstallApplication) (ICOMAdminCatalog2 * This, BSTR bstrApplicationFile, BSTR bstrDestinationDirectory, long lOptions, BSTR bstrUserId, BSTR bstrPassword, BSTR bstrRSN);
	HRESULT(STDMETHODCALLTYPE * StopRouter) (ICOMAdminCatalog2 * This);
	HRESULT(STDMETHODCALLTYPE * RefreshRouter) (ICOMAdminCatalog2 * This);
	HRESULT(STDMETHODCALLTYPE * StartRouter) (ICOMAdminCatalog2 * This);
	HRESULT(STDMETHODCALLTYPE * Reserved1) (ICOMAdminCatalog2 * This);
	HRESULT(STDMETHODCALLTYPE * Reserved2) (ICOMAdminCatalog2 * This);
	HRESULT(STDMETHODCALLTYPE * InstallMultipleComponents) (ICOMAdminCatalog2 * This, BSTR bstrApplIDOrName, SAFEARRAY * *ppsaVarFileNames, SAFEARRAY * *ppsaVarCLSIDs);
	HRESULT(STDMETHODCALLTYPE * GetMultipleComponentsInfo) (ICOMAdminCatalog2 * This, BSTR bstrApplIdOrName, SAFEARRAY * *ppsaVarFileNames, SAFEARRAY * *ppsaVarCLSIDs, SAFEARRAY * *ppsaVarClassNames, SAFEARRAY * *ppsaVarFileFlags, SAFEARRAY * *ppsaVarComponentFlags);
	HRESULT(STDMETHODCALLTYPE * RefreshComponents) (ICOMAdminCatalog2 * This);
	HRESULT(STDMETHODCALLTYPE * BackupREGDB) (ICOMAdminCatalog2 * This, BSTR bstrBackupFilePath);
	HRESULT(STDMETHODCALLTYPE * RestoreREGDB) (ICOMAdminCatalog2 * This, BSTR bstrBackupFilePath);
	HRESULT(STDMETHODCALLTYPE * QueryApplicationFile) (ICOMAdminCatalog2 * This, BSTR bstrApplicationFile, BSTR * pbstrApplicationName, BSTR * pbstrApplicationDescription, VARIANT_BOOL * pbHasUsers, VARIANT_BOOL * pbIsProxy, SAFEARRAY * *ppsaVarFileNames);
	HRESULT(STDMETHODCALLTYPE * StartApplication) (ICOMAdminCatalog2 * This, BSTR bstrApplIdOrName);
	HRESULT(STDMETHODCALLTYPE * ServiceCheck) (ICOMAdminCatalog2 * This, long lService, long *plStatus);
	HRESULT(STDMETHODCALLTYPE * InstallMultipleEventClasses) (ICOMAdminCatalog2 * This, BSTR bstrApplIdOrName, SAFEARRAY * *ppsaVarFileNames, SAFEARRAY * *ppsaVarCLSIDS);
	HRESULT(STDMETHODCALLTYPE * InstallEventClass) (ICOMAdminCatalog2 * This, BSTR bstrApplIdOrName, BSTR bstrDLL, BSTR bstrTLB, BSTR bstrPSDLL);
	HRESULT(STDMETHODCALLTYPE * GetEventClassesForIID) (ICOMAdminCatalog2 * This, BSTR bstrIID, SAFEARRAY * *ppsaVarCLSIDs, SAFEARRAY * *ppsaVarProgIDs, SAFEARRAY * *ppsaVarDescriptions);
	HRESULT(STDMETHODCALLTYPE * GetCollectionByQuery2) (ICOMAdminCatalog2 * This, BSTR bstrCollectionName, VARIANT * pVarQueryStrings, IDispatch ** ppCatalogCollection);
	HRESULT(STDMETHODCALLTYPE * GetApplicationInstanceIDFromProcessID) (ICOMAdminCatalog2 * This, long lProcessID, BSTR * pbstrApplicationInstanceID);
	HRESULT(STDMETHODCALLTYPE * ShutdownApplicationInstances) (ICOMAdminCatalog2 * This, VARIANT * pVarApplicationInstanceID);
	HRESULT(STDMETHODCALLTYPE * PauseApplicationInstances) (ICOMAdminCatalog2 * This, VARIANT * pVarApplicationInstanceID);
	HRESULT(STDMETHODCALLTYPE * ResumeApplicationInstances) (ICOMAdminCatalog2 * This, VARIANT * pVarApplicationInstanceID);
	HRESULT(STDMETHODCALLTYPE * RecycleApplicationInstances) (ICOMAdminCatalog2 * This, VARIANT * pVarApplicationInstanceID, long lReasonCode);
	HRESULT(STDMETHODCALLTYPE * AreApplicationInstancesPaused) (ICOMAdminCatalog2 * This, VARIANT * pVarApplicationInstanceID, VARIANT_BOOL * pVarBoolPaused);
	HRESULT(STDMETHODCALLTYPE * DumpApplicationInstance) (ICOMAdminCatalog2 * This, BSTR bstrApplicationInstanceID, BSTR bstrDirectory, long lMaxImages, BSTR * pbstrDumpFile);
	HRESULT(STDMETHODCALLTYPE * get_IsApplicationInstanceDumpSupported) (ICOMAdminCatalog2 * This, VARIANT_BOOL * pVarBoolDumpSupported);
	HRESULT(STDMETHODCALLTYPE * CreateServiceForApplication) (ICOMAdminCatalog2 * This, BSTR bstrApplicationIDOrName, BSTR bstrServiceName, BSTR bstrStartType, BSTR bstrErrorControl, BSTR bstrDependencies, BSTR bstrRunAs, BSTR bstrPassword, VARIANT_BOOL bDesktopOk);
	HRESULT(STDMETHODCALLTYPE * DeleteServiceForApplication) (ICOMAdminCatalog2 * This, BSTR bstrApplicationIDOrName);
	HRESULT(STDMETHODCALLTYPE * GetPartitionID) (ICOMAdminCatalog2 * This, BSTR bstrApplicationIDOrName, BSTR * pbstrPartitionID);
	HRESULT(STDMETHODCALLTYPE * GetPartitionName) (ICOMAdminCatalog2 * This, BSTR bstrApplicationIDOrName, BSTR * pbstrPartitionName);
	HRESULT(STDMETHODCALLTYPE * put_CurrentPartition) (ICOMAdminCatalog2 * This, BSTR bstrPartitionIDOrName);
	HRESULT(STDMETHODCALLTYPE * get_CurrentPartitionID) (ICOMAdminCatalog2 * This, BSTR * pbstrPartitionID);
	HRESULT(STDMETHODCALLTYPE * get_CurrentPartitionName) (ICOMAdminCatalog2 * This, BSTR * pbstrPartitionName);
	HRESULT(STDMETHODCALLTYPE * get_GlobalPartitionID) (ICOMAdminCatalog2 * This, BSTR * pbstrGlobalPartitionID);
	HRESULT(STDMETHODCALLTYPE * FlushPartitionCache) (ICOMAdminCatalog2 * This);
	HRESULT(STDMETHODCALLTYPE * CopyApplications) (ICOMAdminCatalog2 * This, BSTR bstrSourcePartitionIDOrName, VARIANT * pVarApplicationID, BSTR bstrDestinationPartitionIDOrName);
	HRESULT(STDMETHODCALLTYPE * CopyComponents) (ICOMAdminCatalog2 * This, BSTR bstrSourceApplicationIDOrName, VARIANT * pVarCLSIDOrProgID, BSTR bstrDestinationApplicationIDOrName);
	HRESULT(STDMETHODCALLTYPE * MoveComponents) (ICOMAdminCatalog2 * This, BSTR bstrSourceApplicationIDOrName, VARIANT * pVarCLSIDOrProgID, BSTR bstrDestinationApplicationIDOrName);
	HRESULT(STDMETHODCALLTYPE * AliasComponent) (ICOMAdminCatalog2 * This, BSTR bstrSrcApplicationIDOrName, BSTR bstrCLSIDOrProgID, BSTR bstrDestApplicationIDOrName, BSTR bstrNewProgId, BSTR bstrNewClsid);
	HRESULT(STDMETHODCALLTYPE * IsSafeToDelete) (ICOMAdminCatalog2 * This, BSTR bstrDllName, COMAdminInUse * pCOMAdminInUse);
	HRESULT(STDMETHODCALLTYPE * ImportUnconfiguredComponents) (ICOMAdminCatalog2 * This, BSTR bstrApplicationIDOrName, VARIANT * pVarCLSIDOrProgID, VARIANT * pVarComponentType);
	HRESULT(STDMETHODCALLTYPE * PromoteUnconfiguredComponents) (ICOMAdminCatalog2 * This, BSTR bstrApplicationIDOrName, VARIANT * pVarCLSIDOrProgID, VARIANT * pVarComponentType);
	HRESULT(STDMETHODCALLTYPE * ImportComponents) (ICOMAdminCatalog2 * This, BSTR bstrApplicationIDOrName, VARIANT * pVarCLSIDOrProgID, VARIANT * pVarComponentType);
	HRESULT(STDMETHODCALLTYPE * get_Is64BitCatalogServer) (ICOMAdminCatalog2 * This, VARIANT_BOOL * pbIs64Bit);
	HRESULT(STDMETHODCALLTYPE * ExportPartition) (ICOMAdminCatalog2 * This, BSTR bstrPartitionIDOrName, BSTR bstrPartitionFileName, long lOptions);
	HRESULT(STDMETHODCALLTYPE * InstallPartition) (ICOMAdminCatalog2 * This, BSTR bstrFileName, BSTR bstrDestDirectory, long lOptions, BSTR bstrUserID, BSTR bstrPassword, BSTR bstrRSN);
	HRESULT(STDMETHODCALLTYPE * QueryApplicationFile2) (ICOMAdminCatalog2 * This, BSTR bstrApplicationFile, IDispatch ** ppFilesForImport);
	HRESULT(STDMETHODCALLTYPE * GetComponentVersionCount) (ICOMAdminCatalog2 * This, BSTR bstrCLSIDOrProgID, long *plVersionCount);
	END_INTERFACE
}  ICOMAdminCatalog2Vtbl;
interface ICOMAdminCatalog2
{
	CONST_VTBL struct ICOMAdminCatalog2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICOMAdminCatalog2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICOMAdminCatalog2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICOMAdminCatalog2_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICOMAdminCatalog2_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICOMAdminCatalog2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICOMAdminCatalog2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICOMAdminCatalog2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICOMAdminCatalog2_GetCollection(This,bstrCollName,ppCatalogCollection)( (This)->lpVtbl -> GetCollection(This,bstrCollName,ppCatalogCollection) )
#define ICOMAdminCatalog2_Connect(This,bstrCatalogServerName,ppCatalogCollection)( (This)->lpVtbl -> Connect(This,bstrCatalogServerName,ppCatalogCollection) )
#define ICOMAdminCatalog2_get_MajorVersion(This,plMajorVersion)( (This)->lpVtbl -> get_MajorVersion(This,plMajorVersion) )
#define ICOMAdminCatalog2_get_MinorVersion(This,plMinorVersion)( (This)->lpVtbl -> get_MinorVersion(This,plMinorVersion) )
#define ICOMAdminCatalog2_GetCollectionByQuery(This,bstrCollName,ppsaVarQuery,ppCatalogCollection)( (This)->lpVtbl -> GetCollectionByQuery(This,bstrCollName,ppsaVarQuery,ppCatalogCollection) )
#define ICOMAdminCatalog2_ImportComponent(This,bstrApplIDOrName,bstrCLSIDOrProgID)( (This)->lpVtbl -> ImportComponent(This,bstrApplIDOrName,bstrCLSIDOrProgID) )
#define ICOMAdminCatalog2_InstallComponent(This,bstrApplIDOrName,bstrDLL,bstrTLB,bstrPSDLL)( (This)->lpVtbl -> InstallComponent(This,bstrApplIDOrName,bstrDLL,bstrTLB,bstrPSDLL) )
#define ICOMAdminCatalog2_ShutdownApplication(This,bstrApplIDOrName)( (This)->lpVtbl -> ShutdownApplication(This,bstrApplIDOrName) )
#define ICOMAdminCatalog2_ExportApplication(This,bstrApplIDOrName,bstrApplicationFile,lOptions)( (This)->lpVtbl -> ExportApplication(This,bstrApplIDOrName,bstrApplicationFile,lOptions) )
#define ICOMAdminCatalog2_InstallApplication(This,bstrApplicationFile,bstrDestinationDirectory,lOptions,bstrUserId,bstrPassword,bstrRSN)( (This)->lpVtbl -> InstallApplication(This,bstrApplicationFile,bstrDestinationDirectory,lOptions,bstrUserId,bstrPassword,bstrRSN) )
#define ICOMAdminCatalog2_StopRouter(This)( (This)->lpVtbl -> StopRouter(This) )
#define ICOMAdminCatalog2_RefreshRouter(This)( (This)->lpVtbl -> RefreshRouter(This) )
#define ICOMAdminCatalog2_StartRouter(This)( (This)->lpVtbl -> StartRouter(This) )
#define ICOMAdminCatalog2_Reserved1(This)( (This)->lpVtbl -> Reserved1(This) )
#define ICOMAdminCatalog2_Reserved2(This)( (This)->lpVtbl -> Reserved2(This) )
#define ICOMAdminCatalog2_InstallMultipleComponents(This,bstrApplIDOrName,ppsaVarFileNames,ppsaVarCLSIDs)( (This)->lpVtbl -> InstallMultipleComponents(This,bstrApplIDOrName,ppsaVarFileNames,ppsaVarCLSIDs) )
#define ICOMAdminCatalog2_GetMultipleComponentsInfo(This,bstrApplIdOrName,ppsaVarFileNames,ppsaVarCLSIDs,ppsaVarClassNames,ppsaVarFileFlags,ppsaVarComponentFlags)( (This)->lpVtbl -> GetMultipleComponentsInfo(This,bstrApplIdOrName,ppsaVarFileNames,ppsaVarCLSIDs,ppsaVarClassNames,ppsaVarFileFlags,ppsaVarComponentFlags) )
#define ICOMAdminCatalog2_RefreshComponents(This)( (This)->lpVtbl -> RefreshComponents(This) )
#define ICOMAdminCatalog2_BackupREGDB(This,bstrBackupFilePath)( (This)->lpVtbl -> BackupREGDB(This,bstrBackupFilePath) )
#define ICOMAdminCatalog2_RestoreREGDB(This,bstrBackupFilePath)( (This)->lpVtbl -> RestoreREGDB(This,bstrBackupFilePath) )
#define ICOMAdminCatalog2_QueryApplicationFile(This,bstrApplicationFile,pbstrApplicationName,pbstrApplicationDescription,pbHasUsers,pbIsProxy,ppsaVarFileNames)( (This)->lpVtbl -> QueryApplicationFile(This,bstrApplicationFile,pbstrApplicationName,pbstrApplicationDescription,pbHasUsers,pbIsProxy,ppsaVarFileNames) )
#define ICOMAdminCatalog2_StartApplication(This,bstrApplIdOrName)( (This)->lpVtbl -> StartApplication(This,bstrApplIdOrName) )
#define ICOMAdminCatalog2_ServiceCheck(This,lService,plStatus)( (This)->lpVtbl -> ServiceCheck(This,lService,plStatus) )
#define ICOMAdminCatalog2_InstallMultipleEventClasses(This,bstrApplIdOrName,ppsaVarFileNames,ppsaVarCLSIDS)( (This)->lpVtbl -> InstallMultipleEventClasses(This,bstrApplIdOrName,ppsaVarFileNames,ppsaVarCLSIDS) )
#define ICOMAdminCatalog2_InstallEventClass(This,bstrApplIdOrName,bstrDLL,bstrTLB,bstrPSDLL)( (This)->lpVtbl -> InstallEventClass(This,bstrApplIdOrName,bstrDLL,bstrTLB,bstrPSDLL) )
#define ICOMAdminCatalog2_GetEventClassesForIID(This,bstrIID,ppsaVarCLSIDs,ppsaVarProgIDs,ppsaVarDescriptions)( (This)->lpVtbl -> GetEventClassesForIID(This,bstrIID,ppsaVarCLSIDs,ppsaVarProgIDs,ppsaVarDescriptions) )
#define ICOMAdminCatalog2_GetCollectionByQuery2(This,bstrCollectionName,pVarQueryStrings,ppCatalogCollection)( (This)->lpVtbl -> GetCollectionByQuery2(This,bstrCollectionName,pVarQueryStrings,ppCatalogCollection) )
#define ICOMAdminCatalog2_GetApplicationInstanceIDFromProcessID(This,lProcessID,pbstrApplicationInstanceID)( (This)->lpVtbl -> GetApplicationInstanceIDFromProcessID(This,lProcessID,pbstrApplicationInstanceID) )
#define ICOMAdminCatalog2_ShutdownApplicationInstances(This,pVarApplicationInstanceID)( (This)->lpVtbl -> ShutdownApplicationInstances(This,pVarApplicationInstanceID) )
#define ICOMAdminCatalog2_PauseApplicationInstances(This,pVarApplicationInstanceID)( (This)->lpVtbl -> PauseApplicationInstances(This,pVarApplicationInstanceID) )
#define ICOMAdminCatalog2_ResumeApplicationInstances(This,pVarApplicationInstanceID)( (This)->lpVtbl -> ResumeApplicationInstances(This,pVarApplicationInstanceID) )
#define ICOMAdminCatalog2_RecycleApplicationInstances(This,pVarApplicationInstanceID,lReasonCode)( (This)->lpVtbl -> RecycleApplicationInstances(This,pVarApplicationInstanceID,lReasonCode) )
#define ICOMAdminCatalog2_AreApplicationInstancesPaused(This,pVarApplicationInstanceID,pVarBoolPaused)( (This)->lpVtbl -> AreApplicationInstancesPaused(This,pVarApplicationInstanceID,pVarBoolPaused) )
#define ICOMAdminCatalog2_DumpApplicationInstance(This,bstrApplicationInstanceID,bstrDirectory,lMaxImages,pbstrDumpFile)( (This)->lpVtbl -> DumpApplicationInstance(This,bstrApplicationInstanceID,bstrDirectory,lMaxImages,pbstrDumpFile) )
#define ICOMAdminCatalog2_get_IsApplicationInstanceDumpSupported(This,pVarBoolDumpSupported)( (This)->lpVtbl -> get_IsApplicationInstanceDumpSupported(This,pVarBoolDumpSupported) )
#define ICOMAdminCatalog2_CreateServiceForApplication(This,bstrApplicationIDOrName,bstrServiceName,bstrStartType,bstrErrorControl,bstrDependencies,bstrRunAs,bstrPassword,bDesktopOk)( (This)->lpVtbl -> CreateServiceForApplication(This,bstrApplicationIDOrName,bstrServiceName,bstrStartType,bstrErrorControl,bstrDependencies,bstrRunAs,bstrPassword,bDesktopOk) )
#define ICOMAdminCatalog2_DeleteServiceForApplication(This,bstrApplicationIDOrName)( (This)->lpVtbl -> DeleteServiceForApplication(This,bstrApplicationIDOrName) )
#define ICOMAdminCatalog2_GetPartitionID(This,bstrApplicationIDOrName,pbstrPartitionID)( (This)->lpVtbl -> GetPartitionID(This,bstrApplicationIDOrName,pbstrPartitionID) )
#define ICOMAdminCatalog2_GetPartitionName(This,bstrApplicationIDOrName,pbstrPartitionName)( (This)->lpVtbl -> GetPartitionName(This,bstrApplicationIDOrName,pbstrPartitionName) )
#define ICOMAdminCatalog2_put_CurrentPartition(This,bstrPartitionIDOrName)( (This)->lpVtbl -> put_CurrentPartition(This,bstrPartitionIDOrName) )
#define ICOMAdminCatalog2_get_CurrentPartitionID(This,pbstrPartitionID)( (This)->lpVtbl -> get_CurrentPartitionID(This,pbstrPartitionID) )
#define ICOMAdminCatalog2_get_CurrentPartitionName(This,pbstrPartitionName)( (This)->lpVtbl -> get_CurrentPartitionName(This,pbstrPartitionName) )
#define ICOMAdminCatalog2_get_GlobalPartitionID(This,pbstrGlobalPartitionID)( (This)->lpVtbl -> get_GlobalPartitionID(This,pbstrGlobalPartitionID) )
#define ICOMAdminCatalog2_FlushPartitionCache(This)( (This)->lpVtbl -> FlushPartitionCache(This) )
#define ICOMAdminCatalog2_CopyApplications(This,bstrSourcePartitionIDOrName,pVarApplicationID,bstrDestinationPartitionIDOrName)( (This)->lpVtbl -> CopyApplications(This,bstrSourcePartitionIDOrName,pVarApplicationID,bstrDestinationPartitionIDOrName) )
#define ICOMAdminCatalog2_CopyComponents(This,bstrSourceApplicationIDOrName,pVarCLSIDOrProgID,bstrDestinationApplicationIDOrName)( (This)->lpVtbl -> CopyComponents(This,bstrSourceApplicationIDOrName,pVarCLSIDOrProgID,bstrDestinationApplicationIDOrName) )
#define ICOMAdminCatalog2_MoveComponents(This,bstrSourceApplicationIDOrName,pVarCLSIDOrProgID,bstrDestinationApplicationIDOrName)( (This)->lpVtbl -> MoveComponents(This,bstrSourceApplicationIDOrName,pVarCLSIDOrProgID,bstrDestinationApplicationIDOrName) )
#define ICOMAdminCatalog2_AliasComponent(This,bstrSrcApplicationIDOrName,bstrCLSIDOrProgID,bstrDestApplicationIDOrName,bstrNewProgId,bstrNewClsid)( (This)->lpVtbl -> AliasComponent(This,bstrSrcApplicationIDOrName,bstrCLSIDOrProgID,bstrDestApplicationIDOrName,bstrNewProgId,bstrNewClsid) )
#define ICOMAdminCatalog2_IsSafeToDelete(This,bstrDllName,pCOMAdminInUse)( (This)->lpVtbl -> IsSafeToDelete(This,bstrDllName,pCOMAdminInUse) )
#define ICOMAdminCatalog2_ImportUnconfiguredComponents(This,bstrApplicationIDOrName,pVarCLSIDOrProgID,pVarComponentType)( (This)->lpVtbl -> ImportUnconfiguredComponents(This,bstrApplicationIDOrName,pVarCLSIDOrProgID,pVarComponentType) )
#define ICOMAdminCatalog2_PromoteUnconfiguredComponents(This,bstrApplicationIDOrName,pVarCLSIDOrProgID,pVarComponentType)( (This)->lpVtbl -> PromoteUnconfiguredComponents(This,bstrApplicationIDOrName,pVarCLSIDOrProgID,pVarComponentType) )
#define ICOMAdminCatalog2_ImportComponents(This,bstrApplicationIDOrName,pVarCLSIDOrProgID,pVarComponentType)( (This)->lpVtbl -> ImportComponents(This,bstrApplicationIDOrName,pVarCLSIDOrProgID,pVarComponentType) )
#define ICOMAdminCatalog2_get_Is64BitCatalogServer(This,pbIs64Bit)( (This)->lpVtbl -> get_Is64BitCatalogServer(This,pbIs64Bit) )
#define ICOMAdminCatalog2_ExportPartition(This,bstrPartitionIDOrName,bstrPartitionFileName,lOptions)( (This)->lpVtbl -> ExportPartition(This,bstrPartitionIDOrName,bstrPartitionFileName,lOptions) )
#define ICOMAdminCatalog2_InstallPartition(This,bstrFileName,bstrDestDirectory,lOptions,bstrUserID,bstrPassword,bstrRSN)( (This)->lpVtbl -> InstallPartition(This,bstrFileName,bstrDestDirectory,lOptions,bstrUserID,bstrPassword,bstrRSN) )
#define ICOMAdminCatalog2_QueryApplicationFile2(This,bstrApplicationFile,ppFilesForImport)( (This)->lpVtbl -> QueryApplicationFile2(This,bstrApplicationFile,ppFilesForImport) )
#define ICOMAdminCatalog2_GetComponentVersionCount(This,bstrCLSIDOrProgID,plVersionCount)( (This)->lpVtbl -> GetComponentVersionCount(This,bstrCLSIDOrProgID,plVersionCount) )
#endif
#endif
#ifndef __ICatalogObject_INTERFACE_DEFINED__
#define __ICatalogObject_INTERFACE_DEFINED__
extern const IID IID_ICatalogObject;
typedef struct ICatalogObjectVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICatalogObject * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICatalogObject * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICatalogObject * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICatalogObject * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICatalogObject * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICatalogObject * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICatalogObject * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_Value) (ICatalogObject * This, BSTR bstrPropName, VARIANT * pvarRetVal);
	HRESULT(STDMETHODCALLTYPE * put_Value) (ICatalogObject * This, BSTR bstrPropName, VARIANT val);
	HRESULT(STDMETHODCALLTYPE * get_Key) (ICatalogObject * This, VARIANT * pvarRetVal);
	HRESULT(STDMETHODCALLTYPE * get_Name) (ICatalogObject * This, VARIANT * pvarRetVal);
	HRESULT(STDMETHODCALLTYPE * IsPropertyReadOnly) (ICatalogObject * This, BSTR bstrPropName, VARIANT_BOOL * pbRetVal);
	HRESULT(STDMETHODCALLTYPE * get_Valid) (ICatalogObject * This, VARIANT_BOOL * pbRetVal);
	HRESULT(STDMETHODCALLTYPE * IsPropertyWriteOnly) (ICatalogObject * This, BSTR bstrPropName, VARIANT_BOOL * pbRetVal);
	END_INTERFACE
}  ICatalogObjectVtbl;
interface ICatalogObject
{
	CONST_VTBL struct ICatalogObjectVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICatalogObject_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICatalogObject_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICatalogObject_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICatalogObject_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICatalogObject_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICatalogObject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICatalogObject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICatalogObject_get_Value(This,bstrPropName,pvarRetVal)( (This)->lpVtbl -> get_Value(This,bstrPropName,pvarRetVal) )
#define ICatalogObject_put_Value(This,bstrPropName,val)( (This)->lpVtbl -> put_Value(This,bstrPropName,val) )
#define ICatalogObject_get_Key(This,pvarRetVal)( (This)->lpVtbl -> get_Key(This,pvarRetVal) )
#define ICatalogObject_get_Name(This,pvarRetVal)( (This)->lpVtbl -> get_Name(This,pvarRetVal) )
#define ICatalogObject_IsPropertyReadOnly(This,bstrPropName,pbRetVal)( (This)->lpVtbl -> IsPropertyReadOnly(This,bstrPropName,pbRetVal) )
#define ICatalogObject_get_Valid(This,pbRetVal)( (This)->lpVtbl -> get_Valid(This,pbRetVal) )
#define ICatalogObject_IsPropertyWriteOnly(This,bstrPropName,pbRetVal)( (This)->lpVtbl -> IsPropertyWriteOnly(This,bstrPropName,pbRetVal) )
#endif
#endif
#ifndef __ICatalogCollection_INTERFACE_DEFINED__
#define __ICatalogCollection_INTERFACE_DEFINED__
extern const IID IID_ICatalogCollection;
typedef struct ICatalogCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICatalogCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICatalogCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICatalogCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (ICatalogCollection * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (ICatalogCollection * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (ICatalogCollection * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (ICatalogCollection * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get__NewEnum) (ICatalogCollection * This, IUnknown ** ppEnumVariant);
	HRESULT(STDMETHODCALLTYPE * get_Item) (ICatalogCollection * This, long lIndex, IDispatch ** ppCatalogObject);
	HRESULT(STDMETHODCALLTYPE * get_Count) (ICatalogCollection * This, long *plObjectCount);
	HRESULT(STDMETHODCALLTYPE * Remove) (ICatalogCollection * This, long lIndex);
	HRESULT(STDMETHODCALLTYPE * Add) (ICatalogCollection * This, IDispatch ** ppCatalogObject);
	HRESULT(STDMETHODCALLTYPE * Populate) (ICatalogCollection * This);
	HRESULT(STDMETHODCALLTYPE * SaveChanges) (ICatalogCollection * This, long *pcChanges);
	HRESULT(STDMETHODCALLTYPE * GetCollection) (ICatalogCollection * This, BSTR bstrCollName, VARIANT varObjectKey, IDispatch ** ppCatalogCollection);
	HRESULT(STDMETHODCALLTYPE * get_Name) (ICatalogCollection * This, VARIANT * pVarNamel);
	HRESULT(STDMETHODCALLTYPE * get_AddEnabled) (ICatalogCollection * This, VARIANT_BOOL * pVarBool);
	HRESULT(STDMETHODCALLTYPE * get_RemoveEnabled) (ICatalogCollection * This, VARIANT_BOOL * pVarBool);
	HRESULT(STDMETHODCALLTYPE * GetUtilInterface) (ICatalogCollection * This, IDispatch ** ppIDispatch);
	HRESULT(STDMETHODCALLTYPE * get_DataStoreMajorVersion) (ICatalogCollection * This, long *plMajorVersion);
	HRESULT(STDMETHODCALLTYPE * get_DataStoreMinorVersion) (ICatalogCollection * This, long *plMinorVersionl);
	HRESULT(STDMETHODCALLTYPE * PopulateByKey) (ICatalogCollection * This, SAFEARRAY * psaKeys);
	HRESULT(STDMETHODCALLTYPE * PopulateByQuery) (ICatalogCollection * This, BSTR bstrQueryString, long lQueryType);
	END_INTERFACE
}  ICatalogCollectionVtbl;
interface ICatalogCollection
{
	CONST_VTBL struct ICatalogCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICatalogCollection_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICatalogCollection_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define ICatalogCollection_Release(This)( (This)->lpVtbl -> Release(This) )
#define ICatalogCollection_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define ICatalogCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define ICatalogCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define ICatalogCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#define ICatalogCollection_get__NewEnum(This,ppEnumVariant)( (This)->lpVtbl -> get__NewEnum(This,ppEnumVariant) )
#define ICatalogCollection_get_Item(This,lIndex,ppCatalogObject)( (This)->lpVtbl -> get_Item(This,lIndex,ppCatalogObject) )
#define ICatalogCollection_get_Count(This,plObjectCount)( (This)->lpVtbl -> get_Count(This,plObjectCount) )
#define ICatalogCollection_Remove(This,lIndex)( (This)->lpVtbl -> Remove(This,lIndex) )
#define ICatalogCollection_Add(This,ppCatalogObject)( (This)->lpVtbl -> Add(This,ppCatalogObject) )
#define ICatalogCollection_Populate(This)( (This)->lpVtbl -> Populate(This) )
#define ICatalogCollection_SaveChanges(This,pcChanges)( (This)->lpVtbl -> SaveChanges(This,pcChanges) )
#define ICatalogCollection_GetCollection(This,bstrCollName,varObjectKey,ppCatalogCollection)( (This)->lpVtbl -> GetCollection(This,bstrCollName,varObjectKey,ppCatalogCollection) )
#define ICatalogCollection_get_Name(This,pVarNamel)( (This)->lpVtbl -> get_Name(This,pVarNamel) )
#define ICatalogCollection_get_AddEnabled(This,pVarBool)( (This)->lpVtbl -> get_AddEnabled(This,pVarBool) )
#define ICatalogCollection_get_RemoveEnabled(This,pVarBool)( (This)->lpVtbl -> get_RemoveEnabled(This,pVarBool) )
#define ICatalogCollection_GetUtilInterface(This,ppIDispatch)( (This)->lpVtbl -> GetUtilInterface(This,ppIDispatch) )
#define ICatalogCollection_get_DataStoreMajorVersion(This,plMajorVersion)( (This)->lpVtbl -> get_DataStoreMajorVersion(This,plMajorVersion) )
#define ICatalogCollection_get_DataStoreMinorVersion(This,plMinorVersionl)( (This)->lpVtbl -> get_DataStoreMinorVersion(This,plMinorVersionl) )
#define ICatalogCollection_PopulateByKey(This,psaKeys)( (This)->lpVtbl -> PopulateByKey(This,psaKeys) )
#define ICatalogCollection_PopulateByQuery(This,bstrQueryString,lQueryType)( (This)->lpVtbl -> PopulateByQuery(This,bstrQueryString,lQueryType) )
#endif
#endif
#ifndef __COMAdmin_LIBRARY_DEFINED__
#define __COMAdmin_LIBRARY_DEFINED__
typedef enum COMAdminComponentType
{
	COMAdmin32BitComponent = 0x1,
	COMAdmin64BitComponent = 0x2
} COMAdminComponentType;
typedef enum COMAdminApplicationInstallOptions
{
	COMAdminInstallNoUsers = 0,
	COMAdminInstallUsers = 1,
	COMAdminInstallForceOverwriteOfFiles = 2
} COMAdminApplicationInstallOptions;
typedef enum COMAdminApplicationExportOptions
{
	COMAdminExportNoUsers = 0,
	COMAdminExportUsers = 1,
	COMAdminExportApplicationProxy = 2,
	COMAdminExportForceOverwriteOfFiles = 4,
	COMAdminExportIn10Format = 16
} COMAdminApplicationExportOptions;
typedef enum COMAdminThreadingModels
{
	COMAdminThreadingModelApartment = 0,
	COMAdminThreadingModelFree = 1,
	COMAdminThreadingModelMain = 2,
	COMAdminThreadingModelBoth = 3,
	COMAdminThreadingModelNeutral = 4,
	COMAdminThreadingModelNotSpecified = 5
} COMAdminThreadingModels;
typedef enum COMAdminTransactionOptions
{
	COMAdminTransactionIgnored = 0,
	COMAdminTransactionNone = 1,
	COMAdminTransactionSupported = 2,
	COMAdminTransactionRequired = 3,
	COMAdminTransactionRequiresNew = 4
} COMAdminTransactionOptions;
typedef enum COMAdminTxIsolationLevelOptions
{
	COMAdminTxIsolationLevelAny = 0,
	COMAdminTxIsolationLevelReadUnCommitted = (COMAdminTxIsolationLevelAny + 1),
	COMAdminTxIsolationLevelReadCommitted = (COMAdminTxIsolationLevelReadUnCommitted + 1),
	COMAdminTxIsolationLevelRepeatableRead = (COMAdminTxIsolationLevelReadCommitted + 1),
	COMAdminTxIsolationLevelSerializable = (COMAdminTxIsolationLevelRepeatableRead + 1)
} COMAdminTxIsolationLevelOptions;
typedef enum COMAdminSynchronizationOptions
{
	COMAdminSynchronizationIgnored = 0,
	COMAdminSynchronizationNone = 1,
	COMAdminSynchronizationSupported = 2,
	COMAdminSynchronizationRequired = 3,
	COMAdminSynchronizationRequiresNew = 4
} COMAdminSynchronizationOptions;
typedef enum COMAdminActivationOptions
{
	COMAdminActivationInproc = 0,
	COMAdminActivationLocal = 1
} COMAdminActivationOptions;
typedef enum COMAdminAccessChecksLevelOptions
{
	COMAdminAccessChecksApplicationLevel = 0,
	COMAdminAccessChecksApplicationComponentLevel = 1
} COMAdminAccessChecksLevelOptions;
typedef enum COMAdminAuthenticationLevelOptions
{
	COMAdminAuthenticationDefault = 0,
	COMAdminAuthenticationNone = 1,
	COMAdminAuthenticationConnect = 2,
	COMAdminAuthenticationCall = 3,
	COMAdminAuthenticationPacket = 4,
	COMAdminAuthenticationIntegrity = 5,
	COMAdminAuthenticationPrivacy = 6
} COMAdminAuthenticationLevelOptions;
typedef enum COMAdminImpersonationLevelOptions
{
	COMAdminImpersonationAnonymous = 1,
	COMAdminImpersonationIdentify = 2,
	COMAdminImpersonationImpersonate = 3,
	COMAdminImpersonationDelegate = 4
} COMAdminImpersonationLevelOptions;
typedef enum COMAdminAuthenticationCapabilitiesOptions
{
	COMAdminAuthenticationCapabilitiesNone = 0,
	COMAdminAuthenticationCapabilitiesSecureReference = 0x2,
	COMAdminAuthenticationCapabilitiesStaticCloaking = 0x20,
	COMAdminAuthenticationCapabilitiesDynamicCloaking = 0x40
} COMAdminAuthenticationCapabilitiesOptions;
typedef enum COMAdminOS
{
	COMAdminOSNotInitialized = 0,
	COMAdminOSWindows3_1 = 1,
	COMAdminOSWindows9x = 2,
	COMAdminOSWindows2000 = 3,
	COMAdminOSWindows2000AdvancedServer = 4,
	COMAdminOSWindows2000Unknown = 5,
	COMAdminOSUnknown = 6,
	COMAdminOSWindowsXPPersonal = 11,
	COMAdminOSWindowsXPProfessional = 12,
	COMAdminOSWindowsNETStandardServer = 13,
	COMAdminOSWindowsNETEnterpriseServer = 14,
	COMAdminOSWindowsNETDatacenterServer = 15,
	COMAdminOSWindowsNETWebServer = 16,
	COMAdminOSWindowsLonghornPersonal = 17,
	COMAdminOSWindowsLonghornProfessional = 18,
	COMAdminOSWindowsLonghornStandardServer = 19,
	COMAdminOSWindowsLonghornEnterpriseServer = 20,
	COMAdminOSWindowsLonghornDatacenterServer = 21,
	COMAdminOSWindowsLonghornWebServer = 22,
	COMAdminOSWindows7Personal = 23,
	COMAdminOSWindows7Professional = 24,
	COMAdminOSWindows7StandardServer = 25,
	COMAdminOSWindows7EnterpriseServer = 26,
	COMAdminOSWindows7DatacenterServer = 27,
	COMAdminOSWindows7WebServer = 28
} COMAdminOS;
typedef enum COMAdminServiceOptions
{
	COMAdminServiceLoadBalanceRouter = 1
} COMAdminServiceOptions;
typedef enum COMAdminServiceStatusOptions
{
	COMAdminServiceStopped = 0,
	COMAdminServiceStartPending = (COMAdminServiceStopped + 1),
	COMAdminServiceStopPending = (COMAdminServiceStartPending + 1),
	COMAdminServiceRunning = (COMAdminServiceStopPending + 1),
	COMAdminServiceContinuePending = (COMAdminServiceRunning + 1),
	COMAdminServicePausePending = (COMAdminServiceContinuePending + 1),
	COMAdminServicePaused = (COMAdminServicePausePending + 1),
	COMAdminServiceUnknownState = (COMAdminServicePaused + 1)
} COMAdminServiceStatusOptions;
typedef enum COMAdminQCMessageAuthenticateOptions
{
	COMAdminQCMessageAuthenticateSecureApps = 0,
	COMAdminQCMessageAuthenticateOff = 1,
	COMAdminQCMessageAuthenticateOn = 2
} COMAdminQCMessageAuthenticateOptions;
typedef enum COMAdminFileFlags
{
	COMAdminFileFlagLoadable = 0x1,
	COMAdminFileFlagCOM = 0x2,
	COMAdminFileFlagContainsPS = 0x4,
	COMAdminFileFlagContainsComp = 0x8,
	COMAdminFileFlagContainsTLB = 0x10,
	COMAdminFileFlagSelfReg = 0x20,
	COMAdminFileFlagSelfUnReg = 0x40,
	COMAdminFileFlagUnloadableDLL = 0x80,
	COMAdminFileFlagDoesNotExist = 0x100,
	COMAdminFileFlagAlreadyInstalled = 0x200,
	COMAdminFileFlagBadTLB = 0x400,
	COMAdminFileFlagGetClassObjFailed = 0x800,
	COMAdminFileFlagClassNotAvailable = 0x1000,
	COMAdminFileFlagRegistrar = 0x2000,
	COMAdminFileFlagNoRegistrar = 0x4000,
	COMAdminFileFlagDLLRegsvrFailed = 0x8000,
	COMAdminFileFlagRegTLBFailed = 0x10000,
	COMAdminFileFlagRegistrarFailed = 0x20000,
	COMAdminFileFlagError = 0x40000
} COMAdminFileFlags;
typedef enum COMAdminComponentFlags
{
	COMAdminCompFlagTypeInfoFound = 0x1,
	COMAdminCompFlagCOMPlusPropertiesFound = 0x2,
	COMAdminCompFlagProxyFound = 0x4,
	COMAdminCompFlagInterfacesFound = 0x8,
	COMAdminCompFlagAlreadyInstalled = 0x10,
	COMAdminCompFlagNotInApplication = 0x20
} COMAdminComponentFlags;
#define	COMAdminCollectionRoot	( "Root" )
#define	COMAdminCollectionApplications	( "Applications" )
#define	COMAdminCollectionComponents	( "Components" )
#define	COMAdminCollectionComputerList	( "ComputerList" )
#define	COMAdminCollectionApplicationCluster	( "ApplicationCluster" )
#define	COMAdminCollectionLocalComputer	( "LocalComputer" )
#define	COMAdminCollectionInprocServers	( "InprocServers" )
#define	COMAdminCollectionRelatedCollectionInfo	( "RelatedCollectionInfo" )
#define	COMAdminCollectionPropertyInfo	( "PropertyInfo" )
#define	COMAdminCollectionRoles	( "Roles" )
#define	COMAdminCollectionErrorInfo	( "ErrorInfo" )
#define	COMAdminCollectionInterfacesForComponent	( "InterfacesForComponent" )
#define	COMAdminCollectionRolesForComponent	( "RolesForComponent" )
#define	COMAdminCollectionMethodsForInterface	( "MethodsForInterface" )
#define	COMAdminCollectionRolesForInterface	( "RolesForInterface" )
#define	COMAdminCollectionRolesForMethod	( "RolesForMethod" )
#define	COMAdminCollectionUsersInRole	( "UsersInRole" )
#define	COMAdminCollectionDCOMProtocols	( "DCOMProtocols" )
#define	COMAdminCollectionPartitions	( "Partitions" )
typedef enum COMAdminErrorCodes
{
	COMAdminErrObjectErrors = (HRESULT)0x80110401L,
	COMAdminErrObjectInvalid = (HRESULT)0x80110402L,
	COMAdminErrKeyMissing = (HRESULT)0x80110403L,
	COMAdminErrAlreadyInstalled = (HRESULT)0x80110404L,
	COMAdminErrAppFileWriteFail = (HRESULT)0x80110407L,
	COMAdminErrAppFileReadFail = (HRESULT)0x80110408L,
	COMAdminErrAppFileVersion = (HRESULT)0x80110409L,
	COMAdminErrBadPath = (HRESULT)0x8011040aL,
	COMAdminErrApplicationExists = (HRESULT)0x8011040bL,
	COMAdminErrRoleExists = (HRESULT)0x8011040cL,
	COMAdminErrCantCopyFile = (HRESULT)0x8011040dL,
	COMAdminErrNoUser = (HRESULT)0x8011040fL,
	COMAdminErrInvalidUserids = (HRESULT)0x80110410L,
	COMAdminErrNoRegistryCLSID = (HRESULT)0x80110411L,
	COMAdminErrBadRegistryProgID = (HRESULT)0x80110412L,
	COMAdminErrAuthenticationLevel = (HRESULT)0x80110413L,
	COMAdminErrUserPasswdNotValid = (HRESULT)0x80110414L,
	COMAdminErrCLSIDOrIIDMismatch = (HRESULT)0x80110418L,
	COMAdminErrRemoteInterface = (HRESULT)0x80110419L,
	COMAdminErrDllRegisterServer = (HRESULT)0x8011041aL,
	COMAdminErrNoServerShare = (HRESULT)0x8011041bL,
	COMAdminErrDllLoadFailed = (HRESULT)0x8011041dL,
	COMAdminErrBadRegistryLibID = (HRESULT)0x8011041eL,
	COMAdminErrAppDirNotFound = (HRESULT)0x8011041fL,
	COMAdminErrRegistrarFailed = (HRESULT)0x80110423L,
	COMAdminErrCompFileDoesNotExist = (HRESULT)0x80110424L,
	COMAdminErrCompFileLoadDLLFail = (HRESULT)0x80110425L,
	COMAdminErrCompFileGetClassObj = (HRESULT)0x80110426L,
	COMAdminErrCompFileClassNotAvail = (HRESULT)0x80110427L,
	COMAdminErrCompFileBadTLB = (HRESULT)0x80110428L,
	COMAdminErrCompFileNotInstallable = (HRESULT)0x80110429L,
	COMAdminErrNotChangeable = (HRESULT)0x8011042aL,
	COMAdminErrNotDeletable = (HRESULT)0x8011042bL,
	COMAdminErrSession = (HRESULT)0x8011042cL,
	COMAdminErrCompMoveLocked = (HRESULT)0x8011042dL,
	COMAdminErrCompMoveBadDest = (HRESULT)0x8011042eL,
	COMAdminErrRegisterTLB = (HRESULT)0x80110430L,
	COMAdminErrSystemApp = (HRESULT)0x80110433L,
	COMAdminErrCompFileNoRegistrar = (HRESULT)0x80110434L,
	COMAdminErrCoReqCompInstalled = (HRESULT)0x80110435L,
	COMAdminErrServiceNotInstalled = (HRESULT)0x80110436L,
	COMAdminErrPropertySaveFailed = (HRESULT)0x80110437L,
	COMAdminErrObjectExists = (HRESULT)0x80110438L,
	COMAdminErrComponentExists = (HRESULT)0x80110439L,
	COMAdminErrRegFileCorrupt = (HRESULT)0x8011043bL,
	COMAdminErrPropertyOverflow = (HRESULT)0x8011043cL,
	COMAdminErrNotInRegistry = (HRESULT)0x8011043eL,
	COMAdminErrObjectNotPoolable = (HRESULT)0x8011043fL,
	COMAdminErrApplidMatchesClsid = (HRESULT)0x80110446L,
	COMAdminErrRoleDoesNotExist = (HRESULT)0x80110447L,
	COMAdminErrStartAppNeedsComponents = (HRESULT)0x80110448L,
	COMAdminErrRequiresDifferentPlatform = (HRESULT)0x80110449L,
	COMAdminErrQueuingServiceNotAvailable = (HRESULT)0x80110602L,
	COMAdminErrObjectParentMissing = (HRESULT)0x80110808L,
	COMAdminErrObjectDoesNotExist = (HRESULT)0x80110809L,
	COMAdminErrCanNotExportAppProxy = (HRESULT)0x8011044aL,
	COMAdminErrCanNotStartApp = (HRESULT)0x8011044bL,
	COMAdminErrCanNotExportSystemApp = (HRESULT)0x8011044cL,
	COMAdminErrCanNotSubscribeToComponent = (HRESULT)0x8011044dL,
	COMAdminErrAppNotRunning = (HRESULT)0x8011080aL,
	COMAdminErrEventClassCannotBeSubscriber = (HRESULT)0x8011044eL,
	COMAdminErrLibAppProxyIncompatible = (HRESULT)0x8011044fL,
	COMAdminErrBasePartitionOnly = (HRESULT)0x80110450L,
	COMAdminErrDuplicatePartitionName = (HRESULT)0x80110457L,
	COMAdminErrPartitionInUse = (HRESULT)0x80110459L,
	COMAdminErrImportedComponentsNotAllowed = (HRESULT)0x8011045bL,
	COMAdminErrRegdbNotInitialized = (HRESULT)0x80110472L,
	COMAdminErrRegdbNotOpen = (HRESULT)0x80110473L,
	COMAdminErrRegdbSystemErr = (HRESULT)0x80110474L,
	COMAdminErrRegdbAlreadyRunning = (HRESULT)0x80110475L,
	COMAdminErrMigVersionNotSupported = (HRESULT)0x80110480L,
	COMAdminErrMigSchemaNotFound = (HRESULT)0x80110481L,
	COMAdminErrCatBitnessMismatch = (HRESULT)0x80110482L,
	COMAdminErrCatUnacceptableBitness = (HRESULT)0x80110483L,
	COMAdminErrCatWrongAppBitnessBitness = (HRESULT)0x80110484L,
	COMAdminErrCatPauseResumeNotSupported = (HRESULT)0x80110485L,
	COMAdminErrCatServerFault = (HRESULT)0x80110486L,
	COMAdminErrCantRecycleLibraryApps = (HRESULT)0x8011080fL,
	COMAdminErrCantRecycleServiceApps = (HRESULT)0x80110811L,
	COMAdminErrProcessAlreadyRecycled = (HRESULT)0x80110812L,
	COMAdminErrPausedProcessMayNotBeRecycled = (HRESULT)0x80110813L,
	COMAdminErrInvalidPartition = (HRESULT)0x8011080bL,
	COMAdminErrPartitionMsiOnly = (HRESULT)0x80110819L,
	COMAdminErrStartAppDisabled = (HRESULT)0x80110451L,
	COMAdminErrCompMoveSource = (HRESULT)0x8011081cL,
	COMAdminErrCompMoveDest = (HRESULT)0x8011081dL,
	COMAdminErrCompMovePrivate = (HRESULT)0x8011081eL,
	COMAdminErrCannotCopyEventClass = (HRESULT)0x80110820L
} COMAdminErrorCodes;
extern const IID LIBID_COMAdmin;
extern const CLSID CLSID_COMAdminCatalog;
extern const CLSID CLSID_COMAdminCatalogObject;
extern const CLSID CLSID_COMAdminCatalogCollection;
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
