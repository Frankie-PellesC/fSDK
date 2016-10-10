/*+@@file@@----------------------------------------------------------------*//*!
 \file		profinfo.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep  3 20:25:30 2016
 \date		Modified on Sat Sep  3 20:25:30 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _INC_PROFINFO
#define _INC_PROFINFO
#if __POCC__ >= 500
#pragma once
#endif
typedef struct _PROFILEINFOA
{
	DWORD dwSize;
	DWORD dwFlags;
	LPSTR lpUserName;
	LPSTR lpProfilePath;
	LPSTR lpDefaultPath;
	LPSTR lpServerName;
	LPSTR lpPolicyPath;
	HANDLE hProfile;
} PROFILEINFOA, FAR * LPPROFILEINFOA;
typedef struct _PROFILEINFOW
{
	DWORD dwSize;
	DWORD dwFlags;
	LPWSTR lpUserName;
	LPWSTR lpProfilePath;
	LPWSTR lpDefaultPath;
	LPWSTR lpServerName;
	LPWSTR lpPolicyPath;
	HANDLE hProfile;
} PROFILEINFOW, FAR * LPPROFILEINFOW;
#ifdef UNICODE
typedef PROFILEINFOW PROFILEINFO;
typedef LPPROFILEINFOW LPPROFILEINFO;
#else
typedef PROFILEINFOA PROFILEINFO;
typedef LPPROFILEINFOA LPPROFILEINFO;
#endif
#endif
