/*+@@file@@----------------------------------------------------------------*//*!
 \file		eaphostpeerconfigapis.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Jul  8 17:17:27 2016
 \date		Modified on Fri Jul  8 17:17:27 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef EAPHOSTPEERCONFIGAPIS_H
#define EAPHOSTPEERCONFIGAPIS_H
#if __POCC__ >= 500
#pragma once
#endif
#include "objbase.h"
#include "msxml6.h"
#include "EapTypes.h"
DWORD WINAPI EapHostPeerGetMethods(EAP_METHOD_INFO_ARRAY *pEapMethodInfoArray, EAP_ERROR **ppEapError);
DWORD WINAPI EapHostPeerGetMethodProperties(DWORD dwVersion, DWORD dwFlags, EAP_METHOD_TYPE eapMethodType, HANDLE hUserImpersonationToken, DWORD dwEapConnDataSize, const BYTE *pbEapConnData, DWORD dwUserDataSize, const BYTE *pbUserData, EAP_METHOD_PROPERTY_ARRAY *pMethodPropertyArray, EAP_ERROR **ppEapError);
DWORD WINAPI EapHostPeerInvokeConfigUI(HWND hwndParent, DWORD dwFlags, EAP_METHOD_TYPE eapMethodType, DWORD dwSizeOfConfigIn, const BYTE *pConfigIn, DWORD *pdwSizeOfConfigOut, BYTE **ppConfigOut, EAP_ERROR **ppEapError);
DWORD WINAPI EapHostPeerQueryCredentialInputFields(HANDLE hUserImpersonationToken, EAP_METHOD_TYPE eapMethodType, DWORD dwFlags, DWORD dwEapConnDataSize, const BYTE *pbEapConnData, EAP_CONFIG_INPUT_FIELD_ARRAY *pEapConfigInputFieldArray, EAP_ERROR **ppEapError);
DWORD WINAPI EapHostPeerQueryUserBlobFromCredentialInputFields(HANDLE hUserImpersonationToken, EAP_METHOD_TYPE eapMethodType, DWORD dwFlags, DWORD dwEapConnDataSize, const BYTE *pbEapConnData, const EAP_CONFIG_INPUT_FIELD_ARRAY *pEapConfigInputFieldArray, DWORD *pdwUserBlobSize, BYTE **ppbUserBlob, EAP_ERROR **ppEapError);
DWORD WINAPI EapHostPeerInvokeIdentityUI(DWORD dwVersion, EAP_METHOD_TYPE eapMethodType, DWORD dwFlags, HWND hwndParent, DWORD dwSizeofConnectionData, const BYTE *pConnectionData, DWORD dwSizeofUserData, const BYTE *pUserData, DWORD *pdwSizeOfUserDataOut, BYTE **ppUserDataOut, LPWSTR *ppwszIdentity, EAP_ERROR **ppEapError, LPVOID *ppvReserved);
DWORD WINAPI EapHostPeerInvokeInteractiveUI(HWND hwndParent, DWORD dwSizeofUIContextData, const BYTE *pUIContextData, DWORD *pdwSizeOfDataFromInteractiveUI, BYTE **ppDataFromInteractiveUI, EAP_ERROR **ppEapError);
DWORD WINAPI EapHostPeerQueryInteractiveUIInputFields(DWORD dwVersion, DWORD dwFlags, DWORD dwSizeofUIContextData, const BYTE *pUIContextData, EAP_INTERACTIVE_UI_DATA *pEapInteractiveUIData, EAP_ERROR **ppEapError, LPVOID *ppvReserved);
DWORD WINAPI EapHostPeerQueryUIBlobFromInteractiveUIInputFields(DWORD dwVersion, DWORD dwFlags, DWORD dwSizeofUIContextData, const BYTE *pUIContextData, const EAP_INTERACTIVE_UI_DATA *pEapInteractiveUIData, DWORD *pdwSizeOfDataFromInteractiveUI, BYTE **ppDataFromInteractiveUI, EAP_ERROR **ppEapError, LPVOID *ppvReserved);
DWORD WINAPI EapHostPeerConfigXml2Blob(DWORD dwFlags, IXMLDOMNode *pConfigDoc, DWORD *pdwSizeOfConfigOut, BYTE **ppConfigOut, EAP_METHOD_TYPE *pEapMethodType, EAP_ERROR **ppEapError);
DWORD WINAPI EapHostPeerCredentialsXml2Blob(DWORD dwFlags, IXMLDOMNode *pCredentialsDoc, DWORD dwSizeOfConfigIn, BYTE *pConfigIn, DWORD *pdwSizeOfCredentialsOut, BYTE **ppCredentialsOut, EAP_METHOD_TYPE *pEapMethodType, EAP_ERROR **ppEapError);
DWORD WINAPI EapHostPeerConfigBlob2Xml(DWORD dwFlags, EAP_METHOD_TYPE eapMethodType, DWORD dwSizeOfConfigIn, BYTE *pConfigIn, IXMLDOMDocument2 **ppConfigDoc, EAP_ERROR **ppEapError);
VOID  WINAPI EapHostPeerFreeMemory(BYTE *pData);
VOID  WINAPI EapHostPeerFreeErrorMemory(EAP_ERROR *pEapError);
#endif
