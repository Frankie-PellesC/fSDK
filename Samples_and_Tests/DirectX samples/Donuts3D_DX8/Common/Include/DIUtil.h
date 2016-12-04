/*+@@file@@----------------------------------------------------------------*//*!
 \file		DIUtil.h
 \par Description 
            DirectInput support using action mapping
 \par  Status: 
 \par Project: 
 \date		Created  on Sun Dec  4 19:27:45 2016
 \date		Modified on Sun Dec  4 19:27:45 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#ifndef DIUTIL_H
#define DIUTIL_H
#include <dinput.h>

typedef struct
{
    LPDIRECTINPUTDEVICE8 pdidDevice;
    LPVOID               pParam;
} DeviceInfo;
typedef HRESULT (CALLBACK *LPDIMANAGERCALLBACK)(DeviceInfo* pDeviceInfo, const DIDEVICEINSTANCE* pdidi, LPVOID);

//-----------------------------------------------------------------------------
// Name: class CInputDeviceManager
// Desc: Input device manager using DX8 action mapping
//-----------------------------------------------------------------------------
typedef struct CInputDeviceManager
{
    BOOL                    m_bCleanupCOM;
    HWND                    m_hWnd;
    TCHAR*                  m_strUserName;

    LPDIRECTINPUT8          m_pDI;
    DeviceInfo*             m_pDevices;
    DWORD                   m_dwMaxDevices;
    DWORD                   m_dwNumDevices;
    DIACTIONFORMAT          m_diaf;

    LPDIMANAGERCALLBACK  m_AddDeviceCallback;
    LPVOID               m_AddDeviceCallbackParam;
} CInputDeviceManager;

// Device control
HRESULT CInputDeviceManagerAddDevice(CInputDeviceManager *this, const DIDEVICEINSTANCE *pdidi, LPDIRECTINPUTDEVICE8 pdidDevice);
HRESULT CInputDeviceManagerGetDevices(CInputDeviceManager *this, DeviceInfo **ppDeviceInfo, DWORD *pdwNumDevices);
HRESULT CInputDeviceManagerConfigureDevices(CInputDeviceManager *this, HWND hWnd, IUnknown *pSurface, VOID *pCallback, DWORD dwFlags, LPVOID pvCBParam);
VOID CInputDeviceManagerUnacquireDevices(CInputDeviceManager *this);
VOID CInputDeviceManagerSetFocus(CInputDeviceManager *this, HWND hWnd);

// Construction
HRESULT CInputDeviceManagerSetActionFormat(CInputDeviceManager *this, DIACTIONFORMAT *diaf, BOOL bReenumerate);
HRESULT CInputDeviceManagerCreate(CInputDeviceManager *this, HWND hWnd, TCHAR *strUserName, DIACTIONFORMAT *diaf, LPDIMANAGERCALLBACK AddDeviceCallback, LPVOID pCallbackParam);

CInputDeviceManager *CInputDeviceManagerNew(void);
void CInputDeviceManagerDelete(CInputDeviceManager *);

#endif
