/*+@@file@@----------------------------------------------------------------*//*!
 \file		wcsplugin.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 00:11:43 2016
 \date		Modified on Mon Sep 19 00:11:43 2016
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
#ifndef __wcsplugin_h__
#define __wcsplugin_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IDeviceModelPlugIn_FWD_DEFINED__
#define __IDeviceModelPlugIn_FWD_DEFINED__
typedef interface IDeviceModelPlugIn IDeviceModelPlugIn;
#endif
#ifndef __IGamutMapModelPlugIn_FWD_DEFINED__
#define __IGamutMapModelPlugIn_FWD_DEFINED__
typedef interface IGamutMapModelPlugIn IGamutMapModelPlugIn;
#endif
#include <oaidl.h>
typedef struct _XYZColorF
{
	FLOAT X;
	FLOAT Y;
	FLOAT Z;
} XYZColorF;
typedef struct _JChColorF
{
	FLOAT J;
	FLOAT C;
	FLOAT h;
} JChColorF;
typedef struct _JabColorF
{
	FLOAT J;
	FLOAT a;
	FLOAT b;
} JabColorF;
typedef struct _GamutShellTriangle
{
	UINT aVertexIndex[3];
} GamutShellTriangle;
typedef struct _GamutShell
{
	FLOAT JMin;
	FLOAT JMax;
	UINT cVertices;
	UINT cTriangles;
	JabColorF *pVertices;
	GamutShellTriangle *pTriangles;
} GamutShell;
typedef struct _PrimaryJabColors
{
	JabColorF red;
	JabColorF yellow;
	JabColorF green;
	JabColorF cyan;
	JabColorF blue;
	JabColorF magenta;
	JabColorF black;
	JabColorF white;
} PrimaryJabColors;
typedef struct _PrimaryXYZColors
{
	XYZColorF red;
	XYZColorF yellow;
	XYZColorF green;
	XYZColorF cyan;
	XYZColorF blue;
	XYZColorF magenta;
	XYZColorF black;
	XYZColorF white;
} PrimaryXYZColors;
typedef struct _GamutBoundaryDescription
{
	PrimaryJabColors *pPrimaries;
	UINT cNeutralSamples;
	JabColorF *pNeutralSamples;
	GamutShell *pReferenceShell;
	GamutShell *pPlausibleShell;
	GamutShell *pPossibleShell;
} GamutBoundaryDescription;
typedef struct _BlackInformation
{
	BOOL fBlackOnly;
	FLOAT blackWeight;
} BlackInformation;
extern RPC_IF_HANDLE __MIDL_itf_wcsplugin_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wcsplugin_0000_0000_v0_0_s_ifspec;
#ifndef __IDeviceModelPlugIn_INTERFACE_DEFINED__
#define __IDeviceModelPlugIn_INTERFACE_DEFINED__
extern const IID IID_IDeviceModelPlugIn;
typedef struct IDeviceModelPlugInVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IDeviceModelPlugIn * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IDeviceModelPlugIn * This);
	ULONG(STDMETHODCALLTYPE * Release) (IDeviceModelPlugIn * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IDeviceModelPlugIn * This, BSTR bstrXml, UINT cNumModels, UINT iModelPosition);
	HRESULT(STDMETHODCALLTYPE * GetNumChannels) (IDeviceModelPlugIn * This, UINT * pNumChannels);
	HRESULT(STDMETHODCALLTYPE * DeviceToColorimetricColors) (IDeviceModelPlugIn * This, UINT cColors, UINT cChannels, const FLOAT * pDeviceValues, XYZColorF * pXYZColors);
	HRESULT(STDMETHODCALLTYPE * ColorimetricToDeviceColors) (IDeviceModelPlugIn * This, UINT cColors, UINT cChannels, const XYZColorF * pXYZColors, FLOAT * pDeviceValues);
	HRESULT(STDMETHODCALLTYPE * ColorimetricToDeviceColorsWithBlack) (IDeviceModelPlugIn * This, UINT cColors, UINT cChannels, const XYZColorF * pXYZColors, const BlackInformation * pBlackInformation, FLOAT * pDeviceValues);
	HRESULT(STDMETHODCALLTYPE * SetTransformDeviceModelInfo) (IDeviceModelPlugIn * This, UINT iModelPosition, IDeviceModelPlugIn * pIDeviceModelOther);
	HRESULT(STDMETHODCALLTYPE * GetPrimarySamples) (IDeviceModelPlugIn * This, PrimaryXYZColors * pPrimaryColor);
	HRESULT(STDMETHODCALLTYPE * GetGamutBoundaryMeshSize) (IDeviceModelPlugIn * This, UINT * pNumVertices, UINT * pNumTriangles);
	HRESULT(STDMETHODCALLTYPE * GetGamutBoundaryMesh) (IDeviceModelPlugIn * This, UINT cChannels, UINT cVertices, UINT cTriangles, FLOAT * pVertices, GamutShellTriangle * pTriangles);
	HRESULT(STDMETHODCALLTYPE * GetNeutralAxisSize) (IDeviceModelPlugIn * This, UINT * pcColors);
	HRESULT(STDMETHODCALLTYPE * GetNeutralAxis) (IDeviceModelPlugIn * This, UINT cColors, XYZColorF * pXYZColors);
	END_INTERFACE
}  IDeviceModelPlugInVtbl;
interface IDeviceModelPlugIn
{
	CONST_VTBL struct IDeviceModelPlugInVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IDeviceModelPlugIn_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IDeviceModelPlugIn_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IDeviceModelPlugIn_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IDeviceModelPlugIn_Initialize(This,bstrXml,cNumModels,iModelPosition) ( (This)->lpVtbl -> Initialize(This,bstrXml,cNumModels,iModelPosition) )
#define IDeviceModelPlugIn_GetNumChannels(This,pNumChannels) ( (This)->lpVtbl -> GetNumChannels(This,pNumChannels) )
#define IDeviceModelPlugIn_DeviceToColorimetricColors(This,cColors,cChannels,pDeviceValues,pXYZColors) ( (This)->lpVtbl -> DeviceToColorimetricColors(This,cColors,cChannels,pDeviceValues,pXYZColors) )
#define IDeviceModelPlugIn_ColorimetricToDeviceColors(This,cColors,cChannels,pXYZColors,pDeviceValues) ( (This)->lpVtbl -> ColorimetricToDeviceColors(This,cColors,cChannels,pXYZColors,pDeviceValues) )
#define IDeviceModelPlugIn_ColorimetricToDeviceColorsWithBlack(This,cColors,cChannels,pXYZColors,pBlackInformation,pDeviceValues) ( (This)->lpVtbl -> ColorimetricToDeviceColorsWithBlack(This,cColors,cChannels,pXYZColors,pBlackInformation,pDeviceValues) )
#define IDeviceModelPlugIn_SetTransformDeviceModelInfo(This,iModelPosition,pIDeviceModelOther) ( (This)->lpVtbl -> SetTransformDeviceModelInfo(This,iModelPosition,pIDeviceModelOther) )
#define IDeviceModelPlugIn_GetPrimarySamples(This,pPrimaryColor) ( (This)->lpVtbl -> GetPrimarySamples(This,pPrimaryColor) )
#define IDeviceModelPlugIn_GetGamutBoundaryMeshSize(This,pNumVertices,pNumTriangles) ( (This)->lpVtbl -> GetGamutBoundaryMeshSize(This,pNumVertices,pNumTriangles) )
#define IDeviceModelPlugIn_GetGamutBoundaryMesh(This,cChannels,cVertices,cTriangles,pVertices,pTriangles) ( (This)->lpVtbl -> GetGamutBoundaryMesh(This,cChannels,cVertices,cTriangles,pVertices,pTriangles) )
#define IDeviceModelPlugIn_GetNeutralAxisSize(This,pcColors) ( (This)->lpVtbl -> GetNeutralAxisSize(This,pcColors) )
#define IDeviceModelPlugIn_GetNeutralAxis(This,cColors,pXYZColors) ( (This)->lpVtbl -> GetNeutralAxis(This,cColors,pXYZColors) )
#endif
#endif
#ifndef __IGamutMapModelPlugIn_INTERFACE_DEFINED__
#define __IGamutMapModelPlugIn_INTERFACE_DEFINED__
extern const IID IID_IGamutMapModelPlugIn;
typedef struct IGamutMapModelPlugInVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE * QueryInterface) (IGamutMapModelPlugIn * This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE * AddRef) (IGamutMapModelPlugIn * This);
	ULONG(STDMETHODCALLTYPE * Release) (IGamutMapModelPlugIn * This);
	HRESULT(STDMETHODCALLTYPE * Initialize) (IGamutMapModelPlugIn * This, BSTR bstrXml, IDeviceModelPlugIn * pSrcPlugIn, IDeviceModelPlugIn * pDestPlugIn, GamutBoundaryDescription * pSrcGBD, GamutBoundaryDescription * pDestGBD);
	HRESULT(STDMETHODCALLTYPE * SourceToDestinationAppearanceColors) (IGamutMapModelPlugIn * This, UINT cColors, const JChColorF * pInputColors, JChColorF * pOutputColors);
	END_INTERFACE
}  IGamutMapModelPlugInVtbl;
interface IGamutMapModelPlugIn
{
	CONST_VTBL struct IGamutMapModelPlugInVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IGamutMapModelPlugIn_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IGamutMapModelPlugIn_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IGamutMapModelPlugIn_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IGamutMapModelPlugIn_Initialize(This,bstrXml,pSrcPlugIn,pDestPlugIn,pSrcGBD,pDestGBD) ( (This)->lpVtbl -> Initialize(This,bstrXml,pSrcPlugIn,pDestPlugIn,pSrcGBD,pDestGBD) )
#define IGamutMapModelPlugIn_SourceToDestinationAppearanceColors(This,cColors,pInputColors,pOutputColors) ( (This)->lpVtbl -> SourceToDestinationAppearanceColors(This,cColors,pInputColors,pOutputColors) )
#endif
#endif
unsigned long __RPC_USER BSTR_UserSize(unsigned long *, unsigned long, BSTR *);
unsigned char *__RPC_USER BSTR_UserMarshal(unsigned long *, unsigned char *, BSTR *);
unsigned char *__RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(unsigned long *, BSTR *);
#endif
