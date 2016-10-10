/*+@@file@@----------------------------------------------------------------*//*!
 \file		BaseTsd.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jun 19 16:21:00 2016
 \date		Modified on Sun Jun 19 16:21:00 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _BASETSD_H_
#define _BASETSD_H_
#if __POCC__ >= 500
#pragma once
#endif
#if (defined(_M_MRX000) || defined(_M_AMD64) || defined(_M_IA64)) && (__POCC__ >= 1100) && !defined(RC_INVOKED)
#define POINTER_64 __ptr64
typedef unsigned __int64 POINTER_64_INT;
#if defined(_WIN64)
#define POINTER_32 __ptr32
#else
#define POINTER_32
#endif
#else
#if (__POCC__ >= 500) && !defined(RC_INVOKED)
#define POINTER_64 __ptr64
#else
#define POINTER_64
#endif
typedef unsigned long POINTER_64_INT;
#define POINTER_32
#endif
#if defined(_IA64_) || defined(_AMD64_)
#define FIRMWARE_PTR
#else
#define FIRMWARE_PTR POINTER_32
#endif
#if 0 && (_MSC_FULL_VER >= 140041204) && !defined(RC_INVOKED)
#define POINTER_SIGNED __sptr
#define POINTER_UNSIGNED __uptr
#else
#define POINTER_SIGNED
#define POINTER_UNSIGNED
#endif
#define SPOINTER_32 POINTER_SIGNED POINTER_32
#define UPOINTER_32 POINTER_UNSIGNED POINTER_32
typedef signed char INT8, *PINT8;
typedef signed short INT16, *PINT16;
typedef signed int INT32, *PINT32;
typedef signed __int64 INT64, *PINT64;
typedef unsigned char UINT8, *PUINT8;
typedef unsigned short UINT16, *PUINT16;
typedef unsigned int UINT32, *PUINT32;
typedef unsigned __int64 UINT64, *PUINT64;
typedef signed int LONG32, *PLONG32;
typedef unsigned int ULONG32, *PULONG32;
typedef unsigned int DWORD32, *PDWORD32;
#if !defined(_W64)
#if (defined(_X86_) || defined(_M_IX86)) && __POCC__ >= 800
#define _W64 __w64
#else
#define _W64
#endif
#endif
#if defined(_WIN64)
typedef __int64 INT_PTR, *PINT_PTR;
typedef unsigned __int64 UINT_PTR, *PUINT_PTR;
typedef __int64 LONG_PTR, *PLONG_PTR;
typedef unsigned __int64 ULONG_PTR, *PULONG_PTR;
#define t3264   __int64
#else
typedef _W64 int INT_PTR, *PINT_PTR;
typedef _W64 unsigned int UINT_PTR, *PUINT_PTR;
typedef _W64 long LONG_PTR, *PLONG_PTR;
typedef _W64 unsigned long ULONG_PTR, *PULONG_PTR;
#define t3264   t32
#endif
#ifdef _WIN64
#define ADDRESS_TAG_BIT 0x40000000000UI64
typedef __int64 SHANDLE_PTR;
typedef unsigned __int64 HANDLE_PTR;
typedef unsigned int UHALF_PTR, *PUHALF_PTR;
typedef int HALF_PTR, *PHALF_PTR;
__inline unsigned long HandleToULong(const void *h)
{
	return ((unsigned long)(ULONG_PTR)h);
}
__inline long HandleToLong(const void *h)
{
	return ((long)(LONG_PTR)h);
}
__inline void *ULongToHandle(const unsigned long h)
{
	return ((void *)(UINT_PTR)h);
}
__inline void *LongToHandle(const long h)
{
	return ((void *)(INT_PTR)h);
}
__inline unsigned long PtrToUlong(const void *p)
{
	return ((unsigned long)(ULONG_PTR)p);
}
__inline unsigned int PtrToUint(const void *p)
{
	return ((unsigned int)(UINT_PTR)p);
}
__inline unsigned short PtrToUshort(const void *p)
{
	return ((unsigned short)(unsigned long)(ULONG_PTR)p);
}
__inline long PtrToLong(const void *p)
{
	return ((long)(LONG_PTR)p);
}
__inline int PtrToInt(const void *p)
{
	return ((int)(INT_PTR)p);
}
__inline short PtrToShort(const void *p)
{
	return ((short)(long)(LONG_PTR)p);
}
__inline void *IntToPtr(const int i)
{
	return ((void *)(INT_PTR)i);
}
__inline void *UIntToPtr(const unsigned int ui)
{
	return ((void *)(UINT_PTR)ui);
}
__inline void *LongToPtr(const long l)
{
	return ((void *)(LONG_PTR)l);
}
__inline void *ULongToPtr(const unsigned long ul)
{
	return ((void *)(ULONG_PTR)ul);
}
#define PtrToPtr64( p )         ((void * POINTER_64) p)
#define Ptr64ToPtr( p )         ((void *) p)
#define HandleToHandle64( h )   (PtrToPtr64( h ))
#define Handle64ToHandle( h )   (Ptr64ToPtr( h ))
__inline void *Ptr32ToPtr(const void *POINTER_32 p)
{
	return ((void *)(ULONG_PTR) (unsigned long)p);
}
__inline void *Handle32ToHandle(const void *POINTER_32 h)
{
	return ((void *)(LONG_PTR) (long)h);
}
__inline void *POINTER_32 PtrToPtr32(const void *p)
{
	return ((void *POINTER_32)(unsigned long)(ULONG_PTR)p);
}
#define HandleToHandle32( h ) (PtrToPtr32( h ))
#else
#define ADDRESS_TAG_BIT 0x80000000UL
typedef unsigned short UHALF_PTR, *PUHALF_PTR;
typedef short HALF_PTR, *PHALF_PTR;
typedef _W64 long SHANDLE_PTR;
typedef _W64 unsigned long HANDLE_PTR;
#define HandleToULong( h ) ((ULONG)(ULONG_PTR)(h) )
#define HandleToLong( h )  ((LONG)(LONG_PTR) (h) )
#define ULongToHandle( ul ) ((HANDLE)(ULONG_PTR) (ul) )
#define LongToHandle( h )   ((HANDLE)(LONG_PTR) (h) )
#define PtrToUlong( p ) ((ULONG)(ULONG_PTR) (p) )
#define PtrToLong( p )  ((LONG)(LONG_PTR) (p) )
#define PtrToUint( p ) ((UINT)(UINT_PTR) (p) )
#define PtrToInt( p )  ((INT)(INT_PTR) (p) )
#define PtrToUshort( p ) ((unsigned short)(ULONG_PTR)(p) )
#define PtrToShort( p )  ((short)(LONG_PTR)(p) )
#define IntToPtr( i )    ((VOID *)(INT_PTR)((int)i))
#define UIntToPtr( ui )  ((VOID *)(UINT_PTR)((unsigned int)ui))
#define LongToPtr( l )   ((VOID *)(LONG_PTR)((long)l))
#define ULongToPtr( ul ) ((VOID *)(ULONG_PTR)((unsigned long)ul))
static __inline void *POINTER_64 PtrToPtr64(const void *p)
{
	return ((void *POINTER_64)(unsigned __int64)(ULONG_PTR)p);
}
static __inline void *Ptr64ToPtr(const void *POINTER_64 p)
{
	return ((void *)(ULONG_PTR) (unsigned __int64)p);
}
static __inline void *POINTER_64 HandleToHandle64(const void *h)
{
	return ((void *POINTER_64)(__int64) (LONG_PTR)h);
}
static __inline void *Handle64ToHandle(const void *POINTER_64 h)
{
	return ((void *)(ULONG_PTR) (unsigned __int64)h);
}
#define Ptr32ToPtr( p )         ((void *) p)
#define Handle32ToHandle( h )   (Ptr32ToPtr( h ))
#define PtrToPtr32( p )         ((void * POINTER_32) p)
#define HandleToHandle32( h )   (PtrToPtr32( h ))
#endif
#define HandleToUlong(h)  HandleToULong(h)
#define UlongToHandle(ul) ULongToHandle(ul)
#define UlongToPtr(ul) ULongToPtr(ul)
#define UintToPtr(ui)  UIntToPtr(ui)
#define MAXUINT_PTR  (~((UINT_PTR)0))
#define MAXINT_PTR   ((INT_PTR)(MAXUINT_PTR >> 1))
#define MININT_PTR   (~MAXINT_PTR)
#define MAXULONG_PTR (~((ULONG_PTR)0))
#define MAXLONG_PTR  ((LONG_PTR)(MAXULONG_PTR >> 1))
#define MINLONG_PTR  (~MAXLONG_PTR)
#define MAXUHALF_PTR ((UHALF_PTR)~0)
#define MAXHALF_PTR  ((HALF_PTR)(MAXUHALF_PTR >> 1))
#define MINHALF_PTR  (~MAXHALF_PTR)
typedef ULONG_PTR SIZE_T, *PSIZE_T;
typedef LONG_PTR SSIZE_T, *PSSIZE_T;
typedef ULONG_PTR DWORD_PTR, *PDWORD_PTR;
typedef __int64 LONG64, *PLONG64;
typedef unsigned __int64 ULONG64, *PULONG64;
typedef unsigned __int64 DWORD64, *PDWORD64;
typedef ULONG_PTR KAFFINITY;
typedef KAFFINITY *PKAFFINITY;
#endif
