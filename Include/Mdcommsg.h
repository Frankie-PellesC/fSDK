/*+@@file@@----------------------------------------------------------------*//*!
 \file		Mdcommsg.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul 16 18:52:44 2016
 \date		Modified on Sat Jul 16 18:52:44 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _COMMSG_H_
#define _COMMSG_H_
#if __POCC__ >= 500
#pragma once
#endif
#define RETURNCODETOHRESULT(rc)		(((rc) < 0x10000) ? HRESULT_FROM_WIN32(rc) : (rc))
#define HRESULTTOWIN32(hres)		((HRESULT_FACILITY(hres) == FACILITY_WIN32) ? HRESULT_CODE(hres) : (hres))
#endif
