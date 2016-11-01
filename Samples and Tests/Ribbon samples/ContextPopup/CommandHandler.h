/*+@@file@@----------------------------------------------------------------*//*!
 \file		CommandHandler.h
 \par Description 
            Implements interface IUICommandHandler
 \par  Status: 
 \par Project: 
 \date		Created  on Sat Oct 29 18:06:06 2016
 \date		Modified on Sat Oct 29 18:06:06 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/

#pragma once
#include <UIRibbon.h>
#include <propvarutil.h>

#define ASSIGN_VTBL(s, class, iface)    (s)->lpVtbl = (iface##Vtbl *)(((char *)(s)) + sizeof(class))  
#define ALLOC_IFACE(s, class, iface)	s = malloc(sizeof(class)+sizeof(iface##Vtbl));	\
										if (s) ASSIGN_VTBL(s, class, iface);

HRESULT CommandHandlerCreateInstance(IUICommandHandler **ppCommandHandler);
