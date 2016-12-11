/*+@@file@@----------------------------------------------------------------*//*!
 \file		SafeHandles.h
 \par Description 
            Using handles as direct pointers to memory data is dangerous 
            because you can't determine easily if the value is correct and 
            safe to use.
            Safe handles use a mechanism that allows to identify each 
            handle and protectsdata memory.
 \par  Status: 
            Under development
 \par Project: 
            Safe handles
 \date		Created  on Sat Jan  3 00:36:19 2015
 \date		Modified on Sat Jan  3 00:36:19 2015
 \author	Frankie
\*//*-@@file@@----------------------------------------------------------------*/
#ifndef __SAFEHNDLCFG_H__
#define __SAFEHNDLCFG_H__
#pragma once

/*!
 *	Define processor bits and limits.
 */
#if defined(_WIN32) && !defined(_WIN64)		// For broken implementations or flying around defs...
#define SAFEHANDLEHDRSIZE			32
#define SAFEHANDLEMAXENTRYBITS		16
#define SAFEHANDLEMAXTYPEBITS		 8
#elif defined(_WIN64)
#define SAFEHANDLEHDRSIZE			64
#define SAFEHANDLEMAXENTRYBITS		32
#define SAFEHANDLEMAXTYPEBITS		16
#else
#error SafeHandles: Unknown Processor bits!
#endif

//Utility macros for messages
#define str(s) #s
#define xstr(s) str(s)

/*!
 *	SAFEHANDLEVERSION		Current version
 */
#define _SAFEHANDLEVERSION "SafeHandles Ver 1.03.01"
#define SAFEHANDLEVERSION	_SAFEHANDLEVERSION " [" xstr(SAFEHANDLEHDRSIZE) "bits]"

/*!
 *	SAFEHANDLEENTRIESBITS	Set to the number of bits to be used for table indexing.\n
 *							Max value is 16 for 32bits machines and 32 for 64 bits machines.
 */
//#define SAFEHANDLEENTRIESBITS 8

/*!
 *	SAFEHANDLETYPESBITS		Number of bits reserved for type hosting.\n
 *							You can reserve bits to identify type of handle in programs where different objects
 *							are referenced. Default compile don't use types.\n
 *							Max value 8 for 32bits machines and 16 for 64 bits machines.
 */
#define SAFEHANDLETYPESBITS 4

/*!
 *	SAFEHANDLEMEMSAFE		Define this variable to 1 to protect memory invalid access.\n
 *							Each generated handle will have the MSBit set. In this case using a safe handle
 *							to address memory will trigger a memory access exception.\n
 *							The cost is the loss of one bit on unique key.
 */
#define SAFEHANDLEMEMSAFE 1

/*!
 *	SAFEHANDLEDYNMEM		Define this variable to 1 to create table in dynamic memory.\n
 *							This is preferable when working with large tables.
 */
#define SAFEHANDLEDYNMEM 1

#define SH_WAITLOCKTIME		 20		//!< Defines the polling time for wait on locked handles.

#define _SHDEADSTEP			 30		//!< Defines how many entries have to be scanned for each poll of dead threads
#define _SHDEADSLEEP		250		//!< Defines polling time for dead threads. Each  _SHDEADSLEEP mS _SHDEADSTEP entries are scanned.

#endif	// __SAFEHNDLCFG_H__
