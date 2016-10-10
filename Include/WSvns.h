/*+@@file@@----------------------------------------------------------------*//*!
 \file		WSvns.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 18:52:25 2016
 \date		Modified on Mon Sep 19 18:52:25 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _WSVNS_
#define _WSVNS_
#if __POCC__ >= 500
#pragma once
#endif
typedef struct sockaddr_vns
{
    u_short sin_family;
    u_char  net_address[4];
    u_char  subnet_addr[2];
    u_char  port[2];
    u_char  hops;
    u_char  filler[5];
} SOCKADDR_VNS, *PSOCKADDR_VNS, FAR *LPSOCKADDR_VNS;
#define VNSPROTO_IPC			1
#define VNSPROTO_RELIABLE_IPC	2
#define VNSPROTO_SPP			3
#endif
