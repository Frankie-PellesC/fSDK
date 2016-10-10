/*+@@file@@----------------------------------------------------------------*//*!
 \file		lowlevelmonitorconfigurationapi.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jun 19 22:53:06 2016
 \date		Modified on Sun Jun 19 22:53:06 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/
#ifndef LowLevelMonitorConfigurationAPI_h
#define LowLevelMonitorConfigurationAPI_h
#if __POCC__ >= 500
#pragma once
#endif
#include <PhysicalMonitorEnumerationAPI.h>
#pragma pack( push, 1  )
typedef struct _MC_TIMING_REPORT
{
    DWORD dwHorizontalFrequencyInHZ;
    DWORD dwVerticalFrequencyInHZ;
    BYTE bTimingStatusByte;
} MC_TIMING_REPORT, *LPMC_TIMING_REPORT;
typedef enum _MC_VCP_CODE_TYPE
{
    MC_MOMENTARY,
    MC_SET_PARAMETER
} MC_VCP_CODE_TYPE, *LPMC_VCP_CODE_TYPE;
_BOOL WINAPI GetVCPFeatureAndVCPFeatureReply(HANDLE hMonitor, BYTE bVCPCode, LPMC_VCP_CODE_TYPE pvct, LPDWORD pdwCurrentValue, LPDWORD pdwMaximumValue);
_BOOL WINAPI SetVCPFeature(HANDLE hMonitor, BYTE bVCPCode, DWORD dwNewValue);
_BOOL WINAPI SaveCurrentSettings(HANDLE hMonitor);
_BOOL WINAPI GetCapabilitiesStringLength(HANDLE hMonitor, LPDWORD pdwCapabilitiesStringLengthInCharacters);
_BOOL WINAPI CapabilitiesRequestAndCapabilitiesReply(HANDLE hMonitor, LPSTR pszASCIICapabilitiesString, DWORD dwCapabilitiesStringLengthInCharacters);
_BOOL WINAPI GetTimingReport(HANDLE hMonitor, LPMC_TIMING_REPORT pmtrMonitorTimingReport);
#pragma pack( pop )
#endif


