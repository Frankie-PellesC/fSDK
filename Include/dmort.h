/*+@@file@@----------------------------------------------------------------*//*!
 \file		dmort.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jun 19 16:53:29 2016
 \date		Modified on Sun Jun 19 16:53:29 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __DMORT_H__
#define __DMORT_H__
#if __POCC__ >= 500
#pragma once
#endif
STDAPI MoInitMediaType(DMO_MEDIA_TYPE *pmt, DWORD cbFormat);
STDAPI MoFreeMediaType(DMO_MEDIA_TYPE *pmt);
STDAPI MoCopyMediaType(DMO_MEDIA_TYPE *pmtDest, const DMO_MEDIA_TYPE *pmtSrc);
STDAPI MoCreateMediaType(DMO_MEDIA_TYPE **ppmt, DWORD cbFormat);
STDAPI MoDeleteMediaType(DMO_MEDIA_TYPE *pmt);
STDAPI MoDuplicateMediaType(DMO_MEDIA_TYPE **ppmtDest, const DMO_MEDIA_TYPE *pmtSrc);
#endif


