/*+@@file@@----------------------------------------------------------------*//*!
 \file		ColorPickerHandler.c
 \par Description 
 \par  Status: 
 \par Project: 
 \date		Created  on Sun Oct 30 21:35:06 2016
 \date		Modified on Sun Oct 30 21:35:06 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#include "Application.h"
#include "CommandHandler.h"
#include <propvarutil.h>

static COLORREF g_colors[] = 
{
    RGB(192,   0,   0),		// Dark red.
    RGB(255,   0,   0),		// Red.
    RGB(255, 192,   0),		// Gold.
    RGB(255, 255,   0),		// Yellow.
    RGB(146, 208,  80),		// Lime.
    RGB(  0, 176,  80),		// Dark green.
    RGB(  0, 176, 240),		// Turquoise.
    RGB(  0, 112, 192),		// Dark blue.
    RGB(  0,  32,  96),		// Dark blue.
    RGB(112,  48, 160)		// Purple.
};

//Prototype interface methods
static STDMETHODIMP QueryInterface(IUICommandHandler *this, REFIID iid, void** ppv);
static STDMETHODIMP_(ULONG) AddRef(IUICommandHandler *this);
static STDMETHODIMP_(ULONG) Release(IUICommandHandler *this);
static STDMETHODIMP UpdateProperty(IUICommandHandler *this, UINT nCmdID, REFPROPERTYKEY key, const PROPVARIANT *ppropvarCurrentValue, PROPVARIANT *ppropvarNewValue);
static STDMETHODIMP Execute(IUICommandHandler *this, UINT nCmdID, UI_EXECUTIONVERB verb, const PROPERTYKEY *key, const PROPVARIANT *ppropvarValue, IUISimplePropertySet *pCommandExecutionProperties);

// IUnknown methods.
/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		QueryInterface
 \date		Created  on Sun Oct 30 21:35:23 2016
 \date		Modified on Sun Oct 30 21:35:23 2016
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
 \date		Created  on Sun Oct 30 21:35:28 2016
 \date		Modified on Sun Oct 30 21:35:28 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static STDMETHODIMP_(ULONG) AddRef(IUICommandHandler *this)
{
    return InterlockedIncrement(&(((ColorPickerHandler *)(this))->m_cRef));
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		Release
 \date		Created  on Sun Oct 30 21:35:37 2016
 \date		Modified on Sun Oct 30 21:35:37 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static STDMETHODIMP_(ULONG) Release(IUICommandHandler *this)
{
    LONG cRef = InterlockedDecrement(&(((ColorPickerHandler *)(this))->m_cRef));

    if (cRef == 0)
    {
        free(this);
    }

    return cRef;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		Execute
 \date		Created  on Sun Oct 30 21:35:46 2016
 \date		Modified on Sun Oct 30 21:35:46 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static STDMETHODIMP Execute(IUICommandHandler *this, UINT nCmdID, UI_EXECUTIONVERB verb, const PROPERTYKEY *key, const PROPVARIANT *ppropvarValue, IUISimplePropertySet *pCommandExecutionProperties)
{
	UNREFERENCED_PARAMETER(nCmdID);
	UNREFERENCED_PARAMETER(key);

	ColorProperty colorProp;
	HRESULT hr  = S_OK;
	ULONG color = 0;
	ULONG type  = UI_SWATCHCOLORTYPE_NOCOLOR;

	switch (verb)
	{
		case UI_EXECUTIONVERB_EXECUTE:
		case UI_EXECUTIONVERB_PREVIEW:
		case UI_EXECUTIONVERB_CANCELPREVIEW:
			// The Ribbon framework passes color type as the primary property.
			if (ppropvarValue != NULL)
			{
				// Retrieve color type.
				//hr = UIPropertyToUInt32(UI_PKEY_ColorType, *ppropvarValue, &type);
				hr = PropVariantToUInt32(ppropvarValue, &type);
				if (FAILED(hr))
				{
					return hr;
				}
			}

			// The Ribbon framework passes color as additional property if the color type is RGB.
			if (type == UI_SWATCHCOLORTYPE_RGB && pCommandExecutionProperties != NULL)
			{
				// Retrieve color.
				PROPVARIANT var;
				hr = pCommandExecutionProperties->lpVtbl->GetValue(pCommandExecutionProperties, &UI_PKEY_Color, &var);
				if (FAILED(hr))
				{
					return hr;
				}
				PropVariantToUInt32(&var, &color);
			}

			colorProp.color = (COLORREF)color;

			colorProp.type = (UI_SWATCHCOLORTYPE)type;

		// Handle the execution event.
			RendererExecute(&g_renderer, verb, colorProp);

			break;
	}

	return hr;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		UpdateProperty
 \date		Created  on Sun Oct 30 21:35:51 2016
 \date		Modified on Sun Oct 30 21:35:51 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static STDMETHODIMP UpdateProperty(IUICommandHandler *this, UINT nCmdID, REFPROPERTYKEY key, const PROPVARIANT *ppropvarCurrentValue, PROPVARIANT *ppropvarNewValue)
{
	UNREFERENCED_PARAMETER(ppropvarCurrentValue);

	HRESULT hr = S_OK;

	// Initialize the DDCP color type.
	if (IsEqualPropertyKey(key, &UI_PKEY_ColorType))
	{
		hr = InitPropVariantFromUInt32(UI_SWATCHCOLORTYPE_RGB, ppropvarNewValue);
		if (FAILED(hr))
		{
			return hr;
		}
	}
	// Initialize the default selected color for each DDCP.
	else if (IsEqualPropertyKey(key, &UI_PKEY_Color))
	{
		switch (nCmdID)
		{
			case IDR_CMD_THEMEDDCP:
				hr = InitPropVariantFromUInt32(RGB(0, 255, 0), ppropvarNewValue);
				break;
			case IDR_CMD_STANDARDDDCP:
				hr = InitPropVariantFromUInt32(RGB(255, 0, 0), ppropvarNewValue);
				break;
			case IDR_CMD_HIGHLIGHTDDCP:
				hr = InitPropVariantFromUInt32(RGB(0, 0, 255), ppropvarNewValue);
				break;
		}
		if (FAILED(hr))
		{
			return hr;
		}
	}

	// Customize standard DDCP.
	if (nCmdID == IDR_CMD_STANDARDDDCP)
	{
		if (IsEqualPropertyKey(key, &UI_PKEY_StandardColors))
		{
			// Customize color chips in standard DDCP.
			ULONG rStandardColors[DDCP_WIDTH *DDCP_HEIGHT];

			for (LONG i = 0; i < DDCP_WIDTH * DDCP_HEIGHT; i++)
			{
				if (!((ColorPickerHandler *)this)->m_fInitialized)
				{
					// Default customized colors.
					rStandardColors[i] = g_colors[i % 10];
				}
				else
				{
					// Update color chips with the ones in client color grid.
					rStandardColors[i] = RendererGetColor(&g_renderer, i);
				}
			}

			hr = InitPropVariantFromUInt32Vector(&rStandardColors[0], DDCP_WIDTH * DDCP_HEIGHT, ppropvarNewValue);
			if (FAILED(hr))
			{
				return hr;
			}

			((ColorPickerHandler *)this)->m_fInitialized = TRUE;

			return hr;
		}
		// Customize color tooltips in standard DDCP.
		else if (IsEqualPropertyKey(key, &UI_PKEY_StandardColorsTooltips))
		{
			// Return S_OK to let the API determine tooltips automatically.
			return S_OK;
		}
	}
	return hr;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		ColorPickerHandlerCreateInstance
 \details	Create an instance of ColorPicker object.
 \date		Created  on Sun Oct 30 18:24:44 2016
 \date		Modified on Sun Oct 30 18:24:44 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT ColorPickerHandlerCreateInstance(IUICommandHandler **ppCommandHandler)
{
    if (!ppCommandHandler)
    {
        return E_POINTER;
    }

    *ppCommandHandler = NULL;

    HRESULT hr = E_FAIL;

    ColorPickerHandler* pHandler;
	ALLOC_IFACE(pHandler, ColorPickerHandler, IUICommandHandler);

    if (pHandler != NULL)
    {
		pHandler->lpVtbl->QueryInterface = QueryInterface;
		pHandler->lpVtbl->AddRef         = AddRef;
		pHandler->lpVtbl->Release        = Release;
		pHandler->lpVtbl->Execute        = Execute;
		pHandler->lpVtbl->UpdateProperty = UpdateProperty;

		pHandler->m_fInitialized = FALSE;
		pHandler->m_cRef         = 1;

        *ppCommandHandler = (IUICommandHandler *)pHandler;
        hr = S_OK;
    }
    else
    {
        hr = E_OUTOFMEMORY;
    }

    return hr;
}
