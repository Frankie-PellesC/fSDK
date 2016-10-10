/*+@@file@@----------------------------------------------------------------*//*!
 \file		FunctionDiscoveryError.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 10 19:29:22 2016
 \date		Modified on Sun Jul 10 19:29:22 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __FunctionDiscoveryError_h__
#define __FunctionDiscoveryError_h__
#if __POCC__ >= 500
#pragma once
#endif
#include <winerror.h>
#define E_FDPAIRING_NOCONNECTION        _HRESULT_TYPEDEF_(0x8FD00001L)
#define E_FDPAIRING_HWFAILURE           _HRESULT_TYPEDEF_(0x8FD00002L)
#define E_FDPAIRING_AUTHFAILURE         _HRESULT_TYPEDEF_(0x8FD00003L)
#define E_FDPAIRING_CONNECTTIMEOUT      _HRESULT_TYPEDEF_(0x8FD00004L)
#define E_FDPAIRING_TOOMANYCONNECTIONS  _HRESULT_TYPEDEF_(0x8FD00005L)
#define E_FDPAIRING_AUTHNOTALLOWED      _HRESULT_TYPEDEF_(0x8FD00006L)
#define E_FDPAIRING_IPBUSDISABLED       _HRESULT_TYPEDEF_(0x8FD00007L)
#define E_FDPAIRING_NOPROFILES          _HRESULT_TYPEDEF_(0x8FD00008L)
#endif
