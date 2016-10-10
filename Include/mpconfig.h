/*+@@file@@----------------------------------------------------------------*//*!
 \file		mpconfig.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jun 19 17:26:03 2016
 \date		Modified on Sun Jun 19 17:26:03 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __IMPConfig__
#define __IMPConfig__
#if __POCC__ >= 500
#pragma once
#endif
typedef enum _AM_ASPECT_RATIO_MODE
{
    AM_ARMODE_STRETCHED,
    AM_ARMODE_LETTER_BOX,
    AM_ARMODE_CROP,
    AM_ARMODE_STRETCHED_AS_PRIMARY  
} AM_ASPECT_RATIO_MODE;
DECLARE_INTERFACE_(IMixerPinConfig, IUnknown)
{
	STDMETHOD(SetRelativePosition) (THIS_ DWORD dwLeft, DWORD dwTop, DWORD dwRight, DWORD dwBottom);
	STDMETHOD(GetRelativePosition) (THIS_ DWORD * pdwLeft, DWORD * pdwTop, DWORD * pdwRight, DWORD * pdwBottom);
	STDMETHOD(SetZOrder) (THIS_ DWORD dwZOrder);
	STDMETHOD(GetZOrder) (THIS_ DWORD * pdwZOrder);
	STDMETHOD(SetColorKey) (THIS_ COLORKEY * pColorKey);
	STDMETHOD(GetColorKey) (THIS_ COLORKEY * pColorKey, DWORD * pColor);
	STDMETHOD(SetBlendingParameter) (THIS_ DWORD dwBlendingParameter);
	STDMETHOD(GetBlendingParameter) (THIS_ DWORD * pdwBlendingParameter);
	STDMETHOD(SetAspectRatioMode) (THIS_ AM_ASPECT_RATIO_MODE amAspectRatioMode);
	STDMETHOD(GetAspectRatioMode) (THIS_ AM_ASPECT_RATIO_MODE * pamAspectRatioMode);
	STDMETHOD(SetStreamTransparent) (THIS_ BOOL bStreamTransparent);
	STDMETHOD(GetStreamTransparent) (THIS_ BOOL * pbStreamTransparent);
};
DECLARE_INTERFACE_(IMixerPinConfig2, IMixerPinConfig)
{
	STDMETHOD(SetOverlaySurfaceColorControls) (THIS_ LPDDCOLORCONTROL pColorControl);
	STDMETHOD(GetOverlaySurfaceColorControls) (THIS_ LPDDCOLORCONTROL pColorControl);
};

#endif



