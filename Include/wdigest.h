/*+@@file@@----------------------------------------------------------------*//*!
 \file		wdigest.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 00:17:48 2016
 \date		Modified on Mon Sep 19 00:17:48 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __WDIGEST_H__
#define __WDIGEST_H__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef WDIGEST_SP_NAME_A
#define WDIGEST_SP_NAME_A	"WDigest"
#define WDIGEST_SP_NAME_W	L"WDigest"
#ifdef UNICODE
#define WDIGEST_SP_NAME		WDIGEST_SP_NAME_W
#else
#define WDIGEST_SP_NAME		WDIGEST_SP_NAME_A
#endif
#endif
#endif
