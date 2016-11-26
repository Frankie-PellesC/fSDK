/*+@@file@@----------------------------------------------------------------*//*!
 \file		PropertySet.h
 \par Description 
            The implementation of IUISimplePropertySet.
            ItemsSource and Categories PKEYs and provides functions to set 
            only the properties required for each type of gallery contents.
 \par  Status: 
 \par Project: 
 \date		Created  on Tue Nov  1 22:16:45 2016
 \date		Modified on Tue Nov  1 22:16:45 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#pragma once

#define MAX_RESOURCE_LENGTH     256
#include <uiribbon.h>

typedef struct
{
	IUISimplePropertySet;
    WCHAR          m_wszLabel[MAX_RESOURCE_LENGTH];		// Used for items and categories.
    int            m_categoryId;						// Used for items, categories, and commands.
    IUIImage*      m_pimgItem;							// Used for items only.
    int            m_commandId;							// Used for commands only.
    UI_COMMANDTYPE m_commandType;						// Used for commands only.
    LONG m_cRef;
} PropertySet;
HRESULT PropertySetCreateInstance(IUISimplePropertySet **ppPropertySet);
void InitializeCommandProperties(IUISimplePropertySet *this, int categoryId, int commandId, UI_COMMANDTYPE commandType);
void InitializeItemProperties(IUISimplePropertySet *this, IUIImage *image, PCWSTR label, int categoryId);
void InitializeCategoryProperties(IUISimplePropertySet *this, PCWSTR label, int categoryId);
