// D3DApp.h
#ifndef D3DAPP_H
#define D3DAPP_H
 
#include "dolphin.h"

void    D3DApp_Cleanup3DEnvironment(void);
DWORD   D3DApp_Create( HWND hWnd, char * sTitle, long width, long height, BOOL bMenu);
HRESULT D3DApp_InvalidateDeviceObjects(void);
HRESULT D3DApp_DeleteDeviceObjects(void);
HRESULT D3DApp_Resize3DEnvironment(void);
HRESULT D3DApp_DisplayErrorMsg(long hr, long dwType, long num);
HRESULT D3DApp_ConfirmDevice(D3DCAPS8 * pCaps, DWORD dwBehavior, int iFormat);
BOOL    D3DApp_FindDepthStencilFormat( UINT iAdapter, D3DDEVTYPE DeviceType, D3DFORMAT TargetFormat, D3DFORMAT* pDepthStencilFormat );
HRESULT D3DApp_BuildDeviceList(void);
HRESULT D3DApp_Initialize3DEnvironment(void);
void    D3DApp_Pause(BOOL bPause);
HRESULT D3DApp_UserSelectNewDevice(void);
HRESULT D3DApp_ToggleFullscreen(void);
HRESULT D3DApp_Render3DEnvironment(void);
#endif //D3DAPP_H
