/*+@@file@@----------------------------------------------------------------*//*!
 \file		fastcall.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 10 16:34:25 2016
 \date		Modified on Sun Jul 10 16:34:25 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __fastcall_h__
#define __fastcall_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifdef WIN32
#if defined(FASTCALL_IN_STORE)
#define __FORCENONFASTCALL __stdcall
#else
#define __FORCENONFASTCALL
#endif
#endif
#ifdef WIN16
#if defined(FASTCALL_IN_STORE)
#define __FORCENONFASTCALL __cdecl
#else
#define __FORCENONFASTCALL
#endif
#endif
#endif
