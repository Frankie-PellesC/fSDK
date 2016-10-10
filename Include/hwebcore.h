/*+@@file@@----------------------------------------------------------------*//*!
 \file		hwebcore.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Jul 15 18:32:17 2016
 \date		Modified on Fri Jul 15 18:32:17 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _HOSTABLE_WEB_CORE_H_
#define _HOSTABLE_WEB_CORE_H_
#if __POCC__ >= 500
#pragma once
#endif
#define WEB_CORE_DLL_NAME                L"hwebcore.dll"
#define WEB_CORE_ACTIVATE_DLL_ENTRY      "WebCoreActivate"
#define WEB_CORE_SHUTDOWN_DLL_ENTRY      "WebCoreShutdown"
typedef HRESULT(*PFN_WEB_CORE_ACTIVATE) (PCWSTR pszAppHostConfigFile, PCWSTR pszRootWebConfigFile, PCWSTR pszInstanceName);
typedef HRESULT(*PFN_WEB_CORE_SHUTDOWN) (DWORD fImmediate);
#endif
