/*+@@file@@----------------------------------------------------------------*//*!
 \file		strmif.h
 \par Description 
            strmif.h streaming multimedia interfaces
 \par  Status: 
 \par Project: 
			PellesC Headers extension
 \date		Created  on Sun Mar 15 03:45:06 2015
 \date		Modified on Sun Mar 15 03:45:06 2015
 \author	Frankie
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
#ifndef __strmif_h__
#define __strmif_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ICreateDevEnum_FWD_DEFINED__
#define __ICreateDevEnum_FWD_DEFINED__
typedef interface ICreateDevEnum ICreateDevEnum;
#endif
#ifndef __IPin_FWD_DEFINED__
#define __IPin_FWD_DEFINED__
typedef interface IPin IPin;
#endif
#ifndef __IEnumPins_FWD_DEFINED__
#define __IEnumPins_FWD_DEFINED__
typedef interface IEnumPins IEnumPins;
#endif
#ifndef __IEnumMediaTypes_FWD_DEFINED__
#define __IEnumMediaTypes_FWD_DEFINED__
typedef interface IEnumMediaTypes IEnumMediaTypes;
#endif
#ifndef __IFilterGraph_FWD_DEFINED__
#define __IFilterGraph_FWD_DEFINED__
typedef interface IFilterGraph IFilterGraph;
#endif
#ifndef __IEnumFilters_FWD_DEFINED__
#define __IEnumFilters_FWD_DEFINED__
typedef interface IEnumFilters IEnumFilters;
#endif
#ifndef __IMediaFilter_FWD_DEFINED__
#define __IMediaFilter_FWD_DEFINED__
typedef interface IMediaFilter IMediaFilter;
#endif
#ifndef __IBaseFilter_FWD_DEFINED__
#define __IBaseFilter_FWD_DEFINED__
typedef interface IBaseFilter IBaseFilter;
#endif
#ifndef __IReferenceClock_FWD_DEFINED__
#define __IReferenceClock_FWD_DEFINED__
typedef interface IReferenceClock IReferenceClock;
#endif
#ifndef __IReferenceClockTimerControl_FWD_DEFINED__
#define __IReferenceClockTimerControl_FWD_DEFINED__
typedef interface IReferenceClockTimerControl IReferenceClockTimerControl;
#endif
#ifndef __IReferenceClock2_FWD_DEFINED__
#define __IReferenceClock2_FWD_DEFINED__
typedef interface IReferenceClock2 IReferenceClock2;
#endif
#ifndef __IMediaSample_FWD_DEFINED__
#define __IMediaSample_FWD_DEFINED__
typedef interface IMediaSample IMediaSample;
#endif
#ifndef __IMediaSample2_FWD_DEFINED__
#define __IMediaSample2_FWD_DEFINED__
typedef interface IMediaSample2 IMediaSample2;
#endif
#ifndef __IMediaSample2Config_FWD_DEFINED__
#define __IMediaSample2Config_FWD_DEFINED__
typedef interface IMediaSample2Config IMediaSample2Config;
#endif
#ifndef __IMemAllocator_FWD_DEFINED__
#define __IMemAllocator_FWD_DEFINED__
typedef interface IMemAllocator IMemAllocator;
#endif
#ifndef __IMemAllocatorCallbackTemp_FWD_DEFINED__
#define __IMemAllocatorCallbackTemp_FWD_DEFINED__
typedef interface IMemAllocatorCallbackTemp IMemAllocatorCallbackTemp;
#endif
#ifndef __IMemAllocatorNotifyCallbackTemp_FWD_DEFINED__
#define __IMemAllocatorNotifyCallbackTemp_FWD_DEFINED__
typedef interface IMemAllocatorNotifyCallbackTemp IMemAllocatorNotifyCallbackTemp;
#endif
#ifndef __IMemInputPin_FWD_DEFINED__
#define __IMemInputPin_FWD_DEFINED__
typedef interface IMemInputPin IMemInputPin;
#endif
#ifndef __IAMovieSetup_FWD_DEFINED__
#define __IAMovieSetup_FWD_DEFINED__
typedef interface IAMovieSetup IAMovieSetup;
#endif
#ifndef __IMediaSeeking_FWD_DEFINED__
#define __IMediaSeeking_FWD_DEFINED__
typedef interface IMediaSeeking IMediaSeeking;
#endif
#ifndef __IEnumRegFilters_FWD_DEFINED__
#define __IEnumRegFilters_FWD_DEFINED__
typedef interface IEnumRegFilters IEnumRegFilters;
#endif
#ifndef __IFilterMapper_FWD_DEFINED__
#define __IFilterMapper_FWD_DEFINED__
typedef interface IFilterMapper IFilterMapper;
#endif
#ifndef __IFilterMapper2_FWD_DEFINED__
#define __IFilterMapper2_FWD_DEFINED__
typedef interface IFilterMapper2 IFilterMapper2;
#endif
#ifndef __IFilterMapper3_FWD_DEFINED__
#define __IFilterMapper3_FWD_DEFINED__
typedef interface IFilterMapper3 IFilterMapper3;
#endif
#ifndef __IQualityControl_FWD_DEFINED__
#define __IQualityControl_FWD_DEFINED__
typedef interface IQualityControl IQualityControl;
#endif
#ifndef __IOverlayNotify_FWD_DEFINED__
#define __IOverlayNotify_FWD_DEFINED__
typedef interface IOverlayNotify IOverlayNotify;
#endif
#ifndef __IOverlayNotify2_FWD_DEFINED__
#define __IOverlayNotify2_FWD_DEFINED__
typedef interface IOverlayNotify2 IOverlayNotify2;
#endif
#ifndef __IOverlay_FWD_DEFINED__
#define __IOverlay_FWD_DEFINED__
typedef interface IOverlay IOverlay;
#endif
#ifndef __IMediaEventSink_FWD_DEFINED__
#define __IMediaEventSink_FWD_DEFINED__
typedef interface IMediaEventSink IMediaEventSink;
#endif
#ifndef __IFileSourceFilter_FWD_DEFINED__
#define __IFileSourceFilter_FWD_DEFINED__
typedef interface IFileSourceFilter IFileSourceFilter;
#endif
#ifndef __IFileSinkFilter_FWD_DEFINED__
#define __IFileSinkFilter_FWD_DEFINED__
typedef interface IFileSinkFilter IFileSinkFilter;
#endif
#ifndef __IFileSinkFilter2_FWD_DEFINED__
#define __IFileSinkFilter2_FWD_DEFINED__
typedef interface IFileSinkFilter2 IFileSinkFilter2;
#endif
#ifndef __IGraphBuilder_FWD_DEFINED__
#define __IGraphBuilder_FWD_DEFINED__
typedef interface IGraphBuilder IGraphBuilder;
#endif
#ifndef __ICaptureGraphBuilder_FWD_DEFINED__
#define __ICaptureGraphBuilder_FWD_DEFINED__
typedef interface ICaptureGraphBuilder ICaptureGraphBuilder;
#endif
#ifndef __IAMCopyCaptureFileProgress_FWD_DEFINED__
#define __IAMCopyCaptureFileProgress_FWD_DEFINED__
typedef interface IAMCopyCaptureFileProgress IAMCopyCaptureFileProgress;
#endif
#ifndef __ICaptureGraphBuilder2_FWD_DEFINED__
#define __ICaptureGraphBuilder2_FWD_DEFINED__
typedef interface ICaptureGraphBuilder2 ICaptureGraphBuilder2;
#endif
#ifndef __IFilterGraph2_FWD_DEFINED__
#define __IFilterGraph2_FWD_DEFINED__
typedef interface IFilterGraph2 IFilterGraph2;
#endif
#ifndef __IFilterGraph3_FWD_DEFINED__
#define __IFilterGraph3_FWD_DEFINED__
typedef interface IFilterGraph3 IFilterGraph3;
#endif
#ifndef __IStreamBuilder_FWD_DEFINED__
#define __IStreamBuilder_FWD_DEFINED__
typedef interface IStreamBuilder IStreamBuilder;
#endif
#ifndef __IAsyncReader_FWD_DEFINED__
#define __IAsyncReader_FWD_DEFINED__
typedef interface IAsyncReader IAsyncReader;
#endif
#ifndef __IGraphVersion_FWD_DEFINED__
#define __IGraphVersion_FWD_DEFINED__
typedef interface IGraphVersion IGraphVersion;
#endif
#ifndef __IResourceConsumer_FWD_DEFINED__
#define __IResourceConsumer_FWD_DEFINED__
typedef interface IResourceConsumer IResourceConsumer;
#endif
#ifndef __IResourceManager_FWD_DEFINED__
#define __IResourceManager_FWD_DEFINED__
typedef interface IResourceManager IResourceManager;
#endif
#ifndef __IDistributorNotify_FWD_DEFINED__
#define __IDistributorNotify_FWD_DEFINED__
typedef interface IDistributorNotify IDistributorNotify;
#endif
#ifndef __IAMStreamControl_FWD_DEFINED__
#define __IAMStreamControl_FWD_DEFINED__
typedef interface IAMStreamControl IAMStreamControl;
#endif
#ifndef __ISeekingPassThru_FWD_DEFINED__
#define __ISeekingPassThru_FWD_DEFINED__
typedef interface ISeekingPassThru ISeekingPassThru;
#endif
#ifndef __IAMStreamConfig_FWD_DEFINED__
#define __IAMStreamConfig_FWD_DEFINED__
typedef interface IAMStreamConfig IAMStreamConfig;
#endif
#ifndef __IConfigInterleaving_FWD_DEFINED__
#define __IConfigInterleaving_FWD_DEFINED__
typedef interface IConfigInterleaving IConfigInterleaving;
#endif
#ifndef __IConfigAviMux_FWD_DEFINED__
#define __IConfigAviMux_FWD_DEFINED__
typedef interface IConfigAviMux IConfigAviMux;
#endif
#ifndef __IAMVideoCompression_FWD_DEFINED__
#define __IAMVideoCompression_FWD_DEFINED__
typedef interface IAMVideoCompression IAMVideoCompression;
#endif
#ifndef __IAMVfwCaptureDialogs_FWD_DEFINED__
#define __IAMVfwCaptureDialogs_FWD_DEFINED__
typedef interface IAMVfwCaptureDialogs IAMVfwCaptureDialogs;
#endif
#ifndef __IAMVfwCompressDialogs_FWD_DEFINED__
#define __IAMVfwCompressDialogs_FWD_DEFINED__
typedef interface IAMVfwCompressDialogs IAMVfwCompressDialogs;
#endif
#ifndef __IAMDroppedFrames_FWD_DEFINED__
#define __IAMDroppedFrames_FWD_DEFINED__
typedef interface IAMDroppedFrames IAMDroppedFrames;
#endif
#ifndef __IAMAudioInputMixer_FWD_DEFINED__
#define __IAMAudioInputMixer_FWD_DEFINED__
typedef interface IAMAudioInputMixer IAMAudioInputMixer;
#endif
#ifndef __IAMBufferNegotiation_FWD_DEFINED__
#define __IAMBufferNegotiation_FWD_DEFINED__
typedef interface IAMBufferNegotiation IAMBufferNegotiation;
#endif
#ifndef __IAMAnalogVideoDecoder_FWD_DEFINED__
#define __IAMAnalogVideoDecoder_FWD_DEFINED__
typedef interface IAMAnalogVideoDecoder IAMAnalogVideoDecoder;
#endif
#ifndef __IAMVideoProcAmp_FWD_DEFINED__
#define __IAMVideoProcAmp_FWD_DEFINED__
typedef interface IAMVideoProcAmp IAMVideoProcAmp;
#endif
#ifndef __IAMCameraControl_FWD_DEFINED__
#define __IAMCameraControl_FWD_DEFINED__
typedef interface IAMCameraControl IAMCameraControl;
#endif
#ifndef __IAMVideoControl_FWD_DEFINED__
#define __IAMVideoControl_FWD_DEFINED__
typedef interface IAMVideoControl IAMVideoControl;
#endif
#ifndef __IAMCrossbar_FWD_DEFINED__
#define __IAMCrossbar_FWD_DEFINED__
typedef interface IAMCrossbar IAMCrossbar;
#endif
#ifndef __IAMTuner_FWD_DEFINED__
#define __IAMTuner_FWD_DEFINED__
typedef interface IAMTuner IAMTuner;
#endif
#ifndef __IAMTunerNotification_FWD_DEFINED__
#define __IAMTunerNotification_FWD_DEFINED__
typedef interface IAMTunerNotification IAMTunerNotification;
#endif
#ifndef __IAMTVTuner_FWD_DEFINED__
#define __IAMTVTuner_FWD_DEFINED__
typedef interface IAMTVTuner IAMTVTuner;
#endif
#ifndef __IBPCSatelliteTuner_FWD_DEFINED__
#define __IBPCSatelliteTuner_FWD_DEFINED__
typedef interface IBPCSatelliteTuner IBPCSatelliteTuner;
#endif
#ifndef __IAMTVAudio_FWD_DEFINED__
#define __IAMTVAudio_FWD_DEFINED__
typedef interface IAMTVAudio IAMTVAudio;
#endif
#ifndef __IAMTVAudioNotification_FWD_DEFINED__
#define __IAMTVAudioNotification_FWD_DEFINED__
typedef interface IAMTVAudioNotification IAMTVAudioNotification;
#endif
#ifndef __IAMAnalogVideoEncoder_FWD_DEFINED__
#define __IAMAnalogVideoEncoder_FWD_DEFINED__
typedef interface IAMAnalogVideoEncoder IAMAnalogVideoEncoder;
#endif
#ifndef __IKsPropertySet_FWD_DEFINED__
#define __IKsPropertySet_FWD_DEFINED__
typedef interface IKsPropertySet IKsPropertySet;
#endif
#ifndef __IMediaPropertyBag_FWD_DEFINED__
#define __IMediaPropertyBag_FWD_DEFINED__
typedef interface IMediaPropertyBag IMediaPropertyBag;
#endif
#ifndef __IPersistMediaPropertyBag_FWD_DEFINED__
#define __IPersistMediaPropertyBag_FWD_DEFINED__
typedef interface IPersistMediaPropertyBag IPersistMediaPropertyBag;
#endif
#ifndef __IAMPhysicalPinInfo_FWD_DEFINED__
#define __IAMPhysicalPinInfo_FWD_DEFINED__
typedef interface IAMPhysicalPinInfo IAMPhysicalPinInfo;
#endif
#ifndef __IAMExtDevice_FWD_DEFINED__
#define __IAMExtDevice_FWD_DEFINED__
typedef interface IAMExtDevice IAMExtDevice;
#endif
#ifndef __IAMExtTransport_FWD_DEFINED__
#define __IAMExtTransport_FWD_DEFINED__
typedef interface IAMExtTransport IAMExtTransport;
#endif
#ifndef __IAMTimecodeReader_FWD_DEFINED__
#define __IAMTimecodeReader_FWD_DEFINED__
typedef interface IAMTimecodeReader IAMTimecodeReader;
#endif
#ifndef __IAMTimecodeGenerator_FWD_DEFINED__
#define __IAMTimecodeGenerator_FWD_DEFINED__
typedef interface IAMTimecodeGenerator IAMTimecodeGenerator;
#endif
#ifndef __IAMTimecodeDisplay_FWD_DEFINED__
#define __IAMTimecodeDisplay_FWD_DEFINED__
typedef interface IAMTimecodeDisplay IAMTimecodeDisplay;
#endif
#ifndef __IAMDevMemoryAllocator_FWD_DEFINED__
#define __IAMDevMemoryAllocator_FWD_DEFINED__
typedef interface IAMDevMemoryAllocator IAMDevMemoryAllocator;
#endif
#ifndef __IAMDevMemoryControl_FWD_DEFINED__
#define __IAMDevMemoryControl_FWD_DEFINED__
typedef interface IAMDevMemoryControl IAMDevMemoryControl;
#endif
#ifndef __IAMStreamSelect_FWD_DEFINED__
#define __IAMStreamSelect_FWD_DEFINED__
typedef interface IAMStreamSelect IAMStreamSelect;
#endif
#ifndef __IAMResourceControl_FWD_DEFINED__
#define __IAMResourceControl_FWD_DEFINED__
typedef interface IAMResourceControl IAMResourceControl;
#endif
#ifndef __IAMClockAdjust_FWD_DEFINED__
#define __IAMClockAdjust_FWD_DEFINED__
typedef interface IAMClockAdjust IAMClockAdjust;
#endif
#ifndef __IAMFilterMiscFlags_FWD_DEFINED__
#define __IAMFilterMiscFlags_FWD_DEFINED__
typedef interface IAMFilterMiscFlags IAMFilterMiscFlags;
#endif
#ifndef __IDrawVideoImage_FWD_DEFINED__
#define __IDrawVideoImage_FWD_DEFINED__
typedef interface IDrawVideoImage IDrawVideoImage;
#endif
#ifndef __IDecimateVideoImage_FWD_DEFINED__
#define __IDecimateVideoImage_FWD_DEFINED__
typedef interface IDecimateVideoImage IDecimateVideoImage;
#endif
#ifndef __IAMVideoDecimationProperties_FWD_DEFINED__
#define __IAMVideoDecimationProperties_FWD_DEFINED__
typedef interface IAMVideoDecimationProperties IAMVideoDecimationProperties;
#endif
#ifndef __IVideoFrameStep_FWD_DEFINED__
#define __IVideoFrameStep_FWD_DEFINED__
typedef interface IVideoFrameStep IVideoFrameStep;
#endif
#ifndef __IAMLatency_FWD_DEFINED__
#define __IAMLatency_FWD_DEFINED__
typedef interface IAMLatency IAMLatency;
#endif
#ifndef __IAMPushSource_FWD_DEFINED__
#define __IAMPushSource_FWD_DEFINED__
typedef interface IAMPushSource IAMPushSource;
#endif
#ifndef __IAMDeviceRemoval_FWD_DEFINED__
#define __IAMDeviceRemoval_FWD_DEFINED__
typedef interface IAMDeviceRemoval IAMDeviceRemoval;
#endif
#ifndef __IDVEnc_FWD_DEFINED__
#define __IDVEnc_FWD_DEFINED__
typedef interface IDVEnc IDVEnc;
#endif
#ifndef __IIPDVDec_FWD_DEFINED__
#define __IIPDVDec_FWD_DEFINED__
typedef interface IIPDVDec IIPDVDec;
#endif
#ifndef __IDVRGB219_FWD_DEFINED__
#define __IDVRGB219_FWD_DEFINED__
typedef interface IDVRGB219 IDVRGB219;
#endif
#ifndef __IDVSplitter_FWD_DEFINED__
#define __IDVSplitter_FWD_DEFINED__
typedef interface IDVSplitter IDVSplitter;
#endif
#ifndef __IAMAudioRendererStats_FWD_DEFINED__
#define __IAMAudioRendererStats_FWD_DEFINED__
typedef interface IAMAudioRendererStats IAMAudioRendererStats;
#endif
#ifndef __IAMGraphStreams_FWD_DEFINED__
#define __IAMGraphStreams_FWD_DEFINED__
typedef interface IAMGraphStreams IAMGraphStreams;
#endif
#ifndef __IAMOverlayFX_FWD_DEFINED__
#define __IAMOverlayFX_FWD_DEFINED__
typedef interface IAMOverlayFX IAMOverlayFX;
#endif
#ifndef __IAMOpenProgress_FWD_DEFINED__
#define __IAMOpenProgress_FWD_DEFINED__
typedef interface IAMOpenProgress IAMOpenProgress;
#endif
#ifndef __IMpeg2Demultiplexer_FWD_DEFINED__
#define __IMpeg2Demultiplexer_FWD_DEFINED__
typedef interface IMpeg2Demultiplexer IMpeg2Demultiplexer;
#endif
#ifndef __IEnumStreamIdMap_FWD_DEFINED__
#define __IEnumStreamIdMap_FWD_DEFINED__
typedef interface IEnumStreamIdMap IEnumStreamIdMap;
#endif
#ifndef __IMPEG2StreamIdMap_FWD_DEFINED__
#define __IMPEG2StreamIdMap_FWD_DEFINED__
typedef interface IMPEG2StreamIdMap IMPEG2StreamIdMap;
#endif
#ifndef __IRegisterServiceProvider_FWD_DEFINED__
#define __IRegisterServiceProvider_FWD_DEFINED__
typedef interface IRegisterServiceProvider IRegisterServiceProvider;
#endif
#ifndef __IAMClockSlave_FWD_DEFINED__
#define __IAMClockSlave_FWD_DEFINED__
typedef interface IAMClockSlave IAMClockSlave;
#endif
#ifndef __IAMGraphBuilderCallback_FWD_DEFINED__
#define __IAMGraphBuilderCallback_FWD_DEFINED__
typedef interface IAMGraphBuilderCallback IAMGraphBuilderCallback;
#endif
#ifndef _IAMFilterGraphCallback_FWD_DEFINED__
#define _IAMFilterGraphCallback_FWD_DEFINED__
typedef interface IAMFilterGraphCallback IAMFilterGraphCallback;
#endif
#ifndef __ICodecAPI_FWD_DEFINED__
#define __ICodecAPI_FWD_DEFINED__
typedef interface ICodecAPI ICodecAPI;
#endif
#ifndef __IGetCapabilitiesKey_FWD_DEFINED__
#define __IGetCapabilitiesKey_FWD_DEFINED__
typedef interface IGetCapabilitiesKey IGetCapabilitiesKey;
#endif
#ifndef __IEncoderAPI_FWD_DEFINED__
#define __IEncoderAPI_FWD_DEFINED__
typedef interface IEncoderAPI IEncoderAPI;
#endif
#ifndef __IVideoEncoder_FWD_DEFINED__
#define __IVideoEncoder_FWD_DEFINED__
typedef interface IVideoEncoder IVideoEncoder;
#endif
#ifndef __IAMDecoderCaps_FWD_DEFINED__
#define __IAMDecoderCaps_FWD_DEFINED__
typedef interface IAMDecoderCaps IAMDecoderCaps;
#endif
#ifndef __IAMCertifiedOutputProtection_FWD_DEFINED__
#define __IAMCertifiedOutputProtection_FWD_DEFINED__
typedef interface IAMCertifiedOutputProtection IAMCertifiedOutputProtection;
#endif
#ifndef __IAMAsyncReaderTimestampScaling_FWD_DEFINED__
#define __IAMAsyncReaderTimestampScaling_FWD_DEFINED__
typedef interface IAMAsyncReaderTimestampScaling IAMAsyncReaderTimestampScaling;
#endif
#ifndef __IAMPluginControl_FWD_DEFINED__
#define __IAMPluginControl_FWD_DEFINED__
typedef interface IAMPluginControl IAMPluginControl;
#endif
#ifndef __IDvdControl_FWD_DEFINED__
#define __IDvdControl_FWD_DEFINED__
typedef interface IDvdControl IDvdControl;
#endif
#ifndef __IDvdInfo_FWD_DEFINED__
#define __IDvdInfo_FWD_DEFINED__
typedef interface IDvdInfo IDvdInfo;
#endif
#ifndef __IDvdCmd_FWD_DEFINED__
#define __IDvdCmd_FWD_DEFINED__
typedef interface IDvdCmd IDvdCmd;
#endif
#ifndef __IDvdState_FWD_DEFINED__
#define __IDvdState_FWD_DEFINED__
typedef interface IDvdState IDvdState;
#endif
#ifndef __IDvdControl2_FWD_DEFINED__
#define __IDvdControl2_FWD_DEFINED__
typedef interface IDvdControl2 IDvdControl2;
#endif
#ifndef __IDvdInfo2_FWD_DEFINED__
#define __IDvdInfo2_FWD_DEFINED__
typedef interface IDvdInfo2 IDvdInfo2;
#endif
#ifndef __IDvdGraphBuilder_FWD_DEFINED__
#define __IDvdGraphBuilder_FWD_DEFINED__
typedef interface IDvdGraphBuilder IDvdGraphBuilder;
#endif
#ifndef __IDDrawExclModeVideo_FWD_DEFINED__
#define __IDDrawExclModeVideo_FWD_DEFINED__
typedef interface IDDrawExclModeVideo IDDrawExclModeVideo;
#endif
#ifndef __IDDrawExclModeVideoCallback_FWD_DEFINED__
#define __IDDrawExclModeVideoCallback_FWD_DEFINED__
typedef interface IDDrawExclModeVideoCallback IDDrawExclModeVideoCallback;
#endif
#ifndef __IPinConnection_FWD_DEFINED__
#define __IPinConnection_FWD_DEFINED__
typedef interface IPinConnection IPinConnection;
#endif
#ifndef __IPinFlowControl_FWD_DEFINED__
#define __IPinFlowControl_FWD_DEFINED__
typedef interface IPinFlowControl IPinFlowControl;
#endif
#ifndef __IGraphConfig_FWD_DEFINED__
#define __IGraphConfig_FWD_DEFINED__
typedef interface IGraphConfig IGraphConfig;
#endif
#ifndef __IGraphConfigCallback_FWD_DEFINED__
#define __IGraphConfigCallback_FWD_DEFINED__
typedef interface IGraphConfigCallback IGraphConfigCallback;
#endif
#ifndef __IFilterChain_FWD_DEFINED__
#define __IFilterChain_FWD_DEFINED__
typedef interface IFilterChain IFilterChain;
#endif
#ifndef __IVMRImagePresenter_FWD_DEFINED__
#define __IVMRImagePresenter_FWD_DEFINED__
typedef interface IVMRImagePresenter IVMRImagePresenter;
#endif
#ifndef __IVMRSurfaceAllocator_FWD_DEFINED__
#define __IVMRSurfaceAllocator_FWD_DEFINED__
typedef interface IVMRSurfaceAllocator IVMRSurfaceAllocator;
#endif
#ifndef __IVMRSurfaceAllocatorNotify_FWD_DEFINED__
#define __IVMRSurfaceAllocatorNotify_FWD_DEFINED__
typedef interface IVMRSurfaceAllocatorNotify IVMRSurfaceAllocatorNotify;
#endif
#ifndef __IVMRWindowlessControl_FWD_DEFINED__
#define __IVMRWindowlessControl_FWD_DEFINED__
typedef interface IVMRWindowlessControl IVMRWindowlessControl;
#endif
#ifndef __IVMRMixerControl_FWD_DEFINED__
#define __IVMRMixerControl_FWD_DEFINED__
typedef interface IVMRMixerControl IVMRMixerControl;
#endif
#ifndef __IVMRMonitorConfig_FWD_DEFINED__
#define __IVMRMonitorConfig_FWD_DEFINED__
typedef interface IVMRMonitorConfig IVMRMonitorConfig;
#endif
#ifndef __IVMRFilterConfig_FWD_DEFINED__
#define __IVMRFilterConfig_FWD_DEFINED__
typedef interface IVMRFilterConfig IVMRFilterConfig;
#endif
#ifndef __IVMRAspectRatioControl_FWD_DEFINED__
#define __IVMRAspectRatioControl_FWD_DEFINED__
typedef interface IVMRAspectRatioControl IVMRAspectRatioControl;
#endif
#ifndef __IVMRDeinterlaceControl_FWD_DEFINED__
#define __IVMRDeinterlaceControl_FWD_DEFINED__
typedef interface IVMRDeinterlaceControl IVMRDeinterlaceControl;
#endif
#ifndef __IVMRMixerBitmap_FWD_DEFINED__
#define __IVMRMixerBitmap_FWD_DEFINED__
typedef interface IVMRMixerBitmap IVMRMixerBitmap;
#endif
#ifndef __IVMRImageCompositor_FWD_DEFINED__
#define __IVMRImageCompositor_FWD_DEFINED__
typedef interface IVMRImageCompositor IVMRImageCompositor;
#endif
#ifndef __IVMRVideoStreamControl_FWD_DEFINED__
#define __IVMRVideoStreamControl_FWD_DEFINED__
typedef interface IVMRVideoStreamControl IVMRVideoStreamControl;
#endif
#ifndef __IVMRSurface_FWD_DEFINED__
#define __IVMRSurface_FWD_DEFINED__
typedef interface IVMRSurface IVMRSurface;
#endif
#ifndef __IVMRImagePresenterConfig_FWD_DEFINED__
#define __IVMRImagePresenterConfig_FWD_DEFINED__
typedef interface IVMRImagePresenterConfig IVMRImagePresenterConfig;
#endif
#ifndef __IVMRImagePresenterExclModeConfig_FWD_DEFINED__
#define __IVMRImagePresenterExclModeConfig_FWD_DEFINED__
typedef interface IVMRImagePresenterExclModeConfig IVMRImagePresenterExclModeConfig;
#endif
#ifndef __IVPManager_FWD_DEFINED__
#define __IVPManager_FWD_DEFINED__
typedef interface IVPManager IVPManager;
#endif
#include "unknwn.h"
#include "objidl.h"
#include "oaidl.h"
#include "ocidl.h"
#define CDEF_CLASS_DEFAULT      0x0001
#define CDEF_BYPASS_CLASS_MANAGER   0x0002
#define CDEF_MERIT_ABOVE_DO_NOT_USE  0x0008
#define CDEF_DEVMON_CMGR_DEVICE  0x0010
#define CDEF_DEVMON_DMO  0x0020
#define CDEF_DEVMON_PNP_DEVICE  0x0040
#define CDEF_DEVMON_FILTER  0x0080
#define CDEF_DEVMON_SELECTIVE_MASK  0x00f0
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0000_v0_0_s_ifspec;
#ifndef __ICreateDevEnum_INTERFACE_DEFINED__
#define __ICreateDevEnum_INTERFACE_DEFINED__
extern const IID IID_ICreateDevEnum;
typedef struct ICreateDevEnumVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICreateDevEnum * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICreateDevEnum * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICreateDevEnum * This);
	HRESULT(STDMETHODCALLTYPE * CreateClassEnumerator) (ICreateDevEnum * This, REFCLSID clsidDeviceClass, IEnumMoniker ** ppEnumMoniker, DWORD dwFlags);
	END_INTERFACE
}  ICreateDevEnumVtbl;
interface ICreateDevEnum
{
	CONST_VTBL struct ICreateDevEnumVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICreateDevEnum_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICreateDevEnum_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define ICreateDevEnum_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define ICreateDevEnum_CreateClassEnumerator(This,clsidDeviceClass,ppEnumMoniker,dwFlags)    ( (This)->lpVtbl -> CreateClassEnumerator(This,clsidDeviceClass,ppEnumMoniker,dwFlags) )
#endif
#endif
#define CHARS_IN_GUID     39
typedef struct _AMMediaType
{
	GUID majortype;
	GUID subtype;
	BOOL bFixedSizeSamples;
	BOOL bTemporalCompression;
	ULONG lSampleSize;
	GUID formattype;
	IUnknown *pUnk;
	ULONG cbFormat;
	BYTE *pbFormat;
} AM_MEDIA_TYPE;
typedef enum _PinDirection
{
	PINDIR_INPUT = 0,
	PINDIR_OUTPUT = (PINDIR_INPUT + 1)
} PIN_DIRECTION;
#define MAX_PIN_NAME     128
#define MAX_FILTER_NAME  128
typedef LONGLONG REFERENCE_TIME;
typedef double REFTIME;
typedef DWORD_PTR HSEMAPHORE;
typedef DWORD_PTR HEVENT;
typedef struct _AllocatorProperties
{
	long cBuffers;
	long cbBuffer;
	long cbAlign;
	long cbPrefix;
} ALLOCATOR_PROPERTIES;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0001_v0_0_s_ifspec;
#ifndef __IPin_INTERFACE_DEFINED__
#define __IPin_INTERFACE_DEFINED__
typedef struct _PinInfo
{
	IBaseFilter *pFilter;
	PIN_DIRECTION dir;
	WCHAR achName[128];
} PIN_INFO;
extern const IID IID_IPin;
typedef struct IPinVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPin * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPin * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPin * This);
	HRESULT(STDMETHODCALLTYPE * Connect) (IPin * This, IPin * pReceivePin, const AM_MEDIA_TYPE * pmt);
	HRESULT(STDMETHODCALLTYPE * ReceiveConnection) (IPin * This, IPin * pConnector, const AM_MEDIA_TYPE * pmt);
	HRESULT(STDMETHODCALLTYPE * Disconnect) (IPin * This);
	HRESULT(STDMETHODCALLTYPE * ConnectedTo) (IPin * This, IPin ** pPin);
	HRESULT(STDMETHODCALLTYPE * ConnectionMediaType) (IPin * This, AM_MEDIA_TYPE * pmt);
	HRESULT(STDMETHODCALLTYPE * QueryPinInfo) (IPin * This, PIN_INFO * pInfo);
	HRESULT(STDMETHODCALLTYPE * QueryDirection) (IPin * This, PIN_DIRECTION * pPinDir);
	HRESULT(STDMETHODCALLTYPE * QueryId) (IPin * This, LPWSTR * Id);
	HRESULT(STDMETHODCALLTYPE * QueryAccept) (IPin * This, const AM_MEDIA_TYPE * pmt);
	HRESULT(STDMETHODCALLTYPE * EnumMediaTypes) (IPin * This, IEnumMediaTypes ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * QueryInternalConnections) (IPin * This, IPin ** apPin, ULONG * nPin);
	HRESULT(STDMETHODCALLTYPE * EndOfStream) (IPin * This);
	HRESULT(STDMETHODCALLTYPE * BeginFlush) (IPin * This);
	HRESULT(STDMETHODCALLTYPE * EndFlush) (IPin * This);
	HRESULT(STDMETHODCALLTYPE * NewSegment) (IPin * This, REFERENCE_TIME tStart, REFERENCE_TIME tStop, double dRate);
	END_INTERFACE
}  IPinVtbl;
interface IPin
{
	CONST_VTBL struct IPinVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPin_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPin_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IPin_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IPin_Connect(This,pReceivePin,pmt)    ( (This)->lpVtbl -> Connect(This,pReceivePin,pmt) )
#define IPin_ReceiveConnection(This,pConnector,pmt)    ( (This)->lpVtbl -> ReceiveConnection(This,pConnector,pmt) )
#define IPin_Disconnect(This)    ( (This)->lpVtbl -> Disconnect(This) )
#define IPin_ConnectedTo(This,pPin)    ( (This)->lpVtbl -> ConnectedTo(This,pPin) )
#define IPin_ConnectionMediaType(This,pmt)    ( (This)->lpVtbl -> ConnectionMediaType(This,pmt) )
#define IPin_QueryPinInfo(This,pInfo)    ( (This)->lpVtbl -> QueryPinInfo(This,pInfo) )
#define IPin_QueryDirection(This,pPinDir)    ( (This)->lpVtbl -> QueryDirection(This,pPinDir) )
#define IPin_QueryId(This,Id)    ( (This)->lpVtbl -> QueryId(This,Id) )
#define IPin_QueryAccept(This,pmt)    ( (This)->lpVtbl -> QueryAccept(This,pmt) )
#define IPin_EnumMediaTypes(This,ppEnum)    ( (This)->lpVtbl -> EnumMediaTypes(This,ppEnum) )
#define IPin_QueryInternalConnections(This,apPin,nPin)    ( (This)->lpVtbl -> QueryInternalConnections(This,apPin,nPin) )
#define IPin_EndOfStream(This)    ( (This)->lpVtbl -> EndOfStream(This) )
#define IPin_BeginFlush(This)    ( (This)->lpVtbl -> BeginFlush(This) )
#define IPin_EndFlush(This)    ( (This)->lpVtbl -> EndFlush(This) )
#define IPin_NewSegment(This,tStart,tStop,dRate)    ( (This)->lpVtbl -> NewSegment(This,tStart,tStop,dRate) )
#endif
#endif
typedef IPin *PPIN;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0002_v0_0_s_ifspec;
#ifndef __IEnumPins_INTERFACE_DEFINED__
#define __IEnumPins_INTERFACE_DEFINED__
extern const IID IID_IEnumPins;
typedef struct IEnumPinsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumPins * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumPins * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumPins * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumPins * This, ULONG cPins, IPin ** ppPins, ULONG * pcFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumPins * This, ULONG cPins);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumPins * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumPins * This, IEnumPins ** ppEnum);
	END_INTERFACE
}  IEnumPinsVtbl;
interface IEnumPins
{
	CONST_VTBL struct IEnumPinsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumPins_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumPins_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IEnumPins_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IEnumPins_Next(This,cPins,ppPins,pcFetched)    ( (This)->lpVtbl -> Next(This,cPins,ppPins,pcFetched) )
#define IEnumPins_Skip(This,cPins)    ( (This)->lpVtbl -> Skip(This,cPins) )
#define IEnumPins_Reset(This)    ( (This)->lpVtbl -> Reset(This) )
#define IEnumPins_Clone(This,ppEnum)    ( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
#endif
typedef IEnumPins *PENUMPINS;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0003_v0_0_s_ifspec;
#ifndef __IEnumMediaTypes_INTERFACE_DEFINED__
#define __IEnumMediaTypes_INTERFACE_DEFINED__
extern const IID IID_IEnumMediaTypes;
typedef struct IEnumMediaTypesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumMediaTypes * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumMediaTypes * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumMediaTypes * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumMediaTypes * This, ULONG cMediaTypes, AM_MEDIA_TYPE ** ppMediaTypes, ULONG * pcFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumMediaTypes * This, ULONG cMediaTypes);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumMediaTypes * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumMediaTypes * This, IEnumMediaTypes ** ppEnum);
	END_INTERFACE
}  IEnumMediaTypesVtbl;
interface IEnumMediaTypes
{
	CONST_VTBL struct IEnumMediaTypesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumMediaTypes_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumMediaTypes_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IEnumMediaTypes_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IEnumMediaTypes_Next(This,cMediaTypes,ppMediaTypes,pcFetched)    ( (This)->lpVtbl -> Next(This,cMediaTypes,ppMediaTypes,pcFetched) )
#define IEnumMediaTypes_Skip(This,cMediaTypes)    ( (This)->lpVtbl -> Skip(This,cMediaTypes) )
#define IEnumMediaTypes_Reset(This)    ( (This)->lpVtbl -> Reset(This) )
#define IEnumMediaTypes_Clone(This,ppEnum)    ( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
#endif
typedef IEnumMediaTypes *PENUMMEDIATYPES;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0004_v0_0_s_ifspec;
#ifndef __IFilterGraph_INTERFACE_DEFINED__
#define __IFilterGraph_INTERFACE_DEFINED__
extern const IID IID_IFilterGraph;
typedef struct IFilterGraphVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFilterGraph * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFilterGraph * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFilterGraph * This);
	HRESULT(STDMETHODCALLTYPE * AddFilter) (IFilterGraph * This, IBaseFilter * pFilter, LPCWSTR pName);
	HRESULT(STDMETHODCALLTYPE * RemoveFilter) (IFilterGraph * This, IBaseFilter * pFilter);
	HRESULT(STDMETHODCALLTYPE * EnumFilters) (IFilterGraph * This, IEnumFilters ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * FindFilterByName) (IFilterGraph * This, LPCWSTR pName, IBaseFilter ** ppFilter);
	HRESULT(STDMETHODCALLTYPE * ConnectDirect) (IFilterGraph * This, IPin * ppinOut, IPin * ppinIn, const AM_MEDIA_TYPE * pmt);
	HRESULT(STDMETHODCALLTYPE * Reconnect) (IFilterGraph * This, IPin * ppin);
	HRESULT(STDMETHODCALLTYPE * Disconnect) (IFilterGraph * This, IPin * ppin);
	HRESULT(STDMETHODCALLTYPE * SetDefaultSyncSource) (IFilterGraph * This);
	END_INTERFACE
}  IFilterGraphVtbl;
interface IFilterGraph
{
	CONST_VTBL struct IFilterGraphVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFilterGraph_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFilterGraph_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IFilterGraph_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IFilterGraph_AddFilter(This,pFilter,pName)    ( (This)->lpVtbl -> AddFilter(This,pFilter,pName) )
#define IFilterGraph_RemoveFilter(This,pFilter)    ( (This)->lpVtbl -> RemoveFilter(This,pFilter) )
#define IFilterGraph_EnumFilters(This,ppEnum)    ( (This)->lpVtbl -> EnumFilters(This,ppEnum) )
#define IFilterGraph_FindFilterByName(This,pName,ppFilter)    ( (This)->lpVtbl -> FindFilterByName(This,pName,ppFilter) )
#define IFilterGraph_ConnectDirect(This,ppinOut,ppinIn,pmt)    ( (This)->lpVtbl -> ConnectDirect(This,ppinOut,ppinIn,pmt) )
#define IFilterGraph_Reconnect(This,ppin)    ( (This)->lpVtbl -> Reconnect(This,ppin) )
#define IFilterGraph_Disconnect(This,ppin)    ( (This)->lpVtbl -> Disconnect(This,ppin) )
#define IFilterGraph_SetDefaultSyncSource(This)    ( (This)->lpVtbl -> SetDefaultSyncSource(This) )
#endif
#endif
typedef IFilterGraph *PFILTERGRAPH;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0005_v0_0_s_ifspec;
#ifndef __IEnumFilters_INTERFACE_DEFINED__
#define __IEnumFilters_INTERFACE_DEFINED__
extern const IID IID_IEnumFilters;
typedef struct IEnumFiltersVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumFilters * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumFilters * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumFilters * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumFilters * This, ULONG cFilters, IBaseFilter ** ppFilter, ULONG * pcFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumFilters * This, ULONG cFilters);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumFilters * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumFilters * This, IEnumFilters ** ppEnum);
	END_INTERFACE
}  IEnumFiltersVtbl;
interface IEnumFilters
{
	CONST_VTBL struct IEnumFiltersVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumFilters_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumFilters_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IEnumFilters_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IEnumFilters_Next(This,cFilters,ppFilter,pcFetched)    ( (This)->lpVtbl -> Next(This,cFilters,ppFilter,pcFetched) )
#define IEnumFilters_Skip(This,cFilters)    ( (This)->lpVtbl -> Skip(This,cFilters) )
#define IEnumFilters_Reset(This)    ( (This)->lpVtbl -> Reset(This) )
#define IEnumFilters_Clone(This,ppEnum)    ( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
#endif
typedef IEnumFilters *PENUMFILTERS;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0006_v0_0_s_ifspec;
#ifndef __IMediaFilter_INTERFACE_DEFINED__
#define __IMediaFilter_INTERFACE_DEFINED__
typedef enum _FilterState
{
	State_Stopped = 0,
	State_Paused = (State_Stopped + 1),
	State_Running = (State_Paused + 1)
} FILTER_STATE;
extern const IID IID_IMediaFilter;
typedef struct IMediaFilterVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMediaFilter * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMediaFilter * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMediaFilter * This);
	HRESULT(STDMETHODCALLTYPE * GetClassID) (IMediaFilter * This, CLSID * pClassID);
	HRESULT(STDMETHODCALLTYPE * Stop) (IMediaFilter * This);
	HRESULT(STDMETHODCALLTYPE * Pause) (IMediaFilter * This);
	HRESULT(STDMETHODCALLTYPE * Run) (IMediaFilter * This, REFERENCE_TIME tStart);
	HRESULT(STDMETHODCALLTYPE * GetState) (IMediaFilter * This, DWORD dwMilliSecsTimeout, FILTER_STATE * State);
	HRESULT(STDMETHODCALLTYPE * SetSyncSource) (IMediaFilter * This, IReferenceClock * pClock);
	HRESULT(STDMETHODCALLTYPE * GetSyncSource) (IMediaFilter * This, IReferenceClock ** pClock);
	END_INTERFACE
}  IMediaFilterVtbl;
interface IMediaFilter
{
	CONST_VTBL struct IMediaFilterVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMediaFilter_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMediaFilter_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IMediaFilter_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IMediaFilter_GetClassID(This,pClassID)    ( (This)->lpVtbl -> GetClassID(This,pClassID) )
#define IMediaFilter_Stop(This)    ( (This)->lpVtbl -> Stop(This) )
#define IMediaFilter_Pause(This)    ( (This)->lpVtbl -> Pause(This) )
#define IMediaFilter_Run(This,tStart)    ( (This)->lpVtbl -> Run(This,tStart) )
#define IMediaFilter_GetState(This,dwMilliSecsTimeout,State)    ( (This)->lpVtbl -> GetState(This,dwMilliSecsTimeout,State) )
#define IMediaFilter_SetSyncSource(This,pClock)    ( (This)->lpVtbl -> SetSyncSource(This,pClock) )
#define IMediaFilter_GetSyncSource(This,pClock)    ( (This)->lpVtbl -> GetSyncSource(This,pClock) )
#endif
#endif
typedef IMediaFilter *PMEDIAFILTER;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0007_v0_0_s_ifspec;
#ifndef __IBaseFilter_INTERFACE_DEFINED__
#define __IBaseFilter_INTERFACE_DEFINED__
typedef struct _FilterInfo
{
	WCHAR achName[128];
	IFilterGraph *pGraph;
} FILTER_INFO;
extern const IID IID_IBaseFilter;
typedef struct IBaseFilterVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IBaseFilter * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IBaseFilter * This);
	ULONG(STDMETHODCALLTYPE * Release) (IBaseFilter * This);
	HRESULT(STDMETHODCALLTYPE * GetClassID) (IBaseFilter * This, CLSID * pClassID);
	HRESULT(STDMETHODCALLTYPE * Stop) (IBaseFilter * This);
	HRESULT(STDMETHODCALLTYPE * Pause) (IBaseFilter * This);
	HRESULT(STDMETHODCALLTYPE * Run) (IBaseFilter * This, REFERENCE_TIME tStart);
	HRESULT(STDMETHODCALLTYPE * GetState) (IBaseFilter * This, DWORD dwMilliSecsTimeout, FILTER_STATE * State);
	HRESULT(STDMETHODCALLTYPE * SetSyncSource) (IBaseFilter * This, IReferenceClock * pClock);
	HRESULT(STDMETHODCALLTYPE * GetSyncSource) (IBaseFilter * This, IReferenceClock ** pClock);
	HRESULT(STDMETHODCALLTYPE * EnumPins) (IBaseFilter * This, IEnumPins ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * FindPin) (IBaseFilter * This, LPCWSTR Id, IPin ** ppPin);
	HRESULT(STDMETHODCALLTYPE * QueryFilterInfo) (IBaseFilter * This, FILTER_INFO * pInfo);
	HRESULT(STDMETHODCALLTYPE * JoinFilterGraph) (IBaseFilter * This, IFilterGraph * pGraph, LPCWSTR pName);
	HRESULT(STDMETHODCALLTYPE * QueryVendorInfo) (IBaseFilter * This, LPWSTR * pVendorInfo);
	END_INTERFACE
}  IBaseFilterVtbl;
interface IBaseFilter
{
	CONST_VTBL struct IBaseFilterVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBaseFilter_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBaseFilter_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IBaseFilter_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IBaseFilter_GetClassID(This,pClassID)    ( (This)->lpVtbl -> GetClassID(This,pClassID) )
#define IBaseFilter_Stop(This)    ( (This)->lpVtbl -> Stop(This) )
#define IBaseFilter_Pause(This)    ( (This)->lpVtbl -> Pause(This) )
#define IBaseFilter_Run(This,tStart)    ( (This)->lpVtbl -> Run(This,tStart) )
#define IBaseFilter_GetState(This,dwMilliSecsTimeout,State)    ( (This)->lpVtbl -> GetState(This,dwMilliSecsTimeout,State) )
#define IBaseFilter_SetSyncSource(This,pClock)    ( (This)->lpVtbl -> SetSyncSource(This,pClock) )
#define IBaseFilter_GetSyncSource(This,pClock)    ( (This)->lpVtbl -> GetSyncSource(This,pClock) )
#define IBaseFilter_EnumPins(This,ppEnum)    ( (This)->lpVtbl -> EnumPins(This,ppEnum) )
#define IBaseFilter_FindPin(This,Id,ppPin)    ( (This)->lpVtbl -> FindPin(This,Id,ppPin) )
#define IBaseFilter_QueryFilterInfo(This,pInfo)    ( (This)->lpVtbl -> QueryFilterInfo(This,pInfo) )
#define IBaseFilter_JoinFilterGraph(This,pGraph,pName)    ( (This)->lpVtbl -> JoinFilterGraph(This,pGraph,pName) )
#define IBaseFilter_QueryVendorInfo(This,pVendorInfo)    ( (This)->lpVtbl -> QueryVendorInfo(This,pVendorInfo) )
#endif
#endif
typedef IBaseFilter *PFILTER;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0008_v0_0_s_ifspec;
#ifndef __IReferenceClock_INTERFACE_DEFINED__
#define __IReferenceClock_INTERFACE_DEFINED__
extern const IID IID_IReferenceClock;
typedef struct IReferenceClockVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IReferenceClock * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IReferenceClock * This);
	ULONG(STDMETHODCALLTYPE * Release) (IReferenceClock * This);
	HRESULT(STDMETHODCALLTYPE * GetTime) (IReferenceClock * This, REFERENCE_TIME * pTime);
	HRESULT(STDMETHODCALLTYPE * AdviseTime) (IReferenceClock * This, REFERENCE_TIME baseTime, REFERENCE_TIME streamTime, HEVENT hEvent, DWORD_PTR * pdwAdviseCookie);
	HRESULT(STDMETHODCALLTYPE * AdvisePeriodic) (IReferenceClock * This, REFERENCE_TIME startTime, REFERENCE_TIME periodTime, HSEMAPHORE hSemaphore, DWORD_PTR * pdwAdviseCookie);
	HRESULT(STDMETHODCALLTYPE * Unadvise) (IReferenceClock * This, DWORD_PTR dwAdviseCookie);
	END_INTERFACE
}  IReferenceClockVtbl;
interface IReferenceClock
{
	CONST_VTBL struct IReferenceClockVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IReferenceClock_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IReferenceClock_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IReferenceClock_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IReferenceClock_GetTime(This,pTime)    ( (This)->lpVtbl -> GetTime(This,pTime) )
#define IReferenceClock_AdviseTime(This,baseTime,streamTime,hEvent,pdwAdviseCookie)    ( (This)->lpVtbl -> AdviseTime(This,baseTime,streamTime,hEvent,pdwAdviseCookie) )
#define IReferenceClock_AdvisePeriodic(This,startTime,periodTime,hSemaphore,pdwAdviseCookie)    ( (This)->lpVtbl -> AdvisePeriodic(This,startTime,periodTime,hSemaphore,pdwAdviseCookie) )
#define IReferenceClock_Unadvise(This,dwAdviseCookie)    ( (This)->lpVtbl -> Unadvise(This,dwAdviseCookie) )
#endif
#endif
typedef IReferenceClock *PREFERENCECLOCK;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0009_v0_0_s_ifspec;
#ifndef __IReferenceClockTimerControl_INTERFACE_DEFINED__
#define __IReferenceClockTimerControl_INTERFACE_DEFINED__
extern const IID IID_IReferenceClockTimerControl;
typedef struct IReferenceClockTimerControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IReferenceClockTimerControl * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IReferenceClockTimerControl * This);
	ULONG(STDMETHODCALLTYPE * Release) (IReferenceClockTimerControl * This);
	HRESULT(STDMETHODCALLTYPE * SetDefaultTimerResolution) (IReferenceClockTimerControl * This, REFERENCE_TIME timerResolution);
	HRESULT(STDMETHODCALLTYPE * GetDefaultTimerResolution) (IReferenceClockTimerControl * This, REFERENCE_TIME * pTimerResolution);
	END_INTERFACE
}  IReferenceClockTimerControlVtbl;
interface IReferenceClockTimerControl
{
	CONST_VTBL struct IReferenceClockTimerControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IReferenceClockTimerControl_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IReferenceClockTimerControl_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IReferenceClockTimerControl_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IReferenceClockTimerControl_SetDefaultTimerResolution(This,timerResolution)    ( (This)->lpVtbl -> SetDefaultTimerResolution(This,timerResolution) )
#define IReferenceClockTimerControl_GetDefaultTimerResolution(This,pTimerResolution)    ( (This)->lpVtbl -> GetDefaultTimerResolution(This,pTimerResolution) )
#endif
#endif
#ifndef __IReferenceClock2_INTERFACE_DEFINED__
#define __IReferenceClock2_INTERFACE_DEFINED__
extern const IID IID_IReferenceClock2;
typedef struct IReferenceClock2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IReferenceClock2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IReferenceClock2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IReferenceClock2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTime) (IReferenceClock2 * This, REFERENCE_TIME * pTime);
	HRESULT(STDMETHODCALLTYPE * AdviseTime) (IReferenceClock2 * This, REFERENCE_TIME baseTime, REFERENCE_TIME streamTime, HEVENT hEvent, DWORD_PTR * pdwAdviseCookie);
	HRESULT(STDMETHODCALLTYPE * AdvisePeriodic) (IReferenceClock2 * This, REFERENCE_TIME startTime, REFERENCE_TIME periodTime, HSEMAPHORE hSemaphore, DWORD_PTR * pdwAdviseCookie);
	HRESULT(STDMETHODCALLTYPE * Unadvise) (IReferenceClock2 * This, DWORD_PTR dwAdviseCookie);
	END_INTERFACE
}  IReferenceClock2Vtbl;
interface IReferenceClock2
{
	CONST_VTBL struct IReferenceClock2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IReferenceClock2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IReferenceClock2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IReferenceClock2_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IReferenceClock2_GetTime(This,pTime)    ( (This)->lpVtbl -> GetTime(This,pTime) )
#define IReferenceClock2_AdviseTime(This,baseTime,streamTime,hEvent,pdwAdviseCookie)    ( (This)->lpVtbl -> AdviseTime(This,baseTime,streamTime,hEvent,pdwAdviseCookie) )
#define IReferenceClock2_AdvisePeriodic(This,startTime,periodTime,hSemaphore,pdwAdviseCookie)    ( (This)->lpVtbl -> AdvisePeriodic(This,startTime,periodTime,hSemaphore,pdwAdviseCookie) )
#define IReferenceClock2_Unadvise(This,dwAdviseCookie)    ( (This)->lpVtbl -> Unadvise(This,dwAdviseCookie) )
#endif
#endif
typedef IReferenceClock2 *PREFERENCECLOCK2;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0011_v0_0_s_ifspec;
#ifndef __IMediaSample_INTERFACE_DEFINED__
#define __IMediaSample_INTERFACE_DEFINED__
extern const IID IID_IMediaSample;
typedef struct IMediaSampleVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMediaSample * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMediaSample * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMediaSample * This);
	HRESULT(STDMETHODCALLTYPE * GetPointer) (IMediaSample * This, BYTE ** ppBuffer);
	long (STDMETHODCALLTYPE * GetSize) (IMediaSample * This);
	HRESULT(STDMETHODCALLTYPE * GetTime) (IMediaSample * This, REFERENCE_TIME * pTimeStart, REFERENCE_TIME * pTimeEnd);
	HRESULT(STDMETHODCALLTYPE * SetTime) (IMediaSample * This, REFERENCE_TIME * pTimeStart, REFERENCE_TIME * pTimeEnd);
	HRESULT(STDMETHODCALLTYPE * IsSyncPoint) (IMediaSample * This);
	HRESULT(STDMETHODCALLTYPE * SetSyncPoint) (IMediaSample * This, BOOL bIsSyncPoint);
	HRESULT(STDMETHODCALLTYPE * IsPreroll) (IMediaSample * This);
	HRESULT(STDMETHODCALLTYPE * SetPreroll) (IMediaSample * This, BOOL bIsPreroll);
	long (STDMETHODCALLTYPE * GetActualDataLength) (IMediaSample * This);
	HRESULT(STDMETHODCALLTYPE * SetActualDataLength) (IMediaSample * This, long __MIDL__IMediaSample0000);
	HRESULT(STDMETHODCALLTYPE * GetMediaType) (IMediaSample * This, AM_MEDIA_TYPE ** ppMediaType);
	HRESULT(STDMETHODCALLTYPE * SetMediaType) (IMediaSample * This, AM_MEDIA_TYPE * pMediaType);
	HRESULT(STDMETHODCALLTYPE * IsDiscontinuity) (IMediaSample * This);
	HRESULT(STDMETHODCALLTYPE * SetDiscontinuity) (IMediaSample * This, BOOL bDiscontinuity);
	HRESULT(STDMETHODCALLTYPE * GetMediaTime) (IMediaSample * This, LONGLONG * pTimeStart, LONGLONG * pTimeEnd);
	HRESULT(STDMETHODCALLTYPE * SetMediaTime) (IMediaSample * This, LONGLONG * pTimeStart, LONGLONG * pTimeEnd);
	END_INTERFACE
}  IMediaSampleVtbl;
interface IMediaSample
{
	CONST_VTBL struct IMediaSampleVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMediaSample_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMediaSample_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IMediaSample_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IMediaSample_GetPointer(This,ppBuffer)    ( (This)->lpVtbl -> GetPointer(This,ppBuffer) )
#define IMediaSample_GetSize(This)    ( (This)->lpVtbl -> GetSize(This) )
#define IMediaSample_GetTime(This,pTimeStart,pTimeEnd)    ( (This)->lpVtbl -> GetTime(This,pTimeStart,pTimeEnd) )
#define IMediaSample_SetTime(This,pTimeStart,pTimeEnd)    ( (This)->lpVtbl -> SetTime(This,pTimeStart,pTimeEnd) )
#define IMediaSample_IsSyncPoint(This)    ( (This)->lpVtbl -> IsSyncPoint(This) )
#define IMediaSample_SetSyncPoint(This,bIsSyncPoint)    ( (This)->lpVtbl -> SetSyncPoint(This,bIsSyncPoint) )
#define IMediaSample_IsPreroll(This)    ( (This)->lpVtbl -> IsPreroll(This) )
#define IMediaSample_SetPreroll(This,bIsPreroll)    ( (This)->lpVtbl -> SetPreroll(This,bIsPreroll) )
#define IMediaSample_GetActualDataLength(This)    ( (This)->lpVtbl -> GetActualDataLength(This) )
#define IMediaSample_SetActualDataLength(This,__MIDL__IMediaSample0000)    ( (This)->lpVtbl -> SetActualDataLength(This,__MIDL__IMediaSample0000) )
#define IMediaSample_GetMediaType(This,ppMediaType)    ( (This)->lpVtbl -> GetMediaType(This,ppMediaType) )
#define IMediaSample_SetMediaType(This,pMediaType)    ( (This)->lpVtbl -> SetMediaType(This,pMediaType) )
#define IMediaSample_IsDiscontinuity(This)    ( (This)->lpVtbl -> IsDiscontinuity(This) )
#define IMediaSample_SetDiscontinuity(This,bDiscontinuity)    ( (This)->lpVtbl -> SetDiscontinuity(This,bDiscontinuity) )
#define IMediaSample_GetMediaTime(This,pTimeStart,pTimeEnd)    ( (This)->lpVtbl -> GetMediaTime(This,pTimeStart,pTimeEnd) )
#define IMediaSample_SetMediaTime(This,pTimeStart,pTimeEnd)    ( (This)->lpVtbl -> SetMediaTime(This,pTimeStart,pTimeEnd) )
#endif
#endif
typedef IMediaSample *PMEDIASAMPLE;
enum tagAM_SAMPLE_PROPERTY_FLAGS
{
	AM_SAMPLE_SPLICEPOINT = 0x1,
	AM_SAMPLE_PREROLL = 0x2,
	AM_SAMPLE_DATADISCONTINUITY = 0x4,
	AM_SAMPLE_TYPECHANGED = 0x8,
	AM_SAMPLE_TIMEVALID = 0x10,
	AM_SAMPLE_TIMEDISCONTINUITY = 0x40,
	AM_SAMPLE_FLUSH_ON_PAUSE = 0x80,
	AM_SAMPLE_STOPVALID = 0x100,
	AM_SAMPLE_ENDOFSTREAM = 0x200,
	AM_STREAM_MEDIA = 0,
	AM_STREAM_CONTROL = 1
};
typedef struct tagAM_SAMPLE2_PROPERTIES
{
	DWORD cbData;
	DWORD dwTypeSpecificFlags;
	DWORD dwSampleFlags;
	LONG lActual;
	REFERENCE_TIME tStart;
	REFERENCE_TIME tStop;
	DWORD dwStreamId;
	AM_MEDIA_TYPE *pMediaType;
	BYTE *pbBuffer;
	LONG cbBuffer;
} AM_SAMPLE2_PROPERTIES;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0012_v0_0_s_ifspec;
#ifndef __IMediaSample2_INTERFACE_DEFINED__
#define __IMediaSample2_INTERFACE_DEFINED__
extern const IID IID_IMediaSample2;
typedef struct IMediaSample2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMediaSample2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMediaSample2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMediaSample2 * This);
	HRESULT(STDMETHODCALLTYPE * GetPointer) (IMediaSample2 * This, BYTE ** ppBuffer);
	long (STDMETHODCALLTYPE * GetSize) (IMediaSample2 * This);
	HRESULT(STDMETHODCALLTYPE * GetTime) (IMediaSample2 * This, REFERENCE_TIME * pTimeStart, REFERENCE_TIME * pTimeEnd);
	HRESULT(STDMETHODCALLTYPE * SetTime) (IMediaSample2 * This, REFERENCE_TIME * pTimeStart, REFERENCE_TIME * pTimeEnd);
	HRESULT(STDMETHODCALLTYPE * IsSyncPoint) (IMediaSample2 * This);
	HRESULT(STDMETHODCALLTYPE * SetSyncPoint) (IMediaSample2 * This, BOOL bIsSyncPoint);
	HRESULT(STDMETHODCALLTYPE * IsPreroll) (IMediaSample2 * This);
	HRESULT(STDMETHODCALLTYPE * SetPreroll) (IMediaSample2 * This, BOOL bIsPreroll);
	long (STDMETHODCALLTYPE * GetActualDataLength) (IMediaSample2 * This);
	HRESULT(STDMETHODCALLTYPE * SetActualDataLength) (IMediaSample2 * This, long __MIDL__IMediaSample0000);
	HRESULT(STDMETHODCALLTYPE * GetMediaType) (IMediaSample2 * This, AM_MEDIA_TYPE ** ppMediaType);
	HRESULT(STDMETHODCALLTYPE * SetMediaType) (IMediaSample2 * This, AM_MEDIA_TYPE * pMediaType);
	HRESULT(STDMETHODCALLTYPE * IsDiscontinuity) (IMediaSample2 * This);
	HRESULT(STDMETHODCALLTYPE * SetDiscontinuity) (IMediaSample2 * This, BOOL bDiscontinuity);
	HRESULT(STDMETHODCALLTYPE * GetMediaTime) (IMediaSample2 * This, LONGLONG * pTimeStart, LONGLONG * pTimeEnd);
	HRESULT(STDMETHODCALLTYPE * SetMediaTime) (IMediaSample2 * This, LONGLONG * pTimeStart, LONGLONG * pTimeEnd);
	HRESULT(STDMETHODCALLTYPE * GetProperties) (IMediaSample2 * This, DWORD cbProperties, BYTE * pbProperties);
	HRESULT(STDMETHODCALLTYPE * SetProperties) (IMediaSample2 * This, DWORD cbProperties, const BYTE * pbProperties);
	END_INTERFACE
}  IMediaSample2Vtbl;
interface IMediaSample2
{
	CONST_VTBL struct IMediaSample2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMediaSample2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMediaSample2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IMediaSample2_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IMediaSample2_GetPointer(This,ppBuffer)    ( (This)->lpVtbl -> GetPointer(This,ppBuffer) )
#define IMediaSample2_GetSize(This)    ( (This)->lpVtbl -> GetSize(This) )
#define IMediaSample2_GetTime(This,pTimeStart,pTimeEnd)    ( (This)->lpVtbl -> GetTime(This,pTimeStart,pTimeEnd) )
#define IMediaSample2_SetTime(This,pTimeStart,pTimeEnd)    ( (This)->lpVtbl -> SetTime(This,pTimeStart,pTimeEnd) )
#define IMediaSample2_IsSyncPoint(This)    ( (This)->lpVtbl -> IsSyncPoint(This) )
#define IMediaSample2_SetSyncPoint(This,bIsSyncPoint)    ( (This)->lpVtbl -> SetSyncPoint(This,bIsSyncPoint) )
#define IMediaSample2_IsPreroll(This)    ( (This)->lpVtbl -> IsPreroll(This) )
#define IMediaSample2_SetPreroll(This,bIsPreroll)    ( (This)->lpVtbl -> SetPreroll(This,bIsPreroll) )
#define IMediaSample2_GetActualDataLength(This)    ( (This)->lpVtbl -> GetActualDataLength(This) )
#define IMediaSample2_SetActualDataLength(This,__MIDL__IMediaSample0000)    ( (This)->lpVtbl -> SetActualDataLength(This,__MIDL__IMediaSample0000) )
#define IMediaSample2_GetMediaType(This,ppMediaType)    ( (This)->lpVtbl -> GetMediaType(This,ppMediaType) )
#define IMediaSample2_SetMediaType(This,pMediaType)    ( (This)->lpVtbl -> SetMediaType(This,pMediaType) )
#define IMediaSample2_IsDiscontinuity(This)    ( (This)->lpVtbl -> IsDiscontinuity(This) )
#define IMediaSample2_SetDiscontinuity(This,bDiscontinuity)    ( (This)->lpVtbl -> SetDiscontinuity(This,bDiscontinuity) )
#define IMediaSample2_GetMediaTime(This,pTimeStart,pTimeEnd)    ( (This)->lpVtbl -> GetMediaTime(This,pTimeStart,pTimeEnd) )
#define IMediaSample2_SetMediaTime(This,pTimeStart,pTimeEnd)    ( (This)->lpVtbl -> SetMediaTime(This,pTimeStart,pTimeEnd) )
#define IMediaSample2_GetProperties(This,cbProperties,pbProperties)    ( (This)->lpVtbl -> GetProperties(This,cbProperties,pbProperties) )
#define IMediaSample2_SetProperties(This,cbProperties,pbProperties)    ( (This)->lpVtbl -> SetProperties(This,cbProperties,pbProperties) )
#endif
#endif
typedef IMediaSample2 *PMEDIASAMPLE2;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0013_v0_0_s_ifspec;
#ifndef __IMediaSample2Config_INTERFACE_DEFINED__
#define __IMediaSample2Config_INTERFACE_DEFINED__
extern const IID IID_IMediaSample2Config;
typedef struct IMediaSample2ConfigVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMediaSample2Config * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMediaSample2Config * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMediaSample2Config * This);
	HRESULT(STDMETHODCALLTYPE * GetSurface) (IMediaSample2Config * This, IUnknown ** ppDirect3DSurface9);
	END_INTERFACE
}  IMediaSample2ConfigVtbl;
interface IMediaSample2Config
{
	CONST_VTBL struct IMediaSample2ConfigVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMediaSample2Config_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMediaSample2Config_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IMediaSample2Config_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IMediaSample2Config_GetSurface(This,ppDirect3DSurface9)    ( (This)->lpVtbl -> GetSurface(This,ppDirect3DSurface9) )
#endif
#endif
#define AM_GBF_PREVFRAMESKIPPED 1
#define AM_GBF_NOTASYNCPOINT 2
#define AM_GBF_NOWAIT 4
#define AM_GBF_NODDSURFACELOCK 8
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0014_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0014_v0_0_s_ifspec;
#ifndef __IMemAllocator_INTERFACE_DEFINED__
#define __IMemAllocator_INTERFACE_DEFINED__
extern const IID IID_IMemAllocator;
typedef struct IMemAllocatorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMemAllocator * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMemAllocator * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMemAllocator * This);
	HRESULT(STDMETHODCALLTYPE * SetProperties) (IMemAllocator * This, ALLOCATOR_PROPERTIES * pRequest, ALLOCATOR_PROPERTIES * pActual);
	HRESULT(STDMETHODCALLTYPE * GetProperties) (IMemAllocator * This, ALLOCATOR_PROPERTIES * pProps);
	HRESULT(STDMETHODCALLTYPE * Commit) (IMemAllocator * This);
	HRESULT(STDMETHODCALLTYPE * Decommit) (IMemAllocator * This);
	HRESULT(STDMETHODCALLTYPE * GetBuffer) (IMemAllocator * This, IMediaSample ** ppBuffer, REFERENCE_TIME * pStartTime, REFERENCE_TIME * pEndTime, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * ReleaseBuffer) (IMemAllocator * This, IMediaSample * pBuffer);
	END_INTERFACE
}  IMemAllocatorVtbl;
interface IMemAllocator
{
	CONST_VTBL struct IMemAllocatorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMemAllocator_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMemAllocator_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IMemAllocator_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IMemAllocator_SetProperties(This,pRequest,pActual)    ( (This)->lpVtbl -> SetProperties(This,pRequest,pActual) )
#define IMemAllocator_GetProperties(This,pProps)    ( (This)->lpVtbl -> GetProperties(This,pProps) )
#define IMemAllocator_Commit(This)    ( (This)->lpVtbl -> Commit(This) )
#define IMemAllocator_Decommit(This)    ( (This)->lpVtbl -> Decommit(This) )
#define IMemAllocator_GetBuffer(This,ppBuffer,pStartTime,pEndTime,dwFlags)    ( (This)->lpVtbl -> GetBuffer(This,ppBuffer,pStartTime,pEndTime,dwFlags) )
#define IMemAllocator_ReleaseBuffer(This,pBuffer)    ( (This)->lpVtbl -> ReleaseBuffer(This,pBuffer) )
#endif
#endif
typedef IMemAllocator *PMEMALLOCATOR;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0015_v0_0_s_ifspec;
#ifndef __IMemAllocatorCallbackTemp_INTERFACE_DEFINED__
#define __IMemAllocatorCallbackTemp_INTERFACE_DEFINED__
extern const IID IID_IMemAllocatorCallbackTemp;
typedef struct IMemAllocatorCallbackTempVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMemAllocatorCallbackTemp * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMemAllocatorCallbackTemp * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMemAllocatorCallbackTemp * This);
	HRESULT(STDMETHODCALLTYPE * SetProperties) (IMemAllocatorCallbackTemp * This, ALLOCATOR_PROPERTIES * pRequest, ALLOCATOR_PROPERTIES * pActual);
	HRESULT(STDMETHODCALLTYPE * GetProperties) (IMemAllocatorCallbackTemp * This, ALLOCATOR_PROPERTIES * pProps);
	HRESULT(STDMETHODCALLTYPE * Commit) (IMemAllocatorCallbackTemp * This);
	HRESULT(STDMETHODCALLTYPE * Decommit) (IMemAllocatorCallbackTemp * This);
	HRESULT(STDMETHODCALLTYPE * GetBuffer) (IMemAllocatorCallbackTemp * This, IMediaSample ** ppBuffer, REFERENCE_TIME * pStartTime, REFERENCE_TIME * pEndTime, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * ReleaseBuffer) (IMemAllocatorCallbackTemp * This, IMediaSample * pBuffer);
	HRESULT(STDMETHODCALLTYPE * SetNotify) (IMemAllocatorCallbackTemp * This, IMemAllocatorNotifyCallbackTemp * pNotify);
	HRESULT(STDMETHODCALLTYPE * GetFreeCount) (IMemAllocatorCallbackTemp * This, LONG * plBuffersFree);
	END_INTERFACE
}  IMemAllocatorCallbackTempVtbl;
interface IMemAllocatorCallbackTemp
{
	CONST_VTBL struct IMemAllocatorCallbackTempVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMemAllocatorCallbackTemp_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMemAllocatorCallbackTemp_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IMemAllocatorCallbackTemp_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IMemAllocatorCallbackTemp_SetProperties(This,pRequest,pActual)    ( (This)->lpVtbl -> SetProperties(This,pRequest,pActual) )
#define IMemAllocatorCallbackTemp_GetProperties(This,pProps)    ( (This)->lpVtbl -> GetProperties(This,pProps) )
#define IMemAllocatorCallbackTemp_Commit(This)    ( (This)->lpVtbl -> Commit(This) )
#define IMemAllocatorCallbackTemp_Decommit(This)    ( (This)->lpVtbl -> Decommit(This) )
#define IMemAllocatorCallbackTemp_GetBuffer(This,ppBuffer,pStartTime,pEndTime,dwFlags)    ( (This)->lpVtbl -> GetBuffer(This,ppBuffer,pStartTime,pEndTime,dwFlags) )
#define IMemAllocatorCallbackTemp_ReleaseBuffer(This,pBuffer)    ( (This)->lpVtbl -> ReleaseBuffer(This,pBuffer) )
#define IMemAllocatorCallbackTemp_SetNotify(This,pNotify)    ( (This)->lpVtbl -> SetNotify(This,pNotify) )
#define IMemAllocatorCallbackTemp_GetFreeCount(This,plBuffersFree)    ( (This)->lpVtbl -> GetFreeCount(This,plBuffersFree) )
#endif
#endif
#ifndef __IMemAllocatorNotifyCallbackTemp_INTERFACE_DEFINED__
#define __IMemAllocatorNotifyCallbackTemp_INTERFACE_DEFINED__
extern const IID IID_IMemAllocatorNotifyCallbackTemp;
typedef struct IMemAllocatorNotifyCallbackTempVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMemAllocatorNotifyCallbackTemp * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMemAllocatorNotifyCallbackTemp * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMemAllocatorNotifyCallbackTemp * This);
	HRESULT(STDMETHODCALLTYPE * NotifyRelease) (IMemAllocatorNotifyCallbackTemp * This);
	END_INTERFACE
}  IMemAllocatorNotifyCallbackTempVtbl;
interface IMemAllocatorNotifyCallbackTemp
{
	CONST_VTBL struct IMemAllocatorNotifyCallbackTempVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMemAllocatorNotifyCallbackTemp_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMemAllocatorNotifyCallbackTemp_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IMemAllocatorNotifyCallbackTemp_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IMemAllocatorNotifyCallbackTemp_NotifyRelease(This)    ( (This)->lpVtbl -> NotifyRelease(This) )
#endif
#endif
#ifndef __IMemInputPin_INTERFACE_DEFINED__
#define __IMemInputPin_INTERFACE_DEFINED__
extern const IID IID_IMemInputPin;
typedef struct IMemInputPinVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMemInputPin * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMemInputPin * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMemInputPin * This);
	HRESULT(STDMETHODCALLTYPE * GetAllocator) (IMemInputPin * This, IMemAllocator ** ppAllocator);
	HRESULT(STDMETHODCALLTYPE * NotifyAllocator) (IMemInputPin * This, IMemAllocator * pAllocator, BOOL bReadOnly);
	HRESULT(STDMETHODCALLTYPE * GetAllocatorRequirements) (IMemInputPin * This, ALLOCATOR_PROPERTIES * pProps);
	HRESULT(STDMETHODCALLTYPE * Receive) (IMemInputPin * This, IMediaSample * pSample);
	HRESULT(STDMETHODCALLTYPE * ReceiveMultiple) (IMemInputPin * This, IMediaSample ** pSamples, long nSamples, long *nSamplesProcessed);
	HRESULT(STDMETHODCALLTYPE * ReceiveCanBlock) (IMemInputPin * This);
	END_INTERFACE
}  IMemInputPinVtbl;
interface IMemInputPin
{
	CONST_VTBL struct IMemInputPinVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMemInputPin_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMemInputPin_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IMemInputPin_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IMemInputPin_GetAllocator(This,ppAllocator)    ( (This)->lpVtbl -> GetAllocator(This,ppAllocator) )
#define IMemInputPin_NotifyAllocator(This,pAllocator,bReadOnly)    ( (This)->lpVtbl -> NotifyAllocator(This,pAllocator,bReadOnly) )
#define IMemInputPin_GetAllocatorRequirements(This,pProps)    ( (This)->lpVtbl -> GetAllocatorRequirements(This,pProps) )
#define IMemInputPin_Receive(This,pSample)    ( (This)->lpVtbl -> Receive(This,pSample) )
#define IMemInputPin_ReceiveMultiple(This,pSamples,nSamples,nSamplesProcessed)    ( (This)->lpVtbl -> ReceiveMultiple(This,pSamples,nSamples,nSamplesProcessed) )
#define IMemInputPin_ReceiveCanBlock(This)    ( (This)->lpVtbl -> ReceiveCanBlock(This) )
#endif
#endif
typedef IMemInputPin *PMEMINPUTPIN;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0018_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0018_v0_0_s_ifspec;
#ifndef __IAMovieSetup_INTERFACE_DEFINED__
#define __IAMovieSetup_INTERFACE_DEFINED__
extern const IID IID_IAMovieSetup;
typedef struct IAMovieSetupVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAMovieSetup * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAMovieSetup * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAMovieSetup * This);
	HRESULT(STDMETHODCALLTYPE * Register) (IAMovieSetup * This);
	HRESULT(STDMETHODCALLTYPE * Unregister) (IAMovieSetup * This);
	END_INTERFACE
}  IAMovieSetupVtbl;
interface IAMovieSetup
{
	CONST_VTBL struct IAMovieSetupVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMovieSetup_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAMovieSetup_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAMovieSetup_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAMovieSetup_Register(This)    ( (This)->lpVtbl -> Register(This) )
#define IAMovieSetup_Unregister(This)    ( (This)->lpVtbl -> Unregister(This) )
#endif
#endif
typedef IAMovieSetup *PAMOVIESETUP;
typedef enum AM_SEEKING_SeekingFlags
{
	AM_SEEKING_NoPositioning = 0,
	AM_SEEKING_AbsolutePositioning = 0x1,
	AM_SEEKING_RelativePositioning = 0x2,
	AM_SEEKING_IncrementalPositioning = 0x3,
	AM_SEEKING_PositioningBitsMask = 0x3,
	AM_SEEKING_SeekToKeyFrame = 0x4,
	AM_SEEKING_ReturnTime = 0x8,
	AM_SEEKING_Segment = 0x10,
	AM_SEEKING_NoFlush = 0x20
} AM_SEEKING_SEEKING_FLAGS;
typedef enum AM_SEEKING_SeekingCapabilities
{
	AM_SEEKING_CanSeekAbsolute = 0x1,
	AM_SEEKING_CanSeekForwards = 0x2,
	AM_SEEKING_CanSeekBackwards = 0x4,
	AM_SEEKING_CanGetCurrentPos = 0x8,
	AM_SEEKING_CanGetStopPos = 0x10,
	AM_SEEKING_CanGetDuration = 0x20,
	AM_SEEKING_CanPlayBackwards = 0x40,
	AM_SEEKING_CanDoSegments = 0x80,
	AM_SEEKING_Source = 0x100
} AM_SEEKING_SEEKING_CAPABILITIES;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0019_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0019_v0_0_s_ifspec;
#ifndef __IMediaSeeking_INTERFACE_DEFINED__
#define __IMediaSeeking_INTERFACE_DEFINED__
extern const IID IID_IMediaSeeking;
typedef struct IMediaSeekingVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMediaSeeking * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMediaSeeking * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMediaSeeking * This);
	HRESULT(STDMETHODCALLTYPE * GetCapabilities) (IMediaSeeking * This, DWORD * pCapabilities);
	HRESULT(STDMETHODCALLTYPE * CheckCapabilities) (IMediaSeeking * This, DWORD * pCapabilities);
	HRESULT(STDMETHODCALLTYPE * IsFormatSupported) (IMediaSeeking * This, const GUID * pFormat);
	HRESULT(STDMETHODCALLTYPE * QueryPreferredFormat) (IMediaSeeking * This, GUID * pFormat);
	HRESULT(STDMETHODCALLTYPE * GetTimeFormat) (IMediaSeeking * This, GUID * pFormat);
	HRESULT(STDMETHODCALLTYPE * IsUsingTimeFormat) (IMediaSeeking * This, const GUID * pFormat);
	HRESULT(STDMETHODCALLTYPE * SetTimeFormat) (IMediaSeeking * This, const GUID * pFormat);
	HRESULT(STDMETHODCALLTYPE * GetDuration) (IMediaSeeking * This, LONGLONG * pDuration);
	HRESULT(STDMETHODCALLTYPE * GetStopPosition) (IMediaSeeking * This, LONGLONG * pStop);
	HRESULT(STDMETHODCALLTYPE * GetCurrentPosition) (IMediaSeeking * This, LONGLONG * pCurrent);
	HRESULT(STDMETHODCALLTYPE * ConvertTimeFormat) (IMediaSeeking * This, LONGLONG * pTarget, const GUID * pTargetFormat, LONGLONG Source, const GUID * pSourceFormat);
	HRESULT(STDMETHODCALLTYPE * SetPositions) (IMediaSeeking * This, LONGLONG * pCurrent, DWORD dwCurrentFlags, LONGLONG * pStop, DWORD dwStopFlags);
	HRESULT(STDMETHODCALLTYPE * GetPositions) (IMediaSeeking * This, LONGLONG * pCurrent, LONGLONG * pStop);
	HRESULT(STDMETHODCALLTYPE * GetAvailable) (IMediaSeeking * This, LONGLONG * pEarliest, LONGLONG * pLatest);
	HRESULT(STDMETHODCALLTYPE * SetRate) (IMediaSeeking * This, double dRate);
	HRESULT(STDMETHODCALLTYPE * GetRate) (IMediaSeeking * This, double *pdRate);
	HRESULT(STDMETHODCALLTYPE * GetPreroll) (IMediaSeeking * This, LONGLONG * pllPreroll);
	END_INTERFACE
}  IMediaSeekingVtbl;
interface IMediaSeeking
{
	CONST_VTBL struct IMediaSeekingVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMediaSeeking_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMediaSeeking_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IMediaSeeking_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IMediaSeeking_GetCapabilities(This,pCapabilities)    ( (This)->lpVtbl -> GetCapabilities(This,pCapabilities) )
#define IMediaSeeking_CheckCapabilities(This,pCapabilities)    ( (This)->lpVtbl -> CheckCapabilities(This,pCapabilities) )
#define IMediaSeeking_IsFormatSupported(This,pFormat)    ( (This)->lpVtbl -> IsFormatSupported(This,pFormat) )
#define IMediaSeeking_QueryPreferredFormat(This,pFormat)    ( (This)->lpVtbl -> QueryPreferredFormat(This,pFormat) )
#define IMediaSeeking_GetTimeFormat(This,pFormat)    ( (This)->lpVtbl -> GetTimeFormat(This,pFormat) )
#define IMediaSeeking_IsUsingTimeFormat(This,pFormat)    ( (This)->lpVtbl -> IsUsingTimeFormat(This,pFormat) )
#define IMediaSeeking_SetTimeFormat(This,pFormat)    ( (This)->lpVtbl -> SetTimeFormat(This,pFormat) )
#define IMediaSeeking_GetDuration(This,pDuration)    ( (This)->lpVtbl -> GetDuration(This,pDuration) )
#define IMediaSeeking_GetStopPosition(This,pStop)    ( (This)->lpVtbl -> GetStopPosition(This,pStop) )
#define IMediaSeeking_GetCurrentPosition(This,pCurrent)    ( (This)->lpVtbl -> GetCurrentPosition(This,pCurrent) )
#define IMediaSeeking_ConvertTimeFormat(This,pTarget,pTargetFormat,Source,pSourceFormat)    ( (This)->lpVtbl -> ConvertTimeFormat(This,pTarget,pTargetFormat,Source,pSourceFormat) )
#define IMediaSeeking_SetPositions(This,pCurrent,dwCurrentFlags,pStop,dwStopFlags)    ( (This)->lpVtbl -> SetPositions(This,pCurrent,dwCurrentFlags,pStop,dwStopFlags) )
#define IMediaSeeking_GetPositions(This,pCurrent,pStop)    ( (This)->lpVtbl -> GetPositions(This,pCurrent,pStop) )
#define IMediaSeeking_GetAvailable(This,pEarliest,pLatest)    ( (This)->lpVtbl -> GetAvailable(This,pEarliest,pLatest) )
#define IMediaSeeking_SetRate(This,dRate)    ( (This)->lpVtbl -> SetRate(This,dRate) )
#define IMediaSeeking_GetRate(This,pdRate)    ( (This)->lpVtbl -> GetRate(This,pdRate) )
#define IMediaSeeking_GetPreroll(This,pllPreroll)    ( (This)->lpVtbl -> GetPreroll(This,pllPreroll) )
#endif
#endif
typedef IMediaSeeking *PMEDIASEEKING;
enum tagAM_MEDIAEVENT_FLAGS
{
	AM_MEDIAEVENT_NONOTIFY = 0x01
};
typedef struct REGFILTER
{
	CLSID Clsid;
	LPWSTR Name;
} REGFILTER;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0020_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0020_v0_0_s_ifspec;
#ifndef __IEnumRegFilters_INTERFACE_DEFINED__
#define __IEnumRegFilters_INTERFACE_DEFINED__
extern const IID IID_IEnumRegFilters;
typedef struct IEnumRegFiltersVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEnumRegFilters * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEnumRegFilters * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEnumRegFilters * This);
	HRESULT(STDMETHODCALLTYPE * Next) (IEnumRegFilters * This, ULONG cFilters, REGFILTER ** apRegFilter, ULONG * pcFetched);
	HRESULT(STDMETHODCALLTYPE * Skip) (IEnumRegFilters * This, ULONG cFilters);
	HRESULT(STDMETHODCALLTYPE * Reset) (IEnumRegFilters * This);
	HRESULT(STDMETHODCALLTYPE * Clone) (IEnumRegFilters * This, IEnumRegFilters ** ppEnum);
	END_INTERFACE
}  IEnumRegFiltersVtbl;
interface IEnumRegFilters
{
	CONST_VTBL struct IEnumRegFiltersVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumRegFilters_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumRegFilters_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IEnumRegFilters_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IEnumRegFilters_Next(This,cFilters,apRegFilter,pcFetched)    ( (This)->lpVtbl -> Next(This,cFilters,apRegFilter,pcFetched) )
#define IEnumRegFilters_Skip(This,cFilters)    ( (This)->lpVtbl -> Skip(This,cFilters) )
#define IEnumRegFilters_Reset(This)    ( (This)->lpVtbl -> Reset(This) )
#define IEnumRegFilters_Clone(This,ppEnum)    ( (This)->lpVtbl -> Clone(This,ppEnum) )
#endif
#endif
typedef IEnumRegFilters *PENUMREGFILTERS;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0021_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0021_v0_0_s_ifspec;
#ifndef __IFilterMapper_INTERFACE_DEFINED__
#define __IFilterMapper_INTERFACE_DEFINED__
enum __MIDL_IFilterMapper_0001
{
	MERIT_PREFERRED = 0x800000,
	MERIT_NORMAL = 0x600000,
	MERIT_UNLIKELY = 0x400000,
	MERIT_DO_NOT_USE = 0x200000,
	MERIT_SW_COMPRESSOR = 0x100000,
	MERIT_HW_COMPRESSOR = 0x100050
};
extern const IID IID_IFilterMapper;
typedef struct IFilterMapperVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFilterMapper * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFilterMapper * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFilterMapper * This);
	HRESULT(STDMETHODCALLTYPE * RegisterFilter) (IFilterMapper * This, CLSID clsid, LPCWSTR Name, DWORD dwMerit);
	HRESULT(STDMETHODCALLTYPE * RegisterFilterInstance) (IFilterMapper * This, CLSID clsid, LPCWSTR Name, CLSID * MRId);
	HRESULT(STDMETHODCALLTYPE * RegisterPin) (IFilterMapper * This, CLSID Filter, LPCWSTR Name, BOOL bRendered, BOOL bOutput, BOOL bZero, BOOL bMany, CLSID ConnectsToFilter, LPCWSTR ConnectsToPin);
	HRESULT(STDMETHODCALLTYPE * RegisterPinType) (IFilterMapper * This, CLSID clsFilter, LPCWSTR strName, CLSID clsMajorType, CLSID clsSubType);
	HRESULT(STDMETHODCALLTYPE * UnregisterFilter) (IFilterMapper * This, CLSID Filter);
	HRESULT(STDMETHODCALLTYPE * UnregisterFilterInstance) (IFilterMapper * This, CLSID MRId);
	HRESULT(STDMETHODCALLTYPE * UnregisterPin) (IFilterMapper * This, CLSID Filter, LPCWSTR Name);
	HRESULT(STDMETHODCALLTYPE * EnumMatchingFilters) (IFilterMapper * This, IEnumRegFilters ** ppEnum, DWORD dwMerit, BOOL bInputNeeded, CLSID clsInMaj, CLSID clsInSub, BOOL bRender, BOOL bOututNeeded, CLSID clsOutMaj, CLSID clsOutSub);
	END_INTERFACE
}  IFilterMapperVtbl;
interface IFilterMapper
{
	CONST_VTBL struct IFilterMapperVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFilterMapper_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFilterMapper_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IFilterMapper_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IFilterMapper_RegisterFilter(This,clsid,Name,dwMerit)    ( (This)->lpVtbl -> RegisterFilter(This,clsid,Name,dwMerit) )
#define IFilterMapper_RegisterFilterInstance(This,clsid,Name,MRId)    ( (This)->lpVtbl -> RegisterFilterInstance(This,clsid,Name,MRId) )
#define IFilterMapper_RegisterPin(This,Filter,Name,bRendered,bOutput,bZero,bMany,ConnectsToFilter,ConnectsToPin)    ( (This)->lpVtbl -> RegisterPin(This,Filter,Name,bRendered,bOutput,bZero,bMany,ConnectsToFilter,ConnectsToPin) )
#define IFilterMapper_RegisterPinType(This,clsFilter,strName,clsMajorType,clsSubType)    ( (This)->lpVtbl -> RegisterPinType(This,clsFilter,strName,clsMajorType,clsSubType) )
#define IFilterMapper_UnregisterFilter(This,Filter)    ( (This)->lpVtbl -> UnregisterFilter(This,Filter) )
#define IFilterMapper_UnregisterFilterInstance(This,MRId)    ( (This)->lpVtbl -> UnregisterFilterInstance(This,MRId) )
#define IFilterMapper_UnregisterPin(This,Filter,Name)    ( (This)->lpVtbl -> UnregisterPin(This,Filter,Name) )
#define IFilterMapper_EnumMatchingFilters(This,ppEnum,dwMerit,bInputNeeded,clsInMaj,clsInSub,bRender,bOututNeeded,clsOutMaj,clsOutSub)    ( (This)->lpVtbl -> EnumMatchingFilters(This,ppEnum,dwMerit,bInputNeeded,clsInMaj,clsInSub,bRender,bOututNeeded,clsOutMaj,clsOutSub) )
#endif
#endif
typedef struct REGPINTYPES
{
	const CLSID *clsMajorType;
	const CLSID *clsMinorType;
} REGPINTYPES;
typedef struct REGFILTERPINS
{
	LPWSTR strName;
	BOOL bRendered;
	BOOL bOutput;
	BOOL bZero;
	BOOL bMany;
	const CLSID *clsConnectsToFilter;
	const WCHAR *strConnectsToPin;
	UINT nMediaTypes;
	const REGPINTYPES *lpMediaType;
} REGFILTERPINS;
typedef struct REGPINMEDIUM
{
	CLSID clsMedium;
	DWORD dw1;
	DWORD dw2;
} REGPINMEDIUM;
enum __MIDL___MIDL_itf_strmif_0000_0022_0001
{
	REG_PINFLAG_B_ZERO = 0x1,
	REG_PINFLAG_B_RENDERER = 0x2,
	REG_PINFLAG_B_MANY = 0x4,
	REG_PINFLAG_B_OUTPUT = 0x8
};
typedef struct REGFILTERPINS2
{
	DWORD dwFlags;
	UINT cInstances;
	UINT nMediaTypes;
	const REGPINTYPES *lpMediaType;
	UINT nMediums;
	const REGPINMEDIUM *lpMedium;
	const CLSID *clsPinCategory;
} REGFILTERPINS2;
typedef struct REGFILTER2
{
	DWORD dwVersion;
	DWORD dwMerit;
	union
	{
		struct
		{
			ULONG cPins;
			const REGFILTERPINS *rgPins;
		};
		struct
		{
			ULONG cPins2;
			const REGFILTERPINS2 *rgPins2;
		};
	};
} REGFILTER2;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0022_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0022_v0_0_s_ifspec;
#ifndef __IFilterMapper2_INTERFACE_DEFINED__
#define __IFilterMapper2_INTERFACE_DEFINED__
extern const IID IID_IFilterMapper2;
typedef struct IFilterMapper2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFilterMapper2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFilterMapper2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFilterMapper2 * This);
	HRESULT(STDMETHODCALLTYPE * CreateCategory) (IFilterMapper2 * This, REFCLSID clsidCategory, DWORD dwCategoryMerit, LPCWSTR Description);
	HRESULT(STDMETHODCALLTYPE * UnregisterFilter) (IFilterMapper2 * This, const CLSID * pclsidCategory, LPCOLESTR szInstance, REFCLSID Filter);
	HRESULT(STDMETHODCALLTYPE * RegisterFilter) (IFilterMapper2 * This, REFCLSID clsidFilter, LPCWSTR Name, IMoniker ** ppMoniker, const CLSID * pclsidCategory, LPCOLESTR szInstance, const REGFILTER2 * prf2);
	HRESULT(STDMETHODCALLTYPE * EnumMatchingFilters) (IFilterMapper2 * This, IEnumMoniker ** ppEnum, DWORD dwFlags, BOOL bExactMatch, DWORD dwMerit, BOOL bInputNeeded, DWORD cInputTypes, const GUID * pInputTypes, const REGPINMEDIUM * pMedIn, const CLSID * pPinCategoryIn, BOOL bRender, BOOL bOutputNeeded, DWORD cOutputTypes, const GUID * pOutputTypes, const REGPINMEDIUM * pMedOut, const CLSID * pPinCategoryOut);
	END_INTERFACE
}  IFilterMapper2Vtbl;
interface IFilterMapper2
{
	CONST_VTBL struct IFilterMapper2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFilterMapper2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFilterMapper2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IFilterMapper2_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IFilterMapper2_CreateCategory(This,clsidCategory,dwCategoryMerit,Description)    ( (This)->lpVtbl -> CreateCategory(This,clsidCategory,dwCategoryMerit,Description) )
#define IFilterMapper2_UnregisterFilter(This,pclsidCategory,szInstance,Filter)    ( (This)->lpVtbl -> UnregisterFilter(This,pclsidCategory,szInstance,Filter) )
#define IFilterMapper2_RegisterFilter(This,clsidFilter,Name,ppMoniker,pclsidCategory,szInstance,prf2)    ( (This)->lpVtbl -> RegisterFilter(This,clsidFilter,Name,ppMoniker,pclsidCategory,szInstance,prf2) )
#define IFilterMapper2_EnumMatchingFilters(This,ppEnum,dwFlags,bExactMatch,dwMerit,bInputNeeded,cInputTypes,pInputTypes,pMedIn,pPinCategoryIn,bRender,bOutputNeeded,cOutputTypes,pOutputTypes,pMedOut,pPinCategoryOut)    ( (This)->lpVtbl -> EnumMatchingFilters(This,ppEnum,dwFlags,bExactMatch,dwMerit,bInputNeeded,cInputTypes,pInputTypes,pMedIn,pPinCategoryIn,bRender,bOutputNeeded,cOutputTypes,pOutputTypes,pMedOut,pPinCategoryOut) )
#endif
#endif
#ifndef __IFilterMapper3_INTERFACE_DEFINED__
#define __IFilterMapper3_INTERFACE_DEFINED__
extern const IID IID_IFilterMapper3;
typedef struct IFilterMapper3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFilterMapper3 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFilterMapper3 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFilterMapper3 * This);
	HRESULT(STDMETHODCALLTYPE * CreateCategory) (IFilterMapper3 * This, REFCLSID clsidCategory, DWORD dwCategoryMerit, LPCWSTR Description);
	HRESULT(STDMETHODCALLTYPE * UnregisterFilter) (IFilterMapper3 * This, const CLSID * pclsidCategory, LPCOLESTR szInstance, REFCLSID Filter);
	HRESULT(STDMETHODCALLTYPE * RegisterFilter) (IFilterMapper3 * This, REFCLSID clsidFilter, LPCWSTR Name, IMoniker ** ppMoniker, const CLSID * pclsidCategory, LPCOLESTR szInstance, const REGFILTER2 * prf2);
	HRESULT(STDMETHODCALLTYPE * EnumMatchingFilters) (IFilterMapper3 * This, IEnumMoniker ** ppEnum, DWORD dwFlags, BOOL bExactMatch, DWORD dwMerit, BOOL bInputNeeded, DWORD cInputTypes, const GUID * pInputTypes, const REGPINMEDIUM * pMedIn, const CLSID * pPinCategoryIn, BOOL bRender, BOOL bOutputNeeded, DWORD cOutputTypes, const GUID * pOutputTypes, const REGPINMEDIUM * pMedOut, const CLSID * pPinCategoryOut);
	HRESULT(STDMETHODCALLTYPE * GetICreateDevEnum) (IFilterMapper3 * This, ICreateDevEnum ** ppEnum);
	END_INTERFACE
}  IFilterMapper3Vtbl;
interface IFilterMapper3
{
	CONST_VTBL struct IFilterMapper3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFilterMapper3_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFilterMapper3_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IFilterMapper3_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IFilterMapper3_CreateCategory(This,clsidCategory,dwCategoryMerit,Description)    ( (This)->lpVtbl -> CreateCategory(This,clsidCategory,dwCategoryMerit,Description) )
#define IFilterMapper3_UnregisterFilter(This,pclsidCategory,szInstance,Filter)    ( (This)->lpVtbl -> UnregisterFilter(This,pclsidCategory,szInstance,Filter) )
#define IFilterMapper3_RegisterFilter(This,clsidFilter,Name,ppMoniker,pclsidCategory,szInstance,prf2)    ( (This)->lpVtbl -> RegisterFilter(This,clsidFilter,Name,ppMoniker,pclsidCategory,szInstance,prf2) )
#define IFilterMapper3_EnumMatchingFilters(This,ppEnum,dwFlags,bExactMatch,dwMerit,bInputNeeded,cInputTypes,pInputTypes,pMedIn,pPinCategoryIn,bRender,bOutputNeeded,cOutputTypes,pOutputTypes,pMedOut,pPinCategoryOut)    ( (This)->lpVtbl -> EnumMatchingFilters(This,ppEnum,dwFlags,bExactMatch,dwMerit,bInputNeeded,cInputTypes,pInputTypes,pMedIn,pPinCategoryIn,bRender,bOutputNeeded,cOutputTypes,pOutputTypes,pMedOut,pPinCategoryOut) )
#define IFilterMapper3_GetICreateDevEnum(This,ppEnum)    ( (This)->lpVtbl -> GetICreateDevEnum(This,ppEnum) )
#endif
#endif
typedef enum tagQualityMessageType
{
	Famine = 0,
	Flood = (Famine + 1)
} QualityMessageType;
typedef struct tagQuality
{
	QualityMessageType Type;
	long Proportion;
	REFERENCE_TIME Late;
	REFERENCE_TIME TimeStamp;
} Quality;
typedef IQualityControl *PQUALITYCONTROL;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0024_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0024_v0_0_s_ifspec;
#ifndef __IQualityControl_INTERFACE_DEFINED__
#define __IQualityControl_INTERFACE_DEFINED__
extern const IID IID_IQualityControl;
typedef struct IQualityControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IQualityControl * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IQualityControl * This);
	ULONG(STDMETHODCALLTYPE * Release) (IQualityControl * This);
	HRESULT(STDMETHODCALLTYPE * Notify) (IQualityControl * This, IBaseFilter * pSelf, Quality q);
	HRESULT(STDMETHODCALLTYPE * SetSink) (IQualityControl * This, IQualityControl * piqc);
	END_INTERFACE
}  IQualityControlVtbl;
interface IQualityControl
{
	CONST_VTBL struct IQualityControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IQualityControl_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IQualityControl_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IQualityControl_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IQualityControl_Notify(This,pSelf,q)    ( (This)->lpVtbl -> Notify(This,pSelf,q) )
#define IQualityControl_SetSink(This,piqc)    ( (This)->lpVtbl -> SetSink(This,piqc) )
#endif
#endif
enum __MIDL___MIDL_itf_strmif_0000_0025_0001
{
	CK_NOCOLORKEY = 0,
	CK_INDEX = 0x1,
	CK_RGB = 0x2
};
typedef struct tagCOLORKEY
{
	DWORD KeyType;
	DWORD PaletteIndex;
	COLORREF LowColorValue;
	COLORREF HighColorValue;
} COLORKEY;
enum __MIDL___MIDL_itf_strmif_0000_0025_0002
{
	ADVISE_NONE = 0,
	ADVISE_CLIPPING = 0x1,
	ADVISE_PALETTE = 0x2,
	ADVISE_COLORKEY = 0x4,
	ADVISE_POSITION = 0x8,
	ADVISE_DISPLAY_CHANGE = 0x10
};
#define	ADVISE_ALL	( ( ( ( ADVISE_CLIPPING | ADVISE_PALETTE )  | ADVISE_COLORKEY )  | ADVISE_POSITION )  )
#define	ADVISE_ALL2	( ( ADVISE_ALL | ADVISE_DISPLAY_CHANGE )  )
#if !defined(_WINGDI_) && !defined(_WINGDI_H)
typedef struct _RGNDATAHEADER
{
	DWORD dwSize;
	DWORD iType;
	DWORD nCount;
	DWORD nRgnSize;
	RECT rcBound;
} RGNDATAHEADER;
typedef struct _RGNDATA
{
	RGNDATAHEADER rdh;
	char Buffer[1];
} RGNDATA;
#endif
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0025_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0025_v0_0_s_ifspec;
#ifndef __IOverlayNotify_INTERFACE_DEFINED__
#define __IOverlayNotify_INTERFACE_DEFINED__
extern const IID IID_IOverlayNotify;
typedef struct IOverlayNotifyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IOverlayNotify * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IOverlayNotify * This);
	ULONG(STDMETHODCALLTYPE * Release) (IOverlayNotify * This);
	HRESULT(STDMETHODCALLTYPE * OnPaletteChange) (IOverlayNotify * This, DWORD dwColors, const PALETTEENTRY * pPalette);
	HRESULT(STDMETHODCALLTYPE * OnClipChange) (IOverlayNotify * This, const RECT * pSourceRect, const RECT * pDestinationRect, const RGNDATA * pRgnData);
	HRESULT(STDMETHODCALLTYPE * OnColorKeyChange) (IOverlayNotify * This, const COLORKEY * pColorKey);
	HRESULT(STDMETHODCALLTYPE * OnPositionChange) (IOverlayNotify * This, const RECT * pSourceRect, const RECT * pDestinationRect);
	END_INTERFACE
}  IOverlayNotifyVtbl;
interface IOverlayNotify
{
	CONST_VTBL struct IOverlayNotifyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOverlayNotify_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOverlayNotify_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IOverlayNotify_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IOverlayNotify_OnPaletteChange(This,dwColors,pPalette)    ( (This)->lpVtbl -> OnPaletteChange(This,dwColors,pPalette) )
#define IOverlayNotify_OnClipChange(This,pSourceRect,pDestinationRect,pRgnData)    ( (This)->lpVtbl -> OnClipChange(This,pSourceRect,pDestinationRect,pRgnData) )
#define IOverlayNotify_OnColorKeyChange(This,pColorKey)    ( (This)->lpVtbl -> OnColorKeyChange(This,pColorKey) )
#define IOverlayNotify_OnPositionChange(This,pSourceRect,pDestinationRect)    ( (This)->lpVtbl -> OnPositionChange(This,pSourceRect,pDestinationRect) )
#endif
#endif
typedef IOverlayNotify *POVERLAYNOTIFY;
#if !defined(HMONITOR_DECLARED) && !defined(HMONITOR) && (WINVER < 0x0500)
#define HMONITOR_DECLARED
#if 0
typedef HANDLE HMONITOR;
#endif
DECLARE_HANDLE(HMONITOR);
#endif
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0026_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0026_v0_0_s_ifspec;
#ifndef __IOverlayNotify2_INTERFACE_DEFINED__
#define __IOverlayNotify2_INTERFACE_DEFINED__
extern const IID IID_IOverlayNotify2;
typedef struct IOverlayNotify2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IOverlayNotify2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IOverlayNotify2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IOverlayNotify2 * This);
	HRESULT(STDMETHODCALLTYPE * OnPaletteChange) (IOverlayNotify2 * This, DWORD dwColors, const PALETTEENTRY * pPalette);
	HRESULT(STDMETHODCALLTYPE * OnClipChange) (IOverlayNotify2 * This, const RECT * pSourceRect, const RECT * pDestinationRect, const RGNDATA * pRgnData);
	HRESULT(STDMETHODCALLTYPE * OnColorKeyChange) (IOverlayNotify2 * This, const COLORKEY * pColorKey);
	HRESULT(STDMETHODCALLTYPE * OnPositionChange) (IOverlayNotify2 * This, const RECT * pSourceRect, const RECT * pDestinationRect);
	HRESULT(STDMETHODCALLTYPE * OnDisplayChange) (IOverlayNotify2 * This, HMONITOR hMonitor);
	END_INTERFACE
}  IOverlayNotify2Vtbl;
interface IOverlayNotify2
{
	CONST_VTBL struct IOverlayNotify2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOverlayNotify2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOverlayNotify2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IOverlayNotify2_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IOverlayNotify2_OnPaletteChange(This,dwColors,pPalette)    ( (This)->lpVtbl -> OnPaletteChange(This,dwColors,pPalette) )
#define IOverlayNotify2_OnClipChange(This,pSourceRect,pDestinationRect,pRgnData)    ( (This)->lpVtbl -> OnClipChange(This,pSourceRect,pDestinationRect,pRgnData) )
#define IOverlayNotify2_OnColorKeyChange(This,pColorKey)    ( (This)->lpVtbl -> OnColorKeyChange(This,pColorKey) )
#define IOverlayNotify2_OnPositionChange(This,pSourceRect,pDestinationRect)    ( (This)->lpVtbl -> OnPositionChange(This,pSourceRect,pDestinationRect) )
#define IOverlayNotify2_OnDisplayChange(This,hMonitor)    ( (This)->lpVtbl -> OnDisplayChange(This,hMonitor) )
#endif
#endif
typedef IOverlayNotify2 *POVERLAYNOTIFY2;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0027_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0027_v0_0_s_ifspec;
#ifndef __IOverlay_INTERFACE_DEFINED__
#define __IOverlay_INTERFACE_DEFINED__
extern const IID IID_IOverlay;
typedef struct IOverlayVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IOverlay * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IOverlay * This);
	ULONG(STDMETHODCALLTYPE * Release) (IOverlay * This);
	HRESULT(STDMETHODCALLTYPE * GetPalette) (IOverlay * This, DWORD * pdwColors, PALETTEENTRY ** ppPalette);
	HRESULT(STDMETHODCALLTYPE * SetPalette) (IOverlay * This, DWORD dwColors, PALETTEENTRY * pPalette);
	HRESULT(STDMETHODCALLTYPE * GetDefaultColorKey) (IOverlay * This, COLORKEY * pColorKey);
	HRESULT(STDMETHODCALLTYPE * GetColorKey) (IOverlay * This, COLORKEY * pColorKey);
	HRESULT(STDMETHODCALLTYPE * SetColorKey) (IOverlay * This, COLORKEY * pColorKey);
	HRESULT(STDMETHODCALLTYPE * GetWindowHandle) (IOverlay * This, HWND * pHwnd);
	HRESULT(STDMETHODCALLTYPE * GetClipList) (IOverlay * This, RECT * pSourceRect, RECT * pDestinationRect, RGNDATA ** ppRgnData);
	HRESULT(STDMETHODCALLTYPE * GetVideoPosition) (IOverlay * This, RECT * pSourceRect, RECT * pDestinationRect);
	HRESULT(STDMETHODCALLTYPE * Advise) (IOverlay * This, IOverlayNotify * pOverlayNotify, DWORD dwInterests);
	HRESULT(STDMETHODCALLTYPE * Unadvise) (IOverlay * This);
	END_INTERFACE
}  IOverlayVtbl;
interface IOverlay
{
	CONST_VTBL struct IOverlayVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IOverlay_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IOverlay_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IOverlay_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IOverlay_GetPalette(This,pdwColors,ppPalette)    ( (This)->lpVtbl -> GetPalette(This,pdwColors,ppPalette) )
#define IOverlay_SetPalette(This,dwColors,pPalette)    ( (This)->lpVtbl -> SetPalette(This,dwColors,pPalette) )
#define IOverlay_GetDefaultColorKey(This,pColorKey)    ( (This)->lpVtbl -> GetDefaultColorKey(This,pColorKey) )
#define IOverlay_GetColorKey(This,pColorKey)    ( (This)->lpVtbl -> GetColorKey(This,pColorKey) )
#define IOverlay_SetColorKey(This,pColorKey)    ( (This)->lpVtbl -> SetColorKey(This,pColorKey) )
#define IOverlay_GetWindowHandle(This,pHwnd)    ( (This)->lpVtbl -> GetWindowHandle(This,pHwnd) )
#define IOverlay_GetClipList(This,pSourceRect,pDestinationRect,ppRgnData)    ( (This)->lpVtbl -> GetClipList(This,pSourceRect,pDestinationRect,ppRgnData) )
#define IOverlay_GetVideoPosition(This,pSourceRect,pDestinationRect)    ( (This)->lpVtbl -> GetVideoPosition(This,pSourceRect,pDestinationRect) )
#define IOverlay_Advise(This,pOverlayNotify,dwInterests)    ( (This)->lpVtbl -> Advise(This,pOverlayNotify,dwInterests) )
#define IOverlay_Unadvise(This)    ( (This)->lpVtbl -> Unadvise(This) )
#endif
#endif
typedef IOverlay *POVERLAY;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0028_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0028_v0_0_s_ifspec;
#ifndef __IMediaEventSink_INTERFACE_DEFINED__
#define __IMediaEventSink_INTERFACE_DEFINED__
extern const IID IID_IMediaEventSink;
typedef struct IMediaEventSinkVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMediaEventSink * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMediaEventSink * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMediaEventSink * This);
	HRESULT(STDMETHODCALLTYPE * Notify) (IMediaEventSink * This, long EventCode, LONG_PTR EventParam1, LONG_PTR EventParam2);
	END_INTERFACE
}  IMediaEventSinkVtbl;
interface IMediaEventSink
{
	CONST_VTBL struct IMediaEventSinkVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMediaEventSink_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMediaEventSink_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IMediaEventSink_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IMediaEventSink_Notify(This,EventCode,EventParam1,EventParam2)    ( (This)->lpVtbl -> Notify(This,EventCode,EventParam1,EventParam2) )
#endif
#endif
typedef IMediaEventSink *PMEDIAEVENTSINK;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0029_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0029_v0_0_s_ifspec;
#ifndef __IFileSourceFilter_INTERFACE_DEFINED__
#define __IFileSourceFilter_INTERFACE_DEFINED__
extern const IID IID_IFileSourceFilter;
typedef struct IFileSourceFilterVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFileSourceFilter * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFileSourceFilter * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFileSourceFilter * This);
	HRESULT(STDMETHODCALLTYPE * Load) (IFileSourceFilter * This, LPCOLESTR pszFileName, const AM_MEDIA_TYPE * pmt);
	HRESULT(STDMETHODCALLTYPE * GetCurFile) (IFileSourceFilter * This, LPOLESTR * ppszFileName, AM_MEDIA_TYPE * pmt);
	END_INTERFACE
}  IFileSourceFilterVtbl;
interface IFileSourceFilter
{
	CONST_VTBL struct IFileSourceFilterVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFileSourceFilter_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFileSourceFilter_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IFileSourceFilter_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IFileSourceFilter_Load(This,pszFileName,pmt)    ( (This)->lpVtbl -> Load(This,pszFileName,pmt) )
#define IFileSourceFilter_GetCurFile(This,ppszFileName,pmt)    ( (This)->lpVtbl -> GetCurFile(This,ppszFileName,pmt) )
#endif
#endif
typedef IFileSourceFilter *PFILTERFILESOURCE;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0030_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0030_v0_0_s_ifspec;
#ifndef __IFileSinkFilter_INTERFACE_DEFINED__
#define __IFileSinkFilter_INTERFACE_DEFINED__
extern const IID IID_IFileSinkFilter;
typedef struct IFileSinkFilterVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFileSinkFilter * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFileSinkFilter * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFileSinkFilter * This);
	HRESULT(STDMETHODCALLTYPE * SetFileName) (IFileSinkFilter * This, LPCOLESTR pszFileName, const AM_MEDIA_TYPE * pmt);
	HRESULT(STDMETHODCALLTYPE * GetCurFile) (IFileSinkFilter * This, LPOLESTR * ppszFileName, AM_MEDIA_TYPE * pmt);
	END_INTERFACE
}  IFileSinkFilterVtbl;
interface IFileSinkFilter
{
	CONST_VTBL struct IFileSinkFilterVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFileSinkFilter_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFileSinkFilter_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IFileSinkFilter_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IFileSinkFilter_SetFileName(This,pszFileName,pmt)    ( (This)->lpVtbl -> SetFileName(This,pszFileName,pmt) )
#define IFileSinkFilter_GetCurFile(This,ppszFileName,pmt)    ( (This)->lpVtbl -> GetCurFile(This,ppszFileName,pmt) )
#endif
#endif
typedef IFileSinkFilter *PFILTERFILESINK;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0031_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0031_v0_0_s_ifspec;
#ifndef __IFileSinkFilter2_INTERFACE_DEFINED__
#define __IFileSinkFilter2_INTERFACE_DEFINED__
extern const IID IID_IFileSinkFilter2;
typedef struct IFileSinkFilter2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFileSinkFilter2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFileSinkFilter2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFileSinkFilter2 * This);
	HRESULT(STDMETHODCALLTYPE * SetFileName) (IFileSinkFilter2 * This, LPCOLESTR pszFileName, const AM_MEDIA_TYPE * pmt);
	HRESULT(STDMETHODCALLTYPE * GetCurFile) (IFileSinkFilter2 * This, LPOLESTR * ppszFileName, AM_MEDIA_TYPE * pmt);
	HRESULT(STDMETHODCALLTYPE * SetMode) (IFileSinkFilter2 * This, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * GetMode) (IFileSinkFilter2 * This, DWORD * pdwFlags);
	END_INTERFACE
}  IFileSinkFilter2Vtbl;
interface IFileSinkFilter2
{
	CONST_VTBL struct IFileSinkFilter2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFileSinkFilter2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFileSinkFilter2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IFileSinkFilter2_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IFileSinkFilter2_SetFileName(This,pszFileName,pmt)    ( (This)->lpVtbl -> SetFileName(This,pszFileName,pmt) )
#define IFileSinkFilter2_GetCurFile(This,ppszFileName,pmt)    ( (This)->lpVtbl -> GetCurFile(This,ppszFileName,pmt) )
#define IFileSinkFilter2_SetMode(This,dwFlags)    ( (This)->lpVtbl -> SetMode(This,dwFlags) )
#define IFileSinkFilter2_GetMode(This,pdwFlags)    ( (This)->lpVtbl -> GetMode(This,pdwFlags) )
#endif
#endif
typedef IFileSinkFilter2 *PFILESINKFILTER2;
typedef
enum AM_FILESINK_FLAGS { AM_FILE_OVERWRITE = 0x1
} AM_FILESINK_FLAGS;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0032_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0032_v0_0_s_ifspec;
#ifndef __IGraphBuilder_INTERFACE_DEFINED__
#define __IGraphBuilder_INTERFACE_DEFINED__
extern const IID IID_IGraphBuilder;
typedef struct IGraphBuilderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGraphBuilder * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGraphBuilder * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGraphBuilder * This);
	HRESULT(STDMETHODCALLTYPE * AddFilter) (IGraphBuilder * This, IBaseFilter * pFilter, LPCWSTR pName);
	HRESULT(STDMETHODCALLTYPE * RemoveFilter) (IGraphBuilder * This, IBaseFilter * pFilter);
	HRESULT(STDMETHODCALLTYPE * EnumFilters) (IGraphBuilder * This, IEnumFilters ** ppEnum);
	HRESULT(STDMETHODCALLTYPE * FindFilterByName) (IGraphBuilder * This, LPCWSTR pName, IBaseFilter ** ppFilter);
	HRESULT(STDMETHODCALLTYPE * ConnectDirect) (IGraphBuilder * This, IPin * ppinOut, IPin * ppinIn, const AM_MEDIA_TYPE * pmt);
	HRESULT(STDMETHODCALLTYPE * Reconnect) (IGraphBuilder * This, IPin * ppin);
	HRESULT(STDMETHODCALLTYPE * Disconnect) (IGraphBuilder * This, IPin * ppin);
	HRESULT(STDMETHODCALLTYPE * SetDefaultSyncSource) (IGraphBuilder * This);
	HRESULT(STDMETHODCALLTYPE * Connect) (IGraphBuilder * This, IPin * ppinOut, IPin * ppinIn);
	HRESULT(STDMETHODCALLTYPE * Render) (IGraphBuilder * This, IPin * ppinOut);
	HRESULT(STDMETHODCALLTYPE * RenderFile) (IGraphBuilder * This, LPCWSTR lpcwstrFile, LPCWSTR lpcwstrPlayList);
	HRESULT(STDMETHODCALLTYPE * AddSourceFilter) (IGraphBuilder * This, LPCWSTR lpcwstrFileName, LPCWSTR lpcwstrFilterName, IBaseFilter ** ppFilter);
	HRESULT(STDMETHODCALLTYPE * SetLogFile) (IGraphBuilder * This, DWORD_PTR hFile);
	HRESULT(STDMETHODCALLTYPE * Abort) (IGraphBuilder * This);
	HRESULT(STDMETHODCALLTYPE * ShouldOperationContinue) (IGraphBuilder * This);
	END_INTERFACE
}  IGraphBuilderVtbl;
interface IGraphBuilder
{
	CONST_VTBL struct IGraphBuilderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGraphBuilder_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGraphBuilder_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IGraphBuilder_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IGraphBuilder_AddFilter(This,pFilter,pName)    ( (This)->lpVtbl -> AddFilter(This,pFilter,pName) )
#define IGraphBuilder_RemoveFilter(This,pFilter)    ( (This)->lpVtbl -> RemoveFilter(This,pFilter) )
#define IGraphBuilder_EnumFilters(This,ppEnum)    ( (This)->lpVtbl -> EnumFilters(This,ppEnum) )
#define IGraphBuilder_FindFilterByName(This,pName,ppFilter)    ( (This)->lpVtbl -> FindFilterByName(This,pName,ppFilter) )
#define IGraphBuilder_ConnectDirect(This,ppinOut,ppinIn,pmt)    ( (This)->lpVtbl -> ConnectDirect(This,ppinOut,ppinIn,pmt) )
#define IGraphBuilder_Reconnect(This,ppin)    ( (This)->lpVtbl -> Reconnect(This,ppin) )
#define IGraphBuilder_Disconnect(This,ppin)    ( (This)->lpVtbl -> Disconnect(This,ppin) )
#define IGraphBuilder_SetDefaultSyncSource(This)    ( (This)->lpVtbl -> SetDefaultSyncSource(This) )
#define IGraphBuilder_Connect(This,ppinOut,ppinIn)    ( (This)->lpVtbl -> Connect(This,ppinOut,ppinIn) )
#define IGraphBuilder_Render(This,ppinOut)    ( (This)->lpVtbl -> Render(This,ppinOut) )
#define IGraphBuilder_RenderFile(This,lpcwstrFile,lpcwstrPlayList)    ( (This)->lpVtbl -> RenderFile(This,lpcwstrFile,lpcwstrPlayList) )
#define IGraphBuilder_AddSourceFilter(This,lpcwstrFileName,lpcwstrFilterName,ppFilter)    ( (This)->lpVtbl -> AddSourceFilter(This,lpcwstrFileName,lpcwstrFilterName,ppFilter) )
#define IGraphBuilder_SetLogFile(This,hFile)    ( (This)->lpVtbl -> SetLogFile(This,hFile) )
#define IGraphBuilder_Abort(This)    ( (This)->lpVtbl -> Abort(This) )
#define IGraphBuilder_ShouldOperationContinue(This)    ( (This)->lpVtbl -> ShouldOperationContinue(This) )
#endif
#endif
#ifndef __ICaptureGraphBuilder_INTERFACE_DEFINED__
#define __ICaptureGraphBuilder_INTERFACE_DEFINED__
extern const IID IID_ICaptureGraphBuilder;
typedef struct ICaptureGraphBuilderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICaptureGraphBuilder * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICaptureGraphBuilder * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICaptureGraphBuilder * This);
	HRESULT(STDMETHODCALLTYPE * SetFiltergraph) (ICaptureGraphBuilder * This, IGraphBuilder * pfg);
	HRESULT(STDMETHODCALLTYPE * GetFiltergraph) (ICaptureGraphBuilder * This, IGraphBuilder ** ppfg);
	HRESULT(STDMETHODCALLTYPE * SetOutputFileName) (ICaptureGraphBuilder * This, const GUID * pType, LPCOLESTR lpstrFile, IBaseFilter ** ppf, IFileSinkFilter ** ppSink);
	HRESULT(STDMETHODCALLTYPE * FindInterface) (ICaptureGraphBuilder * This, const GUID * pCategory, IBaseFilter * pf, REFIID riid, void **ppint);
	HRESULT(STDMETHODCALLTYPE * RenderStream) (ICaptureGraphBuilder * This, const GUID * pCategory, IUnknown * pSource, IBaseFilter * pfCompressor, IBaseFilter * pfRenderer);
	HRESULT(STDMETHODCALLTYPE * ControlStream) (ICaptureGraphBuilder * This, const GUID * pCategory, IBaseFilter * pFilter, REFERENCE_TIME * pstart, REFERENCE_TIME * pstop, WORD wStartCookie, WORD wStopCookie);
	HRESULT(STDMETHODCALLTYPE * AllocCapFile) (ICaptureGraphBuilder * This, LPCOLESTR lpstr, DWORDLONG dwlSize);
	HRESULT(STDMETHODCALLTYPE * CopyCaptureFile) (ICaptureGraphBuilder * This, LPOLESTR lpwstrOld, LPOLESTR lpwstrNew, int fAllowEscAbort, IAMCopyCaptureFileProgress * pCallback);
	END_INTERFACE
}  ICaptureGraphBuilderVtbl;
interface ICaptureGraphBuilder
{
	CONST_VTBL struct ICaptureGraphBuilderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICaptureGraphBuilder_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICaptureGraphBuilder_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define ICaptureGraphBuilder_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define ICaptureGraphBuilder_SetFiltergraph(This,pfg)    ( (This)->lpVtbl -> SetFiltergraph(This,pfg) )
#define ICaptureGraphBuilder_GetFiltergraph(This,ppfg)    ( (This)->lpVtbl -> GetFiltergraph(This,ppfg) )
#define ICaptureGraphBuilder_SetOutputFileName(This,pType,lpstrFile,ppf,ppSink)    ( (This)->lpVtbl -> SetOutputFileName(This,pType,lpstrFile,ppf,ppSink) )
#define ICaptureGraphBuilder_FindInterface(This,pCategory,pf,riid,ppint)    ( (This)->lpVtbl -> FindInterface(This,pCategory,pf,riid,ppint) )
#define ICaptureGraphBuilder_RenderStream(This,pCategory,pSource,pfCompressor,pfRenderer)    ( (This)->lpVtbl -> RenderStream(This,pCategory,pSource,pfCompressor,pfRenderer) )
#define ICaptureGraphBuilder_ControlStream(This,pCategory,pFilter,pstart,pstop,wStartCookie,wStopCookie)    ( (This)->lpVtbl -> ControlStream(This,pCategory,pFilter,pstart,pstop,wStartCookie,wStopCookie) )
#define ICaptureGraphBuilder_AllocCapFile(This,lpstr,dwlSize)    ( (This)->lpVtbl -> AllocCapFile(This,lpstr,dwlSize) )
#define ICaptureGraphBuilder_CopyCaptureFile(This,lpwstrOld,lpwstrNew,fAllowEscAbort,pCallback)    ( (This)->lpVtbl -> CopyCaptureFile(This,lpwstrOld,lpwstrNew,fAllowEscAbort,pCallback) )
#endif
HRESULT STDMETHODCALLTYPE ICaptureGraphBuilder_RemoteFindInterface_Proxy(ICaptureGraphBuilder *This, const GUID *pCategory, IBaseFilter *pf, REFIID riid, IUnknown **ppint);
void __RPC_STUB ICaptureGraphBuilder_RemoteFindInterface_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
#ifndef __IAMCopyCaptureFileProgress_INTERFACE_DEFINED__
#define __IAMCopyCaptureFileProgress_INTERFACE_DEFINED__
extern const IID IID_IAMCopyCaptureFileProgress;
typedef struct IAMCopyCaptureFileProgressVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAMCopyCaptureFileProgress *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAMCopyCaptureFileProgress *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAMCopyCaptureFileProgress *This);
	HRESULT(STDMETHODCALLTYPE *Progress) (IAMCopyCaptureFileProgress *This, int iProgress);
	END_INTERFACE
}  IAMCopyCaptureFileProgressVtbl;
interface IAMCopyCaptureFileProgress
{
	CONST_VTBL struct IAMCopyCaptureFileProgressVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMCopyCaptureFileProgress_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAMCopyCaptureFileProgress_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAMCopyCaptureFileProgress_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAMCopyCaptureFileProgress_Progress(This,iProgress)    ( (This)->lpVtbl -> Progress(This,iProgress) )
#endif
#endif
#ifndef __ICaptureGraphBuilder2_INTERFACE_DEFINED__
#define __ICaptureGraphBuilder2_INTERFACE_DEFINED__
extern const IID IID_ICaptureGraphBuilder2;
typedef struct ICaptureGraphBuilder2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ICaptureGraphBuilder2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ICaptureGraphBuilder2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (ICaptureGraphBuilder2 *This);
	HRESULT(STDMETHODCALLTYPE *SetFiltergraph) (ICaptureGraphBuilder2 *This, IGraphBuilder *pfg);
	HRESULT(STDMETHODCALLTYPE *GetFiltergraph) (ICaptureGraphBuilder2 *This, IGraphBuilder **ppfg);
	HRESULT(STDMETHODCALLTYPE *SetOutputFileName) (ICaptureGraphBuilder2 *This, const GUID *pType, LPCOLESTR lpstrFile, IBaseFilter **ppf, IFileSinkFilter **ppSink);
	HRESULT(STDMETHODCALLTYPE *FindInterface) (ICaptureGraphBuilder2 *This, const GUID *pCategory, const GUID *pType, IBaseFilter *pf, REFIID riid, void **ppint);
	HRESULT(STDMETHODCALLTYPE *RenderStream) (ICaptureGraphBuilder2 *This, const GUID *pCategory, const GUID *pType, IUnknown *pSource, IBaseFilter *pfCompressor, IBaseFilter *pfRenderer);
	HRESULT(STDMETHODCALLTYPE *ControlStream) (ICaptureGraphBuilder2 *This, const GUID *pCategory, const GUID *pType, IBaseFilter *pFilter, REFERENCE_TIME *pstart, REFERENCE_TIME *pstop, WORD wStartCookie, WORD wStopCookie);
	HRESULT(STDMETHODCALLTYPE *AllocCapFile) (ICaptureGraphBuilder2 *This, LPCOLESTR lpstr, DWORDLONG dwlSize);
	HRESULT(STDMETHODCALLTYPE *CopyCaptureFile) (ICaptureGraphBuilder2 *This, LPOLESTR lpwstrOld, LPOLESTR lpwstrNew, int fAllowEscAbort, IAMCopyCaptureFileProgress *pCallback);
	HRESULT(STDMETHODCALLTYPE *FindPin) (ICaptureGraphBuilder2 *This, IUnknown *pSource, PIN_DIRECTION pindir, const GUID *pCategory, const GUID *pType, BOOL fUnconnected, int num, IPin **ppPin);
	END_INTERFACE
}  ICaptureGraphBuilder2Vtbl;
interface ICaptureGraphBuilder2
{
	CONST_VTBL struct ICaptureGraphBuilder2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICaptureGraphBuilder2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICaptureGraphBuilder2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define ICaptureGraphBuilder2_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define ICaptureGraphBuilder2_SetFiltergraph(This,pfg)    ( (This)->lpVtbl -> SetFiltergraph(This,pfg) )
#define ICaptureGraphBuilder2_GetFiltergraph(This,ppfg)    ( (This)->lpVtbl -> GetFiltergraph(This,ppfg) )
#define ICaptureGraphBuilder2_SetOutputFileName(This,pType,lpstrFile,ppf,ppSink)    ( (This)->lpVtbl -> SetOutputFileName(This,pType,lpstrFile,ppf,ppSink) )
#define ICaptureGraphBuilder2_FindInterface(This,pCategory,pType,pf,riid,ppint)    ( (This)->lpVtbl -> FindInterface(This,pCategory,pType,pf,riid,ppint) )
#define ICaptureGraphBuilder2_RenderStream(This,pCategory,pType,pSource,pfCompressor,pfRenderer)    ( (This)->lpVtbl -> RenderStream(This,pCategory,pType,pSource,pfCompressor,pfRenderer) )
#define ICaptureGraphBuilder2_ControlStream(This,pCategory,pType,pFilter,pstart,pstop,wStartCookie,wStopCookie)    ( (This)->lpVtbl -> ControlStream(This,pCategory,pType,pFilter,pstart,pstop,wStartCookie,wStopCookie) )
#define ICaptureGraphBuilder2_AllocCapFile(This,lpstr,dwlSize)    ( (This)->lpVtbl -> AllocCapFile(This,lpstr,dwlSize) )
#define ICaptureGraphBuilder2_CopyCaptureFile(This,lpwstrOld,lpwstrNew,fAllowEscAbort,pCallback)    ( (This)->lpVtbl -> CopyCaptureFile(This,lpwstrOld,lpwstrNew,fAllowEscAbort,pCallback) )
#define ICaptureGraphBuilder2_FindPin(This,pSource,pindir,pCategory,pType,fUnconnected,num,ppPin)    ( (This)->lpVtbl -> FindPin(This,pSource,pindir,pCategory,pType,fUnconnected,num,ppPin) )
#endif
HRESULT STDMETHODCALLTYPE ICaptureGraphBuilder2_RemoteFindInterface_Proxy(ICaptureGraphBuilder2 *This, const GUID *pCategory, const GUID *pType, IBaseFilter *pf, REFIID riid, IUnknown **ppint);
void __RPC_STUB ICaptureGraphBuilder2_RemoteFindInterface_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
enum _AM_RENSDEREXFLAGS { AM_RENDEREX_RENDERTOEXISTINGRENDERERS = 0x1
};
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0036_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0036_v0_0_s_ifspec;
#ifndef __IFilterGraph2_INTERFACE_DEFINED__
#define __IFilterGraph2_INTERFACE_DEFINED__
extern const IID IID_IFilterGraph2;
typedef struct IFilterGraph2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IFilterGraph2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IFilterGraph2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IFilterGraph2 *This);
	HRESULT(STDMETHODCALLTYPE *AddFilter) (IFilterGraph2 *This, IBaseFilter *pFilter, LPCWSTR pName);
	HRESULT(STDMETHODCALLTYPE *RemoveFilter) (IFilterGraph2 *This, IBaseFilter *pFilter);
	HRESULT(STDMETHODCALLTYPE *EnumFilters) (IFilterGraph2 *This, IEnumFilters **ppEnum);
	HRESULT(STDMETHODCALLTYPE *FindFilterByName) (IFilterGraph2 *This, LPCWSTR pName, IBaseFilter **ppFilter);
	HRESULT(STDMETHODCALLTYPE *ConnectDirect) (IFilterGraph2 *This, IPin *ppinOut, IPin *ppinIn, const AM_MEDIA_TYPE *pmt);
	HRESULT(STDMETHODCALLTYPE *Reconnect) (IFilterGraph2 *This, IPin *ppin);
	HRESULT(STDMETHODCALLTYPE *Disconnect) (IFilterGraph2 *This, IPin *ppin);
	HRESULT(STDMETHODCALLTYPE *SetDefaultSyncSource) (IFilterGraph2 *This);
	HRESULT(STDMETHODCALLTYPE *Connect) (IFilterGraph2 *This, IPin *ppinOut, IPin *ppinIn);
	HRESULT(STDMETHODCALLTYPE *Render) (IFilterGraph2 *This, IPin *ppinOut);
	HRESULT(STDMETHODCALLTYPE *RenderFile) (IFilterGraph2 *This, LPCWSTR lpcwstrFile, LPCWSTR lpcwstrPlayList);
	HRESULT(STDMETHODCALLTYPE *AddSourceFilter) (IFilterGraph2 *This, LPCWSTR lpcwstrFileName, LPCWSTR lpcwstrFilterName, IBaseFilter **ppFilter);
	HRESULT(STDMETHODCALLTYPE *SetLogFile) (IFilterGraph2 *This, DWORD_PTR hFile);
	HRESULT(STDMETHODCALLTYPE *Abort) (IFilterGraph2 *This);
	HRESULT(STDMETHODCALLTYPE *ShouldOperationContinue) (IFilterGraph2 *This);
	HRESULT(STDMETHODCALLTYPE *AddSourceFilterForMoniker) (IFilterGraph2 *This, IMoniker *pMoniker, IBindCtx *pCtx, LPCWSTR lpcwstrFilterName, IBaseFilter **ppFilter);
	HRESULT(STDMETHODCALLTYPE *ReconnectEx) (IFilterGraph2 *This, IPin *ppin, const AM_MEDIA_TYPE *pmt);
	HRESULT(STDMETHODCALLTYPE *RenderEx) (IFilterGraph2 *This, IPin *pPinOut, DWORD dwFlags, DWORD *pvContext);
	END_INTERFACE
}  IFilterGraph2Vtbl;
interface IFilterGraph2
{
	CONST_VTBL struct IFilterGraph2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFilterGraph2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFilterGraph2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IFilterGraph2_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IFilterGraph2_AddFilter(This,pFilter,pName)    ( (This)->lpVtbl -> AddFilter(This,pFilter,pName) )
#define IFilterGraph2_RemoveFilter(This,pFilter)    ( (This)->lpVtbl -> RemoveFilter(This,pFilter) )
#define IFilterGraph2_EnumFilters(This,ppEnum)    ( (This)->lpVtbl -> EnumFilters(This,ppEnum) )
#define IFilterGraph2_FindFilterByName(This,pName,ppFilter)    ( (This)->lpVtbl -> FindFilterByName(This,pName,ppFilter) )
#define IFilterGraph2_ConnectDirect(This,ppinOut,ppinIn,pmt)    ( (This)->lpVtbl -> ConnectDirect(This,ppinOut,ppinIn,pmt) )
#define IFilterGraph2_Reconnect(This,ppin)    ( (This)->lpVtbl -> Reconnect(This,ppin) )
#define IFilterGraph2_Disconnect(This,ppin)    ( (This)->lpVtbl -> Disconnect(This,ppin) )
#define IFilterGraph2_SetDefaultSyncSource(This)    ( (This)->lpVtbl -> SetDefaultSyncSource(This) )
#define IFilterGraph2_Connect(This,ppinOut,ppinIn)    ( (This)->lpVtbl -> Connect(This,ppinOut,ppinIn) )
#define IFilterGraph2_Render(This,ppinOut)    ( (This)->lpVtbl -> Render(This,ppinOut) )
#define IFilterGraph2_RenderFile(This,lpcwstrFile,lpcwstrPlayList)    ( (This)->lpVtbl -> RenderFile(This,lpcwstrFile,lpcwstrPlayList) )
#define IFilterGraph2_AddSourceFilter(This,lpcwstrFileName,lpcwstrFilterName,ppFilter)    ( (This)->lpVtbl -> AddSourceFilter(This,lpcwstrFileName,lpcwstrFilterName,ppFilter) )
#define IFilterGraph2_SetLogFile(This,hFile)    ( (This)->lpVtbl -> SetLogFile(This,hFile) )
#define IFilterGraph2_Abort(This)    ( (This)->lpVtbl -> Abort(This) )
#define IFilterGraph2_ShouldOperationContinue(This)    ( (This)->lpVtbl -> ShouldOperationContinue(This) )
#define IFilterGraph2_AddSourceFilterForMoniker(This,pMoniker,pCtx,lpcwstrFilterName,ppFilter)    ( (This)->lpVtbl -> AddSourceFilterForMoniker(This,pMoniker,pCtx,lpcwstrFilterName,ppFilter) )
#define IFilterGraph2_ReconnectEx(This,ppin,pmt)    ( (This)->lpVtbl -> ReconnectEx(This,ppin,pmt) )
#define IFilterGraph2_RenderEx(This,pPinOut,dwFlags,pvContext)    ( (This)->lpVtbl -> RenderEx(This,pPinOut,dwFlags,pvContext) )
#endif
#endif
#ifndef __IFilterGraph3_INTERFACE_DEFINED__
#define __IFilterGraph3_INTERFACE_DEFINED__
extern const IID IID_IFilterGraph3;
typedef struct IFilterGraph3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IFilterGraph3 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IFilterGraph3 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IFilterGraph3 *This);
	HRESULT(STDMETHODCALLTYPE *AddFilter) (IFilterGraph3 *This, IBaseFilter *pFilter, LPCWSTR pName);
	HRESULT(STDMETHODCALLTYPE *RemoveFilter) (IFilterGraph3 *This, IBaseFilter *pFilter);
	HRESULT(STDMETHODCALLTYPE *EnumFilters) (IFilterGraph3 *This, IEnumFilters **ppEnum);
	HRESULT(STDMETHODCALLTYPE *FindFilterByName) (IFilterGraph3 *This, LPCWSTR pName, IBaseFilter **ppFilter);
	HRESULT(STDMETHODCALLTYPE *ConnectDirect) (IFilterGraph3 *This, IPin *ppinOut, IPin *ppinIn, const AM_MEDIA_TYPE *pmt);
	HRESULT(STDMETHODCALLTYPE *Reconnect) (IFilterGraph3 *This, IPin *ppin);
	HRESULT(STDMETHODCALLTYPE *Disconnect) (IFilterGraph3 *This, IPin *ppin);
	HRESULT(STDMETHODCALLTYPE *SetDefaultSyncSource) (IFilterGraph3 *This);
	HRESULT(STDMETHODCALLTYPE *Connect) (IFilterGraph3 *This, IPin *ppinOut, IPin *ppinIn);
	HRESULT(STDMETHODCALLTYPE *Render) (IFilterGraph3 *This, IPin *ppinOut);
	HRESULT(STDMETHODCALLTYPE *RenderFile) (IFilterGraph3 *This, LPCWSTR lpcwstrFile, LPCWSTR lpcwstrPlayList);
	HRESULT(STDMETHODCALLTYPE *AddSourceFilter) (IFilterGraph3 *This, LPCWSTR lpcwstrFileName, LPCWSTR lpcwstrFilterName, IBaseFilter **ppFilter);
	HRESULT(STDMETHODCALLTYPE *SetLogFile) (IFilterGraph3 *This, DWORD_PTR hFile);
	HRESULT(STDMETHODCALLTYPE *Abort) (IFilterGraph3 *This);
	HRESULT(STDMETHODCALLTYPE *ShouldOperationContinue) (IFilterGraph3 *This);
	HRESULT(STDMETHODCALLTYPE *AddSourceFilterForMoniker) (IFilterGraph3 *This, IMoniker *pMoniker, IBindCtx *pCtx, LPCWSTR lpcwstrFilterName, IBaseFilter **ppFilter);
	HRESULT(STDMETHODCALLTYPE *ReconnectEx) (IFilterGraph3 *This, IPin *ppin, const AM_MEDIA_TYPE *pmt);
	HRESULT(STDMETHODCALLTYPE *RenderEx) (IFilterGraph3 *This, IPin *pPinOut, DWORD dwFlags, DWORD *pvContext);
	HRESULT(STDMETHODCALLTYPE *SetSyncSourceEx) (IFilterGraph3 *This, IReferenceClock *pClockForMostOfFilterGraph, IReferenceClock *pClockForFilter, IBaseFilter *pFilter);
	END_INTERFACE
}  IFilterGraph3Vtbl;
interface IFilterGraph3
{
	CONST_VTBL struct IFilterGraph3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFilterGraph3_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFilterGraph3_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IFilterGraph3_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IFilterGraph3_AddFilter(This,pFilter,pName)    ( (This)->lpVtbl -> AddFilter(This,pFilter,pName) )
#define IFilterGraph3_RemoveFilter(This,pFilter)    ( (This)->lpVtbl -> RemoveFilter(This,pFilter) )
#define IFilterGraph3_EnumFilters(This,ppEnum)    ( (This)->lpVtbl -> EnumFilters(This,ppEnum) )
#define IFilterGraph3_FindFilterByName(This,pName,ppFilter)    ( (This)->lpVtbl -> FindFilterByName(This,pName,ppFilter) )
#define IFilterGraph3_ConnectDirect(This,ppinOut,ppinIn,pmt)    ( (This)->lpVtbl -> ConnectDirect(This,ppinOut,ppinIn,pmt) )
#define IFilterGraph3_Reconnect(This,ppin)    ( (This)->lpVtbl -> Reconnect(This,ppin) )
#define IFilterGraph3_Disconnect(This,ppin)    ( (This)->lpVtbl -> Disconnect(This,ppin) )
#define IFilterGraph3_SetDefaultSyncSource(This)    ( (This)->lpVtbl -> SetDefaultSyncSource(This) )
#define IFilterGraph3_Connect(This,ppinOut,ppinIn)    ( (This)->lpVtbl -> Connect(This,ppinOut,ppinIn) )
#define IFilterGraph3_Render(This,ppinOut)    ( (This)->lpVtbl -> Render(This,ppinOut) )
#define IFilterGraph3_RenderFile(This,lpcwstrFile,lpcwstrPlayList)    ( (This)->lpVtbl -> RenderFile(This,lpcwstrFile,lpcwstrPlayList) )
#define IFilterGraph3_AddSourceFilter(This,lpcwstrFileName,lpcwstrFilterName,ppFilter)    ( (This)->lpVtbl -> AddSourceFilter(This,lpcwstrFileName,lpcwstrFilterName,ppFilter) )
#define IFilterGraph3_SetLogFile(This,hFile)    ( (This)->lpVtbl -> SetLogFile(This,hFile) )
#define IFilterGraph3_Abort(This)    ( (This)->lpVtbl -> Abort(This) )
#define IFilterGraph3_ShouldOperationContinue(This)    ( (This)->lpVtbl -> ShouldOperationContinue(This) )
#define IFilterGraph3_AddSourceFilterForMoniker(This,pMoniker,pCtx,lpcwstrFilterName,ppFilter)    ( (This)->lpVtbl -> AddSourceFilterForMoniker(This,pMoniker,pCtx,lpcwstrFilterName,ppFilter) )
#define IFilterGraph3_ReconnectEx(This,ppin,pmt)    ( (This)->lpVtbl -> ReconnectEx(This,ppin,pmt) )
#define IFilterGraph3_RenderEx(This,pPinOut,dwFlags,pvContext)    ( (This)->lpVtbl -> RenderEx(This,pPinOut,dwFlags,pvContext) )
#define IFilterGraph3_SetSyncSourceEx(This,pClockForMostOfFilterGraph,pClockForFilter,pFilter)    ( (This)->lpVtbl -> SetSyncSourceEx(This,pClockForMostOfFilterGraph,pClockForFilter,pFilter) )
#endif
#endif
#ifndef __IStreamBuilder_INTERFACE_DEFINED__
#define __IStreamBuilder_INTERFACE_DEFINED__
extern const IID IID_IStreamBuilder;
typedef struct IStreamBuilderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IStreamBuilder *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IStreamBuilder *This);
	ULONG(STDMETHODCALLTYPE *Release) (IStreamBuilder *This);
	HRESULT(STDMETHODCALLTYPE *Render) (IStreamBuilder *This, IPin *ppinOut, IGraphBuilder *pGraph);
	HRESULT(STDMETHODCALLTYPE *Backout) (IStreamBuilder *This, IPin *ppinOut, IGraphBuilder *pGraph);
	END_INTERFACE
}  IStreamBuilderVtbl;
interface IStreamBuilder
{
	CONST_VTBL struct IStreamBuilderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IStreamBuilder_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IStreamBuilder_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IStreamBuilder_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IStreamBuilder_Render(This,ppinOut,pGraph)    ( (This)->lpVtbl -> Render(This,ppinOut,pGraph) )
#define IStreamBuilder_Backout(This,ppinOut,pGraph)    ( (This)->lpVtbl -> Backout(This,ppinOut,pGraph) )
#endif
#endif
#ifndef __IAsyncReader_INTERFACE_DEFINED__
#define __IAsyncReader_INTERFACE_DEFINED__
extern const IID IID_IAsyncReader;
typedef struct IAsyncReaderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAsyncReader *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAsyncReader *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAsyncReader *This);
	HRESULT(STDMETHODCALLTYPE *RequestAllocator) (IAsyncReader *This, IMemAllocator *pPreferred, ALLOCATOR_PROPERTIES *pProps, IMemAllocator **ppActual);
	HRESULT(STDMETHODCALLTYPE *Request) (IAsyncReader *This, IMediaSample *pSample, DWORD_PTR dwUser);
	HRESULT(STDMETHODCALLTYPE *WaitForNext) (IAsyncReader *This, DWORD dwTimeout, IMediaSample **ppSample, DWORD_PTR *pdwUser);
	HRESULT(STDMETHODCALLTYPE *SyncReadAligned) (IAsyncReader *This, IMediaSample *pSample);
	HRESULT(STDMETHODCALLTYPE *SyncRead) (IAsyncReader *This, LONGLONG llPosition, LONG lLength, BYTE *pBuffer);
	HRESULT(STDMETHODCALLTYPE *Length) (IAsyncReader *This, LONGLONG *pTotal, LONGLONG *pAvailable);
	HRESULT(STDMETHODCALLTYPE *BeginFlush) (IAsyncReader *This);
	HRESULT(STDMETHODCALLTYPE *EndFlush) (IAsyncReader *This);
	END_INTERFACE
}  IAsyncReaderVtbl;
interface IAsyncReader
{
	CONST_VTBL struct IAsyncReaderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAsyncReader_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAsyncReader_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAsyncReader_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAsyncReader_RequestAllocator(This,pPreferred,pProps,ppActual)    ( (This)->lpVtbl -> RequestAllocator(This,pPreferred,pProps,ppActual) )
#define IAsyncReader_Request(This,pSample,dwUser)    ( (This)->lpVtbl -> Request(This,pSample,dwUser) )
#define IAsyncReader_WaitForNext(This,dwTimeout,ppSample,pdwUser)    ( (This)->lpVtbl -> WaitForNext(This,dwTimeout,ppSample,pdwUser) )
#define IAsyncReader_SyncReadAligned(This,pSample)    ( (This)->lpVtbl -> SyncReadAligned(This,pSample) )
#define IAsyncReader_SyncRead(This,llPosition,lLength,pBuffer)    ( (This)->lpVtbl -> SyncRead(This,llPosition,lLength,pBuffer) )
#define IAsyncReader_Length(This,pTotal,pAvailable)    ( (This)->lpVtbl -> Length(This,pTotal,pAvailable) )
#define IAsyncReader_BeginFlush(This)    ( (This)->lpVtbl -> BeginFlush(This) )
#define IAsyncReader_EndFlush(This)    ( (This)->lpVtbl -> EndFlush(This) )
#endif
#endif
#ifndef __IGraphVersion_INTERFACE_DEFINED__
#define __IGraphVersion_INTERFACE_DEFINED__
extern const IID IID_IGraphVersion;
typedef struct IGraphVersionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IGraphVersion *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IGraphVersion *This);
	ULONG(STDMETHODCALLTYPE *Release) (IGraphVersion *This);
	HRESULT(STDMETHODCALLTYPE *QueryVersion) (IGraphVersion *This, LONG *pVersion);
	END_INTERFACE
}  IGraphVersionVtbl;
interface IGraphVersion
{
	CONST_VTBL struct IGraphVersionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGraphVersion_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGraphVersion_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IGraphVersion_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IGraphVersion_QueryVersion(This,pVersion)    ( (This)->lpVtbl -> QueryVersion(This,pVersion) )
#endif
#endif
#ifndef __IResourceConsumer_INTERFACE_DEFINED__
#define __IResourceConsumer_INTERFACE_DEFINED__
extern const IID IID_IResourceConsumer;
typedef struct IResourceConsumerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IResourceConsumer *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IResourceConsumer *This);
	ULONG(STDMETHODCALLTYPE *Release) (IResourceConsumer *This);
	HRESULT(STDMETHODCALLTYPE *AcquireResource) (IResourceConsumer *This, LONG idResource);
	HRESULT(STDMETHODCALLTYPE *ReleaseResource) (IResourceConsumer *This, LONG idResource);
	END_INTERFACE
}  IResourceConsumerVtbl;
interface IResourceConsumer
{
	CONST_VTBL struct IResourceConsumerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IResourceConsumer_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IResourceConsumer_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IResourceConsumer_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IResourceConsumer_AcquireResource(This,idResource)    ( (This)->lpVtbl -> AcquireResource(This,idResource) )
#define IResourceConsumer_ReleaseResource(This,idResource)    ( (This)->lpVtbl -> ReleaseResource(This,idResource) )
#endif
#endif
#ifndef __IResourceManager_INTERFACE_DEFINED__
#define __IResourceManager_INTERFACE_DEFINED__
extern const IID IID_IResourceManager;
typedef struct IResourceManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IResourceManager *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IResourceManager *This);
	ULONG(STDMETHODCALLTYPE *Release) (IResourceManager *This);
	HRESULT(STDMETHODCALLTYPE *Register) (IResourceManager *This, LPCWSTR pName, LONG cResource, LONG *plToken);
	HRESULT(STDMETHODCALLTYPE *RegisterGroup) (IResourceManager *This, LPCWSTR pName, LONG cResource, LONG *palTokens, LONG *plToken);
	HRESULT(STDMETHODCALLTYPE *RequestResource) (IResourceManager *This, LONG idResource, IUnknown *pFocusObject, IResourceConsumer *pConsumer);
	HRESULT(STDMETHODCALLTYPE *NotifyAcquire) (IResourceManager *This, LONG idResource, IResourceConsumer *pConsumer, HRESULT hr);
	HRESULT(STDMETHODCALLTYPE *NotifyRelease) (IResourceManager *This, LONG idResource, IResourceConsumer *pConsumer, BOOL bStillWant);
	HRESULT(STDMETHODCALLTYPE *CancelRequest) (IResourceManager *This, LONG idResource, IResourceConsumer *pConsumer);
	HRESULT(STDMETHODCALLTYPE *SetFocus) (IResourceManager *This, IUnknown *pFocusObject);
	HRESULT(STDMETHODCALLTYPE *ReleaseFocus) (IResourceManager *This, IUnknown *pFocusObject);
	END_INTERFACE
}  IResourceManagerVtbl;
interface IResourceManager
{
	CONST_VTBL struct IResourceManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IResourceManager_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IResourceManager_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IResourceManager_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IResourceManager_Register(This,pName,cResource,plToken)    ( (This)->lpVtbl -> Register(This,pName,cResource,plToken) )
#define IResourceManager_RegisterGroup(This,pName,cResource,palTokens,plToken)    ( (This)->lpVtbl -> RegisterGroup(This,pName,cResource,palTokens,plToken) )
#define IResourceManager_RequestResource(This,idResource,pFocusObject,pConsumer)    ( (This)->lpVtbl -> RequestResource(This,idResource,pFocusObject,pConsumer) )
#define IResourceManager_NotifyAcquire(This,idResource,pConsumer,hr)    ( (This)->lpVtbl -> NotifyAcquire(This,idResource,pConsumer,hr) )
#define IResourceManager_NotifyRelease(This,idResource,pConsumer,bStillWant)    ( (This)->lpVtbl -> NotifyRelease(This,idResource,pConsumer,bStillWant) )
#define IResourceManager_CancelRequest(This,idResource,pConsumer)    ( (This)->lpVtbl -> CancelRequest(This,idResource,pConsumer) )
#define IResourceManager_SetFocus(This,pFocusObject)    ( (This)->lpVtbl -> SetFocus(This,pFocusObject) )
#define IResourceManager_ReleaseFocus(This,pFocusObject)    ( (This)->lpVtbl -> ReleaseFocus(This,pFocusObject) )
#endif
#endif
#ifndef __IDistributorNotify_INTERFACE_DEFINED__
#define __IDistributorNotify_INTERFACE_DEFINED__
extern const IID IID_IDistributorNotify;
typedef struct IDistributorNotifyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDistributorNotify *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDistributorNotify *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDistributorNotify *This);
	HRESULT(STDMETHODCALLTYPE *Stop) (IDistributorNotify *This);
	HRESULT(STDMETHODCALLTYPE *Pause) (IDistributorNotify *This);
	HRESULT(STDMETHODCALLTYPE *Run) (IDistributorNotify *This, REFERENCE_TIME tStart);
	HRESULT(STDMETHODCALLTYPE *SetSyncSource) (IDistributorNotify *This, IReferenceClock *pClock);
	HRESULT(STDMETHODCALLTYPE *NotifyGraphChange) (IDistributorNotify *This);
	END_INTERFACE
}  IDistributorNotifyVtbl;
interface IDistributorNotify
{
	CONST_VTBL struct IDistributorNotifyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDistributorNotify_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDistributorNotify_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDistributorNotify_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDistributorNotify_Stop(This)    ( (This)->lpVtbl -> Stop(This) )
#define IDistributorNotify_Pause(This)    ( (This)->lpVtbl -> Pause(This) )
#define IDistributorNotify_Run(This,tStart)    ( (This)->lpVtbl -> Run(This,tStart) )
#define IDistributorNotify_SetSyncSource(This,pClock)    ( (This)->lpVtbl -> SetSyncSource(This,pClock) )
#define IDistributorNotify_NotifyGraphChange(This)    ( (This)->lpVtbl -> NotifyGraphChange(This) )
#endif
#endif
typedef enum AM_STREAM_INFO_FLAGS
{
	AM_STREAM_INFO_START_DEFINED = 0x1,
	AM_STREAM_INFO_STOP_DEFINED = 0x2,
	AM_STREAM_INFO_DISCARDING = 0x4,
	AM_STREAM_INFO_STOP_SEND_EXTRA = 0x10
} AM_STREAM_INFO_FLAGS;
typedef struct AM_STREAM_INFO
{
	REFERENCE_TIME tStart;
	REFERENCE_TIME tStop;
	DWORD dwStartCookie;
	DWORD dwStopCookie;
	DWORD dwFlags;
} AM_STREAM_INFO;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0044_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0044_v0_0_s_ifspec;
#ifndef __IAMStreamControl_INTERFACE_DEFINED__
#define __IAMStreamControl_INTERFACE_DEFINED__
extern const IID IID_IAMStreamControl;
typedef struct IAMStreamControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAMStreamControl *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAMStreamControl *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAMStreamControl *This);
	HRESULT(STDMETHODCALLTYPE *StartAt) (IAMStreamControl *This, const REFERENCE_TIME *ptStart, DWORD dwCookie);
	HRESULT(STDMETHODCALLTYPE *StopAt) (IAMStreamControl *This, const REFERENCE_TIME *ptStop, BOOL bSendExtra, DWORD dwCookie);
	HRESULT(STDMETHODCALLTYPE *GetInfo) (IAMStreamControl *This, AM_STREAM_INFO *pInfo);
	END_INTERFACE
}  IAMStreamControlVtbl;
interface IAMStreamControl
{
	CONST_VTBL struct IAMStreamControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMStreamControl_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAMStreamControl_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAMStreamControl_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAMStreamControl_StartAt(This,ptStart,dwCookie)    ( (This)->lpVtbl -> StartAt(This,ptStart,dwCookie) )
#define IAMStreamControl_StopAt(This,ptStop,bSendExtra,dwCookie)    ( (This)->lpVtbl -> StopAt(This,ptStop,bSendExtra,dwCookie) )
#define IAMStreamControl_GetInfo(This,pInfo)    ( (This)->lpVtbl -> GetInfo(This,pInfo) )
#endif
#endif
#ifndef __ISeekingPassThru_INTERFACE_DEFINED__
#define __ISeekingPassThru_INTERFACE_DEFINED__
extern const IID IID_ISeekingPassThru;
typedef struct ISeekingPassThruVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (ISeekingPassThru *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (ISeekingPassThru *This);
	ULONG(STDMETHODCALLTYPE *Release) (ISeekingPassThru *This);
	HRESULT(STDMETHODCALLTYPE *Init) (ISeekingPassThru *This, BOOL bSupportRendering, IPin *pPin);
	END_INTERFACE
}  ISeekingPassThruVtbl;
interface ISeekingPassThru
{
	CONST_VTBL struct ISeekingPassThruVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ISeekingPassThru_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ISeekingPassThru_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define ISeekingPassThru_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define ISeekingPassThru_Init(This,bSupportRendering,pPin)    ( (This)->lpVtbl -> Init(This,bSupportRendering,pPin) )
#endif
#endif
#ifndef __IAMStreamConfig_INTERFACE_DEFINED__
#define __IAMStreamConfig_INTERFACE_DEFINED__
typedef struct _VIDEO_STREAM_CONFIG_CAPS
{
	GUID guid;
	ULONG VideoStandard;
	SIZE InputSize;
	SIZE MinCroppingSize;
	SIZE MaxCroppingSize;
	int CropGranularityX;
	int CropGranularityY;
	int CropAlignX;
	int CropAlignY;
	SIZE MinOutputSize;
	SIZE MaxOutputSize;
	int OutputGranularityX;
	int OutputGranularityY;
	int StretchTapsX;
	int StretchTapsY;
	int ShrinkTapsX;
	int ShrinkTapsY;
	LONGLONG MinFrameInterval;
	LONGLONG MaxFrameInterval;
	LONG MinBitsPerSecond;
	LONG MaxBitsPerSecond;
} VIDEO_STREAM_CONFIG_CAPS;
typedef struct _AUDIO_STREAM_CONFIG_CAPS
{
	GUID guid;
	ULONG MinimumChannels;
	ULONG MaximumChannels;
	ULONG ChannelsGranularity;
	ULONG MinimumBitsPerSample;
	ULONG MaximumBitsPerSample;
	ULONG BitsPerSampleGranularity;
	ULONG MinimumSampleFrequency;
	ULONG MaximumSampleFrequency;
	ULONG SampleFrequencyGranularity;
} AUDIO_STREAM_CONFIG_CAPS;
extern const IID IID_IAMStreamConfig;
typedef struct IAMStreamConfigVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAMStreamConfig *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAMStreamConfig *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAMStreamConfig *This);
	HRESULT(STDMETHODCALLTYPE *SetFormat) (IAMStreamConfig *This, AM_MEDIA_TYPE *pmt);
	HRESULT(STDMETHODCALLTYPE *GetFormat) (IAMStreamConfig *This, AM_MEDIA_TYPE **ppmt);
	HRESULT(STDMETHODCALLTYPE *GetNumberOfCapabilities) (IAMStreamConfig *This, int *piCount, int *piSize);
	HRESULT(STDMETHODCALLTYPE *GetStreamCaps) (IAMStreamConfig *This, int iIndex, AM_MEDIA_TYPE **ppmt, BYTE *pSCC);
	END_INTERFACE
}  IAMStreamConfigVtbl;
interface IAMStreamConfig
{
	CONST_VTBL struct IAMStreamConfigVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMStreamConfig_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAMStreamConfig_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAMStreamConfig_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAMStreamConfig_SetFormat(This,pmt)    ( (This)->lpVtbl -> SetFormat(This,pmt) )
#define IAMStreamConfig_GetFormat(This,ppmt)    ( (This)->lpVtbl -> GetFormat(This,ppmt) )
#define IAMStreamConfig_GetNumberOfCapabilities(This,piCount,piSize)    ( (This)->lpVtbl -> GetNumberOfCapabilities(This,piCount,piSize) )
#define IAMStreamConfig_GetStreamCaps(This,iIndex,ppmt,pSCC)    ( (This)->lpVtbl -> GetStreamCaps(This,iIndex,ppmt,pSCC) )
#endif
#endif
#ifndef __IConfigInterleaving_INTERFACE_DEFINED__
#define __IConfigInterleaving_INTERFACE_DEFINED__
typedef enum InterleavingMode
{
	INTERLEAVE_NONE = 0,
	INTERLEAVE_CAPTURE = (INTERLEAVE_NONE + 1),
	INTERLEAVE_FULL = (INTERLEAVE_CAPTURE + 1),
	INTERLEAVE_NONE_BUFFERED = (INTERLEAVE_FULL + 1)
} InterleavingMode;
extern const IID IID_IConfigInterleaving;
typedef struct IConfigInterleavingVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IConfigInterleaving *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IConfigInterleaving *This);
	ULONG(STDMETHODCALLTYPE *Release) (IConfigInterleaving *This);
	HRESULT(STDMETHODCALLTYPE *put_Mode) (IConfigInterleaving *This, InterleavingMode mode);
	HRESULT(STDMETHODCALLTYPE *get_Mode) (IConfigInterleaving *This, InterleavingMode *pMode);
	HRESULT(STDMETHODCALLTYPE *put_Interleaving) (IConfigInterleaving *This, const REFERENCE_TIME *prtInterleave, const REFERENCE_TIME *prtPreroll);
	HRESULT(STDMETHODCALLTYPE *get_Interleaving) (IConfigInterleaving *This, REFERENCE_TIME *prtInterleave, REFERENCE_TIME *prtPreroll);
	END_INTERFACE
}  IConfigInterleavingVtbl;
interface IConfigInterleaving
{
	CONST_VTBL struct IConfigInterleavingVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IConfigInterleaving_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IConfigInterleaving_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IConfigInterleaving_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IConfigInterleaving_put_Mode(This,mode)    ( (This)->lpVtbl -> put_Mode(This,mode) )
#define IConfigInterleaving_get_Mode(This,pMode)    ( (This)->lpVtbl -> get_Mode(This,pMode) )
#define IConfigInterleaving_put_Interleaving(This,prtInterleave,prtPreroll)    ( (This)->lpVtbl -> put_Interleaving(This,prtInterleave,prtPreroll) )
#define IConfigInterleaving_get_Interleaving(This,prtInterleave,prtPreroll)    ( (This)->lpVtbl -> get_Interleaving(This,prtInterleave,prtPreroll) )
#endif
#endif
#ifndef __IConfigAviMux_INTERFACE_DEFINED__
#define __IConfigAviMux_INTERFACE_DEFINED__
extern const IID IID_IConfigAviMux;
typedef struct IConfigAviMuxVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IConfigAviMux *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IConfigAviMux *This);
	ULONG(STDMETHODCALLTYPE *Release) (IConfigAviMux *This);
	HRESULT(STDMETHODCALLTYPE *SetMasterStream) (IConfigAviMux *This, LONG iStream);
	HRESULT(STDMETHODCALLTYPE *GetMasterStream) (IConfigAviMux *This, LONG *pStream);
	HRESULT(STDMETHODCALLTYPE *SetOutputCompatibilityIndex) (IConfigAviMux *This, BOOL fOldIndex);
	HRESULT(STDMETHODCALLTYPE *GetOutputCompatibilityIndex) (IConfigAviMux *This, BOOL *pfOldIndex);
	END_INTERFACE
}  IConfigAviMuxVtbl;
interface IConfigAviMux
{
	CONST_VTBL struct IConfigAviMuxVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IConfigAviMux_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IConfigAviMux_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IConfigAviMux_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IConfigAviMux_SetMasterStream(This,iStream)    ( (This)->lpVtbl -> SetMasterStream(This,iStream) )
#define IConfigAviMux_GetMasterStream(This,pStream)    ( (This)->lpVtbl -> GetMasterStream(This,pStream) )
#define IConfigAviMux_SetOutputCompatibilityIndex(This,fOldIndex)    ( (This)->lpVtbl -> SetOutputCompatibilityIndex(This,fOldIndex) )
#define IConfigAviMux_GetOutputCompatibilityIndex(This,pfOldIndex)    ( (This)->lpVtbl -> GetOutputCompatibilityIndex(This,pfOldIndex) )
#endif
#endif
typedef enum CompressionCaps
{
	CompressionCaps_CanQuality = 0x1,
	CompressionCaps_CanCrunch = 0x2,
	CompressionCaps_CanKeyFrame = 0x4,
	CompressionCaps_CanBFrame = 0x8,
	CompressionCaps_CanWindow = 0x10
} CompressionCaps;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0049_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0049_v0_0_s_ifspec;
#ifndef __IAMVideoCompression_INTERFACE_DEFINED__
#define __IAMVideoCompression_INTERFACE_DEFINED__
extern const IID IID_IAMVideoCompression;
typedef struct IAMVideoCompressionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAMVideoCompression *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAMVideoCompression *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAMVideoCompression *This);
	HRESULT(STDMETHODCALLTYPE *put_KeyFrameRate) (IAMVideoCompression *This, long KeyFrameRate);
	HRESULT(STDMETHODCALLTYPE *get_KeyFrameRate) (IAMVideoCompression *This, long *pKeyFrameRate);
	HRESULT(STDMETHODCALLTYPE *put_PFramesPerKeyFrame) (IAMVideoCompression *This, long PFramesPerKeyFrame);
	HRESULT(STDMETHODCALLTYPE *get_PFramesPerKeyFrame) (IAMVideoCompression *This, long *pPFramesPerKeyFrame);
	HRESULT(STDMETHODCALLTYPE *put_Quality) (IAMVideoCompression *This, double Quality);
	HRESULT(STDMETHODCALLTYPE *get_Quality) (IAMVideoCompression *This, double *pQuality);
	HRESULT(STDMETHODCALLTYPE *put_WindowSize) (IAMVideoCompression *This, DWORDLONG WindowSize);
	HRESULT(STDMETHODCALLTYPE *get_WindowSize) (IAMVideoCompression *This, DWORDLONG *pWindowSize);
	HRESULT(STDMETHODCALLTYPE *GetInfo) (IAMVideoCompression *This, LPWSTR pszVersion, int *pcbVersion, LPWSTR pszDescription, int *pcbDescription, long *pDefaultKeyFrameRate, long *pDefaultPFramesPerKey, double *pDefaultQuality, long *pCapabilities);
	HRESULT(STDMETHODCALLTYPE *OverrideKeyFrame) (IAMVideoCompression *This, long FrameNumber);
	HRESULT(STDMETHODCALLTYPE *OverrideFrameSize) (IAMVideoCompression *This, long FrameNumber, long Size);
	END_INTERFACE
}  IAMVideoCompressionVtbl;
interface IAMVideoCompression
{
	CONST_VTBL struct IAMVideoCompressionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMVideoCompression_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAMVideoCompression_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAMVideoCompression_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAMVideoCompression_put_KeyFrameRate(This,KeyFrameRate)    ( (This)->lpVtbl -> put_KeyFrameRate(This,KeyFrameRate) )
#define IAMVideoCompression_get_KeyFrameRate(This,pKeyFrameRate)    ( (This)->lpVtbl -> get_KeyFrameRate(This,pKeyFrameRate) )
#define IAMVideoCompression_put_PFramesPerKeyFrame(This,PFramesPerKeyFrame)    ( (This)->lpVtbl -> put_PFramesPerKeyFrame(This,PFramesPerKeyFrame) )
#define IAMVideoCompression_get_PFramesPerKeyFrame(This,pPFramesPerKeyFrame)    ( (This)->lpVtbl -> get_PFramesPerKeyFrame(This,pPFramesPerKeyFrame) )
#define IAMVideoCompression_put_Quality(This,Quality)    ( (This)->lpVtbl -> put_Quality(This,Quality) )
#define IAMVideoCompression_get_Quality(This,pQuality)    ( (This)->lpVtbl -> get_Quality(This,pQuality) )
#define IAMVideoCompression_put_WindowSize(This,WindowSize)    ( (This)->lpVtbl -> put_WindowSize(This,WindowSize) )
#define IAMVideoCompression_get_WindowSize(This,pWindowSize)    ( (This)->lpVtbl -> get_WindowSize(This,pWindowSize) )
#define IAMVideoCompression_GetInfo(This,pszVersion,pcbVersion,pszDescription,pcbDescription,pDefaultKeyFrameRate,pDefaultPFramesPerKey,pDefaultQuality,pCapabilities)    ( (This)->lpVtbl -> GetInfo(This,pszVersion,pcbVersion,pszDescription,pcbDescription,pDefaultKeyFrameRate,pDefaultPFramesPerKey,pDefaultQuality,pCapabilities) )
#define IAMVideoCompression_OverrideKeyFrame(This,FrameNumber)    ( (This)->lpVtbl -> OverrideKeyFrame(This,FrameNumber) )
#define IAMVideoCompression_OverrideFrameSize(This,FrameNumber,Size)    ( (This)->lpVtbl -> OverrideFrameSize(This,FrameNumber,Size) )
#endif
#endif
typedef enum VfwCaptureDialogs
{
	VfwCaptureDialog_Source = 0x1,
	VfwCaptureDialog_Format = 0x2,
	VfwCaptureDialog_Display = 0x4
} VfwCaptureDialogs;
typedef enum VfwCompressDialogs
{
	VfwCompressDialog_Config = 0x1,
	VfwCompressDialog_About = 0x2,
	VfwCompressDialog_QueryConfig = 0x4,
	VfwCompressDialog_QueryAbout = 0x8
} VfwCompressDialogs;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0050_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0050_v0_0_s_ifspec;
#ifndef __IAMVfwCaptureDialogs_INTERFACE_DEFINED__
#define __IAMVfwCaptureDialogs_INTERFACE_DEFINED__
extern const IID IID_IAMVfwCaptureDialogs;
typedef struct IAMVfwCaptureDialogsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAMVfwCaptureDialogs *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAMVfwCaptureDialogs *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAMVfwCaptureDialogs *This);
	HRESULT(STDMETHODCALLTYPE *HasDialog) (IAMVfwCaptureDialogs *This, int iDialog);
	HRESULT(STDMETHODCALLTYPE *ShowDialog) (IAMVfwCaptureDialogs *This, int iDialog, HWND hwnd);
	HRESULT(STDMETHODCALLTYPE *SendDriverMessage) (IAMVfwCaptureDialogs *This, int iDialog, int uMsg, long dw1, long dw2);
	END_INTERFACE
}  IAMVfwCaptureDialogsVtbl;
interface IAMVfwCaptureDialogs
{
	CONST_VTBL struct IAMVfwCaptureDialogsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMVfwCaptureDialogs_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAMVfwCaptureDialogs_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAMVfwCaptureDialogs_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAMVfwCaptureDialogs_HasDialog(This,iDialog)    ( (This)->lpVtbl -> HasDialog(This,iDialog) )
#define IAMVfwCaptureDialogs_ShowDialog(This,iDialog,hwnd)    ( (This)->lpVtbl -> ShowDialog(This,iDialog,hwnd) )
#define IAMVfwCaptureDialogs_SendDriverMessage(This,iDialog,uMsg,dw1,dw2)    ( (This)->lpVtbl -> SendDriverMessage(This,iDialog,uMsg,dw1,dw2) )
#endif
#endif
#ifndef __IAMVfwCompressDialogs_INTERFACE_DEFINED__
#define __IAMVfwCompressDialogs_INTERFACE_DEFINED__
extern const IID IID_IAMVfwCompressDialogs;
typedef struct IAMVfwCompressDialogsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAMVfwCompressDialogs *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAMVfwCompressDialogs *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAMVfwCompressDialogs *This);
	HRESULT(STDMETHODCALLTYPE *ShowDialog) (IAMVfwCompressDialogs *This, int iDialog, HWND hwnd);
	HRESULT(STDMETHODCALLTYPE *GetState) (IAMVfwCompressDialogs *This, LPVOID pState, int *pcbState);
	HRESULT(STDMETHODCALLTYPE *SetState) (IAMVfwCompressDialogs *This, LPVOID pState, int cbState);
	HRESULT(STDMETHODCALLTYPE *SendDriverMessage) (IAMVfwCompressDialogs *This, int uMsg, long dw1, long dw2);
	END_INTERFACE
}  IAMVfwCompressDialogsVtbl;
interface IAMVfwCompressDialogs
{
	CONST_VTBL struct IAMVfwCompressDialogsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMVfwCompressDialogs_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAMVfwCompressDialogs_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAMVfwCompressDialogs_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAMVfwCompressDialogs_ShowDialog(This,iDialog,hwnd)    ( (This)->lpVtbl -> ShowDialog(This,iDialog,hwnd) )
#define IAMVfwCompressDialogs_GetState(This,pState,pcbState)    ( (This)->lpVtbl -> GetState(This,pState,pcbState) )
#define IAMVfwCompressDialogs_SetState(This,pState,cbState)    ( (This)->lpVtbl -> SetState(This,pState,cbState) )
#define IAMVfwCompressDialogs_SendDriverMessage(This,uMsg,dw1,dw2)    ( (This)->lpVtbl -> SendDriverMessage(This,uMsg,dw1,dw2) )
#endif
#endif
#ifndef __IAMDroppedFrames_INTERFACE_DEFINED__
#define __IAMDroppedFrames_INTERFACE_DEFINED__
extern const IID IID_IAMDroppedFrames;
typedef struct IAMDroppedFramesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAMDroppedFrames *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAMDroppedFrames *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAMDroppedFrames *This);
	HRESULT(STDMETHODCALLTYPE *GetNumDropped) (IAMDroppedFrames *This, long *plDropped);
	HRESULT(STDMETHODCALLTYPE *GetNumNotDropped) (IAMDroppedFrames *This, long *plNotDropped);
	HRESULT(STDMETHODCALLTYPE *GetDroppedInfo) (IAMDroppedFrames *This, long lSize, long *plArray, long *plNumCopied);
	HRESULT(STDMETHODCALLTYPE *GetAverageFrameSize) (IAMDroppedFrames *This, long *plAverageSize);
	END_INTERFACE
}  IAMDroppedFramesVtbl;
interface IAMDroppedFrames
{
	CONST_VTBL struct IAMDroppedFramesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMDroppedFrames_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAMDroppedFrames_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAMDroppedFrames_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAMDroppedFrames_GetNumDropped(This,plDropped)    ( (This)->lpVtbl -> GetNumDropped(This,plDropped) )
#define IAMDroppedFrames_GetNumNotDropped(This,plNotDropped)    ( (This)->lpVtbl -> GetNumNotDropped(This,plNotDropped) )
#define IAMDroppedFrames_GetDroppedInfo(This,lSize,plArray,plNumCopied)    ( (This)->lpVtbl -> GetDroppedInfo(This,lSize,plArray,plNumCopied) )
#define IAMDroppedFrames_GetAverageFrameSize(This,plAverageSize)    ( (This)->lpVtbl -> GetAverageFrameSize(This,plAverageSize) )
#endif
#endif
#define AMF_AUTOMATICGAIN -1.0
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0053_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0053_v0_0_s_ifspec;
#ifndef __IAMAudioInputMixer_INTERFACE_DEFINED__
#define __IAMAudioInputMixer_INTERFACE_DEFINED__
extern const IID IID_IAMAudioInputMixer;
typedef struct IAMAudioInputMixerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAMAudioInputMixer *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAMAudioInputMixer *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAMAudioInputMixer *This);
	HRESULT(STDMETHODCALLTYPE *put_Enable) (IAMAudioInputMixer *This, BOOL fEnable);
	HRESULT(STDMETHODCALLTYPE *get_Enable) (IAMAudioInputMixer *This, BOOL *pfEnable);
	HRESULT(STDMETHODCALLTYPE *put_Mono) (IAMAudioInputMixer *This, BOOL fMono);
	HRESULT(STDMETHODCALLTYPE *get_Mono) (IAMAudioInputMixer *This, BOOL *pfMono);
	HRESULT(STDMETHODCALLTYPE *put_MixLevel) (IAMAudioInputMixer *This, double Level);
	HRESULT(STDMETHODCALLTYPE *get_MixLevel) (IAMAudioInputMixer *This, double *pLevel);
	HRESULT(STDMETHODCALLTYPE *put_Pan) (IAMAudioInputMixer *This, double Pan);
	HRESULT(STDMETHODCALLTYPE *get_Pan) (IAMAudioInputMixer *This, double *pPan);
	HRESULT(STDMETHODCALLTYPE *put_Loudness) (IAMAudioInputMixer *This, BOOL fLoudness);
	HRESULT(STDMETHODCALLTYPE *get_Loudness) (IAMAudioInputMixer *This, BOOL *pfLoudness);
	HRESULT(STDMETHODCALLTYPE *put_Treble) (IAMAudioInputMixer *This, double Treble);
	HRESULT(STDMETHODCALLTYPE *get_Treble) (IAMAudioInputMixer *This, double *pTreble);
	HRESULT(STDMETHODCALLTYPE *get_TrebleRange) (IAMAudioInputMixer *This, double *pRange);
	HRESULT(STDMETHODCALLTYPE *put_Bass) (IAMAudioInputMixer *This, double Bass);
	HRESULT(STDMETHODCALLTYPE *get_Bass) (IAMAudioInputMixer *This, double *pBass);
	HRESULT(STDMETHODCALLTYPE *get_BassRange) (IAMAudioInputMixer *This, double *pRange);
	END_INTERFACE
}  IAMAudioInputMixerVtbl;
interface IAMAudioInputMixer
{
	CONST_VTBL struct IAMAudioInputMixerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMAudioInputMixer_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAMAudioInputMixer_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAMAudioInputMixer_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAMAudioInputMixer_put_Enable(This,fEnable)    ( (This)->lpVtbl -> put_Enable(This,fEnable) )
#define IAMAudioInputMixer_get_Enable(This,pfEnable)    ( (This)->lpVtbl -> get_Enable(This,pfEnable) )
#define IAMAudioInputMixer_put_Mono(This,fMono)    ( (This)->lpVtbl -> put_Mono(This,fMono) )
#define IAMAudioInputMixer_get_Mono(This,pfMono)    ( (This)->lpVtbl -> get_Mono(This,pfMono) )
#define IAMAudioInputMixer_put_MixLevel(This,Level)    ( (This)->lpVtbl -> put_MixLevel(This,Level) )
#define IAMAudioInputMixer_get_MixLevel(This,pLevel)    ( (This)->lpVtbl -> get_MixLevel(This,pLevel) )
#define IAMAudioInputMixer_put_Pan(This,Pan)    ( (This)->lpVtbl -> put_Pan(This,Pan) )
#define IAMAudioInputMixer_get_Pan(This,pPan)    ( (This)->lpVtbl -> get_Pan(This,pPan) )
#define IAMAudioInputMixer_put_Loudness(This,fLoudness)    ( (This)->lpVtbl -> put_Loudness(This,fLoudness) )
#define IAMAudioInputMixer_get_Loudness(This,pfLoudness)    ( (This)->lpVtbl -> get_Loudness(This,pfLoudness) )
#define IAMAudioInputMixer_put_Treble(This,Treble)    ( (This)->lpVtbl -> put_Treble(This,Treble) )
#define IAMAudioInputMixer_get_Treble(This,pTreble)    ( (This)->lpVtbl -> get_Treble(This,pTreble) )
#define IAMAudioInputMixer_get_TrebleRange(This,pRange)    ( (This)->lpVtbl -> get_TrebleRange(This,pRange) )
#define IAMAudioInputMixer_put_Bass(This,Bass)    ( (This)->lpVtbl -> put_Bass(This,Bass) )
#define IAMAudioInputMixer_get_Bass(This,pBass)    ( (This)->lpVtbl -> get_Bass(This,pBass) )
#define IAMAudioInputMixer_get_BassRange(This,pRange)    ( (This)->lpVtbl -> get_BassRange(This,pRange) )
#endif
#endif
#ifndef __IAMBufferNegotiation_INTERFACE_DEFINED__
#define __IAMBufferNegotiation_INTERFACE_DEFINED__
extern const IID IID_IAMBufferNegotiation;
typedef struct IAMBufferNegotiationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAMBufferNegotiation *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAMBufferNegotiation *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAMBufferNegotiation *This);
	HRESULT(STDMETHODCALLTYPE *SuggestAllocatorProperties) (IAMBufferNegotiation *This, const ALLOCATOR_PROPERTIES *pprop);
	HRESULT(STDMETHODCALLTYPE *GetAllocatorProperties) (IAMBufferNegotiation *This, ALLOCATOR_PROPERTIES *pprop);
	END_INTERFACE
}  IAMBufferNegotiationVtbl;
interface IAMBufferNegotiation
{
	CONST_VTBL struct IAMBufferNegotiationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMBufferNegotiation_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAMBufferNegotiation_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAMBufferNegotiation_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAMBufferNegotiation_SuggestAllocatorProperties(This,pprop)    ( (This)->lpVtbl -> SuggestAllocatorProperties(This,pprop) )
#define IAMBufferNegotiation_GetAllocatorProperties(This,pprop)    ( (This)->lpVtbl -> GetAllocatorProperties(This,pprop) )
#endif
#endif
typedef enum tagAnalogVideoStandard
{
	AnalogVideo_None = 0,
	AnalogVideo_NTSC_M = 0x1,
	AnalogVideo_NTSC_M_J = 0x2,
	AnalogVideo_NTSC_433 = 0x4,
	AnalogVideo_PAL_B = 0x10,
	AnalogVideo_PAL_D = 0x20,
	AnalogVideo_PAL_G = 0x40,
	AnalogVideo_PAL_H = 0x80,
	AnalogVideo_PAL_I = 0x100,
	AnalogVideo_PAL_M = 0x200,
	AnalogVideo_PAL_N = 0x400,
	AnalogVideo_PAL_60 = 0x800,
	AnalogVideo_SECAM_B = 0x1000,
	AnalogVideo_SECAM_D = 0x2000,
	AnalogVideo_SECAM_G = 0x4000,
	AnalogVideo_SECAM_H = 0x8000,
	AnalogVideo_SECAM_K = 0x10000,
	AnalogVideo_SECAM_K1 = 0x20000,
	AnalogVideo_SECAM_L = 0x40000,
	AnalogVideo_SECAM_L1 = 0x80000,
	AnalogVideo_PAL_N_COMBO = 0x100000,
	AnalogVideoMask_MCE_NTSC = ((((((AnalogVideo_NTSC_M | AnalogVideo_NTSC_M_J) | AnalogVideo_NTSC_433) | AnalogVideo_PAL_M) | AnalogVideo_PAL_N) | AnalogVideo_PAL_60) | AnalogVideo_PAL_N_COMBO),
	AnalogVideoMask_MCE_PAL = ((((AnalogVideo_PAL_B | AnalogVideo_PAL_D) | AnalogVideo_PAL_G) | AnalogVideo_PAL_H) | AnalogVideo_PAL_I),
	AnalogVideoMask_MCE_SECAM = (((((((AnalogVideo_SECAM_B | AnalogVideo_SECAM_D) | AnalogVideo_SECAM_G) | AnalogVideo_SECAM_H) | AnalogVideo_SECAM_K) | AnalogVideo_SECAM_K1) | AnalogVideo_SECAM_L) | AnalogVideo_SECAM_L1)
} AnalogVideoStandard;
typedef enum tagTunerInputType
{
	TunerInputCable = 0,
	TunerInputAntenna = (TunerInputCable + 1)
} TunerInputType;
#define AnalogVideo_NTSC_Mask  0x00000007
#define AnalogVideo_PAL_Mask   0x00100FF0
#define AnalogVideo_SECAM_Mask 0x000FF000
typedef enum VideoCopyProtectionType
{
	VideoCopyProtectionMacrovisionBasic = 0,
	VideoCopyProtectionMacrovisionCBI = (VideoCopyProtectionMacrovisionBasic + 1)
} VideoCopyProtectionType;
typedef enum tagPhysicalConnectorType
{
	PhysConn_Video_Tuner = 1,
	PhysConn_Video_Composite = (PhysConn_Video_Tuner + 1),
	PhysConn_Video_SVideo = (PhysConn_Video_Composite + 1),
	PhysConn_Video_RGB = (PhysConn_Video_SVideo + 1),
	PhysConn_Video_YRYBY = (PhysConn_Video_RGB + 1),
	PhysConn_Video_SerialDigital = (PhysConn_Video_YRYBY + 1),
	PhysConn_Video_ParallelDigital = (PhysConn_Video_SerialDigital + 1),
	PhysConn_Video_SCSI = (PhysConn_Video_ParallelDigital + 1),
	PhysConn_Video_AUX = (PhysConn_Video_SCSI + 1),
	PhysConn_Video_1394 = (PhysConn_Video_AUX + 1),
	PhysConn_Video_USB = (PhysConn_Video_1394 + 1),
	PhysConn_Video_VideoDecoder = (PhysConn_Video_USB + 1),
	PhysConn_Video_VideoEncoder = (PhysConn_Video_VideoDecoder + 1),
	PhysConn_Video_SCART = (PhysConn_Video_VideoEncoder + 1),
	PhysConn_Video_Black = (PhysConn_Video_SCART + 1),
	PhysConn_Audio_Tuner = 0x1000,
	PhysConn_Audio_Line = (PhysConn_Audio_Tuner + 1),
	PhysConn_Audio_Mic = (PhysConn_Audio_Line + 1),
	PhysConn_Audio_AESDigital = (PhysConn_Audio_Mic + 1),
	PhysConn_Audio_SPDIFDigital = (PhysConn_Audio_AESDigital + 1),
	PhysConn_Audio_SCSI = (PhysConn_Audio_SPDIFDigital + 1),
	PhysConn_Audio_AUX = (PhysConn_Audio_SCSI + 1),
	PhysConn_Audio_1394 = (PhysConn_Audio_AUX + 1),
	PhysConn_Audio_USB = (PhysConn_Audio_1394 + 1),
	PhysConn_Audio_AudioDecoder = (PhysConn_Audio_USB + 1)
} PhysicalConnectorType;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0055_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0055_v0_0_s_ifspec;
#ifndef __IAMAnalogVideoDecoder_INTERFACE_DEFINED__
#define __IAMAnalogVideoDecoder_INTERFACE_DEFINED__
extern const IID IID_IAMAnalogVideoDecoder;
typedef struct IAMAnalogVideoDecoderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAMAnalogVideoDecoder *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAMAnalogVideoDecoder *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAMAnalogVideoDecoder *This);
	HRESULT(STDMETHODCALLTYPE *get_AvailableTVFormats) (IAMAnalogVideoDecoder *This, long *lAnalogVideoStandard);
	HRESULT(STDMETHODCALLTYPE *put_TVFormat) (IAMAnalogVideoDecoder *This, long lAnalogVideoStandard);
	HRESULT(STDMETHODCALLTYPE *get_TVFormat) (IAMAnalogVideoDecoder *This, long *plAnalogVideoStandard);
	HRESULT(STDMETHODCALLTYPE *get_HorizontalLocked) (IAMAnalogVideoDecoder *This, long *plLocked);
	HRESULT(STDMETHODCALLTYPE *put_VCRHorizontalLocking) (IAMAnalogVideoDecoder *This, long lVCRHorizontalLocking);
	HRESULT(STDMETHODCALLTYPE *get_VCRHorizontalLocking) (IAMAnalogVideoDecoder *This, long *plVCRHorizontalLocking);
	HRESULT(STDMETHODCALLTYPE *get_NumberOfLines) (IAMAnalogVideoDecoder *This, long *plNumberOfLines);
	HRESULT(STDMETHODCALLTYPE *put_OutputEnable) (IAMAnalogVideoDecoder *This, long lOutputEnable);
	HRESULT(STDMETHODCALLTYPE *get_OutputEnable) (IAMAnalogVideoDecoder *This, long *plOutputEnable);
	END_INTERFACE
}  IAMAnalogVideoDecoderVtbl;
interface IAMAnalogVideoDecoder
{
	CONST_VTBL struct IAMAnalogVideoDecoderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMAnalogVideoDecoder_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAMAnalogVideoDecoder_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAMAnalogVideoDecoder_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAMAnalogVideoDecoder_get_AvailableTVFormats(This,lAnalogVideoStandard)    ( (This)->lpVtbl -> get_AvailableTVFormats(This,lAnalogVideoStandard) )
#define IAMAnalogVideoDecoder_put_TVFormat(This,lAnalogVideoStandard)    ( (This)->lpVtbl -> put_TVFormat(This,lAnalogVideoStandard) )
#define IAMAnalogVideoDecoder_get_TVFormat(This,plAnalogVideoStandard)    ( (This)->lpVtbl -> get_TVFormat(This,plAnalogVideoStandard) )
#define IAMAnalogVideoDecoder_get_HorizontalLocked(This,plLocked)    ( (This)->lpVtbl -> get_HorizontalLocked(This,plLocked) )
#define IAMAnalogVideoDecoder_put_VCRHorizontalLocking(This,lVCRHorizontalLocking)    ( (This)->lpVtbl -> put_VCRHorizontalLocking(This,lVCRHorizontalLocking) )
#define IAMAnalogVideoDecoder_get_VCRHorizontalLocking(This,plVCRHorizontalLocking)    ( (This)->lpVtbl -> get_VCRHorizontalLocking(This,plVCRHorizontalLocking) )
#define IAMAnalogVideoDecoder_get_NumberOfLines(This,plNumberOfLines)    ( (This)->lpVtbl -> get_NumberOfLines(This,plNumberOfLines) )
#define IAMAnalogVideoDecoder_put_OutputEnable(This,lOutputEnable)    ( (This)->lpVtbl -> put_OutputEnable(This,lOutputEnable) )
#define IAMAnalogVideoDecoder_get_OutputEnable(This,plOutputEnable)    ( (This)->lpVtbl -> get_OutputEnable(This,plOutputEnable) )
#endif
#endif
typedef enum tagVideoProcAmpProperty
{
	VideoProcAmp_Brightness = 0,
	VideoProcAmp_Contrast = (VideoProcAmp_Brightness + 1),
	VideoProcAmp_Hue = (VideoProcAmp_Contrast + 1),
	VideoProcAmp_Saturation = (VideoProcAmp_Hue + 1),
	VideoProcAmp_Sharpness = (VideoProcAmp_Saturation + 1),
	VideoProcAmp_Gamma = (VideoProcAmp_Sharpness + 1),
	VideoProcAmp_ColorEnable = (VideoProcAmp_Gamma + 1),
	VideoProcAmp_WhiteBalance = (VideoProcAmp_ColorEnable + 1),
	VideoProcAmp_BacklightCompensation = (VideoProcAmp_WhiteBalance + 1),
	VideoProcAmp_Gain = (VideoProcAmp_BacklightCompensation + 1)
} VideoProcAmpProperty;
typedef enum tagVideoProcAmpFlags
{
	VideoProcAmp_Flags_Auto = 0x1,
	VideoProcAmp_Flags_Manual = 0x2
} VideoProcAmpFlags;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0056_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0056_v0_0_s_ifspec;
#ifndef __IAMVideoProcAmp_INTERFACE_DEFINED__
#define __IAMVideoProcAmp_INTERFACE_DEFINED__
extern const IID IID_IAMVideoProcAmp;
typedef struct IAMVideoProcAmpVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAMVideoProcAmp *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAMVideoProcAmp *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAMVideoProcAmp *This);
	HRESULT(STDMETHODCALLTYPE *GetRange) (IAMVideoProcAmp *This, long Property, long *pMin, long *pMax, long *pSteppingDelta, long *pDefault, long *pCapsFlags);
	HRESULT(STDMETHODCALLTYPE *Set) (IAMVideoProcAmp *This, long Property, long lValue, long Flags);
	HRESULT(STDMETHODCALLTYPE *Get) (IAMVideoProcAmp *This, long Property, long *lValue, long *Flags);
	END_INTERFACE
}  IAMVideoProcAmpVtbl;
interface IAMVideoProcAmp
{
	CONST_VTBL struct IAMVideoProcAmpVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMVideoProcAmp_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAMVideoProcAmp_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAMVideoProcAmp_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAMVideoProcAmp_GetRange(This,Property,pMin,pMax,pSteppingDelta,pDefault,pCapsFlags)    ( (This)->lpVtbl -> GetRange(This,Property,pMin,pMax,pSteppingDelta,pDefault,pCapsFlags) )
#define IAMVideoProcAmp_Set(This,Property,lValue,Flags)    ( (This)->lpVtbl -> Set(This,Property,lValue,Flags) )
#define IAMVideoProcAmp_Get(This,Property,lValue,Flags)    ( (This)->lpVtbl -> Get(This,Property,lValue,Flags) )
#endif
#endif
typedef enum tagCameraControlProperty
{
	CameraControl_Pan = 0,
	CameraControl_Tilt = (CameraControl_Pan + 1),
	CameraControl_Roll = (CameraControl_Tilt + 1),
	CameraControl_Zoom = (CameraControl_Roll + 1),
	CameraControl_Exposure = (CameraControl_Zoom + 1),
	CameraControl_Iris = (CameraControl_Exposure + 1),
	CameraControl_Focus = (CameraControl_Iris + 1)
} CameraControlProperty;
typedef enum tagCameraControlFlags
{
	CameraControl_Flags_Auto = 0x1,
	CameraControl_Flags_Manual = 0x2
} CameraControlFlags;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0057_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0057_v0_0_s_ifspec;
#ifndef __IAMCameraControl_INTERFACE_DEFINED__
#define __IAMCameraControl_INTERFACE_DEFINED__
extern const IID IID_IAMCameraControl;
typedef struct IAMCameraControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAMCameraControl *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAMCameraControl *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAMCameraControl *This);
	HRESULT(STDMETHODCALLTYPE *GetRange) (IAMCameraControl *This, long Property, long *pMin, long *pMax, long *pSteppingDelta, long *pDefault, long *pCapsFlags);
	HRESULT(STDMETHODCALLTYPE *Set) (IAMCameraControl *This, long Property, long lValue, long Flags);
	HRESULT(STDMETHODCALLTYPE *Get) (IAMCameraControl *This, long Property, long *lValue, long *Flags);
	END_INTERFACE
}  IAMCameraControlVtbl;
interface IAMCameraControl
{
	CONST_VTBL struct IAMCameraControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMCameraControl_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAMCameraControl_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAMCameraControl_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAMCameraControl_GetRange(This,Property,pMin,pMax,pSteppingDelta,pDefault,pCapsFlags)    ( (This)->lpVtbl -> GetRange(This,Property,pMin,pMax,pSteppingDelta,pDefault,pCapsFlags) )
#define IAMCameraControl_Set(This,Property,lValue,Flags)    ( (This)->lpVtbl -> Set(This,Property,lValue,Flags) )
#define IAMCameraControl_Get(This,Property,lValue,Flags)    ( (This)->lpVtbl -> Get(This,Property,lValue,Flags) )
#endif
#endif
typedef enum tagVideoControlFlags
{
	VideoControlFlag_FlipHorizontal = 0x1,
	VideoControlFlag_FlipVertical = 0x2,
	VideoControlFlag_ExternalTriggerEnable = 0x4,
	VideoControlFlag_Trigger = 0x8
} VideoControlFlags;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0058_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0058_v0_0_s_ifspec;
#ifndef __IAMVideoControl_INTERFACE_DEFINED__
#define __IAMVideoControl_INTERFACE_DEFINED__
extern const IID IID_IAMVideoControl;
typedef struct IAMVideoControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAMVideoControl *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAMVideoControl *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAMVideoControl *This);
	HRESULT(STDMETHODCALLTYPE *GetCaps) (IAMVideoControl *This, IPin *pPin, long *pCapsFlags);
	HRESULT(STDMETHODCALLTYPE *SetMode) (IAMVideoControl *This, IPin *pPin, long Mode);
	HRESULT(STDMETHODCALLTYPE *GetMode) (IAMVideoControl *This, IPin *pPin, long *Mode);
	HRESULT(STDMETHODCALLTYPE *GetCurrentActualFrameRate) (IAMVideoControl *This, IPin *pPin, LONGLONG *ActualFrameRate);
	HRESULT(STDMETHODCALLTYPE *GetMaxAvailableFrameRate) (IAMVideoControl *This, IPin *pPin, long iIndex, SIZE Dimensions, LONGLONG *MaxAvailableFrameRate);
	HRESULT(STDMETHODCALLTYPE *GetFrameRateList) (IAMVideoControl *This, IPin *pPin, long iIndex, SIZE Dimensions, long *ListSize, LONGLONG **FrameRates);
	END_INTERFACE
}  IAMVideoControlVtbl;
interface IAMVideoControl
{
	CONST_VTBL struct IAMVideoControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMVideoControl_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAMVideoControl_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAMVideoControl_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAMVideoControl_GetCaps(This,pPin,pCapsFlags)    ( (This)->lpVtbl -> GetCaps(This,pPin,pCapsFlags) )
#define IAMVideoControl_SetMode(This,pPin,Mode)    ( (This)->lpVtbl -> SetMode(This,pPin,Mode) )
#define IAMVideoControl_GetMode(This,pPin,Mode)    ( (This)->lpVtbl -> GetMode(This,pPin,Mode) )
#define IAMVideoControl_GetCurrentActualFrameRate(This,pPin,ActualFrameRate)    ( (This)->lpVtbl -> GetCurrentActualFrameRate(This,pPin,ActualFrameRate) )
#define IAMVideoControl_GetMaxAvailableFrameRate(This,pPin,iIndex,Dimensions,MaxAvailableFrameRate)    ( (This)->lpVtbl -> GetMaxAvailableFrameRate(This,pPin,iIndex,Dimensions,MaxAvailableFrameRate) )
#define IAMVideoControl_GetFrameRateList(This,pPin,iIndex,Dimensions,ListSize,FrameRates)    ( (This)->lpVtbl -> GetFrameRateList(This,pPin,iIndex,Dimensions,ListSize,FrameRates) )
#endif
#endif
#ifndef __IAMCrossbar_INTERFACE_DEFINED__
#define __IAMCrossbar_INTERFACE_DEFINED__
extern const IID IID_IAMCrossbar;
typedef struct IAMCrossbarVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAMCrossbar *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAMCrossbar *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAMCrossbar *This);
	HRESULT(STDMETHODCALLTYPE *get_PinCounts) (IAMCrossbar *This, long *OutputPinCount, long *InputPinCount);
	HRESULT(STDMETHODCALLTYPE *CanRoute) (IAMCrossbar *This, long OutputPinIndex, long InputPinIndex);
	HRESULT(STDMETHODCALLTYPE *Route) (IAMCrossbar *This, long OutputPinIndex, long InputPinIndex);
	HRESULT(STDMETHODCALLTYPE *get_IsRoutedTo) (IAMCrossbar *This, long OutputPinIndex, long *InputPinIndex);
	HRESULT(STDMETHODCALLTYPE *get_CrossbarPinInfo) (IAMCrossbar *This, BOOL IsInputPin, long PinIndex, long *PinIndexRelated, long *PhysicalType);
	END_INTERFACE
}  IAMCrossbarVtbl;
interface IAMCrossbar
{
	CONST_VTBL struct IAMCrossbarVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMCrossbar_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAMCrossbar_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAMCrossbar_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAMCrossbar_get_PinCounts(This,OutputPinCount,InputPinCount)    ( (This)->lpVtbl -> get_PinCounts(This,OutputPinCount,InputPinCount) )
#define IAMCrossbar_CanRoute(This,OutputPinIndex,InputPinIndex)    ( (This)->lpVtbl -> CanRoute(This,OutputPinIndex,InputPinIndex) )
#define IAMCrossbar_Route(This,OutputPinIndex,InputPinIndex)    ( (This)->lpVtbl -> Route(This,OutputPinIndex,InputPinIndex) )
#define IAMCrossbar_get_IsRoutedTo(This,OutputPinIndex,InputPinIndex)    ( (This)->lpVtbl -> get_IsRoutedTo(This,OutputPinIndex,InputPinIndex) )
#define IAMCrossbar_get_CrossbarPinInfo(This,IsInputPin,PinIndex,PinIndexRelated,PhysicalType)    ( (This)->lpVtbl -> get_CrossbarPinInfo(This,IsInputPin,PinIndex,PinIndexRelated,PhysicalType) )
#endif
#endif
typedef enum tagAMTunerSubChannel
{
	AMTUNER_SUBCHAN_NO_TUNE = -2,
	AMTUNER_SUBCHAN_DEFAULT = -1
} AMTunerSubChannel;
typedef enum tagAMTunerSignalStrength
{
	AMTUNER_HASNOSIGNALSTRENGTH = -1,
	AMTUNER_NOSIGNAL = 0,
	AMTUNER_SIGNALPRESENT = 1
} AMTunerSignalStrength;
typedef enum tagAMTunerModeType
{
	AMTUNER_MODE_DEFAULT = 0,
	AMTUNER_MODE_TV = 0x1,
	AMTUNER_MODE_FM_RADIO = 0x2,
	AMTUNER_MODE_AM_RADIO = 0x4,
	AMTUNER_MODE_DSS = 0x8
} AMTunerModeType;
typedef
enum tagAMTunerEventType { AMTUNER_EVENT_CHANGED = 0x1
} AMTunerEventType;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0060_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0060_v0_0_s_ifspec;
#ifndef __IAMTuner_INTERFACE_DEFINED__
#define __IAMTuner_INTERFACE_DEFINED__
extern const IID IID_IAMTuner;
typedef struct IAMTunerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAMTuner *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAMTuner *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAMTuner *This);
	HRESULT(STDMETHODCALLTYPE *put_Channel) (IAMTuner *This, long lChannel, long lVideoSubChannel, long lAudioSubChannel);
	HRESULT(STDMETHODCALLTYPE *get_Channel) (IAMTuner *This, long *plChannel, long *plVideoSubChannel, long *plAudioSubChannel);
	HRESULT(STDMETHODCALLTYPE *ChannelMinMax) (IAMTuner *This, long *lChannelMin, long *lChannelMax);
	HRESULT(STDMETHODCALLTYPE *put_CountryCode) (IAMTuner *This, long lCountryCode);
	HRESULT(STDMETHODCALLTYPE *get_CountryCode) (IAMTuner *This, long *plCountryCode);
	HRESULT(STDMETHODCALLTYPE *put_TuningSpace) (IAMTuner *This, long lTuningSpace);
	HRESULT(STDMETHODCALLTYPE *get_TuningSpace) (IAMTuner *This, long *plTuningSpace);
	HRESULT(STDMETHODCALLTYPE *Logon) (IAMTuner *This, HANDLE hCurrentUser);
	HRESULT(STDMETHODCALLTYPE *Logout) (IAMTuner *This);
	HRESULT(STDMETHODCALLTYPE *SignalPresent) (IAMTuner *This, long *plSignalStrength);
	HRESULT(STDMETHODCALLTYPE *put_Mode) (IAMTuner *This, AMTunerModeType lMode);
	HRESULT(STDMETHODCALLTYPE *get_Mode) (IAMTuner *This, AMTunerModeType *plMode);
	HRESULT(STDMETHODCALLTYPE *GetAvailableModes) (IAMTuner *This, long *plModes);
	HRESULT(STDMETHODCALLTYPE *RegisterNotificationCallBack) (IAMTuner *This, IAMTunerNotification *pNotify, long lEvents);
	HRESULT(STDMETHODCALLTYPE *UnRegisterNotificationCallBack) (IAMTuner *This, IAMTunerNotification *pNotify);
	END_INTERFACE
}  IAMTunerVtbl;
interface IAMTuner
{
	CONST_VTBL struct IAMTunerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMTuner_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAMTuner_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAMTuner_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAMTuner_put_Channel(This,lChannel,lVideoSubChannel,lAudioSubChannel)    ( (This)->lpVtbl -> put_Channel(This,lChannel,lVideoSubChannel,lAudioSubChannel) )
#define IAMTuner_get_Channel(This,plChannel,plVideoSubChannel,plAudioSubChannel)    ( (This)->lpVtbl -> get_Channel(This,plChannel,plVideoSubChannel,plAudioSubChannel) )
#define IAMTuner_ChannelMinMax(This,lChannelMin,lChannelMax)    ( (This)->lpVtbl -> ChannelMinMax(This,lChannelMin,lChannelMax) )
#define IAMTuner_put_CountryCode(This,lCountryCode)    ( (This)->lpVtbl -> put_CountryCode(This,lCountryCode) )
#define IAMTuner_get_CountryCode(This,plCountryCode)    ( (This)->lpVtbl -> get_CountryCode(This,plCountryCode) )
#define IAMTuner_put_TuningSpace(This,lTuningSpace)    ( (This)->lpVtbl -> put_TuningSpace(This,lTuningSpace) )
#define IAMTuner_get_TuningSpace(This,plTuningSpace)    ( (This)->lpVtbl -> get_TuningSpace(This,plTuningSpace) )
#define IAMTuner_Logon(This,hCurrentUser)    ( (This)->lpVtbl -> Logon(This,hCurrentUser) )
#define IAMTuner_Logout(This)    ( (This)->lpVtbl -> Logout(This) )
#define IAMTuner_SignalPresent(This,plSignalStrength)    ( (This)->lpVtbl -> SignalPresent(This,plSignalStrength) )
#define IAMTuner_put_Mode(This,lMode)    ( (This)->lpVtbl -> put_Mode(This,lMode) )
#define IAMTuner_get_Mode(This,plMode)    ( (This)->lpVtbl -> get_Mode(This,plMode) )
#define IAMTuner_GetAvailableModes(This,plModes)    ( (This)->lpVtbl -> GetAvailableModes(This,plModes) )
#define IAMTuner_RegisterNotificationCallBack(This,pNotify,lEvents)    ( (This)->lpVtbl -> RegisterNotificationCallBack(This,pNotify,lEvents) )
#define IAMTuner_UnRegisterNotificationCallBack(This,pNotify)    ( (This)->lpVtbl -> UnRegisterNotificationCallBack(This,pNotify) )
#endif
#endif
#ifndef __IAMTunerNotification_INTERFACE_DEFINED__
#define __IAMTunerNotification_INTERFACE_DEFINED__
extern const IID IID_IAMTunerNotification;
typedef struct IAMTunerNotificationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAMTunerNotification *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAMTunerNotification *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAMTunerNotification *This);
	HRESULT(STDMETHODCALLTYPE *OnEvent) (IAMTunerNotification *This, AMTunerEventType Event);
	END_INTERFACE
}  IAMTunerNotificationVtbl;
interface IAMTunerNotification
{
	CONST_VTBL struct IAMTunerNotificationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMTunerNotification_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAMTunerNotification_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAMTunerNotification_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAMTunerNotification_OnEvent(This,Event)    ( (This)->lpVtbl -> OnEvent(This,Event) )
#endif
#endif
#ifndef __IAMTVTuner_INTERFACE_DEFINED__
#define __IAMTVTuner_INTERFACE_DEFINED__
extern const IID IID_IAMTVTuner;
typedef struct IAMTVTunerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAMTVTuner *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAMTVTuner *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAMTVTuner *This);
	HRESULT(STDMETHODCALLTYPE *put_Channel) (IAMTVTuner *This, long lChannel, long lVideoSubChannel, long lAudioSubChannel);
	HRESULT(STDMETHODCALLTYPE *get_Channel) (IAMTVTuner *This, long *plChannel, long *plVideoSubChannel, long *plAudioSubChannel);
	HRESULT(STDMETHODCALLTYPE *ChannelMinMax) (IAMTVTuner *This, long *lChannelMin, long *lChannelMax);
	HRESULT(STDMETHODCALLTYPE *put_CountryCode) (IAMTVTuner *This, long lCountryCode);
	HRESULT(STDMETHODCALLTYPE *get_CountryCode) (IAMTVTuner *This, long *plCountryCode);
	HRESULT(STDMETHODCALLTYPE *put_TuningSpace) (IAMTVTuner *This, long lTuningSpace);
	HRESULT(STDMETHODCALLTYPE *get_TuningSpace) (IAMTVTuner *This, long *plTuningSpace);
	HRESULT(STDMETHODCALLTYPE *Logon) (IAMTVTuner *This, HANDLE hCurrentUser);
	HRESULT(STDMETHODCALLTYPE *Logout) (IAMTVTuner *This);
	HRESULT(STDMETHODCALLTYPE *SignalPresent) (IAMTVTuner *This, long *plSignalStrength);
	HRESULT(STDMETHODCALLTYPE *put_Mode) (IAMTVTuner *This, AMTunerModeType lMode);
	HRESULT(STDMETHODCALLTYPE *get_Mode) (IAMTVTuner *This, AMTunerModeType *plMode);
	HRESULT(STDMETHODCALLTYPE *GetAvailableModes) (IAMTVTuner *This, long *plModes);
	HRESULT(STDMETHODCALLTYPE *RegisterNotificationCallBack) (IAMTVTuner *This, IAMTunerNotification *pNotify, long lEvents);
	HRESULT(STDMETHODCALLTYPE *UnRegisterNotificationCallBack) (IAMTVTuner *This, IAMTunerNotification *pNotify);
	HRESULT(STDMETHODCALLTYPE *get_AvailableTVFormats) (IAMTVTuner *This, long *lAnalogVideoStandard);
	HRESULT(STDMETHODCALLTYPE *get_TVFormat) (IAMTVTuner *This, long *plAnalogVideoStandard);
	HRESULT(STDMETHODCALLTYPE *AutoTune) (IAMTVTuner *This, long lChannel, long *plFoundSignal);
	HRESULT(STDMETHODCALLTYPE *StoreAutoTune) (IAMTVTuner *This);
	HRESULT(STDMETHODCALLTYPE *get_NumInputConnections) (IAMTVTuner *This, long *plNumInputConnections);
	HRESULT(STDMETHODCALLTYPE *put_InputType) (IAMTVTuner *This, long lIndex, TunerInputType InputType);
	HRESULT(STDMETHODCALLTYPE *get_InputType) (IAMTVTuner *This, long lIndex, TunerInputType *pInputType);
	HRESULT(STDMETHODCALLTYPE *put_ConnectInput) (IAMTVTuner *This, long lIndex);
	HRESULT(STDMETHODCALLTYPE *get_ConnectInput) (IAMTVTuner *This, long *plIndex);
	HRESULT(STDMETHODCALLTYPE *get_VideoFrequency) (IAMTVTuner *This, long *lFreq);
	HRESULT(STDMETHODCALLTYPE *get_AudioFrequency) (IAMTVTuner *This, long *lFreq);
	END_INTERFACE
}  IAMTVTunerVtbl;
interface IAMTVTuner
{
	CONST_VTBL struct IAMTVTunerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMTVTuner_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAMTVTuner_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAMTVTuner_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAMTVTuner_put_Channel(This,lChannel,lVideoSubChannel,lAudioSubChannel)    ( (This)->lpVtbl -> put_Channel(This,lChannel,lVideoSubChannel,lAudioSubChannel) )
#define IAMTVTuner_get_Channel(This,plChannel,plVideoSubChannel,plAudioSubChannel)    ( (This)->lpVtbl -> get_Channel(This,plChannel,plVideoSubChannel,plAudioSubChannel) )
#define IAMTVTuner_ChannelMinMax(This,lChannelMin,lChannelMax)    ( (This)->lpVtbl -> ChannelMinMax(This,lChannelMin,lChannelMax) )
#define IAMTVTuner_put_CountryCode(This,lCountryCode)    ( (This)->lpVtbl -> put_CountryCode(This,lCountryCode) )
#define IAMTVTuner_get_CountryCode(This,plCountryCode)    ( (This)->lpVtbl -> get_CountryCode(This,plCountryCode) )
#define IAMTVTuner_put_TuningSpace(This,lTuningSpace)    ( (This)->lpVtbl -> put_TuningSpace(This,lTuningSpace) )
#define IAMTVTuner_get_TuningSpace(This,plTuningSpace)    ( (This)->lpVtbl -> get_TuningSpace(This,plTuningSpace) )
#define IAMTVTuner_Logon(This,hCurrentUser)    ( (This)->lpVtbl -> Logon(This,hCurrentUser) )
#define IAMTVTuner_Logout(This)    ( (This)->lpVtbl -> Logout(This) )
#define IAMTVTuner_SignalPresent(This,plSignalStrength)    ( (This)->lpVtbl -> SignalPresent(This,plSignalStrength) )
#define IAMTVTuner_put_Mode(This,lMode)    ( (This)->lpVtbl -> put_Mode(This,lMode) )
#define IAMTVTuner_get_Mode(This,plMode)    ( (This)->lpVtbl -> get_Mode(This,plMode) )
#define IAMTVTuner_GetAvailableModes(This,plModes)    ( (This)->lpVtbl -> GetAvailableModes(This,plModes) )
#define IAMTVTuner_RegisterNotificationCallBack(This,pNotify,lEvents)    ( (This)->lpVtbl -> RegisterNotificationCallBack(This,pNotify,lEvents) )
#define IAMTVTuner_UnRegisterNotificationCallBack(This,pNotify)    ( (This)->lpVtbl -> UnRegisterNotificationCallBack(This,pNotify) )
#define IAMTVTuner_get_AvailableTVFormats(This,lAnalogVideoStandard)    ( (This)->lpVtbl -> get_AvailableTVFormats(This,lAnalogVideoStandard) )
#define IAMTVTuner_get_TVFormat(This,plAnalogVideoStandard)    ( (This)->lpVtbl -> get_TVFormat(This,plAnalogVideoStandard) )
#define IAMTVTuner_AutoTune(This,lChannel,plFoundSignal)    ( (This)->lpVtbl -> AutoTune(This,lChannel,plFoundSignal) )
#define IAMTVTuner_StoreAutoTune(This)    ( (This)->lpVtbl -> StoreAutoTune(This) )
#define IAMTVTuner_get_NumInputConnections(This,plNumInputConnections)    ( (This)->lpVtbl -> get_NumInputConnections(This,plNumInputConnections) )
#define IAMTVTuner_put_InputType(This,lIndex,InputType)    ( (This)->lpVtbl -> put_InputType(This,lIndex,InputType) )
#define IAMTVTuner_get_InputType(This,lIndex,pInputType)    ( (This)->lpVtbl -> get_InputType(This,lIndex,pInputType) )
#define IAMTVTuner_put_ConnectInput(This,lIndex)    ( (This)->lpVtbl -> put_ConnectInput(This,lIndex) )
#define IAMTVTuner_get_ConnectInput(This,plIndex)    ( (This)->lpVtbl -> get_ConnectInput(This,plIndex) )
#define IAMTVTuner_get_VideoFrequency(This,lFreq)    ( (This)->lpVtbl -> get_VideoFrequency(This,lFreq) )
#define IAMTVTuner_get_AudioFrequency(This,lFreq)    ( (This)->lpVtbl -> get_AudioFrequency(This,lFreq) )
#endif
#endif
#ifndef __IBPCSatelliteTuner_INTERFACE_DEFINED__
#define __IBPCSatelliteTuner_INTERFACE_DEFINED__
extern const IID IID_IBPCSatelliteTuner;
typedef struct IBPCSatelliteTunerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IBPCSatelliteTuner *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IBPCSatelliteTuner *This);
	ULONG(STDMETHODCALLTYPE *Release) (IBPCSatelliteTuner *This);
	HRESULT(STDMETHODCALLTYPE *put_Channel) (IBPCSatelliteTuner *This, long lChannel, long lVideoSubChannel, long lAudioSubChannel);
	HRESULT(STDMETHODCALLTYPE *get_Channel) (IBPCSatelliteTuner *This, long *plChannel, long *plVideoSubChannel, long *plAudioSubChannel);
	HRESULT(STDMETHODCALLTYPE *ChannelMinMax) (IBPCSatelliteTuner *This, long *lChannelMin, long *lChannelMax);
	HRESULT(STDMETHODCALLTYPE *put_CountryCode) (IBPCSatelliteTuner *This, long lCountryCode);
	HRESULT(STDMETHODCALLTYPE *get_CountryCode) (IBPCSatelliteTuner *This, long *plCountryCode);
	HRESULT(STDMETHODCALLTYPE *put_TuningSpace) (IBPCSatelliteTuner *This, long lTuningSpace);
	HRESULT(STDMETHODCALLTYPE *get_TuningSpace) (IBPCSatelliteTuner *This, long *plTuningSpace);
	HRESULT(STDMETHODCALLTYPE *Logon) (IBPCSatelliteTuner *This, HANDLE hCurrentUser);
	HRESULT(STDMETHODCALLTYPE *Logout) (IBPCSatelliteTuner *This);
	HRESULT(STDMETHODCALLTYPE *SignalPresent) (IBPCSatelliteTuner *This, long *plSignalStrength);
	HRESULT(STDMETHODCALLTYPE *put_Mode) (IBPCSatelliteTuner *This, AMTunerModeType lMode);
	HRESULT(STDMETHODCALLTYPE *get_Mode) (IBPCSatelliteTuner *This, AMTunerModeType *plMode);
	HRESULT(STDMETHODCALLTYPE *GetAvailableModes) (IBPCSatelliteTuner *This, long *plModes);
	HRESULT(STDMETHODCALLTYPE *RegisterNotificationCallBack) (IBPCSatelliteTuner *This, IAMTunerNotification *pNotify, long lEvents);
	HRESULT(STDMETHODCALLTYPE *UnRegisterNotificationCallBack) (IBPCSatelliteTuner *This, IAMTunerNotification *pNotify);
	HRESULT(STDMETHODCALLTYPE *get_DefaultSubChannelTypes) (IBPCSatelliteTuner *This, long *plDefaultVideoType, long *plDefaultAudioType);
	HRESULT(STDMETHODCALLTYPE *put_DefaultSubChannelTypes) (IBPCSatelliteTuner *This, long lDefaultVideoType, long lDefaultAudioType);
	HRESULT(STDMETHODCALLTYPE *IsTapingPermitted) (IBPCSatelliteTuner *This);
	END_INTERFACE
}  IBPCSatelliteTunerVtbl;
interface IBPCSatelliteTuner
{
	CONST_VTBL struct IBPCSatelliteTunerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IBPCSatelliteTuner_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IBPCSatelliteTuner_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IBPCSatelliteTuner_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IBPCSatelliteTuner_put_Channel(This,lChannel,lVideoSubChannel,lAudioSubChannel)    ( (This)->lpVtbl -> put_Channel(This,lChannel,lVideoSubChannel,lAudioSubChannel) )
#define IBPCSatelliteTuner_get_Channel(This,plChannel,plVideoSubChannel,plAudioSubChannel)    ( (This)->lpVtbl -> get_Channel(This,plChannel,plVideoSubChannel,plAudioSubChannel) )
#define IBPCSatelliteTuner_ChannelMinMax(This,lChannelMin,lChannelMax)    ( (This)->lpVtbl -> ChannelMinMax(This,lChannelMin,lChannelMax) )
#define IBPCSatelliteTuner_put_CountryCode(This,lCountryCode)    ( (This)->lpVtbl -> put_CountryCode(This,lCountryCode) )
#define IBPCSatelliteTuner_get_CountryCode(This,plCountryCode)    ( (This)->lpVtbl -> get_CountryCode(This,plCountryCode) )
#define IBPCSatelliteTuner_put_TuningSpace(This,lTuningSpace)    ( (This)->lpVtbl -> put_TuningSpace(This,lTuningSpace) )
#define IBPCSatelliteTuner_get_TuningSpace(This,plTuningSpace)    ( (This)->lpVtbl -> get_TuningSpace(This,plTuningSpace) )
#define IBPCSatelliteTuner_Logon(This,hCurrentUser)    ( (This)->lpVtbl -> Logon(This,hCurrentUser) )
#define IBPCSatelliteTuner_Logout(This)    ( (This)->lpVtbl -> Logout(This) )
#define IBPCSatelliteTuner_SignalPresent(This,plSignalStrength)    ( (This)->lpVtbl -> SignalPresent(This,plSignalStrength) )
#define IBPCSatelliteTuner_put_Mode(This,lMode)    ( (This)->lpVtbl -> put_Mode(This,lMode) )
#define IBPCSatelliteTuner_get_Mode(This,plMode)    ( (This)->lpVtbl -> get_Mode(This,plMode) )
#define IBPCSatelliteTuner_GetAvailableModes(This,plModes)    ( (This)->lpVtbl -> GetAvailableModes(This,plModes) )
#define IBPCSatelliteTuner_RegisterNotificationCallBack(This,pNotify,lEvents)    ( (This)->lpVtbl -> RegisterNotificationCallBack(This,pNotify,lEvents) )
#define IBPCSatelliteTuner_UnRegisterNotificationCallBack(This,pNotify)    ( (This)->lpVtbl -> UnRegisterNotificationCallBack(This,pNotify) )
#define IBPCSatelliteTuner_get_DefaultSubChannelTypes(This,plDefaultVideoType,plDefaultAudioType)    ( (This)->lpVtbl -> get_DefaultSubChannelTypes(This,plDefaultVideoType,plDefaultAudioType) )
#define IBPCSatelliteTuner_put_DefaultSubChannelTypes(This,lDefaultVideoType,lDefaultAudioType)    ( (This)->lpVtbl -> put_DefaultSubChannelTypes(This,lDefaultVideoType,lDefaultAudioType) )
#define IBPCSatelliteTuner_IsTapingPermitted(This)    ( (This)->lpVtbl -> IsTapingPermitted(This) )
#endif
#endif
typedef enum tagTVAudioMode
{
	AMTVAUDIO_MODE_MONO     = 0x1,
	AMTVAUDIO_MODE_STEREO   = 0x2,
	AMTVAUDIO_MODE_LANG_A   = 0x10,
	AMTVAUDIO_MODE_LANG_B   = 0x20,
	AMTVAUDIO_MODE_LANG_C   = 0x40,
	AMTVAUDIO_PRESET_STEREO = 0x200,
	AMTVAUDIO_PRESET_LANG_A = 0x1000,
	AMTVAUDIO_PRESET_LANG_B = 0x2000,
	AMTVAUDIO_PRESET_LANG_C = 0x4000
} TVAudioMode;
typedef enum tagAMTVAudioEventType
{
	AMTVAUDIO_EVENT_CHANGED = 0x1
} AMTVAudioEventType;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0064_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0064_v0_0_s_ifspec;
#ifndef __IAMTVAudio_INTERFACE_DEFINED__
#define __IAMTVAudio_INTERFACE_DEFINED__
extern const IID IID_IAMTVAudio;
typedef struct IAMTVAudioVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAMTVAudio *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAMTVAudio *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAMTVAudio *This);
	HRESULT(STDMETHODCALLTYPE *GetHardwareSupportedTVAudioModes) (IAMTVAudio *This, long *plModes);
	HRESULT(STDMETHODCALLTYPE *GetAvailableTVAudioModes) (IAMTVAudio *This, long *plModes);
	HRESULT(STDMETHODCALLTYPE *get_TVAudioMode) (IAMTVAudio *This, long *plMode);
	HRESULT(STDMETHODCALLTYPE *put_TVAudioMode) (IAMTVAudio *This, long lMode);
	HRESULT(STDMETHODCALLTYPE *RegisterNotificationCallBack) (IAMTVAudio *This, IAMTunerNotification *pNotify, long lEvents);
	HRESULT(STDMETHODCALLTYPE *UnRegisterNotificationCallBack) (IAMTVAudio *This, IAMTunerNotification *pNotify);
	END_INTERFACE
}  IAMTVAudioVtbl;
interface IAMTVAudio
{
	CONST_VTBL struct IAMTVAudioVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMTVAudio_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAMTVAudio_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAMTVAudio_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAMTVAudio_GetHardwareSupportedTVAudioModes(This,plModes)    ( (This)->lpVtbl -> GetHardwareSupportedTVAudioModes(This,plModes) )
#define IAMTVAudio_GetAvailableTVAudioModes(This,plModes)    ( (This)->lpVtbl -> GetAvailableTVAudioModes(This,plModes) )
#define IAMTVAudio_get_TVAudioMode(This,plMode)    ( (This)->lpVtbl -> get_TVAudioMode(This,plMode) )
#define IAMTVAudio_put_TVAudioMode(This,lMode)    ( (This)->lpVtbl -> put_TVAudioMode(This,lMode) )
#define IAMTVAudio_RegisterNotificationCallBack(This,pNotify,lEvents)    ( (This)->lpVtbl -> RegisterNotificationCallBack(This,pNotify,lEvents) )
#define IAMTVAudio_UnRegisterNotificationCallBack(This,pNotify)    ( (This)->lpVtbl -> UnRegisterNotificationCallBack(This,pNotify) )
#endif
#endif
#ifndef __IAMTVAudioNotification_INTERFACE_DEFINED__
#define __IAMTVAudioNotification_INTERFACE_DEFINED__
extern const IID IID_IAMTVAudioNotification;
typedef struct IAMTVAudioNotificationVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAMTVAudioNotification *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAMTVAudioNotification *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAMTVAudioNotification *This);
	HRESULT(STDMETHODCALLTYPE *OnEvent) (IAMTVAudioNotification *This, AMTVAudioEventType Event);
	END_INTERFACE
}  IAMTVAudioNotificationVtbl;
interface IAMTVAudioNotification
{
	CONST_VTBL struct IAMTVAudioNotificationVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMTVAudioNotification_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAMTVAudioNotification_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAMTVAudioNotification_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAMTVAudioNotification_OnEvent(This,Event)    ( (This)->lpVtbl -> OnEvent(This,Event) )
#endif
#endif
#ifndef __IAMAnalogVideoEncoder_INTERFACE_DEFINED__
#define __IAMAnalogVideoEncoder_INTERFACE_DEFINED__
extern const IID IID_IAMAnalogVideoEncoder;
typedef struct IAMAnalogVideoEncoderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAMAnalogVideoEncoder *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAMAnalogVideoEncoder *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAMAnalogVideoEncoder *This);
	HRESULT(STDMETHODCALLTYPE *get_AvailableTVFormats) (IAMAnalogVideoEncoder *This, long *lAnalogVideoStandard);
	HRESULT(STDMETHODCALLTYPE *put_TVFormat) (IAMAnalogVideoEncoder *This, long lAnalogVideoStandard);
	HRESULT(STDMETHODCALLTYPE *get_TVFormat) (IAMAnalogVideoEncoder *This, long *plAnalogVideoStandard);
	HRESULT(STDMETHODCALLTYPE *put_CopyProtection) (IAMAnalogVideoEncoder *This, long lVideoCopyProtection);
	HRESULT(STDMETHODCALLTYPE *get_CopyProtection) (IAMAnalogVideoEncoder *This, long *lVideoCopyProtection);
	HRESULT(STDMETHODCALLTYPE *put_CCEnable) (IAMAnalogVideoEncoder *This, long lCCEnable);
	HRESULT(STDMETHODCALLTYPE *get_CCEnable) (IAMAnalogVideoEncoder *This, long *lCCEnable);
	END_INTERFACE
}  IAMAnalogVideoEncoderVtbl;
interface IAMAnalogVideoEncoder
{
	CONST_VTBL struct IAMAnalogVideoEncoderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMAnalogVideoEncoder_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAMAnalogVideoEncoder_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAMAnalogVideoEncoder_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAMAnalogVideoEncoder_get_AvailableTVFormats(This,lAnalogVideoStandard)    ( (This)->lpVtbl -> get_AvailableTVFormats(This,lAnalogVideoStandard) )
#define IAMAnalogVideoEncoder_put_TVFormat(This,lAnalogVideoStandard)    ( (This)->lpVtbl -> put_TVFormat(This,lAnalogVideoStandard) )
#define IAMAnalogVideoEncoder_get_TVFormat(This,plAnalogVideoStandard)    ( (This)->lpVtbl -> get_TVFormat(This,plAnalogVideoStandard) )
#define IAMAnalogVideoEncoder_put_CopyProtection(This,lVideoCopyProtection)    ( (This)->lpVtbl -> put_CopyProtection(This,lVideoCopyProtection) )
#define IAMAnalogVideoEncoder_get_CopyProtection(This,lVideoCopyProtection)    ( (This)->lpVtbl -> get_CopyProtection(This,lVideoCopyProtection) )
#define IAMAnalogVideoEncoder_put_CCEnable(This,lCCEnable)    ( (This)->lpVtbl -> put_CCEnable(This,lCCEnable) )
#define IAMAnalogVideoEncoder_get_CCEnable(This,lCCEnable)    ( (This)->lpVtbl -> get_CCEnable(This,lCCEnable) )
#endif
#endif
typedef enum AMPROPERTY_PIN
{
	AMPROPERTY_PIN_CATEGORY = 0,
	AMPROPERTY_PIN_MEDIUM = (AMPROPERTY_PIN_CATEGORY + 1)
} AMPROPERTY_PIN;
#ifndef _IKsPropertySet_
#define _IKsPropertySet_
#define KSPROPERTY_SUPPORT_GET  1
#define KSPROPERTY_SUPPORT_SET  2
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0067_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0067_v0_0_s_ifspec;
#ifndef __IKsPropertySet_INTERFACE_DEFINED__
#define __IKsPropertySet_INTERFACE_DEFINED__
extern const IID IID_IKsPropertySet;
typedef struct IKsPropertySetVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IKsPropertySet *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IKsPropertySet *This);
	ULONG(STDMETHODCALLTYPE *Release) (IKsPropertySet *This);
	HRESULT(STDMETHODCALLTYPE *Set) (IKsPropertySet *This, REFGUID guidPropSet, DWORD dwPropID, LPVOID pInstanceData, DWORD cbInstanceData, LPVOID pPropData, DWORD cbPropData);
	HRESULT(STDMETHODCALLTYPE *Get) (IKsPropertySet *This, REFGUID guidPropSet, DWORD dwPropID, LPVOID pInstanceData, DWORD cbInstanceData, LPVOID pPropData, DWORD cbPropData, DWORD *pcbReturned);
	HRESULT(STDMETHODCALLTYPE *QuerySupported) (IKsPropertySet *This, REFGUID guidPropSet, DWORD dwPropID, DWORD *pTypeSupport);
	END_INTERFACE
}  IKsPropertySetVtbl;
interface IKsPropertySet
{
	CONST_VTBL struct IKsPropertySetVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IKsPropertySet_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IKsPropertySet_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IKsPropertySet_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IKsPropertySet_Set(This,guidPropSet,dwPropID,pInstanceData,cbInstanceData,pPropData,cbPropData)    ( (This)->lpVtbl -> Set(This,guidPropSet,dwPropID,pInstanceData,cbInstanceData,pPropData,cbPropData) )
#define IKsPropertySet_Get(This,guidPropSet,dwPropID,pInstanceData,cbInstanceData,pPropData,cbPropData,pcbReturned)    ( (This)->lpVtbl -> Get(This,guidPropSet,dwPropID,pInstanceData,cbInstanceData,pPropData,cbPropData,pcbReturned) )
#define IKsPropertySet_QuerySupported(This,guidPropSet,dwPropID,pTypeSupport)    ( (This)->lpVtbl -> QuerySupported(This,guidPropSet,dwPropID,pTypeSupport) )
#endif
#endif
HRESULT STDMETHODCALLTYPE IKsPropertySet_RemoteSet_Proxy(IKsPropertySet *This, REFGUID guidPropSet, DWORD dwPropID, byte *pInstanceData, DWORD cbInstanceData, byte *pPropData, DWORD cbPropData);
void __RPC_STUB IKsPropertySet_RemoteSet_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IKsPropertySet_RemoteGet_Proxy(IKsPropertySet *This, REFGUID guidPropSet, DWORD dwPropID, byte *pInstanceData, DWORD cbInstanceData, byte *pPropData, DWORD cbPropData, DWORD *pcbReturned);
void __RPC_STUB IKsPropertySet_RemoteGet_Stub(IRpcStubBuffer *This, IRpcChannelBuffer *_pRpcChannelBuffer, PRPC_MESSAGE _pRpcMessage, DWORD *_pdwStubPhase);
#endif
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0068_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0068_v0_0_s_ifspec;
#ifndef __IMediaPropertyBag_INTERFACE_DEFINED__
#define __IMediaPropertyBag_INTERFACE_DEFINED__
typedef IMediaPropertyBag *LPMEDIAPROPERTYBAG;
extern const IID IID_IMediaPropertyBag;
typedef struct IMediaPropertyBagVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMediaPropertyBag *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMediaPropertyBag *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMediaPropertyBag *This);
	HRESULT(STDMETHODCALLTYPE *Read) (IMediaPropertyBag *This, LPCOLESTR pszPropName, VARIANT *pVar, IErrorLog *pErrorLog);
	HRESULT(STDMETHODCALLTYPE *Write) (IMediaPropertyBag *This, LPCOLESTR pszPropName, VARIANT *pVar);
	HRESULT(STDMETHODCALLTYPE *EnumProperty) (IMediaPropertyBag *This, ULONG iProperty, VARIANT *pvarPropertyName, VARIANT *pvarPropertyValue);
	END_INTERFACE
}  IMediaPropertyBagVtbl;
interface IMediaPropertyBag
{
	CONST_VTBL struct IMediaPropertyBagVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMediaPropertyBag_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMediaPropertyBag_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IMediaPropertyBag_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IMediaPropertyBag_Read(This,pszPropName,pVar,pErrorLog)    ( (This)->lpVtbl -> Read(This,pszPropName,pVar,pErrorLog) )
#define IMediaPropertyBag_Write(This,pszPropName,pVar)    ( (This)->lpVtbl -> Write(This,pszPropName,pVar) )
#define IMediaPropertyBag_EnumProperty(This,iProperty,pvarPropertyName,pvarPropertyValue)    ( (This)->lpVtbl -> EnumProperty(This,iProperty,pvarPropertyName,pvarPropertyValue) )
#endif
#endif
#ifndef __IPersistMediaPropertyBag_INTERFACE_DEFINED__
#define __IPersistMediaPropertyBag_INTERFACE_DEFINED__
typedef IPersistMediaPropertyBag *LPPERSISTMEDIAPROPERTYBAG;
extern const IID IID_IPersistMediaPropertyBag;
typedef struct IPersistMediaPropertyBagVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IPersistMediaPropertyBag *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IPersistMediaPropertyBag *This);
	ULONG(STDMETHODCALLTYPE *Release) (IPersistMediaPropertyBag *This);
	HRESULT(STDMETHODCALLTYPE *GetClassID) (IPersistMediaPropertyBag *This, CLSID *pClassID);
	HRESULT(STDMETHODCALLTYPE *InitNew) (IPersistMediaPropertyBag *This);
	HRESULT(STDMETHODCALLTYPE *Load) (IPersistMediaPropertyBag *This, IMediaPropertyBag *pPropBag, IErrorLog *pErrorLog);
	HRESULT(STDMETHODCALLTYPE *Save) (IPersistMediaPropertyBag *This, IMediaPropertyBag *pPropBag, BOOL fClearDirty, BOOL fSaveAllProperties);
	END_INTERFACE
}  IPersistMediaPropertyBagVtbl;
interface IPersistMediaPropertyBag
{
	CONST_VTBL struct IPersistMediaPropertyBagVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPersistMediaPropertyBag_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPersistMediaPropertyBag_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IPersistMediaPropertyBag_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IPersistMediaPropertyBag_GetClassID(This,pClassID)    ( (This)->lpVtbl -> GetClassID(This,pClassID) )
#define IPersistMediaPropertyBag_InitNew(This)    ( (This)->lpVtbl -> InitNew(This) )
#define IPersistMediaPropertyBag_Load(This,pPropBag,pErrorLog)    ( (This)->lpVtbl -> Load(This,pPropBag,pErrorLog) )
#define IPersistMediaPropertyBag_Save(This,pPropBag,fClearDirty,fSaveAllProperties)    ( (This)->lpVtbl -> Save(This,pPropBag,fClearDirty,fSaveAllProperties) )
#endif
#endif
#ifndef __IAMPhysicalPinInfo_INTERFACE_DEFINED__
#define __IAMPhysicalPinInfo_INTERFACE_DEFINED__
extern const IID IID_IAMPhysicalPinInfo;
typedef struct IAMPhysicalPinInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAMPhysicalPinInfo *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAMPhysicalPinInfo *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAMPhysicalPinInfo *This);
	HRESULT(STDMETHODCALLTYPE *GetPhysicalType) (IAMPhysicalPinInfo *This, long *pType, LPOLESTR *ppszType);
	END_INTERFACE
}  IAMPhysicalPinInfoVtbl;
interface IAMPhysicalPinInfo
{
	CONST_VTBL struct IAMPhysicalPinInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMPhysicalPinInfo_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAMPhysicalPinInfo_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAMPhysicalPinInfo_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAMPhysicalPinInfo_GetPhysicalType(This,pType,ppszType)    ( (This)->lpVtbl -> GetPhysicalType(This,pType,ppszType) )
#endif
#endif
typedef IAMPhysicalPinInfo *PAMPHYSICALPININFO;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0071_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0071_v0_0_s_ifspec;
#ifndef __IAMExtDevice_INTERFACE_DEFINED__
#define __IAMExtDevice_INTERFACE_DEFINED__
extern const IID IID_IAMExtDevice;
typedef struct IAMExtDeviceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAMExtDevice *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAMExtDevice *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAMExtDevice *This);
	HRESULT(STDMETHODCALLTYPE *GetCapability) (IAMExtDevice *This, long Capability, long *pValue, double *pdblValue);
	HRESULT(STDMETHODCALLTYPE *get_ExternalDeviceID) (IAMExtDevice *This, LPOLESTR *ppszData);
	HRESULT(STDMETHODCALLTYPE *get_ExternalDeviceVersion) (IAMExtDevice *This, LPOLESTR *ppszData);
	HRESULT(STDMETHODCALLTYPE *put_DevicePower) (IAMExtDevice *This, long PowerMode);
	HRESULT(STDMETHODCALLTYPE *get_DevicePower) (IAMExtDevice *This, long *pPowerMode);
	HRESULT(STDMETHODCALLTYPE *Calibrate) (IAMExtDevice *This, HEVENT hEvent, long Mode, long *pStatus);
	HRESULT(STDMETHODCALLTYPE *put_DevicePort) (IAMExtDevice *This, long DevicePort);
	HRESULT(STDMETHODCALLTYPE *get_DevicePort) (IAMExtDevice *This, long *pDevicePort);
	END_INTERFACE
}  IAMExtDeviceVtbl;
interface IAMExtDevice
{
	CONST_VTBL struct IAMExtDeviceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMExtDevice_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAMExtDevice_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAMExtDevice_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAMExtDevice_GetCapability(This,Capability,pValue,pdblValue)    ( (This)->lpVtbl -> GetCapability(This,Capability,pValue,pdblValue) )
#define IAMExtDevice_get_ExternalDeviceID(This,ppszData)    ( (This)->lpVtbl -> get_ExternalDeviceID(This,ppszData) )
#define IAMExtDevice_get_ExternalDeviceVersion(This,ppszData)    ( (This)->lpVtbl -> get_ExternalDeviceVersion(This,ppszData) )
#define IAMExtDevice_put_DevicePower(This,PowerMode)    ( (This)->lpVtbl -> put_DevicePower(This,PowerMode) )
#define IAMExtDevice_get_DevicePower(This,pPowerMode)    ( (This)->lpVtbl -> get_DevicePower(This,pPowerMode) )
#define IAMExtDevice_Calibrate(This,hEvent,Mode,pStatus)    ( (This)->lpVtbl -> Calibrate(This,hEvent,Mode,pStatus) )
#define IAMExtDevice_put_DevicePort(This,DevicePort)    ( (This)->lpVtbl -> put_DevicePort(This,DevicePort) )
#define IAMExtDevice_get_DevicePort(This,pDevicePort)    ( (This)->lpVtbl -> get_DevicePort(This,pDevicePort) )
#endif
#endif
typedef IAMExtDevice *PEXTDEVICE;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0072_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0072_v0_0_s_ifspec;
#ifndef __IAMExtTransport_INTERFACE_DEFINED__
#define __IAMExtTransport_INTERFACE_DEFINED__
extern const IID IID_IAMExtTransport;
typedef struct IAMExtTransportVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAMExtTransport *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAMExtTransport *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAMExtTransport *This);
	HRESULT(STDMETHODCALLTYPE *GetCapability) (IAMExtTransport *This, long Capability, long *pValue, double *pdblValue);
	HRESULT(STDMETHODCALLTYPE *put_MediaState) (IAMExtTransport *This, long State);
	HRESULT(STDMETHODCALLTYPE *get_MediaState) (IAMExtTransport *This, long *pState);
	HRESULT(STDMETHODCALLTYPE *put_LocalControl) (IAMExtTransport *This, long State);
	HRESULT(STDMETHODCALLTYPE *get_LocalControl) (IAMExtTransport *This, long *pState);
	HRESULT(STDMETHODCALLTYPE *GetStatus) (IAMExtTransport *This, long StatusItem, long *pValue);
	HRESULT(STDMETHODCALLTYPE *GetTransportBasicParameters) (IAMExtTransport *This, long Param, long *pValue, LPOLESTR *ppszData);
	HRESULT(STDMETHODCALLTYPE *SetTransportBasicParameters) (IAMExtTransport *This, long Param, long Value, LPCOLESTR pszData);
	HRESULT(STDMETHODCALLTYPE *GetTransportVideoParameters) (IAMExtTransport *This, long Param, long *pValue);
	HRESULT(STDMETHODCALLTYPE *SetTransportVideoParameters) (IAMExtTransport *This, long Param, long Value);
	HRESULT(STDMETHODCALLTYPE *GetTransportAudioParameters) (IAMExtTransport *This, long Param, long *pValue);
	HRESULT(STDMETHODCALLTYPE *SetTransportAudioParameters) (IAMExtTransport *This, long Param, long Value);
	HRESULT(STDMETHODCALLTYPE *put_Mode) (IAMExtTransport *This, long Mode);
	HRESULT(STDMETHODCALLTYPE *get_Mode) (IAMExtTransport *This, long *pMode);
	HRESULT(STDMETHODCALLTYPE *put_Rate) (IAMExtTransport *This, double dblRate);
	HRESULT(STDMETHODCALLTYPE *get_Rate) (IAMExtTransport *This, double *pdblRate);
	HRESULT(STDMETHODCALLTYPE *GetChase) (IAMExtTransport *This, long *pEnabled, long *pOffset, HEVENT *phEvent);
	HRESULT(STDMETHODCALLTYPE *SetChase) (IAMExtTransport *This, long Enable, long Offset, HEVENT hEvent);
	HRESULT(STDMETHODCALLTYPE *GetBump) (IAMExtTransport *This, long *pSpeed, long *pDuration);
	HRESULT(STDMETHODCALLTYPE *SetBump) (IAMExtTransport *This, long Speed, long Duration);
	HRESULT(STDMETHODCALLTYPE *get_AntiClogControl) (IAMExtTransport *This, long *pEnabled);
	HRESULT(STDMETHODCALLTYPE *put_AntiClogControl) (IAMExtTransport *This, long Enable);
	HRESULT(STDMETHODCALLTYPE *GetEditPropertySet) (IAMExtTransport *This, long EditID, long *pState);
	HRESULT(STDMETHODCALLTYPE *SetEditPropertySet) (IAMExtTransport *This, long *pEditID, long State);
	HRESULT(STDMETHODCALLTYPE *GetEditProperty) (IAMExtTransport *This, long EditID, long Param, long *pValue);
	HRESULT(STDMETHODCALLTYPE *SetEditProperty) (IAMExtTransport *This, long EditID, long Param, long Value);
	HRESULT(STDMETHODCALLTYPE *get_EditStart) (IAMExtTransport *This, long *pValue);
	HRESULT(STDMETHODCALLTYPE *put_EditStart) (IAMExtTransport *This, long Value);
	END_INTERFACE
}  IAMExtTransportVtbl;
interface IAMExtTransport
{
	CONST_VTBL struct IAMExtTransportVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMExtTransport_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAMExtTransport_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAMExtTransport_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAMExtTransport_GetCapability(This,Capability,pValue,pdblValue)    ( (This)->lpVtbl -> GetCapability(This,Capability,pValue,pdblValue) )
#define IAMExtTransport_put_MediaState(This,State)    ( (This)->lpVtbl -> put_MediaState(This,State) )
#define IAMExtTransport_get_MediaState(This,pState)    ( (This)->lpVtbl -> get_MediaState(This,pState) )
#define IAMExtTransport_put_LocalControl(This,State)    ( (This)->lpVtbl -> put_LocalControl(This,State) )
#define IAMExtTransport_get_LocalControl(This,pState)    ( (This)->lpVtbl -> get_LocalControl(This,pState) )
#define IAMExtTransport_GetStatus(This,StatusItem,pValue)    ( (This)->lpVtbl -> GetStatus(This,StatusItem,pValue) )
#define IAMExtTransport_GetTransportBasicParameters(This,Param,pValue,ppszData)    ( (This)->lpVtbl -> GetTransportBasicParameters(This,Param,pValue,ppszData) )
#define IAMExtTransport_SetTransportBasicParameters(This,Param,Value,pszData)    ( (This)->lpVtbl -> SetTransportBasicParameters(This,Param,Value,pszData) )
#define IAMExtTransport_GetTransportVideoParameters(This,Param,pValue)    ( (This)->lpVtbl -> GetTransportVideoParameters(This,Param,pValue) )
#define IAMExtTransport_SetTransportVideoParameters(This,Param,Value)    ( (This)->lpVtbl -> SetTransportVideoParameters(This,Param,Value) )
#define IAMExtTransport_GetTransportAudioParameters(This,Param,pValue)    ( (This)->lpVtbl -> GetTransportAudioParameters(This,Param,pValue) )
#define IAMExtTransport_SetTransportAudioParameters(This,Param,Value)    ( (This)->lpVtbl -> SetTransportAudioParameters(This,Param,Value) )
#define IAMExtTransport_put_Mode(This,Mode)    ( (This)->lpVtbl -> put_Mode(This,Mode) )
#define IAMExtTransport_get_Mode(This,pMode)    ( (This)->lpVtbl -> get_Mode(This,pMode) )
#define IAMExtTransport_put_Rate(This,dblRate)    ( (This)->lpVtbl -> put_Rate(This,dblRate) )
#define IAMExtTransport_get_Rate(This,pdblRate)    ( (This)->lpVtbl -> get_Rate(This,pdblRate) )
#define IAMExtTransport_GetChase(This,pEnabled,pOffset,phEvent)    ( (This)->lpVtbl -> GetChase(This,pEnabled,pOffset,phEvent) )
#define IAMExtTransport_SetChase(This,Enable,Offset,hEvent)    ( (This)->lpVtbl -> SetChase(This,Enable,Offset,hEvent) )
#define IAMExtTransport_GetBump(This,pSpeed,pDuration)    ( (This)->lpVtbl -> GetBump(This,pSpeed,pDuration) )
#define IAMExtTransport_SetBump(This,Speed,Duration)    ( (This)->lpVtbl -> SetBump(This,Speed,Duration) )
#define IAMExtTransport_get_AntiClogControl(This,pEnabled)    ( (This)->lpVtbl -> get_AntiClogControl(This,pEnabled) )
#define IAMExtTransport_put_AntiClogControl(This,Enable)    ( (This)->lpVtbl -> put_AntiClogControl(This,Enable) )
#define IAMExtTransport_GetEditPropertySet(This,EditID,pState)    ( (This)->lpVtbl -> GetEditPropertySet(This,EditID,pState) )
#define IAMExtTransport_SetEditPropertySet(This,pEditID,State)    ( (This)->lpVtbl -> SetEditPropertySet(This,pEditID,State) )
#define IAMExtTransport_GetEditProperty(This,EditID,Param,pValue)    ( (This)->lpVtbl -> GetEditProperty(This,EditID,Param,pValue) )
#define IAMExtTransport_SetEditProperty(This,EditID,Param,Value)    ( (This)->lpVtbl -> SetEditProperty(This,EditID,Param,Value) )
#define IAMExtTransport_get_EditStart(This,pValue)    ( (This)->lpVtbl -> get_EditStart(This,pValue) )
#define IAMExtTransport_put_EditStart(This,Value)    ( (This)->lpVtbl -> put_EditStart(This,Value) )
#endif
#endif
typedef IAMExtTransport *PIAMEXTTRANSPORT;
#if 0
typedef struct tagTIMECODE
{
	WORD wFrameRate;
	WORD wFrameFract;
	DWORD dwFrames;
} TIMECODE;
#else
#ifndef TIMECODE_DEFINED
#define TIMECODE_DEFINED
typedef union _timecode
{
	struct
	{
		WORD wFrameRate;
		WORD wFrameFract;
		DWORD dwFrames;
	};
	DWORDLONG qw;
} TIMECODE;
#endif
#endif
typedef TIMECODE *PTIMECODE;
typedef struct tagTIMECODE_SAMPLE
{
	LONGLONG qwTick;
	TIMECODE timecode;
	DWORD dwUser;
	DWORD dwFlags;
} TIMECODE_SAMPLE;
typedef TIMECODE_SAMPLE *PTIMECODE_SAMPLE;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0073_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0073_v0_0_s_ifspec;
#ifndef __IAMTimecodeReader_INTERFACE_DEFINED__
#define __IAMTimecodeReader_INTERFACE_DEFINED__
extern const IID IID_IAMTimecodeReader;
typedef struct IAMTimecodeReaderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAMTimecodeReader *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAMTimecodeReader *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAMTimecodeReader *This);
	HRESULT(STDMETHODCALLTYPE *GetTCRMode) (IAMTimecodeReader *This, long Param, long *pValue);
	HRESULT(STDMETHODCALLTYPE *SetTCRMode) (IAMTimecodeReader *This, long Param, long Value);
	HRESULT(STDMETHODCALLTYPE *put_VITCLine) (IAMTimecodeReader *This, long Line);
	HRESULT(STDMETHODCALLTYPE *get_VITCLine) (IAMTimecodeReader *This, long *pLine);
	HRESULT(STDMETHODCALLTYPE *GetTimecode) (IAMTimecodeReader *This, PTIMECODE_SAMPLE pTimecodeSample);
	END_INTERFACE
}  IAMTimecodeReaderVtbl;
interface IAMTimecodeReader
{
	CONST_VTBL struct IAMTimecodeReaderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMTimecodeReader_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAMTimecodeReader_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAMTimecodeReader_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAMTimecodeReader_GetTCRMode(This,Param,pValue)    ( (This)->lpVtbl -> GetTCRMode(This,Param,pValue) )
#define IAMTimecodeReader_SetTCRMode(This,Param,Value)    ( (This)->lpVtbl -> SetTCRMode(This,Param,Value) )
#define IAMTimecodeReader_put_VITCLine(This,Line)    ( (This)->lpVtbl -> put_VITCLine(This,Line) )
#define IAMTimecodeReader_get_VITCLine(This,pLine)    ( (This)->lpVtbl -> get_VITCLine(This,pLine) )
#define IAMTimecodeReader_GetTimecode(This,pTimecodeSample)    ( (This)->lpVtbl -> GetTimecode(This,pTimecodeSample) )
#endif
#endif
typedef IAMTimecodeReader *PIAMTIMECODEREADER;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0074_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0074_v0_0_s_ifspec;
#ifndef __IAMTimecodeGenerator_INTERFACE_DEFINED__
#define __IAMTimecodeGenerator_INTERFACE_DEFINED__
extern const IID IID_IAMTimecodeGenerator;
typedef struct IAMTimecodeGeneratorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAMTimecodeGenerator *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAMTimecodeGenerator *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAMTimecodeGenerator *This);
	HRESULT(STDMETHODCALLTYPE *GetTCGMode) (IAMTimecodeGenerator *This, long Param, long *pValue);
	HRESULT(STDMETHODCALLTYPE *SetTCGMode) (IAMTimecodeGenerator *This, long Param, long Value);
	HRESULT(STDMETHODCALLTYPE *put_VITCLine) (IAMTimecodeGenerator *This, long Line);
	HRESULT(STDMETHODCALLTYPE *get_VITCLine) (IAMTimecodeGenerator *This, long *pLine);
	HRESULT(STDMETHODCALLTYPE *SetTimecode) (IAMTimecodeGenerator *This, PTIMECODE_SAMPLE pTimecodeSample);
	HRESULT(STDMETHODCALLTYPE *GetTimecode) (IAMTimecodeGenerator *This, PTIMECODE_SAMPLE pTimecodeSample);
	END_INTERFACE
}  IAMTimecodeGeneratorVtbl;
interface IAMTimecodeGenerator
{
	CONST_VTBL struct IAMTimecodeGeneratorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMTimecodeGenerator_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAMTimecodeGenerator_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAMTimecodeGenerator_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAMTimecodeGenerator_GetTCGMode(This,Param,pValue)    ( (This)->lpVtbl -> GetTCGMode(This,Param,pValue) )
#define IAMTimecodeGenerator_SetTCGMode(This,Param,Value)    ( (This)->lpVtbl -> SetTCGMode(This,Param,Value) )
#define IAMTimecodeGenerator_put_VITCLine(This,Line)    ( (This)->lpVtbl -> put_VITCLine(This,Line) )
#define IAMTimecodeGenerator_get_VITCLine(This,pLine)    ( (This)->lpVtbl -> get_VITCLine(This,pLine) )
#define IAMTimecodeGenerator_SetTimecode(This,pTimecodeSample)    ( (This)->lpVtbl -> SetTimecode(This,pTimecodeSample) )
#define IAMTimecodeGenerator_GetTimecode(This,pTimecodeSample)    ( (This)->lpVtbl -> GetTimecode(This,pTimecodeSample) )
#endif
#endif
typedef IAMTimecodeGenerator *PIAMTIMECODEGENERATOR;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0075_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0075_v0_0_s_ifspec;
#ifndef __IAMTimecodeDisplay_INTERFACE_DEFINED__
#define __IAMTimecodeDisplay_INTERFACE_DEFINED__
extern const IID IID_IAMTimecodeDisplay;
typedef struct IAMTimecodeDisplayVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAMTimecodeDisplay *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAMTimecodeDisplay *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAMTimecodeDisplay *This);
	HRESULT(STDMETHODCALLTYPE *GetTCDisplayEnable) (IAMTimecodeDisplay *This, long *pState);
	HRESULT(STDMETHODCALLTYPE *SetTCDisplayEnable) (IAMTimecodeDisplay *This, long State);
	HRESULT(STDMETHODCALLTYPE *GetTCDisplay) (IAMTimecodeDisplay *This, long Param, long *pValue);
	HRESULT(STDMETHODCALLTYPE *SetTCDisplay) (IAMTimecodeDisplay *This, long Param, long Value);
	END_INTERFACE
}  IAMTimecodeDisplayVtbl;
interface IAMTimecodeDisplay
{
	CONST_VTBL struct IAMTimecodeDisplayVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMTimecodeDisplay_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAMTimecodeDisplay_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAMTimecodeDisplay_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAMTimecodeDisplay_GetTCDisplayEnable(This,pState)    ( (This)->lpVtbl -> GetTCDisplayEnable(This,pState) )
#define IAMTimecodeDisplay_SetTCDisplayEnable(This,State)    ( (This)->lpVtbl -> SetTCDisplayEnable(This,State) )
#define IAMTimecodeDisplay_GetTCDisplay(This,Param,pValue)    ( (This)->lpVtbl -> GetTCDisplay(This,Param,pValue) )
#define IAMTimecodeDisplay_SetTCDisplay(This,Param,Value)    ( (This)->lpVtbl -> SetTCDisplay(This,Param,Value) )
#endif
#endif
typedef IAMTimecodeDisplay *PIAMTIMECODEDISPLAY;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0076_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0076_v0_0_s_ifspec;
#ifndef __IAMDevMemoryAllocator_INTERFACE_DEFINED__
#define __IAMDevMemoryAllocator_INTERFACE_DEFINED__
extern const IID IID_IAMDevMemoryAllocator;
typedef struct IAMDevMemoryAllocatorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAMDevMemoryAllocator *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAMDevMemoryAllocator *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAMDevMemoryAllocator *This);
	HRESULT(STDMETHODCALLTYPE *GetInfo) (IAMDevMemoryAllocator *This, DWORD *pdwcbTotalFree, DWORD *pdwcbLargestFree, DWORD *pdwcbTotalMemory, DWORD *pdwcbMinimumChunk);
	HRESULT(STDMETHODCALLTYPE *CheckMemory) (IAMDevMemoryAllocator *This, const BYTE *pBuffer);
	HRESULT(STDMETHODCALLTYPE *Alloc) (IAMDevMemoryAllocator *This, BYTE **ppBuffer, DWORD *pdwcbBuffer);
	HRESULT(STDMETHODCALLTYPE *Free) (IAMDevMemoryAllocator *This, BYTE *pBuffer);
	HRESULT(STDMETHODCALLTYPE *GetDevMemoryObject) (IAMDevMemoryAllocator *This, IUnknown **ppUnkInnner, IUnknown *pUnkOuter);
	END_INTERFACE
}  IAMDevMemoryAllocatorVtbl;
interface IAMDevMemoryAllocator
{
	CONST_VTBL struct IAMDevMemoryAllocatorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMDevMemoryAllocator_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAMDevMemoryAllocator_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAMDevMemoryAllocator_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAMDevMemoryAllocator_GetInfo(This,pdwcbTotalFree,pdwcbLargestFree,pdwcbTotalMemory,pdwcbMinimumChunk)    ( (This)->lpVtbl -> GetInfo(This,pdwcbTotalFree,pdwcbLargestFree,pdwcbTotalMemory,pdwcbMinimumChunk) )
#define IAMDevMemoryAllocator_CheckMemory(This,pBuffer)    ( (This)->lpVtbl -> CheckMemory(This,pBuffer) )
#define IAMDevMemoryAllocator_Alloc(This,ppBuffer,pdwcbBuffer)    ( (This)->lpVtbl -> Alloc(This,ppBuffer,pdwcbBuffer) )
#define IAMDevMemoryAllocator_Free(This,pBuffer)    ( (This)->lpVtbl -> Free(This,pBuffer) )
#define IAMDevMemoryAllocator_GetDevMemoryObject(This,ppUnkInnner,pUnkOuter)    ( (This)->lpVtbl -> GetDevMemoryObject(This,ppUnkInnner,pUnkOuter) )
#endif
#endif
typedef IAMDevMemoryAllocator *PAMDEVMEMORYALLOCATOR;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0077_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0077_v0_0_s_ifspec;
#ifndef __IAMDevMemoryControl_INTERFACE_DEFINED__
#define __IAMDevMemoryControl_INTERFACE_DEFINED__
extern const IID IID_IAMDevMemoryControl;
typedef struct IAMDevMemoryControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAMDevMemoryControl *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAMDevMemoryControl *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAMDevMemoryControl *This);
	HRESULT(STDMETHODCALLTYPE *QueryWriteSync) (IAMDevMemoryControl *This);
	HRESULT(STDMETHODCALLTYPE *WriteSync) (IAMDevMemoryControl *This);
	HRESULT(STDMETHODCALLTYPE *GetDevId) (IAMDevMemoryControl *This, DWORD *pdwDevId);
	END_INTERFACE
}  IAMDevMemoryControlVtbl;
interface IAMDevMemoryControl
{
	CONST_VTBL struct IAMDevMemoryControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMDevMemoryControl_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAMDevMemoryControl_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAMDevMemoryControl_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAMDevMemoryControl_QueryWriteSync(This)    ( (This)->lpVtbl -> QueryWriteSync(This) )
#define IAMDevMemoryControl_WriteSync(This)    ( (This)->lpVtbl -> WriteSync(This) )
#define IAMDevMemoryControl_GetDevId(This,pdwDevId)    ( (This)->lpVtbl -> GetDevId(This,pdwDevId) )
#endif
#endif
typedef IAMDevMemoryControl *PAMDEVMEMORYCONTROL;
enum _AMSTREAMSELECTINFOFLAGS
{
	AMSTREAMSELECTINFO_ENABLED = 0x1,
	AMSTREAMSELECTINFO_EXCLUSIVE = 0x2
};
enum _AMSTREAMSELECTENABLEFLAGS
{
	AMSTREAMSELECTENABLE_ENABLE = 0x1,
	AMSTREAMSELECTENABLE_ENABLEALL = 0x2
};
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0078_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0078_v0_0_s_ifspec;
#ifndef __IAMStreamSelect_INTERFACE_DEFINED__
#define __IAMStreamSelect_INTERFACE_DEFINED__
extern const IID IID_IAMStreamSelect;
typedef struct IAMStreamSelectVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAMStreamSelect *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAMStreamSelect *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAMStreamSelect *This);
	HRESULT(STDMETHODCALLTYPE *Count) (IAMStreamSelect *This, DWORD *pcStreams);
	HRESULT(STDMETHODCALLTYPE *Info) (IAMStreamSelect *This, long lIndex, AM_MEDIA_TYPE **ppmt, DWORD *pdwFlags, LCID *plcid, DWORD *pdwGroup, LPWSTR *ppszName, IUnknown **ppObject, IUnknown **ppUnk);
	HRESULT(STDMETHODCALLTYPE *Enable) (IAMStreamSelect *This, long lIndex, DWORD dwFlags);
	END_INTERFACE
}  IAMStreamSelectVtbl;
interface IAMStreamSelect
{
	CONST_VTBL struct IAMStreamSelectVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMStreamSelect_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAMStreamSelect_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAMStreamSelect_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAMStreamSelect_Count(This,pcStreams)    ( (This)->lpVtbl -> Count(This,pcStreams) )
#define IAMStreamSelect_Info(This,lIndex,ppmt,pdwFlags,plcid,pdwGroup,ppszName,ppObject,ppUnk)    ( (This)->lpVtbl -> Info(This,lIndex,ppmt,pdwFlags,plcid,pdwGroup,ppszName,ppObject,ppUnk) )
#define IAMStreamSelect_Enable(This,lIndex,dwFlags)    ( (This)->lpVtbl -> Enable(This,lIndex,dwFlags) )
#endif
#endif
typedef IAMStreamSelect *PAMSTREAMSELECT;
enum _AMRESCTL_RESERVEFLAGS
{
	AMRESCTL_RESERVEFLAGS_RESERVE = 0,
	AMRESCTL_RESERVEFLAGS_UNRESERVE = 0x1
};
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0079_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0079_v0_0_s_ifspec;
#ifndef __IAMResourceControl_INTERFACE_DEFINED__
#define __IAMResourceControl_INTERFACE_DEFINED__
extern const IID IID_IAMResourceControl;
typedef struct IAMResourceControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAMResourceControl *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAMResourceControl *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAMResourceControl *This);
	HRESULT(STDMETHODCALLTYPE *Reserve) (IAMResourceControl *This, DWORD dwFlags, PVOID pvReserved);
	END_INTERFACE
}  IAMResourceControlVtbl;
interface IAMResourceControl
{
	CONST_VTBL struct IAMResourceControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMResourceControl_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAMResourceControl_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAMResourceControl_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAMResourceControl_Reserve(This,dwFlags,pvReserved)    ( (This)->lpVtbl -> Reserve(This,dwFlags,pvReserved) )
#endif
#endif
#ifndef __IAMClockAdjust_INTERFACE_DEFINED__
#define __IAMClockAdjust_INTERFACE_DEFINED__
extern const IID IID_IAMClockAdjust;
typedef struct IAMClockAdjustVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAMClockAdjust *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAMClockAdjust *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAMClockAdjust *This);
	HRESULT(STDMETHODCALLTYPE *SetClockDelta) (IAMClockAdjust *This, REFERENCE_TIME rtDelta);
	END_INTERFACE
}  IAMClockAdjustVtbl;
interface IAMClockAdjust
{
	CONST_VTBL struct IAMClockAdjustVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMClockAdjust_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAMClockAdjust_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAMClockAdjust_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAMClockAdjust_SetClockDelta(This,rtDelta)    ( (This)->lpVtbl -> SetClockDelta(This,rtDelta) )
#endif
#endif
enum _AM_FILTER_MISC_FLAGS
{
	AM_FILTER_MISC_FLAGS_IS_RENDERER = 0x1,
	AM_FILTER_MISC_FLAGS_IS_SOURCE = 0x2
};
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0081_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0081_v0_0_s_ifspec;
#ifndef __IAMFilterMiscFlags_INTERFACE_DEFINED__
#define __IAMFilterMiscFlags_INTERFACE_DEFINED__
extern const IID IID_IAMFilterMiscFlags;
typedef struct IAMFilterMiscFlagsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAMFilterMiscFlags *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAMFilterMiscFlags *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAMFilterMiscFlags *This);
	ULONG(STDMETHODCALLTYPE *GetMiscFlags) (IAMFilterMiscFlags *This);
	END_INTERFACE
}  IAMFilterMiscFlagsVtbl;
interface IAMFilterMiscFlags
{
	CONST_VTBL struct IAMFilterMiscFlagsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMFilterMiscFlags_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAMFilterMiscFlags_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAMFilterMiscFlags_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAMFilterMiscFlags_GetMiscFlags(This)    ( (This)->lpVtbl -> GetMiscFlags(This) )
#endif
#endif
#ifndef __IDrawVideoImage_INTERFACE_DEFINED__
#define __IDrawVideoImage_INTERFACE_DEFINED__
extern const IID IID_IDrawVideoImage;
typedef struct IDrawVideoImageVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDrawVideoImage *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDrawVideoImage *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDrawVideoImage *This);
	HRESULT(STDMETHODCALLTYPE *DrawVideoImageBegin) (IDrawVideoImage *This);
	HRESULT(STDMETHODCALLTYPE *DrawVideoImageEnd) (IDrawVideoImage *This);
	HRESULT(STDMETHODCALLTYPE *DrawVideoImageDraw) (IDrawVideoImage *This, HDC hdc, LPRECT lprcSrc, LPRECT lprcDst);
	END_INTERFACE
}  IDrawVideoImageVtbl;
interface IDrawVideoImage
{
	CONST_VTBL struct IDrawVideoImageVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDrawVideoImage_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDrawVideoImage_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDrawVideoImage_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDrawVideoImage_DrawVideoImageBegin(This)    ( (This)->lpVtbl -> DrawVideoImageBegin(This) )
#define IDrawVideoImage_DrawVideoImageEnd(This)    ( (This)->lpVtbl -> DrawVideoImageEnd(This) )
#define IDrawVideoImage_DrawVideoImageDraw(This,hdc,lprcSrc,lprcDst)    ( (This)->lpVtbl -> DrawVideoImageDraw(This,hdc,lprcSrc,lprcDst) )
#endif
#endif
#ifndef __IDecimateVideoImage_INTERFACE_DEFINED__
#define __IDecimateVideoImage_INTERFACE_DEFINED__
extern const IID IID_IDecimateVideoImage;
typedef struct IDecimateVideoImageVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDecimateVideoImage *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDecimateVideoImage *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDecimateVideoImage *This);
	HRESULT(STDMETHODCALLTYPE *SetDecimationImageSize) (IDecimateVideoImage *This, long lWidth, long lHeight);
	HRESULT(STDMETHODCALLTYPE *ResetDecimationImageSize) (IDecimateVideoImage *This);
	END_INTERFACE
}  IDecimateVideoImageVtbl;
interface IDecimateVideoImage
{
	CONST_VTBL struct IDecimateVideoImageVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDecimateVideoImage_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDecimateVideoImage_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDecimateVideoImage_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDecimateVideoImage_SetDecimationImageSize(This,lWidth,lHeight)    ( (This)->lpVtbl -> SetDecimationImageSize(This,lWidth,lHeight) )
#define IDecimateVideoImage_ResetDecimationImageSize(This)    ( (This)->lpVtbl -> ResetDecimationImageSize(This) )
#endif
#endif
typedef enum _DECIMATION_USAGE
{
	DECIMATION_LEGACY = 0,
	DECIMATION_USE_DECODER_ONLY = (DECIMATION_LEGACY + 1),
	DECIMATION_USE_VIDEOPORT_ONLY = (DECIMATION_USE_DECODER_ONLY + 1),
	DECIMATION_USE_OVERLAY_ONLY = (DECIMATION_USE_VIDEOPORT_ONLY + 1),
	DECIMATION_DEFAULT = (DECIMATION_USE_OVERLAY_ONLY + 1)
} DECIMATION_USAGE;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0084_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0084_v0_0_s_ifspec;
#ifndef __IAMVideoDecimationProperties_INTERFACE_DEFINED__
#define __IAMVideoDecimationProperties_INTERFACE_DEFINED__
extern const IID IID_IAMVideoDecimationProperties;
typedef struct IAMVideoDecimationPropertiesVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAMVideoDecimationProperties *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAMVideoDecimationProperties *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAMVideoDecimationProperties *This);
	HRESULT(STDMETHODCALLTYPE *QueryDecimationUsage) (IAMVideoDecimationProperties *This, DECIMATION_USAGE *lpUsage);
	HRESULT(STDMETHODCALLTYPE *SetDecimationUsage) (IAMVideoDecimationProperties *This, DECIMATION_USAGE Usage);
	END_INTERFACE
}  IAMVideoDecimationPropertiesVtbl;
interface IAMVideoDecimationProperties
{
	CONST_VTBL struct IAMVideoDecimationPropertiesVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMVideoDecimationProperties_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAMVideoDecimationProperties_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAMVideoDecimationProperties_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAMVideoDecimationProperties_QueryDecimationUsage(This,lpUsage)    ( (This)->lpVtbl -> QueryDecimationUsage(This,lpUsage) )
#define IAMVideoDecimationProperties_SetDecimationUsage(This,Usage)    ( (This)->lpVtbl -> SetDecimationUsage(This,Usage) )
#endif
#endif
#ifndef __IVideoFrameStep_INTERFACE_DEFINED__
#define __IVideoFrameStep_INTERFACE_DEFINED__
extern const IID IID_IVideoFrameStep;
typedef struct IVideoFrameStepVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IVideoFrameStep *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IVideoFrameStep *This);
	ULONG(STDMETHODCALLTYPE *Release) (IVideoFrameStep *This);
	HRESULT(STDMETHODCALLTYPE *Step) (IVideoFrameStep *This, DWORD dwFrames, IUnknown *pStepObject);
	HRESULT(STDMETHODCALLTYPE *CanStep) (IVideoFrameStep *This, long bMultiple, IUnknown *pStepObject);
	HRESULT(STDMETHODCALLTYPE *CancelStep) (IVideoFrameStep *This);
	END_INTERFACE
}  IVideoFrameStepVtbl;
interface IVideoFrameStep
{
	CONST_VTBL struct IVideoFrameStepVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVideoFrameStep_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVideoFrameStep_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IVideoFrameStep_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IVideoFrameStep_Step(This,dwFrames,pStepObject)    ( (This)->lpVtbl -> Step(This,dwFrames,pStepObject) )
#define IVideoFrameStep_CanStep(This,bMultiple,pStepObject)    ( (This)->lpVtbl -> CanStep(This,bMultiple,pStepObject) )
#define IVideoFrameStep_CancelStep(This)    ( (This)->lpVtbl -> CancelStep(This) )
#endif
#endif
enum _AM_PUSHSOURCE_FLAGS
{
	AM_PUSHSOURCECAPS_INTERNAL_RM = 0x1,
	AM_PUSHSOURCECAPS_NOT_LIVE = 0x2,
	AM_PUSHSOURCECAPS_PRIVATE_CLOCK = 0x4,
	AM_PUSHSOURCEREQS_USE_STREAM_CLOCK = 0x10000,
	AM_PUSHSOURCEREQS_USE_CLOCK_CHAIN = 0x20000
};
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0086_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0086_v0_0_s_ifspec;
#ifndef __IAMLatency_INTERFACE_DEFINED__
#define __IAMLatency_INTERFACE_DEFINED__
extern const IID IID_IAMLatency;
typedef struct IAMLatencyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAMLatency *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAMLatency *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAMLatency *This);
	HRESULT(STDMETHODCALLTYPE *GetLatency) (IAMLatency *This, REFERENCE_TIME *prtLatency);
	END_INTERFACE
}  IAMLatencyVtbl;
interface IAMLatency
{
	CONST_VTBL struct IAMLatencyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMLatency_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAMLatency_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAMLatency_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAMLatency_GetLatency(This,prtLatency)    ( (This)->lpVtbl -> GetLatency(This,prtLatency) )
#endif
#endif
#ifndef __IAMPushSource_INTERFACE_DEFINED__
#define __IAMPushSource_INTERFACE_DEFINED__
extern const IID IID_IAMPushSource;
typedef struct IAMPushSourceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAMPushSource *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAMPushSource *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAMPushSource *This);
	HRESULT(STDMETHODCALLTYPE *GetLatency) (IAMPushSource *This, REFERENCE_TIME *prtLatency);
	HRESULT(STDMETHODCALLTYPE *GetPushSourceFlags) (IAMPushSource *This, ULONG *pFlags);
	HRESULT(STDMETHODCALLTYPE *SetPushSourceFlags) (IAMPushSource *This, ULONG Flags);
	HRESULT(STDMETHODCALLTYPE *SetStreamOffset) (IAMPushSource *This, REFERENCE_TIME rtOffset);
	HRESULT(STDMETHODCALLTYPE *GetStreamOffset) (IAMPushSource *This, REFERENCE_TIME *prtOffset);
	HRESULT(STDMETHODCALLTYPE *GetMaxStreamOffset) (IAMPushSource *This, REFERENCE_TIME *prtMaxOffset);
	HRESULT(STDMETHODCALLTYPE *SetMaxStreamOffset) (IAMPushSource *This, REFERENCE_TIME rtMaxOffset);
	END_INTERFACE
}  IAMPushSourceVtbl;
interface IAMPushSource
{
	CONST_VTBL struct IAMPushSourceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMPushSource_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAMPushSource_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAMPushSource_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAMPushSource_GetLatency(This,prtLatency)    ( (This)->lpVtbl -> GetLatency(This,prtLatency) )
#define IAMPushSource_GetPushSourceFlags(This,pFlags)    ( (This)->lpVtbl -> GetPushSourceFlags(This,pFlags) )
#define IAMPushSource_SetPushSourceFlags(This,Flags)    ( (This)->lpVtbl -> SetPushSourceFlags(This,Flags) )
#define IAMPushSource_SetStreamOffset(This,rtOffset)    ( (This)->lpVtbl -> SetStreamOffset(This,rtOffset) )
#define IAMPushSource_GetStreamOffset(This,prtOffset)    ( (This)->lpVtbl -> GetStreamOffset(This,prtOffset) )
#define IAMPushSource_GetMaxStreamOffset(This,prtMaxOffset)    ( (This)->lpVtbl -> GetMaxStreamOffset(This,prtMaxOffset) )
#define IAMPushSource_SetMaxStreamOffset(This,rtMaxOffset)    ( (This)->lpVtbl -> SetMaxStreamOffset(This,rtMaxOffset) )
#endif
#endif
#ifndef __IAMDeviceRemoval_INTERFACE_DEFINED__
#define __IAMDeviceRemoval_INTERFACE_DEFINED__
extern const IID IID_IAMDeviceRemoval;
typedef struct IAMDeviceRemovalVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAMDeviceRemoval *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAMDeviceRemoval *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAMDeviceRemoval *This);
	HRESULT(STDMETHODCALLTYPE *DeviceInfo) (IAMDeviceRemoval *This, CLSID *pclsidInterfaceClass, LPWSTR *pwszSymbolicLink);
	HRESULT(STDMETHODCALLTYPE *Reassociate) (IAMDeviceRemoval *This);
	HRESULT(STDMETHODCALLTYPE *Disassociate) (IAMDeviceRemoval *This);
	END_INTERFACE
}  IAMDeviceRemovalVtbl;
interface IAMDeviceRemoval
{
	CONST_VTBL struct IAMDeviceRemovalVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMDeviceRemoval_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAMDeviceRemoval_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAMDeviceRemoval_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAMDeviceRemoval_DeviceInfo(This,pclsidInterfaceClass,pwszSymbolicLink)    ( (This)->lpVtbl -> DeviceInfo(This,pclsidInterfaceClass,pwszSymbolicLink) )
#define IAMDeviceRemoval_Reassociate(This)    ( (This)->lpVtbl -> Reassociate(This) )
#define IAMDeviceRemoval_Disassociate(This)    ( (This)->lpVtbl -> Disassociate(This) )
#endif
#endif
typedef struct DVINFO
{
	DWORD dwDVAAuxSrc;
	DWORD dwDVAAuxCtl;
	DWORD dwDVAAuxSrc1;
	DWORD dwDVAAuxCtl1;
	DWORD dwDVVAuxSrc;
	DWORD dwDVVAuxCtl;
	DWORD dwDVReserved[2];
} DVINFO;
typedef struct DVINFO *PDVINFO;
enum _DVENCODERRESOLUTION
{
	DVENCODERRESOLUTION_720x480 = 2012,
	DVENCODERRESOLUTION_360x240 = 2013,
	DVENCODERRESOLUTION_180x120 = 2014,
	DVENCODERRESOLUTION_88x60 = 2015
};
enum _DVENCODERVIDEOFORMAT
{
	DVENCODERVIDEOFORMAT_NTSC = 2000,
	DVENCODERVIDEOFORMAT_PAL = 2001
};
enum _DVENCODERFORMAT
{
	DVENCODERFORMAT_DVSD = 2007,
	DVENCODERFORMAT_DVHD = 2008,
	DVENCODERFORMAT_DVSL = 2009
};
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0088_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0088_v0_0_s_ifspec;
#ifndef __IDVEnc_INTERFACE_DEFINED__
#define __IDVEnc_INTERFACE_DEFINED__
extern const IID IID_IDVEnc;
typedef struct IDVEncVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDVEnc *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDVEnc *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDVEnc *This);
	HRESULT(STDMETHODCALLTYPE *get_IFormatResolution) (IDVEnc *This, int *VideoFormat, int *DVFormat, int *Resolution, BYTE fDVInfo, DVINFO *sDVInfo);
	HRESULT(STDMETHODCALLTYPE *put_IFormatResolution) (IDVEnc *This, int VideoFormat, int DVFormat, int Resolution, BYTE fDVInfo, DVINFO *sDVInfo);
	END_INTERFACE
}  IDVEncVtbl;
interface IDVEnc
{
	CONST_VTBL struct IDVEncVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDVEnc_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDVEnc_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDVEnc_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDVEnc_get_IFormatResolution(This,VideoFormat,DVFormat,Resolution,fDVInfo,sDVInfo)    ( (This)->lpVtbl -> get_IFormatResolution(This,VideoFormat,DVFormat,Resolution,fDVInfo,sDVInfo) )
#define IDVEnc_put_IFormatResolution(This,VideoFormat,DVFormat,Resolution,fDVInfo,sDVInfo)    ( (This)->lpVtbl -> put_IFormatResolution(This,VideoFormat,DVFormat,Resolution,fDVInfo,sDVInfo) )
#endif
#endif
enum _DVDECODERRESOLUTION
{
	DVDECODERRESOLUTION_720x480 = 1000,
	DVDECODERRESOLUTION_360x240 = 1001,
	DVDECODERRESOLUTION_180x120 = 1002,
	DVDECODERRESOLUTION_88x60 = 1003
};
enum _DVRESOLUTION
{
	DVRESOLUTION_FULL = 1000,
	DVRESOLUTION_HALF = 1001,
	DVRESOLUTION_QUARTER = 1002,
	DVRESOLUTION_DC = 1003
};
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0089_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0089_v0_0_s_ifspec;
#ifndef __IIPDVDec_INTERFACE_DEFINED__
#define __IIPDVDec_INTERFACE_DEFINED__
extern const IID IID_IIPDVDec;
typedef struct IIPDVDecVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IIPDVDec *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IIPDVDec *This);
	ULONG(STDMETHODCALLTYPE *Release) (IIPDVDec *This);
	HRESULT(STDMETHODCALLTYPE *get_IPDisplay) (IIPDVDec *This, int *displayPix);
	HRESULT(STDMETHODCALLTYPE *put_IPDisplay) (IIPDVDec *This, int displayPix);
	END_INTERFACE
}  IIPDVDecVtbl;
interface IIPDVDec
{
	CONST_VTBL struct IIPDVDecVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IIPDVDec_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IIPDVDec_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IIPDVDec_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IIPDVDec_get_IPDisplay(This,displayPix)    ( (This)->lpVtbl -> get_IPDisplay(This,displayPix) )
#define IIPDVDec_put_IPDisplay(This,displayPix)    ( (This)->lpVtbl -> put_IPDisplay(This,displayPix) )
#endif
#endif
#ifndef __IDVRGB219_INTERFACE_DEFINED__
#define __IDVRGB219_INTERFACE_DEFINED__
extern const IID IID_IDVRGB219;
typedef struct IDVRGB219Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDVRGB219 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDVRGB219 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDVRGB219 *This);
	HRESULT(STDMETHODCALLTYPE *SetRGB219) (IDVRGB219 *This, BOOL bState);
	END_INTERFACE
}  IDVRGB219Vtbl;
interface IDVRGB219
{
	CONST_VTBL struct IDVRGB219Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDVRGB219_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDVRGB219_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDVRGB219_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDVRGB219_SetRGB219(This,bState)    ( (This)->lpVtbl -> SetRGB219(This,bState) )
#endif
#endif
#ifndef __IDVSplitter_INTERFACE_DEFINED__
#define __IDVSplitter_INTERFACE_DEFINED__
extern const IID IID_IDVSplitter;
typedef struct IDVSplitterVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDVSplitter *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDVSplitter *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDVSplitter *This);
	HRESULT(STDMETHODCALLTYPE *DiscardAlternateVideoFrames) (IDVSplitter *This, int nDiscard);
	END_INTERFACE
}  IDVSplitterVtbl;
interface IDVSplitter
{
	CONST_VTBL struct IDVSplitterVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDVSplitter_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDVSplitter_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDVSplitter_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDVSplitter_DiscardAlternateVideoFrames(This,nDiscard)    ( (This)->lpVtbl -> DiscardAlternateVideoFrames(This,nDiscard) )
#endif
#endif
enum _AM_AUDIO_RENDERER_STAT_PARAM
{
	AM_AUDREND_STAT_PARAM_BREAK_COUNT = 1,
	AM_AUDREND_STAT_PARAM_SLAVE_MODE = (AM_AUDREND_STAT_PARAM_BREAK_COUNT + 1),
	AM_AUDREND_STAT_PARAM_SILENCE_DUR = (AM_AUDREND_STAT_PARAM_SLAVE_MODE + 1),
	AM_AUDREND_STAT_PARAM_LAST_BUFFER_DUR = (AM_AUDREND_STAT_PARAM_SILENCE_DUR + 1),
	AM_AUDREND_STAT_PARAM_DISCONTINUITIES = (AM_AUDREND_STAT_PARAM_LAST_BUFFER_DUR + 1),
	AM_AUDREND_STAT_PARAM_SLAVE_RATE = (AM_AUDREND_STAT_PARAM_DISCONTINUITIES + 1),
	AM_AUDREND_STAT_PARAM_SLAVE_DROPWRITE_DUR = (AM_AUDREND_STAT_PARAM_SLAVE_RATE + 1),
	AM_AUDREND_STAT_PARAM_SLAVE_HIGHLOWERROR = (AM_AUDREND_STAT_PARAM_SLAVE_DROPWRITE_DUR + 1),
	AM_AUDREND_STAT_PARAM_SLAVE_LASTHIGHLOWERROR = (AM_AUDREND_STAT_PARAM_SLAVE_HIGHLOWERROR + 1),
	AM_AUDREND_STAT_PARAM_SLAVE_ACCUMERROR = (AM_AUDREND_STAT_PARAM_SLAVE_LASTHIGHLOWERROR + 1),
	AM_AUDREND_STAT_PARAM_BUFFERFULLNESS = (AM_AUDREND_STAT_PARAM_SLAVE_ACCUMERROR + 1),
	AM_AUDREND_STAT_PARAM_JITTER = (AM_AUDREND_STAT_PARAM_BUFFERFULLNESS + 1)
};
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0092_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0092_v0_0_s_ifspec;
#ifndef __IAMAudioRendererStats_INTERFACE_DEFINED__
#define __IAMAudioRendererStats_INTERFACE_DEFINED__
extern const IID IID_IAMAudioRendererStats;
typedef struct IAMAudioRendererStatsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAMAudioRendererStats *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAMAudioRendererStats *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAMAudioRendererStats *This);
	HRESULT(STDMETHODCALLTYPE *GetStatParam) (IAMAudioRendererStats *This, DWORD dwParam, DWORD *pdwParam1, DWORD *pdwParam2);
	END_INTERFACE
}  IAMAudioRendererStatsVtbl;
interface IAMAudioRendererStats
{
	CONST_VTBL struct IAMAudioRendererStatsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMAudioRendererStats_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAMAudioRendererStats_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAMAudioRendererStats_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAMAudioRendererStats_GetStatParam(This,dwParam,pdwParam1,pdwParam2)    ( (This)->lpVtbl -> GetStatParam(This,dwParam,pdwParam1,pdwParam2) )
#endif
#endif
enum _AM_INTF_SEARCH_FLAGS
{
	AM_INTF_SEARCH_INPUT_PIN = 0x1,
	AM_INTF_SEARCH_OUTPUT_PIN = 0x2,
	AM_INTF_SEARCH_FILTER = 0x4
};
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0094_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0094_v0_0_s_ifspec;
#ifndef __IAMGraphStreams_INTERFACE_DEFINED__
#define __IAMGraphStreams_INTERFACE_DEFINED__
extern const IID IID_IAMGraphStreams;
typedef struct IAMGraphStreamsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAMGraphStreams *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAMGraphStreams *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAMGraphStreams *This);
	HRESULT(STDMETHODCALLTYPE *FindUpstreamInterface) (IAMGraphStreams *This, IPin *pPin, REFIID riid, void **ppvInterface, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE *SyncUsingStreamOffset) (IAMGraphStreams *This, BOOL bUseStreamOffset);
	HRESULT(STDMETHODCALLTYPE *SetMaxGraphLatency) (IAMGraphStreams *This, REFERENCE_TIME rtMaxGraphLatency);
	END_INTERFACE
}  IAMGraphStreamsVtbl;
interface IAMGraphStreams
{
	CONST_VTBL struct IAMGraphStreamsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMGraphStreams_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAMGraphStreams_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAMGraphStreams_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAMGraphStreams_FindUpstreamInterface(This,pPin,riid,ppvInterface,dwFlags)    ( (This)->lpVtbl -> FindUpstreamInterface(This,pPin,riid,ppvInterface,dwFlags) )
#define IAMGraphStreams_SyncUsingStreamOffset(This,bUseStreamOffset)    ( (This)->lpVtbl -> SyncUsingStreamOffset(This,bUseStreamOffset) )
#define IAMGraphStreams_SetMaxGraphLatency(This,rtMaxGraphLatency)    ( (This)->lpVtbl -> SetMaxGraphLatency(This,rtMaxGraphLatency) )
#endif
#endif
enum AMOVERLAYFX
{
	AMOVERFX_NOFX = 0,
	AMOVERFX_MIRRORLEFTRIGHT = 0x2,
	AMOVERFX_MIRRORUPDOWN = 0x4,
	AMOVERFX_DEINTERLACE = 0x8
};
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0095_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0095_v0_0_s_ifspec;
#ifndef __IAMOverlayFX_INTERFACE_DEFINED__
#define __IAMOverlayFX_INTERFACE_DEFINED__
extern const IID IID_IAMOverlayFX;
typedef struct IAMOverlayFXVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAMOverlayFX *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAMOverlayFX *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAMOverlayFX *This);
	HRESULT(STDMETHODCALLTYPE *QueryOverlayFXCaps) (IAMOverlayFX *This, DWORD *lpdwOverlayFXCaps);
	HRESULT(STDMETHODCALLTYPE *SetOverlayFX) (IAMOverlayFX *This, DWORD dwOverlayFX);
	HRESULT(STDMETHODCALLTYPE *GetOverlayFX) (IAMOverlayFX *This, DWORD *lpdwOverlayFX);
	END_INTERFACE
}  IAMOverlayFXVtbl;
interface IAMOverlayFX
{
	CONST_VTBL struct IAMOverlayFXVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMOverlayFX_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAMOverlayFX_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAMOverlayFX_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAMOverlayFX_QueryOverlayFXCaps(This,lpdwOverlayFXCaps)    ( (This)->lpVtbl -> QueryOverlayFXCaps(This,lpdwOverlayFXCaps) )
#define IAMOverlayFX_SetOverlayFX(This,dwOverlayFX)    ( (This)->lpVtbl -> SetOverlayFX(This,dwOverlayFX) )
#define IAMOverlayFX_GetOverlayFX(This,lpdwOverlayFX)    ( (This)->lpVtbl -> GetOverlayFX(This,lpdwOverlayFX) )
#endif
#endif
#ifndef __IAMOpenProgress_INTERFACE_DEFINED__
#define __IAMOpenProgress_INTERFACE_DEFINED__
extern const IID IID_IAMOpenProgress;
typedef struct IAMOpenProgressVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAMOpenProgress *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAMOpenProgress *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAMOpenProgress *This);
	HRESULT(STDMETHODCALLTYPE *QueryProgress) (IAMOpenProgress *This, LONGLONG *pllTotal, LONGLONG *pllCurrent);
	HRESULT(STDMETHODCALLTYPE *AbortOperation) (IAMOpenProgress *This);
	END_INTERFACE
}  IAMOpenProgressVtbl;
interface IAMOpenProgress
{
	CONST_VTBL struct IAMOpenProgressVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMOpenProgress_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAMOpenProgress_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAMOpenProgress_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAMOpenProgress_QueryProgress(This,pllTotal,pllCurrent)    ( (This)->lpVtbl -> QueryProgress(This,pllTotal,pllCurrent) )
#define IAMOpenProgress_AbortOperation(This)    ( (This)->lpVtbl -> AbortOperation(This) )
#endif
#endif
#ifndef __IMpeg2Demultiplexer_INTERFACE_DEFINED__
#define __IMpeg2Demultiplexer_INTERFACE_DEFINED__
extern const IID IID_IMpeg2Demultiplexer;
typedef struct IMpeg2DemultiplexerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMpeg2Demultiplexer *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMpeg2Demultiplexer *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMpeg2Demultiplexer *This);
	HRESULT(STDMETHODCALLTYPE *CreateOutputPin) (IMpeg2Demultiplexer *This, AM_MEDIA_TYPE *pMediaType, LPWSTR pszPinName, IPin **ppIPin);
	HRESULT(STDMETHODCALLTYPE *SetOutputPinMediaType) (IMpeg2Demultiplexer *This, LPWSTR pszPinName, AM_MEDIA_TYPE *pMediaType);
	HRESULT(STDMETHODCALLTYPE *DeleteOutputPin) (IMpeg2Demultiplexer *This, LPWSTR pszPinName);
	END_INTERFACE
}  IMpeg2DemultiplexerVtbl;
interface IMpeg2Demultiplexer
{
	CONST_VTBL struct IMpeg2DemultiplexerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMpeg2Demultiplexer_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMpeg2Demultiplexer_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IMpeg2Demultiplexer_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IMpeg2Demultiplexer_CreateOutputPin(This,pMediaType,pszPinName,ppIPin)    ( (This)->lpVtbl -> CreateOutputPin(This,pMediaType,pszPinName,ppIPin) )
#define IMpeg2Demultiplexer_SetOutputPinMediaType(This,pszPinName,pMediaType)    ( (This)->lpVtbl -> SetOutputPinMediaType(This,pszPinName,pMediaType) )
#define IMpeg2Demultiplexer_DeleteOutputPin(This,pszPinName)    ( (This)->lpVtbl -> DeleteOutputPin(This,pszPinName) )
#endif
#endif
#define MPEG2_PROGRAM_STREAM_MAP                 0x00000000
#define MPEG2_PROGRAM_ELEMENTARY_STREAM          0x00000001
#define MPEG2_PROGRAM_DIRECTORY_PES_PACKET       0x00000002
#define MPEG2_PROGRAM_PACK_HEADER                0x00000003
#define MPEG2_PROGRAM_PES_STREAM                 0x00000004
#define MPEG2_PROGRAM_SYSTEM_HEADER              0x00000005
#define SUBSTREAM_FILTER_VAL_NONE                0x10000000
typedef struct STREAM_ID_MAP
{
	ULONG stream_id;
	DWORD dwMediaSampleContent;
	ULONG ulSubstreamFilterValue;
	int iDataOffset;
} STREAM_ID_MAP;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0098_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0098_v0_0_s_ifspec;
#ifndef __IEnumStreamIdMap_INTERFACE_DEFINED__
#define __IEnumStreamIdMap_INTERFACE_DEFINED__
extern const IID IID_IEnumStreamIdMap;
typedef struct IEnumStreamIdMapVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IEnumStreamIdMap *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IEnumStreamIdMap *This);
	ULONG(STDMETHODCALLTYPE *Release) (IEnumStreamIdMap *This);
	HRESULT(STDMETHODCALLTYPE *Next) (IEnumStreamIdMap *This, ULONG cRequest, STREAM_ID_MAP *pStreamIdMap, ULONG *pcReceived);
	HRESULT(STDMETHODCALLTYPE *Skip) (IEnumStreamIdMap *This, ULONG cRecords);
	HRESULT(STDMETHODCALLTYPE *Reset) (IEnumStreamIdMap *This);
	HRESULT(STDMETHODCALLTYPE *Clone) (IEnumStreamIdMap *This, IEnumStreamIdMap **ppIEnumStreamIdMap);
	END_INTERFACE
}  IEnumStreamIdMapVtbl;
interface IEnumStreamIdMap
{
	CONST_VTBL struct IEnumStreamIdMapVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEnumStreamIdMap_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEnumStreamIdMap_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IEnumStreamIdMap_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IEnumStreamIdMap_Next(This,cRequest,pStreamIdMap,pcReceived)    ( (This)->lpVtbl -> Next(This,cRequest,pStreamIdMap,pcReceived) )
#define IEnumStreamIdMap_Skip(This,cRecords)    ( (This)->lpVtbl -> Skip(This,cRecords) )
#define IEnumStreamIdMap_Reset(This)    ( (This)->lpVtbl -> Reset(This) )
#define IEnumStreamIdMap_Clone(This,ppIEnumStreamIdMap)    ( (This)->lpVtbl -> Clone(This,ppIEnumStreamIdMap) )
#endif
#endif
#ifndef __IMPEG2StreamIdMap_INTERFACE_DEFINED__
#define __IMPEG2StreamIdMap_INTERFACE_DEFINED__
extern const IID IID_IMPEG2StreamIdMap;
typedef struct IMPEG2StreamIdMapVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMPEG2StreamIdMap *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMPEG2StreamIdMap *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMPEG2StreamIdMap *This);
	HRESULT(STDMETHODCALLTYPE *MapStreamId) (IMPEG2StreamIdMap *This, ULONG ulStreamId, DWORD MediaSampleContent, ULONG ulSubstreamFilterValue, int iDataOffset);
	HRESULT(STDMETHODCALLTYPE *UnmapStreamId) (IMPEG2StreamIdMap *This, ULONG culStreamId, ULONG *pulStreamId);
	HRESULT(STDMETHODCALLTYPE *EnumStreamIdMap) (IMPEG2StreamIdMap *This, IEnumStreamIdMap **ppIEnumStreamIdMap);
	END_INTERFACE
}  IMPEG2StreamIdMapVtbl;
interface IMPEG2StreamIdMap
{
	CONST_VTBL struct IMPEG2StreamIdMapVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMPEG2StreamIdMap_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMPEG2StreamIdMap_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IMPEG2StreamIdMap_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IMPEG2StreamIdMap_MapStreamId(This,ulStreamId,MediaSampleContent,ulSubstreamFilterValue,iDataOffset)    ( (This)->lpVtbl -> MapStreamId(This,ulStreamId,MediaSampleContent,ulSubstreamFilterValue,iDataOffset) )
#define IMPEG2StreamIdMap_UnmapStreamId(This,culStreamId,pulStreamId)    ( (This)->lpVtbl -> UnmapStreamId(This,culStreamId,pulStreamId) )
#define IMPEG2StreamIdMap_EnumStreamIdMap(This,ppIEnumStreamIdMap)    ( (This)->lpVtbl -> EnumStreamIdMap(This,ppIEnumStreamIdMap) )
#endif
#endif
#ifndef __IRegisterServiceProvider_INTERFACE_DEFINED__
#define __IRegisterServiceProvider_INTERFACE_DEFINED__
extern const IID IID_IRegisterServiceProvider;
typedef struct IRegisterServiceProviderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IRegisterServiceProvider *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IRegisterServiceProvider *This);
	ULONG(STDMETHODCALLTYPE *Release) (IRegisterServiceProvider *This);
	HRESULT(STDMETHODCALLTYPE *RegisterService) (IRegisterServiceProvider *This, REFGUID guidService, IUnknown *pUnkObject);
	END_INTERFACE
}  IRegisterServiceProviderVtbl;
interface IRegisterServiceProvider
{
	CONST_VTBL struct IRegisterServiceProviderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IRegisterServiceProvider_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IRegisterServiceProvider_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IRegisterServiceProvider_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IRegisterServiceProvider_RegisterService(This,guidService,pUnkObject)    ( (This)->lpVtbl -> RegisterService(This,guidService,pUnkObject) )
#endif
#endif
#ifndef __IAMClockSlave_INTERFACE_DEFINED__
#define __IAMClockSlave_INTERFACE_DEFINED__
extern const IID IID_IAMClockSlave;
typedef struct IAMClockSlaveVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAMClockSlave *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAMClockSlave *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAMClockSlave *This);
	HRESULT(STDMETHODCALLTYPE *SetErrorTolerance) (IAMClockSlave *This, DWORD dwTolerance);
	HRESULT(STDMETHODCALLTYPE *GetErrorTolerance) (IAMClockSlave *This, DWORD *pdwTolerance);
	END_INTERFACE
}  IAMClockSlaveVtbl;
interface IAMClockSlave
{
	CONST_VTBL struct IAMClockSlaveVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMClockSlave_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAMClockSlave_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAMClockSlave_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAMClockSlave_SetErrorTolerance(This,dwTolerance)    ( (This)->lpVtbl -> SetErrorTolerance(This,dwTolerance) )
#define IAMClockSlave_GetErrorTolerance(This,pdwTolerance)    ( (This)->lpVtbl -> GetErrorTolerance(This,pdwTolerance) )
#endif
#endif
#ifndef __IAMGraphBuilderCallback_INTERFACE_DEFINED__
#define __IAMGraphBuilderCallback_INTERFACE_DEFINED__
extern const IID IID_IAMGraphBuilderCallback;
typedef struct IAMGraphBuilderCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAMGraphBuilderCallback *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAMGraphBuilderCallback *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAMGraphBuilderCallback *This);
	HRESULT(STDMETHODCALLTYPE *SelectedFilter) (IAMGraphBuilderCallback *This, IMoniker *pMon);
	HRESULT(STDMETHODCALLTYPE *CreatedFilter) (IAMGraphBuilderCallback *This, IBaseFilter *pFil);
	END_INTERFACE
}  IAMGraphBuilderCallbackVtbl;
interface IAMGraphBuilderCallback
{
	CONST_VTBL struct IAMGraphBuilderCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMGraphBuilderCallback_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAMGraphBuilderCallback_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAMGraphBuilderCallback_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAMGraphBuilderCallback_SelectedFilter(This,pMon)    ( (This)->lpVtbl -> SelectedFilter(This,pMon) )
#define IAMGraphBuilderCallback_CreatedFilter(This,pFil)    ( (This)->lpVtbl -> CreatedFilter(This,pFil) )
#endif
#endif
#ifndef _IAMFilterGraphCallback_INTERFACE_DEFINED__
#define _IAMFilterGraphCallback_INTERFACE_DEFINED__
extern const IID IID_IAMFilterGraphCallback;
typedef struct IAMFilterGraphCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IAMFilterGraphCallback *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IAMFilterGraphCallback *This);
	ULONG(STDMETHODCALLTYPE *Release) (IAMFilterGraphCallback *This);
	HRESULT(STDMETHODCALLTYPE *UnableToRender) (IAMFilterGraphCallback *This, IPin * pPin);
	END_INTERFACE
}  IAMFilterGraphCallbackVtbl;
interface IAMFilterGraphCallback
{
	CONST_VTBL struct IAMFilterGraphCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMGraphBuilderCallback_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAMGraphBuilderCallback_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAMGraphBuilderCallback_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAMGraphBuilderCallback_UnableToRender(This, pPin)    ( (This)->lpVtbl -> UnableToRender(This, pPin) )
#endif
EXTERN_GUID(IID_IAMFilterGraphCallback, 0x56a868fd, 0x0ad4, 0x11ce, 0xb0, 0xa3, 0x0, 0x20, 0xaf, 0x0b, 0xa7, 0x70);
#endif
struct CodecAPIEventData
{
	GUID guid;
	DWORD dataLength;
	DWORD reserved[3];
};
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0103_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0103_v0_0_s_ifspec;
#ifndef __ICodecAPI_INTERFACE_DEFINED__
#define __ICodecAPI_INTERFACE_DEFINED__
extern const IID IID_ICodecAPI;
typedef struct ICodecAPIVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ICodecAPI * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ICodecAPI * This);
	ULONG(STDMETHODCALLTYPE * Release) (ICodecAPI * This);
	HRESULT(STDMETHODCALLTYPE * IsSupported) (ICodecAPI * This, const GUID * Api);
	HRESULT(STDMETHODCALLTYPE * IsModifiable) (ICodecAPI * This, const GUID * Api);
	HRESULT(STDMETHODCALLTYPE * GetParameterRange) (ICodecAPI * This, const GUID * Api, VARIANT * ValueMin, VARIANT * ValueMax, VARIANT * SteppingDelta);
	HRESULT(STDMETHODCALLTYPE * GetParameterValues) (ICodecAPI * This, const GUID * Api, VARIANT ** Values, ULONG * ValuesCount);
	HRESULT(STDMETHODCALLTYPE * GetDefaultValue) (ICodecAPI * This, const GUID * Api, VARIANT * Value);
	HRESULT(STDMETHODCALLTYPE * GetValue) (ICodecAPI * This, const GUID * Api, VARIANT * Value);
	HRESULT(STDMETHODCALLTYPE * SetValue) (ICodecAPI * This, const GUID * Api, VARIANT * Value);
	HRESULT(STDMETHODCALLTYPE * RegisterForEvent) (ICodecAPI * This, const GUID * Api, LONG_PTR userData);
	HRESULT(STDMETHODCALLTYPE * UnregisterForEvent) (ICodecAPI * This, const GUID * Api);
	HRESULT(STDMETHODCALLTYPE * SetAllDefaults) (ICodecAPI * This);
	HRESULT(STDMETHODCALLTYPE * SetValueWithNotify) (ICodecAPI * This, const GUID * Api, VARIANT * Value, GUID ** ChangedParam, ULONG * ChangedParamCount);
	HRESULT(STDMETHODCALLTYPE * SetAllDefaultsWithNotify) (ICodecAPI * This, GUID ** ChangedParam, ULONG * ChangedParamCount);
	HRESULT(STDMETHODCALLTYPE * GetAllSettings) (ICodecAPI * This, IStream * __MIDL__ICodecAPI0000);
	HRESULT(STDMETHODCALLTYPE * SetAllSettings) (ICodecAPI * This, IStream * __MIDL__ICodecAPI0001);
	HRESULT(STDMETHODCALLTYPE * SetAllSettingsWithNotify) (ICodecAPI * This, IStream * __MIDL__ICodecAPI0002, GUID ** ChangedParam, ULONG * ChangedParamCount);
	END_INTERFACE
}  ICodecAPIVtbl;
interface ICodecAPI
{
	CONST_VTBL struct ICodecAPIVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ICodecAPI_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ICodecAPI_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define ICodecAPI_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define ICodecAPI_IsSupported(This,Api)    ( (This)->lpVtbl -> IsSupported(This,Api) )
#define ICodecAPI_IsModifiable(This,Api)    ( (This)->lpVtbl -> IsModifiable(This,Api) )
#define ICodecAPI_GetParameterRange(This,Api,ValueMin,ValueMax,SteppingDelta)    ( (This)->lpVtbl -> GetParameterRange(This,Api,ValueMin,ValueMax,SteppingDelta) )
#define ICodecAPI_GetParameterValues(This,Api,Values,ValuesCount)    ( (This)->lpVtbl -> GetParameterValues(This,Api,Values,ValuesCount) )
#define ICodecAPI_GetDefaultValue(This,Api,Value)    ( (This)->lpVtbl -> GetDefaultValue(This,Api,Value) )
#define ICodecAPI_GetValue(This,Api,Value)    ( (This)->lpVtbl -> GetValue(This,Api,Value) )
#define ICodecAPI_SetValue(This,Api,Value)    ( (This)->lpVtbl -> SetValue(This,Api,Value) )
#define ICodecAPI_RegisterForEvent(This,Api,userData)    ( (This)->lpVtbl -> RegisterForEvent(This,Api,userData) )
#define ICodecAPI_UnregisterForEvent(This,Api)    ( (This)->lpVtbl -> UnregisterForEvent(This,Api) )
#define ICodecAPI_SetAllDefaults(This)    ( (This)->lpVtbl -> SetAllDefaults(This) )
#define ICodecAPI_SetValueWithNotify(This,Api,Value,ChangedParam,ChangedParamCount)    ( (This)->lpVtbl -> SetValueWithNotify(This,Api,Value,ChangedParam,ChangedParamCount) )
#define ICodecAPI_SetAllDefaultsWithNotify(This,ChangedParam,ChangedParamCount)    ( (This)->lpVtbl -> SetAllDefaultsWithNotify(This,ChangedParam,ChangedParamCount) )
#define ICodecAPI_GetAllSettings(This,__MIDL__ICodecAPI0000)    ( (This)->lpVtbl -> GetAllSettings(This,__MIDL__ICodecAPI0000) )
#define ICodecAPI_SetAllSettings(This,__MIDL__ICodecAPI0001)    ( (This)->lpVtbl -> SetAllSettings(This,__MIDL__ICodecAPI0001) )
#define ICodecAPI_SetAllSettingsWithNotify(This,__MIDL__ICodecAPI0002,ChangedParam,ChangedParamCount)    ( (This)->lpVtbl -> SetAllSettingsWithNotify(This,__MIDL__ICodecAPI0002,ChangedParam,ChangedParamCount) )
#endif
#endif
#ifndef __IGetCapabilitiesKey_INTERFACE_DEFINED__
#define __IGetCapabilitiesKey_INTERFACE_DEFINED__
extern const IID IID_IGetCapabilitiesKey;
typedef struct IGetCapabilitiesKeyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGetCapabilitiesKey * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGetCapabilitiesKey * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGetCapabilitiesKey * This);
	HRESULT(STDMETHODCALLTYPE * GetCapabilitiesKey) (IGetCapabilitiesKey * This, HKEY * pHKey);
	END_INTERFACE
}  IGetCapabilitiesKeyVtbl;
interface IGetCapabilitiesKey
{
	CONST_VTBL struct IGetCapabilitiesKeyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGetCapabilitiesKey_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGetCapabilitiesKey_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IGetCapabilitiesKey_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IGetCapabilitiesKey_GetCapabilitiesKey(This,pHKey)    ( (This)->lpVtbl -> GetCapabilitiesKey(This,pHKey) )
#endif
#endif
#ifndef __IEncoderAPI_INTERFACE_DEFINED__
#define __IEncoderAPI_INTERFACE_DEFINED__
extern const IID IID_IEncoderAPI;
typedef struct IEncoderAPIVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IEncoderAPI * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IEncoderAPI * This);
	ULONG(STDMETHODCALLTYPE * Release) (IEncoderAPI * This);
	HRESULT(STDMETHODCALLTYPE * IsSupported) (IEncoderAPI * This, const GUID * Api);
	HRESULT(STDMETHODCALLTYPE * IsAvailable) (IEncoderAPI * This, const GUID * Api);
	HRESULT(STDMETHODCALLTYPE * GetParameterRange) (IEncoderAPI * This, const GUID * Api, VARIANT * ValueMin, VARIANT * ValueMax, VARIANT * SteppingDelta);
	HRESULT(STDMETHODCALLTYPE * GetParameterValues) (IEncoderAPI * This, const GUID * Api, VARIANT ** Values, ULONG * ValuesCount);
	HRESULT(STDMETHODCALLTYPE * GetDefaultValue) (IEncoderAPI * This, const GUID * Api, VARIANT * Value);
	HRESULT(STDMETHODCALLTYPE * GetValue) (IEncoderAPI * This, const GUID * Api, VARIANT * Value);
	HRESULT(STDMETHODCALLTYPE * SetValue) (IEncoderAPI * This, const GUID * Api, VARIANT * Value);
	END_INTERFACE
}  IEncoderAPIVtbl;
interface IEncoderAPI
{
	CONST_VTBL struct IEncoderAPIVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IEncoderAPI_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IEncoderAPI_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IEncoderAPI_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IEncoderAPI_IsSupported(This,Api)    ( (This)->lpVtbl -> IsSupported(This,Api) )
#define IEncoderAPI_IsAvailable(This,Api)    ( (This)->lpVtbl -> IsAvailable(This,Api) )
#define IEncoderAPI_GetParameterRange(This,Api,ValueMin,ValueMax,SteppingDelta)    ( (This)->lpVtbl -> GetParameterRange(This,Api,ValueMin,ValueMax,SteppingDelta) )
#define IEncoderAPI_GetParameterValues(This,Api,Values,ValuesCount)    ( (This)->lpVtbl -> GetParameterValues(This,Api,Values,ValuesCount) )
#define IEncoderAPI_GetDefaultValue(This,Api,Value)    ( (This)->lpVtbl -> GetDefaultValue(This,Api,Value) )
#define IEncoderAPI_GetValue(This,Api,Value)    ( (This)->lpVtbl -> GetValue(This,Api,Value) )
#define IEncoderAPI_SetValue(This,Api,Value)    ( (This)->lpVtbl -> SetValue(This,Api,Value) )
#endif
#endif
#ifndef __IVideoEncoder_INTERFACE_DEFINED__
#define __IVideoEncoder_INTERFACE_DEFINED__
extern const IID IID_IVideoEncoder;
typedef struct IVideoEncoderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVideoEncoder * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVideoEncoder * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVideoEncoder * This);
	HRESULT(STDMETHODCALLTYPE * IsSupported) (IVideoEncoder * This, const GUID * Api);
	HRESULT(STDMETHODCALLTYPE * IsAvailable) (IVideoEncoder * This, const GUID * Api);
	HRESULT(STDMETHODCALLTYPE * GetParameterRange) (IVideoEncoder * This, const GUID * Api, VARIANT * ValueMin, VARIANT * ValueMax, VARIANT * SteppingDelta);
	HRESULT(STDMETHODCALLTYPE * GetParameterValues) (IVideoEncoder * This, const GUID * Api, VARIANT ** Values, ULONG * ValuesCount);
	HRESULT(STDMETHODCALLTYPE * GetDefaultValue) (IVideoEncoder * This, const GUID * Api, VARIANT * Value);
	HRESULT(STDMETHODCALLTYPE * GetValue) (IVideoEncoder * This, const GUID * Api, VARIANT * Value);
	HRESULT(STDMETHODCALLTYPE * SetValue) (IVideoEncoder * This, const GUID * Api, VARIANT * Value);
	END_INTERFACE
}  IVideoEncoderVtbl;
interface IVideoEncoder
{
	CONST_VTBL struct IVideoEncoderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVideoEncoder_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVideoEncoder_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IVideoEncoder_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IVideoEncoder_IsSupported(This,Api)    ( (This)->lpVtbl -> IsSupported(This,Api) )
#define IVideoEncoder_IsAvailable(This,Api)    ( (This)->lpVtbl -> IsAvailable(This,Api) )
#define IVideoEncoder_GetParameterRange(This,Api,ValueMin,ValueMax,SteppingDelta)    ( (This)->lpVtbl -> GetParameterRange(This,Api,ValueMin,ValueMax,SteppingDelta) )
#define IVideoEncoder_GetParameterValues(This,Api,Values,ValuesCount)    ( (This)->lpVtbl -> GetParameterValues(This,Api,Values,ValuesCount) )
#define IVideoEncoder_GetDefaultValue(This,Api,Value)    ( (This)->lpVtbl -> GetDefaultValue(This,Api,Value) )
#define IVideoEncoder_GetValue(This,Api,Value)    ( (This)->lpVtbl -> GetValue(This,Api,Value) )
#define IVideoEncoder_SetValue(This,Api,Value)    ( (This)->lpVtbl -> SetValue(This,Api,Value) )
#endif
#endif
#ifndef __ENCODER_API_DEFINES__
#define __ENCODER_API_DEFINES__
typedef enum VIDEOENCODER_BITRATE_MODE
{
	ConstantBitRate = 0,
	VariableBitRateAverage = (ConstantBitRate + 1),
	VariableBitRatePeak = (VariableBitRateAverage + 1)
} VIDEOENCODER_BITRATE_MODE;
#endif
#define AM_GETDECODERCAP_QUERY_VMR_SUPPORT   0x00000001
#define      VMR_NOTSUPPORTED                0x00000000
#define      VMR_SUPPORTED                   0x00000001
#define AM_QUERY_DECODER_VMR_SUPPORT         0x00000001
#define AM_QUERY_DECODER_DXVA_1_SUPPORT      0x00000002
#define AM_QUERY_DECODER_DVD_SUPPORT         0x00000003
#define AM_QUERY_DECODER_ATSC_SD_SUPPORT     0x00000004
#define AM_QUERY_DECODER_ATSC_HD_SUPPORT     0x00000005
#define AM_GETDECODERCAP_QUERY_VMR9_SUPPORT  0x00000006
#define AM_GETDECODERCAP_QUERY_EVR_SUPPORT   0x00000007
#define      DECODER_CAP_NOTSUPPORTED        0x00000000
#define      DECODER_CAP_SUPPORTED           0x00000001
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0107_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0107_v0_0_s_ifspec;
#ifndef __IAMDecoderCaps_INTERFACE_DEFINED__
#define __IAMDecoderCaps_INTERFACE_DEFINED__
extern const IID IID_IAMDecoderCaps;
typedef struct IAMDecoderCapsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAMDecoderCaps * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAMDecoderCaps * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAMDecoderCaps * This);
	HRESULT(STDMETHODCALLTYPE * GetDecoderCaps) (IAMDecoderCaps * This, DWORD dwCapIndex, DWORD * lpdwCap);
	END_INTERFACE
}  IAMDecoderCapsVtbl;
interface IAMDecoderCaps
{
	CONST_VTBL struct IAMDecoderCapsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMDecoderCaps_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAMDecoderCaps_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAMDecoderCaps_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAMDecoderCaps_GetDecoderCaps(This,dwCapIndex,lpdwCap)    ( (This)->lpVtbl -> GetDecoderCaps(This,dwCapIndex,lpdwCap) )
#endif
#endif
typedef struct _AMCOPPSignature
{
	BYTE Signature[256];
} AMCOPPSignature;
typedef struct _AMCOPPCommand
{
	GUID macKDI;
	GUID guidCommandID;
	DWORD dwSequence;
	DWORD cbSizeData;
	BYTE CommandData[4056];
} AMCOPPCommand;
typedef struct _AMCOPPCommand *LPAMCOPPCommand;
typedef struct _AMCOPPStatusInput
{
	GUID rApp;
	GUID guidStatusRequestID;
	DWORD dwSequence;
	DWORD cbSizeData;
	BYTE StatusData[4056];
} AMCOPPStatusInput;
typedef struct _AMCOPPStatusInput *LPAMCOPPStatusInput;
typedef struct _AMCOPPStatusOutput
{
	GUID macKDI;
	DWORD cbSizeData;
	BYTE COPPStatus[4076];
} AMCOPPStatusOutput;
typedef struct _AMCOPPStatusOutput *LPAMCOPPStatusOutput;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0108_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0108_v0_0_s_ifspec;
#ifndef __IAMCertifiedOutputProtection_INTERFACE_DEFINED__
#define __IAMCertifiedOutputProtection_INTERFACE_DEFINED__
extern const IID IID_IAMCertifiedOutputProtection;
typedef struct IAMCertifiedOutputProtectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAMCertifiedOutputProtection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAMCertifiedOutputProtection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAMCertifiedOutputProtection * This);
	HRESULT(STDMETHODCALLTYPE * KeyExchange) (IAMCertifiedOutputProtection * This, GUID * pRandom, BYTE ** VarLenCertGH, DWORD * pdwLengthCertGH);
	HRESULT(STDMETHODCALLTYPE * SessionSequenceStart) (IAMCertifiedOutputProtection * This, AMCOPPSignature * pSig);
	HRESULT(STDMETHODCALLTYPE * ProtectionCommand) (IAMCertifiedOutputProtection * This, const AMCOPPCommand * cmd);
	HRESULT(STDMETHODCALLTYPE * ProtectionStatus) (IAMCertifiedOutputProtection * This, const AMCOPPStatusInput * pStatusInput, AMCOPPStatusOutput * pStatusOutput);
	END_INTERFACE
}  IAMCertifiedOutputProtectionVtbl;
interface IAMCertifiedOutputProtection
{
	CONST_VTBL struct IAMCertifiedOutputProtectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMCertifiedOutputProtection_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAMCertifiedOutputProtection_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAMCertifiedOutputProtection_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAMCertifiedOutputProtection_KeyExchange(This,pRandom,VarLenCertGH,pdwLengthCertGH)    ( (This)->lpVtbl -> KeyExchange(This,pRandom,VarLenCertGH,pdwLengthCertGH) )
#define IAMCertifiedOutputProtection_SessionSequenceStart(This,pSig)    ( (This)->lpVtbl -> SessionSequenceStart(This,pSig) )
#define IAMCertifiedOutputProtection_ProtectionCommand(This,cmd)    ( (This)->lpVtbl -> ProtectionCommand(This,cmd) )
#define IAMCertifiedOutputProtection_ProtectionStatus(This,pStatusInput,pStatusOutput)    ( (This)->lpVtbl -> ProtectionStatus(This,pStatusInput,pStatusOutput) )
#endif
#endif
#ifndef __IAMAsyncReaderTimestampScaling_INTERFACE_DEFINED__
#define __IAMAsyncReaderTimestampScaling_INTERFACE_DEFINED__
extern const IID IID_IAMAsyncReaderTimestampScaling;
typedef struct IAMAsyncReaderTimestampScalingVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAMAsyncReaderTimestampScaling * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAMAsyncReaderTimestampScaling * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAMAsyncReaderTimestampScaling * This);
	HRESULT(STDMETHODCALLTYPE * GetTimestampMode) (IAMAsyncReaderTimestampScaling * This, BOOL * pfRaw);
	HRESULT(STDMETHODCALLTYPE * SetTimestampMode) (IAMAsyncReaderTimestampScaling * This, BOOL fRaw);
	END_INTERFACE
}  IAMAsyncReaderTimestampScalingVtbl;
interface IAMAsyncReaderTimestampScaling
{
	CONST_VTBL struct IAMAsyncReaderTimestampScalingVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMAsyncReaderTimestampScaling_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAMAsyncReaderTimestampScaling_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAMAsyncReaderTimestampScaling_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAMAsyncReaderTimestampScaling_GetTimestampMode(This,pfRaw)    ( (This)->lpVtbl -> GetTimestampMode(This,pfRaw) )
#define IAMAsyncReaderTimestampScaling_SetTimestampMode(This,fRaw)    ( (This)->lpVtbl -> SetTimestampMode(This,fRaw) )
#endif
#endif
#ifndef __IAMPluginControl_INTERFACE_DEFINED__
#define __IAMPluginControl_INTERFACE_DEFINED__
extern const IID IID_IAMPluginControl;
typedef struct IAMPluginControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAMPluginControl * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAMPluginControl * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAMPluginControl * This);
	HRESULT(STDMETHODCALLTYPE * GetPreferredClsid) (IAMPluginControl * This, REFGUID subType, CLSID * clsid);
	HRESULT(STDMETHODCALLTYPE * GetPreferredClsidByIndex) (IAMPluginControl * This, DWORD index, GUID * subType, CLSID * clsid);
	HRESULT(STDMETHODCALLTYPE * SetPreferredClsid) (IAMPluginControl * This, REFGUID subType, const CLSID * clsid);
	HRESULT(STDMETHODCALLTYPE * IsDisabled) (IAMPluginControl * This, REFCLSID clsid);
	HRESULT(STDMETHODCALLTYPE * GetDisabledByIndex) (IAMPluginControl * This, DWORD index, CLSID * clsid);
	HRESULT(STDMETHODCALLTYPE * SetDisabled) (IAMPluginControl * This, REFCLSID clsid, BOOL disabled);
	HRESULT(STDMETHODCALLTYPE * IsLegacyDisabled) (IAMPluginControl * This, LPCWSTR dllName);
	END_INTERFACE
}  IAMPluginControlVtbl;
interface IAMPluginControl
{
	CONST_VTBL struct IAMPluginControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAMPluginControl_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAMPluginControl_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IAMPluginControl_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IAMPluginControl_GetPreferredClsid(This,subType,clsid)    ( (This)->lpVtbl -> GetPreferredClsid(This,subType,clsid) )
#define IAMPluginControl_GetPreferredClsidByIndex(This,index,subType,clsid)    ( (This)->lpVtbl -> GetPreferredClsidByIndex(This,index,subType,clsid) )
#define IAMPluginControl_SetPreferredClsid(This,subType,clsid)    ( (This)->lpVtbl -> SetPreferredClsid(This,subType,clsid) )
#define IAMPluginControl_IsDisabled(This,clsid)    ( (This)->lpVtbl -> IsDisabled(This,clsid) )
#define IAMPluginControl_GetDisabledByIndex(This,index,clsid)    ( (This)->lpVtbl -> GetDisabledByIndex(This,index,clsid) )
#define IAMPluginControl_SetDisabled(This,clsid,disabled)    ( (This)->lpVtbl -> SetDisabled(This,clsid,disabled) )
#define IAMPluginControl_IsLegacyDisabled(This,dllName)    ( (This)->lpVtbl -> IsLegacyDisabled(This,dllName) )
#endif
#endif
#include <ddraw.h>
typedef enum tagDVD_DOMAIN
{
	DVD_DOMAIN_FirstPlay = 1,
	DVD_DOMAIN_VideoManagerMenu = (DVD_DOMAIN_FirstPlay + 1),
	DVD_DOMAIN_VideoTitleSetMenu = (DVD_DOMAIN_VideoManagerMenu + 1),
	DVD_DOMAIN_Title = (DVD_DOMAIN_VideoTitleSetMenu + 1),
	DVD_DOMAIN_Stop = (DVD_DOMAIN_Title + 1)
} DVD_DOMAIN;
typedef enum tagDVD_MENU_ID
{
	DVD_MENU_Title = 2,
	DVD_MENU_Root = 3,
	DVD_MENU_Subpicture = 4,
	DVD_MENU_Audio = 5,
	DVD_MENU_Angle = 6,
	DVD_MENU_Chapter = 7
} DVD_MENU_ID;
typedef enum tagDVD_DISC_SIDE
{
	DVD_SIDE_A = 1,
	DVD_SIDE_B = 2
} DVD_DISC_SIDE;
typedef enum tagDVD_PREFERRED_DISPLAY_MODE
{
	DISPLAY_CONTENT_DEFAULT = 0,
	DISPLAY_16x9 = 1,
	DISPLAY_4x3_PANSCAN_PREFERRED = 2,
	DISPLAY_4x3_LETTERBOX_PREFERRED = 3
} DVD_PREFERRED_DISPLAY_MODE;
typedef WORD DVD_REGISTER;
typedef DVD_REGISTER GPRMARRAY[16];
typedef DVD_REGISTER SPRMARRAY[24];
typedef struct tagDVD_ATR
{
	ULONG ulCAT;
	BYTE pbATRI[768];
} DVD_ATR;
typedef BYTE DVD_VideoATR[2];
typedef BYTE DVD_AudioATR[8];
typedef BYTE DVD_SubpictureATR[6];
typedef enum tagDVD_FRAMERATE
{
	DVD_FPS_25 = 1,
	DVD_FPS_30NonDrop = 3
} DVD_FRAMERATE;
typedef struct tagDVD_TIMECODE
{
	ULONG Hours1:4;
	ULONG Hours10:4;
	ULONG Minutes1:4;
	ULONG Minutes10:4;
	ULONG Seconds1:4;
	ULONG Seconds10:4;
	ULONG Frames1:4;
	ULONG Frames10:2;
	ULONG FrameRateCode:2;
} DVD_TIMECODE;
typedef enum tagDVD_NavCmdType
{
	DVD_NavCmdType_Pre = 1,
	DVD_NavCmdType_Post = 2,
	DVD_NavCmdType_Cell = 3,
	DVD_NavCmdType_Button = 4
} DVD_NavCmdType;
typedef enum tagDVD_TIMECODE_FLAGS
{
	DVD_TC_FLAG_25fps = 0x1,
	DVD_TC_FLAG_30fps = 0x2,
	DVD_TC_FLAG_DropFrame = 0x4,
	DVD_TC_FLAG_Interpolated = 0x8
} DVD_TIMECODE_FLAGS;
typedef struct tagDVD_HMSF_TIMECODE
{
	BYTE bHours;
	BYTE bMinutes;
	BYTE bSeconds;
	BYTE bFrames;
} DVD_HMSF_TIMECODE;
typedef struct tagDVD_PLAYBACK_LOCATION2
{
	ULONG TitleNum;
	ULONG ChapterNum;
	DVD_HMSF_TIMECODE TimeCode;
	ULONG TimeCodeFlags;
} DVD_PLAYBACK_LOCATION2;
typedef struct tagDVD_PLAYBACK_LOCATION
{
	ULONG TitleNum;
	ULONG ChapterNum;
	ULONG TimeCode;
} DVD_PLAYBACK_LOCATION;
typedef DWORD VALID_UOP_SOMTHING_OR_OTHER;
typedef enum __MIDL___MIDL_itf_strmif_0000_0111_0001
{
	UOP_FLAG_Play_Title_Or_AtTime = 0x1,
	UOP_FLAG_Play_Chapter = 0x2,
	UOP_FLAG_Play_Title = 0x4,
	UOP_FLAG_Stop = 0x8,
	UOP_FLAG_ReturnFromSubMenu = 0x10,
	UOP_FLAG_Play_Chapter_Or_AtTime = 0x20,
	UOP_FLAG_PlayPrev_Or_Replay_Chapter = 0x40,
	UOP_FLAG_PlayNext_Chapter = 0x80,
	UOP_FLAG_Play_Forwards = 0x100,
	UOP_FLAG_Play_Backwards = 0x200,
	UOP_FLAG_ShowMenu_Title = 0x400,
	UOP_FLAG_ShowMenu_Root = 0x800,
	UOP_FLAG_ShowMenu_SubPic = 0x1000,
	UOP_FLAG_ShowMenu_Audio = 0x2000,
	UOP_FLAG_ShowMenu_Angle = 0x4000,
	UOP_FLAG_ShowMenu_Chapter = 0x8000,
	UOP_FLAG_Resume = 0x10000,
	UOP_FLAG_Select_Or_Activate_Button = 0x20000,
	UOP_FLAG_Still_Off = 0x40000,
	UOP_FLAG_Pause_On = 0x80000,
	UOP_FLAG_Select_Audio_Stream = 0x100000,
	UOP_FLAG_Select_SubPic_Stream = 0x200000,
	UOP_FLAG_Select_Angle = 0x400000,
	UOP_FLAG_Select_Karaoke_Audio_Presentation_Mode = 0x800000,
	UOP_FLAG_Select_Video_Mode_Preference = 0x1000000
} VALID_UOP_FLAG;
typedef enum __MIDL___MIDL_itf_strmif_0000_0111_0002
{
	DVD_CMD_FLAG_None = 0,
	DVD_CMD_FLAG_Flush = 0x1,
	DVD_CMD_FLAG_SendEvents = 0x2,
	DVD_CMD_FLAG_Block = 0x4,
	DVD_CMD_FLAG_StartWhenRendered = 0x8,
	DVD_CMD_FLAG_EndAfterRendered = 0x10
} DVD_CMD_FLAGS;
typedef enum __MIDL___MIDL_itf_strmif_0000_0111_0003
{
	DVD_ResetOnStop = 1,
	DVD_NotifyParentalLevelChange = 2,
	DVD_HMSF_TimeCodeEvents = 3,
	DVD_AudioDuringFFwdRew = 4,
	DVD_EnableNonblockingAPIs = 5,
	DVD_CacheSizeInMB = 6,
	DVD_EnablePortableBookmarks = 7,
	DVD_EnableExtendedCopyProtectErrors = 8,
	DVD_NotifyPositionChange = 9,
	DVD_IncreaseOutputControl = 10,
	DVD_EnableStreaming = 11,
	DVD_EnableESOutput = 12,
	DVD_EnableTitleLength = 13,
	DVD_DisableStillThrottle = 14,
	DVD_EnableLoggingEvents = 15,
	DVD_MaxReadBurstInKB = 16,
	DVD_ReadBurstPeriodInMS = 17
} DVD_OPTION_FLAG;
typedef enum __MIDL___MIDL_itf_strmif_0000_0111_0004
{
	DVD_Relative_Upper = 1,
	DVD_Relative_Lower = 2,
	DVD_Relative_Left = 3,
	DVD_Relative_Right = 4
} DVD_RELATIVE_BUTTON;
typedef enum tagDVD_PARENTAL_LEVEL
{
	DVD_PARENTAL_LEVEL_8 = 0x8000,
	DVD_PARENTAL_LEVEL_7 = 0x4000,
	DVD_PARENTAL_LEVEL_6 = 0x2000,
	DVD_PARENTAL_LEVEL_5 = 0x1000,
	DVD_PARENTAL_LEVEL_4 = 0x800,
	DVD_PARENTAL_LEVEL_3 = 0x400,
	DVD_PARENTAL_LEVEL_2 = 0x200,
	DVD_PARENTAL_LEVEL_1 = 0x100
} DVD_PARENTAL_LEVEL;
typedef enum tagDVD_AUDIO_LANG_EXT
{
	DVD_AUD_EXT_NotSpecified = 0,
	DVD_AUD_EXT_Captions = 1,
	DVD_AUD_EXT_VisuallyImpaired = 2,
	DVD_AUD_EXT_DirectorComments1 = 3,
	DVD_AUD_EXT_DirectorComments2 = 4
} DVD_AUDIO_LANG_EXT;
typedef enum tagDVD_SUBPICTURE_LANG_EXT
{
	DVD_SP_EXT_NotSpecified = 0,
	DVD_SP_EXT_Caption_Normal = 1,
	DVD_SP_EXT_Caption_Big = 2,
	DVD_SP_EXT_Caption_Children = 3,
	DVD_SP_EXT_CC_Normal = 5,
	DVD_SP_EXT_CC_Big = 6,
	DVD_SP_EXT_CC_Children = 7,
	DVD_SP_EXT_Forced = 9,
	DVD_SP_EXT_DirectorComments_Normal = 13,
	DVD_SP_EXT_DirectorComments_Big = 14,
	DVD_SP_EXT_DirectorComments_Children = 15
} DVD_SUBPICTURE_LANG_EXT;
typedef enum tagDVD_AUDIO_APPMODE
{
	DVD_AudioMode_None = 0,
	DVD_AudioMode_Karaoke = 1,
	DVD_AudioMode_Surround = 2,
	DVD_AudioMode_Other = 3
} DVD_AUDIO_APPMODE;
typedef enum tagDVD_AUDIO_FORMAT
{
	DVD_AudioFormat_AC3 = 0,
	DVD_AudioFormat_MPEG1 = 1,
	DVD_AudioFormat_MPEG1_DRC = 2,
	DVD_AudioFormat_MPEG2 = 3,
	DVD_AudioFormat_MPEG2_DRC = 4,
	DVD_AudioFormat_LPCM = 5,
	DVD_AudioFormat_DTS = 6,
	DVD_AudioFormat_SDDS = 7,
	DVD_AudioFormat_Other = 8
} DVD_AUDIO_FORMAT;
typedef enum tagDVD_KARAOKE_DOWNMIX
{
	DVD_Mix_0to0 = 0x1,
	DVD_Mix_1to0 = 0x2,
	DVD_Mix_2to0 = 0x4,
	DVD_Mix_3to0 = 0x8,
	DVD_Mix_4to0 = 0x10,
	DVD_Mix_Lto0 = 0x20,
	DVD_Mix_Rto0 = 0x40,
	DVD_Mix_0to1 = 0x100,
	DVD_Mix_1to1 = 0x200,
	DVD_Mix_2to1 = 0x400,
	DVD_Mix_3to1 = 0x800,
	DVD_Mix_4to1 = 0x1000,
	DVD_Mix_Lto1 = 0x2000,
	DVD_Mix_Rto1 = 0x4000
} DVD_KARAOKE_DOWNMIX;
typedef struct tagDVD_AudioAttributes
{
	DVD_AUDIO_APPMODE AppMode;
	BYTE AppModeData;
	DVD_AUDIO_FORMAT AudioFormat;
	LCID Language;
	DVD_AUDIO_LANG_EXT LanguageExtension;
	BOOL fHasMultichannelInfo;
	DWORD dwFrequency;
	BYTE bQuantization;
	BYTE bNumberOfChannels;
	DWORD dwReserved[2];
} DVD_AudioAttributes;
typedef struct tagDVD_MUA_MixingInfo
{
	BOOL fMixTo0;
	BOOL fMixTo1;
	BOOL fMix0InPhase;
	BOOL fMix1InPhase;
	DWORD dwSpeakerPosition;
} DVD_MUA_MixingInfo;
typedef struct tagDVD_MUA_Coeff
{
	double log2_alpha;
	double log2_beta;
} DVD_MUA_Coeff;
typedef struct tagDVD_MultichannelAudioAttributes
{
	DVD_MUA_MixingInfo Info[8];
	DVD_MUA_Coeff Coeff[8];
} DVD_MultichannelAudioAttributes;
typedef enum tagDVD_KARAOKE_CONTENTS
{
	DVD_Karaoke_GuideVocal1 = 0x1,
	DVD_Karaoke_GuideVocal2 = 0x2,
	DVD_Karaoke_GuideMelody1 = 0x4,
	DVD_Karaoke_GuideMelody2 = 0x8,
	DVD_Karaoke_GuideMelodyA = 0x10,
	DVD_Karaoke_GuideMelodyB = 0x20,
	DVD_Karaoke_SoundEffectA = 0x40,
	DVD_Karaoke_SoundEffectB = 0x80
} DVD_KARAOKE_CONTENTS;
typedef enum tagDVD_KARAOKE_ASSIGNMENT
{
	DVD_Assignment_reserved0 = 0,
	DVD_Assignment_reserved1 = 1,
	DVD_Assignment_LR = 2,
	DVD_Assignment_LRM = 3,
	DVD_Assignment_LR1 = 4,
	DVD_Assignment_LRM1 = 5,
	DVD_Assignment_LR12 = 6,
	DVD_Assignment_LRM12 = 7
} DVD_KARAOKE_ASSIGNMENT;
typedef struct tagDVD_KaraokeAttributes
{
	BYTE bVersion;
	BOOL fMasterOfCeremoniesInGuideVocal1;
	BOOL fDuet;
	DVD_KARAOKE_ASSIGNMENT ChannelAssignment;
	WORD wChannelContents[8];
} DVD_KaraokeAttributes;
typedef enum tagDVD_VIDEO_COMPRESSION
{
	DVD_VideoCompression_Other = 0,
	DVD_VideoCompression_MPEG1 = 1,
	DVD_VideoCompression_MPEG2 = 2
} DVD_VIDEO_COMPRESSION;
typedef struct tagDVD_VideoAttributes
{
	BOOL fPanscanPermitted;
	BOOL fLetterboxPermitted;
	ULONG ulAspectX;
	ULONG ulAspectY;
	ULONG ulFrameRate;
	ULONG ulFrameHeight;
	DVD_VIDEO_COMPRESSION Compression;
	BOOL fLine21Field1InGOP;
	BOOL fLine21Field2InGOP;
	ULONG ulSourceResolutionX;
	ULONG ulSourceResolutionY;
	BOOL fIsSourceLetterboxed;
	BOOL fIsFilmMode;
} DVD_VideoAttributes;
typedef enum tagDVD_SUBPICTURE_TYPE
{
	DVD_SPType_NotSpecified = 0,
	DVD_SPType_Language = 1,
	DVD_SPType_Other = 2
} DVD_SUBPICTURE_TYPE;
typedef enum tagDVD_SUBPICTURE_CODING
{
	DVD_SPCoding_RunLength = 0,
	DVD_SPCoding_Extended = 1,
	DVD_SPCoding_Other = 2
} DVD_SUBPICTURE_CODING;
typedef struct tagDVD_SubpictureAttributes
{
	DVD_SUBPICTURE_TYPE Type;
	DVD_SUBPICTURE_CODING CodingMode;
	LCID Language;
	DVD_SUBPICTURE_LANG_EXT LanguageExtension;
} DVD_SubpictureAttributes;
typedef enum tagDVD_TITLE_APPMODE
{
	DVD_AppMode_Not_Specified = 0,
	DVD_AppMode_Karaoke = 1,
	DVD_AppMode_Other = 3
} DVD_TITLE_APPMODE;
typedef struct tagDVD_TitleMainAttributes
{
	union
	{
		DVD_TITLE_APPMODE AppMode;
		DVD_HMSF_TIMECODE TitleLength;
	};
	DVD_VideoAttributes VideoAttributes;
	ULONG ulNumberOfAudioStreams;
	DVD_AudioAttributes AudioAttributes[8];
	DVD_MultichannelAudioAttributes MultichannelAudioAttributes[8];
	ULONG ulNumberOfSubpictureStreams;
	DVD_SubpictureAttributes SubpictureAttributes[32];
} DVD_TitleAttributes;
typedef struct tagDVD_MenuAttributes
{
	BOOL fCompatibleRegion[8];
	DVD_VideoAttributes VideoAttributes;
	BOOL fAudioPresent;
	DVD_AudioAttributes AudioAttributes;
	BOOL fSubpicturePresent;
	DVD_SubpictureAttributes SubpictureAttributes;
} DVD_MenuAttributes;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0111_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0111_v0_0_s_ifspec;
#ifndef __IDvdControl_INTERFACE_DEFINED__
#define __IDvdControl_INTERFACE_DEFINED__
extern const IID IID_IDvdControl;
typedef struct IDvdControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDvdControl * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDvdControl * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDvdControl * This);
	HRESULT(STDMETHODCALLTYPE * TitlePlay) (IDvdControl * This, ULONG ulTitle);
	HRESULT(STDMETHODCALLTYPE * ChapterPlay) (IDvdControl * This, ULONG ulTitle, ULONG ulChapter);
	HRESULT(STDMETHODCALLTYPE * TimePlay) (IDvdControl * This, ULONG ulTitle, ULONG bcdTime);
	HRESULT(STDMETHODCALLTYPE * StopForResume) (IDvdControl * This);
	HRESULT(STDMETHODCALLTYPE * GoUp) (IDvdControl * This);
	HRESULT(STDMETHODCALLTYPE * TimeSearch) (IDvdControl * This, ULONG bcdTime);
	HRESULT(STDMETHODCALLTYPE * ChapterSearch) (IDvdControl * This, ULONG ulChapter);
	HRESULT(STDMETHODCALLTYPE * PrevPGSearch) (IDvdControl * This);
	HRESULT(STDMETHODCALLTYPE * TopPGSearch) (IDvdControl * This);
	HRESULT(STDMETHODCALLTYPE * NextPGSearch) (IDvdControl * This);
	HRESULT(STDMETHODCALLTYPE * ForwardScan) (IDvdControl * This, double dwSpeed);
	HRESULT(STDMETHODCALLTYPE * BackwardScan) (IDvdControl * This, double dwSpeed);
	HRESULT(STDMETHODCALLTYPE * MenuCall) (IDvdControl * This, DVD_MENU_ID MenuID);
	HRESULT(STDMETHODCALLTYPE * Resume) (IDvdControl * This);
	HRESULT(STDMETHODCALLTYPE * UpperButtonSelect) (IDvdControl * This);
	HRESULT(STDMETHODCALLTYPE * LowerButtonSelect) (IDvdControl * This);
	HRESULT(STDMETHODCALLTYPE * LeftButtonSelect) (IDvdControl * This);
	HRESULT(STDMETHODCALLTYPE * RightButtonSelect) (IDvdControl * This);
	HRESULT(STDMETHODCALLTYPE * ButtonActivate) (IDvdControl * This);
	HRESULT(STDMETHODCALLTYPE * ButtonSelectAndActivate) (IDvdControl * This, ULONG ulButton);
	HRESULT(STDMETHODCALLTYPE * StillOff) (IDvdControl * This);
	HRESULT(STDMETHODCALLTYPE * PauseOn) (IDvdControl * This);
	HRESULT(STDMETHODCALLTYPE * PauseOff) (IDvdControl * This);
	HRESULT(STDMETHODCALLTYPE * MenuLanguageSelect) (IDvdControl * This, LCID Language);
	HRESULT(STDMETHODCALLTYPE * AudioStreamChange) (IDvdControl * This, ULONG ulAudio);
	HRESULT(STDMETHODCALLTYPE * SubpictureStreamChange) (IDvdControl * This, ULONG ulSubPicture, BOOL bDisplay);
	HRESULT(STDMETHODCALLTYPE * AngleChange) (IDvdControl * This, ULONG ulAngle);
	HRESULT(STDMETHODCALLTYPE * ParentalLevelSelect) (IDvdControl * This, ULONG ulParentalLevel);
	HRESULT(STDMETHODCALLTYPE * ParentalCountrySelect) (IDvdControl * This, WORD wCountry);
	HRESULT(STDMETHODCALLTYPE * KaraokeAudioPresentationModeChange) (IDvdControl * This, ULONG ulMode);
	HRESULT(STDMETHODCALLTYPE * VideoModePreferrence) (IDvdControl * This, ULONG ulPreferredDisplayMode);
	HRESULT(STDMETHODCALLTYPE * SetRoot) (IDvdControl * This, LPCWSTR pszPath);
	HRESULT(STDMETHODCALLTYPE * MouseActivate) (IDvdControl * This, POINT point);
	HRESULT(STDMETHODCALLTYPE * MouseSelect) (IDvdControl * This, POINT point);
	HRESULT(STDMETHODCALLTYPE * ChapterPlayAutoStop) (IDvdControl * This, ULONG ulTitle, ULONG ulChapter, ULONG ulChaptersToPlay);
	END_INTERFACE
}  IDvdControlVtbl;
interface IDvdControl
{
	CONST_VTBL struct IDvdControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDvdControl_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDvdControl_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDvdControl_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDvdControl_TitlePlay(This,ulTitle)    ( (This)->lpVtbl -> TitlePlay(This,ulTitle) )
#define IDvdControl_ChapterPlay(This,ulTitle,ulChapter)    ( (This)->lpVtbl -> ChapterPlay(This,ulTitle,ulChapter) )
#define IDvdControl_TimePlay(This,ulTitle,bcdTime)    ( (This)->lpVtbl -> TimePlay(This,ulTitle,bcdTime) )
#define IDvdControl_StopForResume(This)    ( (This)->lpVtbl -> StopForResume(This) )
#define IDvdControl_GoUp(This)    ( (This)->lpVtbl -> GoUp(This) )
#define IDvdControl_TimeSearch(This,bcdTime)    ( (This)->lpVtbl -> TimeSearch(This,bcdTime) )
#define IDvdControl_ChapterSearch(This,ulChapter)    ( (This)->lpVtbl -> ChapterSearch(This,ulChapter) )
#define IDvdControl_PrevPGSearch(This)    ( (This)->lpVtbl -> PrevPGSearch(This) )
#define IDvdControl_TopPGSearch(This)    ( (This)->lpVtbl -> TopPGSearch(This) )
#define IDvdControl_NextPGSearch(This)    ( (This)->lpVtbl -> NextPGSearch(This) )
#define IDvdControl_ForwardScan(This,dwSpeed)    ( (This)->lpVtbl -> ForwardScan(This,dwSpeed) )
#define IDvdControl_BackwardScan(This,dwSpeed)    ( (This)->lpVtbl -> BackwardScan(This,dwSpeed) )
#define IDvdControl_MenuCall(This,MenuID)    ( (This)->lpVtbl -> MenuCall(This,MenuID) )
#define IDvdControl_Resume(This)    ( (This)->lpVtbl -> Resume(This) )
#define IDvdControl_UpperButtonSelect(This)    ( (This)->lpVtbl -> UpperButtonSelect(This) )
#define IDvdControl_LowerButtonSelect(This)    ( (This)->lpVtbl -> LowerButtonSelect(This) )
#define IDvdControl_LeftButtonSelect(This)    ( (This)->lpVtbl -> LeftButtonSelect(This) )
#define IDvdControl_RightButtonSelect(This)    ( (This)->lpVtbl -> RightButtonSelect(This) )
#define IDvdControl_ButtonActivate(This)    ( (This)->lpVtbl -> ButtonActivate(This) )
#define IDvdControl_ButtonSelectAndActivate(This,ulButton)    ( (This)->lpVtbl -> ButtonSelectAndActivate(This,ulButton) )
#define IDvdControl_StillOff(This)    ( (This)->lpVtbl -> StillOff(This) )
#define IDvdControl_PauseOn(This)    ( (This)->lpVtbl -> PauseOn(This) )
#define IDvdControl_PauseOff(This)    ( (This)->lpVtbl -> PauseOff(This) )
#define IDvdControl_MenuLanguageSelect(This,Language)    ( (This)->lpVtbl -> MenuLanguageSelect(This,Language) )
#define IDvdControl_AudioStreamChange(This,ulAudio)    ( (This)->lpVtbl -> AudioStreamChange(This,ulAudio) )
#define IDvdControl_SubpictureStreamChange(This,ulSubPicture,bDisplay)    ( (This)->lpVtbl -> SubpictureStreamChange(This,ulSubPicture,bDisplay) )
#define IDvdControl_AngleChange(This,ulAngle)    ( (This)->lpVtbl -> AngleChange(This,ulAngle) )
#define IDvdControl_ParentalLevelSelect(This,ulParentalLevel)    ( (This)->lpVtbl -> ParentalLevelSelect(This,ulParentalLevel) )
#define IDvdControl_ParentalCountrySelect(This,wCountry)    ( (This)->lpVtbl -> ParentalCountrySelect(This,wCountry) )
#define IDvdControl_KaraokeAudioPresentationModeChange(This,ulMode)    ( (This)->lpVtbl -> KaraokeAudioPresentationModeChange(This,ulMode) )
#define IDvdControl_VideoModePreferrence(This,ulPreferredDisplayMode)    ( (This)->lpVtbl -> VideoModePreferrence(This,ulPreferredDisplayMode) )
#define IDvdControl_SetRoot(This,pszPath)    ( (This)->lpVtbl -> SetRoot(This,pszPath) )
#define IDvdControl_MouseActivate(This,point)    ( (This)->lpVtbl -> MouseActivate(This,point) )
#define IDvdControl_MouseSelect(This,point)    ( (This)->lpVtbl -> MouseSelect(This,point) )
#define IDvdControl_ChapterPlayAutoStop(This,ulTitle,ulChapter,ulChaptersToPlay)    ( (This)->lpVtbl -> ChapterPlayAutoStop(This,ulTitle,ulChapter,ulChaptersToPlay) )
#endif
#endif
#ifndef __IDvdInfo_INTERFACE_DEFINED__
#define __IDvdInfo_INTERFACE_DEFINED__
extern const IID IID_IDvdInfo;
typedef struct IDvdInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDvdInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDvdInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDvdInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetCurrentDomain) (IDvdInfo * This, DVD_DOMAIN * pDomain);
	HRESULT(STDMETHODCALLTYPE * GetCurrentLocation) (IDvdInfo * This, DVD_PLAYBACK_LOCATION * pLocation);
	HRESULT(STDMETHODCALLTYPE * GetTotalTitleTime) (IDvdInfo * This, ULONG * pulTotalTime);
	HRESULT(STDMETHODCALLTYPE * GetCurrentButton) (IDvdInfo * This, ULONG * pulButtonsAvailable, ULONG * pulCurrentButton);
	HRESULT(STDMETHODCALLTYPE * GetCurrentAngle) (IDvdInfo * This, ULONG * pulAnglesAvailable, ULONG * pulCurrentAngle);
	HRESULT(STDMETHODCALLTYPE * GetCurrentAudio) (IDvdInfo * This, ULONG * pulStreamsAvailable, ULONG * pulCurrentStream);
	HRESULT(STDMETHODCALLTYPE * GetCurrentSubpicture) (IDvdInfo * This, ULONG * pulStreamsAvailable, ULONG * pulCurrentStream, BOOL * pIsDisabled);
	HRESULT(STDMETHODCALLTYPE * GetCurrentUOPS) (IDvdInfo * This, VALID_UOP_SOMTHING_OR_OTHER * pUOP);
	HRESULT(STDMETHODCALLTYPE * GetAllSPRMs) (IDvdInfo * This, SPRMARRAY * pRegisterArray);
	HRESULT(STDMETHODCALLTYPE * GetAllGPRMs) (IDvdInfo * This, GPRMARRAY * pRegisterArray);
	HRESULT(STDMETHODCALLTYPE * GetAudioLanguage) (IDvdInfo * This, ULONG ulStream, LCID * pLanguage);
	HRESULT(STDMETHODCALLTYPE * GetSubpictureLanguage) (IDvdInfo * This, ULONG ulStream, LCID * pLanguage);
	HRESULT(STDMETHODCALLTYPE * GetTitleAttributes) (IDvdInfo * This, ULONG ulTitle, DVD_ATR * pATR);
	HRESULT(STDMETHODCALLTYPE * GetVMGAttributes) (IDvdInfo * This, DVD_ATR * pATR);
	HRESULT(STDMETHODCALLTYPE * GetCurrentVideoAttributes) (IDvdInfo * This, DVD_VideoATR * pATR);
	HRESULT(STDMETHODCALLTYPE * GetCurrentAudioAttributes) (IDvdInfo * This, DVD_AudioATR * pATR);
	HRESULT(STDMETHODCALLTYPE * GetCurrentSubpictureAttributes) (IDvdInfo * This, DVD_SubpictureATR * pATR);
	HRESULT(STDMETHODCALLTYPE * GetCurrentVolumeInfo) (IDvdInfo * This, ULONG * pulNumOfVol, ULONG * pulThisVolNum, DVD_DISC_SIDE * pSide, ULONG * pulNumOfTitles);
	HRESULT(STDMETHODCALLTYPE * GetDVDTextInfo) (IDvdInfo * This, BYTE * pTextManager, ULONG ulBufSize, ULONG * pulActualSize);
	HRESULT(STDMETHODCALLTYPE * GetPlayerParentalLevel) (IDvdInfo * This, ULONG * pulParentalLevel, ULONG * pulCountryCode);
	HRESULT(STDMETHODCALLTYPE * GetNumberOfChapters) (IDvdInfo * This, ULONG ulTitle, ULONG * pulNumberOfChapters);
	HRESULT(STDMETHODCALLTYPE * GetTitleParentalLevels) (IDvdInfo * This, ULONG ulTitle, ULONG * pulParentalLevels);
	HRESULT(STDMETHODCALLTYPE * GetRoot) (IDvdInfo * This, LPSTR pRoot, ULONG ulBufSize, ULONG * pulActualSize);
	END_INTERFACE
}  IDvdInfoVtbl;
interface IDvdInfo
{
	CONST_VTBL struct IDvdInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDvdInfo_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDvdInfo_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDvdInfo_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDvdInfo_GetCurrentDomain(This,pDomain)    ( (This)->lpVtbl -> GetCurrentDomain(This,pDomain) )
#define IDvdInfo_GetCurrentLocation(This,pLocation)    ( (This)->lpVtbl -> GetCurrentLocation(This,pLocation) )
#define IDvdInfo_GetTotalTitleTime(This,pulTotalTime)    ( (This)->lpVtbl -> GetTotalTitleTime(This,pulTotalTime) )
#define IDvdInfo_GetCurrentButton(This,pulButtonsAvailable,pulCurrentButton)    ( (This)->lpVtbl -> GetCurrentButton(This,pulButtonsAvailable,pulCurrentButton) )
#define IDvdInfo_GetCurrentAngle(This,pulAnglesAvailable,pulCurrentAngle)    ( (This)->lpVtbl -> GetCurrentAngle(This,pulAnglesAvailable,pulCurrentAngle) )
#define IDvdInfo_GetCurrentAudio(This,pulStreamsAvailable,pulCurrentStream)    ( (This)->lpVtbl -> GetCurrentAudio(This,pulStreamsAvailable,pulCurrentStream) )
#define IDvdInfo_GetCurrentSubpicture(This,pulStreamsAvailable,pulCurrentStream,pIsDisabled)    ( (This)->lpVtbl -> GetCurrentSubpicture(This,pulStreamsAvailable,pulCurrentStream,pIsDisabled) )
#define IDvdInfo_GetCurrentUOPS(This,pUOP)    ( (This)->lpVtbl -> GetCurrentUOPS(This,pUOP) )
#define IDvdInfo_GetAllSPRMs(This,pRegisterArray)    ( (This)->lpVtbl -> GetAllSPRMs(This,pRegisterArray) )
#define IDvdInfo_GetAllGPRMs(This,pRegisterArray)    ( (This)->lpVtbl -> GetAllGPRMs(This,pRegisterArray) )
#define IDvdInfo_GetAudioLanguage(This,ulStream,pLanguage)    ( (This)->lpVtbl -> GetAudioLanguage(This,ulStream,pLanguage) )
#define IDvdInfo_GetSubpictureLanguage(This,ulStream,pLanguage)    ( (This)->lpVtbl -> GetSubpictureLanguage(This,ulStream,pLanguage) )
#define IDvdInfo_GetTitleAttributes(This,ulTitle,pATR)    ( (This)->lpVtbl -> GetTitleAttributes(This,ulTitle,pATR) )
#define IDvdInfo_GetVMGAttributes(This,pATR)    ( (This)->lpVtbl -> GetVMGAttributes(This,pATR) )
#define IDvdInfo_GetCurrentVideoAttributes(This,pATR)    ( (This)->lpVtbl -> GetCurrentVideoAttributes(This,pATR) )
#define IDvdInfo_GetCurrentAudioAttributes(This,pATR)    ( (This)->lpVtbl -> GetCurrentAudioAttributes(This,pATR) )
#define IDvdInfo_GetCurrentSubpictureAttributes(This,pATR)    ( (This)->lpVtbl -> GetCurrentSubpictureAttributes(This,pATR) )
#define IDvdInfo_GetCurrentVolumeInfo(This,pulNumOfVol,pulThisVolNum,pSide,pulNumOfTitles)    ( (This)->lpVtbl -> GetCurrentVolumeInfo(This,pulNumOfVol,pulThisVolNum,pSide,pulNumOfTitles) )
#define IDvdInfo_GetDVDTextInfo(This,pTextManager,ulBufSize,pulActualSize)    ( (This)->lpVtbl -> GetDVDTextInfo(This,pTextManager,ulBufSize,pulActualSize) )
#define IDvdInfo_GetPlayerParentalLevel(This,pulParentalLevel,pulCountryCode)    ( (This)->lpVtbl -> GetPlayerParentalLevel(This,pulParentalLevel,pulCountryCode) )
#define IDvdInfo_GetNumberOfChapters(This,ulTitle,pulNumberOfChapters)    ( (This)->lpVtbl -> GetNumberOfChapters(This,ulTitle,pulNumberOfChapters) )
#define IDvdInfo_GetTitleParentalLevels(This,ulTitle,pulParentalLevels)    ( (This)->lpVtbl -> GetTitleParentalLevels(This,ulTitle,pulParentalLevels) )
#define IDvdInfo_GetRoot(This,pRoot,ulBufSize,pulActualSize)    ( (This)->lpVtbl -> GetRoot(This,pRoot,ulBufSize,pulActualSize) )
#endif
#endif
#ifndef __IDvdCmd_INTERFACE_DEFINED__
#define __IDvdCmd_INTERFACE_DEFINED__
extern const IID IID_IDvdCmd;
typedef struct IDvdCmdVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDvdCmd * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDvdCmd * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDvdCmd * This);
	HRESULT(STDMETHODCALLTYPE * WaitForStart) (IDvdCmd * This);
	HRESULT(STDMETHODCALLTYPE * WaitForEnd) (IDvdCmd * This);
	END_INTERFACE
}  IDvdCmdVtbl;
interface IDvdCmd
{
	CONST_VTBL struct IDvdCmdVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDvdCmd_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDvdCmd_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDvdCmd_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDvdCmd_WaitForStart(This)    ( (This)->lpVtbl -> WaitForStart(This) )
#define IDvdCmd_WaitForEnd(This)    ( (This)->lpVtbl -> WaitForEnd(This) )
#endif
#endif
#ifndef __IDvdState_INTERFACE_DEFINED__
#define __IDvdState_INTERFACE_DEFINED__
extern const IID IID_IDvdState;
typedef struct IDvdStateVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDvdState * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDvdState * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDvdState * This);
	HRESULT(STDMETHODCALLTYPE * GetDiscID) (IDvdState * This, ULONGLONG * pullUniqueID);
	HRESULT(STDMETHODCALLTYPE * GetParentalLevel) (IDvdState * This, ULONG * pulParentalLevel);
	END_INTERFACE
}  IDvdStateVtbl;
interface IDvdState
{
	CONST_VTBL struct IDvdStateVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDvdState_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDvdState_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDvdState_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDvdState_GetDiscID(This,pullUniqueID)    ( (This)->lpVtbl -> GetDiscID(This,pullUniqueID) )
#define IDvdState_GetParentalLevel(This,pulParentalLevel)    ( (This)->lpVtbl -> GetParentalLevel(This,pulParentalLevel) )
#endif
#endif
#ifndef __IDvdControl2_INTERFACE_DEFINED__
#define __IDvdControl2_INTERFACE_DEFINED__
extern const IID IID_IDvdControl2;
typedef struct IDvdControl2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDvdControl2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDvdControl2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDvdControl2 * This);
	HRESULT(STDMETHODCALLTYPE * PlayTitle) (IDvdControl2 * This, ULONG ulTitle, DWORD dwFlags, IDvdCmd ** ppCmd);
	HRESULT(STDMETHODCALLTYPE * PlayChapterInTitle) (IDvdControl2 * This, ULONG ulTitle, ULONG ulChapter, DWORD dwFlags, IDvdCmd ** ppCmd);
	HRESULT(STDMETHODCALLTYPE * PlayAtTimeInTitle) (IDvdControl2 * This, ULONG ulTitle, DVD_HMSF_TIMECODE * pStartTime, DWORD dwFlags, IDvdCmd ** ppCmd);
	HRESULT(STDMETHODCALLTYPE * Stop) (IDvdControl2 * This);
	HRESULT(STDMETHODCALLTYPE * ReturnFromSubmenu) (IDvdControl2 * This, DWORD dwFlags, IDvdCmd ** ppCmd);
	HRESULT(STDMETHODCALLTYPE * PlayAtTime) (IDvdControl2 * This, DVD_HMSF_TIMECODE * pTime, DWORD dwFlags, IDvdCmd ** ppCmd);
	HRESULT(STDMETHODCALLTYPE * PlayChapter) (IDvdControl2 * This, ULONG ulChapter, DWORD dwFlags, IDvdCmd ** ppCmd);
	HRESULT(STDMETHODCALLTYPE * PlayPrevChapter) (IDvdControl2 * This, DWORD dwFlags, IDvdCmd ** ppCmd);
	HRESULT(STDMETHODCALLTYPE * ReplayChapter) (IDvdControl2 * This, DWORD dwFlags, IDvdCmd ** ppCmd);
	HRESULT(STDMETHODCALLTYPE * PlayNextChapter) (IDvdControl2 * This, DWORD dwFlags, IDvdCmd ** ppCmd);
	HRESULT(STDMETHODCALLTYPE * PlayForwards) (IDvdControl2 * This, double dSpeed, DWORD dwFlags, IDvdCmd ** ppCmd);
	HRESULT(STDMETHODCALLTYPE * PlayBackwards) (IDvdControl2 * This, double dSpeed, DWORD dwFlags, IDvdCmd ** ppCmd);
	HRESULT(STDMETHODCALLTYPE * ShowMenu) (IDvdControl2 * This, DVD_MENU_ID MenuID, DWORD dwFlags, IDvdCmd ** ppCmd);
	HRESULT(STDMETHODCALLTYPE * Resume) (IDvdControl2 * This, DWORD dwFlags, IDvdCmd ** ppCmd);
	HRESULT(STDMETHODCALLTYPE * SelectRelativeButton) (IDvdControl2 * This, DVD_RELATIVE_BUTTON buttonDir);
	HRESULT(STDMETHODCALLTYPE * ActivateButton) (IDvdControl2 * This);
	HRESULT(STDMETHODCALLTYPE * SelectButton) (IDvdControl2 * This, ULONG ulButton);
	HRESULT(STDMETHODCALLTYPE * SelectAndActivateButton) (IDvdControl2 * This, ULONG ulButton);
	HRESULT(STDMETHODCALLTYPE * StillOff) (IDvdControl2 * This);
	HRESULT(STDMETHODCALLTYPE * Pause) (IDvdControl2 * This, BOOL bState);
	HRESULT(STDMETHODCALLTYPE * SelectAudioStream) (IDvdControl2 * This, ULONG ulAudio, DWORD dwFlags, IDvdCmd ** ppCmd);
	HRESULT(STDMETHODCALLTYPE * SelectSubpictureStream) (IDvdControl2 * This, ULONG ulSubPicture, DWORD dwFlags, IDvdCmd ** ppCmd);
	HRESULT(STDMETHODCALLTYPE * SetSubpictureState) (IDvdControl2 * This, BOOL bState, DWORD dwFlags, IDvdCmd ** ppCmd);
	HRESULT(STDMETHODCALLTYPE * SelectAngle) (IDvdControl2 * This, ULONG ulAngle, DWORD dwFlags, IDvdCmd ** ppCmd);
	HRESULT(STDMETHODCALLTYPE * SelectParentalLevel) (IDvdControl2 * This, ULONG ulParentalLevel);
	HRESULT(STDMETHODCALLTYPE * SelectParentalCountry) (IDvdControl2 * This, BYTE bCountry[2]);
	HRESULT(STDMETHODCALLTYPE * SelectKaraokeAudioPresentationMode) (IDvdControl2 * This, ULONG ulMode);
	HRESULT(STDMETHODCALLTYPE * SelectVideoModePreference) (IDvdControl2 * This, ULONG ulPreferredDisplayMode);
	HRESULT(STDMETHODCALLTYPE * SetDVDDirectory) (IDvdControl2 * This, LPCWSTR pszwPath);
	HRESULT(STDMETHODCALLTYPE * ActivateAtPosition) (IDvdControl2 * This, POINT point);
	HRESULT(STDMETHODCALLTYPE * SelectAtPosition) (IDvdControl2 * This, POINT point);
	HRESULT(STDMETHODCALLTYPE * PlayChaptersAutoStop) (IDvdControl2 * This, ULONG ulTitle, ULONG ulChapter, ULONG ulChaptersToPlay, DWORD dwFlags, IDvdCmd ** ppCmd);
	HRESULT(STDMETHODCALLTYPE * AcceptParentalLevelChange) (IDvdControl2 * This, BOOL bAccept);
	HRESULT(STDMETHODCALLTYPE * SetOption) (IDvdControl2 * This, DVD_OPTION_FLAG flag, BOOL fState);
	HRESULT(STDMETHODCALLTYPE * SetState) (IDvdControl2 * This, IDvdState * pState, DWORD dwFlags, IDvdCmd ** ppCmd);
	HRESULT(STDMETHODCALLTYPE * PlayPeriodInTitleAutoStop) (IDvdControl2 * This, ULONG ulTitle, DVD_HMSF_TIMECODE * pStartTime, DVD_HMSF_TIMECODE * pEndTime, DWORD dwFlags, IDvdCmd ** ppCmd);
	HRESULT(STDMETHODCALLTYPE * SetGPRM) (IDvdControl2 * This, ULONG ulIndex, WORD wValue, DWORD dwFlags, IDvdCmd ** ppCmd);
	HRESULT(STDMETHODCALLTYPE * SelectDefaultMenuLanguage) (IDvdControl2 * This, LCID Language);
	HRESULT(STDMETHODCALLTYPE * SelectDefaultAudioLanguage) (IDvdControl2 * This, LCID Language, DVD_AUDIO_LANG_EXT audioExtension);
	HRESULT(STDMETHODCALLTYPE * SelectDefaultSubpictureLanguage) (IDvdControl2 * This, LCID Language, DVD_SUBPICTURE_LANG_EXT subpictureExtension);
	END_INTERFACE
}  IDvdControl2Vtbl;
interface IDvdControl2
{
	CONST_VTBL struct IDvdControl2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDvdControl2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDvdControl2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDvdControl2_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDvdControl2_PlayTitle(This,ulTitle,dwFlags,ppCmd)    ( (This)->lpVtbl -> PlayTitle(This,ulTitle,dwFlags,ppCmd) )
#define IDvdControl2_PlayChapterInTitle(This,ulTitle,ulChapter,dwFlags,ppCmd)    ( (This)->lpVtbl -> PlayChapterInTitle(This,ulTitle,ulChapter,dwFlags,ppCmd) )
#define IDvdControl2_PlayAtTimeInTitle(This,ulTitle,pStartTime,dwFlags,ppCmd)    ( (This)->lpVtbl -> PlayAtTimeInTitle(This,ulTitle,pStartTime,dwFlags,ppCmd) )
#define IDvdControl2_Stop(This)    ( (This)->lpVtbl -> Stop(This) )
#define IDvdControl2_ReturnFromSubmenu(This,dwFlags,ppCmd)    ( (This)->lpVtbl -> ReturnFromSubmenu(This,dwFlags,ppCmd) )
#define IDvdControl2_PlayAtTime(This,pTime,dwFlags,ppCmd)    ( (This)->lpVtbl -> PlayAtTime(This,pTime,dwFlags,ppCmd) )
#define IDvdControl2_PlayChapter(This,ulChapter,dwFlags,ppCmd)    ( (This)->lpVtbl -> PlayChapter(This,ulChapter,dwFlags,ppCmd) )
#define IDvdControl2_PlayPrevChapter(This,dwFlags,ppCmd)    ( (This)->lpVtbl -> PlayPrevChapter(This,dwFlags,ppCmd) )
#define IDvdControl2_ReplayChapter(This,dwFlags,ppCmd)    ( (This)->lpVtbl -> ReplayChapter(This,dwFlags,ppCmd) )
#define IDvdControl2_PlayNextChapter(This,dwFlags,ppCmd)    ( (This)->lpVtbl -> PlayNextChapter(This,dwFlags,ppCmd) )
#define IDvdControl2_PlayForwards(This,dSpeed,dwFlags,ppCmd)    ( (This)->lpVtbl -> PlayForwards(This,dSpeed,dwFlags,ppCmd) )
#define IDvdControl2_PlayBackwards(This,dSpeed,dwFlags,ppCmd)    ( (This)->lpVtbl -> PlayBackwards(This,dSpeed,dwFlags,ppCmd) )
#define IDvdControl2_ShowMenu(This,MenuID,dwFlags,ppCmd)    ( (This)->lpVtbl -> ShowMenu(This,MenuID,dwFlags,ppCmd) )
#define IDvdControl2_Resume(This,dwFlags,ppCmd)    ( (This)->lpVtbl -> Resume(This,dwFlags,ppCmd) )
#define IDvdControl2_SelectRelativeButton(This,buttonDir)    ( (This)->lpVtbl -> SelectRelativeButton(This,buttonDir) )
#define IDvdControl2_ActivateButton(This)    ( (This)->lpVtbl -> ActivateButton(This) )
#define IDvdControl2_SelectButton(This,ulButton)    ( (This)->lpVtbl -> SelectButton(This,ulButton) )
#define IDvdControl2_SelectAndActivateButton(This,ulButton)    ( (This)->lpVtbl -> SelectAndActivateButton(This,ulButton) )
#define IDvdControl2_StillOff(This)    ( (This)->lpVtbl -> StillOff(This) )
#define IDvdControl2_Pause(This,bState)    ( (This)->lpVtbl -> Pause(This,bState) )
#define IDvdControl2_SelectAudioStream(This,ulAudio,dwFlags,ppCmd)    ( (This)->lpVtbl -> SelectAudioStream(This,ulAudio,dwFlags,ppCmd) )
#define IDvdControl2_SelectSubpictureStream(This,ulSubPicture,dwFlags,ppCmd)    ( (This)->lpVtbl -> SelectSubpictureStream(This,ulSubPicture,dwFlags,ppCmd) )
#define IDvdControl2_SetSubpictureState(This,bState,dwFlags,ppCmd)    ( (This)->lpVtbl -> SetSubpictureState(This,bState,dwFlags,ppCmd) )
#define IDvdControl2_SelectAngle(This,ulAngle,dwFlags,ppCmd)    ( (This)->lpVtbl -> SelectAngle(This,ulAngle,dwFlags,ppCmd) )
#define IDvdControl2_SelectParentalLevel(This,ulParentalLevel)    ( (This)->lpVtbl -> SelectParentalLevel(This,ulParentalLevel) )
#define IDvdControl2_SelectParentalCountry(This,bCountry)    ( (This)->lpVtbl -> SelectParentalCountry(This,bCountry) )
#define IDvdControl2_SelectKaraokeAudioPresentationMode(This,ulMode)    ( (This)->lpVtbl -> SelectKaraokeAudioPresentationMode(This,ulMode) )
#define IDvdControl2_SelectVideoModePreference(This,ulPreferredDisplayMode)    ( (This)->lpVtbl -> SelectVideoModePreference(This,ulPreferredDisplayMode) )
#define IDvdControl2_SetDVDDirectory(This,pszwPath)    ( (This)->lpVtbl -> SetDVDDirectory(This,pszwPath) )
#define IDvdControl2_ActivateAtPosition(This,point)    ( (This)->lpVtbl -> ActivateAtPosition(This,point) )
#define IDvdControl2_SelectAtPosition(This,point)    ( (This)->lpVtbl -> SelectAtPosition(This,point) )
#define IDvdControl2_PlayChaptersAutoStop(This,ulTitle,ulChapter,ulChaptersToPlay,dwFlags,ppCmd)    ( (This)->lpVtbl -> PlayChaptersAutoStop(This,ulTitle,ulChapter,ulChaptersToPlay,dwFlags,ppCmd) )
#define IDvdControl2_AcceptParentalLevelChange(This,bAccept)    ( (This)->lpVtbl -> AcceptParentalLevelChange(This,bAccept) )
#define IDvdControl2_SetOption(This,flag,fState)    ( (This)->lpVtbl -> SetOption(This,flag,fState) )
#define IDvdControl2_SetState(This,pState,dwFlags,ppCmd)    ( (This)->lpVtbl -> SetState(This,pState,dwFlags,ppCmd) )
#define IDvdControl2_PlayPeriodInTitleAutoStop(This,ulTitle,pStartTime,pEndTime,dwFlags,ppCmd)    ( (This)->lpVtbl -> PlayPeriodInTitleAutoStop(This,ulTitle,pStartTime,pEndTime,dwFlags,ppCmd) )
#define IDvdControl2_SetGPRM(This,ulIndex,wValue,dwFlags,ppCmd)    ( (This)->lpVtbl -> SetGPRM(This,ulIndex,wValue,dwFlags,ppCmd) )
#define IDvdControl2_SelectDefaultMenuLanguage(This,Language)    ( (This)->lpVtbl -> SelectDefaultMenuLanguage(This,Language) )
#define IDvdControl2_SelectDefaultAudioLanguage(This,Language,audioExtension)    ( (This)->lpVtbl -> SelectDefaultAudioLanguage(This,Language,audioExtension) )
#define IDvdControl2_SelectDefaultSubpictureLanguage(This,Language,subpictureExtension)    ( (This)->lpVtbl -> SelectDefaultSubpictureLanguage(This,Language,subpictureExtension) )
#endif
#endif
enum DVD_TextStringType
{
	DVD_Struct_Volume = 0x1,
	DVD_Struct_Title = 0x2,
	DVD_Struct_ParentalID = 0x3,
	DVD_Struct_PartOfTitle = 0x4,
	DVD_Struct_Cell = 0x5,
	DVD_Stream_Audio = 0x10,
	DVD_Stream_Subpicture = 0x11,
	DVD_Stream_Angle = 0x12,
	DVD_Channel_Audio = 0x20,
	DVD_General_Name = 0x30,
	DVD_General_Comments = 0x31,
	DVD_Title_Series = 0x38,
	DVD_Title_Movie = 0x39,
	DVD_Title_Video = 0x3a,
	DVD_Title_Album = 0x3b,
	DVD_Title_Song = 0x3c,
	DVD_Title_Other = 0x3f,
	DVD_Title_Sub_Series = 0x40,
	DVD_Title_Sub_Movie = 0x41,
	DVD_Title_Sub_Video = 0x42,
	DVD_Title_Sub_Album = 0x43,
	DVD_Title_Sub_Song = 0x44,
	DVD_Title_Sub_Other = 0x47,
	DVD_Title_Orig_Series = 0x48,
	DVD_Title_Orig_Movie = 0x49,
	DVD_Title_Orig_Video = 0x4a,
	DVD_Title_Orig_Album = 0x4b,
	DVD_Title_Orig_Song = 0x4c,
	DVD_Title_Orig_Other = 0x4f,
	DVD_Other_Scene = 0x50,
	DVD_Other_Cut = 0x51,
	DVD_Other_Take = 0x52
};
enum DVD_TextCharSet
{
	DVD_CharSet_Unicode = 0,
	DVD_CharSet_ISO646 = 1,
	DVD_CharSet_JIS_Roman_Kanji = 2,
	DVD_CharSet_ISO8859_1 = 3,
	DVD_CharSet_ShiftJIS_Kanji_Roman_Katakana = 4
};
#define DVD_TITLE_MENU				0x000
#define DVD_STREAM_DATA_CURRENT     0x800
#define DVD_STREAM_DATA_VMGM        0x400
#define DVD_STREAM_DATA_VTSM        0x401
#define DVD_DEFAULT_AUDIO_STREAM	0x0f
typedef struct tagDVD_DECODER_CAPS
{
	DWORD dwSize;
	DWORD dwAudioCaps;
	double dFwdMaxRateVideo;
	double dFwdMaxRateAudio;
	double dFwdMaxRateSP;
	double dBwdMaxRateVideo;
	double dBwdMaxRateAudio;
	double dBwdMaxRateSP;
	DWORD dwRes1;
	DWORD dwRes2;
	DWORD dwRes3;
	DWORD dwRes4;
} DVD_DECODER_CAPS;
#define DVD_AUDIO_CAPS_AC3		0x00000001
#define DVD_AUDIO_CAPS_MPEG2	0x00000002
#define DVD_AUDIO_CAPS_LPCM		0x00000004
#define DVD_AUDIO_CAPS_DTS		0x00000008
#define DVD_AUDIO_CAPS_SDDS		0x00000010
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0116_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0116_v0_0_s_ifspec;
#ifndef __IDvdInfo2_INTERFACE_DEFINED__
#define __IDvdInfo2_INTERFACE_DEFINED__
extern const IID IID_IDvdInfo2;
typedef struct IDvdInfo2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDvdInfo2 * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDvdInfo2 * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDvdInfo2 * This);
	HRESULT(STDMETHODCALLTYPE * GetCurrentDomain) (IDvdInfo2 * This, DVD_DOMAIN * pDomain);
	HRESULT(STDMETHODCALLTYPE * GetCurrentLocation) (IDvdInfo2 * This, DVD_PLAYBACK_LOCATION2 * pLocation);
	HRESULT(STDMETHODCALLTYPE * GetTotalTitleTime) (IDvdInfo2 * This, DVD_HMSF_TIMECODE * pTotalTime, ULONG * ulTimeCodeFlags);
	HRESULT(STDMETHODCALLTYPE * GetCurrentButton) (IDvdInfo2 * This, ULONG * pulButtonsAvailable, ULONG * pulCurrentButton);
	HRESULT(STDMETHODCALLTYPE * GetCurrentAngle) (IDvdInfo2 * This, ULONG * pulAnglesAvailable, ULONG * pulCurrentAngle);
	HRESULT(STDMETHODCALLTYPE * GetCurrentAudio) (IDvdInfo2 * This, ULONG * pulStreamsAvailable, ULONG * pulCurrentStream);
	HRESULT(STDMETHODCALLTYPE * GetCurrentSubpicture) (IDvdInfo2 * This, ULONG * pulStreamsAvailable, ULONG * pulCurrentStream, BOOL * pbIsDisabled);
	HRESULT(STDMETHODCALLTYPE * GetCurrentUOPS) (IDvdInfo2 * This, ULONG * pulUOPs);
	HRESULT(STDMETHODCALLTYPE * GetAllSPRMs) (IDvdInfo2 * This, SPRMARRAY * pRegisterArray);
	HRESULT(STDMETHODCALLTYPE * GetAllGPRMs) (IDvdInfo2 * This, GPRMARRAY * pRegisterArray);
	HRESULT(STDMETHODCALLTYPE * GetAudioLanguage) (IDvdInfo2 * This, ULONG ulStream, LCID * pLanguage);
	HRESULT(STDMETHODCALLTYPE * GetSubpictureLanguage) (IDvdInfo2 * This, ULONG ulStream, LCID * pLanguage);
	HRESULT(STDMETHODCALLTYPE * GetTitleAttributes) (IDvdInfo2 * This, ULONG ulTitle, DVD_MenuAttributes * pMenu, DVD_TitleAttributes * pTitle);
	HRESULT(STDMETHODCALLTYPE * GetVMGAttributes) (IDvdInfo2 * This, DVD_MenuAttributes * pATR);
	HRESULT(STDMETHODCALLTYPE * GetCurrentVideoAttributes) (IDvdInfo2 * This, DVD_VideoAttributes * pATR);
	HRESULT(STDMETHODCALLTYPE * GetAudioAttributes) (IDvdInfo2 * This, ULONG ulStream, DVD_AudioAttributes * pATR);
	HRESULT(STDMETHODCALLTYPE * GetKaraokeAttributes) (IDvdInfo2 * This, ULONG ulStream, DVD_KaraokeAttributes * pAttributes);
	HRESULT(STDMETHODCALLTYPE * GetSubpictureAttributes) (IDvdInfo2 * This, ULONG ulStream, DVD_SubpictureAttributes * pATR);
	HRESULT(STDMETHODCALLTYPE * GetDVDVolumeInfo) (IDvdInfo2 * This, ULONG * pulNumOfVolumes, ULONG * pulVolume, DVD_DISC_SIDE * pSide, ULONG * pulNumOfTitles);
	HRESULT(STDMETHODCALLTYPE * GetDVDTextNumberOfLanguages) (IDvdInfo2 * This, ULONG * pulNumOfLangs);
	HRESULT(STDMETHODCALLTYPE * GetDVDTextLanguageInfo) (IDvdInfo2 * This, ULONG ulLangIndex, ULONG * pulNumOfStrings, LCID * pLangCode, enum DVD_TextCharSet * pbCharacterSet);
	HRESULT(STDMETHODCALLTYPE * GetDVDTextStringAsNative) (IDvdInfo2 * This, ULONG ulLangIndex, ULONG ulStringIndex, BYTE * pbBuffer, ULONG ulMaxBufferSize, ULONG * pulActualSize, enum DVD_TextStringType * pType);
	HRESULT(STDMETHODCALLTYPE * GetDVDTextStringAsUnicode) (IDvdInfo2 * This, ULONG ulLangIndex, ULONG ulStringIndex, WCHAR * pchwBuffer, ULONG ulMaxBufferSize, ULONG * pulActualSize, enum DVD_TextStringType * pType);
	HRESULT(STDMETHODCALLTYPE * GetPlayerParentalLevel) (IDvdInfo2 * This, ULONG * pulParentalLevel, BYTE pbCountryCode[2]);
	HRESULT(STDMETHODCALLTYPE * GetNumberOfChapters) (IDvdInfo2 * This, ULONG ulTitle, ULONG * pulNumOfChapters);
	HRESULT(STDMETHODCALLTYPE * GetTitleParentalLevels) (IDvdInfo2 * This, ULONG ulTitle, ULONG * pulParentalLevels);
	HRESULT(STDMETHODCALLTYPE * GetDVDDirectory) (IDvdInfo2 * This, LPWSTR pszwPath, ULONG ulMaxSize, ULONG * pulActualSize);
	HRESULT(STDMETHODCALLTYPE * IsAudioStreamEnabled) (IDvdInfo2 * This, ULONG ulStreamNum, BOOL * pbEnabled);
	HRESULT(STDMETHODCALLTYPE * GetDiscID) (IDvdInfo2 * This, LPCWSTR pszwPath, ULONGLONG * pullDiscID);
	HRESULT(STDMETHODCALLTYPE * GetState) (IDvdInfo2 * This, IDvdState ** pStateData);
	HRESULT(STDMETHODCALLTYPE * GetMenuLanguages) (IDvdInfo2 * This, LCID * pLanguages, ULONG ulMaxLanguages, ULONG * pulActualLanguages);
	HRESULT(STDMETHODCALLTYPE * GetButtonAtPosition) (IDvdInfo2 * This, POINT point, ULONG * pulButtonIndex);
	HRESULT(STDMETHODCALLTYPE * GetCmdFromEvent) (IDvdInfo2 * This, LONG_PTR lParam1, IDvdCmd ** pCmdObj);
	HRESULT(STDMETHODCALLTYPE * GetDefaultMenuLanguage) (IDvdInfo2 * This, LCID * pLanguage);
	HRESULT(STDMETHODCALLTYPE * GetDefaultAudioLanguage) (IDvdInfo2 * This, LCID * pLanguage, DVD_AUDIO_LANG_EXT * pAudioExtension);
	HRESULT(STDMETHODCALLTYPE * GetDefaultSubpictureLanguage) (IDvdInfo2 * This, LCID * pLanguage, DVD_SUBPICTURE_LANG_EXT * pSubpictureExtension);
	HRESULT(STDMETHODCALLTYPE * GetDecoderCaps) (IDvdInfo2 * This, DVD_DECODER_CAPS * pCaps);
	HRESULT(STDMETHODCALLTYPE * GetButtonRect) (IDvdInfo2 * This, ULONG ulButton, RECT * pRect);
	HRESULT(STDMETHODCALLTYPE * IsSubpictureStreamEnabled) (IDvdInfo2 * This, ULONG ulStreamNum, BOOL * pbEnabled);
	END_INTERFACE
}  IDvdInfo2Vtbl;
interface IDvdInfo2
{
	CONST_VTBL struct IDvdInfo2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDvdInfo2_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDvdInfo2_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDvdInfo2_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDvdInfo2_GetCurrentDomain(This,pDomain)    ( (This)->lpVtbl -> GetCurrentDomain(This,pDomain) )
#define IDvdInfo2_GetCurrentLocation(This,pLocation)    ( (This)->lpVtbl -> GetCurrentLocation(This,pLocation) )
#define IDvdInfo2_GetTotalTitleTime(This,pTotalTime,ulTimeCodeFlags)    ( (This)->lpVtbl -> GetTotalTitleTime(This,pTotalTime,ulTimeCodeFlags) )
#define IDvdInfo2_GetCurrentButton(This,pulButtonsAvailable,pulCurrentButton)    ( (This)->lpVtbl -> GetCurrentButton(This,pulButtonsAvailable,pulCurrentButton) )
#define IDvdInfo2_GetCurrentAngle(This,pulAnglesAvailable,pulCurrentAngle)    ( (This)->lpVtbl -> GetCurrentAngle(This,pulAnglesAvailable,pulCurrentAngle) )
#define IDvdInfo2_GetCurrentAudio(This,pulStreamsAvailable,pulCurrentStream)    ( (This)->lpVtbl -> GetCurrentAudio(This,pulStreamsAvailable,pulCurrentStream) )
#define IDvdInfo2_GetCurrentSubpicture(This,pulStreamsAvailable,pulCurrentStream,pbIsDisabled)    ( (This)->lpVtbl -> GetCurrentSubpicture(This,pulStreamsAvailable,pulCurrentStream,pbIsDisabled) )
#define IDvdInfo2_GetCurrentUOPS(This,pulUOPs)    ( (This)->lpVtbl -> GetCurrentUOPS(This,pulUOPs) )
#define IDvdInfo2_GetAllSPRMs(This,pRegisterArray)    ( (This)->lpVtbl -> GetAllSPRMs(This,pRegisterArray) )
#define IDvdInfo2_GetAllGPRMs(This,pRegisterArray)    ( (This)->lpVtbl -> GetAllGPRMs(This,pRegisterArray) )
#define IDvdInfo2_GetAudioLanguage(This,ulStream,pLanguage)    ( (This)->lpVtbl -> GetAudioLanguage(This,ulStream,pLanguage) )
#define IDvdInfo2_GetSubpictureLanguage(This,ulStream,pLanguage)    ( (This)->lpVtbl -> GetSubpictureLanguage(This,ulStream,pLanguage) )
#define IDvdInfo2_GetTitleAttributes(This,ulTitle,pMenu,pTitle)    ( (This)->lpVtbl -> GetTitleAttributes(This,ulTitle,pMenu,pTitle) )
#define IDvdInfo2_GetVMGAttributes(This,pATR)    ( (This)->lpVtbl -> GetVMGAttributes(This,pATR) )
#define IDvdInfo2_GetCurrentVideoAttributes(This,pATR)    ( (This)->lpVtbl -> GetCurrentVideoAttributes(This,pATR) )
#define IDvdInfo2_GetAudioAttributes(This,ulStream,pATR)    ( (This)->lpVtbl -> GetAudioAttributes(This,ulStream,pATR) )
#define IDvdInfo2_GetKaraokeAttributes(This,ulStream,pAttributes)    ( (This)->lpVtbl -> GetKaraokeAttributes(This,ulStream,pAttributes) )
#define IDvdInfo2_GetSubpictureAttributes(This,ulStream,pATR)    ( (This)->lpVtbl -> GetSubpictureAttributes(This,ulStream,pATR) )
#define IDvdInfo2_GetDVDVolumeInfo(This,pulNumOfVolumes,pulVolume,pSide,pulNumOfTitles)    ( (This)->lpVtbl -> GetDVDVolumeInfo(This,pulNumOfVolumes,pulVolume,pSide,pulNumOfTitles) )
#define IDvdInfo2_GetDVDTextNumberOfLanguages(This,pulNumOfLangs)    ( (This)->lpVtbl -> GetDVDTextNumberOfLanguages(This,pulNumOfLangs) )
#define IDvdInfo2_GetDVDTextLanguageInfo(This,ulLangIndex,pulNumOfStrings,pLangCode,pbCharacterSet)    ( (This)->lpVtbl -> GetDVDTextLanguageInfo(This,ulLangIndex,pulNumOfStrings,pLangCode,pbCharacterSet) )
#define IDvdInfo2_GetDVDTextStringAsNative(This,ulLangIndex,ulStringIndex,pbBuffer,ulMaxBufferSize,pulActualSize,pType)    ( (This)->lpVtbl -> GetDVDTextStringAsNative(This,ulLangIndex,ulStringIndex,pbBuffer,ulMaxBufferSize,pulActualSize,pType) )
#define IDvdInfo2_GetDVDTextStringAsUnicode(This,ulLangIndex,ulStringIndex,pchwBuffer,ulMaxBufferSize,pulActualSize,pType)    ( (This)->lpVtbl -> GetDVDTextStringAsUnicode(This,ulLangIndex,ulStringIndex,pchwBuffer,ulMaxBufferSize,pulActualSize,pType) )
#define IDvdInfo2_GetPlayerParentalLevel(This,pulParentalLevel,pbCountryCode)    ( (This)->lpVtbl -> GetPlayerParentalLevel(This,pulParentalLevel,pbCountryCode) )
#define IDvdInfo2_GetNumberOfChapters(This,ulTitle,pulNumOfChapters)    ( (This)->lpVtbl -> GetNumberOfChapters(This,ulTitle,pulNumOfChapters) )
#define IDvdInfo2_GetTitleParentalLevels(This,ulTitle,pulParentalLevels)    ( (This)->lpVtbl -> GetTitleParentalLevels(This,ulTitle,pulParentalLevels) )
#define IDvdInfo2_GetDVDDirectory(This,pszwPath,ulMaxSize,pulActualSize)    ( (This)->lpVtbl -> GetDVDDirectory(This,pszwPath,ulMaxSize,pulActualSize) )
#define IDvdInfo2_IsAudioStreamEnabled(This,ulStreamNum,pbEnabled)    ( (This)->lpVtbl -> IsAudioStreamEnabled(This,ulStreamNum,pbEnabled) )
#define IDvdInfo2_GetDiscID(This,pszwPath,pullDiscID)    ( (This)->lpVtbl -> GetDiscID(This,pszwPath,pullDiscID) )
#define IDvdInfo2_GetState(This,pStateData)    ( (This)->lpVtbl -> GetState(This,pStateData) )
#define IDvdInfo2_GetMenuLanguages(This,pLanguages,ulMaxLanguages,pulActualLanguages)    ( (This)->lpVtbl -> GetMenuLanguages(This,pLanguages,ulMaxLanguages,pulActualLanguages) )
#define IDvdInfo2_GetButtonAtPosition(This,point,pulButtonIndex)    ( (This)->lpVtbl -> GetButtonAtPosition(This,point,pulButtonIndex) )
#define IDvdInfo2_GetCmdFromEvent(This,lParam1,pCmdObj)    ( (This)->lpVtbl -> GetCmdFromEvent(This,lParam1,pCmdObj) )
#define IDvdInfo2_GetDefaultMenuLanguage(This,pLanguage)    ( (This)->lpVtbl -> GetDefaultMenuLanguage(This,pLanguage) )
#define IDvdInfo2_GetDefaultAudioLanguage(This,pLanguage,pAudioExtension)    ( (This)->lpVtbl -> GetDefaultAudioLanguage(This,pLanguage,pAudioExtension) )
#define IDvdInfo2_GetDefaultSubpictureLanguage(This,pLanguage,pSubpictureExtension)    ( (This)->lpVtbl -> GetDefaultSubpictureLanguage(This,pLanguage,pSubpictureExtension) )
#define IDvdInfo2_GetDecoderCaps(This,pCaps)    ( (This)->lpVtbl -> GetDecoderCaps(This,pCaps) )
#define IDvdInfo2_GetButtonRect(This,ulButton,pRect)    ( (This)->lpVtbl -> GetButtonRect(This,ulButton,pRect) )
#define IDvdInfo2_IsSubpictureStreamEnabled(This,ulStreamNum,pbEnabled)    ( (This)->lpVtbl -> IsSubpictureStreamEnabled(This,ulStreamNum,pbEnabled) )
#endif
#endif
typedef enum _AM_DVD_GRAPH_FLAGS
{
	AM_DVD_HWDEC_PREFER = 0x1,
	AM_DVD_HWDEC_ONLY = 0x2,
	AM_DVD_SWDEC_PREFER = 0x4,
	AM_DVD_SWDEC_ONLY = 0x8,
	AM_DVD_NOVPE = 0x100,
	AM_DVD_DO_NOT_CLEAR = 0x200,
	AM_DVD_VMR9_ONLY = 0x800,
	AM_DVD_EVR_ONLY = 0x1000,
	AM_DVD_EVR_QOS = 0x2000,
	AM_DVD_ADAPT_GRAPH = 0x4000,
	AM_DVD_MASK = 0xffff
} AM_DVD_GRAPH_FLAGS;
typedef enum _AM_DVD_STREAM_FLAGS
{
	AM_DVD_STREAM_VIDEO = 0x1,
	AM_DVD_STREAM_AUDIO = 0x2,
	AM_DVD_STREAM_SUBPIC = 0x4
} AM_DVD_STREAM_FLAGS;
typedef struct __MIDL___MIDL_itf_strmif_0000_0117_0001
{
	HRESULT hrVPEStatus;
	BOOL bDvdVolInvalid;
	BOOL bDvdVolUnknown;
	BOOL bNoLine21In;
	BOOL bNoLine21Out;
	int iNumStreams;
	int iNumStreamsFailed;
	DWORD dwFailedStreamsFlag;
} AM_DVD_RENDERSTATUS;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0117_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0117_v0_0_s_ifspec;
#ifndef __IDvdGraphBuilder_INTERFACE_DEFINED__
#define __IDvdGraphBuilder_INTERFACE_DEFINED__
extern const IID IID_IDvdGraphBuilder;
typedef struct IDvdGraphBuilderVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDvdGraphBuilder * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDvdGraphBuilder * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDvdGraphBuilder * This);
	HRESULT(STDMETHODCALLTYPE * GetFiltergraph) (IDvdGraphBuilder * This, IGraphBuilder ** ppGB);
	HRESULT(STDMETHODCALLTYPE * GetDvdInterface) (IDvdGraphBuilder * This, REFIID riid, void **ppvIF);
	HRESULT(STDMETHODCALLTYPE * RenderDvdVideoVolume) (IDvdGraphBuilder * This, LPCWSTR lpcwszPathName, DWORD dwFlags, AM_DVD_RENDERSTATUS * pStatus);
	END_INTERFACE
}  IDvdGraphBuilderVtbl;
interface IDvdGraphBuilder
{
	CONST_VTBL struct IDvdGraphBuilderVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDvdGraphBuilder_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDvdGraphBuilder_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDvdGraphBuilder_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDvdGraphBuilder_GetFiltergraph(This,ppGB)    ( (This)->lpVtbl -> GetFiltergraph(This,ppGB) )
#define IDvdGraphBuilder_GetDvdInterface(This,riid,ppvIF)    ( (This)->lpVtbl -> GetDvdInterface(This,riid,ppvIF) )
#define IDvdGraphBuilder_RenderDvdVideoVolume(This,lpcwszPathName,dwFlags,pStatus)    ( (This)->lpVtbl -> RenderDvdVideoVolume(This,lpcwszPathName,dwFlags,pStatus) )
#endif
#endif
#ifndef __IDDrawExclModeVideo_INTERFACE_DEFINED__
#define __IDDrawExclModeVideo_INTERFACE_DEFINED__
extern const IID IID_IDDrawExclModeVideo;
typedef struct IDDrawExclModeVideoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDDrawExclModeVideo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDDrawExclModeVideo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDDrawExclModeVideo * This);
	HRESULT(STDMETHODCALLTYPE * SetDDrawObject) (IDDrawExclModeVideo * This, IDirectDraw * pDDrawObject);
	HRESULT(STDMETHODCALLTYPE * GetDDrawObject) (IDDrawExclModeVideo * This, IDirectDraw ** ppDDrawObject, BOOL * pbUsingExternal);
	HRESULT(STDMETHODCALLTYPE * SetDDrawSurface) (IDDrawExclModeVideo * This, IDirectDrawSurface * pDDrawSurface);
	HRESULT(STDMETHODCALLTYPE * GetDDrawSurface) (IDDrawExclModeVideo * This, IDirectDrawSurface ** ppDDrawSurface, BOOL * pbUsingExternal);
	HRESULT(STDMETHODCALLTYPE * SetDrawParameters) (IDDrawExclModeVideo * This, const RECT * prcSource, const RECT * prcTarget);
	HRESULT(STDMETHODCALLTYPE * GetNativeVideoProps) (IDDrawExclModeVideo * This, DWORD * pdwVideoWidth, DWORD * pdwVideoHeight, DWORD * pdwPictAspectRatioX, DWORD * pdwPictAspectRatioY);
	HRESULT(STDMETHODCALLTYPE * SetCallbackInterface) (IDDrawExclModeVideo * This, IDDrawExclModeVideoCallback * pCallback, DWORD dwFlags);
	END_INTERFACE
}  IDDrawExclModeVideoVtbl;
interface IDDrawExclModeVideo
{
	CONST_VTBL struct IDDrawExclModeVideoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDDrawExclModeVideo_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDDrawExclModeVideo_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDDrawExclModeVideo_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDDrawExclModeVideo_SetDDrawObject(This,pDDrawObject)    ( (This)->lpVtbl -> SetDDrawObject(This,pDDrawObject) )
#define IDDrawExclModeVideo_GetDDrawObject(This,ppDDrawObject,pbUsingExternal)    ( (This)->lpVtbl -> GetDDrawObject(This,ppDDrawObject,pbUsingExternal) )
#define IDDrawExclModeVideo_SetDDrawSurface(This,pDDrawSurface)    ( (This)->lpVtbl -> SetDDrawSurface(This,pDDrawSurface) )
#define IDDrawExclModeVideo_GetDDrawSurface(This,ppDDrawSurface,pbUsingExternal)    ( (This)->lpVtbl -> GetDDrawSurface(This,ppDDrawSurface,pbUsingExternal) )
#define IDDrawExclModeVideo_SetDrawParameters(This,prcSource,prcTarget)    ( (This)->lpVtbl -> SetDrawParameters(This,prcSource,prcTarget) )
#define IDDrawExclModeVideo_GetNativeVideoProps(This,pdwVideoWidth,pdwVideoHeight,pdwPictAspectRatioX,pdwPictAspectRatioY)    ( (This)->lpVtbl -> GetNativeVideoProps(This,pdwVideoWidth,pdwVideoHeight,pdwPictAspectRatioX,pdwPictAspectRatioY) )
#define IDDrawExclModeVideo_SetCallbackInterface(This,pCallback,dwFlags)    ( (This)->lpVtbl -> SetCallbackInterface(This,pCallback,dwFlags) )
#endif
#endif
enum _AM_OVERLAY_NOTIFY_FLAGS
{
	AM_OVERLAY_NOTIFY_VISIBLE_CHANGE = 0x1,
	AM_OVERLAY_NOTIFY_SOURCE_CHANGE = 0x2,
	AM_OVERLAY_NOTIFY_DEST_CHANGE = 0x4
};
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0119_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0119_v0_0_s_ifspec;
#ifndef __IDDrawExclModeVideoCallback_INTERFACE_DEFINED__
#define __IDDrawExclModeVideoCallback_INTERFACE_DEFINED__
extern const IID IID_IDDrawExclModeVideoCallback;
typedef struct IDDrawExclModeVideoCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDDrawExclModeVideoCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDDrawExclModeVideoCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDDrawExclModeVideoCallback * This);
	HRESULT(STDMETHODCALLTYPE * OnUpdateOverlay) (IDDrawExclModeVideoCallback * This, BOOL bBefore, DWORD dwFlags, BOOL bOldVisible, const RECT * prcOldSrc, const RECT * prcOldDest, BOOL bNewVisible, const RECT * prcNewSrc, const RECT * prcNewDest);
	HRESULT(STDMETHODCALLTYPE * OnUpdateColorKey) (IDDrawExclModeVideoCallback * This, const COLORKEY * pKey, DWORD dwColor);
	HRESULT(STDMETHODCALLTYPE * OnUpdateSize) (IDDrawExclModeVideoCallback * This, DWORD dwWidth, DWORD dwHeight, DWORD dwARWidth, DWORD dwARHeight);
	END_INTERFACE
}  IDDrawExclModeVideoCallbackVtbl;
interface IDDrawExclModeVideoCallback
{
	CONST_VTBL struct IDDrawExclModeVideoCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDDrawExclModeVideoCallback_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDDrawExclModeVideoCallback_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IDDrawExclModeVideoCallback_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IDDrawExclModeVideoCallback_OnUpdateOverlay(This,bBefore,dwFlags,bOldVisible,prcOldSrc,prcOldDest,bNewVisible,prcNewSrc,prcNewDest)    ( (This)->lpVtbl -> OnUpdateOverlay(This,bBefore,dwFlags,bOldVisible,prcOldSrc,prcOldDest,bNewVisible,prcNewSrc,prcNewDest) )
#define IDDrawExclModeVideoCallback_OnUpdateColorKey(This,pKey,dwColor)    ( (This)->lpVtbl -> OnUpdateColorKey(This,pKey,dwColor) )
#define IDDrawExclModeVideoCallback_OnUpdateSize(This,dwWidth,dwHeight,dwARWidth,dwARHeight)    ( (This)->lpVtbl -> OnUpdateSize(This,dwWidth,dwHeight,dwARWidth,dwARHeight) )
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0120_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0120_v0_0_s_ifspec;
#ifndef __IPinConnection_INTERFACE_DEFINED__
#define __IPinConnection_INTERFACE_DEFINED__
extern const IID IID_IPinConnection;
typedef struct IPinConnectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPinConnection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPinConnection * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPinConnection * This);
	HRESULT(STDMETHODCALLTYPE * DynamicQueryAccept) (IPinConnection * This, const AM_MEDIA_TYPE * pmt);
	HRESULT(STDMETHODCALLTYPE * NotifyEndOfStream) (IPinConnection * This, HANDLE hNotifyEvent);
	HRESULT(STDMETHODCALLTYPE * IsEndPin) (IPinConnection * This);
	HRESULT(STDMETHODCALLTYPE * DynamicDisconnect) (IPinConnection * This);
	END_INTERFACE
}  IPinConnectionVtbl;
interface IPinConnection
{
	CONST_VTBL struct IPinConnectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPinConnection_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPinConnection_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IPinConnection_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IPinConnection_DynamicQueryAccept(This,pmt)    ( (This)->lpVtbl -> DynamicQueryAccept(This,pmt) )
#define IPinConnection_NotifyEndOfStream(This,hNotifyEvent)    ( (This)->lpVtbl -> NotifyEndOfStream(This,hNotifyEvent) )
#define IPinConnection_IsEndPin(This)    ( (This)->lpVtbl -> IsEndPin(This) )
#define IPinConnection_DynamicDisconnect(This)    ( (This)->lpVtbl -> DynamicDisconnect(This) )
#endif
#endif
#ifndef __IPinFlowControl_INTERFACE_DEFINED__
#define __IPinFlowControl_INTERFACE_DEFINED__
extern const IID IID_IPinFlowControl;
typedef struct IPinFlowControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IPinFlowControl * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IPinFlowControl * This);
	ULONG(STDMETHODCALLTYPE * Release) (IPinFlowControl * This);
	HRESULT(STDMETHODCALLTYPE * Block) (IPinFlowControl * This, DWORD dwBlockFlags, HANDLE hEvent);
	END_INTERFACE
}  IPinFlowControlVtbl;
interface IPinFlowControl
{
	CONST_VTBL struct IPinFlowControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPinFlowControl_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPinFlowControl_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IPinFlowControl_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IPinFlowControl_Block(This,dwBlockFlags,hEvent)    ( (This)->lpVtbl -> Block(This,dwBlockFlags,hEvent) )
#endif
#endif
enum _AM_PIN_FLOW_CONTROL_BLOCK_FLAGS
{
	AM_PIN_FLOW_CONTROL_BLOCK = 0x1
};
typedef enum _AM_GRAPH_CONFIG_RECONNECT_FLAGS
{
	AM_GRAPH_CONFIG_RECONNECT_DIRECTCONNECT = 0x1,
	AM_GRAPH_CONFIG_RECONNECT_CACHE_REMOVED_FILTERS = 0x2,
	AM_GRAPH_CONFIG_RECONNECT_USE_ONLY_CACHED_FILTERS = 0x4
} AM_GRAPH_CONFIG_RECONNECT_FLAGS;
enum _REM_FILTER_FLAGS
{
	REMFILTERF_LEAVECONNECTED = 0x1
};
typedef enum _AM_FILTER_FLAGS
{
	AM_FILTER_FLAGS_REMOVABLE = 0x1
} AM_FILTER_FLAGS;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0122_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0122_v0_0_s_ifspec;
#ifndef __IGraphConfig_INTERFACE_DEFINED__
#define __IGraphConfig_INTERFACE_DEFINED__
extern const IID IID_IGraphConfig;
typedef struct IGraphConfigVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGraphConfig * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGraphConfig * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGraphConfig * This);
	HRESULT(STDMETHODCALLTYPE * Reconnect) (IGraphConfig * This, IPin * pOutputPin, IPin * pInputPin, const AM_MEDIA_TYPE * pmtFirstConnection, IBaseFilter * pUsingFilter, HANDLE hAbortEvent, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * Reconfigure) (IGraphConfig * This, IGraphConfigCallback * pCallback, PVOID pvContext, DWORD dwFlags, HANDLE hAbortEvent);
	HRESULT(STDMETHODCALLTYPE * AddFilterToCache) (IGraphConfig * This, IBaseFilter * pFilter);
	HRESULT(STDMETHODCALLTYPE * EnumCacheFilter) (IGraphConfig * This, IEnumFilters ** pEnum);
	HRESULT(STDMETHODCALLTYPE * RemoveFilterFromCache) (IGraphConfig * This, IBaseFilter * pFilter);
	HRESULT(STDMETHODCALLTYPE * GetStartTime) (IGraphConfig * This, REFERENCE_TIME * prtStart);
	HRESULT(STDMETHODCALLTYPE * PushThroughData) (IGraphConfig * This, IPin * pOutputPin, IPinConnection * pConnection, HANDLE hEventAbort);
	HRESULT(STDMETHODCALLTYPE * SetFilterFlags) (IGraphConfig * This, IBaseFilter * pFilter, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * GetFilterFlags) (IGraphConfig * This, IBaseFilter * pFilter, DWORD * pdwFlags);
	HRESULT(STDMETHODCALLTYPE * RemoveFilterEx) (IGraphConfig * This, IBaseFilter * pFilter, DWORD Flags);
	END_INTERFACE
}  IGraphConfigVtbl;
interface IGraphConfig
{
	CONST_VTBL struct IGraphConfigVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGraphConfig_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGraphConfig_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IGraphConfig_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IGraphConfig_Reconnect(This,pOutputPin,pInputPin,pmtFirstConnection,pUsingFilter,hAbortEvent,dwFlags)    ( (This)->lpVtbl -> Reconnect(This,pOutputPin,pInputPin,pmtFirstConnection,pUsingFilter,hAbortEvent,dwFlags) )
#define IGraphConfig_Reconfigure(This,pCallback,pvContext,dwFlags,hAbortEvent)    ( (This)->lpVtbl -> Reconfigure(This,pCallback,pvContext,dwFlags,hAbortEvent) )
#define IGraphConfig_AddFilterToCache(This,pFilter)    ( (This)->lpVtbl -> AddFilterToCache(This,pFilter) )
#define IGraphConfig_EnumCacheFilter(This,pEnum)    ( (This)->lpVtbl -> EnumCacheFilter(This,pEnum) )
#define IGraphConfig_RemoveFilterFromCache(This,pFilter)    ( (This)->lpVtbl -> RemoveFilterFromCache(This,pFilter) )
#define IGraphConfig_GetStartTime(This,prtStart)    ( (This)->lpVtbl -> GetStartTime(This,prtStart) )
#define IGraphConfig_PushThroughData(This,pOutputPin,pConnection,hEventAbort)    ( (This)->lpVtbl -> PushThroughData(This,pOutputPin,pConnection,hEventAbort) )
#define IGraphConfig_SetFilterFlags(This,pFilter,dwFlags)    ( (This)->lpVtbl -> SetFilterFlags(This,pFilter,dwFlags) )
#define IGraphConfig_GetFilterFlags(This,pFilter,pdwFlags)    ( (This)->lpVtbl -> GetFilterFlags(This,pFilter,pdwFlags) )
#define IGraphConfig_RemoveFilterEx(This,pFilter,Flags)    ( (This)->lpVtbl -> RemoveFilterEx(This,pFilter,Flags) )
#endif
#endif
#ifndef __IGraphConfigCallback_INTERFACE_DEFINED__
#define __IGraphConfigCallback_INTERFACE_DEFINED__
extern const IID IID_IGraphConfigCallback;
typedef struct IGraphConfigCallbackVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGraphConfigCallback * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGraphConfigCallback * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGraphConfigCallback * This);
	HRESULT(STDMETHODCALLTYPE * Reconfigure) (IGraphConfigCallback * This, PVOID pvContext, DWORD dwFlags);
	END_INTERFACE
}  IGraphConfigCallbackVtbl;
interface IGraphConfigCallback
{
	CONST_VTBL struct IGraphConfigCallbackVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGraphConfigCallback_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGraphConfigCallback_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IGraphConfigCallback_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IGraphConfigCallback_Reconfigure(This,pvContext,dwFlags)    ( (This)->lpVtbl -> Reconfigure(This,pvContext,dwFlags) )
#endif
#endif
#ifndef __IFilterChain_INTERFACE_DEFINED__
#define __IFilterChain_INTERFACE_DEFINED__
extern const IID IID_IFilterChain;
typedef struct IFilterChainVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFilterChain * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFilterChain * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFilterChain * This);
	HRESULT(STDMETHODCALLTYPE * StartChain) (IFilterChain * This, IBaseFilter * pStartFilter, IBaseFilter * pEndFilter);
	HRESULT(STDMETHODCALLTYPE * PauseChain) (IFilterChain * This, IBaseFilter * pStartFilter, IBaseFilter * pEndFilter);
	HRESULT(STDMETHODCALLTYPE * StopChain) (IFilterChain * This, IBaseFilter * pStartFilter, IBaseFilter * pEndFilter);
	HRESULT(STDMETHODCALLTYPE * RemoveChain) (IFilterChain * This, IBaseFilter * pStartFilter, IBaseFilter * pEndFilter);
	END_INTERFACE
}  IFilterChainVtbl;
interface IFilterChain
{
	CONST_VTBL struct IFilterChainVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFilterChain_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFilterChain_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IFilterChain_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IFilterChain_StartChain(This,pStartFilter,pEndFilter)    ( (This)->lpVtbl -> StartChain(This,pStartFilter,pEndFilter) )
#define IFilterChain_PauseChain(This,pStartFilter,pEndFilter)    ( (This)->lpVtbl -> PauseChain(This,pStartFilter,pEndFilter) )
#define IFilterChain_StopChain(This,pStartFilter,pEndFilter)    ( (This)->lpVtbl -> StopChain(This,pStartFilter,pEndFilter) )
#define IFilterChain_RemoveChain(This,pStartFilter,pEndFilter)    ( (This)->lpVtbl -> RemoveChain(This,pStartFilter,pEndFilter) )
#endif
#endif
#if 0
typedef DWORD *LPDIRECTDRAW7;
typedef DWORD *LPDIRECTDRAWSURFACE7;
typedef DWORD *LPDDPIXELFORMAT;
typedef DWORD *LPBITMAPINFOHEADER;
typedef struct DDCOLORKEY
{
	DWORD dw1;
	DWORD dw2;
} DDCOLORKEY;
typedef DDCOLORKEY *LPDDCOLORKEY;
#endif
#include <ddraw.h>
typedef enum VMRPresentationFlags
{
	VMRSample_SyncPoint = 0x1,
	VMRSample_Preroll = 0x2,
	VMRSample_Discontinuity = 0x4,
	VMRSample_TimeValid = 0x8,
	VMRSample_SrcDstRectsValid = 0x10
} VMRPresentationFlags;
typedef struct tagVMRPRESENTATIONINFO
{
	DWORD dwFlags;
	LPDIRECTDRAWSURFACE7 lpSurf;
	REFERENCE_TIME rtStart;
	REFERENCE_TIME rtEnd;
	SIZE szAspectRatio;
	RECT rcSrc;
	RECT rcDst;
	DWORD dwTypeSpecificFlags;
	DWORD dwInterlaceFlags;
} VMRPRESENTATIONINFO;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0125_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0125_v0_0_s_ifspec;
#ifndef __IVMRImagePresenter_INTERFACE_DEFINED__
#define __IVMRImagePresenter_INTERFACE_DEFINED__
extern const IID IID_IVMRImagePresenter;
typedef struct IVMRImagePresenterVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVMRImagePresenter * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVMRImagePresenter * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVMRImagePresenter * This);
	HRESULT(STDMETHODCALLTYPE * StartPresenting) (IVMRImagePresenter * This, DWORD_PTR dwUserID);
	HRESULT(STDMETHODCALLTYPE * StopPresenting) (IVMRImagePresenter * This, DWORD_PTR dwUserID);
	HRESULT(STDMETHODCALLTYPE * PresentImage) (IVMRImagePresenter * This, DWORD_PTR dwUserID, VMRPRESENTATIONINFO * lpPresInfo);
	END_INTERFACE
}  IVMRImagePresenterVtbl;
interface IVMRImagePresenter
{
	CONST_VTBL struct IVMRImagePresenterVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMRImagePresenter_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMRImagePresenter_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IVMRImagePresenter_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IVMRImagePresenter_StartPresenting(This,dwUserID)    ( (This)->lpVtbl -> StartPresenting(This,dwUserID) )
#define IVMRImagePresenter_StopPresenting(This,dwUserID)    ( (This)->lpVtbl -> StopPresenting(This,dwUserID) )
#define IVMRImagePresenter_PresentImage(This,dwUserID,lpPresInfo)    ( (This)->lpVtbl -> PresentImage(This,dwUserID,lpPresInfo) )
#endif
#endif
typedef enum VMRSurfaceAllocationFlags
{
	AMAP_PIXELFORMAT_VALID = 0x1,
	AMAP_3D_TARGET = 0x2,
	AMAP_ALLOW_SYSMEM = 0x4,
	AMAP_FORCE_SYSMEM = 0x8,
	AMAP_DIRECTED_FLIP = 0x10,
	AMAP_DXVA_TARGET = 0x20
} VMRSurfaceAllocationFlags;
typedef struct tagVMRALLOCATIONINFO
{
	DWORD dwFlags;
	LPBITMAPINFOHEADER lpHdr;
	LPDDPIXELFORMAT lpPixFmt;
	SIZE szAspectRatio;
	DWORD dwMinBuffers;
	DWORD dwMaxBuffers;
	DWORD dwInterlaceFlags;
	SIZE szNativeSize;
} VMRALLOCATIONINFO;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0126_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0126_v0_0_s_ifspec;
#ifndef __IVMRSurfaceAllocator_INTERFACE_DEFINED__
#define __IVMRSurfaceAllocator_INTERFACE_DEFINED__
extern const IID IID_IVMRSurfaceAllocator;
typedef struct IVMRSurfaceAllocatorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVMRSurfaceAllocator * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVMRSurfaceAllocator * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVMRSurfaceAllocator * This);
	HRESULT(STDMETHODCALLTYPE * AllocateSurface) (IVMRSurfaceAllocator * This, DWORD_PTR dwUserID, VMRALLOCATIONINFO * lpAllocInfo, DWORD * lpdwActualBuffers, LPDIRECTDRAWSURFACE7 * lplpSurface);
	HRESULT(STDMETHODCALLTYPE * FreeSurface) (IVMRSurfaceAllocator * This, DWORD_PTR dwID);
	HRESULT(STDMETHODCALLTYPE * PrepareSurface) (IVMRSurfaceAllocator * This, DWORD_PTR dwUserID, LPDIRECTDRAWSURFACE7 lpSurface, DWORD dwSurfaceFlags);
	HRESULT(STDMETHODCALLTYPE * AdviseNotify) (IVMRSurfaceAllocator * This, IVMRSurfaceAllocatorNotify * lpIVMRSurfAllocNotify);
	END_INTERFACE
}  IVMRSurfaceAllocatorVtbl;
interface IVMRSurfaceAllocator
{
	CONST_VTBL struct IVMRSurfaceAllocatorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMRSurfaceAllocator_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMRSurfaceAllocator_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IVMRSurfaceAllocator_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IVMRSurfaceAllocator_AllocateSurface(This,dwUserID,lpAllocInfo,lpdwActualBuffers,lplpSurface)    ( (This)->lpVtbl -> AllocateSurface(This,dwUserID,lpAllocInfo,lpdwActualBuffers,lplpSurface) )
#define IVMRSurfaceAllocator_FreeSurface(This,dwID)    ( (This)->lpVtbl -> FreeSurface(This,dwID) )
#define IVMRSurfaceAllocator_PrepareSurface(This,dwUserID,lpSurface,dwSurfaceFlags)    ( (This)->lpVtbl -> PrepareSurface(This,dwUserID,lpSurface,dwSurfaceFlags) )
#define IVMRSurfaceAllocator_AdviseNotify(This,lpIVMRSurfAllocNotify)    ( (This)->lpVtbl -> AdviseNotify(This,lpIVMRSurfAllocNotify) )
#endif
#endif
#ifndef __IVMRSurfaceAllocatorNotify_INTERFACE_DEFINED__
#define __IVMRSurfaceAllocatorNotify_INTERFACE_DEFINED__
extern const IID IID_IVMRSurfaceAllocatorNotify;
typedef struct IVMRSurfaceAllocatorNotifyVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVMRSurfaceAllocatorNotify * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVMRSurfaceAllocatorNotify * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVMRSurfaceAllocatorNotify * This);
	HRESULT(STDMETHODCALLTYPE * AdviseSurfaceAllocator) (IVMRSurfaceAllocatorNotify * This, DWORD_PTR dwUserID, IVMRSurfaceAllocator * lpIVRMSurfaceAllocator);
	HRESULT(STDMETHODCALLTYPE * SetDDrawDevice) (IVMRSurfaceAllocatorNotify * This, LPDIRECTDRAW7 lpDDrawDevice, HMONITOR hMonitor);
	HRESULT(STDMETHODCALLTYPE * ChangeDDrawDevice) (IVMRSurfaceAllocatorNotify * This, LPDIRECTDRAW7 lpDDrawDevice, HMONITOR hMonitor);
	HRESULT(STDMETHODCALLTYPE * RestoreDDrawSurfaces) (IVMRSurfaceAllocatorNotify * This);
	HRESULT(STDMETHODCALLTYPE * NotifyEvent) (IVMRSurfaceAllocatorNotify * This, LONG EventCode, LONG_PTR Param1, LONG_PTR Param2);
	HRESULT(STDMETHODCALLTYPE * SetBorderColor) (IVMRSurfaceAllocatorNotify * This, COLORREF clrBorder);
	END_INTERFACE
}  IVMRSurfaceAllocatorNotifyVtbl;
interface IVMRSurfaceAllocatorNotify
{
	CONST_VTBL struct IVMRSurfaceAllocatorNotifyVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMRSurfaceAllocatorNotify_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMRSurfaceAllocatorNotify_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IVMRSurfaceAllocatorNotify_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IVMRSurfaceAllocatorNotify_AdviseSurfaceAllocator(This,dwUserID,lpIVRMSurfaceAllocator)    ( (This)->lpVtbl -> AdviseSurfaceAllocator(This,dwUserID,lpIVRMSurfaceAllocator) )
#define IVMRSurfaceAllocatorNotify_SetDDrawDevice(This,lpDDrawDevice,hMonitor)    ( (This)->lpVtbl -> SetDDrawDevice(This,lpDDrawDevice,hMonitor) )
#define IVMRSurfaceAllocatorNotify_ChangeDDrawDevice(This,lpDDrawDevice,hMonitor)    ( (This)->lpVtbl -> ChangeDDrawDevice(This,lpDDrawDevice,hMonitor) )
#define IVMRSurfaceAllocatorNotify_RestoreDDrawSurfaces(This)    ( (This)->lpVtbl -> RestoreDDrawSurfaces(This) )
#define IVMRSurfaceAllocatorNotify_NotifyEvent(This,EventCode,Param1,Param2)    ( (This)->lpVtbl -> NotifyEvent(This,EventCode,Param1,Param2) )
#define IVMRSurfaceAllocatorNotify_SetBorderColor(This,clrBorder)    ( (This)->lpVtbl -> SetBorderColor(This,clrBorder) )
#endif
#endif
typedef enum VMR_ASPECT_RATIO_MODE
{
	VMR_ARMODE_NONE = 0,
	VMR_ARMODE_LETTER_BOX = (VMR_ARMODE_NONE + 1)
} VMR_ASPECT_RATIO_MODE;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0128_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0128_v0_0_s_ifspec;
#ifndef __IVMRWindowlessControl_INTERFACE_DEFINED__
#define __IVMRWindowlessControl_INTERFACE_DEFINED__
extern const IID IID_IVMRWindowlessControl;
typedef struct IVMRWindowlessControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVMRWindowlessControl * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVMRWindowlessControl * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVMRWindowlessControl * This);
	HRESULT(STDMETHODCALLTYPE * GetNativeVideoSize) (IVMRWindowlessControl * This, LONG * lpWidth, LONG * lpHeight, LONG * lpARWidth, LONG * lpARHeight);
	HRESULT(STDMETHODCALLTYPE * GetMinIdealVideoSize) (IVMRWindowlessControl * This, LONG * lpWidth, LONG * lpHeight);
	HRESULT(STDMETHODCALLTYPE * GetMaxIdealVideoSize) (IVMRWindowlessControl * This, LONG * lpWidth, LONG * lpHeight);
	HRESULT(STDMETHODCALLTYPE * SetVideoPosition) (IVMRWindowlessControl * This, const LPRECT lpSRCRect, const LPRECT lpDSTRect);
	HRESULT(STDMETHODCALLTYPE * GetVideoPosition) (IVMRWindowlessControl * This, LPRECT lpSRCRect, LPRECT lpDSTRect);
	HRESULT(STDMETHODCALLTYPE * GetAspectRatioMode) (IVMRWindowlessControl * This, DWORD * lpAspectRatioMode);
	HRESULT(STDMETHODCALLTYPE * SetAspectRatioMode) (IVMRWindowlessControl * This, DWORD AspectRatioMode);
	HRESULT(STDMETHODCALLTYPE * SetVideoClippingWindow) (IVMRWindowlessControl * This, HWND hwnd);
	HRESULT(STDMETHODCALLTYPE * RepaintVideo) (IVMRWindowlessControl * This, HWND hwnd, HDC hdc);
	HRESULT(STDMETHODCALLTYPE * DisplayModeChanged) (IVMRWindowlessControl * This);
	HRESULT(STDMETHODCALLTYPE * GetCurrentImage) (IVMRWindowlessControl * This, BYTE ** lpDib);
	HRESULT(STDMETHODCALLTYPE * SetBorderColor) (IVMRWindowlessControl * This, COLORREF Clr);
	HRESULT(STDMETHODCALLTYPE * GetBorderColor) (IVMRWindowlessControl * This, COLORREF * lpClr);
	HRESULT(STDMETHODCALLTYPE * SetColorKey) (IVMRWindowlessControl * This, COLORREF Clr);
	HRESULT(STDMETHODCALLTYPE * GetColorKey) (IVMRWindowlessControl * This, COLORREF * lpClr);
	END_INTERFACE
}  IVMRWindowlessControlVtbl;
interface IVMRWindowlessControl
{
	CONST_VTBL struct IVMRWindowlessControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMRWindowlessControl_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMRWindowlessControl_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IVMRWindowlessControl_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IVMRWindowlessControl_GetNativeVideoSize(This,lpWidth,lpHeight,lpARWidth,lpARHeight)    ( (This)->lpVtbl -> GetNativeVideoSize(This,lpWidth,lpHeight,lpARWidth,lpARHeight) )
#define IVMRWindowlessControl_GetMinIdealVideoSize(This,lpWidth,lpHeight)    ( (This)->lpVtbl -> GetMinIdealVideoSize(This,lpWidth,lpHeight) )
#define IVMRWindowlessControl_GetMaxIdealVideoSize(This,lpWidth,lpHeight)    ( (This)->lpVtbl -> GetMaxIdealVideoSize(This,lpWidth,lpHeight) )
#define IVMRWindowlessControl_SetVideoPosition(This,lpSRCRect,lpDSTRect)    ( (This)->lpVtbl -> SetVideoPosition(This,lpSRCRect,lpDSTRect) )
#define IVMRWindowlessControl_GetVideoPosition(This,lpSRCRect,lpDSTRect)    ( (This)->lpVtbl -> GetVideoPosition(This,lpSRCRect,lpDSTRect) )
#define IVMRWindowlessControl_GetAspectRatioMode(This,lpAspectRatioMode)    ( (This)->lpVtbl -> GetAspectRatioMode(This,lpAspectRatioMode) )
#define IVMRWindowlessControl_SetAspectRatioMode(This,AspectRatioMode)    ( (This)->lpVtbl -> SetAspectRatioMode(This,AspectRatioMode) )
#define IVMRWindowlessControl_SetVideoClippingWindow(This,hwnd)    ( (This)->lpVtbl -> SetVideoClippingWindow(This,hwnd) )
#define IVMRWindowlessControl_RepaintVideo(This,hwnd,hdc)    ( (This)->lpVtbl -> RepaintVideo(This,hwnd,hdc) )
#define IVMRWindowlessControl_DisplayModeChanged(This)    ( (This)->lpVtbl -> DisplayModeChanged(This) )
#define IVMRWindowlessControl_GetCurrentImage(This,lpDib)    ( (This)->lpVtbl -> GetCurrentImage(This,lpDib) )
#define IVMRWindowlessControl_SetBorderColor(This,Clr)    ( (This)->lpVtbl -> SetBorderColor(This,Clr) )
#define IVMRWindowlessControl_GetBorderColor(This,lpClr)    ( (This)->lpVtbl -> GetBorderColor(This,lpClr) )
#define IVMRWindowlessControl_SetColorKey(This,Clr)    ( (This)->lpVtbl -> SetColorKey(This,Clr) )
#define IVMRWindowlessControl_GetColorKey(This,lpClr)    ( (This)->lpVtbl -> GetColorKey(This,lpClr) )
#endif
#endif
typedef enum VMRMixerPrefs
{
	MixerPref_NoDecimation = 0x1,
	MixerPref_DecimateOutput = 0x2,
	MixerPref_ARAdjustXorY = 0x4,
	MixerPref_DecimationReserved = 0x8,
	MixerPref_DecimateMask = 0xf,
	MixerPref_BiLinearFiltering = 0x10,
	MixerPref_PointFiltering = 0x20,
	MixerPref_FilteringMask = 0xf0,
	MixerPref_RenderTargetRGB = 0x100,
	MixerPref_RenderTargetYUV = 0x1000,
	MixerPref_RenderTargetYUV420 = 0x200,
	MixerPref_RenderTargetYUV422 = 0x400,
	MixerPref_RenderTargetYUV444 = 0x800,
	MixerPref_RenderTargetReserved = 0xe000,
	MixerPref_RenderTargetMask = 0xff00,
	MixerPref_DynamicSwitchToBOB = 0x10000,
	MixerPref_DynamicDecimateBy2 = 0x20000,
	MixerPref_DynamicReserved = 0xc0000,
	MixerPref_DynamicMask = 0xf0000
} VMRMixerPrefs;
typedef struct _NORMALIZEDRECT
{
	float left;
	float top;
	float right;
	float bottom;
} NORMALIZEDRECT;
typedef struct _NORMALIZEDRECT *PNORMALIZEDRECT;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0129_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0129_v0_0_s_ifspec;
#ifndef __IVMRMixerControl_INTERFACE_DEFINED__
#define __IVMRMixerControl_INTERFACE_DEFINED__
extern const IID IID_IVMRMixerControl;
typedef struct IVMRMixerControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVMRMixerControl * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVMRMixerControl * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVMRMixerControl * This);
	HRESULT(STDMETHODCALLTYPE * SetAlpha) (IVMRMixerControl * This, DWORD dwStreamID, float Alpha);
	HRESULT(STDMETHODCALLTYPE * GetAlpha) (IVMRMixerControl * This, DWORD dwStreamID, float *pAlpha);
	HRESULT(STDMETHODCALLTYPE * SetZOrder) (IVMRMixerControl * This, DWORD dwStreamID, DWORD dwZ);
	HRESULT(STDMETHODCALLTYPE * GetZOrder) (IVMRMixerControl * This, DWORD dwStreamID, DWORD * pZ);
	HRESULT(STDMETHODCALLTYPE * SetOutputRect) (IVMRMixerControl * This, DWORD dwStreamID, const NORMALIZEDRECT * pRect);
	HRESULT(STDMETHODCALLTYPE * GetOutputRect) (IVMRMixerControl * This, DWORD dwStreamID, NORMALIZEDRECT * pRect);
	HRESULT(STDMETHODCALLTYPE * SetBackgroundClr) (IVMRMixerControl * This, COLORREF ClrBkg);
	HRESULT(STDMETHODCALLTYPE * GetBackgroundClr) (IVMRMixerControl * This, COLORREF * lpClrBkg);
	HRESULT(STDMETHODCALLTYPE * SetMixingPrefs) (IVMRMixerControl * This, DWORD dwMixerPrefs);
	HRESULT(STDMETHODCALLTYPE * GetMixingPrefs) (IVMRMixerControl * This, DWORD * pdwMixerPrefs);
	END_INTERFACE
}  IVMRMixerControlVtbl;
interface IVMRMixerControl
{
	CONST_VTBL struct IVMRMixerControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMRMixerControl_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMRMixerControl_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IVMRMixerControl_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IVMRMixerControl_SetAlpha(This,dwStreamID,Alpha)    ( (This)->lpVtbl -> SetAlpha(This,dwStreamID,Alpha) )
#define IVMRMixerControl_GetAlpha(This,dwStreamID,pAlpha)    ( (This)->lpVtbl -> GetAlpha(This,dwStreamID,pAlpha) )
#define IVMRMixerControl_SetZOrder(This,dwStreamID,dwZ)    ( (This)->lpVtbl -> SetZOrder(This,dwStreamID,dwZ) )
#define IVMRMixerControl_GetZOrder(This,dwStreamID,pZ)    ( (This)->lpVtbl -> GetZOrder(This,dwStreamID,pZ) )
#define IVMRMixerControl_SetOutputRect(This,dwStreamID,pRect)    ( (This)->lpVtbl -> SetOutputRect(This,dwStreamID,pRect) )
#define IVMRMixerControl_GetOutputRect(This,dwStreamID,pRect)    ( (This)->lpVtbl -> GetOutputRect(This,dwStreamID,pRect) )
#define IVMRMixerControl_SetBackgroundClr(This,ClrBkg)    ( (This)->lpVtbl -> SetBackgroundClr(This,ClrBkg) )
#define IVMRMixerControl_GetBackgroundClr(This,lpClrBkg)    ( (This)->lpVtbl -> GetBackgroundClr(This,lpClrBkg) )
#define IVMRMixerControl_SetMixingPrefs(This,dwMixerPrefs)    ( (This)->lpVtbl -> SetMixingPrefs(This,dwMixerPrefs) )
#define IVMRMixerControl_GetMixingPrefs(This,pdwMixerPrefs)    ( (This)->lpVtbl -> GetMixingPrefs(This,pdwMixerPrefs) )
#endif
#endif
typedef struct tagVMRGUID
{
	GUID *pGUID;
	GUID GUID;
} VMRGUID;
typedef struct tagVMRMONITORINFO
{
	VMRGUID guid;
	RECT rcMonitor;
	HMONITOR hMon;
	DWORD dwFlags;
	wchar_t szDevice[32];
	wchar_t szDescription[256];
	LARGE_INTEGER liDriverVersion;
	DWORD dwVendorId;
	DWORD dwDeviceId;
	DWORD dwSubSysId;
	DWORD dwRevision;
} VMRMONITORINFO;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0130_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0130_v0_0_s_ifspec;
#ifndef __IVMRMonitorConfig_INTERFACE_DEFINED__
#define __IVMRMonitorConfig_INTERFACE_DEFINED__
extern const IID IID_IVMRMonitorConfig;
typedef struct IVMRMonitorConfigVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVMRMonitorConfig * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVMRMonitorConfig * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVMRMonitorConfig * This);
	HRESULT(STDMETHODCALLTYPE * SetMonitor) (IVMRMonitorConfig * This, const VMRGUID * pGUID);
	HRESULT(STDMETHODCALLTYPE * GetMonitor) (IVMRMonitorConfig * This, VMRGUID * pGUID);
	HRESULT(STDMETHODCALLTYPE * SetDefaultMonitor) (IVMRMonitorConfig * This, const VMRGUID * pGUID);
	HRESULT(STDMETHODCALLTYPE * GetDefaultMonitor) (IVMRMonitorConfig * This, VMRGUID * pGUID);
	HRESULT(STDMETHODCALLTYPE * GetAvailableMonitors) (IVMRMonitorConfig * This, VMRMONITORINFO * pInfo, DWORD dwMaxInfoArraySize, DWORD * pdwNumDevices);
	END_INTERFACE
}  IVMRMonitorConfigVtbl;
interface IVMRMonitorConfig
{
	CONST_VTBL struct IVMRMonitorConfigVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMRMonitorConfig_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMRMonitorConfig_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IVMRMonitorConfig_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IVMRMonitorConfig_SetMonitor(This,pGUID)    ( (This)->lpVtbl -> SetMonitor(This,pGUID) )
#define IVMRMonitorConfig_GetMonitor(This,pGUID)    ( (This)->lpVtbl -> GetMonitor(This,pGUID) )
#define IVMRMonitorConfig_SetDefaultMonitor(This,pGUID)    ( (This)->lpVtbl -> SetDefaultMonitor(This,pGUID) )
#define IVMRMonitorConfig_GetDefaultMonitor(This,pGUID)    ( (This)->lpVtbl -> GetDefaultMonitor(This,pGUID) )
#define IVMRMonitorConfig_GetAvailableMonitors(This,pInfo,dwMaxInfoArraySize,pdwNumDevices)    ( (This)->lpVtbl -> GetAvailableMonitors(This,pInfo,dwMaxInfoArraySize,pdwNumDevices) )
#endif
#endif
typedef enum VMRRenderPrefs
{
	RenderPrefs_RestrictToInitialMonitor = 0,
	RenderPrefs_ForceOffscreen = 0x1,
	RenderPrefs_ForceOverlays = 0x2,
	RenderPrefs_AllowOverlays = 0,
	RenderPrefs_AllowOffscreen = 0,
	RenderPrefs_DoNotRenderColorKeyAndBorder = 0x8,
	RenderPrefs_Reserved = 0x10,
	RenderPrefs_PreferAGPMemWhenMixing = 0x20,
	RenderPrefs_Mask = 0x3f
} VMRRenderPrefs;
typedef enum VMRMode
{
	VMRMode_Windowed = 0x1,
	VMRMode_Windowless = 0x2,
	VMRMode_Renderless = 0x4,
	VMRMode_Mask = 0x7
} VMRMode;
enum __MIDL___MIDL_itf_strmif_0000_0131_0001
{
	MAX_NUMBER_OF_STREAMS = 16
};
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0131_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0131_v0_0_s_ifspec;
#ifndef __IVMRFilterConfig_INTERFACE_DEFINED__
#define __IVMRFilterConfig_INTERFACE_DEFINED__
extern const IID IID_IVMRFilterConfig;
typedef struct IVMRFilterConfigVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVMRFilterConfig * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVMRFilterConfig * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVMRFilterConfig * This);
	HRESULT(STDMETHODCALLTYPE * SetImageCompositor) (IVMRFilterConfig * This, IVMRImageCompositor * lpVMRImgCompositor);
	HRESULT(STDMETHODCALLTYPE * SetNumberOfStreams) (IVMRFilterConfig * This, DWORD dwMaxStreams);
	HRESULT(STDMETHODCALLTYPE * GetNumberOfStreams) (IVMRFilterConfig * This, DWORD * pdwMaxStreams);
	HRESULT(STDMETHODCALLTYPE * SetRenderingPrefs) (IVMRFilterConfig * This, DWORD dwRenderFlags);
	HRESULT(STDMETHODCALLTYPE * GetRenderingPrefs) (IVMRFilterConfig * This, DWORD * pdwRenderFlags);
	HRESULT(STDMETHODCALLTYPE * SetRenderingMode) (IVMRFilterConfig * This, DWORD Mode);
	HRESULT(STDMETHODCALLTYPE * GetRenderingMode) (IVMRFilterConfig * This, DWORD * pMode);
	END_INTERFACE
}  IVMRFilterConfigVtbl;
interface IVMRFilterConfig
{
	CONST_VTBL struct IVMRFilterConfigVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMRFilterConfig_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMRFilterConfig_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IVMRFilterConfig_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IVMRFilterConfig_SetImageCompositor(This,lpVMRImgCompositor)    ( (This)->lpVtbl -> SetImageCompositor(This,lpVMRImgCompositor) )
#define IVMRFilterConfig_SetNumberOfStreams(This,dwMaxStreams)    ( (This)->lpVtbl -> SetNumberOfStreams(This,dwMaxStreams) )
#define IVMRFilterConfig_GetNumberOfStreams(This,pdwMaxStreams)    ( (This)->lpVtbl -> GetNumberOfStreams(This,pdwMaxStreams) )
#define IVMRFilterConfig_SetRenderingPrefs(This,dwRenderFlags)    ( (This)->lpVtbl -> SetRenderingPrefs(This,dwRenderFlags) )
#define IVMRFilterConfig_GetRenderingPrefs(This,pdwRenderFlags)    ( (This)->lpVtbl -> GetRenderingPrefs(This,pdwRenderFlags) )
#define IVMRFilterConfig_SetRenderingMode(This,Mode)    ( (This)->lpVtbl -> SetRenderingMode(This,Mode) )
#define IVMRFilterConfig_GetRenderingMode(This,pMode)    ( (This)->lpVtbl -> GetRenderingMode(This,pMode) )
#endif
#endif
#ifndef __IVMRAspectRatioControl_INTERFACE_DEFINED__
#define __IVMRAspectRatioControl_INTERFACE_DEFINED__
extern const IID IID_IVMRAspectRatioControl;
typedef struct IVMRAspectRatioControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVMRAspectRatioControl * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVMRAspectRatioControl * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVMRAspectRatioControl * This);
	HRESULT(STDMETHODCALLTYPE * GetAspectRatioMode) (IVMRAspectRatioControl * This, LPDWORD lpdwARMode);
	HRESULT(STDMETHODCALLTYPE * SetAspectRatioMode) (IVMRAspectRatioControl * This, DWORD dwARMode);
	END_INTERFACE
}  IVMRAspectRatioControlVtbl;
interface IVMRAspectRatioControl
{
	CONST_VTBL struct IVMRAspectRatioControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMRAspectRatioControl_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMRAspectRatioControl_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IVMRAspectRatioControl_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IVMRAspectRatioControl_GetAspectRatioMode(This,lpdwARMode)    ( (This)->lpVtbl -> GetAspectRatioMode(This,lpdwARMode) )
#define IVMRAspectRatioControl_SetAspectRatioMode(This,dwARMode)    ( (This)->lpVtbl -> SetAspectRatioMode(This,dwARMode) )
#endif
#endif
typedef enum VMRDeinterlacePrefs
{
	DeinterlacePref_NextBest = 0x1,
	DeinterlacePref_BOB = 0x2,
	DeinterlacePref_Weave = 0x4,
	DeinterlacePref_Mask = 0x7
} VMRDeinterlacePrefs;
typedef enum VMRDeinterlaceTech
{
	DeinterlaceTech_Unknown = 0,
	DeinterlaceTech_BOBLineReplicate = 0x1,
	DeinterlaceTech_BOBVerticalStretch = 0x2,
	DeinterlaceTech_MedianFiltering = 0x4,
	DeinterlaceTech_EdgeFiltering = 0x10,
	DeinterlaceTech_FieldAdaptive = 0x20,
	DeinterlaceTech_PixelAdaptive = 0x40,
	DeinterlaceTech_MotionVectorSteered = 0x80
} VMRDeinterlaceTech;
typedef struct _VMRFrequency
{
	DWORD dwNumerator;
	DWORD dwDenominator;
} VMRFrequency;
typedef struct _VMRVideoDesc
{
	DWORD dwSize;
	DWORD dwSampleWidth;
	DWORD dwSampleHeight;
	BOOL SingleFieldPerSample;
	DWORD dwFourCC;
	VMRFrequency InputSampleFreq;
	VMRFrequency OutputFrameFreq;
} VMRVideoDesc;
typedef struct _VMRDeinterlaceCaps
{
	DWORD dwSize;
	DWORD dwNumPreviousOutputFrames;
	DWORD dwNumForwardRefSamples;
	DWORD dwNumBackwardRefSamples;
	VMRDeinterlaceTech DeinterlaceTechnology;
} VMRDeinterlaceCaps;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0133_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0133_v0_0_s_ifspec;
#ifndef __IVMRDeinterlaceControl_INTERFACE_DEFINED__
#define __IVMRDeinterlaceControl_INTERFACE_DEFINED__
extern const IID IID_IVMRDeinterlaceControl;
typedef struct IVMRDeinterlaceControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVMRDeinterlaceControl * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVMRDeinterlaceControl * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVMRDeinterlaceControl * This);
	HRESULT(STDMETHODCALLTYPE * GetNumberOfDeinterlaceModes) (IVMRDeinterlaceControl * This, VMRVideoDesc * lpVideoDescription, LPDWORD lpdwNumDeinterlaceModes, LPGUID lpDeinterlaceModes);
	HRESULT(STDMETHODCALLTYPE * GetDeinterlaceModeCaps) (IVMRDeinterlaceControl * This, LPGUID lpDeinterlaceMode, VMRVideoDesc * lpVideoDescription, VMRDeinterlaceCaps * lpDeinterlaceCaps);
	HRESULT(STDMETHODCALLTYPE * GetDeinterlaceMode) (IVMRDeinterlaceControl * This, DWORD dwStreamID, LPGUID lpDeinterlaceMode);
	HRESULT(STDMETHODCALLTYPE * SetDeinterlaceMode) (IVMRDeinterlaceControl * This, DWORD dwStreamID, LPGUID lpDeinterlaceMode);
	HRESULT(STDMETHODCALLTYPE * GetDeinterlacePrefs) (IVMRDeinterlaceControl * This, LPDWORD lpdwDeinterlacePrefs);
	HRESULT(STDMETHODCALLTYPE * SetDeinterlacePrefs) (IVMRDeinterlaceControl * This, DWORD dwDeinterlacePrefs);
	HRESULT(STDMETHODCALLTYPE * GetActualDeinterlaceMode) (IVMRDeinterlaceControl * This, DWORD dwStreamID, LPGUID lpDeinterlaceMode);
	END_INTERFACE
}  IVMRDeinterlaceControlVtbl;
interface IVMRDeinterlaceControl
{
	CONST_VTBL struct IVMRDeinterlaceControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMRDeinterlaceControl_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMRDeinterlaceControl_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IVMRDeinterlaceControl_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IVMRDeinterlaceControl_GetNumberOfDeinterlaceModes(This,lpVideoDescription,lpdwNumDeinterlaceModes,lpDeinterlaceModes)    ( (This)->lpVtbl -> GetNumberOfDeinterlaceModes(This,lpVideoDescription,lpdwNumDeinterlaceModes,lpDeinterlaceModes) )
#define IVMRDeinterlaceControl_GetDeinterlaceModeCaps(This,lpDeinterlaceMode,lpVideoDescription,lpDeinterlaceCaps)    ( (This)->lpVtbl -> GetDeinterlaceModeCaps(This,lpDeinterlaceMode,lpVideoDescription,lpDeinterlaceCaps) )
#define IVMRDeinterlaceControl_GetDeinterlaceMode(This,dwStreamID,lpDeinterlaceMode)    ( (This)->lpVtbl -> GetDeinterlaceMode(This,dwStreamID,lpDeinterlaceMode) )
#define IVMRDeinterlaceControl_SetDeinterlaceMode(This,dwStreamID,lpDeinterlaceMode)    ( (This)->lpVtbl -> SetDeinterlaceMode(This,dwStreamID,lpDeinterlaceMode) )
#define IVMRDeinterlaceControl_GetDeinterlacePrefs(This,lpdwDeinterlacePrefs)    ( (This)->lpVtbl -> GetDeinterlacePrefs(This,lpdwDeinterlacePrefs) )
#define IVMRDeinterlaceControl_SetDeinterlacePrefs(This,dwDeinterlacePrefs)    ( (This)->lpVtbl -> SetDeinterlacePrefs(This,dwDeinterlacePrefs) )
#define IVMRDeinterlaceControl_GetActualDeinterlaceMode(This,dwStreamID,lpDeinterlaceMode)    ( (This)->lpVtbl -> GetActualDeinterlaceMode(This,dwStreamID,lpDeinterlaceMode) )
#endif
#endif
typedef struct _VMRALPHABITMAP
{
	DWORD dwFlags;
	HDC hdc;
	LPDIRECTDRAWSURFACE7 pDDS;
	RECT rSrc;
	NORMALIZEDRECT rDest;
	FLOAT fAlpha;
	COLORREF clrSrcKey;
} VMRALPHABITMAP;
typedef struct _VMRALPHABITMAP *PVMRALPHABITMAP;
#define VMRBITMAP_DISABLE            0x00000001
#define VMRBITMAP_HDC                0x00000002
#define VMRBITMAP_ENTIREDDS          0x00000004
#define VMRBITMAP_SRCCOLORKEY        0x00000008
#define VMRBITMAP_SRCRECT            0x00000010
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0134_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0134_v0_0_s_ifspec;
#ifndef __IVMRMixerBitmap_INTERFACE_DEFINED__
#define __IVMRMixerBitmap_INTERFACE_DEFINED__
extern const IID IID_IVMRMixerBitmap;
typedef struct IVMRMixerBitmapVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVMRMixerBitmap * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVMRMixerBitmap * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVMRMixerBitmap * This);
	HRESULT(STDMETHODCALLTYPE * SetAlphaBitmap) (IVMRMixerBitmap * This, const VMRALPHABITMAP * pBmpParms);
	HRESULT(STDMETHODCALLTYPE * UpdateAlphaBitmapParameters) (IVMRMixerBitmap * This, PVMRALPHABITMAP pBmpParms);
	HRESULT(STDMETHODCALLTYPE * GetAlphaBitmapParameters) (IVMRMixerBitmap * This, PVMRALPHABITMAP pBmpParms);
	END_INTERFACE
}  IVMRMixerBitmapVtbl;
interface IVMRMixerBitmap
{
	CONST_VTBL struct IVMRMixerBitmapVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMRMixerBitmap_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMRMixerBitmap_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IVMRMixerBitmap_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IVMRMixerBitmap_SetAlphaBitmap(This,pBmpParms)    ( (This)->lpVtbl -> SetAlphaBitmap(This,pBmpParms) )
#define IVMRMixerBitmap_UpdateAlphaBitmapParameters(This,pBmpParms)    ( (This)->lpVtbl -> UpdateAlphaBitmapParameters(This,pBmpParms) )
#define IVMRMixerBitmap_GetAlphaBitmapParameters(This,pBmpParms)    ( (This)->lpVtbl -> GetAlphaBitmapParameters(This,pBmpParms) )
#endif
#endif
typedef struct _VMRVIDEOSTREAMINFO
{
	LPDIRECTDRAWSURFACE7 pddsVideoSurface;
	DWORD dwWidth;
	DWORD dwHeight;
	DWORD dwStrmID;
	FLOAT fAlpha;
	DDCOLORKEY ddClrKey;
	NORMALIZEDRECT rNormal;
} VMRVIDEOSTREAMINFO;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0135_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0135_v0_0_s_ifspec;
#ifndef __IVMRImageCompositor_INTERFACE_DEFINED__
#define __IVMRImageCompositor_INTERFACE_DEFINED__
extern const IID IID_IVMRImageCompositor;
typedef struct IVMRImageCompositorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVMRImageCompositor * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVMRImageCompositor * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVMRImageCompositor * This);
	HRESULT(STDMETHODCALLTYPE * InitCompositionTarget) (IVMRImageCompositor * This, IUnknown * pD3DDevice, LPDIRECTDRAWSURFACE7 pddsRenderTarget);
	HRESULT(STDMETHODCALLTYPE * TermCompositionTarget) (IVMRImageCompositor * This, IUnknown * pD3DDevice, LPDIRECTDRAWSURFACE7 pddsRenderTarget);
	HRESULT(STDMETHODCALLTYPE * SetStreamMediaType) (IVMRImageCompositor * This, DWORD dwStrmID, AM_MEDIA_TYPE * pmt, BOOL fTexture);
	HRESULT(STDMETHODCALLTYPE * CompositeImage) (IVMRImageCompositor * This, IUnknown * pD3DDevice, LPDIRECTDRAWSURFACE7 pddsRenderTarget, AM_MEDIA_TYPE * pmtRenderTarget, REFERENCE_TIME rtStart, REFERENCE_TIME rtEnd, DWORD dwClrBkGnd, VMRVIDEOSTREAMINFO * pVideoStreamInfo, UINT cStreams);
	END_INTERFACE
}  IVMRImageCompositorVtbl;
interface IVMRImageCompositor
{
	CONST_VTBL struct IVMRImageCompositorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMRImageCompositor_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMRImageCompositor_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IVMRImageCompositor_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IVMRImageCompositor_InitCompositionTarget(This,pD3DDevice,pddsRenderTarget)    ( (This)->lpVtbl -> InitCompositionTarget(This,pD3DDevice,pddsRenderTarget) )
#define IVMRImageCompositor_TermCompositionTarget(This,pD3DDevice,pddsRenderTarget)    ( (This)->lpVtbl -> TermCompositionTarget(This,pD3DDevice,pddsRenderTarget) )
#define IVMRImageCompositor_SetStreamMediaType(This,dwStrmID,pmt,fTexture)    ( (This)->lpVtbl -> SetStreamMediaType(This,dwStrmID,pmt,fTexture) )
#define IVMRImageCompositor_CompositeImage(This,pD3DDevice,pddsRenderTarget,pmtRenderTarget,rtStart,rtEnd,dwClrBkGnd,pVideoStreamInfo,cStreams)    ( (This)->lpVtbl -> CompositeImage(This,pD3DDevice,pddsRenderTarget,pmtRenderTarget,rtStart,rtEnd,dwClrBkGnd,pVideoStreamInfo,cStreams) )
#endif
#endif
#ifndef __IVMRVideoStreamControl_INTERFACE_DEFINED__
#define __IVMRVideoStreamControl_INTERFACE_DEFINED__
extern const IID IID_IVMRVideoStreamControl;
typedef struct IVMRVideoStreamControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVMRVideoStreamControl * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVMRVideoStreamControl * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVMRVideoStreamControl * This);
	HRESULT(STDMETHODCALLTYPE * SetColorKey) (IVMRVideoStreamControl * This, LPDDCOLORKEY lpClrKey);
	HRESULT(STDMETHODCALLTYPE * GetColorKey) (IVMRVideoStreamControl * This, LPDDCOLORKEY lpClrKey);
	HRESULT(STDMETHODCALLTYPE * SetStreamActiveState) (IVMRVideoStreamControl * This, BOOL fActive);
	HRESULT(STDMETHODCALLTYPE * GetStreamActiveState) (IVMRVideoStreamControl * This, BOOL * lpfActive);
	END_INTERFACE
}  IVMRVideoStreamControlVtbl;
interface IVMRVideoStreamControl
{
	CONST_VTBL struct IVMRVideoStreamControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMRVideoStreamControl_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMRVideoStreamControl_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IVMRVideoStreamControl_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IVMRVideoStreamControl_SetColorKey(This,lpClrKey)    ( (This)->lpVtbl -> SetColorKey(This,lpClrKey) )
#define IVMRVideoStreamControl_GetColorKey(This,lpClrKey)    ( (This)->lpVtbl -> GetColorKey(This,lpClrKey) )
#define IVMRVideoStreamControl_SetStreamActiveState(This,fActive)    ( (This)->lpVtbl -> SetStreamActiveState(This,fActive) )
#define IVMRVideoStreamControl_GetStreamActiveState(This,lpfActive)    ( (This)->lpVtbl -> GetStreamActiveState(This,lpfActive) )
#endif
#endif
#ifndef __IVMRSurface_INTERFACE_DEFINED__
#define __IVMRSurface_INTERFACE_DEFINED__
extern const IID IID_IVMRSurface;
typedef struct IVMRSurfaceVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVMRSurface * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVMRSurface * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVMRSurface * This);
	HRESULT(STDMETHODCALLTYPE * IsSurfaceLocked) (IVMRSurface * This);
	HRESULT(STDMETHODCALLTYPE * LockSurface) (IVMRSurface * This, BYTE ** lpSurface);
	HRESULT(STDMETHODCALLTYPE * UnlockSurface) (IVMRSurface * This);
	HRESULT(STDMETHODCALLTYPE * GetSurface) (IVMRSurface * This, LPDIRECTDRAWSURFACE7 * lplpSurface);
	END_INTERFACE
}  IVMRSurfaceVtbl;
interface IVMRSurface
{
	CONST_VTBL struct IVMRSurfaceVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMRSurface_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMRSurface_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IVMRSurface_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IVMRSurface_IsSurfaceLocked(This)    ( (This)->lpVtbl -> IsSurfaceLocked(This) )
#define IVMRSurface_LockSurface(This,lpSurface)    ( (This)->lpVtbl -> LockSurface(This,lpSurface) )
#define IVMRSurface_UnlockSurface(This)    ( (This)->lpVtbl -> UnlockSurface(This) )
#define IVMRSurface_GetSurface(This,lplpSurface)    ( (This)->lpVtbl -> GetSurface(This,lplpSurface) )
#endif
#endif
#ifndef __IVMRImagePresenterConfig_INTERFACE_DEFINED__
#define __IVMRImagePresenterConfig_INTERFACE_DEFINED__
extern const IID IID_IVMRImagePresenterConfig;
typedef struct IVMRImagePresenterConfigVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVMRImagePresenterConfig * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVMRImagePresenterConfig * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVMRImagePresenterConfig * This);
	HRESULT(STDMETHODCALLTYPE * SetRenderingPrefs) (IVMRImagePresenterConfig * This, DWORD dwRenderFlags);
	HRESULT(STDMETHODCALLTYPE * GetRenderingPrefs) (IVMRImagePresenterConfig * This, DWORD * dwRenderFlags);
	END_INTERFACE
}  IVMRImagePresenterConfigVtbl;
interface IVMRImagePresenterConfig
{
	CONST_VTBL struct IVMRImagePresenterConfigVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMRImagePresenterConfig_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMRImagePresenterConfig_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IVMRImagePresenterConfig_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IVMRImagePresenterConfig_SetRenderingPrefs(This,dwRenderFlags)    ( (This)->lpVtbl -> SetRenderingPrefs(This,dwRenderFlags) )
#define IVMRImagePresenterConfig_GetRenderingPrefs(This,dwRenderFlags)    ( (This)->lpVtbl -> GetRenderingPrefs(This,dwRenderFlags) )
#endif
#endif
#ifndef __IVMRImagePresenterExclModeConfig_INTERFACE_DEFINED__
#define __IVMRImagePresenterExclModeConfig_INTERFACE_DEFINED__
extern const IID IID_IVMRImagePresenterExclModeConfig;
typedef struct IVMRImagePresenterExclModeConfigVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVMRImagePresenterExclModeConfig * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVMRImagePresenterExclModeConfig * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVMRImagePresenterExclModeConfig * This);
	HRESULT(STDMETHODCALLTYPE * SetRenderingPrefs) (IVMRImagePresenterExclModeConfig * This, DWORD dwRenderFlags);
	HRESULT(STDMETHODCALLTYPE * GetRenderingPrefs) (IVMRImagePresenterExclModeConfig * This, DWORD * dwRenderFlags);
	HRESULT(STDMETHODCALLTYPE * SetXlcModeDDObjAndPrimarySurface) (IVMRImagePresenterExclModeConfig * This, LPDIRECTDRAW7 lpDDObj, LPDIRECTDRAWSURFACE7 lpPrimarySurf);
	HRESULT(STDMETHODCALLTYPE * GetXlcModeDDObjAndPrimarySurface) (IVMRImagePresenterExclModeConfig * This, LPDIRECTDRAW7 * lpDDObj, LPDIRECTDRAWSURFACE7 * lpPrimarySurf);
	END_INTERFACE
}  IVMRImagePresenterExclModeConfigVtbl;
interface IVMRImagePresenterExclModeConfig
{
	CONST_VTBL struct IVMRImagePresenterExclModeConfigVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVMRImagePresenterExclModeConfig_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVMRImagePresenterExclModeConfig_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IVMRImagePresenterExclModeConfig_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IVMRImagePresenterExclModeConfig_SetRenderingPrefs(This,dwRenderFlags)    ( (This)->lpVtbl -> SetRenderingPrefs(This,dwRenderFlags) )
#define IVMRImagePresenterExclModeConfig_GetRenderingPrefs(This,dwRenderFlags)    ( (This)->lpVtbl -> GetRenderingPrefs(This,dwRenderFlags) )
#define IVMRImagePresenterExclModeConfig_SetXlcModeDDObjAndPrimarySurface(This,lpDDObj,lpPrimarySurf)    ( (This)->lpVtbl -> SetXlcModeDDObjAndPrimarySurface(This,lpDDObj,lpPrimarySurf) )
#define IVMRImagePresenterExclModeConfig_GetXlcModeDDObjAndPrimarySurface(This,lpDDObj,lpPrimarySurf)    ( (This)->lpVtbl -> GetXlcModeDDObjAndPrimarySurface(This,lpDDObj,lpPrimarySurf) )
#endif
#endif
#ifndef __IVPManager_INTERFACE_DEFINED__
#define __IVPManager_INTERFACE_DEFINED__
extern const IID IID_IVPManager;
typedef struct IVPManagerVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IVPManager * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IVPManager * This);
	ULONG(STDMETHODCALLTYPE * Release) (IVPManager * This);
	HRESULT(STDMETHODCALLTYPE * SetVideoPortIndex) (IVPManager * This, DWORD dwVideoPortIndex);
	HRESULT(STDMETHODCALLTYPE * GetVideoPortIndex) (IVPManager * This, DWORD * pdwVideoPortIndex);
	END_INTERFACE
}  IVPManagerVtbl;
interface IVPManager
{
	CONST_VTBL struct IVPManagerVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IVPManager_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IVPManager_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) )
#define IVPManager_Release(This)    ( (This)->lpVtbl -> Release(This) )
#define IVPManager_SetVideoPortIndex(This,dwVideoPortIndex)    ( (This)->lpVtbl -> SetVideoPortIndex(This,dwVideoPortIndex) )
#define IVPManager_GetVideoPortIndex(This,pdwVideoPortIndex)    ( (This)->lpVtbl -> GetVideoPortIndex(This,pdwVideoPortIndex) )
#endif
#endif
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0141_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_strmif_0000_0141_v0_0_s_ifspec;
#endif
