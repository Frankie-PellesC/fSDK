/*+@@file@@----------------------------------------------------------------*//*!
 \file		RibbonFramework.c
 \par Description 
            RibbonFramework.h/c implements the initialization and tear down 
            of ribbon framework.
 \par  Status: 
 \par Project: 
 \date		Created  on Sat Oct 29 17:47:30 2016
 \date		Modified on Sat Oct 29 17:47:30 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/

#include <assert.h>
#include "RibbonFramework.h"

IUIFramework   *g_pFramework   = NULL;		// Reference to the Ribbon framework.
IUIApplication *g_pApplication = NULL;		// Reference to the Application object.

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
 \date		Created  on Fri Oct 28 17:39:01 2016
 \date		Modified on Fri Oct 28 17:39:01 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL InitializeFramework(HWND hWnd)
{
	// Here we instantiate the Ribbon framework object.
	HRESULT hr = CoCreateInstance(&CLSID_UIRibbonFramework, NULL, CLSCTX_INPROC_SERVER, &IID_IUIFramework, (void **)(&g_pFramework));
	if (FAILED(hr))
	{
		return FALSE;
	}

	// Next, we create the application object and call the framework Initialize method.
	hr = ApplicationCreateInstance(&g_pApplication);
	if (FAILED(hr))
	{
		return FALSE;
	}

	IUIApplication *pApplication = NULL;
	assert(g_pApplication != NULL);
	hr = g_pApplication->lpVtbl->QueryInterface((IUIApplication *)g_pApplication, &IID_IUIApplication, (void **)(&pApplication));
	if (SUCCEEDED(hr))
	{
		// Passing the application object and the host HWND that the Ribbon will attach itself to.
		hr = g_pFramework->lpVtbl->Initialize(g_pFramework, hWnd, pApplication);
		pApplication->lpVtbl->Release(pApplication);
	}
	if (FAILED(hr))
	{
		return FALSE;
	}

	// Finally, we load the binary markup.  This will initiate callbacks to the IUIApplication object 
	// that was provided to the framework earlier, allowing command handlers to be bound to individual
	// commands.
	hr = g_pFramework->lpVtbl->LoadUI(g_pFramework, GetModuleHandle(NULL), L"CONTEXTPOPUP_RIBBON");
	if (FAILED(hr))
	{
		return FALSE;
	}

	return TRUE;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		DestroyFramework
 \details	Tears down the Ribbon framework.
 \date		Created  on Fri Oct 28 17:39:49 2016
 \date		Modified on Fri Oct 28 17:39:49 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
void DestroyFramework(void)
{
	if (g_pFramework)
	{
		HRESULT hr = g_pFramework->lpVtbl->Destroy(g_pFramework);
		UNREFERENCED_PARAMETER(hr);
		g_pFramework->lpVtbl->Release(g_pFramework);
		g_pFramework = NULL;
	}

	if (g_pApplication)
	{
		g_pApplication->lpVtbl->Release((IUIApplication *)g_pApplication);
		g_pApplication = NULL;
	}
}
