/*+@@file@@----------------------------------------------------------------*//*!
 \file		i_cryptasn1tls.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 17 21:46:44 2016
 \date		Modified on Sun Jul 17 21:46:44 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __I_CRYPTASN1TLS_H__
#define __I_CRYPTASN1TLS_H__
#if __POCC__ >= 500
#pragma once
#endif
typedef DWORD HCRYPTASN1MODULE;
typedef void *ASN1module_t;
typedef void *ASN1encoding_t;
typedef void *ASN1decoding_t;
HCRYPTASN1MODULE WINAPI I_CryptInstallAsn1Module(ASN1module_t pMod, DWORD dwFlags, void *pvReserved);
BOOL WINAPI I_CryptUninstallAsn1Module(HCRYPTASN1MODULE hAsn1Module);
ASN1encoding_t WINAPI I_CryptGetAsn1Encoder(HCRYPTASN1MODULE hAsn1Module);
ASN1decoding_t WINAPI I_CryptGetAsn1Decoder(HCRYPTASN1MODULE hAsn1Module);
#endif
