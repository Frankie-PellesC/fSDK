/*+@@file@@----------------------------------------------------------------*//*!
 \file		dde.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Jun 27 01:22:14 2016
 \date		Modified on Mon Jun 27 01:22:14 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _DDEHEADER_INCLUDED_
#define _DDEHEADER_INCLUDED_
#if __POCC__ >= 500
#pragma once
#endif
#ifndef _WINDEF_
#include <windef.h>
#endif

#define WM_DDE_FIRST	    0x03E0
#define WM_DDE_INITIATE     (WM_DDE_FIRST)
#define WM_DDE_TERMINATE    (WM_DDE_FIRST+1)
#define WM_DDE_ADVISE	    (WM_DDE_FIRST+2)
#define WM_DDE_UNADVISE     (WM_DDE_FIRST+3)
#define WM_DDE_ACK	        (WM_DDE_FIRST+4)
#define WM_DDE_DATA	        (WM_DDE_FIRST+5)
#define WM_DDE_REQUEST	    (WM_DDE_FIRST+6)
#define WM_DDE_POKE	        (WM_DDE_FIRST+7)
#define WM_DDE_EXECUTE	    (WM_DDE_FIRST+8)
#define WM_DDE_LAST	        (WM_DDE_FIRST+8)
typedef struct
{
	unsigned short bAppReturnCode:8;
	unsigned short reserved:6;
	unsigned short fBusy:1;
	unsigned short fAck:1;
} DDEACK;
typedef struct
{
	unsigned short reserved:14;
	unsigned short fDeferUpd:1;
	unsigned short fAckReq:1;
	short cfFormat;
} DDEADVISE;
typedef struct
{
	unsigned short unused:12;
	unsigned short fResponse:1;
	unsigned short fRelease:1;
	unsigned short reserved:1;
	unsigned short fAckReq:1;
	short cfFormat;
	BYTE Value[1];
} DDEDATA;
typedef struct
{
	unsigned short unused:13;
	unsigned short fRelease:1;
	unsigned short fReserved:2;
	short cfFormat;
	BYTE Value[1];
} DDEPOKE;
typedef struct
{
	unsigned short unused:13;
	unsigned short fRelease:1;
	unsigned short fDeferUpd:1;
	unsigned short fAckReq:1;
	short cfFormat;
} DDELN;
typedef struct
{
	unsigned short unused:12;
	unsigned short fAck:1;
	unsigned short fRelease:1;
	unsigned short fReserved:1;
	unsigned short fAckReq:1;
	short cfFormat;
	BYTE rgb[1];
} DDEUP;
BOOL WINAPI DdeSetQualityOfService(HWND hwndClient, CONST SECURITY_QUALITY_OF_SERVICE *pqosNew, PSECURITY_QUALITY_OF_SERVICE pqosPrev);
BOOL WINAPI ImpersonateDdeClientWindow(HWND hWndClient, HWND hWndServer);
LPARAM APIENTRY PackDDElParam(UINT msg, UINT_PTR uiLo, UINT_PTR uiHi);
BOOL APIENTRY UnpackDDElParam(UINT msg, LPARAM lParam, PUINT_PTR puiLo, PUINT_PTR puiHi);
BOOL APIENTRY FreeDDElParam(UINT msg, LPARAM lParam);
LPARAM APIENTRY ReuseDDElParam(LPARAM lParam, UINT msgIn, UINT msgOut, UINT_PTR uiLo, UINT_PTR uiHi);
#endif
