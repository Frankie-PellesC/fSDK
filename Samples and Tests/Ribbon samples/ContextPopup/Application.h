/*+@@file@@----------------------------------------------------------------*//*!
 \file		Application.h
 \par Description 
 \par  Status: 
 \par Project: 
 \date		Created  on Fri Oct 28 17:49:43 2016
 \date		Modified on Fri Oct 28 17:49:43 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/

#pragma once
#include <UIRibbon.h>
#include <propvarutil.h>
#include "CommandHandler.h"
#include "ids.h"

HRESULT ApplicationCreateInstance(IUIApplication** ppIUIApplication);
int     ApplicationGetCurrentContext(IUIApplication *this);
void    ApplicationSetCurrentContext(IUIApplication *this, int newContext);
