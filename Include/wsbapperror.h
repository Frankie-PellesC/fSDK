/*+@@file@@----------------------------------------------------------------*//*!
 \file		wsbapperror.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 17:28:52 2016
 \date		Modified on Mon Sep 19 17:28:52 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _WSBAPPERROR_H
#define _WSBAPPERROR_H
#if __POCC__ >= 500
#pragma once
#endif
#define SEVERITY_OF(code)          ((code>>30) & 0x00000003)
#define FACILITY_OF(code)          ((code>>16) & 0x00000FFF)
#define FACILITY_WSBAPP                  0x7A
#define STATUS_SEVERITY_WARNING          0x2
#define STATUS_SEVERITY_SUCCESS          0x0
#define STATUS_SEVERITY_INFORMATIONAL    0x1
#define STATUS_SEVERITY_ERROR            0x3
#define WSBAPP_E_COMPONENT_CONSISTENCY_CHECK_FAILED ((HRESULT)0x807A0001L)
#define WSBAPP_E_COMPONENT_PRE_RESTORE_FAILED ((HRESULT)0x807A0002L)
#define WSBAPP_E_COMPONENT_POST_RESTORE_FAILED ((HRESULT)0x807A0003L)
#define WSBAPP_ASYNC_IN_PROGRESS         ((HRESULT)0x407A0004L)
#endif
