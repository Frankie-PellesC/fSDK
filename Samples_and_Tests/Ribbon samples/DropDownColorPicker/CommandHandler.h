/*+@@file@@----------------------------------------------------------------*//*!
 \file		CommandHandler.h
 \par Description 
 \par  Status: 
 \par Project: 
 \date		Created  on Sun Oct 30 21:46:52 2016
 \date		Modified on Sun Oct 30 21:46:52 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#pragma once

#include <UIRibbon.h>
#include "Renderer.h"

#define ASSIGN_VTBL(s, class, iface)    (s)->lpVtbl = (iface##Vtbl *)(((char *)(s)) + sizeof(class))  
#define ALLOC_IFACE(s, class, iface)	s = malloc(sizeof(class)+sizeof(iface##Vtbl));	\
										if (s) ASSIGN_VTBL(s, class, iface);

extern Renderer      g_renderer;
extern IUIFramework* g_pFramework;

/*
 *	ColorPickerHandler : IUICommandHandler
 *
 *	PURPOSE: Implements interface IUICommandHandler. 
 *
 *	This is a command handler used by color picker in this sample.
 *	IUICommandHandler should be returned by the application during command creation.
 */
typedef struct
{
	IUICommandHandler;
    LONG m_cRef;
    BOOL m_fInitialized;
} ColorPickerHandler;
HRESULT ColorPickerHandlerCreateInstance(IUICommandHandler **ppCommandHandler);

/*
 *	ButtonHandler : IUICommandHandler
 *
 *	PURPOSE: Implements interface IUICommandHandler. 
 *
 *	This is a command handler used by button commands in this sample.
 *	IUICommandHandler should be returned by the application during command creation.
 */
typedef struct
{
	IUICommandHandler;
    LONG m_cRef;
} ButtonHandler;
HRESULT ButtonHandlerCreateInstance(IUICommandHandler **ppCommandHandler);
