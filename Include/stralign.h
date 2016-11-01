/*+@@file@@----------------------------------------------------------------*//*!
 \file		stralign.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Jun 27 14:56:27 2016
 \date		Modified on Mon Jun 27 14:56:27 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#if !defined(__STRALIGN_H_)
#define __STRALIGN_H_
#if __POCC__ >= 500
#pragma once
#endif
#ifndef _STRALIGN_USE_SECURE_CRT
#if defined(__GOT_SECURE_LIB__) && __GOT_SECURE_LIB__ >= 200402L
#define _STRALIGN_USE_SECURE_CRT 1
#else
#define _STRALIGN_USE_SECURE_CRT 0
#endif
#endif
#if !defined(_WINDOWS_INSECURE_DEPRECATE)
#if defined(_WINDOWS_SECURE_NO_DEPRECATE) || !_STRALIGN_USE_SECURE_CRT
#define _WINDOWS_INSECURE_DEPRECATE
#else
#define _WINDOWS_INSECURE_DEPRECATE __declspec(deprecated)
#endif
#endif
#if defined(_X86_)
#define WSTR_ALIGNED(s) TRUE
#define ua_CharUpperW CharUpperW
#define ua_lstrcmpiW  lstrcmpiW
#define ua_lstrcmpW   lstrcmpW
#define ua_lstrlenW   lstrlenW
#define ua_wcschr     wcschr
#define ua_wcsicmp    wcsicmp
#define ua_wcslen     wcslen
#define ua_wcsrchr    wcsrchr
#if _STRALIGN_USE_SECURE_CRT
#define ua_wcscpy_s   wcscpy_s
#endif
#include <wchar.h>
__inline PUWSTR static _WINDOWS_INSECURE_DEPRECATE ua_wcscpy(PUWSTR Destination, PCUWSTR Source)
{
    return wcscpy(Destination, Source);
}
#else
#if defined(_AMD64_)
#define WSTR_ALIGNED(s) TRUE
#else
#define WSTR_ALIGNED(s) (((DWORD_PTR)(s) & (sizeof(WCHAR)-1)) == 0)
#endif
LPUWSTR WINAPI uaw_CharUpperW(LPUWSTR String);
int APIENTRY uaw_lstrcmpW(PCUWSTR String1, PCUWSTR String2);
int APIENTRY uaw_lstrcmpiW(PCUWSTR String1, PCUWSTR String2);
int WINAPI uaw_lstrlenW(LPCUWSTR String);
PUWSTR __cdecl uaw_wcschr(PCUWSTR String, WCHAR Character);
PUWSTR __cdecl uaw_wcscpy(PUWSTR Destination, PCUWSTR Source);
int __cdecl uaw_wcsicmp(PCUWSTR String1, PCUWSTR String2);
size_t __cdecl uaw_wcslen(PCUWSTR String);
PUWSTR __cdecl uaw_wcsrchr(PCUWSTR String, WCHAR Character);
#if defined(CharUpper)
__inline LPUWSTR static ua_CharUpperW(LPUWSTR String)
{
	if (WSTR_ALIGNED(String))
	{
		return CharUpperW((PWSTR)String);
	}
	else
	{
		return uaw_CharUpperW(String);
	}
}
#endif
#if defined(lstrcmp)
__inline int static ua_lstrcmpW(LPCUWSTR String1, LPCUWSTR String2)
{
	if (WSTR_ALIGNED(String1) && WSTR_ALIGNED(String2))
	{
		return lstrcmpW((LPCWSTR)String1, (LPCWSTR)String2);
	}
	else
	{
		return uaw_lstrcmpW(String1, String2);
	}
}
#endif
#if defined(lstrcmpi)
__inline int static ua_lstrcmpiW(LPCUWSTR String1, LPCUWSTR String2)
{
	if (WSTR_ALIGNED(String1) && WSTR_ALIGNED(String2))
	{
		return lstrcmpiW((LPCWSTR)String1, (LPCWSTR)String2);
	}
	else
	{
		return uaw_lstrcmpiW(String1, String2);
	}
}
#endif
#if defined(lstrlen)
__inline int static ua_lstrlenW(LPCUWSTR String)
{
	if (WSTR_ALIGNED(String))
	{
		return lstrlenW((PCWSTR)String);
	}
	else
	{
		return uaw_lstrlenW(String);
	}
}
#endif
#if defined(_WSTRING_DEFINED)
#if defined(_WConst_return)
typedef _WConst_return WCHAR UNALIGNED *PUWSTR_C;
#else
typedef WCHAR UNALIGNED *PUWSTR_C;
#endif
__inline PUWSTR_C static ua_wcschr(PCUWSTR String, WCHAR Character)
{
	if (WSTR_ALIGNED(String))
	{
		return wcschr((PCWSTR)String, Character);
	}
	else
	{
		return (PUWSTR_C)uaw_wcschr(String, Character);
	}
}
__inline PUWSTR_C static ua_wcsrchr(PCUWSTR String, WCHAR Character)
{
	if (WSTR_ALIGNED(String))
	{
		return wcsrchr((PCWSTR)String, Character);
	}
	else
	{
		return (PUWSTR_C)uaw_wcsrchr(String, Character);
	}
}

__inline PUWSTR static _WINDOWS_INSECURE_DEPRECATE ua_wcscpy(PUWSTR Destination, PCUWSTR Source)
{
	if (WSTR_ALIGNED(Source) && WSTR_ALIGNED(Destination))
	{
		return wcscpy((PWSTR)Destination, (PCWSTR)Source);
	}
	else
	{
		return uaw_wcscpy(Destination, Source);
	}
}
#if _STRALIGN_USE_SECURE_CRT
__inline PUWSTR static ua_wcscpy_s(PUWSTR Destination, size_t DestinationSize, PCUWSTR Source)
{
	if (WSTR_ALIGNED(Source) && WSTR_ALIGNED(Destination))
	{
		return (wcscpy_s((PWSTR)Destination, DestinationSize, (PCWSTR)Source) == 0 ? Destination : NULL);
	}
	else
	{
		return uaw_wcscpy(Destination, Source);
	}
}
#endif
__inline size_t static ua_wcslen(PCUWSTR String)
{
	if (WSTR_ALIGNED(String))
	{
		return wcslen((PCWSTR)String);
	}
	else
	{
		return uaw_wcslen(String);
	}
}
#endif
#include <wchar.h>
__inline int static ua_wcsicmp(PCUWSTR String1, PCUWSTR String2)
{
	if (WSTR_ALIGNED(String1) && WSTR_ALIGNED(String2))
	{
		return _wcsicmp((LPCWSTR)String1, (LPCWSTR)String2);
	}
	else
	{
		return uaw_wcsicmp(String1, String2);
	}
}
#endif
#if !defined(__UA_WCSLEN)
#define __UA_WCSLEN ua_wcslen
#endif
#define __UA_WSTRSIZE(s)    ((__UA_WCSLEN(s)+1)*sizeof(WCHAR))
#define __UA_STACKCOPY(p,s) memcpy(_alloca(s),p,s)
#if defined(_AMD64_) || defined(_X86_)
#define WSTR_ALIGNED_STACK_COPY(d,s) (*(d) = (PCWSTR)(s))
#else
#define WSTR_ALIGNED_STACK_COPY(d,s)                                \
    {                                                               \
        PCUWSTR __ua_src;                                           \
        size_t  __ua_size;                                          \
        PWSTR  __ua_dst;                                            \
                                                                    \
        __ua_src = (s);                                             \
        if (WSTR_ALIGNED(__ua_src)) {                               \
            __ua_dst = (PWSTR)__ua_src;                             \
        } else {                                                    \
            __ua_size = __UA_WSTRSIZE(__ua_src);                    \
            __ua_dst = (PWSTR)_alloca(__ua_size);                   \
            memcpy(__ua_dst,__ua_src,__ua_size);                    \
        }                                                           \
        *(d) = (PCWSTR)__ua_dst;                                    \
    }
#endif
#define ASTR_ALIGNED_STACK_COPY(d,s) (*(d) = (PCSTR)(s))
#if !defined(_AMD64_) && !defined(_X86_)
#define __UA_STRUC_ALIGNED(t,s) \
    (((DWORD_PTR)(s) & (TYPE_ALIGNMENT(t)-1)) == 0)
#define STRUC_ALIGNED_STACK_COPY(t,s) \
    __UA_STRUC_ALIGNED(t,s) ?   \
        ((t const *)(s)) :      \
        ((t const *)__UA_STACKCOPY((s),sizeof(t)))
#else
#define STRUC_ALIGNED_STACK_COPY(t,s) ((CONST t *)(s))
#endif
#if defined(UNICODE)
#define TSTR_ALIGNED_STACK_COPY(d,s)    WSTR_ALIGNED_STACK_COPY(d,s)
#define TSTR_ALIGNED(x)                 WSTR_ALIGNED(x)
#define ua_CharUpper                    ua_CharUpperW
#define ua_lstrcmp                      ua_lstrcmpW
#define ua_lstrcmpi                     ua_lstrcmpiW
#define ua_lstrlen                      ua_lstrlenW
#define ua_tcscpy                       ua_wcscpy
#if _STRALIGN_USE_SECURE_CRT
#define ua_tcscpy_s                     ua_wcscpy_s
#endif
#else
#define TSTR_ALIGNED_STACK_COPY(d,s)    ASTR_ALIGNED_STACK_COPY(d,s)
#define TSTR_ALIGNED(x)                 TRUE
#define ua_CharUpper                    CharUpperA
#define ua_lstrcmp                      lstrcmpA
#define ua_lstrcmpi                     lstrcmpiA
#define ua_lstrlen                      lstrlenA
#define ua_tcscpy                       strcpy
#if _STRALIGN_USE_SECURE_CRT
#define ua_tcscpy_s                     strcpy_s
#endif
#endif
#endif
