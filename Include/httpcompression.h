/*+@@file@@----------------------------------------------------------------*//*!
 \file		httpcompression.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Jul 15 15:27:56 2016
 \date		Modified on Fri Jul 15 15:27:56 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _HTTP_COMPRESSION_H_
#define _HTTP_COMPRESSION_H_
#if __POCC__ >= 500
#pragma once
#endif
HRESULT WINAPI InitCompression(VOID);
VOID WINAPI DeInitCompression(VOID);
HRESULT WINAPI CreateCompression(PVOID *context, ULONG reserved);
HRESULT WINAPI Compress(PVOID context, CONST BYTE *input_buffer, LONG input_buffer_size, PBYTE output_buffer, LONG output_buffer_size, PLONG input_used, PLONG output_used, INT compression_level);
VOID WINAPI DestroyCompression(PVOID context);
HRESULT WINAPI ResetCompression(PVOID context);
#endif
