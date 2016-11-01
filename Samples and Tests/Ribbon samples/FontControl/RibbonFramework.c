/*+@@file@@----------------------------------------------------------------*//*!
 \file		RibbonFramework.c
 \par Description 
            RibbonFrameword.h/c implements the initialization and tear down 
            of ribbon framework.
 \par  Status: 
 \par Project: 
 \date		Created  on Tue Nov  1 22:59:16 2016
 \date		Modified on Tue Nov  1 22:59:16 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#include "RibbonFramework.h"
#include "Application.h"
#include "RichEditMng.h"
#include "PropertyStore.h"

IUIFramework *g_pFramework = NULL;  // Reference to the Ribbon framework.
IUIApplication *g_pApplication = NULL;  // Reference to the Application object.

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
 \date		Created  on Tue Nov  1 23:00:13 2016
 \date		Modified on Tue Nov  1 23:00:13 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL InitializeFramework(HWND hWnd)
{
    // Here we instantiate the Ribbon framework object.
    HRESULT hr = CoCreateInstance(&CLSID_UIRibbonFramework, NULL, CLSCTX_INPROC_SERVER, &IID_IUIFramework, (void **)(&g_pFramework));
    if (FAILED(hr))
    {
        return FALSE;
    }   

    // Next, we create the application object (IUIApplication) and call the framework Initialize method, 
    // passing the application object and the host HWND that the Ribbon will attach itself to.
    hr = ApplicationCreateInstance(&g_pApplication);
    if (FAILED(hr))
    {
        return FALSE;
    } 

    hr = g_pFramework->lpVtbl->Initialize(g_pFramework, hWnd, g_pApplication);
    if (FAILED(hr))
    {
        return FALSE;
    }

    // Finally, we load the binary markup.  This will initiate callbacks to the IUIApplication object 
    // that was provided to the framework earlier, allowing command handlers to be bound to individual
    // commands.
    hr = g_pFramework->lpVtbl->LoadUI(g_pFramework, GetModuleHandle(NULL), L"FONTCONTROL_RIBBON");
    if (FAILED(hr))
    {
        return FALSE;
    }

    return TRUE;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		DestroyFramework
 \details	Tears down the Ribbon framework.
 \date		Created  on Tue Nov  1 23:00:47 2016
 \date		Modified on Tue Nov  1 23:00:47 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
void DestroyFramework(void)
{
    if (g_pFramework)
    {
        g_pFramework->lpVtbl->Destroy(g_pFramework);
        g_pFramework->lpVtbl->Release(g_pFramework);
        g_pFramework = NULL;
    }

    if (g_pApplication)
    {
        g_pApplication->lpVtbl->Release(g_pApplication);
        g_pApplication = NULL;
    }
}
