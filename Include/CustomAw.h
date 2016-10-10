/*+@@file@@----------------------------------------------------------------*//*!
 \file		CustomAw.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Jul  4 18:56:58 2016
 \date		Modified on Mon Jul  4 18:56:58 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __CUSTOMAW_H__
#define __CUSTOMAW_H__
#if __POCC__ >= 500
#pragma once
#endif
#error Only C++!!
#if 0
#pragma comment(lib, "mfcapwz.lib")
class CAppWizStepDlg : public CDialog
{
public
	CAppWizStepDlg(UINT nIDTemplate);
	~CAppWizStepDlg();
	virtual BOOL OnDismiss();
    virtual BOOL PreTranslateMessage(MSG* pMsg);
	virtual BOOL Create(UINT nIDTemplate, CWnd* pParentWnd = NULL);
	UINT m_nIDTemplate;
};
class OutputStream
{
public
    virtual void WriteLine(LPCTSTR lpsz) = 0;
    virtual void WriteBlock(LPCTSTR pBlock, DWORD dwSize) = 0;
};
class CCustomAppWiz : public CObject
{
public
	CMapStringToString m_Dictionary;
	virtual void GetPlatforms(CStringList& rPlatforms) {}
	virtual CAppWizStepDlg* Next(CAppWizStepDlg* pDlg) { return NULL; }
	virtual CAppWizStepDlg* Back(CAppWizStepDlg* pDlg) { return NULL; }
	virtual void InitCustomAppWiz() { m_Dictionary.RemoveAll(); }
	virtual void ExitCustomAppWiz() {}
	virtual LPCTSTR LoadTemplate(LPCTSTR lpszTemplateName,
		DWORD& rdwSize, HINSTANCE hInstance = NULL);
	virtual void CopyTemplate(LPCTSTR lpszInput, DWORD dwSize, OutputStream* pOutput);
	virtual void ProcessTemplate(LPCTSTR lpszInput, DWORD dwSize, OutputStream* pOutput);
	virtual void PostProcessTemplate(LPCTSTR szTemplate) {}
};
enum AppWizDlgID
{
	APWZDLG_APPTYPE = 1,
	APWZDLG_DATABASE,
	APWZDLG_OLE,
	APWZDLG_DOCAPPOPTIONS,
	APWZDLG_PROJOPTIONS,
	APWZDLG_CLASSES,
	APWZDLG_DLGAPPOPTIONS,
	APWZDLG_DLLPROJOPTIONS,
};
void SetCustomAppWizClass(CCustomAppWiz* pAW);
CAppWizStepDlg* GetDialog(AppWizDlgID nID);
void SetNumberOfSteps(int nSteps);
BOOL ScanForAvailableLanguages(CStringList& rLanguages);
void SetSupportedLanguages(LPCTSTR szSupportedLangs);
#endif
#endif


