/*+@@file@@----------------------------------------------------------------*//*!
 \file		AppCompATAPI.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul  2 18:14:13 2016
 \date		Modified on Sat Jul  2 18:14:13 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __APPCOMPAT_H_
#define __APPCOMPAT_H_
#if __POCC__ >= 500
#pragma once
#endif
#ifndef SDBAPI
#define SDBAPI STDAPICALLTYPE
#endif
BOOL SDBAPI ApphelpCheckShellObject(REFCLSID ObjectCLSID, BOOL bShimIfNecessary, ULONGLONG *pullFlags);
#endif


