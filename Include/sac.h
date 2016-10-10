/*+@@file@@----------------------------------------------------------------*//*!
 \file		sac.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Sep 16 20:56:15 2016
 \date		Modified on Fri Sep 16 20:56:15 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __SAC_H__
#define __SAC_H__
#if __POCC__ >= 500
#pragma once
#endif
typedef DWORD HMAC;
#define RSA_KEY_LEN 64
#define SAC_SESSION_KEYLEN 8
#define SAC_PROTOCOL_WMDM 1
#define SAC_PROTOCOL_V1 2
#define SAC_CERT_X509 1
#define SAC_CERT_V1 2
typedef struct __MACINFO
{
	BOOL fUsed;
	BYTE abMacState[36];
} MACINFO;
#endif
