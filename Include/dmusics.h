/*+@@file@@----------------------------------------------------------------*//*!
 \file		dmusics.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jun 19 16:58:36 2016
 \date		Modified on Sun Jun 19 16:58:36 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _DMUSICS_
#define _DMUSICS_
#if __POCC__ >= 500
#pragma once
#endif
#include "dmusicc.h"
#define REGSTR_PATH_SOFTWARESYNTHS  "Software\\Microsoft\\DirectMusic\\SoftwareSynths"
#ifndef __IDirectMusicSynth_FWD_DEFINED__
#define __IDirectMusicSynth_FWD_DEFINED__
typedef interface IDirectMusicSynth IDirectMusicSynth;
#endif
#ifndef __IDirectMusicSynthSink_FWD_DEFINED__
#define __IDirectMusicSynthSink_FWD_DEFINED__
typedef interface IDirectMusicSynthSink IDirectMusicSynthSink;
#endif
#if (NTDDI_VERSION >= NTDDI_WINXP)
#ifndef _DMUS_VOICE_STATE_DEFINED
#define _DMUS_VOICE_STATE_DEFINED
typedef struct _DMUS_VOICE_STATE
{
    BOOL                bExists;
    SAMPLE_POSITION     spPosition;
} DMUS_VOICE_STATE;
#endif
#define REFRESH_F_LASTBUFFER        0x00000001
#endif
#ifndef __IDirectMusicSynth_INTERFACE_DEFINED__
#define __IDirectMusicSynth_INTERFACE_DEFINED__
#undef  INTERFACE
#define INTERFACE  IDirectMusicSynth
DECLARE_INTERFACE_(IDirectMusicSynth, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID FAR *);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(Open) (THIS_ LPDMUS_PORTPARAMS pPortParams);
	STDMETHOD(Close) (THIS);
	STDMETHOD(SetNumChannelGroups) (THIS_ DWORD dwGroups);
	STDMETHOD(Download) (THIS_ LPHANDLE phDownload, LPVOID pvData, LPBOOL pbFree);
	STDMETHOD(Unload) (THIS_ HANDLE hDownload, HRESULT(CALLBACK * lpFreeHandle) (HANDLE, HANDLE), HANDLE hUserData);
	STDMETHOD(PlayBuffer) (THIS_ REFERENCE_TIME rt, LPBYTE pbBuffer, DWORD cbBuffer);
	STDMETHOD(GetRunningStats) (THIS_ LPDMUS_SYNTHSTATS pStats);
	STDMETHOD(GetPortCaps) (THIS_ LPDMUS_PORTCAPS pCaps);
	STDMETHOD(SetMasterClock) (THIS_ IReferenceClock * pClock);
	STDMETHOD(GetLatencyClock) (THIS_ IReferenceClock ** ppClock);
	STDMETHOD(Activate) (THIS_ BOOL fEnable);
	STDMETHOD(SetSynthSink) (THIS_ IDirectMusicSynthSink * pSynthSink);
	STDMETHOD(Render) (THIS_ short *pBuffer, DWORD dwLength, LONGLONG llPosition);
	STDMETHOD(SetChannelPriority) (THIS_ DWORD dwChannelGroup, DWORD dwChannel, DWORD dwPriority);
	STDMETHOD(GetChannelPriority) (THIS_ DWORD dwChannelGroup, DWORD dwChannel, LPDWORD pdwPriority);
	STDMETHOD(GetFormat) (THIS_ LPWAVEFORMATEX pWaveFormatEx, LPDWORD pdwWaveFormatExSize);
	STDMETHOD(GetAppend) (THIS_ DWORD * pdwAppend);
};
#ifdef COBJMACROS
#define IDirectMusicSynth_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDirectMusicSynth_AddRef(This) ( (This)->lpVtbl -> AddRef(This) ) 
#define IDirectMusicSynth_Release(This) ( (This)->lpVtbl -> Release(This) ) 
#define IDirectMusicSynth_Open(this, pPortParams) ( (this->lpVtbl->Open)(this, pPortParams) )
#define IDirectMusicSynth_Close(this) ( (this->lpVtbl->Open) )
#define IDirectMusicSynth_SetNumChannelGroups(this, dwGroups) ( (this->lpVtbl->SetNumChannelGroups)(this, dwGroups) )
#define IDirectMusicSynth_Download(this, phDownload, pvData, pbFree) ( (this->lpVtbl->Download)(this, phDownload, pvData, pbFree) )
#define IDirectMusicSynth_Unload(this, hDownload, lpFreeHandle, hUserData) ( (this->lpVtbl->Unload)(this, hDownload, lpFreeHandle, hUserData) )
#define IDirectMusicSynth_PlayBuffer(this, rt, pbBuffer, cbBuffer) ( (this->lpVtbl->PlayBuffer)(this, rt, pbBuffer, cbBuffer) )
#define IDirectMusicSynth_GetRunningStats(this, pStats) ( (this->lpVtbl->GetRunningStats)(this, pStats) )
#define IDirectMusicSynth_GetPortCaps(this, pCaps) ( (this->lpVtbl->GetPortCaps)(this, pCaps) )
#define IDirectMusicSynth_SetMasterClock(this, pClock) ( (this->lpVtbl->SetMasterClock)(this, pClock) )
#define IDirectMusicSynth_GetLatencyClock(this, ppClock) ( (this->lpVtbl->GetLatencyClock)(this, ppClock) )
#define IDirectMusicSynth_Activate(this, fEnable) ( (this->lpVtbl->Activate)(this, fEnable) )
#define IDirectMusicSynth_SetSynthSink(this, pSynthSink) ( (this->lpVtbl->SetSynthSink)(this, pSynthSink) )
#define IDirectMusicSynth_Render(this, pBuffer, dwLength, llPosition) ( (this->lpVtbl->Render)(this, pBuffer, dwLength, llPosition) )
#define IDirectMusicSynth_SetChannelPriority(this, dwChannelGroup, dwChannel, dwPriority) ( (this->lpVtbl->SetChannelPriority)(this, dwChannelGroup, dwChannel, dwPriority) )
#define IDirectMusicSynth_GetChannelPriority(this, dwChannelGroup, dwChannel, pdwPriority) ( (this->lpVtbl->GetChannelPriority)(this, dwChannelGroup, dwChannel, pdwPriority) )
#define IDirectMusicSynth_GetFormat(this, pWaveFormatEx, pdwWaveFormatExSize) ( (this->lpVtbl->GetFormat)(this, pWaveFormatEx, pdwWaveFormatExSize) )
#define IDirectMusicSynth_GetAppend(this, pdwAppend) ( (this->lpVtbl->GetAppend)(this, pdwAppend) )
#endif
#endif
#if (NTDDI_VERSION >= NTDDI_WINXP)
#ifndef __IDirectMusicSynth_INTERFACE_DEFINED__
#define __IDirectMusicSynth_INTERFACE_DEFINED__
#undef  INTERFACE
#define INTERFACE  IDirectMusicSynth8
DECLARE_INTERFACE_(IDirectMusicSynth8, IDirectMusicSynth)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID FAR *);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(Open) (THIS_ LPDMUS_PORTPARAMS pPortParams);
	STDMETHOD(Close) (THIS);
	STDMETHOD(SetNumChannelGroups) (THIS_ DWORD dwGroups);
	STDMETHOD(Download) (THIS_ LPHANDLE phDownload, LPVOID pvData, LPBOOL pbFree);
	STDMETHOD(Unload) (THIS_ HANDLE hDownload, HRESULT(CALLBACK * lpFreeHandle) (HANDLE, HANDLE), HANDLE hUserData);
	STDMETHOD(PlayBuffer) (THIS_ REFERENCE_TIME rt, LPBYTE pbBuffer, DWORD cbBuffer);
	STDMETHOD(GetRunningStats) (THIS_ LPDMUS_SYNTHSTATS pStats);
	STDMETHOD(GetPortCaps) (THIS_ LPDMUS_PORTCAPS pCaps);
	STDMETHOD(SetMasterClock) (THIS_ IReferenceClock * pClock);
	STDMETHOD(GetLatencyClock) (THIS_ IReferenceClock ** ppClock);
	STDMETHOD(Activate) (THIS_ BOOL fEnable);
	STDMETHOD(SetSynthSink) (THIS_ IDirectMusicSynthSink * pSynthSink);
	STDMETHOD(Render) (THIS_ short *pBuffer, DWORD dwLength, LONGLONG llPosition);
	STDMETHOD(SetChannelPriority) (THIS_ DWORD dwChannelGroup, DWORD dwChannel, DWORD dwPriority);
	STDMETHOD(GetChannelPriority) (THIS_ DWORD dwChannelGroup, DWORD dwChannel, LPDWORD pdwPriority);
	STDMETHOD(GetFormat) (THIS_ LPWAVEFORMATEX pWaveFormatEx, LPDWORD pdwWaveFormatExSize);
	STDMETHOD(GetAppend) (THIS_ DWORD * pdwAppend);
	STDMETHOD(PlayVoice) (THIS_ REFERENCE_TIME rt, DWORD dwVoiceId, DWORD dwChannelGroup, DWORD dwChannel, DWORD dwDLId, long prPitch, long vrVolume, SAMPLE_TIME stVoiceStart, SAMPLE_TIME stLoopStart, SAMPLE_TIME stLoopEnd);
	STDMETHOD(StopVoice) (THIS_ REFERENCE_TIME rt, DWORD dwVoiceId);
	STDMETHOD(GetVoiceState) (THIS_ DWORD dwVoice[], DWORD cbVoice, DMUS_VOICE_STATE dwVoiceState[]);
	STDMETHOD(Refresh) (THIS_ DWORD dwDownloadID, DWORD dwFlags);
	STDMETHOD(AssignChannelToBuses) (THIS_ DWORD dwChannelGroup, DWORD dwChannel, LPDWORD pdwBuses, DWORD cBuses);
};
#ifdef COBJMACROS
#define IDirectMusicSynth8_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDirectMusicSynth8_AddRef(This) ( (This)->lpVtbl -> AddRef(This) ) 
#define IDirectMusicSynth8_Release(This) ( (This)->lpVtbl -> Release(This) ) 
#define IDirectMusicSynth8_Open(this, pPortParams) ( (this->lpVtbl->Open)(this, pPortParams) )
#define IDirectMusicSynth8_Close(this) ( (this->lpVtbl->Close) )
#define IDirectMusicSynth8_SetNumChannelGroups(this, dwGroups) ( (this->lpVtbl->SetNumChannelGroups)(this, dwGroups) )
#define IDirectMusicSynth8_Download(this, phDownload, pvData, pbFree) ( (this->lpVtbl->Download)(this, phDownload, pvData, pbFree) )
#define IDirectMusicSynth8_Unload(this, hDownload, lpFreeHandle, hUserData) ( (this->lpVtbl->Unload)(this, hDownload, lpFreeHandle, hUserData) )
#define IDirectMusicSynth8_PlayBuffer(this, rt, pbBuffer, cbBuffer) ( (this->lpVtbl->PlayBuffer)(this, rt, pbBuffer, cbBuffer) )
#define IDirectMusicSynth8_GetRunningStats(this, pStats) ( (this->lpVtbl->GetRunningStats)(this, pStats) )
#define IDirectMusicSynth8_GetPortCaps(this, pCaps) ( (this->lpVtbl->GetPortCaps)(this, pCaps) )
#define IDirectMusicSynth8_SetMasterClock(this, pClock) ( (this->lpVtbl->SetMasterClock)(this, pClock) )
#define IDirectMusicSynth8_GetLatencyClock(this, ppClock) ( (this->lpVtbl->GetLatencyClock)(this, ppClock) )
#define IDirectMusicSynth8_Activate(this, fEnable) ( (this->lpVtbl->Activate)(this, fEnable) )
#define IDirectMusicSynth8_SetSynthSink(this, pSynthSink) ( (this->lpVtbl->SetSynthSink)(this, pSynthSink) )
#define IDirectMusicSynth8_Render(this, pBuffer, dwLength, llPosition) ( (this->lpVtbl->Render)(this, pBuffer, dwLength, llPosition) )
#define IDirectMusicSynth8_SetChannelPriority(this, dwChannelGroup, dwChannel, dwPriority) ( (this->lpVtbl->SetChannelPriority)(this, dwChannelGroup, dwChannel, dwPriority) )
#define IDirectMusicSynth8_GetChannelPriority(this, dwChannelGroup, dwChannel, pdwPriority) ( (this->lpVtbl->GetChannelPriority)(this, dwChannelGroup, dwChannel, pdwPriority) )
#define IDirectMusicSynth8_GetFormat(this, pWaveFormatEx, pdwWaveFormatExSize) ( (this->lpVtbl->GetFormat)(this, pWaveFormatEx, pdwWaveFormatExSize) )
#define IDirectMusicSynth8_GetAppend(this, pdwAppend) ( (this->lpVtbl->GetAppend)(this, pdwAppend) )
#define IDirectMusicSynth8_PlayVoice(this, rt, dwVoiceId, dwChannelGroup, dwChannel, dwDLId, prPitch, vrVolume, stVoiceStart, stLoopStart, stLoopEnd) ( (this->lpVtbl->PlayVoice)(this, rt, dwVoiceId, dwChannelGroup, dwChannel, dwDLId, prPitch, vrVolume, stVoiceStart, stLoopStart, stLoopEnd) )
#define IDirectMusicSynth8_StopVoice(this, rt, dwVoiceId) ( (this->lpVtbl->StopVoice)(this, rt, dwVoiceId) )
#define IDirectMusicSynth8_GetVoiceState(this, dwVoice, cbVoice, dwVoiceState) ( (this->lpVtbl->GetVoiceState)(this, dwVoice, cbVoice, dwVoiceState) )
#define IDirectMusicSynth8_Refresh(this, dwDownloadID, dwFlags) ( (this->lpVtbl->Refresh)(this, dwDownloadID, dwFlags) )
#define IDirectMusicSynth8_AssignChannelToBuses(this, dwChannelGroup, dwChannel, pdwBuses, cBuses) ( (this->lpVtbl->AssignChannelToBuses)(this, dwChannelGroup, dwChannel, pdwBuses, cBuses) )
#endif
#endif
#endif
#ifndef __IDirectMusicSynthSink_INTERFACE_DEFINED__
#define __IDirectMusicSynthSink_INTERFACE_DEFINED__
#undef  INTERFACE
#define INTERFACE  IDirectMusicSynthSink
DECLARE_INTERFACE_(IDirectMusicSynthSink, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID FAR *);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(Init) (THIS_ IDirectMusicSynth * pSynth);
	STDMETHOD(SetMasterClock) (THIS_ IReferenceClock * pClock);
	STDMETHOD(GetLatencyClock) (THIS_ IReferenceClock ** ppClock);
	STDMETHOD(Activate) (THIS_ BOOL fEnable);
	STDMETHOD(SampleToRefTime) (THIS_ LONGLONG llSampleTime, REFERENCE_TIME * prfTime);
	STDMETHOD(RefTimeToSample) (THIS_ REFERENCE_TIME rfTime, LONGLONG * pllSampleTime);
	STDMETHOD(SetDirectSound) (THIS_ LPDIRECTSOUND pDirectSound, LPDIRECTSOUNDBUFFER pDirectSoundBuffer);
	STDMETHOD(GetDesiredBufferSize) (THIS_ LPDWORD pdwBufferSizeInSamples);
};
#ifdef COBJMACROS
#define IDirectMusicSynthSink_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define IDirectMusicSynthSink_AddRef(This) ( (This)->lpVtbl -> AddRef(This) ) 
#define IDirectMusicSynthSink_Release(This) ( (This)->lpVtbl -> Release(This) ) 
#define IDirectMusicSynthSink_Init(this, pSynth) ( (this->lpVtbl->Init)(this, pSynth) )
#define IDirectMusicSynthSink_SetMasterClock(this, pClock) ( (this->lpVtbl->SetMasterClock)(this, pClock) )
#define IDirectMusicSynthSink_GetLatencyClock(this, ppClock) ( (this->lpVtbl->GetLatencyClock)(this, ppClock) )
#define IDirectMusicSynthSink_Activate(this, fEnable) ( (this->lpVtbl->Activate)(this, fEnable) )
#define IDirectMusicSynthSink_SampleToRefTime(this, llSampleTime, prfTime) ( (this->lpVtbl->SampleToRefTime)(this, llSampleTime, prfTime) )
#define IDirectMusicSynthSink_RefTimeToSample(this, rfTime, pllSampleTime) ( (this->lpVtbl->RefTimeToSample)(this, rfTime, pllSampleTime) )
#define IDirectMusicSynthSink_SetDirectSound(this, pDirectSound, pDirectSoundBuffer) ( (this->lpVtbl->SetDirectSound)(this, pDirectSound, pDirectSoundBuffer) )
#define IDirectMusicSynthSink_GetDesiredBufferSize(this, pdwBufferSizeInSamples) ( (this->lpVtbl->GetDesiredBufferSize)(this, pdwBufferSizeInSamples) )
#endif
#endif
DEFINE_GUID(IID_IDirectMusicSynth, 0x9823661,  0x5c85, 0x11d2, 0xaf, 0xa6, 0x0, 0xaa, 0x0, 0x24, 0xd8, 0xb6);
DEFINE_GUID(IID_IDirectMusicSynthSink,0x9823663, 0x5c85, 0x11d2, 0xaf, 0xa6, 0x0, 0xaa, 0x0, 0x24, 0xd8, 0xb6);
#if (NTDDI_VERSION >= NTDDI_WINXP)
DEFINE_GUID(IID_IDirectMusicSynth8,0x53cab625, 0x2711, 0x4c9f, 0x9d, 0xe7, 0x1b, 0x7f, 0x92, 0x5f, 0x6f, 0xc8);
#else
DEFINE_GUID(CLSID_DirectMusicSynthSink,0xaec17ce3, 0xa514, 0x11d1, 0xaf, 0xa6, 0x0, 0xaa, 0x0, 0x24, 0xd8, 0xb6);
#endif
DEFINE_GUID(GUID_DMUS_PROP_SetSynthSink,0x0a3a5ba5, 0x37b6, 0x11d2, 0xb9, 0xf9, 0x00, 0x00, 0xf8, 0x75, 0xac, 0x12);
DEFINE_GUID(GUID_DMUS_PROP_SinkUsesDSound, 0xbe208857, 0x8952, 0x11d2, 0xba, 0x1c, 0x00, 0x00, 0xf8, 0x75, 0xac, 0x12);
#endif


