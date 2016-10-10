/*+@@file@@----------------------------------------------------------------*//*!
 \file		t2embapi.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 12:05:45 2016
 \date		Modified on Sat Sep 17 12:05:45 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __t2embapi__
#define __t2embapi__
#if __POCC__ >= 500
#pragma once
#endif
#define CHARSET_UNICODE                    1
#define CHARSET_DEFAULT                    1
#define CHARSET_SYMBOL                     2
#define CHARSET_GLYPHIDX                   3
#define EMBED_PREVIEWPRINT                 1
#define EMBED_EDITABLE                     2
#define EMBED_INSTALLABLE                  3
#define EMBED_NOEMBEDDING                  4
#define LICENSE_INSTALLABLE             0x0000
#define LICENSE_DEFAULT                 0x0000
#define LICENSE_NOEMBEDDING             0x0002
#define LICENSE_PREVIEWPRINT            0x0004
#define LICENSE_EDITABLE                0x0008
#define TTEMBED_RAW                         0x00000000
#define TTEMBED_SUBSET                      0x00000001
#define TTEMBED_TTCOMPRESSED                0x00000004
#define TTEMBED_FAILIFVARIATIONSIMULATED    0x00000010
#define TTEMBED_EMBEDEUDC                   0x00000020
#define TTEMBED_WEBOBJECT                   0x00000080
#define TTEMBED_XORENCRYPTDATA              0x10000000
#define TTEMBED_VARIATIONSIMULATED      0x00000001
#define TTEMBED_EUDCEMBEDDED            0x00000002
#define TTEMBED_SUBSETCANCEL            0x00000004
#define TTLOAD_PRIVATE                  0x00000001
#define TTLOAD_EUDC_OVERWRITE           0x00000002
#define TTLOAD_FONT_SUBSETTED       0x00000001
#define TTLOAD_FONT_IN_SYSSTARTUP   0x00000002
#define TTLOAD_EUDC_SET             0x00000004
#define TTDELETE_DONTREMOVEFONT     0x00000001
#define E_NONE                      0x0000L
#define E_API_NOTIMPL               0x0001L
#define E_CHARCODECOUNTINVALID      0x0002L
#define E_CHARCODESETINVALID        0x0003L
#define E_DEVICETRUETYPEFONT        0x0004L
#define E_HDCINVALID                0x0006L
#define E_NOFREEMEMORY              0x0007L
#define E_FONTREFERENCEINVALID      0x0008L
#define E_NOTATRUETYPEFONT          0x000AL
#define E_ERRORACCESSINGFONTDATA    0x000CL
#define E_ERRORACCESSINGFACENAME    0x000DL
#define E_ERRORUNICODECONVERSION    0x0011L
#define E_ERRORCONVERTINGCHARS      0x0012L
#define E_EXCEPTION                 0x0013L
#define E_RESERVEDPARAMNOTNULL      0x0014L 
#define E_CHARSETINVALID            0x0015L
#define E_FILE_NOT_FOUND            0x0017L
#define E_TTC_INDEX_OUT_OF_RANGE    0x0018L
#define E_INPUTPARAMINVALID         0x0019L
#define E_ERRORCOMPRESSINGFONTDATA    0x0100L
#define E_FONTDATAINVALID             0x0102L
#define E_NAMECHANGEFAILED            0x0103L
#define E_FONTNOTEMBEDDABLE           0x0104L
#define E_PRIVSINVALID                0x0105L
#define E_SUBSETTINGFAILED            0x0106L
#define E_READFROMSTREAMFAILED        0x0107L
#define E_SAVETOSTREAMFAILED          0x0108L
#define E_NOOS2                       0x0109L
#define E_T2NOFREEMEMORY              0x010AL
#define E_ERRORREADINGFONTDATA        0x010BL
#define E_FLAGSINVALID                0x010CL
#define E_ERRORCREATINGFONTFILE       0x010DL
#define E_FONTALREADYEXISTS           0x010EL
#define E_FONTNAMEALREADYEXISTS       0x010FL
#define E_FONTINSTALLFAILED           0x0110L
#define E_ERRORDECOMPRESSINGFONTDATA  0x0111L
#define E_ERRORACCESSINGEXCLUDELIST   0x0112L
#define E_FACENAMEINVALID             0x0113L
#define E_STREAMINVALID               0x0114L
#define E_STATUSINVALID               0x0115L
#define E_PRIVSTATUSINVALID           0x0116L
#define E_PERMISSIONSINVALID          0x0117L
#define E_PBENABLEDINVALID            0x0118L
#define E_SUBSETTINGEXCEPTION         0x0119L
#define E_SUBSTRING_TEST_FAIL         0x011AL
#define E_FONTVARIATIONSIMULATED      0x011BL
#define E_FONTFAMILYNAMENOTINFULL     0x011DL
#define E_ADDFONTFAILED             0x0200L
#define E_COULDNTCREATETEMPFILE     0x0201L
#define E_FONTFILECREATEFAILED      0x0203L
#define E_WINDOWSAPI                0x0204L
#define E_FONTFILENOTFOUND          0x0205L
#define E_RESOURCEFILECREATEFAILED  0x0206L
#define E_ERROREXPANDINGFONTDATA    0x0207L
#define E_ERRORGETTINGDC            0x0208L
#define E_EXCEPTIONINDECOMPRESSION  0x0209L
#define E_EXCEPTIONINCOMPRESSION    0x020AL
typedef unsigned long( WINAPIV *READEMBEDPROC ) ( void*, void*, const unsigned long );
typedef unsigned long( WINAPIV *WRITEEMBEDPROC ) ( void*, const void*, const unsigned long );
typedef struct
{
    unsigned short usStructSize;
    unsigned short usRefStrSize;
    unsigned short *pusRefStr;
}TTLOADINFO;
typedef struct
{
    unsigned short usStructSize;
    unsigned short usRootStrSize;
    unsigned short *pusRootStr;
}TTEMBEDINFO;
typedef struct
{
    unsigned long ulStructSize;
    long lTestFromSize;
    long lTestToSize;
    unsigned long ulCharSet;
    unsigned short usReserved1;
    unsigned short usCharCodeCount;
    unsigned short* pusCharCodeSet;
}TTVALIDATIONTESTSPARAMS;
typedef struct
{
    unsigned long ulStructSize;
    long lTestFromSize;
    long lTestToSize;
    unsigned long ulCharSet;
    unsigned short usReserved1;
    unsigned short usCharCodeCount;
    unsigned long* pulCharCodeSet;
}TTVALIDATIONTESTSPARAMSEX;
LONG WINAPI TTEmbedFont(HDC hDC, ULONG ulFlags, ULONG ulCharSet, ULONG *pulPrivStatus, ULONG *pulStatus, WRITEEMBEDPROC lpfnWriteToStream, LPVOID lpvWriteStream, USHORT *pusCharCodeSet, USHORT usCharCodeCount, USHORT usLanguage, TTEMBEDINFO *pTTEmbedInfo);
LONG WINAPI TTEmbedFontFromFileA(HDC hDC, LPCSTR szFontFileName, USHORT usTTCIndex, ULONG ulFlags, ULONG ulCharSet, ULONG *pulPrivStatus, ULONG *pulStatus, WRITEEMBEDPROC lpfnWriteToStream, LPVOID lpvWriteStream, USHORT *pusCharCodeSet, USHORT usCharCodeCount, USHORT usLanguage, TTEMBEDINFO *pTTEmbedInfo);
LONG WINAPI TTLoadEmbeddedFont(HANDLE *phFontReference, ULONG ulFlags, ULONG *pulPrivStatus, ULONG ulPrivs, ULONG *pulStatus, READEMBEDPROC lpfnReadFromStream, LPVOID lpvReadStream, LPWSTR szWinFamilyName, LPSTR szMacFamilyName, TTLOADINFO *pTTLoadInfo);
LONG WINAPI TTGetEmbeddedFontInfo(ULONG ulFlags, ULONG *pulPrivStatus, ULONG ulPrivs, ULONG *pulStatus, READEMBEDPROC lpfnReadFromStream, LPVOID lpvReadStream, TTLOADINFO *pTTLoadInfo);
LONG WINAPI TTDeleteEmbeddedFont(HANDLE hFontReference, ULONG ulFlags, ULONG *pulStatus);
LONG WINAPI TTGetEmbeddingType(HDC hDC, ULONG *pulEmbedType);
LONG WINAPI TTCharToUnicode(HDC hDC, UCHAR *pucCharCodes, ULONG ulCharCodeSize, USHORT *pusShortCodes, ULONG ulShortCodeSize, ULONG ulFlags);
LONG WINAPI TTRunValidationTests(HDC hDC, TTVALIDATIONTESTSPARAMS *pTestParam);
LONG WINAPI TTIsEmbeddingEnabled(HDC hDC, BOOL *pbEnabled);
LONG WINAPI TTIsEmbeddingEnabledForFacename(LPCSTR lpszFacename, BOOL *pbEnabled);
LONG WINAPI TTEnableEmbeddingForFacename(LPCSTR lpszFacename, BOOL bEnable);
LONG WINAPI TTEmbedFontEx(HDC hDC, ULONG ulFlags, ULONG ulCharSet, ULONG *pulPrivStatus, ULONG *pulStatus, WRITEEMBEDPROC lpfnWriteToStream, LPVOID lpvWriteStream, ULONG *pulCharCodeSet, USHORT usCharCodeCount, USHORT usLanguage, TTEMBEDINFO *pTTEmbedInfo);
LONG WINAPI TTRunValidationTestsEx(HDC hDC, TTVALIDATIONTESTSPARAMSEX *pTestParam);
LONG WINAPI TTGetNewFontName(HANDLE *phFontReference, LPWSTR wzWinFamilyName, LONG cchMaxWinName, LPSTR szMacFamilyName, LONG cchMaxMacName);
#endif
