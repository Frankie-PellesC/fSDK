/*+@@file@@----------------------------------------------------------------*//*!
 \file		wsdutil.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 17:53:36 2016
 \date		Modified on Mon Sep 19 17:53:36 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef WSDUTIL_H__
#define WSDUTIL_H__
#if __POCC__ >= 500
#pragma once
#endif
#define WSD_DEFAULT_HOSTING_ADDRESS L"http://*:5357/"
#define WSD_DEFAULT_SECURE_HOSTING_ADDRESS L"https://*:5358/"
#define WSD_DEFAULT_EVENTING_ADDRESS L"http://*:5357/"
#define WSDAPI_OPTION_MAX_INBOUND_MESSAGE_SIZE 0x0001
#if (WINVER >= _WIN32_WINNT_WIN7)
#define WSDAPI_OPTION_TRACE_XML_TO_DEBUGGER 0x0002
#define WSDAPI_OPTION_TRACE_XML_TO_FILE 0x0003
#endif
HRESULT WINAPI WSDSetConfigurationOption(DWORD dwOption, LPVOID pVoid, DWORD cbInBuffer);
HRESULT WINAPI WSDGetConfigurationOption(DWORD dwOption, LPVOID pVoid, DWORD cbOutBuffer);
void *WINAPI WSDAllocateLinkedMemory(void *pParent, size_t cbSize);
void WINAPI WSDFreeLinkedMemory(void *pVoid);
void WINAPI WSDAttachLinkedMemory(void *pParent, void *pChild);
void WINAPI WSDDetachLinkedMemory(void *pVoid);
typedef struct _WSDXML_ELEMENT WSDXML_ELEMENT;
HRESULT WINAPI WSDXMLBuildAnyForSingleElement(WSDXML_NAME *pElementName, LPCWSTR pszText, WSDXML_ELEMENT **ppAny);
HRESULT WINAPI WSDXMLGetValueFromAny(LPCWSTR pszNamespace, LPCWSTR pszName, WSDXML_ELEMENT *pAny, LPCWSTR *ppszValue);
HRESULT WINAPI WSDXMLAddSibling(WSDXML_ELEMENT *pFirst, WSDXML_ELEMENT *pSecond);
HRESULT WINAPI WSDXMLAddChild(WSDXML_ELEMENT *pParent, WSDXML_ELEMENT *pChild);
HRESULT WINAPI WSDXMLCleanupElement(WSDXML_ELEMENT *pAny);
HRESULT WINAPI WSDGenerateFault(LPCWSTR pszCode, LPCWSTR pszSubCode, LPCWSTR pszReason, LPCWSTR pszDetail, IWSDXMLContext *pContext, WSD_SOAP_FAULT **ppFault);
HRESULT WINAPI WSDGenerateFaultEx(WSDXML_NAME *pCode, WSDXML_NAME *pSubCode, WSD_LOCALIZED_STRING_LIST *pReasons, LPCWSTR pszDetail, WSD_SOAP_FAULT **ppFault);
#if (WINVER >= _WIN32_WINNT_WIN7)
HRESULT WINAPI WSDUriEncode(LPCWSTR source, DWORD cchSource, LPWSTR *destOut, DWORD *cchDestOut);
HRESULT WINAPI WSDUriDecode(LPCWSTR source, DWORD cchSource, LPWSTR *destOut, DWORD *cchDestOut);
#endif
#endif
