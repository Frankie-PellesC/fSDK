/*+@@file@@----------------------------------------------------------------*//*!
 \file		FaxExt.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 10 17:20:01 2016
 \date		Modified on Sun Jul 10 17:20:01 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _FAX_EXT_H_
#define _FAX_EXT_H_
#if __POCC__ >= 500
#pragma once
#endif
typedef enum
{
    DEV_ID_SRC_FAX,
    DEV_ID_SRC_TAPI
}   FAX_ENUM_DEVICE_ID_SOURCE;
DWORD FaxExtGetData(DWORD dwDeviceId, FAX_ENUM_DEVICE_ID_SOURCE DevIdSrc, LPCWSTR lpcwstrDataGUID, LPBYTE *ppData, LPDWORD lpdwDataSize);
typedef DWORD(CALLBACK *PFAX_EXT_GET_DATA) (DWORD, FAX_ENUM_DEVICE_ID_SOURCE, LPCWSTR, LPBYTE *, LPDWORD);
DWORD FaxExtSetData(HINSTANCE hInst, DWORD dwDeviceId, FAX_ENUM_DEVICE_ID_SOURCE DevIdSrc, LPCWSTR lpcwstrDataGUID, LPBYTE pData, DWORD dwDataSize);
typedef DWORD(CALLBACK *PFAX_EXT_SET_DATA) (HINSTANCE, DWORD, FAX_ENUM_DEVICE_ID_SOURCE, LPCWSTR, LPBYTE, DWORD);
HRESULT FaxExtConfigChange(DWORD dwDeviceId, LPCWSTR lpcwstrDataGUID, LPBYTE lpData, DWORD dwDataSize);
typedef HRESULT(WINAPI *PFAX_EXT_CONFIG_CHANGE) (DWORD, LPCWSTR, LPBYTE, DWORD);
HANDLE FaxExtRegisterForEvents(HINSTANCE hInst, DWORD dwDeviceId, FAX_ENUM_DEVICE_ID_SOURCE DevIdSrc, LPCWSTR lpcwstrDataGUID, PFAX_EXT_CONFIG_CHANGE lpConfigChangeCallback);
typedef HANDLE(CALLBACK *PFAX_EXT_REGISTER_FOR_EVENTS) (HINSTANCE, DWORD, FAX_ENUM_DEVICE_ID_SOURCE, LPCWSTR, PFAX_EXT_CONFIG_CHANGE);
DWORD FaxExtUnregisterForEvents(HANDLE hNotification);
typedef DWORD(CALLBACK *PFAX_EXT_UNREGISTER_FOR_EVENTS) (HANDLE);
VOID FaxExtFreeBuffer(LPVOID lpvBuffer);
typedef VOID(CALLBACK *PFAX_EXT_FREE_BUFFER) (LPVOID);
HRESULT FaxExtInitializeConfig(PFAX_EXT_GET_DATA, PFAX_EXT_SET_DATA, PFAX_EXT_REGISTER_FOR_EVENTS, PFAX_EXT_UNREGISTER_FOR_EVENTS, PFAX_EXT_FREE_BUFFER);
typedef HRESULT(WINAPI *PFAX_EXT_INITIALIZE_CONFIG) (PFAX_EXT_GET_DATA, PFAX_EXT_SET_DATA, PFAX_EXT_REGISTER_FOR_EVENTS, PFAX_EXT_UNREGISTER_FOR_EVENTS, PFAX_EXT_FREE_BUFFER);
#endif
