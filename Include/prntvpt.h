/*+@@file@@----------------------------------------------------------------*//*!
 \file		prntvpt.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 12 00:38:38 2016
 \date		Modified on Mon Sep 12 00:38:38 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _PRNPTNTV_H_
#define _PRNPTNTV_H_
#if __POCC__ >= 500
#pragma once
#endif
DECLARE_HANDLE(HPTPROVIDER);
#define PRINTTICKET_ISTREAM_APIS 1
#define S_PT_NO_CONFLICT                 (0x00040001)
#define S_PT_CONFLICT_RESOLVED           (0x00040002)
#define E_PRINTTICKET_FORMAT             (0x80040003)
#define E_PRINTCAPABILITIES_FORMAT       (0x80040004)
#define E_DELTA_PRINTTICKET_FORMAT       (0x80040005)
typedef enum tagEDefaultDevmodeType
{
    kUserDefaultDevmode,
    kPrinterDefaultDevmode
} EDefaultDevmodeType;
typedef enum 
{
    kPTPageScope,
    kPTDocumentScope,
    kPTJobScope
} EPrintTicketScope;
HRESULT WINAPI PTQuerySchemaVersionSupport(PCWSTR pszPrinterName, DWORD *pMaxVersion);
HRESULT WINAPI PTOpenProvider(PCWSTR pszPrinterName, DWORD dwVersion, HPTPROVIDER *phProvider);
HRESULT WINAPI PTOpenProviderEx(PCWSTR pszPrinterName, DWORD dwMaxVersion, DWORD dwPrefVersion, HPTPROVIDER *phProvider, DWORD *pUsedVersion);
HRESULT WINAPI PTCloseProvider(HPTPROVIDER hProvider);
HRESULT WINAPI PTReleaseMemory(PVOID pBuffer);
HRESULT WINAPI PTGetPrintCapabilities(HPTPROVIDER hProvider, IStream *pPrintTicket, IStream *pCapabilities, BSTR *pbstrErrorMessage);
HRESULT WINAPI PTMergeAndValidatePrintTicket(HPTPROVIDER hProvider, IStream *pBaseTicket, IStream *pDeltaTicket, EPrintTicketScope scope, IStream *pResultTicket, BSTR *pbstrErrorMessage);
HRESULT WINAPI PTConvertPrintTicketToDevMode(HPTPROVIDER hProvider, IStream *pPrintTicket, EDefaultDevmodeType baseDevmodeType, EPrintTicketScope scope, ULONG *pcbDevmode, PDEVMODE *ppDevmode, BSTR *pbstrErrorMessage);
HRESULT WINAPI PTConvertDevModeToPrintTicket(HPTPROVIDER hProvider, ULONG cbDevmode, PDEVMODE pDevmode, EPrintTicketScope scope, IStream *pPrintTicket);
#endif
