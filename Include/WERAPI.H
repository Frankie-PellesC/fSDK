/*+@@file@@----------------------------------------------------------------*//*!
 \file		WERAPI.H
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 01:50:59 2016
 \date		Modified on Mon Sep 19 01:50:59 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef WERAPI_H__
#define WERAPI_H__
#if __POCC__ >= 500
#pragma once
#endif
typedef HANDLE HREPORT;
#define WER_FAULT_REPORTING_FLAG_NOHEAP     1
#define WER_FAULT_REPORTING_FLAG_QUEUE      2
#define WER_FAULT_REPORTING_FLAG_DISABLE_THREAD_SUSPENSION   4
#define WER_FAULT_REPORTING_FLAG_QUEUE_UPLOAD      8
#define WER_FAULT_REPORTING_ALWAYS_SHOW_UI          16
#define WER_MAX_EVENT_NAME_LENGTH 64
#define WER_MAX_SIGNATURE_NAME_LENGTH 128
#define WER_MAX_TOTAL_PARAM_LENGTH      1720
#define WER_MAX_PARAM_LENGTH            (MAX_PATH)
#define WER_MAX_PREFERRED_MODULES           128
#define WER_MAX_PREFERRED_MODULES_BUFFER    256
#define WER_MAX_PARAM_COUNT 10
#define WER_MAX_MEM_BLOCK_SIZE (64 * 1024)
#define APPCRASH_EVENT          L"APPCRASH"
#define WER_P0  0
#define WER_P1  1
#define WER_P2  2
#define WER_P3  3
#define WER_P4  4
#define WER_P5  5
#define WER_P6  6
#define WER_P7  7
#define WER_P8  8
#define WER_P9  9
#define WER_ERROR_START (0xff00)
#define WER_E_INSUFFICIENT_BUFFER           (HRESULT_FROM_WIN32(ERROR_INSUFFICIENT_BUFFER))
#define WER_E_NOT_FOUND                     (HRESULT_FROM_WIN32(ERROR_NOT_FOUND))
#define WER_E_LENGTH_EXCEEDED               (HRESULT_FROM_WIN32(ERROR_PARAMETER_QUOTA_EXCEEDED))
#define WER_E_INVALID_STATE                 (HRESULT_FROM_WIN32(ERROR_INVALID_STATE))
#define WER_E_STORE_DISABLED                MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS, WER_ERROR_START + 3)
#define WER_E_MISSING_PARAM                 MAKE_HRESULT(SEVERITY_ERROR, FACILITY_WINDOWS, WER_ERROR_START + 5)
typedef enum _WER_REPORT_UI
{
    WerUIAdditionalDataDlgHeader = 1,
    WerUIIconFilePath = 2,
    WerUIConsentDlgHeader = 3,
    WerUIConsentDlgBody = 4,
    WerUIOnlineSolutionCheckText = 5,
    WerUIOfflineSolutionCheckText = 6,
    WerUICloseText = 7,
    WerUICloseDlgHeader = 8,
    WerUICloseDlgBody = 9,
    WerUICloseDlgButtonText = 10,
    WerUICustomActionButtonText = 11,
    WerUIMax
} WER_REPORT_UI;
typedef enum _WER_REGISTER_FILE_TYPE
{   
    WerRegFileTypeUserDocument = 1,
    WerRegFileTypeOther = 2,
    WerRegFileTypeMax
} WER_REGISTER_FILE_TYPE;
typedef enum _WER_FILE_TYPE
{   
    WerFileTypeMicrodump = 1,
    WerFileTypeMinidump = 2,
    WerFileTypeHeapdump = 3,
    WerFileTypeUserDocument = 4,
    WerFileTypeOther = 5,
    WerFileTypeMax
} WER_FILE_TYPE;
typedef enum _WER_SUBMIT_RESULT
{
    WerReportQueued = 1,
    WerReportUploaded = 2,
    WerReportDebug = 3,
    WerReportFailed = 4,
    WerDisabled = 5,
    WerReportCancelled = 6,
    WerDisabledQueue = 7,
    WerReportAsync = 8,
    WerCustomAction = 9
} WER_SUBMIT_RESULT, *PWER_SUBMIT_RESULT;
typedef enum _WER_REPORT_TYPE
{   
    WerReportNonCritical = 0,
    WerReportCritical = 1,
    WerReportApplicationCrash = 2,
    WerReportApplicationHang = 3,
    WerReportKernel = 4,
    WerReportInvalid
} WER_REPORT_TYPE;
#define WER_FILE_DELETE_WHEN_DONE       1
#define WER_FILE_ANONYMOUS_DATA         2
#define WER_SUBMIT_HONOR_RECOVERY               1
#define WER_SUBMIT_HONOR_RESTART                2
#define WER_SUBMIT_QUEUE                        4
#define WER_SUBMIT_SHOW_DEBUG                   8
#define WER_SUBMIT_ADD_REGISTERED_DATA          16
#define WER_SUBMIT_OUTOFPROCESS                 32
#define WER_SUBMIT_NO_CLOSE_UI                  64
#define WER_SUBMIT_NO_QUEUE                     128
#define WER_SUBMIT_NO_ARCHIVE                   256
#define WER_SUBMIT_START_MINIMIZED              512
#define WER_SUBMIT_OUTOFPROCESS_ASYNC           1024
#define WER_SUBMIT_BYPASS_DATA_THROTTLING       2048
#define WER_SUBMIT_ARCHIVE_PARAMETERS_ONLY      4096
#define WER_SUBMIT_REPORT_MACHINE_ID            8192
typedef struct _WER_REPORT_INFORMATION
{
    DWORD dwSize;
    HANDLE hProcess;
    WCHAR wzConsentKey[64];
    WCHAR wzFriendlyEventName[128];
    WCHAR wzApplicationName[128];
    WCHAR wzApplicationPath[MAX_PATH];
    WCHAR wzDescription[512];
    HWND hwndParent;    
} WER_REPORT_INFORMATION, *PWER_REPORT_INFORMATION;
typedef struct _WER_DUMP_CUSTOM_OPTIONS 
{
    DWORD dwSize;   
    DWORD dwMask;
    DWORD dwDumpFlags;
    BOOL  bOnlyThisThread;
    DWORD dwExceptionThreadFlags;
    DWORD dwOtherThreadFlags;
    DWORD dwExceptionThreadExFlags;
    DWORD dwOtherThreadExFlags;
    DWORD dwPreferredModuleFlags;
    DWORD dwOtherModuleFlags;
    WCHAR wzPreferredModuleList[WER_MAX_PREFERRED_MODULES_BUFFER];
    
} WER_DUMP_CUSTOM_OPTIONS, *PWER_DUMP_CUSTOM_OPTIONS;
typedef struct _WER_EXCEPTION_INFORMATION
{   
    PEXCEPTION_POINTERS pExceptionPointers;
    BOOL bClientPointers;
} WER_EXCEPTION_INFORMATION, *PWER_EXCEPTION_INFORMATION;
typedef enum _WER_CONSENT
{
    WerConsentNotAsked = 1,
    WerConsentApproved = 2,
    WerConsentDenied = 3,
    WerConsentAlwaysPrompt = 4,
    WerConsentMax
}WER_CONSENT;
HRESULT WINAPI WerReportCreate(PCWSTR pwzEventType, WER_REPORT_TYPE repType, PWER_REPORT_INFORMATION pReportInformation, HREPORT *phReportHandle);
HRESULT WINAPI WerReportSetParameter(HREPORT hReportHandle, DWORD dwparamID, PCWSTR pwzName, PCWSTR pwzValue);
HRESULT WINAPI WerReportAddFile(HREPORT hReportHandle, PCWSTR pwzPath, WER_FILE_TYPE repFileType, DWORD dwFileFlags);
HRESULT WINAPI WerReportSetUIOption(HREPORT hReportHandle, WER_REPORT_UI repUITypeID, PCWSTR pwzValue);
HRESULT WINAPI WerReportSubmit(HREPORT hReportHandle, WER_CONSENT consent, DWORD dwFlags, PWER_SUBMIT_RESULT pSubmitResult);
#define WER_DUMP_MASK_START 1
#define WER_DUMP_MASK_DUMPTYPE               (WER_DUMP_MASK_START << 0)
#define WER_DUMP_MASK_ONLY_THISTHREAD        (WER_DUMP_MASK_START << 1)
#define WER_DUMP_MASK_THREADFLAGS            (WER_DUMP_MASK_START << 2)
#define WER_DUMP_MASK_THREADFLAGS_EX         (WER_DUMP_MASK_START << 3)
#define WER_DUMP_MASK_OTHERTHREADFLAGS       (WER_DUMP_MASK_START << 4)
#define WER_DUMP_MASK_OTHERTHREADFLAGS_EX    (WER_DUMP_MASK_START << 5)
#define WER_DUMP_MASK_PREFERRED_MODULESFLAGS (WER_DUMP_MASK_START << 6)
#define WER_DUMP_MASK_OTHER_MODULESFLAGS     (WER_DUMP_MASK_START << 7)
#define WER_DUMP_MASK_PREFERRED_MODULE_LIST  (WER_DUMP_MASK_START << 8)
#define  WER_DUMP_NOHEAP_ONQUEUE    1
typedef enum _WER_DUMP_TYPE
{
    WerDumpTypeMicroDump = 1,
    WerDumpTypeMiniDump = 2,
    WerDumpTypeHeapDump = 3,
    WerDumpTypeMax = 4
} WER_DUMP_TYPE;
HRESULT WINAPI WerReportAddDump(HREPORT hReportHandle, HANDLE hProcess, HANDLE hThread, WER_DUMP_TYPE dumpType, PWER_EXCEPTION_INFORMATION pExceptionParam, PWER_DUMP_CUSTOM_OPTIONS pDumpCustomOptions, DWORD dwFlags);
HRESULT WINAPI WerReportCloseHandle(HREPORT hReportHandle);
#define WER_MAX_REGISTERED_ENTRIES 512
HRESULT WINAPI WerRegisterFile(PCWSTR pwzFile, WER_REGISTER_FILE_TYPE regFileType, DWORD dwFlags);
HRESULT WINAPI WerUnregisterFile(PCWSTR pwzFilePath);
HRESULT WINAPI WerRegisterMemoryBlock(PVOID pvAddress, DWORD dwSize);
HRESULT WINAPI WerUnregisterMemoryBlock(PVOID pvAddress);
HRESULT WINAPI WerSetFlags(DWORD dwFlags);
HRESULT WINAPI WerGetFlags(HANDLE hProcess, PDWORD pdwFlags);
HRESULT WINAPI WerAddExcludedApplication(PCWSTR pwzExeName, BOOL bAllUsers);
HRESULT WINAPI WerRemoveExcludedApplication(PCWSTR pwzExeName, BOOL bAllUsers);
#define WER_MAX_REGISTERED_RUNTIME_EXCEPTION_MODULES 16
HRESULT WINAPI WerRegisterRuntimeExceptionModule(PCWSTR pwszOutOfProcessCallbackDll, PVOID pContext);
HRESULT WINAPI WerUnregisterRuntimeExceptionModule(PCWSTR pwszOutOfProcessCallbackDll, PVOID pContext);
#define WER_RUNTIME_EXCEPTION_EVENT_FUNCTION                "OutOfProcessExceptionEventCallback"
#define WER_RUNTIME_EXCEPTION_EVENT_SIGNATURE_FUNCTION      "OutOfProcessExceptionEventSignatureCallback"
#define WER_RUNTIME_EXCEPTION_DEBUGGER_LAUNCH               "OutOfProcessExceptionEventDebuggerLaunchCallback"
typedef struct _WER_RUNTIME_EXCEPTION_INFORMATION
{
    DWORD dwSize;
    HANDLE hProcess;
    HANDLE hThread;
    EXCEPTION_RECORD exceptionRecord;
    CONTEXT context;
    PCWSTR pwszReportId;
} WER_RUNTIME_EXCEPTION_INFORMATION, *PWER_RUNTIME_EXCEPTION_INFORMATION;
typedef HRESULT(*PFN_WER_RUNTIME_EXCEPTION_EVENT) (PVOID pContext, const PWER_RUNTIME_EXCEPTION_INFORMATION pExceptionInformation, BOOL *pbOwnershipClaimed, PWSTR pwszEventName, PDWORD pchSize, PDWORD pdwSignatureCount);
typedef HRESULT(*PFN_WER_RUNTIME_EXCEPTION_EVENT_SIGNATURE) (PVOID pContext, const PWER_RUNTIME_EXCEPTION_INFORMATION pExceptionInformation, DWORD dwIndex, PWSTR pwszName, PDWORD pchName, PWSTR pwszValue, PDWORD pchValue);
typedef HRESULT(*PFN_WER_RUNTIME_EXCEPTION_DEBUGGER_LAUNCH) (PVOID pContext, const PWER_RUNTIME_EXCEPTION_INFORMATION pExceptionInformation, PBOOL pbIsCustomDebugger, PWSTR pwszDebuggerLaunch, PDWORD pchDebuggerLaunch, PBOOL pbIsDebuggerAutolaunch);
#endif
