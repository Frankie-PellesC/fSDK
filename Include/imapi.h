/*+@@file@@----------------------------------------------------------------*//*!
 \file		imapi.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul 16 21:14:22 2016
 \date		Modified on Sat Jul 16 21:14:22 2016
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
#ifndef __imapi_h__
#define __imapi_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IDiscRecorder_FWD_DEFINED__
#define __IDiscRecorder_FWD_DEFINED__
typedef interface IDiscRecorder IDiscRecorder;
#endif
#ifndef __IEnumDiscRecorders_FWD_DEFINED__
#define __IEnumDiscRecorders_FWD_DEFINED__
typedef interface IEnumDiscRecorders IEnumDiscRecorders;
#endif
#ifndef __IEnumDiscMasterFormats_FWD_DEFINED__
#define __IEnumDiscMasterFormats_FWD_DEFINED__
typedef interface IEnumDiscMasterFormats IEnumDiscMasterFormats;
#endif
#ifndef __IRedbookDiscMaster_FWD_DEFINED__
#define __IRedbookDiscMaster_FWD_DEFINED__
typedef interface IRedbookDiscMaster IRedbookDiscMaster;
#endif
#ifndef __IJolietDiscMaster_FWD_DEFINED__
#define __IJolietDiscMaster_FWD_DEFINED__
typedef interface IJolietDiscMaster IJolietDiscMaster;
#endif
#ifndef __IDiscMasterProgressEvents_FWD_DEFINED__
#define __IDiscMasterProgressEvents_FWD_DEFINED__
typedef interface IDiscMasterProgressEvents IDiscMasterProgressEvents;
#endif
#ifndef __IDiscMaster_FWD_DEFINED__
#define __IDiscMaster_FWD_DEFINED__
typedef interface IDiscMaster IDiscMaster;
#endif
#ifndef __MSDiscRecorderObj_FWD_DEFINED__
#define __MSDiscRecorderObj_FWD_DEFINED__
typedef struct MSDiscRecorderObj MSDiscRecorderObj;
#endif
#ifndef __MSDiscMasterObj_FWD_DEFINED__
#define __MSDiscMasterObj_FWD_DEFINED__
typedef struct MSDiscMasterObj MSDiscMasterObj;
#endif
#ifndef __MSEnumDiscRecordersObj_FWD_DEFINED__
#define __MSEnumDiscRecordersObj_FWD_DEFINED__
typedef struct MSEnumDiscRecordersObj MSEnumDiscRecordersObj;
#endif
#include "oaidl.h"
#include "ocidl.h"
#include "propidl.h"
C_ASSERT(sizeof(boolean) == 1);
extern RPC_IF_HANDLE __MIDL_itf_imapi_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imapi_0000_0000_v0_0_s_ifspec;
#ifndef __IDiscRecorder_INTERFACE_DEFINED__
#define __IDiscRecorder_INTERFACE_DEFINED__
enum MEDIA_TYPES
{
	MEDIA_CDDA_CDROM = 1,
	MEDIA_CD_ROM_XA = (MEDIA_CDDA_CDROM + 1),
	MEDIA_CD_I = (MEDIA_CD_ROM_XA + 1),
	MEDIA_CD_EXTRA = (MEDIA_CD_I + 1),
	MEDIA_CD_OTHER = (MEDIA_CD_EXTRA + 1),
	MEDIA_SPECIAL = (MEDIA_CD_OTHER + 1)
};
enum MEDIA_FLAGS
{
	MEDIA_BLANK = 0x1,
	MEDIA_RW = 0x2,
	MEDIA_WRITABLE = 0x4,
	MEDIA_FORMAT_UNUSABLE_BY_IMAPI = 0x8
};
enum RECORDER_TYPES
{
	RECORDER_CDR = 0x1,
	RECORDER_CDRW = 0x2
};
#define	RECORDER_DOING_NOTHING	( 0 )
#define	RECORDER_OPENED	( 0x1 )
#define	RECORDER_BURNING	( 0x2 )
extern const IID IID_IDiscRecorder;
typedef struct IDiscRecorderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDiscRecorder * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDiscRecorder * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDiscRecorder * This);
	HRESULT(STDMETHODCALLTYPE * Init) (IDiscRecorder * This, byte * pbyUniqueID, ULONG nulIDSize, ULONG nulDriveNumber);
	HRESULT(STDMETHODCALLTYPE * GetRecorderGUID) (IDiscRecorder * This, byte * pbyUniqueID, ULONG ulBufferSize, ULONG * pulReturnSizeRequired);
	HRESULT(STDMETHODCALLTYPE * GetRecorderType) (IDiscRecorder * This, long *fTypeCode);
	HRESULT(STDMETHODCALLTYPE * GetDisplayNames) (IDiscRecorder * This, BSTR * pbstrVendorID, BSTR * pbstrProductID, BSTR * pbstrRevision);
	HRESULT(STDMETHODCALLTYPE * GetBasePnPID) (IDiscRecorder * This, BSTR * pbstrBasePnPID);
	HRESULT(STDMETHODCALLTYPE * GetPath) (IDiscRecorder * This, BSTR * pbstrPath);
	HRESULT(STDMETHODCALLTYPE * GetRecorderProperties) (IDiscRecorder * This, IPropertyStorage ** ppPropStg);
	HRESULT(STDMETHODCALLTYPE * SetRecorderProperties) (IDiscRecorder * This, IPropertyStorage * pPropStg);
	HRESULT(STDMETHODCALLTYPE * GetRecorderState) (IDiscRecorder * This, ULONG * pulDevStateFlags);
	HRESULT(STDMETHODCALLTYPE * OpenExclusive) (IDiscRecorder * This);
	HRESULT(STDMETHODCALLTYPE * QueryMediaType) (IDiscRecorder * This, long *fMediaType, long *fMediaFlags);
	HRESULT(STDMETHODCALLTYPE * QueryMediaInfo) (IDiscRecorder * This, byte * pbSessions, byte * pbLastTrack, ULONG * ulStartAddress, ULONG * ulNextWritable, ULONG * ulFreeBlocks);
	HRESULT(STDMETHODCALLTYPE * Eject) (IDiscRecorder * This);
	HRESULT(STDMETHODCALLTYPE * Erase) (IDiscRecorder * This, boolean bFullErase);
	HRESULT(STDMETHODCALLTYPE * Close) (IDiscRecorder * This);
	END_INTERFACE
}  IDiscRecorderVtbl;
interface IDiscRecorder
{
	CONST_VTBL struct IDiscRecorderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDiscRecorder_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDiscRecorder_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDiscRecorder_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDiscRecorder_Init(This,pbyUniqueID,nulIDSize,nulDriveNumber)( (This)->lpVtbl -> Init(This,pbyUniqueID,nulIDSize,nulDriveNumber) )
#define IDiscRecorder_GetRecorderGUID(This,pbyUniqueID,ulBufferSize,pulReturnSizeRequired)( (This)->lpVtbl -> GetRecorderGUID(This,pbyUniqueID,ulBufferSize,pulReturnSizeRequired) )
#define IDiscRecorder_GetRecorderType(This,fTypeCode)( (This)->lpVtbl -> GetRecorderType(This,fTypeCode) )
#define IDiscRecorder_GetDisplayNames(This,pbstrVendorID,pbstrProductID,pbstrRevision)( (This)->lpVtbl -> GetDisplayNames(This,pbstrVendorID,pbstrProductID,pbstrRevision) )
#define IDiscRecorder_GetBasePnPID(This,pbstrBasePnPID)( (This)->lpVtbl -> GetBasePnPID(This,pbstrBasePnPID) )
#define IDiscRecorder_GetPath(This,pbstrPath)( (This)->lpVtbl -> GetPath(This,pbstrPath) )
#define IDiscRecorder_GetRecorderProperties(This,ppPropStg)( (This)->lpVtbl -> GetRecorderProperties(This,ppPropStg) )
#define IDiscRecorder_SetRecorderProperties(This,pPropStg)( (This)->lpVtbl -> SetRecorderProperties(This,pPropStg) )
#define IDiscRecorder_GetRecorderState(This,pulDevStateFlags)( (This)->lpVtbl -> GetRecorderState(This,pulDevStateFlags) )
#define IDiscRecorder_OpenExclusive(This)( (This)->lpVtbl -> OpenExclusive(This) )
#define IDiscRecorder_QueryMediaType(This,fMediaType,fMediaFlags)( (This)->lpVtbl -> QueryMediaType(This,fMediaType,fMediaFlags) )
#define IDiscRecorder_QueryMediaInfo(This,pbSessions,pbLastTrack,ulStartAddress,ulNextWritable,ulFreeBlocks)( (This)->lpVtbl -> QueryMediaInfo(This,pbSessions,pbLastTrack,ulStartAddress,ulNextWritable,ulFreeBlocks) )
#define IDiscRecorder_Eject(This)( (This)->lpVtbl -> Eject(This) )
#define IDiscRecorder_Erase(This,bFullErase)( (This)->lpVtbl -> Erase(This,bFullErase) )
#define IDiscRecorder_Close(This)( (This)->lpVtbl -> Close(This) )
#endif
#endif
#ifndef __IEnumDiscRecorders_INTERFACE_DEFINED__
#define __IEnumDiscRecorders_INTERFACE_DEFINED__
extern const IID IID_IEnumDiscRecorders;
typedef struct IEnumDiscRecordersVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumDiscRecorders * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumDiscRecorders * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumDiscRecorders * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumDiscRecorders * This, ULONG cRecorders, IDiscRecorder ** ppRecorder, ULONG * pcFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumDiscRecorders * This, ULONG cRecorders);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumDiscRecorders * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumDiscRecorders * This, IEnumDiscRecorders ** ppEnum);
	END_INTERFACE
}  IEnumDiscRecordersVtbl;
interface IEnumDiscRecorders
{
	CONST_VTBL struct IEnumDiscRecordersVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumDiscRecorders_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumDiscRecorders_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEnumDiscRecorders_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEnumDiscRecorders_Next(This,cRecorders,ppRecorder,pcFetched)( (This)->lpVtbl -> Next(This,cRecorders,ppRecorder,pcFetched) )
#define IEnumDiscRecorders_Skip(This,cRecorders)( (This)->lpVtbl -> Skip(This,cRecorders) )
#define IEnumDiscRecorders_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define IEnumDiscRecorders_Clone(This,ppEnum)( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
#endif
#ifndef __IEnumDiscMasterFormats_INTERFACE_DEFINED__
#define __IEnumDiscMasterFormats_INTERFACE_DEFINED__
extern const IID IID_IEnumDiscMasterFormats;
typedef struct IEnumDiscMasterFormatsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumDiscMasterFormats * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumDiscMasterFormats * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumDiscMasterFormats * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumDiscMasterFormats * This, ULONG cFormats, LPIID lpiidFormatID, ULONG * pcFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumDiscMasterFormats * This, ULONG cFormats);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumDiscMasterFormats * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumDiscMasterFormats * This, IEnumDiscMasterFormats ** ppEnum);
	END_INTERFACE
}  IEnumDiscMasterFormatsVtbl;
interface IEnumDiscMasterFormats
{
	CONST_VTBL struct IEnumDiscMasterFormatsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumDiscMasterFormats_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumDiscMasterFormats_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IEnumDiscMasterFormats_Release(This)( (This)->lpVtbl -> Release(This) )
#define IEnumDiscMasterFormats_Next(This,cFormats,lpiidFormatID,pcFetched)( (This)->lpVtbl -> Next(This,cFormats,lpiidFormatID,pcFetched) )
#define IEnumDiscMasterFormats_Skip(This,cFormats)( (This)->lpVtbl -> Skip(This,cFormats) )
#define IEnumDiscMasterFormats_Reset(This)( (This)->lpVtbl -> Reset(This) )
#define IEnumDiscMasterFormats_Clone(This,ppEnum)( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
#endif
#ifndef __IRedbookDiscMaster_INTERFACE_DEFINED__
#define __IRedbookDiscMaster_INTERFACE_DEFINED__
extern const IID IID_IRedbookDiscMaster;
typedef struct IRedbookDiscMasterVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRedbookDiscMaster * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRedbookDiscMaster * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRedbookDiscMaster * This);
	HRESULT(STDMETHODCALLTYPE * GetTotalAudioTracks) (IRedbookDiscMaster * This, long *pnTracks);
	HRESULT(STDMETHODCALLTYPE * GetTotalAudioBlocks) (IRedbookDiscMaster * This, long *pnBlocks);
	HRESULT(STDMETHODCALLTYPE * GetUsedAudioBlocks) (IRedbookDiscMaster * This, long *pnBlocks);
	HRESULT(STDMETHODCALLTYPE * GetAvailableAudioTrackBlocks) (IRedbookDiscMaster * This, long *pnBlocks);
	HRESULT(STDMETHODCALLTYPE * GetAudioBlockSize) (IRedbookDiscMaster * This, long *pnBlockBytes);
	HRESULT(STDMETHODCALLTYPE * CreateAudioTrack) (IRedbookDiscMaster * This, long nBlocks);
	HRESULT(STDMETHODCALLTYPE * AddAudioTrackBlocks) (IRedbookDiscMaster * This, byte * pby, long cb);
	HRESULT(STDMETHODCALLTYPE * CloseAudioTrack) (IRedbookDiscMaster * This);
	END_INTERFACE
}  IRedbookDiscMasterVtbl;
interface IRedbookDiscMaster
{
	CONST_VTBL struct IRedbookDiscMasterVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRedbookDiscMaster_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRedbookDiscMaster_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IRedbookDiscMaster_Release(This)( (This)->lpVtbl -> Release(This) )
#define IRedbookDiscMaster_GetTotalAudioTracks(This,pnTracks)( (This)->lpVtbl -> GetTotalAudioTracks(This,pnTracks) )
#define IRedbookDiscMaster_GetTotalAudioBlocks(This,pnBlocks)( (This)->lpVtbl -> GetTotalAudioBlocks(This,pnBlocks) )
#define IRedbookDiscMaster_GetUsedAudioBlocks(This,pnBlocks)( (This)->lpVtbl -> GetUsedAudioBlocks(This,pnBlocks) )
#define IRedbookDiscMaster_GetAvailableAudioTrackBlocks(This,pnBlocks)( (This)->lpVtbl -> GetAvailableAudioTrackBlocks(This,pnBlocks) )
#define IRedbookDiscMaster_GetAudioBlockSize(This,pnBlockBytes)( (This)->lpVtbl -> GetAudioBlockSize(This,pnBlockBytes) )
#define IRedbookDiscMaster_CreateAudioTrack(This,nBlocks)( (This)->lpVtbl -> CreateAudioTrack(This,nBlocks) )
#define IRedbookDiscMaster_AddAudioTrackBlocks(This,pby,cb)( (This)->lpVtbl -> AddAudioTrackBlocks(This,pby,cb) )
#define IRedbookDiscMaster_CloseAudioTrack(This)( (This)->lpVtbl -> CloseAudioTrack(This) )
#endif
#endif
#ifndef __IJolietDiscMaster_INTERFACE_DEFINED__
#define __IJolietDiscMaster_INTERFACE_DEFINED__
extern const IID IID_IJolietDiscMaster;
typedef struct IJolietDiscMasterVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IJolietDiscMaster * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IJolietDiscMaster * This);
	ULONG(STDMETHODCALLTYPE * Release) (IJolietDiscMaster * This);
	HRESULT(STDMETHODCALLTYPE * GetTotalDataBlocks) (IJolietDiscMaster * This, long *pnBlocks);
	HRESULT(STDMETHODCALLTYPE * GetUsedDataBlocks) (IJolietDiscMaster * This, long *pnBlocks);
	HRESULT(STDMETHODCALLTYPE * GetDataBlockSize) (IJolietDiscMaster * This, long *pnBlockBytes);
	HRESULT(STDMETHODCALLTYPE * AddData) (IJolietDiscMaster * This, IStorage * pStorage, long lFileOverwrite);
	HRESULT(STDMETHODCALLTYPE * GetJolietProperties) (IJolietDiscMaster * This, IPropertyStorage ** ppPropStg);
	HRESULT(STDMETHODCALLTYPE * SetJolietProperties) (IJolietDiscMaster * This, IPropertyStorage * pPropStg);
	END_INTERFACE
}  IJolietDiscMasterVtbl;
interface IJolietDiscMaster
{
	CONST_VTBL struct IJolietDiscMasterVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IJolietDiscMaster_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IJolietDiscMaster_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IJolietDiscMaster_Release(This)( (This)->lpVtbl -> Release(This) )
#define IJolietDiscMaster_GetTotalDataBlocks(This,pnBlocks)( (This)->lpVtbl -> GetTotalDataBlocks(This,pnBlocks) )
#define IJolietDiscMaster_GetUsedDataBlocks(This,pnBlocks)( (This)->lpVtbl -> GetUsedDataBlocks(This,pnBlocks) )
#define IJolietDiscMaster_GetDataBlockSize(This,pnBlockBytes)( (This)->lpVtbl -> GetDataBlockSize(This,pnBlockBytes) )
#define IJolietDiscMaster_AddData(This,pStorage,lFileOverwrite)( (This)->lpVtbl -> AddData(This,pStorage,lFileOverwrite) )
#define IJolietDiscMaster_GetJolietProperties(This,ppPropStg)( (This)->lpVtbl -> GetJolietProperties(This,ppPropStg) )
#define IJolietDiscMaster_SetJolietProperties(This,pPropStg)( (This)->lpVtbl -> SetJolietProperties(This,pPropStg) )
#endif
#endif
#ifndef __IDiscMasterProgressEvents_INTERFACE_DEFINED__
#define __IDiscMasterProgressEvents_INTERFACE_DEFINED__
extern const IID IID_IDiscMasterProgressEvents;
typedef struct IDiscMasterProgressEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDiscMasterProgressEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDiscMasterProgressEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDiscMasterProgressEvents * This);
	HRESULT(STDMETHODCALLTYPE * QueryCancel) (IDiscMasterProgressEvents * This, boolean * pbCancel);
	HRESULT(STDMETHODCALLTYPE * NotifyPnPActivity) (IDiscMasterProgressEvents * This);
	HRESULT(STDMETHODCALLTYPE * NotifyAddProgress) (IDiscMasterProgressEvents * This, long nCompletedSteps, long nTotalSteps);
	HRESULT(STDMETHODCALLTYPE * NotifyBlockProgress) (IDiscMasterProgressEvents * This, long nCompleted, long nTotal);
	HRESULT(STDMETHODCALLTYPE * NotifyTrackProgress) (IDiscMasterProgressEvents * This, long nCurrentTrack, long nTotalTracks);
	HRESULT(STDMETHODCALLTYPE * NotifyPreparingBurn) (IDiscMasterProgressEvents * This, long nEstimatedSeconds);
	HRESULT(STDMETHODCALLTYPE * NotifyClosingDisc) (IDiscMasterProgressEvents * This, long nEstimatedSeconds);
	HRESULT(STDMETHODCALLTYPE * NotifyBurnComplete) (IDiscMasterProgressEvents * This, HRESULT status);
	HRESULT(STDMETHODCALLTYPE * NotifyEraseComplete) (IDiscMasterProgressEvents * This, HRESULT status);
	END_INTERFACE
}  IDiscMasterProgressEventsVtbl;
interface IDiscMasterProgressEvents
{
	CONST_VTBL struct IDiscMasterProgressEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDiscMasterProgressEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDiscMasterProgressEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDiscMasterProgressEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDiscMasterProgressEvents_QueryCancel(This,pbCancel)( (This)->lpVtbl -> QueryCancel(This,pbCancel) )
#define IDiscMasterProgressEvents_NotifyPnPActivity(This)( (This)->lpVtbl -> NotifyPnPActivity(This) )
#define IDiscMasterProgressEvents_NotifyAddProgress(This,nCompletedSteps,nTotalSteps)( (This)->lpVtbl -> NotifyAddProgress(This,nCompletedSteps,nTotalSteps) )
#define IDiscMasterProgressEvents_NotifyBlockProgress(This,nCompleted,nTotal)( (This)->lpVtbl -> NotifyBlockProgress(This,nCompleted,nTotal) )
#define IDiscMasterProgressEvents_NotifyTrackProgress(This,nCurrentTrack,nTotalTracks)( (This)->lpVtbl -> NotifyTrackProgress(This,nCurrentTrack,nTotalTracks) )
#define IDiscMasterProgressEvents_NotifyPreparingBurn(This,nEstimatedSeconds)( (This)->lpVtbl -> NotifyPreparingBurn(This,nEstimatedSeconds) )
#define IDiscMasterProgressEvents_NotifyClosingDisc(This,nEstimatedSeconds)( (This)->lpVtbl -> NotifyClosingDisc(This,nEstimatedSeconds) )
#define IDiscMasterProgressEvents_NotifyBurnComplete(This,status)( (This)->lpVtbl -> NotifyBurnComplete(This,status) )
#define IDiscMasterProgressEvents_NotifyEraseComplete(This,status)( (This)->lpVtbl -> NotifyEraseComplete(This,status) )
#endif
#endif
#ifndef __IDiscMaster_INTERFACE_DEFINED__
#define __IDiscMaster_INTERFACE_DEFINED__
extern const IID IID_IDiscMaster;
typedef struct IDiscMasterVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDiscMaster * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDiscMaster * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDiscMaster * This);
	HRESULT(STDMETHODCALLTYPE * Open) (IDiscMaster * This);
	HRESULT(STDMETHODCALLTYPE * EnumDiscMasterFormats) (IDiscMaster * This, IEnumDiscMasterFormats ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * GetActiveDiscMasterFormat) (IDiscMaster * This, LPIID lpiid);
	HRESULT(STDMETHODCALLTYPE * SetActiveDiscMasterFormat) (IDiscMaster * This, REFIID riid, void **ppUnk);
	HRESULT(STDMETHODCALLTYPE * EnumDiscRecorders) (IDiscMaster * This, IEnumDiscRecorders ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * GetActiveDiscRecorder) (IDiscMaster * This, IDiscRecorder ** ppRecorder);
	HRESULT(STDMETHODCALLTYPE * SetActiveDiscRecorder) (IDiscMaster * This, IDiscRecorder * pRecorder);
	HRESULT(STDMETHODCALLTYPE * ClearFormatContent) (IDiscMaster * This);
	HRESULT(STDMETHODCALLTYPE * ProgressAdvise) (IDiscMaster * This, IDiscMasterProgressEvents * pEvents, UINT_PTR * pvCookie);
	HRESULT(STDMETHODCALLTYPE * ProgressUnadvise) (IDiscMaster * This, UINT_PTR vCookie);
	HRESULT(STDMETHODCALLTYPE * RecordDisc) (IDiscMaster * This, boolean bSimulate, boolean bEjectAfterBurn);
	HRESULT(STDMETHODCALLTYPE * Close) (IDiscMaster * This);
	END_INTERFACE
}  IDiscMasterVtbl;
interface IDiscMaster
{
	CONST_VTBL struct IDiscMasterVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDiscMaster_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDiscMaster_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDiscMaster_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDiscMaster_Open(This)( (This)->lpVtbl -> Open(This) )
#define IDiscMaster_EnumDiscMasterFormats(This,ppEnum)( (This)->lpVtbl -> EnumDiscMasterFormats(This,ppEnum) )
#define IDiscMaster_GetActiveDiscMasterFormat(This,lpiid)( (This)->lpVtbl -> GetActiveDiscMasterFormat(This,lpiid) )
#define IDiscMaster_SetActiveDiscMasterFormat(This,riid,ppUnk)( (This)->lpVtbl -> SetActiveDiscMasterFormat(This,riid,ppUnk) )
#define IDiscMaster_EnumDiscRecorders(This,ppEnum)( (This)->lpVtbl -> EnumDiscRecorders(This,ppEnum) )
#define IDiscMaster_GetActiveDiscRecorder(This,ppRecorder)( (This)->lpVtbl -> GetActiveDiscRecorder(This,ppRecorder) )
#define IDiscMaster_SetActiveDiscRecorder(This,pRecorder)( (This)->lpVtbl -> SetActiveDiscRecorder(This,pRecorder) )
#define IDiscMaster_ClearFormatContent(This)( (This)->lpVtbl -> ClearFormatContent(This) )
#define IDiscMaster_ProgressAdvise(This,pEvents,pvCookie)( (This)->lpVtbl -> ProgressAdvise(This,pEvents,pvCookie) )
#define IDiscMaster_ProgressUnadvise(This,vCookie)( (This)->lpVtbl -> ProgressUnadvise(This,vCookie) )
#define IDiscMaster_RecordDisc(This,bSimulate,bEjectAfterBurn)( (This)->lpVtbl -> RecordDisc(This,bSimulate,bEjectAfterBurn) )
#define IDiscMaster_Close(This)( (This)->lpVtbl -> Close(This) )
#endif
#endif
#ifndef __IMAPILib_LIBRARY_DEFINED__
#define __IMAPILib_LIBRARY_DEFINED__
extern const IID LIBID_IMAPILib;
extern const CLSID CLSID_MSDiscRecorderObj;
extern const CLSID CLSID_MSDiscMasterObj;
extern const CLSID CLSID_MSEnumDiscRecordersObj;
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
unsigned long __RPC_USER BSTR_UserSize64(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal64(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree64(unsigned long *, BSTR *);
#endif
