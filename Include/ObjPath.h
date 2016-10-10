/*+@@file@@----------------------------------------------------------------*//*!
 \file		ObjPath.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 10 22:10:04 2016
 \date		Modified on Sun Jul 10 22:10:04 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _OBJPATH_H_
#define _OBJPATH_H_
#if __POCC__ >= 500
#pragma once
#endif
#include <opathlex.h>
#define DELETE_ME
#if 0
struct KeyRef
{
    LPWSTR  m_pName;
    VARIANT m_vValue;
    HRESULT m_hRes;
    KeyRef();
    KeyRef(LPCWSTR wszKeyName, const VARIANT* pvValue);
   ~KeyRef();
    BOOL IsValid(){  return (m_pName && (S_OK == m_hRes)); };
};
struct ParsedObjectPath
{
    LPWSTR      m_pServer;
    DWORD       m_dwNumNamespaces;
    DWORD       m_dwAllocNamespaces;
    LPWSTR     *m_paNamespaces;
    LPWSTR      m_pClass;
    DWORD       m_dwNumKeys;
    DWORD       m_dwAllocKeys;
    KeyRef    **m_paKeys;
    BOOL        m_bSingletonObj;
    ParsedObjectPath();
   ~ParsedObjectPath();
public
    BOOL SetClassName(LPCWSTR wszClassName);
    BOOL AddKeyRef(LPCWSTR wszKeyName, const VARIANT* pvValue);
    BOOL AddKeyRef(KeyRef* pAcquireRef);
    BOOL AddKeyRefEx(LPCWSTR wszKeyName, const VARIANT* pvValue);
    BOOL AddNamespace(LPCWSTR wszNamespace);
    LPWSTR GetKeyString();
    LPWSTR GetNamespacePart();
    LPWSTR GetParentNamespacePart();
    void ClearKeys () ;
    BOOL IsRelative(LPCWSTR wszMachine, LPCWSTR wszNamespace);
    BOOL IsLocal(LPCWSTR wszMachine);
    BOOL IsClass();
    BOOL IsInstance();
    BOOL IsObject();
    BOOL IsValid()
    {
        return (m_paNamespaces && m_paKeys);
    };
    
};
#endif
typedef enum
{
    e_ParserAcceptRelativeNamespace,
    e_ParserAbsoluteNamespaceOnly,
    e_ParserAcceptAll
} ObjectParserFlags;
#if 0
class CObjectPathParser
{
    LPWSTR m_pInitialIdent;
    int m_nCurrentToken;
    CGenLexer *m_pLexer;
    ParsedObjectPath *m_pOutput;
    KeyRef *m_pTmpKeyRef;
    
    ObjectParserFlags m_eFlags;
private
    void Zero();
    void Empty();
    int begin_parse();
    int ns_or_server();
    int ns_or_class();
    int objref();
    int ns_list();
    int ident_becomes_ns();
    int ident_becomes_class();
    int objref_rest();
    int ns_list_rest();
    int key_const();
    int keyref_list();
    int keyref();
    int keyref_term();
    int propname();    
    int optional_objref();
    int NextToken();
public
    enum { NoError, SyntaxError, InvalidParameter, OutOfMemory };
    CObjectPathParser(ObjectParserFlags eFlags = e_ParserAbsoluteNamespaceOnly);
   ~CObjectPathParser();
    int Parse(
        LPCWSTR RawPath,
        ParsedObjectPath **pOutput
        );
    static int WINAPI Unparse(
        ParsedObjectPath* pInput,
        DELETE_ME LPWSTR* pwszPath);
    static LPWSTR WINAPI GetRelativePath(LPWSTR wszFullPath);
    void Free(ParsedObjectPath *pOutput);
    void Free(LPWSTR wszUnparsedPath );
};
#endif
#endif
