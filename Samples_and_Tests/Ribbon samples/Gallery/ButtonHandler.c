/*+@@file@@----------------------------------------------------------------*//*!
 \file		ButtonHandler.c
 \par Description 
            Implements interface IUICommandHandler for the buttons in the 
            Size and Color gallery.
 \par  Status: 
 \par Project: 
 \date		Created  on Tue Nov  1 22:12:44 2016
 \date		Modified on Tue Nov  1 22:12:44 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#include "ButtonHandler.h"
#include "PropertySet.h"
#include "Renderer.h"
#include "Resource.h"
#include "RibbonFramework.h"
#include <propvarutil.h>
#include "ids.h"
#include "Common.h"

extern Renderer   g_renderer;

//Prototype interface methods
static STDMETHODIMP QueryInterface(IUICommandHandler *this, REFIID iid, void** ppv);
static STDMETHODIMP_(ULONG) AddRef(IUICommandHandler *this);
static STDMETHODIMP_(ULONG) Release(IUICommandHandler *this);
static STDMETHODIMP UpdateProperty(IUICommandHandler *this, UINT nCmdID, REFPROPERTYKEY key, const PROPVARIANT *ppropvarCurrentValue, PROPVARIANT *ppropvarNewValue);
static STDMETHODIMP Execute(IUICommandHandler *this, UINT nCmdID, UI_EXECUTIONVERB verb, const PROPERTYKEY *key, const PROPVARIANT *ppropvarValue, IUISimplePropertySet *pCommandExecutionProperties);

// IUnknown methods.
/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		QueryInterface
 \date		Created  on Mon Oct 31 22:20:43 2016
 \date		Modified on Mon Oct 31 22:20:43 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static STDMETHODIMP QueryInterface(IUICommandHandler *this, REFIID iid, void **ppv)
{
	if (!ppv)
	{
		return E_POINTER;
	}

	if (IsEqualIID(iid, __uuidof(IUnknown)))
	{
		*ppv = (IUnknown *) (this);
	}
	else if (IsEqualIID(iid, __uuidof(IUICommandHandler)))
	{
		*ppv = (IUICommandHandler *) (this);
	}
	else
	{
		*ppv = NULL;
		return E_NOINTERFACE;
	}

	AddRef(this);
	return S_OK;
}

/*+@@fnc@@---------------------------------------------------------------- *//*!
\brief       AddRef
\date        Created  on Mon Oct 31 18:34:24 2016
\date        Modified on Mon Oct 31 18:34:24 2016
\ *//*-@@fnc@@---------------------------------------------------------------- */
static STDMETHODIMP_(ULONG) AddRef(IUICommandHandler *this)
{
	return InterlockedIncrement(&(((ButtonHandler *) (this))->m_cRef));
}

/*+@@fnc@@---------------------------------------------------------------- *//*!
\brief       Release
\date        Created  on Mon Oct 31 18:34:35 2016
\date        Modified on Mon Oct 31 18:34:35 2016
\ *//*-@@fnc@@---------------------------------------------------------------- */
static STDMETHODIMP_(ULONG) Release(IUICommandHandler *this)
{
	LONG cRef = InterlockedDecrement(&(((ButtonHandler *) (this))->m_cRef));
	if (cRef == 0)
	{
		free(this);
	}

	return cRef;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		Execute
 \details	Called by the Ribbon framework when one of the size or color 
            buttons is pressed by the user.
            This sets either the size or the color of the shapes being 
            drawn and invalidates the toggled state of each button.
 \date		Created  on Tue Nov  1 22:00:24 2016
 \date		Modified on Tue Nov  1 22:00:24 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static STDMETHODIMP Execute(IUICommandHandler *this, UINT nCmdID, UI_EXECUTIONVERB verb, const PROPERTYKEY *key, const PROPVARIANT *ppropvarValue, IUISimplePropertySet *pCommandExecutionProperties)
{
	UNREFERENCED_PARAMETER(ppropvarValue);
	UNREFERENCED_PARAMETER(pCommandExecutionProperties);

	HRESULT hr = E_FAIL;

	if (verb == UI_EXECUTIONVERB_EXECUTE)
	{
		if (key && (IsEqualPropertyKey(key, &UI_PKEY_BooleanValue)))	// The user clicked one of the toggle buttons in the command gallery.
		{
			RenderParam param;
			RendererGetRenderParam(&g_renderer, &param);

			switch (nCmdID)
			{
				case IDR_CMD_RED:
				case IDR_CMD_GREEN:
				case IDR_CMD_BLUE:
					param.eShapeColor = (SHAPE_COLOR) (nCmdID - IDR_CMD_RED);
					break;
				case IDR_CMD_SMALL:
				case IDR_CMD_MEDIUM:
				case IDR_CMD_LARGE:
					param.eShapeSize = (SHAPE_SIZE) (nCmdID - IDR_CMD_SMALL);
					break;
			}
			RendererUpdateRenderParam(&g_renderer, param);
			// Update the BooleanValue property on all commands to deselect the previous size or color.
			hr = g_pFramework->lpVtbl->InvalidateUICommand(g_pFramework, UI_ALL_COMMANDS, UI_INVALIDATIONS_PROPERTY, &UI_PKEY_BooleanValue);
		}
	}
	return hr;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		UpdateProperty
 \details	Called by the Ribbon framework when a command property (PKEY) 
            needs to be updated.
            This function updates the toggled state of each button.
 \date		Created  on Tue Nov  1 22:00:38 2016
 \date		Modified on Tue Nov  1 22:00:38 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static STDMETHODIMP UpdateProperty(IUICommandHandler *this, UINT nCmdID, REFPROPERTYKEY key, const PROPVARIANT *ppropvarCurrentValue, PROPVARIANT *ppropvarNewValue)
{
	UNREFERENCED_PARAMETER(ppropvarCurrentValue);

	HRESULT hr = E_FAIL;
	if (IsEqualPropertyKey(key, &UI_PKEY_BooleanValue))
	{
		RenderParam param;
		RendererGetRenderParam(&g_renderer, &param);

		// The currently active size and color will appear selected; the others will appear deselected.
		if (nCmdID == (UINT) (param.eShapeSize + IDR_CMD_SMALL) || nCmdID == (UINT) (param.eShapeColor + IDR_CMD_RED))
		{
			hr = InitPropVariantFromBoolean(TRUE, ppropvarNewValue);
		}
		else
		{
			hr = InitPropVariantFromBoolean(FALSE, ppropvarNewValue);
		}
	}
	return hr;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		ButtonHandlerCreateInstance
 \date		Created  on Mon Oct 31 22:54:40 2016
 \date		Modified on Mon Oct 31 22:54:40 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT ButtonHandlerCreateInstance(IUICommandHandler **ppHandler)
{
	if (!ppHandler)
	{
		return E_POINTER;
	}

	*ppHandler = NULL;

	HRESULT hr = S_OK;

	ButtonHandler *pHandler;
	ALLOC_IFACE(pHandler, ButtonHandler, IUICommandHandler)

	if (pHandler != NULL)
	{
		pHandler->lpVtbl->QueryInterface = QueryInterface;
		pHandler->lpVtbl->AddRef         = AddRef;
		pHandler->lpVtbl->Release        = Release;
		pHandler->lpVtbl->Execute        = Execute;
		pHandler->lpVtbl->UpdateProperty = UpdateProperty;

		pHandler->m_cRef = 1;
		*ppHandler = (IUICommandHandler *)pHandler;
	}
	else
	{
		hr = E_OUTOFMEMORY;
	}

	return hr;
}
