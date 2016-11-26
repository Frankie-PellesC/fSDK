/*+@@file@@----------------------------------------------------------------*//*!
 \file		RibbonFramework.h
 \par Description 
            RibbonFrameword.h/c implements the initialization and tear down 
            of ribbon framework.
 \par  Status: 
 \par Project: 
 \date		Created  on Tue Nov  1 22:58:46 2016
 \date		Modified on Tue Nov  1 22:58:46 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#pragma once

#include <UIRibbon.h>
#include "RichEditMng.h"

extern IUIFramework *g_pFramework;  // Reference to the Ribbon framework.
extern IUIApplication *g_pApplication;  // Reference to the Application object.
extern FCSampleAppRichEditManager *g_pFCSampleAppManager;       // Object to manage the RichEdit control.

// Methods to facilitate the initialization and destruction of the Ribbon framework.
BOOL InitializeFramework(HWND hWnd);
void DestroyFramework(void);
