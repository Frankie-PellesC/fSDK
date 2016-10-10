/*+@@file@@----------------------------------------------------------------*//*!
 \file		FaxDev.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 10 17:14:20 2016
 \date		Modified on Sun Jul 10 17:14:20 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _FAXDEV_
#define _FAXDEV_
#include <commctrl.h>
#if __POCC__ >= 500
#pragma once
#endif
#define FS_INITIALIZING         0x20000000
#define FS_DIALING              0x20000001
#define FS_TRANSMITTING         0x20000002
#define FS_RECEIVING            0x20000004
#define FS_COMPLETED            0x20000008
#define FS_HANDLED              0x20000010
#define FS_LINE_UNAVAILABLE     0x20000020
#define FS_BUSY                 0x20000040
#define FS_NO_ANSWER            0x20000080
#define FS_BAD_ADDRESS          0x20000100
#define FS_NO_DIAL_TONE         0x20000200
#define FS_DISCONNECTED         0x20000400
#define FS_FATAL_ERROR          0x20000800  
#define FS_NOT_FAX_CALL         0x20001000
#define FS_CALL_DELAYED         0x20002000
#define FS_CALL_BLACKLISTED     0x20004000
#define FS_USER_ABORT           0x20200000
#define FS_ANSWERED             0x20800000
typedef struct _FAX_SEND
{
    DWORD   SizeOfStruct;
    LPWSTR  FileName;
    LPWSTR  CallerName;
    LPWSTR  CallerNumber;
    LPWSTR  ReceiverName;
    LPWSTR  ReceiverNumber;
    BOOL    Branding;
    HCALL   CallHandle;
    DWORD   Reserved[3];
} FAX_SEND, *PFAX_SEND;
typedef struct _FAX_RECEIVE
{
    DWORD   SizeOfStruct;
    LPWSTR  FileName;
    LPWSTR  ReceiverName;
    LPWSTR  ReceiverNumber;
    DWORD   Reserved[4];
} FAX_RECEIVE, *PFAX_RECEIVE;
typedef struct _FAX_DEV_STATUS
{
    DWORD   SizeOfStruct;
    DWORD   StatusId;
    DWORD   StringId;
    DWORD   PageCount;
    LPWSTR  CSI;
    LPWSTR  CallerId;
    LPWSTR  RoutingInfo;
    DWORD   ErrorCode;
    DWORD   Reserved[3];
} FAX_DEV_STATUS, *PFAX_DEV_STATUS;
typedef BOOL (CALLBACK *PFAX_SERVICE_CALLBACK) (HANDLE FaxHandle, DWORD DeviceId, DWORD_PTR Param1, DWORD_PTR Param2, DWORD_PTR Param3);
typedef void (CALLBACK *PFAX_LINECALLBACK) (HANDLE FaxHandle, DWORD hDevice, DWORD dwMessage, DWORD_PTR dwInstance, DWORD_PTR dwParam1, DWORD_PTR dwParam2, DWORD_PTR dwParam3);
BOOL WINAPI FaxDevInitialize(HLINEAPP LineAppHandle, HANDLE HeapHandle, PFAX_LINECALLBACK *LineCallbackFunction, PFAX_SERVICE_CALLBACK FaxServiceCallback);
HRESULT WINAPI FaxDevShutdown(void);
BOOL WINAPI FaxDevVirtualDeviceCreation(LPDWORD DeviceCount, LPWSTR DeviceNamePrefix, LPDWORD DeviceIdPrefix, HANDLE CompletionPort, ULONG_PTR CompletionKey);
BOOL WINAPI FaxDevStartJob(HLINE LineHandle, DWORD DeviceId, PHANDLE FaxHandle, HANDLE CompletionPortHandle, ULONG_PTR CompletionKey);
BOOL WINAPI FaxDevEndJob(HANDLE FaxHandle);
typedef BOOL(CALLBACK *PFAX_SEND_CALLBACK) (HANDLE FaxHandle, HCALL CallHandle, DWORD Reserved1, DWORD Reserved2);
BOOL WINAPI FaxDevSend(HANDLE FaxHandle, PFAX_SEND FaxSend, PFAX_SEND_CALLBACK FaxSendCallback);
#define FAXDEVRECEIVE_SIZE 4096
BOOL WINAPI FaxDevReceive(HANDLE FaxHandle, HCALL CallHandle, PFAX_RECEIVE FaxReceive);
#define FAXDEVREPORTSTATUS_SIZE 4096
BOOL WINAPI FaxDevReportStatus(HANDLE FaxHandle, PFAX_DEV_STATUS FaxStatus, DWORD FaxStatusSize, LPDWORD FaxStatusSizeRequired);
BOOL WINAPI FaxDevAbortOperation(HANDLE FaxHandle);
BOOL WINAPI FaxDevConfigure(HPROPSHEETPAGE *PropSheetPage);
typedef BOOL(WINAPI *PFAXDEVINITIALIZE) (HLINEAPP, HANDLE, PFAX_LINECALLBACK *, PFAX_SERVICE_CALLBACK);
typedef BOOL(WINAPI *PFAXDEVVIRTUALDEVICECREATION) (LPDWORD DeviceCount, LPWSTR DeviceNamePrefix, LPDWORD DeviceIdPrefix, HANDLE CompletionPort, ULONG_PTR CompletionKey);
typedef BOOL(WINAPI *PFAXDEVSTARTJOB) (HLINE, DWORD, PHANDLE, HANDLE, ULONG_PTR);
typedef BOOL(WINAPI *PFAXDEVENDJOB) (HANDLE);
typedef BOOL(WINAPI *PFAXDEVSEND) (HANDLE, PFAX_SEND, PFAX_SEND_CALLBACK);
typedef BOOL(WINAPI *PFAXDEVRECEIVE) (HANDLE, HCALL, PFAX_RECEIVE);
typedef BOOL(WINAPI *PFAXDEVREPORTSTATUS) (HANDLE, PFAX_DEV_STATUS, DWORD, LPDWORD);
typedef BOOL(WINAPI *PFAXDEVABORTOPERATION) (HANDLE);
typedef BOOL(WINAPI *PFAXDEVCONFIGURE) (HPROPSHEETPAGE *);
typedef HRESULT(WINAPI *PFAXDEVSHUTDOWN) (void);
#endif
