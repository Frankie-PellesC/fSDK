#ifndef __ERRORS__
#define __ERRORS__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef _AMOVIE_
#define AMOVIEAPI   DECLSPEC_IMPORT
#else
#define AMOVIEAPI
#endif
#define VFW_FIRST_CODE   0x200
#define MAX_ERROR_TEXT_LEN 160
#include <VFWMSGS.H>
typedef BOOL (WINAPI* AMGETERRORTEXTPROCA)(HRESULT, char *, DWORD);
typedef BOOL (WINAPI* AMGETERRORTEXTPROCW)(HRESULT, WCHAR *, DWORD);
AMOVIEAPI DWORD WINAPI AMGetErrorTextA( HRESULT hr , LPSTR pbuffer , DWORD MaxLen);
AMOVIEAPI DWORD WINAPI AMGetErrorTextW( HRESULT hr , LPWSTR pbuffer , DWORD MaxLen);
#ifdef UNICODE
#define AMGetErrorText  AMGetErrorTextW
typedef AMGETERRORTEXTPROCW AMGETERRORTEXTPROC;
#else
#define AMGetErrorText  AMGetErrorTextA
typedef AMGETERRORTEXTPROCA AMGETERRORTEXTPROC;
#endif
#endif
