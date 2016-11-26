/*+@@file@@----------------------------------------------------------------*//*!
 \file		CommandHandler.c
 \par Description 
            Implements interface IUICommandHandler
 \par  Status: 
 \par Project: 
 \date		Created  on Sat Oct 29 18:06:27 2016
 \date		Modified on Sat Oct 29 18:06:27 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/

#include "CommandHandler.h"
#include "RibbonFramework.h"
#include <propvarutil.h>

//Prototype interface methods
static STDMETHODIMP QueryInterface(IUICommandHandler *this, REFIID iid, void** ppv);
static STDMETHODIMP_(ULONG) AddRef(IUICommandHandler *this);
static STDMETHODIMP_(ULONG) Release(IUICommandHandler *this);
static STDMETHODIMP UpdateProperty(IUICommandHandler *this, UINT nCmdID, REFPROPERTYKEY key, const PROPVARIANT *ppropvarCurrentValue, PROPVARIANT *ppropvarNewValue);
static STDMETHODIMP Execute(IUICommandHandler *this, UINT nCmdID, UI_EXECUTIONVERB verb, const PROPERTYKEY *key, const PROPVARIANT *ppropvarValue, IUISimplePropertySet *pCommandExecutionProperties);

/*!
 *	This is a generic command handler used by every command in this sample.
 *	IUICommandHandler should be returned by the application during command creation.
 *	The same command handler is returned for every command.
 */
typedef struct
{
	IUICommandHandler;
    LONG m_cRef;
} CommandHandler;


/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		GetContextMapIDFromCommandID
 \details	Given the command id, return the Context Map it corresponds to 
            so that we can set it.

 \param		[in] iCmdID Cmd ID
 \return	The ID of the Context Map that corresponds to iCmdID, 0 if the 
            Context Map ID is not found.
 \date		Created  on Fri Oct 28 15:58:26 2016
 \date		Modified on Fri Oct 28 16:00:14 2016
 \warning	No command in the ribbon markup is allowed to use 0 as its ID.
\*//*-@@fnc@@----------------------------------------------------------------*/
int GetContextMapIDFromCommandID(int iCmdID)
{
	switch (iCmdID)
	{
		case IDC_CMD_CONTEXT1:
			return IDC_CMD_CONTEXTMAP1;
			break;
		case IDC_CMD_CONTEXT2:
			return IDC_CMD_CONTEXTMAP2;
			break;
		case IDC_CMD_CONTEXT3:
			return IDC_CMD_CONTEXTMAP3;
			break;
		case IDC_CMD_CONTEXT4:
			return IDC_CMD_CONTEXTMAP4;
			break;
		default:
			;
	}

	return 0;
}

/*
 *	IUnknown methods.
 */

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		QueryInterface
 \date		Created  on Sat Oct 29 18:10:58 2016
 \date		Modified on Sat Oct 29 18:10:58 2016
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
 \date		Created  on Sat Oct 29 18:11:05 2016
 \date		Modified on Sat Oct 29 18:11:05 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static STDMETHODIMP_(ULONG) AddRef(IUICommandHandler *this)
{
    return InterlockedIncrement(&(((CommandHandler *)(this))->m_cRef));
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		Release
 \date		Created  on Sat Oct 29 18:11:21 2016
 \date		Modified on Sat Oct 29 18:11:21 2016
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
            In this sample, this updates the toggle state of the toggle 
            buttons in the ribbon.
 \date		Created  on Fri Oct 28 16:01:42 2016
 \date		Modified on Fri Oct 28 16:02:26 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static STDMETHODIMP UpdateProperty(IUICommandHandler *this, UINT nCmdID, REFPROPERTYKEY key, const PROPVARIANT *ppropvarCurrentValue, PROPVARIANT *ppropvarNewValue)
{
	UNREFERENCED_PARAMETER(ppropvarCurrentValue);

	HRESULT hr = E_NOTIMPL;

	if (!memcmp(key, &UI_PKEY_BooleanValue, sizeof(*key)))
	{
		if (nCmdID != cmdToggleButton)
		{
			hr = InitPropVariantFromBoolean(ApplicationGetCurrentContext(g_pApplication) == GetContextMapIDFromCommandID(nCmdID), ppropvarNewValue);
		}
	}

	return hr;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		Execute
 \details	Called by the Ribbon framework when a command is executed by 
            the user.
            For example, when a button is pressed.
 \date		Created  on Fri Oct 28 16:10:58 2016
 \date		Modified on Fri Oct 28 16:11:31 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
static STDMETHODIMP Execute(IUICommandHandler *this, UINT nCmdID, UI_EXECUTIONVERB verb, const PROPERTYKEY *key, const PROPVARIANT *ppropvarValue, IUISimplePropertySet *pCommandExecutionProperties)
{
	UNREFERENCED_PARAMETER(verb);
	UNREFERENCED_PARAMETER(ppropvarValue);
	UNREFERENCED_PARAMETER(pCommandExecutionProperties);

	HRESULT hr = S_OK;

	if (key != NULL && !memcmp(key, &UI_PKEY_BooleanValue, sizeof(*key)))
	{
		if (nCmdID != cmdToggleButton)
		{
			ApplicationSetCurrentContext(g_pApplication, GetContextMapIDFromCommandID(nCmdID));

			/*
			 *	We need to update the toggle state (boolean value) of the toggle buttons,
			 *	But we just invalidate all things to keep it simple.
			 */
			hr = g_pFramework->lpVtbl->InvalidateUICommand(g_pFramework, UI_ALL_COMMANDS, UI_INVALIDATIONS_VALUE, NULL);
		}
	}

	return hr;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		CommandHandlerCreateInstance
 \date		Created  on Thu Oct 27 18:12:22 2016
 \date		Modified on Thu Oct 27 18:12:22 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
HRESULT CommandHandlerCreateInstance(IUICommandHandler **ppCommandHandler)
{
    if (!ppCommandHandler)
    {
        return E_POINTER;
    }

    *ppCommandHandler = NULL;
    HRESULT hr = E_FAIL;

    CommandHandler* pHandler;
	ALLOC_IFACE(pHandler, CommandHandler, IUICommandHandler);

    if (pHandler != NULL)
    {
		pHandler->lpVtbl->QueryInterface = QueryInterface;
		pHandler->lpVtbl->AddRef         = AddRef;
		pHandler->lpVtbl->Release        = Release;
		pHandler->lpVtbl->Execute        = Execute;
		pHandler->lpVtbl->UpdateProperty = UpdateProperty;
		pHandler->m_cRef                 = 1;
        *ppCommandHandler = (IUICommandHandler *)pHandler;
        hr = S_OK;
    }
    else
    {
        hr = E_OUTOFMEMORY;
    }

    return hr;
};
