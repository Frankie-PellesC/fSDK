/*+@@file@@----------------------------------------------------------------*//*!
 \file		Application.c
 \par Description 
 \par  Status: 
 \par Project: 
 \date		Created  on Sun Oct 30 21:31:07 2016
 \date		Modified on Sun Oct 30 21:31:07 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/

#include "Application.h"

//Prototype interface methods
static STDMETHODIMP QueryInterface(IUIApplication *this, REFIID iid, void** ppv);
static STDMETHODIMP_(ULONG) AddRef(IUIApplication *this);
static STDMETHODIMP_(ULONG) Release(IUIApplication *this);
static STDMETHODIMP OnCreateUICommand(IUIApplication *this, UINT nCmdID, UI_COMMANDTYPE typeID, IUICommandHandler **ppCommandHandler);
static STDMETHODIMP OnViewChanged(IUIApplication *this, UINT viewId, UI_VIEWTYPE typeId, IUnknown *pView, UI_VIEWVERB verb, INT uReasonCode);
static STDMETHODIMP OnDestroyUICommand(IUIApplication *this, UINT32 nCmdID, UI_COMMANDTYPE typeID, IUICommandHandler *commandHandler);

//! Our application object
typedef struct
{
	IUIApplication;
	LONG m_cRef;
	HWND m_hWnd;								// Window handler.
	IUICommandHandler *m_pButtonHandler;		// Button command handler.
	IUICommandHandler *m_pColorPickerHandler;	// Color picker command handler.
} Application;

// IUnknown methods.
/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		QueryInterface
 \date		Created  on Sun Oct 30 21:31:22 2016
 \date		Modified on Sun Oct 30 21:31:22 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static STDMETHODIMP QueryInterface(IUIApplication *this, REFIID iid, void** ppv)
{
    if (IsEqualIID(iid, __uuidof(IUnknown)))
    {
        *ppv = (IUnknown*)(this);
    }
    else if (IsEqualIID(iid, __uuidof(IUIApplication)))
    {
        *ppv = (IUIApplication*)(this);
    }
    else
    {
        *ppv = NULL;
        return E_NOINTERFACE;
    }

    AddRef(this);
    return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		AddRef
 \date		Created  on Sun Oct 30 21:31:29 2016
 \date		Modified on Sun Oct 30 21:31:29 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static STDMETHODIMP_(ULONG) AddRef(IUIApplication *this)
{
	Application *pApplication = (Application*)this;
    return InterlockedIncrement(&pApplication->m_cRef);
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		Release
 \date		Created  on Sun Oct 30 21:31:38 2016
 \date		Modified on Sun Oct 30 21:31:38 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static STDMETHODIMP_(ULONG) Release(IUIApplication *this)
{
	Application *pApplication = (Application*)this;

    LONG cRef = InterlockedDecrement(&pApplication->m_cRef);
    if (cRef == 0)
    {
        if (pApplication->m_pButtonHandler != NULL)
        {
            pApplication->m_pButtonHandler->lpVtbl->Release(pApplication->m_pButtonHandler);
        }
        if (pApplication->m_pColorPickerHandler != NULL)
        {
            pApplication->m_pColorPickerHandler->lpVtbl->Release(pApplication->m_pColorPickerHandler);
        }
		free(this);
    };
    return cRef;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		OnViewChanged
 \details	Called when the state of a View (Ribbon is a view) changes, for 
            example, created, destroyed, or resized.
 \date		Created  on Sun Oct 30 21:32:01 2016
 \date		Modified on Sun Oct 30 21:32:01 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static STDMETHODIMP OnViewChanged(IUIApplication *this, UINT32 nViewID, UI_VIEWTYPE typeID, IUnknown* pView, UI_VIEWVERB verb, INT32 uReasonCode)  
{
    UNREFERENCED_PARAMETER(nViewID);
    UNREFERENCED_PARAMETER(typeID);
    UNREFERENCED_PARAMETER(pView);
    UNREFERENCED_PARAMETER(verb);
    UNREFERENCED_PARAMETER(uReasonCode);
    InvalidateRect(((Application *)this)->m_hWnd, NULL, TRUE);

    return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		OnCreateUICommand
 \details	Called by the Ribbon framework for each command specified in 
            markup, to allow the host application to bind a command handler 
            to that command.
            In this SimpleRibbon sample, the same command handler is 
            returned for all commands specified in the ribbonmarkup.xml 
            file.
 \date		Created  on Sun Oct 30 21:32:31 2016
 \date		Modified on Sun Oct 30 21:32:46 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static STDMETHODIMP OnCreateUICommand(IUIApplication *this, UINT32 nCmdID, UI_COMMANDTYPE typeID, IUICommandHandler** ppCommandHandler) 
{ 
    UNREFERENCED_PARAMETER(typeID);

	Application *pApplication = (Application*)this;

    HRESULT hr = S_OK;

    switch(nCmdID)
    {
        case IDR_CMD_UPDATE:
        case IDR_CMD_CLEAR:
            // Create CommandHandler object.
            if (NULL == pApplication->m_pButtonHandler)
            {
                hr = ButtonHandlerCreateInstance(&pApplication->m_pButtonHandler);
                if (FAILED(hr))
                {
                    return hr;
                }
            }
            return pApplication->m_pButtonHandler->lpVtbl->QueryInterface(pApplication->m_pButtonHandler, __uuidof(IUICommandHandler), (void **)ppCommandHandler);
        case IDR_CMD_THEMEDDCP:
        case IDR_CMD_STANDARDDDCP:
        case IDR_CMD_HIGHLIGHTDDCP:
            // Create CommandHandler object.
            if (NULL == pApplication->m_pColorPickerHandler)
            {
                hr = ColorPickerHandlerCreateInstance(&pApplication->m_pColorPickerHandler);
                if (FAILED(hr))
                {
                    return hr;
                }
            }
            return pApplication->m_pColorPickerHandler->lpVtbl->QueryInterface(pApplication->m_pColorPickerHandler, __uuidof(IUICommandHandler), (void **)ppCommandHandler);
    }

    return hr;  
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		OnDestroyUICommand
 \details	Called by the Ribbon framework for each command at the time of 
            ribbon destruction.
 \date		Created  on Sun Oct 30 21:33:00 2016
 \date		Modified on Sun Oct 30 21:33:00 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static STDMETHODIMP OnDestroyUICommand(IUIApplication *this, UINT32 commandId, UI_COMMANDTYPE typeID, IUICommandHandler* pCommandHandler) 
{
    UNREFERENCED_PARAMETER(commandId);
    UNREFERENCED_PARAMETER(typeID);
    UNREFERENCED_PARAMETER(pCommandHandler);

    return E_NOTIMPL; 
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		ApplicationCreateInstance
 \details	Method to create an instance of Application object.
 \date		Created  on Sun Oct 30 21:33:37 2016
 \date		Modified on Sun Oct 30 21:33:37 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT ApplicationCreateInstance(IUIApplication** ppApplication, HWND hwnd)
{
    *ppApplication = NULL;

    Application* pApplication;
	ALLOC_IFACE(pApplication, Application, IUIApplication);
    if (pApplication != NULL)
    {
        pApplication->m_hWnd = hwnd;
        *ppApplication = (IUIApplication *)pApplication;        
    }
    else
    {
        return E_OUTOFMEMORY;
    }

	pApplication->lpVtbl->QueryInterface     = QueryInterface;
	pApplication->lpVtbl->AddRef             = AddRef;
	pApplication->lpVtbl->Release            = Release;
	pApplication->lpVtbl->OnViewChanged      = OnViewChanged;
	pApplication->lpVtbl->OnCreateUICommand  = OnCreateUICommand;
	pApplication->lpVtbl->OnDestroyUICommand = OnDestroyUICommand;

    pApplication->m_cRef                = 1;
    pApplication->m_pButtonHandler      = NULL;
    pApplication->m_pColorPickerHandler = NULL;

    return S_OK;
}
