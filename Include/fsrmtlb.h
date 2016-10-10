/*+@@file@@----------------------------------------------------------------*//*!
 \file		fsrmtlb.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 10 18:58:53 2016
 \date		Modified on Sun Jul 10 18:58:53 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif
#include "rpc.h"
#include "rpcndr.h"
#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif
#ifndef __fsrmtlb_h__
#define __fsrmtlb_h__
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __FsrmSetting_FWD_DEFINED__
#define __FsrmSetting_FWD_DEFINED__
typedef struct FsrmSetting FsrmSetting;
#endif
#ifndef __FsrmPathMapper_FWD_DEFINED__
#define __FsrmPathMapper_FWD_DEFINED__
typedef struct FsrmPathMapper FsrmPathMapper;
#endif
#ifndef __FsrmExportImport_FWD_DEFINED__
#define __FsrmExportImport_FWD_DEFINED__
typedef struct FsrmExportImport FsrmExportImport;
#endif
#ifndef __FsrmQuotaManager_FWD_DEFINED__
#define __FsrmQuotaManager_FWD_DEFINED__
typedef struct FsrmQuotaManager FsrmQuotaManager;
#endif
#ifndef __FsrmQuotaTemplateManager_FWD_DEFINED__
#define __FsrmQuotaTemplateManager_FWD_DEFINED__
typedef struct FsrmQuotaTemplateManager FsrmQuotaTemplateManager;
#endif
#ifndef __FsrmFileGroupManager_FWD_DEFINED__
#define __FsrmFileGroupManager_FWD_DEFINED__
typedef struct FsrmFileGroupManager FsrmFileGroupManager;
#endif
#ifndef __FsrmFileScreenManager_FWD_DEFINED__
#define __FsrmFileScreenManager_FWD_DEFINED__
typedef struct FsrmFileScreenManager FsrmFileScreenManager;
#endif
#ifndef __FsrmFileScreenTemplateManager_FWD_DEFINED__
#define __FsrmFileScreenTemplateManager_FWD_DEFINED__
typedef struct FsrmFileScreenTemplateManager FsrmFileScreenTemplateManager;
#endif
#ifndef __FsrmReportManager_FWD_DEFINED__
#define __FsrmReportManager_FWD_DEFINED__
typedef struct FsrmReportManager FsrmReportManager;
#endif
#ifndef __FsrmReportScheduler_FWD_DEFINED__
#define __FsrmReportScheduler_FWD_DEFINED__
typedef struct FsrmReportScheduler FsrmReportScheduler;
#endif
#ifndef __FsrmFileManagementJobManager_FWD_DEFINED__
#define __FsrmFileManagementJobManager_FWD_DEFINED__
typedef struct FsrmFileManagementJobManager FsrmFileManagementJobManager;
#endif
#ifndef __FsrmClassificationManager_FWD_DEFINED__
#define __FsrmClassificationManager_FWD_DEFINED__
typedef struct FsrmClassificationManager FsrmClassificationManager;
#endif
#ifndef __FsrmPipelineModuleConnector_FWD_DEFINED__
#define __FsrmPipelineModuleConnector_FWD_DEFINED__
typedef struct FsrmPipelineModuleConnector FsrmPipelineModuleConnector;
#endif
#include "oaidl.h"
#include "fsrmenums.h"
#include "fsrm.h"
#include "fsrmquota.h"
#include "fsrmscreen.h"
#include "fsrmreports.h"
#include "fsrmpipeline.h"
#ifndef __FsrmLib_LIBRARY_DEFINED__
#define __FsrmLib_LIBRARY_DEFINED__ 
extern const IID LIBID_FsrmLib;
extern const CLSID CLSID_FsrmSetting;
extern const CLSID CLSID_FsrmPathMapper;
extern const CLSID CLSID_FsrmExportImport;
extern const CLSID CLSID_FsrmQuotaManager;
extern const CLSID CLSID_FsrmQuotaTemplateManager;
extern const CLSID CLSID_FsrmFileGroupManager;
extern const CLSID CLSID_FsrmFileScreenManager;
extern const CLSID CLSID_FsrmFileScreenTemplateManager;
extern const CLSID CLSID_FsrmReportManager;
extern const CLSID CLSID_FsrmReportScheduler;
extern const CLSID CLSID_FsrmFileManagementJobManager;
extern const CLSID CLSID_FsrmClassificationManager;
extern const CLSID CLSID_FsrmPipelineModuleConnector;
#endif
#endif
