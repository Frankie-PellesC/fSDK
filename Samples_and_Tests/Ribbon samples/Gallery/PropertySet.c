/*+@@file@@----------------------------------------------------------------*//*!
 \file		PropertySet.c
 \par Description 
            The implementation of IUISimplePropertySet.
            ItemsSource and Categories PKEYs and provides functions to set 
            only the properties required for each type of gallery contents.
 \par  Status: 
 \par Project: 
 \date		Created  on Tue Nov  1 22:17:21 2016
 \date		Modified on Tue Nov  1 22:17:21 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#include "PropertySet.h"
#include <windows.h>
#include <propvarutil.h>
#include <strsafe.h>
#include "Common.h"
#pragma warn (disable:2154)

//Prototype interface methods
static STDMETHODIMP QueryInterface(IUISimplePropertySet *this, REFIID iid, void** ppv);
static STDMETHODIMP_(ULONG) AddRef(IUISimplePropertySet *this);
static STDMETHODIMP_(ULONG) Release(IUISimplePropertySet *this);
static STDMETHODIMP GetValue(IUISimplePropertySet *this, REFPROPERTYKEY key, PROPVARIANT *ppropvar);

// IUnknown methods.
/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		QueryInterface
 \date		Created  on Mon Oct 31 22:20:43 2016
 \date		Modified on Mon Oct 31 22:20:43 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static STDMETHODIMP QueryInterface(IUISimplePropertySet *this, REFIID iid, void **ppv)
{
	if (!ppv)
	{
		return E_POINTER;
	}

	if (IsEqualIID(iid, __uuidof(IUnknown)))
	{
		*ppv = (IUnknown *) (this);
	}
	else if (IsEqualIID(iid, __uuidof(IUISimplePropertySet)))
	{
		*ppv = (IUISimplePropertySet *) (this);
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
static STDMETHODIMP_(ULONG) AddRef(IUISimplePropertySet *this)
{
	return InterlockedIncrement(&(((PropertySet *) (this))->m_cRef));
}

/*+@@fnc@@---------------------------------------------------------------- *//*!
\brief       Release
\date        Created  on Mon Oct 31 18:34:35 2016
\date        Modified on Mon Oct 31 18:34:35 2016
\ *//*-@@fnc@@---------------------------------------------------------------- */
static STDMETHODIMP_(ULONG) Release(IUISimplePropertySet *this)
{
	LONG cRef = InterlockedDecrement(&(((PropertySet *) (this))->m_cRef));
	if (cRef == 0)
	{
		if (((PropertySet *) (this))->m_pimgItem != NULL)
		{
			((PropertySet *) (this))->m_pimgItem->lpVtbl->Release(((PropertySet *) (this))->m_pimgItem);
		}
		free(this);
	}

	return cRef;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		GetValue
 \details	Retrieves the value of one of the properties used when adding 
            something to a gallery.
            This will be called by the framework on the property sets 
            returned for the ItemsSource and Categories properties in order 
            to create and display the contents of the gallery.
 \date		Created  on Mon Oct 31 23:40:59 2016
 \date		Modified on Mon Oct 31 23:40:59 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static STDMETHODIMP GetValue(IUISimplePropertySet *this, REFPROPERTYKEY key, PROPVARIANT *ppropvar)
{
	PropertySet *pPropertySet = (PropertySet *)this;

    if (IsEqualPropertyKey(key, &UI_PKEY_ItemImage))
    {
        if (pPropertySet->m_pimgItem)
        {
	        ppropvar->vt = VT_UNKNOWN;
	        ppropvar->punkVal = (IUnknown *)pPropertySet->m_pimgItem;
	        if (pPropertySet->m_pimgItem)
	        {
	            pPropertySet->m_pimgItem->lpVtbl->AddRef(pPropertySet->m_pimgItem);
	        }
			return S_OK;
        }
        return S_FALSE;
    }
    else if (IsEqualPropertyKey(key, &UI_PKEY_Label))
    {
        return InitPropVariantFromString(pPropertySet->m_wszLabel, ppropvar);
    }
    else if (IsEqualPropertyKey(key, &UI_PKEY_CategoryId))
    {
        return InitPropVariantFromUInt32(pPropertySet->m_categoryId, ppropvar);
    }
    else if (IsEqualPropertyKey(key, &UI_PKEY_CommandId))
    {
        if(pPropertySet->m_commandId != -1)
        {
            return InitPropVariantFromUInt32(pPropertySet->m_commandId, ppropvar);
        }
        return S_FALSE;
    }
    else if (IsEqualPropertyKey(key, &UI_PKEY_CommandType))
    {
        return InitPropVariantFromUInt32(pPropertySet->m_commandType, ppropvar);
    }
    return E_FAIL;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		InitializeCommandProperties
 \details	Initializes a property set for use with the ItemsSource 
            property of a gallery of type "Commands."
            This takes values that will be used when queried for the 
            CategoryId, CommandId, and CommandType properties.
 \date		Created  on Mon Oct 31 23:38:32 2016
 \date		Modified on Mon Oct 31 23:38:32 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
void InitializeCommandProperties(IUISimplePropertySet *this, int categoryId, int commandId, UI_COMMANDTYPE commandType)
{
	PropertySet *pPropertySet = (PropertySet *)this;

    pPropertySet->m_categoryId  = categoryId;
    pPropertySet->m_commandId   = commandId;
    pPropertySet->m_commandType = commandType;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		InitializeItemProperties
 \details	Initializes a property set for use with the ItemsSource 
            property of any type of gallery other than "Commands."
            This takes values that will be used when queried for the 
            ItemImage, Label, and CategoryId properties.
 \date		Created  on Tue Nov  1 00:05:46 2016
 \date		Modified on Tue Nov  1 00:05:46 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
void InitializeItemProperties(IUISimplePropertySet *this, IUIImage *image, PCWSTR label, int categoryId)
{
	PropertySet *pPropertySet = (PropertySet *)this;

    pPropertySet->m_pimgItem = image;
    if (pPropertySet->m_pimgItem)
    {
        pPropertySet->m_pimgItem->lpVtbl->AddRef(pPropertySet->m_pimgItem);
    }
    StringCchCopyW(pPropertySet->m_wszLabel, MAX_RESOURCE_LENGTH, label);
    pPropertySet->m_categoryId = categoryId;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		InitializeCategoryProperties
 \details	Initializes a property set for use with the Categories property 
            of any gallery.
            This takes values that will be used when queried for the Label 
            and CategoryId properties.
 \date		Created  on Tue Nov  1 00:07:58 2016
 \date		Modified on Tue Nov  1 00:07:58 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
void InitializeCategoryProperties(IUISimplePropertySet *this, PCWSTR label, int categoryId)
{
    StringCchCopyW(((PropertySet *)this)->m_wszLabel, MAX_RESOURCE_LENGTH, label);
    ((PropertySet *)this)->m_categoryId = categoryId;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		PropertySetCreateInstance
 \date		Created  on Tue Nov  1 00:09:01 2016
 \date		Modified on Tue Nov  1 00:09:01 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT PropertySetCreateInstance(IUISimplePropertySet **ppPropertySet)
{
    if (!ppPropertySet)
    {
        return E_POINTER;
    }

    *ppPropertySet = NULL;

    HRESULT hr = S_OK;

    PropertySet* pPropertySet;
	ALLOC_IFACE(pPropertySet, PropertySet, IUISimplePropertySet)

    if (pPropertySet == NULL)
    {
        hr = E_OUTOFMEMORY;
    }

    if (SUCCEEDED(hr))
    {
		pPropertySet->lpVtbl->QueryInterface = QueryInterface;
		pPropertySet->lpVtbl->AddRef         = AddRef;
		pPropertySet->lpVtbl->Release        = Release;
		pPropertySet->lpVtbl->GetValue       = GetValue;

        pPropertySet->m_pimgItem    = NULL; 
        pPropertySet->m_categoryId  = UI_COLLECTION_INVALIDINDEX;
        pPropertySet->m_commandId   = -1;
        pPropertySet->m_commandType = UI_COMMANDTYPE_UNKNOWN;
        pPropertySet->m_cRef        = 1;
        pPropertySet->m_wszLabel[0] = L'\0';

        *ppPropertySet = (IUISimplePropertySet *)pPropertySet;
    }

    return hr;
}
