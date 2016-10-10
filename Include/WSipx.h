/*+@@file@@----------------------------------------------------------------*//*!
 \file		WSipx.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep  4 15:35:49 2016
 \date		Modified on Sun Sep  4 15:35:49 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _WSIPX_
#define _WSIPX_
#if __POCC__ >= 500
#pragma once
#endif
typedef struct sockaddr_ipx
{
    short sa_family;
    char  sa_netnum[4];
    char  sa_nodenum[6];
    unsigned short sa_socket;
} SOCKADDR_IPX, *PSOCKADDR_IPX,FAR *LPSOCKADDR_IPX;
#define NSPROTO_IPX      1000
#define NSPROTO_SPX      1256
#define NSPROTO_SPXII    1257
#endif
