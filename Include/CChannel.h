/*+@@file@@----------------------------------------------------------------*//*!
 \file		CChannel.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul  2 23:49:47 2016
 \date		Modified on Sat Jul  2 23:49:47 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef H_CCHANNEL
#define H_CCHANNEL
#if __POCC__ >= 500
#pragma once
#endif
#include <pchannel.h>
#ifdef _WIN32
#define VCAPITYPE _stdcall
#define VCEXPORT
#else
#define VCAPITYPE CALLBACK
#define VCEXPORT  __export
#endif
typedef VOID VCAPITYPE CHANNEL_INIT_EVENT_FN(LPVOID pInitHandle, UINT event, LPVOID pData, UINT dataLength);
typedef CHANNEL_INIT_EVENT_FN FAR *PCHANNEL_INIT_EVENT_FN;
#define CHANNEL_EVENT_INITIALIZED       0
#define CHANNEL_EVENT_CONNECTED         1
#define CHANNEL_EVENT_V1_CONNECTED      2
#define CHANNEL_EVENT_DISCONNECTED      3
#define CHANNEL_EVENT_TERMINATED        4
typedef VOID VCAPITYPE CHANNEL_OPEN_EVENT_FN(DWORD openHandle, UINT event, LPVOID pData, UINT32 dataLength, UINT32 totalLength, UINT32 dataFlags);
typedef CHANNEL_OPEN_EVENT_FN FAR *PCHANNEL_OPEN_EVENT_FN;
#define CHANNEL_EVENT_DATA_RECEIVED     10
#define CHANNEL_EVENT_WRITE_COMPLETE    11
#define CHANNEL_EVENT_WRITE_CANCELLED   12
#define CHANNEL_RC_OK                             0
#define CHANNEL_RC_ALREADY_INITIALIZED            1
#define CHANNEL_RC_NOT_INITIALIZED                2
#define CHANNEL_RC_ALREADY_CONNECTED              3
#define CHANNEL_RC_NOT_CONNECTED                  4
#define CHANNEL_RC_TOO_MANY_CHANNELS              5
#define CHANNEL_RC_BAD_CHANNEL                    6
#define CHANNEL_RC_BAD_CHANNEL_HANDLE             7
#define CHANNEL_RC_NO_BUFFER                      8
#define CHANNEL_RC_BAD_INIT_HANDLE                9
#define CHANNEL_RC_NOT_OPEN                      10
#define CHANNEL_RC_BAD_PROC                      11
#define CHANNEL_RC_NO_MEMORY                     12
#define CHANNEL_RC_UNKNOWN_CHANNEL_NAME          13
#define CHANNEL_RC_ALREADY_OPEN                  14
#define CHANNEL_RC_NOT_IN_VIRTUALCHANNELENTRY    15
#define CHANNEL_RC_NULL_DATA                     16
#define CHANNEL_RC_ZERO_LENGTH                   17
#define VIRTUAL_CHANNEL_VERSION_WIN2000         1
typedef UINT VCAPITYPE VIRTUALCHANNELINIT(LPVOID FAR *ppInitHandle, PCHANNEL_DEF pChannel, INT channelCount, ULONG versionRequested, PCHANNEL_INIT_EVENT_FN pChannelInitEventProc);
typedef VIRTUALCHANNELINIT FAR *PVIRTUALCHANNELINIT;
typedef UINT VCAPITYPE VIRTUALCHANNELOPEN(LPVOID pInitHandle, LPDWORD pOpenHandle, PCHAR pChannelName, PCHANNEL_OPEN_EVENT_FN pChannelOpenEventProc);
typedef VIRTUALCHANNELOPEN FAR *PVIRTUALCHANNELOPEN;
typedef UINT VCAPITYPE VIRTUALCHANNELCLOSE(DWORD openHandle);
typedef VIRTUALCHANNELCLOSE FAR *PVIRTUALCHANNELCLOSE;
typedef UINT VCAPITYPE VIRTUALCHANNELWRITE(DWORD openHandle, LPVOID pData, ULONG dataLength, LPVOID pUserData);
typedef VIRTUALCHANNELWRITE FAR *PVIRTUALCHANNELWRITE;
typedef struct tagCHANNEL_ENTRY_POINTS
{
	DWORD cbSize;
	DWORD protocolVersion;
	PVIRTUALCHANNELINIT pVirtualChannelInit;
	PVIRTUALCHANNELOPEN pVirtualChannelOpen;
	PVIRTUALCHANNELCLOSE pVirtualChannelClose;
	PVIRTUALCHANNELWRITE pVirtualChannelWrite;
} CHANNEL_ENTRY_POINTS, FAR * PCHANNEL_ENTRY_POINTS;
typedef BOOL VCAPITYPE VIRTUALCHANNELENTRY(PCHANNEL_ENTRY_POINTS pEntryPoints);
typedef VIRTUALCHANNELENTRY FAR *PVIRTUALCHANNELENTRY;
#endif
