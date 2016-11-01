/*+@@file@@----------------------------------------------------------------*//*!
 \file		BorderStyleHandler.c
 \par Description 
            Implements interface IUICommandHandler for Border Style 
            gallery. 
 \par  Status: 
 \par Project: 
 \date		Created  on Tue Nov  1 22:10:18 2016
 \date		Modified on Tue Nov  1 22:10:18 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#include "BorderStyleHandler.h"
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
HRESULT CreateUIImageFromBitmapResource(IUICommandHandler *this, LPCTSTR pszResource, IUIImage **ppimg);

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
	return InterlockedIncrement(&(((BorderStyleHandler *) (this))->m_cRef));
}

/*+@@fnc@@---------------------------------------------------------------- *//*!
   \brief       Release
   \date        Created  on Mon Oct 31 18:34:35 2016
   \date        Modified on Mon Oct 31 18:34:35 2016
   \ *//*-@@fnc@@---------------------------------------------------------------- */
static STDMETHODIMP_(ULONG) Release(IUICommandHandler *this)
{
	LONG cRef = InterlockedDecrement(&(((BorderStyleHandler *) (this))->m_cRef));
	if (cRef == 0)
	{
		if (((BorderStyleHandler *) (this))->m_pifbFactory != NULL)
		{
			((BorderStyleHandler *) (this))->m_pifbFactory->lpVtbl->Release(((BorderStyleHandler *) (this))->m_pifbFactory);
		}
		free(this);
	}

	return cRef;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		Execute
 \details	Called by the Ribbon framework when the user selects a new 
            border style.
            This sets a new style for the border around the shapes being 
            drawn.
 \date		Created  on Mon Oct 31 19:29:20 2016
 \date		Modified on Mon Oct 31 19:29:20 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static STDMETHODIMP Execute(IUICommandHandler *this, UINT nCmdID, UI_EXECUTIONVERB verb, const PROPERTYKEY *key, const PROPVARIANT *ppropvarValue, IUISimplePropertySet *pCommandExecutionProperties)
{
	UNREFERENCED_PARAMETER(nCmdID);
	UNREFERENCED_PARAMETER(pCommandExecutionProperties);

	HRESULT hr = E_FAIL;

	RenderParam param;
	RendererGetRenderParam(&g_renderer, &param);

	if (verb == UI_EXECUTIONVERB_EXECUTE)
	{
		if (ppropvarValue == NULL)	// The Button part of the Border Style SplitButtonGallery was clicked.
		{
			if (param.eBorderStyle == NONE)
			{
				param.eBorderStyle = SOLID;
			}
			else
			{
				param.eBorderStyle = NONE;
			}
			RendererUpdateRenderParam(&g_renderer, param);
			// Update the visual state of the button- toggled on for border selected, off for no border.
			g_pFramework->lpVtbl->InvalidateUICommand(g_pFramework, IDR_CMD_BORDERSTYLES, UI_INVALIDATIONS_PROPERTY, &UI_PKEY_BooleanValue);
			// The Border Sizes combobox needs to be re-enabled if the dash border was just de-selected.
			g_pFramework->lpVtbl->InvalidateUICommand(g_pFramework, IDR_CMD_BORDERSIZES, UI_INVALIDATIONS_PROPERTY, &UI_PKEY_Enabled);
			hr = S_OK;
		}
		else if (key && IsEqualPropertyKey(key, &UI_PKEY_SelectedItem))
		{
			ULONG selected;
			hr = PropVariantToUInt32(ppropvarValue, &selected);

			param.eBorderStyle = (BORDER_STYLE)selected;
			RendererUpdateRenderParam(&g_renderer, param);
			// The Border Sizes combobox needs to be disabled if dash border was just selected, or enabled otherwise.
			g_pFramework->lpVtbl->InvalidateUICommand(g_pFramework, IDR_CMD_BORDERSIZES, UI_INVALIDATIONS_PROPERTY, &UI_PKEY_Enabled);
			g_pFramework->lpVtbl->InvalidateUICommand(g_pFramework, IDR_CMD_BORDERSTYLES, UI_INVALIDATIONS_PROPERTY, &UI_PKEY_BooleanValue);
			hr = S_OK;
		}
	}
	return hr;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		UpdateProperty
 \details	Called by the Ribbon framework when a command property (PKEY) 
            needs to be updated.
            Depending on the value of key, this will populate the gallery, 
            update the selection, or toggle the state of the button.
 \date		Created  on Mon Oct 31 19:30:33 2016
 \date		Modified on Mon Oct 31 19:30:33 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static STDMETHODIMP UpdateProperty(IUICommandHandler *this, UINT nCmdID, REFPROPERTYKEY key, const PROPVARIANT *ppropvarCurrentValue, PROPVARIANT *ppropvarNewValue)
{
	UNREFERENCED_PARAMETER(nCmdID);

	HRESULT hr = E_FAIL;

	if (IsEqualPropertyKey(key, &UI_PKEY_Categories))
	{
		// A return value of S_FALSE or E_NOTIMPL will result in a gallery with no categories.
		// If you return any error other than E_NOTIMPL, the contents of the gallery will not display.
		hr = S_FALSE;
	}
	else if (IsEqualPropertyKey(key, &UI_PKEY_ItemsSource))
	{
		IUICollection *pCollection;
		hr = ppropvarCurrentValue->punkVal->lpVtbl->QueryInterface(ppropvarCurrentValue->punkVal, &IID_IUICollection, (void **)(&pCollection));
		if (FAILED(hr))
		{
			return hr;
		}

		int imageIds[3];
		int labelIds[] = { IDS_BORDER_NONE, IDS_BORDER_SOLID, IDS_BORDER_DASH };

		int dpi = GetDeviceCaps(GetDC(NULL), LOGPIXELSX);
		if (dpi > 144)
		{
			imageIds[0] = IDB_NONE_192;
			imageIds[1] = IDB_SOLID_192;
			imageIds[2] = IDB_DASH_192;
		}
		else if (dpi > 120)
		{
			imageIds[0] = IDB_NONE_144;
			imageIds[1] = IDB_SOLID_144;
			imageIds[2] = IDB_DASH_144;
		}
		else if (dpi > 96)
		{
			imageIds[0] = IDB_NONE_120;
			imageIds[1] = IDB_SOLID_120;
			imageIds[2] = IDB_DASH_120;
		}
		else
		{
			imageIds[0] = IDB_NONE_96;
			imageIds[1] = IDB_SOLID_96;
			imageIds[2] = IDB_DASH_96;
		}

		// Populate the dropdown with the three border styles.
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

			// Create an IUIImage from a resource id.
			IUIImage *pImg;
			hr = CreateUIImageFromBitmapResource(this, MAKEINTRESOURCE(imageIds[i]), &pImg);
			if (FAILED(hr))
			{
				pCollection->lpVtbl->Release(pCollection);
				pItem->lpVtbl->Release(pItem);
				return hr;
			}

			// Load the label from the resource file.
			WCHAR wszLabel[MAX_RESOURCE_LENGTH];
			LoadString(GetModuleHandle(NULL), labelIds[i], wszLabel, MAX_RESOURCE_LENGTH);

			// Initialize the property set with the image and label that were just loaded and no category.
			InitializeItemProperties(pItem, pImg, wszLabel, UI_COLLECTION_INVALIDINDEX);

			// Add the newly-created property set to the collection supplied by the framework.
			pCollection->lpVtbl->Add(pCollection, (IUnknown *)pItem);

			pItem->lpVtbl->Release(pItem);
			pImg->lpVtbl->Release(pImg);
		}
		pCollection->lpVtbl->Release(pCollection);
		hr = S_OK;
	}
	else if (IsEqualPropertyKey(key, &UI_PKEY_SelectedItem))
	{
		// Use the current border style as the selection.
		RenderParam param;
		RendererGetRenderParam(&g_renderer, &param);

		hr = InitPropVariantFromUInt32(param.eBorderStyle, ppropvarNewValue);
	}
	else if (IsEqualPropertyKey(key, &UI_PKEY_BooleanValue))
	{
		// The button will appear selected if there is a border, or deselected if there is no border.
		RenderParam param;
		RendererGetRenderParam(&g_renderer, &param);

		BOOL active = param.eBorderStyle != NONE;

		g_pFramework->lpVtbl->InvalidateUICommand(g_pFramework, IDR_CMD_BORDERSTYLES, UI_INVALIDATIONS_PROPERTY, &UI_PKEY_SelectedItem);
		hr = InitPropVariantFromBoolean(active, ppropvarNewValue);
	}
	return hr;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CreateUIImageFromBitmapResource
 \details	Factory method to create IUIImages from resource identifiers.
 \date		Created  on Mon Oct 31 19:31:03 2016
 \date		Modified on Mon Oct 31 19:31:03 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CreateUIImageFromBitmapResource(IUICommandHandler *this, LPCTSTR pszResource, IUIImage **ppimg)
{
	HRESULT hr = E_FAIL;
	BorderStyleHandler *pBorderStyleHandler = (BorderStyleHandler *)this;

	*ppimg = NULL;

	if (NULL == pBorderStyleHandler->m_pifbFactory)
	{
		hr = CoCreateInstance(&CLSID_UIRibbonImageFromBitmapFactory, NULL, CLSCTX_ALL, &IID_IUIImageFromBitmap, (void **)&pBorderStyleHandler->m_pifbFactory);
		if (FAILED(hr))
		{
			return hr;
		}
	}

	// Load the bitmap from the resource file.
	HBITMAP hbm = (HBITMAP)LoadImage(GetModuleHandle(NULL), pszResource, IMAGE_BITMAP, 0, 0, LR_CREATEDIBSECTION);
	if (hbm)
	{
		// Use the factory implemented by the framework to produce an IUIImage.
		hr = pBorderStyleHandler->m_pifbFactory->lpVtbl->CreateImage(pBorderStyleHandler->m_pifbFactory, hbm, UI_OWNERSHIP_TRANSFER, ppimg);
		if (FAILED(hr))
		{
			DeleteObject(hbm);
		}
	}
	return hr;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CreateInstance
 \date		Created  on Mon Oct 31 19:31:57 2016
 \date		Modified on Mon Oct 31 19:31:57 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT BorderStyleHandlerCreateInstance(IUICommandHandler **ppHandler)
{
	if (!ppHandler)
	{
		return E_POINTER;
	}

	*ppHandler = NULL;

	HRESULT hr = S_OK;

	BorderStyleHandler *pHandler;
	ALLOC_IFACE(pHandler, BorderStyleHandler, IUICommandHandler);

	if (pHandler != NULL)
	{
		pHandler->lpVtbl->QueryInterface = QueryInterface;
		pHandler->lpVtbl->AddRef         = AddRef;
		pHandler->lpVtbl->Release        = Release;
		pHandler->lpVtbl->Execute        = Execute;
		pHandler->lpVtbl->UpdateProperty = UpdateProperty;

		pHandler->m_cRef        = 1;
		pHandler->m_pifbFactory = NULL;

		*ppHandler = (IUICommandHandler *)pHandler;
	}
	else
	{
		hr = E_OUTOFMEMORY;
	}

	return hr;
}
