/*+@@file@@----------------------------------------------------------------*//*!
 \file		AudioAPOTypes.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul  2 18:36:13 2016
 \date		Modified on Sat Jul  2 18:36:13 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _AUDIOAPOTYPES_H_
#define _AUDIOAPOTYPES_H_
#if __POCC__ >= 500
#pragma once
#endif
typedef LONGLONG    HNSTIME;
typedef LONGLONG    MFTIME;
typedef float       FLOAT32;
typedef double      FLOAT64;
typedef enum APO_BUFFER_FLAGS
{
    BUFFER_INVALID  = 0,
    BUFFER_VALID    = 1,
    BUFFER_SILENT   = 2
} APO_BUFFER_FLAGS;
typedef struct APO_CONNECTION_PROPERTY
{
    UINT_PTR pBuffer;
    UINT32 u32ValidFrameCount;
    APO_BUFFER_FLAGS u32BufferFlags;
    UINT32 u32Signature;
} APO_CONNECTION_PROPERTY;
#endif
