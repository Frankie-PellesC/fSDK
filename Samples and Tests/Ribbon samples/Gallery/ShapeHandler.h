/*+@@file@@----------------------------------------------------------------*//*!
 \file		ShapeHandler.h
 \par Description 
            Implements interface IUICommandHandler used by the Shape 
            gallery.
 \par  Status: 
 \par Project: 
 \date		Created  on Tue Nov  1 22:24:20 2016
 \date		Modified on Tue Nov  1 22:24:20 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#pragma once

#define MAX_RESOURCE_LENGTH     256
#include <uiribbon.h>

/*
 *    This is the command handler used by the Shape gallery in this sample.
 *    IUICommandHandler should be returned by the application during command creation.
 */
typedef struct
{
	IUICommandHandler;
    IUIImageFromBitmap* m_pifbFactory;
    LONG m_cRef;
} ShapeHandler;
HRESULT ShapeHandlerCreateInstance(IUICommandHandler **ppHandler);
