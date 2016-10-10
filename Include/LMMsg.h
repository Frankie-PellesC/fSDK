/*+@@file@@----------------------------------------------------------------*//*!
 \file		LMMsg.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 17 22:39:02 2016
 \date		Modified on Sun Jul 17 22:39:02 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _LMMSG_
#define _LMMSG_
#if __POCC__ >= 500
#pragma once
#endif
NET_API_STATUS NET_API_FUNCTION NetMessageNameAdd(LPCWSTR servername, LPCWSTR msgname);
NET_API_STATUS NET_API_FUNCTION NetMessageNameEnum(LPCWSTR servername, DWORD level, LPBYTE *bufptr, DWORD prefmaxlen, LPDWORD entriesread, LPDWORD totalentries, LPDWORD resume_handle);
NET_API_STATUS NET_API_FUNCTION NetMessageNameGetInfo(LPCWSTR servername, LPCWSTR msgname, DWORD level, LPBYTE *bufptr);
NET_API_STATUS NET_API_FUNCTION NetMessageNameDel(LPCWSTR servername, LPCWSTR msgname);
NET_API_STATUS NET_API_FUNCTION NetMessageBufferSend(LPCWSTR servername, LPCWSTR msgname, LPCWSTR fromname, LPBYTE buf, DWORD buflen);
typedef struct _MSG_INFO_0
{
	LPWSTR msgi0_name;
} MSG_INFO_0, *PMSG_INFO_0, *LPMSG_INFO_0;
typedef struct _MSG_INFO_1
{
	LPWSTR msgi1_name;
	DWORD msgi1_forward_flag;
	LPWSTR msgi1_forward;
} MSG_INFO_1, *PMSG_INFO_1, *LPMSG_INFO_1;
#define MSGNAME_NOT_FORWARDED   0
#define MSGNAME_FORWARDED_TO    0x04
#define MSGNAME_FORWARDED_FROM  0x10
#endif
