/*+@@file@@----------------------------------------------------------------*//*!
 \file		naperror.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep 11 22:15:13 2016
 \date		Modified on Sun Sep 11 22:15:13 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef NAPERROR_H
#define NAPERROR_H
#if __POCC__ >= 500
#pragma once
#endif
#define FACILITY_NAP       0x27
#define NAP_E_INVALID_PACKET  _HRESULT_TYPEDEF_(0x80270001L)
#define NAP_E_MISSING_SOH     _HRESULT_TYPEDEF_(0x80270002L)
#define NAP_E_CONFLICTING_ID  _HRESULT_TYPEDEF_(0x80270003L)
#define NAP_E_NO_CACHED_SOH    _HRESULT_TYPEDEF_(0x80270004L)
#define NAP_E_STILL_BOUND      _HRESULT_TYPEDEF_(0x80270005L)
#define NAP_E_NOT_REGISTERED   _HRESULT_TYPEDEF_(0x80270006L)
#define NAP_E_NOT_INITIALIZED   _HRESULT_TYPEDEF_(0x80270007L)
#define NAP_E_MISMATCHED_ID   _HRESULT_TYPEDEF_(0x80270008L)
#define NAP_E_NOT_PENDING    _HRESULT_TYPEDEF_(0x80270009L)
#define NAP_E_ID_NOT_FOUND    _HRESULT_TYPEDEF_(0x8027000AL)
#define NAP_E_MAXSIZE_TOO_SMALL    _HRESULT_TYPEDEF_(0x8027000BL)
#define NAP_E_SERVICE_NOT_RUNNING    _HRESULT_TYPEDEF_(0x8027000CL)
#define NAP_S_CERT_ALREADY_PRESENT    _HRESULT_TYPEDEF_(0x0027000DL)
#define NAP_E_ENTITY_DISABLED    _HRESULT_TYPEDEF_(0x8027000EL)
#define NAP_E_NETSH_GROUPPOLICY_ERROR    _HRESULT_TYPEDEF_(0x8027000FL)
#define NAP_E_TOO_MANY_CALLS    _HRESULT_TYPEDEF_(0x80270010L)
#define NAP_E_SHV_CONFIG_EXISTED _HRESULT_TYPEDEF_(0x80270011L)
#define NAP_E_SHV_CONFIG_NOT_FOUND _HRESULT_TYPEDEF_(0x80270012L)
#define NAP_E_SHV_TIMEOUT _HRESULT_TYPEDEF_(0x80270013L)
#endif
