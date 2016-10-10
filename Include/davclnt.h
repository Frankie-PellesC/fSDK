/*+@@file@@----------------------------------------------------------------*//*!
 \file		davclnt.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Tue Jul  5 14:14:20 2016
 \date		Modified on Tue Jul  5 14:14:20 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _DAV_CLNT_H_
#define _DAV_CLNT_H_
#if __POCC__ >= 500
#pragma once
#endif
#define OPAQUE_HANDLE DWORD
typedef struct _DAV_CALLBACK_AUTH_BLOB
{
    PVOID  pBuffer;
    ULONG  ulSize;
    ULONG  ulType;
}DAV_CALLBACK_AUTH_BLOB, *PDAV_CALLBACK_AUTH_BLOB;
typedef struct _DAV_CALLBACK_AUTH_UNP
{
   LPWSTR pszUserName;
   ULONG  ulUserNameLength;
   LPWSTR pszPassword;
   ULONG  ulPasswordLength;
}DAV_CALLBACK_AUTH_UNP, *PDAV_CALLBACK_AUTH_UNP;
typedef struct _DAV_CALLBACK_CRED{
    DAV_CALLBACK_AUTH_BLOB AuthBlob;
    DAV_CALLBACK_AUTH_UNP UNPBlob;
    BOOL  bAuthBlobValid;
    BOOL  bSave;
}DAV_CALLBACK_CRED, *PDAV_CALLBACK_CRED;
#define DAV_AUTHN_SCHEME_BASIC      0x00000001
#define DAV_AUTHN_SCHEME_NTLM       0x00000002
#define DAV_AUTHN_SCHEME_PASSPORT   0x00000004
#define DAV_AUTHN_SCHEME_DIGEST     0x00000008
#define DAV_AUTHN_SCHEME_NEGOTIATE  0x00000010
#define DAV_AUTHN_SCHEME_CERT       0x00010000
#define DAV_AUTHN_SCHEME_FBA        0x00100000 
typedef enum
{
  DefaultBehavior,
  RetryRequest,
  CancelRequest
} AUTHNEXTSTEP;
typedef DWORD (*PFNDAVAUTHCALLBACK_FREECRED)(PVOID pbuffer);
typedef DWORD (*PFNDAVAUTHCALLBACK)
(
    LPWSTR lpwzServerName,
    LPWSTR lpwzRemoteName,
    DWORD  dwAuthScheme,
    DWORD  dwFlags,
    PDAV_CALLBACK_CRED pCallbackCred,
    AUTHNEXTSTEP *NextStep,
    PFNDAVAUTHCALLBACK_FREECRED *pFreeCred
);
DWORD WINAPI DavAddConnection(HANDLE *ConnectionHandle, LPCWSTR RemoteName, LPCWSTR UserName, LPCWSTR Password, PBYTE ClientCert, DWORD CertSize);
DWORD WINAPI DavDeleteConnection(HANDLE ConnectionHandle);
DWORD WINAPI DavGetUNCFromHTTPPath(LPCWSTR HttpPath, LPWSTR UncPath, LPDWORD lpSize);
DWORD WINAPI DavGetHTTPFromUNCPath(LPCWSTR UncPath, LPWSTR HttpPath, LPDWORD lpSize);
DWORD WINAPI DavGetTheLockOwnerOfTheFile(LPCWSTR FileName, PWSTR LockOwnerName, PULONG LockOwnerNameLengthInBytes);
DWORD WINAPI DavGetExtendedError(HANDLE hFile, DWORD *ExtError, LPWSTR ExtErrorString, DWORD *cChSize);
DWORD WINAPI DavFlushFile(HANDLE hFile);
DWORD WINAPI DavInvalidateCache(LPWSTR URLName);
DWORD APIENTRY DavCancelConnectionsToServer(LPWSTR lpName, BOOL fForce);
OPAQUE_HANDLE APIENTRY DavRegisterAuthCallback(PFNDAVAUTHCALLBACK CallBack, ULONG Version);
VOID APIENTRY DavUnregisterAuthCallback(OPAQUE_HANDLE hCallback);
#endif
