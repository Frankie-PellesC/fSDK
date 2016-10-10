/*+@@file@@----------------------------------------------------------------*//*!
 \file		IcmpAPI.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Jul 15 18:52:36 2016
 \date		Modified on Fri Jul 15 18:52:36 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _ICMP_INCLUDED_
#define _ICMP_INCLUDED_
#if __POCC__ >= 500
#pragma once
#endif
HANDLE WINAPI IcmpCreateFile(VOID);
#if (NTDDI_VERSION >= NTDDI_WINXP)
HANDLE WINAPI Icmp6CreateFile(VOID);
#endif
BOOL WINAPI IcmpCloseHandle(HANDLE IcmpHandle);
DWORD WINAPI IcmpSendEcho(HANDLE IcmpHandle, IPAddr DestinationAddress, LPVOID RequestData, WORD RequestSize, PIP_OPTION_INFORMATION RequestOptions, LPVOID ReplyBuffer, DWORD ReplySize, DWORD Timeout);
DWORD WINAPI IcmpSendEcho2
(
    HANDLE                   IcmpHandle,
    HANDLE                   Event,
#ifdef PIO_APC_ROUTINE_DEFINED
    PIO_APC_ROUTINE          ApcRoutine,
#else
    FARPROC                  ApcRoutine,
#endif
    PVOID                    ApcContext,
    IPAddr                   DestinationAddress,
    LPVOID                   RequestData,
    WORD                     RequestSize,
    PIP_OPTION_INFORMATION   RequestOptions,
    LPVOID                   ReplyBuffer,
    DWORD                    ReplySize,
    DWORD                    Timeout
);
#if (NTDDI_VERSION >= NTDDI_VISTASP1)
DWORD WINAPI IcmpSendEcho2Ex
(
    HANDLE                   IcmpHandle,
    HANDLE                   Event,
#ifdef PIO_APC_ROUTINE_DEFINED
    PIO_APC_ROUTINE          ApcRoutine,
#else
    FARPROC                  ApcRoutine,
#endif
    PVOID                    ApcContext,
    IPAddr                   SourceAddress,
    IPAddr                   DestinationAddress,
    LPVOID                   RequestData,
    WORD                     RequestSize,
    PIP_OPTION_INFORMATION   RequestOptions,
    LPVOID                   ReplyBuffer,
    DWORD                    ReplySize,
    DWORD                    Timeout
);
#endif
#if (NTDDI_VERSION >= NTDDI_WINXP)
DWORD WINAPI Icmp6SendEcho2
(
    HANDLE                   IcmpHandle,
    HANDLE                   Event,
#ifdef PIO_APC_ROUTINE_DEFINED
    PIO_APC_ROUTINE          ApcRoutine,
#else
    FARPROC                  ApcRoutine,
#endif
    PVOID                    ApcContext,
    struct sockaddr_in6     *SourceAddress,
    struct sockaddr_in6     *DestinationAddress,
    LPVOID                   RequestData,
    WORD                     RequestSize,
    PIP_OPTION_INFORMATION   RequestOptions,
    LPVOID                   ReplyBuffer,
    DWORD                    ReplySize,
    DWORD                    Timeout
);
#endif
DWORD WINAPI IcmpParseReplies(LPVOID ReplyBuffer, DWORD ReplySize);
#if (NTDDI_VERSION >= NTDDI_WINXP)
DWORD WINAPI Icmp6ParseReplies(LPVOID ReplyBuffer, DWORD ReplySize);
#endif
#endif
