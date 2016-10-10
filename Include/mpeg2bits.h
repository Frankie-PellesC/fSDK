/*+@@file@@----------------------------------------------------------------*//*!
 \file		mpeg2bits.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug  7 22:28:23 2016
 \date		Modified on Sun Aug  7 22:28:23 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __mpeg2bits_h__
#define __mpeg2bits_h__
#if __POCC__ >= 500
#pragma once
#endif
#pragma pack(push)
#pragma pack(1)
typedef struct
{
    WORD Reserved  :  3;
    WORD ProgramId : 13;
} PID_BITS, *PPID_BITS;
typedef struct
{
    WORD SectionLength          : 12;
    WORD Reserved               :  2;
    WORD PrivateIndicator       :  1;
    WORD SectionSyntaxIndicator :  1;
} MPEG_HEADER_BITS, *PMPEG_HEADER_BITS;
typedef struct
{
    BYTE CurrentNextIndicator : 1;
    BYTE VersionNumber        : 5;
    BYTE Reserved             : 2;
} MPEG_HEADER_VERSION_BITS, *PMPEG_HEADER_VERSION_BITS;
#pragma pack(pop)
#endif
