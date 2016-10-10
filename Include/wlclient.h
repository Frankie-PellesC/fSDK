/*+@@file@@----------------------------------------------------------------*//*!
 \file		wlclient.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep  4 15:54:01 2016
 \date		Modified on Sun Sep  4 15:54:01 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __WLCLIENT_H__
#define __WLCLIENT_H__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __WINDOT11_H__
#include <windot11.h>
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
typedef struct _DOT11_ADAPTER
{
    GUID gAdapterId;
    LPWSTR pszDescription;
    DOT11_CURRENT_OPERATION_MODE Dot11CurrentOpMode;
} DOT11_ADAPTER, * PDOT11_ADAPTER;
typedef struct _DOT11_BSS_LIST
{
    ULONG uNumOfBytes;
    PUCHAR pucBuffer;
} DOT11_BSS_LIST, * PDOT11_BSS_LIST;
typedef struct _DOT11_PORT_STATE {
    DOT11_MAC_ADDRESS PeerMacAddress;
    ULONG uSessionId;
    BOOL bPortControlled;
    BOOL bPortAuthorized;
} DOT11_PORT_STATE, * PDOT11_PORT_STATE;
#include <packon.h>
typedef struct _DOT11_SECURITY_PACKET_HEADER {
    DOT11_MAC_ADDRESS PeerMac;
    USHORT usEtherType;
    UCHAR Data[1];
} DOT11_SECURITY_PACKET_HEADER, * PDOT11_SECURITY_PACKET_HEADER;
#include <packoff.h>
#endif
#endif
