/*+@@file@@----------------------------------------------------------------*//*!
 \file		rpcnsi.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Jun 27 09:40:08 2016
 \date		Modified on Mon Jun 27 09:40:08 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __RPCNSI_H__
#define __RPCNSI_H__
#if __POCC__ >= 500
#pragma once
#endif
typedef void __RPC_FAR *RPC_NS_HANDLE;
#define RPC_C_NS_SYNTAX_DEFAULT 0
#define RPC_C_NS_SYNTAX_DCE 3
#define RPC_C_PROFILE_DEFAULT_ELT 0
#define RPC_C_PROFILE_ALL_ELT 1
#define RPC_C_PROFILE_ALL_ELTS RPC_C_PROFILE_ALL_ELT
#define RPC_C_PROFILE_MATCH_BY_IF 2
#define RPC_C_PROFILE_MATCH_BY_MBR 3
#define RPC_C_PROFILE_MATCH_BY_BOTH 4
#define RPC_C_NS_DEFAULT_EXP_AGE -1
RPCNSAPI RPC_STATUS RPC_ENTRY RpcNsBindingExportA(unsigned long EntryNameSyntax, RPC_CSTR EntryName, RPC_IF_HANDLE IfSpec, RPC_BINDING_VECTOR __RPC_FAR *BindingVec, UUID_VECTOR __RPC_FAR *ObjectUuidVec);
RPCNSAPI RPC_STATUS RPC_ENTRY RpcNsBindingUnexportA(unsigned long EntryNameSyntax, RPC_CSTR EntryName, RPC_IF_HANDLE IfSpec, UUID_VECTOR __RPC_FAR *ObjectUuidVec);
#ifdef RPC_UNICODE_SUPPORTED
RPCNSAPI RPC_STATUS RPC_ENTRY RpcNsBindingExportW(unsigned long EntryNameSyntax, RPC_WSTR EntryName, RPC_IF_HANDLE IfSpec, RPC_BINDING_VECTOR __RPC_FAR *BindingVec, UUID_VECTOR __RPC_FAR *ObjectUuidVec);
RPCNSAPI RPC_STATUS RPC_ENTRY RpcNsBindingUnexportW(unsigned long EntryNameSyntax, RPC_WSTR EntryName, RPC_IF_HANDLE IfSpec, UUID_VECTOR __RPC_FAR *ObjectUuidVec);
#endif
RPC_STATUS RPC_ENTRY RpcNsBindingExportPnPA(unsigned long EntryNameSyntax, RPC_CSTR EntryName, RPC_IF_HANDLE IfSpec, UUID_VECTOR *ObjectVector);
RPC_STATUS RPC_ENTRY RpcNsBindingUnexportPnPA(unsigned long EntryNameSyntax, RPC_CSTR EntryName, RPC_IF_HANDLE IfSpec, UUID_VECTOR *ObjectVector);
#ifdef RPC_UNICODE_SUPPORTED
RPC_STATUS RPC_ENTRY RpcNsBindingExportPnPW(unsigned long EntryNameSyntax, RPC_WSTR EntryName, RPC_IF_HANDLE IfSpec, UUID_VECTOR *ObjectVector);
RPC_STATUS RPC_ENTRY RpcNsBindingUnexportPnPW(unsigned long EntryNameSyntax, RPC_WSTR EntryName, RPC_IF_HANDLE IfSpec, UUID_VECTOR *ObjectVector);
#endif
RPCNSAPI RPC_STATUS RPC_ENTRY RpcNsBindingLookupBeginA(unsigned long EntryNameSyntax, RPC_CSTR EntryName, RPC_IF_HANDLE IfSpec, UUID __RPC_FAR *ObjUuid, unsigned long BindingMaxCount, RPC_NS_HANDLE __RPC_FAR *LookupContext);
#ifdef RPC_UNICODE_SUPPORTED
RPCNSAPI RPC_STATUS RPC_ENTRY RpcNsBindingLookupBeginW(unsigned long EntryNameSyntax, RPC_WSTR EntryName, RPC_IF_HANDLE IfSpec, UUID __RPC_FAR *ObjUuid, unsigned long BindingMaxCount, RPC_NS_HANDLE __RPC_FAR *LookupContext);
#endif
RPCNSAPI RPC_STATUS RPC_ENTRY RpcNsBindingLookupNext(RPC_NS_HANDLE LookupContext, RPC_BINDING_VECTOR __RPC_FAR *__RPC_FAR *BindingVec);
RPCNSAPI RPC_STATUS RPC_ENTRY RpcNsBindingLookupDone(RPC_NS_HANDLE __RPC_FAR *LookupContext);
RPCNSAPI RPC_STATUS RPC_ENTRY RpcNsGroupDeleteA(unsigned long GroupNameSyntax, RPC_CSTR GroupName);
RPCNSAPI RPC_STATUS RPC_ENTRY RpcNsGroupMbrAddA(unsigned long GroupNameSyntax, RPC_CSTR GroupName, unsigned long MemberNameSyntax, RPC_CSTR MemberName);
RPCNSAPI RPC_STATUS RPC_ENTRY RpcNsGroupMbrRemoveA(unsigned long GroupNameSyntax, RPC_CSTR GroupName, unsigned long MemberNameSyntax, RPC_CSTR MemberName);
RPCNSAPI RPC_STATUS RPC_ENTRY RpcNsGroupMbrInqBeginA(unsigned long GroupNameSyntax, RPC_CSTR GroupName, unsigned long MemberNameSyntax, RPC_NS_HANDLE __RPC_FAR *InquiryContext);
RPCNSAPI RPC_STATUS RPC_ENTRY RpcNsGroupMbrInqNextA(RPC_NS_HANDLE InquiryContext, RPC_CSTR __RPC_FAR *MemberName);
#ifdef RPC_UNICODE_SUPPORTED
RPCNSAPI RPC_STATUS RPC_ENTRY RpcNsGroupDeleteW(unsigned long GroupNameSyntax, RPC_WSTR GroupName);
RPCNSAPI RPC_STATUS RPC_ENTRY RpcNsGroupMbrAddW(unsigned long GroupNameSyntax, RPC_WSTR GroupName, unsigned long MemberNameSyntax, RPC_WSTR MemberName);
RPCNSAPI RPC_STATUS RPC_ENTRY RpcNsGroupMbrRemoveW(unsigned long GroupNameSyntax, RPC_WSTR GroupName, unsigned long MemberNameSyntax, RPC_WSTR MemberName);
RPCNSAPI RPC_STATUS RPC_ENTRY RpcNsGroupMbrInqBeginW(unsigned long GroupNameSyntax, RPC_WSTR GroupName, unsigned long MemberNameSyntax, RPC_NS_HANDLE __RPC_FAR *InquiryContext);
RPCNSAPI RPC_STATUS RPC_ENTRY RpcNsGroupMbrInqNextW(RPC_NS_HANDLE InquiryContext, RPC_WSTR __RPC_FAR *MemberName);
#endif
RPCNSAPI RPC_STATUS RPC_ENTRY RpcNsGroupMbrInqDone(RPC_NS_HANDLE __RPC_FAR *InquiryContext);
RPCNSAPI RPC_STATUS RPC_ENTRY RpcNsProfileDeleteA(unsigned long ProfileNameSyntax, RPC_CSTR ProfileName);
RPCNSAPI RPC_STATUS RPC_ENTRY RpcNsProfileEltAddA(unsigned long ProfileNameSyntax, RPC_CSTR ProfileName, RPC_IF_ID __RPC_FAR *IfId, unsigned long MemberNameSyntax, RPC_CSTR MemberName, unsigned long Priority, RPC_CSTR Annotation);
RPCNSAPI RPC_STATUS RPC_ENTRY RpcNsProfileEltRemoveA(unsigned long ProfileNameSyntax, RPC_CSTR ProfileName, RPC_IF_ID __RPC_FAR *IfId, unsigned long MemberNameSyntax, RPC_CSTR MemberName);
RPCNSAPI RPC_STATUS RPC_ENTRY RpcNsProfileEltInqBeginA(unsigned long ProfileNameSyntax, RPC_CSTR ProfileName, unsigned long InquiryType, RPC_IF_ID __RPC_FAR *IfId, unsigned long VersOption, unsigned long MemberNameSyntax, RPC_CSTR MemberName, RPC_NS_HANDLE __RPC_FAR *InquiryContext);
RPCNSAPI RPC_STATUS RPC_ENTRY RpcNsProfileEltInqNextA(RPC_NS_HANDLE InquiryContext, RPC_IF_ID __RPC_FAR *IfId, RPC_CSTR __RPC_FAR *MemberName, unsigned long __RPC_FAR *Priority, RPC_CSTR __RPC_FAR *Annotation);
#ifdef RPC_UNICODE_SUPPORTED
RPCNSAPI RPC_STATUS RPC_ENTRY RpcNsProfileDeleteW(unsigned long ProfileNameSyntax, RPC_WSTR ProfileName);
RPCNSAPI RPC_STATUS RPC_ENTRY RpcNsProfileEltAddW(unsigned long ProfileNameSyntax, RPC_WSTR ProfileName, RPC_IF_ID __RPC_FAR *IfId, unsigned long MemberNameSyntax, RPC_WSTR MemberName, unsigned long Priority, RPC_WSTR Annotation);
RPCNSAPI RPC_STATUS RPC_ENTRY RpcNsProfileEltRemoveW(unsigned long ProfileNameSyntax, RPC_WSTR ProfileName, RPC_IF_ID __RPC_FAR *IfId, unsigned long MemberNameSyntax, RPC_WSTR MemberName);
RPCNSAPI RPC_STATUS RPC_ENTRY RpcNsProfileEltInqBeginW(unsigned long ProfileNameSyntax, RPC_WSTR ProfileName, unsigned long InquiryType, RPC_IF_ID __RPC_FAR *IfId, unsigned long VersOption, unsigned long MemberNameSyntax, RPC_WSTR MemberName, RPC_NS_HANDLE __RPC_FAR *InquiryContext);
RPCNSAPI RPC_STATUS RPC_ENTRY RpcNsProfileEltInqNextW(RPC_NS_HANDLE InquiryContext, RPC_IF_ID __RPC_FAR *IfId, RPC_WSTR __RPC_FAR *MemberName, unsigned long __RPC_FAR *Priority, RPC_WSTR __RPC_FAR *Annotation);
#endif
RPCNSAPI RPC_STATUS RPC_ENTRY RpcNsProfileEltInqDone(RPC_NS_HANDLE __RPC_FAR *InquiryContext);
RPCNSAPI RPC_STATUS RPC_ENTRY RpcNsEntryObjectInqBeginA(unsigned long EntryNameSyntax, RPC_CSTR EntryName, RPC_NS_HANDLE __RPC_FAR *InquiryContext);
#ifdef RPC_UNICODE_SUPPORTED
RPCNSAPI RPC_STATUS RPC_ENTRY RpcNsEntryObjectInqBeginW(unsigned long EntryNameSyntax, RPC_WSTR EntryName, RPC_NS_HANDLE __RPC_FAR *InquiryContext);
#endif
RPCNSAPI RPC_STATUS RPC_ENTRY RpcNsEntryObjectInqNext(RPC_NS_HANDLE InquiryContext, UUID __RPC_FAR *ObjUuid);
RPCNSAPI RPC_STATUS RPC_ENTRY RpcNsEntryObjectInqDone(RPC_NS_HANDLE __RPC_FAR *InquiryContext);
RPCNSAPI RPC_STATUS RPC_ENTRY RpcNsEntryExpandNameA(unsigned long EntryNameSyntax, RPC_CSTR EntryName, RPC_CSTR __RPC_FAR *ExpandedName);
RPCNSAPI RPC_STATUS RPC_ENTRY RpcNsMgmtBindingUnexportA(unsigned long EntryNameSyntax, RPC_CSTR EntryName, RPC_IF_ID __RPC_FAR *IfId, unsigned long VersOption, UUID_VECTOR __RPC_FAR *ObjectUuidVec);
RPCNSAPI RPC_STATUS RPC_ENTRY RpcNsMgmtEntryCreateA(unsigned long EntryNameSyntax, RPC_CSTR EntryName);
RPCNSAPI RPC_STATUS RPC_ENTRY RpcNsMgmtEntryDeleteA(unsigned long EntryNameSyntax, RPC_CSTR EntryName);
RPCNSAPI RPC_STATUS RPC_ENTRY RpcNsMgmtEntryInqIfIdsA(unsigned long EntryNameSyntax, RPC_CSTR EntryName, RPC_IF_ID_VECTOR __RPC_FAR *__RPC_FAR *IfIdVec);
RPCNSAPI RPC_STATUS RPC_ENTRY RpcNsMgmtHandleSetExpAge(RPC_NS_HANDLE NsHandle, unsigned long ExpirationAge);
RPCNSAPI RPC_STATUS RPC_ENTRY RpcNsMgmtInqExpAge(unsigned long __RPC_FAR *ExpirationAge);
RPCNSAPI RPC_STATUS RPC_ENTRY RpcNsMgmtSetExpAge(unsigned long ExpirationAge);
#ifdef RPC_UNICODE_SUPPORTED
RPCNSAPI RPC_STATUS RPC_ENTRY RpcNsEntryExpandNameW(unsigned long EntryNameSyntax, RPC_WSTR EntryName, RPC_WSTR __RPC_FAR *ExpandedName);
RPCNSAPI RPC_STATUS RPC_ENTRY RpcNsMgmtBindingUnexportW(unsigned long EntryNameSyntax, RPC_WSTR EntryName, RPC_IF_ID __RPC_FAR *IfId, unsigned long VersOption, UUID_VECTOR __RPC_FAR *ObjectUuidVec);
RPCNSAPI RPC_STATUS RPC_ENTRY RpcNsMgmtEntryCreateW(unsigned long EntryNameSyntax, RPC_WSTR EntryName);
RPCNSAPI RPC_STATUS RPC_ENTRY RpcNsMgmtEntryDeleteW(unsigned long EntryNameSyntax, RPC_WSTR EntryName);
RPCNSAPI RPC_STATUS RPC_ENTRY RpcNsMgmtEntryInqIfIdsW(unsigned long EntryNameSyntax, RPC_WSTR EntryName, RPC_IF_ID_VECTOR __RPC_FAR *__RPC_FAR *IfIdVec);
#endif
RPCNSAPI RPC_STATUS RPC_ENTRY RpcNsBindingImportBeginA(unsigned long EntryNameSyntax, RPC_CSTR EntryName, RPC_IF_HANDLE IfSpec, UUID __RPC_FAR *ObjUuid, RPC_NS_HANDLE __RPC_FAR *ImportContext);
#ifdef RPC_UNICODE_SUPPORTED
RPCNSAPI RPC_STATUS RPC_ENTRY RpcNsBindingImportBeginW(unsigned long EntryNameSyntax, RPC_WSTR EntryName, RPC_IF_HANDLE IfSpec, UUID __RPC_FAR *ObjUuid, RPC_NS_HANDLE __RPC_FAR *ImportContext);
#endif
RPCNSAPI RPC_STATUS RPC_ENTRY RpcNsBindingImportNext(RPC_NS_HANDLE ImportContext, RPC_BINDING_HANDLE __RPC_FAR *Binding);
RPCNSAPI RPC_STATUS RPC_ENTRY RpcNsBindingImportDone(RPC_NS_HANDLE __RPC_FAR *ImportContext);
RPCNSAPI RPC_STATUS RPC_ENTRY RpcNsBindingSelect(RPC_BINDING_VECTOR __RPC_FAR *BindingVec, RPC_BINDING_HANDLE __RPC_FAR *Binding);
#ifdef UNICODE
#define RpcNsBindingLookupBegin RpcNsBindingLookupBeginW
#define RpcNsBindingImportBegin RpcNsBindingImportBeginW
#define RpcNsBindingExport RpcNsBindingExportW
#define RpcNsBindingUnexport RpcNsBindingUnexportW
#define RpcNsGroupDelete RpcNsGroupDeleteW
#define RpcNsGroupMbrAdd RpcNsGroupMbrAddW
#define RpcNsGroupMbrRemove RpcNsGroupMbrRemoveW
#define RpcNsGroupMbrInqBegin RpcNsGroupMbrInqBeginW
#define RpcNsGroupMbrInqNext RpcNsGroupMbrInqNextW
#define RpcNsEntryExpandName RpcNsEntryExpandNameW
#define RpcNsEntryObjectInqBegin RpcNsEntryObjectInqBeginW
#define RpcNsMgmtBindingUnexport RpcNsMgmtBindingUnexportW
#define RpcNsMgmtEntryCreate RpcNsMgmtEntryCreateW
#define RpcNsMgmtEntryDelete RpcNsMgmtEntryDeleteW
#define RpcNsMgmtEntryInqIfIds RpcNsMgmtEntryInqIfIdsW
#define RpcNsProfileDelete RpcNsProfileDeleteW
#define RpcNsProfileEltAdd RpcNsProfileEltAddW
#define RpcNsProfileEltRemove RpcNsProfileEltRemoveW
#define RpcNsProfileEltInqBegin RpcNsProfileEltInqBeginW
#define RpcNsProfileEltInqNext RpcNsProfileEltInqNextW
#define RpcNsBindingExportPnP RpcNsBindingExportPnPW
#define RpcNsBindingUnexportPnP RpcNsBindingUnexportPnPW
#else
#define RpcNsBindingLookupBegin RpcNsBindingLookupBeginA
#define RpcNsBindingImportBegin RpcNsBindingImportBeginA
#define RpcNsBindingExport RpcNsBindingExportA
#define RpcNsBindingUnexport RpcNsBindingUnexportA
#define RpcNsGroupDelete RpcNsGroupDeleteA
#define RpcNsGroupMbrAdd RpcNsGroupMbrAddA
#define RpcNsGroupMbrRemove RpcNsGroupMbrRemoveA
#define RpcNsGroupMbrInqBegin RpcNsGroupMbrInqBeginA
#define RpcNsGroupMbrInqNext RpcNsGroupMbrInqNextA
#define RpcNsEntryExpandName RpcNsEntryExpandNameA
#define RpcNsEntryObjectInqBegin RpcNsEntryObjectInqBeginA
#define RpcNsMgmtBindingUnexport RpcNsMgmtBindingUnexportA
#define RpcNsMgmtEntryCreate RpcNsMgmtEntryCreateA
#define RpcNsMgmtEntryDelete RpcNsMgmtEntryDeleteA
#define RpcNsMgmtEntryInqIfIds RpcNsMgmtEntryInqIfIdsA
#define RpcNsProfileDelete RpcNsProfileDeleteA
#define RpcNsProfileEltAdd RpcNsProfileEltAddA
#define RpcNsProfileEltRemove RpcNsProfileEltRemoveA
#define RpcNsProfileEltInqBegin RpcNsProfileEltInqBeginA
#define RpcNsProfileEltInqNext RpcNsProfileEltInqNextA
#define RpcNsBindingExportPnP RpcNsBindingExportPnPA
#define RpcNsBindingUnexportPnP RpcNsBindingUnexportPnPA
#endif
#endif
