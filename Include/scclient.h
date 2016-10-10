/*+@@file@@----------------------------------------------------------------*//*!
 \file		scclient.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Sep 16 22:32:25 2016
 \date		Modified on Fri Sep 16 22:32:25 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/
#if __POCC__ >= 500
#pragma once
#endif
#error C++ only header!
#if 0
#ifndef _CSECURECHANNELCLIENT_H_2AD99356_6FD2_11d3_8497_00C04F79DBC0
#define _CSECURECHANNELCLIENT_H_2AD99356_6FD2_11d3_8497_00C04F79DBC0
#include "wtypes.h"
#ifdef USE_X509
#include "rsa.h"
#endif
#ifdef USE_X509
#include "x509cert.h"
#endif
#include "sac.h"
class CSecureChannelClient
{
public
	CSecureChannelClient();
	~CSecureChannelClient();
	HRESULT SetCertificate(DWORD dwFlags, BYTE *pbAppCert, DWORD dwCertLen, BYTE *pbAppPVK, DWORD dwPVKLen);
	void SetInterface(IComponentAuthenticate *pComponentAuth);
	HRESULT Authenticate(DWORD dwProtocolID);
	HRESULT EncryptParam(BYTE *pbData, DWORD dwDataLen);
	HRESULT DecryptParam(BYTE *pbData, DWORD dwDataLen);
	HRESULT MACInit(HMAC *phMAC);
	HRESULT MACUpdate(HMAC hMAC, BYTE *pbData, DWORD dwDataLen);
	HRESULT MACFinal(HMAC hMAC, BYTE abData[SAC_MAC_LEN]);
	HRESULT GetAppSec(DWORD *pdwLocalAppSec, DWORD *pdwRemoteAppSec);
	HRESULT SetSessionKey(BYTE *pbSPSessionKey);
	HRESULT GetSessionKey(BYTE *pbSPSessionKey);
	HRESULT GetRemoteAppCert(BYTE *pbAppCert, DWORD *pdwCertLen);
	BOOL fIsAuthenticated();
private
       BOOL m_fAuthenticated;
       BYTE *m_pbAppCert;
       DWORD m_dwCertLen;
	   BYTE *m_pbRemoteCert;
	   DWORD m_dwRemoteCertLen;
       BYTE *m_pbAppPVK;
       DWORD m_dwPVKLen; 
       BYTE *m_pbSessionKey;
       DWORD m_dwSessionKeyLen;
	   BOOL m_TableInit;
       unsigned long m_DesTable[32];
       IComponentAuthenticate *m_pAuth;
	   DWORD m_dwCertFlags;
#ifdef USE_X509
       CX509Cert m_CertObj;
#endif
	   MACINFO aMacInfo[20];
	   BYTE m_abMacKey[64];
	   BOOL m_fMacKeyInit;
       CRITICAL_SECTION m_CS;
       HRESULT Protocol1();
	   HRESULT Protocol2();
};
#endif
#endif

