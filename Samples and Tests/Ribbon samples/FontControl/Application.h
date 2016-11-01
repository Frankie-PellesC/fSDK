/*+@@file@@----------------------------------------------------------------*//*!
 \file		Application.h
 \par Description 
            Implements interface IUIApplication that defines methods 
            required to manage framework events.
 \par  Status: 
 \par Project: 
 \date		Created  on Tue Nov  1 22:45:57 2016
 \date		Modified on Tue Nov  1 22:45:57 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#pragma once

/*
 *    CApplication implements the IUIApplication interface which is required for any ribbon application.
 *    IUIApplication contains callbacks made by the ribbon framework to the application
 *    during various updates like command creation/destruction and view state changes.
 */

#include <UIRibbon.h>
#include "RichEditMng.h"

typedef struct
{
	IUIApplication;
    LONG m_cRef;                            // Reference count.
    IUICommandHandler * m_pCommandHandler;  // Generic Command Handler.
} Application;
HRESULT ApplicationCreateInstance(IUIApplication **ppApplication);
