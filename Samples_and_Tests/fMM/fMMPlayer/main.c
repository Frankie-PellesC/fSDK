/*+@@file@@----------------------------------------------------------------*//*!
 \file		main.c
 \par Description 
			Plays multimedia files using DirectShow multimedia library.
 \par  Status: 
			
 \par Project: 
			DirectShow multimedia library
 \date		Created  on Mon Dec 29 01:31:12 2014
 \date		Modified on Mon Dec 29 01:31:12 2014
 \author	Frankie
\*//*-@@file@@----------------------------------------------------------------*/
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <windowsx.h>
#include <commctrl.h>
#include <commdlg.h>
#include <tchar.h>
#include <stdio.h>
#include <strmif.h>
#include "resource.h"
#include "MM.h"
#include <evcode.h>

#define DELAY			500
#define TIMERNUM		1
#define TIMEELAPSEMAX	100000
#define TIMEELAPSEMIN	0
#define VOLUMEMAX		1000
#define VOLUMEMIN		0
#define VOLUMEINIT		700

/*
 *	Prototypes
 */
static INT_PTR CALLBACK ProcMainDlg(HWND, UINT, WPARAM, LPARAM);
HBITMAP FmlCreateAlphaImage(HDC hDC, int width, int height, DWORD Level);

/*
 *	Global variables
 */
static HANDLE ghInstance = NULL;
static HWND hwnd = NULL;
static HMMEDIA hMm = NULL;
static HBITMAP hbmLogo = NULL;

#define WM_MM (WM_APP + 1)

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		AppendText
 \date		Created  on Sun May 12 22:08:26 2013
 \date		Modified on Sun May 12 22:08:26 2013
\*//*-@@fnc@@----------------------------------------------------------------*/
void AppendText(HWND hWnd, LPCTSTR str)
{
	LONG nTxtLen;                              // lenght of text message
	
	/* move caret at the end of text */
	nTxtLen = SendMessage(hWnd, WM_GETTEXTLENGTH, 0, 0);
	SetFocus(hWnd);
	SendMessage(hWnd, EM_SETSEL, (WPARAM)nTxtLen, (LPARAM)nTxtLen);
		
	/* add the text line */
	SendMessage(hWnd, EM_REPLACESEL, (WPARAM)FALSE, (LPARAM)str);
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		FilterEnumCallback
 \date		Created  on Mon Dec 29 21:30:53 2014
 \date		Modified on Mon Dec 29 21:30:53 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL FilterEnumCallback(LPVOID p, LPVOID pArgs)
{
	MM_LPFILTERENUMDATA pFilterInfo = p;
	MM_PropPages(pFilterInfo->pFilter, (HWND)pArgs);

#ifdef UNICODE
	AppendText(GetDlgItem((HWND)pArgs, IDE_ENUM), FilterInfo->achName);
	AppendText(GetDlgItem((HWND)pArgs, IDE_ENUM), L"\r\n");
#else
	char szName[MAX_FILTER_NAME + 4];
	snprintf(szName, MAX_FILTER_NAME + 3, "%ls\r\n", pFilterInfo->FilterInfo.achName);
	AppendText(GetDlgItem((HWND)pArgs, IDE_ENUM), szName);
#endif

	return TRUE;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		SysDevsFilterEnumCallback
 \date		Created  on Tue Dec 30 18:07:09 2014
 \date		Modified on Tue Dec 30 18:07:09 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL SysDevsFilterEnumCallback(LPVOID p, LPVOID pArgs)
{
	LPCWSTR lpStr = p;

#ifdef UNICODE
	AppendText(GetDlgItem((HWND)pArgs, IDE_ENUM), lpStr);
	AppendText(GetDlgItem((HWND)pArgs, IDE_ENUM), L"\r\n");
#else
	char szName[MAX_FILTER_NAME + 4];
	snprintf(szName, MAX_FILTER_NAME + 3, "%ls\r\n", lpStr);
	AppendText(GetDlgItem((HWND)pArgs, IDE_ENUM), szName);
#endif

	return FALSE;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		SeekMM
 \date		Created  on Sat Dec 27 22:08:45 2014
 \date		Modified on Sat Dec 27 22:08:45 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
void SeekMM(HWND hwnd)
{
	LONGLONG duration;

	if (!MM_GetDuration(hMm, &duration))
		return;

	LONGLONG pos =  SendMessage(GetDlgItem(hwnd, IDC_SLIDER_TIME_ELAPSED), TBM_GETPOS, 0, 0) *
													duration / TIMEELAPSEMAX;
	if (!MM_SetPositions(hMm, &pos, &duration, TRUE, 0))
		MessageBox(hwnd, "Cannot seek file!", "Error", MB_OK | MB_ICONERROR);

	return;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		HandleMouseWheel
 \date		Created  on Mon Dec 29 22:07:16 2014
 \date		Modified on Mon Dec 29 22:07:16 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
void HandleMouseWheel(HWND hwnd, WPARAM wParam, LPARAM lParam)
{
	if (!MM_IsMmHandle(hMm))
		return;

	WORD  fwKeys = GET_KEYSTATE_WPARAM(wParam);
	int zDelta   = GET_WHEEL_DELTA_WPARAM(wParam);

	if (fwKeys & MK_CONTROL)
		zDelta *= 2;
	DWORD CursorPos = SendMessage(GetDlgItem(hwnd, IDC_SLIDER_TIME_ELAPSED), TBM_GETPOS, 0, 0);
	SendMessage(GetDlgItem(hwnd, IDC_SLIDER_TIME_ELAPSED), TBM_SETPOS, TRUE, CursorPos + zDelta);
	SeekMM(hwnd);
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		WinMain
 \date		Created  on Fri Dec 26 23:46:13 2014
 \date		Modified on Fri Dec 26 23:46:13 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
int PASCAL WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpszCmdLine, int nCmdShow)
{
	INITCOMMONCONTROLSEX icc;
	WNDCLASSEX wcx;

	ghInstance = hInstance;

	icc.dwSize = sizeof(icc);
	icc.dwICC = ICC_WIN95_CLASSES;
	InitCommonControlsEx(&icc);

	/* Get system dialog information */
	wcx.cbSize = sizeof(wcx);
	if (!GetClassInfoEx(NULL, MAKEINTRESOURCE(32770), &wcx))
		return 0;

	/* Add our own stuff */
	wcx.hInstance = hInstance;
	wcx.hIcon = LoadIcon(hInstance, MAKEINTRESOURCE(IDR_MAINFRAME));
	wcx.lpszClassName = _T("PlayMMClass");
	if (!RegisterClassEx(&wcx))
		return 0;

	if (!MM_Initialize())
	{
		MessageBox(NULL, "Cannot initialize Multimedia library!", "Error", MB_OK | MB_ICONERROR);
		return -1;
	}

	hbmLogo   = LoadImage(ghInstance, MAKEINTRESOURCE(IDBMP_LOGO), IMAGE_BITMAP, 0, 0, LR_CREATEDIBSECTION);
	HWND hDlg = CreateDialog(hInstance, MAKEINTRESOURCE(IDD_PLAYVIDEO), NULL, (DLGPROC)ProcMainDlg);

	MSG msg;
	/*
	 *	Pump messages until we are done
	 */
	for (;;)
	{
		BOOL fRet = GetMessage(&msg, NULL, 0, 0);

		if (fRet == -1)  /* Error */
		{
			/*
			 *	TODO: handle the error from GetMessage()
			 */
			__debugbreak();
			return -1;
		}
		else if (fRet == 0)  /* WM_QUIT */
		{
			break;
		}
		else  /* Not error or WM_QUIT */
		{
			if (msg.message == WM_MOUSEWHEEL)
				HandleMouseWheel(hDlg, msg.wParam, msg.lParam);
			else
				if (!IsDialogMessage(hDlg, &msg))
				{
					  TranslateMessage(&msg);
					  DispatchMessage(&msg);
				}
		}
	}

	MM_Uninitialize();

	return 0;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		UpDateButtons
 \date		Created  on Sat Dec 27 22:17:43 2014
 \date		Modified on Sat Dec 27 22:17:43 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
void UpDateButtons(HWND hwnd)
{
	DWORD state;

	if (!MM_GetRunningState(hMm, &state))
	{
		EnableWindow(GetDlgItem(hwnd, IDC_BTN_PLAY),  FALSE);
		EnableWindow(GetDlgItem(hwnd, IDC_BTN_PAUSE), FALSE);
		EnableWindow(GetDlgItem(hwnd, IDC_BTN_STOP),  FALSE);
		EnableWindow(GetDlgItem(hwnd, IDB_SHOWLOGO),  FALSE);
	}
	else
	{
		EnableWindow(GetDlgItem(hwnd, IDC_BTN_PLAY),  state & MMPLAYING ? FALSE : TRUE );
		EnableWindow(GetDlgItem(hwnd, IDC_BTN_PAUSE), state & MMPLAYING ? TRUE  : FALSE);
		EnableWindow(GetDlgItem(hwnd, IDC_BTN_STOP),  state & MMPLAYING ? TRUE  : FALSE);
		EnableWindow(GetDlgItem(hwnd, IDB_SHOWLOGO),  TRUE);
	}
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		SetVideoWindow
 \date		Created  on Sun Dec 28 23:05:18 2014
 \date		Modified on Sun Dec 28 23:05:18 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL SetVideoWindow(HWND hwnd)
{
	if( FAILED(MM_SetVideoWindow(hMm, GetDlgItem(hwnd, ID_VIDEO))))
	{
		MessageBox(hwnd, "Cannot Set video window!", "Error", MB_OK | MB_ICONERROR);
		return FALSE;
	}
	if (!MM_SetVideoArea(hMm, NULL))
	{
		MessageBox(hwnd, "Cannot Set video rectangle!", "Error", MB_OK | MB_ICONERROR);
		return FALSE;
	}

	return TRUE;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		GetFileName
 \date		Created  on Sat Dec 27 22:01:48 2014
 \date		Modified on Sat Dec 27 22:01:48 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL GetFileName(HWND hWnd, LPTSTR lpstrFile, size_t FileSize)
{
	if (!lpstrFile || !FileSize)
		return FALSE;

	*lpstrFile = '\0';

	OPENFILENAME ofn = {0};
	ofn.hwndOwner	 = hWnd;
	ofn.lStructSize = sizeof(OPENFILENAME);
	ofn.lpstrFile	 = lpstrFile;
	ofn.nMaxFile	 = FileSize -1;
	ofn.lpstrFilter = "MM files\0*.mp3;*.wma;*.avi;*.mkv\0All Files\0*.*\0\0";
	ofn.lpstrTitle  = "Open Media file";
	ofn.Flags		 = OFN_OVERWRITEPROMPT | OFN_HIDEREADONLY | OFN_FILEMUSTEXIST;
	ofn.lpstrDefExt = "avi";

	return GetOpenFileName(&ofn);
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		GetVolume
 \date		Created  on Sat Dec 27 21:43:18 2014
 \date		Modified on Sat Dec 27 21:43:18 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
int GetVolume(HWND hwnd)
{
	double vol = SendMessage(GetDlgItem(hwnd, IDC_SLIDER_VOLUME), TBM_GETPOS, 0, 0) * 5;
	vol = vol - 5000.0;
	if (vol<=-5000.0)
		vol = -10000;
	return (int)vol;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CaptureEnumCallback
 \date		Created  on Tue Dec 30 20:56:34 2014
 \date		Modified on Tue Dec 30 20:56:34 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
static BOOL CaptureEnumCallback(LPVOID p, LPVOID pArgs)
{
	LPCSTR lpStr = p;

	AppendText(GetDlgItem((HWND)pArgs, IDE_ENUM), lpStr);

	return TRUE;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		ProcEnumCapture
 \date		Created  on Tue Dec 30 20:51:27 2014
 \date		Modified on Tue Dec 30 20:51:27 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
static INT_PTR CALLBACK ProcEnumCapture(HWND hwndDlg, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch (uMsg)
	{
		case WM_INITDIALOG:
			SetWindowText(hwndDlg, "Capture devices");
			MM_EnumCapture(CaptureEnumCallback, hwndDlg);
			return TRUE;

		case WM_COMMAND:
			if (GET_WM_COMMAND_ID(wParam, lParam) == IDOK)
				EndDialog(hwndDlg, 0);
	}

	return FALSE;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		OnInitDialog
 \date		Created  on Sat Dec 27 22:20:20 2014
 \date		Modified on Sat Dec 27 22:20:20 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL OnInitDialog(HWND hwnd)
{
	SendMessage(hwnd, WM_SETICON, ICON_BIG, (LPARAM)LoadIcon(ghInstance, MAKEINTRESOURCE(IDR_MAINFRAME)));

	SendMessage(GetDlgItem(hwnd, IDC_SLIDER_VOLUME), TBM_SETRANGEMIN, (WPARAM)TRUE, (LPARAM)VOLUMEMIN); 
	SendMessage(GetDlgItem(hwnd, IDC_SLIDER_VOLUME), TBM_SETRANGEMAX, (WPARAM)TRUE, (LPARAM)VOLUMEMAX); 
	SendMessage(GetDlgItem(hwnd, IDC_SLIDER_VOLUME), TBM_SETPOS, (WPARAM)TRUE, (LPARAM)VOLUMEINIT);

	SendMessage(GetDlgItem(hwnd, IDC_SLIDER_TIME_ELAPSED), TBM_SETRANGEMIN,
										(WPARAM)TRUE, (LPARAM)TIMEELAPSEMIN); 
	SendMessage(GetDlgItem(hwnd, IDC_SLIDER_TIME_ELAPSED), TBM_SETRANGEMAX,
										(WPARAM)TRUE, (LPARAM)TIMEELAPSEMAX); 
	SendMessage(GetDlgItem(hwnd, IDC_SLIDER_TIME_ELAPSED), TBM_SETPOS,
										(WPARAM)TRUE, (LPARAM)TIMEELAPSEMIN);

	UpDateButtons(hwnd);

	CheckDlgButton(hwnd, IDB_SHOWLOGO, BST_CHECKED);

	return TRUE;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		UpdateTimeDisplay
 \date		Created  on Sat Dec 27 22:20:24 2014
 \date		Modified on Sat Dec 27 22:20:24 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
void UpdateTimeDisplay(HWND hwnd)
{
	char sDuration[256];

	LONGLONG duration;

	if (MM_GetDuration(hMm, &duration))
		duration /= 10000000;
	else
		duration = 0;

	LONGLONG curPos = MM_GetCurrentPosition(hMm);

	LONGLONG timeElapsedSec = curPos/10000000;
	sprintf(sDuration, "%lld:%02lld:%02lld/%lld:%02lld:%02lld",
				timeElapsedSec/3600,  (timeElapsedSec%3600)/60,  (timeElapsedSec%3600)%60,
										duration/3600, (duration%3600)/60, (duration%3600)%60);
	SetWindowText(GetDlgItem(hwnd, IDC_STATIC_DURATION), sDuration);
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		ExecTimedControls
 \date		Created  on Sat Dec 27 22:20:50 2014
 \date		Modified on Sat Dec 27 22:20:50 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
void ExecTimedControls(HWND hwnd)
{
	UpdateTimeDisplay(hwnd);

	LONGLONG curPos = MM_GetCurrentPosition(hMm);

	LONGLONG Duration;
	if (MM_GetDuration(hMm, &Duration))
	{
		LONGLONG pos = (curPos * TIMEELAPSEMAX)/Duration;
		SendMessage(GetDlgItem(hwnd, IDC_SLIDER_TIME_ELAPSED), TBM_SETPOS, (WPARAM)TRUE, (LPARAM)(int)(pos));
	}

	DWORD state;
	if (MM_GetRunningState(hMm, &state))
	{
		char *pMessage;
		switch(state)
		{
			case MMSTOPPED:
				pMessage = "Stopped";
				break;
			case MMPLAYING:
				pMessage = "Playing";
				break;
			case MMPAUSED:
				pMessage = "Paused";
				break;
			default:
				pMessage = "Waiting...";
				break;
		}
		SetWindowText(GetDlgItem(hwnd, IDC_STATIC_STATUS), pMessage);
	}
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		ProcEnumFiltersDlg
 \date		Created  on Tue Dec 30 00:38:48 2014
 \date		Modified on Tue Dec 30 00:38:48 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
static INT_PTR CALLBACK ProcEnumFiltersDlg(HWND hwndDlg, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch (uMsg)
	{
		case WM_INITDIALOG:
			SetWindowText(hwndDlg, "Running Filters");
			MM_EnumFilters (hMm, FilterEnumCallback, hwndDlg);

			return TRUE;

		case WM_COMMAND:
			if (GET_WM_COMMAND_ID(wParam, lParam) == IDOK)
				EndDialog(hwndDlg, 1);
	}

	return FALSE;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		ProcEnumSysDevsDlg
 \date		Created  on Tue Dec 30 22:31:10 2014
 \date		Modified on Tue Dec 30 22:31:10 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
static INT_PTR CALLBACK ProcEnumSysDevsDlg(HWND hwndDlg, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch (uMsg)
	{
		case WM_INITDIALOG:
			SetWindowText(hwndDlg, "System Devices");
			MM_EnumSysDevices(hMm, SysDevsFilterEnumCallback, hwndDlg);

			return TRUE;

		case WM_COMMAND:
			if (GET_WM_COMMAND_ID(wParam, lParam) == IDOK)
				EndDialog(hwndDlg, 0);
	}

	return FALSE;
}

typedef struct
{
	PFILTER pFilter;
	char szName[256];
} MenuEntry;

MenuEntry *pme = NULL;
int cMenuEntry = 0;

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		MenuEnumCallback
 \date		Created  on Mon Mar  2 11:49:12 2015
 \date		Modified on Mon Mar  2 11:49:12 2015
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL MenuEnumCallback(LPVOID p, LPVOID pArgs)
{
	MM_LPFILTERENUMDATA pFilterInfo = p;
	ISpecifyPropertyPages *pProp = MM_GetPropPage(pFilterInfo->pFilter);
	if (!pProp)
		return TRUE;
	else
		pProp->lpVtbl->Release(pProp);

	cMenuEntry++;
	pme = realloc(pme, sizeof(MenuEntry)*cMenuEntry);
	pme[cMenuEntry-1].pFilter = pFilterInfo->pFilter;
	snprintf(pme[cMenuEntry-1].szName, 255, "%ls", pFilterInfo->FilterInfo.achName);
	AppendMenu((HMENU)pArgs, MF_ENABLED	| MF_STRING, cMenuEntry+40000, pme[cMenuEntry-1].szName);

	return TRUE;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		Settings
 \date		Created  on Mon Mar  2 11:49:39 2015
 \date		Modified on Mon Mar  2 11:49:39 2015
\*//*-@@fnc@@----------------------------------------------------------------*/
void Settings(HWND hwnd)
{
	HMENU hMenu = GetMenu(hwnd);
	DeleteMenu(hMenu, 2, MF_BYPOSITION);
	if (pme)
	{
		free(pme);
		cMenuEntry = 0;
	}
	pme = malloc(0);

	HMENU hSubMenu = CreateMenu();
	AppendMenu(hMenu, MF_ENABLED | MF_STRING | MF_POPUP, (UINT)hSubMenu, "&Settings");
	DrawMenuBar(hwnd);

	MM_EnumFilters (hMm, MenuEnumCallback, hSubMenu);
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		BrowseFile
 \date		Created  on Sat Dec 27 22:05:55 2014
 \date		Modified on Sat Dec 27 22:05:55 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
void BrowseFile(HWND hwnd)
{
	char Filename[MAX_PATH];
	if (!GetFileName(hwnd, Filename, MAX_PATH-1))
		return;

	char *p = strrchr(Filename, '\\');
	if (p)
		p++;
	else
		p = Filename;
	SetWindowText(hwnd, p);

	if (hMm)
		MM_Destroy(hMm);

	hMm = MM_Create();
	if(!hMm)
	{
		MessageBox(hwnd, "Cannot Init Multimedia library!", "Error", MB_OK | MB_ICONERROR);
		PostQuitMessage(MM_GetLastError(NULL));
		return;
	}

	MM_SetNotifyWindow(hMm, hwnd, WM_MM, 0);

	if (!SetVideoWindow(hwnd))
		PostQuitMessage(MM_GetLastError(NULL));

	if (!MM_Load(hMm, Filename))
	{
		MessageBox(hwnd, "Cannot load multimedia file!", "Error", MB_OK | MB_ICONERROR);
		return;
	}

	SetTimer(hwnd, TIMERNUM, DELAY, NULL);

	UpDateButtons(hwnd);

	MM_SetVolume(hMm, GetVolume(hwnd));

	//Start and stop video to fill the window
	MM_Play(hMm);
	MM_Pause(hMm);

	Settings(hwnd);
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		BlendImage
 \date		Created  on Sun Dec 28 22:06:52 2014
 \date		Modified on Sun Dec 28 22:06:52 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
void BlendImage(BOOL flag)
{
	MM_BlendApplicationImage(hMm,
			flag ? 
				LoadImage(ghInstance, MAKEINTRESOURCE(IDBMP_LOGO), IMAGE_BITMAP, 0, 0, LR_CREATEDIBSECTION)
				: FALSE, NULL, MMFULLSCREEN, 0.3);
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		HandleStop
 \date		Created  on Sun Mar  1 15:44:48 2015
 \date		Modified on Sun Mar  1 15:44:48 2015
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL HandleStop(HWND hwnd)
{
	if (MM_Stop(hMm))
	{
		UpDateButtons(hwnd);
		LONGLONG Zero = 0;
		LONGLONG duration;
		if (MM_GetDuration(hMm, &duration))
			MM_SetPositions(hMm, &Zero, &duration, TRUE, 0);
		return TRUE;
	}

	MessageBox(hwnd, "Cannot stop file!", "Error", MB_OK | MB_ICONERROR);
	return FALSE;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		HandlePause
 \date		Created  on Sun Mar  1 15:50:34 2015
 \date		Modified on Sun Mar  1 15:50:34 2015
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL HandlePause(HWND hwnd)
{
	if (MM_Pause(hMm))
	{
		UpDateButtons(hwnd);
		return TRUE;
	}

	MessageBox(hwnd, "Cannot pause file!", "Error", MB_OK | MB_ICONERROR);
	return FALSE;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		HandlePlay
 \date		Created  on Sun Mar  1 15:53:06 2015
 \date		Modified on Sun Mar  1 15:53:06 2015
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL HandlePlay(HWND hwnd)
{
	if (!MM_GetFileState(hMm))
	{
		MessageBox(hwnd, "Select a file to play first!", "Info", MB_OK | MB_ICONEXCLAMATION);
		return FALSE;
	}

	if (MM_Play(hMm))
	{
		UpDateButtons(hwnd);
		if (BST_CHECKED == IsDlgButtonChecked(hwnd, IDB_SHOWLOGO))
			BlendImage(TRUE);
		return TRUE;
	}

	MessageBox(hwnd, "Cannot play file!", "Error", MB_OK | MB_ICONERROR);

	return FALSE;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		HandleLogo
 \date		Created  on Sun Mar  1 15:58:09 2015
 \date		Modified on Sun Mar  1 15:58:09 2015
\*//*-@@fnc@@----------------------------------------------------------------*/
void HandleLogo(HWND hwnd)
{
	BlendImage(BST_CHECKED == IsDlgButtonChecked(hwnd, IDB_SHOWLOGO) ? TRUE : FALSE);
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		HandleCurrFileFilter
 \date		Created  on Sun Mar  1 15:58:14 2015
 \date		Modified on Sun Mar  1 15:58:14 2015
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL HandleCurrFileFilter(HWND hwnd)
{
	if (!MM_GetFileState(hMm))
	{
		MessageBox(hwnd, "No file loaded!", "Error", MB_OK | MB_ICONERROR);
		return FALSE;
	}

	return DialogBox(ghInstance, MAKEINTRESOURCE(IDD_ENUM), hwnd, ProcEnumFiltersDlg);
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		HandleGraphEvent
 \date		Created  on Sun Mar  1 15:43:25 2015
 \date		Modified on Sun Mar  1 15:43:25 2015
\*//*-@@fnc@@----------------------------------------------------------------*/
void HandleGraphEvent(HWND hwnd)
{
    // Get all the events
    long evCode;
    LONG_PTR param1, param2;

    while (MM_GetEvent(hMm, &evCode, &param1, &param2, 0))
    {
        MM_FreeEventParams(hMm, evCode, param1, param2);

		/*
		char msg[2048];
		sprintf(msg, "WM_MM message: %#X", evCode);
        MessageBox(hwnd, msg, "info", MB_ICONINFORMATION|MB_OK);
		*/

        switch (evCode)
        {
        case EC_USERABORT:
        case EC_ERRORABORT:
				MessageBox(hwnd, "Rendering aborted!", "Error", MB_ICONERROR | MB_OK);
        case EC_COMPLETE:
			HandleStop(hwnd);
            return;
        }
    } 
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		HandleHscroll
 \date		Created  on Sun Mar  1 16:11:09 2015
 \date		Modified on Sun Mar  1 16:11:09 2015
\*//*-@@fnc@@----------------------------------------------------------------*/
void HandleHscroll(HWND hwnd, LPARAM lParam)
{
	if ((HWND)lParam == GetDlgItem(hwnd, IDC_SLIDER_VOLUME))
		MM_SetVolume(hMm, GetVolume(hwnd));
	else
		if ((HWND)lParam == GetDlgItem(hwnd, IDC_SLIDER_TIME_ELAPSED))
			SeekMM(hwnd);
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		ProcMainDlg
 \date		Created  on Fri Dec 26 23:50:00 2014
 \date		Modified on Fri Dec 26 23:50:00 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
static INT_PTR CALLBACK ProcMainDlg(HWND hwndDlg, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch (uMsg)
	{
		case WM_INITDIALOG:
			hwnd = hwndDlg;
			OnInitDialog(hwndDlg);
			return TRUE;

		case WM_MM:
			HandleGraphEvent(hwndDlg);
			break;

		case WM_COMMAND:
			switch (GET_WM_COMMAND_ID(wParam, lParam))
			{
				case IDM_OPEN:
				case IDC_BTN_BROWSE:
					BrowseFile(hwndDlg);
					break;

				case IDC_BTN_PLAY:
					HandlePlay(hwndDlg);
					break;

				case IDC_BTN_PAUSE:
					HandlePause(hwndDlg);
					break;

				case IDC_BTN_STOP:
					HandleStop(hwndDlg);
					break;

				case IDB_SHOWLOGO:
					HandleLogo(hwndDlg);
					break;

				case IDM_LISTCAPTURE:
					DialogBox(ghInstance, MAKEINTRESOURCE(IDD_ENUM), hwnd, ProcEnumCapture);
					break;

				case IDM_LISTSYSDEVS:
					DialogBox(ghInstance, MAKEINTRESOURCE(IDD_ENUM), hwnd, ProcEnumSysDevsDlg);
					break;

				case IDM_CURRFILEFILTERS:
					HandleCurrFileFilter(hwndDlg);
					break;

				case IDM_PROP:
				{
					MM_PropPagesMixRenderer(hMm, hwndDlg);
					break;
				}

				case IDOK:
					PostQuitMessage(0);
					return TRUE;

				default:
					if (GET_WM_COMMAND_ID(wParam, lParam)>40000 && GET_WM_COMMAND_ID(wParam, lParam)<(cMenuEntry+40000+1))
					{
						MM_PropPages(pme[GET_WM_COMMAND_ID(wParam, lParam)-40000-1].pFilter, hwndDlg);
					}
			}
			break;

		case WM_TIMER:
			ExecTimedControls(hwndDlg);
			break;

		case WM_HSCROLL:
			HandleHscroll(hwndDlg, lParam);
			break;

		case WM_CLOSE:
			PostQuitMessage(0);
			return TRUE;
	}

	return FALSE;
}
