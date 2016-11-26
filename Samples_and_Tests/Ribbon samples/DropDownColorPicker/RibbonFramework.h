/*+@@file@@----------------------------------------------------------------*//*!
 \file		RibbonFramework.h
 \par Description 
 \par  Status: 
 \par Project: 
 \date		Created  on Sun Oct 30 21:53:58 2016
 \date		Modified on Sun Oct 30 21:53:58 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#pragma once

#include "Application.h"

extern IUIFramework   *g_pFramework;	// Reference to the Ribbon framework.
extern IUIApplication *g_pApplication;	// Reference to the Application object.

// Methods to facilitate the initialization and destruction of the Ribbon framework.
BOOL InitializeFramework(HWND hWnd);
void DestroyFramework(void);
HRESULT GetRibbonHeight(UINT* ribbonHeight);
