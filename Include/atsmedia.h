/*+@@file@@----------------------------------------------------------------*//*!
 \file		atsmedia.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jun 19 16:13:58 2016
 \date		Modified on Sun Jun 19 16:13:58 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/
#if __POCC__ >= 500
#pragma once
#endif

#if !defined(_KSMEDIA_)
#error KSMEDIA.H must be included before BDAMEDIA.H
#endif
#if !defined(_BDAMEDIA_)
#error BDAMEDIA.H must be included before ATSCMEDIA.H
#endif
#if !defined(_ATSCMEDIA_)
#define _ATSCMEDIA_
#define STATIC_BDANETWORKTYPE_ATSC	0x71985f51, 0x1ca1, 0x11d3, 0x9c, 0xc8, 0x0, 0xc0, 0x4f, 0x79, 0x71, 0xe0
DEFINE_GUIDSTRUCT("71985F51-1CA1-11d3-9CC8-00C04F7971E0", BDANETWORKTYPE_ATSC);
#define BDANETWORKTYPE_ATSC DEFINE_GUIDNAMED(BDANETWORKTYPE_ATSC)
#endif


