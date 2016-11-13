/*+@@file@@----------------------------------------------------------------*//*!
 \file		austream.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jun 19 16:18:42 2016
 \date		Modified on Sun Jun 19 16:18:42 2016
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
#ifndef __austream_h__
#define __austream_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IAudioMediaStream_FWD_DEFINED__
#define __IAudioMediaStream_FWD_DEFINED__
typedef interface IAudioMediaStream IAudioMediaStream;
#endif
#ifndef __IAudioStreamSample_FWD_DEFINED__
#define __IAudioStreamSample_FWD_DEFINED__
typedef interface IAudioStreamSample IAudioStreamSample;
#endif
#ifndef __IMemoryData_FWD_DEFINED__
#define __IMemoryData_FWD_DEFINED__
typedef interface IMemoryData IMemoryData;
#endif
#ifndef __IAudioData_FWD_DEFINED__
#define __IAudioData_FWD_DEFINED__
typedef interface IAudioData IAudioData;
#endif
#include <unknwn.h>
#include <mmstream.h>

#if 0
typedef struct tWAVEFORMATEX WAVEFORMATEX;
#endif
extern RPC_IF_HANDLE __MIDL_itf_austream_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_austream_0000_0000_v0_0_s_ifspec;
#ifndef __IAudioMediaStream_INTERFACE_DEFINED__
#define __IAudioMediaStream_INTERFACE_DEFINED__ 
extern const IID IID_IAudioMediaStream;

typedef struct IAudioMediaStreamVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAudioMediaStream * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAudioMediaStream * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAudioMediaStream * This);
	HRESULT(STDMETHODCALLTYPE * GetMultiMediaStream) (IAudioMediaStream * This, IMultiMediaStream ** ppMultiMediaStream);
	HRESULT(STDMETHODCALLTYPE * GetInformation) (IAudioMediaStream * This, MSPID * pPurposeId, STREAM_TYPE * pType);
	HRESULT(STDMETHODCALLTYPE * SetSameFormat) (IAudioMediaStream * This, IMediaStream * pStreamThatHasDesiredFormat, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * AllocateSample) (IAudioMediaStream * This, DWORD dwFlags, IStreamSample ** ppSample);
	HRESULT(STDMETHODCALLTYPE * CreateSharedSample) (IAudioMediaStream * This, IStreamSample * pExistingSample, DWORD dwFlags, IStreamSample ** ppNewSample);
	HRESULT(STDMETHODCALLTYPE * SendEndOfStream) (IAudioMediaStream * This, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * GetFormat) (IAudioMediaStream * This, WAVEFORMATEX * pWaveFormatCurrent);
	HRESULT(STDMETHODCALLTYPE * SetFormat) (IAudioMediaStream * This, const WAVEFORMATEX * lpWaveFormat);
	HRESULT(STDMETHODCALLTYPE * CreateSample) (IAudioMediaStream * This, IAudioData * pAudioData, DWORD dwFlags, IAudioStreamSample ** ppSample);
    END_INTERFACE
} IAudioMediaStreamVtbl;
interface IAudioMediaStream
{
    CONST_VTBL struct IAudioMediaStreamVtbl *lpVtbl;
};
    
#ifdef COBJMACROS
#define IAudioMediaStream_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IAudioMediaStream_AddRef(This) ( (This)->lpVtbl -> AddRef(This) ) 
#define IAudioMediaStream_Release(This) ( (This)->lpVtbl -> Release(This) ) 
#define IAudioMediaStream_GetMultiMediaStream(This,ppMultiMediaStream) ( (This)->lpVtbl -> GetMultiMediaStream(This,ppMultiMediaStream) ) 
#define IAudioMediaStream_GetInformation(This,pPurposeId,pType) ( (This)->lpVtbl -> GetInformation(This,pPurposeId,pType) ) 
#define IAudioMediaStream_SetSameFormat(This,pStreamThatHasDesiredFormat,dwFlags) ( (This)->lpVtbl -> SetSameFormat(This,pStreamThatHasDesiredFormat,dwFlags) ) 
#define IAudioMediaStream_AllocateSample(This,dwFlags,ppSample) ( (This)->lpVtbl -> AllocateSample(This,dwFlags,ppSample) ) 
#define IAudioMediaStream_CreateSharedSample(This,pExistingSample,dwFlags,ppNewSample) ( (This)->lpVtbl -> CreateSharedSample(This,pExistingSample,dwFlags,ppNewSample) ) 
#define IAudioMediaStream_SendEndOfStream(This,dwFlags) ( (This)->lpVtbl -> SendEndOfStream(This,dwFlags) ) 
#define IAudioMediaStream_GetFormat(This,pWaveFormatCurrent) ( (This)->lpVtbl -> GetFormat(This,pWaveFormatCurrent) ) 
#define IAudioMediaStream_SetFormat(This,lpWaveFormat) ( (This)->lpVtbl -> SetFormat(This,lpWaveFormat) ) 
#define IAudioMediaStream_CreateSample(This,pAudioData,dwFlags,ppSample) ( (This)->lpVtbl -> CreateSample(This,pAudioData,dwFlags,ppSample) ) 
#endif

#endif
#ifndef __IAudioStreamSample_INTERFACE_DEFINED__
#define __IAudioStreamSample_INTERFACE_DEFINED__ 
extern const IID IID_IAudioStreamSample;

typedef struct IAudioStreamSampleVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAudioStreamSample * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE   * AddRef) (IAudioStreamSample * This);
	ULONG(STDMETHODCALLTYPE   * Release) (IAudioStreamSample * This);
	HRESULT(STDMETHODCALLTYPE * GetMediaStream) (IAudioStreamSample * This, IMediaStream ** ppMediaStream);
	HRESULT(STDMETHODCALLTYPE * GetSampleTimes) (IAudioStreamSample * This, STREAM_TIME * pStartTime, STREAM_TIME * pEndTime, STREAM_TIME * pCurrentTime);
	HRESULT(STDMETHODCALLTYPE * SetSampleTimes) (IAudioStreamSample * This, const STREAM_TIME * pStartTime, const STREAM_TIME * pEndTime);
	HRESULT(STDMETHODCALLTYPE * Update) (IAudioStreamSample * This, DWORD dwFlags, HANDLE hEvent, PAPCFUNC pfnAPC, DWORD_PTR dwAPCData);
	HRESULT(STDMETHODCALLTYPE * CompletionStatus) (IAudioStreamSample * This, DWORD dwFlags, DWORD dwMilliseconds);
	HRESULT(STDMETHODCALLTYPE * GetAudioData) (IAudioStreamSample * This, IAudioData ** ppAudio);
	END_INTERFACE
} IAudioStreamSampleVtbl;
interface IAudioStreamSample
{
    CONST_VTBL struct IAudioStreamSampleVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define IAudioStreamSample_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IAudioStreamSample_AddRef(This) ( (This)->lpVtbl -> AddRef(This) ) 
#define IAudioStreamSample_Release(This) ( (This)->lpVtbl -> Release(This) ) 
#define IAudioStreamSample_GetMediaStream(This,ppMediaStream) ( (This)->lpVtbl -> GetMediaStream(This,ppMediaStream) ) 
#define IAudioStreamSample_GetSampleTimes(This,pStartTime,pEndTime,pCurrentTime) ( (This)->lpVtbl -> GetSampleTimes(This,pStartTime,pEndTime,pCurrentTime) ) 
#define IAudioStreamSample_SetSampleTimes(This,pStartTime,pEndTime) ( (This)->lpVtbl -> SetSampleTimes(This,pStartTime,pEndTime) ) 
#define IAudioStreamSample_Update(This,dwFlags,hEvent,pfnAPC,dwAPCData) ( (This)->lpVtbl -> Update(This,dwFlags,hEvent,pfnAPC,dwAPCData) ) 
#define IAudioStreamSample_CompletionStatus(This,dwFlags,dwMilliseconds) ( (This)->lpVtbl -> CompletionStatus(This,dwFlags,dwMilliseconds) ) 
#define IAudioStreamSample_GetAudioData(This,ppAudio) ( (This)->lpVtbl -> GetAudioData(This,ppAudio) ) 
#endif

#endif
#ifndef __IMemoryData_INTERFACE_DEFINED__
#define __IMemoryData_INTERFACE_DEFINED__ 
extern const IID IID_IMemoryData;

typedef struct IMemoryDataVtbl
{
    BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IMemoryData * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IMemoryData * This);
	ULONG(STDMETHODCALLTYPE * Release) (IMemoryData * This);
	HRESULT(STDMETHODCALLTYPE * SetBuffer) (IMemoryData * This, DWORD cbSize, BYTE * pbData, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * GetInfo) (IMemoryData * This, DWORD * pdwLength, BYTE ** ppbData, DWORD * pcbActualData);
	HRESULT(STDMETHODCALLTYPE * SetActual) (IMemoryData * This, DWORD cbDataValid);
    END_INTERFACE
} IMemoryDataVtbl;
interface IMemoryData
{
    CONST_VTBL struct IMemoryDataVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define IMemoryData_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IMemoryData_AddRef(This) ( (This)->lpVtbl -> AddRef(This) ) 
#define IMemoryData_Release(This) ( (This)->lpVtbl -> Release(This) ) 
#define IMemoryData_SetBuffer(This,cbSize,pbData,dwFlags) ( (This)->lpVtbl -> SetBuffer(This,cbSize,pbData,dwFlags) ) 
#define IMemoryData_GetInfo(This,pdwLength,ppbData,pcbActualData) ( (This)->lpVtbl -> GetInfo(This,pdwLength,ppbData,pcbActualData) ) 
#define IMemoryData_SetActual(This,cbDataValid) ( (This)->lpVtbl -> SetActual(This,cbDataValid) ) 
#endif

#endif
#ifndef __IAudioData_INTERFACE_DEFINED__
#define __IAudioData_INTERFACE_DEFINED__ 
extern const IID IID_IAudioData;

typedef struct IAudioDataVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IAudioData * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IAudioData * This);
	ULONG(STDMETHODCALLTYPE * Release) (IAudioData * This);
	HRESULT(STDMETHODCALLTYPE * SetBuffer) (IAudioData * This, DWORD cbSize, BYTE * pbData, DWORD dwFlags);
	HRESULT(STDMETHODCALLTYPE * GetInfo) (IAudioData * This, DWORD * pdwLength, BYTE ** ppbData, DWORD * pcbActualData);
	HRESULT(STDMETHODCALLTYPE * SetActual) (IAudioData * This, DWORD cbDataValid);
	HRESULT(STDMETHODCALLTYPE * GetFormat) (IAudioData * This, WAVEFORMATEX * pWaveFormatCurrent);
	HRESULT(STDMETHODCALLTYPE * SetFormat) (IAudioData * This, const WAVEFORMATEX * lpWaveFormat);
	END_INTERFACE
} IAudioDataVtbl;
interface IAudioData
{
	CONST_VTBL struct IAudioDataVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define IAudioData_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IAudioData_AddRef(This) ( (This)->lpVtbl -> AddRef(This) ) 
#define IAudioData_Release(This) ( (This)->lpVtbl -> Release(This) ) 
#define IAudioData_SetBuffer(This,cbSize,pbData,dwFlags) ( (This)->lpVtbl -> SetBuffer(This,cbSize,pbData,dwFlags) ) 
#define IAudioData_GetInfo(This,pdwLength,ppbData,pcbActualData) ( (This)->lpVtbl -> GetInfo(This,pdwLength,ppbData,pcbActualData) ) 
#define IAudioData_SetActual(This,cbDataValid) ( (This)->lpVtbl -> SetActual(This,cbDataValid) ) 
#define IAudioData_GetFormat(This,pWaveFormatCurrent) ( (This)->lpVtbl -> GetFormat(This,pWaveFormatCurrent) ) 
#define IAudioData_SetFormat(This,lpWaveFormat) ( (This)->lpVtbl -> SetFormat(This,lpWaveFormat) ) 
#endif
#endif
#endif
