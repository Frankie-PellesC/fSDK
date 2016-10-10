/*+@@file@@----------------------------------------------------------------*//*!
 \file		XCMCMSX2.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 19:38:32 2016
 \date		Modified on Mon Sep 19 19:38:32 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _XCMCMSX2_H
#define _XCMCMSX2_H
#if __POCC__ >= 500
#pragma once
#endif
#ifndef XCMCMSXT_H
#   include <xcmcmsxt.h>
#endif
#ifndef MAPIDEFS_H
#   include <mapidefs.h>
#endif
#ifdef MAPIX_H
STDMETHODIMP_(SCODE)ScMAPIXFromCMC(CMC_session_id cmc_session, ULONG ulFlags, LPCIID lpInterface, LPMAPISESSION FAR * lppMAPISession);
#endif
#define CMC_X_MS_ATTACH_MESSAGE         ((CMC_flags) 4)
typedef struct
{
	CMC_message_reference FAR *message;
	CMC_uint32 id;
	CMC_buffer object;
} CMC_X_MS_ATTACH;
#endif
