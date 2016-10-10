/*+@@file@@----------------------------------------------------------------*//*!
 \file		Pcrt32.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep  5 00:02:53 2016
 \date		Modified on Mon Sep  5 00:02:53 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef PCRT32_H__
#define PCRT32_H__
#if __POCC__ >= 500
#pragma once
#endif
#define _ffree free
#define _fmalloc malloc
#define _fmemccpy memccpy
#define _fmemchr memchr
#define _fmemcmp memcmp
#define _fmemcpy memcpy
#define _fmemicmp _memicmp
#define _fmemmove memmove
#define _fmemset memset
#define _frealloc realloc
#define _fstrcat strcat
#define _fstrchr strchr
#define _fstrcmp strcmp
#define _fstrcpy strcpy
#define _fstrcspn strcspn
#define _fstrdup _strdup
#define _fstricmp _stricmp
#define _fstrlen strlen
#define _fstrlwr _strlwr
#define _fstrncat strncat
#define _fstrncmp strncmp
#define _fstrncpy strncpy
#define _fstrnicmp _strnicmp
#define _fstrnset strnset
#define _fstrpbrk strpbrk
#define _fstrrchr strrchr
#define _fstrrev strrev
#define _fstrset strset
#define _fstrspn strspn
#define _fstrstr strstr
#define _fstrtok strtok
#define _fstrupr _strupr
#endif
