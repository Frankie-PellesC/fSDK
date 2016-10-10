/*+@@file@@----------------------------------------------------------------*//*!
 \file		msdasql.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug 14 19:15:38 2016
 \date		Modified on Sun Aug 14 19:15:38 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef  _MSDASQL_H_
#define  _MSDASQL_H_
#if __POCC__ >= 500
#pragma once
#endif
#undef MSDASQLDECLSPEC
#if __POCC__ >= 1100 && (!defined(SHx) || (defined(SHx) && __POCC__ >= 1200))
#define MSDASQLDECLSPEC __declspec(selectany)
#else
#define MSDASQLDECLSPEC 
#endif
extern const MSDASQLDECLSPEC GUID IID_ISQLRequestDiagFields   = { 0x228972f0, 0xb5ff, 0x11d0, { 0x8a, 0x80, 0x0, 0xc0, 0x4f, 0xd6, 0x11, 0xcd } };
extern const MSDASQLDECLSPEC GUID IID_ISQLGetDiagField        = { 0x228972f1, 0xb5ff, 0x11d0, { 0x8a, 0x80, 0x0, 0xc0, 0x4f, 0xd6, 0x11, 0xcd } };
extern const MSDASQLDECLSPEC GUID IID_IRowsetChangeExtInfo    = {0x0C733A8FL,0x2A1C,0x11CE,{0xAD,0xE5,0x00,0xAA,0x00,0x44,0x77,0x3D}};
extern const MSDASQLDECLSPEC GUID CLSID_MSDASQL               = {0xC8B522CBL,0x5CF3,0x11CE,{0xAD,0xE5,0x00,0xAA,0x00,0x44,0x77,0x3D}};
extern const MSDASQLDECLSPEC GUID CLSID_MSDASQL_ENUMERATOR    = {0xC8B522CDL,0x5CF3,0x11CE,{0xAD,0xE5,0x00,0xAA,0x00,0x44,0x77,0x3D}};
extern const MSDASQLDECLSPEC GUID DBPROPSET_PROVIDERDATASOURCEINFO  = {0x497c60e0,0x7123,0x11cf,{0xb1,0x71,0x0,0xaa,0x0,0x57,0x59,0x9e}};
extern const MSDASQLDECLSPEC GUID DBPROPSET_PROVIDERROWSET          = {0x497c60e1,0x7123,0x11cf,{0xb1,0x71,0x0,0xaa,0x0,0x57,0x59,0x9e}};
extern const MSDASQLDECLSPEC GUID DBPROPSET_PROVIDERDBINIT          = {0x497c60e2,0x7123,0x11cf,{0xb1,0x71,0x0,0xaa,0x0,0x57,0x59,0x9e}};
extern const MSDASQLDECLSPEC GUID DBPROPSET_PROVIDERSTMTATTR        = {0x497c60e3,0x7123,0x11cf,{0xb1,0x71,0x0,0xaa,0x0,0x57,0x59,0x9e}};
extern const MSDASQLDECLSPEC GUID DBPROPSET_PROVIDERCONNATTR        = {0x497c60e4,0x7123,0x11cf,{0xb1,0x71,0x0,0xaa,0x0,0x57,0x59,0x9e}};
#define KAGPROP_QUERYBASEDUPDATES           2
#define KAGPROP_MARSHALLABLE                3
#define KAGPROP_POSITIONONNEWROW            4
#define KAGPROP_IRowsetChangeExtInfo        5
#define KAGPROP_CURSOR                      6
#define KAGPROP_CONCURRENCY                 7
#define KAGPROP_BLOBSONFOCURSOR             8
#define KAGPROP_INCLUDENONEXACT             9
#define KAGPROP_FORCESSFIREHOSEMODE         10
#define KAGPROP_FORCENOPARAMETERREBIND      11
#define KAGPROP_FORCENOPREPARE              12
#define KAGPROP_FORCENOREEXECUTE            13
#define KAGPROP_ACCESSIBLEPROCEDURES        2
#define KAGPROP_ACCESSIBLETABLES            3
#define KAGPROP_ODBCSQLOPTIEF               4
#define KAGPROP_OJCAPABILITY                5
#define KAGPROP_PROCEDURES                  6
#define KAGPROP_DRIVERNAME                  7
#define KAGPROP_DRIVERVER                   8
#define KAGPROP_DRIVERODBCVER               9
#define KAGPROP_LIKEESCAPECLAUSE            10
#define KAGPROP_SPECIALCHARACTERS           11
#define KAGPROP_MAXCOLUMNSINGROUPBY         12
#define KAGPROP_MAXCOLUMNSININDEX           13
#define KAGPROP_MAXCOLUMNSINORDERBY         14
#define KAGPROP_MAXCOLUMNSINSELECT          15
#define KAGPROP_MAXCOLUMNSINTABLE           16
#define KAGPROP_NUMERICFUNCTIONS            17
#define KAGPROP_ODBCSQLCONFORMANCE          18
#define KAGPROP_OUTERJOINS                  19
#define KAGPROP_STRINGFUNCTIONS             20
#define KAGPROP_SYSTEMFUNCTIONS             21
#define KAGPROP_TIMEDATEFUNCTIONS           22
#define KAGPROP_FILEUSAGE                   23
#define KAGPROP_ACTIVESTATEMENTS            24
#define KAGPROP_AUTH_TRUSTEDCONNECTION      2
#define KAGPROP_AUTH_SERVERINTEGRATED       3
#define KAGPROPVAL_CONCUR_ROWVER            0x00000001
#define KAGPROPVAL_CONCUR_VALUES            0x00000002
#define KAGPROPVAL_CONCUR_LOCK              0x00000004
#define KAGPROPVAL_CONCUR_READ_ONLY         0x00000008
#include "msdasql_interfaces.h"
#endif
