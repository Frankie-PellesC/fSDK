/*+@@file@@---------------------------------------------------------------- *//*!
   \file       dbdaoint.h
   \par Description 
   Extension and update of headers for PellesC compiler suite.
   \par Project: 
   PellesC Headers extension
   \date       Created  on Tue Jul  5 14:23:23 2016
   \date       Modified on Tue Jul  5 14:23:23 2016
   \author frankie
   \ *//*-@@file@@---------------------------------------------------------------- */

#ifndef _DBDAOINT_H_
#define _DBDAOINT_H_
#if __POCC__ >= 500
#pragma once
#endif
#ifndef _INC_TCHAR
#include <tchar.h>
#endif
typedef interface _DAODBEngine _DAODBEngine;
#define DAODBEngine _DAODBEngine
typedef interface DAOError DAOError;
typedef interface _DAOCollection _DAOCollection;
#define DAOCollection _DAOCollection
typedef interface DAOErrors DAOErrors;
typedef interface DAOProperty DAOProperty;
typedef interface _DAODynaCollection _DAODynaCollection;
#define DAODynaCollection _DAODynaCollection
typedef interface DAOProperties DAOProperties;
typedef interface DAOWorkspace DAOWorkspace;
typedef interface DAOWorkspaces DAOWorkspaces;
typedef interface DAOConnection DAOConnection;
typedef interface DAOConnections DAOConnections;
typedef interface DAODatabase DAODatabase;
typedef interface DAODatabases DAODatabases;
typedef interface _DAOTableDef _DAOTableDef;
#define DAOTableDef _DAOTableDef
typedef interface DAOTableDefs DAOTableDefs;
typedef interface _DAOQueryDef _DAOQueryDef;
#define DAOQueryDef _DAOQueryDef
typedef interface DAOQueryDefs DAOQueryDefs;
typedef interface DAORecordset DAORecordset;
typedef interface DAORecordsets DAORecordsets;
typedef interface _DAOField _DAOField;
#define DAOField _DAOField
typedef interface DAOFields DAOFields;
typedef interface _DAOIndex _DAOIndex;
#define DAOIndex _DAOIndex
typedef interface DAOIndexes DAOIndexes;
typedef interface DAOParameter DAOParameter;
typedef interface DAOParameters DAOParameters;
typedef interface _DAOUser _DAOUser;
#define DAOUser _DAOUser
typedef interface DAOUsers DAOUsers;
typedef interface _DAOGroup _DAOGroup;
#define DAOGroup _DAOGroup
typedef interface DAOGroups DAOGroups;
typedef interface _DAORelation _DAORelation;
#define DAORelation _DAORelation
typedef interface DAORelations DAORelations;
typedef interface DAOContainer DAOContainer;
typedef interface DAOContainers DAOContainers;
typedef interface DAODocument DAODocument;
typedef interface DAODocuments DAODocuments;
typedef interface DAOIndexFields DAOIndexFields;
typedef enum RecordsetTypeEnum
{ dbOpenTable = 1,
	dbOpenDynaset = 2,
	dbOpenSnapshot = 4,
	dbOpenForwardOnly = 8,
	dbOpenDynamic = 16
} RecordsetTypeEnum;
typedef enum EditModeEnum
{ dbEditNone = 0,
	dbEditInProgress = 1,
	dbEditAdd = 2,
	dbEditChanged = 4,
	dbEditDeleted = 8,
	dbEditNew = 16
} EditModeEnum;
typedef enum RecordsetOptionEnum { dbDenyWrite = 0x1,
	dbDenyRead = 0x2,
	dbReadOnly = 0x4,
	dbAppendOnly = 0x8,
	dbInconsistent = 0x10,
	dbConsistent = 0x20,
	dbSQLPassThrough = 0x40,
	dbFailOnError = 0x80,
	dbForwardOnly = 0x100,
	dbSeeChanges = 0x200,
	dbRunAsync = 0x400,
	dbExecDirect = 0x800
} RecordsetOptionEnum;
typedef enum LockTypeEnum { dbPessimistic = 0x2,
	dbOptimistic = 0x3,
	dbOptimisticValue = 0x1,
	dbOptimisticBatch = 0x5
} LockTypeEnum;
typedef enum UpdateCriteriaEnum { dbCriteriaKey = 0x1,
	dbCriteriaModValues = 0x2,
	dbCriteriaAllCols = 0x4,
	dbCriteriaTimestamp = 0x8,
	dbCriteriaDeleteInsert = 0x10,
	dbCriteriaUpdate = 0x20
} UpdateCriteriaEnum;
typedef enum FieldAttributeEnum { dbFixedField = 0x1,
	dbVariableField = 0x2,
	dbAutoIncrField = 0x10,
	dbUpdatableField = 0x20,
	dbSystemField = 0x2000,
	dbHyperlinkField = 0x8000,
	dbDescending = 0x1
} FieldAttributeEnum;
typedef enum DataTypeEnum { dbBoolean = 1,
	dbByte = 2,
	dbInteger = 3,
	dbLong = 4,
	dbCurrency = 5,
	dbSingle = 6,
	dbDouble = 7,
	dbDate = 8,
	dbBinary = 9,
	dbText = 10,
	dbLongBinary = 11,
	dbMemo = 12,
	dbGUID = 15,
	dbBigInt = 16,
	dbVarBinary = 17,
	dbChar = 18,
	dbNumeric = 19,
	dbDecimal = 20,
	dbFloat = 21,
	dbTime = 22,
	dbTimeStamp = 23
} DataTypeEnum;
typedef enum RelationAttributeEnum { dbRelationUnique = 0x1,
	dbRelationDontEnforce = 0x2,
	dbRelationInherited = 0x4,
	dbRelationUpdateCascade = 0x100,
	dbRelationDeleteCascade = 0x1000,
	dbRelationLeft = 0x1000000,
	dbRelationRight = 0x2000000
} RelationAttributeEnum;
typedef enum TableDefAttributeEnum { dbAttachExclusive = 0x10000,
	dbAttachSavePWD = 0x20000,
	dbSystemObject = 0x80000002,
	dbAttachedTable = 0x40000000,
	dbAttachedODBC = 0x20000000,
	dbHiddenObject = 0x1
} TableDefAttributeEnum;
typedef enum QueryDefTypeEnum { dbQSelect = 0,
	dbQProcedure = 0xe0,
	dbQAction = 0xf0,
	dbQCrosstab = 0x10,
	dbQDelete = 0x20,
	dbQUpdate = 0x30,
	dbQAppend = 0x40,
	dbQMakeTable = 0x50,
	dbQDDL = 0x60,
	dbQSQLPassThrough = 0x70,
	dbQSetOperation = 0x80,
	dbQSPTBulk = 0x90,
	dbQCompound = 0xa0
} QueryDefTypeEnum;
typedef enum QueryDefStateEnum { dbQPrepare = 1,
	dbQUnprepare = 2
} QueryDefStateEnum;
typedef enum DatabaseTypeEnum { dbVersion10 = 1,
	dbEncrypt = 2,
	dbDecrypt = 4,
	dbVersion11 = 8,
	dbVersion20 = 16,
	dbVersion30 = 32,
	dbVersion40 = 64
} DatabaseTypeEnum;
typedef enum CollatingOrderEnum { dbSortNeutral = 0x400,
	dbSortArabic = 0x401,
	dbSortCyrillic = 0x419,
	dbSortCzech = 0x405,
	dbSortDutch = 0x413,
	dbSortGeneral = 0x409,
	dbSortGreek = 0x408,
	dbSortHebrew = 0x40d,
	dbSortHungarian = 0x40e,
	dbSortIcelandic = 0x40f,
	dbSortNorwdan = 0x406,
	dbSortPDXIntl = 0x409,
	dbSortPDXNor = 0x406,
	dbSortPDXSwe = 0x41d,
	dbSortPolish = 0x415,
	dbSortSpanish = 0x40a,
	dbSortSwedFin = 0x41d,
	dbSortTurkish = 0x41f,
	dbSortJapanese = 0x411,
	dbSortChineseSimplified = 0x804,
	dbSortChineseTraditional = 0x404,
	dbSortKorean = 0x412,
	dbSortThai = 0x41e,
	dbSortSlovenian = 0x424,
	dbSortUndefined = -1
} CollatingOrderEnum;
typedef enum IdleEnum { dbFreeLocks = 1,
	dbRefreshCache = 8
} IdleEnum;
typedef enum PermissionEnum { dbSecNoAccess = 0,
	dbSecFullAccess = 0xfffff,
	dbSecDelete = 0x10000,
	dbSecReadSec = 0x20000,
	dbSecWriteSec = 0x40000,
	dbSecWriteOwner = 0x80000,
	dbSecDBCreate = 0x1,
	dbSecDBOpen = 0x2,
	dbSecDBExclusive = 0x4,
	dbSecDBAdmin = 0x8,
	dbSecCreate = 0x1,
	dbSecReadDef = 0x4,
	dbSecWriteDef = 0x1000c,
	dbSecRetrieveData = 0x14,
	dbSecInsertData = 0x20,
	dbSecReplaceData = 0x40,
	dbSecDeleteData = 0x80
} PermissionEnum;
typedef enum SynchronizeTypeEnum { dbRepExportChanges = 0x1,
	dbRepImportChanges = 0x2,
	dbRepImpExpChanges = 0x4,
	dbRepSyncInternet = 0x10
} SynchronizeTypeEnum;
typedef enum ReplicaTypeEnum { dbRepMakeReadOnly = 0x2,
	dbRepMakePartial = 0x1
} ReplicaTypeEnum;
typedef enum WorkspaceTypeEnum { dbUseODBC = 1,
	dbUseJet = 2
} WorkspaceTypeEnum;
typedef enum CursorDriverEnum { dbUseDefaultCursor = -1,
	dbUseODBCCursor = 1,
	dbUseServerCursor = 2,
	dbUseClientBatchCursor = 3,
	dbUseNoCursor = 4
} CursorDriverEnum;
typedef enum DriverPromptEnum { dbDriverPrompt = 2,
	dbDriverNoPrompt = 1,
	dbDriverComplete = 0,
	dbDriverCompleteRequired = 3
} DriverPromptEnum;
typedef enum SetOptionEnum { dbPageTimeout = 6,
	dbLockRetry = 57,
	dbMaxBufferSize = 8,
	dbUserCommitSync = 58,
	dbImplicitCommitSync = 59,
	dbExclusiveAsyncDelay = 60,
	dbSharedAsyncDelay = 61,
	dbMaxLocksPerFile = 62,
	dbLockDelay = 63,
	dbRecycleLVs = 65,
	dbFlushTransactionTimeout = 66
} SetOptionEnum;
typedef enum ParameterDirectionEnum { dbParamInput = 1,
	dbParamOutput = 2,
	dbParamInputOutput = 3,
	dbParamReturnValue = 4
} ParameterDirectionEnum;
typedef enum UpdateTypeEnum { dbUpdateBatch = 4,
	dbUpdateRegular = 1,
	dbUpdateCurrentRecord = 2
} UpdateTypeEnum;
typedef enum RecordStatusEnum { dbRecordUnmodified = 0,
	dbRecordModified = 1,
	dbRecordNew = 2,
	dbRecordDeleted = 3,
	dbRecordDBDeleted = 4
} RecordStatusEnum;
typedef enum CommitTransOptionsEnum { dbForceOSFlush = 1
} CommitTransOptionsEnum;
typedef enum _DAOSuppHelp { LogMessages = 0,
	KeepLocal = 0,
	Replicable = 0,
	ReplicableBool = 0,
	V1xNullBehavior = 0
} _DAOSuppHelp;
#define dbLangArabic _T(";LANGID=0x0401;CP=1256;COUNTRY=0")
#define dbLangCzech _T(";LANGID=0x0405;CP=1250;COUNTRY=0")
#define dbLangDutch _T(";LANGID=0x0413;CP=1252;COUNTRY=0")
#define dbLangGeneral _T(";LANGID=0x0409;CP=1252;COUNTRY=0")
#define dbLangGreek _T(";LANGID=0x0408;CP=1253;COUNTRY=0")
#define dbLangHebrew _T(";LANGID=0x040D;CP=1255;COUNTRY=0")
#define dbLangHungarian _T(";LANGID=0x040E;CP=1250;COUNTRY=0")
#define dbLangIcelandic _T(";LANGID=0x040F;CP=1252;COUNTRY=0")
#define dbLangNordic _T(";LANGID=0x041D;CP=1252;COUNTRY=0")
#define dbLangNorwDan _T(";LANGID=0x0414;CP=1252;COUNTRY=0")
#define dbLangPolish _T(";LANGID=0x0415;CP=1250;COUNTRY=0")
#define dbLangCyrillic _T(";LANGID=0x0419;CP=1251;COUNTRY=0")
#define dbLangSpanish _T(";LANGID=0x040A;CP=1252;COUNTRY=0")
#define dbLangSwedFin _T(";LANGID=0x040B;CP=1252;COUNTRY=0")
#define dbLangTurkish _T(";LANGID=0x041F;CP=1254;COUNTRY=0")
#define dbLangJapanese _T(";LANGID=0x0411;CP=932;COUNTRY=0")
#define dbLangChineseSimplified _T(";LANGID=0x0804;CP=936;COUNTRY=0")
#define dbLangChineseTraditional _T(";LANGID=0x0404;CP=950;COUNTRY=0")
#define dbLangKorean _T(";LANGID=0x0412;CP=949;COUNTRY=0")
#define dbLangThai _T(";LANGID=0x041E;CP=874;COUNTRY=0")
#define dbLangSlovenian _T(";LANGID=0x0424;CP=1250;COUNTRY=0")
#undef INTERFACE
#define INTERFACE _DAOCollection
DECLARE_INTERFACE_(_DAOCollection, IDispatch)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID,void**);
    STDMETHOD_(ULONG, AddRef)(THIS);
    STDMETHOD_(ULONG, Release)(IDispatch*);
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT*);
    STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,ITypeInfo**);
    STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*);
    STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*);
	STDMETHOD(get_Count) (THIS_ short FAR * c);
	STDMETHOD(_NewEnum) (THIS_ IUnknown * FAR * ppunk);
	STDMETHOD(Refresh) (THIS);
};
#undef INTERFACE
#define INTERFACE _DAODynaCollection
DECLARE_INTERFACE_(_DAODynaCollection, _DAOCollection)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID,void**);
    STDMETHOD_(ULONG, AddRef)(THIS);
    STDMETHOD_(ULONG, Release)(IDispatch*);
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT*);
    STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,ITypeInfo**);
    STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*);
    STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*);
	STDMETHOD(get_Count) (THIS_ short FAR * c);
	STDMETHOD(_NewEnum) (THIS_ IUnknown * FAR * ppunk);
	STDMETHOD(Refresh) (THIS);
	STDMETHOD(Append) (THIS_ IDispatch * Object);
	STDMETHOD(Delete) (THIS_ BSTR Name);
};
#undef INTERFACE
#define INTERFACE _DAO
DECLARE_INTERFACE_(_DAO, IDispatch)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID,void**);
    STDMETHOD_(ULONG, AddRef)(THIS);
    STDMETHOD_(ULONG, Release)(IDispatch*);
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT*);
    STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,ITypeInfo**);
    STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*);
    STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*);
	STDMETHOD(get_Properties) (THIS_ DAOProperties FAR * FAR * ppprops);
};
#undef INTERFACE
#define INTERFACE _DAODBEngine
DECLARE_INTERFACE_(_DAODBEngine, _DAO)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID,void**);
    STDMETHOD_(ULONG, AddRef)(THIS);
    STDMETHOD_(ULONG, Release)(IDispatch*);
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT*);
    STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,ITypeInfo**);
    STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*);
    STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*);
	STDMETHOD(get_Properties) (THIS_ DAOProperties FAR * FAR * ppprops);
	STDMETHOD(get_Properties2) (DAOProperties __RPC_FAR * __RPC_FAR * ppprops);
	STDMETHOD(get_Version) (BSTR __RPC_FAR * pbstr);
	STDMETHOD(get_IniPath) (BSTR __RPC_FAR * pbstr);
	STDMETHOD(put_IniPath) (BSTR path);
	STDMETHOD(put_DefaultUser) (BSTR user);
	STDMETHOD(put_DefaultPassword) (BSTR pw);
	STDMETHOD(get_LoginTimeout) (short __RPC_FAR * ps);
	STDMETHOD(put_LoginTimeout) (short Timeout);
	STDMETHOD(get_Workspaces) (DAOWorkspaces __RPC_FAR * __RPC_FAR * ppworks);
	STDMETHOD(get_Errors) (DAOErrors __RPC_FAR * __RPC_FAR * pperrs);
	STDMETHOD(Idle) (VARIANT Action);
	STDMETHOD(CompactDatabase) (BSTR SrcName, BSTR DstName, VARIANT DstLocale, VARIANT Options, VARIANT SrcLocale);
	STDMETHOD(RepairDatabase) (BSTR Name);
	STDMETHOD(RegisterDatabase) (BSTR Dsn, BSTR Driver, VARIANT_BOOL Silent, BSTR Attributes);
	STDMETHOD(_30_CreateWorkspace) (BSTR Name, BSTR UserName, BSTR Password, DAOWorkspace __RPC_FAR * __RPC_FAR * ppwrk);
	STDMETHOD(OpenDatabase) (BSTR Name, VARIANT Options, VARIANT ReadOnly, VARIANT Connect, DAODatabase __RPC_FAR * __RPC_FAR * ppdb);
	STDMETHOD(CreateDatabase) (BSTR Name, BSTR Locale, VARIANT Option, DAODatabase __RPC_FAR * __RPC_FAR * ppdb);
	STDMETHOD(FreeLocks) (VOID);
	STDMETHOD(BeginTrans) (VOID);
	STDMETHOD(CommitTrans) (long Option);
	STDMETHOD(Rollback) (VOID);
	STDMETHOD(SetDefaultWorkspace) (BSTR Name, BSTR Password);
	STDMETHOD(SetDataAccessOption) (short Option, VARIANT Value);
	STDMETHOD(ISAMStats) (long StatNum, VARIANT Reset, long __RPC_FAR * pl);
	STDMETHOD(get_SystemDB) (BSTR __RPC_FAR * pbstr);
	STDMETHOD(put_SystemDB) (BSTR SystemDBPath);
	STDMETHOD(CreateWorkspace) (BSTR Name, BSTR UserName, BSTR Password, VARIANT UseType, DAOWorkspace __RPC_FAR * __RPC_FAR * ppwrk);
	STDMETHOD(OpenConnection) (BSTR Name, VARIANT Options, VARIANT ReadOnly, VARIANT Connect, DAOConnection __RPC_FAR * __RPC_FAR * ppconn);
	STDMETHOD(get_DefaultType) (long __RPC_FAR * Option);
	STDMETHOD(put_DefaultType) (long Option);
	STDMETHOD(SetOption) (LONG Option, VARIANT Value);
	STDMETHOD(DumpObjects) (BSTR __RPC_FAR * pbstr);
	STDMETHOD(DebugPrint) (BSTR bstr);
};
#undef INTERFACE
#define INTERFACE DAOError
DECLARE_INTERFACE_(DAOError, IDispatch)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID,void**);
    STDMETHOD_(ULONG, AddRef)(THIS);
    STDMETHOD_(ULONG, Release)(IDispatch*);
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT*);
    STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,ITypeInfo**);
    STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*);
    STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*);
	STDMETHOD(get_Number) (long __RPC_FAR * pl);
	STDMETHOD(get_Source) (BSTR __RPC_FAR * pbstr);
	STDMETHOD(get_Description) (BSTR __RPC_FAR * pbstr);
	STDMETHOD(get_HelpFile) (BSTR __RPC_FAR * pbstr);
	STDMETHOD(get_HelpContext) (long __RPC_FAR * pl);
};
#undef INTERFACE
#define INTERFACE DAOErrors
DECLARE_INTERFACE_(DAOErrors, _DAOCollection)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID,void**);
    STDMETHOD_(ULONG, AddRef)(THIS);
    STDMETHOD_(ULONG, Release)(IDispatch*);
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT*);
    STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,ITypeInfo**);
    STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*);
    STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*);
	STDMETHOD(get_Count) (THIS_ short FAR * c);
	STDMETHOD(_NewEnum) (THIS_ IUnknown * FAR * ppunk);
	STDMETHOD(Refresh) (THIS);
	STDMETHOD(Append) (THIS_ IDispatch * Object);
	STDMETHOD(Delete) (THIS_ BSTR Name);
	STDMETHOD(get_Item) (VARIANT Item, DAOError __RPC_FAR * __RPC_FAR * pperr);
};
#undef INTERFACE
#define INTERFACE DAOProperty
DECLARE_INTERFACE_(DAOProperty, _DAO)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID,void**);
    STDMETHOD_(ULONG, AddRef)(THIS);
    STDMETHOD_(ULONG, Release)(IDispatch*);
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT*);
    STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,ITypeInfo**);
    STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*);
    STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*);
	STDMETHOD(get_Properties) (THIS_ DAOProperties FAR * FAR * ppprops);
	STDMETHOD(get_Value) (VARIANT __RPC_FAR * pval);
	STDMETHOD(put_Value) (VARIANT val);
	STDMETHOD(get_Name) (BSTR __RPC_FAR * pbstr);
	STDMETHOD(put_Name) (BSTR bstr);
	STDMETHOD(get_Type) (short __RPC_FAR * ptype);
	STDMETHOD(put_Type) (short type);
	STDMETHOD(get_Inherited) (VARIANT_BOOL __RPC_FAR * pb);
};
#undef INTERFACE
#define INTERFACE DAOProperties
DECLARE_INTERFACE_(DAOProperties, _DAODynaCollection)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID,void**);
    STDMETHOD_(ULONG, AddRef)(THIS);
    STDMETHOD_(ULONG, Release)(IDispatch*);
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT*);
    STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,ITypeInfo**);
    STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*);
    STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*);
	STDMETHOD(get_Count) (THIS_ short FAR * c);
	STDMETHOD(_NewEnum) (THIS_ IUnknown * FAR * ppunk);
	STDMETHOD(Refresh) (THIS);
	STDMETHOD(Append) (THIS_ IDispatch * Object);
	STDMETHOD(Delete) (THIS_ BSTR Name);
	STDMETHOD(get_Item) (VARIANT Item, DAOProperty __RPC_FAR * __RPC_FAR * ppprop);
};
#undef INTERFACE
#define INTERFACE DAOWorkspace
DECLARE_INTERFACE_(DAOWorkspace, _DAO)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID,void**);
    STDMETHOD_(ULONG, AddRef)(THIS);
    STDMETHOD_(ULONG, Release)(IDispatch*);
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT*);
    STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,ITypeInfo**);
    STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*);
    STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*);
	STDMETHOD(get_Properties) (THIS_ DAOProperties FAR * FAR * ppprops);
	STDMETHOD(get_Name) (BSTR __RPC_FAR * pbstr);
	STDMETHOD(put_Name) (BSTR Name);
	STDMETHOD(get_UserName) (BSTR __RPC_FAR * pbstr);
	STDMETHOD(put__30_UserName) (BSTR UserName);
	STDMETHOD(put__30_Password) (BSTR Password);
	STDMETHOD(get_IsolateODBCTrans) (short __RPC_FAR * ps);
	STDMETHOD(put_IsolateODBCTrans) (short s);
	STDMETHOD(get_Databases) (DAODatabases __RPC_FAR * __RPC_FAR * ppdbs);
	STDMETHOD(get_Users) (DAOUsers __RPC_FAR * __RPC_FAR * ppusrs);
	STDMETHOD(get_Groups) (DAOGroups __RPC_FAR * __RPC_FAR * ppgrps);
	STDMETHOD(BeginTrans) (VOID);
	STDMETHOD(CommitTrans) (long Options);
	STDMETHOD(Close) (VOID);
	STDMETHOD(Rollback) (VOID);
	STDMETHOD(OpenDatabase) (BSTR Name, VARIANT Options, VARIANT ReadOnly, VARIANT Connect, DAODatabase __RPC_FAR * __RPC_FAR * ppdb);
	STDMETHOD(CreateDatabase) (BSTR Name, BSTR Connect, VARIANT Option, DAODatabase __RPC_FAR * __RPC_FAR * ppdb);
	STDMETHOD(CreateUser) (VARIANT Name, VARIANT PID, VARIANT Password, DAOUser __RPC_FAR * __RPC_FAR * ppusr);
	STDMETHOD(CreateGroup) (VARIANT Name, VARIANT PID, DAOGroup __RPC_FAR * __RPC_FAR * ppgrp);
	STDMETHOD(OpenConnection) (BSTR Name, VARIANT Options, VARIANT ReadOnly, VARIANT Connect, DAOConnection __RPC_FAR * __RPC_FAR * ppconn);
	STDMETHOD(get_LoginTimeout) (long __RPC_FAR * pTimeout);
	STDMETHOD(put_LoginTimeout) (long Timeout);
	STDMETHOD(get_DefaultCursorDriver) (long __RPC_FAR * pCursorType);
	STDMETHOD(put_DefaultCursorDriver) (long CursorType);
	STDMETHOD(get_hEnv) (LONG __RPC_FAR * phEnv);
	STDMETHOD(get_Type) (LONG __RPC_FAR * ptype);
	STDMETHOD(get_Connections) (DAOConnections __RPC_FAR * __RPC_FAR * ppcns);
};
#undef INTERFACE
#define INTERFACE DAOWorkspaces
DECLARE_INTERFACE_(DAOWorkspaces, _DAODynaCollection)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID,void**);
    STDMETHOD_(ULONG, AddRef)(THIS);
    STDMETHOD_(ULONG, Release)(IDispatch*);
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT*);
    STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,ITypeInfo**);
    STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*);
    STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*);
	STDMETHOD(get_Count) (THIS_ short FAR * c);
	STDMETHOD(_NewEnum) (THIS_ IUnknown * FAR * ppunk);
	STDMETHOD(Refresh) (THIS);
	STDMETHOD(Append) (THIS_ IDispatch * Object);
	STDMETHOD(Delete) (THIS_ BSTR Name);
	STDMETHOD(get_Item) (VARIANT Item, DAOWorkspace __RPC_FAR * __RPC_FAR * ppwrk);
};
#undef INTERFACE
#define INTERFACE DAOConnection
DECLARE_INTERFACE_(DAOConnection, IDispatch)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID,void**);
    STDMETHOD_(ULONG, AddRef)(THIS);
    STDMETHOD_(ULONG, Release)(IDispatch*);
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT*);
    STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,ITypeInfo**);
    STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*);
    STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*);
	STDMETHOD(QueryInterface2) (REFIID riid, LPVOID FAR * ppvObj);
	STDMETHOD(get_Name) (BSTR __RPC_FAR * pbstr);
	STDMETHOD(get_Connect) (BSTR __RPC_FAR * pbstr);
	STDMETHOD(get_Database) (DAODatabase __RPC_FAR * __RPC_FAR * ppDb);
	STDMETHOD(get_hDbc) (LONG __RPC_FAR * phDbc);
	STDMETHOD(get_QueryTimeout) (SHORT __RPC_FAR * pSeconds);
	STDMETHOD(put_QueryTimeout) (SHORT Seconds);
	STDMETHOD(get_Transactions) (VARIANT_BOOL __RPC_FAR * pb);
	STDMETHOD(get_RecordsAffected) (LONG __RPC_FAR * pRecords);
	STDMETHOD(get_StillExecuting) (VARIANT_BOOL __RPC_FAR * pStillExec);
	STDMETHOD(get_Updatable) (VARIANT_BOOL __RPC_FAR * pStillExec);
	STDMETHOD(get_QueryDefs) (DAOQueryDefs __RPC_FAR * __RPC_FAR * ppqdfs);
	STDMETHOD(get_Recordsets) (DAORecordsets __RPC_FAR * __RPC_FAR * pprsts);
	STDMETHOD(Cancel) (VOID);
	STDMETHOD(Close) (VOID);
	STDMETHOD(CreateQueryDef) (VARIANT Name, VARIANT SQLText, DAOQueryDef __RPC_FAR * __RPC_FAR * ppqdf);
	STDMETHOD(Execute) (BSTR Query, VARIANT Options);
	STDMETHOD(OpenRecordset) (BSTR Name, VARIANT Type, VARIANT Options, VARIANT LockEdit, DAORecordset __RPC_FAR * __RPC_FAR * pprst);
};
#undef INTERFACE
#define INTERFACE DAOConnections
DECLARE_INTERFACE_(DAOConnections, _DAOCollection)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID,void**);
    STDMETHOD_(ULONG, AddRef)(THIS);
    STDMETHOD_(ULONG, Release)(IDispatch*);
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT*);
    STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,ITypeInfo**);
    STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*);
    STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*);
	STDMETHOD(get_Count) (THIS_ short FAR * c);
	STDMETHOD(_NewEnum) (THIS_ IUnknown * FAR * ppunk);
	STDMETHOD(Refresh) (THIS);
	STDMETHOD(get_Item) (VARIANT Item, DAOConnection __RPC_FAR * __RPC_FAR * ppconn);
};
#undef INTERFACE
#define INTERFACE DAODatabase
DECLARE_INTERFACE_(DAODatabase, _DAO)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID,void**);
    STDMETHOD_(ULONG, AddRef)(THIS);
    STDMETHOD_(ULONG, Release)(IDispatch*);
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT*);
    STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,ITypeInfo**);
    STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*);
    STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*);
	STDMETHOD(get_Properties) (THIS_ DAOProperties FAR * FAR * ppprops);
	STDMETHOD(get_CollatingOrder) (LONG __RPC_FAR * pl);
	STDMETHOD(get_Connect) (BSTR __RPC_FAR * pbstr);
	STDMETHOD(get_Name) (BSTR __RPC_FAR * pbstr);
	STDMETHOD(get_QueryTimeout) (short __RPC_FAR * ps);
	STDMETHOD(put_QueryTimeout) (short Timeout);
	STDMETHOD(get_Transactions) (VARIANT_BOOL __RPC_FAR * pb);
	STDMETHOD(get_Updatable) (VARIANT_BOOL __RPC_FAR * pb);
	STDMETHOD(get_Version) (BSTR __RPC_FAR * pbstr);
	STDMETHOD(get_RecordsAffected) (long __RPC_FAR * pl);
	STDMETHOD(get_TableDefs) (DAOTableDefs __RPC_FAR * __RPC_FAR * pptdfs);
	STDMETHOD(get_QueryDefs) (DAOQueryDefs __RPC_FAR * __RPC_FAR * ppqdfs);
	STDMETHOD(get_Relations) (DAORelations __RPC_FAR * __RPC_FAR * pprls);
	STDMETHOD(get_Containers) (DAOContainers __RPC_FAR * __RPC_FAR * ppctns);
	STDMETHOD(get_Recordsets) (DAORecordsets __RPC_FAR * __RPC_FAR * pprsts);
	STDMETHOD(Close) (VOID);
	STDMETHOD(Execute) (BSTR Query, VARIANT Options);
	STDMETHOD(_30_OpenRecordset) (BSTR Name, VARIANT Type, VARIANT Options, DAORecordset __RPC_FAR * __RPC_FAR * pprst);
	STDMETHOD(CreateProperty) (VARIANT Name, VARIANT Type, VARIANT Value, VARIANT DDL, DAOProperty __RPC_FAR * __RPC_FAR * pprp);
	STDMETHOD(CreateRelation) (VARIANT Name, VARIANT Table, VARIANT ForeignTable, VARIANT Attributes, DAORelation __RPC_FAR * __RPC_FAR * pprel);
	STDMETHOD(CreateTableDef) (VARIANT Name, VARIANT Attributes, VARIANT SourceTablename, VARIANT Connect, DAOTableDef __RPC_FAR * __RPC_FAR * pptdf);
	STDMETHOD(BeginTrans) (VOID);
	STDMETHOD(CommitTrans) (long Options);
	STDMETHOD(Rollback) (VOID);
	STDMETHOD(CreateDynaset) (BSTR Name, VARIANT Options, VARIANT Inconsistent, DAORecordset __RPC_FAR * __RPC_FAR * pprst);
	STDMETHOD(CreateQueryDef) (VARIANT Name, VARIANT SQLText, DAOQueryDef __RPC_FAR * __RPC_FAR * ppqdf);
	STDMETHOD(CreateSnapshot) (BSTR Source, VARIANT Options, DAORecordset __RPC_FAR * __RPC_FAR * pprst);
	STDMETHOD(DeleteQueryDef) (BSTR Name);
	STDMETHOD(ExecuteSQL) (BSTR SQL, long __RPC_FAR * pl);
	STDMETHOD(ListFields) (BSTR Name, DAORecordset __RPC_FAR * __RPC_FAR * pprst);
	STDMETHOD(ListTables) (DAORecordset __RPC_FAR * __RPC_FAR * pprst);
	STDMETHOD(OpenQueryDef) (BSTR Name, DAOQueryDef __RPC_FAR * __RPC_FAR * ppqdf);
	STDMETHOD(OpenTable) (BSTR Name, VARIANT Options, DAORecordset __RPC_FAR * __RPC_FAR * pprst);
	STDMETHOD(get_ReplicaID) (BSTR __RPC_FAR * pbstr);
	STDMETHOD(get_DesignMasterID) (BSTR __RPC_FAR * pbstr);
	STDMETHOD(put_DesignMasterID) (BSTR MasterID);
	STDMETHOD(Synchronize) (BSTR DbPathName, VARIANT ExchangeType);
	STDMETHOD(MakeReplica) (BSTR PathName, BSTR Description, VARIANT Options);
	STDMETHOD(put_Connect) (BSTR ODBCConnnect);
	STDMETHOD(NewPassword) (BSTR bstrOld, BSTR bstrNew);
	STDMETHOD(OpenRecordset) (BSTR Name, VARIANT Type, VARIANT Options, VARIANT LockEdit, DAORecordset __RPC_FAR * __RPC_FAR * pprst);
	STDMETHOD(get_Connection) (DAOConnection __RPC_FAR * __RPC_FAR * ppCn);
	STDMETHOD(PopulatePartial) (BSTR DbPathName);
};
#undef INTERFACE
#define INTERFACE DAODatabases
DECLARE_INTERFACE_(DAODatabases, _DAOCollection)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID,void**);
    STDMETHOD_(ULONG, AddRef)(THIS);
    STDMETHOD_(ULONG, Release)(IDispatch*);
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT*);
    STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,ITypeInfo**);
    STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*);
    STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*);
	STDMETHOD(get_Count) (THIS_ short FAR * c);
	STDMETHOD(_NewEnum) (THIS_ IUnknown * FAR * ppunk);
	STDMETHOD(Refresh) (THIS);
	STDMETHOD(get_Item) (VARIANT Item, DAODatabase __RPC_FAR * __RPC_FAR * ppdb);
};
#undef INTERFACE
#define INTERFACE _DAOTableDef
DECLARE_INTERFACE_(_DAOTableDef, _DAO)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID,void**);
    STDMETHOD_(ULONG, AddRef)(THIS);
    STDMETHOD_(ULONG, Release)(IDispatch*);
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT*);
    STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,ITypeInfo**);
    STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*);
    STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*);
	STDMETHOD(get_Properties) (THIS_ DAOProperties FAR * FAR * ppprops);
	STDMETHOD(get_Attributes) (long __RPC_FAR * pl);
	STDMETHOD(put_Attributes) (long Attributes);
	STDMETHOD(get_Connect) (BSTR __RPC_FAR * pbstr);
	STDMETHOD(put_Connect) (BSTR Connection);
	STDMETHOD(get_DateCreated) (VARIANT __RPC_FAR * pvar);
	STDMETHOD(get_LastUpdated) (VARIANT __RPC_FAR * pvar);
	STDMETHOD(get_Name) (BSTR __RPC_FAR * pbstr);
	STDMETHOD(put_Name) (BSTR Name);
	STDMETHOD(get_SourceTableName) (BSTR __RPC_FAR * pbstr);
	STDMETHOD(put_SourceTableName) (BSTR bstr);
	STDMETHOD(get_Updatable) (VARIANT_BOOL __RPC_FAR * pb);
	STDMETHOD(get_ValidationText) (BSTR __RPC_FAR * pbstr);
	STDMETHOD(put_ValidationText) (BSTR bstr);
	STDMETHOD(get_ValidationRule) (BSTR __RPC_FAR * pbstr);
	STDMETHOD(put_ValidationRule) (BSTR bstr);
	STDMETHOD(get_RecordCount) (long __RPC_FAR * pl);
	STDMETHOD(get_Fields) (DAOFields __RPC_FAR * __RPC_FAR * ppflds);
	STDMETHOD(get_Indexes) (DAOIndexes __RPC_FAR * __RPC_FAR * ppidxs);
	STDMETHOD(OpenRecordset) (VARIANT Type, VARIANT Options, DAORecordset __RPC_FAR * __RPC_FAR * pprst);
	STDMETHOD(RefreshLink) (VOID);
	STDMETHOD(CreateField) (VARIANT Name, VARIANT Type, VARIANT Size, DAOField __RPC_FAR * __RPC_FAR * ppfld);
	STDMETHOD(CreateIndex) (VARIANT Name, DAOIndex __RPC_FAR * __RPC_FAR * ppidx);
	STDMETHOD(CreateProperty) (VARIANT Name, VARIANT Type, VARIANT Value, VARIANT DDL, DAOProperty __RPC_FAR * __RPC_FAR * pprp);
	STDMETHOD(get_ConflictTable) (BSTR __RPC_FAR * pbstr);
	STDMETHOD(get_ReplicaFilter) (VARIANT __RPC_FAR * pFilter);
	STDMETHOD(put_ReplicaFilter) (VARIANT Filter);
};
#undef INTERFACE
#define INTERFACE DAOTableDefs
DECLARE_INTERFACE_(DAOTableDefs, _DAODynaCollection)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID,void**);
    STDMETHOD_(ULONG, AddRef)(THIS);
    STDMETHOD_(ULONG, Release)(IDispatch*);
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT*);
    STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,ITypeInfo**);
    STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*);
    STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*);
	STDMETHOD(get_Count) (THIS_ short FAR * c);
	STDMETHOD(_NewEnum) (THIS_ IUnknown * FAR * ppunk);
	STDMETHOD(Refresh) (THIS);
	STDMETHOD(Append) (THIS_ IDispatch * Object);
	STDMETHOD(Delete) (THIS_ BSTR Name);
	STDMETHOD(get_Item) (VARIANT Item, DAOTableDef __RPC_FAR * __RPC_FAR * pptdf);
};
#undef INTERFACE
#define INTERFACE _DAOQueryDef
DECLARE_INTERFACE_(_DAOQueryDef, _DAO)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID,void**);
    STDMETHOD_(ULONG, AddRef)(THIS);
    STDMETHOD_(ULONG, Release)(IDispatch*);
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT*);
    STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,ITypeInfo**);
    STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*);
    STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*);
	STDMETHOD(get_Properties) (THIS_ DAOProperties FAR * FAR * ppprops);
	STDMETHOD(get_DateCreated) (VARIANT __RPC_FAR * pvar);
	STDMETHOD(get_LastUpdated) (VARIANT __RPC_FAR * pvar);
	STDMETHOD(get_Name) (BSTR __RPC_FAR * pbstr);
	STDMETHOD(put_Name) (BSTR bstr);
	STDMETHOD(get_ODBCTimeout) (short __RPC_FAR * ps);
	STDMETHOD(put_ODBCTimeout) (short timeout);
	STDMETHOD(get_Type) (short __RPC_FAR * pi);
	STDMETHOD(get_SQL) (BSTR __RPC_FAR * pbstr);
	STDMETHOD(put_SQL) (BSTR bstr);
	STDMETHOD(get_Updatable) (VARIANT_BOOL __RPC_FAR * pb);
	STDMETHOD(get_Connect) (BSTR __RPC_FAR * pbstr);
	STDMETHOD(put_Connect) (BSTR bstr);
	STDMETHOD(get_ReturnsRecords) (VARIANT_BOOL __RPC_FAR * pb);
	STDMETHOD(put_ReturnsRecords) (VARIANT_BOOL f);
	STDMETHOD(get_RecordsAffected) (long __RPC_FAR * pl);
	STDMETHOD(get_Fields) (DAOFields __RPC_FAR * __RPC_FAR * ppflds);
	STDMETHOD(get_Parameters) (DAOParameters __RPC_FAR * __RPC_FAR * ppprms);
	STDMETHOD(Close) (VOID);
	STDMETHOD(_30_OpenRecordset) (VARIANT Type, VARIANT Options, DAORecordset __RPC_FAR * __RPC_FAR * pprst);
	STDMETHOD(_30__OpenRecordset) (VARIANT Type, VARIANT Options, DAORecordset __RPC_FAR * __RPC_FAR * pprst);
	STDMETHOD(_Copy) (DAOQueryDef __RPC_FAR * __RPC_FAR * ppqdf);
	STDMETHOD(Execute) (VARIANT Options);
	STDMETHOD(Compare) (DAOQueryDef __RPC_FAR * pQdef, SHORT __RPC_FAR * lps);
	STDMETHOD(CreateDynaset) (VARIANT Options, VARIANT Inconsistent, DAORecordset __RPC_FAR * __RPC_FAR * pprst);
	STDMETHOD(CreateSnapshot) (VARIANT Options, DAORecordset __RPC_FAR * __RPC_FAR * pprst);
	STDMETHOD(ListParameters) (DAORecordset __RPC_FAR * __RPC_FAR * pprst);
	STDMETHOD(CreateProperty) (VARIANT Name, VARIANT Type, VARIANT Value, VARIANT DDL, DAOProperty __RPC_FAR * __RPC_FAR * pprp);
	STDMETHOD(OpenRecordset) (VARIANT Type, VARIANT Options, VARIANT LockEdit, DAORecordset __RPC_FAR * __RPC_FAR * pprst);
	STDMETHOD(_OpenRecordset) (VARIANT Type, VARIANT Options, VARIANT LockEdit, DAORecordset __RPC_FAR * __RPC_FAR * pprst);
	STDMETHOD(Cancel) (VOID);
	STDMETHOD(get_hStmt) (LONG __RPC_FAR * phStmt);
	STDMETHOD(get_MaxRecords) (LONG __RPC_FAR * pMxRecs);
	STDMETHOD(put_MaxRecords) (LONG MxRecs);
	STDMETHOD(get_StillExecuting) (VARIANT_BOOL __RPC_FAR * pStillExec);
	STDMETHOD(get_CacheSize) (long __RPC_FAR * lCacheSize);
	STDMETHOD(put_CacheSize) (long lCacheSize);
	STDMETHOD(get_Prepare) (VARIANT __RPC_FAR * pb);
	STDMETHOD(put_Prepare) (VARIANT f);
};
#undef INTERFACE
#define INTERFACE DAOQueryDefs
DECLARE_INTERFACE_(DAOQueryDefs, _DAODynaCollection)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID,void**);
    STDMETHOD_(ULONG, AddRef)(THIS);
    STDMETHOD_(ULONG, Release)(IDispatch*);
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT*);
    STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,ITypeInfo**);
    STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*);
    STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*);
	STDMETHOD(get_Count) (THIS_ short FAR * c);
	STDMETHOD(_NewEnum) (THIS_ IUnknown * FAR * ppunk);
	STDMETHOD(Refresh) (THIS);
	STDMETHOD(Append) (THIS_ IDispatch * Object);
	STDMETHOD(Delete) (THIS_ BSTR Name);
	STDMETHOD(get_Item) (VARIANT Item, DAOQueryDef __RPC_FAR * __RPC_FAR * ppqdef);
};
#undef INTERFACE
#define INTERFACE DAORecordset
DECLARE_INTERFACE_(DAORecordset, _DAO)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID,void**);
    STDMETHOD_(ULONG, AddRef)(THIS);
    STDMETHOD_(ULONG, Release)(IDispatch*);
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT*);
    STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,ITypeInfo**);
    STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*);
    STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*);
	STDMETHOD(get_Properties) (THIS_ DAOProperties FAR * FAR * ppprops);
	STDMETHOD(GetIDsOfNames2) (REFIID riid, OLECHAR FAR * FAR * rgszNames, UINT cNames, LCID lcid, DISPID FAR * rgdispid);
	STDMETHOD(Invoke2) (DISPID dispidMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS FAR * pdispparams, VARIANT FAR * pvarResult, EXCEPINFO FAR * pexcepinfo, UINT FAR * puArgErr);
	STDMETHOD(get_BOF) (VARIANT_BOOL __RPC_FAR * pb);
	STDMETHOD(get_Bookmark) (SAFEARRAY __RPC_FAR * __RPC_FAR * ppsach);
	STDMETHOD(put_Bookmark) (SAFEARRAY __RPC_FAR * __RPC_FAR * psach);
	STDMETHOD(get_Bookmarkable) (VARIANT_BOOL __RPC_FAR * pb);
	STDMETHOD(get_DateCreated) (VARIANT __RPC_FAR * pvar);
	STDMETHOD(get_EOF) (VARIANT_BOOL __RPC_FAR * pb);
	STDMETHOD(get_Filter) (BSTR __RPC_FAR * pbstr);
	STDMETHOD(put_Filter) (BSTR Filter);
	STDMETHOD(get_Index) (BSTR __RPC_FAR * pbstr);
	STDMETHOD(put_Index) (BSTR bstr);
	STDMETHOD(get_LastModified) (SAFEARRAY __RPC_FAR * __RPC_FAR * ppsa);
	STDMETHOD(get_LastUpdated) (VARIANT __RPC_FAR * pvar);
	STDMETHOD(get_LockEdits) (VARIANT_BOOL __RPC_FAR * pb);
	STDMETHOD(put_LockEdits) (VARIANT_BOOL Lock);
	STDMETHOD(get_Name) (BSTR __RPC_FAR * pbstr);
	STDMETHOD(get_NoMatch) (VARIANT_BOOL __RPC_FAR * pb);
	STDMETHOD(get_Sort) (BSTR __RPC_FAR * pbstr);
	STDMETHOD(put_Sort) (BSTR Sort);
	STDMETHOD(get_Transactions) (VARIANT_BOOL __RPC_FAR * pb);
	STDMETHOD(get_Type) (short __RPC_FAR * ps);
	STDMETHOD(get_RecordCount) (long __RPC_FAR * pl);
	STDMETHOD(get_Updatable) (VARIANT_BOOL __RPC_FAR * pb);
	STDMETHOD(get_Restartable) (VARIANT_BOOL __RPC_FAR * pb);
	STDMETHOD(get_ValidationText) (BSTR __RPC_FAR * pbstr);
	STDMETHOD(get_ValidationRule) (BSTR __RPC_FAR * pbstr);
	STDMETHOD(get_CacheStart) (SAFEARRAY __RPC_FAR * __RPC_FAR * ppsa);
	STDMETHOD(put_CacheStart) (SAFEARRAY __RPC_FAR * __RPC_FAR * psa);
	STDMETHOD(get_CacheSize) (long __RPC_FAR * pl);
	STDMETHOD(put_CacheSize) (long CacheSize);
	STDMETHOD(get_PercentPosition) (float __RPC_FAR * pd);
	STDMETHOD(put_PercentPosition) (float Position);
	STDMETHOD(get_AbsolutePosition) (long __RPC_FAR * pl);
	STDMETHOD(put_AbsolutePosition) (long Position);
	STDMETHOD(get_EditMode) (short __RPC_FAR * pi);
	STDMETHOD(get_ODBCFetchCount) (long __RPC_FAR * pl);
	STDMETHOD(get_ODBCFetchDelay) (long __RPC_FAR * pl);
	STDMETHOD(get_Parent) (DAODatabase __RPC_FAR * __RPC_FAR * pdb);
	STDMETHOD(get_Fields) (DAOFields __RPC_FAR * __RPC_FAR * ppflds);
	STDMETHOD(get_Indexes) (DAOIndexes __RPC_FAR * __RPC_FAR * ppidxs);
	STDMETHOD(_30_CancelUpdate) (VOID);
	STDMETHOD(AddNew) (VOID);
	STDMETHOD(Close) (VOID);
	STDMETHOD(OpenRecordset) (VARIANT Type, VARIANT Options, DAORecordset __RPC_FAR * __RPC_FAR * pprst);
	STDMETHOD(Delete) (VOID);
	STDMETHOD(Edit) (VOID);
	STDMETHOD(FindFirst) (BSTR Criteria);
	STDMETHOD(FindLast) (BSTR Criteria);
	STDMETHOD(FindNext) (BSTR Criteria);
	STDMETHOD(FindPrevious) (BSTR Criteria);
	STDMETHOD(MoveFirst) (VOID);
	STDMETHOD(_30_MoveLast) (VOID);
	STDMETHOD(MoveNext) (VOID);
	STDMETHOD(MovePrevious) (VOID);
	STDMETHOD(Seek) (BSTR Comparison, VARIANT Key1, VARIANT Key2, VARIANT Key3, VARIANT Key4, VARIANT Key5, VARIANT Key6, VARIANT Key7, VARIANT Key8, VARIANT Key9, VARIANT Key10, VARIANT Key11, VARIANT Key12, VARIANT Key13);
	STDMETHOD(_30_Update) (VOID);
	STDMETHOD(Clone) (DAORecordset __RPC_FAR * __RPC_FAR * pprst);
	STDMETHOD(Requery) (VARIANT NewQueryDef);
	STDMETHOD(Move) (long Rows, VARIANT StartBookmark);
	STDMETHOD(FillCache) (VARIANT Rows, VARIANT StartBookmark);
	STDMETHOD(CreateDynaset) (VARIANT Options, VARIANT Inconsistent, DAORecordset __RPC_FAR * __RPC_FAR * pprst);
	STDMETHOD(CreateSnapshot) (VARIANT Options, DAORecordset __RPC_FAR * __RPC_FAR * pprst);
	STDMETHOD(CopyQueryDef) (DAOQueryDef __RPC_FAR * __RPC_FAR * ppqdf);
	STDMETHOD(ListFields) (DAORecordset __RPC_FAR * __RPC_FAR * pprst);
	STDMETHOD(ListIndexes) (DAORecordset __RPC_FAR * __RPC_FAR * pprst);
	STDMETHOD(GetRows) (VARIANT NumRows, VARIANT __RPC_FAR * pvar);
	STDMETHOD(get_Collect) (VARIANT Item, VARIANT __RPC_FAR * pvar);
	STDMETHOD(put_Collect) (VARIANT Item, VARIANT value);
	STDMETHOD(Cancel) (VOID);
	STDMETHOD(NextRecordset) (VARIANT_BOOL __RPC_FAR * pb);
	STDMETHOD(get_hStmt) (LONG __RPC_FAR * phStmt);
	STDMETHOD(get_StillExecuting) (VARIANT_BOOL __RPC_FAR * pStillExec);
	STDMETHOD(get_BatchSize) (long __RPC_FAR * pl);
	STDMETHOD(put_BatchSize) (long BatchSize);
	STDMETHOD(get_BatchCollisionCount) (long __RPC_FAR * pl);
	STDMETHOD(get_BatchCollisions) (VARIANT __RPC_FAR * pvar);
	STDMETHOD(get_Connection) (DAOConnection __RPC_FAR * __RPC_FAR * ppCn);
	STDMETHOD(putref_Connection) (DAOConnection __RPC_FAR * pNewCn);
	STDMETHOD(get_RecordStatus) (short __RPC_FAR * pi);
	STDMETHOD(get_UpdateOptions) (long __RPC_FAR * pl);
	STDMETHOD(put_UpdateOptions) (long l);
	STDMETHOD(CancelUpdate) (long UpdateType);
	STDMETHOD(Update) (long UpdateType, VARIANT_BOOL Force);
	STDMETHOD(MoveLast) (long Options);
};
#undef INTERFACE
#define INTERFACE DAORecordsets
DECLARE_INTERFACE_(DAORecordsets, _DAOCollection)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID,void**);
    STDMETHOD_(ULONG, AddRef)(THIS);
    STDMETHOD_(ULONG, Release)(IDispatch*);
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT*);
    STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,ITypeInfo**);
    STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*);
    STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*);
	STDMETHOD(get_Count) (THIS_ short FAR * c);
	STDMETHOD(_NewEnum) (THIS_ IUnknown * FAR * ppunk);
	STDMETHOD(Refresh) (THIS);
	STDMETHOD(get_Item) (VARIANT Item, DAORecordset __RPC_FAR * __RPC_FAR * pprst);
};
#undef INTERFACE
#define INTERFACE _DAOField
DECLARE_INTERFACE_(_DAOField, _DAO)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID,void**);
    STDMETHOD_(ULONG, AddRef)(THIS);
    STDMETHOD_(ULONG, Release)(IDispatch*);
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT*);
    STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,ITypeInfo**);
    STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*);
    STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*);
	STDMETHOD(get_Properties) (THIS_ DAOProperties FAR * FAR * ppprops);
	STDMETHOD(get_CollatingOrder) (long __RPC_FAR * pl);
	STDMETHOD(get_Type) (short __RPC_FAR * ps);
	STDMETHOD(put_Type) (short Type);
	STDMETHOD(get_Name) (BSTR __RPC_FAR * pbstr);
	STDMETHOD(put_Name) (BSTR Name);
	STDMETHOD(get_Size) (long __RPC_FAR * pl);
	STDMETHOD(put_Size) (long Size);
	STDMETHOD(get_SourceField) (BSTR __RPC_FAR * pbstr);
	STDMETHOD(get_SourceTable) (BSTR __RPC_FAR * pbstr);
	STDMETHOD(get_Value) (VARIANT __RPC_FAR * pvar);
	STDMETHOD(put_Value) (VARIANT Val);
	STDMETHOD(get_Attributes) (long __RPC_FAR * pl);
	STDMETHOD(put_Attributes) (long Attr);
	STDMETHOD(get_OrdinalPosition) (short __RPC_FAR * ps);
	STDMETHOD(put_OrdinalPosition) (short Pos);
	STDMETHOD(get_ValidationText) (BSTR __RPC_FAR * pbstr);
	STDMETHOD(put_ValidationText) (BSTR bstr);
	STDMETHOD(get_ValidateOnSet) (VARIANT_BOOL __RPC_FAR * pb);
	STDMETHOD(put_ValidateOnSet) (VARIANT_BOOL Validate);
	STDMETHOD(get_ValidationRule) (BSTR __RPC_FAR * pbstr);
	STDMETHOD(put_ValidationRule) (BSTR bstr);
	STDMETHOD(get_DefaultValue) (VARIANT __RPC_FAR * pvar);
	STDMETHOD(put_DefaultValue) (VARIANT var);
	STDMETHOD(get_Required) (VARIANT_BOOL __RPC_FAR * pb);
	STDMETHOD(put_Required) (VARIANT_BOOL fReq);
	STDMETHOD(get_AllowZeroLength) (VARIANT_BOOL __RPC_FAR * pb);
	STDMETHOD(put_AllowZeroLength) (VARIANT_BOOL fAllow);
	STDMETHOD(get_DataUpdatable) (VARIANT_BOOL __RPC_FAR * pb);
	STDMETHOD(get_ForeignName) (BSTR __RPC_FAR * pbstr);
	STDMETHOD(put_ForeignName) (BSTR bstr);
	STDMETHOD(AppendChunk) (VARIANT Val);
	STDMETHOD(GetChunk) (long Offset, long Bytes, VARIANT __RPC_FAR * pvar);
	STDMETHOD(_30_FieldSize) (long __RPC_FAR * pl);
	STDMETHOD(CreateProperty) (VARIANT Name, VARIANT Type, VARIANT Value, VARIANT DDL, DAOProperty __RPC_FAR * __RPC_FAR * pprp);
	STDMETHOD(get_CollectionIndex) (short __RPC_FAR * i);
	STDMETHOD(get_OriginalValue) (VARIANT __RPC_FAR * pvar);
	STDMETHOD(get_VisibleValue) (VARIANT __RPC_FAR * pvar);
	STDMETHOD(get_FieldSize) (long __RPC_FAR * pl);
};
#undef INTERFACE
#define INTERFACE DAOFields
DECLARE_INTERFACE_(DAOFields, _DAODynaCollection)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID,void**);
    STDMETHOD_(ULONG, AddRef)(THIS);
    STDMETHOD_(ULONG, Release)(IDispatch*);
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT*);
    STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,ITypeInfo**);
    STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*);
    STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*);
	STDMETHOD(get_Count) (THIS_ short FAR * c);
	STDMETHOD(_NewEnum) (THIS_ IUnknown * FAR * ppunk);
	STDMETHOD(Refresh) (THIS);
	STDMETHOD(Append) (THIS_ IDispatch * Object);
	STDMETHOD(Delete) (THIS_ BSTR Name);
	STDMETHOD(get_Item) (VARIANT Item, DAOField __RPC_FAR * __RPC_FAR * ppfld);
};
#undef INTERFACE
#define INTERFACE _DAOIndex
DECLARE_INTERFACE_(_DAOIndex, _DAO)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID,void**);
    STDMETHOD_(ULONG, AddRef)(THIS);
    STDMETHOD_(ULONG, Release)(IDispatch*);
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT*);
    STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,ITypeInfo**);
    STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*);
    STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*);
	STDMETHOD(get_Properties) (THIS_ DAOProperties FAR * FAR * ppprops);
	STDMETHOD(get_Name) (BSTR __RPC_FAR * pbstr);
	STDMETHOD(put_Name) (BSTR bstr);
	STDMETHOD(get_Foreign) (VARIANT_BOOL __RPC_FAR * pb);
	STDMETHOD(get_Unique) (VARIANT_BOOL __RPC_FAR * pb);
	STDMETHOD(put_Unique) (VARIANT_BOOL fUnique);
	STDMETHOD(get_Clustered) (VARIANT_BOOL __RPC_FAR * pb);
	STDMETHOD(put_Clustered) (VARIANT_BOOL fClustered);
	STDMETHOD(get_Required) (VARIANT_BOOL __RPC_FAR * pb);
	STDMETHOD(put_Required) (VARIANT_BOOL fRequired);
	STDMETHOD(get_IgnoreNulls) (VARIANT_BOOL __RPC_FAR * pb);
	STDMETHOD(put_IgnoreNulls) (VARIANT_BOOL fIgnoreNulls);
	STDMETHOD(get_Primary) (VARIANT_BOOL __RPC_FAR * pb);
	STDMETHOD(put_Primary) (VARIANT_BOOL fPrimary);
	STDMETHOD(get_DistinctCount) (long __RPC_FAR * pl);
	STDMETHOD(get_Fields) (VARIANT __RPC_FAR * pv);
	STDMETHOD(put_Fields) (VARIANT v);
	STDMETHOD(CreateField) (VARIANT Name, VARIANT Type, VARIANT Size, DAOField __RPC_FAR * __RPC_FAR * ppfld);
	STDMETHOD(CreateProperty) (VARIANT Name, VARIANT Type, VARIANT Value, VARIANT DDL, DAOProperty __RPC_FAR * __RPC_FAR * pprp);
};
#undef INTERFACE
#define INTERFACE DAOIndexes
DECLARE_INTERFACE_(DAOIndexes, _DAODynaCollection)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID,void**);
    STDMETHOD_(ULONG, AddRef)(THIS);
    STDMETHOD_(ULONG, Release)(IDispatch*);
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT*);
    STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,ITypeInfo**);
    STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*);
    STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*);
	STDMETHOD(get_Count) (THIS_ short FAR * c);
	STDMETHOD(_NewEnum) (THIS_ IUnknown * FAR * ppunk);
	STDMETHOD(Refresh) (THIS);
	STDMETHOD(Append) (THIS_ IDispatch * Object);
	STDMETHOD(Delete) (THIS_ BSTR Name);
	STDMETHOD(get_Item) (VARIANT Item, DAOIndex __RPC_FAR * __RPC_FAR * ppidx);
};
#undef INTERFACE
#define INTERFACE DAOParameter
DECLARE_INTERFACE_(DAOParameter, _DAO)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID,void**);
    STDMETHOD_(ULONG, AddRef)(THIS);
    STDMETHOD_(ULONG, Release)(IDispatch*);
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT*);
    STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,ITypeInfo**);
    STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*);
    STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*);
	STDMETHOD(get_Properties) (THIS_ DAOProperties FAR * FAR * ppprops);
	STDMETHOD(get_Name) (BSTR __RPC_FAR * pbstr);
	STDMETHOD(get_Value) (VARIANT __RPC_FAR * pvar);
	STDMETHOD(put_Value) (VARIANT val);
	STDMETHOD(get_Type) (short __RPC_FAR * ps);
	STDMETHOD(put_Type) (short s);
	STDMETHOD(get_Direction) (short __RPC_FAR * pOption);
	STDMETHOD(put_Direction) (short Option);
};
#undef INTERFACE
#define INTERFACE DAOParameters
DECLARE_INTERFACE_(DAOParameters, _DAOCollection)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID,void**);
    STDMETHOD_(ULONG, AddRef)(THIS);
    STDMETHOD_(ULONG, Release)(IDispatch*);
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT*);
    STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,ITypeInfo**);
    STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*);
    STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*);
	STDMETHOD(get_Count) (THIS_ short FAR * c);
	STDMETHOD(_NewEnum) (THIS_ IUnknown * FAR * ppunk);
	STDMETHOD(Refresh) (THIS);
	STDMETHOD(get_Item) (VARIANT Item, DAOParameter __RPC_FAR * __RPC_FAR * ppprm);
};
#undef INTERFACE
#define INTERFACE _DAOUser
DECLARE_INTERFACE_(_DAOUser, _DAO)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID,void**);
    STDMETHOD_(ULONG, AddRef)(THIS);
    STDMETHOD_(ULONG, Release)(IDispatch*);
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT*);
    STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,ITypeInfo**);
    STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*);
    STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*);
	STDMETHOD(get_Properties) (THIS_ DAOProperties FAR * FAR * ppprops);
	STDMETHOD(get_Name) (BSTR __RPC_FAR * pbstr);
	STDMETHOD(put_Name) (BSTR bstr);
	STDMETHOD(put_PID) (BSTR bstr);
	STDMETHOD(put_Password) (BSTR bstr);
	STDMETHOD(get_Groups) (DAOGroups __RPC_FAR * __RPC_FAR * ppgrps);
	STDMETHOD(NewPassword) (BSTR bstrOld, BSTR bstrNew);
	STDMETHOD(CreateGroup) (VARIANT Name, VARIANT PID, DAOGroup __RPC_FAR * __RPC_FAR * ppgrp);
};
#undef INTERFACE
#define INTERFACE DAOUsers
DECLARE_INTERFACE_(DAOUsers, _DAODynaCollection)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID,void**);
    STDMETHOD_(ULONG, AddRef)(THIS);
    STDMETHOD_(ULONG, Release)(IDispatch*);
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT*);
    STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,ITypeInfo**);
    STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*);
    STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*);
	STDMETHOD(get_Count) (THIS_ short FAR * c);
	STDMETHOD(_NewEnum) (THIS_ IUnknown * FAR * ppunk);
	STDMETHOD(Refresh) (THIS);
	STDMETHOD(Append) (THIS_ IDispatch * Object);
	STDMETHOD(Delete) (THIS_ BSTR Name);
	STDMETHOD(get_Item) (VARIANT Item, DAOUser __RPC_FAR * __RPC_FAR * ppusr);
};
#undef INTERFACE
#define INTERFACE _DAOGroup
DECLARE_INTERFACE_(_DAOGroup, _DAO)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID,void**);
    STDMETHOD_(ULONG, AddRef)(THIS);
    STDMETHOD_(ULONG, Release)(IDispatch*);
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT*);
    STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,ITypeInfo**);
    STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*);
    STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*);
	STDMETHOD(get_Properties) (THIS_ DAOProperties FAR * FAR * ppprops);
	STDMETHOD(get_Name) (BSTR __RPC_FAR * pbstr);
	STDMETHOD(put_Name) (BSTR bstr);
	STDMETHOD(put_PID) (BSTR bstr);
	STDMETHOD(get_Users) (DAOUsers __RPC_FAR * __RPC_FAR * ppusrs);
	STDMETHOD(CreateUser) (VARIANT Name, VARIANT PID, VARIANT Password, DAOUser __RPC_FAR * __RPC_FAR * ppusr);
};
#undef INTERFACE
#define INTERFACE DAOGroups
DECLARE_INTERFACE_(DAOGroups, _DAODynaCollection)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID,void**);
    STDMETHOD_(ULONG, AddRef)(THIS);
    STDMETHOD_(ULONG, Release)(IDispatch*);
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT*);
    STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,ITypeInfo**);
    STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*);
    STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*);
	STDMETHOD(get_Count) (THIS_ short FAR * c);
	STDMETHOD(_NewEnum) (THIS_ IUnknown * FAR * ppunk);
	STDMETHOD(Refresh) (THIS);
	STDMETHOD(Append) (THIS_ IDispatch * Object);
	STDMETHOD(Delete) (THIS_ BSTR Name);
	STDMETHOD(get_Item) (VARIANT Item, DAOGroup __RPC_FAR * __RPC_FAR * ppgrp);
};
#undef INTERFACE
#define INTERFACE _DAORelation
DECLARE_INTERFACE_(_DAORelation, _DAO)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID,void**);
    STDMETHOD_(ULONG, AddRef)(THIS);
    STDMETHOD_(ULONG, Release)(IDispatch*);
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT*);
    STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,ITypeInfo**);
    STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*);
    STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*);
	STDMETHOD(get_Properties) (THIS_ DAOProperties FAR * FAR * ppprops);
	STDMETHOD(get_Name) (BSTR __RPC_FAR * pbstr);
	STDMETHOD(put_Name) (BSTR bstr);
	STDMETHOD(get_Table) (BSTR __RPC_FAR * pbstr);
	STDMETHOD(put_Table) (BSTR bstr);
	STDMETHOD(get_ForeignTable) (BSTR __RPC_FAR * pbstr);
	STDMETHOD(put_ForeignTable) (BSTR bstr);
	STDMETHOD(get_Attributes) (long __RPC_FAR * pl);
	STDMETHOD(put_Attributes) (long attr);
	STDMETHOD(get_Fields) (DAOFields __RPC_FAR * __RPC_FAR * ppflds);
	STDMETHOD(CreateField) (VARIANT Name, VARIANT Type, VARIANT Size, DAOField __RPC_FAR * __RPC_FAR * ppfld);
	STDMETHOD(get_PartialReplica) (VARIANT_BOOL __RPC_FAR * pfPartialReplica);
	STDMETHOD(put_PartialReplica) (VARIANT_BOOL fPartialReplica);
};
#undef INTERFACE
#define INTERFACE DAORelations
DECLARE_INTERFACE_(DAORelations, _DAODynaCollection)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID,void**);
    STDMETHOD_(ULONG, AddRef)(THIS);
    STDMETHOD_(ULONG, Release)(IDispatch*);
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT*);
    STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,ITypeInfo**);
    STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*);
    STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*);
	STDMETHOD(get_Count) (THIS_ short FAR * c);
	STDMETHOD(_NewEnum) (THIS_ IUnknown * FAR * ppunk);
	STDMETHOD(Refresh) (THIS);
	STDMETHOD(Append) (THIS_ IDispatch * Object);
	STDMETHOD(Delete) (THIS_ BSTR Name);
	STDMETHOD(get_Item) (VARIANT Item, DAORelation __RPC_FAR * __RPC_FAR * pprel);
};
#undef INTERFACE
#define INTERFACE DAOContainer
DECLARE_INTERFACE_(DAOContainer, _DAO)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID,void**);
    STDMETHOD_(ULONG, AddRef)(THIS);
    STDMETHOD_(ULONG, Release)(IDispatch*);
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT*);
    STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,ITypeInfo**);
    STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*);
    STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*);
	STDMETHOD(get_Properties) (THIS_ DAOProperties FAR * FAR * ppprops);
	STDMETHOD(get_Name) (BSTR __RPC_FAR * pbstr);
	STDMETHOD(get_Owner) (BSTR __RPC_FAR * pbstr);
	STDMETHOD(put_Owner) (BSTR bstr);
	STDMETHOD(get_UserName) (BSTR __RPC_FAR * pbstr);
	STDMETHOD(put_UserName) (BSTR bstr);
	STDMETHOD(get_Permissions) (long __RPC_FAR * pl);
	STDMETHOD(put_Permissions) (long permissions);
	STDMETHOD(get_Inherit) (VARIANT_BOOL __RPC_FAR * pb);
	STDMETHOD(put_Inherit) (VARIANT_BOOL fInherit);
	STDMETHOD(get_Documents) (DAODocuments __RPC_FAR * __RPC_FAR * ppdocs);
	STDMETHOD(get_AllPermissions) (long __RPC_FAR * pl);
};
#undef INTERFACE
#define INTERFACE DAOContainers
DECLARE_INTERFACE_(DAOContainers, _DAOCollection)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID,void**);
    STDMETHOD_(ULONG, AddRef)(THIS);
    STDMETHOD_(ULONG, Release)(IDispatch*);
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT*);
    STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,ITypeInfo**);
    STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*);
    STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*);
	STDMETHOD(get_Count) (THIS_ short FAR * c);
	STDMETHOD(_NewEnum) (THIS_ IUnknown * FAR * ppunk);
	STDMETHOD(Refresh) (THIS);
	STDMETHOD(get_Item) (VARIANT Item, DAOContainer __RPC_FAR * __RPC_FAR * ppctn);
};
#undef INTERFACE
#define INTERFACE DAODocument
DECLARE_INTERFACE_(DAODocument, _DAO)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID,void**);
    STDMETHOD_(ULONG, AddRef)(THIS);
    STDMETHOD_(ULONG, Release)(IDispatch*);
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT*);
    STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,ITypeInfo**);
    STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*);
    STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*);
	STDMETHOD(get_Properties) (THIS_ DAOProperties FAR * FAR * ppprops);
	STDMETHOD(get_Name) (BSTR __RPC_FAR * pbstr);
	STDMETHOD(get_Owner) (BSTR __RPC_FAR * pbstr);
	STDMETHOD(put_Owner) (BSTR bstr);
	STDMETHOD(get_Container) (BSTR __RPC_FAR * pbstr);
	STDMETHOD(get_UserName) (BSTR __RPC_FAR * pbstr);
	STDMETHOD(put_UserName) (BSTR bstr);
	STDMETHOD(get_Permissions) (long __RPC_FAR * pl);
	STDMETHOD(put_Permissions) (long permissions);
	STDMETHOD(get_DateCreated) (VARIANT __RPC_FAR * pvar);
	STDMETHOD(get_LastUpdated) (VARIANT __RPC_FAR * pvar);
	STDMETHOD(get_AllPermissions) (long __RPC_FAR * pl);
	STDMETHOD(CreateProperty) (VARIANT Name, VARIANT Type, VARIANT Value, VARIANT DDL, DAOProperty __RPC_FAR * __RPC_FAR * pprp);
};
#undef INTERFACE
#define INTERFACE DAODocuments
DECLARE_INTERFACE_(DAODocuments, _DAOCollection)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID,void**);
    STDMETHOD_(ULONG, AddRef)(THIS);
    STDMETHOD_(ULONG, Release)(IDispatch*);
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT*);
    STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,ITypeInfo**);
    STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*);
    STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*);
	STDMETHOD(get_Count) (THIS_ short FAR * c);
	STDMETHOD(_NewEnum) (THIS_ IUnknown * FAR * ppunk);
	STDMETHOD(Refresh) (THIS);
	STDMETHOD(get_Item) (VARIANT Item, DAODocument __RPC_FAR * __RPC_FAR * ppdoc);
};
#undef INTERFACE
#define INTERFACE DAOIndexFields
DECLARE_INTERFACE_(DAOIndexFields, _DAODynaCollection)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID,void**);
    STDMETHOD_(ULONG, AddRef)(THIS);
    STDMETHOD_(ULONG, Release)(IDispatch*);
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT*);
    STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,ITypeInfo**);
    STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*);
    STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*);
	STDMETHOD(get_Count) (THIS_ short FAR * c);
	STDMETHOD(_NewEnum) (THIS_ IUnknown * FAR * ppunk);
	STDMETHOD(Refresh) (THIS);
	STDMETHOD(Append) (THIS_ IDispatch * Object);
	STDMETHOD(Delete) (THIS_ BSTR Name);
	STDMETHOD(get_Item) (VARIANT Item, VARIANT __RPC_FAR * pvar);
};
#endif
