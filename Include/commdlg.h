/*+@@file@@----------------------------------------------------------------*//*!
 \file		commdlg.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Jun 27 14:52:02 2016
 \date		Modified on Mon Jun 27 14:52:02 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _INC_COMMDLG
#define _INC_COMMDLG
#if __POCC__ >= 500
#pragma once
#endif
#if(WINVER >= 0x0500)
#ifdef DEFINE_GUID
DEFINE_GUID(IID_IPrintDialogCallback, 0x5852a2c3, 0x6530, 0x11d1, 0xb6, 0xa3, 0x0, 0x0, 0xf8, 0x75, 0x7b, 0xf9);
DEFINE_GUID(IID_IPrintDialogServices, 0x509aaeda, 0x5639, 0x11d1, 0xb6, 0xa1, 0x0, 0x0, 0xf8, 0x75, 0x7b, 0xf9);
#endif
#endif
#ifndef GUID_DEFS_ONLY
#include <prsht.h>
#if !defined(_WIN64)
#include <pshpack1.h>
#endif
#ifndef WINCOMMDLGAPI
#if !defined(_COMDLG32_)
#define WINCOMMDLGAPI DECLSPEC_IMPORT
#else
#define WINCOMMDLGAPI
#endif
#endif
#if(WINVER >= 0x0400)
#ifndef SNDMSG
#define SNDMSG SendMessage
#endif
#endif
typedef UINT_PTR (CALLBACK *LPOFNHOOKPROC) (HWND, UINT, WPARAM, LPARAM);
#ifndef CDSIZEOF_STRUCT
#define CDSIZEOF_STRUCT(structname, member)  (((int)((LPBYTE)(&((structname*)0)->member) - ((LPBYTE)((structname*)0)))) + sizeof(((structname*)0)->member))
#endif
#ifndef DUMMYUNIONNAME
#ifdef NONAMELESSUNION
#define DUMMYUNIONNAME   u
#endif
#endif
typedef struct tagOFN_NT4A
{
   DWORD        lStructSize;
   HWND         hwndOwner;
   HINSTANCE    hInstance;
   LPCSTR       lpstrFilter;
   LPSTR        lpstrCustomFilter;
   DWORD        nMaxCustFilter;
   DWORD        nFilterIndex;
   LPSTR        lpstrFile;
   DWORD        nMaxFile;
   LPSTR        lpstrFileTitle;
   DWORD        nMaxFileTitle;
   LPCSTR       lpstrInitialDir;
   LPCSTR       lpstrTitle;
   DWORD        Flags;
   WORD         nFileOffset;
   WORD         nFileExtension;
   LPCSTR       lpstrDefExt;
   LPARAM       lCustData;
   LPOFNHOOKPROC lpfnHook;
   LPCSTR       lpTemplateName;
} OPENFILENAME_NT4A, *LPOPENFILENAME_NT4A;
typedef struct tagOFN_NT4W
{
   DWORD        lStructSize;
   HWND         hwndOwner;
   HINSTANCE    hInstance;
   LPCWSTR      lpstrFilter;
   LPWSTR       lpstrCustomFilter;
   DWORD        nMaxCustFilter;
   DWORD        nFilterIndex;
   LPWSTR       lpstrFile;
   DWORD        nMaxFile;
   LPWSTR       lpstrFileTitle;
   DWORD        nMaxFileTitle;
   LPCWSTR      lpstrInitialDir;
   LPCWSTR      lpstrTitle;
   DWORD        Flags;
   WORD         nFileOffset;
   WORD         nFileExtension;
   LPCWSTR      lpstrDefExt;
   LPARAM       lCustData;
   LPOFNHOOKPROC lpfnHook;
   LPCWSTR      lpTemplateName;
} OPENFILENAME_NT4W, *LPOPENFILENAME_NT4W;
#ifdef UNICODE
typedef OPENFILENAME_NT4W OPENFILENAME_NT4;
typedef LPOPENFILENAME_NT4W LPOPENFILENAME_NT4;
#else
typedef OPENFILENAME_NT4A OPENFILENAME_NT4;
typedef LPOPENFILENAME_NT4A LPOPENFILENAME_NT4;
#endif
typedef struct tagOFNA
{
   DWORD        lStructSize;
   HWND         hwndOwner;
   HINSTANCE    hInstance;
   LPCSTR       lpstrFilter;
   LPSTR        lpstrCustomFilter;
   DWORD        nMaxCustFilter;
   DWORD        nFilterIndex;
   LPSTR        lpstrFile;
   DWORD        nMaxFile;
   LPSTR        lpstrFileTitle;
   DWORD        nMaxFileTitle;
   LPCSTR       lpstrInitialDir;
   LPCSTR       lpstrTitle;
   DWORD        Flags;
   WORD         nFileOffset;
   WORD         nFileExtension;
   LPCSTR       lpstrDefExt;
   LPARAM       lCustData;
   LPOFNHOOKPROC lpfnHook;
   LPCSTR       lpTemplateName;
#if (_WIN32_WINNT >= 0x0500)
   void *        pvReserved;
   DWORD        dwReserved;
   DWORD        FlagsEx;
#endif
} OPENFILENAMEA, *LPOPENFILENAMEA;
typedef struct tagOFNW {
   DWORD        lStructSize;
   HWND         hwndOwner;
   HINSTANCE    hInstance;
   LPCWSTR      lpstrFilter;
   LPWSTR       lpstrCustomFilter;
   DWORD        nMaxCustFilter;
   DWORD        nFilterIndex;
   LPWSTR       lpstrFile;
   DWORD        nMaxFile;
   LPWSTR       lpstrFileTitle;
   DWORD        nMaxFileTitle;
   LPCWSTR      lpstrInitialDir;
   LPCWSTR      lpstrTitle;
   DWORD        Flags;
   WORD         nFileOffset;
   WORD         nFileExtension;
   LPCWSTR      lpstrDefExt;
   LPARAM       lCustData;
   LPOFNHOOKPROC lpfnHook;
   LPCWSTR      lpTemplateName;
#if (_WIN32_WINNT >= 0x0500)
   void *        pvReserved;
   DWORD        dwReserved;
   DWORD        FlagsEx;
#endif
} OPENFILENAMEW, *LPOPENFILENAMEW;
#ifdef UNICODE
typedef OPENFILENAMEW OPENFILENAME;
typedef LPOPENFILENAMEW LPOPENFILENAME;
#else
typedef OPENFILENAMEA OPENFILENAME;
typedef LPOPENFILENAMEA LPOPENFILENAME;
#endif
#if (_WIN32_WINNT >= 0x0500)
#define OPENFILENAME_SIZE_VERSION_400A  CDSIZEOF_STRUCT(OPENFILENAMEA,lpTemplateName)
#define OPENFILENAME_SIZE_VERSION_400W  CDSIZEOF_STRUCT(OPENFILENAMEW,lpTemplateName)
#ifdef UNICODE
#define OPENFILENAME_SIZE_VERSION_400  OPENFILENAME_SIZE_VERSION_400W
#else
#define OPENFILENAME_SIZE_VERSION_400  OPENFILENAME_SIZE_VERSION_400A
#endif
#endif
WINCOMMDLGAPI BOOL  APIENTRY GetOpenFileNameA(LPOPENFILENAMEA);
WINCOMMDLGAPI BOOL  APIENTRY GetOpenFileNameW(LPOPENFILENAMEW);
#ifdef UNICODE
#define GetOpenFileName  GetOpenFileNameW
#else
#define GetOpenFileName  GetOpenFileNameA
#endif
WINCOMMDLGAPI BOOL  APIENTRY GetSaveFileNameA(LPOPENFILENAMEA);
WINCOMMDLGAPI BOOL  APIENTRY GetSaveFileNameW(LPOPENFILENAMEW);
#ifdef UNICODE
#define GetSaveFileName  GetSaveFileNameW
#else
#define GetSaveFileName  GetSaveFileNameA
#endif
WINCOMMDLGAPI short APIENTRY GetFileTitleA(LPCSTR, LPSTR Buf, WORD cchSize);
WINCOMMDLGAPI short APIENTRY GetFileTitleW(LPCWSTR, LPWSTR Buf, WORD cchSize);
#ifdef UNICODE
#define GetFileTitle  GetFileTitleW
#else
#define GetFileTitle  GetFileTitleA
#endif
#define OFN_READONLY                 0x00000001
#define OFN_OVERWRITEPROMPT          0x00000002
#define OFN_HIDEREADONLY             0x00000004
#define OFN_NOCHANGEDIR              0x00000008
#define OFN_SHOWHELP                 0x00000010
#define OFN_ENABLEHOOK               0x00000020
#define OFN_ENABLETEMPLATE           0x00000040
#define OFN_ENABLETEMPLATEHANDLE     0x00000080
#define OFN_NOVALIDATE               0x00000100
#define OFN_ALLOWMULTISELECT         0x00000200
#define OFN_EXTENSIONDIFFERENT       0x00000400
#define OFN_PATHMUSTEXIST            0x00000800
#define OFN_FILEMUSTEXIST            0x00001000
#define OFN_CREATEPROMPT             0x00002000
#define OFN_SHAREAWARE               0x00004000
#define OFN_NOREADONLYRETURN         0x00008000
#define OFN_NOTESTFILECREATE         0x00010000
#define OFN_NONETWORKBUTTON          0x00020000
#define OFN_NOLONGNAMES              0x00040000
#if(WINVER >= 0x0400)
#define OFN_EXPLORER                 0x00080000
#define OFN_NODEREFERENCELINKS       0x00100000
#define OFN_LONGNAMES                0x00200000
#define OFN_ENABLEINCLUDENOTIFY      0x00400000
#define OFN_ENABLESIZING             0x00800000
#endif
#if (_WIN32_WINNT >= 0x0500)
#define OFN_DONTADDTORECENT          0x02000000
#define OFN_FORCESHOWHIDDEN          0x10000000
#endif
#if (_WIN32_WINNT >= 0x0500)
#define  OFN_EX_NOPLACESBAR         0x00000001
#endif
#define OFN_SHAREFALLTHROUGH     2
#define OFN_SHARENOWARN          1
#define OFN_SHAREWARN            0
typedef UINT_PTR (CALLBACK *LPCCHOOKPROC) (HWND, UINT, WPARAM, LPARAM);
#if(WINVER >= 0x0400)
typedef struct _OFNOTIFYA
{
        NMHDR           hdr;
        LPOPENFILENAMEA lpOFN;
        LPSTR           pszFile;
} OFNOTIFYA, *LPOFNOTIFYA;
typedef struct _OFNOTIFYW
{
        NMHDR           hdr;
        LPOPENFILENAMEW lpOFN;
        LPWSTR          pszFile;
} OFNOTIFYW, *LPOFNOTIFYW;
#ifdef UNICODE
typedef OFNOTIFYW OFNOTIFY;
typedef LPOFNOTIFYW LPOFNOTIFY;
#else
typedef OFNOTIFYA OFNOTIFY;
typedef LPOFNOTIFYA LPOFNOTIFY;
#endif
typedef struct _OFNOTIFYEXA
{
        NMHDR           hdr;
        LPOPENFILENAMEA lpOFN;
        LPVOID          psf;
        LPVOID          pidl;
} OFNOTIFYEXA, *LPOFNOTIFYEXA;
typedef struct _OFNOTIFYEXW
{
        NMHDR           hdr;
        LPOPENFILENAMEW lpOFN;
        LPVOID          psf;
        LPVOID          pidl;
} OFNOTIFYEXW, *LPOFNOTIFYEXW;
#ifdef UNICODE
typedef OFNOTIFYEXW OFNOTIFYEX;
typedef LPOFNOTIFYEXW LPOFNOTIFYEX;
#else
typedef OFNOTIFYEXA OFNOTIFYEX;
typedef LPOFNOTIFYEXA LPOFNOTIFYEX;
#endif
#define CDN_FIRST   (0U-601U)
#define CDN_LAST    (0U-699U)
#define CDN_INITDONE            (CDN_FIRST - 0x0000)
#define CDN_SELCHANGE           (CDN_FIRST - 0x0001)
#define CDN_FOLDERCHANGE        (CDN_FIRST - 0x0002)
#define CDN_SHAREVIOLATION      (CDN_FIRST - 0x0003)
#define CDN_HELP                (CDN_FIRST - 0x0004)
#define CDN_FILEOK              (CDN_FIRST - 0x0005)
#define CDN_TYPECHANGE          (CDN_FIRST - 0x0006)
#if (NTDDI_VERSION >= NTDDI_WIN2K)
#define CDN_INCLUDEITEM         (CDN_FIRST - 0x0007)
#endif
#define CDM_FIRST       (WM_USER + 100)
#define CDM_LAST        (WM_USER + 200)
#define CDM_GETSPEC             (CDM_FIRST + 0x0000)
#define CommDlg_OpenSave_GetSpecA(_hdlg, _psz, _cbmax) (int)SNDMSG(_hdlg, CDM_GETSPEC, (WPARAM)(_cbmax), (LPARAM)(LPSTR)(_psz))
#define CommDlg_OpenSave_GetSpecW(_hdlg, _psz, _cbmax) (int)SNDMSG(_hdlg, CDM_GETSPEC, (WPARAM)(_cbmax), (LPARAM)(LPWSTR)(_psz))
#ifdef UNICODE
#define CommDlg_OpenSave_GetSpec  CommDlg_OpenSave_GetSpecW
#else
#define CommDlg_OpenSave_GetSpec  CommDlg_OpenSave_GetSpecA
#endif
#define CDM_GETFILEPATH         (CDM_FIRST + 0x0001)
#define CommDlg_OpenSave_GetFilePathA(_hdlg, _psz, _cbmax) (int)SNDMSG(_hdlg, CDM_GETFILEPATH, (WPARAM)(_cbmax), (LPARAM)(LPSTR)(_psz))
#define CommDlg_OpenSave_GetFilePathW(_hdlg, _psz, _cbmax) (int)SNDMSG(_hdlg, CDM_GETFILEPATH, (WPARAM)(_cbmax), (LPARAM)(LPWSTR)(_psz))
#ifdef UNICODE
#define CommDlg_OpenSave_GetFilePath  CommDlg_OpenSave_GetFilePathW
#else
#define CommDlg_OpenSave_GetFilePath  CommDlg_OpenSave_GetFilePathA
#endif
#define CDM_GETFOLDERPATH       (CDM_FIRST + 0x0002)
#define CommDlg_OpenSave_GetFolderPathA(_hdlg, _psz, _cbmax) (int)SNDMSG(_hdlg, CDM_GETFOLDERPATH, (WPARAM)(_cbmax), (LPARAM)(LPSTR)(_psz))
#define CommDlg_OpenSave_GetFolderPathW(_hdlg, _psz, _cbmax) (int)SNDMSG(_hdlg, CDM_GETFOLDERPATH, (WPARAM)(_cbmax), (LPARAM)(LPWSTR)(_psz))
#ifdef UNICODE
#define CommDlg_OpenSave_GetFolderPath  CommDlg_OpenSave_GetFolderPathW
#else
#define CommDlg_OpenSave_GetFolderPath  CommDlg_OpenSave_GetFolderPathA
#endif
#define CDM_GETFOLDERIDLIST     (CDM_FIRST + 0x0003)
#define CommDlg_OpenSave_GetFolderIDList(_hdlg, _pidl, _cbmax) (int)SNDMSG(_hdlg, CDM_GETFOLDERIDLIST, (WPARAM)(_cbmax), (LPARAM)(LPVOID)(_pidl))
#define CDM_SETCONTROLTEXT      (CDM_FIRST + 0x0004)
#define CommDlg_OpenSave_SetControlText(_hdlg, _id, _text) (void)SNDMSG(_hdlg, CDM_SETCONTROLTEXT, (WPARAM)(_id), (LPARAM)(LPSTR)(_text))
#define CDM_HIDECONTROL         (CDM_FIRST + 0x0005)
#define CommDlg_OpenSave_HideControl(_hdlg, _id) (void)SNDMSG(_hdlg, CDM_HIDECONTROL, (WPARAM)(_id), 0)
#define CDM_SETDEFEXT           (CDM_FIRST + 0x0006)
#define CommDlg_OpenSave_SetDefExt(_hdlg, _pszext) (void)SNDMSG(_hdlg, CDM_SETDEFEXT, 0, (LPARAM)(LPSTR)(_pszext))
#endif
typedef struct tagCHOOSECOLORA
{
   DWORD        lStructSize;
   HWND         hwndOwner;
   HWND         hInstance;
   COLORREF     rgbResult;
   COLORREF*    lpCustColors;
   DWORD        Flags;
   LPARAM       lCustData;
   LPCCHOOKPROC lpfnHook;
   LPCSTR       lpTemplateName;
} CHOOSECOLORA, *LPCHOOSECOLORA;
typedef struct tagCHOOSECOLORW {
   DWORD        lStructSize;
   HWND         hwndOwner;
   HWND         hInstance;
   COLORREF     rgbResult;
   COLORREF*    lpCustColors;
   DWORD        Flags;
   LPARAM       lCustData;
   LPCCHOOKPROC lpfnHook;
   LPCWSTR      lpTemplateName;
} CHOOSECOLORW, *LPCHOOSECOLORW;
#ifdef UNICODE
typedef CHOOSECOLORW CHOOSECOLOR;
typedef LPCHOOSECOLORW LPCHOOSECOLOR;
#else
typedef CHOOSECOLORA CHOOSECOLOR;
typedef LPCHOOSECOLORA LPCHOOSECOLOR;
#endif
WINCOMMDLGAPI BOOL APIENTRY ChooseColorA(LPCHOOSECOLORA);
WINCOMMDLGAPI BOOL APIENTRY ChooseColorW(LPCHOOSECOLORW);
#ifdef UNICODE
#define ChooseColor  ChooseColorW
#else
#define ChooseColor  ChooseColorA
#endif
#define CC_RGBINIT               0x00000001
#define CC_FULLOPEN              0x00000002
#define CC_PREVENTFULLOPEN       0x00000004
#define CC_SHOWHELP              0x00000008
#define CC_ENABLEHOOK            0x00000010
#define CC_ENABLETEMPLATE        0x00000020
#define CC_ENABLETEMPLATEHANDLE  0x00000040
#if(WINVER >= 0x0400)
#define CC_SOLIDCOLOR            0x00000080
#define CC_ANYCOLOR              0x00000100
#endif
typedef UINT_PTR (CALLBACK *LPFRHOOKPROC) (HWND, UINT, WPARAM, LPARAM);
typedef struct tagFINDREPLACEA {
   DWORD        lStructSize;
   HWND         hwndOwner;
   HINSTANCE    hInstance;
   DWORD        Flags;
   LPSTR        lpstrFindWhat;
   LPSTR        lpstrReplaceWith;
   WORD         wFindWhatLen;
   WORD         wReplaceWithLen;
   LPARAM       lCustData;
   LPFRHOOKPROC lpfnHook;
   LPCSTR       lpTemplateName;
} FINDREPLACEA, *LPFINDREPLACEA;
typedef struct tagFINDREPLACEW {
   DWORD        lStructSize;
   HWND         hwndOwner;
   HINSTANCE    hInstance;
   DWORD        Flags;
   LPWSTR       lpstrFindWhat;
   LPWSTR       lpstrReplaceWith;
   WORD         wFindWhatLen;
   WORD         wReplaceWithLen;
   LPARAM       lCustData;
   LPFRHOOKPROC lpfnHook;
   LPCWSTR      lpTemplateName;
} FINDREPLACEW, *LPFINDREPLACEW;
#ifdef UNICODE
typedef FINDREPLACEW FINDREPLACE;
typedef LPFINDREPLACEW LPFINDREPLACE;
#else
typedef FINDREPLACEA FINDREPLACE;
typedef LPFINDREPLACEA LPFINDREPLACE;
#endif
#define FR_DOWN                         0x00000001
#define FR_WHOLEWORD                    0x00000002
#define FR_MATCHCASE                    0x00000004
#define FR_FINDNEXT                     0x00000008
#define FR_REPLACE                      0x00000010
#define FR_REPLACEALL                   0x00000020
#define FR_DIALOGTERM                   0x00000040
#define FR_SHOWHELP                     0x00000080
#define FR_ENABLEHOOK                   0x00000100
#define FR_ENABLETEMPLATE               0x00000200
#define FR_NOUPDOWN                     0x00000400
#define FR_NOMATCHCASE                  0x00000800
#define FR_NOWHOLEWORD                  0x00001000
#define FR_ENABLETEMPLATEHANDLE         0x00002000
#define FR_HIDEUPDOWN                   0x00004000
#define FR_HIDEMATCHCASE                0x00008000
#define FR_HIDEWHOLEWORD                0x00010000
#if (NTDDI_VERSION >= NTDDI_WIN2K)
#define FR_RAW                          0x00020000
#define FR_MATCHDIAC                    0x20000000
#define FR_MATCHKASHIDA                 0x40000000
#define FR_MATCHALEFHAMZA               0x80000000
#endif
WINCOMMDLGAPI HWND APIENTRY FindTextA(LPFINDREPLACEA);
WINCOMMDLGAPI HWND APIENTRY FindTextW(LPFINDREPLACEW);
#ifdef UNICODE
#define FindText  FindTextW
#else
#define FindText  FindTextA
#endif
WINCOMMDLGAPI HWND APIENTRY ReplaceTextA(LPFINDREPLACEA);
WINCOMMDLGAPI HWND APIENTRY ReplaceTextW(LPFINDREPLACEW);
#ifdef UNICODE
#define ReplaceText  ReplaceTextW
#else
#define ReplaceText  ReplaceTextA
#endif
typedef UINT_PTR (CALLBACK *LPCFHOOKPROC) (HWND, UINT, WPARAM, LPARAM);
typedef struct tagCHOOSEFONTA {
   DWORD           lStructSize;
   HWND            hwndOwner;
   HDC             hDC;
   LPLOGFONTA      lpLogFont;
   INT             iPointSize;
   DWORD           Flags;
   COLORREF        rgbColors;
   LPARAM          lCustData;
   LPCFHOOKPROC    lpfnHook;
   LPCSTR          lpTemplateName;
   HINSTANCE       hInstance;
   LPSTR           lpszStyle;
   WORD            nFontType;
   WORD            ___MISSING_ALIGNMENT__;
   INT             nSizeMin;
   INT             nSizeMax;
} CHOOSEFONTA;
typedef struct tagCHOOSEFONTW {
   DWORD           lStructSize;
   HWND            hwndOwner;
   HDC             hDC;
   LPLOGFONTW      lpLogFont;
   INT             iPointSize;
   DWORD           Flags;
   COLORREF        rgbColors;
   LPARAM          lCustData;
   LPCFHOOKPROC    lpfnHook;
   LPCWSTR         lpTemplateName;
   HINSTANCE       hInstance;
   LPWSTR          lpszStyle;
   WORD            nFontType;
   WORD            ___MISSING_ALIGNMENT__;
   INT             nSizeMin;
   INT             nSizeMax;
} CHOOSEFONTW;
#ifdef UNICODE
typedef CHOOSEFONTW CHOOSEFONT;
#else
typedef CHOOSEFONTA CHOOSEFONT;
#endif
typedef CHOOSEFONTA *LPCHOOSEFONTA;
typedef CHOOSEFONTW *LPCHOOSEFONTW;
#ifdef UNICODE
typedef LPCHOOSEFONTW LPCHOOSEFONT;
#else
typedef LPCHOOSEFONTA LPCHOOSEFONT;
#endif
typedef const CHOOSEFONTA *PCCHOOSEFONTA;
typedef const CHOOSEFONTW *PCCHOOSEFONTW;
#ifdef UNICODE
typedef CHOOSEFONTW CHOOSEFONT;
typedef PCCHOOSEFONTW PCCHOOSEFONT;
#else
typedef CHOOSEFONTA CHOOSEFONT;
typedef PCCHOOSEFONTA PCCHOOSEFONT;
#endif
WINCOMMDLGAPI BOOL APIENTRY ChooseFontA(LPCHOOSEFONTA);
WINCOMMDLGAPI BOOL APIENTRY ChooseFontW(LPCHOOSEFONTW);
#ifdef UNICODE
#define ChooseFont  ChooseFontW
#else
#define ChooseFont  ChooseFontA
#endif
#define CF_SCREENFONTS             0x00000001
#define CF_PRINTERFONTS            0x00000002
#define CF_BOTH                    (CF_SCREENFONTS | CF_PRINTERFONTS)
#define CF_SHOWHELP                0x00000004L
#define CF_ENABLEHOOK              0x00000008L
#define CF_ENABLETEMPLATE          0x00000010L
#define CF_ENABLETEMPLATEHANDLE    0x00000020L
#define CF_INITTOLOGFONTSTRUCT     0x00000040L
#define CF_USESTYLE                0x00000080L
#define CF_EFFECTS                 0x00000100L
#define CF_APPLY                   0x00000200L
#define CF_ANSIONLY                0x00000400L
#if(WINVER >= 0x0400)
#define CF_SCRIPTSONLY             CF_ANSIONLY
#endif
#define CF_NOVECTORFONTS           0x00000800L
#define CF_NOOEMFONTS              CF_NOVECTORFONTS
#define CF_NOSIMULATIONS           0x00001000L
#define CF_LIMITSIZE               0x00002000L
#define CF_FIXEDPITCHONLY          0x00004000L
#define CF_WYSIWYG                 0x00008000L
#define CF_FORCEFONTEXIST          0x00010000L
#define CF_SCALABLEONLY            0x00020000L
#define CF_TTONLY                  0x00040000L
#define CF_NOFACESEL               0x00080000L
#define CF_NOSTYLESEL              0x00100000L
#define CF_NOSIZESEL               0x00200000L
#if(WINVER >= 0x0400)
#define CF_SELECTSCRIPT            0x00400000L
#define CF_NOSCRIPTSEL             0x00800000L
#define CF_NOVERTFONTS             0x01000000L
#endif
#if(WINVER >= 0x0601)
#define CF_INACTIVEFONTS           0x02000000L
#endif
#define SIMULATED_FONTTYPE    0x8000
#define PRINTER_FONTTYPE      0x4000
#define SCREEN_FONTTYPE       0x2000
#define BOLD_FONTTYPE         0x0100
#define ITALIC_FONTTYPE       0x0200
#define REGULAR_FONTTYPE      0x0400
#if (NTDDI_VERSION >= NTDDI_WIN2K)
#define PS_OPENTYPE_FONTTYPE  0x10000
#define TT_OPENTYPE_FONTTYPE  0x20000
#define TYPE1_FONTTYPE        0x40000
#endif
#if(WINVER >= 0x0601)
#define SYMBOL_FONTTYPE       0x80000
#endif
#define WM_CHOOSEFONT_GETLOGFONT      (WM_USER + 1)
#if (NTDDI_VERSION >= NTDDI_WIN2K)
#define WM_CHOOSEFONT_SETLOGFONT      (WM_USER + 101)
#define WM_CHOOSEFONT_SETFLAGS        (WM_USER + 102)
#endif
#define LBSELCHSTRINGA  "commdlg_LBSelChangedNotify"
#define SHAREVISTRINGA  "commdlg_ShareViolation"
#define FILEOKSTRINGA   "commdlg_FileNameOK"
#define COLOROKSTRINGA  "commdlg_ColorOK"
#define SETRGBSTRINGA   "commdlg_SetRGBColor"
#define HELPMSGSTRINGA  "commdlg_help"
#define FINDMSGSTRINGA  "commdlg_FindReplace"
#define LBSELCHSTRINGW  L"commdlg_LBSelChangedNotify"
#define SHAREVISTRINGW  L"commdlg_ShareViolation"
#define FILEOKSTRINGW   L"commdlg_FileNameOK"
#define COLOROKSTRINGW  L"commdlg_ColorOK"
#define SETRGBSTRINGW   L"commdlg_SetRGBColor"
#define HELPMSGSTRINGW  L"commdlg_help"
#define FINDMSGSTRINGW  L"commdlg_FindReplace"
#ifdef UNICODE
#define LBSELCHSTRING  LBSELCHSTRINGW
#define SHAREVISTRING  SHAREVISTRINGW
#define FILEOKSTRING   FILEOKSTRINGW
#define COLOROKSTRING  COLOROKSTRINGW
#define SETRGBSTRING   SETRGBSTRINGW
#define HELPMSGSTRING  HELPMSGSTRINGW
#define FINDMSGSTRING  FINDMSGSTRINGW
#else
#define LBSELCHSTRING  LBSELCHSTRINGA
#define SHAREVISTRING  SHAREVISTRINGA
#define FILEOKSTRING   FILEOKSTRINGA
#define COLOROKSTRING  COLOROKSTRINGA
#define SETRGBSTRING   SETRGBSTRINGA
#define HELPMSGSTRING  HELPMSGSTRINGA
#define FINDMSGSTRING  FINDMSGSTRINGA
#endif
#define CD_LBSELNOITEMS -1
#define CD_LBSELCHANGE   0
#define CD_LBSELSUB      1
#define CD_LBSELADD      2
typedef UINT_PTR (CALLBACK *LPPRINTHOOKPROC) (HWND, UINT, WPARAM, LPARAM);
typedef UINT_PTR (CALLBACK *LPSETUPHOOKPROC) (HWND, UINT, WPARAM, LPARAM);
typedef struct tagPDA {
   DWORD            lStructSize;
   HWND             hwndOwner;
   HGLOBAL          hDevMode;
   HGLOBAL          hDevNames;
   HDC              hDC;
   DWORD            Flags;
   WORD             nFromPage;
   WORD             nToPage;
   WORD             nMinPage;
   WORD             nMaxPage;
   WORD             nCopies;
   HINSTANCE        hInstance;
   LPARAM           lCustData;
   LPPRINTHOOKPROC  lpfnPrintHook;
   LPSETUPHOOKPROC  lpfnSetupHook;
   LPCSTR           lpPrintTemplateName;
   LPCSTR           lpSetupTemplateName;
   HGLOBAL          hPrintTemplate;
   HGLOBAL          hSetupTemplate;
} PRINTDLGA, *LPPRINTDLGA;
typedef struct tagPDW {
   DWORD            lStructSize;
   HWND             hwndOwner;
   HGLOBAL          hDevMode;
   HGLOBAL          hDevNames;
   HDC              hDC;
   DWORD            Flags;
   WORD             nFromPage;
   WORD             nToPage;
   WORD             nMinPage;
   WORD             nMaxPage;
   WORD             nCopies;
   HINSTANCE        hInstance;
   LPARAM           lCustData;
   LPPRINTHOOKPROC  lpfnPrintHook;
   LPSETUPHOOKPROC  lpfnSetupHook;
   LPCWSTR          lpPrintTemplateName;
   LPCWSTR          lpSetupTemplateName;
   HGLOBAL          hPrintTemplate;
   HGLOBAL          hSetupTemplate;
} PRINTDLGW, *LPPRINTDLGW;
#ifdef UNICODE
typedef PRINTDLGW PRINTDLG;
typedef LPPRINTDLGW LPPRINTDLG;
#else
typedef PRINTDLGA PRINTDLG;
typedef LPPRINTDLGA LPPRINTDLG;
#endif
WINCOMMDLGAPI BOOL APIENTRY PrintDlgA(LPPRINTDLGA pPD);
WINCOMMDLGAPI BOOL APIENTRY PrintDlgW(LPPRINTDLGW pPD);
#ifdef UNICODE
#define PrintDlg  PrintDlgW
#else
#define PrintDlg  PrintDlgA
#endif
#if(WINVER >= 0x0500)
#ifdef STDMETHOD
#undef  INTERFACE
#define INTERFACE   IPrintDialogCallback
DECLARE_INTERFACE_IID_(IPrintDialogCallback, IUnknown, "5852A2C3-6530-11D1-B6A3-0000F8757BF9")
{
    STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID *ppvObj);
    STDMETHOD_(ULONG, AddRef) (THIS);
    STDMETHOD_(ULONG, Release) (THIS);
    STDMETHOD(InitDone) (THIS);
    STDMETHOD(SelectionChange) (THIS);
    STDMETHOD(HandleMessage) (THIS_ HWND hDlg, UINT uMsg, WPARAM wParam, LPARAM lParam, LRESULT *pResult);
};
#undef  INTERFACE
#define INTERFACE   IPrintDialogServices
DECLARE_INTERFACE_IID_(IPrintDialogServices, IUnknown, "509AAEDA-5639-11D1-B6A1-0000F8757BF9")
{
    STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID *ppvObj);
    STDMETHOD_(ULONG, AddRef) (THIS);
    STDMETHOD_(ULONG, Release) (THIS);
    STDMETHOD(GetCurrentDevMode) (THIS_ LPDEVMODE pDevMode, UINT *pcbSize);
    STDMETHOD(GetCurrentPrinterName) (THIS_ LPWSTR pPrinterName, UINT *pcchSize);
    STDMETHOD(GetCurrentPortName) (THIS_ LPWSTR pPortName, UINT *pcchSize);
};
typedef struct tagPRINTPAGERANGE {
   DWORD  nFromPage;
   DWORD  nToPage;
} PRINTPAGERANGE;
typedef PRINTPAGERANGE *LPPRINTPAGERANGE;
typedef const PRINTPAGERANGE *PCPRINTPAGERANGE;
typedef struct tagPDEXA {
   DWORD                 lStructSize;
   HWND                  hwndOwner;
   HGLOBAL               hDevMode;
   HGLOBAL               hDevNames;
   HDC                   hDC;
   DWORD                 Flags;
   DWORD                 Flags2;
   DWORD                 ExclusionFlags;
   DWORD                 nPageRanges;
   DWORD                 nMaxPageRanges;
   LPPRINTPAGERANGE      lpPageRanges;
   DWORD                 nMinPage;
   DWORD                 nMaxPage;
   DWORD                 nCopies;
   HINSTANCE             hInstance;
   LPCSTR                lpPrintTemplateName;
   LPUNKNOWN             lpCallback;
   DWORD                 nPropertyPages;
   HPROPSHEETPAGE       *lphPropertyPages;
   DWORD                 nStartPage;
   DWORD                 dwResultAction;
} PRINTDLGEXA, *LPPRINTDLGEXA;
typedef struct tagPDEXW {
   DWORD                 lStructSize;
   HWND                  hwndOwner;
   HGLOBAL               hDevMode;
   HGLOBAL               hDevNames;
   HDC                   hDC;
   DWORD                 Flags;
   DWORD                 Flags2;
   DWORD                 ExclusionFlags;
   DWORD                 nPageRanges;
   DWORD                 nMaxPageRanges;
   LPPRINTPAGERANGE      lpPageRanges;
   DWORD                 nMinPage;
   DWORD                 nMaxPage;
   DWORD                 nCopies;
   HINSTANCE             hInstance;
   LPCWSTR               lpPrintTemplateName;
   LPUNKNOWN             lpCallback;
   DWORD                 nPropertyPages;
   HPROPSHEETPAGE       *lphPropertyPages;
   DWORD                 nStartPage;
   DWORD                 dwResultAction;
} PRINTDLGEXW, *LPPRINTDLGEXW;
#ifdef UNICODE
typedef PRINTDLGEXW PRINTDLGEX;
typedef LPPRINTDLGEXW LPPRINTDLGEX;
#else
typedef PRINTDLGEXA PRINTDLGEX;
typedef LPPRINTDLGEXA LPPRINTDLGEX;
#endif
WINCOMMDLGAPI HRESULT APIENTRY PrintDlgExA(LPPRINTDLGEXA pPD);
WINCOMMDLGAPI HRESULT APIENTRY PrintDlgExW(LPPRINTDLGEXW pPD);
#ifdef UNICODE
#define PrintDlgEx  PrintDlgExW
#else
#define PrintDlgEx  PrintDlgExA
#endif
#endif
#endif
#define PD_ALLPAGES                    0x00000000
#define PD_SELECTION                   0x00000001
#define PD_PAGENUMS                    0x00000002
#define PD_NOSELECTION                 0x00000004
#define PD_NOPAGENUMS                  0x00000008
#define PD_COLLATE                     0x00000010
#define PD_PRINTTOFILE                 0x00000020
#define PD_PRINTSETUP                  0x00000040
#define PD_NOWARNING                   0x00000080
#define PD_RETURNDC                    0x00000100
#define PD_RETURNIC                    0x00000200
#define PD_RETURNDEFAULT               0x00000400
#define PD_SHOWHELP                    0x00000800
#define PD_ENABLEPRINTHOOK             0x00001000
#define PD_ENABLESETUPHOOK             0x00002000
#define PD_ENABLEPRINTTEMPLATE         0x00004000
#define PD_ENABLESETUPTEMPLATE         0x00008000
#define PD_ENABLEPRINTTEMPLATEHANDLE   0x00010000
#define PD_ENABLESETUPTEMPLATEHANDLE   0x00020000
#define PD_USEDEVMODECOPIES            0x00040000
#define PD_USEDEVMODECOPIESANDCOLLATE  0x00040000
#define PD_DISABLEPRINTTOFILE          0x00080000
#define PD_HIDEPRINTTOFILE             0x00100000
#define PD_NONETWORKBUTTON             0x00200000
#if(WINVER >= 0x0500)
#define PD_CURRENTPAGE                 0x00400000
#define PD_NOCURRENTPAGE               0x00800000
#define PD_EXCLUSIONFLAGS              0x01000000
#define PD_USELARGETEMPLATE            0x10000000
#endif
#if(WINVER >= 0x0500)
#define PD_EXCL_COPIESANDCOLLATE       (DM_COPIES | DM_COLLATE)
#define START_PAGE_GENERAL             0xffffffff
#define PD_RESULT_CANCEL               0
#define PD_RESULT_PRINT                1
#define PD_RESULT_APPLY                2
#endif
typedef struct tagDEVNAMES {
   WORD wDriverOffset;
   WORD wDeviceOffset;
   WORD wOutputOffset;
   WORD wDefault;
} DEVNAMES;
typedef DEVNAMES *LPDEVNAMES;
typedef const DEVNAMES *PCDEVNAMES;
#define DN_DEFAULTPRN      0x0001
WINCOMMDLGAPI DWORD APIENTRY CommDlgExtendedError(VOID);
#if(WINVER >= 0x0400)
#define WM_PSD_PAGESETUPDLG     (WM_USER  )
#define WM_PSD_FULLPAGERECT     (WM_USER+1)
#define WM_PSD_MINMARGINRECT    (WM_USER+2)
#define WM_PSD_MARGINRECT       (WM_USER+3)
#define WM_PSD_GREEKTEXTRECT    (WM_USER+4)
#define WM_PSD_ENVSTAMPRECT     (WM_USER+5)
#define WM_PSD_YAFULLPAGERECT   (WM_USER+6)
typedef UINT_PTR (CALLBACK* LPPAGEPAINTHOOK)( HWND, UINT, WPARAM, LPARAM );
typedef UINT_PTR (CALLBACK* LPPAGESETUPHOOK)( HWND, UINT, WPARAM, LPARAM );
typedef struct tagPSDA
{
    DWORD           lStructSize;
    HWND            hwndOwner;
    HGLOBAL         hDevMode;
    HGLOBAL         hDevNames;
    DWORD           Flags;
    POINT           ptPaperSize;
    RECT            rtMinMargin;
    RECT            rtMargin;
    HINSTANCE       hInstance;
    LPARAM          lCustData;
    LPPAGESETUPHOOK lpfnPageSetupHook;
    LPPAGEPAINTHOOK lpfnPagePaintHook;
    LPCSTR          lpPageSetupTemplateName;
    HGLOBAL         hPageSetupTemplate;
} PAGESETUPDLGA, * LPPAGESETUPDLGA;
typedef struct tagPSDW
{
    DWORD           lStructSize;
    HWND            hwndOwner;
    HGLOBAL         hDevMode;
    HGLOBAL         hDevNames;
    DWORD           Flags;
    POINT           ptPaperSize;
    RECT            rtMinMargin;
    RECT            rtMargin;
    HINSTANCE       hInstance;
    LPARAM          lCustData;
    LPPAGESETUPHOOK lpfnPageSetupHook;
    LPPAGEPAINTHOOK lpfnPagePaintHook;
    LPCWSTR         lpPageSetupTemplateName;
    HGLOBAL         hPageSetupTemplate;
} PAGESETUPDLGW, * LPPAGESETUPDLGW;
#ifdef UNICODE
typedef PAGESETUPDLGW PAGESETUPDLG;
typedef LPPAGESETUPDLGW LPPAGESETUPDLG;
#else
typedef PAGESETUPDLGA PAGESETUPDLG;
typedef LPPAGESETUPDLGA LPPAGESETUPDLG;
#endif
WINCOMMDLGAPI BOOL APIENTRY PageSetupDlgA( LPPAGESETUPDLGA );
WINCOMMDLGAPI BOOL APIENTRY PageSetupDlgW( LPPAGESETUPDLGW );
#ifdef UNICODE
#define PageSetupDlg  PageSetupDlgW
#else
#define PageSetupDlg  PageSetupDlgA
#endif
#define PSD_DEFAULTMINMARGINS             0x00000000
#define PSD_INWININIINTLMEASURE           0x00000000
#define PSD_MINMARGINS                    0x00000001
#define PSD_MARGINS                       0x00000002
#define PSD_INTHOUSANDTHSOFINCHES         0x00000004
#define PSD_INHUNDREDTHSOFMILLIMETERS     0x00000008
#define PSD_DISABLEMARGINS                0x00000010
#define PSD_DISABLEPRINTER                0x00000020
#define PSD_NOWARNING                     0x00000080
#define PSD_DISABLEORIENTATION            0x00000100
#define PSD_RETURNDEFAULT                 0x00000400
#define PSD_DISABLEPAPER                  0x00000200
#define PSD_SHOWHELP                      0x00000800
#define PSD_ENABLEPAGESETUPHOOK           0x00002000
#define PSD_ENABLEPAGESETUPTEMPLATE       0x00008000
#define PSD_ENABLEPAGESETUPTEMPLATEHANDLE 0x00020000
#define PSD_ENABLEPAGEPAINTHOOK           0x00040000
#define PSD_DISABLEPAGEPAINTING           0x00080000
#define PSD_NONETWORKBUTTON               0x00200000
#endif
#if !defined(RC_INVOKED)
#if defined(ISOLATION_AWARE_ENABLED) && (ISOLATION_AWARE_ENABLED != 0)
#include <commdlg.inl>
#endif
#endif

#if !defined(_WIN64)
#include <poppack.h>
#endif
#endif
#endif



