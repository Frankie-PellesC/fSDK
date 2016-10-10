/*+@@file@@----------------------------------------------------------------*//*!
 \file		WinBer.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep  4 17:39:14 2016
 \date		Modified on Sun Sep  4 17:39:14 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _WINBER_DEFINED_
#define _WINBER_DEFINED_
#if __POCC__ >= 500
#pragma once
#endif
#if !defined(_WINBER_)
#define WINBERAPI DECLSPEC_IMPORT
#else
#define WINBERAPI
#endif
#ifndef BERAPI
#define BERAPI __cdecl
#endif
#define LBER_ERROR   0xffffffffL
#define LBER_DEFAULT 0xffffffffL
typedef unsigned int ber_tag_t;
typedef int ber_int_t;
typedef unsigned int ber_uint_t;
typedef unsigned int ber_len_t;
typedef int ber_slen_t;
WINBERAPI BerElement * BERAPI ber_init( BERVAL *pBerVal );
WINBERAPI VOID BERAPI ber_free( BerElement *pBerElement, INT fbuf );
WINBERAPI VOID BERAPI ber_bvfree( BERVAL *pBerVal );
WINBERAPI VOID BERAPI ber_bvecfree( PBERVAL *pBerVal );
WINBERAPI BERVAL * BERAPI ber_bvdup( BERVAL *pBerVal );
WINBERAPI BerElement * BERAPI ber_alloc_t( INT options );
WINBERAPI ULONG BERAPI ber_skip_tag( BerElement *pBerElement, ULONG *pLen );
WINBERAPI ULONG BERAPI ber_peek_tag( BerElement *pBerElement, ULONG *pLen);
WINBERAPI ULONG BERAPI ber_first_element( BerElement *pBerElement, ULONG *pLen, CHAR **ppOpaque );
WINBERAPI ULONG BERAPI ber_next_element( BerElement *pBerElement, ULONG *pLen, CHAR *opaque );
WINBERAPI INT BERAPI ber_flatten( BerElement *pBerElement, PBERVAL *pBerVal );
WINBERAPI INT BERAPI ber_printf( BerElement *pBerElement, PCHAR fmt, ... );
WINBERAPI ULONG BERAPI ber_scanf( BerElement *pBerElement, PCHAR fmt, ... );
#endif
