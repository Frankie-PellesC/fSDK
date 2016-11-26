/*+@@file@@----------------------------------------------------------------*//*!
 \file		muldiv32.h
 \par Description 
            
 \par  Status: 
            
 \par Project: 
            
 \date		Created  on Sun Nov 13 13:26:26 2016
 \date		Modified on Sun Nov 13 13:26:26 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/

/*****************************************************************************
 *
 *  MulDiv32.h
 *
 *  Description:
 *      math routines for 32 bit signed and unsiged numbers.
 *
 *      MulDiv32(a,b,c) = (a * b) / c         (round down, signed)
 *
 *      MulDivRD(a,b,c) = (a * b) / c         (round down, unsigned)
 *      MulDivRN(a,b,c) = (a * b + c/2) / c   (round nearest, unsigned)
 *      MulDivRU(a,b,c) = (a * b + c-1) / c   (round up, unsigned)
 *
 *****************************************************************************/

#ifndef _INC_MULDIV32
#define _INC_MULDIV32

#ifndef INLINE
#define INLINE __inline
#endif

INLINE LONG MulDiv32(LONG a, LONG b, LONG c)
{
	return (LONG) (Int32x32To64(a, b) / c);
}

INLINE DWORD MulDivRD(DWORD a, DWORD b, DWORD c)
{
	return (DWORD) (UInt32x32To64(a, b) / c);
}

INLINE DWORD MulDivRN(DWORD a, DWORD b, DWORD c)
{
	return (DWORD) ((UInt32x32To64(a, b) + c / 2) / c);
}

INLINE DWORD MulDivRU(DWORD a, DWORD b, DWORD c)
{
	return (DWORD) ((UInt32x32To64(a, b) + c - 1) / c);
}

//
//  some code references these by other names.
//
#define muldiv32    MulDivRN
#define muldivrd32  MulDivRD
#define muldivru32  MulDivRU

#endif // _INC_MULDIV32
