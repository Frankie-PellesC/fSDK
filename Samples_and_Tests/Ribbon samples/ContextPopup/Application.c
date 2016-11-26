/*+@@file@@----------------------------------------------------------------*//*!
 \file		Application.c
 \par Description 
            Implements interface IUIApplication that defines methods 
            required to manage Framework events.
 \par  Status: 
 \par Project: 
 \date		Created  on Sat Oct 29 17:37:25 2016
 \date		Modified on Sat Oct 29 17:37:25 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#include <UIRibbon.h>
#include <propvarutil.h>
#include "CommandHandler.h"
#include "Application.h"
#include "RibbonFramework.h"

#pragma warn (disable:2231)

//Prototype interface methods
static STDMETHODIMP QueryInterface(IUIApplication *this, REFIID iid, void** ppv);
static STDMETHODIMP_(ULONG) AddRef(IUIApplication *this);
static STDMETHODIMP_(ULONG) Release(IUIApplication *this);
static STDMETHODIMP OnCreateUICommand(IUIApplication *this, UINT nCmdID, UI_COMMANDTYPE typeID, IUICommandHandler **ppCommandHandler);
static STDMETHODIMP OnViewChanged(IUIApplication *this, UINT viewId, UI_VIEWTYPE typeId, IUnknown *pView, UI_VIEWVERB verb, INT uReasonCode);
static STDMETHODIMP OnDestroyUICommand(IUIApplication *this, UINT32 nCmdID, UI_COMMANDTYPE typeID, IUICommandHandler *commandHandler);

/*!
 *	Application implements the IUIApplication interface which is required for any
 *	ribbon application.
 *	IUIApplication contains callbacks made by the ribbon framework to the application
 *	during various updates like command creation/destruction and view state changes.
 */
typedef struct
{
	IUIApplication;
    int m_iCurrentContext;
    IUICommandHandler* m_pCommandHandler; // Generic Command Handler.
    LONG m_cRef;
} Application;

/*
 *	IUnknown methods.
 */

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		QueryInterface
 \date		Created  on Thu Oct 27 17:36:38 2016
 \date		Modified on Thu Oct 27 17:36:42 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static STDMETHODIMP QueryInterface(IUIApplication *this, REFIID iid, void** ppv)
{
    if (!memcmp(iid, __uuidof(IUnknown), sizeof(*iid)))
    {
        *ppv = (IUnknown*)(this);
    }
    else if (!memcmp(iid, __uuidof(IUIApplication), sizeof(*iid)))
    {
        *ppv = this;
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
 \date		Created  on Thu Oct 27 17:36:38 2016
 \date		Modified on Thu Oct 27 17:36:42 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static STDMETHODIMP_(ULONG) AddRef(IUIApplication *this)
{
	Application *pCApplication = (Application*)this;
    return InterlockedIncrement(&pCApplication->m_cRef);
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		Release
 \date		Created  on Thu Oct 27 17:36:38 2016
 \date		Modified on Thu Oct 27 17:36:42 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static STDMETHODIMP_(ULONG) Release(IUIApplication *this)
{
	Application *pCApplication = (Application*)this;

    LONG cRef = InterlockedDecrement(&pCApplication->m_cRef);
    if (cRef == 0)
    {
        if (pCApplication->m_pCommandHandler != NULL)
        {
            pCApplication->m_pCommandHandler->lpVtbl->Release((IUICommandHandler *)pCApplication->m_pCommandHandler);
        }
        free(this);
    }

    return cRef;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		OnCreateUICommand
 \details	Called by the Ribbon framework for each command specified in 
            markup, to allow the host application to bind a command handler 
            to that command.
            In this sample, the same command handler is returned for all 
            commands specified in the ContextPopup.xml file.
 \date		Created  on Fri Oct 28 17:30:23 2016
 \date		Modified on Fri Oct 28 17:30:23 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static STDMETHODIMP OnCreateUICommand(IUIApplication *this, UINT nCmdID, UI_COMMANDTYPE typeID, IUICommandHandler **ppCommandHandler)
{
	UNREFERENCED_PARAMETER(typeID);
	UNREFERENCED_PARAMETER(nCmdID);

	Application *pCApplication = (Application*)this;

	HRESULT hr = S_OK;

	if (NULL == pCApplication->m_pCommandHandler)
	{
	  hr = CommandHandlerCreateInstance(&pCApplication->m_pCommandHandler);
		if (FAILED(hr))
		{
			return hr;
		}
	}

	return pCApplication->m_pCommandHandler->lpVtbl->QueryInterface((IUICommandHandler *)pCApplication->m_pCommandHandler, &IID_IUICommandHandler, (void **)ppCommandHandler);
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		OnViewChanged
 \details	Called when the state of a View (Ribbon is a view) changes, for 
            example, created, destroyed, or resized.
 \date		Created  on Fri Oct 28 17:30:50 2016
 \date		Modified on Fri Oct 28 17:30:50 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static STDMETHODIMP OnViewChanged(IUIApplication *this, UINT viewId, UI_VIEWTYPE typeId, IUnknown *pView, UI_VIEWVERB verb, INT uReasonCode)
{
	UNREFERENCED_PARAMETER(viewId);
	UNREFERENCED_PARAMETER(uReasonCode);

	HRESULT hr = E_NOTIMPL;

	// Checks to see if the view that was changed was a Ribbon view.
	if (UI_VIEWTYPE_RIBBON == typeId)
	{
		switch (verb)
		{
				// The view was newly created.
			case UI_VIEWVERB_CREATE:
			{
				hr = S_OK;
				break;
			}
			// The view has been resized.  For the Ribbon view, the application should
			// call GetHeight to determine the height of the ribbon.
			case UI_VIEWVERB_SIZE:
			{
				IUIRibbon *pRibbon = NULL;
				UINT uRibbonHeight;
				// Call to the framework to determine the desired height of the Ribbon.
				hr = pView->lpVtbl->QueryInterface(pView, &IID_IUIRibbon, (void **)(&pRibbon));
				if (SUCCEEDED(hr))
				{
					hr = pRibbon->lpVtbl->GetHeight(pRibbon, &uRibbonHeight);
					pRibbon->lpVtbl->Release(pRibbon);
				}
				break;
			}
			// The view was destroyed.
			case UI_VIEWVERB_DESTROY:
			{
				hr = S_OK;
				break;
			}
		}
	}
	return hr;
}


/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		OnDestroyUICommand
 \details	Called by the Ribbon framework for each command at the time of 
            ribbon destruction.
 \date		Created  on Fri Oct 28 17:31:09 2016
 \date		Modified on Fri Oct 28 17:31:09 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static STDMETHODIMP OnDestroyUICommand(IUIApplication *this, UINT32 nCmdID, UI_COMMANDTYPE typeID, IUICommandHandler *commandHandler)
{
	UNREFERENCED_PARAMETER(nCmdID);
	UNREFERENCED_PARAMETER(typeID);
	UNREFERENCED_PARAMETER(commandHandler);

	return E_NOTIMPL;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		ApplicationetCurrentContext
 \date		Created  on Thu Oct 27 18:05:19 2016
 \date		Modified on Thu Oct 27 18:05:19 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
int ApplicationGetCurrentContext(IUIApplication *this)
{
	return ((Application*)(this))->m_iCurrentContext;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		ApplicationSetCurrentContext
 \date		Created  on Thu Oct 27 18:05:23 2016
 \date		Modified on Thu Oct 27 18:05:23 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
void ApplicationSetCurrentContext(IUIApplication *this, int newContext)
{
	((Application*)(this))->m_iCurrentContext = newContext;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		ApplicationCreateInstance
 \date		Created  on Thu Oct 27 17:36:38 2016
 \date		Modified on Thu Oct 27 17:36:42 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT ApplicationCreateInstance(IUIApplication** ppApplication)
{
    if (!ppApplication)
    {
        return E_POINTER;
    }

    *ppApplication = NULL;
    HRESULT hr = E_FAIL;

    Application* pApplication;
	ALLOC_IFACE(pApplication, Application, IUIApplication);
    if (pApplication != NULL)
    {
        *ppApplication = (IUIApplication *)pApplication;
        hr = S_OK;

		pApplication->lpVtbl->QueryInterface     = QueryInterface;
		pApplication->lpVtbl->AddRef             = AddRef;
		pApplication->lpVtbl->Release            = Release;
		pApplication->lpVtbl->OnViewChanged      = OnViewChanged;
		pApplication->lpVtbl->OnCreateUICommand  = OnCreateUICommand;
		pApplication->lpVtbl->OnDestroyUICommand = OnDestroyUICommand;

	    pApplication->m_cRef                     = 1;
	    pApplication->m_iCurrentContext          = IDC_CMD_CONTEXTMAP1;
	    pApplication->m_pCommandHandler          = NULL;
    }
    else
    {
        hr = E_OUTOFMEMORY;
    }

    return hr;
}
