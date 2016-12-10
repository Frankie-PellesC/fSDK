/*+@@file@@----------------------------------------------------------------*//*!
 \file		ImageTranscode.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul 16 21:11:44 2016
 \date		Modified on Sat Jul 16 21:11:44 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif
#include <rpc.h>
#include <rpcndr.h>
#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif
#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif
#ifndef __imagetranscode_h__
#define __imagetranscode_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __ITranscodeImage_FWD_DEFINED__
#define __ITranscodeImage_FWD_DEFINED__
typedef interface ITranscodeImage ITranscodeImage;
#endif
#ifndef __ImageTranscode_FWD_DEFINED__
#define __ImageTranscode_FWD_DEFINED__
typedef struct ImageTranscode ImageTranscode;
#endif
#include <objidl.h>
#include <propidl.h>
#include <shobjidl.h>
#ifndef __ITranscodeImage_INTERFACE_DEFINED__
#define __ITranscodeImage_INTERFACE_DEFINED__
typedef enum tagTI_FLAGS
{
	TI_BITMAP = 1,
	TI_JPEG = 2
} TI_FLAGS;
extern const IID IID_ITranscodeImage;
typedef struct ITranscodeImageVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (ITranscodeImage * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (ITranscodeImage * This);
	ULONG(STDMETHODCALLTYPE * Release) (ITranscodeImage * This);
	HRESULT(STDMETHODCALLTYPE * TranscodeImage) (ITranscodeImage * This, IShellItem * pShellItem, UINT uiMaxWidth, UINT uiMaxHeight, DWORD flags, IStream * pvImage, UINT * puiWidth, UINT * puiHeight);
	END_INTERFACE
}  ITranscodeImageVtbl;
interface ITranscodeImage
{
	CONST_VTBL struct ITranscodeImageVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define ITranscodeImage_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define ITranscodeImage_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define ITranscodeImage_Release(This) ( (This)->lpVtbl -> Release(This) )
#define ITranscodeImage_TranscodeImage(This,pShellItem,uiMaxWidth,uiMaxHeight,flags,pvImage,puiWidth,puiHeight) ( (This)->lpVtbl -> TranscodeImage(This,pShellItem,uiMaxWidth,uiMaxHeight,flags,pvImage,puiWidth,puiHeight) )
#endif
#endif
#ifndef __TranscodeLibrary_LIBRARY_DEFINED__
#define __TranscodeLibrary_LIBRARY_DEFINED__
extern const IID LIBID_TranscodeLibrary;
extern const CLSID CLSID_ImageTranscode;
#endif
#endif
