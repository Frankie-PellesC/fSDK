/*+@@file@@----------------------------------------------------------------*//*!
 \file		IEObj.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul 16 20:31:46 2016
 \date		Modified on Sat Jul 16 20:31:46 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _IEOBJ_
#define _IEOBJ_
#if __POCC__ >= 500
#pragma once
#endif
STDAPI IEAssociateThreadWithTab(DWORD dwTabThreadID, DWORD dwAssociatedThreadID);
STDAPI IEDisassociateThreadWithTab(DWORD dwTabThreadID, DWORD dwAssociatedThreadID);
BOOL   IEIsInPrivateBrowsing(void);
BOOL   IEInPrivateFilteringEnabled(void);
#endif
