/*+@@file@@----------------------------------------------------------------*//*!
 \file		Stm.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 17 15:45:53 2016
 \date		Modified on Sun Jul 17 15:45:53 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __ROUTING_STM_H__
#define __ROUTING_STM_H__
#if __POCC__ >= 500
#pragma once
#endif
#define SERVICES                0x00000002
#define DEMAND_UPDATE_SERVICES  0x00000008
typedef struct _IPX_SERVER_ENTRY
{
    USHORT	Type;
    UCHAR	Name[48];
    UCHAR	Network[4];
    UCHAR	Node[6];
    UCHAR	Socket[2];
    USHORT	HopCount;
} IPX_SERVER_ENTRY, *PIPX_SERVER_ENTRY;
typedef struct _IPX_SERVICE
{
    ULONG		        InterfaceIndex;
    ULONG	            Protocol;
    IPX_SERVER_ENTRY	Server;
} IPX_SERVICE, *PIPX_SERVICE;
typedef BOOL(WINAPI *PIS_SERVICE) (USHORT Type, PUCHAR Name, PIPX_SERVICE Service);
#define STM_ONLY_THIS_INTERFACE     0x00000001
#define STM_ONLY_THIS_PROTOCOL	    0x00000002
#define STM_ONLY_THIS_TYPE	        0x00000004
#define STM_ONLY_THIS_NAME	        0x00000008
#define STM_ORDER_BY_TYPE_AND_NAME		    0
#define STM_ORDER_BY_INTERFACE_TYPE_NAME	1
typedef HANDLE(WINAPI *PCREATE_SERVICE_ENUMERATION_HANDLE) (DWORD ExclusionFlags, PIPX_SERVICE CriteriaService);
typedef DWORD(WINAPI *PENUMERATE_GET_NEXT_SERVICE) (HANDLE EnumerationHandle, PIPX_SERVICE Service);
typedef DWORD(WINAPI *PCLOSE_SERVICE_ENUMERATION_HANDLE) (HANDLE EnumerationHandle);
typedef ULONG(WINAPI *PGET_SERVICE_COUNT) (VOID);
typedef DWORD(WINAPI *PCREATE_STATIC_SERVICE) (ULONG InterfaceIndex, PIPX_SERVER_ENTRY ServerEntry);
typedef DWORD(WINAPI *PDELETE_STATIC_SERVICE) (ULONG InterfaceIndex, PIPX_SERVER_ENTRY ServerEntry);
typedef DWORD(WINAPI *PBLOCK_CONVERT_SERVICES_TO_STATIC) (ULONG InterfaceIndex);
typedef DWORD(WINAPI *PBLOCK_DELETE_STATIC_SERVICES) (ULONG InterfaceIndex);
typedef DWORD(WINAPI *PGET_FIRST_ORDERED_SERVICE) (DWORD OrderingMethod, DWORD ExclusionFlags, PIPX_SERVICE Service);
typedef DWORD(WINAPI *PGET_NEXT_ORDERED_SERVICE) (DWORD OrderingMethod, DWORD ExclusionFlags, PIPX_SERVICE Service);
typedef DWORD(WINAPI *PDO_UPDATE_SERVICES) (ULONG InterfaceIndex);
typedef BOOL(WINAPI *PGET_SERVICE_ID) (USHORT Type, PUCHAR Name, PULONG ServiceID);
typedef BOOL(WINAPI *PGET_SERVICE_FROM_ID) (ULONG ServiceID, PIPX_SERVICE Service);
typedef DWORD(WINAPI *PGET_NEXT_SERVICE_FROM_ID) (ULONG ServiceID, PIPX_SERVICE NextService, PULONG NextServiceID);
typedef struct _MPR40_SERVICE_CHARACTERISTICS
{
    DWORD                               dwVersion;
    DWORD                               dwProtocolId;
    DWORD                               fSupportedFunctionality;
    PIS_SERVICE                         pfnIsService;
    PDO_UPDATE_SERVICES                 pfnUpdateServices;
    PCREATE_SERVICE_ENUMERATION_HANDLE  pfnCreateServiceEnumerationHandle;
    PENUMERATE_GET_NEXT_SERVICE         pfnEnumerateGetNextService;
    PCLOSE_SERVICE_ENUMERATION_HANDLE   pfnCloseServiceEnumerationHandle;
    PGET_SERVICE_COUNT                  pfnGetServiceCount;
    PCREATE_STATIC_SERVICE              pfnCreateStaticService;
    PDELETE_STATIC_SERVICE              pfnDeleteStaticService;
    PBLOCK_CONVERT_SERVICES_TO_STATIC   pfnBlockConvertServicesToStatic;
    PBLOCK_DELETE_STATIC_SERVICES       pfnBlockDeleteStaticServices;
    PGET_FIRST_ORDERED_SERVICE          pfnGetFirstOrderedService;
    PGET_NEXT_ORDERED_SERVICE           pfnGetNextOrderedService;
}MPR40_SERVICE_CHARACTERISTICS;
typedef struct _MPR50_SERVICE_CHARACTERISTICS
{
    MPR40_SERVICE_CHARACTERISTICS;
} MPR50_SERVICE_CHARACTERISTICS;
#if MPR50
    typedef MPR50_SERVICE_CHARACTERISTICS MPR_SERVICE_CHARACTERISTICS;
#else
    #if MPR40
    typedef MPR40_SERVICE_CHARACTERISTICS MPR_SERVICE_CHARACTERISTICS;
    #endif
#endif
typedef MPR_SERVICE_CHARACTERISTICS *PMPR_SERVICE_CHARACTERISTICS;
#endif
