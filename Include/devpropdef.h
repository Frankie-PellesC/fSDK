/*+@@file@@----------------------------------------------------------------*//*!
 \file		devpropdef.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul  2 16:17:25 2016
 \date		Modified on Sat Jul  2 16:17:25 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _DEVPROPDEF_H_
#define _DEVPROPDEF_H_
#if __POCC__ >= 500
#pragma once
#endif
typedef ULONG DEVPROPTYPE, *PDEVPROPTYPE;
#define DEVPROP_TYPEMOD_ARRAY                   0x00001000
#define DEVPROP_TYPEMOD_LIST                    0x00002000
#define DEVPROP_TYPE_EMPTY                      0x00000000
#define DEVPROP_TYPE_NULL                       0x00000001
#define DEVPROP_TYPE_SBYTE                      0x00000002
#define DEVPROP_TYPE_BYTE                       0x00000003
#define DEVPROP_TYPE_INT16                      0x00000004
#define DEVPROP_TYPE_UINT16                     0x00000005
#define DEVPROP_TYPE_INT32                      0x00000006
#define DEVPROP_TYPE_UINT32                     0x00000007
#define DEVPROP_TYPE_INT64                      0x00000008
#define DEVPROP_TYPE_UINT64                     0x00000009
#define DEVPROP_TYPE_FLOAT                      0x0000000A
#define DEVPROP_TYPE_DOUBLE                     0x0000000B
#define DEVPROP_TYPE_DECIMAL                    0x0000000C
#define DEVPROP_TYPE_GUID                       0x0000000D
#define DEVPROP_TYPE_CURRENCY                   0x0000000E
#define DEVPROP_TYPE_DATE                       0x0000000F
#define DEVPROP_TYPE_FILETIME                   0x00000010
#define DEVPROP_TYPE_BOOLEAN                    0x00000011
#define DEVPROP_TYPE_STRING                     0x00000012
#define DEVPROP_TYPE_STRING_LIST (DEVPROP_TYPE_STRING|DEVPROP_TYPEMOD_LIST)
#define DEVPROP_TYPE_SECURITY_DESCRIPTOR        0x00000013
#define DEVPROP_TYPE_SECURITY_DESCRIPTOR_STRING 0x00000014
#define DEVPROP_TYPE_DEVPROPKEY                 0x00000015
#define DEVPROP_TYPE_DEVPROPTYPE                0x00000016
#define DEVPROP_TYPE_BINARY      (DEVPROP_TYPE_BYTE|DEVPROP_TYPEMOD_ARRAY)
#define DEVPROP_TYPE_ERROR                      0x00000017
#define DEVPROP_TYPE_NTSTATUS                   0x00000018
#define DEVPROP_TYPE_STRING_INDIRECT            0x00000019
#define MAX_DEVPROP_TYPE                        0x00000019
#define MAX_DEVPROP_TYPEMOD                     0x00002000
#define DEVPROP_MASK_TYPE                       0x00000FFF
#define DEVPROP_MASK_TYPEMOD                    0x0000F000
typedef CHAR DEVPROP_BOOLEAN, *PDEVPROP_BOOLEAN;
#define DEVPROP_TRUE  ((DEVPROP_BOOLEAN)-1)
#define DEVPROP_FALSE ((DEVPROP_BOOLEAN) 0)
#ifndef DEVPROPKEY_DEFINED
#define DEVPROPKEY_DEFINED
typedef GUID  DEVPROPGUID, *PDEVPROPGUID;
typedef ULONG DEVPROPID,   *PDEVPROPID;
typedef struct _DEVPROPKEY
{
    DEVPROPGUID fmtid;
    DEVPROPID   pid;
} DEVPROPKEY, *PDEVPROPKEY;
#endif
#define DEVPROPID_FIRST_USABLE 2
#endif
#ifdef DEFINE_DEVPROPKEY
#undef DEFINE_DEVPROPKEY
#endif
#ifdef INITGUID
#define DEFINE_DEVPROPKEY(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8, pid) extern const DEVPROPKEY DECLSPEC_SELECTANY name = { { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }, pid }
#else
#define DEFINE_DEVPROPKEY(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8, pid) extern const DEVPROPKEY name
#endif
#ifndef IsEqualDevPropKey
#define IsEqualDevPropKey(a, b)   (((a).pid == (b).pid) && IsEqualIID(&(a).fmtid, &(b).fmtid) )
#endif
