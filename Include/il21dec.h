/*+@@file@@----------------------------------------------------------------*//*!
 \file		il21dec.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jun 19 17:10:29 2016
 \date		Modified on Sun Jun 19 17:10:29 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __IL21DEC__
#define __IL21DEC__
#if __POCC__ >= 500
#pragma once
#endif
typedef enum _AM_LINE21_CCLEVEL
{
    AM_L21_CCLEVEL_TC2 = 0
} AM_LINE21_CCLEVEL, *PAM_LINE21_CCLEVEL ;
typedef enum _AM_LINE21_CCSERVICE
{
    AM_L21_CCSERVICE_None = 0,
    AM_L21_CCSERVICE_Caption1,
    AM_L21_CCSERVICE_Caption2,
    AM_L21_CCSERVICE_Text1,
    AM_L21_CCSERVICE_Text2,
    AM_L21_CCSERVICE_XDS,
    AM_L21_CCSERVICE_DefChannel = 10,
    AM_L21_CCSERVICE_Invalid
} AM_LINE21_CCSERVICE, *PAM_LINE21_CCSERVICE ;
typedef enum _AM_LINE21_CCSTATE
{
    AM_L21_CCSTATE_Off = 0,
    AM_L21_CCSTATE_On
} AM_LINE21_CCSTATE, *PAM_LINE21_CCSTATE ;
typedef enum _AM_LINE21_CCSTYLE
{
    AM_L21_CCSTYLE_None = 0,
    AM_L21_CCSTYLE_PopOn,
    AM_L21_CCSTYLE_PaintOn,
    AM_L21_CCSTYLE_RollUp
} AM_LINE21_CCSTYLE, *PAM_LINE21_CCSTYLE ;
typedef enum _AM_LINE21_DRAWBGMODE
{
    AM_L21_DRAWBGMODE_Opaque,
    AM_L21_DRAWBGMODE_Transparent
} AM_LINE21_DRAWBGMODE, *PAM_LINE21_DRAWBGMODE ;

DECLARE_INTERFACE_(IAMLine21Decoder, IUnknown)
{
	STDMETHOD(GetDecoderLevel) (THIS_ AM_LINE21_CCLEVEL * lpLevel);
	STDMETHOD(GetCurrentService) (THIS_ AM_LINE21_CCSERVICE * lpService);
	STDMETHOD(SetCurrentService) (THIS_ AM_LINE21_CCSERVICE Service);
	STDMETHOD(GetServiceState) (THIS_ AM_LINE21_CCSTATE * lpState);
	STDMETHOD(SetServiceState) (THIS_ AM_LINE21_CCSTATE State);
	STDMETHOD(GetOutputFormat) (THIS_ LPBITMAPINFOHEADER lpbmih);
	STDMETHOD(SetOutputFormat) (THIS_ LPBITMAPINFO lpbmi);
	STDMETHOD(GetBackgroundColor) (THIS_ DWORD * pdwPhysColor);
	STDMETHOD(SetBackgroundColor) (THIS_ DWORD dwPhysColor);
	STDMETHOD(GetRedrawAlways) (THIS_ LPBOOL lpbOption);
	STDMETHOD(SetRedrawAlways) (THIS_ BOOL bOption);
	STDMETHOD(GetDrawBackgroundMode) (THIS_ AM_LINE21_DRAWBGMODE * lpMode);
	STDMETHOD(SetDrawBackgroundMode) (THIS_ AM_LINE21_DRAWBGMODE Mode);
};
#endif


