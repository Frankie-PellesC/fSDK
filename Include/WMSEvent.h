/*+@@file@@----------------------------------------------------------------*//*!
 \file		WMSEvent.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul  9 21:12:22 2016
 \date		Modified on Sat Jul  9 21:12:22 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif
#include <rpc.h>
#include <rpcndr.h>
#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif
#ifndef __wmsevent_h__
#define __wmsevent_h__
#if __POCC__ >= 500
#pragma once
#endif
#include <oaidl.h>
#define WMS_EVENT_VERSION 1
typedef 
enum WMS_EVENT_TYPE
{
	WMS_EVENT_UNKNOWN_EVENT	= 0,
	WMS_EVENT_CONNECT	= 1,
	WMS_EVENT_DISCONNECT	= 2,
	WMS_EVENT_BEGIN_USER_SESSION	= 3,
	WMS_EVENT_END_USER_SESSION	= 4,
	WMS_EVENT_LOGICAL_URL_TRANSFORM	= 5,
	WMS_EVENT_PHYSICAL_URL_TRANSFORM	= 6,
	WMS_EVENT_DESCRIBE	= 7,
	WMS_EVENT_OPEN	= 8,
	WMS_EVENT_SELECT_STREAMS	= 9,
	WMS_EVENT_INITIALIZE_PLAYLIST	= 10,
	WMS_EVENT_PLAY	= 11,
	WMS_EVENT_PAUSE	= 12,
	WMS_EVENT_STOP	= 13,
	WMS_EVENT_CLOSE	= 14,
	WMS_EVENT_SET_PARAMETER	= 15,
	WMS_EVENT_GET_PARAMETER	= 16,
	WMS_EVENT_VALIDATE_PUSH_DISTRIBUTION	= 17,
	WMS_EVENT_CREATE_DISTRIBUTION_DATA_PATH	= 18,
	WMS_EVENT_DESTROY_DISTRIBUTION_DATA_PATH	= 19,
	WMS_EVENT_LOG	= 20,
	WMS_EVENT_SERVER	= 21,
	WMS_EVENT_PUBLISHING_POINT	= 22,
	WMS_EVENT_LIMIT_CHANGE	= 23,
	WMS_EVENT_LIMIT_HIT	= 24,
	WMS_EVENT_PLUGIN	= 25,
	WMS_EVENT_PLAYLIST	= 26,
	WMS_EVENT_CACHE	= 27,
	WMS_EVENT_REMOTE_CACHE_OPEN	= 28,
	WMS_EVENT_REMOTE_CACHE_CLOSE	= 29,
	WMS_EVENT_REMOTE_CACHE_LOG	= 30,
	WMS_NUM_EVENTS	= 31
} 	WMS_EVENT_TYPE;
typedef struct WMS_EVENT
{
    long Version;
    WMS_EVENT_TYPE Type;
    long hr;
} 	WMS_EVENT;
extern RPC_IF_HANDLE __MIDL_itf_wmsevent_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmsevent_0000_0000_v0_0_s_ifspec;
#endif
