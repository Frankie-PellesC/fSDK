/*+@@file@@----------------------------------------------------------------*//*!
 \file		amparse.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jun 19 16:08:51 2016
 \date		Modified on Sun Jun 19 16:08:51 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __AMPARSE__
#define __AMPARSE__
#if __POCC__ >= 500
#pragma once
#endif
DEFINE_GUID(IID_IAMParse, 0xc47a3420, 0x005c, 0x11d2, 0x90, 0x38, 0x00, 0xa0, 0xc9, 0x69, 0x72, 0x98);
DECLARE_INTERFACE_(IAMParse, IUnknown)
{
	STDMETHOD(GetParseTime) (THIS_ REFERENCE_TIME * prtCurrent);
	STDMETHOD(SetParseTime) (THIS_ REFERENCE_TIME rtCurrent);
	STDMETHOD(Flush) (THIS);
};

#endif


