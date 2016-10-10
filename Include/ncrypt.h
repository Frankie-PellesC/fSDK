/*+@@file@@----------------------------------------------------------------*//*!
 \file		ncrypt.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Jun 27 10:13:16 2016
 \date		Modified on Mon Jun 27 10:13:16 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __NCRYPT_H__
#define __NCRYPT_H__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef WINAPI
#define WINAPI __stdcall
#endif
#ifndef __SECSTATUS_DEFINED__
typedef LONG SECURITY_STATUS;
#define __SECSTATUS_DEFINED__
#endif
#include <bcrypt.h>
#define MS_KEY_STORAGE_PROVIDER         L"Microsoft Software Key Storage Provider"
#define MS_SMART_CARD_KEY_STORAGE_PROVIDER L"Microsoft Smart Card Key Storage Provider"
#define NCRYPT_RSA_ALGORITHM            BCRYPT_RSA_ALGORITHM
#define NCRYPT_RSA_SIGN_ALGORITHM       BCRYPT_RSA_SIGN_ALGORITHM
#define NCRYPT_DH_ALGORITHM             BCRYPT_DH_ALGORITHM
#define NCRYPT_DSA_ALGORITHM            BCRYPT_DSA_ALGORITHM
#define NCRYPT_MD2_ALGORITHM            BCRYPT_MD2_ALGORITHM
#define NCRYPT_MD4_ALGORITHM            BCRYPT_MD4_ALGORITHM
#define NCRYPT_MD5_ALGORITHM            BCRYPT_MD5_ALGORITHM
#define NCRYPT_SHA1_ALGORITHM           BCRYPT_SHA1_ALGORITHM
#define NCRYPT_SHA256_ALGORITHM         BCRYPT_SHA256_ALGORITHM
#define NCRYPT_SHA384_ALGORITHM         BCRYPT_SHA384_ALGORITHM
#define NCRYPT_SHA512_ALGORITHM         BCRYPT_SHA512_ALGORITHM
#define NCRYPT_ECDSA_P256_ALGORITHM     BCRYPT_ECDSA_P256_ALGORITHM
#define NCRYPT_ECDSA_P384_ALGORITHM     BCRYPT_ECDSA_P384_ALGORITHM
#define NCRYPT_ECDSA_P521_ALGORITHM     BCRYPT_ECDSA_P521_ALGORITHM
#define NCRYPT_ECDH_P256_ALGORITHM      BCRYPT_ECDH_P256_ALGORITHM
#define NCRYPT_ECDH_P384_ALGORITHM      BCRYPT_ECDH_P384_ALGORITHM
#define NCRYPT_ECDH_P521_ALGORITHM      BCRYPT_ECDH_P521_ALGORITHM
#define NCRYPT_KEY_STORAGE_ALGORITHM            L"KEY_STORAGE"
#define NCRYPT_HASH_INTERFACE                   BCRYPT_HASH_INTERFACE
#define NCRYPT_ASYMMETRIC_ENCRYPTION_INTERFACE  BCRYPT_ASYMMETRIC_ENCRYPTION_INTERFACE
#define NCRYPT_SECRET_AGREEMENT_INTERFACE       BCRYPT_SECRET_AGREEMENT_INTERFACE
#define NCRYPT_SIGNATURE_INTERFACE              BCRYPT_SIGNATURE_INTERFACE
#define NCRYPT_KEY_STORAGE_INTERFACE            0x00010001
#define NCRYPT_SCHANNEL_INTERFACE               0x00010002
#define NCRYPT_SCHANNEL_SIGNATURE_INTERFACE     0x00010003
#define NCRYPT_RSA_ALGORITHM_GROUP      NCRYPT_RSA_ALGORITHM
#define NCRYPT_DH_ALGORITHM_GROUP       NCRYPT_DH_ALGORITHM
#define NCRYPT_DSA_ALGORITHM_GROUP      NCRYPT_DSA_ALGORITHM
#define NCRYPT_ECDSA_ALGORITHM_GROUP    L"ECDSA"
#define NCRYPT_ECDH_ALGORITHM_GROUP     L"ECDH"
#define NCRYPTBUFFER_VERSION                0
#define NCRYPTBUFFER_EMPTY                  0
#define NCRYPTBUFFER_DATA                   1
#define NCRYPTBUFFER_SSL_CLIENT_RANDOM      20
#define NCRYPTBUFFER_SSL_SERVER_RANDOM      21
#define NCRYPTBUFFER_SSL_HIGHEST_VERSION    22
#define NCRYPTBUFFER_SSL_CLEAR_KEY          23
#define NCRYPTBUFFER_SSL_KEY_ARG_DATA       24
#define NCRYPTBUFFER_PKCS_OID               40
#define NCRYPTBUFFER_PKCS_ALG_OID           41
#define NCRYPTBUFFER_PKCS_ALG_PARAM         42
#define NCRYPTBUFFER_PKCS_ALG_ID            43
#define NCRYPTBUFFER_PKCS_ATTRS             44
#define NCRYPTBUFFER_PKCS_KEY_NAME          45
#define NCRYPTBUFFER_PKCS_SECRET            46
#define NCRYPTBUFFER_CERT_BLOB              47
typedef BCryptBuffer NCryptBuffer;
typedef BCryptBuffer *PNCryptBuffer;
typedef BCryptBufferDesc NCryptBufferDesc;
typedef BCryptBufferDesc *PNCryptBufferDesc;
typedef ULONG_PTR NCRYPT_HANDLE;
typedef ULONG_PTR NCRYPT_PROV_HANDLE;
typedef ULONG_PTR NCRYPT_KEY_HANDLE;
typedef ULONG_PTR NCRYPT_HASH_HANDLE;
typedef ULONG_PTR NCRYPT_SECRET_HANDLE;
#define NCRYPT_NO_PADDING_FLAG      BCRYPT_PAD_NONE
#define NCRYPT_PAD_PKCS1_FLAG       BCRYPT_PAD_PKCS1
#define NCRYPT_PAD_OAEP_FLAG        BCRYPT_PAD_OAEP
#define NCRYPT_PAD_PSS_FLAG         BCRYPT_PAD_PSS
#define NCRYPT_NO_KEY_VALIDATION    BCRYPT_NO_KEY_VALIDATION
#define NCRYPT_MACHINE_KEY_FLAG                 0x00000020
#define NCRYPT_SILENT_FLAG                      0x00000040
#define NCRYPT_OVERWRITE_KEY_FLAG               0x00000080
#define NCRYPT_WRITE_KEY_TO_LEGACY_STORE_FLAG   0x00000200
#define NCRYPT_DO_NOT_FINALIZE_FLAG             0x00000400
#define NCRYPT_PERSIST_ONLY_FLAG                0x40000000
#define NCRYPT_PERSIST_FLAG                     0x80000000
#define NCRYPT_REGISTER_NOTIFY_FLAG             0x00000001
#define NCRYPT_UNREGISTER_NOTIFY_FLAG           0x00000002
SECURITY_STATUS WINAPI NCryptOpenStorageProvider(NCRYPT_PROV_HANDLE *phProvider, LPCWSTR pszProviderName, DWORD dwFlags);
#define NCRYPT_CIPHER_OPERATION                 BCRYPT_CIPHER_OPERATION
#define NCRYPT_HASH_OPERATION                   BCRYPT_HASH_OPERATION
#define NCRYPT_ASYMMETRIC_ENCRYPTION_OPERATION  BCRYPT_ASYMMETRIC_ENCRYPTION_OPERATION
#define NCRYPT_SECRET_AGREEMENT_OPERATION       BCRYPT_SECRET_AGREEMENT_OPERATION
#define NCRYPT_SIGNATURE_OPERATION              BCRYPT_SIGNATURE_OPERATION
#define NCRYPT_RNG_OPERATION                    BCRYPT_RNG_OPERATION
typedef struct _NCryptAlgorithmName {
	LPWSTR pszName;
	DWORD dwClass;
	DWORD dwAlgOperations;
	DWORD dwFlags;
} NCryptAlgorithmName;
SECURITY_STATUS WINAPI NCryptEnumAlgorithms(NCRYPT_PROV_HANDLE hProvider, DWORD dwAlgOperations, DWORD *pdwAlgCount, NCryptAlgorithmName **ppAlgList, DWORD dwFlags);
SECURITY_STATUS WINAPI NCryptIsAlgSupported(NCRYPT_PROV_HANDLE hProvider, LPCWSTR pszAlgId, DWORD dwFlags);
#define NCRYPT_MACHINE_KEY_FLAG         0x00000020
typedef struct NCryptKeyName {
	LPWSTR pszName;
	LPWSTR pszAlgid;
	DWORD dwLegacyKeySpec;
	DWORD dwFlags;
} NCryptKeyName;
SECURITY_STATUS WINAPI NCryptEnumKeys(NCRYPT_PROV_HANDLE hProvider, LPCWSTR pszScope, NCryptKeyName **ppKeyName, PVOID *ppEnumState, DWORD dwFlags);
typedef struct NCryptProviderName {
	LPWSTR pszName;
	LPWSTR pszComment;
} NCryptProviderName;
SECURITY_STATUS WINAPI NCryptEnumStorageProviders(DWORD *pdwProviderCount, NCryptProviderName **ppProviderList, DWORD dwFlags);
SECURITY_STATUS WINAPI NCryptFreeBuffer(PVOID pvInput);
#define NCRYPT_MACHINE_KEY_FLAG         0x00000020
#define NCRYPT_SILENT_FLAG              0x00000040
SECURITY_STATUS WINAPI NCryptOpenKey(NCRYPT_PROV_HANDLE hProvider, NCRYPT_KEY_HANDLE *phKey, LPCWSTR pszKeyName, DWORD dwLegacyKeySpec, DWORD dwFlags);
#define NCRYPT_MACHINE_KEY_FLAG         0x00000020
#define NCRYPT_OVERWRITE_KEY_FLAG       0x00000080
SECURITY_STATUS WINAPI NCryptCreatePersistedKey(NCRYPT_PROV_HANDLE hProvider, NCRYPT_KEY_HANDLE *phKey, LPCWSTR pszAlgId, LPCWSTR pszKeyName, DWORD dwLegacyKeySpec, DWORD dwFlags);
#define NCRYPT_NAME_PROPERTY                    L"Name"
#define NCRYPT_UNIQUE_NAME_PROPERTY             L"Unique Name"
#define NCRYPT_ALGORITHM_PROPERTY               L"Algorithm Name"
#define NCRYPT_LENGTH_PROPERTY                  L"Length"
#define NCRYPT_LENGTHS_PROPERTY                 L"Lengths"
#define NCRYPT_BLOCK_LENGTH_PROPERTY            L"Block Length"
#define NCRYPT_UI_POLICY_PROPERTY               L"UI Policy"
#define NCRYPT_EXPORT_POLICY_PROPERTY           L"Export Policy"
#define NCRYPT_WINDOW_HANDLE_PROPERTY           L"HWND Handle"
#define NCRYPT_USE_CONTEXT_PROPERTY             L"Use Context"
#define NCRYPT_IMPL_TYPE_PROPERTY               L"Impl Type"
#define NCRYPT_KEY_USAGE_PROPERTY               L"Key Usage"
#define NCRYPT_KEY_TYPE_PROPERTY                L"Key Type"
#define NCRYPT_VERSION_PROPERTY                 L"Version"
#define NCRYPT_SECURITY_DESCR_SUPPORT_PROPERTY  L"Security Descr Support"
#define NCRYPT_SECURITY_DESCR_PROPERTY          L"Security Descr"
#define NCRYPT_USE_COUNT_ENABLED_PROPERTY       L"Enabled Use Count"
#define NCRYPT_USE_COUNT_PROPERTY               L"Use Count"
#define NCRYPT_LAST_MODIFIED_PROPERTY           L"Modified"
#define NCRYPT_MAX_NAME_LENGTH_PROPERTY         L"Max Name Length"
#define NCRYPT_ALGORITHM_GROUP_PROPERTY         L"Algorithm Group"
#define NCRYPT_DH_PARAMETERS_PROPERTY           BCRYPT_DH_PARAMETERS
#define NCRYPT_PROVIDER_HANDLE_PROPERTY         L"Provider Handle"
#define NCRYPT_PIN_PROPERTY                     L"SmartCardPin"
#define NCRYPT_READER_PROPERTY                  L"SmartCardReader"
#define NCRYPT_SMARTCARD_GUID_PROPERTY          L"SmartCardGuid"
#define NCRYPT_CERTIFICATE_PROPERTY             L"SmartCardKeyCertificate"
#define NCRYPT_PIN_PROMPT_PROPERTY              L"SmartCardPinPrompt"
#define NCRYPT_USER_CERTSTORE_PROPERTY          L"SmartCardUserCertStore"
#define NCRYPT_ROOT_CERTSTORE_PROPERTY          L"SmartcardRootCertStore"
#define NCRYPT_SECURE_PIN_PROPERTY              L"SmartCardSecurePin"
#define NCRYPT_ASSOCIATED_ECDH_KEY              L"SmartCardAssociatedECDHKey"
#define NCRYPT_SCARD_PIN_ID                     L"SmartCardPinId"
#define NCRYPT_SCARD_PIN_INFO                   L"SmartCardPinInfo"
#define NCRYPT_MAX_PROPERTY_NAME        64
#define NCRYPT_MAX_PROPERTY_DATA        0x100000
#define NCRYPT_ALLOW_EXPORT_FLAG                0x00000001
#define NCRYPT_ALLOW_PLAINTEXT_EXPORT_FLAG      0x00000002
#define NCRYPT_ALLOW_ARCHIVING_FLAG             0x00000004
#define NCRYPT_ALLOW_PLAINTEXT_ARCHIVING_FLAG   0x00000008
#define NCRYPT_IMPL_HARDWARE_FLAG               0x00000001
#define NCRYPT_IMPL_SOFTWARE_FLAG               0x00000002
#define NCRYPT_IMPL_REMOVABLE_FLAG              0x00000008
#define NCRYPT_IMPL_HARDWARE_RNG_FLAG           0x00000010
#define NCRYPT_ALLOW_DECRYPT_FLAG               0x00000001
#define NCRYPT_ALLOW_SIGNING_FLAG               0x00000002
#define NCRYPT_ALLOW_KEY_AGREEMENT_FLAG         0x00000004
#define NCRYPT_ALLOW_ALL_USAGES                 0x00ffffff
#define NCRYPT_UI_PROTECT_KEY_FLAG              0x00000001
#define NCRYPT_UI_FORCE_HIGH_PROTECTION_FLAG    0x00000002
typedef struct __NCRYPT_UI_POLICY_BLOB {
	DWORD dwVersion;
	DWORD dwFlags;
	DWORD cbCreationTitle;
	DWORD cbFriendlyName;
	DWORD cbDescription;
} NCRYPT_UI_POLICY_BLOB;
typedef struct __NCRYPT_UI_POLICY {
	DWORD dwVersion;
	DWORD dwFlags;
	LPCWSTR pszCreationTitle;
	LPCWSTR pszFriendlyName;
	LPCWSTR pszDescription;
} NCRYPT_UI_POLICY;
typedef struct __NCRYPT_SUPPORTED_LENGTHS {
	DWORD dwMinLength;
	DWORD dwMaxLength;
	DWORD dwIncrement;
	DWORD dwDefaultLength;
} NCRYPT_SUPPORTED_LENGTHS;
#define NCRYPT_PERSIST_ONLY_FLAG        0x40000000
SECURITY_STATUS WINAPI NCryptGetProperty(NCRYPT_HANDLE hObject, LPCWSTR pszProperty, PBYTE pbOutput, DWORD cbOutput, DWORD *pcbResult, DWORD dwFlags);
#define NCRYPT_PERSIST_FLAG             0x80000000
#define NCRYPT_PERSIST_ONLY_FLAG        0x40000000
SECURITY_STATUS WINAPI NCryptSetProperty(NCRYPT_HANDLE hObject, LPCWSTR pszProperty, PBYTE pbInput, DWORD cbInput, DWORD dwFlags);
#define     NCRYPT_WRITE_KEY_TO_LEGACY_STORE_FLAG   0x00000200
SECURITY_STATUS WINAPI NCryptFinalizeKey(NCRYPT_KEY_HANDLE hKey, DWORD dwFlags);
SECURITY_STATUS WINAPI NCryptEncrypt(NCRYPT_KEY_HANDLE hKey, PBYTE pbInput, DWORD cbInput, VOID *pPaddingInfo, PBYTE pbOutput, DWORD cbOutput, DWORD *pcbResult, DWORD dwFlags);
SECURITY_STATUS WINAPI NCryptDecrypt(NCRYPT_KEY_HANDLE hKey, PBYTE pbInput, DWORD cbInput, VOID *pPaddingInfo, PBYTE pbOutput, DWORD cbOutput, DWORD *pcbResult, DWORD dwFlags);
#define NCRYPT_PKCS7_ENVELOPE_BLOB      L"PKCS7_ENVELOPE"
#define NCRYPT_PKCS8_PRIVATE_KEY_BLOB   L"PKCS8_PRIVATEKEY"
#define NCRYPT_OPAQUETRANSPORT_BLOB     L"OpaqueTransport"
#define NCRYPT_MACHINE_KEY_FLAG         0x00000020
#define NCRYPT_DO_NOT_FINALIZE_FLAG     0x00000400
#define NCRYPT_EXPORT_LEGACY_FLAG       0x00000800
SECURITY_STATUS WINAPI NCryptImportKey(NCRYPT_PROV_HANDLE hProvider, NCRYPT_KEY_HANDLE hImportKey, LPCWSTR pszBlobType, NCryptBufferDesc *pParameterList, NCRYPT_KEY_HANDLE *phKey, PBYTE pbData, DWORD cbData, DWORD dwFlags);
SECURITY_STATUS WINAPI NCryptExportKey(NCRYPT_KEY_HANDLE hKey, NCRYPT_KEY_HANDLE hExportKey, LPCWSTR pszBlobType, NCryptBufferDesc *pParameterList, PBYTE pbOutput, DWORD cbOutput, DWORD *pcbResult, DWORD dwFlags);
SECURITY_STATUS WINAPI NCryptSignHash(NCRYPT_KEY_HANDLE hKey, VOID *pPaddingInfo, PBYTE pbHashValue, DWORD cbHashValue, PBYTE pbSignature, DWORD cbSignature, DWORD *pcbResult, DWORD dwFlags);
SECURITY_STATUS WINAPI NCryptVerifySignature(NCRYPT_KEY_HANDLE hKey, VOID *pPaddingInfo, PBYTE pbHashValue, DWORD cbHashValue, PBYTE pbSignature, DWORD cbSignature, DWORD dwFlags);
SECURITY_STATUS WINAPI NCryptDeleteKey(NCRYPT_KEY_HANDLE hKey, DWORD dwFlags);
SECURITY_STATUS WINAPI NCryptFreeObject(NCRYPT_HANDLE hObject);
BOOL WINAPI NCryptIsKeyHandle(NCRYPT_KEY_HANDLE hKey);
SECURITY_STATUS WINAPI NCryptTranslateHandle(NCRYPT_PROV_HANDLE *phProvider, NCRYPT_KEY_HANDLE *phKey, HCRYPTPROV hLegacyProv, HCRYPTKEY hLegacyKey, DWORD dwLegacyKeySpec, DWORD dwFlags);
#define NCRYPT_REGISTER_NOTIFY_FLAG     0x00000001
#define NCRYPT_UNREGISTER_NOTIFY_FLAG   0x00000002
#define NCRYPT_MACHINE_KEY_FLAG         0x00000020
SECURITY_STATUS WINAPI NCryptNotifyChangeKey(NCRYPT_PROV_HANDLE hProvider, HANDLE *phEvent, DWORD dwFlags);
SECURITY_STATUS WINAPI NCryptSecretAgreement(NCRYPT_KEY_HANDLE hPrivKey, NCRYPT_KEY_HANDLE hPubKey, NCRYPT_SECRET_HANDLE *phAgreedSecret, DWORD dwFlags);
SECURITY_STATUS WINAPI NCryptDeriveKey(NCRYPT_SECRET_HANDLE hSharedSecret, LPCWSTR pwszKDF, NCryptBufferDesc *pParameterList, PBYTE pbDerivedKey, DWORD cbDerivedKey, DWORD *pcbResult, ULONG dwFlags);
#define NCRYPT_KEY_STORAGE_INTERFACE_VERSION BCRYPT_MAKE_INTERFACE_VERSION(1,0)

#endif



