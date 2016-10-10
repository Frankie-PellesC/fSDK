/*+@@file@@----------------------------------------------------------------*//*!
 \file		cscapi.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Jul  4 16:07:39 2016
 \date		Modified on Mon Jul  4 16:07:39 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _INC_CSCAPI_H
#define _INC_CSCAPI_H
#if __POCC__ >= 500
#pragma once
#endif
STDAPI_(DWORD)OfflineFilesEnable(BOOL bEnable, BOOL * pbRebootRequired);
STDAPI_(DWORD)OfflineFilesQueryStatus(BOOL * pbActive, BOOL * pbEnabled);
#endif
