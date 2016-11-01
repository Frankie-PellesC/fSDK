/*+@@file@@----------------------------------------------------------------*//*!
 \file		winefs.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Jun 27 10:21:55 2016
 \date		Modified on Mon Jun 27 10:21:55 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __WINEFS_H__
#define __WINEFS_H__
#if (NTDDI_VERSION >= NTDDI_WIN2K)
#if __POCC__ >= 500
#pragma once
#endif
#define WINEFS_SETUSERKEY_SET_CAPABILITIES      0x00000001
#if (NTDDI_VERSION >= NTDDI_WINXP)
#ifndef ALGIDDEF
#define ALGIDDEF
typedef unsigned int ALG_ID;
#endif
#endif
typedef struct _CERTIFICATE_BLOB {
	DWORD dwCertEncodingType;
  DWORD cbData;
  PBYTE pbData;
}
EFS_CERTIFICATE_BLOB, *PEFS_CERTIFICATE_BLOB;
typedef struct _EFS_HASH_BLOB {
	DWORD cbData;
	PBYTE pbData;
} EFS_HASH_BLOB, *PEFS_HASH_BLOB;
#if (NTDDI_VERSION >= NTDDI_WINXP)
typedef struct _EFS_RPC_BLOB {
	DWORD cbData;
	PBYTE pbData;
} EFS_RPC_BLOB, *PEFS_RPC_BLOB;
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
typedef struct _EFS_PIN_BLOB {

	DWORD cbPadding;
	DWORD cbData;
	PBYTE pbData;
} EFS_PIN_BLOB, *PEFS_PIN_BLOB;
#endif
#if (NTDDI_VERSION >= NTDDI_WINXP)
typedef struct _EFS_KEY_INFO {
	DWORD dwVersion;
	ULONG Entropy;
	ALG_ID Algorithm;
	ULONG KeyLength;

}
EFS_KEY_INFO, *PEFS_KEY_INFO;
#endif
#if (NTDDI_VERSION >= NTDDI_WIN7)
typedef struct _EFS_COMPATIBILITY_INFO {
	DWORD EfsVersion;

}
EFS_COMPATIBILITY_INFO, *PEFS_COMPATIBILITY_INFO;
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
typedef struct _EFS_DECRYPTION_STATUS_INFO {
	DWORD dwDecryptionError;
	DWORD dwHashOffset;
	DWORD cbHash;
}
EFS_DECRYPTION_STATUS_INFO, *PEFS_DECRYPTION_STATUS_INFO;
typedef struct _EFS_ENCRYPTION_STATUS_INFO {
	BOOL bHasCurrentKey;
	DWORD dwEncryptionError;
}
EFS_ENCRYPTION_STATUS_INFO, *PEFS_ENCRYPTION_STATUS_INFO;
#endif
typedef struct _ENCRYPTION_CERTIFICATE {
	DWORD cbTotalLength;
	SID *pUserSid;
	PEFS_CERTIFICATE_BLOB pCertBlob;
}
ENCRYPTION_CERTIFICATE, *PENCRYPTION_CERTIFICATE;
#define MAX_SID_SIZE 256
typedef struct _ENCRYPTION_CERTIFICATE_HASH {
	DWORD cbTotalLength;
	SID *pUserSid;
	PEFS_HASH_BLOB pHash;
  LPWSTR lpDisplayInformation;
}
ENCRYPTION_CERTIFICATE_HASH, *PENCRYPTION_CERTIFICATE_HASH;
typedef struct _ENCRYPTION_CERTIFICATE_HASH_LIST {
	DWORD nCert_Hash;
	PENCRYPTION_CERTIFICATE_HASH * pUsers;
} ENCRYPTION_CERTIFICATE_HASH_LIST, *PENCRYPTION_CERTIFICATE_HASH_LIST;
typedef struct _ENCRYPTION_CERTIFICATE_LIST {
	DWORD nUsers;
	PENCRYPTION_CERTIFICATE * pUsers;
} ENCRYPTION_CERTIFICATE_LIST, *PENCRYPTION_CERTIFICATE_LIST;
#if (NTDDI_VERSION >= NTDDI_VISTA)
#define		EFS_METADATA_ADD_USER		0x00000001
#define		EFS_METADATA_REMOVE_USER	0x00000002
#define		EFS_METADATA_REPLACE_USER	0x00000004
#define		EFS_METADATA_GENERAL_OP		0x00000008
typedef struct _ENCRYPTED_FILE_METADATA_SIGNATURE {
	DWORD dwEfsAccessType;
	PENCRYPTION_CERTIFICATE_HASH_LIST pCertificatesAdded;
	PENCRYPTION_CERTIFICATE pEncryptionCertificate;
	PEFS_RPC_BLOB pEfsStreamSignature;
}
ENCRYPTED_FILE_METADATA_SIGNATURE, *PENCRYPTED_FILE_METADATA_SIGNATURE;
#endif
WINADVAPI DWORD WINAPI QueryUsersOnEncryptedFile(LPCWSTR lpFileName, PENCRYPTION_CERTIFICATE_HASH_LIST *pUsers);
WINADVAPI DWORD WINAPI QueryRecoveryAgentsOnEncryptedFile(LPCWSTR lpFileName, PENCRYPTION_CERTIFICATE_HASH_LIST *pRecoveryAgents);
WINADVAPI DWORD WINAPI RemoveUsersFromEncryptedFile(LPCWSTR lpFileName, PENCRYPTION_CERTIFICATE_HASH_LIST pHashes);
WINADVAPI DWORD WINAPI AddUsersToEncryptedFile(LPCWSTR lpFileName, PENCRYPTION_CERTIFICATE_LIST pEncryptionCertificates);
#if (NTDDI_VERSION >= NTDDI_VISTA)
WINADVAPI DWORD WINAPI SetUserFileEncryptionKey(PENCRYPTION_CERTIFICATE pEncryptionCertificate);
#else
WINADVAPI DWORD WINAPI SetUserFileEncryptionKey(PENCRYPTION_CERTIFICATE pEncryptionCertificate);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
WINADVAPI DWORD WINAPI SetUserFileEncryptionKeyEx(PENCRYPTION_CERTIFICATE pEncryptionCertificate, DWORD dwCapabilities, DWORD dwFlags, LPVOID pvReserved);
#endif
WINADVAPI VOID WINAPI FreeEncryptionCertificateHashList(PENCRYPTION_CERTIFICATE_HASH_LIST pUsers);
WINADVAPI BOOL WINAPI EncryptionDisable(LPCWSTR DirPath, BOOL Disable);
#if (NTDDI_VERSION >= NTDDI_WS03)
WINADVAPI DWORD WINAPI DuplicateEncryptionInfoFile(LPCWSTR SrcFileName, LPCWSTR DstFileName, DWORD dwCreationDistribution, DWORD dwAttributes, CONST LPSECURITY_ATTRIBUTES lpSecurityAttributes);
#elif (NTDDI_VERSION >= NTDDI_WINXP)
WINADVAPI DWORD WINAPI DuplicateEncryptionInfoFile(LPCWSTR SrcFileName, LPCWSTR DstFileName, DWORD dwCreationDistribution, DWORD dwAttributes, LPSECURITY_ATTRIBUTES lpSecurityAttributes);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
__declspec(deprecated) WINADVAPI DWORD WINAPI GetEncryptedFileMetadata(LPCWSTR lpFileName, PDWORD pcbMetadata, PBYTE * ppbMetadata);
__declspec(deprecated) WINADVAPI DWORD WINAPI SetEncryptedFileMetadata(LPCWSTR lpFileName, PBYTE pbOldMetadata, PBYTE pbNewMetadata, PENCRYPTION_CERTIFICATE_HASH pOwnerHash, DWORD dwOperation, PENCRYPTION_CERTIFICATE_HASH_LIST pCertificatesAdded);
__declspec(deprecated) WINADVAPI VOID WINAPI FreeEncryptedFileMetadata(PBYTE pbMetadata);
#endif
#endif
#endif
