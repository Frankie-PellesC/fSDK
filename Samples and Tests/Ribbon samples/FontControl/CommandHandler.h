/*+@@file@@----------------------------------------------------------------*//*!
 \file		CommandHandler.h
 \par Description 
            Implements interface IUICommandHandler.
 \par  Status: 
 \par Project: 
 \date		Created  on Tue Nov  1 22:47:24 2016
 \date		Modified on Tue Nov  1 22:47:24 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#pragma once

/*
 *    This is a generic command handler used by every command in this sample.
 *    IUICommandHandler should be returned by the application during command creation.
 *    For the purpose of this sample, it has a barebone implementation.
 *    Also the same command handler is returned for every command.
 */

#include <UIRibbon.h>
#include "RichEditMng.h"

typedef struct
{
	IUICommandHandler;
    LONG m_cRef;                        // Reference count.
} CommandHandler;
HRESULT CommandHandlerCreateInstance(IUICommandHandler **ppCommandHandler);
