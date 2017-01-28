/*+@@file@@----------------------------------------------------------------*//*!
 \file		ShTypes.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Tue Jun 28 19:27:56 2016
 \date		Modified on Tue Jun 28 19:27:56 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif
#include <rpc.h>
#include <rpcndr.h>
#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif
#ifndef __shtypes_h__
#define __shtypes_h__
#if __POCC__ >= 500
#pragma once
#endif
#include <wtypes.h>
#ifndef DUMMYUNIONNAME
#ifdef NONAMELESSUNION
#define DUMMYUNIONNAME   u
#define DUMMYUNIONNAME2  u2
#define DUMMYUNIONNAME3  u3
#define DUMMYUNIONNAME4  u4
#define DUMMYUNIONNAME5  u5
#else
#define DUMMYUNIONNAME
#define DUMMYUNIONNAME2
#define DUMMYUNIONNAME3
#define DUMMYUNIONNAME4
#define DUMMYUNIONNAME5
#endif
#endif
#include <pshpack1.h>
typedef struct _SHITEMID
{
    USHORT cb;
    BYTE abID[ 1 ];
} SHITEMID;
#include <poppack.h>
#if defined(_M_IX86)
#define __unaligned
#endif
typedef SHITEMID __unaligned *LPSHITEMID;
typedef const SHITEMID __unaligned *LPCSHITEMID;
#include <pshpack1.h>
typedef struct _ITEMIDLIST
{
	SHITEMID mkid;
} ITEMIDLIST;
typedef ITEMIDLIST ITEMIDLIST_RELATIVE;
typedef ITEMIDLIST ITEMID_CHILD;
typedef ITEMIDLIST ITEMIDLIST_ABSOLUTE;
#include <poppack.h>
typedef  BYTE_BLOB *wirePIDL;
typedef ITEMIDLIST __unaligned *LPITEMIDLIST;
typedef const ITEMIDLIST __unaligned *LPCITEMIDLIST;
#define PIDLIST_ABSOLUTE         LPITEMIDLIST
#define PCIDLIST_ABSOLUTE        LPCITEMIDLIST
#define PCUIDLIST_ABSOLUTE       LPCITEMIDLIST
#define PIDLIST_RELATIVE         LPITEMIDLIST
#define PCIDLIST_RELATIVE        LPCITEMIDLIST
#define PUIDLIST_RELATIVE        LPITEMIDLIST
#define PCUIDLIST_RELATIVE       LPCITEMIDLIST
#define PITEMID_CHILD            LPITEMIDLIST
#define PCITEMID_CHILD           LPCITEMIDLIST
#define PUITEMID_CHILD           LPITEMIDLIST
#define PCUITEMID_CHILD          LPCITEMIDLIST
#define PCUITEMID_CHILD_ARRAY    LPCITEMIDLIST *
#define PCUIDLIST_RELATIVE_ARRAY LPCITEMIDLIST *
#define PCIDLIST_ABSOLUTE_ARRAY  LPCITEMIDLIST *
#define PCUIDLIST_ABSOLUTE_ARRAY LPCITEMIDLIST *
typedef 
enum tagSTRRET_TYPE
    {	STRRET_WSTR	= 0,
	STRRET_OFFSET	= 0x1,
	STRRET_CSTR	= 0x2
} STRRET_TYPE;
#include <pshpack8.h>
typedef struct _STRRET
{
    UINT uType;
    union 
{
        LPWSTR pOleStr;
        UINT uOffset;
        char cStr[ 260 ];
} DUMMYUNIONNAME;
} STRRET;
#include <poppack.h>
typedef STRRET *LPSTRRET;
#include <pshpack1.h>
typedef struct _SHELLDETAILS
{
    int fmt;
    int cxChar;
    STRRET str;
} SHELLDETAILS;
typedef struct _SHELLDETAILS *LPSHELLDETAILS;
#include <poppack.h>
#if (_WIN32_IE >= _WIN32_IE_IE60SP2)
typedef enum tagPERCEIVED
{
	PERCEIVED_TYPE_FIRST	= -3,
	PERCEIVED_TYPE_CUSTOM	= -3,
	PERCEIVED_TYPE_UNSPECIFIED	= -2,
	PERCEIVED_TYPE_FOLDER	= -1,
	PERCEIVED_TYPE_UNKNOWN	= 0,
	PERCEIVED_TYPE_TEXT	= 1,
	PERCEIVED_TYPE_IMAGE	= 2,
	PERCEIVED_TYPE_AUDIO	= 3,
	PERCEIVED_TYPE_VIDEO	= 4,
	PERCEIVED_TYPE_COMPRESSED	= 5,
	PERCEIVED_TYPE_DOCUMENT	= 6,
	PERCEIVED_TYPE_SYSTEM	= 7,
	PERCEIVED_TYPE_APPLICATION	= 8,
	PERCEIVED_TYPE_GAMEMEDIA	= 9,
	PERCEIVED_TYPE_CONTACTS	= 10,
	PERCEIVED_TYPE_LAST	= 10
} PERCEIVED;
#define PERCEIVEDFLAG_UNDEFINED     0x0000
#define PERCEIVEDFLAG_SOFTCODED     0x0001
#define PERCEIVEDFLAG_HARDCODED     0x0002
#define PERCEIVEDFLAG_NATIVESUPPORT 0x0004
#define PERCEIVEDFLAG_GDIPLUS       0x0010
#define PERCEIVEDFLAG_WMSDK         0x0020
#define PERCEIVEDFLAG_ZIPFOLDER     0x0040
typedef DWORD PERCEIVEDFLAG;
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
typedef struct _COMDLG_FILTERSPEC
{
    LPCWSTR pszName;
    LPCWSTR pszSpec;
} COMDLG_FILTERSPEC;
#endif
typedef GUID KNOWNFOLDERID;
#if 0
typedef KNOWNFOLDERID *REFKNOWNFOLDERID;
#endif
#define REFKNOWNFOLDERID const KNOWNFOLDERID * __MIDL_CONST
typedef DWORD KF_REDIRECT_FLAGS;
typedef GUID FOLDERTYPEID;
#if 0
typedef FOLDERTYPEID *REFFOLDERTYPEID;
#endif
#define REFFOLDERTYPEID const FOLDERTYPEID * __MIDL_CONST
typedef GUID TASKOWNERID;
#if 0
typedef TASKOWNERID *REFTASKOWNERID;
#endif
#define REFTASKOWNERID const TASKOWNERID * __MIDL_CONST
#ifndef LF_FACESIZE
typedef struct tagLOGFONTA
{
    LONG lfHeight;
    LONG lfWidth;
    LONG lfEscapement;
    LONG lfOrientation;
    LONG lfWeight;
    BYTE lfItalic;
    BYTE lfUnderline;
    BYTE lfStrikeOut;
    BYTE lfCharSet;
    BYTE lfOutPrecision;
    BYTE lfClipPrecision;
    BYTE lfQuality;
    BYTE lfPitchAndFamily;
    CHAR lfFaceName[ 32 ];
} LOGFONTA;
typedef struct tagLOGFONTW
{
    LONG lfHeight;
    LONG lfWidth;
    LONG lfEscapement;
    LONG lfOrientation;
    LONG lfWeight;
    BYTE lfItalic;
    BYTE lfUnderline;
    BYTE lfStrikeOut;
    BYTE lfCharSet;
    BYTE lfOutPrecision;
    BYTE lfClipPrecision;
    BYTE lfQuality;
    BYTE lfPitchAndFamily;
    WCHAR lfFaceName[ 32 ];
} LOGFONTW;
typedef LOGFONTA LOGFONT;
#endif
typedef enum tagSHCOLSTATE
{
	SHCOLSTATE_DEFAULT	= 0,
	SHCOLSTATE_TYPE_STR	= 0x1,
	SHCOLSTATE_TYPE_INT	= 0x2,
	SHCOLSTATE_TYPE_DATE	= 0x3,
	SHCOLSTATE_TYPEMASK	= 0xf,
	SHCOLSTATE_ONBYDEFAULT	= 0x10,
	SHCOLSTATE_SLOW	= 0x20,
	SHCOLSTATE_EXTENDED	= 0x40,
	SHCOLSTATE_SECONDARYUI	= 0x80,
	SHCOLSTATE_HIDDEN	= 0x100,
	SHCOLSTATE_PREFER_VARCMP	= 0x200,
	SHCOLSTATE_PREFER_FMTCMP	= 0x400,
	SHCOLSTATE_NOSORTBYFOLDERNESS	= 0x800,
	SHCOLSTATE_VIEWONLY	= 0x10000,
	SHCOLSTATE_BATCHREAD	= 0x20000,
	SHCOLSTATE_NO_GROUPBY	= 0x40000,
	SHCOLSTATE_FIXED_WIDTH	= 0x1000,
	SHCOLSTATE_NODPISCALE	= 0x2000,
	SHCOLSTATE_FIXED_RATIO	= 0x4000,
	SHCOLSTATE_DISPLAYMASK	= 0xf000
} SHCOLSTATE;
typedef DWORD SHCOLSTATEF;
typedef PROPERTYKEY SHCOLUMNID;
typedef const SHCOLUMNID *LPCSHCOLUMNID;
extern RPC_IF_HANDLE __MIDL_itf_shtypes_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shtypes_0000_0000_v0_0_s_ifspec;
#endif
