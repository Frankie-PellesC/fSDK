/*+@@file@@----------------------------------------------------------------*//*!
 \file		WdsBp.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 00:19:09 2016
 \date		Modified on Mon Sep 19 00:19:09 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __WDSBP_H__
#define __WDSBP_H__
#if __POCC__ >= 500
#pragma once
#endif
#define WDSBPAPI        __stdcall
#define WDSBP_MAKE_OPTION(_Pk, _Type, _Id)      ((_Type) | ((_Pk) << 8) | ((_Id) << 16))
#define WDSBP_PK_TYPE_DHCP                      1
#define WDSBP_PK_TYPE_WDSNBP                    2
#define WDSBP_PK_TYPE_BCD                       4
#define WDSBP_OPT_TYPE_NONE                     0
#define WDSBP_OPT_TYPE_BYTE                     1
#define WDSBP_OPT_TYPE_USHORT                   2
#define WDSBP_OPT_TYPE_ULONG                    3
#define WDSBP_OPT_TYPE_WSTR                     4
#define WDSBP_OPT_TYPE_STR                      5
#define WDSBP_OPT_TYPE_IP4                      6
#define WDSBP_OPT_ARCHITECTURE                  WDSBP_MAKE_OPTION(WDSBP_PK_TYPE_WDSNBP,     WDSBP_OPT_TYPE_USHORT,        1)
#define WDSBP_OPT_NEXT_ACTION                   WDSBP_MAKE_OPTION(WDSBP_PK_TYPE_WDSNBP,     WDSBP_OPT_TYPE_BYTE,          2)
#define WDSBP_OPT_POLL_INTERVAL                 WDSBP_MAKE_OPTION(WDSBP_PK_TYPE_WDSNBP,     WDSBP_OPT_TYPE_USHORT,        3)
#define WDSBP_OPT_POLL_RETRY_COUNT              WDSBP_MAKE_OPTION(WDSBP_PK_TYPE_WDSNBP,     WDSBP_OPT_TYPE_USHORT,        4)
#define WDSBP_OPT_REQUEST_ID                    WDSBP_MAKE_OPTION(WDSBP_PK_TYPE_WDSNBP,     WDSBP_OPT_TYPE_ULONG,         5)
#define WDSBP_OPT_MESSAGE                       WDSBP_MAKE_OPTION(WDSBP_PK_TYPE_WDSNBP,     WDSBP_OPT_TYPE_STR,           6)
#define WDSBP_OPT_VERSION_QUERY                 WDSBP_MAKE_OPTION(WDSBP_PK_TYPE_WDSNBP,     WDSBP_OPT_TYPE_NONE,          7)
#define WDSBP_OPT_SERVER_VERSION                WDSBP_MAKE_OPTION(WDSBP_PK_TYPE_WDSNBP,     WDSBP_OPT_TYPE_ULONG,         8)
#define WDSBP_OPT_REFERRAL_SERVER               WDSBP_MAKE_OPTION(WDSBP_PK_TYPE_WDSNBP,     WDSBP_OPT_TYPE_IP4,           9)
#define WDSBP_OPT_PXE_CLIENT_PROMPT             WDSBP_MAKE_OPTION(WDSBP_PK_TYPE_WDSNBP,     WDSBP_OPT_TYPE_BYTE,          11)
#define WDSBP_OPT_PXE_PROMPT_DONE               WDSBP_MAKE_OPTION(WDSBP_PK_TYPE_WDSNBP,     WDSBP_OPT_TYPE_BYTE,          12)
#define WDSBP_OPT_NBP_VER                       WDSBP_MAKE_OPTION(WDSBP_PK_TYPE_WDSNBP,     WDSBP_OPT_TYPE_USHORT,        13)
#define WDSBP_OPT_ACTION_DONE                   WDSBP_MAKE_OPTION(WDSBP_PK_TYPE_WDSNBP,     WDSBP_OPT_TYPE_BYTE,          14)
#define WDSBP_OPT_ALLOW_SERVER_SELECTION        WDSBP_MAKE_OPTION(WDSBP_PK_TYPE_WDSNBP,     WDSBP_OPT_TYPE_BYTE,          15)
#define WDSBP_OPT_BCD_FILE_PATH                 WDSBP_MAKE_OPTION(WDSBP_PK_TYPE_BCD,        WDSBP_OPT_TYPE_STR,           252)
#define WDSBP_IS_PK_TYPE(_Value, _Type)         (((_Value) & (_Type)) == (_Type))
#define WDSBP_OPTVAL_ACTION_APPROVAL            1
#define WDSBP_OPTVAL_ACTION_REFERRAL            3
#define WDSBP_OPTVAL_ACTION_ABORT               5
#define WDSBP_OPTVAL_PXE_PROMPT_OPTIN           1
#define WDSBP_OPTVAL_PXE_PROMPT_NOPROMPT        2
#define WDSBP_OPTVAL_PXE_PROMPT_OPTOUT          3
#define WDSBP_OPTVAL_NBP_VER_7                  0x0700
DWORD WDSBPAPI WdsBpParseInitialize(PVOID pPacket, ULONG uPacketLen, PBYTE pbPacketType, HANDLE *phHandle);
DWORD WDSBPAPI WdsBpInitialize(BYTE bPacketType, HANDLE *phHandle);
DWORD WDSBPAPI WdsBpCloseHandle(HANDLE hHandle);
DWORD WDSBPAPI WdsBpQueryOption(HANDLE hHandle, ULONG uOption, ULONG uValueLen, PVOID pValue, PULONG puBytes);
DWORD WDSBPAPI WdsBpAddOption(HANDLE hHandle, ULONG uOption, ULONG uValueLen, PVOID pValue);
DWORD WDSBPAPI WdsBpGetOptionBuffer(HANDLE hHandle, ULONG uBufferLen, PVOID pBuffer, PULONG puBytes);
#endif
