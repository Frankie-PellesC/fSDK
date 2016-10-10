/*+@@file@@----------------------------------------------------------------*//*!
 \file		intsafe.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 17 01:11:25 2016
 \date		Modified on Sun Jul 17 01:11:25 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _INTSAFE_H_INCLUDED_
#define _INTSAFE_H_INCLUDED_
#if __POCC__ >= 500
#pragma once
#endif
#if !defined(_W64)
#if (defined(_X86_) || defined(_M_IX86)) && (_MSC_VER >= 1300)
#define _W64 __w64
#else
#define _W64
#endif
#endif
typedef char                CHAR;
typedef signed char         INT8;
typedef unsigned char       UCHAR;
typedef unsigned char       UINT8;
typedef unsigned char       BYTE;
typedef short               SHORT;
typedef signed short        INT16;
typedef unsigned short      USHORT;
typedef unsigned short      UINT16;
typedef unsigned short      WORD;
typedef int                 INT;
typedef signed int          INT32;
typedef unsigned int        UINT;
typedef unsigned int        UINT32;
typedef long                LONG;
typedef unsigned long       ULONG;
typedef unsigned long       DWORD;
typedef __int64             LONGLONG;
typedef __int64             LONG64;
typedef signed __int64      INT64;
typedef unsigned __int64    ULONGLONG;
typedef unsigned __int64    DWORDLONG;
typedef unsigned __int64    ULONG64;
typedef unsigned __int64    DWORD64;
typedef unsigned __int64    UINT64;
#ifdef _WIN64
typedef __int64             INT_PTR;
typedef unsigned __int64    UINT_PTR;
typedef __int64             LONG_PTR;
typedef unsigned __int64    ULONG_PTR;
#else
typedef _W64 int            INT_PTR;
typedef _W64 unsigned int   UINT_PTR;
typedef _W64 long           LONG_PTR;
typedef _W64 unsigned long  ULONG_PTR;
#endif
#ifdef _WIN64
typedef __int64             ptrdiff_t;
typedef unsigned __int64    size_t;
#else
typedef _W64 int            ptrdiff_t;
typedef _W64 unsigned int   size_t;
#endif
typedef ULONG_PTR   DWORD_PTR;
typedef LONG_PTR    SSIZE_T;
typedef ULONG_PTR   SIZE_T;
#undef _USE_INTRINSIC_MULTIPLY128
#if !defined(_M_CEE) && (defined(_AMD64_) || (defined(_IA64_) && (_MSC_VER >= 1400)))
#define _USE_INTRINSIC_MULTIPLY128
#endif
#if defined(_USE_INTRINSIC_MULTIPLY128)
#define UnsignedMultiply128 _umul128
ULONG64 UnsignedMultiply128(ULONGLONG ullMultiplicand, ULONGLONG ullMultiplier, ULONGLONG *pullResultHigh);
#pragma intrinsic(_umul128)
#endif
typedef long HRESULT;
#define SUCCEEDED(hr)   (((HRESULT)(hr)) >= 0)
#define FAILED(hr)      (((HRESULT)(hr)) < 0)
#define S_OK    ((HRESULT)0L)
#define INTSAFE_E_ARITHMETIC_OVERFLOW   ((HRESULT)0x80070216L)
#ifndef SORTPP_PASS
#define C_ASSERT(e) typedef char __C_ASSERT__[(e)?1:-1]
#else
#define C_ASSERT(e)
#endif
#if defined(MIDL_PASS) || defined(RC_INVOKED) || defined(_M_CEE_PURE) || defined(_68K_) || defined(_MPPC_) || defined(_M_IA64) || defined(_M_AMD64)
#define UInt32x32To64(a, b) (((unsigned __int64)((unsigned int)(a))) * ((unsigned __int64)((unsigned int)(b))))
#elif defined(_M_IX86)
#define UInt32x32To64(a, b) ((unsigned __int64)(((unsigned __int64)((unsigned int)(a))) * ((unsigned int)(b))))
#else
#error Must define a target architecture.
#endif
#define INT8_MIN        (-127i8 - 1)
#define SHORT_MIN       (-32768)
#define INT16_MIN       (-32767i16 - 1)
#define INT_MIN         (-2147483647 - 1)
#define INT32_MIN       (-2147483647i32 - 1)
#define LONG_MIN        (-2147483647L - 1)
#define LONGLONG_MIN    (-9223372036854775807i64 - 1)
#define LONG64_MIN      (-9223372036854775807i64 - 1)
#define INT64_MIN       (-9223372036854775807i64 - 1)
#define INT128_MIN      (-170141183460469231731687303715884105727i128 - 1)
#ifdef _WIN64
#define INT_PTR_MIN     (-9223372036854775807i64 - 1)
#define LONG_PTR_MIN    (-9223372036854775807i64 - 1)
#define PTRDIFF_T_MIN   (-9223372036854775807i64 - 1)
#define SSIZE_T_MIN     (-9223372036854775807i64 - 1)
#else
#define INT_PTR_MIN     (-2147483647 - 1)
#define LONG_PTR_MIN    (-2147483647L - 1)
#define PTRDIFF_T_MIN   (-2147483647 - 1)
#define SSIZE_T_MIN     (-2147483647L - 1)
#endif
#define INT8_MAX        127i8
#define UINT8_MAX       0xffui8
#define BYTE_MAX        0xff
#define SHORT_MAX       32767
#define INT16_MAX       32767i16
#define USHORT_MAX      0xffff
#define UINT16_MAX      0xffffui16
#define WORD_MAX        0xffff
#define INT_MAX         2147483647
#define INT32_MAX       2147483647i32
#define UINT_MAX        0xffffffff
#define UINT32_MAX      0xffffffffui32
#define LONG_MAX        2147483647L
#define ULONG_MAX       0xffffffffUL
#define DWORD_MAX       0xffffffffUL
#define LONGLONG_MAX    9223372036854775807i64
#define LONG64_MAX      9223372036854775807i64
#define INT64_MAX       9223372036854775807i64
#define ULONGLONG_MAX   0xffffffffffffffffui64
#define DWORDLONG_MAX   0xffffffffffffffffui64
#define ULONG64_MAX     0xffffffffffffffffui64
#define DWORD64_MAX     0xffffffffffffffffui64
#define UINT64_MAX      0xffffffffffffffffui64
#define INT128_MAX      170141183460469231731687303715884105727i128
#define UINT128_MAX     0xffffffffffffffffffffffffffffffffui128
#undef SIZE_T_MAX
#ifdef _WIN64
#define INT_PTR_MAX     9223372036854775807i64
#define UINT_PTR_MAX    0xffffffffffffffffui64
#define LONG_PTR_MAX    9223372036854775807i64
#define ULONG_PTR_MAX   0xffffffffffffffffui64
#define DWORD_PTR_MAX   0xffffffffffffffffui64
#define PTRDIFF_T_MAX   9223372036854775807i64
#define SIZE_T_MAX      0xffffffffffffffffui64
#define SSIZE_T_MAX     9223372036854775807i64
#define _SIZE_T_MAX     0xffffffffffffffffui64
#else
#define INT_PTR_MAX     2147483647 
#define UINT_PTR_MAX    0xffffffff
#define LONG_PTR_MAX    2147483647L
#define ULONG_PTR_MAX   0xffffffffUL
#define DWORD_PTR_MAX   0xffffffffUL
#define PTRDIFF_T_MAX   2147483647
#define SIZE_T_MAX      0xffffffff
#define SSIZE_T_MAX     2147483647L
#define _SIZE_T_MAX     0xffffffffUL
#endif
#define INT8_ERROR      (-1i8)
#define UINT8_ERROR     0xffui8
#define BYTE_ERROR      0xff
#define SHORT_ERROR     (-1)
#define INT16_ERROR     (-1i16)
#define USHORT_ERROR    0xffff
#define UINT16_ERROR    0xffffui16
#define WORD_ERROR      0xffff
#define INT_ERROR       (-1)
#define INT32_ERROR     (-1i32)
#define UINT_ERROR      0xffffffff
#define UINT32_ERROR    0xffffffffui32
#define LONG_ERROR      (-1L)
#define ULONG_ERROR     0xffffffffUL
#define DWORD_ERROR     0xffffffffUL
#define LONGLONG_ERROR  (-1i64)
#define LONG64_ERROR    (-1i64)
#define INT64_ERROR     (-1i64)
#define ULONGLONG_ERROR 0xffffffffffffffffui64
#define DWORDLONG_ERROR 0xffffffffffffffffui64
#define ULONG64_ERROR   0xffffffffffffffffui64
#define UINT64_ERROR    0xffffffffffffffffui64
#ifdef _WIN64
#define INT_PTR_ERROR   (-1i64)
#define UINT_PTR_ERROR  0xffffffffffffffffui64
#define LONG_PTR_ERROR  (-1i64)
#define ULONG_PTR_ERROR 0xffffffffffffffffui64
#define DWORD_PTR_ERROR 0xffffffffffffffffui64
#define PTRDIFF_T_ERROR (-1i64)
#define SIZE_T_ERROR    0xffffffffffffffffui64
#define SSIZE_T_ERROR   (-1i64)
#define _SIZE_T_ERROR   0xffffffffffffffffui64
#else
#define INT_PTR_ERROR   (-1) 
#define UINT_PTR_ERROR  0xffffffff
#define LONG_PTR_ERROR  (-1L)
#define ULONG_PTR_ERROR 0xffffffffUL
#define DWORD_PTR_ERROR 0xffffffffUL
#define PTRDIFF_T_ERROR (-1)
#define SIZE_T_ERROR    0xffffffff
#define SSIZE_T_ERROR   (-1L)
#define _SIZE_T_ERROR   0xffffffffUL
#endif
C_ASSERT(sizeof(USHORT) == 2);
C_ASSERT(sizeof(INT) == 4);
C_ASSERT(sizeof(UINT) == 4);
C_ASSERT(sizeof(LONG) == 4);
C_ASSERT(sizeof(ULONG) == 4);
C_ASSERT(sizeof(UINT_PTR) == sizeof(ULONG_PTR));
__inline HRESULT Int8ToUChar(INT8 i8Operand, UCHAR *pch)
{
	HRESULT hr;
	if (i8Operand >= 0)
	{
		*pch = (UCHAR)i8Operand;
		hr = S_OK;
	}
	else
	{
		*pch = '\0';
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
__inline HRESULT Int8ToUInt8(INT8 i8Operand, UINT8 *pu8Result)
{
	HRESULT hr;

	if (i8Operand >= 0)
	{
		*pu8Result = (UINT8)i8Operand;
		hr = S_OK;
	}
	else
	{
		*pu8Result = UINT8_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#define Int8ToByte  Int8ToUInt8
__inline HRESULT Int8ToUShort(INT8 i8Operand, USHORT *pusResult)
{
	HRESULT hr;

	if (i8Operand >= 0)
	{
		*pusResult = (USHORT)i8Operand;
		hr = S_OK;
	}
	else
	{
		*pusResult = USHORT_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#define Int8ToUInt16    Int8ToUShort
#define Int8ToWord  Int8ToUShort
__inline HRESULT Int8ToUInt(INT8 i8Operand, UINT *puResult)
{
	HRESULT hr;

	if (i8Operand >= 0)
	{
		*puResult = (UINT)i8Operand;
		hr = S_OK;
	}
	else
	{
		*puResult = UINT_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#define Int8ToUInt32    Int8ToUInt
__inline HRESULT Int8ToUIntPtr(INT8 i8Operand, UINT_PTR *puResult)
{
	HRESULT hr;

	if (i8Operand >= 0)
	{
		*puResult = (UINT_PTR)i8Operand;
		hr = S_OK;
	}
	else
	{
		*puResult = UINT_PTR_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
__inline HRESULT Int8ToULong(INT8 i8Operand, ULONG *pulResult)
{
	HRESULT hr;

	if (i8Operand >= 0)
	{
		*pulResult = (ULONG)i8Operand;
		hr = S_OK;
	}
	else
	{
		*pulResult = ULONG_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}
	return hr;
}
__inline HRESULT Int8ToULongPtr(INT8 i8Operand, ULONG_PTR *pulResult)
{
	HRESULT hr;

	if (i8Operand >= 0)
	{
		*pulResult = (ULONG_PTR)i8Operand;
		hr = S_OK;
	}
	else
	{
		*pulResult = ULONG_PTR_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#define Int8ToDWord Int8ToULong
#define Int8ToDWordPtr  Int8ToULongPtr
__inline HRESULT Int8ToULongLong(INT8 i8Operand, ULONGLONG *pullResult)
{
	HRESULT hr;

	if (i8Operand >= 0)
	{
		*pullResult = (ULONGLONG)i8Operand;
		hr = S_OK;
	}
	else
	{
		*pullResult = ULONGLONG_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#define Int8ToDWordLong Int8ToULongLong
#define Int8ToULong64   Int8ToULongLong
#define Int8ToDWord64   Int8ToULongLong
#define Int8ToUInt64    Int8ToULongLong
#define Int8ToSizeT Int8ToUIntPtr
#define Int8ToSIZET Int8ToULongPtr
__inline HRESULT UInt8ToInt8(UINT8 u8Operand, INT8 *pi8Result)
{
	HRESULT hr;

	if (u8Operand <= INT8_MAX)
	{
		*pi8Result = (INT8)u8Operand;
		hr = S_OK;
	}
	else
	{
		*pi8Result = INT8_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
__forceinline HRESULT UInt8ToChar(UINT8 u8Operand, CHAR *pch)
{
#ifdef _CHAR_UNSIGNED
	*pch = (CHAR)u8Operand;
	return S_OK;
#else
	return UInt8ToInt8(u8Operand, (INT8 *)pch);
#endif
}
__inline HRESULT ByteToInt8(BYTE bOperand, INT8 *pi8Result)
{
	HRESULT hr;

	if (bOperand <= INT8_MAX)
	{
		*pi8Result = (INT8)bOperand;
		hr = S_OK;
	}
	else
	{
		*pi8Result = INT8_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
__forceinline HRESULT ByteToChar(BYTE bOperand, CHAR *pch)
{
#ifdef _CHAR_UNSIGNED
	*pch = (CHAR)bOperand;
	return S_OK;
#else
	return ByteToInt8(bOperand, (INT8 *)pch);
#endif
}
__inline HRESULT ShortToInt8(SHORT sOperand, INT8 *pi8Result)
{
	HRESULT hr;
	if ((sOperand >= INT8_MIN) && (sOperand <= INT8_MAX))
	{
		*pi8Result = (INT8)sOperand;
		hr = S_OK;
	}
	else
	{
		*pi8Result = INT8_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}
	return hr;
}
__inline HRESULT ShortToUChar(SHORT sOperand, UCHAR *pch)
{
	HRESULT hr;
	if ((sOperand >= 0) && (sOperand <= 255))
	{
		*pch = (UCHAR)sOperand;
		hr = S_OK;
	}
	else
	{
		*pch = '\0';
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}
	return hr;
}
__forceinline HRESULT ShortToChar(SHORT sOperand, CHAR *pch)
{
#ifdef _CHAR_UNSIGNED
	return ShortToUChar(sOperand, (UCHAR *)pch);
#else
	return ShortToInt8(sOperand, (INT8 *)pch);
#endif
}
__inline HRESULT ShortToUInt8(SHORT sOperand, UINT8 *pui8Result)
{
	HRESULT hr;
	if ((sOperand >= 0) && (sOperand <= UINT8_MAX))
	{
		*pui8Result = (UINT8)sOperand;
		hr = S_OK;
	}
	else
	{
		*pui8Result = UINT8_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}
	return hr;
}
#define ShortToByte  ShortToUInt8
__inline HRESULT ShortToUShort(SHORT sOperand, USHORT *pusResult)
{
	HRESULT hr;
	if (sOperand >= 0)
	{
		*pusResult = (USHORT)sOperand;
		hr = S_OK;
	}
	else
	{
		*pusResult = USHORT_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}
	return hr;
}
#define ShortToUInt16   ShortToUShort
#define ShortToWord ShortToUShort
__inline HRESULT ShortToUInt(SHORT sOperand, UINT *puResult)
{
	HRESULT hr;
	if (sOperand >= 0)
	{
		*puResult = (UINT)sOperand;
		hr = S_OK;
	}
	else
	{
		*puResult = UINT_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}
	return hr;
}
#define ShortToUInt32   ShortToUInt
__inline HRESULT ShortToUIntPtr(SHORT sOperand, UINT_PTR *puResult)
{
	HRESULT hr;
	if (sOperand >= 0)
	{
		*puResult = (UINT_PTR)sOperand;
		hr = S_OK;
	}
	else
	{
		*puResult = UINT_PTR_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}
	return hr;
}
__inline HRESULT ShortToULong(SHORT sOperand, ULONG *pulResult)
{
	HRESULT hr;

	if (sOperand >= 0)
	{
		*pulResult = (ULONG)sOperand;
		hr = S_OK;
	}
	else
	{
		*pulResult = ULONG_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
__inline HRESULT ShortToULongPtr(SHORT sOperand, ULONG_PTR *pulResult)
{
	HRESULT hr;

	if (sOperand >= 0)
	{
		*pulResult = (ULONG_PTR)sOperand;
		hr = S_OK;
	}
	else
	{
		*pulResult = ULONG_PTR_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#define ShortToDWord    ShortToULong
__inline HRESULT ShortToDWordPtr(SHORT sOperand, DWORD_PTR *pdwResult)
{
	HRESULT hr;

	if (sOperand >= 0)
	{
		*pdwResult = (DWORD_PTR)sOperand;
		hr = S_OK;
	}
	else
	{
		*pdwResult = DWORD_PTR_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
__inline HRESULT ShortToULongLong(SHORT sOperand, ULONGLONG *pullResult)
{
	HRESULT hr;
	if (sOperand >= 0)
	{
		*pullResult = (ULONGLONG)sOperand;
		hr = S_OK;
	}
	else
	{
		*pullResult = ULONGLONG_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#define ShortToDWordLong    ShortToULongLong
#define ShortToULong64  ShortToULongLong
#define ShortToDWord64  ShortToULongLong
#define ShortToUInt64   ShortToULongLong
#define ShortToSizeT    ShortToUIntPtr
#define ShortToSIZET    ShortToULongPtr
#define Int16ToChar ShortToChar
#define Int16ToInt8 ShortToInt8
#define Int16ToUChar    ShortToUChar
#define Int16ToUInt8    ShortToUInt8
#define Int16ToByte ShortToUInt8
#define Int16ToUShort   ShortToUShort
#define Int16ToUInt16   ShortToUShort
#define Int16ToWord ShortToUShort
#define Int16ToUInt ShortToUInt
#define Int16ToUInt32   ShortToUInt
#define Int16ToUIntPtr  ShortToUIntPtr
#define Int16ToULong    ShortToULong
#define Int16ToULongPtr ShortToULongPtr
#define Int16ToDWord    ShortToULong
#define Int16ToDWordPtr ShortToULongPtr
#define Int16ToULongLong    ShortToULongLong
#define Int16ToDWordLong    ShortToULongLong
#define Int16ToULong64  ShortToULongLong
#define Int16ToDWord64  ShortToULongLong
#define Int16ToUInt64   ShortToULongLong
#define Int16ToSizeT    ShortToUIntPtr
#define Int16ToSIZET    ShortToULongPtr
__inline HRESULT UShortToInt8(USHORT usOperand, INT8 *pi8Result)
{
	HRESULT hr;

	if (usOperand <= INT8_MAX)
	{
		*pi8Result = (INT8)usOperand;
		hr = S_OK;
	}
	else
	{
		*pi8Result = INT8_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}
	return hr;
}
__inline HRESULT UShortToUChar(USHORT usOperand, UCHAR *pch)
{
	HRESULT hr;
	if (usOperand <= 255)
	{
		*pch = (UCHAR)usOperand;
		hr = S_OK;
	}
	else
	{
		*pch = '\0';
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}
	return hr;
}
__forceinline HRESULT UShortToChar(USHORT usOperand, CHAR *pch)
{
#ifdef _CHAR_UNSIGNED
	return UShortToUChar(usOperand, (UCHAR *)pch);
#else
	return UShortToInt8(usOperand, (INT8 *)pch);
#endif
}
__inline HRESULT UShortToUInt8(USHORT usOperand, UINT8 *pui8Result)
{
	HRESULT hr;

	if (usOperand <= UINT8_MAX)
	{
		*pui8Result = (UINT8)usOperand;
		hr = S_OK;
	}
	else
	{
		*pui8Result = UINT8_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#define UShortToByte    UShortToUInt8
__inline HRESULT UShortToShort(USHORT usOperand, SHORT *psResult)
{
	HRESULT hr;
	if (usOperand <= SHORT_MAX)
	{
		*psResult = (SHORT)usOperand;
		hr = S_OK;
	}
	else
	{
		*psResult = SHORT_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}
	return hr;
}
#define UShortToInt16   UShortToShort
#define UInt16ToChar    UShortToChar
#define UInt16ToInt8    UShortToInt8
#define UInt16ToUChar   UShortToUChar
#define UInt16ToUInt8   UShortToUInt8
#define UInt16ToByte    UShortToUInt8
#define UInt16ToShort   UShortToShort
#define UInt16ToInt16   UShortToShort
#define WordToInt8  UShortToInt8
#define WordToChar  UShortToChar
#define WordToUChar UShortToUChar
#define WordToUInt8 UShortToUInt8
#define WordToByte  UShortToUInt8
#define WordToShort UShortToShort
#define WordToInt16 UShortToShort
__inline HRESULT IntToInt8(INT iOperand, INT8 *pi8Result)
{
	HRESULT hr;

	if ((iOperand >= INT8_MIN) && (iOperand <= INT8_MAX))
	{
		*pi8Result = (INT8)iOperand;
		hr = S_OK;
	}
	else
	{
		*pi8Result = INT8_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
__inline HRESULT IntToUChar(INT iOperand, UCHAR *pch)
{
	HRESULT hr;
	if ((iOperand >= 0) && (iOperand <= 255))
	{
		*pch = (UCHAR)iOperand;
		hr = S_OK;
	}
	else
	{
		*pch = '\0';
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}
	return hr;
}
__forceinline HRESULT IntToChar(INT iOperand, CHAR *pch)
{
#ifdef _CHAR_UNSIGNED
	return IntToUChar(iOperand, (UCHAR *)pch);
#else
	return IntToInt8(iOperand, (INT8 *)pch);
#endif
}
#define IntToByte   IntToUInt8
__inline HRESULT IntToUInt8(INT iOperand, UINT8 *pui8Result)
{
	HRESULT hr;

	if ((iOperand >= 0) && (iOperand <= UINT8_MAX))
	{
		*pui8Result = (UINT8)iOperand;
		hr = S_OK;
	}
	else
	{
		*pui8Result = UINT8_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
__inline HRESULT IntToShort(INT iOperand, SHORT *psResult)
{
	HRESULT hr;
	if ((iOperand >= SHORT_MIN) && (iOperand <= SHORT_MAX))
	{
		*psResult = (SHORT)iOperand;
		hr = S_OK;
	}
	else
	{
		*psResult = SHORT_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}
	return hr;
}
#define IntToInt16  IntToShort
__inline HRESULT IntToUShort(INT iOperand, USHORT *pusResult)
{
	HRESULT hr;
	if ((iOperand >= 0) && (iOperand <= USHORT_MAX))
	{
		*pusResult = (USHORT)iOperand;
		hr = S_OK;
	}
	else
	{
		*pusResult = USHORT_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}
	return hr;
}
#define IntToUInt16  IntToUShort
#define IntToWord   IntToUShort
__inline HRESULT IntToUInt(INT iOperand, UINT *puResult)
{
	HRESULT hr;
	if (iOperand >= 0)
	{
		*puResult = (UINT)iOperand;
		hr = S_OK;
	}
	else
	{
		*puResult = UINT_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}
	return hr;
}
#ifdef _WIN64
#define IntToUIntPtr    IntToULongLong
#else
#define IntToUIntPtr    IntToUInt
#endif
__inline HRESULT IntToULong(INT iOperand, ULONG *pulResult)
{
	HRESULT hr;
	if (iOperand >= 0)
	{
		*pulResult = (ULONG)iOperand;
		hr = S_OK;
	}
	else
	{
		*pulResult = ULONG_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}
	return hr;
}
#ifdef _WIN64
#define IntToULongPtr   IntToULongLong
#else
#define IntToULongPtr   IntToULong
#endif
#define IntToDWord  IntToULong
#define IntToDWordPtr   IntToULongPtr
__inline HRESULT IntToULongLong(INT iOperand, ULONGLONG *pullResult)
{
	HRESULT hr;
	if (iOperand >= 0)
	{
		*pullResult = (ULONGLONG)iOperand;
		hr = S_OK;
	}
	else
	{
		*pullResult = ULONGLONG_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}
	return hr;
}
#define IntToDWordLong  IntToULongLong
#define IntToULong64    IntToULongLong
#define IntToDWord64    IntToULongLong
#define IntToUInt64 IntToULongLong
#define IntToSizeT  IntToUIntPtr
#define IntToSIZET  IntToULongPtr
#define Int32ToChar IntToChar
#define Int32ToInt8 IntToInt8
#define Int32ToUChar    IntToUChar
#define Int32ToByte IntToUInt8
#define Int32ToUInt8    IntToUInt8
#define Int32ToShort    IntToShort
#define Int32ToInt16    IntToShort
#define Int32ToUShort   IntToUShort
#define Int32ToUInt16   IntToUShort
#define Int32ToWord IntToUShort
#define Int32ToUInt IntToUInt
#define Int32ToUInt32   IntToUInt
#define Int32ToUIntPtr  IntToUIntPtr
#define Int32ToULong    IntToULong
#define Int32ToULongPtr IntToULongPtr
#define Int32ToDWord    IntToULong
#define Int32ToDWordPtr IntToULongPtr
#define Int32ToULongLong    IntToULongLong
#define Int32ToDWordLong    IntToULongLong
#define Int32ToULong64  IntToULongLong
#define Int32ToDWord64  IntToULongLong
#define Int32ToUInt64   IntToULongLong
#define Int32ToSizeT    IntToUIntPtr
#define Int32ToSIZET    IntToULongPtr
__inline HRESULT IntPtrToInt8(INT_PTR iOperand, INT8 *pi8Result)
{
	HRESULT hr;

	if ((iOperand >= INT8_MIN) && (iOperand <= INT8_MAX))
	{
		*pi8Result = (INT8)iOperand;
		hr = S_OK;
	}
	else
	{
		*pi8Result = INT8_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
__inline HRESULT IntPtrToUChar(INT_PTR iOperand, UCHAR *pch)
{
	HRESULT hr;
	if ((iOperand >= 0) && (iOperand <= 255))
	{
		*pch = (UCHAR)iOperand;
		hr = S_OK;
	}
	else
	{
		*pch = '\0';
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}
	return hr;
}
__forceinline HRESULT IntPtrToChar(INT_PTR iOperand, CHAR *pch)
{
#ifdef _CHAR_UNSIGNED
	return IntPtrToUChar(iOperand, (UCHAR *)pch);
#else
	return IntPtrToInt8(iOperand, (INT8 *)pch);
#endif
}
__inline HRESULT IntPtrToUInt8(INT_PTR iOperand, UINT8 *pui8Result)
{
	HRESULT hr;

	if ((iOperand >= 0) && (iOperand <= UINT8_MAX))
	{
		*pui8Result = (UINT8)iOperand;
		hr = S_OK;
	}
	else
	{
		*pui8Result = UINT8_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#define IntPtrToByte    IntPtrToUInt8
__inline HRESULT IntPtrToShort(INT_PTR iOperand, SHORT *psResult)
{
	HRESULT hr;
	if ((iOperand >= SHORT_MIN) && (iOperand <= SHORT_MAX))
	{
		*psResult = (SHORT)iOperand;
		hr = S_OK;
	}
	else
	{
		*psResult = SHORT_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}
	return hr;
}
#define IntPtrToInt16   IntPtrToShort
__inline HRESULT IntPtrToUShort(INT_PTR iOperand, USHORT *pusResult)
{
	HRESULT hr;
	if ((iOperand >= 0) && (iOperand <= USHORT_MAX))
	{
		*pusResult = (USHORT)iOperand;
		hr = S_OK;
	}
	else
	{
		*pusResult = USHORT_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}
	return hr;
}
#define IntPtrToUInt16  IntPtrToUShort
#define IntPtrToWord    IntPtrToUShort
#ifdef _WIN64
#define IntPtrToInt LongLongToInt
#else
__inline HRESULT IntPtrToInt(INT_PTR iOperand, INT *piResult)
{
	*piResult = (INT)iOperand;
	return S_OK;
}
#endif
#define IntPtrToInt32   IntPtrToInt
#ifdef _WIN64
#define IntPtrToUInt    LongLongToUInt
#else
__inline HRESULT IntPtrToUInt(INT_PTR iOperand, UINT *puResult)
{
	HRESULT hr;
	if (iOperand >= 0)
	{
		*puResult = (UINT)iOperand;
		hr = S_OK;
	}
	else
	{
		*puResult = UINT_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}
	return hr;
}
#endif
#define IntPtrToUInt32  IntPtrToUInt
#ifdef _WIN64
#define IntPtrToUIntPtr LongLongToULongLong
#else
__inline HRESULT IntPtrToUIntPtr(INT_PTR iOperand, UINT_PTR *puResult)
{
	HRESULT hr;
	if (iOperand >= 0)
	{
		*puResult = (UINT_PTR)iOperand;
		hr = S_OK;
	}
	else
	{
		*puResult = UINT_PTR_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}
	return hr;
}
#endif
#ifdef _WIN64
#define IntPtrToLong    LongLongToLong
#else
__inline HRESULT IntPtrToLong(INT_PTR iOperand, LONG *plResult)
{
	*plResult = (LONG)iOperand;
	return S_OK;
}
#endif
__inline HRESULT IntPtrToLongPtr(INT_PTR iOperand, LONG_PTR *plResult)
{
	*plResult = (LONG_PTR)iOperand;
	return S_OK;
}
#ifdef _WIN64
#define IntPtrToULong   LongLongToULong
#else
__inline HRESULT IntPtrToULong(INT_PTR iOperand, ULONG *pulResult)
{
	HRESULT hr;
	if (iOperand >= 0)
	{
		*pulResult = (ULONG)iOperand;
		hr = S_OK;
	}
	else
	{
		*pulResult = ULONG_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}
	return hr;
}
#endif
#ifdef _WIN64
#define IntPtrToULongPtr    LongLongToULongLong
#else
__inline HRESULT IntPtrToULongPtr(INT_PTR iOperand, ULONG_PTR *pulResult)
{
	HRESULT hr;
	if (iOperand >= 0)
	{
		*pulResult = (ULONG_PTR)iOperand;
		hr = S_OK;
	}
	else
	{
		*pulResult = ULONG_PTR_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}
	return hr;
}
#endif
#define IntPtrToDWord   IntPtrToULong
#define IntPtrToDWordPtr    IntPtrToULongPtr
#ifdef _WIN64
#define IntPtrToULongLong   LongLongToULongLong
#else
__inline HRESULT IntPtrToULongLong(INT_PTR iOperand, ULONGLONG *pullResult)
{
	HRESULT hr;
	if (iOperand >= 0)
	{
		*pullResult = (ULONGLONG)iOperand;
		hr = S_OK;
	}
	else
	{
		*pullResult = ULONGLONG_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}
	return hr;
}
#endif
#define IntPtrToDWordLong   IntPtrToULongLong
#define IntPtrToULong64 IntPtrToULongLong
#define IntPtrToDWord64 IntPtrToULongLong
#define IntPtrToUInt64  IntPtrToULongLong
#define IntPtrToSizeT   IntPtrToUIntPtr
#define IntPtrToSIZET   IntPtrToULongPtr
__inline HRESULT UIntToInt8(UINT uOperand, INT8 *pi8Result)
{
	HRESULT hr;

	if (uOperand <= INT8_MAX)
	{
		*pi8Result = (INT8)uOperand;
		hr = S_OK;
	}
	else
	{
		*pi8Result = INT8_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
__inline HRESULT UIntToUChar(UINT uOperand, UCHAR *pch)
{
	HRESULT hr;
	if (uOperand <= 255)
	{
		*pch = (UCHAR)uOperand;
		hr = S_OK;
	}
	else
	{
		*pch = '\0';
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}
	return hr;
}
__forceinline HRESULT UIntToChar(UINT uOperand, CHAR *pch)
{
#ifdef _CHAR_UNSIGNED
	return UIntToUChar(uOperand, (UCHAR *)pch);
#else
	return UIntToInt8(uOperand, (INT8 *)pch);
#endif
}
__inline HRESULT UIntToUInt8(UINT uOperand, UINT8 *pui8Result)
{
	HRESULT hr;

	if (uOperand <= UINT8_MAX)
	{
		*pui8Result = (UINT8)uOperand;
		hr = S_OK;
	}
	else
	{
		*pui8Result = UINT8_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#define UIntToByte   UIntToUInt8
__inline HRESULT UIntToShort(UINT uOperand, SHORT *psResult)
{
	HRESULT hr;
	if (uOperand <= SHORT_MAX)
	{
		*psResult = (SHORT)uOperand;
		hr = S_OK;
	}
	else
	{
		*psResult = SHORT_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}
	return hr;
}
#define UIntToInt16 UIntToShort
__inline HRESULT UIntToUShort(UINT uOperand, USHORT *pusResult)
{
	HRESULT hr;
	if (uOperand <= USHORT_MAX)
	{
		*pusResult = (USHORT)uOperand;
		hr = S_OK;
	}
	else
	{
		*pusResult = USHORT_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}
	return hr;
}
#define UIntToUInt16    UIntToUShort
#define UIntToWord  UIntToUShort
__inline HRESULT UIntToInt(UINT uOperand, INT *piResult)
{
	HRESULT hr;
	if (uOperand <= INT_MAX)
	{
		*piResult = (INT)uOperand;
		hr = S_OK;
	}
	else
	{
		*piResult = INT_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}
	return hr;
}
#define UIntToInt32 UIntToInt
#ifdef _WIN64
__inline HRESULT UIntToIntPtr(UINT uOperand, INT_PTR *piResult)
{
	*piResult = uOperand;
	return S_OK;
}
#else
#define UIntToIntPtr    UIntToInt
#endif
__inline HRESULT UIntToLong(UINT uOperand, LONG *plResult)
{
	HRESULT hr;
	if (uOperand <= LONG_MAX)
	{
		*plResult = (LONG)uOperand;
		hr = S_OK;
	}
	else
	{
		*plResult = LONG_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#ifdef _WIN64
__inline HRESULT UIntToLongPtr(UINT uOperand, LONG_PTR *plResult)
{
	*plResult = uOperand;
	return S_OK;
}
#else
#define UIntToLongPtr   UIntToLong
#endif
#define UIntToPtrdiffT  UIntToIntPtr
#define UIntToSSIZET    UIntToLongPtr
#define UInt32ToChar    UIntToChar
#define UInt32ToInt8    UIntToInt8
#define UInt32ToUChar   UIntToUChar
#define UInt32ToUInt8   UIntToUInt8
#define UInt32ToByte    UInt32ToUInt8
#define UInt32ToShort   UIntToShort
#define UInt32ToInt16   UIntToShort
#define UInt32ToUShort  UIntToUShort
#define UInt32ToUInt16  UIntToUShort
#define UInt32ToWord    UIntToUShort
#define UInt32ToInt UIntToInt
#define UInt32ToIntPtr  UIntToIntPtr
#define UInt32ToInt32   UIntToInt
#define UInt32ToLong    UIntToLong
#define UInt32ToLongPtr UIntToLongPtr
#define UInt32ToPtrdiffT    UIntToPtrdiffT
#define UInt32ToSSIZET  UIntToSSIZET
__inline HRESULT UIntPtrToInt8(UINT_PTR uOperand, INT8 *pi8Result)
{
	HRESULT hr;

	if (uOperand <= INT8_MAX)
	{
		*pi8Result = (INT8)uOperand;
		hr = S_OK;
	}
	else
	{
		*pi8Result = INT8_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
__inline HRESULT UIntPtrToUChar(UINT_PTR uOperand, UCHAR *pch)
{
	HRESULT hr;
	if (uOperand <= 255)
	{
		*pch = (UCHAR)uOperand;
		hr = S_OK;
	}
	else
	{
		*pch = '\0';
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}
	return hr;
}
__forceinline HRESULT UIntPtrToChar(UINT_PTR uOperand, CHAR *pch)
{
#ifdef _CHAR_UNSIGNED
	return UIntPtrToUChar(uOperand, (UCHAR *)pch);
#else
	return UIntPtrToInt8(uOperand, (INT8 *)pch);
#endif
}
__inline HRESULT UIntPtrToUInt8(UINT_PTR uOperand, UINT8 *pu8Result)
{
	HRESULT hr;

	if (uOperand <= UINT8_MAX)
	{
		*pu8Result = (UINT8)uOperand;
		hr = S_OK;
	}
	else
	{
		*pu8Result = UINT8_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#define UIntPtrToByte   UIntPtrToUInt8
__inline HRESULT UIntPtrToShort(UINT_PTR uOperand, SHORT *psResult)
{
	HRESULT hr;
	if (uOperand <= SHORT_MAX)
	{
		*psResult = (SHORT)uOperand;
		hr = S_OK;
	}
	else
	{
		*psResult = SHORT_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}
	return hr;
}
__inline HRESULT UIntPtrToInt16(UINT_PTR uOperand, INT16 *pi16Result)
{
	HRESULT hr;

	if (uOperand <= INT16_MAX)
	{
		*pi16Result = (INT16)uOperand;
		hr = S_OK;
	}
	else
	{
		*pi16Result = INT16_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
__inline HRESULT UIntPtrToUShort(UINT_PTR uOperand, USHORT *pusResult)
{
	HRESULT hr;
	if (uOperand <= USHORT_MAX)
	{
		*pusResult = (USHORT)uOperand;
		hr = S_OK;
	}
	else
	{
		*pusResult = USHORT_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}
	return hr;
}
__inline HRESULT UIntPtrToUInt16(UINT_PTR uOperand, UINT16 *pu16Result)
{
	HRESULT hr;

	if (uOperand <= UINT16_MAX)
	{
		*pu16Result = (UINT16)uOperand;
		hr = S_OK;
	}
	else
	{
		*pu16Result = UINT16_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#define UIntPtrToWord   UIntPtrToUShort
__inline HRESULT UIntPtrToInt(UINT_PTR uOperand, INT *piResult)
{
	HRESULT hr;
	if (uOperand <= INT_MAX)
	{
		*piResult = (INT)uOperand;
		hr = S_OK;
	}
	else
	{
		*piResult = INT_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}
	return hr;
}
#define UIntPtrToInt32  UIntPtrToInt
__inline HRESULT UIntPtrToIntPtr(UINT_PTR uOperand, INT_PTR *piResult)
{
	HRESULT hr;
	if (uOperand <= INT_PTR_MAX)
	{
		*piResult = (INT_PTR)uOperand;
		hr = S_OK;
	}
	else
	{
		*piResult = INT_PTR_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}
	return hr;
}
#ifdef _WIN64
#define UIntPtrToUInt   ULongLongToUInt
#else
__inline HRESULT UIntPtrToUInt(UINT_PTR uOperand, UINT *puResult)
{
	*puResult = (UINT)uOperand;
	return S_OK;
}
#endif
#define UIntPtrToUInt32 UIntPtrToUInt
__inline HRESULT UIntPtrToLong(UINT_PTR uOperand, LONG *plResult)
{
	HRESULT hr;
	if (uOperand <= LONG_MAX)
	{
		*plResult = (LONG)uOperand;
		hr = S_OK;
	}
	else
	{
		*plResult = LONG_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
__inline HRESULT UIntPtrToLongPtr(UINT_PTR uOperand, LONG_PTR *plResult)
{
	HRESULT hr;
	if (uOperand <= LONG_PTR_MAX)
	{
		*plResult = (LONG_PTR)uOperand;
		hr = S_OK;
	}
	else
	{
		*plResult = LONG_PTR_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#ifdef _WIN64
#define UIntPtrToULong  ULongLongToULong
#else
__inline HRESULT UIntPtrToULong(UINT_PTR uOperand, ULONG *pulResult)
{
	*pulResult = (ULONG)uOperand;
	return S_OK;
}
#endif
#define UIntPtrToDWord  UIntPtrToULong
#ifdef _WIN64
#define UIntPtrToLongLong   ULongLongToLongLong
#else
__inline HRESULT UIntPtrToLongLong(UINT_PTR uOperand, LONGLONG *pllResult)
{
	*pllResult = (LONGLONG)uOperand;
	return S_OK;
}
#endif
#define UIntPtrToLong64 UIntPtrToLongLong
#define UIntPtrToInt64  UIntPtrToLongLong
#define UIntPtrToPtrdiffT   UIntPtrToIntPtr
#define UIntPtrToSSIZET UIntPtrToLongPtr
__inline HRESULT LongToInt8(LONG lOperand, INT8 *pi8Result)
{
	HRESULT hr;

	if ((lOperand >= INT8_MIN) && (lOperand <= INT8_MAX))
	{
		*pi8Result = (INT8)lOperand;
		hr = S_OK;
	}
	else
	{
		*pi8Result = INT8_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
__inline HRESULT LongToUChar(LONG lOperand, UCHAR *pch)
{
	HRESULT hr;
	if ((lOperand >= 0) && (lOperand <= 255))
	{
		*pch = (UCHAR)lOperand;
		hr = S_OK;
	}
	else
	{
		*pch = '\0';
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}
	return hr;
}
__forceinline HRESULT LongToChar(LONG lOperand, CHAR *pch)
{
#ifdef _CHAR_UNSIGNED
	return LongToUChar(lOperand, (UCHAR *)pch);
#else
	return LongToInt8(lOperand, (INT8 *)pch);
#endif
}
__inline HRESULT LongToUInt8(LONG lOperand, UINT8 *pui8Result)
{
	HRESULT hr;

	if ((lOperand >= 0) && (lOperand <= UINT8_MAX))
	{
		*pui8Result = (UINT8)lOperand;
		hr = S_OK;
	}
	else
	{
		*pui8Result = UINT8_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#define LongToByte  LongToUInt8
__inline HRESULT LongToShort(LONG lOperand, SHORT *psResult)
{
	HRESULT hr;

	if ((lOperand >= SHORT_MIN) && (lOperand <= SHORT_MAX))
	{
		*psResult = (SHORT)lOperand;
		hr = S_OK;
	}
	else
	{
		*psResult = SHORT_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#define LongToInt16 LongToShort
__inline HRESULT LongToUShort(LONG lOperand, USHORT *pusResult)
{
	HRESULT hr;

	if ((lOperand >= 0) && (lOperand <= USHORT_MAX))
	{
		*pusResult = (USHORT)lOperand;
		hr = S_OK;
	}
	else
	{
		*pusResult = USHORT_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#define LongToUInt16    LongToUShort
#define LongToWord  LongToUShort
__inline HRESULT LongToInt(LONG lOperand, INT *piResult)
{
	C_ASSERT(sizeof(INT) == sizeof(LONG));
	*piResult = (INT)lOperand;
	return S_OK;
}
#define LongToInt32 LongToInt
#ifdef _WIN64
__inline HRESULT LongToIntPtr(LONG lOperand, INT_PTR *piResult)
{
	*piResult = lOperand;
	return S_OK;
}
#else
#define LongToIntPtr    LongToInt
#endif
__inline HRESULT LongToUInt(LONG lOperand, UINT *puResult)
{
	HRESULT hr;

	if (lOperand >= 0)
	{
		*puResult = (UINT)lOperand;
		hr = S_OK;
	}
	else
	{
		*puResult = UINT_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#define LongToUInt32    LongToUInt
#ifdef _WIN64
__inline HRESULT LongToUIntPtr(LONG lOperand, UINT_PTR *puResult)
{
	HRESULT hr;

	if (lOperand >= 0)
	{
		*puResult = (UINT_PTR)lOperand;
		hr = S_OK;
	}
	else
	{
		*puResult = UINT_PTR_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#else
#define LongToUIntPtr   LongToUInt
#endif
__inline HRESULT LongToULong(LONG lOperand, ULONG *pulResult)
{
	HRESULT hr;

	if (lOperand >= 0)
	{
		*pulResult = (ULONG)lOperand;
		hr = S_OK;
	}
	else
	{
		*pulResult = ULONG_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#ifdef _WIN64
__inline HRESULT LongToULongPtr(LONG lOperand, ULONG_PTR *pulResult)
{
	HRESULT hr;

	if (lOperand >= 0)
	{
		*pulResult = (ULONG_PTR)lOperand;
		hr = S_OK;
	}
	else
	{
		*pulResult = ULONG_PTR_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#else
#define LongToULongPtr  LongToULong
#endif
#define LongToDWord LongToULong
#define LongToDWordPtr  LongToULongPtr
__inline HRESULT LongToULongLong(LONG lOperand, ULONGLONG *pullResult)
{
	HRESULT hr;

	if (lOperand >= 0)
	{
		*pullResult = (ULONGLONG)lOperand;
		hr = S_OK;
	}
	else
	{
		*pullResult = ULONGLONG_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#define LongToDWordLong LongToULongLong
#define LongToULong64   LongToULongLong
#define LongToDWord64   LongToULongLong
#define LongToUInt64    LongToULongLong
#define LongToPtrdiffT  LongToIntPtr
#define LongToSizeT LongToUIntPtr
#define LongToSIZET LongToULongPtr
__inline HRESULT LongPtrToInt8(LONG_PTR lOperand, INT8 *pi8Result)
{
	HRESULT hr;

	if ((lOperand >= INT8_MIN) && (lOperand <= INT8_MAX))
	{
		*pi8Result = (INT8)lOperand;
		hr = S_OK;
	}
	else
	{
		*pi8Result = INT8_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
__inline HRESULT LongPtrToUChar(LONG_PTR lOperand, UCHAR *pch)
{
	HRESULT hr;

	if ((lOperand >= 0) && (lOperand <= 255))
	{
		*pch = (UCHAR)lOperand;
		hr = S_OK;
	}
	else
	{
		*pch = '\0';
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
__forceinline HRESULT LongPtrToChar(LONG_PTR lOperand, CHAR *pch)
{
#ifdef _CHAR_UNSIGNED
	return LongPtrToUChar(lOperand, (UCHAR *)pch);
#else
	return LongPtrToInt8(lOperand, (INT8 *)pch);
#endif
}
__inline HRESULT LongPtrToUInt8(LONG_PTR lOperand, UINT8 *pui8Result)
{
	HRESULT hr;

	if ((lOperand >= 0) && (lOperand <= UINT8_MAX))
	{
		*pui8Result = (UINT8)lOperand;
		hr = S_OK;
	}
	else
	{
		*pui8Result = UINT8_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#define LongPtrToByte   LongPtrToUInt8
__inline HRESULT LongPtrToShort(LONG_PTR lOperand, SHORT *psResult)
{
	HRESULT hr;

	if ((lOperand >= SHORT_MIN) && (lOperand <= SHORT_MAX))
	{
		*psResult = (SHORT)lOperand;
		hr = S_OK;
	}
	else
	{
		*psResult = SHORT_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#define LongPtrToInt16  LongPtrToShort
__inline HRESULT LongPtrToUShort(LONG_PTR lOperand, USHORT *pusResult)
{
	HRESULT hr;

	if ((lOperand >= 0) && (lOperand <= USHORT_MAX))
	{
		*pusResult = (USHORT)lOperand;
		hr = S_OK;
	}
	else
	{
		*pusResult = USHORT_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#define LongPtrToUInt16 LongPtrToUShort
#define LongPtrToWord   LongPtrToUShort
#ifdef _WIN64
#define LongPtrToInt    LongLongToInt
#else
__inline HRESULT LongPtrToInt(LONG_PTR lOperand, INT *piResult)
{
	C_ASSERT(sizeof(INT) == sizeof(LONG_PTR));
	*piResult = (INT)lOperand;
	return S_OK;
}
#endif
#define LongPtrToInt32  LongPtrToInt
__inline HRESULT LongPtrToIntPtr(LONG_PTR lOperand, INT_PTR *piResult)
{
	C_ASSERT(sizeof(LONG_PTR) == sizeof(INT_PTR));
	*piResult = (INT_PTR)lOperand;
	return S_OK;
}
#ifdef _WIN64
#define LongPtrToUInt   LongLongToUInt
#else
__inline HRESULT LongPtrToUInt(LONG_PTR lOperand, UINT *puResult)
{
	HRESULT hr;

	if (lOperand >= 0)
	{
		*puResult = (UINT)lOperand;
		hr = S_OK;
	}
	else
	{
		*puResult = UINT_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#endif
#define LongPtrToUInt32 LongPtrToUInt
__inline HRESULT LongPtrToUIntPtr(LONG_PTR lOperand, UINT_PTR *puResult)
{
	HRESULT hr;

	if (lOperand >= 0)
	{
		*puResult = (UINT_PTR)lOperand;
		hr = S_OK;
	}
	else
	{
		*puResult = UINT_PTR_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#ifdef _WIN64
#define LongPtrToLong   LongLongToLong
#else
__inline HRESULT LongPtrToLong(LONG_PTR lOperand, LONG *plResult)
{
	*plResult = (LONG)lOperand;
	return S_OK;
}
#endif
#ifdef _WIN64
#define LongPtrToULong  LongLongToULong
#else
__inline HRESULT LongPtrToULong(LONG_PTR lOperand, ULONG *pulResult)
{
	HRESULT hr;

	if (lOperand >= 0)
	{
		*pulResult = (ULONG)lOperand;
		hr = S_OK;
	}
	else
	{
		*pulResult = ULONG_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#endif
__inline HRESULT LongPtrToULongPtr(LONG_PTR lOperand, ULONG_PTR *pulResult)
{
	HRESULT hr;

	if (lOperand >= 0)
	{
		*pulResult = (ULONG_PTR)lOperand;
		hr = S_OK;
	}
	else
	{
		*pulResult = ULONG_PTR_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#define LongPtrToDWord  LongPtrToULong
#define LongPtrToDWordPtr   LongPtrToULongPtr
__inline HRESULT LongPtrToULongLong(LONG_PTR lOperand, ULONGLONG *pullResult)
{
	HRESULT hr;

	if (lOperand >= 0)
	{
		*pullResult = (ULONGLONG)lOperand;
		hr = S_OK;
	}
	else
	{
		*pullResult = ULONGLONG_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#define LongPtrToDWordLong  LongPtrToULongLong
#define LongPtrToULong64    LongPtrToULongLong
#define LongPtrToDWord64    LongPtrToULongLong
#define LongPtrToUInt64 LongPtrToULongLong
#define LongPtrToSizeT  LongPtrToUIntPtr
#define LongPtrToSIZET  LongPtrToULongPtr
__inline HRESULT ULongToInt8(ULONG ulOperand, INT8 *pi8Result)
{
	HRESULT hr;

	if (ulOperand <= INT8_MAX)
	{
		*pi8Result = (INT8)ulOperand;
		hr = S_OK;
	}
	else
	{
		*pi8Result = INT8_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
__inline HRESULT ULongToUChar(ULONG ulOperand, UCHAR *pch)
{
	HRESULT hr;
	if (ulOperand <= 255)
	{
		*pch = (UCHAR)ulOperand;
		hr = S_OK;
	}
	else
	{
		*pch = '\0';
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}
	return hr;
}
__forceinline HRESULT ULongToChar(ULONG ulOperand, CHAR *pch)
{
#ifdef _CHAR_UNSIGNED
	return ULongToUChar(ulOperand, (UCHAR *)pch);
#else
	return ULongToInt8(ulOperand, (INT8 *)pch);
#endif
}
__inline HRESULT ULongToUInt8(ULONG ulOperand, UINT8 *pui8Result)
{
	HRESULT hr;

	if (ulOperand <= UINT8_MAX)
	{
		*pui8Result = (UINT8)ulOperand;
		hr = S_OK;
	}
	else
	{
		*pui8Result = UINT8_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#define ULongToByte ULongToUInt8
__inline HRESULT ULongToShort(ULONG ulOperand, SHORT *psResult)
{
	HRESULT hr;
	if (ulOperand <= SHORT_MAX)
	{
		*psResult = (SHORT)ulOperand;
		hr = S_OK;
	}
	else
	{
		*psResult = SHORT_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}
	return hr;
}
#define ULongToInt16    ULongToShort
__inline HRESULT ULongToUShort(ULONG ulOperand, USHORT *pusResult)
{
	HRESULT hr;
	if (ulOperand <= USHORT_MAX)
	{
		*pusResult = (USHORT)ulOperand;
		hr = S_OK;
	}
	else
	{
		*pusResult = USHORT_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}
	return hr;
}
#define ULongToUInt16   ULongToUShort
#define ULongToWord ULongToUShort
__inline HRESULT ULongToInt(ULONG ulOperand, INT *piResult)
{
	HRESULT hr;

	if (ulOperand <= INT_MAX)
	{
		*piResult = (INT)ulOperand;
		hr = S_OK;
	}
	else
	{
		*piResult = INT_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#define ULongToInt32    ULongToInt
#ifdef _WIN64
__inline HRESULT ULongToIntPtr(ULONG ulOperand, INT_PTR *piResult)
{
	*piResult = (INT_PTR)ulOperand;
	return S_OK;
}
#else
#define ULongToIntPtr   ULongToInt
#endif
__inline HRESULT ULongToUInt(ULONG ulOperand, UINT *puResult)
{
	C_ASSERT(sizeof(ULONG) == sizeof(UINT));
	*puResult = (UINT)ulOperand;
	return S_OK;
}
#define ULongToUInt32   ULongToUInt
#ifdef _WIN64
__inline HRESULT ULongToUIntPtr(ULONG ulOperand, UINT_PTR *puiResult)
{
	C_ASSERT(sizeof(UINT_PTR) > sizeof(ULONG));
	*puiResult = (UINT_PTR)ulOperand;
	return S_OK;
}
#else
#define ULongToUIntPtr  ULongToUInt
#endif
__inline HRESULT ULongToLong(ULONG ulOperand, LONG *plResult)
{
	HRESULT hr;

	if (ulOperand <= LONG_MAX)
	{
		*plResult = (LONG)ulOperand;
		hr = S_OK;
	}
	else
	{
		*plResult = LONG_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#ifdef _WIN64
__inline HRESULT ULongToLongPtr(ULONG ulOperand, LONG_PTR *plResult)
{
	C_ASSERT(sizeof(LONG_PTR) > sizeof(ULONG));
	*plResult = (LONG_PTR)ulOperand;
	return S_OK;
}
#else
#define ULongToLongPtr  ULongToLong
#endif
#define ULongToPtrdiffT ULongToIntPtr
#define ULongToSSIZET   ULongToLongPtr
__inline HRESULT ULongPtrToInt8(ULONG_PTR ulOperand, INT8 *pi8Result)
{
	HRESULT hr;

	if (ulOperand <= INT8_MAX)
	{
		*pi8Result = (INT8)ulOperand;
		hr = S_OK;
	}
	else
	{
		*pi8Result = INT8_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
__inline HRESULT ULongPtrToUChar(ULONG_PTR ulOperand, UCHAR *pch)
{
	HRESULT hr;
	if (ulOperand <= 255)
	{
		*pch = (UCHAR)ulOperand;
		hr = S_OK;
	}
	else
	{
		*pch = '\0';
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}
	return hr;
}
__forceinline HRESULT ULongPtrToChar(ULONG_PTR ulOperand, CHAR *pch)
{
#ifdef _CHAR_UNSIGNED
	return ULongPtrToUChar(ulOperand, (UCHAR *)pch);
#else
	return ULongPtrToInt8(ulOperand, (INT8 *)pch);
#endif
}
__inline HRESULT ULongPtrToUInt8(ULONG_PTR ulOperand, UINT8 *pui8Result)
{
	HRESULT hr;

	if (ulOperand <= UINT8_MAX)
	{
		*pui8Result = (UINT8)ulOperand;
		hr = S_OK;
	}
	else
	{
		*pui8Result = UINT8_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#define ULongPtrToByte  ULongPtrToUInt8
__inline HRESULT ULongPtrToShort(ULONG_PTR ulOperand, SHORT *psResult)
{
	HRESULT hr;
	if (ulOperand <= SHORT_MAX)
	{
		*psResult = (SHORT)ulOperand;
		hr = S_OK;
	}
	else
	{
		*psResult = SHORT_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}
	return hr;
}
#define ULongPtrToInt16 ULongPtrToShort
__inline HRESULT ULongPtrToUShort(ULONG_PTR ulOperand, USHORT *pusResult)
{
	HRESULT hr;
	if (ulOperand <= USHORT_MAX)
	{
		*pusResult = (USHORT)ulOperand;
		hr = S_OK;
	}
	else
	{
		*pusResult = USHORT_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}
	return hr;
}
#define ULongPtrToUInt16    ULongPtrToUShort
#define ULongPtrToWord  ULongPtrToUShort
__inline HRESULT ULongPtrToInt(ULONG_PTR ulOperand, INT *piResult)
{
	HRESULT hr;

	if (ulOperand <= INT_MAX)
	{
		*piResult = (INT)ulOperand;
		hr = S_OK;
	}
	else
	{
		*piResult = INT_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#define ULongPtrToInt32 ULongPtrToInt
__inline HRESULT ULongPtrToIntPtr(ULONG_PTR ulOperand, INT_PTR *piResult)
{
	HRESULT hr;

	if (ulOperand <= INT_PTR_MAX)
	{
		*piResult = (INT_PTR)ulOperand;
		hr = S_OK;
	}
	else
	{
		*piResult = INT_PTR_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#ifdef _WIN64
#define ULongPtrToUInt  ULongLongToUInt
#else
__inline HRESULT ULongPtrToUInt(ULONG_PTR ulOperand, UINT *puResult)
{
	C_ASSERT(sizeof(ULONG_PTR) == sizeof(UINT));
	*puResult = (UINT)ulOperand;
	return S_OK;
}
#endif
#define ULongPtrToUInt32    ULongPtrToUInt
__inline HRESULT ULongPtrToUIntPtr(ULONG_PTR ulOperand, UINT_PTR *puResult)
{
	*puResult = (UINT_PTR)ulOperand;
	return S_OK;
}
__inline HRESULT ULongPtrToLong(ULONG_PTR ulOperand, LONG *plResult)
{
	HRESULT hr;

	if (ulOperand <= LONG_MAX)
	{
		*plResult = (LONG)ulOperand;
		hr = S_OK;
	}
	else
	{
		*plResult = LONG_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
__inline HRESULT ULongPtrToLongPtr(ULONG_PTR ulOperand, LONG_PTR *plResult)
{
	HRESULT hr;

	if (ulOperand <= LONG_PTR_MAX)
	{
		*plResult = (LONG_PTR)ulOperand;
		hr = S_OK;
	}
	else
	{
		*plResult = LONG_PTR_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#ifdef _WIN64
#define ULongPtrToULong ULongLongToULong
#else
__inline HRESULT ULongPtrToULong(ULONG_PTR ulOperand, ULONG *pulResult)
{
	*pulResult = (ULONG)ulOperand;
	return S_OK;
}
#endif
#define ULongPtrToDWord ULongPtrToULong
#ifdef _WIN64
#define ULongPtrToLongLong  ULongLongToLongLong
#else
__inline HRESULT ULongPtrToLongLong(ULONG_PTR ulOperand, LONGLONG *pllResult)
{
	*pllResult = (LONGLONG)ulOperand;
	return S_OK;
}
#endif
#define ULongPtrToLong64    ULongPtrToLongLong
#define ULongPtrToInt64 ULongPtrToLongLong
#define ULongPtrToPtrdiffT  ULongPtrToIntPtr
#define ULongPtrToSSIZET    ULongPtrToLongPtr
#define DWordToInt8 ULongToInt8
#define DWordToChar ULongToChar
#define DWordToUChar    ULongToUChar
#define DWordToUInt8    ULongToUInt8
#define DWordToByte ULongToUInt8
#define DWordToShort    ULongToShort
#define DWordToInt16    ULongToShort
#define DWordToUShort   ULongToUShort
#define DWordToUInt16   ULongToUShort
#define DWordToWord ULongToUShort
#define DWordToInt  ULongToInt
#define DWordToInt32    ULongToInt
#define DWordToIntPtr   ULongToIntPtr
#define DWordToUInt ULongToUInt
#define DWordToUInt32   ULongToUInt
#define DWordToUIntPtr  ULongToUIntPtr
#define DWordToLong ULongToLong
#define DWordToLongPtr  ULongToLongPtr
#define DWordToPtrdiffT ULongToIntPtr
#define DWordToSSIZET   ULongToLongPtr
#define DWordPtrToInt8  ULongPtrToInt8
#define DWordPtrToUChar ULongPtrToUChar
#define DWordPtrToChar  ULongPtrToChar
#define DWordPtrToUInt8 ULongPtrToUInt8
#define DWordPtrToByte  ULongPtrToUInt8
#define DWordPtrToShort ULongPtrToShort
#define DWordPtrToInt16 ULongPtrToShort
#define DWordPtrToUShort    ULongPtrToUShort
#define DWordPtrToUInt16    ULongPtrToUShort
#define DWordPtrToWord  ULongPtrToUShort
#define DWordPtrToInt   ULongPtrToInt
#define DWordPtrToInt32 ULongPtrToInt
#define DWordPtrToIntPtr    ULongPtrToIntPtr
#define DWordPtrToUInt  ULongPtrToUInt
#define DWordPtrToUInt32    ULongPtrToUInt
#define DWordPtrToUIntPtr   ULongPtrToUIntPtr
#define DWordPtrToLong  ULongPtrToLong
#define DWordPtrToLongPtr   ULongPtrToLongPtr
#define DWordPtrToULong ULongPtrToULong
#define DWordPtrToDWord ULongPtrToULong
#define DWordPtrToLongLong  ULongPtrToLongLong
#define DWordPtrToLong64    ULongPtrToLongLong
#define DWordPtrToInt64 ULongPtrToLongLong
#define DWordPtrToPtrdiffT  ULongPtrToIntPtr
#define DWordPtrToSSIZET    ULongPtrToLongPtr
__inline HRESULT LongLongToInt8(LONGLONG llOperand, INT8 *pi8Result)
{
	HRESULT hr;

	if ((llOperand >= INT8_MIN) && (llOperand <= INT8_MAX))
	{
		*pi8Result = (INT8)llOperand;
		hr = S_OK;
	}
	else
	{
		*pi8Result = INT8_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}
	return hr;
}
__inline HRESULT LongLongToUChar(LONGLONG llOperand, UCHAR *pch)
{
	HRESULT hr;
	if ((llOperand >= 0) && (llOperand <= 255))
	{
		*pch = (UCHAR)llOperand;
		hr = S_OK;
	}
	else
	{
		*pch = '\0';
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
__forceinline HRESULT LongLongToChar(LONGLONG llOperand, CHAR *pch)
{
#ifdef _CHAR_UNSIGNED
	return LongLongToUChar(llOperand, (UCHAR *)pch);
#else
	return LongLongToInt8(llOperand, (INT8 *)pch);
#endif
}
__inline HRESULT LongLongToUInt8(LONGLONG llOperand, UINT8 *pu8Result)
{
	HRESULT hr;

	if ((llOperand >= 0) && (llOperand <= UINT8_MAX))
	{
		*pu8Result = (UINT8)llOperand;
		hr = S_OK;
	}
	else
	{
		*pu8Result = UINT8_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#define LongLongToByte  LongLongToUInt8
__inline HRESULT LongLongToShort(LONGLONG llOperand, SHORT *psResult)
{
	HRESULT hr;

	if ((llOperand >= SHORT_MIN) && (llOperand <= SHORT_MAX))
	{
		*psResult = (SHORT)llOperand;
		hr = S_OK;
	}
	else
	{
		*psResult = SHORT_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#define LongLongToInt16 LongLongToShort
__inline HRESULT LongLongToUShort(LONGLONG llOperand, USHORT *pusResult)
{
	HRESULT hr;

	if ((llOperand >= 0) && (llOperand <= USHORT_MAX))
	{
		*pusResult = (USHORT)llOperand;
		hr = S_OK;
	}
	else
	{
		*pusResult = USHORT_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#define LongLongToUInt16    LongLongToUShort
#define LongLongToWord  LongLongToUShort
__inline HRESULT LongLongToInt(LONGLONG llOperand, INT *piResult)
{
	HRESULT hr;

	if ((llOperand >= INT_MIN) && (llOperand <= INT_MAX))
	{
		*piResult = (INT)llOperand;
		hr = S_OK;
	}
	else
	{
		*piResult = INT_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#define LongLongToInt32 LongLongToInt
#ifdef _WIN64
__inline HRESULT LongLongToIntPtr(LONGLONG llOperand, INT_PTR *piResult)
{
	*piResult = llOperand;
	return S_OK;
}
#else
#define LongLongToIntPtr   LongLongToInt
#endif
__inline HRESULT LongLongToUInt(LONGLONG llOperand, UINT *puResult)
{
	HRESULT hr;

	if ((llOperand >= 0) && (llOperand <= UINT_MAX))
	{
		*puResult = (UINT)llOperand;
		hr = S_OK;
	}
	else
	{
		*puResult = UINT_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#define LongLongToUInt32    LongLongToUInt
#ifdef _WIN64
#define LongLongToUIntPtr  LongLongToULongLong
#else
#define LongLongToUIntPtr  LongLongToUInt
#endif
__inline HRESULT LongLongToLong(LONGLONG llOperand, LONG *plResult)
{
	HRESULT hr;

	if ((llOperand >= LONG_MIN) && (llOperand <= LONG_MAX))
	{
		*plResult = (LONG)llOperand;
		hr = S_OK;
	}
	else
	{
		*plResult = LONG_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#ifdef _WIN64
__inline HRESULT LongLongToLongPtr(LONGLONG llOperand, LONG_PTR *plResult)
{
	*plResult = (LONG_PTR)llOperand;
	return S_OK;
}
#else
#define LongLongToLongPtr  LongLongToLong
#endif
__inline HRESULT LongLongToULong(LONGLONG llOperand, ULONG *pulResult)
{
	HRESULT hr;

	if ((llOperand >= 0) && (llOperand <= ULONG_MAX))
	{
		*pulResult = (ULONG)llOperand;
		hr = S_OK;
	}
	else
	{
		*pulResult = ULONG_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#ifdef _WIN64
#define LongLongToULongPtr LongLongToULongLong
#else
#define LongLongToULongPtr LongLongToULong
#endif
#define LongLongToDWord    LongLongToULong
#define LongLongToDWordPtr LongLongToULongPtr
__inline HRESULT LongLongToULongLong(LONGLONG llOperand, ULONGLONG *pullResult)
{
	HRESULT hr;

	if (llOperand >= 0)
	{
		*pullResult = (ULONGLONG)llOperand;
		hr = S_OK;
	}
	else
	{
		*pullResult = ULONGLONG_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#define LongLongToDWordLong LongLongToULongLong
#define LongLongToULong64   LongLongToULongLong
#define LongLongToDWord64   LongLongToULongLong
#define LongLongToUInt64    LongLongToULongLong
#define LongLongToPtrdiffT LongLongToIntPtr
#define LongLongToSizeT    LongLongToUIntPtr
#define LongLongToSSIZET   LongLongToLongPtr
#define LongLongToSIZET    LongLongToULongPtr
#define Long64ToChar    LongLongToChar
#define Long64ToInt8    LongLongToInt8
#define Long64ToUChar   LongLongToUChar
#define Long64ToUInt8   LongLongToUInt8
#define Long64ToByte    LongLongToUInt8
#define Long64ToShort   LongLongToShort
#define Long64ToInt16   LongLongToShort
#define Long64ToUShort  LongLongToUShort
#define Long64ToUInt16  LongLongToUShort
#define Long64ToWord    LongLongToUShort
#define Long64ToInt LongLongToInt
#define Long64ToInt32   LongLongToInt
#define Long64ToIntPtr  LongLongToIntPtr
#define Long64ToUInt    LongLongToUInt
#define Long64ToUInt32  LongLongToUInt
#define Long64ToUIntPtr LongLongToUIntPtr
#define Long64ToLong    LongLongToLong
#define Long64ToLongPtr LongLongToLongPtr
#define Long64ToULong   LongLongToULong
#define Long64ToULongPtr    LongLongToULongPtr
#define Long64ToDWord   LongLongToULong
#define Long64ToDWordPtr    LongLongToULongPtr
#define Long64ToULongLong   LongLongToULongLong
#define Long64ToPtrdiffT    LongLongToIntPtr
#define Long64ToSizeT   LongLongToUIntPtr
#define Long64ToSSIZET  LongLongToLongPtr
#define Long64ToSIZET   LongLongToULongPtr
#define Int64ToChar LongLongToChar
#define Int64ToInt8 LongLongToInt8
#define Int64ToUChar    LongLongToUChar
#define Int64ToUInt8    LongLongToUInt8
#define Int64ToByte LongLongToUInt8
#define Int64ToShort    LongLongToShort
#define Int64ToInt16    LongLongToShort
#define Int64ToUShort   LongLongToUShort
#define Int64ToUInt16   LongLongToUShort
#define Int64ToWord LongLongToUShort
#define Int64ToInt  LongLongToInt
#define Int64ToInt32    LongLongToInt
#define Int64ToIntPtr   LongLongToIntPtr
#define Int64ToUInt LongLongToUInt
#define Int64ToUInt32   LongLongToUInt
#define Int64ToUIntPtr  LongLongToUIntPtr
#define Int64ToLong LongLongToLong
#define Int64ToLongPtr  LongLongToLongPtr
#define Int64ToULong    LongLongToULong
#define Int64ToULongPtr LongLongToULongPtr
#define Int64ToDWord    LongLongToULong
#define Int64ToDWordPtr LongLongToULongPtr
#define Int64ToULongLong    LongLongToULongLong
#define Int64ToDWordLong    LongLongToULongLong
#define Int64ToULong64  LongLongToULongLong
#define Int64ToDWord64  LongLongToULongLong
#define Int64ToUInt64   LongLongToULongLong
#define Int64ToPtrdiffT LongLongToIntPtr
#define Int64ToSizeT    LongLongToUIntPtr
#define Int64ToSSIZET   LongLongToLongPtr
#define Int64ToSIZET    LongLongToULongPtr
__inline HRESULT ULongLongToInt8(ULONGLONG ullOperand, INT8 *pi8Result)
{
	HRESULT hr;

	if (ullOperand <= INT8_MAX)
	{
		*pi8Result = (INT8)ullOperand;
		hr = S_OK;
	}
	else
	{
		*pi8Result = INT8_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
__inline HRESULT ULongLongToUChar(ULONGLONG ullOperand, UCHAR *pch)
{
	HRESULT hr;

	if (ullOperand <= 255)
	{
		*pch = (UCHAR)ullOperand;
		hr = S_OK;
	}
	else
	{
		*pch = '\0';
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
__forceinline HRESULT ULongLongToChar(ULONGLONG ullOperand, CHAR *pch)
{
#ifdef _CHAR_UNSIGNED
	return ULongLongToUChar(ullOperand, (UCHAR *)pch);
#else
	return ULongLongToInt8(ullOperand, (INT8 *)pch);
#endif
}
__inline HRESULT ULongLongToUInt8(ULONGLONG ullOperand, UINT8 *pu8Result)
{
	HRESULT hr;

	if (ullOperand <= UINT8_MAX)
	{
		*pu8Result = (UINT8)ullOperand;
		hr = S_OK;
	}
	else
	{
		*pu8Result = UINT8_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#define ULongLongToByte ULongLongToUInt8
__inline HRESULT ULongLongToShort(ULONGLONG ullOperand, SHORT *psResult)
{
	HRESULT hr;

	if (ullOperand <= SHORT_MAX)
	{
		*psResult = (SHORT)ullOperand;
		hr = S_OK;
	}
	else
	{
		*psResult = SHORT_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#define ULongLongToInt16    ULongLongToShort
__inline HRESULT ULongLongToUShort(ULONGLONG ullOperand, USHORT *pusResult)
{
	HRESULT hr;

	if (ullOperand <= USHORT_MAX)
	{
		*pusResult = (USHORT)ullOperand;
		hr = S_OK;
	}
	else
	{
		*pusResult = USHORT_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#define ULongLongToUInt16   ULongLongToUShort
#define ULongLongToWord ULongLongToUShort
__inline HRESULT ULongLongToInt(ULONGLONG ullOperand, INT *piResult)
{
	HRESULT hr;

	if (ullOperand <= INT_MAX)
	{
		*piResult = (INT)ullOperand;
		hr = S_OK;
	}
	else
	{
		*piResult = INT_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#define ULongLongToInt32    ULongLongToInt
#ifdef _WIN64
#define ULongLongToIntPtr   ULongLongToLongLong
#else
#define ULongLongToIntPtr   ULongLongToInt
#endif
__inline HRESULT ULongLongToUInt(ULONGLONG ullOperand, UINT *puResult)
{
	HRESULT hr;

	if (ullOperand <= UINT_MAX)
	{
		*puResult = (UINT)ullOperand;
		hr = S_OK;
	}
	else
	{
		*puResult = UINT_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#define ULongLongToUInt32   ULongLongToUInt
#ifdef _WIN64
__inline HRESULT ULongLongToUIntPtr(ULONGLONG ullOperand, UINT_PTR *puResult)
{
	*puResult = ullOperand;
	return S_OK;
}
#else
#define ULongLongToUIntPtr  ULongLongToUInt
#endif
__inline HRESULT ULongLongToLong(ULONGLONG ullOperand, LONG *plResult)
{
	HRESULT hr;

	if (ullOperand <= LONG_MAX)
	{
		*plResult = (LONG)ullOperand;
		hr = S_OK;
	}
	else
	{
		*plResult = LONG_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
__inline HRESULT ULongLongToLongPtr(ULONGLONG ullOperand, LONG_PTR *plResult)
{
	HRESULT hr;

	if (ullOperand <= LONG_PTR_MAX)
	{
		*plResult = (LONG_PTR)ullOperand;
		hr = S_OK;
	}
	else
	{
		*plResult = LONG_PTR_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
__inline HRESULT ULongLongToULong(ULONGLONG ullOperand, ULONG *pulResult)
{
	HRESULT hr;

	if (ullOperand <= ULONG_MAX)
	{
		*pulResult = (ULONG)ullOperand;
		hr = S_OK;
	}
	else
	{
		*pulResult = ULONG_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#ifdef _WIN64
__inline HRESULT ULongLongToULongPtr(ULONGLONG ullOperand, ULONG_PTR *pulResult)
{
	*pulResult = ullOperand;
	return S_OK;
}
#else
#define ULongLongToULongPtr ULongLongToULong
#endif
#define ULongLongToDWord    ULongLongToULong
#define ULongLongToDWordPtr ULongLongToULongPtr
__inline HRESULT ULongLongToLongLong(ULONGLONG ullOperand, LONGLONG *pllResult)
{
	HRESULT hr;

	if (ullOperand <= LONGLONG_MAX)
	{
		*pllResult = (LONGLONG)ullOperand;
		hr = S_OK;
	}
	else
	{
		*pllResult = LONGLONG_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#define ULongLongToInt64    ULongLongToLongLong
#define ULongLongToLong64   ULongLongToLongLong
#define ULongLongToPtrdiffT ULongLongToIntPtr
#define ULongLongToSizeT    ULongLongToUIntPtr
#define ULongLongToSSIZET   ULongLongToLongPtr
#define ULongLongToSIZET    ULongLongToULongPtr
#define DWordLongToChar ULongLongToChar
#define DWordLongToInt8 ULongLongToInt8
#define DWordLongToUChar    ULongLongToUChar
#define DWordLongToUInt8    ULongLongToUInt8
#define DWordLongToByte ULongLongToUInt8
#define DWordLongToShort    ULongLongToShort
#define DWordLongToInt16    ULongLongToShort
#define DWordLongToUShort   ULongLongToUShort
#define DWordLongToUInt16   ULongLongToUShort
#define DWordLongToWord ULongLongToUShort
#define DWordLongToInt  ULongLongToInt
#define DWordLongToInt32    ULongLongToInt
#define DWordLongToIntPtr   ULongLongToIntPtr
#define DWordLongToUInt ULongLongToUInt
#define DWordLongToUInt32   ULongLongToUInt
#define DWordLongToUIntPtr  ULongLongToUIntPtr
#define DWordLongToLong ULongLongToLong
#define DWordLongToLongPtr  ULongLongToLongPtr
#define DWordLongToULong    ULongLongToULong
#define DWordLongToULongPtr ULongLongToULongPtr
#define DWordLongToDWord    ULongLongToULong
#define DWordLongToDWordPtr ULongLongToULongPtr
#define DWordLongToLongLong ULongLongToLongLong
#define DWordLongToLong64   ULongLongToLongLong
#define DWordLongToInt64    ULongLongToLongLong
#define DWordLongToPtrdiffT ULongLongToIntPtr
#define DWordLongToSizeT    ULongLongToUIntPtr
#define DWordLongToSSIZET   ULongLongToLongPtr
#define DWordLongToSIZET    ULongLongToULongPtr
#define ULong64ToChar   ULongLongToChar
#define ULong64ToInt8   ULongLongToInt8
#define ULong64ToUChar  ULongLongToUChar
#define ULong64ToUInt8  ULongLongToUInt8
#define ULong64ToByte   ULongLongToUInt8
#define ULong64ToShort  ULongLongToShort
#define ULong64ToInt16  ULongLongToShort
#define ULong64ToUShort ULongLongToUShort
#define ULong64ToUInt16 ULongLongToUShort
#define ULong64ToWord   ULongLongToUShort
#define ULong64ToInt    ULongLongToInt
#define ULong64ToInt32  ULongLongToInt
#define ULong64ToIntPtr ULongLongToIntPtr
#define ULong64ToUInt   ULongLongToUInt
#define ULong64ToUInt32 ULongLongToUInt
#define ULong64ToUIntPtr    ULongLongToUIntPtr
#define ULong64ToLong   ULongLongToLong
#define ULong64ToLongPtr    ULongLongToLongPtr
#define ULong64ToULong  ULongLongToULong
#define ULong64ToULongPtr   ULongLongToULongPtr
#define ULong64ToDWord  ULongLongToULong
#define ULong64ToDWordPtr   ULongLongToULongPtr
#define ULong64ToLongLong   ULongLongToLongLong
#define ULong64ToLong64 ULongLongToLongLong
#define ULong64ToInt64  ULongLongToLongLong
#define ULong64ToPtrdiffT   ULongLongToIntPtr
#define ULong64ToSizeT  ULongLongToUIntPtr
#define ULong64ToSSIZET ULongLongToLongPtr
#define ULong64ToSIZET  ULongLongToULongPtr
#define DWord64ToChar   ULongLongToChar
#define DWord64ToInt8   ULongLongToInt8
#define DWord64ToUChar  ULongLongToUChar
#define DWord64ToUInt8  ULongLongToUInt8
#define DWord64ToByte   ULongLongToUInt8
#define DWord64ToShort  ULongLongToShort
#define DWord64ToInt16  ULongLongToShort
#define DWord64ToUShort ULongLongToUShort
#define DWord64ToUInt16 ULongLongToUShort
#define DWord64ToWord   ULongLongToUShort
#define DWord64ToInt    ULongLongToInt
#define DWord64ToInt32  ULongLongToInt
#define DWord64ToIntPtr ULongLongToIntPtr
#define DWord64ToUInt   ULongLongToUInt
#define DWord64ToUInt32 ULongLongToUInt
#define DWord64ToUIntPtr    ULongLongToUIntPtr
#define DWord64ToLong   ULongLongToLong
#define DWord64ToLongPtr    ULongLongToLongPtr
#define DWord64ToULong  ULongLongToULong
#define DWord64ToULongPtr   ULongLongToULongPtr
#define DWord64ToDWord  ULongLongToULong
#define DWord64ToDWordPtr   ULongLongToULongPtr
#define DWord64ToLongLong   ULongLongToLongLong
#define DWord64ToLong64 ULongLongToLongLong
#define DWord64ToInt64  ULongLongToLongLong
#define DWord64ToPtrdiffT   ULongLongToIntPtr
#define DWord64ToSizeT  ULongLongToUIntPtr
#define DWord64ToSSIZET ULongLongToLongPtr
#define DWord64ToSIZET  ULongLongToULongPtr
#define UInt64ToChar    ULongLongToChar
#define UInt64ToInt8    ULongLongToInt8
#define UInt64ToUChar   ULongLongToUChar
#define UInt64ToUInt8   ULongLongToUInt8
#define UInt64ToByte    ULongLongToUInt8
#define UInt64ToShort   ULongLongToShort
#define UInt64ToInt16   ULongLongToShort
#define UInt64ToUShort  ULongLongToUShort
#define UInt64ToUInt16  ULongLongToUShort
#define UInt64ToWord    ULongLongToUShort
#define UInt64ToInt ULongLongToInt
#define UInt64ToInt32   ULongLongToInt
#define UInt64ToIntPtr  ULongLongToIntPtr
#define UInt64ToUInt    ULongLongToUInt
#define UInt64ToUInt32  ULongLongToUInt
#define UInt64ToUIntPtr ULongLongToUIntPtr
#define UInt64ToLong    ULongLongToLong
#define UInt64ToLongPtr ULongLongToLongPtr
#define UInt64ToULong   ULongLongToULong
#define UInt64ToULongPtr    ULongLongToULongPtr
#define UInt64ToDWord   ULongLongToULong
#define UInt64ToDWordPtr    ULongLongToULongPtr
#define UInt64ToLongLong    ULongLongToLongLong
#define UInt64ToLong64  ULongLongToLongLong
#define UInt64ToInt64   ULongLongToLongLong
#define UInt64ToPtrdiffT    ULongLongToIntPtr
#define UInt64ToSizeT   ULongLongToUIntPtr
#define UInt64ToSSIZET  ULongLongToLongPtr
#define UInt64ToSIZET  ULongLongToULongPtr
#define PtrdiffTToChar  IntPtrToChar
#define PtrdiffTToInt8  IntPtrToInt8
#define PtrdiffTToUChar IntPtrToUChar
#define PtrdiffTToUInt8 IntPtrToUInt8
#define PtrdiffTToByte  IntPtrToUInt8
#define PtrdiffTToShort IntPtrToShort
#define PtrdiffTToInt16 IntPtrToShort
#define PtrdiffTToUShort    IntPtrToUShort
#define PtrdiffTToUInt16    IntPtrToUShort
#define PtrdiffTToWord  IntPtrToUShort
#define PtrdiffTToInt   IntPtrToInt
#define PtrdiffTToInt32 IntPtrToInt
#define PtrdiffTToUInt  IntPtrToUInt
#define PtrdiffTToUInt32    IntPtrToUInt
#define PtrdiffTToUIntPtr   IntPtrToUIntPtr
#define PtrdiffTToLong  IntPtrToLong
#define PtrdiffTToLongPtr   IntPtrToLongPtr
#define PtrdiffTToULong IntPtrToULong
#define PtrdiffTToULongPtr  IntPtrToULongPtr
#define PtrdiffTToDWord IntPtrToULong
#define PtrdiffTToDWordPtr  IntPtrToULongPtr
#define PtrdiffTToULongLong IntPtrToULongLong
#define PtrdiffTToDWordLong IntPtrToULongLong
#define PtrdiffTToULong64   IntPtrToULongLong
#define PtrdiffTToDWord64   IntPtrToULongLong
#define PtrdiffTToUInt64    IntPtrToULongLong
#define PtrdiffTToSizeT IntPtrToUIntPtr
#define PtrdiffTToSIZET IntPtrToULongPtr
#define SizeTToInt8 UIntPtrToInt8
#define SizeTToUChar    UIntPtrToUChar
#define SizeTToChar UIntPtrToChar
#define SizeTToUInt8    UIntPtrToUInt8
#define SizeTToByte UIntPtrToUInt8
#define SizeTToShort    UIntPtrToShort
#define SizeTToInt16    UIntPtrToShort
#define SizeTToUShort   UIntPtrToUShort
#define SizeTToUInt16   UIntPtrToUShort
#define SizeTToWord UIntPtrToUShort
#define SizeTToInt  UIntPtrToInt
#define SizeTToInt32    UIntPtrToInt
#define SizeTToIntPtr   UIntPtrToIntPtr
#define SizeTToUInt UIntPtrToUInt
#define SizeTToUInt32   UIntPtrToUInt
#define SizeTToLong UIntPtrToLong
#define SizeTToLongPtr  UIntPtrToLongPtr
#define SizeTToULong    UIntPtrToULong
#define SizeTToDWord    UIntPtrToULong
#define SizeTToLongLong UIntPtrToLongLong
#define SizeTToLong64   UIntPtrToLongLong
#define SizeTToInt64    UIntPtrToLongLong
#define SizeTToPtrdiffT UIntPtrToIntPtr
#define SizeTToSSIZET   UIntPtrToLongPtr
#define SSIZETToInt8    LongPtrToInt8
#define SSIZETToUChar   LongPtrToUChar
#define SSIZETToChar    LongPtrToChar
#define SSIZETToUInt8   LongPtrToUInt8
#define SSIZETToByte    LongPtrToUInt8
#define SSIZETToShort   LongPtrToShort
#define SSIZETToInt16   LongPtrToShort
#define SSIZETToUShort  LongPtrToUShort
#define SSIZETToUInt16  LongPtrToUShort
#define SSIZETToWord    LongPtrToUShort
#define SSIZETToInt LongPtrToInt
#define SSIZETToInt32   LongPtrToInt
#define SSIZETToIntPtr  LongPtrToIntPtr
#define SSIZETToUInt    LongPtrToUInt
#define SSIZETToUInt32  LongPtrToUInt
#define SSIZETToUIntPtr LongPtrToUIntPtr
#define SSIZETToLong    LongPtrToLong
#define SSIZETToULong   LongPtrToULong
#define SSIZETToULongPtr    LongPtrToULongPtr
#define SSIZETToDWord   LongPtrToULong
#define SSIZETToDWordPtr    LongPtrToULongPtr
#define SSIZETToULongLong   LongPtrToULongLong
#define SSIZETToDWordLong   LongPtrToULongLong
#define SSIZETToULong64 LongPtrToULongLong
#define SSIZETToDWord64 LongPtrToULongLong
#define SSIZETToUInt64  LongPtrToULongLong
#define SSIZETToSizeT   LongPtrToUIntPtr
#define SSIZETToSIZET   LongPtrToULongPtr
#define SIZETToInt8 ULongPtrToInt8
#define SIZETToUChar    ULongPtrToUChar
#define SIZETToChar ULongPtrToChar
#define SIZETToUInt8    ULongPtrToUInt8
#define SIZETToByte ULongPtrToUInt8
#define SIZETToShort    ULongPtrToShort
#define SIZETToInt16    ULongPtrToShort
#define SIZETToUShort   ULongPtrToUShort
#define SIZETToUInt16   ULongPtrToUShort
#define SIZETToWord ULongPtrToUShort
#define SIZETToInt  ULongPtrToInt
#define SIZETToInt32    ULongPtrToInt
#define SIZETToIntPtr   ULongPtrToIntPtr
#define SIZETToUInt ULongPtrToUInt
#define SIZETToUInt32   ULongPtrToUInt
#define SIZETToUIntPtr  ULongPtrToUIntPtr
#define SIZETToLong ULongPtrToLong
#define SIZETToLongPtr  ULongPtrToLongPtr
#define SIZETToULong    ULongPtrToULong
#define SIZETToDWord    ULongPtrToULong
#define SIZETToLongLong ULongPtrToLongLong
#define SIZETToLong64   ULongPtrToLongLong
#define SIZETToInt64    ULongPtrToLongLong
#define SIZETToPtrdiffT ULongPtrToIntPtr
#define SIZETToSSIZET   ULongPtrToLongPtr
__inline HRESULT UInt8Add(UINT8 u8Augend, UINT8 u8Addend, UINT8 *pu8Result)
{
	HRESULT hr;
	if (((UINT8) (u8Augend + u8Addend)) >= u8Augend)
	{
		*pu8Result = (UINT8) (u8Augend + u8Addend);
		hr = S_OK;
	}
	else
	{
		*pu8Result = UINT8_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
__inline HRESULT UShortAdd(USHORT usAugend, USHORT usAddend, USHORT *pusResult)
{
	HRESULT hr;
	if (((USHORT) (usAugend + usAddend)) >= usAugend)
	{
		*pusResult = (USHORT) (usAugend + usAddend);
		hr = S_OK;
	}
	else
	{
		*pusResult = USHORT_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#define UInt16Add   UShortAdd
#define WordAdd     UShortAdd
__inline HRESULT UIntAdd(UINT uAugend, UINT uAddend, UINT *puResult)
{
	HRESULT hr;
	if ((uAugend + uAddend) >= uAugend)
	{
		*puResult = (uAugend + uAddend);
		hr = S_OK;
	}
	else
	{
		*puResult = UINT_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#define UInt32Add   UIntAdd
#ifdef _WIN64
#define UIntPtrAdd      ULongLongAdd
#else
__inline HRESULT UIntPtrAdd(UINT_PTR uAugend, UINT_PTR uAddend, UINT_PTR *puResult)
{
	HRESULT hr;
	if ((uAugend + uAddend) >= uAugend)
	{
		*puResult = (uAugend + uAddend);
		hr = S_OK;
	}
	else
	{
		*puResult = UINT_PTR_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#endif
__inline HRESULT ULongAdd(ULONG ulAugend, ULONG ulAddend, ULONG *pulResult)
{
	HRESULT hr;
	if ((ulAugend + ulAddend) >= ulAugend)
	{
		*pulResult = (ulAugend + ulAddend);
		hr = S_OK;
	}
	else
	{
		*pulResult = ULONG_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#ifdef _WIN64
#define ULongPtrAdd     ULongLongAdd
#else
__inline HRESULT ULongPtrAdd(ULONG_PTR ulAugend, ULONG_PTR ulAddend, ULONG_PTR *pulResult)
{
	HRESULT hr;
	if ((ulAugend + ulAddend) >= ulAugend)
	{
		*pulResult = (ulAugend + ulAddend);
		hr = S_OK;
	}
	else
	{
		*pulResult = ULONG_PTR_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#endif
#define DWordAdd        ULongAdd
#ifdef _WIN64
#define DWordPtrAdd     ULongLongAdd
#else
__inline HRESULT DWordPtrAdd(DWORD_PTR dwAugend, DWORD_PTR dwAddend, DWORD_PTR *pdwResult)
{
	HRESULT hr;
	if ((dwAugend + dwAddend) >= dwAugend)
	{
		*pdwResult = (dwAugend + dwAddend);
		hr = S_OK;
	}
	else
	{
		*pdwResult = DWORD_PTR_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#endif
__inline HRESULT SizeTAdd(size_t Augend, size_t Addend, size_t *pResult)
{
	HRESULT hr;
	if ((Augend + Addend) >= Augend)
	{
		*pResult = (Augend + Addend);
		hr = S_OK;
	}
	else
	{
		*pResult = SIZE_T_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#ifdef _WIN64
#define SIZETAdd      ULongLongAdd
#else
__inline HRESULT SIZETAdd(SIZE_T Augend, SIZE_T Addend, SIZE_T *pResult)
{
	HRESULT hr;
	if ((Augend + Addend) >= Augend)
	{
		*pResult = (Augend + Addend);
		hr = S_OK;
	}
	else
	{
		*pResult = _SIZE_T_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#endif
__inline HRESULT ULongLongAdd(ULONGLONG ullAugend, ULONGLONG ullAddend, ULONGLONG *pullResult)
{
	HRESULT hr;
	if ((ullAugend + ullAddend) >= ullAugend)
	{
		*pullResult = (ullAugend + ullAddend);
		hr = S_OK;
	}
	else
	{
		*pullResult = ULONGLONG_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#define DWordLongAdd    ULongLongAdd
#define ULong64Add  ULongLongAdd
#define DWord64Add  ULongLongAdd
#define UInt64Add   ULongLongAdd
__inline HRESULT UInt8Sub(UINT8 u8Minuend, UINT8 u8Subtrahend, UINT8 *pu8Result)
{
	HRESULT hr;

	if (u8Minuend >= u8Subtrahend)
	{
		*pu8Result = (UINT8) (u8Minuend - u8Subtrahend);
		hr = S_OK;
	}
	else
	{
		*pu8Result = UINT8_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
__inline HRESULT UShortSub(USHORT usMinuend, USHORT usSubtrahend, USHORT *pusResult)
{
	HRESULT hr;
	if (usMinuend >= usSubtrahend)
	{
		*pusResult = (USHORT) (usMinuend - usSubtrahend);
		hr = S_OK;
	}
	else
	{
		*pusResult = USHORT_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#define UInt16Sub  UShortSub
#define WordSub    UShortSub
__inline HRESULT UIntSub(UINT uMinuend, UINT uSubtrahend, UINT *puResult)
{
	HRESULT hr;
	if (uMinuend >= uSubtrahend)
	{
		*puResult = (uMinuend - uSubtrahend);
		hr = S_OK;
	}
	else
	{
		*puResult = UINT_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#define UInt32Sub  UIntSub
#ifdef _WIN64
#define UIntPtrSub ULongLongSub
#else
__inline HRESULT UIntPtrSub(UINT_PTR uMinuend, UINT_PTR uSubtrahend, UINT_PTR *puResult)
{
	HRESULT hr;
	if (uMinuend >= uSubtrahend)
	{
		*puResult = (uMinuend - uSubtrahend);
		hr = S_OK;
	}
	else
	{
		*puResult = UINT_PTR_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#endif
__inline HRESULT ULongSub(ULONG ulMinuend, ULONG ulSubtrahend, ULONG *pulResult)
{
	HRESULT hr;
	if (ulMinuend >= ulSubtrahend)
	{
		*pulResult = (ulMinuend - ulSubtrahend);
		hr = S_OK;
	}
	else
	{
		*pulResult = ULONG_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#ifdef _WIN64
#define ULongPtrSub ULongLongSub
#else
__inline HRESULT ULongPtrSub(ULONG_PTR ulMinuend, ULONG_PTR ulSubtrahend, ULONG_PTR *pulResult)
{
	HRESULT hr;
	if (ulMinuend >= ulSubtrahend)
	{
		*pulResult = (ulMinuend - ulSubtrahend);
		hr = S_OK;
	}
	else
	{
		*pulResult = ULONG_PTR_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#endif
#define DWordSub       ULongSub
#ifdef _WIN64
#define DWordPtrSub    ULongLongSub
#else
__inline HRESULT DWordPtrSub(DWORD_PTR dwMinuend, DWORD_PTR dwSubtrahend, DWORD_PTR *pdwResult)
{
	HRESULT hr;
	if (dwMinuend >= dwSubtrahend)
	{
		*pdwResult = (dwMinuend - dwSubtrahend);
		hr = S_OK;
	}
	else
	{
		*pdwResult = DWORD_PTR_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#endif
__inline HRESULT SizeTSub(size_t Minuend, size_t Subtrahend, size_t *pResult)
{
	HRESULT hr;
	if (Minuend >= Subtrahend)
	{
		*pResult = (Minuend - Subtrahend);
		hr = S_OK;
	}
	else
	{
		*pResult = SIZE_T_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#ifdef _WIN64
#define SIZETSub   ULongLongSub
#else
__inline HRESULT SIZETSub(SIZE_T Minuend, SIZE_T Subtrahend, SIZE_T *pResult)
{
	HRESULT hr;
	if (Minuend >= Subtrahend)
	{
		*pResult = (Minuend - Subtrahend);
		hr = S_OK;
	}
	else
	{
		*pResult = _SIZE_T_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#endif
__inline HRESULT ULongLongSub(ULONGLONG ullMinuend, ULONGLONG ullSubtrahend, ULONGLONG *pullResult)
{
	HRESULT hr;
	if (ullMinuend >= ullSubtrahend)
	{
		*pullResult = (ullMinuend - ullSubtrahend);
		hr = S_OK;
	}
	else
	{
		*pullResult = ULONGLONG_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}

	return hr;
}
#define DWordLongSub   ULongLongSub
#define ULong64Sub ULongLongSub
#define DWord64Sub ULongLongSub
#define UInt64Sub  ULongLongSub
__inline HRESULT UInt8Mult(UINT8 u8Multiplicand, UINT8 u8Multiplier, UINT8 *pu8Result)
{
	UINT uResult = ((UINT)u8Multiplicand) * ((UINT)u8Multiplier);

	return UIntToUInt8(uResult, pu8Result);
}
__inline HRESULT UShortMult(USHORT usMultiplicand, USHORT usMultiplier, USHORT *pusResult)
{
	ULONG ulResult = ((ULONG)usMultiplicand) * ((ULONG)usMultiplier);

	return ULongToUShort(ulResult, pusResult);
}
#define UInt16Mult  UShortMult
#define WordMult    UShortMult
__inline HRESULT UIntMult(UINT uMultiplicand, UINT uMultiplier, UINT *puResult)
{
	ULONGLONG ull64Result = UInt32x32To64(uMultiplicand, uMultiplier);
	return ULongLongToUInt(ull64Result, puResult);
}
#define UInt32Mult  UIntMult
#ifdef _WIN64
#define UIntPtrMult     ULongLongMult
#else
__inline HRESULT UIntPtrMult(UINT_PTR uMultiplicand, UINT_PTR uMultiplier, UINT_PTR *puResult)
{
	ULONGLONG ull64Result = UInt32x32To64(uMultiplicand, uMultiplier);
	return ULongLongToUIntPtr(ull64Result, puResult);
}
#endif
__inline HRESULT ULongMult(ULONG ulMultiplicand, ULONG ulMultiplier, ULONG *pulResult)
{
	ULONGLONG ull64Result = UInt32x32To64(ulMultiplicand, ulMultiplier);

	return ULongLongToULong(ull64Result, pulResult);
}
#ifdef _WIN64
#define ULongPtrMult    ULongLongMult
#else
__inline HRESULT ULongPtrMult(ULONG_PTR ulMultiplicand, ULONG_PTR ulMultiplier, ULONG_PTR *pulResult)
{
	ULONGLONG ull64Result = UInt32x32To64(ulMultiplicand, ulMultiplier);

	return ULongLongToULongPtr(ull64Result, pulResult);
}
#endif
#define DWordMult       ULongMult
#ifdef _WIN64
#define DWordPtrMult    ULongLongMult
#else
__inline HRESULT DWordPtrMult(DWORD_PTR dwMultiplicand, DWORD_PTR dwMultiplier, DWORD_PTR *pdwResult)
{
	ULONGLONG ull64Result = UInt32x32To64(dwMultiplicand, dwMultiplier);

	return ULongLongToDWordPtr(ull64Result, pdwResult);
}
#endif
#ifdef _WIN64
#define SizeTMult       ULongLongMult
#else
__inline HRESULT SizeTMult(size_t Multiplicand, size_t Multiplier, size_t *pResult)
{
	ULONGLONG ull64Result = UInt32x32To64(Multiplicand, Multiplier);
	return ULongLongToSizeT(ull64Result, pResult);
}
#endif
#ifdef _WIN64
#define SIZETMult       ULongLongMult
#else
__inline HRESULT SIZETMult(SIZE_T Multiplicand, SIZE_T Multiplier, SIZE_T *pResult)
{
	ULONGLONG ull64Result = UInt32x32To64(Multiplicand, Multiplier);

	return ULongLongToSIZET(ull64Result, pResult);
}
#endif
__inline HRESULT ULongLongMult(ULONGLONG ullMultiplicand, ULONGLONG ullMultiplier, ULONGLONG *pullResult)
{
	HRESULT hr;
#if defined(_USE_INTRINSIC_MULTIPLY128)
	ULONGLONG ullResultHigh;
	ULONGLONG ullResultLow;

	ullResultLow = UnsignedMultiply128(ullMultiplicand, ullMultiplier, &ullResultHigh);
	if (ullResultHigh == 0)
	{
		*pullResult = ullResultLow;
		hr = S_OK;
	}
	else
	{
		*pullResult = ULONGLONG_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}
#else

	ULONG dw_a;
	ULONG dw_b;
	ULONG dw_c;
	ULONG dw_d;
	ULONGLONG ad = 0;
	ULONGLONG bc = 0;
	ULONGLONG bd = 0;
	ULONGLONG ullResult = 0;
	hr = INTSAFE_E_ARITHMETIC_OVERFLOW;

	dw_a = (ULONG) (ullMultiplicand >> 32);
	dw_c = (ULONG) (ullMultiplier >> 32);
	if ((dw_a == 0) && (dw_c == 0))
	{
		dw_b = (DWORD)ullMultiplicand;
		dw_d = (DWORD)ullMultiplier;
		*pullResult = (((ULONGLONG)dw_b) * (ULONGLONG)dw_d);
		hr = S_OK;
	}
	else
	{
		if ((dw_a == 0) || (dw_c == 0))
		{
			dw_d = (DWORD)ullMultiplier;
			ad = (((ULONGLONG)dw_a) * (ULONGLONG)dw_d);
			if ((ad & 0xffffffff00000000) == 0)
			{
				dw_b = (DWORD)ullMultiplicand;
				bc = (((ULONGLONG)dw_b) * (ULONGLONG)dw_c);
				if ((bc & 0xffffffff00000000) == 0)
				{
					if (SUCCEEDED(ULongLongAdd(bc << 32, ad << 32, &ullResult)))
					{
						bd = (((ULONGLONG)dw_b) * (ULONGLONG)dw_d);

						if (SUCCEEDED(ULongLongAdd(ullResult, bd, &ullResult)))
						{
							*pullResult = ullResult;
							hr = S_OK;
						}
					}
				}
			}
		}
	}
	if (FAILED(hr))
	{
		*pullResult = ULONGLONG_ERROR;
	}
#endif

	return hr;
}
#define DWordLongMult   ULongLongMult
#define ULong64Mult ULongLongMult
#define DWord64Mult ULongLongMult
#define UInt64Mult  ULongLongMult
#if defined(ENABLE_INTSAFE_SIGNED_FUNCTIONS)
#if defined(_USE_INTRINSIC_MULTIPLY128)

#define Multiply128 _mul128
LONG64 Multiply128(LONG64 Multiplier, LONG64 Multiplicand, LONG64 *HighProduct);
#pragma intrinsic(_mul128)

#endif
__inline HRESULT Int8Add(INT8 i8Augend, INT8 i8Addend, INT8 *pi8Result)
{
	C_ASSERT(sizeof(LONG) > sizeof(INT8));
	return LongToInt8(((LONG)i8Augend) + ((LONG)i8Addend), pi8Result);
}
__inline HRESULT ShortAdd(SHORT sAugend, SHORT sAddend, SHORT *psResult)
{
	C_ASSERT(sizeof(LONG) > sizeof(SHORT));
	return LongToShort(((LONG)sAugend) + ((LONG)sAddend), psResult);
}
#define Int16Add    ShortAdd
__inline HRESULT IntAdd(INT iAugend, INT iAddend, INT *piResult)
{
	C_ASSERT(sizeof(LONGLONG) > sizeof(INT));
	return LongLongToInt(((LONGLONG)iAugend) + ((LONGLONG)iAddend), piResult);
}
#define Int32Add    IntAdd
#ifdef _WIN64
#define IntPtrAdd   LongLongAdd
#else
__inline HRESULT IntPtrAdd(INT_PTR iAugend, INT_PTR iAddend, INT_PTR *piResult)
{
	C_ASSERT(sizeof(LONGLONG) > sizeof(INT_PTR));
	return LongLongToIntPtr(((LONGLONG)iAugend) + ((LONGLONG)iAddend), piResult);
}
#endif
__inline HRESULT LongAdd(LONG lAugend, LONG lAddend, LONG *plResult)
{
	C_ASSERT(sizeof(LONGLONG) > sizeof(LONG));
	return LongLongToLong(((LONGLONG)lAugend) + ((LONGLONG)lAddend), plResult);
}
#define Long32Add   IntAdd
#ifdef _WIN64
#define LongPtrAdd   LongLongAdd
#else
__inline HRESULT LongPtrAdd(LONG_PTR lAugend, LONG_PTR lAddend, LONG_PTR *plResult)
{
	C_ASSERT(sizeof(LONGLONG) > sizeof(LONG_PTR));
	return LongLongToLongPtr(((LONGLONG)lAugend) + ((LONGLONG)lAddend), plResult);
}
#endif
__inline HRESULT LongLongAdd(LONGLONG llAugend, LONGLONG llAddend, LONGLONG *pllResult)
{
	HRESULT hr;
	LONGLONG llResult = llAugend + llAddend;
	if (((llAugend < 0) == (llAddend < 0)) && ((llAugend < 0) != (llResult < 0)))
	{
		*pllResult = LONGLONG_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}
	else
	{
		*pllResult = llResult;
		hr = S_OK;
	}
	return hr;
}
#define Long64Add   LongLongAdd
#define Int64Add    LongLongAdd
#ifdef _WIN64
#define PtrdiffTAdd LongLongAdd
#else
__inline HRESULT PtrdiffTAdd(ptrdiff_t Augend, ptrdiff_t Addend, ptrdiff_t *pResult)
{
	C_ASSERT(sizeof(LONGLONG) > sizeof(ptrdiff_t));
	return LongLongToPtrdiffT(((LONGLONG)Augend) + ((LONGLONG)Addend), pResult);
}
#endif
#ifdef _WIN64
#define SSIZETAdd   LongLongAdd
#else
__inline HRESULT SSIZETAdd(SSIZE_T Augend, SSIZE_T Addend, SSIZE_T *pResult)
{
	C_ASSERT(sizeof(LONGLONG) > sizeof(SSIZE_T));
	return LongLongToSSIZET(((LONGLONG)Augend) + ((LONGLONG)Addend), pResult);
}
#endif
__inline HRESULT Int8Sub(INT8 i8Minuend, INT8 i8Subtrahend, INT8 *pi8Result)
{
	C_ASSERT(sizeof(LONG) > sizeof(INT8));
	return LongToInt8(((LONG)i8Minuend) - ((LONG)i8Subtrahend), pi8Result);
}
__inline HRESULT ShortSub(SHORT sMinuend, SHORT sSubtrahend, SHORT *psResult)
{
	C_ASSERT(sizeof(LONG) > sizeof(SHORT));
	return LongToShort(((LONG)sMinuend) - ((LONG)sSubtrahend), psResult);
}
#define Int16Sub   ShortSub
__inline HRESULT IntSub(INT iMinuend, INT iSubtrahend, INT *piResult)
{
	C_ASSERT(sizeof(LONGLONG) > sizeof(INT));
	return LongLongToInt(((LONGLONG)iMinuend) - ((LONGLONG)iSubtrahend), piResult);
}
#define Int32Sub   IntSub
#ifdef _WIN64
#define IntPtrSub  LongLongSub
#else
__inline HRESULT IntPtrSub(INT_PTR iMinuend, INT_PTR iSubtrahend, INT_PTR *piResult)
{
	C_ASSERT(sizeof(LONGLONG) > sizeof(INT_PTR));
	return LongLongToIntPtr(((LONGLONG)iMinuend) - ((LONGLONG)iSubtrahend), piResult);
}
#endif
__inline HRESULT LongSub(LONG lMinuend, LONG lSubtrahend, LONG *plResult)
{
	C_ASSERT(sizeof(LONGLONG) > sizeof(LONG));
	return LongLongToLong(((LONGLONG)lMinuend) - ((LONGLONG)lSubtrahend), plResult);
}
#define Long32Sub  IntSub
#ifdef _WIN64
#define LongPtrSub  LongLongSub
#else
__inline HRESULT LongPtrSub(LONG_PTR lMinuend, LONG_PTR lSubtrahend, LONG_PTR *plResult)
{
	C_ASSERT(sizeof(LONGLONG) > sizeof(LONG_PTR));
	return LongLongToLongPtr(((LONGLONG)lMinuend) - ((LONGLONG)lSubtrahend), plResult);
}
#endif
__inline HRESULT LongLongSub(LONGLONG llMinuend, LONGLONG llSubtrahend, LONGLONG *pllResult)
{
	HRESULT hr;
	LONGLONG llResult = llMinuend - llSubtrahend;
	if (((llMinuend < 0) != (llSubtrahend < 0)) && ((llMinuend < 0) != (llResult < 0)))
	{
		*pllResult = LONGLONG_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}
	else
	{
		*pllResult = llResult;
		hr = S_OK;
	}

	return hr;
}
#define Long64Sub  LongLongSub
#define Int64Sub   LongLongSub
#ifdef _WIN64
#define PtrdiffTSub LongLongSub
#else
__inline HRESULT PtrdiffTSub(ptrdiff_t Minuend, ptrdiff_t Subtrahend, ptrdiff_t *pResult)
{
	C_ASSERT(sizeof(LONGLONG) > sizeof(ptrdiff_t));
	return LongLongToPtrdiffT(((LONGLONG)Minuend) - ((LONGLONG)Subtrahend), pResult);
}
#endif
#ifdef _WIN64
#define SSIZETSub  LongLongSub
#else
__inline HRESULT SSIZETSub(SSIZE_T Minuend, SSIZE_T Subtrahend, SSIZE_T *pResult)
{
	C_ASSERT(sizeof(LONGLONG) > sizeof(SSIZE_T));
	return LongLongToSSIZET(((LONGLONG)Minuend) - ((LONGLONG)Subtrahend), pResult);
}
#endif
__inline HRESULT Int8Mult(INT8 i8Multiplicand, INT8 i8Multiplier, INT8 *pi8Result)
{
	C_ASSERT(sizeof(LONG) > sizeof(INT8));
	return LongToInt8(((LONG)i8Multiplier) * ((LONG)i8Multiplicand), pi8Result);
}
__inline HRESULT ShortMult(SHORT sMultiplicand, SHORT sMultiplier, SHORT *psResult)
{
	C_ASSERT(sizeof(LONG) > sizeof(SHORT));
	return LongToShort(((LONG)sMultiplicand) * ((LONG)sMultiplier), psResult);
}
#define Int16Mult   ShortMult
__inline HRESULT IntMult(INT iMultiplicand, INT iMultiplier, INT *piResult)
{
	C_ASSERT(sizeof(LONGLONG) > sizeof(INT));
	return LongLongToInt(((LONGLONG)iMultiplicand) * ((LONGLONG)iMultiplier), piResult);
}
#define Int32Mult   IntMult
#ifdef _WIN64
#define IntPtrMult   LongLongMult
#else
__inline HRESULT IntPtrMult(INT_PTR iMultiplicand, INT_PTR iMultiplier, INT_PTR *piResult)
{
	C_ASSERT(sizeof(LONGLONG) > sizeof(INT_PTR));
	return LongLongToIntPtr(((LONGLONG)iMultiplicand) * ((LONGLONG)iMultiplier), piResult);
}
#endif
__inline HRESULT LongMult(LONG lMultiplicand, LONG lMultiplier, LONG *plResult)
{
	C_ASSERT(sizeof(LONGLONG) > sizeof(LONG));
	return LongLongToLong(((LONGLONG)lMultiplicand) * ((LONGLONG)lMultiplier), plResult);
}
#define Long32Mult  IntMult
#ifdef _WIN64
#define LongPtrMult LongLongMult
#else
__inline HRESULT LongPtrMult(LONG_PTR lMultiplicand, LONG_PTR lMultiplier, LONG_PTR *plResult)
{
	C_ASSERT(sizeof(LONGLONG) > sizeof(LONG_PTR));
	return LongLongToLongPtr(((LONGLONG)lMultiplicand) * ((LONGLONG)lMultiplier), plResult);
}
#endif
__inline HRESULT LongLongMult(LONGLONG llMultiplicand, LONGLONG llMultiplier, LONGLONG *pllResult)
{
	HRESULT hr;
#if defined(_USE_INTRINSIC_MULTIPLY128)
	LONGLONG llResultHigh;
	LONGLONG llResultLow;

	llResultLow = Multiply128(llMultiplicand, llMultiplier, &llResultHigh);

	if (((llResultLow < 0) && (llResultHigh != -1)) || ((llResultLow >= 0) && (llResultHigh != 0)))
	{
		*pllResult = LONGLONG_ERROR;
		hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
	}
	else
	{
		*pllResult = llResultLow;
		hr = S_OK;
	}
#else

	ULONGLONG ullMultiplicand;
	ULONGLONG ullMultiplier;
	ULONGLONG ullResult;
	const ULONGLONG LONGLONG_MIN_MAGNITUDE = ((((ULONGLONG) - (LONGLONG_MIN + 1))) + 1);
	if (llMultiplicand < 0)
	{
		ullMultiplicand = ((ULONGLONG) (-(llMultiplicand + 1))) + 1;
	}
	else
	{
		ullMultiplicand = (ULONGLONG)llMultiplicand;
	}
	if (llMultiplier < 0)
	{
		ullMultiplier = ((ULONGLONG) (-(llMultiplier + 1))) + 1;
	}
	else
	{
		ullMultiplier = (ULONGLONG)llMultiplier;
	}
	hr = ULongLongMult(ullMultiplicand, ullMultiplier, &ullResult);
	if (SUCCEEDED(hr))
	{
		if ((llMultiplicand < 0) != (llMultiplier < 0))
		{
			if (ullResult > LONGLONG_MIN_MAGNITUDE)
			{
				*pllResult = LONGLONG_ERROR;
				hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
			}
			else
			{
				*pllResult = -((LONGLONG)ullResult);
			}
		}
		else
		{
			if (ullResult > LONGLONG_MAX)
			{
				*pllResult = LONGLONG_ERROR;
				hr = INTSAFE_E_ARITHMETIC_OVERFLOW;
			}
			else
			{
				*pllResult = (LONGLONG)ullResult;
			}
		}
	}
	else
	{
		*pllResult = LONGLONG_ERROR;
	}
#endif
	return hr;
}
#define Long64Mult  LongLongMult
#define Int64Mult   LongLongMult
#ifdef _WIN64
#define PtrdiffTMult    LongLongMult
#else
__inline HRESULT PtrdiffTMult(ptrdiff_t Multiplicand, ptrdiff_t Multiplier, ptrdiff_t *pResult)
{
	C_ASSERT(sizeof(LONGLONG) > sizeof(ptrdiff_t));
	return LongLongToPtrdiffT(((LONGLONG)Multiplicand) * ((LONGLONG)Multiplier), pResult);
}
#endif
#ifdef _WIN64
#define SSIZETMult  LongLongMult
#else
__inline HRESULT SSIZETMult(SSIZE_T Multiplicand, SSIZE_T Multiplier, SSIZE_T *pResult)
{
	C_ASSERT(sizeof(LONGLONG) > sizeof(SSIZE_T));
	return LongLongToSSIZET(((LONGLONG)Multiplicand) * ((LONGLONG)Multiplier), pResult);
}
#endif
#endif
#undef LOWORD
#define LOWORD(_dw)     ((WORD)(((DWORD_PTR)(_dw)) & 0xffff))
#undef HIWORD
#define HIWORD(_dw)     ((WORD)((((DWORD_PTR)(_dw)) >> 16) & 0xffff))
#define LODWORD(_qw)    ((DWORD)(_qw))
#define HIDWORD(_qw)    ((DWORD)(((_qw) >> 32) & 0xffffffff))
#endif
