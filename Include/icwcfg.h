/*+@@file@@----------------------------------------------------------------*//*!
 \file		icwcfg.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul 16 19:44:09 2016
 \date		Modified on Sat Jul 16 19:44:09 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _ICWCFG_H_
#define _ICWCFG_H_
#if __POCC__ >= 500
#pragma once
#endif
#define ICW_REGPATHSETTINGS	"Software\\Microsoft\\Internet Connection Wizard"
#define ICW_REGKEYCOMPLETED	"Completed"
#define ICW_MAX_ACCTNAME	256
#define ICW_MAX_PASSWORD	256
#define ICW_MAX_LOGONNAME	256
#define ICW_MAX_SERVERNAME	64
#define ICW_MAX_RASNAME		256
#define ICW_MAX_EMAILNAME	64
#define ICW_MAX_EMAILADDR	128
#define ICW_CHECKSTATUS		0x0001
#define ICW_LAUNCHFULL		0x0100
#define ICW_LAUNCHMANUAL	0x0200
#define ICW_USE_SHELLNEXT	0x0400
#define ICW_FULL_SMARTSTART	0x0800
#define ICW_FULLPRESENT		0x0001
#define ICW_MANUALPRESENT	0x0002
#define ICW_ALREADYRUN		0x0004
#define ICW_LAUNCHEDFULL	0x0100
#define ICW_LAUNCHEDMANUAL	0x0200
#define ICW_USEDEFAULTS		0x0001
typedef DWORD	(WINAPI *PFNCHECKCONNECTIONWIZARD) (DWORD, LPDWORD);
typedef DWORD	(WINAPI *PFNSETSHELLNEXT) (PSTR);
DWORD WINAPI CheckConnectionWizard(DWORD, LPDWORD);
DWORD WINAPI SetShellNext(PSTR szShellNext);
#endif
