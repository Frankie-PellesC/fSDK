/*+@@file@@----------------------------------------------------------------*//*!
 \file		guiddef.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
            - Added INSTANZIATE_GUID to force creation of a GUID
 \par  Status: 
            
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jun 26 16:53:55 2016
 \date		Modified on Tue Nov 15 15:42:07 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef GUID_DEFINED
#define GUID_DEFINED
#if __POCC__ >= 500
#pragma once
#endif
typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[ 8 ];
} GUID;
#ifndef FAR
#ifdef _WIN32
#define FAR
#else
#define FAR _far
#endif
#endif
#ifndef DECLSPEC_SELECTANY
#if (__POCC__ >= 1100)
#define DECLSPEC_SELECTANY  __declspec(selectany)
#else
#define DECLSPEC_SELECTANY
#endif
#endif
#ifndef extern
#define extern    extern
#endif
#ifdef DEFINE_GUID
#undef DEFINE_GUID
#endif
#define INSTANZIATE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID DECLSPEC_SELECTANY name \
                = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }
#ifdef INITGUID
#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID DECLSPEC_SELECTANY name \
                = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }
#else
#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
    extern const GUID FAR name
#endif

#define DEFINE_OLEGUID(name, l, w1, w2) DEFINE_GUID(name, l, w1, w2, 0xC0,0,0,0,0,0,0,0x46)
#ifndef _GUIDDEF_H_
#define _GUIDDEF_H_
#ifndef __LPGUID_DEFINED__
#define __LPGUID_DEFINED__
typedef GUID *LPGUID;
#endif
#ifndef __LPCGUID_DEFINED__
#define __LPCGUID_DEFINED__
typedef const GUID *LPCGUID;
#endif
#ifndef __IID_DEFINED__
#define __IID_DEFINED__
typedef GUID IID;
typedef IID *LPIID;
#define IID_NULL            GUID_NULL
#define IsEqualIID(riid1, riid2) IsEqualGUID(riid1, riid2)
typedef GUID CLSID;
typedef CLSID *LPCLSID;
#define CLSID_NULL          GUID_NULL
#define IsEqualCLSID(rclsid1, rclsid2) IsEqualGUID(rclsid1, rclsid2)
typedef GUID FMTID;
typedef FMTID *LPFMTID;
#define FMTID_NULL          GUID_NULL
#define IsEqualFMTID(rfmtid1, rfmtid2) IsEqualGUID(rfmtid1, rfmtid2)
#ifdef __midl_proxy
#define __MIDL_CONST
#else
#define __MIDL_CONST const
#endif
#ifndef _REFGUID_DEFINED
#define _REFGUID_DEFINED
#define REFGUID const GUID * __MIDL_CONST
#endif
#ifndef _REFIID_DEFINED
#define _REFIID_DEFINED
#define REFIID const IID * __MIDL_CONST
#endif
#ifndef _REFCLSID_DEFINED
#define _REFCLSID_DEFINED
#define REFCLSID const IID * __MIDL_CONST
#endif
#ifndef _REFFMTID_DEFINED
#define _REFFMTID_DEFINED
#define REFFMTID const IID * __MIDL_CONST
#endif
#endif
#if !defined (_SYS_GUID_OPERATORS_)
#define _SYS_GUID_OPERATORS_
#include <string.h>

#define InlineIsEqualGUID(rguid1, rguid2)  \
        (((unsigned long *) rguid1)[0] == ((unsigned long *) rguid2)[0] &&   \
        ((unsigned long *) rguid1)[1] == ((unsigned long *) rguid2)[1] &&    \
        ((unsigned long *) rguid1)[2] == ((unsigned long *) rguid2)[2] &&    \
        ((unsigned long *) rguid1)[3] == ((unsigned long *) rguid2)[3])
#define IsEqualGUID(rguid1, rguid2) (!memcmp(rguid1, rguid2, sizeof(GUID)))

#ifdef __INLINE_ISEQUAL_GUID
#undef IsEqualGUID
#define IsEqualGUID(rguid1, rguid2) InlineIsEqualGUID(rguid1, rguid2)
#endif
#define IsEqualIID(riid1, riid2) IsEqualGUID(riid1, riid2)
#define IsEqualCLSID(rclsid1, rclsid2) IsEqualGUID(rclsid1, rclsid2)
#if !defined _SYS_GUID_OPERATOR_EQ_ && !defined _NO_SYS_GUID_OPERATOR_EQ_
#define _SYS_GUID_OPERATOR_EQ_
#endif
#endif
#endif
#endif
