/*+@@file@@----------------------------------------------------------------*//*!
 \file		eappapis.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Jul  8 18:20:03 2016
 \date		Modified on Fri Jul  8 18:20:03 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef EAPPAPIS_H
#define EAPPAPIS_H
#if __POCC__ >= 500
#pragma once
#endif
typedef void (CALLBACK * NotificationHandler) (GUID connectionId, void *pContextData);
DWORD APIENTRY EapHostPeerInitialize();
void APIENTRY EapHostPeerUninitialize();
DWORD APIENTRY EapHostPeerBeginSession(DWORD dwFlags, EAP_METHOD_TYPE eapType, const EapAttributes *const pAttributeArray, HANDLE hTokenImpersonateUser, DWORD dwSizeofConnectionData, const BYTE *const pConnectionData, DWORD dwSizeofUserData, const BYTE *const pUserData, DWORD dwMaxSendPacketSize, const GUID *const pConnectionId, NotificationHandler func, void *pContextData, EAP_SESSIONID *pSessionId, EAP_ERROR **ppEapError);
DWORD APIENTRY EapHostPeerProcessReceivedPacket(EAP_SESSIONID sessionHandle, DWORD cbReceivePacket, const BYTE *const pReceivePacket, EapHostPeerResponseAction *pEapOutput, EAP_ERROR **ppEapError);
DWORD APIENTRY EapHostPeerGetSendPacket(EAP_SESSIONID sessionHandle, DWORD *pcbSendPacket, BYTE **ppSendPacket, EAP_ERROR **ppEapError);
DWORD APIENTRY EapHostPeerGetResult(EAP_SESSIONID sessionHandle, EapHostPeerMethodResultReason reason, EapHostPeerMethodResult *ppResult, EAP_ERROR **ppEapError);
DWORD APIENTRY EapHostPeerGetUIContext(EAP_SESSIONID sessionHandle, DWORD *pdwSizeOfUIContextData, BYTE **ppUIContextData, EAP_ERROR **ppEapError);
DWORD APIENTRY EapHostPeerSetUIContext(EAP_SESSIONID sessionHandle, DWORD dwSizeOfUIContextData, const BYTE *const pUIContextData, EapHostPeerResponseAction *pEapOutput, EAP_ERROR **ppEapError);
DWORD APIENTRY EapHostPeerGetResponseAttributes(EAP_SESSIONID sessionHandle, EapAttributes *pAttribs, EAP_ERROR **ppEapError);
DWORD APIENTRY EapHostPeerSetResponseAttributes(EAP_SESSIONID sessionHandle, const EapAttributes *const pAttribs, EapHostPeerResponseAction *pEapOutput, EAP_ERROR **ppEapError);
DWORD APIENTRY EapHostPeerGetAuthStatus(EAP_SESSIONID sessionHandle, EapHostPeerAuthParams authParam, DWORD *pcbAuthData, BYTE **ppAuthData, EAP_ERROR **ppEapError);
DWORD APIENTRY EapHostPeerEndSession(EAP_SESSIONID sessionHandle, EAP_ERROR **ppEapError);
DWORD APIENTRY EapHostPeerClearConnection(GUID *pConnectionId, EAP_ERROR **ppEapError);
void APIENTRY EapHostPeerFreeEapError(EAP_ERROR *pEapError);
DWORD APIENTRY EapHostPeerGetIdentity(DWORD dwVersion, DWORD dwFlags, EAP_METHOD_TYPE eapMethodType, DWORD dwSizeofConnectionData, const BYTE *pConnectionData, DWORD dwSizeofUserData, const BYTE *pUserData, HANDLE hTokenImpersonateUser, BOOL *pfInvokeUI, DWORD *pdwSizeOfUserDataOut, BYTE **ppUserDataOut, LPWSTR *ppwszIdentity, EAP_ERROR **ppEapError, BYTE **ppvReserved);
void APIENTRY EapHostPeerFreeRuntimeMemory(BYTE *pData);
#endif
