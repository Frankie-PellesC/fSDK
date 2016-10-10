/*+@@file@@----------------------------------------------------------------*//*!
 \file		CertBCli.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul  3 00:24:28 2016
 \date		Modified on Sun Jul  3 00:24:28 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifdef _CERTBCLI_TYPECHECK
#undef __CERTBCLI_H__
#endif
#ifndef __CERTBCLI_H__
#define __CERTBCLI_H__
#if __POCC__ >= 500
#pragma once
#endif
#define VOID		void
#define CERTBCLI_CALL	__stdcall
#ifndef _CERTBCLI_DEFINED
#define CERTBCLI_API __declspec(dllimport) CERTBCLI_CALL
#else
#define CERTBCLI_API
#endif
#define szBACKUPANNOTATION   "Cert Server Backup Interface"
#define wszBACKUPANNOTATION  TEXT(szBACKUPANNOTATION)
#define szRESTOREANNOTATION  "Cert Server Restore Interface"
#define wszRESTOREANNOTATION TEXT(szRESTOREANNOTATION)
#define CSBACKUP_TYPE_FULL		0x00000001
#define CSBACKUP_TYPE_LOGS_ONLY		0x00000002
#define CSBACKUP_TYPE_MASK		0x00000003
#define CSRESTORE_TYPE_FULL		0x00000001
#define CSRESTORE_TYPE_ONLINE		0x00000002
#define CSRESTORE_TYPE_CATCHUP		0x00000004
#define CSRESTORE_TYPE_MASK		0x00000005
#define CSBACKUP_DISABLE_INCREMENTAL  0xffffffff
typedef WCHAR CSBFT;
#define	CSBFT_DIRECTORY		    0x80
#define CSBFT_DATABASE_DIRECTORY    0x40
#define	CSBFT_LOG_DIRECTORY	    0x20
#define	CSBFT_LOG		  ((CSBFT) (TEXT('\x01') | CSBFT_LOG_DIRECTORY))
#define	CSBFT_LOG_DIR		  ((CSBFT) (TEXT('\x02') | CSBFT_DIRECTORY))
#define	CSBFT_CHECKPOINT_DIR	  ((CSBFT) (TEXT('\x03') | CSBFT_DIRECTORY))
#define	CSBFT_CERTSERVER_DATABASE ((CSBFT) (TEXT('\x04') | CSBFT_DATABASE_DIRECTORY))
#define	CSBFT_PATCH_FILE	  ((CSBFT) (TEXT('\x05') | CSBFT_LOG_DIRECTORY))
#define	CSBFT_UNKNOWN		  ((CSBFT) (TEXT('\x0f')))
typedef void *HCSBC;
#ifndef CSEDB_RSTMAP
typedef struct tagCSEDB_RSTMAPW
{
    WCHAR *pwszDatabaseName;
    WCHAR *pwszNewDatabaseName;
} CSEDB_RSTMAPW;
#define CSEDB_RSTMAP CSEDB_RSTMAPW
#endif
#define CertSrvIsServerOnline		CertSrvIsServerOnlineW
#define CertSrvBackupGetDynamicFileList	CertSrvBackupGetDynamicFileListW
#define CertSrvBackupPrepare		CertSrvBackupPrepareW
#define CertSrvBackupGetDatabaseNames	CertSrvBackupGetDatabaseNamesW
#define CertSrvBackupOpenFile		CertSrvBackupOpenFileW
#define CertSrvBackupGetBackupLogs	CertSrvBackupGetBackupLogsW
#define CertSrvRestoreGetDatabaseLocations CertSrvRestoreGetDatabaseLocationsW
#define CertSrvRestorePrepare		CertSrvRestorePrepareW
#define CertSrvRestoreRegister		CertSrvRestoreRegisterW
#define CertSrvServerControl		CertSrvServerControlW
typedef HRESULT(CERTBCLI_CALL FNCERTSRVISSERVERONLINEW) (WCHAR const *pwszServerName, BOOL *pfServerOnline);
HRESULT CERTBCLI_API CertSrvIsServerOnlineW(WCHAR const *pwszServerName, BOOL *pfServerOnline);
#ifdef _CERTBCLI_TYPECHECK
FNCERTSRVISSERVERONLINEW *pfnCertSrvIsServerOnline = CertSrvIsServerOnline;
#endif
typedef HRESULT(CERTBCLI_CALL FNCERTSRVBACKUPGETDYNAMICFILELISTW) (HCSBC hbc, WCHAR **ppwszzFileList, DWORD *pcbSize);
HRESULT CERTBCLI_API CertSrvBackupGetDynamicFileListW(HCSBC hbc, PWSTR *ppwszzFileList, DWORD *pcbSize);
#ifdef _CERTBCLI_TYPECHECK
FNCERTSRVBACKUPGETDYNAMICFILELISTW *pfnCertSrvBackupGetDynamicFileList = CertSrvBackupGetDynamicFileList;
#endif
typedef HRESULT(CERTBCLI_CALL FNCERTSRVBACKUPPREPAREW) (WCHAR const *pwszServerName, ULONG grbitJet, ULONG dwBackupFlags, HCSBC *phbc);
HRESULT CERTBCLI_API CertSrvBackupPrepareW(WCHAR const *pwszServerName, ULONG grbitJet, ULONG dwBackupFlags, HCSBC *phbc);
#ifdef _CERTBCLI_TYPECHECK
FNCERTSRVBACKUPPREPAREW *pfnCertSrvBackupPrepare = CertSrvBackupPrepare;
#endif
typedef HRESULT(CERTBCLI_CALL FNCERTSRVBACKUPGETDATABASENAMESW) (HCSBC hbc, WCHAR **ppwszzAttachmentInformation, DWORD *pcbSize);
HRESULT CERTBCLI_API CertSrvBackupGetDatabaseNamesW(HCSBC hbc, PWSTR *ppwszzAttachmentInformation, DWORD *pcbSize);
#ifdef _CERTBCLI_TYPECHECK
FNCERTSRVBACKUPGETDATABASENAMESW *pfnCertSrvBackupGetDatabaseNames = CertSrvBackupGetDatabaseNames;
#endif
typedef HRESULT(CERTBCLI_CALL FNCERTSRVBACKUPOPENFILEW) (HCSBC hbc, WCHAR const *pwszAttachmentName, DWORD cbReadHintSize, LARGE_INTEGER *pliFileSize);
HRESULT CERTBCLI_API CertSrvBackupOpenFileW(HCSBC hbc, WCHAR const *pwszAttachmentName, DWORD cbReadHintSize, LARGE_INTEGER *pliFileSize);
#ifdef _CERTBCLI_TYPECHECK
FNCERTSRVBACKUPOPENFILEW *pfnCertSrvBackupOpenFile = CertSrvBackupOpenFile;
#endif
typedef HRESULT(CERTBCLI_CALL FNCERTSRVBACKUPREAD) (HCSBC hbc, VOID *pvBuffer, DWORD cbBuffer, DWORD *pcbRead);
HRESULT CERTBCLI_API CertSrvBackupRead(HCSBC hbc, VOID *pvBuffer, DWORD cbBuffer, DWORD *pcbRead);
#ifdef _CERTBCLI_TYPECHECK
FNCERTSRVBACKUPREAD *pfnCertSrvBackupRead = CertSrvBackupRead;
#endif
typedef HRESULT(CERTBCLI_CALL FNCERTSRVBACKUPCLOSE) (HCSBC hbc);
HRESULT CERTBCLI_API CertSrvBackupClose(HCSBC hbc);
#ifdef _CERTBCLI_TYPECHECK
FNCERTSRVBACKUPCLOSE *pfnCertSrvBackupClose = CertSrvBackupClose;
#endif
typedef HRESULT(CERTBCLI_CALL FNCERTSRVBACKUPGETBACKUPLOGSW) (HCSBC hbc, WCHAR **ppwszzBackupLogFiles, DWORD *pcbSize);
HRESULT CERTBCLI_API CertSrvBackupGetBackupLogsW(HCSBC hbc, PWSTR *ppwszzBackupLogFiles, DWORD *pcbSize);
#ifdef _CERTBCLI_TYPECHECK
FNCERTSRVBACKUPGETBACKUPLOGSW *pfnCertSrvBackupGetBackupLogs = CertSrvBackupGetBackupLogs;
#endif
typedef HRESULT(CERTBCLI_CALL FNCERTSRVBACKUPTRUNCATELOGS) (HCSBC hbc);
HRESULT CERTBCLI_API CertSrvBackupTruncateLogs(HCSBC hbc);
#ifdef _CERTBCLI_TYPECHECK
FNCERTSRVBACKUPTRUNCATELOGS *pfnCertSrvBackupTruncateLogs = CertSrvBackupTruncateLogs;
#endif
typedef HRESULT(CERTBCLI_CALL FNCERTSRVBACKUPEND) (HCSBC hbc);
HRESULT CERTBCLI_API CertSrvBackupEnd(HCSBC hbc);
#ifdef _CERTBCLI_TYPECHECK
FNCERTSRVBACKUPEND *pfnCertSrvBackupEnd = CertSrvBackupEnd;
#endif
typedef VOID(CERTBCLI_CALL FNCERTSRVBACKUPFREE) (VOID *pv);
VOID CERTBCLI_API CertSrvBackupFree(VOID *pv);
#ifdef _CERTBCLI_TYPECHECK
FNCERTSRVBACKUPFREE *pfnCertSrvBackupFree = CertSrvBackupFree;
#endif
typedef HRESULT(CERTBCLI_CALL FNCERTSRVRESTOREGETDATABASELOCATIONSW) (HCSBC hbc, WCHAR **ppwszzDatabaseLocationList, DWORD *pcbSize);
HRESULT CERTBCLI_API CertSrvRestoreGetDatabaseLocationsW(HCSBC hbc, PWSTR *ppwszzDatabaseLocationList, DWORD *pcbSize);
#ifdef _CERTBCLI_TYPECHECK
FNCERTSRVRESTOREGETDATABASELOCATIONSW *pfnCertSrvRestoreGetDatabaseLocations = CertSrvRestoreGetDatabaseLocations;
#endif
typedef HRESULT(CERTBCLI_CALL FNCERTSRVRESTOREPREPAREW) (WCHAR const *pwszServerName, ULONG dwRestoreFlags, HCSBC *phbc);
HRESULT CERTBCLI_API CertSrvRestorePrepareW(WCHAR const *pwszServerName, ULONG dwRestoreFlags, HCSBC *phbc);
#ifdef _CERTBCLI_TYPECHECK
FNCERTSRVRESTOREPREPAREW *pfnCertSrvRestorePrepare = CertSrvRestorePrepare;
#endif
typedef HRESULT(CERTBCLI_CALL FNCERTSRVRESTOREREGISTERW) (HCSBC hbc, WCHAR const *pwszCheckPointFilePath, WCHAR const *pwszLogPath, CSEDB_RSTMAPW rgrstmap[], LONG crstmap, WCHAR const *pwszBackupLogPath, ULONG genLow, ULONG genHigh);
HRESULT CERTBCLI_API CertSrvRestoreRegisterW(HCSBC hbc, WCHAR const *pwszCheckPointFilePath, WCHAR const *pwszLogPath, CSEDB_RSTMAPW rgrstmap[], LONG crstmap, WCHAR const *pwszBackupLogPath, ULONG genLow, ULONG genHigh);
HRESULT CERTBCLI_API CertSrvRestoreRegisterThroughFile(HCSBC hbc, WCHAR const *pwszCheckPointFilePath, WCHAR const *pwszLogPath, CSEDB_RSTMAPW rgrstmap[], LONG crstmap, WCHAR const *pwszBackupLogPath, ULONG genLow, ULONG genHigh);
#ifdef _CERTBCLI_TYPECHECK
FNCERTSRVRESTOREREGISTERW *pfnCertSrvRestoreRegister = CertSrvRestoreRegister;
#endif
typedef HRESULT(CERTBCLI_CALL FNCERTSRVRESTOREREGISTERCOMPLETE) (HCSBC hbc, HRESULT hrRestoreState);
HRESULT CERTBCLI_API CertSrvRestoreRegisterComplete(HCSBC hbc, HRESULT hrRestoreState);
#ifdef _CERTBCLI_TYPECHECK
FNCERTSRVRESTOREREGISTERCOMPLETE *pfnCertSrvRestoreRegisterComplete = CertSrvRestoreRegisterComplete;
#endif
typedef HRESULT(CERTBCLI_CALL FNCERTSRVRESTOREEND) (HCSBC hbc);
HRESULT CERTBCLI_API CertSrvRestoreEnd(HCSBC hbc);
#ifdef _CERTBCLI_TYPECHECK
FNCERTSRVRESTOREEND *pfnCertSrvRestoreEnd = CertSrvRestoreEnd;
#endif
#define CSCONTROL_SHUTDOWN	    0x000000001
#define CSCONTROL_SUSPEND	    0x000000002
#define CSCONTROL_RESTART	    0x000000003
typedef HRESULT(CERTBCLI_CALL FNCERTSRVSERVERCONTROLW) (WCHAR const *pwszServerName, DWORD dwControlFlags, DWORD *pcbOut, BYTE **ppbOut);
HRESULT CERTBCLI_API CertSrvServerControlW(WCHAR const *pwszServerName, DWORD dwControlFlags, DWORD *pcbOut, BYTE **ppbOut);
#ifdef _CERTBCLI_TYPECHECK
FNCERTSRVSERVERCONTROLW *pfnCertSrvServerControl = CertSrvServerControl;
#endif
#endif
