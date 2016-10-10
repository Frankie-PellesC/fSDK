/*+@@file@@----------------------------------------------------------------*//*!
 \file		Security.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep  4 00:00:56 2016
 \date		Modified on Sun Sep  4 00:00:56 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __SECURITY_H__
#define __SECURITY_H__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef NTLMSP_NAME_A
#define NTLMSP_NAME_A            "NTLM"
#define NTLMSP_NAME              L"NTLM"
#endif
#ifndef MICROSOFT_KERBEROS_NAME_A
#define MICROSOFT_KERBEROS_NAME_A   "Kerberos"
#define MICROSOFT_KERBEROS_NAME_W   L"Kerberos"
#ifdef WIN32_CHICAGO
#define MICROSOFT_KERBEROS_NAME MICROSOFT_KERBEROS_NAME_A
#else
#define MICROSOFT_KERBEROS_NAME MICROSOFT_KERBEROS_NAME_W
#endif
#endif
#ifndef NEGOSSP_NAME
#define NEGOSSP_NAME_W  L"Negotiate"
#define NEGOSSP_NAME_A  "Negotiate"
#ifdef UNICODE
#define NEGOSSP_NAME    NEGOSSP_NAME_W
#else
#define NEGOSSP_NAME    NEGOSSP_NAME_A
#endif
#endif
#include <sspi.h>
#if defined(SECURITY_WIN32) || defined(SECURITY_KERNEL)
#include <secext.h>
#endif
#if ISSP_LEVEL == 16
#include <issper16.h>
#endif
#endif
