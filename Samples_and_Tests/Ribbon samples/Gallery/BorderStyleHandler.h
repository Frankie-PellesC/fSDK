/*+@@file@@----------------------------------------------------------------*//*!
 \file		BorderStyleHandler.h
 \par Description 
            Implements interface IUICommandHandler for Border Style 
            gallery. 
 \par  Status: 
 \par Project: 
 \date		Created  on Tue Nov  1 22:09:56 2016
 \date		Modified on Tue Nov  1 22:09:56 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#pragma once

#define MAX_RESOURCE_LENGTH     256
#include <uiribbon.h>

/*
 *    This is the command handler used by the Border Style gallery in this sample.
 *    IUICommandHandler should be returned by the application during command creation.
 */
typedef struct
{
	IUICommandHandler;
    IUIImageFromBitmap* m_pifbFactory;
    LONG m_cRef;
} BorderStyleHandler;
HRESULT BorderStyleHandlerCreateInstance(IUICommandHandler **ppHandler);
