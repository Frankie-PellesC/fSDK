/*+@@file@@----------------------------------------------------------------*//*!
 \file		D3DCommon.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Tue Jul  5 09:37:29 2016
 \date		Modified on Tue Jul  5 09:37:29 2016
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
#ifndef __d3dcommon_h__
#define __d3dcommon_h__
#if __POCC__ >= 500
#pragma once
#endif
#include <oaidl.h>
#include <ocidl.h>
 
typedef enum D3D_DRIVER_TYPE
{
	D3D_DRIVER_TYPE_UNKNOWN	= 0,
	D3D_DRIVER_TYPE_HARDWARE	= ( D3D_DRIVER_TYPE_UNKNOWN + 1 ) ,
	D3D_DRIVER_TYPE_REFERENCE	= ( D3D_DRIVER_TYPE_HARDWARE + 1 ) ,
	D3D_DRIVER_TYPE_NULL	= ( D3D_DRIVER_TYPE_REFERENCE + 1 ) ,
	D3D_DRIVER_TYPE_SOFTWARE	= ( D3D_DRIVER_TYPE_NULL + 1 ) ,
	D3D_DRIVER_TYPE_WARP	= ( D3D_DRIVER_TYPE_SOFTWARE + 1 ) 
} D3D_DRIVER_TYPE;
typedef enum D3D_FEATURE_LEVEL
{
	D3D_FEATURE_LEVEL_9_1	= 0x9100,
	D3D_FEATURE_LEVEL_9_2	= 0x9200,
	D3D_FEATURE_LEVEL_9_3	= 0x9300,
	D3D_FEATURE_LEVEL_10_0	= 0xa000,
	D3D_FEATURE_LEVEL_10_1	= 0xa100,
	D3D_FEATURE_LEVEL_11_0	= 0xb000
}  D3D_FEATURE_LEVEL;
DEFINE_GUID(WKPDID_D3DDebugObjectName,0x429b8c22,0x9188,0x4b0c,0x87,0x42,0xac,0xb0,0xbf,0x85,0xc2,0x00);
extern RPC_IF_HANDLE __MIDL_itf_d3dcommon_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_d3dcommon_0000_0000_v0_0_s_ifspec;
#endif
