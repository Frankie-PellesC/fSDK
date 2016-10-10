/*+@@file@@----------------------------------------------------------------*//*!
 \file		infotech.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul 16 23:49:33 2016
 \date		Modified on Sat Jul 16 23:49:33 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __INFOTECH_H__
#define __INFOTECH_H__
#if __POCC__ >= 500
#pragma once
#endif
#include <ocidl.h>
DEFINE_GUID(IID_IITPropList, 0x1f403bb1, 0x9997, 0x11d0, 0xa8, 0x50, 0x0, 0xaa, 0x0, 0x6c, 0x7d, 0x1);
DEFINE_GUID(CLSID_IITPropList, 0x4662daae, 0xd393, 0x11d0, 0x9a, 0x56, 0x00, 0xc0, 0x4f, 0xb6, 0x8b, 0xf7);
typedef DWORD PROPID;
#define PROP_ADD    0x00000000
#define PROP_DELETE 0x00000001
#define PROP_UPDATE 0x00000002
#define TYPE_VALUE   0x00000000
#define TYPE_POINTER 0x00000001
#define TYPE_STRING  0x00000002
#if 0
class CProperty
{
public
    PROPID dwPropID;
    DWORD cbData;
    DWORD dwType;
    union
    {
        LPWSTR      lpszwData;
        LPVOID      lpvData;
        DWORD       dwValue;
    };
    BOOL fPersist;
};
#endif
typedef struct CProperty
{
    PROPID dwPropID;
    DWORD cbData;
    DWORD dwType;
    union
    {
        LPWSTR      lpszwData;
        LPVOID      lpvData;
        DWORD       dwValue;
    };
    BOOL fPersist;
} CProperty;
typedef CProperty* LPPROP;
#undef INTERFACE
#define INTERFACE IITPropList
DECLARE_INTERFACE_(IITPropList, IPersistStreamInit)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID riid, void **ppvObject);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
    STDMETHOD(GetClassID)(THIS_ CLSID * pClassID);
    STDMETHOD(IsDirty)(THIS);
    STDMETHOD(Load)(THIS_ LPSTREAM pStm);
    STDMETHOD(Save)(THIS_ LPSTREAM pStm, BOOL fClearDirty);
    STDMETHOD(GetSizeMax)(THIS_ ULARGE_INTEGER * pCbSize);
    STDMETHOD(InitNew)(THIS);
    STDMETHOD(Set)(THIS_ PROPID PropID, DWORD dwData, DWORD dwOperation);
    STDMETHOD(Set1)(THIS_ PROPID PropID, LPVOID lpvData, DWORD cbData, DWORD dwOperation);
    STDMETHOD(Set2)(THIS_ PROPID PropID, LPCWSTR lpszwString, DWORD dwOperation);
    STDMETHOD(Add)(THIS_ CProperty * Prop);
    STDMETHOD(Get)(THIS_ PROPID PropID, CProperty * Property);
    STDMETHOD(Clear)(THIS);
    STDMETHOD(SetPersist)(THIS_ PROPID PropID, BOOL fPersist);
    STDMETHOD(SetPersist1)(THIS_ BOOL fPersist);
    STDMETHOD(GetFirst)(THIS_ CProperty * Property);
    STDMETHOD(GetNext)(THIS_ CProperty * Property);
    STDMETHOD(GetPropCount)(THIS_ LONG *cProp);
    STDMETHOD(SaveHeader)(THIS_ LPVOID lpvData, DWORD dwHdrSize);
    STDMETHOD(SaveData)(THIS_ LPVOID lpvHeader, DWORD dwHdrSize, LPVOID lpvData, DWORD dwBufSize);
    STDMETHOD(GetHeaderSize)(THIS_ DWORD * dwHdrSize);
    STDMETHOD(GetDataSize)(THIS_ LPVOID lpvHeader, DWORD dwHdrSize, DWORD * dwDataSize);
    STDMETHOD(SaveDataToStream)(THIS_ LPVOID lpvHeader, DWORD dwHdrSize, IStream* pStream);
    STDMETHOD(LoadFromMem)(THIS_ LPVOID lpvData, DWORD dwBufSize);
    STDMETHOD(SaveToMem)(THIS_ LPVOID lpvData, DWORD dwBufSize);
};
typedef IITPropList* LPITPROPLIST;
DEFINE_GUID(IID_IITDatabase, 0x8fa0d5a2, 0xdedf, 0x11d0, 0x9a, 0x61, 0x00, 0xc0, 0x4f, 0xb6, 0x8b, 0xf7);
#ifdef ITPROXY
DEFINE_GUID(CLSID_IITDatabase, 0x66673452, 0x8c23, 0x11d0, 0xa8, 0x4e, 0x0, 0xaa, 0x0, 0x6c, 0x7d, 0x1);
#else
DEFINE_GUID(CLSID_IITDatabaseLocal, 0x4662daa9, 0xd393, 0x11d0, 0x9a, 0x56, 0x00, 0xc0, 0x4f, 0xb6, 0x8b, 0xf7);
#endif
#define	IITDB_OBJINST_NULL	((DWORD) 0xFFFFFFFF)
#undef INTERFACE
#define INTERFACE IITDatabase
DECLARE_INTERFACE_(IITDatabase, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID riid, void **ppvObject);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(Open)(THIS_ LPCWSTR lpszHost, LPCWSTR lpszMoniker, DWORD dwFlags);
	STDMETHOD(Close)(THIS);
	STDMETHOD(CreateObject)(THIS_ REFCLSID rclsid, DWORD *pdwObjInstance);
	STDMETHOD(GetObject)(THIS_ DWORD dwObjInstance, REFIID riid, LPVOID *ppvObj);
	STDMETHOD(GetObjectPersistence)(THIS_ LPCWSTR lpwszObject, DWORD dwObjInstance, LPVOID *ppvPersistence, BOOL fStream);
};
typedef IITDatabase* LPITDB;
#define STDPROP_UID         1
#define STDPROP_TITLE       2
#define STDPROP_USERDATA    3
#define STDPROP_KEY         4
#define STDPROP_SORTKEY		100
#define STDPROP_DISPLAYKEY	101
#define STDPROP_SORTORDINAL 102
#define STDPROP_INDEX_TEXT    200
#define STDPROP_INDEX_VFLD    201
#define STDPROP_INDEX_DTYPE   202
#define STDPROP_INDEX_LENGTH  203
#define STDPROP_INDEX_BREAK   204
#define STDPROP_INDEX_TERM              210
#define STDPROP_INDEX_TERM_RAW_LENGTH   211
#define STDPROP_USERPROP_BASE   0x00010000
#define STDPROP_USERPROP_MAX    0x7FFFFFFF
#define SZ_WWDEST_GLOBAL    L"GLOBAL"
#define SZ_WWDEST_KEY       L"KEY"
#define SZ_WWDEST_OCC       L"OCC"
DEFINE_GUID(CLSID_IITCmdInt, 0x4662daa2, 0xd393, 0x11d0, 0x9a, 0x56, 0x00, 0xc0, 0x4f, 0xb6, 0x8b, 0xf7);
DEFINE_GUID(CLSID_IITSvMgr, 0x4662daa3, 0xd393, 0x11d0, 0x9a, 0x56, 0x00, 0xc0, 0x4f, 0xb6, 0x8b, 0xf7);
DEFINE_GUID(IID_IITCmdInt, 0x4cf34c30, 0x9bf9, 0x11d0, 0x87, 0x64, 0x0, 0xa0, 0xc9, 0x13, 0xf7, 0x64);
DEFINE_GUID(IID_IITSvMgr, 0x4e7da031, 0x9c11, 0x11d0, 0x87, 0x64, 0x0, 0xa0, 0xc9, 0x13, 0xf7, 0x64);
DEFINE_GUID(CLSID_IITWordWheelUpdate, 0x4662daa5, 0xd393, 0x11d0, 0x9a, 0x56, 0x00, 0xc0, 0x4f, 0xb6, 0x8b, 0xf7);
DEFINE_GUID(IID_IITBuildCollect, 0x8fa0d5a5, 0xdedf, 0x11d0, 0x9a, 0x61, 0x0, 0xc0, 0x4f, 0xb6, 0x8b, 0xf7);
DEFINE_GUID(CLSID_IITGroupUpdate, 0x4662daa4, 0xd393, 0x11d0, 0x9a, 0x56, 0x00, 0xc0, 0x4f, 0xb6, 0x8b, 0xf7);
DEFINE_GUID(CLSID_IITIndexBuild, 0x8fa0d5aa, 0xdedf, 0x11d0, 0x9a, 0x61, 0x00, 0xc0, 0x4f, 0xb6, 0x8b, 0xf7);
DEFINE_GUID(CLSID_IITWWFilterBuild, 0x8fa0d5ab, 0xdedf, 0x11d0, 0x9a, 0x61, 0x00, 0xc0, 0x4f, 0xb6, 0x8b, 0xf7);
DEFINE_GUID(IID_IITWordWheel, 0x8fa0d5a4, 0xdedf, 0x11d0, 0x9a, 0x61, 0x00, 0xc0, 0x4f, 0xb6, 0x8b, 0xf7);
#ifdef ITPROXY
DEFINE_GUID(CLSID_IITWordWheel, 0xd73725c2, 0x8c12, 0x11d0, 0xa8, 0x4e, 0x0, 0xaa, 0x0, 0x6c, 0x7d, 0x1);
#else
DEFINE_GUID(CLSID_IITWordWheelLocal, 0x4662daa8, 0xd393, 0x11d0, 0x9a, 0x56, 0x00, 0xc0, 0x4f, 0xb6, 0x8b, 0xf7);
#endif
#define ITWW_OPEN_CONNECT	0x00000000
#define ITWW_OPEN_NOCONNECT	0x00000001
#define ITWW_CBKEY_MAX		1024
typedef interface IITDatabase IITDatabase;
typedef interface IITResultSet IITResultSet;
typedef interface IITGroup IITGroup;
typedef interface IITPropList IITPropList;
typedef interface IITQuery IITQuery;
#undef INTERFACE
#define INTERFACE IITWordWheel
DECLARE_INTERFACE_(IITWordWheel, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID riid, void **ppvObject);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(Open)(THIS_ IITDatabase* lpITDB, LPCWSTR lpszMoniker, DWORD dwFlags);
	STDMETHOD(Close)(THIS);
	STDMETHOD(GetLocaleInfo)(THIS_ DWORD *pdwCodePageID, LCID *plcid);
	STDMETHOD(GetSorterInstance)(THIS_ DWORD *pdwObjInstance);
	STDMETHOD(Count)(THIS_ LONG *pcEntries);
	STDMETHOD(Lookup)(THIS_ LONG lEntry, LPVOID lpvKeyBuf, DWORD cbKeyBuf);
	STDMETHOD(Lookup1)(THIS_ LONG lEntry, IITResultSet* lpITResult, LONG cEntries);
	STDMETHOD(Lookup2)(THIS_ LPCVOID lpcvPrefix, BOOL fExactMatch, LONG *plEntry);
	STDMETHOD(SetGroup)(THIS_ IITGroup* piitGroup);
	STDMETHOD(GetGroup)(THIS_ IITGroup** ppiitGroup);
	STDMETHOD(GetDataCount)(THIS_ LONG lEntry, DWORD *pdwCount);
	STDMETHOD(GetData)(THIS_ LONG lEntry, IITResultSet* lpITResult);
	STDMETHOD(GetDataColumns)(THIS_ IITResultSet* pRS);
};
typedef IITWordWheel* LPITWORDWHEEL;
#ifndef __IStemSink_FWD_DEFINED__
#define __IStemSink_FWD_DEFINED__
typedef interface IStemSink IStemSink;
#endif
#ifndef __IStemmer_FWD_DEFINED__
#define __IStemmer_FWD_DEFINED__
typedef interface IStemmer IStemmer;
#endif
#ifndef __IStemmerConfig_FWD_DEFINED__
#define __IStemmerConfig_FWD_DEFINED__
typedef interface IStemmerConfig IStemmerConfig;
#endif
#undef INTERFACE
#define INTERFACE IStemmer
DECLARE_INTERFACE_(IStemmer, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID riid, void **ppvObject);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
    STDMETHOD(Init)(THIS_ ULONG ulMaxTokenSize, BOOL *pfLicense);
    STDMETHOD(GetLicenseToUse)(THIS_ WCHAR const **ppwcsLicense);
    STDMETHOD(StemWord)(THIS_ WCHAR const *pwcInBuf, ULONG cwc, IStemSink *pStemSink);   
};
typedef IStemmer *PISTEM;
#undef INTERFACE
#define INTERFACE IStemSink
DECLARE_INTERFACE_(IStemSink, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID riid, void **ppvObject);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
    STDMETHOD(PutAltWord)(THIS_ WCHAR const *pwcInBuf, ULONG cwc);
    STDMETHOD(PutWord)(THIS_ WCHAR const *pwcInBuf, ULONG cwc);
};
typedef IStemSink *PISTEMSNK;
#undef INTERFACE
#define INTERFACE IStemmerConfig
DECLARE_INTERFACE_(IStemmerConfig, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID riid, void **ppvObject);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(SetLocaleInfo)(THIS_ DWORD dwCodePageID, LCID lcid);
	STDMETHOD(GetLocaleInfo)(THIS_ DWORD *pdwCodePageID, LCID *plcid);
	STDMETHOD(SetControlInfo)(THIS_ DWORD grfStemFlags, DWORD dwReserved);
	STDMETHOD(GetControlInfo)(THIS_ DWORD *pgrfStemFlags, DWORD *pdwReserved);
	STDMETHOD(LoadExternalStemmerData)(THIS_ IStream *pStream, DWORD dwExtDataType);
};
typedef IStemmerConfig *PISTEMC;
#ifndef __IPhraseSink_FWD_DEFINED__
#define __IPhraseSink_FWD_DEFINED__
typedef interface IPhraseSink IPhraseSink;
#endif
#ifndef __IWordSink_FWD_DEFINED__
#define __IWordSink_FWD_DEFINED__
typedef interface IWordSink IWordSink;
#endif
#ifndef __IWordBreaker_FWD_DEFINED__
#define __IWordBreaker_FWD_DEFINED__
typedef interface IWordBreaker IWordBreaker;
#endif
#ifndef __IWordBreakerConfig_FWD_DEFINED__
#define __IWordBreakerConfig_FWD_DEFINED__
typedef interface IWordBreakerConfig IWordBreakerConfig;
#endif
#ifndef __IITStopWordList_FWD_DEFINED__
#define __IITStopWordList_FWD_DEFINED__
typedef interface IITStopWordList IITStopWordList;
#endif
typedef struct tagTEXT_SOURCE TEXT_SOURCE;
typedef SCODE (__stdcall *PFNFILLTEXTBUFFER)(TEXT_SOURCE *pTextSource);
typedef struct tagTEXT_SOURCE
{
    PFNFILLTEXTBUFFER pfnFillTextBuffer;
    WCHAR *awcBuffer;
    ULONG iEnd;
    ULONG iCur;
} TEXT_SOURCE;
#undef INTERFACE
#define INTERFACE IWordBreaker
DECLARE_INTERFACE_(IWordBreaker, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID riid, void **ppvObject);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
    STDMETHOD(Init)(THIS_ BOOL fQuery, ULONG ulMaxTokenSize, BOOL *pfLicense);
    STDMETHOD(BreakText)(THIS_ TEXT_SOURCE *pTextSource, IWordSink *pWordSink, IPhraseSink *pPhraseSink);
    STDMETHOD(ComposePhrase)(THIS_ WCHAR const *pwcNoun, ULONG cwcNoun, WCHAR const *pwcModifier, ULONG cwcModifier, ULONG ulAttachmentType, WCHAR *pwcPhrase, ULONG *pcwcPhrase);
    STDMETHOD(GetLicenseToUse)(THIS_ WCHAR const **ppwcsLicense);
};
typedef IWordBreaker *PIWBRK;
#define IITWBC_BREAKTYPE_TEXT		((DWORD) 0)
#define IITWBC_BREAKTYPE_NUMBER		((DWORD) 1)
#define IITWBC_BREAKTYPE_DATE		((DWORD) 2)
#define IITWBC_BREAKTYPE_TIME		((DWORD) 3)
#define IITWBC_BREAKTYPE_EPOCH		((DWORD) 4)
#define IITWBC_BREAK_ACCEPT_WILDCARDS	0x00000001
#define IITWBC_BREAK_AND_STEM           0x00000002
#define IITWBC_EXTDATA_CHARTABLE		((DWORD) 0)		
#define IITWBC_EXTDATA_STOPWORDLIST		((DWORD) 1)
#undef INTERFACE
#define INTERFACE IWordBreakerConfig
DECLARE_INTERFACE_(IWordBreakerConfig, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID riid, void **ppvObject);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
	STDMETHOD(SetLocaleInfo)(THIS_ DWORD dwCodePageID, LCID lcid);
	STDMETHOD(GetLocaleInfo)(THIS_ DWORD *pdwCodePageID, LCID *plcid);
	STDMETHOD(SetBreakWordType)(THIS_ DWORD dwBreakWordType);
	STDMETHOD(GetBreakWordType)(THIS_ DWORD *pdwBreakWordType);
	STDMETHOD(SetControlInfo)(THIS_ DWORD grfBreakFlags, DWORD dwReserved);
	STDMETHOD(GetControlInfo)(THIS_ DWORD *pgrfBreakFlags, DWORD *pdwReserved);
	STDMETHOD(LoadExternalBreakerData)(THIS_ IStream *pStream, DWORD dwExtDataType);
	STDMETHOD(SetWordStemmer)(THIS_ REFCLSID rclsid, IStemmer *pStemmer);
	STDMETHOD(GetWordStemmer)(THIS_ IStemmer **ppStemmer);
};
#define E_NOTEXIST          _HRESULT_TYPEDEF_(0x80001000L)
#define E_DUPLICATE         _HRESULT_TYPEDEF_(0x80001001L)
#define E_BADVERSION        _HRESULT_TYPEDEF_(0x80001002L)
#define E_BADFILE           _HRESULT_TYPEDEF_(0x80001003L)
#define E_BADFORMAT         _HRESULT_TYPEDEF_(0x80001004L)
#define E_NOPERMISSION      _HRESULT_TYPEDEF_(0x80001005L)
#define E_ASSERT            _HRESULT_TYPEDEF_(0x80001006L)
#define E_INTERRUPT         _HRESULT_TYPEDEF_(0x80001007L)
#define E_NOTSUPPORTED      _HRESULT_TYPEDEF_(0x80001008L)
#define E_OUTOFRANGE        _HRESULT_TYPEDEF_(0x80001009L)                  
#define E_GROUPIDTOOBIG     _HRESULT_TYPEDEF_(0x8000100AL)
#define E_TOOMANYTITLES     _HRESULT_TYPEDEF_(0x8000100BL)
#define E_NOMERGEDDATA      _HRESULT_TYPEDEF_(0x8000100CL)
#define E_NOTFOUND          _HRESULT_TYPEDEF_(0x8000100DL)
#define E_CANTFINDDLL       _HRESULT_TYPEDEF_(0x8000100EL)
#define E_NOHANDLE          _HRESULT_TYPEDEF_(0x8000100FL) 
#define E_GETLASTERROR      _HRESULT_TYPEDEF_(0x80001010L)
#define E_BADPARAM          _HRESULT_TYPEDEF_(0x80001011L)
#define E_INVALIDSTATE      _HRESULT_TYPEDEF_(0x80001012L)
#define E_NOTOPEN           _HRESULT_TYPEDEF_(0x80001013L)
#define E_ALREADYOPEN       _HRESULT_TYPEDEF_(0x80001013L)
#define E_UNKNOWN_TRANSPORT _HRESULT_TYPEDEF_(0x80001016L)
#define E_UNSUPPORTED_TRANSPORT _HRESULT_TYPEDEF_(0x80001017L)
#define E_BADFILTERSIZE     _HRESULT_TYPEDEF_(0x80001018L)
#define E_TOOMANYOBJECTS    _HRESULT_TYPEDEF_(0x80001019L)
#define E_NAMETOOLONG       _HRESULT_TYPEDEF_(0x80001020L)
#define E_FILECREATE        _HRESULT_TYPEDEF_(0x80001030L) 
#define E_FILECLOSE         _HRESULT_TYPEDEF_(0x80001031L)
#define E_FILEREAD          _HRESULT_TYPEDEF_(0x80001032L)
#define E_FILESEEK          _HRESULT_TYPEDEF_(0x80001033L)
#define E_FILEWRITE         _HRESULT_TYPEDEF_(0x80001034L)
#define E_FILEDELETE        _HRESULT_TYPEDEF_(0x80001035L)
#define E_FILEINVALID       _HRESULT_TYPEDEF_(0x80001036L)
#define E_FILENOTFOUND      _HRESULT_TYPEDEF_(0x80001037L)
#define E_DISKFULL          _HRESULT_TYPEDEF_(0x80001038L)
#define E_TOOMANYTOPICS     _HRESULT_TYPEDEF_(0x80001050L)
#define E_TOOMANYDUPS       _HRESULT_TYPEDEF_(0x80001051L)
#define E_TREETOOBIG        _HRESULT_TYPEDEF_(0x80001052L)
#define E_BADBREAKER        _HRESULT_TYPEDEF_(0x80001053L)
#define E_BADVALUE          _HRESULT_TYPEDEF_(0x80001054L)
#define E_ALL_WILD          _HRESULT_TYPEDEF_(0x80001055L)
#define E_TOODEEP           _HRESULT_TYPEDEF_(0x80001056L)
#define E_EXPECTEDTERM      _HRESULT_TYPEDEF_(0x80001057L)
#define E_MISSLPAREN        _HRESULT_TYPEDEF_(0x80001058L)
#define E_MISSRPAREN        _HRESULT_TYPEDEF_(0x80001059L)
#define E_MISSQUOTE         _HRESULT_TYPEDEF_(0x8000105AL)
#define E_NULLQUERY         _HRESULT_TYPEDEF_(0x8000105BL)
#define E_STOPWORD          _HRESULT_TYPEDEF_(0x8000105CL)
#define E_BADRANGEOP        _HRESULT_TYPEDEF_(0x8000105DL)
#define E_UNMATCHEDTYPE     _HRESULT_TYPEDEF_(0x8000105EL)
#define E_WORDTOOLONG       _HRESULT_TYPEDEF_(0x8000105FL)
#define E_BADINDEXFLAGS     _HRESULT_TYPEDEF_(0x80001060L)
#define E_WILD_IN_DTYPE     _HRESULT_TYPEDEF_(0x80001061L)   
#define E_NOSTEMMER         _HRESULT_TYPEDEF_(0x80001062L)
#define E_MISSINGPROP       _HRESULT_TYPEDEF_(0x80001080L)
#define E_PROPLISTNOTEMPTY  _HRESULT_TYPEDEF_(0x80001081L)
#define E_PROPLISTEMPTY     _HRESULT_TYPEDEF_(0x80001082L)
#define E_ALREADYINIT       _HRESULT_TYPEDEF_(0x80001083L)
#define E_NOTINIT           _HRESULT_TYPEDEF_(0x80001084L)
#define E_RESULTSETEMPTY    _HRESULT_TYPEDEF_(0x80001085L)
#define E_TOOMANYCOLUMNS    _HRESULT_TYPEDEF_(0x80001086L)
#define E_NOKEYPROP         _HRESULT_TYPEDEF_(0x80001087L)
DEFINE_GUID(IID_IITResultSet, 0x3bb91d41, 0x998b, 0x11d0, 0xa8, 0x50, 0x0, 0xaa, 0x0, 0x6c, 0x7d, 0x1);
DEFINE_GUID(CLSID_IITResultSet, 0x4662daa7, 0xd393, 0x11d0, 0x9a, 0x56, 0x00, 0xc0, 0x4f, 0xb6, 0x8b, 0xf7);
#define MAX_COLUMNS  256
typedef enum
{
    PRIORITY_LOW = 0,
    PRIORITY_NORMAL = 1,
    PRIORITY_HIGH = 2,
} PRIORITY;
typedef struct tagROWSTATUS
{
    LONG lRowFirst;
    LONG cRows;
    LONG cProperties;
    LONG cRowsTotal;
} ROWSTATUS, *LPROWSTATUS;
typedef struct tagCOLUMNSTATUS
{
    LONG cPropCount;
    LONG cPropsLoaded;
} COLUMNSTATUS, *LPCOLUMNSTATUS;
typedef SCODE (__stdcall *PFNCOLHEAPFREE)(LPVOID);
#undef INTERFACE
#define INTERFACE IITResultSet
DECLARE_INTERFACE_(IITResultSet, IUnknown)
{
	STDMETHOD(QueryInterface) (THIS_ REFIID riid, void **ppvObject);
	STDMETHOD_(ULONG, AddRef) (THIS);
	STDMETHOD_(ULONG, Release) (THIS);
    STDMETHOD(SetColumnPriority)(THIS_ LONG lColumnIndex, PRIORITY ColumnPriority);
    STDMETHOD(SetColumnHeap)(LONG lColumnIndex, LPVOID lpvHeap, PFNCOLHEAPFREE pfnColHeapFree);
    STDMETHOD(SetKeyProp)(THIS_ PROPID PropID);
    STDMETHOD(Add)(THIS_ LPVOID lpvHdr);
    STDMETHOD(Add1)(THIS_ PROPID PropID, LPVOID lpvDefaultData, DWORD cbData, PRIORITY Priority);
    STDMETHOD(Add2)(THIS_ PROPID PropID, LPCWSTR lpszwDefault, PRIORITY Priority);
    STDMETHOD(Add3)(THIS_ PROPID PropID, DWORD dwDefaultData, PRIORITY Priority);
    STDMETHOD(Append)(THIS_ LPVOID lpvHdr, LPVOID lpvData);
    STDMETHOD(Set1)(THIS_ LONG lRowIndex, LPVOID lpvHdr, LPVOID lpvData);
    STDMETHOD(Set2)(THIS_ LONG lRowIndex, LONG lColumnIndex, DWORD_PTR dwData);
    STDMETHOD(Set3)(THIS_ LONG lRowIndex, LONG lColumnIndex, LPCWSTR lpwStr);
    STDMETHOD(Set4)(THIS_ LONG lRowIndex, LONG lColumnIndex, LPVOID lpvData, DWORD cbData);
    STDMETHOD(Copy)(THIS_ IITResultSet* pRSCopy);
    STDMETHOD(AppendRows)(THIS_ IITResultSet* pResSrc, LONG lRowSrcFirst, LONG cSrcRows, LONG * lRowFirstDest);
    STDMETHOD(Get)(THIS_ LONG lRowIndex, LONG lColumnIndex, CProperty * Prop);
    STDMETHOD(GetKeyProp)(THIS_ PROPID * KeyPropID);
    STDMETHOD(GetColumnPriority)(THIS_ LONG lColumnIndex, PRIORITY * ColumnPriority);
    STDMETHOD(GetRowCount)(THIS_ LONG * lNumberOfRows);
    STDMETHOD(GetColumnCount)(LONG * lNumberOfColumns);
    STDMETHOD(GetColumn)(THIS_ LONG lColumnIndex, PROPID * PropID);
    STDMETHOD(GetColumn1)(THIS_ LONG lColumnIndex, PROPID * PropID, DWORD * dwType, LPVOID * lpvDefaultValue, DWORD * cbSize, PRIORITY * ColumnPriority);
    STDMETHOD(GetColumnFromPropID)(THIS_ PROPID PropID, LONG * lColumnIndex);
    STDMETHOD(Clear)(THIS);
    STDMETHOD(ClearRows)(THIS);
    STDMETHOD(Free)(THIS);
    STDMETHOD(IsCompleted)(THIS);
    STDMETHOD(Cancel)(THIS);
    STDMETHOD(Pause)(THIS_ BOOL fPause);
    STDMETHOD(GetRowStatus)(THIS_ LONG lRowFirst, LONG cRows, LPROWSTATUS lpRowStatus);
    STDMETHOD(GetColumnStatus)(THIS_ LPCOLUMNSTATUS lpColStatus);
};
typedef IITResultSet *LPITRS;
DEFINE_GUID(IID_IWordBreaker, 0xD53552C8, 0x77E3, 0x101A, 0xB5, 0x52, 0x08, 0x00, 0x2B, 0x33, 0xB0, 0xE6);
DEFINE_GUID(IID_IWordSink, 0xCC907054, 0xC058, 0x101A, 0xB5, 0x54, 0x08, 0x00, 0x2B, 0x33, 0xB0, 0xE6);
DEFINE_GUID(IID_IPhraseSink, 0xCC906FF0, 0xC058, 0x101A, 0xB5, 0x54, 0x08, 0x00, 0x2B, 0x33, 0xB0, 0xE6);
DEFINE_GUID(IID_IWordBreakerConfig, 0x8fa0d5a6, 0xdedf, 0x11d0, 0x9a, 0x61, 0x00, 0xc0, 0x4f, 0xb6, 0x8b, 0xf7);
DEFINE_GUID(CLSID_ITStdBreaker, 0x4662daaf, 0xd393, 0x11d0, 0x9a, 0x56, 0x00, 0xc0, 0x4f, 0xb6, 0x8b, 0xf7);
DEFINE_GUID(IID_IITStopWordList, 0x8fa0d5ad, 0xdedf, 0x11d0, 0x9a, 0x61, 0x00, 0xc0, 0x4f, 0xb6, 0x8b, 0xf7);
DEFINE_GUID(IID_IStemmer, 0xefbaf140, 0x7f42, 0x11ce, 0xbe, 0x57, 0x00, 0xaa, 0x00, 0x51, 0xfe, 0x20);
DEFINE_GUID(IID_IStemSink, 0xfe77c330, 0x7f42, 0x11ce, 0xbe, 0x57, 0x00, 0xaa, 0x00, 0x51, 0xfe, 0x20);
DEFINE_GUID(IID_IStemmerConfig, 0x8fa0d5a7, 0xdedf, 0x11d0, 0x9a, 0x61, 0x00, 0xc0, 0x4f, 0xb6, 0x8b, 0xf7);
DEFINE_GUID(CLSID_ITEngStemmer, 0x8fa0d5a8, 0xdedf, 0x11d0, 0x9a, 0x61, 0x00, 0xc0, 0x4f, 0xb6, 0x8b, 0xf7);
#endif
