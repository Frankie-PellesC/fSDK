/*+@@file@@----------------------------------------------------------------*//*!
 \file		Application.c
 \par Description 
 \par  Status: 
 \par Project: 
 \date		Created  on Sun Oct 30 22:22:57 2016
 \date		Modified on Sun Oct 30 22:22:57 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#include <UIRibbon.h>
#include "Application.h"
#include "CommandHandler.h"
#include "RibbonFramework.h"
#include "Common.h"
#pragma warn(disable:2231)

//Prototype interface methods
static STDMETHODIMP QueryInterface(IUIApplication *this, REFIID iid, void** ppv);
static STDMETHODIMP_(ULONG) AddRef(IUIApplication *this);
static STDMETHODIMP_(ULONG) Release(IUIApplication *this);
static STDMETHODIMP OnCreateUICommand(IUIApplication *this, UINT nCmdID, UI_COMMANDTYPE typeID, IUICommandHandler **ppCommandHandler);
static STDMETHODIMP OnViewChanged(IUIApplication *this, UINT viewId, UI_VIEWTYPE typeId, IUnknown *pView, UI_VIEWVERB verb, INT uReasonCode);
static STDMETHODIMP OnDestroyUICommand(IUIApplication *this, UINT32 nCmdID, UI_COMMANDTYPE typeID, IUICommandHandler *commandHandler);

// IUnknown method implementations.
/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		QueryInterface
 \date		Created  on Sun Oct 30 22:43:08 2016
 \date		Modified on Sun Oct 30 22:43:08 2016
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
 \date		Created  on Sun Oct 30 22:43:12 2016
 \date		Modified on Sun Oct 30 22:43:12 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static STDMETHODIMP_(ULONG) AddRef(IUIApplication *this)
{
	Application *pApplication = (Application*)this;
    return InterlockedIncrement(&pApplication->m_cRef);
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		Release
 \date		Created  on Sun Oct 30 22:43:22 2016
 \date		Modified on Sun Oct 30 22:43:22 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static STDMETHODIMP_(ULONG) Release(IUIApplication *this)
{
	Application *pApplication = (Application*)this;

    LONG cRef = InterlockedDecrement(&pApplication->m_cRef);
    if (cRef == 0)
    {
		free(this);
    };
    return cRef;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		OnCreateUICommand
 \details	Called by the Ribbon framework for each command specified in 
            markup, to allow the host application to bind a command handler 
            to that command.
 \date		Created  on Sun Oct 30 22:45:27 2016
 \date		Modified on Sun Oct 30 22:45:27 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static STDMETHODIMP OnCreateUICommand(IUIApplication *this, UINT nCmdID, UI_COMMANDTYPE typeID, IUICommandHandler **ppCommandHandler)
{
	UNREFERENCED_PARAMETER(typeID);
	UNREFERENCED_PARAMETER(nCmdID);

	Application* pApplication = (Application*)this;

	if (NULL == pApplication->m_pCommandHandler)
	{
	  HRESULT hr = CommandHandlerCreateInstance(&pApplication->m_pCommandHandler);
		if (FAILED(hr))
		{
			return hr;
		}
	}

	return pApplication->m_pCommandHandler->lpVtbl->QueryInterface(pApplication->m_pCommandHandler, &IID_IUICommandHandler, (void **)(ppCommandHandler));
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		OnViewChanged
 \details	Called when the state of a View (Ribbon is a view) changes, for 
            example, created, destroyed, or resized.
 \date		Created  on Sun Oct 30 22:45:46 2016
 \date		Modified on Sun Oct 30 22:45:46 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static STDMETHODIMP OnViewChanged(IUIApplication *this, UINT viewId, UI_VIEWTYPE typeId, IUnknown *pView, UI_VIEWVERB verb, INT uReasonCode)
{
	UNREFERENCED_PARAMETER(uReasonCode);
	UNREFERENCED_PARAMETER(viewId);

	HRESULT hr = E_NOTIMPL;

	// Checks to see if the view that was changed was a Ribbon view.
	if (UI_VIEWTYPE_RIBBON == typeId)
	{
		switch (verb)
		{
				// The view was newly created.
			case UI_VIEWVERB_CREATE:
				hr = S_OK;
				break;

			// The view has been resized.  For the Ribbon view, the application should
			// call GetHeight to determine the height of the ribbon.
			case UI_VIEWVERB_SIZE:
			{
				IUIRibbon *pRibbon = NULL;
				UINT uRibbonHeight;

				hr = pView->lpVtbl->QueryInterface(pView, &IID_IUIRibbon, (void **)(&pRibbon));
				if (SUCCEEDED(hr))
				{
					// Call to the framework to determine the height of the Ribbon.
					hr = pRibbon->lpVtbl->GetHeight(pRibbon, &uRibbonHeight);
					if (SUCCEEDED(hr))
					{
						// Set the height of the ribbon so RichEdit control can resize itself.
						hr = FCSampleAppRichEditManagerSetHeight(g_pFCSampleAppManager, uRibbonHeight);
					}

					pRibbon->lpVtbl->Release(pRibbon);
					// Use the ribbon height to position controls in the client area of the window.
				}
			}
				break;
			// The view was destroyed.
			case UI_VIEWVERB_DESTROY:
				hr = S_OK;
				break;
		}
	}

	return hr;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		OnDestroyUICommand
 \details	Called by the Ribbon framework for each command at the time of 
            ribbon destruction.
 \date		Created  on Sun Oct 30 22:46:14 2016
 \date		Modified on Sun Oct 30 22:46:14 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static STDMETHODIMP OnDestroyUICommand(IUIApplication *this, UINT32 nCmdID, UI_COMMANDTYPE typeID, IUICommandHandler *commandHandler)
{
	UNREFERENCED_PARAMETER(commandHandler);
	UNREFERENCED_PARAMETER(typeID);
	UNREFERENCED_PARAMETER(nCmdID);

	return E_NOTIMPL;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		ApplicationCreateInstance
 \details	Method to create an instance of the Application object.
 \date		Created  on Sun Oct 30 22:24:09 2016
 \date		Modified on Sun Oct 30 22:24:09 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT ApplicationCreateInstance(IUIApplication **ppApplication)
{
    if (!ppApplication)
    {
        return E_POINTER;
    }

    *ppApplication = NULL;

    HRESULT hr = S_OK;
   
    Application* pApplication;
	ALLOC_IFACE(pApplication, Application, IUIApplication);

    if (pApplication != NULL)
    {
		pApplication->lpVtbl->QueryInterface     = QueryInterface;
		pApplication->lpVtbl->AddRef             = AddRef;
		pApplication->lpVtbl->Release            = Release;
		pApplication->lpVtbl->OnViewChanged      = OnViewChanged;
		pApplication->lpVtbl->OnCreateUICommand  = OnCreateUICommand;
		pApplication->lpVtbl->OnDestroyUICommand = OnDestroyUICommand;

		pApplication->m_cRef            = 1;
        pApplication->m_pCommandHandler = NULL;
        *ppApplication = (IUIApplication *)(pApplication);
    }
    else
    {
        hr = E_OUTOFMEMORY;
    }

    return hr;
}
