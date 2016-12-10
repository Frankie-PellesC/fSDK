/*+@@file@@----------------------------------------------------------------*//*!
 \file		mileffects.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug  7 21:41:00 2016
 \date		Modified on Sun Aug  7 21:41:00 2016
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
#ifndef __mileffects_h__
#define __mileffects_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __IMILBitmapEffectConnectorInfo_FWD_DEFINED__
#define __IMILBitmapEffectConnectorInfo_FWD_DEFINED__
typedef interface IMILBitmapEffectConnectorInfo IMILBitmapEffectConnectorInfo;
#endif
#ifndef __IMILBitmapEffectConnectionsInfo_FWD_DEFINED__
#define __IMILBitmapEffectConnectionsInfo_FWD_DEFINED__
typedef interface IMILBitmapEffectConnectionsInfo IMILBitmapEffectConnectionsInfo;
#endif
#ifndef __IMILBitmapEffectConnections_FWD_DEFINED__
#define __IMILBitmapEffectConnections_FWD_DEFINED__
typedef interface IMILBitmapEffectConnections IMILBitmapEffectConnections;
#endif
#ifndef __IMILBitmapEffect_FWD_DEFINED__
#define __IMILBitmapEffect_FWD_DEFINED__
typedef interface IMILBitmapEffect IMILBitmapEffect;
#endif
#ifndef __IMILBitmapEffectImpl_FWD_DEFINED__
#define __IMILBitmapEffectImpl_FWD_DEFINED__
typedef interface IMILBitmapEffectImpl IMILBitmapEffectImpl;
#endif
#ifndef __IMILBitmapEffectGroup_FWD_DEFINED__
#define __IMILBitmapEffectGroup_FWD_DEFINED__
typedef interface IMILBitmapEffectGroup IMILBitmapEffectGroup;
#endif
#ifndef __IMILBitmapEffectGroupImpl_FWD_DEFINED__
#define __IMILBitmapEffectGroupImpl_FWD_DEFINED__
typedef interface IMILBitmapEffectGroupImpl IMILBitmapEffectGroupImpl;
#endif
#ifndef __IMILBitmapEffectRenderContext_FWD_DEFINED__
#define __IMILBitmapEffectRenderContext_FWD_DEFINED__
typedef interface IMILBitmapEffectRenderContext IMILBitmapEffectRenderContext;
#endif
#ifndef __IMILBitmapEffectRenderContextImpl_FWD_DEFINED__
#define __IMILBitmapEffectRenderContextImpl_FWD_DEFINED__
typedef interface IMILBitmapEffectRenderContextImpl IMILBitmapEffectRenderContextImpl;
#endif
#ifndef __IMILBitmapEffectFactory_FWD_DEFINED__
#define __IMILBitmapEffectFactory_FWD_DEFINED__
typedef interface IMILBitmapEffectFactory IMILBitmapEffectFactory;
#endif
#ifndef __IMILBitmapEffectPrimitive_FWD_DEFINED__
#define __IMILBitmapEffectPrimitive_FWD_DEFINED__
typedef interface IMILBitmapEffectPrimitive IMILBitmapEffectPrimitive;
#endif
#ifndef __IMILBitmapEffectPrimitiveImpl_FWD_DEFINED__
#define __IMILBitmapEffectPrimitiveImpl_FWD_DEFINED__
typedef interface IMILBitmapEffectPrimitiveImpl IMILBitmapEffectPrimitiveImpl;
#endif
#ifndef __IMILBitmapEffects_FWD_DEFINED__
#define __IMILBitmapEffects_FWD_DEFINED__
typedef interface IMILBitmapEffects IMILBitmapEffects;
#endif
#ifndef __IMILBitmapEffectConnector_FWD_DEFINED__
#define __IMILBitmapEffectConnector_FWD_DEFINED__
typedef interface IMILBitmapEffectConnector IMILBitmapEffectConnector;
#endif
#ifndef __IMILBitmapEffectInputConnector_FWD_DEFINED__
#define __IMILBitmapEffectInputConnector_FWD_DEFINED__
typedef interface IMILBitmapEffectInputConnector IMILBitmapEffectInputConnector;
#endif
#ifndef __IMILBitmapEffectOutputConnector_FWD_DEFINED__
#define __IMILBitmapEffectOutputConnector_FWD_DEFINED__
typedef interface IMILBitmapEffectOutputConnector IMILBitmapEffectOutputConnector;
#endif
#ifndef __IMILBitmapEffectOutputConnectorImpl_FWD_DEFINED__
#define __IMILBitmapEffectOutputConnectorImpl_FWD_DEFINED__
typedef interface IMILBitmapEffectOutputConnectorImpl IMILBitmapEffectOutputConnectorImpl;
#endif
#ifndef __IMILBitmapEffectInteriorInputConnector_FWD_DEFINED__
#define __IMILBitmapEffectInteriorInputConnector_FWD_DEFINED__
typedef interface IMILBitmapEffectInteriorInputConnector IMILBitmapEffectInteriorInputConnector;
#endif
#ifndef __IMILBitmapEffectInteriorOutputConnector_FWD_DEFINED__
#define __IMILBitmapEffectInteriorOutputConnector_FWD_DEFINED__
typedef interface IMILBitmapEffectInteriorOutputConnector IMILBitmapEffectInteriorOutputConnector;
#endif
#ifndef __IMILBitmapEffectEvents_FWD_DEFINED__
#define __IMILBitmapEffectEvents_FWD_DEFINED__
typedef interface IMILBitmapEffectEvents IMILBitmapEffectEvents;
#endif
#include <oaidl.h>
#include <ocidl.h>
#include <wincodec.h>
#if 0
typedef DWORD MilPoint2D;
typedef DWORD MilPointAndSizeD;
typedef DWORD MilMatrix3x2D;
#endif
#ifndef MILTYPES_DEFINED
typedef struct MilPointAndSizeD
{
	DOUBLE X;
	DOUBLE Y;
	DOUBLE Width;
	DOUBLE Height;
} MilPointAndSizeD;
typedef struct MilPoint2D
{
	DOUBLE X;
	DOUBLE Y;
} MilPoint2D;
typedef struct MilMatrix3x2D
{
	DOUBLE S_11;
	DOUBLE S_12;
	DOUBLE S_21;
	DOUBLE S_22;
	DOUBLE DX;
	DOUBLE DY;
} MilMatrix3x2D;
#endif
typedef MilPoint2D MIL_2DPOINTD;
typedef MilPointAndSizeD MIL_RECTD;
#ifndef MILCORE_MIL_MATRIX3X2D_COMPAT_TYPEDEF
typedef MilMatrix3x2D MIL_MATRIX3X2D;
#define MILCORE_MIL_MATRIX3X2D_COMPAT_TYPEDEF
#endif /* MILCORE_MIL_MATRIX3X2D_COMPAT_TYPEDEF */
extern RPC_IF_HANDLE __MIDL_itf_mileffects_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mileffects_0000_0000_v0_0_s_ifspec;
#ifndef __MILEffects_LIBRARY_DEFINED__
#define __MILEffects_LIBRARY_DEFINED__
#define MILBITMAPEFFECT_SDK_VERSION 0x01000000
DEFINE_GUID(CLSID_MILBitmapEffectGroup, 0xac9c1a9a, 0x7e18, 0x4f64, 0xac, 0x7e, 0x47, 0xcf, 0x7f, 0x05, 0x1e, 0x95);
DEFINE_GUID(CLSID_MILBitmapEffectBlur, 0xa924df87, 0x225d, 0x4373, 0x8f, 0x5b, 0xb9, 0xe, 0xc8, 0x5a, 0xe3, 0xde);
DEFINE_GUID(CLSID_MILBitmapEffectDropShadow, 0x459a3fbe, 0xd8ac, 0x4692, 0x87, 0x4b, 0x7a, 0x26, 0x57, 0x15, 0xaa, 0x16);
DEFINE_GUID(CLSID_MILBitmapEffectOuterGlow, 0xe2161bdd, 0x7eb6, 0x4725, 0x9c, 0x0b, 0x8a, 0x2a, 0x1b, 0x4f, 0x06, 0x67);
DEFINE_GUID(CLSID_MILBitmapEffectBevel, 0xfd361dbe, 0x6c9b, 0x4de0, 0x82, 0x90, 0xf6, 0x40, 0xc, 0x27, 0x37, 0xed);
DEFINE_GUID(CLSID_MILBitmapEffectEmboss, 0xcd299846, 0x824f, 0x47ec, 0xa0, 0x07, 0x12, 0xaa, 0x76, 0x7f, 0x28, 0x16);
extern STDMETHODIMP MILCreateBitmapEffectFactory(DWORD dwSDKVersion, IMILBitmapEffectFactory **ppFactory);
typedef REFGUID REFWICPixelFormatGUID;
typedef GUID WICPixelFormatGUID;
typedef struct MILMatrixF
{
	DOUBLE _11;
	DOUBLE _12;
	DOUBLE _13;
	DOUBLE _14;
	DOUBLE _21;
	DOUBLE _22;
	DOUBLE _23;
	DOUBLE _24;
	DOUBLE _31;
	DOUBLE _32;
	DOUBLE _33;
	DOUBLE _34;
	DOUBLE _41;
	DOUBLE _42;
	DOUBLE _43;
	DOUBLE _44;
} MILMatrixF;
extern const IID LIBID_MILEffects;
#ifndef __IMILBitmapEffectConnectorInfo_INTERFACE_DEFINED__
#define __IMILBitmapEffectConnectorInfo_INTERFACE_DEFINED__
extern const IID IID_IMILBitmapEffectConnectorInfo;
typedef struct IMILBitmapEffectConnectorInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMILBitmapEffectConnectorInfo *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMILBitmapEffectConnectorInfo *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMILBitmapEffectConnectorInfo *This);
	HRESULT(STDMETHODCALLTYPE *GetIndex) (IMILBitmapEffectConnectorInfo *This, ULONG *puiIndex);
	HRESULT(STDMETHODCALLTYPE *GetOptimalFormat) (IMILBitmapEffectConnectorInfo *This, WICPixelFormatGUID *pFormat);
	HRESULT(STDMETHODCALLTYPE *GetNumberFormats) (IMILBitmapEffectConnectorInfo *This, ULONG *pulNumberFormats);
	HRESULT(STDMETHODCALLTYPE *GetFormat) (IMILBitmapEffectConnectorInfo *This, ULONG ulIndex, WICPixelFormatGUID *pFormat);
	END_INTERFACE
}  IMILBitmapEffectConnectorInfoVtbl;
interface IMILBitmapEffectConnectorInfo
{
	CONST_VTBL struct IMILBitmapEffectConnectorInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMILBitmapEffectConnectorInfo_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMILBitmapEffectConnectorInfo_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMILBitmapEffectConnectorInfo_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMILBitmapEffectConnectorInfo_GetIndex(This,puiIndex) ( (This)->lpVtbl -> GetIndex(This,puiIndex) )
#define IMILBitmapEffectConnectorInfo_GetOptimalFormat(This,pFormat) ( (This)->lpVtbl -> GetOptimalFormat(This,pFormat) )
#define IMILBitmapEffectConnectorInfo_GetNumberFormats(This,pulNumberFormats) ( (This)->lpVtbl -> GetNumberFormats(This,pulNumberFormats) )
#define IMILBitmapEffectConnectorInfo_GetFormat(This,ulIndex,pFormat) ( (This)->lpVtbl -> GetFormat(This,ulIndex,pFormat) )
#endif
#endif
#ifndef __IMILBitmapEffectConnectionsInfo_INTERFACE_DEFINED__
#define __IMILBitmapEffectConnectionsInfo_INTERFACE_DEFINED__
extern const IID IID_IMILBitmapEffectConnectionsInfo;
typedef struct IMILBitmapEffectConnectionsInfoVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMILBitmapEffectConnectionsInfo *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMILBitmapEffectConnectionsInfo *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMILBitmapEffectConnectionsInfo *This);
	HRESULT(STDMETHODCALLTYPE *GetNumberInputs) (IMILBitmapEffectConnectionsInfo *This, ULONG *puiNumInputs);
	HRESULT(STDMETHODCALLTYPE *GetNumberOutputs) (IMILBitmapEffectConnectionsInfo *This, ULONG *puiNumOutputs);
	HRESULT(STDMETHODCALLTYPE *GetInputConnectorInfo) (IMILBitmapEffectConnectionsInfo *This, ULONG uiIndex, IMILBitmapEffectConnectorInfo **ppConnectorInfo);
	HRESULT(STDMETHODCALLTYPE *GetOutputConnectorInfo) (IMILBitmapEffectConnectionsInfo *This, ULONG uiIndex, IMILBitmapEffectConnectorInfo **ppConnectorInfo);
	END_INTERFACE
}  IMILBitmapEffectConnectionsInfoVtbl;
interface IMILBitmapEffectConnectionsInfo
{
	CONST_VTBL struct IMILBitmapEffectConnectionsInfoVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMILBitmapEffectConnectionsInfo_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMILBitmapEffectConnectionsInfo_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMILBitmapEffectConnectionsInfo_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMILBitmapEffectConnectionsInfo_GetNumberInputs(This,puiNumInputs) ( (This)->lpVtbl -> GetNumberInputs(This,puiNumInputs) )
#define IMILBitmapEffectConnectionsInfo_GetNumberOutputs(This,puiNumOutputs) ( (This)->lpVtbl -> GetNumberOutputs(This,puiNumOutputs) )
#define IMILBitmapEffectConnectionsInfo_GetInputConnectorInfo(This,uiIndex,ppConnectorInfo) ( (This)->lpVtbl -> GetInputConnectorInfo(This,uiIndex,ppConnectorInfo) )
#define IMILBitmapEffectConnectionsInfo_GetOutputConnectorInfo(This,uiIndex,ppConnectorInfo) ( (This)->lpVtbl -> GetOutputConnectorInfo(This,uiIndex,ppConnectorInfo) )
#endif
#endif
#ifndef __IMILBitmapEffectConnections_INTERFACE_DEFINED__
#define __IMILBitmapEffectConnections_INTERFACE_DEFINED__
extern const IID IID_IMILBitmapEffectConnections;
typedef struct IMILBitmapEffectConnectionsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMILBitmapEffectConnections *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMILBitmapEffectConnections *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMILBitmapEffectConnections *This);
	HRESULT(STDMETHODCALLTYPE *GetInputConnector) (IMILBitmapEffectConnections *This, ULONG uiIndex, IMILBitmapEffectInputConnector **ppConnector);
	HRESULT(STDMETHODCALLTYPE *GetOutputConnector) (IMILBitmapEffectConnections *This, ULONG uiIndex, IMILBitmapEffectOutputConnector **ppConnector);
	END_INTERFACE
}  IMILBitmapEffectConnectionsVtbl;
interface IMILBitmapEffectConnections
{
	CONST_VTBL struct IMILBitmapEffectConnectionsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMILBitmapEffectConnections_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMILBitmapEffectConnections_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMILBitmapEffectConnections_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMILBitmapEffectConnections_GetInputConnector(This,uiIndex,ppConnector) ( (This)->lpVtbl -> GetInputConnector(This,uiIndex,ppConnector) )
#define IMILBitmapEffectConnections_GetOutputConnector(This,uiIndex,ppConnector) ( (This)->lpVtbl -> GetOutputConnector(This,uiIndex,ppConnector) )
#endif
#endif
#ifndef __IMILBitmapEffect_INTERFACE_DEFINED__
#define __IMILBitmapEffect_INTERFACE_DEFINED__
extern const IID IID_IMILBitmapEffect;
typedef struct IMILBitmapEffectVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMILBitmapEffect *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMILBitmapEffect *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMILBitmapEffect *This);
	HRESULT(STDMETHODCALLTYPE *GetOutput) (IMILBitmapEffect *This, ULONG uiIndex, IMILBitmapEffectRenderContext *pContext, IWICBitmapSource **ppBitmapSource);
	HRESULT(STDMETHODCALLTYPE *GetParentEffect) (IMILBitmapEffect *This, IMILBitmapEffectGroup **ppParentEffect);
	HRESULT(STDMETHODCALLTYPE *SetInputSource) (IMILBitmapEffect *This, ULONG uiIndex, IWICBitmapSource *pBitmapSource);
	END_INTERFACE
}  IMILBitmapEffectVtbl;
interface IMILBitmapEffect
{
	CONST_VTBL struct IMILBitmapEffectVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMILBitmapEffect_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMILBitmapEffect_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMILBitmapEffect_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMILBitmapEffect_GetOutput(This,uiIndex,pContext,ppBitmapSource) ( (This)->lpVtbl -> GetOutput(This,uiIndex,pContext,ppBitmapSource) )
#define IMILBitmapEffect_GetParentEffect(This,ppParentEffect) ( (This)->lpVtbl -> GetParentEffect(This,ppParentEffect) )
#define IMILBitmapEffect_SetInputSource(This,uiIndex,pBitmapSource) ( (This)->lpVtbl -> SetInputSource(This,uiIndex,pBitmapSource) )
#endif
#endif
#ifndef __IMILBitmapEffectImpl_INTERFACE_DEFINED__
#define __IMILBitmapEffectImpl_INTERFACE_DEFINED__
extern const IID IID_IMILBitmapEffectImpl;
typedef struct IMILBitmapEffectImplVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMILBitmapEffectImpl *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMILBitmapEffectImpl *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMILBitmapEffectImpl *This);
	HRESULT(STDMETHODCALLTYPE *IsInPlaceModificationAllowed) (IMILBitmapEffectImpl *This, IMILBitmapEffectOutputConnector *pOutputConnector, VARIANT_BOOL *pfModifyInPlace);
	HRESULT(STDMETHODCALLTYPE *SetParentEffect) (IMILBitmapEffectImpl *This, IMILBitmapEffectGroup *pParentEffect);
	HRESULT(STDMETHODCALLTYPE *GetInputSource) (IMILBitmapEffectImpl *This, ULONG uiIndex, IWICBitmapSource **ppBitmapSource);
	HRESULT(STDMETHODCALLTYPE *GetInputSourceBounds) (IMILBitmapEffectImpl *This, ULONG uiIndex, MilPointAndSizeD *pRect);
	HRESULT(STDMETHODCALLTYPE *GetInputBitmapSource) (IMILBitmapEffectImpl *This, ULONG uiIndex, IMILBitmapEffectRenderContext *pRenderContext, VARIANT_BOOL *pfModifyInPlace, IWICBitmapSource **ppBitmapSource);
	HRESULT(STDMETHODCALLTYPE *GetOutputBitmapSource) (IMILBitmapEffectImpl *This, ULONG uiIndex, IMILBitmapEffectRenderContext *pRenderContext, VARIANT_BOOL *pfModifyInPlace, IWICBitmapSource **ppBitmapSource);
	HRESULT(STDMETHODCALLTYPE *Initialize) (IMILBitmapEffectImpl *This, IUnknown *pInner);
	END_INTERFACE
}  IMILBitmapEffectImplVtbl;
interface IMILBitmapEffectImpl
{
	CONST_VTBL struct IMILBitmapEffectImplVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMILBitmapEffectImpl_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMILBitmapEffectImpl_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMILBitmapEffectImpl_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMILBitmapEffectImpl_IsInPlaceModificationAllowed(This,pOutputConnector,pfModifyInPlace) ( (This)->lpVtbl -> IsInPlaceModificationAllowed(This,pOutputConnector,pfModifyInPlace) )
#define IMILBitmapEffectImpl_SetParentEffect(This,pParentEffect) ( (This)->lpVtbl -> SetParentEffect(This,pParentEffect) )
#define IMILBitmapEffectImpl_GetInputSource(This,uiIndex,ppBitmapSource) ( (This)->lpVtbl -> GetInputSource(This,uiIndex,ppBitmapSource) )
#define IMILBitmapEffectImpl_GetInputSourceBounds(This,uiIndex,pRect) ( (This)->lpVtbl -> GetInputSourceBounds(This,uiIndex,pRect) )
#define IMILBitmapEffectImpl_GetInputBitmapSource(This,uiIndex,pRenderContext,pfModifyInPlace,ppBitmapSource) ( (This)->lpVtbl -> GetInputBitmapSource(This,uiIndex,pRenderContext,pfModifyInPlace,ppBitmapSource) )
#define IMILBitmapEffectImpl_GetOutputBitmapSource(This,uiIndex,pRenderContext,pfModifyInPlace,ppBitmapSource) ( (This)->lpVtbl -> GetOutputBitmapSource(This,uiIndex,pRenderContext,pfModifyInPlace,ppBitmapSource) )
#define IMILBitmapEffectImpl_Initialize(This,pInner) ( (This)->lpVtbl -> Initialize(This,pInner) )
#endif
#endif
#ifndef __IMILBitmapEffectGroup_INTERFACE_DEFINED__
#define __IMILBitmapEffectGroup_INTERFACE_DEFINED__
extern const IID IID_IMILBitmapEffectGroup;
typedef struct IMILBitmapEffectGroupVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMILBitmapEffectGroup *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMILBitmapEffectGroup *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMILBitmapEffectGroup *This);
	HRESULT(STDMETHODCALLTYPE *GetInteriorInputConnector) (IMILBitmapEffectGroup *This, ULONG uiIndex, IMILBitmapEffectOutputConnector **ppConnector);
	HRESULT(STDMETHODCALLTYPE *GetInteriorOutputConnector) (IMILBitmapEffectGroup *This, ULONG uiIndex, IMILBitmapEffectInputConnector **ppConnector);
	HRESULT(STDMETHODCALLTYPE *Add) (IMILBitmapEffectGroup *This, IMILBitmapEffect *pEffect);
	END_INTERFACE
}  IMILBitmapEffectGroupVtbl;
interface IMILBitmapEffectGroup
{
	CONST_VTBL struct IMILBitmapEffectGroupVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMILBitmapEffectGroup_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMILBitmapEffectGroup_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMILBitmapEffectGroup_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMILBitmapEffectGroup_GetInteriorInputConnector(This,uiIndex,ppConnector) ( (This)->lpVtbl -> GetInteriorInputConnector(This,uiIndex,ppConnector) )
#define IMILBitmapEffectGroup_GetInteriorOutputConnector(This,uiIndex,ppConnector) ( (This)->lpVtbl -> GetInteriorOutputConnector(This,uiIndex,ppConnector) )
#define IMILBitmapEffectGroup_Add(This,pEffect) ( (This)->lpVtbl -> Add(This,pEffect) )
#endif
#endif
#ifndef __IMILBitmapEffectGroupImpl_INTERFACE_DEFINED__
#define __IMILBitmapEffectGroupImpl_INTERFACE_DEFINED__
extern const IID IID_IMILBitmapEffectGroupImpl;
typedef struct IMILBitmapEffectGroupImplVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMILBitmapEffectGroupImpl *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMILBitmapEffectGroupImpl *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMILBitmapEffectGroupImpl *This);
	HRESULT(STDMETHODCALLTYPE *Preprocess) (IMILBitmapEffectGroupImpl *This, IMILBitmapEffectRenderContext *pContext);
	HRESULT(STDMETHODCALLTYPE *GetNumberChildren) (IMILBitmapEffectGroupImpl *This, ULONG *puiNumberChildren);
	HRESULT(STDMETHODCALLTYPE *GetChildren) (IMILBitmapEffectGroupImpl *This, IMILBitmapEffects **pChildren);
	END_INTERFACE
}  IMILBitmapEffectGroupImplVtbl;
interface IMILBitmapEffectGroupImpl
{
	CONST_VTBL struct IMILBitmapEffectGroupImplVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMILBitmapEffectGroupImpl_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMILBitmapEffectGroupImpl_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMILBitmapEffectGroupImpl_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMILBitmapEffectGroupImpl_Preprocess(This,pContext) ( (This)->lpVtbl -> Preprocess(This,pContext) )
#define IMILBitmapEffectGroupImpl_GetNumberChildren(This,puiNumberChildren) ( (This)->lpVtbl -> GetNumberChildren(This,puiNumberChildren) )
#define IMILBitmapEffectGroupImpl_GetChildren(This,pChildren) ( (This)->lpVtbl -> GetChildren(This,pChildren) )
#endif
#endif
#ifndef __IMILBitmapEffectRenderContext_INTERFACE_DEFINED__
#define __IMILBitmapEffectRenderContext_INTERFACE_DEFINED__
extern const IID IID_IMILBitmapEffectRenderContext;
typedef struct IMILBitmapEffectRenderContextVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMILBitmapEffectRenderContext *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMILBitmapEffectRenderContext *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMILBitmapEffectRenderContext *This);
	HRESULT(STDMETHODCALLTYPE *SetOutputPixelFormat) (IMILBitmapEffectRenderContext *This, REFWICPixelFormatGUID format);
	HRESULT(STDMETHODCALLTYPE *GetOutputPixelFormat) (IMILBitmapEffectRenderContext *This, WICPixelFormatGUID *pFormat);
	HRESULT(STDMETHODCALLTYPE *SetUseSoftwareRenderer) (IMILBitmapEffectRenderContext *This, VARIANT_BOOL fSoftware);
	HRESULT(STDMETHODCALLTYPE *SetInitialTransform) (IMILBitmapEffectRenderContext *This, MILMatrixF *pMatrix);
	HRESULT(STDMETHODCALLTYPE *GetFinalTransform) (IMILBitmapEffectRenderContext *This, MILMatrixF *pMatrix);
	HRESULT(STDMETHODCALLTYPE *SetOutputDPI) (IMILBitmapEffectRenderContext *This, double dblDpiX, double dblDpiY);
	HRESULT(STDMETHODCALLTYPE *GetOutputDPI) (IMILBitmapEffectRenderContext *This, double *pdblDpiX, double *pdblDpiY);
	HRESULT(STDMETHODCALLTYPE *SetRegionOfInterest) (IMILBitmapEffectRenderContext *This, MilPointAndSizeD *pRect);
	END_INTERFACE
}  IMILBitmapEffectRenderContextVtbl;
interface IMILBitmapEffectRenderContext
{
	CONST_VTBL struct IMILBitmapEffectRenderContextVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMILBitmapEffectRenderContext_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMILBitmapEffectRenderContext_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMILBitmapEffectRenderContext_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMILBitmapEffectRenderContext_SetOutputPixelFormat(This,format) ( (This)->lpVtbl -> SetOutputPixelFormat(This,format) )
#define IMILBitmapEffectRenderContext_GetOutputPixelFormat(This,pFormat) ( (This)->lpVtbl -> GetOutputPixelFormat(This,pFormat) )
#define IMILBitmapEffectRenderContext_SetUseSoftwareRenderer(This,fSoftware) ( (This)->lpVtbl -> SetUseSoftwareRenderer(This,fSoftware) )
#define IMILBitmapEffectRenderContext_SetInitialTransform(This,pMatrix) ( (This)->lpVtbl -> SetInitialTransform(This,pMatrix) )
#define IMILBitmapEffectRenderContext_GetFinalTransform(This,pMatrix) ( (This)->lpVtbl -> GetFinalTransform(This,pMatrix) )
#define IMILBitmapEffectRenderContext_SetOutputDPI(This,dblDpiX,dblDpiY) ( (This)->lpVtbl -> SetOutputDPI(This,dblDpiX,dblDpiY) )
#define IMILBitmapEffectRenderContext_GetOutputDPI(This,pdblDpiX,pdblDpiY) ( (This)->lpVtbl -> GetOutputDPI(This,pdblDpiX,pdblDpiY) )
#define IMILBitmapEffectRenderContext_SetRegionOfInterest(This,pRect) ( (This)->lpVtbl -> SetRegionOfInterest(This,pRect) )
#endif
#endif
#ifndef __IMILBitmapEffectRenderContextImpl_INTERFACE_DEFINED__
#define __IMILBitmapEffectRenderContextImpl_INTERFACE_DEFINED__
extern const IID IID_IMILBitmapEffectRenderContextImpl;
typedef struct IMILBitmapEffectRenderContextImplVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMILBitmapEffectRenderContextImpl *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMILBitmapEffectRenderContextImpl *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMILBitmapEffectRenderContextImpl *This);
	HRESULT(STDMETHODCALLTYPE *GetUseSoftwareRenderer) (IMILBitmapEffectRenderContextImpl *This, VARIANT_BOOL *pfSoftware);
	HRESULT(STDMETHODCALLTYPE *GetTransform) (IMILBitmapEffectRenderContextImpl *This, MILMatrixF *pMatrix);
	HRESULT(STDMETHODCALLTYPE *UpdateTransform) (IMILBitmapEffectRenderContextImpl *This, MILMatrixF *pMatrix);
	HRESULT(STDMETHODCALLTYPE *GetOutputBounds) (IMILBitmapEffectRenderContextImpl *This, MilPointAndSizeD *pRect);
	HRESULT(STDMETHODCALLTYPE *UpdateOutputBounds) (IMILBitmapEffectRenderContextImpl *This, MilPointAndSizeD *pRect);
	END_INTERFACE
}  IMILBitmapEffectRenderContextImplVtbl;
interface IMILBitmapEffectRenderContextImpl
{
	CONST_VTBL struct IMILBitmapEffectRenderContextImplVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMILBitmapEffectRenderContextImpl_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMILBitmapEffectRenderContextImpl_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMILBitmapEffectRenderContextImpl_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMILBitmapEffectRenderContextImpl_GetUseSoftwareRenderer(This,pfSoftware) ( (This)->lpVtbl -> GetUseSoftwareRenderer(This,pfSoftware) )
#define IMILBitmapEffectRenderContextImpl_GetTransform(This,pMatrix) ( (This)->lpVtbl -> GetTransform(This,pMatrix) )
#define IMILBitmapEffectRenderContextImpl_UpdateTransform(This,pMatrix) ( (This)->lpVtbl -> UpdateTransform(This,pMatrix) )
#define IMILBitmapEffectRenderContextImpl_GetOutputBounds(This,pRect) ( (This)->lpVtbl -> GetOutputBounds(This,pRect) )
#define IMILBitmapEffectRenderContextImpl_UpdateOutputBounds(This,pRect) ( (This)->lpVtbl -> UpdateOutputBounds(This,pRect) )
#endif
#endif
#ifndef __IMILBitmapEffectFactory_INTERFACE_DEFINED__
#define __IMILBitmapEffectFactory_INTERFACE_DEFINED__
extern const IID IID_IMILBitmapEffectFactory;
typedef struct IMILBitmapEffectFactoryVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMILBitmapEffectFactory *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMILBitmapEffectFactory *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMILBitmapEffectFactory *This);
	HRESULT(STDMETHODCALLTYPE *CreateEffect) (IMILBitmapEffectFactory *This, const GUID *pguidEffect, IMILBitmapEffect **ppEffect);
	HRESULT(STDMETHODCALLTYPE *CreateContext) (IMILBitmapEffectFactory *This, IMILBitmapEffectRenderContext **ppContext);
	HRESULT(STDMETHODCALLTYPE *CreateEffectOuter) (IMILBitmapEffectFactory *This, IMILBitmapEffect **ppEffect);
	END_INTERFACE
}  IMILBitmapEffectFactoryVtbl;
interface IMILBitmapEffectFactory
{
	CONST_VTBL struct IMILBitmapEffectFactoryVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMILBitmapEffectFactory_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMILBitmapEffectFactory_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMILBitmapEffectFactory_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMILBitmapEffectFactory_CreateEffect(This,pguidEffect,ppEffect) ( (This)->lpVtbl -> CreateEffect(This,pguidEffect,ppEffect) )
#define IMILBitmapEffectFactory_CreateContext(This,ppContext) ( (This)->lpVtbl -> CreateContext(This,ppContext) )
#define IMILBitmapEffectFactory_CreateEffectOuter(This,ppEffect) ( (This)->lpVtbl -> CreateEffectOuter(This,ppEffect) )
#endif
#endif
#ifndef __IMILBitmapEffectPrimitive_INTERFACE_DEFINED__
#define __IMILBitmapEffectPrimitive_INTERFACE_DEFINED__
extern const IID IID_IMILBitmapEffectPrimitive;
typedef struct IMILBitmapEffectPrimitiveVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMILBitmapEffectPrimitive *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMILBitmapEffectPrimitive *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMILBitmapEffectPrimitive *This);
	HRESULT(STDMETHODCALLTYPE *GetOutput) (IMILBitmapEffectPrimitive *This, ULONG uiIndex, IMILBitmapEffectRenderContext *pContext, VARIANT_BOOL *pfModifyInPlace, IWICBitmapSource **ppBitmapSource);
	HRESULT(STDMETHODCALLTYPE *TransformPoint) (IMILBitmapEffectPrimitive *This, ULONG uiIndex, MilPoint2D *p, VARIANT_BOOL fForwardTransform, IMILBitmapEffectRenderContext *pContext, VARIANT_BOOL *pfPointTransformed);
	HRESULT(STDMETHODCALLTYPE *TransformRect) (IMILBitmapEffectPrimitive *This, ULONG uiIndex, MilPointAndSizeD *p, VARIANT_BOOL fForwardTransform, IMILBitmapEffectRenderContext *pContext);
	HRESULT(STDMETHODCALLTYPE *HasAffineTransform) (IMILBitmapEffectPrimitive *This, ULONG uiIndex, VARIANT_BOOL *pfAffine);
	HRESULT(STDMETHODCALLTYPE *HasInverseTransform) (IMILBitmapEffectPrimitive *This, ULONG uiIndex, VARIANT_BOOL *pfHasInverse);
	HRESULT(STDMETHODCALLTYPE *GetAffineMatrix) (IMILBitmapEffectPrimitive *This, ULONG uiIndex, MilMatrix3x2D *pMatrix);
	END_INTERFACE
}  IMILBitmapEffectPrimitiveVtbl;
interface IMILBitmapEffectPrimitive
{
	CONST_VTBL struct IMILBitmapEffectPrimitiveVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMILBitmapEffectPrimitive_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMILBitmapEffectPrimitive_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMILBitmapEffectPrimitive_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMILBitmapEffectPrimitive_GetOutput(This,uiIndex,pContext,pfModifyInPlace,ppBitmapSource) ( (This)->lpVtbl -> GetOutput(This,uiIndex,pContext,pfModifyInPlace,ppBitmapSource) )
#define IMILBitmapEffectPrimitive_TransformPoint(This,uiIndex,p,fForwardTransform,pContext,pfPointTransformed) ( (This)->lpVtbl -> TransformPoint(This,uiIndex,p,fForwardTransform,pContext,pfPointTransformed) )
#define IMILBitmapEffectPrimitive_TransformRect(This,uiIndex,p,fForwardTransform,pContext) ( (This)->lpVtbl -> TransformRect(This,uiIndex,p,fForwardTransform,pContext) )
#define IMILBitmapEffectPrimitive_HasAffineTransform(This,uiIndex,pfAffine) ( (This)->lpVtbl -> HasAffineTransform(This,uiIndex,pfAffine) )
#define IMILBitmapEffectPrimitive_HasInverseTransform(This,uiIndex,pfHasInverse) ( (This)->lpVtbl -> HasInverseTransform(This,uiIndex,pfHasInverse) )
#define IMILBitmapEffectPrimitive_GetAffineMatrix(This,uiIndex,pMatrix) ( (This)->lpVtbl -> GetAffineMatrix(This,uiIndex,pMatrix) )
#endif
#endif
#ifndef __IMILBitmapEffectPrimitiveImpl_INTERFACE_DEFINED__
#define __IMILBitmapEffectPrimitiveImpl_INTERFACE_DEFINED__
extern const IID IID_IMILBitmapEffectPrimitiveImpl;
typedef struct IMILBitmapEffectPrimitiveImplVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMILBitmapEffectPrimitiveImpl *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMILBitmapEffectPrimitiveImpl *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMILBitmapEffectPrimitiveImpl *This);
	HRESULT(STDMETHODCALLTYPE *IsDirty) (IMILBitmapEffectPrimitiveImpl *This, ULONG uiOutputIndex, VARIANT_BOOL *pfDirty);
	HRESULT(STDMETHODCALLTYPE *IsVolatile) (IMILBitmapEffectPrimitiveImpl *This, ULONG uiOutputIndex, VARIANT_BOOL *pfVolatile);
	END_INTERFACE
}  IMILBitmapEffectPrimitiveImplVtbl;
interface IMILBitmapEffectPrimitiveImpl
{
	CONST_VTBL struct IMILBitmapEffectPrimitiveImplVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMILBitmapEffectPrimitiveImpl_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMILBitmapEffectPrimitiveImpl_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMILBitmapEffectPrimitiveImpl_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMILBitmapEffectPrimitiveImpl_IsDirty(This,uiOutputIndex,pfDirty) ( (This)->lpVtbl -> IsDirty(This,uiOutputIndex,pfDirty) )
#define IMILBitmapEffectPrimitiveImpl_IsVolatile(This,uiOutputIndex,pfVolatile) ( (This)->lpVtbl -> IsVolatile(This,uiOutputIndex,pfVolatile) )
#endif
#endif
#ifndef __IMILBitmapEffects_INTERFACE_DEFINED__
#define __IMILBitmapEffects_INTERFACE_DEFINED__
extern const IID IID_IMILBitmapEffects;
typedef struct IMILBitmapEffectsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMILBitmapEffects *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMILBitmapEffects *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMILBitmapEffects *This);
	HRESULT(STDMETHODCALLTYPE *_NewEnum) (IMILBitmapEffects *This, IUnknown **ppiuReturn);
	HRESULT(STDMETHODCALLTYPE *get_Parent) (IMILBitmapEffects *This, IMILBitmapEffectGroup **ppEffect);
	HRESULT(STDMETHODCALLTYPE *Item) (IMILBitmapEffects *This, ULONG uindex, IMILBitmapEffect **ppEffect);
	HRESULT(STDMETHODCALLTYPE *get_Count) (IMILBitmapEffects *This, ULONG *puiCount);
	END_INTERFACE
}  IMILBitmapEffectsVtbl;
interface IMILBitmapEffects
{
	CONST_VTBL struct IMILBitmapEffectsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMILBitmapEffects_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMILBitmapEffects_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMILBitmapEffects_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMILBitmapEffects__NewEnum(This,ppiuReturn) ( (This)->lpVtbl -> _NewEnum(This,ppiuReturn) )
#define IMILBitmapEffects_get_Parent(This,ppEffect) ( (This)->lpVtbl -> get_Parent(This,ppEffect) )
#define IMILBitmapEffects_Item(This,uindex,ppEffect) ( (This)->lpVtbl -> Item(This,uindex,ppEffect) )
#define IMILBitmapEffects_get_Count(This,puiCount) ( (This)->lpVtbl -> get_Count(This,puiCount) )
#endif
#endif
#ifndef __IMILBitmapEffectConnector_INTERFACE_DEFINED__
#define __IMILBitmapEffectConnector_INTERFACE_DEFINED__
extern const IID IID_IMILBitmapEffectConnector;
typedef struct IMILBitmapEffectConnectorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMILBitmapEffectConnector *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMILBitmapEffectConnector *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMILBitmapEffectConnector *This);
	HRESULT(STDMETHODCALLTYPE *GetIndex) (IMILBitmapEffectConnector *This, ULONG *puiIndex);
	HRESULT(STDMETHODCALLTYPE *GetOptimalFormat) (IMILBitmapEffectConnector *This, WICPixelFormatGUID *pFormat);
	HRESULT(STDMETHODCALLTYPE *GetNumberFormats) (IMILBitmapEffectConnector *This, ULONG *pulNumberFormats);
	HRESULT(STDMETHODCALLTYPE *GetFormat) (IMILBitmapEffectConnector *This, ULONG ulIndex, WICPixelFormatGUID *pFormat);
	HRESULT(STDMETHODCALLTYPE *IsConnected) (IMILBitmapEffectConnector *This, VARIANT_BOOL *pfConnected);
	HRESULT(STDMETHODCALLTYPE *GetBitmapEffect) (IMILBitmapEffectConnector *This, IMILBitmapEffect **ppEffect);
	END_INTERFACE
}  IMILBitmapEffectConnectorVtbl;
interface IMILBitmapEffectConnector
{
	CONST_VTBL struct IMILBitmapEffectConnectorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMILBitmapEffectConnector_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMILBitmapEffectConnector_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMILBitmapEffectConnector_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMILBitmapEffectConnector_GetIndex(This,puiIndex) ( (This)->lpVtbl -> GetIndex(This,puiIndex) )
#define IMILBitmapEffectConnector_GetOptimalFormat(This,pFormat) ( (This)->lpVtbl -> GetOptimalFormat(This,pFormat) )
#define IMILBitmapEffectConnector_GetNumberFormats(This,pulNumberFormats) ( (This)->lpVtbl -> GetNumberFormats(This,pulNumberFormats) )
#define IMILBitmapEffectConnector_GetFormat(This,ulIndex,pFormat) ( (This)->lpVtbl -> GetFormat(This,ulIndex,pFormat) )
#define IMILBitmapEffectConnector_IsConnected(This,pfConnected) ( (This)->lpVtbl -> IsConnected(This,pfConnected) )
#define IMILBitmapEffectConnector_GetBitmapEffect(This,ppEffect) ( (This)->lpVtbl -> GetBitmapEffect(This,ppEffect) )
#endif
#endif
#ifndef __IMILBitmapEffectInputConnector_INTERFACE_DEFINED__
#define __IMILBitmapEffectInputConnector_INTERFACE_DEFINED__
extern const IID IID_IMILBitmapEffectInputConnector;
typedef struct IMILBitmapEffectInputConnectorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMILBitmapEffectInputConnector *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMILBitmapEffectInputConnector *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMILBitmapEffectInputConnector *This);
	HRESULT(STDMETHODCALLTYPE *GetIndex) (IMILBitmapEffectInputConnector *This, ULONG *puiIndex);
	HRESULT(STDMETHODCALLTYPE *GetOptimalFormat) (IMILBitmapEffectInputConnector *This, WICPixelFormatGUID *pFormat);
	HRESULT(STDMETHODCALLTYPE *GetNumberFormats) (IMILBitmapEffectInputConnector *This, ULONG *pulNumberFormats);
	HRESULT(STDMETHODCALLTYPE *GetFormat) (IMILBitmapEffectInputConnector *This, ULONG ulIndex, WICPixelFormatGUID *pFormat);
	HRESULT(STDMETHODCALLTYPE *IsConnected) (IMILBitmapEffectInputConnector *This, VARIANT_BOOL *pfConnected);
	HRESULT(STDMETHODCALLTYPE *GetBitmapEffect) (IMILBitmapEffectInputConnector *This, IMILBitmapEffect **ppEffect);
	HRESULT(STDMETHODCALLTYPE *ConnectTo) (IMILBitmapEffectInputConnector *This, IMILBitmapEffectOutputConnector *pConnector);
	HRESULT(STDMETHODCALLTYPE *GetConnection) (IMILBitmapEffectInputConnector *This, IMILBitmapEffectOutputConnector **ppConnector);
	END_INTERFACE
}  IMILBitmapEffectInputConnectorVtbl;
interface IMILBitmapEffectInputConnector
{
	CONST_VTBL struct IMILBitmapEffectInputConnectorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMILBitmapEffectInputConnector_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMILBitmapEffectInputConnector_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMILBitmapEffectInputConnector_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMILBitmapEffectInputConnector_GetIndex(This,puiIndex) ( (This)->lpVtbl -> GetIndex(This,puiIndex) )
#define IMILBitmapEffectInputConnector_GetOptimalFormat(This,pFormat) ( (This)->lpVtbl -> GetOptimalFormat(This,pFormat) )
#define IMILBitmapEffectInputConnector_GetNumberFormats(This,pulNumberFormats) ( (This)->lpVtbl -> GetNumberFormats(This,pulNumberFormats) )
#define IMILBitmapEffectInputConnector_GetFormat(This,ulIndex,pFormat) ( (This)->lpVtbl -> GetFormat(This,ulIndex,pFormat) )
#define IMILBitmapEffectInputConnector_IsConnected(This,pfConnected) ( (This)->lpVtbl -> IsConnected(This,pfConnected) )
#define IMILBitmapEffectInputConnector_GetBitmapEffect(This,ppEffect) ( (This)->lpVtbl -> GetBitmapEffect(This,ppEffect) )
#define IMILBitmapEffectInputConnector_ConnectTo(This,pConnector) ( (This)->lpVtbl -> ConnectTo(This,pConnector) )
#define IMILBitmapEffectInputConnector_GetConnection(This,ppConnector) ( (This)->lpVtbl -> GetConnection(This,ppConnector) )
#endif
#endif
#ifndef __IMILBitmapEffectOutputConnector_INTERFACE_DEFINED__
#define __IMILBitmapEffectOutputConnector_INTERFACE_DEFINED__
extern const IID IID_IMILBitmapEffectOutputConnector;
typedef struct IMILBitmapEffectOutputConnectorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMILBitmapEffectOutputConnector *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMILBitmapEffectOutputConnector *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMILBitmapEffectOutputConnector *This);
	HRESULT(STDMETHODCALLTYPE *GetIndex) (IMILBitmapEffectOutputConnector *This, ULONG *puiIndex);
	HRESULT(STDMETHODCALLTYPE *GetOptimalFormat) (IMILBitmapEffectOutputConnector *This, WICPixelFormatGUID *pFormat);
	HRESULT(STDMETHODCALLTYPE *GetNumberFormats) (IMILBitmapEffectOutputConnector *This, ULONG *pulNumberFormats);
	HRESULT(STDMETHODCALLTYPE *GetFormat) (IMILBitmapEffectOutputConnector *This, ULONG ulIndex, WICPixelFormatGUID *pFormat);
	HRESULT(STDMETHODCALLTYPE *IsConnected) (IMILBitmapEffectOutputConnector *This, VARIANT_BOOL *pfConnected);
	HRESULT(STDMETHODCALLTYPE *GetBitmapEffect) (IMILBitmapEffectOutputConnector *This, IMILBitmapEffect **ppEffect);
	HRESULT(STDMETHODCALLTYPE *GetNumberConnections) (IMILBitmapEffectOutputConnector *This, ULONG *puiNumberConnections);
	HRESULT(STDMETHODCALLTYPE *GetConnection) (IMILBitmapEffectOutputConnector *This, ULONG uiIndex, IMILBitmapEffectInputConnector **ppConnection);
	END_INTERFACE
}  IMILBitmapEffectOutputConnectorVtbl;
interface IMILBitmapEffectOutputConnector
{
	CONST_VTBL struct IMILBitmapEffectOutputConnectorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMILBitmapEffectOutputConnector_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMILBitmapEffectOutputConnector_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMILBitmapEffectOutputConnector_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMILBitmapEffectOutputConnector_GetIndex(This,puiIndex) ( (This)->lpVtbl -> GetIndex(This,puiIndex) )
#define IMILBitmapEffectOutputConnector_GetOptimalFormat(This,pFormat) ( (This)->lpVtbl -> GetOptimalFormat(This,pFormat) )
#define IMILBitmapEffectOutputConnector_GetNumberFormats(This,pulNumberFormats) ( (This)->lpVtbl -> GetNumberFormats(This,pulNumberFormats) )
#define IMILBitmapEffectOutputConnector_GetFormat(This,ulIndex,pFormat) ( (This)->lpVtbl -> GetFormat(This,ulIndex,pFormat) )
#define IMILBitmapEffectOutputConnector_IsConnected(This,pfConnected) ( (This)->lpVtbl -> IsConnected(This,pfConnected) )
#define IMILBitmapEffectOutputConnector_GetBitmapEffect(This,ppEffect) ( (This)->lpVtbl -> GetBitmapEffect(This,ppEffect) )
#define IMILBitmapEffectOutputConnector_GetNumberConnections(This,puiNumberConnections) ( (This)->lpVtbl -> GetNumberConnections(This,puiNumberConnections) )
#define IMILBitmapEffectOutputConnector_GetConnection(This,uiIndex,ppConnection) ( (This)->lpVtbl -> GetConnection(This,uiIndex,ppConnection) )
#endif
#endif
#ifndef __IMILBitmapEffectOutputConnectorImpl_INTERFACE_DEFINED__
#define __IMILBitmapEffectOutputConnectorImpl_INTERFACE_DEFINED__
extern const IID IID_IMILBitmapEffectOutputConnectorImpl;
typedef struct IMILBitmapEffectOutputConnectorImplVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMILBitmapEffectOutputConnectorImpl *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMILBitmapEffectOutputConnectorImpl *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMILBitmapEffectOutputConnectorImpl *This);
	HRESULT(STDMETHODCALLTYPE *AddBackLink) (IMILBitmapEffectOutputConnectorImpl *This, IMILBitmapEffectInputConnector *pConnection);
	HRESULT(STDMETHODCALLTYPE *RemoveBackLink) (IMILBitmapEffectOutputConnectorImpl *This, IMILBitmapEffectInputConnector *pConnection);
	END_INTERFACE
}  IMILBitmapEffectOutputConnectorImplVtbl;
interface IMILBitmapEffectOutputConnectorImpl
{
	CONST_VTBL struct IMILBitmapEffectOutputConnectorImplVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMILBitmapEffectOutputConnectorImpl_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMILBitmapEffectOutputConnectorImpl_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMILBitmapEffectOutputConnectorImpl_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMILBitmapEffectOutputConnectorImpl_AddBackLink(This,pConnection) ( (This)->lpVtbl -> AddBackLink(This,pConnection) )
#define IMILBitmapEffectOutputConnectorImpl_RemoveBackLink(This,pConnection) ( (This)->lpVtbl -> RemoveBackLink(This,pConnection) )
#endif
#endif
#ifndef __IMILBitmapEffectInteriorInputConnector_INTERFACE_DEFINED__
#define __IMILBitmapEffectInteriorInputConnector_INTERFACE_DEFINED__
extern const IID IID_IMILBitmapEffectInteriorInputConnector;
typedef struct IMILBitmapEffectInteriorInputConnectorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMILBitmapEffectInteriorInputConnector *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMILBitmapEffectInteriorInputConnector *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMILBitmapEffectInteriorInputConnector *This);
	HRESULT(STDMETHODCALLTYPE *GetInputConnector) (IMILBitmapEffectInteriorInputConnector *This, IMILBitmapEffectInputConnector **pInputConnector);
	END_INTERFACE
}  IMILBitmapEffectInteriorInputConnectorVtbl;
interface IMILBitmapEffectInteriorInputConnector
{
	CONST_VTBL struct IMILBitmapEffectInteriorInputConnectorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMILBitmapEffectInteriorInputConnector_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMILBitmapEffectInteriorInputConnector_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMILBitmapEffectInteriorInputConnector_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMILBitmapEffectInteriorInputConnector_GetInputConnector(This,pInputConnector) ( (This)->lpVtbl -> GetInputConnector(This,pInputConnector) )
#endif
#endif
#ifndef __IMILBitmapEffectInteriorOutputConnector_INTERFACE_DEFINED__
#define __IMILBitmapEffectInteriorOutputConnector_INTERFACE_DEFINED__
extern const IID IID_IMILBitmapEffectInteriorOutputConnector;
typedef struct IMILBitmapEffectInteriorOutputConnectorVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMILBitmapEffectInteriorOutputConnector *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMILBitmapEffectInteriorOutputConnector *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMILBitmapEffectInteriorOutputConnector *This);
	HRESULT(STDMETHODCALLTYPE *GetOutputConnector) (IMILBitmapEffectInteriorOutputConnector *This, IMILBitmapEffectOutputConnector **pOutputConnector);
	END_INTERFACE
}  IMILBitmapEffectInteriorOutputConnectorVtbl;
interface IMILBitmapEffectInteriorOutputConnector
{
	CONST_VTBL struct IMILBitmapEffectInteriorOutputConnectorVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMILBitmapEffectInteriorOutputConnector_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMILBitmapEffectInteriorOutputConnector_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMILBitmapEffectInteriorOutputConnector_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMILBitmapEffectInteriorOutputConnector_GetOutputConnector(This,pOutputConnector) ( (This)->lpVtbl -> GetOutputConnector(This,pOutputConnector) )
#endif
#endif
#ifndef __IMILBitmapEffectEvents_INTERFACE_DEFINED__
#define __IMILBitmapEffectEvents_INTERFACE_DEFINED__
extern const IID IID_IMILBitmapEffectEvents;
typedef struct IMILBitmapEffectEventsVtbl
{
	BEGIN_INTERFACE
	HRESULT(STDMETHODCALLTYPE *QueryInterface) (IMILBitmapEffectEvents *This, REFIID riid, void **ppvObject);
	ULONG(STDMETHODCALLTYPE *AddRef) (IMILBitmapEffectEvents *This);
	ULONG(STDMETHODCALLTYPE *Release) (IMILBitmapEffectEvents *This);
	HRESULT(STDMETHODCALLTYPE *PropertyChange) (IMILBitmapEffectEvents *This, IMILBitmapEffect *pEffect, BSTR bstrPropertyName);
	HRESULT(STDMETHODCALLTYPE *DirtyRegion) (IMILBitmapEffectEvents *This, IMILBitmapEffect *pEffect, MilPointAndSizeD *pRect);
	END_INTERFACE
}  IMILBitmapEffectEventsVtbl;
interface IMILBitmapEffectEvents
{
	CONST_VTBL struct IMILBitmapEffectEventsVtbl *lpVtbl;
};
#ifdef COBJMACROS
#define IMILBitmapEffectEvents_QueryInterface(This,riid,ppvObject) ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
#define IMILBitmapEffectEvents_AddRef(This) ( (This)->lpVtbl -> AddRef(This) )
#define IMILBitmapEffectEvents_Release(This) ( (This)->lpVtbl -> Release(This) )
#define IMILBitmapEffectEvents_PropertyChange(This,pEffect,bstrPropertyName) ( (This)->lpVtbl -> PropertyChange(This,pEffect,bstrPropertyName) )
#define IMILBitmapEffectEvents_DirtyRegion(This,pEffect,pRect) ( (This)->lpVtbl -> DirtyRegion(This,pEffect,pRect) )
#endif
#endif
#endif
#endif
