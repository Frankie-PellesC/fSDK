/*+@@file@@----------------------------------------------------------------*//*!
 \file		diutil.c
 \par Description 
            DirectInput framework class using semantic mapping.
            Feel free to use this class as a starting point for adding 
            extra functionality.
 \par  Status: 
 \par Project: 
 \date		Created  on Sun Dec  4 18:54:36 2016
 \date		Modified on Sun Dec  4 18:54:36 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#define STRICT
#define DIRECTINPUT_VERSION 0x0800
#include <basetsd.h>
#include <tchar.h>
#include <stdio.h>
#include "DIUtil.h"
#include "DXUtil.h"

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CInputDeviceManagerNew
 \date		Created  on Sun Dec  4 18:55:05 2016
 \date		Modified on Sun Dec  4 18:55:05 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
CInputDeviceManager *CInputDeviceManagerNew(void)
{
	CInputDeviceManager *this = malloc(sizeof(CInputDeviceManager));
	if (!this)
		return NULL;

    HRESULT hr = CoInitialize(NULL);
    this->m_bCleanupCOM = SUCCEEDED(hr);

    this->m_dwNumDevices = 0;
    this->m_dwMaxDevices = 10;
    this->m_pDI          = NULL;

    // Allocate DeviceInfo structs
    this->m_pDevices = NULL;
    this->m_pDevices = (DeviceInfo*) realloc( this->m_pDevices, this->m_dwMaxDevices*sizeof(DeviceInfo) );
    ZeroMemory( this->m_pDevices, this->m_dwMaxDevices*sizeof(DeviceInfo) );

	return this;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CInputDeviceManagerDelete
 \date		Created  on Sun Dec  4 18:55:13 2016
 \date		Modified on Sun Dec  4 18:55:13 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
void CInputDeviceManagerDelete(CInputDeviceManager *this)
{
    if( this->m_pDevices )
    {
        // Release() all devices
        for( DWORD i=0; i<this->m_dwNumDevices; i++ )
        {
            this->m_pDevices[i].pdidDevice->lpVtbl->Unacquire(this->m_pDevices[i].pdidDevice);
            this->m_pDevices[i].pdidDevice->lpVtbl->Release(this->m_pDevices[i].pdidDevice);
            this->m_pDevices[i].pdidDevice = NULL;
        }

        free( this->m_pDevices );
    }

    // Release() base object
    SAFE_RELEASE( this->m_pDI );

    if( this->m_bCleanupCOM )
        CoUninitialize();

	free(this);
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CInputDeviceManagerGetDevices
 \details	Get the DeviceInfo array and number of devices
 \date		Created  on Sun Dec  4 18:55:26 2016
 \date		Modified on Sun Dec  4 18:55:26 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CInputDeviceManagerGetDevices(CInputDeviceManager *this, DeviceInfo **ppDeviceInfo, DWORD *pdwCount)
{
	if (NULL == ppDeviceInfo || NULL == pdwCount)
		return E_INVALIDARG;

	(*ppDeviceInfo) = this->m_pDevices;
	(*pdwCount)     = this->m_dwNumDevices;

	return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CInputDeviceManagerAddDevice
 \details	Add the provided device to the list and perform initialization
 \date		Created  on Sun Dec  4 18:55:39 2016
 \date		Modified on Sun Dec  4 18:55:39 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CInputDeviceManagerAddDevice(CInputDeviceManager *this, const DIDEVICEINSTANCE *pdidi, const LPDIRECTINPUTDEVICE8 pdidDevice)
{
	HRESULT hr;
	//DWORD dwDeviceType = pdidi->dwDevType;

	pdidDevice->lpVtbl->Unacquire(pdidDevice);

	// Set the device's coop level
	hr = pdidDevice->lpVtbl->SetCooperativeLevel(pdidDevice, this->m_hWnd, DISCL_NONEXCLUSIVE | DISCL_FOREGROUND);
	if (FAILED(hr))
		return hr;

	// Add new DeviceInfo struct to list, and resize array if needed
	this->m_dwNumDevices++;
	if (this->m_dwNumDevices > this->m_dwMaxDevices)
	{
		this->m_dwMaxDevices += 10;
		this->m_pDevices = (DeviceInfo *)realloc(this->m_pDevices, this->m_dwMaxDevices * sizeof(DeviceInfo));
		ZeroMemory(this->m_pDevices + this->m_dwMaxDevices - 10, 10 * sizeof(DeviceInfo));
	}

	DWORD dwCurrentDevice = this->m_dwNumDevices - 1;
	this->m_pDevices[dwCurrentDevice].pdidDevice = pdidDevice;
	this->m_pDevices[dwCurrentDevice].pdidDevice->lpVtbl->AddRef(this->m_pDevices[dwCurrentDevice].pdidDevice);

	// Callback into the app so it can adjust the device and set
	// the this->m_pDevices[dwCurrentDevice].pParam field with a device state struct
	if (this->m_AddDeviceCallback)
	{
		hr = this->m_AddDeviceCallback(&this->m_pDevices[dwCurrentDevice], pdidi, this->m_AddDeviceCallbackParam);
		if (FAILED(hr))
			return hr;
	}

	// Build the action map
	hr = this->m_pDevices[dwCurrentDevice].pdidDevice->lpVtbl->BuildActionMap(this->m_pDevices[dwCurrentDevice].pdidDevice, 
																							&this->m_diaf, this->m_strUserName, 0);
	if (FAILED(hr))
		return hr;

	// Set the action map for the current device
	hr = this->m_pDevices[dwCurrentDevice].pdidDevice->lpVtbl->SetActionMap(this->m_pDevices[dwCurrentDevice].pdidDevice,
																							&this->m_diaf, this->m_strUserName, 0);
	if (FAILED(hr))
		return hr;

	// Continue enumerating suitable devices
	return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		EnumSuitableDevicesCB
 \details	Callback function for device enumeration. Adds all devices 
            which met the search criteria
 \date		Created  on Sun Dec  4 18:55:58 2016
 \date		Modified on Sun Dec  4 18:55:58 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL CALLBACK EnumSuitableDevicesCB(LPCDIDEVICEINSTANCE pdidi, LPDIRECTINPUTDEVICE8 pdidDevice, DWORD dwFlags, DWORD dwDeviceRemaining, VOID *pContext)
{
	// Add the device to the device manager's internal list
	CInputDeviceManagerAddDevice(((CInputDeviceManager *)pContext), pdidi, pdidDevice);

	// Continue enumerating suitable devices
	return DIENUM_CONTINUE;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CInputDeviceManagerSetActionFormat
 \details	Set the action format to the provided DIACTIONFORMAT structure, 
            and destroy and recreate device list if flagged
 \date		Created  on Sun Dec  4 18:56:25 2016
 \date		Modified on Sun Dec  4 18:56:25 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CInputDeviceManagerSetActionFormat(CInputDeviceManager *this, DIACTIONFORMAT *diaf, BOOL bReenumerate)
{
	HRESULT hr = S_OK;

	// Store the new action format
	this->m_diaf = *diaf;

	// Only destroy and re-enumerate devices if the caller explicitly wants to. The 
	// device list may be used within a loop, and kicking off an enumeration while 
	// the device array is in use would cause problems.
	if (bReenumerate)
	{
		// Cleanup any previously enumerated devices
		for (DWORD i = 0; i < this->m_dwNumDevices; i++)
		{
			this->m_pDevices[i].pdidDevice->lpVtbl->Unacquire(this->m_pDevices[i].pdidDevice);
			this->m_pDevices[i].pdidDevice->lpVtbl->Release(this->m_pDevices[i].pdidDevice);
			this->m_pDevices[i].pdidDevice = NULL;
		}
		this->m_dwNumDevices = 0;

		// Enumerate suitable DirectInput devices
		hr = this->m_pDI->lpVtbl->EnumDevicesBySemantics(this->m_pDI, this->m_strUserName, &this->m_diaf, EnumSuitableDevicesCB, this, 0L);
		if (FAILED(hr))
			return hr;
	}
	else	// Just apply the new maps.
	{
		// Devices must be unacquired to have a new action map set.
		CInputDeviceManagerUnacquireDevices(this);

		// Apply the new action map to the current devices.
		for (DWORD i = 0; i < this->m_dwNumDevices; i++)
		{
			hr = this->m_pDevices[i].pdidDevice->lpVtbl->BuildActionMap(this->m_pDevices[i].pdidDevice, &this->m_diaf, this->m_strUserName, 0);
			if (FAILED(hr))
				return hr;

			hr = this->m_pDevices[i].pdidDevice->lpVtbl->SetActionMap(this->m_pDevices[i].pdidDevice, &this->m_diaf, this->m_strUserName, 0);
			if (FAILED(hr))
				return hr;
		}
	}

	if (FAILED(hr))
		return hr;

	return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CInputDeviceManagerCreate
 \details	Create DirectInput object and perform initialization
 \date		Created  on Sun Dec  4 18:56:37 2016
 \date		Modified on Sun Dec  4 18:56:37 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CInputDeviceManagerCreate(CInputDeviceManager *this, HWND hWnd, TCHAR *strUserName, DIACTIONFORMAT *diaf, LPDIMANAGERCALLBACK AddDeviceCallback, LPVOID pCallbackParam)
{
	HRESULT hr;

	// Store data
	this->m_hWnd                   = hWnd;
	this->m_strUserName            = strUserName;
	this->m_AddDeviceCallback      = AddDeviceCallback;
	this->m_AddDeviceCallbackParam = pCallbackParam;

	// Create the base DirectInput object
	hr = DirectInput8Create(GetModuleHandle(NULL), DIRECTINPUT_VERSION, &IID_IDirectInput8, (VOID **) & this->m_pDI, NULL);
	if (FAILED(hr))
		return hr;

	hr = CInputDeviceManagerSetActionFormat(this, diaf, TRUE);
	if (FAILED(hr))
		return hr;

	return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CInputDeviceManagerConfigureDevices
 \details	Pause input and display the device configuration UI
 \date		Created  on Sun Dec  4 18:56:48 2016
 \date		Modified on Sun Dec  4 18:56:48 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CInputDeviceManagerConfigureDevices(CInputDeviceManager *this, HWND hWnd, IUnknown *pSurface, VOID *ConfigureDevicesCB, DWORD dwFlags, LPVOID pvCBParam)
{
	HRESULT hr;

	// Initialize all the colors here
	DICOLORSET dics;
	ZeroMemory(&dics, sizeof(DICOLORSET));
	dics.dwSize = sizeof(DICOLORSET);

	// Fill in all the params
	DICONFIGUREDEVICESPARAMS dicdp;
	ZeroMemory(&dicdp, sizeof(dicdp));
	dicdp.dwSize = sizeof(dicdp);
	dicdp.dwcFormats = 1;
	dicdp.lprgFormats = &this->m_diaf;
	dicdp.hwnd = hWnd;
	dicdp.lpUnkDDSTarget = pSurface;

	if (this->m_strUserName)
	{
		dicdp.dwcUsers = 1;
		dicdp.lptszUserNames = this->m_strUserName;
	}

	// Unacquire the devices so that mouse doesn't control the game while in control panel
	CInputDeviceManagerUnacquireDevices(this);

	hr = this->m_pDI->lpVtbl->ConfigureDevices(this->m_pDI, (LPDICONFIGUREDEVICESCALLBACK)ConfigureDevicesCB, &dicdp, dwFlags, pvCBParam);
	if (FAILED(hr))
		return hr;

	if (dwFlags & DICD_EDIT)
	{
		// Re-set up the devices
		hr = CInputDeviceManagerSetActionFormat(this, &this->m_diaf, TRUE);
		if (FAILED(hr))
			return hr;
	}

	return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CInputDeviceManagerUnacquireDevices
 \date		Created  on Sun Dec  4 18:58:20 2016
 \date		Modified on Sun Dec  4 18:58:20 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
VOID CInputDeviceManagerUnacquireDevices(CInputDeviceManager *this)
{
	for (DWORD i = 0; i < this->m_dwNumDevices; i++)
		this->m_pDevices[i].pdidDevice->lpVtbl->Unacquire(this->m_pDevices[i].pdidDevice);
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CInputDeviceManagerSetFocus
 \details	Sets the DirectInput focus to a new HWND
 \date		Created  on Sun Dec  4 18:57:58 2016
 \date		Modified on Sun Dec  4 18:57:58 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
VOID CInputDeviceManagerSetFocus(CInputDeviceManager *this, HWND hWnd)
{
	this->m_hWnd = hWnd;

	CInputDeviceManagerUnacquireDevices(this);

	for (DWORD i = 0; i < this->m_dwNumDevices; i++)
	{
		// Set the device's coop level
		this->m_pDevices[i].pdidDevice->lpVtbl->SetCooperativeLevel(this->m_pDevices[i].pdidDevice,
															this->m_hWnd, DISCL_NONEXCLUSIVE | DISCL_FOREGROUND);
	}
}
