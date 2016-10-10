/*+@@file@@----------------------------------------------------------------*//*!
 \file		storprop.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 01:29:35 2016
 \date		Modified on Sat Sep 17 01:29:35 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __STORPROP_H__
#define __STORPROP_H__
#if __POCC__ >= 500
#pragma once
#endif
#include <setupapi.h>
#define REDBOOK_DIGITAL_AUDIO_EXTRACTION_INFO_VERSION 1
typedef struct _REDBOOK_DIGITAL_AUDIO_EXTRACTION_INFO
{
    ULONG Version;
    ULONG Accurate;
    ULONG Supported;
    ULONG AccurateMask0;
} REDBOOK_DIGITAL_AUDIO_EXTRACTION_INFO, *PREDBOOK_DIGITAL_AUDIO_EXTRACTION_INFO;
DWORD CdromCddaInfo(HDEVINFO HDevInfo, PSP_DEVINFO_DATA DevInfoData, PREDBOOK_DIGITAL_AUDIO_EXTRACTION_INFO CddaInfo, PULONG BufferSize);
BOOL CdromKnownGoodDigitalPlayback(HDEVINFO HDevInfo, PSP_DEVINFO_DATA DevInfoData);
LONG CdromEnableDigitalPlayback(HDEVINFO DevInfo, PSP_DEVINFO_DATA DevInfoData, BOOLEAN ForceUnknown);
LONG CdromDisableDigitalPlayback(HDEVINFO DevInfo, PSP_DEVINFO_DATA DevInfoData);
LONG CdromIsDigitalPlaybackEnabled(HDEVINFO DevInfo, PSP_DEVINFO_DATA DevInfoData, PBOOLEAN Enabled);
#endif
