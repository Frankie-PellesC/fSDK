/*+@@file@@----------------------------------------------------------------*//*!
 \file		d3dx9xof.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Nov 11 16:39:18 2016
 \date		Modified on Fri Nov 11 16:39:18 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#include "d3dx9.h"
#if !defined( __D3DX9XOF_H__ )
#define __D3DX9XOF_H__
#if __POCC__ >= 500
#pragma once
#endif
typedef DWORD D3DXF_FILEFORMAT;
#define D3DXF_FILEFORMAT_BINARY          0
#define D3DXF_FILEFORMAT_TEXT            1
#define D3DXF_FILEFORMAT_COMPRESSED      2
typedef DWORD D3DXF_FILESAVEOPTIONS;
#define D3DXF_FILESAVE_TOFILE     0x00L
#define D3DXF_FILESAVE_TOWFILE    0x01L
typedef DWORD D3DXF_FILELOADOPTIONS;
#define D3DXF_FILELOAD_FROMFILE     0x00L
#define D3DXF_FILELOAD_FROMWFILE    0x01L
#define D3DXF_FILELOAD_FROMRESOURCE 0x02L
#define D3DXF_FILELOAD_FROMMEMORY   0x03L
typedef struct _D3DXF_FILELOADRESOURCE
{
	HMODULE hModule;
	LPCSTR lpName;
	LPCSTR lpType;
} D3DXF_FILELOADRESOURCE;
typedef struct _D3DXF_FILELOADMEMORY
{
	LPCVOID lpMemory;
	SIZE_T dSize;
} D3DXF_FILELOADMEMORY;
#if defined( _WIN32 ) && !defined( _NO_COM )
DEFINE_GUID(IID_ID3DXFile, 0xcef08cf9, 0x7b4f, 0x4429, 0x96, 0x24, 0x2a, 0x69, 0x0a, 0x93, 0x32, 0x01);
DEFINE_GUID(IID_ID3DXFileSaveObject, 0xcef08cfa, 0x7b4f, 0x4429, 0x96, 0x24, 0x2a, 0x69, 0x0a, 0x93, 0x32, 0x01);
DEFINE_GUID(IID_ID3DXFileSaveData, 0xcef08cfb, 0x7b4f, 0x4429, 0x96, 0x24, 0x2a, 0x69, 0x0a, 0x93, 0x32, 0x01);
DEFINE_GUID(IID_ID3DXFileEnumObject, 0xcef08cfc, 0x7b4f, 0x4429, 0x96, 0x24, 0x2a, 0x69, 0x0a, 0x93, 0x32, 0x01);
DEFINE_GUID(IID_ID3DXFileData, 0xcef08cfd, 0x7b4f, 0x4429, 0x96, 0x24, 0x2a, 0x69, 0x0a, 0x93, 0x32, 0x01);
#endif
typedef interface ID3DXFile ID3DXFile;
typedef interface ID3DXFileSaveObject ID3DXFileSaveObject;
typedef interface ID3DXFileSaveData ID3DXFileSaveData;
typedef interface ID3DXFileEnumObject ID3DXFileEnumObject;
typedef interface ID3DXFileData ID3DXFileData;
#undef INTERFACE
#define INTERFACE ID3DXFile
DECLARE_INTERFACE_(ID3DXFile, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID *)PURE;
	STDMETHOD_(ULONG, AddRef) (THIS)PURE;
	STDMETHOD_(ULONG, Release) (THIS)PURE;
	STDMETHOD(CreateEnumObject) (THIS_ LPCVOID, D3DXF_FILELOADOPTIONS, ID3DXFileEnumObject **)PURE;
	STDMETHOD(CreateSaveObject) (THIS_ LPCVOID, D3DXF_FILESAVEOPTIONS, D3DXF_FILEFORMAT, ID3DXFileSaveObject **)PURE;
	STDMETHOD(RegisterTemplates) (THIS_ LPCVOID, SIZE_T)PURE;
	STDMETHOD(RegisterEnumTemplates) (THIS_ ID3DXFileEnumObject *)PURE;
};
#undef INTERFACE
#define INTERFACE ID3DXFileSaveObject
DECLARE_INTERFACE_(ID3DXFileSaveObject, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID *)PURE;
	STDMETHOD_(ULONG, AddRef) (THIS)PURE;
	STDMETHOD_(ULONG, Release) (THIS)PURE;
	STDMETHOD(GetFile) (THIS_ ID3DXFile **)PURE;
	STDMETHOD(AddDataObject) (THIS_ REFGUID, LPCSTR, CONST GUID *, SIZE_T, LPCVOID, ID3DXFileSaveData **)PURE;
	STDMETHOD(Save) (THIS)PURE;
};
#undef INTERFACE
#define INTERFACE ID3DXFileSaveData
DECLARE_INTERFACE_(ID3DXFileSaveData, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID *)PURE;
	STDMETHOD_(ULONG, AddRef) (THIS)PURE;
	STDMETHOD_(ULONG, Release) (THIS)PURE;
	STDMETHOD(GetSave) (THIS_ ID3DXFileSaveObject **)PURE;
	STDMETHOD(GetName) (THIS_ LPSTR, SIZE_T *)PURE;
	STDMETHOD(GetId) (THIS_ LPGUID)PURE;
	STDMETHOD(GetType) (THIS_ GUID *)PURE;
	STDMETHOD(AddDataObject) (THIS_ REFGUID, LPCSTR, CONST GUID *, SIZE_T, LPCVOID, ID3DXFileSaveData **)PURE;
	STDMETHOD(AddDataReference) (THIS_ LPCSTR, CONST GUID *)PURE;
};
#undef INTERFACE
#define INTERFACE ID3DXFileEnumObject
DECLARE_INTERFACE_(ID3DXFileEnumObject, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID *)PURE;
	STDMETHOD_(ULONG, AddRef) (THIS)PURE;
	STDMETHOD_(ULONG, Release) (THIS)PURE;
	STDMETHOD(GetFile) (THIS_ ID3DXFile **)PURE;
	STDMETHOD(GetChildren) (THIS_ SIZE_T *)PURE;
	STDMETHOD(GetChild) (THIS_ SIZE_T, ID3DXFileData **)PURE;
	STDMETHOD(GetDataObjectById) (THIS_ REFGUID, ID3DXFileData **)PURE;
	STDMETHOD(GetDataObjectByName) (THIS_ LPCSTR, ID3DXFileData **)PURE;
};
#undef INTERFACE
#define INTERFACE ID3DXFileData
DECLARE_INTERFACE_(ID3DXFileData, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID *)PURE;
	STDMETHOD_(ULONG, AddRef) (THIS)PURE;
	STDMETHOD_(ULONG, Release) (THIS)PURE;
	STDMETHOD(GetEnum) (THIS_ ID3DXFileEnumObject **)PURE;
	STDMETHOD(GetName) (THIS_ LPSTR, SIZE_T *)PURE;
	STDMETHOD(GetId) (THIS_ LPGUID)PURE;
	STDMETHOD(Lock) (THIS_ SIZE_T *, LPCVOID *)PURE;
	STDMETHOD(Unlock) (THIS)PURE;
	STDMETHOD(GetType) (THIS_ GUID *)PURE;
	STDMETHOD_(BOOL, IsReference) (THIS)PURE;
	STDMETHOD(GetChildren) (THIS_ SIZE_T *)PURE;
	STDMETHOD(GetChild) (THIS_ SIZE_T, ID3DXFileData **)PURE;
};
STDAPI D3DXFileCreate(ID3DXFile **lplpDirectXFile);
#define _FACD3DXF 0x876
#define D3DXFERR_BADOBJECT              MAKE_HRESULT( 1, _FACD3DXF, 900 )
#define D3DXFERR_BADVALUE               MAKE_HRESULT( 1, _FACD3DXF, 901 )
#define D3DXFERR_BADTYPE                MAKE_HRESULT( 1, _FACD3DXF, 902 )
#define D3DXFERR_NOTFOUND               MAKE_HRESULT( 1, _FACD3DXF, 903 )
#define D3DXFERR_NOTDONEYET             MAKE_HRESULT( 1, _FACD3DXF, 904 )
#define D3DXFERR_FILENOTFOUND           MAKE_HRESULT( 1, _FACD3DXF, 905 )
#define D3DXFERR_RESOURCENOTFOUND       MAKE_HRESULT( 1, _FACD3DXF, 906 )
#define D3DXFERR_BADRESOURCE            MAKE_HRESULT( 1, _FACD3DXF, 907 )
#define D3DXFERR_BADFILETYPE            MAKE_HRESULT( 1, _FACD3DXF, 908 )
#define D3DXFERR_BADFILEVERSION         MAKE_HRESULT( 1, _FACD3DXF, 909 )
#define D3DXFERR_BADFILEFLOATSIZE       MAKE_HRESULT( 1, _FACD3DXF, 910 )
#define D3DXFERR_BADFILE                MAKE_HRESULT( 1, _FACD3DXF, 911 )
#define D3DXFERR_PARSEERROR             MAKE_HRESULT( 1, _FACD3DXF, 912 )
#define D3DXFERR_BADARRAYSIZE           MAKE_HRESULT( 1, _FACD3DXF, 913 )
#define D3DXFERR_BADDATAREFERENCE       MAKE_HRESULT( 1, _FACD3DXF, 914 )
#define D3DXFERR_NOMOREOBJECTS          MAKE_HRESULT( 1, _FACD3DXF, 915 )
#define D3DXFERR_NOMOREDATA             MAKE_HRESULT( 1, _FACD3DXF, 916 )
#define D3DXFERR_BADCACHEFILE           MAKE_HRESULT( 1, _FACD3DXF, 917 )
#ifndef WIN_TYPES
#define WIN_TYPES(itype, ptype) typedef interface itype *LP##ptype, **LPLP##ptype
#endif
WIN_TYPES(ID3DXFile, D3DXFILE);
WIN_TYPES(ID3DXFileEnumObject, D3DXFILEENUMOBJECT);
WIN_TYPES(ID3DXFileSaveObject, D3DXFILESAVEOBJECT);
WIN_TYPES(ID3DXFileData, D3DXFILEDATA);
WIN_TYPES(ID3DXFileSaveData, D3DXFILESAVEDATA);
#endif
