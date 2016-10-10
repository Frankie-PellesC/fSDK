/*+@@file@@----------------------------------------------------------------*//*!
 \file		inaddr.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Jun 27 09:58:25 2016
 \date		Modified on Mon Jun 27 09:58:25 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef s_addr
#if __POCC__ >= 500
#pragma once
#endif
typedef struct in_addr {
	union {
			struct {UCHAR s_b1, s_b2, s_b3, s_b4;} S_un_b;
				struct {
				USHORT s_w1, s_w2;} S_un_w;
				ULONG S_addr;
			} S_un;
#define s_addr  S_un.S_addr
#define s_host  S_un.S_un_b.s_b2
#define s_net   S_un.S_un_b.s_b1
#define s_imp   S_un.S_un_w.s_w2
#define s_impno S_un.S_un_b.s_b4
#define s_lh    S_un.S_un_b.s_b3
		} IN_ADDR, *PIN_ADDR, FAR * LPIN_ADDR;
#endif
