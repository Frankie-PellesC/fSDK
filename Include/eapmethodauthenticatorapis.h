/*+@@file@@----------------------------------------------------------------*//*!
 \file		eapmethodauthenticatorapis.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Jul  8 18:10:31 2016
 \date		Modified on Fri Jul  8 18:10:31 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef EAP_METHOD_AUTHENTICATOR_APIS_H
#define EAP_METHOD_AUTHENTICATOR_APIS_H
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __eapauthenticatortypes_h__
#include "EapAuthenticatorTypes.h"
#endif
#ifndef EAPAUTHENTICATORACTIONDEFINE_H
#include "EapAuthenticatorActionDefine.h"
#endif
#define EAP_REGISTRY_LOCATION    TEXT("System\\CurrentControlSet\\Services\\EapHost\\Methods")
#define EAP_AUTHENTICATOR_VALUENAME_DLL_PATH      TEXT("AuthenticatorDllPath")
#define EAP_AUTHENTICATOR_VALUENAME_FRIENDLY_NAME TEXT("AuthenticatorFriendlyName")
#define EAP_AUTHENTICATOR_VALUENAME_PROPERTIES   TEXT("Properties")
#define EAP_AUTHENTICATOR_VALUENAME_CONFIGUI TEXT("AuthenticatorConfigUIPath")
typedef struct _EAP_AUTHENTICATOR_METHOD_ROUTINES 
{
	DWORD dwSizeInBytes;
	EAP_METHOD_TYPE *pEapType;
	DWORD(APIENTRY * EapMethodAuthenticatorInitialize) (EAP_METHOD_TYPE * pEapType, EAP_ERROR ** ppEapError);
	DWORD(APIENTRY * EapMethodAuthenticatorBeginSession) (DWORD dwFlags, LPCWSTR pwszIdentity, const EapAttributes * const pAttributeArray, DWORD dwSizeofConnectionData, const BYTE * const pConnectionData, DWORD dwMaxSendPacketSize, EAP_SESSION_HANDLE * pSessionHandle, EAP_ERROR ** ppEapError);
	DWORD(APIENTRY * EapMethodAuthenticatorUpdateInnerMethodParams) (EAP_SESSION_HANDLE sessionHandle, DWORD dwFlags, CONST WCHAR * pwszIdentity, const EapAttributes * const pAttributeArray, EAP_ERROR ** ppEapError);
	DWORD(APIENTRY * EapMethodAuthenticatorReceivePacket) (EAP_SESSION_HANDLE sessionHandle, DWORD cbReceivePacket, const EapPacket * const pReceivePacket, EAP_METHOD_AUTHENTICATOR_RESPONSE_ACTION * pEapOutput, EAP_ERROR ** ppEapError);
	DWORD(APIENTRY * EapMethodAuthenticatorSendPacket) (EAP_SESSION_HANDLE sessionHandle, BYTE bPacketId, DWORD * pcbSendPacket, EapPacket * pSendPacket, EAP_AUTHENTICATOR_SEND_TIMEOUT * pTimeout, EAP_ERROR ** ppEapError);
	DWORD(APIENTRY * EapMethodAuthenticatorGetAttributes) (EAP_SESSION_HANDLE sessionHandle, EapAttributes * pAttribs, EAP_ERROR ** ppEapError);
	DWORD(APIENTRY * EapMethodAuthenticatorSetAttributes) (EAP_SESSION_HANDLE sessionHandle, const EapAttributes * const pAttribs, EAP_METHOD_AUTHENTICATOR_RESPONSE_ACTION * pEapOutput, EAP_ERROR ** ppEapError);
	DWORD(APIENTRY * EapMethodAuthenticatorGetResult) (EAP_SESSION_HANDLE sessionHandle, EAP_METHOD_AUTHENTICATOR_RESULT * pResult, EAP_ERROR ** ppEapError);
	DWORD(APIENTRY * EapMethodAuthenticatorEndSession) (EAP_SESSION_HANDLE sessionHandle, EAP_ERROR ** ppEapError);
	DWORD(APIENTRY * EapMethodAuthenticatorShutdown) (EAP_METHOD_TYPE * pEapType, EAP_ERROR ** ppEapError);
} EAP_AUTHENTICATOR_METHOD_ROUTINES, *PEAP_AUTHENTICATOR_METHOD_ROUTINES;
void WINAPI EapMethodAuthenticatorFreeErrorMemory(EAP_ERROR *pEapError);
void WINAPI EapMethodAuthenticatorFreeMemory(void *pUIContextData);
DWORD EapMethodAuthenticatorGetInfo(EAP_METHOD_TYPE *pEapType, EAP_AUTHENTICATOR_METHOD_ROUTINES *pEapInfo, EAP_ERROR **ppEapError);
DWORD EapMethodAuthenticatorInitialize(EAP_METHOD_TYPE *pEapType, EAP_ERROR **ppEapError);
DWORD EapMethodAuthenticatorBeginSession(DWORD dwFlags, BYTE bInitialId, LPCWSTR pwszIdentity, const EapAttributes *const pAttributeArray, DWORD dwSizeofConnectionData, const BYTE *const pConnectionData, DWORD dwMaxSendPacketSize, EAP_SESSION_HANDLE *pSessionHandle, EAP_ERROR **ppEapError);
DWORD EapMethodAuthenticatorUpdateInnerMethodParams(EAP_SESSION_HANDLE sessionHandle, DWORD dwFlags, CONST WCHAR *pwszIdentity, const EapAttributes *const pAttributeArray, EAP_ERROR **ppEapError);
DWORD EapMethodAuthenticatorReceivePacket(EAP_SESSION_HANDLE sessionHandle, DWORD cbReceivePacket, const EapPacket *const pReceivePacket, EAP_METHOD_AUTHENTICATOR_RESPONSE_ACTION *pEapOutput, EAP_ERROR **ppEapError);
DWORD EapMethodAuthenticatorSendPacket(EAP_SESSION_HANDLE sessionHandle, BYTE bPacketId, DWORD *pcbSendPacket, EapPacket *pSendPacket, EAP_AUTHENTICATOR_SEND_TIMEOUT *pTimeout, EAP_ERROR **ppEapError);
DWORD EapMethodAuthenticatorGetAttributes(EAP_SESSION_HANDLE sessionHandle, EapAttributes *pAttribs, EAP_ERROR **ppEapError);
DWORD EapMethodAuthenticatorSetAttributes(EAP_SESSION_HANDLE sessionHandle, const EapAttributes *const pAttribs, EAP_METHOD_AUTHENTICATOR_RESPONSE_ACTION *pEapOutput, EAP_ERROR **ppEapError);
DWORD EapMethodAuthenticatorGetResult(EAP_SESSION_HANDLE sessionHandle, EAP_METHOD_AUTHENTICATOR_RESULT *pResult, EAP_ERROR **ppEapError);
DWORD EapMethodAuthenticatorEndSession(EAP_SESSION_HANDLE sessionHandle, EAP_ERROR **ppEapError);
DWORD EapMethodAuthenticatorShutdown(EAP_METHOD_TYPE *pEapType, EAP_ERROR **ppEapError);
#define EAP_METHOD_AUTHENTICATOR_CONFIG_IS_IDENTITY_PRIVACY    0x1
DWORD WINAPI EapMethodAuthenticatorInvokeConfigUI(EAP_METHOD_TYPE *pEapMethodType, HWND hwndParent, DWORD dwFlags, LPCWSTR pwszMachineName, DWORD dwSizeOfConfigIn, BYTE *pConfigIn, DWORD *pdwSizeOfConfigOut, BYTE **ppConfigOut, EAP_ERROR **ppEapError);
#endif
