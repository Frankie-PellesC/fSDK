/*+@@file@@----------------------------------------------------------------*//*!
 \file		FaxRoute.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 10 17:23:31 2016
 \date		Modified on Sun Jul 10 17:23:31 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _FAXROUTE_
#define _FAXROUTE_
#include <commctrl.h>
#if __POCC__ >= 500
#pragma once
#endif
#define MS_FAXROUTE_PRINTING_GUID               TEXT("{aec1b37c-9af2-11d0-abf7-00c04fd91a4e}")
#define MS_FAXROUTE_FOLDER_GUID                 TEXT("{92041a90-9af2-11d0-abf7-00c04fd91a4e}")
#define MS_FAXROUTE_EMAIL_GUID                  TEXT("{6bbf7bfe-9af2-11d0-abf7-00c04fd91a4e}")
typedef LONG (WINAPI *PFAXROUTEADDFILE)(DWORD JobId, LPCWSTR FileName, GUID *Guid);
typedef LONG (WINAPI *PFAXROUTEDELETEFILE)(DWORD JobId, LPCWSTR FileName);
typedef BOOL (WINAPI *PFAXROUTEGETFILE)(DWORD JobId, DWORD Index, LPWSTR FileNameBuffer, LPDWORD RequiredSize);
typedef BOOL (WINAPI *PFAXROUTEENUMFILE)(DWORD JobId, GUID *GuidOwner, GUID *GuidCaller, LPCWSTR FileName, PVOID Context);
typedef BOOL (WINAPI *PFAXROUTEENUMFILES)(DWORD JobId, GUID *Guid,PFAXROUTEENUMFILE FileEnumerator, PVOID Context);
typedef BOOL (WINAPI *PFAXROUTEMODIFYROUTINGDATA)(DWORD JobId, LPCWSTR RoutingGuid, LPBYTE RoutingData, DWORD RoutingDataSize );
typedef struct _FAX_ROUTE_CALLBACKROUTINES
{
    DWORD                       SizeOfStruct;
    PFAXROUTEADDFILE            FaxRouteAddFile;
    PFAXROUTEDELETEFILE         FaxRouteDeleteFile;
    PFAXROUTEGETFILE            FaxRouteGetFile;
    PFAXROUTEENUMFILES          FaxRouteEnumFiles;
    PFAXROUTEMODIFYROUTINGDATA  FaxRouteModifyRoutingData;
} FAX_ROUTE_CALLBACKROUTINES, *PFAX_ROUTE_CALLBACKROUTINES;
typedef struct _FAX_ROUTE
{
    DWORD           SizeOfStruct;
    DWORD           JobId;
    DWORDLONG       ElapsedTime;
    DWORDLONG       ReceiveTime;
    DWORD           PageCount;
    LPCWSTR         Csid;
    LPCWSTR         Tsid;
    LPCWSTR         CallerId;
    LPCWSTR         RoutingInfo;
    LPCWSTR         ReceiverName;
    LPCWSTR         ReceiverNumber;
    LPCWSTR         DeviceName;
    DWORD           DeviceId;
    LPBYTE          RoutingInfoData;
    DWORD           RoutingInfoDataSize;
} FAX_ROUTE, *PFAX_ROUTE;
enum FAXROUTE_ENABLE
{
    QUERY_STATUS = -1,
    STATUS_DISABLE = 0,
    STATUS_ENABLE = 1
};
BOOL WINAPI FaxRouteInitialize(HANDLE HeapHandle, PFAX_ROUTE_CALLBACKROUTINES FaxRouteCallbackRoutines);
BOOL WINAPI FaxRouteDeviceEnable(LPCWSTR RoutingGuid, DWORD DeviceId, LONG Enabled);
BOOL WINAPI FaxRouteDeviceChangeNotification(DWORD DeviceId, BOOL NewDevice);
BOOL WINAPI FaxRouteGetRoutingInfo(LPCWSTR RoutingGuid, DWORD DeviceId, LPBYTE RoutingInfo, LPDWORD RoutingInfoSize);
BOOL WINAPI FaxRouteSetRoutingInfo(LPCWSTR RoutingGuid, DWORD DeviceId, const BYTE *RoutingInfo, DWORD RoutingInfoSize);
typedef BOOL (WINAPI *PFAXROUTEINITIALIZE)               (HANDLE,PFAX_ROUTE_CALLBACKROUTINES);
typedef BOOL (WINAPI *PFAXROUTEMETHOD)                   (const FAX_ROUTE*,PVOID*,LPDWORD);
typedef BOOL (WINAPI *PFAXROUTEDEVICEENABLE)             (LPCWSTR,DWORD,LONG);
typedef BOOL (WINAPI *PFAXROUTEDEVICECHANGENOTIFICATION) (DWORD,BOOL);
typedef BOOL (WINAPI *PFAXROUTEGETROUTINGINFO)           (LPCWSTR,DWORD,LPBYTE,LPDWORD);
typedef BOOL (WINAPI *PFAXROUTESETROUTINGINFO)           (LPCWSTR,DWORD,const BYTE*,DWORD);
#endif
