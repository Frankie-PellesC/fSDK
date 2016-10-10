/*+@@file@@----------------------------------------------------------------*//*!
 \file		WPWizMsg.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep  4 15:43:07 2016
 \date		Modified on Sun Sep  4 15:43:07 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __WPWizMsg_h__
#define __WPWizMsg_h__
#if __POCC__ >= 500
#pragma once
#endif
#define WPWIZ_ERROR_FIRST                0x40042000L
#define WPWIZ_ERROR_UNKNOWN              0xC0042001L
#define WPWIZ_ERROR_PROV_QI              0xC0042002L
#define WPWIZ_ERROR_INIT_FAILED          0xC0042003L
#define WPWIZ_ERROR_COCREATE_WEBPOST     0xC0042004L
#define WPWIZ_ERROR_NO_PROVIDERS         0xC0042005L
#define WPWIZ_ERROR_STATE_PTR            0xC0042006L
#define WPWIZ_ERROR_WEBPOST_PTR          0xC0042007L
#define WPWIZ_ERROR_FILE_NOT_FOUND       0xC0042008L
#define WPWIZ_ERROR_PROPSHEET_ERROR      0xC0042009L
#define WPWIZ_ERROR_OUTOFMEMORY          0xC004200AL
#define WPWIZ_ERROR_LAST                 0x400420FFL
#endif
