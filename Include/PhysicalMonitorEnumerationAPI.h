/*+@@file@@----------------------------------------------------------------*//*!
 \file		PhysicalMonitorEnumerationAPI.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jun 19 22:49:05 2016
 \date		Modified on Sun Jun 19 22:49:05 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/
#ifndef PhysicalMonitorEnumerationAPI_h
#define PhysicalMonitorEnumerationAPI_h
#if __POCC__ >= 500
#pragma once
#endif
#include <d3d9.h>
#pragma pack( push, 1  )
typedef BOOL _BOOL;
#define PHYSICAL_MONITOR_DESCRIPTION_SIZE	128
typedef struct _PHYSICAL_MONITOR
{
	HANDLE hPhysicalMonitor;
	WCHAR szPhysicalMonitorDescription[PHYSICAL_MONITOR_DESCRIPTION_SIZE];
}
PHYSICAL_MONITOR, *LPPHYSICAL_MONITOR;
_BOOL WINAPI GetNumberOfPhysicalMonitorsFromHMONITOR(HMONITOR hMonitor, LPDWORD pdwNumberOfPhysicalMonitors);
HRESULT WINAPI GetNumberOfPhysicalMonitorsFromIDirect3DDevice9(IDirect3DDevice9 *pDirect3DDevice9, LPDWORD pdwNumberOfPhysicalMonitors);
_BOOL WINAPI GetPhysicalMonitorsFromHMONITOR(HMONITOR hMonitor, DWORD dwPhysicalMonitorArraySize, LPPHYSICAL_MONITOR pPhysicalMonitorArray);
HRESULT WINAPI GetPhysicalMonitorsFromIDirect3DDevice9(IDirect3DDevice9 *pDirect3DDevice9, DWORD dwPhysicalMonitorArraySize, LPPHYSICAL_MONITOR pPhysicalMonitorArray);
_BOOL WINAPI DestroyPhysicalMonitor(HANDLE hMonitor);
_BOOL WINAPI DestroyPhysicalMonitors(DWORD dwPhysicalMonitorArraySize, LPPHYSICAL_MONITOR pPhysicalMonitorArray);
#pragma pack( pop )

#endif


