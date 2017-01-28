/*+@@file@@----------------------------------------------------------------*//*!
 \file		vsmgmt.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep 18 23:17:56 2016
 \date		Modified on Sun Sep 18 23:17:56 2016
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
#ifndef __vsmgmt_h__
#define __vsmgmt_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IVssSnapshotMgmt_FWD_DEFINED__
#define __IVssSnapshotMgmt_FWD_DEFINED__
typedef interface IVssSnapshotMgmt IVssSnapshotMgmt;
#endif
#ifndef __IVssSnapshotMgmt2_FWD_DEFINED__
#define __IVssSnapshotMgmt2_FWD_DEFINED__
typedef interface IVssSnapshotMgmt2 IVssSnapshotMgmt2;
#endif
#ifndef __IVssDifferentialSoftwareSnapshotMgmt_FWD_DEFINED__
#define __IVssDifferentialSoftwareSnapshotMgmt_FWD_DEFINED__
typedef interface IVssDifferentialSoftwareSnapshotMgmt IVssDifferentialSoftwareSnapshotMgmt;
#endif
#ifndef __IVssDifferentialSoftwareSnapshotMgmt2_FWD_DEFINED__
#define __IVssDifferentialSoftwareSnapshotMgmt2_FWD_DEFINED__
typedef interface IVssDifferentialSoftwareSnapshotMgmt2 IVssDifferentialSoftwareSnapshotMgmt2;
#endif
#ifndef __IVssDifferentialSoftwareSnapshotMgmt3_FWD_DEFINED__
#define __IVssDifferentialSoftwareSnapshotMgmt3_FWD_DEFINED__
typedef interface IVssDifferentialSoftwareSnapshotMgmt3 IVssDifferentialSoftwareSnapshotMgmt3;
#endif
#ifndef __IVssEnumMgmtObject_FWD_DEFINED__
#define __IVssEnumMgmtObject_FWD_DEFINED__
typedef interface IVssEnumMgmtObject IVssEnumMgmtObject;
#endif
#ifndef __VssSnapshotMgmt_FWD_DEFINED__
#define __VssSnapshotMgmt_FWD_DEFINED__
typedef struct VssSnapshotMgmt VssSnapshotMgmt;
#endif
#include <oaidl.h>
#include <ocidl.h>
#include <vss.h>
typedef enum _VSS_MGMT_OBJECT_TYPE
{
	VSS_MGMT_OBJECT_UNKNOWN = 0,
	VSS_MGMT_OBJECT_VOLUME = (VSS_MGMT_OBJECT_UNKNOWN + 1),
	VSS_MGMT_OBJECT_DIFF_VOLUME = (VSS_MGMT_OBJECT_VOLUME + 1),
	VSS_MGMT_OBJECT_DIFF_AREA = (VSS_MGMT_OBJECT_DIFF_VOLUME + 1)
} VSS_MGMT_OBJECT_TYPE;
typedef enum _VSS_MGMT_OBJECT_TYPE *PVSS_MGMT_OBJECT_TYPE;
#define	VSS_ASSOC_NO_MAX_SPACE	( -1 )
#define	VSS_ASSOC_REMOVE	( 0 )
typedef struct _VSS_VOLUME_PROP
{
	VSS_PWSZ m_pwszVolumeName;
	VSS_PWSZ m_pwszVolumeDisplayName;
} VSS_VOLUME_PROP;
typedef struct _VSS_VOLUME_PROP *PVSS_VOLUME_PROP;
typedef struct _VSS_DIFF_VOLUME_PROP
{
	VSS_PWSZ m_pwszVolumeName;
	VSS_PWSZ m_pwszVolumeDisplayName;
	LONGLONG m_llVolumeFreeSpace;
	LONGLONG m_llVolumeTotalSpace;
} VSS_DIFF_VOLUME_PROP;
typedef struct _VSS_DIFF_VOLUME_PROP *PVSS_DIFF_VOLUME_PROP;
typedef struct _VSS_DIFF_AREA_PROP
{
	VSS_PWSZ m_pwszVolumeName;
	VSS_PWSZ m_pwszDiffAreaVolumeName;
	LONGLONG m_llMaximumDiffSpace;
	LONGLONG m_llAllocatedDiffSpace;
	LONGLONG m_llUsedDiffSpace;
} VSS_DIFF_AREA_PROP;
typedef struct _VSS_DIFF_AREA_PROP *PVSS_DIFF_AREA_PROP;
typedef union __MIDL___MIDL_itf_vsmgmt_0000_0000_0001
{
	VSS_VOLUME_PROP Vol;
	VSS_DIFF_VOLUME_PROP DiffVol;
	VSS_DIFF_AREA_PROP DiffArea;
} VSS_MGMT_OBJECT_UNION;
typedef union __MIDL___MIDL_itf_vsmgmt_0000_0000_0001 *PVSS_MGMT_OBJECT_UNION;
typedef struct _VSS_MGMT_OBJECT_PROP
{
	VSS_MGMT_OBJECT_TYPE Type;
	VSS_MGMT_OBJECT_UNION Obj;
} VSS_MGMT_OBJECT_PROP;
typedef struct _VSS_MGMT_OBJECT_PROP *PVSS_MGMT_OBJECT_PROP;
typedef enum _VSS_PROTECTION_LEVEL
{
	VSS_PROTECTION_LEVEL_ORIGINAL_VOLUME = 0,
	VSS_PROTECTION_LEVEL_SNAPSHOT = (VSS_PROTECTION_LEVEL_ORIGINAL_VOLUME + 1)
} VSS_PROTECTION_LEVEL;
typedef enum _VSS_PROTECTION_LEVEL *PVSS_PROTECTION_LEVEL;
typedef enum _VSS_PROTECTION_FAULT
{
	VSS_PROTECTION_FAULT_NONE = 0,
	VSS_PROTECTION_FAULT_DIFF_AREA_MISSING = (VSS_PROTECTION_FAULT_NONE + 1),
	VSS_PROTECTION_FAULT_IO_FAILURE_DURING_ONLINE = (VSS_PROTECTION_FAULT_DIFF_AREA_MISSING + 1),
	VSS_PROTECTION_FAULT_META_DATA_CORRUPTION = (VSS_PROTECTION_FAULT_IO_FAILURE_DURING_ONLINE + 1),
	VSS_PROTECTION_FAULT_MEMORY_ALLOCATION_FAILURE = (VSS_PROTECTION_FAULT_META_DATA_CORRUPTION + 1),
	VSS_PROTECTION_FAULT_MAPPED_MEMORY_FAILURE = (VSS_PROTECTION_FAULT_MEMORY_ALLOCATION_FAILURE + 1),
	VSS_PROTECTION_FAULT_COW_READ_FAILURE = (VSS_PROTECTION_FAULT_MAPPED_MEMORY_FAILURE + 1),
	VSS_PROTECTION_FAULT_COW_WRITE_FAILURE = (VSS_PROTECTION_FAULT_COW_READ_FAILURE + 1),
	VSS_PROTECTION_FAULT_DIFF_AREA_FULL = (VSS_PROTECTION_FAULT_COW_WRITE_FAILURE + 1),
	VSS_PROTECTION_FAULT_GROW_TOO_SLOW = (VSS_PROTECTION_FAULT_DIFF_AREA_FULL + 1),
	VSS_PROTECTION_FAULT_GROW_FAILED = (VSS_PROTECTION_FAULT_GROW_TOO_SLOW + 1),
	VSS_PROTECTION_FAULT_DESTROY_ALL_SNAPSHOTS = (VSS_PROTECTION_FAULT_GROW_FAILED + 1),
	VSS_PROTECTION_FAULT_FILE_SYSTEM_FAILURE = (VSS_PROTECTION_FAULT_DESTROY_ALL_SNAPSHOTS + 1),
	VSS_PROTECTION_FAULT_IO_FAILURE = (VSS_PROTECTION_FAULT_FILE_SYSTEM_FAILURE + 1),
	VSS_PROTECTION_FAULT_DIFF_AREA_REMOVED = (VSS_PROTECTION_FAULT_IO_FAILURE + 1),
	VSS_PROTECTION_FAULT_EXTERNAL_WRITER_TO_DIFF_AREA = (VSS_PROTECTION_FAULT_DIFF_AREA_REMOVED + 1)
} VSS_PROTECTION_FAULT;
typedef enum _VSS_PROTECTION_FAULT *PVSS_PROTECTION_FAULT;
typedef struct _VSS_VOLUME_PROTECTION_INFO
{
	VSS_PROTECTION_LEVEL m_protectionLevel;
	BOOL m_volumeIsOfflineForProtection;
	VSS_PROTECTION_FAULT m_protectionFault;
	LONG m_failureStatus;
	BOOL m_volumeHasUnusedDiffArea;
	DWORD m_reserved;
} VSS_VOLUME_PROTECTION_INFO;
typedef struct _VSS_VOLUME_PROTECTION_INFO *PVSS_VOLUME_PROTECTION_INFO;
extern RPC_IF_HANDLE __MIDL_itf_vsmgmt_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsmgmt_0000_0000_v0_0_s_ifspec;
#ifndef __IVssSnapshotMgmt_INTERFACE_DEFINED__
#define __IVssSnapshotMgmt_INTERFACE_DEFINED__
extern const IID IID_IVssSnapshotMgmt;
typedef struct IVssSnapshotMgmtVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVssSnapshotMgmt * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVssSnapshotMgmt * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVssSnapshotMgmt * This);
	HRESULT(STDMETHODCALLTYPE * GetProviderMgmtInterface) (IVssSnapshotMgmt * This, VSS_ID ProviderId, REFIID InterfaceId, IUnknown ** ppItf);
	HRESULT(STDMETHODCALLTYPE * QueryVolumesSupportedForSnapshots) (IVssSnapshotMgmt * This, VSS_ID ProviderId, LONG lContext, IVssEnumMgmtObject ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * QuerySnapshotsByVolume) (IVssSnapshotMgmt * This, VSS_PWSZ pwszVolumeName, VSS_ID ProviderId, IVssEnumObject ** ppEnum);
	END_INTERFACE
}  IVssSnapshotMgmtVtbl;
interface IVssSnapshotMgmt
{
	CONST_VTBL struct IVssSnapshotMgmtVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVssSnapshotMgmt_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVssSnapshotMgmt_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVssSnapshotMgmt_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVssSnapshotMgmt_GetProviderMgmtInterface(This,ProviderId,InterfaceId,ppItf) ( (This)->lpVtbl -> GetProviderMgmtInterface(This,ProviderId,InterfaceId,ppItf) )
#define IVssSnapshotMgmt_QueryVolumesSupportedForSnapshots(This,ProviderId,lContext,ppEnum) ( (This)->lpVtbl -> QueryVolumesSupportedForSnapshots(This,ProviderId,lContext,ppEnum) )
#define IVssSnapshotMgmt_QuerySnapshotsByVolume(This,pwszVolumeName,ProviderId,ppEnum) ( (This)->lpVtbl -> QuerySnapshotsByVolume(This,pwszVolumeName,ProviderId,ppEnum) )
#endif
#endif
#ifndef __IVssSnapshotMgmt2_INTERFACE_DEFINED__
#define __IVssSnapshotMgmt2_INTERFACE_DEFINED__
extern const IID IID_IVssSnapshotMgmt2;
typedef struct IVssSnapshotMgmt2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVssSnapshotMgmt2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVssSnapshotMgmt2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVssSnapshotMgmt2 * This);
	HRESULT(STDMETHODCALLTYPE * GetMinDiffAreaSize) (IVssSnapshotMgmt2 * This, LONGLONG * pllMinDiffAreaSize);
	END_INTERFACE
}  IVssSnapshotMgmt2Vtbl;
interface IVssSnapshotMgmt2
{
	CONST_VTBL struct IVssSnapshotMgmt2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVssSnapshotMgmt2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVssSnapshotMgmt2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVssSnapshotMgmt2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVssSnapshotMgmt2_GetMinDiffAreaSize(This,pllMinDiffAreaSize) ( (This)->lpVtbl -> GetMinDiffAreaSize(This,pllMinDiffAreaSize) )
#endif
#endif
#ifndef __IVssDifferentialSoftwareSnapshotMgmt_INTERFACE_DEFINED__
#define __IVssDifferentialSoftwareSnapshotMgmt_INTERFACE_DEFINED__
extern const IID IID_IVssDifferentialSoftwareSnapshotMgmt;
typedef struct IVssDifferentialSoftwareSnapshotMgmtVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVssDifferentialSoftwareSnapshotMgmt * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVssDifferentialSoftwareSnapshotMgmt * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVssDifferentialSoftwareSnapshotMgmt * This);
	HRESULT(STDMETHODCALLTYPE * AddDiffArea) (IVssDifferentialSoftwareSnapshotMgmt * This, VSS_PWSZ pwszVolumeName, VSS_PWSZ pwszDiffAreaVolumeName, LONGLONG llMaximumDiffSpace);
	HRESULT(STDMETHODCALLTYPE * ChangeDiffAreaMaximumSize) (IVssDifferentialSoftwareSnapshotMgmt * This, VSS_PWSZ pwszVolumeName, VSS_PWSZ pwszDiffAreaVolumeName, LONGLONG llMaximumDiffSpace);
	HRESULT(STDMETHODCALLTYPE * QueryVolumesSupportedForDiffAreas) (IVssDifferentialSoftwareSnapshotMgmt * This, VSS_PWSZ pwszOriginalVolumeName, IVssEnumMgmtObject ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * QueryDiffAreasForVolume) (IVssDifferentialSoftwareSnapshotMgmt * This, VSS_PWSZ pwszVolumeName, IVssEnumMgmtObject ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * QueryDiffAreasOnVolume) (IVssDifferentialSoftwareSnapshotMgmt * This, VSS_PWSZ pwszVolumeName, IVssEnumMgmtObject ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * QueryDiffAreasForSnapshot) (IVssDifferentialSoftwareSnapshotMgmt * This, VSS_ID SnapshotId, IVssEnumMgmtObject ** ppEnum);
	END_INTERFACE
}  IVssDifferentialSoftwareSnapshotMgmtVtbl;
interface IVssDifferentialSoftwareSnapshotMgmt
{
	CONST_VTBL struct IVssDifferentialSoftwareSnapshotMgmtVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVssDifferentialSoftwareSnapshotMgmt_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVssDifferentialSoftwareSnapshotMgmt_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVssDifferentialSoftwareSnapshotMgmt_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVssDifferentialSoftwareSnapshotMgmt_AddDiffArea(This,pwszVolumeName,pwszDiffAreaVolumeName,llMaximumDiffSpace) ( (This)->lpVtbl -> AddDiffArea(This,pwszVolumeName,pwszDiffAreaVolumeName,llMaximumDiffSpace) )
#define IVssDifferentialSoftwareSnapshotMgmt_ChangeDiffAreaMaximumSize(This,pwszVolumeName,pwszDiffAreaVolumeName,llMaximumDiffSpace) ( (This)->lpVtbl -> ChangeDiffAreaMaximumSize(This,pwszVolumeName,pwszDiffAreaVolumeName,llMaximumDiffSpace) )
#define IVssDifferentialSoftwareSnapshotMgmt_QueryVolumesSupportedForDiffAreas(This,pwszOriginalVolumeName,ppEnum) ( (This)->lpVtbl -> QueryVolumesSupportedForDiffAreas(This,pwszOriginalVolumeName,ppEnum) )
#define IVssDifferentialSoftwareSnapshotMgmt_QueryDiffAreasForVolume(This,pwszVolumeName,ppEnum) ( (This)->lpVtbl -> QueryDiffAreasForVolume(This,pwszVolumeName,ppEnum) )
#define IVssDifferentialSoftwareSnapshotMgmt_QueryDiffAreasOnVolume(This,pwszVolumeName,ppEnum) ( (This)->lpVtbl -> QueryDiffAreasOnVolume(This,pwszVolumeName,ppEnum) )
#define IVssDifferentialSoftwareSnapshotMgmt_QueryDiffAreasForSnapshot(This,SnapshotId,ppEnum) ( (This)->lpVtbl -> QueryDiffAreasForSnapshot(This,SnapshotId,ppEnum) )
#endif
#endif
#ifndef __IVssDifferentialSoftwareSnapshotMgmt2_INTERFACE_DEFINED__
#define __IVssDifferentialSoftwareSnapshotMgmt2_INTERFACE_DEFINED__
extern const IID IID_IVssDifferentialSoftwareSnapshotMgmt2;
typedef struct IVssDifferentialSoftwareSnapshotMgmt2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVssDifferentialSoftwareSnapshotMgmt2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVssDifferentialSoftwareSnapshotMgmt2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVssDifferentialSoftwareSnapshotMgmt2 * This);
	HRESULT(STDMETHODCALLTYPE * AddDiffArea) (IVssDifferentialSoftwareSnapshotMgmt2 * This, VSS_PWSZ pwszVolumeName, VSS_PWSZ pwszDiffAreaVolumeName, LONGLONG llMaximumDiffSpace);
	HRESULT(STDMETHODCALLTYPE * ChangeDiffAreaMaximumSize) (IVssDifferentialSoftwareSnapshotMgmt2 * This, VSS_PWSZ pwszVolumeName, VSS_PWSZ pwszDiffAreaVolumeName, LONGLONG llMaximumDiffSpace);
	HRESULT(STDMETHODCALLTYPE * QueryVolumesSupportedForDiffAreas) (IVssDifferentialSoftwareSnapshotMgmt2 * This, VSS_PWSZ pwszOriginalVolumeName, IVssEnumMgmtObject ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * QueryDiffAreasForVolume) (IVssDifferentialSoftwareSnapshotMgmt2 * This, VSS_PWSZ pwszVolumeName, IVssEnumMgmtObject ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * QueryDiffAreasOnVolume) (IVssDifferentialSoftwareSnapshotMgmt2 * This, VSS_PWSZ pwszVolumeName, IVssEnumMgmtObject ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * QueryDiffAreasForSnapshot) (IVssDifferentialSoftwareSnapshotMgmt2 * This, VSS_ID SnapshotId, IVssEnumMgmtObject ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * ChangeDiffAreaMaximumSizeEx) (IVssDifferentialSoftwareSnapshotMgmt2 * This, VSS_PWSZ pwszVolumeName, VSS_PWSZ pwszDiffAreaVolumeName, LONGLONG llMaximumDiffSpace, BOOL bVolatile);
	HRESULT(STDMETHODCALLTYPE * MigrateDiffAreas) (IVssDifferentialSoftwareSnapshotMgmt2 * This, VSS_PWSZ pwszVolumeName, VSS_PWSZ pwszDiffAreaVolumeName, VSS_PWSZ pwszNewDiffAreaVolumeName);
	HRESULT(STDMETHODCALLTYPE * QueryMigrationStatus) (IVssDifferentialSoftwareSnapshotMgmt2 * This, VSS_PWSZ pwszVolumeName, VSS_PWSZ pwszDiffAreaVolumeName, IVssAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * SetSnapshotPriority) (IVssDifferentialSoftwareSnapshotMgmt2 * This, VSS_ID idSnapshot, BYTE priority);
	END_INTERFACE
}  IVssDifferentialSoftwareSnapshotMgmt2Vtbl;
interface IVssDifferentialSoftwareSnapshotMgmt2
{
	CONST_VTBL struct IVssDifferentialSoftwareSnapshotMgmt2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVssDifferentialSoftwareSnapshotMgmt2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVssDifferentialSoftwareSnapshotMgmt2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVssDifferentialSoftwareSnapshotMgmt2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVssDifferentialSoftwareSnapshotMgmt2_AddDiffArea(This,pwszVolumeName,pwszDiffAreaVolumeName,llMaximumDiffSpace) ( (This)->lpVtbl -> AddDiffArea(This,pwszVolumeName,pwszDiffAreaVolumeName,llMaximumDiffSpace) )
#define IVssDifferentialSoftwareSnapshotMgmt2_ChangeDiffAreaMaximumSize(This,pwszVolumeName,pwszDiffAreaVolumeName,llMaximumDiffSpace) ( (This)->lpVtbl -> ChangeDiffAreaMaximumSize(This,pwszVolumeName,pwszDiffAreaVolumeName,llMaximumDiffSpace) )
#define IVssDifferentialSoftwareSnapshotMgmt2_QueryVolumesSupportedForDiffAreas(This,pwszOriginalVolumeName,ppEnum) ( (This)->lpVtbl -> QueryVolumesSupportedForDiffAreas(This,pwszOriginalVolumeName,ppEnum) )
#define IVssDifferentialSoftwareSnapshotMgmt2_QueryDiffAreasForVolume(This,pwszVolumeName,ppEnum) ( (This)->lpVtbl -> QueryDiffAreasForVolume(This,pwszVolumeName,ppEnum) )
#define IVssDifferentialSoftwareSnapshotMgmt2_QueryDiffAreasOnVolume(This,pwszVolumeName,ppEnum) ( (This)->lpVtbl -> QueryDiffAreasOnVolume(This,pwszVolumeName,ppEnum) )
#define IVssDifferentialSoftwareSnapshotMgmt2_QueryDiffAreasForSnapshot(This,SnapshotId,ppEnum) ( (This)->lpVtbl -> QueryDiffAreasForSnapshot(This,SnapshotId,ppEnum) )
#define IVssDifferentialSoftwareSnapshotMgmt2_ChangeDiffAreaMaximumSizeEx(This,pwszVolumeName,pwszDiffAreaVolumeName,llMaximumDiffSpace,bVolatile) ( (This)->lpVtbl -> ChangeDiffAreaMaximumSizeEx(This,pwszVolumeName,pwszDiffAreaVolumeName,llMaximumDiffSpace,bVolatile) )
#define IVssDifferentialSoftwareSnapshotMgmt2_MigrateDiffAreas(This,pwszVolumeName,pwszDiffAreaVolumeName,pwszNewDiffAreaVolumeName) ( (This)->lpVtbl -> MigrateDiffAreas(This,pwszVolumeName,pwszDiffAreaVolumeName,pwszNewDiffAreaVolumeName) )
#define IVssDifferentialSoftwareSnapshotMgmt2_QueryMigrationStatus(This,pwszVolumeName,pwszDiffAreaVolumeName,ppAsync) ( (This)->lpVtbl -> QueryMigrationStatus(This,pwszVolumeName,pwszDiffAreaVolumeName,ppAsync) )
#define IVssDifferentialSoftwareSnapshotMgmt2_SetSnapshotPriority(This,idSnapshot,priority) ( (This)->lpVtbl -> SetSnapshotPriority(This,idSnapshot,priority) )
#endif
#endif
#ifndef __IVssDifferentialSoftwareSnapshotMgmt3_INTERFACE_DEFINED__
#define __IVssDifferentialSoftwareSnapshotMgmt3_INTERFACE_DEFINED__
extern const IID IID_IVssDifferentialSoftwareSnapshotMgmt3;
typedef struct IVssDifferentialSoftwareSnapshotMgmt3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVssDifferentialSoftwareSnapshotMgmt3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVssDifferentialSoftwareSnapshotMgmt3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVssDifferentialSoftwareSnapshotMgmt3 * This);
	HRESULT(STDMETHODCALLTYPE * AddDiffArea) (IVssDifferentialSoftwareSnapshotMgmt3 * This, VSS_PWSZ pwszVolumeName, VSS_PWSZ pwszDiffAreaVolumeName, LONGLONG llMaximumDiffSpace);
	HRESULT(STDMETHODCALLTYPE * ChangeDiffAreaMaximumSize) (IVssDifferentialSoftwareSnapshotMgmt3 * This, VSS_PWSZ pwszVolumeName, VSS_PWSZ pwszDiffAreaVolumeName, LONGLONG llMaximumDiffSpace);
	HRESULT(STDMETHODCALLTYPE * QueryVolumesSupportedForDiffAreas) (IVssDifferentialSoftwareSnapshotMgmt3 * This, VSS_PWSZ pwszOriginalVolumeName, IVssEnumMgmtObject ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * QueryDiffAreasForVolume) (IVssDifferentialSoftwareSnapshotMgmt3 * This, VSS_PWSZ pwszVolumeName, IVssEnumMgmtObject ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * QueryDiffAreasOnVolume) (IVssDifferentialSoftwareSnapshotMgmt3 * This, VSS_PWSZ pwszVolumeName, IVssEnumMgmtObject ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * QueryDiffAreasForSnapshot) (IVssDifferentialSoftwareSnapshotMgmt3 * This, VSS_ID SnapshotId, IVssEnumMgmtObject ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * ChangeDiffAreaMaximumSizeEx) (IVssDifferentialSoftwareSnapshotMgmt3 * This, VSS_PWSZ pwszVolumeName, VSS_PWSZ pwszDiffAreaVolumeName, LONGLONG llMaximumDiffSpace, BOOL bVolatile);
	HRESULT(STDMETHODCALLTYPE * MigrateDiffAreas) (IVssDifferentialSoftwareSnapshotMgmt3 * This, VSS_PWSZ pwszVolumeName, VSS_PWSZ pwszDiffAreaVolumeName, VSS_PWSZ pwszNewDiffAreaVolumeName);
	HRESULT(STDMETHODCALLTYPE * QueryMigrationStatus) (IVssDifferentialSoftwareSnapshotMgmt3 * This, VSS_PWSZ pwszVolumeName, VSS_PWSZ pwszDiffAreaVolumeName, IVssAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * SetSnapshotPriority) (IVssDifferentialSoftwareSnapshotMgmt3 * This, VSS_ID idSnapshot, BYTE priority);
	HRESULT(STDMETHODCALLTYPE * SetVolumeProtectLevel) (IVssDifferentialSoftwareSnapshotMgmt3 * This, VSS_PWSZ pwszVolumeName, VSS_PROTECTION_LEVEL protectionLevel);
	HRESULT(STDMETHODCALLTYPE * GetVolumeProtectLevel) (IVssDifferentialSoftwareSnapshotMgmt3 * This, VSS_PWSZ pwszVolumeName, VSS_VOLUME_PROTECTION_INFO * protectionLevel);
	HRESULT(STDMETHODCALLTYPE * ClearVolumeProtectFault) (IVssDifferentialSoftwareSnapshotMgmt3 * This, VSS_PWSZ pwszVolumeName);
	HRESULT(STDMETHODCALLTYPE * DeleteUnusedDiffAreas) (IVssDifferentialSoftwareSnapshotMgmt3 * This, VSS_PWSZ pwszDiffAreaVolumeName);
	HRESULT(STDMETHODCALLTYPE * QuerySnapshotDeltaBitmap) (IVssDifferentialSoftwareSnapshotMgmt3 * This, VSS_ID idSnapshotOlder, VSS_ID idSnapshotYounger, ULONG * pcBlockSizePerBit, ULONG * pcBitmapLength, BYTE ** ppbBitmap);
	END_INTERFACE
}  IVssDifferentialSoftwareSnapshotMgmt3Vtbl;
interface IVssDifferentialSoftwareSnapshotMgmt3
{
	CONST_VTBL struct IVssDifferentialSoftwareSnapshotMgmt3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVssDifferentialSoftwareSnapshotMgmt3_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVssDifferentialSoftwareSnapshotMgmt3_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVssDifferentialSoftwareSnapshotMgmt3_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVssDifferentialSoftwareSnapshotMgmt3_AddDiffArea(This,pwszVolumeName,pwszDiffAreaVolumeName,llMaximumDiffSpace) ( (This)->lpVtbl -> AddDiffArea(This,pwszVolumeName,pwszDiffAreaVolumeName,llMaximumDiffSpace) )
#define IVssDifferentialSoftwareSnapshotMgmt3_ChangeDiffAreaMaximumSize(This,pwszVolumeName,pwszDiffAreaVolumeName,llMaximumDiffSpace) ( (This)->lpVtbl -> ChangeDiffAreaMaximumSize(This,pwszVolumeName,pwszDiffAreaVolumeName,llMaximumDiffSpace) )
#define IVssDifferentialSoftwareSnapshotMgmt3_QueryVolumesSupportedForDiffAreas(This,pwszOriginalVolumeName,ppEnum) ( (This)->lpVtbl -> QueryVolumesSupportedForDiffAreas(This,pwszOriginalVolumeName,ppEnum) )
#define IVssDifferentialSoftwareSnapshotMgmt3_QueryDiffAreasForVolume(This,pwszVolumeName,ppEnum) ( (This)->lpVtbl -> QueryDiffAreasForVolume(This,pwszVolumeName,ppEnum) )
#define IVssDifferentialSoftwareSnapshotMgmt3_QueryDiffAreasOnVolume(This,pwszVolumeName,ppEnum) ( (This)->lpVtbl -> QueryDiffAreasOnVolume(This,pwszVolumeName,ppEnum) )
#define IVssDifferentialSoftwareSnapshotMgmt3_QueryDiffAreasForSnapshot(This,SnapshotId,ppEnum) ( (This)->lpVtbl -> QueryDiffAreasForSnapshot(This,SnapshotId,ppEnum) )
#define IVssDifferentialSoftwareSnapshotMgmt3_ChangeDiffAreaMaximumSizeEx(This,pwszVolumeName,pwszDiffAreaVolumeName,llMaximumDiffSpace,bVolatile) ( (This)->lpVtbl -> ChangeDiffAreaMaximumSizeEx(This,pwszVolumeName,pwszDiffAreaVolumeName,llMaximumDiffSpace,bVolatile) )
#define IVssDifferentialSoftwareSnapshotMgmt3_MigrateDiffAreas(This,pwszVolumeName,pwszDiffAreaVolumeName,pwszNewDiffAreaVolumeName) ( (This)->lpVtbl -> MigrateDiffAreas(This,pwszVolumeName,pwszDiffAreaVolumeName,pwszNewDiffAreaVolumeName) )
#define IVssDifferentialSoftwareSnapshotMgmt3_QueryMigrationStatus(This,pwszVolumeName,pwszDiffAreaVolumeName,ppAsync) ( (This)->lpVtbl -> QueryMigrationStatus(This,pwszVolumeName,pwszDiffAreaVolumeName,ppAsync) )
#define IVssDifferentialSoftwareSnapshotMgmt3_SetSnapshotPriority(This,idSnapshot,priority) ( (This)->lpVtbl -> SetSnapshotPriority(This,idSnapshot,priority) )
#define IVssDifferentialSoftwareSnapshotMgmt3_SetVolumeProtectLevel(This,pwszVolumeName,protectionLevel) ( (This)->lpVtbl -> SetVolumeProtectLevel(This,pwszVolumeName,protectionLevel) )
#define IVssDifferentialSoftwareSnapshotMgmt3_GetVolumeProtectLevel(This,pwszVolumeName,protectionLevel) ( (This)->lpVtbl -> GetVolumeProtectLevel(This,pwszVolumeName,protectionLevel) )
#define IVssDifferentialSoftwareSnapshotMgmt3_ClearVolumeProtectFault(This,pwszVolumeName) ( (This)->lpVtbl -> ClearVolumeProtectFault(This,pwszVolumeName) )
#define IVssDifferentialSoftwareSnapshotMgmt3_DeleteUnusedDiffAreas(This,pwszDiffAreaVolumeName) ( (This)->lpVtbl -> DeleteUnusedDiffAreas(This,pwszDiffAreaVolumeName) )
#define IVssDifferentialSoftwareSnapshotMgmt3_QuerySnapshotDeltaBitmap(This,idSnapshotOlder,idSnapshotYounger,pcBlockSizePerBit,pcBitmapLength,ppbBitmap) ( (This)->lpVtbl -> QuerySnapshotDeltaBitmap(This,idSnapshotOlder,idSnapshotYounger,pcBlockSizePerBit,pcBitmapLength,ppbBitmap) )
#endif
#endif
#ifndef __IVssEnumMgmtObject_INTERFACE_DEFINED__
#define __IVssEnumMgmtObject_INTERFACE_DEFINED__
extern const IID IID_IVssEnumMgmtObject;
typedef struct IVssEnumMgmtObjectVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVssEnumMgmtObject * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVssEnumMgmtObject * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVssEnumMgmtObject * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IVssEnumMgmtObject * This, ULONG celt, VSS_MGMT_OBJECT_PROP * rgelt, ULONG * pceltFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IVssEnumMgmtObject * This, ULONG celt);
	HRESULT(STDMETHODCALLTYPE * Reset) (IVssEnumMgmtObject * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IVssEnumMgmtObject * This, IVssEnumMgmtObject ** ppenum);
	END_INTERFACE
}  IVssEnumMgmtObjectVtbl;
interface IVssEnumMgmtObject
{
	CONST_VTBL struct IVssEnumMgmtObjectVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVssEnumMgmtObject_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVssEnumMgmtObject_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVssEnumMgmtObject_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVssEnumMgmtObject_Next(This,celt,rgelt,pceltFetched) ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
#define IVssEnumMgmtObject_Skip(This,celt) ( (This)->lpVtbl -> Skip(This,celt) )
#define IVssEnumMgmtObject_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#define IVssEnumMgmtObject_Clone(This,ppenum) ( (This)->lpVtbl -> Clone(This,ppenum) )
#endif
#endif
#ifndef __VSMGMT_LIBRARY_DEFINED__
#define __VSMGMT_LIBRARY_DEFINED__
extern const IID LIBID_VSMGMT;
extern const CLSID CLSID_VssSnapshotMgmt;
#endif
#endif
