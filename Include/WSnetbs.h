/*+@@file@@----------------------------------------------------------------*//*!
 \file		WSnetbs.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 18:50:03 2016
 \date		Modified on Mon Sep 19 18:50:03 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _WSNETBS_
#define _WSNETBS_
#if __POCC__ >= 500
#pragma once
#endif
#define NETBIOS_NAME_LENGTH 16
typedef struct sockaddr_nb
{
    short   snb_family;
    u_short snb_type;
    char    snb_name[NETBIOS_NAME_LENGTH];
} SOCKADDR_NB, *PSOCKADDR_NB,FAR *LPSOCKADDR_NB;
#define NETBIOS_UNIQUE_NAME         (0x0000)
#define NETBIOS_GROUP_NAME          (0x0001)
#define NETBIOS_TYPE_QUICK_UNIQUE   (0x0002)
#define NETBIOS_TYPE_QUICK_GROUP    (0x0003)
#define SET_NETBIOS_SOCKADDR(_snb,_type,_name,_port)                          \
    {                                                                         \
        int _i;                                                               \
        (_snb)->snb_family = AF_NETBIOS;                                      \
        (_snb)->snb_type = (_type);                                           \
        for (_i=0; _i<NETBIOS_NAME_LENGTH-1; _i++) {                          \
            (_snb)->snb_name[_i] = ' ';                                       \
        }                                                                     \
        for (_i=0; *((_name)+_i) != '\0' && _i<NETBIOS_NAME_LENGTH-1; _i++) { \
            (_snb)->snb_name[_i] = *((_name)+_i);                             \
        }                                                                     \
        (_snb)->snb_name[NETBIOS_NAME_LENGTH-1] = (_port);                    \
    }
#endif
