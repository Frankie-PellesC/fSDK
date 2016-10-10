/*+@@file@@----------------------------------------------------------------*//*!
 \file		httptrace.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Jul 15 18:28:07 2016
 \date		Modified on Fri Jul 15 18:28:07 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _HTTP_TRACE_H
#define _HTTP_TRACE_H
#if __POCC__ >= 500
#pragma once
#endif
typedef enum HTTP_TRACE_TYPE
{ 
    HTTP_TRACE_TYPE_BYTE = 17,
    HTTP_TRACE_TYPE_USHORT = 18,
    HTTP_TRACE_TYPE_ULONG = 19,
    HTTP_TRACE_TYPE_ULONGLONG = 21,
    HTTP_TRACE_TYPE_CHAR = 16,
    HTTP_TRACE_TYPE_SHORT = 2,
    HTTP_TRACE_TYPE_LONG = 3,
    HTTP_TRACE_TYPE_LONGLONG = 20,
    HTTP_TRACE_TYPE_LPCWSTR = 31,
    HTTP_TRACE_TYPE_LPCSTR = 30,
    HTTP_TRACE_TYPE_LPCGUID = 72,
    HTTP_TRACE_TYPE_BOOL = 11,
} HTTP_TRACE_TYPE;
#define HTTP_TRACE_EVENT_FLAG_STATIC_DESCRIPTIVE_FIELDS       0x01
#define HTTP_TRACE_LEVEL_START  6
#define HTTP_TRACE_LEVEL_END    7
typedef struct HTTP_TRACE_EVENT_ITEM HTTP_TRACE_EVENT_ITEM;
struct HTTP_TRACE_EVENT
{
    LPCGUID                 pProviderGuid ;
    DWORD                   dwArea;
    LPCGUID                 pAreaGuid;
    DWORD                   dwEvent;
    LPCWSTR                 pszEventName;
    DWORD                   dwEventVersion;
    DWORD                   dwVerbosity;
    LPCGUID                 pActivityGuid;
    LPCGUID                 pRelatedActivityGuid;
    DWORD                   dwTimeStamp;
    DWORD                   dwFlags;
    DWORD                   cEventItems;
    HTTP_TRACE_EVENT_ITEM * pEventItems; 
};
struct HTTP_TRACE_EVENT_ITEM
{
    LPCWSTR          pszName;
    HTTP_TRACE_TYPE  dwDataType;
    PBYTE   pbData;
    DWORD   cbData;
    LPCWSTR pszDataDescription;
};
struct HTTP_TRACE_CONFIGURATION
{
    LPCGUID     pProviderGuid;
    DWORD       dwAreas;
    DWORD       dwVerbosity;
    BOOL        fProviderEnabled;
};
DEFINE_GUID(GUID_IIS_ALL_TRACE_PROVIDERS, 0x00000000, 0x0000, 0x0000, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00);
DEFINE_GUID(GUID_IIS_WWW_SERVER_TRACE_PROVIDER, 0x3a2a4e84, 0x4c21, 0x4981, 0xae, 0x10, 0x3f, 0xda, 0x0d, 0x9b, 0x0f, 0x83);
DEFINE_GUID(GUID_IIS_WWW_SERVER_V2_TRACE_PROVIDER, 0xde4649c9, 0x15e8, 0x4fea, 0x9d, 0x85, 0x1c, 0xdd, 0xa5, 0x20, 0xc3, 0x34);
DEFINE_GUID(GUID_IIS_ASPNET_TRACE_PROVIDER, 0xAFF081FE, 0x0247, 0x4275, 0x9C, 0x4E, 0x02, 0x1F, 0x3D, 0xC1, 0xDA, 0x35);
DEFINE_GUID(GUID_IIS_ASP_TRACE_TRACE_PROVIDER, 0x06b94d9a, 0xb15e, 0x456e, 0xa4, 0xef, 0x37, 0xc9, 0x84, 0xa2, 0xcb, 0x4b);
DEFINE_GUID(GUID_IIS_WWW_GLOBAL_TRACE_PROVIDER, 0xd55d3bc9, 0xcba9, 0x44df, 0x82, 0x7e, 0x13, 0x2d, 0x3a, 0x45, 0x96, 0xc2);
DEFINE_GUID(GUID_IIS_ISAPI_TRACE_PROVIDER, 0xa1c2040e, 0x8840, 0x4c31, 0xba, 0x11, 0x98, 0x71, 0x03, 0x1a, 0x19, 0xea);
#endif
