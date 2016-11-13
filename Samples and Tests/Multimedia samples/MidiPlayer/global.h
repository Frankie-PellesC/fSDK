/*+@@file@@----------------------------------------------------------------*//*!
 \file		global.h
 \par Description 
            
 \par  Status: 
            
 \par Project: 
            
 \date		Created  on Sun Nov 13 13:29:26 2016
 \date		Modified on Sun Nov 13 13:29:26 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/

/*****************************************************************************
 *
 * Global.H
 *
 * #define's everybody needs
 *
 *****************************************************************************/

#ifndef _GLOBAL_
#define _GLOBAL_

/* Allow visibility of static functions for debug
 */
#ifdef DEBUG
#define  PUBLIC
#define  PRIVATE
#else
#define  PUBLIC
#define  PRIVATE                static
#endif

#endif
