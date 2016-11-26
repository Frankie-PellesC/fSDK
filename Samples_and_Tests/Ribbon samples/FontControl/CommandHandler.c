/*+@@file@@----------------------------------------------------------------*//*!
 \file		CommandHandler.c
 \par Description 
            Implements interface IUICommandHandler.
 \par  Status: 
 \par Project: 
 \date		Created  on Tue Nov  1 22:48:18 2016
 \date		Modified on Tue Nov  1 22:48:18 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#include <UIRibbon.h>

#include "CommandHandler.h"
#include "RibbonFramework.h"
#include "common.h"

//Prototype interface methods
static STDMETHODIMP QueryInterface(IUICommandHandler *this, REFIID iid, void** ppv);
static STDMETHODIMP_(ULONG) AddRef(IUICommandHandler *this);
static STDMETHODIMP_(ULONG) Release(IUICommandHandler *this);
static STDMETHODIMP UpdateProperty(IUICommandHandler *this, UINT nCmdID, REFPROPERTYKEY key, const PROPVARIANT *ppropvarCurrentValue, PROPVARIANT *ppropvarNewValue);
static STDMETHODIMP Execute(IUICommandHandler *this, UINT nCmdID, UI_EXECUTIONVERB verb, const PROPERTYKEY *key, const PROPVARIANT *ppropvarValue, IUISimplePropertySet *pCommandExecutionProperties);

// IUnknown method implementations.
/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		QueryInterface
 \date		Created  on Sun Oct 30 23:08:44 2016
 \date		Modified on Sun Oct 30 23:08:44 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static STDMETHODIMP QueryInterface(IUICommandHandler *this, REFIID iid, void** ppv)
{
    if (!ppv)
    {
        return E_POINTER;
    }

    if (IsEqualIID(iid, __uuidof(IUnknown)))
    {
        *ppv = (IUnknown*)(this);
    }
    else if (IsEqualIID(iid, __uuidof(IUICommandHandler)))
    {
        *ppv = (IUICommandHandler*)(this);
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
 \date		Created  on Sun Oct 30 23:08:49 2016
 \date		Modified on Sun Oct 30 23:08:49 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static STDMETHODIMP_(ULONG) AddRef(IUICommandHandler *this)
{
    return InterlockedIncrement(&(((CommandHandler *)(this))->m_cRef));
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		Release
 \date		Created  on Sun Oct 30 23:08:59 2016
 \date		Modified on Sun Oct 30 23:08:59 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static STDMETHODIMP_(ULONG) Release(IUICommandHandler *this)
{
    LONG cRef = InterlockedDecrement(&(((CommandHandler *)(this))->m_cRef));
    if (cRef == 0)
    {
        free(this);
    }

    return cRef;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		UpdateProperty
 \details	Called by the Ribbon framework when a command property (PKEY) 
            needs to be updated.
            This function is used to provide new command property values, 
            such as labels, icons, or tooltip information, when requested 
            by the Ribbon framework.
 \date		Created  on Sun Oct 30 23:10:23 2016
 \date		Modified on Sun Oct 30 23:10:23 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static STDMETHODIMP UpdateProperty(IUICommandHandler *this, UINT nCmdID, REFPROPERTYKEY key, const PROPVARIANT *ppropvarCurrentValue, PROPVARIANT *ppropvarNewValue)
{
	UNREFERENCED_PARAMETER(nCmdID);

	HRESULT hr = E_NOTIMPL;
	if (IsEqualPropertyKey(key, &UI_PKEY_FontProperties))
	{
		hr = E_POINTER;
		if (ppropvarCurrentValue != NULL)
		{
			// Get the font values for the selected text in the font control.
			IPropertyStore *pValues;
			//hr = UIPropertyToInterface(UI_PKEY_FontProperties, *ppropvarCurrentValue, &pValues);
			hr = ppropvarCurrentValue->punkVal->lpVtbl->QueryInterface(ppropvarCurrentValue->punkVal, __uuidof(IPropertyStore), (void**)&pValues);
			if (SUCCEEDED(hr))
			{
				FCSampleAppRichEditManagerGetValues(g_pFCSampleAppManager, pValues);

				// Provide the new values to the font control.
				//hr = UIInitPropertyFromInterface(UI_PKEY_FontProperties, pValues, ppropvarNewValue);
		        ppropvarNewValue->vt      = VT_UNKNOWN;
		        ppropvarNewValue->punkVal = (IUnknown *)pValues;
		        if (pValues)
		        {
		            pValues->lpVtbl->AddRef(pValues);
		        }

				pValues->lpVtbl->Release(pValues);
			}
		}
	}

	return hr;
}

static HRESULT UIPropertyToIPropertyStoreInterface(/*const T& propertyKey,*/ REFPROPVARIANT propvarIn, /*TInterface*/ IPropertyStore** ppObj)
{
    *ppObj = NULL;
    //UIBreakCheckType<T, VT_UNKNOWN>::_Type valid = UIBreakCheckType<T, VT_UNKNOWN>::Validate(propertyKey);
    if (/*valid &&*/ propvarIn->vt == VT_UNKNOWN)
    {
        if (propvarIn->punkVal)
        {
            return propvarIn->punkVal->lpVtbl->QueryInterface(propvarIn->punkVal, __uuidof(IPropertyStore), (void**)ppObj);
        }
        return S_OK;
    }
    return E_INVALIDARG;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		Execute
 \details	Called by the Ribbon framework when a command is executed by 
            the user.
            For example, when a button is pressed.
 \date		Created  on Sun Oct 30 23:11:34 2016
 \date		Modified on Sun Oct 30 23:11:34 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static STDMETHODIMP Execute(IUICommandHandler *this, UINT nCmdID, UI_EXECUTIONVERB verb, const PROPERTYKEY *key, const PROPVARIANT *ppropvarValue, IUISimplePropertySet *pCommandExecutionProperties)
{
	UNREFERENCED_PARAMETER(nCmdID);

	HRESULT hr = E_NOTIMPL;
	if ((key) && (IsEqualPropertyKey(key, &UI_PKEY_FontProperties)))
	{
		// Font properties have changed.
		switch (verb)
		{
			case UI_EXECUTIONVERB_EXECUTE:
			{
				hr = E_POINTER;
				if (pCommandExecutionProperties != NULL)
				{
					// Get the changed properties.
					PROPVARIANT varChanges;
					hr = pCommandExecutionProperties->lpVtbl->GetValue(pCommandExecutionProperties, &UI_PKEY_FontProperties_ChangedProperties, &varChanges);
					if (SUCCEEDED(hr))
					{
						IPropertyStore *pChanges;
						hr = UIPropertyToIPropertyStoreInterface(/*UI_PKEY_FontProperties,*/ &varChanges, &pChanges);
						if (SUCCEEDED(hr))
						{
							// Using the changed properties, set the new font on the selection on RichEdit control.
							FCSampleAppRichEditManagerSetValues(g_pFCSampleAppManager, pChanges);
							pChanges->lpVtbl->Release(pChanges);
						}
						PropVariantClear(&varChanges);
					}
				}
				break;
			}
			case UI_EXECUTIONVERB_PREVIEW:
			{
				hr = E_POINTER;
				if (pCommandExecutionProperties != NULL)
				{
					// Get the changed properties for the preview event.
					PROPVARIANT varChanges;
					hr = pCommandExecutionProperties->lpVtbl->GetValue(pCommandExecutionProperties, &UI_PKEY_FontProperties_ChangedProperties, &varChanges);
					if (SUCCEEDED(hr))
					{
						IPropertyStore *pChanges;
						hr = UIPropertyToIPropertyStoreInterface(/*UI_PKEY_FontProperties,*/ &varChanges, &pChanges);
						if (SUCCEEDED(hr))
						{
							// Set the previewed values on the RichEdit control.
							FCSampleAppRichEditManagerSetPreviewValues(g_pFCSampleAppManager, pChanges);
							pChanges->lpVtbl->Release(pChanges);
						}
						PropVariantClear(&varChanges);
					}
				}
				break;
			}
			case UI_EXECUTIONVERB_CANCELPREVIEW:
			{
				hr = E_POINTER;
				if (ppropvarValue != NULL)
				{
					// Cancel the preview.
					IPropertyStore *pValues;
					hr = UIPropertyToIPropertyStoreInterface(/*UI_PKEY_FontProperties,*/ ppropvarValue, &pValues);
					if (SUCCEEDED(hr))
					{
						FCSampleAppRichEditManagerCancelPreview(g_pFCSampleAppManager, pValues);
						pValues->lpVtbl->Release(pValues);
					}
				}
				break;
			}
		}
	}

	return hr;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CommandHandlerCreateInstance
 \date		Created  on Sun Oct 30 23:01:14 2016
 \date		Modified on Sun Oct 30 23:01:14 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CommandHandlerCreateInstance(IUICommandHandler **ppCommandHandler)
{
    if (!ppCommandHandler)
    {
        return E_POINTER;
    }

    *ppCommandHandler = NULL;

    HRESULT hr = S_OK;
   
    CommandHandler* pCommandHandler;
	ALLOC_IFACE(pCommandHandler, CommandHandler, IUICommandHandler);

    if (pCommandHandler != NULL)
    {
		pCommandHandler->lpVtbl->QueryInterface = QueryInterface;
		pCommandHandler->lpVtbl->AddRef         = AddRef;
		pCommandHandler->lpVtbl->Release        = Release;
		pCommandHandler->lpVtbl->Execute        = Execute;
		pCommandHandler->lpVtbl->UpdateProperty = UpdateProperty;

		pCommandHandler->m_cRef = 1;
        *ppCommandHandler = (IUICommandHandler *)(pCommandHandler);
    }
    else
    {
        hr = E_OUTOFMEMORY;
    }

    return hr;
}
