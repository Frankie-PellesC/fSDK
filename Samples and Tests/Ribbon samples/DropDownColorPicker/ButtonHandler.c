/*+@@file@@----------------------------------------------------------------*//*!
 \file		ButtonHandler.c
 \par Description 
 \par  Status: 
 \par Project: 
 \date		Created  on Sun Oct 30 21:33:52 2016
 \date		Modified on Sun Oct 30 21:33:52 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#include "Application.h"
#include "CommandHandler.h"

//Prototype interface methods
static STDMETHODIMP QueryInterface(IUICommandHandler *this, REFIID iid, void** ppv);
static STDMETHODIMP_(ULONG) AddRef(IUICommandHandler *this);
static STDMETHODIMP_(ULONG) Release(IUICommandHandler *this);
static STDMETHODIMP UpdateProperty(IUICommandHandler *this, UINT nCmdID, REFPROPERTYKEY key, const PROPVARIANT *ppropvarCurrentValue, PROPVARIANT *ppropvarNewValue);
static STDMETHODIMP Execute(IUICommandHandler *this, UINT nCmdID, UI_EXECUTIONVERB verb, const PROPERTYKEY *key, const PROPVARIANT *ppropvarValue, IUISimplePropertySet *pCommandExecutionProperties);

// IUnknown methods.
/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		QueryInterface
 \date		Created  on Sun Oct 30 21:34:06 2016
 \date		Modified on Sun Oct 30 21:34:06 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static STDMETHODIMP QueryInterface(IUICommandHandler *this, REFIID iid, void **ppv)
{
	if (!ppv)
	{
		return E_POINTER;
	}

	if (IsEqualIID(iid, __uuidof(IUnknown)))
	{
		*ppv = (IUnknown *)(this);
	}
	else if (IsEqualIID(iid, __uuidof(IUICommandHandler)))
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
 \date		Created  on Sun Oct 30 21:34:12 2016
 \date		Modified on Sun Oct 30 21:34:12 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static STDMETHODIMP_(ULONG) AddRef(IUICommandHandler *this)
{
    return InterlockedIncrement(&(((ButtonHandler *)(this))->m_cRef));
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		Release
 \date		Created  on Sun Oct 30 21:34:20 2016
 \date		Modified on Sun Oct 30 21:34:20 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static STDMETHODIMP_(ULONG) Release(IUICommandHandler *this)
{
    LONG cRef = InterlockedDecrement(&(((ButtonHandler *)(this))->m_cRef));

	if (cRef == 0)
	{
		free(this);
	}

	return cRef;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		UpdateProperty
 \date		Created  on Sun Oct 30 21:34:32 2016
 \date		Modified on Sun Oct 30 21:34:32 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static STDMETHODIMP UpdateProperty(IUICommandHandler *this, UINT nCmdID, REFPROPERTYKEY key, const PROPVARIANT *ppropvarCurrentValue, PROPVARIANT *ppropvarNewValue)
{
	UNREFERENCED_PARAMETER(nCmdID);
	UNREFERENCED_PARAMETER(key);
	UNREFERENCED_PARAMETER(ppropvarCurrentValue);
	UNREFERENCED_PARAMETER(ppropvarNewValue);

	return S_OK;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		Execute
 \date		Created  on Sun Oct 30 21:34:36 2016
 \date		Modified on Sun Oct 30 21:34:36 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static STDMETHODIMP Execute(IUICommandHandler *this, UINT nCmdID, UI_EXECUTIONVERB verb, const PROPERTYKEY *key, const PROPVARIANT *ppropvarValue, IUISimplePropertySet *pCommandExecutionProperties)
{
	UNREFERENCED_PARAMETER(key);
	UNREFERENCED_PARAMETER(ppropvarValue);
	UNREFERENCED_PARAMETER(pCommandExecutionProperties);

	HRESULT hr = S_OK;

	if (nCmdID == IDR_CMD_UPDATE && verb == UI_EXECUTIONVERB_EXECUTE)
	{
		// Invalidate customized standard DDCP to update the color chips.
		hr = g_pFramework->lpVtbl->InvalidateUICommand(g_pFramework, IDR_CMD_STANDARDDDCP, UI_INVALIDATIONS_PROPERTY, &UI_PKEY_StandardColors);
		if (SUCCEEDED(hr))
		{
			// Invalidate customized standard DDCP to update color tooltips.
			hr = g_pFramework->lpVtbl->InvalidateUICommand(g_pFramework, IDR_CMD_STANDARDDDCP, UI_INVALIDATIONS_PROPERTY, &UI_PKEY_StandardColorsTooltips);
		}
	}

	if (nCmdID == IDR_CMD_CLEAR && verb == UI_EXECUTIONVERB_EXECUTE)
	{
		// Clear color grid.
		RendererClearColorGrid(&g_renderer);
	}

	return hr;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		ButtonHandlerCreateInstance
 \details	Method to create an instance of Button object.
 \date		Created  on Sun Oct 30 18:12:40 2016
 \date		Modified on Sun Oct 30 18:12:40 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT ButtonHandlerCreateInstance(IUICommandHandler **ppCommandHandler)
{
	if (!ppCommandHandler)
	{
		return E_POINTER;
	}

	*ppCommandHandler = NULL;

	HRESULT hr = E_FAIL;

	ButtonHandler *pHandler;
	ALLOC_IFACE(pHandler, ButtonHandler, IUICommandHandler);

	if (pHandler != NULL)
	{
		pHandler->lpVtbl->QueryInterface = QueryInterface;
		pHandler->lpVtbl->AddRef         = AddRef;
		pHandler->lpVtbl->Release        = Release;
		pHandler->lpVtbl->Execute        = Execute;
		pHandler->lpVtbl->UpdateProperty = UpdateProperty;

		*ppCommandHandler = (IUICommandHandler *)pHandler;
		pHandler->m_cRef = 1;
		hr = S_OK;
	}
	else
	{
		hr = E_OUTOFMEMORY;
	}

	return hr;
}
