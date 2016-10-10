/*+@@file@@----------------------------------------------------------------*//*!
 \file		dmusicc.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jun 19 16:56:53 2016
 \date		Modified on Sun Jun 19 16:56:53 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _DMUSICC_
#define _DMUSICC_
#if __POCC__ >= 500
#pragma once
#endif
#include <windows.h>
#define COM_NO_WINDOWS_H
#include <objbase.h>
#include <mmsystem.h>
#include "dls1.h"
#include "dmerror.h"
#include "dmdls.h"
#include "dsound.h"
#include "dmusbuff.h"
#include <pshpack8.h>

#if (NTDDI_VERSION >= NTDDI_WINXP)
typedef ULONGLONG    SAMPLE_TIME;
typedef ULONGLONG    SAMPLE_POSITION;
typedef SAMPLE_TIME *LPSAMPLE_TIME;
#endif
#define DMUS_MAX_DESCRIPTION 128
#define DMUS_MAX_DRIVER 128
typedef struct _DMUS_BUFFERDESC *LPDMUS_BUFFERDESC;
typedef struct _DMUS_BUFFERDESC
{
    DWORD dwSize;
    DWORD dwFlags;
    GUID guidBufferFormat;
    DWORD cbBuffer;
} DMUS_BUFFERDESC;
#define DMUS_EFFECT_NONE             0x00000000
#define DMUS_EFFECT_REVERB           0x00000001
#define DMUS_EFFECT_CHORUS           0x00000002
#if (NTDDI_VERSION >= NTDDI_WINXP)
#define DMUS_EFFECT_DELAY            0x00000004
#endif
#define DMUS_PC_INPUTCLASS       (0)
#define DMUS_PC_OUTPUTCLASS      (1)
#define DMUS_PC_DLS              (0x00000001)
#define DMUS_PC_EXTERNAL         (0x00000002)
#define DMUS_PC_SOFTWARESYNTH    (0x00000004)
#define DMUS_PC_MEMORYSIZEFIXED  (0x00000008)
#define DMUS_PC_GMINHARDWARE     (0x00000010)
#define DMUS_PC_GSINHARDWARE     (0x00000020)
#define DMUS_PC_XGINHARDWARE     (0x00000040)
#define DMUS_PC_DIRECTSOUND      (0x00000080)
#define DMUS_PC_SHAREABLE        (0x00000100)
#define DMUS_PC_DLS2             (0x00000200)
#if (NTDDI_VERSION >= NTDDI_WINXP)
#define DMUS_PC_AUDIOPATH        (0x00000400)
#define DMUS_PC_WAVE             (0x00000800)
#endif
#define DMUS_PC_SYSTEMMEMORY     (0x7FFFFFFF)
typedef struct _DMUS_PORTCAPS
{
    DWORD   dwSize;
    DWORD   dwFlags;
    GUID    guidPort;
    DWORD   dwClass;
    DWORD   dwType;
    DWORD   dwMemorySize;
    DWORD   dwMaxChannelGroups;
    DWORD   dwMaxVoices;
    DWORD   dwMaxAudioChannels;
    DWORD   dwEffectFlags;
    WCHAR   wszDescription[DMUS_MAX_DESCRIPTION];
} DMUS_PORTCAPS;
typedef DMUS_PORTCAPS *LPDMUS_PORTCAPS;
#define DMUS_PORT_WINMM_DRIVER      (0)
#define DMUS_PORT_USER_MODE_SYNTH   (1)
#define DMUS_PORT_KERNEL_MODE       (2)
#define DMUS_PORTPARAMS_VOICES           0x00000001
#define DMUS_PORTPARAMS_CHANNELGROUPS    0x00000002
#define DMUS_PORTPARAMS_AUDIOCHANNELS    0x00000004
#define DMUS_PORTPARAMS_SAMPLERATE       0x00000008
#define DMUS_PORTPARAMS_EFFECTS          0x00000020
#define DMUS_PORTPARAMS_SHARE            0x00000040
#if (NTDDI_VERSION >= NTDDI_WINXP)
#define DMUS_PORTPARAMS_FEATURES         0x00000080     
#endif
typedef struct _DMUS_PORTPARAMS
{
    DWORD   dwSize;
    DWORD   dwValidParams;
    DWORD   dwVoices;
    DWORD   dwChannelGroups;
    DWORD   dwAudioChannels;
    DWORD   dwSampleRate;
    DWORD   dwEffectFlags;
    BOOL    fShare;
} DMUS_PORTPARAMS7;
#if (NTDDI_VERSION < NTDDI_WINXP)
typedef DMUS_PORTPARAMS7 DMUS_PORTPARAMS;
#else
typedef struct _DMUS_PORTPARAMS8
{
    DWORD   dwSize;
    DWORD   dwValidParams;
    DWORD   dwVoices;
    DWORD   dwChannelGroups;
    DWORD   dwAudioChannels;
    DWORD   dwSampleRate;
    DWORD   dwEffectFlags;
    BOOL    fShare;
    DWORD   dwFeatures;
} DMUS_PORTPARAMS8;
#define DMUS_PORT_FEATURE_AUDIOPATH     0x00000001	
#define DMUS_PORT_FEATURE_STREAMING     0x00000002	
typedef DMUS_PORTPARAMS8 DMUS_PORTPARAMS;
#endif
typedef DMUS_PORTPARAMS *LPDMUS_PORTPARAMS;
typedef struct _DMUS_SYNTHSTATS *LPDMUS_SYNTHSTATS;
typedef struct _DMUS_SYNTHSTATS
{
    DWORD   dwSize;
    DWORD   dwValidStats;
    DWORD   dwVoices;
    DWORD   dwTotalCPU;
    DWORD   dwCPUPerVoice;
    DWORD   dwLostNotes;
    DWORD   dwFreeMemory;
    long    lPeakVolume;
} DMUS_SYNTHSTATS;
#if (NTDDI_VERSION >= NTDDI_WINXP)
typedef struct _DMUS_SYNTHSTATS8 *LPDMUS_SYNTHSTATS8;
typedef struct _DMUS_SYNTHSTATS8
{
    DWORD   dwSize;
    DWORD   dwValidStats;
    DWORD   dwVoices;
    DWORD   dwTotalCPU;
    DWORD   dwCPUPerVoice;
    DWORD   dwLostNotes;
    DWORD   dwFreeMemory;
    long    lPeakVolume;
    DWORD   dwSynthMemUse;
} DMUS_SYNTHSTATS8;
#endif
#define DMUS_SYNTHSTATS_VOICES          (1 << 0)
#define DMUS_SYNTHSTATS_TOTAL_CPU       (1 << 1)
#define DMUS_SYNTHSTATS_CPU_PER_VOICE   (1 << 2)
#define DMUS_SYNTHSTATS_LOST_NOTES      (1 << 3)
#define DMUS_SYNTHSTATS_PEAK_VOLUME     (1 << 4)
#define DMUS_SYNTHSTATS_FREE_MEMORY     (1 << 5)
#define DMUS_SYNTHSTATS_SYSTEMMEMORY    DMUS_PC_SYSTEMMEMORY
typedef struct _DMUS_WAVES_REVERB_PARAMS
{
    float   fInGain;
    float   fReverbMix;
    float   fReverbTime;
    float   fHighFreqRTRatio;
} DMUS_WAVES_REVERB_PARAMS;
typedef enum
{
    DMUS_CLOCK_SYSTEM = 0,
    DMUS_CLOCK_WAVE = 1
} DMUS_CLOCKTYPE;
#define DMUS_CLOCKF_GLOBAL              0x00000001
typedef struct _DMUS_CLOCKINFO7 *LPDMUS_CLOCKINFO7;
typedef struct _DMUS_CLOCKINFO7
{
    DWORD           dwSize;
    DMUS_CLOCKTYPE  ctType;
    GUID            guidClock;
    WCHAR           wszDescription[DMUS_MAX_DESCRIPTION];
} DMUS_CLOCKINFO7;
#if (NTDDI_VERSION < NTDDI_WINXP)
typedef DMUS_CLOCKINFO7 DMUS_CLOCKINFO;
#else
typedef struct _DMUS_CLOCKINFO8 *LPDMUS_CLOCKINFO8;
typedef struct _DMUS_CLOCKINFO8
{
    DWORD           dwSize;
    DMUS_CLOCKTYPE  ctType;
    GUID            guidClock;
    WCHAR           wszDescription[DMUS_MAX_DESCRIPTION];
    DWORD           dwFlags;
} DMUS_CLOCKINFO8;
typedef DMUS_CLOCKINFO8 DMUS_CLOCKINFO;
#endif
typedef DMUS_CLOCKINFO *LPDMUS_CLOCKINFO;
#if (NTDDI_VERSION >= NTDDI_WINXP)
#define DSBUSID_FIRST_SPKR_LOC              0
#define DSBUSID_FRONT_LEFT                  0
#define DSBUSID_LEFT                        0
#define DSBUSID_FRONT_RIGHT                 1
#define DSBUSID_RIGHT                       1
#define DSBUSID_FRONT_CENTER                2
#define DSBUSID_LOW_FREQUENCY               3
#define DSBUSID_BACK_LEFT                   4
#define DSBUSID_BACK_RIGHT                  5
#define DSBUSID_FRONT_LEFT_OF_CENTER        6
#define DSBUSID_FRONT_RIGHT_OF_CENTER       7
#define DSBUSID_BACK_CENTER                 8
#define DSBUSID_SIDE_LEFT                   9
#define DSBUSID_SIDE_RIGHT                 10
#define DSBUSID_TOP_CENTER                 11
#define DSBUSID_TOP_FRONT_LEFT             12
#define DSBUSID_TOP_FRONT_CENTER           13
#define DSBUSID_TOP_FRONT_RIGHT            14
#define DSBUSID_TOP_BACK_LEFT              15
#define DSBUSID_TOP_BACK_CENTER            16
#define DSBUSID_TOP_BACK_RIGHT             17
#define DSBUSID_LAST_SPKR_LOC              17
#define DSBUSID_IS_SPKR_LOC(id) ( ((id) >= DSBUSID_FIRST_SPKR_LOC) && ((id) <= DSBUSID_LAST_SPKR_LOC) )
#define DSBUSID_REVERB_SEND                64
#define DSBUSID_CHORUS_SEND                65
#define DSBUSID_DYNAMIC_0                 512
#define DSBUSID_NULL			   0xFFFFFFFF
#endif
#if (NTDDI_VERSION >= NTDDI_WINXP)
#ifndef __IDirectMusic_FWD_DEFINED__
#define __IDirectMusic_FWD_DEFINED__
typedef interface IDirectMusic IDirectMusic;
#endif
#endif
#if (NTDDI_VERSION >= NTDDI_WINXP)
#ifndef __IDirectMusic8_FWD_DEFINED__
#define __IDirectMusic8_FWD_DEFINED__
typedef interface IDirectMusic8 IDirectMusic8;
#endif
#endif
#ifndef __IDirectMusicBuffer_FWD_DEFINED__
#define __IDirectMusicBuffer_FWD_DEFINED__
typedef interface IDirectMusicBuffer IDirectMusicBuffer;
#endif
#ifndef __IDirectMusicPort_FWD_DEFINED__
#define __IDirectMusicPort_FWD_DEFINED__
typedef interface IDirectMusicPort IDirectMusicPort;
#endif
#ifndef __IDirectMusicThru_FWD_DEFINED__
#define __IDirectMusicThru_FWD_DEFINED__
typedef interface IDirectMusicThru IDirectMusicThru;
#endif
#ifndef __IReferenceClock_FWD_DEFINED__
#define __IReferenceClock_FWD_DEFINED__
typedef interface IReferenceClock IReferenceClock;
#endif

typedef IDirectMusic *LPDIRECTMUSIC;
#if (NTDDI_VERSION >= NTDDI_WINXP)
typedef IDirectMusic8 *LPDIRECTMUSIC8;
#endif
typedef IDirectMusicPort *LPDIRECTMUSICPORT;
typedef IDirectMusicBuffer *LPDIRECTMUSICBUFFER;
#ifndef __IDirectMusic_INTERFACE_DEFINED__
#define __IDirectMusic_INTERFACE_DEFINED__ 
extern const IID IID_IDirectMusic;
#undef  INTERFACE
#define INTERFACE  IDirectMusic
DECLARE_INTERFACE_(IDirectMusic, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID FAR *);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(EnumPort) (THIS_ DWORD dwIndex, LPDMUS_PORTCAPS pPortCaps);
	STDMETHOD(CreateMusicBuffer) (THIS_ LPDMUS_BUFFERDESC pBufferDesc, LPDIRECTMUSICBUFFER * ppBuffer, LPUNKNOWN pUnkOuter);
	STDMETHOD(CreatePort) (THIS_ REFCLSID rclsidPort, LPDMUS_PORTPARAMS pPortParams, LPDIRECTMUSICPORT * ppPort, LPUNKNOWN pUnkOuter);
	STDMETHOD(EnumMasterClock) (THIS_ DWORD dwIndex, LPDMUS_CLOCKINFO lpClockInfo);
	STDMETHOD(GetMasterClock) (THIS_ LPGUID pguidClock, IReferenceClock ** ppReferenceClock);
	STDMETHOD(SetMasterClock) (THIS_ REFGUID rguidClock);
	STDMETHOD(Activate) (THIS_ BOOL fEnable);
	STDMETHOD(GetDefaultPort) (THIS_ LPGUID pguidPort);
	STDMETHOD(SetDirectSound) (THIS_ LPDIRECTSOUND pDirectSound, HWND hWnd);
};
#ifdef COBJMACROS
#define IDirectMusic_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDirectMusic_AddRef(This) ( (This)->lpVtbl -> AddRef(This) ) 
#define IDirectMusic_Release(This) ( (This)->lpVtbl -> Release(This) ) 
#define IDirectMusic_EnumPort(this, dwIndex, pPortCaps) ( (this->lpVtbl->EnumPort)(this, dwIndex, pPortCaps) )
#define IDirectMusic_CreateMusicBuffer(this, pBufferDesc, ppBuffer, pUnkOuter) ( (this->lpVtbl->CreateMusicBuffer)(this, pBufferDesc, ppBuffer, pUnkOuter) )
#define IDirectMusic_CreatePort(this, rclsidPort, pPortParams, ppPort, pUnkOuter) ( (this->lpVtbl->CreatePort)(this, rclsidPort, pPortParams, ppPort, pUnkOuter) )
#define IDirectMusic_EnumMasterClock(this, dwIndex, lpClockInfo) ( (this->lpVtbl->EnumMasterClock)(this, dwIndex, lpClockInfo) )
#define IDirectMusic_GetMasterClock(this, pguidClock, ppReferenceClock) ( (this->lpVtbl->GetMasterClock)(this, pguidClock, ppReferenceClock) )
#define IDirectMusic_SetMasterClock(this, rguidClock) ( (this->lpVtbl->SetMasterClock)(this, rguidClock) )
#define IDirectMusic_Activate(this, fEnable) ( (this->lpVtbl->Activate)(this, fEnable) )
#define IDirectMusic_GetDefaultPort(this, pguidPort) ( (this->lpVtbl->GetDefaultPort)(this, pguidPort) )
#define IDirectMusic_SetDirectSound(this, pDirectSound, hWnd) ( (this->lpVtbl->SetDirectSound)(this, pDirectSound, hWnd) )
#endif
#endif
#if (NTDDI_VERSION >= NTDDI_WINXP)
#ifndef __IDirectMusic8_INTERFACE_DEFINED__
#define __IDirectMusic8_INTERFACE_DEFINED__ 
#undef  INTERFACE
#define INTERFACE  IDirectMusic8
DECLARE_INTERFACE_(IDirectMusic8, IDirectMusic)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID FAR *);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(EnumPort) (THIS_ DWORD dwIndex, LPDMUS_PORTCAPS pPortCaps);
	STDMETHOD(CreateMusicBuffer) (THIS_ LPDMUS_BUFFERDESC pBufferDesc, LPDIRECTMUSICBUFFER * ppBuffer, LPUNKNOWN pUnkOuter);
	STDMETHOD(CreatePort) (THIS_ REFCLSID rclsidPort, LPDMUS_PORTPARAMS pPortParams, LPDIRECTMUSICPORT * ppPort, LPUNKNOWN pUnkOuter);
	STDMETHOD(EnumMasterClock) (THIS_ DWORD dwIndex, LPDMUS_CLOCKINFO lpClockInfo);
	STDMETHOD(GetMasterClock) (THIS_ LPGUID pguidClock, IReferenceClock ** ppReferenceClock);
	STDMETHOD(SetMasterClock) (THIS_ REFGUID rguidClock);
	STDMETHOD(Activate) (THIS_ BOOL fEnable);
	STDMETHOD(GetDefaultPort) (THIS_ LPGUID pguidPort);
	STDMETHOD(SetDirectSound) (THIS_ LPDIRECTSOUND pDirectSound, HWND hWnd);
	STDMETHOD(SetExternalMasterClock) (THIS_ IReferenceClock * pClock);
};
#ifdef COBJMACROS
#define IDirectMusic8_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDirectMusic8_AddRef(This) ( (This)->lpVtbl -> AddRef(This) ) 
#define IDirectMusic8_Release(This) ( (This)->lpVtbl -> Release(This) ) 
#define IDirectMusic8_EnumPort(this, dwIndex, pPortCaps) ( (this->lpVtbl->EnumPort)(this, dwIndex, pPortCaps) )
#define IDirectMusic8_CreateMusicBuffer(this, pBufferDesc, ppBuffer, pUnkOuter) ( (this->lpVtbl->CreateMusicBuffer)(this, pBufferDesc, ppBuffer, pUnkOuter) )
#define IDirectMusic8_CreatePort(this, rclsidPort, pPortParams, ppPort, pUnkOuter) ( (this->lpVtbl->CreatePort)(this, rclsidPort, pPortParams, ppPort, pUnkOuter) )
#define IDirectMusic8_EnumMasterClock(this, dwIndex, lpClockInfo) ( (this->lpVtbl->EnumMasterClock)(this, dwIndex, lpClockInfo) )
#define IDirectMusic8_GetMasterClock(this, pguidClock, ppReferenceClock) ( (this->lpVtbl->GetMasterClock)(this, pguidClock, ppReferenceClock) )
#define IDirectMusic8_SetMasterClock(this, rguidClock) ( (this->lpVtbl->SetMasterClock)(this, rguidClock) )
#define IDirectMusic8_Activate(this, fEnable) ( (this->lpVtbl->Activate)(this, fEnable) )
#define IDirectMusic8_GetDefaultPort(this, pguidPort) ( (this->lpVtbl->GetDefaultPort)(this, pguidPort) )
#define IDirectMusic8_SetDirectSound(this, pDirectSound, hWnd) ( (this->lpVtbl->SetDirectSound)(this, pDirectSound, hWnd) )
#define IDirectMusic8_SetExternalMasterClock(this, pClock) )
#endif
#endif
#endif
#ifndef __IDirectMusicBuffer_INTERFACE_DEFINED__
#define __IDirectMusicBuffer_INTERFACE_DEFINED__ 
#undef  INTERFACE
#define INTERFACE  IDirectMusicBuffer
DECLARE_INTERFACE_(IDirectMusicBuffer, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID FAR *);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(Flush) (THIS);
	STDMETHOD(TotalTime) (THIS_ LPREFERENCE_TIME prtTime);
	STDMETHOD(PackStructured) (THIS_ REFERENCE_TIME rt, DWORD dwChannelGroup, DWORD dwChannelMessage);
	STDMETHOD(PackUnstructured) (THIS_ REFERENCE_TIME rt, DWORD dwChannelGroup, DWORD cb, LPBYTE lpb);
	STDMETHOD(ResetReadPtr) (THIS);
	STDMETHOD(GetNextEvent) (THIS_ LPREFERENCE_TIME prt, LPDWORD pdwChannelGroup, LPDWORD pdwLength, LPBYTE * ppData);
	STDMETHOD(GetRawBufferPtr) (THIS_ LPBYTE * ppData);
	STDMETHOD(GetStartTime) (THIS_ LPREFERENCE_TIME prt);
	STDMETHOD(GetUsedBytes) (THIS_ LPDWORD pcb);
	STDMETHOD(GetMaxBytes) (THIS_ LPDWORD pcb);
	STDMETHOD(GetBufferFormat) (THIS_ LPGUID pGuidFormat);
	STDMETHOD(SetStartTime) (THIS_ REFERENCE_TIME rt);
	STDMETHOD(SetUsedBytes) (THIS_ DWORD cb);
};
#ifdef COBJMACROS
#define IDirectMusicBuffer_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDirectMusicBuffer_AddRef(This) ( (This)->lpVtbl -> AddRef(This) ) 
#define IDirectMusicBuffer_Release(This) ( (This)->lpVtbl -> Release(This) ) 
#define IDirectMusicBuffer_Flush)(this) ( (this->lpVtbl->Flush) )
#define IDirectMusicBuffer_TotalTime(this, prtTime) ( (this->lpVtbl->TotalTime)(this, prtTime) )
#define IDirectMusicBuffer_PackStructured(this, rt, dwChannelGroup, dwChannelMessage) ( (this->lpVtbl->PackStructured)(this, rt, dwChannelGroup, dwChannelMessage) )
#define IDirectMusicBuffer_PackUnstructured(this, rt, dwChannelGroup, cb, lpb) ( (this->lpVtbl->PackUnstructured)(this, rt, dwChannelGroup, cb, lpb) )
#define IDirectMusicBuffer_ResetReadPtr(this) ( (this->lpVtbl->ResetReadPtr) )
#define IDirectMusicBuffer_GetNextEvent(this, prt, pdwChannelGroup, pdwLength, ppData) ( (this->lpVtbl->GetNextEvent)(this, prt, pdwChannelGroup, pdwLength, ppData) )
#define IDirectMusicBuffer_GetRawBufferPtr(this, ppData) ( (this->lpVtbl->GetRawBufferPtr)(this, ppData) )
#define IDirectMusicBuffer_GetStartTime(this, prt) ( (this->lpVtbl->GetStartTime)(this, prt) )
#define IDirectMusicBuffer_GetUsedBytes(this, pcb) ( (this->lpVtbl->GetUsedBytes)(this, pcb) )
#define IDirectMusicBuffer_GetMaxBytes(this, pcb) ( (this->lpVtbl->GetMaxBytes)(this, pcb) )
#define IDirectMusicBuffer_GetBufferFormat(this, pGuidFormat) ( (this->lpVtbl->GetBufferFormat)(this, pGuidFormat) )
#define IDirectMusicBuffer_SetStartTime(this, rt) ( (this->lpVtbl->SetStartTime)(this, rt) )
#define IDirectMusicBuffer_SetUsedBytes(this, cb) ( (this->lpVtbl->SetUsedBytes)(this, cb) )
#endif
#endif
#if (NTDDI_VERSION >= NTDDI_WINXP)
typedef IDirectMusicBuffer IDirectMusicBuffer8;
typedef IDirectMusicBuffer8 *LPDIRECTMUSICBUFFER8;
#endif
#ifndef __IDirectMusicInstrument_INTERFACE_DEFINED__
#define __IDirectMusicInstrument_INTERFACE_DEFINED__ 
#undef  INTERFACE
#define INTERFACE  IDirectMusicInstrument
DECLARE_INTERFACE_(IDirectMusicInstrument, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID FAR *);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetPatch) (THIS_ DWORD * pdwPatch);
	STDMETHOD(SetPatch) (THIS_ DWORD dwPatch);
};
#ifdef COBJMACROS
#define IDirectMusicInstrument_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDirectMusicInstrument_AddRef(This) ( (This)->lpVtbl -> AddRef(This) ) 
#define IDirectMusicInstrument_Release(This) ( (This)->lpVtbl -> Release(This) ) 
#define IDirectMusicInstrument_GetPatch(this, pdwPatch) ( (this->lpVtbl->GetPatch)(this, pdwPatch) )
#define IDirectMusicInstrument_SetPatch(this, dwPatch) ( (this->lpVtbl->SetPatch)(this, dwPatch) )
#endif
#endif
#if (NTDDI_VERSION >= NTDDI_WINXP)
typedef IDirectMusicInstrument IDirectMusicInstrument8;
typedef IDirectMusicInstrument8 *LPDIRECTMUSICINSTRUMENT8;
#endif
#ifndef __IDirectMusicDownloadedInstrument_INTERFACE_DEFINED__
#define __IDirectMusicDownloadedInstrument_INTERFACE_DEFINED__ 
#undef  INTERFACE
#define INTERFACE  IDirectMusicDownloadedInstrument
DECLARE_INTERFACE_(IDirectMusicDownloadedInstrument, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID FAR *);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
};
#ifdef COBJMACROS
#define IDirectMusicDownloadedInstrument_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDirectMusicDownloadedInstrument_AddRef(This) ( (This)->lpVtbl -> AddRef(This) ) 
#define IDirectMusicDownloadedInstrument_Release(This) ( (This)->lpVtbl -> Release(This) ) 
#endif
#endif
#if (NTDDI_VERSION >= NTDDI_WINXP)
typedef IDirectMusicDownloadedInstrument IDirectMusicDownloadedInstrument8;
typedef IDirectMusicDownloadedInstrument8 *LPDIRECTMUSICDOWNLOADEDINSTRUMENT8;
#endif
#ifndef __IDirectMusicCollection_INTERFACE_DEFINED__
#define __IDirectMusicCollection_INTERFACE_DEFINED__ 
#undef  INTERFACE
#define INTERFACE  IDirectMusicCollection
DECLARE_INTERFACE_(IDirectMusicCollection, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID FAR *);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetInstrument) (THIS_ DWORD dwPatch, IDirectMusicInstrument ** ppInstrument);
	STDMETHOD(EnumInstrument) (THIS_ DWORD dwIndex, DWORD * pdwPatch, LPWSTR pwszName, DWORD dwNameLen);
};
#ifdef COBJMACROS
#define IDirectMusicCollection_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDirectMusicCollection_AddRef(This) ( (This)->lpVtbl -> AddRef(This) ) 
#define IDirectMusicCollection_Release(This) ( (This)->lpVtbl -> Release(This) ) 
#define IDirectMusicCollection_GetInstrument(this, dwPatch, ppInstrument) ( (this->lpVtbl->GetInstrument)(this, dwPatch, ppInstrument) )
#define IDirectMusicCollection_EnumInstrument(this, dwIndex, pdwPatch, pwszName, dwNameLen) ( (this->lpVtbl->EnumInstrument)(this, dwIndex, pdwPatch, pwszName, dwNameLen) )
#endif
#endif
#if (NTDDI_VERSION >= NTDDI_WINXP)
typedef IDirectMusicCollection IDirectMusicCollection8;
typedef IDirectMusicCollection8 *LPDIRECTMUSICCOLLECTION8;
#endif
#ifndef __IDirectMusicDownload_INTERFACE_DEFINED__
#define __IDirectMusicDownload_INTERFACE_DEFINED__ 
#undef  INTERFACE
#define INTERFACE  IDirectMusicDownload
DECLARE_INTERFACE_(IDirectMusicDownload , IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID FAR *);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetBuffer) (THIS_ void **ppvBuffer, DWORD * pdwSize);
};
#ifdef COBJMACROS
#define IDirectMusicDownloadedInstrument_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDirectMusicDownloadedInstrument_AddRef(This) ( (This)->lpVtbl -> AddRef(This) ) 
#define IDirectMusicDownloadedInstrument_Release(This) ( (This)->lpVtbl -> Release(This) ) 
#define IDirectMusicDownloadedInstrument_GetBuffer(This, ppvBuffer, pdwSize) ( (This)->lpVtbl -> GetBuffer(This, ppvBuffer, pdwSize) ) 
#endif
#endif
#if (NTDDI_VERSION >= NTDDI_WINXP)
typedef IDirectMusicDownload IDirectMusicDownload8;
typedef IDirectMusicDownload8 *LPDIRECTMUSICDOWNLOAD8;
#endif
#ifndef __IDirectMusicPortDownload_INTERFACE_DEFINED__
#define __IDirectMusicPortDownload_INTERFACE_DEFINED__ 
#undef  INTERFACE
#define INTERFACE  IDirectMusicPortDownload
DECLARE_INTERFACE_(IDirectMusicPortDownload, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID FAR *);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetBuffer) (THIS_ DWORD dwDLId, IDirectMusicDownload ** ppIDMDownload);
	STDMETHOD(AllocateBuffer) (THIS_ DWORD dwSize, IDirectMusicDownload ** ppIDMDownload);
	STDMETHOD(GetDLId) (THIS_ DWORD * pdwStartDLId, DWORD dwCount);
	STDMETHOD(GetAppend) (THIS_ DWORD * pdwAppend);
	STDMETHOD(Download) (THIS_ IDirectMusicDownload * pIDMDownload);
	STDMETHOD(Unload) (THIS_ IDirectMusicDownload * pIDMDownload);
};
#ifdef COBJMACROS
#define IDirectMusicPortDownload_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDirectMusicPortDownload_AddRef(This) ( (This)->lpVtbl -> AddRef(This) ) 
#define IDirectMusicPortDownload_Release(This) ( (This)->lpVtbl -> Release(This) ) 
#define IDirectMusicPortDownload_GetBuffer(this, dwDLId, ppIDMDownload) ( (this->lpVtbl->GetBuffer)(this, dwDLId, ppIDMDownload) )
#define IDirectMusicPortDownload_AllocateBuffer(this, dwSize, ppIDMDownload) ( (this->lpVtbl->AllocateBuffer)(this, dwSize, ppIDMDownload) )
#define IDirectMusicPortDownload_GetDLId(this, pdwStartDLId, dwCount) ( (this->lpVtbl->GetDLId)(this, pdwStartDLId, dwCount) )
#define IDirectMusicPortDownload_GetAppend(this, pdwAppend) ( (this->lpVtbl->GetAppend)(this, pdwAppend) )
#define IDirectMusicPortDownload_Download(this, pIDMDownload) ( (this->lpVtbl->Download)(this, pIDMDownload) )
#define IDirectMusicPortDownload_Unload(this, pIDMDownload) ( (this->lpVtbl->Unload)(this, pIDMDownload) )
#endif
#endif
#if (NTDDI_VERSION >= NTDDI_WINXP)
typedef IDirectMusicPortDownload IDirectMusicPortDownload8;
typedef IDirectMusicPortDownload8 *LPDIRECTMUSICPORTDOWNLOAD8;
#endif
#ifndef _DIRECTAUDIO_PRIORITIES_DEFINED_
#define _DIRECTAUDIO_PRIORITIES_DEFINED_
#define DAUD_CRITICAL_VOICE_PRIORITY    (0xF0000000)
#define DAUD_HIGH_VOICE_PRIORITY        (0xC0000000)
#define DAUD_STANDARD_VOICE_PRIORITY    (0x80000000)
#define DAUD_LOW_VOICE_PRIORITY         (0x40000000)
#define DAUD_PERSIST_VOICE_PRIORITY     (0x10000000)
#define DAUD_CHAN1_VOICE_PRIORITY_OFFSET    (0x0000000E)
#define DAUD_CHAN2_VOICE_PRIORITY_OFFSET    (0x0000000D)
#define DAUD_CHAN3_VOICE_PRIORITY_OFFSET    (0x0000000C)
#define DAUD_CHAN4_VOICE_PRIORITY_OFFSET    (0x0000000B)
#define DAUD_CHAN5_VOICE_PRIORITY_OFFSET    (0x0000000A)
#define DAUD_CHAN6_VOICE_PRIORITY_OFFSET    (0x00000009)
#define DAUD_CHAN7_VOICE_PRIORITY_OFFSET    (0x00000008)
#define DAUD_CHAN8_VOICE_PRIORITY_OFFSET    (0x00000007)
#define DAUD_CHAN9_VOICE_PRIORITY_OFFSET    (0x00000006)
#define DAUD_CHAN10_VOICE_PRIORITY_OFFSET   (0x0000000F)
#define DAUD_CHAN11_VOICE_PRIORITY_OFFSET   (0x00000005)
#define DAUD_CHAN12_VOICE_PRIORITY_OFFSET   (0x00000004)
#define DAUD_CHAN13_VOICE_PRIORITY_OFFSET   (0x00000003)
#define DAUD_CHAN14_VOICE_PRIORITY_OFFSET   (0x00000002)
#define DAUD_CHAN15_VOICE_PRIORITY_OFFSET   (0x00000001)
#define DAUD_CHAN16_VOICE_PRIORITY_OFFSET   (0x00000000)
#define DAUD_CHAN1_DEF_VOICE_PRIORITY   (DAUD_STANDARD_VOICE_PRIORITY | DAUD_CHAN1_VOICE_PRIORITY_OFFSET)
#define DAUD_CHAN2_DEF_VOICE_PRIORITY   (DAUD_STANDARD_VOICE_PRIORITY | DAUD_CHAN2_VOICE_PRIORITY_OFFSET)
#define DAUD_CHAN3_DEF_VOICE_PRIORITY   (DAUD_STANDARD_VOICE_PRIORITY | DAUD_CHAN3_VOICE_PRIORITY_OFFSET)
#define DAUD_CHAN4_DEF_VOICE_PRIORITY   (DAUD_STANDARD_VOICE_PRIORITY | DAUD_CHAN4_VOICE_PRIORITY_OFFSET)
#define DAUD_CHAN5_DEF_VOICE_PRIORITY   (DAUD_STANDARD_VOICE_PRIORITY | DAUD_CHAN5_VOICE_PRIORITY_OFFSET)
#define DAUD_CHAN6_DEF_VOICE_PRIORITY   (DAUD_STANDARD_VOICE_PRIORITY | DAUD_CHAN6_VOICE_PRIORITY_OFFSET)
#define DAUD_CHAN7_DEF_VOICE_PRIORITY   (DAUD_STANDARD_VOICE_PRIORITY | DAUD_CHAN7_VOICE_PRIORITY_OFFSET)
#define DAUD_CHAN8_DEF_VOICE_PRIORITY   (DAUD_STANDARD_VOICE_PRIORITY | DAUD_CHAN8_VOICE_PRIORITY_OFFSET)
#define DAUD_CHAN9_DEF_VOICE_PRIORITY   (DAUD_STANDARD_VOICE_PRIORITY | DAUD_CHAN9_VOICE_PRIORITY_OFFSET)
#define DAUD_CHAN10_DEF_VOICE_PRIORITY  (DAUD_STANDARD_VOICE_PRIORITY | DAUD_CHAN10_VOICE_PRIORITY_OFFSET)
#define DAUD_CHAN11_DEF_VOICE_PRIORITY  (DAUD_STANDARD_VOICE_PRIORITY | DAUD_CHAN11_VOICE_PRIORITY_OFFSET)
#define DAUD_CHAN12_DEF_VOICE_PRIORITY  (DAUD_STANDARD_VOICE_PRIORITY | DAUD_CHAN12_VOICE_PRIORITY_OFFSET)
#define DAUD_CHAN13_DEF_VOICE_PRIORITY  (DAUD_STANDARD_VOICE_PRIORITY | DAUD_CHAN13_VOICE_PRIORITY_OFFSET)
#define DAUD_CHAN14_DEF_VOICE_PRIORITY  (DAUD_STANDARD_VOICE_PRIORITY | DAUD_CHAN14_VOICE_PRIORITY_OFFSET)
#define DAUD_CHAN15_DEF_VOICE_PRIORITY  (DAUD_STANDARD_VOICE_PRIORITY | DAUD_CHAN15_VOICE_PRIORITY_OFFSET)
#define DAUD_CHAN16_DEF_VOICE_PRIORITY  (DAUD_STANDARD_VOICE_PRIORITY | DAUD_CHAN16_VOICE_PRIORITY_OFFSET)
#endif
#ifndef __IDirectMusicPort_INTERFACE_DEFINED__
#define __IDirectMusicPort_INTERFACE_DEFINED__ 
#undef  INTERFACE
#define INTERFACE  IDirectMusicPort
DECLARE_INTERFACE_(IDirectMusicPort, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID FAR *);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(PlayBuffer) (THIS_ LPDIRECTMUSICBUFFER pBuffer);
	STDMETHOD(SetReadNotificationHandle) (THIS_ HANDLE hEvent);
	STDMETHOD(Read) (THIS_ LPDIRECTMUSICBUFFER pBuffer);
	STDMETHOD(DownloadInstrument) (THIS_ IDirectMusicInstrument * pInstrument, IDirectMusicDownloadedInstrument ** ppDownloadedInstrument, DMUS_NOTERANGE * pNoteRanges, DWORD dwNumNoteRanges);
	STDMETHOD(UnloadInstrument) (THIS_ IDirectMusicDownloadedInstrument * pDownloadedInstrument);
	STDMETHOD(GetLatencyClock) (THIS_ IReferenceClock ** ppClock);
	STDMETHOD(GetRunningStats) (THIS_ LPDMUS_SYNTHSTATS pStats);
	STDMETHOD(Compact) (THIS);
	STDMETHOD(GetCaps) (THIS_ LPDMUS_PORTCAPS pPortCaps);
	STDMETHOD(DeviceIoControl) (THIS_ DWORD dwIoControlCode, LPVOID lpInBuffer, DWORD nInBufferSize, LPVOID lpOutBuffer, DWORD nOutBufferSize, LPDWORD lpBytesReturned, LPOVERLAPPED lpOverlapped);
	STDMETHOD(SetNumChannelGroups) (THIS_ DWORD dwChannelGroups);
	STDMETHOD(GetNumChannelGroups) (THIS_ LPDWORD pdwChannelGroups);
	STDMETHOD(Activate) (THIS_ BOOL fActive);
	STDMETHOD(SetChannelPriority) (THIS_ DWORD dwChannelGroup, DWORD dwChannel, DWORD dwPriority);
	STDMETHOD(GetChannelPriority) (THIS_ DWORD dwChannelGroup, DWORD dwChannel, LPDWORD pdwPriority);
	STDMETHOD(SetDirectSound) (THIS_ LPDIRECTSOUND pDirectSound, LPDIRECTSOUNDBUFFER pDirectSoundBuffer);
	STDMETHOD(GetFormat) (THIS_ LPWAVEFORMATEX pWaveFormatEx, LPDWORD pdwWaveFormatExSize, LPDWORD pdwBufferSize);
};
#ifdef COBJMACROS
#define IDirectMusicPort_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDirectMusicPort_AddRef(This) ( (This)->lpVtbl -> AddRef(This) ) 
#define IDirectMusicPort_Release(This) ( (This)->lpVtbl -> Release(This) ) 
#define IDirectMusicPort_PlayBuffer(this, pBuffer) ( (this->lpVtbl->PlayBuffer)(this, pBuffer) )
#define IDirectMusicPort_SetReadNotificationHandle(this, hEvent) ( (this->lpVtbl->SetReadNotificationHandle)(this, hEvent) )
#define IDirectMusicPort_Read(this, pBuffer) ( (this->lpVtbl->Read)(this, pBuffer) )
#define IDirectMusicPort_DownloadInstrument(this, pInstrument, ppDownloadedInstrument, pNoteRanges, dwNumNoteRanges) ( (this->lpVtbl->DownloadInstrument)(this, pInstrument, ppDownloadedInstrument, pNoteRanges, dwNumNoteRanges) )
#define IDirectMusicPort_UnloadInstrument(this, pDownloadedInstrument) ( (this->lpVtbl->UnloadInstrument)(this, pDownloadedInstrument) )
#define IDirectMusicPort_GetLatencyClock(this, ppClock) ( (this->lpVtbl->GetLatencyClock)(this, ppClock) )
#define IDirectMusicPort_GetRunningStats(this, pStats) ( (this->lpVtbl->GetRunningStats)(this, pStats) )
#define IDirectMusicPort_Compact) ( (this->lpVtbl->Compact) )
#define IDirectMusicPort_GetCaps(this, pPortCaps) ( (this->lpVtbl->GetCaps)(this, pPortCaps) )
#define IDirectMusicPort_DeviceIoControl(this, dwIoControlCode, lpInBuffer, nInBufferSize, lpOutBuffer, nOutBufferSize, lpBytesReturned, lpOverlapped) ( (this->lpVtbl->DeviceIoControl)(this, dwIoControlCode, lpInBuffer, nInBufferSize, lpOutBuffer, nOutBufferSize, lpBytesReturned, lpOverlapped) )
#define IDirectMusicPort_SetNumChannelGroups(this, dwChannelGroups) ( (this->lpVtbl->SetNumChannelGroups)(this, dwChannelGroups) )
#define IDirectMusicPort_GetNumChannelGroups(this, pdwChannelGroups) ( (this->lpVtbl->GetNumChannelGroups)(this, pdwChannelGroups) )
#define IDirectMusicPort_Activate(this, fActive) ( (this->lpVtbl->Activate)(this, fActive) )
#define IDirectMusicPort_SetChannelPriority(this, dwChannelGroup, dwChannel, dwPriority) ( (this->lpVtbl->SetChannelPriority)(this, dwChannelGroup, dwChannel, dwPriority) )
#define IDirectMusicPort_GetChannelPriority(this, dwChannelGroup, dwChannel, pdwPriority) ( (this->lpVtbl->GetChannelPriority)(this, dwChannelGroup, dwChannel, pdwPriority) )
#define IDirectMusicPort_SetDirectSound(this, pDirectSound, pDirectSoundBuffer) ( (this->lpVtbl->SetDirectSound)(this, pDirectSound, pDirectSoundBuffer) )
#define IDirectMusicPort_GetFormat(this, pWaveFormatEx, pdwWaveFormatExSize, pdwBufferSize) ( (this->lpVtbl->GetFormat)(this, pWaveFormatEx, pdwWaveFormatExSize, pdwBufferSize) )
#endif
#endif
#if (NTDDI_VERSION >= NTDDI_WINXP)
typedef IDirectMusicPort IDirectMusicPort8;
typedef IDirectMusicPort8 *LPDIRECTMUSICPORT8;
#endif
#ifndef __IDirectMusicThru_INTERFACE_DEFINED__
#define __IDirectMusicThru_INTERFACE_DEFINED__ 
#undef  INTERFACE
#define INTERFACE  IDirectMusicThru
DECLARE_INTERFACE_(IDirectMusicThru, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID FAR *);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(ThruChannel) (THIS_ DWORD dwSourceChannelGroup, DWORD dwSourceChannel, DWORD dwDestinationChannelGroup, DWORD dwDestinationChannel, LPDIRECTMUSICPORT pDestinationPort);
};
#ifdef COBJMACROS
#define IDirectMusicThru_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDirectMusicThru_AddRef(This) ( (This)->lpVtbl -> AddRef(This) ) 
#define IDirectMusicThru_Release(This) ( (This)->lpVtbl -> Release(This) ) 
#define IDirectMusicThru_ThruChannel(This, dwSourceChannelGroup, dwSourceChannel, dwDestinationChannelGroup, dwDestinationChannel, pDestinationPort) ( (This)->lpVtbl -> Release(This)(This, dwSourceChannelGroup, dwSourceChannel, dwDestinationChannelGroup, dwDestinationChannel, pDestinationPort) ) 
#endif
#endif
#if (NTDDI_VERSION >= NTDDI_WINXP)
typedef IDirectMusicThru IDirectMusicThru8;
typedef IDirectMusicThru8 *LPDIRECTMUSICTHRU8;
#endif
#ifndef __IReferenceClock_INTERFACE_DEFINED__
#define __IReferenceClock_INTERFACE_DEFINED__
DEFINE_GUID(IID_IReferenceClock,0x56a86897,0x0ad4,0x11ce,0xb0,0x3a,0x00,0x20,0xaf,0x0b,0xa7,0x70);
#undef  INTERFACE
#define INTERFACE  IReferenceClock
DECLARE_INTERFACE_(IReferenceClock, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID FAR *);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(GetTime) (THIS_ REFERENCE_TIME * pTime);
	STDMETHOD(AdviseTime) (THIS_ REFERENCE_TIME baseTime, REFERENCE_TIME streamTime, HANDLE hEvent, DWORD * pdwAdviseCookie);
	STDMETHOD(AdvisePeriodic) (THIS_ REFERENCE_TIME startTime, REFERENCE_TIME periodTime, HANDLE hSemaphore, DWORD * pdwAdviseCookie);
	STDMETHOD(Unadvise) (THIS_ DWORD dwAdviseCookie);
};
#ifdef COBJMACROS
#define IReferenceClock_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IReferenceClock_AddRef(This) ( (This)->lpVtbl -> AddRef(This) ) 
#define IReferenceClock_Release(This) ( (This)->lpVtbl -> Release(This) ) 
#define IReferenceClock_GetTime(this, pTime) ( (this->lpVtbl->GetTime)(this, pTime) )
#define IReferenceClock_AdviseTime(this, baseTime, streamTime, hEvent, pdwAdviseCookie) ( (this->lpVtbl->AdviseTime)(this, baseTime, streamTime, hEvent, pdwAdviseCookie) )
#define IReferenceClock_AdvisePeriodic(this, startTime, periodTime, hSemaphore, pdwAdviseCookie) ( (this->lpVtbl->AdvisePeriodic)(this, startTime, periodTime, hSemaphore, pdwAdviseCookie) )
#define IReferenceClock_Unadvise(this, dwAdviseCookie) ( (this->lpVtbl->Unadvise)(this, dwAdviseCookie) )
#endif
#endif
DEFINE_GUID(CLSID_DirectMusic,0x636b9f10,0x0c7d,0x11d1,0x95,0xb2,0x00,0x20,0xaf,0xdc,0x74,0x21);
DEFINE_GUID(CLSID_DirectMusicCollection,0x480ff4b0, 0x28b2, 0x11d1, 0xbe, 0xf7, 0x0, 0xc0, 0x4f, 0xbf, 0x8f, 0xef);
DEFINE_GUID(CLSID_DirectMusicSynth,0x58C2B4D0,0x46E7,0x11D1,0x89,0xAC,0x00,0xA0,0xC9,0x05,0x41,0x29);
DEFINE_GUID(IID_IDirectMusic,0x6536115a,0x7b2d,0x11d2,0xba,0x18,0x00,0x00,0xf8,0x75,0xac,0x12);
DEFINE_GUID(IID_IDirectMusicBuffer,0xd2ac2878, 0xb39b, 0x11d1, 0x87, 0x4, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(IID_IDirectMusicPort, 0x08f2d8c9,0x37c2,0x11d2,0xb9,0xf9,0x00,0x00,0xf8,0x75,0xac,0x12);
DEFINE_GUID(IID_IDirectMusicThru, 0xced153e7, 0x3606, 0x11d2, 0xb9, 0xf9, 0x00, 0x00, 0xf8, 0x75, 0xac, 0x12);
DEFINE_GUID(IID_IDirectMusicPortDownload,0xd2ac287a, 0xb39b, 0x11d1, 0x87, 0x4, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(IID_IDirectMusicDownload,0xd2ac287b, 0xb39b, 0x11d1, 0x87, 0x4, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(IID_IDirectMusicCollection,0xd2ac287c, 0xb39b, 0x11d1, 0x87, 0x4, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(IID_IDirectMusicInstrument,0xd2ac287d, 0xb39b, 0x11d1, 0x87, 0x4, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(IID_IDirectMusicDownloadedInstrument,0xd2ac287e, 0xb39b, 0x11d1, 0x87, 0x4, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(IID_IDirectMusic2,0x6fc2cae1, 0xbc78, 0x11d2, 0xaf, 0xa6, 0x0, 0xaa, 0x0, 0x24, 0xd8, 0xb6);
#if (NTDDI_VERSION >= NTDDI_WINXP)
DEFINE_GUID(IID_IDirectMusic8,0x2d3629f7,0x813d,0x4939,0x85,0x08,0xf0,0x5c,0x6b,0x75,0xfd,0x97);
#define IID_IDirectMusicThru8 IID_IDirectMusicThru
#define IID_IDirectMusicPortDownload8 IID_IDirectMusicPortDownload
#define IID_IDirectMusicDownload8 IID_IDirectMusicDownload
#define IID_IDirectMusicCollection8 IID_IDirectMusicCollection
#define IID_IDirectMusicInstrument8 IID_IDirectMusicInstrument
#define IID_IDirectMusicDownloadedInstrument8 IID_IDirectMusicDownloadedInstrument
#define IID_IDirectMusicPort8 IID_IDirectMusicPort
#endif
DEFINE_GUID(GUID_DMUS_PROP_GM_Hardware, 0x178f2f24, 0xc364, 0x11d1, 0xa7, 0x60, 0x00, 0x00, 0xf8, 0x75, 0xac, 0x12);
DEFINE_GUID(GUID_DMUS_PROP_GS_Hardware, 0x178f2f25, 0xc364, 0x11d1, 0xa7, 0x60, 0x00, 0x00, 0xf8, 0x75, 0xac, 0x12);
DEFINE_GUID(GUID_DMUS_PROP_XG_Hardware, 0x178f2f26, 0xc364, 0x11d1, 0xa7, 0x60, 0x00, 0x00, 0xf8, 0x75, 0xac, 0x12);
DEFINE_GUID(GUID_DMUS_PROP_XG_Capable,  0x6496aba1, 0x61b0, 0x11d2, 0xaf, 0xa6, 0x0, 0xaa, 0x0, 0x24, 0xd8, 0xb6);
DEFINE_GUID(GUID_DMUS_PROP_GS_Capable,  0x6496aba2, 0x61b0, 0x11d2, 0xaf, 0xa6, 0x0, 0xaa, 0x0, 0x24, 0xd8, 0xb6);
DEFINE_GUID(GUID_DMUS_PROP_DLS1,        0x178f2f27, 0xc364, 0x11d1, 0xa7, 0x60, 0x00, 0x00, 0xf8, 0x75, 0xac, 0x12);
DEFINE_GUID(GUID_DMUS_PROP_DLS2,        0xf14599e5, 0x4689, 0x11d2, 0xaf, 0xa6, 0x0, 0xaa, 0x0, 0x24, 0xd8, 0xb6);
DEFINE_GUID(GUID_DMUS_PROP_INSTRUMENT2, 0x865fd372, 0x9f67, 0x11d2, 0x87, 0x2a, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(GUID_DMUS_PROP_SynthSink_DSOUND,0xaa97844, 0xc877, 0x11d1, 0x87, 0xc, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(GUID_DMUS_PROP_SynthSink_WAVE,0xaa97845, 0xc877, 0x11d1, 0x87, 0xc, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(GUID_DMUS_PROP_SampleMemorySize, 0x178f2f28, 0xc364, 0x11d1, 0xa7, 0x60, 0x00, 0x00, 0xf8, 0x75, 0xac, 0x12);
DEFINE_GUID(GUID_DMUS_PROP_SamplePlaybackRate, 0x2a91f713, 0xa4bf, 0x11d2, 0xbb, 0xdf, 0x0, 0x60, 0x8, 0x33, 0xdb, 0xd8);
DEFINE_GUID(GUID_DMUS_PROP_WriteLatency,0x268a0fa0, 0x60f2, 0x11d2, 0xaf, 0xa6, 0x0, 0xaa, 0x0, 0x24, 0xd8, 0xb6);
DEFINE_GUID(GUID_DMUS_PROP_WritePeriod,0x268a0fa1, 0x60f2, 0x11d2, 0xaf, 0xa6, 0x0, 0xaa, 0x0, 0x24, 0xd8, 0xb6);
DEFINE_GUID(GUID_DMUS_PROP_MemorySize,  0x178f2f28, 0xc364, 0x11d1, 0xa7, 0x60, 0x00, 0x00, 0xf8, 0x75, 0xac, 0x12);
DEFINE_GUID(GUID_DMUS_PROP_WavesReverb,0x4cb5622, 0x32e5, 0x11d2, 0xaf, 0xa6, 0x0, 0xaa, 0x0, 0x24, 0xd8, 0xb6);
DEFINE_GUID(GUID_DMUS_PROP_Effects, 0xcda8d611, 0x684a, 0x11d2, 0x87, 0x1e, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(GUID_DMUS_PROP_LegacyCaps,0xcfa7cdc2, 0x00a1, 0x11d2, 0xaa, 0xd5, 0x00, 0x00, 0xf8, 0x75, 0xac, 0x12);
DEFINE_GUID(GUID_DMUS_PROP_Volume, 0xfedfae25L, 0xe46e, 0x11d1, 0xaa, 0xce, 0x00, 0x00, 0xf8, 0x75, 0xac, 0x12);
#define DMUS_VOLUME_MAX     2000
#define DMUS_VOLUME_MIN   -20000
#include <poppack.h>
#endif


