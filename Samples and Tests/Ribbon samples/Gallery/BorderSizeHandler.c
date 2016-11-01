/*+@@file@@----------------------------------------------------------------*//*!
 \file		BorderSizeHandler.c
 \par Description 
            Implements interface IUICommandHandler for Border Size gallery.
 \par  Status: 
 \par Project: 
 \date		Created  on Tue Nov  1 22:09:09 2016
 \date		Modified on Tue Nov  1 22:09:09 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#include "BorderSizeHandler.h"
#include "PropertySet.h"
#include "Renderer.h"
#include "Resource.h"
#include "RibbonFramework.h"
#include <propvarutil.h>
//#include <uiribbonpropertyhelpers.h>
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
 \date		Created  on Mon Oct 31 18:31:01 2016
 \date		Modified on Mon Oct 31 18:31:01 2016
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
	return InterlockedIncrement(&(((BorderSizeHandler *) (this))->m_cRef));
}

/*+@@fnc@@---------------------------------------------------------------- *//*!
   \brief       Release
   \date        Created  on Mon Oct 31 18:34:35 2016
   \date        Modified on Mon Oct 31 18:34:35 2016
   \ *//*-@@fnc@@---------------------------------------------------------------- */
static STDMETHODIMP_(ULONG) Release(IUICommandHandler *this)
{
	LONG cRef = InterlockedDecrement(&(((BorderSizeHandler *) (this))->m_cRef));
	if (cRef == 0)
	{
		free(this);
	}

	return cRef;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		Execute
 \details	Called by the Ribbon framework when the selects or types in a 
            new border size.
            This sets the size of the border around the shapes being drawn 
            or displays an error message if the user entered an invalid 
            size.
 \date		Created  on Mon Oct 31 19:22:36 2016
 \date		Modified on Mon Oct 31 19:22:36 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static STDMETHODIMP Execute(IUICommandHandler *this, UINT nCmdID, UI_EXECUTIONVERB verb, const PROPERTYKEY *key, const PROPVARIANT *ppropvarValue, IUISimplePropertySet *pCommandExecutionProperties)
{
	UNREFERENCED_PARAMETER(nCmdID);

	HRESULT hr = E_FAIL;
	if (verb == UI_EXECUTIONVERB_EXECUTE)
	{
		if (key && IsEqualPropertyKey(key, &UI_PKEY_SelectedItem))
		{
			RenderParam param;
			RendererGetRenderParam(&g_renderer, &param);

			UINT selected = ppropvarValue->uintVal;
			switch (selected)
			{
				case 0:
					param.uBorderSize = 1;
					break;
				case 1:
					param.uBorderSize = 3;
					break;
				case 2:
					param.uBorderSize = 5;
					break;
				case UI_COLLECTION_INVALIDINDEX:	// The new selection is a value that the user typed.
					if (pCommandExecutionProperties != NULL)
					{
						PROPVARIANT var;
						pCommandExecutionProperties->lpVtbl->GetValue(pCommandExecutionProperties, &UI_PKEY_Label, &var);	// The text entered by the user is contained in the property set with the pkey UI_PKEY_Label.

						BSTR bstr = var.bstrVal;
						ULONG newSize;

						hr = VarUI4FromStr(bstr, GetUserDefaultLCID(), 0, &newSize);

						if (FAILED(hr) || newSize < 1 || newSize > 15)
						{
							WCHAR wszErrorMessage[MAX_RESOURCE_LENGTH];
							LoadString(GetModuleHandle(NULL), IDS_INVALID_SIZE_MESSAGE, wszErrorMessage, MAX_RESOURCE_LENGTH);

							WCHAR wszErrorTitle[MAX_RESOURCE_LENGTH];
							LoadString(GetModuleHandle(NULL), IDS_INVALID_SIZE_TITLE, wszErrorTitle, MAX_RESOURCE_LENGTH);

							MessageBox(NULL, wszErrorMessage, wszErrorTitle, MB_OK);
							// Manually changing the text requires invalidating the StringValue property.
							g_pFramework->lpVtbl->InvalidateUICommand(g_pFramework, IDR_CMD_BORDERSIZES, UI_INVALIDATIONS_PROPERTY, &UI_PKEY_StringValue);
							break;
						}
						param.uBorderSize = newSize;
						PropVariantClear(&var);
					}
					break;
			}
			RendererUpdateRenderParam(&g_renderer, param);
		}
	}
	return hr;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		UpdateProperty
 \details	Called by the Ribbon framework when a command property (PKEY) 
            needs to be updated.
            Depending on the value of key, this will populate the gallery, 
            update the selected item or text, or enable/disable the 
            gallery.
 \date		Created  on Mon Oct 31 19:22:09 2016
 \date		Modified on Mon Oct 31 19:22:09 2016
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
			return hr;
		}

		int labelIds[] = { IDS_BORDERSIZE_1, IDS_BORDERSIZE_3, IDS_BORDERSIZE_5 };

		// Populate the combobox with the three default border sizes
		for (int i = 0; i < _countof(labelIds); i++)
		{
			// Create a new property set for each item.
			IUISimplePropertySet *pItem;
			hr = PropertySetCreateInstance(&pItem);
			if (FAILED(hr))
			{
				pCollection->lpVtbl->Release(pCollection);
				return hr;
			}

			// Load the label for each size from the resource file.
			WCHAR wszLabel[MAX_RESOURCE_LENGTH];
			LoadString(GetModuleHandle(NULL), labelIds[i], wszLabel, MAX_RESOURCE_LENGTH);

			// Initialize the property set with no image, the label that was just loaded, and no category.
			InitializeItemProperties(pItem, NULL, wszLabel, UI_COLLECTION_INVALIDINDEX);

			// Add the newly-created property set to the collection supplied by the framework.
			pCollection->lpVtbl->Add(pCollection, (IUnknown *)pItem);

			pItem->lpVtbl->Release(pItem);
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
		// Use the first size as the default selection.
		hr = InitPropVariantFromUInt32(0, ppropvarNewValue);
	}
	else if (IsEqualPropertyKey(key, &UI_PKEY_StringValue))
	{
		// Set the text of the size combobox to the current border size.
		RenderParam param;
		RendererGetRenderParam(&g_renderer, &param);
		BSTR bstr;

		hr = VarBstrFromUI4(param.uBorderSize, GetUserDefaultLCID(), 0, &bstr);
		if (FAILED(hr))
		{
			return hr;
		}

		hr = InitPropVariantFromString(bstr, ppropvarNewValue);
		SysFreeString(bstr);
	}
	else if (IsEqualPropertyKey(key, &UI_PKEY_Enabled))
	{
		// The border size combobox gets disabled when Dash Line is selected for the border style.
		RenderParam param;
		RendererGetRenderParam(&g_renderer, &param);
		BOOL active = param.eBorderStyle != DASH;
		hr = InitPropVariantFromBoolean(active, ppropvarNewValue);
	}
	return hr;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		BorderSizeHandlerCreateInstance
 \date		Created  on Mon Oct 31 19:21:41 2016
 \date		Modified on Mon Oct 31 19:21:41 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT BorderSizeHandlerCreateInstance(IUICommandHandler **ppHandler)
{
	if (!ppHandler)
	{
		return E_POINTER;
	}

	*ppHandler = NULL;

	HRESULT hr = S_OK;

	BorderSizeHandler *pHandler;
	ALLOC_IFACE(pHandler, BorderSizeHandler, IUICommandHandler)

	if (pHandler != NULL)
	{
		pHandler->lpVtbl->QueryInterface = QueryInterface;
		pHandler->lpVtbl->AddRef         = AddRef;
		pHandler->lpVtbl->Release        = Release;
		pHandler->lpVtbl->Execute        = Execute;
		pHandler->lpVtbl->UpdateProperty = UpdateProperty;

		pHandler->m_cRef = 1;
		*ppHandler       = (IUICommandHandler *)pHandler;
	}
	else
	{
		hr = E_OUTOFMEMORY;
	}

	return hr;
}
