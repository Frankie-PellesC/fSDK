/*+@@file@@----------------------------------------------------------------*//*!
 \file		winnt.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Tue Sep  6 19:16:39 2016
 \date		Modified on Tue Sep  6 19:16:39 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _WINNT_
#define _WINNT_
#if __POCC__ >= 500
#pragma once
#endif
#include <ctype.h>
#define ANYSIZE_ARRAY 1
#ifndef DUMMYUNIONNAME
#if defined(NONAMELESSUNION) || !defined(_MSC_EXTENSIONS)
#define DUMMYUNIONNAME   u
#define DUMMYUNIONNAME2  u2
#define DUMMYUNIONNAME3  u3
#define DUMMYUNIONNAME4  u4
#define DUMMYUNIONNAME5  u5
#define DUMMYUNIONNAME6  u6
#define DUMMYUNIONNAME7  u7
#define DUMMYUNIONNAME8  u8
#define DUMMYUNIONNAME9  u9
#else
#define DUMMYUNIONNAME
#define DUMMYUNIONNAME2
#define DUMMYUNIONNAME3
#define DUMMYUNIONNAME4
#define DUMMYUNIONNAME5
#define DUMMYUNIONNAME6
#define DUMMYUNIONNAME7
#define DUMMYUNIONNAME8
#define DUMMYUNIONNAME9
#endif
#endif
#ifndef DUMMYSTRUCTNAME
#if defined(NONAMELESSUNION) || !defined(_MSC_EXTENSIONS)
#define DUMMYSTRUCTNAME  s
#define DUMMYSTRUCTNAME2 s2
#define DUMMYSTRUCTNAME3 s3
#define DUMMYSTRUCTNAME4 s4
#define DUMMYSTRUCTNAME5 s5
#else
#define DUMMYSTRUCTNAME
#define DUMMYSTRUCTNAME2
#define DUMMYSTRUCTNAME3
#define DUMMYSTRUCTNAME4
#define DUMMYSTRUCTNAME5
#endif
#endif
#if defined(_M_MRX000) && defined(ENABLE_RESTRICTED)
#define RESTRICTED_POINTER __restrict
#else
#define RESTRICTED_POINTER
#endif
#if defined(_M_MRX000) || defined(_M_ALPHA) || defined(_M_PPC) || defined(_M_IA64) || defined(_M_AMD64)
#define ALIGNMENT_MACHINE
#define UNALIGNED __unaligned
#if defined(_WIN64)
#define UNALIGNED64 __unaligned
#else
#define UNALIGNED64
#endif
#else
#undef ALIGNMENT_MACHINE
#define UNALIGNED
#define UNALIGNED64
#endif
#if defined(_WIN64) || defined(_M_ALPHA)
#define MAX_NATURAL_ALIGNMENT sizeof(ULONGLONG)
#define MEMORY_ALLOCATION_ALIGNMENT 16
#else
#define MAX_NATURAL_ALIGNMENT sizeof(DWORD)
#define MEMORY_ALLOCATION_ALIGNMENT 8
#endif
#if __POCC__ >= 500
#define TYPE_ALIGNMENT(t)  __alignof(t)
#else
#define TYPE_ALIGNMENT(t)  FIELD_OFFSET( struct { char x; t test; }, test )
#endif
#if defined(_WIN64)
#if defined(_AMD64_)
#define PROBE_ALIGNMENT( _s ) TYPE_ALIGNMENT( DWORD )
#elif defined(_IA64_)
#define PROBE_ALIGNMENT( _s ) (TYPE_ALIGNMENT( _s ) > TYPE_ALIGNMENT( DWORD ) ? TYPE_ALIGNMENT( _s ) : TYPE_ALIGNMENT( DWORD ))
#else
#error "No Target Architecture"
#endif
#define PROBE_ALIGNMENT32( _s ) TYPE_ALIGNMENT( DWORD )
#else
#define PROBE_ALIGNMENT( _s ) TYPE_ALIGNMENT( DWORD )
#endif
#define C_ASSERT(e) typedef char __C_ASSERT__[(e)?1:-1]
#include <basetsd.h>
#if (defined(_M_IX86) || defined(_M_IA64) || defined(_M_AMD64))
#define DECLSPEC_IMPORT __declspec(dllimport)
#else
#define DECLSPEC_IMPORT
#endif
#ifndef DECLSPEC_NORETURN
#if (__POCC__ >= 260)
#define DECLSPEC_NORETURN   __declspec(noreturn)
#else
#define DECLSPEC_NORETURN
#endif
#endif
#ifndef DECLSPEC_NOTHROW
#define DECLSPEC_NOTHROW
#endif
#ifndef DECLSPEC_ALIGN
#if (__POCC__ >= 280)
#define DECLSPEC_ALIGN(x)   __declspec(align(x))
#else
#define DECLSPEC_ALIGN(x)
#endif
#endif
#ifndef SYSTEM_CACHE_ALIGNMENT_SIZE
#if defined(_AMD64_) || defined(_X86_)
#define SYSTEM_CACHE_ALIGNMENT_SIZE 64
#else
#define SYSTEM_CACHE_ALIGNMENT_SIZE 128
#endif
#endif
#ifndef DECLSPEC_CACHEALIGN
#define DECLSPEC_CACHEALIGN DECLSPEC_ALIGN(SYSTEM_CACHE_ALIGNMENT_SIZE)
#endif
#ifndef DECLSPEC_UUID
#define DECLSPEC_UUID(x)		//Frankie PellesC don't have it
#endif
#ifndef DECLSPEC_NOVTABLE		//Frankie PellesC don't have it
#define DECLSPEC_NOVTABLE
#endif
#ifndef DECLSPEC_SELECTANY		//Frankie PellesC don't have it
#define DECLSPEC_SELECTANY
#endif
#ifndef NOP_FUNCTION
#define NOP_FUNCTION (void)0
#endif
#ifndef DECLSPEC_ADDRSAFE
#define DECLSPEC_ADDRSAFE
#endif
#ifndef DECLSPEC_NOINLINE
#if (__POCC__ >= 600)
#define DECLSPEC_NOINLINE  __declspec(noinline)
#else
#define DECLSPEC_NOINLINE
#endif
#endif
#ifndef FORCEINLINE
#if (__POCC__ >= 300)
#define FORCEINLINE __forceinline
#else
#define FORCEINLINE __inline
#endif
#endif
#ifndef DECLSPEC_DEPRECATED
#if (__POCC__ >= 650)
#define DECLSPEC_DEPRECATED   __declspec(deprecated)
#define DEPRECATE_SUPPORTED
#else
#define DECLSPEC_DEPRECATED
#undef  DEPRECATE_SUPPORTED
#endif
#endif
#ifdef DEPRECATE_DDK_FUNCTIONS
#ifdef _NTDDK_
#define DECLSPEC_DEPRECATED_DDK DECLSPEC_DEPRECATED
#ifdef DEPRECATE_SUPPORTED
#define PRAGMA_DEPRECATED_DDK 1
#endif
#else
#define DECLSPEC_DEPRECATED_DDK
#define PRAGMA_DEPRECATED_DDK 1
#endif
#else
#define DECLSPEC_DEPRECATED_DDK
#define PRAGMA_DEPRECATED_DDK 0
#endif
typedef void *PVOID;
typedef void *POINTER_64 PVOID64;
#if (__POCC__ >= 250) || defined(_STDCALL_SUPPORTED)
#define NTAPI __stdcall
#else
#define _cdecl
#define __cdecl
#define NTAPI
#endif
#define NTAPI_INLINE  NTAPI
#define NTSYSAPI     DECLSPEC_IMPORT
#define NTSYSCALLAPI DECLSPEC_IMPORT
#ifndef VOID
#define VOID void
typedef char CHAR;
typedef short SHORT;
typedef long LONG;
typedef int INT;
#endif
typedef wchar_t WCHAR;
typedef WCHAR *PWCHAR, *LPWCH, *PWCH;
typedef CONST WCHAR *LPCWCH, *PCWCH;
typedef WCHAR *NWPSTR, *LPWSTR, *PWSTR;
typedef PWSTR *PZPWSTR;
typedef CONST PWSTR *PCZPWSTR;
typedef WCHAR UNALIGNED *LPUWSTR, *PUWSTR;
typedef CONST WCHAR *LPCWSTR, *PCWSTR;
typedef PCWSTR *PZPCWSTR;
typedef CONST WCHAR UNALIGNED *LPCUWSTR, *PCUWSTR;
typedef WCHAR *PZZWSTR;
typedef CONST WCHAR *PCZZWSTR;
typedef WCHAR UNALIGNED *PUZZWSTR;
typedef CONST WCHAR UNALIGNED *PCUZZWSTR;
typedef WCHAR *PNZWCH;
typedef CONST WCHAR *PCNZWCH;
typedef WCHAR UNALIGNED *PUNZWCH;
typedef CONST WCHAR UNALIGNED *PCUNZWCH;
#if _WIN32_WINNT >= 0x0600
typedef CONST WCHAR *LPCWCHAR, *PCWCHAR;
typedef CONST WCHAR UNALIGNED *LPCUWCHAR, *PCUWCHAR;
typedef unsigned long UCSCHAR;
#define UCSCHAR_INVALID_CHARACTER (0xffffffff)
#define MIN_UCSCHAR (0)
#define MAX_UCSCHAR (0x0010FFFF)
typedef UCSCHAR *PUCSCHAR;
typedef const UCSCHAR *PCUCSCHAR;
typedef UCSCHAR *PUCSSTR;
typedef UCSCHAR UNALIGNED *PUUCSSTR;
typedef const UCSCHAR *PCUCSSTR;
typedef const UCSCHAR UNALIGNED *PCUUCSSTR;
typedef UCSCHAR UNALIGNED *PUUCSCHAR;
typedef const UCSCHAR UNALIGNED *PCUUCSCHAR;
#endif
typedef CHAR *PCHAR, *LPCH, *PCH;
typedef CONST CHAR *LPCCH, *PCCH;
typedef CHAR *NPSTR, *LPSTR, *PSTR;
typedef PSTR *PZPSTR;
typedef CONST PSTR *PCZPSTR;
typedef CONST CHAR *LPCSTR, *PCSTR;
typedef PCSTR *PZPCSTR;
typedef CHAR *PZZSTR;
typedef CONST CHAR *PCZZSTR;
typedef CHAR *PNZCH;
typedef CONST CHAR *PCNZCH;
#ifdef  UNICODE
#ifndef _TCHAR_DEFINED
typedef WCHAR TCHAR, *PTCHAR;
typedef WCHAR TBYTE, *PTBYTE;
#define _TCHAR_DEFINED
#endif
typedef LPWCH LPTCH, PTCH;
typedef LPCWCH LPCTCH, PCTCH;
typedef LPWSTR PTSTR, LPTSTR;
typedef LPCWSTR PCTSTR, LPCTSTR;
typedef LPUWSTR PUTSTR, LPUTSTR;
typedef LPCUWSTR PCUTSTR, LPCUTSTR;
//typedef LPWSTR LP;
typedef PZZWSTR PZZTSTR;
typedef PCZZWSTR PCZZTSTR;
typedef PUZZWSTR PUZZTSTR;
typedef PCUZZWSTR PCUZZTSTR;
typedef PNZWCH PNZTCH;
typedef PCNZWCH PCNZTCH;
typedef PUNZWCH PUNZTCH;
typedef PCUNZWCH PCUNZTCH;
#define __TEXT(quote) L##quote
#else
#ifndef _TCHAR_DEFINED
typedef char TCHAR, *PTCHAR;
typedef unsigned char TBYTE, *PTBYTE;
#define _TCHAR_DEFINED
#endif
typedef LPCH LPTCH, PTCH;
typedef LPCCH LPCTCH, PCTCH;
typedef LPSTR PTSTR, LPTSTR, PUTSTR, LPUTSTR;
typedef LPCSTR PCTSTR, LPCTSTR, PCUTSTR, LPCUTSTR;
typedef PZZSTR PZZTSTR, PUZZTSTR;
typedef PCZZSTR PCZZTSTR, PCUZZTSTR;
typedef PNZCH PNZTCH, PUNZTCH;
typedef PCNZCH PCNZTCH, PCUNZTCH;
#define __TEXT(quote) quote
#endif
#define TEXT(quote) __TEXT(quote)
typedef SHORT *PSHORT;
typedef LONG *PLONG;
#define ALL_PROCESSOR_GROUPS        0xffff
typedef struct _PROCESSOR_NUMBER
{
	WORD Group;
	BYTE Number;
	BYTE Reserved;
} PROCESSOR_NUMBER, *PPROCESSOR_NUMBER;
typedef struct _GROUP_AFFINITY
{
	KAFFINITY Mask;
	WORD Group;
	WORD Reserved[3];
} GROUP_AFFINITY, *PGROUP_AFFINITY;
#ifdef STRICT
typedef void *HANDLE;
#define DECLARE_HANDLE(name) struct name##__{int unused;}; typedef struct name##__ *name
#else
typedef PVOID HANDLE;
#define DECLARE_HANDLE(name) typedef HANDLE name
#endif
typedef HANDLE *PHANDLE;
typedef BYTE FCHAR;
typedef WORD FSHORT;
typedef DWORD FLONG;
#ifndef _HRESULT_DEFINED
#define _HRESULT_DEFINED
typedef long HRESULT;
#endif
#define EXTERN_C    extern
#if defined(_WIN32) || defined(_MPPC_)
#ifdef _68K_
#define STDMETHODCALLTYPE       __cdecl
#else
#define STDMETHODCALLTYPE       __stdcall
#endif
#define STDMETHODVCALLTYPE			__cdecl
#define STDAPICALLTYPE				__stdcall
#define STDAPIVCALLTYPE				__cdecl
#else
#define STDMETHODCALLTYPE			__export __stdcall
#define STDMETHODVCALLTYPE			__export __cdecl
#define STDAPICALLTYPE				__export __stdcall
#define STDAPIVCALLTYPE				__export __cdecl
#endif
#define STDAPI						extern HRESULT STDAPICALLTYPE
#define STDAPI_(type)				extern type STDAPICALLTYPE
#define STDMETHODIMP				HRESULT STDMETHODCALLTYPE
#define STDMETHODIMP_(type)			type STDMETHODCALLTYPE
#define STDOVERRIDEMETHODIMP        __override STDMETHODIMP
#define STDOVERRIDEMETHODIMP_(type) __override STDMETHODIMP_(type)
#define IFACEMETHODIMP				__override STDMETHODIMP
#define IFACEMETHODIMP_(type)		__override STDMETHODIMP_(type)
#define STDAPIV						extern HRESULT STDAPIVCALLTYPE
#define STDAPIV_(type)				extern type STDAPIVCALLTYPE
#define STDMETHODIMPV				HRESULT STDMETHODVCALLTYPE
#define STDMETHODIMPV_(type)		type STDMETHODVCALLTYPE
#define STDOVERRIDEMETHODIMPV        __override STDMETHODIMPV
#define STDOVERRIDEMETHODIMPV_(type) __override STDMETHODIMPV_(type)
#define IFACEMETHODIMPV				__override STDMETHODIMPV
#define IFACEMETHODIMPV_(type)		__override STDMETHODIMPV_(type)
typedef char CCHAR;
typedef DWORD LCID;
typedef PDWORD PLCID;
typedef WORD LANGID;
#define APPLICATION_ERROR_MASK       0x20000000
#define ERROR_SEVERITY_SUCCESS       0x00000000
#define ERROR_SEVERITY_INFORMATIONAL 0x40000000
#define ERROR_SEVERITY_WARNING       0x80000000
#define ERROR_SEVERITY_ERROR         0xC0000000
#if defined(_M_IA64)
__declspec(align(16))
#endif
typedef struct _FLOAT128
{
	__int64 LowPart;
	__int64 HighPart;
} FLOAT128;
typedef FLOAT128 *PFLOAT128;
#define _ULONGLONG_
#if ((!defined(_M_IX86) || (defined(_INTEGRAL_MAX_BITS) && _INTEGRAL_MAX_BITS >= 64)))
typedef __int64 LONGLONG;
typedef unsigned __int64 ULONGLONG;
#define MAXLONGLONG		(0x7fffffffffffffff)
#else
typedef double LONGLONG;
typedef double ULONGLONG;
#endif
typedef LONGLONG *PLONGLONG;
typedef ULONGLONG *PULONGLONG;
typedef LONGLONG USN;
typedef union _LARGE_INTEGER
{
	struct
	{
		DWORD LowPart;
		LONG HighPart;
	} DUMMYSTRUCTNAME;
	struct
	{
		DWORD LowPart;
		LONG HighPart;
	} u;
	LONGLONG QuadPart;
} LARGE_INTEGER;
typedef LARGE_INTEGER *PLARGE_INTEGER;
typedef union _ULARGE_INTEGER
{
	struct
	{
		DWORD LowPart;
		DWORD HighPart;
	} DUMMYSTRUCTNAME;
	struct
	{
		DWORD LowPart;
		DWORD HighPart;
	} u;
	ULONGLONG QuadPart;
} ULARGE_INTEGER;
typedef ULARGE_INTEGER *PULARGE_INTEGER;
typedef struct _LUID
{
	DWORD LowPart;
	LONG HighPart;
} LUID, *PLUID;
#define _DWORDLONG_
typedef ULONGLONG DWORDLONG;
typedef DWORDLONG *PDWORDLONG;
#if defined(RC_INVOKED) || defined(_M_CEE_PURE) || defined(_68K_) || defined(_MPPC_) || defined(_M_IA64) || defined(_M_AMD64)
#define Int32x32To64(a, b)  (((__int64)((long)(a))) * ((__int64)((long)(b))))
#define UInt32x32To64(a, b) (((unsigned __int64)((unsigned int)(a))) * ((unsigned __int64)((unsigned int)(b))))
#define Int64ShllMod32(a, b) (((unsigned __int64)(a)) << (b))
#define Int64ShraMod32(a, b) (((__int64)(a)) >> (b))
#define Int64ShrlMod32(a, b) (((unsigned __int64)(a)) >> (b))
#elif defined(_M_IX86)
#define Int32x32To64(a, b)  ((__int64)(((__int64)((long)(a))) * ((long)(b))))
#define UInt32x32To64(a, b) ((unsigned __int64)(((unsigned __int64)((unsigned int)(a))) * ((unsigned int)(b))))
ULONGLONG NTAPI Int64ShllMod32(ULONGLONG Value, DWORD ShiftCount);
LONGLONG NTAPI Int64ShraMod32(LONGLONG Value, DWORD ShiftCount);
ULONGLONG NTAPI Int64ShrlMod32(ULONGLONG Value, DWORD ShiftCount);
__inline ULONGLONG NTAPI Int64ShllMod32(ULONGLONG Value, DWORD ShiftCount)
{
	__asm
	{
		mov ecx, ShiftCount
		mov eax, dword ptr[Value]
		mov edx, dword ptr[Value + 4]
		shld edx, eax, cl
		shl eax, cl
	}
}
__inline LONGLONG NTAPI Int64ShraMod32(LONGLONG Value, DWORD ShiftCount)
{
	__asm
	{
		mov ecx, ShiftCount
		mov eax, dword ptr[Value]
		mov edx, dword ptr[Value + 4]
		shrd eax, edx, cl
		sar edx, cl
	}
}
__inline ULONGLONG NTAPI Int64ShrlMod32(ULONGLONG Value, DWORD ShiftCount)
{
	__asm
	{
		mov ecx, ShiftCount
		mov eax, dword ptr[Value]
		mov edx, dword ptr[Value + 4]
		shrd eax, edx, cl
		shr edx, cl
	}
}
#else
#error Must define a target architecture.
#endif
//#if defined(_M_AMD64)
//#define RotateLeft8 _rotl8
//#define RotateLeft16 _rotl16
//#define RotateRight8 _rotr8
//#define RotateRight16 _rotr16
//unsigned char __cdecl _rotl8(unsigned char Value, unsigned char Shift);
//unsigned short __cdecl _rotl16(unsigned short Value, unsigned char Shift);
//unsigned char __cdecl _rotr8(unsigned char Value, unsigned char Shift);
//unsigned short __cdecl _rotr16(unsigned short Value, unsigned char Shift);
//#pragma intrinsic(_rotl8)
//#pragma intrinsic(_rotl16)
//#pragma intrinsic(_rotr8)
//#pragma intrinsic(_rotr16)
//#endif
#if __POCC__ >= 290
#define RotateLeft32 _rotl
//#define RotateLeft64 _rotl64
#define RotateRight32 _rotr
//#define RotateRight64 _rotr64
unsigned int __cdecl _rotl(unsigned int Value, int Shift);
//unsigned __int64 __cdecl _rotl64(unsigned __int64 Value, int Shift);
unsigned int __cdecl _rotr(unsigned int Value, int Shift);
//unsigned __int64 __cdecl _rotr64(unsigned __int64 Value, int Shift);
#pragma intrinsic(_rotl)
//#pragma intrinsic(_rotl64)
#pragma intrinsic(_rotr)
//#pragma intrinsic(_rotr64)
#endif
#define ANSI_NULL ((CHAR)0)
#define UNICODE_NULL ((WCHAR)0)
#define UNICODE_STRING_MAX_BYTES ((WORD  ) 65534)
#define UNICODE_STRING_MAX_CHARS (32767)
typedef BYTE BOOLEAN;
typedef BOOLEAN *PBOOLEAN;
typedef struct _LIST_ENTRY
{
	struct _LIST_ENTRY *Flink;
	struct _LIST_ENTRY *Blink;
} LIST_ENTRY, *PLIST_ENTRY, *RESTRICTED_POINTER PRLIST_ENTRY;
typedef struct _SINGLE_LIST_ENTRY
{
	struct _SINGLE_LIST_ENTRY *Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY;
typedef struct LIST_ENTRY32
{
	DWORD Flink;
	DWORD Blink;
} LIST_ENTRY32;
typedef LIST_ENTRY32 *PLIST_ENTRY32;
typedef struct LIST_ENTRY64
{
	ULONGLONG Flink;
	ULONGLONG Blink;
} LIST_ENTRY64;
typedef LIST_ENTRY64 *PLIST_ENTRY64;
#include <guiddef.h>
#ifndef __OBJECTID_DEFINED
#define __OBJECTID_DEFINED
typedef struct _OBJECTID
{
	GUID Lineage;
	DWORD Uniquifier;
} OBJECTID;
#endif
#define MINCHAR     0x80
#define MAXCHAR     0x7f
#define MINSHORT    0x8000
#define MAXSHORT    0x7fff
#define MINLONG     0x80000000
#define MAXLONG     0x7fffffff
#define MAXBYTE     0xff
#define MAXWORD     0xffff
#define MAXDWORD    0xffffffff
#define FIELD_OFFSET(type, field)    ((LONG)(LONG_PTR)&(((type *)0)->field))
#define RTL_FIELD_SIZE(type, field) (sizeof(((type *)0)->field))
#define RTL_SIZEOF_THROUGH_FIELD(type, field) (FIELD_OFFSET(type, field) + RTL_FIELD_SIZE(type, field))
#define RTL_CONTAINS_FIELD(Struct, Size, Field) ( (((PCHAR)(&(Struct)->Field)) + sizeof((Struct)->Field)) <= (((PCHAR)(Struct))+(Size)) )
#define RTL_NUMBER_OF_V1(A) (sizeof(A)/sizeof((A)[0]))
#define RTL_NUMBER_OF_V2(A) RTL_NUMBER_OF_V1(A)
#ifdef ENABLE_RTL_NUMBER_OF_V2
#define RTL_NUMBER_OF(A) RTL_NUMBER_OF_V2(A)
#else
#define RTL_NUMBER_OF(A) RTL_NUMBER_OF_V1(A)
#endif
#define ARRAYSIZE(A)    RTL_NUMBER_OF_V2(A)
#define _ARRAYSIZE(A)   RTL_NUMBER_OF_V1(A)
#define RTL_FIELD_TYPE(type, field) (((type*)0)->field)
#define RTL_NUMBER_OF_FIELD(type, field) (RTL_NUMBER_OF(RTL_FIELD_TYPE(type, field)))
#define RTL_PADDING_BETWEEN_FIELDS(T, F1, F2) ((FIELD_OFFSET(T, F2) > FIELD_OFFSET(T, F1)) ? (FIELD_OFFSET(T, F2) - FIELD_OFFSET(T, F1) - RTL_FIELD_SIZE(T, F1)) : (FIELD_OFFSET(T, F1) - FIELD_OFFSET(T, F2) - RTL_FIELD_SIZE(T, F2)))
#define RTL_CONST_CAST(type) (type)
#define RTL_BITS_OF(sizeOfArg) (sizeof(sizeOfArg) * 8)
#define RTL_BITS_OF_FIELD(type, field) (RTL_BITS_OF(RTL_FIELD_TYPE(type, field)))
#define CONTAINING_RECORD(address, type, field) ((type *)(       (PCHAR)(address) -       (ULONG_PTR)(&((type *)0)->field)))
#include <excpt.h>
typedef EXCEPTION_DISPOSITION NTAPI EXCEPTION_ROUTINE(struct _EXCEPTION_RECORD *ExceptionRecord, PVOID EstablisherFrame, struct _CONTEXT *ContextRecord, PVOID DispatcherContext);
typedef EXCEPTION_ROUTINE *PEXCEPTION_ROUTINE;
#define VER_SERVER_NT								0x80000000
#define VER_WORKSTATION_NT							0x40000000
#define VER_SUITE_SMALLBUSINESS						0x00000001
#define VER_SUITE_ENTERPRISE						0x00000002
#define VER_SUITE_BACKOFFICE						0x00000004
#define VER_SUITE_COMMUNICATIONS					0x00000008
#define VER_SUITE_TERMINAL							0x00000010
#define VER_SUITE_SMALLBUSINESS_RESTRICTED			0x00000020
#define VER_SUITE_EMBEDDEDNT						0x00000040
#define VER_SUITE_DATACENTER						0x00000080
#define VER_SUITE_SINGLEUSERTS						0x00000100
#define VER_SUITE_PERSONAL							0x00000200
#define VER_SUITE_BLADE								0x00000400
#define VER_SUITE_EMBEDDED_RESTRICTED				0x00000800
#define VER_SUITE_SECURITY_APPLIANCE				0x00001000
#define VER_SUITE_STORAGE_SERVER					0x00002000
#define VER_SUITE_COMPUTE_SERVER					0x00004000
#define VER_SUITE_WH_SERVER							0x00008000
#define PRODUCT_UNDEFINED                           0x00000000
#define PRODUCT_ULTIMATE                            0x00000001
#define PRODUCT_HOME_BASIC                          0x00000002
#define PRODUCT_HOME_PREMIUM                        0x00000003
#define PRODUCT_ENTERPRISE                          0x00000004
#define PRODUCT_HOME_BASIC_N                        0x00000005
#define PRODUCT_BUSINESS                            0x00000006
#define PRODUCT_STANDARD_SERVER                     0x00000007
#define PRODUCT_DATACENTER_SERVER                   0x00000008
#define PRODUCT_SMALLBUSINESS_SERVER                0x00000009
#define PRODUCT_ENTERPRISE_SERVER                   0x0000000A
#define PRODUCT_STARTER                             0x0000000B
#define PRODUCT_DATACENTER_SERVER_CORE              0x0000000C
#define PRODUCT_STANDARD_SERVER_CORE                0x0000000D
#define PRODUCT_ENTERPRISE_SERVER_CORE              0x0000000E
#define PRODUCT_ENTERPRISE_SERVER_IA64              0x0000000F
#define PRODUCT_BUSINESS_N                          0x00000010
#define PRODUCT_WEB_SERVER                          0x00000011
#define PRODUCT_CLUSTER_SERVER                      0x00000012
#define PRODUCT_HOME_SERVER                         0x00000013
#define PRODUCT_STORAGE_EXPRESS_SERVER              0x00000014
#define PRODUCT_STORAGE_STANDARD_SERVER             0x00000015
#define PRODUCT_STORAGE_WORKGROUP_SERVER            0x00000016
#define PRODUCT_STORAGE_ENTERPRISE_SERVER           0x00000017
#define PRODUCT_SERVER_FOR_SMALLBUSINESS            0x00000018
#define PRODUCT_SMALLBUSINESS_SERVER_PREMIUM        0x00000019
#define PRODUCT_HOME_PREMIUM_N                      0x0000001A
#define PRODUCT_ENTERPRISE_N                        0x0000001B
#define PRODUCT_ULTIMATE_N                          0x0000001C
#define PRODUCT_WEB_SERVER_CORE                     0x0000001D
#define PRODUCT_MEDIUMBUSINESS_SERVER_MANAGEMENT    0x0000001E
#define PRODUCT_MEDIUMBUSINESS_SERVER_SECURITY      0x0000001F
#define PRODUCT_MEDIUMBUSINESS_SERVER_MESSAGING     0x00000020
#define PRODUCT_SERVER_FOUNDATION                   0x00000021
#define PRODUCT_HOME_PREMIUM_SERVER                 0x00000022
#define PRODUCT_SERVER_FOR_SMALLBUSINESS_V          0x00000023
#define PRODUCT_STANDARD_SERVER_V                   0x00000024
#define PRODUCT_DATACENTER_SERVER_V                 0x00000025
#define PRODUCT_ENTERPRISE_SERVER_V                 0x00000026
#define PRODUCT_DATACENTER_SERVER_CORE_V            0x00000027
#define PRODUCT_STANDARD_SERVER_CORE_V              0x00000028
#define PRODUCT_ENTERPRISE_SERVER_CORE_V            0x00000029
#define PRODUCT_HYPERV                              0x0000002A
#define PRODUCT_STORAGE_EXPRESS_SERVER_CORE         0x0000002B
#define PRODUCT_STORAGE_STANDARD_SERVER_CORE        0x0000002C
#define PRODUCT_STORAGE_WORKGROUP_SERVER_CORE       0x0000002D
#define PRODUCT_STORAGE_ENTERPRISE_SERVER_CORE      0x0000002E
#define PRODUCT_STARTER_N                           0x0000002F
#define PRODUCT_PROFESSIONAL                        0x00000030
#define PRODUCT_PROFESSIONAL_N                      0x00000031
#define PRODUCT_SB_SOLUTION_SERVER                  0x00000032
#define PRODUCT_SERVER_FOR_SB_SOLUTIONS             0x00000033
#define PRODUCT_STANDARD_SERVER_SOLUTIONS           0x00000034
#define PRODUCT_STANDARD_SERVER_SOLUTIONS_CORE      0x00000035
#define PRODUCT_SB_SOLUTION_SERVER_EM               0x00000036
#define PRODUCT_SERVER_FOR_SB_SOLUTIONS_EM          0x00000037
#define PRODUCT_SOLUTION_EMBEDDEDSERVER             0x00000038
#define PRODUCT_SOLUTION_EMBEDDEDSERVER_CORE        0x00000039
#define PRODUCT_SMALLBUSINESS_SERVER_PREMIUM_CORE   0x0000003F
#define PRODUCT_ESSENTIALBUSINESS_SERVER_MGMT       0x0000003B
#define PRODUCT_ESSENTIALBUSINESS_SERVER_ADDL       0x0000003C
#define PRODUCT_ESSENTIALBUSINESS_SERVER_MGMTSVC    0x0000003D
#define PRODUCT_ESSENTIALBUSINESS_SERVER_ADDLSVC    0x0000003E
#define PRODUCT_CLUSTER_SERVER_V                    0x00000040
#define PRODUCT_EMBEDDED                            0x00000041
#define PRODUCT_STARTER_E                           0x00000042
#define PRODUCT_HOME_BASIC_E                        0x00000043
#define PRODUCT_HOME_PREMIUM_E                      0x00000044
#define PRODUCT_PROFESSIONAL_E                      0x00000045
#define PRODUCT_ENTERPRISE_E                        0x00000046
#define PRODUCT_ULTIMATE_E                          0x00000047
#define PRODUCT_UNLICENSED                          0xABCDABCD
#include <sdkddkver.h>
#define LANG_NEUTRAL                     0x00
#define LANG_INVARIANT                   0x7f
#define LANG_AFRIKAANS                   0x36
#define LANG_ALBANIAN                    0x1c
#define LANG_ALSATIAN                    0x84
#define LANG_AMHARIC                     0x5e
#define LANG_ARABIC                      0x01
#define LANG_ARMENIAN                    0x2b
#define LANG_ASSAMESE                    0x4d
#define LANG_AZERI                       0x2c
#define LANG_BASHKIR                     0x6d
#define LANG_BASQUE                      0x2d
#define LANG_BELARUSIAN                  0x23
#define LANG_BENGALI                     0x45
#define LANG_BRETON                      0x7e
#define LANG_BOSNIAN                     0x1a
#define LANG_BOSNIAN_NEUTRAL           0x781a
#define LANG_BULGARIAN                   0x02
#define LANG_CATALAN                     0x03
#define LANG_CHINESE                     0x04
#define LANG_CHINESE_SIMPLIFIED          0x04
#define LANG_CHINESE_TRADITIONAL       0x7c04
#define LANG_CORSICAN                    0x83
#define LANG_CROATIAN                    0x1a
#define LANG_CZECH                       0x05
#define LANG_DANISH                      0x06
#define LANG_DARI                        0x8c
#define LANG_DIVEHI                      0x65
#define LANG_DUTCH                       0x13
#define LANG_ENGLISH                     0x09
#define LANG_ESTONIAN                    0x25
#define LANG_FAEROESE                    0x38
#define LANG_FARSI                       0x29
#define LANG_FILIPINO                    0x64
#define LANG_FINNISH                     0x0b
#define LANG_FRENCH                      0x0c
#define LANG_FRISIAN                     0x62
#define LANG_GALICIAN                    0x56
#define LANG_GEORGIAN                    0x37
#define LANG_GERMAN                      0x07
#define LANG_GREEK                       0x08
#define LANG_GREENLANDIC                 0x6f
#define LANG_GUJARATI                    0x47
#define LANG_HAUSA                       0x68
#define LANG_HEBREW                      0x0d
#define LANG_HINDI                       0x39
#define LANG_HUNGARIAN                   0x0e
#define LANG_ICELANDIC                   0x0f
#define LANG_IGBO                        0x70
#define LANG_INDONESIAN                  0x21
#define LANG_INUKTITUT                   0x5d
#define LANG_IRISH                       0x3c
#define LANG_ITALIAN                     0x10
#define LANG_JAPANESE                    0x11
#define LANG_KANNADA                     0x4b
#define LANG_KASHMIRI                    0x60
#define LANG_KAZAK                       0x3f
#define LANG_KHMER                       0x53
#define LANG_KICHE                       0x86
#define LANG_KINYARWANDA                 0x87
#define LANG_KONKANI                     0x57
#define LANG_KOREAN                      0x12
#define LANG_KYRGYZ                      0x40
#define LANG_LAO                         0x54
#define LANG_LATVIAN                     0x26
#define LANG_LITHUANIAN                  0x27
#define LANG_LOWER_SORBIAN               0x2e
#define LANG_LUXEMBOURGISH               0x6e
#define LANG_MACEDONIAN                  0x2f
#define LANG_MALAY                       0x3e
#define LANG_MALAYALAM                   0x4c
#define LANG_MALTESE                     0x3a
#define LANG_MANIPURI                    0x58
#define LANG_MAORI                       0x81
#define LANG_MAPUDUNGUN                  0x7a
#define LANG_MARATHI                     0x4e
#define LANG_MOHAWK                      0x7c
#define LANG_MONGOLIAN                   0x50
#define LANG_NEPALI                      0x61
#define LANG_NORWEGIAN                   0x14
#define LANG_OCCITAN                     0x82
#define LANG_ORIYA                       0x48
#define LANG_PASHTO                      0x63
#define LANG_PERSIAN                     0x29
#define LANG_POLISH                      0x15
#define LANG_PORTUGUESE                  0x16
#define LANG_PUNJABI                     0x46
#define LANG_QUECHUA                     0x6b
#define LANG_ROMANIAN                    0x18
#define LANG_ROMANSH                     0x17
#define LANG_RUSSIAN                     0x19
#define LANG_SAMI                        0x3b
#define LANG_SANSKRIT                    0x4f
#define LANG_SCOTTISH_GAELIC             0x91
#define LANG_SERBIAN                     0x1a
#define LANG_SERBIAN_NEUTRAL           0x7c1a
#define LANG_SINDHI                      0x59
#define LANG_SINHALESE                   0x5b
#define LANG_SLOVAK                      0x1b
#define LANG_SLOVENIAN                   0x24
#define LANG_SOTHO                       0x6c
#define LANG_SPANISH                     0x0a
#define LANG_SWAHILI                     0x41
#define LANG_SWEDISH                     0x1d
#define LANG_SYRIAC                      0x5a
#define LANG_TAJIK                       0x28
#define LANG_TAMAZIGHT                   0x5f
#define LANG_TAMIL                       0x49
#define LANG_TATAR                       0x44
#define LANG_TELUGU                      0x4a
#define LANG_THAI                        0x1e
#define LANG_TIBETAN                     0x51
#define LANG_TIGRIGNA                    0x73
#define LANG_TSWANA                      0x32
#define LANG_TURKISH                     0x1f
#define LANG_TURKMEN                     0x42
#define LANG_UIGHUR                      0x80
#define LANG_UKRAINIAN                   0x22
#define LANG_UPPER_SORBIAN               0x2e
#define LANG_URDU                        0x20
#define LANG_UZBEK                       0x43
#define LANG_VIETNAMESE                  0x2a
#define LANG_WELSH                       0x52
#define LANG_WOLOF                       0x88
#define LANG_XHOSA                       0x34
#define LANG_YAKUT                       0x85
#define LANG_YI                          0x78
#define LANG_YORUBA                      0x6a
#define LANG_ZULU                        0x35
#define SUBLANG_NEUTRAL                             0x00
#define SUBLANG_DEFAULT                             0x01
#define SUBLANG_SYS_DEFAULT                         0x02
#define SUBLANG_CUSTOM_DEFAULT                      0x03
#define SUBLANG_CUSTOM_UNSPECIFIED                  0x04
#define SUBLANG_UI_CUSTOM_DEFAULT                   0x05
#define SUBLANG_AFRIKAANS_SOUTH_AFRICA              0x01
#define SUBLANG_ALBANIAN_ALBANIA                    0x01
#define SUBLANG_ALSATIAN_FRANCE                     0x01
#define SUBLANG_AMHARIC_ETHIOPIA                    0x01
#define SUBLANG_ARABIC_SAUDI_ARABIA                 0x01
#define SUBLANG_ARABIC_IRAQ                         0x02
#define SUBLANG_ARABIC_EGYPT                        0x03
#define SUBLANG_ARABIC_LIBYA                        0x04
#define SUBLANG_ARABIC_ALGERIA                      0x05
#define SUBLANG_ARABIC_MOROCCO                      0x06
#define SUBLANG_ARABIC_TUNISIA                      0x07
#define SUBLANG_ARABIC_OMAN                         0x08
#define SUBLANG_ARABIC_YEMEN                        0x09
#define SUBLANG_ARABIC_SYRIA                        0x0a
#define SUBLANG_ARABIC_JORDAN                       0x0b
#define SUBLANG_ARABIC_LEBANON                      0x0c
#define SUBLANG_ARABIC_KUWAIT                       0x0d
#define SUBLANG_ARABIC_UAE                          0x0e
#define SUBLANG_ARABIC_BAHRAIN                      0x0f
#define SUBLANG_ARABIC_QATAR                        0x10
#define SUBLANG_ARMENIAN_ARMENIA                    0x01
#define SUBLANG_ASSAMESE_INDIA                      0x01
#define SUBLANG_AZERI_LATIN                         0x01
#define SUBLANG_AZERI_CYRILLIC                      0x02
#define SUBLANG_BASHKIR_RUSSIA                      0x01
#define SUBLANG_BASQUE_BASQUE                       0x01
#define SUBLANG_BELARUSIAN_BELARUS                  0x01
#define SUBLANG_BENGALI_INDIA                       0x01
#define SUBLANG_BENGALI_BANGLADESH                  0x02
#define SUBLANG_BOSNIAN_BOSNIA_HERZEGOVINA_LATIN    0x05
#define SUBLANG_BOSNIAN_BOSNIA_HERZEGOVINA_CYRILLIC 0x08
#define SUBLANG_BRETON_FRANCE                       0x01
#define SUBLANG_BULGARIAN_BULGARIA                  0x01
#define SUBLANG_CATALAN_CATALAN                     0x01
#define SUBLANG_CHINESE_TRADITIONAL                 0x01
#define SUBLANG_CHINESE_SIMPLIFIED                  0x02
#define SUBLANG_CHINESE_HONGKONG                    0x03
#define SUBLANG_CHINESE_SINGAPORE                   0x04
#define SUBLANG_CHINESE_MACAU                       0x05
#define SUBLANG_CORSICAN_FRANCE                     0x01
#define SUBLANG_CZECH_CZECH_REPUBLIC                0x01
#define SUBLANG_CROATIAN_CROATIA                    0x01
#define SUBLANG_CROATIAN_BOSNIA_HERZEGOVINA_LATIN   0x04
#define SUBLANG_DANISH_DENMARK                      0x01
#define SUBLANG_DARI_AFGHANISTAN                    0x01
#define SUBLANG_DIVEHI_MALDIVES                     0x01
#define SUBLANG_DUTCH                               0x01
#define SUBLANG_DUTCH_BELGIAN                       0x02
#define SUBLANG_ENGLISH_US                          0x01
#define SUBLANG_ENGLISH_UK                          0x02
#define SUBLANG_ENGLISH_AUS                         0x03
#define SUBLANG_ENGLISH_CAN                         0x04
#define SUBLANG_ENGLISH_NZ                          0x05
#define SUBLANG_ENGLISH_EIRE                        0x06
#define SUBLANG_ENGLISH_SOUTH_AFRICA                0x07
#define SUBLANG_ENGLISH_JAMAICA                     0x08
#define SUBLANG_ENGLISH_CARIBBEAN                   0x09
#define SUBLANG_ENGLISH_BELIZE                      0x0a
#define SUBLANG_ENGLISH_TRINIDAD                    0x0b
#define SUBLANG_ENGLISH_ZIMBABWE                    0x0c
#define SUBLANG_ENGLISH_PHILIPPINES                 0x0d
#define SUBLANG_ENGLISH_INDIA                       0x10
#define SUBLANG_ENGLISH_MALAYSIA                    0x11
#define SUBLANG_ENGLISH_SINGAPORE                   0x12
#define SUBLANG_ESTONIAN_ESTONIA                    0x01
#define SUBLANG_FAEROESE_FAROE_ISLANDS              0x01
#define SUBLANG_FILIPINO_PHILIPPINES                0x01
#define SUBLANG_FINNISH_FINLAND                     0x01
#define SUBLANG_FRENCH                              0x01
#define SUBLANG_FRENCH_BELGIAN                      0x02
#define SUBLANG_FRENCH_CANADIAN                     0x03
#define SUBLANG_FRENCH_SWISS                        0x04
#define SUBLANG_FRENCH_LUXEMBOURG                   0x05
#define SUBLANG_FRENCH_MONACO                       0x06
#define SUBLANG_FRISIAN_NETHERLANDS                 0x01
#define SUBLANG_GALICIAN_GALICIAN                   0x01
#define SUBLANG_GEORGIAN_GEORGIA                    0x01
#define SUBLANG_GERMAN                              0x01
#define SUBLANG_GERMAN_SWISS                        0x02
#define SUBLANG_GERMAN_AUSTRIAN                     0x03
#define SUBLANG_GERMAN_LUXEMBOURG                   0x04
#define SUBLANG_GERMAN_LIECHTENSTEIN                0x05
#define SUBLANG_GREEK_GREECE                        0x01
#define SUBLANG_GREENLANDIC_GREENLAND               0x01
#define SUBLANG_GUJARATI_INDIA                      0x01
#define SUBLANG_HAUSA_NIGERIA_LATIN                 0x01
#define SUBLANG_HEBREW_ISRAEL                       0x01
#define SUBLANG_HINDI_INDIA                         0x01
#define SUBLANG_HUNGARIAN_HUNGARY                   0x01
#define SUBLANG_ICELANDIC_ICELAND                   0x01
#define SUBLANG_IGBO_NIGERIA                        0x01
#define SUBLANG_INDONESIAN_INDONESIA                0x01
#define SUBLANG_INUKTITUT_CANADA                    0x01
#define SUBLANG_INUKTITUT_CANADA_LATIN              0x02
#define SUBLANG_IRISH_IRELAND                       0x02
#define SUBLANG_ITALIAN                             0x01
#define SUBLANG_ITALIAN_SWISS                       0x02
#define SUBLANG_JAPANESE_JAPAN                      0x01
#define SUBLANG_KANNADA_INDIA                       0x01
#define SUBLANG_KASHMIRI_SASIA                      0x02
#define SUBLANG_KASHMIRI_INDIA                      0x02
#define SUBLANG_KAZAK_KAZAKHSTAN                    0x01
#define SUBLANG_KHMER_CAMBODIA                      0x01
#define SUBLANG_KICHE_GUATEMALA                     0x01
#define SUBLANG_KINYARWANDA_RWANDA                  0x01
#define SUBLANG_KONKANI_INDIA                       0x01
#define SUBLANG_KOREAN                              0x01
#define SUBLANG_KYRGYZ_KYRGYZSTAN                   0x01
#define SUBLANG_LAO_LAO                             0x01
#define SUBLANG_LATVIAN_LATVIA                      0x01
#define SUBLANG_LITHUANIAN                          0x01
#define SUBLANG_LOWER_SORBIAN_GERMANY               0x02
#define SUBLANG_LUXEMBOURGISH_LUXEMBOURG            0x01
#define SUBLANG_MACEDONIAN_MACEDONIA                0x01
#define SUBLANG_MALAY_MALAYSIA                      0x01
#define SUBLANG_MALAY_BRUNEI_DARUSSALAM             0x02
#define SUBLANG_MALAYALAM_INDIA                     0x01
#define SUBLANG_MALTESE_MALTA                       0x01
#define SUBLANG_MAORI_NEW_ZEALAND                   0x01
#define SUBLANG_MAPUDUNGUN_CHILE                    0x01
#define SUBLANG_MARATHI_INDIA                       0x01
#define SUBLANG_MOHAWK_MOHAWK                       0x01
#define SUBLANG_MONGOLIAN_CYRILLIC_MONGOLIA         0x01
#define SUBLANG_MONGOLIAN_PRC                       0x02
#define SUBLANG_NEPALI_INDIA                        0x02
#define SUBLANG_NEPALI_NEPAL                        0x01
#define SUBLANG_NORWEGIAN_BOKMAL                    0x01
#define SUBLANG_NORWEGIAN_NYNORSK                   0x02
#define SUBLANG_OCCITAN_FRANCE                      0x01
#define SUBLANG_ORIYA_INDIA                         0x01
#define SUBLANG_PASHTO_AFGHANISTAN                  0x01
#define SUBLANG_PERSIAN_IRAN                        0x01
#define SUBLANG_POLISH_POLAND                       0x01
#define SUBLANG_PORTUGUESE                          0x02
#define SUBLANG_PORTUGUESE_BRAZILIAN                0x01
#define SUBLANG_PUNJABI_INDIA                       0x01
#define SUBLANG_QUECHUA_BOLIVIA                     0x01
#define SUBLANG_QUECHUA_ECUADOR                     0x02
#define SUBLANG_QUECHUA_PERU                        0x03
#define SUBLANG_ROMANIAN_ROMANIA                    0x01
#define SUBLANG_ROMANSH_SWITZERLAND                 0x01
#define SUBLANG_RUSSIAN_RUSSIA                      0x01
#define SUBLANG_SAMI_NORTHERN_NORWAY                0x01
#define SUBLANG_SAMI_NORTHERN_SWEDEN                0x02
#define SUBLANG_SAMI_NORTHERN_FINLAND               0x03
#define SUBLANG_SAMI_LULE_NORWAY                    0x04
#define SUBLANG_SAMI_LULE_SWEDEN                    0x05
#define SUBLANG_SAMI_SOUTHERN_NORWAY                0x06
#define SUBLANG_SAMI_SOUTHERN_SWEDEN                0x07
#define SUBLANG_SAMI_SKOLT_FINLAND                  0x08
#define SUBLANG_SAMI_INARI_FINLAND                  0x09
#define SUBLANG_SANSKRIT_INDIA                      0x01
#define SUBLANG_SCOTTISH_GAELIC                     0x01
#define SUBLANG_SERBIAN_BOSNIA_HERZEGOVINA_LATIN    0x06
#define SUBLANG_SERBIAN_BOSNIA_HERZEGOVINA_CYRILLIC 0x07
#define SUBLANG_SERBIAN_MONTENEGRO_LATIN            0x0b
#define SUBLANG_SERBIAN_MONTENEGRO_CYRILLIC         0x0c
#define SUBLANG_SERBIAN_SERBIA_LATIN                0x09
#define SUBLANG_SERBIAN_SERBIA_CYRILLIC             0x0a
#define SUBLANG_SERBIAN_CROATIA                     0x01
#define SUBLANG_SERBIAN_LATIN                       0x02
#define SUBLANG_SERBIAN_CYRILLIC                    0x03
#define SUBLANG_SINDHI_INDIA                        0x01
#define SUBLANG_SINDHI_PAKISTAN                     0x02
#define SUBLANG_SINDHI_AFGHANISTAN                  0x02
#define SUBLANG_SINHALESE_SRI_LANKA                 0x01
#define SUBLANG_SOTHO_NORTHERN_SOUTH_AFRICA         0x01
#define SUBLANG_SLOVAK_SLOVAKIA                     0x01
#define SUBLANG_SLOVENIAN_SLOVENIA                  0x01
#define SUBLANG_SPANISH                             0x01
#define SUBLANG_SPANISH_MEXICAN                     0x02
#define SUBLANG_SPANISH_MODERN                      0x03
#define SUBLANG_SPANISH_GUATEMALA                   0x04
#define SUBLANG_SPANISH_COSTA_RICA                  0x05
#define SUBLANG_SPANISH_PANAMA                      0x06
#define SUBLANG_SPANISH_DOMINICAN_REPUBLIC          0x07
#define SUBLANG_SPANISH_VENEZUELA                   0x08
#define SUBLANG_SPANISH_COLOMBIA                    0x09
#define SUBLANG_SPANISH_PERU                        0x0a
#define SUBLANG_SPANISH_ARGENTINA                   0x0b
#define SUBLANG_SPANISH_ECUADOR                     0x0c
#define SUBLANG_SPANISH_CHILE                       0x0d
#define SUBLANG_SPANISH_URUGUAY                     0x0e
#define SUBLANG_SPANISH_PARAGUAY                    0x0f
#define SUBLANG_SPANISH_BOLIVIA                     0x10
#define SUBLANG_SPANISH_EL_SALVADOR                 0x11
#define SUBLANG_SPANISH_HONDURAS                    0x12
#define SUBLANG_SPANISH_NICARAGUA                   0x13
#define SUBLANG_SPANISH_PUERTO_RICO                 0x14
#define SUBLANG_SPANISH_US                          0x15
#define SUBLANG_SWAHILI_KENYA                       0x01
#define SUBLANG_SWEDISH                             0x01
#define SUBLANG_SWEDISH_FINLAND                     0x02
#define SUBLANG_SYRIAC_SYRIA                        0x01
#define SUBLANG_TAJIK_TAJIKISTAN                    0x01
#define SUBLANG_TAMAZIGHT_ALGERIA_LATIN             0x02
#define SUBLANG_TAMIL_INDIA                         0x01
#define SUBLANG_TATAR_RUSSIA                        0x01
#define SUBLANG_TELUGU_INDIA                        0x01
#define SUBLANG_THAI_THAILAND                       0x01
#define SUBLANG_TIBETAN_PRC                         0x01
#define SUBLANG_TIGRIGNA_ERITREA                    0x02
#define SUBLANG_TSWANA_SOUTH_AFRICA                 0x01
#define SUBLANG_TURKISH_TURKEY                      0x01
#define SUBLANG_TURKMEN_TURKMENISTAN                0x01
#define SUBLANG_UIGHUR_PRC                          0x01
#define SUBLANG_UKRAINIAN_UKRAINE                   0x01
#define SUBLANG_UPPER_SORBIAN_GERMANY               0x01
#define SUBLANG_URDU_PAKISTAN                       0x01
#define SUBLANG_URDU_INDIA                          0x02
#define SUBLANG_UZBEK_LATIN                         0x01
#define SUBLANG_UZBEK_CYRILLIC                      0x02
#define SUBLANG_VIETNAMESE_VIETNAM                  0x01
#define SUBLANG_WELSH_UNITED_KINGDOM                0x01
#define SUBLANG_WOLOF_SENEGAL                       0x01
#define SUBLANG_XHOSA_SOUTH_AFRICA                  0x01
#define SUBLANG_YAKUT_RUSSIA                        0x01
#define SUBLANG_YI_PRC                              0x01
#define SUBLANG_YORUBA_NIGERIA                      0x01
#define SUBLANG_ZULU_SOUTH_AFRICA                   0x01
#define SORT_DEFAULT                     0x0
#define SORT_INVARIANT_MATH              0x1
#define SORT_JAPANESE_XJIS               0x0
#define SORT_JAPANESE_UNICODE            0x1
#define SORT_JAPANESE_RADICALSTROKE      0x4
#define SORT_CHINESE_BIG5                0x0
#define SORT_CHINESE_PRCP                0x0
#define SORT_CHINESE_UNICODE             0x1
#define SORT_CHINESE_PRC                 0x2
#define SORT_CHINESE_BOPOMOFO            0x3
#define SORT_CHINESE_RADICALSTROKE       0x4
#define SORT_KOREAN_KSC                  0x0
#define SORT_KOREAN_UNICODE              0x1
#define SORT_GERMAN_PHONE_BOOK           0x1
#define SORT_HUNGARIAN_DEFAULT           0x0
#define SORT_HUNGARIAN_TECHNICAL         0x1
#define SORT_GEORGIAN_TRADITIONAL        0x0
#define SORT_GEORGIAN_MODERN             0x1
#define MAKELANGID(p, s)       ((((WORD  )(s)) << 10) | (WORD  )(p))
#define PRIMARYLANGID(lgid)    ((WORD  )(lgid) & 0x3ff)
#define SUBLANGID(lgid)        ((WORD  )(lgid) >> 10)
#define NLS_VALID_LOCALE_MASK  0x000fffff
#define MAKELCID(lgid, srtid)  ((DWORD)((((DWORD)((WORD  )(srtid))) << 16) | ((DWORD)((WORD  )(lgid)))))
#define MAKESORTLCID(lgid, srtid, ver) ((DWORD)((MAKELCID(lgid, srtid)) | (((DWORD)((WORD  )(ver))) << 20)))
#define LANGIDFROMLCID(lcid)   ((WORD  )(lcid))
#define SORTIDFROMLCID(lcid)   ((WORD  )((((DWORD)(lcid)) >> 16) & 0xf))
#define SORTVERSIONFROMLCID(lcid)  ((WORD  )((((DWORD)(lcid)) >> 20) & 0xf))
#define LOCALE_NAME_MAX_LENGTH   85
#define LANG_SYSTEM_DEFAULT    (MAKELANGID(LANG_NEUTRAL, SUBLANG_SYS_DEFAULT))
#define LANG_USER_DEFAULT      (MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT))
#define LOCALE_SYSTEM_DEFAULT  (MAKELCID(LANG_SYSTEM_DEFAULT, SORT_DEFAULT))
#define LOCALE_USER_DEFAULT    (MAKELCID(LANG_USER_DEFAULT, SORT_DEFAULT))
#define LOCALE_CUSTOM_DEFAULT (MAKELCID(MAKELANGID(LANG_NEUTRAL, SUBLANG_CUSTOM_DEFAULT), SORT_DEFAULT))
#define LOCALE_CUSTOM_UNSPECIFIED (MAKELCID(MAKELANGID(LANG_NEUTRAL, SUBLANG_CUSTOM_UNSPECIFIED), SORT_DEFAULT))
#define LOCALE_CUSTOM_UI_DEFAULT (MAKELCID(MAKELANGID(LANG_NEUTRAL, SUBLANG_UI_CUSTOM_DEFAULT), SORT_DEFAULT))
#define LOCALE_NEUTRAL (MAKELCID(MAKELANGID(LANG_NEUTRAL, SUBLANG_NEUTRAL), SORT_DEFAULT))
#define LOCALE_INVARIANT (MAKELCID(MAKELANGID(LANG_INVARIANT, SUBLANG_NEUTRAL), SORT_DEFAULT))
#if ! defined(lint)
#define UNREFERENCED_PARAMETER(P)          (P)
#define DBG_UNREFERENCED_PARAMETER(P)      (P)
#define DBG_UNREFERENCED_LOCAL_VARIABLE(V) (V)
#else
#define UNREFERENCED_PARAMETER(P) { (P) = (P); }
#define DBG_UNREFERENCED_PARAMETER(P) { (P) = (P); }
#define DBG_UNREFERENCED_LOCAL_VARIABLE(V) { (V) = (V); }
#endif
#if (__POCC__ > 600)
#define DEFAULT_UNREACHABLE default: __assume(0)
#else
#define DEFAULT_UNREACHABLE
#endif
#define DEFINE_ENUM_FLAG_OPERATORS(ENUMTYPE)
#define COMPILETIME_OR_2FLAGS(a,b)          ((UINT)(a)|(UINT)(b))
#define COMPILETIME_OR_3FLAGS(a,b,c)        ((UINT)(a)|(UINT)(b)|(UINT)(c))
#define COMPILETIME_OR_4FLAGS(a,b,c,d)      ((UINT)(a)|(UINT)(b)|(UINT)(c)|(UINT)(d))
#define COMPILETIME_OR_5FLAGS(a,b,c,d,e)    ((UINT)(a)|(UINT)(b)|(UINT)(c)|(UINT)(d)|(UINT)(e))
#ifndef WIN32_NO_STATUS
#define STATUS_WAIT_0                    ((DWORD   )0x00000000L)
#define STATUS_ABANDONED_WAIT_0          ((DWORD   )0x00000080L)
#define STATUS_USER_APC                  ((DWORD   )0x000000C0L)
#define STATUS_TIMEOUT                   ((DWORD   )0x00000102L)
#define STATUS_PENDING                   ((DWORD   )0x00000103L)
#define DBG_EXCEPTION_HANDLED            ((DWORD   )0x00010001L)
#define DBG_CONTINUE                     ((DWORD   )0x00010002L)
#define STATUS_SEGMENT_NOTIFICATION      ((DWORD   )0x40000005L)
#define DBG_TERMINATE_THREAD             ((DWORD   )0x40010003L)
#define DBG_TERMINATE_PROCESS            ((DWORD   )0x40010004L)
#define DBG_CONTROL_C                    ((DWORD   )0x40010005L)
#define DBG_PRINTEXCEPTION_C             ((DWORD   )0x40010006L)
#define DBG_RIPEXCEPTION                 ((DWORD   )0x40010007L)
#define DBG_CONTROL_BREAK                ((DWORD   )0x40010008L)
#define DBG_COMMAND_EXCEPTION            ((DWORD   )0x40010009L)
#define STATUS_GUARD_PAGE_VIOLATION      ((DWORD   )0x80000001L)
#define STATUS_DATATYPE_MISALIGNMENT     ((DWORD   )0x80000002L)
#define STATUS_BREAKPOINT                ((DWORD   )0x80000003L)
#define STATUS_SINGLE_STEP               ((DWORD   )0x80000004L)
#define STATUS_LONGJUMP                  ((DWORD   )0x80000026L)
#define STATUS_UNWIND_CONSOLIDATE        ((DWORD   )0x80000029L)
#define DBG_EXCEPTION_NOT_HANDLED        ((DWORD   )0x80010001L)
#define STATUS_ACCESS_VIOLATION          ((DWORD   )0xC0000005L)
#define STATUS_IN_PAGE_ERROR             ((DWORD   )0xC0000006L)
#define STATUS_INVALID_HANDLE            ((DWORD   )0xC0000008L)
#define STATUS_INVALID_PARAMETER         ((DWORD   )0xC000000DL)
#define STATUS_NO_MEMORY                 ((DWORD   )0xC0000017L)
#define STATUS_ILLEGAL_INSTRUCTION       ((DWORD   )0xC000001DL)
#define STATUS_NONCONTINUABLE_EXCEPTION  ((DWORD   )0xC0000025L)
#define STATUS_INVALID_DISPOSITION       ((DWORD   )0xC0000026L)
#define STATUS_ARRAY_BOUNDS_EXCEEDED     ((DWORD   )0xC000008CL)
#define STATUS_FLOAT_DENORMAL_OPERAND    ((DWORD   )0xC000008DL)
#define STATUS_FLOAT_DIVIDE_BY_ZERO      ((DWORD   )0xC000008EL)
#define STATUS_FLOAT_INEXACT_RESULT      ((DWORD   )0xC000008FL)
#define STATUS_FLOAT_INVALID_OPERATION   ((DWORD   )0xC0000090L)
#define STATUS_FLOAT_OVERFLOW            ((DWORD   )0xC0000091L)
#define STATUS_FLOAT_STACK_CHECK         ((DWORD   )0xC0000092L)
#define STATUS_FLOAT_UNDERFLOW           ((DWORD   )0xC0000093L)
#define STATUS_INTEGER_DIVIDE_BY_ZERO    ((DWORD   )0xC0000094L)
#define STATUS_INTEGER_OVERFLOW          ((DWORD   )0xC0000095L)
#define STATUS_PRIVILEGED_INSTRUCTION    ((DWORD   )0xC0000096L)
#define STATUS_STACK_OVERFLOW            ((DWORD   )0xC00000FDL)
#define STATUS_DLL_NOT_FOUND             ((DWORD   )0xC0000135L)
#define STATUS_ORDINAL_NOT_FOUND         ((DWORD   )0xC0000138L)
#define STATUS_ENTRYPOINT_NOT_FOUND      ((DWORD   )0xC0000139L)
#define STATUS_CONTROL_C_EXIT            ((DWORD   )0xC000013AL)
#define STATUS_DLL_INIT_FAILED           ((DWORD   )0xC0000142L)
#define STATUS_FLOAT_MULTIPLE_FAULTS     ((DWORD   )0xC00002B4L)
#define STATUS_FLOAT_MULTIPLE_TRAPS      ((DWORD   )0xC00002B5L)
#define STATUS_REG_NAT_CONSUMPTION       ((DWORD   )0xC00002C9L)
#define STATUS_STACK_BUFFER_OVERRUN      ((DWORD   )0xC0000409L)
#define STATUS_INVALID_CRUNTIME_PARAMETER ((DWORD   )0xC0000417L)
#define STATUS_ASSERTION_FAILURE         ((DWORD   )0xC0000420L)
#if defined(STATUS_SUCCESS) || (_WIN32_WINNT > 0x0500) || (_WIN32_FUSION >= 0x0100)
#define STATUS_SXS_EARLY_DEACTIVATION    ((DWORD   )0xC015000FL)
#define STATUS_SXS_INVALID_DEACTIVATION  ((DWORD   )0xC0150010L)
#endif
#endif
#define MAXIMUM_WAIT_OBJECTS 64
#define MAXIMUM_SUSPEND_COUNT MAXCHAR
typedef ULONG_PTR KSPIN_LOCK;
typedef KSPIN_LOCK *PKSPIN_LOCK;
typedef struct DECLSPEC_ALIGN (16) _M128A
{
	ULONGLONG Low;
	LONGLONG High;
} M128A, *PM128A;
typedef struct DECLSPEC_ALIGN (16) _XSAVE_FORMAT
{
	WORD ControlWord;
	WORD StatusWord;
	BYTE TagWord;
	BYTE Reserved1;
	WORD ErrorOpcode;
	DWORD ErrorOffset;
	WORD ErrorSelector;
	WORD Reserved2;
	DWORD DataOffset;
	WORD DataSelector;
	WORD Reserved3;
	DWORD MxCsr;
	DWORD MxCsr_Mask;
	M128A FloatRegisters[8];
#if defined(_WIN64)
	M128A XmmRegisters[16];
	BYTE Reserved4[96];
#else
	M128A XmmRegisters[8];
	BYTE Reserved4[192];
	DWORD StackControl[7];
	DWORD Cr0NpxState;
#endif
} XSAVE_FORMAT, *PXSAVE_FORMAT;
typedef struct DECLSPEC_ALIGN (8) _XSAVE_AREA_HEADER
{
	DWORD64 Mask;
	DWORD64 Reserved[7];
} XSAVE_AREA_HEADER, *PXSAVE_AREA_HEADER;
typedef struct DECLSPEC_ALIGN (16) _XSAVE_AREA
{
	XSAVE_FORMAT LegacyState;
	XSAVE_AREA_HEADER Header;
} XSAVE_AREA, *PXSAVE_AREA;
typedef struct _XSTATE_CONTEXT
{
	DWORD64 Mask;
	DWORD Length;
	DWORD Reserved1;
	PXSAVE_AREA Area;
#if defined(_X86_)
	DWORD Reserved2;
#endif
	PVOID Buffer;
#if defined(_X86_)
	DWORD Reserved3;
#endif
} XSTATE_CONTEXT, *PXSTATE_CONTEXT;
#define XSAVE_ALIGN                 64
#define MINIMAL_XSTATE_AREA_LENGTH  sizeof(XSAVE_AREA)
typedef struct _CONTEXT_CHUNK
{
	LONG Offset;
	DWORD Length;
} CONTEXT_CHUNK, *PCONTEXT_CHUNK;
typedef struct _CONTEXT_EX
{
	CONTEXT_CHUNK All;
	CONTEXT_CHUNK Legacy;
	CONTEXT_CHUNK XState;
} CONTEXT_EX, *PCONTEXT_EX;
#define CONTEXT_EX_LENGTH								ALIGN_UP_BY(sizeof(CONTEXT_EX), STACK_ALIGN)
#define RTL_CONTEXT_EX_OFFSET(ContextEx, Chunk)         ((ContextEx)->Chunk.Offset)
#define RTL_CONTEXT_EX_LENGTH(ContextEx, Chunk)         ((ContextEx)->Chunk.Length)
#define RTL_CONTEXT_EX_CHUNK(Base, Layout, Chunk)       ((PVOID)((PCHAR)(Base) + RTL_CONTEXT_EX_OFFSET(Layout, Chunk)))
#define RTL_CONTEXT_OFFSET(Context, Chunk)              RTL_CONTEXT_EX_OFFSET((PCONTEXT_EX)(Context + 1), Chunk)
#define RTL_CONTEXT_LENGTH(Context, Chunk)              RTL_CONTEXT_EX_LENGTH((PCONTEXT_EX)(Context + 1), Chunk)
#define RTL_CONTEXT_CHUNK(Context, Chunk)               RTL_CONTEXT_EX_CHUNK((PCONTEXT_EX)(Context + 1), (PCONTEXT_EX)(Context + 1), Chunk)
C_ASSERT((sizeof(XSAVE_FORMAT) & (XSAVE_ALIGN - 1)) == 0);
C_ASSERT((FIELD_OFFSET(XSAVE_AREA, Header) & (XSAVE_ALIGN - 1)) == 0);
C_ASSERT(MINIMAL_XSTATE_AREA_LENGTH == 512 + 64);
#ifdef _AMD64_
#if defined(_M_AMD64)
#define BitTest _bittest
#define BitTestAndComplement _bittestandcomplement
#define BitTestAndSet _bittestandset
#define BitTestAndReset _bittestandreset
#define InterlockedBitTestAndSet _interlockedbittestandset
#define InterlockedBitTestAndReset _interlockedbittestandreset
#define BitTest64 _bittest64
#define BitTestAndComplement64 _bittestandcomplement64
#define BitTestAndSet64 _bittestandset64
#define BitTestAndReset64 _bittestandreset64
#define InterlockedBitTestAndSet64 _interlockedbittestandset64
#define InterlockedBitTestAndReset64 _interlockedbittestandreset64
BOOLEAN __cdecl _bittest(LONG const *Base, LONG Offset);
BOOLEAN __cdecl _bittestandcomplement(LONG *Base, LONG Offset);
BOOLEAN __cdecl _bittestandset(LONG *Base, LONG Offset);
BOOLEAN __cdecl _bittestandreset(LONG *Base, LONG Offset);
BOOLEAN __cdecl _interlockedbittestandset(LONG *Base, LONG Offset);
BOOLEAN __cdecl _interlockedbittestandreset(LONG *Base, LONG Offset);
BOOLEAN __cdecl _bittest64(LONG64 const *Base, LONG64 Offset);
BOOLEAN __cdecl _bittestandcomplement64(LONG64 *Base, LONG64 Offset);
BOOLEAN __cdecl _bittestandset64(LONG64 *Base, LONG64 Offset);
BOOLEAN __cdecl _bittestandreset64(LONG64 *Base, LONG64 Offset);
BOOLEAN __cdecl _interlockedbittestandset64(LONG64 *Base, LONG64 Offset);
BOOLEAN __cdecl _interlockedbittestandreset64(LONG64 *Base, LONG64 Offset);
#pragma intrinsic(_bittest)
#pragma intrinsic(_bittestandcomplement)
#pragma intrinsic(_bittestandset)
#pragma intrinsic(_bittestandreset)
#pragma intrinsic(_interlockedbittestandset)
#pragma intrinsic(_interlockedbittestandreset)
#pragma intrinsic(_bittest64)
#pragma intrinsic(_bittestandcomplement64)
#pragma intrinsic(_bittestandset64)
#pragma intrinsic(_bittestandreset64)
#pragma intrinsic(_interlockedbittestandset64)
#pragma intrinsic(_interlockedbittestandreset64)
#define BitScanForward _BitScanForward
#define BitScanReverse _BitScanReverse
#define BitScanForward64 _BitScanForward64
#define BitScanReverse64 _BitScanReverse64
BOOLEAN __cdecl _BitScanForward(DWORD *Index, DWORD Mask);
BOOLEAN __cdecl _BitScanReverse(DWORD *Index, DWORD Mask);
BOOLEAN __cdecl _BitScanForward64(DWORD *Index, DWORD64 Mask);
BOOLEAN __cdecl _BitScanReverse64(DWORD *Index, DWORD64 Mask);
#pragma intrinsic(_BitScanForward)
#pragma intrinsic(_BitScanReverse)
#pragma intrinsic(_BitScanForward64)
#pragma intrinsic(_BitScanReverse64)
LONG __cdecl _InterlockedExchange(LONG volatile *, LONG);
LONG __cdecl _InterlockedExchangeAdd(LONG volatile *, LONG);
LONG __cdecl _InterlockedIncrement(LONG volatile *);
LONG __cdecl _InterlockedDecrement(LONG volatile *);
LONG64 __cdecl _InterlockedExchange64(LONG64 volatile *, LONG64);
LONG64 __cdecl _InterlockedExchangeAdd64(LONG64 volatile *, LONG64);
LONG64 __cdecl _InterlockedIncrement64(LONG64 volatile *);
LONG64 __cdecl _InterlockedDecrement64(LONG64 volatile *);
LONG __cdecl _InterlockedCompareExchange(LONG volatile *, LONG, LONG);
LONG64 __cdecl _InterlockedCompareExchange64(volatile LONG64 *, LONG64, LONG64);
#define InterlockedIncrement16 _InterlockedIncrement16
#define InterlockedDecrement16 _InterlockedDecrement16
#define InterlockedCompareExchange16 _InterlockedCompareExchange16
#define InterlockedAnd _InterlockedAnd
#define InterlockedAndAcquire _InterlockedAnd
#define InterlockedAndRelease _InterlockedAnd
#define InterlockedOr _InterlockedOr
#define InterlockedOrAcquire _InterlockedOr
#define InterlockedOrRelease _InterlockedOr
#define InterlockedXor _InterlockedXor
#define InterlockedIncrement _InterlockedIncrement
#define InterlockedIncrementAcquire InterlockedIncrement
#define InterlockedIncrementRelease InterlockedIncrement
#define InterlockedDecrement _InterlockedDecrement
#define InterlockedDecrementAcquire InterlockedDecrement
#define InterlockedDecrementRelease InterlockedDecrement
#define InterlockedAdd _InterlockedAdd
#define InterlockedExchange _InterlockedExchange
#define InterlockedExchangeAdd _InterlockedExchangeAdd
#define InterlockedCompareExchange _InterlockedCompareExchange
#define InterlockedCompareExchangeAcquire InterlockedCompareExchange
#define InterlockedCompareExchangeRelease InterlockedCompareExchange
#define InterlockedAnd64 _InterlockedAnd64
#define InterlockedAnd64Acquire _InterlockedAnd64
#define InterlockedAnd64Release _InterlockedAnd64
#define InterlockedAndAffinity InterlockedAnd64
#define InterlockedOr64 _InterlockedOr64
#define InterlockedOr64Acquire _InterlockedOr64
#define InterlockedOr64Release _InterlockedOr64
#define InterlockedOrAffinity InterlockedOr64
#define InterlockedXor64 _InterlockedXor64
#define InterlockedIncrement64 _InterlockedIncrement64
#define InterlockedDecrement64 _InterlockedDecrement64
#define InterlockedAdd64 _InterlockedAdd64
#define InterlockedExchange64 _InterlockedExchange64
#define InterlockedExchangeAcquire64 InterlockedExchange64
#define InterlockedExchangeAdd64 _InterlockedExchangeAdd64
#define InterlockedCompareExchange64 _InterlockedCompareExchange64
#define InterlockedCompareExchangeAcquire64 InterlockedCompareExchange64
#define InterlockedCompareExchangeRelease64 InterlockedCompareExchange64
#define InterlockedExchangePointer _InterlockedExchangePointer
#define InterlockedCompareExchangePointer _InterlockedCompareExchangePointer
#define InterlockedCompareExchangePointerAcquire _InterlockedCompareExchangePointer
#define InterlockedCompareExchangePointerRelease _InterlockedCompareExchangePointer
#define InterlockedExchangeAddSizeT(a, b) InterlockedExchangeAdd64((LONG64 *)a, b)
#define InterlockedIncrementSizeT(a) InterlockedIncrement64((LONG64 *)a)
#define InterlockedDecrementSizeT(a) InterlockedDecrement64((LONG64 *)a)
/*
SHORT  __cdecl InterlockedIncrement16(SHORT volatile *Addend);
SHORT  __cdecl InterlockedDecrement16(SHORT volatile *Addend);
SHORT  __cdecl InterlockedCompareExchange16(SHORT volatile *Destination, SHORT ExChange, SHORT Comperand);
LONG   __cdecl InterlockedAnd(LONG volatile *Destination, LONG Value);
LONG   __cdecl InterlockedOr(LONG volatile *Destination, LONG Value);
LONG   __cdecl InterlockedXor(LONG volatile *Destination, LONG Value);
LONG64 __cdecl InterlockedAnd64(LONG64 volatile *Destination, LONG64 Value);
LONG64 __cdecl InterlockedOr64(LONG64 volatile *Destination, LONG64 Value);
LONG64 __cdecl InterlockedXor64(LONG64 volatile *Destination, LONG64 Value);
LONG   __cdecl InterlockedIncrement(LONG volatile *Addend);
LONG   __cdecl InterlockedDecrement(LONG volatile *Addend);
LONG   __cdecl InterlockedExchange(LONG volatile *Target, LONG Value);
LONG   __cdecl InterlockedExchangeAdd(LONG volatile *Addend, LONG Value);
*/
#if !defined(_X86AMD64_)
__forceinline LONG InterlockedAdd(LONG volatile *Addend, LONG Value)
{
	return InterlockedExchangeAdd(Addend, Value) + Value;
}
#endif
/*
LONG   __cdecl InterlockedCompareExchange(LONG volatile *Destination, LONG ExChange, LONG Comperand);
LONG64 __cdecl InterlockedIncrement64(LONG64 volatile *Addend);
LONG64 __cdecl InterlockedDecrement64(LONG64 volatile *Addend);
LONG64 __cdecl InterlockedExchange64(LONG64 volatile *Target, LONG64 Value);
LONG64 __cdecl InterlockedExchangeAdd64(LONG64 volatile *Addend, LONG64 Value);
*/
#if !defined(_X86AMD64_)
__forceinline LONG64 InterlockedAdd64(LONG64 volatile *Addend, LONG64 Value)
{
	return InterlockedExchangeAdd64(Addend, Value) + Value;
}
#endif
/*
LONG64 __cdecl InterlockedCompareExchange64(LONG64 volatile *Destination, LONG64 ExChange, LONG64 Comperand);
PVOID  __cdecl InterlockedCompareExchangePointer(PVOID volatile *Destination, PVOID Exchange, PVOID Comperand);
PVOID  __cdecl InterlockedExchangePointer(PVOID volatile *Target, PVOID Value);
#pragma intrinsic(_InterlockedIncrement16)
#pragma intrinsic(_InterlockedDecrement16)
#pragma intrinsic(_InterlockedCompareExchange16)
#pragma intrinsic(_InterlockedAnd)
#pragma intrinsic(_InterlockedOr)
#pragma intrinsic(_InterlockedXor)
*/
#pragma intrinsic(_InterlockedIncrement)
#pragma intrinsic(_InterlockedDecrement)
#pragma intrinsic(_InterlockedExchange)
#pragma intrinsic(_InterlockedExchangeAdd)
#pragma intrinsic(_InterlockedCompareExchange)
/*
#pragma intrinsic(_InterlockedAnd64)
#pragma intrinsic(_InterlockedOr64)
#pragma intrinsic(_InterlockedXor64)
*/
#pragma intrinsic(_InterlockedIncrement64)
#pragma intrinsic(_InterlockedDecrement64)
#pragma intrinsic(_InterlockedExchange64)
#pragma intrinsic(_InterlockedExchangeAdd64)
#pragma intrinsic(_InterlockedCompareExchange64)
#pragma intrinsic(_InterlockedExchangePointer)
#pragma intrinsic(_InterlockedCompareExchangePointer)
#if __POCC__ >= 1500
#define InterlockedAnd8 _InterlockedAnd8
#define InterlockedOr8 _InterlockedOr8
#define InterlockedXor8 _InterlockedXor8
#define InterlockedAnd16 _InterlockedAnd16
#define InterlockedOr16 _InterlockedOr16
#define InterlockedXor16 _InterlockedXor16
char InterlockedAnd8(char volatile *Destination, char Value);
char InterlockedOr8(char volatile *Destination, char Value);
char InterlockedXor8(char volatile *Destination, char Value);
SHORT InterlockedAnd16(SHORT volatile *Destination, SHORT Value);
SHORT InterlockedOr16(SHORT volatile *Destination, SHORT Value);
SHORT InterlockedXor16(SHORT volatile *Destination, SHORT Value);
#pragma intrinsic (_InterlockedAnd8)
#pragma intrinsic (_InterlockedOr8)
#pragma intrinsic (_InterlockedXor8)
#pragma intrinsic (_InterlockedAnd16)
#pragma intrinsic (_InterlockedOr16)
#pragma intrinsic (_InterlockedXor16)
#endif
#define CacheLineFlush(Address) _mm_clflush(Address)
VOID _mm_clflush(VOID const *Address);
#pragma intrinsic(_mm_clflush)
#if __POCC__ >= 650
#pragma intrinsic(__memory_barrier)
#undef  _ReadWriteBarrier
#define _ReadWriteBarrier  __memory_barrier
#endif
#define LoadFence _mm_lfence
#define MemoryFence _mm_mfence
#define StoreFence _mm_sfence
//VOID __faststorefence(VOID);
VOID __cdecl _mm_lfence(VOID);
VOID __cdecl _mm_mfence(VOID);
VOID __cdecl _mm_sfence(VOID);
VOID __cdecl _mm_pause(VOID);
VOID __cdecl _mm_prefetch(CHAR *a, int sel);
//VOID _m_prefetchw(volatile CONST VOID *Source);
#define _MM_HINT_T0     1
#define _MM_HINT_T1     2
#define _MM_HINT_T2     3
#define _MM_HINT_NTA    0
//#pragma intrinsic(__faststorefence)
#pragma intrinsic(_mm_pause)
#pragma intrinsic(_mm_prefetch)
#pragma intrinsic(_mm_lfence)
#pragma intrinsic(_mm_mfence)
#pragma intrinsic(_mm_sfence)
//#pragma intrinsic(_m_prefetchw)
#define YieldProcessor _mm_pause
//#define MemoryBarrier __faststorefence
#define PreFetchCacheLine(l, a)  _mm_prefetch((CHAR CONST *) a, l)
//#define PrefetchForWrite(p) _m_prefetchw(p)
//#define ReadForWriteAccess(p) (_m_prefetchw(p), *(p))
#define PF_TEMPORAL_LEVEL_1 _MM_HINT_T0
#define PF_TEMPORAL_LEVEL_2 _MM_HINT_T1
#define PF_TEMPORAL_LEVEL_3 _MM_HINT_T2
#define PF_NON_TEMPORAL_LEVEL_ALL _MM_HINT_NTA
#define ReadMxCsr _mm_getcsr
#define WriteMxCsr _mm_setcsr
unsigned int __cdecl _mm_getcsr(VOID);
VOID __cdecl _mm_setcsr(unsigned int MxCsr);
#pragma intrinsic(_mm_getcsr)
#pragma intrinsic(_mm_setcsr)
#if __POCC__ >= 1500
VOID __int2c(VOID);
#pragma intrinsic(__int2c)
FORCEINLINE VOID DbgRaiseAssertionFailure(VOID) { __int2c(); }
#define GetCallersEflags()  __getcallerseflags()
unsigned __int32 __getcallerseflags(VOID);
#pragma intrinsic(__getcallerseflags)
#define GetSegmentLimit  __segmentlimit
DWORD __segmentlimit(DWORD);
#pragma intrinsic(__segmentlimit)
#define ReadPMC  __readpmc
DWORD64 __readpmc(DWORD);
#pragma intrinsic(__readpmc)
#endif
#define ReadTimeStampCounter() __rdtsc()
DWORD64 __cdecl __rdtsc(VOID);
#pragma intrinsic(__rdtsc)
VOID __cdecl __movsb(PBYTE Destination, BYTE const *Source, SIZE_T Count);
VOID __cdecl __movsw(PWORD Destination, WORD const *Source, SIZE_T Count);
VOID __cdecl __movsd(PDWORD Destination, DWORD const *Source, SIZE_T Count);
VOID __cdecl __movsq(PDWORD64 Destination, DWORD64 const *Source, SIZE_T Count);
#pragma intrinsic(__movsb)
#pragma intrinsic(__movsw)
#pragma intrinsic(__movsd)
#pragma intrinsic(__movsq)
VOID __cdecl __stosb(PBYTE Destination, BYTE Value, SIZE_T Count);
VOID __cdecl __stosw(PWORD Destination, WORD Value, SIZE_T Count);
VOID __cdecl __stosd(PDWORD Destination, DWORD Value, SIZE_T Count);
VOID __cdecl __stosq(PDWORD64 Destination, DWORD64 Value, SIZE_T Count);
#pragma intrinsic(__stosb)
#pragma intrinsic(__stosw)
#pragma intrinsic(__stosd)
#pragma intrinsic(__stosq)
#if __POCC__ >= 1500
#define MultiplyHigh __mulh
#define UnsignedMultiplyHigh __umulh
LONGLONG MultiplyHigh(LONG64 Multiplier, LONG64 Multiplicand);
ULONGLONG UnsignedMultiplyHigh(DWORD64 Multiplier, DWORD64 Multiplicand);
#pragma intrinsic(__mulh)
#pragma intrinsic(__umulh)
#define ShiftLeft128 __shiftleft128
#define ShiftRight128 __shiftright128
DWORD64 ShiftLeft128(DWORD64 LowPart, DWORD64 HighPart, BYTE Shift);
DWORD64 ShiftRight128(DWORD64 LowPart, DWORD64 HighPart, BYTE Shift);
#pragma intrinsic(__shiftleft128)
#pragma intrinsic(__shiftright128)
#define Multiply128 _mul128
LONG64 Multiply128(LONG64 Multiplier, LONG64 Multiplicand, LONG64 *HighProduct);
#pragma intrinsic(_mul128)
#ifndef UnsignedMultiply128
#define UnsignedMultiply128 _umul128
DWORD64 UnsignedMultiply128(DWORD64 Multiplier, DWORD64 Multiplicand, DWORD64 *HighProduct);
#pragma intrinsic(_umul128)
#endif
__forceinline LONG64 MultiplyExtract128(LONG64 Multiplier, LONG64 Multiplicand, BYTE Shift)
{
	LONG64 extractedProduct;
	LONG64 highProduct;
	LONG64 lowProduct;
	BOOLEAN negate;
	DWORD64 uhighProduct;
	DWORD64 ulowProduct;
	lowProduct = Multiply128(Multiplier, Multiplicand, &highProduct);
	negate = FALSE;
	uhighProduct = (DWORD64)highProduct;
	ulowProduct = (DWORD64)lowProduct;
	if (highProduct < 0)
	{
		negate = TRUE;
		uhighProduct = (DWORD64) (-highProduct);
		ulowProduct = (DWORD64) (-lowProduct);
		if (ulowProduct != 0)
		{
			uhighProduct -= 1;
		}
	}
	extractedProduct = (LONG64)ShiftRight128(ulowProduct, uhighProduct, Shift);
	if (negate != FALSE)
	{
		extractedProduct = -extractedProduct;
	}
	return extractedProduct;
}
__forceinline DWORD64 UnsignedMultiplyExtract128(DWORD64 Multiplier, DWORD64 Multiplicand, BYTE Shift)

{
DWORD64 extractedProduct;
DWORD64 highProduct;
DWORD64 lowProduct;
lowProduct = UnsignedMultiply128(Multiplier, Multiplicand, &highProduct);
extractedProduct = ShiftRight128(lowProduct, highProduct, Shift);
return extractedProduct;
}
#endif
BYTE __cdecl __readgsbyte(DWORD Offset);
WORD __cdecl __readgsword(DWORD Offset);
DWORD __cdecl __readgsdword(DWORD Offset);
DWORD64 __cdecl __readgsqword(DWORD Offset);
VOID __cdecl __writegsbyte(DWORD Offset, BYTE Data);
VOID __cdecl __writegsword(DWORD Offset, WORD Data);
VOID __cdecl __writegsdword(DWORD Offset, DWORD Data);
VOID __cdecl __writegsqword(DWORD Offset, DWORD64 Data);
#pragma intrinsic(__readgsbyte)
#pragma intrinsic(__readgsword)
#pragma intrinsic(__readgsdword)
#pragma intrinsic(__readgsqword)
#pragma intrinsic(__writegsbyte)
#pragma intrinsic(__writegsword)
#pragma intrinsic(__writegsdword)
#pragma intrinsic(__writegsqword)
VOID __incgsbyte(DWORD Offset);
VOID __addgsbyte(DWORD Offset, BYTE Value);
VOID __incgsword(DWORD Offset);
VOID __addgsword(DWORD Offset, WORD Value);
VOID __incgsdword(DWORD Offset);
VOID __addgsdword(DWORD Offset, DWORD Value);
VOID __incgsqword(DWORD Offset);
VOID __addgsqword(DWORD Offset, DWORD64 Value);
#if 0
#pragma intrinsic(__incgsbyte)
#pragma intrinsic(__addgsbyte)
#pragma intrinsic(__incgsword)
#pragma intrinsic(__addgsword)
#pragma intrinsic(__incgsdword)
#pragma intrinsic(__addgsdword)
#pragma intrinsic(__incgsqword)
#pragma intrinsic(__addgsqword)
#endif
#endif
#define EXCEPTION_READ_FAULT 0
#define EXCEPTION_WRITE_FAULT 1
#define EXCEPTION_EXECUTE_FAULT 8
#if !defined(RC_INVOKED)
#define CONTEXT_AMD64   0x100000
#define CONTEXT_CONTROL (CONTEXT_AMD64 | 0x1L)
#define CONTEXT_INTEGER (CONTEXT_AMD64 | 0x2L)
#define CONTEXT_SEGMENTS (CONTEXT_AMD64 | 0x4L)
#define CONTEXT_FLOATING_POINT  (CONTEXT_AMD64 | 0x8L)
#define CONTEXT_DEBUG_REGISTERS (CONTEXT_AMD64 | 0x10L)
#define CONTEXT_FULL (CONTEXT_CONTROL | CONTEXT_INTEGER | CONTEXT_FLOATING_POINT)
#define CONTEXT_ALL (CONTEXT_CONTROL | CONTEXT_INTEGER | CONTEXT_SEGMENTS | CONTEXT_FLOATING_POINT | CONTEXT_DEBUG_REGISTERS)
#define CONTEXT_XSTATE (CONTEXT_AMD64|0x40L)  /* 13-11-19: apparently 0x20 -> 0x40 */
#define CONTEXT_EXCEPTION_ACTIVE 0x8000000
#define CONTEXT_SERVICE_ACTIVE 0x10000000
#define CONTEXT_EXCEPTION_REQUEST 0x40000000
#define CONTEXT_EXCEPTION_REPORTING 0x80000000
#endif
#define INITIAL_MXCSR 0x1f80
#define INITIAL_FPCSR 0x027f
typedef XSAVE_FORMAT XMM_SAVE_AREA32, *PXMM_SAVE_AREA32;
typedef struct DECLSPEC_ALIGN (16) _CONTEXT
{
	DWORD64 P1Home;
	DWORD64 P2Home;
	DWORD64 P3Home;
	DWORD64 P4Home;
	DWORD64 P5Home;
	DWORD64 P6Home;
	DWORD ContextFlags;
	DWORD MxCsr;
	WORD SegCs;
	WORD SegDs;
	WORD SegEs;
	WORD SegFs;
	WORD SegGs;
	WORD SegSs;
	DWORD EFlags;
	DWORD64 Dr0;
	DWORD64 Dr1;
	DWORD64 Dr2;
	DWORD64 Dr3;
	DWORD64 Dr6;
	DWORD64 Dr7;
	DWORD64 Rax;
	DWORD64 Rcx;
	DWORD64 Rdx;
	DWORD64 Rbx;
	DWORD64 Rsp;
	DWORD64 Rbp;
	DWORD64 Rsi;
	DWORD64 Rdi;
	DWORD64 R8;
	DWORD64 R9;
	DWORD64 R10;
	DWORD64 R11;
	DWORD64 R12;
	DWORD64 R13;
	DWORD64 R14;
	DWORD64 R15;
	DWORD64 Rip;
	union
	{
		XMM_SAVE_AREA32 FltSave;
		struct
		{
			M128A Header[2];
			M128A Legacy[8];
			M128A Xmm0;
			M128A Xmm1;
			M128A Xmm2;
			M128A Xmm3;
			M128A Xmm4;
			M128A Xmm5;
			M128A Xmm6;
			M128A Xmm7;
			M128A Xmm8;
			M128A Xmm9;
			M128A Xmm10;
			M128A Xmm11;
			M128A Xmm12;
			M128A Xmm13;
			M128A Xmm14;
			M128A Xmm15;
		} DUMMYSTRUCTNAME;
	} DUMMYUNIONNAME;
	M128A VectorRegister[26];
	DWORD64 VectorControl;
	DWORD64 DebugControl;
	DWORD64 LastBranchToRip;
	DWORD64 LastBranchFromRip;
	DWORD64 LastExceptionToRip;
	DWORD64 LastExceptionFromRip;
}
CONTEXT, *PCONTEXT;
#define RUNTIME_FUNCTION_INDIRECT 0x1
typedef struct _RUNTIME_FUNCTION
{
	DWORD BeginAddress;
	DWORD EndAddress;
	DWORD UnwindData;
} RUNTIME_FUNCTION, *PRUNTIME_FUNCTION;
#define UNWIND_HISTORY_TABLE_SIZE 12
typedef struct _UNWIND_HISTORY_TABLE_ENTRY
{
	DWORD64 ImageBase;
	PRUNTIME_FUNCTION FunctionEntry;
} UNWIND_HISTORY_TABLE_ENTRY, *PUNWIND_HISTORY_TABLE_ENTRY;
typedef struct _UNWIND_HISTORY_TABLE
{
	DWORD Count;
	BYTE LocalHint;
	BYTE GlobalHint;
	BYTE Search;
	BYTE Once;
	DWORD64 LowAddress;
	DWORD64 HighAddress;
	UNWIND_HISTORY_TABLE_ENTRY Entry[UNWIND_HISTORY_TABLE_SIZE];
} UNWIND_HISTORY_TABLE, *PUNWIND_HISTORY_TABLE;
typedef PRUNTIME_FUNCTION GET_RUNTIME_FUNCTION_CALLBACK(DWORD64 ControlPc, PVOID Context);
typedef GET_RUNTIME_FUNCTION_CALLBACK *PGET_RUNTIME_FUNCTION_CALLBACK;
typedef DWORD OUT_OF_PROCESS_FUNCTION_TABLE_CALLBACK(HANDLE Process, PVOID TableAddress, PDWORD Entries, PRUNTIME_FUNCTION *Functions);
typedef OUT_OF_PROCESS_FUNCTION_TABLE_CALLBACK *POUT_OF_PROCESS_FUNCTION_TABLE_CALLBACK;
#define OUT_OF_PROCESS_FUNCTION_TABLE_CALLBACK_EXPORT_NAME "OutOfProcessFunctionTableCallback"
NTSYSAPI VOID __cdecl RtlRestoreContext(PCONTEXT ContextRecord, struct _EXCEPTION_RECORD *ExceptionRecord);
NTSYSAPI BOOLEAN __cdecl RtlAddFunctionTable(PRUNTIME_FUNCTION FunctionTable, DWORD EntryCount, DWORD64 BaseAddress);
NTSYSAPI PRUNTIME_FUNCTION NTAPI RtlLookupFunctionEntry(DWORD64 ControlPc, PDWORD64 ImageBase, PUNWIND_HISTORY_TABLE HistoryTable);
typedef struct _KNONVOLATILE_CONTEXT_POINTERS
{
	union
	{
		PM128A FloatingContext[16];
		struct
		{
			PM128A Xmm0;
			PM128A Xmm1;
			PM128A Xmm2;
			PM128A Xmm3;
			PM128A Xmm4;
			PM128A Xmm5;
			PM128A Xmm6;
			PM128A Xmm7;
			PM128A Xmm8;
			PM128A Xmm9;
			PM128A Xmm10;
			PM128A Xmm11;
			PM128A Xmm12;
			PM128A Xmm13;
			PM128A Xmm14;
			PM128A Xmm15;
		} DUMMYSTRUCTNAME;
	} DUMMYUNIONNAME;
	union
	{
		PDWORD64 IntegerContext[16];
		struct
		{
			PDWORD64 Rax;
			PDWORD64 Rcx;
			PDWORD64 Rdx;
			PDWORD64 Rbx;
			PDWORD64 Rsp;
			PDWORD64 Rbp;
			PDWORD64 Rsi;
			PDWORD64 Rdi;
			PDWORD64 R8;
			PDWORD64 R9;
			PDWORD64 R10;
			PDWORD64 R11;
			PDWORD64 R12;
			PDWORD64 R13;
			PDWORD64 R14;
			PDWORD64 R15;
		} DUMMYSTRUCTNAME;
	} DUMMYUNIONNAME2;
} KNONVOLATILE_CONTEXT_POINTERS, *PKNONVOLATILE_CONTEXT_POINTERS;
NTSYSAPI PEXCEPTION_ROUTINE NTAPI RtlVirtualUnwind(DWORD HandlerType, DWORD64 ImageBase, DWORD64 ControlPc, PRUNTIME_FUNCTION FunctionEntry, PCONTEXT ContextRecord, PVOID *HandlerData, PDWORD64 EstablisherFrame, PKNONVOLATILE_CONTEXT_POINTERS ContextPointers);
NTSYSAPI BOOLEAN __cdecl RtlInstallFunctionTableCallback(DWORD64 TableIdentifier, DWORD64 BaseAddress, DWORD Length, PGET_RUNTIME_FUNCTION_CALLBACK Callback, PVOID Context, PCWSTR OutOfProcessCallbackDll);
NTSYSAPI BOOLEAN __cdecl RtlDeleteFunctionTable(PRUNTIME_FUNCTION FunctionTable);
#endif
#ifdef _X86_
#ifdef _M_IX86
#pragma function(_enable)
#pragma function(_disable)
#endif
#if defined(_M_IX86) && !defined(RC_INVOKED)
#if (_MSC_FULL_VER >= 14000101)
#define BitTest _bittest
#define BitTestAndComplement _bittestandcomplement
#define BitTestAndSet _bittestandset
#define BitTestAndReset _bittestandreset
#define InterlockedBitTestAndSet _interlockedbittestandset
#define InterlockedBitTestAndReset _interlockedbittestandreset
BOOLEAN __cdecl _bittest(LONG const *Base, LONG Offset);
BOOLEAN __cdecl _bittestandcomplement(LONG *Base, LONG Offset);
BOOLEAN __cdecl _bittestandset(LONG *Base, LONG Offset);
BOOLEAN __cdecl _bittestandreset(LONG *Base, LONG Offset);
BOOLEAN __cdecl _interlockedbittestandset(LONG volatile *Base, LONG Offset);
BOOLEAN __cdecl _interlockedbittestandreset(LONG volatile *Base, LONG Offset);
#pragma intrinsic(_bittest)
#pragma intrinsic(_bittestandcomplement)
#pragma intrinsic(_bittestandset)
#pragma intrinsic(_bittestandreset)
#pragma intrinsic(_interlockedbittestandset)
#pragma intrinsic(_interlockedbittestandreset)
#define BitScanForward _BitScanForward
#define BitScanReverse _BitScanReverse
BOOLEAN __cdecl _BitScanForward(DWORD *Index, DWORD Mask);
BOOLEAN __cdecl _BitScanReverse(DWORD *Index, DWORD Mask);
#pragma intrinsic(_BitScanForward)
#pragma intrinsic(_BitScanReverse)
#else
FORCEINLINE BOOLEAN InterlockedBitTestAndSet(LONG volatile *Base, LONG Bit)
{
	__asm
	{
		mov eax, Bit
		mov ecx, Base
		lock bts[ecx], eax
		setc al
	};
}
FORCEINLINE BOOLEAN InterlockedBitTestAndReset(LONG volatile *Base, LONG Bit)
{
	__asm
	{
		mov eax, Bit
		mov ecx, Base
		lock btr[ecx], eax
		setc al
	};
}
#endif
#if (__POCC__ >= 1400)
#define InterlockedAnd16 _InterlockedAnd16
#define InterlockedCompareExchange16 _InterlockedCompareExchange16
#define InterlockedOr16 _InterlockedOr16
SHORT _InterlockedAnd16(SHORT volatile *Destination, SHORT Value);
SHORT _InterlockedCompareExchange16(SHORT volatile *Destination, SHORT ExChange, SHORT Comperand);
SHORT _InterlockedOr16(SHORT volatile *Destination, SHORT Value);
#pragma intrinsic(_InterlockedAnd16)
#pragma intrinsic(_InterlockedCompareExchange16)
#pragma intrinsic(_InterlockedOr16)
#endif
FORCEINLINE BOOLEAN InterlockedBitTestAndComplement(LONG volatile *Base, LONG Bit)
{
	__asm
	{
		mov eax, Bit
		mov ecx, Base
		lock btc[ecx], eax
		setc al
	};
}
#if (__POCC__ >= 500)
BYTE __cdecl __readfsbyte(DWORD Offset);
WORD __cdecl __readfsword(DWORD Offset);
DWORD __cdecl __readfsdword(DWORD Offset);
VOID __cdecl __writefsbyte(DWORD Offset, BYTE Data);
VOID __cdecl __writefsword(DWORD Offset, WORD Data);
VOID __cdecl __writefsdword(DWORD Offset, DWORD Data);
#pragma intrinsic(__readfsbyte)
#pragma intrinsic(__readfsword)
#pragma intrinsic(__readfsdword)
#pragma intrinsic(__writefsbyte)
#pragma intrinsic(__writefsword)
#pragma intrinsic(__writefsdword)
#endif
#if (__POCC__ >= 1500)
VOID __incfsbyte(DWORD Offset);
VOID __addfsbyte(DWORD Offset, BYTE Value);
VOID __incfsword(DWORD Offset);
VOID __addfsword(DWORD Offset, WORD Value);
VOID __incfsdword(DWORD Offset);
VOID __addfsdword(DWORD Offset, DWORD Value);
#pragma intrinsic(__incfsbyte)
#pragma intrinsic(__addfsbyte)
#pragma intrinsic(__incfsword)
#pragma intrinsic(__addfsword)
#pragma intrinsic(__incfsdword)
#pragma intrinsic(__addfsdword)
#endif
#if (__POCC__ >= 1500)
VOID __cdecl _mm_pause(VOID);
#pragma intrinsic(_mm_pause)
#define YieldProcessor _mm_pause
#else
#define YieldProcessor() __asm { rep nop }
#endif
#endif
#if defined(_M_IX86)
FORCEINLINE VOID MemoryBarrier(VOID)
{
	LONG Barrier;
	__asm
	{
		xchg Barrier, eax
	}
}
#define PreFetchCacheLine(l, a)
#define PrefetchForWrite(p)
#define ReadForWriteAccess(p) (*(p))
#define PF_TEMPORAL_LEVEL_1
#define PF_NON_TEMPORAL_LEVEL_ALL
#if __POCC__ >= 1500
#define ReadPMC __readpmc
DWORD64 __readpmc(DWORD Counter);
#pragma intrinsic(__readpmc)
#else
FORCEINLINE DWORD64 ReadPMC(DWORD Counter)
{
	__asm
	{
		mov ecx, Counter
		rdpmc
	};
}
#endif
#if __POCC__ >= 290
#define ReadTimeStampCounter() __rdtsc()
DWORD64 __cdecl __rdtsc(VOID);
#pragma intrinsic(__rdtsc)
#else
FORCEINLINE DWORD64 ReadTimeStampCounter(VOID)
{
	__asm rdtsc
}
#endif
#if defined(_X86_) && defined(_M_IX86)
#if (__POCC__ >= 1500)
VOID __int2c(VOID);
#pragma intrinsic(__int2c)
FORCEINLINE VOID DbgRaiseAssertionFailure(VOID)
{
	__int2c();
}
#else
FORCEINLINE VOID DbgRaiseAssertionFailure(VOID)
{
	__asm int 0x2c
}
#endif
#endif
#if (__POCC__ >= 500)
__inline PVOID GetFiberData(void)
{
	return *(PVOID *) (ULONG_PTR)__readfsdword(0x10);
}
__inline PVOID GetCurrentFiber(void)
{
	return (PVOID) (ULONG_PTR)__readfsdword(0x10);
}
#else
__inline PVOID GetFiberData(void)
{
	__asm
	{
		mov eax, fs:[0x10]
		mov eax,[eax]
	}
}
__inline PVOID GetCurrentFiber(void)
{
	__asm mov eax, fs:[0x10]
}
#endif
#endif
#define EXCEPTION_READ_FAULT          0
#define EXCEPTION_WRITE_FAULT         1
#define EXCEPTION_EXECUTE_FAULT       8
#define SIZE_OF_80387_REGISTERS      80
#define CONTEXT_i386    0x00010000
#define CONTEXT_i486    0x00010000
#define CONTEXT_CONTROL         (CONTEXT_i386 | 0x00000001L)
#define CONTEXT_INTEGER         (CONTEXT_i386 | 0x00000002L)
#define CONTEXT_SEGMENTS        (CONTEXT_i386 | 0x00000004L)
#define CONTEXT_FLOATING_POINT  (CONTEXT_i386 | 0x00000008L)
#define CONTEXT_DEBUG_REGISTERS (CONTEXT_i386 | 0x00000010L)
#define CONTEXT_EXTENDED_REGISTERS  (CONTEXT_i386 | 0x00000020L)
#define CONTEXT_FULL (CONTEXT_CONTROL | CONTEXT_INTEGER | CONTEXT_SEGMENTS)
#define CONTEXT_ALL             (CONTEXT_CONTROL | CONTEXT_INTEGER | CONTEXT_SEGMENTS | CONTEXT_FLOATING_POINT | CONTEXT_DEBUG_REGISTERS | CONTEXT_EXTENDED_REGISTERS)
#define CONTEXT_XSTATE          (CONTEXT_i386 | 0x00000040L)
typedef struct _FLOATING_SAVE_AREA
{
	DWORD ControlWord;
	DWORD StatusWord;
	DWORD TagWord;
	DWORD ErrorOffset;
	DWORD ErrorSelector;
	DWORD DataOffset;
	DWORD DataSelector;
	BYTE RegisterArea[SIZE_OF_80387_REGISTERS];
	DWORD Cr0NpxState;
} FLOATING_SAVE_AREA;
typedef FLOATING_SAVE_AREA *PFLOATING_SAVE_AREA;
#define MAXIMUM_SUPPORTED_EXTENSION     512
C_ASSERT(sizeof(XSAVE_FORMAT) == MAXIMUM_SUPPORTED_EXTENSION);
#include <pshpack4.h>
typedef struct _CONTEXT
{
	DWORD ContextFlags;
	DWORD Dr0;
	DWORD Dr1;
	DWORD Dr2;
	DWORD Dr3;
	DWORD Dr6;
	DWORD Dr7;
	FLOATING_SAVE_AREA FloatSave;
	DWORD SegGs;
	DWORD SegFs;
	DWORD SegEs;
	DWORD SegDs;
	DWORD Edi;
	DWORD Esi;
	DWORD Ebx;
	DWORD Edx;
	DWORD Ecx;
	DWORD Eax;
	DWORD Ebp;
	DWORD Eip;
	DWORD SegCs;
	DWORD EFlags;
	DWORD Esp;
	DWORD SegSs;
	BYTE ExtendedRegisters[MAXIMUM_SUPPORTED_EXTENSION];
} CONTEXT;
typedef CONTEXT *PCONTEXT;
#include <poppack.h>
#endif
#ifndef _LDT_ENTRY_DEFINED
#define _LDT_ENTRY_DEFINED
typedef struct _LDT_ENTRY
{
	WORD LimitLow;
	WORD BaseLow;
	union
	{
		struct
		{
			BYTE BaseMid;
			BYTE Flags1;
			BYTE Flags2;
			BYTE BaseHi;
		} Bytes;
		struct
		{
			DWORD BaseMid:8;
			DWORD Type:5;
			DWORD Dpl:2;
			DWORD Pres:1;
			DWORD LimitHi:4;
			DWORD Sys:1;
			DWORD Reserved_0:1;
			DWORD Default_Big:1;
			DWORD Granularity:1;
			DWORD BaseHi:8;
		} Bits;
	} HighWord;
} LDT_ENTRY, *PLDT_ENTRY;
#endif
#if defined(_M_IA64)
#define BitTest _bittest
#define BitTestAndComplement _bittestandcomplement
#define BitTestAndSet _bittestandset
#define BitTestAndReset _bittestandreset
#define BitTest64 _bittest64
#define BitTestAndComplement64 _bittestandcomplement64
#define BitTestAndSet64 _bittestandset64
#define BitTestAndReset64 _bittestandreset64
BOOLEAN _bittest(LONG const *Base, LONG Offset);
BOOLEAN _bittestandcomplement(LONG *Base, LONG Offset);
BOOLEAN _bittestandset(LONG *Base, LONG Offset);
BOOLEAN _bittestandreset(LONG *Base, LONG Offset);
BOOLEAN _bittest64(LONG64 const *Base, LONG64 Offset);
BOOLEAN _bittestandcomplement64(LONG64 *Base, LONG64 Offset);
BOOLEAN _bittestandset64(LONG64 *Base, LONG64 Offset);
BOOLEAN _bittestandreset64(LONG64 *Base, LONG64 Offset);
#pragma intrinsic(_bittest)
#pragma intrinsic(_bittestandcomplement)
#pragma intrinsic(_bittestandset)
#pragma intrinsic(_bittestandreset)
#pragma intrinsic(_bittest64)
#pragma intrinsic(_bittestandcomplement64)
#pragma intrinsic(_bittestandset64)
#pragma intrinsic(_bittestandreset64)
#define BitScanForward _BitScanForward
#define BitScanReverse _BitScanReverse
#define BitScanForward64 _BitScanForward64
#define BitScanReverse64 _BitScanReverse64
BOOLEAN _BitScanForward(DWORD *Index, DWORD Mask);
BOOLEAN _BitScanReverse(DWORD *Index, DWORD Mask);
BOOLEAN _BitScanForward64(DWORD *Index, DWORD64 Mask);
BOOLEAN _BitScanReverse64(DWORD *Index, DWORD64 Mask);
#pragma intrinsic(_BitScanForward)
#pragma intrinsic(_BitScanReverse)
#pragma intrinsic(_BitScanForward64)
#pragma intrinsic(_BitScanReverse64)
#define InterlockedCompareExchange16 _InterlockedCompareExchange16
SHORT _InterlockedCompareExchange16(SHORT volatile *Destination, SHORT ExChange, SHORT Comperand);
#pragma intrinsic(_InterlockedCompareExchange16)
#define InterlockedAdd                  _InterlockedAdd
#define InterlockedAddAcquire           _InterlockedAdd_acq
#define InterlockedAddRelease           _InterlockedAdd_rel
#define InterlockedIncrement            _InterlockedIncrement
#define InterlockedIncrementAcquire     _InterlockedIncrement_acq
#define InterlockedIncrementRelease     _InterlockedIncrement_rel
#define InterlockedDecrement            _InterlockedDecrement
#define InterlockedDecrementAcquire     _InterlockedDecrement_acq
#define InterlockedDecrementRelease     _InterlockedDecrement_rel
#define InterlockedExchange             _InterlockedExchange
#define InterlockedExchangeAcquire      _InterlockedExchange_acq
#define InterlockedExchangeAdd          _InterlockedExchangeAdd
#define InterlockedExchangeAddAcquire   _InterlockedExchangeAdd_acq
#define InterlockedExchangeAddRelease   _InterlockedExchangeAdd_rel
#define InterlockedAdd64                _InterlockedAdd64
#define InterlockedAddAcquire64         _InterlockedAdd64_acq
#define InterlockedAddRelease64         _InterlockedAdd64_rel
#define InterlockedIncrement64          _InterlockedIncrement64
#define InterlockedIncrementAcquire64   _InterlockedIncrement64_acq
#define InterlockedIncrementRelease64   _InterlockedIncrement64_rel
#define InterlockedDecrement64          _InterlockedDecrement64
#define InterlockedDecrementAcquire64   _InterlockedDecrement64_acq
#define InterlockedDecrementRelease64   _InterlockedDecrement64_rel
#define InterlockedExchange64           _InterlockedExchange64
#define InterlockedExchangeAcquire64    _InterlockedExchange64_acq
#define InterlockedExchangeAdd64        _InterlockedExchangeAdd64
#define InterlockedExchangeAddAcquire64 _InterlockedExchangeAdd64_acq
#define InterlockedExchangeAddRelease64 _InterlockedExchangeAdd64_rel
#define InterlockedCompareExchange64        _InterlockedCompareExchange64
#define InterlockedCompareExchangeAcquire64 _InterlockedCompareExchange64_acq
#define InterlockedCompareExchangeRelease64 _InterlockedCompareExchange64_rel
#define InterlockedCompare64Exchange128         _InterlockedCompare64Exchange128
#define InterlockedCompare64ExchangeAcquire128  _InterlockedCompare64Exchange128_acq
#define InterlockedCompare64ExchangeRelease128  _InterlockedCompare64Exchange128_rel
#define InterlockedCompareExchange          _InterlockedCompareExchange
#define InterlockedCompareExchangeAcquire   _InterlockedCompareExchange_acq
#define InterlockedCompareExchangeRelease   _InterlockedCompareExchange_rel
#define InterlockedExchangePointer          _InterlockedExchangePointer
#define InterlockedExchangePointerAcquire   _InterlockedExchangePointer_acq
#define InterlockedCompareExchangePointer           _InterlockedCompareExchangePointer
#define InterlockedCompareExchangePointerRelease    _InterlockedCompareExchangePointer_rel
#define InterlockedCompareExchangePointerAcquire    _InterlockedCompareExchangePointer_acq
#define InterlockedExchangeAddSizeT(a, b) InterlockedExchangeAdd64((LONG64 *)a, b)
#define InterlockedIncrementSizeT(a) InterlockedIncrement64((LONG64 *)a)
#define InterlockedDecrementSizeT(a) InterlockedDecrement64((LONG64 *)a)
#define InterlockedOr       _InterlockedOr
#define InterlockedOrAcquire   _InterlockedOr_acq
#define InterlockedOrRelease   _InterlockedOr_rel
#define InterlockedOr8      _InterlockedOr8
#define InterlockedOr8Acquire  _InterlockedOr8_acq
#define InterlockedOr8Release  _InterlockedOr8_rel
#define InterlockedOr16     _InterlockedOr16
#define InterlockedOr16Acquire _InterlockedOr16_acq
#define InterlockedOr16Release _InterlockedOr16_rel
#define InterlockedOr64     _InterlockedOr64
#define InterlockedOr64Acquire _InterlockedOr64_acq
#define InterlockedOr64Release _InterlockedOr64_rel
#define InterlockedXor      _InterlockedXor
#define InterlockedXorAcquire  _InterlockedXor_acq
#define InterlockedXorRelease  _InterlockedXor_rel
#define InterlockedXor8     _InterlockedXor8
#define InterlockedXor8Acquire _InterlockedXor8_acq
#define InterlockedXor8Release _InterlockedXor8_rel
#define InterlockedXor16    _InterlockedXor16
#define InterlockedXor16Acquire _InterlockedXor16_acq
#define InterlockedXor16Release _InterlockedXor16_rel
#define InterlockedXor64     _InterlockedXor64
#define InterlockedXor64Acquire _InterlockedXor64_acq
#define InterlockedXor64Release _InterlockedXor64_rel
#define InterlockedAnd       _InterlockedAnd
#define InterlockedAndAcquire   _InterlockedAnd_acq
#define InterlockedAndRelease   _InterlockedAnd_rel
#define InterlockedAnd8      _InterlockedAnd8
#define InterlockedAnd8Acquire  _InterlockedAnd8_acq
#define InterlockedAnd8Release  _InterlockedAnd8_rel
#define InterlockedAnd16     _InterlockedAnd16
#define InterlockedAnd16Acquire _InterlockedAnd16_acq
#define InterlockedAnd16Release _InterlockedAnd16_rel
#define InterlockedAnd64     _InterlockedAnd64
#define InterlockedAnd64Acquire _InterlockedAnd64_acq
#define InterlockedAnd64Release _InterlockedAnd64_rel
LONG __cdecl InterlockedAdd(LONG volatile *Addend, LONG Value);
LONG __cdecl InterlockedAddAcquire(LONG volatile *Addend, LONG Value);
LONG __cdecl InterlockedAddRelease(LONG volatile *Addend, LONG Value);
LONGLONG __cdecl InterlockedAdd64(LONGLONG volatile *Addend, LONGLONG Value);
LONGLONG __cdecl InterlockedAddAcquire64(LONGLONG volatile *Addend, LONGLONG Value);
LONGLONG __cdecl InterlockedAddRelease64(LONGLONG volatile *Addend, LONGLONG Value);
LONG __cdecl InterlockedIncrement(LONG volatile *Addend);
LONG __cdecl InterlockedDecrement(LONG volatile *Addend);
LONG __cdecl InterlockedIncrementAcquire(LONG volatile *Addend);
LONG __cdecl InterlockedDecrementAcquire(LONG volatile *Addend);
LONG __cdecl InterlockedIncrementRelease(LONG volatile *Addend);
LONG __cdecl InterlockedDecrementRelease(LONG volatile *Addend);
LONG __cdecl InterlockedExchange(LONG volatile *Target, LONG Value);
LONG __cdecl InterlockedExchangeAcquire(LONG volatile *Target, LONG Value);
LONG __cdecl InterlockedExchangeAdd(LONG volatile *Addend, LONG Value);
LONG __cdecl InterlockedExchangeAddAcquire(LONG volatile *Addend, LONG Value);
LONG __cdecl InterlockedExchangeAddRelease(LONG volatile *Addend, LONG Value);
LONG __cdecl InterlockedCompareExchange(LONG volatile *Destination, LONG ExChange, LONG Comperand);
LONG __cdecl InterlockedCompareExchangeRelease(LONG volatile *Destination, LONG ExChange, LONG Comperand);
LONG __cdecl InterlockedCompareExchangeAcquire(LONG volatile *Destination, LONG ExChange, LONG Comperand);
LONGLONG __cdecl InterlockedIncrement64(LONGLONG volatile *Addend);
LONGLONG __cdecl InterlockedIncrementAcquire64(LONGLONG volatile *Addend);
LONGLONG __cdecl InterlockedIncrementRelease64(LONGLONG volatile *Addend);
LONGLONG __cdecl InterlockedDecrement64(LONGLONG volatile *Addend);
LONGLONG __cdecl InterlockedDecrementAcquire64(LONGLONG volatile *Addend);
LONGLONG __cdecl InterlockedDecrementRelease64(LONGLONG volatile *Addend);
LONGLONG __cdecl InterlockedExchange64(LONGLONG volatile *Target, LONGLONG Value);
LONGLONG __cdecl InterlockedExchangeAcquire64(LONGLONG volatile *Target, LONGLONG Value);
LONGLONG __cdecl InterlockedExchangeAdd64(LONGLONG volatile *Addend, LONGLONG Value);
LONGLONG __cdecl InterlockedExchangeAddAcquire64(LONGLONG volatile *Addend, LONGLONG Value);
LONGLONG __cdecl InterlockedExchangeAddRelease64(LONGLONG volatile *Addend, LONGLONG Value);
LONGLONG __cdecl InterlockedCompareExchange64(LONGLONG volatile *Destination, LONGLONG ExChange, LONGLONG Comperand);
LONGLONG __cdecl InterlockedCompareExchangeAcquire64(LONGLONG volatile *Destination, LONGLONG ExChange, LONGLONG Comperand);
LONGLONG __cdecl InterlockedCompareExchangeRelease64(LONGLONG volatile *Destination, LONGLONG ExChange, LONGLONG Comperand);
LONG64 __cdecl InterlockedCompare64Exchange128(LONG64 volatile *Destination, LONG64 ExchangeHigh, LONG64 ExchangeLow, LONG64 Comperand);
LONG64 __cdecl InterlockedCompare64ExchangeAcquire128(LONG64 volatile *Destination, LONG64 ExchangeHigh, LONG64 ExchangeLow, LONG64 Comperand);
LONG64 __cdecl InterlockedCompare64ExchangeRelease128(LONG64 volatile *Destination, LONG64 ExchangeHigh, LONG64 ExchangeLow, LONG64 Comperand);
PVOID __cdecl InterlockedCompareExchangePointer(PVOID volatile *Destination, PVOID Exchange, PVOID Comperand);
PVOID __cdecl InterlockedCompareExchangePointerAcquire(PVOID volatile *Destination, PVOID Exchange, PVOID Comperand);
PVOID __cdecl InterlockedCompareExchangePointerRelease(PVOID volatile *Destination, PVOID Exchange, PVOID Comperand);
PVOID __cdecl InterlockedExchangePointer(PVOID volatile *Target, PVOID Value);
PVOID __cdecl InterlockedExchangePointerAcquire(PVOID volatile *Target, PVOID Value);
LONG __cdecl InterlockedOr(LONG volatile *Destination, LONG Value);
LONG __cdecl InterlockedOrAcquire(LONG volatile *Destination, LONG Value);
LONG __cdecl InterlockedOrRelease(LONG volatile *Destination, LONG Value);
CHAR __cdecl InterlockedOr8(CHAR volatile *Destination, CHAR Value);
CHAR __cdecl InterlockedOr8Acquire(CHAR volatile *Destination, CHAR Value);
CHAR __cdecl InterlockedOr8Release(CHAR volatile *Destination, CHAR Value);
SHORT __cdecl InterlockedOr16(SHORT volatile *Destination, SHORT Value);
SHORT __cdecl InterlockedOr16Acquire(SHORT volatile *Destination, SHORT Value);
SHORT __cdecl InterlockedOr16Release(SHORT volatile *Destination, SHORT Value);
LONGLONG __cdecl InterlockedOr64(LONGLONG volatile *Destination, LONGLONG Value);
LONGLONG __cdecl InterlockedOr64Acquire(LONGLONG volatile *Destination, LONGLONG Value);
LONGLONG __cdecl InterlockedOr64Release(LONGLONG volatile *Destination, LONGLONG Value);
LONG __cdecl InterlockedXor(LONG volatile *Destination, LONG Value);
LONG __cdecl InterlockedXorAcquire(LONG volatile *Destination, LONG Value);
LONG __cdecl InterlockedXorRelease(LONG volatile *Destination, LONG Value);
CHAR __cdecl InterlockedXor8(CHAR volatile *Destination, CHAR Value);
CHAR __cdecl InterlockedXor8Acquire(CHAR volatile *Destination, CHAR Value);
CHAR __cdecl InterlockedXor8Release(CHAR volatile *Destination, CHAR Value);
SHORT __cdecl InterlockedXor16(SHORT volatile *Destination, SHORT Value);
SHORT __cdecl InterlockedXor16Acquire(SHORT volatile *Destination, SHORT Value);
SHORT __cdecl InterlockedXor16Release(SHORT volatile *Destination, SHORT Value);
LONGLONG __cdecl InterlockedXor64(LONGLONG volatile *Destination, LONGLONG Value);
LONGLONG __cdecl InterlockedXor64Acquire(LONGLONG volatile *Destination, LONGLONG Value);
LONGLONG __cdecl InterlockedXor64Release(LONGLONG volatile *Destination, LONGLONG Value);
LONG __cdecl InterlockedAnd(LONG volatile *Destination, LONG Value);
LONG __cdecl InterlockedAndAcquire(LONG volatile *Destination, LONG Value);
LONG __cdecl InterlockedAndRelease(LONG volatile *Destination, LONG Value);
CHAR __cdecl InterlockedAnd8(CHAR volatile *Destination, CHAR Value);
CHAR __cdecl InterlockedAnd8Acquire(CHAR volatile *Destination, CHAR Value);
CHAR __cdecl InterlockedAnd8Release(CHAR volatile *Destination, CHAR Value);
SHORT __cdecl InterlockedAnd16(SHORT volatile *Destination, SHORT Value);
SHORT __cdecl InterlockedAnd16Acquire(SHORT volatile *Destination, SHORT Value);
SHORT __cdecl InterlockedAnd16Release(SHORT volatile *Destination, SHORT Value);
LONGLONG __cdecl InterlockedAnd64(LONGLONG volatile *Destination, LONGLONG Value);
LONGLONG __cdecl InterlockedAnd64Acquire(LONGLONG volatile *Destination, LONGLONG Value);
LONGLONG __cdecl InterlockedAnd64Release(LONGLONG volatile *Destination, LONGLONG Value);
#pragma intrinsic(_InterlockedAdd)
#pragma intrinsic(_InterlockedIncrement)
#pragma intrinsic(_InterlockedIncrement_acq)
#pragma intrinsic(_InterlockedIncrement_rel)
#pragma intrinsic(_InterlockedDecrement)
#pragma intrinsic(_InterlockedDecrement_acq)
#pragma intrinsic(_InterlockedDecrement_rel)
#pragma intrinsic(_InterlockedExchange)
#pragma intrinsic(_InterlockedCompareExchange)
#pragma intrinsic(_InterlockedCompareExchange_acq)
#pragma intrinsic(_InterlockedCompareExchange_rel)
#pragma intrinsic(_InterlockedExchangeAdd)
#pragma intrinsic(_InterlockedAdd64)
#pragma intrinsic(_InterlockedIncrement64)
#pragma intrinsic(_InterlockedDecrement64)
#pragma intrinsic(_InterlockedExchange64)
#pragma intrinsic(_InterlockedExchange64_acq)
#pragma intrinsic(_InterlockedCompareExchange64)
#pragma intrinsic(_InterlockedCompareExchange64_acq)
#pragma intrinsic(_InterlockedCompareExchange64_rel)
#pragma intrinsic(_InterlockedCompare64Exchange128)
#pragma intrinsic(_InterlockedCompare64Exchange128_acq)
#pragma intrinsic(_InterlockedCompare64Exchange128_rel)
#pragma intrinsic(_InterlockedExchangeAdd64)
#pragma intrinsic(_InterlockedExchangePointer)
#pragma intrinsic(_InterlockedCompareExchangePointer)
#pragma intrinsic(_InterlockedCompareExchangePointer_acq)
#pragma intrinsic(_InterlockedCompareExchangePointer_rel)
#pragma intrinsic(_InterlockedAdd_acq)
#pragma intrinsic(_InterlockedAdd_rel)
#pragma intrinsic(_InterlockedExchange_acq)
#pragma intrinsic(_InterlockedExchangeAdd_acq)
#pragma intrinsic(_InterlockedExchangeAdd_rel)
#pragma intrinsic(_InterlockedAdd64_acq)
#pragma intrinsic(_InterlockedAdd64_rel)
#pragma intrinsic(_InterlockedIncrement64_acq)
#pragma intrinsic(_InterlockedIncrement64_rel)
#pragma intrinsic(_InterlockedDecrement64_acq)
#pragma intrinsic(_InterlockedDecrement64_rel)
#pragma intrinsic(_InterlockedExchangeAdd64_acq)
#pragma intrinsic(_InterlockedExchangeAdd64_rel)
#pragma intrinsic(_InterlockedExchangePointer_acq)
#pragma intrinsic (_InterlockedOr)
#pragma intrinsic (_InterlockedOr_acq)
#pragma intrinsic (_InterlockedOr_rel)
#pragma intrinsic (_InterlockedOr8)
#pragma intrinsic (_InterlockedOr8_acq)
#pragma intrinsic (_InterlockedOr8_rel)
#pragma intrinsic (_InterlockedOr16)
#pragma intrinsic (_InterlockedOr16_acq)
#pragma intrinsic (_InterlockedOr16_rel)
#pragma intrinsic (_InterlockedOr64)
#pragma intrinsic (_InterlockedOr64_acq)
#pragma intrinsic (_InterlockedOr64_rel)
#pragma intrinsic (_InterlockedXor)
#pragma intrinsic (_InterlockedXor_acq)
#pragma intrinsic (_InterlockedXor_rel)
#pragma intrinsic (_InterlockedXor8)
#pragma intrinsic (_InterlockedXor8_acq)
#pragma intrinsic (_InterlockedXor8_rel)
#pragma intrinsic (_InterlockedXor16)
#pragma intrinsic (_InterlockedXor16_acq)
#pragma intrinsic (_InterlockedXor16_rel)
#pragma intrinsic (_InterlockedXor64)
#pragma intrinsic (_InterlockedXor64_acq)
#pragma intrinsic (_InterlockedXor64_rel)
#pragma intrinsic (_InterlockedAnd)
#pragma intrinsic (_InterlockedAnd_acq)
#pragma intrinsic (_InterlockedAnd_rel)
#pragma intrinsic (_InterlockedAnd8)
#pragma intrinsic (_InterlockedAnd8_acq)
#pragma intrinsic (_InterlockedAnd8_rel)
#pragma intrinsic (_InterlockedAnd16)
#pragma intrinsic (_InterlockedAnd16_acq)
#pragma intrinsic (_InterlockedAnd16_rel)
#pragma intrinsic (_InterlockedAnd64)
#pragma intrinsic (_InterlockedAnd64_acq)
#pragma intrinsic (_InterlockedAnd64_rel)
#if !defined (InterlockedAnd64)
#define InterlockedAnd64 InterlockedAnd64_Inline
LONGLONG FORCEINLINE InterlockedAnd64_Inline(LONGLONG volatile *Destination, LONGLONG Value)
{
	LONGLONG Old;
	do
{
		Old = *Destination;
	} while (InterlockedCompareExchange64(Destination, Old & Value, Old) != Old);
	return Old;
}
#endif
#define InterlockedAndAffinity InterlockedAnd64
#if !defined (InterlockedOr64)
#define InterlockedOr64 InterlockedOr64_Inline
LONGLONG FORCEINLINE InterlockedOr64_Inline(LONGLONG volatile *Destination, LONGLONG Value)
{
	LONGLONG Old;
	do
{
		Old = *Destination;
	} while (InterlockedCompareExchange64(Destination, Old | Value, Old) != Old);
	return Old;
}
#endif
#define InterlockedOrAffinity InterlockedOr64
#if !defined (InterlockedXor64)
#define InterlockedXor64 InterlockedXor64_Inline
LONGLONG FORCEINLINE InterlockedXor64_Inline(LONGLONG volatile *Destination, LONGLONG Value)
{
	LONGLONG Old;
	do
{
		Old = *Destination;
	} while (InterlockedCompareExchange64(Destination, Old ^ Value, Old) != Old);
	return Old;
}
#endif
#if !defined (InterlockedBitTestAndSet)
#define InterlockedBitTestAndSet InterlockedBitTestAndSet_Inline
BOOLEAN FORCEINLINE InterlockedBitTestAndSet_Inline(LONG volatile *Base, LONG Bit)
{
	LONG tBit;
	tBit = 1 << (Bit & (sizeof(*Base) * 8 - 1));
	return (BOOLEAN) ((InterlockedOr(&Base[Bit / (sizeof(*Base) * 8)], tBit) & tBit) != 0);
}
#endif
#if !defined (InterlockedBitTestAndReset)
#define InterlockedBitTestAndReset InterlockedBitTestAndReset_Inline
BOOLEAN FORCEINLINE InterlockedBitTestAndReset_Inline(LONG volatile *Base, LONG Bit)
{
	LONG tBit;
	tBit = 1 << (Bit & (sizeof(*Base) * 8 - 1));
	return (BOOLEAN) ((InterlockedAnd(&Base[Bit / (sizeof(*Base) * 8)], ~tBit) & tBit) != 0);
}
#endif
#if !defined (InterlockedBitTestAndSet64)
#define InterlockedBitTestAndSet64 InterlockedBitTestAndSet64_Inline
BOOLEAN FORCEINLINE InterlockedBitTestAndSet64_Inline(LONG64 volatile *Base, LONG64 Bit)
{
	LONG64 tBit;
	tBit = 1i 64 << (Bit & (sizeof(*Base) * 8 - 1));
	return (BOOLEAN) ((InterlockedOr64(&Base[Bit / (sizeof(*Base) * 8)], tBit) & tBit) != 0);
}
#endif
#if !defined (InterlockedBitTestAndReset64)
#define InterlockedBitTestAndReset64 InterlockedBitTestAndReset64_Inline
BOOLEAN FORCEINLINE InterlockedBitTestAndReset64_Inline(LONG64 volatile *Base, LONG64 Bit)
{
	LONG64 tBit;
	tBit = 1i 64 << (Bit & (sizeof(*Base) * 8 - 1));
	return (BOOLEAN) ((InterlockedAnd64(&Base[Bit / (sizeof(*Base) * 8)], ~tBit) & tBit) != 0);
}
#endif
#if !defined (InterlockedBitTestAndComplement)
#define InterlockedBitTestAndComplement InterlockedBitTestAndComplement_Inline
BOOLEAN FORCEINLINE InterlockedBitTestAndComplement_Inline(LONG volatile *Base, LONG Bit)
{
	LONG tBit;
	tBit = 1 << (Bit & (sizeof(*Base) * 8 - 1));
	return (BOOLEAN) ((InterlockedXor(&Base[Bit / (sizeof(*Base) * 8)], tBit) & tBit) != 0);
}
#endif
#if !defined (InterlockedBitTestAndComplement64)
#define InterlockedBitTestAndComplement64 InterlockedBitTestAndComplement64_Inline
BOOLEAN FORCEINLINE InterlockedBitTestAndComplement64_Inline(LONG64 volatile *Base, LONG64 Bit)
{
	LONG64 tBit;
	tBit = 1i 64 << (Bit & (sizeof(*Base) * 8 - 1));
	return (BOOLEAN) ((InterlockedXor64(&Base[Bit / (sizeof(*Base) * 8)], tBit) & tBit) != 0);
}
#endif
#endif
#if !defined(GENUTIL) && !defined(_GENIA64_) && defined(_IA64_)
void *__cdecl _rdteb(void);
void *__cdecl _rdtebex(void);
#ifdef _M_IA64
#pragma intrinsic(_rdteb)
#pragma intrinsic(_rdtebex)
#define NtCurrentTeb() ((struct _TEB *)_rdtebex())
#define GetCurrentFiber() (((PNT_TIB)NtCurrentTeb())->FiberData)
#define GetFiberData() (*(PVOID *)(GetCurrentFiber()))
#if defined(_IA64_) && defined(_M_IA64)
void __break(int StIIM);
#pragma intrinsic (__break)
#define BREAK_DEBUG_BASE    0x080000
#define ASSERT_BREAKPOINT         (BREAK_DEBUG_BASE+3)
FORCEINLINE VOID DbgRaiseAssertionFailure(VOID)
{
	__break(ASSERT_BREAKPOINT);
}
#endif
void __yield(void);
void __mf(void);
void __lfetch(int Level, volatile VOID CONST *Address);
void __lfetchfault(int Level, volatile VOID CONST *Address);
void __lfetch_excl(int Level, volatile VOID CONST *Address);
void __lfetchfault_excl(int Level, volatile VOID CONST *Address);
#define MD_LFHINT_NONE    0x00
#define MD_LFHINT_NT1     0x01
#define MD_LFHINT_NT2     0x02
#define MD_LFHINT_NTA     0x03
#pragma intrinsic (__yield)
#pragma intrinsic (__lfetch)
#pragma intrinsic (__lfetchfault)
#pragma intrinsic (__lfetchfault_excl)
#pragma intrinsic (__lfetch_excl)
#pragma intrinsic (__mf)
#define ReadTimeStampCounter() __getReg(3116)
unsigned __int64 __getReg(int Number);
#pragma intrinsic(__getReg)
#define YieldProcessor          __yield
#define MemoryBarrier           __mf
#define PreFetchCacheLine       __lfetch
#define PrefetchForWrite(p)
#define ReadForWriteAccess(p)   (__lfetch_excl(MD_LFHINT_NONE, (p)), (*(p)))
#define PF_TEMPORAL_LEVEL_1         MD_LFHINT_NONE
#define PF_TEMPORAL_LEVEL_2         MD_LFHINT_NT1
#define PF_TEMPORAL_LEVEL_3         MD_LFHINT_NT2
#define PF_NON_TEMPORAL_LEVEL_ALL   MD_LFHINT_NTA
#define UnsignedMultiplyHigh __UMULH
ULONGLONG UnsignedMultiplyHigh(ULONGLONG Multiplier, ULONGLONG Multiplicand);
#pragma intrinsic(__UMULH)
#if (__POCC__ >= 1500)
#define UnsignedMultiply128 _umul128
DWORD64 UnsignedMultiply128(unsigned __int64 Multiplier, unsigned __int64 Multiplicand, unsigned __int64 *HighProduct);
#pragma intrinsic(_umul128)
#endif
#else
struct _TEB *NtCurrentTeb(void);
#endif
#endif
#ifdef _IA64_
#define EXCEPTION_READ_FAULT          0
#define EXCEPTION_WRITE_FAULT         1
#define EXCEPTION_EXECUTE_FAULT       2
#define CONTEXT_IA64                    0x00080000
#define CONTEXT_CONTROL                 (CONTEXT_IA64 | 0x00000001L)
#define CONTEXT_LOWER_FLOATING_POINT    (CONTEXT_IA64 | 0x00000002L)
#define CONTEXT_HIGHER_FLOATING_POINT   (CONTEXT_IA64 | 0x00000004L)
#define CONTEXT_INTEGER                 (CONTEXT_IA64 | 0x00000008L)
#define CONTEXT_DEBUG                   (CONTEXT_IA64 | 0x00000010L)
#define CONTEXT_IA32_CONTROL            (CONTEXT_IA64 | 0x00000020L)
#define CONTEXT_FLOATING_POINT          (CONTEXT_LOWER_FLOATING_POINT | CONTEXT_HIGHER_FLOATING_POINT)
#define CONTEXT_FULL                    (CONTEXT_CONTROL | CONTEXT_FLOATING_POINT | CONTEXT_INTEGER | CONTEXT_IA32_CONTROL)
#define CONTEXT_ALL                     (CONTEXT_CONTROL | CONTEXT_FLOATING_POINT | CONTEXT_INTEGER | CONTEXT_DEBUG | CONTEXT_IA32_CONTROL)
#define CONTEXT_EXCEPTION_ACTIVE        0x8000000
#define CONTEXT_SERVICE_ACTIVE          0x10000000
#define CONTEXT_EXCEPTION_REQUEST       0x40000000
#define CONTEXT_EXCEPTION_REPORTING     0x80000000
typedef struct _CONTEXT
{
	DWORD ContextFlags;
	DWORD Fill1[3];
	ULONGLONG DbI0;
	ULONGLONG DbI1;
	ULONGLONG DbI2;
	ULONGLONG DbI3;
	ULONGLONG DbI4;
	ULONGLONG DbI5;
	ULONGLONG DbI6;
	ULONGLONG DbI7;
	ULONGLONG DbD0;
	ULONGLONG DbD1;
	ULONGLONG DbD2;
	ULONGLONG DbD3;
	ULONGLONG DbD4;
	ULONGLONG DbD5;
	ULONGLONG DbD6;
	ULONGLONG DbD7;
	FLOAT128 FltS0;
	FLOAT128 FltS1;
	FLOAT128 FltS2;
	FLOAT128 FltS3;
	FLOAT128 FltT0;
	FLOAT128 FltT1;
	FLOAT128 FltT2;
	FLOAT128 FltT3;
	FLOAT128 FltT4;
	FLOAT128 FltT5;
	FLOAT128 FltT6;
	FLOAT128 FltT7;
	FLOAT128 FltT8;
	FLOAT128 FltT9;
	FLOAT128 FltS4;
	FLOAT128 FltS5;
	FLOAT128 FltS6;
	FLOAT128 FltS7;
	FLOAT128 FltS8;
	FLOAT128 FltS9;
	FLOAT128 FltS10;
	FLOAT128 FltS11;
	FLOAT128 FltS12;
	FLOAT128 FltS13;
	FLOAT128 FltS14;
	FLOAT128 FltS15;
	FLOAT128 FltS16;
	FLOAT128 FltS17;
	FLOAT128 FltS18;
	FLOAT128 FltS19;
	FLOAT128 FltF32;
	FLOAT128 FltF33;
	FLOAT128 FltF34;
	FLOAT128 FltF35;
	FLOAT128 FltF36;
	FLOAT128 FltF37;
	FLOAT128 FltF38;
	FLOAT128 FltF39;
	FLOAT128 FltF40;
	FLOAT128 FltF41;
	FLOAT128 FltF42;
	FLOAT128 FltF43;
	FLOAT128 FltF44;
	FLOAT128 FltF45;
	FLOAT128 FltF46;
	FLOAT128 FltF47;
	FLOAT128 FltF48;
	FLOAT128 FltF49;
	FLOAT128 FltF50;
	FLOAT128 FltF51;
	FLOAT128 FltF52;
	FLOAT128 FltF53;
	FLOAT128 FltF54;
	FLOAT128 FltF55;
	FLOAT128 FltF56;
	FLOAT128 FltF57;
	FLOAT128 FltF58;
	FLOAT128 FltF59;
	FLOAT128 FltF60;
	FLOAT128 FltF61;
	FLOAT128 FltF62;
	FLOAT128 FltF63;
	FLOAT128 FltF64;
	FLOAT128 FltF65;
	FLOAT128 FltF66;
	FLOAT128 FltF67;
	FLOAT128 FltF68;
	FLOAT128 FltF69;
	FLOAT128 FltF70;
	FLOAT128 FltF71;
	FLOAT128 FltF72;
	FLOAT128 FltF73;
	FLOAT128 FltF74;
	FLOAT128 FltF75;
	FLOAT128 FltF76;
	FLOAT128 FltF77;
	FLOAT128 FltF78;
	FLOAT128 FltF79;
	FLOAT128 FltF80;
	FLOAT128 FltF81;
	FLOAT128 FltF82;
	FLOAT128 FltF83;
	FLOAT128 FltF84;
	FLOAT128 FltF85;
	FLOAT128 FltF86;
	FLOAT128 FltF87;
	FLOAT128 FltF88;
	FLOAT128 FltF89;
	FLOAT128 FltF90;
	FLOAT128 FltF91;
	FLOAT128 FltF92;
	FLOAT128 FltF93;
	FLOAT128 FltF94;
	FLOAT128 FltF95;
	FLOAT128 FltF96;
	FLOAT128 FltF97;
	FLOAT128 FltF98;
	FLOAT128 FltF99;
	FLOAT128 FltF100;
	FLOAT128 FltF101;
	FLOAT128 FltF102;
	FLOAT128 FltF103;
	FLOAT128 FltF104;
	FLOAT128 FltF105;
	FLOAT128 FltF106;
	FLOAT128 FltF107;
	FLOAT128 FltF108;
	FLOAT128 FltF109;
	FLOAT128 FltF110;
	FLOAT128 FltF111;
	FLOAT128 FltF112;
	FLOAT128 FltF113;
	FLOAT128 FltF114;
	FLOAT128 FltF115;
	FLOAT128 FltF116;
	FLOAT128 FltF117;
	FLOAT128 FltF118;
	FLOAT128 FltF119;
	FLOAT128 FltF120;
	FLOAT128 FltF121;
	FLOAT128 FltF122;
	FLOAT128 FltF123;
	FLOAT128 FltF124;
	FLOAT128 FltF125;
	FLOAT128 FltF126;
	FLOAT128 FltF127;
	ULONGLONG StFPSR;
	ULONGLONG IntGp;
	ULONGLONG IntT0;
	ULONGLONG IntT1;
	ULONGLONG IntS0;
	ULONGLONG IntS1;
	ULONGLONG IntS2;
	ULONGLONG IntS3;
	ULONGLONG IntV0;
	ULONGLONG IntT2;
	ULONGLONG IntT3;
	ULONGLONG IntT4;
	ULONGLONG IntSp;
	ULONGLONG IntTeb;
	ULONGLONG IntT5;
	ULONGLONG IntT6;
	ULONGLONG IntT7;
	ULONGLONG IntT8;
	ULONGLONG IntT9;
	ULONGLONG IntT10;
	ULONGLONG IntT11;
	ULONGLONG IntT12;
	ULONGLONG IntT13;
	ULONGLONG IntT14;
	ULONGLONG IntT15;
	ULONGLONG IntT16;
	ULONGLONG IntT17;
	ULONGLONG IntT18;
	ULONGLONG IntT19;
	ULONGLONG IntT20;
	ULONGLONG IntT21;
	ULONGLONG IntT22;
	ULONGLONG IntNats;
	ULONGLONG Preds;
	ULONGLONG BrRp;
	ULONGLONG BrS0;
	ULONGLONG BrS1;
	ULONGLONG BrS2;
	ULONGLONG BrS3;
	ULONGLONG BrS4;
	ULONGLONG BrT0;
	ULONGLONG BrT1;
	ULONGLONG ApUNAT;
	ULONGLONG ApLC;
	ULONGLONG ApEC;
	ULONGLONG ApCCV;
	ULONGLONG ApDCR;
	ULONGLONG RsPFS;
	ULONGLONG RsBSP;
	ULONGLONG RsBSPSTORE;
	ULONGLONG RsRSC;
	ULONGLONG RsRNAT;
	ULONGLONG StIPSR;
	ULONGLONG StIIP;
	ULONGLONG StIFS;
	ULONGLONG StFCR;
	ULONGLONG Eflag;
	ULONGLONG SegCSD;
	ULONGLONG SegSSD;
	ULONGLONG Cflag;
	ULONGLONG StFSR;
	ULONGLONG StFIR;
	ULONGLONG StFDR;
	ULONGLONG UNUSEDPACK;
} CONTEXT, *PCONTEXT;
typedef struct _PLABEL_DESCRIPTOR
{
	ULONGLONG EntryPoint;
	ULONGLONG GlobalPointer;
} PLABEL_DESCRIPTOR, *PPLABEL_DESCRIPTOR;
typedef struct _RUNTIME_FUNCTION
{
	DWORD BeginAddress;
	DWORD EndAddress;
	DWORD UnwindInfoAddress;
} RUNTIME_FUNCTION, *PRUNTIME_FUNCTION;
#define UNWIND_HISTORY_TABLE_SIZE 12
typedef struct _UNWIND_HISTORY_TABLE_ENTRY
{
	DWORD64 ImageBase;
	DWORD64 Gp;
	PRUNTIME_FUNCTION FunctionEntry;
} UNWIND_HISTORY_TABLE_ENTRY, *PUNWIND_HISTORY_TABLE_ENTRY;
typedef struct _UNWIND_HISTORY_TABLE
{
	DWORD Count;
	BYTE LocalHint;
	BYTE GlobalHint;
	BYTE Search;
	BYTE Once;
	DWORD64 LowAddress;
	DWORD64 HighAddress;
	UNWIND_HISTORY_TABLE_ENTRY Entry[UNWIND_HISTORY_TABLE_SIZE];
} UNWIND_HISTORY_TABLE, *PUNWIND_HISTORY_TABLE;
typedef PRUNTIME_FUNCTION GET_RUNTIME_FUNCTION_CALLBACK(DWORD64 ControlPc, PVOID Context);
typedef GET_RUNTIME_FUNCTION_CALLBACK *PGET_RUNTIME_FUNCTION_CALLBACK;
typedef DWORD OUT_OF_PROCESS_FUNCTION_TABLE_CALLBACK(HANDLE Process, PVOID TableAddress, PDWORD Entries, PRUNTIME_FUNCTION *Functions);
typedef OUT_OF_PROCESS_FUNCTION_TABLE_CALLBACK *POUT_OF_PROCESS_FUNCTION_TABLE_CALLBACK;
#define OUT_OF_PROCESS_FUNCTION_TABLE_CALLBACK_EXPORT_NAME "OutOfProcessFunctionTableCallback"
NTSYSAPI BOOLEAN NTAPI RtlAddFunctionTable(PRUNTIME_FUNCTION FunctionTable, DWORD EntryCount, ULONGLONG BaseAddress, ULONGLONG TargetGp);
NTSYSAPI BOOLEAN NTAPI RtlInstallFunctionTableCallback(DWORD64 TableIdentifier, DWORD64 BaseAddress, DWORD Length, DWORD64 TargetGp, PGET_RUNTIME_FUNCTION_CALLBACK Callback, PVOID Context, PCWSTR OutOfProcessCallbackDll);
NTSYSAPI BOOLEAN NTAPI RtlDeleteFunctionTable(PRUNTIME_FUNCTION FunctionTable);
NTSYSAPI PRUNTIME_FUNCTION NTAPI RtlLookupFunctionEntry(ULONGLONG ControlPc, PULONGLONG ImageBase, PULONGLONG TargetGp);
typedef struct _KNONVOLATILE_CONTEXT_POINTERS
{
	PFLOAT128 FltS0;
	PFLOAT128 FltS1;
	PFLOAT128 FltS2;
	PFLOAT128 FltS3;
	PFLOAT128 HighFloatingContext[10];
	PFLOAT128 FltS4;
	PFLOAT128 FltS5;
	PFLOAT128 FltS6;
	PFLOAT128 FltS7;
	PFLOAT128 FltS8;
	PFLOAT128 FltS9;
	PFLOAT128 FltS10;
	PFLOAT128 FltS11;
	PFLOAT128 FltS12;
	PFLOAT128 FltS13;
	PFLOAT128 FltS14;
	PFLOAT128 FltS15;
	PFLOAT128 FltS16;
	PFLOAT128 FltS17;
	PFLOAT128 FltS18;
	PFLOAT128 FltS19;
	PULONGLONG IntS0;
	PULONGLONG IntS1;
	PULONGLONG IntS2;
	PULONGLONG IntS3;
	PULONGLONG IntSp;
	PULONGLONG IntS0Nat;
	PULONGLONG IntS1Nat;
	PULONGLONG IntS2Nat;
	PULONGLONG IntS3Nat;
	PULONGLONG IntSpNat;
	PULONGLONG Preds;
	PULONGLONG BrRp;
	PULONGLONG BrS0;
	PULONGLONG BrS1;
	PULONGLONG BrS2;
	PULONGLONG BrS3;
	PULONGLONG BrS4;
	PULONGLONG ApUNAT;
	PULONGLONG ApLC;
	PULONGLONG ApEC;
	PULONGLONG RsPFS;
	PULONGLONG StFSR;
	PULONGLONG StFIR;
	PULONGLONG StFDR;
	PULONGLONG Cflag;
	PULONGLONG StFPSR;
} KNONVOLATILE_CONTEXT_POINTERS, *PKNONVOLATILE_CONTEXT_POINTERS;
typedef struct _FRAME_POINTERS
{
	ULONGLONG MemoryStackFp;
	ULONGLONG BackingStoreFp;
} FRAME_POINTERS, *PFRAME_POINTERS;
NTSYSAPI ULONGLONG NTAPI RtlVirtualUnwind(ULONGLONG ImageBase, ULONGLONG ControlPc, PRUNTIME_FUNCTION FunctionEntry, PCONTEXT ContextRecord, PBOOLEAN InFunction, PFRAME_POINTERS EstablisherFrame, PKNONVOLATILE_CONTEXT_POINTERS ContextPointers);
NTSYSAPI VOID NTAPI RtlRestoreContext(PCONTEXT ContextRecord, struct _EXCEPTION_RECORD *ExceptionRecord);
NTSYSAPI VOID NTAPI __jump_unwind(ULONGLONG TargetMsFrame, ULONGLONG TargetBsFrame, ULONGLONG TargetPc);
#endif
#define WOW64_CONTEXT_i386					0x00010000
#define WOW64_CONTEXT_i486					0x00010000
#define WOW64_CONTEXT_CONTROL               (WOW64_CONTEXT_i386 | 0x00000001L)
#define WOW64_CONTEXT_INTEGER               (WOW64_CONTEXT_i386 | 0x00000002L)
#define WOW64_CONTEXT_SEGMENTS              (WOW64_CONTEXT_i386 | 0x00000004L)
#define WOW64_CONTEXT_FLOATING_POINT        (WOW64_CONTEXT_i386 | 0x00000008L)
#define WOW64_CONTEXT_DEBUG_REGISTERS       (WOW64_CONTEXT_i386 | 0x00000010L)
#define WOW64_CONTEXT_EXTENDED_REGISTERS    (WOW64_CONTEXT_i386 | 0x00000020L)
#define WOW64_CONTEXT_FULL					(WOW64_CONTEXT_CONTROL | WOW64_CONTEXT_INTEGER | WOW64_CONTEXT_SEGMENTS)
#define WOW64_CONTEXT_ALL					(WOW64_CONTEXT_CONTROL | WOW64_CONTEXT_INTEGER | WOW64_CONTEXT_SEGMENTS | WOW64_CONTEXT_FLOATING_POINT | WOW64_CONTEXT_DEBUG_REGISTERS | WOW64_CONTEXT_EXTENDED_REGISTERS)
#define WOW64_CONTEXT_XSTATE                (WOW64_CONTEXT_i386 | 0x00000040L)
#define WOW64_SIZE_OF_80387_REGISTERS			80
#define WOW64_MAXIMUM_SUPPORTED_EXTENSION		512
typedef struct _WOW64_FLOATING_SAVE_AREA
{
	DWORD ControlWord;
	DWORD StatusWord;
	DWORD TagWord;
	DWORD ErrorOffset;
	DWORD ErrorSelector;
	DWORD DataOffset;
	DWORD DataSelector;
	BYTE RegisterArea[WOW64_SIZE_OF_80387_REGISTERS];
	DWORD Cr0NpxState;
} WOW64_FLOATING_SAVE_AREA;
typedef WOW64_FLOATING_SAVE_AREA *PWOW64_FLOATING_SAVE_AREA;
#include <pshpack4.h>
typedef struct _WOW64_CONTEXT
{
	DWORD ContextFlags;
	DWORD Dr0;
	DWORD Dr1;
	DWORD Dr2;
	DWORD Dr3;
	DWORD Dr6;
	DWORD Dr7;
	WOW64_FLOATING_SAVE_AREA FloatSave;
	DWORD SegGs;
	DWORD SegFs;
	DWORD SegEs;
	DWORD SegDs;
	DWORD Edi;
	DWORD Esi;
	DWORD Ebx;
	DWORD Edx;
	DWORD Ecx;
	DWORD Eax;
	DWORD Ebp;
	DWORD Eip;
	DWORD SegCs;
	DWORD EFlags;
	DWORD Esp;
	DWORD SegSs;
	BYTE ExtendedRegisters[WOW64_MAXIMUM_SUPPORTED_EXTENSION];
} WOW64_CONTEXT;
typedef WOW64_CONTEXT *PWOW64_CONTEXT;
#include <poppack.h>
typedef struct _WOW64_LDT_ENTRY
{
	WORD LimitLow;
	WORD BaseLow;
	union
	{
		struct
		{
			BYTE BaseMid;
			BYTE Flags1;
			BYTE Flags2;
			BYTE BaseHi;
		} Bytes;
		struct
		{
			DWORD BaseMid:8;
			DWORD Type:5;
			DWORD Dpl:2;
			DWORD Pres:1;
			DWORD LimitHi:4;
			DWORD Sys:1;
			DWORD Reserved_0:1;
			DWORD Default_Big:1;
			DWORD Granularity:1;
			DWORD BaseHi:8;
		} Bits;
	} HighWord;
} WOW64_LDT_ENTRY, *PWOW64_LDT_ENTRY;
typedef struct _WOW64_DESCRIPTOR_TABLE_ENTRY
{
	DWORD Selector;
	WOW64_LDT_ENTRY Descriptor;
} WOW64_DESCRIPTOR_TABLE_ENTRY, *PWOW64_DESCRIPTOR_TABLE_ENTRY;
#define EXCEPTION_NONCONTINUABLE 0x1
#define EXCEPTION_MAXIMUM_PARAMETERS 15
typedef struct _EXCEPTION_RECORD
{
	DWORD ExceptionCode;
	DWORD ExceptionFlags;
	struct _EXCEPTION_RECORD *ExceptionRecord;
	PVOID ExceptionAddress;
	DWORD NumberParameters;
	ULONG_PTR ExceptionInformation[EXCEPTION_MAXIMUM_PARAMETERS];
} EXCEPTION_RECORD;
typedef EXCEPTION_RECORD *PEXCEPTION_RECORD;
typedef struct _EXCEPTION_RECORD32
{
	DWORD ExceptionCode;
	DWORD ExceptionFlags;
	DWORD ExceptionRecord;
	DWORD ExceptionAddress;
	DWORD NumberParameters;
	DWORD ExceptionInformation[EXCEPTION_MAXIMUM_PARAMETERS];
} EXCEPTION_RECORD32, *PEXCEPTION_RECORD32;
typedef struct _EXCEPTION_RECORD64
{
	DWORD ExceptionCode;
	DWORD ExceptionFlags;
	DWORD64 ExceptionRecord;
	DWORD64 ExceptionAddress;
	DWORD NumberParameters;
	DWORD __unusedAlignment;
	DWORD64 ExceptionInformation[EXCEPTION_MAXIMUM_PARAMETERS];
} EXCEPTION_RECORD64, *PEXCEPTION_RECORD64;
typedef struct _EXCEPTION_POINTERS
{
	PEXCEPTION_RECORD ExceptionRecord;
	PCONTEXT ContextRecord;
} EXCEPTION_POINTERS, *PEXCEPTION_POINTERS;
NTSYSAPI VOID NTAPI RtlUnwind(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue);
#if defined(_IA64_)
NTSYSAPI VOID NTAPI RtlUnwind2(FRAME_POINTERS TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue, PCONTEXT ContextRecord);
#endif
#if defined(_AMD64_)
NTSYSAPI VOID NTAPI RtlUnwindEx(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue, PCONTEXT ContextRecord, PUNWIND_HISTORY_TABLE HistoryTable);
#elif defined(_IA64_)
NTSYSAPI VOID NTAPI RtlUnwindEx(FRAME_POINTERS TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue, PCONTEXT ContextRecord, PUNWIND_HISTORY_TABLE HistoryTable);
#endif
typedef PVOID PACCESS_TOKEN;
typedef PVOID PSECURITY_DESCRIPTOR;
typedef PVOID PSID;
typedef DWORD ACCESS_MASK;
typedef ACCESS_MASK *PACCESS_MASK;
#define DELETE                           (0x00010000L)
#define READ_CONTROL                     (0x00020000L)
#define WRITE_DAC                        (0x00040000L)
#define WRITE_OWNER                      (0x00080000L)
#define SYNCHRONIZE                      (0x00100000L)
#define STANDARD_RIGHTS_REQUIRED         (0x000F0000L)
#define STANDARD_RIGHTS_READ             (READ_CONTROL)
#define STANDARD_RIGHTS_WRITE            (READ_CONTROL)
#define STANDARD_RIGHTS_EXECUTE          (READ_CONTROL)
#define STANDARD_RIGHTS_ALL              (0x001F0000L)
#define SPECIFIC_RIGHTS_ALL              (0x0000FFFFL)
#define ACCESS_SYSTEM_SECURITY           (0x01000000L)
#define MAXIMUM_ALLOWED                  (0x02000000L)
#define GENERIC_READ                     (0x80000000L)
#define GENERIC_WRITE                    (0x40000000L)
#define GENERIC_EXECUTE                  (0x20000000L)
#define GENERIC_ALL                      (0x10000000L)
typedef struct _GENERIC_MAPPING
{
	ACCESS_MASK GenericRead;
	ACCESS_MASK GenericWrite;
	ACCESS_MASK GenericExecute;
	ACCESS_MASK GenericAll;
} GENERIC_MAPPING;
typedef GENERIC_MAPPING *PGENERIC_MAPPING;
#include <pshpack4.h>
typedef struct _LUID_AND_ATTRIBUTES
{
	LUID Luid;
	DWORD Attributes;
} LUID_AND_ATTRIBUTES, *PLUID_AND_ATTRIBUTES;
typedef LUID_AND_ATTRIBUTES LUID_AND_ATTRIBUTES_ARRAY[ANYSIZE_ARRAY];
typedef LUID_AND_ATTRIBUTES_ARRAY *PLUID_AND_ATTRIBUTES_ARRAY;
#include <poppack.h>
#ifndef SID_IDENTIFIER_AUTHORITY_DEFINED
#define SID_IDENTIFIER_AUTHORITY_DEFINED
typedef struct _SID_IDENTIFIER_AUTHORITY
{
	BYTE Value[6];
} SID_IDENTIFIER_AUTHORITY, *PSID_IDENTIFIER_AUTHORITY;
#endif
#ifndef SID_DEFINED
#define SID_DEFINED
typedef struct _SID
{
	BYTE Revision;
	BYTE SubAuthorityCount;
	SID_IDENTIFIER_AUTHORITY IdentifierAuthority;
	DWORD SubAuthority[ANYSIZE_ARRAY];
} SID, *PISID;
#endif
#define SID_REVISION                     (1)
#define SID_MAX_SUB_AUTHORITIES          (15)
#define SID_RECOMMENDED_SUB_AUTHORITIES  (1)
#define SECURITY_MAX_SID_SIZE (sizeof(SID) - sizeof(DWORD) + (SID_MAX_SUB_AUTHORITIES * sizeof(DWORD)))
typedef enum _SID_NAME_USE
{
	SidTypeUser = 1,
	SidTypeGroup,
	SidTypeDomain,
	SidTypeAlias,
	SidTypeWellKnownGroup,
	SidTypeDeletedAccount,
	SidTypeInvalid,
	SidTypeUnknown,
	SidTypeComputer,
	SidTypeLabel
} SID_NAME_USE, *PSID_NAME_USE;
typedef struct _SID_AND_ATTRIBUTES
{
	PSID Sid;
	DWORD Attributes;
} SID_AND_ATTRIBUTES, *PSID_AND_ATTRIBUTES;
typedef SID_AND_ATTRIBUTES SID_AND_ATTRIBUTES_ARRAY[ANYSIZE_ARRAY];
typedef SID_AND_ATTRIBUTES_ARRAY *PSID_AND_ATTRIBUTES_ARRAY;
#define SID_HASH_SIZE 32
typedef ULONG_PTR SID_HASH_ENTRY, *PSID_HASH_ENTRY;
typedef struct _SID_AND_ATTRIBUTES_HASH
{
	DWORD SidCount;
	PSID_AND_ATTRIBUTES SidAttr;
	SID_HASH_ENTRY Hash[SID_HASH_SIZE];
} SID_AND_ATTRIBUTES_HASH, *PSID_AND_ATTRIBUTES_HASH;
#define SECURITY_NULL_SID_AUTHORITY         {0,0,0,0,0,0}
#define SECURITY_WORLD_SID_AUTHORITY        {0,0,0,0,0,1}
#define SECURITY_LOCAL_SID_AUTHORITY        {0,0,0,0,0,2}
#define SECURITY_CREATOR_SID_AUTHORITY      {0,0,0,0,0,3}
#define SECURITY_NON_UNIQUE_AUTHORITY       {0,0,0,0,0,4}
#define SECURITY_RESOURCE_MANAGER_AUTHORITY {0,0,0,0,0,9}
#define SECURITY_NULL_RID                 (0x00000000L)
#define SECURITY_WORLD_RID                (0x00000000L)
#define SECURITY_LOCAL_RID                (0x00000000L)
#define SECURITY_LOCAL_LOGON_RID          (0x00000001L)
#define SECURITY_CREATOR_OWNER_RID        (0x00000000L)
#define SECURITY_CREATOR_GROUP_RID        (0x00000001L)
#define SECURITY_CREATOR_OWNER_SERVER_RID (0x00000002L)
#define SECURITY_CREATOR_GROUP_SERVER_RID (0x00000003L)
#define SECURITY_CREATOR_OWNER_RIGHTS_RID (0x00000004L)
#define SECURITY_NT_AUTHORITY           {0,0,0,0,0,5}
#define SECURITY_DIALUP_RID             (0x00000001L)
#define SECURITY_NETWORK_RID            (0x00000002L)
#define SECURITY_BATCH_RID              (0x00000003L)
#define SECURITY_INTERACTIVE_RID        (0x00000004L)
#define SECURITY_LOGON_IDS_RID          (0x00000005L)
#define SECURITY_LOGON_IDS_RID_COUNT    (3L)
#define SECURITY_SERVICE_RID            (0x00000006L)
#define SECURITY_ANONYMOUS_LOGON_RID    (0x00000007L)
#define SECURITY_PROXY_RID              (0x00000008L)
#define SECURITY_ENTERPRISE_CONTROLLERS_RID (0x00000009L)
#define SECURITY_SERVER_LOGON_RID       SECURITY_ENTERPRISE_CONTROLLERS_RID
#define SECURITY_PRINCIPAL_SELF_RID     (0x0000000AL)
#define SECURITY_AUTHENTICATED_USER_RID (0x0000000BL)
#define SECURITY_RESTRICTED_CODE_RID    (0x0000000CL)
#define SECURITY_TERMINAL_SERVER_RID    (0x0000000DL)
#define SECURITY_REMOTE_LOGON_RID       (0x0000000EL)
#define SECURITY_THIS_ORGANIZATION_RID  (0x0000000FL)
#define SECURITY_IUSER_RID              (0x00000011L)
#define SECURITY_LOCAL_SYSTEM_RID       (0x00000012L)
#define SECURITY_LOCAL_SERVICE_RID      (0x00000013L)
#define SECURITY_NETWORK_SERVICE_RID    (0x00000014L)
#define SECURITY_NT_NON_UNIQUE          (0x00000015L)
#define SECURITY_NT_NON_UNIQUE_SUB_AUTH_COUNT  (3L)
#define SECURITY_ENTERPRISE_READONLY_CONTROLLERS_RID (0x00000016L)
#define SECURITY_BUILTIN_DOMAIN_RID     (0x00000020L)
#define SECURITY_WRITE_RESTRICTED_CODE_RID (0x00000021L)
#define SECURITY_PACKAGE_BASE_RID       (0x00000040L)
#define SECURITY_PACKAGE_RID_COUNT      (2L)
#define SECURITY_PACKAGE_NTLM_RID       (0x0000000AL)
#define SECURITY_PACKAGE_SCHANNEL_RID   (0x0000000EL)
#define SECURITY_PACKAGE_DIGEST_RID     (0x00000015L)
#define SECURITY_CRED_TYPE_BASE_RID             (0x00000041L)
#define SECURITY_CRED_TYPE_RID_COUNT            (2L)
#define SECURITY_CRED_TYPE_THIS_ORG_CERT_RID    (0x00000001L)
#define SECURITY_MIN_BASE_RID           (0x00000050L)
#define SECURITY_SERVICE_ID_BASE_RID    (0x00000050L)
#define SECURITY_SERVICE_ID_RID_COUNT   (6L)
#define SECURITY_RESERVED_ID_BASE_RID   (0x00000051L)
#define SECURITY_APPPOOL_ID_BASE_RID    (0x00000052L)
#define SECURITY_APPPOOL_ID_RID_COUNT   (6L)
#define SECURITY_VIRTUALSERVER_ID_BASE_RID    (0x00000053L)
#define SECURITY_VIRTUALSERVER_ID_RID_COUNT   (6L)
#define SECURITY_USERMODEDRIVERHOST_ID_BASE_RID  (0x00000054L)
#define SECURITY_USERMODEDRIVERHOST_ID_RID_COUNT (6L)
#define SECURITY_CLOUD_INFRASTRUCTURE_SERVICES_ID_BASE_RID  (0x00000055L)
#define SECURITY_CLOUD_INFRASTRUCTURE_SERVICES_ID_RID_COUNT (6L)
#define SECURITY_WMIHOST_ID_BASE_RID  (0x00000056L)
#define SECURITY_WMIHOST_ID_RID_COUNT (6L)
#define SECURITY_TASK_ID_BASE_RID                 (0x00000057L)
#define SECURITY_NFS_ID_BASE_RID        (0x00000058L)
#define SECURITY_COM_ID_BASE_RID        (0x00000059L)
#define SECURITY_VIRTUALACCOUNT_ID_RID_COUNT   (6L)
#define SECURITY_MAX_BASE_RID		(0x0000006FL)
#define SECURITY_MAX_ALWAYS_FILTERED    (0x000003E7L)
#define SECURITY_MIN_NEVER_FILTERED     (0x000003E8L)
#define SECURITY_OTHER_ORGANIZATION_RID (0x000003E8L)
#define SECURITY_WINDOWSMOBILE_ID_BASE_RID (0x00000070L)
#define DOMAIN_GROUP_RID_ENTERPRISE_READONLY_DOMAIN_CONTROLLERS (0x000001F2L)
#define FOREST_USER_RID_MAX            (0x000001F3L)
#define DOMAIN_USER_RID_ADMIN          (0x000001F4L)
#define DOMAIN_USER_RID_GUEST          (0x000001F5L)
#define DOMAIN_USER_RID_KRBTGT         (0x000001F6L)
#define DOMAIN_USER_RID_MAX            (0x000003E7L)
#define DOMAIN_GROUP_RID_ADMINS        (0x00000200L)
#define DOMAIN_GROUP_RID_USERS         (0x00000201L)
#define DOMAIN_GROUP_RID_GUESTS        (0x00000202L)
#define DOMAIN_GROUP_RID_COMPUTERS     (0x00000203L)
#define DOMAIN_GROUP_RID_CONTROLLERS   (0x00000204L)
#define DOMAIN_GROUP_RID_CERT_ADMINS   (0x00000205L)
#define DOMAIN_GROUP_RID_SCHEMA_ADMINS (0x00000206L)
#define DOMAIN_GROUP_RID_ENTERPRISE_ADMINS (0x00000207L)
#define DOMAIN_GROUP_RID_POLICY_ADMINS (0x00000208L)
#define DOMAIN_GROUP_RID_READONLY_CONTROLLERS (0x00000209L)
#define DOMAIN_ALIAS_RID_ADMINS                         (0x00000220L)
#define DOMAIN_ALIAS_RID_USERS                          (0x00000221L)
#define DOMAIN_ALIAS_RID_GUESTS                         (0x00000222L)
#define DOMAIN_ALIAS_RID_POWER_USERS                    (0x00000223L)
#define DOMAIN_ALIAS_RID_ACCOUNT_OPS                    (0x00000224L)
#define DOMAIN_ALIAS_RID_SYSTEM_OPS                     (0x00000225L)
#define DOMAIN_ALIAS_RID_PRINT_OPS                      (0x00000226L)
#define DOMAIN_ALIAS_RID_BACKUP_OPS                     (0x00000227L)
#define DOMAIN_ALIAS_RID_REPLICATOR                     (0x00000228L)
#define DOMAIN_ALIAS_RID_RAS_SERVERS                    (0x00000229L)
#define DOMAIN_ALIAS_RID_PREW2KCOMPACCESS               (0x0000022AL)
#define DOMAIN_ALIAS_RID_REMOTE_DESKTOP_USERS           (0x0000022BL)
#define DOMAIN_ALIAS_RID_NETWORK_CONFIGURATION_OPS      (0x0000022CL)
#define DOMAIN_ALIAS_RID_INCOMING_FOREST_TRUST_BUILDERS (0x0000022DL)
#define DOMAIN_ALIAS_RID_MONITORING_USERS               (0x0000022EL)
#define DOMAIN_ALIAS_RID_LOGGING_USERS                  (0x0000022FL)
#define DOMAIN_ALIAS_RID_AUTHORIZATIONACCESS            (0x00000230L)
#define DOMAIN_ALIAS_RID_TS_LICENSE_SERVERS             (0x00000231L)
#define DOMAIN_ALIAS_RID_DCOM_USERS                     (0x00000232L)
#define DOMAIN_ALIAS_RID_IUSERS                         (0x00000238L)
#define DOMAIN_ALIAS_RID_CRYPTO_OPERATORS               (0x00000239L)
#define DOMAIN_ALIAS_RID_CACHEABLE_PRINCIPALS_GROUP     (0x0000023BL)
#define DOMAIN_ALIAS_RID_NON_CACHEABLE_PRINCIPALS_GROUP (0x0000023CL)
#define DOMAIN_ALIAS_RID_EVENT_LOG_READERS_GROUP        (0x0000023DL)
#define DOMAIN_ALIAS_RID_CERTSVC_DCOM_ACCESS_GROUP      (0x0000023EL)
#define SECURITY_MANDATORY_LABEL_AUTHORITY          {0,0,0,0,0,16}
#define SECURITY_MANDATORY_UNTRUSTED_RID            (0x00000000L)
#define SECURITY_MANDATORY_LOW_RID                  (0x00001000L)
#define SECURITY_MANDATORY_MEDIUM_RID               (0x00002000L)
#define SECURITY_MANDATORY_MEDIUM_PLUS_RID          (SECURITY_MANDATORY_MEDIUM_RID + 0x100)
#define SECURITY_MANDATORY_HIGH_RID                 (0x00003000L)
#define SECURITY_MANDATORY_SYSTEM_RID               (0x00004000L)
#define SECURITY_MANDATORY_PROTECTED_PROCESS_RID    (0x00005000L)
#define SECURITY_MANDATORY_MAXIMUM_USER_RID   SECURITY_MANDATORY_SYSTEM_RID
#define MANDATORY_LEVEL_TO_MANDATORY_RID(IL) (IL * 0x1000)
typedef enum
{
	WinNullSid = 0,
	WinWorldSid = 1,
	WinLocalSid = 2,
	WinCreatorOwnerSid = 3,
	WinCreatorGroupSid = 4,
	WinCreatorOwnerServerSid = 5,
	WinCreatorGroupServerSid = 6,
	WinNtAuthoritySid = 7,
	WinDialupSid = 8,
	WinNetworkSid = 9,
	WinBatchSid = 10,
	WinInteractiveSid = 11,
	WinServiceSid = 12,
	WinAnonymousSid = 13,
	WinProxySid = 14,
	WinEnterpriseControllersSid = 15,
	WinSelfSid = 16,
	WinAuthenticatedUserSid = 17,
	WinRestrictedCodeSid = 18,
	WinTerminalServerSid = 19,
	WinRemoteLogonIdSid = 20,
	WinLogonIdsSid = 21,
	WinLocalSystemSid = 22,
	WinLocalServiceSid = 23,
	WinNetworkServiceSid = 24,
	WinBuiltinDomainSid = 25,
	WinBuiltinAdministratorsSid = 26,
	WinBuiltinUsersSid = 27,
	WinBuiltinGuestsSid = 28,
	WinBuiltinPowerUsersSid = 29,
	WinBuiltinAccountOperatorsSid = 30,
	WinBuiltinSystemOperatorsSid = 31,
	WinBuiltinPrintOperatorsSid = 32,
	WinBuiltinBackupOperatorsSid = 33,
	WinBuiltinReplicatorSid = 34,
	WinBuiltinPreWindows2000CompatibleAccessSid = 35,
	WinBuiltinRemoteDesktopUsersSid = 36,
	WinBuiltinNetworkConfigurationOperatorsSid = 37,
	WinAccountAdministratorSid = 38,
	WinAccountGuestSid = 39,
	WinAccountKrbtgtSid = 40,
	WinAccountDomainAdminsSid = 41,
	WinAccountDomainUsersSid = 42,
	WinAccountDomainGuestsSid = 43,
	WinAccountComputersSid = 44,
	WinAccountControllersSid = 45,
	WinAccountCertAdminsSid = 46,
	WinAccountSchemaAdminsSid = 47,
	WinAccountEnterpriseAdminsSid = 48,
	WinAccountPolicyAdminsSid = 49,
	WinAccountRasAndIasServersSid = 50,
	WinNTLMAuthenticationSid = 51,
	WinDigestAuthenticationSid = 52,
	WinSChannelAuthenticationSid = 53,
	WinThisOrganizationSid = 54,
	WinOtherOrganizationSid = 55,
	WinBuiltinIncomingForestTrustBuildersSid = 56,
	WinBuiltinPerfMonitoringUsersSid = 57,
	WinBuiltinPerfLoggingUsersSid = 58,
	WinBuiltinAuthorizationAccessSid = 59,
	WinBuiltinTerminalServerLicenseServersSid = 60,
	WinBuiltinDCOMUsersSid = 61,
	WinBuiltinIUsersSid = 62,
	WinIUserSid = 63,
	WinBuiltinCryptoOperatorsSid = 64,
	WinUntrustedLabelSid = 65,
	WinLowLabelSid = 66,
	WinMediumLabelSid = 67,
	WinHighLabelSid = 68,
	WinSystemLabelSid = 69,
	WinWriteRestrictedCodeSid = 70,
	WinCreatorOwnerRightsSid = 71,
	WinCacheablePrincipalsGroupSid = 72,
	WinNonCacheablePrincipalsGroupSid = 73,
	WinEnterpriseReadonlyControllersSid = 74,
	WinAccountReadonlyControllersSid = 75,
	WinBuiltinEventLogReadersGroup = 76,
	WinNewEnterpriseReadonlyControllersSid = 77,
	WinBuiltinCertSvcDComAccessGroup = 78,
	WinMediumPlusLabelSid = 79,
	WinLocalLogonSid = 80,
	WinConsoleLogonSid = 81,
	WinThisOrganizationCertificateSid = 82,
} WELL_KNOWN_SID_TYPE;
#define SYSTEM_LUID                     { 0x3e7, 0x0 }
#define ANONYMOUS_LOGON_LUID            { 0x3e6, 0x0 }
#define LOCALSERVICE_LUID               { 0x3e5, 0x0 }
#define NETWORKSERVICE_LUID             { 0x3e4, 0x0 }
#define IUSER_LUID                      { 0x3e3, 0x0 }
#define SE_GROUP_MANDATORY                 (0x00000001L)
#define SE_GROUP_ENABLED_BY_DEFAULT        (0x00000002L)
#define SE_GROUP_ENABLED                   (0x00000004L)
#define SE_GROUP_OWNER                     (0x00000008L)
#define SE_GROUP_USE_FOR_DENY_ONLY         (0x00000010L)
#define SE_GROUP_INTEGRITY                 (0x00000020L)
#define SE_GROUP_INTEGRITY_ENABLED         (0x00000040L)
#define SE_GROUP_LOGON_ID                  (0xC0000000L)
#define SE_GROUP_RESOURCE                  (0x20000000L)
#define SE_GROUP_VALID_ATTRIBUTES          (SE_GROUP_MANDATORY | SE_GROUP_ENABLED_BY_DEFAULT | SE_GROUP_ENABLED  | SE_GROUP_OWNER | SE_GROUP_USE_FOR_DENY_ONLY  | SE_GROUP_LOGON_ID | SE_GROUP_RESOURCE | SE_GROUP_INTEGRITY | SE_GROUP_INTEGRITY_ENABLED)
#define ACL_REVISION     (2)
#define ACL_REVISION_DS  (4)
#define ACL_REVISION1   (1)
#define MIN_ACL_REVISION ACL_REVISION2
#define ACL_REVISION2   (2)
#define ACL_REVISION3   (3)
#define ACL_REVISION4   (4)
#define MAX_ACL_REVISION ACL_REVISION4
typedef struct _ACL
{
	BYTE AclRevision;
	BYTE Sbz1;
	WORD AclSize;
	WORD AceCount;
	WORD Sbz2;
} ACL;
typedef ACL *PACL;
typedef struct _ACE_HEADER
{
	BYTE AceType;
	BYTE AceFlags;
	WORD AceSize;
} ACE_HEADER;
typedef ACE_HEADER *PACE_HEADER;
#define ACCESS_MIN_MS_ACE_TYPE                  (0x0)
#define ACCESS_ALLOWED_ACE_TYPE                 (0x0)
#define ACCESS_DENIED_ACE_TYPE                  (0x1)
#define SYSTEM_AUDIT_ACE_TYPE                   (0x2)
#define SYSTEM_ALARM_ACE_TYPE                   (0x3)
#define ACCESS_MAX_MS_V2_ACE_TYPE               (0x3)
#define ACCESS_ALLOWED_COMPOUND_ACE_TYPE        (0x4)
#define ACCESS_MAX_MS_V3_ACE_TYPE               (0x4)
#define ACCESS_MIN_MS_OBJECT_ACE_TYPE           (0x5)
#define ACCESS_ALLOWED_OBJECT_ACE_TYPE          (0x5)
#define ACCESS_DENIED_OBJECT_ACE_TYPE           (0x6)
#define SYSTEM_AUDIT_OBJECT_ACE_TYPE            (0x7)
#define SYSTEM_ALARM_OBJECT_ACE_TYPE            (0x8)
#define ACCESS_MAX_MS_OBJECT_ACE_TYPE           (0x8)
#define ACCESS_MAX_MS_V4_ACE_TYPE               (0x8)
#define ACCESS_MAX_MS_ACE_TYPE                  (0x8)
#define ACCESS_ALLOWED_CALLBACK_ACE_TYPE        (0x9)
#define ACCESS_DENIED_CALLBACK_ACE_TYPE         (0xA)
#define ACCESS_ALLOWED_CALLBACK_OBJECT_ACE_TYPE (0xB)
#define ACCESS_DENIED_CALLBACK_OBJECT_ACE_TYPE  (0xC)
#define SYSTEM_AUDIT_CALLBACK_ACE_TYPE          (0xD)
#define SYSTEM_ALARM_CALLBACK_ACE_TYPE          (0xE)
#define SYSTEM_AUDIT_CALLBACK_OBJECT_ACE_TYPE   (0xF)
#define SYSTEM_ALARM_CALLBACK_OBJECT_ACE_TYPE   (0x10)
#define SYSTEM_MANDATORY_LABEL_ACE_TYPE         (0x11)
#define ACCESS_MAX_MS_V5_ACE_TYPE               (0x11)
#define OBJECT_INHERIT_ACE                (0x1)
#define CONTAINER_INHERIT_ACE             (0x2)
#define NO_PROPAGATE_INHERIT_ACE          (0x4)
#define INHERIT_ONLY_ACE                  (0x8)
#define INHERITED_ACE                     (0x10)
#define VALID_INHERIT_FLAGS               (0x1F)
#define SUCCESSFUL_ACCESS_ACE_FLAG       (0x40)
#define FAILED_ACCESS_ACE_FLAG           (0x80)
typedef struct _ACCESS_ALLOWED_ACE
{
	ACE_HEADER Header;
	ACCESS_MASK Mask;
	DWORD SidStart;
} ACCESS_ALLOWED_ACE;
typedef ACCESS_ALLOWED_ACE *PACCESS_ALLOWED_ACE;
typedef struct _ACCESS_DENIED_ACE
{
	ACE_HEADER Header;
	ACCESS_MASK Mask;
	DWORD SidStart;
} ACCESS_DENIED_ACE;
typedef ACCESS_DENIED_ACE *PACCESS_DENIED_ACE;
typedef struct _SYSTEM_AUDIT_ACE
{
	ACE_HEADER Header;
	ACCESS_MASK Mask;
	DWORD SidStart;
} SYSTEM_AUDIT_ACE;
typedef SYSTEM_AUDIT_ACE *PSYSTEM_AUDIT_ACE;
typedef struct _SYSTEM_ALARM_ACE
{
	ACE_HEADER Header;
	ACCESS_MASK Mask;
	DWORD SidStart;
} SYSTEM_ALARM_ACE;
typedef SYSTEM_ALARM_ACE *PSYSTEM_ALARM_ACE;
typedef struct _SYSTEM_MANDATORY_LABEL_ACE
{
	ACE_HEADER Header;
	ACCESS_MASK Mask;
	DWORD SidStart;
} SYSTEM_MANDATORY_LABEL_ACE, *PSYSTEM_MANDATORY_LABEL_ACE;
#define SYSTEM_MANDATORY_LABEL_NO_WRITE_UP         0x1
#define SYSTEM_MANDATORY_LABEL_NO_READ_UP          0x2
#define SYSTEM_MANDATORY_LABEL_NO_EXECUTE_UP       0x4
#define SYSTEM_MANDATORY_LABEL_VALID_MASK (SYSTEM_MANDATORY_LABEL_NO_WRITE_UP | SYSTEM_MANDATORY_LABEL_NO_READ_UP | SYSTEM_MANDATORY_LABEL_NO_EXECUTE_UP)
typedef struct _ACCESS_ALLOWED_OBJECT_ACE
{
	ACE_HEADER Header;
	ACCESS_MASK Mask;
	DWORD Flags;
	GUID ObjectType;
	GUID InheritedObjectType;
	DWORD SidStart;
} ACCESS_ALLOWED_OBJECT_ACE, *PACCESS_ALLOWED_OBJECT_ACE;
typedef struct _ACCESS_DENIED_OBJECT_ACE
{
	ACE_HEADER Header;
	ACCESS_MASK Mask;
	DWORD Flags;
	GUID ObjectType;
	GUID InheritedObjectType;
	DWORD SidStart;
} ACCESS_DENIED_OBJECT_ACE, *PACCESS_DENIED_OBJECT_ACE;
typedef struct _SYSTEM_AUDIT_OBJECT_ACE
{
	ACE_HEADER Header;
	ACCESS_MASK Mask;
	DWORD Flags;
	GUID ObjectType;
	GUID InheritedObjectType;
	DWORD SidStart;
} SYSTEM_AUDIT_OBJECT_ACE, *PSYSTEM_AUDIT_OBJECT_ACE;
typedef struct _SYSTEM_ALARM_OBJECT_ACE
{
	ACE_HEADER Header;
	ACCESS_MASK Mask;
	DWORD Flags;
	GUID ObjectType;
	GUID InheritedObjectType;
	DWORD SidStart;
} SYSTEM_ALARM_OBJECT_ACE, *PSYSTEM_ALARM_OBJECT_ACE;
typedef struct _ACCESS_ALLOWED_CALLBACK_ACE
{
	ACE_HEADER Header;
	ACCESS_MASK Mask;
	DWORD SidStart;
} ACCESS_ALLOWED_CALLBACK_ACE, *PACCESS_ALLOWED_CALLBACK_ACE;
typedef struct _ACCESS_DENIED_CALLBACK_ACE
{
	ACE_HEADER Header;
	ACCESS_MASK Mask;
	DWORD SidStart;
} ACCESS_DENIED_CALLBACK_ACE, *PACCESS_DENIED_CALLBACK_ACE;
typedef struct _SYSTEM_AUDIT_CALLBACK_ACE
{
	ACE_HEADER Header;
	ACCESS_MASK Mask;
	DWORD SidStart;
} SYSTEM_AUDIT_CALLBACK_ACE, *PSYSTEM_AUDIT_CALLBACK_ACE;
typedef struct _SYSTEM_ALARM_CALLBACK_ACE
{
	ACE_HEADER Header;
	ACCESS_MASK Mask;
	DWORD SidStart;
} SYSTEM_ALARM_CALLBACK_ACE, *PSYSTEM_ALARM_CALLBACK_ACE;
typedef struct _ACCESS_ALLOWED_CALLBACK_OBJECT_ACE
{
	ACE_HEADER Header;
	ACCESS_MASK Mask;
	DWORD Flags;
	GUID ObjectType;
	GUID InheritedObjectType;
	DWORD SidStart;
} ACCESS_ALLOWED_CALLBACK_OBJECT_ACE, *PACCESS_ALLOWED_CALLBACK_OBJECT_ACE;
typedef struct _ACCESS_DENIED_CALLBACK_OBJECT_ACE
{
	ACE_HEADER Header;
	ACCESS_MASK Mask;
	DWORD Flags;
	GUID ObjectType;
	GUID InheritedObjectType;
	DWORD SidStart;
} ACCESS_DENIED_CALLBACK_OBJECT_ACE, *PACCESS_DENIED_CALLBACK_OBJECT_ACE;
typedef struct _SYSTEM_AUDIT_CALLBACK_OBJECT_ACE
{
	ACE_HEADER Header;
	ACCESS_MASK Mask;
	DWORD Flags;
	GUID ObjectType;
	GUID InheritedObjectType;
	DWORD SidStart;
} SYSTEM_AUDIT_CALLBACK_OBJECT_ACE, *PSYSTEM_AUDIT_CALLBACK_OBJECT_ACE;
typedef struct _SYSTEM_ALARM_CALLBACK_OBJECT_ACE
{
	ACE_HEADER Header;
	ACCESS_MASK Mask;
	DWORD Flags;
	GUID ObjectType;
	GUID InheritedObjectType;
	DWORD SidStart;
} SYSTEM_ALARM_CALLBACK_OBJECT_ACE, *PSYSTEM_ALARM_CALLBACK_OBJECT_ACE;
#define ACE_OBJECT_TYPE_PRESENT           0x1
#define ACE_INHERITED_OBJECT_TYPE_PRESENT 0x2
typedef enum _ACL_INFORMATION_CLASS
{
	AclRevisionInformation = 1,
	AclSizeInformation
} ACL_INFORMATION_CLASS;
typedef struct _ACL_REVISION_INFORMATION
{
	DWORD AclRevision;
} ACL_REVISION_INFORMATION;
typedef ACL_REVISION_INFORMATION *PACL_REVISION_INFORMATION;
typedef struct _ACL_SIZE_INFORMATION
{
	DWORD AceCount;
	DWORD AclBytesInUse;
	DWORD AclBytesFree;
} ACL_SIZE_INFORMATION;
typedef ACL_SIZE_INFORMATION *PACL_SIZE_INFORMATION;
#define SECURITY_DESCRIPTOR_REVISION     (1)
#define SECURITY_DESCRIPTOR_REVISION1    (1)
#define SECURITY_DESCRIPTOR_MIN_LENGTH   (sizeof(SECURITY_DESCRIPTOR))
typedef WORD SECURITY_DESCRIPTOR_CONTROL, *PSECURITY_DESCRIPTOR_CONTROL;
#define SE_OWNER_DEFAULTED               (0x0001)
#define SE_GROUP_DEFAULTED               (0x0002)
#define SE_DACL_PRESENT                  (0x0004)
#define SE_DACL_DEFAULTED                (0x0008)
#define SE_SACL_PRESENT                  (0x0010)
#define SE_SACL_DEFAULTED                (0x0020)
#define SE_DACL_AUTO_INHERIT_REQ         (0x0100)
#define SE_SACL_AUTO_INHERIT_REQ         (0x0200)
#define SE_DACL_AUTO_INHERITED           (0x0400)
#define SE_SACL_AUTO_INHERITED           (0x0800)
#define SE_DACL_PROTECTED                (0x1000)
#define SE_SACL_PROTECTED                (0x2000)
#define SE_RM_CONTROL_VALID              (0x4000)
#define SE_SELF_RELATIVE                 (0x8000)
typedef struct _SECURITY_DESCRIPTOR_RELATIVE
{
	BYTE Revision;
	BYTE Sbz1;
	SECURITY_DESCRIPTOR_CONTROL Control;
	DWORD Owner;
	DWORD Group;
	DWORD Sacl;
	DWORD Dacl;
} SECURITY_DESCRIPTOR_RELATIVE, *PISECURITY_DESCRIPTOR_RELATIVE;
typedef struct _SECURITY_DESCRIPTOR
{
	BYTE Revision;
	BYTE Sbz1;
	SECURITY_DESCRIPTOR_CONTROL Control;
	PSID Owner;
	PSID Group;
	PACL Sacl;
	PACL Dacl;
} SECURITY_DESCRIPTOR, *PISECURITY_DESCRIPTOR;
typedef struct _OBJECT_TYPE_LIST
{
	WORD Level;
	WORD Sbz;
	GUID *ObjectType;
} OBJECT_TYPE_LIST, *POBJECT_TYPE_LIST;
#define ACCESS_OBJECT_GUID       0
#define ACCESS_PROPERTY_SET_GUID 1
#define ACCESS_PROPERTY_GUID     2
#define ACCESS_MAX_LEVEL         4
typedef enum _AUDIT_EVENT_TYPE
{
	AuditEventObjectAccess,
	AuditEventDirectoryServiceAccess
} AUDIT_EVENT_TYPE, *PAUDIT_EVENT_TYPE;
#define AUDIT_ALLOW_NO_PRIVILEGE 0x1
#define ACCESS_DS_SOURCE_A "DS"
#define ACCESS_DS_SOURCE_W L"DS"
#define ACCESS_DS_OBJECT_TYPE_NAME_A "Directory Service Object"
#define ACCESS_DS_OBJECT_TYPE_NAME_W L"Directory Service Object"
#define SE_PRIVILEGE_ENABLED_BY_DEFAULT (0x00000001L)
#define SE_PRIVILEGE_ENABLED            (0x00000002L)
#define SE_PRIVILEGE_REMOVED            (0X00000004L)
#define SE_PRIVILEGE_USED_FOR_ACCESS    (0x80000000L)
#define SE_PRIVILEGE_VALID_ATTRIBUTES   (SE_PRIVILEGE_ENABLED_BY_DEFAULT | SE_PRIVILEGE_ENABLED  | SE_PRIVILEGE_REMOVED | SE_PRIVILEGE_USED_FOR_ACCESS)
#define PRIVILEGE_SET_ALL_NECESSARY    (1)
typedef struct _PRIVILEGE_SET
{
	DWORD PrivilegeCount;
	DWORD Control;
	LUID_AND_ATTRIBUTES Privilege[ANYSIZE_ARRAY];
} PRIVILEGE_SET, *PPRIVILEGE_SET;
#define ACCESS_REASON_TYPE_MASK 0xffff0000
#define ACCESS_REASON_DATA_MASK 0x0000ffff
typedef enum _ACCESS_REASON_TYPE
{
	AccessReasonNone = 0x00000000,
	AccessReasonAllowedAce = 0x00010000,
	AccessReasonDeniedAce = 0x00020000,
	AccessReasonAllowedParentAce = 0x00030000,
	AccessReasonDeniedParentAce = 0x00040000,
	AccessReasonMissingPrivilege = 0x00100000,
	AccessReasonFromPrivilege = 0x00200000,
	AccessReasonIntegrityLevel = 0x00300000,
	AccessReasonOwnership = 0x00400000,
	AccessReasonNullDacl = 0x00500000,
	AccessReasonEmptyDacl = 0x00600000,
	AccessReasonNoSD = 0x00700000,
	AccessReasonNoGrant = 0x00800000
} ACCESS_REASON_TYPE;
typedef DWORD ACCESS_REASON;
typedef struct _ACCESS_REASONS
{
	ACCESS_REASON Data[32];
} ACCESS_REASONS, *PACCESS_REASONS;
#define SE_SECURITY_DESCRIPTOR_FLAG_NO_OWNER_ACE    0x00000001
#define SE_SECURITY_DESCRIPTOR_FLAG_NO_LABEL_ACE    0x00000002
#define SE_SECURITY_DESCRIPTOR_VALID_FLAGS          0x00000003
typedef struct _SE_SECURITY_DESCRIPTOR
{
	DWORD Size;
	DWORD Flags;
	PSECURITY_DESCRIPTOR SecurityDescriptor;
} SE_SECURITY_DESCRIPTOR, *PSE_SECURITY_DESCRIPTOR;
typedef struct _SE_ACCESS_REQUEST
{
	DWORD Size;
	PSE_SECURITY_DESCRIPTOR SeSecurityDescriptor;
	ACCESS_MASK DesiredAccess;
	ACCESS_MASK PreviouslyGrantedAccess;
	PSID PrincipalSelfSid;
	PGENERIC_MAPPING GenericMapping;
	DWORD ObjectTypeListCount;
	POBJECT_TYPE_LIST ObjectTypeList;
} SE_ACCESS_REQUEST, *PSE_ACCESS_REQUEST;
typedef struct _SE_ACCESS_REPLY
{
	DWORD Size;
	DWORD ResultListCount;
	PACCESS_MASK GrantedAccess;
	PDWORD AccessStatus;
	PACCESS_REASONS AccessReason;
	PPRIVILEGE_SET *Privileges;
} SE_ACCESS_REPLY, *PSE_ACCESS_REPLY;
#define SE_CREATE_TOKEN_NAME              TEXT("SeCreateTokenPrivilege")
#define SE_ASSIGNPRIMARYTOKEN_NAME        TEXT("SeAssignPrimaryTokenPrivilege")
#define SE_LOCK_MEMORY_NAME               TEXT("SeLockMemoryPrivilege")
#define SE_INCREASE_QUOTA_NAME            TEXT("SeIncreaseQuotaPrivilege")
#define SE_UNSOLICITED_INPUT_NAME         TEXT("SeUnsolicitedInputPrivilege")
#define SE_MACHINE_ACCOUNT_NAME           TEXT("SeMachineAccountPrivilege")
#define SE_TCB_NAME                       TEXT("SeTcbPrivilege")
#define SE_SECURITY_NAME                  TEXT("SeSecurityPrivilege")
#define SE_TAKE_OWNERSHIP_NAME            TEXT("SeTakeOwnershipPrivilege")
#define SE_LOAD_DRIVER_NAME               TEXT("SeLoadDriverPrivilege")
#define SE_SYSTEM_PROFILE_NAME            TEXT("SeSystemProfilePrivilege")
#define SE_SYSTEMTIME_NAME                TEXT("SeSystemtimePrivilege")
#define SE_PROF_SINGLE_PROCESS_NAME       TEXT("SeProfileSingleProcessPrivilege")
#define SE_INC_BASE_PRIORITY_NAME         TEXT("SeIncreaseBasePriorityPrivilege")
#define SE_CREATE_PAGEFILE_NAME           TEXT("SeCreatePagefilePrivilege")
#define SE_CREATE_PERMANENT_NAME          TEXT("SeCreatePermanentPrivilege")
#define SE_BACKUP_NAME                    TEXT("SeBackupPrivilege")
#define SE_RESTORE_NAME                   TEXT("SeRestorePrivilege")
#define SE_SHUTDOWN_NAME                  TEXT("SeShutdownPrivilege")
#define SE_DEBUG_NAME                     TEXT("SeDebugPrivilege")
#define SE_AUDIT_NAME                     TEXT("SeAuditPrivilege")
#define SE_SYSTEM_ENVIRONMENT_NAME        TEXT("SeSystemEnvironmentPrivilege")
#define SE_CHANGE_NOTIFY_NAME             TEXT("SeChangeNotifyPrivilege")
#define SE_REMOTE_SHUTDOWN_NAME           TEXT("SeRemoteShutdownPrivilege")
#define SE_UNDOCK_NAME                    TEXT("SeUndockPrivilege")
#define SE_SYNC_AGENT_NAME                TEXT("SeSyncAgentPrivilege")
#define SE_ENABLE_DELEGATION_NAME         TEXT("SeEnableDelegationPrivilege")
#define SE_MANAGE_VOLUME_NAME             TEXT("SeManageVolumePrivilege")
#define SE_IMPERSONATE_NAME               TEXT("SeImpersonatePrivilege")
#define SE_CREATE_GLOBAL_NAME             TEXT("SeCreateGlobalPrivilege")
#define SE_TRUSTED_CREDMAN_ACCESS_NAME    TEXT("SeTrustedCredManAccessPrivilege")
#define SE_RELABEL_NAME                   TEXT("SeRelabelPrivilege")
#define SE_INC_WORKING_SET_NAME           TEXT("SeIncreaseWorkingSetPrivilege")
#define SE_TIME_ZONE_NAME                 TEXT("SeTimeZonePrivilege")
#define SE_CREATE_SYMBOLIC_LINK_NAME      TEXT("SeCreateSymbolicLinkPrivilege")
typedef enum _SECURITY_IMPERSONATION_LEVEL
{
	SecurityAnonymous,
	SecurityIdentification,
	SecurityImpersonation,
	SecurityDelegation
} SECURITY_IMPERSONATION_LEVEL, *PSECURITY_IMPERSONATION_LEVEL;
#define SECURITY_MAX_IMPERSONATION_LEVEL SecurityDelegation
#define SECURITY_MIN_IMPERSONATION_LEVEL SecurityAnonymous
#define DEFAULT_IMPERSONATION_LEVEL SecurityImpersonation
#define VALID_IMPERSONATION_LEVEL(L) (((L) >= SECURITY_MIN_IMPERSONATION_LEVEL) && ((L) <= SECURITY_MAX_IMPERSONATION_LEVEL))
#define TOKEN_ASSIGN_PRIMARY    (0x0001)
#define TOKEN_DUPLICATE         (0x0002)
#define TOKEN_IMPERSONATE       (0x0004)
#define TOKEN_QUERY             (0x0008)
#define TOKEN_QUERY_SOURCE      (0x0010)
#define TOKEN_ADJUST_PRIVILEGES (0x0020)
#define TOKEN_ADJUST_GROUPS     (0x0040)
#define TOKEN_ADJUST_DEFAULT    (0x0080)
#define TOKEN_ADJUST_SESSIONID  (0x0100)
#define TOKEN_ALL_ACCESS_P (STANDARD_RIGHTS_REQUIRED  | TOKEN_ASSIGN_PRIMARY | TOKEN_DUPLICATE | TOKEN_IMPERSONATE | TOKEN_QUERY | TOKEN_QUERY_SOURCE | TOKEN_ADJUST_PRIVILEGES | TOKEN_ADJUST_GROUPS | TOKEN_ADJUST_DEFAULT )
#if ((defined(_WIN32_WINNT) && (_WIN32_WINNT > 0x0400)) || (!defined(_WIN32_WINNT)))
#define TOKEN_ALL_ACCESS  (TOKEN_ALL_ACCESS_P | TOKEN_ADJUST_SESSIONID )
#else
#define TOKEN_ALL_ACCESS  (TOKEN_ALL_ACCESS_P)
#endif
#define TOKEN_READ       (STANDARD_RIGHTS_READ  | TOKEN_QUERY)
#define TOKEN_WRITE      (STANDARD_RIGHTS_WRITE | TOKEN_ADJUST_PRIVILEGES | TOKEN_ADJUST_GROUPS | TOKEN_ADJUST_DEFAULT)
#define TOKEN_EXECUTE    (STANDARD_RIGHTS_EXECUTE)
typedef enum _TOKEN_TYPE
{
	TokenPrimary = 1,
	TokenImpersonation
} TOKEN_TYPE;
typedef TOKEN_TYPE *PTOKEN_TYPE;
typedef enum _TOKEN_ELEVATION_TYPE
{
	TokenElevationTypeDefault = 1,
	TokenElevationTypeFull,
	TokenElevationTypeLimited,
} TOKEN_ELEVATION_TYPE, *PTOKEN_ELEVATION_TYPE;
typedef enum _TOKEN_INFORMATION_CLASS
{
	TokenUser = 1,
	TokenGroups,
	TokenPrivileges,
	TokenOwner,
	TokenPrimaryGroup,
	TokenDefaultDacl,
	TokenSource,
	TokenType,
	TokenImpersonationLevel,
	TokenStatistics,
	TokenRestrictedSids,
	TokenSessionId,
	TokenGroupsAndPrivileges,
	TokenSessionReference,
	TokenSandBoxInert,
	TokenAuditPolicy,
	TokenOrigin,
	TokenElevationType,
	TokenLinkedToken,
	TokenElevation,
	TokenHasRestrictions,
	TokenAccessInformation,
	TokenVirtualizationAllowed,
	TokenVirtualizationEnabled,
	TokenIntegrityLevel,
	TokenUIAccess,
	TokenMandatoryPolicy,
	TokenLogonSid,
	MaxTokenInfoClass
} TOKEN_INFORMATION_CLASS, *PTOKEN_INFORMATION_CLASS;
typedef struct _TOKEN_USER
{
	SID_AND_ATTRIBUTES User;
} TOKEN_USER, *PTOKEN_USER;
typedef struct _TOKEN_GROUPS
{
	DWORD GroupCount;
	SID_AND_ATTRIBUTES Groups[ANYSIZE_ARRAY];
} TOKEN_GROUPS, *PTOKEN_GROUPS;
typedef struct _TOKEN_PRIVILEGES
{
	DWORD PrivilegeCount;
	LUID_AND_ATTRIBUTES Privileges[ANYSIZE_ARRAY];
} TOKEN_PRIVILEGES, *PTOKEN_PRIVILEGES;
typedef struct _TOKEN_OWNER
{
	PSID Owner;
} TOKEN_OWNER, *PTOKEN_OWNER;
typedef struct _TOKEN_PRIMARY_GROUP
{
	PSID PrimaryGroup;
} TOKEN_PRIMARY_GROUP, *PTOKEN_PRIMARY_GROUP;
typedef struct _TOKEN_DEFAULT_DACL
{
	PACL DefaultDacl;
} TOKEN_DEFAULT_DACL, *PTOKEN_DEFAULT_DACL;
typedef struct _TOKEN_GROUPS_AND_PRIVILEGES
{
	DWORD SidCount;
	DWORD SidLength;
	PSID_AND_ATTRIBUTES Sids;
	DWORD RestrictedSidCount;
	DWORD RestrictedSidLength;
	PSID_AND_ATTRIBUTES RestrictedSids;
	DWORD PrivilegeCount;
	DWORD PrivilegeLength;
	PLUID_AND_ATTRIBUTES Privileges;
	LUID AuthenticationId;
} TOKEN_GROUPS_AND_PRIVILEGES, *PTOKEN_GROUPS_AND_PRIVILEGES;
typedef struct _TOKEN_LINKED_TOKEN
{
	HANDLE LinkedToken;
} TOKEN_LINKED_TOKEN, *PTOKEN_LINKED_TOKEN;
typedef struct _TOKEN_ELEVATION
{
	DWORD TokenIsElevated;
} TOKEN_ELEVATION, *PTOKEN_ELEVATION;
typedef struct _TOKEN_MANDATORY_LABEL
{
	SID_AND_ATTRIBUTES Label;
} TOKEN_MANDATORY_LABEL, *PTOKEN_MANDATORY_LABEL;
#define TOKEN_MANDATORY_POLICY_OFF             0x0
#define TOKEN_MANDATORY_POLICY_NO_WRITE_UP     0x1
#define TOKEN_MANDATORY_POLICY_NEW_PROCESS_MIN 0x2
#define TOKEN_MANDATORY_POLICY_VALID_MASK      (TOKEN_MANDATORY_POLICY_NO_WRITE_UP | TOKEN_MANDATORY_POLICY_NEW_PROCESS_MIN)
typedef struct _TOKEN_MANDATORY_POLICY
{
	DWORD Policy;
} TOKEN_MANDATORY_POLICY, *PTOKEN_MANDATORY_POLICY;
typedef struct _TOKEN_ACCESS_INFORMATION
{
	PSID_AND_ATTRIBUTES_HASH SidHash;
	PSID_AND_ATTRIBUTES_HASH RestrictedSidHash;
	PTOKEN_PRIVILEGES Privileges;
	LUID AuthenticationId;
	TOKEN_TYPE TokenType;
	SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
	TOKEN_MANDATORY_POLICY MandatoryPolicy;
	DWORD Flags;
} TOKEN_ACCESS_INFORMATION, *PTOKEN_ACCESS_INFORMATION;
#define POLICY_AUDIT_SUBCATEGORY_COUNT (53)
typedef struct _TOKEN_AUDIT_POLICY
{
	BYTE PerUserPolicy[((POLICY_AUDIT_SUBCATEGORY_COUNT) >> 1) + 1];
} TOKEN_AUDIT_POLICY, *PTOKEN_AUDIT_POLICY;
#define TOKEN_SOURCE_LENGTH 8
typedef struct _TOKEN_SOURCE
{
	CHAR SourceName[TOKEN_SOURCE_LENGTH];
	LUID SourceIdentifier;
} TOKEN_SOURCE, *PTOKEN_SOURCE;
typedef struct _TOKEN_STATISTICS
{
	LUID TokenId;
	LUID AuthenticationId;
	LARGE_INTEGER ExpirationTime;
	TOKEN_TYPE TokenType;
	SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
	DWORD DynamicCharged;
	DWORD DynamicAvailable;
	DWORD GroupCount;
	DWORD PrivilegeCount;
	LUID ModifiedId;
} TOKEN_STATISTICS, *PTOKEN_STATISTICS;
typedef struct _TOKEN_CONTROL
{
	LUID TokenId;
	LUID AuthenticationId;
	LUID ModifiedId;
	TOKEN_SOURCE TokenSource;
} TOKEN_CONTROL, *PTOKEN_CONTROL;
typedef struct _TOKEN_ORIGIN
{
	LUID OriginatingLogonSession;
} TOKEN_ORIGIN, *PTOKEN_ORIGIN;
typedef enum _MANDATORY_LEVEL
{
	MandatoryLevelUntrusted = 0,
	MandatoryLevelLow,
	MandatoryLevelMedium,
	MandatoryLevelHigh,
	MandatoryLevelSystem,
	MandatoryLevelSecureProcess,
	MandatoryLevelCount
} MANDATORY_LEVEL, *PMANDATORY_LEVEL;
#define SECURITY_DYNAMIC_TRACKING      (TRUE)
#define SECURITY_STATIC_TRACKING       (FALSE)
typedef BOOLEAN SECURITY_CONTEXT_TRACKING_MODE, *PSECURITY_CONTEXT_TRACKING_MODE;
typedef struct _SECURITY_QUALITY_OF_SERVICE
{
	DWORD Length;
	SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
	SECURITY_CONTEXT_TRACKING_MODE ContextTrackingMode;
	BOOLEAN EffectiveOnly;
} SECURITY_QUALITY_OF_SERVICE, *PSECURITY_QUALITY_OF_SERVICE;
typedef struct _SE_IMPERSONATION_STATE
{
	PACCESS_TOKEN Token;
	BOOLEAN CopyOnOpen;
	BOOLEAN EffectiveOnly;
	SECURITY_IMPERSONATION_LEVEL Level;
} SE_IMPERSONATION_STATE, *PSE_IMPERSONATION_STATE;
#define DISABLE_MAX_PRIVILEGE   0x1
#define SANDBOX_INERT           0x2
#define LUA_TOKEN               0x4
#define WRITE_RESTRICTED        0x8
typedef DWORD SECURITY_INFORMATION, *PSECURITY_INFORMATION;
#define OWNER_SECURITY_INFORMATION       (0x00000001L)
#define GROUP_SECURITY_INFORMATION       (0x00000002L)
#define DACL_SECURITY_INFORMATION        (0x00000004L)
#define SACL_SECURITY_INFORMATION        (0x00000008L)
#define LABEL_SECURITY_INFORMATION       (0x00000010L)
#define PROTECTED_DACL_SECURITY_INFORMATION     (0x80000000L)
#define PROTECTED_SACL_SECURITY_INFORMATION     (0x40000000L)
#define UNPROTECTED_DACL_SECURITY_INFORMATION   (0x20000000L)
#define UNPROTECTED_SACL_SECURITY_INFORMATION   (0x10000000L)
#define PROCESS_TERMINATE                  (0x0001)
#define PROCESS_CREATE_THREAD              (0x0002)
#define PROCESS_SET_SESSIONID              (0x0004)
#define PROCESS_VM_OPERATION               (0x0008)
#define PROCESS_VM_READ                    (0x0010)
#define PROCESS_VM_WRITE                   (0x0020)
#define PROCESS_DUP_HANDLE                 (0x0040)
#define PROCESS_CREATE_PROCESS             (0x0080)
#define PROCESS_SET_QUOTA                  (0x0100)
#define PROCESS_SET_INFORMATION            (0x0200)
#define PROCESS_QUERY_INFORMATION          (0x0400)
#define PROCESS_SUSPEND_RESUME             (0x0800)
#define PROCESS_QUERY_LIMITED_INFORMATION  (0x1000)
#if (NTDDI_VERSION >= NTDDI_VISTA)
#define PROCESS_ALL_ACCESS        (STANDARD_RIGHTS_REQUIRED | SYNCHRONIZE | 0xFFFF)
#else
#define PROCESS_ALL_ACCESS        (STANDARD_RIGHTS_REQUIRED | SYNCHRONIZE | 0xFFF)
#endif
#if defined(_WIN64)
#define MAXIMUM_PROC_PER_GROUP 64
#else
#define MAXIMUM_PROC_PER_GROUP 32
#endif
#define MAXIMUM_PROCESSORS          MAXIMUM_PROC_PER_GROUP
#define THREAD_TERMINATE                 (0x0001)
#define THREAD_SUSPEND_RESUME            (0x0002)
#define THREAD_GET_CONTEXT               (0x0008)
#define THREAD_SET_CONTEXT               (0x0010)
#define THREAD_QUERY_INFORMATION         (0x0040)
#define THREAD_SET_INFORMATION           (0x0020)
#define THREAD_SET_THREAD_TOKEN          (0x0080)
#define THREAD_IMPERSONATE               (0x0100)
#define THREAD_DIRECT_IMPERSONATION      (0x0200)
#define THREAD_SET_LIMITED_INFORMATION   (0x0400)
#define THREAD_QUERY_LIMITED_INFORMATION (0x0800)
#if (NTDDI_VERSION >= NTDDI_VISTA)
#define THREAD_ALL_ACCESS         (STANDARD_RIGHTS_REQUIRED | SYNCHRONIZE | 0xFFFF)
#else
#define THREAD_ALL_ACCESS         (STANDARD_RIGHTS_REQUIRED | SYNCHRONIZE | 0x3FF)
#endif
#define JOB_OBJECT_ASSIGN_PROCESS           (0x0001)
#define JOB_OBJECT_SET_ATTRIBUTES           (0x0002)
#define JOB_OBJECT_QUERY                    (0x0004)
#define JOB_OBJECT_TERMINATE                (0x0008)
#define JOB_OBJECT_SET_SECURITY_ATTRIBUTES  (0x0010)
#define JOB_OBJECT_ALL_ACCESS       (STANDARD_RIGHTS_REQUIRED | SYNCHRONIZE | 0x1F )
typedef struct _JOB_SET_ARRAY
{
	HANDLE JobHandle;
	DWORD MemberLevel;
	DWORD Flags;
} JOB_SET_ARRAY, *PJOB_SET_ARRAY;
#define FLS_MAXIMUM_AVAILABLE 128
#define TLS_MINIMUM_AVAILABLE 64
typedef struct _NT_TIB
{
	struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList;
	PVOID StackBase;
	PVOID StackLimit;
	PVOID SubSystemTib;
#if defined(_MSC_EXTENSIONS)
	union
	{
		PVOID FiberData;
		DWORD Version;
	};
#else
	PVOID FiberData;
#endif
	PVOID ArbitraryUserPointer;
	struct _NT_TIB *Self;
} NT_TIB;
typedef NT_TIB *PNT_TIB;
typedef struct _NT_TIB32
{
	DWORD ExceptionList;
	DWORD StackBase;
	DWORD StackLimit;
	DWORD SubSystemTib;
#if defined(_MSC_EXTENSIONS)
	union
	{
		DWORD FiberData;
		DWORD Version;
	};
#else
	DWORD FiberData;
#endif
	DWORD ArbitraryUserPointer;
	DWORD Self;
} NT_TIB32, *PNT_TIB32;
typedef struct _NT_TIB64
{
	DWORD64 ExceptionList;
	DWORD64 StackBase;
	DWORD64 StackLimit;
	DWORD64 SubSystemTib;
#if defined(_MSC_EXTENSIONS)
	union
	{
		DWORD64 FiberData;
		DWORD Version;
	};
#else
	DWORD64 FiberData;
#endif
	DWORD64 ArbitraryUserPointer;
	DWORD64 Self;
} NT_TIB64, *PNT_TIB64;
#define THREAD_BASE_PRIORITY_LOWRT  15
#define THREAD_BASE_PRIORITY_MAX    2
#define THREAD_BASE_PRIORITY_MIN    (-2)
#define THREAD_BASE_PRIORITY_IDLE   (-15)
typedef struct _UMS_CREATE_THREAD_ATTRIBUTES
{
	DWORD UmsVersion;
	PVOID UmsContext;
	PVOID UmsCompletionList;
} UMS_CREATE_THREAD_ATTRIBUTES, *PUMS_CREATE_THREAD_ATTRIBUTES;
typedef struct _QUOTA_LIMITS
{
	SIZE_T PagedPoolLimit;
	SIZE_T NonPagedPoolLimit;
	SIZE_T MinimumWorkingSetSize;
	SIZE_T MaximumWorkingSetSize;
	SIZE_T PagefileLimit;
	LARGE_INTEGER TimeLimit;
} QUOTA_LIMITS, *PQUOTA_LIMITS;
#define QUOTA_LIMITS_HARDWS_MIN_ENABLE  0x00000001
#define QUOTA_LIMITS_HARDWS_MIN_DISABLE 0x00000002
#define QUOTA_LIMITS_HARDWS_MAX_ENABLE  0x00000004
#define QUOTA_LIMITS_HARDWS_MAX_DISABLE 0x00000008
#define QUOTA_LIMITS_USE_DEFAULT_LIMITS 0x00000010
typedef union _RATE_QUOTA_LIMIT
{
	DWORD RateData;
	struct
	{
		DWORD RatePercent:7;
		DWORD Reserved0:25;
	} DUMMYSTRUCTNAME;
} RATE_QUOTA_LIMIT, *PRATE_QUOTA_LIMIT;
typedef struct _QUOTA_LIMITS_EX
{
	SIZE_T PagedPoolLimit;
	SIZE_T NonPagedPoolLimit;
	SIZE_T MinimumWorkingSetSize;
	SIZE_T MaximumWorkingSetSize;
	SIZE_T PagefileLimit;
	LARGE_INTEGER TimeLimit;
	SIZE_T WorkingSetLimit;
	SIZE_T Reserved2;
	SIZE_T Reserved3;
	SIZE_T Reserved4;
	DWORD Flags;
	RATE_QUOTA_LIMIT CpuRateLimit;
} QUOTA_LIMITS_EX, *PQUOTA_LIMITS_EX;
typedef struct _IO_COUNTERS
{
	ULONGLONG ReadOperationCount;
	ULONGLONG WriteOperationCount;
	ULONGLONG OtherOperationCount;
	ULONGLONG ReadTransferCount;
	ULONGLONG WriteTransferCount;
	ULONGLONG OtherTransferCount;
} IO_COUNTERS;
typedef IO_COUNTERS *PIO_COUNTERS;
#define MAX_HW_COUNTERS 16
#define THREAD_PROFILING_FLAG_DISPATCH  0x00000001
typedef enum _HARDWARE_COUNTER_TYPE
{
	PMCCounter,
	MaxHardwareCounterType
} HARDWARE_COUNTER_TYPE, *PHARDWARE_COUNTER_TYPE;
typedef struct _JOBOBJECT_BASIC_ACCOUNTING_INFORMATION
{
	LARGE_INTEGER TotalUserTime;
	LARGE_INTEGER TotalKernelTime;
	LARGE_INTEGER ThisPeriodTotalUserTime;
	LARGE_INTEGER ThisPeriodTotalKernelTime;
	DWORD TotalPageFaultCount;
	DWORD TotalProcesses;
	DWORD ActiveProcesses;
	DWORD TotalTerminatedProcesses;
} JOBOBJECT_BASIC_ACCOUNTING_INFORMATION, *PJOBOBJECT_BASIC_ACCOUNTING_INFORMATION;
typedef struct _JOBOBJECT_BASIC_LIMIT_INFORMATION
{
	LARGE_INTEGER PerProcessUserTimeLimit;
	LARGE_INTEGER PerJobUserTimeLimit;
	DWORD LimitFlags;
	SIZE_T MinimumWorkingSetSize;
	SIZE_T MaximumWorkingSetSize;
	DWORD ActiveProcessLimit;
	ULONG_PTR Affinity;
	DWORD PriorityClass;
	DWORD SchedulingClass;
} JOBOBJECT_BASIC_LIMIT_INFORMATION, *PJOBOBJECT_BASIC_LIMIT_INFORMATION;
typedef struct _JOBOBJECT_EXTENDED_LIMIT_INFORMATION
{
	JOBOBJECT_BASIC_LIMIT_INFORMATION BasicLimitInformation;
	IO_COUNTERS IoInfo;
	SIZE_T ProcessMemoryLimit;
	SIZE_T JobMemoryLimit;
	SIZE_T PeakProcessMemoryUsed;
	SIZE_T PeakJobMemoryUsed;
} JOBOBJECT_EXTENDED_LIMIT_INFORMATION, *PJOBOBJECT_EXTENDED_LIMIT_INFORMATION;
typedef struct _JOBOBJECT_BASIC_PROCESS_ID_LIST
{
	DWORD NumberOfAssignedProcesses;
	DWORD NumberOfProcessIdsInList;
	ULONG_PTR ProcessIdList[1];
} JOBOBJECT_BASIC_PROCESS_ID_LIST, *PJOBOBJECT_BASIC_PROCESS_ID_LIST;
typedef struct _JOBOBJECT_BASIC_UI_RESTRICTIONS
{
	DWORD UIRestrictionsClass;
} JOBOBJECT_BASIC_UI_RESTRICTIONS, *PJOBOBJECT_BASIC_UI_RESTRICTIONS;
typedef struct _JOBOBJECT_SECURITY_LIMIT_INFORMATION
{
	DWORD SecurityLimitFlags;
	HANDLE JobToken;
	PTOKEN_GROUPS SidsToDisable;
	PTOKEN_PRIVILEGES PrivilegesToDelete;
	PTOKEN_GROUPS RestrictedSids;
} JOBOBJECT_SECURITY_LIMIT_INFORMATION, *PJOBOBJECT_SECURITY_LIMIT_INFORMATION;
typedef struct _JOBOBJECT_END_OF_JOB_TIME_INFORMATION
{
	DWORD EndOfJobTimeAction;
} JOBOBJECT_END_OF_JOB_TIME_INFORMATION, *PJOBOBJECT_END_OF_JOB_TIME_INFORMATION;
typedef struct _JOBOBJECT_ASSOCIATE_COMPLETION_PORT
{
	PVOID CompletionKey;
	HANDLE CompletionPort;
} JOBOBJECT_ASSOCIATE_COMPLETION_PORT, *PJOBOBJECT_ASSOCIATE_COMPLETION_PORT;
typedef struct _JOBOBJECT_BASIC_AND_IO_ACCOUNTING_INFORMATION
{
	JOBOBJECT_BASIC_ACCOUNTING_INFORMATION BasicInfo;
	IO_COUNTERS IoInfo;
} JOBOBJECT_BASIC_AND_IO_ACCOUNTING_INFORMATION, *PJOBOBJECT_BASIC_AND_IO_ACCOUNTING_INFORMATION;
typedef struct _JOBOBJECT_JOBSET_INFORMATION
{
	DWORD MemberLevel;
} JOBOBJECT_JOBSET_INFORMATION, *PJOBOBJECT_JOBSET_INFORMATION;
#define JOB_OBJECT_TERMINATE_AT_END_OF_JOB  0
#define JOB_OBJECT_POST_AT_END_OF_JOB       1
#define JOB_OBJECT_MSG_END_OF_JOB_TIME          1
#define JOB_OBJECT_MSG_END_OF_PROCESS_TIME      2
#define JOB_OBJECT_MSG_ACTIVE_PROCESS_LIMIT     3
#define JOB_OBJECT_MSG_ACTIVE_PROCESS_ZERO      4
#define JOB_OBJECT_MSG_NEW_PROCESS              6
#define JOB_OBJECT_MSG_EXIT_PROCESS             7
#define JOB_OBJECT_MSG_ABNORMAL_EXIT_PROCESS    8
#define JOB_OBJECT_MSG_PROCESS_MEMORY_LIMIT     9
#define JOB_OBJECT_MSG_JOB_MEMORY_LIMIT         10
#define JOB_OBJECT_LIMIT_WORKINGSET                 0x00000001
#define JOB_OBJECT_LIMIT_PROCESS_TIME               0x00000002
#define JOB_OBJECT_LIMIT_JOB_TIME                   0x00000004
#define JOB_OBJECT_LIMIT_ACTIVE_PROCESS             0x00000008
#define JOB_OBJECT_LIMIT_AFFINITY                   0x00000010
#define JOB_OBJECT_LIMIT_PRIORITY_CLASS             0x00000020
#define JOB_OBJECT_LIMIT_PRESERVE_JOB_TIME          0x00000040
#define JOB_OBJECT_LIMIT_SCHEDULING_CLASS           0x00000080
#define JOB_OBJECT_LIMIT_PROCESS_MEMORY             0x00000100
#define JOB_OBJECT_LIMIT_JOB_MEMORY                 0x00000200
#define JOB_OBJECT_LIMIT_DIE_ON_UNHANDLED_EXCEPTION 0x00000400
#define JOB_OBJECT_LIMIT_BREAKAWAY_OK               0x00000800
#define JOB_OBJECT_LIMIT_SILENT_BREAKAWAY_OK        0x00001000
#define JOB_OBJECT_LIMIT_KILL_ON_JOB_CLOSE          0x00002000
#define JOB_OBJECT_LIMIT_SUBSET_AFFINITY            0x00004000
#define JOB_OBJECT_LIMIT_RESERVED3                  0x00008000
#define JOB_OBJECT_LIMIT_RESERVED4                  0x00010000
#define JOB_OBJECT_LIMIT_RESERVED5                  0x00020000
#define JOB_OBJECT_LIMIT_RESERVED6                  0x00040000
#define JOB_OBJECT_LIMIT_VALID_FLAGS            0x0007ffff
#define JOB_OBJECT_BASIC_LIMIT_VALID_FLAGS      0x000000ff
#define JOB_OBJECT_EXTENDED_LIMIT_VALID_FLAGS   0x00007fff
#define JOB_OBJECT_RESERVED_LIMIT_VALID_FLAGS   0x0007ffff
#define JOB_OBJECT_UILIMIT_NONE             0x00000000
#define JOB_OBJECT_UILIMIT_HANDLES          0x00000001
#define JOB_OBJECT_UILIMIT_READCLIPBOARD    0x00000002
#define JOB_OBJECT_UILIMIT_WRITECLIPBOARD   0x00000004
#define JOB_OBJECT_UILIMIT_SYSTEMPARAMETERS 0x00000008
#define JOB_OBJECT_UILIMIT_DISPLAYSETTINGS  0x00000010
#define JOB_OBJECT_UILIMIT_GLOBALATOMS      0x00000020
#define JOB_OBJECT_UILIMIT_DESKTOP          0x00000040
#define JOB_OBJECT_UILIMIT_EXITWINDOWS      0x00000080
#define JOB_OBJECT_UILIMIT_ALL              0x000000FF
#define JOB_OBJECT_UI_VALID_FLAGS           0x000000FF
#define JOB_OBJECT_SECURITY_NO_ADMIN            0x00000001
#define JOB_OBJECT_SECURITY_RESTRICTED_TOKEN    0x00000002
#define JOB_OBJECT_SECURITY_ONLY_TOKEN          0x00000004
#define JOB_OBJECT_SECURITY_FILTER_TOKENS       0x00000008
#define JOB_OBJECT_SECURITY_VALID_FLAGS         0x0000000f
typedef enum _JOBOBJECTINFOCLASS
{
	JobObjectBasicAccountingInformation = 1,
	JobObjectBasicLimitInformation,
	JobObjectBasicProcessIdList,
	JobObjectBasicUIRestrictions,
	JobObjectSecurityLimitInformation,
	JobObjectEndOfJobTimeInformation,
	JobObjectAssociateCompletionPortInformation,
	JobObjectBasicAndIoAccountingInformation,
	JobObjectExtendedLimitInformation,
	JobObjectJobSetInformation,
	JobObjectGroupInformation,
	MaxJobObjectInfoClass
} JOBOBJECTINFOCLASS;
#define EVENT_MODIFY_STATE      0x0002
#define EVENT_ALL_ACCESS (STANDARD_RIGHTS_REQUIRED|SYNCHRONIZE|0x3)
#define MUTANT_QUERY_STATE      0x0001
#define MUTANT_ALL_ACCESS (STANDARD_RIGHTS_REQUIRED|SYNCHRONIZE| MUTANT_QUERY_STATE)
#define SEMAPHORE_MODIFY_STATE      0x0002
#define SEMAPHORE_ALL_ACCESS (STANDARD_RIGHTS_REQUIRED|SYNCHRONIZE|0x3)
#define TIMER_QUERY_STATE       0x0001
#define TIMER_MODIFY_STATE      0x0002
#define TIMER_ALL_ACCESS (STANDARD_RIGHTS_REQUIRED|SYNCHRONIZE| TIMER_QUERY_STATE|TIMER_MODIFY_STATE)
#define TIME_ZONE_ID_UNKNOWN  0
#define TIME_ZONE_ID_STANDARD 1
#define TIME_ZONE_ID_DAYLIGHT 2
typedef enum _LOGICAL_PROCESSOR_RELATIONSHIP
{
	RelationProcessorCore,
	RelationNumaNode,
	RelationCache,
	RelationProcessorPackage,
	RelationGroup,
	RelationAll = 0xffff
} LOGICAL_PROCESSOR_RELATIONSHIP;
#define LTP_PC_SMT 0x1
typedef enum _PROCESSOR_CACHE_TYPE
{
	CacheUnified,
	CacheInstruction,
	CacheData,
	CacheTrace
} PROCESSOR_CACHE_TYPE;
#define CACHE_FULLY_ASSOCIATIVE 0xFF
typedef struct _CACHE_DESCRIPTOR
{
	BYTE Level;
	BYTE Associativity;
	WORD LineSize;
	DWORD Size;
	PROCESSOR_CACHE_TYPE Type;
} CACHE_DESCRIPTOR, *PCACHE_DESCRIPTOR;
typedef struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION
{
	ULONG_PTR ProcessorMask;
	LOGICAL_PROCESSOR_RELATIONSHIP Relationship;
	union
	{
		struct
		{
			BYTE Flags;
		} ProcessorCore;
		struct
		{
			DWORD NodeNumber;
		} NumaNode;
		CACHE_DESCRIPTOR Cache;
		ULONGLONG Reserved[2];
	} DUMMYUNIONNAME;
} SYSTEM_LOGICAL_PROCESSOR_INFORMATION, *PSYSTEM_LOGICAL_PROCESSOR_INFORMATION;
typedef struct _PROCESSOR_RELATIONSHIP
{
	BYTE Flags;
	BYTE Reserved[21];
	WORD GroupCount;
	GROUP_AFFINITY GroupMask[ANYSIZE_ARRAY];
} PROCESSOR_RELATIONSHIP, *PPROCESSOR_RELATIONSHIP;
typedef struct _NUMA_NODE_RELATIONSHIP
{
	DWORD NodeNumber;
	BYTE Reserved[20];
	GROUP_AFFINITY GroupMask;
} NUMA_NODE_RELATIONSHIP, *PNUMA_NODE_RELATIONSHIP;
typedef struct _CACHE_RELATIONSHIP
{
	BYTE Level;
	BYTE Associativity;
	WORD LineSize;
	DWORD CacheSize;
	PROCESSOR_CACHE_TYPE Type;
	BYTE Reserved[20];
	GROUP_AFFINITY GroupMask;
} CACHE_RELATIONSHIP, *PCACHE_RELATIONSHIP;
typedef struct _PROCESSOR_GROUP_INFO
{
	BYTE MaximumProcessorCount;
	BYTE ActiveProcessorCount;
	BYTE Reserved[38];
	KAFFINITY ActiveProcessorMask;
} PROCESSOR_GROUP_INFO, *PPROCESSOR_GROUP_INFO;
typedef struct _GROUP_RELATIONSHIP
{
	WORD MaximumGroupCount;
	WORD ActiveGroupCount;
	BYTE Reserved[20];
	PROCESSOR_GROUP_INFO GroupInfo[ANYSIZE_ARRAY];
} GROUP_RELATIONSHIP, *PGROUP_RELATIONSHIP;
struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX
{
	LOGICAL_PROCESSOR_RELATIONSHIP Relationship;
	DWORD Size;
	union
	{
		PROCESSOR_RELATIONSHIP Processor;
		NUMA_NODE_RELATIONSHIP NumaNode;
		CACHE_RELATIONSHIP Cache;
		GROUP_RELATIONSHIP Group;
	} DUMMYUNIONNAME;
};
typedef struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX, *PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX;
typedef struct _SYSTEM_PROCESSOR_CYCLE_TIME_INFORMATION
{
	DWORD64 CycleTime;
} SYSTEM_PROCESSOR_CYCLE_TIME_INFORMATION, *PSYSTEM_PROCESSOR_CYCLE_TIME_INFORMATION;
#define PROCESSOR_INTEL_386     386
#define PROCESSOR_INTEL_486     486
#define PROCESSOR_INTEL_PENTIUM 586
#define PROCESSOR_INTEL_IA64    2200
#define PROCESSOR_AMD_X8664     8664
#define PROCESSOR_MIPS_R4000    4000
#define PROCESSOR_ALPHA_21064   21064
#define PROCESSOR_PPC_601       601
#define PROCESSOR_PPC_603       603
#define PROCESSOR_PPC_604       604
#define PROCESSOR_PPC_620       620
#define PROCESSOR_HITACHI_SH3   10003
#define PROCESSOR_HITACHI_SH3E  10004
#define PROCESSOR_HITACHI_SH4   10005
#define PROCESSOR_MOTOROLA_821  821
#define PROCESSOR_SHx_SH3       103
#define PROCESSOR_SHx_SH4       104
#define PROCESSOR_STRONGARM     2577
#define PROCESSOR_ARM720        1824
#define PROCESSOR_ARM820        2080
#define PROCESSOR_ARM920        2336
#define PROCESSOR_ARM_7TDMI     70001
#define PROCESSOR_OPTIL         0x494f
#define PROCESSOR_ARCHITECTURE_INTEL            0
#define PROCESSOR_ARCHITECTURE_MIPS             1
#define PROCESSOR_ARCHITECTURE_ALPHA            2
#define PROCESSOR_ARCHITECTURE_PPC              3
#define PROCESSOR_ARCHITECTURE_SHX              4
#define PROCESSOR_ARCHITECTURE_ARM              5
#define PROCESSOR_ARCHITECTURE_IA64             6
#define PROCESSOR_ARCHITECTURE_ALPHA64          7
#define PROCESSOR_ARCHITECTURE_MSIL             8
#define PROCESSOR_ARCHITECTURE_AMD64            9
#define PROCESSOR_ARCHITECTURE_IA32_ON_WIN64    10
#define PROCESSOR_ARCHITECTURE_UNKNOWN 0xFFFF
#define PF_FLOATING_POINT_PRECISION_ERRATA  0
#define PF_FLOATING_POINT_EMULATED          1
#define PF_COMPARE_EXCHANGE_DOUBLE          2
#define PF_MMX_INSTRUCTIONS_AVAILABLE       3
#define PF_PPC_MOVEMEM_64BIT_OK             4
#define PF_ALPHA_BYTE_INSTRUCTIONS          5
#define PF_XMMI_INSTRUCTIONS_AVAILABLE      6
#define PF_3DNOW_INSTRUCTIONS_AVAILABLE     7
#define PF_RDTSC_INSTRUCTION_AVAILABLE      8
#define PF_PAE_ENABLED                      9
#define PF_XMMI64_INSTRUCTIONS_AVAILABLE   10
#define PF_SSE_DAZ_MODE_AVAILABLE          11
#define PF_NX_ENABLED                      12
#define PF_SSE3_INSTRUCTIONS_AVAILABLE     13
#define PF_COMPARE_EXCHANGE128             14
#define PF_COMPARE64_EXCHANGE128           15
#define PF_CHANNELS_ENABLED                16
#define PF_XSAVE_ENABLED                   17
#define XSTATE_LEGACY_FLOATING_POINT        0
#define XSTATE_LEGACY_SSE                   1
#define XSTATE_GSSE                         2
#define XSTATE_MASK_LEGACY_FLOATING_POINT   (1i64 << (XSTATE_LEGACY_FLOATING_POINT))
#define XSTATE_MASK_LEGACY_SSE              (1i64 << (XSTATE_LEGACY_SSE))
#define XSTATE_MASK_LEGACY                  (XSTATE_MASK_LEGACY_FLOATING_POINT | XSTATE_MASK_LEGACY_SSE)
#define XSTATE_MASK_GSSE                    (1i64 << (XSTATE_GSSE))
#define MAXIMUM_XSTATE_FEATURES             64
typedef struct _XSTATE_FEATURE
{
	DWORD Offset;
	DWORD Size;
} XSTATE_FEATURE, *PXSTATE_FEATURE;
typedef struct _XSTATE_CONFIGURATION
{
	DWORD64 EnabledFeatures;
	DWORD Size;
	DWORD OptimizedSave:1;
	XSTATE_FEATURE Features[MAXIMUM_XSTATE_FEATURES];
} XSTATE_CONFIGURATION, *PXSTATE_CONFIGURATION;
typedef struct _MEMORY_BASIC_INFORMATION
{
	PVOID BaseAddress;
	PVOID AllocationBase;
	DWORD AllocationProtect;
	SIZE_T RegionSize;
	DWORD State;
	DWORD Protect;
	DWORD Type;
} MEMORY_BASIC_INFORMATION, *PMEMORY_BASIC_INFORMATION;
typedef struct _MEMORY_BASIC_INFORMATION32
{
	DWORD BaseAddress;
	DWORD AllocationBase;
	DWORD AllocationProtect;
	DWORD RegionSize;
	DWORD State;
	DWORD Protect;
	DWORD Type;
} MEMORY_BASIC_INFORMATION32, *PMEMORY_BASIC_INFORMATION32;
typedef struct DECLSPEC_ALIGN (16) _MEMORY_BASIC_INFORMATION64
{
	ULONGLONG BaseAddress;
	ULONGLONG AllocationBase;
	DWORD AllocationProtect;
	DWORD __alignment1;
	ULONGLONG RegionSize;
	DWORD State;
	DWORD Protect;
	DWORD Type;
	DWORD __alignment2;
}
MEMORY_BASIC_INFORMATION64, *PMEMORY_BASIC_INFORMATION64;
#define SECTION_QUERY                0x0001
#define SECTION_MAP_WRITE            0x0002
#define SECTION_MAP_READ             0x0004
#define SECTION_MAP_EXECUTE          0x0008
#define SECTION_EXTEND_SIZE          0x0010
#define SECTION_MAP_EXECUTE_EXPLICIT 0x0020
#define SECTION_ALL_ACCESS (STANDARD_RIGHTS_REQUIRED|SECTION_QUERY| SECTION_MAP_WRITE | SECTION_MAP_READ | SECTION_MAP_EXECUTE | SECTION_EXTEND_SIZE)
#define SESSION_QUERY_ACCESS  0x0001
#define SESSION_MODIFY_ACCESS 0x0002
#define SESSION_ALL_ACCESS (STANDARD_RIGHTS_REQUIRED | SESSION_QUERY_ACCESS | SESSION_MODIFY_ACCESS)
#define PAGE_NOACCESS          0x01
#define PAGE_READONLY          0x02
#define PAGE_READWRITE         0x04
#define PAGE_WRITECOPY         0x08
#define PAGE_EXECUTE           0x10
#define PAGE_EXECUTE_READ      0x20
#define PAGE_EXECUTE_READWRITE 0x40
#define PAGE_EXECUTE_WRITECOPY 0x80
#define PAGE_GUARD            0x100
#define PAGE_NOCACHE          0x200
#define PAGE_WRITECOMBINE     0x400
#define MEM_COMMIT           0x1000
#define MEM_RESERVE          0x2000
#define MEM_DECOMMIT         0x4000
#define MEM_RELEASE          0x8000
#define MEM_FREE            0x10000
#define MEM_PRIVATE         0x20000
#define MEM_MAPPED          0x40000
#define MEM_RESET           0x80000
#define MEM_TOP_DOWN       0x100000
#define MEM_WRITE_WATCH    0x200000
#define MEM_PHYSICAL       0x400000
#define MEM_ROTATE         0x800000
#define MEM_LARGE_PAGES  0x20000000
#define MEM_4MB_PAGES    0x80000000
#define SEC_FILE           0x800000
#define SEC_IMAGE         0x1000000
#define SEC_PROTECTED_IMAGE  0x2000000
#define SEC_RESERVE       0x4000000
#define SEC_COMMIT        0x8000000
#define SEC_NOCACHE      0x10000000
#define SEC_WRITECOMBINE 0x40000000
#define SEC_LARGE_PAGES  0x80000000
#define MEM_IMAGE         SEC_IMAGE
#define WRITE_WATCH_FLAG_RESET 0x01
#define FILE_READ_DATA            ( 0x0001 )
#define FILE_LIST_DIRECTORY       ( 0x0001 )
#define FILE_WRITE_DATA           ( 0x0002 )
#define FILE_ADD_FILE             ( 0x0002 )
#define FILE_APPEND_DATA          ( 0x0004 )
#define FILE_ADD_SUBDIRECTORY     ( 0x0004 )
#define FILE_CREATE_PIPE_INSTANCE ( 0x0004 )
#define FILE_READ_EA              ( 0x0008 )
#define FILE_WRITE_EA             ( 0x0010 )
#define FILE_EXECUTE              ( 0x0020 )
#define FILE_TRAVERSE             ( 0x0020 )
#define FILE_DELETE_CHILD         ( 0x0040 )
#define FILE_READ_ATTRIBUTES      ( 0x0080 )
#define FILE_WRITE_ATTRIBUTES     ( 0x0100 )
#define FILE_ALL_ACCESS (STANDARD_RIGHTS_REQUIRED | SYNCHRONIZE | 0x1FF)
#define FILE_GENERIC_READ         (STANDARD_RIGHTS_READ | FILE_READ_DATA | FILE_READ_ATTRIBUTES | FILE_READ_EA | SYNCHRONIZE)
#define FILE_GENERIC_WRITE        (STANDARD_RIGHTS_WRITE | FILE_WRITE_DATA | FILE_WRITE_ATTRIBUTES | FILE_WRITE_EA | FILE_APPEND_DATA | SYNCHRONIZE)
#define FILE_GENERIC_EXECUTE      (STANDARD_RIGHTS_EXECUTE | FILE_READ_ATTRIBUTES | FILE_EXECUTE | SYNCHRONIZE)
#define FILE_SHARE_READ                 0x00000001
#define FILE_SHARE_WRITE                0x00000002
#define FILE_SHARE_DELETE               0x00000004
#define FILE_ATTRIBUTE_READONLY             0x00000001
#define FILE_ATTRIBUTE_HIDDEN               0x00000002
#define FILE_ATTRIBUTE_SYSTEM               0x00000004
#define FILE_ATTRIBUTE_DIRECTORY            0x00000010
#define FILE_ATTRIBUTE_ARCHIVE              0x00000020
#define FILE_ATTRIBUTE_DEVICE               0x00000040
#define FILE_ATTRIBUTE_NORMAL               0x00000080
#define FILE_ATTRIBUTE_TEMPORARY            0x00000100
#define FILE_ATTRIBUTE_SPARSE_FILE          0x00000200
#define FILE_ATTRIBUTE_REPARSE_POINT        0x00000400
#define FILE_ATTRIBUTE_COMPRESSED           0x00000800
#define FILE_ATTRIBUTE_OFFLINE              0x00001000
#define FILE_ATTRIBUTE_NOT_CONTENT_INDEXED  0x00002000
#define FILE_ATTRIBUTE_ENCRYPTED            0x00004000
#define FILE_ATTRIBUTE_VIRTUAL              0x00010000
#define FILE_NOTIFY_CHANGE_FILE_NAME    0x00000001
#define FILE_NOTIFY_CHANGE_DIR_NAME     0x00000002
#define FILE_NOTIFY_CHANGE_ATTRIBUTES   0x00000004
#define FILE_NOTIFY_CHANGE_SIZE         0x00000008
#define FILE_NOTIFY_CHANGE_LAST_WRITE   0x00000010
#define FILE_NOTIFY_CHANGE_LAST_ACCESS  0x00000020
#define FILE_NOTIFY_CHANGE_CREATION     0x00000040
#define FILE_NOTIFY_CHANGE_SECURITY     0x00000100
#define FILE_ACTION_ADDED                   0x00000001
#define FILE_ACTION_REMOVED                 0x00000002
#define FILE_ACTION_MODIFIED                0x00000003
#define FILE_ACTION_RENAMED_OLD_NAME        0x00000004
#define FILE_ACTION_RENAMED_NEW_NAME        0x00000005
#define MAILSLOT_NO_MESSAGE             ((DWORD)-1)
#define MAILSLOT_WAIT_FOREVER           ((DWORD)-1)
#define FILE_CASE_SENSITIVE_SEARCH          0x00000001
#define FILE_CASE_PRESERVED_NAMES           0x00000002
#define FILE_UNICODE_ON_DISK                0x00000004
#define FILE_PERSISTENT_ACLS                0x00000008
#define FILE_FILE_COMPRESSION               0x00000010
#define FILE_VOLUME_QUOTAS                  0x00000020
#define FILE_SUPPORTS_SPARSE_FILES          0x00000040
#define FILE_SUPPORTS_REPARSE_POINTS        0x00000080
#define FILE_SUPPORTS_REMOTE_STORAGE        0x00000100
#define FILE_VOLUME_IS_COMPRESSED           0x00008000
#define FILE_SUPPORTS_OBJECT_IDS            0x00010000
#define FILE_SUPPORTS_ENCRYPTION            0x00020000
#define FILE_NAMED_STREAMS                  0x00040000
#define FILE_READ_ONLY_VOLUME               0x00080000
#define FILE_SEQUENTIAL_WRITE_ONCE          0x00100000
#define FILE_SUPPORTS_TRANSACTIONS          0x00200000
#define FILE_SUPPORTS_HARD_LINKS            0x00400000
#define FILE_SUPPORTS_EXTENDED_ATTRIBUTES   0x00800000
#define FILE_SUPPORTS_OPEN_BY_FILE_ID       0x01000000
#define FILE_SUPPORTS_USN_JOURNAL           0x02000000
typedef struct _FILE_NOTIFY_INFORMATION
{
	DWORD NextEntryOffset;
	DWORD Action;
	DWORD FileNameLength;
	WCHAR FileName[1];
} FILE_NOTIFY_INFORMATION, *PFILE_NOTIFY_INFORMATION;
typedef union _FILE_SEGMENT_ELEMENT
{
	PVOID64 Buffer;
	ULONGLONG Alignment;
} FILE_SEGMENT_ELEMENT, *PFILE_SEGMENT_ELEMENT;
typedef struct _REPARSE_GUID_DATA_BUFFER
{
	DWORD ReparseTag;
	WORD ReparseDataLength;
	WORD Reserved;
	GUID ReparseGuid;
	struct
{
		BYTE DataBuffer[1];
	} GenericReparseBuffer;
} REPARSE_GUID_DATA_BUFFER, *PREPARSE_GUID_DATA_BUFFER;
#define REPARSE_GUID_DATA_BUFFER_HEADER_SIZE   FIELD_OFFSET(REPARSE_GUID_DATA_BUFFER, GenericReparseBuffer)
#define MAXIMUM_REPARSE_DATA_BUFFER_SIZE      ( 16 * 1024 )
#define IO_REPARSE_TAG_RESERVED_ZERO             (0)
#define IO_REPARSE_TAG_RESERVED_ONE              (1)
#define IO_REPARSE_TAG_RESERVED_RANGE            IO_REPARSE_TAG_RESERVED_ONE
#define IsReparseTagMicrosoft(_tag) ( ((_tag) & 0x80000000) )
#define IsReparseTagNameSurrogate(_tag) ( ((_tag) & 0x20000000) )
#define IO_REPARSE_TAG_MOUNT_POINT              (0xA0000003L)
#define IO_REPARSE_TAG_HSM                      (0xC0000004L)
#define IO_REPARSE_TAG_HSM2                     (0x80000006L)
#define IO_REPARSE_TAG_SIS                      (0x80000007L)
#define IO_REPARSE_TAG_WIM                      (0x80000008L)
#define IO_REPARSE_TAG_CSV                      (0x80000009L)
#define IO_REPARSE_TAG_DFS                      (0x8000000AL)
#define IO_REPARSE_TAG_SYMLINK                  (0xA000000CL)
#define IO_REPARSE_TAG_DFSR                     (0x80000012L)
#define IO_COMPLETION_MODIFY_STATE  0x0002
#define IO_COMPLETION_ALL_ACCESS (STANDARD_RIGHTS_REQUIRED|SYNCHRONIZE|0x3)
#define DUPLICATE_CLOSE_SOURCE      0x00000001
#define DUPLICATE_SAME_ACCESS       0x00000002
DEFINE_GUID(GUID_MAX_POWER_SAVINGS, 0xA1841308, 0x3541, 0x4FAB, 0xBC, 0x81, 0xF7, 0x15, 0x56, 0xF2, 0x0B, 0x4A);
DEFINE_GUID(GUID_MIN_POWER_SAVINGS, 0x8C5E7FDA, 0xE8BF, 0x4A96, 0x9A, 0x85, 0xA6, 0xE2, 0x3A, 0x8C, 0x63, 0x5C);
DEFINE_GUID(GUID_TYPICAL_POWER_SAVINGS, 0x381B4222, 0xF694, 0x41F0, 0x96, 0x85, 0xFF, 0x5B, 0xB2, 0x60, 0xDF, 0x2E);
DEFINE_GUID(NO_SUBGROUP_GUID, 0xFEA3413E, 0x7E05, 0x4911, 0x9A, 0x71, 0x70, 0x03, 0x31, 0xF1, 0xC2, 0x94);
DEFINE_GUID(ALL_POWERSCHEMES_GUID, 0x68A1E95E, 0x13EA, 0x41E1, 0x80, 0x11, 0x0C, 0x49, 0x6C, 0xA4, 0x90, 0xB0);
DEFINE_GUID(GUID_POWERSCHEME_PERSONALITY, 0x245D8541, 0x3943, 0x4422, 0xB0, 0x25, 0x13, 0xA7, 0x84, 0xF6, 0x79, 0xB7);
DEFINE_GUID(GUID_ACTIVE_POWERSCHEME, 0x31F9F286, 0x5084, 0x42FE, 0xB7, 0x20, 0x2B, 0x02, 0x64, 0x99, 0x37, 0x63);
DEFINE_GUID(GUID_VIDEO_SUBGROUP, 0x7516B95F, 0xF776, 0x4464, 0x8C, 0x53, 0x06, 0x16, 0x7F, 0x40, 0xCC, 0x99);
DEFINE_GUID(GUID_VIDEO_POWERDOWN_TIMEOUT, 0x3C0BC021, 0xC8A8, 0x4E07, 0xA9, 0x73, 0x6B, 0x14, 0xCB, 0xCB, 0x2B, 0x7E);
DEFINE_GUID(GUID_VIDEO_ANNOYANCE_TIMEOUT, 0x82DBCF2D, 0xCD67, 0x40C5, 0xBF, 0xDC, 0x9F, 0x1A, 0x5C, 0xCD, 0x46, 0x63);
DEFINE_GUID(GUID_VIDEO_ADAPTIVE_PERCENT_INCREASE, 0xEED904DF, 0xB142, 0x4183, 0xB1, 0x0B, 0x5A, 0x11, 0x97, 0xA3, 0x78, 0x64);
DEFINE_GUID(GUID_VIDEO_DIM_TIMEOUT, 0x17aaa29b, 0x8b43, 0x4b94, 0xaa, 0xfe, 0x35, 0xf6, 0x4d, 0xaa, 0xf1, 0xee);
DEFINE_GUID(GUID_VIDEO_ADAPTIVE_POWERDOWN, 0x90959D22, 0xD6A1, 0x49B9, 0xAF, 0x93, 0xBC, 0xE8, 0x85, 0xAD, 0x33, 0x5B);
DEFINE_GUID(GUID_MONITOR_POWER_ON, 0x02731015, 0x4510, 0x4526, 0x99, 0xE6, 0xE5, 0xA1, 0x7E, 0xBD, 0x1A, 0xEA);
DEFINE_GUID(GUID_DEVICE_POWER_POLICY_VIDEO_BRIGHTNESS, 0xaded5e82L, 0xb909, 0x4619, 0x99, 0x49, 0xf5, 0xd7, 0x1d, 0xac, 0x0b, 0xcb);
DEFINE_GUID(GUID_DEVICE_POWER_POLICY_VIDEO_DIM_BRIGHTNESS, 0xf1fbfde2, 0xa960, 0x4165, 0x9f, 0x88, 0x50, 0x66, 0x79, 0x11, 0xce, 0x96);
DEFINE_GUID(GUID_VIDEO_CURRENT_MONITOR_BRIGHTNESS, 0x8ffee2c6, 0x2d01, 0x46be, 0xad, 0xb9, 0x39, 0x8a, 0xdd, 0xc5, 0xb4, 0xff);
DEFINE_GUID(GUID_VIDEO_ADAPTIVE_DISPLAY_BRIGHTNESS, 0xFBD9AA66, 0x9553, 0x4097, 0xBA, 0x44, 0xED, 0x6E, 0x9D, 0x65, 0xEA, 0xB8);
DEFINE_GUID(GUID_SESSION_DISPLAY_STATE, 0x73A5E93A, 0x5BB1, 0x4F93, 0x89, 0x5B, 0xDB, 0xD0, 0xDA, 0x85, 0x59, 0x67);
DEFINE_GUID(GUID_CONSOLE_DISPLAY_STATE, 0x6fe69556, 0x704a, 0x47a0, 0x8f, 0x24, 0xc2, 0x8d, 0x93, 0x6f, 0xda, 0x47);
DEFINE_GUID(GUID_ALLOW_DISPLAY_REQUIRED, 0xA9CEB8DA, 0xCD46, 0x44FB, 0xA9, 0x8B, 0x02, 0xAF, 0x69, 0xDE, 0x46, 0x23);
DEFINE_GUID(GUID_DISK_SUBGROUP, 0x0012EE47, 0x9041, 0x4B5D, 0x9B, 0x77, 0x53, 0x5F, 0xBA, 0x8B, 0x14, 0x42);
DEFINE_GUID(GUID_DISK_POWERDOWN_TIMEOUT, 0x6738E2C4, 0xE8A5, 0x4A42, 0xB1, 0x6A, 0xE0, 0x40, 0xE7, 0x69, 0x75, 0x6E);
DEFINE_GUID(GUID_DISK_BURST_IGNORE_THRESHOLD, 0x80e3c60e, 0xbb94, 0x4ad8, 0xbb, 0xe0, 0x0d, 0x31, 0x95, 0xef, 0xc6, 0x63);
DEFINE_GUID(GUID_DISK_ADAPTIVE_POWERDOWN, 0x396A32E1, 0x499A, 0x40B2, 0x91, 0x24, 0xA9, 0x6A, 0xFE, 0x70, 0x76, 0x67);
DEFINE_GUID(GUID_SLEEP_SUBGROUP, 0x238C9FA8, 0x0AAD, 0x41ED, 0x83, 0xF4, 0x97, 0xBE, 0x24, 0x2C, 0x8F, 0x20);
DEFINE_GUID(GUID_SLEEP_IDLE_THRESHOLD, 0x81cd32e0, 0x7833, 0x44f3, 0x87, 0x37, 0x70, 0x81, 0xf3, 0x8d, 0x1f, 0x70);
DEFINE_GUID(GUID_STANDBY_TIMEOUT, 0x29F6C1DB, 0x86DA, 0x48C5, 0x9F, 0xDB, 0xF2, 0xB6, 0x7B, 0x1F, 0x44, 0xDA);
DEFINE_GUID(GUID_UNATTEND_SLEEP_TIMEOUT, 0x7bc4a2f9, 0xd8fc, 0x4469, 0xb0, 0x7b, 0x33, 0xeb, 0x78, 0x5a, 0xac, 0xa0);
DEFINE_GUID(GUID_HIBERNATE_TIMEOUT, 0x9D7815A6, 0x7EE4, 0x497E, 0x88, 0x88, 0x51, 0x5A, 0x05, 0xF0, 0x23, 0x64);
DEFINE_GUID(GUID_HIBERNATE_FASTS4_POLICY, 0x94AC6D29, 0x73CE, 0x41A6, 0x80, 0x9F, 0x63, 0x63, 0xBA, 0x21, 0xB4, 0x7E);
DEFINE_GUID(GUID_CRITICAL_POWER_TRANSITION, 0xB7A27025, 0xE569, 0x46c2, 0xA5, 0x04, 0x2B, 0x96, 0xCA, 0xD2, 0x25, 0xA1);
DEFINE_GUID(GUID_SYSTEM_AWAYMODE, 0x98A7F580, 0x01F7, 0x48AA, 0x9C, 0x0F, 0x44, 0x35, 0x2C, 0x29, 0xE5, 0xC0);
DEFINE_GUID(GUID_ALLOW_AWAYMODE, 0x25dfa149, 0x5dd1, 0x4736, 0xb5, 0xab, 0xe8, 0xa3, 0x7b, 0x5b, 0x81, 0x87);
DEFINE_GUID(GUID_ALLOW_STANDBY_STATES, 0xabfc2519, 0x3608, 0x4c2a, 0x94, 0xea, 0x17, 0x1b, 0x0e, 0xd5, 0x46, 0xab);
DEFINE_GUID(GUID_ALLOW_RTC_WAKE, 0xBD3B718A, 0x0680, 0x4D9D, 0x8A, 0xB2, 0xE1, 0xD2, 0xB4, 0xAC, 0x80, 0x6D);
DEFINE_GUID(GUID_ALLOW_SYSTEM_REQUIRED, 0xA4B195F5, 0x8225, 0x47D8, 0x80, 0x12, 0x9D, 0x41, 0x36, 0x97, 0x86, 0xE2);
DEFINE_GUID(GUID_SYSTEM_BUTTON_SUBGROUP, 0x4F971E89, 0xEEBD, 0x4455, 0xA8, 0xDE, 0x9E, 0x59, 0x04, 0x0E, 0x73, 0x47);
DEFINE_GUID(GUID_POWERBUTTON_ACTION, 0x7648EFA3, 0xDD9C, 0x4E3E, 0xB5, 0x66, 0x50, 0xF9, 0x29, 0x38, 0x62, 0x80);
DEFINE_GUID(GUID_POWERBUTTON_ACTION_FLAGS, 0x857E7FAC, 0x034B, 0x4704, 0xAB, 0xB1, 0xBC, 0xA5, 0x4A, 0xA3, 0x14, 0x78);
DEFINE_GUID(GUID_SLEEPBUTTON_ACTION, 0x96996BC0, 0xAD50, 0x47EC, 0x92, 0x3B, 0x6F, 0x41, 0x87, 0x4D, 0xD9, 0xEB);
DEFINE_GUID(GUID_SLEEPBUTTON_ACTION_FLAGS, 0x2A160AB1, 0xB69D, 0x4743, 0xB7, 0x18, 0xBF, 0x14, 0x41, 0xD5, 0xE4, 0x93);
DEFINE_GUID(GUID_USERINTERFACEBUTTON_ACTION, 0xA7066653, 0x8D6C, 0x40A8, 0x91, 0x0E, 0xA1, 0xF5, 0x4B, 0x84, 0xC7, 0xE5);
DEFINE_GUID(GUID_LIDCLOSE_ACTION, 0x5CA83367, 0x6E45, 0x459F, 0xA2, 0x7B, 0x47, 0x6B, 0x1D, 0x01, 0xC9, 0x36);
DEFINE_GUID(GUID_LIDCLOSE_ACTION_FLAGS, 0x97E969AC, 0x0D6C, 0x4D08, 0x92, 0x7C, 0xD7, 0xBD, 0x7A, 0xD7, 0x85, 0x7B);
DEFINE_GUID(GUID_LIDOPEN_POWERSTATE, 0x99FF10E7, 0x23B1, 0x4C07, 0xA9, 0xD1, 0x5C, 0x32, 0x06, 0xD7, 0x41, 0xB4);
DEFINE_GUID(GUID_BATTERY_SUBGROUP, 0xE73A048D, 0xBF27, 0x4F12, 0x97, 0x31, 0x8B, 0x20, 0x76, 0xE8, 0x89, 0x1F);
DEFINE_GUID(GUID_BATTERY_DISCHARGE_ACTION_0, 0x637EA02F, 0xBBCB, 0x4015, 0x8E, 0x2C, 0xA1, 0xC7, 0xB9, 0xC0, 0xB5, 0x46);
DEFINE_GUID(GUID_BATTERY_DISCHARGE_LEVEL_0, 0x9A66D8D7, 0x4FF7, 0x4EF9, 0xB5, 0xA2, 0x5A, 0x32, 0x6C, 0xA2, 0xA4, 0x69);
DEFINE_GUID(GUID_BATTERY_DISCHARGE_FLAGS_0, 0x5dbb7c9f, 0x38e9, 0x40d2, 0x97, 0x49, 0x4f, 0x8a, 0x0e, 0x9f, 0x64, 0x0f);
DEFINE_GUID(GUID_BATTERY_DISCHARGE_ACTION_1, 0xD8742DCB, 0x3E6A, 0x4B3C, 0xB3, 0xFE, 0x37, 0x46, 0x23, 0xCD, 0xCF, 0x06);
DEFINE_GUID(GUID_BATTERY_DISCHARGE_LEVEL_1, 0x8183BA9A, 0xE910, 0x48DA, 0x87, 0x69, 0x14, 0xAE, 0x6D, 0xC1, 0x17, 0x0A);
DEFINE_GUID(GUID_BATTERY_DISCHARGE_FLAGS_1, 0xbcded951, 0x187b, 0x4d05, 0xbc, 0xcc, 0xf7, 0xe5, 0x19, 0x60, 0xc2, 0x58);
DEFINE_GUID(GUID_BATTERY_DISCHARGE_ACTION_2, 0x421CBA38, 0x1A8E, 0x4881, 0xAC, 0x89, 0xE3, 0x3A, 0x8B, 0x04, 0xEC, 0xE4);
DEFINE_GUID(GUID_BATTERY_DISCHARGE_LEVEL_2, 0x07A07CA2, 0xADAF, 0x40D7, 0xB0, 0x77, 0x53, 0x3A, 0xAD, 0xED, 0x1B, 0xFA);
DEFINE_GUID(GUID_BATTERY_DISCHARGE_FLAGS_2, 0x7fd2f0c4, 0xfeb7, 0x4da3, 0x81, 0x17, 0xe3, 0xfb, 0xed, 0xc4, 0x65, 0x82);
DEFINE_GUID(GUID_BATTERY_DISCHARGE_ACTION_3, 0x80472613, 0x9780, 0x455E, 0xB3, 0x08, 0x72, 0xD3, 0x00, 0x3C, 0xF2, 0xF8);
DEFINE_GUID(GUID_BATTERY_DISCHARGE_LEVEL_3, 0x58AFD5A6, 0xC2DD, 0x47D2, 0x9F, 0xBF, 0xEF, 0x70, 0xCC, 0x5C, 0x59, 0x65);
DEFINE_GUID(GUID_BATTERY_DISCHARGE_FLAGS_3, 0x73613ccf, 0xdbfa, 0x4279, 0x83, 0x56, 0x49, 0x35, 0xf6, 0xbf, 0x62, 0xf3);
DEFINE_GUID(GUID_PROCESSOR_SETTINGS_SUBGROUP, 0x54533251, 0x82BE, 0x4824, 0x96, 0xC1, 0x47, 0xB6, 0x0B, 0x74, 0x0D, 0x00);
DEFINE_GUID(GUID_PROCESSOR_THROTTLE_POLICY, 0x57027304, 0x4AF6, 0x4104, 0x92, 0x60, 0xE3, 0xD9, 0x52, 0x48, 0xFC, 0x36);
#define PERFSTATE_POLICY_CHANGE_IDEAL  0
#define PERFSTATE_POLICY_CHANGE_SINGLE 1
#define PERFSTATE_POLICY_CHANGE_ROCKET 2
#define PERFSTATE_POLICY_CHANGE_MAX PERFSTATE_POLICY_CHANGE_ROCKET
DEFINE_GUID(GUID_PROCESSOR_THROTTLE_MAXIMUM, 0xBC5038F7, 0x23E0, 0x4960, 0x96, 0xDA, 0x33, 0xAB, 0xAF, 0x59, 0x35, 0xEC);
DEFINE_GUID(GUID_PROCESSOR_THROTTLE_MINIMUM, 0x893DEE8E, 0x2BEF, 0x41E0, 0x89, 0xC6, 0xB5, 0x5D, 0x09, 0x29, 0x96, 0x4C);
DEFINE_GUID(GUID_PROCESSOR_ALLOW_THROTTLING, 0x3b04d4fd, 0x1cc7, 0x4f23, 0xab, 0x1c, 0xd1, 0x33, 0x78, 0x19, 0xc4, 0xbb);
DEFINE_GUID(GUID_PROCESSOR_IDLESTATE_POLICY, 0x68f262a7, 0xf621, 0x4069, 0xb9, 0xa5, 0x48, 0x74, 0x16, 0x9b, 0xe2, 0x3c);
DEFINE_GUID(GUID_PROCESSOR_PERFSTATE_POLICY, 0xBBDC3814, 0x18E9, 0x4463, 0x8A, 0x55, 0xD1, 0x97, 0x32, 0x7C, 0x45, 0xC0);
DEFINE_GUID(GUID_PROCESSOR_PERF_INCREASE_THRESHOLD, 0x06cadf0e, 0x64ed, 0x448a, 0x89, 0x27, 0xce, 0x7b, 0xf9, 0x0e, 0xb3, 0x5d);
DEFINE_GUID(GUID_PROCESSOR_PERF_DECREASE_THRESHOLD, 0x12a0ab44, 0xfe28, 0x4fa9, 0xb3, 0xbd, 0x4b, 0x64, 0xf4, 0x49, 0x60, 0xa6);
DEFINE_GUID(GUID_PROCESSOR_PERF_INCREASE_POLICY, 0x465e1f50, 0xb610, 0x473a, 0xab, 0x58, 0x0, 0xd1, 0x7, 0x7d, 0xc4, 0x18);
DEFINE_GUID(GUID_PROCESSOR_PERF_DECREASE_POLICY, 0x40fbefc7, 0x2e9d, 0x4d25, 0xa1, 0x85, 0xc, 0xfd, 0x85, 0x74, 0xba, 0xc6);
DEFINE_GUID(GUID_PROCESSOR_PERF_INCREASE_TIME, 0x984cf492, 0x3bed, 0x4488, 0xa8, 0xf9, 0x42, 0x86, 0xc9, 0x7b, 0xf5, 0xaa);
DEFINE_GUID(GUID_PROCESSOR_PERF_DECREASE_TIME, 0xd8edeb9b, 0x95cf, 0x4f95, 0xa7, 0x3c, 0xb0, 0x61, 0x97, 0x36, 0x93, 0xc8);
DEFINE_GUID(GUID_PROCESSOR_PERF_TIME_CHECK, 0x4d2b0152, 0x7d5c, 0x498b, 0x88, 0xe2, 0x34, 0x34, 0x53, 0x92, 0xa2, 0xc5);
DEFINE_GUID(GUID_PROCESSOR_PERF_BOOST_POLICY, 0x45bcc044, 0xd885, 0x43e2, 0x86, 0x5, 0xee, 0xe, 0xc6, 0xe9, 0x6b, 0x59);
#define PROCESSOR_PERF_BOOST_POLICY_DISABLED 0
#define PROCESSOR_PERF_BOOST_POLICY_MAX 100
DEFINE_GUID(GUID_PROCESSOR_IDLE_ALLOW_SCALING, 0x6c2993b0, 0x8f48, 0x481f, 0xbc, 0xc6, 0x0, 0xdd, 0x27, 0x42, 0xaa, 0x6);
DEFINE_GUID(GUID_PROCESSOR_IDLE_DISABLE, 0x5d76a2ca, 0xe8c0, 0x402f, 0xa1, 0x33, 0x21, 0x58, 0x49, 0x2d, 0x58, 0xad);
DEFINE_GUID(GUID_PROCESSOR_IDLE_TIME_CHECK, 0xc4581c31, 0x89ab, 0x4597, 0x8e, 0x2b, 0x9c, 0x9c, 0xab, 0x44, 0xe, 0x6b);
DEFINE_GUID(GUID_PROCESSOR_IDLE_DEMOTE_THRESHOLD, 0x4b92d758, 0x5a24, 0x4851, 0xa4, 0x70, 0x81, 0x5d, 0x78, 0xae, 0xe1, 0x19);
DEFINE_GUID(GUID_PROCESSOR_IDLE_PROMOTE_THRESHOLD, 0x7b224883, 0xb3cc, 0x4d79, 0x81, 0x9f, 0x83, 0x74, 0x15, 0x2c, 0xbe, 0x7c);
DEFINE_GUID(GUID_PROCESSOR_CORE_PARKING_INCREASE_THRESHOLD, 0xdf142941, 0x20f3, 0x4edf, 0x9a, 0x4a, 0x9c, 0x83, 0xd3, 0xd7, 0x17, 0xd1);
DEFINE_GUID(GUID_PROCESSOR_CORE_PARKING_DECREASE_THRESHOLD, 0x68dd2f27, 0xa4ce, 0x4e11, 0x84, 0x87, 0x37, 0x94, 0xe4, 0x13, 0x5d, 0xfa);
DEFINE_GUID(GUID_PROCESSOR_CORE_PARKING_INCREASE_POLICY, 0xc7be0679, 0x2817, 0x4d69, 0x9d, 0x02, 0x51, 0x9a, 0x53, 0x7e, 0xd0, 0xc6);
#define CORE_PARKING_POLICY_CHANGE_IDEAL  0
#define CORE_PARKING_POLICY_CHANGE_SINGLE 1
#define CORE_PARKING_POLICY_CHANGE_ROCKET 2
#define CORE_PARKING_POLICY_CHANGE_MAX CORE_PARKING_POLICY_CHANGE_ROCKET
DEFINE_GUID(GUID_PROCESSOR_CORE_PARKING_DECREASE_POLICY, 0x71021b41, 0xc749, 0x4d21, 0xbe, 0x74, 0xa0, 0x0f, 0x33, 0x5d, 0x58, 0x2b);
DEFINE_GUID(GUID_PROCESSOR_CORE_PARKING_MAX_CORES, 0xea062031, 0x0e34, 0x4ff1, 0x9b, 0x6d, 0xeb, 0x10, 0x59, 0x33, 0x40, 0x28);
DEFINE_GUID(GUID_PROCESSOR_CORE_PARKING_MIN_CORES, 0x0cc5b647, 0xc1df, 0x4637, 0x89, 0x1a, 0xde, 0xc3, 0x5c, 0x31, 0x85, 0x83);
DEFINE_GUID(GUID_PROCESSOR_CORE_PARKING_INCREASE_TIME, 0x2ddd5a84, 0x5a71, 0x437e, 0x91, 0x2a, 0xdb, 0x0b, 0x8c, 0x78, 0x87, 0x32);
DEFINE_GUID(GUID_PROCESSOR_CORE_PARKING_DECREASE_TIME, 0xdfd10d17, 0xd5eb, 0x45dd, 0x87, 0x7a, 0x9a, 0x34, 0xdd, 0xd1, 0x5c, 0x82);
DEFINE_GUID(GUID_PROCESSOR_CORE_PARKING_AFFINITY_HISTORY_DECREASE_FACTOR, 0x8f7b45e3, 0xc393, 0x480a, 0x87, 0x8c, 0xf6, 0x7a, 0xc3, 0xd0, 0x70, 0x82);
DEFINE_GUID(GUID_PROCESSOR_CORE_PARKING_AFFINITY_HISTORY_THRESHOLD, 0x5b33697b, 0xe89d, 0x4d38, 0xaa, 0x46, 0x9e, 0x7d, 0xfb, 0x7c, 0xd2, 0xf9);
DEFINE_GUID(GUID_PROCESSOR_CORE_PARKING_AFFINITY_WEIGHTING, 0xe70867f1, 0xfa2f, 0x4f4e, 0xae, 0xa1, 0x4d, 0x8a, 0x0b, 0xa2, 0x3b, 0x20);
DEFINE_GUID(GUID_PROCESSOR_CORE_PARKING_OVER_UTILIZATION_HISTORY_DECREASE_FACTOR, 0x1299023c, 0xbc28, 0x4f0a, 0x81, 0xec, 0xd3, 0x29, 0x5a, 0x8d, 0x81, 0x5d);
DEFINE_GUID(GUID_PROCESSOR_CORE_PARKING_OVER_UTILIZATION_HISTORY_THRESHOLD, 0x9ac18e92, 0xaa3c, 0x4e27, 0xb3, 0x07, 0x01, 0xae, 0x37, 0x30, 0x71, 0x29);
DEFINE_GUID(GUID_PROCESSOR_CORE_PARKING_OVER_UTILIZATION_WEIGHTING, 0x8809c2d8, 0xb155, 0x42d4, 0xbc, 0xda, 0x0d, 0x34, 0x56, 0x51, 0xb1, 0xdb);
DEFINE_GUID(GUID_PROCESSOR_CORE_PARKING_OVER_UTILIZATION_THRESHOLD, 0x943c8cb6, 0x6f93, 0x4227, 0xad, 0x87, 0xe9, 0xa3, 0xfe, 0xec, 0x08, 0xd1);
DEFINE_GUID(GUID_PROCESSOR_PARKING_CORE_OVERRIDE, 0xa55612aa, 0xf624, 0x42c6, 0xa4, 0x43, 0x73, 0x97, 0xd0, 0x64, 0xc0, 0x4f);
DEFINE_GUID(GUID_PROCESSOR_PARKING_PERF_STATE, 0x447235c7, 0x6a8d, 0x4cc0, 0x8e, 0x24, 0x9e, 0xaf, 0x70, 0xb9, 0x6e, 0x2b);
DEFINE_GUID(GUID_PROCESSOR_PERF_HISTORY, 0x7d24baa7, 0x0b84, 0x480f, 0x84, 0x0c, 0x1b, 0x07, 0x43, 0xc0, 0x0f, 0x5f);
DEFINE_GUID(GUID_SYSTEM_COOLING_POLICY, 0x94D3A615, 0xA899, 0x4AC5, 0xAE, 0x2B, 0xE4, 0xD8, 0xF6, 0x34, 0x36, 0x7F);
DEFINE_GUID(GUID_LOCK_CONSOLE_ON_WAKE, 0x0E796BDB, 0x100D, 0x47D6, 0xA2, 0xD5, 0xF7, 0xD2, 0xDA, 0xA5, 0x1F, 0x51);
DEFINE_GUID(GUID_DEVICE_IDLE_POLICY, 0x4faab71a, 0x92e5, 0x4726, 0xb5, 0x31, 0x22, 0x45, 0x59, 0x67, 0x2d, 0x19);
#define POWER_DEVICE_IDLE_POLICY_PERFORMANCE  0
#define POWER_DEVICE_IDLE_POLICY_CONSERVATIVE 1
DEFINE_GUID(GUID_ACDC_POWER_SOURCE, 0x5D3E9A59, 0xE9D5, 0x4B00, 0xA6, 0xBD, 0xFF, 0x34, 0xFF, 0x51, 0x65, 0x48);
DEFINE_GUID(GUID_LIDSWITCH_STATE_CHANGE, 0xBA3E0F4D, 0xB817, 0x4094, 0xA2, 0xD1, 0xD5, 0x63, 0x79, 0xE6, 0xA0, 0xF3);
DEFINE_GUID(GUID_BATTERY_PERCENTAGE_REMAINING, 0xA7AD8041, 0xB45A, 0x4CAE, 0x87, 0xA3, 0xEE, 0xCB, 0xB4, 0x68, 0xA9, 0xE1);
DEFINE_GUID(GUID_IDLE_BACKGROUND_TASK, 0x515C31D8, 0xF734, 0x163D, 0xA0, 0xFD, 0x11, 0xA0, 0x8C, 0x91, 0xE8, 0xF1);
DEFINE_GUID(GUID_BACKGROUND_TASK_NOTIFICATION, 0xCF23F240, 0x2A54, 0x48D8, 0xB1, 0x14, 0xDE, 0x15, 0x18, 0xFF, 0x05, 0x2E);
DEFINE_GUID(GUID_APPLAUNCH_BUTTON, 0x1A689231, 0x7399, 0x4E9A, 0x8F, 0x99, 0xB7, 0x1F, 0x99, 0x9D, 0xB3, 0xFA);
DEFINE_GUID(GUID_PCIEXPRESS_SETTINGS_SUBGROUP, 0x501a4d13, 0x42af, 0x4429, 0x9f, 0xd1, 0xa8, 0x21, 0x8c, 0x26, 0x8e, 0x20);
DEFINE_GUID(GUID_PCIEXPRESS_ASPM_POLICY, 0xee12f906, 0xd277, 0x404b, 0xb6, 0xda, 0xe5, 0xfa, 0x1a, 0x57, 0x6d, 0xf5);
DEFINE_GUID(GUID_ENABLE_SWITCH_FORCED_SHUTDOWN, 0x833a6b62, 0xdfa4, 0x46d1, 0x82, 0xf8, 0xe0, 0x9e, 0x34, 0xd0, 0x29, 0xd6);
typedef enum _SYSTEM_POWER_STATE
{
	PowerSystemUnspecified = 0,
	PowerSystemWorking = 1,
	PowerSystemSleeping1 = 2,
	PowerSystemSleeping2 = 3,
	PowerSystemSleeping3 = 4,
	PowerSystemHibernate = 5,
	PowerSystemShutdown = 6,
	PowerSystemMaximum = 7
} SYSTEM_POWER_STATE, *PSYSTEM_POWER_STATE;
#define POWER_SYSTEM_MAXIMUM 7
typedef enum
{
	PowerActionNone = 0,
	PowerActionReserved,
	PowerActionSleep,
	PowerActionHibernate,
	PowerActionShutdown,
	PowerActionShutdownReset,
	PowerActionShutdownOff,
	PowerActionWarmEject
} POWER_ACTION, *PPOWER_ACTION;
typedef enum _DEVICE_POWER_STATE
{
	PowerDeviceUnspecified = 0,
	PowerDeviceD0,
	PowerDeviceD1,
	PowerDeviceD2,
	PowerDeviceD3,
	PowerDeviceMaximum
} DEVICE_POWER_STATE, *PDEVICE_POWER_STATE;
typedef enum _MONITOR_DISPLAY_STATE
{
	PowerMonitorOff = 0,
	PowerMonitorOn,
	PowerMonitorDim
} MONITOR_DISPLAY_STATE, *PMONITOR_DISPLAY_STATE;
#define ES_SYSTEM_REQUIRED   ((DWORD)0x00000001)
#define ES_DISPLAY_REQUIRED  ((DWORD)0x00000002)
#define ES_USER_PRESENT      ((DWORD)0x00000004)
#define ES_AWAYMODE_REQUIRED ((DWORD)0x00000040)
#define ES_CONTINUOUS        ((DWORD)0x80000000)
typedef DWORD EXECUTION_STATE, *PEXECUTION_STATE;
typedef enum
{
	LT_DONT_CARE,
	LT_LOWEST_LATENCY
} LATENCY_TIME;
#if (_WIN32_WINNT >= _WIN32_WINNT_WIN7)
#define DIAGNOSTIC_REASON_VERSION              0
#define DIAGNOSTIC_REASON_SIMPLE_STRING        0x00000001
#define DIAGNOSTIC_REASON_DETAILED_STRING      0x00000002
#define DIAGNOSTIC_REASON_NOT_SPECIFIED        0x80000000
#define DIAGNOSTIC_REASON_INVALID_FLAGS        (~0x80000003)
#endif
#define POWER_REQUEST_CONTEXT_VERSION          0
#define POWER_REQUEST_CONTEXT_SIMPLE_STRING    0x00000001
#define POWER_REQUEST_CONTEXT_DETAILED_STRING  0x00000002
typedef enum _POWER_REQUEST_TYPE
{
	PowerRequestDisplayRequired,
	PowerRequestSystemRequired,
	PowerRequestAwayModeRequired
} POWER_REQUEST_TYPE, *PPOWER_REQUEST_TYPE;
#define PowerRequestMaximum 3
#if (NTDDI_VERSION >= NTDDI_WINXP)
#define PDCAP_D0_SUPPORTED              0x00000001
#define PDCAP_D1_SUPPORTED              0x00000002
#define PDCAP_D2_SUPPORTED              0x00000004
#define PDCAP_D3_SUPPORTED              0x00000008
#define PDCAP_WAKE_FROM_D0_SUPPORTED    0x00000010
#define PDCAP_WAKE_FROM_D1_SUPPORTED    0x00000020
#define PDCAP_WAKE_FROM_D2_SUPPORTED    0x00000040
#define PDCAP_WAKE_FROM_D3_SUPPORTED    0x00000080
#define PDCAP_WARM_EJECT_SUPPORTED      0x00000100
typedef struct CM_Power_Data_s
{
	DWORD PD_Size;
	DEVICE_POWER_STATE PD_MostRecentPowerState;
	DWORD PD_Capabilities;
	DWORD PD_D1Latency;
	DWORD PD_D2Latency;
	DWORD PD_D3Latency;
	DEVICE_POWER_STATE PD_PowerStateMapping[POWER_SYSTEM_MAXIMUM];
	SYSTEM_POWER_STATE PD_DeepestSystemWake;
} CM_POWER_DATA, *PCM_POWER_DATA;
#endif
typedef enum
{
	SystemPowerPolicyAc,
	SystemPowerPolicyDc,
	VerifySystemPolicyAc,
	VerifySystemPolicyDc,
	SystemPowerCapabilities,
	SystemBatteryState,
	SystemPowerStateHandler,
	ProcessorStateHandler,
	SystemPowerPolicyCurrent,
	AdministratorPowerPolicy,
	SystemReserveHiberFile,
	ProcessorInformation,
	SystemPowerInformation,
	ProcessorStateHandler2,
	LastWakeTime,
	LastSleepTime,
	SystemExecutionState,
	SystemPowerStateNotifyHandler,
	ProcessorPowerPolicyAc,
	ProcessorPowerPolicyDc,
	VerifyProcessorPowerPolicyAc,
	VerifyProcessorPowerPolicyDc,
	ProcessorPowerPolicyCurrent,
	SystemPowerStateLogging,
	SystemPowerLoggingEntry,
	SetPowerSettingValue,
	NotifyUserPowerSetting,
	PowerInformationLevelUnused0,
	PowerInformationLevelUnused1,
	SystemVideoState,
	TraceApplicationPowerMessage,
	TraceApplicationPowerMessageEnd,
	ProcessorPerfStates,
	ProcessorIdleStates,
	ProcessorCap,
	SystemWakeSource,
	SystemHiberFileInformation,
	TraceServicePowerMessage,
	ProcessorLoad,
	PowerShutdownNotification,
	MonitorCapabilities,
	SessionPowerInit,
	SessionDisplayState,
	PowerRequestCreate,
	PowerRequestAction,
	GetPowerRequestList,
	ProcessorInformationEx,
	NotifyUserModeLegacyPowerEvent,
	GroupPark,
	ProcessorIdleDomains,
	WakeTimerList,
	SystemHiberFileSize,
	PowerInformationLevelMaximum
} POWER_INFORMATION_LEVEL;
typedef enum
{
	PoAc,
	PoDc,
	PoHot,
	PoConditionMaximum
} SYSTEM_POWER_CONDITION;
typedef struct
{
	DWORD Version;
	GUID Guid;
	SYSTEM_POWER_CONDITION PowerCondition;
	DWORD DataLength;
	BYTE Data[ANYSIZE_ARRAY];
} SET_POWER_SETTING_VALUE, *PSET_POWER_SETTING_VALUE;
#define POWER_SETTING_VALUE_VERSION (0x1)
typedef struct
{
	GUID Guid;
} NOTIFY_USER_POWER_SETTING, *PNOTIFY_USER_POWER_SETTING;
typedef struct _APPLICATIONLAUNCH_SETTING_VALUE
{
	LARGE_INTEGER ActivationTime;
	DWORD Flags;
	DWORD ButtonInstanceID;
} APPLICATIONLAUNCH_SETTING_VALUE, *PAPPLICATIONLAUNCH_SETTING_VALUE;
typedef enum
{
	PlatformRoleUnspecified = 0,
	PlatformRoleDesktop,
	PlatformRoleMobile,
	PlatformRoleWorkstation,
	PlatformRoleEnterpriseServer,
	PlatformRoleSOHOServer,
	PlatformRoleAppliancePC,
	PlatformRolePerformanceServer,
	PlatformRoleMaximum
} POWER_PLATFORM_ROLE;
#if (NTDDI_VERSION >= NTDDI_WINXP) || !defined(_BATCLASS_)
typedef struct
{
	DWORD Granularity;
	DWORD Capacity;
} BATTERY_REPORTING_SCALE, *PBATTERY_REPORTING_SCALE;
#endif
typedef struct
{
	DWORD Frequency;
	DWORD Flags;
	DWORD PercentFrequency;
} PPM_WMI_LEGACY_PERFSTATE, *PPPM_WMI_LEGACY_PERFSTATE;
typedef struct
{
	DWORD Latency;
	DWORD Power;
	DWORD TimeCheck;
	BYTE PromotePercent;
	BYTE DemotePercent;
	BYTE StateType;
	BYTE Reserved;
	DWORD StateFlags;
	DWORD Context;
	DWORD IdleHandler;
	DWORD Reserved1;
} PPM_WMI_IDLE_STATE, *PPPM_WMI_IDLE_STATE;
typedef struct
{
	DWORD Type;
	DWORD Count;
	DWORD TargetState;
	DWORD OldState;
	DWORD64 TargetProcessors;
	PPM_WMI_IDLE_STATE State[ANYSIZE_ARRAY];
} PPM_WMI_IDLE_STATES, *PPPM_WMI_IDLE_STATES;
typedef struct
{
	DWORD Type;
	DWORD Count;
	DWORD TargetState;
	DWORD OldState;
	PVOID TargetProcessors;
	PPM_WMI_IDLE_STATE State[ANYSIZE_ARRAY];
} PPM_WMI_IDLE_STATES_EX, *PPPM_WMI_IDLE_STATES_EX;
typedef struct
{
	DWORD Frequency;
	DWORD Power;
	BYTE PercentFrequency;
	BYTE IncreaseLevel;
	BYTE DecreaseLevel;
	BYTE Type;
	DWORD IncreaseTime;
	DWORD DecreaseTime;
	DWORD64 Control;
	DWORD64 Status;
	DWORD HitCount;
	DWORD Reserved1;
	DWORD64 Reserved2;
	DWORD64 Reserved3;
} PPM_WMI_PERF_STATE, *PPPM_WMI_PERF_STATE;
typedef struct
{
	DWORD Count;
	DWORD MaxFrequency;
	DWORD CurrentState;
	DWORD MaxPerfState;
	DWORD MinPerfState;
	DWORD LowestPerfState;
	DWORD ThermalConstraint;
	BYTE BusyAdjThreshold;
	BYTE PolicyType;
	BYTE Type;
	BYTE Reserved;
	DWORD TimerInterval;
	DWORD64 TargetProcessors;
	DWORD PStateHandler;
	DWORD PStateContext;
	DWORD TStateHandler;
	DWORD TStateContext;
	DWORD FeedbackHandler;
	DWORD Reserved1;
	DWORD64 Reserved2;
	PPM_WMI_PERF_STATE State[ANYSIZE_ARRAY];
} PPM_WMI_PERF_STATES, *PPPM_WMI_PERF_STATES;
typedef struct
{
	DWORD Count;
	DWORD MaxFrequency;
	DWORD CurrentState;
	DWORD MaxPerfState;
	DWORD MinPerfState;
	DWORD LowestPerfState;
	DWORD ThermalConstraint;
	BYTE BusyAdjThreshold;
	BYTE PolicyType;
	BYTE Type;
	BYTE Reserved;
	DWORD TimerInterval;
	PVOID TargetProcessors;
	DWORD PStateHandler;
	DWORD PStateContext;
	DWORD TStateHandler;
	DWORD TStateContext;
	DWORD FeedbackHandler;
	DWORD Reserved1;
	DWORD64 Reserved2;
	PPM_WMI_PERF_STATE State[ANYSIZE_ARRAY];
} PPM_WMI_PERF_STATES_EX, *PPPM_WMI_PERF_STATES_EX;
#define PROC_IDLE_BUCKET_COUNT 6
typedef struct
{
	DWORD IdleTransitions;
	DWORD FailedTransitions;
	DWORD InvalidBucketIndex;
	DWORD64 TotalTime;
	DWORD IdleTimeBuckets[PROC_IDLE_BUCKET_COUNT];
} PPM_IDLE_STATE_ACCOUNTING, *PPPM_IDLE_STATE_ACCOUNTING;
typedef struct
{
	DWORD StateCount;
	DWORD TotalTransitions;
	DWORD ResetCount;
	DWORD64 StartTime;
	PPM_IDLE_STATE_ACCOUNTING State[ANYSIZE_ARRAY];
} PPM_IDLE_ACCOUNTING, *PPPM_IDLE_ACCOUNTING;
#define PROC_IDLE_BUCKET_COUNT_EX 16
typedef struct
{
	DWORD64 TotalTimeUs;
	DWORD MinTimeUs;
	DWORD MaxTimeUs;
	DWORD Count;
} PPM_IDLE_STATE_BUCKET_EX, *PPPM_IDLE_STATE_BUCKET_EX;
typedef struct
{
	DWORD64 TotalTime;
	DWORD IdleTransitions;
	DWORD FailedTransitions;
	DWORD InvalidBucketIndex;
	DWORD MinTimeUs;
	DWORD MaxTimeUs;
	PPM_IDLE_STATE_BUCKET_EX IdleTimeBuckets[PROC_IDLE_BUCKET_COUNT_EX];
} PPM_IDLE_STATE_ACCOUNTING_EX, *PPPM_IDLE_STATE_ACCOUNTING_EX;
typedef struct
{
	DWORD StateCount;
	DWORD TotalTransitions;
	DWORD ResetCount;
	DWORD64 StartTime;
	PPM_IDLE_STATE_ACCOUNTING_EX State[ANYSIZE_ARRAY];
} PPM_IDLE_ACCOUNTING_EX, *PPPM_IDLE_ACCOUNTING_EX;
#define ACPI_PPM_SOFTWARE_ALL     0xFC
#define ACPI_PPM_SOFTWARE_ANY     0xFD
#define ACPI_PPM_HARDWARE_ALL     0xFE
#define MS_PPM_SOFTWARE_ALL       0x1
#define PPM_FIRMWARE_ACPI1C2      0x00000001
#define PPM_FIRMWARE_ACPI1C3      0x00000002
#define PPM_FIRMWARE_ACPI1TSTATES 0x00000004
#define PPM_FIRMWARE_CST          0x00000008
#define PPM_FIRMWARE_CSD          0x00000010
#define PPM_FIRMWARE_PCT          0x00000020
#define PPM_FIRMWARE_PSS          0x00000040
#define PPM_FIRMWARE_XPSS         0x00000080
#define PPM_FIRMWARE_PPC          0x00000100
#define PPM_FIRMWARE_PSD          0x00000200
#define PPM_FIRMWARE_PTC          0x00000400
#define PPM_FIRMWARE_TSS          0x00000800
#define PPM_FIRMWARE_TPC          0x00001000
#define PPM_FIRMWARE_TSD          0x00002000
#define PPM_FIRMWARE_PCCH         0x00004000
#define PPM_FIRMWARE_PCCP         0x00008000
DEFINE_GUID(PPM_PERFSTATE_CHANGE_GUID,			0xa5b32ddd, 0x7f39, 0x4abc, 0xb8, 0x92, 0x90, 0x0e, 0x43, 0xb5, 0x9e, 0xbb);
DEFINE_GUID(PPM_PERFSTATE_DOMAIN_CHANGE_GUID,	0x995e6b7f, 0xd653, 0x497a, 0xb9, 0x78, 0x36, 0xa3, 0x0c, 0x29, 0xbf, 0x01);
DEFINE_GUID(PPM_IDLESTATE_CHANGE_GUID,			0x4838fe4f, 0xf71c, 0x4e51, 0x9e, 0xcc, 0x84, 0x30, 0xa7, 0xac, 0x4c, 0x6c);
DEFINE_GUID(PPM_PERFSTATES_DATA_GUID,			0x5708cc20, 0x7d40, 0x4bf4, 0xb4, 0xaa, 0x2b, 0x01, 0x33, 0x8d, 0x01, 0x26);
DEFINE_GUID(PPM_IDLESTATES_DATA_GUID,			0xba138e10, 0xe250, 0x4ad7, 0x86, 0x16, 0xcf, 0x1a, 0x7a, 0xd4, 0x10, 0xe7);
DEFINE_GUID(PPM_IDLE_ACCOUNTING_GUID,			0xe2a26f78, 0xae07, 0x4ee0, 0xa3, 0x0f, 0xce, 0x54, 0xf5, 0x5a, 0x94, 0xcd);
DEFINE_GUID(PPM_IDLE_ACCOUNTING_EX_GUID,		0xd67abd39, 0x81f8, 0x4a5e, 0x81, 0x52, 0x72, 0xe3, 0x1e, 0xc9, 0x12, 0xee);
DEFINE_GUID(PPM_THERMALCONSTRAINT_GUID,			0xa852c2c8, 0x1a4c, 0x423b, 0x8c, 0x2c, 0xf3, 0x0d, 0x82, 0x93, 0x1a, 0x88);
DEFINE_GUID(PPM_PERFMON_PERFSTATE_GUID,			0x7fd18652, 0x0cfe, 0x40d2, 0xb0, 0xa1, 0x0b, 0x06, 0x6a, 0x87, 0x75, 0x9e);
DEFINE_GUID(PPM_THERMAL_POLICY_CHANGE_GUID,		0x48f377b8, 0x6880, 0x4c7b, 0x8b, 0xdc, 0x38, 0x01, 0x76, 0xc6, 0x65, 0x4d);
typedef struct
{
	DWORD State;
	DWORD Status;
	DWORD Latency;
	DWORD Speed;
	DWORD Processor;
} PPM_PERFSTATE_EVENT, *PPPM_PERFSTATE_EVENT;
typedef struct
{
	DWORD State;
	DWORD Latency;
	DWORD Speed;
	DWORD64 Processors;
} PPM_PERFSTATE_DOMAIN_EVENT, *PPPM_PERFSTATE_DOMAIN_EVENT;
typedef struct
{
	DWORD NewState;
	DWORD OldState;
	DWORD64 Processors;
} PPM_IDLESTATE_EVENT, *PPPM_IDLESTATE_EVENT;
typedef struct
{
	DWORD ThermalConstraint;
	DWORD64 Processors;
} PPM_THERMALCHANGE_EVENT, *PPPM_THERMALCHANGE_EVENT;
typedef struct
{
	BYTE Mode;
	DWORD64 Processors;
} PPM_THERMAL_POLICY_EVENT, *PPPM_THERMAL_POLICY_EVENT;
typedef struct
{
	POWER_ACTION Action;
	DWORD Flags;
	DWORD EventCode;
} POWER_ACTION_POLICY, *PPOWER_ACTION_POLICY;
#define POWER_ACTION_QUERY_ALLOWED				0x00000001
#define POWER_ACTION_UI_ALLOWED					0x00000002
#define POWER_ACTION_OVERRIDE_APPS				0x00000004
#define POWER_ACTION_PSEUDO_TRANSITION			0x08000000
#define POWER_ACTION_LIGHTEST_FIRST				0x10000000
#define POWER_ACTION_LOCK_CONSOLE				0x20000000
#define POWER_ACTION_DISABLE_WAKES				0x40000000
#define POWER_ACTION_CRITICAL					0x80000000
#define POWER_LEVEL_USER_NOTIFY_TEXT			0x00000001
#define POWER_LEVEL_USER_NOTIFY_SOUND			0x00000002
#define POWER_LEVEL_USER_NOTIFY_EXEC			0x00000004
#define POWER_USER_NOTIFY_BUTTON				0x00000008
#define POWER_USER_NOTIFY_SHUTDOWN				0x00000010
#define POWER_USER_NOTIFY_FORCED_SHUTDOWN		0x00000020
#define POWER_FORCE_TRIGGER_RESET				0x80000000
#define BATTERY_DISCHARGE_FLAGS_EVENTCODE_MASK	0x00000007
#define BATTERY_DISCHARGE_FLAGS_ENABLE			0x80000000
typedef struct
{
	BOOLEAN Enable;
	BYTE Spare[3];
	DWORD BatteryLevel;
	POWER_ACTION_POLICY PowerPolicy;
	SYSTEM_POWER_STATE MinSystemState;
} SYSTEM_POWER_LEVEL, *PSYSTEM_POWER_LEVEL;
#define NUM_DISCHARGE_POLICIES      4
#define DISCHARGE_POLICY_CRITICAL   0
#define DISCHARGE_POLICY_LOW        1
typedef struct _SYSTEM_POWER_POLICY
{
	DWORD Revision;
	POWER_ACTION_POLICY PowerButton;
	POWER_ACTION_POLICY SleepButton;
	POWER_ACTION_POLICY LidClose;
	SYSTEM_POWER_STATE LidOpenWake;
	DWORD Reserved;
	POWER_ACTION_POLICY Idle;
	DWORD IdleTimeout;
	BYTE IdleSensitivity;
	BYTE DynamicThrottle;
	BYTE Spare2[2];
	SYSTEM_POWER_STATE MinSleep;
	SYSTEM_POWER_STATE MaxSleep;
	SYSTEM_POWER_STATE ReducedLatencySleep;
	DWORD WinLogonFlags;
	DWORD Spare3;
	DWORD DozeS4Timeout;
	DWORD BroadcastCapacityResolution;
	SYSTEM_POWER_LEVEL DischargePolicy[NUM_DISCHARGE_POLICIES];
	DWORD VideoTimeout;
	BOOLEAN VideoDimDisplay;
	DWORD VideoReserved[3];
	DWORD SpindownTimeout;
	BOOLEAN OptimizeForPower;
	BYTE FanThrottleTolerance;
	BYTE ForcedThrottle;
	BYTE MinThrottle;
	POWER_ACTION_POLICY OverThrottled;
} SYSTEM_POWER_POLICY, *PSYSTEM_POWER_POLICY;
#define PROCESSOR_IDLESTATE_POLICY_COUNT 0x3
typedef struct
{
	DWORD TimeCheck;
	BYTE DemotePercent;
	BYTE PromotePercent;
	BYTE Spare[2];
} PROCESSOR_IDLESTATE_INFO, *PPROCESSOR_IDLESTATE_INFO;
typedef struct
{
	WORD Revision;
	union
	{
		WORD AsWORD;
		struct
		{
			WORD AllowScaling:1;
			WORD Disabled:1;
			WORD Reserved:14;
		} DUMMYSTRUCTNAME;
	} Flags;
	DWORD PolicyCount;
	PROCESSOR_IDLESTATE_INFO Policy[PROCESSOR_IDLESTATE_POLICY_COUNT];
} PROCESSOR_IDLESTATE_POLICY, *PPROCESSOR_IDLESTATE_POLICY;
#define PO_THROTTLE_NONE            0
#define PO_THROTTLE_CONSTANT        1
#define PO_THROTTLE_DEGRADE         2
#define PO_THROTTLE_ADAPTIVE        3
#define PO_THROTTLE_MAXIMUM         4
typedef struct _PROCESSOR_POWER_POLICY_INFO
{
	DWORD TimeCheck;
	DWORD DemoteLimit;
	DWORD PromoteLimit;
	BYTE DemotePercent;
	BYTE PromotePercent;
	BYTE Spare[2];
	DWORD AllowDemotion:1;
	DWORD AllowPromotion:1;
	DWORD Reserved:30;
} PROCESSOR_POWER_POLICY_INFO, *PPROCESSOR_POWER_POLICY_INFO;
typedef struct _PROCESSOR_POWER_POLICY
{
	DWORD Revision;
	BYTE DynamicThrottle;
	BYTE Spare[3];
	DWORD DisableCStates:1;
	DWORD Reserved:31;
	DWORD PolicyCount;
	PROCESSOR_POWER_POLICY_INFO Policy[3];
} PROCESSOR_POWER_POLICY, *PPROCESSOR_POWER_POLICY;
typedef struct
{
	DWORD Revision;
	BYTE MaxThrottle;
	BYTE MinThrottle;
	BYTE BusyAdjThreshold;
	union
	{
		BYTE Spare;
		union
		{
			BYTE AsBYTE;
			struct
			{
				BYTE NoDomainAccounting:1;
				BYTE IncreasePolicy:2;
				BYTE DecreasePolicy:2;
				BYTE Reserved:3;
			} DUMMYSTRUCTNAME;
		} Flags;
	} DUMMYUNIONNAME;
	DWORD TimeCheck;
	DWORD IncreaseTime;
	DWORD DecreaseTime;
	DWORD IncreasePercent;
	DWORD DecreasePercent;
} PROCESSOR_PERFSTATE_POLICY, *PPROCESSOR_PERFSTATE_POLICY;
typedef struct _ADMINISTRATOR_POWER_POLICY
{
	SYSTEM_POWER_STATE MinSleep;
	SYSTEM_POWER_STATE MaxSleep;
	DWORD MinVideoTimeout;
	DWORD MaxVideoTimeout;
	DWORD MinSpindownTimeout;
	DWORD MaxSpindownTimeout;
} ADMINISTRATOR_POWER_POLICY, *PADMINISTRATOR_POWER_POLICY;
typedef struct
{
	BOOLEAN PowerButtonPresent;
	BOOLEAN SleepButtonPresent;
	BOOLEAN LidPresent;
	BOOLEAN SystemS1;
	BOOLEAN SystemS2;
	BOOLEAN SystemS3;
	BOOLEAN SystemS4;
	BOOLEAN SystemS5;
	BOOLEAN HiberFilePresent;
	BOOLEAN FullWake;
	BOOLEAN VideoDimPresent;
	BOOLEAN ApmPresent;
	BOOLEAN UpsPresent;
	BOOLEAN ThermalControl;
	BOOLEAN ProcessorThrottle;
	BYTE ProcessorMinThrottle;
#if (NTDDI_VERSION < NTDDI_WINXP)
	BYTE ProcessorThrottleScale;
	BYTE spare2[4];
#else
	BYTE ProcessorMaxThrottle;
	BOOLEAN FastSystemS4;
	BYTE spare2[3];
#endif
	BOOLEAN DiskSpinDown;
	BYTE spare3[8];
	BOOLEAN SystemBatteriesPresent;
	BOOLEAN BatteriesAreShortTerm;
	BATTERY_REPORTING_SCALE BatteryScale[3];
	SYSTEM_POWER_STATE AcOnLineWake;
	SYSTEM_POWER_STATE SoftLidWake;
	SYSTEM_POWER_STATE RtcWake;
	SYSTEM_POWER_STATE MinDeviceWakeState;
	SYSTEM_POWER_STATE DefaultLowLatencyWake;
} SYSTEM_POWER_CAPABILITIES, *PSYSTEM_POWER_CAPABILITIES;
typedef struct
{
	BOOLEAN AcOnLine;
	BOOLEAN BatteryPresent;
	BOOLEAN Charging;
	BOOLEAN Discharging;
	BOOLEAN Spare1[4];
	DWORD MaxCapacity;
	DWORD RemainingCapacity;
	DWORD Rate;
	DWORD EstimatedTime;
	DWORD DefaultAlert1;
	DWORD DefaultAlert2;
} SYSTEM_BATTERY_STATE, *PSYSTEM_BATTERY_STATE;
#include <pshpack4.h>
#define IMAGE_DOS_SIGNATURE                 0x5A4D
#define IMAGE_OS2_SIGNATURE                 0x454E
#define IMAGE_OS2_SIGNATURE_LE              0x454C
#define IMAGE_VXD_SIGNATURE                 0x454C
#define IMAGE_NT_SIGNATURE                  0x00004550
#include <pshpack2.h>
typedef struct _IMAGE_DOS_HEADER
{
	WORD e_magic;
	WORD e_cblp;
	WORD e_cp;
	WORD e_crlc;
	WORD e_cparhdr;
	WORD e_minalloc;
	WORD e_maxalloc;
	WORD e_ss;
	WORD e_sp;
	WORD e_csum;
	WORD e_ip;
	WORD e_cs;
	WORD e_lfarlc;
	WORD e_ovno;
	WORD e_res[4];
	WORD e_oemid;
	WORD e_oeminfo;
	WORD e_res2[10];
	LONG e_lfanew;
} IMAGE_DOS_HEADER, *PIMAGE_DOS_HEADER;
typedef struct _IMAGE_OS2_HEADER
{
	WORD ne_magic;
	CHAR ne_ver;
	CHAR ne_rev;
	WORD ne_enttab;
	WORD ne_cbenttab;
	LONG ne_crc;
	WORD ne_flags;
	WORD ne_autodata;
	WORD ne_heap;
	WORD ne_stack;
	LONG ne_csip;
	LONG ne_sssp;
	WORD ne_cseg;
	WORD ne_cmod;
	WORD ne_cbnrestab;
	WORD ne_segtab;
	WORD ne_rsrctab;
	WORD ne_restab;
	WORD ne_modtab;
	WORD ne_imptab;
	LONG ne_nrestab;
	WORD ne_cmovent;
	WORD ne_align;
	WORD ne_cres;
	BYTE ne_exetyp;
	BYTE ne_flagsothers;
	WORD ne_pretthunks;
	WORD ne_psegrefbytes;
	WORD ne_swaparea;
	WORD ne_expver;
} IMAGE_OS2_HEADER, *PIMAGE_OS2_HEADER;
typedef struct _IMAGE_VXD_HEADER
{
	WORD e32_magic;
	BYTE e32_border;
	BYTE e32_worder;
	DWORD e32_level;
	WORD e32_cpu;
	WORD e32_os;
	DWORD e32_ver;
	DWORD e32_mflags;
	DWORD e32_mpages;
	DWORD e32_startobj;
	DWORD e32_eip;
	DWORD e32_stackobj;
	DWORD e32_esp;
	DWORD e32_pagesize;
	DWORD e32_lastpagesize;
	DWORD e32_fixupsize;
	DWORD e32_fixupsum;
	DWORD e32_ldrsize;
	DWORD e32_ldrsum;
	DWORD e32_objtab;
	DWORD e32_objcnt;
	DWORD e32_objmap;
	DWORD e32_itermap;
	DWORD e32_rsrctab;
	DWORD e32_rsrccnt;
	DWORD e32_restab;
	DWORD e32_enttab;
	DWORD e32_dirtab;
	DWORD e32_dircnt;
	DWORD e32_fpagetab;
	DWORD e32_frectab;
	DWORD e32_impmod;
	DWORD e32_impmodcnt;
	DWORD e32_impproc;
	DWORD e32_pagesum;
	DWORD e32_datapage;
	DWORD e32_preload;
	DWORD e32_nrestab;
	DWORD e32_cbnrestab;
	DWORD e32_nressum;
	DWORD e32_autodata;
	DWORD e32_debuginfo;
	DWORD e32_debuglen;
	DWORD e32_instpreload;
	DWORD e32_instdemand;
	DWORD e32_heapsize;
	BYTE e32_res3[12];
	DWORD e32_winresoff;
	DWORD e32_winreslen;
	WORD e32_devid;
	WORD e32_ddkver;
} IMAGE_VXD_HEADER, *PIMAGE_VXD_HEADER;
#include <poppack.h>
typedef struct _IMAGE_FILE_HEADER
{
	WORD Machine;
	WORD NumberOfSections;
	DWORD TimeDateStamp;
	DWORD PointerToSymbolTable;
	DWORD NumberOfSymbols;
	WORD SizeOfOptionalHeader;
	WORD Characteristics;
} IMAGE_FILE_HEADER, *PIMAGE_FILE_HEADER;
#define IMAGE_SIZEOF_FILE_HEADER             20
#define IMAGE_FILE_RELOCS_STRIPPED           0x0001
#define IMAGE_FILE_EXECUTABLE_IMAGE          0x0002
#define IMAGE_FILE_LINE_NUMS_STRIPPED        0x0004
#define IMAGE_FILE_LOCAL_SYMS_STRIPPED       0x0008
#define IMAGE_FILE_AGGRESIVE_WS_TRIM         0x0010
#define IMAGE_FILE_LARGE_ADDRESS_AWARE       0x0020
#define IMAGE_FILE_BYTES_REVERSED_LO         0x0080
#define IMAGE_FILE_32BIT_MACHINE             0x0100
#define IMAGE_FILE_DEBUG_STRIPPED            0x0200
#define IMAGE_FILE_REMOVABLE_RUN_FROM_SWAP   0x0400
#define IMAGE_FILE_NET_RUN_FROM_SWAP         0x0800
#define IMAGE_FILE_SYSTEM                    0x1000
#define IMAGE_FILE_DLL                       0x2000
#define IMAGE_FILE_UP_SYSTEM_ONLY            0x4000
#define IMAGE_FILE_BYTES_REVERSED_HI         0x8000
#define IMAGE_FILE_MACHINE_UNKNOWN           0
#define IMAGE_FILE_MACHINE_I386              0x014c
#define IMAGE_FILE_MACHINE_R3000             0x0162
#define IMAGE_FILE_MACHINE_R4000             0x0166
#define IMAGE_FILE_MACHINE_R10000            0x0168
#define IMAGE_FILE_MACHINE_WCEMIPSV2         0x0169
#define IMAGE_FILE_MACHINE_ALPHA             0x0184
#define IMAGE_FILE_MACHINE_SH3               0x01a2
#define IMAGE_FILE_MACHINE_SH3DSP            0x01a3
#define IMAGE_FILE_MACHINE_SH3E              0x01a4
#define IMAGE_FILE_MACHINE_SH4               0x01a6
#define IMAGE_FILE_MACHINE_SH5               0x01a8
#define IMAGE_FILE_MACHINE_ARM               0x01c0
#define IMAGE_FILE_MACHINE_THUMB             0x01c2
#define IMAGE_FILE_MACHINE_AM33              0x01d3
#define IMAGE_FILE_MACHINE_POWERPC           0x01F0
#define IMAGE_FILE_MACHINE_POWERPCFP         0x01f1
#define IMAGE_FILE_MACHINE_IA64              0x0200
#define IMAGE_FILE_MACHINE_MIPS16            0x0266
#define IMAGE_FILE_MACHINE_ALPHA64           0x0284
#define IMAGE_FILE_MACHINE_MIPSFPU           0x0366
#define IMAGE_FILE_MACHINE_MIPSFPU16         0x0466
#define IMAGE_FILE_MACHINE_AXP64             IMAGE_FILE_MACHINE_ALPHA64
#define IMAGE_FILE_MACHINE_TRICORE           0x0520
#define IMAGE_FILE_MACHINE_CEF               0x0CEF
#define IMAGE_FILE_MACHINE_EBC               0x0EBC
#define IMAGE_FILE_MACHINE_AMD64             0x8664
#define IMAGE_FILE_MACHINE_M32R              0x9041
#define IMAGE_FILE_MACHINE_CEE               0xC0EE
typedef struct _IMAGE_DATA_DIRECTORY
{
	DWORD VirtualAddress;
	DWORD Size;
} IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;
#define IMAGE_NUMBEROF_DIRECTORY_ENTRIES    16
typedef struct _IMAGE_OPTIONAL_HEADER
{
	WORD Magic;
	BYTE MajorLinkerVersion;
	BYTE MinorLinkerVersion;
	DWORD SizeOfCode;
	DWORD SizeOfInitializedData;
	DWORD SizeOfUninitializedData;
	DWORD AddressOfEntryPoint;
	DWORD BaseOfCode;
	DWORD BaseOfData;
	DWORD ImageBase;
	DWORD SectionAlignment;
	DWORD FileAlignment;
	WORD MajorOperatingSystemVersion;
	WORD MinorOperatingSystemVersion;
	WORD MajorImageVersion;
	WORD MinorImageVersion;
	WORD MajorSubsystemVersion;
	WORD MinorSubsystemVersion;
	DWORD Win32VersionValue;
	DWORD SizeOfImage;
	DWORD SizeOfHeaders;
	DWORD CheckSum;
	WORD Subsystem;
	WORD DllCharacteristics;
	DWORD SizeOfStackReserve;
	DWORD SizeOfStackCommit;
	DWORD SizeOfHeapReserve;
	DWORD SizeOfHeapCommit;
	DWORD LoaderFlags;
	DWORD NumberOfRvaAndSizes;
	IMAGE_DATA_DIRECTORY DataDirectory[IMAGE_NUMBEROF_DIRECTORY_ENTRIES];
} IMAGE_OPTIONAL_HEADER32, *PIMAGE_OPTIONAL_HEADER32;
typedef struct _IMAGE_ROM_OPTIONAL_HEADER
{
	WORD Magic;
	BYTE MajorLinkerVersion;
	BYTE MinorLinkerVersion;
	DWORD SizeOfCode;
	DWORD SizeOfInitializedData;
	DWORD SizeOfUninitializedData;
	DWORD AddressOfEntryPoint;
	DWORD BaseOfCode;
	DWORD BaseOfData;
	DWORD BaseOfBss;
	DWORD GprMask;
	DWORD CprMask[4];
	DWORD GpValue;
} IMAGE_ROM_OPTIONAL_HEADER, *PIMAGE_ROM_OPTIONAL_HEADER;
typedef struct _IMAGE_OPTIONAL_HEADER64
{
	WORD Magic;
	BYTE MajorLinkerVersion;
	BYTE MinorLinkerVersion;
	DWORD SizeOfCode;
	DWORD SizeOfInitializedData;
	DWORD SizeOfUninitializedData;
	DWORD AddressOfEntryPoint;
	DWORD BaseOfCode;
	ULONGLONG ImageBase;
	DWORD SectionAlignment;
	DWORD FileAlignment;
	WORD MajorOperatingSystemVersion;
	WORD MinorOperatingSystemVersion;
	WORD MajorImageVersion;
	WORD MinorImageVersion;
	WORD MajorSubsystemVersion;
	WORD MinorSubsystemVersion;
	DWORD Win32VersionValue;
	DWORD SizeOfImage;
	DWORD SizeOfHeaders;
	DWORD CheckSum;
	WORD Subsystem;
	WORD DllCharacteristics;
	ULONGLONG SizeOfStackReserve;
	ULONGLONG SizeOfStackCommit;
	ULONGLONG SizeOfHeapReserve;
	ULONGLONG SizeOfHeapCommit;
	DWORD LoaderFlags;
	DWORD NumberOfRvaAndSizes;
	IMAGE_DATA_DIRECTORY DataDirectory[IMAGE_NUMBEROF_DIRECTORY_ENTRIES];
} IMAGE_OPTIONAL_HEADER64, *PIMAGE_OPTIONAL_HEADER64;
#define IMAGE_NT_OPTIONAL_HDR32_MAGIC	0x10b
#define IMAGE_NT_OPTIONAL_HDR64_MAGIC	0x20b
#define IMAGE_ROM_OPTIONAL_HDR_MAGIC	0x107
#ifdef _WIN64
typedef IMAGE_OPTIONAL_HEADER64 IMAGE_OPTIONAL_HEADER;
typedef PIMAGE_OPTIONAL_HEADER64 PIMAGE_OPTIONAL_HEADER;
#define IMAGE_NT_OPTIONAL_HDR_MAGIC	IMAGE_NT_OPTIONAL_HDR64_MAGIC
#else
typedef IMAGE_OPTIONAL_HEADER32 IMAGE_OPTIONAL_HEADER;
typedef PIMAGE_OPTIONAL_HEADER32 PIMAGE_OPTIONAL_HEADER;
#define IMAGE_NT_OPTIONAL_HDR_MAGIC	IMAGE_NT_OPTIONAL_HDR32_MAGIC
#endif
typedef struct _IMAGE_NT_HEADERS64
{
	DWORD Signature;
	IMAGE_FILE_HEADER FileHeader;
	IMAGE_OPTIONAL_HEADER64 OptionalHeader;
} IMAGE_NT_HEADERS64, *PIMAGE_NT_HEADERS64;
typedef struct _IMAGE_NT_HEADERS
{
	DWORD Signature;
	IMAGE_FILE_HEADER FileHeader;
	IMAGE_OPTIONAL_HEADER32 OptionalHeader;
} IMAGE_NT_HEADERS32, *PIMAGE_NT_HEADERS32;
typedef struct _IMAGE_ROM_HEADERS
{
	IMAGE_FILE_HEADER FileHeader;
	IMAGE_ROM_OPTIONAL_HEADER OptionalHeader;
} IMAGE_ROM_HEADERS, *PIMAGE_ROM_HEADERS;
#ifdef _WIN64
typedef IMAGE_NT_HEADERS64 IMAGE_NT_HEADERS;
typedef PIMAGE_NT_HEADERS64 PIMAGE_NT_HEADERS;
#else
typedef IMAGE_NT_HEADERS32 IMAGE_NT_HEADERS;
typedef PIMAGE_NT_HEADERS32 PIMAGE_NT_HEADERS;
#endif
#define IMAGE_FIRST_SECTION( ntheader ) ((PIMAGE_SECTION_HEADER) ((ULONG_PTR)(ntheader) + FIELD_OFFSET( IMAGE_NT_HEADERS, OptionalHeader ) + ((ntheader))->FileHeader.SizeOfOptionalHeader ))
#define IMAGE_SUBSYSTEM_UNKNOWN              0
#define IMAGE_SUBSYSTEM_NATIVE               1
#define IMAGE_SUBSYSTEM_WINDOWS_GUI          2
#define IMAGE_SUBSYSTEM_WINDOWS_CUI          3
#define IMAGE_SUBSYSTEM_OS2_CUI              5
#define IMAGE_SUBSYSTEM_POSIX_CUI            7
#define IMAGE_SUBSYSTEM_NATIVE_WINDOWS       8
#define IMAGE_SUBSYSTEM_WINDOWS_CE_GUI       9
#define IMAGE_SUBSYSTEM_EFI_APPLICATION      10
#define IMAGE_SUBSYSTEM_EFI_BOOT_SERVICE_DRIVER  11
#define IMAGE_SUBSYSTEM_EFI_RUNTIME_DRIVER   12
#define IMAGE_SUBSYSTEM_EFI_ROM              13
#define IMAGE_SUBSYSTEM_XBOX                 14
#define IMAGE_SUBSYSTEM_WINDOWS_BOOT_APPLICATION 16
#define IMAGE_DLLCHARACTERISTICS_DYNAMIC_BASE 0x0040
#define IMAGE_DLLCHARACTERISTICS_FORCE_INTEGRITY    0x0080
#define IMAGE_DLLCHARACTERISTICS_NX_COMPAT    0x0100
#define IMAGE_DLLCHARACTERISTICS_NO_ISOLATION 0x0200
#define IMAGE_DLLCHARACTERISTICS_NO_SEH       0x0400
#define IMAGE_DLLCHARACTERISTICS_NO_BIND      0x0800
#define IMAGE_DLLCHARACTERISTICS_WDM_DRIVER   0x2000
#define IMAGE_DLLCHARACTERISTICS_TERMINAL_SERVER_AWARE     0x8000
#define IMAGE_DIRECTORY_ENTRY_EXPORT          0
#define IMAGE_DIRECTORY_ENTRY_IMPORT          1
#define IMAGE_DIRECTORY_ENTRY_RESOURCE        2
#define IMAGE_DIRECTORY_ENTRY_EXCEPTION       3
#define IMAGE_DIRECTORY_ENTRY_SECURITY        4
#define IMAGE_DIRECTORY_ENTRY_BASERELOC       5
#define IMAGE_DIRECTORY_ENTRY_DEBUG           6
#define IMAGE_DIRECTORY_ENTRY_ARCHITECTURE    7
#define IMAGE_DIRECTORY_ENTRY_GLOBALPTR       8
#define IMAGE_DIRECTORY_ENTRY_TLS             9
#define IMAGE_DIRECTORY_ENTRY_LOAD_CONFIG    10
#define IMAGE_DIRECTORY_ENTRY_BOUND_IMPORT   11
#define IMAGE_DIRECTORY_ENTRY_IAT            12
#define IMAGE_DIRECTORY_ENTRY_DELAY_IMPORT   13
#define IMAGE_DIRECTORY_ENTRY_COM_DESCRIPTOR 14
typedef struct ANON_OBJECT_HEADER
{
	WORD Sig1;
	WORD Sig2;
	WORD Version;
	WORD Machine;
	DWORD TimeDateStamp;
	CLSID ClassID;
	DWORD SizeOfData;
} ANON_OBJECT_HEADER;
typedef struct ANON_OBJECT_HEADER_V2
{
	WORD Sig1;
	WORD Sig2;
	WORD Version;
	WORD Machine;
	DWORD TimeDateStamp;
	CLSID ClassID;
	DWORD SizeOfData;
	DWORD Flags;
	DWORD MetaDataSize;
	DWORD MetaDataOffset;
} ANON_OBJECT_HEADER_V2;
typedef struct ANON_OBJECT_HEADER_BIGOBJ
{
	WORD Sig1;
	WORD Sig2;
	WORD Version;
	WORD Machine;
	DWORD TimeDateStamp;
	CLSID ClassID;
	DWORD SizeOfData;
	DWORD Flags;
	DWORD MetaDataSize;
	DWORD MetaDataOffset;
	DWORD NumberOfSections;
	DWORD PointerToSymbolTable;
	DWORD NumberOfSymbols;
} ANON_OBJECT_HEADER_BIGOBJ;
#define IMAGE_SIZEOF_SHORT_NAME  8
typedef struct _IMAGE_SECTION_HEADER
{
	BYTE Name[IMAGE_SIZEOF_SHORT_NAME];
	union
	{
		DWORD PhysicalAddress;
		DWORD VirtualSize;
	} Misc;
	DWORD VirtualAddress;
	DWORD SizeOfRawData;
	DWORD PointerToRawData;
	DWORD PointerToRelocations;
	DWORD PointerToLinenumbers;
	WORD NumberOfRelocations;
	WORD NumberOfLinenumbers;
	DWORD Characteristics;
} IMAGE_SECTION_HEADER, *PIMAGE_SECTION_HEADER;
#define IMAGE_SIZEOF_SECTION_HEADER          40
#define IMAGE_SCN_TYPE_NO_PAD                0x00000008
#define IMAGE_SCN_CNT_CODE                   0x00000020
#define IMAGE_SCN_CNT_INITIALIZED_DATA       0x00000040
#define IMAGE_SCN_CNT_UNINITIALIZED_DATA     0x00000080
#define IMAGE_SCN_LNK_OTHER                  0x00000100
#define IMAGE_SCN_LNK_INFO                   0x00000200
#define IMAGE_SCN_LNK_REMOVE                 0x00000800
#define IMAGE_SCN_LNK_COMDAT                 0x00001000
#define IMAGE_SCN_NO_DEFER_SPEC_EXC          0x00004000
#define IMAGE_SCN_GPREL                      0x00008000
#define IMAGE_SCN_MEM_FARDATA                0x00008000
#define IMAGE_SCN_MEM_PURGEABLE              0x00020000
#define IMAGE_SCN_MEM_16BIT                  0x00020000
#define IMAGE_SCN_MEM_LOCKED                 0x00040000
#define IMAGE_SCN_MEM_PRELOAD                0x00080000
#define IMAGE_SCN_ALIGN_1BYTES               0x00100000
#define IMAGE_SCN_ALIGN_2BYTES               0x00200000
#define IMAGE_SCN_ALIGN_4BYTES               0x00300000
#define IMAGE_SCN_ALIGN_8BYTES               0x00400000
#define IMAGE_SCN_ALIGN_16BYTES              0x00500000
#define IMAGE_SCN_ALIGN_32BYTES              0x00600000
#define IMAGE_SCN_ALIGN_64BYTES              0x00700000
#define IMAGE_SCN_ALIGN_128BYTES             0x00800000
#define IMAGE_SCN_ALIGN_256BYTES             0x00900000
#define IMAGE_SCN_ALIGN_512BYTES             0x00A00000
#define IMAGE_SCN_ALIGN_1024BYTES            0x00B00000
#define IMAGE_SCN_ALIGN_2048BYTES            0x00C00000
#define IMAGE_SCN_ALIGN_4096BYTES            0x00D00000
#define IMAGE_SCN_ALIGN_8192BYTES            0x00E00000
#define IMAGE_SCN_ALIGN_MASK                 0x00F00000
#define IMAGE_SCN_LNK_NRELOC_OVFL            0x01000000
#define IMAGE_SCN_MEM_DISCARDABLE            0x02000000
#define IMAGE_SCN_MEM_NOT_CACHED             0x04000000
#define IMAGE_SCN_MEM_NOT_PAGED              0x08000000
#define IMAGE_SCN_MEM_SHARED                 0x10000000
#define IMAGE_SCN_MEM_EXECUTE                0x20000000
#define IMAGE_SCN_MEM_READ                   0x40000000
#define IMAGE_SCN_MEM_WRITE                  0x80000000
#define IMAGE_SCN_SCALE_INDEX                0x00000001
#include <pshpack2.h>
typedef struct _IMAGE_SYMBOL
{
	union
	{
		BYTE ShortName[8];
		struct
		{
			DWORD Short;
			DWORD Long;
		} Name;
		DWORD LongName[2];
	} N;
	DWORD Value;
	SHORT SectionNumber;
	WORD Type;
	BYTE StorageClass;
	BYTE NumberOfAuxSymbols;
} IMAGE_SYMBOL;
typedef IMAGE_SYMBOL UNALIGNED *PIMAGE_SYMBOL;
#define IMAGE_SIZEOF_SYMBOL                  18
typedef struct _IMAGE_SYMBOL_EX
{
	union
	{
		BYTE ShortName[8];
		struct
		{
			DWORD Short;
			DWORD Long;
		} Name;
		DWORD LongName[2];
	} N;
	DWORD Value;
	LONG SectionNumber;
	WORD Type;
	BYTE StorageClass;
	BYTE NumberOfAuxSymbols;
} IMAGE_SYMBOL_EX;
typedef IMAGE_SYMBOL_EX UNALIGNED *PIMAGE_SYMBOL_EX;
#define IMAGE_SYM_UNDEFINED           (SHORT)0
#define IMAGE_SYM_ABSOLUTE            (SHORT)-1
#define IMAGE_SYM_DEBUG               (SHORT)-2
#define IMAGE_SYM_SECTION_MAX         0xFEFF
#define IMAGE_SYM_SECTION_MAX_EX      MAXLONG
#define IMAGE_SYM_TYPE_NULL                 0x0000
#define IMAGE_SYM_TYPE_VOID                 0x0001
#define IMAGE_SYM_TYPE_CHAR                 0x0002
#define IMAGE_SYM_TYPE_SHORT                0x0003
#define IMAGE_SYM_TYPE_INT                  0x0004
#define IMAGE_SYM_TYPE_LONG                 0x0005
#define IMAGE_SYM_TYPE_FLOAT                0x0006
#define IMAGE_SYM_TYPE_DOUBLE               0x0007
#define IMAGE_SYM_TYPE_STRUCT               0x0008
#define IMAGE_SYM_TYPE_UNION                0x0009
#define IMAGE_SYM_TYPE_ENUM                 0x000A
#define IMAGE_SYM_TYPE_MOE                  0x000B
#define IMAGE_SYM_TYPE_BYTE                 0x000C
#define IMAGE_SYM_TYPE_WORD                 0x000D
#define IMAGE_SYM_TYPE_UINT                 0x000E
#define IMAGE_SYM_TYPE_DWORD                0x000F
#define IMAGE_SYM_TYPE_PCODE                0x8000
#define IMAGE_SYM_DTYPE_NULL                0
#define IMAGE_SYM_DTYPE_POINTER             1
#define IMAGE_SYM_DTYPE_FUNCTION            2
#define IMAGE_SYM_DTYPE_ARRAY               3
#define IMAGE_SYM_CLASS_END_OF_FUNCTION     (BYTE )-1
#define IMAGE_SYM_CLASS_NULL                0x0000
#define IMAGE_SYM_CLASS_AUTOMATIC           0x0001
#define IMAGE_SYM_CLASS_EXTERNAL            0x0002
#define IMAGE_SYM_CLASS_STATIC              0x0003
#define IMAGE_SYM_CLASS_REGISTER            0x0004
#define IMAGE_SYM_CLASS_EXTERNAL_DEF        0x0005
#define IMAGE_SYM_CLASS_LABEL               0x0006
#define IMAGE_SYM_CLASS_UNDEFINED_LABEL     0x0007
#define IMAGE_SYM_CLASS_MEMBER_OF_STRUCT    0x0008
#define IMAGE_SYM_CLASS_ARGUMENT            0x0009
#define IMAGE_SYM_CLASS_STRUCT_TAG          0x000A
#define IMAGE_SYM_CLASS_MEMBER_OF_UNION     0x000B
#define IMAGE_SYM_CLASS_UNION_TAG           0x000C
#define IMAGE_SYM_CLASS_TYPE_DEFINITION     0x000D
#define IMAGE_SYM_CLASS_UNDEFINED_STATIC    0x000E
#define IMAGE_SYM_CLASS_ENUM_TAG            0x000F
#define IMAGE_SYM_CLASS_MEMBER_OF_ENUM      0x0010
#define IMAGE_SYM_CLASS_REGISTER_PARAM      0x0011
#define IMAGE_SYM_CLASS_BIT_FIELD           0x0012
#define IMAGE_SYM_CLASS_FAR_EXTERNAL        0x0044
#define IMAGE_SYM_CLASS_BLOCK               0x0064
#define IMAGE_SYM_CLASS_FUNCTION            0x0065
#define IMAGE_SYM_CLASS_END_OF_STRUCT       0x0066
#define IMAGE_SYM_CLASS_FILE                0x0067
#define IMAGE_SYM_CLASS_SECTION             0x0068
#define IMAGE_SYM_CLASS_WEAK_EXTERNAL       0x0069
#define IMAGE_SYM_CLASS_CLR_TOKEN           0x006B
#define N_BTMASK                            0x000F
#define N_TMASK                             0x0030
#define N_TMASK1                            0x00C0
#define N_TMASK2                            0x00F0
#define N_BTSHFT                            4
#define N_TSHIFT                            2
#define BTYPE(x) ((x) & N_BTMASK)
#ifndef ISPTR
#define ISPTR(x) (((x) & N_TMASK) == (IMAGE_SYM_DTYPE_POINTER << N_BTSHFT))
#endif
#ifndef ISFCN
#define ISFCN(x) (((x) & N_TMASK) == (IMAGE_SYM_DTYPE_FUNCTION << N_BTSHFT))
#endif
#ifndef ISARY
#define ISARY(x) (((x) & N_TMASK) == (IMAGE_SYM_DTYPE_ARRAY << N_BTSHFT))
#endif
#ifndef ISTAG
#define ISTAG(x) ((x)==IMAGE_SYM_CLASS_STRUCT_TAG || (x)==IMAGE_SYM_CLASS_UNION_TAG || (x)==IMAGE_SYM_CLASS_ENUM_TAG)
#endif
#ifndef INCREF
#define INCREF(x) ((((x)&~N_BTMASK)<<N_TSHIFT)|(IMAGE_SYM_DTYPE_POINTER<<N_BTSHFT)|((x)&N_BTMASK))
#endif
#ifndef DECREF
#define DECREF(x) ((((x)>>N_TSHIFT)&~N_BTMASK)|((x)&N_BTMASK))
#endif
#include <pshpack2.h>
typedef struct IMAGE_AUX_SYMBOL_TOKEN_DEF
{
	BYTE bAuxType;
	BYTE bReserved;
	DWORD SymbolTableIndex;
	BYTE rgbReserved[12];
} IMAGE_AUX_SYMBOL_TOKEN_DEF;
typedef IMAGE_AUX_SYMBOL_TOKEN_DEF UNALIGNED *PIMAGE_AUX_SYMBOL_TOKEN_DEF;
#include <poppack.h>
typedef union _IMAGE_AUX_SYMBOL
{
	struct
	{
		DWORD TagIndex;
		union
		{
			struct
			{
				WORD Linenumber;
				WORD Size;
			} LnSz;
			DWORD TotalSize;
		} Misc;
		union
		{
			struct
			{
				DWORD PointerToLinenumber;
				DWORD PointerToNextFunction;
			} Function;
			struct
			{
				WORD Dimension[4];
			} Array;
		} FcnAry;
		WORD TvIndex;
	} Sym;
	struct
	{
		BYTE Name[IMAGE_SIZEOF_SYMBOL];
	} File;
	struct
	{
		DWORD Length;
		WORD NumberOfRelocations;
		WORD NumberOfLinenumbers;
		DWORD CheckSum;
		SHORT Number;
		BYTE Selection;
		BYTE bReserved;
		SHORT HighNumber;
	} Section;
	IMAGE_AUX_SYMBOL_TOKEN_DEF TokenDef;
	struct
	{
			DWORD crc;
			BYTE rgbReserved[14];
	} CRC;
} IMAGE_AUX_SYMBOL;
typedef IMAGE_AUX_SYMBOL UNALIGNED *PIMAGE_AUX_SYMBOL;
typedef union _IMAGE_AUX_SYMBOL_EX
{
	struct
	{
		DWORD WeakDefaultSymIndex;
		DWORD WeakSearchType;
		BYTE rgbReserved[12];
	} Sym;
	struct
	{
		BYTE Name[sizeof(IMAGE_SYMBOL_EX)];
	} File;
	struct
	{
		DWORD Length;
		WORD NumberOfRelocations;
		WORD NumberOfLinenumbers;
		DWORD CheckSum;
		SHORT Number;
		BYTE Selection;
		BYTE bReserved;
		SHORT HighNumber;
		BYTE rgbReserved[2];
	} Section;
	struct
	{
		IMAGE_AUX_SYMBOL_TOKEN_DEF TokenDef;
		BYTE rgbReserved[2];
	};
	struct
	{
		DWORD crc;
		BYTE rgbReserved[16];
	} CRC;
} IMAGE_AUX_SYMBOL_EX;
typedef IMAGE_AUX_SYMBOL_EX UNALIGNED *PIMAGE_AUX_SYMBOL_EX;
typedef enum IMAGE_AUX_SYMBOL_TYPE
{
	IMAGE_AUX_SYMBOL_TYPE_TOKEN_DEF = 1,
} IMAGE_AUX_SYMBOL_TYPE;
#define IMAGE_COMDAT_SELECT_NODUPLICATES    1
#define IMAGE_COMDAT_SELECT_ANY             2
#define IMAGE_COMDAT_SELECT_SAME_SIZE       3
#define IMAGE_COMDAT_SELECT_EXACT_MATCH     4
#define IMAGE_COMDAT_SELECT_ASSOCIATIVE     5
#define IMAGE_COMDAT_SELECT_LARGEST         6
#define IMAGE_COMDAT_SELECT_NEWEST          7
#define IMAGE_WEAK_EXTERN_SEARCH_NOLIBRARY  1
#define IMAGE_WEAK_EXTERN_SEARCH_LIBRARY    2
#define IMAGE_WEAK_EXTERN_SEARCH_ALIAS      3
typedef struct _IMAGE_RELOCATION
{
	union
	{
		DWORD VirtualAddress;
		DWORD RelocCount;
	} DUMMYUNIONNAME;
	DWORD SymbolTableIndex;
	WORD Type;
} IMAGE_RELOCATION;
typedef IMAGE_RELOCATION UNALIGNED *PIMAGE_RELOCATION;
#define IMAGE_REL_I386_ABSOLUTE         0x0000
#define IMAGE_REL_I386_DIR16            0x0001
#define IMAGE_REL_I386_REL16            0x0002
#define IMAGE_REL_I386_DIR32            0x0006
#define IMAGE_REL_I386_DIR32NB          0x0007
#define IMAGE_REL_I386_SEG12            0x0009
#define IMAGE_REL_I386_SECTION          0x000A
#define IMAGE_REL_I386_SECREL           0x000B
#define IMAGE_REL_I386_TOKEN            0x000C
#define IMAGE_REL_I386_SECREL7          0x000D
#define IMAGE_REL_I386_REL32            0x0014
#define IMAGE_REL_MIPS_ABSOLUTE         0x0000
#define IMAGE_REL_MIPS_REFHALF          0x0001
#define IMAGE_REL_MIPS_REFWORD          0x0002
#define IMAGE_REL_MIPS_JMPADDR          0x0003
#define IMAGE_REL_MIPS_REFHI            0x0004
#define IMAGE_REL_MIPS_REFLO            0x0005
#define IMAGE_REL_MIPS_GPREL            0x0006
#define IMAGE_REL_MIPS_LITERAL          0x0007
#define IMAGE_REL_MIPS_SECTION          0x000A
#define IMAGE_REL_MIPS_SECREL           0x000B
#define IMAGE_REL_MIPS_SECRELLO         0x000C
#define IMAGE_REL_MIPS_SECRELHI         0x000D
#define IMAGE_REL_MIPS_TOKEN            0x000E
#define IMAGE_REL_MIPS_JMPADDR16        0x0010
#define IMAGE_REL_MIPS_REFWORDNB        0x0022
#define IMAGE_REL_MIPS_PAIR             0x0025
#define IMAGE_REL_ALPHA_ABSOLUTE        0x0000
#define IMAGE_REL_ALPHA_REFLONG         0x0001
#define IMAGE_REL_ALPHA_REFQUAD         0x0002
#define IMAGE_REL_ALPHA_GPREL32         0x0003
#define IMAGE_REL_ALPHA_LITERAL         0x0004
#define IMAGE_REL_ALPHA_LITUSE          0x0005
#define IMAGE_REL_ALPHA_GPDISP          0x0006
#define IMAGE_REL_ALPHA_BRADDR          0x0007
#define IMAGE_REL_ALPHA_HINT            0x0008
#define IMAGE_REL_ALPHA_INLINE_REFLONG  0x0009
#define IMAGE_REL_ALPHA_REFHI           0x000A
#define IMAGE_REL_ALPHA_REFLO           0x000B
#define IMAGE_REL_ALPHA_PAIR            0x000C
#define IMAGE_REL_ALPHA_MATCH           0x000D
#define IMAGE_REL_ALPHA_SECTION         0x000E
#define IMAGE_REL_ALPHA_SECREL          0x000F
#define IMAGE_REL_ALPHA_REFLONGNB       0x0010
#define IMAGE_REL_ALPHA_SECRELLO        0x0011
#define IMAGE_REL_ALPHA_SECRELHI        0x0012
#define IMAGE_REL_ALPHA_REFQ3           0x0013
#define IMAGE_REL_ALPHA_REFQ2           0x0014
#define IMAGE_REL_ALPHA_REFQ1           0x0015
#define IMAGE_REL_ALPHA_GPRELLO         0x0016
#define IMAGE_REL_ALPHA_GPRELHI         0x0017
#define IMAGE_REL_PPC_ABSOLUTE          0x0000
#define IMAGE_REL_PPC_ADDR64            0x0001
#define IMAGE_REL_PPC_ADDR32            0x0002
#define IMAGE_REL_PPC_ADDR24            0x0003
#define IMAGE_REL_PPC_ADDR16            0x0004
#define IMAGE_REL_PPC_ADDR14            0x0005
#define IMAGE_REL_PPC_REL24             0x0006
#define IMAGE_REL_PPC_REL14             0x0007
#define IMAGE_REL_PPC_TOCREL16          0x0008
#define IMAGE_REL_PPC_TOCREL14          0x0009
#define IMAGE_REL_PPC_ADDR32NB          0x000A
#define IMAGE_REL_PPC_SECREL            0x000B
#define IMAGE_REL_PPC_SECTION           0x000C
#define IMAGE_REL_PPC_IFGLUE            0x000D
#define IMAGE_REL_PPC_IMGLUE            0x000E
#define IMAGE_REL_PPC_SECREL16          0x000F
#define IMAGE_REL_PPC_REFHI             0x0010
#define IMAGE_REL_PPC_REFLO             0x0011
#define IMAGE_REL_PPC_PAIR              0x0012
#define IMAGE_REL_PPC_SECRELLO          0x0013
#define IMAGE_REL_PPC_SECRELHI          0x0014
#define IMAGE_REL_PPC_GPREL             0x0015
#define IMAGE_REL_PPC_TOKEN             0x0016
#define IMAGE_REL_PPC_TYPEMASK          0x00FF
#define IMAGE_REL_PPC_NEG               0x0100
#define IMAGE_REL_PPC_BRTAKEN           0x0200
#define IMAGE_REL_PPC_BRNTAKEN          0x0400
#define IMAGE_REL_PPC_TOCDEFN           0x0800
#define IMAGE_REL_SH3_ABSOLUTE          0x0000
#define IMAGE_REL_SH3_DIRECT16          0x0001
#define IMAGE_REL_SH3_DIRECT32          0x0002
#define IMAGE_REL_SH3_DIRECT8           0x0003
#define IMAGE_REL_SH3_DIRECT8_WORD      0x0004
#define IMAGE_REL_SH3_DIRECT8_LONG      0x0005
#define IMAGE_REL_SH3_DIRECT4           0x0006
#define IMAGE_REL_SH3_DIRECT4_WORD      0x0007
#define IMAGE_REL_SH3_DIRECT4_LONG      0x0008
#define IMAGE_REL_SH3_PCREL8_WORD       0x0009
#define IMAGE_REL_SH3_PCREL8_LONG       0x000A
#define IMAGE_REL_SH3_PCREL12_WORD      0x000B
#define IMAGE_REL_SH3_STARTOF_SECTION   0x000C
#define IMAGE_REL_SH3_SIZEOF_SECTION    0x000D
#define IMAGE_REL_SH3_SECTION           0x000E
#define IMAGE_REL_SH3_SECREL            0x000F
#define IMAGE_REL_SH3_DIRECT32_NB       0x0010
#define IMAGE_REL_SH3_GPREL4_LONG       0x0011
#define IMAGE_REL_SH3_TOKEN             0x0012
#define IMAGE_REL_SHM_PCRELPT           0x0013
#define IMAGE_REL_SHM_REFLO             0x0014
#define IMAGE_REL_SHM_REFHALF           0x0015
#define IMAGE_REL_SHM_RELLO             0x0016
#define IMAGE_REL_SHM_RELHALF           0x0017
#define IMAGE_REL_SHM_PAIR              0x0018
#define IMAGE_REL_SH_NOMODE             0x8000
#define IMAGE_REL_ARM_ABSOLUTE          0x0000
#define IMAGE_REL_ARM_ADDR32            0x0001
#define IMAGE_REL_ARM_ADDR32NB          0x0002
#define IMAGE_REL_ARM_BRANCH24          0x0003
#define IMAGE_REL_ARM_BRANCH11          0x0004
#define IMAGE_REL_ARM_TOKEN             0x0005
#define IMAGE_REL_ARM_GPREL12           0x0006
#define IMAGE_REL_ARM_GPREL7            0x0007
#define IMAGE_REL_ARM_BLX24             0x0008
#define IMAGE_REL_ARM_BLX11             0x0009
#define IMAGE_REL_ARM_SECTION           0x000E
#define IMAGE_REL_ARM_SECREL            0x000F
#define IMAGE_REL_AM_ABSOLUTE           0x0000
#define IMAGE_REL_AM_ADDR32             0x0001
#define IMAGE_REL_AM_ADDR32NB           0x0002
#define IMAGE_REL_AM_CALL32             0x0003
#define IMAGE_REL_AM_FUNCINFO           0x0004
#define IMAGE_REL_AM_REL32_1            0x0005
#define IMAGE_REL_AM_REL32_2            0x0006
#define IMAGE_REL_AM_SECREL             0x0007
#define IMAGE_REL_AM_SECTION            0x0008
#define IMAGE_REL_AM_TOKEN              0x0009
#define IMAGE_REL_AMD64_ABSOLUTE        0x0000
#define IMAGE_REL_AMD64_ADDR64          0x0001
#define IMAGE_REL_AMD64_ADDR32          0x0002
#define IMAGE_REL_AMD64_ADDR32NB        0x0003
#define IMAGE_REL_AMD64_REL32           0x0004
#define IMAGE_REL_AMD64_REL32_1         0x0005
#define IMAGE_REL_AMD64_REL32_2         0x0006
#define IMAGE_REL_AMD64_REL32_3         0x0007
#define IMAGE_REL_AMD64_REL32_4         0x0008
#define IMAGE_REL_AMD64_REL32_5         0x0009
#define IMAGE_REL_AMD64_SECTION         0x000A
#define IMAGE_REL_AMD64_SECREL          0x000B
#define IMAGE_REL_AMD64_SECREL7         0x000C
#define IMAGE_REL_AMD64_TOKEN           0x000D
#define IMAGE_REL_AMD64_SREL32          0x000E
#define IMAGE_REL_AMD64_PAIR            0x000F
#define IMAGE_REL_AMD64_SSPAN32         0x0010
#define IMAGE_REL_IA64_ABSOLUTE         0x0000
#define IMAGE_REL_IA64_IMM14            0x0001
#define IMAGE_REL_IA64_IMM22            0x0002
#define IMAGE_REL_IA64_IMM64            0x0003
#define IMAGE_REL_IA64_DIR32            0x0004
#define IMAGE_REL_IA64_DIR64            0x0005
#define IMAGE_REL_IA64_PCREL21B         0x0006
#define IMAGE_REL_IA64_PCREL21M         0x0007
#define IMAGE_REL_IA64_PCREL21F         0x0008
#define IMAGE_REL_IA64_GPREL22          0x0009
#define IMAGE_REL_IA64_LTOFF22          0x000A
#define IMAGE_REL_IA64_SECTION          0x000B
#define IMAGE_REL_IA64_SECREL22         0x000C
#define IMAGE_REL_IA64_SECREL64I        0x000D
#define IMAGE_REL_IA64_SECREL32         0x000E
#define IMAGE_REL_IA64_DIR32NB          0x0010
#define IMAGE_REL_IA64_SREL14           0x0011
#define IMAGE_REL_IA64_SREL22           0x0012
#define IMAGE_REL_IA64_SREL32           0x0013
#define IMAGE_REL_IA64_UREL32           0x0014
#define IMAGE_REL_IA64_PCREL60X         0x0015
#define IMAGE_REL_IA64_PCREL60B         0x0016
#define IMAGE_REL_IA64_PCREL60F         0x0017
#define IMAGE_REL_IA64_PCREL60I         0x0018
#define IMAGE_REL_IA64_PCREL60M         0x0019
#define IMAGE_REL_IA64_IMMGPREL64       0x001A
#define IMAGE_REL_IA64_TOKEN            0x001B
#define IMAGE_REL_IA64_GPREL32          0x001C
#define IMAGE_REL_IA64_ADDEND           0x001F
#define IMAGE_REL_CEF_ABSOLUTE          0x0000
#define IMAGE_REL_CEF_ADDR32            0x0001
#define IMAGE_REL_CEF_ADDR64            0x0002
#define IMAGE_REL_CEF_ADDR32NB          0x0003
#define IMAGE_REL_CEF_SECTION           0x0004
#define IMAGE_REL_CEF_SECREL            0x0005
#define IMAGE_REL_CEF_TOKEN             0x0006
#define IMAGE_REL_CEE_ABSOLUTE          0x0000
#define IMAGE_REL_CEE_ADDR32            0x0001
#define IMAGE_REL_CEE_ADDR64            0x0002
#define IMAGE_REL_CEE_ADDR32NB          0x0003
#define IMAGE_REL_CEE_SECTION           0x0004
#define IMAGE_REL_CEE_SECREL            0x0005
#define IMAGE_REL_CEE_TOKEN             0x0006
#define IMAGE_REL_M32R_ABSOLUTE         0x0000
#define IMAGE_REL_M32R_ADDR32           0x0001
#define IMAGE_REL_M32R_ADDR32NB         0x0002
#define IMAGE_REL_M32R_ADDR24           0x0003
#define IMAGE_REL_M32R_GPREL16          0x0004
#define IMAGE_REL_M32R_PCREL24          0x0005
#define IMAGE_REL_M32R_PCREL16          0x0006
#define IMAGE_REL_M32R_PCREL8           0x0007
#define IMAGE_REL_M32R_REFHALF          0x0008
#define IMAGE_REL_M32R_REFHI            0x0009
#define IMAGE_REL_M32R_REFLO            0x000A
#define IMAGE_REL_M32R_PAIR             0x000B
#define IMAGE_REL_M32R_SECTION          0x000C
#define IMAGE_REL_M32R_SECREL32         0x000D
#define IMAGE_REL_M32R_TOKEN            0x000E
#define IMAGE_REL_EBC_ABSOLUTE          0x0000
#define IMAGE_REL_EBC_ADDR32NB          0x0001
#define IMAGE_REL_EBC_REL32             0x0002
#define IMAGE_REL_EBC_SECTION           0x0003
#define IMAGE_REL_EBC_SECREL            0x0004
#define EXT_IMM64(Value, Address, Size, InstPos, ValPos) Value |= (((ULONGLONG)((*(Address) >> InstPos) & (((ULONGLONG)1 << Size) - 1))) << ValPos)
#define INS_IMM64(Value, Address, Size, InstPos, ValPos) *(PDWORD)Address = (*(PDWORD)Address & ~(((1 << Size) - 1) << InstPos)) | ((DWORD)((((ULONGLONG)Value >> ValPos) & (((ULONGLONG)1 << Size) - 1))) << InstPos)
#define EMARCH_ENC_I17_IMM7B_INST_WORD_X         3
#define EMARCH_ENC_I17_IMM7B_SIZE_X              7
#define EMARCH_ENC_I17_IMM7B_INST_WORD_POS_X     4
#define EMARCH_ENC_I17_IMM7B_VAL_POS_X           0
#define EMARCH_ENC_I17_IMM9D_INST_WORD_X         3
#define EMARCH_ENC_I17_IMM9D_SIZE_X              9
#define EMARCH_ENC_I17_IMM9D_INST_WORD_POS_X     18
#define EMARCH_ENC_I17_IMM9D_VAL_POS_X           7
#define EMARCH_ENC_I17_IMM5C_INST_WORD_X         3
#define EMARCH_ENC_I17_IMM5C_SIZE_X              5
#define EMARCH_ENC_I17_IMM5C_INST_WORD_POS_X     13
#define EMARCH_ENC_I17_IMM5C_VAL_POS_X           16
#define EMARCH_ENC_I17_IC_INST_WORD_X            3
#define EMARCH_ENC_I17_IC_SIZE_X                 1
#define EMARCH_ENC_I17_IC_INST_WORD_POS_X        12
#define EMARCH_ENC_I17_IC_VAL_POS_X              21
#define EMARCH_ENC_I17_IMM41a_INST_WORD_X        1
#define EMARCH_ENC_I17_IMM41a_SIZE_X             10
#define EMARCH_ENC_I17_IMM41a_INST_WORD_POS_X    14
#define EMARCH_ENC_I17_IMM41a_VAL_POS_X          22
#define EMARCH_ENC_I17_IMM41b_INST_WORD_X        1
#define EMARCH_ENC_I17_IMM41b_SIZE_X             8
#define EMARCH_ENC_I17_IMM41b_INST_WORD_POS_X    24
#define EMARCH_ENC_I17_IMM41b_VAL_POS_X          32
#define EMARCH_ENC_I17_IMM41c_INST_WORD_X        2
#define EMARCH_ENC_I17_IMM41c_SIZE_X             23
#define EMARCH_ENC_I17_IMM41c_INST_WORD_POS_X    0
#define EMARCH_ENC_I17_IMM41c_VAL_POS_X          40
#define EMARCH_ENC_I17_SIGN_INST_WORD_X          3
#define EMARCH_ENC_I17_SIGN_SIZE_X               1
#define EMARCH_ENC_I17_SIGN_INST_WORD_POS_X      27
#define EMARCH_ENC_I17_SIGN_VAL_POS_X            63
#define X3_OPCODE_INST_WORD_X                    3
#define X3_OPCODE_SIZE_X                         4
#define X3_OPCODE_INST_WORD_POS_X                28
#define X3_OPCODE_SIGN_VAL_POS_X                 0
#define X3_I_INST_WORD_X                         3
#define X3_I_SIZE_X                              1
#define X3_I_INST_WORD_POS_X                     27
#define X3_I_SIGN_VAL_POS_X                      59
#define X3_D_WH_INST_WORD_X                      3
#define X3_D_WH_SIZE_X                           3
#define X3_D_WH_INST_WORD_POS_X                  24
#define X3_D_WH_SIGN_VAL_POS_X                   0
#define X3_IMM20_INST_WORD_X                     3
#define X3_IMM20_SIZE_X                          20
#define X3_IMM20_INST_WORD_POS_X                 4
#define X3_IMM20_SIGN_VAL_POS_X                  0
#define X3_IMM39_1_INST_WORD_X                   2
#define X3_IMM39_1_SIZE_X                        23
#define X3_IMM39_1_INST_WORD_POS_X               0
#define X3_IMM39_1_SIGN_VAL_POS_X                36
#define X3_IMM39_2_INST_WORD_X                   1
#define X3_IMM39_2_SIZE_X                        16
#define X3_IMM39_2_INST_WORD_POS_X               16
#define X3_IMM39_2_SIGN_VAL_POS_X                20
#define X3_P_INST_WORD_X                         3
#define X3_P_SIZE_X                              4
#define X3_P_INST_WORD_POS_X                     0
#define X3_P_SIGN_VAL_POS_X                      0
#define X3_TMPLT_INST_WORD_X                     0
#define X3_TMPLT_SIZE_X                          4
#define X3_TMPLT_INST_WORD_POS_X                 0
#define X3_TMPLT_SIGN_VAL_POS_X                  0
#define X3_BTYPE_QP_INST_WORD_X                  2
#define X3_BTYPE_QP_SIZE_X                       9
#define X3_BTYPE_QP_INST_WORD_POS_X              23
#define X3_BTYPE_QP_INST_VAL_POS_X               0
#define X3_EMPTY_INST_WORD_X                     1
#define X3_EMPTY_SIZE_X                          2
#define X3_EMPTY_INST_WORD_POS_X                 14
#define X3_EMPTY_INST_VAL_POS_X                  0
typedef struct _IMAGE_LINENUMBER
{
	union
	{
		DWORD SymbolTableIndex;
		DWORD VirtualAddress;
	} Type;
	WORD Linenumber;
} IMAGE_LINENUMBER;
typedef IMAGE_LINENUMBER UNALIGNED *PIMAGE_LINENUMBER;
#include <poppack.h>
typedef struct _IMAGE_BASE_RELOCATION
{
	DWORD VirtualAddress;
	DWORD SizeOfBlock;
} IMAGE_BASE_RELOCATION;
typedef IMAGE_BASE_RELOCATION UNALIGNED *PIMAGE_BASE_RELOCATION;
#define IMAGE_REL_BASED_ABSOLUTE              0
#define IMAGE_REL_BASED_HIGH                  1
#define IMAGE_REL_BASED_LOW                   2
#define IMAGE_REL_BASED_HIGHLOW               3
#define IMAGE_REL_BASED_HIGHADJ               4
#define IMAGE_REL_BASED_MIPS_JMPADDR          5
#define IMAGE_REL_BASED_MIPS_JMPADDR16        9
#define IMAGE_REL_BASED_IA64_IMM64            9
#define IMAGE_REL_BASED_DIR64                 10
#define IMAGE_ARCHIVE_START_SIZE             8
#define IMAGE_ARCHIVE_START                  "!<arch>\n"
#define IMAGE_ARCHIVE_END                    "`\n"
#define IMAGE_ARCHIVE_PAD                    "\n"
#define IMAGE_ARCHIVE_LINKER_MEMBER          "/               "
#define IMAGE_ARCHIVE_LONGNAMES_MEMBER       "//              "
typedef struct _IMAGE_ARCHIVE_MEMBER_HEADER
{
	BYTE Name[16];
	BYTE Date[12];
	BYTE UserID[6];
	BYTE GroupID[6];
	BYTE Mode[8];
	BYTE Size[10];
	BYTE EndHeader[2];
} IMAGE_ARCHIVE_MEMBER_HEADER, *PIMAGE_ARCHIVE_MEMBER_HEADER;
#define IMAGE_SIZEOF_ARCHIVE_MEMBER_HDR      60
typedef struct _IMAGE_EXPORT_DIRECTORY
{
	DWORD Characteristics;
	DWORD TimeDateStamp;
	WORD MajorVersion;
	WORD MinorVersion;
	DWORD Name;
	DWORD Base;
	DWORD NumberOfFunctions;
	DWORD NumberOfNames;
	DWORD AddressOfFunctions;
	DWORD AddressOfNames;
	DWORD AddressOfNameOrdinals;
} IMAGE_EXPORT_DIRECTORY, *PIMAGE_EXPORT_DIRECTORY;
typedef struct _IMAGE_IMPORT_BY_NAME
{
	WORD Hint;
	BYTE Name[1];
} IMAGE_IMPORT_BY_NAME, *PIMAGE_IMPORT_BY_NAME;
#include <pshpack8.h>
typedef struct _IMAGE_THUNK_DATA64
{
	union
	{
		ULONGLONG ForwarderString;
		ULONGLONG Function;
		ULONGLONG Ordinal;
		ULONGLONG AddressOfData;
	} u1;
} IMAGE_THUNK_DATA64;
typedef IMAGE_THUNK_DATA64 *PIMAGE_THUNK_DATA64;
#include <poppack.h>
typedef struct _IMAGE_THUNK_DATA32
{
	union
	{
		DWORD ForwarderString;
		DWORD Function;
		DWORD Ordinal;
		DWORD AddressOfData;
	} u1;
} IMAGE_THUNK_DATA32;
typedef IMAGE_THUNK_DATA32 *PIMAGE_THUNK_DATA32;
#define IMAGE_ORDINAL_FLAG64 0x8000000000000000
#define IMAGE_ORDINAL_FLAG32 0x80000000
#define IMAGE_ORDINAL64(Ordinal) (Ordinal & 0xffff)
#define IMAGE_ORDINAL32(Ordinal) (Ordinal & 0xffff)
#define IMAGE_SNAP_BY_ORDINAL64(Ordinal) ((Ordinal & IMAGE_ORDINAL_FLAG64) != 0)
#define IMAGE_SNAP_BY_ORDINAL32(Ordinal) ((Ordinal & IMAGE_ORDINAL_FLAG32) != 0)
typedef VOID(NTAPI *PIMAGE_TLS_CALLBACK) (PVOID DllHandle, DWORD Reason, PVOID Reserved);
typedef struct _IMAGE_TLS_DIRECTORY64
{
	ULONGLONG StartAddressOfRawData;
	ULONGLONG EndAddressOfRawData;
	ULONGLONG AddressOfIndex;
	ULONGLONG AddressOfCallBacks;
	DWORD SizeOfZeroFill;
	DWORD Characteristics;
} IMAGE_TLS_DIRECTORY64;
typedef IMAGE_TLS_DIRECTORY64 *PIMAGE_TLS_DIRECTORY64;
typedef struct _IMAGE_TLS_DIRECTORY32
{
	DWORD StartAddressOfRawData;
	DWORD EndAddressOfRawData;
	DWORD AddressOfIndex;
	DWORD AddressOfCallBacks;
	DWORD SizeOfZeroFill;
	DWORD Characteristics;
} IMAGE_TLS_DIRECTORY32;
typedef IMAGE_TLS_DIRECTORY32 *PIMAGE_TLS_DIRECTORY32;
#ifdef _WIN64
#define IMAGE_ORDINAL_FLAG		IMAGE_ORDINAL_FLAG64
#define IMAGE_ORDINAL(Ordinal)	IMAGE_ORDINAL64(Ordinal)
typedef IMAGE_THUNK_DATA64 IMAGE_THUNK_DATA;
typedef PIMAGE_THUNK_DATA64 PIMAGE_THUNK_DATA;
#define IMAGE_SNAP_BY_ORDINAL(Ordinal)  IMAGE_SNAP_BY_ORDINAL64(Ordinal)
typedef IMAGE_TLS_DIRECTORY64 IMAGE_TLS_DIRECTORY;
typedef PIMAGE_TLS_DIRECTORY64 PIMAGE_TLS_DIRECTORY;
#else
#define IMAGE_ORDINAL_FLAG		IMAGE_ORDINAL_FLAG32
#define IMAGE_ORDINAL(Ordinal)	IMAGE_ORDINAL32(Ordinal)
typedef IMAGE_THUNK_DATA32 IMAGE_THUNK_DATA;
typedef PIMAGE_THUNK_DATA32 PIMAGE_THUNK_DATA;
#define IMAGE_SNAP_BY_ORDINAL(Ordinal)  IMAGE_SNAP_BY_ORDINAL32(Ordinal)
typedef IMAGE_TLS_DIRECTORY32 IMAGE_TLS_DIRECTORY;
typedef PIMAGE_TLS_DIRECTORY32 PIMAGE_TLS_DIRECTORY;
#endif
typedef struct _IMAGE_IMPORT_DESCRIPTOR
{
	union
	{
		DWORD Characteristics;
		DWORD OriginalFirstThunk;
	} DUMMYUNIONNAME;
	DWORD TimeDateStamp;
	DWORD ForwarderChain;
	DWORD Name;
	DWORD FirstThunk;
} IMAGE_IMPORT_DESCRIPTOR;
typedef IMAGE_IMPORT_DESCRIPTOR UNALIGNED *PIMAGE_IMPORT_DESCRIPTOR;
typedef struct _IMAGE_BOUND_IMPORT_DESCRIPTOR
{
	DWORD TimeDateStamp;
	WORD OffsetModuleName;
	WORD NumberOfModuleForwarderRefs;
} IMAGE_BOUND_IMPORT_DESCRIPTOR, *PIMAGE_BOUND_IMPORT_DESCRIPTOR;
typedef struct _IMAGE_BOUND_FORWARDER_REF
{
	DWORD TimeDateStamp;
	WORD OffsetModuleName;
	WORD Reserved;
} IMAGE_BOUND_FORWARDER_REF, *PIMAGE_BOUND_FORWARDER_REF;
typedef struct _IMAGE_RESOURCE_DIRECTORY
{
	DWORD Characteristics;
	DWORD TimeDateStamp;
	WORD MajorVersion;
	WORD MinorVersion;
	WORD NumberOfNamedEntries;
	WORD NumberOfIdEntries;
} IMAGE_RESOURCE_DIRECTORY, *PIMAGE_RESOURCE_DIRECTORY;
#define IMAGE_RESOURCE_NAME_IS_STRING        0x80000000
#define IMAGE_RESOURCE_DATA_IS_DIRECTORY     0x80000000
typedef struct _IMAGE_RESOURCE_DIRECTORY_ENTRY
{
	union
	{
		struct
		{
			DWORD NameOffset:31;
			DWORD NameIsString:1;
		} DUMMYSTRUCTNAME;
		DWORD Name;
		WORD Id;
	} DUMMYUNIONNAME;
	union
	{
		DWORD OffsetToData;
		struct
		{
			DWORD OffsetToDirectory:31;
			DWORD DataIsDirectory:1;
		} DUMMYSTRUCTNAME2;
	} DUMMYUNIONNAME2;
} IMAGE_RESOURCE_DIRECTORY_ENTRY, *PIMAGE_RESOURCE_DIRECTORY_ENTRY;
typedef struct _IMAGE_RESOURCE_DIRECTORY_STRING
{
	WORD Length;
	CHAR NameString[1];
} IMAGE_RESOURCE_DIRECTORY_STRING, *PIMAGE_RESOURCE_DIRECTORY_STRING;
typedef struct _IMAGE_RESOURCE_DIR_STRING_U
{
	WORD Length;
	WCHAR NameString[1];
} IMAGE_RESOURCE_DIR_STRING_U, *PIMAGE_RESOURCE_DIR_STRING_U;
typedef struct _IMAGE_RESOURCE_DATA_ENTRY
{
	DWORD OffsetToData;
	DWORD Size;
	DWORD CodePage;
	DWORD Reserved;
} IMAGE_RESOURCE_DATA_ENTRY, *PIMAGE_RESOURCE_DATA_ENTRY;
typedef struct
{
	DWORD Size;
	DWORD TimeDateStamp;
	WORD MajorVersion;
	WORD MinorVersion;
	DWORD GlobalFlagsClear;
	DWORD GlobalFlagsSet;
	DWORD CriticalSectionDefaultTimeout;
	DWORD DeCommitFreeBlockThreshold;
	DWORD DeCommitTotalFreeThreshold;
	DWORD LockPrefixTable;
	DWORD MaximumAllocationSize;
	DWORD VirtualMemoryThreshold;
	DWORD ProcessHeapFlags;
	DWORD ProcessAffinityMask;
	WORD CSDVersion;
	WORD Reserved1;
	DWORD EditList;
	DWORD SecurityCookie;
	DWORD SEHandlerTable;
	DWORD SEHandlerCount;
} IMAGE_LOAD_CONFIG_DIRECTORY32, *PIMAGE_LOAD_CONFIG_DIRECTORY32;
typedef struct
{
	DWORD Size;
	DWORD TimeDateStamp;
	WORD MajorVersion;
	WORD MinorVersion;
	DWORD GlobalFlagsClear;
	DWORD GlobalFlagsSet;
	DWORD CriticalSectionDefaultTimeout;
	ULONGLONG DeCommitFreeBlockThreshold;
	ULONGLONG DeCommitTotalFreeThreshold;
	ULONGLONG LockPrefixTable;
	ULONGLONG MaximumAllocationSize;
	ULONGLONG VirtualMemoryThreshold;
	ULONGLONG ProcessAffinityMask;
	DWORD ProcessHeapFlags;
	WORD CSDVersion;
	WORD Reserved1;
	ULONGLONG EditList;
	ULONGLONG SecurityCookie;
	ULONGLONG SEHandlerTable;
	ULONGLONG SEHandlerCount;
} IMAGE_LOAD_CONFIG_DIRECTORY64, *PIMAGE_LOAD_CONFIG_DIRECTORY64;
#ifdef _WIN64
typedef IMAGE_LOAD_CONFIG_DIRECTORY64 IMAGE_LOAD_CONFIG_DIRECTORY;
typedef PIMAGE_LOAD_CONFIG_DIRECTORY64 PIMAGE_LOAD_CONFIG_DIRECTORY;
#else
typedef IMAGE_LOAD_CONFIG_DIRECTORY32 IMAGE_LOAD_CONFIG_DIRECTORY;
typedef PIMAGE_LOAD_CONFIG_DIRECTORY32 PIMAGE_LOAD_CONFIG_DIRECTORY;
#endif
typedef struct _IMAGE_CE_RUNTIME_FUNCTION_ENTRY
{
	DWORD FuncStart;
	DWORD PrologLen:8;
	DWORD FuncLen:22;
	DWORD ThirtyTwoBit:1;
	DWORD ExceptionFlag:1;
} IMAGE_CE_RUNTIME_FUNCTION_ENTRY, *PIMAGE_CE_RUNTIME_FUNCTION_ENTRY;
typedef struct _IMAGE_ALPHA64_RUNTIME_FUNCTION_ENTRY
{
	ULONGLONG BeginAddress;
	ULONGLONG EndAddress;
	ULONGLONG ExceptionHandler;
	ULONGLONG HandlerData;
	ULONGLONG PrologEndAddress;
} IMAGE_ALPHA64_RUNTIME_FUNCTION_ENTRY, *PIMAGE_ALPHA64_RUNTIME_FUNCTION_ENTRY;
typedef struct _IMAGE_ALPHA_RUNTIME_FUNCTION_ENTRY
{
	DWORD BeginAddress;
	DWORD EndAddress;
	DWORD ExceptionHandler;
	DWORD HandlerData;
	DWORD PrologEndAddress;
} IMAGE_ALPHA_RUNTIME_FUNCTION_ENTRY, *PIMAGE_ALPHA_RUNTIME_FUNCTION_ENTRY;
typedef struct _IMAGE_RUNTIME_FUNCTION_ENTRY
{
	DWORD BeginAddress;
	DWORD EndAddress;
	DWORD UnwindInfoAddress;
} _IMAGE_RUNTIME_FUNCTION_ENTRY, *_PIMAGE_RUNTIME_FUNCTION_ENTRY;
typedef _IMAGE_RUNTIME_FUNCTION_ENTRY IMAGE_IA64_RUNTIME_FUNCTION_ENTRY;
typedef _PIMAGE_RUNTIME_FUNCTION_ENTRY PIMAGE_IA64_RUNTIME_FUNCTION_ENTRY;
#if defined(_AXP64_)
typedef IMAGE_ALPHA64_RUNTIME_FUNCTION_ENTRY IMAGE_AXP64_RUNTIME_FUNCTION_ENTRY;
typedef PIMAGE_ALPHA64_RUNTIME_FUNCTION_ENTRY PIMAGE_AXP64_RUNTIME_FUNCTION_ENTRY;
typedef IMAGE_ALPHA64_RUNTIME_FUNCTION_ENTRY IMAGE_RUNTIME_FUNCTION_ENTRY;
typedef PIMAGE_ALPHA64_RUNTIME_FUNCTION_ENTRY PIMAGE_RUNTIME_FUNCTION_ENTRY;
#elif defined(_ALPHA_)
typedef IMAGE_ALPHA_RUNTIME_FUNCTION_ENTRY IMAGE_RUNTIME_FUNCTION_ENTRY;
typedef PIMAGE_ALPHA_RUNTIME_FUNCTION_ENTRY PIMAGE_RUNTIME_FUNCTION_ENTRY;
#else
typedef _IMAGE_RUNTIME_FUNCTION_ENTRY IMAGE_RUNTIME_FUNCTION_ENTRY;
typedef _PIMAGE_RUNTIME_FUNCTION_ENTRY PIMAGE_RUNTIME_FUNCTION_ENTRY;
#endif
typedef struct _IMAGE_DEBUG_DIRECTORY
{
	DWORD Characteristics;
	DWORD TimeDateStamp;
	WORD MajorVersion;
	WORD MinorVersion;
	DWORD Type;
	DWORD SizeOfData;
	DWORD AddressOfRawData;
	DWORD PointerToRawData;
} IMAGE_DEBUG_DIRECTORY, *PIMAGE_DEBUG_DIRECTORY;
#define IMAGE_DEBUG_TYPE_UNKNOWN          0
#define IMAGE_DEBUG_TYPE_COFF             1
#define IMAGE_DEBUG_TYPE_CODEVIEW         2
#define IMAGE_DEBUG_TYPE_FPO              3
#define IMAGE_DEBUG_TYPE_MISC             4
#define IMAGE_DEBUG_TYPE_EXCEPTION        5
#define IMAGE_DEBUG_TYPE_FIXUP            6
#define IMAGE_DEBUG_TYPE_OMAP_TO_SRC      7
#define IMAGE_DEBUG_TYPE_OMAP_FROM_SRC    8
#define IMAGE_DEBUG_TYPE_BORLAND          9
#define IMAGE_DEBUG_TYPE_RESERVED10       10
#define IMAGE_DEBUG_TYPE_CLSID            11
typedef struct _IMAGE_COFF_SYMBOLS_HEADER
{
	DWORD NumberOfSymbols;
	DWORD LvaToFirstSymbol;
	DWORD NumberOfLinenumbers;
	DWORD LvaToFirstLinenumber;
	DWORD RvaToFirstByteOfCode;
	DWORD RvaToLastByteOfCode;
	DWORD RvaToFirstByteOfData;
	DWORD RvaToLastByteOfData;
} IMAGE_COFF_SYMBOLS_HEADER, *PIMAGE_COFF_SYMBOLS_HEADER;
#define FRAME_FPO       0
#define FRAME_TRAP      1
#define FRAME_TSS       2
#define FRAME_NONFPO    3
typedef struct _FPO_DATA
{
	DWORD ulOffStart;
	DWORD cbProcSize;
	DWORD cdwLocals;
	WORD cdwParams;
	WORD cbProlog:8;
	WORD cbRegs:3;
	WORD fHasSEH:1;
	WORD fUseBP:1;
	WORD reserved:1;
	WORD cbFrame:2;
} FPO_DATA, *PFPO_DATA;
#define SIZEOF_RFPO_DATA 16
#define IMAGE_DEBUG_MISC_EXENAME    1
typedef struct _IMAGE_DEBUG_MISC
{
	DWORD DataType;
	DWORD Length;
	BOOLEAN Unicode;
	BYTE Reserved[3];
	BYTE Data[1];
} IMAGE_DEBUG_MISC, *PIMAGE_DEBUG_MISC;
typedef struct _IMAGE_FUNCTION_ENTRY
{
	DWORD StartingAddress;
	DWORD EndingAddress;
	DWORD EndOfPrologue;
} IMAGE_FUNCTION_ENTRY, *PIMAGE_FUNCTION_ENTRY;
typedef struct _IMAGE_FUNCTION_ENTRY64
{
	ULONGLONG StartingAddress;
	ULONGLONG EndingAddress;
	union
	{
		ULONGLONG EndOfPrologue;
		ULONGLONG UnwindInfoAddress;
	} DUMMYUNIONNAME;
} IMAGE_FUNCTION_ENTRY64, *PIMAGE_FUNCTION_ENTRY64;
typedef struct _IMAGE_SEPARATE_DEBUG_HEADER
{
	WORD Signature;
	WORD Flags;
	WORD Machine;
	WORD Characteristics;
	DWORD TimeDateStamp;
	DWORD CheckSum;
	DWORD ImageBase;
	DWORD SizeOfImage;
	DWORD NumberOfSections;
	DWORD ExportedNamesSize;
	DWORD DebugDirectorySize;
	DWORD SectionAlignment;
	DWORD Reserved[2];
} IMAGE_SEPARATE_DEBUG_HEADER, *PIMAGE_SEPARATE_DEBUG_HEADER;
typedef struct _NON_PAGED_DEBUG_INFO
{
	WORD Signature;
	WORD Flags;
	DWORD Size;
	WORD Machine;
	WORD Characteristics;
	DWORD TimeDateStamp;
	DWORD CheckSum;
	DWORD SizeOfImage;
	ULONGLONG ImageBase;
} NON_PAGED_DEBUG_INFO, *PNON_PAGED_DEBUG_INFO;
#define IMAGE_SEPARATE_DEBUG_SIGNATURE 0x4944
#define NON_PAGED_DEBUG_SIGNATURE      0x494E
#define IMAGE_SEPARATE_DEBUG_FLAGS_MASK 0x8000
#define IMAGE_SEPARATE_DEBUG_MISMATCH   0x8000
typedef struct _ImageArchitectureHeader
{
	unsigned int AmaskValue:1;
	int:7;
	unsigned int AmaskShift:8;
	int:16;
	DWORD FirstEntryRVA;
} IMAGE_ARCHITECTURE_HEADER, *PIMAGE_ARCHITECTURE_HEADER;
typedef struct _ImageArchitectureEntry
{
	DWORD FixupInstRVA;
	DWORD NewInst;
} IMAGE_ARCHITECTURE_ENTRY, *PIMAGE_ARCHITECTURE_ENTRY;
#include <poppack.h>
#define IMPORT_OBJECT_HDR_SIG2  0xffff
typedef struct IMPORT_OBJECT_HEADER
{
	WORD Sig1;
	WORD Sig2;
	WORD Version;
	WORD Machine;
	DWORD TimeDateStamp;
	DWORD SizeOfData;
	union
	{
		WORD Ordinal;
		WORD Hint;
	} DUMMYUNIONNAME;
	WORD Type:2;
	WORD NameType:3;
	WORD Reserved:11;
} IMPORT_OBJECT_HEADER;
typedef enum IMPORT_OBJECT_TYPE
{
	IMPORT_OBJECT_CODE = 0,
	IMPORT_OBJECT_DATA = 1,
	IMPORT_OBJECT_CONST = 2,
} IMPORT_OBJECT_TYPE;
typedef enum IMPORT_OBJECT_NAME_TYPE
{
	IMPORT_OBJECT_ORDINAL = 0,
	IMPORT_OBJECT_NAME = 1,
	IMPORT_OBJECT_NAME_NO_PREFIX = 2,
	IMPORT_OBJECT_NAME_UNDECORATE = 3,
} IMPORT_OBJECT_NAME_TYPE;
#ifndef __IMAGE_COR20_HEADER_DEFINED__
#define __IMAGE_COR20_HEADER_DEFINED__
typedef enum ReplacesCorHdrNumericDefines
{
	COMIMAGE_FLAGS_ILONLY = 0x00000001,
	COMIMAGE_FLAGS_32BITREQUIRED = 0x00000002,
	COMIMAGE_FLAGS_IL_LIBRARY = 0x00000004,
	COMIMAGE_FLAGS_STRONGNAMESIGNED = 0x00000008,
	COMIMAGE_FLAGS_NATIVE_ENTRYPOINT = 0x00000010,
	COMIMAGE_FLAGS_TRACKDEBUGDATA = 0x00010000,
	COR_VERSION_MAJOR_V2 = 2,
	COR_VERSION_MAJOR = COR_VERSION_MAJOR_V2,
	COR_VERSION_MINOR = 0,
	COR_DELETED_NAME_LENGTH = 8,
	COR_VTABLEGAP_NAME_LENGTH = 8,
	NATIVE_TYPE_MAX_CB = 1,
	COR_ILMETHOD_SECT_SMALL_MAX_DATASIZE = 0xFF,
	IMAGE_COR_MIH_METHODRVA = 0x01,
	IMAGE_COR_MIH_EHRVA = 0x02,
	IMAGE_COR_MIH_BASICBLOCK = 0x08,
	COR_VTABLE_32BIT = 0x01,
	COR_VTABLE_64BIT = 0x02,
	COR_VTABLE_FROM_UNMANAGED = 0x04,
	COR_VTABLE_FROM_UNMANAGED_RETAIN_APPDOMAIN = 0x08,
	COR_VTABLE_CALL_MOST_DERIVED = 0x10,
	IMAGE_COR_EATJ_THUNK_SIZE = 32,
	MAX_CLASS_NAME = 1024,
	MAX_PACKAGE_NAME = 1024,
} ReplacesCorHdrNumericDefines;
typedef struct IMAGE_COR20_HEADER
{
	DWORD cb;
	WORD MajorRuntimeVersion;
	WORD MinorRuntimeVersion;
	IMAGE_DATA_DIRECTORY MetaData;
	DWORD Flags;
	union
	{
		DWORD EntryPointToken;
		DWORD EntryPointRVA;
	} DUMMYUNIONNAME;
	IMAGE_DATA_DIRECTORY Resources;
	IMAGE_DATA_DIRECTORY StrongNameSignature;
	IMAGE_DATA_DIRECTORY CodeManagerTable;
	IMAGE_DATA_DIRECTORY VTableFixups;
	IMAGE_DATA_DIRECTORY ExportAddressTableJumps;
	IMAGE_DATA_DIRECTORY ManagedNativeHeader;
} IMAGE_COR20_HEADER, *PIMAGE_COR20_HEADER;
#endif
#include <string.h>
#ifndef _SLIST_HEADER_
#define _SLIST_HEADER_
#if defined(_WIN64)
typedef struct DECLSPEC_ALIGN (16) _SLIST_ENTRY *PSLIST_ENTRY;
typedef struct DECLSPEC_ALIGN (16) _SLIST_ENTRY
{
	PSLIST_ENTRY Next;
} SLIST_ENTRY;
typedef struct _SLIST_ENTRY32
{
	DWORD Next;
} SLIST_ENTRY32, *PSLIST_ENTRY32;
#else
#define SLIST_ENTRY SINGLE_LIST_ENTRY
#define _SLIST_ENTRY _SINGLE_LIST_ENTRY
#define PSLIST_ENTRY PSINGLE_LIST_ENTRY
typedef SLIST_ENTRY SLIST_ENTRY32, *PSLIST_ENTRY32;
#endif
#if defined(_WIN64)
typedef union DECLSPEC_ALIGN (16) _SLIST_HEADER
{
	struct
	{
		ULONGLONG Alignment;
		ULONGLONG Region;
	} DUMMYSTRUCTNAME;
	struct
	{
		ULONGLONG Depth:16;
		ULONGLONG Sequence:9;
		ULONGLONG NextEntry:39;
		ULONGLONG HeaderType:1;
		ULONGLONG Init:1;
		ULONGLONG Reserved:59;
		ULONGLONG Region:3;
	} Header8;
	struct
	{
		ULONGLONG Depth:16;
		ULONGLONG Sequence:48;
		ULONGLONG HeaderType:1;
		ULONGLONG Init:1;
		ULONGLONG Reserved:2;
		ULONGLONG NextEntry:60;
	} Header16;
	struct
	{
		ULONGLONG Depth:16;
		ULONGLONG Sequence:48;
		ULONGLONG HeaderType:1;
		ULONGLONG Reserved:3;
		ULONGLONG NextEntry:60;
	} HeaderX64;
} SLIST_HEADER, *PSLIST_HEADER;
typedef union _SLIST_HEADER32
{
	ULONGLONG Alignment;
	struct
	{
		SLIST_ENTRY32 Next;
		WORD Depth;
		WORD Sequence;
	} DUMMYSTRUCTNAME;
} SLIST_HEADER32, *PSLIST_HEADER32;
#else
typedef union _SLIST_HEADER
{
	ULONGLONG Alignment;
	struct
	{
		SLIST_ENTRY Next;
		WORD Depth;
		WORD Sequence;
	} DUMMYSTRUCTNAME;
} SLIST_HEADER, *PSLIST_HEADER;
typedef SLIST_HEADER SLIST_HEADER32, *PSLIST_HEADER32;
#endif
#endif
NTSYSAPI VOID NTAPI RtlInitializeSListHead(PSLIST_HEADER ListHead);
NTSYSAPI PSLIST_ENTRY NTAPI RtlFirstEntrySList(const SLIST_HEADER *ListHead);
NTSYSAPI PSLIST_ENTRY NTAPI RtlInterlockedPopEntrySList(PSLIST_HEADER ListHead);
NTSYSAPI PSLIST_ENTRY NTAPI RtlInterlockedPushEntrySList(PSLIST_HEADER ListHead, PSLIST_ENTRY ListEntry);
NTSYSAPI PSLIST_ENTRY NTAPI RtlInterlockedFlushSList(PSLIST_HEADER ListHead);
NTSYSAPI WORD NTAPI RtlQueryDepthSList(PSLIST_HEADER ListHead);
#if defined(_IA64_)
NTSYSAPI PSLIST_ENTRY32 NTAPI RtlInterlockedPopEntrySList32(PSLIST_HEADER32 ListHead);
#endif
#ifndef _RTL_RUN_ONCE_DEF
#define _RTL_RUN_ONCE_DEF
#define RTL_RUN_ONCE_INIT {0}
#define RTL_RUN_ONCE_CHECK_ONLY     0x00000001UL
#define RTL_RUN_ONCE_ASYNC          0x00000002UL
#define RTL_RUN_ONCE_INIT_FAILED    0x00000004UL
#define RTL_RUN_ONCE_CTX_RESERVED_BITS 2
typedef union _RTL_RUN_ONCE
{
	PVOID Ptr;
} RTL_RUN_ONCE, *PRTL_RUN_ONCE;
typedef DWORD NTAPI RTL_RUN_ONCE_INIT_FN(PRTL_RUN_ONCE RunOnce, PVOID Parameter, PVOID *Context);
typedef RTL_RUN_ONCE_INIT_FN *PRTL_RUN_ONCE_INIT_FN;
#endif
#if (NTDDI_VERSION >= NTDDI_LONGHORN)
NTSYSAPI VOID NTAPI RtlRunOnceInitialize(PRTL_RUN_ONCE RunOnce);
NTSYSAPI DWORD NTAPI RtlRunOnceExecuteOnce(PRTL_RUN_ONCE RunOnce, PRTL_RUN_ONCE_INIT_FN InitFn, PVOID Parameter, PVOID *Context);
NTSYSAPI DWORD NTAPI RtlRunOnceBeginInitialize(PRTL_RUN_ONCE RunOnce, DWORD Flags, PVOID *Context);
NTSYSAPI DWORD NTAPI RtlRunOnceComplete(PRTL_RUN_ONCE RunOnce, DWORD Flags, PVOID Context);
#endif
#define HEAP_NO_SERIALIZE               0x00000001
#define HEAP_GROWABLE                   0x00000002
#define HEAP_GENERATE_EXCEPTIONS        0x00000004
#define HEAP_ZERO_MEMORY                0x00000008
#define HEAP_REALLOC_IN_PLACE_ONLY      0x00000010
#define HEAP_TAIL_CHECKING_ENABLED      0x00000020
#define HEAP_FREE_CHECKING_ENABLED      0x00000040
#define HEAP_DISABLE_COALESCE_ON_FREE   0x00000080
#define HEAP_CREATE_ALIGN_16            0x00010000
#define HEAP_CREATE_ENABLE_TRACING      0x00020000
#define HEAP_CREATE_ENABLE_EXECUTE      0x00040000
#define HEAP_MAXIMUM_TAG                0x0FFF
#define HEAP_PSEUDO_TAG_FLAG            0x8000
#define HEAP_TAG_SHIFT                  18
FORCEINLINE DWORD HEAP_MAKE_TAG_FLAGS(DWORD TagBase, DWORD Tag)
{
	return ((DWORD) ((TagBase) + ((Tag) << HEAP_TAG_SHIFT)));
}
#if (NTDDI_VERSION > NTDDI_WINXP)
NTSYSAPI WORD NTAPI RtlCaptureStackBackTrace(DWORD FramesToSkip, DWORD FramesToCapture, PVOID *BackTrace, PDWORD BackTraceHash);
#endif
#if (NTDDI_VERSION > NTDDI_WIN2K)
NTSYSAPI VOID NTAPI RtlCaptureContext(PCONTEXT ContextRecord);
#endif
#define IS_TEXT_UNICODE_ASCII16               0x0001
#define IS_TEXT_UNICODE_REVERSE_ASCII16       0x0010
#define IS_TEXT_UNICODE_STATISTICS            0x0002
#define IS_TEXT_UNICODE_REVERSE_STATISTICS    0x0020
#define IS_TEXT_UNICODE_CONTROLS              0x0004
#define IS_TEXT_UNICODE_REVERSE_CONTROLS      0x0040
#define IS_TEXT_UNICODE_SIGNATURE             0x0008
#define IS_TEXT_UNICODE_REVERSE_SIGNATURE     0x0080
#define IS_TEXT_UNICODE_ILLEGAL_CHARS         0x0100
#define IS_TEXT_UNICODE_ODD_LENGTH            0x0200
#define IS_TEXT_UNICODE_DBCS_LEADBYTE         0x0400
#define IS_TEXT_UNICODE_NULL_BYTES            0x1000
#define IS_TEXT_UNICODE_UNICODE_MASK          0x000F
#define IS_TEXT_UNICODE_REVERSE_MASK          0x00F0
#define IS_TEXT_UNICODE_NOT_UNICODE_MASK      0x0F00
#define IS_TEXT_UNICODE_NOT_ASCII_MASK        0xF000
#define COMPRESSION_FORMAT_NONE          (0x0000)
#define COMPRESSION_FORMAT_DEFAULT       (0x0001)
#define COMPRESSION_FORMAT_LZNT1         (0x0002)
#define COMPRESSION_ENGINE_STANDARD      (0x0000)
#define COMPRESSION_ENGINE_MAXIMUM       (0x0100)
#define COMPRESSION_ENGINE_HIBER         (0x0200)
#if _DBG_MEMCPY_INLINE_ && !defined(_MEMCPY_INLINE_) && !defined(_CRTBLD)
#define _MEMCPY_INLINE_
FORCEINLINE PVOID __cdecl memcpy_inline(void *dst, const void *src, size_t size)
{
	if (((char *)dst > (char *)src) && ((char *)dst < ((char *)src + size)))
	{
		__debugbreak();
	}
	return memcpy(dst, src, size);
}
#define memcpy memcpy_inline
#endif
#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTSYSAPI SIZE_T NTAPI RtlCompareMemory(const VOID *Source1, const VOID *Source2, SIZE_T Length);
#endif
#define RtlEqualMemory(Destination,Source,Length) (!memcmp((Destination),(Source),(Length)))
#define RtlMoveMemory(Destination,Source,Length) memmove((Destination),(Source),(Length))
#define RtlCopyMemory(Destination,Source,Length) memcpy((Destination),(Source),(Length))
#define RtlFillMemory(Destination,Length,Fill) memset((Destination),(Fill),(Length))
#define RtlZeroMemory(Destination,Length) memset((Destination),0,(Length))
FORCEINLINE PVOID RtlSecureZeroMemory(PVOID ptr, SIZE_T cnt)
{
	volatile char *vptr = (volatile char *)ptr;
#if defined(_M_AMD64)
	__stosb((PBYTE) ((DWORD64)vptr), 0, cnt);
#else
	while (cnt)
	{
		*vptr = 0;
		vptr++;
		cnt--;
	}
#endif
	return ptr;
}
#define SEF_DACL_AUTO_INHERIT             0x01
#define SEF_SACL_AUTO_INHERIT             0x02
#define SEF_DEFAULT_DESCRIPTOR_FOR_OBJECT 0x04
#define SEF_AVOID_PRIVILEGE_CHECK         0x08
#define SEF_AVOID_OWNER_CHECK             0x10
#define SEF_DEFAULT_OWNER_FROM_PARENT     0x20
#define SEF_DEFAULT_GROUP_FROM_PARENT     0x40
#define SEF_MACL_NO_WRITE_UP              0x100
#define SEF_MACL_NO_READ_UP               0x200
#define SEF_MACL_NO_EXECUTE_UP            0x400
#define SEF_AVOID_OWNER_RESTRICTION       0x1000
#define SEF_MACL_VALID_FLAGS              (SEF_MACL_NO_WRITE_UP | SEF_MACL_NO_READ_UP | SEF_MACL_NO_EXECUTE_UP)
typedef struct _MESSAGE_RESOURCE_ENTRY
{
	WORD Length;
	WORD Flags;
	BYTE Text[1];
} MESSAGE_RESOURCE_ENTRY, *PMESSAGE_RESOURCE_ENTRY;
#define MESSAGE_RESOURCE_UNICODE 0x0001
typedef struct _MESSAGE_RESOURCE_BLOCK
{
	DWORD LowId;
	DWORD HighId;
	DWORD OffsetToEntries;
} MESSAGE_RESOURCE_BLOCK, *PMESSAGE_RESOURCE_BLOCK;
typedef struct _MESSAGE_RESOURCE_DATA
{
	DWORD NumberOfBlocks;
	MESSAGE_RESOURCE_BLOCK Blocks[1];
} MESSAGE_RESOURCE_DATA, *PMESSAGE_RESOURCE_DATA;
NTSYSAPI PVOID NTAPI RtlPcToFileHeader(PVOID PcValue, PVOID *BaseOfImage);
typedef struct _OSVERSIONINFOA
{
	DWORD dwOSVersionInfoSize;
	DWORD dwMajorVersion;
	DWORD dwMinorVersion;
	DWORD dwBuildNumber;
	DWORD dwPlatformId;
	CHAR szCSDVersion[128];
} OSVERSIONINFOA, *POSVERSIONINFOA, *LPOSVERSIONINFOA;
typedef struct _OSVERSIONINFOW
{
	DWORD dwOSVersionInfoSize;
	DWORD dwMajorVersion;
	DWORD dwMinorVersion;
	DWORD dwBuildNumber;
	DWORD dwPlatformId;
	WCHAR szCSDVersion[128];
} OSVERSIONINFOW, *POSVERSIONINFOW, *LPOSVERSIONINFOW, RTL_OSVERSIONINFOW, *PRTL_OSVERSIONINFOW;
#ifdef UNICODE
typedef OSVERSIONINFOW OSVERSIONINFO;
typedef POSVERSIONINFOW POSVERSIONINFO;
typedef LPOSVERSIONINFOW LPOSVERSIONINFO;
#else
typedef OSVERSIONINFOA OSVERSIONINFO;
typedef POSVERSIONINFOA POSVERSIONINFO;
typedef LPOSVERSIONINFOA LPOSVERSIONINFO;
#endif
typedef struct _OSVERSIONINFOEXA
{
	DWORD dwOSVersionInfoSize;
	DWORD dwMajorVersion;
	DWORD dwMinorVersion;
	DWORD dwBuildNumber;
	DWORD dwPlatformId;
	CHAR szCSDVersion[128];
	WORD wServicePackMajor;
	WORD wServicePackMinor;
	WORD wSuiteMask;
	BYTE wProductType;
	BYTE wReserved;
} OSVERSIONINFOEXA, *POSVERSIONINFOEXA, *LPOSVERSIONINFOEXA;
typedef struct _OSVERSIONINFOEXW
{
	DWORD dwOSVersionInfoSize;
	DWORD dwMajorVersion;
	DWORD dwMinorVersion;
	DWORD dwBuildNumber;
	DWORD dwPlatformId;
	WCHAR szCSDVersion[128];
	WORD wServicePackMajor;
	WORD wServicePackMinor;
	WORD wSuiteMask;
	BYTE wProductType;
	BYTE wReserved;
} OSVERSIONINFOEXW, *POSVERSIONINFOEXW, *LPOSVERSIONINFOEXW, RTL_OSVERSIONINFOEXW, *PRTL_OSVERSIONINFOEXW;
#ifdef UNICODE
typedef OSVERSIONINFOEXW OSVERSIONINFOEX;
typedef POSVERSIONINFOEXW POSVERSIONINFOEX;
typedef LPOSVERSIONINFOEXW LPOSVERSIONINFOEX;
#else
typedef OSVERSIONINFOEXA OSVERSIONINFOEX;
typedef POSVERSIONINFOEXA POSVERSIONINFOEX;
typedef LPOSVERSIONINFOEXA LPOSVERSIONINFOEX;
#endif
#define VER_EQUAL                       1
#define VER_GREATER                     2
#define VER_GREATER_EQUAL               3
#define VER_LESS                        4
#define VER_LESS_EQUAL                  5
#define VER_AND                         6
#define VER_OR                          7
#define VER_CONDITION_MASK              7
#define VER_NUM_BITS_PER_CONDITION_MASK 3
#define VER_MINORVERSION                0x0000001
#define VER_MAJORVERSION                0x0000002
#define VER_BUILDNUMBER                 0x0000004
#define VER_PLATFORMID                  0x0000008
#define VER_SERVICEPACKMINOR            0x0000010
#define VER_SERVICEPACKMAJOR            0x0000020
#define VER_SUITENAME                   0x0000040
#define VER_PRODUCT_TYPE                0x0000080
#define VER_NT_WORKSTATION              0x0000001
#define VER_NT_DOMAIN_CONTROLLER        0x0000002
#define VER_NT_SERVER                   0x0000003
#define VER_PLATFORM_WIN32s             0
#define VER_PLATFORM_WIN32_WINDOWS      1
#define VER_PLATFORM_WIN32_NT           2
#define VER_SET_CONDITION(_m_,_t_,_c_)  ((_m_)=VerSetConditionMask((_m_),(_t_),(_c_)))
#if (NTDDI_VERSION >= NTDDI_WIN2K)
NTSYSAPI ULONGLONG NTAPI VerSetConditionMask(ULONGLONG ConditionMask, DWORD TypeMask, BYTE Condition);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
NTSYSAPI BOOLEAN NTAPI RtlGetProductInfo(DWORD OSMajorVersion, DWORD OSMinorVersion, DWORD SpMajorVersion, DWORD SpMinorVersion, PDWORD ReturnedProductType);
#endif
#define RTL_UMS_VERSION  (0x0100)
typedef enum _RTL_UMS_THREAD_INFO_CLASS
{
	UmsThreadInvalidInfoClass = 0,
	UmsThreadUserContext,
	UmsThreadPriority,
	UmsThreadAffinity,
	UmsThreadTeb,
	UmsThreadIsSuspended,
	UmsThreadIsTerminated,
	UmsThreadMaxInfoClass
} RTL_UMS_THREAD_INFO_CLASS, *PRTL_UMS_THREAD_INFO_CLASS;
typedef enum _RTL_UMS_SCHEDULER_REASON
{
	UmsSchedulerStartup = 0,
	UmsSchedulerThreadBlocked,
	UmsSchedulerThreadYield,
} RTL_UMS_SCHEDULER_REASON, *PRTL_UMS_SCHEDULER_REASON;
typedef VOID NTAPI RTL_UMS_SCHEDULER_ENTRY_POINT(RTL_UMS_SCHEDULER_REASON Reason, ULONG_PTR ActivationPayload, PVOID SchedulerParam);
typedef RTL_UMS_SCHEDULER_ENTRY_POINT *PRTL_UMS_SCHEDULER_ENTRY_POINT;
#if (NTDDI_VERSION >= NTDDI_WIN7)
NTSYSAPI DWORD NTAPI RtlCopyExtendedContext(PCONTEXT_EX Destination, DWORD ContextFlags, PCONTEXT_EX Source);
NTSYSAPI DWORD NTAPI RtlInitializeExtendedContext(PVOID Context, DWORD ContextFlags, PCONTEXT_EX *ContextEx);
NTSYSAPI DWORD64 NTAPI RtlGetEnabledExtendedFeatures(DWORD64 FeatureMask);
NTSYSAPI DWORD NTAPI RtlGetExtendedContextLength(DWORD ContextFlags, PDWORD ContextLength);
NTSYSAPI DWORD64 NTAPI RtlGetExtendedFeaturesMask(PCONTEXT_EX ContextEx);
NTSYSAPI PVOID NTAPI RtlLocateExtendedFeature(PCONTEXT_EX ContextEx, DWORD FeatureId, PDWORD Length);
NTSYSAPI PCONTEXT NTAPI RtlLocateLegacyContext(PCONTEXT_EX ContextEx, PDWORD Length);
NTSYSAPI VOID NTAPI RtlSetExtendedFeaturesMask(PCONTEXT_EX ContextEx, DWORD64 FeatureMask);
#endif
typedef struct _RTL_CRITICAL_SECTION_DEBUG
{
	WORD Type;
	WORD CreatorBackTraceIndex;
	struct _RTL_CRITICAL_SECTION *CriticalSection;
	LIST_ENTRY ProcessLocksList;
	DWORD EntryCount;
	DWORD ContentionCount;
	DWORD Flags;
	WORD CreatorBackTraceIndexHigh;
	WORD SpareWORD;
} RTL_CRITICAL_SECTION_DEBUG, *PRTL_CRITICAL_SECTION_DEBUG, RTL_RESOURCE_DEBUG, *PRTL_RESOURCE_DEBUG;
#define RTL_CRITSECT_TYPE 0
#define RTL_RESOURCE_TYPE 1
#define RTL_CRITICAL_SECTION_FLAG_NO_DEBUG_INFO         0x01000000
#define RTL_CRITICAL_SECTION_FLAG_DYNAMIC_SPIN          0x02000000
#define RTL_CRITICAL_SECTION_FLAG_STATIC_INIT           0x04000000
#define RTL_CRITICAL_SECTION_ALL_FLAG_BITS              0xFF000000
#define RTL_CRITICAL_SECTION_FLAG_RESERVED              (RTL_CRITICAL_SECTION_ALL_FLAG_BITS & (~(RTL_CRITICAL_SECTION_FLAG_NO_DEBUG_INFO | RTL_CRITICAL_SECTION_FLAG_DYNAMIC_SPIN | RTL_CRITICAL_SECTION_FLAG_STATIC_INIT)))
#define RTL_CRITICAL_SECTION_DEBUG_FLAG_STATIC_INIT     0x00000001
#pragma pack(push, 8)
typedef struct _RTL_CRITICAL_SECTION
{
	PRTL_CRITICAL_SECTION_DEBUG DebugInfo;
	LONG LockCount;
	LONG RecursionCount;
	HANDLE OwningThread;
	HANDLE LockSemaphore;
	ULONG_PTR SpinCount;
} RTL_CRITICAL_SECTION, *PRTL_CRITICAL_SECTION;
#pragma pack(pop)
typedef struct _RTL_SRWLOCK
{
	PVOID Ptr;
} RTL_SRWLOCK, *PRTL_SRWLOCK;
#define RTL_SRWLOCK_INIT {0}
typedef struct _RTL_CONDITION_VARIABLE
{
	PVOID Ptr;
} RTL_CONDITION_VARIABLE, *PRTL_CONDITION_VARIABLE;
#define RTL_CONDITION_VARIABLE_INIT {0}
#define RTL_CONDITION_VARIABLE_LOCKMODE_SHARED  0x1
typedef VOID(NTAPI *PAPCFUNC) (ULONG_PTR Parameter);
typedef LONG(NTAPI *PVECTORED_EXCEPTION_HANDLER) (struct _EXCEPTION_POINTERS *ExceptionInfo);
typedef enum _HEAP_INFORMATION_CLASS
{
	HeapCompatibilityInformation,
	HeapEnableTerminationOnCorruption
} HEAP_INFORMATION_CLASS;
#define WT_EXECUTEDEFAULT       0x00000000
#define WT_EXECUTEINIOTHREAD    0x00000001
#define WT_EXECUTEINUITHREAD    0x00000002
#define WT_EXECUTEINWAITTHREAD  0x00000004
#define WT_EXECUTEONLYONCE      0x00000008
#define WT_EXECUTEINTIMERTHREAD 0x00000020
#define WT_EXECUTELONGFUNCTION  0x00000010
#define WT_EXECUTEINPERSISTENTIOTHREAD  0x00000040
#define WT_EXECUTEINPERSISTENTTHREAD 0x00000080
#define WT_TRANSFER_IMPERSONATION 0x00000100
#define WT_SET_MAX_THREADPOOL_THREADS(Flags, Limit)  ((Flags) |= (Limit)<<16)
typedef VOID(NTAPI *WAITORTIMERCALLBACKFUNC) (PVOID, BOOLEAN);
typedef VOID(NTAPI *WORKERCALLBACKFUNC) (PVOID);
typedef VOID(NTAPI *APC_CALLBACK_FUNCTION) (DWORD, PVOID, PVOID);
typedef VOID(NTAPI *PFLS_CALLBACK_FUNCTION) (PVOID lpFlsData);
typedef BOOLEAN(NTAPI *PSECURE_MEMORY_CACHE_CALLBACK) (PVOID Addr, SIZE_T Range);
#define WT_EXECUTEINLONGTHREAD  0x00000010
#define WT_EXECUTEDELETEWAIT    0x00000008
typedef enum _ACTIVATION_CONTEXT_INFO_CLASS
{
	ActivationContextBasicInformation = 1,
	ActivationContextDetailedInformation = 2,
	AssemblyDetailedInformationInActivationContext = 3,
	FileInformationInAssemblyOfAssemblyInActivationContext = 4,
	RunlevelInformationInActivationContext = 5,
	CompatibilityInformationInActivationContext = 6,
	ActivationContextManifestResourceName = 7,
	MaxActivationContextInfoClass,
	AssemblyDetailedInformationInActivationContxt = 3,
	FileInformationInAssemblyOfAssemblyInActivationContxt = 4
} ACTIVATION_CONTEXT_INFO_CLASS;
#define ACTIVATIONCONTEXTINFOCLASS ACTIVATION_CONTEXT_INFO_CLASS
typedef struct _ACTIVATION_CONTEXT_QUERY_INDEX
{
	DWORD ulAssemblyIndex;
	DWORD ulFileIndexInAssembly;
} ACTIVATION_CONTEXT_QUERY_INDEX, *PACTIVATION_CONTEXT_QUERY_INDEX;
typedef const struct _ACTIVATION_CONTEXT_QUERY_INDEX *PCACTIVATION_CONTEXT_QUERY_INDEX;
#define ACTIVATION_CONTEXT_PATH_TYPE_NONE (1)
#define ACTIVATION_CONTEXT_PATH_TYPE_WIN32_FILE (2)
#define ACTIVATION_CONTEXT_PATH_TYPE_URL (3)
#define ACTIVATION_CONTEXT_PATH_TYPE_ASSEMBLYREF (4)
typedef struct _ASSEMBLY_FILE_DETAILED_INFORMATION
{
	DWORD ulFlags;
	DWORD ulFilenameLength;
	DWORD ulPathLength;
	PCWSTR lpFileName;
	PCWSTR lpFilePath;
} ASSEMBLY_FILE_DETAILED_INFORMATION, *PASSEMBLY_FILE_DETAILED_INFORMATION;
typedef const ASSEMBLY_FILE_DETAILED_INFORMATION *PCASSEMBLY_FILE_DETAILED_INFORMATION;
#define  _ASSEMBLY_DLL_REDIRECTION_DETAILED_INFORMATION  _ASSEMBLY_FILE_DETAILED_INFORMATION
#define   ASSEMBLY_DLL_REDIRECTION_DETAILED_INFORMATION   ASSEMBLY_FILE_DETAILED_INFORMATION
#define  PASSEMBLY_DLL_REDIRECTION_DETAILED_INFORMATION  PASSEMBLY_FILE_DETAILED_INFORMATION
#define PCASSEMBLY_DLL_REDIRECTION_DETAILED_INFORMATION PCASSEMBLY_FILE_DETAILED_INFORMATION
typedef struct _ACTIVATION_CONTEXT_ASSEMBLY_DETAILED_INFORMATION
{
	DWORD ulFlags;
	DWORD ulEncodedAssemblyIdentityLength;
	DWORD ulManifestPathType;
	DWORD ulManifestPathLength;
	LARGE_INTEGER liManifestLastWriteTime;
	DWORD ulPolicyPathType;
	DWORD ulPolicyPathLength;
	LARGE_INTEGER liPolicyLastWriteTime;
	DWORD ulMetadataSatelliteRosterIndex;
	DWORD ulManifestVersionMajor;
	DWORD ulManifestVersionMinor;
	DWORD ulPolicyVersionMajor;
	DWORD ulPolicyVersionMinor;
	DWORD ulAssemblyDirectoryNameLength;
	PCWSTR lpAssemblyEncodedAssemblyIdentity;
	PCWSTR lpAssemblyManifestPath;
	PCWSTR lpAssemblyPolicyPath;
	PCWSTR lpAssemblyDirectoryName;
	DWORD ulFileCount;
} ACTIVATION_CONTEXT_ASSEMBLY_DETAILED_INFORMATION, *PACTIVATION_CONTEXT_ASSEMBLY_DETAILED_INFORMATION;
typedef const struct _ACTIVATION_CONTEXT_ASSEMBLY_DETAILED_INFORMATION *PCACTIVATION_CONTEXT_ASSEMBLY_DETAILED_INFORMATION;
typedef enum
{
	ACTCTX_RUN_LEVEL_UNSPECIFIED = 0,
	ACTCTX_RUN_LEVEL_AS_INVOKER,
	ACTCTX_RUN_LEVEL_HIGHEST_AVAILABLE,
	ACTCTX_RUN_LEVEL_REQUIRE_ADMIN,
	ACTCTX_RUN_LEVEL_NUMBERS
} ACTCTX_REQUESTED_RUN_LEVEL;
typedef struct _ACTIVATION_CONTEXT_RUN_LEVEL_INFORMATION
{
	DWORD ulFlags;
	ACTCTX_REQUESTED_RUN_LEVEL RunLevel;
	DWORD UiAccess;
} ACTIVATION_CONTEXT_RUN_LEVEL_INFORMATION, *PACTIVATION_CONTEXT_RUN_LEVEL_INFORMATION;
typedef const struct _ACTIVATION_CONTEXT_RUN_LEVEL_INFORMATION *PCACTIVATION_CONTEXT_RUN_LEVEL_INFORMATION;
typedef enum
{
	ACTCTX_COMPATIBILITY_ELEMENT_TYPE_UNKNOWN = 0,
	ACTCTX_COMPATIBILITY_ELEMENT_TYPE_OS,
	ACTCTX_COMPATIBILITY_ELEMENT_TYPE_MITIGATION
} ACTCTX_COMPATIBILITY_ELEMENT_TYPE;
typedef struct _COMPATIBILITY_CONTEXT_ELEMENT
{
	GUID Id;
	ACTCTX_COMPATIBILITY_ELEMENT_TYPE Type;
} COMPATIBILITY_CONTEXT_ELEMENT, *PCOMPATIBILITY_CONTEXT_ELEMENT;
typedef const struct _COMPATIBILITY_CONTEXT_ELEMENT *PCCOMPATIBILITY_CONTEXT_ELEMENT;
typedef struct _ACTIVATION_CONTEXT_COMPATIBILITY_INFORMATION
{
	DWORD ElementCount;
	COMPATIBILITY_CONTEXT_ELEMENT Elements[];
} ACTIVATION_CONTEXT_COMPATIBILITY_INFORMATION, *PACTIVATION_CONTEXT_COMPATIBILITY_INFORMATION;
typedef const struct _ACTIVATION_CONTEXT_COMPATIBILITY_INFORMATION *PCACTIVATION_CONTEXT_COMPATIBILITY_INFORMATION;
#define MAX_SUPPORTED_OS_NUM    (4)
#define INVALID_OS_COUNT        (0xffff)
typedef struct _SUPPORTED_OS_INFO
{
	WORD OsCount;
	WORD MitigationExist;
	WORD OsList[MAX_SUPPORTED_OS_NUM];
} SUPPORTED_OS_INFO, *PSUPPORTED_OS_INFO;
typedef struct _ACTIVATION_CONTEXT_DETAILED_INFORMATION
{
	DWORD dwFlags;
	DWORD ulFormatVersion;
	DWORD ulAssemblyCount;
	DWORD ulRootManifestPathType;
	DWORD ulRootManifestPathChars;
	DWORD ulRootConfigurationPathType;
	DWORD ulRootConfigurationPathChars;
	DWORD ulAppDirPathType;
	DWORD ulAppDirPathChars;
	PCWSTR lpRootManifestPath;
	PCWSTR lpRootConfigurationPath;
	PCWSTR lpAppDirPath;
} ACTIVATION_CONTEXT_DETAILED_INFORMATION, *PACTIVATION_CONTEXT_DETAILED_INFORMATION;
typedef const struct _ACTIVATION_CONTEXT_DETAILED_INFORMATION *PCACTIVATION_CONTEXT_DETAILED_INFORMATION;
typedef struct _HARDWARE_COUNTER_DATA
{
	HARDWARE_COUNTER_TYPE Type;
	DWORD Reserved;
	DWORD64 Value;
} HARDWARE_COUNTER_DATA, *PHARDWARE_COUNTER_DATA;
#define PERFORMANCE_DATA_VERSION 1
typedef struct _PERFORMANCE_DATA
{
	WORD Size;
	BYTE Version;
	BYTE HwCountersCount;
	DWORD ContextSwitchCount;
	DWORD64 WaitReasonBitMap;
	DWORD64 CycleTime;
	DWORD RetryCount;
	DWORD Reserved;
	HARDWARE_COUNTER_DATA HwCounters[MAX_HW_COUNTERS];
} PERFORMANCE_DATA, *PPERFORMANCE_DATA;
#define READ_THREAD_PROFILING_FLAG_DISPATCHING        0x00000001
#define READ_THREAD_PROFILING_FLAG_HARDWARE_COUNTERS  0x00000002
#define DLL_PROCESS_ATTACH   1
#define DLL_THREAD_ATTACH    2
#define DLL_THREAD_DETACH    3
#define DLL_PROCESS_DETACH   0
#define EVENTLOG_SEQUENTIAL_READ        0x0001
#define EVENTLOG_SEEK_READ              0x0002
#define EVENTLOG_FORWARDS_READ          0x0004
#define EVENTLOG_BACKWARDS_READ         0x0008
#define EVENTLOG_SUCCESS                0x0000
#define EVENTLOG_ERROR_TYPE             0x0001
#define EVENTLOG_WARNING_TYPE           0x0002
#define EVENTLOG_INFORMATION_TYPE       0x0004
#define EVENTLOG_AUDIT_SUCCESS          0x0008
#define EVENTLOG_AUDIT_FAILURE          0x0010
#define EVENTLOG_START_PAIRED_EVENT    0x0001
#define EVENTLOG_END_PAIRED_EVENT      0x0002
#define EVENTLOG_END_ALL_PAIRED_EVENTS 0x0004
#define EVENTLOG_PAIRED_EVENT_ACTIVE   0x0008
#define EVENTLOG_PAIRED_EVENT_INACTIVE 0x0010
typedef struct _EVENTLOGRECORD
{
	DWORD Length;
	DWORD Reserved;
	DWORD RecordNumber;
	DWORD TimeGenerated;
	DWORD TimeWritten;
	DWORD EventID;
	WORD EventType;
	WORD NumStrings;
	WORD EventCategory;
	WORD ReservedFlags;
	DWORD ClosingRecordNumber;
	DWORD StringOffset;
	DWORD UserSidLength;
	DWORD UserSidOffset;
	DWORD DataLength;
	DWORD DataOffset;
} EVENTLOGRECORD, *PEVENTLOGRECORD;
#define MAXLOGICALLOGNAMESIZE   256
struct _EVENTSFORLOGFILE;
typedef struct _EVENTSFORLOGFILE EVENTSFORLOGFILE, *PEVENTSFORLOGFILE;
struct _PACKEDEVENTINFO;
typedef struct _PACKEDEVENTINFO PACKEDEVENTINFO, *PPACKEDEVENTINFO;
#if defined(_MSC_EXTENSIONS)
struct _EVENTSFORLOGFILE
{
	DWORD ulSize;
	WCHAR szLogicalLogFile[MAXLOGICALLOGNAMESIZE];
	DWORD ulNumRecords;
	EVENTLOGRECORD pEventLogRecords[];
};
struct _PACKEDEVENTINFO
{
	DWORD ulSize;
	DWORD ulNumEventsForLogFile;
	DWORD ulOffsets[];
};
#endif
#define KEY_QUERY_VALUE         (0x0001)
#define KEY_SET_VALUE           (0x0002)
#define KEY_CREATE_SUB_KEY      (0x0004)
#define KEY_ENUMERATE_SUB_KEYS  (0x0008)
#define KEY_NOTIFY              (0x0010)
#define KEY_CREATE_LINK         (0x0020)
#define KEY_WOW64_32KEY         (0x0200)
#define KEY_WOW64_64KEY         (0x0100)
#define KEY_WOW64_RES           (0x0300)
#define KEY_READ                ((STANDARD_RIGHTS_READ | KEY_QUERY_VALUE | KEY_ENUMERATE_SUB_KEYS | KEY_NOTIFY) & (~SYNCHRONIZE))
#define KEY_WRITE               ((STANDARD_RIGHTS_WRITE | KEY_SET_VALUE | KEY_CREATE_SUB_KEY) & (~SYNCHRONIZE))
#define KEY_EXECUTE             ((KEY_READ) & (~SYNCHRONIZE))
#define KEY_ALL_ACCESS          ((STANDARD_RIGHTS_ALL | KEY_QUERY_VALUE | KEY_SET_VALUE | KEY_CREATE_SUB_KEY | KEY_ENUMERATE_SUB_KEYS | KEY_NOTIFY | KEY_CREATE_LINK) & (~SYNCHRONIZE))
#define REG_OPTION_RESERVED         (0x00000000L)
#define REG_OPTION_NON_VOLATILE     (0x00000000L)
#define REG_OPTION_VOLATILE         (0x00000001L)
#define REG_OPTION_CREATE_LINK      (0x00000002L)
#define REG_OPTION_BACKUP_RESTORE   (0x00000004L)
#define REG_OPTION_OPEN_LINK        (0x00000008L)
#define REG_LEGAL_OPTION (REG_OPTION_RESERVED | REG_OPTION_NON_VOLATILE | REG_OPTION_VOLATILE | REG_OPTION_CREATE_LINK | REG_OPTION_BACKUP_RESTORE | REG_OPTION_OPEN_LINK)
#define REG_OPEN_LEGAL_OPTION (REG_OPTION_RESERVED | REG_OPTION_BACKUP_RESTORE | REG_OPTION_OPEN_LINK)
#define REG_CREATED_NEW_KEY         (0x00000001L)
#define REG_OPENED_EXISTING_KEY     (0x00000002L)
#define REG_STANDARD_FORMAT     1
#define REG_LATEST_FORMAT       2
#define REG_NO_COMPRESSION      4
#define REG_WHOLE_HIVE_VOLATILE         (0x00000001L)
#define REG_REFRESH_HIVE                (0x00000002L)
#define REG_NO_LAZY_FLUSH               (0x00000004L)
#define REG_FORCE_RESTORE               (0x00000008L)
#define REG_APP_HIVE                    (0x00000010L)
#define REG_PROCESS_PRIVATE             (0x00000020L)
#define REG_START_JOURNAL               (0x00000040L)
#define REG_HIVE_EXACT_FILE_GROWTH      (0x00000080L)
#define REG_HIVE_NO_RM                  (0x00000100L)
#define REG_HIVE_SINGLE_LOG             (0x00000200L)
#define REG_BOOT_HIVE                   (0x00000400L)
#define REG_FORCE_UNLOAD            1
#define REG_NOTIFY_CHANGE_NAME          (0x00000001L)
#define REG_NOTIFY_CHANGE_ATTRIBUTES    (0x00000002L)
#define REG_NOTIFY_CHANGE_LAST_SET      (0x00000004L)
#define REG_NOTIFY_CHANGE_SECURITY      (0x00000008L)
#define REG_LEGAL_CHANGE_FILTER (REG_NOTIFY_CHANGE_NAME | REG_NOTIFY_CHANGE_ATTRIBUTES | REG_NOTIFY_CHANGE_LAST_SET | REG_NOTIFY_CHANGE_SECURITY)
#define REG_NONE                    ( 0 )
#define REG_SZ                      ( 1 )
#define REG_EXPAND_SZ               ( 2 )
#define REG_BINARY                  ( 3 )
#define REG_DWORD                   ( 4 )
#define REG_DWORD_LITTLE_ENDIAN     ( 4 )
#define REG_DWORD_BIG_ENDIAN        ( 5 )
#define REG_LINK                    ( 6 )
#define REG_MULTI_SZ                ( 7 )
#define REG_RESOURCE_LIST           ( 8 )
#define REG_FULL_RESOURCE_DESCRIPTOR ( 9 )
#define REG_RESOURCE_REQUIREMENTS_LIST ( 10 )
#define REG_QWORD                   ( 11 )
#define REG_QWORD_LITTLE_ENDIAN     ( 11 )
#define SERVICE_KERNEL_DRIVER          0x00000001
#define SERVICE_FILE_SYSTEM_DRIVER     0x00000002
#define SERVICE_ADAPTER                0x00000004
#define SERVICE_RECOGNIZER_DRIVER      0x00000008
#define SERVICE_DRIVER                 (SERVICE_KERNEL_DRIVER | SERVICE_FILE_SYSTEM_DRIVER | SERVICE_RECOGNIZER_DRIVER)
#define SERVICE_WIN32_OWN_PROCESS      0x00000010
#define SERVICE_WIN32_SHARE_PROCESS    0x00000020
#define SERVICE_WIN32                  (SERVICE_WIN32_OWN_PROCESS | SERVICE_WIN32_SHARE_PROCESS)
#define SERVICE_INTERACTIVE_PROCESS    0x00000100
#define SERVICE_TYPE_ALL               (SERVICE_WIN32  | SERVICE_ADAPTER | SERVICE_DRIVER  | SERVICE_INTERACTIVE_PROCESS)
#define SERVICE_BOOT_START             0x00000000
#define SERVICE_SYSTEM_START           0x00000001
#define SERVICE_AUTO_START             0x00000002
#define SERVICE_DEMAND_START           0x00000003
#define SERVICE_DISABLED               0x00000004
#define SERVICE_ERROR_IGNORE           0x00000000
#define SERVICE_ERROR_NORMAL           0x00000001
#define SERVICE_ERROR_SEVERE           0x00000002
#define SERVICE_ERROR_CRITICAL         0x00000003
typedef enum _CM_SERVICE_NODE_TYPE
{
	DriverType = SERVICE_KERNEL_DRIVER,
	FileSystemType = SERVICE_FILE_SYSTEM_DRIVER,
	Win32ServiceOwnProcess = SERVICE_WIN32_OWN_PROCESS,
	Win32ServiceShareProcess = SERVICE_WIN32_SHARE_PROCESS,
	AdapterType = SERVICE_ADAPTER,
	RecognizerType = SERVICE_RECOGNIZER_DRIVER
} SERVICE_NODE_TYPE;
typedef enum _CM_SERVICE_LOAD_TYPE
{
	BootLoad = SERVICE_BOOT_START,
	SystemLoad = SERVICE_SYSTEM_START,
	AutoLoad = SERVICE_AUTO_START,
	DemandLoad = SERVICE_DEMAND_START,
	DisableLoad = SERVICE_DISABLED
} SERVICE_LOAD_TYPE;
typedef enum _CM_ERROR_CONTROL_TYPE
{
	IgnoreError = SERVICE_ERROR_IGNORE,
	NormalError = SERVICE_ERROR_NORMAL,
	SevereError = SERVICE_ERROR_SEVERE,
	CriticalError = SERVICE_ERROR_CRITICAL
} SERVICE_ERROR_TYPE;
#define CM_SERVICE_NETWORK_BOOT_LOAD      0x00000001
#define CM_SERVICE_VIRTUAL_DISK_BOOT_LOAD 0x00000002
#define CM_SERVICE_USB_DISK_BOOT_LOAD     0x00000004
#define CM_SERVICE_VALID_PROMOTION_MASK (CM_SERVICE_NETWORK_BOOT_LOAD | CM_SERVICE_VIRTUAL_DISK_BOOT_LOAD | CM_SERVICE_USB_DISK_BOOT_LOAD)
#define TAPE_ERASE_SHORT            0L
#define TAPE_ERASE_LONG             1L
typedef struct _TAPE_ERASE
{
	DWORD Type;
	BOOLEAN Immediate;
} TAPE_ERASE, *PTAPE_ERASE;
#define TAPE_LOAD                   0L
#define TAPE_UNLOAD                 1L
#define TAPE_TENSION                2L
#define TAPE_LOCK                   3L
#define TAPE_UNLOCK                 4L
#define TAPE_FORMAT                 5L
typedef struct _TAPE_PREPARE
{
	DWORD Operation;
	BOOLEAN Immediate;
} TAPE_PREPARE, *PTAPE_PREPARE;
#define TAPE_SETMARKS               0L
#define TAPE_FILEMARKS              1L
#define TAPE_SHORT_FILEMARKS        2L
#define TAPE_LONG_FILEMARKS         3L
typedef struct _TAPE_WRITE_MARKS
{
	DWORD Type;
	DWORD Count;
	BOOLEAN Immediate;
} TAPE_WRITE_MARKS, *PTAPE_WRITE_MARKS;
#define TAPE_ABSOLUTE_POSITION       0L
#define TAPE_LOGICAL_POSITION        1L
#define TAPE_PSEUDO_LOGICAL_POSITION 2L
typedef struct _TAPE_GET_POSITION
{
	DWORD Type;
	DWORD Partition;
	LARGE_INTEGER Offset;
} TAPE_GET_POSITION, *PTAPE_GET_POSITION;
#define TAPE_REWIND                 0L
#define TAPE_ABSOLUTE_BLOCK         1L
#define TAPE_LOGICAL_BLOCK          2L
#define TAPE_PSEUDO_LOGICAL_BLOCK   3L
#define TAPE_SPACE_END_OF_DATA      4L
#define TAPE_SPACE_RELATIVE_BLOCKS  5L
#define TAPE_SPACE_FILEMARKS        6L
#define TAPE_SPACE_SEQUENTIAL_FMKS  7L
#define TAPE_SPACE_SETMARKS         8L
#define TAPE_SPACE_SEQUENTIAL_SMKS  9L
typedef struct _TAPE_SET_POSITION
{
	DWORD Method;
	DWORD Partition;
	LARGE_INTEGER Offset;
	BOOLEAN Immediate;
} TAPE_SET_POSITION, *PTAPE_SET_POSITION;
#define TAPE_DRIVE_FIXED            0x00000001
#define TAPE_DRIVE_SELECT           0x00000002
#define TAPE_DRIVE_INITIATOR        0x00000004
#define TAPE_DRIVE_ERASE_SHORT      0x00000010
#define TAPE_DRIVE_ERASE_LONG       0x00000020
#define TAPE_DRIVE_ERASE_BOP_ONLY   0x00000040
#define TAPE_DRIVE_ERASE_IMMEDIATE  0x00000080
#define TAPE_DRIVE_TAPE_CAPACITY    0x00000100
#define TAPE_DRIVE_TAPE_REMAINING   0x00000200
#define TAPE_DRIVE_FIXED_BLOCK      0x00000400
#define TAPE_DRIVE_VARIABLE_BLOCK   0x00000800
#define TAPE_DRIVE_WRITE_PROTECT    0x00001000
#define TAPE_DRIVE_EOT_WZ_SIZE      0x00002000
#define TAPE_DRIVE_ECC              0x00010000
#define TAPE_DRIVE_COMPRESSION      0x00020000
#define TAPE_DRIVE_PADDING          0x00040000
#define TAPE_DRIVE_REPORT_SMKS      0x00080000
#define TAPE_DRIVE_GET_ABSOLUTE_BLK 0x00100000
#define TAPE_DRIVE_GET_LOGICAL_BLK  0x00200000
#define TAPE_DRIVE_SET_EOT_WZ_SIZE  0x00400000
#define TAPE_DRIVE_EJECT_MEDIA      0x01000000
#define TAPE_DRIVE_CLEAN_REQUESTS   0x02000000
#define TAPE_DRIVE_SET_CMP_BOP_ONLY 0x04000000
#define TAPE_DRIVE_RESERVED_BIT     0x80000000
#define TAPE_DRIVE_LOAD_UNLOAD      0x80000001
#define TAPE_DRIVE_TENSION          0x80000002
#define TAPE_DRIVE_LOCK_UNLOCK      0x80000004
#define TAPE_DRIVE_REWIND_IMMEDIATE 0x80000008
#define TAPE_DRIVE_SET_BLOCK_SIZE   0x80000010
#define TAPE_DRIVE_LOAD_UNLD_IMMED  0x80000020
#define TAPE_DRIVE_TENSION_IMMED    0x80000040
#define TAPE_DRIVE_LOCK_UNLK_IMMED  0x80000080
#define TAPE_DRIVE_SET_ECC          0x80000100
#define TAPE_DRIVE_SET_COMPRESSION  0x80000200
#define TAPE_DRIVE_SET_PADDING      0x80000400
#define TAPE_DRIVE_SET_REPORT_SMKS  0x80000800
#define TAPE_DRIVE_ABSOLUTE_BLK     0x80001000
#define TAPE_DRIVE_ABS_BLK_IMMED    0x80002000
#define TAPE_DRIVE_LOGICAL_BLK      0x80004000
#define TAPE_DRIVE_LOG_BLK_IMMED    0x80008000
#define TAPE_DRIVE_END_OF_DATA      0x80010000
#define TAPE_DRIVE_RELATIVE_BLKS    0x80020000
#define TAPE_DRIVE_FILEMARKS        0x80040000
#define TAPE_DRIVE_SEQUENTIAL_FMKS  0x80080000
#define TAPE_DRIVE_SETMARKS         0x80100000
#define TAPE_DRIVE_SEQUENTIAL_SMKS  0x80200000
#define TAPE_DRIVE_REVERSE_POSITION 0x80400000
#define TAPE_DRIVE_SPACE_IMMEDIATE  0x80800000
#define TAPE_DRIVE_WRITE_SETMARKS   0x81000000
#define TAPE_DRIVE_WRITE_FILEMARKS  0x82000000
#define TAPE_DRIVE_WRITE_SHORT_FMKS 0x84000000
#define TAPE_DRIVE_WRITE_LONG_FMKS  0x88000000
#define TAPE_DRIVE_WRITE_MARK_IMMED 0x90000000
#define TAPE_DRIVE_FORMAT           0xA0000000
#define TAPE_DRIVE_FORMAT_IMMEDIATE 0xC0000000
#define TAPE_DRIVE_HIGH_FEATURES    0x80000000
typedef struct _TAPE_GET_DRIVE_PARAMETERS
{
	BOOLEAN ECC;
	BOOLEAN Compression;
	BOOLEAN DataPadding;
	BOOLEAN ReportSetmarks;
	DWORD DefaultBlockSize;
	DWORD MaximumBlockSize;
	DWORD MinimumBlockSize;
	DWORD MaximumPartitionCount;
	DWORD FeaturesLow;
	DWORD FeaturesHigh;
	DWORD EOTWarningZoneSize;
} TAPE_GET_DRIVE_PARAMETERS, *PTAPE_GET_DRIVE_PARAMETERS;
typedef struct _TAPE_SET_DRIVE_PARAMETERS
{
	BOOLEAN ECC;
	BOOLEAN Compression;
	BOOLEAN DataPadding;
	BOOLEAN ReportSetmarks;
	DWORD EOTWarningZoneSize;
} TAPE_SET_DRIVE_PARAMETERS, *PTAPE_SET_DRIVE_PARAMETERS;
typedef struct _TAPE_GET_MEDIA_PARAMETERS
{
	LARGE_INTEGER Capacity;
	LARGE_INTEGER Remaining;
	DWORD BlockSize;
	DWORD PartitionCount;
	BOOLEAN WriteProtected;
} TAPE_GET_MEDIA_PARAMETERS, *PTAPE_GET_MEDIA_PARAMETERS;
typedef struct _TAPE_SET_MEDIA_PARAMETERS
{
	DWORD BlockSize;
} TAPE_SET_MEDIA_PARAMETERS, *PTAPE_SET_MEDIA_PARAMETERS;
#define TAPE_FIXED_PARTITIONS       0L
#define TAPE_SELECT_PARTITIONS      1L
#define TAPE_INITIATOR_PARTITIONS   2L
typedef struct _TAPE_CREATE_PARTITION
{
	DWORD Method;
	DWORD Count;
	DWORD Size;
} TAPE_CREATE_PARTITION, *PTAPE_CREATE_PARTITION;
#define TAPE_QUERY_DRIVE_PARAMETERS       0L
#define TAPE_QUERY_MEDIA_CAPACITY         1L
#define TAPE_CHECK_FOR_DRIVE_PROBLEM      2L
#define TAPE_QUERY_IO_ERROR_DATA          3L
#define TAPE_QUERY_DEVICE_ERROR_DATA      4L
typedef struct _TAPE_WMI_OPERATIONS
{
	DWORD Method;
	DWORD DataBufferSize;
	PVOID DataBuffer;
} TAPE_WMI_OPERATIONS, *PTAPE_WMI_OPERATIONS;
typedef enum _TAPE_DRIVE_PROBLEM_TYPE
{
	TapeDriveProblemNone, TapeDriveReadWriteWarning,
	TapeDriveReadWriteError, TapeDriveReadWarning,
	TapeDriveWriteWarning, TapeDriveReadError,
	TapeDriveWriteError, TapeDriveHardwareError,
	TapeDriveUnsupportedMedia, TapeDriveScsiConnectionError,
	TapeDriveTimetoClean, TapeDriveCleanDriveNow,
	TapeDriveMediaLifeExpired, TapeDriveSnappedTape
} TAPE_DRIVE_PROBLEM_TYPE;
#ifndef _NTTMAPI_
#define _NTTMAPI_
#include <ktmtypes.h>
#define TRANSACTIONMANAGER_QUERY_INFORMATION     ( 0x0001 )
#define TRANSACTIONMANAGER_SET_INFORMATION       ( 0x0002 )
#define TRANSACTIONMANAGER_RECOVER               ( 0x0004 )
#define TRANSACTIONMANAGER_RENAME                ( 0x0008 )
#define TRANSACTIONMANAGER_CREATE_RM             ( 0x0010 )
#define TRANSACTIONMANAGER_BIND_TRANSACTION      ( 0x0020 )
#define TRANSACTIONMANAGER_GENERIC_READ		(STANDARD_RIGHTS_READ | TRANSACTIONMANAGER_QUERY_INFORMATION)
#define TRANSACTIONMANAGER_GENERIC_WRITE	(STANDARD_RIGHTS_WRITE | TRANSACTIONMANAGER_SET_INFORMATION | TRANSACTIONMANAGER_RECOVER | TRANSACTIONMANAGER_RENAME | TRANSACTIONMANAGER_CREATE_RM)
#define TRANSACTIONMANAGER_GENERIC_EXECUTE	(STANDARD_RIGHTS_EXECUTE)
#define TRANSACTIONMANAGER_ALL_ACCESS		(STANDARD_RIGHTS_REQUIRED | TRANSACTIONMANAGER_GENERIC_READ | TRANSACTIONMANAGER_GENERIC_WRITE | TRANSACTIONMANAGER_GENERIC_EXECUTE | TRANSACTIONMANAGER_BIND_TRANSACTION)
#define TRANSACTION_QUERY_INFORMATION     ( 0x0001 )
#define TRANSACTION_SET_INFORMATION       ( 0x0002 )
#define TRANSACTION_ENLIST                ( 0x0004 )
#define TRANSACTION_COMMIT                ( 0x0008 )
#define TRANSACTION_ROLLBACK              ( 0x0010 )
#define TRANSACTION_PROPAGATE             ( 0x0020 )
#define TRANSACTION_RIGHT_RESERVED1       ( 0x0040 )
#define TRANSACTION_GENERIC_READ            (STANDARD_RIGHTS_READ | TRANSACTION_QUERY_INFORMATION | SYNCHRONIZE)
#define TRANSACTION_GENERIC_WRITE           (STANDARD_RIGHTS_WRITE | TRANSACTION_SET_INFORMATION | TRANSACTION_COMMIT | TRANSACTION_ENLIST | TRANSACTION_ROLLBACK |  TRANSACTION_PROPAGATE | SYNCHRONIZE)
#define TRANSACTION_GENERIC_EXECUTE         (STANDARD_RIGHTS_EXECUTE | TRANSACTION_COMMIT | TRANSACTION_ROLLBACK | SYNCHRONIZE)
#define TRANSACTION_ALL_ACCESS              (STANDARD_RIGHTS_REQUIRED | TRANSACTION_GENERIC_READ | TRANSACTION_GENERIC_WRITE | TRANSACTION_GENERIC_EXECUTE)
#define TRANSACTION_RESOURCE_MANAGER_RIGHTS (TRANSACTION_GENERIC_READ | STANDARD_RIGHTS_WRITE | TRANSACTION_SET_INFORMATION | TRANSACTION_ENLIST | TRANSACTION_ROLLBACK | TRANSACTION_PROPAGATE | SYNCHRONIZE)
#define RESOURCEMANAGER_QUERY_INFORMATION     ( 0x0001 )
#define RESOURCEMANAGER_SET_INFORMATION       ( 0x0002 )
#define RESOURCEMANAGER_RECOVER               ( 0x0004 )
#define RESOURCEMANAGER_ENLIST                ( 0x0008 )
#define RESOURCEMANAGER_GET_NOTIFICATION      ( 0x0010 )
#define RESOURCEMANAGER_REGISTER_PROTOCOL     ( 0x0020 )
#define RESOURCEMANAGER_COMPLETE_PROPAGATION  ( 0x0040 )
#define RESOURCEMANAGER_GENERIC_READ        (STANDARD_RIGHTS_READ | RESOURCEMANAGER_QUERY_INFORMATION | SYNCHRONIZE)
#define RESOURCEMANAGER_GENERIC_WRITE       (STANDARD_RIGHTS_WRITE | RESOURCEMANAGER_SET_INFORMATION | RESOURCEMANAGER_RECOVER | RESOURCEMANAGER_ENLIST | RESOURCEMANAGER_GET_NOTIFICATION | RESOURCEMANAGER_REGISTER_PROTOCOL | RESOURCEMANAGER_COMPLETE_PROPAGATION | SYNCHRONIZE)
#define RESOURCEMANAGER_GENERIC_EXECUTE     (STANDARD_RIGHTS_EXECUTE | RESOURCEMANAGER_RECOVER |  RESOURCEMANAGER_ENLIST | RESOURCEMANAGER_GET_NOTIFICATION | RESOURCEMANAGER_COMPLETE_PROPAGATION | SYNCHRONIZE)
#define RESOURCEMANAGER_ALL_ACCESS          (STANDARD_RIGHTS_REQUIRED | RESOURCEMANAGER_GENERIC_READ | RESOURCEMANAGER_GENERIC_WRITE | RESOURCEMANAGER_GENERIC_EXECUTE)
#define ENLISTMENT_QUERY_INFORMATION     ( 0x0001 )
#define ENLISTMENT_SET_INFORMATION       ( 0x0002 )
#define ENLISTMENT_RECOVER               ( 0x0004 )
#define ENLISTMENT_SUBORDINATE_RIGHTS    ( 0x0008 )
#define ENLISTMENT_SUPERIOR_RIGHTS       ( 0x0010 )
#define ENLISTMENT_GENERIC_READ        (STANDARD_RIGHTS_READ | ENLISTMENT_QUERY_INFORMATION)
#define ENLISTMENT_GENERIC_WRITE       (STANDARD_RIGHTS_WRITE | ENLISTMENT_SET_INFORMATION | ENLISTMENT_RECOVER | ENLISTMENT_SUBORDINATE_RIGHTS | ENLISTMENT_SUPERIOR_RIGHTS)
#define ENLISTMENT_GENERIC_EXECUTE     (STANDARD_RIGHTS_EXECUTE | ENLISTMENT_RECOVER | ENLISTMENT_SUBORDINATE_RIGHTS | ENLISTMENT_SUPERIOR_RIGHTS)
#define ENLISTMENT_ALL_ACCESS          (STANDARD_RIGHTS_REQUIRED | ENLISTMENT_GENERIC_READ | ENLISTMENT_GENERIC_WRITE | ENLISTMENT_GENERIC_EXECUTE)
typedef enum _TRANSACTION_OUTCOME
{
	TransactionOutcomeUndetermined = 1,
	TransactionOutcomeCommitted,
	TransactionOutcomeAborted,
} TRANSACTION_OUTCOME;
typedef enum _TRANSACTION_STATE
{
	TransactionStateNormal = 1,
	TransactionStateIndoubt,
	TransactionStateCommittedNotify,
} TRANSACTION_STATE;
typedef struct _TRANSACTION_BASIC_INFORMATION
{
	GUID TransactionId;
	DWORD State;
	DWORD Outcome;
} TRANSACTION_BASIC_INFORMATION, *PTRANSACTION_BASIC_INFORMATION;
typedef struct _TRANSACTIONMANAGER_BASIC_INFORMATION
{
	GUID TmIdentity;
	LARGE_INTEGER VirtualClock;
} TRANSACTIONMANAGER_BASIC_INFORMATION, *PTRANSACTIONMANAGER_BASIC_INFORMATION;
typedef struct _TRANSACTIONMANAGER_LOG_INFORMATION
{
	GUID LogIdentity;
} TRANSACTIONMANAGER_LOG_INFORMATION, *PTRANSACTIONMANAGER_LOG_INFORMATION;
typedef struct _TRANSACTIONMANAGER_LOGPATH_INFORMATION
{
	DWORD LogPathLength;
	WCHAR LogPath[1];
} TRANSACTIONMANAGER_LOGPATH_INFORMATION, *PTRANSACTIONMANAGER_LOGPATH_INFORMATION;
typedef struct _TRANSACTIONMANAGER_RECOVERY_INFORMATION
{
	ULONGLONG LastRecoveredLsn;
} TRANSACTIONMANAGER_RECOVERY_INFORMATION, *PTRANSACTIONMANAGER_RECOVERY_INFORMATION;
typedef struct _TRANSACTIONMANAGER_OLDEST_INFORMATION
{
	GUID OldestTransactionGuid;
} TRANSACTIONMANAGER_OLDEST_INFORMATION, *PTRANSACTIONMANAGER_OLDEST_INFORMATION;
typedef struct _TRANSACTION_PROPERTIES_INFORMATION
{
	DWORD IsolationLevel;
	DWORD IsolationFlags;
	LARGE_INTEGER Timeout;
	DWORD Outcome;
	DWORD DescriptionLength;
	WCHAR Description[1];
} TRANSACTION_PROPERTIES_INFORMATION, *PTRANSACTION_PROPERTIES_INFORMATION;
typedef struct _TRANSACTION_BIND_INFORMATION
{
	HANDLE TmHandle;
} TRANSACTION_BIND_INFORMATION, *PTRANSACTION_BIND_INFORMATION;
typedef struct _TRANSACTION_ENLISTMENT_PAIR
{
	GUID EnlistmentId;
	GUID ResourceManagerId;
} TRANSACTION_ENLISTMENT_PAIR, *PTRANSACTION_ENLISTMENT_PAIR;
typedef struct _TRANSACTION_ENLISTMENTS_INFORMATION
{
	DWORD NumberOfEnlistments;
	TRANSACTION_ENLISTMENT_PAIR EnlistmentPair[1];
} TRANSACTION_ENLISTMENTS_INFORMATION, *PTRANSACTION_ENLISTMENTS_INFORMATION;
typedef struct _TRANSACTION_SUPERIOR_ENLISTMENT_INFORMATION
{
	TRANSACTION_ENLISTMENT_PAIR SuperiorEnlistmentPair;
} TRANSACTION_SUPERIOR_ENLISTMENT_INFORMATION, *PTRANSACTION_SUPERIOR_ENLISTMENT_INFORMATION;
typedef struct _RESOURCEMANAGER_BASIC_INFORMATION
{
	GUID ResourceManagerId;
	DWORD DescriptionLength;
	WCHAR Description[1];
} RESOURCEMANAGER_BASIC_INFORMATION, *PRESOURCEMANAGER_BASIC_INFORMATION;
typedef struct _RESOURCEMANAGER_COMPLETION_INFORMATION
{
	HANDLE IoCompletionPortHandle;
	ULONG_PTR CompletionKey;
} RESOURCEMANAGER_COMPLETION_INFORMATION, *PRESOURCEMANAGER_COMPLETION_INFORMATION;
typedef enum _TRANSACTION_INFORMATION_CLASS
{
	TransactionBasicInformation,
	TransactionPropertiesInformation,
	TransactionEnlistmentInformation,
	TransactionSuperiorEnlistmentInformation,
	TransactionBindInformation,
	TransactionDTCPrivateInformation,
} TRANSACTION_INFORMATION_CLASS;
typedef enum _TRANSACTIONMANAGER_INFORMATION_CLASS
{
	TransactionManagerBasicInformation,
	TransactionManagerLogInformation,
	TransactionManagerLogPathInformation,
	TransactionManagerRecoveryInformation = 4,
	TransactionManagerOnlineProbeInformation = 3,
	TransactionManagerOldestTransactionInformation = 5
} TRANSACTIONMANAGER_INFORMATION_CLASS;
typedef enum _RESOURCEMANAGER_INFORMATION_CLASS
{
	ResourceManagerBasicInformation,
	ResourceManagerCompletionInformation,
} RESOURCEMANAGER_INFORMATION_CLASS;
typedef struct _ENLISTMENT_BASIC_INFORMATION
{
	GUID EnlistmentId;
	GUID TransactionId;
	GUID ResourceManagerId;
} ENLISTMENT_BASIC_INFORMATION, *PENLISTMENT_BASIC_INFORMATION;
typedef struct _ENLISTMENT_CRM_INFORMATION
{
	GUID CrmTransactionManagerId;
	GUID CrmResourceManagerId;
	GUID CrmEnlistmentId;
} ENLISTMENT_CRM_INFORMATION, *PENLISTMENT_CRM_INFORMATION;
typedef enum _ENLISTMENT_INFORMATION_CLASS
{
	EnlistmentBasicInformation,
	EnlistmentRecoveryInformation,
	EnlistmentCrmInformation
} ENLISTMENT_INFORMATION_CLASS;
typedef struct _TRANSACTION_LIST_ENTRY
{
	UOW UOW;
} TRANSACTION_LIST_ENTRY, *PTRANSACTION_LIST_ENTRY;
typedef struct _TRANSACTION_LIST_INFORMATION
{
	DWORD NumberOfTransactions;
	TRANSACTION_LIST_ENTRY TransactionInformation[1];
} TRANSACTION_LIST_INFORMATION, *PTRANSACTION_LIST_INFORMATION;
typedef enum _KTMOBJECT_TYPE
{
	KTMOBJECT_TRANSACTION,
	KTMOBJECT_TRANSACTION_MANAGER,
	KTMOBJECT_RESOURCE_MANAGER,
	KTMOBJECT_ENLISTMENT,
	KTMOBJECT_INVALID
} KTMOBJECT_TYPE, *PKTMOBJECT_TYPE;
typedef struct _KTMOBJECT_CURSOR
{
	GUID LastQuery;
	DWORD ObjectIdCount;
	GUID ObjectIds[1];
} KTMOBJECT_CURSOR, *PKTMOBJECT_CURSOR;
#endif
typedef DWORD TP_VERSION, *PTP_VERSION;
typedef struct _TP_CALLBACK_INSTANCE TP_CALLBACK_INSTANCE, *PTP_CALLBACK_INSTANCE;
typedef VOID(NTAPI *PTP_SIMPLE_CALLBACK) (PTP_CALLBACK_INSTANCE Instance, PVOID Context);
typedef struct _TP_POOL TP_POOL, *PTP_POOL;
typedef enum _TP_CALLBACK_PRIORITY
{
	TP_CALLBACK_PRIORITY_HIGH,
	TP_CALLBACK_PRIORITY_NORMAL,
	TP_CALLBACK_PRIORITY_LOW,
	TP_CALLBACK_PRIORITY_INVALID
} TP_CALLBACK_PRIORITY;
typedef struct _TP_POOL_STACK_INFORMATION
{
	SIZE_T StackReserve;
	SIZE_T StackCommit;
} TP_POOL_STACK_INFORMATION, *PTP_POOL_STACK_INFORMATION;
typedef struct _TP_CLEANUP_GROUP TP_CLEANUP_GROUP, *PTP_CLEANUP_GROUP;
typedef VOID(NTAPI *PTP_CLEANUP_GROUP_CANCEL_CALLBACK) (PVOID ObjectContext, PVOID CleanupContext);
#if (_WIN32_WINNT >= _WIN32_WINNT_WIN7)
typedef struct _TP_CALLBACK_ENVIRON_V3
{
	TP_VERSION Version;
	PTP_POOL Pool;
	PTP_CLEANUP_GROUP CleanupGroup;
	PTP_CLEANUP_GROUP_CANCEL_CALLBACK CleanupGroupCancelCallback;
	PVOID RaceDll;
	struct _ACTIVATION_CONTEXT *ActivationContext;
	PTP_SIMPLE_CALLBACK FinalizationCallback;
	union
	{
		DWORD Flags;
		struct
		{
			DWORD LongFunction:1;
			DWORD Persistent:1;
			DWORD Private:30;
		} s;
	} u;
	TP_CALLBACK_PRIORITY CallbackPriority;
	DWORD Size;
} TP_CALLBACK_ENVIRON_V3;
typedef TP_CALLBACK_ENVIRON_V3 TP_CALLBACK_ENVIRON, *PTP_CALLBACK_ENVIRON;
#else
typedef struct _TP_CALLBACK_ENVIRON_V1
{
	TP_VERSION Version;
	PTP_POOL Pool;
	PTP_CLEANUP_GROUP CleanupGroup;
	PTP_CLEANUP_GROUP_CANCEL_CALLBACK CleanupGroupCancelCallback;
	PVOID RaceDll;
	struct _ACTIVATION_CONTEXT *ActivationContext;
	PTP_SIMPLE_CALLBACK FinalizationCallback;
	union
	{
		DWORD Flags;
		struct
		{
			DWORD LongFunction:1;
			DWORD Persistent:1;
			DWORD Private:30;
		} s;
	} u;
} TP_CALLBACK_ENVIRON_V1;
typedef TP_CALLBACK_ENVIRON_V1 TP_CALLBACK_ENVIRON, *PTP_CALLBACK_ENVIRON;
#endif
FORCEINLINE VOID TpInitializeCallbackEnviron(PTP_CALLBACK_ENVIRON CallbackEnviron)
{
#if (_WIN32_WINNT >= _WIN32_WINNT_WIN7)
	CallbackEnviron->Version = 3;
#else
	CallbackEnviron->Version = 1;
#endif
	CallbackEnviron->Pool = NULL;
	CallbackEnviron->CleanupGroup = NULL;
	CallbackEnviron->CleanupGroupCancelCallback = NULL;
	CallbackEnviron->RaceDll = NULL;
	CallbackEnviron->ActivationContext = NULL;
	CallbackEnviron->FinalizationCallback = NULL;
	CallbackEnviron->u.Flags = 0;
#if (_WIN32_WINNT >= _WIN32_WINNT_WIN7)
	CallbackEnviron->CallbackPriority = TP_CALLBACK_PRIORITY_NORMAL;
	CallbackEnviron->Size = sizeof(TP_CALLBACK_ENVIRON);
#endif
}
FORCEINLINE VOID TpSetCallbackThreadpool(PTP_CALLBACK_ENVIRON CallbackEnviron, PTP_POOL Pool)
{
	CallbackEnviron->Pool = Pool;
}
FORCEINLINE VOID TpSetCallbackCleanupGroup(PTP_CALLBACK_ENVIRON CallbackEnviron, PTP_CLEANUP_GROUP CleanupGroup, PTP_CLEANUP_GROUP_CANCEL_CALLBACK CleanupGroupCancelCallback)
{
	CallbackEnviron->CleanupGroup = CleanupGroup;
	CallbackEnviron->CleanupGroupCancelCallback = CleanupGroupCancelCallback;
}
FORCEINLINE VOID TpSetCallbackActivationContext(PTP_CALLBACK_ENVIRON CallbackEnviron, struct _ACTIVATION_CONTEXT *ActivationContext)
{
	CallbackEnviron->ActivationContext = ActivationContext;
}
FORCEINLINE VOID TpSetCallbackNoActivationContext(PTP_CALLBACK_ENVIRON CallbackEnviron)
{
	CallbackEnviron->ActivationContext = (struct _ACTIVATION_CONTEXT *)(LONG_PTR) - 1;
}
FORCEINLINE VOID TpSetCallbackLongFunction(PTP_CALLBACK_ENVIRON CallbackEnviron)
{
	CallbackEnviron->u.s.LongFunction = 1;
}
FORCEINLINE VOID TpSetCallbackRaceWithDll(PTP_CALLBACK_ENVIRON CallbackEnviron, PVOID DllHandle)
{
	CallbackEnviron->RaceDll = DllHandle;
}
FORCEINLINE VOID TpSetCallbackFinalizationCallback(PTP_CALLBACK_ENVIRON CallbackEnviron, PTP_SIMPLE_CALLBACK FinalizationCallback)
{
	CallbackEnviron->FinalizationCallback = FinalizationCallback;
}
#if (_WIN32_WINNT >= _WIN32_WINNT_WIN7)
FORCEINLINE VOID TpSetCallbackPriority(PTP_CALLBACK_ENVIRON CallbackEnviron, TP_CALLBACK_PRIORITY Priority)
{
	CallbackEnviron->CallbackPriority = Priority;
}
#endif
FORCEINLINE VOID TpSetCallbackPersistent(PTP_CALLBACK_ENVIRON CallbackEnviron)
{
	CallbackEnviron->u.s.Persistent = 1;
}
FORCEINLINE VOID TpDestroyCallbackEnviron(PTP_CALLBACK_ENVIRON CallbackEnviron)
{
	UNREFERENCED_PARAMETER(CallbackEnviron);
}
typedef struct _TP_WORK TP_WORK, *PTP_WORK;
typedef VOID(NTAPI *PTP_WORK_CALLBACK) (PTP_CALLBACK_INSTANCE Instance, PVOID Context, PTP_WORK Work);
typedef struct _TP_TIMER TP_TIMER, *PTP_TIMER;
typedef VOID(NTAPI *PTP_TIMER_CALLBACK) (PTP_CALLBACK_INSTANCE Instance, PVOID Context, PTP_TIMER Timer);
typedef DWORD TP_WAIT_RESULT;
typedef struct _TP_WAIT TP_WAIT, *PTP_WAIT;
typedef VOID(NTAPI *PTP_WAIT_CALLBACK) (PTP_CALLBACK_INSTANCE Instance, PVOID Context, PTP_WAIT Wait, TP_WAIT_RESULT WaitResult);
typedef struct _TP_IO TP_IO, *PTP_IO;
#if defined(_M_AMD64)
__forceinline struct _TEB *NtCurrentTeb(VOID)
{
	return (struct _TEB *)__readgsqword(FIELD_OFFSET(NT_TIB, Self));
}
__forceinline PVOID GetCurrentFiber(VOID)
{
	return (PVOID)__readgsqword(FIELD_OFFSET(NT_TIB, FiberData));
}
__forceinline PVOID GetFiberData(VOID)
{
	return *(PVOID *)GetCurrentFiber();
}
#endif
#if defined(_M_IX86)
#define PcTeb 0x18
#if (__POCC__ >= 700)
unsigned long __cdecl __readfsdword(unsigned long offset);
__inline struct _TEB *NtCurrentTeb(void)
{
	return (struct _TEB *)(ULONG_PTR)__readfsdword(PcTeb);
}
#else
__inline struct _TEB *NtCurrentTeb(void)
{
	__asm mov eax, fs:[PcTeb]
}
#endif
#endif
#if (_WIN32_WINNT > 0x0500) || (_WIN32_FUSION >= 0x0100) || ISOLATION_AWARE_ENABLED
#define ACTIVATION_CONTEXT_SECTION_ASSEMBLY_INFORMATION         (1)
#define ACTIVATION_CONTEXT_SECTION_DLL_REDIRECTION              (2)
#define ACTIVATION_CONTEXT_SECTION_WINDOW_CLASS_REDIRECTION     (3)
#define ACTIVATION_CONTEXT_SECTION_COM_SERVER_REDIRECTION       (4)
#define ACTIVATION_CONTEXT_SECTION_COM_INTERFACE_REDIRECTION    (5)
#define ACTIVATION_CONTEXT_SECTION_COM_TYPE_LIBRARY_REDIRECTION (6)
#define ACTIVATION_CONTEXT_SECTION_COM_PROGID_REDIRECTION       (7)
#define ACTIVATION_CONTEXT_SECTION_GLOBAL_OBJECT_RENAME_TABLE   (8)
#define ACTIVATION_CONTEXT_SECTION_CLR_SURROGATES               (9)
#define ACTIVATION_CONTEXT_SECTION_APPLICATION_SETTINGS         (10)
#define ACTIVATION_CONTEXT_SECTION_COMPATIBILITY_INFO           (11)
#endif
#endif
