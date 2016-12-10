/*+@@file@@----------------------------------------------------------------*//*!
 \file		winmain.c
 \par Description 
            Video capture to file Demo
 \par  Status: 
 \par Project: 
 \date		Created  on Sat Dec 10 16:34:41 2016
 \date		Modified on Sat Dec 10 16:34:41 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/

#include <windows.h>
#include <windowsx.h>
#include <mfapi.h>
#include <mfidl.h>
#include <mfreadwrite.h>
#include <assert.h>
#include <shlwapi.h>
#include <Dbt.h>
#include <ks.h>
#include <ksmedia.h>

const UINT WM_APP_PREVIEW_ERROR = WM_APP + 1;    // wparam = HRESULT

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		SafeRelease
 \date		Created  on Sat Dec 10 16:35:08 2016
 \date		Modified on Sat Dec 10 16:35:08 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
void SafeRelease(void **pp)
{
    if (*pp)
    {
        ((IUnknown *)(*pp))->lpVtbl->Release(*pp);
        *pp = NULL;
    }
}


#include "capture.h"
#include "resource.h"

// Include the v6 common controls in the manifest
#pragma comment(linker,							\
    "\"/manifestdependency:type='Win32' "		\
    "name='Microsoft.Windows.Common-Controls' "	\
    "version='6.0.0.0' "						\
    "processorArchitecture='*' "				\
    "publicKeyToken='6595b64144ccf1df' "		\
    "language='*'\"")

typedef enum
{
    FileContainer_MP4 = IDC_CAPTURE_MP4,
    FileContainer_WMV = IDC_CAPTURE_WMV
} FileContainer;
    
//DeviceList  g_devices;
UINT32        cDevices  = 0;
IMFActivate **ppDevices = NULL;

Capture     *g_pCapture   = NULL;
HDEVNOTIFY    g_hdevnotify = NULL;

const UINT32 TARGET_BIT_RATE = 240 * 1000;

INT_PTR CALLBACK DialogProc(HWND hDlg, UINT msg, WPARAM wParam, LPARAM lParam);

void    OnInitDialog(HWND hDlg); 
void    OnCloseDialog(void);

void    UpdateUI(HWND hDlg);
void    StopCapture(HWND hDlg);
void    BeginCapture(HWND hDlg);
void    OnSelectEncodingType(HWND hDlg, FileContainer file);

HRESULT GetSelectedDevice(HWND hDlg, IMFActivate **ppActivate);
HRESULT UpdateDeviceList(HWND hDlg);
void    OnDeviceChange(HWND hwnd, WPARAM reason, DEV_BROADCAST_HDR *pHdr);

void    NotifyError(HWND hwnd, const WCHAR *sErrorMessage, HRESULT hrErr);
void    EnableDialogControl(HWND hDlg, int nIDDlgItem, BOOL bEnable); 


INT WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR lpCmdLine, INT nCmdShow)
{
	(void)HeapSetInformation(NULL, HeapEnableTerminationOnCorruption, NULL, 0);

	INT_PTR ret = DialogBox(hInstance,
		MAKEINTRESOURCE(IDD_DIALOG1),
		NULL,
		DialogProc);

	if (ret == 0 || ret == -1)
	{
		MessageBox(NULL, L"Could not create dialog", L"Error", MB_OK | MB_ICONERROR);
	}

	return 0;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		DialogProc
 \details	Dialog procedure
 \date		Created  on Sat Dec 10 16:35:52 2016
 \date		Modified on Sat Dec 10 16:35:52 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
INT_PTR CALLBACK DialogProc(HWND hDlg, UINT msg, WPARAM wParam, LPARAM lParam)
{
	switch (msg)
	{
		case WM_INITDIALOG:
			OnInitDialog(hDlg);
			break;

		case WM_DEVICECHANGE:
			OnDeviceChange(hDlg, wParam, (PDEV_BROADCAST_HDR)lParam);
			return TRUE;

		case WM_COMMAND:
			switch (LOWORD(wParam))
			{
				case IDC_CAPTURE_MP4:	// Fall through
				case IDC_CAPTURE_WMV:
					OnSelectEncodingType(hDlg, (FileContainer) (LOWORD(wParam)));
					return TRUE;

				case IDC_CAPTURE:
					if (g_pCapture && IsCapturing(g_pCapture))
					{
						StopCapture(hDlg);
					}
					else
					{
						BeginCapture(hDlg);
					}
					return TRUE;

				case IDCANCEL:
					OnCloseDialog();
					EndDialog(hDlg, IDCANCEL);
					return TRUE;

			}
			break;
	}
	return FALSE;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		OnInitDialog
 \details	Handler for WM_INITDIALOG message.
 \date		Created  on Sat Dec 10 16:36:08 2016
 \date		Modified on Sat Dec 10 16:36:08 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
void OnInitDialog(HWND hDlg)
{
	HRESULT hr = S_OK;

	HWND hEdit = GetDlgItem(hDlg, IDC_OUTPUT_FILE);

	SetWindowText(hEdit, TEXT("capture.mp4"));

	CheckRadioButton(hDlg, IDC_CAPTURE_MP4, IDC_CAPTURE_WMV, IDC_CAPTURE_MP4);

	// Initialize the COM library
	hr = CoInitializeEx(NULL, COINIT_APARTMENTTHREADED | COINIT_DISABLE_OLE1DDE);

	// Initialize Media Foundation
	if (SUCCEEDED(hr))
	{
		hr = MFStartup(MF_VERSION, MFSTARTUP_FULL);
	}

	// Register for device notifications
	if (SUCCEEDED(hr))
	{
		DEV_BROADCAST_DEVICEINTERFACE di = { 0 };

		di.dbcc_size = sizeof(di);
		di.dbcc_devicetype = DBT_DEVTYP_DEVICEINTERFACE;
		di.dbcc_classguid = KSCATEGORY_CAPTURE;

		g_hdevnotify = RegisterDeviceNotification(hDlg, &di, DEVICE_NOTIFY_WINDOW_HANDLE);

		if (g_hdevnotify == NULL)
		{
			hr = HRESULT_FROM_WIN32(GetLastError());
		}
	}

	// Enumerate the video capture devices.
	if (SUCCEEDED(hr))
	{
		hr = UpdateDeviceList(hDlg);
	}

	if (SUCCEEDED(hr))
	{
		UpdateUI(hDlg);

		if (cDevices == 0)
		{
			MessageBox(hDlg, TEXT("Could not find any video capture devices."), TEXT("MFCaptureToFile"), MB_OK);
		}
	}
	else
	{
		OnCloseDialog();
		EndDialog(hDlg, 0);
	}
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		OnCloseDialog
 \details	Frees resources before closing the dialog.
 \date		Created  on Sat Dec 10 16:37:57 2016
 \date		Modified on Sat Dec 10 16:37:57 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
void OnCloseDialog(void)
{
	if (g_pCapture)
	{
		EndCaptureSession(g_pCapture);
	}

	SafeRelease((void **)&g_pCapture);

	ClearDeviceList();

	if (g_hdevnotify)
	{
		UnregisterDeviceNotification(g_hdevnotify);
	}

	MFShutdown();
	CoUninitialize();
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		BeginCapture
 \details	Starts video capture.
 \date		Created  on Sat Dec 10 16:38:14 2016
 \date		Modified on Sat Dec 10 16:38:14 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
void BeginCapture(HWND hDlg)
{
	EncodingParameters params;

	if (BST_CHECKED == IsDlgButtonChecked(hDlg, IDC_CAPTURE_WMV))
	{
		params.subtype = MFVideoFormat_WMV3;
	}
	else
	{
		params.subtype = MFVideoFormat_H264;
	}

	params.bitrate = TARGET_BIT_RATE;

	HRESULT hr = S_OK;
	WCHAR pszFile[MAX_PATH] = { 0 };
	HWND hEdit = GetDlgItem(hDlg, IDC_OUTPUT_FILE);

	IMFActivate *pActivate = NULL;

	// Get the name of the target file.

	if (0 == GetWindowText(hEdit, pszFile, MAX_PATH))
	{
		hr = HRESULT_FROM_WIN32(GetLastError());
	}

	// Create the media source for the capture device.

	if (SUCCEEDED(hr))
	{
		hr = GetSelectedDevice(hDlg, &pActivate);
	}

	// Start capturing.

	if (SUCCEEDED(hr))
	{
		hr = CaptureCreateInstance(hDlg, &g_pCapture);
	}

	if (SUCCEEDED(hr))
	{
		hr = StartCapture(g_pCapture, pActivate, pszFile, &params);
	}

	if (SUCCEEDED(hr))
	{
		UpdateUI(hDlg);
	}

	SafeRelease((void **)&pActivate);

	if (FAILED(hr))
	{
		NotifyError(hDlg, L"Error starting capture.", hr);
	}
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		StopCapture
 \details	Stops video capture.
 \date		Created  on Sat Dec 10 16:38:30 2016
 \date		Modified on Sat Dec 10 16:38:30 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
void StopCapture(HWND hDlg)
{
	HRESULT hr = S_OK;

	hr = EndCaptureSession(g_pCapture);

	SafeRelease((void **)&g_pCapture);

	UpdateDeviceList(hDlg);

	// NOTE: Updating the device list releases the existing IMFActivate 
	// pointers. This ensures that the current instance of the video capture 
	// source is released.

	UpdateUI(hDlg);

	if (FAILED(hr))
	{
		NotifyError(hDlg, L"Error stopping capture. File might be corrupt.", hr);
	}
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		GetSelectedDevice
 \details	Create a media source for the video capture device selected by 
            the user.
 \date		Created  on Sat Dec 10 16:38:46 2016
 \date		Modified on Sat Dec 10 16:38:46 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT GetSelectedDevice(HWND hDlg, IMFActivate **ppActivate)
{
	HWND hDeviceList = GetDlgItem(hDlg, IDC_DEVICE_LIST);

	// First get the index of the selected item in the combo box.
	int iListIndex = ComboBox_GetCurSel(hDeviceList);

	if (iListIndex == CB_ERR)
	{
		return HRESULT_FROM_WIN32(GetLastError());
	}

	// Now find the index of the device within the device list.
	//
	// This index is stored as item data in the combo box, so that 
	// the order of the combo box items does not need to match the
	// order of the device list.

	LRESULT iDeviceIndex = ComboBox_GetItemData(hDeviceList, iListIndex);

	if (iDeviceIndex == CB_ERR)
	{
		return HRESULT_FROM_WIN32(GetLastError());
	}

	// Now create the media source.

	return GetDevice((UINT32)iDeviceIndex, ppActivate);
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		UpdateDeviceList
 \details	Enumerates the video capture devices and populates the list of 
            device names in the dialog UI.
 \date		Created  on Sat Dec 10 16:39:15 2016
 \date		Modified on Sat Dec 10 16:39:15 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT UpdateDeviceList(HWND hDlg)
{
	HRESULT hr = S_OK;

	WCHAR *szFriendlyName = NULL;

	HWND hCombobox = GetDlgItem(hDlg, IDC_DEVICE_LIST);

	ComboBox_ResetContent(hCombobox);

	ClearDeviceList();

	hr = EnumerateDevices();

	if (FAILED(hr))
	{
		goto done;
	}

	for (UINT32 iDevice = 0; iDevice < cDevices; iDevice++)
	{
		// Get the friendly name of the device.

		hr = GetDeviceName(iDevice, &szFriendlyName);

		if (FAILED(hr))
		{
			goto done;
		}

		// Add the string to the combo-box. This message returns the index in the list.

		int iListIndex = ComboBox_AddString(hCombobox, szFriendlyName);
		if (iListIndex == CB_ERR || iListIndex == CB_ERRSPACE)
		{
			hr = E_FAIL;
			goto done;
		}

		// The list might be sorted, so the list index is not always the same as the
		// array index. Therefore, set the array index as item data.

		int result = ComboBox_SetItemData(hCombobox, iListIndex, iDevice);

		if (result == CB_ERR)
		{
			hr = E_FAIL;
			goto done;
		}

		CoTaskMemFree(szFriendlyName);
		szFriendlyName = NULL;
	}

	if (cDevices > 0)
	{
		// Select the first item.
		ComboBox_SetCurSel(hCombobox, 0);
	}

  done:
	return hr;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		OnSelectEncodingType
 \details	Called when the user toggles between file-format types.
 \date		Created  on Sat Dec 10 16:39:32 2016
 \date		Modified on Sat Dec 10 16:39:32 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
void OnSelectEncodingType(HWND hDlg, FileContainer file)
{
	WCHAR pszFile[MAX_PATH] = { 0 };

	HWND hEdit = GetDlgItem(hDlg, IDC_OUTPUT_FILE);

	GetWindowText(hEdit, pszFile, MAX_PATH);

	switch (file)
	{
		case FileContainer_MP4:

			PathRenameExtension(pszFile, L".mp4");
			break;

		case FileContainer_WMV:
			PathRenameExtension(pszFile, L".wmv");
			break;

		default:
			assert(FALSE);
			break;
	}

	SetWindowText(hEdit, pszFile);
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		UpdateUI
 \details	Updates the dialog UI for the current state.
 \date		Created  on Sat Dec 10 16:39:46 2016
 \date		Modified on Sat Dec 10 16:39:46 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
void UpdateUI(HWND hDlg)
{
	BOOL bEnable = (cDevices > 0);	// Are there any capture devices?
	BOOL bCapturing = (g_pCapture != NULL);	// Is video capture in progress now?

	HWND hButton = GetDlgItem(hDlg, IDC_CAPTURE);

	if (bCapturing)
	{
		SetWindowText(hButton, L"Stop Capture");
	}
	else
	{
		SetWindowText(hButton, L"Start Capture");
	}

	EnableDialogControl(hDlg, IDC_CAPTURE, bCapturing || bEnable);

	EnableDialogControl(hDlg, IDC_DEVICE_LIST, !bCapturing && bEnable);

	// The following cannot be changed while capture is in progress,
	// but are OK to change when there are no capture devices.

	EnableDialogControl(hDlg, IDC_CAPTURE_MP4, !bCapturing);
	EnableDialogControl(hDlg, IDC_CAPTURE_WMV, !bCapturing);
	EnableDialogControl(hDlg, IDC_OUTPUT_FILE, !bCapturing);
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		OnDeviceChange
 \details	Handles WM_DEVICECHANGE messages.
 \date		Created  on Sat Dec 10 16:40:01 2016
 \date		Modified on Sat Dec 10 16:40:01 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
void OnDeviceChange(HWND hDlg, WPARAM reason, DEV_BROADCAST_HDR *pHdr)
{
	if (reason == DBT_DEVNODES_CHANGED || reason == DBT_DEVICEARRIVAL)
	{
		// Check for added/removed devices, regardless of whether
		// the application is capturing video at this time.

		UpdateDeviceList(hDlg);
		UpdateUI(hDlg);
	}

	// Now check if the current video capture device was lost.

	if (pHdr == NULL)
	{
		return;
	}
	if (pHdr->dbch_devicetype != DBT_DEVTYP_DEVICEINTERFACE)
	{
		return;
	}

	HRESULT hr = S_OK;
	BOOL bDeviceLost = FALSE;

	if (g_pCapture && IsCapturing(g_pCapture))
	{
		hr = CheckDeviceLost(g_pCapture, pHdr, &bDeviceLost);

		if (FAILED(hr) || bDeviceLost)
		{
			StopCapture(hDlg);

			MessageBox(hDlg, L"The capture device was removed or lost.", L"Lost Device", MB_OK);
		}
	}
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		NotifyError
 \date		Created  on Sat Dec 10 16:40:10 2016
 \date		Modified on Sat Dec 10 16:40:10 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
void NotifyError(HWND hwnd, const WCHAR *sErrorMessage, HRESULT hrErr)
{
	const size_t MESSAGE_LEN = 512;
	WCHAR message[MESSAGE_LEN];

	swprintf(message, MESSAGE_LEN, L"%ls (HRESULT = 0x%X)", sErrorMessage, hrErr);
	MessageBox(hwnd, message, NULL, MB_OK | MB_ICONERROR);
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		EnableDialogControl
 \date		Created  on Sat Dec 10 16:40:22 2016
 \date		Modified on Sat Dec 10 16:40:22 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
void EnableDialogControl(HWND hDlg, int nIDDlgItem, BOOL bEnable)
{
	HWND hwnd = GetDlgItem(hDlg, nIDDlgItem);

	if (!bEnable && hwnd == GetFocus())
	{
		// When disabling a control that has focus, set the 
		// focus to the next control.

		SendMessage(GetParent(hwnd), WM_NEXTDLGCTL, 0, FALSE);
	}
	EnableWindow(hwnd, bEnable);
}
