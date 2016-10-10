/*+@@file@@----------------------------------------------------------------*//*!
 \file		in6addr.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Tue Jun 28 18:24:37 2016
 \date		Modified on Tue Jun 28 18:24:37 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef s6_addr
#if __POCC__ >= 500
#pragma once
#endif
typedef struct in6_addr
{
    union {
        UCHAR       Byte[16];
        USHORT      Word[8];
    } u;
} IN6_ADDR, *PIN6_ADDR, FAR *LPIN6_ADDR;
#define in_addr6 in6_addr
#define _S6_un      u
#define _S6_u8      Byte
#define s6_addr     _S6_un._S6_u8
#define s6_bytes    u.Byte
#define s6_words    u.Word
#endif
