/*+@@file@@----------------------------------------------------------------*//*!
 \file		FrQuery.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 10 18:13:20 2016
 \date		Modified on Sun Jul 10 18:13:20 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _FRAMEWORK_QUERY_H_
#define _FRAMEWORK_QUERY_H_
#if __POCC__ >= 500
#pragma once
#endif
#pragma message("C++ Only!")
#if 0
#include <stdio.h>
#include <sql_1.h>
#include <comdef.h>
#include <vector>
class POLARITY CFrameworkQuery
{
public
    CFrameworkQuery();
    ~CFrameworkQuery();
    bool IsPropertyRequired(LPCWSTR propName);
    BSTR GetQueryClassName(void) { return SysAllocString(m_bstrtClassName); }
    HRESULT GetValuesForProp(LPCWSTR wszPropName, CHStringArray& achNames);
    HRESULT GetValuesForProp(LPCWSTR wszPropName, std::vector<_bstr_t>& vectorNames);
    void GetRequiredProperties(CHStringArray &saProperties);
    bool AllPropertiesAreRequired(void) { return (m_csaPropertiesRequired.GetSize() == 0); }
    bool KeysOnly(void) { return m_bKeysOnly; }
    const CHString &GetQuery() ;
    HRESULT Init(
        
        const BSTR bstrQueryFormat, 
        const BSTR bstrQuery, 
        long lFlags,
        CHString &sNamespace
    );
    HRESULT Init(
        ParsedObjectPath *pParsedObjectPath, 
        IWbemContext *pCtx, 
        LPCWSTR lpwszClassName,
        CHString &sNamespace
    );
    void Init2(IWbemClassObject *IClass);
protected
    SQL_LEVEL_1_RPN_EXPRESSION *m_pLevel1RPNExpression;
    CHStringArray m_csaPropertiesRequired;
    enum QueryTypes{eUnknown, eWQLCommand, eContextObject} m_QueryType;
    DWORD IsInList(const CHStringArray &csaArray, LPCWSTR pwszValue);
    BOOL IsReference(LPCWSTR lpwszPropertyName);
    const CHString &GetNamespace();
private
    CHString m_sNamespace;
    long m_lFlags;
    IWbemClassObject *m_IClass;
    CHString m_sQueryFormat;
    void Reset(void);
    bool m_bKeysOnly;
    bool m_AddKeys;
    CHString m_sQuery;
    bstr_t m_bstrtClassName;
};
#endif
#endif
