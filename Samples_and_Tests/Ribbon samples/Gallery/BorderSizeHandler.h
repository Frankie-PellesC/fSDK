/*+@@file@@----------------------------------------------------------------*//*!
 \file		BorderSizeHandler.h
 \par Description 
            Implements interface IUICommandHandler for Border Size gallery.
 \par  Status: 
 \par Project: 
 \date		Created  on Tue Nov  1 22:08:13 2016
 \date		Modified on Tue Nov  1 22:08:13 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#pragma once

#define MAX_RESOURCE_LENGTH     256
#include <uiribbon.h>

/*
 *    This is the command handler used by the Border Size gallery in this sample.
 *    IUICommandHandler should be returned by the application during command creation.
 */
typedef struct
{
	IUICommandHandler;
    LONG m_cRef;
} BorderSizeHandler;
HRESULT BorderSizeHandlerCreateInstance(IUICommandHandler **ppHandler);
