/*+@@file@@----------------------------------------------------------------*//*!
 \file		vidcap.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 16:38:29 2016
 \date		Modified on Sat Sep 17 16:38:29 2016
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
#ifndef __vidcap_h__
#define __vidcap_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IKsTopologyInfo_FWD_DEFINED__
#define __IKsTopologyInfo_FWD_DEFINED__
typedef interface IKsTopologyInfo IKsTopologyInfo;
#endif
#ifndef __ISelector_FWD_DEFINED__
#define __ISelector_FWD_DEFINED__
typedef interface ISelector ISelector;
#endif
#ifndef __ICameraControl_FWD_DEFINED__
#define __ICameraControl_FWD_DEFINED__
typedef interface ICameraControl ICameraControl;
#endif
#ifndef __IVideoProcAmp_FWD_DEFINED__
#define __IVideoProcAmp_FWD_DEFINED__
typedef interface IVideoProcAmp IVideoProcAmp;
#endif
#ifndef __IKsNodeControl_FWD_DEFINED__
#define __IKsNodeControl_FWD_DEFINED__
typedef interface IKsNodeControl IKsNodeControl;
#endif
#include <unknwn.h>
#include <strmif.h>
#include <ks.h>
#ifndef _KS_
typedef struct __MIDL___MIDL_itf_vidcap_0000_0000_0001
{
	ULONG FromNode;
	ULONG FromNodePin;
	ULONG ToNode;
	ULONG ToNodePin;
} KSTOPOLOGY_CONNECTION;
typedef struct __MIDL___MIDL_itf_vidcap_0000_0000_0001 *PKSTOPOLOGY_CONNECTION;
#endif
extern RPC_IF_HANDLE __MIDL_itf_vidcap_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vidcap_0000_0000_v0_0_s_ifspec;
#ifndef __IKsTopologyInfo_INTERFACE_DEFINED__
#define __IKsTopologyInfo_INTERFACE_DEFINED__
extern const IID IID_IKsTopologyInfo;
typedef struct IKsTopologyInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IKsTopologyInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IKsTopologyInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IKsTopologyInfo * This);
	HRESULT(STDMETHODCALLTYPE * get_NumCategories) (IKsTopologyInfo * This, DWORD * pdwNumCategories);
	HRESULT(STDMETHODCALLTYPE * get_Category) (IKsTopologyInfo * This, DWORD dwIndex, GUID * pCategory);
	HRESULT(STDMETHODCALLTYPE * get_NumConnections) (IKsTopologyInfo * This, DWORD * pdwNumConnections);
	HRESULT(STDMETHODCALLTYPE * get_ConnectionInfo) (IKsTopologyInfo * This, DWORD dwIndex, KSTOPOLOGY_CONNECTION * pConnectionInfo);
	HRESULT(STDMETHODCALLTYPE * get_NodeName) (IKsTopologyInfo * This, DWORD dwNodeId, WCHAR * pwchNodeName, DWORD dwBufSize, DWORD * pdwNameLen);
	HRESULT(STDMETHODCALLTYPE * get_NumNodes) (IKsTopologyInfo * This, DWORD * pdwNumNodes);
	HRESULT(STDMETHODCALLTYPE * get_NodeType) (IKsTopologyInfo * This, DWORD dwNodeId, GUID * pNodeType);
	HRESULT(STDMETHODCALLTYPE * CreateNodeInstance) (IKsTopologyInfo * This, DWORD dwNodeId, REFIID iid, void **ppvObject);
	END_INTERFACE
}  IKsTopologyInfoVtbl;
interface IKsTopologyInfo
{
	CONST_VTBL struct IKsTopologyInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IKsTopologyInfo_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IKsTopologyInfo_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IKsTopologyInfo_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IKsTopologyInfo_get_NumCategories(This,pdwNumCategories) ( (This)->lpVtbl -> get_NumCategories(This,pdwNumCategories) )
#define IKsTopologyInfo_get_Category(This,dwIndex,pCategory) ( (This)->lpVtbl -> get_Category(This,dwIndex,pCategory) )
#define IKsTopologyInfo_get_NumConnections(This,pdwNumConnections) ( (This)->lpVtbl -> get_NumConnections(This,pdwNumConnections) )
#define IKsTopologyInfo_get_ConnectionInfo(This,dwIndex,pConnectionInfo) ( (This)->lpVtbl -> get_ConnectionInfo(This,dwIndex,pConnectionInfo) )
#define IKsTopologyInfo_get_NodeName(This,dwNodeId,pwchNodeName,dwBufSize,pdwNameLen) ( (This)->lpVtbl -> get_NodeName(This,dwNodeId,pwchNodeName,dwBufSize,pdwNameLen) )
#define IKsTopologyInfo_get_NumNodes(This,pdwNumNodes) ( (This)->lpVtbl -> get_NumNodes(This,pdwNumNodes) )
#define IKsTopologyInfo_get_NodeType(This,dwNodeId,pNodeType) ( (This)->lpVtbl -> get_NodeType(This,dwNodeId,pNodeType) )
#define IKsTopologyInfo_CreateNodeInstance(This,dwNodeId,iid,ppvObject) ( (This)->lpVtbl -> CreateNodeInstance(This,dwNodeId,iid,ppvObject) )
#endif
#endif
#ifndef __ISelector_INTERFACE_DEFINED__
#define __ISelector_INTERFACE_DEFINED__
extern const IID IID_ISelector;
typedef struct ISelectorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ISelector * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ISelector * This);
	ULONG(STDMETHODCALLTYPE * Release) (ISelector * This);
	HRESULT(STDMETHODCALLTYPE * get_NumSources) (ISelector * This, DWORD * pdwNumSources);
	HRESULT(STDMETHODCALLTYPE * get_SourceNodeId) (ISelector * This, DWORD * pdwPinId);
	HRESULT(STDMETHODCALLTYPE * put_SourceNodeId) (ISelector * This, DWORD dwPinId);
	END_INTERFACE
}  ISelectorVtbl;
interface ISelector
{
	CONST_VTBL struct ISelectorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISelector_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISelector_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ISelector_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ISelector_get_NumSources(This,pdwNumSources) ( (This)->lpVtbl -> get_NumSources(This,pdwNumSources) )
#define ISelector_get_SourceNodeId(This,pdwPinId) ( (This)->lpVtbl -> get_SourceNodeId(This,pdwPinId) )
#define ISelector_put_SourceNodeId(This,dwPinId) ( (This)->lpVtbl -> put_SourceNodeId(This,dwPinId) )
#endif
#endif
#ifndef __ICameraControl_INTERFACE_DEFINED__
#define __ICameraControl_INTERFACE_DEFINED__
extern const IID IID_ICameraControl;
typedef struct ICameraControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICameraControl * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICameraControl * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICameraControl * This);
	HRESULT(STDMETHODCALLTYPE * get_Exposure) (ICameraControl * This, long *pValue, long *pFlags);
	HRESULT(STDMETHODCALLTYPE * put_Exposure) (ICameraControl * This, long Value, long Flags);
	HRESULT(STDMETHODCALLTYPE * getRange_Exposure) (ICameraControl * This, long *pMin, long *pMax, long *pSteppingDelta, long *pDefault, long *pCapsFlag);
	HRESULT(STDMETHODCALLTYPE * get_Focus) (ICameraControl * This, long *pValue, long *pFlags);
	HRESULT(STDMETHODCALLTYPE * put_Focus) (ICameraControl * This, long Value, long Flags);
	HRESULT(STDMETHODCALLTYPE * getRange_Focus) (ICameraControl * This, long *pMin, long *pMax, long *pSteppingDelta, long *pDefault, long *pCapsFlag);
	HRESULT(STDMETHODCALLTYPE * get_Iris) (ICameraControl * This, long *pValue, long *pFlags);
	HRESULT(STDMETHODCALLTYPE * put_Iris) (ICameraControl * This, long Value, long Flags);
	HRESULT(STDMETHODCALLTYPE * getRange_Iris) (ICameraControl * This, long *pMin, long *pMax, long *pSteppingDelta, long *pDefault, long *pCapsFlag);
	HRESULT(STDMETHODCALLTYPE * get_Zoom) (ICameraControl * This, long *pValue, long *pFlags);
	HRESULT(STDMETHODCALLTYPE * put_Zoom) (ICameraControl * This, long Value, long Flags);
	HRESULT(STDMETHODCALLTYPE * getRange_Zoom) (ICameraControl * This, long *pMin, long *pMax, long *pSteppingDelta, long *pDefault, long *pCapsFlag);
	HRESULT(STDMETHODCALLTYPE * get_FocalLengths) (ICameraControl * This, long *plOcularFocalLength, long *plObjectiveFocalLengthMin, long *plObjectiveFocalLengthMax);
	HRESULT(STDMETHODCALLTYPE * get_Pan) (ICameraControl * This, long *pValue, long *pFlags);
	HRESULT(STDMETHODCALLTYPE * put_Pan) (ICameraControl * This, long Value, long Flags);
	HRESULT(STDMETHODCALLTYPE * getRange_Pan) (ICameraControl * This, long *pMin, long *pMax, long *pSteppingDelta, long *pDefault, long *pCapsFlag);
	HRESULT(STDMETHODCALLTYPE * get_Tilt) (ICameraControl * This, long *pValue, long *pFlags);
	HRESULT(STDMETHODCALLTYPE * put_Tilt) (ICameraControl * This, long Value, long Flags);
	HRESULT(STDMETHODCALLTYPE * getRange_Tilt) (ICameraControl * This, long *pMin, long *pMax, long *pSteppingDelta, long *pDefault, long *pCapsFlag);
	HRESULT(STDMETHODCALLTYPE * get_PanTilt) (ICameraControl * This, long *pPanValue, long *pTiltValue, long *pFlags);
	HRESULT(STDMETHODCALLTYPE * put_PanTilt) (ICameraControl * This, long PanValue, long TiltValue, long Flags);
	HRESULT(STDMETHODCALLTYPE * get_Roll) (ICameraControl * This, long *pValue, long *pFlags);
	HRESULT(STDMETHODCALLTYPE * put_Roll) (ICameraControl * This, long Value, long Flags);
	HRESULT(STDMETHODCALLTYPE * getRange_Roll) (ICameraControl * This, long *pMin, long *pMax, long *pSteppingDelta, long *pDefault, long *pCapsFlag);
	HRESULT(STDMETHODCALLTYPE * get_ExposureRelative) (ICameraControl * This, long *pValue, long *pFlags);
	HRESULT(STDMETHODCALLTYPE * put_ExposureRelative) (ICameraControl * This, long Value, long Flags);
	HRESULT(STDMETHODCALLTYPE * getRange_ExposureRelative) (ICameraControl * This, long *pMin, long *pMax, long *pSteppingDelta, long *pDefault, long *pCapsFlag);
	HRESULT(STDMETHODCALLTYPE * get_FocusRelative) (ICameraControl * This, long *pValue, long *pFlags);
	HRESULT(STDMETHODCALLTYPE * put_FocusRelative) (ICameraControl * This, long Value, long Flags);
	HRESULT(STDMETHODCALLTYPE * getRange_FocusRelative) (ICameraControl * This, long *pMin, long *pMax, long *pSteppingDelta, long *pDefault, long *pCapsFlag);
	HRESULT(STDMETHODCALLTYPE * get_IrisRelative) (ICameraControl * This, long *pValue, long *pFlags);
	HRESULT(STDMETHODCALLTYPE * put_IrisRelative) (ICameraControl * This, long Value, long Flags);
	HRESULT(STDMETHODCALLTYPE * getRange_IrisRelative) (ICameraControl * This, long *pMin, long *pMax, long *pSteppingDelta, long *pDefault, long *pCapsFlag);
	HRESULT(STDMETHODCALLTYPE * get_ZoomRelative) (ICameraControl * This, long *pValue, long *pFlags);
	HRESULT(STDMETHODCALLTYPE * put_ZoomRelative) (ICameraControl * This, long Value, long Flags);
	HRESULT(STDMETHODCALLTYPE * getRange_ZoomRelative) (ICameraControl * This, long *pMin, long *pMax, long *pSteppingDelta, long *pDefault, long *pCapsFlag);
	HRESULT(STDMETHODCALLTYPE * get_PanRelative) (ICameraControl * This, long *pValue, long *pFlags);
	HRESULT(STDMETHODCALLTYPE * put_PanRelative) (ICameraControl * This, long Value, long Flags);
	HRESULT(STDMETHODCALLTYPE * get_TiltRelative) (ICameraControl * This, long *pValue, long *pFlags);
	HRESULT(STDMETHODCALLTYPE * put_TiltRelative) (ICameraControl * This, long Value, long Flags);
	HRESULT(STDMETHODCALLTYPE * getRange_TiltRelative) (ICameraControl * This, long *pMin, long *pMax, long *pSteppingDelta, long *pDefault, long *pCapsFlag);
	HRESULT(STDMETHODCALLTYPE * get_PanTiltRelative) (ICameraControl * This, long *pPanValue, long *pTiltValue, long *pFlags);
	HRESULT(STDMETHODCALLTYPE * put_PanTiltRelative) (ICameraControl * This, long PanValue, long TiltValue, long Flags);
	HRESULT(STDMETHODCALLTYPE * getRange_PanRelative) (ICameraControl * This, long *pMin, long *pMax, long *pSteppingDelta, long *pDefault, long *pCapsFlag);
	HRESULT(STDMETHODCALLTYPE * get_RollRelative) (ICameraControl * This, long *pValue, long *pFlags);
	HRESULT(STDMETHODCALLTYPE * put_RollRelative) (ICameraControl * This, long Value, long Flags);
	HRESULT(STDMETHODCALLTYPE * getRange_RollRelative) (ICameraControl * This, long *pMin, long *pMax, long *pSteppingDelta, long *pDefault, long *pCapsFlag);
	HRESULT(STDMETHODCALLTYPE * get_ScanMode) (ICameraControl * This, long *pValue, long *pFlags);
	HRESULT(STDMETHODCALLTYPE * put_ScanMode) (ICameraControl * This, long Value, long Flags);
	HRESULT(STDMETHODCALLTYPE * get_PrivacyMode) (ICameraControl * This, long *pValue, long *pFlags);
	HRESULT(STDMETHODCALLTYPE * put_PrivacyMode) (ICameraControl * This, long Value, long Flags);
	END_INTERFACE
}  ICameraControlVtbl;
interface ICameraControl
{
	CONST_VTBL struct ICameraControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICameraControl_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICameraControl_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ICameraControl_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ICameraControl_get_Exposure(This,pValue,pFlags) ( (This)->lpVtbl -> get_Exposure(This,pValue,pFlags) )
#define ICameraControl_put_Exposure(This,Value,Flags) ( (This)->lpVtbl -> put_Exposure(This,Value,Flags) )
#define ICameraControl_getRange_Exposure(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) ( (This)->lpVtbl -> getRange_Exposure(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) )
#define ICameraControl_get_Focus(This,pValue,pFlags) ( (This)->lpVtbl -> get_Focus(This,pValue,pFlags) )
#define ICameraControl_put_Focus(This,Value,Flags) ( (This)->lpVtbl -> put_Focus(This,Value,Flags) )
#define ICameraControl_getRange_Focus(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) ( (This)->lpVtbl -> getRange_Focus(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) )
#define ICameraControl_get_Iris(This,pValue,pFlags) ( (This)->lpVtbl -> get_Iris(This,pValue,pFlags) )
#define ICameraControl_put_Iris(This,Value,Flags) ( (This)->lpVtbl -> put_Iris(This,Value,Flags) )
#define ICameraControl_getRange_Iris(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) ( (This)->lpVtbl -> getRange_Iris(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) )
#define ICameraControl_get_Zoom(This,pValue,pFlags) ( (This)->lpVtbl -> get_Zoom(This,pValue,pFlags) )
#define ICameraControl_put_Zoom(This,Value,Flags) ( (This)->lpVtbl -> put_Zoom(This,Value,Flags) )
#define ICameraControl_getRange_Zoom(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) ( (This)->lpVtbl -> getRange_Zoom(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) )
#define ICameraControl_get_FocalLengths(This,plOcularFocalLength,plObjectiveFocalLengthMin,plObjectiveFocalLengthMax) ( (This)->lpVtbl -> get_FocalLengths(This,plOcularFocalLength,plObjectiveFocalLengthMin,plObjectiveFocalLengthMax) )
#define ICameraControl_get_Pan(This,pValue,pFlags) ( (This)->lpVtbl -> get_Pan(This,pValue,pFlags) )
#define ICameraControl_put_Pan(This,Value,Flags) ( (This)->lpVtbl -> put_Pan(This,Value,Flags) )
#define ICameraControl_getRange_Pan(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) ( (This)->lpVtbl -> getRange_Pan(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) )
#define ICameraControl_get_Tilt(This,pValue,pFlags) ( (This)->lpVtbl -> get_Tilt(This,pValue,pFlags) )
#define ICameraControl_put_Tilt(This,Value,Flags) ( (This)->lpVtbl -> put_Tilt(This,Value,Flags) )
#define ICameraControl_getRange_Tilt(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) ( (This)->lpVtbl -> getRange_Tilt(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) )
#define ICameraControl_get_PanTilt(This,pPanValue,pTiltValue,pFlags) ( (This)->lpVtbl -> get_PanTilt(This,pPanValue,pTiltValue,pFlags) )
#define ICameraControl_put_PanTilt(This,PanValue,TiltValue,Flags) ( (This)->lpVtbl -> put_PanTilt(This,PanValue,TiltValue,Flags) )
#define ICameraControl_get_Roll(This,pValue,pFlags) ( (This)->lpVtbl -> get_Roll(This,pValue,pFlags) )
#define ICameraControl_put_Roll(This,Value,Flags) ( (This)->lpVtbl -> put_Roll(This,Value,Flags) )
#define ICameraControl_getRange_Roll(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) ( (This)->lpVtbl -> getRange_Roll(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) )
#define ICameraControl_get_ExposureRelative(This,pValue,pFlags) ( (This)->lpVtbl -> get_ExposureRelative(This,pValue,pFlags) )
#define ICameraControl_put_ExposureRelative(This,Value,Flags) ( (This)->lpVtbl -> put_ExposureRelative(This,Value,Flags) )
#define ICameraControl_getRange_ExposureRelative(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) ( (This)->lpVtbl -> getRange_ExposureRelative(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) )
#define ICameraControl_get_FocusRelative(This,pValue,pFlags) ( (This)->lpVtbl -> get_FocusRelative(This,pValue,pFlags) )
#define ICameraControl_put_FocusRelative(This,Value,Flags) ( (This)->lpVtbl -> put_FocusRelative(This,Value,Flags) )
#define ICameraControl_getRange_FocusRelative(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) ( (This)->lpVtbl -> getRange_FocusRelative(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) )
#define ICameraControl_get_IrisRelative(This,pValue,pFlags) ( (This)->lpVtbl -> get_IrisRelative(This,pValue,pFlags) )
#define ICameraControl_put_IrisRelative(This,Value,Flags) ( (This)->lpVtbl -> put_IrisRelative(This,Value,Flags) )
#define ICameraControl_getRange_IrisRelative(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) ( (This)->lpVtbl -> getRange_IrisRelative(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) )
#define ICameraControl_get_ZoomRelative(This,pValue,pFlags) ( (This)->lpVtbl -> get_ZoomRelative(This,pValue,pFlags) )
#define ICameraControl_put_ZoomRelative(This,Value,Flags) ( (This)->lpVtbl -> put_ZoomRelative(This,Value,Flags) )
#define ICameraControl_getRange_ZoomRelative(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) ( (This)->lpVtbl -> getRange_ZoomRelative(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) )
#define ICameraControl_get_PanRelative(This,pValue,pFlags) ( (This)->lpVtbl -> get_PanRelative(This,pValue,pFlags) )
#define ICameraControl_put_PanRelative(This,Value,Flags) ( (This)->lpVtbl -> put_PanRelative(This,Value,Flags) )
#define ICameraControl_get_TiltRelative(This,pValue,pFlags) ( (This)->lpVtbl -> get_TiltRelative(This,pValue,pFlags) )
#define ICameraControl_put_TiltRelative(This,Value,Flags) ( (This)->lpVtbl -> put_TiltRelative(This,Value,Flags) )
#define ICameraControl_getRange_TiltRelative(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) ( (This)->lpVtbl -> getRange_TiltRelative(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) )
#define ICameraControl_get_PanTiltRelative(This,pPanValue,pTiltValue,pFlags) ( (This)->lpVtbl -> get_PanTiltRelative(This,pPanValue,pTiltValue,pFlags) )
#define ICameraControl_put_PanTiltRelative(This,PanValue,TiltValue,Flags) ( (This)->lpVtbl -> put_PanTiltRelative(This,PanValue,TiltValue,Flags) )
#define ICameraControl_getRange_PanRelative(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) ( (This)->lpVtbl -> getRange_PanRelative(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) )
#define ICameraControl_get_RollRelative(This,pValue,pFlags) ( (This)->lpVtbl -> get_RollRelative(This,pValue,pFlags) )
#define ICameraControl_put_RollRelative(This,Value,Flags) ( (This)->lpVtbl -> put_RollRelative(This,Value,Flags) )
#define ICameraControl_getRange_RollRelative(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) ( (This)->lpVtbl -> getRange_RollRelative(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) )
#define ICameraControl_get_ScanMode(This,pValue,pFlags) ( (This)->lpVtbl -> get_ScanMode(This,pValue,pFlags) )
#define ICameraControl_put_ScanMode(This,Value,Flags) ( (This)->lpVtbl -> put_ScanMode(This,Value,Flags) )
#define ICameraControl_get_PrivacyMode(This,pValue,pFlags) ( (This)->lpVtbl -> get_PrivacyMode(This,pValue,pFlags) )
#define ICameraControl_put_PrivacyMode(This,Value,Flags) ( (This)->lpVtbl -> put_PrivacyMode(This,Value,Flags) )
#endif
#endif
#ifndef __IVideoProcAmp_INTERFACE_DEFINED__
#define __IVideoProcAmp_INTERFACE_DEFINED__
extern const IID IID_IVideoProcAmp;
typedef struct IVideoProcAmpVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVideoProcAmp * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVideoProcAmp * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVideoProcAmp * This);
	HRESULT(STDMETHODCALLTYPE * get_BacklightCompensation) (IVideoProcAmp * This, long *pValue, long *pFlags);
	HRESULT(STDMETHODCALLTYPE * put_BacklightCompensation) (IVideoProcAmp * This, long Value, long Flags);
	HRESULT(STDMETHODCALLTYPE * getRange_BacklightCompensation) (IVideoProcAmp * This, long *pMin, long *pMax, long *pSteppingDelta, long *pDefault, long *pCapsFlag);
	HRESULT(STDMETHODCALLTYPE * get_Brightness) (IVideoProcAmp * This, long *pValue, long *pFlags);
	HRESULT(STDMETHODCALLTYPE * put_Brightness) (IVideoProcAmp * This, long Value, long Flags);
	HRESULT(STDMETHODCALLTYPE * getRange_Brightness) (IVideoProcAmp * This, long *pMin, long *pMax, long *pSteppingDelta, long *pDefault, long *pCapsFlag);
	HRESULT(STDMETHODCALLTYPE * get_ColorEnable) (IVideoProcAmp * This, long *pValue, long *pFlags);
	HRESULT(STDMETHODCALLTYPE * put_ColorEnable) (IVideoProcAmp * This, long Value, long Flags);
	HRESULT(STDMETHODCALLTYPE * getRange_ColorEnable) (IVideoProcAmp * This, long *pMin, long *pMax, long *pSteppingDelta, long *pDefault, long *pCapsFlag);
	HRESULT(STDMETHODCALLTYPE * get_Contrast) (IVideoProcAmp * This, long *pValue, long *pFlags);
	HRESULT(STDMETHODCALLTYPE * put_Contrast) (IVideoProcAmp * This, long Value, long Flags);
	HRESULT(STDMETHODCALLTYPE * getRange_Contrast) (IVideoProcAmp * This, long *pMin, long *pMax, long *pSteppingDelta, long *pDefault, long *pCapsFlag);
	HRESULT(STDMETHODCALLTYPE * get_Gamma) (IVideoProcAmp * This, long *pValue, long *pFlags);
	HRESULT(STDMETHODCALLTYPE * put_Gamma) (IVideoProcAmp * This, long Value, long Flags);
	HRESULT(STDMETHODCALLTYPE * getRange_Gamma) (IVideoProcAmp * This, long *pMin, long *pMax, long *pSteppingDelta, long *pDefault, long *pCapsFlag);
	HRESULT(STDMETHODCALLTYPE * get_Saturation) (IVideoProcAmp * This, long *pValue, long *pFlags);
	HRESULT(STDMETHODCALLTYPE * put_Saturation) (IVideoProcAmp * This, long Value, long Flags);
	HRESULT(STDMETHODCALLTYPE * getRange_Saturation) (IVideoProcAmp * This, long *pMin, long *pMax, long *pSteppingDelta, long *pDefault, long *pCapsFlag);
	HRESULT(STDMETHODCALLTYPE * get_Sharpness) (IVideoProcAmp * This, long *pValue, long *pFlags);
	HRESULT(STDMETHODCALLTYPE * put_Sharpness) (IVideoProcAmp * This, long Value, long Flags);
	HRESULT(STDMETHODCALLTYPE * getRange_Sharpness) (IVideoProcAmp * This, long *pMin, long *pMax, long *pSteppingDelta, long *pDefault, long *pCapsFlag);
	HRESULT(STDMETHODCALLTYPE * get_WhiteBalance) (IVideoProcAmp * This, long *pValue, long *pFlags);
	HRESULT(STDMETHODCALLTYPE * put_WhiteBalance) (IVideoProcAmp * This, long Value, long Flags);
	HRESULT(STDMETHODCALLTYPE * getRange_WhiteBalance) (IVideoProcAmp * This, long *pMin, long *pMax, long *pSteppingDelta, long *pDefault, long *pCapsFlag);
	HRESULT(STDMETHODCALLTYPE * get_Gain) (IVideoProcAmp * This, long *pValue, long *pFlags);
	HRESULT(STDMETHODCALLTYPE * put_Gain) (IVideoProcAmp * This, long Value, long Flags);
	HRESULT(STDMETHODCALLTYPE * getRange_Gain) (IVideoProcAmp * This, long *pMin, long *pMax, long *pSteppingDelta, long *pDefault, long *pCapsFlag);
	HRESULT(STDMETHODCALLTYPE * get_Hue) (IVideoProcAmp * This, long *pValue, long *pFlags);
	HRESULT(STDMETHODCALLTYPE * put_Hue) (IVideoProcAmp * This, long Value, long Flags);
	HRESULT(STDMETHODCALLTYPE * getRange_Hue) (IVideoProcAmp * This, long *pMin, long *pMax, long *pSteppingDelta, long *pDefault, long *pCapsFlag);
	HRESULT(STDMETHODCALLTYPE * get_DigitalMultiplier) (IVideoProcAmp * This, long *pValue, long *pFlags);
	HRESULT(STDMETHODCALLTYPE * put_DigitalMultiplier) (IVideoProcAmp * This, long Value, long Flags);
	HRESULT(STDMETHODCALLTYPE * getRange_DigitalMultiplier) (IVideoProcAmp * This, long *pMin, long *pMax, long *pSteppingDelta, long *pDefault, long *pCapsFlag);
	HRESULT(STDMETHODCALLTYPE * get_PowerlineFrequency) (IVideoProcAmp * This, long *pValue, long *pFlags);
	HRESULT(STDMETHODCALLTYPE * put_PowerlineFrequency) (IVideoProcAmp * This, long Value, long Flags);
	HRESULT(STDMETHODCALLTYPE * getRange_PowerlineFrequency) (IVideoProcAmp * This, long *pMin, long *pMax, long *pSteppingDelta, long *pDefault, long *pCapsFlag);
	HRESULT(STDMETHODCALLTYPE * get_WhiteBalanceComponent) (IVideoProcAmp * This, long *pValue1, long *pValue2, long *pFlags);
	HRESULT(STDMETHODCALLTYPE * put_WhiteBalanceComponent) (IVideoProcAmp * This, long Value1, long Value2, long Flags);
	HRESULT(STDMETHODCALLTYPE * getRange_WhiteBalanceComponent) (IVideoProcAmp * This, long *pMin, long *pMax, long *pSteppingDelta, long *pDefault, long *pCapsFlag);
	END_INTERFACE
}  IVideoProcAmpVtbl;
interface IVideoProcAmp
{
	CONST_VTBL struct IVideoProcAmpVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVideoProcAmp_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVideoProcAmp_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IVideoProcAmp_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IVideoProcAmp_get_BacklightCompensation(This,pValue,pFlags) ( (This)->lpVtbl -> get_BacklightCompensation(This,pValue,pFlags) )
#define IVideoProcAmp_put_BacklightCompensation(This,Value,Flags) ( (This)->lpVtbl -> put_BacklightCompensation(This,Value,Flags) )
#define IVideoProcAmp_getRange_BacklightCompensation(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) ( (This)->lpVtbl -> getRange_BacklightCompensation(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) )
#define IVideoProcAmp_get_Brightness(This,pValue,pFlags) ( (This)->lpVtbl -> get_Brightness(This,pValue,pFlags) )
#define IVideoProcAmp_put_Brightness(This,Value,Flags) ( (This)->lpVtbl -> put_Brightness(This,Value,Flags) )
#define IVideoProcAmp_getRange_Brightness(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) ( (This)->lpVtbl -> getRange_Brightness(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) )
#define IVideoProcAmp_get_ColorEnable(This,pValue,pFlags) ( (This)->lpVtbl -> get_ColorEnable(This,pValue,pFlags) )
#define IVideoProcAmp_put_ColorEnable(This,Value,Flags) ( (This)->lpVtbl -> put_ColorEnable(This,Value,Flags) )
#define IVideoProcAmp_getRange_ColorEnable(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) ( (This)->lpVtbl -> getRange_ColorEnable(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) )
#define IVideoProcAmp_get_Contrast(This,pValue,pFlags) ( (This)->lpVtbl -> get_Contrast(This,pValue,pFlags) )
#define IVideoProcAmp_put_Contrast(This,Value,Flags) ( (This)->lpVtbl -> put_Contrast(This,Value,Flags) )
#define IVideoProcAmp_getRange_Contrast(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) ( (This)->lpVtbl -> getRange_Contrast(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) )
#define IVideoProcAmp_get_Gamma(This,pValue,pFlags) ( (This)->lpVtbl -> get_Gamma(This,pValue,pFlags) )
#define IVideoProcAmp_put_Gamma(This,Value,Flags) ( (This)->lpVtbl -> put_Gamma(This,Value,Flags) )
#define IVideoProcAmp_getRange_Gamma(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) ( (This)->lpVtbl -> getRange_Gamma(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) )
#define IVideoProcAmp_get_Saturation(This,pValue,pFlags) ( (This)->lpVtbl -> get_Saturation(This,pValue,pFlags) )
#define IVideoProcAmp_put_Saturation(This,Value,Flags) ( (This)->lpVtbl -> put_Saturation(This,Value,Flags) )
#define IVideoProcAmp_getRange_Saturation(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) ( (This)->lpVtbl -> getRange_Saturation(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) )
#define IVideoProcAmp_get_Sharpness(This,pValue,pFlags) ( (This)->lpVtbl -> get_Sharpness(This,pValue,pFlags) )
#define IVideoProcAmp_put_Sharpness(This,Value,Flags) ( (This)->lpVtbl -> put_Sharpness(This,Value,Flags) )
#define IVideoProcAmp_getRange_Sharpness(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) ( (This)->lpVtbl -> getRange_Sharpness(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) )
#define IVideoProcAmp_get_WhiteBalance(This,pValue,pFlags) ( (This)->lpVtbl -> get_WhiteBalance(This,pValue,pFlags) )
#define IVideoProcAmp_put_WhiteBalance(This,Value,Flags) ( (This)->lpVtbl -> put_WhiteBalance(This,Value,Flags) )
#define IVideoProcAmp_getRange_WhiteBalance(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) ( (This)->lpVtbl -> getRange_WhiteBalance(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) )
#define IVideoProcAmp_get_Gain(This,pValue,pFlags) ( (This)->lpVtbl -> get_Gain(This,pValue,pFlags) )
#define IVideoProcAmp_put_Gain(This,Value,Flags) ( (This)->lpVtbl -> put_Gain(This,Value,Flags) )
#define IVideoProcAmp_getRange_Gain(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) ( (This)->lpVtbl -> getRange_Gain(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) )
#define IVideoProcAmp_get_Hue(This,pValue,pFlags) ( (This)->lpVtbl -> get_Hue(This,pValue,pFlags) )
#define IVideoProcAmp_put_Hue(This,Value,Flags) ( (This)->lpVtbl -> put_Hue(This,Value,Flags) )
#define IVideoProcAmp_getRange_Hue(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) ( (This)->lpVtbl -> getRange_Hue(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) )
#define IVideoProcAmp_get_DigitalMultiplier(This,pValue,pFlags) ( (This)->lpVtbl -> get_DigitalMultiplier(This,pValue,pFlags) )
#define IVideoProcAmp_put_DigitalMultiplier(This,Value,Flags) ( (This)->lpVtbl -> put_DigitalMultiplier(This,Value,Flags) )
#define IVideoProcAmp_getRange_DigitalMultiplier(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) ( (This)->lpVtbl -> getRange_DigitalMultiplier(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) )
#define IVideoProcAmp_get_PowerlineFrequency(This,pValue,pFlags) ( (This)->lpVtbl -> get_PowerlineFrequency(This,pValue,pFlags) )
#define IVideoProcAmp_put_PowerlineFrequency(This,Value,Flags) ( (This)->lpVtbl -> put_PowerlineFrequency(This,Value,Flags) )
#define IVideoProcAmp_getRange_PowerlineFrequency(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) ( (This)->lpVtbl -> getRange_PowerlineFrequency(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) )
#define IVideoProcAmp_get_WhiteBalanceComponent(This,pValue1,pValue2,pFlags) ( (This)->lpVtbl -> get_WhiteBalanceComponent(This,pValue1,pValue2,pFlags) )
#define IVideoProcAmp_put_WhiteBalanceComponent(This,Value1,Value2,Flags) ( (This)->lpVtbl -> put_WhiteBalanceComponent(This,Value1,Value2,Flags) )
#define IVideoProcAmp_getRange_WhiteBalanceComponent(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) ( (This)->lpVtbl -> getRange_WhiteBalanceComponent(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) )
#endif
#endif
#ifndef __IKsNodeControl_INTERFACE_DEFINED__
#define __IKsNodeControl_INTERFACE_DEFINED__
extern const IID IID_IKsNodeControl;
typedef struct IKsNodeControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IKsNodeControl * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IKsNodeControl * This);
	ULONG(STDMETHODCALLTYPE * Release) (IKsNodeControl * This);
	HRESULT(STDMETHODCALLTYPE * put_NodeId) (IKsNodeControl * This, DWORD dwNodeId);
	HRESULT(STDMETHODCALLTYPE * put_KsControl) (IKsNodeControl * This, PVOID pKsControl);
	END_INTERFACE
}  IKsNodeControlVtbl;
interface IKsNodeControl
{
	CONST_VTBL struct IKsNodeControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IKsNodeControl_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IKsNodeControl_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IKsNodeControl_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IKsNodeControl_put_NodeId(This,dwNodeId) ( (This)->lpVtbl -> put_NodeId(This,dwNodeId) )
#define IKsNodeControl_put_KsControl(This,pKsControl) ( (This)->lpVtbl -> put_KsControl(This,pKsControl) )
#endif
#endif
#endif
