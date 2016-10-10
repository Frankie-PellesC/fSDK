/*+@@file@@----------------------------------------------------------------*//*!
 \file		LMConfig.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 17 23:27:01 2016
 \date		Modified on Sun Jul 17 23:27:01 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _LMCONFIG_
#define _LMCONFIG_
#if __POCC__ >= 500
#pragma once
#endif
#define REVISED_CONFIG_APIS
NET_API_STATUS NET_API_FUNCTION NetConfigGet(LPCWSTR server, LPCWSTR component, LPCWSTR parameter,
#ifdef REVISED_CONFIG_APIS
	LPBYTE * bufptr
#else
	LPBYTE * bufptr, LPDWORD totalavailable
#endif
	);
NET_API_STATUS NET_API_FUNCTION NetConfigGetAll(LPCWSTR server, LPCWSTR component,
#ifdef REVISED_CONFIG_APIS
	LPBYTE * bufptr
#else
	LPBYTE * bufptr, LPDWORD totalavailable
#endif
	);
NET_API_STATUS NET_API_FUNCTION NetConfigSet(LPCWSTR server, LPCWSTR reserved1, LPCWSTR component, DWORD level, DWORD reserved2, LPBYTE buf, DWORD reserved3);
typedef struct _CONFIG_INFO_0
{
	LPWSTR cfgi0_key;
	LPWSTR cfgi0_data;
} CONFIG_INFO_0, *PCONFIG_INFO_0, *LPCONFIG_INFO_0;
#endif
