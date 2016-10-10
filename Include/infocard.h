/*+@@file@@----------------------------------------------------------------*//*!
 \file		infocard.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul 16 23:46:24 2016
 \date		Modified on Sat Jul 16 23:46:24 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __infocard_h__
#define __infocard_h__
#if __POCC__ >= 500
#pragma once
#endif
#include <assert.h>
#include <stdlib.h>
#include <windows.h>
#include <wincrypt.h>
#define CARDSPACECALL __stdcall
typedef enum _HandleType
{
    Asymmetric = 1,
    Symmetric  = 2,
    Transform  = 3,
    Hash       = 4
} HandleType;
typedef enum _PaddingMode
{
    None     = 1,
    PKCS7    = 2,
    Zeros    = 3,
    ANSIX923 = 4,
    ISO10126 = 5
} PaddingMode;
typedef enum _Direction
{
    DirectionEncrypt = 1,
    DirectionDecrypt = 2
} Direction;
typedef struct _INFORMATIONCARD_ASYMMETRIC_CRYPTO_PARAMETERS
{
    int    keySize;
    LPWSTR keyExchangeAlgorithm;
    LPWSTR signatureAlgorithm;
} INFORMATIONCARD_ASYMMETRIC_CRYPTO_PARAMETERS, *PINFORMATIONCARD_ASYMMETRIC_CRYPTO_PARAMETERS;
typedef struct _INFORMATIONCARD_SYMMETRIC_CRYPTO_PARAMETERS
{
    int    keySize;
    int    blockSize;
    int    feedbackSize;
} INFORMATIONCARD_SYMMETRIC_CRYPTO_PARAMETERS, *PINFORMATIONCARD_SYMMETRIC_CRYPTO_PARAMETERS;
typedef struct _INFORMATIONCARD_TRANSFORM_CRYPTO_PARAMETERS
{
    int  inputBlockSize;
    int  outputBlockSize;
    BOOL canTransformMultipleBlocks;
    BOOL canReuseTransform;
} INFORMATIONCARD_TRANSFORM_CRYPTO_PARAMETERS, *PINFORMATIONCARD_TRANSFORM_CRYPTO_PARAMETERS;
typedef struct _INFORMATIONCARD_HASH_CRYPTO_PARAMETERS
{
    int hashSize;
    INFORMATIONCARD_TRANSFORM_CRYPTO_PARAMETERS transform;
} INFORMATIONCARD_HASH_CRYPTO_PARAMETERS, *PINFORMATIONCARD_HASH_CRYPTO_PARAMETERS;
typedef struct _INFORMATIONCARD_CRYPTO_HANDLE
{
    HandleType type;
    LONGLONG   expiration;
    PVOID      cryptoParameters;
} INFORMATIONCARD_CRYPTO_HANDLE, *PINFORMATIONCARD_CRYPTO_HANDLE;
#pragma pack(1)
typedef struct _GENERIC_XML_TOKEN
{
    FILETIME createDate;
    FILETIME expiryDate;
    LPWSTR xmlToken;
    LPWSTR internalTokenReference;
    LPWSTR externalTokenReference;
} GENERIC_XML_TOKEN,*PGENERIC_XML_TOKEN;
#pragma pack()
typedef struct _POLICY_ELEMENT
{
    LPCWSTR     targetEndpointAddress;
    LPCWSTR     issuerEndpointAddress;
    LPCWSTR     issuedTokenParameters;
    LPCWSTR     privacyNoticeLink;
    DWORD       privacyNoticeVersion;
    BOOL        useManagedPresentation;
} POLICY_ELEMENT, *PPOLICY_ELEMENT;
typedef struct _ENDPOINTADDRESS
{
    LPCWSTR     serviceUrl;
    LPCWSTR     policyUrl;
    DATA_BLOB    rawCertificate;
}ENDPOINTADDRESS, *PENDPOINTADDRESS;
typedef struct _ENDPOINTADDRESS2
{
    LPCWSTR     serviceUrl;
    LPCWSTR     policyUrl;
    DWORD       identityType;
    PVOID       identityBytes;
}ENDPOINTADDRESS2, *PENDPOINTADDRESS2;
typedef struct _CERTIFICATE_CHAIN_BLOB
{
    DWORD        certCount;  
    DATA_BLOB*   rawCertificates;
}CERTIFICATE_CHAIN_BLOB, *PCERTIFICATE_CHAIN_BLOB;
typedef struct _CLAIMLIST
{
    DWORD       count;
    LPCWSTR*    claims;
}CLAIMLIST, *PCLAIMLIST;
typedef struct _RECIPIENTPOLICY
{
    ENDPOINTADDRESS recipient;
    ENDPOINTADDRESS issuer;
    LPCWSTR         tokenType;
    CLAIMLIST       requiredClaims;
    CLAIMLIST       optionalClaims;
    LPCWSTR         privacyUrl;
    UINT            privacyVersion;
}RECIPIENTPOLICY, *PRECIPIENTPOLICY;
typedef struct _RECIPIENTPOLICY2
{
    ENDPOINTADDRESS2 recipient;
    ENDPOINTADDRESS2 issuer;
    LPCWSTR         tokenType;
    CLAIMLIST       requiredClaims;
    CLAIMLIST       optionalClaims;
    LPCWSTR         privacyUrl;
    UINT            privacyVersion;
}RECIPIENTPOLICY2, *PRECIPIENTPOLICY2;
#define RECIPIENTPOLICYV1 1
#define RECIPIENTPOLICYV2 2
HRESULT CARDSPACECALL GetToken(DWORD cPolicyChain, PPOLICY_ELEMENT pPolicyChain, PGENERIC_XML_TOKEN *securityToken, PINFORMATIONCARD_CRYPTO_HANDLE *phProofTokenCrypto);
HRESULT CARDSPACECALL ManageCardSpace();
HRESULT CARDSPACECALL ImportInformationCard(LPCWSTR fileName);
HRESULT CARDSPACECALL Encrypt(PINFORMATIONCARD_CRYPTO_HANDLE hCrypto, BOOL fOAEP, DWORD cbInData, PBYTE pInData, DWORD *pcbOutData, PBYTE *ppOutData);
HRESULT CARDSPACECALL Decrypt(PINFORMATIONCARD_CRYPTO_HANDLE hCrypto, BOOL fOAEP, DWORD cbInData, PBYTE pInData, DWORD *pcbOutData, PBYTE *ppOutData);
HRESULT CARDSPACECALL SignHash(PINFORMATIONCARD_CRYPTO_HANDLE hCrypto, DWORD cbHash, PBYTE pHash, LPCWSTR hashAlgOid, DWORD *pcbSig, PBYTE *ppSig);
HRESULT CARDSPACECALL VerifyHash(PINFORMATIONCARD_CRYPTO_HANDLE hCrypto, DWORD cbHash, BYTE *pHash, LPCWSTR hashAlgOid, DWORD cbSig, BYTE *pSig, BOOL *pfVerified);
HRESULT CARDSPACECALL GetCryptoTransform(PINFORMATIONCARD_CRYPTO_HANDLE hSymmetricCrypto, DWORD mode, PaddingMode padding, DWORD feedbackSize, Direction direction, DWORD cbIV, BYTE *pIV, PINFORMATIONCARD_CRYPTO_HANDLE *pphTransform);
HRESULT CARDSPACECALL GetKeyedHash(PINFORMATIONCARD_CRYPTO_HANDLE hSymmetricCrypto, PINFORMATIONCARD_CRYPTO_HANDLE *pphHash);
HRESULT CARDSPACECALL TransformBlock(PINFORMATIONCARD_CRYPTO_HANDLE hCrypto, DWORD cbInData, PBYTE pInData, DWORD *pcbOutData, PBYTE *ppOutData);
HRESULT CARDSPACECALL TransformFinalBlock(PINFORMATIONCARD_CRYPTO_HANDLE hCrypto, DWORD cbInData, PBYTE pInData, DWORD *pcbOutData, PBYTE *ppOutData);
HRESULT CARDSPACECALL HashCore(PINFORMATIONCARD_CRYPTO_HANDLE hCrypto, DWORD cbInData, PBYTE pInData);
HRESULT CARDSPACECALL HashFinal(PINFORMATIONCARD_CRYPTO_HANDLE hCrypto, DWORD cbInData, PBYTE pInData, DWORD *pcbOutData, PBYTE *ppOutData);
BOOL CARDSPACECALL FreeToken(PGENERIC_XML_TOKEN pAllocMemory);
HRESULT CARDSPACECALL CloseCryptoHandle(PINFORMATIONCARD_CRYPTO_HANDLE hCrypto);
HRESULT CARDSPACECALL GenerateDerivedKey(PINFORMATIONCARD_CRYPTO_HANDLE hCrypto, DWORD cbLabel, PBYTE pLabel, DWORD cbNonce, PBYTE pNonce, DWORD derivedKeyLength, DWORD offset, LPCWSTR algId, DWORD *pcbKey, PBYTE *ppKey);
HRESULT CARDSPACECALL GetBrowserToken(DWORD dwParamType, PVOID pParam, DWORD *pcbToken, PBYTE *ppToken);
#ifndef E_ICARD_COMMUNICATION
#define E_ICARD_COMMUNICATION            ((HRESULT)0xC0050100L)
#endif
#ifndef E_ICARD_DATA_ACCESS
#define E_ICARD_DATA_ACCESS              ((HRESULT)0xC0050101L)
#endif
#ifndef E_ICARD_EXPORT
#define E_ICARD_EXPORT                   ((HRESULT)0xC0050102L)
#endif
#ifndef E_ICARD_IDENTITY
#define E_ICARD_IDENTITY                 ((HRESULT)0xC0050103L)
#endif
#ifndef E_ICARD_IMPORT
#define E_ICARD_IMPORT                   ((HRESULT)0xC0050104L)
#endif
#ifndef E_ICARD_ARGUMENT
#define E_ICARD_ARGUMENT                 ((HRESULT)0xC0050105L)
#endif
#ifndef E_ICARD_REQUEST
#define E_ICARD_REQUEST                  ((HRESULT)0xC0050106L)
#endif
#ifndef E_ICARD_INFORMATIONCARD
#define E_ICARD_INFORMATIONCARD          ((HRESULT)0xC0050107L)
#endif
#ifndef E_ICARD_STOREKEY
#define E_ICARD_STOREKEY                 ((HRESULT)0xC0050108L)
#endif
#ifndef E_ICARD_LOGOVALIDATION
#define E_ICARD_LOGOVALIDATION           ((HRESULT)0xC0050109L)
#endif
#ifndef E_ICARD_PASSWORDVALIDATION
#define E_ICARD_PASSWORDVALIDATION       ((HRESULT)0xC005010AL)
#endif
#ifndef E_ICARD_POLICY
#define E_ICARD_POLICY                   ((HRESULT)0xC005010BL)
#endif
#ifndef E_ICARD_PROCESSDIED
#define E_ICARD_PROCESSDIED              ((HRESULT)0xC005010CL)
#endif
#ifndef E_ICARD_SERVICEBUSY
#define E_ICARD_SERVICEBUSY              ((HRESULT)0xC005010DL)
#endif
#ifndef E_ICARD_SERVICE
#define E_ICARD_SERVICE                  ((HRESULT)0xC005010EL)
#endif
#ifndef E_ICARD_SHUTTINGDOWN
#define E_ICARD_SHUTTINGDOWN             ((HRESULT)0xC005010FL)
#endif
#ifndef E_ICARD_TOKENCREATION
#define E_ICARD_TOKENCREATION            ((HRESULT)0xC0050110L)
#endif
#ifndef E_ICARD_TRUSTEXCHANGE
#define E_ICARD_TRUSTEXCHANGE            ((HRESULT)0xC0050111L)
#endif
#ifndef E_ICARD_UNTRUSTED
#define E_ICARD_UNTRUSTED                ((HRESULT)0xC0050112L)
#endif
#ifndef E_ICARD_USERCANCELLED
#define E_ICARD_USERCANCELLED            ((HRESULT)0xC0050113L)
#endif
#ifndef E_ICARD_STORE_IMPORT
#define E_ICARD_STORE_IMPORT             ((HRESULT)0xC0050114L)
#endif
#ifndef E_ICARD_FAIL
#define E_ICARD_FAIL                     ((HRESULT)0xC0050115L)
#endif
#ifndef E_ICARD_UI_INITIALIZATION
#define E_ICARD_UI_INITIALIZATION        ((HRESULT)0xC005011AL)
#endif
#ifndef E_ICARD_REFRESH_REQUIRED
#define E_ICARD_REFRESH_REQUIRED         ((HRESULT)0xC0050180L)
#endif
#ifndef E_ICARD_MISSING_APPLIESTO
#define E_ICARD_MISSING_APPLIESTO        ((HRESULT)0xC0050181L)
#endif
#ifndef E_ICARD_INVALID_PROOF_KEY
#define E_ICARD_INVALID_PROOF_KEY        ((HRESULT)0xC0050182L)
#endif
#ifndef E_ICARD_UNKNOWN_REFERENCE
#define E_ICARD_UNKNOWN_REFERENCE        ((HRESULT)0xC0050183L)
#endif
#ifndef E_ICARD_FAILED_REQUIRED_CLAIMS
#define E_ICARD_FAILED_REQUIRED_CLAIMS   ((HRESULT)0xC0050184L)
#endif
#ifndef AUDIT_CARD_WRITTEN
#define AUDIT_CARD_WRITTEN               ((HRESULT)0x40050200L)
#endif
#ifndef AUDIT_CARD_DELETE
#define AUDIT_CARD_DELETE                ((HRESULT)0x40050201L)
#endif
#ifndef AUDIT_CARD_IMPORT
#define AUDIT_CARD_IMPORT                ((HRESULT)0x40050202L)
#endif
#ifndef AUDIT_STORE_IMPORT
#define AUDIT_STORE_IMPORT               ((HRESULT)0x40050203L)
#endif
#ifndef AUDIT_STORE_EXPORT
#define AUDIT_STORE_EXPORT               ((HRESULT)0x40050204L)
#endif
#ifndef AUDIT_STORE_DELETE
#define AUDIT_STORE_DELETE               ((HRESULT)0x40050205L)
#endif
#ifndef AUDIT_SERVICE_IDLE_STOP
#define AUDIT_SERVICE_IDLE_STOP          ((HRESULT)0x40050206L)
#endif
#endif
