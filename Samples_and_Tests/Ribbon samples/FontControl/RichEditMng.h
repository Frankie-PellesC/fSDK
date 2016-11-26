/*+@@file@@----------------------------------------------------------------*//*!
 \file		RichEditMng.h
 \par Description 
            RichEditMng.h/c implement the utility functions that are used 
            for interacting with the RichEdit control.
 \par  Status: 
 \par Project: 
 \date		Created  on Tue Nov  1 23:01:18 2016
 \date		Modified on Tue Nov  1 23:01:18 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#pragma once

#include <UIRibbon.h>
#include <Richedit.h>

#define MAX_LOADSTRING 100

typedef struct
{
    HWND m_hwnd;						// Handle of the main window.
    HWND m_hWndEdit;					// Handle of the RichEdit control.
    CHARFORMAT2 m_charDefaultFormat;	// Default font to use in the RichEdit control.
    UINT m_uHeight;						// Height of the ribbon.
    HINSTANCE m_hInst;
} FCSampleAppRichEditManager;
FCSampleAppRichEditManager *FCSampleAppRichEditManagerCreate(HWND hWnd, HINSTANCE hInst);			// Create RichEdit object
HWND FCSampleAppRichEditManagerGetRichEditWnd(FCSampleAppRichEditManager * this); // Return RichEdit window handle.
HRESULT FCSampleAppRichEditManagerSetHeight(FCSampleAppRichEditManager * this, UINT uHeight);				// Set height of the ribbon.
HRESULT FCSampleAppRichEditManagerResize(FCSampleAppRichEditManager * this);								// Resize the RichEdit when height changes.
void FCSampleAppRichEditManagerSetValues(FCSampleAppRichEditManager * this, IPropertyStore *pps);			// Set values for font displayed in the selection.
void FCSampleAppRichEditManagerGetValues(FCSampleAppRichEditManager * this, IPropertyStore *pps);			// Get values for font displayed in the selection.
void FCSampleAppRichEditManagerSetPreviewValues(FCSampleAppRichEditManager * this, IPropertyStore *pps);	// Set preview font values.
void FCSampleAppRichEditManagerCancelPreview(FCSampleAppRichEditManager * this, IPropertyStore *pps);		// Cancel preview by reverting the values.
void FCSampleAppRichEditManagerShowSelection(FCSampleAppRichEditManager * this);							// Show the selection of text.
