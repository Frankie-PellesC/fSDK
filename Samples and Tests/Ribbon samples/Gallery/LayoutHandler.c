/*+@@file@@----------------------------------------------------------------*//*!
 \file		LayoutHandler.c
 \par Description 
            Implements interface IUICommandHandler used by the Layout 
            gallery.
 \par  Status: 
 \par Project: 
 \date		Created  on Tue Nov  1 22:15:22 2016
 \date		Modified on Tue Nov  1 22:15:22 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#include "LayoutHandler.h"
#include "PropertySet.h"
#include "Renderer.h"
#include "Resource.h"
#include "RibbonFramework.h"
#include <propvarutil.h>
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
 \date		Created  on Mon Oct 31 23:11:23 2016
 \date		Modified on Mon Oct 31 23:11:23 2016
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
	return InterlockedIncrement(&(((LayoutHandler *) (this))->m_cRef));
}

/*+@@fnc@@---------------------------------------------------------------- *//*!
\brief       Release
\date        Created  on Mon Oct 31 18:34:35 2016
\date        Modified on Mon Oct 31 18:34:35 2016
\ *//*-@@fnc@@---------------------------------------------------------------- */
static STDMETHODIMP_(ULONG) Release(IUICommandHandler *this)
{
	LONG cRef = InterlockedDecrement(&(((LayoutHandler *) (this))->m_cRef));
	if (cRef == 0)
	{
		free(this);
	}

	return cRef;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		Execute
 \details	Called by the Ribbon framework when the user chooses a new 
            layout.
            This will update the layout of the shapes being drawn.
 \date		Created  on Mon Oct 31 23:12:44 2016
 \date		Modified on Mon Oct 31 23:12:44 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static STDMETHODIMP Execute(IUICommandHandler *this, UINT nCmdID, UI_EXECUTIONVERB verb, const PROPERTYKEY *key, const PROPVARIANT *ppropvarValue, IUISimplePropertySet *pCommandExecutionProperties)
{
	UNREFERENCED_PARAMETER(nCmdID);
	UNREFERENCED_PARAMETER(pCommandExecutionProperties);

	HRESULT hr = E_FAIL;
	if (verb == UI_EXECUTIONVERB_EXECUTE)
	{
		if (key && IsEqualPropertyKey(key, &UI_PKEY_SelectedItem))
		{
			// Get the newly-selected layout and update the render parameters with it.

			RenderParam param;
			RendererGetRenderParam(&g_renderer, &param);

			UINT selected = ppropvarValue->uintVal;

			param.eViewLayout = (VIEW_LAYOUT)selected;
			RendererUpdateRenderParam(&g_renderer, param);

			hr = S_OK;
		}
	}
	return hr;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		UpdateProperty
 \details	Called by the Ribbon framework when a command property (PKEY) 
            needs to be updated.
            This function is used to initialize the contents and selection 
            of the gallery.
 \date		Created  on Mon Oct 31 23:16:52 2016
 \date		Modified on Mon Oct 31 23:16:52 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static STDMETHODIMP UpdateProperty(IUICommandHandler *this, UINT nCmdID, REFPROPERTYKEY key, const PROPVARIANT *ppropvarCurrentValue, PROPVARIANT *ppropvarNewValue)
{
	UNREFERENCED_PARAMETER(nCmdID);

	HRESULT hr = E_FAIL;

	if (IsEqualPropertyKey(key, &UI_PKEY_ItemsSource))
	{
		IUICollection *pCollection;
		hr = ppropvarCurrentValue->punkVal->lpVtbl->QueryInterface(ppropvarCurrentValue->punkVal, &IID_IUICollection, (void **)(&pCollection));
		if (FAILED(hr))
		{
			pCollection->lpVtbl->Release(pCollection);
			return hr;
		}

		int labelIds[] = { IDS_LAYOUT_1, IDS_LAYOUT_2, IDS_LAYOUT_3 };

		// Populate the combobox with the three layout options.
		for (int i = 0; i < _countof(labelIds); i++)
		{
			// Create a new property set for each item.
			IUISimplePropertySet  *pItem;
			hr = PropertySetCreateInstance(&pItem);
			if (FAILED(hr))
			{
				pCollection->lpVtbl->Release(pCollection);
				return hr;
			}

			// Load the label from the resource file.
			WCHAR wszLabel[MAX_RESOURCE_LENGTH];
			LoadString(GetModuleHandle(NULL), labelIds[i], wszLabel, MAX_RESOURCE_LENGTH);

			// Initialize the property set with no image, the label that was just loaded, and no category.
			InitializeItemProperties(pItem, NULL, wszLabel, UI_COLLECTION_INVALIDINDEX);

			pCollection->lpVtbl->Add(pCollection, (IUnknown *)pItem);
		}
		pCollection->lpVtbl->Release(pCollection);
		hr = S_OK;
	}
	else if (IsEqualPropertyKey(key, &UI_PKEY_Categories))
	{
		// A return value of S_FALSE or E_NOTIMPL will result in a gallery with no categories.
		// If you return any error other than E_NOTIMPL, the contents of the gallery will not display.
		hr = S_FALSE;
	}
	else if (IsEqualPropertyKey(key, &UI_PKEY_SelectedItem))
	{
		// Use the first layout as the default selection.
		hr = InitPropVariantFromUInt32(0, ppropvarNewValue);
	}
	return hr;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		LayoutHandlerCreateInstance
 \date		Created  on Mon Oct 31 23:27:03 2016
 \date		Modified on Mon Oct 31 23:27:03 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT LayoutHandlerCreateInstance(IUICommandHandler **ppHandler)
{
	if (!ppHandler)
	{
		return E_POINTER;
	}

	*ppHandler = NULL;

	HRESULT hr = S_OK;

	LayoutHandler *pHandler;
	ALLOC_IFACE(pHandler, LayoutHandler, IUICommandHandler)

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
