/*+@@file@@----------------------------------------------------------------*//*!
 \file		CertPolEng.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul  3 01:13:33 2016
 \date		Modified on Sun Jul  3 01:13:33 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _CERTPOLENG_H_
#define _CERTPOLENG_H_
#if __POCC__ >= 500
#pragma once
#endif
#if !defined(_CERT_POL_ENG_)
#define CERTPOLENGAPI DECLSPEC_IMPORT
#else
#define CERTPOLENGAPI
#endif
CERTPOLENGAPI NTSTATUS NTAPI PstGetTrustAnchors(PUNICODE_STRING pTargetName, DWORD cCriteria, PCCERT_SELECT_CRITERIA rgpCriteria, PSecPkgContext_IssuerListInfoEx *ppTrustedIssuers);
CERTPOLENGAPI NTSTATUS NTAPI    PstGetCertificates(PUNICODE_STRING pTargetName, DWORD cCriteria, PCCERT_SELECT_CRITERIA rgpCriteria, BOOL bIsClient, PDWORD pdwCertChainContextCount, PCCERT_CHAIN_CONTEXT **ppCertChainContexts);
CERTPOLENGAPI NTSTATUS NTAPI PstAcquirePrivateKey(PCCERT_CONTEXT pCert);
CERTPOLENGAPI NTSTATUS NTAPI PstValidate(PUNICODE_STRING pTargetName, BOOL bIsClient, CERT_USAGE_MATCH *pRequestedIssuancePolicy, HCERTSTORE *phAdditionalCertStore, PCCERT_CONTEXT pCert, GUID *pProvGUID);
CERTPOLENGAPI NTSTATUS NTAPI PstMapCertificate(PCCERT_CONTEXT pCert, LSA_TOKEN_INFORMATION_TYPE *pTokenInformationType, PVOID *ppTokenInformation);
CERTPOLENGAPI NTSTATUS NTAPI PstGetUserNameForCertificate(PCCERT_CONTEXT pCertContext, PUNICODE_STRING UserName);
#endif
