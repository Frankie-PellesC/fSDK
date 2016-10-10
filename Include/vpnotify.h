/*+@@file@@----------------------------------------------------------------*//*!
 \file		vpnotify.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jun 19 17:49:28 2016
 \date		Modified on Sun Jun 19 17:49:28 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __IVPNotify__
#define __IVPNotify__
#if __POCC__ >= 500
#pragma once
#endif
DECLARE_INTERFACE_(IVPBaseNotify, IUnknown)
{
	STDMETHOD(RenegotiateVPParameters) (THIS_);
};
DECLARE_INTERFACE_(IVPNotify, IVPBaseNotify)
{
	STDMETHOD(SetDeinterlaceMode) (THIS_ AMVP_MODE mode);
	STDMETHOD(GetDeinterlaceMode) (THIS_ AMVP_MODE * pMode);
};
DECLARE_INTERFACE_(IVPNotify2, IVPNotify)
{
	STDMETHOD(SetVPSyncMaster) (THIS_ BOOL bVPSyncMaster);
	STDMETHOD(GetVPSyncMaster) (THIS_ BOOL * pbVPSyncMaster);
};
DECLARE_INTERFACE_(IVPVBINotify, IVPBaseNotify)
{
};

#endif


