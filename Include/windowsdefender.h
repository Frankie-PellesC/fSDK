/*+@@file@@----------------------------------------------------------------*//*!
 \file		windowsdefender.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep  4 22:10:53 2016
 \date		Modified on Sun Sep  4 22:10:53 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __WINDOWSDEFENDER_H__
#define __WINDOWSDEFENDER_H__
#if __POCC__ >= 500
#pragma once
#endif
HRESULT WINAPI WDStatus(BOOL *pfEnabled);
HRESULT WINAPI WDEnable(BOOL fEnable);
#endif
