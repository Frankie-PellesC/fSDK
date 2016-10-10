/*+@@file@@----------------------------------------------------------------*//*!
 \file		wdspxe.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 00:21:58 2016
 \date		Modified on Mon Sep 19 00:21:58 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __WDSPXE_H__
#define __WDSPXE_H__
#if __POCC__ >= 500
#pragma once
#endif
#define PXEAPI __stdcall
typedef ULONG PXE_REG_INDEX;
#define PXE_REG_INDEX_TOP           (0)
#define PXE_REG_INDEX_BOTTOM        0xFFFFFFFF
typedef struct tagPXE_PROVIDER
{
    ULONG uSizeOfStruct;
    LPWSTR pwszName;
    LPWSTR pwszFilePath;
    BOOL bIsCritical;
    ULONG uIndex;
} PXE_PROVIDER, *PPXE_PROVIDER;
typedef ULONG PXE_CALLBACK_TYPE;
#define PXE_CALLBACK_RECV_REQUEST       0
#define PXE_CALLBACK_SHUTDOWN           1
#define PXE_CALLBACK_SERVICE_CONTROL    2
#define PXE_CALLBACK_MAX                3
typedef ULONG PXE_GSI_TYPE;
#define PXE_GSI_TRACE_ENABLED           1
#define PXE_MAX_ADDRESS         16
#define PXE_ADDR_BROADCAST      0x0001
#define PXE_ADDR_USE_PORT       0x0002
#define PXE_ADDR_USE_ADDR       0x0004
#define PXE_ADDR_USE_DHCP_RULES 0x0008
typedef struct tagPXE_ADDRESS
{
    ULONG uFlags;
    union
    {
        BYTE bAddress[PXE_MAX_ADDRESS];
        ULONG uIpAddress;
    };
    ULONG uAddrLen;
    USHORT uPort;
} PXE_ADDRESS, *PPXE_ADDRESS;
typedef ULONG PXE_BOOT_ACTION;
#define PXE_BA_NBP              1
#define PXE_BA_CUSTOM           2
#define PXE_BA_IGNORE           3
#define PXE_BA_REJECTED         4
typedef ULONG PXE_SEVERITY;
#define PXE_TRACE_VERBOSE           0x00010000
#define PXE_TRACE_INFO              0x00020000
#define PXE_TRACE_WARNING           0x00040000
#define PXE_TRACE_ERROR             0x00080000
#define PXE_TRACE_FATAL             0x00100000
typedef ULONG PXE_PROVIDER_ATTRIBUTE;
#define PXE_PROV_ATTR_FILTER        0
#define PXE_PROV_FILTER_ALL         0x0000
#define PXE_PROV_FILTER_DHCP_ONLY   0x0001
#define PXE_PROV_FILTER_PXE_ONLY    0x0002
DWORD PXEAPI PxeProviderRegister(LPCWSTR pszProviderName, LPCWSTR pszModulePath, PXE_REG_INDEX Index, BOOL bIsCritical, PHKEY phProviderKey);
DWORD PXEAPI PxeProviderUnRegister(LPCWSTR pszProviderName);
DWORD PXEAPI PxeProviderQueryIndex(LPCWSTR pszProviderName, PULONG puIndex);
DWORD PXEAPI PxeProviderEnumFirst(HANDLE *phEnum);
DWORD PXEAPI PxeProviderEnumNext(HANDLE hEnum, PPXE_PROVIDER *ppProvider);
DWORD PXEAPI PxeProviderEnumClose(HANDLE hEnum);
DWORD PxeProviderFreeInfo(PPXE_PROVIDER pProvider);
DWORD PXEAPI PxeRegisterCallback(HANDLE hProvider, PXE_CALLBACK_TYPE CallbackType, PVOID pCallbackFunction, PVOID pContext);
DWORD PXEAPI PxeSendReply(HANDLE hClientRequest, PVOID pPacket, ULONG uPacketLen, PXE_ADDRESS *pAddress);
DWORD PXEAPI PxeAsyncRecvDone(HANDLE hClientRequest, PXE_BOOT_ACTION Action);
DWORD /*PXEAPI*/ __cdecl PxeTrace(HANDLE hProvider, PXE_SEVERITY Severity, LPCWSTR pszFormat, ...);
DWORD PXEAPI PxeTraceV(HANDLE hProvider, PXE_SEVERITY Severity, LPCWSTR pszFormat, va_list Params);
PVOID PXEAPI PxePacketAllocate(HANDLE hProvider, HANDLE hClientRequest, ULONG uSize);
DWORD PXEAPI PxePacketFree(HANDLE hProvider, HANDLE hClientRequest, PVOID pPacket);
DWORD PXEAPI PxeProviderSetAttribute(HANDLE hProvider, PXE_PROVIDER_ATTRIBUTE Attribute, PVOID pParameterBuffer, ULONG uParamLen);
DWORD PXEAPI PxeDhcpInitialize(PVOID pRecvPacket, ULONG uRecvPacketLen, PVOID pReplyPacket, ULONG uMaxReplyPacketLen, PULONG puReplyPacketLen);
DWORD PXEAPI PxeDhcpAppendOption(PVOID pReplyPacket, ULONG uMaxReplyPacketLen, PULONG puReplyPacketLen, BYTE bOption, BYTE bOptionLen, PVOID pValue);
DWORD PXEAPI PxeDhcpAppendOptionRaw(PVOID pReplyPacket, ULONG uMaxReplyPacketLen, PULONG puReplyPacketLen, USHORT uBufferLen, PVOID pBuffer);
DWORD PXEAPI PxeDhcpIsValid(PVOID pPacket, ULONG uPacketLen, BOOL bRequestPacket, PBOOL pbPxeOptionPresent);
DWORD PXEAPI PxeDhcpGetOptionValue(PVOID pPacket, ULONG uPacketLen, ULONG uInstance, BYTE bOption, PBYTE pbOptionLen, PVOID *ppOptionValue);
DWORD PXEAPI PxeDhcpGetVendorOptionValue(PVOID pPacket, ULONG uPacketLen, BYTE bOption, ULONG uInstance, PBYTE pbOptionLen, PVOID *ppOptionValue);
DWORD PXEAPI PxeGetServerInfo(PXE_GSI_TYPE uInfoType, PVOID pBuffer, ULONG uBufferLen);
#define     PXE_DHCP_SERVER_PORT            67
#define     PXE_DHCP_CLIENT_PORT            68
#define     PXE_SERVER_PORT                 4011
#define     PXE_DHCP_FILE_SIZE              128
#define     PXE_DHCP_SERVER_SIZE            64
#define     PXE_DHCP_HWAADR_SIZE            16
#define     PXE_DHCP_MAGIC_COOKIE_SIZE      4
#define     PXEDHCP_MAGIC_COOKIE            (ULONG)0x63538263
typedef struct tagPXE_DHCP_OPTION 
{
    BYTE OptionType;
    BYTE OptionLength;
    BYTE OptionValue[1];
} PXE_DHCP_OPTION, *PPXE_DHCP_OPTION;
typedef struct tagPXE_DHCP_MESSAGE
{
    BYTE Operation;
    BYTE HardwareAddressType;
    BYTE HardwareAddressLength;
    BYTE HopCount;
    DWORD TransactionID;
    WORD SecondsSinceBoot;
    WORD Reserved;
    ULONG ClientIpAddress;
    ULONG YourIpAddress;
    ULONG BootstrapServerAddress;
    ULONG RelayAgentIpAddress;
    BYTE HardwareAddress[PXE_DHCP_HWAADR_SIZE];
    BYTE HostName[PXE_DHCP_SERVER_SIZE];
    BYTE BootFileName[PXE_DHCP_FILE_SIZE];
    union
    {
        BYTE bMagicCookie[PXE_DHCP_MAGIC_COOKIE_SIZE];
        ULONG uMagicCookie;
    };
    PXE_DHCP_OPTION Option;
} PXE_DHCP_MESSAGE, *PPXE_DHCP_MESSAGE;
#endif
