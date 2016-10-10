/*+@@file@@----------------------------------------------------------------*//*!
 \file		Filterr.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 10 17:59:39 2016
 \date		Modified on Sun Jul 10 17:59:39 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _FILTERR_H_
#define _FILTERR_H_
#if __POCC__ >= 500
#pragma once
#endif
#ifndef FACILITY_WINDOWS
#define FACILITY_WINDOWS                 0x8
#define FACILITY_ITF                     0x4
#define STATUS_SEVERITY_SUCCESS          0x0
#define STATUS_SEVERITY_COFAIL           0x3
#define STATUS_SEVERITY_COERROR          0x2
#define NOT_AN_ERROR                     ((HRESULT)0x00080000L)
#endif
#define FILTER_E_END_OF_CHUNKS           ((HRESULT)0x80041700L)
#define FILTER_E_NO_MORE_TEXT            ((HRESULT)0x80041701L)
#define FILTER_E_NO_MORE_VALUES          ((HRESULT)0x80041702L)
#define FILTER_E_ACCESS                  ((HRESULT)0x80041703L)
#define FILTER_W_MONIKER_CLIPPED         ((HRESULT)0x00041704L)
#define FILTER_E_NO_TEXT                 ((HRESULT)0x80041705L)
#define FILTER_E_NO_VALUES               ((HRESULT)0x80041706L)
#define FILTER_E_EMBEDDING_UNAVAILABLE   ((HRESULT)0x80041707L)
#define FILTER_E_LINK_UNAVAILABLE        ((HRESULT)0x80041708L)
#define FILTER_S_LAST_TEXT               ((HRESULT)0x00041709L)
#define FILTER_S_LAST_VALUES             ((HRESULT)0x0004170AL)
#define FILTER_E_PASSWORD                ((HRESULT)0x8004170BL)
#define FILTER_E_UNKNOWNFORMAT           ((HRESULT)0x8004170CL)
#endif
