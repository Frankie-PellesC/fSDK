/*+@@file@@----------------------------------------------------------------*//*!
 \file		msremote.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug 14 23:02:46 2016
 \date		Modified on Sun Aug 14 23:02:46 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef MSRemote_INCLUDED
#define MSRemote_INCLUDED
#if __POCC__ >= 500
#pragma once
#endif
#undef MSREMOTEDECLSPEC
#if __POCC__ >= 1100 && (!defined(SHx) || (defined(SHx) && __POCC__ >= 1200))
#define MSREMOTEDECLSPEC __declspec(selectany)
#else
#define MSREMOTEDECLSPEC 
#endif
#define MS_REMOTE_PROGID    "MS Remote"
#define MS_REMOTE_FILENAME  "MSDAREM.DLL"
#define MS_REMOTE_WPROGID    L"MS Remote"
#define MS_REMOTE_WFILENAME  L"MSDAREM.DLL"
extern const MSREMOTEDECLSPEC CLSID CLSID_MSRemote = { 0x27016870, 0x8e02, 0x11d1, { 0x92, 0x4e, 0x0, 0xc0, 0x4f, 0xbb, 0xbf, 0xb3 } };
extern const MSREMOTEDECLSPEC CLSID CLSID_MSRemoteSession = { 0x27016871, 0x8e02, 0x11d1, { 0x92, 0x4e, 0x0, 0xc0, 0x4f, 0xbb, 0xbf, 0xb3 } };
extern const MSREMOTEDECLSPEC CLSID CLSID_MSRemoteCommand = { 0x27016872, 0x8e02, 0x11d1, { 0x92, 0x4e, 0x0, 0xc0, 0x4f, 0xbb, 0xbf, 0xb3 } };
extern const MSREMOTEDECLSPEC char *PROGID_MSRemote = MS_REMOTE_PROGID;
extern const MSREMOTEDECLSPEC WCHAR *PROGID_WMSRemote = MS_REMOTE_WPROGID;
extern const MSREMOTEDECLSPEC char *PROGID_MSRemote_Version = MS_REMOTE_PROGID ".1";
extern const MSREMOTEDECLSPEC WCHAR *PROGID_WMSRemote_Version = MS_REMOTE_WPROGID L".1";
extern const MSREMOTEDECLSPEC GUID DBPROPSET_MSREMOTE_DBINIT = { 0x27016873, 0x8e02, 0x11d1, { 0x92, 0x4e, 0x0, 0xc0, 0x4f, 0xbb, 0xbf, 0xb3 } };
#define DBPROP_MSREMOTE_SERVER             2
#define DBPROP_MSREMOTE_PROVIDER           3
#define DBPROP_MSREMOTE_HANDLER            4
#define DBPROP_MSREMOTE_DFMODE             5
#define DBPROP_MSREMOTE_INTERNET_TIMEOUT   6
#define DBPROP_MSREMOTE_TRANSACT_UPDATES   7
#define DBPROP_MSREMOTE_COMMAND_PROPERTIES 8
extern const MSREMOTEDECLSPEC GUID DBPROPSET_MSREMOTE_DATASOURCE = { 0x27016874, 0x8e02, 0x11d1, { 0x92, 0x4e, 0x0, 0xc0, 0x4f, 0xbb, 0xbf, 0xb3 } };
#define DBPROP_MSREMOTE_CURRENT_DFMODE  2
#endif
