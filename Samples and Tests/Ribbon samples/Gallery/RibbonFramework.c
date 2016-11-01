/*+@@file@@----------------------------------------------------------------*//*!
 \file		RibbonFramework.c
 \par Description 
            RibbonFrameword.h/cpp implements the initialization and tear 
            down of ribbon framework.
 \par  Status: 
 \par Project: 
 \date		Created  on Tue Nov  1 22:23:38 2016
 \date		Modified on Tue Nov  1 22:23:38 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#include "RibbonFramework.h"
#include "Application.h"


IUIFramework* g_pFramework = NULL;

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		InitializeFramework
 \details	Initialize the Ribbon framework and bind a Ribbon to the 
            application.
            To get a Ribbon to display, the Ribbon framework must be 
            initialized.
            This involves three important steps:
              1) Instantiating the Ribbon framework object 
                 (CLSID_UIRibbonFramework).
              2) Passing the host HWND and IUIApplication object to the 
                 framework.
              3) Loading the binary markup compiled by UICC.exe.
 \date		Created  on Tue Nov  1 00:38:05 2016
 \date		Modified on Tue Nov  1 00:38:05 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL InitializeFramework(HWND hWindowFrame)
{
	/*
	 *	Here we instantiate the Ribbon framework object.
	 */
	HRESULT hr = CoCreateInstance(&CLSID_UIRibbonFramework, NULL, CLSCTX_INPROC_SERVER, &IID_IUIFramework, (void **)&g_pFramework);
	if (FAILED(hr))
	{
		return FALSE;
	}

	/*
	 *	Next, we create the application object (IUIApplication) and call the framework Initialize method, 
	 *	passing the application object and the host HWND that the Ribbon will attach itself to.
	 */
	IUIApplication *pApplication = NULL;
	hr = ApplicationCreateInstance(&pApplication, hWindowFrame);
	if (FAILED(hr))
	{
		return FALSE;
	}

	hr = g_pFramework->lpVtbl->Initialize(g_pFramework, hWindowFrame, pApplication);
	if (FAILED(hr))
	{
		pApplication->lpVtbl->Release(pApplication);
		return FALSE;
	}

	/*
	 *	Finally, we load the binary markup.
	 *	This will initiate callbacks to the IUIApplication object that was provided to the framework earlier,
	 *	allowing command handlers to be bound to individual commands.
	 */
	hr = g_pFramework->lpVtbl->LoadUI(g_pFramework, GetModuleHandle(NULL), L"APPLICATION_RIBBON");
	if (FAILED(hr))
	{
		pApplication->lpVtbl->Release(pApplication);
		return FALSE;
	}

	pApplication->lpVtbl->Release(pApplication);
	return TRUE;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		DestroyFramework
 \details	Tears down the Ribbon framework.
 \date		Created  on Tue Nov  1 00:46:39 2016
 \date		Modified on Tue Nov  1 00:46:39 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
void DestroyFramework(void)
{
	if (g_pFramework)
	{
		g_pFramework->lpVtbl->Destroy(g_pFramework);
		g_pFramework->lpVtbl->Release(g_pFramework);
		g_pFramework = NULL;
	}
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		GetRibbonHeight
 \details	Get the ribbon height.
 \date		Created  on Tue Nov  1 00:46:52 2016
 \date		Modified on Tue Nov  1 00:46:52 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
UINT GetRibbonHeight(void)
{
	UINT ribbonHeight = 0;
	if (g_pFramework)
	{
		IUIRibbon *pRibbon;
		g_pFramework->lpVtbl->GetView(g_pFramework, 0, &IID_IUIRibbon, (void **)&pRibbon);
		pRibbon->lpVtbl->GetHeight(pRibbon, &ribbonHeight);
		pRibbon->lpVtbl->Release(pRibbon);
	}
	return ribbonHeight;
}
