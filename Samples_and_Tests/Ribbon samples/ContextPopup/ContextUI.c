/*+@@file@@----------------------------------------------------------------*//*!
 \file		ContextUI.c
 \par Description 
 \par  Status: 
 \par Project: 
 \date		Created  on Fri Oct 28 17:37:11 2016
 \date		Modified on Fri Oct 28 17:37:11 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/

#include "ContextUI.h"
#include "RibbonFramework.h"

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		GetDisplayLocation
 \date		Created  on Fri Oct 28 17:37:29 2016
 \date		Modified on Fri Oct 28 17:37:29 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
void GetDisplayLocation(POINT *pt, HWND hWnd)
{
	if (pt->x == -1 && pt->y == -1)
	{
		HRESULT hr = E_FAIL;

		// Display the menu in the upper-left corner of the client area, below the ribbon.
		IUIRibbon *pRibbon;
		hr = g_pFramework->lpVtbl->GetView(g_pFramework, 0, &IID_IUIRibbon, (void **)&pRibbon);
		if (SUCCEEDED(hr))
		{
			UINT32 uRibbonHeight = 0;
			hr = pRibbon->lpVtbl->GetHeight(pRibbon, &uRibbonHeight);
			if (SUCCEEDED(hr))
			{
				pt->x = 0;
				pt->y = uRibbonHeight;
				ClientToScreen(hWnd, pt);
			}
			pRibbon->lpVtbl->Release(pRibbon);
		}
		if (FAILED(hr))
		{
			// Default to just the upper-right corner of the entire screen.
			pt->x = 0;
			pt->y = 0;
		}
	}
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		ShowContextualUI
 \details	Show contextual UI in the location indicated.
 \return	S_OK when actual UI is shown (including when both parts are 
            turned off), E_FAIL otherwise.
 \date		Created  on Fri Oct 28 17:37:34 2016
 \date		Modified on Fri Oct 28 17:54:44 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT ShowContextualUI(POINT *ptLocation, HWND hWnd)
{
	GetDisplayLocation(ptLocation, hWnd);

	HRESULT hr = E_FAIL;

	// The basic pattern of how to show Contextual UI in a specified location.
	IUIContextualUI *pContextualUI = NULL;
	if (SUCCEEDED(g_pFramework->lpVtbl->GetView(g_pFramework, ApplicationGetCurrentContext(g_pApplication), &IID_IUIContextualUI, (void **)(&pContextualUI))))
	{
		hr = pContextualUI->lpVtbl->ShowAtLocation(pContextualUI, ptLocation->x, ptLocation->y);
		pContextualUI->lpVtbl->Release(pContextualUI);
	}

	return hr;
}
