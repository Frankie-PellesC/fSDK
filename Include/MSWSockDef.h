/*+@@file@@----------------------------------------------------------------*//*!
 \file		MSWSockDef.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug 14 23:44:58 2016
 \date		Modified on Sun Aug 14 23:44:58 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _MSWSOCKDEF_
#define _MSWSOCKDEF_
#if __POCC__ >= 500
#pragma once
#endif
#if(_WIN32_WINNT >= 0x0600)
#ifdef __POCC__
#define MSWSOCKDEF_INLINE __inline
#else
#define MSWSOCKDEF_INLINE extern inline
#endif
#endif
#ifndef ASSERT
#define MSWSOCKDEF_ASSERT_UNDEFINED
#define ASSERT(exp) ((VOID) 0)
#endif
#if(_WIN32_WINNT >= 0x0600)
#ifdef _WS2DEF_
extern CONST UCHAR sockaddr_size[AF_MAX];
MSWSOCKDEF_INLINE UCHAR SOCKADDR_SIZE(ADDRESS_FAMILY af)
{
	return (UCHAR) ((af < AF_MAX) ? sockaddr_size[af] : sockaddr_size[AF_UNSPEC]);
}
MSWSOCKDEF_INLINE SCOPE_LEVEL ScopeLevel(SCOPE_ID ScopeId)
{
	return (SCOPE_LEVEL)ScopeId.Level;
}
#endif
#define SIO_SET_COMPATIBILITY_MODE  _WSAIOW(IOC_VENDOR,300)
typedef enum _WSA_COMPATIBILITY_BEHAVIOR_ID
{
    WsaBehaviorAll = 0,
    WsaBehaviorReceiveBuffering,
    WsaBehaviorAutoTuning
} WSA_COMPATIBILITY_BEHAVIOR_ID, *PWSA_COMPATIBILITY_BEHAVIOR_ID;
typedef struct _WSA_COMPATIBILITY_MODE
{
    WSA_COMPATIBILITY_BEHAVIOR_ID BehaviorId;
    ULONG TargetOsVersion;
} WSA_COMPATIBILITY_MODE, *PWSA_COMPATIBILITY_MODE;   
#endif
#ifdef MSWSOCKDEF_ASSERT_UNDEFINED
#undef ASSERT
#endif
#endif
