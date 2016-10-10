/*+@@file@@----------------------------------------------------------------*//*!
 \file		amva.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jun 19 16:11:44 2016
 \date		Modified on Sun Jun 19 16:11:44 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __AMVA_INCLUDED__
#define __AMVA_INCLUDED__
#if __POCC__ >= 500
#pragma once
#endif
#define AMVA_TYPEINDEX_OUTPUTFRAME 0xFFFFFFFF
#define AMVA_QUERYRENDERSTATUSF_READ     0x00000001  
typedef struct _tag_AMVAUncompBufferInfo
{
 DWORD                   dwMinNumSurfaces;
 DWORD                   dwMaxNumSurfaces;
 DDPIXELFORMAT           ddUncompPixelFormat;
} AMVAUncompBufferInfo, *LPAMVAUncompBufferInfo;
typedef struct _tag_AMVAUncompDataInfo
{
    DWORD                   dwUncompWidth;
    DWORD                   dwUncompHeight;
    DDPIXELFORMAT           ddUncompPixelFormat;
} AMVAUncompDataInfo, *LPAMVAUncompDataInfo;
typedef struct _tag_AMVAInternalMemInfo
{
    DWORD                   dwScratchMemAlloc;
} AMVAInternalMemInfo, *LPAMVAInternalMemInfo;
typedef struct _tag_AMVACompBufferInfo
{
    DWORD                   dwNumCompBuffers;
    DWORD                   dwWidthToCreate;
    DWORD                   dwHeightToCreate;
    DWORD                   dwBytesToAllocate;
    DDSCAPS2                ddCompCaps;
    DDPIXELFORMAT           ddPixelFormat;
} AMVACompBufferInfo, *LPAMVACompBufferInfo;
typedef struct _tag_AMVABeginFrameInfo
{
    DWORD                dwDestSurfaceIndex;
    LPVOID               pInputData;
    DWORD                dwSizeInputData;
    LPVOID               pOutputData;
    DWORD                dwSizeOutputData;
} AMVABeginFrameInfo, *LPAMVABeginFrameInfo;
typedef struct _tag_AMVAEndFrameInfo
{
    DWORD                   dwSizeMiscData;
    LPVOID                  pMiscData;
} AMVAEndFrameInfo, *LPAMVAEndFrameInfo;
typedef struct _tag_AMVABUFFERINFO
{
    DWORD                   dwTypeIndex;
    DWORD                   dwBufferIndex;
    DWORD                   dwDataOffset;
    DWORD                   dwDataSize;
} AMVABUFFERINFO, *LPAMVABUFFERINFO;

#endif


