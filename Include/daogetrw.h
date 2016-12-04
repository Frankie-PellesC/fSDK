/*+@@file@@----------------------------------------------------------------*//*!
 \file		daogetrw.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Tue Jul  5 13:41:08 2016
 \date		Modified on Tue Jul  5 13:41:08 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#if !defined (_DAOGETRW_H_)
#define _DAOGETRW_H_
#if __POCC__ >= 500
#pragma once
#endif
typedef enum
{
	DAOCOLKIND_IND = 0,
	DAOCOLKIND_STR,
	DAOCOLKIND_WSTR
} DAOCOLKIND;
typedef enum
{
	DAO_I2 = 0,
	DAO_I4,
	DAO_R4,
	DAO_R8,
	DAO_CURRENCY,
	DAO_DATE,
	DAO_BOOL,
	DAO_BSTR,
	DAO_LPSTR,
	DAO_LPWSTR,
	DAO_BLOB,
	DAO_BYTES,
	DAO_CHAR,
	DAO_WCHAR,
	DAO_ANYVARIANT,
	DAO_BOOKMARK,
	DAO_BYTE,
	DAO_GUID,
	DAO_DATATYPEMAX
} DAODATATYPE;
#define DAO_NOINDICATOR 0xffffffff
#define DAO_NULL        0xffffffff
#define DAO_CANTCOERCE  0xfffffffc
#define DAO_NOMAXLENGTH 0x00000000
#define DAOROWFETCH_CALLEEALLOCATES     0x00000001
#define DAOROWFETCH_DONTADVANCE         0x00000002
#define DAOROWFETCH_FORCEREFRESH        0x00000004
#define DAOROWFETCH_BINDABSOLUTE        0x00000008
#define DAOROWFETCH_ODBCNEXT			0x00000010
#define DAOBINDING_DIRECT               0x00000001
#define DAOBINDING_VARIANT              0x00000002
#define DAOBINDING_CALLBACK             0x00000004
typedef struct
{
	DWORD           dwKind;
	union
	{
		LONG        ind;
		LPCSTR      lpstr;
		LPCWSTR		lpwstr;
	};
} DAOCOLUMNID;
typedef DAOCOLUMNID *LPDAOCOLUMNID;
typedef HRESULT (STDAPICALLTYPE *LPDAOBINDFUNC)(ULONG cb, DWORD dwUser, LPVOID *ppData);
#define DAOBINDINGFUNC(f)   STDAPI f (ULONG cb, DWORD dwUser, LPVOID *ppData)
typedef struct
{
	DAOCOLUMNID     columnID;
	ULONG           cbDataOffset;
	ULONG           cbMaxLen;
	ULONG           cbInfoOffset;
	DWORD           dwBinding;
	DWORD           dwDataType;
	DWORD           dwUser;
} DAOCOLUMNBINDING;
typedef DAOCOLUMNBINDING *LPDAOCOLUMNBINDING;
typedef struct
{
	ULONG           cRowsRequested;
	DWORD           dwFlags;
	LPVOID          pData;
	LPVOID          pVarData;
	ULONG           cbVarData;
	ULONG           cRowsReturned;
} DAOFETCHROWS;
typedef DAOFETCHROWS *LPDAOFETCHROWS;
#define S_BUFFERTOOSMALL    MAKE_SCODE(SEVERITY_SUCCESS,    FACILITY_ITF,   0x1000)
#define S_ENDOFCURSOR       MAKE_SCODE(SEVERITY_SUCCESS,    FACILITY_ITF,   0x1001)
#define S_SILENTCANCEL      MAKE_SCODE(SEVERITY_SUCCESS,    FACILITY_ITF,   0x1002)
#define S_RECORDDELETED     MAKE_SCODE(SEVERITY_SUCCESS,    FACILITY_ITF,   0x1003)
#define E_ROWTOOSHORT       MAKE_SCODE(SEVERITY_ERROR,      FACILITY_ITF,   0x1000)
#define E_BADBINDINFO       MAKE_SCODE(SEVERITY_ERROR,      FACILITY_ITF,   0x1001)
#define E_COLUMNUNAVAILABLE MAKE_SCODE(SEVERITY_ERROR,      FACILITY_ITF,   0x1002)
#undef INTERFACE
#define INTERFACE ICDAORecordset
DECLARE_INTERFACE_(ICDAORecordset, IDispatch)
{
	STDMETHOD(QueryInterface)   (THIS_ REFIID riid, void **ppvObject);
	STDMETHOD_(ULONG, AddRef)   (THIS);
	STDMETHOD_(ULONG, Release)  (THIS);
	STDMETHOD(GetTypeInfoCount) (THIS_ UINT * pctinfo);
	STDMETHOD(GetTypeInfo)      (THIS_ UINT iTInfo, LCID lcid, ITypeInfo ** ppTInfo);
	STDMETHOD(GetIDsOfNames)    (THIS_ REFIID riid, LPOLESTR * rgszNames, UINT cNames, LCID lcid, DISPID * rgDispId);
	STDMETHOD(Invoke)           (THIS_ DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS * pDispParams, VARIANT * pVarResult, EXCEPINFO * pExcepInfo, UINT * puArgErr);
	STDMETHOD(GetRows)          (THIS_ LONG cRowsToSkip, LONG cCol, LPDAOCOLUMNBINDING prgBndCol, ULONG cbRowLen, LPDAOFETCHROWS pFetchRows);
	STDMETHOD(SetNotify)		(THIS_ REFIID riid, BOOL fNotify);
	STDMETHOD(GetNotify)		(THIS_ REFIID riid, BOOL *fNotify);
	STDMETHOD(OnBeforeNotify)	(THIS_ REFIID riid, DWORD cat, DWORD rsn, VARIANT v1, VARIANT v2);
	STDMETHOD(OnAfterNotify)	(THIS_ REFIID riid, DWORD cat, DWORD rsn, VARIANT v1, VARIANT v2, HRESULT hr);
	STDMETHOD(PutLock)			(THIS_ BOOL f);
	STDMETHOD(GetLock)			(THIS_ BOOL *f);
	STDMETHOD(AddGetRowsErr)    (THIS_ HRESULT hr);
};
#define errVtoFetchBuffTooSmall	-30028
#define errVtoEOFDuringFetch	-30029
#define errVtoSilentCancel		-30030
#define errVtoRecordDeleted		-30031
#define errVtoRowLenTooSmall	-30032
#define errVtoBadBindInfo		-30033
#define errVtoColumnMissing		-30034
#endif
