/*+@@file@@----------------------------------------------------------------*//*!
 \file		LMAPIbuf.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 17 23:22:54 2016
 \date		Modified on Sun Jul 17 23:22:54 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _LMAPIBUF_
#define _LMAPIBUF_
#if __POCC__ >= 500
#pragma once
#endif
NET_API_STATUS NET_API_FUNCTION NetApiBufferAllocate(DWORD ByteCount, LPVOID *Buffer);
NET_API_STATUS NET_API_FUNCTION NetApiBufferFree(LPVOID Buffer);
NET_API_STATUS NET_API_FUNCTION NetApiBufferReallocate(LPVOID OldBuffer, DWORD NewByteCount, LPVOID *NewBuffer);
NET_API_STATUS NET_API_FUNCTION NetApiBufferSize(LPVOID Buffer, LPDWORD ByteCount);
NET_API_STATUS NET_API_FUNCTION NetapipBufferAllocate(DWORD ByteCount, LPVOID *Buffer);
#endif
