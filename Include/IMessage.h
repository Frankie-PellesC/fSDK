/*+@@file@@----------------------------------------------------------------*//*!
 \file		IMessage.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul 16 21:36:19 2016
 \date		Modified on Sat Jul 16 21:36:19 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _IMESSAGE_H_
#define _IMESSAGE_H_
#if __POCC__ >= 500
#pragma once
#endif
typedef struct _MSGSESS		FAR * LPMSGSESS;
typedef void (STDAPICALLTYPE MSGCALLRELEASE) (ULONG ulCallerData, LPMESSAGE lpMessage);
STDAPI_(SCODE)OpenIMsgSession(LPMALLOC lpMalloc, ULONG ulFlags, LPMSGSESS FAR * lppMsgSess);
STDAPI_(void) CloseIMsgSession(LPMSGSESS lpMsgSess);
STDAPI_(SCODE)OpenIMsgOnIStg(LPMSGSESS lpMsgSess, LPALLOCATEBUFFER lpAllocateBuffer, LPALLOCATEMORE lpAllocateMore, LPFREEBUFFER lpFreeBuffer, LPMALLOC lpMalloc, LPVOID lpMapiSup, LPSTORAGE lpStg, MSGCALLRELEASE FAR * lpfMsgCallRelease, ULONG ulCallerData, ULONG ulFlags, LPMESSAGE FAR * lppMsg);
#define IMSG_NO_ISTG_COMMIT		((ULONG) 0x00000001)
#define PROPATTR_MANDATORY		((ULONG) 0x00000001)
#define PROPATTR_READABLE		((ULONG) 0x00000002)
#define PROPATTR_WRITEABLE		((ULONG) 0x00000004)
#define PROPATTR_NOT_PRESENT	((ULONG) 0x00000008)
typedef struct _SPropAttrArray
{
	ULONG	cValues;							
	ULONG	aPropAttr[MAPI_DIM];
} SPropAttrArray, FAR * LPSPropAttrArray;
#define CbNewSPropAttrArray(_cattr)	(offsetof(SPropAttrArray,aPropAttr) + (_cattr)*sizeof(ULONG))
#define CbSPropAttrArray(_lparray)	(offsetof(SPropAttrArray,aPropAttr) + (UINT)((_lparray)->cValues)*sizeof(ULONG))
#define SizedSPropAttrArray(_cattr, _name)											\
												struct _SPropAttrArray_ ## _name	\
												{									\
													ULONG	cValues;				\
													ULONG	aPropAttr[_cattr];		\
												} _name
STDAPI GetAttribIMsgOnIStg(LPVOID lpObject, LPSPropTagArray lpPropTagArray, LPSPropAttrArray FAR *lppPropAttrArray);
STDAPI SetAttribIMsgOnIStg(LPVOID lpObject, LPSPropTagArray lpPropTags, LPSPropAttrArray lpPropAttrs, LPSPropProblemArray FAR *lppPropProblems);
STDAPI_(SCODE)MapStorageSCode(SCODE StgSCode);
#endif
