/*+@@file@@----------------------------------------------------------------*//*!
 \file		Application.c
 \par Description 
            Implements interface IUIApplication that defines methods 
            required to manage Framework events.
 \par  Status: 
 \par Project: 
 \date		Created  on Tue Nov  1 22:05:09 2016
 \date		Modified on Tue Nov  1 22:05:09 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#include "Application.h"
#include "BorderSizeHandler.h"
#include "BorderStyleHandler.h"
#include "ButtonHandler.h"
#include "LayoutHandler.h"
#include "ShapeHandler.h"
#include "SizeAndColorHandler.h"
#include "ids.h"
#include "Common.h"

#pragma warn(disable:2231)

//Prototype interface methods
static STDMETHODIMP QueryInterface(IUIApplication *this, REFIID iid, void** ppv);
static STDMETHODIMP_(ULONG) AddRef(IUIApplication *this);
static STDMETHODIMP_(ULONG) Release(IUIApplication *this);
static STDMETHODIMP OnCreateUICommand(IUIApplication *this, UINT nCmdID, UI_COMMANDTYPE typeID, IUICommandHandler **ppCommandHandler);
static STDMETHODIMP OnViewChanged(IUIApplication *this, UINT viewId, UI_VIEWTYPE typeId, IUnknown *pView, UI_VIEWVERB verb, INT uReasonCode);
static STDMETHODIMP OnDestroyUICommand(IUIApplication *this, UINT32 nCmdID, UI_COMMANDTYPE typeID, IUICommandHandler *commandHandler);

// IUnknown methods.
/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		QueryInterface
 \date		Created  on Tue Nov  1 01:59:55 2016
 \date		Modified on Tue Nov  1 01:59:55 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static STDMETHODIMP QueryInterface(IUIApplication *this, REFIID iid, void** ppv)
{
    if (!ppv)
    {
        return E_POINTER;
    }

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
 \date		Created  on Tue Nov  1 01:59:26 2016
 \date		Modified on Tue Nov  1 01:59:26 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static STDMETHODIMP_(ULONG) AddRef(IUIApplication *this)
{
    return InterlockedIncrement(&(((Application *)(this))->m_cRef));
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		Release
 \date		Created  on Tue Nov  1 01:59:26 2016
 \date		Modified on Tue Nov  1 01:59:26 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static STDMETHODIMP_(ULONG) Release(IUIApplication *this)
{
    LONG cRef = InterlockedDecrement(&(((Application *)(this))->m_cRef));
    if (cRef == 0)
    {
        free(this);
    }

    return cRef;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		OnViewChanged
 \details	Called when the state of a View (Ribbon is a view) changes, for 
            example, created, destroyed, or resized.
 \date		Created  on Tue Nov  1 01:55:27 2016
 \date		Modified on Tue Nov  1 01:55:27 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static STDMETHODIMP OnViewChanged(IUIApplication *this, UINT32 nViewID, UI_VIEWTYPE typeID, IUnknown *pView, UI_VIEWVERB verb, INT32 uReasonCode)
{
	UNREFERENCED_PARAMETER(nViewID);
	UNREFERENCED_PARAMETER(typeID);
	UNREFERENCED_PARAMETER(pView);
	UNREFERENCED_PARAMETER(uReasonCode);

	HRESULT hr = E_FAIL;

	switch (verb)
	{
		case UI_VIEWVERB_SIZE:
			// Redraw the shapes since the space available has now changed.
			InvalidateRect(((Application *)(this))->m_hwnd, NULL, TRUE);
			hr = S_OK;
			break;
	}
	return hr;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		OnCreateUICommand
 \details	Called by the Ribbon framework for each command specified in 
            markup, to allow the host application to bind a command handler 
            to that command.
            In this Gallery sample, there is one handler for each gallery, 
            and one for all of the buttons in the Size and Color gallery.
 \date		Created  on Tue Nov  1 01:56:20 2016
 \date		Modified on Tue Nov  1 01:56:20 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static STDMETHODIMP OnCreateUICommand(IUIApplication *this, UINT32 nCmdID, UI_COMMANDTYPE typeID, IUICommandHandler **ppCommandHandler)
{
	UNREFERENCED_PARAMETER(typeID);

	HRESULT hr = E_FAIL;
	switch (nCmdID)
	{
		case IDR_CMD_SHAPES:
		{
			IUICommandHandler *pShapeHandler = NULL;
			hr = ShapeHandlerCreateInstance(&pShapeHandler);
			if (SUCCEEDED(hr))
			{
				hr = pShapeHandler->lpVtbl->QueryInterface((IUICommandHandler *)pShapeHandler, &IID_IUICommandHandler, (void **)(ppCommandHandler));
				pShapeHandler->lpVtbl->Release((IUICommandHandler *)pShapeHandler);
			}
			break;
		}
		case IDR_CMD_SIZEANDCOLOR:
		{
			IUICommandHandler *pSizeAndColorHandler = NULL;
			hr = SizeAndColorHandlerCreateInstance(&pSizeAndColorHandler);
			if (SUCCEEDED(hr))
			{
				hr = pSizeAndColorHandler->lpVtbl->QueryInterface((IUICommandHandler *)pSizeAndColorHandler, &IID_IUICommandHandler, (void **)(ppCommandHandler));
				pSizeAndColorHandler->lpVtbl->Release((IUICommandHandler *)pSizeAndColorHandler);
			}
			break;
		}
		case IDR_CMD_BORDERSTYLES:
		{
			IUICommandHandler *pBorderStyleHandler = NULL;
			hr = BorderStyleHandlerCreateInstance(&pBorderStyleHandler);
			if (SUCCEEDED(hr))
			{
				hr = pBorderStyleHandler->lpVtbl->QueryInterface((IUICommandHandler *)pBorderStyleHandler, &IID_IUICommandHandler, (void **)(ppCommandHandler));
				pBorderStyleHandler->lpVtbl->Release((IUICommandHandler *)pBorderStyleHandler);
			}
			break;
		}
		case IDR_CMD_BORDERSIZES:
		{
			IUICommandHandler *pBorderSizeHandler = NULL;
			hr = BorderSizeHandlerCreateInstance(&pBorderSizeHandler);
			if (SUCCEEDED(hr))
			{
				hr = pBorderSizeHandler->lpVtbl->QueryInterface((IUICommandHandler *)pBorderSizeHandler, &IID_IUICommandHandler, (void **)(ppCommandHandler));
				pBorderSizeHandler->lpVtbl->Release((IUICommandHandler *)pBorderSizeHandler);
			}
			break;
		}
		case IDR_CMD_LAYOUTS:
		{
			IUICommandHandler *pLayoutHandler = NULL;
			hr = LayoutHandlerCreateInstance(&pLayoutHandler);
			if (SUCCEEDED(hr))
			{
				hr = pLayoutHandler->lpVtbl->QueryInterface((IUICommandHandler *)pLayoutHandler, &IID_IUICommandHandler, (void **)(ppCommandHandler));
				pLayoutHandler->lpVtbl->Release((IUICommandHandler *)pLayoutHandler);
			}
			break;
		}
		case IDR_CMD_RED:
		case IDR_CMD_GREEN:
		case IDR_CMD_BLUE:
		case IDR_CMD_SMALL:
		case IDR_CMD_MEDIUM:
		case IDR_CMD_LARGE:
		{
			IUICommandHandler *pButtonHandler = NULL;
			hr = ButtonHandlerCreateInstance(&pButtonHandler);
			if (SUCCEEDED(hr))
			{
				hr = pButtonHandler->lpVtbl->QueryInterface((IUICommandHandler *)pButtonHandler, &IID_IUICommandHandler, (void **)(ppCommandHandler));
				pButtonHandler->lpVtbl->Release((IUICommandHandler *)pButtonHandler);
			}
			break;
		}
	}
	return hr;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		OnDestroyUICommand
 \details	Called by the Ribbon framework for each command at the time of 
            ribbon destruction.
 \date		Created  on Tue Nov  1 01:56:41 2016
 \date		Modified on Tue Nov  1 01:56:41 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static STDMETHODIMP OnDestroyUICommand(IUIApplication *this, UINT32 commandId, UI_COMMANDTYPE typeID, IUICommandHandler *pCommandHandler)
{
	UNREFERENCED_PARAMETER(commandId);
	UNREFERENCED_PARAMETER(typeID);
	UNREFERENCED_PARAMETER(pCommandHandler);
	return E_NOTIMPL;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		ApplicationCreateInstance
 \date		Created  on Tue Nov  1 02:00:13 2016
 \date		Modified on Tue Nov  1 02:00:13 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT ApplicationCreateInstance(IUIApplication **ppApplication, HWND hwnd)
{
    if (!ppApplication)
    {
        return E_POINTER;
    }
    if (!hwnd)
    {
        return E_INVALIDARG;
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

        pApplication->m_hwnd = hwnd;
		pApplication->m_cRef = 1;
        *ppApplication = (IUIApplication *)pApplication;
        
    }
    else
    {
        hr = E_OUTOFMEMORY;
    }

    return hr;
}
