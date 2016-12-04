/*+@@file@@----------------------------------------------------------------*//*!
 \file		wtypes.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
            01.12.2016 - Removed _VARIANT_BOOL declaration.
 \par  Status: 
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Jun 27 11:35:34 2016
 \date		Modified on Thu Dec  1 16:20:29 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif
#include "rpc.h"
#include "rpcndr.h"
#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif
#ifndef __wtypes_h__
#define __wtypes_h__
#if __POCC__ >= 500
#pragma once
#endif
#include "basetsd.h"
#include "guiddef.h"
extern RPC_IF_HANDLE __MIDL_itf_wtypes_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wtypes_0000_0000_v0_0_s_ifspec;
#ifndef __IWinTypes_INTERFACE_DEFINED__
#define __IWinTypes_INTERFACE_DEFINED__
typedef struct tagRemHGLOBAL
{
	long fNullHGlobal;
	unsigned long cbData;
	byte data[1];
} RemHGLOBAL;
typedef struct tagRemHMETAFILEPICT
{
	long mm;
	long xExt;
	long yExt;
	unsigned long cbData;
	byte data[1];
} RemHMETAFILEPICT;
typedef struct tagRemHENHMETAFILE
{
	unsigned long cbData;
	byte data[1];
} RemHENHMETAFILE;
typedef struct tagRemHBITMAP
{
	unsigned long cbData;
	byte data[1];
} RemHBITMAP;
typedef struct tagRemHPALETTE
{
	unsigned long cbData;
	byte data[1];
} RemHPALETTE;
typedef struct tagRemBRUSH
{
	unsigned long cbData;
	byte data[1];
} RemHBRUSH;
#if !defined(_WIN32) && !defined(_MPPC_)
#ifndef WINAPI
#define FAR             _far
#define PASCAL          _pascal
#define CDECL           _cdecl
#define VOID            void
#define WINAPI      FAR PASCAL
#define CALLBACK    FAR PASCAL
#ifndef FALSE
#define FALSE 0
#define TRUE 1
#endif
#ifndef _BYTE_DEFINED
#define _BYTE_DEFINED
typedef byte BYTE;
#endif
#ifndef _WORD_DEFINED
#define _WORD_DEFINED
typedef unsigned short WORD;
#endif
typedef unsigned int UINT;
typedef int INT;
typedef long BOOL;
#ifndef _LONG_DEFINED
#define _LONG_DEFINED
typedef long LONG;
#endif
#ifndef _WPARAM_DEFINED
#define _WPARAM_DEFINED
typedef UINT_PTR WPARAM;
#endif
#ifndef _DWORD_DEFINED
#define _DWORD_DEFINED
typedef unsigned long DWORD;
#endif
#ifndef _LPARAM_DEFINED
#define _LPARAM_DEFINED
typedef LONG_PTR LPARAM;
#endif
#ifndef _LRESULT_DEFINED
#define _LRESULT_DEFINED
typedef LONG_PTR LRESULT;
#endif
typedef void *HANDLE;
typedef void *HMODULE;
typedef void *HINSTANCE;
typedef void *HTASK;
typedef void *HKEY;
typedef void *HDESK;
typedef void *HMF;
typedef void *HEMF;
typedef void *HPEN;
typedef void *HRSRC;
typedef void *HSTR;
typedef void *HWINSTA;
typedef void *HKL;
typedef void *HGDIOBJ;
typedef HANDLE HDWP;
#ifndef _HFILE_DEFINED
#define _HFILE_DEFINED
typedef INT HFILE;
#endif
#ifndef _LPWORD_DEFINED
#define _LPWORD_DEFINED
typedef WORD *LPWORD;
#endif
#ifndef _LPDWORD_DEFINED
#define _LPDWORD_DEFINED
typedef DWORD *LPDWORD;
#endif
typedef char CHAR;
typedef CHAR *LPSTR;
typedef const CHAR *LPCSTR;
#ifndef _WCHAR_DEFINED
#define _WCHAR_DEFINED
typedef wchar_t WCHAR;
typedef WCHAR TCHAR;
#endif
typedef WCHAR *LPWSTR;
typedef TCHAR *LPTSTR;
typedef const WCHAR *LPCWSTR;
typedef const TCHAR *LPCTSTR;
#ifndef _COLORREF_DEFINED
#define _COLORREF_DEFINED
typedef DWORD COLORREF;
#endif
#ifndef _LPCOLORREF_DEFINED
#define _LPCOLORREF_DEFINED
typedef DWORD *LPCOLORREF;
#endif
typedef HANDLE *LPHANDLE;
typedef struct _RECTL
{
	LONG left;
	LONG top;
	LONG right;
	LONG bottom;
} RECTL;
typedef struct _RECTL *PRECTL;
typedef struct _RECTL *LPRECTL;
typedef struct tagPOINT
{
	LONG x;
	LONG y;
} POINT;
typedef struct tagPOINT *PPOINT;
typedef struct tagPOINT *LPPOINT;
typedef struct _POINTL
{
	LONG x;
	LONG y;
} POINTL;
typedef struct _POINTL *PPOINTL;
#ifndef WIN16
typedef struct tagSIZE
{
	LONG cx;
	LONG cy;
} SIZE;
typedef struct tagSIZE *PSIZE;
typedef struct tagSIZE *LPSIZE;
#else
typedef struct tagSIZE
{
	INT cx;
	INT cy;
} SIZE, *PSIZE, *LPSIZE;
#endif
typedef struct tagSIZEL
{
	LONG cx;
	LONG cy;
} SIZEL;
typedef struct tagSIZEL *PSIZEL;
typedef struct tagSIZEL *LPSIZEL;
#endif
#endif
#ifndef _PALETTEENTRY_DEFINED
#define _PALETTEENTRY_DEFINED
typedef struct tagPALETTEENTRY
{
	BYTE peRed;
	BYTE peGreen;
	BYTE peBlue;
	BYTE peFlags;
} PALETTEENTRY;
typedef struct tagPALETTEENTRY *PPALETTEENTRY;
typedef struct tagPALETTEENTRY *LPPALETTEENTRY;
#endif
#ifndef _LOGPALETTE_DEFINED
#define _LOGPALETTE_DEFINED
typedef struct tagLOGPALETTE
{
	WORD palVersion;
	WORD palNumEntries;
	PALETTEENTRY palPalEntry[1];
} LOGPALETTE;
typedef struct tagLOGPALETTE *PLOGPALETTE;
typedef struct tagLOGPALETTE *LPLOGPALETTE;
#endif
#if defined(_WIN32) && !defined(OLE2ANSI)
typedef WCHAR OLECHAR;
typedef OLECHAR *LPOLESTR;
typedef const OLECHAR *LPCOLESTR;
#define OLESTR(str) L##str
#else
typedef char OLECHAR;
typedef LPSTR LPOLESTR;
typedef LPCSTR LPCOLESTR;
#define OLESTR(str) str
#endif
#ifndef _WINDEF_
typedef const RECTL *LPCRECTL;
typedef void *PVOID;
typedef void *LPVOID;
typedef float FLOAT;
typedef struct tagRECT
{
	LONG left;
	LONG top;
	LONG right;
	LONG bottom;
} RECT;
typedef struct tagRECT *PRECT;
typedef struct tagRECT *LPRECT;
typedef const RECT *LPCRECT;
#endif
typedef unsigned char UCHAR;
typedef short SHORT;
typedef unsigned short USHORT;
typedef DWORD ULONG;
typedef double DOUBLE;
#ifndef _DWORDLONG_
typedef unsigned __int64 DWORDLONG;
typedef DWORDLONG *PDWORDLONG;
#endif
#ifndef _ULONGLONG_
typedef __int64 LONGLONG;
typedef unsigned __int64 ULONGLONG;
typedef LONGLONG *PLONGLONG;
typedef ULONGLONG *PULONGLONG;
#endif
#if 0
typedef struct _LARGE_INTEGER
{
	LONGLONG QuadPart;
} LARGE_INTEGER;
typedef LARGE_INTEGER *PLARGE_INTEGER;
typedef struct _ULARGE_INTEGER
{
	ULONGLONG QuadPart;
} ULARGE_INTEGER;
#endif
#ifndef _WINBASE_
#ifndef _FILETIME_
#define _FILETIME_
typedef struct _FILETIME
{
	DWORD dwLowDateTime;
	DWORD dwHighDateTime;
} FILETIME;
typedef struct _FILETIME *PFILETIME;
typedef struct _FILETIME *LPFILETIME;
#endif
#ifndef _SYSTEMTIME_
#define _SYSTEMTIME_
typedef struct _SYSTEMTIME
{
	WORD wYear;
	WORD wMonth;
	WORD wDayOfWeek;
	WORD wDay;
	WORD wHour;
	WORD wMinute;
	WORD wSecond;
	WORD wMilliseconds;
} SYSTEMTIME;
typedef struct _SYSTEMTIME *PSYSTEMTIME;
typedef struct _SYSTEMTIME *LPSYSTEMTIME;
#endif
#ifndef _SECURITY_ATTRIBUTES_
#define _SECURITY_ATTRIBUTES_
typedef struct _SECURITY_ATTRIBUTES
{
	DWORD nLength;
	LPVOID lpSecurityDescriptor;
	BOOL bInheritHandle;
} SECURITY_ATTRIBUTES;
typedef struct _SECURITY_ATTRIBUTES *PSECURITY_ATTRIBUTES;
typedef struct _SECURITY_ATTRIBUTES *LPSECURITY_ATTRIBUTES;
#endif
#ifndef SECURITY_DESCRIPTOR_REVISION
typedef USHORT SECURITY_DESCRIPTOR_CONTROL;
typedef USHORT *PSECURITY_DESCRIPTOR_CONTROL;
typedef PVOID PSID;
typedef struct _ACL
{
	UCHAR AclRevision;
	UCHAR Sbz1;
	USHORT AclSize;
	USHORT AceCount;
	USHORT Sbz2;
} ACL;
typedef ACL *PACL;
typedef struct _SECURITY_DESCRIPTOR
{
	UCHAR Revision;
	UCHAR Sbz1;
	SECURITY_DESCRIPTOR_CONTROL Control;
	PSID Owner;
	PSID Group;
	PACL Sacl;
	PACL Dacl;
} SECURITY_DESCRIPTOR;
typedef struct _SECURITY_DESCRIPTOR *PISECURITY_DESCRIPTOR;
#endif
#endif
typedef struct _COAUTHIDENTITY
{
	USHORT *User;
	ULONG UserLength;
	USHORT *Domain;
	ULONG DomainLength;
	USHORT *Password;
	ULONG PasswordLength;
	ULONG Flags;
} COAUTHIDENTITY;
typedef struct _COAUTHINFO
{
	DWORD dwAuthnSvc;
	DWORD dwAuthzSvc;
	LPWSTR pwszServerPrincName;
	DWORD dwAuthnLevel;
	DWORD dwImpersonationLevel;
	COAUTHIDENTITY *pAuthIdentityData;
	DWORD dwCapabilities;
} COAUTHINFO;
typedef LONG SCODE;
typedef SCODE *PSCODE;
#ifndef _HRESULT_DEFINED
#define _HRESULT_DEFINED
typedef long HRESULT;
#endif
#ifndef __OBJECTID_DEFINED
#define __OBJECTID_DEFINED
#define _OBJECTID_DEFINED
typedef struct _OBJECTID
{
	GUID Lineage;
	unsigned long Uniquifier;
} OBJECTID;
#endif
#if 0
typedef GUID *REFGUID;
typedef IID *REFIID;
typedef CLSID *REFCLSID;
typedef FMTID *REFFMTID;
#endif
typedef enum tagMEMCTX
{
	MEMCTX_TASK = 1,
	MEMCTX_SHARED = 2,
	MEMCTX_MACSYSTEM = 3,
	MEMCTX_UNKNOWN = -1,
	MEMCTX_SAME = -2
} MEMCTX;
#ifndef _ROTFLAGS_DEFINED
#define _ROTFLAGS_DEFINED
#define ROTFLAGS_REGISTRATIONKEEPSALIVE 0x1
#define ROTFLAGS_ALLOWANYCLIENT 0x2
#endif
#ifndef _ROTREGFLAGS_DEFINED
#define _ROTREGFLAGS_DEFINED
#define ROTREGFLAGS_ALLOWANYCLIENT 0x1
#endif
#ifndef _APPIDREGFLAGS_DEFINED
#define _APPIDREGFLAGS_DEFINED
#define APPIDREGFLAGS_ACTIVATE_IUSERVER_INDESKTOP 0x1
#define APPIDREGFLAGS_SECURE_SERVER_PROCESS_SD_AND_BIND 0x2
#define APPIDREGFLAGS_ISSUE_ACTIVATION_RPC_AT_IDENTIFY 0x4
#endif
#ifndef _ROT_COMPARE_MAX_DEFINED
#define _ROT_COMPARE_MAX_DEFINED
#define ROT_COMPARE_MAX 2048
#endif
#ifndef _DCOMSCM_REMOTECALL_FLAGS_DEFINED
#define _DCOMSCM_REMOTECALL_FLAGS_DEFINED
#define DCOMSCM_ACTIVATION_USE_ALL_AUTHNSERVICES 0x1
#define DCOMSCM_ACTIVATION_DISALLOW_UNSECURE_CALL 0x2
#define DCOMSCM_RESOLVE_USE_ALL_AUTHNSERVICES 0x4
#define DCOMSCM_RESOLVE_DISALLOW_UNSECURE_CALL 0x8
#define DCOMSCM_PING_USE_MID_AUTHNSERVICE 0x10
#define DCOMSCM_PING_DISALLOW_UNSECURE_CALL 0x20
#endif
typedef enum tagCLSCTX
{
	CLSCTX_INPROC_SERVER = 0x1,
	CLSCTX_INPROC_HANDLER = 0x2,
	CLSCTX_LOCAL_SERVER = 0x4,
	CLSCTX_INPROC_SERVER16 = 0x8,
	CLSCTX_REMOTE_SERVER = 0x10,
	CLSCTX_INPROC_HANDLER16 = 0x20,
	CLSCTX_RESERVED1 = 0x40,
	CLSCTX_RESERVED2 = 0x80,
	CLSCTX_RESERVED3 = 0x100,
	CLSCTX_RESERVED4 = 0x200,
	CLSCTX_NO_CODE_DOWNLOAD = 0x400,
	CLSCTX_RESERVED5 = 0x800,
	CLSCTX_NO_CUSTOM_MARSHAL = 0x1000,
	CLSCTX_ENABLE_CODE_DOWNLOAD = 0x2000,
	CLSCTX_NO_FAILURE_LOG = 0x4000,
	CLSCTX_DISABLE_AAA = 0x8000,
	CLSCTX_ENABLE_AAA = 0x10000,
	CLSCTX_FROM_DEFAULT_CONTEXT = 0x20000,
	CLSCTX_ACTIVATE_32_BIT_SERVER = 0x40000,
	CLSCTX_ACTIVATE_64_BIT_SERVER = 0x80000,
	CLSCTX_ENABLE_CLOAKING = 0x100000,
	CLSCTX_PS_DLL = (int)0x80000000
} CLSCTX;
#define CLSCTX_VALID_MASK	(CLSCTX_INPROC_SERVER | CLSCTX_INPROC_HANDLER | CLSCTX_LOCAL_SERVER | CLSCTX_INPROC_SERVER16 | \
							 CLSCTX_REMOTE_SERVER | CLSCTX_NO_CODE_DOWNLOAD | CLSCTX_NO_CUSTOM_MARSHAL | CLSCTX_ENABLE_CODE_DOWNLOAD | \
							 CLSCTX_NO_FAILURE_LOG | CLSCTX_DISABLE_AAA | CLSCTX_ENABLE_AAA | CLSCTX_FROM_DEFAULT_CONTEXT | \
							 CLSCTX_ACTIVATE_32_BIT_SERVER | CLSCTX_ACTIVATE_64_BIT_SERVER | CLSCTX_ENABLE_CLOAKING | CLSCTX_PS_DLL)
typedef enum tagMSHLFLAGS
{
	MSHLFLAGS_NORMAL = 0,
	MSHLFLAGS_TABLESTRONG = 1,
	MSHLFLAGS_TABLEWEAK = 2,
	MSHLFLAGS_NOPING = 4,
	MSHLFLAGS_RESERVED1 = 8,
	MSHLFLAGS_RESERVED2 = 16,
	MSHLFLAGS_RESERVED3 = 32,
	MSHLFLAGS_RESERVED4 = 64
} MSHLFLAGS;
typedef enum tagMSHCTX
{
	MSHCTX_LOCAL = 0,
	MSHCTX_NOSHAREDMEM = 1,
	MSHCTX_DIFFERENTMACHINE = 2,
	MSHCTX_INPROC = 3,
	MSHCTX_CROSSCTX = 4
} MSHCTX;
typedef enum tagDVASPECT
{
	DVASPECT_CONTENT = 1,
	DVASPECT_THUMBNAIL = 2,
	DVASPECT_ICON = 4,
	DVASPECT_DOCPRINT = 8
} DVASPECT;
typedef enum tagSTGC
{
	STGC_DEFAULT = 0,
	STGC_OVERWRITE = 1,
	STGC_ONLYIFCURRENT = 2,
	STGC_DANGEROUSLYCOMMITMERELYTODISKCACHE = 4,
	STGC_CONSOLIDATE = 8
} STGC;
typedef enum tagSTGMOVE
{
	STGMOVE_MOVE = 0,
	STGMOVE_COPY = 1,
	STGMOVE_SHALLOWCOPY = 2
} STGMOVE;
typedef enum tagSTATFLAG
{
	STATFLAG_DEFAULT = 0,
	STATFLAG_NONAME = 1,
	STATFLAG_NOOPEN = 2
} STATFLAG;
typedef void *HCONTEXT;
#ifndef _LCID_DEFINED
#define _LCID_DEFINED
typedef DWORD LCID;
#endif
#ifndef _LANGID_DEFINED
#define _LANGID_DEFINED
typedef USHORT LANGID;
#endif
typedef struct _BYTE_BLOB
{
	unsigned long clSize;
	byte abData[1];
} BYTE_BLOB;
typedef BYTE_BLOB *UP_BYTE_BLOB;
typedef struct _WORD_BLOB
{
	unsigned long clSize;
	unsigned short asData[1];
} WORD_BLOB;
typedef WORD_BLOB *UP_WORD_BLOB;
typedef struct _DWORD_BLOB
{
	unsigned long clSize;
	unsigned long alData[1];
} DWORD_BLOB;
typedef DWORD_BLOB *UP_DWORD_BLOB;
typedef struct _FLAGGED_BYTE_BLOB
{
	unsigned long fFlags;
	unsigned long clSize;
	byte abData[1];
} FLAGGED_BYTE_BLOB;
typedef FLAGGED_BYTE_BLOB *UP_FLAGGED_BYTE_BLOB;
typedef struct _FLAGGED_WORD_BLOB
{
	unsigned long fFlags;
	unsigned long clSize;
	unsigned short asData[1];
} FLAGGED_WORD_BLOB;
typedef FLAGGED_WORD_BLOB *UP_FLAGGED_WORD_BLOB;
typedef struct _BYTE_SIZEDARR
{
	unsigned long clSize;
	byte *pData;
} BYTE_SIZEDARR;
typedef struct _SHORT_SIZEDARR
{
	unsigned long clSize;
	unsigned short *pData;
} WORD_SIZEDARR;
typedef struct _LONG_SIZEDARR
{
	unsigned long clSize;
	unsigned long *pData;
} DWORD_SIZEDARR;
typedef struct _HYPER_SIZEDARR
{
	unsigned long clSize;
	hyper *pData;
} HYPER_SIZEDARR;
#define	WDT_INPROC_CALL	( 0x48746457 )
#define	WDT_REMOTE_CALL	( 0x52746457 )
#define	WDT_INPROC64_CALL	( 0x50746457 )
typedef struct _userCLIPFORMAT
{
	long fContext;
	union __MIDL_IWinTypes_0001
	{
		DWORD dwValue;
		wchar_t *pwszName;
	} u;
} userCLIPFORMAT;
typedef userCLIPFORMAT *wireCLIPFORMAT;
typedef WORD CLIPFORMAT;
typedef struct _GDI_NONREMOTE
{
	long fContext;
	union __MIDL_IWinTypes_0002
	{
		long hInproc;
		DWORD_BLOB *hRemote;
	} u;
} GDI_NONREMOTE;
typedef struct _userHGLOBAL
{
	long fContext;
	union __MIDL_IWinTypes_0003
	{
		long hInproc;
		FLAGGED_BYTE_BLOB *hRemote;
		__int64 hInproc64;
	} u;
} userHGLOBAL;
typedef userHGLOBAL *wireHGLOBAL;
typedef struct _userHMETAFILE
{
	long fContext;
	union __MIDL_IWinTypes_0004
	{
		long hInproc;
		BYTE_BLOB *hRemote;
		__int64 hInproc64;
	} u;
} userHMETAFILE;
typedef struct _remoteMETAFILEPICT
{
	long mm;
	long xExt;
	long yExt;
	userHMETAFILE *hMF;
} remoteMETAFILEPICT;
typedef struct _userHMETAFILEPICT
{
	long fContext;
	union __MIDL_IWinTypes_0005
	{
		long hInproc;
		remoteMETAFILEPICT *hRemote;
		__int64 hInproc64;
	} u;
} userHMETAFILEPICT;
typedef struct _userHENHMETAFILE
{
	long fContext;
	union __MIDL_IWinTypes_0006
	{
		long hInproc;
		BYTE_BLOB *hRemote;
		__int64 hInproc64;
	} u;
} userHENHMETAFILE;
typedef struct _userBITMAP
{
	LONG bmType;
	LONG bmWidth;
	LONG bmHeight;
	LONG bmWidthBytes;
	WORD bmPlanes;
	WORD bmBitsPixel;
	ULONG cbSize;
	byte pBuffer[1];
} userBITMAP;
typedef struct _userHBITMAP
{
	long fContext;
	union __MIDL_IWinTypes_0007
	{
		long hInproc;
		userBITMAP *hRemote;
		__int64 hInproc64;
	} u;
} userHBITMAP;
typedef struct _userHPALETTE
{
	long fContext;
	union __MIDL_IWinTypes_0008
	{
		long hInproc;
		LOGPALETTE *hRemote;
		__int64 hInproc64;
	} u;
} userHPALETTE;
typedef struct _RemotableHandle
{
	long fContext;
	union __MIDL_IWinTypes_0009
	{
		long hInproc;
		long hRemote;
	} u;
} RemotableHandle;
typedef RemotableHandle *wireHWND;
typedef RemotableHandle *wireHMENU;
typedef RemotableHandle *wireHACCEL;
typedef RemotableHandle *wireHBRUSH;
typedef RemotableHandle *wireHFONT;
typedef RemotableHandle *wireHDC;
typedef RemotableHandle *wireHICON;
typedef RemotableHandle *wireHRGN;
#if 0
typedef void *HWND;
typedef void *HMENU;
typedef void *HACCEL;
typedef void *HBRUSH;
typedef void *HFONT;
typedef void *HDC;
typedef void *HICON;
typedef void *HRGN;
#ifndef _HCURSOR_DEFINED
#define _HCURSOR_DEFINED
typedef HICON HCURSOR;
#endif
#endif
#ifndef _TEXTMETRIC_DEFINED
#define _TEXTMETRIC_DEFINED
typedef struct tagTEXTMETRICW
{
	LONG tmHeight;
	LONG tmAscent;
	LONG tmDescent;
	LONG tmInternalLeading;
	LONG tmExternalLeading;
	LONG tmAveCharWidth;
	LONG tmMaxCharWidth;
	LONG tmWeight;
	LONG tmOverhang;
	LONG tmDigitizedAspectX;
	LONG tmDigitizedAspectY;
	WCHAR tmFirstChar;
	WCHAR tmLastChar;
	WCHAR tmDefaultChar;
	WCHAR tmBreakChar;
	BYTE tmItalic;
	BYTE tmUnderlined;
	BYTE tmStruckOut;
	BYTE tmPitchAndFamily;
	BYTE tmCharSet;
} TEXTMETRICW;
typedef struct tagTEXTMETRICW *PTEXTMETRICW;
typedef struct tagTEXTMETRICW *LPTEXTMETRICW;
#endif
#ifndef _WIN32
#ifndef WINAPI
typedef struct tagMSG
{
	HWND hwnd;
	UINT message;
	WPARAM wParam;
	LPARAM lParam;
	DWORD time;
	POINT pt;
} MSG;
typedef struct tagMSG *PMSG;
typedef struct tagMSG *NPMSG;
typedef struct tagMSG *LPMSG;
#endif
#endif
typedef userHBITMAP *wireHBITMAP;
typedef userHPALETTE *wireHPALETTE;
typedef userHENHMETAFILE *wireHENHMETAFILE;
typedef userHMETAFILE *wireHMETAFILE;
typedef userHMETAFILEPICT *wireHMETAFILEPICT;
#if 0
typedef void *HGLOBAL;
typedef HGLOBAL HLOCAL;
typedef void *HBITMAP;
typedef void *HPALETTE;
typedef void *HENHMETAFILE;
typedef void *HMETAFILE;
#endif
typedef void *HMETAFILEPICT;
extern RPC_IF_HANDLE IWinTypes_v0_1_c_ifspec;
extern RPC_IF_HANDLE IWinTypes_v0_1_s_ifspec;
#endif
typedef double DATE;
#ifndef _tagCY_DEFINED
#define _tagCY_DEFINED
#define _CY_DEFINED
#if 0
typedef struct tagCY
{
	LONGLONG int64;
} CY;
#else
typedef union tagCY
{
	struct
	{
		unsigned long Lo;
		long Hi;
	} DUMMYSTRUCTNAME;
	LONGLONG int64;
} CY;
#endif
#endif
typedef CY *LPCY;
#if 0
typedef struct tagDEC
{
	USHORT wReserved;
	BYTE scale;
	BYTE sign;
	ULONG Hi32;
	ULONGLONG Lo64;
} DECIMAL;
#else
typedef struct tagDEC
{
	USHORT wReserved;
	union
	{
		struct
		{
			BYTE scale;
			BYTE sign;
		} DUMMYSTRUCTNAME;
		USHORT signscale;
	} DUMMYUNIONNAME;
	ULONG Hi32;
	union
	{
		struct
		{
			ULONG Lo32;
			ULONG Mid32;
		} DUMMYSTRUCTNAME2;
		ULONGLONG Lo64;
	} DUMMYUNIONNAME2;
} DECIMAL;
#define DECIMAL_NEG ((BYTE)0x80)
#define DECIMAL_SETZERO(dec)	{(dec).Lo64 = 0; (dec).Hi32 = 0; (dec).signscale = 0;}
#endif
typedef DECIMAL *LPDECIMAL;
typedef FLAGGED_WORD_BLOB *wireBSTR;
typedef OLECHAR *BSTR;
typedef BSTR *LPBSTR;
typedef short VARIANT_BOOL;
//#if !__STDC__ && (__POCC__ <= 270)	//Frankie unusefull MS messing declaration
//typedef VARIANT_BOOL _VARIANT_BOOL;
//#else
//#define _VARIANT_BOOL    /##/
//#endif
typedef boolean BOOLEAN;
#ifndef _tagBSTRBLOB_DEFINED
#define _tagBSTRBLOB_DEFINED
typedef struct tagBSTRBLOB
{
	ULONG cbSize;
	BYTE *pData;
} BSTRBLOB;
typedef struct tagBSTRBLOB *LPBSTRBLOB;
#endif
#define VARIANT_TRUE ((VARIANT_BOOL)-1)
#define VARIANT_FALSE ((VARIANT_BOOL)0)
#ifndef _tagBLOB_DEFINED
#define _tagBLOB_DEFINED
#define _BLOB_DEFINED
#define _LPBLOB_DEFINED
typedef struct tagBLOB
{
	ULONG cbSize;
	BYTE *pBlobData;
} BLOB;
typedef struct tagBLOB *LPBLOB;
#endif
typedef struct tagCLIPDATA
{
	ULONG cbSize;
	long ulClipFmt;
	BYTE *pClipData;
} CLIPDATA;
#define CBPCLIPDATA(clipdata)    ( (clipdata).cbSize - sizeof((clipdata).ulClipFmt) )
typedef unsigned short VARTYPE;
enum VARENUM
{ VT_EMPTY = 0,
	VT_NULL = 1,
	VT_I2 = 2,
	VT_I4 = 3,
	VT_R4 = 4,
	VT_R8 = 5,
	VT_CY = 6,
	VT_DATE = 7,
	VT_BSTR = 8,
	VT_DISPATCH = 9,
	VT_ERROR = 10,
	VT_BOOL = 11,
	VT_VARIANT = 12,
	VT_UNKNOWN = 13,
	VT_DECIMAL = 14,
	VT_I1 = 16,
	VT_UI1 = 17,
	VT_UI2 = 18,
	VT_UI4 = 19,
	VT_I8 = 20,
	VT_UI8 = 21,
	VT_INT = 22,
	VT_UINT = 23,
	VT_VOID = 24,
	VT_HRESULT = 25,
	VT_PTR = 26,
	VT_SAFEARRAY = 27,
	VT_CARRAY = 28,
	VT_USERDEFINED = 29,
	VT_LPSTR = 30,
	VT_LPWSTR = 31,
	VT_RECORD = 36,
	VT_INT_PTR = 37,
	VT_UINT_PTR = 38,
	VT_FILETIME = 64,
	VT_BLOB = 65,
	VT_STREAM = 66,
	VT_STORAGE = 67,
	VT_STREAMED_OBJECT = 68,
	VT_STORED_OBJECT = 69,
	VT_BLOB_OBJECT = 70,
	VT_CF = 71,
	VT_CLSID = 72,
	VT_VERSIONED_STREAM = 73,
	VT_BSTR_BLOB = 0xfff,
	VT_VECTOR = 0x1000,
	VT_ARRAY = 0x2000,
	VT_BYREF = 0x4000,
	VT_RESERVED = 0x8000,
	VT_ILLEGAL = 0xffff,
	VT_ILLEGALMASKED = 0xfff,
	VT_TYPEMASK = 0xfff
};
typedef ULONG PROPID;
#ifndef PROPERTYKEY_DEFINED
#define PROPERTYKEY_DEFINED
typedef struct _tagpropertykey
{
	GUID fmtid;
	DWORD pid;
} PROPERTYKEY;
#endif
#ifndef SID_IDENTIFIER_AUTHORITY_DEFINED
#define SID_IDENTIFIER_AUTHORITY_DEFINED
typedef struct _SID_IDENTIFIER_AUTHORITY
{
	UCHAR Value[6];
} SID_IDENTIFIER_AUTHORITY;
typedef struct _SID_IDENTIFIER_AUTHORITY *PSID_IDENTIFIER_AUTHORITY;
#endif
#ifndef SID_DEFINED
#define SID_DEFINED
typedef struct _SID
{
	BYTE Revision;
	BYTE SubAuthorityCount;
	SID_IDENTIFIER_AUTHORITY IdentifierAuthority;
	ULONG SubAuthority[1];
} SID;
typedef struct _SID *PISID;
typedef struct _SID_AND_ATTRIBUTES
{
	SID *Sid;
	DWORD Attributes;
} SID_AND_ATTRIBUTES;
typedef struct _SID_AND_ATTRIBUTES *PSID_AND_ATTRIBUTES;
#endif
typedef struct tagCSPLATFORM
{
	DWORD dwPlatformId;
	DWORD dwVersionHi;
	DWORD dwVersionLo;
	DWORD dwProcessorArch;
} CSPLATFORM;
typedef struct tagQUERYCONTEXT
{
	DWORD dwContext;
	CSPLATFORM Platform;
	LCID Locale;
	DWORD dwVersionHi;
	DWORD dwVersionLo;
} QUERYCONTEXT;
typedef enum tagTYSPEC
{
	TYSPEC_CLSID = 0,
	TYSPEC_FILEEXT = (TYSPEC_CLSID + 1),
	TYSPEC_MIMETYPE = (TYSPEC_FILEEXT + 1),
	TYSPEC_FILENAME = (TYSPEC_MIMETYPE + 1),
	TYSPEC_PROGID = (TYSPEC_FILENAME + 1),
	TYSPEC_PACKAGENAME = (TYSPEC_PROGID + 1),
	TYSPEC_OBJECTID = (TYSPEC_PACKAGENAME + 1)
} TYSPEC;
typedef struct __MIDL___MIDL_itf_wtypes_0000_0001_0001
{
	DWORD tyspec;
	union __MIDL___MIDL_itf_wtypes_0000_0001_0005
	{
		CLSID clsid;
		LPOLESTR pFileExt;
		LPOLESTR pMimeType;
		LPOLESTR pProgId;
		LPOLESTR pFileName;
		struct
		{
			LPOLESTR pPackageName;
			GUID PolicyId;
		} ByName;
		struct
		{
			GUID ObjectId;
			GUID PolicyId;
		} ByObjectId;
	} tagged_union;
} uCLSSPEC;
extern RPC_IF_HANDLE __MIDL_itf_wtypes_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wtypes_0000_0001_v0_0_s_ifspec;
#endif
