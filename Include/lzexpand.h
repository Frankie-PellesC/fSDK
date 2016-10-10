/*+@@file@@----------------------------------------------------------------*//*!
 \file		lzexpand.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Jun 27 01:26:00 2016
 \date		Modified on Mon Jun 27 01:26:00 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _LZEXPAND_
#define _LZEXPAND_
#if __POCC__ >= 500
#pragma once
#endif
#define LZERROR_BADINHANDLE   (-1)
#define LZERROR_BADOUTHANDLE  (-2)
#define LZERROR_READ          (-3)
#define LZERROR_WRITE         (-4)
#define LZERROR_GLOBALLOC     (-5)
#define LZERROR_GLOBLOCK      (-6)
#define LZERROR_BADVALUE      (-7)
#define LZERROR_UNKNOWNALG    (-8)
INT APIENTRY LZStart(VOID);
VOID APIENTRY LZDone(VOID);
LONG APIENTRY CopyLZFile(INT hfSource, INT hfDest);
LONG APIENTRY LZCopy(INT hfSource, INT hfDest);
INT APIENTRY LZInit(INT hfSource);
INT APIENTRY GetExpandedNameA(LPSTR lpszSource, LPSTR lpszBuffer);
INT APIENTRY GetExpandedNameW(LPWSTR lpszSource, LPWSTR lpszBuffer);
#ifdef UNICODE
#define GetExpandedName  GetExpandedNameW
#else
#define GetExpandedName  GetExpandedNameA
#endif
INT APIENTRY LZOpenFileA(LPSTR lpFileName, LPOFSTRUCT lpReOpenBuf, WORD wStyle);
INT APIENTRY LZOpenFileW(LPWSTR lpFileName, LPOFSTRUCT lpReOpenBuf, WORD wStyle);
#ifdef UNICODE
#define LZOpenFile  LZOpenFileW
#else
#define LZOpenFile  LZOpenFileA
#endif
LONG APIENTRY LZSeek(INT hFile, LONG lOffset, INT iOrigin);
INT APIENTRY LZRead(INT hFile, CHAR *lpBuffer, INT cbRead);
VOID APIENTRY LZClose(INT hFile);

#endif
