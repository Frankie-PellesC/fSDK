/*+@@file@@----------------------------------------------------------------*//*!
 \file		RTSCOM.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Sep 16 20:50:10 2016
 \date		Modified on Fri Sep 16 20:50:10 2016
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
#ifndef __rtscom_h__
#define __rtscom_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IRealTimeStylus_FWD_DEFINED__
#define __IRealTimeStylus_FWD_DEFINED__
typedef interface IRealTimeStylus IRealTimeStylus;
#endif
#ifndef __IRealTimeStylus2_FWD_DEFINED__
#define __IRealTimeStylus2_FWD_DEFINED__
typedef interface IRealTimeStylus2 IRealTimeStylus2;
#endif
#ifndef __IRealTimeStylus3_FWD_DEFINED__
#define __IRealTimeStylus3_FWD_DEFINED__
typedef interface IRealTimeStylus3 IRealTimeStylus3;
#endif
#ifndef __IRealTimeStylusSynchronization_FWD_DEFINED__
#define __IRealTimeStylusSynchronization_FWD_DEFINED__
typedef interface IRealTimeStylusSynchronization IRealTimeStylusSynchronization;
#endif
#ifndef __IStrokeBuilder_FWD_DEFINED__
#define __IStrokeBuilder_FWD_DEFINED__
typedef interface IStrokeBuilder IStrokeBuilder;
#endif
#ifndef __IStylusPlugin_FWD_DEFINED__
#define __IStylusPlugin_FWD_DEFINED__
typedef interface IStylusPlugin IStylusPlugin;
#endif
#ifndef __IStylusSyncPlugin_FWD_DEFINED__
#define __IStylusSyncPlugin_FWD_DEFINED__
typedef interface IStylusSyncPlugin IStylusSyncPlugin;
#endif
#ifndef __IStylusAsyncPlugin_FWD_DEFINED__
#define __IStylusAsyncPlugin_FWD_DEFINED__
typedef interface IStylusAsyncPlugin IStylusAsyncPlugin;
#endif
#ifndef __IDynamicRenderer_FWD_DEFINED__
#define __IDynamicRenderer_FWD_DEFINED__
typedef interface IDynamicRenderer IDynamicRenderer;
#endif
#ifndef __IGestureRecognizer_FWD_DEFINED__
#define __IGestureRecognizer_FWD_DEFINED__
typedef interface IGestureRecognizer IGestureRecognizer;
#endif
#ifndef __RealTimeStylus_FWD_DEFINED__
#define __RealTimeStylus_FWD_DEFINED__
typedef struct RealTimeStylus RealTimeStylus;
#endif
#ifndef __DynamicRenderer_FWD_DEFINED__
#define __DynamicRenderer_FWD_DEFINED__
typedef struct DynamicRenderer DynamicRenderer;
#endif
#ifndef __GestureRecognizer_FWD_DEFINED__
#define __GestureRecognizer_FWD_DEFINED__
typedef struct GestureRecognizer GestureRecognizer;
#endif
#ifndef __StrokeBuilder_FWD_DEFINED__
#define __StrokeBuilder_FWD_DEFINED__
typedef struct StrokeBuilder StrokeBuilder;
#endif
#include <oaidl.h>
#include <ocidl.h>
#include <tpcshrd.h>
#include <msinkaut.h>
#include <manipulations.h>
typedef enum RealTimeStylusDataInterest
{
	RTSDI_AllData = 0xffffffff,
	RTSDI_None = 0,
	RTSDI_Error = 0x1,
	RTSDI_RealTimeStylusEnabled = 0x2,
	RTSDI_RealTimeStylusDisabled = 0x4,
	RTSDI_StylusNew = 0x8,
	RTSDI_StylusInRange = 0x10,
	RTSDI_InAirPackets = 0x20,
	RTSDI_StylusOutOfRange = 0x40,
	RTSDI_StylusDown = 0x80,
	RTSDI_Packets = 0x100,
	RTSDI_StylusUp = 0x200,
	RTSDI_StylusButtonUp = 0x400,
	RTSDI_StylusButtonDown = 0x800,
	RTSDI_SystemEvents = 0x1000,
	RTSDI_TabletAdded = 0x2000,
	RTSDI_TabletRemoved = 0x4000,
	RTSDI_CustomStylusDataAdded = 0x8000,
	RTSDI_UpdateMapping = 0x10000,
	RTSDI_DefaultEvents = ((((((RTSDI_RealTimeStylusEnabled | RTSDI_RealTimeStylusDisabled) | RTSDI_StylusDown) | RTSDI_Packets) | RTSDI_StylusUp) | RTSDI_SystemEvents) | RTSDI_CustomStylusDataAdded)
} RealTimeStylusDataInterest;
typedef CURSOR_ID STYLUS_ID;
typedef struct StylusInfo
{
	TABLET_CONTEXT_ID tcid;
	STYLUS_ID cid;
	BOOL bIsInvertedCursor;
} StylusInfo;
typedef enum StylusQueue
{
	SyncStylusQueue = 0x1,
	AsyncStylusQueueImmediate = 0x2,
	AsyncStylusQueue = 0x3
} StylusQueue;
typedef enum RealTimeStylusLockType
{
	RTSLT_ObjLock = 0x1,
	RTSLT_SyncEventLock = 0x2,
	RTSLT_AsyncEventLock = 0x4,
	RTSLT_ExcludeCallback = 0x8,
	RTSLT_SyncObjLock = 0xb,
	RTSLT_AsyncObjLock = 0xd
} RealTimeStylusLockType;
typedef struct GESTURE_DATA
{
	int gestureId;
	int recoConfidence;
	int strokeCount;
} GESTURE_DATA;
typedef struct DYNAMIC_RENDERER_CACHED_DATA
{
	LONG strokeId;
	IDynamicRenderer *dynamicRenderer;
} DYNAMIC_RENDERER_CACHED_DATA;
extern RPC_IF_HANDLE __MIDL_itf_rtscom_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_rtscom_0000_0000_v0_0_s_ifspec;
#ifndef __TPCRTSLib_LIBRARY_DEFINED__
#define __TPCRTSLib_LIBRARY_DEFINED__
extern const IID LIBID_TPCRTSLib;
#ifndef __IRealTimeStylus_INTERFACE_DEFINED__
#define __IRealTimeStylus_INTERFACE_DEFINED__
extern const IID IID_IRealTimeStylus;
typedef struct IRealTimeStylusVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRealTimeStylus * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRealTimeStylus * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRealTimeStylus * This);
	HRESULT(STDMETHODCALLTYPE * get_Enabled) (IRealTimeStylus * This, BOOL * pfEnable);
	HRESULT(STDMETHODCALLTYPE * put_Enabled) (IRealTimeStylus * This, BOOL fEnable);
	HRESULT(STDMETHODCALLTYPE * get_HWND) (IRealTimeStylus * This, HANDLE_PTR * phwnd);
	HRESULT(STDMETHODCALLTYPE * put_HWND) (IRealTimeStylus * This, HANDLE_PTR hwnd);
	HRESULT(STDMETHODCALLTYPE * get_WindowInputRectangle) (IRealTimeStylus * This, RECT * prcWndInputRect);
	HRESULT(STDMETHODCALLTYPE * put_WindowInputRectangle) (IRealTimeStylus * This, const RECT * prcWndInputRect);
	HRESULT(STDMETHODCALLTYPE * AddStylusSyncPlugin) (IRealTimeStylus * This, ULONG iIndex, IStylusSyncPlugin * piPlugin);
	HRESULT(STDMETHODCALLTYPE * RemoveStylusSyncPlugin) (IRealTimeStylus * This, ULONG iIndex, IStylusSyncPlugin ** ppiPlugin);
	HRESULT(STDMETHODCALLTYPE * RemoveAllStylusSyncPlugins) (IRealTimeStylus * This);
	HRESULT(STDMETHODCALLTYPE * GetStylusSyncPlugin) (IRealTimeStylus * This, ULONG iIndex, IStylusSyncPlugin ** ppiPlugin);
	HRESULT(STDMETHODCALLTYPE * GetStylusSyncPluginCount) (IRealTimeStylus * This, ULONG * pcPlugins);
	HRESULT(STDMETHODCALLTYPE * AddStylusAsyncPlugin) (IRealTimeStylus * This, ULONG iIndex, IStylusAsyncPlugin * piPlugin);
	HRESULT(STDMETHODCALLTYPE * RemoveStylusAsyncPlugin) (IRealTimeStylus * This, ULONG iIndex, IStylusAsyncPlugin ** ppiPlugin);
	HRESULT(STDMETHODCALLTYPE * RemoveAllStylusAsyncPlugins) (IRealTimeStylus * This);
	HRESULT(STDMETHODCALLTYPE * GetStylusAsyncPlugin) (IRealTimeStylus * This, ULONG iIndex, IStylusAsyncPlugin ** ppiPlugin);
	HRESULT(STDMETHODCALLTYPE * GetStylusAsyncPluginCount) (IRealTimeStylus * This, ULONG * pcPlugins);
	HRESULT(STDMETHODCALLTYPE * get_ChildRealTimeStylusPlugin) (IRealTimeStylus * This, IRealTimeStylus ** ppiRTS);
	HRESULT(STDMETHODCALLTYPE * putref_ChildRealTimeStylusPlugin) (IRealTimeStylus * This, IRealTimeStylus * piRTS);
	HRESULT(STDMETHODCALLTYPE * AddCustomStylusDataToQueue) (IRealTimeStylus * This, StylusQueue sq, const GUID * pGuidId, ULONG cbData, BYTE * pbData);
	HRESULT(STDMETHODCALLTYPE * ClearStylusQueues) (IRealTimeStylus * This);
	HRESULT(STDMETHODCALLTYPE * SetAllTabletsMode) (IRealTimeStylus * This, BOOL fUseMouseForInput);
	HRESULT(STDMETHODCALLTYPE * SetSingleTabletMode) (IRealTimeStylus * This, IInkTablet * piTablet);
	HRESULT(STDMETHODCALLTYPE * GetTablet) (IRealTimeStylus * This, IInkTablet ** ppiSingleTablet);
	HRESULT(STDMETHODCALLTYPE * GetTabletContextIdFromTablet) (IRealTimeStylus * This, IInkTablet * piTablet, TABLET_CONTEXT_ID * ptcid);
	HRESULT(STDMETHODCALLTYPE * GetTabletFromTabletContextId) (IRealTimeStylus * This, TABLET_CONTEXT_ID tcid, IInkTablet ** ppiTablet);
	HRESULT(STDMETHODCALLTYPE * GetAllTabletContextIds) (IRealTimeStylus * This, ULONG * pcTcidCount, TABLET_CONTEXT_ID ** ppTcids);
	HRESULT(STDMETHODCALLTYPE * GetStyluses) (IRealTimeStylus * This, IInkCursors ** ppiInkCursors);
	HRESULT(STDMETHODCALLTYPE * GetStylusForId) (IRealTimeStylus * This, STYLUS_ID sid, IInkCursor ** ppiInkCursor);
	HRESULT(STDMETHODCALLTYPE * SetDesiredPacketDescription) (IRealTimeStylus * This, ULONG cProperties, const GUID * pPropertyGuids);
	HRESULT(STDMETHODCALLTYPE * GetDesiredPacketDescription) (IRealTimeStylus * This, ULONG * pcProperties, GUID ** ppPropertyGuids);
	HRESULT(STDMETHODCALLTYPE * GetPacketDescriptionData) (IRealTimeStylus * This, TABLET_CONTEXT_ID tcid, FLOAT * pfInkToDeviceScaleX, FLOAT * pfInkToDeviceScaleY, ULONG * pcPacketProperties, PACKET_PROPERTY ** ppPacketProperties);
	END_INTERFACE
}  IRealTimeStylusVtbl;
interface IRealTimeStylus
{
	CONST_VTBL struct IRealTimeStylusVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRealTimeStylus_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRealTimeStylus_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRealTimeStylus_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRealTimeStylus_get_Enabled(This,pfEnable) ( (This)->lpVtbl -> get_Enabled(This,pfEnable) )
#define IRealTimeStylus_put_Enabled(This,fEnable) ( (This)->lpVtbl -> put_Enabled(This,fEnable) )
#define IRealTimeStylus_get_HWND(This,phwnd) ( (This)->lpVtbl -> get_HWND(This,phwnd) )
#define IRealTimeStylus_put_HWND(This,hwnd) ( (This)->lpVtbl -> put_HWND(This,hwnd) )
#define IRealTimeStylus_get_WindowInputRectangle(This,prcWndInputRect) ( (This)->lpVtbl -> get_WindowInputRectangle(This,prcWndInputRect) )
#define IRealTimeStylus_put_WindowInputRectangle(This,prcWndInputRect) ( (This)->lpVtbl -> put_WindowInputRectangle(This,prcWndInputRect) )
#define IRealTimeStylus_AddStylusSyncPlugin(This,iIndex,piPlugin) ( (This)->lpVtbl -> AddStylusSyncPlugin(This,iIndex,piPlugin) )
#define IRealTimeStylus_RemoveStylusSyncPlugin(This,iIndex,ppiPlugin) ( (This)->lpVtbl -> RemoveStylusSyncPlugin(This,iIndex,ppiPlugin) )
#define IRealTimeStylus_RemoveAllStylusSyncPlugins(This) ( (This)->lpVtbl -> RemoveAllStylusSyncPlugins(This) )
#define IRealTimeStylus_GetStylusSyncPlugin(This,iIndex,ppiPlugin) ( (This)->lpVtbl -> GetStylusSyncPlugin(This,iIndex,ppiPlugin) )
#define IRealTimeStylus_GetStylusSyncPluginCount(This,pcPlugins) ( (This)->lpVtbl -> GetStylusSyncPluginCount(This,pcPlugins) )
#define IRealTimeStylus_AddStylusAsyncPlugin(This,iIndex,piPlugin) ( (This)->lpVtbl -> AddStylusAsyncPlugin(This,iIndex,piPlugin) )
#define IRealTimeStylus_RemoveStylusAsyncPlugin(This,iIndex,ppiPlugin) ( (This)->lpVtbl -> RemoveStylusAsyncPlugin(This,iIndex,ppiPlugin) )
#define IRealTimeStylus_RemoveAllStylusAsyncPlugins(This) ( (This)->lpVtbl -> RemoveAllStylusAsyncPlugins(This) )
#define IRealTimeStylus_GetStylusAsyncPlugin(This,iIndex,ppiPlugin) ( (This)->lpVtbl -> GetStylusAsyncPlugin(This,iIndex,ppiPlugin) )
#define IRealTimeStylus_GetStylusAsyncPluginCount(This,pcPlugins) ( (This)->lpVtbl -> GetStylusAsyncPluginCount(This,pcPlugins) )
#define IRealTimeStylus_get_ChildRealTimeStylusPlugin(This,ppiRTS) ( (This)->lpVtbl -> get_ChildRealTimeStylusPlugin(This,ppiRTS) )
#define IRealTimeStylus_putref_ChildRealTimeStylusPlugin(This,piRTS) ( (This)->lpVtbl -> putref_ChildRealTimeStylusPlugin(This,piRTS) )
#define IRealTimeStylus_AddCustomStylusDataToQueue(This,sq,pGuidId,cbData,pbData) ( (This)->lpVtbl -> AddCustomStylusDataToQueue(This,sq,pGuidId,cbData,pbData) )
#define IRealTimeStylus_ClearStylusQueues(This) ( (This)->lpVtbl -> ClearStylusQueues(This) )
#define IRealTimeStylus_SetAllTabletsMode(This,fUseMouseForInput) ( (This)->lpVtbl -> SetAllTabletsMode(This,fUseMouseForInput) )
#define IRealTimeStylus_SetSingleTabletMode(This,piTablet) ( (This)->lpVtbl -> SetSingleTabletMode(This,piTablet) )
#define IRealTimeStylus_GetTablet(This,ppiSingleTablet) ( (This)->lpVtbl -> GetTablet(This,ppiSingleTablet) )
#define IRealTimeStylus_GetTabletContextIdFromTablet(This,piTablet,ptcid) ( (This)->lpVtbl -> GetTabletContextIdFromTablet(This,piTablet,ptcid) )
#define IRealTimeStylus_GetTabletFromTabletContextId(This,tcid,ppiTablet) ( (This)->lpVtbl -> GetTabletFromTabletContextId(This,tcid,ppiTablet) )
#define IRealTimeStylus_GetAllTabletContextIds(This,pcTcidCount,ppTcids) ( (This)->lpVtbl -> GetAllTabletContextIds(This,pcTcidCount,ppTcids) )
#define IRealTimeStylus_GetStyluses(This,ppiInkCursors) ( (This)->lpVtbl -> GetStyluses(This,ppiInkCursors) )
#define IRealTimeStylus_GetStylusForId(This,sid,ppiInkCursor) ( (This)->lpVtbl -> GetStylusForId(This,sid,ppiInkCursor) )
#define IRealTimeStylus_SetDesiredPacketDescription(This,cProperties,pPropertyGuids) ( (This)->lpVtbl -> SetDesiredPacketDescription(This,cProperties,pPropertyGuids) )
#define IRealTimeStylus_GetDesiredPacketDescription(This,pcProperties,ppPropertyGuids) ( (This)->lpVtbl -> GetDesiredPacketDescription(This,pcProperties,ppPropertyGuids) )
#define IRealTimeStylus_GetPacketDescriptionData(This,tcid,pfInkToDeviceScaleX,pfInkToDeviceScaleY,pcPacketProperties,ppPacketProperties) ( (This)->lpVtbl -> GetPacketDescriptionData(This,tcid,pfInkToDeviceScaleX,pfInkToDeviceScaleY,pcPacketProperties,ppPacketProperties) )
#endif
#endif
#ifndef __IRealTimeStylus2_INTERFACE_DEFINED__
#define __IRealTimeStylus2_INTERFACE_DEFINED__
extern const IID IID_IRealTimeStylus2;
typedef struct IRealTimeStylus2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRealTimeStylus2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRealTimeStylus2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRealTimeStylus2 * This);
	HRESULT(STDMETHODCALLTYPE * get_FlicksEnabled) (IRealTimeStylus2 * This, BOOL * pfEnable);
	HRESULT(STDMETHODCALLTYPE * put_FlicksEnabled) (IRealTimeStylus2 * This, BOOL fEnable);
	END_INTERFACE
}  IRealTimeStylus2Vtbl;
interface IRealTimeStylus2
{
	CONST_VTBL struct IRealTimeStylus2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRealTimeStylus2_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRealTimeStylus2_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRealTimeStylus2_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRealTimeStylus2_get_FlicksEnabled(This,pfEnable) ( (This)->lpVtbl -> get_FlicksEnabled(This,pfEnable) )
#define IRealTimeStylus2_put_FlicksEnabled(This,fEnable) ( (This)->lpVtbl -> put_FlicksEnabled(This,fEnable) )
#endif
#endif
#ifndef __IRealTimeStylus3_INTERFACE_DEFINED__
#define __IRealTimeStylus3_INTERFACE_DEFINED__
extern const IID IID_IRealTimeStylus3;
typedef struct IRealTimeStylus3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRealTimeStylus3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRealTimeStylus3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRealTimeStylus3 * This);
	HRESULT(STDMETHODCALLTYPE * get_MultiTouchEnabled) (IRealTimeStylus3 * This, BOOL * pfEnable);
	HRESULT(STDMETHODCALLTYPE * put_MultiTouchEnabled) (IRealTimeStylus3 * This, BOOL fEnable);
	END_INTERFACE
}  IRealTimeStylus3Vtbl;
interface IRealTimeStylus3
{
	CONST_VTBL struct IRealTimeStylus3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRealTimeStylus3_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRealTimeStylus3_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRealTimeStylus3_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRealTimeStylus3_get_MultiTouchEnabled(This,pfEnable) ( (This)->lpVtbl -> get_MultiTouchEnabled(This,pfEnable) )
#define IRealTimeStylus3_put_MultiTouchEnabled(This,fEnable) ( (This)->lpVtbl -> put_MultiTouchEnabled(This,fEnable) )
#endif
#endif
#ifndef __IRealTimeStylusSynchronization_INTERFACE_DEFINED__
#define __IRealTimeStylusSynchronization_INTERFACE_DEFINED__
extern const IID IID_IRealTimeStylusSynchronization;
typedef struct IRealTimeStylusSynchronizationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IRealTimeStylusSynchronization * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IRealTimeStylusSynchronization * This);
	ULONG(STDMETHODCALLTYPE * Release) (IRealTimeStylusSynchronization * This);
	HRESULT(STDMETHODCALLTYPE * AcquireLock) (IRealTimeStylusSynchronization * This, RealTimeStylusLockType lock);
	HRESULT(STDMETHODCALLTYPE * ReleaseLock) (IRealTimeStylusSynchronization * This, RealTimeStylusLockType lock);
	END_INTERFACE
}  IRealTimeStylusSynchronizationVtbl;
interface IRealTimeStylusSynchronization
{
	CONST_VTBL struct IRealTimeStylusSynchronizationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRealTimeStylusSynchronization_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRealTimeStylusSynchronization_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IRealTimeStylusSynchronization_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IRealTimeStylusSynchronization_AcquireLock(This,lock) ( (This)->lpVtbl -> AcquireLock(This,lock) )
#define IRealTimeStylusSynchronization_ReleaseLock(This,lock) ( (This)->lpVtbl -> ReleaseLock(This,lock) )
#endif
#endif
#ifndef __IStrokeBuilder_INTERFACE_DEFINED__
#define __IStrokeBuilder_INTERFACE_DEFINED__
extern const IID IID_IStrokeBuilder;
typedef struct IStrokeBuilderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IStrokeBuilder * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IStrokeBuilder * This);
	ULONG(STDMETHODCALLTYPE * Release) (IStrokeBuilder * This);
	HRESULT(STDMETHODCALLTYPE * CreateStroke) (IStrokeBuilder * This, ULONG cPktBuffLength, const LONG * pPackets, ULONG cPacketProperties, const PACKET_PROPERTY * pPacketProperties, FLOAT fInkToDeviceScaleX, FLOAT fInkToDeviceScaleY, IInkStrokeDisp ** ppIInkStroke);
	HRESULT(STDMETHODCALLTYPE * BeginStroke) (IStrokeBuilder * This, TABLET_CONTEXT_ID tcid, STYLUS_ID sid, const LONG * pPacket, ULONG cPacketProperties, PACKET_PROPERTY * pPacketProperties, FLOAT fInkToDeviceScaleX, FLOAT fInkToDeviceScaleY, IInkStrokeDisp ** ppIInkStroke);
	HRESULT(STDMETHODCALLTYPE * AppendPackets) (IStrokeBuilder * This, TABLET_CONTEXT_ID tcid, STYLUS_ID sid, ULONG cPktBuffLength, const LONG * pPackets);
	HRESULT(STDMETHODCALLTYPE * EndStroke) (IStrokeBuilder * This, TABLET_CONTEXT_ID tcid, STYLUS_ID sid, IInkStrokeDisp ** ppIInkStroke, RECT * pDirtyRect);
	HRESULT(STDMETHODCALLTYPE * get_Ink) (IStrokeBuilder * This, IInkDisp ** ppiInkObj);
	HRESULT(STDMETHODCALLTYPE * putref_Ink) (IStrokeBuilder * This, IInkDisp * piInkObj);
	END_INTERFACE
}  IStrokeBuilderVtbl;
interface IStrokeBuilder
{
	CONST_VTBL struct IStrokeBuilderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IStrokeBuilder_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IStrokeBuilder_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IStrokeBuilder_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IStrokeBuilder_CreateStroke(This,cPktBuffLength,pPackets,cPacketProperties,pPacketProperties,fInkToDeviceScaleX,fInkToDeviceScaleY,ppIInkStroke) ( (This)->lpVtbl -> CreateStroke(This,cPktBuffLength,pPackets,cPacketProperties,pPacketProperties,fInkToDeviceScaleX,fInkToDeviceScaleY,ppIInkStroke) )
#define IStrokeBuilder_BeginStroke(This,tcid,sid,pPacket,cPacketProperties,pPacketProperties,fInkToDeviceScaleX,fInkToDeviceScaleY,ppIInkStroke) ( (This)->lpVtbl -> BeginStroke(This,tcid,sid,pPacket,cPacketProperties,pPacketProperties,fInkToDeviceScaleX,fInkToDeviceScaleY,ppIInkStroke) )
#define IStrokeBuilder_AppendPackets(This,tcid,sid,cPktBuffLength,pPackets) ( (This)->lpVtbl -> AppendPackets(This,tcid,sid,cPktBuffLength,pPackets) )
#define IStrokeBuilder_EndStroke(This,tcid,sid,ppIInkStroke,pDirtyRect) ( (This)->lpVtbl -> EndStroke(This,tcid,sid,ppIInkStroke,pDirtyRect) )
#define IStrokeBuilder_get_Ink(This,ppiInkObj) ( (This)->lpVtbl -> get_Ink(This,ppiInkObj) )
#define IStrokeBuilder_putref_Ink(This,piInkObj) ( (This)->lpVtbl -> putref_Ink(This,piInkObj) )
#endif
#endif
#ifndef __IStylusPlugin_INTERFACE_DEFINED__
#define __IStylusPlugin_INTERFACE_DEFINED__
extern const IID IID_IStylusPlugin;
typedef struct IStylusPluginVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IStylusPlugin * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IStylusPlugin * This);
	ULONG(STDMETHODCALLTYPE * Release) (IStylusPlugin * This);
	HRESULT(STDMETHODCALLTYPE * RealTimeStylusEnabled) (IStylusPlugin * This, IRealTimeStylus * piRtsSrc, ULONG cTcidCount, const TABLET_CONTEXT_ID * pTcids);
	HRESULT(STDMETHODCALLTYPE * RealTimeStylusDisabled) (IStylusPlugin * This, IRealTimeStylus * piRtsSrc, ULONG cTcidCount, const TABLET_CONTEXT_ID * pTcids);
	HRESULT(STDMETHODCALLTYPE * StylusInRange) (IStylusPlugin * This, IRealTimeStylus * piRtsSrc, TABLET_CONTEXT_ID tcid, STYLUS_ID sid);
	HRESULT(STDMETHODCALLTYPE * StylusOutOfRange) (IStylusPlugin * This, IRealTimeStylus * piRtsSrc, TABLET_CONTEXT_ID tcid, STYLUS_ID sid);
	HRESULT(STDMETHODCALLTYPE * StylusDown) (IStylusPlugin * This, IRealTimeStylus * piRtsSrc, const StylusInfo * pStylusInfo, ULONG cPropCountPerPkt, LONG * pPacket, LONG ** ppInOutPkt);
	HRESULT(STDMETHODCALLTYPE * StylusUp) (IStylusPlugin * This, IRealTimeStylus * piRtsSrc, const StylusInfo * pStylusInfo, ULONG cPropCountPerPkt, LONG * pPacket, LONG ** ppInOutPkt);
	HRESULT(STDMETHODCALLTYPE * StylusButtonDown) (IStylusPlugin * This, IRealTimeStylus * piRtsSrc, STYLUS_ID sid, const GUID * pGuidStylusButton, POINT * pStylusPos);
	HRESULT(STDMETHODCALLTYPE * StylusButtonUp) (IStylusPlugin * This, IRealTimeStylus * piRtsSrc, STYLUS_ID sid, const GUID * pGuidStylusButton, POINT * pStylusPos);
	HRESULT(STDMETHODCALLTYPE * InAirPackets) (IStylusPlugin * This, IRealTimeStylus * piRtsSrc, const StylusInfo * pStylusInfo, ULONG cPktCount, ULONG cPktBuffLength, LONG * pPackets, ULONG * pcInOutPkts, LONG ** ppInOutPkts);
	HRESULT(STDMETHODCALLTYPE * Packets) (IStylusPlugin * This, IRealTimeStylus * piRtsSrc, const StylusInfo * pStylusInfo, ULONG cPktCount, ULONG cPktBuffLength, LONG * pPackets, ULONG * pcInOutPkts, LONG ** ppInOutPkts);
	HRESULT(STDMETHODCALLTYPE * CustomStylusDataAdded) (IStylusPlugin * This, IRealTimeStylus * piRtsSrc, const GUID * pGuidId, ULONG cbData, const BYTE * pbData);
	HRESULT(STDMETHODCALLTYPE * SystemEvent) (IStylusPlugin * This, IRealTimeStylus * piRtsSrc, TABLET_CONTEXT_ID tcid, STYLUS_ID sid, SYSTEM_EVENT event, SYSTEM_EVENT_DATA eventdata);
	HRESULT(STDMETHODCALLTYPE * TabletAdded) (IStylusPlugin * This, IRealTimeStylus * piRtsSrc, IInkTablet * piTablet);
	HRESULT(STDMETHODCALLTYPE * TabletRemoved) (IStylusPlugin * This, IRealTimeStylus * piRtsSrc, LONG iTabletIndex);
	HRESULT(STDMETHODCALLTYPE * Error) (IStylusPlugin * This, IRealTimeStylus * piRtsSrc, IStylusPlugin * piPlugin, RealTimeStylusDataInterest dataInterest, HRESULT hrErrorCode, LONG_PTR * lptrKey);
	HRESULT(STDMETHODCALLTYPE * UpdateMapping) (IStylusPlugin * This, IRealTimeStylus * piRtsSrc);
	HRESULT(STDMETHODCALLTYPE * DataInterest) (IStylusPlugin * This, RealTimeStylusDataInterest * pDataInterest);
	END_INTERFACE
}  IStylusPluginVtbl;
interface IStylusPlugin
{
	CONST_VTBL struct IStylusPluginVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IStylusPlugin_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IStylusPlugin_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IStylusPlugin_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IStylusPlugin_RealTimeStylusEnabled(This,piRtsSrc,cTcidCount,pTcids) ( (This)->lpVtbl -> RealTimeStylusEnabled(This,piRtsSrc,cTcidCount,pTcids) )
#define IStylusPlugin_RealTimeStylusDisabled(This,piRtsSrc,cTcidCount,pTcids) ( (This)->lpVtbl -> RealTimeStylusDisabled(This,piRtsSrc,cTcidCount,pTcids) )
#define IStylusPlugin_StylusInRange(This,piRtsSrc,tcid,sid) ( (This)->lpVtbl -> StylusInRange(This,piRtsSrc,tcid,sid) )
#define IStylusPlugin_StylusOutOfRange(This,piRtsSrc,tcid,sid) ( (This)->lpVtbl -> StylusOutOfRange(This,piRtsSrc,tcid,sid) )
#define IStylusPlugin_StylusDown(This,piRtsSrc,pStylusInfo,cPropCountPerPkt,pPacket,ppInOutPkt) ( (This)->lpVtbl -> StylusDown(This,piRtsSrc,pStylusInfo,cPropCountPerPkt,pPacket,ppInOutPkt) )
#define IStylusPlugin_StylusUp(This,piRtsSrc,pStylusInfo,cPropCountPerPkt,pPacket,ppInOutPkt) ( (This)->lpVtbl -> StylusUp(This,piRtsSrc,pStylusInfo,cPropCountPerPkt,pPacket,ppInOutPkt) )
#define IStylusPlugin_StylusButtonDown(This,piRtsSrc,sid,pGuidStylusButton,pStylusPos) ( (This)->lpVtbl -> StylusButtonDown(This,piRtsSrc,sid,pGuidStylusButton,pStylusPos) )
#define IStylusPlugin_StylusButtonUp(This,piRtsSrc,sid,pGuidStylusButton,pStylusPos) ( (This)->lpVtbl -> StylusButtonUp(This,piRtsSrc,sid,pGuidStylusButton,pStylusPos) )
#define IStylusPlugin_InAirPackets(This,piRtsSrc,pStylusInfo,cPktCount,cPktBuffLength,pPackets,pcInOutPkts,ppInOutPkts) ( (This)->lpVtbl -> InAirPackets(This,piRtsSrc,pStylusInfo,cPktCount,cPktBuffLength,pPackets,pcInOutPkts,ppInOutPkts) )
#define IStylusPlugin_Packets(This,piRtsSrc,pStylusInfo,cPktCount,cPktBuffLength,pPackets,pcInOutPkts,ppInOutPkts) ( (This)->lpVtbl -> Packets(This,piRtsSrc,pStylusInfo,cPktCount,cPktBuffLength,pPackets,pcInOutPkts,ppInOutPkts) )
#define IStylusPlugin_CustomStylusDataAdded(This,piRtsSrc,pGuidId,cbData,pbData) ( (This)->lpVtbl -> CustomStylusDataAdded(This,piRtsSrc,pGuidId,cbData,pbData) )
#define IStylusPlugin_SystemEvent(This,piRtsSrc,tcid,sid,event,eventdata) ( (This)->lpVtbl -> SystemEvent(This,piRtsSrc,tcid,sid,event,eventdata) )
#define IStylusPlugin_TabletAdded(This,piRtsSrc,piTablet) ( (This)->lpVtbl -> TabletAdded(This,piRtsSrc,piTablet) )
#define IStylusPlugin_TabletRemoved(This,piRtsSrc,iTabletIndex) ( (This)->lpVtbl -> TabletRemoved(This,piRtsSrc,iTabletIndex) )
#define IStylusPlugin_Error(This,piRtsSrc,piPlugin,dataInterest,hrErrorCode,lptrKey) ( (This)->lpVtbl -> Error(This,piRtsSrc,piPlugin,dataInterest,hrErrorCode,lptrKey) )
#define IStylusPlugin_UpdateMapping(This,piRtsSrc) ( (This)->lpVtbl -> UpdateMapping(This,piRtsSrc) )
#define IStylusPlugin_DataInterest(This,pDataInterest) ( (This)->lpVtbl -> DataInterest(This,pDataInterest) )
#endif
#endif
#ifndef __IStylusSyncPlugin_INTERFACE_DEFINED__
#define __IStylusSyncPlugin_INTERFACE_DEFINED__
extern const IID IID_IStylusSyncPlugin;
typedef struct IStylusSyncPluginVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IStylusSyncPlugin * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IStylusSyncPlugin * This);
	ULONG(STDMETHODCALLTYPE * Release) (IStylusSyncPlugin * This);
	HRESULT(STDMETHODCALLTYPE * RealTimeStylusEnabled) (IStylusSyncPlugin * This, IRealTimeStylus * piRtsSrc, ULONG cTcidCount, const TABLET_CONTEXT_ID * pTcids);
	HRESULT(STDMETHODCALLTYPE * RealTimeStylusDisabled) (IStylusSyncPlugin * This, IRealTimeStylus * piRtsSrc, ULONG cTcidCount, const TABLET_CONTEXT_ID * pTcids);
	HRESULT(STDMETHODCALLTYPE * StylusInRange) (IStylusSyncPlugin * This, IRealTimeStylus * piRtsSrc, TABLET_CONTEXT_ID tcid, STYLUS_ID sid);
	HRESULT(STDMETHODCALLTYPE * StylusOutOfRange) (IStylusSyncPlugin * This, IRealTimeStylus * piRtsSrc, TABLET_CONTEXT_ID tcid, STYLUS_ID sid);
	HRESULT(STDMETHODCALLTYPE * StylusDown) (IStylusSyncPlugin * This, IRealTimeStylus * piRtsSrc, const StylusInfo * pStylusInfo, ULONG cPropCountPerPkt, LONG * pPacket, LONG ** ppInOutPkt);
	HRESULT(STDMETHODCALLTYPE * StylusUp) (IStylusSyncPlugin * This, IRealTimeStylus * piRtsSrc, const StylusInfo * pStylusInfo, ULONG cPropCountPerPkt, LONG * pPacket, LONG ** ppInOutPkt);
	HRESULT(STDMETHODCALLTYPE * StylusButtonDown) (IStylusSyncPlugin * This, IRealTimeStylus * piRtsSrc, STYLUS_ID sid, const GUID * pGuidStylusButton, POINT * pStylusPos);
	HRESULT(STDMETHODCALLTYPE * StylusButtonUp) (IStylusSyncPlugin * This, IRealTimeStylus * piRtsSrc, STYLUS_ID sid, const GUID * pGuidStylusButton, POINT * pStylusPos);
	HRESULT(STDMETHODCALLTYPE * InAirPackets) (IStylusSyncPlugin * This, IRealTimeStylus * piRtsSrc, const StylusInfo * pStylusInfo, ULONG cPktCount, ULONG cPktBuffLength, LONG * pPackets, ULONG * pcInOutPkts, LONG ** ppInOutPkts);
	HRESULT(STDMETHODCALLTYPE * Packets) (IStylusSyncPlugin * This, IRealTimeStylus * piRtsSrc, const StylusInfo * pStylusInfo, ULONG cPktCount, ULONG cPktBuffLength, LONG * pPackets, ULONG * pcInOutPkts, LONG ** ppInOutPkts);
	HRESULT(STDMETHODCALLTYPE * CustomStylusDataAdded) (IStylusSyncPlugin * This, IRealTimeStylus * piRtsSrc, const GUID * pGuidId, ULONG cbData, const BYTE * pbData);
	HRESULT(STDMETHODCALLTYPE * SystemEvent) (IStylusSyncPlugin * This, IRealTimeStylus * piRtsSrc, TABLET_CONTEXT_ID tcid, STYLUS_ID sid, SYSTEM_EVENT event, SYSTEM_EVENT_DATA eventdata);
	HRESULT(STDMETHODCALLTYPE * TabletAdded) (IStylusSyncPlugin * This, IRealTimeStylus * piRtsSrc, IInkTablet * piTablet);
	HRESULT(STDMETHODCALLTYPE * TabletRemoved) (IStylusSyncPlugin * This, IRealTimeStylus * piRtsSrc, LONG iTabletIndex);
	HRESULT(STDMETHODCALLTYPE * Error) (IStylusSyncPlugin * This, IRealTimeStylus * piRtsSrc, IStylusPlugin * piPlugin, RealTimeStylusDataInterest dataInterest, HRESULT hrErrorCode, LONG_PTR * lptrKey);
	HRESULT(STDMETHODCALLTYPE * UpdateMapping) (IStylusSyncPlugin * This, IRealTimeStylus * piRtsSrc);
	HRESULT(STDMETHODCALLTYPE * DataInterest) (IStylusSyncPlugin * This, RealTimeStylusDataInterest * pDataInterest);
	END_INTERFACE
}  IStylusSyncPluginVtbl;
interface IStylusSyncPlugin
{
	CONST_VTBL struct IStylusSyncPluginVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IStylusSyncPlugin_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IStylusSyncPlugin_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IStylusSyncPlugin_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IStylusSyncPlugin_RealTimeStylusEnabled(This,piRtsSrc,cTcidCount,pTcids) ( (This)->lpVtbl -> RealTimeStylusEnabled(This,piRtsSrc,cTcidCount,pTcids) )
#define IStylusSyncPlugin_RealTimeStylusDisabled(This,piRtsSrc,cTcidCount,pTcids) ( (This)->lpVtbl -> RealTimeStylusDisabled(This,piRtsSrc,cTcidCount,pTcids) )
#define IStylusSyncPlugin_StylusInRange(This,piRtsSrc,tcid,sid) ( (This)->lpVtbl -> StylusInRange(This,piRtsSrc,tcid,sid) )
#define IStylusSyncPlugin_StylusOutOfRange(This,piRtsSrc,tcid,sid) ( (This)->lpVtbl -> StylusOutOfRange(This,piRtsSrc,tcid,sid) )
#define IStylusSyncPlugin_StylusDown(This,piRtsSrc,pStylusInfo,cPropCountPerPkt,pPacket,ppInOutPkt) ( (This)->lpVtbl -> StylusDown(This,piRtsSrc,pStylusInfo,cPropCountPerPkt,pPacket,ppInOutPkt) )
#define IStylusSyncPlugin_StylusUp(This,piRtsSrc,pStylusInfo,cPropCountPerPkt,pPacket,ppInOutPkt) ( (This)->lpVtbl -> StylusUp(This,piRtsSrc,pStylusInfo,cPropCountPerPkt,pPacket,ppInOutPkt) )
#define IStylusSyncPlugin_StylusButtonDown(This,piRtsSrc,sid,pGuidStylusButton,pStylusPos) ( (This)->lpVtbl -> StylusButtonDown(This,piRtsSrc,sid,pGuidStylusButton,pStylusPos) )
#define IStylusSyncPlugin_StylusButtonUp(This,piRtsSrc,sid,pGuidStylusButton,pStylusPos) ( (This)->lpVtbl -> StylusButtonUp(This,piRtsSrc,sid,pGuidStylusButton,pStylusPos) )
#define IStylusSyncPlugin_InAirPackets(This,piRtsSrc,pStylusInfo,cPktCount,cPktBuffLength,pPackets,pcInOutPkts,ppInOutPkts) ( (This)->lpVtbl -> InAirPackets(This,piRtsSrc,pStylusInfo,cPktCount,cPktBuffLength,pPackets,pcInOutPkts,ppInOutPkts) )
#define IStylusSyncPlugin_Packets(This,piRtsSrc,pStylusInfo,cPktCount,cPktBuffLength,pPackets,pcInOutPkts,ppInOutPkts) ( (This)->lpVtbl -> Packets(This,piRtsSrc,pStylusInfo,cPktCount,cPktBuffLength,pPackets,pcInOutPkts,ppInOutPkts) )
#define IStylusSyncPlugin_CustomStylusDataAdded(This,piRtsSrc,pGuidId,cbData,pbData) ( (This)->lpVtbl -> CustomStylusDataAdded(This,piRtsSrc,pGuidId,cbData,pbData) )
#define IStylusSyncPlugin_SystemEvent(This,piRtsSrc,tcid,sid,event,eventdata) ( (This)->lpVtbl -> SystemEvent(This,piRtsSrc,tcid,sid,event,eventdata) )
#define IStylusSyncPlugin_TabletAdded(This,piRtsSrc,piTablet) ( (This)->lpVtbl -> TabletAdded(This,piRtsSrc,piTablet) )
#define IStylusSyncPlugin_TabletRemoved(This,piRtsSrc,iTabletIndex) ( (This)->lpVtbl -> TabletRemoved(This,piRtsSrc,iTabletIndex) )
#define IStylusSyncPlugin_Error(This,piRtsSrc,piPlugin,dataInterest,hrErrorCode,lptrKey) ( (This)->lpVtbl -> Error(This,piRtsSrc,piPlugin,dataInterest,hrErrorCode,lptrKey) )
#define IStylusSyncPlugin_UpdateMapping(This,piRtsSrc) ( (This)->lpVtbl -> UpdateMapping(This,piRtsSrc) )
#define IStylusSyncPlugin_DataInterest(This,pDataInterest) ( (This)->lpVtbl -> DataInterest(This,pDataInterest) )
#endif
#endif
#ifndef __IStylusAsyncPlugin_INTERFACE_DEFINED__
#define __IStylusAsyncPlugin_INTERFACE_DEFINED__
extern const IID IID_IStylusAsyncPlugin;
typedef struct IStylusAsyncPluginVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IStylusAsyncPlugin * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IStylusAsyncPlugin * This);
	ULONG(STDMETHODCALLTYPE * Release) (IStylusAsyncPlugin * This);
	HRESULT(STDMETHODCALLTYPE * RealTimeStylusEnabled) (IStylusAsyncPlugin * This, IRealTimeStylus * piRtsSrc, ULONG cTcidCount, const TABLET_CONTEXT_ID * pTcids);
	HRESULT(STDMETHODCALLTYPE * RealTimeStylusDisabled) (IStylusAsyncPlugin * This, IRealTimeStylus * piRtsSrc, ULONG cTcidCount, const TABLET_CONTEXT_ID * pTcids);
	HRESULT(STDMETHODCALLTYPE * StylusInRange) (IStylusAsyncPlugin * This, IRealTimeStylus * piRtsSrc, TABLET_CONTEXT_ID tcid, STYLUS_ID sid);
	HRESULT(STDMETHODCALLTYPE * StylusOutOfRange) (IStylusAsyncPlugin * This, IRealTimeStylus * piRtsSrc, TABLET_CONTEXT_ID tcid, STYLUS_ID sid);
	HRESULT(STDMETHODCALLTYPE * StylusDown) (IStylusAsyncPlugin * This, IRealTimeStylus * piRtsSrc, const StylusInfo * pStylusInfo, ULONG cPropCountPerPkt, LONG * pPacket, LONG ** ppInOutPkt);
	HRESULT(STDMETHODCALLTYPE * StylusUp) (IStylusAsyncPlugin * This, IRealTimeStylus * piRtsSrc, const StylusInfo * pStylusInfo, ULONG cPropCountPerPkt, LONG * pPacket, LONG ** ppInOutPkt);
	HRESULT(STDMETHODCALLTYPE * StylusButtonDown) (IStylusAsyncPlugin * This, IRealTimeStylus * piRtsSrc, STYLUS_ID sid, const GUID * pGuidStylusButton, POINT * pStylusPos);
	HRESULT(STDMETHODCALLTYPE * StylusButtonUp) (IStylusAsyncPlugin * This, IRealTimeStylus * piRtsSrc, STYLUS_ID sid, const GUID * pGuidStylusButton, POINT * pStylusPos);
	HRESULT(STDMETHODCALLTYPE * InAirPackets) (IStylusAsyncPlugin * This, IRealTimeStylus * piRtsSrc, const StylusInfo * pStylusInfo, ULONG cPktCount, ULONG cPktBuffLength, LONG * pPackets, ULONG * pcInOutPkts, LONG ** ppInOutPkts);
	HRESULT(STDMETHODCALLTYPE * Packets) (IStylusAsyncPlugin * This, IRealTimeStylus * piRtsSrc, const StylusInfo * pStylusInfo, ULONG cPktCount, ULONG cPktBuffLength, LONG * pPackets, ULONG * pcInOutPkts, LONG ** ppInOutPkts);
	HRESULT(STDMETHODCALLTYPE * CustomStylusDataAdded) (IStylusAsyncPlugin * This, IRealTimeStylus * piRtsSrc, const GUID * pGuidId, ULONG cbData, const BYTE * pbData);
	HRESULT(STDMETHODCALLTYPE * SystemEvent) (IStylusAsyncPlugin * This, IRealTimeStylus * piRtsSrc, TABLET_CONTEXT_ID tcid, STYLUS_ID sid, SYSTEM_EVENT event, SYSTEM_EVENT_DATA eventdata);
	HRESULT(STDMETHODCALLTYPE * TabletAdded) (IStylusAsyncPlugin * This, IRealTimeStylus * piRtsSrc, IInkTablet * piTablet);
	HRESULT(STDMETHODCALLTYPE * TabletRemoved) (IStylusAsyncPlugin * This, IRealTimeStylus * piRtsSrc, LONG iTabletIndex);
	HRESULT(STDMETHODCALLTYPE * Error) (IStylusAsyncPlugin * This, IRealTimeStylus * piRtsSrc, IStylusPlugin * piPlugin, RealTimeStylusDataInterest dataInterest, HRESULT hrErrorCode, LONG_PTR * lptrKey);
	HRESULT(STDMETHODCALLTYPE * UpdateMapping) (IStylusAsyncPlugin * This, IRealTimeStylus * piRtsSrc);
	HRESULT(STDMETHODCALLTYPE * DataInterest) (IStylusAsyncPlugin * This, RealTimeStylusDataInterest * pDataInterest);
	END_INTERFACE
}  IStylusAsyncPluginVtbl;
interface IStylusAsyncPlugin
{
	CONST_VTBL struct IStylusAsyncPluginVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IStylusAsyncPlugin_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IStylusAsyncPlugin_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IStylusAsyncPlugin_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IStylusAsyncPlugin_RealTimeStylusEnabled(This,piRtsSrc,cTcidCount,pTcids) ( (This)->lpVtbl -> RealTimeStylusEnabled(This,piRtsSrc,cTcidCount,pTcids) )
#define IStylusAsyncPlugin_RealTimeStylusDisabled(This,piRtsSrc,cTcidCount,pTcids) ( (This)->lpVtbl -> RealTimeStylusDisabled(This,piRtsSrc,cTcidCount,pTcids) )
#define IStylusAsyncPlugin_StylusInRange(This,piRtsSrc,tcid,sid) ( (This)->lpVtbl -> StylusInRange(This,piRtsSrc,tcid,sid) )
#define IStylusAsyncPlugin_StylusOutOfRange(This,piRtsSrc,tcid,sid) ( (This)->lpVtbl -> StylusOutOfRange(This,piRtsSrc,tcid,sid) )
#define IStylusAsyncPlugin_StylusDown(This,piRtsSrc,pStylusInfo,cPropCountPerPkt,pPacket,ppInOutPkt) ( (This)->lpVtbl -> StylusDown(This,piRtsSrc,pStylusInfo,cPropCountPerPkt,pPacket,ppInOutPkt) )
#define IStylusAsyncPlugin_StylusUp(This,piRtsSrc,pStylusInfo,cPropCountPerPkt,pPacket,ppInOutPkt) ( (This)->lpVtbl -> StylusUp(This,piRtsSrc,pStylusInfo,cPropCountPerPkt,pPacket,ppInOutPkt) )
#define IStylusAsyncPlugin_StylusButtonDown(This,piRtsSrc,sid,pGuidStylusButton,pStylusPos) ( (This)->lpVtbl -> StylusButtonDown(This,piRtsSrc,sid,pGuidStylusButton,pStylusPos) )
#define IStylusAsyncPlugin_StylusButtonUp(This,piRtsSrc,sid,pGuidStylusButton,pStylusPos) ( (This)->lpVtbl -> StylusButtonUp(This,piRtsSrc,sid,pGuidStylusButton,pStylusPos) )
#define IStylusAsyncPlugin_InAirPackets(This,piRtsSrc,pStylusInfo,cPktCount,cPktBuffLength,pPackets,pcInOutPkts,ppInOutPkts) ( (This)->lpVtbl -> InAirPackets(This,piRtsSrc,pStylusInfo,cPktCount,cPktBuffLength,pPackets,pcInOutPkts,ppInOutPkts) )
#define IStylusAsyncPlugin_Packets(This,piRtsSrc,pStylusInfo,cPktCount,cPktBuffLength,pPackets,pcInOutPkts,ppInOutPkts) ( (This)->lpVtbl -> Packets(This,piRtsSrc,pStylusInfo,cPktCount,cPktBuffLength,pPackets,pcInOutPkts,ppInOutPkts) )
#define IStylusAsyncPlugin_CustomStylusDataAdded(This,piRtsSrc,pGuidId,cbData,pbData) ( (This)->lpVtbl -> CustomStylusDataAdded(This,piRtsSrc,pGuidId,cbData,pbData) )
#define IStylusAsyncPlugin_SystemEvent(This,piRtsSrc,tcid,sid,event,eventdata) ( (This)->lpVtbl -> SystemEvent(This,piRtsSrc,tcid,sid,event,eventdata) )
#define IStylusAsyncPlugin_TabletAdded(This,piRtsSrc,piTablet) ( (This)->lpVtbl -> TabletAdded(This,piRtsSrc,piTablet) )
#define IStylusAsyncPlugin_TabletRemoved(This,piRtsSrc,iTabletIndex) ( (This)->lpVtbl -> TabletRemoved(This,piRtsSrc,iTabletIndex) )
#define IStylusAsyncPlugin_Error(This,piRtsSrc,piPlugin,dataInterest,hrErrorCode,lptrKey) ( (This)->lpVtbl -> Error(This,piRtsSrc,piPlugin,dataInterest,hrErrorCode,lptrKey) )
#define IStylusAsyncPlugin_UpdateMapping(This,piRtsSrc) ( (This)->lpVtbl -> UpdateMapping(This,piRtsSrc) )
#define IStylusAsyncPlugin_DataInterest(This,pDataInterest) ( (This)->lpVtbl -> DataInterest(This,pDataInterest) )
#endif
#endif
#ifndef __IDynamicRenderer_INTERFACE_DEFINED__
#define __IDynamicRenderer_INTERFACE_DEFINED__
extern const IID IID_IDynamicRenderer;
typedef struct IDynamicRendererVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDynamicRenderer * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDynamicRenderer * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDynamicRenderer * This);
	HRESULT(STDMETHODCALLTYPE * get_Enabled) (IDynamicRenderer * This, BOOL * bEnabled);
	HRESULT(STDMETHODCALLTYPE * put_Enabled) (IDynamicRenderer * This, BOOL bEnabled);
	HRESULT(STDMETHODCALLTYPE * get_HWND) (IDynamicRenderer * This, HANDLE_PTR * hwnd);
	HRESULT(STDMETHODCALLTYPE * put_HWND) (IDynamicRenderer * This, HANDLE_PTR hwnd);
	HRESULT(STDMETHODCALLTYPE * get_ClipRectangle) (IDynamicRenderer * This, RECT * prcClipRect);
	HRESULT(STDMETHODCALLTYPE * put_ClipRectangle) (IDynamicRenderer * This, const RECT * prcClipRect);
	HRESULT(STDMETHODCALLTYPE * get_ClipRegion) (IDynamicRenderer * This, HANDLE_PTR * phClipRgn);
	HRESULT(STDMETHODCALLTYPE * put_ClipRegion) (IDynamicRenderer * This, HANDLE_PTR hClipRgn);
	HRESULT(STDMETHODCALLTYPE * get_DrawingAttributes) (IDynamicRenderer * This, IInkDrawingAttributes ** ppiDA);
	HRESULT(STDMETHODCALLTYPE * putref_DrawingAttributes) (IDynamicRenderer * This, IInkDrawingAttributes * piDA);
	HRESULT(STDMETHODCALLTYPE * get_DataCacheEnabled) (IDynamicRenderer * This, BOOL * pfCacheData);
	HRESULT(STDMETHODCALLTYPE * put_DataCacheEnabled) (IDynamicRenderer * This, BOOL fCacheData);
	HRESULT(STDMETHODCALLTYPE * ReleaseCachedData) (IDynamicRenderer * This, ULONG strokeId);
	HRESULT(STDMETHODCALLTYPE * Refresh) (IDynamicRenderer * This);
	HRESULT(STDMETHODCALLTYPE * Draw) (IDynamicRenderer * This, HANDLE_PTR hDC);
	END_INTERFACE
}  IDynamicRendererVtbl;
interface IDynamicRenderer
{
	CONST_VTBL struct IDynamicRendererVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDynamicRenderer_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDynamicRenderer_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IDynamicRenderer_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IDynamicRenderer_get_Enabled(This,bEnabled) ( (This)->lpVtbl -> get_Enabled(This,bEnabled) )
#define IDynamicRenderer_put_Enabled(This,bEnabled) ( (This)->lpVtbl -> put_Enabled(This,bEnabled) )
#define IDynamicRenderer_get_HWND(This,hwnd) ( (This)->lpVtbl -> get_HWND(This,hwnd) )
#define IDynamicRenderer_put_HWND(This,hwnd) ( (This)->lpVtbl -> put_HWND(This,hwnd) )
#define IDynamicRenderer_get_ClipRectangle(This,prcClipRect) ( (This)->lpVtbl -> get_ClipRectangle(This,prcClipRect) )
#define IDynamicRenderer_put_ClipRectangle(This,prcClipRect) ( (This)->lpVtbl -> put_ClipRectangle(This,prcClipRect) )
#define IDynamicRenderer_get_ClipRegion(This,phClipRgn) ( (This)->lpVtbl -> get_ClipRegion(This,phClipRgn) )
#define IDynamicRenderer_put_ClipRegion(This,hClipRgn) ( (This)->lpVtbl -> put_ClipRegion(This,hClipRgn) )
#define IDynamicRenderer_get_DrawingAttributes(This,ppiDA) ( (This)->lpVtbl -> get_DrawingAttributes(This,ppiDA) )
#define IDynamicRenderer_putref_DrawingAttributes(This,piDA) ( (This)->lpVtbl -> putref_DrawingAttributes(This,piDA) )
#define IDynamicRenderer_get_DataCacheEnabled(This,pfCacheData) ( (This)->lpVtbl -> get_DataCacheEnabled(This,pfCacheData) )
#define IDynamicRenderer_put_DataCacheEnabled(This,fCacheData) ( (This)->lpVtbl -> put_DataCacheEnabled(This,fCacheData) )
#define IDynamicRenderer_ReleaseCachedData(This,strokeId) ( (This)->lpVtbl -> ReleaseCachedData(This,strokeId) )
#define IDynamicRenderer_Refresh(This) ( (This)->lpVtbl -> Refresh(This) )
#define IDynamicRenderer_Draw(This,hDC) ( (This)->lpVtbl -> Draw(This,hDC) )
#endif
#endif
#ifndef __IGestureRecognizer_INTERFACE_DEFINED__
#define __IGestureRecognizer_INTERFACE_DEFINED__
extern const IID IID_IGestureRecognizer;
typedef struct IGestureRecognizerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGestureRecognizer * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGestureRecognizer * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGestureRecognizer * This);
	HRESULT(STDMETHODCALLTYPE * get_Enabled) (IGestureRecognizer * This, BOOL * pfEnabled);
	HRESULT(STDMETHODCALLTYPE * put_Enabled) (IGestureRecognizer * This, BOOL fEnabled);
	HRESULT(STDMETHODCALLTYPE * get_MaxStrokeCount) (IGestureRecognizer * This, long *pcStrokes);
	HRESULT(STDMETHODCALLTYPE * put_MaxStrokeCount) (IGestureRecognizer * This, long cStrokes);
	HRESULT(STDMETHODCALLTYPE * EnableGestures) (IGestureRecognizer * This, ULONG cGestures, const int *pGestures);
	HRESULT(STDMETHODCALLTYPE * Reset) (IGestureRecognizer * This);
	END_INTERFACE
}  IGestureRecognizerVtbl;
interface IGestureRecognizer
{
	CONST_VTBL struct IGestureRecognizerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGestureRecognizer_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGestureRecognizer_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IGestureRecognizer_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IGestureRecognizer_get_Enabled(This,pfEnabled) ( (This)->lpVtbl -> get_Enabled(This,pfEnabled) )
#define IGestureRecognizer_put_Enabled(This,fEnabled) ( (This)->lpVtbl -> put_Enabled(This,fEnabled) )
#define IGestureRecognizer_get_MaxStrokeCount(This,pcStrokes) ( (This)->lpVtbl -> get_MaxStrokeCount(This,pcStrokes) )
#define IGestureRecognizer_put_MaxStrokeCount(This,cStrokes) ( (This)->lpVtbl -> put_MaxStrokeCount(This,cStrokes) )
#define IGestureRecognizer_EnableGestures(This,cGestures,pGestures) ( (This)->lpVtbl -> EnableGestures(This,cGestures,pGestures) )
#define IGestureRecognizer_Reset(This) ( (This)->lpVtbl -> Reset(This) )
#endif
#endif
extern const CLSID CLSID_RealTimeStylus;
extern const CLSID CLSID_DynamicRenderer;
extern const CLSID CLSID_GestureRecognizer;
extern const CLSID CLSID_StrokeBuilder;
#endif
#endif
