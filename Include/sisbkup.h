/*+@@file@@----------------------------------------------------------------*//*!
 \file		sisbkup.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Fri Sep 16 23:47:27 2016
 \date		Modified on Fri Sep 16 23:47:27 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __SISBKUP_H__
#define __SISBKUP_H__
#if __POCC__ >= 500
#pragma once
#endif
BOOL __stdcall SisCreateBackupStructure(PWCHAR volumeRoot, PVOID *sisBackupStructure, PWCHAR *commonStoreRootPathname, PULONG countOfCommonStoreFilesToBackup, PWCHAR **commonStoreFilesToBackup);
BOOL __stdcall SisCSFilesToBackupForLink(PVOID sisBackupStructure, PVOID reparseData, ULONG reparseDataSize, PVOID thisFileContext, PVOID *matchingFileContext, PULONG countOfCommonStoreFilesToBackup, PWCHAR **commonStoreFilesToBackup);
BOOL __stdcall SisFreeBackupStructure(PVOID sisBackupStructure);
BOOL __stdcall SisCreateRestoreStructure(PWCHAR volumeRoot, PVOID *sisRestoreStructure, PWCHAR *commonStoreRootPathname, PULONG countOfCommonStoreFilesToRestore, PWCHAR **commonStoreFilesToRestore);
BOOL __stdcall SisRestoredLink(PVOID sisRestoreStructure, PWCHAR restoredFileName, PVOID reparseData, ULONG reparseDataSize, PULONG countOfCommonStoreFilesToRestore, PWCHAR **commonStoreFilesToRestore);
BOOL __stdcall SisRestoredCommonStoreFile(PVOID sisRestoreStructure, PWCHAR commonStoreFileName);
BOOL __stdcall SisFreeRestoreStructure(PVOID sisRestoreStructure);
VOID __stdcall SisFreeAllocatedMemory(PVOID allocatedSpace);
typedef BOOL(FAR __stdcall *PF_SISCREATEBACKUPSTRUCTURE) (PWCHAR, PVOID *, PWCHAR *, PULONG, PWCHAR **);
typedef BOOL(FAR __stdcall *PF_SISCSFILESTOBACKUPFORLINK) (PVOID, PVOID, ULONG, PVOID, PVOID *, PULONG, PWCHAR **);
typedef BOOL(FAR __stdcall *PF_SISFREEBACKUPSTRUCTURE) (PVOID);
typedef BOOL(FAR __stdcall *PF_SISCREATERESTORESTRUCTURE) (PWCHAR, PVOID *, PWCHAR *, PULONG, PWCHAR **);
typedef BOOL(FAR __stdcall *PF_SISRESTOREDLINK) (PVOID, PWCHAR, PVOID, ULONG, PULONG, PWCHAR **);
typedef BOOL(FAR __stdcall *PF_SISRESTOREDCOMMONSTORFILE) (PVOID, PWCHAR);
typedef BOOL(FAR __stdcall *PF_SISFREERESTORESTRUCTURE) (PVOID);
typedef BOOL(FAR __stdcall *PF_SISFREEALLOCATEDMEMORY) (PVOID);
#endif
