/*+@@file@@----------------------------------------------------------------*//*!
 \file		LMUse.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 17 23:14:31 2016
 \date		Modified on Sun Jul 17 23:14:31 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _LMUSE_
#define _LMUSE_
#if __POCC__ >= 500
#pragma once
#endif
#include <lmcons.h>
#include <lmuseflg.h>
NET_API_STATUS NET_API_FUNCTION NetUseAdd(LMSTR UncServerName, DWORD Level, LPBYTE Buf, LPDWORD ParmError);
NET_API_STATUS NET_API_FUNCTION NetUseDel(LMSTR UncServerName, LMSTR UseName, DWORD ForceCond);
NET_API_STATUS NET_API_FUNCTION NetUseEnum(LMSTR UncServerName, DWORD Level, LPBYTE *BufPtr, DWORD PreferedMaximumSize, LPDWORD EntriesRead, LPDWORD TotalEntries, LPDWORD ResumeHandle);
NET_API_STATUS NET_API_FUNCTION NetUseGetInfo(LMSTR UncServerName, LMSTR UseName, DWORD Level, LPBYTE *BufPtr);
typedef struct _USE_INFO_0
{
    LMSTR   ui0_local;
    LMSTR   ui0_remote;
}USE_INFO_0, *PUSE_INFO_0, *LPUSE_INFO_0;
typedef struct _USE_INFO_1
{
    LMSTR   ui1_local;
    LMSTR   ui1_remote;
    LMSTR   ui1_password;
    DWORD   ui1_status;
    DWORD   ui1_asg_type;
    DWORD   ui1_refcount;
    DWORD   ui1_usecount;
}USE_INFO_1, *PUSE_INFO_1, *LPUSE_INFO_1;
typedef struct _USE_INFO_2
{
    LMSTR    ui2_local;
    LMSTR    ui2_remote;
    LMSTR    ui2_password;
    DWORD    ui2_status;
    DWORD    ui2_asg_type;
    DWORD    ui2_refcount;
    DWORD    ui2_usecount;
    LMSTR    ui2_username;
    LMSTR    ui2_domainname;
}USE_INFO_2, *PUSE_INFO_2, *LPUSE_INFO_2;
typedef struct _USE_INFO_3
{
    USE_INFO_2 ui3_ui2;
    ULONG      ui3_flags;
} USE_INFO_3, *PUSE_INFO_3, *LPUSE_INFO_3;
typedef struct _USE_INFO_4
{
    USE_INFO_3 ui4_ui3;
    DWORD      ui4_auth_identity_length;
    PBYTE      ui4_auth_identity;
} USE_INFO_4, *PUSE_INFO_4, *LPUSE_INFO_4;
#define USE_LOCAL_PARMNUM       1
#define USE_REMOTE_PARMNUM      2
#define USE_PASSWORD_PARMNUM    3
#define USE_ASGTYPE_PARMNUM     4
#define USE_USERNAME_PARMNUM    5
#define USE_DOMAINNAME_PARMNUM  6
#define USE_OK                  0
#define USE_PAUSED              1
#define USE_SESSLOST            2
#define USE_DISCONN             2
#define USE_NETERR              3
#define USE_CONN                4
#define USE_RECONN              5
#define USE_WILDCARD            ( (DWORD) (-1) )
#define USE_DISKDEV             0
#define USE_SPOOLDEV            1
#define USE_CHARDEV             2
#define USE_IPC                 3
#define CREATE_NO_CONNECT 0x1
#define CREATE_BYPASS_CSC 0x2
#define CREATE_CRED_RESET 0x4
#define USE_DEFAULT_CREDENTIALS 0x4
#endif
