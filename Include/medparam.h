/*+@@file@@----------------------------------------------------------------*//*!
 \file		medparam.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jun 19 17:24:30 2016
 \date		Modified on Sun Jun 19 17:24:30 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#pragma warning( disable: 4049 )
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
#ifndef __medparam_h__
#define __medparam_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IMediaParamInfo_FWD_DEFINED__
#define __IMediaParamInfo_FWD_DEFINED__
typedef interface IMediaParamInfo IMediaParamInfo;
#endif
#ifndef __IMediaParams_FWD_DEFINED__
#define __IMediaParams_FWD_DEFINED__
typedef interface IMediaParams IMediaParams;
#endif
#include "oaidl.h"
#include "ocidl.h"
#include "strmif.h"
typedef float MP_DATA;
typedef enum _MP_Type
{
	MPT_INT	= 0,
	MPT_FLOAT	= ( MPT_INT + 1 ) ,
	MPT_BOOL	= ( MPT_FLOAT + 1 ) ,
	MPT_ENUM	= ( MPT_BOOL + 1 ) ,
	MPT_MAX	= ( MPT_ENUM + 1 ) 
} MP_TYPE;
#define	MPBOOL_TRUE		( 1 )
#define	MPBOOL_FALSE	( 0 )
typedef enum _MP_CURVE_TYPE
{
	MP_CURVE_JUMP	= 0x1,
	MP_CURVE_LINEAR	= 0x2,
	MP_CURVE_SQUARE	= 0x4,
	MP_CURVE_INVSQUARE	= 0x8,
	MP_CURVE_SINE	= 0x10
} MP_CURVE_TYPE;
typedef DWORD MP_CAPS;
#define	MP_CAPS_CURVE_JUMP	( MP_CURVE_JUMP )
#define	MP_CAPS_CURVE_LINEAR	( MP_CURVE_LINEAR )
#define	MP_CAPS_CURVE_SQUARE	( MP_CURVE_SQUARE )
#define	MP_CAPS_CURVE_INVSQUARE	( MP_CURVE_INVSQUARE )
#define	MP_CAPS_CURVE_SINE	( MP_CURVE_SINE )
typedef struct _MP_PARAMINFO
{
    MP_TYPE mpType;
    MP_CAPS mopCaps;
    MP_DATA mpdMinValue;
    MP_DATA mpdMaxValue;
    MP_DATA mpdNeutralValue;
    WCHAR szUnitText[ 32 ];
    WCHAR szLabel[ 32 ];
} MP_PARAMINFO;
typedef DWORD DWORD;
#define	DWORD_ALLPARAMS	( -1 )
typedef DWORD MP_TIMEDATA;
DEFINE_GUID(GUID_TIME_REFERENCE, 0x93ad712b, 0xdaa0, 0x4ffe, 0xbc, 0x81, 0xb0, 0xce, 0x50, 0xf, 0xcd, 0xd9);
DEFINE_GUID(GUID_TIME_MUSIC, 0x574c49d, 0x5b04, 0x4b15, 0xa5, 0x42, 0xae, 0x28, 0x20, 0x30, 0x11, 0x7b);
DEFINE_GUID(GUID_TIME_SAMPLES, 0xa8593d05, 0xc43, 0x4984, 0x9a, 0x63, 0x97, 0xaf, 0x9e, 0x2, 0xc4, 0xc0);
typedef DWORD MP_FLAGS;
#define	MPF_ENVLP_STANDARD			( 0 )
#define	MPF_ENVLP_BEGIN_CURRENTVAL	( 0x1 )
#define	MPF_ENVLP_BEGIN_NEUTRALVAL	( 0x2 )
typedef struct _MP_ENVELOPE_SEGMENT
{
    REFERENCE_TIME rtStart;
    REFERENCE_TIME rtEnd;
    MP_DATA valStart;
    MP_DATA valEnd;
    MP_CURVE_TYPE iCurve;
    MP_FLAGS flags;
} 	MP_ENVELOPE_SEGMENT;
#define	MPF_PUNCHIN_REFTIME	( 0 )
#define	MPF_PUNCHIN_NOW	( 0x1 )
#define	MPF_PUNCHIN_STOPPED	( 0x2 )
extern RPC_IF_HANDLE __MIDL_itf_medparam_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_medparam_0000_0000_v0_0_s_ifspec;
#ifndef __IMediaParamInfo_INTERFACE_DEFINED__
#define __IMediaParamInfo_INTERFACE_DEFINED__ 
extern const IID IID_IMediaParamInfo;
typedef struct IMediaParamInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMediaParamInfo * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMediaParamInfo * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMediaParamInfo * This);
	HRESULT(STDMETHODCALLTYPE * GetParamCount) (IMediaParamInfo * This, DWORD * pdwParams);
	HRESULT(STDMETHODCALLTYPE * GetParamInfo) (IMediaParamInfo * This, DWORD dwParamIndex, MP_PARAMINFO * pInfo);
	HRESULT(STDMETHODCALLTYPE * GetParamText) (IMediaParamInfo * This, DWORD dwParamIndex, WCHAR ** ppwchText);
	HRESULT(STDMETHODCALLTYPE * GetNumTimeFormats) (IMediaParamInfo * This, DWORD * pdwNumTimeFormats);
	HRESULT(STDMETHODCALLTYPE * GetSupportedTimeFormat) (IMediaParamInfo * This, DWORD dwFormatIndex, GUID * pguidTimeFormat);
	HRESULT(STDMETHODCALLTYPE * GetCurrentTimeFormat) (IMediaParamInfo * This, GUID * pguidTimeFormat, MP_TIMEDATA * pTimeData);
	END_INTERFACE
} IMediaParamInfoVtbl;
interface IMediaParamInfo
{
	CONST_VTBL struct IMediaParamInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMediaParamInfo_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IMediaParamInfo_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IMediaParamInfo_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IMediaParamInfo_GetParamCount(This,pdwParams)    ( (This)->lpVtbl -> GetParamCount(This,pdwParams) ) 
#define IMediaParamInfo_GetParamInfo(This,dwParamIndex,pInfo)    ( (This)->lpVtbl -> GetParamInfo(This,dwParamIndex,pInfo) ) 
#define IMediaParamInfo_GetParamText(This,dwParamIndex,ppwchText)    ( (This)->lpVtbl -> GetParamText(This,dwParamIndex,ppwchText) ) 
#define IMediaParamInfo_GetNumTimeFormats(This,pdwNumTimeFormats)    ( (This)->lpVtbl -> GetNumTimeFormats(This,pdwNumTimeFormats) ) 
#define IMediaParamInfo_GetSupportedTimeFormat(This,dwFormatIndex,pguidTimeFormat)    ( (This)->lpVtbl -> GetSupportedTimeFormat(This,dwFormatIndex,pguidTimeFormat) ) 
#define IMediaParamInfo_GetCurrentTimeFormat(This,pguidTimeFormat,pTimeData)    ( (This)->lpVtbl -> GetCurrentTimeFormat(This,pguidTimeFormat,pTimeData) ) 
#endif
#endif
#ifndef __IMediaParams_INTERFACE_DEFINED__
#define __IMediaParams_INTERFACE_DEFINED__ 
extern const IID IID_IMediaParams;
typedef struct IMediaParamsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMediaParams * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMediaParams * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMediaParams * This);
	HRESULT(STDMETHODCALLTYPE * GetParam) (IMediaParams * This, DWORD dwParamIndex, MP_DATA * pValue);
	HRESULT(STDMETHODCALLTYPE * SetParam) (IMediaParams * This, DWORD dwParamIndex, MP_DATA value);
	HRESULT(STDMETHODCALLTYPE * AddEnvelope) (IMediaParams * This, DWORD dwParamIndex, DWORD cSegments, MP_ENVELOPE_SEGMENT * pEnvelopeSegments);
	HRESULT(STDMETHODCALLTYPE * FlushEnvelope) (IMediaParams * This, DWORD dwParamIndex, REFERENCE_TIME refTimeStart, REFERENCE_TIME refTimeEnd);
	HRESULT(STDMETHODCALLTYPE * SetTimeFormat) (IMediaParams * This, GUID guidTimeFormat, MP_TIMEDATA mpTimeData);
	END_INTERFACE
} IMediaParamsVtbl;
interface IMediaParams
{
CONST_VTBL struct IMediaParamsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMediaParams_QueryInterface(This,riid,ppvObject)    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IMediaParams_AddRef(This)    ( (This)->lpVtbl -> AddRef(This) ) 
#define IMediaParams_Release(This)    ( (This)->lpVtbl -> Release(This) ) 
#define IMediaParams_GetParam(This,dwParamIndex,pValue)    ( (This)->lpVtbl -> GetParam(This,dwParamIndex,pValue) ) 
#define IMediaParams_SetParam(This,dwParamIndex,value)    ( (This)->lpVtbl -> SetParam(This,dwParamIndex,value) ) 
#define IMediaParams_AddEnvelope(This,dwParamIndex,cSegments,pEnvelopeSegments)    ( (This)->lpVtbl -> AddEnvelope(This,dwParamIndex,cSegments,pEnvelopeSegments) ) 
#define IMediaParams_FlushEnvelope(This,dwParamIndex,refTimeStart,refTimeEnd)    ( (This)->lpVtbl -> FlushEnvelope(This,dwParamIndex,refTimeStart,refTimeEnd) ) 
#define IMediaParams_SetTimeFormat(This,guidTimeFormat,mpTimeData)    ( (This)->lpVtbl -> SetTimeFormat(This,guidTimeFormat,mpTimeData) ) 
#endif
#endif
#endif

