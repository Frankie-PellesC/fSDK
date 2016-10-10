/*+@@file@@----------------------------------------------------------------*//*!
 \file		FunctionDiscoveryNotification.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 10 19:37:07 2016
 \date		Modified on Sun Jul 10 19:37:07 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __FunctionDiscoveryNotification_h__
#define __FunctionDiscoveryNotification_h__
#if __POCC__ >= 500
#pragma once
#endif
typedef interface IFunctionDiscoveryNotification IFunctionDiscoveryNotification;
#define FD_EVENTID_PRIVATE          100
#define FD_EVENTID                  1000
#define FD_EVENTID_SEARCHCOMPLETE   FD_EVENTID
#define FD_EVENTID_ASYNCTHREADEXIT  FD_EVENTID + 1
#define FD_EVENTID_SEARCHSTART      FD_EVENTID + 2
#define FD_EVENTID_IPADDRESSCHANGE  FD_EVENTID + 3
#define FD_EVENTID_QUERYREFRESH     FD_EVENTID + 4
#endif
