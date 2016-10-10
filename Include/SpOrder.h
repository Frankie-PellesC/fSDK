/*+@@file@@----------------------------------------------------------------*//*!
 \file		SpOrder.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep  4 00:34:43 2016
 \date		Modified on Sun Sep  4 00:34:43 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __SPORDER_H__
#define __SPORDER_H__
#if __POCC__ >= 500
#pragma once
#endif
int WSPAPI WSCWriteProviderOrder(LPDWORD lpwdCatalogEntryId, DWORD dwNumberOfEntries);
typedef int (WSPAPI *LPWSCWRITEPROVIDERORDER) (LPDWORD lpwdCatalogEntryId, DWORD dwNumberOfEntries);
#if(_WIN32_WINNT >= 0x0501)
#ifdef _WIN64
int WSPAPI WSCWriteProviderOrder32(LPDWORD lpwdCatalogEntryId, DWORD dwNumberOfEntries);
#endif
#endif
int WSPAPI WSCWriteNameSpaceOrder(LPGUID lpProviderId, DWORD dwNumberOfEntries);
typedef int (WSPAPI *LPWSCWRITENAMESPACEORDER) (LPGUID lpProviderId, DWORD dwNumberOfEntries);
#if(_WIN32_WINNT >= 0x0501)
#ifdef _WIN64
int
WSPAPI WSCWriteNameSpaceOrder32(LPGUID lpProviderId, DWORD dwNumberOfEntries);
#endif
#endif
#endif
