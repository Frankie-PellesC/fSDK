/*+@@file@@----------------------------------------------------------------*//*!
 \file		shellapi.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Jun 27 09:44:04 2016
 \date		Modified on Mon Jun 27 09:44:04 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _INC_SHELLAPI
#define _INC_SHELLAPI
#if __POCC__ >= 500
#pragma once
#endif
#ifndef WINSHELLAPI
#if !defined(_SHELL32_)
#define WINSHELLAPI       DECLSPEC_IMPORT
#else
#define WINSHELLAPI
#endif
#endif
#ifndef SHSTDAPI
#if !defined(_SHELL32_)
#define SHSTDAPI          extern DECLSPEC_IMPORT HRESULT STDAPICALLTYPE
#define SHSTDAPI_(type)   extern DECLSPEC_IMPORT type STDAPICALLTYPE
#else
#define SHSTDAPI          STDAPI
#define SHSTDAPI_(type)   STDAPI_(type)
#endif
#endif
#ifndef SHDOCAPI
#if !defined(_SHDOCVW_)
#define SHDOCAPI          extern DECLSPEC_IMPORT HRESULT STDAPICALLTYPE
#define SHDOCAPI_(type)   extern DECLSPEC_IMPORT type STDAPICALLTYPE
#else
#define SHDOCAPI          STDAPI
#define SHDOCAPI_(type)   STDAPI_(type)
#endif
#endif
#if !defined(_WIN64)
#include <pshpack1.h>
#endif
DECLARE_HANDLE(HDROP);
SHSTDAPI_(UINT)DragQueryFileA(HDROP hDrop, UINT iFile, LPSTR lpszFile, UINT cch);
SHSTDAPI_(UINT)DragQueryFileW(HDROP hDrop, UINT iFile, LPWSTR lpszFile, UINT cch);
#ifdef UNICODE
#define DragQueryFile  DragQueryFileW
#else
#define DragQueryFile  DragQueryFileA
#endif
SHSTDAPI_(BOOL)DragQueryPoint(HDROP hDrop, LPPOINT lppt);
SHSTDAPI_(void) DragFinish(HDROP hDrop);
SHSTDAPI_(void) DragAcceptFiles(HWND hWnd, BOOL fAccept);
SHSTDAPI_(HINSTANCE)ShellExecuteA(HWND hwnd, LPCSTR lpOperation, LPCSTR lpFile, LPCSTR lpParameters, LPCSTR lpDirectory, INT nShowCmd);
SHSTDAPI_(HINSTANCE)ShellExecuteW(HWND hwnd, LPCWSTR lpOperation, LPCWSTR lpFile, LPCWSTR lpParameters, LPCWSTR lpDirectory, INT nShowCmd);
#ifdef UNICODE
#define ShellExecute  ShellExecuteW
#else
#define ShellExecute  ShellExecuteA
#endif

SHSTDAPI_(HINSTANCE)FindExecutableA(LPCSTR lpFile, LPCSTR lpDirectory, LPSTR lpResult);

SHSTDAPI_(HINSTANCE)FindExecutableW(LPCWSTR lpFile, LPCWSTR lpDirectory, LPWSTR lpResult);
#ifdef UNICODE
#define FindExecutable  FindExecutableW
#else
#define FindExecutable  FindExecutableA
#endif
SHSTDAPI_(LPWSTR *)CommandLineToArgvW(LPCWSTR lpCmdLine, int *pNumArgs);
SHSTDAPI_(INT)ShellAboutA(HWND hWnd, LPCSTR szApp, LPCSTR szOtherStuff, HICON hIcon);
SHSTDAPI_(INT)ShellAboutW(HWND hWnd, LPCWSTR szApp, LPCWSTR szOtherStuff, HICON hIcon);
#ifdef UNICODE
#define ShellAbout  ShellAboutW
#else
#define ShellAbout  ShellAboutA
#endif
SHSTDAPI_(HICON)DuplicateIcon(HINSTANCE hInst, HICON hIcon);
SHSTDAPI_(HICON)ExtractAssociatedIconA(HINSTANCE hInst, LPSTR pszIconPath, WORD * piIcon);
SHSTDAPI_(HICON)ExtractAssociatedIconW(HINSTANCE hInst, LPWSTR pszIconPath, WORD * piIcon);
#ifdef UNICODE
#define ExtractAssociatedIcon  ExtractAssociatedIconW
#else
#define ExtractAssociatedIcon  ExtractAssociatedIconA
#endif
SHSTDAPI_(HICON)ExtractAssociatedIconExA(HINSTANCE hInst, LPSTR pszIconPath, WORD * piIconIndex, WORD * piIconId);
SHSTDAPI_(HICON)ExtractAssociatedIconExW(HINSTANCE hInst, LPWSTR pszIconPath, WORD * piIconIndex, WORD * piIconId);
#ifdef UNICODE
#define ExtractAssociatedIconEx  ExtractAssociatedIconExW
#else
#define ExtractAssociatedIconEx  ExtractAssociatedIconExA
#endif
SHSTDAPI_(HICON)ExtractIconA(HINSTANCE hInst, LPCSTR lpszExeFileName, UINT nIconIndex);
SHSTDAPI_(HICON)ExtractIconW(HINSTANCE hInst, LPCWSTR lpszExeFileName, UINT nIconIndex);
#ifdef UNICODE
#define ExtractIcon  ExtractIconW
#else
#define ExtractIcon  ExtractIconA
#endif
#if(WINVER >= 0x0400)
typedef struct _DRAGINFOA
{
	UINT uSize;
	POINT pt;
	BOOL fNC;
	LPSTR lpFileList;
	DWORD grfKeyState;
} DRAGINFOA, *LPDRAGINFOA;
typedef struct _DRAGINFOW
{
	UINT uSize;
	POINT pt;
	BOOL fNC;
	LPWSTR lpFileList;
	DWORD grfKeyState;
} DRAGINFOW, *LPDRAGINFOW;
#ifdef UNICODE
typedef DRAGINFOW DRAGINFO;
typedef LPDRAGINFOW LPDRAGINFO;
#else
typedef DRAGINFOA DRAGINFO;
typedef LPDRAGINFOA LPDRAGINFO;
#endif
#define ABM_NEW           0x00000000
#define ABM_REMOVE        0x00000001
#define ABM_QUERYPOS      0x00000002
#define ABM_SETPOS        0x00000003
#define ABM_GETSTATE      0x00000004
#define ABM_GETTASKBARPOS 0x00000005
#define ABM_ACTIVATE      0x00000006
#define ABM_GETAUTOHIDEBAR 0x00000007
#define ABM_SETAUTOHIDEBAR 0x00000008
#define ABM_WINDOWPOSCHANGED 0x0000009
#if (NTDDI_VERSION >= NTDDI_WINXP)
#define ABM_SETSTATE         0x0000000a
#endif
#define ABN_STATECHANGE    0x0000000
#define ABN_POSCHANGED     0x0000001
#define ABN_FULLSCREENAPP  0x0000002
#define ABN_WINDOWARRANGE  0x0000003
#define ABS_AUTOHIDE    0x0000001
#define ABS_ALWAYSONTOP 0x0000002
#define ABE_LEFT        0
#define ABE_TOP         1
#define ABE_RIGHT       2
#define ABE_BOTTOM      3
typedef struct _AppBarData
{
	DWORD cbSize;
	HWND hWnd;
	UINT uCallbackMessage;
	UINT uEdge;
	RECT rc;
	LPARAM lParam;
} APPBARDATA, *PAPPBARDATA;
SHSTDAPI_(UINT_PTR)SHAppBarMessage(DWORD dwMessage, PAPPBARDATA pData);
SHSTDAPI_(DWORD)DoEnvironmentSubstA(LPSTR szString, UINT cchString);
SHSTDAPI_(DWORD)DoEnvironmentSubstW(LPWSTR szString, UINT cchString);
#ifdef UNICODE
#define DoEnvironmentSubst  DoEnvironmentSubstW
#else
#define DoEnvironmentSubst  DoEnvironmentSubstA
#endif
#define EIRESID(x) (-1 * (int)(x))
SHSTDAPI_(UINT)ExtractIconExA(LPCSTR lpszFile, int nIconIndex, HICON *phiconLarge, HICON *phiconSmall, UINT nIcons);
SHSTDAPI_(UINT)ExtractIconExW(LPCWSTR lpszFile, int nIconIndex, HICON *phiconLarge, HICON *phiconSmall, UINT nIcons);
#ifdef UNICODE
#define ExtractIconEx  ExtractIconExW
#else
#define ExtractIconEx  ExtractIconExA
#endif
#define FO_MOVE                    0x0001
#define FO_COPY                    0x0002
#define FO_DELETE                  0x0003
#define FO_RENAME                  0x0004
#define FOF_MULTIDESTFILES         0x0001
#define FOF_CONFIRMMOUSE           0x0002
#define FOF_SILENT                 0x0004
#define FOF_RENAMEONCOLLISION      0x0008
#define FOF_NOCONFIRMATION         0x0010
#define FOF_WANTMAPPINGHANDLE      0x0020
#define FOF_ALLOWUNDO              0x0040
#define FOF_FILESONLY              0x0080
#define FOF_SIMPLEPROGRESS         0x0100
#define FOF_NOCONFIRMMKDIR         0x0200
#define FOF_NOERRORUI              0x0400
#if (_WIN32_IE >= 0x0500)
#define FOF_NOCOPYSECURITYATTRIBS  0x0800
#define FOF_NORECURSION            0x1000
#define FOF_NO_CONNECTED_ELEMENTS  0x2000
#define FOF_WANTNUKEWARNING        0x4000
#endif
#if (_WIN32_WINNT >= 0x0501)
#define FOF_NORECURSEREPARSE       0x8000
#endif
#define FOF_NO_UI                   (FOF_SILENT | FOF_NOCONFIRMATION | FOF_NOERRORUI | FOF_NOCONFIRMMKDIR)
typedef WORD FILEOP_FLAGS;
#define PO_DELETE       0x0013
#define PO_RENAME       0x0014
#define PO_PORTCHANGE   0x0020
#define PO_REN_PORT     0x0034
typedef WORD PRINTEROP_FLAGS;
typedef struct _SHFILEOPSTRUCTA
{
	HWND hwnd;
	UINT wFunc;
	LPCSTR pFrom;
	LPCSTR pTo;
	FILEOP_FLAGS fFlags;
	BOOL fAnyOperationsAborted;
	LPVOID hNameMappings;
	LPCSTR lpszProgressTitle;
} SHFILEOPSTRUCTA, *LPSHFILEOPSTRUCTA;
typedef struct _SHFILEOPSTRUCTW
{
	HWND hwnd;
	UINT wFunc;
	LPCWSTR pFrom;
	LPCWSTR pTo;
	FILEOP_FLAGS fFlags;
	BOOL fAnyOperationsAborted;
	LPVOID hNameMappings;
	LPCWSTR lpszProgressTitle;
} SHFILEOPSTRUCTW, *LPSHFILEOPSTRUCTW;
#ifdef UNICODE
typedef SHFILEOPSTRUCTW SHFILEOPSTRUCT;
typedef LPSHFILEOPSTRUCTW LPSHFILEOPSTRUCT;
#else
typedef SHFILEOPSTRUCTA SHFILEOPSTRUCT;
typedef LPSHFILEOPSTRUCTA LPSHFILEOPSTRUCT;
#endif
SHSTDAPI_(int) SHFileOperationA(LPSHFILEOPSTRUCTA lpFileOp);
SHSTDAPI_(int) SHFileOperationW(LPSHFILEOPSTRUCTW lpFileOp);
#ifdef UNICODE
#define SHFileOperation  SHFileOperationW
#else
#define SHFileOperation  SHFileOperationA
#endif
SHSTDAPI_(void) SHFreeNameMappings(HANDLE hNameMappings);
typedef struct _SHNAMEMAPPINGA
{
	LPSTR pszOldPath;
	LPSTR pszNewPath;
	int cchOldPath;
	int cchNewPath;
} SHNAMEMAPPINGA, *LPSHNAMEMAPPINGA;
typedef struct _SHNAMEMAPPINGW
{
	LPWSTR pszOldPath;
	LPWSTR pszNewPath;
	int cchOldPath;
	int cchNewPath;
} SHNAMEMAPPINGW, *LPSHNAMEMAPPINGW;
#ifdef UNICODE
typedef SHNAMEMAPPINGW SHNAMEMAPPING;
typedef LPSHNAMEMAPPINGW LPSHNAMEMAPPING;
#else
typedef SHNAMEMAPPINGA SHNAMEMAPPING;
typedef LPSHNAMEMAPPINGA LPSHNAMEMAPPING;
#endif
#define SE_ERR_FNF              2
#define SE_ERR_PNF              3
#define SE_ERR_ACCESSDENIED     5
#define SE_ERR_OOM              8
#define SE_ERR_DLLNOTFOUND              32
#endif
#define SE_ERR_SHARE                    26
#define SE_ERR_ASSOCINCOMPLETE          27
#define SE_ERR_DDETIMEOUT               28
#define SE_ERR_DDEFAIL                  29
#define SE_ERR_DDEBUSY                  30
#define SE_ERR_NOASSOC                  31
#if(WINVER >= 0x0400)
#define SEE_MASK_DEFAULT           0x00000000
#define SEE_MASK_CLASSNAME         0x00000001
#define SEE_MASK_CLASSKEY          0x00000003
#define SEE_MASK_IDLIST            0x00000004
#define SEE_MASK_INVOKEIDLIST      0x0000000c
#if (NTDDI_VERSION < NTDDI_VISTA)
#define SEE_MASK_ICON              0x00000010
#endif
#define SEE_MASK_HOTKEY            0x00000020
#define SEE_MASK_NOCLOSEPROCESS    0x00000040
#define SEE_MASK_CONNECTNETDRV     0x00000080
#define SEE_MASK_NOASYNC           0x00000100
#define SEE_MASK_FLAG_DDEWAIT      SEE_MASK_NOASYNC
#define SEE_MASK_DOENVSUBST        0x00000200
#define SEE_MASK_FLAG_NO_UI        0x00000400
#define SEE_MASK_UNICODE           0x00004000
#define SEE_MASK_NO_CONSOLE        0x00008000
#define SEE_MASK_ASYNCOK           0x00100000
#if (NTDDI_VERSION >= NTDDI_WIN2K)
#define SEE_MASK_HMONITOR          0x00200000
#endif
#if (NTDDI_VERSION >= NTDDI_WINXPSP1)
#define SEE_MASK_NOZONECHECKS      0x00800000
#endif
#if (NTDDI_VERSION >= NTDDI_WIN2K)
#define SEE_MASK_NOQUERYCLASSSTORE 0x01000000
#define SEE_MASK_WAITFORINPUTIDLE  0x02000000
#endif
#if (NTDDI_VERSION >= NTDDI_WINXP)
#define SEE_MASK_FLAG_LOG_USAGE    0x04000000
#endif
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
typedef struct _SHELLEXECUTEINFOA
{
	DWORD cbSize;
	ULONG fMask;
	HWND hwnd;
	LPCSTR lpVerb;
	LPCSTR lpFile;
	LPCSTR lpParameters;
	LPCSTR lpDirectory;
	int nShow;
	HINSTANCE hInstApp;
	void *lpIDList;
	LPCSTR lpClass;
	HKEY hkeyClass;
	DWORD dwHotKey;
	union
	{
		HANDLE hIcon;
#if (NTDDI_VERSION >= NTDDI_WIN2K)
		HANDLE hMonitor;
#endif
	} DUMMYUNIONNAME;
	HANDLE hProcess;
} SHELLEXECUTEINFOA, *LPSHELLEXECUTEINFOA;
typedef struct _SHELLEXECUTEINFOW
{
	DWORD cbSize;
	ULONG fMask;
	HWND hwnd;
	LPCWSTR lpVerb;
	LPCWSTR lpFile;
	LPCWSTR lpParameters;
	LPCWSTR lpDirectory;
	int nShow;
	HINSTANCE hInstApp;
	void *lpIDList;
	LPCWSTR lpClass;
	HKEY hkeyClass;
	DWORD dwHotKey;
	union
	{
		HANDLE hIcon;
#if (NTDDI_VERSION >= NTDDI_WIN2K)
		HANDLE hMonitor;
#endif
	} DUMMYUNIONNAME;
	HANDLE hProcess;
} SHELLEXECUTEINFOW, *LPSHELLEXECUTEINFOW;
#ifdef UNICODE
typedef SHELLEXECUTEINFOW SHELLEXECUTEINFO;
typedef LPSHELLEXECUTEINFOW LPSHELLEXECUTEINFO;
#else
typedef SHELLEXECUTEINFOA SHELLEXECUTEINFO;
typedef LPSHELLEXECUTEINFOA LPSHELLEXECUTEINFO;
#endif
SHSTDAPI_(BOOL)ShellExecuteExA(SHELLEXECUTEINFOA * pExecInfo);
SHSTDAPI_(BOOL)ShellExecuteExW(SHELLEXECUTEINFOW * pExecInfo);
#ifdef UNICODE
#define ShellExecuteEx  ShellExecuteExW
#else
#define ShellExecuteEx  ShellExecuteExA
#endif
#if (NTDDI_VERSION >= NTDDI_WIN2K)
typedef struct _SHCREATEPROCESSINFOW
{
	DWORD cbSize;
	ULONG fMask;
	HWND hwnd;
	LPCWSTR pszFile;
	LPCWSTR pszParameters;
	LPCWSTR pszCurrentDirectory;
	HANDLE hUserToken;
	LPSECURITY_ATTRIBUTES lpProcessAttributes;
	LPSECURITY_ATTRIBUTES lpThreadAttributes;
	BOOL bInheritHandles;
	DWORD dwCreationFlags;
	LPSTARTUPINFOW lpStartupInfo;
	LPPROCESS_INFORMATION lpProcessInformation;
} SHCREATEPROCESSINFOW, *PSHCREATEPROCESSINFOW;
SHSTDAPI_(BOOL)SHCreateProcessAsUserW(PSHCREATEPROCESSINFOW pscpi);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
SHSTDAPI SHEvaluateSystemCommandTemplate(PCWSTR pszCmdTemplate, PWSTR *ppszApplication, PWSTR *ppszCommandLine, PWSTR *ppszParameters);
typedef enum ASSOCCLASS
{
	ASSOCCLASS_SHELL_KEY = 0,
	ASSOCCLASS_PROGID_KEY,
	ASSOCCLASS_PROGID_STR,
	ASSOCCLASS_CLSID_KEY,
	ASSOCCLASS_CLSID_STR,
	ASSOCCLASS_APP_KEY,
	ASSOCCLASS_APP_STR,
	ASSOCCLASS_SYSTEM_STR,
	ASSOCCLASS_FOLDER,
	ASSOCCLASS_STAR,
} ASSOCCLASS;
typedef struct ASSOCIATIONELEMENT_
{
	ASSOCCLASS ac;
	HKEY hkClass;
	PCWSTR pszClass;
} ASSOCIATIONELEMENT;
SHSTDAPI AssocCreateForClasses(const ASSOCIATIONELEMENT *rgClasses, ULONG cClasses, REFIID riid, void **ppv);
#endif
#if (NTDDI_VERSION >= NTDDI_WIN2K)
typedef struct _SHQUERYRBINFO
{
	DWORD cbSize;
	__int64 i64Size;
	__int64 i64NumItems;
} SHQUERYRBINFO, *LPSHQUERYRBINFO;
#define SHERB_NOCONFIRMATION    0x00000001
#define SHERB_NOPROGRESSUI      0x00000002
#define SHERB_NOSOUND           0x00000004
SHSTDAPI SHQueryRecycleBinA(LPCSTR pszRootPath, LPSHQUERYRBINFO pSHQueryRBInfo);
SHSTDAPI SHQueryRecycleBinW(LPCWSTR pszRootPath, LPSHQUERYRBINFO pSHQueryRBInfo);
#ifdef UNICODE
#define SHQueryRecycleBin  SHQueryRecycleBinW
#else
#define SHQueryRecycleBin  SHQueryRecycleBinA
#endif
SHSTDAPI SHEmptyRecycleBinA(HWND hwnd, LPCSTR pszRootPath, DWORD dwFlags);
SHSTDAPI SHEmptyRecycleBinW(HWND hwnd, LPCWSTR pszRootPath, DWORD dwFlags);
#ifdef UNICODE
#define SHEmptyRecycleBin  SHEmptyRecycleBinW
#else
#define SHEmptyRecycleBin  SHEmptyRecycleBinA
#endif
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
typedef enum
{
	QUNS_NOT_PRESENT = 1,
	QUNS_BUSY = 2,
	QUNS_RUNNING_D3D_FULL_SCREEN = 3,
	QUNS_PRESENTATION_MODE = 4,
	QUNS_ACCEPTS_NOTIFICATIONS = 5,
#if (NTDDI_VERSION >= NTDDI_WIN7)
	QUNS_QUIET_TIME = 6,
#endif
} QUERY_USER_NOTIFICATION_STATE;
SHSTDAPI SHQueryUserNotificationState(QUERY_USER_NOTIFICATION_STATE *pquns);
#endif
#if (NTDDI_VERSION >= NTDDI_WIN7)
SHSTDAPI SHGetPropertyStoreForWindow(HWND hwnd, REFIID riid, void **ppv);
#endif
typedef struct _NOTIFYICONDATAA
{
	DWORD cbSize;
	HWND hWnd;
	UINT uID;
	UINT uFlags;
	UINT uCallbackMessage;
	HICON hIcon;
#if (NTDDI_VERSION < NTDDI_WIN2K)
	CHAR szTip[64];
#endif
#if (NTDDI_VERSION >= NTDDI_WIN2K)
	CHAR szTip[128];
	DWORD dwState;
	DWORD dwStateMask;
	CHAR szInfo[256];
	union
	{
		UINT uTimeout;
		UINT uVersion;
	} DUMMYUNIONNAME;
	CHAR szInfoTitle[64];
	DWORD dwInfoFlags;
#endif
#if (NTDDI_VERSION >= NTDDI_WINXP)
	GUID guidItem;
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
	HICON hBalloonIcon;
#endif
} NOTIFYICONDATAA, *PNOTIFYICONDATAA;
typedef struct _NOTIFYICONDATAW
{
	DWORD cbSize;
	HWND hWnd;
	UINT uID;
	UINT uFlags;
	UINT uCallbackMessage;
	HICON hIcon;
#if (NTDDI_VERSION < NTDDI_WIN2K)
	WCHAR szTip[64];
#endif
#if (NTDDI_VERSION >= NTDDI_WIN2K)
	WCHAR szTip[128];
	DWORD dwState;
	DWORD dwStateMask;
	WCHAR szInfo[256];
	union {
		UINT uTimeout;
		UINT uVersion;
	} DUMMYUNIONNAME;
	WCHAR szInfoTitle[64];
	DWORD dwInfoFlags;
#endif
#if (NTDDI_VERSION >= NTDDI_WINXP)
	GUID guidItem;
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
	HICON hBalloonIcon;
#endif
} NOTIFYICONDATAW, *PNOTIFYICONDATAW;
#ifdef UNICODE
typedef NOTIFYICONDATAW NOTIFYICONDATA;
typedef PNOTIFYICONDATAW PNOTIFYICONDATA;
#else
typedef NOTIFYICONDATAA NOTIFYICONDATA;
typedef PNOTIFYICONDATAA PNOTIFYICONDATA;
#endif
#define NOTIFYICONDATAA_V1_SIZE     FIELD_OFFSET(NOTIFYICONDATAA, szTip[64])
#define NOTIFYICONDATAW_V1_SIZE     FIELD_OFFSET(NOTIFYICONDATAW, szTip[64])
#ifdef UNICODE
#define NOTIFYICONDATA_V1_SIZE      NOTIFYICONDATAW_V1_SIZE
#else
#define NOTIFYICONDATA_V1_SIZE      NOTIFYICONDATAA_V1_SIZE
#endif
#define NOTIFYICONDATAA_V2_SIZE     FIELD_OFFSET(NOTIFYICONDATAA, guidItem)
#define NOTIFYICONDATAW_V2_SIZE     FIELD_OFFSET(NOTIFYICONDATAW, guidItem)
#ifdef UNICODE
#define NOTIFYICONDATA_V2_SIZE      NOTIFYICONDATAW_V2_SIZE
#else
#define NOTIFYICONDATA_V2_SIZE      NOTIFYICONDATAA_V2_SIZE
#endif
#define NOTIFYICONDATAA_V3_SIZE     FIELD_OFFSET(NOTIFYICONDATAA, hBalloonIcon)
#define NOTIFYICONDATAW_V3_SIZE     FIELD_OFFSET(NOTIFYICONDATAW, hBalloonIcon)
#ifdef UNICODE
#define NOTIFYICONDATA_V3_SIZE      NOTIFYICONDATAW_V3_SIZE
#else
#define NOTIFYICONDATA_V3_SIZE      NOTIFYICONDATAA_V3_SIZE
#endif
#if (_WIN32_IE >= 0x0500)
#define NIN_SELECT          (WM_USER + 0)
#define NINF_KEY            0x1
#define NIN_KEYSELECT       (NIN_SELECT | NINF_KEY)
#endif
#if (_WIN32_IE >= 0x0501)
#define NIN_BALLOONSHOW         (WM_USER + 2)
#define NIN_BALLOONHIDE         (WM_USER + 3)
#define NIN_BALLOONTIMEOUT      (WM_USER + 4)
#define NIN_BALLOONUSERCLICK    (WM_USER + 5)
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
#define NIN_POPUPOPEN           (WM_USER + 6)
#define NIN_POPUPCLOSE          (WM_USER + 7)
#endif
#if (NTDDI_VERSION >= NTDDI_WIN7)
#endif
#define NIM_ADD         0x00000000
#define NIM_MODIFY      0x00000001
#define NIM_DELETE      0x00000002
#if (_WIN32_IE >= 0x0500)
#define NIM_SETFOCUS    0x00000003
#define NIM_SETVERSION  0x00000004
#define     NOTIFYICON_VERSION      3
#if (NTDDI_VERSION >= NTDDI_VISTA)
#define     NOTIFYICON_VERSION_4    4
#endif
#endif
#define NIF_MESSAGE     0x00000001
#define NIF_ICON        0x00000002
#define NIF_TIP         0x00000004
#if (_WIN32_IE >= 0x0500)
#define NIF_STATE       0x00000008
#define NIF_INFO        0x00000010
#endif
#if (_WIN32_IE >= 0x600)
#define NIF_GUID        0x00000020
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
#define NIF_REALTIME    0x00000040
#define NIF_SHOWTIP     0x00000080
#endif
#if (_WIN32_IE >= 0x0500)
#define NIS_HIDDEN              0x00000001
#define NIS_SHAREDICON          0x00000002
#define NIIF_NONE       0x00000000
#define NIIF_INFO       0x00000001
#define NIIF_WARNING    0x00000002
#define NIIF_ERROR      0x00000003
#if (NTDDI_VERSION >= NTDDI_XPSP2)
#define NIIF_USER       0x00000004
#endif
#define NIIF_ICON_MASK  0x0000000F
#if (_WIN32_IE >= 0x0501)
#define NIIF_NOSOUND    0x00000010
#endif
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
#define NIIF_LARGE_ICON 0x00000020
#endif
#if (NTDDI_VERSION >= NTDDI_WIN7)
#define NIIF_RESPECT_QUIET_TIME 0x00000080
#endif
typedef struct _NOTIFYICONIDENTIFIER
{
	DWORD cbSize;
	HWND hWnd;
	UINT uID;
	GUID guidItem;
} NOTIFYICONIDENTIFIER, *PNOTIFYICONIDENTIFIER;
SHSTDAPI_(BOOL)Shell_NotifyIconA(DWORD dwMessage, PNOTIFYICONDATAA lpData);
SHSTDAPI_(BOOL)Shell_NotifyIconW(DWORD dwMessage, PNOTIFYICONDATAW lpData);
#ifdef UNICODE
#define Shell_NotifyIcon  Shell_NotifyIconW
#else
#define Shell_NotifyIcon  Shell_NotifyIconA
#endif
SHSTDAPI Shell_NotifyIconGetRect(const NOTIFYICONIDENTIFIER *identifier, RECT *iconLocation);
#ifndef SHFILEINFO_DEFINED
#define SHFILEINFO_DEFINED
typedef struct _SHFILEINFOA
{
	HICON hIcon;
	int iIcon;
	DWORD dwAttributes;
	CHAR szDisplayName[MAX_PATH];
	CHAR szTypeName[80];
} SHFILEINFOA;
typedef struct _SHFILEINFOW {
	HICON hIcon;
	int iIcon;
	DWORD dwAttributes;
	WCHAR szDisplayName[MAX_PATH];
	WCHAR szTypeName[80];
} SHFILEINFOW;
#ifdef UNICODE
typedef SHFILEINFOW SHFILEINFO;
#else
typedef SHFILEINFOA SHFILEINFO;
#endif
#endif
#define SHGFI_ICON              0x000000100
#define SHGFI_DISPLAYNAME       0x000000200
#define SHGFI_TYPENAME          0x000000400
#define SHGFI_ATTRIBUTES        0x000000800
#define SHGFI_ICONLOCATION      0x000001000
#define SHGFI_EXETYPE           0x000002000
#define SHGFI_SYSICONINDEX      0x000004000
#define SHGFI_LINKOVERLAY       0x000008000
#define SHGFI_SELECTED          0x000010000
#if (NTDDI_VERSION >= NTDDI_WIN2K)
#define SHGFI_ATTR_SPECIFIED    0x000020000
#endif
#define SHGFI_LARGEICON         0x000000000
#define SHGFI_SMALLICON         0x000000001
#define SHGFI_OPENICON          0x000000002
#define SHGFI_SHELLICONSIZE     0x000000004
#define SHGFI_PIDL              0x000000008
#define SHGFI_USEFILEATTRIBUTES 0x000000010
#if (_WIN32_IE >= 0x0500)
#define SHGFI_ADDOVERLAYS       0x000000020
#define SHGFI_OVERLAYINDEX      0x000000040
#endif
SHSTDAPI_(DWORD_PTR)SHGetFileInfoA(LPCSTR pszPath, DWORD dwFileAttributes, SHFILEINFOA * psfi, UINT cbFileInfo, UINT uFlags);
SHSTDAPI_(DWORD_PTR)SHGetFileInfoW(LPCWSTR pszPath, DWORD dwFileAttributes, SHFILEINFOW * psfi, UINT cbFileInfo, UINT uFlags);
#ifdef UNICODE
#define SHGetFileInfo  SHGetFileInfoW
#else
#define SHGetFileInfo  SHGetFileInfoA
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
typedef struct _SHSTOCKICONINFO
{
	DWORD cbSize;
	HICON hIcon;
	int iSysImageIndex;
	int iIcon;
	WCHAR szPath[MAX_PATH];
} SHSTOCKICONINFO;
#define SHGSI_ICONLOCATION      0
#define SHGSI_ICON              SHGFI_ICON
#define SHGSI_SYSICONINDEX      SHGFI_SYSICONINDEX
#define SHGSI_LINKOVERLAY       SHGFI_LINKOVERLAY
#define SHGSI_SELECTED          SHGFI_SELECTED
#define SHGSI_LARGEICON         SHGFI_LARGEICON
#define SHGSI_SMALLICON         SHGFI_SMALLICON
#define SHGSI_SHELLICONSIZE     SHGFI_SHELLICONSIZE
typedef enum SHSTOCKICONID {
	SIID_DOCNOASSOC = 0,
	SIID_DOCASSOC = 1,
	SIID_APPLICATION = 2,
	SIID_FOLDER = 3,
	SIID_FOLDEROPEN = 4,
	SIID_DRIVE525 = 5,
	SIID_DRIVE35 = 6,
	SIID_DRIVEREMOVE = 7,
	SIID_DRIVEFIXED = 8,
	SIID_DRIVENET = 9,
	SIID_DRIVENETDISABLED = 10,
	SIID_DRIVECD = 11,
	SIID_DRIVERAM = 12,
	SIID_WORLD = 13,
	SIID_SERVER = 15,
	SIID_PRINTER = 16,
	SIID_MYNETWORK = 17,
	SIID_FIND = 22,
	SIID_HELP = 23,
	SIID_SHARE = 28,
	SIID_LINK = 29,
	SIID_SLOWFILE = 30,
	SIID_RECYCLER = 31,
	SIID_RECYCLERFULL = 32,
	SIID_MEDIACDAUDIO = 40,
	SIID_LOCK = 47,
	SIID_AUTOLIST = 49,
	SIID_PRINTERNET = 50,
	SIID_SERVERSHARE = 51,
	SIID_PRINTERFAX = 52,
	SIID_PRINTERFAXNET = 53,
	SIID_PRINTERFILE = 54,
	SIID_STACK = 55,
	SIID_MEDIASVCD = 56,
	SIID_STUFFEDFOLDER = 57,
	SIID_DRIVEUNKNOWN = 58,
	SIID_DRIVEDVD = 59,
	SIID_MEDIADVD = 60,
	SIID_MEDIADVDRAM = 61,
	SIID_MEDIADVDRW = 62,
	SIID_MEDIADVDR = 63,
	SIID_MEDIADVDROM = 64,
	SIID_MEDIACDAUDIOPLUS = 65,
	SIID_MEDIACDRW = 66,
	SIID_MEDIACDR = 67,
	SIID_MEDIACDBURN = 68,
	SIID_MEDIABLANKCD = 69,
	SIID_MEDIACDROM = 70,
	SIID_AUDIOFILES = 71,
	SIID_IMAGEFILES = 72,
	SIID_VIDEOFILES = 73,
	SIID_MIXEDFILES = 74,
	SIID_FOLDERBACK = 75,
	SIID_FOLDERFRONT = 76,
	SIID_SHIELD = 77,
	SIID_WARNING = 78,
	SIID_INFO = 79,
	SIID_ERROR = 80,
	SIID_KEY = 81,
	SIID_SOFTWARE = 82,
	SIID_RENAME = 83,
	SIID_DELETE = 84,
	SIID_MEDIAAUDIODVD = 85,
	SIID_MEDIAMOVIEDVD = 86,
	SIID_MEDIAENHANCEDCD = 87,
	SIID_MEDIAENHANCEDDVD = 88,
	SIID_MEDIAHDDVD = 89,
	SIID_MEDIABLURAY = 90,
	SIID_MEDIAVCD = 91,
	SIID_MEDIADVDPLUSR = 92,
	SIID_MEDIADVDPLUSRW = 93,
	SIID_DESKTOPPC = 94,
	SIID_MOBILEPC = 95,
	SIID_USERS = 96,
	SIID_MEDIASMARTMEDIA = 97,
	SIID_MEDIACOMPACTFLASH = 98,
	SIID_DEVICECELLPHONE = 99,
	SIID_DEVICECAMERA = 100,
	SIID_DEVICEVIDEOCAMERA = 101,
	SIID_DEVICEAUDIOPLAYER = 102,
	SIID_NETWORKCONNECT = 103,
	SIID_INTERNET = 104,
	SIID_ZIPFILE = 105,
	SIID_SETTINGS = 106,
	SIID_DRIVEHDDVD = 132,
	SIID_DRIVEBD = 133,
	SIID_MEDIAHDDVDROM = 134,
	SIID_MEDIAHDDVDR = 135,
	SIID_MEDIAHDDVDRAM = 136,
	SIID_MEDIABDROM = 137,
	SIID_MEDIABDR = 138,
	SIID_MEDIABDRE = 139,
	SIID_CLUSTEREDDRIVE = 140,
	SIID_MAX_ICONS = 174,
} SHSTOCKICONID;
#define SIID_INVALID ((SHSTOCKICONID)-1)
SHSTDAPI SHGetStockIconInfo(SHSTOCKICONID siid, UINT uFlags, SHSTOCKICONINFO *psii);
#endif
#if (NTDDI_VERSION >= NTDDI_WIN2K)
#define SHGetDiskFreeSpace SHGetDiskFreeSpaceEx
SHSTDAPI_(BOOL)SHGetDiskFreeSpaceExA(LPCSTR pszDirectoryName, ULARGE_INTEGER * pulFreeBytesAvailableToCaller, ULARGE_INTEGER * pulTotalNumberOfBytes, ULARGE_INTEGER * pulTotalNumberOfFreeBytes);
SHSTDAPI_(BOOL)SHGetDiskFreeSpaceExW(LPCWSTR pszDirectoryName, ULARGE_INTEGER * pulFreeBytesAvailableToCaller, ULARGE_INTEGER * pulTotalNumberOfBytes, ULARGE_INTEGER * pulTotalNumberOfFreeBytes);
#ifdef UNICODE
#define SHGetDiskFreeSpaceEx  SHGetDiskFreeSpaceExW
#else
#define SHGetDiskFreeSpaceEx  SHGetDiskFreeSpaceExA
#endif
SHSTDAPI_(BOOL)SHGetNewLinkInfoA(LPCSTR pszLinkTo, LPCSTR pszDir, LPSTR pszName, BOOL * pfMustCopy, UINT uFlags);
SHSTDAPI_(BOOL)SHGetNewLinkInfoW(LPCWSTR pszLinkTo, LPCWSTR pszDir, LPWSTR pszName, BOOL * pfMustCopy, UINT uFlags);
#ifdef UNICODE
#define SHGetNewLinkInfo  SHGetNewLinkInfoW
#else
#define SHGetNewLinkInfo  SHGetNewLinkInfoA
#endif
#define SHGNLI_PIDL             0x000000001
#define SHGNLI_PREFIXNAME       0x000000002
#define SHGNLI_NOUNIQUE         0x000000004
#if (_WIN32_IE >= 0x0501)
#define SHGNLI_NOLNK            0x000000008
#endif
#if (_WIN32_IE >= 0x0600)
#define SHGNLI_NOLOCNAME        0x000000010
#endif
#if (NTDDI_VERSION >= NTDDI_WIN7)
#define SHGNLI_USEURLEXT        0x000000020
#endif
#endif

#if (NTDDI_VERSION >= NTDDI_WIN2K)
#define PRINTACTION_OPEN           0
#define PRINTACTION_PROPERTIES     1
#define PRINTACTION_NETINSTALL     2
#define PRINTACTION_NETINSTALLLINK 3
#define PRINTACTION_TESTPAGE       4
#define PRINTACTION_OPENNETPRN     5
#define PRINTACTION_DOCUMENTDEFAULTS 6
#define PRINTACTION_SERVERPROPERTIES 7
SHSTDAPI_(BOOL)SHInvokePrinterCommandA(HWND hwnd, UINT uAction, LPCSTR lpBuf1, LPCSTR lpBuf2, BOOL fModal);
SHSTDAPI_(BOOL)SHInvokePrinterCommandW(HWND hwnd, UINT uAction, LPCWSTR lpBuf1, LPCWSTR lpBuf2, BOOL fModal);
#ifdef UNICODE
#define SHInvokePrinterCommand  SHInvokePrinterCommandW
#else
#define SHInvokePrinterCommand  SHInvokePrinterCommandA
#endif
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
typedef struct _OPEN_PRINTER_PROPS_INFOA
{
	DWORD dwSize;
	LPSTR pszSheetName;
	UINT uSheetIndex;
	DWORD dwFlags;
	BOOL bModal;
} OPEN_PRINTER_PROPS_INFOA, *POPEN_PRINTER_PROPS_INFOA;
typedef struct _OPEN_PRINTER_PROPS_INFOW
{
	DWORD dwSize;
	LPWSTR pszSheetName;
	UINT uSheetIndex;
	DWORD dwFlags;
	BOOL bModal;
} OPEN_PRINTER_PROPS_INFOW, *POPEN_PRINTER_PROPS_INFOW;
#ifdef UNICODE
typedef OPEN_PRINTER_PROPS_INFOW OPEN_PRINTER_PROPS_INFO;
typedef POPEN_PRINTER_PROPS_INFOW POPEN_PRINTER_PROPS_INFO;
#else
typedef OPEN_PRINTER_PROPS_INFOA OPEN_PRINTER_PROPS_INFO;
typedef POPEN_PRINTER_PROPS_INFOA POPEN_PRINTER_PROPS_INFO;
#endif
#define PRINT_PROP_FORCE_NAME   0x01
#endif
#endif
#if (_WIN32_WINNT >= 0x0500) || (_WIN32_WINDOWS >= 0x0500)
SHSTDAPI SHLoadNonloadedIconOverlayIdentifiers(void);
SHSTDAPI SHIsFileAvailableOffline(LPCWSTR pwszPath, LPDWORD pdwStatus);
#define OFFLINE_STATUS_LOCAL        0x0001
#define OFFLINE_STATUS_REMOTE       0x0002
#define OFFLINE_STATUS_INCOMPLETE   0x0004
#endif
#if (NTDDI_VERSION >= NTDDI_WINXP)
SHSTDAPI SHSetLocalizedName(LPCWSTR pszPath, LPCWSTR pszResModule, int idsRes);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
SHSTDAPI SHRemoveLocalizedName(LPCWSTR pszPath);
SHSTDAPI SHGetLocalizedName(LPCWSTR pszPath, LPWSTR pszResModule, UINT cch, int *pidsRes);
#endif
#if !defined(_SHLWAPI_)
#define LWSTDAPIV_(type)  extern DECLSPEC_IMPORT type STDAPIVCALLTYPE
#else
#define LWSTDAPIV_(type)  STDAPIV_(type)
#endif
LWSTDAPIV_(int) ShellMessageBoxA(HINSTANCE hAppInst, HWND hWnd, LPCSTR lpcText, LPCSTR lpcTitle, UINT fuStyle, ...);
LWSTDAPIV_(int) ShellMessageBoxW(HINSTANCE hAppInst, HWND hWnd, LPCWSTR lpcText, LPCWSTR lpcTitle, UINT fuStyle, ...);
#ifdef UNICODE
#define ShellMessageBox  ShellMessageBoxW
#else
#define ShellMessageBox  ShellMessageBoxA
#endif
#if (NTDDI_VERSION >= NTDDI_WIN2K)
SHSTDAPI_(BOOL)IsLFNDriveA(LPCSTR pszPath);
SHSTDAPI_(BOOL)IsLFNDriveW(LPCWSTR pszPath);
#ifdef UNICODE
#define IsLFNDrive  IsLFNDriveW
#else
#define IsLFNDrive  IsLFNDriveA
#endif
#endif
#if         _WIN32_IE >= 0x0600
STDAPI SHEnumerateUnreadMailAccountsA(HKEY hKeyUser, DWORD dwIndex, LPSTR pszMailAddress, int cchMailAddress);
STDAPI SHEnumerateUnreadMailAccountsW(HKEY hKeyUser, DWORD dwIndex, LPWSTR pszMailAddress, int cchMailAddress);
#ifdef UNICODE
#define SHEnumerateUnreadMailAccounts  SHEnumerateUnreadMailAccountsW
#else
#define SHEnumerateUnreadMailAccounts  SHEnumerateUnreadMailAccountsA
#endif
STDAPI SHGetUnreadMailCountA(HKEY hKeyUser, LPCSTR pszMailAddress, DWORD *pdwCount, FILETIME *pFileTime, LPSTR pszShellExecuteCommand, int cchShellExecuteCommand);
STDAPI SHGetUnreadMailCountW(HKEY hKeyUser, LPCWSTR pszMailAddress, DWORD *pdwCount, FILETIME *pFileTime, LPWSTR pszShellExecuteCommand, int cchShellExecuteCommand);
#ifdef UNICODE
#define SHGetUnreadMailCount  SHGetUnreadMailCountW
#else
#define SHGetUnreadMailCount  SHGetUnreadMailCountA
#endif
STDAPI SHSetUnreadMailCountA(LPCSTR pszMailAddress, DWORD dwCount, LPCSTR pszShellExecuteCommand);
STDAPI SHSetUnreadMailCountW(LPCWSTR pszMailAddress, DWORD dwCount, LPCWSTR pszShellExecuteCommand);
#ifdef UNICODE
#define SHSetUnreadMailCount  SHSetUnreadMailCountW
#else
#define SHSetUnreadMailCount  SHSetUnreadMailCountA
#endif
#endif
#if (_WIN32_IE >= 0x0601)
STDAPI_(BOOL)SHTestTokenMembership(HANDLE hToken, ULONG ulRID);
#endif
#if         _WIN32_IE >= 0x0600
#if (NTDDI_VERSION >= NTDDI_WINXP)
SHSTDAPI SHGetImageList(int iImageList, REFIID riid, void **ppvObj);
#endif
#if (NTDDI_VERSION >= NTDDI_WINXP)
#define SHIL_LARGE          0
#define SHIL_SMALL          1
#define SHIL_EXTRALARGE     2
#define SHIL_SYSSMALL       3
#if (NTDDI_VERSION >= NTDDI_VISTA)
#define SHIL_JUMBO          4
#define SHIL_LAST           SHIL_JUMBO
#else
#define SHIL_LAST           SHIL_SYSSMALL
#endif
#endif
typedef HRESULT(STDMETHODCALLTYPE *PFNCANSHAREFOLDERW) (LPCWSTR pszPath);
typedef HRESULT(STDMETHODCALLTYPE *PFNSHOWSHAREFOLDERUIW) (HWND hwndParent, LPCWSTR pszPath);
#endif
#if !defined(_WIN64)
#include <poppack.h>
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
#define WC_NETADDRESS L"msctls_netaddress"
SHSTDAPI_(BOOL)InitNetworkAddressControl(void);
#define NCM_GETADDRESS (WM_USER+1)
#define NetAddr_GetAddress(hwnd,pv) (HRESULT)SNDMSG(hwnd,NCM_GETADDRESS,0,(LPARAM)pv)
typedef struct tagNC_ADDRESS
{
	struct NET_ADDRESS_INFO_ *pAddrInfo;
	USHORT PortNumber;
	BYTE PrefixLength;
} NC_ADDRESS, *PNC_ADDRESS;
#define NCM_SETALLOWTYPE (WM_USER+2)
#define NetAddr_SetAllowType(hwnd,addrMask) (HRESULT)SNDMSG(hwnd,NCM_SETALLOWTYPE,(WPARAM)addrMask,0)
#define NCM_GETALLOWTYPE (WM_USER+3)
#define NetAddr_GetAllowType(hwnd) (DWORD)SNDMSG(hwnd,NCM_GETALLOWTYPE,0,0)
#define NCM_DISPLAYERRORTIP (WM_USER+4)
#define NetAddr_DisplayErrorTip(hwnd) (HRESULT)SNDMSG(hwnd,NCM_DISPLAYERRORTIP,0,0)
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
STDAPI SHGetDriveMedia(LPCWSTR pszDrive, DWORD *pdwMediaContent);
#endif
#if (NTDDI_VERSION >= NTDDI_VISTA)
#endif
#endif
