/*+@@file@@----------------------------------------------------------------*//*!
 \file		SensAPI.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep  4 00:03:51 2016
 \date		Modified on Sun Sep  4 00:03:51 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __SENSAPI_H__
#define __SENSAPI_H__
#if __POCC__ >= 500
#pragma once
#endif
#define NETWORK_ALIVE_LAN   0x00000001
#define NETWORK_ALIVE_WAN   0x00000002
#define NETWORK_ALIVE_AOL   0x00000004
#define NETWORK_ALIVE_INTERNET   0x00000008
typedef struct tagQOCINFO
{
    DWORD dwSize;
    DWORD dwFlags;
    DWORD dwInSpeed;
    DWORD dwOutSpeed;
} QOCINFO, *LPQOCINFO;
#ifdef UNICODE
#define  IsDestinationReachable  IsDestinationReachableW
#else
#define  IsDestinationReachable  IsDestinationReachableA
#endif
BOOL APIENTRY IsDestinationReachableA(LPCSTR lpszDestination, LPQOCINFO lpQOCInfo);
BOOL APIENTRY IsDestinationReachableW(LPCWSTR lpszDestination, LPQOCINFO lpQOCInfo);
BOOL APIENTRY IsNetworkAlive(LPDWORD lpdwFlags);
#endif
