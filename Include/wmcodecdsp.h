/*+@@file@@----------------------------------------------------------------*//*!
 \file		wmcodecdsp.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 02:17:16 2016
 \date		Modified on Mon Sep 19 02:17:16 2016
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
#ifndef __wmcodecdsp_h__
#define __wmcodecdsp_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IWMValidate_FWD_DEFINED__
#define __IWMValidate_FWD_DEFINED__
typedef interface IWMValidate IWMValidate;
#endif
#ifndef __IValidateBinding_FWD_DEFINED__
#define __IValidateBinding_FWD_DEFINED__
typedef interface IValidateBinding IValidateBinding;
#endif
#ifndef __IWMVideoDecoderHurryup_FWD_DEFINED__
#define __IWMVideoDecoderHurryup_FWD_DEFINED__
typedef interface IWMVideoDecoderHurryup IWMVideoDecoderHurryup;
#endif
#ifndef __IWMVideoForceKeyFrame_FWD_DEFINED__
#define __IWMVideoForceKeyFrame_FWD_DEFINED__
typedef interface IWMVideoForceKeyFrame IWMVideoForceKeyFrame;
#endif
#ifndef __IWMCodecStrings_FWD_DEFINED__
#define __IWMCodecStrings_FWD_DEFINED__
typedef interface IWMCodecStrings IWMCodecStrings;
#endif
#ifndef __IWMCodecProps_FWD_DEFINED__
#define __IWMCodecProps_FWD_DEFINED__
typedef interface IWMCodecProps IWMCodecProps;
#endif
#ifndef __IWMCodecLeakyBucket_FWD_DEFINED__
#define __IWMCodecLeakyBucket_FWD_DEFINED__
typedef interface IWMCodecLeakyBucket IWMCodecLeakyBucket;
#endif
#ifndef __IWMCodecOutputTimestamp_FWD_DEFINED__
#define __IWMCodecOutputTimestamp_FWD_DEFINED__
typedef interface IWMCodecOutputTimestamp IWMCodecOutputTimestamp;
#endif
#ifndef __IWMVideoDecoderReconBuffer_FWD_DEFINED__
#define __IWMVideoDecoderReconBuffer_FWD_DEFINED__
typedef interface IWMVideoDecoderReconBuffer IWMVideoDecoderReconBuffer;
#endif
#ifndef __IWMCodecPrivateData_FWD_DEFINED__
#define __IWMCodecPrivateData_FWD_DEFINED__
typedef interface IWMCodecPrivateData IWMCodecPrivateData;
#endif
#ifndef __IWMSampleExtensionSupport_FWD_DEFINED__
#define __IWMSampleExtensionSupport_FWD_DEFINED__
typedef interface IWMSampleExtensionSupport IWMSampleExtensionSupport;
#endif
#ifndef __IWMResamplerProps_FWD_DEFINED__
#define __IWMResamplerProps_FWD_DEFINED__
typedef interface IWMResamplerProps IWMResamplerProps;
#endif
#ifndef __IWMResizerProps_FWD_DEFINED__
#define __IWMResizerProps_FWD_DEFINED__
typedef interface IWMResizerProps IWMResizerProps;
#endif
#ifndef __IWMColorLegalizerProps_FWD_DEFINED__
#define __IWMColorLegalizerProps_FWD_DEFINED__
typedef interface IWMColorLegalizerProps IWMColorLegalizerProps;
#endif
#ifndef __IWMInterlaceProps_FWD_DEFINED__
#define __IWMInterlaceProps_FWD_DEFINED__
typedef interface IWMInterlaceProps IWMInterlaceProps;
#endif
#ifndef __IWMFrameInterpProps_FWD_DEFINED__
#define __IWMFrameInterpProps_FWD_DEFINED__
typedef interface IWMFrameInterpProps IWMFrameInterpProps;
#endif
#ifndef __IWMColorConvProps_FWD_DEFINED__
#define __IWMColorConvProps_FWD_DEFINED__
typedef interface IWMColorConvProps IWMColorConvProps;
#endif
#ifndef __ITocEntry_FWD_DEFINED__
#define __ITocEntry_FWD_DEFINED__
typedef interface ITocEntry ITocEntry;
#endif
#ifndef __ITocEntryList_FWD_DEFINED__
#define __ITocEntryList_FWD_DEFINED__
typedef interface ITocEntryList ITocEntryList;
#endif
#ifndef __IToc_FWD_DEFINED__
#define __IToc_FWD_DEFINED__
typedef interface IToc IToc;
#endif
#ifndef __ITocCollection_FWD_DEFINED__
#define __ITocCollection_FWD_DEFINED__
typedef interface ITocCollection ITocCollection;
#endif
#ifndef __ITocParser_FWD_DEFINED__
#define __ITocParser_FWD_DEFINED__
typedef interface ITocParser ITocParser;
#endif
#ifndef __IFileIo_FWD_DEFINED__
#define __IFileIo_FWD_DEFINED__
typedef interface IFileIo IFileIo;
#endif
#ifndef __IFileClient_FWD_DEFINED__
#define __IFileClient_FWD_DEFINED__
typedef interface IFileClient IFileClient;
#endif
#ifndef __IClusterDetector_FWD_DEFINED__
#define __IClusterDetector_FWD_DEFINED__
typedef interface IClusterDetector IClusterDetector;
#endif
#ifndef __CMpeg4DecMediaObject_FWD_DEFINED__
#define __CMpeg4DecMediaObject_FWD_DEFINED__
typedef struct CMpeg4DecMediaObject CMpeg4DecMediaObject;
#endif
#ifndef __CMpeg43DecMediaObject_FWD_DEFINED__
#define __CMpeg43DecMediaObject_FWD_DEFINED__
typedef struct CMpeg43DecMediaObject CMpeg43DecMediaObject;
#endif
#ifndef __CMpeg4sDecMediaObject_FWD_DEFINED__
#define __CMpeg4sDecMediaObject_FWD_DEFINED__
typedef struct CMpeg4sDecMediaObject CMpeg4sDecMediaObject;
#endif
#ifndef __CMpeg4sDecMFT_FWD_DEFINED__
#define __CMpeg4sDecMFT_FWD_DEFINED__
typedef struct CMpeg4sDecMFT CMpeg4sDecMFT;
#endif
#ifndef __CZuneM4S2DecMediaObject_FWD_DEFINED__
#define __CZuneM4S2DecMediaObject_FWD_DEFINED__
typedef struct CZuneM4S2DecMediaObject CZuneM4S2DecMediaObject;
#endif
#ifndef __CMpeg4EncMediaObject_FWD_DEFINED__
#define __CMpeg4EncMediaObject_FWD_DEFINED__
typedef struct CMpeg4EncMediaObject CMpeg4EncMediaObject;
#endif
#ifndef __CMpeg4sEncMediaObject_FWD_DEFINED__
#define __CMpeg4sEncMediaObject_FWD_DEFINED__
typedef struct CMpeg4sEncMediaObject CMpeg4sEncMediaObject;
#endif
#ifndef __CMSSCDecMediaObject_FWD_DEFINED__
#define __CMSSCDecMediaObject_FWD_DEFINED__
typedef struct CMSSCDecMediaObject CMSSCDecMediaObject;
#endif
#ifndef __CMSSCEncMediaObject_FWD_DEFINED__
#define __CMSSCEncMediaObject_FWD_DEFINED__
typedef struct CMSSCEncMediaObject CMSSCEncMediaObject;
#endif
#ifndef __CMSSCEncMediaObject2_FWD_DEFINED__
#define __CMSSCEncMediaObject2_FWD_DEFINED__
typedef struct CMSSCEncMediaObject2 CMSSCEncMediaObject2;
#endif
#ifndef __CWMADecMediaObject_FWD_DEFINED__
#define __CWMADecMediaObject_FWD_DEFINED__
typedef struct CWMADecMediaObject CWMADecMediaObject;
#endif
#ifndef __CWMAEncMediaObject_FWD_DEFINED__
#define __CWMAEncMediaObject_FWD_DEFINED__
typedef struct CWMAEncMediaObject CWMAEncMediaObject;
#endif
#ifndef __CWMATransMediaObject_FWD_DEFINED__
#define __CWMATransMediaObject_FWD_DEFINED__
typedef struct CWMATransMediaObject CWMATransMediaObject;
#endif
#ifndef __CWMSPDecMediaObject_FWD_DEFINED__
#define __CWMSPDecMediaObject_FWD_DEFINED__
typedef struct CWMSPDecMediaObject CWMSPDecMediaObject;
#endif
#ifndef __CWMSPEncMediaObject_FWD_DEFINED__
#define __CWMSPEncMediaObject_FWD_DEFINED__
typedef struct CWMSPEncMediaObject CWMSPEncMediaObject;
#endif
#ifndef __CWMSPEncMediaObject2_FWD_DEFINED__
#define __CWMSPEncMediaObject2_FWD_DEFINED__
typedef struct CWMSPEncMediaObject2 CWMSPEncMediaObject2;
#endif
#ifndef __CWMTDecMediaObject_FWD_DEFINED__
#define __CWMTDecMediaObject_FWD_DEFINED__
typedef struct CWMTDecMediaObject CWMTDecMediaObject;
#endif
#ifndef __CWMTEncMediaObject_FWD_DEFINED__
#define __CWMTEncMediaObject_FWD_DEFINED__
typedef struct CWMTEncMediaObject CWMTEncMediaObject;
#endif
#ifndef __CWMVDecMediaObject_FWD_DEFINED__
#define __CWMVDecMediaObject_FWD_DEFINED__
typedef struct CWMVDecMediaObject CWMVDecMediaObject;
#endif
#ifndef __CWMVEncMediaObject2_FWD_DEFINED__
#define __CWMVEncMediaObject2_FWD_DEFINED__
typedef struct CWMVEncMediaObject2 CWMVEncMediaObject2;
#endif
#ifndef __CWMVXEncMediaObject_FWD_DEFINED__
#define __CWMVXEncMediaObject_FWD_DEFINED__
typedef struct CWMVXEncMediaObject CWMVXEncMediaObject;
#endif
#ifndef __CWMV9EncMediaObject_FWD_DEFINED__
#define __CWMV9EncMediaObject_FWD_DEFINED__
typedef struct CWMV9EncMediaObject CWMV9EncMediaObject;
#endif
#ifndef __CWVC1DecMediaObject_FWD_DEFINED__
#define __CWVC1DecMediaObject_FWD_DEFINED__
typedef struct CWVC1DecMediaObject CWVC1DecMediaObject;
#endif
#ifndef __CWVC1EncMediaObject_FWD_DEFINED__
#define __CWVC1EncMediaObject_FWD_DEFINED__
typedef struct CWVC1EncMediaObject CWVC1EncMediaObject;
#endif
#ifndef __CDeColorConvMediaObject_FWD_DEFINED__
#define __CDeColorConvMediaObject_FWD_DEFINED__
typedef struct CDeColorConvMediaObject CDeColorConvMediaObject;
#endif
#ifndef __CDVDecoderMediaObject_FWD_DEFINED__
#define __CDVDecoderMediaObject_FWD_DEFINED__
typedef struct CDVDecoderMediaObject CDVDecoderMediaObject;
#endif
#ifndef __CDVEncoderMediaObject_FWD_DEFINED__
#define __CDVEncoderMediaObject_FWD_DEFINED__
typedef struct CDVEncoderMediaObject CDVEncoderMediaObject;
#endif
#ifndef __CMpeg2DecMediaObject_FWD_DEFINED__
#define __CMpeg2DecMediaObject_FWD_DEFINED__
typedef struct CMpeg2DecMediaObject CMpeg2DecMediaObject;
#endif
#ifndef __CPK_DS_MPEG2Decoder_FWD_DEFINED__
#define __CPK_DS_MPEG2Decoder_FWD_DEFINED__
typedef struct CPK_DS_MPEG2Decoder CPK_DS_MPEG2Decoder;
#endif
#ifndef __CAC3DecMediaObject_FWD_DEFINED__
#define __CAC3DecMediaObject_FWD_DEFINED__
typedef struct CAC3DecMediaObject CAC3DecMediaObject;
#endif
#ifndef __CPK_DS_AC3Decoder_FWD_DEFINED__
#define __CPK_DS_AC3Decoder_FWD_DEFINED__
typedef struct CPK_DS_AC3Decoder CPK_DS_AC3Decoder;
#endif
#ifndef __CMP3DecMediaObject_FWD_DEFINED__
#define __CMP3DecMediaObject_FWD_DEFINED__
typedef struct CMP3DecMediaObject CMP3DecMediaObject;
#endif
#ifndef __CResamplerMediaObject_FWD_DEFINED__
#define __CResamplerMediaObject_FWD_DEFINED__
typedef struct CResamplerMediaObject CResamplerMediaObject;
#endif
#ifndef __CResizerMediaObject_FWD_DEFINED__
#define __CResizerMediaObject_FWD_DEFINED__
typedef struct CResizerMediaObject CResizerMediaObject;
#endif
#ifndef __CInterlaceMediaObject_FWD_DEFINED__
#define __CInterlaceMediaObject_FWD_DEFINED__
typedef struct CInterlaceMediaObject CInterlaceMediaObject;
#endif
#ifndef __CWMAudioLFXAPO_FWD_DEFINED__
#define __CWMAudioLFXAPO_FWD_DEFINED__
typedef struct CWMAudioLFXAPO CWMAudioLFXAPO;
#endif
#ifndef __CWMAudioGFXAPO_FWD_DEFINED__
#define __CWMAudioGFXAPO_FWD_DEFINED__
typedef struct CWMAudioGFXAPO CWMAudioGFXAPO;
#endif
#ifndef __CWMAudioSpdTxDMO_FWD_DEFINED__
#define __CWMAudioSpdTxDMO_FWD_DEFINED__
typedef struct CWMAudioSpdTxDMO CWMAudioSpdTxDMO;
#endif
#ifndef __CWMAudioAEC_FWD_DEFINED__
#define __CWMAudioAEC_FWD_DEFINED__
typedef struct CWMAudioAEC CWMAudioAEC;
#endif
#ifndef __CClusterDetectorDmo_FWD_DEFINED__
#define __CClusterDetectorDmo_FWD_DEFINED__
typedef struct CClusterDetectorDmo CClusterDetectorDmo;
#endif
#ifndef __CColorControlDmo_FWD_DEFINED__
#define __CColorControlDmo_FWD_DEFINED__
typedef struct CColorControlDmo CColorControlDmo;
#endif
#ifndef __CColorConvertDMO_FWD_DEFINED__
#define __CColorConvertDMO_FWD_DEFINED__
typedef struct CColorConvertDMO CColorConvertDMO;
#endif
#ifndef __CColorLegalizerDmo_FWD_DEFINED__
#define __CColorLegalizerDmo_FWD_DEFINED__
typedef struct CColorLegalizerDmo CColorLegalizerDmo;
#endif
#ifndef __CFrameInterpDMO_FWD_DEFINED__
#define __CFrameInterpDMO_FWD_DEFINED__
typedef struct CFrameInterpDMO CFrameInterpDMO;
#endif
#ifndef __CFrameRateConvertDmo_FWD_DEFINED__
#define __CFrameRateConvertDmo_FWD_DEFINED__
typedef struct CFrameRateConvertDmo CFrameRateConvertDmo;
#endif
#ifndef __CResizerDMO_FWD_DEFINED__
#define __CResizerDMO_FWD_DEFINED__
typedef struct CResizerDMO CResizerDMO;
#endif
#ifndef __CShotDetectorDmo_FWD_DEFINED__
#define __CShotDetectorDmo_FWD_DEFINED__
typedef struct CShotDetectorDmo CShotDetectorDmo;
#endif
#ifndef __CSmpteTransformsDmo_FWD_DEFINED__
#define __CSmpteTransformsDmo_FWD_DEFINED__
typedef struct CSmpteTransformsDmo CSmpteTransformsDmo;
#endif
#ifndef __CThumbnailGeneratorDmo_FWD_DEFINED__
#define __CThumbnailGeneratorDmo_FWD_DEFINED__
typedef struct CThumbnailGeneratorDmo CThumbnailGeneratorDmo;
#endif
#ifndef __CTocGeneratorDmo_FWD_DEFINED__
#define __CTocGeneratorDmo_FWD_DEFINED__
typedef struct CTocGeneratorDmo CTocGeneratorDmo;
#endif
#ifndef __CMPEGAACDecMediaObject_FWD_DEFINED__
#define __CMPEGAACDecMediaObject_FWD_DEFINED__
typedef struct CMPEGAACDecMediaObject CMPEGAACDecMediaObject;
#endif
#ifndef __CNokiaAACDecMediaObject_FWD_DEFINED__
#define __CNokiaAACDecMediaObject_FWD_DEFINED__
typedef struct CNokiaAACDecMediaObject CNokiaAACDecMediaObject;
#endif
#ifndef __CVodafoneAACDecMediaObject_FWD_DEFINED__
#define __CVodafoneAACDecMediaObject_FWD_DEFINED__
typedef struct CVodafoneAACDecMediaObject CVodafoneAACDecMediaObject;
#endif
#ifndef __CZuneAACCCDecMediaObject_FWD_DEFINED__
#define __CZuneAACCCDecMediaObject_FWD_DEFINED__
typedef struct CZuneAACCCDecMediaObject CZuneAACCCDecMediaObject;
#endif
#ifndef __CNokiaAACCCDecMediaObject_FWD_DEFINED__
#define __CNokiaAACCCDecMediaObject_FWD_DEFINED__
typedef struct CNokiaAACCCDecMediaObject CNokiaAACCCDecMediaObject;
#endif
#ifndef __CVodafoneAACCCDecMediaObject_FWD_DEFINED__
#define __CVodafoneAACCCDecMediaObject_FWD_DEFINED__
typedef struct CVodafoneAACCCDecMediaObject CVodafoneAACCCDecMediaObject;
#endif
#ifndef __CMPEG2EncoderDS_FWD_DEFINED__
#define __CMPEG2EncoderDS_FWD_DEFINED__
typedef struct CMPEG2EncoderDS CMPEG2EncoderDS;
#endif
#ifndef __CMPEG2EncoderVideoDS_FWD_DEFINED__
#define __CMPEG2EncoderVideoDS_FWD_DEFINED__
typedef struct CMPEG2EncoderVideoDS CMPEG2EncoderVideoDS;
#endif
#ifndef __CMPEG2EncoderAudioDS_FWD_DEFINED__
#define __CMPEG2EncoderAudioDS_FWD_DEFINED__
typedef struct CMPEG2EncoderAudioDS CMPEG2EncoderAudioDS;
#endif
#ifndef __CMPEG2AudDecoderDS_FWD_DEFINED__
#define __CMPEG2AudDecoderDS_FWD_DEFINED__
typedef struct CMPEG2AudDecoderDS CMPEG2AudDecoderDS;
#endif
#ifndef __CMPEG2VidDecoderDS_FWD_DEFINED__
#define __CMPEG2VidDecoderDS_FWD_DEFINED__
typedef struct CMPEG2VidDecoderDS CMPEG2VidDecoderDS;
#endif
#ifndef __CDTVAudDecoderDS_FWD_DEFINED__
#define __CDTVAudDecoderDS_FWD_DEFINED__
typedef struct CDTVAudDecoderDS CDTVAudDecoderDS;
#endif
#ifndef __CDTVVidDecoderDS_FWD_DEFINED__
#define __CDTVVidDecoderDS_FWD_DEFINED__
typedef struct CDTVVidDecoderDS CDTVVidDecoderDS;
#endif
#ifndef __CMSAC3Enc_FWD_DEFINED__
#define __CMSAC3Enc_FWD_DEFINED__
typedef struct CMSAC3Enc CMSAC3Enc;
#endif
#ifndef __CMSH264DecoderMFT_FWD_DEFINED__
#define __CMSH264DecoderMFT_FWD_DEFINED__
typedef struct CMSH264DecoderMFT CMSH264DecoderMFT;
#endif
#include "mediaobj.h"
#include "strmif.h"
typedef enum WMT_PROP_DATATYPE
{
	WMT_PROP_TYPE_DWORD = 0,
	WMT_PROP_TYPE_STRING = 1,
	WMT_PROP_TYPE_BINARY = 2,
	WMT_PROP_TYPE_BOOL = 3,
	WMT_PROP_TYPE_QWORD = 4,
	WMT_PROP_TYPE_WORD = 5,
	WMT_PROP_TYPE_GUID = 6
} WMT_PROP_DATATYPE;
extern RPC_IF_HANDLE __MIDL_itf_wmcodecdsp_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmcodecdsp_0000_0000_v0_0_s_ifspec;
#ifndef __IWMValidate_INTERFACE_DEFINED__
#define __IWMValidate_INTERFACE_DEFINED__
extern const IID IID_IWMValidate;
typedef struct IWMValidateVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMValidate * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMValidate * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMValidate * This);
	HRESULT(STDMETHODCALLTYPE * SetIdentifier) (IWMValidate * This, GUID guidValidationID);
	END_INTERFACE
}  IWMValidateVtbl;
interface IWMValidate
{
	CONST_VTBL struct IWMValidateVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMValidate_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMValidate_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMValidate_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMValidate_SetIdentifier(This,guidValidationID) ( (This)->lpVtbl -> SetIdentifier(This,guidValidationID) )
#endif
#endif
#ifndef __IValidateBinding_INTERFACE_DEFINED__
#define __IValidateBinding_INTERFACE_DEFINED__
extern const IID IID_IValidateBinding;
typedef struct IValidateBindingVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IValidateBinding * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IValidateBinding * This);
	ULONG(STDMETHODCALLTYPE * Release) (IValidateBinding * This);
	HRESULT(STDMETHODCALLTYPE * GetIdentifier) (IValidateBinding * This, GUID guidLicensorID, BYTE * pbEphemeron, DWORD cbEphemeron, BYTE ** ppbBlobValidationID, DWORD * pcbBlobSize);
	END_INTERFACE
}  IValidateBindingVtbl;
interface IValidateBinding
{
	CONST_VTBL struct IValidateBindingVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IValidateBinding_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IValidateBinding_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IValidateBinding_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IValidateBinding_GetIdentifier(This,guidLicensorID,pbEphemeron,cbEphemeron,ppbBlobValidationID,pcbBlobSize) ( (This)->lpVtbl -> GetIdentifier(This,guidLicensorID,pbEphemeron,cbEphemeron,ppbBlobValidationID,pcbBlobSize) )
#endif
#endif
#ifdef INITGUID
static const WCHAR *g_wszSpeechFormatCaps = L"SpeechFormatCap";
static const WCHAR *g_wszWMCPCodecName = L"_CODECNAME";
static const WCHAR *g_wszWMCPSupportedVBRModes = L"_SUPPORTEDVBRMODES";
#endif
#define WM_CODEC_ONEPASS_CBR 1
#define WM_CODEC_ONEPASS_VBR 2
#define WM_CODEC_TWOPASS_CBR 4
#define WM_CODEC_TWOPASS_VBR_UNCONSTRAINED   8
#define WM_CODEC_TWOPASS_VBR_PEAKCONSTRAINED 16
#ifdef INITGUID
static const WCHAR *g_wszWMCPAudioVBRSupported = L"_VBRENABLED";
static const WCHAR *g_wszWMCPAudioVBRQuality = L"_VBRQUALITY";
static const WCHAR *g_wszWMCPMaxPasses = L"_PASSESRECOMMENDED";
static const WCHAR *g_wszWMCPDefaultCrisp = L"_DEFAULTCRISP";
#endif
extern RPC_IF_HANDLE __MIDL_itf_wmcodecdsp_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmcodecdsp_0000_0002_v0_0_s_ifspec;
#ifndef __IWMVideoDecoderHurryup_INTERFACE_DEFINED__
#define __IWMVideoDecoderHurryup_INTERFACE_DEFINED__
extern const IID IID_IWMVideoDecoderHurryup;
typedef struct IWMVideoDecoderHurryupVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMVideoDecoderHurryup * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMVideoDecoderHurryup * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMVideoDecoderHurryup * This);
	HRESULT(STDMETHODCALLTYPE * SetHurryup) (IWMVideoDecoderHurryup * This, LONG lHurryup);
	HRESULT(STDMETHODCALLTYPE * GetHurryup) (IWMVideoDecoderHurryup * This, LONG * plHurryup);
	END_INTERFACE
}  IWMVideoDecoderHurryupVtbl;
interface IWMVideoDecoderHurryup
{
	CONST_VTBL struct IWMVideoDecoderHurryupVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMVideoDecoderHurryup_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMVideoDecoderHurryup_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMVideoDecoderHurryup_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMVideoDecoderHurryup_SetHurryup(This,lHurryup) ( (This)->lpVtbl -> SetHurryup(This,lHurryup) )
#define IWMVideoDecoderHurryup_GetHurryup(This,plHurryup) ( (This)->lpVtbl -> GetHurryup(This,plHurryup) )
#endif
#endif
#ifndef __IWMVideoForceKeyFrame_INTERFACE_DEFINED__
#define __IWMVideoForceKeyFrame_INTERFACE_DEFINED__
extern const IID IID_IWMVideoForceKeyFrame;
typedef struct IWMVideoForceKeyFrameVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMVideoForceKeyFrame * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMVideoForceKeyFrame * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMVideoForceKeyFrame * This);
	HRESULT(STDMETHODCALLTYPE * SetKeyFrame) (IWMVideoForceKeyFrame * This);
	END_INTERFACE
}  IWMVideoForceKeyFrameVtbl;
interface IWMVideoForceKeyFrame
{
	CONST_VTBL struct IWMVideoForceKeyFrameVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMVideoForceKeyFrame_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMVideoForceKeyFrame_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMVideoForceKeyFrame_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMVideoForceKeyFrame_SetKeyFrame(This) ( (This)->lpVtbl -> SetKeyFrame(This) )
#endif
#endif
#ifndef __IWMCodecStrings_INTERFACE_DEFINED__
#define __IWMCodecStrings_INTERFACE_DEFINED__
extern const IID IID_IWMCodecStrings;
typedef struct IWMCodecStringsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMCodecStrings * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMCodecStrings * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMCodecStrings * This);
	HRESULT(STDMETHODCALLTYPE * GetName) (IWMCodecStrings * This, DMO_MEDIA_TYPE * pmt, ULONG cchLength, LPWSTR szName, ULONG * pcchLength);
	HRESULT(STDMETHODCALLTYPE * GetDescription) (IWMCodecStrings * This, DMO_MEDIA_TYPE * pmt, ULONG cchLength, LPWSTR szDescription, ULONG * pcchLength);
	END_INTERFACE
}  IWMCodecStringsVtbl;
interface IWMCodecStrings
{
	CONST_VTBL struct IWMCodecStringsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMCodecStrings_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMCodecStrings_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMCodecStrings_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMCodecStrings_GetName(This,pmt,cchLength,szName,pcchLength) ( (This)->lpVtbl -> GetName(This,pmt,cchLength,szName,pcchLength) )
#define IWMCodecStrings_GetDescription(This,pmt,cchLength,szDescription,pcchLength) ( (This)->lpVtbl -> GetDescription(This,pmt,cchLength,szDescription,pcchLength) )
#endif
#endif
#ifndef __IWMCodecProps_INTERFACE_DEFINED__
#define __IWMCodecProps_INTERFACE_DEFINED__
extern const IID IID_IWMCodecProps;
typedef struct IWMCodecPropsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMCodecProps * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMCodecProps * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMCodecProps * This);
	HRESULT(STDMETHODCALLTYPE * GetFormatProp) (IWMCodecProps * This, DMO_MEDIA_TYPE * pmt, LPCWSTR pszName, WMT_PROP_DATATYPE * pType, BYTE * pValue, DWORD * pdwSize);
	HRESULT(STDMETHODCALLTYPE * GetCodecProp) (IWMCodecProps * This, DWORD dwFormat, LPCWSTR pszName, WMT_PROP_DATATYPE * pType, BYTE * pValue, DWORD * pdwSize);
	END_INTERFACE
}  IWMCodecPropsVtbl;
interface IWMCodecProps
{
	CONST_VTBL struct IWMCodecPropsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMCodecProps_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMCodecProps_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMCodecProps_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMCodecProps_GetFormatProp(This,pmt,pszName,pType,pValue,pdwSize) ( (This)->lpVtbl -> GetFormatProp(This,pmt,pszName,pType,pValue,pdwSize) )
#define IWMCodecProps_GetCodecProp(This,dwFormat,pszName,pType,pValue,pdwSize) ( (This)->lpVtbl -> GetCodecProp(This,dwFormat,pszName,pType,pValue,pdwSize) )
#endif
#endif
#ifndef __IWMCodecLeakyBucket_INTERFACE_DEFINED__
#define __IWMCodecLeakyBucket_INTERFACE_DEFINED__
extern const IID IID_IWMCodecLeakyBucket;
typedef struct IWMCodecLeakyBucketVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMCodecLeakyBucket * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMCodecLeakyBucket * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMCodecLeakyBucket * This);
	HRESULT(STDMETHODCALLTYPE * SetBufferSizeBits) (IWMCodecLeakyBucket * This, ULONG ulBufferSize);
	HRESULT(STDMETHODCALLTYPE * GetBufferSizeBits) (IWMCodecLeakyBucket * This, ULONG * pulBufferSize);
	HRESULT(STDMETHODCALLTYPE * SetBufferFullnessBits) (IWMCodecLeakyBucket * This, ULONG ulBufferFullness);
	HRESULT(STDMETHODCALLTYPE * GetBufferFullnessBits) (IWMCodecLeakyBucket * This, ULONG * pulBufferFullness);
	END_INTERFACE
}  IWMCodecLeakyBucketVtbl;
interface IWMCodecLeakyBucket
{
	CONST_VTBL struct IWMCodecLeakyBucketVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMCodecLeakyBucket_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMCodecLeakyBucket_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMCodecLeakyBucket_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMCodecLeakyBucket_SetBufferSizeBits(This,ulBufferSize) ( (This)->lpVtbl -> SetBufferSizeBits(This,ulBufferSize) )
#define IWMCodecLeakyBucket_GetBufferSizeBits(This,pulBufferSize) ( (This)->lpVtbl -> GetBufferSizeBits(This,pulBufferSize) )
#define IWMCodecLeakyBucket_SetBufferFullnessBits(This,ulBufferFullness) ( (This)->lpVtbl -> SetBufferFullnessBits(This,ulBufferFullness) )
#define IWMCodecLeakyBucket_GetBufferFullnessBits(This,pulBufferFullness) ( (This)->lpVtbl -> GetBufferFullnessBits(This,pulBufferFullness) )
#endif
#endif
#ifndef __IWMCodecOutputTimestamp_INTERFACE_DEFINED__
#define __IWMCodecOutputTimestamp_INTERFACE_DEFINED__
extern const IID IID_IWMCodecOutputTimestamp;
typedef struct IWMCodecOutputTimestampVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMCodecOutputTimestamp * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMCodecOutputTimestamp * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMCodecOutputTimestamp * This);
	HRESULT(STDMETHODCALLTYPE * GetNextOutputTime) (IWMCodecOutputTimestamp * This, REFERENCE_TIME * prtTime);
	END_INTERFACE
}  IWMCodecOutputTimestampVtbl;
interface IWMCodecOutputTimestamp
{
	CONST_VTBL struct IWMCodecOutputTimestampVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMCodecOutputTimestamp_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMCodecOutputTimestamp_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMCodecOutputTimestamp_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMCodecOutputTimestamp_GetNextOutputTime(This,prtTime) ( (This)->lpVtbl -> GetNextOutputTime(This,prtTime) )
#endif
#endif
#ifndef __IWMVideoDecoderReconBuffer_INTERFACE_DEFINED__
#define __IWMVideoDecoderReconBuffer_INTERFACE_DEFINED__
extern const IID IID_IWMVideoDecoderReconBuffer;
typedef struct IWMVideoDecoderReconBufferVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMVideoDecoderReconBuffer * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMVideoDecoderReconBuffer * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMVideoDecoderReconBuffer * This);
	HRESULT(STDMETHODCALLTYPE * GetReconstructedVideoFrameSize) (IWMVideoDecoderReconBuffer * This, DWORD * pdwSize);
	HRESULT(STDMETHODCALLTYPE * GetReconstructedVideoFrame) (IWMVideoDecoderReconBuffer * This, IMediaBuffer * pBuf);
	HRESULT(STDMETHODCALLTYPE * SetReconstructedVideoFrame) (IWMVideoDecoderReconBuffer * This, IMediaBuffer * pBuf);
	END_INTERFACE
}  IWMVideoDecoderReconBufferVtbl;
interface IWMVideoDecoderReconBuffer
{
	CONST_VTBL struct IWMVideoDecoderReconBufferVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMVideoDecoderReconBuffer_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMVideoDecoderReconBuffer_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMVideoDecoderReconBuffer_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMVideoDecoderReconBuffer_GetReconstructedVideoFrameSize(This,pdwSize) ( (This)->lpVtbl -> GetReconstructedVideoFrameSize(This,pdwSize) )
#define IWMVideoDecoderReconBuffer_GetReconstructedVideoFrame(This,pBuf) ( (This)->lpVtbl -> GetReconstructedVideoFrame(This,pBuf) )
#define IWMVideoDecoderReconBuffer_SetReconstructedVideoFrame(This,pBuf) ( (This)->lpVtbl -> SetReconstructedVideoFrame(This,pBuf) )
#endif
#endif
#ifndef __IWMCodecPrivateData_INTERFACE_DEFINED__
#define __IWMCodecPrivateData_INTERFACE_DEFINED__
extern const IID IID_IWMCodecPrivateData;
typedef struct IWMCodecPrivateDataVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMCodecPrivateData * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMCodecPrivateData * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMCodecPrivateData * This);
	HRESULT(STDMETHODCALLTYPE * SetPartialOutputType) (IWMCodecPrivateData * This, DMO_MEDIA_TYPE * pmt);
	HRESULT(STDMETHODCALLTYPE * GetPrivateData) (IWMCodecPrivateData * This, BYTE * pbData, ULONG * pcbData);
	END_INTERFACE
}  IWMCodecPrivateDataVtbl;
interface IWMCodecPrivateData
{
	CONST_VTBL struct IWMCodecPrivateDataVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMCodecPrivateData_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMCodecPrivateData_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMCodecPrivateData_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMCodecPrivateData_SetPartialOutputType(This,pmt) ( (This)->lpVtbl -> SetPartialOutputType(This,pmt) )
#define IWMCodecPrivateData_GetPrivateData(This,pbData,pcbData) ( (This)->lpVtbl -> GetPrivateData(This,pbData,pcbData) )
#endif
#endif
#ifndef __IWMSampleExtensionSupport_INTERFACE_DEFINED__
#define __IWMSampleExtensionSupport_INTERFACE_DEFINED__
extern const IID IID_IWMSampleExtensionSupport;
typedef struct IWMSampleExtensionSupportVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMSampleExtensionSupport * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMSampleExtensionSupport * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMSampleExtensionSupport * This);
	HRESULT(STDMETHODCALLTYPE * SetUseSampleExtensions) (IWMSampleExtensionSupport * This, BOOL fUseExtensions);
	END_INTERFACE
}  IWMSampleExtensionSupportVtbl;
interface IWMSampleExtensionSupport
{
	CONST_VTBL struct IWMSampleExtensionSupportVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMSampleExtensionSupport_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMSampleExtensionSupport_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMSampleExtensionSupport_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMSampleExtensionSupport_SetUseSampleExtensions(This,fUseExtensions) ( (This)->lpVtbl -> SetUseSampleExtensions(This,fUseExtensions) )
#endif
#endif
#ifndef __IWMResamplerProps_INTERFACE_DEFINED__
#define __IWMResamplerProps_INTERFACE_DEFINED__
typedef float ChMtxType;
extern const IID IID_IWMResamplerProps;
typedef struct IWMResamplerPropsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMResamplerProps * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMResamplerProps * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMResamplerProps * This);
	HRESULT(STDMETHODCALLTYPE * SetHalfFilterLength) (IWMResamplerProps * This, LONG lhalfFilterLen);
	HRESULT(STDMETHODCALLTYPE * SetUserChannelMtx) (IWMResamplerProps * This, ChMtxType * userChannelMtx);
	END_INTERFACE
}  IWMResamplerPropsVtbl;
interface IWMResamplerProps
{
	CONST_VTBL struct IWMResamplerPropsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMResamplerProps_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMResamplerProps_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMResamplerProps_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMResamplerProps_SetHalfFilterLength(This,lhalfFilterLen) ( (This)->lpVtbl -> SetHalfFilterLength(This,lhalfFilterLen) )
#define IWMResamplerProps_SetUserChannelMtx(This,userChannelMtx) ( (This)->lpVtbl -> SetUserChannelMtx(This,userChannelMtx) )
#endif
#endif
#ifndef __IWMResizerProps_INTERFACE_DEFINED__
#define __IWMResizerProps_INTERFACE_DEFINED__
extern const IID IID_IWMResizerProps;
typedef struct IWMResizerPropsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMResizerProps * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMResizerProps * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMResizerProps * This);
	HRESULT(STDMETHODCALLTYPE * SetResizerQuality) (IWMResizerProps * This, LONG lquality);
	HRESULT(STDMETHODCALLTYPE * SetInterlaceMode) (IWMResizerProps * This, LONG lmode);
	HRESULT(STDMETHODCALLTYPE * SetClipRegion) (IWMResizerProps * This, LONG lClipOriXSrc, LONG lClipOriYSrc, LONG lClipWidthSrc, LONG lClipHeightSrc);
	HRESULT(STDMETHODCALLTYPE * SetFullCropRegion) (IWMResizerProps * This, LONG lClipOriXSrc, LONG lClipOriYSrc, LONG lClipWidthSrc, LONG lClipHeightSrc, LONG lClipOriXDst, LONG lClipOriYDst, LONG lClipWidthDst, LONG lClipHeightDst);
	HRESULT(STDMETHODCALLTYPE * GetFullCropRegion) (IWMResizerProps * This, LONG * lClipOriXSrc, LONG * lClipOriYSrc, LONG * lClipWidthSrc, LONG * lClipHeightSrc, LONG * lClipOriXDst, LONG * lClipOriYDst, LONG * lClipWidthDst, LONG * lClipHeightDst);
	END_INTERFACE
}  IWMResizerPropsVtbl;
interface IWMResizerProps
{
	CONST_VTBL struct IWMResizerPropsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMResizerProps_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMResizerProps_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMResizerProps_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMResizerProps_SetResizerQuality(This,lquality) ( (This)->lpVtbl -> SetResizerQuality(This,lquality) )
#define IWMResizerProps_SetInterlaceMode(This,lmode) ( (This)->lpVtbl -> SetInterlaceMode(This,lmode) )
#define IWMResizerProps_SetClipRegion(This,lClipOriXSrc,lClipOriYSrc,lClipWidthSrc,lClipHeightSrc) ( (This)->lpVtbl -> SetClipRegion(This,lClipOriXSrc,lClipOriYSrc,lClipWidthSrc,lClipHeightSrc) )
#define IWMResizerProps_SetFullCropRegion(This,lClipOriXSrc,lClipOriYSrc,lClipWidthSrc,lClipHeightSrc,lClipOriXDst,lClipOriYDst,lClipWidthDst,lClipHeightDst) ( (This)->lpVtbl -> SetFullCropRegion(This,lClipOriXSrc,lClipOriYSrc,lClipWidthSrc,lClipHeightSrc,lClipOriXDst,lClipOriYDst,lClipWidthDst,lClipHeightDst) )
#define IWMResizerProps_GetFullCropRegion(This,lClipOriXSrc,lClipOriYSrc,lClipWidthSrc,lClipHeightSrc,lClipOriXDst,lClipOriYDst,lClipWidthDst,lClipHeightDst) ( (This)->lpVtbl -> GetFullCropRegion(This,lClipOriXSrc,lClipOriYSrc,lClipWidthSrc,lClipHeightSrc,lClipOriXDst,lClipOriYDst,lClipWidthDst,lClipHeightDst) )
#endif
#endif
#ifndef __IWMColorLegalizerProps_INTERFACE_DEFINED__
#define __IWMColorLegalizerProps_INTERFACE_DEFINED__
extern const IID IID_IWMColorLegalizerProps;
typedef struct IWMColorLegalizerPropsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMColorLegalizerProps * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMColorLegalizerProps * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMColorLegalizerProps * This);
	HRESULT(STDMETHODCALLTYPE * SetColorLegalizerQuality) (IWMColorLegalizerProps * This, LONG lquality);
	END_INTERFACE
}  IWMColorLegalizerPropsVtbl;
interface IWMColorLegalizerProps
{
	CONST_VTBL struct IWMColorLegalizerPropsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMColorLegalizerProps_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMColorLegalizerProps_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMColorLegalizerProps_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMColorLegalizerProps_SetColorLegalizerQuality(This,lquality) ( (This)->lpVtbl -> SetColorLegalizerQuality(This,lquality) )
#endif
#endif
#ifndef __IWMInterlaceProps_INTERFACE_DEFINED__
#define __IWMInterlaceProps_INTERFACE_DEFINED__
extern const IID IID_IWMInterlaceProps;
typedef struct IWMInterlacePropsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMInterlaceProps * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMInterlaceProps * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMInterlaceProps * This);
	HRESULT(STDMETHODCALLTYPE * SetProcessType) (IWMInterlaceProps * This, int iProcessType);
	HRESULT(STDMETHODCALLTYPE * SetInitInverseTeleCinePattern) (IWMInterlaceProps * This, int iInitPattern);
	HRESULT(STDMETHODCALLTYPE * SetLastFrame) (IWMInterlaceProps * This);
	END_INTERFACE
}  IWMInterlacePropsVtbl;
interface IWMInterlaceProps
{
	CONST_VTBL struct IWMInterlacePropsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMInterlaceProps_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMInterlaceProps_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMInterlaceProps_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMInterlaceProps_SetProcessType(This,iProcessType) ( (This)->lpVtbl -> SetProcessType(This,iProcessType) )
#define IWMInterlaceProps_SetInitInverseTeleCinePattern(This,iInitPattern) ( (This)->lpVtbl -> SetInitInverseTeleCinePattern(This,iInitPattern) )
#define IWMInterlaceProps_SetLastFrame(This) ( (This)->lpVtbl -> SetLastFrame(This) )
#endif
#endif
#ifndef __IWMFrameInterpProps_INTERFACE_DEFINED__
#define __IWMFrameInterpProps_INTERFACE_DEFINED__
extern const IID IID_IWMFrameInterpProps;
typedef struct IWMFrameInterpPropsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMFrameInterpProps * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMFrameInterpProps * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMFrameInterpProps * This);
	HRESULT(STDMETHODCALLTYPE * SetFrameRateIn) (IWMFrameInterpProps * This, LONG lFrameRate, LONG lScale);
	HRESULT(STDMETHODCALLTYPE * SetFrameRateOut) (IWMFrameInterpProps * This, LONG lFrameRate, LONG lScale);
	HRESULT(STDMETHODCALLTYPE * SetFrameInterpEnabled) (IWMFrameInterpProps * This, BOOL bFIEnabled);
	HRESULT(STDMETHODCALLTYPE * SetComplexityLevel) (IWMFrameInterpProps * This, int iComplexity);
	END_INTERFACE
}  IWMFrameInterpPropsVtbl;
interface IWMFrameInterpProps
{
	CONST_VTBL struct IWMFrameInterpPropsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMFrameInterpProps_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMFrameInterpProps_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMFrameInterpProps_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMFrameInterpProps_SetFrameRateIn(This,lFrameRate,lScale) ( (This)->lpVtbl -> SetFrameRateIn(This,lFrameRate,lScale) )
#define IWMFrameInterpProps_SetFrameRateOut(This,lFrameRate,lScale) ( (This)->lpVtbl -> SetFrameRateOut(This,lFrameRate,lScale) )
#define IWMFrameInterpProps_SetFrameInterpEnabled(This,bFIEnabled) ( (This)->lpVtbl -> SetFrameInterpEnabled(This,bFIEnabled) )
#define IWMFrameInterpProps_SetComplexityLevel(This,iComplexity) ( (This)->lpVtbl -> SetComplexityLevel(This,iComplexity) )
#endif
#endif
#ifndef __IWMColorConvProps_INTERFACE_DEFINED__
#define __IWMColorConvProps_INTERFACE_DEFINED__
extern const IID IID_IWMColorConvProps;
typedef struct IWMColorConvPropsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IWMColorConvProps * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IWMColorConvProps * This);
	ULONG(STDMETHODCALLTYPE * Release) (IWMColorConvProps * This);
	HRESULT(STDMETHODCALLTYPE * SetMode) (IWMColorConvProps * This, LONG lMode);
	HRESULT(STDMETHODCALLTYPE * SetFullCroppingParam) (IWMColorConvProps * This, LONG lSrcCropLeft, LONG lSrcCropTop, LONG lDstCropLeft, LONG lDstCropTop, LONG lCropWidth, LONG lCropHeight);
	END_INTERFACE
}  IWMColorConvPropsVtbl;
interface IWMColorConvProps
{
	CONST_VTBL struct IWMColorConvPropsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IWMColorConvProps_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IWMColorConvProps_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IWMColorConvProps_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IWMColorConvProps_SetMode(This,lMode) ( (This)->lpVtbl -> SetMode(This,lMode) )
#define IWMColorConvProps_SetFullCroppingParam(This,lSrcCropLeft,lSrcCropTop,lDstCropLeft,lDstCropTop,lCropWidth,lCropHeight) ( (This)->lpVtbl -> SetFullCroppingParam(This,lSrcCropLeft,lSrcCropTop,lDstCropLeft,lDstCropTop,lCropWidth,lCropHeight) )
#endif
#endif
#include <propkeydef.h>
#ifndef NO_MF_PROPKEYS
DEFINE_PROPERTYKEY(MFPKEY_STARTTIME,0x5cefee10, 0xe210, 0x45c6, 0x9e, 0x28, 0xf5, 0xa8, 0x73, 0x1c, 0x96, 0xc7, 0x01);
DEFINE_PROPERTYKEY(MFPKEY_STOPTIME, 0x5cefee10, 0xe210, 0x45c6, 0x9e, 0x28, 0xf5, 0xa8, 0x73, 0x1c, 0x96, 0xc7, 0x02);
DEFINE_PROPERTYKEY(MFPKEY_PROGRESS, 0x5cefee10, 0xe210, 0x45c6, 0x9e, 0x28, 0xf5, 0xa8, 0x73, 0x1c, 0x96, 0xc7, 0x03);
DEFINE_PROPERTYKEY(MFPKEY_PHANTOMING_ON, 0x12b53cb2, 0xe12e, 0x4579, 0x8a, 0xc3, 0xd0, 0x2f, 0x94, 0xf1, 0xe8, 0x9e, PID_FIRST_USABLE);
#define PHANTOMING_ENABLED_KEY_GUID (MFPKEY_PHANTOMING_ON.fmtid)
DEFINE_PROPERTYKEY(MFPKEY_ROOMCORR_PROFILE, 0xf311cdc7, 0xf45f, 0x4eb7, 0xa8, 0x64, 0x9d, 0xc1, 0xae, 0xeb, 0x7e, 0x6d, PID_FIRST_USABLE);
#define ROOM_PROFILE_KEY_GUID (MFPKEY_ROOMCORR_PROFILE.fmtid)
DEFINE_PROPERTYKEY(MFPKEY_BASSMGMT_CROSSOVER_FREQ, 0x61e8acb9, 0xf04f, 0x4f40, 0xa6, 0x5f, 0x8f, 0x49, 0xfa, 0xb3, 0xba, 0x10, PID_FIRST_USABLE);
#define CROSSOVER_FREQ_KEY_GUID (MFPKEY_BASSMGMT_CROSSOVER_FREQ.fmtid)
DEFINE_PROPERTYKEY(MFPKEY_BASSMGMT_SPKRBASSCONFIG, 0x7bfd170d, 0x4770, 0x4dc5, 0x92, 0x4d, 0x0b, 0x7b, 0x25, 0x2e, 0xe9, 0x18, PID_FIRST_USABLE);
#define FULL_RANGE_SPEAKERS_KEY_GUID (MFPKEY_BASSMGMT_SPKRBASSCONFIG.fmtid)
DEFINE_PROPERTYKEY(MFPKEY_BASSMGMT_BIGROOM, 0xc816a1a7, 0xa119, 0x48a5, 0x9a, 0xd2, 0x85, 0x45, 0x1f, 0x4b, 0x5a, 0x2e, PID_FIRST_USABLE);
#define BIG_ROOM_KEY_GUID (MFPKEY_BASSMGMT_BIGROOM.fmtid)
DEFINE_PROPERTYKEY(MFPKEY_BASSMGMT_NO_SUB, 0x5c3fd32e, 0x0d40, 0x4e2d, 0x99, 0xfb, 0xc9, 0x1e, 0x96, 0x42, 0x0b, 0xe7, PID_FIRST_USABLE);
#define NO_SUB_KEY_GUID (MFPKEY_BASSMGMT_NO_SUB.fmtid)
DEFINE_PROPERTYKEY(MFPKEY_BASSMGMT_INVERT_SUB, 0xb1103003, 0xc191, 0x4275, 0x9f, 0xa0, 0x8c, 0x28, 0x2c, 0x72, 0x4b, 0xce, PID_FIRST_USABLE);
#define INVERTED_SUB_KEY_GUID (MFPKEY_BASSMGMT_INVERT_SUB.fmtid)
DEFINE_PROPERTYKEY(MFPKEY_CORR_HEADPHONE, 0x445f3559, 0xb43f, 0x4b67, 0xb0, 0xf8, 0x32, 0xb6, 0x7c, 0xf9, 0x4b, 0x48, PID_FIRST_USABLE + 0);
DEFINE_PROPERTYKEY(MFPKEY_CORR_BASS_MANAGEMENT_MODE, 0x1864a4e0, 0xefc1, 0x45e6, 0xa6, 0x75, 0x57, 0x86, 0xcb, 0xf3, 0xb9, 0xf0, PID_FIRST_USABLE);
#define BASSMGMT_MODE_KEY_GUID (MFPKEY_CORR_BASS_MANAGEMENT_MODE.fmtid)
DEFINE_PROPERTYKEY(MFPKEY_CORR_MULTICHANNEL_MODE, 0x1b5c2483, 0x0839, 0x4523, 0xba, 0x87, 0x95, 0xf8, 0x9d, 0x27, 0xbd, 0x8c, PID_FIRST_USABLE);
#define MULTICHANNEL_MODE_KEY_GUID (MFPKEY_CORR_MULTICHANNEL_MODE.fmtid)
DEFINE_PROPERTYKEY(MFPKEY_CORR_LOUDNESS_EQUALIZATION_ON, 0xfc52a749, 0x4be9, 0x4510, 0x89, 0x6e, 0x96, 0x6b, 0xa6, 0x52, 0x59, 0x80, PID_FIRST_USABLE);
#define LEQ_ENABLED_KEY_GUID (MFPKEY_CORR_LOUDNESS_EQUALIZATION_ON.fmtid)
DEFINE_PROPERTYKEY(MFPKEY_CORR_ROOM_CORRECTION_ON, 0x01fb17e3, 0x796c, 0x4451, 0x81, 0x63, 0x68, 0xcd, 0xc1, 0x32, 0x1a, 0x60, PID_FIRST_USABLE);
#define ROOM_CORRECTION_ENABLED_KEY_GUID (MFPKEY_CORR_ROOM_CORRECTION_ON.fmtid)
DEFINE_PROPERTYKEY(MFPKEY_CORR_SPKRMASK, 0xd328d8fb, 0xd49f, 0x4aa9, 0xb7, 0x21, 0xe1, 0x71, 0xe9, 0x3a, 0xd5, 0x63, PID_FIRST_USABLE + 5);
DEFINE_PROPERTYKEY(MFPKEY_CORR_NORMALIZATION_GAIN, 0xd61b266c, 0x5aee, 0x456b, 0x84, 0x24, 0x72, 0x25, 0x47, 0x7d, 0xae, 0x77, PID_FIRST_USABLE + 0);
DEFINE_PROPERTYKEY(MFPKEY_BASS_BOOST_AMOUNT, 0xae7f0b2a, 0x96fc, 0x493a, 0x92, 0x47, 0xa0, 0x19, 0xf1, 0xf7, 0x01, 0xe1, PID_FIRST_USABLE);
#define BOOST_LEVEL_KEY_GUID (MFPKEY_BASS_BOOST_AMOUNT.fmtid)
DEFINE_PROPERTYKEY(MFPKEY_LOUDNESS_EQUALIZATION_RELEASE, 0x9c00eeed, 0xedce, 0x4cd8, 0xae, 0x08, 0xcb, 0x05, 0xe8, 0xef, 0x57, 0xa0, PID_FIRST_USABLE);
#define LEQ_RELEASE_KEY_GUID (MFPKEY_LOUDNESS_EQUALIZATION_RELEASE.fmtid)
DEFINE_PROPERTYKEY(PKEY_SYSFXUI_HIDE_MASK, 0xcb9c6bce, 0x7a25, 0x47aa, 0xb2, 0xbe, 0x6a, 0xd8, 0x44, 0x31, 0xed, 0xde, PID_FIRST_USABLE);
#define SYSFXUI_DONOTSHOW_LOUDNESSEQUALIZATION    0x01
#define SYSFXUI_DONOTSHOW_ROOMCORRECTION          0x02
#define SYSFXUI_DONOTSHOW_BASSMANAGEMENT          0x04
#define SYSFXUI_DONOTSHOW_BASSBOOST               0x08
#define SYSFXUI_DONOTSHOW_HEADPHONEVIRTUALIZATION 0x10
#define SYSFXUI_DONOTSHOW_VIRTUALSURROUND         0x20
#define SYSFXUI_DONOTSHOW_SPEAKERFILLING          0x40
#define SYSFXUI_DONOTSHOW_CHANNELPHANTOMING       0x80
DEFINE_PROPERTYKEY(MFPKEY_AUVRHP_SKIPHRTFREVERB, 0x30bbfebf, 0x24b4, 0x4198, 0x89, 0xba, 0xad, 0x11, 0xa2, 0xac, 0xd6, 0x1, 0x01);
DEFINE_PROPERTYKEY(MFPKEY_AUVRHP_SKIPPOSTREVERB, 0x30bbfebf, 0x24b4, 0x4198, 0x89, 0xba, 0xad, 0x11, 0xa2, 0xac, 0xd6, 0x1, 0x02);
DEFINE_PROPERTYKEY(MFPKEY_AUVRHP_ROOMMODEL, 0x73ae880e, 0x8258, 0x4e57, 0xb8, 0x5f, 0x7d, 0xaa, 0x6b, 0x7d, 0x5e, 0xf0, PID_FIRST_USABLE);
#define VIRTUALIZATION_MODE_KEY_GUID (MFPKEY_AUVRHP_ROOMMODEL.fmtid)
DEFINE_PROPERTYKEY(MFPKEY_AUVRHP_LFWEIGHT, 0x30bbfebf, 0x24b4, 0x4198, 0x89, 0xba, 0xad, 0x11, 0xa2, 0xac, 0xd6, 0x1, 0x04);
DEFINE_PROPERTYKEY(MFPKEY_AUVRHP_DOHRTFREVERB, 0x30bbfebf, 0x24b4, 0x4198, 0x89, 0xba, 0xad, 0x11, 0xa2, 0xac, 0xd6, 0x1, 0x05);
DEFINE_PROPERTYKEY(MFPKEY_AUVRHP_DOPOSTREVERB, 0x30bbfebf, 0x24b4, 0x4198, 0x89, 0xba, 0xad, 0x11, 0xa2, 0xac, 0xd6, 0x1, 0x06);
DEFINE_PROPERTYKEY(MFPKEY_AUVRHP_POSTREVERB_START, 0x30bbfebf, 0x24b4, 0x4198, 0x89, 0xba, 0xad, 0x11, 0xa2, 0xac, 0xd6, 0x1, 0x07);
DEFINE_PROPERTYKEY(MFPKEY_AUVRHP_POSTREVERB_LEN, 0x30bbfebf, 0x24b4, 0x4198, 0x89, 0xba, 0xad, 0x11, 0xa2, 0xac, 0xd6, 0x1, 0x08);
DEFINE_PROPERTYKEY(MFPKEY_WMRESAMP_FILTERQUALITY, 0xaf1adc73, 0xa210, 0x4b05, 0x96, 0x6e, 0x54, 0x91, 0xcf, 0xf4, 0x8b, 0x1d, 0x01);
DEFINE_PROPERTYKEY(MFPKEY_WMRESAMP_CHANNELMTX, 0xaf1adc73, 0xa210, 0x4b05, 0x96, 0x6e, 0x54, 0x91, 0xcf, 0xf4, 0x8b, 0x1d, 0x02);
DEFINE_PROPERTYKEY(MFPKEY_WMRESAMP_LOWPASS_BANDWIDTH, 0xaf1adc73, 0xa210, 0x4b05, 0x96, 0x6e, 0x54, 0x91, 0xcf, 0xf4, 0x8b, 0x1d, 0x03);
DEFINE_PROPERTYKEY(MFPKEY_WMAENC_AVGBYTESPERSEC, 0x11caf780, 0x921b, 0x42ef, 0xb7, 0x55, 0xf3, 0xa0, 0x53, 0xea, 0x1a, 0x41, 0x00);
DEFINE_PROPERTYKEY(MFPKEY_WMAENC_ORIGWAVEFORMAT, 0xf5c760a2, 0x3635, 0x48e1, 0x8f, 0xbd, 0x0e, 0x49, 0x81, 0x24, 0xe0, 0xa2, 0x00);
DEFINE_PROPERTYKEY(MFPKEY_PEAKCONSTRAINED, 0x6dbdf03b, 0xb05c, 0x4a03, 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4, 0x00);
DEFINE_PROPERTYKEY(MFPKEY_STAT_RAVG, 0x23a0e3b5, 0xfc62, 0x4ab8, 0xb7, 0x7c, 0x6e, 0x0c, 0x28, 0xab, 0x30, 0x16, 0x00);
DEFINE_PROPERTYKEY(MFPKEY_STAT_BAVG, 0x036f6b60, 0xad43, 0x485c, 0x86, 0xc6, 0x21, 0xa6, 0xdb, 0x2c, 0x1b, 0xa3, 0x00);
DEFINE_PROPERTYKEY(MFPKEY_STAT_RMAX, 0x82ff7c67, 0x6554, 0x4749, 0xa3, 0x2b, 0x36, 0x90, 0xdd, 0x1a, 0xe8, 0xde, 0x00);
DEFINE_PROPERTYKEY(MFPKEY_STAT_BMAX, 0xcd95e5b7, 0x9143, 0x47fb, 0xa9, 0xd2, 0x9d, 0xb7, 0x5f, 0x2e, 0x74, 0xbe, 0x00);
DEFINE_PROPERTYKEY(MFPKEY_CONSTRAINENCLATENCY, 0x6dbdf03b, 0xb05c, 0x4a03, 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4, 0x00 + 1);
DEFINE_PROPERTYKEY(MFPKEY_CONSTRAINDECLATENCY, 0x6dbdf03b, 0xb05c, 0x4a03, 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4, 0x00 + 2);
DEFINE_PROPERTYKEY(MFPKEY_CONSTRAINENCCOMPLEXITY, 0x6dbdf03b, 0xb05c, 0x4a03, 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4, 0x00 + 3);
DEFINE_PROPERTYKEY(MFPKEY_MAXENCLATENCYMS, 0x6dbdf03b, 0xb05c, 0x4a03, 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4, 0x00 + 4);
DEFINE_PROPERTYKEY(MFPKEY_MAXDECLATENCYMS, 0x6dbdf03b, 0xb05c, 0x4a03, 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4, 0x00 + 5);
DEFINE_PROPERTYKEY(MFPKEY_ENCCOMPLEXITY, 0x6dbdf03b, 0xb05c, 0x4a03, 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4, 0x00 + 6);
DEFINE_PROPERTYKEY(MFPKEY_CHECKDATACONSISTENCY2P, 0x6dbdf03b, 0xb05c, 0x4a03, 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4, 0x00 + 7);
DEFINE_PROPERTYKEY(MFPKEY_AVGCONSTRAINED, 0x6dbdf03b, 0xb05c, 0x4a03, 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4, 0x00 + 8);
DEFINE_PROPERTYKEY(MFPKEY_ENHANCED_WMA, 0x6dbdf03b, 0xb05c, 0x4a03, 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4, 0x00 + 20);
DEFINE_PROPERTYKEY(MFPKEY_REQUESTING_A_FRAMESIZE, 0x6dbdf03b, 0xb05c, 0x4a03, 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4, 0x00 + 21);
DEFINE_PROPERTYKEY(MFPKEY_PREFERRED_FRAMESIZE, 0x6dbdf03b, 0xb05c, 0x4a03, 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4, 0x00 + 22);
DEFINE_PROPERTYKEY(MFPKEY_WMA_ELEMENTARY_STREAM, 0x6dbdf03b, 0xb05c, 0x4a03, 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4, 0x00 + 23);
DEFINE_PROPERTYKEY(MFPKEY_MOST_RECENTLY_ENUMERATED_VBRQUALITY, 0x6dbdf03b, 0xb05c, 0x4a03, 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4, 0x00 + 24);
DEFINE_PROPERTYKEY(MFPKEY_DESIRED_VBRQUALITY, 0x6dbdf03b, 0xb05c, 0x4a03, 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4, 0x00 + 25);
DEFINE_PROPERTYKEY(MFPKEY_CONSTRAIN_ENUMERATED_VBRQUALITY, 0x6dbdf03b, 0xb05c, 0x4a03, 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4, 0x00 + 26);
DEFINE_PROPERTYKEY(MFPKEY_WMAENC_GENERATE_DRC_PARAMS, 0x6dbdf03b, 0xb05c, 0x4a03, 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4, 0x00 + 28);
DEFINE_PROPERTYKEY(MFPKEY_WMAENC_BUFFERLESSCBR, 0x6dbdf03b, 0xb05c, 0x4a03, 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4, 0x00 + 29);
DEFINE_PROPERTYKEY(MFPKEY_WMAENC_RTSPDIF, 0x6dbdf03b, 0xb05c, 0x4a03, 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4, 0x00 + 30);
DEFINE_PROPERTYKEY(MFPKEY_DYN_VBR_RAVG, 0x6dbdf03b, 0xb05c, 0x4a03, 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4, 0x00 + 9);
DEFINE_PROPERTYKEY(MFPKEY_DYN_BANDTRUNCATION, 0x6dbdf03b, 0xb05c, 0x4a03, 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4, 0x00 + 10);
DEFINE_PROPERTYKEY(MFPKEY_DYN_BANDTRUNC_QFLOOR, 0x6dbdf03b, 0xb05c, 0x4a03, 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4, 0x00 + 11);
DEFINE_PROPERTYKEY(MFPKEY_DYN_BANDTRUNC_QCEIL, 0x6dbdf03b, 0xb05c, 0x4a03, 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4, 0x00 + 12);
DEFINE_PROPERTYKEY(MFPKEY_DYN_BANDTRUNC_BWFLOOR, 0x6dbdf03b, 0xb05c, 0x4a03, 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4, 0x00 + 13);
DEFINE_PROPERTYKEY(MFPKEY_DYN_BANDTRUNC_BWCEIL, 0x6dbdf03b, 0xb05c, 0x4a03, 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4, 0x00 + 14);
DEFINE_PROPERTYKEY(MFPKEY_DYN_SIMPLEMASK, 0x6dbdf03b, 0xb05c, 0x4a03, 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4, 0x00 + 15);
DEFINE_PROPERTYKEY(MFPKEY_DYN_STEREO_PREPROC, 0x6dbdf03b, 0xb05c, 0x4a03, 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4, 0x00 + 16);
DEFINE_PROPERTYKEY(MFPKEY_DYN_VBR_BAVG, 0x6dbdf03b, 0xb05c, 0x4a03, 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4, 0x00 + 18);
DEFINE_PROPERTYKEY(MFPKEY_DYN_ALLOW_NOISESUB, 0x6dbdf03b, 0xb05c, 0x4a03, 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4, 0x00 + 19);
DEFINE_PROPERTYKEY(MFPKEY_DYN_ALLOW_PCMRANGELIMITING, 0x6dbdf03b, 0xb05c, 0x4a03, 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4, 0x00 + 27);
DEFINE_PROPERTYKEY(MFPKEY_WMADEC_HIRESOUTPUT, 0x8d3fe592, 0xeecc, 0x4f4e, 0x9a, 0xff, 0x5a, 0xf1, 0x67, 0x9d, 0x38, 0xd2, 0x00);
DEFINE_PROPERTYKEY(MFPKEY_WMADEC_SPKRCFG, 0x8fff67be, 0x977f, 0x41dc,0x8f, 0xaf, 0x23, 0xba, 0xc9, 0xa6, 0xdf, 0x73, 0x00);
DEFINE_PROPERTYKEY(MFPKEY_WMADEC_FOLDDOWN_MATRIX, 0x51647e9b, 0x6a7f, 0x4739, 0x9e, 0x0b, 0x29, 0x4b, 0x27, 0x89, 0x69, 0xeb, 0x00);
DEFINE_PROPERTYKEY(MFPKEY_WMADEC_DRCMODE, 0x7b613713, 0x3d38, 0x4cda, 0xaa, 0x61, 0x04, 0x78, 0xb1, 0xbc, 0xfc, 0x42, 0x00);
DEFINE_PROPERTYKEY(MFPKEY_WMADRC_AVGTARGET, 0x7b613713, 0x3d38, 0x4cda, 0xaa, 0x61, 0x04, 0x78, 0xb1, 0xbc, 0xfc, 0x42, 0x01);
DEFINE_PROPERTYKEY(MFPKEY_WMADRC_PEAKTARGET, 0x7b613713, 0x3d38, 0x4cda, 0xaa, 0x61, 0x04, 0x78, 0xb1, 0xbc, 0xfc, 0x42, 0x02);
DEFINE_PROPERTYKEY(MFPKEY_WMADRC_AVGREF, 0x7b613713, 0x3d38, 0x4cda, 0xaa, 0x61, 0x04, 0x78, 0xb1, 0xbc, 0xfc, 0x42, 0x03);
DEFINE_PROPERTYKEY(MFPKEY_WMADRC_PEAKREF, 0x7b613713, 0x3d38, 0x4cda, 0xaa, 0x61, 0x04, 0x78, 0xb1, 0xbc, 0xfc, 0x42, 0x04);
DEFINE_PROPERTYKEY(MFPKEY_WMADEC_LTRTOUTPUT, 0x7b613713, 0x3d38, 0x4cda, 0xaa, 0x61, 0x04, 0x78, 0xb1, 0xbc, 0xfc, 0x42, 0x05);
DEFINE_PROPERTYKEY(MFPKEY_WMAVOICE_ENC_MusicSpeechClassMode, 0xd9c8f5fe, 0x8682, 0x4347, 0x85, 0x7, 0x60, 0xa3, 0xf5, 0x1f, 0x33, 0xf1, PID_FIRST_USABLE);
DEFINE_PROPERTYKEY(MFPKEY_WMAVOICE_ENC_BufferWindow, 0xd9c8f5fe, 0x8682, 0x4347, 0x85, 0x7, 0x60, 0xa3, 0xf5, 0x1f, 0x33, 0xf1, PID_FIRST_USABLE + 1);
DEFINE_PROPERTYKEY(MFPKEY_WMAVOICE_ENC_DecoderDelay, 0xd9c8f5fe, 0x8682, 0x4347, 0x85, 0x7, 0x60, 0xa3, 0xf5, 0x1f, 0x33, 0xf1, PID_FIRST_USABLE + 2);
DEFINE_PROPERTYKEY(MFPKEY_WMAVOICE_ENC_EDL, 0xd9c8f5fe, 0x8682, 0x4347, 0x85, 0x7, 0x60, 0xa3, 0xf5, 0x1f, 0x33, 0xf1, PID_FIRST_USABLE + 3);
DEFINE_PROPERTYKEY(MFPKEY_WMAVOICE_ENC_RT_VariableRate, 0xd9c8f5fe, 0x8682, 0x4347, 0x85, 0x7, 0x60, 0xa3, 0xf5, 0x1f, 0x33, 0xf1, PID_FIRST_USABLE + 4);
DEFINE_PROPERTYKEY(MFPKEY_WMAVOICE_ENC_RT_BandWidth, 0xd9c8f5fe, 0x8682, 0x4347, 0x85, 0x7, 0x60, 0xa3, 0xf5, 0x1f, 0x33, 0xf1, PID_FIRST_USABLE + 5);
DEFINE_PROPERTYKEY(MFPKEY_WMAVOICE_ENC_RT_PacketLossMode, 0xd9c8f5fe, 0x8682, 0x4347, 0x85, 0x7, 0x60, 0xa3, 0xf5, 0x1f, 0x33, 0xf1, PID_FIRST_USABLE + 6);
DEFINE_PROPERTYKEY(MFPKEY_WMAVOICE_ENC_RT_MinBufferSize, 0xd9c8f5fe, 0x8682, 0x4347, 0x85, 0x7, 0x60, 0xa3, 0xf5, 0x1f, 0x33, 0xf1, PID_FIRST_USABLE + 7);
DEFINE_PROPERTYKEY(MFPKEY_WMAVOICE_DEC_RT_JitterControl, 0x165f69b, 0x80a1, 0x4ef8, 0xa4, 0xa9, 0xad, 0xa3, 0xb8, 0xa6, 0x89, 0xdd, PID_FIRST_USABLE);
DEFINE_PROPERTYKEY(MFPKEY_WMAVOICE_DEC_RT_JitterMode, 0x165f69b, 0x80a1, 0x4ef8, 0xa4, 0xa9, 0xad, 0xa3, 0xb8, 0xa6, 0x89, 0xdd, PID_FIRST_USABLE + 1);
DEFINE_PROPERTYKEY(MFPKEY_WMAVOICE_DEC_RT_PacketLossMode, 0x165f69b, 0x80a1, 0x4ef8, 0xa4, 0xa9, 0xad, 0xa3, 0xb8, 0xa6, 0x89, 0xdd, PID_FIRST_USABLE + 2);
DEFINE_PROPERTYKEY(MFPKEY_Decoder_MaxNumPCMSamplesWithPaddedSilence, 0xc678ba85, 0x1212, 0x43da, 90, 0xc3, 0xe7, 0x48, 0xb9, 0x24, 0x49, 0xec, 0x00);
DEFINE_PROPERTYKEY(MFPKEY_WMAAECMA_SYSTEM_MODE, 0x6f52c567, 0x360, 0x4bd2, 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39, PID_FIRST_USABLE + 0);
DEFINE_PROPERTYKEY(MFPKEY_WMAAECMA_DMO_SOURCE_MODE, 0x6f52c567, 0x360, 0x4bd2, 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39, PID_FIRST_USABLE + 1);
DEFINE_PROPERTYKEY(MFPKEY_WMAAECMA_DEVICE_INDEXES, 0x6f52c567, 0x360, 0x4bd2, 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39, PID_FIRST_USABLE + 2);
DEFINE_PROPERTYKEY(MFPKEY_WMAAECMA_FEATURE_MODE, 0x6f52c567, 0x360, 0x4bd2, 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39, PID_FIRST_USABLE + 3);
DEFINE_PROPERTYKEY(MFPKEY_WMAAECMA_FEATR_FRAME_SIZE, 0x6f52c567, 0x360, 0x4bd2, 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39, PID_FIRST_USABLE + 4);
DEFINE_PROPERTYKEY(MFPKEY_WMAAECMA_FEATR_ECHO_LENGTH, 0x6f52c567, 0x360, 0x4bd2, 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39, PID_FIRST_USABLE + 5);
DEFINE_PROPERTYKEY(MFPKEY_WMAAECMA_FEATR_NS, 0x6f52c567, 0x360, 0x4bd2, 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39, PID_FIRST_USABLE + 6);
DEFINE_PROPERTYKEY(MFPKEY_WMAAECMA_FEATR_AGC, 0x6f52c567, 0x360, 0x4bd2, 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39, PID_FIRST_USABLE + 7);
DEFINE_PROPERTYKEY(MFPKEY_WMAAECMA_FEATR_AES, 0x6f52c567, 0x360, 0x4bd2, 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39, PID_FIRST_USABLE + 8);
DEFINE_PROPERTYKEY(MFPKEY_WMAAECMA_FEATR_VAD, 0x6f52c567, 0x360, 0x4bd2, 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39, PID_FIRST_USABLE + 9);
DEFINE_PROPERTYKEY(MFPKEY_WMAAECMA_FEATR_CENTER_CLIP, 0x6f52c567, 0x360, 0x4bd2, 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39, PID_FIRST_USABLE + 10);
DEFINE_PROPERTYKEY(MFPKEY_WMAAECMA_FEATR_NOISE_FILL, 0x6f52c567, 0x360, 0x4bd2, 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39, PID_FIRST_USABLE + 11);
DEFINE_PROPERTYKEY(MFPKEY_WMAAECMA_RETRIEVE_TS_STATS, 0x6f52c567, 0x360, 0x4bd2, 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39, PID_FIRST_USABLE + 12);
DEFINE_PROPERTYKEY(MFPKEY_WMAAECMA_QUALITY_METRICS, 0x6f52c567, 0x360, 0x4bd2, 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39, PID_FIRST_USABLE + 13);
DEFINE_PROPERTYKEY(MFPKEY_WMAAECMA_MICARRAY_DESCPTR, 0x6f52c567, 0x360, 0x4bd2, 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39, PID_FIRST_USABLE + 14);
DEFINE_PROPERTYKEY(MFPKEY_WMAAECMA_DEVICEPAIR_GUID, 0x6f52c567, 0x360, 0x4bd2, 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39, PID_FIRST_USABLE + 15);
DEFINE_PROPERTYKEY(MFPKEY_WMAAECMA_FEATR_MICARR_MODE, 0x6f52c567, 0x360, 0x4bd2, 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39, PID_FIRST_USABLE + 16);
DEFINE_PROPERTYKEY(MFPKEY_WMAAECMA_FEATR_MICARR_BEAM, 0x6f52c567, 0x360, 0x4bd2, 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39, PID_FIRST_USABLE + 17);
DEFINE_PROPERTYKEY(MFPKEY_WMAAECMA_FEATR_MICARR_PREPROC, 0x6f52c567, 0x360, 0x4bd2, 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39, PID_FIRST_USABLE + 18);
DEFINE_PROPERTYKEY(MFPKEY_WMAAECMA_MIC_GAIN_BOUNDER, 0x6f52c567, 0x360, 0x4bd2, 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39, PID_FIRST_USABLE + 19);
DEFINE_PROPERTYKEY(MFPKEY_COLOR_BRIGHTNESS, 0x174fb0ec, 0x2695, 0x476c, 0x88, 0xaa, 0xd2, 0xb4, 0x1c, 0xe7, 0x5e, 0x67, 0x01);
DEFINE_PROPERTYKEY(MFPKEY_COLOR_CONTRAST, 0x174fb0ec, 0x2695, 0x476c, 0x88, 0xaa, 0xd2, 0xb4, 0x1c, 0xe7, 0x5e, 0x67, 0x02);
DEFINE_PROPERTYKEY(MFPKEY_COLOR_HUE, 0x174fb0ec, 0x2695, 0x476c, 0x88, 0xaa, 0xd2, 0xb4, 0x1c, 0xe7, 0x5e, 0x67, 0x03);
DEFINE_PROPERTYKEY(MFPKEY_COLOR_SATURATION, 0x174fb0ec, 0x2695, 0x476c, 0x88, 0xaa, 0xd2, 0xb4, 0x1c, 0xe7, 0x5e, 0x67, 0x04);
DEFINE_PROPERTYKEY(MFPKEY_COLORLEGALIZER_COMPLEXITY, 0xadd0e6c1, 0xcc30, 0x475d, 0x9e, 0x5a, 0xf1, 0xb1, 0x9f, 0x58, 0x7b, 0xe0, 0x01);
DEFINE_PROPERTYKEY(MFPKEY_COLORLEGALIZER_COMPLEXITYEX, 0xadd0e6c1, 0xcc30, 0x475d, 0x9e, 0x5a, 0xf1, 0xb1, 0x9f, 0x58, 0x7b, 0xe0, 0x02);
DEFINE_PROPERTYKEY(MFPKEY_COLORLEGALIZER_COMPLEXITYMAX, 0xadd0e6c1, 0xcc30, 0x475d, 0x9e, 0x5a, 0xf1, 0xb1, 0x9f, 0x58, 0x7b, 0xe0, 0x03);
DEFINE_PROPERTYKEY(MFPKEY_COLORLEGALIZER_COMPLEXITYLIVE, 0xadd0e6c1, 0xcc30, 0x475d, 0x9e, 0x5a, 0xf1, 0xb1, 0x9f, 0x58, 0x7b, 0xe0, 0x04);
DEFINE_PROPERTYKEY(MFPKEY_COLORLEGALIZER_COMPLEXITYOFFLINE, 0xadd0e6c1, 0xcc30, 0x475d, 0x9e, 0x5a, 0xf1, 0xb1, 0x9f, 0x58, 0x7b, 0xe0, 0x05);
DEFINE_PROPERTYKEY(MFPKEY_COLORLEGALIZER_bSVideo, 0xadd0e6c1, 0xcc30, 0x475d, 0x9e, 0x5a, 0xf1, 0xb1, 0x9f, 0x58, 0x7b, 0xe0, 0x06);
DEFINE_PROPERTYKEY(MFPKEY_CONV_INPUTFRAMERATE, 0x52f8d29b, 0x2e76, 0x43f7, 0xa4, 0xf6, 0x17, 0x17, 0x90, 0x4e, 0x35, 0xdf, 0x01);
DEFINE_PROPERTYKEY(MFPKEY_CONV_OUTPUTFRAMERATE, 0x52f8d29b, 0x2e76, 0x43f7, 0xa4, 0xf6, 0x17, 0x17, 0x90, 0x4e, 0x35, 0xdf, 0x02);
DEFINE_PROPERTYKEY(MFPKEY_CONV_REVERSEPLAYBACK, 0x52f8d29b, 0x2e76, 0x43f7, 0xa4, 0xf6, 0x17, 0x17, 0x90, 0x4e, 0x35, 0xdf, 0x03);
DEFINE_PROPERTYKEY(MFPKEY_SMPTE_MASKNUM, 0x427ce859, 0xd55c, 0x4f8e, 0xb0, 0x0e, 0x9c, 0xdf, 0x76, 0x15, 0x48, 0xa6, 0x01);
DEFINE_PROPERTYKEY(MFPKEY_SMPTE_OFFSETX, 0x427ce859, 0xd55c, 0x4f8e, 0xb0, 0x0e, 0x9c, 0xdf, 0x76, 0x15, 0x48, 0xa6, 0x02);
DEFINE_PROPERTYKEY(MFPKEY_SMPTE_OFFSETY, 0x427ce859, 0xd55c, 0x4f8e, 0xb0, 0x0e, 0x9c, 0xdf, 0x76, 0x15, 0x48, 0xa6, 0x03);
DEFINE_PROPERTYKEY(MFPKEY_SMPTE_REPLICATEX, 0x427ce859, 0xd55c, 0x4f8e, 0xb0, 0x0e, 0x9c, 0xdf, 0x76, 0x15, 0x48, 0xa6, 0x04);
DEFINE_PROPERTYKEY(MFPKEY_SMPTE_REPLICATEY, 0x427ce859, 0xd55c, 0x4f8e, 0xb0, 0x0e, 0x9c, 0xdf, 0x76, 0x15, 0x48, 0xa6, 0x05);
DEFINE_PROPERTYKEY(MFPKEY_SMPTE_REVERSE, 0x427ce859, 0xd55c, 0x4f8e, 0xb0, 0x0e, 0x9c, 0xdf, 0x76, 0x15, 0x48, 0xa6, 0x06);
DEFINE_PROPERTYKEY(MFPKEY_SMPTE_BORDERSOFTNESS, 0x427ce859, 0xd55c, 0x4f8e, 0xb0, 0x0e, 0x9c, 0xdf, 0x76, 0x15, 0x48, 0xa6, 0x07);
DEFINE_PROPERTYKEY(MFPKEY_SMPTE_BORDERWIDTH, 0x427ce859, 0xd55c, 0x4f8e, 0xb0, 0x0e, 0x9c, 0xdf, 0x76, 0x15, 0x48, 0xa6, 0x08);
DEFINE_PROPERTYKEY(MFPKEY_SMPTE_BORDERCOLOR, 0x427ce859, 0xd55c, 0x4f8e, 0xb0, 0x0e, 0x9c, 0xdf, 0x76, 0x15, 0x48, 0xa6, 0x09);
DEFINE_PROPERTYKEY(MFPKEY_DENOISE_FILTER, 0x7213c6ef, 0xcdd4, 0x4d09, 0xa8, 0x9e, 0xf3, 0xeb, 0xeb, 0xe5, 0xf5, 0x65, 0x01);
DEFINE_PROPERTYKEY(MFPKEY_DENOISE_CACHEFRAMES, 0x7213c6ef, 0xcdd4, 0x4d09, 0xa8, 0x9e, 0xf3, 0xeb, 0xeb, 0xe5, 0xf5, 0x65, 0x02);
DEFINE_PROPERTYKEY(MFPKEY_DENOISE_PROCFRAMES, 0x7213c6ef, 0xcdd4, 0x4d09, 0xa8, 0x9e, 0xf3, 0xeb, 0xeb, 0xe5, 0xf5, 0x65, 0x03);
DEFINE_PROPERTYKEY(MFPKEY_DENOISE_CAUSAL, 0x7213c6ef, 0xcdd4, 0x4d09, 0xa8, 0x9e, 0xf3, 0xeb, 0xeb, 0xe5, 0xf5, 0x65, 0x04);
DEFINE_PROPERTYKEY(MFPKEY_DENOISE_ITERATIVE, 0x7213c6ef, 0xcdd4, 0x4d09, 0xa8, 0x9e, 0xf3, 0xeb, 0xeb, 0xe5, 0xf5, 0x65, 0x05);
DEFINE_PROPERTYKEY(MFPKEY_DENOISE_PARA1, 0x7213c6ef, 0xcdd4, 0x4d09, 0xa8, 0x9e, 0xf3, 0xeb, 0xeb, 0xe5, 0xf5, 0x65, 0x06);
DEFINE_PROPERTYKEY(MFPKEY_DENOISE_PARA2, 0x7213c6ef, 0xcdd4, 0x4d09, 0xa8, 0x9e, 0xf3, 0xeb, 0xeb, 0xe5, 0xf5, 0x65, 0x07);
DEFINE_PROPERTYKEY(MFPKEY_DENOISE_PARA3, 0x7213c6ef, 0xcdd4, 0x4d09, 0xa8, 0x9e, 0xf3, 0xeb, 0xeb, 0xe5, 0xf5, 0x65, 0x08);
DEFINE_PROPERTYKEY(MFPKEY_DENOISE_PARA4, 0x7213c6ef, 0xcdd4, 0x4d09, 0xa8, 0x9e, 0xf3, 0xeb, 0xeb, 0xe5, 0xf5, 0x65, 0x09);
DEFINE_PROPERTYKEY(MFPKEY_DENOISE_PARA5, 0x7213c6ef, 0xcdd4, 0x4d09, 0xa8, 0x9e, 0xf3, 0xeb, 0xeb, 0xe5, 0xf5, 0x65, 0x10);
DEFINE_PROPERTYKEY(MFPKEY_CLUSTERDETECTOR_MAXCLUSTERS, 0xb79a666d, 0x8a9d, 0x463c, 0x9d, 0x97, 0xe1, 0xb1, 0x0, 0x45, 0xc1, 0x3a, 0x01);
DEFINE_PROPERTYKEY(MFPKEY_CLUSTERDETECTOR_MINCLUSTERDURATION, 0xb79a666d, 0x8a9d, 0x463c, 0x9d, 0x97, 0xe1, 0xb1, 0x0, 0x45, 0xc1, 0x3a, 0x02);
DEFINE_PROPERTYKEY(MFPKEY_CLUSTERDETECTOR_MAXCLUSTERDURATION, 0xb79a666d, 0x8a9d, 0x463c, 0x9d, 0x97, 0xe1, 0xb1, 0x0, 0x45, 0xc1, 0x3a, 0x03);
DEFINE_PROPERTYKEY(MFPKEY_FACEDETECTOR_SKIPFRAMES, 0xe1a124a6, 0x4fa8, 0x4ba5, 0xa2, 0xd8, 0xdc, 0x34, 0x53, 0x6f, 0x74, 0x26, 0x01);
DEFINE_PROPERTYKEY(MFPKEY_SHOTDETECTOR_TYPE, 0x7bcc7b0f, 0xdedf, 0x4a68, 0x96, 0xa2, 0xfc, 0xe0, 0x19, 0xed, 0x95, 0x6f, 0x01);
DEFINE_PROPERTYKEY(MFPKEY_SHOTDETECTOR_CLASSIFICATIONMETHOD, 0x7bcc7b0f, 0xdedf, 0x4a68, 0x96, 0xa2, 0xfc, 0xe0, 0x19, 0xed, 0x95, 0x6f, 0x02);
DEFINE_PROPERTYKEY(MFPKEY_SHOTDETECTOR_GLOBALTHRESHOLD, 0x7bcc7b0f, 0xdedf, 0x4a68, 0x96, 0xa2, 0xfc, 0xe0, 0x19, 0xed, 0x95, 0x6f, 0x03);
DEFINE_PROPERTYKEY(MFPKEY_SHOTDETECTOR_ADAPTIVETHRESHOLD, 0x7bcc7b0f, 0xdedf, 0x4a68, 0x96, 0xa2, 0xfc, 0xe0, 0x19, 0xed, 0x95, 0x6f, 0x04);
DEFINE_PROPERTYKEY(MFPKEY_SHOTDETECTOR_ADAPTIVEWINDOWSIZE, 0x7bcc7b0f, 0xdedf, 0x4a68, 0x96, 0xa2, 0xfc, 0xe0, 0x19, 0xed, 0x95, 0x6f, 0x05);
DEFINE_PROPERTYKEY(MFPKEY_SHOTDETECTOR_MINCLIPWEIGHT, 0x7bcc7b0f, 0xdedf, 0x4a68, 0x96, 0xa2, 0xfc, 0xe0, 0x19, 0xed, 0x95, 0x6f, 0x06);
DEFINE_PROPERTYKEY(MFPKEY_SHOTDETECTOR_MINCLIPDURATION, 0x7bcc7b0f, 0xdedf, 0x4a68, 0x96, 0xa2, 0xfc, 0xe0, 0x19, 0xed, 0x95, 0x6f, 0x07);
DEFINE_PROPERTYKEY(MFPKEY_SHOTDETECTOR_MAXCLIPDURATION, 0x7bcc7b0f, 0xdedf, 0x4a68, 0x96, 0xa2, 0xfc, 0xe0, 0x19, 0xed, 0x95, 0x6f, 0x08);
DEFINE_PROPERTYKEY(MFPKEY_SHOTDETECTOR_MAXCLIPSPERHOUR, 0x7bcc7b0f, 0xdedf, 0x4a68, 0x96, 0xa2, 0xfc, 0xe0, 0x19, 0xed, 0x95, 0x6f, 0x09);
DEFINE_PROPERTYKEY(MFPKEY_SHOTDETECTOR_PRESERVEMONOCLIPS, 0x7bcc7b0f, 0xdedf, 0x4a68, 0x96, 0xa2, 0xfc, 0xe0, 0x19, 0xed, 0x95, 0x6f, 0x0a);
DEFINE_PROPERTYKEY(MFPKEY_THUMBNAILGENERATOR_SEARCHWINDOWSIZE, 0xd9d7473f, 0x7d68, 0x4226, 0x98, 0x5c, 0x31, 0x85, 0x2c, 0x4c, 0x9e, 0x74, 0x01);
DEFINE_PROPERTYKEY(MFPKEY_THUMBNAILGENERATOR_MINCOLORENTROPY, 0xd9d7473f, 0x7d68, 0x4226, 0x98, 0x5c, 0x31, 0x85, 0x2c, 0x4c, 0x9e, 0x74, 0x02);
DEFINE_PROPERTYKEY(MFPKEY_THUMBNAILGENERATOR_MAXMOTIONACTIVITY, 0xd9d7473f, 0x7d68, 0x4226, 0x98, 0x5c, 0x31, 0x85, 0x2c, 0x4c, 0x9e, 0x74, 0x03);
DEFINE_PROPERTYKEY(MFPKEY_THUMBNAILGENERATOR_THUMBNAILWIDTH, 0xd9d7473f, 0x7d68, 0x4226, 0x98, 0x5c, 0x31, 0x85, 0x2c, 0x4c, 0x9e, 0x74, 0x04);
DEFINE_PROPERTYKEY(MFPKEY_THUMBNAILGENERATOR_THUMBNAILHEIGHT, 0xd9d7473f, 0x7d68, 0x4226, 0x98, 0x5c, 0x31, 0x85, 0x2c, 0x4c, 0x9e, 0x74, 0x05);
DEFINE_PROPERTYKEY(MFPKEY_THUMBNAILGENERATOR_THUMBNAILREADY, 0xd9d7473f, 0x7d68, 0x4226, 0x98, 0x5c, 0x31, 0x85, 0x2c, 0x4c, 0x9e, 0x74, 0x06);
DEFINE_PROPERTYKEY(MFPKEY_THUMBNAILGENERATOR_THUMBNAILFILENAME, 0xd9d7473f, 0x7d68, 0x4226, 0x98, 0x5c, 0x31, 0x85, 0x2c, 0x4c, 0x9e, 0x74, 0xff);
DEFINE_PROPERTYKEY(MFPKEY_TOCGENERATOR_TOCREADY, 0x7c109759, 0x3c27, 0x42ef, 0xa6, 0xa3, 0xce, 0xde, 0xf7, 0x5a, 0x35, 0xe9, 0x01);
DEFINE_PROPERTYKEY(MFPKEY_TOCGENERATOR_TOCOBJECT, 0x7c109759, 0x3c27, 0x42ef, 0xa6, 0xa3, 0xce, 0xde, 0xf7, 0x5a, 0x35, 0xe9, 0x02);
DEFINE_PROPERTYKEY(MFPKEY_TOCGENERATOR_SHOTDETECTOR_ON, 0x7c109759, 0x3c27, 0x42ef, 0xa6, 0xa3, 0xce, 0xde, 0xf7, 0x5a, 0x35, 0xe9, 0x03);
DEFINE_PROPERTYKEY(MFPKEY_TOCGENERATOR_CLUSTERDETECTOR_ON, 0x7c109759, 0x3c27, 0x42ef, 0xa6, 0xa3, 0xce, 0xde, 0xf7, 0x5a, 0x35, 0xe9, 0x04);
DEFINE_PROPERTYKEY(MFPKEY_TOCGENERATOR_THUMBNAILGENERATOR_ON, 0x7c109759, 0x3c27, 0x42ef, 0xa6, 0xa3, 0xce, 0xde, 0xf7, 0x5a, 0x35, 0xe9, 0x05);
DEFINE_PROPERTYKEY(MFPKEY_TOCGENERATOR_FEATUREEXTRACTOR_ON, 0x7c109759, 0x3c27, 0x42ef, 0xa6, 0xa3, 0xce, 0xde, 0xf7, 0x5a, 0x35, 0xe9, 0x06);
DEFINE_PROPERTYKEY(MFPKEY_TOCGENERATOR_FACEDETECTOR_ON, 0x7c109759, 0x3c27, 0x42ef, 0xa6, 0xa3, 0xce, 0xde, 0xf7, 0x5a, 0x35, 0xe9, 0x07);
DEFINE_PROPERTYKEY(MFPKEY_TOCGENERATOR_USEENDSIGNAL, 0x7c109759, 0x3c27, 0x42ef, 0xa6, 0xa3, 0xce, 0xde, 0xf7, 0x5a, 0x35, 0xe9, 0xfa);
DEFINE_PROPERTYKEY(MFPKEY_TOCGENERATOR_ENDSIGNAL, 0x7c109759, 0x3c27, 0x42ef, 0xa6, 0xa3, 0xce, 0xde, 0xf7, 0x5a, 0x35, 0xe9, 0xfb);
DEFINE_PROPERTYKEY(MFPKEY_TOCGENERATOR_ENDTIME, 0x7c109759, 0x3c27, 0x42ef, 0xa6, 0xa3, 0xce, 0xde, 0xf7, 0x5a, 0x35, 0xe9, 0xfc);
DEFINE_PROPERTYKEY(MFPKEY_TOCGENERATOR_CURRENTTIME, 0x7c109759, 0x3c27, 0x42ef, 0xa6, 0xa3, 0xce, 0xde, 0xf7, 0x5a, 0x35, 0xe9, 0xfd);
DEFINE_PROPERTYKEY(MFPKEY_TOCGENERATOR_PROCESSEDFRAMES, 0x7c109759, 0x3c27, 0x42ef, 0xa6, 0xa3, 0xce, 0xde, 0xf7, 0x5a, 0x35, 0xe9, 0xfe);
DEFINE_PROPERTYKEY(MFPKEY_TOCGENERATOR_INDEXFILENAME, 0x7c109759, 0x3c27, 0x42ef, 0xa6, 0xa3, 0xce, 0xde, 0xf7, 0x5a, 0x35, 0xe9, 0xff);
DEFINE_PROPERTYKEY(MFPKEY_DXVA_ENABLED, 0x58e28605, 0x1d51, 0x48ed, 0xa3, 0xeb, 0xf, 0x9b, 0xaf, 0x78, 0x5f, 0xbd, 0x01);
DEFINE_PROPERTYKEY(MFPKEY_FI_SUPPORTED, 0x5ce18788, 0xb992, 0x49a7, 0xa4, 0xf1, 0x60, 0xea, 0x21, 0xca, 0xa5, 0x5f, 0x02);
DEFINE_PROPERTYKEY(MFPKEY_FI_ENABLED, 0xe020c4ca, 0x3bdd, 0x40ec, 0xbc, 0xf4, 0x40, 0x39, 0xb1, 0x45, 0xe, 0xb8, 0x03);
DEFINE_PROPERTYKEY(MFPKEY_DECODER_DEINTERLACING, 0xc6281f, 0x4be6, 0x4e44, 0x9e, 0xd8, 0x9e, 0xc5, 0x42, 0x23, 0x16, 0xe4, 0x04);
DEFINE_PROPERTYKEY(MFPKEY_POSTPROCESSMODE, 0xc6281f, 0x4be6, 0x4e44, 0x9e, 0xd8, 0x9e, 0xc5, 0x42, 0x23, 0x16, 0xe4, 0x05);
DEFINE_PROPERTYKEY(MFPKEY_NUMTHREADSDEC, 0xc6281f, 0x4be6, 0x4e44, 0x9e, 0xd8, 0x9e, 0xc5, 0x42, 0x23, 0x16, 0xe4, 0x06);
DEFINE_PROPERTYKEY(MFPKEY_AVDecVideoSWPowerLevel, 0xfb5d2347, 0x4dd8, 0x4509, 0xae, 0xd0, 0xdb, 0x5f, 0xa9, 0xaa, 0x93, 0xf4, 0x08);
DEFINE_PROPERTYKEY(MFPKEY_AVGFRAMERATE, 0x41d700d6, 0x95b1, 0x4e3f, 0xb7, 0x59, 0x2d, 0x66, 0xd8, 0xc7, 0xad, 0xa2, 0x01);
DEFINE_PROPERTYKEY(MFPKEY_BUFFERFULLNESSINFIRSTBYTE, 0xb69dc3c5, 0x64c4, 0x4757, 0x99, 0xcb, 0x5d, 0x58, 0xf, 0xd5, 0x65, 0x9e, 0x02);
DEFINE_PROPERTYKEY(MFPKEY_PASSESRECOMMENDED, 0x38bdceea, 0x393e, 0x4f9a, 0x8d, 0xc3, 0x80, 0x2c, 0xc4, 0x5, 0x83, 0x8f, 0x03);
DEFINE_PROPERTYKEY(MFPKEY_DECODERCOMPLEXITYPROFILE, 0xc0d912d6, 0x14da, 0x4d31, 0x8d, 0x83, 0xd1, 0x8, 0x91, 0x5e, 0x8d, 0x77, 0x04);
DEFINE_PROPERTYKEY(MFPKEY_TOTALFRAMES, 0xce5f1e3c, 0xd3d4, 0x4c3f, 0x88, 0xc8, 0x1, 0xe9, 0x89, 0xd9, 0x98, 0xd2, 0x05);
DEFINE_PROPERTYKEY(MFPKEY_CODEDFRAMES, 0x62872b55, 0xfe0e, 0x4930, 0xa6, 0xd2, 0xcc, 0xaa, 0x37, 0xe8, 0xf5, 0x35, 0x06);
DEFINE_PROPERTYKEY(MFPKEY_ZEROBYTEFRAMES, 0x8f04aba4, 0x313d, 0x40fb, 0x80, 0x31, 0x31, 0x51, 0x78, 0x13, 0xd9, 0xef, 0x07);
DEFINE_PROPERTYKEY(MFPKEY_ENDOFPASS, 0xb2030f2a, 0x8bbc, 0x46f8, 0xa6, 0x4b, 0xa9, 0x8f, 0xf7, 0xfc, 0xf0, 0x2a, 0x08);
DEFINE_PROPERTYKEY(MFPKEY_DATARATE, 0xe0db0807, 0x8003, 0x4880, 0xac, 0x11, 0x61, 0xb7, 0x3f, 0x33, 0xdc, 0x60, 0x09);
DEFINE_PROPERTYKEY(MFPKEY_KEYDIST, 0x18d6f8c5, 0x2416, 0x4d7b, 0x90, 0xd7, 0x9f, 0x3f, 0x21, 0xe7, 0x52, 0xb4, 0x0a);
DEFINE_PROPERTYKEY(MFPKEY_CRISP, 0x2985f772, 0x3af2, 0x4d15, 0x8c, 0xfa, 0x8a, 0x96, 0x2f, 0xf3, 0x20, 0x40, 0x0b);
DEFINE_PROPERTYKEY(MFPKEY_FOURCC, 0x593e3f2e, 0xf84d, 0x4e85, 0xb6, 0x8d, 0xf6, 0x69, 0x40, 0xe, 0xda, 0xbc, 0x0c);
DEFINE_PROPERTYKEY(MFPKEY_VIDEOWINDOW, 0xc1c96060, 0x76f0, 0x47d4, 0xa8, 0x75, 0x5b, 0xdd, 0xa9, 0xd, 0xf5, 0xe9, 0x0d);
DEFINE_PROPERTYKEY(MFPKEY_FRAMECOUNT, 0x75028eb4, 0x4853, 0x44d3, 0x88, 0xa3, 0xe4, 0x99, 0xf8, 0x9d, 0x22, 0x7f, 0x0e);
DEFINE_PROPERTYKEY(MFPKEY_LIVEENCODE, 0x3ffa1e60, 0x5514, 0x4634, 0x86, 0xe6, 0x1f, 0x3b, 0x7c, 0x54, 0x51, 0x43, 0x0f);
DEFINE_PROPERTYKEY(MFPKEY_COMPLEXITY, 0x44fa08c7, 0x92f5, 0x45dc, 0x83, 0x76, 0x8d, 0x1d, 0x32, 0x4c, 0x65, 0x2a, 0x10);
DEFINE_PROPERTYKEY(MFPKEY_COMPLEXITYEX, 0xd6e48f93, 0xfd47, 0x47a3, 0x92, 0x62, 0x8a, 0xef, 0xb5, 0x53, 0x3, 0x32, 0x11);
DEFINE_PROPERTYKEY(MFPKEY_ASFOVERHEADPERFRAME, 0xeac7502, 0x1957, 0x4beb, 0x91, 0x4d, 0x88, 0x5f, 0x85, 0xe7, 0x54, 0x36, 0x12);
DEFINE_PROPERTYKEY(MFPKEY_PASSESUSED, 0xb1653ac1, 0xcb7d, 0x43ee, 0x84, 0x54, 0x3f, 0x9d, 0x81, 0x1b, 0x3, 0x31, 0x13);
DEFINE_PROPERTYKEY(MFPKEY_VBRENABLED, 0xe48d9459, 0x6abe, 0x4eb5, 0x92, 0x11, 0x60, 0x8, 0xc, 0x1a, 0xb9, 0x84, 0x14);
DEFINE_PROPERTYKEY(MFPKEY_VBRQUALITY, 0xf97b3f3a, 0x9eff, 0x4ac9, 0x82, 0x47, 0x35, 0xb3, 0xe, 0xb9, 0x25, 0xf4, 0x15);
DEFINE_PROPERTYKEY(MFPKEY_RAVG, 0x14b2aae6, 0x2987, 0x460a, 0x8b, 0x22, 0x9c, 0x7, 0x7c, 0x55, 0xd0, 0x5e, 0x16);
DEFINE_PROPERTYKEY(MFPKEY_BAVG, 0x10174e76, 0xe0ca, 0x4a39, 0x94, 0x8c, 0x85, 0x10, 0xc2, 0x32, 0x32, 0x76, 0x17);
DEFINE_PROPERTYKEY(MFPKEY_RMAX, 0x7d8dd246, 0xaaf4, 0x4a24, 0x81, 0x66, 0x19, 0x39, 0x6b, 0x6, 0xef, 0x69, 0x18);
DEFINE_PROPERTYKEY(MFPKEY_BMAX, 0xff365211, 0x21b6, 0x4134, 0xab, 0x7c, 0x52, 0x39, 0x3a, 0x8f, 0x80, 0xf6, 0x19);
DEFINE_PROPERTYKEY(MFPKEY_INTERLACEDCODINGENABLED, 0x56976073, 0x6c3, 0x4b3b, 0xad, 0x41, 0xb7, 0x41, 0x7f, 0xce, 0x84, 0x74, 0x1a);
DEFINE_PROPERTYKEY(MFPKEY_PRODUCEDUMMYFRAMES, 0x61714bc6, 0x8a1, 0x49d1, 0xb8, 0x27, 0xa3, 0x3a, 0xad, 0xa9, 0x55, 0x26, 0x1b);
DEFINE_PROPERTYKEY(MFPKEY_DECODERCOMPLEXITYREQUESTED, 0xb0d7d4a7, 0x422b, 0x44c3, 0x97, 0xb4, 0xb9, 0x76, 0xc, 0xce, 0xee, 0xa9, 0x1c);
DEFINE_PROPERTYKEY(MFPKEY_DROPPEDFRAMES, 0xbdb5afd3, 0x4027, 0x4882, 0x80, 0x6c, 0x41, 0x62, 0xe4, 0xa7, 0xa3, 0xf0, 0x1d);
DEFINE_PROPERTYKEY(MFPKEY_CODEDNONZEROFRAMES, 0x7adf5b69, 0x1e3f, 0x42d3, 0x99, 0x1d, 0xf8, 0x1e, 0xc, 0xeb, 0xe9, 0x3e, 0x1e);
DEFINE_PROPERTYKEY(MFPKEY_QPPERFRAME, 0x4e91bf89, 0x665a, 0x49da, 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28, 0x1f);
DEFINE_PROPERTYKEY(MFPKEY_VOLHEADERFORREENCODE, 0x4e91bf89, 0x665a, 0x49da, 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28, 0x21);
DEFINE_PROPERTYKEY(MFPKEY_REENCDURATION, 0x4e91bf89, 0x665a, 0x49da, 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28, 0x22);
DEFINE_PROPERTYKEY(MFPKEY_REENCSTARTBUFFERSIZE, 0x4e91bf89, 0x665a, 0x49da, 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28, 0x23);
DEFINE_PROPERTYKEY(MFPKEY_REENCENDBUFFERSIZE, 0x4e91bf89, 0x665a, 0x49da, 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28, 0x24);
DEFINE_PROPERTYKEY(MFPKEY_REENCQPREF, 0x4e91bf89, 0x665a, 0x49da, 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28, 0x25);
DEFINE_PROPERTYKEY(MFPKEY_DENOISEOPTION, 0x4e91bf89, 0x665a, 0x49da, 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28, 0x26);
DEFINE_PROPERTYKEY(MFPKEY_FULLFRAMERATE, 0x4e91bf89, 0x665a, 0x49da, 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28, 0x2d);
DEFINE_PROPERTYKEY(MFPKEY_MOTIONSEARCHRANGE, 0x4e91bf89, 0x665a, 0x49da, 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28, 0x2e);
DEFINE_PROPERTYKEY(MFPKEY_DELTAMVRANGEINDEX, 0x4e91bf89, 0x665a, 0x49da, 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28, 0x2f);
DEFINE_PROPERTYKEY(MFPKEY_NUMBFRAMES, 0x4e91bf89, 0x665a, 0x49da, 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28, 0x30);
DEFINE_PROPERTYKEY(MFPKEY_RDSUBPIXELSEARCH, 0x4e91bf89, 0x665a, 0x49da, 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28, 0x31);
DEFINE_PROPERTYKEY(MFPKEY_BDELTAQP, 0x4e91bf89, 0x665a, 0x49da, 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28, 0x32);
DEFINE_PROPERTYKEY(MFPKEY_FORCEFRAMEWIDTH, 0x4e91bf89, 0x665a, 0x49da, 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28, 0x33);
DEFINE_PROPERTYKEY(MFPKEY_FORCEFRAMEHEIGHT, 0x4e91bf89, 0x665a, 0x49da, 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28, 0x34);
DEFINE_PROPERTYKEY(MFPKEY_RANGEREDUX, 0x4e91bf89, 0x665a, 0x49da, 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28, 0x35);
DEFINE_PROPERTYKEY(MFPKEY_LOOKAHEAD, 0x4e91bf89, 0x665a, 0x49da, 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28, 0x36);
DEFINE_PROPERTYKEY(MFPKEY_VIDEOSCALING, 0x4e91bf89, 0x665a, 0x49da, 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28, 0x37);
DEFINE_PROPERTYKEY(MFPKEY_PERCEPTUALOPTLEVEL, 0x4e91bf89, 0x665a, 0x49da, 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28, 0x38);
DEFINE_PROPERTYKEY(MFPKEY_FORCEMEDIANSETTING, 0x4e91bf89, 0x665a, 0x49da, 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28, 0x39);
DEFINE_PROPERTYKEY(MFPKEY_NUMTHREADS, 0x4e91bf89, 0x665a, 0x49da, 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28, 0x3a);
DEFINE_PROPERTYKEY(MFPKEY_LOOPFILTER, 0x4e91bf89, 0x665a, 0x49da, 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28, 0x3b);
DEFINE_PROPERTYKEY(MFPKEY_NOISEEDGEREMOVAL, 0x4e91bf89, 0x665a, 0x49da, 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28, 0x3c);
DEFINE_PROPERTYKEY(MFPKEY_VTYPE, 0x4e91bf89, 0x665a, 0x49da, 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28, 0x3d);
DEFINE_PROPERTYKEY(MFPKEY_CLOSEDENTRYPOINT, 0x4e91bf89, 0x665a, 0x49da, 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28, 0x3f);
DEFINE_PROPERTYKEY(MFPKEY_MOTIONSEARCHLEVEL, 0x4e91bf89, 0x665a, 0x49da, 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28, 0x40);
DEFINE_PROPERTYKEY(MFPKEY_MOTIONMATCHMETHOD, 0x4e91bf89, 0x665a, 0x49da, 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28, 0x41);
DEFINE_PROPERTYKEY(MFPKEY_MACROBLOCKMODECOSTMETHOD, 0x4e91bf89, 0x665a, 0x49da, 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28, 0x42);
DEFINE_PROPERTYKEY(MFPKEY_COMPRESSIONOPTIMIZATIONTYPE, 0x4e91bf89, 0x665a, 0x49da, 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28, 0x43);
DEFINE_PROPERTYKEY(MFPKEY_PERIODICALSPDISTANCE, 0x4e91bf89, 0x665a, 0x49da, 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28, 0x46);
DEFINE_PROPERTYKEY(MFPKEY_ENCODERCOMPLEXITY, 0x4e91bf89, 0x665a, 0x49da, 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28, 0x47);
DEFINE_PROPERTYKEY(MFPKEY_USERDATASIZE, 0x4e91bf89, 0x665a, 0x49da, 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28, 0x48);
DEFINE_PROPERTYKEY(MFPKEY_LETTERBOXPRESENT, 0x4e91bf89, 0x665a, 0x49da, 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28, 0x49);
DEFINE_PROPERTYKEY(MFPKEY_SCENECHANGE, 0x4e91bf89, 0x665a, 0x49da, 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28, 0x4a);
DEFINE_PROPERTYKEY(MFPKEY_VARIABLEGOP, 0x4e91bf89, 0x665a, 0x49da, 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28, 0x4b);
DEFINE_PROPERTYKEY(MFPKEY_SCENECHANGEI, 0x4e91bf89, 0x665a, 0x49da, 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28, 0x4c);
DEFINE_PROPERTYKEY(MFPKEY_LOOKAHEADRC, 0x4e91bf89, 0x665a, 0x49da, 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28, 0x4d);
DEFINE_PROPERTYKEY(MFPKEY_DQUANTOPTION, 0x4e91bf89, 0x665a, 0x49da, 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28, 0x4e);
DEFINE_PROPERTYKEY(MFPKEY_DQUANTSTRENGTH, 0x4e91bf89, 0x665a, 0x49da, 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28, 0x4f);
DEFINE_PROPERTYKEY(MFPKEY_FORCEOVERLAP, 0x4e91bf89, 0x665a, 0x49da, 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28, 0x50);
DEFINE_PROPERTYKEY(MFPKEY_MOTIONVECTORCOSTMETHOD, 0x4e91bf89, 0x665a, 0x49da, 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28, 0x51);
DEFINE_PROPERTYKEY(MFPKEY_CLIP_XORIG, 0x716fe5c8, 0x755c, 0x482f, 0x8d, 0xf3, 0xb3, 0x1d, 0x53, 0x59, 0xf0, 0xd6, 0x01);
DEFINE_PROPERTYKEY(MFPKEY_CLIP_YORIG, 0x716fe5c8, 0x755c, 0x482f, 0x8d, 0xf3, 0xb3, 0x1d, 0x53, 0x59, 0xf0, 0xd6, 0x02);
DEFINE_PROPERTYKEY(MFPKEY_CLIP_WIDTH, 0x716fe5c8, 0x755c, 0x482f, 0x8d, 0xf3, 0xb3, 0x1d, 0x53, 0x59, 0xf0, 0xd6, 0x03);
DEFINE_PROPERTYKEY(MFPKEY_CLIP_HEIGHT, 0x716fe5c8, 0x755c, 0x482f, 0x8d, 0xf3, 0xb3, 0x1d, 0x53, 0x59, 0xf0, 0xd6, 0x04);
DEFINE_PROPERTYKEY(MFPKEY_FI_FRAMERATE_VALU_SRC, 0x305bca55, 0x1e5b, 0x428e, 0xa9, 0x4c, 0x65, 0xb9, 0x4d, 0x2, 0x64, 0xed, 0x01);
DEFINE_PROPERTYKEY(MFPKEY_FI_FRAMERATE_SCAL_SRC, 0x305bca55, 0x1e5b, 0x428e, 0xa9, 0x4c, 0x65, 0xb9, 0x4d, 0x2, 0x64, 0xed, 0x02);
DEFINE_PROPERTYKEY(MFPKEY_FI_FRAMERATE_VALU_DST, 0x305bca55, 0x1e5b, 0x428e, 0xa9, 0x4c, 0x65, 0xb9, 0x4d, 0x2, 0x64, 0xed, 0x03);
DEFINE_PROPERTYKEY(MFPKEY_FI_FRAMERATE_SCAL_DST, 0x305bca55, 0x1e5b, 0x428e, 0xa9, 0x4c, 0x65, 0xb9, 0x4d, 0x2, 0x64, 0xed, 0x04);
DEFINE_PROPERTYKEY(MFPKEY_FI_ALLOWED, 0x305bca55, 0x1e5b, 0x428e, 0xa9, 0x4c, 0x65, 0xb9, 0x4d, 0x2, 0x64, 0xed, 0x05);
DEFINE_PROPERTYKEY(MFPKEY_FI_COMPLEXITY, 0x305bca55, 0x1e5b, 0x428e, 0xa9, 0x4c, 0x65, 0xb9, 0x4d, 0x2, 0x64, 0xed, 0x06);
DEFINE_PROPERTYKEY(MFPKEY_RESIZE_SRC_LEFT, 0x6612a6bc, 0xe57d, 0x407d, 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0, 0x01);
DEFINE_PROPERTYKEY(MFPKEY_RESIZE_SRC_TOP, 0x6612a6bc, 0xe57d, 0x407d, 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0, 0x02);
DEFINE_PROPERTYKEY(MFPKEY_RESIZE_SRC_WIDTH, 0x6612a6bc, 0xe57d, 0x407d, 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0, 0x03);
DEFINE_PROPERTYKEY(MFPKEY_RESIZE_SRC_HEIGHT, 0x6612a6bc, 0xe57d, 0x407d, 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0, 0x04);
DEFINE_PROPERTYKEY(MFPKEY_RESIZE_DST_LEFT, 0x6612a6bc, 0xe57d, 0x407d, 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0, 0x05);
DEFINE_PROPERTYKEY(MFPKEY_RESIZE_DST_TOP, 0x6612a6bc, 0xe57d, 0x407d, 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0, 0x06);
DEFINE_PROPERTYKEY(MFPKEY_RESIZE_DST_WIDTH, 0x6612a6bc, 0xe57d, 0x407d, 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0, 0x07);
DEFINE_PROPERTYKEY(MFPKEY_RESIZE_DST_HEIGHT, 0x6612a6bc, 0xe57d, 0x407d, 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0, 0x08);
DEFINE_PROPERTYKEY(MFPKEY_RESIZE_QUALITY, 0x6612a6bc, 0xe57d, 0x407d, 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0, 0x09);
DEFINE_PROPERTYKEY(MFPKEY_RESIZE_INTERLACE, 0x6612a6bc, 0xe57d, 0x407d, 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0, 0x0a);
DEFINE_PROPERTYKEY(MFPKEY_RESIZE_PANSCANAPX, 0x6612a6bc, 0xe57d, 0x407d, 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0, 0x0b);
DEFINE_PROPERTYKEY(MFPKEY_RESIZE_PANSCANAPY, 0x6612a6bc, 0xe57d, 0x407d, 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0, 0x0c);
DEFINE_PROPERTYKEY(MFPKEY_RESIZE_PANSCANAPWIDTH, 0x6612a6bc, 0xe57d, 0x407d, 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0, 0x0d);
DEFINE_PROPERTYKEY(MFPKEY_RESIZE_PANSCANAPHEIGHT, 0x6612a6bc, 0xe57d, 0x407d, 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0, 0x0e);
DEFINE_PROPERTYKEY(MFPKEY_RESIZE_GEOMAPX, 0x6612a6bc, 0xe57d, 0x407d, 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0, 0x0f);
DEFINE_PROPERTYKEY(MFPKEY_RESIZE_GEOMAPY, 0x6612a6bc, 0xe57d, 0x407d, 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0, 0x10);
DEFINE_PROPERTYKEY(MFPKEY_RESIZE_GEOMAPWIDTH, 0x6612a6bc, 0xe57d, 0x407d, 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0, 0x11);
DEFINE_PROPERTYKEY(MFPKEY_RESIZE_GEOMAPHEIGHT, 0x6612a6bc, 0xe57d, 0x407d, 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0, 0x12);
DEFINE_PROPERTYKEY(MFPKEY_RESIZE_MINAPX, 0x6612a6bc, 0xe57d, 0x407d, 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0, 0x13);
DEFINE_PROPERTYKEY(MFPKEY_RESIZE_MINAPY, 0x6612a6bc, 0xe57d, 0x407d, 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0, 0x14);
DEFINE_PROPERTYKEY(MFPKEY_RESIZE_MINAPWIDTH, 0x6612a6bc, 0xe57d, 0x407d, 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0, 0x15);
DEFINE_PROPERTYKEY(MFPKEY_RESIZE_MINAPHEIGHT, 0x6612a6bc, 0xe57d, 0x407d, 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0, 0x16);
DEFINE_PROPERTYKEY(MFPKEY_PIXELASPECTRATIO, 0x6612a6bc, 0xe57d, 0x407d, 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0, 0x17);
DEFINE_PROPERTYKEY(MFPKEY_COLORCONV_SRCLEFT, 0xdc9100be, 0x1228, 0x416c, 0x99, 0x48, 0x6f, 0x38, 0xf4, 0x79, 0x65, 0x4f, 0x01);
DEFINE_PROPERTYKEY(MFPKEY_COLORCONV_SRCTOP, 0xdc9100be, 0x1228, 0x416c, 0x99, 0x48, 0x6f, 0x38, 0xf4, 0x79, 0x65, 0x4f, 0x02);
DEFINE_PROPERTYKEY(MFPKEY_COLORCONV_DSTLEFT, 0xdc9100be, 0x1228, 0x416c, 0x99, 0x48, 0x6f, 0x38, 0xf4, 0x79, 0x65, 0x4f, 0x03);
DEFINE_PROPERTYKEY(MFPKEY_COLORCONV_DSTTOP, 0xdc9100be, 0x1228, 0x416c, 0x99, 0x48, 0x6f, 0x38, 0xf4, 0x79, 0x65, 0x4f, 0x04);
DEFINE_PROPERTYKEY(MFPKEY_COLORCONV_WIDTH, 0xdc9100be, 0x1228, 0x416c, 0x99, 0x48, 0x6f, 0x38, 0xf4, 0x79, 0x65, 0x4f, 0x05);
DEFINE_PROPERTYKEY(MFPKEY_COLORCONV_HEIGHT, 0xdc9100be, 0x1228, 0x416c, 0x99, 0x48, 0x6f, 0x38, 0xf4, 0x79, 0x65, 0x4f, 0x06);
DEFINE_PROPERTYKEY(MFPKEY_COLORCONV_MODE, 0xdc9100be, 0x1228, 0x416c, 0x99, 0x48, 0x6f, 0x38, 0xf4, 0x79, 0x65, 0x4f, 0x07);
DEFINE_PROPERTYKEY(MFPKEY_DEINTERLACE_PROCESSTYPE, 0x6141f4c3, 0xd3a2, 0x48a9, 0x96, 0xac, 0x2f, 0x0, 0x14, 0x17, 0x6c, 0x26, 0x01);
DEFINE_PROPERTYKEY(MFPKEY_DEINTERLACE_TELECINEPATTERN, 0x6141f4c3, 0xd3a2, 0x48a9, 0x96, 0xac, 0x2f, 0x0, 0x14, 0x17, 0x6c, 0x26, 0x02);
DEFINE_PROPERTYKEY(MFPKEY_DEINTERLACE_LASTFRAME, 0x6141f4c3, 0xd3a2, 0x48a9, 0x96, 0xac, 0x2f, 0x0, 0x14, 0x17, 0x6c, 0x26, 0x03);
DEFINE_PROPERTYKEY(MFPKEY_DEINTERLACE_DETELECINE_FLAG, 0x6141f4c3, 0xd3a2, 0x48a9, 0x96, 0xac, 0x2f, 0x0, 0x14, 0x17, 0x6c, 0x26, 0x04);
DEFINE_PROPERTYKEY(MFPKEY_DEINTERLACE_SMOOTHLEVEL, 0x6141f4c3, 0xd3a2, 0x48a9, 0x96, 0xac, 0x2f, 0x0, 0x14, 0x17, 0x6c, 0x26, 0x05);
DEFINE_PROPERTYKEY(MFPKEY_DEINTERLACE_EDGETHRESHOLD, 0x6141f4c3, 0xd3a2, 0x48a9, 0x96, 0xac, 0x2f, 0x0, 0x14, 0x17, 0x6c, 0x26, 0x06);
DEFINE_PROPERTYKEY(MFPKEY_DVDEC_SIZE, 0x75f2421a, 0xe73a, 0x45b3, 0xae, 0xf0, 0x91, 0x3c, 0x66, 0x84, 0x64, 0x61, 0x00);
DEFINE_PROPERTYKEY(MFPKEY_DVENC_FORMAT, 0xf449a927, 0x7b22, 0x46ef, 0xb2, 0xe7, 0x4d, 0x2b, 0x72, 0x8b, 0x69, 0x9c, 0x00);
#endif
#define	g_wszWMVCDatarate	( L"_DATARATE" )
#define	g_wszWMVCKeyframeDistance	( L"_KEYDIST" )
#define	g_wszWMVCCrisp	( L"_CRISP" )
#define	g_wszWMVCDefaultCrisp	( L"_DEFAULTCRISP" )
#define	g_wszWMVCFOURCC	( L"_FOURCC" )
#define	g_wszWMVCTotalWindow	( L"_TOTALWINDOW" )
#define	g_wszWMVCVideoWIndow	( L"_VIDEOWINDOW" )
#define	g_wszWMVCFrameCount	( L"_FRAMECOUNT" )
#define	g_wszWMVCLiveEncode	( L"_LIVEENCODE" )
#define	g_wszWMVCComplexityMode	( L"_COMPLEXITY" )
#define	g_wszWMVCComplexityEx	( L"_COMPLEXITYEX" )
#define	g_wszWMVCComplexityMax	( L"_COMPLEXITYEXMAX" )
#define	g_wszWMVCComplexityLive	( L"_COMPLEXITYEXLIVE" )
#define	g_wszWMVCComplexityOffline	( L"_COMPLEXITYEXOFFLINE" )
#define	g_wszWMVCPacketOverhead	( L"_ASFOVERHEADPERFRAME" )
#define	g_wszWMVCLegacy411InterlacedFormat	( L"_LEGACY411INTERLACEDFORMAT" )
#define	g_wszWMVCPassesRecommended	( L"_PASSESRECOMMENDED" )
#define	g_wszWMVCPassesUsed	( L"_PASSESUSED" )
#define	g_wszWMVCEndOfPass	( L"_ENDOFPASS" )
#define	g_wszWMVCFrameInterpolationSupported	( L"_FRAMEINTERPOLATIONSUPPORTED" )
#define	g_wszWMVCFrameInterpolationEnabled	( L"_FRAMEINTERPOLATIONENABLED" )
#define	g_wszWMVCQPPerFrame	( L"_QPPERFRAME" )
#define	g_wszWMVCReencDuration	( L"_REENCDURATION" )
#define	g_wszWMVCReencStartBufferSize	( L"_REENCSTARTBUFFERSIZE" )
#define	g_wszWMVCReencEndBufferSize	( L"_REENCENDBUFFERSIZE" )
#define	g_wszWMVCReencQPRef	( L"_REENCQPREF" )
#define	g_wszWMVCDenoiseOption	( L"_DENOISEOPTION" )
#define	g_wszWMVCMirrorDisplayOn	( L"_MIRRORDISPLAYON" )
#define	g_wszWMVCChangeFrameRate	( L"_CHANGEFRAMERATE" )
#define	g_wszWMVCChangeBitRate	( L"_CHANGEBITRATE" )
#define	g_wszWMVCChangeMaxBitRate	( L"_CHANGEMAXBITRATE" )
#define	g_wszWMVCFullFrameRate	( L"_FULLFRAMERATE" )
#define	g_wszWMVCMotionSearchRange	( L"_MOTIONSEARCHRANGE" )
#define	g_wszWMVCDeltaMVRangeIndex	( L"_DELTAMVRANGEINDEX" )
#define	g_wszWMVCNumBFrames	( L"_NUMBFRAMES" )
#define	g_wszWMVCRDSubpixelSearch	( L"_RDSUBPIXELSEARCH" )
#define	g_wszWMVCBDeltaQP	( L"_BDELTAQP" )
#define	g_wszWMVCForceFrameWidth	( L"_FORCEFRAMEWIDTH" )
#define	g_wszWMVCForceFrameHeight	( L"_FORCEFRAMEHEIGHT" )
#define	g_wszWMVCRangeRedux	( L"_RANGEREDUX" )
#define	g_wszWMVCLookAhead	( L"_LOOKAHEAD" )
#define	g_wszWMVCVideoScaling	( L"_VIDEOSCALING" )
#define	g_wszWMVCPerceptualOptLevel	( L"_PERCEPTUALOPTLEVEL" )
#define	g_wszWMVCForceMedianSetting	( L"_FORCEMEDIANSETTING" )
#define	g_wszWMVCNumThreads	( L"_NUMTHREADS" )
#define	g_wszWMVCLoopFilter	( L"_LOOPFILTER" )
#define	g_wszWMVCNoiseEdgeRemoval	( L"_NOISEEDGEREMOVAL" )
#define	g_wszWMVCVType	( L"_VTYPE" )
#define	g_wszWMVCMotionSearchLevel	( L"_MOTIONSEARCHLEVEL" )
#define	g_wszWMVCMotionMatchMethod	( L"_MOTIONMATCHMETHOD" )
#define	g_wszWMVCMacroblockModeCostMethod	( L"_MACROBLOCKMODECOSTMETHOD" )
#define	g_wszWMVCCompressionOptimizationType	( L"_COMPRESSIONOPTIMIZATIONTYPE" )
#define	g_wszWMVCPeriodicalSPDistance	( L"_PERIODICALSPDISTANCE" )
#define	g_wszWMVCQueryTimeStampTag	( L"_QUERYTIMESTAMPTAG" )
#define	g_wszWMVCSupportOneInMultiOut	( L"_SUPPORTONEINMULTIOUT" )
#define	g_wszWMVCEncodingWidth	( L"_ENCODINGWIDTH" )
#define	g_wszWMVCEncodingHeight	( L"_ENCODINGHEIGHT" )
#define	g_wszWMVCThreadAffinityMask	( L"_THREADAFFINITYMASK" )
#define	g_wszWMVCDecoderForceNoResizeOutput	( L"_FORCENORESIZE" )
#define	g_wszWMACInputFormatName	( L"_INPUTFORMATNAME" )
#define	g_wszWMACSourceFormatTag	( L"_SOURCEFORMATTAG" )
#define	g_wszWMVCVBREnabled	( L"_VBRENABLED" )
#define	g_wszWMVCVBRQuality	( L"_VBRQUALITY" )
#define	g_wszWMVCAvgBitrate	( L"_RAVG" )
#define	g_wszWMVCMaxBitrate	( L"_RMAX" )
#define	g_wszWMVCBAvg	( L"_BAVG" )
#define	g_wszWMVCBMax	( L"_BMAX" )
#define	g_wszWMVCTotalFrames	( L"_TOTALFRAMES" )
#define	g_wszWMVCCodedFrames	( L"_CODEDFRAMES" )
#define	g_wszWMVCAvgFrameRate	( L"_AVGFRAMERATE" )
#define	g_wszWMVCDecoderComplexityProfile	( L"_DECODERCOMPLEXITYPROFILE" )
#define	g_wszWMVCDecoderComplexityRequested	( L"_DECODERCOMPLEXITYREQUESTED" )
#define	g_wszWMVCBufferFullnessInFirstByte	( L"_BUFFERFULLNESSINFIRSTBYTE" )
#define	g_wszWMACPeakPCMValue	( L"PeakValue" )
#define	g_wszWMACAvgPCMValue	( L"AverageLevel" )
#define	g_wszWMADRCAverageReference	( L"WMADRCAverageReference" )
#define	g_wszWMADRCPeakReference	( L"WMADRCPeakReference" )
#define	g_wszWMADRCAverageTarget	( L"WMADRCAverageTarget" )
#define	g_wszWMADRCPeakTarget	( L"WMADRCPeakTarget" )
#define	g_wszWMACHiResOutput	( L"_HIRESOUTPUT" )
#define	g_wszWMACAvgBytesPerSec	( L"AvgBytesPerSec" )
#define	g_wszWMACSpeakerConfig	( L"SpeakerConfig" )
#define	g_wszWMACMixTable	( L"MixTable" )
#define	g_wszWMACDRCSetting	( L"DynamicRangeControl" )
#define	g_wszWMVCWatermarkConfig	( L"WatermarkConfig" )
#define	g_wszWMVCWatermarkDelay	( L"WatermarkDelay" )
#define	g_wszWMVCInterlacedCodingEnabled	( L"_INTERLACEDCODINGENABLED" )
#define	g_wszWMVCProduceDummyFrames	( L"_PRODUCEDUMMYFRAMES" )
#define	g_wszWMVCDecoderDeinterlacing	( L"_DECODERDEINTERLACING" )
#define	g_wszWMACOriginalWaveFormat	( L"_ORIGINALWAVEFORMAT" )
#define	g_wszWMACIncludeNumPasses	( L"_INCLUDENUMPASSES" )
#define	g_wszWMVCInverseTelecinedInput	( L"_INVERSETELECINEDINPUT" )
#define	g_wszWMVCForcePostProcessMode	( L"_POSTPROCESSMODE" )
#define	g_wszWMVCNumThreadsDec	( L"_NUMTHREADSDEC" )
#define	g_wszWMVCClosedEntryPoint	( L"_CLOSEDENTRYPOINT" )
#define	g_wszWMVCQueryTimeStampTagDec	( L"_QUERYTIMESTAMPTAGDEC" )
#define	g_wszWMVCSupportOneInMultiOut_Dec	( L"_SUPPORTONEINMULTIOUT_DEC" )
#define	g_wszWMVCEncodedWidth_Dec	( L"_ENCODEDWIDTH_DEC" )
#define	g_wszWMVCEncodedHeight_Dec	( L"_ENCODEDHEIGHT_DEC" )
#define	g_wszWMVCEncodercomplexity	( L"_ENCODERCOMPLEXITY" )
#define	g_wszWMVCUserdatasize	( L"_USERDATASIZE" )
#define	g_wszWMVCLetterboxpresent	( L"_LETTERBOXPRESENT" )
#define	g_wszWMVCScenechange	( L"_SCENECHANGE" )
#define	g_wszWMVCVariableGOP	( L"_VARIABLEGOP" )
#define	g_wszWMVCSceneChangeI	( L"_SCENECHANGEI" )
#define	g_wszWMVCLookaheadRC	( L"_LOOKAHEADRC" )
#define	g_wszWMVCDquantOption	( L"_DQUANTOPTION" )
#define	g_wszWMVCDquantStrength	( L"_DQUANTSTRENGTH" )
#define	g_wszWMVCForceOverlap	( L"_FORCEOVERLAP" )
#define	g_wszWMVCMotionVectorCostMethod	( L"_MOTIONVECTORCOSTMETHOD" )
#define	g_wszWMVForceStartCode	( L"_FORCESTARTCODE" )
#define	g_wszWMVCHonorKeyFrameSettings	( L"_HONORKEYSETTINGS" )
#define	g_wszWMVCHonorTSFrameQP	( L"_HONORTSFRAMEQP" )
#define	g_wszWMVDisplayWidth	( L"_DisplayWidth" )
#define	g_wszWMVDisplayHeight	( L"_DisplayHeight" )
#define	g_wszWMVEncodeWidth	( L"_EncodeWidth" )
#define	g_wszWMVEncodeHeight	( L"_EncodeHeight" )
#define	g_wszWMVTranscodeMode	( L"_TranscodeMode" )
#define	g_wszWMVAspectHorizSize	( L"_AspectHorizSize" )
#define	g_wszWMVAspectVertSize	( L"_AspectVertSize" )
#define	g_wszWMVTimeStampFixed	( L"TSFixed" )
#define	g_wszWMACMusicSpeechClassMode	( L"MusicSpeechClassMode" )
#define	g_wszWMACVoiceBuffer	( L"BufferWindow" )
#define	g_wszWMACVoiceEDL	( L"_EDL" )
#define	g_wszSpeechFormatCaps	( L"SpeechFormatCap" )
typedef enum MF_AUVRHP_ROOMMODEL
{
	VRHP_SMALLROOM = 0,
	VRHP_MEDIUMROOM = (VRHP_SMALLROOM + 1),
	VRHP_BIGROOM = (VRHP_MEDIUMROOM + 1),
	VRHP_CUSTUMIZEDROOM = (VRHP_BIGROOM + 1)
} MF_AUVRHP_ROOMMODEL;
#define AEC_MAX_SYSTEM_MODES 6
typedef enum AEC_SYSTEM_MODE
{
	SINGLE_CHANNEL_AEC = 0,
	ADAPTIVE_ARRAY_ONLY = (SINGLE_CHANNEL_AEC + 1),
	OPTIBEAM_ARRAY_ONLY = (ADAPTIVE_ARRAY_ONLY + 1),
	ADAPTIVE_ARRAY_AND_AEC = (OPTIBEAM_ARRAY_ONLY + 1),
	OPTIBEAM_ARRAY_AND_AEC = (ADAPTIVE_ARRAY_AND_AEC + 1),
	SINGLE_CHANNEL_NSAGC = (OPTIBEAM_ARRAY_AND_AEC + 1),
	MODE_NOT_SET = (SINGLE_CHANNEL_NSAGC + 1)
} AEC_SYSTEM_MODE;
typedef struct tagAecQualityMetrics_Struct
{
	LONGLONG i64Timestamp;
	BYTE ConvergenceFlag;
	BYTE MicClippedFlag;
	BYTE MicSilenceFlag;
	BYTE PstvFeadbackFlag;
	BYTE SpkClippedFlag;
	BYTE SpkMuteFlag;
	BYTE GlitchFlag;
	BYTE DoubleTalkFlag;
	ULONG uGlitchCount;
	ULONG uMicClipCount;
	float fDuration;
	float fTSVariance;
	float fTSDriftRate;
	float fVoiceLevel;
	float fNoiseLevel;
	float fERLE;
	float fAvgERLE;
	DWORD dwReserved;
} AecQualityMetrics_Struct;
typedef enum AEC_VAD_MODE
{
	AEC_VAD_DISABLED = 0,
	AEC_VAD_NORMAL = (AEC_VAD_DISABLED + 1),
	AEC_VAD_FOR_AGC = (AEC_VAD_NORMAL + 1),
	AEC_VAD_FOR_SILENCE_SUPPRESSION = (AEC_VAD_FOR_AGC + 1)
} AEC_VAD_MODE;
typedef enum AEC_INPUT_STREAM
{
	AEC_CAPTURE_STREAM = 0,
	AEC_REFERENCE_STREAM = 1
} AEC_INPUT_STREAM;
typedef enum MIC_ARRAY_MODE
{
	MICARRAY_SINGLE_CHAN = 0,
	MICARRAY_SIMPLE_SUM = 0x100,
	MICARRAY_SINGLE_BEAM = 0x200,
	MICARRAY_FIXED_BEAM = 0x400,
	MICARRAY_EXTERN_BEAM = 0x800
} MIC_ARRAY_MODE;
#define FACILITY_WMAAECMA  0x7CC
#define WMAAECMA_E_NO_ACTIVE_RENDER_STREAM 0x87CC000A
DEFINE_GUID(MEDIASUBTYPE_Y41T, 0x54313459, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_Y42T, 0x54323459, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
#ifndef MEDIASUBTYPE_NV11_DEFINED
#define MEDIASUBTYPE_NV11_DEFINED
DEFINE_GUID(MEDIASUBTYPE_NV11, 0x3131564E, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
#endif
DEFINE_GUID(MEDIASUBTYPE_V216, 0x36313256, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_V410, 0x30313456, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_v210, 0x30313276, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_I420, 0x30323449, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_WVC1, 0x31435657, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_wvc1, 0x31637677, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_WMVA, 0x41564D57, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_wmva, 0x61766D77, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_WMVB, 0x42564D57, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_wmvb, 0x62766D77, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_WMVR, 0x52564D57, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_wmvr, 0x72766D77, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_WMVP, 0x50564D57, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_wmvp, 0x70766D77, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_WVP2, 0x32505657, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_wvp2, 0x32707677, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_WMV3, 0x33564D57, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_wmv3, 0x33766D77, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_WMV2, 0x32564D57, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_wmv2, 0x32766D77, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_WMV1, 0x31564D57, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_wmv1, 0x31766D77, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_MPG4, 0x3447504D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_mpg4, 0x3467706D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_MP42, 0x3234504D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_mp42, 0x3234706D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_MP43, 0x3334504D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_mp43, 0x3334706D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_MP4S, 0x5334504D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_mp4s, 0x7334706D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_M4S2, 0x3253344D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_m4s2, 0x3273346D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_MSS1, 0x3153534D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_MSS2, 0x3253534D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_MSAUDIO1, 0x00000160, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_WMAUDIO2, 0x00000161, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_WMAUDIO3, 0x00000162, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_WMAUDIO_LOSSLESS, 0x00000163, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_WMASPDIF, 0x00000164, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_WMAUDIO4, 0x00000168, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_MPEG_ADTS_AAC, 0x00001600, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_MPEG_RAW_AAC, 0x00001601, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_MPEG_LOAS, 0x00001602, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_NOKIA_MPEG_ADTS_AAC, 0x00001608, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_NOKIA_MPEG_RAW_AAC, 0x00001609, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_VODAFONE_MPEG_ADTS_AAC, 0x0000160A, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_VODAFONE_MPEG_RAW_AAC, 0x0000160B, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_MPEG_HEAAC, 0x00001610, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_RAW_AAC1, 0x000000FF, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_DVM, 0x00002000, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_DTS2, 0x00002001, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_DOLBY_DDPLUS, 0xa7fb87af, 0x2d02, 0x42fb, 0xa4, 0xd4, 0x5, 0xcd, 0x93, 0x84, 0x3b, 0xdd);
DEFINE_GUID(MEDIASUBTYPE_DOLBY_TRUEHD, 0xeb27cec4, 0x163e, 0x4ca3, 0x8b, 0x74, 0x8e, 0x25, 0xf9, 0x1b, 0x51, 0x7e);
DEFINE_GUID(MEDIASUBTYPE_DTS_HD, 0xa2e58eb7, 0xfa9, 0x48bb, 0xa4, 0xc, 0xfa, 0xe, 0x15, 0x6d, 0x6, 0x45);
DEFINE_GUID(MEDIASUBTYPE_h264, 0x34363268, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_AVC1, 0x31435641, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_X264, 0x34363258, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_x264, 0x34363278, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(CLSID_CTocEntry, 0xF22F5E05, 0x585C, 0x4def, 0x85, 0x23, 0x65, 0x55, 0xCF, 0xBC, 0x0C, 0xB3);
DEFINE_GUID(CLSID_CTocEntryList, 0x3A8CCCBC, 0x0EFD, 0x43a3, 0xB8, 0x38, 0xF3, 0x8A, 0x55, 0x2B, 0xA2, 0x37);
DEFINE_GUID(CLSID_CToc, 0x4FE24495, 0x28CE, 0x4920, 0xA4, 0xC4, 0xE5, 0x56, 0xE1, 0xF0, 0xDF, 0x2A);
DEFINE_GUID(CLSID_CTocCollection, 0x5058292D, 0xA244, 0x4840, 0xAB, 0x44, 0x48, 0x09, 0x75, 0xC4, 0xFF, 0xE4);
DEFINE_GUID(CLSID_CTocParser, 0x499EAEEA, 0x2737, 0x4849, 0x8B, 0xB6, 0x47, 0xF1, 0x07, 0xEA, 0xF3, 0x58);
DEFINE_GUID(CLSID_CAsfTocParser, 0x9B77C0F2, 0x8735, 0x46c5, 0xB9, 0x0F, 0x5F, 0x0B, 0x30, 0x3E, 0xF6, 0xAB);
DEFINE_GUID(CLSID_CAviTocParser, 0x3ADCE5CC, 0x13C8, 0x4573, 0xB3, 0x28, 0xED, 0x43, 0x8E, 0xB6, 0x94, 0xF9);
DEFINE_GUID(CLSID_CFileIo, 0x11993195, 0x1244, 0x4840, 0xAB, 0x44, 0x48, 0x09, 0x75, 0xC4, 0xFF, 0xE4);
DEFINE_GUID(CLSID_CFileClient, 0xBFCCD195, 0x1244, 0x4840, 0xAB, 0x44, 0x48, 0x09, 0x75, 0xC4, 0xFF, 0xE4);
DEFINE_GUID(CLSID_CClusterDetectorEx, 0x47354492, 0x827E, 0x4b8a, 0xB3, 0x18, 0xC8, 0x0E, 0xBA, 0x13, 0x81, 0xF0);
typedef unsigned __int64 QWORD;
#ifndef QWORD
typedef unsigned __int64 QWORD;
#endif
#ifndef E_TOCPARSER_INVALIDASFFILE
#define E_TOCPARSER_INVALIDASFFILE      _HRESULT_TYPEDEF_(0x99000001L)
#endif
#ifndef E_TOCPARSER_INVALIDRIFFFILE
#define E_TOCPARSER_INVALIDRIFFFILE     _HRESULT_TYPEDEF_(0x99000002L)
#endif
#ifndef TOC_MAX_DESCRIPTION_SIZE
#define TOC_MAX_DESCRIPTION_SIZE        65535
#endif
#ifndef TOC_ENTRY_MAX_TITLE_SIZE
#define TOC_ENTRY_MAX_TITLE_SIZE        65535
#endif
typedef struct _TOC_DESCRIPTOR
{
	GUID guidID;
	WORD wStreamNumber;
	GUID guidType;
	WORD wLanguageIndex;
} TOC_DESCRIPTOR;
typedef struct _TOC_ENTRY_DESCRIPTOR
{
	QWORD qwStartTime;
	QWORD qwEndTime;
	QWORD qwStartPacketOffset;
	QWORD qwEndPacketOffset;
	QWORD qwRepresentativeFrameTime;
} TOC_ENTRY_DESCRIPTOR;
enum TOC_POS_TYPE
{
	TOC_POS_INHEADER = 0,
	TOC_POS_TOPLEVELOBJECT = (TOC_POS_INHEADER + 1)
};
extern RPC_IF_HANDLE __MIDL_itf_wmcodecdsp_0000_0017_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmcodecdsp_0000_0017_v0_0_s_ifspec;
#ifndef __ITocEntry_INTERFACE_DEFINED__
#define __ITocEntry_INTERFACE_DEFINED__
extern const IID IID_ITocEntry;
typedef struct ITocEntryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITocEntry * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITocEntry * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITocEntry * This);
	HRESULT(STDMETHODCALLTYPE * SetTitle) (ITocEntry * This, LPCWSTR pwszTitle);
	HRESULT(STDMETHODCALLTYPE * GetTitle) (ITocEntry * This, WORD * pwTitleSize, LPWSTR pwszTitle);
	HRESULT(STDMETHODCALLTYPE * SetDescriptor) (ITocEntry * This, TOC_ENTRY_DESCRIPTOR * pDescriptor);
	HRESULT(STDMETHODCALLTYPE * GetDescriptor) (ITocEntry * This, TOC_ENTRY_DESCRIPTOR * pDescriptor);
	HRESULT(STDMETHODCALLTYPE * SetSubEntries) (ITocEntry * This, DWORD dwNumSubEntries, WORD * pwSubEntryIndices);
	HRESULT(STDMETHODCALLTYPE * GetSubEntries) (ITocEntry * This, DWORD * pdwNumSubEntries, WORD * pwSubEntryIndices);
	HRESULT(STDMETHODCALLTYPE * SetDescriptionData) (ITocEntry * This, DWORD dwDescriptionDataSize, BYTE * pbtDescriptionData, GUID * pguidType);
	HRESULT(STDMETHODCALLTYPE * GetDescriptionData) (ITocEntry * This, DWORD * pdwDescriptionDataSize, BYTE * pbtDescriptionData, GUID * pGuidType);
	END_INTERFACE
}  ITocEntryVtbl;
interface ITocEntry
{
	CONST_VTBL struct ITocEntryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITocEntry_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITocEntry_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITocEntry_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITocEntry_SetTitle(This,pwszTitle) ( (This)->lpVtbl -> SetTitle(This,pwszTitle) )
#define ITocEntry_GetTitle(This,pwTitleSize,pwszTitle) ( (This)->lpVtbl -> GetTitle(This,pwTitleSize,pwszTitle) )
#define ITocEntry_SetDescriptor(This,pDescriptor) ( (This)->lpVtbl -> SetDescriptor(This,pDescriptor) )
#define ITocEntry_GetDescriptor(This,pDescriptor) ( (This)->lpVtbl -> GetDescriptor(This,pDescriptor) )
#define ITocEntry_SetSubEntries(This,dwNumSubEntries,pwSubEntryIndices) ( (This)->lpVtbl -> SetSubEntries(This,dwNumSubEntries,pwSubEntryIndices) )
#define ITocEntry_GetSubEntries(This,pdwNumSubEntries,pwSubEntryIndices) ( (This)->lpVtbl -> GetSubEntries(This,pdwNumSubEntries,pwSubEntryIndices) )
#define ITocEntry_SetDescriptionData(This,dwDescriptionDataSize,pbtDescriptionData,pguidType) ( (This)->lpVtbl -> SetDescriptionData(This,dwDescriptionDataSize,pbtDescriptionData,pguidType) )
#define ITocEntry_GetDescriptionData(This,pdwDescriptionDataSize,pbtDescriptionData,pGuidType) ( (This)->lpVtbl -> GetDescriptionData(This,pdwDescriptionDataSize,pbtDescriptionData,pGuidType) )
#endif
#endif
#ifndef __ITocEntryList_INTERFACE_DEFINED__
#define __ITocEntryList_INTERFACE_DEFINED__
extern const IID IID_ITocEntryList;
typedef struct ITocEntryListVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITocEntryList * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITocEntryList * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITocEntryList * This);
	HRESULT(STDMETHODCALLTYPE * GetEntryCount) (ITocEntryList * This, DWORD * pdwEntryCount);
	HRESULT(STDMETHODCALLTYPE * GetEntryByIndex) (ITocEntryList * This, DWORD dwEntryIndex, ITocEntry ** ppEntry);
	HRESULT(STDMETHODCALLTYPE * AddEntry) (ITocEntryList * This, ITocEntry * pEntry, DWORD * pdwEntryIndex);
	HRESULT(STDMETHODCALLTYPE * AddEntryByIndex) (ITocEntryList * This, DWORD dwEntryIndex, ITocEntry * pEntry);
	HRESULT(STDMETHODCALLTYPE * RemoveEntryByIndex) (ITocEntryList * This, DWORD dwEntryIndex);
	END_INTERFACE
}  ITocEntryListVtbl;
interface ITocEntryList
{
	CONST_VTBL struct ITocEntryListVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITocEntryList_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITocEntryList_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITocEntryList_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITocEntryList_GetEntryCount(This,pdwEntryCount) ( (This)->lpVtbl -> GetEntryCount(This,pdwEntryCount) )
#define ITocEntryList_GetEntryByIndex(This,dwEntryIndex,ppEntry) ( (This)->lpVtbl -> GetEntryByIndex(This,dwEntryIndex,ppEntry) )
#define ITocEntryList_AddEntry(This,pEntry,pdwEntryIndex) ( (This)->lpVtbl -> AddEntry(This,pEntry,pdwEntryIndex) )
#define ITocEntryList_AddEntryByIndex(This,dwEntryIndex,pEntry) ( (This)->lpVtbl -> AddEntryByIndex(This,dwEntryIndex,pEntry) )
#define ITocEntryList_RemoveEntryByIndex(This,dwEntryIndex) ( (This)->lpVtbl -> RemoveEntryByIndex(This,dwEntryIndex) )
#endif
#endif
#ifndef __IToc_INTERFACE_DEFINED__
#define __IToc_INTERFACE_DEFINED__
extern const IID IID_IToc;
typedef struct ITocVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IToc * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IToc * This);
	ULONG(STDMETHODCALLTYPE * Release) (IToc * This);
	HRESULT(STDMETHODCALLTYPE * SetDescriptor) (IToc * This, TOC_DESCRIPTOR * pDescriptor);
	HRESULT(STDMETHODCALLTYPE * GetDescriptor) (IToc * This, TOC_DESCRIPTOR * pDescriptor);
	HRESULT(STDMETHODCALLTYPE * SetDescription) (IToc * This, LPCWSTR pwszDescription);
	HRESULT(STDMETHODCALLTYPE * GetDescription) (IToc * This, WORD * pwDescriptionSize, LPWSTR pwszDescription);
	HRESULT(STDMETHODCALLTYPE * SetContext) (IToc * This, DWORD dwContextSize, BYTE * pbtContext);
	HRESULT(STDMETHODCALLTYPE * GetContext) (IToc * This, DWORD * pdwContextSize, BYTE * pbtContext);
	HRESULT(STDMETHODCALLTYPE * GetEntryListCount) (IToc * This, WORD * pwCount);
	HRESULT(STDMETHODCALLTYPE * GetEntryListByIndex) (IToc * This, WORD wEntryListIndex, ITocEntryList ** ppEntryList);
	HRESULT(STDMETHODCALLTYPE * AddEntryList) (IToc * This, ITocEntryList * pEntryList, WORD * pwEntryListIndex);
	HRESULT(STDMETHODCALLTYPE * AddEntryListByIndex) (IToc * This, WORD wEntryListIndex, ITocEntryList * pEntryList);
	HRESULT(STDMETHODCALLTYPE * RemoveEntryListByIndex) (IToc * This, WORD wEntryListIndex);
	END_INTERFACE
}  ITocVtbl;
interface IToc
{
	CONST_VTBL struct ITocVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IToc_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IToc_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IToc_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IToc_SetDescriptor(This,pDescriptor) ( (This)->lpVtbl -> SetDescriptor(This,pDescriptor) )
#define IToc_GetDescriptor(This,pDescriptor) ( (This)->lpVtbl -> GetDescriptor(This,pDescriptor) )
#define IToc_SetDescription(This,pwszDescription) ( (This)->lpVtbl -> SetDescription(This,pwszDescription) )
#define IToc_GetDescription(This,pwDescriptionSize,pwszDescription) ( (This)->lpVtbl -> GetDescription(This,pwDescriptionSize,pwszDescription) )
#define IToc_SetContext(This,dwContextSize,pbtContext) ( (This)->lpVtbl -> SetContext(This,dwContextSize,pbtContext) )
#define IToc_GetContext(This,pdwContextSize,pbtContext) ( (This)->lpVtbl -> GetContext(This,pdwContextSize,pbtContext) )
#define IToc_GetEntryListCount(This,pwCount) ( (This)->lpVtbl -> GetEntryListCount(This,pwCount) )
#define IToc_GetEntryListByIndex(This,wEntryListIndex,ppEntryList) ( (This)->lpVtbl -> GetEntryListByIndex(This,wEntryListIndex,ppEntryList) )
#define IToc_AddEntryList(This,pEntryList,pwEntryListIndex) ( (This)->lpVtbl -> AddEntryList(This,pEntryList,pwEntryListIndex) )
#define IToc_AddEntryListByIndex(This,wEntryListIndex,pEntryList) ( (This)->lpVtbl -> AddEntryListByIndex(This,wEntryListIndex,pEntryList) )
#define IToc_RemoveEntryListByIndex(This,wEntryListIndex) ( (This)->lpVtbl -> RemoveEntryListByIndex(This,wEntryListIndex) )
#endif
#endif
#ifndef __ITocCollection_INTERFACE_DEFINED__
#define __ITocCollection_INTERFACE_DEFINED__
extern const IID IID_ITocCollection;
typedef struct ITocCollectionVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITocCollection * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITocCollection * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITocCollection * This);
	HRESULT(STDMETHODCALLTYPE * GetEntryCount) (ITocCollection * This, DWORD * pdwEntryCount);
	HRESULT(STDMETHODCALLTYPE * GetEntryByIndex) (ITocCollection * This, DWORD dwEntryIndex, IToc ** ppToc);
	HRESULT(STDMETHODCALLTYPE * AddEntry) (ITocCollection * This, IToc * pToc, DWORD * pdwEntryIndex);
	HRESULT(STDMETHODCALLTYPE * AddEntryByIndex) (ITocCollection * This, DWORD dwEntryIndex, IToc * pToc);
	HRESULT(STDMETHODCALLTYPE * RemoveEntryByIndex) (ITocCollection * This, DWORD dwEntryIndex);
	END_INTERFACE
}  ITocCollectionVtbl;
interface ITocCollection
{
	CONST_VTBL struct ITocCollectionVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITocCollection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITocCollection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITocCollection_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITocCollection_GetEntryCount(This,pdwEntryCount) ( (This)->lpVtbl -> GetEntryCount(This,pdwEntryCount) )
#define ITocCollection_GetEntryByIndex(This,dwEntryIndex,ppToc) ( (This)->lpVtbl -> GetEntryByIndex(This,dwEntryIndex,ppToc) )
#define ITocCollection_AddEntry(This,pToc,pdwEntryIndex) ( (This)->lpVtbl -> AddEntry(This,pToc,pdwEntryIndex) )
#define ITocCollection_AddEntryByIndex(This,dwEntryIndex,pToc) ( (This)->lpVtbl -> AddEntryByIndex(This,dwEntryIndex,pToc) )
#define ITocCollection_RemoveEntryByIndex(This,dwEntryIndex) ( (This)->lpVtbl -> RemoveEntryByIndex(This,dwEntryIndex) )
#endif
#endif
#ifndef __ITocParser_INTERFACE_DEFINED__
#define __ITocParser_INTERFACE_DEFINED__
extern const IID IID_ITocParser;
typedef struct ITocParserVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITocParser * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITocParser * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITocParser * This);
	HRESULT(STDMETHODCALLTYPE * Init) (ITocParser * This, LPCWSTR pwszFileName);
	HRESULT(STDMETHODCALLTYPE * GetTocCount) (ITocParser * This, enum TOC_POS_TYPE enumTocPosType, DWORD * pdwTocCount);
	HRESULT(STDMETHODCALLTYPE * GetTocByIndex) (ITocParser * This, enum TOC_POS_TYPE enumTocPosType, DWORD dwTocIndex, IToc ** ppToc);
	HRESULT(STDMETHODCALLTYPE * GetTocByType) (ITocParser * This, enum TOC_POS_TYPE enumTocPosType, GUID guidTocType, ITocCollection ** ppTocs);
	HRESULT(STDMETHODCALLTYPE * AddToc) (ITocParser * This, enum TOC_POS_TYPE enumTocPosType, IToc * pToc, DWORD * pdwTocIndex);
	HRESULT(STDMETHODCALLTYPE * RemoveTocByIndex) (ITocParser * This, enum TOC_POS_TYPE enumTocPosType, DWORD dwTocIndex);
	HRESULT(STDMETHODCALLTYPE * RemoveTocByType) (ITocParser * This, enum TOC_POS_TYPE enumTocPosType, GUID guidTocType);
	HRESULT(STDMETHODCALLTYPE * Commit) (ITocParser * This);
	END_INTERFACE
}  ITocParserVtbl;
interface ITocParser
{
	CONST_VTBL struct ITocParserVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITocParser_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITocParser_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITocParser_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITocParser_Init(This,pwszFileName) ( (This)->lpVtbl -> Init(This,pwszFileName) )
#define ITocParser_GetTocCount(This,enumTocPosType,pdwTocCount) ( (This)->lpVtbl -> GetTocCount(This,enumTocPosType,pdwTocCount) )
#define ITocParser_GetTocByIndex(This,enumTocPosType,dwTocIndex,ppToc) ( (This)->lpVtbl -> GetTocByIndex(This,enumTocPosType,dwTocIndex,ppToc) )
#define ITocParser_GetTocByType(This,enumTocPosType,guidTocType,ppTocs) ( (This)->lpVtbl -> GetTocByType(This,enumTocPosType,guidTocType,ppTocs) )
#define ITocParser_AddToc(This,enumTocPosType,pToc,pdwTocIndex) ( (This)->lpVtbl -> AddToc(This,enumTocPosType,pToc,pdwTocIndex) )
#define ITocParser_RemoveTocByIndex(This,enumTocPosType,dwTocIndex) ( (This)->lpVtbl -> RemoveTocByIndex(This,enumTocPosType,dwTocIndex) )
#define ITocParser_RemoveTocByType(This,enumTocPosType,guidTocType) ( (This)->lpVtbl -> RemoveTocByType(This,enumTocPosType,guidTocType) )
#define ITocParser_Commit(This) ( (This)->lpVtbl -> Commit(This) )
#endif
#endif
enum FILE_OPENMODE
{
	OPENMODE_FAIL_IF_NOT_EXIST = 0,
	OPENMODE_FAIL_IF_EXIST = 1,
	OPENMODE_RESET_IF_EXIST = 2,
	OPENMODE_APPEND_IF_EXIST = 3,
	OPENMODE_DELETE_IF_EXIST = 4
};
enum SEEK_ORIGIN
{
	_msoBegin = 0,
	_msoCurrent = 1
};
enum FILE_ACCESSMODE
{
	ACCESSMODE_READ = 1,
	ACCESSMODE_WRITE = 2,
	ACCESSMODE_READWRITE = 3,
	ACCESSMODE_WRITE_EXCLUSIVE = 4
};
extern RPC_IF_HANDLE __MIDL_itf_wmcodecdsp_0000_0022_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmcodecdsp_0000_0022_v0_0_s_ifspec;
#ifndef __IFileIo_INTERFACE_DEFINED__
#define __IFileIo_INTERFACE_DEFINED__
extern const IID IID_IFileIo;
typedef struct IFileIoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFileIo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFileIo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFileIo * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IFileIo * This, enum FILE_ACCESSMODE eAccessMode, enum FILE_OPENMODE eOpenMode, LPCWSTR pwszFileName);
	HRESULT(STDMETHODCALLTYPE * GetLength) (IFileIo * This, QWORD * pqwLength);
	HRESULT(STDMETHODCALLTYPE * SetLength) (IFileIo * This, QWORD qwLength);
	HRESULT(STDMETHODCALLTYPE * GetCurrentPosition) (IFileIo * This, QWORD * pqwPosition);
	HRESULT(STDMETHODCALLTYPE * SetCurrentPosition) (IFileIo * This, QWORD qwPosition);
	HRESULT(STDMETHODCALLTYPE * IsEndOfStream) (IFileIo * This, BOOL * pbEndOfStream);
	HRESULT(STDMETHODCALLTYPE * Read) (IFileIo * This, BYTE * pbt, ULONG ul, ULONG * pulRead);
	HRESULT(STDMETHODCALLTYPE * Write) (IFileIo * This, BYTE * pbt, ULONG ul, ULONG * pulWritten);
	HRESULT(STDMETHODCALLTYPE * Seek) (IFileIo * This, enum SEEK_ORIGIN eSeekOrigin, QWORD qwSeekOffset, DWORD dwSeekFlags, QWORD * pqwCurrentPosition);
	HRESULT(STDMETHODCALLTYPE * Close) (IFileIo * This);
	END_INTERFACE
}  IFileIoVtbl;
interface IFileIo
{
	CONST_VTBL struct IFileIoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFileIo_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFileIo_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IFileIo_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IFileIo_Initialize(This,eAccessMode,eOpenMode,pwszFileName) ( (This)->lpVtbl -> Initialize(This,eAccessMode,eOpenMode,pwszFileName) )
#define IFileIo_GetLength(This,pqwLength) ( (This)->lpVtbl -> GetLength(This,pqwLength) )
#define IFileIo_SetLength(This,qwLength) ( (This)->lpVtbl -> SetLength(This,qwLength) )
#define IFileIo_GetCurrentPosition(This,pqwPosition) ( (This)->lpVtbl -> GetCurrentPosition(This,pqwPosition) )
#define IFileIo_SetCurrentPosition(This,qwPosition) ( (This)->lpVtbl -> SetCurrentPosition(This,qwPosition) )
#define IFileIo_IsEndOfStream(This,pbEndOfStream) ( (This)->lpVtbl -> IsEndOfStream(This,pbEndOfStream) )
#define IFileIo_Read(This,pbt,ul,pulRead) ( (This)->lpVtbl -> Read(This,pbt,ul,pulRead) )
#define IFileIo_Write(This,pbt,ul,pulWritten) ( (This)->lpVtbl -> Write(This,pbt,ul,pulWritten) )
#define IFileIo_Seek(This,eSeekOrigin,qwSeekOffset,dwSeekFlags,pqwCurrentPosition) ( (This)->lpVtbl -> Seek(This,eSeekOrigin,qwSeekOffset,dwSeekFlags,pqwCurrentPosition) )
#define IFileIo_Close(This) ( (This)->lpVtbl -> Close(This) )
#endif
#endif
#ifndef __IFileClient_INTERFACE_DEFINED__
#define __IFileClient_INTERFACE_DEFINED__
extern const IID IID_IFileClient;
typedef struct IFileClientVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IFileClient * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IFileClient * This);
	ULONG(STDMETHODCALLTYPE * Release) (IFileClient * This);
	HRESULT(STDMETHODCALLTYPE * GetObjectDiskSize) (IFileClient * This, QWORD * pqwSize);
	HRESULT(STDMETHODCALLTYPE * Write) (IFileClient * This, IFileIo * pFio);
	HRESULT(STDMETHODCALLTYPE * Read) (IFileClient * This, IFileIo * pFio);
	END_INTERFACE
}  IFileClientVtbl;
interface IFileClient
{
	CONST_VTBL struct IFileClientVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IFileClient_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IFileClient_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IFileClient_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IFileClient_GetObjectDiskSize(This,pqwSize) ( (This)->lpVtbl -> GetObjectDiskSize(This,pqwSize) )
#define IFileClient_Write(This,pFio) ( (This)->lpVtbl -> Write(This,pFio) )
#define IFileClient_Read(This,pFio) ( (This)->lpVtbl -> Read(This,pFio) )
#endif
#endif
#ifndef __IClusterDetector_INTERFACE_DEFINED__
#define __IClusterDetector_INTERFACE_DEFINED__
extern const IID IID_IClusterDetector;
typedef struct IClusterDetectorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IClusterDetector * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IClusterDetector * This);
	ULONG(STDMETHODCALLTYPE * Release) (IClusterDetector * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IClusterDetector * This, WORD wBaseEntryLevel, WORD wClusterEntryLevel);
	HRESULT(STDMETHODCALLTYPE * Detect) (IClusterDetector * This, DWORD dwMaxNumClusters, FLOAT fMinClusterDuration, FLOAT fMaxClusterDuration, IToc * pSrcToc, IToc ** ppDstToc);
	END_INTERFACE
}  IClusterDetectorVtbl;
interface IClusterDetector
{
	CONST_VTBL struct IClusterDetectorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IClusterDetector_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IClusterDetector_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IClusterDetector_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IClusterDetector_Initialize(This,wBaseEntryLevel,wClusterEntryLevel) ( (This)->lpVtbl -> Initialize(This,wBaseEntryLevel,wClusterEntryLevel) )
#define IClusterDetector_Detect(This,dwMaxNumClusters,fMinClusterDuration,fMaxClusterDuration,pSrcToc,ppDstToc) ( (This)->lpVtbl -> Detect(This,dwMaxNumClusters,fMinClusterDuration,fMaxClusterDuration,pSrcToc,ppDstToc) )
#endif
#endif
STDAPI CreateToc(IToc **ppTableOfContents);
STDAPI CreateTocEntryList(ITocEntryList **ppTocEntryList);
STDAPI CreateTocEntry(ITocEntry **ppTocEntry);
STDAPI CreateTocCollection(ITocCollection **ppTocCollection);
STDAPI CreateTocParser(ITocParser **ppTocParser);
STDAPI CreateFileIo(IFileIo **ppFileIo);
extern RPC_IF_HANDLE __MIDL_itf_wmcodecdsp_0000_0025_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmcodecdsp_0000_0025_v0_0_s_ifspec;
#ifndef __WMCodecDSPCLSIDTypeLib_LIBRARY_DEFINED__
#define __WMCodecDSPCLSIDTypeLib_LIBRARY_DEFINED__
extern const IID LIBID_WMCodecDSPCLSIDTypeLib;
extern const CLSID CLSID_CMpeg4DecMediaObject;
extern const CLSID CLSID_CMpeg43DecMediaObject;
extern const CLSID CLSID_CMpeg4sDecMediaObject;
extern const CLSID CLSID_CMpeg4sDecMFT;
extern const CLSID CLSID_CZuneM4S2DecMediaObject;
extern const CLSID CLSID_CMpeg4EncMediaObject;
extern const CLSID CLSID_CMpeg4sEncMediaObject;
extern const CLSID CLSID_CMSSCDecMediaObject;
extern const CLSID CLSID_CMSSCEncMediaObject;
extern const CLSID CLSID_CMSSCEncMediaObject2;
extern const CLSID CLSID_CWMADecMediaObject;
extern const CLSID CLSID_CWMAEncMediaObject;
extern const CLSID CLSID_CWMATransMediaObject;
extern const CLSID CLSID_CWMSPDecMediaObject;
extern const CLSID CLSID_CWMSPEncMediaObject;
extern const CLSID CLSID_CWMSPEncMediaObject2;
extern const CLSID CLSID_CWMTDecMediaObject;
extern const CLSID CLSID_CWMTEncMediaObject;
extern const CLSID CLSID_CWMVDecMediaObject;
extern const CLSID CLSID_CWMVEncMediaObject2;
extern const CLSID CLSID_CWMVXEncMediaObject;
extern const CLSID CLSID_CWMV9EncMediaObject;
extern const CLSID CLSID_CWVC1DecMediaObject;
extern const CLSID CLSID_CWVC1EncMediaObject;
extern const CLSID CLSID_CDeColorConvMediaObject;
extern const CLSID CLSID_CDVDecoderMediaObject;
extern const CLSID CLSID_CDVEncoderMediaObject;
extern const CLSID CLSID_CMpeg2DecMediaObject;
extern const CLSID CLSID_CPK_DS_MPEG2Decoder;
extern const CLSID CLSID_CAC3DecMediaObject;
extern const CLSID CLSID_CPK_DS_AC3Decoder;
extern const CLSID CLSID_CMP3DecMediaObject;
extern const CLSID CLSID_CResamplerMediaObject;
extern const CLSID CLSID_CResizerMediaObject;
extern const CLSID CLSID_CInterlaceMediaObject;
extern const CLSID CLSID_CWMAudioLFXAPO;
extern const CLSID CLSID_CWMAudioGFXAPO;
extern const CLSID CLSID_CWMAudioSpdTxDMO;
extern const CLSID CLSID_CWMAudioAEC;
extern const CLSID CLSID_CClusterDetectorDmo;
extern const CLSID CLSID_CColorControlDmo;
extern const CLSID CLSID_CColorConvertDMO;
extern const CLSID CLSID_CColorLegalizerDmo;
extern const CLSID CLSID_CFrameInterpDMO;
extern const CLSID CLSID_CFrameRateConvertDmo;
extern const CLSID CLSID_CResizerDMO;
extern const CLSID CLSID_CShotDetectorDmo;
extern const CLSID CLSID_CSmpteTransformsDmo;
extern const CLSID CLSID_CThumbnailGeneratorDmo;
extern const CLSID CLSID_CTocGeneratorDmo;
extern const CLSID CLSID_CMPEGAACDecMediaObject;
extern const CLSID CLSID_CNokiaAACDecMediaObject;
extern const CLSID CLSID_CVodafoneAACDecMediaObject;
extern const CLSID CLSID_CZuneAACCCDecMediaObject;
extern const CLSID CLSID_CNokiaAACCCDecMediaObject;
extern const CLSID CLSID_CVodafoneAACCCDecMediaObject;
extern const CLSID CLSID_CMPEG2EncoderDS;
extern const CLSID CLSID_CMPEG2EncoderVideoDS;
extern const CLSID CLSID_CMPEG2EncoderAudioDS;
extern const CLSID CLSID_CMPEG2AudDecoderDS;
extern const CLSID CLSID_CMPEG2VidDecoderDS;
extern const CLSID CLSID_CDTVAudDecoderDS;
extern const CLSID CLSID_CDTVVidDecoderDS;
extern const CLSID CLSID_CMSAC3Enc;
extern const CLSID CLSID_CMSH264DecoderMFT;
#endif
#endif
