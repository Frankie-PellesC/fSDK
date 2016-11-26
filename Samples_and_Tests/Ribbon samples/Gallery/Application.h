/*+@@file@@----------------------------------------------------------------*//*!
 \file		Application.h
 \par Description 
            Implements interface IUIApplication that defines methods 
            required to manage Framework events.
 \par  Status: 
 \par Project: 
 \date		Created  on Tue Nov  1 22:04:41 2016
 \date		Modified on Tue Nov  1 22:04:41 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#pragma once

#include <uiribbon.h>

/*
 *    CApplication implements the IUIApplication interface which is required for any ribbon application.
 *    IUIApplication contains callbacks made by the ribbon framework to the application
 *    during various updates like command creation/destruction and view state changes.
 */
typedef struct
{
	IUIApplication;
    LONG m_cRef;
    HWND m_hwnd;
} Application;
HRESULT ApplicationCreateInstance(IUIApplication **ppHandler, HWND hwnd);
