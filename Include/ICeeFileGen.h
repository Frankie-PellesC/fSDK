/*+@@file@@----------------------------------------------------------------*//*!
 \file		ICeeFileGen.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul 16 19:06:34 2016
 \date		Modified on Sat Jul 16 19:06:34 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _ICEEFILEGEN_H_
#define _ICEEFILEGEN_H_
#include <ole2.h>
#include <cor.h>
#if __POCC__ >= 500
#pragma once
#endif
typedef struct ICeeFileGen ICeeFileGen;
typedef void *HCEEFILE;
typedef HRESULT (__stdcall * PFN_CreateICeeFileGen)(ICeeFileGen ** ceeFileGen);
typedef HRESULT (__stdcall * PFN_DestroyICeeFileGen)(ICeeFileGen ** ceeFileGen);
#define ICEE_CREATE_FILE_PE32	       0x00000001
#define ICEE_CREATE_FILE_PE64	       0x00000002
#define ICEE_CREATE_FILE_CORMAIN_STUB  0x00000004
#define ICEE_CREATE_FILE_STRIP_RELOCS  0x00000008
#define ICEE_CREATE_FILE_EMIT_FIXUPS   0x00000010
#define ICEE_CREATE_MACHINE_MASK       0x0000FF00
#define ICEE_CREATE_MACHINE_ILLEGAL    0x00000000
#define ICEE_CREATE_MACHINE_I386       0x00000100
#define ICEE_CREATE_MACHINE_IA64       0x00000200
#define ICEE_CREATE_MACHINE_AMD64      0x00000400
#define ICEE_CREATE_FILE_PURE_IL		ICEE_CREATE_FILE_PE32 | ICEE_CREATE_FILE_CORMAIN_STUB | ICEE_CREATE_MACHINE_I386
#pragma message ("Warning C++ declarations!")
#if 0
class ICeeFileGen
{
  public
		virtual HRESULT CreateCeeFile(HCEEFILE *ceeFile);
		virtual HRESULT EmitMetaData(HCEEFILE ceeFile, IMetaDataEmit *emitter, mdScope scope);
		virtual HRESULT EmitLibraryName(HCEEFILE ceeFile, IMetaDataEmit *emitter, mdScope scope);
		virtual HRESULT EmitMethod();
		virtual HRESULT GetMethodRVA(HCEEFILE ceeFile, ULONG codeOffset, ULONG *codeRVA);
		virtual HRESULT EmitSignature();
		virtual HRESULT EmitString(HCEEFILE ceeFile, LPWSTR strValue, ULONG *strRef);
		virtual HRESULT GenerateCeeFile(HCEEFILE ceeFile);
		virtual HRESULT SetOutputFileName(HCEEFILE ceeFile, LPWSTR outputFileName);
		virtual HRESULT GetOutputFileName(HCEEFILE ceeFile, LPWSTR *outputFileName);
		virtual HRESULT SetResourceFileName(HCEEFILE ceeFile, LPWSTR resourceFileName);
		virtual HRESULT GetResourceFileName(HCEEFILE ceeFile, LPWSTR *resourceFileName);
		virtual HRESULT SetImageBase(HCEEFILE ceeFile, size_t imageBase);
		virtual HRESULT SetSubsystem(HCEEFILE ceeFile, DWORD subsystem, DWORD major, DWORD minor);
		virtual HRESULT SetEntryClassToken();
		virtual HRESULT GetEntryClassToken();
		virtual HRESULT SetEntryPointDescr();
		virtual HRESULT GetEntryPointDescr();
		virtual HRESULT SetEntryPointFlags();
		virtual HRESULT GetEntryPointFlags();
		virtual HRESULT SetDllSwitch(HCEEFILE ceeFile, BOOL dllSwitch);
		virtual HRESULT GetDllSwitch(HCEEFILE ceeFile, BOOL *dllSwitch);
		virtual HRESULT SetLibraryName(HCEEFILE ceeFile, LPWSTR LibraryName);
		virtual HRESULT GetLibraryName(HCEEFILE ceeFile, LPWSTR *LibraryName);
		virtual HRESULT SetLibraryGuid(HCEEFILE ceeFile, LPWSTR LibraryGuid);
		virtual HRESULT DestroyCeeFile(HCEEFILE *ceeFile);
		virtual HRESULT GetSectionCreate(HCEEFILE ceeFile, const char *name, DWORD flags, HCEESECTION *section);
		virtual HRESULT GetIlSection(HCEEFILE ceeFile, HCEESECTION *section);
		virtual HRESULT GetRdataSection(HCEEFILE ceeFile, HCEESECTION *section);
		virtual HRESULT GetSectionDataLen(HCEESECTION section, ULONG *dataLen);
		virtual HRESULT GetSectionBlock(HCEESECTION section, ULONG len, ULONG align = 1, void **ppBytes = 0);
		virtual HRESULT TruncateSection(HCEESECTION section, ULONG len);
		virtual HRESULT AddSectionReloc(HCEESECTION section, ULONG offset, HCEESECTION relativeTo, CeeSectionRelocType relocType);
		virtual HRESULT SetSectionDirectoryEntry(HCEESECTION section, ULONG num);
		virtual HRESULT CreateSig();
		virtual HRESULT AddSigArg();
		virtual HRESULT SetSigReturnType();
		virtual HRESULT SetSigCallingConvention();
		virtual HRESULT DeleteSig();
		virtual HRESULT SetEntryPoint(HCEEFILE ceeFile, mdMethodDef method);
		virtual HRESULT GetEntryPoint(HCEEFILE ceeFile, mdMethodDef *method);
		virtual HRESULT SetComImageFlags(HCEEFILE ceeFile, DWORD mask);
		virtual HRESULT GetComImageFlags(HCEEFILE ceeFile, DWORD *mask);
		virtual HRESULT GetIMapTokenIface(HCEEFILE ceeFile, IMetaDataEmit *emitter, IUnknown **pIMapToken);
		virtual HRESULT SetDirectoryEntry(HCEEFILE ceeFile, HCEESECTION section, ULONG num, ULONG size, ULONG offset = 0);
		virtual HRESULT EmitMetaDataEx(HCEEFILE ceeFile, IMetaDataEmit *emitter);
		virtual HRESULT EmitLibraryNameEx(HCEEFILE ceeFile, IMetaDataEmit *emitter);
		virtual HRESULT GetIMapTokenIfaceEx(HCEEFILE ceeFile, IMetaDataEmit *emitter, IUnknown **pIMapToken);
		virtual HRESULT EmitMacroDefinitions(HCEEFILE ceeFile, void *pData, DWORD cData);
		virtual HRESULT CreateCeeFileFromICeeGen(ICeeGen *pFromICeeGen, HCEEFILE *ceeFile, DWORD createFlags = ICEE_CREATE_FILE_PURE_IL);
		virtual HRESULT SetManifestEntry(HCEEFILE ceeFile, ULONG size, ULONG offset);
		virtual HRESULT SetEnCRVABase(HCEEFILE ceeFile, ULONG dataBase, ULONG rdataBase);
		virtual HRESULT GenerateCeeMemoryImage(HCEEFILE ceeFile, void **ppImage);
		virtual HRESULT ComputeSectionOffset(HCEESECTION section, char *ptr, unsigned *offset);

		virtual HRESULT ComputeOffset(HCEEFILE file, char *ptr, HCEESECTION *pSection, unsigned *offset);

		virtual HRESULT GetCorHeader(HCEEFILE ceeFile, IMAGE_COR20_HEADER **header);
		virtual HRESULT LinkCeeFile(HCEEFILE ceeFile);
		virtual HRESULT FixupCeeFile(HCEEFILE ceeFile);
		virtual HRESULT GetSectionRVA(HCEESECTION section, ULONG *rva);

		virtual HRESULT ComputeSectionPointer(HCEESECTION section, ULONG offset, char **ptr);
		virtual HRESULT SetObjSwitch(HCEEFILE ceeFile, BOOL objSwitch);
		virtual HRESULT GetObjSwitch(HCEEFILE ceeFile, BOOL *objSwitch);
		virtual HRESULT SetVTableEntry(HCEEFILE ceeFile, ULONG size, ULONG offset);
		virtual HRESULT SetStrongNameEntry(HCEEFILE ceeFile, ULONG size, ULONG offset);
		virtual HRESULT EmitMetaDataAt(HCEEFILE ceeFile, IMetaDataEmit *emitter, HCEESECTION section, DWORD offset, BYTE *buffer, unsigned buffLen);
		virtual HRESULT GetFileTimeStamp(HCEEFILE ceeFile, DWORD *pTimeStamp);
		virtual HRESULT AddNotificationHandler(HCEEFILE ceeFile, IUnknown *pHandler);
		virtual HRESULT SetFileAlignment(HCEEFILE ceeFile, ULONG fileAlignment);
		virtual HRESULT ClearComImageFlags(HCEEFILE ceeFile, DWORD mask);
		virtual HRESULT CreateCeeFileEx(HCEEFILE *ceeFile, ULONG createFlags);
		virtual HRESULT SetImageBase64(HCEEFILE ceeFile, ULONGLONG imageBase);
		virtual HRESULT GetHeaderInfo(HCEEFILE ceeFile, PIMAGE_NT_HEADERS *ppNtHeaders, PIMAGE_SECTION_HEADER *ppSections, ULONG *pNumSections);
		virtual HRESULT CreateCeeFileEx2(HCEEFILE *ceeFile, ULONG createFlags, LPCWSTR seedFileName = NULL);
		virtual HRESULT SetVTableEntry64(HCEEFILE ceeFile, ULONG size, void *ptr);
};
#endif
#endif
