/*+@@file@@----------------------------------------------------------------*//*!
 \file		msdelta.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug 14 19:19:12 2016
 \date		Modified on Sun Aug 14 19:19:12 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __msdelta_h__
#define __msdelta_h__
#if __POCC__ >= 500
#pragma once
#endif
#include <windows.h>
#include <wincrypt.h>
#define DELTA_FILE_SIZE_LIMIT		( 32 * 1024 * 1024 )
#define DELTA_OPTIONS_SIZE_LIMIT	( 128 * 1024 * 1024 )
typedef struct _DELTA_INPUT
{
    union
    {
        LPCVOID lpcStart;
        LPVOID lpStart;
    };
    SIZE_T uSize;
    BOOL Editable;
} DELTA_INPUT;
typedef DELTA_INPUT *LPDELTA_INPUT;
typedef const DELTA_INPUT *LPCDELTA_INPUT;
typedef struct _DELTA_OUTPUT
{
    LPVOID lpStart;
    SIZE_T uSize;
} DELTA_OUTPUT;
typedef DELTA_OUTPUT *LPDELTA_OUTPUT;
typedef const DELTA_OUTPUT *LPCDELTA_OUTPUT;
typedef __int64 DELTA_FILE_TYPE;
#define DELTA_FILE_TYPE_RAW                 ( (DELTA_FILE_TYPE) 0x00000001 )
#define DELTA_FILE_TYPE_I386                ( (DELTA_FILE_TYPE) 0x00000002 )
#define DELTA_FILE_TYPE_IA64                ( (DELTA_FILE_TYPE) 0x00000004 )
#define DELTA_FILE_TYPE_AMD64               ( (DELTA_FILE_TYPE) 0x00000008 )
#define DELTA_FILE_TYPE_SET_RAW_ONLY        ( DELTA_FILE_TYPE_RAW )
#define DELTA_FILE_TYPE_SET_EXECUTABLES     ( DELTA_FILE_TYPE_RAW | DELTA_FILE_TYPE_I386 | DELTA_FILE_TYPE_IA64 | DELTA_FILE_TYPE_AMD64 )
typedef __int64 DELTA_FLAG_TYPE;
#define DELTA_FLAG_NONE                     ( (DELTA_FLAG_TYPE)0x00000000 )
#define DELTA_APPLY_FLAG_ALLOW_PA19         ( (DELTA_FLAG_TYPE)0x00000001 )
#define DELTA_FLAG_E8                       ( (DELTA_FLAG_TYPE)0x00000001 )
#define DELTA_FLAG_MARK                     ( (DELTA_FLAG_TYPE)0x00000002 )
#define DELTA_FLAG_IMPORTS                  ( (DELTA_FLAG_TYPE)0x00000004 )
#define DELTA_FLAG_EXPORTS                  ( (DELTA_FLAG_TYPE)0x00000008 )
#define DELTA_FLAG_RESOURCES                ( (DELTA_FLAG_TYPE)0x00000010 )
#define DELTA_FLAG_RELOCS                   ( (DELTA_FLAG_TYPE)0x00000020 )
#define DELTA_FLAG_I386_SMASHLOCK           ( (DELTA_FLAG_TYPE)0x00000040 )
#define DELTA_FLAG_I386_JMPS                ( (DELTA_FLAG_TYPE)0x00000080 )
#define DELTA_FLAG_I386_CALLS               ( (DELTA_FLAG_TYPE)0x00000100 )
#define DELTA_FLAG_AMD64_DISASM             ( (DELTA_FLAG_TYPE)0x00000200 )
#define DELTA_FLAG_AMD64_PDATA              ( (DELTA_FLAG_TYPE)0x00000400 )
#define DELTA_FLAG_IA64_DISASM              ( (DELTA_FLAG_TYPE)0x00000800 )
#define DELTA_FLAG_IA64_PDATA               ( (DELTA_FLAG_TYPE)0x00001000 )
#define DELTA_FLAG_UNBIND                   ( (DELTA_FLAG_TYPE)0x00002000 )
#define DELTA_FLAG_CLI_DISASM               ( (DELTA_FLAG_TYPE)0x00004000 )
#define DELTA_FLAG_CLI_METADATA             ( (DELTA_FLAG_TYPE)0x00008000 )
#define DELTA_FLAG_HEADERS                  ( (DELTA_FLAG_TYPE)0x00010000 )
#define DELTA_FLAG_IGNORE_FILE_SIZE_LIMIT   ( (DELTA_FLAG_TYPE)0x00020000 )
#define DELTA_FLAG_IGNORE_OPTIONS_SIZE_LIMIT ((DELTA_FLAG_TYPE)0x00040000 )
#define DELTA_DEFAULT_FLAGS_RAW             ( DELTA_FLAG_NONE )
#define DELTA_DEFAULT_FLAGS_I386            ( DELTA_FLAG_MARK | DELTA_FLAG_IMPORTS | DELTA_FLAG_EXPORTS | DELTA_FLAG_RESOURCES | DELTA_FLAG_RELOCS | DELTA_FLAG_I386_SMASHLOCK | DELTA_FLAG_I386_JMPS | DELTA_FLAG_I386_CALLS | DELTA_FLAG_UNBIND | DELTA_FLAG_CLI_DISASM | DELTA_FLAG_CLI_METADATA ) 
#define DELTA_DEFAULT_FLAGS_IA64            ( DELTA_FLAG_MARK | DELTA_FLAG_IMPORTS | DELTA_FLAG_EXPORTS | DELTA_FLAG_RESOURCES | DELTA_FLAG_RELOCS | DELTA_FLAG_IA64_DISASM | DELTA_FLAG_IA64_PDATA | DELTA_FLAG_UNBIND | DELTA_FLAG_CLI_DISASM | DELTA_FLAG_CLI_METADATA ) 
#define DELTA_DEFAULT_FLAGS_AMD64           ( DELTA_FLAG_MARK | DELTA_FLAG_IMPORTS | DELTA_FLAG_EXPORTS | DELTA_FLAG_RESOURCES | DELTA_FLAG_RELOCS | DELTA_FLAG_AMD64_DISASM | DELTA_FLAG_AMD64_PDATA | DELTA_FLAG_UNBIND | DELTA_FLAG_CLI_DISASM | DELTA_FLAG_CLI_METADATA )
#define DELTA_MAX_HASH_SIZE                 32
typedef struct _DELTA_HASH
{
    DWORD HashSize;
    UCHAR HashValue[ DELTA_MAX_HASH_SIZE ];
} DELTA_HASH;
typedef DELTA_HASH *LPDELTA_HASH;
typedef const DELTA_HASH *LPCDELTA_HASH;
typedef struct _DELTA_HEADER_INFO
{
    DELTA_FILE_TYPE FileTypeSet;
    DELTA_FILE_TYPE FileType;
    DELTA_FLAG_TYPE Flags;
    SIZE_T  TargetSize;
    FILETIME TargetFileTime;
    ALG_ID TargetHashAlgId;
    DELTA_HASH TargetHash;
} DELTA_HEADER_INFO;
typedef DELTA_HEADER_INFO *LPDELTA_HEADER_INFO;
typedef const DELTA_HEADER_INFO *LPCDELTA_HEADER_INFO;
BOOL WINAPI GetDeltaInfoB(DELTA_INPUT Delta, LPDELTA_HEADER_INFO lpHeaderInfo);
BOOL WINAPI GetDeltaInfoA(LPCSTR lpDeltaName, LPDELTA_HEADER_INFO lpHeaderInfo);
BOOL WINAPI GetDeltaInfoW(LPCWSTR lpDeltaName, LPDELTA_HEADER_INFO lpHeaderInfo);
#ifdef _UNICODE
#define GetDeltaInfo GetDeltaInfoW
#else
#define GetDeltaInfo GetDeltaInfoA
#endif
BOOL WINAPI ApplyDeltaB(DELTA_FLAG_TYPE ApplyFlags, DELTA_INPUT Source, DELTA_INPUT Delta, LPDELTA_OUTPUT lpTarget);
BOOL WINAPI ApplyDeltaProvidedB(DELTA_FLAG_TYPE ApplyFlags, DELTA_INPUT Source, DELTA_INPUT Delta, LPVOID lpTarget, SIZE_T uTargetSize);
BOOL WINAPI ApplyDeltaA(DELTA_FLAG_TYPE ApplyFlags, LPCSTR lpSourceName, LPCSTR lpDeltaName, LPCSTR lpTargetName);
BOOL WINAPI ApplyDeltaW(DELTA_FLAG_TYPE ApplyFlags, LPCWSTR lpSourceName, LPCWSTR lpDeltaName, LPCWSTR lpTargetName);
#ifdef _UNICODE
#define ApplyDelta ApplyDeltaW
#else
#define ApplyDelta ApplyDeltaA
#endif
BOOL WINAPI CreateDeltaB(DELTA_FILE_TYPE FileTypeSet, DELTA_FLAG_TYPE SetFlags, DELTA_FLAG_TYPE ResetFlags, DELTA_INPUT Source, DELTA_INPUT Target, DELTA_INPUT SourceOptions, DELTA_INPUT TargetOptions, DELTA_INPUT GlobalOptions, const FILETIME *lpTargetFileTime, ALG_ID HashAlgId, LPDELTA_OUTPUT lpDelta);
BOOL WINAPI CreateDeltaA(DELTA_FILE_TYPE FileTypeSet, DELTA_FLAG_TYPE SetFlags, DELTA_FLAG_TYPE ResetFlags, LPCSTR lpSourceName, LPCSTR lpTargetName, LPCSTR lpSourceOptionsName, LPCSTR lpTargetOptionsName, DELTA_INPUT GlobalOptions, const FILETIME *lpTargetFileTime, ALG_ID HashAlgId, LPCSTR lpDeltaName);
BOOL WINAPI CreateDeltaW(DELTA_FILE_TYPE FileTypeSet, DELTA_FLAG_TYPE SetFlags, DELTA_FLAG_TYPE ResetFlags, LPCWSTR lpSourceName, LPCWSTR lpTargetName, LPCWSTR lpSourceOptionsName, LPCWSTR lpTargetOptionsName, DELTA_INPUT GlobalOptions, const FILETIME *lpTargetFileTime, ALG_ID HashAlgId, LPCWSTR lpDeltaName);
#ifdef _UNICODE
#define CreateDelta CreateDeltaW
#else
#define CreateDelta CreateDeltaA
#endif
BOOL WINAPI GetDeltaSignatureB(DELTA_FILE_TYPE FileTypeSet, ALG_ID HashAlgId, DELTA_INPUT Source, LPDELTA_HASH lpHash);
BOOL WINAPI GetDeltaSignatureA(DELTA_FILE_TYPE FileTypeSet, ALG_ID HashAlgId, LPCSTR lpSourceName, LPDELTA_HASH lpHash);
BOOL WINAPI GetDeltaSignatureW(DELTA_FILE_TYPE FileTypeSet, ALG_ID HashAlgId, LPCWSTR lpSourceName, LPDELTA_HASH lpHash);
#ifdef _UNICODE
#define GetDeltaSignature GetDeltaSignatureW
#else
#define GetDeltaSignature GetDeltaSignatureA
#endif
BOOL WINAPI DeltaNormalizeProvidedB(DELTA_FILE_TYPE FileTypeSet, DELTA_FLAG_TYPE NormalizeFlags, DELTA_INPUT NormalizeOptions, LPVOID lpSource, SIZE_T uSourceSize);
BOOL WINAPI DeltaFree(LPVOID lpMemory);
#endif
