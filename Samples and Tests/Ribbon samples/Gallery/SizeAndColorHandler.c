/*+@@file@@----------------------------------------------------------------*//*!
 \file		SizeAndColorHandler.c
 \par Description 
            Implements interface IUICommandHandler used by the Size and 
            Color gallery.
 \par  Status: 
 \par Project: 
 \date		Created  on Tue Nov  1 22:26:48 2016
 \date		Modified on Tue Nov  1 22:26:48 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#include "SizeAndColorHandler.h"
#include "PropertySet.h"
#include "Renderer.h"
#include "Resource.h"
#include "RibbonFramework.h"
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
	return InterlockedIncrement(&(((SizeAndColorHandler *) (this))->m_cRef));
}

/*+@@fnc@@---------------------------------------------------------------- *//*!
\brief       Release
\date        Created  on Mon Oct 31 18:34:35 2016
\date        Modified on Mon Oct 31 18:34:35 2016
\ *//*-@@fnc@@---------------------------------------------------------------- */
static STDMETHODIMP_(ULONG) Release(IUICommandHandler *this)
{
	LONG cRef = InterlockedDecrement(&(((SizeAndColorHandler *) (this))->m_cRef));
	if (cRef == 0)
	{
		free(this);
	}

	return cRef;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		Execute
 \details	Called by the Ribbon framework when the user executes an action 
            on the size and color gallery.
            When a button in a Commands gallery is clicked, the Execute 
            events are sent to the handler for the button, not the handler 
            for the gallery. This function will never actually be called.
 \date		Created  on Tue Nov  1 01:33:48 2016
 \date		Modified on Tue Nov  1 01:33:48 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static STDMETHODIMP Execute(IUICommandHandler *this, UINT nCmdID, UI_EXECUTIONVERB verb, const PROPERTYKEY *key, const PROPVARIANT *ppropvarValue, IUISimplePropertySet *pCommandExecutionProperties)
{
	UNREFERENCED_PARAMETER(nCmdID);
	UNREFERENCED_PARAMETER(verb);
	UNREFERENCED_PARAMETER(key);
	UNREFERENCED_PARAMETER(ppropvarValue);
	UNREFERENCED_PARAMETER(pCommandExecutionProperties);

	return E_FAIL;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		UpdateProperty
 \details	Called by the Ribbon framework when a command property (PKEY) 
            needs to be updated.
            This function is used to populate the gallery.
 \date		Created  on Tue Nov  1 01:35:22 2016
 \date		Modified on Tue Nov  1 01:35:22 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static STDMETHODIMP UpdateProperty(IUICommandHandler *this, UINT nCmdID, REFPROPERTYKEY key, const PROPVARIANT *ppropvarCurrentValue, PROPVARIANT *ppropvarNewValue)
{
	UNREFERENCED_PARAMETER(nCmdID);
	UNREFERENCED_PARAMETER(ppropvarNewValue);

	HRESULT hr = E_FAIL;

	if (IsEqualPropertyKey(key, &UI_PKEY_Categories))
	{
		IUICollection *pCollection;
		hr = ppropvarCurrentValue->punkVal->lpVtbl->QueryInterface(ppropvarCurrentValue->punkVal, &IID_IUICollection, (void **)&pCollection);
		if (FAILED(hr))
		{
			return hr;
		}

		// Create a property set for the Size category.
		IUISimplePropertySet *pSize;
		hr = PropertySetCreateInstance(&pSize);
		if (FAILED(hr))
		{
			pCollection->lpVtbl->Release(pCollection);
			return hr;
		}

		// Load the label for the Size category from the resource file.
		WCHAR wszSizeLabel[MAX_RESOURCE_LENGTH];
		LoadString(GetModuleHandle(NULL), IDS_SIZE_CATEGORY, wszSizeLabel, MAX_RESOURCE_LENGTH);

		// Initialize the property set with the label that was just loaded and a category id of 0.
		InitializeCategoryProperties(pSize, wszSizeLabel, 0);

		// Add the newly-created property set to the collection supplied by the framework.
		pCollection->lpVtbl->Add(pCollection, (IUnknown *)pSize);

		pSize->lpVtbl->Release(pSize);

		// Create a property set for the Color category.
		IUISimplePropertySet *pColor;
		hr = PropertySetCreateInstance(&pColor);
		if (FAILED(hr))
		{
			pCollection->lpVtbl->Release(pCollection);
			return hr;
		}

		// Load the label for the Color category from the resource file.
		WCHAR wszColorLabel[MAX_RESOURCE_LENGTH];
		LoadString(GetModuleHandle(NULL), IDS_COLOR_CATEGORY, wszColorLabel, MAX_RESOURCE_LENGTH);

		// Initialize the property set with the label that was just loaded and a category id of 1.
		InitializeCategoryProperties(pColor, wszColorLabel, 1);

		// Add the newly-created property set to the collection supplied by the framework.
		pCollection->lpVtbl->Add(pCollection, (IUnknown *)pColor);

		pColor->lpVtbl->Release(pColor);
		pCollection->lpVtbl->Release(pCollection);

		hr = S_OK;
	}
	else if (IsEqualPropertyKey(key, &UI_PKEY_ItemsSource))
	{
		IUICollection *pCollection;
		hr = ppropvarCurrentValue->punkVal->lpVtbl->QueryInterface(ppropvarCurrentValue->punkVal, &IID_IUICollection, (void **)&pCollection);
		if (FAILED(hr))
		{
			return hr;
		}

		int commandIds[] = { IDR_CMD_SMALL, IDR_CMD_MEDIUM, IDR_CMD_LARGE, IDR_CMD_RED, IDR_CMD_GREEN, IDR_CMD_BLUE };
		int categoryIds[] = { 0, 0, 0, 1, 1, 1 };

		// Populate the gallery with the three size and three colors in two separate categories.
		for (int i = 0; i < _countof(commandIds); i++)
		{
			// Create a new property set for each item.
			IUISimplePropertySet *pCommand;
		  hr = PropertySetCreateInstance(&pCommand);
			if (FAILED(hr))
			{
				pCollection->lpVtbl->Release(pCollection);
				return hr;
			}

			// Initialize the property set with the appropriate command id and category id and type Boolean (which makes these appear as ToggleButtons).
			InitializeCommandProperties(pCommand, categoryIds[i], commandIds[i], UI_COMMANDTYPE_BOOLEAN);

			// Add the newly-created property set to the collection supplied by the framework.
			pCollection->lpVtbl->Add(pCollection, (IUnknown *)pCommand);

			pCommand->lpVtbl->Release(pCommand);
		}
		pCollection->lpVtbl->Release(pCollection);
		hr = S_OK;
	}
	return hr;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		SizeAndColorHandlerCreateInstance
 \date		Created  on Tue Nov  1 01:46:05 2016
 \date		Modified on Tue Nov  1 01:46:05 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT SizeAndColorHandlerCreateInstance(IUICommandHandler **ppHandler)
{
	if (!ppHandler)
	{
		return E_POINTER;
	}

	*ppHandler = NULL;

	HRESULT hr = S_OK;

	SizeAndColorHandler *pHandler;
	ALLOC_IFACE(pHandler, SizeAndColorHandler, IUICommandHandler)

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
