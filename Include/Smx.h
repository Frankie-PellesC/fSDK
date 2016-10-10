/*+@@file@@----------------------------------------------------------------*//*!
 \file		Smx.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 00:37:24 2016
 \date		Modified on Sat Sep 17 00:37:24 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _SMX_H_
#define _SMX_H_
#if __POCC__ >= 500
#pragma once
#endif
#define MENU_TEXT_LEN                   50
#define SME_VERSION                     0
#define SM_GETSELCOUNT                  (WM_USER + 1000)
#define SM_GETSERVERSELA                (WM_USER + 1001)
#define SM_GETSERVERSELW                (WM_USER + 1002)
#define SM_GETCURFOCUSA                 (WM_USER + 1003)
#define SM_GETCURFOCUSW                 (WM_USER + 1004)
#define SM_GETOPTIONS                   (WM_USER + 1005)
#ifdef UNICODE
#define SM_GETSERVERSEL                 SM_GETSERVERSELW
#define SM_GETCURFOCUS                  SM_GETCURFOCUSW
#else
#define SM_GETSERVERSEL                 SM_GETSERVERSELA
#define SM_GETCURFOCUS                  SM_GETCURFOCUSA
#endif
typedef struct _SMS_LOADMENUA
{
    DWORD       dwVersion;
    CHAR        szMenuName[MENU_TEXT_LEN + 1];
    HMENU       hMenu;
    CHAR        szHelpFileName[MAX_PATH];
    DWORD       dwServerType;
    DWORD       dwMenuDelta;
} SMS_LOADMENUA, * PSMS_LOADMENUA;
typedef struct _SMS_LOADMENUW
{
    DWORD       dwVersion;
    WCHAR       szMenuName[MENU_TEXT_LEN + 1];
    HMENU       hMenu;
    WCHAR       szHelpFileName[MAX_PATH];
    DWORD       dwServerType;
    DWORD       dwMenuDelta;
} SMS_LOADMENUW, * PSMS_LOADMENUW;
#ifdef UNICODE
#define SMS_LOADMENU                    SMS_LOADMENUW
#define PSMS_LOADMENU                   PSMS_LOADMENUW
#else
#define SMS_LOADMENU                    SMS_LOADMENUA
#define PSMS_LOADMENU                   PSMS_LOADMENUA
#endif
typedef struct _SMS_GETSERVERSELA
{
    CHAR        szServerName[MAX_PATH];
    DWORD       dwServerType;
} SMS_GETSERVERSELA, * PSMS_GETSERVERSELA;
typedef struct _SMS_GETSERVERSELW
{
    WCHAR       szServerName[MAX_PATH];
    DWORD       dwServerType;
} SMS_GETSERVERSELW, * PSMS_GETSERVERSELW;
#ifdef UNICODE
#define SMS_GETSERVERSEL                SMS_GETSERVERSELW
#define PSMS_GETSERVERSEL               PSMS_GETSERVERSELW
#else
#define SMS_GETSERVERSEL                SMS_GETSERVERSELA
#define PSMS_GETSERVERSEL               PSMS_GETSERVERSELA
#endif
typedef struct _SMS_GETSELCOUNT
{
    DWORD       dwItems;
} SMS_GETSELCOUNT, * PSMS_GETSELCOUNT;
#define SM_FOCUS_TYPE_NT_DOMAIN         1
#define SM_FOCUS_TYPE_LM_DOMAIN         2
#define SM_FOCUS_TYPE_UNKNOWN_DOMAIN    3
#define SM_FOCUS_TYPE_NT_SERVER         4
#define SM_FOCUS_TYPE_LM_SERVER         5
#define SM_FOCUS_TYPE_WFW_SERVER        6
#define SM_FOCUS_TYPE_UNKNOWN_SERVER    7
typedef struct _SMS_GETCURFOCUSA
{
    CHAR        szFocus[MAX_PATH];
    DWORD       dwFocusType;
} SMS_GETCURFOCUSA, * PSMS_GETCURFOCUSA;
typedef struct _SMS_GETCURFOCUSW
{
    WCHAR       szFocus[MAX_PATH];
    DWORD       dwFocusType;
} SMS_GETCURFOCUSW, * PSMS_GETCURFOCUSW;
#ifdef UNICODE
#define SMS_GETCURFOCUS             SMS_GETCURFOCUSW
#define PSMS_GETCURFOCUS            PSMS_GETCURFOCUSW
#else
#define SMS_GETCURFOCUS             SMS_GETCURFOCUSA
#define PSMS_GETCURFOCUS            PSMS_GETCURFOCUSA
#endif
typedef struct _SMS_GETOPTIONS
{
    BOOL        fSaveSettingsOnExit;
    BOOL        fConfirmation;
} SMS_GETOPTIONS, * PSMS_GETOPTIONS;
typedef struct _SMS_VALIDATEA
{
    const CHAR * pszServer;
    CHAR       * pszType;
    CHAR       * pszComment;
} SMS_VALIDATEA, * PSMS_VALIDATEA;
typedef struct _SMS_VALIDATEW
{
    const WCHAR * pszServer;
    WCHAR       * pszType;
    WCHAR       * pszComment;
} SMS_VALIDATEW, * PSMS_VALIDATEW;
#ifdef UNICODE
#define SMS_VALIDATE                SMS_VALIDATEW
#define PSMS_VALIDATE               PSMS_VALIDATEW
#else
#define SMS_VALIDATE                SMS_VALIDATEA
#define PSMS_VALIDATE               PSMS_VALIDATEA
#endif
#define SZ_SME_UNLOADMENU               "SMEUnloadMenu"
#define SZ_SME_INITIALIZEMENU           "SMEInitializeMenu"
#define SZ_SME_REFRESH                  "SMERefresh"
#define SZ_SME_MENUACTION               "SMEMenuAction"
#define SZ_SME_LOADMENUW                "SMELoadMenuW"
#define SZ_SME_GETEXTENDEDERRORSTRINGW  "SMEGetExtendedErrorStringW"
#define SZ_SME_VALIDATEW                "SMEValidateW"
#define SZ_SME_LOADMENUA                "SMELoadMenuA"
#define SZ_SME_GETEXTENDEDERRORSTRINGA  "SMEGetExtendedErrorStringA"
#define SZ_SME_VALIDATEA                "SMEValidateA"
#ifdef UNICODE
#define SZ_SME_LOADMENU                 SZ_SME_LOADMENUW
#define SZ_SME_GETEXTENDEDERRORSTRING   SZ_SME_GETEXTENDEDERRORSTRINGW
#define SZ_SME_VALIDATE                 SZ_SME_VALIDATEW
#else
#define SZ_SME_LOADMENU                 SZ_SME_LOADMENUA
#define SZ_SME_GETEXTENDEDERRORSTRING   SZ_SME_GETEXTENDEDERRORSTRINGA
#define SZ_SME_VALIDATE                 SZ_SME_VALIDATEA
#endif
typedef DWORD(PASCAL *PSMX_LOADMENU) (HWND hWnd, PSMS_LOADMENU psmsload);
typedef LPTSTR(PASCAL *PSMX_GETEXTENDEDERRORSTRING) (VOID);
typedef VOID(PASCAL *PSMX_UNLOADMENU) (VOID);
typedef VOID(PASCAL *PSMX_INITIALIZEMENU) (VOID);
typedef VOID(PASCAL *PSMX_REFRESH) (HWND hwndParent);
typedef VOID(PASCAL *PSMX_MENUACTION) (HWND hwndParent, DWORD dwEventId);
typedef BOOL(PASCAL *PSMX_VALIDATE) (PSMS_VALIDATE psmsvalidate);
DWORD PASCAL SMELoadMenuA(HWND hWnd, PSMS_LOADMENUA psmsload);
DWORD PASCAL SMELoadMenuW(HWND hWnd, PSMS_LOADMENUW psmsload);
LPSTR PASCAL SMEGetExtendedErrorStringA(VOID);
LPWSTR PASCAL SMEGetExtendedErrorStringW(VOID);
VOID PASCAL SMEUnloadMenu(VOID);
VOID PASCAL SMEInitializeMenu(VOID);
VOID PASCAL SMERefresh(HWND hwndParent);
VOID PASCAL SMEMenuAction(HWND hwndParent, DWORD dwEventId);
BOOL PASCAL SMEValidateA(PSMS_VALIDATEA psmsValidate);
BOOL PASCAL SMEValidateW(PSMS_VALIDATEW psmsValidate);
#endif
