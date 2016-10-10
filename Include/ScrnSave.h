/*+@@file@@----------------------------------------------------------------*//*!
 \file		ScrnSave.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep  3 23:53:36 2016
 \date		Modified on Sat Sep  3 23:53:36 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _INC_SCRNSAVE
#define _INC_SCRNSAVE
#if __POCC__ >= 500
#pragma once
#endif
#include <pshpack1.h>
#define IDS_DESCRIPTION      1
#define ID_APP      100
#define DLG_SCRNSAVECONFIGURE   2003
#define idsIsPassword           1000
#define idsIniFile              1001
#define idsScreenSaver          1002
#define idsPassword             1003
#define idsDifferentPW          1004
#define idsChangePW             1005
#define idsBadOldPW             1006
#define idsAppName              1007
#define idsNoHelpMemory         1008
#define idsHelpFile             1009
#define idsDefKeyword           1010
#ifdef UNICODE
LRESULT WINAPI ScreenSaverProcW (HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);
#   define  ScreenSaverProc ScreenSaverProcW
#else
LRESULT WINAPI ScreenSaverProc (HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);
#endif
LRESULT WINAPI DefScreenSaverProc (HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
BOOL WINAPI ScreenSaverConfigureDialog (HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam);
BOOL WINAPI RegisterDialogClasses (HANDLE hInst);
#define WS_GT   (WS_GROUP | WS_TABSTOP)
#define MAXFILELEN         13
#define TITLEBARNAMELEN    40
#define APPNAMEBUFFERLEN   40
#define BUFFLEN           255
extern HINSTANCE hMainInstance;
extern HWND   hMainWindow;
extern BOOL   fChildPreview;
extern TCHAR  szName[TITLEBARNAMELEN];
extern TCHAR  szAppName[APPNAMEBUFFERLEN];
extern TCHAR  szIniFile[MAXFILELEN];
extern TCHAR  szScreenSaver[22];
extern TCHAR  szHelpFile[MAXFILELEN];
extern TCHAR  szNoHelpMemory[BUFFLEN];
extern UINT   MyHelpMessage;
#define SCRM_VERIFYPW   WM_APP
void WINAPI ScreenSaverChangePassword( HWND hParent );
#include <poppack.h>
#endif
