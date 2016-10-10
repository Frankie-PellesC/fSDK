/*+@@file@@----------------------------------------------------------------*//*!
 \file		Iadmext.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul 16 18:31:52 2016
 \date		Modified on Sat Jul 16 18:31:52 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif
#ifndef __iadmext_h__
#define __iadmext_h__
#if __POCC__ >= 500
#pragma once
#endif
#include "unknwn.h"
#include "objidl.h"
#include "ocidl.h"
DEFINE_GUID(IID_IADMEXT, 0x51dfe970, 0xf6f2, 0x11d0, 0xb9, 0xbd, 0x0, 0xa0, 0xc9, 0x22, 0xe7, 0x50);
#define IISADMIN_EXTENSIONS_REG_KEYA			"SOFTWARE\\Microsoft\\InetStp\\Extensions"
#define IISADMIN_EXTENSIONS_REG_KEYW			L"SOFTWARE\\Microsoft\\InetStp\\Extensions"
#define IISADMIN_EXTENSIONS_REG_KEY				TEXT("SOFTWARE\\Microsoft\\InetStp\\Extensions")
#define IISADMIN_EXTENSIONS_CLSID_MD_KEYA		"LM/IISADMIN/EXTENSIONS/DCOMCLSIDS"
#define IISADMIN_EXTENSIONS_CLSID_MD_KEYW		L"LM/IISADMIN/EXTENSIONS/DCOMCLSIDS"
#define IISADMIN_EXTENSIONS_CLSID_MD_KEY		TEXT("LM/IISADMIN/EXTENSIONS/DCOMCLSIDS")
#define IISADMIN_EXTENSIONS_CLSID_MD_ID			MD_IISADMIN_EXTENSIONS
#ifndef __IADMEXT_INTERFACE_DEFINED__
#define __IADMEXT_INTERFACE_DEFINED__
extern const IID IID_IADMEXT;
#endif
#endif
