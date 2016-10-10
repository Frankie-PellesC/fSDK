/*+@@file@@----------------------------------------------------------------*//*!
 \file		atacct.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul  2 18:28:37 2016
 \date		Modified on Sat Jul  2 18:28:37 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _ATACCT_H_
#define _ATACCT_H_
#if __POCC__ >= 500
#pragma once
#endif
STDAPI GetNetScheduleAccountInformation(LPCWSTR pwszServerName, DWORD ccAccount, WCHAR wszAccount[]);
STDAPI SetNetScheduleAccountInformation(LPCWSTR pwszServerName, LPCWSTR pwszAccount, LPCWSTR pwszPassword);

#endif
