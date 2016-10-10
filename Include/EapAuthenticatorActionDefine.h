/*+@@file@@----------------------------------------------------------------*//*!
 \file		EapAuthenticatorActionDefine.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Wed Jul  6 18:27:15 2016
 \date		Modified on Wed Jul  6 18:27:15 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef EAPAUTHENTICATORACTIONDEFINE_H
#define EAPAUTHENTICATORACTIONDEFINE_H
#if __POCC__ >= 500
#pragma once
#endif
typedef enum _EAP_METHOD_AUTHENTICATOR_RESPONSE_ACTION
{
   EAP_METHOD_AUTHENTICATOR_RESPONSE_DISCARD = 0,
   EAP_METHOD_AUTHENTICATOR_RESPONSE_SEND,
   EAP_METHOD_AUTHENTICATOR_RESPONSE_RESULT,
   EAP_METHOD_AUTHENTICATOR_RESPONSE_RESPOND,
   EAP_METHOD_AUTHENTICATOR_RESPONSE_AUTHENTICATE,
   EAP_METHOD_AUTHENTICATOR_RESPONSE_HANDLE_IDENTITY
} EAP_METHOD_AUTHENTICATOR_RESPONSE_ACTION;
typedef struct _EAP_METHOD_AUTHENTICATOR_RESULT
{
   BOOL fIsSuccess;
   DWORD dwFailureReason;
   EAP_ATTRIBUTES* pAuthAttribs;
} EAP_METHOD_AUTHENTICATOR_RESULT;
typedef enum tagEapPeerMethodResponseAction
{
        EapPeerMethodResponseActionDiscard = 0,
        EapPeerMethodResponseActionSend,
        EapPeerMethodResponseActionResult,
        EapPeerMethodResponseActionInvokeUI,
        EapPeerMethodResponseActionRespond,
        EapPeerMethodResponseActionNone
} EapPeerMethodResponseAction;
typedef struct tagEapPeerMethodOuput 
{
        EapPeerMethodResponseAction action;
        BOOL fAllowNotifications;
} EapPeerMethodOutput;
typedef enum tagEapPeerMethodResultReason
{
   EapPeerMethodResultUnknown = 1,
   EapPeerMethodResultSuccess,
   EapPeerMethodResultFailure
} EapPeerMethodResultReason, EapPeerMethodResultReasonOle;
#endif
