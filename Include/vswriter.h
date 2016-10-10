/*+@@file@@----------------------------------------------------------------*//*!
 \file		vswriter.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 17:12:57 2016
 \date		Modified on Sat Sep 17 17:12:57 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __CVSS_WRITER_H_
#define __CVSS_WRITER_H_
#if __POCC__ >= 500
#pragma once
#endif
#include "vsserror.h"
const IID IID_IVssComponent						= {0xd2c72c96, 0xc121, 0x4518, {0xb6, 0x27, 0xe5, 0xa9, 0x3d, 0x01, 0x0e, 0xad}};
const IID IID_IVssComponentEx					= {0x156c8b5e, 0xf131, 0x4bd7, {0x9c, 0x97, 0xd1, 0x92, 0x3b, 0xe7, 0xe1, 0xfa}};
const IID IID_IVssComponentEx2					= {0x3b5be0f2, 0x07a9, 0x4e4b, {0xbd, 0xd3, 0xcf, 0xdc, 0x8e, 0x2c, 0x0d, 0x2d}};
const IID IID_IVssCreateWriterMetadataEx		= {0x9f21981d, 0xd469, 0x4349, {0xb8, 0x07, 0x39, 0xe6, 0x4e, 0x46, 0x74, 0xe1}};
const IID IID_IVssCreateExpressWriterMetadata	= {0x9c772e77, 0xb26e, 0x427f, {0x92, 0xdd, 0xc9, 0x96, 0xf4, 0x1e, 0xa5, 0xe3}};
const IID IID_IVssExpressWriter					= {0xe33affdc, 0x59c7, 0x47b1, {0x97, 0xd5, 0x42, 0x66, 0x59, 0x8f, 0x62, 0x35}};
typedef enum VSS_USAGE_TYPE
{
    VSS_UT_UNDEFINED,
    VSS_UT_BOOTABLESYSTEMSTATE,
    VSS_UT_SYSTEMSERVICE,
    VSS_UT_USERDATA,
    VSS_UT_OTHER
} VSS_USAGE_TYPE;
typedef enum VSS_SOURCE_TYPE
{
    VSS_ST_UNDEFINED,
    VSS_ST_TRANSACTEDDB,
    VSS_ST_NONTRANSACTEDDB,
    VSS_ST_OTHER
} VSS_SOURCE_TYPE;
typedef enum VSS_RESTOREMETHOD_ENUM
{
    VSS_RME_UNDEFINED,
    VSS_RME_RESTORE_IF_NOT_THERE,
    VSS_RME_RESTORE_IF_CAN_REPLACE,
    VSS_RME_STOP_RESTORE_START,
    VSS_RME_RESTORE_TO_ALTERNATE_LOCATION,
    VSS_RME_RESTORE_AT_REBOOT,
    VSS_RME_RESTORE_AT_REBOOT_IF_CANNOT_REPLACE,
    VSS_RME_CUSTOM,
    VSS_RME_RESTORE_STOP_START
} VSS_RESTOREMETHOD_ENUM;
typedef enum VSS_WRITERRESTORE_ENUM
{
    VSS_WRE_UNDEFINED,
    VSS_WRE_NEVER,
    VSS_WRE_IF_REPLACE_FAILS,
    VSS_WRE_ALWAYS
} VSS_WRITERRESTORE_ENUM;
typedef enum VSS_COMPONENT_TYPE
{
    VSS_CT_UNDEFINED,
    VSS_CT_DATABASE,
    VSS_CT_FILEGROUP
} VSS_COMPONENT_TYPE;
typedef enum VSS_ALTERNATE_WRITER_STATE
{
    VSS_AWS_UNDEFINED,
    VSS_AWS_NO_ALTERNATE_WRITER,
    VSS_AWS_ALTERNATE_WRITER_EXISTS,
    VSS_AWS_THIS_IS_ALTERNATE_WRITER
} VSS_ALTERNATE_WRITER_STATE;
typedef enum VSS_SUBSCRIBE_MASK
{
    VSS_SM_POST_SNAPSHOT_FLAG = 0x00000001,
    VSS_SM_BACKUP_EVENTS_FLAG = 0x00000002,
    VSS_SM_RESTORE_EVENTS_FLAG = 0x00000004,
    VSS_SM_IO_THROTTLING_FLAG  = 0x00000008,
    VSS_SM_ALL_FLAGS           = 0xffffffff
} VSS_SUBSCRIBE_MASK;
typedef enum VSS_RESTORE_TARGET
{
    VSS_RT_UNDEFINED,
    VSS_RT_ORIGINAL,
    VSS_RT_ALTERNATE,
    VSS_RT_DIRECTED,
    VSS_RT_ORIGINAL_LOCATION
} VSS_RESTORE_TARGET;
typedef enum VSS_FILE_RESTORE_STATUS
{
    VSS_RS_UNDEFINED,
    VSS_RS_NONE,
    VSS_RS_ALL,
    VSS_RS_FAILED
} VSS_FILE_RESTORE_STATUS;
typedef enum VSS_COMPONENT_FLAGS
{
    VSS_CF_BACKUP_RECOVERY        = 0x00000001,
    VSS_CF_APP_ROLLBACK_RECOVERY  = 0x00000002,
    VSS_CF_NOT_SYSTEM_STATE       = 0x00000004
} VSS_COMPONENT_FLAGS;
#ifndef __IVssWMFiledesc_FWD_DEFINED__
#define __IVssWMFiledesc_FWD_DEFINED__
typedef interface IVssWMFiledesc IVssWMFiledesc;
#endif
#ifndef __IVssExamineWriterMetadata_FWD_DEFINED__
#define __IVssExamineWriterMetadata_FWD_DEFINED__
typedef interface IVssExamineWriterMetadata IVssExamineWriterMetadata;
#endif
#ifndef __IVssWMDependency_FWD_DEFINED__
#define __IVssWMDependency_FWD_DEFINED__
typedef interface IVssWMDependency IVssWMDependency;
#endif
#ifndef __IVssComponent_FWD_DEFINED__
#define __IVssComponent_FWD_DEFINED__
typedef interface IVssComponent IVssComponent;
#endif
#ifndef __IVssWriterComponents_FWD_DEFINED__
#define __IVssWriterComponents_FWD_DEFINED__
typedef interface IVssWriterComponents IVssWriterComponents;
#endif
#ifndef __IVssComponentEx_FWD_DEFINED__
#define __IVssComponentEx_FWD_DEFINED__
typedef interface IVssComponentEx IVssComponentEx;
#endif
#ifndef __IVssComponentEx2_FWD_DEFINED__
#define __IVssComponentEx2_FWD_DEFINED__
typedef interface IVssComponentEx2 IVssComponentEx2;
#endif
#ifndef __IVssCreateWriterMetadata_FWD_DEFINED__
#define __IVssCreateWriterMetadata_FWD_DEFINED__
typedef interface IVssCreateWriterMetadata IVssCreateWriterMetadata;
#endif
#ifndef __IVssCreateWriterMetadataEx_FWD_DEFINED__
#define __IVssCreateWriterMetadataEx_FWD_DEFINED__
typedef interface IVssCreateWriterMetadataEx IVssCreateWriterMetadataEx;
#endif
#ifndef __IVssWriterImpl_FWD_DEFINED__
#define __IVssWriterImpl_FWD_DEFINED__
typedef interface IVssWriterImpl IVssWriterImpl;
#endif
#ifndef __IVssCreateExpressWriterMetadata_FWD_DEFINED__
#define __IVssCreateExpressWriterMetadata_FWD_DEFINED__
typedef interface IVssCreateExpressWriterMetadata IVssCreateExpressWriterMetadata;
#endif
#ifndef __IVssExpressWriter_FWD_DEFINED__
#define __IVssExpressWriter_FWD_DEFINED__
typedef interface IVssExpressWriter IVssExpressWriter;
#endif
typedef struct IVssWMFiledescVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVssWMFiledesc * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE   * AddRef) (IVssWMFiledesc * This);
	ULONG(STDMETHODCALLTYPE   * Release) (IVssWMFiledesc * This);
	HRESULT(STDMETHODCALLTYPE * GetPath) (IVssWMFiledesc * This, BSTR * pbstrPath);
	HRESULT(STDMETHODCALLTYPE * GetFilespec) (IVssWMFiledesc * This, BSTR * pbstrFilespec);
	HRESULT(STDMETHODCALLTYPE * GetRecursive) (IVssWMFiledesc * This, BOOL *pbRecursive);
	HRESULT(STDMETHODCALLTYPE * GetAlternateLocation) (IVssWMFiledesc * This, BSTR * pbstrAlternateLocation);
	HRESULT(STDMETHODCALLTYPE * GetBackupTypeMask) (IVssWMFiledesc * This, DWORD * pdwTypeMask);
} IVssWMFiledescVtbl;
interface IVssWMFiledesc
{
	CONST_VTBL struct IVssWMFiledescVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVssWMFiledesc_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVssWMFiledesc_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVssWMFiledesc_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVssWMFiledesc_GetPath(This, pbstrPath) ( (This)->lpVtbl -> GetPath(This, pbstrPath) )
#define IVssWMFiledesc_GetFilespec(This, pbstrFilespec) ( (This)->lpVtbl -> GetFilespec(This, pbstrFilespec) )
#define IVssWMFiledesc_GetRecursive(This, pbRecursive) ( (This)->lpVtbl -> GetRecursive(This, pbRecursive) )
#define IVssWMFiledesc_GetAlternateLocation(This, pbstrAlternateLocation) ( (This)->lpVtbl -> GetAlternateLocation(This, pbstrAlternateLocation) )
#define IVssWMFiledesc_GetBackupTypeMask(This, pdwTypeMask) ( (This)->lpVtbl -> GetBackupTypeMask(This, pdwTypeMask) )
#endif
typedef struct IVssWMDependencyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVssWMDependency * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE   * AddRef) (IVssWMDependency * This);
	ULONG(STDMETHODCALLTYPE   * Release) (IVssWMDependency * This);
	HRESULT(STDMETHODCALLTYPE * GetWriterId) (IVssWMDependency * This, VSS_ID * pWriterId);
	HRESULT(STDMETHODCALLTYPE * GetLogicalPath) (IVssWMDependency * This, BSTR * pbstrLogicalPath);
	HRESULT(STDMETHODCALLTYPE * GetComponentName) (IVssWMDependency * This, BSTR * pbstrComponentName);
} IVssWMDependencyVtbl;
interface IVssWMDependency
{
	CONST_VTBL struct IVssWMDependencyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVssWMDependency_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVssWMDependency_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVssWMDependency_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVssWMDependency_GetWriterId(This, pWriterId) ( (This)->lpVtbl -> GetWriterId(This, pWriterId) )
#define IVssWMDependency_GetLogicalPath(This, pbstrLogicalPath) ( (This)->lpVtbl -> GetLogicalPath(This, pbstrLogicalPath) )
#define IVssWMDependency_GetComponentName(This, pbstrComponentName) ( (This)->lpVtbl -> GetComponentName(This, pbstrComponentName) )
#endif
//__declspec(uuid("d2c72c96-c121-4518-b627-e5a93d010ead")) IVssComponent:public IUnknown
typedef struct IVssComponentVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVssComponent * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE   * AddRef) (IVssComponent * This);
	ULONG(STDMETHODCALLTYPE   * Release) (IVssComponent * This);
	HRESULT(STDMETHODCALLTYPE * GetLogicalPath) (IVssComponent * This, BSTR * pbstrPath);
	HRESULT(STDMETHODCALLTYPE * GetComponentType) (IVssComponent * This, VSS_COMPONENT_TYPE * pct);
	HRESULT(STDMETHODCALLTYPE * GetComponentName) (IVssComponent * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * GetBackupSucceeded) (IVssComponent * This, BOOL * pbSucceeded);
	HRESULT(STDMETHODCALLTYPE * GetAlternateLocationMappingCount) (IVssComponent * This, UINT * pcMappings);
	HRESULT(STDMETHODCALLTYPE * GetAlternateLocationMapping) (IVssComponent * This, UINT iMapping, IVssWMFiledesc ** ppFiledesc);
	HRESULT(STDMETHODCALLTYPE * SetBackupMetadata) (IVssComponent * This, LPCWSTR wszData);
	HRESULT(STDMETHODCALLTYPE * GetBackupMetadata) (IVssComponent * This, BSTR * pbstrData);
	HRESULT(STDMETHODCALLTYPE * AddPartialFile) (IVssComponent * This, LPCWSTR wszPath, LPCWSTR wszFilename, LPCWSTR wszRanges, LPCWSTR wszMetadata);
	HRESULT(STDMETHODCALLTYPE * GetPartialFileCount) (IVssComponent * This, UINT * pcPartialFiles);
	HRESULT(STDMETHODCALLTYPE * GetPartialFile) (IVssComponent * This, UINT iPartialFile, BSTR * pbstrPath, BSTR * pbstrFilename, BSTR * pbstrRange, BSTR * pbstrMetadata);
	HRESULT(STDMETHODCALLTYPE * IsSelectedForRestore) (IVssComponent * This, BOOL * pbSelectedForRestore);
	HRESULT(STDMETHODCALLTYPE * GetAdditionalRestores) (IVssComponent * This, BOOL * pbAdditionalRestores);
	HRESULT(STDMETHODCALLTYPE * GetNewTargetCount) (IVssComponent * This, UINT * pcNewTarget);
	HRESULT(STDMETHODCALLTYPE * GetNewTarget) (IVssComponent * This, UINT iNewTarget, IVssWMFiledesc ** ppFiledesc);
	HRESULT(STDMETHODCALLTYPE * AddDirectedTarget) (IVssComponent * This, LPCWSTR wszSourcePath, LPCWSTR wszSourceFilename, LPCWSTR wszSourceRangeList, LPCWSTR wszDestinationPath, LPCWSTR wszDestinationFilename, LPCWSTR wszDestinationRangeList);
	HRESULT(STDMETHODCALLTYPE * GetDirectedTargetCount) (IVssComponent * This, UINT * pcDirectedTarget);
	HRESULT(STDMETHODCALLTYPE * GetDirectedTarget) (IVssComponent * This, UINT iDirectedTarget, BSTR * pbstrSourcePath, BSTR * pbstrSourceFileName, BSTR * pbstrSourceRangeList, BSTR * pbstrDestinationPath, BSTR * pbstrDestinationFilename, BSTR * pbstrDestinationRangeList);
	HRESULT(STDMETHODCALLTYPE * SetRestoreMetadata) (IVssComponent * This, LPCWSTR wszRestoreMetadata);
	HRESULT(STDMETHODCALLTYPE * GetRestoreMetadata) (IVssComponent * This, BSTR * pbstrRestoreMetadata);
	HRESULT(STDMETHODCALLTYPE * SetRestoreTarget) (IVssComponent * This, VSS_RESTORE_TARGET target);
	HRESULT(STDMETHODCALLTYPE * GetRestoreTarget) (IVssComponent * This, VSS_RESTORE_TARGET * pTarget);
	HRESULT(STDMETHODCALLTYPE * SetPreRestoreFailureMsg) (IVssComponent * This, LPCWSTR wszPreRestoreFailureMsg);
	HRESULT(STDMETHODCALLTYPE * GetPreRestoreFailureMsg) (IVssComponent * This, BSTR * pbstrPreRestoreFailureMsg);
	HRESULT(STDMETHODCALLTYPE * SetPostRestoreFailureMsg) (IVssComponent * This, LPCWSTR wszPostRestoreFailureMsg);
	HRESULT(STDMETHODCALLTYPE * GetPostRestoreFailureMsg) (IVssComponent * This, BSTR * pbstrPostRestoreFailureMsg);
	HRESULT(STDMETHODCALLTYPE * SetBackupStamp) (IVssComponent * This, LPCWSTR wszBackupStamp);
	HRESULT(STDMETHODCALLTYPE * GetBackupStamp) (IVssComponent * This, BSTR * pbstrBackupStamp);
	HRESULT(STDMETHODCALLTYPE * GetPreviousBackupStamp) (IVssComponent * This, BSTR * pbstrBackupStamp);
	HRESULT(STDMETHODCALLTYPE * GetBackupOptions) (IVssComponent * This, BSTR * pbstrBackupOptions);
	HRESULT(STDMETHODCALLTYPE * GetRestoreOptions) (IVssComponent * This, BSTR * pbstrRestoreOptions);
	HRESULT(STDMETHODCALLTYPE * GetRestoreSubcomponentCount) (IVssComponent * This, UINT * pcRestoreSubcomponent);
	HRESULT(STDMETHODCALLTYPE * GetRestoreSubcomponent) (IVssComponent * This, UINT iComponent, BSTR * pbstrLogicalPath, BSTR * pbstrComponentName, BOOL * pbRepair);
	HRESULT(STDMETHODCALLTYPE * GetFileRestoreStatus) (IVssComponent * This, VSS_FILE_RESTORE_STATUS * pStatus);
	HRESULT(STDMETHODCALLTYPE * AddDifferencedFilesByLastModifyTime) (IVssComponent * This, LPCWSTR wszPath, LPCWSTR wszFilespec, BOOL bRecursive, FILETIME ftLastModifyTime);
	HRESULT(STDMETHODCALLTYPE * AddDifferencedFilesByLastModifyLSN) (IVssComponent * This, LPCWSTR wszPath, LPCWSTR wszFilespec, BOOL bRecursive, BSTR bstrLsnString);
	HRESULT(STDMETHODCALLTYPE * GetDifferencedFilesCount) (IVssComponent * This, UINT * pcDifferencedFiles);
	HRESULT(STDMETHODCALLTYPE * GetDifferencedFile) (IVssComponent * This, UINT iDifferencedFile, BSTR * pbstrPath, BSTR * pbstrFilespec, BOOL * pbRecursive, BSTR * pbstrLsnString, FILETIME * pftLastModifyTime);
} IVssComponentVtbl;
interface IVssComponent
{
	CONST_VTBL struct IVssComponentVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVssComponent_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVssComponent_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVssComponent_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVssComponent_GetLogicalPath(This, pbstrPath) ( (This)->lpVtbl -> GetComponentType)(This, pct) )
#define IVssComponent_GetComponentType(This, pct) ( (This)->lpVtbl -> GetComponentType)(This, pct) )
#define IVssComponent_GetComponentName(This, pbstrName) ( (This)->lpVtbl -> GetComponentName) (This, pbstrName) )
#define IVssComponent_GetBackupSucceeded(This, pbSucceeded) ( (This)->lpVtbl -> GetBackupSucceeded) (This, pbSucceeded) )
#define IVssComponent_GetAlternateLocationMappingCount(This, pcMappings) ( (This)->lpVtbl -> GetAlternateLocationMappingCount) (This, pcMappings) )
#define IVssComponent_GetAlternateLocationMapping(This, iMapping, ppFiledesc) ( (This)->lpVtbl -> GetAlternateLocationMapping) (This, iMapping, ppFiledesc) )
#define IVssComponent_SetBackupMetadata(This, wszData) ( (This)->lpVtbl -> SetBackupMetadata) (This, wszData) )
#define IVssComponent_GetBackupMetadata(This, pbstrData) ( (This)->lpVtbl -> GetBackupMetadata) (This, pbstrData) )
#define IVssComponent_AddPartialFile(This, wszPath, wszFilename, wszRanges, wszMetadata) ( (This)->lpVtbl -> AddPartialFile) (This, wszPath, wszFilename, wszRanges, wszMetadata) )
#define IVssComponent_GetPartialFileCount(This, pcPartialFiles) ( (This)->lpVtbl -> GetPartialFileCount) (This, pcPartialFiles) )
#define IVssComponent_GetPartialFile(This, iPartialFile, pbstrPath, pbstrFilename, pbstrRange, pbstrMetadata) ( (This)->lpVtbl -> GetPartialFile) (This, iPartialFile, pbstrPath, pbstrFilename, pbstrRange, pbstrMetadata) )
#define IVssComponent_IsSelectedForRestore(This, pbSelectedForRestore) ( (This)->lpVtbl -> IsSelectedForRestore) (This, pbSelectedForRestore) )
#define IVssComponent_GetAdditionalRestores(This, pbAdditionalRestores) ( (This)->lpVtbl -> GetAdditionalRestores) (This, pbAdditionalRestores) )
#define IVssComponent_GetNewTargetCount(This, pcNewTarget) ( (This)->lpVtbl -> GetNewTargetCount) (This, pcNewTarget) )
#define IVssComponent_GetNewTarget(This, iNewTarget, ppFiledesc) ( (This)->lpVtbl -> GetNewTarget) (This, iNewTarget, ppFiledesc) )
#define IVssComponent_AddDirectedTarget(This, wszSourcePath, wszSourceFilename, wszSourceRangeList, wszDestinationPath, wszDestinationFilename, wszDestinationRangeList) ( (This)->lpVtbl -> AddDirectedTarget) (This, wszSourcePath, wszSourceFilename, wszSourceRangeList, wszDestinationPath, wszDestinationFilename, wszDestinationRangeList) )
#define IVssComponent_GetDirectedTargetCount(This, pcDirectedTarget) ( (This)->lpVtbl -> GetDirectedTargetCount) (This, pcDirectedTarget) )
#define IVssComponent_GetDirectedTarget(This, iDirectedTarget, pbstrSourcePath, pbstrSourceFileName, pbstrSourceRangeList, pbstrDestinationPath, pbstrDestinationFilename, pbstrDestinationRangeList) ( (This)->lpVtbl -> GetDirectedTarget) (This, iDirectedTarget, pbstrSourcePath, pbstrSourceFileName, pbstrSourceRangeList, pbstrDestinationPath, pbstrDestinationFilename, pbstrDestinationRangeList) )
#define IVssComponent_SetRestoreMetadata(This, szRestoreMetadata) ( (This)->lpVtbl -> SetRestoreMetadata) (This, szRestoreMetadata) )
#define IVssComponent_GetRestoreMetadata(This, pbstrRestoreMetadata) ( (This)->lpVtbl -> GetRestoreMetadata) (This, pbstrRestoreMetadata) )
#define IVssComponent_SetRestoreTarget(This, target) ( (This)->lpVtbl -> SetRestoreTarget) (This, target) )
#define IVssComponent_GetRestoreTarget(This, pTarget) ( (This)->lpVtbl -> GetRestoreTarget) (This, pTarget) )
#define IVssComponent_SetPreRestoreFailureMsg(This, wszPreRestoreFailureMsg) ( (This)->lpVtbl -> SetPreRestoreFailureMsg) (This, wszPreRestoreFailureMsg) )
#define IVssComponent_GetPreRestoreFailureMsg(This, pbstrPreRestoreFailureMsg) ( (This)->lpVtbl -> GetPreRestoreFailureMsg) (This, pbstrPreRestoreFailureMsg) )
#define IVssComponent_SetPostRestoreFailureMsg(This, wszPostRestoreFailureMsg) ( (This)->lpVtbl -> SetPostRestoreFailureMsg) (This, wszPostRestoreFailureMsg) )
#define IVssComponent_GetPostRestoreFailureMsg(This, pbstrPostRestoreFailureMsg) ( (This)->lpVtbl -> GetPostRestoreFailureMsg) (This, pbstrPostRestoreFailureMsg) )
#define IVssComponent_SetBackupStamp(This, wszBackupStamp) ( (This)->lpVtbl -> SetBackupStamp) (This, wszBackupStamp) )
#define IVssComponent_GetBackupStamp(This, pbstrBackupStamp) ( (This)->lpVtbl -> GetBackupStamp) (This, pbstrBackupStamp) )
#define IVssComponent_GetPreviousBackupStamp(This, pbstrBackupStamp) ( (This)->lpVtbl -> GetPreviousBackupStamp) (This, pbstrBackupStamp) )
#define IVssComponent_GetBackupOptions(This, pbstrBackupOptions) ( (This)->lpVtbl -> GetBackupOptions) (This, pbstrBackupOptions) )
#define IVssComponent_GetRestoreOptions(This, pbstrRestoreOptions) ( (This)->lpVtbl -> GetRestoreOptions) (This, pbstrRestoreOptions) )
#define IVssComponent_GetRestoreSubcomponentCount(This, pcRestoreSubcomponent) ( (This)->lpVtbl -> GetRestoreSubcomponentCount) (This, pcRestoreSubcomponent) )
#define IVssComponent_GetRestoreSubcomponent(This, iComponent, pbstrLogicalPath, pbstrComponentName, pbRepair) ( (This)->lpVtbl -> GetRestoreSubcomponent) (This, iComponent, pbstrLogicalPath, pbstrComponentName, pbRepair) )
#define IVssComponent_GetFileRestoreStatus(This, pStatus) ( (This)->lpVtbl -> GetFileRestoreStatus) (This, pStatus) )
#define IVssComponent_AddDifferencedFilesByLastModifyTime(This, wszPath, wszFilespec, bRecursive, ftLastModifyTime) ( (This)->lpVtbl -> AddDifferencedFilesByLastModifyTime) (This, wszPath, wszFilespec, bRecursive, ftLastModifyTime) )
#define IVssComponent_AddDifferencedFilesByLastModifyLSN(This, wszPath, wszFilespec, bRecursive, bstrLsnString) ( (This)->lpVtbl -> AddDifferencedFilesByLastModifyLSN) (This, wszPath, wszFilespec, bRecursive, bstrLsnString) )
#define IVssComponent_GetDifferencedFilesCount(This, pcDifferencedFiles) ( (This)->lpVtbl -> GetDifferencedFilesCount) (This, pcDifferencedFiles) )
#define IVssComponent_GetDifferencedFile(This, iDifferencedFile, pbstrPath, pbstrFilespec, pbRecursive, pbstrLsnString, pftLastModifyTime) ( (This)->lpVtbl -> GetDifferencedFile) (This, iDifferencedFile, pbstrPath, pbstrFilespec, pbRecursive, pbstrLsnString, pftLastModifyTime) )
#endif
//class IVssWriterComponents {
typedef struct IVssWriterComponentsVtbl
{
	HRESULT(STDMETHODCALLTYPE * GetComponentCount) (IVssWriterComponents *this, UINT *pcComponents);
	HRESULT(STDMETHODCALLTYPE * GetWriterInfo) (IVssWriterComponents *this, VSS_ID *pidInstance,  VSS_ID *pidWriter);
	HRESULT(STDMETHODCALLTYPE * GetComponent) (IVssWriterComponents *this, UINT iComponent,  IVssComponent **ppComponent);
}IVssWriterComponentsVtbl;
interface IVssWriterComponents
{
	CONST_VTBL struct IVssWriterComponentsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVssWriterComponents_GetComponentCount(this, pcComponents) ( (This)->lpVtbl -> GetComponentCount(this, pcComponents) )
#define IVssWriterComponents_GetWriterInfo(this, pidInstance,  pidWriter) ( (This)->lpVtbl -> GetWriterInfo(this, pidInstance,  pidWriter) )
#define IVssWriterComponents_GetComponent(this, iComponent,  ppComponent) ( (This)->lpVtbl -> GetComponent(this, iComponent,  ppComponent) )
#endif
//class __declspec(uuid("156c8b5e-f131-4bd7-9c97-d1923be7e1fa")) IVssComponentEx:public IVssComponent
typedef struct IVssComponentExVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVssComponentEx * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE   * AddRef) (IVssComponentEx * This);
	ULONG(STDMETHODCALLTYPE   * Release) (IVssComponentEx * This);
	HRESULT(STDMETHODCALLTYPE * GetLogicalPath) (IVssComponentEx * This, BSTR * pbstrPath);
	HRESULT(STDMETHODCALLTYPE * GetComponentType) (IVssComponentEx * This, VSS_COMPONENT_TYPE * pct);
	HRESULT(STDMETHODCALLTYPE * GetComponentName) (IVssComponentEx * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * GetBackupSucceeded) (IVssComponentEx * This, BOOL * pbSucceeded);
	HRESULT(STDMETHODCALLTYPE * GetAlternateLocationMappingCount) (IVssComponentEx * This, UINT * pcMappings);
	HRESULT(STDMETHODCALLTYPE * GetAlternateLocationMapping) (IVssComponentEx * This, UINT iMapping, IVssWMFiledesc ** ppFiledesc);
	HRESULT(STDMETHODCALLTYPE * SetBackupMetadata) (IVssComponentEx * This, LPCWSTR wszData);
	HRESULT(STDMETHODCALLTYPE * GetBackupMetadata) (IVssComponentEx * This, BSTR * pbstrData);
	HRESULT(STDMETHODCALLTYPE * AddPartialFile) (IVssComponentEx * This, LPCWSTR wszPath, LPCWSTR wszFilename, LPCWSTR wszRanges, LPCWSTR wszMetadata);
	HRESULT(STDMETHODCALLTYPE * GetPartialFileCount) (IVssComponentEx * This, UINT * pcPartialFiles);
	HRESULT(STDMETHODCALLTYPE * GetPartialFile) (IVssComponentEx * This, UINT iPartialFile, BSTR * pbstrPath, BSTR * pbstrFilename, BSTR * pbstrRange, BSTR * pbstrMetadata);
	HRESULT(STDMETHODCALLTYPE * IsSelectedForRestore) (IVssComponentEx * This, BOOL * pbSelectedForRestore);
	HRESULT(STDMETHODCALLTYPE * GetAdditionalRestores) (IVssComponentEx * This, BOOL * pbAdditionalRestores);
	HRESULT(STDMETHODCALLTYPE * GetNewTargetCount) (IVssComponentEx * This, UINT * pcNewTarget);
	HRESULT(STDMETHODCALLTYPE * GetNewTarget) (IVssComponentEx * This, UINT iNewTarget, IVssWMFiledesc ** ppFiledesc);
	HRESULT(STDMETHODCALLTYPE * AddDirectedTarget) (IVssComponentEx * This, LPCWSTR wszSourcePath, LPCWSTR wszSourceFilename, LPCWSTR wszSourceRangeList, LPCWSTR wszDestinationPath, LPCWSTR wszDestinationFilename, LPCWSTR wszDestinationRangeList);
	HRESULT(STDMETHODCALLTYPE * GetDirectedTargetCount) (IVssComponentEx * This, UINT * pcDirectedTarget);
	HRESULT(STDMETHODCALLTYPE * GetDirectedTarget) (IVssComponentEx * This, UINT iDirectedTarget, BSTR * pbstrSourcePath, BSTR * pbstrSourceFileName, BSTR * pbstrSourceRangeList, BSTR * pbstrDestinationPath, BSTR * pbstrDestinationFilename, BSTR * pbstrDestinationRangeList);
	HRESULT(STDMETHODCALLTYPE * SetRestoreMetadata) (IVssComponentEx * This, LPCWSTR wszRestoreMetadata);
	HRESULT(STDMETHODCALLTYPE * GetRestoreMetadata) (IVssComponentEx * This, BSTR * pbstrRestoreMetadata);
	HRESULT(STDMETHODCALLTYPE * SetRestoreTarget) (IVssComponentEx * This, VSS_RESTORE_TARGET target);
	HRESULT(STDMETHODCALLTYPE * GetRestoreTarget) (IVssComponentEx * This, VSS_RESTORE_TARGET * pTarget);
	HRESULT(STDMETHODCALLTYPE * SetPreRestoreFailureMsg) (IVssComponentEx * This, LPCWSTR wszPreRestoreFailureMsg);
	HRESULT(STDMETHODCALLTYPE * GetPreRestoreFailureMsg) (IVssComponentEx * This, BSTR * pbstrPreRestoreFailureMsg);
	HRESULT(STDMETHODCALLTYPE * SetPostRestoreFailureMsg) (IVssComponentEx * This, LPCWSTR wszPostRestoreFailureMsg);
	HRESULT(STDMETHODCALLTYPE * GetPostRestoreFailureMsg) (IVssComponentEx * This, BSTR * pbstrPostRestoreFailureMsg);
	HRESULT(STDMETHODCALLTYPE * SetBackupStamp) (IVssComponentEx * This, LPCWSTR wszBackupStamp);
	HRESULT(STDMETHODCALLTYPE * GetBackupStamp) (IVssComponentEx * This, BSTR * pbstrBackupStamp);
	HRESULT(STDMETHODCALLTYPE * GetPreviousBackupStamp) (IVssComponentEx * This, BSTR * pbstrBackupStamp);
	HRESULT(STDMETHODCALLTYPE * GetBackupOptions) (IVssComponentEx * This, BSTR * pbstrBackupOptions);
	HRESULT(STDMETHODCALLTYPE * GetRestoreOptions) (IVssComponentEx * This, BSTR * pbstrRestoreOptions);
	HRESULT(STDMETHODCALLTYPE * GetRestoreSubcomponentCount) (IVssComponentEx * This, UINT * pcRestoreSubcomponent);
	HRESULT(STDMETHODCALLTYPE * GetRestoreSubcomponent) (IVssComponentEx * This, UINT iComponent, BSTR * pbstrLogicalPath, BSTR * pbstrComponentName, BOOL * pbRepair);
	HRESULT(STDMETHODCALLTYPE * GetFileRestoreStatus) (IVssComponentEx * This, VSS_FILE_RESTORE_STATUS * pStatus);
	HRESULT(STDMETHODCALLTYPE * AddDifferencedFilesByLastModifyTime) (IVssComponentEx * This, LPCWSTR wszPath, LPCWSTR wszFilespec, BOOL bRecursive, FILETIME ftLastModifyTime);
	HRESULT(STDMETHODCALLTYPE * AddDifferencedFilesByLastModifyLSN) (IVssComponentEx * This, LPCWSTR wszPath, LPCWSTR wszFilespec, BOOL bRecursive, BSTR bstrLsnString);
	HRESULT(STDMETHODCALLTYPE * GetDifferencedFilesCount) (IVssComponentEx * This, UINT * pcDifferencedFiles);
	HRESULT(STDMETHODCALLTYPE * GetDifferencedFile) (IVssComponentEx * This, UINT iDifferencedFile, BSTR * pbstrPath, BSTR * pbstrFilespec, BOOL * pbRecursive, BSTR * pbstrLsnString, FILETIME * pftLastModifyTime);
	HRESULT(STDMETHODCALLTYPE * SetPrepareForBackupFailureMsg) (IVssComponentEx * This, LPCWSTR wszFailureMsg);
	HRESULT(STDMETHODCALLTYPE * SetPostSnapshotFailureMsg) (IVssComponentEx * This, LPCWSTR wszFailureMsg);
	HRESULT(STDMETHODCALLTYPE * GetPrepareForBackupFailureMsg) (IVssComponentEx * This, BSTR * pbstrFailureMsg);
	HRESULT(STDMETHODCALLTYPE * GetPostSnapshotFailureMsg) (IVssComponentEx * This, BSTR * pbstrFailureMsg);
	HRESULT(STDMETHODCALLTYPE * GetAuthoritativeRestore) (IVssComponentEx * This, BOOL *pbAuth);
	HRESULT(STDMETHODCALLTYPE * GetRollForward) (IVssComponentEx * This, VSS_ROLLFORWARD_TYPE * pRollType, BSTR * pbstrPoint);
	HRESULT(STDMETHODCALLTYPE * GetRestoreName) (IVssComponentEx * This, BSTR * pbstrName);
} IVssComponentExVtbl;
interface IVssComponentEx
{
	CONST_VTBL struct IVssComponentExVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVssComponentEx_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVssComponentEx_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVssComponentEx_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVssComponentEx_GetLogicalPath(This, pbstrPath) ( (This)->lpVtbl -> GetComponentType)(This, pct) )
#define IVssComponentEx_GetComponentType(This, pct) ( (This)->lpVtbl -> GetComponentType)(This, pct) )
#define IVssComponentEx_GetComponentName(This, pbstrName) ( (This)->lpVtbl -> GetComponentName) (This, pbstrName) )
#define IVssComponentEx_GetBackupSucceeded(This, pbSucceeded) ( (This)->lpVtbl -> GetBackupSucceeded) (This, pbSucceeded) )
#define IVssComponentEx_GetAlternateLocationMappingCount(This, pcMappings) ( (This)->lpVtbl -> GetAlternateLocationMappingCount) (This, pcMappings) )
#define IVssComponentEx_GetAlternateLocationMapping(This, iMapping, ppFiledesc) ( (This)->lpVtbl -> GetAlternateLocationMapping) (This, iMapping, ppFiledesc) )
#define IVssComponentEx_SetBackupMetadata(This, wszData) ( (This)->lpVtbl -> SetBackupMetadata) (This, wszData) )
#define IVssComponentEx_GetBackupMetadata(This, pbstrData) ( (This)->lpVtbl -> GetBackupMetadata) (This, pbstrData) )
#define IVssComponentEx_AddPartialFile(This, wszPath, wszFilename, wszRanges, wszMetadata) ( (This)->lpVtbl -> AddPartialFile) (This, wszPath, wszFilename, wszRanges, wszMetadata) )
#define IVssComponentEx_GetPartialFileCount(This, pcPartialFiles) ( (This)->lpVtbl -> GetPartialFileCount) (This, pcPartialFiles) )
#define IVssComponentEx_GetPartialFile(This, iPartialFile, pbstrPath, pbstrFilename, pbstrRange, pbstrMetadata) ( (This)->lpVtbl -> GetPartialFile) (This, iPartialFile, pbstrPath, pbstrFilename, pbstrRange, pbstrMetadata) )
#define IVssComponentEx_IsSelectedForRestore(This, pbSelectedForRestore) ( (This)->lpVtbl -> IsSelectedForRestore) (This, pbSelectedForRestore) )
#define IVssComponentEx_GetAdditionalRestores(This, pbAdditionalRestores) ( (This)->lpVtbl -> GetAdditionalRestores) (This, pbAdditionalRestores) )
#define IVssComponentEx_GetNewTargetCount(This, pcNewTarget) ( (This)->lpVtbl -> GetNewTargetCount) (This, pcNewTarget) )
#define IVssComponentEx_GetNewTarget(This, iNewTarget, ppFiledesc) ( (This)->lpVtbl -> GetNewTarget) (This, iNewTarget, ppFiledesc) )
#define IVssComponentEx_AddDirectedTarget(This, wszSourcePath, wszSourceFilename, wszSourceRangeList, wszDestinationPath, wszDestinationFilename, wszDestinationRangeList) ( (This)->lpVtbl -> AddDirectedTarget) (This, wszSourcePath, wszSourceFilename, wszSourceRangeList, wszDestinationPath, wszDestinationFilename, wszDestinationRangeList) )
#define IVssComponentEx_GetDirectedTargetCount(This, pcDirectedTarget) ( (This)->lpVtbl -> GetDirectedTargetCount) (This, pcDirectedTarget) )
#define IVssComponentEx_GetDirectedTarget(This, iDirectedTarget, pbstrSourcePath, pbstrSourceFileName, pbstrSourceRangeList, pbstrDestinationPath, pbstrDestinationFilename, pbstrDestinationRangeList) ( (This)->lpVtbl -> GetDirectedTarget) (This, iDirectedTarget, pbstrSourcePath, pbstrSourceFileName, pbstrSourceRangeList, pbstrDestinationPath, pbstrDestinationFilename, pbstrDestinationRangeList) )
#define IVssComponentEx_SetRestoreMetadata(This, szRestoreMetadata) ( (This)->lpVtbl -> SetRestoreMetadata) (This, szRestoreMetadata) )
#define IVssComponentEx_GetRestoreMetadata(This, pbstrRestoreMetadata) ( (This)->lpVtbl -> GetRestoreMetadata) (This, pbstrRestoreMetadata) )
#define IVssComponentEx_SetRestoreTarget(This, target) ( (This)->lpVtbl -> SetRestoreTarget) (This, target) )
#define IVssComponentEx_GetRestoreTarget(This, pTarget) ( (This)->lpVtbl -> GetRestoreTarget) (This, pTarget) )
#define IVssComponentEx_SetPreRestoreFailureMsg(This, wszPreRestoreFailureMsg) ( (This)->lpVtbl -> SetPreRestoreFailureMsg) (This, wszPreRestoreFailureMsg) )
#define IVssComponentEx_GetPreRestoreFailureMsg(This, pbstrPreRestoreFailureMsg) ( (This)->lpVtbl -> GetPreRestoreFailureMsg) (This, pbstrPreRestoreFailureMsg) )
#define IVssComponentEx_SetPostRestoreFailureMsg(This, wszPostRestoreFailureMsg) ( (This)->lpVtbl -> SetPostRestoreFailureMsg) (This, wszPostRestoreFailureMsg) )
#define IVssComponentEx_GetPostRestoreFailureMsg(This, pbstrPostRestoreFailureMsg) ( (This)->lpVtbl -> GetPostRestoreFailureMsg) (This, pbstrPostRestoreFailureMsg) )
#define IVssComponentEx_SetBackupStamp(This, wszBackupStamp) ( (This)->lpVtbl -> SetBackupStamp) (This, wszBackupStamp) )
#define IVssComponentEx_GetBackupStamp(This, pbstrBackupStamp) ( (This)->lpVtbl -> GetBackupStamp) (This, pbstrBackupStamp) )
#define IVssComponentEx_GetPreviousBackupStamp(This, pbstrBackupStamp) ( (This)->lpVtbl -> GetPreviousBackupStamp) (This, pbstrBackupStamp) )
#define IVssComponentEx_GetBackupOptions(This, pbstrBackupOptions) ( (This)->lpVtbl -> GetBackupOptions) (This, pbstrBackupOptions) )
#define IVssComponentEx_GetRestoreOptions(This, pbstrRestoreOptions) ( (This)->lpVtbl -> GetRestoreOptions) (This, pbstrRestoreOptions) )
#define IVssComponentEx_GetRestoreSubcomponentCount(This, pcRestoreSubcomponent) ( (This)->lpVtbl -> GetRestoreSubcomponentCount) (This, pcRestoreSubcomponent) )
#define IVssComponentEx_GetRestoreSubcomponent(This, iComponent, pbstrLogicalPath, pbstrComponentName, pbRepair) ( (This)->lpVtbl -> GetRestoreSubcomponent) (This, iComponent, pbstrLogicalPath, pbstrComponentName, pbRepair) )
#define IVssComponentEx_GetFileRestoreStatus(This, pStatus) ( (This)->lpVtbl -> GetFileRestoreStatus) (This, pStatus) )
#define IVssComponentEx_AddDifferencedFilesByLastModifyTime(This, wszPath, wszFilespec, bRecursive, ftLastModifyTime) ( (This)->lpVtbl -> AddDifferencedFilesByLastModifyTime) (This, wszPath, wszFilespec, bRecursive, ftLastModifyTime) )
#define IVssComponentEx_AddDifferencedFilesByLastModifyLSN(This, wszPath, wszFilespec, bRecursive, bstrLsnString) ( (This)->lpVtbl -> AddDifferencedFilesByLastModifyLSN) (This, wszPath, wszFilespec, bRecursive, bstrLsnString) )
#define IVssComponentEx_GetDifferencedFilesCount(This, pcDifferencedFiles) ( (This)->lpVtbl -> GetDifferencedFilesCount) (This, pcDifferencedFiles) )
#define IVssComponentEx_GetDifferencedFile(This, iDifferencedFile, pbstrPath, pbstrFilespec, pbRecursive, pbstrLsnString, pftLastModifyTime) ( (This)->lpVtbl -> GetDifferencedFile) (This, iDifferencedFile, pbstrPath, pbstrFilespec, pbRecursive, pbstrLsnString, pftLastModifyTime) )
#define IVssComponentEx_SetPrepareForBackupFailureMsg(This, wszFailureMsg) ( (This)->lpVtbl -> SetPrepareForBackupFailureMsg(This, wszFailureMsg) )
#define IVssComponentEx_SetPostSnapshotFailureMsg(This, wszFailureMsg) ( (This)->lpVtbl -> SetPostSnapshotFailureMsg(This, wszFailureMsg) )
#define IVssComponentEx_GetPrepareForBackupFailureMsg(This, pbstrFailureMsg) ( (This)->lpVtbl -> GetPrepareForBackupFailureMsg(This, pbstrFailureMsg) )
#define IVssComponentEx_GetPostSnapshotFailureMsg(This, pbstrFailureMsg) ( (This)->lpVtbl -> GetPostSnapshotFailureMsg(This, pbstrFailureMsg) )
#define IVssComponentEx_GetAuthoritativeRestore(This, pbAuth) ( (This)->lpVtbl -> GetAuthoritativeRestore(This, pbAuth) )
#define IVssComponentEx_GetRollForward(This, pRollType, pbstrPoint) ( (This)->lpVtbl -> GetRollForward(This, pRollType, pbstrPoint) )
#define IVssComponentEx_GetRestoreName(This, pbstrName) ( (This)->lpVtbl -> GetRestoreName(This, pbstrName) )
#endif
//class __declspec(uuid("3b5be0f2-07a9-4e4b-bdd3-cfdc8e2c0d2d")) IVssComponentEx2:public IVssComponentEx
typedef struct IVssComponentEx2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVssComponentEx2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE   * AddRef) (IVssComponentEx2 * This);
	ULONG(STDMETHODCALLTYPE   * Release) (IVssComponentEx2 * This);
	HRESULT(STDMETHODCALLTYPE * GetLogicalPath) (IVssComponentEx2 * This, BSTR * pbstrPath);
	HRESULT(STDMETHODCALLTYPE * GetComponentType) (IVssComponentEx2 * This, VSS_COMPONENT_TYPE * pct);
	HRESULT(STDMETHODCALLTYPE * GetComponentName) (IVssComponentEx2 * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * GetBackupSucceeded) (IVssComponentEx2 * This, BOOL * pbSucceeded);
	HRESULT(STDMETHODCALLTYPE * GetAlternateLocationMappingCount) (IVssComponentEx2 * This, UINT * pcMappings);
	HRESULT(STDMETHODCALLTYPE * GetAlternateLocationMapping) (IVssComponentEx2 * This, UINT iMapping, IVssWMFiledesc ** ppFiledesc);
	HRESULT(STDMETHODCALLTYPE * SetBackupMetadata) (IVssComponentEx2 * This, LPCWSTR wszData);
	HRESULT(STDMETHODCALLTYPE * GetBackupMetadata) (IVssComponentEx2 * This, BSTR * pbstrData);
	HRESULT(STDMETHODCALLTYPE * AddPartialFile) (IVssComponentEx2 * This, LPCWSTR wszPath, LPCWSTR wszFilename, LPCWSTR wszRanges, LPCWSTR wszMetadata);
	HRESULT(STDMETHODCALLTYPE * GetPartialFileCount) (IVssComponentEx2 * This, UINT * pcPartialFiles);
	HRESULT(STDMETHODCALLTYPE * GetPartialFile) (IVssComponentEx2 * This, UINT iPartialFile, BSTR * pbstrPath, BSTR * pbstrFilename, BSTR * pbstrRange, BSTR * pbstrMetadata);
	HRESULT(STDMETHODCALLTYPE * IsSelectedForRestore) (IVssComponentEx2 * This, BOOL * pbSelectedForRestore);
	HRESULT(STDMETHODCALLTYPE * GetAdditionalRestores) (IVssComponentEx2 * This, BOOL * pbAdditionalRestores);
	HRESULT(STDMETHODCALLTYPE * GetNewTargetCount) (IVssComponentEx2 * This, UINT * pcNewTarget);
	HRESULT(STDMETHODCALLTYPE * GetNewTarget) (IVssComponentEx2 * This, UINT iNewTarget, IVssWMFiledesc ** ppFiledesc);
	HRESULT(STDMETHODCALLTYPE * AddDirectedTarget) (IVssComponentEx2 * This, LPCWSTR wszSourcePath, LPCWSTR wszSourceFilename, LPCWSTR wszSourceRangeList, LPCWSTR wszDestinationPath, LPCWSTR wszDestinationFilename, LPCWSTR wszDestinationRangeList);
	HRESULT(STDMETHODCALLTYPE * GetDirectedTargetCount) (IVssComponentEx2 * This, UINT * pcDirectedTarget);
	HRESULT(STDMETHODCALLTYPE * GetDirectedTarget) (IVssComponentEx2 * This, UINT iDirectedTarget, BSTR * pbstrSourcePath, BSTR * pbstrSourceFileName, BSTR * pbstrSourceRangeList, BSTR * pbstrDestinationPath, BSTR * pbstrDestinationFilename, BSTR * pbstrDestinationRangeList);
	HRESULT(STDMETHODCALLTYPE * SetRestoreMetadata) (IVssComponentEx2 * This, LPCWSTR wszRestoreMetadata);
	HRESULT(STDMETHODCALLTYPE * GetRestoreMetadata) (IVssComponentEx2 * This, BSTR * pbstrRestoreMetadata);
	HRESULT(STDMETHODCALLTYPE * SetRestoreTarget) (IVssComponentEx2 * This, VSS_RESTORE_TARGET target);
	HRESULT(STDMETHODCALLTYPE * GetRestoreTarget) (IVssComponentEx2 * This, VSS_RESTORE_TARGET * pTarget);
	HRESULT(STDMETHODCALLTYPE * SetPreRestoreFailureMsg) (IVssComponentEx2 * This, LPCWSTR wszPreRestoreFailureMsg);
	HRESULT(STDMETHODCALLTYPE * GetPreRestoreFailureMsg) (IVssComponentEx2 * This, BSTR * pbstrPreRestoreFailureMsg);
	HRESULT(STDMETHODCALLTYPE * SetPostRestoreFailureMsg) (IVssComponentEx2 * This, LPCWSTR wszPostRestoreFailureMsg);
	HRESULT(STDMETHODCALLTYPE * GetPostRestoreFailureMsg) (IVssComponentEx2 * This, BSTR * pbstrPostRestoreFailureMsg);
	HRESULT(STDMETHODCALLTYPE * SetBackupStamp) (IVssComponentEx2 * This, LPCWSTR wszBackupStamp);
	HRESULT(STDMETHODCALLTYPE * GetBackupStamp) (IVssComponentEx2 * This, BSTR * pbstrBackupStamp);
	HRESULT(STDMETHODCALLTYPE * GetPreviousBackupStamp) (IVssComponentEx2 * This, BSTR * pbstrBackupStamp);
	HRESULT(STDMETHODCALLTYPE * GetBackupOptions) (IVssComponentEx2 * This, BSTR * pbstrBackupOptions);
	HRESULT(STDMETHODCALLTYPE * GetRestoreOptions) (IVssComponentEx2 * This, BSTR * pbstrRestoreOptions);
	HRESULT(STDMETHODCALLTYPE * GetRestoreSubcomponentCount) (IVssComponentEx2 * This, UINT * pcRestoreSubcomponent);
	HRESULT(STDMETHODCALLTYPE * GetRestoreSubcomponent) (IVssComponentEx2 * This, UINT iComponent, BSTR * pbstrLogicalPath, BSTR * pbstrComponentName, BOOL * pbRepair);
	HRESULT(STDMETHODCALLTYPE * GetFileRestoreStatus) (IVssComponentEx2 * This, VSS_FILE_RESTORE_STATUS * pStatus);
	HRESULT(STDMETHODCALLTYPE * AddDifferencedFilesByLastModifyTime) (IVssComponentEx2 * This, LPCWSTR wszPath, LPCWSTR wszFilespec, BOOL bRecursive, FILETIME ftLastModifyTime);
	HRESULT(STDMETHODCALLTYPE * AddDifferencedFilesByLastModifyLSN) (IVssComponentEx2 * This, LPCWSTR wszPath, LPCWSTR wszFilespec, BOOL bRecursive, BSTR bstrLsnString);
	HRESULT(STDMETHODCALLTYPE * GetDifferencedFilesCount) (IVssComponentEx2 * This, UINT * pcDifferencedFiles);
	HRESULT(STDMETHODCALLTYPE * GetDifferencedFile) (IVssComponentEx2 * This, UINT iDifferencedFile, BSTR * pbstrPath, BSTR * pbstrFilespec, BOOL * pbRecursive, BSTR * pbstrLsnString, FILETIME * pftLastModifyTime);
	HRESULT(STDMETHODCALLTYPE * SetPrepareForBackupFailureMsg) (IVssComponentEx2 * This, LPCWSTR wszFailureMsg);
	HRESULT(STDMETHODCALLTYPE * SetPostSnapshotFailureMsg) (IVssComponentEx2 * This, LPCWSTR wszFailureMsg);
	HRESULT(STDMETHODCALLTYPE * GetPrepareForBackupFailureMsg) (IVssComponentEx2 * This, BSTR * pbstrFailureMsg);
	HRESULT(STDMETHODCALLTYPE * GetPostSnapshotFailureMsg) (IVssComponentEx2 * This, BSTR * pbstrFailureMsg);
	HRESULT(STDMETHODCALLTYPE * GetAuthoritativeRestore) (IVssComponentEx2 * This, BOOL *pbAuth);
	HRESULT(STDMETHODCALLTYPE * GetRollForward) (IVssComponentEx2 * This, VSS_ROLLFORWARD_TYPE * pRollType, BSTR * pbstrPoint);
	HRESULT(STDMETHODCALLTYPE * GetRestoreName) (IVssComponentEx2 * This, BSTR * pbstrName);
	HRESULT(STDMETHODCALLTYPE * SetFailure) (IVssComponentEx2 * This, HRESULT hr, HRESULT hrApplication, LPCWSTR wszApplicationMessage, DWORD dwReserved);
	HRESULT(STDMETHODCALLTYPE * GetFailure) (IVssComponentEx2 * This, HRESULT * phr, HRESULT * phrApplication, BSTR * pbstrApplicationMessage, DWORD * pdwReserved);
} IVssComponentEx2Vtbl;
interface IVssComponentEx2
{
	CONST_VTBL struct IVssComponentEx2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVssComponentEx2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVssComponentEx2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVssComponentEx2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVssComponentEx2_GetLogicalPath(This, pbstrPath) ( (This)->lpVtbl -> GetComponentType)(This, pct) )
#define IVssComponentEx2_GetComponentType(This, pct) ( (This)->lpVtbl -> GetComponentType)(This, pct) )
#define IVssComponentEx2_GetComponentName(This, pbstrName) ( (This)->lpVtbl -> GetComponentName) (This, pbstrName) )
#define IVssComponentEx2_GetBackupSucceeded(This, pbSucceeded) ( (This)->lpVtbl -> GetBackupSucceeded) (This, pbSucceeded) )
#define IVssComponentEx2_GetAlternateLocationMappingCount(This, pcMappings) ( (This)->lpVtbl -> GetAlternateLocationMappingCount) (This, pcMappings) )
#define IVssComponentEx2_GetAlternateLocationMapping(This, iMapping, ppFiledesc) ( (This)->lpVtbl -> GetAlternateLocationMapping) (This, iMapping, ppFiledesc) )
#define IVssComponentEx2_SetBackupMetadata(This, wszData) ( (This)->lpVtbl -> SetBackupMetadata) (This, wszData) )
#define IVssComponentEx2_GetBackupMetadata(This, pbstrData) ( (This)->lpVtbl -> GetBackupMetadata) (This, pbstrData) )
#define IVssComponentEx2_AddPartialFile(This, wszPath, wszFilename, wszRanges, wszMetadata) ( (This)->lpVtbl -> AddPartialFile) (This, wszPath, wszFilename, wszRanges, wszMetadata) )
#define IVssComponentEx2_GetPartialFileCount(This, pcPartialFiles) ( (This)->lpVtbl -> GetPartialFileCount) (This, pcPartialFiles) )
#define IVssComponentEx2_GetPartialFile(This, iPartialFile, pbstrPath, pbstrFilename, pbstrRange, pbstrMetadata) ( (This)->lpVtbl -> GetPartialFile) (This, iPartialFile, pbstrPath, pbstrFilename, pbstrRange, pbstrMetadata) )
#define IVssComponentEx2_IsSelectedForRestore(This, pbSelectedForRestore) ( (This)->lpVtbl -> IsSelectedForRestore) (This, pbSelectedForRestore) )
#define IVssComponentEx2_GetAdditionalRestores(This, pbAdditionalRestores) ( (This)->lpVtbl -> GetAdditionalRestores) (This, pbAdditionalRestores) )
#define IVssComponentEx2_GetNewTargetCount(This, pcNewTarget) ( (This)->lpVtbl -> GetNewTargetCount) (This, pcNewTarget) )
#define IVssComponentEx2_GetNewTarget(This, iNewTarget, ppFiledesc) ( (This)->lpVtbl -> GetNewTarget) (This, iNewTarget, ppFiledesc) )
#define IVssComponentEx2_AddDirectedTarget(This, wszSourcePath, wszSourceFilename, wszSourceRangeList, wszDestinationPath, wszDestinationFilename, wszDestinationRangeList) ( (This)->lpVtbl -> AddDirectedTarget) (This, wszSourcePath, wszSourceFilename, wszSourceRangeList, wszDestinationPath, wszDestinationFilename, wszDestinationRangeList) )
#define IVssComponentEx2_GetDirectedTargetCount(This, pcDirectedTarget) ( (This)->lpVtbl -> GetDirectedTargetCount) (This, pcDirectedTarget) )
#define IVssComponentEx2_GetDirectedTarget(This, iDirectedTarget, pbstrSourcePath, pbstrSourceFileName, pbstrSourceRangeList, pbstrDestinationPath, pbstrDestinationFilename, pbstrDestinationRangeList) ( (This)->lpVtbl -> GetDirectedTarget) (This, iDirectedTarget, pbstrSourcePath, pbstrSourceFileName, pbstrSourceRangeList, pbstrDestinationPath, pbstrDestinationFilename, pbstrDestinationRangeList) )
#define IVssComponentEx2_SetRestoreMetadata(This, szRestoreMetadata) ( (This)->lpVtbl -> SetRestoreMetadata) (This, szRestoreMetadata) )
#define IVssComponentEx2_GetRestoreMetadata(This, pbstrRestoreMetadata) ( (This)->lpVtbl -> GetRestoreMetadata) (This, pbstrRestoreMetadata) )
#define IVssComponentEx2_SetRestoreTarget(This, target) ( (This)->lpVtbl -> SetRestoreTarget) (This, target) )
#define IVssComponentEx2_GetRestoreTarget(This, pTarget) ( (This)->lpVtbl -> GetRestoreTarget) (This, pTarget) )
#define IVssComponentEx2_SetPreRestoreFailureMsg(This, wszPreRestoreFailureMsg) ( (This)->lpVtbl -> SetPreRestoreFailureMsg) (This, wszPreRestoreFailureMsg) )
#define IVssComponentEx2_GetPreRestoreFailureMsg(This, pbstrPreRestoreFailureMsg) ( (This)->lpVtbl -> GetPreRestoreFailureMsg) (This, pbstrPreRestoreFailureMsg) )
#define IVssComponentEx2_SetPostRestoreFailureMsg(This, wszPostRestoreFailureMsg) ( (This)->lpVtbl -> SetPostRestoreFailureMsg) (This, wszPostRestoreFailureMsg) )
#define IVssComponentEx2_GetPostRestoreFailureMsg(This, pbstrPostRestoreFailureMsg) ( (This)->lpVtbl -> GetPostRestoreFailureMsg) (This, pbstrPostRestoreFailureMsg) )
#define IVssComponentEx2_SetBackupStamp(This, wszBackupStamp) ( (This)->lpVtbl -> SetBackupStamp) (This, wszBackupStamp) )
#define IVssComponentEx2_GetBackupStamp(This, pbstrBackupStamp) ( (This)->lpVtbl -> GetBackupStamp) (This, pbstrBackupStamp) )
#define IVssComponentEx2_GetPreviousBackupStamp(This, pbstrBackupStamp) ( (This)->lpVtbl -> GetPreviousBackupStamp) (This, pbstrBackupStamp) )
#define IVssComponentEx2_GetBackupOptions(This, pbstrBackupOptions) ( (This)->lpVtbl -> GetBackupOptions) (This, pbstrBackupOptions) )
#define IVssComponentEx2_GetRestoreOptions(This, pbstrRestoreOptions) ( (This)->lpVtbl -> GetRestoreOptions) (This, pbstrRestoreOptions) )
#define IVssComponentEx2_GetRestoreSubcomponentCount(This, pcRestoreSubcomponent) ( (This)->lpVtbl -> GetRestoreSubcomponentCount) (This, pcRestoreSubcomponent) )
#define IVssComponentEx2_GetRestoreSubcomponent(This, iComponent, pbstrLogicalPath, pbstrComponentName, pbRepair) ( (This)->lpVtbl -> GetRestoreSubcomponent) (This, iComponent, pbstrLogicalPath, pbstrComponentName, pbRepair) )
#define IVssComponentEx2_GetFileRestoreStatus(This, pStatus) ( (This)->lpVtbl -> GetFileRestoreStatus) (This, pStatus) )
#define IVssComponentEx2_AddDifferencedFilesByLastModifyTime(This, wszPath, wszFilespec, bRecursive, ftLastModifyTime) ( (This)->lpVtbl -> AddDifferencedFilesByLastModifyTime) (This, wszPath, wszFilespec, bRecursive, ftLastModifyTime) )
#define IVssComponentEx2_AddDifferencedFilesByLastModifyLSN(This, wszPath, wszFilespec, bRecursive, bstrLsnString) ( (This)->lpVtbl -> AddDifferencedFilesByLastModifyLSN) (This, wszPath, wszFilespec, bRecursive, bstrLsnString) )
#define IVssComponentEx2_GetDifferencedFilesCount(This, pcDifferencedFiles) ( (This)->lpVtbl -> GetDifferencedFilesCount) (This, pcDifferencedFiles) )
#define IVssComponentEx2_GetDifferencedFile(This, iDifferencedFile, pbstrPath, pbstrFilespec, pbRecursive, pbstrLsnString, pftLastModifyTime) ( (This)->lpVtbl -> GetDifferencedFile) (This, iDifferencedFile, pbstrPath, pbstrFilespec, pbRecursive, pbstrLsnString, pftLastModifyTime) )
#define IVssComponentEx2_SetPrepareForBackupFailureMsg(This, wszFailureMsg) ( (This)->lpVtbl -> SetPrepareForBackupFailureMsg(This, wszFailureMsg) )
#define IVssComponentEx2_SetPostSnapshotFailureMsg(This, wszFailureMsg) ( (This)->lpVtbl -> SetPostSnapshotFailureMsg(This, wszFailureMsg) )
#define IVssComponentEx2_GetPrepareForBackupFailureMsg(This, pbstrFailureMsg) ( (This)->lpVtbl -> GetPrepareForBackupFailureMsg(This, pbstrFailureMsg) )
#define IVssComponentEx2_GetPostSnapshotFailureMsg(This, pbstrFailureMsg) ( (This)->lpVtbl -> GetPostSnapshotFailureMsg(This, pbstrFailureMsg) )
#define IVssComponentEx2_GetAuthoritativeRestore(This, pbAuth) ( (This)->lpVtbl -> GetAuthoritativeRestore(This, pbAuth) )
#define IVssComponentEx2_GetRollForward(This, pRollType, pbstrPoint) ( (This)->lpVtbl -> GetRollForward(This, pRollType, pbstrPoint) )
#define IVssComponentEx2_GetRestoreName(This, pbstrName) ( (This)->lpVtbl -> GetRestoreName(This, pbstrName) )
#define IVssComponentEx2_SetFailure(This, hr, hrApplication, wszApplicationMessage, dwReserved) ( (This)->lpVtbl -> SetFailure(This, hr, hrApplication, wszApplicationMessage, dwReserved) )
#define IVssComponentEx2_GetFailure(This, phr, phrApplication, pbstrApplicationMessage, pdwReserved) ( (This)->lpVtbl -> GetFailure(This, phr, phrApplication, pbstrApplicationMessage, pdwReserved) )
#endif
//class IVssCreateWriterMetadata {
typedef struct IVssCreateWriterMetadataVtbl
{
	HRESULT(STDMETHODCALLTYPE * AddIncludeFiles) ( IVssCreateWriterMetadata *this, LPCWSTR wszPath,  LPCWSTR wszFilespec,  BOOL bRecursive,  LPCWSTR wszAlternateLocation);
	HRESULT(STDMETHODCALLTYPE * AddExcludeFiles) ( IVssCreateWriterMetadata *this, LPCWSTR wszPath,  LPCWSTR wszFilespec,  BOOL bRecursive);
	HRESULT(STDMETHODCALLTYPE * AddComponent) ( IVssCreateWriterMetadata *this, VSS_COMPONENT_TYPE ct,  LPCWSTR wszLogicalPath,  LPCWSTR wszComponentName,  LPCWSTR wszCaption,  const BYTE *pbIcon,  UINT cbIcon,  BOOL bRestoreMetadata,  BOOL bNotifyOnBackupComplete,  BOOL bSelectable,  BOOL bSelectableForRestore /*= FALSE*/,  DWORD dwComponentFlags);
	HRESULT(STDMETHODCALLTYPE * AddDatabaseFiles) ( IVssCreateWriterMetadata *this, LPCWSTR wszLogicalPath,  LPCWSTR wszDatabaseName,  LPCWSTR wszPath,  LPCWSTR wszFilespec,  DWORD dwBackupTypeMask /*= (VSS_FSBT_ALL_BACKUP_REQUIRED | VSS_FSBT_ALL_SNAPSHOT_REQUIRED)*/);
	HRESULT(STDMETHODCALLTYPE * AddDatabaseLogFiles) ( IVssCreateWriterMetadata *this, LPCWSTR wszLogicalPath,  LPCWSTR wszDatabaseName,  LPCWSTR wszPath,  LPCWSTR wszFilespec,  DWORD dwBackupTypeMask /*= (VSS_FSBT_ALL_BACKUP_REQUIRED | VSS_FSBT_ALL_SNAPSHOT_REQUIRED)*/);
	HRESULT(STDMETHODCALLTYPE * AddFilesToFileGroup) ( IVssCreateWriterMetadata *this, LPCWSTR wszLogicalPath,  LPCWSTR wszGroupName,  LPCWSTR wszPath,  LPCWSTR wszFilespec,  BOOL bRecursive,  LPCWSTR wszAlternateLocation,  DWORD dwBackupTypeMask /*= (VSS_FSBT_ALL_BACKUP_REQUIRED | VSS_FSBT_ALL_SNAPSHOT_REQUIRED)*/);
	HRESULT(STDMETHODCALLTYPE * SetRestoreMethod) ( IVssCreateWriterMetadata *this, VSS_RESTOREMETHOD_ENUM method,  LPCWSTR wszService,  LPCWSTR wszUserProcedure,  VSS_WRITERRESTORE_ENUM writerRestore,  BOOL bRebootRequired);
	HRESULT(STDMETHODCALLTYPE * AddAlternateLocationMapping) ( IVssCreateWriterMetadata *this, LPCWSTR wszSourcePath,  LPCWSTR wszSourceFilespec,  BOOL bRecursive,  LPCWSTR wszDestination);
	HRESULT(STDMETHODCALLTYPE * AddComponentDependency) ( IVssCreateWriterMetadata *this, LPCWSTR wszForLogicalPath,  LPCWSTR wszForComponentName,  VSS_ID onWriterId,  LPCWSTR wszOnLogicalPath,  LPCWSTR wszOnComponentName);
	HRESULT(STDMETHODCALLTYPE * SetBackupSchema) ( IVssCreateWriterMetadata *this, DWORD dwSchemaMask);
	HRESULT(STDMETHODCALLTYPE * GetDocument) (IVssCreateWriterMetadata *this, IXMLDOMDocument **pDoc);
	HRESULT(STDMETHODCALLTYPE * SaveAsXML) (IVssCreateWriterMetadata *this, BSTR *pbstrXML);
} IVssCreateWriterMetadataVtbl;
interface IVssCreateWriterMetadata
{
	CONST_VTBL struct IVssCreateWriterMetadataVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVssCreateWriterMetadata_AddIncludeFiles) ( this, wszPath,  wszFilespec,  bRecursive,  wszAlternateLocation) ( (This)->lpVtbl -> AddIncludeFiles( this, wszPath,  wszFilespec,  bRecursive,  wszAlternateLocation) )
#define IVssCreateWriterMetadata_AddExcludeFiles) ( this, wszPath,  wszFilespec,  bRecursive) ( (This)->lpVtbl -> AddExcludeFiles( this, wszPath,  wszFilespec,  bRecursive) )
#define IVssCreateWriterMetadata_AddComponent) ( this, ct,  wszLogicalPath,  wszComponentName,  wszCaption,  pbIcon,  cbIcon,  bRestoreMetadata,  bNotifyOnBackupComplete,  bSelectable,  bSelectableForRestore,  dwComponentFlags) ( (This)->lpVtbl -> AddComponent( this, ct,  wszLogicalPath,  wszComponentName,  wszCaption,  pbIcon,  cbIcon,  bRestoreMetadata,  bNotifyOnBackupComplete,  bSelectable,  bSelectableForRestore,  dwComponentFlags) )
#define IVssCreateWriterMetadata_AddDatabaseFiles) ( this, wszLogicalPath,  wszDatabaseName,  wszPath,  wszFilespec,  dwBackupTypeMask) ( (This)->lpVtbl -> AddDatabaseFiles( this, wszLogicalPath,  wszDatabaseName,  wszPath,  wszFilespec,  dwBackupTypeMask) )
#define IVssCreateWriterMetadata_AddDatabaseLogFiles) ( this, wszLogicalPath,  wszDatabaseName,  wszPath,  wszFilespec,  dwBackupTypeMask) ( (This)->lpVtbl -> AddDatabaseLogFiles( this, wszLogicalPath,  wszDatabaseName,  wszPath,  wszFilespec,  dwBackupTypeMask) )
#define IVssCreateWriterMetadata_AddFilesToFileGroup) ( this, wszLogicalPath,  wszGroupName,  wszPath,  wszFilespec,  bRecursive,  wszAlternateLocation,  dwBackupTypeMask) ( (This)->lpVtbl -> AddFilesToFileGroup ( this, wszLogicalPath,  wszGroupName,  wszPath,  wszFilespec,  bRecursive,  wszAlternateLocation,  dwBackupTypeMask) )
#define IVssCreateWriterMetadata_SetRestoreMethod) ( this, method,  wszService,  wszUserProcedure,  writerRestore,  bRebootRequired) ( (This)->lpVtbl -> SetRestoreMethod( this, method,  wszService,  wszUserProcedure,  writerRestore,  bRebootRequired) )
#define IVssCreateWriterMetadata_AddAlternateLocationMapping) ( this, wszSourcePath,  wszSourceFilespec,  bRecursive,  wszDestination) ( (This)->lpVtbl -> AddAlternateLocationMapping( this, wszSourcePath,  wszSourceFilespec,  bRecursive,  wszDestination) )
#define IVssCreateWriterMetadata_AddComponentDependency) ( this, wszForLogicalPath,  wszForComponentName,  onWriterId,  wszOnLogicalPath,  wszOnComponentName) ( (This)->lpVtbl -> AddComponentDependency( this, wszForLogicalPath,  wszForComponentName,  onWriterId,  wszOnLogicalPath,  wszOnComponentName) )
#define IVssCreateWriterMetadata_SetBackupSchema) ( this, dwSchemaMask) ( (This)->lpVtbl -> SetBackupSchema( this, dwSchemaMask) )
#define IVssCreateWriterMetadata_GetDocument) (this, pDoc) ( (This)->lpVtbl -> GetDocument(this, pDoc) )
#define IVssCreateWriterMetadata_SaveAsXML) (this, pbstrXML) ( (This)->lpVtbl -> SaveAsXML(this, pbstrXML) )
#endif
//class __declspec(uuid("9f21981d-d469-4349-b807-39e64e4674e1")) IVssCreateWriterMetadataEx:public IVssCreateWriterMetadata, public IUnknown
typedef struct IVssCreateWriterMetadataExVtbl
{
	HRESULT(STDMETHODCALLTYPE * AddIncludeFiles) ( IVssCreateWriterMetadataEx *this, LPCWSTR wszPath,  LPCWSTR wszFilespec,  BOOL bRecursive,  LPCWSTR wszAlternateLocation);
	HRESULT(STDMETHODCALLTYPE * AddExcludeFiles) ( IVssCreateWriterMetadataEx *this, LPCWSTR wszPath,  LPCWSTR wszFilespec,  BOOL bRecursive);
	HRESULT(STDMETHODCALLTYPE * AddComponent) ( IVssCreateWriterMetadataEx *this, VSS_COMPONENT_TYPE ct,  LPCWSTR wszLogicalPath,  LPCWSTR wszComponentName,  LPCWSTR wszCaption,  const BYTE *pbIcon,  UINT cbIcon,  BOOL bRestoreMetadata,  BOOL bNotifyOnBackupComplete,  BOOL bSelectable,  BOOL bSelectableForRestore /*= FALSE*/,  DWORD dwComponentFlags);
	HRESULT(STDMETHODCALLTYPE * AddDatabaseFiles) ( IVssCreateWriterMetadataEx *this, LPCWSTR wszLogicalPath,  LPCWSTR wszDatabaseName,  LPCWSTR wszPath,  LPCWSTR wszFilespec,  DWORD dwBackupTypeMask /*= (VSS_FSBT_ALL_BACKUP_REQUIRED | VSS_FSBT_ALL_SNAPSHOT_REQUIRED)*/);
	HRESULT(STDMETHODCALLTYPE * AddDatabaseLogFiles) ( IVssCreateWriterMetadataEx *this, LPCWSTR wszLogicalPath,  LPCWSTR wszDatabaseName,  LPCWSTR wszPath,  LPCWSTR wszFilespec,  DWORD dwBackupTypeMask /*= (VSS_FSBT_ALL_BACKUP_REQUIRED | VSS_FSBT_ALL_SNAPSHOT_REQUIRED)*/);
	HRESULT(STDMETHODCALLTYPE * AddFilesToFileGroup) ( IVssCreateWriterMetadataEx *this, LPCWSTR wszLogicalPath,  LPCWSTR wszGroupName,  LPCWSTR wszPath,  LPCWSTR wszFilespec,  BOOL bRecursive,  LPCWSTR wszAlternateLocation,  DWORD dwBackupTypeMask /*= (VSS_FSBT_ALL_BACKUP_REQUIRED | VSS_FSBT_ALL_SNAPSHOT_REQUIRED)*/);
	HRESULT(STDMETHODCALLTYPE * SetRestoreMethod) ( IVssCreateWriterMetadataEx *this, VSS_RESTOREMETHOD_ENUM method,  LPCWSTR wszService,  LPCWSTR wszUserProcedure,  VSS_WRITERRESTORE_ENUM writerRestore,  BOOL bRebootRequired);
	HRESULT(STDMETHODCALLTYPE * AddAlternateLocationMapping) ( IVssCreateWriterMetadataEx *this, LPCWSTR wszSourcePath,  LPCWSTR wszSourceFilespec,  BOOL bRecursive,  LPCWSTR wszDestination);
	HRESULT(STDMETHODCALLTYPE * AddComponentDependency) ( IVssCreateWriterMetadataEx *this, LPCWSTR wszForLogicalPath,  LPCWSTR wszForComponentName,  VSS_ID onWriterId,  LPCWSTR wszOnLogicalPath,  LPCWSTR wszOnComponentName);
	HRESULT(STDMETHODCALLTYPE * SetBackupSchema) ( IVssCreateWriterMetadataEx *this, DWORD dwSchemaMask);
	HRESULT(STDMETHODCALLTYPE * GetDocument) (IVssCreateWriterMetadataEx *this, IXMLDOMDocument **pDoc);
	HRESULT(STDMETHODCALLTYPE * SaveAsXML) (IVssCreateWriterMetadataEx *this, BSTR *pbstrXML);
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVssCreateWriterMetadataEx * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE   * AddRef) (IVssCreateWriterMetadataEx * This);
	ULONG(STDMETHODCALLTYPE   * Release) (IVssCreateWriterMetadataEx * This);
	HRESULT(STDMETHODCALLTYPE * AddExcludeFilesFromSnapshot) (IVssCreateWriterMetadataEx * This, LPCWSTR wszPath, LPCWSTR wszFilespec, BOOL bRecursive);
} IVssCreateWriterMetadataExVtbl;
interface IVssCreateWriterMetadataEx
{
	CONST_VTBL struct IVssCreateWriterMetadataExVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVssCreateWriterMetadataEx_AddIncludeFiles) ( this, wszPath,  wszFilespec,  bRecursive,  wszAlternateLocation) ( (This)->lpVtbl -> AddIncludeFiles( this, wszPath,  wszFilespec,  bRecursive,  wszAlternateLocation) )
#define IVssCreateWriterMetadataEx_AddExcludeFiles) ( this, wszPath,  wszFilespec,  bRecursive) ( (This)->lpVtbl -> AddExcludeFiles( this, wszPath,  wszFilespec,  bRecursive) )
#define IVssCreateWriterMetadataEx_AddComponent) ( this, ct,  wszLogicalPath,  wszComponentName,  wszCaption,  pbIcon,  cbIcon,  bRestoreMetadata,  bNotifyOnBackupComplete,  bSelectable,  bSelectableForRestore,  dwComponentFlags) ( (This)->lpVtbl -> AddComponent( this, ct,  wszLogicalPath,  wszComponentName,  wszCaption,  pbIcon,  cbIcon,  bRestoreMetadata,  bNotifyOnBackupComplete,  bSelectable,  bSelectableForRestore,  dwComponentFlags) )
#define IVssCreateWriterMetadataEx_AddDatabaseFiles) ( this, wszLogicalPath,  wszDatabaseName,  wszPath,  wszFilespec,  dwBackupTypeMask) ( (This)->lpVtbl -> AddDatabaseFiles( this, wszLogicalPath,  wszDatabaseName,  wszPath,  wszFilespec,  dwBackupTypeMask) )
#define IVssCreateWriterMetadataEx_AddDatabaseLogFiles) ( this, wszLogicalPath,  wszDatabaseName,  wszPath,  wszFilespec,  dwBackupTypeMask) ( (This)->lpVtbl -> AddDatabaseLogFiles( this, wszLogicalPath,  wszDatabaseName,  wszPath,  wszFilespec,  dwBackupTypeMask) )
#define IVssCreateWriterMetadataEx_AddFilesToFileGroup) ( this, wszLogicalPath,  wszGroupName,  wszPath,  wszFilespec,  bRecursive,  wszAlternateLocation,  dwBackupTypeMask) ( (This)->lpVtbl -> AddFilesToFileGroup ( this, wszLogicalPath,  wszGroupName,  wszPath,  wszFilespec,  bRecursive,  wszAlternateLocation,  dwBackupTypeMask) )
#define IVssCreateWriterMetadataEx_SetRestoreMethod) ( this, method,  wszService,  wszUserProcedure,  writerRestore,  bRebootRequired) ( (This)->lpVtbl -> SetRestoreMethod( this, method,  wszService,  wszUserProcedure,  writerRestore,  bRebootRequired) )
#define IVssCreateWriterMetadataEx_AddAlternateLocationMapping) ( this, wszSourcePath,  wszSourceFilespec,  bRecursive,  wszDestination) ( (This)->lpVtbl -> AddAlternateLocationMapping( this, wszSourcePath,  wszSourceFilespec,  bRecursive,  wszDestination) )
#define IVssCreateWriterMetadataEx_AddComponentDependency) ( this, wszForLogicalPath,  wszForComponentName,  onWriterId,  wszOnLogicalPath,  wszOnComponentName) ( (This)->lpVtbl -> AddComponentDependency( this, wszForLogicalPath,  wszForComponentName,  onWriterId,  wszOnLogicalPath,  wszOnComponentName) )
#define IVssCreateWriterMetadataEx_SetBackupSchema) ( this, dwSchemaMask) ( (This)->lpVtbl -> SetBackupSchema( this, dwSchemaMask) )
#define IVssCreateWriterMetadataEx_GetDocument) (this, pDoc) ( (This)->lpVtbl -> GetDocument(this, pDoc) )
#define IVssCreateWriterMetadataEx_SaveAsXML) (this, pbstrXML) ( (This)->lpVtbl -> SaveAsXML(this, pbstrXML) )
#define IVssCreateWriterMetadataEx_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVssCreateWriterMetadataEx_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVssCreateWriterMetadataEx_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVssCreateWriterMetadataEx_AddExcludeFilesFromSnapshot(This, wszPath, wszFilespec, bRecursive) ( (This)->lpVtbl -> AddExcludeFilesFromSnapshot(This, wszPath, wszFilespec, bRecursive) )
#endif
//class IVssWriterImpl:public IUnknown {
typedef struct IVssWriterImplVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVssWriterImpl * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE   * AddRef) (IVssWriterImpl * This);
	ULONG(STDMETHODCALLTYPE   * Release) (IVssWriterImpl * This);
	HRESULT(STDMETHODCALLTYPE * Initialize)(IVssWriterImpl * This, VSS_ID writerId, LPCWSTR wszWriterName, LPCWSTR wszWriterInstanceName, DWORD dwMajorVersion, DWORD dwMinorVersion, VSS_USAGE_TYPE ut, VSS_SOURCE_TYPE st, VSS_APPLICATION_LEVEL nLevel, DWORD dwTimeout, VSS_ALTERNATE_WRITER_STATE aws, BOOL bIOThrottlingOnly);
	HRESULT(STDMETHODCALLTYPE * Subscribe)(IVssWriterImpl * This, DWORD dwSubscribeTimeout, DWORD dwEventFlags);
	HRESULT(STDMETHODCALLTYPE * Unsubscribe)(IVssWriterImpl * This);
	void(STDMETHODCALLTYPE * Uninitialize)(IVssWriterImpl * This);
	LPCWSTR *(STDMETHODCALLTYPE * GetCurrentVolumeArray)(IVssWriterImpl * This);
	UINT(STDMETHODCALLTYPE * GetCurrentVolumeCount)(IVssWriterImpl * This);
	HRESULT(STDMETHODCALLTYPE * GetSnapshotDeviceName)(IVssWriterImpl * This, LPCWSTR wszOriginalVolume, LPCWSTR *ppwszSnapshotDevice);
	VSS_ID(STDMETHODCALLTYPE * GetCurrentSnapshotSetId)(IVssWriterImpl * This);
	LONG(STDMETHODCALLTYPE * GetContext)(IVssWriterImpl * This);
	VSS_APPLICATION_LEVEL(STDMETHODCALLTYPE * GetCurrentLevel)(IVssWriterImpl * This);
	BOOL(STDMETHODCALLTYPE * IsPathAffected)(IVssWriterImpl * This, LPCWSTR wszPath);
	BOOL(STDMETHODCALLTYPE * IsBootableSystemStateBackedUp)(IVssWriterImpl * This);
	BOOL(STDMETHODCALLTYPE * AreComponentsSelected)(IVssWriterImpl * This);
	VSS_BACKUP_TYPE(STDMETHODCALLTYPE * GetBackupType)(IVssWriterImpl * This);
	VSS_RESTORE_TYPE(STDMETHODCALLTYPE * GetRestoreType)(IVssWriterImpl * This);
	HRESULT(STDMETHODCALLTYPE * SetWriterFailure)(IVssWriterImpl * This, HRESULT hr);
	BOOL(STDMETHODCALLTYPE * IsPartialFileSupportEnabled)(IVssWriterImpl * This);
	HRESULT(STDMETHODCALLTYPE * InstallAlternateWriter)(IVssWriterImpl * This, VSS_ID idWriter, CLSID clsid);
	IVssExamineWriterMetadata *(STDMETHODCALLTYPE * GetIdentityInformation)(IVssWriterImpl * This);
	HRESULT(STDMETHODCALLTYPE * SetWriterFailureEx)(IVssWriterImpl * This, HRESULT hr, HRESULT hrApplication, LPCWSTR wszApplicationMessage);
	HRESULT(STDMETHODCALLTYPE * GetSessionId)(IVssWriterImpl * This, VSS_ID *idSession);
	BOOL(STDMETHODCALLTYPE * IsWriterShuttingDown)(IVssWriterImpl * This);
} IVssWriterImplVtbl;
interface IVssWriterImpl
{
	CONST_VTBL struct IVssWriterImplVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVssWriterImpl_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVssWriterImpl_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVssWriterImpl_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVssWriterImpl_Initialize)(This, writerId, wszWriterName, wszWriterInstanceName, dwMajorVersion, dwMinorVersion, ut, st, nLevel, dwTimeout, aws, bIOThrottlingOnly) ( (This)->lpVtbl -> Initialize(This, writerId, wszWriterName, wszWriterInstanceName, dwMajorVersion, dwMinorVersion, ut, st, nLevel, dwTimeout, aws, bIOThrottlingOnly) )
#define IVssWriterImpl_Subscribe)(This, DWORD dwSubscribeTimeout, DWORD dwEventFlags) ( (This)->lpVtbl -> Subscribe)(This, DWORD dwSubscribeTimeout, DWORD dwEventFlags) )
#define IVssWriterImpl_Unsubscribe(This) ( (This)->lpVtbl -> Unsubscribe(This) )
#define IVssWriterImpl_Uninitialize(This) ( (This)->lpVtbl -> Uninitialize(This) )
#define IVssWriterImpl_GetCurrentVolumeArray(This) ( (This)->lpVtbl -> GetCurrentVolumeArray(This) )
#define IVssWriterImpl_GetCurrentVolumeCount(This) ( (This)->lpVtbl -> GetCurrentVolumeCount(This) )
#define IVssWriterImpl_GetSnapshotDeviceName(This, wszOriginalVolume, ppwszSnapshotDevice) ( (This)->lpVtbl -> GetSnapshotDeviceName(This, wszOriginalVolume, ppwszSnapshotDevice) )
#define IVssWriterImpl_GetCurrentSnapshotSetId(This) ( (This)->lpVtbl -> GetCurrentSnapshotSetId(This) )
#define IVssWriterImpl_GetContext(This) ( (This)->lpVtbl -> GetContext(This) )
#define IVssWriterImpl_GetCurrentLevel(This) ( (This)->lpVtbl -> GetCurrentLevel(This) )
#define IVssWriterImpl_IsPathAffected(This, wszPath) ( (This)->lpVtbl -> IsPathAffected(This, wszPath) )
#define IVssWriterImpl_IsBootableSystemStateBackedUp(This) ( (This)->lpVtbl -> IsBootableSystemStateBackedUp(This) )
#define IVssWriterImpl_AreComponentsSelected(This) ( (This)->lpVtbl -> AreComponentsSelected(This) )
#define IVssWriterImpl_GetBackupType(This) ( (This)->lpVtbl -> GetBackupType(This) )
#define IVssWriterImpl_GetRestoreType(This) ( (This)->lpVtbl -> GetRestoreType(This) )
#define IVssWriterImpl_SetWriterFailure(This, hr) ( (This)->lpVtbl -> SetWriterFailure(This, hr) )
#define IVssWriterImpl_IsPartialFileSupportEnabled(This) ( (This)->lpVtbl -> IsPartialFileSupportEnabled(This) )
#define IVssWriterImpl_InstallAlternateWriter(This, idWriter, clsid) ( (This)->lpVtbl -> InstallAlternateWriter(This, idWriter, clsid) )
#define IVssWriterImpl_GetIdentityInformation(This) ( (This)->lpVtbl -> GetIdentityInformation(This) )
#define IVssWriterImpl_SetWriterFailureEx(This, hr, hrApplication, wszApplicationMessage) ( (This)->lpVtbl -> SetWriterFailureEx(This, hr, hrApplication, wszApplicationMessage) )
#define IVssWriterImpl_GetSessionId(This, idSession) ( (This)->lpVtbl -> GetSessionId(This, idSession) )
#define IVssWriterImpl_IsWriterShuttingDown(This) ( (This)->lpVtbl -> IsWriterShuttingDown(This) )
#endif
//class __declspec(uuid("9c772e77-b26e-427f-92dd-c996f41ea5e3")) IVssCreateExpressWriterMetadata:public IUnknown
typedef struct IVssCreateExpressWriterMetadataVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVssCreateExpressWriterMetadata * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE   * AddRef) (IVssCreateExpressWriterMetadata * This);
	ULONG(STDMETHODCALLTYPE   * Release) (IVssCreateExpressWriterMetadata * This);
	HRESULT(STDMETHODCALLTYPE * AddExcludeFiles) (IVssCreateExpressWriterMetadata * This, LPCWSTR wszPath, LPCWSTR wszFilespec, BOOL bRecursive);
	HRESULT(STDMETHODCALLTYPE * AddComponent) (IVssCreateExpressWriterMetadata * This, VSS_COMPONENT_TYPE ct, LPCWSTR wszLogicalPath, LPCWSTR wszComponentName, LPCWSTR wszCaption, const BYTE * pbIcon, UINT cbIcon, BOOL bRestoreMetadata, BOOL bNotifyOnBackupComplete, BOOL bSelectable, BOOL bSelectableForRestore /*= FALSE*/, DWORD dwComponentFlags);
	HRESULT(STDMETHODCALLTYPE * AddFilesToFileGroup) (IVssCreateExpressWriterMetadata * This, LPCWSTR wszLogicalPath, LPCWSTR wszGroupName, LPCWSTR wszPath, LPCWSTR wszFilespec, BOOL bRecursive, LPCWSTR wszAlternateLocation, DWORD dwBackupTypeMask /*= (VSS_FSBT_ALL_BACKUP_REQUIRED | VSS_FSBT_ALL_SNAPSHOT_REQUIRED)*/);
	HRESULT(STDMETHODCALLTYPE * SetRestoreMethod) (IVssCreateExpressWriterMetadata * This, VSS_RESTOREMETHOD_ENUM method, LPCWSTR wszService, LPCWSTR wszUserProcedure, VSS_WRITERRESTORE_ENUM writerRestore, BOOL bRebootRequired);
	HRESULT(STDMETHODCALLTYPE * AddComponentDependency) (IVssCreateExpressWriterMetadata * This, LPCWSTR wszForLogicalPath, LPCWSTR wszForComponentName, VSS_ID onWriterId, LPCWSTR wszOnLogicalPath, LPCWSTR wszOnComponentName);
	HRESULT(STDMETHODCALLTYPE * SetBackupSchema) (IVssCreateExpressWriterMetadata * This, DWORD dwSchemaMask);
	HRESULT(STDMETHODCALLTYPE * SaveAsXML) (IVssCreateExpressWriterMetadata * This, BSTR * pbstrXML);
} IVssCreateExpressWriterMetadataVtbl;
interface IVssCreateExpressWriterMetadata
{
	CONST_VTBL struct IVssCreateExpressWriterMetadataVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVssCreateExpressWriterMetadata_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVssCreateExpressWriterMetadata_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVssCreateExpressWriterMetadata_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVssCreateExpressWriterMetadata_AddExcludeFiles(This, wszPath, wszFilespec, bRecursive) ( (This)->lpVtbl -> AddExcludeFiles) (This, wszPath, wszFilespec, bRecursive) )
#define IVssCreateExpressWriterMetadata_AddComponent(This, ct, wszLogicalPath, wszComponentName, wszCaption, pbIcon, cbIcon, bRestoreMetadata, bNotifyOnBackupComplete, bSelectable, bSelectableForRestore, dwComponentFlags) ( (This)->lpVtbl -> AddComponent) (This, ct, wszLogicalPath, wszComponentName, wszCaption, pbIcon, cbIcon, bRestoreMetadata, bNotifyOnBackupComplete, bSelectable, bSelectableForRestore, dwComponentFlags) )
#define IVssCreateExpressWriterMetadata_AddFilesToFileGroup(This, wszLogicalPath, wszGroupName, wszPath, wszFilespec, bRecursive, wszAlternateLocation, dwBackupTypeMask) ( (This)->lpVtbl -> AddFilesToFileGroup) (This, wszLogicalPath, wszGroupName, wszPath, wszFilespec, bRecursive, wszAlternateLocation, dwBackupTypeMask) )
#define IVssCreateExpressWriterMetadata_SetRestoreMethod(This, method, wszService, wszUserProcedure, writerRestore, bRebootRequired) ( (This)->lpVtbl -> SetRestoreMethod) (This, method, wszService, wszUserProcedure, writerRestore, bRebootRequired) )
#define IVssCreateExpressWriterMetadata_AddComponentDependency(This, wszForLogicalPath, wszForComponentName, onWriterId, wszOnLogicalPath, wszOnComponentName) ( (This)->lpVtbl -> AddComponentDependency) (This, wszForLogicalPath, wszForComponentName, onWriterId, wszOnLogicalPath, wszOnComponentName) )
#define IVssCreateExpressWriterMetadata_SetBackupSchema(This, dwSchemaMask) ( (This)->lpVtbl -> SetBackupSchema) (This, dwSchemaMask) )
#define IVssCreateExpressWriterMetadata_SaveAsXML(This, pbstrXML) ( (This)->lpVtbl -> SaveAsXML) (This, pbstrXML) )
#endif
//class __declspec(uuid("e33affdc-59c7-47b1-97d5-4266598f6235")) IVssExpressWriter:public IUnknown
typedef struct IVssExpressWriterVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface)(IVssExpressWriter * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE   * AddRef)(IVssExpressWriter * This);
	ULONG(STDMETHODCALLTYPE   * Release)(IVssExpressWriter * This);
	HRESULT(STDMETHODCALLTYPE * CreateMetadata)(IVssExpressWriter * This, VSS_ID writerId, LPCWSTR writerName, VSS_USAGE_TYPE usageType, DWORD versionMajor, DWORD versionMinor, DWORD reserved, IVssCreateExpressWriterMetadata **ppMetadata);
	HRESULT(STDMETHODCALLTYPE * LoadMetadata)(IVssExpressWriter * This, LPCWSTR metadata, DWORD reserved);
	HRESULT(STDMETHODCALLTYPE * Register)(IVssExpressWriter * This);
	HRESULT(STDMETHODCALLTYPE * Unregister)(IVssExpressWriter * This, VSS_ID writerId);
} IVssExpressWriterVtbl;
interface IVssExpressWriter
{
	CONST_VTBL struct IVssExpressWriterVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVssExpressWriter_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVssExpressWriter_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVssExpressWriter_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVssExpressWriter_CreateMetadata(This, writerId, writerName, usageType, versionMajor, versionMinor, reserved, ppMetadata) ( (This)->lpVtbl -> CreateMetadata(This, writerId, writerName, usageType, versionMajor, versionMinor, reserved, ppMetadata) )
#define IVssExpressWriter_LoadMetadata(This, metadata, reserved) ( (This)->lpVtbl -> LoadMetadata(This, metadata, reserved) )
#define IVssExpressWriter_Register(This) ( (This)->lpVtbl -> Register(This) )
#define IVssExpressWriter_Unregister(This, writerId) ( (This)->lpVtbl -> Unregister(This, writerId) )
#endif
#ifdef WANT_CVssWriter_HELPER__
#ifndef __CVssWriter_FWD_DEFINED__
#define __CVssWriter_FWD_DEFINED__
typedef struct CVssWriter CVssWriter;
#endif
typedef struct CVssWriterVtbl
{
	void    (STDMETHODCALLTYPE * CVssWriterConstructor)(CVssWriter *this);
	void    (STDMETHODCALLTYPE *CVssWriterDestuctor)(CVssWriter *this);
	HRESULT (STDMETHODCALLTYPE *CVssWriterInitialize)(CVssWriter *this, VSS_ID WriterId, LPCWSTR wszWriterName, VSS_USAGE_TYPE ut, VSS_SOURCE_TYPE st, VSS_APPLICATION_LEVEL nLevel, DWORD dwTimeoutFreeze, VSS_ALTERNATE_WRITER_STATE aws, BOOL bIOThrottlingOnly, LPCWSTR wszWriterInstanceName);
	HRESULT (STDMETHODCALLTYPE *CVssWriterSubscribe)(CVssWriter *this, DWORD dwEventFlags);
	HRESULT (STDMETHODCALLTYPE *CVssWriterUnsubscribe)(CVssWriter *this);
	HRESULT (STDMETHODCALLTYPE *CVssWriterInstallAlternateWriter)(CVssWriter *this, VSS_ID writerId, CLSID persistentWriterClassId);
	LPCWSTR *(STDMETHODCALLTYPE *CVssWriterGetCurrentVolumeArray)(CVssWriter *this);
	UINT    (STDMETHODCALLTYPE *CVssWriterGetCurrentVolumeCount)(CVssWriter *this);
	HRESULT (STDMETHODCALLTYPE *CVssWriterGetSnapshotDeviceName)(CVssWriter *this, LPCWSTR wszOriginalVolume, LPCWSTR *ppwszSnapshotDevice);
	VSS_ID  (STDMETHODCALLTYPE *CVssWriterGetCurrentSnapshotSetId)(CVssWriter *this);
	LONG    (STDMETHODCALLTYPE *CVssWriterGetContext)(CVssWriter *this);
	VSS_APPLICATION_LEVEL (STDMETHODCALLTYPE *CVssWriterGetCurrentLevel)(CVssWriter *this);
	BOOL    (STDMETHODCALLTYPE *CVssWriterIsPathAffected)(CVssWriter *this, LPCWSTR wszPath);
	BOOL    (STDMETHODCALLTYPE *CVssWriterIsBootableSystemStateBackedUp)(CVssWriter *this);
	BOOL    (STDMETHODCALLTYPE *CVssWriterAreComponentsSelected)(CVssWriter *this);
	VSS_BACKUP_TYPE  (STDMETHODCALLTYPE *CVssWriterGetBackupType)(CVssWriter *this);
	VSS_RESTORE_TYPE (STDMETHODCALLTYPE *CVssWriterGetRestoreType)(CVssWriter *this);
	BOOL    (STDMETHODCALLTYPE *CVssWriterIsPartialFileSupportEnabled)(CVssWriter *this);
	HRESULT (STDMETHODCALLTYPE *CVssWriterSetWriterFailure)(CVssWriter *this, HRESULT hr);
	BOOL    (STDMETHODCALLTYPE *CVssWriterOnIdentify)(CVssWriter *this, IVssCreateWriterMetadata *pMetadata);
	BOOL    (STDMETHODCALLTYPE *CVssWriterOnPrepareBackup)(CVssWriter *this, IVssWriterComponents *pComponent);
	BOOL    (STDMETHODCALLTYPE *CVssWriterOnPrepareSnapshot)(CVssWriter *this);
	BOOL    (STDMETHODCALLTYPE *CVssWriterOnFreeze)(CVssWriter *this);
	BOOL    (STDMETHODCALLTYPE *CVssWriterOnThaw)(CVssWriter *this);
	BOOL    (STDMETHODCALLTYPE *CVssWriterOnAbort)(CVssWriter *this);
	BOOL    (STDMETHODCALLTYPE *CVssWriterOnBackupComplete)(CVssWriter *this, IVssWriterComponents *pComponent);
	BOOL    (STDMETHODCALLTYPE *CVssWriterOnBackupShutdown)(CVssWriter *this, VSS_ID SnapshotSetId);
	BOOL    (STDMETHODCALLTYPE *CVssWriterOnPreRestore)(CVssWriter *this, IVssWriterComponents *pComponent);
	BOOL    (STDMETHODCALLTYPE *OnPostRestore)(CVssWriter *this, IVssWriterComponents *pComponent);
	BOOL    (STDMETHODCALLTYPE *OnPostSnapshot)(CVssWriter *this, IVssWriterComponents *pComponent);
	BOOL    (STDMETHODCALLTYPE *CVssWriterOnBackOffIOOnVolume)(CVssWriter *this, VSS_PWSZ wszVolumeName, VSS_ID snapshotId, VSS_ID providerId);
	BOOL    (STDMETHODCALLTYPE *CVssWriterOnContinueIOOnVolume)(CVssWriter *this, VSS_PWSZ wszVolumeName, VSS_ID snapshotId, VSS_ID providerId);
	BOOL    (STDMETHODCALLTYPE *CVssWriterOnVSSShutdown)(CVssWriter *this);
	BOOL    (STDMETHODCALLTYPE *CVssWriterOnVSSApplicationStartup)(CVssWriter *this);
} CVssWriterVtbl;
typedef struct CVssWriter
{
	CONST_VTBL struct CVssWriterVtbl *lpVtbl;
	IVssWriterImpl *m_pWriterImpl;
} CVssWriter;
HRESULT STDAPICALLTYPE CreateWriter(CVssWriter *pWriter, IVssWriterImpl **pWriterImpl);
void STDMETHODCALLTYPE CVssWriterConstructor(CVssWriter *this)
{
	this->m_pWriterImpl = NULL;
}

void STDMETHODCALLTYPE CVssWriterDestuctor(CVssWriter *this)
{
	if (this->m_pWriterImpl != NULL)
	{
		this->m_pWriterImpl->lpVtbl->Uninitialize(this->m_pWriterImpl);
		this->m_pWriterImpl->lpVtbl->Release(this->m_pWriterImpl);
		this->m_pWriterImpl = NULL;
	}
}

HRESULT STDMETHODCALLTYPE CVssWriterInitialize(CVssWriter *this, VSS_ID WriterId, LPCWSTR wszWriterName, VSS_USAGE_TYPE ut, VSS_SOURCE_TYPE st, VSS_APPLICATION_LEVEL nLevel /*= VSS_APP_FRONT_END*/, DWORD dwTimeoutFreeze /*= 60000*/, VSS_ALTERNATE_WRITER_STATE aws /*= VSS_AWS_NO_ALTERNATE_WRITER*/, BOOL bIOThrottlingOnly /*= FALSE*/, LPCWSTR wszWriterInstanceName /*= NULL*/)
{
	if (this->m_pWriterImpl != NULL)
		return E_FAIL;
	HRESULT hr = CreateWriter(this, &this->m_pWriterImpl);
	if (FAILED(hr))
		return hr;
	hr = this->m_pWriterImpl->lpVtbl->Initialize(this->m_pWriterImpl, WriterId, wszWriterName, wszWriterInstanceName, 0, 0, ut, st, nLevel, dwTimeoutFreeze, aws, bIOThrottlingOnly);
	if (FAILED(hr))
	{
		this->m_pWriterImpl->lpVtbl->Release(this->m_pWriterImpl);
		this->m_pWriterImpl = NULL;
	}
	return hr;
}

HRESULT STDMETHODCALLTYPE CVssWriterSubscribe(CVssWriter *this, DWORD dwEventFlags /*= VSS_SM_BACKUP_EVENTS_FLAG | VSS_SM_RESTORE_EVENTS_FLAG*/)
{
	if (this->m_pWriterImpl == NULL)
		return E_FAIL;
	return this->m_pWriterImpl->lpVtbl->Subscribe(this->m_pWriterImpl, 0, dwEventFlags);
}

HRESULT STDMETHODCALLTYPE CVssWriterUnsubscribe(CVssWriter *this)
{
	if (this->m_pWriterImpl == NULL)
		return E_FAIL;
	this->m_pWriterImpl->lpVtbl->Unsubscribe(this->m_pWriterImpl);
	return S_OK;
}

HRESULT STDMETHODCALLTYPE CVssWriterInstallAlternateWriter(CVssWriter *this, VSS_ID writerId, CLSID persistentWriterClassId)
{
	if (this->m_pWriterImpl == NULL)
		return E_FAIL;
	return this->m_pWriterImpl->lpVtbl->InstallAlternateWriter(this->m_pWriterImpl, writerId, persistentWriterClassId);
}

LPCWSTR *STDMETHODCALLTYPE CVssWriterGetCurrentVolumeArray(CVssWriter *this)
{
	if (this->m_pWriterImpl == NULL)
		return NULL;
	return this->m_pWriterImpl->lpVtbl->GetCurrentVolumeArray(this->m_pWriterImpl);
}

UINT STDMETHODCALLTYPE CVssWriterGetCurrentVolumeCount(CVssWriter *this)
{
	if (this->m_pWriterImpl == NULL)
		return 0;
	return this->m_pWriterImpl->lpVtbl->GetCurrentVolumeCount(this->m_pWriterImpl);
}

HRESULT STDMETHODCALLTYPE CVssWriterGetSnapshotDeviceName(CVssWriter *this, LPCWSTR wszOriginalVolume, LPCWSTR *ppwszSnapshotDevice)
{
	if (this->m_pWriterImpl == NULL)
		return E_FAIL;
	return this->m_pWriterImpl->lpVtbl->GetSnapshotDeviceName(this->m_pWriterImpl, wszOriginalVolume, ppwszSnapshotDevice);
}

VSS_ID STDMETHODCALLTYPE CVssWriterGetCurrentSnapshotSetId(CVssWriter *this)
{
	if (this->m_pWriterImpl == NULL)
		return GUID_NULL;
	return this->m_pWriterImpl->lpVtbl->GetCurrentSnapshotSetId(this->m_pWriterImpl);
}

LONG STDMETHODCALLTYPE CVssWriterGetContext(CVssWriter *this)
{
	if (this->m_pWriterImpl == NULL)
		return 0;
	return this->m_pWriterImpl->lpVtbl->GetContext(this->m_pWriterImpl);
}

VSS_APPLICATION_LEVEL STDMETHODCALLTYPE CVssWriterGetCurrentLevel(CVssWriter *this)
{
	if (this->m_pWriterImpl == NULL)
		return VSS_APP_AUTO;
	return this->m_pWriterImpl->lpVtbl->GetCurrentLevel(this->m_pWriterImpl);
}

BOOL STDMETHODCALLTYPE CVssWriterIsPathAffected(CVssWriter *this, LPCWSTR wszPath)
{
	if (this->m_pWriterImpl == NULL)
		return FALSE;
	return this->m_pWriterImpl->lpVtbl->IsPathAffected(this->m_pWriterImpl, wszPath);
}

BOOL STDMETHODCALLTYPE CVssWriterIsBootableSystemStateBackedUp(CVssWriter *this)
{
	if (this->m_pWriterImpl == NULL)
		return FALSE;
	return this->m_pWriterImpl->lpVtbl->IsBootableSystemStateBackedUp(this->m_pWriterImpl);
}

BOOL STDMETHODCALLTYPE CVssWriterAreComponentsSelected(CVssWriter *this)
{
	if (this->m_pWriterImpl == NULL)
		return FALSE;
	return this->m_pWriterImpl->lpVtbl->AreComponentsSelected(this->m_pWriterImpl);
}

VSS_BACKUP_TYPE STDMETHODCALLTYPE CVssWriterGetBackupType(CVssWriter *this)
{
	if (this->m_pWriterImpl == NULL)
		return VSS_BT_UNDEFINED;
	return this->m_pWriterImpl->lpVtbl->GetBackupType(this->m_pWriterImpl);
}

VSS_RESTORE_TYPE STDMETHODCALLTYPE CVssWriterGetRestoreType(CVssWriter *this)
{
	if (this->m_pWriterImpl == NULL)
		return VSS_RTYPE_UNDEFINED;
	return this->m_pWriterImpl->lpVtbl->GetRestoreType(this->m_pWriterImpl);
}

BOOL STDMETHODCALLTYPE CVssWriterIsPartialFileSupportEnabled(CVssWriter *this)
{
	if (this->m_pWriterImpl == NULL)
		return FALSE;
	return this->m_pWriterImpl->lpVtbl->IsPartialFileSupportEnabled(this->m_pWriterImpl);
}

HRESULT STDMETHODCALLTYPE CVssWriterSetWriterFailure(CVssWriter *this, HRESULT hr)
{
	if (this->m_pWriterImpl == NULL)
		return E_FAIL;
	return this->m_pWriterImpl->lpVtbl->SetWriterFailure(this->m_pWriterImpl, hr);
}

BOOL STDMETHODCALLTYPE CVssWriterOnIdentify(CVssWriter *this, IVssCreateWriterMetadata *pMetadata)
{
	UNREFERENCED_PARAMETER(pMetadata);
	return TRUE;
}
BOOL STDMETHODCALLTYPE CVssWriterOnPrepareBackup(CVssWriter *this, IVssWriterComponents *pComponent)
{
	UNREFERENCED_PARAMETER(pComponent);
	return TRUE;
}
BOOL STDMETHODCALLTYPE CVssWriterOnPrepareSnapshot(CVssWriter *this);
BOOL STDMETHODCALLTYPE CVssWriterOnFreeze(CVssWriter *this);
BOOL STDMETHODCALLTYPE CVssWriterOnThaw(CVssWriter *this);
BOOL STDMETHODCALLTYPE CVssWriterOnAbort(CVssWriter *this);
BOOL STDMETHODCALLTYPE CVssWriterOnBackupComplete(CVssWriter *this, IVssWriterComponents *pComponent)
{
	UNREFERENCED_PARAMETER(pComponent);
	return TRUE;
}
BOOL STDMETHODCALLTYPE CVssWriterOnBackupShutdown(CVssWriter *this, VSS_ID SnapshotSetId)
{
	UNREFERENCED_PARAMETER(SnapshotSetId);
	return TRUE;
}
BOOL STDMETHODCALLTYPE CVssWriterOnPreRestore(CVssWriter *this, IVssWriterComponents *pComponent)
{
	UNREFERENCED_PARAMETER(pComponent);
	return TRUE;
}
BOOL STDMETHODCALLTYPE OnPostRestore(CVssWriter *this, IVssWriterComponents *pComponent)
{
	UNREFERENCED_PARAMETER(pComponent);
	return TRUE;
}
BOOL STDMETHODCALLTYPE OnPostSnapshot(CVssWriter *this, IVssWriterComponents *pComponent)
{
	UNREFERENCED_PARAMETER(pComponent);
	return TRUE;
}
BOOL STDMETHODCALLTYPE CVssWriterOnBackOffIOOnVolume(CVssWriter *this, VSS_PWSZ wszVolumeName, VSS_ID snapshotId, VSS_ID providerId)
{
	UNREFERENCED_PARAMETER(wszVolumeName);
	UNREFERENCED_PARAMETER(snapshotId);
	UNREFERENCED_PARAMETER(providerId);
	return TRUE;
}
BOOL STDMETHODCALLTYPE CVssWriterOnContinueIOOnVolume(CVssWriter *this, VSS_PWSZ wszVolumeName, VSS_ID snapshotId, VSS_ID providerId)
{
	UNREFERENCED_PARAMETER(wszVolumeName);
	UNREFERENCED_PARAMETER(snapshotId);
	UNREFERENCED_PARAMETER(providerId);
	return TRUE;
}
BOOL STDMETHODCALLTYPE CVssWriterOnVSSShutdown(CVssWriter *this)
{
	return TRUE;
}
BOOL STDMETHODCALLTYPE CVssWriterOnVSSApplicationStartup(CVssWriter *this)
{
	return TRUE;
}
//class CVssWriterEx;
#ifndef __CVssWriterEx_FWD_DEFINED__
#define __CVssWriterEx_FWD_DEFINED__
typedef struct CVssWriterEx CVssWriterEx;
#endif
typedef struct CVssWriterExVtbl
{
	BOOL (STDMETHODCALLTYPE *OnIdentify)(CVssWriterEx *this, IVssCreateWriterMetadata *pMetadata);
	BOOL (STDMETHODCALLTYPE *OnIdentifyEx)(CVssWriterEx *this, IVssCreateWriterMetadataEx *pMetadata);
} CVssWriterExVtbl;
typedef struct CVssWriterEx
{
	CVssWriter	CVssWriter;
	CONST_VTBL struct CVssWriterExVtbl *lpVtbl;
	HRESULT (STDMETHODCALLTYPE *CVssWriterExInitialize)(CVssWriterEx *this, VSS_ID WriterId, LPCWSTR wszWriterName, VSS_USAGE_TYPE ut, VSS_SOURCE_TYPE st, VSS_APPLICATION_LEVEL nLevel, DWORD dwTimeoutFreeze, VSS_ALTERNATE_WRITER_STATE aws, BOOL bIOThrottlingOnly, LPCWSTR wszWriterInstanceName);
	HRESULT (STDMETHODCALLTYPE *CVssWriterExInitializeEx)(CVssWriterEx *this, VSS_ID WriterId, LPCWSTR wszWriterName, DWORD dwMajorVersion, DWORD dwMinorVersion, VSS_USAGE_TYPE ut, VSS_SOURCE_TYPE st, VSS_APPLICATION_LEVEL nLevel, DWORD dwTimeoutFreeze, VSS_ALTERNATE_WRITER_STATE aws, BOOL bIOThrottlingOnly, LPCWSTR wszWriterInstanceName);
	HRESULT (STDMETHODCALLTYPE *GetIdentifyInformation)(CVssWriterEx *this, IVssExamineWriterMetadata **ppMetadata);
	HRESULT (STDMETHODCALLTYPE *SubscribeEx)(CVssWriterEx *this, DWORD dwUnsubscribeTimeout, DWORD dwEventFlags);
} CVssWriterEx;
HRESULT STDMETHODCALLTYPE CreateWriterEx(CVssWriterEx *pWriter, IVssWriterImpl **pWriterImpl);
//class CVssWriterEx:public CVssWriter
HRESULT STDMETHODCALLTYPE CVssWriterExInitialize(CVssWriterEx *this, VSS_ID WriterId, LPCWSTR wszWriterName, VSS_USAGE_TYPE ut, VSS_SOURCE_TYPE st, VSS_APPLICATION_LEVEL nLevel /*= VSS_APP_FRONT_END */ , DWORD dwTimeoutFreeze /*= 60000 */ , VSS_ALTERNATE_WRITER_STATE aws /*= VSS_AWS_NO_ALTERNATE_WRITER */ , BOOL bIOThrottlingOnly /*= FALSE */ , LPCWSTR wszWriterInstanceName /*= NULL */ )
{
	if (this->CVssWriter.m_pWriterImpl != NULL)
		return E_FAIL;
	HRESULT hr = CreateWriterEx(this, &this->CVssWriter.m_pWriterImpl);
	if (FAILED(hr))
		return hr;
	hr = this->CVssWriter.m_pWriterImpl->lpVtbl->Initialize(this->CVssWriter.m_pWriterImpl, WriterId, wszWriterName, wszWriterInstanceName, 0, 0, ut, st, nLevel, dwTimeoutFreeze, aws, bIOThrottlingOnly);
	if (FAILED(hr))
	{
		this->CVssWriter.m_pWriterImpl->lpVtbl->Release(this->CVssWriter.m_pWriterImpl);
		this->CVssWriter.m_pWriterImpl = NULL;
	}
	return hr;
}

HRESULT STDMETHODCALLTYPE InitializeEx(CVssWriterEx *this, VSS_ID WriterId, LPCWSTR wszWriterName, DWORD dwMajorVersion, DWORD dwMinorVersion, VSS_USAGE_TYPE ut, VSS_SOURCE_TYPE st, VSS_APPLICATION_LEVEL nLevel /*= VSS_APP_FRONT_END*/, DWORD dwTimeoutFreeze /*= 60000*/, VSS_ALTERNATE_WRITER_STATE aws /*= VSS_AWS_NO_ALTERNATE_WRITER*/, BOOL bIOThrottlingOnly /*= FALSE*/, LPCWSTR wszWriterInstanceName /*= NULL*/)
{
	if (this->CVssWriter.m_pWriterImpl != NULL)
		return E_FAIL;
	HRESULT hr = CreateWriterEx(this, &this->CVssWriter.m_pWriterImpl);
	if (FAILED(hr))
		return hr;
	hr = this->CVssWriter.m_pWriterImpl->lpVtbl->Initialize(this->CVssWriter.m_pWriterImpl, WriterId, wszWriterName, wszWriterInstanceName, dwMajorVersion, dwMinorVersion, ut, st, nLevel, dwTimeoutFreeze, aws, bIOThrottlingOnly);
	if (FAILED(hr))
	{
		this->CVssWriter.m_pWriterImpl->lpVtbl->Release(this->CVssWriter.m_pWriterImpl);
		this->CVssWriter.m_pWriterImpl = NULL;
	}
	return hr;
}

BOOL STDMETHODCALLTYPE OnIdentify(CVssWriterEx *this, IVssCreateWriterMetadata *pMetadata)
{
	UNREFERENCED_PARAMETER(pMetadata);
	return FALSE;
}

BOOL STDMETHODCALLTYPE OnIdentifyEx(CVssWriterEx *this, IVssCreateWriterMetadataEx *pMetadata)
{
	UNREFERENCED_PARAMETER(pMetadata);
	return FALSE;
}

HRESULT STDMETHODCALLTYPE GetIdentifyInformation(CVssWriterEx *this, IVssExamineWriterMetadata **ppMetadata)
{
	UNREFERENCED_PARAMETER(ppMetadata);
	if (this->CVssWriter.m_pWriterImpl == NULL)
		return E_FAIL;
	*ppMetadata = this->CVssWriter.m_pWriterImpl->lpVtbl->GetIdentityInformation(this->CVssWriter.m_pWriterImpl);
	return S_OK;
}

HRESULT STDMETHODCALLTYPE SubscribeEx(CVssWriterEx *this, DWORD dwUnsubscribeTimeout, DWORD dwEventFlags /*= VSS_SM_BACKUP_EVENTS_FLAG | VSS_SM_RESTORE_EVENTS_FLAG*/)
{
	if (this->CVssWriter.m_pWriterImpl == NULL)
		return E_FAIL;
	return this->CVssWriter.m_pWriterImpl->lpVtbl->Subscribe(this->CVssWriter.m_pWriterImpl, dwUnsubscribeTimeout, dwEventFlags);
}

//class CVssWriterEx2:public CVssWriterEx {
#ifndef __CVssWriterEx2_FWD_DEFINED__
#define __CVssWriterEx2_FWD_DEFINED__
typedef struct CVssWriterEx2 CVssWriterEx2;
#endif
typedef struct CVssWriterEx2
{
	CVssWriter	CVssWriter;
	CVssWriterEx CVssWriterEx;
	HRESULT (STDMETHODCALLTYPE *CVssWriterEx2SetWriterFailureEx)(CVssWriterEx2 *this, HRESULT hrWriter, HRESULT hrApplication, LPCWSTR wszApplicationMessage);
	HRESULT (STDMETHODCALLTYPE *CVssWriterEx2GetSessionId)(CVssWriterEx2 *this, VSS_ID *idSession);
	BOOL    (STDMETHODCALLTYPE *CVssWriterEx2IsWriterShuttingDown)(CVssWriterEx2 *this);
} CVssWriterEx2;

HRESULT STDMETHODCALLTYPE CVssWriterEx2SetWriterFailureEx(CVssWriterEx2 *this, HRESULT hrWriter, HRESULT hrApplication /*= S_FALSE*/, LPCWSTR wszApplicationMessage /*= NULL*/)
{
	if (this->CVssWriter.m_pWriterImpl == NULL)
		return E_FAIL;
	return this->CVssWriter.m_pWriterImpl->lpVtbl->SetWriterFailureEx(this->CVssWriter.m_pWriterImpl, hrWriter, hrApplication, wszApplicationMessage);
}

HRESULT STDMETHODCALLTYPE CVssWriterEx2GetSessionId(CVssWriterEx2 *this, VSS_ID *idSession)
{
	if (this->CVssWriter.m_pWriterImpl == NULL)
		return E_FAIL;
	return this->CVssWriter.m_pWriterImpl->lpVtbl->GetSessionId(this->CVssWriter.m_pWriterImpl, idSession);
}

BOOL STDMETHODCALLTYPE CVssWriterEx2IsWriterShuttingDown(CVssWriterEx2 *this)
{
	return this->CVssWriter.m_pWriterImpl->lpVtbl->IsWriterShuttingDown(this->CVssWriter.m_pWriterImpl);
}

HRESULT STDAPICALLTYPE CreateVssExpressWriterInternal(IVssExpressWriter **ppWriter);

inline HRESULT CreateVssExpressWriter(IVssExpressWriter **ppWriter)
{
	return CreateVssExpressWriterInternal(ppWriter);
}
#endif
#endif
