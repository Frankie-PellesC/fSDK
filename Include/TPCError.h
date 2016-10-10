/*+@@file@@----------------------------------------------------------------*//*!
 \file		TPCError.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 17 01:06:24 2016
 \date		Modified on Sun Jul 17 01:06:24 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __TPCError_h__
#define __TPCError_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef _WINERROR_
#include <winerror.h>
#endif
#define TPC_E_INVALID_PROPERTY                MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x241)
#define TPC_E_NO_DEFAULT_TABLET               MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x212)
#define TPC_E_UNKNOWN_PROPERTY                MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x21b)
#define TPC_E_INVALID_INPUT_RECT              MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x219)
#define TPC_E_INVALID_STROKE                  MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x222)
#define TPC_E_INITIALIZE_FAIL                 MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x223)
#define TPC_E_NOT_RELEVANT                    MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x232)
#define TPC_E_RECOGNIZER_NOT_REGISTERED       MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x235)
#define TPC_E_INVALID_RIGHTS                  MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x236)
#define TPC_E_OUT_OF_ORDER_CALL               MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x237)
#define TPC_E_QUEUE_FULL                      MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x238)
#define TPC_E_INVALID_CONFIGURATION           MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x239)
#define TPC_E_INVALID_DATA_FROM_RECOGNIZER    MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x23A)
#define FACILITY_INK      40
#define INK_ERROR_BASE    0x0000
#define MAKE_INK_HRESULT(sev, err) MAKE_HRESULT(sev,FACILITY_INK,err)
#define MAKE_INK_ERROR(err)        MAKE_INK_HRESULT(SEVERITY_ERROR,err+INK_ERROR_BASE)
#define MAKE_INK_SCODE(scode)      MAKE_INK_HRESULT(SEVERITY_SUCCESS,scode+INK_ERROR_BASE)
#define MAKE_OBJ_ERROR_INFO( ID, hr, helpid, helpfile )     \
            AtlReportError( CLSID_##ID , IDS_##hr,          \
                            helpid, helpfile,               \
                            IID_I##ID, hr,                  \
                            _Module.GetModuleInstance())
#define MAKE_INT_ERROR_INFO( ID, hr, helpid, helpfile )     \
            AtlReportError( GUID_NULL , IDS_##hr,           \
                            helpid, helpfile,               \
                            IID_I##ID, hr,                  \
                            _Module.GetModuleInstance())
#define E_INK_EXCEPTION                                MAKE_INK_ERROR(0x001)
#define E_INK_MISMATCHED_INK_OBJECT                    MAKE_INK_ERROR(0x002)
#define E_INK_COLLECTOR_BUSY                           MAKE_INK_ERROR(0x003)
#define E_INK_INCOMPATIBLE_OBJECT                      MAKE_INK_ERROR(0x004)
#define E_INK_WINDOW_NOT_SET                           MAKE_INK_ERROR(0x005)
#define E_INK_INVALID_MODE                             MAKE_INK_ERROR(0x006)
#define E_INK_COLLECTOR_ENABLED                        MAKE_INK_ERROR(0x007)
#define E_INK_NO_STROKES_TO_RECOGNIZE                  MAKE_INK_ERROR(0x008)
#define E_INK_EMPTY_RECOGNITION_RESULT                 MAKE_INK_ERROR(0x009)
#define E_INK_OVERLAPPING_INPUT_RECT                   MAKE_INK_ERROR(0x010)
#define TPC_E_INVALID_PACKET_DESCRIPTION      MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x233)
#define TPC_E_INSUFFICIENT_BUFFER             __HRESULT_FROM_WIN32(ERROR_INSUFFICIENT_BUFFER)
#define TPC_S_TRUNCATED                       MAKE_HRESULT(SEVERITY_SUCCESS, FACILITY_ITF, 0x252)
#define TPC_S_INTERRUPTED                     MAKE_HRESULT(SEVERITY_SUCCESS, FACILITY_ITF, 0x253)
#define TPC_S_NO_DATA_TO_PROCESS              MAKE_HRESULT(SEVERITY_SUCCESS, FACILITY_ITF, 0x254)
#endif
