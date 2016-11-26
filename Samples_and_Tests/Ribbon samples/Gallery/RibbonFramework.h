/*+@@file@@----------------------------------------------------------------*//*!
 \file		RibbonFramework.h
 \par Description 
            RibbonFrameword.h/cpp implements the initialization and tear 
            down of ribbon framework.
 \par  Status: 
 \par Project: 
 \date		Created  on Tue Nov  1 22:22:55 2016
 \date		Modified on Tue Nov  1 22:22:55 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#pragma once
#include <uiribbon.h>

extern IUIFramework* g_pFramework; // Reference to the ribbon framework.

/*
 *	Methods to setup and tear down the framework.
 */
BOOL InitializeFramework(HWND hWindowFrame);
void DestroyFramework(void);

UINT GetRibbonHeight(void);
