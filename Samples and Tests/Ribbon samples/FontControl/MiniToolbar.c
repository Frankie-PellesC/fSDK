/*+@@file@@----------------------------------------------------------------*//*!
 \file		MiniToolbar.c
 \par Description 
            Shows the mini toolbar.
 \par  Status: 
 \par Project: 
 \date		Created  on Tue Nov  1 22:51:25 2016
 \date		Modified on Tue Nov  1 22:51:25 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#include "RibbonFramework.h"
#include "RichEditMng.h"
#include "ids.h"

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		ShowMiniToolbar
 \details	Shows a mini toolbar at specified screen point.
 \date		Created  on Tue Nov  1 22:51:50 2016
 \date		Modified on Tue Nov  1 22:51:50 2016
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL ShowMiniToolbar(const POINT *point)
{
    HRESULT hr = E_FAIL;
    POINT pt = *point;

    if (pt.x == -1 && pt.y == -1)
    {
        // Keyboard initiated the context menu.
        RECT rect;
        GetWindowRect(FCSampleAppRichEditManagerGetRichEditWnd(g_pFCSampleAppManager), &rect);
        
        // Show the mini toolbar where the cursor is.
        GetCursorPos(&pt);
        
        if (!PtInRect(&rect, pt))
        {
            // The cursor is not in the RichEdit window so use top left corner of the RicEdit control.
            pt.x = rect.left;
            pt.y = rect.top;
        }
    }
    // If there's a selection in the RichEdit control then the selection will be lost
    // because of mouse click, so show selection again before showing the context menu.
    FCSampleAppRichEditManagerShowSelection(g_pFCSampleAppManager);
    
    if (g_pFramework)
    {
        // Get the view for contextual menu, which only has a mini toolbar.
        IUIContextualUI *pContextualUI;
        hr = g_pFramework->lpVtbl->GetView(g_pFramework, IDC_CMD_CONTEXTMAP, &IID_IUIContextualUI, (void **)(&pContextualUI));

        if (SUCCEEDED(hr))
        {
            // Show the mini toolbar at specified location.
            hr = pContextualUI->lpVtbl->ShowAtLocation(pContextualUI, pt.x, pt.y);
            pContextualUI->lpVtbl->Release(pContextualUI);
        }
    }

    return (SUCCEEDED(hr));
}
