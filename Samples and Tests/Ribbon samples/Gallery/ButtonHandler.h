/*+@@file@@----------------------------------------------------------------*//*!
 \file		ButtonHandler.h
 \par Description 
            Implements interface IUICommandHandler for the buttons in the 
            Size and Color gallery.
 \par  Status: 
 \par Project: 
 \date		Created  on Tue Nov  1 22:12:03 2016
 \date		Modified on Tue Nov  1 22:12:03 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#pragma once
#include <uiribbon.h>

/*
 *    This is the command handler for the buttons in the Size and Color gallery in this sample.
 *    IUICommandHandler should be returned by the application during command creation.
 */
typedef struct
{
	IUICommandHandler;
    LONG m_cRef;
} ButtonHandler;
HRESULT ButtonHandlerCreateInstance(IUICommandHandler **ppHandler);
