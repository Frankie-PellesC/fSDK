/*+@@file@@----------------------------------------------------------------*//*!
 \file		fontsub.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 10 18:11:11 2016
 \date		Modified on Sun Jul 10 18:11:11 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef FONTSUB_DOT_H_DEFINED
#define FONTSUB_DOT_H_DEFINED
#if __POCC__ >= 500
#pragma once
#endif
#ifndef CONST
#define CONST const
#endif     
typedef void *(__cdecl *CFP_ALLOCPROC)(size_t);
typedef void *(__cdecl *CFP_REALLOCPROC)(void *, size_t);
typedef void (__cdecl *CFP_FREEPROC)(void *);
unsigned long __cdecl CreateFontPackage(
CONST unsigned char * puchSrcBuffer,
CONST unsigned long ulSrcBufferSize,
unsigned char ** ppuchFontPackageBuffer,
unsigned long * pulFontPackageBufferSize,
unsigned long * pulBytesWritten,
CONST unsigned short usFlag,
CONST unsigned short usTTCIndex,
CONST unsigned short usSubsetFormat,
CONST unsigned short usSubsetLanguage,
CONST unsigned short usSubsetPlatform,
CONST unsigned short usSubsetEncoding,
CONST unsigned short *pusSubsetKeepList,
CONST unsigned short usSubsetListCount,
CFP_ALLOCPROC lpfnAllocate,
CFP_REALLOCPROC lpfnReAllocate,
CFP_FREEPROC lpfnFree,
void * lpvReserved);
#define TTFCFP_SUBSET 0
#define TTFCFP_SUBSET1 1
#define TTFCFP_DELTA 2
#define TTFCFP_UNICODE_PLATFORMID 0
#define TTFCFP_APPLE_PLATFORMID   1
#define TTFCFP_ISO_PLATFORMID     2
#define TTFCFP_MS_PLATFORMID      3
#define TTFCFP_STD_MAC_CHAR_SET  0
#define TTFCFP_SYMBOL_CHAR_SET  0
#define TTFCFP_UNICODE_CHAR_SET  1
#define TTFCFP_DONT_CARE  0xFFFF
#define TTFCFP_LANG_KEEP_ALL 0
#define TTFCFP_FLAGS_SUBSET 0x0001
#define TTFCFP_FLAGS_COMPRESS 0x0002
#define TTFCFP_FLAGS_TTC 0x0004
#define TTFCFP_FLAGS_GLYPHLIST 0x0008
unsigned long __cdecl MergeFontPackage(CONST unsigned char * puchMergeFontBuffer,
CONST unsigned long ulMergeFontBufferSize,
CONST unsigned char * puchFontPackageBuffer,
CONST unsigned long ulFontPackageBufferSize,
unsigned char **ppuchDestBuffer,
unsigned long *pulDestBufferSize,
unsigned long *pulBytesWritten,
CONST unsigned short usMode, 
CFP_ALLOCPROC lpfnAllocate,
CFP_REALLOCPROC lpfnReAllocate,
CFP_FREEPROC lpfnFree,
void *lpvReserved);
#define TTFMFP_SUBSET 0
#define TTFMFP_SUBSET1 1
#define TTFMFP_DELTA 2
#ifndef NO_ERROR
#define NO_ERROR 0
#endif
#ifndef ERR_GENERIC
#define ERR_GENERIC 1000  
#define ERR_READOUTOFBOUNDS 1001
#define ERR_WRITEOUTOFBOUNDS 1002
#define ERR_READCONTROL 1003
#define ERR_WRITECONTROL 1004
#define ERR_MEM 1005
#define ERR_FORMAT 1006
#define ERR_WOULD_GROW 1007
#define ERR_VERSION 1008
#define ERR_NO_GLYPHS 1009
#define ERR_INVALID_MERGE_FORMATS 1010
#define ERR_INVALID_MERGE_CHECKSUMS 1011
#define ERR_INVALID_MERGE_NUMGLYPHS 1012
#define	ERR_INVALID_DELTA_FORMAT	1013
#define ERR_NOT_TTC 1014
#define ERR_INVALID_TTC_INDEX 1015
#define ERR_MISSING_CMAP 1030
#define ERR_MISSING_GLYF 1031
#define ERR_MISSING_HEAD 1032
#define ERR_MISSING_HHEA 1033
#define ERR_MISSING_HMTX 1034
#define ERR_MISSING_LOCA 1035
#define ERR_MISSING_MAXP 1036
#define ERR_MISSING_NAME 1037
#define ERR_MISSING_POST 1038
#define ERR_MISSING_OS2  1039
#define ERR_MISSING_VHEA 1040
#define ERR_MISSING_VMTX 1041
#define ERR_MISSING_HHEA_OR_VHEA 1042
#define ERR_MISSING_HMTX_OR_VMTX 1043
#define ERR_MISSING_EBDT 1044
#define ERR_INVALID_CMAP 1060
#define ERR_INVALID_GLYF 1061
#define ERR_INVALID_HEAD 1062
#define ERR_INVALID_HHEA 1063
#define ERR_INVALID_HMTX 1064
#define ERR_INVALID_LOCA 1065
#define ERR_INVALID_MAXP 1066
#define ERR_INVALID_NAME 1067
#define ERR_INVALID_POST 1068
#define ERR_INVALID_OS2 1069
#define ERR_INVALID_VHEA 1070
#define ERR_INVALID_VMTX 1071
#define ERR_INVALID_HHEA_OR_VHEA 1072
#define ERR_INVALID_HMTX_OR_VMTX 1073																															 
#define ERR_INVALID_TTO 1080
#define ERR_INVALID_GSUB 1081
#define ERR_INVALID_GPOS 1082
#define ERR_INVALID_GDEF 1083
#define ERR_INVALID_JSTF 1084
#define ERR_INVALID_BASE 1085
#define ERR_INVALID_EBLC 1086
#define ERR_INVALID_LTSH 1087
#define	ERR_INVALID_VDMX 1088
#define	ERR_INVALID_HDMX 1089
#define ERR_PARAMETER0 1100
#define ERR_PARAMETER1 1101
#define ERR_PARAMETER2 1102
#define ERR_PARAMETER3 1103
#define ERR_PARAMETER4 1104
#define ERR_PARAMETER5 1105
#define ERR_PARAMETER6 1106
#define ERR_PARAMETER7 1107
#define ERR_PARAMETER8 1108
#define ERR_PARAMETER9 1109
#define ERR_PARAMETER10 1110
#define ERR_PARAMETER11 1111
#define ERR_PARAMETER12 1112
#define ERR_PARAMETER13 1113
#define ERR_PARAMETER14 1114
#define ERR_PARAMETER15 1115
#define ERR_PARAMETER16 1116
#endif
#endif
