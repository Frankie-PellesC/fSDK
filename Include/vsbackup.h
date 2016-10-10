/*+@@file@@----------------------------------------------------------------*//*!
 \file		vsbackup.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 16:54:41 2016
 \date		Modified on Sat Sep 17 16:54:41 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _VSBACKUP_H_
#define _VSBACKUP_H_
#if __POCC__ >= 500
#pragma once
#endif
const IID IID_IVssExamineWriterMetadata    = {0x902fcf7f, 0xb7fd, 0x42f8, {0x81, 0xf1, 0xb2, 0xe4, 0x00, 0xb1, 0xe5, 0xbd}};
const IID IID_IVssExamineWriterMetadataEx  = {0x0c0e5ec0, 0xca44, 0x472b, {0xb7, 0x02, 0xe6, 0x52, 0xdb, 0x1c, 0x04, 0x51}};
const IID IID_IVssExamineWriterMetadataEx2 = {0xce115780, 0xa611, 0x431b, {0xb5, 0x7f, 0xc3, 0x83, 0x03, 0xab, 0x6a, 0xee}};
const IID IID_IVssBackupComponents         = {0x665c1d5f, 0xc218, 0x414d, {0xa0, 0x5d, 0x7f, 0xef, 0x5f, 0x9d, 0x5c, 0x86}};
const IID IID_IVssBackupComponentsEx       = {0x963f03ad, 0x9e4c, 0x4a34, {0xac, 0x15, 0xe4, 0xb6, 0x17, 0x4e, 0x50, 0x36}};
const IID IID_IVssBackupComponentsEx2      = {0xacfe2b3a, 0x22c9, 0x4ef8, {0xbd, 0x03, 0x2f, 0x9c, 0xa2, 0x30, 0x08, 0x4e}};
const IID IID_IVssBackupComponentsEx3      = {0xc191bfbc, 0xb602, 0x4675, {0x8b, 0xd1, 0x67, 0xd6, 0x42, 0xf5, 0x29, 0xd5}};
typedef struct _VSS_COMPONENTINFO
{
    VSS_COMPONENT_TYPE type;
    BSTR bstrLogicalPath;
    BSTR bstrComponentName;
    BSTR bstrCaption;
    BYTE *pbIcon;
    UINT cbIcon;
    BOOL bRestoreMetadata;
    BOOL bNotifyOnBackupComplete;
    BOOL bSelectable;
    BOOL bSelectableForRestore;
    DWORD dwComponentFlags;
    UINT cFileCount;
    UINT cDatabases;
    UINT cLogFiles;
    UINT cDependencies;
} VSS_COMPONENTINFO;
typedef const VSS_COMPONENTINFO *PVSSCOMPONENTINFO;
#ifndef __IVssWMComponent_FWD_DEFINED__
#define __IVssWMComponent_FWD_DEFINED__
typedef interface IVssWMComponent IVssWMComponent;
#endif
#ifndef __IVssExamineWriterMetadata_FWD_DEFINED__
#define __IVssExamineWriterMetadata_FWD_DEFINED__
typedef interface IVssExamineWriterMetadata IVssExamineWriterMetadata;
#endif
#ifndef __IVssExamineWriterMetadataEx_FWD_DEFINED__
#define __IVssExamineWriterMetadataEx_FWD_DEFINED__
typedef interface IVssExamineWriterMetadataEx IVssExamineWriterMetadataEx;
#endif
#ifndef __IVssExamineWriterMetadataEx2_FWD_DEFINED__
#define __IVssExamineWriterMetadataEx2_FWD_DEFINED__
typedef interface IVssExamineWriterMetadataEx2 IVssExamineWriterMetadataEx2;
#endif
#ifndef __IVssWriterComponentsExt_FWD_DEFINED__
#define __IVssWriterComponentsExt_FWD_DEFINED__
typedef interface IVssWriterComponentsExt IVssWriterComponentsExt;
#endif
#ifndef __IVssBackupComponents_FWD_DEFINED__
#define __IVssBackupComponents_FWD_DEFINED__
typedef interface IVssBackupComponents IVssBackupComponents;
#endif
#ifndef __IVssBackupComponentsEx_FWD_DEFINED__
#define __IVssBackupComponentsEx_FWD_DEFINED__
typedef interface IVssBackupComponentsEx IVssBackupComponentsEx;
#endif
#ifndef __IVssBackupComponentsEx2_FWD_DEFINED__
#define __IVssBackupComponentsEx2_FWD_DEFINED__
typedef interface IVssBackupComponentsEx2 IVssBackupComponentsEx2;
#endif
#ifndef __IVssBackupComponentsEx3_FWD_DEFINED__
#define __IVssBackupComponentsEx3_FWD_DEFINED__
typedef interface IVssBackupComponentsEx3 IVssBackupComponentsEx3;
#endif
#ifndef __IVssWMComponent_INTERFACE_DEFINED__
#define __IVssWMComponent_INTERFACE_DEFINED__
extern const IID IID_IKsTopologyInfo;
typedef struct IVssWMComponentVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVssWMComponent * This, REFIID riid, void **ppvObject);
	ULONG  (STDMETHODCALLTYPE * AddRef) (IVssWMComponent * This);
	ULONG  (STDMETHODCALLTYPE * Release) (IVssWMComponent * This);
	HRESULT(STDMETHODCALLTYPE * GetComponentInfo) (PVSSCOMPONENTINFO * ppInfo);
	HRESULT(STDMETHODCALLTYPE * FreeComponentInfo) (PVSSCOMPONENTINFO pInfo);
	HRESULT(STDMETHODCALLTYPE * GetFile) (UINT iFile, IVssWMFiledesc ** ppFiledesc);
	HRESULT(STDMETHODCALLTYPE * GetDatabaseFile) (UINT iDBFile, IVssWMFiledesc ** ppFiledesc);
	HRESULT(STDMETHODCALLTYPE * GetDatabaseLogFile) (UINT iDbLogFile, IVssWMFiledesc ** ppFiledesc);
	HRESULT(STDMETHODCALLTYPE * GetDependency) (UINT iDependency, IVssWMDependency ** ppDependency);
} IVssWMComponentVtbl;
interface IVssWMComponent
{
	CONST_VTBL struct IVssWMComponentVtbl *lpVtbl;
};
#endif
//class __declspec(uuid("902fcf7f-b7fd-42f8-81f1-b2e400b1e5bd")) IVssExamineWriterMetadata:public IUnknown
typedef struct IVssExamineWriterMetadataVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVssExamineWriterMetadata * This, REFIID riid, void **ppvObject);
	ULONG  (STDMETHODCALLTYPE * AddRef) (IVssExamineWriterMetadata * This);
	ULONG  (STDMETHODCALLTYPE * Release) (IVssExamineWriterMetadata * This);
	HRESULT(STDMETHODCALLTYPE * GetIdentity) (IVssExamineWriterMetadata * This, VSS_ID *pidInstance, VSS_ID *pidWriter, BSTR *pbstrWriterName, VSS_USAGE_TYPE *pUsage, VSS_SOURCE_TYPE *pSource);
	HRESULT(STDMETHODCALLTYPE * GetFileCounts) (IVssExamineWriterMetadata * This, UINT * pcIncludeFiles, UINT * pcExcludeFiles, UINT * pcComponents);
	HRESULT(STDMETHODCALLTYPE * GetIncludeFile) (IVssExamineWriterMetadata * This, UINT iFile, IVssWMFiledesc ** ppFiledesc);
	HRESULT(STDMETHODCALLTYPE * GetExcludeFile) (IVssExamineWriterMetadata * This, UINT iFile, IVssWMFiledesc ** ppFiledesc);
	HRESULT(STDMETHODCALLTYPE * GetComponent) (IVssExamineWriterMetadata * This, UINT iComponent, IVssWMComponent ** ppComponent);
	HRESULT(STDMETHODCALLTYPE * GetRestoreMethod) (IVssExamineWriterMetadata * This, VSS_RESTOREMETHOD_ENUM * pMethod, BSTR * pbstrService, BSTR * pbstrUserProcedure, VSS_WRITERRESTORE_ENUM * pwriterRestore, BOOL *pbRebootRequired, UINT * pcMappings);
	HRESULT(STDMETHODCALLTYPE * GetAlternateLocationMapping) (IVssExamineWriterMetadata * This, UINT iMapping, IVssWMFiledesc ** ppFiledesc);
	HRESULT(STDMETHODCALLTYPE * GetBackupSchema) (IVssExamineWriterMetadata * This, DWORD * pdwSchemaMask);
	HRESULT(STDMETHODCALLTYPE * GetDocument) (IVssExamineWriterMetadata * This, IXMLDOMDocument ** pDoc);
	HRESULT(STDMETHODCALLTYPE * aveAsXML) (IVssExamineWriterMetadata * This, BSTR * pbstrXML);
	HRESULT(STDMETHODCALLTYPE * LoadFromXML) (IVssExamineWriterMetadata * This, BSTR bstrXML);
} IVssExamineWriterMetadataVtbl;
interface IVssExamineWriterMetadata
{
	CONST_VTBL struct IVssExamineWriterMetadataVtbl *lpVtbl;
};
//class __declspec(uuid("0c0e5ec0-ca44-472b-b702-e652db1c0451")) IVssExamineWriterMetadataEx:public IVssExamineWriterMetadata
typedef struct IVssExamineWriterMetadataExVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVssExamineWriterMetadataEx * This, REFIID riid, void **ppvObject);
	ULONG  (STDMETHODCALLTYPE * AddRef) (IVssExamineWriterMetadataEx * This);
	ULONG  (STDMETHODCALLTYPE * Release) (IVssExamineWriterMetadataEx * This);
	HRESULT(STDMETHODCALLTYPE * GetIdentity) (IVssExamineWriterMetadataEx * This, VSS_ID *pidInstance, VSS_ID *pidWriter, BSTR *pbstrWriterName, VSS_USAGE_TYPE *pUsage, VSS_SOURCE_TYPE *pSource);
	HRESULT(STDMETHODCALLTYPE * GetFileCounts) (IVssExamineWriterMetadataEx * This, UINT * pcIncludeFiles, UINT * pcExcludeFiles, UINT * pcComponents);
	HRESULT(STDMETHODCALLTYPE * GetIncludeFile) (IVssExamineWriterMetadataEx * This, UINT iFile, IVssWMFiledesc ** ppFiledesc);
	HRESULT(STDMETHODCALLTYPE * GetExcludeFile) (IVssExamineWriterMetadataEx * This, UINT iFile, IVssWMFiledesc ** ppFiledesc);
	HRESULT(STDMETHODCALLTYPE * GetComponent) (IVssExamineWriterMetadataEx * This, UINT iComponent, IVssWMComponent ** ppComponent);
	HRESULT(STDMETHODCALLTYPE * GetRestoreMethod) (IVssExamineWriterMetadataEx * This, VSS_RESTOREMETHOD_ENUM * pMethod, BSTR * pbstrService, BSTR * pbstrUserProcedure, VSS_WRITERRESTORE_ENUM * pwriterRestore, BOOL *pbRebootRequired, UINT * pcMappings);
	HRESULT(STDMETHODCALLTYPE * GetAlternateLocationMapping) (IVssExamineWriterMetadataEx * This, UINT iMapping, IVssWMFiledesc ** ppFiledesc);
	HRESULT(STDMETHODCALLTYPE * GetBackupSchema) (IVssExamineWriterMetadataEx * This, DWORD * pdwSchemaMask);
	HRESULT(STDMETHODCALLTYPE * GetDocument) (IVssExamineWriterMetadataEx * This, IXMLDOMDocument ** pDoc);
	HRESULT(STDMETHODCALLTYPE * aveAsXML) (IVssExamineWriterMetadataEx * This, BSTR * pbstrXML);
	HRESULT(STDMETHODCALLTYPE * LoadFromXML) (IVssExamineWriterMetadataEx * This, BSTR bstrXML);
	HRESULT(STDMETHODCALLTYPE * GetIdentityEx) (IVssExamineWriterMetadataEx * This, VSS_ID *pidInstance, VSS_ID *pidWriter, BSTR *pbstrWriterName, BSTR *pbstrInstanceName, VSS_USAGE_TYPE *pUsage, VSS_SOURCE_TYPE *pSource);
} IVssExamineWriterMetadataExVtbl;
interface IVssExamineWriterMetadataEx
{
	CONST_VTBL struct IVssExamineWriterMetadataExVtbl *lpVtbl;
};
//class __declspec(uuid("ce115780-a611-431b-b57f-c38303ab6aee")) IVssExamineWriterMetadataEx2:public IVssExamineWriterMetadataEx
typedef struct IVssExamineWriterMetadataEx2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVssExamineWriterMetadataEx2 * This, REFIID riid, void **ppvObject);
	ULONG  (STDMETHODCALLTYPE * AddRef) (IVssExamineWriterMetadataEx2 * This);
	ULONG  (STDMETHODCALLTYPE * Release) (IVssExamineWriterMetadataEx2 * This);
	HRESULT(STDMETHODCALLTYPE * GetIdentity) (IVssExamineWriterMetadataEx2 * This, VSS_ID *pidInstance, VSS_ID *pidWriter, BSTR *pbstrWriterName, VSS_USAGE_TYPE *pUsage, VSS_SOURCE_TYPE *pSource);
	HRESULT(STDMETHODCALLTYPE * GetFileCounts) (IVssExamineWriterMetadataEx2 * This, UINT * pcIncludeFiles, UINT * pcExcludeFiles, UINT * pcComponents);
	HRESULT(STDMETHODCALLTYPE * GetIncludeFile) (IVssExamineWriterMetadataEx2 * This, UINT iFile, IVssWMFiledesc ** ppFiledesc);
	HRESULT(STDMETHODCALLTYPE * GetExcludeFile) (IVssExamineWriterMetadataEx2 * This, UINT iFile, IVssWMFiledesc ** ppFiledesc);
	HRESULT(STDMETHODCALLTYPE * GetComponent) (IVssExamineWriterMetadataEx2 * This, UINT iComponent, IVssWMComponent ** ppComponent);
	HRESULT(STDMETHODCALLTYPE * GetRestoreMethod) (IVssExamineWriterMetadataEx2 * This, VSS_RESTOREMETHOD_ENUM * pMethod, BSTR * pbstrService, BSTR * pbstrUserProcedure, VSS_WRITERRESTORE_ENUM * pwriterRestore, BOOL *pbRebootRequired, UINT * pcMappings);
	HRESULT(STDMETHODCALLTYPE * GetAlternateLocationMapping) (IVssExamineWriterMetadataEx2 * This, UINT iMapping, IVssWMFiledesc ** ppFiledesc);
	HRESULT(STDMETHODCALLTYPE * GetBackupSchema) (IVssExamineWriterMetadataEx2 * This, DWORD * pdwSchemaMask);
	HRESULT(STDMETHODCALLTYPE * GetDocument) (IVssExamineWriterMetadataEx2 * This, IXMLDOMDocument ** pDoc);
	HRESULT(STDMETHODCALLTYPE * aveAsXML) (IVssExamineWriterMetadataEx2 * This, BSTR * pbstrXML);
	HRESULT(STDMETHODCALLTYPE * LoadFromXML) (IVssExamineWriterMetadataEx2 * This, BSTR bstrXML);
	HRESULT(STDMETHODCALLTYPE * GetIdentityEx) (IVssExamineWriterMetadataEx2 * This, VSS_ID *pidInstance, VSS_ID *pidWriter, BSTR *pbstrWriterName, BSTR *pbstrInstanceName, VSS_USAGE_TYPE *pUsage, VSS_SOURCE_TYPE *pSource);
	HRESULT(STDMETHODCALLTYPE * GetVersion) (IVssExamineWriterMetadataEx2 * This, DWORD *pdwMajorVersion, DWORD *pdwMinorVersion);
	HRESULT(STDMETHODCALLTYPE * GetExcludeFromSnapshotCount) (IVssExamineWriterMetadataEx2 * This, UINT * pcExcludedFromSnapshot);
	HRESULT(STDMETHODCALLTYPE * GetExcludeFromSnapshotFile) (IVssExamineWriterMetadataEx2 * This, UINT iFile, IVssWMFiledesc ** ppFiledesc);
} IVssExamineWriterMetadataEx2Vtbl;
interface IVssExamineWriterMetadataEx2
{
	CONST_VTBL struct IVssExamineWriterMetadataEx2Vtbl *lpVtbl;
};
//class IVssWriterComponentsExt public IVssWriterComponents, public IUnknown
typedef struct IVssWriterComponentsExtVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * GetComponentCount) (IVssWriterComponentsExt *this, UINT *pcComponents);
	HRESULT(STDMETHODCALLTYPE * GetWriterInfo) (IVssWriterComponentsExt *this, VSS_ID *pidInstance,  VSS_ID *pidWriter);
	HRESULT(STDMETHODCALLTYPE * GetComponent) (IVssWriterComponentsExt *this, UINT iComponent,  IVssComponent **ppComponent);
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVssWriterComponentsExt * This, REFIID riid, void **ppvObject);
	ULONG  (STDMETHODCALLTYPE * AddRef) (IVssWriterComponentsExt * This);
	ULONG  (STDMETHODCALLTYPE * Release) (IVssWriterComponentsExt * This);
} IVssWriterComponentsExtVtbl;
interface IVssWriterComponentsExt
{
	CONST_VTBL struct IVssWriterComponentsExtVtbl *lpVtbl;
};
//class __declspec(uuid("665c1d5f-c218-414d-a05d-7fef5f9d5c86")) IVssBackupComponents:public IUnknown
typedef struct IVssBackupComponentsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVssBackupComponents * This, REFIID riid, void **ppvObject);
	ULONG  (STDMETHODCALLTYPE * AddRef) (IVssBackupComponents * This);
	ULONG  (STDMETHODCALLTYPE * Release) (IVssBackupComponents * This);
	HRESULT(STDMETHODCALLTYPE * GetWriterComponentsCount) (IVssBackupComponents * This, UINT *pcComponents);
	HRESULT(STDMETHODCALLTYPE * GetWriterComponents) (IVssBackupComponents * This, UINT iWriter, IVssWriterComponentsExt ** ppWriter);
	HRESULT(STDMETHODCALLTYPE * InitializeForBackup) (IVssBackupComponents * This, BSTR bstrXML/* = NULL*/);
	HRESULT(STDMETHODCALLTYPE * SetBackupState) (IVssBackupComponents * This, BOOL bSelectComponents, BOOL bBackupBootableSystemState, VSS_BACKUP_TYPE backupType, BOOL bPartialFileSupport /*= false*/);
	HRESULT(STDMETHODCALLTYPE * InitializeForRestore) (IVssBackupComponents * This, BSTR bstrXML);
	HRESULT(STDMETHODCALLTYPE * SetRestoreState) (IVssBackupComponents * This, VSS_RESTORE_TYPE restoreType);
	HRESULT(STDMETHODCALLTYPE * GatherWriterMetadata) (IVssBackupComponents * This, IVssAsync ** pAsync);
	HRESULT(STDMETHODCALLTYPE * GetWriterMetadataCount) (IVssBackupComponents * This, UINT * pcWriters);
	HRESULT(STDMETHODCALLTYPE * GetWriterMetadata) (IVssBackupComponents * This, UINT iWriter, VSS_ID * pidInstance, IVssExamineWriterMetadata ** ppMetadata);
	HRESULT(STDMETHODCALLTYPE * FreeWriterMetadata) (IVssBackupComponents * This);
	HRESULT(STDMETHODCALLTYPE * AddComponent) (IVssBackupComponents * This, VSS_ID instanceId, VSS_ID writerId, VSS_COMPONENT_TYPE ct, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName);
	HRESULT(STDMETHODCALLTYPE * PrepareForBackup) (IVssBackupComponents * This, IVssAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * AbortBackup) (IVssBackupComponents * This);
	HRESULT(STDMETHODCALLTYPE * GatherWriterStatus) (IVssBackupComponents * This, IVssAsync ** pAsync);
	HRESULT(STDMETHODCALLTYPE * GetWriterStatusCount) (IVssBackupComponents * This, UINT * pcWriters);
	HRESULT(STDMETHODCALLTYPE * FreeWriterStatus) (IVssBackupComponents * This);
	HRESULT(STDMETHODCALLTYPE * GetWriterStatus) (IVssBackupComponents * This, UINT iWriter, VSS_ID * pidInstance, VSS_ID * pidWriter, BSTR * pbstrWriter, VSS_WRITER_STATE * pnStatus, HRESULT * phResultFailure);
	HRESULT(STDMETHODCALLTYPE * SetBackupSucceeded) (IVssBackupComponents * This, VSS_ID instanceId, VSS_ID writerId, VSS_COMPONENT_TYPE ct, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName, BOOL bSucceded);
	HRESULT(STDMETHODCALLTYPE * SetBackupOptions) (IVssBackupComponents * This, VSS_ID writerId, VSS_COMPONENT_TYPE ct, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName, LPCWSTR wszBackupOptions);
	HRESULT(STDMETHODCALLTYPE * SetSelectedForRestore) (IVssBackupComponents * This, VSS_ID writerId, VSS_COMPONENT_TYPE ct, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName, BOOL bSelectedForRestore);
	HRESULT(STDMETHODCALLTYPE * SetRestoreOptions) (IVssBackupComponents * This, VSS_ID writerId, VSS_COMPONENT_TYPE ct, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName, LPCWSTR wszRestoreOptions);
	HRESULT(STDMETHODCALLTYPE * SetAdditionalRestores) (IVssBackupComponents * This, VSS_ID writerId, VSS_COMPONENT_TYPE ct, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName, BOOL bAdditionalRestores);
	HRESULT(STDMETHODCALLTYPE * SetPreviousBackupStamp) (IVssBackupComponents * This, VSS_ID writerId, VSS_COMPONENT_TYPE ct, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName, LPCWSTR wszPreviousBackupStamp);
	HRESULT(STDMETHODCALLTYPE * SaveAsXML) (IVssBackupComponents * This, BSTR * pbstrXML);
	HRESULT(STDMETHODCALLTYPE * BackupComplete) (IVssBackupComponents * This, IVssAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * AddAlternativeLocationMapping) (IVssBackupComponents * This, VSS_ID writerId, VSS_COMPONENT_TYPE componentType, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName, LPCWSTR wszPath, LPCWSTR wszFilespec, BOOL bRecursive, LPCWSTR wszDestination);
	HRESULT(STDMETHODCALLTYPE * AddRestoreSubcomponent) (IVssBackupComponents * This, VSS_ID writerId, VSS_COMPONENT_TYPE componentType, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName, LPCWSTR wszSubComponentLogicalPath, LPCWSTR wszSubComponentName, BOOL bRepair);
	HRESULT(STDMETHODCALLTYPE * SetFileRestoreStatus) (IVssBackupComponents * This, VSS_ID writerId, VSS_COMPONENT_TYPE ct, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName, VSS_FILE_RESTORE_STATUS status);
	HRESULT(STDMETHODCALLTYPE * AddNewTarget) (IVssBackupComponents * This, VSS_ID writerId, VSS_COMPONENT_TYPE ct, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName, LPCWSTR wszPath, LPCWSTR wszFileName, BOOL bRecursive, LPCWSTR wszAlternatePath);
	HRESULT(STDMETHODCALLTYPE * SetRangesFilePath) (IVssBackupComponents * This, VSS_ID writerId, VSS_COMPONENT_TYPE ct, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName, UINT iPartialFile, LPCWSTR wszRangesFile);
	HRESULT(STDMETHODCALLTYPE * PreRestore) (IVssBackupComponents * This, IVssAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * PostRestore) (IVssBackupComponents * This, IVssAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * SetContext) (IVssBackupComponents * This, LONG lContext);
	HRESULT(STDMETHODCALLTYPE * StartSnapshotSet) (IVssBackupComponents * This, VSS_ID * pSnapshotSetId);
	HRESULT(STDMETHODCALLTYPE * AddToSnapshotSet) (IVssBackupComponents * This, VSS_PWSZ pwszVolumeName, VSS_ID ProviderId, VSS_ID * pidSnapshot);
	HRESULT(STDMETHODCALLTYPE * DoSnapshotSet) (IVssBackupComponents * This, IVssAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * DeleteSnapshots) (IVssBackupComponents * This, VSS_ID SourceObjectId, VSS_OBJECT_TYPE eSourceObjectType, BOOL bForceDelete, LONG * plDeletedSnapshots, VSS_ID * pNondeletedSnapshotID);
	HRESULT(STDMETHODCALLTYPE * ImportSnapshots) (IVssBackupComponents * This, IVssAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * BreakSnapshotSet) (IVssBackupComponents * This, VSS_ID SnapshotSetId);
	HRESULT(STDMETHODCALLTYPE * GetSnapshotProperties) (IVssBackupComponents * This, VSS_ID SnapshotId, VSS_SNAPSHOT_PROP * pProp);
	HRESULT(STDMETHODCALLTYPE * Query) (IVssBackupComponents * This, VSS_ID QueriedObjectId, VSS_OBJECT_TYPE eQueriedObjectType, VSS_OBJECT_TYPE eReturnedObjectsType, IVssEnumObject ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * IsVolumeSupported) (IVssBackupComponents * This, VSS_ID ProviderId, VSS_PWSZ pwszVolumeName, BOOL * pbSupportedByThisProvider);
	HRESULT(STDMETHODCALLTYPE * DisableWriterClasses) (IVssBackupComponents * This, const VSS_ID * rgWriterClassId, UINT cClassId);
	HRESULT(STDMETHODCALLTYPE * EnableWriterClasses) (IVssBackupComponents * This, const VSS_ID * rgWriterClassId, UINT cClassId);
	HRESULT(STDMETHODCALLTYPE * DisableWriterInstances) (IVssBackupComponents * This, const VSS_ID * rgWriterInstanceId, UINT cInstanceId);
	HRESULT(STDMETHODCALLTYPE * ExposeSnapshot) (IVssBackupComponents * This, VSS_ID SnapshotId, VSS_PWSZ wszPathFromRoot, LONG lAttributes, VSS_PWSZ wszExpose, VSS_PWSZ * pwszExposed);
	HRESULT(STDMETHODCALLTYPE * RevertToSnapshot) (IVssBackupComponents * This, VSS_ID SnapshotId, BOOL bForceDismount);
	HRESULT(STDMETHODCALLTYPE * QueryRevertStatus) (IVssBackupComponents * This, VSS_PWSZ pwszVolume, IVssAsync ** ppAsync);
} IVssBackupComponentsVtbl;
interface IVssBackupComponents
{
	CONST_VTBL struct IVssBackupComponentsVtbl *lpVtbl;
};
//class __declspec(uuid("963f03ad-9e4c-4a34-ac15-e4b6174e5036")) IVssBackupComponentsEx:public IVssBackupComponents
typedef struct IVssBackupComponentsExVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVssBackupComponentsEx * This, REFIID riid, void **ppvObject);
	ULONG  (STDMETHODCALLTYPE * AddRef) (IVssBackupComponentsEx * This);
	ULONG  (STDMETHODCALLTYPE * Release) (IVssBackupComponentsEx * This);
	HRESULT(STDMETHODCALLTYPE * GetWriterComponentsCount) (IVssBackupComponentsEx * This, UINT *pcComponents);
	HRESULT(STDMETHODCALLTYPE * GetWriterComponents) (IVssBackupComponentsEx * This, UINT iWriter, IVssWriterComponentsExt ** ppWriter);
	HRESULT(STDMETHODCALLTYPE * InitializeForBackup) (IVssBackupComponentsEx * This, BSTR bstrXML /*= NULL*/);
	HRESULT(STDMETHODCALLTYPE * SetBackupState) (IVssBackupComponentsEx * This, BOOL bSelectComponents, BOOL bBackupBootableSystemState, VSS_BACKUP_TYPE backupType, BOOL bPartialFileSupport /*= false*/);
	HRESULT(STDMETHODCALLTYPE * InitializeForRestore) (IVssBackupComponentsEx * This, BSTR bstrXML);
	HRESULT(STDMETHODCALLTYPE * SetRestoreState) (IVssBackupComponentsEx * This, VSS_RESTORE_TYPE restoreType);
	HRESULT(STDMETHODCALLTYPE * GatherWriterMetadata) (IVssBackupComponentsEx * This, IVssAsync ** pAsync);
	HRESULT(STDMETHODCALLTYPE * GetWriterMetadataCount) (IVssBackupComponentsEx * This, UINT * pcWriters);
	HRESULT(STDMETHODCALLTYPE * GetWriterMetadata) (IVssBackupComponentsEx * This, UINT iWriter, VSS_ID * pidInstance, IVssExamineWriterMetadata ** ppMetadata);
	HRESULT(STDMETHODCALLTYPE * FreeWriterMetadata) (IVssBackupComponentsEx * This);
	HRESULT(STDMETHODCALLTYPE * AddComponent) (IVssBackupComponentsEx * This, VSS_ID instanceId, VSS_ID writerId, VSS_COMPONENT_TYPE ct, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName);
	HRESULT(STDMETHODCALLTYPE * PrepareForBackup) (IVssBackupComponentsEx * This, IVssAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * AbortBackup) (IVssBackupComponentsEx * This);
	HRESULT(STDMETHODCALLTYPE * GatherWriterStatus) (IVssBackupComponentsEx * This, IVssAsync ** pAsync);
	HRESULT(STDMETHODCALLTYPE * GetWriterStatusCount) (IVssBackupComponentsEx * This, UINT * pcWriters);
	HRESULT(STDMETHODCALLTYPE * FreeWriterStatus) (IVssBackupComponentsEx * This);
	HRESULT(STDMETHODCALLTYPE * GetWriterStatus) (IVssBackupComponentsEx * This, UINT iWriter, VSS_ID * pidInstance, VSS_ID * pidWriter, BSTR * pbstrWriter, VSS_WRITER_STATE * pnStatus, HRESULT * phResultFailure);
	HRESULT(STDMETHODCALLTYPE * SetBackupSucceeded) (IVssBackupComponentsEx * This, VSS_ID instanceId, VSS_ID writerId, VSS_COMPONENT_TYPE ct, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName, BOOL bSucceded);
	HRESULT(STDMETHODCALLTYPE * SetBackupOptions) (IVssBackupComponentsEx * This, VSS_ID writerId, VSS_COMPONENT_TYPE ct, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName, LPCWSTR wszBackupOptions);
	HRESULT(STDMETHODCALLTYPE * SetSelectedForRestore) (IVssBackupComponentsEx * This, VSS_ID writerId, VSS_COMPONENT_TYPE ct, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName, BOOL bSelectedForRestore);
	HRESULT(STDMETHODCALLTYPE * SetRestoreOptions) (IVssBackupComponentsEx * This, VSS_ID writerId, VSS_COMPONENT_TYPE ct, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName, LPCWSTR wszRestoreOptions);
	HRESULT(STDMETHODCALLTYPE * SetAdditionalRestores) (IVssBackupComponentsEx * This, VSS_ID writerId, VSS_COMPONENT_TYPE ct, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName, BOOL bAdditionalRestores);
	HRESULT(STDMETHODCALLTYPE * SetPreviousBackupStamp) (IVssBackupComponentsEx * This, VSS_ID writerId, VSS_COMPONENT_TYPE ct, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName, LPCWSTR wszPreviousBackupStamp);
	HRESULT(STDMETHODCALLTYPE * SaveAsXML) (IVssBackupComponentsEx * This, BSTR * pbstrXML);
	HRESULT(STDMETHODCALLTYPE * BackupComplete) (IVssBackupComponentsEx * This, IVssAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * AddAlternativeLocationMapping) (IVssBackupComponentsEx * This, VSS_ID writerId, VSS_COMPONENT_TYPE componentType, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName, LPCWSTR wszPath, LPCWSTR wszFilespec, BOOL bRecursive, LPCWSTR wszDestination);
	HRESULT(STDMETHODCALLTYPE * AddRestoreSubcomponent) (IVssBackupComponentsEx * This, VSS_ID writerId, VSS_COMPONENT_TYPE componentType, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName, LPCWSTR wszSubComponentLogicalPath, LPCWSTR wszSubComponentName, BOOL bRepair);
	HRESULT(STDMETHODCALLTYPE * SetFileRestoreStatus) (IVssBackupComponentsEx * This, VSS_ID writerId, VSS_COMPONENT_TYPE ct, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName, VSS_FILE_RESTORE_STATUS status);
	HRESULT(STDMETHODCALLTYPE * AddNewTarget) (IVssBackupComponentsEx * This, VSS_ID writerId, VSS_COMPONENT_TYPE ct, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName, LPCWSTR wszPath, LPCWSTR wszFileName, BOOL bRecursive, LPCWSTR wszAlternatePath);
	HRESULT(STDMETHODCALLTYPE * SetRangesFilePath) (IVssBackupComponentsEx * This, VSS_ID writerId, VSS_COMPONENT_TYPE ct, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName, UINT iPartialFile, LPCWSTR wszRangesFile);
	HRESULT(STDMETHODCALLTYPE * PreRestore) (IVssBackupComponentsEx * This, IVssAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * PostRestore) (IVssBackupComponentsEx * This, IVssAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * SetContext) (IVssBackupComponentsEx * This, LONG lContext);
	HRESULT(STDMETHODCALLTYPE * StartSnapshotSet) (IVssBackupComponentsEx * This, VSS_ID * pSnapshotSetId);
	HRESULT(STDMETHODCALLTYPE * AddToSnapshotSet) (IVssBackupComponentsEx * This, VSS_PWSZ pwszVolumeName, VSS_ID ProviderId, VSS_ID * pidSnapshot);
	HRESULT(STDMETHODCALLTYPE * DoSnapshotSet) (IVssBackupComponentsEx * This, IVssAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * DeleteSnapshots) (IVssBackupComponentsEx * This, VSS_ID SourceObjectId, VSS_OBJECT_TYPE eSourceObjectType, BOOL bForceDelete, LONG * plDeletedSnapshots, VSS_ID * pNondeletedSnapshotID);
	HRESULT(STDMETHODCALLTYPE * ImportSnapshots) (IVssBackupComponentsEx * This, IVssAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * BreakSnapshotSet) (IVssBackupComponentsEx * This, VSS_ID SnapshotSetId);
	HRESULT(STDMETHODCALLTYPE * GetSnapshotProperties) (IVssBackupComponentsEx * This, VSS_ID SnapshotId, VSS_SNAPSHOT_PROP * pProp);
	HRESULT(STDMETHODCALLTYPE * Query) (IVssBackupComponentsEx * This, VSS_ID QueriedObjectId, VSS_OBJECT_TYPE eQueriedObjectType, VSS_OBJECT_TYPE eReturnedObjectsType, IVssEnumObject ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * IsVolumeSupported) (IVssBackupComponentsEx * This, VSS_ID ProviderId, VSS_PWSZ pwszVolumeName, BOOL * pbSupportedByThisProvider);
	HRESULT(STDMETHODCALLTYPE * DisableWriterClasses) (IVssBackupComponentsEx * This, const VSS_ID * rgWriterClassId, UINT cClassId);
	HRESULT(STDMETHODCALLTYPE * EnableWriterClasses) (IVssBackupComponentsEx * This, const VSS_ID * rgWriterClassId, UINT cClassId);
	HRESULT(STDMETHODCALLTYPE * DisableWriterInstances) (IVssBackupComponentsEx * This, const VSS_ID * rgWriterInstanceId, UINT cInstanceId);
	HRESULT(STDMETHODCALLTYPE * ExposeSnapshot) (IVssBackupComponentsEx * This, VSS_ID SnapshotId, VSS_PWSZ wszPathFromRoot, LONG lAttributes, VSS_PWSZ wszExpose, VSS_PWSZ * pwszExposed);
	HRESULT(STDMETHODCALLTYPE * RevertToSnapshot) (IVssBackupComponentsEx * This, VSS_ID SnapshotId, BOOL bForceDismount);
	HRESULT(STDMETHODCALLTYPE * QueryRevertStatus) (IVssBackupComponentsEx * This, VSS_PWSZ pwszVolume, IVssAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * GetWriterMetadataEx) (IVssBackupComponentsEx * This, UINT iWriter, VSS_ID *pidInstance, IVssBackupComponents **ppMetadata);
	HRESULT(STDMETHODCALLTYPE * SetSelectedForRestoreEx) (IVssBackupComponentsEx * This, VSS_ID writerId, VSS_COMPONENT_TYPE ct, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName, BOOL bSelectedForRestore, VSS_ID instanceId /*= GUID_NULL*/);
} IVssBackupComponentsExVtbl;
interface IVssBackupComponentsEx
{
	CONST_VTBL struct IVssBackupComponentsExVtbl *lpVtbl;
};
//class __declspec(uuid("acfe2b3a-22c9-4ef8-bd03-2f9ca230084e")) IVssBackupComponentsEx2:public IVssBackupComponentsEx
typedef struct IVssBackupComponentsEx2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVssBackupComponentsEx2 * This, REFIID riid, void **ppvObject);
	ULONG  (STDMETHODCALLTYPE * AddRef) (IVssBackupComponentsEx2 * This);
	ULONG  (STDMETHODCALLTYPE * Release) (IVssBackupComponentsEx2 * This);
	HRESULT(STDMETHODCALLTYPE * GetWriterComponentsCount) (IVssBackupComponentsEx2 * This, UINT *pcComponents);
	HRESULT(STDMETHODCALLTYPE * GetWriterComponents) (IVssBackupComponentsEx2 * This, UINT iWriter, IVssWriterComponentsExt ** ppWriter);
	HRESULT(STDMETHODCALLTYPE * InitializeForBackup) (IVssBackupComponentsEx2 * This, BSTR bstrXML /*= NULL*/);
	HRESULT(STDMETHODCALLTYPE * SetBackupState) (IVssBackupComponentsEx2 * This, BOOL bSelectComponents, BOOL bBackupBootableSystemState, VSS_BACKUP_TYPE backupType, BOOL bPartialFileSupport /*= false*/);
	HRESULT(STDMETHODCALLTYPE * InitializeForRestore) (IVssBackupComponentsEx2 * This, BSTR bstrXML);
	HRESULT(STDMETHODCALLTYPE * SetRestoreState) (IVssBackupComponentsEx2 * This, VSS_RESTORE_TYPE restoreType);
	HRESULT(STDMETHODCALLTYPE * GatherWriterMetadata) (IVssBackupComponentsEx2 * This, IVssAsync ** pAsync);
	HRESULT(STDMETHODCALLTYPE * GetWriterMetadataCount) (IVssBackupComponentsEx2 * This, UINT * pcWriters);
	HRESULT(STDMETHODCALLTYPE * GetWriterMetadata) (IVssBackupComponentsEx2 * This, UINT iWriter, VSS_ID * pidInstance, IVssExamineWriterMetadata ** ppMetadata);
	HRESULT(STDMETHODCALLTYPE * FreeWriterMetadata) (IVssBackupComponentsEx2 * This);
	HRESULT(STDMETHODCALLTYPE * AddComponent) (IVssBackupComponentsEx2 * This, VSS_ID instanceId, VSS_ID writerId, VSS_COMPONENT_TYPE ct, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName);
	HRESULT(STDMETHODCALLTYPE * PrepareForBackup) (IVssBackupComponentsEx2 * This, IVssAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * AbortBackup) (IVssBackupComponentsEx2 * This);
	HRESULT(STDMETHODCALLTYPE * GatherWriterStatus) (IVssBackupComponentsEx2 * This, IVssAsync ** pAsync);
	HRESULT(STDMETHODCALLTYPE * GetWriterStatusCount) (IVssBackupComponentsEx2 * This, UINT * pcWriters);
	HRESULT(STDMETHODCALLTYPE * FreeWriterStatus) (IVssBackupComponentsEx2 * This);
	HRESULT(STDMETHODCALLTYPE * GetWriterStatus) (IVssBackupComponentsEx2 * This, UINT iWriter, VSS_ID * pidInstance, VSS_ID * pidWriter, BSTR * pbstrWriter, VSS_WRITER_STATE * pnStatus, HRESULT * phResultFailure);
	HRESULT(STDMETHODCALLTYPE * SetBackupSucceeded) (IVssBackupComponentsEx2 * This, VSS_ID instanceId, VSS_ID writerId, VSS_COMPONENT_TYPE ct, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName, BOOL bSucceded);
	HRESULT(STDMETHODCALLTYPE * SetBackupOptions) (IVssBackupComponentsEx2 * This, VSS_ID writerId, VSS_COMPONENT_TYPE ct, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName, LPCWSTR wszBackupOptions);
	HRESULT(STDMETHODCALLTYPE * SetSelectedForRestore) (IVssBackupComponentsEx2 * This, VSS_ID writerId, VSS_COMPONENT_TYPE ct, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName, BOOL bSelectedForRestore);
	HRESULT(STDMETHODCALLTYPE * SetRestoreOptions) (IVssBackupComponentsEx2 * This, VSS_ID writerId, VSS_COMPONENT_TYPE ct, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName, LPCWSTR wszRestoreOptions);
	HRESULT(STDMETHODCALLTYPE * SetAdditionalRestores) (IVssBackupComponentsEx2 * This, VSS_ID writerId, VSS_COMPONENT_TYPE ct, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName, BOOL bAdditionalRestores);
	HRESULT(STDMETHODCALLTYPE * SetPreviousBackupStamp) (IVssBackupComponentsEx2 * This, VSS_ID writerId, VSS_COMPONENT_TYPE ct, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName, LPCWSTR wszPreviousBackupStamp);
	HRESULT(STDMETHODCALLTYPE * SaveAsXML) (IVssBackupComponentsEx2 * This, BSTR * pbstrXML);
	HRESULT(STDMETHODCALLTYPE * BackupComplete) (IVssBackupComponentsEx2 * This, IVssAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * AddAlternativeLocationMapping) (IVssBackupComponentsEx2 * This, VSS_ID writerId, VSS_COMPONENT_TYPE componentType, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName, LPCWSTR wszPath, LPCWSTR wszFilespec, BOOL bRecursive, LPCWSTR wszDestination);
	HRESULT(STDMETHODCALLTYPE * AddRestoreSubcomponent) (IVssBackupComponentsEx2 * This, VSS_ID writerId, VSS_COMPONENT_TYPE componentType, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName, LPCWSTR wszSubComponentLogicalPath, LPCWSTR wszSubComponentName, BOOL bRepair);
	HRESULT(STDMETHODCALLTYPE * SetFileRestoreStatus) (IVssBackupComponentsEx2 * This, VSS_ID writerId, VSS_COMPONENT_TYPE ct, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName, VSS_FILE_RESTORE_STATUS status);
	HRESULT(STDMETHODCALLTYPE * AddNewTarget) (IVssBackupComponentsEx2 * This, VSS_ID writerId, VSS_COMPONENT_TYPE ct, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName, LPCWSTR wszPath, LPCWSTR wszFileName, BOOL bRecursive, LPCWSTR wszAlternatePath);
	HRESULT(STDMETHODCALLTYPE * SetRangesFilePath) (IVssBackupComponentsEx2 * This, VSS_ID writerId, VSS_COMPONENT_TYPE ct, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName, UINT iPartialFile, LPCWSTR wszRangesFile);
	HRESULT(STDMETHODCALLTYPE * PreRestore) (IVssBackupComponentsEx2 * This, IVssAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * PostRestore) (IVssBackupComponentsEx2 * This, IVssAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * SetContext) (IVssBackupComponentsEx2 * This, LONG lContext);
	HRESULT(STDMETHODCALLTYPE * StartSnapshotSet) (IVssBackupComponentsEx2 * This, VSS_ID * pSnapshotSetId);
	HRESULT(STDMETHODCALLTYPE * AddToSnapshotSet) (IVssBackupComponentsEx2 * This, VSS_PWSZ pwszVolumeName, VSS_ID ProviderId, VSS_ID * pidSnapshot);
	HRESULT(STDMETHODCALLTYPE * DoSnapshotSet) (IVssBackupComponentsEx2 * This, IVssAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * DeleteSnapshots) (IVssBackupComponentsEx2 * This, VSS_ID SourceObjectId, VSS_OBJECT_TYPE eSourceObjectType, BOOL bForceDelete, LONG * plDeletedSnapshots, VSS_ID * pNondeletedSnapshotID);
	HRESULT(STDMETHODCALLTYPE * ImportSnapshots) (IVssBackupComponentsEx2 * This, IVssAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * BreakSnapshotSet) (IVssBackupComponentsEx2 * This, VSS_ID SnapshotSetId);
	HRESULT(STDMETHODCALLTYPE * GetSnapshotProperties) (IVssBackupComponentsEx2 * This, VSS_ID SnapshotId, VSS_SNAPSHOT_PROP * pProp);
	HRESULT(STDMETHODCALLTYPE * Query) (IVssBackupComponentsEx2 * This, VSS_ID QueriedObjectId, VSS_OBJECT_TYPE eQueriedObjectType, VSS_OBJECT_TYPE eReturnedObjectsType, IVssEnumObject ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * IsVolumeSupported) (IVssBackupComponentsEx2 * This, VSS_ID ProviderId, VSS_PWSZ pwszVolumeName, BOOL * pbSupportedByThisProvider);
	HRESULT(STDMETHODCALLTYPE * DisableWriterClasses) (IVssBackupComponentsEx2 * This, const VSS_ID * rgWriterClassId, UINT cClassId);
	HRESULT(STDMETHODCALLTYPE * EnableWriterClasses) (IVssBackupComponentsEx2 * This, const VSS_ID * rgWriterClassId, UINT cClassId);
	HRESULT(STDMETHODCALLTYPE * DisableWriterInstances) (IVssBackupComponentsEx2 * This, const VSS_ID * rgWriterInstanceId, UINT cInstanceId);
	HRESULT(STDMETHODCALLTYPE * ExposeSnapshot) (IVssBackupComponentsEx2 * This, VSS_ID SnapshotId, VSS_PWSZ wszPathFromRoot, LONG lAttributes, VSS_PWSZ wszExpose, VSS_PWSZ * pwszExposed);
	HRESULT(STDMETHODCALLTYPE * RevertToSnapshot) (IVssBackupComponentsEx2 * This, VSS_ID SnapshotId, BOOL bForceDismount);
	HRESULT(STDMETHODCALLTYPE * QueryRevertStatus) (IVssBackupComponentsEx2 * This, VSS_PWSZ pwszVolume, IVssAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * GetWriterMetadataEx) (IVssBackupComponentsEx2 * This, UINT iWriter, VSS_ID *pidInstance, IVssBackupComponents **ppMetadata);
	HRESULT(STDMETHODCALLTYPE * SetSelectedForRestoreEx) (IVssBackupComponentsEx2 * This, VSS_ID writerId, VSS_COMPONENT_TYPE ct, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName, BOOL bSelectedForRestore, VSS_ID instanceId /*= GUID_NULL*/);
	HRESULT(STDMETHODCALLTYPE * UnexposeSnapshot) (IVssBackupComponentsEx2 * This, VSS_ID snapshotId);
	HRESULT(STDMETHODCALLTYPE * SetAuthoritativeRestore) (IVssBackupComponentsEx2 * This, VSS_ID writerId, VSS_COMPONENT_TYPE ct, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName, BOOL bAuth);
	HRESULT(STDMETHODCALLTYPE * SetRollForward) (IVssBackupComponentsEx2 * This, VSS_ID writerId, VSS_COMPONENT_TYPE ct, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName, VSS_ROLLFORWARD_TYPE rollType, LPCWSTR wszRollForwardPoint);
	HRESULT(STDMETHODCALLTYPE * SetRestoreName) (IVssBackupComponentsEx2 * This, VSS_ID writerId, VSS_COMPONENT_TYPE ct, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName, LPCWSTR wszRestoreName);
	HRESULT(STDMETHODCALLTYPE * BreakSnapshotSetEx) (IVssBackupComponentsEx2 * This, VSS_ID SnapshotSetID, DWORD dwBreakFlags, IVssAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * PreFastRecovery) (IVssBackupComponentsEx2 * This, VSS_ID SnapshotSetID, DWORD dwPreFastRecoveryFlags, IVssAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * FastRecovery) (IVssBackupComponentsEx2 * This, VSS_ID SnapshotSetID, DWORD dwFastRecoveryFlags, IVssAsync ** ppAsync);
} IVssBackupComponentsEx2Vtbl;
interface IVssBackupComponentsEx2
{
	CONST_VTBL struct IVssBackupComponentsEx2Vtbl *lpVtbl;
};
//class __declspec(uuid("c191bfbc-b602-4675-8bd1-67d642f529d5")) IVssBackupComponentsEx3:public IVssBackupComponentsEx2
typedef struct IVssBackupComponentsEx3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVssBackupComponentsEx3 * This, REFIID riid, void **ppvObject);
	ULONG  (STDMETHODCALLTYPE * AddRef) (IVssBackupComponentsEx3 * This);
	ULONG  (STDMETHODCALLTYPE * Release) (IVssBackupComponentsEx3 * This);
	HRESULT(STDMETHODCALLTYPE * GetWriterComponentsCount) (IVssBackupComponentsEx3 * This, UINT *pcComponents);
	HRESULT(STDMETHODCALLTYPE * GetWriterComponents) (IVssBackupComponentsEx3 * This, UINT iWriter, IVssWriterComponentsExt ** ppWriter);
	HRESULT(STDMETHODCALLTYPE * InitializeForBackup) (IVssBackupComponentsEx3 * This, BSTR bstrXML /*= NULL*/);
	HRESULT(STDMETHODCALLTYPE * SetBackupState) (IVssBackupComponentsEx3 * This, BOOL bSelectComponents, BOOL bBackupBootableSystemState, VSS_BACKUP_TYPE backupType, BOOL bPartialFileSupport /*= false*/);
	HRESULT(STDMETHODCALLTYPE * InitializeForRestore) (IVssBackupComponentsEx3 * This, BSTR bstrXML);
	HRESULT(STDMETHODCALLTYPE * SetRestoreState) (IVssBackupComponentsEx3 * This, VSS_RESTORE_TYPE restoreType);
	HRESULT(STDMETHODCALLTYPE * GatherWriterMetadata) (IVssBackupComponentsEx3 * This, IVssAsync ** pAsync);
	HRESULT(STDMETHODCALLTYPE * GetWriterMetadataCount) (IVssBackupComponentsEx3 * This, UINT * pcWriters);
	HRESULT(STDMETHODCALLTYPE * GetWriterMetadata) (IVssBackupComponentsEx3 * This, UINT iWriter, VSS_ID * pidInstance, IVssExamineWriterMetadata ** ppMetadata);
	HRESULT(STDMETHODCALLTYPE * FreeWriterMetadata) (IVssBackupComponentsEx3 * This);
	HRESULT(STDMETHODCALLTYPE * AddComponent) (IVssBackupComponentsEx3 * This, VSS_ID instanceId, VSS_ID writerId, VSS_COMPONENT_TYPE ct, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName);
	HRESULT(STDMETHODCALLTYPE * PrepareForBackup) (IVssBackupComponentsEx3 * This, IVssAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * AbortBackup) (IVssBackupComponentsEx3 * This);
	HRESULT(STDMETHODCALLTYPE * GatherWriterStatus) (IVssBackupComponentsEx3 * This, IVssAsync ** pAsync);
	HRESULT(STDMETHODCALLTYPE * GetWriterStatusCount) (IVssBackupComponentsEx3 * This, UINT * pcWriters);
	HRESULT(STDMETHODCALLTYPE * FreeWriterStatus) (IVssBackupComponentsEx3 * This);
	HRESULT(STDMETHODCALLTYPE * GetWriterStatus) (IVssBackupComponentsEx3 * This, UINT iWriter, VSS_ID * pidInstance, VSS_ID * pidWriter, BSTR * pbstrWriter, VSS_WRITER_STATE * pnStatus, HRESULT * phResultFailure);
	HRESULT(STDMETHODCALLTYPE * SetBackupSucceeded) (IVssBackupComponentsEx3 * This, VSS_ID instanceId, VSS_ID writerId, VSS_COMPONENT_TYPE ct, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName, BOOL bSucceded);
	HRESULT(STDMETHODCALLTYPE * SetBackupOptions) (IVssBackupComponentsEx3 * This, VSS_ID writerId, VSS_COMPONENT_TYPE ct, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName, LPCWSTR wszBackupOptions);
	HRESULT(STDMETHODCALLTYPE * SetSelectedForRestore) (IVssBackupComponentsEx3 * This, VSS_ID writerId, VSS_COMPONENT_TYPE ct, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName, BOOL bSelectedForRestore);
	HRESULT(STDMETHODCALLTYPE * SetRestoreOptions) (IVssBackupComponentsEx3 * This, VSS_ID writerId, VSS_COMPONENT_TYPE ct, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName, LPCWSTR wszRestoreOptions);
	HRESULT(STDMETHODCALLTYPE * SetAdditionalRestores) (IVssBackupComponentsEx3 * This, VSS_ID writerId, VSS_COMPONENT_TYPE ct, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName, BOOL bAdditionalRestores);
	HRESULT(STDMETHODCALLTYPE * SetPreviousBackupStamp) (IVssBackupComponentsEx3 * This, VSS_ID writerId, VSS_COMPONENT_TYPE ct, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName, LPCWSTR wszPreviousBackupStamp);
	HRESULT(STDMETHODCALLTYPE * SaveAsXML) (IVssBackupComponentsEx3 * This, BSTR * pbstrXML);
	HRESULT(STDMETHODCALLTYPE * BackupComplete) (IVssBackupComponentsEx3 * This, IVssAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * AddAlternativeLocationMapping) (IVssBackupComponentsEx3 * This, VSS_ID writerId, VSS_COMPONENT_TYPE componentType, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName, LPCWSTR wszPath, LPCWSTR wszFilespec, BOOL bRecursive, LPCWSTR wszDestination);
	HRESULT(STDMETHODCALLTYPE * AddRestoreSubcomponent) (IVssBackupComponentsEx3 * This, VSS_ID writerId, VSS_COMPONENT_TYPE componentType, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName, LPCWSTR wszSubComponentLogicalPath, LPCWSTR wszSubComponentName, BOOL bRepair);
	HRESULT(STDMETHODCALLTYPE * SetFileRestoreStatus) (IVssBackupComponentsEx3 * This, VSS_ID writerId, VSS_COMPONENT_TYPE ct, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName, VSS_FILE_RESTORE_STATUS status);
	HRESULT(STDMETHODCALLTYPE * AddNewTarget) (IVssBackupComponentsEx3 * This, VSS_ID writerId, VSS_COMPONENT_TYPE ct, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName, LPCWSTR wszPath, LPCWSTR wszFileName, BOOL bRecursive, LPCWSTR wszAlternatePath);
	HRESULT(STDMETHODCALLTYPE * SetRangesFilePath) (IVssBackupComponentsEx3 * This, VSS_ID writerId, VSS_COMPONENT_TYPE ct, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName, UINT iPartialFile, LPCWSTR wszRangesFile);
	HRESULT(STDMETHODCALLTYPE * PreRestore) (IVssBackupComponentsEx3 * This, IVssAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * PostRestore) (IVssBackupComponentsEx3 * This, IVssAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * SetContext) (IVssBackupComponentsEx3 * This, LONG lContext);
	HRESULT(STDMETHODCALLTYPE * StartSnapshotSet) (IVssBackupComponentsEx3 * This, VSS_ID * pSnapshotSetId);
	HRESULT(STDMETHODCALLTYPE * AddToSnapshotSet) (IVssBackupComponentsEx3 * This, VSS_PWSZ pwszVolumeName, VSS_ID ProviderId, VSS_ID * pidSnapshot);
	HRESULT(STDMETHODCALLTYPE * DoSnapshotSet) (IVssBackupComponentsEx3 * This, IVssAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * DeleteSnapshots) (IVssBackupComponentsEx3 * This, VSS_ID SourceObjectId, VSS_OBJECT_TYPE eSourceObjectType, BOOL bForceDelete, LONG * plDeletedSnapshots, VSS_ID * pNondeletedSnapshotID);
	HRESULT(STDMETHODCALLTYPE * ImportSnapshots) (IVssBackupComponentsEx3 * This, IVssAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * BreakSnapshotSet) (IVssBackupComponentsEx3 * This, VSS_ID SnapshotSetId);
	HRESULT(STDMETHODCALLTYPE * GetSnapshotProperties) (IVssBackupComponentsEx3 * This, VSS_ID SnapshotId, VSS_SNAPSHOT_PROP * pProp);
	HRESULT(STDMETHODCALLTYPE * Query) (IVssBackupComponentsEx3 * This, VSS_ID QueriedObjectId, VSS_OBJECT_TYPE eQueriedObjectType, VSS_OBJECT_TYPE eReturnedObjectsType, IVssEnumObject ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * IsVolumeSupported) (IVssBackupComponentsEx3 * This, VSS_ID ProviderId, VSS_PWSZ pwszVolumeName, BOOL * pbSupportedByThisProvider);
	HRESULT(STDMETHODCALLTYPE * DisableWriterClasses) (IVssBackupComponentsEx3 * This, const VSS_ID * rgWriterClassId, UINT cClassId);
	HRESULT(STDMETHODCALLTYPE * EnableWriterClasses) (IVssBackupComponentsEx3 * This, const VSS_ID * rgWriterClassId, UINT cClassId);
	HRESULT(STDMETHODCALLTYPE * DisableWriterInstances) (IVssBackupComponentsEx3 * This, const VSS_ID * rgWriterInstanceId, UINT cInstanceId);
	HRESULT(STDMETHODCALLTYPE * ExposeSnapshot) (IVssBackupComponentsEx3 * This, VSS_ID SnapshotId, VSS_PWSZ wszPathFromRoot, LONG lAttributes, VSS_PWSZ wszExpose, VSS_PWSZ * pwszExposed);
	HRESULT(STDMETHODCALLTYPE * RevertToSnapshot) (IVssBackupComponentsEx3 * This, VSS_ID SnapshotId, BOOL bForceDismount);
	HRESULT(STDMETHODCALLTYPE * QueryRevertStatus) (IVssBackupComponentsEx3 * This, VSS_PWSZ pwszVolume, IVssAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * GetWriterMetadataEx) (IVssBackupComponentsEx3 * This, UINT iWriter, VSS_ID *pidInstance, IVssBackupComponents **ppMetadata);
	HRESULT(STDMETHODCALLTYPE * SetSelectedForRestoreEx) (IVssBackupComponentsEx3 * This, VSS_ID writerId, VSS_COMPONENT_TYPE ct, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName, BOOL bSelectedForRestore, VSS_ID instanceId /*= GUID_NULL*/);
	HRESULT(STDMETHODCALLTYPE * UnexposeSnapshot) (IVssBackupComponentsEx3 * This, VSS_ID snapshotId);
	HRESULT(STDMETHODCALLTYPE * SetAuthoritativeRestore) (IVssBackupComponentsEx3 * This, VSS_ID writerId, VSS_COMPONENT_TYPE ct, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName, BOOL bAuth);
	HRESULT(STDMETHODCALLTYPE * SetRollForward) (IVssBackupComponentsEx3 * This, VSS_ID writerId, VSS_COMPONENT_TYPE ct, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName, VSS_ROLLFORWARD_TYPE rollType, LPCWSTR wszRollForwardPoint);
	HRESULT(STDMETHODCALLTYPE * SetRestoreName) (IVssBackupComponentsEx3 * This, VSS_ID writerId, VSS_COMPONENT_TYPE ct, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName, LPCWSTR wszRestoreName);
	HRESULT(STDMETHODCALLTYPE * BreakSnapshotSetEx) (IVssBackupComponentsEx3 * This, VSS_ID SnapshotSetID, DWORD dwBreakFlags, IVssAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * PreFastRecovery) (IVssBackupComponentsEx3 * This, VSS_ID SnapshotSetID, DWORD dwPreFastRecoveryFlags, IVssAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * FastRecovery) (IVssBackupComponentsEx3 * This, VSS_ID SnapshotSetID, DWORD dwFastRecoveryFlags, IVssAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * GetWriterStatusEx) (IVssBackupComponentsEx3 * This, UINT iWriter, VSS_ID *pidInstance, VSS_ID *pidWriter, BSTR *pbstrWriter, VSS_WRITER_STATE *pnStatus, HRESULT *phrFailureWriter, HRESULT *phrApplication /*= NULL*/, BSTR * pbstrApplicationMessage /*= NULL*/);
	HRESULT(STDMETHODCALLTYPE * AddSnapshotToRecoverySet) (IVssBackupComponentsEx3 * This, VSS_ID snapshotId, DWORD dwFlags, VSS_PWSZ pwszDestinationVolume /*= NULL*/);
	HRESULT(STDMETHODCALLTYPE * RecoverSet) (IVssBackupComponentsEx3 * This, DWORD dwFlags, IVssAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * GetSessionId) (IVssBackupComponentsEx3 * This, VSS_ID * idSession);
} IVssBackupComponentsEx3Vtbl;
interface IVssBackupComponentsEx3
{
	CONST_VTBL struct IVssBackupComponentsEx3Vtbl *lpVtbl;
};
#define VSS_SW_BOOTABLE_STATE   (1 << 0)
HRESULT STDAPICALLTYPE CreateVssBackupComponentsInternal(IVssBackupComponents **ppBackup);
HRESULT STDAPICALLTYPE CreateVssExamineWriterMetadataInternal(BSTR bstrXML, IVssExamineWriterMetadata **ppMetadata);
HRESULT APIENTRY IsVolumeSnapshottedInternal(VSS_PWSZ pwszVolumeName, BOOL *pbSnapshotsPresent, LONG *plSnapshotCapability);
void APIENTRY VssFreeSnapshotPropertiesInternal(VSS_SNAPSHOT_PROP *pProp);
HRESULT APIENTRY GetProviderMgmtInterfaceInternal(VSS_ID ProviderId, IID InterfaceId, IUnknown **ppItf);
HRESULT APIENTRY ShouldBlockRevertInternal(LPCWSTR wszVolumeName, BOOL *pbBlock);
inline HRESULT CreateVssBackupComponents(IVssBackupComponents **ppBackup)
{
	return CreateVssBackupComponentsInternal(ppBackup);
}
inline HRESULT CreateVssExamineWriterMetadata(BSTR bstrXML, IVssExamineWriterMetadata **ppMetadata)
{
	return CreateVssExamineWriterMetadataInternal(bstrXML, ppMetadata);
}
inline HRESULT IsVolumeSnapshotted(VSS_PWSZ pwszVolumeName, BOOL *pbSnapshotsPresent, LONG *plSnapshotCapability)
{
	return IsVolumeSnapshottedInternal(pwszVolumeName, pbSnapshotsPresent, plSnapshotCapability);
}
inline void VssFreeSnapshotProperties(VSS_SNAPSHOT_PROP *pProp)
{
	VssFreeSnapshotPropertiesInternal(pProp);
}
inline HRESULT GetProviderMgmtInterface(VSS_ID ProviderId, IID InterfaceId, IUnknown **ppItf)
{
	return GetProviderMgmtInterfaceInternal(ProviderId, InterfaceId, ppItf);
}
inline HRESULT ShouldBlockRevert(LPCWSTR wszVolumeName, BOOL *pbBlock)
{
	return ShouldBlockRevertInternal(wszVolumeName, pbBlock);
}
#endif
