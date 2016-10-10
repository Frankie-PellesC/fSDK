/*+@@file@@----------------------------------------------------------------*//*!
 \file		Rtutils.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Sep  3 23:42:52 2016
 \date		Modified on Sat Sep  3 23:42:52 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __ROUTING_RTUTILS_H__
#define __ROUTING_RTUTILS_H__
#if __POCC__ >= 500
#pragma once
#endif
#define TRACE_USE_FILE      0x00000001
#define TRACE_USE_CONSOLE   0x00000002
#define TRACE_NO_SYNCH      0x00000004
#define TRACE_NO_STDINFO    0x00000001
#define TRACE_USE_MASK      0x00000002
#define TRACE_USE_MSEC      0x00000004
#define TRACE_USE_DATE      0x00000008
#define INVALID_TRACEID     0xFFFFFFFF
DWORD APIENTRY TraceRegisterExA(LPCSTR lpszCallerName, DWORD dwFlags);
DWORD APIENTRY TraceDeregisterA(DWORD dwTraceID);
DWORD APIENTRY TraceDeregisterExA(DWORD dwTraceID, DWORD dwFlags);
DWORD APIENTRY TraceGetConsoleA(DWORD dwTraceID, LPHANDLE lphConsole);
DWORD __cdecl TracePrintfA(DWORD dwTraceID, LPCSTR lpszFormat, ...);
DWORD __cdecl TracePrintfExA(DWORD dwTraceID, DWORD dwFlags, LPCSTR lpszFormat, ...);
DWORD APIENTRY TraceVprintfExA(DWORD dwTraceID, DWORD dwFlags, LPCSTR lpszFormat, va_list arglist);
DWORD APIENTRY TracePutsExA(DWORD dwTraceID, DWORD dwFlags, LPCSTR lpszString);
DWORD APIENTRY TraceDumpExA(DWORD dwTraceID, DWORD dwFlags, LPBYTE lpbBytes, DWORD dwByteCount, DWORD dwGroupSize, BOOL bAddressPrefix, LPCSTR lpszPrefix);
#define TraceRegisterA(a)               TraceRegisterExA(a,0)
#define TraceVprintfA(a,b,c)            TraceVprintfExA(a,0,b,c)
#define TracePutsA(a,b)                 TracePutsExA(a,0,b)
#define TraceDumpA(a,b,c,d,e,f)         TraceDumpExA(a,0,b,c,d,e,f)
DWORD APIENTRY TraceRegisterExW(LPCWSTR lpszCallerName, DWORD dwFlags);
DWORD APIENTRY TraceDeregisterW(DWORD dwTraceID);
DWORD APIENTRY TraceDeregisterExW(DWORD dwTraceID, DWORD dwFlags);
DWORD APIENTRY TraceGetConsoleW(DWORD dwTraceID, LPHANDLE lphConsole);
DWORD __cdecl TracePrintfW(DWORD dwTraceID, LPCWSTR lpszFormat, ...);
DWORD __cdecl TracePrintfExW(DWORD dwTraceID, DWORD dwFlags, LPCWSTR lpszFormat, ...);
DWORD APIENTRY TraceVprintfExW(DWORD dwTraceID, DWORD dwFlags, LPCWSTR lpszFormat, va_list arglist);
DWORD APIENTRY TracePutsExW(DWORD dwTraceID, DWORD dwFlags, LPCWSTR lpszString);
DWORD APIENTRY TraceDumpExW(DWORD dwTraceID, DWORD dwFlags, LPBYTE lpbBytes, DWORD dwByteCount, DWORD dwGroupSize, BOOL bAddressPrefix, LPCWSTR lpszPrefix);
#define TraceRegisterW(a)               TraceRegisterExW(a,0)
#define TraceVprintfW(a,b,c)            TraceVprintfExW(a,0,b,c)
#define TracePutsW(a,b)                 TracePutsExW(a,0,b)
#define TraceDumpW(a,b,c,d,e,f)         TraceDumpExW(a,0,b,c,d,e,f)
#ifdef UNICODE
#define TraceRegister           TraceRegisterW
#define TraceDeregister         TraceDeregisterW
#define TraceDeregisterEx       TraceDeregisterExW
#define TraceGetConsole         TraceGetConsoleW
#define TracePrintf             TracePrintfW
#define TraceVprintf            TraceVprintfW
#define TracePuts               TracePutsW
#define TraceDump               TraceDumpW
#define TraceRegisterEx         TraceRegisterExW
#define TracePrintfEx           TracePrintfExW
#define TraceVprintfEx          TraceVprintfExW
#define TracePutsEx             TracePutsExW
#define TraceDumpEx             TraceDumpExW
#else
#define TraceRegister           TraceRegisterA
#define TraceDeregister         TraceDeregisterA
#define TraceDeregisterEx       TraceDeregisterExA
#define TraceGetConsole         TraceGetConsoleA
#define TracePrintf             TracePrintfA
#define TraceVprintf            TraceVprintfA
#define TracePuts               TracePutsA
#define TraceDump               TraceDumpA
#define TraceRegisterEx         TraceRegisterExA
#define TracePrintfEx           TracePrintfExA
#define TraceVprintfEx          TraceVprintfExA
#define TracePutsEx             TracePutsExA
#define TraceDumpEx             TraceDumpExA
#endif
VOID APIENTRY LogErrorA(DWORD dwMessageId, DWORD cNumberOfSubStrings, LPSTR *plpwsSubStrings, DWORD dwErrorCode);
VOID APIENTRY LogEventA(DWORD wEventType, DWORD dwMessageId, DWORD cNumberOfSubStrings, LPSTR *plpwsSubStrings);
VOID LogErrorW(DWORD dwMessageId, DWORD cNumberOfSubStrings, LPWSTR *plpwsSubStrings, DWORD dwErrorCode);
VOID LogEventW(DWORD wEventType, DWORD dwMessageId, DWORD cNumberOfSubStrings, LPWSTR *plpwsSubStrings);
#ifdef UNICODE
#define LogError                LogErrorW
#define LogEvent                LogEventW
#else
#define LogError                LogErrorA
#define LogEvent                LogEventA
#endif
HANDLE RouterLogRegisterA(LPCSTR lpszSource);
VOID RouterLogDeregisterA(HANDLE hLogHandle);
VOID RouterLogEventA(HANDLE hLogHandle, DWORD dwEventType, DWORD dwMessageId, DWORD dwSubStringCount, LPSTR *plpszSubStringArray, DWORD dwErrorCode);
VOID RouterLogEventDataA(HANDLE hLogHandle, DWORD dwEventType, DWORD dwMessageId, DWORD dwSubStringCount, LPSTR *plpszSubStringArray, DWORD dwDataBytes, LPBYTE lpDataBytes);
VOID RouterLogEventStringA(HANDLE hLogHandle, DWORD dwEventType, DWORD dwMessageId, DWORD dwSubStringCount, LPSTR *plpszSubStringArray, DWORD dwErrorCode, DWORD dwErrorIndex);
VOID __cdecl RouterLogEventExA(HANDLE hLogHandle, DWORD dwEventType, DWORD dwErrorCode, DWORD dwMessageId, LPCSTR ptszFormat, ...
	);
VOID RouterLogEventValistExA(HANDLE hLogHandle, DWORD dwEventType, DWORD dwErrorCode, DWORD dwMessageId, LPCSTR ptszFormat, va_list arglist);
DWORD RouterGetErrorStringA(DWORD dwErrorCode, LPSTR *lplpszErrorString);
#define RouterLogErrorA(h,msg,count,array,err) \
        RouterLogEventA(h,EVENTLOG_ERROR_TYPE,msg,count,array,err)
#define RouterLogWarningA(h,msg,count,array,err) \
        RouterLogEventA(h,EVENTLOG_WARNING_TYPE,msg,count,array,err)
#define RouterLogInformationA(h,msg,count,array,err) \
        RouterLogEventA(h,EVENTLOG_INFORMATION_TYPE,msg,count,array,err)
#define RouterLogErrorDataA(h,msg,count,array,c,buf) \
        RouterLogEventDataA(h,EVENTLOG_ERROR_TYPE,msg,count,array,c,buf)
#define RouterLogWarningDataA(h,msg,count,array,c,buf) \
        RouterLogEventDataA(h,EVENTLOG_WARNING_TYPE,msg,count,array,c,buf)
#define RouterLogInformationDataA(h,msg,count,array,c,buf) \
        RouterLogEventDataA(h,EVENTLOG_INFORMATION_TYPE,msg,count,array,c,buf)
#define RouterLogErrorStringA(h,msg,count,array,err,index) \
        RouterLogEventStringA(h,EVENTLOG_ERROR_TYPE,msg,count,array, err,index)
#define RouterLogWarningStringA(h,msg,count,array,err,index) \
        RouterLogEventStringA(h,EVENTLOG_WARNING_TYPE,msg,count,array,err,index)
#define RouterLogInformationStringA(h,msg,count,array, err,index) \
        RouterLogEventStringA(h,EVENTLOG_INFORMATION_TYPE,msg,count,array,err,\
                              index)
HANDLE RouterLogRegisterW(LPCWSTR lpszSource);
VOID RouterLogDeregisterW(HANDLE hLogHandle);
VOID RouterLogEventW(HANDLE hLogHandle, DWORD dwEventType, DWORD dwMessageId, DWORD dwSubStringCount, LPWSTR *plpszSubStringArray, DWORD dwErrorCode);
VOID RouterLogEventDataW(HANDLE hLogHandle, DWORD dwEventType, DWORD dwMessageId, DWORD dwSubStringCount, LPWSTR *plpszSubStringArray, DWORD dwDataBytes, LPBYTE lpDataBytes);
VOID RouterLogEventStringW(HANDLE hLogHandle, DWORD dwEventType, DWORD dwMessageId, DWORD dwSubStringCount, LPWSTR *plpszSubStringArray, DWORD dwErrorCode, DWORD dwErrorIndex);
VOID __cdecl RouterLogEventExW(HANDLE hLogHandle, DWORD dwEventType, DWORD dwErrorCode, DWORD dwMessageId, LPCWSTR ptszFormat, ...
	);
VOID RouterLogEventValistExW(HANDLE hLogHandle, DWORD dwEventType, DWORD dwErrorCode, DWORD dwMessageId, LPCWSTR ptszFormat, va_list arglist);
DWORD RouterGetErrorStringW(DWORD dwErrorCode, LPWSTR *lplpwszErrorString);
#define RouterLogErrorW(h,msg,count,array,err)						RouterLogEventW(h,EVENTLOG_ERROR_TYPE,msg,count,array,err)
#define RouterLogWarningW(h,msg,count,array,err)					RouterLogEventW(h,EVENTLOG_WARNING_TYPE,msg,count,array,err)
#define RouterLogInformationW(h,msg,count,array,err)				RouterLogEventW(h,EVENTLOG_INFORMATION_TYPE,msg,count,array,err)
#define RouterLogErrorDataW(h,msg,count,array,c,buf)				RouterLogEventDataW(h,EVENTLOG_ERROR_TYPE,msg,count,array,c,buf)
#define RouterLogWarningDataW(h,msg,count,array,c,buf)				RouterLogEventDataW(h,EVENTLOG_WARNING_TYPE,msg,count,array,c,buf)
#define RouterLogInformationDataW(h,msg,count,array,c,buf)			RouterLogEventDataW(h,EVENTLOG_INFORMATION_TYPE,msg,count,array,c,buf)
#define RouterLogErrorStringW(h,msg,count,array,err,index)			RouterLogEventStringW(h,EVENTLOG_ERROR_TYPE,msg,count,array,err,index)
#define RouterLogWarningStringW(h,msg,count,array,err,index)		RouterLogEventStringW(h,EVENTLOG_WARNING_TYPE,msg,count,array,err,index)
#define RouterLogInformationStringW(h,msg,count,array,err,index)	RouterLogEventStringW(h,EVENTLOG_INFORMATION_TYPE,msg,count,array,err,index)
#ifdef UNICODE
#define RouterLogRegister           RouterLogRegisterW
#define RouterLogDeregister         RouterLogDeregisterW
#define RouterLogEvent              RouterLogEventW
#define RouterLogError              RouterLogErrorW
#define RouterLogWarning            RouterLogWarningW
#define RouterLogInformation        RouterLogInformationW
#define RouterLogEventData          RouterLogEventDataW
#define RouterLogErrorData          RouterLogErrorDataW
#define RouterLogWarningData        RouterLogWarningDataW
#define RouterLogInformationData    RouterLogInformationDataW
#define RouterLogEventString        RouterLogEventStringW
#define RouterLogEventEx            RouterLogEventExW
#define RouterLogEventValistEx      RouterLogEventValistExW
#define RouterLogErrorString        RouterLogErrorStringW
#define RouterLogWarningString      RouterLogWarningStringW
#define RouterLogInformationString  RouterLogInformationStringW
#define RouterGetErrorString        RouterGetErrorStringW
#
#else
#define RouterLogRegister           RouterLogRegisterA
#define RouterLogDeregister         RouterLogDeregisterA
#define RouterLogEvent              RouterLogEventA
#define RouterLogError              RouterLogErrorA
#define RouterLogWarning            RouterLogWarningA
#define RouterLogInformation        RouterLogInformationA
#define RouterLogEventData          RouterLogEventDataA
#define RouterLogErrorData          RouterLogErrorDataA
#define RouterLogWarningData        RouterLogWarningDataA
#define RouterLogInformationData    RouterLogInformationDataA
#define RouterLogEventString        RouterLogEventStringA
#define RouterLogEventEx            RouterLogEventExA
#define RouterLogEventValistEx      RouterLogEventValistExA
#define RouterLogErrorString        RouterLogErrorStringA
#define RouterLogWarningString      RouterLogWarningStringA
#define RouterLogInformationString  RouterLogInformationStringA
#define RouterGetErrorString        RouterGetErrorStringA
#endif
typedef VOID(APIENTRY *WORKERFUNCTION) (PVOID);
VOID RouterAssert(PSTR pszFailedAssertion, PSTR pszFileName, DWORD dwLineNumber, PSTR pszMessage);
#if DBG
#define RTASSERT(exp)			if (!(exp)) \
									RouterAssert(#exp, __FILE__, __LINE__, NULL)
#define RTASSERTMSG(msg, exp)	if (!(exp)) \
						            RouterAssert(#exp, __FILE__, __LINE__, msg)
#else
#define RTASSERT(exp)
#define RTASSERTMSG(msg, exp)
#endif
#define RTUTILS_MAX_PROTOCOL_NAME_LEN	                40
#define RTUTILS_MAX_PROTOCOL_DLL_LEN                    48
#ifndef MAX_PROTOCOL_NAME_LEN
#define MAX_PROTOCOL_NAME_LEN RTUTILS_MAX_PROTOCOL_NAME_LEN
#else
#undef MAX_PROTOCOL_NAME_LEN
#endif
#define MAX_PROTOCOL_DLL_LEN  RTUTILS_MAX_PROTOCOL_DLL_LEN
typedef struct _MPR_PROTOCOL_0
{
	DWORD dwProtocolId;
	WCHAR wszProtocol[RTUTILS_MAX_PROTOCOL_NAME_LEN + 1];
	WCHAR wszDLLName[RTUTILS_MAX_PROTOCOL_DLL_LEN + 1];
} MPR_PROTOCOL_0;
DWORD APIENTRY MprSetupProtocolEnum(DWORD dwTransportId, LPBYTE *lplpBuffer, LPDWORD lpdwEntriesRead);
DWORD APIENTRY MprSetupProtocolFree(LPVOID lpBuffer);
#define ROUTING_RESERVED
#define OPT1_1
#define OPT1_2
#define OPT2_1
#define OPT2_2
#define OPT3_1
#define OPT3_2
#endif
