/*+@@file@@----------------------------------------------------------------*//*!
 \file		EapHostPeerTypes.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Jul  8 18:06:46 2016
 \date		Modified on Fri Jul  8 18:06:46 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef EAPHOSTPEERTYPES_H
#define EAPHOSTPEERTYPES_H
#if __POCC__ >= 500
#pragma once
#endif
#define EAP_PEER_FLAG_GUEST_ACCESS           0x00000040 
typedef enum tagEapHostPeerMethodResultReason
{
	EapHostPeerMethodResultAltSuccessReceived = 1,
	EapHostPeerMethodResultTimeout,
	EapHostPeerMethodResultFromMethod
} EapHostPeerMethodResultReason;
   
typedef enum tagEapHostPeerResponseAction
{
	EapHostPeerResponseDiscard = 0,
	EapHostPeerResponseSend,
	EapHostPeerResponseResult,
	EapHostPeerResponseInvokeUi,
	EapHostPeerResponseRespond,
	EapHostPeerResponseStartAuthentication,
	EapHostPeerResponseNone
} EapHostPeerResponseAction;
typedef enum tagEapHostPeerAuthParams
{
	EapHostPeerAuthStatus = 1,
	EapHostPeerIdentity,
	EapHostPeerIdentityExtendedInfo,
	EapHostNapInfo
} EapHostPeerAuthParams;
typedef enum _EAPHOST_AUTH_STATUS
{
	EapHostInvalidSession = 0,
	EapHostAuthNotStarted,
	EapHostAuthIdentityExchange,
	EapHostAuthNegotiatingType,
	EapHostAuthInProgress,
	EapHostAuthSucceeded,
	EapHostAuthFailed
} EAPHOST_AUTH_STATUS;
typedef struct _EAPHOST_AUTH_INFO
{
	EAPHOST_AUTH_STATUS status;
	DWORD dwErrorCode;
	DWORD dwReasonCode;
} EAPHOST_AUTH_INFO;
typedef enum _ISOLATION_STATE
{
	ISOLATION_STATE_UNKNOWN = 0,
	ISOLATION_STATE_NOT_RESTRICTED = 1,
	ISOLATION_STATE_IN_PROBATION = 2,
	ISOLATION_STATE_RESTRICTED_ACCESS = 3
} ISOLATION_STATE;
typedef struct tagEapHostPeerMethodResult
{
	BOOL fIsSuccess;
	UINT32 dwFailureReasonCode;
	BOOL fSaveConnectionData;
	UINT32 dwSizeofConnectionData;
	BYTE* pConnectionData;
	BOOL fSaveUserData;
	UINT32 dwSizeofUserData;
	BYTE* pUserData;
	EAP_ATTRIBUTES* pAttribArray;
	ISOLATION_STATE isolationState;      
	EAP_METHOD_INFO* pEapMethodInfo;
	EAP_ERROR* pEapError;
} EapHostPeerMethodResult;
#endif
