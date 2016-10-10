/*+@@file@@----------------------------------------------------------------*//*!
 \file		StrongName.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 01:44:29 2016
 \date		Modified on Sat Sep 17 01:44:29 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __STRONG_NAME_H
#define __STRONG_NAME_H
#if __POCC__ >= 500
#pragma once
#endif
#include <windows.h>
#include <wincrypt.h>
#include <ole2.h>
#include <corerror.h>
typedef struct
{
	unsigned int SigAlgID;
	unsigned int HashAlgID;
	ULONG cbPublicKey;
	BYTE PublicKey[1];
} PublicKeyBlob;
#define SN_CONFIG_KEY               "Software\\Microsoft\\StrongName"
#define SN_CONFIG_CSP               "CSP"
#define SN_CONFIG_MACHINE_KEYSET    "MachineKeyset"
#define SN_CONFIG_KEYSPEC           "KeySpec"
#define SN_CONFIG_HASH_ALG          "HashAlgorithm"
#define SN_CONFIG_SIGN_ALG          "SignAlgorithm"
#define SN_CONFIG_VERIFICATION      "Verification"
#define SN_CONFIG_USERLIST          "UserList"
#define SN_CONFIG_CACHE_VERIFY      "CacheVerify"
#define SN_CONFIG_KEY_W             L"Software\\Microsoft\\StrongName"
#define SN_CONFIG_CSP_W             L"CSP"
#define SN_CONFIG_MACHINE_KEYSET_W  L"MachineKeyset"
#define SN_CONFIG_KEYSPEC_W         L"KeySpec"
#define SN_CONFIG_HASH_ALG_W        L"HashAlgorithm"
#define SN_CONFIG_SIGN_ALG_W        L"SignAlgorithm"
#define SN_CONFIG_VERIFICATION_W    L"Verification"
#define SN_CONFIG_USERLIST_W        L"UserList"
#define SN_CONFIG_TESTPUBLICKEY_W   L"TestPublicKey"
#define SN_CONFIG_CACHE_VERIFY_W    L"CacheVerify"
#define SN_CONFIG_BYPASS_POLICY     "AllowStrongNameBypass"
#define SN_CONFIG_BYPASS_POLICY_W   L"AllowStrongNameBypass"
#define SNAPI BOOLEAN __stdcall
#define SNAPI_(_type) _type __stdcall
SNAPI_(DWORD)StrongNameErrorInfo(VOID);
SNAPI_(VOID)StrongNameFreeBuffer(BYTE * pbMemory);
SNAPI StrongNameKeyGen(LPCWSTR wszKeyContainer, DWORD dwFlags, BYTE **ppbKeyBlob, ULONG *pcbKeyBlob);
SNAPI StrongNameKeyGenEx(LPCWSTR wszKeyContainer, DWORD dwFlags, DWORD dwKeySize, BYTE **ppbKeyBlob, ULONG *pcbKeyBlob);
#define SN_LEAVE_KEY    0x00000001
SNAPI StrongNameKeyInstall(LPCWSTR wszKeyContainer, BYTE *pbKeyBlob, ULONG cbKeyBlob);
SNAPI StrongNameKeyDelete(LPCWSTR wszKeyContainer);
SNAPI StrongNameGetPublicKey(LPCWSTR wszKeyContainer, BYTE *pbKeyBlob, ULONG cbKeyBlob, BYTE **ppbPublicKeyBlob, ULONG *pcbPublicKeyBlob);
SNAPI StrongNameSignatureGeneration(LPCWSTR wszFilePath, LPCWSTR wszKeyContainer, BYTE *pbKeyBlob, ULONG cbKeyBlob, BYTE **ppbSignatureBlob, ULONG *pcbSignatureBlob);
SNAPI StrongNameSignatureGenerationEx(LPCWSTR wszFilePath, LPCWSTR wszKeyContainer, BYTE *pbKeyBlob, ULONG cbKeyBlob, BYTE **ppbSignatureBlob, ULONG *pcbSignatureBlob, DWORD dwFlags);
#ifdef FEATURE_PLATFORM_ASSEMBLY_ALLOWLIST
SNAPI StrongNameSetPlatformSignatureSequence(LPCWSTR wszFilePath, DWORD flags);
SNAPI StrongNameHasPlatformSignatureSequence(LPCWSTR wszFilePath);
#endif
#define SN_SIGN_ALL_FILES   0x00000001
#define SN_TEST_SIGN        0x00000002
#define SN_ECMA_SIGN        0x00000004
SNAPI StrongNameTokenFromAssembly(LPCWSTR wszFilePath, BYTE **ppbStrongNameToken, ULONG *pcbStrongNameToken);
SNAPI StrongNameTokenFromAssemblyEx(LPCWSTR wszFilePath, BYTE **ppbStrongNameToken, ULONG *pcbStrongNameToken, BYTE **ppbPublicKeyBlob, ULONG *pcbPublicKeyBlob);
SNAPI StrongNameTokenFromPublicKey(BYTE *pbPublicKeyBlob, ULONG cbPublicKeyBlob, BYTE **ppbStrongNameToken, ULONG *pcbStrongNameToken);
SNAPI StrongNameSignatureVerification(LPCWSTR wszFilePath, DWORD dwInFlags, DWORD *pdwOutFlags);
SNAPI StrongNameSignatureVerificationEx(LPCWSTR wszFilePath, BOOLEAN fForceVerification, BOOLEAN *pfWasVerified);
SNAPI StrongNameSignatureVerificationEx2(LPCWSTR wszFilePath, BOOLEAN fForceVerification, BYTE *pbEcmaPublicKey, DWORD cbEcmaPublicKey, BOOLEAN *pfWasVerified);
SNAPI StrongNameSignatureVerificationFromImage(BYTE *pbBase, DWORD dwLength, DWORD dwInFlags, DWORD *pdwOutFlags);
#define SN_INFLAG_FORCE_VER      0x00000001
#define SN_INFLAG_INSTALL        0x00000002
#define SN_INFLAG_ADMIN_ACCESS   0x00000004
#define SN_INFLAG_USER_ACCESS    0x00000008
#define SN_INFLAG_ALL_ACCESS     0x00000010
#ifdef FEATURE_PLATFORM_ASSEMBLY_ALLOWLIST
#define SN_INFLAG_GAC_ASSEMBLY   0x00000020
#define SN_INFLAG_MAPPED_PEFILE  0x00000040
#define SN_INFLAG_RELOCATED_PEFILE  0x00000080
#endif
#define SN_INFLAG_RUNTIME        0x80000000
#define SN_OUTFLAG_WAS_VERIFIED  0x00000001
#define SN_OUTFLAG_MICROSOFT_SIGNATURE 0x00000002
#ifdef FEATURE_STRONGNAME_TESTKEY_ALLOWED
#define SN_OUTFLAG_TESTKEY_SIGNATURE 0x00000004
#endif
#define SN_OUTFLAG_SILVERLIGHT_PLATFORM_SIGNATURE 0x00000008
SNAPI StrongNameCompareAssemblies(LPCWSTR wszAssembly1, LPCWSTR wszAssembly2, DWORD *pdwResult);
#define SN_CMP_DIFFERENT    0
#define SN_CMP_IDENTICAL    1
#define SN_CMP_SIGONLY      2
SNAPI StrongNameHashSize(ULONG ulHashAlg, DWORD *pcbSize);
SNAPI StrongNameSignatureSize(BYTE *pbPublicKeyBlob, ULONG cbPublicKeyBlob, DWORD *pcbSize);
SNAPI_(DWORD)GetHashFromAssemblyFile(LPCSTR szFilePath, unsigned int *piHashAlg, BYTE *pbHash, DWORD cchHash, DWORD *pchHash);
SNAPI_(DWORD)GetHashFromAssemblyFileW(LPCWSTR wszFilePath, unsigned int *piHashAlg, BYTE *pbHash, DWORD cchHash, DWORD *pchHash);
SNAPI_(DWORD)GetHashFromFile(LPCSTR szFilePath, unsigned int *piHashAlg, BYTE *pbHash, DWORD cchHash, DWORD *pchHash);
SNAPI_(DWORD)GetHashFromFileW(LPCWSTR wszFilePath, unsigned int *piHashAlg, BYTE *pbHash, DWORD cchHash, DWORD *pchHash);
SNAPI_(DWORD)GetHashFromHandle(HANDLE hFile, unsigned int *piHashAlg, BYTE *pbHash, DWORD cchHash, DWORD *pchHash);
SNAPI_(DWORD)GetHashFromBlob(BYTE * pbBlob, DWORD cchBlob, unsigned int *piHashAlg, BYTE *pbHash, DWORD cchHash, DWORD *pchHash);
SNAPI StrongNameGetBlob(LPCWSTR wszFilePath, BYTE *pbBlob, DWORD *pcbBlob);
SNAPI StrongNameGetBlobFromImage(BYTE *pbBase, DWORD dwLength, BYTE *pbBlob, DWORD *pcbBlob);
#endif
