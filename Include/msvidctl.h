/*+@@file@@----------------------------------------------------------------*//*!
 \file		msvidctl.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jun 19 21:53:31 2016
 \date		Modified on Sun Jun 19 21:53:31 2016
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
#ifndef __msvidctl_h__
#define __msvidctl_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IMSVidCtl_FWD_DEFINED__
#define __IMSVidCtl_FWD_DEFINED__
typedef interface IMSVidCtl IMSVidCtl;
#endif
#ifndef __IMSEventBinder_FWD_DEFINED__
#define __IMSEventBinder_FWD_DEFINED__
typedef interface IMSEventBinder IMSEventBinder;
#endif
#ifndef ___IMSVidCtlEvents_FWD_DEFINED__
#define ___IMSVidCtlEvents_FWD_DEFINED__
typedef interface _IMSVidCtlEvents _IMSVidCtlEvents;
#endif
#ifndef __MSVidAnalogTunerDevice_FWD_DEFINED__
#define __MSVidAnalogTunerDevice_FWD_DEFINED__
typedef struct MSVidAnalogTunerDevice MSVidAnalogTunerDevice;
#endif
#ifndef __MSVidBDATunerDevice_FWD_DEFINED__
#define __MSVidBDATunerDevice_FWD_DEFINED__
typedef struct MSVidBDATunerDevice MSVidBDATunerDevice;
#endif
#ifndef __MSVidFilePlaybackDevice_FWD_DEFINED__
#define __MSVidFilePlaybackDevice_FWD_DEFINED__
typedef struct MSVidFilePlaybackDevice MSVidFilePlaybackDevice;
#endif
#ifndef __MSVidWebDVD_FWD_DEFINED__
#define __MSVidWebDVD_FWD_DEFINED__
typedef struct MSVidWebDVD MSVidWebDVD;
#endif
#ifndef __MSVidWebDVDAdm_FWD_DEFINED__
#define __MSVidWebDVDAdm_FWD_DEFINED__
typedef struct MSVidWebDVDAdm MSVidWebDVDAdm;
#endif
#ifndef __MSVidVideoRenderer_FWD_DEFINED__
#define __MSVidVideoRenderer_FWD_DEFINED__
typedef struct MSVidVideoRenderer MSVidVideoRenderer;
#endif
#ifndef __MSVidVMR9_FWD_DEFINED__
#define __MSVidVMR9_FWD_DEFINED__
typedef struct MSVidVMR9 MSVidVMR9;
#endif
#ifndef __MSVidEVR_FWD_DEFINED__
#define __MSVidEVR_FWD_DEFINED__
typedef struct MSVidEVR MSVidEVR;
#endif
#ifndef __MSVidAudioRenderer_FWD_DEFINED__
#define __MSVidAudioRenderer_FWD_DEFINED__
typedef struct MSVidAudioRenderer MSVidAudioRenderer;
#endif
#ifndef __MSVidGenericSink_FWD_DEFINED__
#define __MSVidGenericSink_FWD_DEFINED__
typedef struct MSVidGenericSink MSVidGenericSink;
#endif
#ifndef __MSVidStreamBufferSink_FWD_DEFINED__
#define __MSVidStreamBufferSink_FWD_DEFINED__
typedef struct MSVidStreamBufferSink MSVidStreamBufferSink;
#endif
#ifndef __MSVidStreamBufferSource_FWD_DEFINED__
#define __MSVidStreamBufferSource_FWD_DEFINED__
typedef struct MSVidStreamBufferSource MSVidStreamBufferSource;
#endif
#ifndef __MSVidStreamBufferV2Source_FWD_DEFINED__
#define __MSVidStreamBufferV2Source_FWD_DEFINED__
typedef struct MSVidStreamBufferV2Source MSVidStreamBufferV2Source;
#endif
#ifndef __MSVidEncoder_FWD_DEFINED__
#define __MSVidEncoder_FWD_DEFINED__
typedef struct MSVidEncoder MSVidEncoder;
#endif
#ifndef __MSVidITVCapture_FWD_DEFINED__
#define __MSVidITVCapture_FWD_DEFINED__
typedef struct MSVidITVCapture MSVidITVCapture;
#endif
#ifndef __MSVidITVPlayback_FWD_DEFINED__
#define __MSVidITVPlayback_FWD_DEFINED__
typedef struct MSVidITVPlayback MSVidITVPlayback;
#endif
#ifndef __MSVidCCA_FWD_DEFINED__
#define __MSVidCCA_FWD_DEFINED__
typedef struct MSVidCCA MSVidCCA;
#endif
#ifndef __MSVidClosedCaptioning_FWD_DEFINED__
#define __MSVidClosedCaptioning_FWD_DEFINED__
typedef struct MSVidClosedCaptioning MSVidClosedCaptioning;
#endif
#ifndef __MSVidClosedCaptioningSI_FWD_DEFINED__
#define __MSVidClosedCaptioningSI_FWD_DEFINED__
typedef struct MSVidClosedCaptioningSI MSVidClosedCaptioningSI;
#endif
#ifndef __MSVidDataServices_FWD_DEFINED__
#define __MSVidDataServices_FWD_DEFINED__
typedef struct MSVidDataServices MSVidDataServices;
#endif
#ifndef __MSVidXDS_FWD_DEFINED__
#define __MSVidXDS_FWD_DEFINED__
typedef struct MSVidXDS MSVidXDS;
#endif
#ifndef __MSVidAnalogCaptureToDataServices_FWD_DEFINED__
#define __MSVidAnalogCaptureToDataServices_FWD_DEFINED__
typedef struct MSVidAnalogCaptureToDataServices MSVidAnalogCaptureToDataServices;
#endif
#ifndef __MSVidDataServicesToStreamBufferSink_FWD_DEFINED__
#define __MSVidDataServicesToStreamBufferSink_FWD_DEFINED__
typedef struct MSVidDataServicesToStreamBufferSink MSVidDataServicesToStreamBufferSink;
#endif
#ifndef __MSVidDataServicesToXDS_FWD_DEFINED__
#define __MSVidDataServicesToXDS_FWD_DEFINED__
typedef struct MSVidDataServicesToXDS MSVidDataServicesToXDS;
#endif
#ifndef __MSVidAnalogCaptureToXDS_FWD_DEFINED__
#define __MSVidAnalogCaptureToXDS_FWD_DEFINED__
typedef struct MSVidAnalogCaptureToXDS MSVidAnalogCaptureToXDS;
#endif
#ifndef __MSVidCtl_FWD_DEFINED__
#define __MSVidCtl_FWD_DEFINED__
typedef struct MSVidCtl MSVidCtl;
#endif
#ifndef __MSVidInputDevices_FWD_DEFINED__
#define __MSVidInputDevices_FWD_DEFINED__
typedef struct MSVidInputDevices MSVidInputDevices;
#endif
#ifndef __MSVidOutputDevices_FWD_DEFINED__
#define __MSVidOutputDevices_FWD_DEFINED__
typedef struct MSVidOutputDevices MSVidOutputDevices;
#endif
#ifndef __MSVidVideoRendererDevices_FWD_DEFINED__
#define __MSVidVideoRendererDevices_FWD_DEFINED__
typedef struct MSVidVideoRendererDevices MSVidVideoRendererDevices;
#endif
#ifndef __MSVidAudioRendererDevices_FWD_DEFINED__
#define __MSVidAudioRendererDevices_FWD_DEFINED__
typedef struct MSVidAudioRendererDevices MSVidAudioRendererDevices;
#endif
#ifndef __MSVidFeatures_FWD_DEFINED__
#define __MSVidFeatures_FWD_DEFINED__
typedef struct MSVidFeatures MSVidFeatures;
#endif
#ifndef __MSVidGenericComposite_FWD_DEFINED__
#define __MSVidGenericComposite_FWD_DEFINED__
typedef struct MSVidGenericComposite MSVidGenericComposite;
#endif
#ifndef __MSVidAnalogCaptureToOverlayMixer_FWD_DEFINED__
#define __MSVidAnalogCaptureToOverlayMixer_FWD_DEFINED__
typedef struct MSVidAnalogCaptureToOverlayMixer MSVidAnalogCaptureToOverlayMixer;
#endif
#ifndef __MSVidWebDVDToVideoRenderer_FWD_DEFINED__
#define __MSVidWebDVDToVideoRenderer_FWD_DEFINED__
typedef struct MSVidWebDVDToVideoRenderer MSVidWebDVDToVideoRenderer;
#endif
#ifndef __MSVidWebDVDToAudioRenderer_FWD_DEFINED__
#define __MSVidWebDVDToAudioRenderer_FWD_DEFINED__
typedef struct MSVidWebDVDToAudioRenderer MSVidWebDVDToAudioRenderer;
#endif
#ifndef __MSVidMPEG2DecoderToClosedCaptioning_FWD_DEFINED__
#define __MSVidMPEG2DecoderToClosedCaptioning_FWD_DEFINED__
typedef struct MSVidMPEG2DecoderToClosedCaptioning MSVidMPEG2DecoderToClosedCaptioning;
#endif
#ifndef __MSVidAnalogCaptureToStreamBufferSink_FWD_DEFINED__
#define __MSVidAnalogCaptureToStreamBufferSink_FWD_DEFINED__
typedef struct MSVidAnalogCaptureToStreamBufferSink MSVidAnalogCaptureToStreamBufferSink;
#endif
#ifndef __MSVidDigitalCaptureToStreamBufferSink_FWD_DEFINED__
#define __MSVidDigitalCaptureToStreamBufferSink_FWD_DEFINED__
typedef struct MSVidDigitalCaptureToStreamBufferSink MSVidDigitalCaptureToStreamBufferSink;
#endif
#ifndef __MSVidITVToStreamBufferSink_FWD_DEFINED__
#define __MSVidITVToStreamBufferSink_FWD_DEFINED__
typedef struct MSVidITVToStreamBufferSink MSVidITVToStreamBufferSink;
#endif
#ifndef __MSVidCCAToStreamBufferSink_FWD_DEFINED__
#define __MSVidCCAToStreamBufferSink_FWD_DEFINED__
typedef struct MSVidCCAToStreamBufferSink MSVidCCAToStreamBufferSink;
#endif
#ifndef __MSVidEncoderToStreamBufferSink_FWD_DEFINED__
#define __MSVidEncoderToStreamBufferSink_FWD_DEFINED__
typedef struct MSVidEncoderToStreamBufferSink MSVidEncoderToStreamBufferSink;
#endif
#ifndef __MSVidFilePlaybackToVideoRenderer_FWD_DEFINED__
#define __MSVidFilePlaybackToVideoRenderer_FWD_DEFINED__
typedef struct MSVidFilePlaybackToVideoRenderer MSVidFilePlaybackToVideoRenderer;
#endif
#ifndef __MSVidFilePlaybackToAudioRenderer_FWD_DEFINED__
#define __MSVidFilePlaybackToAudioRenderer_FWD_DEFINED__
typedef struct MSVidFilePlaybackToAudioRenderer MSVidFilePlaybackToAudioRenderer;
#endif
#ifndef __MSVidAnalogTVToEncoder_FWD_DEFINED__
#define __MSVidAnalogTVToEncoder_FWD_DEFINED__
typedef struct MSVidAnalogTVToEncoder MSVidAnalogTVToEncoder;
#endif
#ifndef __MSVidStreamBufferSourceToVideoRenderer_FWD_DEFINED__
#define __MSVidStreamBufferSourceToVideoRenderer_FWD_DEFINED__
typedef struct MSVidStreamBufferSourceToVideoRenderer MSVidStreamBufferSourceToVideoRenderer;
#endif
#ifndef __MSVidAnalogCaptureToCCA_FWD_DEFINED__
#define __MSVidAnalogCaptureToCCA_FWD_DEFINED__
typedef struct MSVidAnalogCaptureToCCA MSVidAnalogCaptureToCCA;
#endif
#ifndef __MSVidDigitalCaptureToCCA_FWD_DEFINED__
#define __MSVidDigitalCaptureToCCA_FWD_DEFINED__
typedef struct MSVidDigitalCaptureToCCA MSVidDigitalCaptureToCCA;
#endif
#ifndef __MSVidDigitalCaptureToITV_FWD_DEFINED__
#define __MSVidDigitalCaptureToITV_FWD_DEFINED__
typedef struct MSVidDigitalCaptureToITV MSVidDigitalCaptureToITV;
#endif
#ifndef __MSVidSBESourceToITV_FWD_DEFINED__
#define __MSVidSBESourceToITV_FWD_DEFINED__
typedef struct MSVidSBESourceToITV MSVidSBESourceToITV;
#endif
#ifndef __MSVidSBESourceToCC_FWD_DEFINED__
#define __MSVidSBESourceToCC_FWD_DEFINED__
typedef struct MSVidSBESourceToCC MSVidSBESourceToCC;
#endif
#ifndef __MSVidSBESourceToGenericSink_FWD_DEFINED__
#define __MSVidSBESourceToGenericSink_FWD_DEFINED__
typedef struct MSVidSBESourceToGenericSink MSVidSBESourceToGenericSink;
#endif
#ifndef __MSVidCCToVMR_FWD_DEFINED__
#define __MSVidCCToVMR_FWD_DEFINED__
typedef struct MSVidCCToVMR MSVidCCToVMR;
#endif
#ifndef __MSVidCCToAR_FWD_DEFINED__
#define __MSVidCCToAR_FWD_DEFINED__
typedef struct MSVidCCToAR MSVidCCToAR;
#endif
#ifndef __MSEventBinder_FWD_DEFINED__
#define __MSEventBinder_FWD_DEFINED__
typedef struct MSEventBinder MSEventBinder;
#endif
#ifndef __MSVidStreamBufferRecordingControl_FWD_DEFINED__
#define __MSVidStreamBufferRecordingControl_FWD_DEFINED__
typedef struct MSVidStreamBufferRecordingControl MSVidStreamBufferRecordingControl;
#endif
#ifndef __MSVidRect_FWD_DEFINED__
#define __MSVidRect_FWD_DEFINED__
typedef struct MSVidRect MSVidRect;
#endif
#ifndef __MSVidDevice_FWD_DEFINED__
#define __MSVidDevice_FWD_DEFINED__
typedef struct MSVidDevice MSVidDevice;
#endif
#ifndef __MSVidDevice2_FWD_DEFINED__
#define __MSVidDevice2_FWD_DEFINED__
typedef struct MSVidDevice2 MSVidDevice2;
#endif
#ifndef __MSVidInputDevice_FWD_DEFINED__
#define __MSVidInputDevice_FWD_DEFINED__
typedef struct MSVidInputDevice MSVidInputDevice;
#endif
#ifndef __MSVidVideoInputDevice_FWD_DEFINED__
#define __MSVidVideoInputDevice_FWD_DEFINED__
typedef struct MSVidVideoInputDevice MSVidVideoInputDevice;
#endif
#ifndef __MSVidVideoPlaybackDevice_FWD_DEFINED__
#define __MSVidVideoPlaybackDevice_FWD_DEFINED__
typedef struct MSVidVideoPlaybackDevice MSVidVideoPlaybackDevice;
#endif
#ifndef __MSVidFeature_FWD_DEFINED__
#define __MSVidFeature_FWD_DEFINED__
typedef struct MSVidFeature MSVidFeature;
#endif
#ifndef __MSVidOutput_FWD_DEFINED__
#define __MSVidOutput_FWD_DEFINED__
typedef struct MSVidOutput MSVidOutput;
#endif
#include <mshtml.h>
#include <segment.h>
#pragma once
typedef 
enum MSViddispidList
{
	dispidInputs	= 0,
	dispidOutputs	= ( dispidInputs + 1 ) ,
	dispid_Inputs	= ( dispidOutputs + 1 ) ,
	dispid_Outputs	= ( dispid_Inputs + 1 ) ,
	dispidVideoRenderers	= ( dispid_Outputs + 1 ) ,
	dispidAudioRenderers	= ( dispidVideoRenderers + 1 ) ,
	dispidFeatures	= ( dispidAudioRenderers + 1 ) ,
	dispidInput	= ( dispidFeatures + 1 ) ,
	dispidOutput	= ( dispidInput + 1 ) ,
	dispidVideoRenderer	= ( dispidOutput + 1 ) ,
	dispidAudioRenderer	= ( dispidVideoRenderer + 1 ) ,
	dispidSelectedFeatures	= ( dispidAudioRenderer + 1 ) ,
	dispidView	= ( dispidSelectedFeatures + 1 ) ,
	dispidBuild	= ( dispidView + 1 ) ,
	dispidPause	= ( dispidBuild + 1 ) ,
	dispidRun	= ( dispidPause + 1 ) ,
	dispidStop	= ( dispidRun + 1 ) ,
	dispidDecompose	= ( dispidStop + 1 ) ,
	dispidDisplaySize	= ( dispidDecompose + 1 ) ,
	dispidMaintainAspectRatio	= ( dispidDisplaySize + 1 ) ,
	dispidColorKey	= ( dispidMaintainAspectRatio + 1 ) ,
	dispidStateChange	= ( dispidColorKey + 1 ) ,
	dispidgetState	= ( dispidStateChange + 1 ) ,
	dispidunbind	= ( dispidgetState + 1 ) ,
	dispidbind	= ( dispidunbind + 1 ) ,
	dispidDisableVideo	= ( dispidbind + 1 ) ,
	dispidDisableAudio	= ( dispidDisableVideo + 1 ) ,
	dispidViewNext	= ( dispidDisableAudio + 1 ) ,
	dispidServiceP	= ( dispidViewNext + 1 ) 
} 	MSViddispidList;
typedef enum DisplaySizeList
{
	dslDefaultSize	= 0,
	dslSourceSize	= 0,
	dslHalfSourceSize	= ( dslSourceSize + 1 ) ,
	dslDoubleSourceSize	= ( dslHalfSourceSize + 1 ) ,
	dslFullScreen	= ( dslDoubleSourceSize + 1 ) ,
	dslHalfScreen	= ( dslFullScreen + 1 ) ,
	dslQuarterScreen	= ( dslHalfScreen + 1 ) ,
	dslSixteenthScreen	= ( dslQuarterScreen + 1 ) 
} 	DisplaySizeList;
typedef enum MSVidCtlStateList
{
	STATE_UNBUILT	= -1,
	STATE_STOP	= ( STATE_UNBUILT + 1 ) ,
	STATE_PAUSE	= ( STATE_STOP + 1 ) ,
	STATE_PLAY	= ( STATE_PAUSE + 1 ) 
} 	MSVidCtlStateList;
extern RPC_IF_HANDLE __MIDL_itf_msvidctl_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msvidctl_0000_0000_v0_0_s_ifspec;
#ifndef __IMSVidCtl_INTERFACE_DEFINED__
#define __IMSVidCtl_INTERFACE_DEFINED__ 
extern const IID IID_IMSVidCtl;
typedef struct IMSVidCtlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMSVidCtl * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMSVidCtl * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMSVidCtl * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMSVidCtl * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMSVidCtl * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMSVidCtl * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMSVidCtl * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * get_AutoSize) (IMSVidCtl * This, VARIANT_BOOL * pbool);
	HRESULT(STDMETHODCALLTYPE * put_AutoSize) (IMSVidCtl * This, VARIANT_BOOL vbool);
	HRESULT(STDMETHODCALLTYPE * get_BackColor) (IMSVidCtl * This, OLE_COLOR * backcolor);
	HRESULT(STDMETHODCALLTYPE * put_BackColor) (IMSVidCtl * This, OLE_COLOR backcolor);
	HRESULT(STDMETHODCALLTYPE * get_Enabled) (IMSVidCtl * This, VARIANT_BOOL * pbool);
	HRESULT(STDMETHODCALLTYPE * put_Enabled) (IMSVidCtl * This, VARIANT_BOOL vbool);
	HRESULT(STDMETHODCALLTYPE * get_TabStop) (IMSVidCtl * This, VARIANT_BOOL * pbool);
	HRESULT(STDMETHODCALLTYPE * put_TabStop) (IMSVidCtl * This, VARIANT_BOOL vbool);
	HRESULT(STDMETHODCALLTYPE * get_Window) (IMSVidCtl * This, HWND * phwnd);
	HRESULT(STDMETHODCALLTYPE * Refresh) (IMSVidCtl * This);
	HRESULT(STDMETHODCALLTYPE * get_DisplaySize) (IMSVidCtl * This, DisplaySizeList * CurrentValue);
	HRESULT(STDMETHODCALLTYPE * put_DisplaySize) (IMSVidCtl * This, DisplaySizeList NewValue);
	HRESULT(STDMETHODCALLTYPE * get_MaintainAspectRatio) (IMSVidCtl * This, VARIANT_BOOL * CurrentValue);
	HRESULT(STDMETHODCALLTYPE * put_MaintainAspectRatio) (IMSVidCtl * This, VARIANT_BOOL NewValue);
	HRESULT(STDMETHODCALLTYPE * get_ColorKey) (IMSVidCtl * This, OLE_COLOR * CurrentValue);
	HRESULT(STDMETHODCALLTYPE * put_ColorKey) (IMSVidCtl * This, OLE_COLOR NewValue);
	HRESULT(STDMETHODCALLTYPE * get_InputsAvailable) (IMSVidCtl * This, BSTR CategoryGuid, IMSVidInputDevices ** pVal);
	HRESULT(STDMETHODCALLTYPE * get_OutputsAvailable) (IMSVidCtl * This, BSTR CategoryGuid, IMSVidOutputDevices ** pVal);
	HRESULT(STDMETHODCALLTYPE * get__InputsAvailable) (IMSVidCtl * This, LPCGUID CategoryGuid, IMSVidInputDevices ** pVal);
	HRESULT(STDMETHODCALLTYPE * get__OutputsAvailable) (IMSVidCtl * This, LPCGUID CategoryGuid, IMSVidOutputDevices ** pVal);
	HRESULT(STDMETHODCALLTYPE * get_VideoRenderersAvailable) (IMSVidCtl * This, IMSVidVideoRendererDevices ** pVal);
	HRESULT(STDMETHODCALLTYPE * get_AudioRenderersAvailable) (IMSVidCtl * This, IMSVidAudioRendererDevices ** pVal);
	HRESULT(STDMETHODCALLTYPE * get_FeaturesAvailable) (IMSVidCtl * This, IMSVidFeatures ** pVal);
	HRESULT(STDMETHODCALLTYPE * get_InputActive) (IMSVidCtl * This, IMSVidInputDevice ** pVal);
	HRESULT(STDMETHODCALLTYPE * put_InputActive) (IMSVidCtl * This, IMSVidInputDevice * pVal);
	HRESULT(STDMETHODCALLTYPE * get_OutputsActive) (IMSVidCtl * This, IMSVidOutputDevices ** pVal);
	HRESULT(STDMETHODCALLTYPE * put_OutputsActive) (IMSVidCtl * This, IMSVidOutputDevices * pVal);
	HRESULT(STDMETHODCALLTYPE * get_VideoRendererActive) (IMSVidCtl * This, IMSVidVideoRenderer ** pVal);
	HRESULT(STDMETHODCALLTYPE * put_VideoRendererActive) (IMSVidCtl * This, IMSVidVideoRenderer * pVal);
	HRESULT(STDMETHODCALLTYPE * get_AudioRendererActive) (IMSVidCtl * This, IMSVidAudioRenderer ** pVal);
	HRESULT(STDMETHODCALLTYPE * put_AudioRendererActive) (IMSVidCtl * This, IMSVidAudioRenderer * pVal);
	HRESULT(STDMETHODCALLTYPE * get_FeaturesActive) (IMSVidCtl * This, IMSVidFeatures ** pVal);
	HRESULT(STDMETHODCALLTYPE * put_FeaturesActive) (IMSVidCtl * This, IMSVidFeatures * pVal);
	HRESULT(STDMETHODCALLTYPE * get_State) (IMSVidCtl * This, MSVidCtlStateList * lState);
	HRESULT(STDMETHODCALLTYPE * View) (IMSVidCtl * This, VARIANT * v);
	HRESULT(STDMETHODCALLTYPE * Build) (IMSVidCtl * This);
	HRESULT(STDMETHODCALLTYPE * Pause) (IMSVidCtl * This);
	HRESULT(STDMETHODCALLTYPE * Run) (IMSVidCtl * This);
	HRESULT(STDMETHODCALLTYPE * Stop) (IMSVidCtl * This);
	HRESULT(STDMETHODCALLTYPE * Decompose) (IMSVidCtl * This);
	HRESULT(STDMETHODCALLTYPE * DisableVideo) (IMSVidCtl * This);
	HRESULT(STDMETHODCALLTYPE * DisableAudio) (IMSVidCtl * This);
	HRESULT(STDMETHODCALLTYPE * ViewNext) (IMSVidCtl * This, VARIANT * v);
	END_INTERFACE
} IMSVidCtlVtbl;
interface IMSVidCtl
{
	CONST_VTBL struct IMSVidCtlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMSVidCtl_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IMSVidCtl_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IMSVidCtl_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IMSVidCtl_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 
#define IMSVidCtl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 
#define IMSVidCtl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 
#define IMSVidCtl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 
#define IMSVidCtl_get_AutoSize(This,pbool)    ( (This)->lpVtbl -> get_AutoSize(This,pbool) ) 
#define IMSVidCtl_put_AutoSize(This,vbool)    ( (This)->lpVtbl -> put_AutoSize(This,vbool) ) 
#define IMSVidCtl_get_BackColor(This,backcolor)    ( (This)->lpVtbl -> get_BackColor(This,backcolor) ) 
#define IMSVidCtl_put_BackColor(This,backcolor)    ( (This)->lpVtbl -> put_BackColor(This,backcolor) ) 
#define IMSVidCtl_get_Enabled(This,pbool)    ( (This)->lpVtbl -> get_Enabled(This,pbool) ) 
#define IMSVidCtl_put_Enabled(This,vbool)    ( (This)->lpVtbl -> put_Enabled(This,vbool) ) 
#define IMSVidCtl_get_TabStop(This,pbool)    ( (This)->lpVtbl -> get_TabStop(This,pbool) ) 
#define IMSVidCtl_put_TabStop(This,vbool)    ( (This)->lpVtbl -> put_TabStop(This,vbool) ) 
#define IMSVidCtl_get_Window(This,phwnd)    ( (This)->lpVtbl -> get_Window(This,phwnd) ) 
#define IMSVidCtl_Refresh(This)    ( (This)->lpVtbl -> Refresh(This) ) 
#define IMSVidCtl_get_DisplaySize(This,CurrentValue)    ( (This)->lpVtbl -> get_DisplaySize(This,CurrentValue) ) 
#define IMSVidCtl_put_DisplaySize(This,NewValue)    ( (This)->lpVtbl -> put_DisplaySize(This,NewValue) ) 
#define IMSVidCtl_get_MaintainAspectRatio(This,CurrentValue)    ( (This)->lpVtbl -> get_MaintainAspectRatio(This,CurrentValue) ) 
#define IMSVidCtl_put_MaintainAspectRatio(This,NewValue)    ( (This)->lpVtbl -> put_MaintainAspectRatio(This,NewValue) ) 
#define IMSVidCtl_get_ColorKey(This,CurrentValue)    ( (This)->lpVtbl -> get_ColorKey(This,CurrentValue) ) 
#define IMSVidCtl_put_ColorKey(This,NewValue)    ( (This)->lpVtbl -> put_ColorKey(This,NewValue) ) 
#define IMSVidCtl_get_InputsAvailable(This,CategoryGuid,pVal)    ( (This)->lpVtbl -> get_InputsAvailable(This,CategoryGuid,pVal) ) 
#define IMSVidCtl_get_OutputsAvailable(This,CategoryGuid,pVal)    ( (This)->lpVtbl -> get_OutputsAvailable(This,CategoryGuid,pVal) ) 
#define IMSVidCtl_get__InputsAvailable(This,CategoryGuid,pVal)    ( (This)->lpVtbl -> get__InputsAvailable(This,CategoryGuid,pVal) ) 
#define IMSVidCtl_get__OutputsAvailable(This,CategoryGuid,pVal)    ( (This)->lpVtbl -> get__OutputsAvailable(This,CategoryGuid,pVal) ) 
#define IMSVidCtl_get_VideoRenderersAvailable(This,pVal)    ( (This)->lpVtbl -> get_VideoRenderersAvailable(This,pVal) ) 
#define IMSVidCtl_get_AudioRenderersAvailable(This,pVal)    ( (This)->lpVtbl -> get_AudioRenderersAvailable(This,pVal) ) 
#define IMSVidCtl_get_FeaturesAvailable(This,pVal)    ( (This)->lpVtbl -> get_FeaturesAvailable(This,pVal) ) 
#define IMSVidCtl_get_InputActive(This,pVal)    ( (This)->lpVtbl -> get_InputActive(This,pVal) ) 
#define IMSVidCtl_put_InputActive(This,pVal)    ( (This)->lpVtbl -> put_InputActive(This,pVal) ) 
#define IMSVidCtl_get_OutputsActive(This,pVal)    ( (This)->lpVtbl -> get_OutputsActive(This,pVal) ) 
#define IMSVidCtl_put_OutputsActive(This,pVal)    ( (This)->lpVtbl -> put_OutputsActive(This,pVal) ) 
#define IMSVidCtl_get_VideoRendererActive(This,pVal)    ( (This)->lpVtbl -> get_VideoRendererActive(This,pVal) ) 
#define IMSVidCtl_put_VideoRendererActive(This,pVal)    ( (This)->lpVtbl -> put_VideoRendererActive(This,pVal) ) 
#define IMSVidCtl_get_AudioRendererActive(This,pVal)    ( (This)->lpVtbl -> get_AudioRendererActive(This,pVal) ) 
#define IMSVidCtl_put_AudioRendererActive(This,pVal)    ( (This)->lpVtbl -> put_AudioRendererActive(This,pVal) ) 
#define IMSVidCtl_get_FeaturesActive(This,pVal)    ( (This)->lpVtbl -> get_FeaturesActive(This,pVal) ) 
#define IMSVidCtl_put_FeaturesActive(This,pVal)    ( (This)->lpVtbl -> put_FeaturesActive(This,pVal) ) 
#define IMSVidCtl_get_State(This,lState)    ( (This)->lpVtbl -> get_State(This,lState) ) 
#define IMSVidCtl_View(This,v)    ( (This)->lpVtbl -> View(This,v) ) 
#define IMSVidCtl_Build(This)    ( (This)->lpVtbl -> Build(This) ) 
#define IMSVidCtl_Pause(This)    ( (This)->lpVtbl -> Pause(This) ) 
#define IMSVidCtl_Run(This)    ( (This)->lpVtbl -> Run(This) ) 
#define IMSVidCtl_Stop(This)    ( (This)->lpVtbl -> Stop(This) ) 
#define IMSVidCtl_Decompose(This)    ( (This)->lpVtbl -> Decompose(This) ) 
#define IMSVidCtl_DisableVideo(This)    ( (This)->lpVtbl -> DisableVideo(This) ) 
#define IMSVidCtl_DisableAudio(This)    ( (This)->lpVtbl -> DisableAudio(This) ) 
#define IMSVidCtl_ViewNext(This,v)    ( (This)->lpVtbl -> ViewNext(This,v) ) 
#endif
#endif
#ifndef __IMSEventBinder_INTERFACE_DEFINED__
#define __IMSEventBinder_INTERFACE_DEFINED__ 
extern const IID IID_IMSEventBinder;
typedef struct IMSEventBinderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMSEventBinder * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMSEventBinder * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMSEventBinder * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (IMSEventBinder * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (IMSEventBinder * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (IMSEventBinder * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (IMSEventBinder * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	HRESULT(STDMETHODCALLTYPE * Bind) (IMSEventBinder * This, LPDISPATCH pEventObject, BSTR EventName, BSTR EventHandler, LONG * CancelID);
	HRESULT(STDMETHODCALLTYPE * Unbind) (IMSEventBinder * This, DWORD CancelCookie);
	END_INTERFACE
} IMSEventBinderVtbl;
interface IMSEventBinder
{
	CONST_VTBL struct IMSEventBinderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMSEventBinder_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IMSEventBinder_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IMSEventBinder_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IMSEventBinder_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 
#define IMSEventBinder_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 
#define IMSEventBinder_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 
#define IMSEventBinder_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 
#define IMSEventBinder_Bind(This,pEventObject,EventName,EventHandler,CancelID)    ( (This)->lpVtbl -> Bind(This,pEventObject,EventName,EventHandler,CancelID) ) 
#define IMSEventBinder_Unbind(This,CancelCookie)    ( (This)->lpVtbl -> Unbind(This,CancelCookie) ) 
#endif
#endif
#ifndef __MSVidCtlLib_LIBRARY_DEFINED__
#define __MSVidCtlLib_LIBRARY_DEFINED__
DEFINE_GUID(SID_MSVidCtl_CurrentAudioEndpoint, 0xcf9a88f4, 0xabcf, 0x4ed8, 0x9b, 0x74, 0x7d, 0xb3, 0x34, 0x45, 0x45, 0x9e);
extern const IID LIBID_MSVidCtlLib;
#ifndef ___IMSVidCtlEvents_DISPINTERFACE_DEFINED__
#define ___IMSVidCtlEvents_DISPINTERFACE_DEFINED__ 
extern const IID DIID__IMSVidCtlEvents;
typedef struct _IMSVidCtlEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (_IMSVidCtlEvents * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (_IMSVidCtlEvents * This);
	ULONG(STDMETHODCALLTYPE * Release) (_IMSVidCtlEvents * This);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfoCount) (_IMSVidCtlEvents * This, UINT * pctinfo);
	HRESULT(STDMETHODCALLTYPE * GetTypeInfo) (_IMSVidCtlEvents * This, UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	HRESULT(STDMETHODCALLTYPE * GetIDsOfNames) (_IMSVidCtlEvents * This, REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	HRESULT(STDMETHODCALLTYPE * Invoke) (_IMSVidCtlEvents * This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	END_INTERFACE
} _IMSVidCtlEventsVtbl;
	interface _IMSVidCtlEvents
{
CONST_VTBL struct _IMSVidCtlEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define _IMSVidCtlEvents_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define _IMSVidCtlEvents_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define _IMSVidCtlEvents_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define _IMSVidCtlEvents_GetTypeInfoCount(This,pctinfo)    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 
#define _IMSVidCtlEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 
#define _IMSVidCtlEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 
#define _IMSVidCtlEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 
#endif
#endif
extern const CLSID CLSID_MSVidAnalogTunerDevice;
extern const CLSID CLSID_MSVidBDATunerDevice;
extern const CLSID CLSID_MSVidFilePlaybackDevice;
extern const CLSID CLSID_MSVidWebDVD;
extern const CLSID CLSID_MSVidWebDVDAdm;
extern const CLSID CLSID_MSVidVideoRenderer;
extern const CLSID CLSID_MSVidVMR9;
extern const CLSID CLSID_MSVidEVR;
extern const CLSID CLSID_MSVidAudioRenderer;
extern const CLSID CLSID_MSVidGenericSink;
extern const CLSID CLSID_MSVidStreamBufferSink;
extern const CLSID CLSID_MSVidStreamBufferSource;
extern const CLSID CLSID_MSVidStreamBufferV2Source;
extern const CLSID CLSID_MSVidEncoder;
extern const CLSID CLSID_MSVidITVCapture;
extern const CLSID CLSID_MSVidITVPlayback;
extern const CLSID CLSID_MSVidCCA;
extern const CLSID CLSID_MSVidClosedCaptioning;
extern const CLSID CLSID_MSVidClosedCaptioningSI;
extern const CLSID CLSID_MSVidDataServices;
extern const CLSID CLSID_MSVidXDS;
extern const CLSID CLSID_MSVidAnalogCaptureToDataServices;
extern const CLSID CLSID_MSVidDataServicesToStreamBufferSink;
extern const CLSID CLSID_MSVidDataServicesToXDS;
extern const CLSID CLSID_MSVidAnalogCaptureToXDS;
extern const CLSID CLSID_MSVidCtl;
extern const CLSID CLSID_MSVidInputDevices;
extern const CLSID CLSID_MSVidOutputDevices;
extern const CLSID CLSID_MSVidVideoRendererDevices;
extern const CLSID CLSID_MSVidAudioRendererDevices;
extern const CLSID CLSID_MSVidFeatures;
extern const CLSID CLSID_MSVidGenericComposite;
extern const CLSID CLSID_MSVidAnalogCaptureToOverlayMixer;
extern const CLSID CLSID_MSVidWebDVDToVideoRenderer;
extern const CLSID CLSID_MSVidWebDVDToAudioRenderer;
extern const CLSID CLSID_MSVidMPEG2DecoderToClosedCaptioning;
extern const CLSID CLSID_MSVidAnalogCaptureToStreamBufferSink;
extern const CLSID CLSID_MSVidDigitalCaptureToStreamBufferSink;
extern const CLSID CLSID_MSVidITVToStreamBufferSink;
extern const CLSID CLSID_MSVidCCAToStreamBufferSink;
extern const CLSID CLSID_MSVidEncoderToStreamBufferSink;
extern const CLSID CLSID_MSVidFilePlaybackToVideoRenderer;
extern const CLSID CLSID_MSVidFilePlaybackToAudioRenderer;
extern const CLSID CLSID_MSVidAnalogTVToEncoder;
extern const CLSID CLSID_MSVidStreamBufferSourceToVideoRenderer;
extern const CLSID CLSID_MSVidAnalogCaptureToCCA;
extern const CLSID CLSID_MSVidDigitalCaptureToCCA;
extern const CLSID CLSID_MSVidDigitalCaptureToITV;
extern const CLSID CLSID_MSVidSBESourceToITV;
extern const CLSID CLSID_MSVidSBESourceToCC;
extern const CLSID CLSID_MSVidSBESourceToGenericSink;
extern const CLSID CLSID_MSVidCCToVMR;
extern const CLSID CLSID_MSVidCCToAR;
extern const CLSID CLSID_MSEventBinder;
extern const CLSID CLSID_MSVidStreamBufferRecordingControl;
extern const CLSID CLSID_MSVidRect;
extern const CLSID CLSID_MSVidDevice;
extern const CLSID CLSID_MSVidDevice2;
extern const CLSID CLSID_MSVidInputDevice;
extern const CLSID CLSID_MSVidVideoInputDevice;
extern const CLSID CLSID_MSVidVideoPlaybackDevice;
extern const CLSID CLSID_MSVidFeature;
extern const CLSID CLSID_MSVidOutput;
#endif
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


