/*+@@file@@----------------------------------------------------------------*//*!
 \file		IDispIds.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul 16 20:19:35 2016
 \date		Modified on Sat Jul 16 20:19:35 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __IDispIds_h__
#define __IDispIds_h__
#if __POCC__ >= 500
#pragma once
#endif
#define DISPID_READYSTATE                             (-525)
#define DISPID_READYSTATECHANGE                       (-609)
#define DISPID_AMBIENT_TRANSFERPRIORITY               (-728)
#define DISPID_AMBIENT_OFFLINEIFNOTCONNECTED          (-5501)
#define DISPID_AMBIENT_SILENT                         (-5502)
#ifndef DISPID_AMBIENT_CODEPAGE
#define DISPID_AMBIENT_CODEPAGE         (-725)
#define DISPID_AMBIENT_CHARSET          (-727)
#endif
#endif
