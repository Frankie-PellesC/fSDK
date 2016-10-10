/*+@@file@@----------------------------------------------------------------*//*!
 \file		mpegtype.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jun 19 17:28:06 2016
 \date		Modified on Sun Jun 19 17:28:06 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __MPEGTYPE__
#define __MPEGTYPE__
#if __POCC__ >= 500
#pragma once
#endif
typedef struct tagAM_MPEGSTREAMTYPE
{
    DWORD             dwStreamId;
    DWORD             dwReserved;
    AM_MEDIA_TYPE     mt;
    BYTE              bFormat[1];
} AM_MPEGSTREAMTYPE;
typedef struct tagAM_MPEGSYSTEMTYPE
{
    DWORD             dwBitRate;
    DWORD             cStreams;
    AM_MPEGSTREAMTYPE Streams[1];
} AM_MPEGSYSTEMTYPE;
#define AM_MPEGSTREAMTYPE_ELEMENTLENGTH(pStreamType)	FIELD_OFFSET(AM_MPEGSTREAMTYPE, bFormat[(pStreamType)->mt.cbFormat])
#define AM_MPEGSTREAMTYPE_NEXT(pStreamType)				((AM_MPEGSTREAMTYPE *)((PBYTE)(pStreamType) + ((AM_MPEGSTREAMTYPE_ELEMENTLENGTH(pStreamType) + 7) & ~7)))
#define AM_MPEG_AUDIO_DUAL_MERGE 0
#define AM_MPEG_AUDIO_DUAL_LEFT  1
#define AM_MPEG_AUDIO_DUAL_RIGHT 2
DECLARE_INTERFACE_(IMpegAudioDecoder, IUnknown)
{
	STDMETHOD(get_FrequencyDivider) (THIS_ unsigned long *pDivider);
	STDMETHOD(put_FrequencyDivider) (THIS_ unsigned long Divider);
	STDMETHOD(get_DecoderAccuracy) (THIS_ unsigned long *pAccuracy);
	STDMETHOD(put_DecoderAccuracy) (THIS_ unsigned long Accuracy);
	STDMETHOD(get_Stereo) (THIS_ unsigned long *pStereo);
	STDMETHOD(put_Stereo) (THIS_ unsigned long Stereo);
	STDMETHOD(get_DecoderWordSize) (THIS_ unsigned long *pWordSize);
	STDMETHOD(put_DecoderWordSize) (THIS_ unsigned long WordSize);
	STDMETHOD(get_IntegerDecode) (THIS_ unsigned long *pIntDecode);
	STDMETHOD(put_IntegerDecode) (THIS_ unsigned long IntDecode);
	STDMETHOD(get_DualMode) (THIS_ unsigned long *pIntDecode);
	STDMETHOD(put_DualMode) (THIS_ unsigned long IntDecode);
	STDMETHOD(get_AudioFormat) (THIS_ MPEG1WAVEFORMAT * lpFmt);
};

#endif


