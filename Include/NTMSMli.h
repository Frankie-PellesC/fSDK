/*+@@file@@----------------------------------------------------------------*//*!
 \file		NTMSMli.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep 11 23:28:01 2016
 \date		Modified on Sun Sep 11 23:28:01 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _INCL_NTMSMLI_H_
#define _INCL_NTMSMLI_H_
#if __POCC__ >= 500
#pragma once
#endif
#define NTMSMLI_MAXTYPE     64
#define NTMSMLI_MAXIDSIZE   256
#define NTMSMLI_MAXAPPDESCR 256
#ifndef NTMS_NOREDEF
typedef struct
{
        WCHAR   LabelType[NTMSMLI_MAXTYPE];
        DWORD   LabelIDSize;
        BYTE    LabelID[NTMSMLI_MAXIDSIZE];
        WCHAR   LabelAppDescr[NTMSMLI_MAXAPPDESCR];
} MediaLabelInfo, *pMediaLabelInfo;
#endif
typedef DWORD(WINAPI *MAXMEDIALABEL) (DWORD *const pMaxSize);
typedef DWORD(WINAPI *CLAIMMEDIALABEL) (const BYTE *const pBuffer, const DWORD nBufferSize, MediaLabelInfo *const pLabelInfo);
typedef DWORD(WINAPI *CLAIMMEDIALABELEX) (const BYTE *const pBuffer, const DWORD nBufferSize, MediaLabelInfo *const pLabelInfo, GUID *LabelGuid);
#endif
