/*+@@file@@----------------------------------------------------------------*//*!
 \file		eapmethodpeerapis.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Jul  8 18:16:32 2016
 \date		Modified on Fri Jul  8 18:16:32 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef EAPPEERMETHODAPIS_H
#define EAPPEERMETHODAPIS_H
#if __POCC__ >= 500
#pragma once
#endif
#include <objbase.h>
#include <msxml6.h>
#include <EapMethodTypes.h>
#ifndef EAPAUTHENTICATORACTIONDEFINE_H
#include <EapAuthenticatorActionDefine.h>
#endif
#define EAP_REGISTRY_LOCATION				 TEXT("System\\CurrentControlSet\\Services\\EapHost\\Methods")
#define EAP_PEER_VALUENAME_DLL_PATH          TEXT("PeerDllPath")
#define EAP_PEER_VALUENAME_FRIENDLY_NAME     TEXT("PeerFriendlyName")
#define EAP_PEER_VALUENAME_CONFIGUI          TEXT("PeerConfigUIPath")
#define EAP_PEER_VALUENAME_REQUIRE_CONFIGUI  TEXT("PeerRequireConfigUI")
#define EAP_PEER_VALUENAME_IDENTITY          TEXT("PeerIdentityPath")
#define EAP_PEER_VALUENAME_INTERACTIVEUI     TEXT("PeerInteractiveUIPath")
#define EAP_PEER_VALUENAME_INVOKE_NAMEDLG    TEXT("PeerInvokeUsernameDialog")
#define EAP_PEER_VALUENAME_INVOKE_PWDDLG     TEXT("PeerInvokePasswordDialog")
#define EAP_PEER_VALUENAME_PROPERTIES        TEXT("Properties")
typedef struct tagEapPeerMethodResult
{
	BOOL fIsSuccess;
	DWORD dwFailureReasonCode;
	BOOL fSaveConnectionData;
	DWORD dwSizeofConnectionData;
	BYTE* pConnectionData;
	BOOL fSaveUserData;
	DWORD dwSizeofUserData;
	BYTE* pUserData;
	EAP_ATTRIBUTES* pAttribArray;
	EAP_ERROR* pEapError;
} EapPeerMethodResult;
typedef struct _EAP_PEER_METHOD_ROUTINES
{
	DWORD dwVersion;
	EAP_TYPE *pEapType;
	DWORD(APIENTRY * EapPeerInitialize) (EAP_ERROR ** ppEapError);
	DWORD(APIENTRY * EapPeerGetIdentity) (DWORD flags, DWORD dwSizeofConnectionData, const BYTE * pConnectionData, DWORD dwSizeofUserData, const BYTE * pUserData, HANDLE hTokenImpersonateUser, BOOL * pfInvokeUI, DWORD * pdwSizeOfUserDataOut, BYTE ** ppUserDataOut, WCHAR ** ppwszIdentity, EAP_ERROR ** ppEapError);
	DWORD(APIENTRY * EapPeerBeginSession) (DWORD dwFlags, const EapAttributes * const pAttributeArray, HANDLE hTokenImpersonateUser, DWORD dwSizeofConnectionData, BYTE * pConnectionData, DWORD dwSizeofUserData, BYTE * pUserData, DWORD dwMaxSendPacketSize, EAP_SESSION_HANDLE * pSessionHandle, EAP_ERROR ** ppEapError);
	DWORD(APIENTRY * EapPeerSetCredentials) (EAP_SESSION_HANDLE sessionHandle, WCHAR * pwszIdentity, WCHAR * pwszPassword, EAP_ERROR ** ppEapError);
	DWORD(APIENTRY * EapPeerProcessRequestPacket) (EAP_SESSION_HANDLE sessionHandle, DWORD cbReceivePacket, EapPacket * pReceivePacket, EapPeerMethodOutput * pEapOutput, EAP_ERROR ** ppEapError);
	DWORD(APIENTRY * EapPeerGetResponsePacket) (EAP_SESSION_HANDLE sessionHandle, DWORD * pcbSendPacket, EapPacket * pSendPacket, EAP_ERROR ** ppEapError);
	DWORD(APIENTRY * EapPeerGetResult) (EAP_SESSION_HANDLE sessionHandle, EapPeerMethodResultReason reason, EapPeerMethodResult * ppResult, EAP_ERROR ** ppEapError);
	DWORD(APIENTRY * EapPeerGetUIContext) (EAP_SESSION_HANDLE sessionHandle, DWORD * dwSizeOfUIContextData, BYTE ** pUIContextData, EAP_ERROR ** ppEapError);
	DWORD(APIENTRY * EapPeerSetUIContext) (EAP_SESSION_HANDLE sessionHandle, DWORD dwSizeOfUIContextData, const BYTE * pUIContextData, EapPeerMethodOutput * pEapOutput, EAP_ERROR ** ppEapError);
	DWORD(APIENTRY * EapPeerGetResponseAttributes) (EAP_SESSION_HANDLE sessionHandle, EapAttributes * pAttribs, EAP_ERROR ** ppEapError);
	DWORD(APIENTRY * EapPeerSetResponseAttributes) (EAP_SESSION_HANDLE sessionHandle, EapAttributes * pAttribs, EapPeerMethodOutput * pEapOutput, EAP_ERROR ** ppEapError);
	DWORD(APIENTRY * EapPeerEndSession) (EAP_SESSION_HANDLE sessionHandle, EAP_ERROR ** ppEapError);
	DWORD(APIENTRY * EapPeerShutdown) (EAP_ERROR ** ppEapError);
} EAP_PEER_METHOD_ROUTINES;
VOID WINAPI EapPeerFreeErrorMemory(EAP_ERROR *pEapError);
DWORD WINAPI EapPeerGetInfo(EAP_TYPE *pEapType, EAP_PEER_METHOD_ROUTINES *pEapInfo, EAP_ERROR **ppEapError);
DWORD WINAPI EapPeerInitialize(EAP_ERROR **ppEapError);
DWORD WINAPI EapPeerGetIdentity(DWORD dwFlags, DWORD dwSizeofConnectionData, const BYTE *pConnectionData, DWORD dwSizeofUserData, const BYTE *pUserData, HANDLE hTokenImpersonateUser, BOOL *pfInvokeUI, DWORD *pdwSizeOfUserDataOut, BYTE **ppUserDataOut, LPWSTR *ppwszIdentity, EAP_ERROR **ppEapError);
DWORD WINAPI EapPeerBeginSession(DWORD dwFlags, const EapAttributes *const pAttributeArray, HANDLE hTokenImpersonateUser, DWORD dwSizeofConnectionData, BYTE *pConnectionData, DWORD dwSizeofUserData, BYTE *pUserData, DWORD dwMaxSendPacketSize, EAP_SESSION_HANDLE *pSessionHandle, EAP_ERROR **ppEapError);
DWORD WINAPI EapPeerSetCredentials(EAP_SESSION_HANDLE sessionHandle, LPWSTR pwszIdentity, LPWSTR pwszPassword, EAP_ERROR **ppEapError);
DWORD WINAPI EapPeerProcessRequestPacket(EAP_SESSION_HANDLE sessionHandle, DWORD cbReceivedPacket, EapPacket *pReceivedPacket, EapPeerMethodOutput *pEapOutput, EAP_ERROR **ppEapError);
DWORD WINAPI EapPeerGetResponsePacket(EAP_SESSION_HANDLE sessionHandle, DWORD *pcbSendPacket, EapPacket *pSendPacket, EAP_ERROR **ppEapError);
DWORD WINAPI EapPeerGetResult(EAP_SESSION_HANDLE sessionHandle, EapPeerMethodResultReason reason, EapPeerMethodResult *ppResult, EAP_ERROR **ppEapError);
DWORD WINAPI EapPeerGetUIContext(EAP_SESSION_HANDLE sessionHandle, DWORD *pdwSizeOfUIContextData, BYTE **ppUIContextData, EAP_ERROR **ppEapError);
DWORD WINAPI EapPeerSetUIContext(EAP_SESSION_HANDLE sessionHandle, DWORD dwSizeOfUIContextData, const BYTE *pUIContextData, EapPeerMethodOutput *pEapOutput, EAP_ERROR **ppEapError);
DWORD WINAPI EapPeerGetResponseAttributes(EAP_SESSION_HANDLE sessionHandle, EapAttributes *pAttribs, EAP_ERROR **ppEapError);
DWORD WINAPI EapPeerSetResponseAttributes(EAP_SESSION_HANDLE sessionHandle, EapAttributes *pAttribs, EapPeerMethodOutput *pEapOutput, EAP_ERROR **ppEapError);
DWORD WINAPI EapPeerEndSession(EAP_SESSION_HANDLE sessionHandle, EAP_ERROR **ppEapError);
DWORD WINAPI EapPeerShutdown(EAP_ERROR **ppEapError);
DWORD WINAPI EapPeerInvokeConfigUI(EAP_METHOD_TYPE *pEapType, HWND hwndParent, DWORD dwFlags, DWORD dwSizeOfConnectionDataIn, BYTE *pConnectionDataIn, DWORD *pdwSizeOfConnectionDataOut, BYTE **ppConnectionDataOut, EAP_ERROR **ppEapError);
DWORD WINAPI EapPeerInvokeInteractiveUI(EAP_METHOD_TYPE *pEapType, HWND hwndParent, DWORD dwSizeofUIContextData, BYTE *pUIContextData, DWORD *pdwSizeOfDataFromInteractiveUI, BYTE **ppDataFromInteractiveUI, EAP_ERROR **ppEapError);
DWORD WINAPI EapPeerInvokeIdentityUI(EAP_METHOD_TYPE *pEapType, DWORD dwFlags, HWND hwndParent, DWORD dwSizeOfConnectionData, const BYTE *pConnectionData, DWORD dwSizeOfUserData, const BYTE *pUserData, DWORD *pdwSizeOfUserDataOut, BYTE **ppUserDataOut, LPWSTR *ppwszIdentity, EAP_ERROR **ppEapError);
DWORD WINAPI EapPeerQueryCredentialInputFields(HANDLE hUserImpersonationToken, EAP_METHOD_TYPE eapMethodType, DWORD dwFlags, DWORD dwEapConnDataSize, BYTE *pbEapConnData, EAP_CONFIG_INPUT_FIELD_ARRAY *pEapConfigFieldsArray, EAP_ERROR **ppEapError);
DWORD WINAPI EapPeerQueryUserBlobFromCredentialInputFields(HANDLE hUserImpersonationToken, EAP_METHOD_TYPE eapMethodType, DWORD dwFlags, DWORD dwEapConnDataSize, BYTE *pbEapConnData, const EAP_CONFIG_INPUT_FIELD_ARRAY *pEapConfigInputFieldArray, DWORD *pdwUserBlobSize, BYTE **ppbUserBlob, EAP_ERROR **ppEapError);
DWORD WINAPI EapPeerQueryInteractiveUIInputFields(DWORD dwVersion, DWORD dwFlags, DWORD dwSizeofUIContextData, const BYTE *pUIContextData, EAP_INTERACTIVE_UI_DATA *pEapInteractiveUIData, EAP_ERROR **ppEapError, LPVOID *ppvReserved);
DWORD WINAPI EapPeerQueryUIBlobFromInteractiveUIInputFields(DWORD dwVersion, DWORD dwFlags, DWORD dwSizeofUIContextData, const BYTE *pUIContextData, const EAP_INTERACTIVE_UI_DATA *pEapInteractiveUIData, DWORD *pdwSizeOfDataFromInteractiveUI, BYTE **ppDataFromInteractiveUI, EAP_ERROR **ppEapError, LPVOID *ppvReserved);
DWORD WINAPI EapPeerConfigXml2Blob(DWORD dwFlags, EAP_METHOD_TYPE eapMethodType, IXMLDOMDocument2 *pConfigDoc, BYTE **ppConfigOut, DWORD *pdwSizeOfConfigOut, EAP_ERROR **ppEapError);
DWORD WINAPI EapPeerCredentialsXml2Blob(DWORD dwFlags, EAP_METHOD_TYPE eapMethodType, IXMLDOMDocument2 *pCredentialsDoc, const BYTE *pConfigIn, DWORD dwSizeOfConfigIn, BYTE **ppCredentialsOut, DWORD *pdwSizeOfCredentialsOut, EAP_ERROR **ppEapError);
DWORD WINAPI EapPeerConfigBlob2Xml(DWORD dwFlags, EAP_METHOD_TYPE eapMethodType, const BYTE *pConfigIn, DWORD dwSizeOfConfigIn, IXMLDOMDocument2 **ppConfigDoc, EAP_ERROR **ppEapError);
DWORD WINAPI EapPeerGetMethodProperties(DWORD dwVersion, DWORD dwFlags, EAP_METHOD_TYPE eapMethodType, HANDLE hUserImpersonationToken, DWORD dwSizeOfConnectionDataIn, BYTE *pConnectionDataIn, DWORD dwSizeOfUserDataIn, BYTE *pUserDataIn, EAP_METHOD_PROPERTY_ARRAY *pMethodPropertyArray, EAP_ERROR **ppEapError);
VOID WINAPI EapPeerFreeMemory(void *pUIContextData);
#endif
