/*+@@file@@----------------------------------------------------------------*//*!
 \file		msiehost.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug 14 20:08:59 2016
 \date		Modified on Sun Aug 14 20:08:59 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _MSIEHOST_H
#define _MSIEHOST_H
#if __POCC__ >= 500
#pragma once
#endif
extern const GUID CGID_InternetExplorer;
#define IECMDID_CLEAR_AUTOCOMPLETE_FOR_FORMS                0
#define IECMDID_SETID_AUTOCOMPLETE_FOR_FORMS                1
#define IECMDID_BEFORENAVIGATE_GETSHELLBROWSE               2
#define IECMDID_BEFORENAVIGATE_DOEXTERNALBROWSE             3
#define IECMDID_BEFORENAVIGATE_GETIDLIST                    4
#define IECMDID_SET_INVOKE_DEFAULT_BROWSER_ON_NEW_WINDOW    5
#define IECMDID_GET_INVOKE_DEFAULT_BROWSER_ON_NEW_WINDOW    6
#define IECMDID_ARG_CLEAR_FORMS_ALL                         0
#define IECMDID_ARG_CLEAR_FORMS_ALL_BUT_PASSWORDS           1
#define IECMDID_ARG_CLEAR_FORMS_PASSWORDS_ONLY              2
#endif
