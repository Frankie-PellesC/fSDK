/*+@@file@@----------------------------------------------------------------*//*!
 \file		WinResrc.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep  4 16:03:44 2016
 \date		Modified on Sun Sep  4 16:03:44 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _WINRESRC_
#define _WINRESRC_
#if __POCC__ >= 500
#pragma once
#endif
#ifndef WINVER
#define WINVER 0x0500
#endif
#ifndef _WIN32_IE
#define _WIN32_IE 0x0501
#endif
#ifndef _WIN32_WINDOWS
#define _WIN32_WINDOWS 0x0410
#endif
#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0500
#endif
#include <winuser.rh>
#include <commctrl.rh>
#include <dde.rh>
#include <winnt.rh>
#include <dlgs.h>
#include <winver.h>
#endif
