/*+@@file@@----------------------------------------------------------------*//*!
 \file		dsattrib.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Wed Jul  6 14:43:49 2016
 \date		Modified on Wed Jul  6 14:43:49 2016
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
#ifndef __dsattrib_h__
#define __dsattrib_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IAttributeSet_FWD_DEFINED__
#define __IAttributeSet_FWD_DEFINED__
typedef interface IAttributeSet IAttributeSet;
#endif
#ifndef __IAttributeGet_FWD_DEFINED__
#define __IAttributeGet_FWD_DEFINED__
typedef interface IAttributeGet IAttributeGet;
#endif
#include <unknwn.h>
#include <objidl.h>
#include <strmif.h>
extern RPC_IF_HANDLE __MIDL_itf_dsattrib_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dsattrib_0000_0000_v0_0_s_ifspec;
#ifndef __IAttributeSet_INTERFACE_DEFINED__
#define __IAttributeSet_INTERFACE_DEFINED__
extern const IID IID_IAttributeSet;
typedef struct IAttributeSetVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAttributeSet * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAttributeSet * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAttributeSet * This);
	HRESULT(STDMETHODCALLTYPE * SetAttrib) (IAttributeSet * This, GUID guidAttribute, BYTE * pbAttribute, DWORD dwAttributeLength);
	END_INTERFACE
}  IAttributeSetVtbl;
interface IAttributeSet
{
	CONST_VTBL struct IAttributeSetVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAttributeSet_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAttributeSet_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAttributeSet_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAttributeSet_SetAttrib(This,guidAttribute,pbAttribute,dwAttributeLength)( (This)->lpVtbl -> SetAttrib(This,guidAttribute,pbAttribute,dwAttributeLength) )
#endif
#endif
#ifndef __IAttributeGet_INTERFACE_DEFINED__
#define __IAttributeGet_INTERFACE_DEFINED__
extern const IID IID_IAttributeGet;
typedef struct IAttributeGetVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAttributeGet * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAttributeGet * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAttributeGet * This);
	HRESULT(STDMETHODCALLTYPE * GetCount) (IAttributeGet * This, LONG * plCount);
	HRESULT(STDMETHODCALLTYPE * GetAttribIndexed) (IAttributeGet * This, LONG lIndex, GUID * pguidAttribute, BYTE * pbAttribute, DWORD * pdwAttributeLength);
	HRESULT(STDMETHODCALLTYPE * GetAttrib) (IAttributeGet * This, GUID guidAttribute, BYTE * pbAttribute, DWORD * pdwAttributeLength);
	END_INTERFACE
}  IAttributeGetVtbl;
interface IAttributeGet
{
	CONST_VTBL struct IAttributeGetVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IAttributeGet_QueryInterface(This,riid,ppvObject)( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IAttributeGet_AddRef(This)( (This)->lpVtbl -> AddRef(This) )
#define IAttributeGet_Release(This)( (This)->lpVtbl -> Release(This) )
#define IAttributeGet_GetCount(This,plCount)( (This)->lpVtbl -> GetCount(This,plCount) )
#define IAttributeGet_GetAttribIndexed(This,lIndex,pguidAttribute,pbAttribute,pdwAttributeLength)( (This)->lpVtbl -> GetAttribIndexed(This,lIndex,pguidAttribute,pbAttribute,pdwAttributeLength) )
#define IAttributeGet_GetAttrib(This,guidAttribute,pbAttribute,pdwAttributeLength)( (This)->lpVtbl -> GetAttrib(This,guidAttribute,pbAttribute,pdwAttributeLength) )
#endif
#endif
typedef struct _UDCR_TAG
{
	BYTE bVersion;
	BYTE KID[24 + 1];
	ULONGLONG ullBaseCounter;
	ULONGLONG ullBaseCounterRange;
	BOOL fScrambled;
	BYTE bStreamMark;
	DWORD dwReserved1;
	DWORD dwReserved2;
} UDCR_TAG;
#define SAMPLE_SEQ_SEQUENCE_HEADER      1
#define SAMPLE_SEQ_GOP_HEADER           2
#define SAMPLE_SEQ_PICTURE_HEADER       3
#define SAMPLE_SEQ_SEQUENCE_START       SAMPLE_SEQ_SEQUENCE_HEADER
#define SAMPLE_SEQ_SEEK_POINT           SAMPLE_SEQ_GOP_HEADER
#define SAMPLE_SEQ_FRAME_START          SAMPLE_SEQ_PICTURE_HEADER
#define SAMPLE_SEQ_CONTENT_UNKNOWN      0
#define SAMPLE_SEQ_CONTENT_I_FRAME      1
#define SAMPLE_SEQ_CONTENT_P_FRAME      2
#define SAMPLE_SEQ_CONTENT_B_FRAME      3
#define SAMPLE_SEQ_CONTENT_STANDALONE_FRAME      SAMPLE_SEQ_CONTENT_I_FRAME
#define SAMPLE_SEQ_CONTENT_REF_FRAME             SAMPLE_SEQ_CONTENT_P_FRAME
#define SAMPLE_SEQ_CONTENT_NONREF_FRAME          SAMPLE_SEQ_CONTENT_B_FRAME
typedef struct _PIC_SEQ_SAMPLE
{
	DWORD Content:3, Start:1, FrameRate:4, InvalidVA:1, Reserved:19, Version:4;
}
PIC_SEQ_SAMPLE, *PPIC_SEQ_SAMPLE;
typedef struct _SAMPLE_SEQ_OFFSET
{
	DWORD Type:4, Offset:20, Reserved:8;
}
SAMPLE_SEQ_OFFSET;
#define OFFSET_MARKER_COUNT(attr_len)((attr_len - sizeof (PIC_SEQ_SAMPLE)) / sizeof (SAMPLE_SEQ_OFFSET))
#define PIC_SEQ_SAMPLE_ATTR_LEN(cOffsets)   (sizeof (PIC_SEQ_SAMPLE) + (cOffsets) * sizeof (SAMPLE_SEQ_OFFSET))
typedef enum VA_VIDEO_FORMAT
{
	VA_VIDEO_COMPONENT = 0,
	VA_VIDEO_PAL = 1,
	VA_VIDEO_NTSC = 2,
	VA_VIDEO_SECAM = 3,
	VA_VIDEO_MAC = 4,
	VA_VIDEO_UNSPECIFIED = 5
} VA_VIDEO_FORMAT;
typedef enum VA_COLOR_PRIMARIES
{
	VA_PRIMARIES_ITU_R_BT_709 = 1,
	VA_PRIMARIES_UNSPECIFIED = 2,
	VA_PRIMARIES_ITU_R_BT_470_SYSTEM_M = 4,
	VA_PRIMARIES_ITU_R_BT_470_SYSTEM_B_G = 5,
	VA_PRIMARIES_SMPTE_170M = 6,
	VA_PRIMARIES_SMPTE_240M = 7,
	VA_PRIMARIES_H264_GENERIC_FILM = 8
} VA_COLOR_PRIMARIES;
typedef enum VA_TRANSFER_CHARACTERISTICS
{
	VA_TRANSFER_CHARACTERISTICS_ITU_R_BT_709 = 1,
	VA_TRANSFER_CHARACTERISTICS_UNSPECIFIED = 2,
	VA_TRANSFER_CHARACTERISTICS_ITU_R_BT_470_SYSTEM_M = 4,
	VA_TRANSFER_CHARACTERISTICS_ITU_R_BT_470_SYSTEM_B_G = 5,
	VA_TRANSFER_CHARACTERISTICS_SMPTE_170M = 6,
	VA_TRANSFER_CHARACTERISTICS_SMPTE_240M = 7,
	VA_TRANSFER_CHARACTERISTICS_LINEAR = 8,
	VA_TRANSFER_CHARACTERISTICS_H264_LOG_100_TO_1 = 9,
	VA_TRANSFER_CHARACTERISTICS_H264_LOG_316_TO_1 = 10
} VA_TRANSFER_CHARACTERISTICS;
typedef enum VA_MATRIX_COEFFICIENTS
{
	VA_MATRIX_COEFF_H264_RGB = 0,
	VA_MATRIX_COEFF_ITU_R_BT_709 = 1,
	VA_MATRIX_COEFF_UNSPECIFIED = 2,
	VA_MATRIX_COEFF_FCC = 4,
	VA_MATRIX_COEFF_ITU_R_BT_470_SYSTEM_B_G = 5,
	VA_MATRIX_COEFF_SMPTE_170M = 6,
	VA_MATRIX_COEFF_SMPTE_240M = 7,
	VA_MATRIX_COEFF_H264_YCgCo = 8
} VA_MATRIX_COEFFICIENTS;
typedef struct VA_OPTIONAL_VIDEO_PROPERTIES
{
	WORD dwPictureHeight;
	WORD dwPictureWidth;
	WORD dwAspectRatioX;
	WORD dwAspectRatioY;
	VA_VIDEO_FORMAT VAVideoFormat;
	VA_COLOR_PRIMARIES VAColorPrimaries;
	VA_TRANSFER_CHARACTERISTICS VATransferCharacteristics;
	VA_MATRIX_COEFFICIENTS VAMatrixCoefficients;
} VA_OPTIONAL_VIDEO_PROPERTIES;
typedef struct _TRANSPORT_PROPERTIES
{
	ULONG PID;
	REFERENCE_TIME PCR;
	union
{
		struct _Others
{
			LONGLONG TransportScramblingControl:8, Reserved:56;
		}
		Others;
		LONGLONG Value;
	} Fields;
} TRANSPORT_PROPERTIES;
typedef struct _PBDA_TAG_ATTRIBUTE
{
	GUID TableUUId;
	BYTE TableId;
	WORD VersionNo;
	DWORD TableDataSize;
	BYTE TableData[1];
} PBDA_TAG_ATTRIBUTE;
typedef struct _CAPTURE_STREAMTIME
{
	REFERENCE_TIME StreamTime;
} CAPTURE_STREAMTIME;
typedef struct _DSHOW_STREAM_DESC
{
	DWORD VersionNo;
	DWORD StreamId;
	BOOL Default;
	BOOL Creation;
	DWORD Reserved;
} DSHOW_STREAM_DESC;
typedef struct _SAMPLE_LIVE_STREAM_TIME
{
	ULONGLONG qwStreamTime;
	ULONGLONG qwLiveTime;
} SAMPLE_LIVE_STREAM_TIME;
extern RPC_IF_HANDLE __MIDL_itf_dsattrib_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dsattrib_0000_0002_v0_0_s_ifspec;
#endif
