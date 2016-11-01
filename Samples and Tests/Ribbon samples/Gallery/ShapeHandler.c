/*+@@file@@----------------------------------------------------------------*//*!
 \file		ShapeHandler.c
 \par Description 
            Implements interface IUICommandHandler used by the Shape 
            gallery.
 \par  Status: 
 \par Project: 
 \date		Created  on Tue Nov  1 22:24:39 2016
 \date		Modified on Tue Nov  1 22:24:39 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#include "ShapeHandler.h"
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
static HRESULT CreateUIImageFromBitmapResource(IUICommandHandler *this, LPCTSTR pszResource, IUIImage **ppimg);

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
	return InterlockedIncrement(&(((ShapeHandler *) (this))->m_cRef));
}

/*+@@fnc@@---------------------------------------------------------------- *//*!
\brief       Release
\date        Created  on Mon Oct 31 18:34:35 2016
\date        Modified on Mon Oct 31 18:34:35 2016
\ *//*-@@fnc@@---------------------------------------------------------------- */
static STDMETHODIMP_(ULONG) Release(IUICommandHandler *this)
{
	LONG cRef = InterlockedDecrement(&(((ShapeHandler *) (this))->m_cRef));
	if (cRef == 0)
	{
		if (((ShapeHandler *) (this))->m_pifbFactory != NULL)
		{
			((ShapeHandler *) (this))->m_pifbFactory->lpVtbl->Release(((ShapeHandler *) (this))->m_pifbFactory);
		}
		free(this);
	}

	return cRef;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		Execute
 \details	Called by the Ribbon framework when the user selects or hovers 
            over a new shape.
            This will update the type of shape being displayed.
 \date		Created  on Tue Nov  1 00:56:58 2016
 \date		Modified on Tue Nov  1 00:56:58 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static STDMETHODIMP Execute(IUICommandHandler *this, UINT nCmdID, UI_EXECUTIONVERB verb, const PROPERTYKEY *key, const PROPVARIANT *ppropvarValue, IUISimplePropertySet *pCommandExecutionProperties)
{
	UNREFERENCED_PARAMETER(nCmdID);
	UNREFERENCED_PARAMETER(pCommandExecutionProperties);

	HRESULT hr = E_FAIL;

	RenderParam param;
	RendererGetRenderParam(&g_renderer, &param);

	ULONG selected;
	hr = PropVariantToUInt32(ppropvarValue, &selected);
	switch (verb)
	{
		case UI_EXECUTIONVERB_PREVIEW:
			// Show a preview of a new shape.    
			param.eShapeType = (SHAPE_TYPE)selected;
			RendererUpdateRenderParam(&g_renderer, param);
			hr = S_OK;
			break;
		case UI_EXECUTIONVERB_CANCELPREVIEW:
			// Show the shape that was selected before the preview- ppropvarValue contains the previous selected item.
			// Note that the renderer did not have to store the value from before preview was called.
			param.eShapeType = (SHAPE_TYPE)selected;
			RendererUpdateRenderParam(&g_renderer, param);
			hr = S_OK;
			break;
		case UI_EXECUTIONVERB_EXECUTE:
			if (key && IsEqualPropertyKey(key, &UI_PKEY_SelectedItem))
			{
				// Update the renderer with the newly-selected shape.
				param.eShapeType = (SHAPE_TYPE)selected;
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
 \date		Created  on Tue Nov  1 01:11:58 2016
 \date		Modified on Tue Nov  1 01:11:58 2016
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
		hr = ppropvarCurrentValue->punkVal->lpVtbl->QueryInterface(ppropvarCurrentValue->punkVal, &IID_IUICollection, (void **)&pCollection);
		if (FAILED(hr))
		{
			return hr;
		}

		int imageIds[4];
		int labelIds[] = { IDS_RECTANGLE, IDS_ELLIPSE, IDS_ROUNDED_RECTANGLE, IDS_DIAMOND };

		int dpi = GetDeviceCaps(GetDC(NULL), LOGPIXELSX);
		if (dpi > 144)
		{
			imageIds[0] = IDB_RECTANGLE_192;
			imageIds[1] = IDB_ELLIPSE_192;
			imageIds[2] = IDB_ROUNDED_RECTANGLE_192;
			imageIds[3] = IDB_DIAMOND_192;
		}
		else if (dpi > 120)
		{
			imageIds[0] = IDB_RECTANGLE_144;
			imageIds[1] = IDB_ELLIPSE_144;
			imageIds[2] = IDB_ROUNDED_RECTANGLE_144;
			imageIds[3] = IDB_DIAMOND_144;
		}
		else if (dpi > 96)
		{
			imageIds[0] = IDB_RECTANGLE_120;
			imageIds[1] = IDB_ELLIPSE_120;
			imageIds[2] = IDB_ROUNDED_RECTANGLE_120;
			imageIds[3] = IDB_DIAMOND_120;
		}
		else
		{
			imageIds[0] = IDB_RECTANGLE_96;
			imageIds[1] = IDB_ELLIPSE_96;
			imageIds[2] = IDB_ROUNDED_RECTANGLE_96;
			imageIds[3] = IDB_DIAMOND_96;
		}

		// Populate the gallery with the four available shape types.
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

			pImg->lpVtbl->Release(pImg);
			pItem->lpVtbl->Release(pItem);
		}
		pCollection->lpVtbl->Release(pCollection);
		hr = S_OK;
	}
	else if (IsEqualPropertyKey(key, &UI_PKEY_SelectedItem))
	{
		// Use the current shape as the selection.
		RenderParam param;
		RendererGetRenderParam(&g_renderer, &param);
		hr = InitPropVariantFromUInt32(param.eShapeType, ppropvarNewValue);
	}
	return hr;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CreateUIImageFromBitmapResource
 \details	Factory method to create IUIImages from resource identifiers.
 \date		Created  on Tue Nov  1 01:21:56 2016
 \date		Modified on Tue Nov  1 01:21:56 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static HRESULT CreateUIImageFromBitmapResource(IUICommandHandler *this, LPCTSTR pszResource, IUIImage **ppimg)
{
	HRESULT hr = E_FAIL;
	ShapeHandler *pShapeHandler = (ShapeHandler *)this;

	*ppimg = NULL;

	if (NULL == pShapeHandler->m_pifbFactory)
	{
		hr = CoCreateInstance(&CLSID_UIRibbonImageFromBitmapFactory, NULL, CLSCTX_ALL, &IID_IUIImageFromBitmap, (void **)&pShapeHandler->m_pifbFactory);
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
		hr = pShapeHandler->m_pifbFactory->lpVtbl->CreateImage(pShapeHandler->m_pifbFactory, hbm, UI_OWNERSHIP_TRANSFER, ppimg);
		if (FAILED(hr))
		{
			DeleteObject(hbm);
		}
	}
	return hr;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		ShapeHandlerCreateInstance
 \date		Created  on Tue Nov  1 01:28:41 2016
 \date		Modified on Tue Nov  1 01:28:41 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT ShapeHandlerCreateInstance(IUICommandHandler **ppHandler)
{
	if (!ppHandler)
	{
		return E_POINTER;
	}

	*ppHandler = NULL;

	HRESULT hr = S_OK;

	ShapeHandler *pHandler;
	ALLOC_IFACE(pHandler, ShapeHandler, IUICommandHandler)

	if (pHandler != NULL)
	{
		pHandler->lpVtbl->QueryInterface = QueryInterface;
		pHandler->lpVtbl->AddRef         = AddRef;
		pHandler->lpVtbl->Release        = Release;
		pHandler->lpVtbl->Execute        = Execute;
		pHandler->lpVtbl->UpdateProperty = UpdateProperty;

		pHandler->m_cRef = 1;
		pHandler->m_pifbFactory = NULL;

		*ppHandler = (IUICommandHandler *)pHandler;
	}
	else
	{
		hr = E_OUTOFMEMORY;
	}

	return hr;
}
