/*+@@file@@----------------------------------------------------------------*//*!
 \file		esent.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul  9 20:37:37 2016
 \date		Modified on Sat Jul  9 20:37:37 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __esent_h__
#define __esent_h__
#if __POCC__ >= 500
#pragma once
#endif
#if !defined(_JET_INCLUDED)
#define _JET_INCLUDED
#ifndef JET_VERSION
#  ifdef WINVER
#    define JET_VERSION WINVER
#  else
#    define JET_VERSION 0x0601
#  endif
#endif
#if defined(_M_AMD64) || defined(_M_IA64)
#include <pshpack8.h>
#else
#include <pshpack4.h>
#endif
#pragma warning(push)
#pragma warning(disable: 4201)
#define JET_API     __stdcall
#define JET_NODSAPI __stdcall
#if defined(_WIN64)
    typedef unsigned __int64 JET_API_PTR;
#elif (defined(_X86_) || defined(_M_IX86)) && _MSC_VER >= 1300
	typedef __w64 unsigned long JET_API_PTR;
#else
	typedef unsigned long JET_API_PTR;
#endif
typedef long JET_ERR;
typedef JET_API_PTR JET_HANDLE;
typedef JET_API_PTR JET_INSTANCE;
typedef JET_API_PTR JET_SESID;
typedef JET_API_PTR JET_TABLEID;
#if ( JET_VERSION >= 0x0501 )
typedef JET_API_PTR JET_LS;
#endif
typedef unsigned long JET_COLUMNID;
typedef struct tagJET_INDEXID
{
	unsigned long	cbStruct;
	unsigned char	rgbIndexId[sizeof(JET_API_PTR)+sizeof(unsigned long)+sizeof(unsigned long)];
} JET_INDEXID;
typedef unsigned long JET_DBID;
typedef unsigned long JET_OBJTYP;
typedef unsigned long JET_COLTYP;
typedef unsigned long JET_GRBIT;
typedef unsigned long JET_SNP;
typedef unsigned long JET_SNT;
typedef double JET_DATESERIAL;
#if ( JET_VERSION >= 0x0501 )
typedef unsigned long JET_CBTYP;
#endif
typedef JET_ERR(JET_API *JET_PFNSTATUS) (JET_SESID sesid, JET_SNP snp, JET_SNT snt, void *pv);
#ifdef	MIDL_PASS
#define	xRPC_STRING [string]
#else
#define	xRPC_STRING
typedef wchar_t WCHAR;
#endif
typedef char *  JET_PSTR;
typedef const char *  JET_PCSTR;
typedef WCHAR * JET_PWSTR;
typedef const WCHAR * JET_PCWSTR;
typedef struct
{
	xRPC_STRING char		*szDatabaseName;
	xRPC_STRING char		*szNewDatabaseName;
} JET_RSTMAP_A;
typedef struct
{
	xRPC_STRING WCHAR		*szDatabaseName;
	xRPC_STRING WCHAR		*szNewDatabaseName;
} JET_RSTMAP_W;
#ifdef JET_UNICODE
#define JET_RSTMAP JET_RSTMAP_W
#else
#define JET_RSTMAP JET_RSTMAP_A
#endif
typedef struct tagCONVERT_A
{
	char *szOldDll;
	union
	{
		unsigned long fFlags;
		struct
		{
			unsigned long fSchemaChangesOnly:1;
		};
	};
} JET_CONVERT_A;
typedef struct tagCONVERT_W
{
	WCHAR * szOldDll;
	union
	{
		unsigned long fFlags;
		struct
		{
			unsigned long fSchemaChangesOnly:1;
		};
	};
} JET_CONVERT_W;
#ifdef JET_UNICODE
#define JET_CONVERT JET_CONVERT_W
#else
#define JET_CONVERT JET_CONVERT_A
#endif
#define JET_bitDefragmentBatchStart				0x00000001
#define JET_bitDefragmentBatchStop				0x00000002
#if ( JET_VERSION >= 0x0501 )
#define JET_bitDefragmentAvailSpaceTreesOnly	0x00000040
#endif
#if ( JET_VERSION >= 0x0601 )
#define JET_bitDefragmentNoPartialMerges		0x00000080
#define JET_bitDefragmentBTree					0x00000100
#endif
#if ( JET_VERSION >= 0x0501 )
#define JET_cbtypNull							0x00000000
#define JET_cbtypFinalize						0x00000001
#define JET_cbtypBeforeInsert					0x00000002
#define JET_cbtypAfterInsert					0x00000004
#define JET_cbtypBeforeReplace					0x00000008
#define JET_cbtypAfterReplace					0x00000010
#define JET_cbtypBeforeDelete					0x00000020
#define JET_cbtypAfterDelete					0x00000040
#define JET_cbtypUserDefinedDefaultValue		0x00000080
#define JET_cbtypOnlineDefragCompleted			0x00000100
#define JET_cbtypFreeCursorLS					0x00000200
#define JET_cbtypFreeTableLS					0x00000400
typedef JET_ERR(JET_API *JET_CALLBACK) (JET_SESID sesid, JET_DBID dbid, JET_TABLEID tableid, JET_CBTYP cbtyp, void *pvArg1, void *pvArg2, void *pvContext, JET_API_PTR ulUnused);
#endif
typedef struct
{
	unsigned long	cbStruct;
	unsigned long	cunitDone;
	unsigned long	cunitTotal;
} JET_SNPROG;
typedef struct
{
	unsigned long			cbStruct;
	unsigned long			cbFilesizeLow;
	unsigned long			cbFilesizeHigh;
	unsigned long			cbFreeSpaceRequiredLow;
	unsigned long			cbFreeSpaceRequiredHigh;
	unsigned long			csecToUpgrade;
	union
	{
		unsigned long		ulFlags;
		struct
		{
			unsigned long	fUpgradable:1;
			unsigned long	fAlreadyUpgraded:1;
		};
	};
} JET_DBINFOUPGRADE;
typedef struct
{
	unsigned long		cbStruct;
	JET_OBJTYP			objtyp;
	JET_DATESERIAL		dtCreate;
	JET_DATESERIAL		dtUpdate;
	JET_GRBIT			grbit;
	unsigned long		flags;
	unsigned long		cRecord;
	unsigned long		cPage;
} JET_OBJECTINFO;
#define JET_bitTableInfoUpdatable	0x00000001
#define JET_bitTableInfoBookmark	0x00000002
#define JET_bitTableInfoRollback	0x00000004
#define JET_bitObjectSystem			0x80000000
#define JET_bitObjectTableFixedDDL	0x40000000
#define JET_bitObjectTableTemplate	0x20000000
#define JET_bitObjectTableDerived	0x10000000
#if ( JET_VERSION >= 0x0501 )
#define JET_bitObjectTableNoFixedVarColumnsInDerivedTables	0x04000000
#endif
typedef struct
{
	unsigned long	cbStruct;
	JET_TABLEID		tableid;
	unsigned long	cRecord;
	JET_COLUMNID	columnidcontainername;
	JET_COLUMNID	columnidobjectname;
	JET_COLUMNID	columnidobjtyp;
	JET_COLUMNID	columniddtCreate;
	JET_COLUMNID	columniddtUpdate;
	JET_COLUMNID	columnidgrbit;
	JET_COLUMNID	columnidflags;
	JET_COLUMNID	columnidcRecord;
	JET_COLUMNID	columnidcPage;
} JET_OBJECTLIST;
#define cObjectInfoCols 9
typedef struct
{
	unsigned long cbStruct;
	JET_TABLEID tableid;
	unsigned long cRecord;
	JET_COLUMNID columnidPresentationOrder;
	JET_COLUMNID columnidcolumnname;
	JET_COLUMNID columnidcolumnid;
	JET_COLUMNID columnidcoltyp;
	JET_COLUMNID columnidCountry;
	JET_COLUMNID columnidLangid;
	JET_COLUMNID columnidCp;
	JET_COLUMNID columnidCollate;
	JET_COLUMNID columnidcbMax;
	JET_COLUMNID columnidgrbit;
	JET_COLUMNID columnidDefault;
	JET_COLUMNID columnidBaseTableName;
	JET_COLUMNID columnidBaseColumnName;
	JET_COLUMNID columnidDefinitionName;
}
JET_COLUMNLIST;
#define cColumnInfoCols 14
typedef struct
{
	unsigned long cbStruct;
	JET_COLUMNID columnid;
	JET_COLTYP coltyp;
	unsigned short wCountry;
	unsigned short langid;
	unsigned short cp;
	unsigned short wCollate;
	unsigned long cbMax;
	JET_GRBIT grbit;
} JET_COLUMNDEF;
typedef struct {
	unsigned long cbStruct;
	JET_COLUMNID columnid;
	JET_COLTYP coltyp;
	unsigned short wCountry;
	unsigned short langid;
	unsigned short cp;
	unsigned short wFiller;
	unsigned long cbMax;
	JET_GRBIT grbit;
	char szBaseTableName[256];
	char szBaseColumnName[256];
} JET_COLUMNBASE_A;
typedef struct {
	unsigned long cbStruct;
	JET_COLUMNID columnid;
	JET_COLTYP coltyp;
	unsigned short wCountry;
	unsigned short langid;
	unsigned short cp;
	unsigned short wFiller;
	unsigned long cbMax;
	JET_GRBIT grbit;
	WCHAR szBaseTableName[256];
	WCHAR szBaseColumnName[256];
} JET_COLUMNBASE_W;
#ifdef JET_UNICODE
#define JET_COLUMNBASE JET_COLUMNBASE_W
#else
#define JET_COLUMNBASE JET_COLUMNBASE_A
#endif
typedef struct {
	unsigned long cbStruct;
	JET_TABLEID tableid;
	unsigned long cRecord;
	JET_COLUMNID columnidindexname;
	JET_COLUMNID columnidgrbitIndex;
	JET_COLUMNID columnidcKey;
	JET_COLUMNID columnidcEntry;
	JET_COLUMNID columnidcPage;
	JET_COLUMNID columnidcColumn;
	JET_COLUMNID columnidiColumn;
	JET_COLUMNID columnidcolumnid;
	JET_COLUMNID columnidcoltyp;
	JET_COLUMNID columnidCountry;
	JET_COLUMNID columnidLangid;
	JET_COLUMNID columnidCp;
	JET_COLUMNID columnidCollate;
	JET_COLUMNID columnidgrbitColumn;
	JET_COLUMNID columnidcolumnname;
	JET_COLUMNID columnidLCMapFlags;
} JET_INDEXLIST;
#define cIndexInfoCols 15
typedef struct tag_JET_COLUMNCREATE_A {
	unsigned long cbStruct;
	char *szColumnName;
	JET_COLTYP coltyp;
	unsigned long cbMax;
	JET_GRBIT grbit;
	void *pvDefault;
	unsigned long cbDefault;
	unsigned long cp;
	JET_COLUMNID columnid;
	JET_ERR err;
} JET_COLUMNCREATE_A;
typedef struct tag_JET_COLUMNCREATE_W {
	unsigned long cbStruct;
	WCHAR *szColumnName;
	JET_COLTYP coltyp;
	unsigned long cbMax;
	JET_GRBIT grbit;
	void *pvDefault;
	unsigned long cbDefault;
	unsigned long cp;
	JET_COLUMNID columnid;
	JET_ERR err;
} JET_COLUMNCREATE_W;
#ifdef JET_UNICODE
#define JET_COLUMNCREATE JET_COLUMNCREATE_W
#else
#define JET_COLUMNCREATE JET_COLUMNCREATE_A
#endif
#if ( JET_VERSION >= 0x0501 )
typedef struct tag_JET_USERDEFINEDDEFAULT_A {
	char *szCallback;
	unsigned char *pbUserData;
	unsigned long cbUserData;
	char *szDependantColumns;
} JET_USERDEFINEDDEFAULT_A;
typedef struct tag_JET_USERDEFINEDDEFAULT_W {
	WCHAR *szCallback;
	unsigned char *pbUserData;
	unsigned long cbUserData;
	WCHAR *szDependantColumns;
} JET_USERDEFINEDDEFAULT_W;
#ifdef JET_UNICODE
#define JET_USERDEFINEDDEFAULT JET_USERDEFINEDDEFAULT_W
#else
#define JET_USERDEFINEDDEFAULT JET_USERDEFINEDDEFAULT_A
#endif
#endif
typedef struct tagJET_CONDITIONALCOLUMN_A {
	unsigned long cbStruct;
	char *szColumnName;
	JET_GRBIT grbit;
} JET_CONDITIONALCOLUMN_A;
typedef struct tagJET_CONDITIONALCOLUMN_W {
	unsigned long cbStruct;
	WCHAR *szColumnName;
	JET_GRBIT grbit;
} JET_CONDITIONALCOLUMN_W;
#ifdef JET_UNICODE
#define JET_CONDITIONALCOLUMN JET_CONDITIONALCOLUMN_W
#else
#define JET_CONDITIONALCOLUMN JET_CONDITIONALCOLUMN_A
#endif
typedef struct tagJET_UNICODEINDEX {
	unsigned long lcid;
	unsigned long dwMapFlags;
} JET_UNICODEINDEX;
#if ( JET_VERSION >= 0x0502 )
typedef struct tagJET_TUPLELIMITS {
	unsigned long chLengthMin;
	unsigned long chLengthMax;
	unsigned long chToIndexMax;
#if ( JET_VERSION >= 0x0600 )
	unsigned long cchIncrement;
	unsigned long ichStart;
#endif
} JET_TUPLELIMITS;
#endif
#if ( JET_VERSION >= 0x0601 )
typedef struct tagJET_SPACEHINTS {
	unsigned long cbStruct;
	unsigned long ulInitialDensity;
	unsigned long cbInitial;
	JET_GRBIT grbit;
	unsigned long ulMaintDensity;
	unsigned long ulGrowth;
	unsigned long cbMinExtent;
	unsigned long cbMaxExtent;
} JET_SPACEHINTS;
#endif
typedef struct tagJET_INDEXCREATE_A {
	unsigned long cbStruct;
	char *szIndexName;
	char *szKey;
	unsigned long cbKey;
	JET_GRBIT grbit;
	unsigned long ulDensity;
	union {
		unsigned long lcid;
		JET_UNICODEINDEX *pidxunicode;
	};
	union {
		unsigned long cbVarSegMac;
#if ( JET_VERSION >= 0x0502 )
		JET_TUPLELIMITS *ptuplelimits;
#endif
	};
	JET_CONDITIONALCOLUMN_A *rgconditionalcolumn;
	unsigned long cConditionalColumn;
	JET_ERR err;
#if ( JET_VERSION >= 0x0600 )
	unsigned long cbKeyMost;
#endif
} JET_INDEXCREATE_A;
typedef struct tagJET_INDEXCREATE_W {
	unsigned long cbStruct;
	WCHAR *szIndexName;
	WCHAR *szKey;
	unsigned long cbKey;
	JET_GRBIT grbit;
	unsigned long ulDensity;
	union {
		unsigned long lcid;
		JET_UNICODEINDEX *pidxunicode;
	};
	union {
		unsigned long cbVarSegMac;
#if ( JET_VERSION >= 0x0502 )
		JET_TUPLELIMITS *ptuplelimits;
#endif
	};
	JET_CONDITIONALCOLUMN_W *rgconditionalcolumn;
	unsigned long cConditionalColumn;
	JET_ERR err;
#if ( JET_VERSION >= 0x0600 )
	unsigned long cbKeyMost;
#endif
} JET_INDEXCREATE_W;
#ifdef JET_UNICODE
#define JET_INDEXCREATE JET_INDEXCREATE_W
#else
#define JET_INDEXCREATE JET_INDEXCREATE_A
#endif
#if ( JET_VERSION >= 0x0601 )
typedef struct tagJET_INDEXCREATE2_A {
	unsigned long cbStruct;
	char *szIndexName;
	char *szKey;
	unsigned long cbKey;
	JET_GRBIT grbit;
	unsigned long ulDensity;
	union {
		unsigned long lcid;
		JET_UNICODEINDEX *pidxunicode;
	};
	union {
		unsigned long cbVarSegMac;
		JET_TUPLELIMITS *ptuplelimits;
	};
	JET_CONDITIONALCOLUMN_A *rgconditionalcolumn;
	unsigned long cConditionalColumn;
	JET_ERR err;
	unsigned long cbKeyMost;
	JET_SPACEHINTS *pSpacehints;
} JET_INDEXCREATE2_A;
typedef struct tagJET_INDEXCREATE2_W {
	unsigned long cbStruct;
	WCHAR *szIndexName;
	WCHAR *szKey;
	unsigned long cbKey;
	JET_GRBIT grbit;
	unsigned long ulDensity;
	union {
		unsigned long lcid;
		JET_UNICODEINDEX *pidxunicode;
	};
	union {
		unsigned long cbVarSegMac;
		JET_TUPLELIMITS *ptuplelimits;
	};
	JET_CONDITIONALCOLUMN_W *rgconditionalcolumn;
	unsigned long cConditionalColumn;
	JET_ERR err;
	unsigned long cbKeyMost;
	JET_SPACEHINTS *pSpacehints;
} JET_INDEXCREATE2_W;
#ifdef JET_UNICODE
#define JET_INDEXCREATE2 JET_INDEXCREATE2_W
#else
#define JET_INDEXCREATE2 JET_INDEXCREATE2_A
#endif
#endif
typedef struct tagJET_TABLECREATE_A {
	unsigned long cbStruct;
	char *szTableName;
	char *szTemplateTableName;
	unsigned long ulPages;
	unsigned long ulDensity;
	JET_COLUMNCREATE_A *rgcolumncreate;
	unsigned long cColumns;
	JET_INDEXCREATE_A *rgindexcreate;
	unsigned long cIndexes;
	JET_GRBIT grbit;
	JET_TABLEID tableid;
	unsigned long cCreated;
} JET_TABLECREATE_A;
typedef struct tagJET_TABLECREATE_W {
	unsigned long cbStruct;
	WCHAR *szTableName;
	WCHAR *szTemplateTableName;
	unsigned long ulPages;
	unsigned long ulDensity;
	JET_COLUMNCREATE_W *rgcolumncreate;
	unsigned long cColumns;
	JET_INDEXCREATE_W *rgindexcreate;
	unsigned long cIndexes;
	JET_GRBIT grbit;
	JET_TABLEID tableid;
	unsigned long cCreated;
} JET_TABLECREATE_W;
#ifdef JET_UNICODE
#define JET_TABLECREATE JET_TABLECREATE_W
#else
#define JET_TABLECREATE JET_TABLECREATE_A
#endif
#if ( JET_VERSION >= 0x0501 )
typedef struct tagJET_TABLECREATE2_A {
	unsigned long cbStruct;
	char *szTableName;
	char *szTemplateTableName;
	unsigned long ulPages;
	unsigned long ulDensity;
	JET_COLUMNCREATE_A *rgcolumncreate;
	unsigned long cColumns;
	JET_INDEXCREATE_A *rgindexcreate;
	unsigned long cIndexes;
	char *szCallback;
	JET_CBTYP cbtyp;
	JET_GRBIT grbit;
	JET_TABLEID tableid;
	unsigned long cCreated;
} JET_TABLECREATE2_A;
typedef struct tagJET_TABLECREATE2_W {
	unsigned long cbStruct;
	WCHAR *szTableName;
	WCHAR *szTemplateTableName;
	unsigned long ulPages;
	unsigned long ulDensity;
	JET_COLUMNCREATE_W *rgcolumncreate;
	unsigned long cColumns;
	JET_INDEXCREATE_W *rgindexcreate;
	unsigned long cIndexes;
	WCHAR *szCallback;
	JET_CBTYP cbtyp;
	JET_GRBIT grbit;
	JET_TABLEID tableid;
	unsigned long cCreated;
} JET_TABLECREATE2_W;
#ifdef JET_UNICODE
#define JET_TABLECREATE2 JET_TABLECREATE2_W
#else
#define JET_TABLECREATE2 JET_TABLECREATE2_A
#endif
#endif
#if ( JET_VERSION >= 0x0601 )
typedef struct tagJET_TABLECREATE3_A {
	unsigned long cbStruct;
	char *szTableName;
	char *szTemplateTableName;
	unsigned long ulPages;
	unsigned long ulDensity;
	JET_COLUMNCREATE_A *rgcolumncreate;
	unsigned long cColumns;
	JET_INDEXCREATE2_A *rgindexcreate;
	unsigned long cIndexes;
	char *szCallback;
	JET_CBTYP cbtyp;
	JET_GRBIT grbit;
	JET_SPACEHINTS *pSeqSpacehints;
	JET_SPACEHINTS *pLVSpacehints;
	unsigned long cbSeparateLV;
	JET_TABLEID tableid;
	unsigned long cCreated;
} JET_TABLECREATE3_A;
typedef struct tagJET_TABLECREATE3_W {
	unsigned long cbStruct;
	WCHAR *szTableName;
	WCHAR *szTemplateTableName;
	unsigned long ulPages;
	unsigned long ulDensity;
	JET_COLUMNCREATE_W *rgcolumncreate;
	unsigned long cColumns;
	JET_INDEXCREATE2_W *rgindexcreate;
	unsigned long cIndexes;
	WCHAR *szCallback;
	JET_CBTYP cbtyp;
	JET_GRBIT grbit;
	JET_SPACEHINTS *pSeqSpacehints;
	JET_SPACEHINTS *pLVSpacehints;
	unsigned long cbSeparateLV;
	JET_TABLEID tableid;
	unsigned long cCreated;
} JET_TABLECREATE3_W;
#ifdef JET_UNICODE
#define JET_TABLECREATE3 JET_TABLECREATE3_W
#else
#define JET_TABLECREATE3 JET_TABLECREATE3_A
#endif
#endif
#if ( JET_VERSION >= 0x0600 )
typedef struct tagJET_OPENTEMPORARYTABLE {
	unsigned long cbStruct;
	const JET_COLUMNDEF *prgcolumndef;
	unsigned long ccolumn;
	JET_UNICODEINDEX *pidxunicode;
	JET_GRBIT grbit;
	JET_COLUMNID *prgcolumnid;
	unsigned long cbKeyMost;
	unsigned long cbVarSegMac;
	JET_TABLEID tableid;
} JET_OPENTEMPORARYTABLE;
#endif
typedef struct {
	unsigned long cbStruct;
	unsigned long ibLongValue;
	unsigned long itagSequence;
	JET_COLUMNID columnidNextTagged;
} JET_RETINFO;
typedef struct {
	unsigned long cbStruct;
	unsigned long ibLongValue;
	unsigned long itagSequence;
} JET_SETINFO;
typedef struct {
	unsigned long cbStruct;
	unsigned long centriesLT;
	unsigned long centriesInRange;
	unsigned long centriesTotal;
} JET_RECPOS;
typedef struct {
	unsigned long cbStruct;
	JET_TABLEID tableid;
	unsigned long cRecord;
	JET_COLUMNID columnidBookmark;
} JET_RECORDLIST;
typedef struct {
	unsigned long cbStruct;
	JET_TABLEID tableid;
	JET_GRBIT grbit;
} JET_INDEXRANGE;
#include <pshpack1.h>
#define JET_MAX_COMPUTERNAME_LENGTH 15
typedef struct {
	char bSeconds;
	char bMinutes;
	char bHours;
	char bDay;
	char bMonth;
	char bYear;
	union {
		char bFiller1;
		struct {
			unsigned char fTimeIsUTC:1;
			unsigned char fUnused:7;
		};
	};
	char bFiller2;
} JET_LOGTIME;
#if ( JET_VERSION >= 0x0600 )
typedef struct {
	char bSeconds;
	char bMinutes;
	char bHours;
	char bDay;
	char bMonth;
	char bYear;
	union {
		char bFiller1;
		struct {
			unsigned char fTimeIsUTC:1;
			unsigned char fUnused:7;
		};
	};
	union {
		char bFiller2;
		struct {
			unsigned char fOSSnapshot:1;
			unsigned char fReserved:7;
		};
	};
} JET_BKLOGTIME;
#endif
typedef struct {
	unsigned short ib;
	unsigned short isec;
	long lGeneration;
} JET_LGPOS;
typedef struct {
	unsigned long ulRandom;
	JET_LOGTIME logtimeCreate;
	char szComputerName[JET_MAX_COMPUTERNAME_LENGTH + 1];
} JET_SIGNATURE;
typedef struct {
	JET_LGPOS lgposMark;
	union {
		JET_LOGTIME logtimeMark;
#if ( JET_VERSION >= 0x0600 )
		JET_BKLOGTIME bklogtimeMark;
#endif
	};
	unsigned long genLow;
	unsigned long genHigh;
} JET_BKINFO;
#include <poppack.h>
typedef struct {
	unsigned long ulVersion;
	unsigned long ulUpdate;
	JET_SIGNATURE signDb;
	unsigned long dbstate;
	JET_LGPOS lgposConsistent;
	JET_LOGTIME logtimeConsistent;
	JET_LOGTIME logtimeAttach;
	JET_LGPOS lgposAttach;
	JET_LOGTIME logtimeDetach;
	JET_LGPOS lgposDetach;
	JET_SIGNATURE signLog;
	JET_BKINFO bkinfoFullPrev;
	JET_BKINFO bkinfoIncPrev;
	JET_BKINFO bkinfoFullCur;
	unsigned long fShadowingDisabled;
	unsigned long fUpgradeDb;
	unsigned long dwMajorVersion;
	unsigned long dwMinorVersion;
	unsigned long dwBuildNumber;
	long lSPNumber;
	unsigned long cbPageSize;
} JET_DBINFOMISC;
#if ( JET_VERSION >= 0x0600 )
typedef struct {
	unsigned long ulVersion;
	unsigned long ulUpdate;
	JET_SIGNATURE signDb;
	unsigned long dbstate;
	JET_LGPOS lgposConsistent;
	JET_LOGTIME logtimeConsistent;
	JET_LOGTIME logtimeAttach;
	JET_LGPOS lgposAttach;
	JET_LOGTIME logtimeDetach;
	JET_LGPOS lgposDetach;
	JET_SIGNATURE signLog;
	JET_BKINFO bkinfoFullPrev;
	JET_BKINFO bkinfoIncPrev;
	JET_BKINFO bkinfoFullCur;
	unsigned long fShadowingDisabled;
	unsigned long fUpgradeDb;
	unsigned long dwMajorVersion;
	unsigned long dwMinorVersion;
	unsigned long dwBuildNumber;
	long lSPNumber;
	unsigned long cbPageSize;
	unsigned long genMinRequired;
	unsigned long genMaxRequired;
	JET_LOGTIME logtimeGenMaxCreate;
	unsigned long ulRepairCount;
	JET_LOGTIME logtimeRepair;
	unsigned long ulRepairCountOld;
	unsigned long ulECCFixSuccess;
	JET_LOGTIME logtimeECCFixSuccess;
	unsigned long ulECCFixSuccessOld;
	unsigned long ulECCFixFail;
	JET_LOGTIME logtimeECCFixFail;
	unsigned long ulECCFixFailOld;
	unsigned long ulBadChecksum;
	JET_LOGTIME logtimeBadChecksum;
	unsigned long ulBadChecksumOld;
} JET_DBINFOMISC2;
#endif
#if ( JET_VERSION >= 0x0601 )
typedef struct {
	unsigned long ulVersion;
	unsigned long ulUpdate;
	JET_SIGNATURE signDb;
	unsigned long dbstate;
	JET_LGPOS lgposConsistent;
	JET_LOGTIME logtimeConsistent;
	JET_LOGTIME logtimeAttach;
	JET_LGPOS lgposAttach;
	JET_LOGTIME logtimeDetach;
	JET_LGPOS lgposDetach;
	JET_SIGNATURE signLog;
	JET_BKINFO bkinfoFullPrev;
	JET_BKINFO bkinfoIncPrev;
	JET_BKINFO bkinfoFullCur;
	unsigned long fShadowingDisabled;
	unsigned long fUpgradeDb;
	unsigned long dwMajorVersion;
	unsigned long dwMinorVersion;
	unsigned long dwBuildNumber;
	long lSPNumber;
	unsigned long cbPageSize;
	unsigned long genMinRequired;
	unsigned long genMaxRequired;
	JET_LOGTIME logtimeGenMaxCreate;
	unsigned long ulRepairCount;
	JET_LOGTIME logtimeRepair;
	unsigned long ulRepairCountOld;
	unsigned long ulECCFixSuccess;
	JET_LOGTIME logtimeECCFixSuccess;
	unsigned long ulECCFixSuccessOld;
	unsigned long ulECCFixFail;
	JET_LOGTIME logtimeECCFixFail;
	unsigned long ulECCFixFailOld;
	unsigned long ulBadChecksum;
	JET_LOGTIME logtimeBadChecksum;
	unsigned long ulBadChecksumOld;
	unsigned long genCommitted;
} JET_DBINFOMISC3;
typedef struct {
	unsigned long ulVersion;
	unsigned long ulUpdate;
	JET_SIGNATURE signDb;
	unsigned long dbstate;
	JET_LGPOS lgposConsistent;
	JET_LOGTIME logtimeConsistent;
	JET_LOGTIME logtimeAttach;
	JET_LGPOS lgposAttach;
	JET_LOGTIME logtimeDetach;
	JET_LGPOS lgposDetach;
	JET_SIGNATURE signLog;
	JET_BKINFO bkinfoFullPrev;
	JET_BKINFO bkinfoIncPrev;
	JET_BKINFO bkinfoFullCur;
	unsigned long fShadowingDisabled;
	unsigned long fUpgradeDb;
	unsigned long dwMajorVersion;
	unsigned long dwMinorVersion;
	unsigned long dwBuildNumber;
	long lSPNumber;
	unsigned long cbPageSize;
	unsigned long genMinRequired;
	unsigned long genMaxRequired;
	JET_LOGTIME logtimeGenMaxCreate;
	unsigned long ulRepairCount;
	JET_LOGTIME logtimeRepair;
	unsigned long ulRepairCountOld;
	unsigned long ulECCFixSuccess;
	JET_LOGTIME logtimeECCFixSuccess;
	unsigned long ulECCFixSuccessOld;
	unsigned long ulECCFixFail;
	JET_LOGTIME logtimeECCFixFail;
	unsigned long ulECCFixFailOld;
	unsigned long ulBadChecksum;
	JET_LOGTIME logtimeBadChecksum;
	unsigned long ulBadChecksumOld;
	unsigned long genCommitted;
	JET_BKINFO bkinfoCopyPrev;
	JET_BKINFO bkinfoDiffPrev;
} JET_DBINFOMISC4;
#endif
#if ( JET_VERSION >= 0x0600 )
struct JET_THREADSTATS {
	unsigned long cbStruct;
	unsigned long cPageReferenced;
	unsigned long cPageRead;
	unsigned long cPagePreread;
	unsigned long cPageDirtied;
	unsigned long cPageRedirtied;
	unsigned long cLogRecord;
	unsigned long cbLogRecord;
};
typedef struct {
	unsigned long cbStruct;
	JET_RSTMAP_A *rgrstmap;
	long crstmap;
	JET_LGPOS lgposStop;
	JET_LOGTIME logtimeStop;
	JET_PFNSTATUS pfnStatus;
} JET_RSTINFO_A;
typedef struct {
	unsigned long cbStruct;
	JET_RSTMAP_W *rgrstmap;
	long crstmap;
	JET_LGPOS lgposStop;
	JET_LOGTIME logtimeStop;
	JET_PFNSTATUS pfnStatus;
} JET_RSTINFO_W;
#ifdef JET_UNICODE
#define JET_RSTINFO JET_RSTINFO_W
#else
#define JET_RSTINFO JET_RSTINFO_A
#endif
#endif
#if ( JET_VERSION >= 0x0501 )
#define JET_instanceNil				(~(JET_INSTANCE)0)
#endif
#define JET_sesidNil				(~(JET_SESID)0)
#define JET_tableidNil				(~(JET_TABLEID)0)
#define JET_bitNil					((JET_GRBIT)0)
#define JET_cbBookmarkMost			256
#if ( JET_VERSION >= 0x0601 )
#define JET_cbBookmarkMostMost		JET_cbKeyMostMost
#endif
#ifndef JET_UNICODE
#define JET_cbNameMost				64
#else
#define JET_cbNameMost				128
#endif
#ifndef JET_UNICODE
#define JET_cbFullNameMost			255
#else
#define JET_cbFullNameMost			510
#endif
#define JET_cbColumnLVPageOverhead		82
#define JET_cbLVDefaultValueMost	255
#define JET_cbColumnMost			255
#if ( JET_VERSION >= 0x0601 )
#define JET_cbKeyMostMost				JET_cbKeyMost32KBytePage
#define JET_cbKeyMost32KBytePage		JET_cbKeyMost8KBytePage
#define JET_cbKeyMost16KBytePage		JET_cbKeyMost8KBytePage
#endif
#if ( JET_VERSION >= 0x0600 )
#define JET_cbKeyMost8KBytePage		2000
#define JET_cbKeyMost4KBytePage		1000
#define JET_cbKeyMost2KBytePage		500
#define JET_cbKeyMostMin			255
#endif
#define JET_cbKeyMost				255
#define JET_cbLimitKeyMost			256
#define JET_cbPrimaryKeyMost		255
#define JET_cbSecondaryKeyMost		255
#if ( JET_VERSION >= 0x0600 )
#define JET_ccolKeyMost				16
#else
#define JET_ccolKeyMost				12
#endif
#if ( JET_VERSION >= 0x0501 )
#define JET_ccolMost				0x0000fee0
#else
#define JET_ccolMost				0x00007ffe
#endif
#define JET_ccolFixedMost			0x0000007f
#define JET_ccolVarMost				0x00000080
#define JET_ccolTaggedMost			( JET_ccolMost - 0x000000ff )
#if ( JET_VERSION >= 0x0501 )
#define JET_EventLoggingDisable		0
#if ( JET_VERSION >= 0x0601 )
#define JET_EventLoggingLevelMin	1
#define JET_EventLoggingLevelLow	25
#define JET_EventLoggingLevelMedium	50
#define JET_EventLoggingLevelHigh	75
#endif
#define JET_EventLoggingLevelMax	100
#endif
#define JET_paramSystemPath						0
#define JET_paramTempPath						1
#define JET_paramLogFilePath 					2
#define JET_paramBaseName						3
#define JET_paramEventSource					4
#define JET_paramMaxSessions					5
#define JET_paramMaxOpenTables  				6
#define JET_paramPreferredMaxOpenTables			7
#if ( JET_VERSION >= 0x0600 )
#define JET_paramCachedClosedTables				125
#endif
#define JET_paramMaxCursors						8
#define JET_paramMaxVerPages					9
#define JET_paramPreferredVerPages				63
#if ( JET_VERSION >= 0x0501 )
#define JET_paramGlobalMinVerPages				81
#define JET_paramVersionStoreTaskQueueMax		105
#endif
#define JET_paramMaxTemporaryTables				10
#define JET_paramLogFileSize					11
#define JET_paramLogBuffers						12
#define JET_paramWaitLogFlush					13
#define JET_paramLogCheckpointPeriod			14
#define JET_paramLogWaitingUserMax				15
#define JET_paramCommitDefault					16
#define JET_paramCircularLog					17
#define JET_paramDbExtensionSize				18
#define JET_paramPageTempDBMin					19
#define JET_paramPageFragment					20
#if ( JET_VERSION >= 0x0600 )
#define JET_paramEnableFileCache				126
#define JET_paramVerPageSize					128
#define JET_paramConfiguration					129
#define JET_paramEnableAdvanced					130
#define JET_paramMaxColtyp						131
#endif
#define JET_paramBatchIOBufferMax				22
#define JET_paramCacheSize						41
#define JET_paramCacheSizeMin					60
#define JET_paramCacheSizeMax					23
#define JET_paramCheckpointDepthMax				24
#define JET_paramLRUKCorrInterval				25
#define JET_paramLRUKHistoryMax					26
#define JET_paramLRUKPolicy						27
#define JET_paramLRUKTimeout					28
#define JET_paramLRUKTrxCorrInterval			29
#define JET_paramOutstandingIOMax				30
#define JET_paramStartFlushThreshold			31
#define JET_paramStopFlushThreshold				32
#if ( JET_VERSION >= 0x0600 )
#define JET_paramEnableViewCache				127
#define JET_paramCheckpointIOMax				135
#endif
#if ( JET_VERSION >= 0x0600 )
#define JET_paramTableClass1Name				137
#define JET_paramTableClass2Name				138
#define JET_paramTableClass3Name				139
#define JET_paramTableClass4Name				140
#define JET_paramTableClass5Name				141
#define JET_paramTableClass6Name				142
#define JET_paramTableClass7Name				143
#define JET_paramTableClass8Name				144
#define JET_paramTableClass9Name				145
#define JET_paramTableClass10Name				146
#define JET_paramTableClass11Name				147
#define JET_paramTableClass12Name				148
#define JET_paramTableClass13Name				149
#define JET_paramTableClass14Name				150
#define JET_paramTableClass15Name				151
#endif
#if ( JET_VERSION >= 0x0600 )
#define JET_IOPriorityNormal                    0
#define JET_IOPriorityLow                       1
#define JET_paramIOPriority			            152
#endif
#define JET_paramRecovery						34
#define JET_paramEnableOnlineDefrag				35
#define JET_paramCheckFormatWhenOpenFail		44
#define JET_paramEnableTempTableVersioning		46
#define JET_paramIgnoreLogVersion				47
#define JET_paramDeleteOldLogs					48
#define JET_paramEventSourceKey					49
#define JET_paramNoInformationEvent				50
#if ( JET_VERSION >= 0x0501 )
#define JET_paramEventLoggingLevel				51
#define JET_paramDeleteOutOfRangeLogs			52
#define JET_paramAccessDeniedRetryPeriod		53
#endif
#define JET_paramEnableIndexChecking			45
#if ( JET_VERSION >= 0x0502 )
#define JET_paramEnableIndexCleanup				54
#endif
#define JET_paramDatabasePageSize				64
#if ( JET_VERSION >= 0x0501 )
#define JET_paramDisableCallbacks				65
#endif
#if ( JET_VERSION >= 0x0600 )
#define JET_paramDisablePerfmon					107
#endif
#if ( JET_VERSION >= 0x0501 )
#if ( JET_VERSION >= 0x0600 )
#define JET_paramEnablePersistedCallbacks		156
#endif
#define JET_paramBackupChunkSize				66
#define JET_paramBackupOutstandingReads			67
#define JET_paramSLVProviderEnable				68
#define JET_paramLogFileCreateAsynch			69
#endif
#define JET_paramErrorToString					70
#if ( JET_VERSION >= 0x0501 )
#define JET_paramZeroDatabaseDuringBackup		71
#endif
#define JET_paramUnicodeIndexDefault			72
#if ( JET_VERSION >= 0x0501 )
#define JET_paramRuntimeCallback				73
#endif
#define JET_paramCleanupMismatchedLogFiles		77
#if ( JET_VERSION >= 0x0501 )
#define JET_paramRecordUpgradeDirtyLevel		78
#define JET_paramOSSnapshotTimeout				82
#endif
#define JET_paramExceptionAction				98
#define JET_paramEventLogCache					99
#if ( JET_VERSION >= 0x0501 )
#define JET_paramCreatePathIfNotExist			100
#define JET_paramPageHintCacheSize				101
#define JET_paramOneDatabasePerSession			102
#define JET_paramMaxInstances					104
#define JET_paramIndexTuplesLengthMin			110
#define JET_paramIndexTuplesLengthMax			111
#define JET_paramIndexTuplesToIndexMax			112
#endif
#if ( JET_VERSION >= 0x0502 )
#define JET_paramAlternateDatabaseRecoveryPath	113
#endif
#if ( JET_VERSION >= 0x0600 )
#define JET_paramIndexTupleIncrement			132
#define JET_paramIndexTupleStart				133
#define JET_paramKeyMost						134
#define JET_paramLegacyFileNames				136
#endif
#if ( JET_VERSION >= 0x0601 )
#define JET_paramWaypointLatency				153
#define JET_paramDefragmentSequentialBTrees		160
#define JET_paramDefragmentSequentialBTreesDensityCheckFrequency	161
#define JET_paramIOThrottlingTimeQuanta			162
#define JET_paramLVChunkSizeMost				163
#define JET_paramMaxCoalesceReadSize			164
#define JET_paramMaxCoalesceWriteSize			165
#define JET_paramMaxCoalesceReadGapSize		166
#define JET_paramMaxCoalesceWriteGapSize		167
#endif
#if ( JET_VERSION >= 0x0600 )
#define JET_bitESE98FileNames			0x00000001
#define JET_bitEightDotThreeSoftCompat	0x00000002
#endif
#if ( JET_VERSION >= 0x0501 )
#define JET_bitReplayIgnoreMissingDB		0x00000004
#endif
#if ( JET_VERSION >= 0x0600 )
#define JET_bitRecoveryWithoutUndo			0x00000008
#define JET_bitTruncateLogsAfterRecovery	0x00000010
#define JET_bitReplayMissingMapEntryDB		0x00000020
#define JET_bitLogStreamMustExist			0x00000040
#endif
#if ( JET_VERSION >= 0x0601 )
#define	JET_bitReplayIgnoreLostLogs			0x00000080
#endif
#define JET_bitTermComplete				0x00000001
#define JET_bitTermAbrupt				0x00000002
#define JET_bitTermStopBackup			0x00000004
#if ( JET_VERSION >= 0x0601 )
#define JET_bitTermDirty				0x00000008
#endif
#define JET_bitIdleFlushBuffers			0x00000001
#define JET_bitIdleCompact				0x00000002
#define JET_bitIdleStatus				0x00000004
#define JET_bitDbReadOnly				0x00000001
#define JET_bitDbExclusive				0x00000002
#define JET_bitDbDeleteCorruptIndexes	0x00000010
#if ( JET_VERSION >= 0x0502 )
#define JET_bitDbDeleteUnicodeIndexes	0x00000400
#endif
#if ( JET_VERSION >= 0x0501 )
#define JET_bitDbUpgrade				0x00000200
#endif
#if ( JET_VERSION >= 0x0501 )
#define JET_bitForceDetach			  		0x00000001
#define JET_bitForceCloseAndDetach			(0x00000002 | JET_bitForceDetach)
#endif
#define JET_bitDbRecoveryOff 			0x00000008
#define JET_bitDbShadowingOff			0x00000080
#if ( JET_VERSION >= 0x0501 )
#define JET_bitDbOverwriteExisting		0x00000200
#endif
#define JET_bitBackupIncremental		0x00000001
#define JET_bitBackupAtomic				0x00000004
#if ( JET_VERSION >= 0x0501 )
#define JET_bitBackupSnapshot			0x00000010
#endif
#if ( JET_VERSION >= 0x0501 )
#define JET_bitBackupEndNormal				0x0001
#define JET_bitBackupEndAbort				0x0002
#endif
#if ( JET_VERSION >= 0x0600 )
#define JET_bitBackupTruncateDone			0x0100
#endif
#define JET_dbidNil			((JET_DBID) 0xFFFFFFFF)
#define JET_bitTableCreateFixedDDL			0x00000001
#define JET_bitTableCreateTemplateTable		0x00000002
#if ( JET_VERSION >= 0x0501 )
#define JET_bitTableCreateNoFixedVarColumnsInDerivedTables	0x00000004
#endif
#define JET_bitColumnFixed				0x00000001
#define JET_bitColumnTagged				0x00000002
#define JET_bitColumnNotNULL			0x00000004
#define JET_bitColumnVersion				0x00000008
#define JET_bitColumnAutoincrement		0x00000010
#define JET_bitColumnUpdatable			0x00000020
#define JET_bitColumnTTKey				0x00000040
#define JET_bitColumnTTDescending		0x00000080
#define JET_bitColumnMultiValued			0x00000400
#define JET_bitColumnEscrowUpdate		0x00000800
#define JET_bitColumnUnversioned		0x00001000
#if ( JET_VERSION >= 0x0501 )
#define JET_bitColumnMaybeNull			0x00002000
#define JET_bitColumnFinalize				0x00004000
#define JET_bitColumnUserDefinedDefault	0x00008000
#endif
#if ( JET_VERSION >= 0x0502 )
#define JET_bitColumnDeleteOnZero		0x00020000
#endif
#if ( JET_VERSION >= 0x0601 )
#define JET_bitColumnCompressed			0x00080000
#endif
#if ( JET_VERSION >= 0x0501 )
#define JET_bitDeleteColumnIgnoreTemplateColumns	0x00000001
#endif
#define JET_bitMoveFirst				0x00000000
#define JET_bitNoMove					0x00000002
#define JET_bitNewKey					0x00000001
#define JET_bitStrLimit 				0x00000002
#define JET_bitSubStrLimit				0x00000004
#define JET_bitNormalizedKey 			0x00000008
#define JET_bitKeyDataZeroLength		0x00000010
#if ( JET_VERSION >= 0x0501 )
#define JET_bitFullColumnStartLimit		0x00000100
#define JET_bitFullColumnEndLimit		0x00000200
#define JET_bitPartialColumnStartLimit	0x00000400
#define JET_bitPartialColumnEndLimit	0x00000800
#endif
#define JET_bitRangeInclusive			0x00000001
#define JET_bitRangeUpperLimit			0x00000002
#define JET_bitRangeInstantDuration		0x00000004
#define JET_bitRangeRemove				0x00000008
#define JET_bitReadLock					0x00000001
#define JET_bitWriteLock				0x00000002
#define JET_MoveFirst					(0x80000000)
#define JET_MovePrevious				(-1)
#define JET_MoveNext					(+1)
#define JET_MoveLast					(0x7fffffff)
#define JET_bitMoveKeyNE				0x00000001
#define JET_bitSeekEQ					0x00000001
#define JET_bitSeekLT					0x00000002
#define JET_bitSeekLE					0x00000004
#define JET_bitSeekGE					0x00000008
#define JET_bitSeekGT		 			0x00000010
#define JET_bitSetIndexRange			0x00000020
#if ( JET_VERSION >= 0x0502 )
#define JET_bitCheckUniqueness			0x00000040
#endif
#if ( JET_VERSION >= 0x0501 )
#define JET_bitBookmarkPermitVirtualCurrency	0x00000001
#endif
#define JET_bitIndexColumnMustBeNull	0x00000001
#define JET_bitIndexColumnMustBeNonNull	0x00000002
#define JET_bitRecordInIndex			0x00000001
#define JET_bitRecordNotInIndex			0x00000002
#define JET_bitIndexUnique				0x00000001
#define JET_bitIndexPrimary				0x00000002
#define JET_bitIndexDisallowNull		0x00000004
#define JET_bitIndexIgnoreNull			0x00000008
#define JET_bitIndexIgnoreAnyNull		0x00000020
#define JET_bitIndexIgnoreFirstNull		0x00000040
#define JET_bitIndexLazyFlush			0x00000080
#define JET_bitIndexEmpty				0x00000100
#define JET_bitIndexUnversioned			0x00000200
#define JET_bitIndexSortNullsHigh		0x00000400
#define JET_bitIndexUnicode				0x00000800
#if ( JET_VERSION >= 0x0501 )
#define JET_bitIndexTuples				0x00001000
#endif
#if ( JET_VERSION >= 0x0502 )
#define JET_bitIndexTupleLimits			0x00002000
#endif
#if ( JET_VERSION >= 0x0600 )
#define JET_bitIndexCrossProduct		0x00004000
#define JET_bitIndexKeyMost				0x00008000
#define JET_bitIndexDisallowTruncation	0x00010000
#define JET_bitIndexNestedTable			0x00020000
#endif
#define JET_bitKeyAscending				0x00000000
#define JET_bitKeyDescending			0x00000001
#define JET_bitTableDenyWrite			0x00000001
#define JET_bitTableDenyRead			0x00000002
#define JET_bitTableReadOnly			0x00000004
#define JET_bitTableUpdatable			0x00000008
#define JET_bitTablePermitDDL			0x00000010
#define JET_bitTableNoCache			0x00000020
#define JET_bitTablePreread			0x00000040
#define JET_bitTableOpportuneRead	0x00000080
#define JET_bitTableSequential			0x00008000
#define JET_bitTableClassMask		0x000F0000
#define JET_bitTableClassNone		0x00000000
#define JET_bitTableClass1			0x00010000
#define JET_bitTableClass2			0x00020000
#define JET_bitTableClass3			0x00030000
#define JET_bitTableClass4			0x00040000
#define JET_bitTableClass5			0x00050000
#define JET_bitTableClass6			0x00060000
#define JET_bitTableClass7			0x00070000
#define JET_bitTableClass8			0x00080000
#define JET_bitTableClass9			0x00090000
#define JET_bitTableClass10			0x000A0000
#define JET_bitTableClass11			0x000B0000
#define JET_bitTableClass12			0x000C0000
#define JET_bitTableClass13			0x000D0000
#define JET_bitTableClass14			0x000E0000
#define JET_bitTableClass15			0x000F0000
#if ( JET_VERSION >= 0x0501 )
#define JET_bitLSReset				0x00000001
#define JET_bitLSCursor				0x00000002
#define JET_bitLSTable				0x00000004
#define JET_LSNil					(~(JET_LS)0)
#endif
#if ( JET_VERSION >= 0x0601 )
#define JET_bitPrereadForward		0x00000001
#define JET_bitPrereadBackward		0x00000002
#endif
#define JET_bitTTIndexed			0x00000001
#define JET_bitTTUnique 			0x00000002
#define JET_bitTTUpdatable			0x00000004
#define JET_bitTTScrollable			0x00000008
#define JET_bitTTSortNullsHigh		0x00000010
#define JET_bitTTForceMaterialization		0x00000020
#if ( JET_VERSION >= 0x0501 )
#define JET_bitTTErrorOnDuplicateInsertion	JET_bitTTForceMaterialization
#endif
#if ( JET_VERSION >= 0x0502 )
#define JET_bitTTForwardOnly		0x00000040
#endif
#if ( JET_VERSION >= 0x0601 )
#define JET_bitTTIntrinsicLVsOnly	0x00000080
#endif
#define JET_bitSetAppendLV					0x00000001
#define JET_bitSetOverwriteLV				0x00000004
#define JET_bitSetSizeLV					0x00000008
#define JET_bitSetZeroLength				0x00000020
#define JET_bitSetSeparateLV 				0x00000040
#define JET_bitSetUniqueMultiValues			0x00000080
#define JET_bitSetUniqueNormalizedMultiValues	0x00000100
#if ( JET_VERSION >= 0x0501 )
#define JET_bitSetRevertToDefaultValue		0x00000200
#define JET_bitSetIntrinsicLV				0x00000400
#endif
#if ( JET_VERSION >= 0x0601 )
#define JET_bitSetCompressed				0x00020000
#define JET_bitSetUncompressed				0x00010000
#endif
#if ( JET_VERSION >= 0x0601 )
#define JET_bitSpaceHintsUtilizeParentSpace			0x00000001
#define JET_bitCreateHintAppendSequential			0x00000002
#define JET_bitCreateHintHotpointSequential			0x00000004
#define JET_bitRetrieveHintReserve1					0x00000008
#define JET_bitRetrieveHintTableScanForward			0x00000010
#define JET_bitRetrieveHintTableScanBackward		0x00000020
#define JET_bitRetrieveHintReserve2					0x00000040
#define JET_bitRetrieveHintReserve3					0x00000080
#define JET_bitDeleteHintTableSequential			0x00000100
#endif
typedef struct {
	JET_COLUMNID columnid;
	const void *pvData;
	unsigned long cbData;
	JET_GRBIT grbit;
	unsigned long ibLongValue;
	unsigned long itagSequence;
	JET_ERR err;
} JET_SETCOLUMN;
#if ( JET_VERSION >= 0x0501 )
typedef struct {
	unsigned long paramid;
	JET_API_PTR lParam;
	const char *sz;
	JET_ERR err;
} JET_SETSYSPARAM_A;
typedef struct {
	unsigned long paramid;
	JET_API_PTR lParam;
	const WCHAR *sz;
	JET_ERR err;
} JET_SETSYSPARAM_W;
#ifdef JET_UNICODE
#define JET_SETSYSPARAM JET_SETSYSPARAM_W
#else
#define JET_SETSYSPARAM JET_SETSYSPARAM_A
#endif
#endif
#define JET_prepInsert						0
#define JET_prepReplace 					2
#define JET_prepCancel						3
#define JET_prepReplaceNoLock				4
#define JET_prepInsertCopy					5
#if ( JET_VERSION >= 0x0501 )
#define JET_prepInsertCopyDeleteOriginal	7
#endif
#if ( JET_VERSION >= 0x0502 )
#define JET_bitUpdateCheckESE97Compatibility	0x00000001
#endif
#define JET_bitEscrowNoRollback				0x0001
#define JET_bitRetrieveCopy					0x00000001
#define JET_bitRetrieveFromIndex			0x00000002
#define JET_bitRetrieveFromPrimaryBookmark	0x00000004
#define JET_bitRetrieveTag					0x00000008
#define JET_bitRetrieveNull					0x00000010
#define JET_bitRetrieveIgnoreDefault		0x00000020
#define JET_bitRetrieveLongId				0x00000040
#define JET_bitRetrieveLongValueRefCount	0x00000080
#if ( JET_VERSION >= 0x0600 )
#define JET_bitRetrieveTuple				0x00000800
#endif
typedef struct {
	JET_COLUMNID columnid;
	void *pvData;
	unsigned long cbData;
	unsigned long cbActual;
	JET_GRBIT grbit;
	unsigned long ibLongValue;
	unsigned long itagSequence;
	JET_COLUMNID columnidNextTagged;
	JET_ERR err;
} JET_RETRIEVECOLUMN;
#if ( JET_VERSION >= 0x0501 )
#define JET_bitEnumerateCopy						JET_bitRetrieveCopy
#define JET_bitEnumerateIgnoreDefault				JET_bitRetrieveIgnoreDefault
#define JET_bitEnumeratePresenceOnly				0x00020000
#define JET_bitEnumerateTaggedOnly					0x00040000
#define JET_bitEnumerateCompressOutput				0x00080000
#if ( JET_VERSION >= 0x0502 )
#define JET_bitEnumerateIgnoreUserDefinedDefault	0x00100000
#endif
#if ( JET_VERSION >= 0x0601 )
#define JET_bitEnumerateInRecordOnly				0x00200000
#endif
typedef struct {
	JET_COLUMNID columnid;
	unsigned long ctagSequence;
	unsigned long *rgtagSequence;
} JET_ENUMCOLUMNID;
typedef struct {
	unsigned long itagSequence;
	JET_ERR err;
	unsigned long cbData;
	void *pvData;
} JET_ENUMCOLUMNVALUE;
typedef struct {
	JET_COLUMNID columnid;
	JET_ERR err;
	union {
		struct {
			unsigned long cEnumColumnValue;
			JET_ENUMCOLUMNVALUE *rgEnumColumnValue;
		};
		struct {
			unsigned long cbData;
			void *pvData;
		};
	};
} JET_ENUMCOLUMN;
typedef void *(JET_API * JET_PFNREALLOC) (void *pvContext, void *pv, unsigned long cb);
#endif
#if ( JET_VERSION >= 0x0600 )
#define JET_bitRecordSizeInCopyBuffer			0x00000001
#define JET_bitRecordSizeRunningTotal			0x00000002
#define JET_bitRecordSizeLocal					0x00000004
typedef struct {
	unsigned __int64 cbData;
	unsigned __int64 cbLongValueData;
	unsigned __int64 cbOverhead;
	unsigned __int64 cbLongValueOverhead;
	unsigned __int64 cNonTaggedColumns;
	unsigned __int64 cTaggedColumns;
	unsigned __int64 cLongValues;
	unsigned __int64 cMultiValues;
} JET_RECSIZE;
#endif
#if ( JET_VERSION >= 0x0601 )
typedef struct {
	unsigned __int64 cbData;
	unsigned __int64 cbLongValueData;
	unsigned __int64 cbOverhead;
	unsigned __int64 cbLongValueOverhead;
	unsigned __int64 cNonTaggedColumns;
	unsigned __int64 cTaggedColumns;
	unsigned __int64 cLongValues;
	unsigned __int64 cMultiValues;
	unsigned __int64 cCompressedColumns;
	unsigned __int64 cbDataCompressed;
	unsigned __int64 cbLongValueDataCompressed;
} JET_RECSIZE2;
#endif
#pragma warning(pop)
#if ( JET_VERSION >= 0x0501 )
#define JET_bitTransactionReadOnly		0x00000001
#endif
#define JET_bitCommitLazyFlush			0x00000001
#define JET_bitWaitLastLevel0Commit		0x00000002
#if ( JET_VERSION >= 0x0502 )
#define JET_bitWaitAllLevel0Commit		0x00000008
#endif
#if ( JET_VERSION >= 0x0601 )
#define JET_bitForceNewLog				0x00000010
#endif
#define JET_bitRollbackAll				0x00000001
#if ( JET_VERSION >= 0x0600 )
#define JET_bitIncrementalSnapshot		0x00000001
#define JET_bitCopySnapshot				0x00000002
#define JET_bitContinueAfterThaw		0x00000004
#if ( JET_VERSION >= 0x0601 )
#define JET_bitExplicitPrepare			0x00000008
#endif
#define JET_bitAllDatabasesSnapshot		0x00000001
#define JET_bitAbortSnapshot			0x00000001
#endif
#define JET_DbInfoFilename			0
#define JET_DbInfoConnect			1
#define JET_DbInfoCountry			2
#if ( JET_VERSION >= 0x0501 )
#define JET_DbInfoLCID				3
#endif
#define JET_DbInfoLangid			3
#define JET_DbInfoCp				4
#define JET_DbInfoCollate			5
#define JET_DbInfoOptions			6
#define JET_DbInfoTransactions		7
#define JET_DbInfoVersion			8
#define JET_DbInfoIsam				9
#define JET_DbInfoFilesize			10
#define JET_DbInfoSpaceOwned		11
#define JET_DbInfoSpaceAvailable	12
#define JET_DbInfoUpgrade			13
#define JET_DbInfoMisc				14
#if ( JET_VERSION >= 0x0501 )
#define JET_DbInfoDBInUse			15
#define JET_DbInfoPageSize			17
#endif
#if ( JET_VERSION >= 0x0600 )
#define JET_DbInfoFileType			19
#endif
#define JET_dbstateJustCreated					1
#define JET_dbstateDirtyShutdown				2
#define JET_dbstateCleanShutdown				3
#define JET_dbstateBeingConverted				4
#if ( JET_VERSION >= 0x0501 )
#define JET_dbstateForceDetach					5
#endif
#if ( JET_VERSION >= 0x0600 )
#define JET_filetypeUnknown			0
#define JET_filetypeDatabase		1
#define JET_filetypeLog				3
#define JET_filetypeCheckpoint		4
#define JET_filetypeTempDatabase	5
#endif
#define JET_coltypNil				0
#define JET_coltypBit				1
#define JET_coltypUnsignedByte		2
#define JET_coltypShort 			3
#define JET_coltypLong				4
#define JET_coltypCurrency			5
#define JET_coltypIEEESingle		6
#define JET_coltypIEEEDouble		7
#define JET_coltypDateTime			8
#define JET_coltypBinary			9
#define JET_coltypText				10
#define JET_coltypLongBinary		11
#define JET_coltypLongText			12
#if ( JET_VERSION >= 0x0600 )
#define JET_coltypSLV				13
#define JET_coltypUnsignedLong		14
#define JET_coltypLongLong			15
#define JET_coltypGUID				16
#define JET_coltypUnsignedShort		17
#define JET_coltypMax				18
#elif ( JET_VERSION >= 0x0501 )
#define JET_coltypSLV				13
#define JET_coltypMax				14
#else
#define JET_coltypMax				13
#endif
#define JET_ObjInfo					0U
#define JET_ObjInfoListNoStats		1U
#define JET_ObjInfoList 			2U
#define JET_ObjInfoSysTabCursor 	3U
#define JET_ObjInfoListACM			4U
#define JET_ObjInfoNoStats			5U
#define JET_ObjInfoSysTabReadOnly	6U
#define JET_ObjInfoRulesLoaded		7U
#define JET_ObjInfoMax				8U
#define JET_TblInfo				0U
#define JET_TblInfoName			1U
#define JET_TblInfoDbid			2U
#define JET_TblInfoMostMany  	3U
#define JET_TblInfoRvt			4U
#define JET_TblInfoOLC			5U
#define JET_TblInfoResetOLC 	6U
#define JET_TblInfoSpaceUsage	7U
#define JET_TblInfoDumpTable	8U
#define JET_TblInfoSpaceAlloc	9U
#define JET_TblInfoSpaceOwned	10U
#define JET_TblInfoSpaceAvailable		11U
#define JET_TblInfoTemplateTableName	12U
#define JET_IdxInfo					0U
#define JET_IdxInfoList 			1U
#define JET_IdxInfoSysTabCursor 	2U
#define JET_IdxInfoOLC				3U
#define JET_IdxInfoResetOLC			4U
#define JET_IdxInfoSpaceAlloc		5U
#if ( JET_VERSION >= 0x0501 )
#define JET_IdxInfoLCID				6U
#endif
#define JET_IdxInfoLangid			6U
#define JET_IdxInfoCount			7U
#define JET_IdxInfoVarSegMac		8U
#define JET_IdxInfoIndexId			9U
#if ( JET_VERSION >= 0x0600 )
#define JET_IdxInfoKeyMost			10U
#endif
#if ( JET_VERSION >= 0x0601 )
#define JET_IdxInfoCreateIndex		11U
#define JET_IdxInfoCreateIndex2		12U
#endif
#define JET_ColInfo					0U
#define JET_ColInfoList 			1U
#define JET_ColInfoSysTabCursor 	3U
#define JET_ColInfoBase 			4U
#define JET_ColInfoListCompact 		5U
#if ( JET_VERSION >= 0x0501 )
#define JET_ColInfoByColid			6U
#define JET_ColInfoListSortColumnid	7U
#endif
#if ( JET_VERSION >= 0x0600 )
#define JET_ColInfoBaseByColid		8U
#endif
#if ( JET_VERSION >= 0x0600 )
#define JET_ColInfoGrbitNonDerivedColumnsOnly	0x80000000
#define JET_ColInfoGrbitMinimalInfo				0x40000000
#define JET_ColInfoGrbitSortByColumnid			0x20000000
#endif
#if ( JET_VERSION >= 0x0600 )
#define JET_InstanceMiscInfoLogSignature	0U
#endif
#define JET_objtypNil				0
#define JET_objtypTable 			1
#define JET_bitCompactStats				0x00000020
#define JET_bitCompactRepair			0x00000040
#define JET_snpRepair					2
#define JET_snpCompact					4
#define JET_snpRestore					8
#define JET_snpBackup					9
#define JET_snpUpgrade					10
#if ( JET_VERSION >= 0x0501 )
#define JET_snpScrub					11
#define JET_snpUpgradeRecordFormat		12
#endif
#define JET_sntBegin			5
#define JET_sntRequirements		7
#define JET_sntProgress 		0
#define JET_sntComplete 		6
#define JET_sntFail				3
#define JET_ExceptionMsgBox		0x0001
#define JET_ExceptionNone		0x0002
#if ( JET_VERSION >= 0x0501 )
#define JET_OnlineDefragDisable			0x0000
#define JET_OnlineDefragAllOBSOLETE		0x0001
#define JET_OnlineDefragDatabases		0x0002
#define JET_OnlineDefragSpaceTrees		0x0004
#define JET_OnlineDefragAll				0xffff
#endif
#define JET_errSuccess						 0
#define JET_wrnNyi							-1
#define JET_errRfsFailure			   		-100
#define JET_errRfsNotArmed					-101
#define JET_errFileClose					-102
#define JET_errOutOfThreads					-103
#define JET_errTooManyIO		  			-105
#define JET_errTaskDropped					-106
#define JET_errInternalError				-107
#define JET_errDatabaseBufferDependenciesCorrupted	-255
#define JET_wrnRemainingVersions 			 321
#define JET_errPreviousVersion				-322
#define JET_errPageBoundary					-323
#define JET_errKeyBoundary		  			-324
#define JET_errBadPageLink					-327
#define JET_errBadBookmark					-328
#define JET_errNTSystemCallFailed 			-334
#define	JET_errBadParentPageLink			-338
#define JET_errSPAvailExtCacheOutOfSync		-340
#define JET_errSPAvailExtCorrupted			-341
#define JET_errSPAvailExtCacheOutOfMemory	-342
#define JET_errSPOwnExtCorrupted			-343
#define JET_errDbTimeCorrupted				-344
#define JET_wrnUniqueKey					 345
#define JET_errKeyTruncated					-346
#define JET_wrnSeparateLongValue			 406
#define JET_wrnRecordFoundGreater			JET_wrnSeekNotEqual
#define JET_wrnRecordFoundLess    			JET_wrnSeekNotEqual
#define JET_errColumnIllegalNull  			JET_errNullInvalid
#define JET_errKeyTooBig					-408
#define JET_errInvalidLoggedOperation		-500
#define JET_errLogFileCorrupt		  		-501
#define JET_errNoBackupDirectory 			-503
#define JET_errBackupDirectoryNotEmpty 		-504
#define JET_errBackupInProgress 			-505
#define JET_errRestoreInProgress			-506
#define JET_errMissingPreviousLogFile		-509
#define JET_errLogWriteFail					-510
#define JET_errLogDisabledDueToRecoveryFailure	-511
#define JET_errCannotLogDuringRecoveryRedo	-512
#define JET_errLogGenerationMismatch		-513
#define JET_errBadLogVersion  	  			-514
#define JET_errInvalidLogSequence  			-515
#define JET_errLoggingDisabled 				-516
#define JET_errLogBufferTooSmall			-517
#define JET_errLogSequenceEnd				-519
#define JET_errNoBackup						-520
#define JET_errInvalidBackupSequence		-521
#define JET_errBackupNotAllowedYet			-523
#define JET_errDeleteBackupFileFail	   		-524
#define JET_errMakeBackupDirectoryFail 		-525
#define JET_errInvalidBackup		 		-526
#define JET_errRecoveredWithErrors			-527
#define JET_errMissingLogFile				-528
#define JET_errLogDiskFull					-529
#define JET_errBadLogSignature				-530
#define JET_errBadDbSignature				-531
#define JET_errBadCheckpointSignature		-532
#define JET_errCheckpointCorrupt			-533
#define JET_errMissingPatchPage				-534
#define JET_errBadPatchPage					-535
#define JET_errRedoAbruptEnded				-536
#define JET_errBadSLVSignature				-537
#define JET_errPatchFileMissing				-538
#define JET_errDatabaseLogSetMismatch		-539
#define JET_errDatabaseStreamingFileMismatch	-540
#define JET_errLogFileSizeMismatch			-541
#define JET_errCheckpointFileNotFound		-542
#define JET_errRequiredLogFilesMissing		-543
#define JET_errSoftRecoveryOnBackupDatabase	-544
#define JET_errLogFileSizeMismatchDatabasesConsistent	-545
#define JET_errLogSectorSizeMismatch		-546
#define JET_errLogSectorSizeMismatchDatabasesConsistent	-547
#define JET_errLogSequenceEndDatabasesConsistent		-548
#define JET_errStreamingDataNotLogged		-549
#define JET_errDatabaseDirtyShutdown		-550
#define JET_errDatabaseInconsistent			JET_errDatabaseDirtyShutdown
#define JET_errConsistentTimeMismatch		-551
#define JET_errDatabasePatchFileMismatch	-552
#define JET_errEndingRestoreLogTooLow		-553
#define JET_errStartingRestoreLogTooHigh	-554
#define JET_errGivenLogFileHasBadSignature	-555
#define JET_errGivenLogFileIsNotContiguous	-556
#define JET_errMissingRestoreLogFiles		-557
#define JET_wrnExistingLogFileHasBadSignature	558
#define JET_wrnExistingLogFileIsNotContiguous	559
#define JET_errMissingFullBackup			-560
#define JET_errBadBackupDatabaseSize		-561
#define JET_errDatabaseAlreadyUpgraded		-562
#define JET_errDatabaseIncompleteUpgrade	-563
#define JET_wrnSkipThisRecord				 564
#define JET_errMissingCurrentLogFiles		-565
#define JET_errDbTimeTooOld						-566
#define JET_errDbTimeTooNew						-567
#define JET_errMissingFileToBackup				-569
#define JET_errLogTornWriteDuringHardRestore	-570
#define JET_errLogTornWriteDuringHardRecovery	-571
#define JET_errLogCorruptDuringHardRestore		-573
#define JET_errLogCorruptDuringHardRecovery	 	-574
#define JET_errMustDisableLoggingForDbUpgrade	-575
#define JET_errBadRestoreTargetInstance			-577
#define JET_wrnTargetInstanceRunning			 578
#define JET_errRecoveredWithoutUndo				-579
#define	JET_errDatabasesNotFromSameSnapshot		-580
#define	JET_errSoftRecoveryOnSnapshot			-581
#define JET_errCommittedLogFilesMissing			-582
#define	JET_errSectorSizeNotSupported			-583
#define JET_errRecoveredWithoutUndoDatabasesConsistent	-584
#define JET_wrnCommittedLogFilesLost			585
#define JET_errCommittedLogFileCorrupt			-586
#define JET_wrnCommittedLogFilesRemoved			587
#define JET_wrnDatabaseRepaired					 595
#define JET_errUnicodeTranslationBufferTooSmall	-601
#define JET_errUnicodeTranslationFail			-602
#define JET_errUnicodeNormalizationNotSupported	-603
#define JET_errExistingLogFileHasBadSignature	-610
#define JET_errExistingLogFileIsNotContiguous	-611
#define JET_errLogReadVerifyFailure			-612
#define JET_errSLVReadVerifyFailure			-613
#define JET_errCheckpointDepthTooDeep		-614
#define JET_errRestoreOfNonBackupDatabase	-615
#define JET_errLogFileNotCopied				-616
#define JET_errInvalidGrbit					-900
#define JET_errTermInProgress		  		-1000
#define JET_errFeatureNotAvailable			-1001
#define JET_errInvalidName					-1002
#define JET_errInvalidParameter 			-1003
#define JET_wrnColumnNull					 1004
#define JET_wrnBufferTruncated				 1006
#define JET_wrnDatabaseAttached 			 1007
#define JET_errDatabaseFileReadOnly			-1008
#define JET_wrnSortOverflow					 1009
#define JET_errInvalidDatabaseId			-1010
#define JET_errOutOfMemory					-1011
#define JET_errOutOfDatabaseSpace 			-1012
#define JET_errOutOfCursors					-1013
#define JET_errOutOfBuffers					-1014
#define JET_errTooManyIndexes				-1015
#define JET_errTooManyKeys					-1016
#define JET_errRecordDeleted				-1017
#define JET_errReadVerifyFailure			-1018
#define JET_errPageNotInitialized			-1019
#define JET_errOutOfFileHandles	 			-1020
#define JET_errDiskReadVerificationFailure	-1021
#define JET_errDiskIO						-1022
#define JET_errInvalidPath					-1023
#define JET_errInvalidSystemPath			-1024
#define JET_errInvalidLogDirectory			-1025
#define JET_errRecordTooBig					-1026
#define JET_errTooManyOpenDatabases			-1027
#define JET_errInvalidDatabase				-1028
#define JET_errNotInitialized				-1029
#define JET_errAlreadyInitialized			-1030
#define JET_errInitInProgress				-1031
#define JET_errFileAccessDenied 			-1032
#define JET_errBufferTooSmall				-1038
#define JET_wrnSeekNotEqual					 1039
#define JET_errTooManyColumns				-1040
#define JET_errContainerNotEmpty			-1043
#define JET_errInvalidFilename				-1044
#define JET_errInvalidBookmark				-1045
#define JET_errColumnInUse					-1046
#define JET_errInvalidBufferSize			-1047
#define JET_errColumnNotUpdatable			-1048
#define JET_errIndexInUse					-1051
#define JET_errLinkNotSupported 			-1052
#define JET_errNullKeyDisallowed			-1053
#define JET_errNotInTransaction 			-1054
#define JET_wrnNoErrorInfo					 1055
#define JET_wrnNoIdleActivity		 		 1058
#define JET_errTooManyActiveUsers			-1059
#define JET_errInvalidCountry				-1061
#define JET_errInvalidLanguageId			-1062
#define JET_errInvalidCodePage				-1063
#define JET_errInvalidLCMapStringFlags		-1064
#define JET_errVersionStoreEntryTooBig		-1065
#define JET_errVersionStoreOutOfMemoryAndCleanupTimedOut	-1066
#define JET_wrnNoWriteLock					 1067
#define JET_wrnColumnSetNull		   		 1068
#define JET_errVersionStoreOutOfMemory		-1069
#define JET_errCannotIndex		 	  		-1071
#define JET_errRecordNotDeleted				-1072
#define JET_errTooManyMempoolEntries		-1073
#define JET_errOutOfObjectIDs				-1074
#define JET_errOutOfLongValueIDs			-1075
#define JET_errOutOfAutoincrementValues		-1076
#define JET_errOutOfDbtimeValues			-1077
#define JET_errOutOfSequentialIndexValues	-1078
#define JET_errRunningInOneInstanceMode		-1080
#define JET_errRunningInMultiInstanceMode	-1081
#define JET_errSystemParamsAlreadySet		-1082
#define JET_errSystemPathInUse				-1083
#define JET_errLogFilePathInUse				-1084
#define JET_errTempPathInUse				-1085
#define JET_errInstanceNameInUse			-1086
#define JET_errInstanceUnavailable			-1090
#define JET_errDatabaseUnavailable			-1091
#define JET_errInstanceUnavailableDueToFatalLogDiskFull	-1092
#define JET_errOutOfSessions  				-1101
#define JET_errWriteConflict				-1102
#define JET_errTransTooDeep					-1103
#define JET_errInvalidSesid					-1104
#define JET_errWriteConflictPrimaryIndex	-1105
#define JET_errInTransaction				-1108
#define JET_errRollbackRequired				-1109
#define JET_errTransReadOnly				-1110
#define JET_errSessionWriteConflict			-1111
#define JET_errRecordTooBigForBackwardCompatibility				-1112
#define JET_errCannotMaterializeForwardOnlySort					-1113
#define JET_errSesidTableIdMismatch			-1114
#define JET_errInvalidInstance				-1115
#define JET_errDirtyShutdown				-1116
#define JET_errDatabaseDuplicate			-1201
#define JET_errDatabaseInUse				-1202
#define JET_errDatabaseNotFound 			-1203
#define JET_errDatabaseInvalidName			-1204
#define JET_errDatabaseInvalidPages			-1205
#define JET_errDatabaseCorrupted			-1206
#define JET_errDatabaseLocked				-1207
#define JET_errCannotDisableVersioning		-1208
#define JET_errInvalidDatabaseVersion		-1209
#define JET_errDatabase200Format			-1210
#define JET_errDatabase400Format			-1211
#define JET_errDatabase500Format			-1212
#define JET_errPageSizeMismatch				-1213
#define JET_errTooManyInstances				-1214
#define JET_errDatabaseSharingViolation		-1215
#define JET_errAttachedDatabaseMismatch		-1216
#define JET_errDatabaseInvalidPath			-1217
#define JET_errDatabaseIdInUse				-1218
#define JET_errForceDetachNotAllowed 		-1219
#define JET_errCatalogCorrupted				-1220
#define JET_errPartiallyAttachedDB			-1221
#define JET_errDatabaseSignInUse			-1222
#define JET_errDatabaseCorruptedNoRepair	-1224
#define JET_errInvalidCreateDbVersion		-1225
#define JET_wrnTableEmpty			 		 1301
#define JET_errTableLocked					-1302
#define JET_errTableDuplicate				-1303
#define JET_errTableInUse					-1304
#define JET_errObjectNotFound				-1305
#define JET_errDensityInvalid				-1307
#define JET_errTableNotEmpty				-1308
#define JET_errInvalidTableId				-1310
#define JET_errTooManyOpenTables			-1311
#define JET_errIllegalOperation 			-1312
#define JET_errTooManyOpenTablesAndCleanupTimedOut	-1313
#define JET_errObjectDuplicate				-1314
#define JET_errInvalidObject				-1316
#define JET_errCannotDeleteTempTable		-1317
#define JET_errCannotDeleteSystemTable		-1318
#define JET_errCannotDeleteTemplateTable	-1319
#define JET_errExclusiveTableLockRequired	-1322
#define JET_errFixedDDL						-1323
#define JET_errFixedInheritedDDL			-1324
#define JET_errCannotNestDDL				-1325
#define JET_errDDLNotInheritable			-1326
#define JET_wrnTableInUseBySystem			 1327
#define JET_errInvalidSettings				-1328
#define JET_errClientRequestToStopJetService			-1329
#define JET_errCannotAddFixedVarColumnToDerivedTable	-1330
#define JET_errIndexCantBuild				-1401
#define JET_errIndexHasPrimary				-1402
#define JET_errIndexDuplicate				-1403
#define JET_errIndexNotFound				-1404
#define JET_errIndexMustStay				-1405
#define JET_errIndexInvalidDef				-1406
#define JET_errInvalidCreateIndex	 		-1409
#define JET_errTooManyOpenIndexes			-1410
#define JET_errMultiValuedIndexViolation	-1411
#define JET_errIndexBuildCorrupted			-1412
#define JET_errPrimaryIndexCorrupted		-1413
#define JET_errSecondaryIndexCorrupted		-1414
#define JET_wrnCorruptIndexDeleted			 1415
#define JET_errInvalidIndexId				-1416
#define JET_errIndexTuplesSecondaryIndexOnly		-1430
#define JET_errIndexTuplesTooManyColumns			-1431
#define JET_errIndexTuplesOneColumnOnly				JET_errIndexTuplesTooManyColumns
#define JET_errIndexTuplesNonUniqueOnly				-1432
#define JET_errIndexTuplesTextBinaryColumnsOnly		-1433
#define JET_errIndexTuplesTextColumnsOnly			JET_errIndexTuplesTextBinaryColumnsOnly
#define JET_errIndexTuplesVarSegMacNotAllowed		-1434
#define JET_errIndexTuplesInvalidLimits				-1435
#define JET_errIndexTuplesCannotRetrieveFromIndex	-1436
#define JET_errIndexTuplesKeyTooSmall				-1437
#define JET_errColumnLong					-1501
#define JET_errColumnNoChunk				-1502
#define JET_errColumnDoesNotFit 			-1503
#define JET_errNullInvalid					-1504
#define JET_errColumnIndexed				-1505
#define JET_errColumnTooBig					-1506
#define JET_errColumnNotFound				-1507
#define JET_errColumnDuplicate				-1508
#define JET_errMultiValuedColumnMustBeTagged	-1509
#define JET_errColumnRedundant				-1510
#define JET_errInvalidColumnType			-1511
#define JET_wrnColumnMaxTruncated	 		 1512
#define JET_errTaggedNotNULL				-1514
#define JET_errNoCurrentIndex				-1515
#define JET_errKeyIsMade					-1516
#define JET_errBadColumnId					-1517
#define JET_errBadItagSequence				-1518
#define JET_errColumnInRelationship			-1519
#define JET_wrnCopyLongValue				 1520
#define JET_errCannotBeTagged				-1521
#define JET_errDefaultValueTooBig			-1524
#define JET_errMultiValuedDuplicate			-1525
#define JET_errLVCorrupted					-1526
#define JET_errMultiValuedDuplicateAfterTruncation	-1528
#define JET_errDerivedColumnCorruption		-1529
#define JET_errInvalidPlaceholderColumn		-1530
#define JET_wrnColumnSkipped				 1531
#define JET_wrnColumnNotLocal				 1532
#define JET_wrnColumnMoreTags				 1533
#define JET_wrnColumnTruncated				 1534
#define JET_wrnColumnPresent				 1535
#define JET_wrnColumnSingleValue			 1536
#define JET_wrnColumnDefault				 1537
#define JET_errColumnCannotBeCompressed		-1538
#define JET_wrnColumnNotInRecord			 1539
#define JET_errRecordNotFound				-1601
#define JET_errRecordNoCopy					-1602
#define JET_errNoCurrentRecord				-1603
#define JET_errRecordPrimaryChanged			-1604
#define JET_errKeyDuplicate					-1605
#define JET_errAlreadyPrepared				-1607
#define JET_errKeyNotMade					-1608
#define JET_errUpdateNotPrepared			-1609
#define JET_wrnDataHasChanged		 		 1610
#define JET_errDataHasChanged				-1611
#define JET_wrnKeyChanged			 		 1618
#define JET_errLanguageNotSupported			-1619
#define JET_errDecompressionFailed			-1620
#define JET_errTooManySorts					-1701
#define JET_errInvalidOnSort				-1702
#define JET_errTempFileOpenError			-1803
#define JET_errTooManyAttachedDatabases 	-1805
#define JET_errDiskFull 					-1808
#define JET_errPermissionDenied 			-1809
#define JET_errFileNotFound					-1811
#define JET_errFileInvalidType				-1812
#define JET_wrnFileOpenReadOnly				 1813
#define JET_errAfterInitialization			-1850
#define JET_errLogCorrupted					-1852
#define JET_errInvalidOperation 			-1906
#define JET_errAccessDenied					-1907
#define JET_wrnIdleFull						 1908
#define JET_errTooManySplits				-1909
#define JET_errSessionSharingViolation		-1910
#define JET_errEntryPointNotFound			-1911
#define JET_errSessionContextAlreadySet		-1912
#define JET_errSessionContextNotSetByThisThread	-1913
#define JET_errSessionInUse					-1914
#define JET_errRecordFormatConversionFailed	-1915
#define JET_errOneDatabasePerSession		-1916
#define JET_errRollbackError				-1917
#define JET_wrnDefragAlreadyRunning			 2000
#define JET_wrnDefragNotRunning				 2001
#define JET_wrnCallbackNotRegistered         2100
#define JET_errCallbackFailed				-2101
#define JET_errCallbackNotResolved			-2102
#define JET_errSpaceHintsInvalid			-2103
#define JET_errOSSnapshotInvalidSequence	-2401
#define JET_errOSSnapshotTimeOut			-2402
#define JET_errOSSnapshotNotAllowed			-2403
#define JET_errOSSnapshotInvalidSnapId		-2404
#define JET_errLSCallbackNotSpecified		-3000
#define JET_errLSAlreadySet					-3001
#define JET_errLSNotSet						-3002
#define JET_errFileIOSparse					-4000
#define JET_errFileIOBeyondEOF				-4001
#define JET_errFileIOAbort					-4002
#define JET_errFileIORetry					-4003
#define JET_errFileIOFail					-4004
#define JET_errFileCompressed				-4005
#if !defined(_JET_NOPROTOTYPES)

JET_ERR JET_API JetInit(JET_INSTANCE *pinstance);
#if ( JET_VERSION >= 0x0501 )
JET_ERR JET_API JetInit2(JET_INSTANCE *pinstance, JET_GRBIT grbit);
#endif
#if ( JET_VERSION >= 0x0600 )
#if ( JET_VERSION < 0x0600 )
#define JetInit3A JetInit3
#endif
JET_ERR JET_API JetInit3A(JET_INSTANCE *pinstance, JET_RSTINFO_A *prstInfo, JET_GRBIT grbit);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetInit3W(JET_INSTANCE *pinstance, JET_RSTINFO_W *prstInfo, JET_GRBIT grbit);
#ifdef JET_UNICODE
#define JetInit3 JetInit3W
#else
#define JetInit3 JetInit3A
#endif
#endif
#endif
#if ( JET_VERSION >= 0x0501 )
#if ( JET_VERSION < 0x0600 )
#define JetCreateInstanceA JetCreateInstance
#endif
JET_ERR JET_API JetCreateInstanceA(JET_INSTANCE *pinstance, JET_PCSTR szInstanceName);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetCreateInstanceW(JET_INSTANCE *pinstance, JET_PCWSTR szInstanceName);
#ifdef JET_UNICODE
#define JetCreateInstance JetCreateInstanceW
#else
#define JetCreateInstance JetCreateInstanceA
#endif
#endif
#if ( JET_VERSION < 0x0600 )
#define JetCreateInstance2A JetCreateInstance2
#endif
JET_ERR JET_API JetCreateInstance2A(JET_INSTANCE *pinstance, JET_PCSTR szInstanceName, JET_PCSTR szDisplayName, JET_GRBIT grbit);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetCreateInstance2W(JET_INSTANCE *pinstance, JET_PCWSTR szInstanceName, JET_PCWSTR szDisplayName, JET_GRBIT grbit);
#ifdef JET_UNICODE
#define JetCreateInstance2 JetCreateInstance2W
#else
#define JetCreateInstance2 JetCreateInstance2A
#endif
#endif
#endif
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetGetInstanceMiscInfo(JET_INSTANCE instance, void *pvResult, unsigned long cbMax, unsigned long InfoLevel);
#endif
JET_ERR JET_API JetTerm(JET_INSTANCE instance);
JET_ERR JET_API JetTerm2(JET_INSTANCE instance, JET_GRBIT grbit);
JET_ERR JET_API JetStopService();
#if ( JET_VERSION >= 0x0501 )
JET_ERR JET_API JetStopServiceInstance(JET_INSTANCE instance);
#endif
JET_ERR JET_API JetStopBackup();
#if ( JET_VERSION >= 0x0501 )
JET_ERR JET_API JetStopBackupInstance(JET_INSTANCE instance);
#endif
#if ( JET_VERSION < 0x0600 )
#define JetSetSystemParameterA JetSetSystemParameter
#endif
JET_ERR JET_API JetSetSystemParameterA(JET_INSTANCE *pinstance, JET_SESID sesid, unsigned long paramid, JET_API_PTR lParam, JET_PCSTR szParam);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetSetSystemParameterW(JET_INSTANCE *pinstance, JET_SESID sesid, unsigned long paramid, JET_API_PTR lParam, JET_PCWSTR szParam);
#ifdef JET_UNICODE
#define JetSetSystemParameter JetSetSystemParameterW
#else
#define JetSetSystemParameter JetSetSystemParameterA
#endif
#endif
#if ( JET_VERSION < 0x0600 )
#define JetGetSystemParameterA JetGetSystemParameter
#endif
JET_ERR JET_API JetGetSystemParameterA(JET_INSTANCE instance, JET_SESID sesid, unsigned long paramid, JET_API_PTR *plParam, JET_PSTR szParam, unsigned long cbMax);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetGetSystemParameterW(JET_INSTANCE instance, JET_SESID sesid, unsigned long paramid, JET_API_PTR *plParam, JET_PWSTR szParam, unsigned long cbMax);
#ifdef JET_UNICODE
#define JetGetSystemParameter JetGetSystemParameterW
#else
#define JetGetSystemParameter JetGetSystemParameterA
#endif
#endif
#if ( JET_VERSION >= 0x0501 )
#if ( JET_VERSION < 0x0600 )
#define JetEnableMultiInstanceA JetEnableMultiInstance
#endif
JET_ERR JET_API JetEnableMultiInstanceA(JET_SETSYSPARAM_A *psetsysparam, unsigned long csetsysparam, unsigned long *pcsetsucceed);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetEnableMultiInstanceW(JET_SETSYSPARAM_W *psetsysparam, unsigned long csetsysparam, unsigned long *pcsetsucceed);
#ifdef JET_UNICODE
#define JetEnableMultiInstance JetEnableMultiInstanceW
#else
#define JetEnableMultiInstance JetEnableMultiInstanceA
#endif
#endif
#endif
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetGetThreadStats(void *pvResult, unsigned long cbMax);
#endif
#if ( JET_VERSION < 0x0600 )
#define JetBeginSessionA JetBeginSession
#endif
JET_ERR JET_API JetBeginSessionA(JET_INSTANCE instance, JET_SESID *psesid, JET_PCSTR szUserName, JET_PCSTR szPassword);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetBeginSessionW(JET_INSTANCE instance, JET_SESID *psesid, JET_PCWSTR szUserName, JET_PCWSTR szPassword);
#ifdef JET_UNICODE
#define JetBeginSession JetBeginSessionW
#else
#define JetBeginSession JetBeginSessionA
#endif
#endif
JET_ERR JET_API JetDupSession(JET_SESID sesid, JET_SESID *psesid);
JET_ERR JET_API JetEndSession(JET_SESID sesid, JET_GRBIT grbit);
JET_ERR JET_API JetGetVersion(JET_SESID sesid, unsigned long *pwVersion);
JET_ERR JET_API JetIdle(JET_SESID sesid, JET_GRBIT grbit);
#if ( JET_VERSION < 0x0600 )
#define JetCreateDatabaseA JetCreateDatabase
#endif
JET_ERR JET_API JetCreateDatabaseA(JET_SESID sesid, JET_PCSTR szFilename, JET_PCSTR szConnect, JET_DBID *pdbid, JET_GRBIT grbit);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetCreateDatabaseW(JET_SESID sesid, JET_PCWSTR szFilename, JET_PCWSTR szConnect, JET_DBID *pdbid, JET_GRBIT grbit);
#ifdef JET_UNICODE
#define JetCreateDatabase JetCreateDatabaseW
#else
#define JetCreateDatabase JetCreateDatabaseA
#endif
#endif
#if ( JET_VERSION < 0x0600 )
#define JetCreateDatabase2A JetCreateDatabase2
#endif
JET_ERR JET_API JetCreateDatabase2A(JET_SESID sesid, JET_PCSTR szFilename, const unsigned long cpgDatabaseSizeMax, JET_DBID *pdbid, JET_GRBIT grbit);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetCreateDatabase2W(JET_SESID sesid, JET_PCWSTR szFilename, const unsigned long cpgDatabaseSizeMax, JET_DBID *pdbid, JET_GRBIT grbit);
#ifdef JET_UNICODE
#define JetCreateDatabase2 JetCreateDatabase2W
#else
#define JetCreateDatabase2 JetCreateDatabase2A
#endif
#endif
#if ( JET_VERSION < 0x0600 )
#define JetAttachDatabaseA JetAttachDatabase
#endif
JET_ERR JET_API JetAttachDatabaseA(JET_SESID sesid, JET_PCSTR szFilename, JET_GRBIT grbit);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetAttachDatabaseW(JET_SESID sesid, JET_PCWSTR szFilename, JET_GRBIT grbit);
#ifdef JET_UNICODE
#define JetAttachDatabase JetAttachDatabaseW
#else
#define JetAttachDatabase JetAttachDatabaseA
#endif
#endif
#if ( JET_VERSION < 0x0600 )
#define JetAttachDatabase2A JetAttachDatabase2
#endif
JET_ERR JET_API JetAttachDatabase2A(JET_SESID sesid, JET_PCSTR szFilename, const unsigned long cpgDatabaseSizeMax, JET_GRBIT grbit);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetAttachDatabase2W(JET_SESID sesid, JET_PCWSTR szFilename, const unsigned long cpgDatabaseSizeMax, JET_GRBIT grbit);
#ifdef JET_UNICODE
#define JetAttachDatabase2 JetAttachDatabase2W
#else
#define JetAttachDatabase2 JetAttachDatabase2A
#endif
#endif
#if ( JET_VERSION < 0x0600 )
#define JetDetachDatabaseA JetDetachDatabase
#endif
JET_ERR JET_API JetDetachDatabaseA(JET_SESID sesid, JET_PCSTR szFilename);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetDetachDatabaseW(JET_SESID sesid, JET_PCWSTR szFilename);
#ifdef JET_UNICODE
#define JetDetachDatabase JetDetachDatabaseW
#else
#define JetDetachDatabase JetDetachDatabaseA
#endif
#endif
#if ( JET_VERSION >= 0x0501 )
#if ( JET_VERSION < 0x0600 )
#define JetDetachDatabase2A JetDetachDatabase2
#endif
JET_ERR JET_API JetDetachDatabase2A(JET_SESID sesid, JET_PCSTR szFilename, JET_GRBIT grbit);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetDetachDatabase2W(JET_SESID sesid, JET_PCWSTR szFilename, JET_GRBIT grbit);
#ifdef JET_UNICODE
#define JetDetachDatabase2 JetDetachDatabase2W
#else
#define JetDetachDatabase2 JetDetachDatabase2A
#endif
#endif
#endif
#if ( JET_VERSION < 0x0600 )
#define JetGetObjectInfoA JetGetObjectInfo
#endif
JET_ERR JET_API JetGetObjectInfoA(JET_SESID sesid, JET_DBID dbid, JET_OBJTYP objtyp, JET_PCSTR szContainerName, JET_PCSTR szObjectName, void *pvResult, unsigned long cbMax, unsigned long InfoLevel);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetGetObjectInfoW(JET_SESID sesid, JET_DBID dbid, JET_OBJTYP objtyp, JET_PCWSTR szContainerName, JET_PCWSTR szObjectName, void *pvResult, unsigned long cbMax, unsigned long InfoLevel);
#ifdef JET_UNICODE
#define JetGetObjectInfo JetGetObjectInfoW
#else
#define JetGetObjectInfo JetGetObjectInfoA
#endif
#endif
#if ( JET_VERSION < 0x0600 )
#define JetGetTableInfoA JetGetTableInfo
#endif
JET_ERR JET_API JetGetTableInfoA(JET_SESID sesid, JET_TABLEID tableid, void *pvResult, unsigned long cbMax, unsigned long InfoLevel);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetGetTableInfoW(JET_SESID sesid, JET_TABLEID tableid, void *pvResult, unsigned long cbMax, unsigned long InfoLevel);
#ifdef JET_UNICODE
#define JetGetTableInfo JetGetTableInfoW
#else
#define JetGetTableInfo JetGetTableInfoA
#endif
#endif
#if ( JET_VERSION < 0x0600 )
#define JetCreateTableA JetCreateTable
#endif
JET_ERR JET_API JetCreateTableA(JET_SESID sesid, JET_DBID dbid, JET_PCSTR szTableName, unsigned long lPages, unsigned long lDensity, JET_TABLEID *ptableid);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetCreateTableW(JET_SESID sesid, JET_DBID dbid, JET_PCWSTR szTableName, unsigned long lPages, unsigned long lDensity, JET_TABLEID *ptableid);
#ifdef JET_UNICODE
#define JetCreateTable JetCreateTableW
#else
#define JetCreateTable JetCreateTableA
#endif
#endif
#if ( JET_VERSION < 0x0600 )
#define JetCreateTableColumnIndexA JetCreateTableColumnIndex
#endif
JET_ERR JET_API JetCreateTableColumnIndexA(JET_SESID sesid, JET_DBID dbid, JET_TABLECREATE_A *ptablecreate);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetCreateTableColumnIndexW(JET_SESID sesid, JET_DBID dbid, JET_TABLECREATE_W *ptablecreate);
#ifdef JET_UNICODE
#define JetCreateTableColumnIndex JetCreateTableColumnIndexW
#else
#define JetCreateTableColumnIndex JetCreateTableColumnIndexA
#endif
#endif
#if ( JET_VERSION >= 0x0501 )
#if ( JET_VERSION < 0x0600 )
#define JetCreateTableColumnIndex2A JetCreateTableColumnIndex2
#endif
JET_ERR JET_API JetCreateTableColumnIndex2A(JET_SESID sesid, JET_DBID dbid, JET_TABLECREATE2_A *ptablecreate);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetCreateTableColumnIndex2W(JET_SESID sesid, JET_DBID dbid, JET_TABLECREATE2_W *ptablecreate);
#ifdef JET_UNICODE
#define JetCreateTableColumnIndex2 JetCreateTableColumnIndex2W
#else
#define JetCreateTableColumnIndex2 JetCreateTableColumnIndex2A
#endif
#endif
#endif
#if ( JET_VERSION >= 0x0601 )
JET_ERR JET_API JetCreateTableColumnIndex3A(JET_SESID sesid, JET_DBID dbid, JET_TABLECREATE3_A *ptablecreate);
JET_ERR JET_API JetCreateTableColumnIndex3W(JET_SESID sesid, JET_DBID dbid, JET_TABLECREATE3_W *ptablecreate);
#ifdef JET_UNICODE
#define JetCreateTableColumnIndex3 JetCreateTableColumnIndex3W
#else
#define JetCreateTableColumnIndex3 JetCreateTableColumnIndex3A
#endif
#endif
#if ( JET_VERSION < 0x0600 )
#define JetDeleteTableA JetDeleteTable
#endif
JET_ERR JET_API JetDeleteTableA(JET_SESID sesid, JET_DBID dbid, JET_PCSTR szTableName);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetDeleteTableW(JET_SESID sesid, JET_DBID dbid, JET_PCWSTR szTableName);
#ifdef JET_UNICODE
#define JetDeleteTable JetDeleteTableW
#else
#define JetDeleteTable JetDeleteTableA
#endif
#endif
#if ( JET_VERSION < 0x0600 )
#define JetRenameTableA JetRenameTable
#endif
JET_ERR JET_API JetRenameTableA(JET_SESID sesid, JET_DBID dbid, JET_PCSTR szName, JET_PCSTR szNameNew);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetRenameTableW(JET_SESID sesid, JET_DBID dbid, JET_PCWSTR szName, JET_PCWSTR szNameNew);
#ifdef JET_UNICODE
#define JetRenameTable JetRenameTableW
#else
#define JetRenameTable JetRenameTableA
#endif
#endif
#if ( JET_VERSION < 0x0600 )
#define JetGetTableColumnInfoA JetGetTableColumnInfo
#endif
JET_ERR JET_API JetGetTableColumnInfoA(JET_SESID sesid, JET_TABLEID tableid, JET_PCSTR szColumnName, void *pvResult, unsigned long cbMax, unsigned long InfoLevel);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetGetTableColumnInfoW(JET_SESID sesid, JET_TABLEID tableid, JET_PCWSTR szColumnName, void *pvResult, unsigned long cbMax, unsigned long InfoLevel);
#ifdef JET_UNICODE
#define JetGetTableColumnInfo JetGetTableColumnInfoW
#else
#define JetGetTableColumnInfo JetGetTableColumnInfoA
#endif
#endif
#if ( JET_VERSION < 0x0600 )
#define JetGetColumnInfoA JetGetColumnInfo
#endif
JET_ERR JET_API JetGetColumnInfoA(JET_SESID sesid, JET_DBID dbid, JET_PCSTR szTableName, JET_PCSTR szColumnName, void *pvResult, unsigned long cbMax, unsigned long InfoLevel);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetGetColumnInfoW(JET_SESID sesid, JET_DBID dbid, JET_PCWSTR szTableName, JET_PCWSTR szColumnName, void *pvResult, unsigned long cbMax, unsigned long InfoLevel);
#ifdef JET_UNICODE
#define JetGetColumnInfo JetGetColumnInfoW
#else
#define JetGetColumnInfo JetGetColumnInfoA
#endif
#endif
#if ( JET_VERSION < 0x0600 )
#define JetAddColumnA JetAddColumn
#endif
JET_ERR JET_API JetAddColumnA(JET_SESID sesid, JET_TABLEID tableid, JET_PCSTR szColumnName, const JET_COLUMNDEF *pcolumndef, const void *pvDefault, unsigned long cbDefault, JET_COLUMNID *pcolumnid);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetAddColumnW(JET_SESID sesid, JET_TABLEID tableid, JET_PCWSTR szColumnName, const JET_COLUMNDEF *pcolumndef, const void *pvDefault, unsigned long cbDefault, JET_COLUMNID *pcolumnid);
#ifdef JET_UNICODE
#define JetAddColumn JetAddColumnW
#else
#define JetAddColumn JetAddColumnA
#endif
#endif
#if ( JET_VERSION < 0x0600 )
#define JetDeleteColumnA JetDeleteColumn
#endif
JET_ERR JET_API JetDeleteColumnA(JET_SESID sesid, JET_TABLEID tableid, JET_PCSTR szColumnName);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetDeleteColumnW(JET_SESID sesid, JET_TABLEID tableid, JET_PCWSTR szColumnName);
#ifdef JET_UNICODE
#define JetDeleteColumn JetDeleteColumnW
#else
#define JetDeleteColumn JetDeleteColumnA
#endif
#endif
#if ( JET_VERSION >= 0x0501 )
#if ( JET_VERSION < 0x0600 )
#define JetDeleteColumn2A JetDeleteColumn2
#endif
JET_ERR JET_API JetDeleteColumn2A(JET_SESID sesid, JET_TABLEID tableid, JET_PCSTR szColumnName, const JET_GRBIT grbit);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetDeleteColumn2W(JET_SESID sesid, JET_TABLEID tableid, JET_PCWSTR szColumnName, const JET_GRBIT grbit);
#ifdef JET_UNICODE
#define JetDeleteColumn2 JetDeleteColumn2W
#else
#define JetDeleteColumn2 JetDeleteColumn2A
#endif
#endif
#if ( JET_VERSION < 0x0600 )
#define JetRenameColumnA JetRenameColumn
#endif
JET_ERR JET_API JetRenameColumnA(JET_SESID sesid, JET_TABLEID tableid, JET_PCSTR szName, JET_PCSTR szNameNew, JET_GRBIT grbit);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetRenameColumnW(JET_SESID sesid, JET_TABLEID tableid, JET_PCWSTR szName, JET_PCWSTR szNameNew, JET_GRBIT grbit);
#ifdef JET_UNICODE
#define JetRenameColumn JetRenameColumnW
#else
#define JetRenameColumn JetRenameColumnA
#endif
#endif
#endif
#if ( JET_VERSION < 0x0600 )
#define JetSetColumnDefaultValueA JetSetColumnDefaultValue
#endif
JET_ERR JET_API JetSetColumnDefaultValueA(JET_SESID sesid, JET_DBID dbid, JET_PCSTR szTableName, JET_PCSTR szColumnName, const void *pvData, const unsigned long cbData, const JET_GRBIT grbit);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetSetColumnDefaultValueW(JET_SESID sesid, JET_DBID dbid, JET_PCWSTR szTableName, JET_PCWSTR szColumnName, const void *pvData, const unsigned long cbData, const JET_GRBIT grbit);
#ifdef JET_UNICODE
#define JetSetColumnDefaultValue JetSetColumnDefaultValueW
#else
#define JetSetColumnDefaultValue JetSetColumnDefaultValueA
#endif
#endif
#if ( JET_VERSION < 0x0600 )
#define JetGetTableIndexInfoA JetGetTableIndexInfo
#endif
JET_ERR JET_API JetGetTableIndexInfoA(JET_SESID sesid, JET_TABLEID tableid, JET_PCSTR szIndexName, void *pvResult, unsigned long cbResult, unsigned long InfoLevel);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetGetTableIndexInfoW(JET_SESID sesid, JET_TABLEID tableid, JET_PCWSTR szIndexName, void *pvResult, unsigned long cbResult, unsigned long InfoLevel);
#ifdef JET_UNICODE
#define JetGetTableIndexInfo JetGetTableIndexInfoW
#else
#define JetGetTableIndexInfo JetGetTableIndexInfoA
#endif
#endif
#if ( JET_VERSION < 0x0600 )
#define JetGetIndexInfoA JetGetIndexInfo
#endif
JET_ERR JET_API JetGetIndexInfoA(JET_SESID sesid, JET_DBID dbid, JET_PCSTR szTableName, JET_PCSTR szIndexName, void *pvResult, unsigned long cbResult, unsigned long InfoLevel);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetGetIndexInfoW(JET_SESID sesid, JET_DBID dbid, JET_PCWSTR szTableName, JET_PCWSTR szIndexName, void *pvResult, unsigned long cbResult, unsigned long InfoLevel);
#ifdef JET_UNICODE
#define JetGetIndexInfo JetGetIndexInfoW
#else
#define JetGetIndexInfo JetGetIndexInfoA
#endif
#endif
#if ( JET_VERSION < 0x0600 )
#define JetCreateIndexA JetCreateIndex
#endif
JET_ERR JET_API JetCreateIndexA(JET_SESID sesid, JET_TABLEID tableid, JET_PCSTR szIndexName, JET_GRBIT grbit, const char *szKey, unsigned long cbKey, unsigned long lDensity);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetCreateIndexW(JET_SESID sesid, JET_TABLEID tableid, JET_PCWSTR szIndexName, JET_GRBIT grbit, const WCHAR *szKey, unsigned long cbKey, unsigned long lDensity);
#ifdef JET_UNICODE
#define JetCreateIndex JetCreateIndexW
#else
#define JetCreateIndex JetCreateIndexA
#endif
#endif
#if ( JET_VERSION < 0x0600 )
#define JetCreateIndex2A JetCreateIndex2
#endif
JET_ERR JET_API JetCreateIndex2A(JET_SESID sesid, JET_TABLEID tableid, JET_INDEXCREATE_A *pindexcreate, unsigned long cIndexCreate);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetCreateIndex2W(JET_SESID sesid, JET_TABLEID tableid, JET_INDEXCREATE_W *pindexcreate, unsigned long cIndexCreate);
#ifdef JET_UNICODE
#define JetCreateIndex2 JetCreateIndex2W
#else
#define JetCreateIndex2 JetCreateIndex2A
#endif
#endif
#if ( JET_VERSION >= 0x0601 )
JET_ERR JET_API JetCreateIndex3A(JET_SESID sesid, JET_TABLEID tableid, JET_INDEXCREATE2_A *pindexcreate, unsigned long cIndexCreate);
JET_ERR JET_API JetCreateIndex3W(JET_SESID sesid, JET_TABLEID tableid, JET_INDEXCREATE2_W *pindexcreate, unsigned long cIndexCreate);
#ifdef JET_UNICODE
#define JetCreateIndex3 JetCreateIndex3W
#else
#define JetCreateIndex3 JetCreateIndex3A
#endif
#endif
#if ( JET_VERSION < 0x0600 )
#define JetDeleteIndexA JetDeleteIndex
#endif
JET_ERR JET_API JetDeleteIndexA(JET_SESID sesid, JET_TABLEID tableid, JET_PCSTR szIndexName);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetDeleteIndexW(JET_SESID sesid, JET_TABLEID tableid, JET_PCWSTR szIndexName);
#ifdef JET_UNICODE
#define JetDeleteIndex JetDeleteIndexW
#else
#define JetDeleteIndex JetDeleteIndexA
#endif
#endif
JET_ERR JET_API JetBeginTransaction(JET_SESID sesid);
JET_ERR JET_API JetBeginTransaction2(JET_SESID sesid, JET_GRBIT grbit);
JET_ERR JET_API JetCommitTransaction(JET_SESID sesid, JET_GRBIT grbit);
JET_ERR JET_API JetRollback(JET_SESID sesid, JET_GRBIT grbit);
#if ( JET_VERSION < 0x0600 )
#define JetGetDatabaseInfoA JetGetDatabaseInfo
#endif
JET_ERR JET_API JetGetDatabaseInfoA(JET_SESID sesid, JET_DBID dbid, void *pvResult, unsigned long cbMax, unsigned long InfoLevel);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetGetDatabaseInfoW(JET_SESID sesid, JET_DBID dbid, void *pvResult, unsigned long cbMax, unsigned long InfoLevel);
#ifdef JET_UNICODE
#define JetGetDatabaseInfo JetGetDatabaseInfoW
#else
#define JetGetDatabaseInfo JetGetDatabaseInfoA
#endif
#endif
#if ( JET_VERSION < 0x0600 )
#define JetGetDatabaseFileInfoA JetGetDatabaseFileInfo
#endif
JET_ERR JET_API JetGetDatabaseFileInfoA(JET_PCSTR szDatabaseName, void *pvResult, unsigned long cbMax, unsigned long InfoLevel);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetGetDatabaseFileInfoW(JET_PCWSTR szDatabaseName, void *pvResult, unsigned long cbMax, unsigned long InfoLevel);
#ifdef JET_UNICODE
#define JetGetDatabaseFileInfo JetGetDatabaseFileInfoW
#else
#define JetGetDatabaseFileInfo JetGetDatabaseFileInfoA
#endif
#endif
#if ( JET_VERSION < 0x0600 )
#define JetOpenDatabaseA JetOpenDatabase
#endif
JET_ERR JET_API JetOpenDatabaseA(JET_SESID sesid, JET_PCSTR szFilename, JET_PCSTR szConnect, JET_DBID *pdbid, JET_GRBIT grbit);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetOpenDatabaseW(JET_SESID sesid, JET_PCWSTR szFilename, JET_PCWSTR szConnect, JET_DBID *pdbid, JET_GRBIT grbit);
#ifdef JET_UNICODE
#define JetOpenDatabase JetOpenDatabaseW
#else
#define JetOpenDatabase JetOpenDatabaseA
#endif
#endif
JET_ERR JET_API JetCloseDatabase(JET_SESID sesid, JET_DBID dbid, JET_GRBIT grbit);
#if ( JET_VERSION < 0x0600 )
#define JetOpenTableA JetOpenTable
#endif
JET_ERR JET_API JetOpenTableA(JET_SESID sesid, JET_DBID dbid, JET_PCSTR szTableName, const void *pvParameters, unsigned long cbParameters, JET_GRBIT grbit, JET_TABLEID *ptableid);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetOpenTableW(JET_SESID sesid, JET_DBID dbid, JET_PCWSTR szTableName, const void *pvParameters, unsigned long cbParameters, JET_GRBIT grbit, JET_TABLEID *ptableid);
#ifdef JET_UNICODE
#define JetOpenTable JetOpenTableW
#else
#define JetOpenTable JetOpenTableA
#endif
#endif
#if ( JET_VERSION >= 0x0501 )
JET_ERR JET_API JetSetTableSequential(JET_SESID sesid, JET_TABLEID tableid, JET_GRBIT grbit);
JET_ERR JET_API JetResetTableSequential(JET_SESID sesid, JET_TABLEID tableid, JET_GRBIT grbit);
#endif
JET_ERR JET_API JetCloseTable(JET_SESID sesid, JET_TABLEID tableid);
JET_ERR JET_API JetDelete(JET_SESID sesid, JET_TABLEID tableid);
JET_ERR JET_API JetUpdate(JET_SESID sesid, JET_TABLEID tableid, void *pvBookmark, unsigned long cbBookmark, unsigned long *pcbActual);
#if ( JET_VERSION >= 0x0502 )
JET_ERR JET_API JetUpdate2(JET_SESID sesid, JET_TABLEID tableid, void *pvBookmark, unsigned long cbBookmark, unsigned long *pcbActual, const JET_GRBIT grbit);
#endif
JET_ERR JET_API JetEscrowUpdate(JET_SESID sesid, JET_TABLEID tableid, JET_COLUMNID columnid, void *pv, unsigned long cbMax, void *pvOld, unsigned long cbOldMax, unsigned long *pcbOldActual, JET_GRBIT grbit);
JET_ERR JET_API JetRetrieveColumn(JET_SESID sesid, JET_TABLEID tableid, JET_COLUMNID columnid, void *pvData, unsigned long cbData, unsigned long *pcbActual, JET_GRBIT grbit, JET_RETINFO *pretinfo);
JET_ERR JET_API JetRetrieveColumns(JET_SESID sesid, JET_TABLEID tableid, JET_RETRIEVECOLUMN *pretrievecolumn, unsigned long cretrievecolumn);
#if ( JET_VERSION >= 0x0501 )
JET_ERR JET_API JetEnumerateColumns(JET_SESID sesid, JET_TABLEID tableid, unsigned long cEnumColumnId, JET_ENUMCOLUMNID *rgEnumColumnId, unsigned long *pcEnumColumn, JET_ENUMCOLUMN **prgEnumColumn, JET_PFNREALLOC pfnRealloc, void *pvReallocContext, unsigned long cbDataMost, JET_GRBIT grbit);
#endif
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetGetRecordSize(JET_SESID sesid, JET_TABLEID tableid, JET_RECSIZE *precsize, const JET_GRBIT grbit);
#endif
#if ( JET_VERSION >= 0x0601 )
JET_ERR JET_API JetGetRecordSize2(JET_SESID sesid, JET_TABLEID tableid, JET_RECSIZE2 *precsize, const JET_GRBIT grbit);
#endif
JET_ERR JET_API JetSetColumn(JET_SESID sesid, JET_TABLEID tableid, JET_COLUMNID columnid, const void *pvData, unsigned long cbData, JET_GRBIT grbit, JET_SETINFO *psetinfo);
JET_ERR JET_API JetSetColumns(JET_SESID sesid, JET_TABLEID tableid, JET_SETCOLUMN *psetcolumn, unsigned long csetcolumn);
JET_ERR JET_API JetPrepareUpdate(JET_SESID sesid, JET_TABLEID tableid, unsigned long prep);
JET_ERR JET_API JetGetRecordPosition(JET_SESID sesid, JET_TABLEID tableid, JET_RECPOS *precpos, unsigned long cbRecpos);
JET_ERR JET_API JetGotoPosition(JET_SESID sesid, JET_TABLEID tableid, JET_RECPOS *precpos);
JET_ERR JET_API JetGetCursorInfo(JET_SESID sesid, JET_TABLEID tableid, void *pvResult, unsigned long cbMax, unsigned long InfoLevel);
JET_ERR JET_API JetDupCursor(JET_SESID sesid, JET_TABLEID tableid, JET_TABLEID *ptableid, JET_GRBIT grbit);
#if ( JET_VERSION < 0x0600 )
#define JetGetCurrentIndexA JetGetCurrentIndex
#endif
JET_ERR JET_API JetGetCurrentIndexA(JET_SESID sesid, JET_TABLEID tableid, JET_PSTR szIndexName, unsigned long ccbIndexName);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetGetCurrentIndexW(JET_SESID sesid, JET_TABLEID tableid, JET_PWSTR szIndexName, unsigned long ccbIndexName);
#ifdef JET_UNICODE
#define JetGetCurrentIndex JetGetCurrentIndexW
#else
#define JetGetCurrentIndex JetGetCurrentIndexA
#endif
#endif
#if ( JET_VERSION < 0x0600 )
#define JetSetCurrentIndexA JetSetCurrentIndex
#endif
JET_ERR JET_API JetSetCurrentIndexA(JET_SESID sesid, JET_TABLEID tableid, JET_PCSTR szIndexName);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetSetCurrentIndexW(JET_SESID sesid, JET_TABLEID tableid, JET_PCWSTR szIndexName);
#ifdef JET_UNICODE
#define JetSetCurrentIndex JetSetCurrentIndexW
#else
#define JetSetCurrentIndex JetSetCurrentIndexA
#endif
#endif
#if ( JET_VERSION < 0x0600 )
#define JetSetCurrentIndex2A JetSetCurrentIndex2
#endif
JET_ERR JET_API JetSetCurrentIndex2A(JET_SESID sesid, JET_TABLEID tableid, JET_PCSTR szIndexName, JET_GRBIT grbit);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetSetCurrentIndex2W(JET_SESID sesid, JET_TABLEID tableid, JET_PCWSTR szIndexName, JET_GRBIT grbit);
#ifdef JET_UNICODE
#define JetSetCurrentIndex2 JetSetCurrentIndex2W
#else
#define JetSetCurrentIndex2 JetSetCurrentIndex2A
#endif
#endif
#if ( JET_VERSION < 0x0600 )
#define JetSetCurrentIndex3A JetSetCurrentIndex3
#endif
JET_ERR JET_API JetSetCurrentIndex3A(JET_SESID sesid, JET_TABLEID tableid, JET_PCSTR szIndexName, JET_GRBIT grbit, unsigned long itagSequence);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetSetCurrentIndex3W(JET_SESID sesid, JET_TABLEID tableid, JET_PCWSTR szIndexName, JET_GRBIT grbit, unsigned long itagSequence);
#ifdef JET_UNICODE
#define JetSetCurrentIndex3 JetSetCurrentIndex3W
#else
#define JetSetCurrentIndex3 JetSetCurrentIndex3A
#endif
#endif
#if ( JET_VERSION < 0x0600 )
#define JetSetCurrentIndex4A JetSetCurrentIndex4
#endif
JET_ERR JET_API JetSetCurrentIndex4A(JET_SESID sesid, JET_TABLEID tableid, JET_PCSTR szIndexName, JET_INDEXID *pindexid, JET_GRBIT grbit, unsigned long itagSequence);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetSetCurrentIndex4W(JET_SESID sesid, JET_TABLEID tableid, JET_PCWSTR szIndexName, JET_INDEXID *pindexid, JET_GRBIT grbit, unsigned long itagSequence);
#ifdef JET_UNICODE
#define JetSetCurrentIndex4 JetSetCurrentIndex4W
#else
#define JetSetCurrentIndex4 JetSetCurrentIndex4A
#endif
#endif
JET_ERR JET_API JetMove(JET_SESID sesid, JET_TABLEID tableid, long cRow, JET_GRBIT grbit);
JET_ERR JET_API JetGetLock(JET_SESID sesid, JET_TABLEID tableid, JET_GRBIT grbit);
JET_ERR JET_API JetMakeKey(JET_SESID sesid, JET_TABLEID tableid, const void *pvData, unsigned long cbData, JET_GRBIT grbit);
JET_ERR JET_API JetSeek(JET_SESID sesid, JET_TABLEID tableid, JET_GRBIT grbit);
#if ( JET_VERSION >= 0x0601 )
JET_ERR JET_API JetPrereadKeys(JET_SESID sesid, JET_TABLEID tableid, const void **rgpvKeys, const unsigned long *rgcbKeys, long ckeys, long *pckeysPreread, JET_GRBIT grbit);
#endif
JET_ERR JET_API JetGetBookmark(JET_SESID sesid, JET_TABLEID tableid, void *pvBookmark, unsigned long cbMax, unsigned long *pcbActual);
#if ( JET_VERSION >= 0x0501 )
JET_ERR JET_API JetGetSecondaryIndexBookmark(JET_SESID sesid, JET_TABLEID tableid, void *pvSecondaryKey, unsigned long cbSecondaryKeyMax, unsigned long *pcbSecondaryKeyActual, void *pvPrimaryBookmark, unsigned long cbPrimaryBookmarkMax, unsigned long *pcbPrimaryKeyActual, const JET_GRBIT grbit);
#endif
#if ( JET_VERSION < 0x0600 )
#define JetCompactA JetCompact
#endif
JET_ERR JET_API JetCompactA(JET_SESID sesid, JET_PCSTR szDatabaseSrc, JET_PCSTR szDatabaseDest, JET_PFNSTATUS pfnStatus, JET_CONVERT_A *pconvert, JET_GRBIT grbit);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetCompactW(JET_SESID sesid, JET_PCWSTR szDatabaseSrc, JET_PCWSTR szDatabaseDest, JET_PFNSTATUS pfnStatus, JET_CONVERT_W *pconvert, JET_GRBIT grbit);
#ifdef JET_UNICODE
#define JetCompact JetCompactW
#else
#define JetCompact JetCompactA
#endif
#endif
#if ( JET_VERSION < 0x0600 )
#define JetDefragmentA JetDefragment
#endif
JET_ERR JET_API JetDefragmentA(JET_SESID sesid, JET_DBID dbid, JET_PCSTR szTableName, unsigned long *pcPasses, unsigned long *pcSeconds, JET_GRBIT grbit);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetDefragmentW(JET_SESID sesid, JET_DBID dbid, JET_PCWSTR szTableName, unsigned long *pcPasses, unsigned long *pcSeconds, JET_GRBIT grbit);
#ifdef JET_UNICODE
#define JetDefragment JetDefragmentW
#else
#define JetDefragment JetDefragmentA
#endif
#endif
#if ( JET_VERSION >= 0x0501 )
#if ( JET_VERSION < 0x0600 )
#define JetDefragment2A JetDefragment2
#endif
JET_ERR JET_API JetDefragment2A(JET_SESID sesid, JET_DBID dbid, JET_PCSTR szTableName, unsigned long *pcPasses, unsigned long *pcSeconds, JET_CALLBACK callback, JET_GRBIT grbit);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetDefragment2W(JET_SESID sesid, JET_DBID dbid, JET_PCWSTR szTableName, unsigned long *pcPasses, unsigned long *pcSeconds, JET_CALLBACK callback, JET_GRBIT grbit);
#ifdef JET_UNICODE
#define JetDefragment2 JetDefragment2W
#else
#define JetDefragment2 JetDefragment2A
#endif
#endif
#if ( JET_VERSION < 0x0600 )
#define JetDefragment3A JetDefragment3
#endif
JET_ERR JET_API JetDefragment3A(JET_SESID sesid, JET_PCSTR szDatabaseName, JET_PCSTR szTableName, unsigned long *pcPasses, unsigned long *pcSeconds, JET_CALLBACK callback, void *pvContext, JET_GRBIT grbit);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetDefragment3W(JET_SESID sesid, JET_PCWSTR szDatabaseName, JET_PCWSTR szTableName, unsigned long *pcPasses, unsigned long *pcSeconds, JET_CALLBACK callback, void *pvContext, JET_GRBIT grbit);
#ifdef JET_UNICODE
#define JetDefragment3 JetDefragment3W
#else
#define JetDefragment3 JetDefragment3A
#endif
#endif
#endif
#if ( JET_VERSION < 0x0600 )
#define JetSetDatabaseSizeA JetSetDatabaseSize
#endif
JET_ERR JET_API JetSetDatabaseSizeA(JET_SESID sesid, JET_PCSTR szDatabaseName, unsigned long cpg, unsigned long *pcpgReal);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetSetDatabaseSizeW(JET_SESID sesid, JET_PCWSTR szDatabaseName, unsigned long cpg, unsigned long *pcpgReal);
#ifdef JET_UNICODE
#define JetSetDatabaseSize JetSetDatabaseSizeW
#else
#define JetSetDatabaseSize JetSetDatabaseSizeA
#endif
#endif
JET_ERR JET_API JetGrowDatabase(JET_SESID sesid, JET_DBID dbid, unsigned long cpg, unsigned long *pcpgReal);
JET_ERR JET_API JetSetSessionContext(JET_SESID sesid, JET_API_PTR ulContext);
JET_ERR JET_API JetResetSessionContext(JET_SESID sesid);
JET_ERR JET_API JetGotoBookmark(JET_SESID sesid, JET_TABLEID tableid, void *pvBookmark, unsigned long cbBookmark);
#if ( JET_VERSION >= 0x0501 )
JET_ERR JET_API JetGotoSecondaryIndexBookmark(JET_SESID sesid, JET_TABLEID tableid, void *pvSecondaryKey, unsigned long cbSecondaryKey, void *pvPrimaryBookmark, unsigned long cbPrimaryBookmark, const JET_GRBIT grbit);
#endif
JET_ERR JET_API JetIntersectIndexes(JET_SESID sesid, JET_INDEXRANGE *rgindexrange, unsigned long cindexrange, JET_RECORDLIST *precordlist, JET_GRBIT grbit);
JET_ERR JET_API JetComputeStats(JET_SESID sesid, JET_TABLEID tableid);
JET_ERR JET_API JetOpenTempTable(JET_SESID sesid, const JET_COLUMNDEF *prgcolumndef, unsigned long ccolumn, JET_GRBIT grbit, JET_TABLEID *ptableid, JET_COLUMNID *prgcolumnid);
JET_ERR JET_API JetOpenTempTable2(JET_SESID sesid, const JET_COLUMNDEF *prgcolumndef, unsigned long lcid, unsigned long ccolumn, JET_GRBIT grbit, JET_TABLEID *ptableid, JET_COLUMNID *prgcolumnid);
JET_ERR JET_API JetOpenTempTable3(JET_SESID sesid, const JET_COLUMNDEF *prgcolumndef, unsigned long ccolumn, JET_UNICODEINDEX *pidxunicode, JET_GRBIT grbit, JET_TABLEID *ptableid, JET_COLUMNID *prgcolumnid);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetOpenTemporaryTable(JET_SESID sesid, JET_OPENTEMPORARYTABLE *popentemporarytable);
#endif
#if ( JET_VERSION < 0x0600 )
#define JetBackupA JetBackup
#endif
JET_ERR JET_API JetBackupA(JET_PCSTR szBackupPath, JET_GRBIT grbit, JET_PFNSTATUS pfnStatus);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetBackupW(JET_PCWSTR szBackupPath, JET_GRBIT grbit, JET_PFNSTATUS pfnStatus);
#ifdef JET_UNICODE
#define JetBackup JetBackupW
#else
#define JetBackup JetBackupA
#endif
#endif
#if ( JET_VERSION >= 0x0501 )
#if ( JET_VERSION < 0x0600 )
#define JetBackupInstanceA JetBackupInstance
#endif
JET_ERR JET_API JetBackupInstanceA(JET_INSTANCE instance, JET_PCSTR szBackupPath, JET_GRBIT grbit, JET_PFNSTATUS pfnStatus);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetBackupInstanceW(JET_INSTANCE instance, JET_PCWSTR szBackupPath, JET_GRBIT grbit, JET_PFNSTATUS pfnStatus);
#ifdef JET_UNICODE
#define JetBackupInstance JetBackupInstanceW
#else
#define JetBackupInstance JetBackupInstanceA
#endif
#endif
#endif
#if ( JET_VERSION < 0x0600 )
#define JetRestoreA JetRestore
#endif
JET_ERR JET_API JetRestoreA(JET_PCSTR sz, JET_PFNSTATUS pfn);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetRestoreW(JET_PCWSTR sz, JET_PFNSTATUS pfn);
#ifdef JET_UNICODE
#define JetRestore JetRestoreW
#else
#define JetRestore JetRestoreA
#endif
#endif
#if ( JET_VERSION < 0x0600 )
#define JetRestore2A JetRestore2
#endif
JET_ERR JET_API JetRestore2A(JET_PCSTR sz, JET_PCSTR szDest, JET_PFNSTATUS pfn);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetRestore2W(JET_PCWSTR sz, JET_PCWSTR szDest, JET_PFNSTATUS pfn);
#ifdef JET_UNICODE
#define JetRestore2 JetRestore2W
#else
#define JetRestore2 JetRestore2A
#endif
#endif
#if ( JET_VERSION >= 0x0501 )
#if ( JET_VERSION < 0x0600 )
#define JetRestoreInstanceA JetRestoreInstance
#endif
JET_ERR JET_API JetRestoreInstanceA(JET_INSTANCE instance, JET_PCSTR sz, JET_PCSTR szDest, JET_PFNSTATUS pfn);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetRestoreInstanceW(JET_INSTANCE instance, JET_PCWSTR sz, JET_PCWSTR szDest, JET_PFNSTATUS pfn);
#ifdef JET_UNICODE
#define JetRestoreInstance JetRestoreInstanceW
#else
#define JetRestoreInstance JetRestoreInstanceA
#endif
#endif
#endif
JET_ERR JET_API JetSetIndexRange(JET_SESID sesid, JET_TABLEID tableidSrc, JET_GRBIT grbit);
JET_ERR JET_API JetIndexRecordCount(JET_SESID sesid, JET_TABLEID tableid, unsigned long *pcrec, unsigned long crecMax);
JET_ERR JET_API JetRetrieveKey(JET_SESID sesid, JET_TABLEID tableid, void *pvData, unsigned long cbMax, unsigned long *pcbActual, JET_GRBIT grbit);
JET_ERR JET_API JetBeginExternalBackup(JET_GRBIT grbit);
#if ( JET_VERSION >= 0x0501 )
JET_ERR JET_API JetBeginExternalBackupInstance(JET_INSTANCE instance, JET_GRBIT grbit);
#endif
#if ( JET_VERSION < 0x0600 )
#define JetGetAttachInfoA JetGetAttachInfo
#endif
JET_ERR JET_API JetGetAttachInfoA(
#if ( JET_VERSION < 0x0600 )
	void *pv,
#else
	JET_PSTR szz,
#endif
	unsigned long cbMax, unsigned long *pcbActual);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetGetAttachInfoW(JET_PWSTR szz, unsigned long cbMax, unsigned long *pcbActual);
#ifdef JET_UNICODE
#define JetGetAttachInfo JetGetAttachInfoW
#else
#define JetGetAttachInfo JetGetAttachInfoA
#endif
#endif
#if ( JET_VERSION >= 0x0501 )
#if ( JET_VERSION < 0x0600 )
#define JetGetAttachInfoInstanceA JetGetAttachInfoInstance
#endif
JET_ERR JET_API JetGetAttachInfoInstanceA(JET_INSTANCE instance,
#if ( JET_VERSION < 0x0600 )
	void *pv,
#else
	JET_PSTR szz,
#endif
	unsigned long cbMax, unsigned long *pcbActual);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetGetAttachInfoInstanceW(JET_INSTANCE instance, JET_PWSTR szz, unsigned long cbMax, unsigned long *pcbActual);
#ifdef JET_UNICODE
#define JetGetAttachInfoInstance JetGetAttachInfoInstanceW
#else
#define JetGetAttachInfoInstance JetGetAttachInfoInstanceA
#endif
#endif
#endif
#if ( JET_VERSION < 0x0600 )
#define JetOpenFileA JetOpenFile
#endif
JET_ERR JET_API JetOpenFileA(JET_PCSTR szFileName, JET_HANDLE *phfFile, unsigned long *pulFileSizeLow, unsigned long *pulFileSizeHigh);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetOpenFileW(JET_PCWSTR szFileName, JET_HANDLE *phfFile, unsigned long *pulFileSizeLow, unsigned long *pulFileSizeHigh);
#ifdef JET_UNICODE
#define JetOpenFile JetOpenFileW
#else
#define JetOpenFile JetOpenFileA
#endif
#endif
#if ( JET_VERSION >= 0x0501 )
#if ( JET_VERSION < 0x0600 )
#define JetOpenFileInstanceA JetOpenFileInstance
#endif
JET_ERR JET_API JetOpenFileInstanceA(JET_INSTANCE instance, JET_PCSTR szFileName, JET_HANDLE *phfFile, unsigned long *pulFileSizeLow, unsigned long *pulFileSizeHigh);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetOpenFileInstanceW(JET_INSTANCE instance, JET_PCWSTR szFileName, JET_HANDLE *phfFile, unsigned long *pulFileSizeLow, unsigned long *pulFileSizeHigh);
#ifdef JET_UNICODE
#define JetOpenFileInstance JetOpenFileInstanceW
#else
#define JetOpenFileInstance JetOpenFileInstanceA
#endif
#endif
#endif
JET_ERR JET_API JetReadFile(JET_HANDLE hfFile, void *pv, unsigned long cb, unsigned long *pcbActual);
#if ( JET_VERSION >= 0x0501 )
JET_ERR JET_API JetReadFileInstance(JET_INSTANCE instance, JET_HANDLE hfFile, void *pv, unsigned long cb, unsigned long *pcbActual);
#endif
JET_ERR JET_API JetCloseFile(JET_HANDLE hfFile);
#if ( JET_VERSION >= 0x0501 )
JET_ERR JET_API JetCloseFileInstance(JET_INSTANCE instance, JET_HANDLE hfFile);
#endif
#if ( JET_VERSION < 0x0600 )
#define JetGetLogInfoA JetGetLogInfo
#endif
JET_ERR JET_API JetGetLogInfoA(
#if ( JET_VERSION < 0x0600 )
	void *pv,
#else
	JET_PSTR szz,
#endif
	unsigned long cbMax, unsigned long *pcbActual);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetGetLogInfoW(JET_PWSTR szz, unsigned long cbMax, unsigned long *pcbActual);
#ifdef JET_UNICODE
#define JetGetLogInfo JetGetLogInfoW
#else
#define JetGetLogInfo JetGetLogInfoA
#endif
#endif
#if ( JET_VERSION >= 0x0501 )
#if ( JET_VERSION < 0x0600 )
#define JetGetLogInfoInstanceA JetGetLogInfoInstance
#endif
JET_ERR JET_API JetGetLogInfoInstanceA(JET_INSTANCE instance,
#if ( JET_VERSION < 0x0600 )
	void *pv,
#else
	JET_PSTR szz,
#endif
	unsigned long cbMax, unsigned long *pcbActual);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetGetLogInfoInstanceW(JET_INSTANCE instance, JET_PWSTR szz, unsigned long cbMax, unsigned long *pcbActual);
#ifdef JET_UNICODE
#define JetGetLogInfoInstance JetGetLogInfoInstanceW
#else
#define JetGetLogInfoInstance JetGetLogInfoInstanceA
#endif
#endif
#define JET_BASE_NAME_LENGTH 	3
typedef struct {
	unsigned long cbSize;
	unsigned long ulGenLow;
	unsigned long ulGenHigh;
	char szBaseName[JET_BASE_NAME_LENGTH + 1];
} JET_LOGINFO_A;
typedef struct {
	unsigned long cbSize;
	unsigned long ulGenLow;
	unsigned long ulGenHigh;
	WCHAR szBaseName[JET_BASE_NAME_LENGTH + 1];
} JET_LOGINFO_W;
#ifdef JET_UNICODE
#define JET_LOGINFO JET_LOGINFO_W
#else
#define JET_LOGINFO JET_LOGINFO_A
#endif
#if ( JET_VERSION < 0x0600 )
#define JetGetLogInfoInstance2A JetGetLogInfoInstance2
#endif
JET_ERR JET_API JetGetLogInfoInstance2A(JET_INSTANCE instance,
#if ( JET_VERSION < 0x0600 )
	void *pv,
#else
	JET_PSTR szz,
#endif
	unsigned long cbMax, unsigned long *pcbActual, JET_LOGINFO_A * pLogInfo);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetGetLogInfoInstance2W(JET_INSTANCE instance, JET_PWSTR szz, unsigned long cbMax, unsigned long *pcbActual, JET_LOGINFO_W *pLogInfo);
#ifdef JET_UNICODE
#define JetGetLogInfoInstance2 JetGetLogInfoInstance2W
#else
#define JetGetLogInfoInstance2 JetGetLogInfoInstance2A
#endif
#endif
#if ( JET_VERSION < 0x0600 )
#define JetGetTruncateLogInfoInstanceA JetGetTruncateLogInfoInstance
#endif
JET_ERR JET_API JetGetTruncateLogInfoInstanceA(JET_INSTANCE instance,
#if ( JET_VERSION < 0x0600 )
	void *pv,
#else
	JET_PSTR szz,
#endif
	unsigned long cbMax, unsigned long *pcbActual);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetGetTruncateLogInfoInstanceW(JET_INSTANCE instance, JET_PWSTR szz, unsigned long cbMax, unsigned long *pcbActual);
#ifdef JET_UNICODE
#define JetGetTruncateLogInfoInstance JetGetTruncateLogInfoInstanceW
#else
#define JetGetTruncateLogInfoInstance JetGetTruncateLogInfoInstanceA
#endif
#endif
#endif
JET_ERR JET_API JetTruncateLog(void);
#if ( JET_VERSION >= 0x0501 )
JET_ERR JET_API JetTruncateLogInstance(JET_INSTANCE instance);
#endif
JET_ERR JET_API JetEndExternalBackup(void);
#if ( JET_VERSION >= 0x0501 )
JET_ERR JET_API JetEndExternalBackupInstance(JET_INSTANCE instance);
JET_ERR JET_API JetEndExternalBackupInstance2(JET_INSTANCE instance, JET_GRBIT grbit);
#endif
#if ( JET_VERSION < 0x0600 )
#define JetExternalRestoreA JetExternalRestore
#endif
JET_ERR JET_API JetExternalRestoreA(JET_PSTR szCheckpointFilePath, JET_PSTR szLogPath, JET_RSTMAP_A *rgrstmap, long crstfilemap, JET_PSTR szBackupLogPath, long genLow, long genHigh, JET_PFNSTATUS pfn);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetExternalRestoreW(JET_PWSTR szCheckpointFilePath, JET_PWSTR szLogPath, JET_RSTMAP_W *rgrstmap, long crstfilemap, JET_PWSTR szBackupLogPath, long genLow, long genHigh, JET_PFNSTATUS pfn);
#ifdef JET_UNICODE
#define JetExternalRestore JetExternalRestoreW
#else
#define JetExternalRestore JetExternalRestoreA
#endif
#endif
#if JET_VERSION >= 0x0501
#if ( JET_VERSION < 0x0600 )
#define JetExternalRestore2A JetExternalRestore2
#endif
JET_ERR JET_API JetExternalRestore2A(JET_PSTR szCheckpointFilePath, JET_PSTR szLogPath, JET_RSTMAP_A *rgrstmap, long crstfilemap, JET_PSTR szBackupLogPath, JET_LOGINFO_A *pLogInfo, JET_PSTR szTargetInstanceName, JET_PSTR szTargetInstanceLogPath, JET_PSTR szTargetInstanceCheckpointPath, JET_PFNSTATUS pfn);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetExternalRestore2W(JET_PWSTR szCheckpointFilePath, JET_PWSTR szLogPath, JET_RSTMAP_W *rgrstmap, long crstfilemap, JET_PWSTR szBackupLogPath, JET_LOGINFO_W *pLogInfo, JET_PWSTR szTargetInstanceName, JET_PWSTR szTargetInstanceLogPath, JET_PWSTR szTargetInstanceCheckpointPath, JET_PFNSTATUS pfn);
#ifdef JET_UNICODE
#define JetExternalRestore2 JetExternalRestore2W
#else
#define JetExternalRestore2 JetExternalRestore2A
#endif
#endif
JET_ERR JET_API JetRegisterCallback(JET_SESID sesid, JET_TABLEID tableid, JET_CBTYP cbtyp, JET_CALLBACK pCallback, void *pvContext, JET_HANDLE *phCallbackId);
JET_ERR JET_API JetUnregisterCallback(JET_SESID sesid, JET_TABLEID tableid, JET_CBTYP cbtyp, JET_HANDLE hCallbackId);
typedef struct _JET_INSTANCE_INFO_A {
	JET_INSTANCE hInstanceId;
	char *szInstanceName;
	JET_API_PTR cDatabases;
	char **szDatabaseFileName;
	char **szDatabaseDisplayName;
	char **szDatabaseSLVFileName;
} JET_INSTANCE_INFO_A;
typedef struct _JET_INSTANCE_INFO_W {
	JET_INSTANCE hInstanceId;
	WCHAR *szInstanceName;
	JET_API_PTR cDatabases;
	WCHAR **szDatabaseFileName;
	WCHAR **szDatabaseDisplayName;
	WCHAR **szDatabaseSLVFileName;
} JET_INSTANCE_INFO_W;
#ifdef JET_UNICODE
#define JET_INSTANCE_INFO JET_INSTANCE_INFO_W
#else
#define JET_INSTANCE_INFO JET_INSTANCE_INFO_A
#endif
#if ( JET_VERSION < 0x0600 )
#define JetGetInstanceInfoA JetGetInstanceInfo
#endif
JET_ERR JET_API JetGetInstanceInfoA(unsigned long *pcInstanceInfo, JET_INSTANCE_INFO_A **paInstanceInfo);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetGetInstanceInfoW(unsigned long *pcInstanceInfo, JET_INSTANCE_INFO_W **paInstanceInfo);
#ifdef JET_UNICODE
#define JetGetInstanceInfo JetGetInstanceInfoW
#else
#define JetGetInstanceInfo JetGetInstanceInfoA
#endif
#endif
JET_ERR JET_API JetFreeBuffer(char *pbBuf);
JET_ERR JET_API JetSetLS(JET_SESID sesid, JET_TABLEID tableid, JET_LS ls, JET_GRBIT grbit);
JET_ERR JET_API JetGetLS(JET_SESID sesid, JET_TABLEID tableid, JET_LS *pls, JET_GRBIT grbit);
typedef JET_API_PTR JET_OSSNAPID;
JET_ERR JET_API JetOSSnapshotPrepare(JET_OSSNAPID *psnapId, const JET_GRBIT grbit);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetOSSnapshotPrepareInstance(JET_OSSNAPID snapId, JET_INSTANCE instance, const JET_GRBIT grbit);
#endif
#if ( JET_VERSION < 0x0600 )
#define JetOSSnapshotFreezeA JetOSSnapshotFreeze
#endif
JET_ERR JET_API JetOSSnapshotFreezeA(const JET_OSSNAPID snapId, unsigned long *pcInstanceInfo, JET_INSTANCE_INFO_A **paInstanceInfo, const JET_GRBIT grbit);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetOSSnapshotFreezeW(const JET_OSSNAPID snapId, unsigned long *pcInstanceInfo, JET_INSTANCE_INFO_W **paInstanceInfo, const JET_GRBIT grbit);
#ifdef JET_UNICODE
#define JetOSSnapshotFreeze JetOSSnapshotFreezeW
#else
#define JetOSSnapshotFreeze JetOSSnapshotFreezeA
#endif
#endif
JET_ERR JET_API JetOSSnapshotThaw(const JET_OSSNAPID snapId, const JET_GRBIT grbit);
#endif
#if ( JET_VERSION >= 0x0502 )
JET_ERR JET_API JetOSSnapshotAbort(const JET_OSSNAPID snapId, const JET_GRBIT grbit);
#endif
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetOSSnapshotTruncateLog(const JET_OSSNAPID snapId, const JET_GRBIT grbit);
JET_ERR JET_API JetOSSnapshotTruncateLogInstance(const JET_OSSNAPID snapId, JET_INSTANCE instance, const JET_GRBIT grbit);
#if ( JET_VERSION < 0x0600 )
#define JetOSSnapshotGetFreezeInfoA JetOSSnapshotGetFreezeInfo
#endif
JET_ERR JET_API JetOSSnapshotGetFreezeInfoA(const JET_OSSNAPID snapId, unsigned long *pcInstanceInfo, JET_INSTANCE_INFO_A **paInstanceInfo, const JET_GRBIT grbit);
#if ( JET_VERSION >= 0x0600 )
JET_ERR JET_API JetOSSnapshotGetFreezeInfoW(const JET_OSSNAPID snapId, unsigned long *pcInstanceInfo, JET_INSTANCE_INFO_W **paInstanceInfo, const JET_GRBIT grbit);
#ifdef JET_UNICODE
#define JetOSSnapshotGetFreezeInfo JetOSSnapshotGetFreezeInfoW
#else
#define JetOSSnapshotGetFreezeInfo JetOSSnapshotGetFreezeInfoA
#endif
#endif
JET_ERR JET_API JetOSSnapshotEnd(const JET_OSSNAPID snapId, const JET_GRBIT grbit);
#endif
#if ( JET_VERSION >= 0x0601 )
#define JET_bitDumpMinimum						0x00000001
#define JET_bitDumpMaximum						0x00000002
#define JET_bitDumpCacheMinimum					0x00000004
#define JET_bitDumpCacheMaximum					0x00000008
#define JET_bitDumpCacheIncludeDirtyPages		0x00000010
#define JET_bitDumpCacheIncludeCachedPages		0x00000020
#define JET_bitDumpCacheIncludeCorruptedPages	0x00000040
JET_ERR JET_API JetConfigureProcessForCrashDump(const JET_GRBIT grbit);
#endif
#endif
#include <poppack.h>
#endif
#endif
