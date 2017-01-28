/*+@@file@@----------------------------------------------------------------*//*!
 \file		vsprov.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep 18 23:21:31 2016
 \date		Modified on Sun Sep 18 23:21:31 2016
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
#ifndef __vsprov_h__
#define __vsprov_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IVssSoftwareSnapshotProvider_FWD_DEFINED__
#define __IVssSoftwareSnapshotProvider_FWD_DEFINED__
typedef interface IVssSoftwareSnapshotProvider IVssSoftwareSnapshotProvider;
#endif
#ifndef __IVssProviderCreateSnapshotSet_FWD_DEFINED__
#define __IVssProviderCreateSnapshotSet_FWD_DEFINED__
typedef interface IVssProviderCreateSnapshotSet IVssProviderCreateSnapshotSet;
#endif
#ifndef __IVssProviderNotifications_FWD_DEFINED__
#define __IVssProviderNotifications_FWD_DEFINED__
typedef interface IVssProviderNotifications IVssProviderNotifications;
#endif
#ifndef __IVssHardwareSnapshotProvider_FWD_DEFINED__
#define __IVssHardwareSnapshotProvider_FWD_DEFINED__
typedef interface IVssHardwareSnapshotProvider IVssHardwareSnapshotProvider;
#endif
#ifndef __IVssHardwareSnapshotProviderEx_FWD_DEFINED__
#define __IVssHardwareSnapshotProviderEx_FWD_DEFINED__
typedef interface IVssHardwareSnapshotProviderEx IVssHardwareSnapshotProviderEx;
#endif
#include <oaidl.h>
#include <ocidl.h>
#include <vss.h>
#include <vdslun.h>
typedef VSS_PWSZ *PVSS_PWSZ;
extern RPC_IF_HANDLE __MIDL_itf_vsprov_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vsprov_0000_0000_v0_0_s_ifspec;
#ifndef __IVssSoftwareSnapshotProvider_INTERFACE_DEFINED__
#define __IVssSoftwareSnapshotProvider_INTERFACE_DEFINED__
extern const IID IID_IVssSoftwareSnapshotProvider;
typedef struct IVssSoftwareSnapshotProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVssSoftwareSnapshotProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVssSoftwareSnapshotProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVssSoftwareSnapshotProvider * This);
	HRESULT(STDMETHODCALLTYPE * SetContext) (IVssSoftwareSnapshotProvider * This, LONG lContext);
	HRESULT(STDMETHODCALLTYPE * GetSnapshotProperties) (IVssSoftwareSnapshotProvider * This, VSS_ID SnapshotId, VSS_SNAPSHOT_PROP * pProp);
	HRESULT(STDMETHODCALLTYPE * Query) (IVssSoftwareSnapshotProvider * This, VSS_ID QueriedObjectId, VSS_OBJECT_TYPE eQueriedObjectType, VSS_OBJECT_TYPE eReturnedObjectsType, IVssEnumObject ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * DeleteSnapshots) (IVssSoftwareSnapshotProvider * This, VSS_ID SourceObjectId, VSS_OBJECT_TYPE eSourceObjectType, BOOL bForceDelete, LONG * plDeletedSnapshots, VSS_ID * pNondeletedSnapshotID);
	HRESULT(STDMETHODCALLTYPE * BeginPrepareSnapshot) (IVssSoftwareSnapshotProvider * This, VSS_ID SnapshotSetId, VSS_ID SnapshotId, VSS_PWSZ pwszVolumeName, LONG lNewContext);
	HRESULT(STDMETHODCALLTYPE * IsVolumeSupported) (IVssSoftwareSnapshotProvider * This, VSS_PWSZ pwszVolumeName, BOOL * pbSupportedByThisProvider);
	HRESULT(STDMETHODCALLTYPE * IsVolumeSnapshotted) (IVssSoftwareSnapshotProvider * This, VSS_PWSZ pwszVolumeName, BOOL * pbSnapshotsPresent, LONG * plSnapshotCompatibility);
	HRESULT(STDMETHODCALLTYPE * SetSnapshotProperty) (IVssSoftwareSnapshotProvider * This, VSS_ID SnapshotId, VSS_SNAPSHOT_PROPERTY_ID eSnapshotPropertyId, VARIANT vProperty);
	HRESULT(STDMETHODCALLTYPE * RevertToSnapshot) (IVssSoftwareSnapshotProvider * This, VSS_ID SnapshotId);
	HRESULT(STDMETHODCALLTYPE * QueryRevertStatus) (IVssSoftwareSnapshotProvider * This, VSS_PWSZ pwszVolume, IVssAsync ** ppAsync);
	END_INTERFACE
}  IVssSoftwareSnapshotProviderVtbl;
interface IVssSoftwareSnapshotProvider
{
	CONST_VTBL struct IVssSoftwareSnapshotProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVssSoftwareSnapshotProvider_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVssSoftwareSnapshotProvider_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVssSoftwareSnapshotProvider_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVssSoftwareSnapshotProvider_SetContext(This,lContext) ( (This)->lpVtbl -> SetContext(This,lContext) )
#define IVssSoftwareSnapshotProvider_GetSnapshotProperties(This,SnapshotId,pProp) ( (This)->lpVtbl -> GetSnapshotProperties(This,SnapshotId,pProp) )
#define IVssSoftwareSnapshotProvider_Query(This,QueriedObjectId,eQueriedObjectType,eReturnedObjectsType,ppEnum) ( (This)->lpVtbl -> Query(This,QueriedObjectId,eQueriedObjectType,eReturnedObjectsType,ppEnum) )
#define IVssSoftwareSnapshotProvider_DeleteSnapshots(This,SourceObjectId,eSourceObjectType,bForceDelete,plDeletedSnapshots,pNondeletedSnapshotID) ( (This)->lpVtbl -> DeleteSnapshots(This,SourceObjectId,eSourceObjectType,bForceDelete,plDeletedSnapshots,pNondeletedSnapshotID) )
#define IVssSoftwareSnapshotProvider_BeginPrepareSnapshot(This,SnapshotSetId,SnapshotId,pwszVolumeName,lNewContext) ( (This)->lpVtbl -> BeginPrepareSnapshot(This,SnapshotSetId,SnapshotId,pwszVolumeName,lNewContext) )
#define IVssSoftwareSnapshotProvider_IsVolumeSupported(This,pwszVolumeName,pbSupportedByThisProvider) ( (This)->lpVtbl -> IsVolumeSupported(This,pwszVolumeName,pbSupportedByThisProvider) )
#define IVssSoftwareSnapshotProvider_IsVolumeSnapshotted(This,pwszVolumeName,pbSnapshotsPresent,plSnapshotCompatibility) ( (This)->lpVtbl -> IsVolumeSnapshotted(This,pwszVolumeName,pbSnapshotsPresent,plSnapshotCompatibility) )
#define IVssSoftwareSnapshotProvider_SetSnapshotProperty(This,SnapshotId,eSnapshotPropertyId,vProperty) ( (This)->lpVtbl -> SetSnapshotProperty(This,SnapshotId,eSnapshotPropertyId,vProperty) )
#define IVssSoftwareSnapshotProvider_RevertToSnapshot(This,SnapshotId) ( (This)->lpVtbl -> RevertToSnapshot(This,SnapshotId) )
#define IVssSoftwareSnapshotProvider_QueryRevertStatus(This,pwszVolume,ppAsync) ( (This)->lpVtbl -> QueryRevertStatus(This,pwszVolume,ppAsync) )
#endif
#endif
#ifndef __IVssProviderCreateSnapshotSet_INTERFACE_DEFINED__
#define __IVssProviderCreateSnapshotSet_INTERFACE_DEFINED__
extern const IID IID_IVssProviderCreateSnapshotSet;
typedef struct IVssProviderCreateSnapshotSetVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVssProviderCreateSnapshotSet * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVssProviderCreateSnapshotSet * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVssProviderCreateSnapshotSet * This);
	HRESULT(STDMETHODCALLTYPE * EndPrepareSnapshots) (IVssProviderCreateSnapshotSet * This, VSS_ID SnapshotSetId);
	HRESULT(STDMETHODCALLTYPE * PreCommitSnapshots) (IVssProviderCreateSnapshotSet * This, VSS_ID SnapshotSetId);
	HRESULT(STDMETHODCALLTYPE * CommitSnapshots) (IVssProviderCreateSnapshotSet * This, VSS_ID SnapshotSetId);
	HRESULT(STDMETHODCALLTYPE * PostCommitSnapshots) (IVssProviderCreateSnapshotSet * This, VSS_ID SnapshotSetId, LONG lSnapshotsCount);
	HRESULT(STDMETHODCALLTYPE * PreFinalCommitSnapshots) (IVssProviderCreateSnapshotSet * This, VSS_ID SnapshotSetId);
	HRESULT(STDMETHODCALLTYPE * PostFinalCommitSnapshots) (IVssProviderCreateSnapshotSet * This, VSS_ID SnapshotSetId);
	HRESULT(STDMETHODCALLTYPE * AbortSnapshots) (IVssProviderCreateSnapshotSet * This, VSS_ID SnapshotSetId);
	END_INTERFACE
}  IVssProviderCreateSnapshotSetVtbl;
interface IVssProviderCreateSnapshotSet
{
	CONST_VTBL struct IVssProviderCreateSnapshotSetVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVssProviderCreateSnapshotSet_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVssProviderCreateSnapshotSet_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVssProviderCreateSnapshotSet_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVssProviderCreateSnapshotSet_EndPrepareSnapshots(This,SnapshotSetId) ( (This)->lpVtbl -> EndPrepareSnapshots(This,SnapshotSetId) )
#define IVssProviderCreateSnapshotSet_PreCommitSnapshots(This,SnapshotSetId) ( (This)->lpVtbl -> PreCommitSnapshots(This,SnapshotSetId) )
#define IVssProviderCreateSnapshotSet_CommitSnapshots(This,SnapshotSetId) ( (This)->lpVtbl -> CommitSnapshots(This,SnapshotSetId) )
#define IVssProviderCreateSnapshotSet_PostCommitSnapshots(This,SnapshotSetId,lSnapshotsCount) ( (This)->lpVtbl -> PostCommitSnapshots(This,SnapshotSetId,lSnapshotsCount) )
#define IVssProviderCreateSnapshotSet_PreFinalCommitSnapshots(This,SnapshotSetId) ( (This)->lpVtbl -> PreFinalCommitSnapshots(This,SnapshotSetId) )
#define IVssProviderCreateSnapshotSet_PostFinalCommitSnapshots(This,SnapshotSetId) ( (This)->lpVtbl -> PostFinalCommitSnapshots(This,SnapshotSetId) )
#define IVssProviderCreateSnapshotSet_AbortSnapshots(This,SnapshotSetId) ( (This)->lpVtbl -> AbortSnapshots(This,SnapshotSetId) )
#endif
#endif
#ifndef __IVssProviderNotifications_INTERFACE_DEFINED__
#define __IVssProviderNotifications_INTERFACE_DEFINED__
extern const IID IID_IVssProviderNotifications;
typedef struct IVssProviderNotificationsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVssProviderNotifications * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVssProviderNotifications * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVssProviderNotifications * This);
	HRESULT(STDMETHODCALLTYPE * OnLoad) (IVssProviderNotifications * This, IUnknown * pCallback);
	HRESULT(STDMETHODCALLTYPE * OnUnload) (IVssProviderNotifications * This, BOOL bForceUnload);
	END_INTERFACE
}  IVssProviderNotificationsVtbl;
interface IVssProviderNotifications
{
	CONST_VTBL struct IVssProviderNotificationsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVssProviderNotifications_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVssProviderNotifications_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVssProviderNotifications_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVssProviderNotifications_OnLoad(This,pCallback) ( (This)->lpVtbl -> OnLoad(This,pCallback) )
#define IVssProviderNotifications_OnUnload(This,bForceUnload) ( (This)->lpVtbl -> OnUnload(This,bForceUnload) )
#endif
#endif
#ifndef __IVssHardwareSnapshotProvider_INTERFACE_DEFINED__
#define __IVssHardwareSnapshotProvider_INTERFACE_DEFINED__
extern const IID IID_IVssHardwareSnapshotProvider;
typedef struct IVssHardwareSnapshotProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVssHardwareSnapshotProvider * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVssHardwareSnapshotProvider * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVssHardwareSnapshotProvider * This);
	HRESULT(STDMETHODCALLTYPE * AreLunsSupported) (IVssHardwareSnapshotProvider * This, LONG lLunCount, LONG lContext, VSS_PWSZ * rgwszDevices, VDS_LUN_INFORMATION * pLunInformation, BOOL * pbIsSupported);
	HRESULT(STDMETHODCALLTYPE * FillInLunInfo) (IVssHardwareSnapshotProvider * This, VSS_PWSZ wszDeviceName, VDS_LUN_INFORMATION * pLunInfo, BOOL * pbIsSupported);
	HRESULT(STDMETHODCALLTYPE * BeginPrepareSnapshot) (IVssHardwareSnapshotProvider * This, VSS_ID SnapshotSetId, VSS_ID SnapshotId, LONG lContext, LONG lLunCount, VSS_PWSZ * rgDeviceNames, VDS_LUN_INFORMATION * rgLunInformation);
	HRESULT(STDMETHODCALLTYPE * GetTargetLuns) (IVssHardwareSnapshotProvider * This, LONG lLunCount, VSS_PWSZ * rgDeviceNames, VDS_LUN_INFORMATION * rgSourceLuns, VDS_LUN_INFORMATION * rgDestinationLuns);
	HRESULT(STDMETHODCALLTYPE * LocateLuns) (IVssHardwareSnapshotProvider * This, LONG lLunCount, VDS_LUN_INFORMATION * rgSourceLuns);
	HRESULT(STDMETHODCALLTYPE * OnLunEmpty) (IVssHardwareSnapshotProvider * This, VSS_PWSZ wszDeviceName, VDS_LUN_INFORMATION * pInformation);
	END_INTERFACE
}  IVssHardwareSnapshotProviderVtbl;
interface IVssHardwareSnapshotProvider
{
	CONST_VTBL struct IVssHardwareSnapshotProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVssHardwareSnapshotProvider_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVssHardwareSnapshotProvider_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVssHardwareSnapshotProvider_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVssHardwareSnapshotProvider_AreLunsSupported(This,lLunCount,lContext,rgwszDevices,pLunInformation,pbIsSupported) ( (This)->lpVtbl -> AreLunsSupported(This,lLunCount,lContext,rgwszDevices,pLunInformation,pbIsSupported) )
#define IVssHardwareSnapshotProvider_FillInLunInfo(This,wszDeviceName,pLunInfo,pbIsSupported) ( (This)->lpVtbl -> FillInLunInfo(This,wszDeviceName,pLunInfo,pbIsSupported) )
#define IVssHardwareSnapshotProvider_BeginPrepareSnapshot(This,SnapshotSetId,SnapshotId,lContext,lLunCount,rgDeviceNames,rgLunInformation) ( (This)->lpVtbl -> BeginPrepareSnapshot(This,SnapshotSetId,SnapshotId,lContext,lLunCount,rgDeviceNames,rgLunInformation) )
#define IVssHardwareSnapshotProvider_GetTargetLuns(This,lLunCount,rgDeviceNames,rgSourceLuns,rgDestinationLuns) ( (This)->lpVtbl -> GetTargetLuns(This,lLunCount,rgDeviceNames,rgSourceLuns,rgDestinationLuns) )
#define IVssHardwareSnapshotProvider_LocateLuns(This,lLunCount,rgSourceLuns) ( (This)->lpVtbl -> LocateLuns(This,lLunCount,rgSourceLuns) )
#define IVssHardwareSnapshotProvider_OnLunEmpty(This,wszDeviceName,pInformation) ( (This)->lpVtbl -> OnLunEmpty(This,wszDeviceName,pInformation) )
#endif
#endif
#ifndef __IVssHardwareSnapshotProviderEx_INTERFACE_DEFINED__
#define __IVssHardwareSnapshotProviderEx_INTERFACE_DEFINED__
extern const IID IID_IVssHardwareSnapshotProviderEx;
typedef struct IVssHardwareSnapshotProviderExVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVssHardwareSnapshotProviderEx * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVssHardwareSnapshotProviderEx * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVssHardwareSnapshotProviderEx * This);
	HRESULT(STDMETHODCALLTYPE * AreLunsSupported) (IVssHardwareSnapshotProviderEx * This, LONG lLunCount, LONG lContext, VSS_PWSZ * rgwszDevices, VDS_LUN_INFORMATION * pLunInformation, BOOL * pbIsSupported);
	HRESULT(STDMETHODCALLTYPE * FillInLunInfo) (IVssHardwareSnapshotProviderEx * This, VSS_PWSZ wszDeviceName, VDS_LUN_INFORMATION * pLunInfo, BOOL * pbIsSupported);
	HRESULT(STDMETHODCALLTYPE * BeginPrepareSnapshot) (IVssHardwareSnapshotProviderEx * This, VSS_ID SnapshotSetId, VSS_ID SnapshotId, LONG lContext, LONG lLunCount, VSS_PWSZ * rgDeviceNames, VDS_LUN_INFORMATION * rgLunInformation);
	HRESULT(STDMETHODCALLTYPE * GetTargetLuns) (IVssHardwareSnapshotProviderEx * This, LONG lLunCount, VSS_PWSZ * rgDeviceNames, VDS_LUN_INFORMATION * rgSourceLuns, VDS_LUN_INFORMATION * rgDestinationLuns);
	HRESULT(STDMETHODCALLTYPE * LocateLuns) (IVssHardwareSnapshotProviderEx * This, LONG lLunCount, VDS_LUN_INFORMATION * rgSourceLuns);
	HRESULT(STDMETHODCALLTYPE * OnLunEmpty) (IVssHardwareSnapshotProviderEx * This, VSS_PWSZ wszDeviceName, VDS_LUN_INFORMATION * pInformation);
	HRESULT(STDMETHODCALLTYPE * GetProviderCapabilities) (IVssHardwareSnapshotProviderEx * This, ULONGLONG * pllOriginalCapabilityMask);
	HRESULT(STDMETHODCALLTYPE * OnLunStateChange) (IVssHardwareSnapshotProviderEx * This, VDS_LUN_INFORMATION * pSnapshotLuns, VDS_LUN_INFORMATION * pOriginalLuns, DWORD dwCount, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * ResyncLuns) (IVssHardwareSnapshotProviderEx * This, VDS_LUN_INFORMATION * pSourceLuns, VDS_LUN_INFORMATION * pTargetLuns, DWORD dwCount, IVssAsync ** ppAsync);
	HRESULT(STDMETHODCALLTYPE * OnReuseLuns) (IVssHardwareSnapshotProviderEx * This, VDS_LUN_INFORMATION * pSnapshotLuns, VDS_LUN_INFORMATION * pOriginalLuns, DWORD dwCount);
	END_INTERFACE
}  IVssHardwareSnapshotProviderExVtbl;
interface IVssHardwareSnapshotProviderEx
{
	CONST_VTBL struct IVssHardwareSnapshotProviderExVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVssHardwareSnapshotProviderEx_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVssHardwareSnapshotProviderEx_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVssHardwareSnapshotProviderEx_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVssHardwareSnapshotProviderEx_AreLunsSupported(This,lLunCount,lContext,rgwszDevices,pLunInformation,pbIsSupported) ( (This)->lpVtbl -> AreLunsSupported(This,lLunCount,lContext,rgwszDevices,pLunInformation,pbIsSupported) )
#define IVssHardwareSnapshotProviderEx_FillInLunInfo(This,wszDeviceName,pLunInfo,pbIsSupported) ( (This)->lpVtbl -> FillInLunInfo(This,wszDeviceName,pLunInfo,pbIsSupported) )
#define IVssHardwareSnapshotProviderEx_BeginPrepareSnapshot(This,SnapshotSetId,SnapshotId,lContext,lLunCount,rgDeviceNames,rgLunInformation) ( (This)->lpVtbl -> BeginPrepareSnapshot(This,SnapshotSetId,SnapshotId,lContext,lLunCount,rgDeviceNames,rgLunInformation) )
#define IVssHardwareSnapshotProviderEx_GetTargetLuns(This,lLunCount,rgDeviceNames,rgSourceLuns,rgDestinationLuns) ( (This)->lpVtbl -> GetTargetLuns(This,lLunCount,rgDeviceNames,rgSourceLuns,rgDestinationLuns) )
#define IVssHardwareSnapshotProviderEx_LocateLuns(This,lLunCount,rgSourceLuns) ( (This)->lpVtbl -> LocateLuns(This,lLunCount,rgSourceLuns) )
#define IVssHardwareSnapshotProviderEx_OnLunEmpty(This,wszDeviceName,pInformation) ( (This)->lpVtbl -> OnLunEmpty(This,wszDeviceName,pInformation) )
#define IVssHardwareSnapshotProviderEx_GetProviderCapabilities(This,pllOriginalCapabilityMask) ( (This)->lpVtbl -> GetProviderCapabilities(This,pllOriginalCapabilityMask) )
#define IVssHardwareSnapshotProviderEx_OnLunStateChange(This,pSnapshotLuns,pOriginalLuns,dwCount,dwFlags) ( (This)->lpVtbl -> OnLunStateChange(This,pSnapshotLuns,pOriginalLuns,dwCount,dwFlags) )
#define IVssHardwareSnapshotProviderEx_ResyncLuns(This,pSourceLuns,pTargetLuns,dwCount,ppAsync) ( (This)->lpVtbl -> ResyncLuns(This,pSourceLuns,pTargetLuns,dwCount,ppAsync) )
#define IVssHardwareSnapshotProviderEx_OnReuseLuns(This,pSnapshotLuns,pOriginalLuns,dwCount) ( (This)->lpVtbl -> OnReuseLuns(This,pSnapshotLuns,pOriginalLuns,dwCount) )
#endif
#endif
#ifndef __VSSProvider_LIBRARY_DEFINED__
#define __VSSProvider_LIBRARY_DEFINED__
extern const IID LIBID_VSSProvider;
#endif
unsigned long __RPC_USER VARIANT_UserSize(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree(unsigned long *, VARIANT *);
unsigned long __RPC_USER VARIANT_UserSize64(unsigned long *, unsigned long, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserMarshal64(unsigned long *, unsigned char *, VARIANT *);
unsigned char *__RPC_USER VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT *);
void __RPC_USER VARIANT_UserFree64(unsigned long *, VARIANT *);
#endif
