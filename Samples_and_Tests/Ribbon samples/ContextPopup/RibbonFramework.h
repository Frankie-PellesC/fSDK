/*+@@file@@----------------------------------------------------------------*//*!
 \file		RibbonFramework.h
 \par Description 
 \par  Status: 
 \par Project: 
 \date		Created  on Fri Oct 28 17:55:24 2016
 \date		Modified on Fri Oct 28 17:55:24 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/

/*
 *	RibbonFramework.h/c implements the initialization and tear down of ribbon framework.
 */

#pragma once
#include "Application.h"

extern IUIFramework   *g_pFramework;		// Reference to the Ribbon framework.
extern IUIApplication *g_pApplication;		// Reference to the Application object.

/*
 *	Methods to facilitate the initialization and destruction of the Ribbon framework.
 */
BOOL InitializeFramework(HWND hWnd);
void DestroyFramework(void);
