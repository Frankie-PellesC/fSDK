/*+@@file@@----------------------------------------------------------------*//*!
 \file		Umx.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep 17 15:44:29 2016
 \date		Modified on Sat Sep 17 15:44:29 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _UMX_H_
#define _UMX_H_
#if __POCC__ >= 500
#pragma once
#endif
#define UME_MENU_TEXT_LEN               50
#define UME_VERSION                     0
#define UMS_LISTBOX_USERS               0
#define UMS_LISTBOX_GROUPS              1
#define UM_GETSELCOUNT                  (WM_USER + 1000)
#define UM_GETUSERSELA                  (WM_USER + 1001)
#define UM_GETUSERSELW                  (WM_USER + 1002)
#define UM_GETGROUPSELA                 (WM_USER + 1003)
#define UM_GETGROUPSELW                 (WM_USER + 1004)
#define UM_GETCURFOCUSA                 (WM_USER + 1005)
#define UM_GETCURFOCUSW                 (WM_USER + 1006)
#define UM_GETOPTIONS                   (WM_USER + 1007)
#define UM_GETOPTIONS2                  (WM_USER + 1008)
#ifdef UNICODE
#define UM_GETUSERSEL                 UM_GETUSERSELW
#define UM_GETGROUPSEL                UM_GETGROUPSELW
#define UM_GETCURFOCUS                UM_GETCURFOCUSW
#else
#define UM_GETUSERSEL                 UM_GETUSERSELA
#define UM_GETGROUPSEL                UM_GETGROUPSELA
#define UM_GETCURFOCUS                UM_GETCURFOCUSA
#endif
typedef struct _UMS_LOADMENUA
{
    DWORD       dwVersion;
    CHAR        szMenuName[UME_MENU_TEXT_LEN + 1];
    HMENU       hMenu;
    CHAR        szHelpFileName[MAX_PATH];
    DWORD       dwMenuDelta;
} UMS_LOADMENUA, * PUMS_LOADMENUA;
typedef struct _UMS_LOADMENUW
{
    DWORD       dwVersion;
    WCHAR       szMenuName[UME_MENU_TEXT_LEN + 1];
    HMENU       hMenu;
    WCHAR       szHelpFileName[MAX_PATH];
    DWORD       dwMenuDelta;
} UMS_LOADMENUW, * PUMS_LOADMENUW;
#ifdef UNICODE
#define UMS_LOADMENU                    UMS_LOADMENUW
#define PUMS_LOADMENU                   PUMS_LOADMENUW
#else
#define UMS_LOADMENU                    UMS_LOADMENUA
#define PUMS_LOADMENU                   PUMS_LOADMENUA
#endif
#define UM_SELTYPE_USER     0x10
#define UM_SELTYPE_NORMALUSER   0x1 | UM_SELTYPE_USER
#define UM_SELTYPE_REMOTEUSER   0x2 | UM_SELTYPE_USER
#define UM_SELTYPE_GROUP    0x20
#define UM_SELTYPE_LOCALGROUP   0x4 | UM_SELTYPE_GROUP
#define UM_SELTYPE_GLOBALGROUP  0x8 | UM_SELTYPE_GROUP
typedef struct _UMS_GETSELA
{
    DWORD       dwRID;
    LPSTR       pchName;
    DWORD       dwSelType;
    LPSTR       pchFullName;
    LPSTR       pchComment;
} UMS_GETSELA, * PUMS_GETSELA;
typedef struct _UMS_GETSELW
{
    DWORD       dwRID;
    LPWSTR      pchName;
    DWORD       dwSelType;
    LPWSTR      pchFullName;
    LPWSTR      pchComment;
} UMS_GETSELW, * PUMS_GETSELW;
#ifdef UNICODE
#define UMS_GETSEL                  UMS_GETSELW
#define PUMS_GETSEL                 PUMS_GETSELW
#else
#define UMS_GETSEL                  UMS_GETSELA
#define PUMS_GETSEL                 PUMS_GETSELA
#endif
typedef struct _UMS_GETSELCOUNT
{
    DWORD       dwItems;
} UMS_GETSELCOUNT, * PUMS_GETSELCOUNT;
#define UM_FOCUS_TYPE_DOMAIN    1
#define UM_FOCUS_TYPE_WINNT     2
#define UM_FOCUS_TYPE_LM        3
#define UM_FOCUS_TYPE_UNKNOWN   4
typedef struct _UMS_GETCURFOCUSA
{
    CHAR        szFocus[MAX_PATH];
    DWORD       dwFocusType;
    CHAR        szFocusPDC[MAX_PATH];
    PVOID       psidFocus;
} UMS_GETCURFOCUSA, * PUMS_GETCURFOCUSA;
typedef struct _UMS_GETCURFOCUSW
{
    WCHAR       szFocus[MAX_PATH];
    DWORD       dwFocusType;
    WCHAR       szFocusPDC[MAX_PATH];
    PVOID       psidFocus;
} UMS_GETCURFOCUSW, * PUMS_GETCURFOCUSW;
#ifdef UNICODE
#define UMS_GETCURFOCUS             UMS_GETCURFOCUSW
#define PUMS_GETCURFOCUS            PUMS_GETCURFOCUSW
#else
#define UMS_GETCURFOCUS             UMS_GETCURFOCUSA
#define PUMS_GETCURFOCUS            PUMS_GETCURFOCUSA
#endif
typedef struct _UMS_GETOPTIONS
{
    BOOL        fSaveSettingsOnExit;
    BOOL        fConfirmation;
    BOOL        fSortByFullName;
} UMS_GETOPTIONS, * PUMS_GETOPTIONS;
typedef struct _UMS_GETOPTIONS2
{
    BOOL        fSaveSettingsOnExit;
    BOOL        fConfirmation;
    BOOL        fSortByFullName;
    BOOL        fMiniUserManager;
    BOOL        fLowSpeedConnection;
} UMS_GETOPTIONS2, * PUMS_GETOPTIONS2;
#define SZ_UME_UNLOADMENU               "UMEUnloadMenu"
#define SZ_UME_INITIALIZEMENU           "UMEInitializeMenu"
#define SZ_UME_REFRESH                  "UMERefresh"
#define SZ_UME_MENUACTION               "UMEMenuAction"
#define SZ_UME_LOADMENUW                "UMELoadMenuW"
#define SZ_UME_GETEXTENDEDERRORSTRINGW  "UMEGetExtendedErrorStringW"
#define SZ_UME_CREATEW                  "UMECreateW"
#define SZ_UME_DELETEW                  "UMEDeleteW"
#define SZ_UME_RENAMEW                  "UMERenameW"
#define SZ_UME_LOADMENUA                "UMELoadMenuA"
#define SZ_UME_GETEXTENDEDERRORSTRINGA  "UMEGetExtendedErrorStringA"
#define SZ_UME_CREATEA                  "UMECreateA"
#define SZ_UME_DELETEA                  "UMEDeleteA"
#define SZ_UME_RENAMEA                  "UMERenameA"
#ifdef UNICODE
#define SZ_UME_LOADMENU                 SZ_UME_LOADMENUW
#define SZ_UME_GETEXTENDEDERRORSTRING   SZ_UME_GETEXTENDEDERRORSTRINGW
#define SZ_UME_CREATE                   SZ_UME_CREATEW
#define SZ_UME_DELETE                   SZ_UME_DELETEW
#define SZ_UME_RENAME                   SZ_UME_RENAMEW
#else
#define SZ_UME_LOADMENU                 SZ_UME_LOADMENUA
#define SZ_UME_GETEXTENDEDERRORSTRING   SZ_UME_GETEXTENDEDERRORSTRINGA
#define SZ_UME_CREATE                   SZ_UME_CREATEA
#define SZ_UME_DELETE                   SZ_UME_DELETEA
#define SZ_UME_RENAME                   SZ_UME_RENAMEA
#endif
typedef DWORD(PASCAL *PUMX_LOADMENUW) (HWND hWnd, PUMS_LOADMENUW pumsload);
typedef DWORD(PASCAL *PUMX_LOADMENUA) (HWND hWnd, PUMS_LOADMENUA pumsload);
typedef LPWSTR(PASCAL *PUMX_GETEXTENDEDERRORSTRINGW) (VOID);
typedef LPSTR(PASCAL *PUMX_GETEXTENDEDERRORSTRINGA) (VOID);
typedef VOID(PASCAL *PUMX_UNLOADMENU) (VOID);
typedef VOID(PASCAL *PUMX_INITIALIZEMENU) (VOID);
typedef VOID(PASCAL *PUMX_REFRESH) (HWND hwndParent);
typedef VOID(PASCAL *PUMX_MENUACTION) (HWND hwndParent, DWORD dwEventId);
typedef VOID(PASCAL *PUMX_CREATEW) (HWND hwndParent, PUMS_GETSELW pumsSelection);
typedef VOID(PASCAL *PUMX_CREATEA) (HWND hwndParent, PUMS_GETSELA pumsSelection);
typedef VOID(PASCAL *PUMX_DELETEW) (HWND hwndParent, PUMS_GETSELW pumsSelection);
typedef VOID(PASCAL *PUMX_DELETEA) (HWND hwndParent, PUMS_GETSELA pumsSelection);
typedef VOID(PASCAL *PUMX_RENAMEW) (HWND hwndParent, PUMS_GETSELW pumsSelection, LPWSTR pchNewName);
typedef VOID(PASCAL *PUMX_RENAMEA) (HWND hwndParent, PUMS_GETSELA pumsSelection, LPSTR pchNewName);
#ifdef  UNICODE
#define PUMX_LOADMENU                   PUMX_LOADMENUW
#define PUMX_GETEXTENDEDERRORSTRING     PUMX_GETEXTENDEDERRORSTRINGW
#define PUMX_CREATE                     PUMX_CREATEW
#define PUMX_DELETE                     PUMX_DELETEW
#define PUMX_RENAME                     PUMX_RENAMEW
#else
#define PUMX_LOADMENU                   PUMX_LOADMENUA
#define PUMX_GETEXTENDEDERRORSTRING     PUMX_GETEXTENDEDERRORSTRINGA
#define PUMX_CREATE                     PUMX_CREATEA
#define PUMX_DELETE                     PUMX_DELETEA
#define PUMX_RENAME                     PUMX_RENAMEA
#endif
DWORD PASCAL UMELoadMenuA(HWND hwndMessage, PUMS_LOADMENUA pumsload);
DWORD PASCAL UMELoadMenuW(HWND hwndMessage, PUMS_LOADMENUW pumsload);
LPSTR PASCAL UMEGetExtendedErrorStringA(VOID);
LPWSTR PASCAL UMEGetExtendedErrorStringW(VOID);
VOID PASCAL UMEUnloadMenu(VOID);
VOID PASCAL UMEInitializeMenu(VOID);
VOID PASCAL UMERefresh(HWND hwndParent);
VOID PASCAL UMEMenuAction(HWND hwndParent, DWORD dwEventId);
VOID PASCAL UMECreateA(HWND hwndParent, PUMS_GETSELA pumsSelection);
VOID PASCAL UMECreateW(HWND hwndParent, PUMS_GETSELW pumsSelection);
VOID PASCAL UMEDeleteA(HWND hwndParent, PUMS_GETSELA pumsSelection);
VOID PASCAL UMEDeleteW(HWND hwndParent, PUMS_GETSELW pumsSelection);
VOID PASCAL UMERenameA(HWND hwndParent, PUMS_GETSELA pumsSelection, LPSTR pchNewName);
VOID PASCAL UMERenameW(HWND hwndParent, PUMS_GETSELW pumsSelection, LPWSTR pchNewName);
#endif
