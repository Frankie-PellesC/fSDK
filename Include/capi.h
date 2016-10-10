/*+@@file@@----------------------------------------------------------------*//*!
 \file		capi.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul  2 23:19:22 2016
 \date		Modified on Sat Jul  2 23:19:22 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _CAPI_H_
#define _CAPI_H_
#if __POCC__ >= 500
#pragma once
#endif
#include <wincrypt.h>
#include <sipbase.h>
#include <mscat.h>
#include <mssip.h>
#include <wintrust.h>
#ifndef _JTRUST_H
#define _JTRUST_H
#if !defined(JAVA_TRUST_PROVIDER)
#define JAVA_POLICY_PROVIDER_DOWNLOAD { 0xe6f795b1, 0xf738, 0x11d0, {0xa7, 0x2f, 0x0, 0xa0, 0xc9, 0x3, 0xb8, 0x3d } }
#define JAVA_POLICY_PROVIDER_CHECK { 0xe6f795b2, 0xf738, 0x11d0, {0xa7, 0x2f, 0x0, 0xa0, 0xc9, 0x3, 0xb8, 0x3d } }
typedef struct _JAVA_TRUST
{
	DWORD cbSize;
	DWORD flag;
	BOOL fAllActiveXPermissions;
	BOOL fAllPermissions;
	DWORD dwEncodingType;
	PBYTE pbJavaPermissions;
	DWORD cbJavaPermissions;
	PBYTE pbSigner;
	DWORD cbSigner;
	LPCWSTR pwszZone;
	GUID guidZone;
	HRESULT hVerify;
}
JAVA_TRUST, *PJAVA_TRUST;
typedef struct _JAVA_POLICY_PROVIDER
{
	DWORD cbSize;
	LPVOID pZoneManager;
	LPCWSTR pwszZone;
	BOOL fNoBadUI;
	PJAVA_TRUST pbJavaTrust;
	DWORD cbJavaTrust;
	DWORD dwActionID;
	DWORD dwUnsignedActionID;
	BOOL VMBased;
}
JAVA_POLICY_PROVIDER, *PJAVA_POLICY_PROVIDER;
#endif
#endif
#endif
