/*+@@file@@----------------------------------------------------------------*//*!
 \file		wdscpmsg.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 00:20:18 2016
 \date		Modified on Mon Sep 19 00:20:18 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#if __POCC__ >= 500
#pragma once
#endif
#define FACILITY_WDSCP                   0x125
#define FACILITY_MAX_WDSCP               0x125
#define FACILITY_BASE_WDSCP              0x100
#define STATUS_SEVERITY_WARNING          0x2
#define STATUS_SEVERITY_SUCCESS          0x0
#define STATUS_SEVERITY_INFORMATIONAL    0x1
#define STATUS_SEVERITY_ERROR            0x3
#define WDSCP_CATEGORY                   ((HRESULT)0x00000001L)
#define WDSCP_E_INVALID_CONFIGURATION    ((HRESULT)0xC1250100L)
#define WDSCP_E_NOT_A_DIRECTORY          ((HRESULT)0xC1250101L)
#define WDSCP_E_CONFIG_STRING_REQUIRED   ((HRESULT)0xC1250102L)
