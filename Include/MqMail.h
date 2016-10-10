/*+@@file@@----------------------------------------------------------------*//*!
 \file		MqMail.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Aug  7 22:53:10 2016
 \date		Modified on Sun Aug  7 22:53:10 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _MQMAIL_H
#define _MQMAIL_H
#if __POCC__ >= 500
#pragma once
#endif
#include <windows.h>
#include <windowsx.h>
#include <ole2.h>
DEFINE_GUID(CLSID_MQMailQueueType, 0x5eadc0d0, 0x7182, 0x11cf, 0xa8, 0xff, 0x00, 0x20, 0xaf, 0xb8, 0xfb, 0x50);
typedef enum MQMailRecipType_enum
{
	MQMailRecip_TO,
	MQMailRecip_CC,
	MQMailRecip_BCC,
} MQMailRecipType;
typedef struct MQMailRecip_tag
{
	LPSTR			szName;
	LPSTR			szQueueLabel;
	LPSTR			szAddress;
	MQMailRecipType iType;
	LPFILETIME		pftDeliveryTime;
	LPSTR			szNonDeliveryReason;
} MQMailRecip, FAR * LPMQMailRecip;
typedef struct MQMailRecipList_tag
{
	ULONG cRecips;
	LPMQMailRecip FAR * apRecip;
} MQMailRecipList, FAR * LPMQMailRecipList;
typedef enum MQMailFormFieldType_enum
{
	MQMailFormField_BOOL,
	MQMailFormField_STRING,
	MQMailFormField_LONG,
	MQMailFormField_CURRENCY,
	MQMailFormField_DOUBLE,
} MQMailFormFieldType;
typedef union MQMailFormFieldData_tag
{
	BOOL	b;
	LPSTR	lpsz;
	LONG	l;
	CY		cy;
	double	dbl;
} MQMailFormFieldData, FAR * LPMQMailFormFieldData;
typedef struct MQMailFormField_tag
{
	LPSTR						szName;
	MQMailFormFieldType			iType;
	MQMailFormFieldData			Value;
} MQMailFormField, FAR * LPMQMailFormField;
typedef struct MQMailFormFieldList_tag
{
	ULONG cFields;
	LPMQMailFormField FAR * apField;
} MQMailFormFieldList, FAR * LPMQMailFormFieldList;
typedef enum MQMailEMailType_enum
{
	MQMailEMail_MESSAGE,
	MQMailEMail_FORM,
	MQMailEMail_TNEF,
	MQMailEMail_DELIVERY_REPORT,
	MQMailEMail_NON_DELIVERY_REPORT,
} MQMailEMailType;
typedef struct MQMailMessageData_tag
{
	LPSTR			szText;
} MQMailMessageData, FAR * LPMQMailMessageData;
typedef struct MQMailFormData_tag
{
	LPSTR					szName;
	LPMQMailFormFieldList	pFields;
} MQMailFormData, FAR * LPMQMailFormData;
typedef struct MQMailTnefData_tag
{
	ULONG	cbData;
	LPBYTE	lpbData;
} MQMailTnefData, FAR * LPMQMailTnefData;
typedef struct MQMailDeliveryReportData_tag
{
	LPMQMailRecipList	pDeliveredRecips;
	LPSTR				szOriginalSubject;
	LPFILETIME			pftOriginalDate;
} MQMailDeliveryReportData, FAR * LPMQMailDeliveryReportData;
typedef struct MQMailEMail_tag MQMailEMail, FAR * LPMQMailEMail;
typedef struct MQMailNonDeliveryReportData_tag
{
	LPMQMailRecipList	pNonDeliveredRecips;
	LPMQMailEMail		pOriginalEMail;
} MQMailNonDeliveryReportData, FAR * LPMQMailNonDeliveryReportData;
typedef struct MQMailEMail_tag
{
	LPMQMailRecip		pFrom;
	LPSTR				szSubject;
	BOOL				fRequestDeliveryReport;
	BOOL				fRequestNonDeliveryReport;
	LPFILETIME			pftDate;
	LPMQMailRecipList	pRecips;
	MQMailEMailType		iType;
	union
	{
		MQMailFormData		form;
		MQMailMessageData	message;
		MQMailTnefData		tnef;
		MQMailDeliveryReportData	DeliveryReport;
		MQMailNonDeliveryReportData NonDeliveryReport;
	};
	LPVOID				pReserved;
} MQMailEMail, FAR * LPMQMailEMail;
STDAPI MQMailComposeBody(LPMQMailEMail pEMail, ULONG FAR *pcbBuffer, LPBYTE FAR *ppbBuffer);
STDAPI MQMailParseBody(ULONG cbBuffer, LPBYTE pbBuffer, LPMQMailEMail FAR *ppEMail);
STDAPI_(void) MQMailFreeMemory(LPVOID lpBuffer);
#endif
