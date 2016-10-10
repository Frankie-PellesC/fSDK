/*+@@file@@----------------------------------------------------------------*//*!
 \file		InitOID.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 17 00:45:28 2016
 \date		Modified on Sun Jul 17 00:45:28 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __InitOID_h__
#define __InitOID_h__
#if __POCC__ >= 500
#pragma once
#endif
#define MAPI_PREFIX         0x2A,0x86,0x48,0x86,0xf7,0x14,0x03
#undef  DEFINE_OID_1
#define DEFINE_OID_1(name, b0, b1)				extern const BYTE __based(__segname("_CODE")) name[] = { MAPI_PREFIX, b0, b1 }
#undef  DEFINE_OID_2
#define DEFINE_OID_2(name, b0, b1, b2)			extern const BYTE __based(__segname("_CODE")) name[] = { MAPI_PREFIX, b0, b1, b2 }
#undef  DEFINE_OID_3
#define DEFINE_OID_3(name, b0, b1, b2, b3)		extern const BYTE __based(__segname("_CODE")) name[] = { MAPI_PREFIX, b0, b1, b2, b3 }
#undef  DEFINE_OID_4
#define DEFINE_OID_4(name, b0, b1, b2, b3, b4)	extern const BYTE __based(__segname("_CODE")) name[] = { MAPI_PREFIX, b0, b1, b2, b3, b4 }
#endif
