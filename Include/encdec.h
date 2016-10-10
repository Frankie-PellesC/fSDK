/*+@@file@@----------------------------------------------------------------*//*!
 \file		encdec.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul  9 20:12:20 2016
 \date		Modified on Sat Jul  9 20:12:20 2016
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
#ifndef __encdec_h__
#define __encdec_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IETFilterConfig_FWD_DEFINED__
#define __IETFilterConfig_FWD_DEFINED__
typedef interface IETFilterConfig IETFilterConfig;
#endif
#ifndef __IDTFilterConfig_FWD_DEFINED__
#define __IDTFilterConfig_FWD_DEFINED__
typedef interface IDTFilterConfig IDTFilterConfig;
#endif
#ifndef __IXDSCodecConfig_FWD_DEFINED__
#define __IXDSCodecConfig_FWD_DEFINED__
typedef interface IXDSCodecConfig IXDSCodecConfig;
#endif
#ifndef __IDTFilterLicenseRenewal_FWD_DEFINED__
#define __IDTFilterLicenseRenewal_FWD_DEFINED__
typedef interface IDTFilterLicenseRenewal IDTFilterLicenseRenewal;
#endif
#ifndef __IPTFilterLicenseRenewal_FWD_DEFINED__
#define __IPTFilterLicenseRenewal_FWD_DEFINED__
typedef interface IPTFilterLicenseRenewal IPTFilterLicenseRenewal;
#endif
#ifndef __IMceBurnerControl_FWD_DEFINED__
#define __IMceBurnerControl_FWD_DEFINED__
typedef interface IMceBurnerControl IMceBurnerControl;
#endif
#ifndef __IMceBurnerControlTest_FWD_DEFINED__
#define __IMceBurnerControlTest_FWD_DEFINED__
typedef interface IMceBurnerControlTest IMceBurnerControlTest;
#endif
#ifndef __IETFilter_FWD_DEFINED__
#define __IETFilter_FWD_DEFINED__
typedef interface IETFilter IETFilter;
#endif
#ifndef __IETFilterEvents_FWD_DEFINED__
#define __IETFilterEvents_FWD_DEFINED__
typedef interface IETFilterEvents IETFilterEvents;
#endif
#ifndef __ETFilter_FWD_DEFINED__
#define __ETFilter_FWD_DEFINED__
typedef struct ETFilter ETFilter;
#endif
#ifndef __IDTFilter_FWD_DEFINED__
#define __IDTFilter_FWD_DEFINED__
typedef interface IDTFilter IDTFilter;
#endif
#ifndef __IDTFilter2_FWD_DEFINED__
#define __IDTFilter2_FWD_DEFINED__
typedef interface IDTFilter2 IDTFilter2;
#endif
#ifndef __IDTFilter3_FWD_DEFINED__
#define __IDTFilter3_FWD_DEFINED__
typedef interface IDTFilter3 IDTFilter3;
#endif
#ifndef __IDTFilterEvents_FWD_DEFINED__
#define __IDTFilterEvents_FWD_DEFINED__
typedef interface IDTFilterEvents IDTFilterEvents;
#endif
#ifndef __DTFilter_FWD_DEFINED__
#define __DTFilter_FWD_DEFINED__
typedef struct DTFilter DTFilter;
#endif
#ifndef __IXDSCodec_FWD_DEFINED__
#define __IXDSCodec_FWD_DEFINED__
typedef interface IXDSCodec IXDSCodec;
#endif
#ifndef __IXDSCodecEvents_FWD_DEFINED__
#define __IXDSCodecEvents_FWD_DEFINED__
typedef interface IXDSCodecEvents IXDSCodecEvents;
#endif
#ifndef __XDSCodec_FWD_DEFINED__
#define __XDSCodec_FWD_DEFINED__
typedef struct XDSCodec XDSCodec;
#endif
#ifndef __CXDSData_FWD_DEFINED__
#define __CXDSData_FWD_DEFINED__
typedef struct CXDSData CXDSData;
#endif
#include "oaidl.h"
#include "ocidl.h"
#include "TvRatings.h"
#pragma once
DEFINE_GUID(SID_DRMSecureServiceChannel, 0xC4C4C4C4, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID(CLSID_ETFilterEncProperties, 0xC4C4C481, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID(CLSID_ETFilterTagProperties, 0xC4C4C491, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID(CLSID_PTFilter, 0x9cd31617, 0xb303, 0x4f96, 0x83, 0x30, 0x2e, 0xb1, 0x73, 0xea, 0x4d, 0xc6);
DEFINE_GUID(CLSID_DTFilterEncProperties, 0xC4C4C482, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID(CLSID_DTFilterTagProperties, 0xC4C4C492, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID(CLSID_XDSCodecProperties, 0xC4C4C483, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID(CLSID_XDSCodecTagProperties, 0xC4C4C493, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID(CLSID_CPCAFiltersCategory, 0xC4C4C4FC, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID(EVENTID_XDSCodecNewXDSRating, 0xC4C4C4E0, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID(EVENTID_XDSCodecDuplicateXDSRating, 0xC4C4C4DF, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID(EVENTID_XDSCodecNewXDSPacket, 0xC4C4C4E1, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID(EVENTID_DTFilterRatingChange, 0xC4C4C4E2, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID(EVENTID_DTFilterRatingsBlock, 0xC4C4C4E3, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID(EVENTID_DTFilterRatingsUnblock, 0xC4C4C4E4, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID(EVENTID_DTFilterXDSPacket, 0xC4C4C4E5, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID(EVENTID_ETFilterEncryptionOn, 0xC4C4C4E6, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID(EVENTID_ETFilterEncryptionOff, 0xC4C4C4E7, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID(EVENTID_DTFilterCOPPUnblock, 0xC4C4C4E8, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID(EVENTID_EncDecFilterError, 0xC4C4C4E9, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID(EVENTID_DTFilterCOPPBlock, 0xC4C4C4EA, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID(EVENTID_ETFilterCopyOnce, 0xC4C4C4EB, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID(EVENTID_ETFilterCopyNever, 0xC4C4C4F0, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID(EVENTID_DTFilterDataFormatOK, 0xC4C4C4EC, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID(EVENTID_DTFilterDataFormatFailure, 0xC4C4C4ED, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID(EVENTID_ETDTFilterLicenseOK, 0xC4C4C4EE, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID(EVENTID_ETDTFilterLicenseFailure, 0xC4C4C4EF, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID(MEDIASUBTYPE_ETDTFilter_Tagged, 0xC4C4C4D0, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID(FORMATTYPE_ETDTFilter_Tagged, 0xC4C4C4D1, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID(MEDIASUBTYPE_CPFilters_Processed, 0x46adbd28, 0x6fd0, 0x4796, 0x93, 0xb2, 0x15, 0x5c, 0x51, 0xdc, 0x4, 0x8d);
DEFINE_GUID(FORMATTYPE_CPFilters_Processed, 0x6739b36f, 0x1d5f, 0x4ac2, 0x81, 0x92, 0x28, 0xbb, 0xe, 0x73, 0xd1, 0x6a);
DEFINE_GUID(EVENTID_EncDecFilterEvent, 0x4a1b465b, 0xfb9, 0x4159, 0xaf, 0xbd, 0xe3, 0x30, 0x6, 0xa0, 0xf9, 0xf4);
enum FormatNotSupportedEvents
{
	FORMATNOTSUPPORTED_CLEAR = 0,
	FORMATNOTSUPPORTED_NOTSUPPORTED = 1
};
DEFINE_GUID(EVENTID_FormatNotSupportedEvent, 0x24b2280a, 0xb2aa, 0x4777, 0xbf, 0x65, 0x63, 0xf3, 0x5e, 0x7b, 0x2, 0x4a);
DEFINE_GUID(EVENTID_DemultiplexerFilterDiscontinuity, 0x16155770, 0xaed5, 0x475c, 0xbb, 0x98, 0x95, 0xa3, 0x30, 0x70, 0xdf, 0xc);
DEFINE_GUID(DSATTRIB_WMDRMProtectionInfo, 0x40749583, 0x6b9d, 0x4eec, 0xb4, 0x3c, 0x67, 0xa1, 0x80, 0x1e, 0x1a, 0x9b);
DEFINE_GUID(DSATTRIB_BadSampleInfo, 0xe4846dda, 0x5838, 0x42b4, 0xb8, 0x97, 0x6f, 0x7e, 0x5f, 0xaa, 0x2f, 0x2f);
#pragma pack(push, 1)
typedef struct __MIDL___MIDL_itf_encdec_0000_0000_0001
{
	unsigned short wszKID[25];
	unsigned __int64 qwCounter;
	unsigned __int64 qwIndex;
	unsigned char bOffset;
} WMDRMProtectionInfo;
typedef struct __MIDL___MIDL_itf_encdec_0000_0000_0002
{
	HRESULT hrReason;
} BadSampleInfo;
#pragma pack(pop)
typedef LONGLONG REFERENCE_TIME;
typedef LONG PackedTvRating;
typedef DECLSPEC_UUID("25AEE876-3D61-4486-917E-7C0CB3D9983C")
enum ProtType
{
	PROT_COPY_FREE = 1,
	PROT_COPY_ONCE = 2,
	PROT_COPY_NEVER = 3,
	PROT_COPY_NEVER_REALLY = 4,
	PROT_COPY_NO_MORE = 5,
	PROT_COPY_FREE_CIT = 6,
	PROT_COPY_BF = 7,
	PROT_COPY_CN_RECORDING_STOP = 8,
	PROT_COPY_FREE_SECURE = 9,
	PROT_COPY_INVALID = 50
} ProtType;
typedef enum EncDecEvents
{
	ENCDEC_CPEVENT = 0,
	ENCDEC_RECORDING_STATUS = (ENCDEC_CPEVENT + 1)
} EncDecEvents;
typedef enum CPRecordingStatus
{
	RECORDING_STOPPED = 0,
	RECORDING_STARTED = 1
} CPRecordingStatus;
typedef enum CPEventBitShift
{
	CPEVENT_BITSHIFT_RATINGS = 0,
	CPEVENT_BITSHIFT_COPP = (CPEVENT_BITSHIFT_RATINGS + 1),
	CPEVENT_BITSHIFT_LICENSE = (CPEVENT_BITSHIFT_COPP + 1),
	CPEVENT_BITSHIFT_ROLLBACK = (CPEVENT_BITSHIFT_LICENSE + 1),
	CPEVENT_BITSHIFT_SAC = (CPEVENT_BITSHIFT_ROLLBACK + 1),
	CPEVENT_BITSHIFT_DOWNRES = (CPEVENT_BITSHIFT_SAC + 1),
	CPEVENT_BITSHIFT_STUBLIB = (CPEVENT_BITSHIFT_DOWNRES + 1),
	CPEVENT_BITSHIFT_UNTRUSTEDGRAPH = (CPEVENT_BITSHIFT_STUBLIB + 1),
	CPEVENT_BITSHIFT_PENDING_CERTIFICATE = (CPEVENT_BITSHIFT_UNTRUSTEDGRAPH + 1),
	CPEVENT_BITSHIFT_NO_PLAYREADY = (CPEVENT_BITSHIFT_PENDING_CERTIFICATE + 1)
} CPEventBitShift;
typedef enum CPEvents
{
	CPEVENT_NONE = 0,
	CPEVENT_RATINGS = (CPEVENT_NONE + 1),
	CPEVENT_COPP = (CPEVENT_RATINGS + 1),
	CPEVENT_LICENSE = (CPEVENT_COPP + 1),
	CPEVENT_ROLLBACK = (CPEVENT_LICENSE + 1),
	CPEVENT_SAC = (CPEVENT_ROLLBACK + 1),
	CPEVENT_DOWNRES = (CPEVENT_SAC + 1),
	CPEVENT_STUBLIB = (CPEVENT_DOWNRES + 1),
	CPEVENT_UNTRUSTEDGRAPH = (CPEVENT_STUBLIB + 1),
	CPEVENT_PROTECTWINDOWED = (CPEVENT_UNTRUSTEDGRAPH + 1)
} CPEvents;
typedef enum RevokedComponent
{
	REVOKED_COPP = 0,
	REVOKED_SAC = (REVOKED_COPP + 1),
	REVOKED_APP_STUB = (REVOKED_SAC + 1),
	REVOKED_SECURE_PIPELINE = (REVOKED_APP_STUB + 1),
	REVOKED_MAX_TYPES = (REVOKED_SECURE_PIPELINE + 1)
} RevokedComponent;
typedef enum EnTag_Mode
{
	EnTag_Remove = 0,
	EnTag_Once = 0x1,
	EnTag_Repeat = 0x2
} EnTag_Mode;
typedef DECLSPEC_UUID("6F8C2442-2BFB-4180-9EE5-EA1FB47AE35C")
enum COPPEventBlockReason
{
	COPP_Unknown = -1,
	COPP_BadDriver = 0,
	COPP_NoCardHDCPSupport = 1,
	COPP_NoMonitorHDCPSupport = 2,
	COPP_BadCertificate = 3,
	COPP_InvalidBusProtection = 4,
	COPP_AeroGlassOff = 5,
	COPP_RogueApp = 6,
	COPP_ForbiddenVideo = 7,
	COPP_Activate = 8,
	COPP_DigitalAudioUnprotected = 9
} COPPEventBlockReason;
typedef DECLSPEC_UUID("57BCA1BE-DF7A-434e-8B89-26D6A0541FDA")
enum LicenseEventBlockReason
{
	LIC_BadLicense = 0,
	LIC_NeedIndiv = 1,
	LIC_Expired = 2,
	LIC_NeedActivation = 3,
	LIC_ExtenderBlocked = 4
} LicenseEventBlockReason;
typedef DECLSPEC_UUID("D5CC1CDC-EF31-48dc-95B8-AFD34C08036B")
enum DownResEventParam
{
	DOWNRES_Always = 0,
	DOWNRES_InWindowOnly = 1,
	DOWNRES_Undefined = 2
} DownResEventParam;
extern RPC_IF_HANDLE __MIDL_itf_encdec_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_encdec_0000_0000_v0_0_s_ifspec;
#ifndef __IETFilterConfig_INTERFACE_DEFINED__
#define __IETFilterConfig_INTERFACE_DEFINED__
extern const IID IID_IETFilterConfig;
typedef struct IETFilterConfigVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IETFilterConfig *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IETFilterConfig *This);
	ULONG(STDMETHODCALLTYPE *Release) (IETFilterConfig *This);
	HRESULT(STDMETHODCALLTYPE *InitLicense) (IETFilterConfig *This, int LicenseId);
	HRESULT(STDMETHODCALLTYPE *GetSecureChannelObject) (IETFilterConfig *This, IUnknown **ppUnkDRMSecureChannel);
	END_INTERFACE
}  IETFilterConfigVtbl;
	interface IETFilterConfig
{
		CONST_VTBL struct IETFilterConfigVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IETFilterConfig_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IETFilterConfig_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IETFilterConfig_Release(This)( (This)->lpVtbl -> Release(This) )
#define IETFilterConfig_InitLicense(This,LicenseId)( (This)->lpVtbl -> InitLicense(This,LicenseId) )
#define IETFilterConfig_GetSecureChannelObject(This,ppUnkDRMSecureChannel)( (This)->lpVtbl -> GetSecureChannelObject(This,ppUnkDRMSecureChannel) )
#endif
#endif
#ifndef __IDTFilterConfig_INTERFACE_DEFINED__
#define __IDTFilterConfig_INTERFACE_DEFINED__
extern const IID IID_IDTFilterConfig;
typedef struct IDTFilterConfigVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDTFilterConfig *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDTFilterConfig *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDTFilterConfig *This);
	HRESULT(STDMETHODCALLTYPE *GetSecureChannelObject) (IDTFilterConfig *This, IUnknown **ppUnkDRMSecureChannel);
	END_INTERFACE
}  IDTFilterConfigVtbl;
interface IDTFilterConfig
{
	CONST_VTBL struct IDTFilterConfigVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDTFilterConfig_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDTFilterConfig_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDTFilterConfig_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDTFilterConfig_GetSecureChannelObject(This,ppUnkDRMSecureChannel)( (This)->lpVtbl -> GetSecureChannelObject(This,ppUnkDRMSecureChannel) )
#endif
#endif
#ifndef __IXDSCodecConfig_INTERFACE_DEFINED__
#define __IXDSCodecConfig_INTERFACE_DEFINED__
extern const IID IID_IXDSCodecConfig;
typedef struct IXDSCodecConfigVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IXDSCodecConfig *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IXDSCodecConfig *This);
	ULONG(STDMETHODCALLTYPE *Release) (IXDSCodecConfig *This);
	HRESULT(STDMETHODCALLTYPE *GetSecureChannelObject) (IXDSCodecConfig *This, IUnknown **ppUnkDRMSecureChannel);
	HRESULT(STDMETHODCALLTYPE *SetPauseBufferTime) (IXDSCodecConfig *This, DWORD dwPauseBufferTime);
	END_INTERFACE
}  IXDSCodecConfigVtbl;
interface IXDSCodecConfig
{
	CONST_VTBL struct IXDSCodecConfigVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IXDSCodecConfig_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IXDSCodecConfig_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IXDSCodecConfig_Release(This)( (This)->lpVtbl -> Release(This) )
#define IXDSCodecConfig_GetSecureChannelObject(This,ppUnkDRMSecureChannel)( (This)->lpVtbl -> GetSecureChannelObject(This,ppUnkDRMSecureChannel) )
#define IXDSCodecConfig_SetPauseBufferTime(This,dwPauseBufferTime)( (This)->lpVtbl -> SetPauseBufferTime(This,dwPauseBufferTime) )
#endif
#endif
#ifndef __IDTFilterLicenseRenewal_INTERFACE_DEFINED__
#define __IDTFilterLicenseRenewal_INTERFACE_DEFINED__
extern const IID IID_IDTFilterLicenseRenewal;
typedef struct IDTFilterLicenseRenewalVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDTFilterLicenseRenewal *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDTFilterLicenseRenewal *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDTFilterLicenseRenewal *This);
	HRESULT(STDMETHODCALLTYPE *GetLicenseRenewalData) (IDTFilterLicenseRenewal *This, WCHAR **ppwszFileName, WCHAR **ppwszExpiredKid, WCHAR **ppwszTunerId);
	END_INTERFACE
}  IDTFilterLicenseRenewalVtbl;
interface IDTFilterLicenseRenewal
{
	CONST_VTBL struct IDTFilterLicenseRenewalVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDTFilterLicenseRenewal_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDTFilterLicenseRenewal_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDTFilterLicenseRenewal_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDTFilterLicenseRenewal_GetLicenseRenewalData(This,ppwszFileName,ppwszExpiredKid,ppwszTunerId)( (This)->lpVtbl -> GetLicenseRenewalData(This,ppwszFileName,ppwszExpiredKid,ppwszTunerId) )
#endif
#endif
#ifndef __IPTFilterLicenseRenewal_INTERFACE_DEFINED__
#define __IPTFilterLicenseRenewal_INTERFACE_DEFINED__
extern const IID IID_IPTFilterLicenseRenewal;
typedef struct IPTFilterLicenseRenewalVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IPTFilterLicenseRenewal *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IPTFilterLicenseRenewal *This);
	ULONG(STDMETHODCALLTYPE *Release) (IPTFilterLicenseRenewal *This);
	HRESULT(STDMETHODCALLTYPE *RenewLicenses) (IPTFilterLicenseRenewal *This, WCHAR *wszFileName, WCHAR *wszExpiredKid, DWORD dwCallersId, BOOL bHighPriority);
	HRESULT(STDMETHODCALLTYPE *CancelLicenseRenewal) (IPTFilterLicenseRenewal *This);
	END_INTERFACE
}  IPTFilterLicenseRenewalVtbl;
interface IPTFilterLicenseRenewal
{
	CONST_VTBL struct IPTFilterLicenseRenewalVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IPTFilterLicenseRenewal_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IPTFilterLicenseRenewal_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IPTFilterLicenseRenewal_Release(This)( (This)->lpVtbl -> Release(This) )
#define IPTFilterLicenseRenewal_RenewLicenses(This,wszFileName,wszExpiredKid,dwCallersId,bHighPriority)( (This)->lpVtbl -> RenewLicenses(This,wszFileName,wszExpiredKid,dwCallersId,bHighPriority) )
#define IPTFilterLicenseRenewal_CancelLicenseRenewal(This)( (This)->lpVtbl -> CancelLicenseRenewal(This) )
#endif
#endif
#ifndef __IMceBurnerControl_INTERFACE_DEFINED__
#define __IMceBurnerControl_INTERFACE_DEFINED__
extern const IID IID_IMceBurnerControl;
typedef struct IMceBurnerControlVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMceBurnerControl *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMceBurnerControl *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMceBurnerControl *This);
	HRESULT(STDMETHODCALLTYPE *GetBurnerNoDecryption) (IMceBurnerControl *This);
	END_INTERFACE
}  IMceBurnerControlVtbl;
interface IMceBurnerControl
{
	CONST_VTBL struct IMceBurnerControlVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMceBurnerControl_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMceBurnerControl_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IMceBurnerControl_Release(This)( (This)->lpVtbl -> Release(This) )
#define IMceBurnerControl_GetBurnerNoDecryption(This)( (This)->lpVtbl -> GetBurnerNoDecryption(This) )
#endif
#endif
#ifndef __IMceBurnerControlTest_INTERFACE_DEFINED__
#define __IMceBurnerControlTest_INTERFACE_DEFINED__
extern const IID IID_IMceBurnerControlTest;
typedef struct IMceBurnerControlTestVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMceBurnerControlTest *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMceBurnerControlTest *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMceBurnerControlTest *This);
	HRESULT(STDMETHODCALLTYPE *SetBurnerNoDecryption) (IMceBurnerControlTest *This, BOOL fEnable);
	END_INTERFACE
}  IMceBurnerControlTestVtbl;
interface IMceBurnerControlTest
{
	CONST_VTBL struct IMceBurnerControlTestVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMceBurnerControlTest_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMceBurnerControlTest_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IMceBurnerControlTest_Release(This)( (This)->lpVtbl -> Release(This) )
#define IMceBurnerControlTest_SetBurnerNoDecryption(This,fEnable)( (This)->lpVtbl -> SetBurnerNoDecryption(This,fEnable) )
#endif
#endif
#ifndef __EncDec_LIBRARY_DEFINED__
#define __EncDec_LIBRARY_DEFINED__
extern const IID LIBID_EncDec;
#ifndef __IETFilter_INTERFACE_DEFINED__
#define __IETFilter_INTERFACE_DEFINED__
extern const IID IID_IETFilter;
typedef struct IETFilterVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IETFilter *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IETFilter *This);
	ULONG(STDMETHODCALLTYPE *Release) (IETFilter *This);
	HRESULT(STDMETHODCALLTYPE *get_EvalRatObjOK) (IETFilter *This, HRESULT *pHrCoCreateRetVal);
	HRESULT(STDMETHODCALLTYPE *GetCurrRating) (IETFilter *This, EnTvRat_System *pEnSystem, EnTvRat_GenericLevel *pEnRating, LONG *plbfEnAttr);
	HRESULT(STDMETHODCALLTYPE *GetCurrLicenseExpDate) (IETFilter *This, ProtType *protType, long *lpDateTime);
	HRESULT(STDMETHODCALLTYPE *GetLastErrorCode) (IETFilter *This);
	HRESULT(STDMETHODCALLTYPE *SetRecordingOn) (IETFilter *This, BOOL fRecState);
	END_INTERFACE
}  IETFilterVtbl;
interface IETFilter
{
	CONST_VTBL struct IETFilterVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IETFilter_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IETFilter_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IETFilter_Release(This)( (This)->lpVtbl -> Release(This) )
#define IETFilter_get_EvalRatObjOK(This,pHrCoCreateRetVal)( (This)->lpVtbl -> get_EvalRatObjOK(This,pHrCoCreateRetVal) )
#define IETFilter_GetCurrRating(This,pEnSystem,pEnRating,plbfEnAttr)( (This)->lpVtbl -> GetCurrRating(This,pEnSystem,pEnRating,plbfEnAttr) )
#define IETFilter_GetCurrLicenseExpDate(This,protType,lpDateTime)( (This)->lpVtbl -> GetCurrLicenseExpDate(This,protType,lpDateTime) )
#define IETFilter_GetLastErrorCode(This)( (This)->lpVtbl -> GetLastErrorCode(This) )
#define IETFilter_SetRecordingOn(This,fRecState)( (This)->lpVtbl -> SetRecordingOn(This,fRecState) )
#endif
#endif
#ifndef __IETFilterEvents_DISPINTERFACE_DEFINED__
#define __IETFilterEvents_DISPINTERFACE_DEFINED__
extern const IID DIID_IETFilterEvents;
typedef struct IETFilterEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IETFilterEvents *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IETFilterEvents *This);
	ULONG(STDMETHODCALLTYPE *Release) (IETFilterEvents *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IETFilterEvents *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IETFilterEvents *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IETFilterEvents *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IETFilterEvents *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	END_INTERFACE
}  IETFilterEventsVtbl;
interface IETFilterEvents
{
	CONST_VTBL struct IETFilterEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IETFilterEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IETFilterEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IETFilterEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define IETFilterEvents_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IETFilterEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IETFilterEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IETFilterEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#endif
#endif
extern const CLSID CLSID_ETFilter;
#ifndef __IDTFilter_INTERFACE_DEFINED__
#define __IDTFilter_INTERFACE_DEFINED__
extern const IID IID_IDTFilter;
typedef struct IDTFilterVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDTFilter *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDTFilter *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDTFilter *This);
	HRESULT(STDMETHODCALLTYPE *get_EvalRatObjOK) (IDTFilter *This, HRESULT *pHrCoCreateRetVal);
	HRESULT(STDMETHODCALLTYPE *GetCurrRating) (IDTFilter *This, EnTvRat_System *pEnSystem, EnTvRat_GenericLevel *pEnRating, LONG *plbfEnAttr);
	HRESULT(STDMETHODCALLTYPE *get_BlockedRatingAttributes) (IDTFilter *This, EnTvRat_System enSystem, EnTvRat_GenericLevel enLevel, LONG *plbfEnAttr);
	HRESULT(STDMETHODCALLTYPE *put_BlockedRatingAttributes) (IDTFilter *This, EnTvRat_System enSystem, EnTvRat_GenericLevel enLevel, LONG lbfAttrs);
	HRESULT(STDMETHODCALLTYPE *get_BlockUnRated) (IDTFilter *This, BOOL *pfBlockUnRatedShows);
	HRESULT(STDMETHODCALLTYPE *put_BlockUnRated) (IDTFilter *This, BOOL fBlockUnRatedShows);
	HRESULT(STDMETHODCALLTYPE *get_BlockUnRatedDelay) (IDTFilter *This, LONG *pmsecsDelayBeforeBlock);
	HRESULT(STDMETHODCALLTYPE *put_BlockUnRatedDelay) (IDTFilter *This, LONG msecsDelayBeforeBlock);
	END_INTERFACE
}  IDTFilterVtbl;
interface IDTFilter
{
	CONST_VTBL struct IDTFilterVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDTFilter_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDTFilter_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDTFilter_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDTFilter_get_EvalRatObjOK(This,pHrCoCreateRetVal)( (This)->lpVtbl -> get_EvalRatObjOK(This,pHrCoCreateRetVal) )
#define IDTFilter_GetCurrRating(This,pEnSystem,pEnRating,plbfEnAttr)( (This)->lpVtbl -> GetCurrRating(This,pEnSystem,pEnRating,plbfEnAttr) )
#define IDTFilter_get_BlockedRatingAttributes(This,enSystem,enLevel,plbfEnAttr)( (This)->lpVtbl -> get_BlockedRatingAttributes(This,enSystem,enLevel,plbfEnAttr) )
#define IDTFilter_put_BlockedRatingAttributes(This,enSystem,enLevel,lbfAttrs)( (This)->lpVtbl -> put_BlockedRatingAttributes(This,enSystem,enLevel,lbfAttrs) )
#define IDTFilter_get_BlockUnRated(This,pfBlockUnRatedShows)( (This)->lpVtbl -> get_BlockUnRated(This,pfBlockUnRatedShows) )
#define IDTFilter_put_BlockUnRated(This,fBlockUnRatedShows)( (This)->lpVtbl -> put_BlockUnRated(This,fBlockUnRatedShows) )
#define IDTFilter_get_BlockUnRatedDelay(This,pmsecsDelayBeforeBlock)( (This)->lpVtbl -> get_BlockUnRatedDelay(This,pmsecsDelayBeforeBlock) )
#define IDTFilter_put_BlockUnRatedDelay(This,msecsDelayBeforeBlock)( (This)->lpVtbl -> put_BlockUnRatedDelay(This,msecsDelayBeforeBlock) )
#endif
#endif
#ifndef __IDTFilter2_INTERFACE_DEFINED__
#define __IDTFilter2_INTERFACE_DEFINED__
extern const IID IID_IDTFilter2;
typedef struct IDTFilter2Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDTFilter2 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDTFilter2 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDTFilter2 *This);
	HRESULT(STDMETHODCALLTYPE *get_EvalRatObjOK) (IDTFilter2 *This, HRESULT *pHrCoCreateRetVal);
	HRESULT(STDMETHODCALLTYPE *GetCurrRating) (IDTFilter2 *This, EnTvRat_System *pEnSystem, EnTvRat_GenericLevel *pEnRating, LONG *plbfEnAttr);
	HRESULT(STDMETHODCALLTYPE *get_BlockedRatingAttributes) (IDTFilter2 *This, EnTvRat_System enSystem, EnTvRat_GenericLevel enLevel, LONG *plbfEnAttr);
	HRESULT(STDMETHODCALLTYPE *put_BlockedRatingAttributes) (IDTFilter2 *This, EnTvRat_System enSystem, EnTvRat_GenericLevel enLevel, LONG lbfAttrs);
	HRESULT(STDMETHODCALLTYPE *get_BlockUnRated) (IDTFilter2 *This, BOOL *pfBlockUnRatedShows);
	HRESULT(STDMETHODCALLTYPE *put_BlockUnRated) (IDTFilter2 *This, BOOL fBlockUnRatedShows);
	HRESULT(STDMETHODCALLTYPE *get_BlockUnRatedDelay) (IDTFilter2 *This, LONG *pmsecsDelayBeforeBlock);
	HRESULT(STDMETHODCALLTYPE *put_BlockUnRatedDelay) (IDTFilter2 *This, LONG msecsDelayBeforeBlock);
	HRESULT(STDMETHODCALLTYPE *get_ChallengeUrl) (IDTFilter2 *This, BSTR *pbstrChallengeUrl);
	HRESULT(STDMETHODCALLTYPE *GetCurrLicenseExpDate) (IDTFilter2 *This, ProtType *protType, long *lpDateTime);
	HRESULT(STDMETHODCALLTYPE *GetLastErrorCode) (IDTFilter2 *This);
	END_INTERFACE
}  IDTFilter2Vtbl;
interface IDTFilter2
{
	CONST_VTBL struct IDTFilter2Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDTFilter2_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDTFilter2_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDTFilter2_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDTFilter2_get_EvalRatObjOK(This,pHrCoCreateRetVal)( (This)->lpVtbl -> get_EvalRatObjOK(This,pHrCoCreateRetVal) )
#define IDTFilter2_GetCurrRating(This,pEnSystem,pEnRating,plbfEnAttr)( (This)->lpVtbl -> GetCurrRating(This,pEnSystem,pEnRating,plbfEnAttr) )
#define IDTFilter2_get_BlockedRatingAttributes(This,enSystem,enLevel,plbfEnAttr)( (This)->lpVtbl -> get_BlockedRatingAttributes(This,enSystem,enLevel,plbfEnAttr) )
#define IDTFilter2_put_BlockedRatingAttributes(This,enSystem,enLevel,lbfAttrs)( (This)->lpVtbl -> put_BlockedRatingAttributes(This,enSystem,enLevel,lbfAttrs) )
#define IDTFilter2_get_BlockUnRated(This,pfBlockUnRatedShows)( (This)->lpVtbl -> get_BlockUnRated(This,pfBlockUnRatedShows) )
#define IDTFilter2_put_BlockUnRated(This,fBlockUnRatedShows)( (This)->lpVtbl -> put_BlockUnRated(This,fBlockUnRatedShows) )
#define IDTFilter2_get_BlockUnRatedDelay(This,pmsecsDelayBeforeBlock)( (This)->lpVtbl -> get_BlockUnRatedDelay(This,pmsecsDelayBeforeBlock) )
#define IDTFilter2_put_BlockUnRatedDelay(This,msecsDelayBeforeBlock)( (This)->lpVtbl -> put_BlockUnRatedDelay(This,msecsDelayBeforeBlock) )
#define IDTFilter2_get_ChallengeUrl(This,pbstrChallengeUrl)( (This)->lpVtbl -> get_ChallengeUrl(This,pbstrChallengeUrl) )
#define IDTFilter2_GetCurrLicenseExpDate(This,protType,lpDateTime)( (This)->lpVtbl -> GetCurrLicenseExpDate(This,protType,lpDateTime) )
#define IDTFilter2_GetLastErrorCode(This)( (This)->lpVtbl -> GetLastErrorCode(This) )
#endif
#endif
#ifndef __IDTFilter3_INTERFACE_DEFINED__
#define __IDTFilter3_INTERFACE_DEFINED__
extern const IID IID_IDTFilter3;
typedef struct IDTFilter3Vtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDTFilter3 *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDTFilter3 *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDTFilter3 *This);
	HRESULT(STDMETHODCALLTYPE *get_EvalRatObjOK) (IDTFilter3 *This, HRESULT *pHrCoCreateRetVal);
	HRESULT(STDMETHODCALLTYPE *GetCurrRating) (IDTFilter3 *This, EnTvRat_System *pEnSystem, EnTvRat_GenericLevel *pEnRating, LONG *plbfEnAttr);
	HRESULT(STDMETHODCALLTYPE *get_BlockedRatingAttributes) (IDTFilter3 *This, EnTvRat_System enSystem, EnTvRat_GenericLevel enLevel, LONG *plbfEnAttr);
	HRESULT(STDMETHODCALLTYPE *put_BlockedRatingAttributes) (IDTFilter3 *This, EnTvRat_System enSystem, EnTvRat_GenericLevel enLevel, LONG lbfAttrs);
	HRESULT(STDMETHODCALLTYPE *get_BlockUnRated) (IDTFilter3 *This, BOOL *pfBlockUnRatedShows);
	HRESULT(STDMETHODCALLTYPE *put_BlockUnRated) (IDTFilter3 *This, BOOL fBlockUnRatedShows);
	HRESULT(STDMETHODCALLTYPE *get_BlockUnRatedDelay) (IDTFilter3 *This, LONG *pmsecsDelayBeforeBlock);
	HRESULT(STDMETHODCALLTYPE *put_BlockUnRatedDelay) (IDTFilter3 *This, LONG msecsDelayBeforeBlock);
	HRESULT(STDMETHODCALLTYPE *get_ChallengeUrl) (IDTFilter3 *This, BSTR *pbstrChallengeUrl);
	HRESULT(STDMETHODCALLTYPE *GetCurrLicenseExpDate) (IDTFilter3 *This, ProtType *protType, long *lpDateTime);
	HRESULT(STDMETHODCALLTYPE *GetLastErrorCode) (IDTFilter3 *This);
	HRESULT(STDMETHODCALLTYPE *GetProtectionType) (IDTFilter3 *This, ProtType *pProtectionType);
	HRESULT(STDMETHODCALLTYPE *LicenseHasExpirationDate) (IDTFilter3 *This, BOOL *pfLicenseHasExpirationDate);
	HRESULT(STDMETHODCALLTYPE *SetRights) (IDTFilter3 *This, BSTR bstrRights);
	END_INTERFACE
}  IDTFilter3Vtbl;
interface IDTFilter3
{
	CONST_VTBL struct IDTFilter3Vtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDTFilter3_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDTFilter3_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDTFilter3_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDTFilter3_get_EvalRatObjOK(This,pHrCoCreateRetVal)( (This)->lpVtbl -> get_EvalRatObjOK(This,pHrCoCreateRetVal) )
#define IDTFilter3_GetCurrRating(This,pEnSystem,pEnRating,plbfEnAttr)( (This)->lpVtbl -> GetCurrRating(This,pEnSystem,pEnRating,plbfEnAttr) )
#define IDTFilter3_get_BlockedRatingAttributes(This,enSystem,enLevel,plbfEnAttr)( (This)->lpVtbl -> get_BlockedRatingAttributes(This,enSystem,enLevel,plbfEnAttr) )
#define IDTFilter3_put_BlockedRatingAttributes(This,enSystem,enLevel,lbfAttrs)( (This)->lpVtbl -> put_BlockedRatingAttributes(This,enSystem,enLevel,lbfAttrs) )
#define IDTFilter3_get_BlockUnRated(This,pfBlockUnRatedShows)( (This)->lpVtbl -> get_BlockUnRated(This,pfBlockUnRatedShows) )
#define IDTFilter3_put_BlockUnRated(This,fBlockUnRatedShows)( (This)->lpVtbl -> put_BlockUnRated(This,fBlockUnRatedShows) )
#define IDTFilter3_get_BlockUnRatedDelay(This,pmsecsDelayBeforeBlock)( (This)->lpVtbl -> get_BlockUnRatedDelay(This,pmsecsDelayBeforeBlock) )
#define IDTFilter3_put_BlockUnRatedDelay(This,msecsDelayBeforeBlock)( (This)->lpVtbl -> put_BlockUnRatedDelay(This,msecsDelayBeforeBlock) )
#define IDTFilter3_get_ChallengeUrl(This,pbstrChallengeUrl)( (This)->lpVtbl -> get_ChallengeUrl(This,pbstrChallengeUrl) )
#define IDTFilter3_GetCurrLicenseExpDate(This,protType,lpDateTime)( (This)->lpVtbl -> GetCurrLicenseExpDate(This,protType,lpDateTime) )
#define IDTFilter3_GetLastErrorCode(This)( (This)->lpVtbl -> GetLastErrorCode(This) )
#define IDTFilter3_GetProtectionType(This,pProtectionType)( (This)->lpVtbl -> GetProtectionType(This,pProtectionType) )
#define IDTFilter3_LicenseHasExpirationDate(This,pfLicenseHasExpirationDate)( (This)->lpVtbl -> LicenseHasExpirationDate(This,pfLicenseHasExpirationDate) )
#define IDTFilter3_SetRights(This,bstrRights)( (This)->lpVtbl -> SetRights(This,bstrRights) )
#endif
#endif
#ifndef __IDTFilterEvents_DISPINTERFACE_DEFINED__
#define __IDTFilterEvents_DISPINTERFACE_DEFINED__
extern const IID DIID_IDTFilterEvents;
typedef struct IDTFilterEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IDTFilterEvents *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IDTFilterEvents *This);
	ULONG(STDMETHODCALLTYPE *Release) (IDTFilterEvents *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IDTFilterEvents *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IDTFilterEvents *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IDTFilterEvents *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IDTFilterEvents *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	END_INTERFACE
}  IDTFilterEventsVtbl;
interface IDTFilterEvents
{
	CONST_VTBL struct IDTFilterEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDTFilterEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDTFilterEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IDTFilterEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define IDTFilterEvents_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IDTFilterEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IDTFilterEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IDTFilterEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#endif
#endif
extern const CLSID CLSID_DTFilter;
#ifndef __IXDSCodec_INTERFACE_DEFINED__
#define __IXDSCodec_INTERFACE_DEFINED__
extern const IID IID_IXDSCodec;
typedef struct IXDSCodecVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IXDSCodec *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IXDSCodec *This);
	ULONG(STDMETHODCALLTYPE *Release) (IXDSCodec *This);
	HRESULT(STDMETHODCALLTYPE *get_XDSToRatObjOK) (IXDSCodec *This, HRESULT *pHrCoCreateRetVal);
	HRESULT(STDMETHODCALLTYPE *put_CCSubstreamService) (IXDSCodec *This, long SubstreamMask);
	HRESULT(STDMETHODCALLTYPE *get_CCSubstreamService) (IXDSCodec *This, long *pSubstreamMask);
	HRESULT(STDMETHODCALLTYPE *GetContentAdvisoryRating) (IXDSCodec *This, PackedTvRating *pRat, long *pPktSeqID, long *pCallSeqID, REFERENCE_TIME *pTimeStart, REFERENCE_TIME *pTimeEnd);
	HRESULT(STDMETHODCALLTYPE *GetXDSPacket) (IXDSCodec *This, long *pXDSClassPkt, long *pXDSTypePkt, BSTR *pBstrXDSPkt, long *pPktSeqID, long *pCallSeqID, REFERENCE_TIME *pTimeStart, REFERENCE_TIME *pTimeEnd);
	HRESULT(STDMETHODCALLTYPE *GetCurrLicenseExpDate) (IXDSCodec *This, ProtType *protType, long *lpDateTime);
	HRESULT(STDMETHODCALLTYPE *GetLastErrorCode) (IXDSCodec *This);
	END_INTERFACE
}  IXDSCodecVtbl;
interface IXDSCodec
{
	CONST_VTBL struct IXDSCodecVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IXDSCodec_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IXDSCodec_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IXDSCodec_Release(This)( (This)->lpVtbl -> Release(This) )
#define IXDSCodec_get_XDSToRatObjOK(This,pHrCoCreateRetVal)( (This)->lpVtbl -> get_XDSToRatObjOK(This,pHrCoCreateRetVal) )
#define IXDSCodec_put_CCSubstreamService(This,SubstreamMask)( (This)->lpVtbl -> put_CCSubstreamService(This,SubstreamMask) )
#define IXDSCodec_get_CCSubstreamService(This,pSubstreamMask)( (This)->lpVtbl -> get_CCSubstreamService(This,pSubstreamMask) )
#define IXDSCodec_GetContentAdvisoryRating(This,pRat,pPktSeqID,pCallSeqID,pTimeStart,pTimeEnd)( (This)->lpVtbl -> GetContentAdvisoryRating(This,pRat,pPktSeqID,pCallSeqID,pTimeStart,pTimeEnd) )
#define IXDSCodec_GetXDSPacket(This,pXDSClassPkt,pXDSTypePkt,pBstrXDSPkt,pPktSeqID,pCallSeqID,pTimeStart,pTimeEnd)( (This)->lpVtbl -> GetXDSPacket(This,pXDSClassPkt,pXDSTypePkt,pBstrXDSPkt,pPktSeqID,pCallSeqID,pTimeStart,pTimeEnd) )
#define IXDSCodec_GetCurrLicenseExpDate(This,protType,lpDateTime)( (This)->lpVtbl -> GetCurrLicenseExpDate(This,protType,lpDateTime) )
#define IXDSCodec_GetLastErrorCode(This)( (This)->lpVtbl -> GetLastErrorCode(This) )
#endif
#endif
#ifndef __IXDSCodecEvents_DISPINTERFACE_DEFINED__
#define __IXDSCodecEvents_DISPINTERFACE_DEFINED__
extern const IID DIID_IXDSCodecEvents;
typedef struct IXDSCodecEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IXDSCodecEvents *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IXDSCodecEvents *This);
	ULONG(STDMETHODCALLTYPE *Release) (IXDSCodecEvents *This);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfoCount) (IXDSCodecEvents *This, UINT *pctinfo);
	HRESULT(STDMETHODCALLTYPE *GetTypeInfo) (IXDSCodecEvents *This, UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo);
	HRESULT(STDMETHODCALLTYPE *GetIDsOfNames) (IXDSCodecEvents *This, REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId);
	HRESULT(STDMETHODCALLTYPE *Invoke) (IXDSCodecEvents *This, DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr);
	END_INTERFACE
}  IXDSCodecEventsVtbl;
interface IXDSCodecEvents
{
	CONST_VTBL struct IXDSCodecEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IXDSCodecEvents_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IXDSCodecEvents_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IXDSCodecEvents_Release(This)( (This)->lpVtbl -> Release(This) )
#define IXDSCodecEvents_GetTypeInfoCount(This,pctinfo)( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
#define IXDSCodecEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
#define IXDSCodecEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
#define IXDSCodecEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
#endif
#endif
extern const CLSID CLSID_XDSCodec;
extern const CLSID CLSID_CXDSData;
#endif
#endif
