/*+@@file@@----------------------------------------------------------------*//*!
 \file		WShisotp.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 18:21:52 2016
 \date		Modified on Mon Sep 19 18:21:52 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _WSHISOTP_
#define _WSHISOTP_
#if __POCC__ >= 500
#pragma once
#endif
#define ISOPROTO_TP0       25
#define ISOPROTO_TP1       26
#define ISOPROTO_TP2       27
#define ISOPROTO_TP3       28
#define ISOPROTO_TP4       29
#define ISOPROTO_TP        ISOPROTO_TP4
#define ISOPROTO_CLTP      30
#define ISOPROTO_CLNP      31
#define ISOPROTO_X25       32
#define ISOPROTO_INACT_NL  33
#define ISOPROTO_ESIS      34
#define ISOPROTO_INTRAISIS 35
#define IPPROTO_RAW        255
#define IPPROTO_MAX        256
#define ISO_MAX_ADDR_LENGTH 64
#define ISO_HIERARCHICAL            0
#define ISO_NON_HIERARCHICAL        1
typedef struct sockaddr_tp
{
   u_short tp_family;
   u_short tp_addr_type;
   u_short tp_taddr_len;
   u_short tp_tsel_len;
   u_char tp_addr[ISO_MAX_ADDR_LENGTH];
} SOCKADDR_TP, *PSOCKADDR_TP, *LPSOCKADDR_TP;
#define ISO_SET_TP_ADDR(sa_tp, port, portlen, node, nodelen)	\
            (sa_tp)->tp_family = AF_ISO;						\
            (sa_tp)->tp_addr_type = ISO_HIERARCHICAL;			\
            (sa_tp)->tp_tsel_len = (portlen);					\
            (sa_tp)->tp_taddr_len = (portlen) + (nodelen);		\
            memcpy(&(sa_tp)->tp_addr, (port), (portlen));		\
            memcpy(&(sa_tp)->tp_addr[portlen], (node), (nodelen));
#define ISO_EXP_DATA_USE  00
#define ISO_EXP_DATA_NUSE 01
#endif
