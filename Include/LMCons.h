/*+@@file@@----------------------------------------------------------------*//*!
 \file		LMCons.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 17 01:41:06 2016
 \date		Modified on Sun Jul 17 01:41:06 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef NETCONS_INCLUDED
#define NETCONS_INCLUDED
#if __POCC__ >= 500
#pragma once
#endif
#ifndef PASCAL
#define PASCAL
#endif
#ifndef FAR
#define FAR
#endif
#define CNLEN       15
#define LM20_CNLEN  15
#define DNLEN       CNLEN
#define LM20_DNLEN  LM20_CNLEN
#if (CNLEN != DNLEN)
#error CNLEN and DNLEN are not equal
#endif
#define UNCLEN      (CNLEN+2)
#define LM20_UNCLEN (LM20_CNLEN+2)
#define NNLEN       80
#define LM20_NNLEN  12
#define RMLEN       (UNCLEN+1+NNLEN)
#define LM20_RMLEN  (LM20_UNCLEN+1+LM20_NNLEN)
#define SNLEN       80
#define LM20_SNLEN  15
#define STXTLEN     256
#define LM20_STXTLEN 63
#define PATHLEN     256
#define LM20_PATHLEN 256
#define DEVLEN      80
#define LM20_DEVLEN 8
#define EVLEN       16
#define UNLEN       256
#define LM20_UNLEN  20
#define GNLEN       UNLEN
#define LM20_GNLEN  LM20_UNLEN
#define PWLEN       256
#define LM20_PWLEN  14
#define SHPWLEN     8
#define CLTYPE_LEN  12
#define MAXCOMMENTSZ 256
#define LM20_MAXCOMMENTSZ 48
#define QNLEN       NNLEN
#define LM20_QNLEN  LM20_NNLEN
#if (QNLEN != NNLEN)
# error QNLEN and NNLEN are not equal
#endif
#define ALERTSZ     128
#define MAXDEVENTRIES (sizeof (int)*8)
#define NETBIOS_NAME_LEN  16
#define MAX_PREFERRED_LENGTH    ((DWORD) -1)
#define CRYPT_KEY_LEN           7
#define CRYPT_TXT_LEN           8
#define ENCRYPTED_PWLEN         16
#define SESSION_PWLEN           24
#define SESSION_CRYPT_KLEN      21
#ifndef PARMNUM_ALL
#define PARMNUM_ALL             0
#endif
#define PARM_ERROR_UNKNOWN      ( (DWORD) (-1) )
#define PARM_ERROR_NONE         0
#define PARMNUM_BASE_INFOLEVEL  1000
#if defined( _WIN32_WINNT ) || defined( WINNT ) || defined( FORCE_UNICODE )
#define LMSTR   LPWSTR
#define LMCSTR  LPCWSTR
#else
#define LMSTR   LPSTR
#define LMCSTR  LPCSTR
#endif
#define MESSAGE_FILENAME        TEXT("NETMSG")
#define OS2MSG_FILENAME         TEXT("BASE")
#define HELP_MSG_FILENAME       TEXT("NETH")
#define BACKUP_MSG_FILENAME     TEXT("BAK.MSG")
#ifndef NULL
#define NULL	((void *)0)
#endif
#define NET_API_STATUS          DWORD
#define API_RET_TYPE            NET_API_STATUS
#if (_MSC_VER >= 800) || defined(_STDCALL_SUPPORTED)
#define NET_API_FUNCTION    __stdcall
#else
#define NET_API_FUNCTION
#endif
#define PLATFORM_ID_DOS 300
#define PLATFORM_ID_OS2 400
#define PLATFORM_ID_NT  500
#define PLATFORM_ID_OSF 600
#define PLATFORM_ID_VMS 700
#define MIN_LANMAN_MESSAGE_ID  NERR_BASE
#define MAX_LANMAN_MESSAGE_ID  5899
#endif
