/*+@@file@@----------------------------------------------------------------*//*!
 \file		iwstdec.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jun 19 17:11:58 2016
 \date		Modified on Sun Jun 19 17:11:58 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __IWSTDEC__
#define __IWSTDEC__
#if __POCC__ >= 500
#pragma once
#endif
typedef struct _AM_WST_PAGE
{
	DWORD	dwPageNr ;
	DWORD	dwSubPageNr ;
	BYTE	*pucPageData;
} AM_WST_PAGE, *PAM_WST_PAGE ;
typedef enum _AM_WST_LEVEL
{
	AM_WST_LEVEL_1_5 = 0
} AM_WST_LEVEL, *PAM_WST_LEVEL ;
typedef enum _AM_WST_SERVICE
{
	AM_WST_SERVICE_None = 0,
	AM_WST_SERVICE_Text,
	AM_WST_SERVICE_IDS,
	AM_WST_SERVICE_Invalid
} AM_WST_SERVICE, *PAM_WST_SERVICE ;
typedef enum _AM_WST_STATE
{
	AM_WST_STATE_Off = 0,
	AM_WST_STATE_On
} AM_WST_STATE, *PAM_WST_STATE ;
typedef enum _AM_WST_STYLE
{
	AM_WST_STYLE_None = 0,
	AM_WST_STYLE_Invers
} AM_WST_STYLE, *PAM_WST_STYLE ;
typedef enum _AM_WST_DRAWBGMODE
{
	AM_WST_DRAWBGMODE_Opaque,
	AM_WST_DRAWBGMODE_Transparent
} AM_WST_DRAWBGMODE, *PAM_WST_DRAWBGMODE ;

DECLARE_INTERFACE_(IAMWstDecoder, IUnknown)
{
	STDMETHOD(GetDecoderLevel) (THIS_ AM_WST_LEVEL * lpLevel);
	STDMETHOD(GetCurrentService) (THIS_ AM_WST_SERVICE * lpService);
	STDMETHOD(GetServiceState) (THIS_ AM_WST_STATE * lpState);
	STDMETHOD(SetServiceState) (THIS_ AM_WST_STATE State);
	STDMETHOD(GetOutputFormat) (THIS_ LPBITMAPINFOHEADER lpbmih);
	STDMETHOD(SetOutputFormat) (THIS_ LPBITMAPINFO lpbmi);
	STDMETHOD(GetBackgroundColor) (THIS_ DWORD * pdwPhysColor);
	STDMETHOD(SetBackgroundColor) (THIS_ DWORD dwPhysColor);
	STDMETHOD(GetRedrawAlways) (THIS_ LPBOOL lpbOption);
	STDMETHOD(SetRedrawAlways) (THIS_ BOOL bOption);
	STDMETHOD(GetDrawBackgroundMode) (THIS_ AM_WST_DRAWBGMODE * lpMode);
	STDMETHOD(SetDrawBackgroundMode) (THIS_ AM_WST_DRAWBGMODE Mode);
	STDMETHOD(SetAnswerMode) (THIS_ BOOL bAnswer);
	STDMETHOD(GetAnswerMode) (THIS_ BOOL * pbAnswer);
	STDMETHOD(SetHoldPage) (THIS_ BOOL bHoldPage);
	STDMETHOD(GetHoldPage) (THIS_ BOOL * pbHoldPage);
	STDMETHOD(GetCurrentPage) (THIS_ PAM_WST_PAGE pWstPage);
	STDMETHOD(SetCurrentPage) (THIS_ AM_WST_PAGE WstPage);
} ;

#endif


