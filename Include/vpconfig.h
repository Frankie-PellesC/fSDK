/*+@@file@@----------------------------------------------------------------*//*!
 \file		vpconfig.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jun 19 17:48:31 2016
 \date		Modified on Sun Jun 19 17:48:31 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __IVPConfig__
#define __IVPConfig__
#if __POCC__ >= 500
#pragma once
#endif
DECLARE_INTERFACE_(IVPBaseConfig, IUnknown)
{
	STDMETHOD(GetConnectInfo) (THIS_ LPDWORD pdwNumConnectInfo, LPDDVIDEOPORTCONNECT pddVPConnectInfo);
	STDMETHOD(SetConnectInfo) (THIS_ DWORD dwChosenEntry);
	STDMETHOD(GetVPDataInfo) (THIS_ LPAMVPDATAINFO pamvpDataInfo);
	STDMETHOD(GetMaxPixelRate) (THIS_ LPAMVPSIZE pamvpSize, LPDWORD pdwMaxPixelsPerSecond);
	STDMETHOD(InformVPInputFormats) (THIS_ DWORD dwNumFormats, LPDDPIXELFORMAT pDDPixelFormats);
	STDMETHOD(GetVideoFormats) (THIS_ LPDWORD pdwNumFormats, LPDDPIXELFORMAT pddPixelFormats);
	STDMETHOD(SetVideoFormat) (THIS_ DWORD dwChosenEntry);
	STDMETHOD(SetInvertPolarity) (THIS_);
	STDMETHOD(GetOverlaySurface) (THIS_ LPDIRECTDRAWSURFACE * ppddOverlaySurface);
	STDMETHOD(SetDirectDrawKernelHandle) (THIS_ ULONG_PTR dwDDKernelHandle);
	STDMETHOD(SetVideoPortID) (THIS_ DWORD dwVideoPortID);
	STDMETHOD(SetDDSurfaceKernelHandles) (THIS_ DWORD cHandles, ULONG_PTR * rgDDKernelHandles);
	STDMETHOD(SetSurfaceParameters) (THIS_ DWORD dwPitch, DWORD dwXOrigin, DWORD dwYOrigin);
};
DECLARE_INTERFACE_(IVPConfig, IVPBaseConfig)
{
	STDMETHOD(IsVPDecimationAllowed) (THIS_ LPBOOL pbIsDecimationAllowed);
	STDMETHOD(SetScalingFactors) (THIS_ LPAMVPSIZE pamvpSize);
};
DECLARE_INTERFACE_(IVPVBIConfig, IVPBaseConfig)
{
};

#endif


