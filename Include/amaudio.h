/*+@@file@@----------------------------------------------------------------*//*!
 \file		amaudio.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jun 19 16:07:38 2016
 \date		Modified on Sun Jun 19 16:07:38 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __AMAUDIO__
#define __AMAUDIO__
#if __POCC__ >= 500
#pragma once
#endif
#include <mmsystem.h>
#include <dsound.h>
#undef INTERFACE
#define INTERFACE IAMDirectSound
DECLARE_INTERFACE_(IAMDirectSound,IUnknown)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID *ppvObj) ;
    STDMETHOD_(ULONG,AddRef)(THIS) ;
    STDMETHOD_(ULONG,Release)(THIS) ;
    STDMETHOD(GetDirectSoundInterface)(THIS_ LPDIRECTSOUND *lplpds) ;
    STDMETHOD(GetPrimaryBufferInterface)(THIS_ LPDIRECTSOUNDBUFFER *lplpdsb) ;
    STDMETHOD(GetSecondaryBufferInterface)(THIS_ LPDIRECTSOUNDBUFFER *lplpdsb) ;
    STDMETHOD(ReleaseDirectSoundInterface)(THIS_ LPDIRECTSOUND lpds) ;
    STDMETHOD(ReleasePrimaryBufferInterface)(THIS_ LPDIRECTSOUNDBUFFER lpdsb) ;
    STDMETHOD(ReleaseSecondaryBufferInterface)(THIS_ LPDIRECTSOUNDBUFFER lpdsb) ;
    STDMETHOD(SetFocusWindow)(THIS_ HWND, BOOL)  ;
    STDMETHOD(GetFocusWindow)(THIS_ HWND *, BOOL*)  ;
};
__inline HRESULT AMValidateAndFixWaveFormatEx(WAVEFORMATEX *pwfx, DWORD cb)
{
	if (cb < sizeof(PCMWAVEFORMAT))
	{
		return E_INVALIDARG;
	}
	if (pwfx->wFormatTag != WAVE_FORMAT_PCM)
	{
		if (cb < sizeof(WAVEFORMATEX))
		{
			return E_INVALIDARG;
		}
		if (cb < sizeof(WAVEFORMATEX) + pwfx->cbSize)
		{
			pwfx->cbSize = 0;
		}
	}
	if (pwfx->nAvgBytesPerSec > 10000000 || pwfx->nAvgBytesPerSec == 0)
	{
		pwfx->nAvgBytesPerSec = 176400;
	}
	if (pwfx->nChannels > 32)
	{
		pwfx->nChannels = 1;
	}
	return S_OK;
}

#endif



