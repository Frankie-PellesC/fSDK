/*+@@file@@----------------------------------------------------------------*//*!
 \file		icrsint.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul 16 19:38:35 2016
 \date		Modified on Sat Jul 16 19:38:35 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _ICRSINT_H_
#define _ICRSINT_H_
#if __POCC__ >= 500
#pragma once
#endif
#include <olectl.h>
#include <stddef.h>
#pragma message ("Warning C++ definitions!")
#if 0
class CADORecordBinding;
#define classoffset(base, derived) ((DWORD_PTR)(static_cast<base*>((derived*)8))-8)
enum ADOFieldStatusEnum
{	
	adFldOK = 0,
	adFldBadAccessor = 1,
	adFldCantConvertValue = 2,
	adFldNull = 3,
	adFldTruncated = 4,
	adFldSignMismatch = 5,
	adFldDataOverFlow = 6,
	adFldCantCreate = 7,
	adFldUnavailable = 8,
	adFldPermissionDenied = 9,
	adFldIntegrityViolation = 10,
	adFldSchemaViolation = 11,
	adFldBadStatus = 12,
	adFldDefault = 13
};
typedef struct stADO_BINDING_ENTRY
{
	ULONG_PTR		ulOrdinal;
    WORD			wDataType;
	BYTE			bPrecision;
	BYTE			bScale;
	ULONG_PTR		ulSize;
	ULONG_PTR		ulBufferOffset;
	ULONG_PTR		ulStatusOffset;
	ULONG_PTR		ulLengthOffset;
	ULONG_PTR		ulADORecordBindingOffSet;
	BOOL			fModify;
} ADO_BINDING_ENTRY;
#define BEGIN_ADO_BINDING(cls) public: \
	typedef cls ADORowClass; \
	const ADO_BINDING_ENTRY* STDMETHODCALLTYPE GetADOBindingEntries() { \
	static const ADO_BINDING_ENTRY rgADOBindingEntries[] = {
#define ADO_FIXED_LENGTH_ENTRY(Ordinal, DataType, Buffer, Status, Modify)\
	{Ordinal, \
	DataType, \
	0, \
	0, \
	0, \
	offsetof(ADORowClass, Buffer), \
	offsetof(ADORowClass, Status), \
	0, \
	classoffset(CADORecordBinding, ADORowClass), \
	Modify},
#define ADO_FIXED_LENGTH_ENTRY2(Ordinal, DataType, Buffer, Modify)\
	{Ordinal, \
	DataType, \
	0, \
	0, \
	0, \
	offsetof(ADORowClass, Buffer), \
	0, \
	0, \
	classoffset(CADORecordBinding, ADORowClass), \
	Modify},
#define ADO_NUMERIC_ENTRY(Ordinal, DataType, Buffer, Precision, Scale, Status, Modify)\
	{Ordinal, \
	DataType, \
	Precision, \
	Scale, \
	0, \
	offsetof(ADORowClass, Buffer), \
	offsetof(ADORowClass, Status), \
	0, \
	classoffset(CADORecordBinding, ADORowClass), \
	Modify},
#define ADO_NUMERIC_ENTRY2(Ordinal, DataType, Buffer, Precision, Scale, Modify)\
	{Ordinal, \
	DataType, \
	Precision, \
	Scale, \
	0, \
	offsetof(ADORowClass, Buffer), \
	0, \
	0, \
	classoffset(CADORecordBinding, ADORowClass), \
	Modify},
#define ADO_VARIABLE_LENGTH_ENTRY(Ordinal, DataType, Buffer, Size, Status, Length, Modify)\
	{Ordinal, \
	DataType, \
	0, \
	0, \
	Size, \
	offsetof(ADORowClass, Buffer), \
	offsetof(ADORowClass, Status), \
	offsetof(ADORowClass, Length), \
	classoffset(CADORecordBinding, ADORowClass), \
	Modify},
#define ADO_VARIABLE_LENGTH_ENTRY2(Ordinal, DataType, Buffer, Size, Status, Modify)\
	{Ordinal, \
	DataType, \
	0, \
	0, \
	Size, \
	offsetof(ADORowClass, Buffer), \
	offsetof(ADORowClass, Status), \
	0, \
	classoffset(CADORecordBinding, ADORowClass), \
	Modify},
#define ADO_VARIABLE_LENGTH_ENTRY3(Ordinal, DataType, Buffer, Size, Length, Modify)\
	{Ordinal, \
	DataType, \
	0, \
	0, \
	Size, \
	offsetof(ADORowClass, Buffer), \
	0, \
	offsetof(ADORowClass, Length), \
	classoffset(CADORecordBinding, ADORowClass), \
	Modify},
#define ADO_VARIABLE_LENGTH_ENTRY4(Ordinal, DataType, Buffer, Size, Modify)\
	{Ordinal, \
	DataType, \
	0, \
	0, \
	Size, \
	offsetof(ADORowClass, Buffer), \
	0, \
	0, \
	classoffset(CADORecordBinding, ADORowClass), \
	Modify},
#define END_ADO_BINDING()   {0, adEmpty, 0, 0, 0, 0, 0, 0, 0, FALSE}};\
	return rgADOBindingEntries;}
class CADORecordBinding
{
public
	STDMETHOD_(const ADO_BINDING_ENTRY*, GetADOBindingEntries) (VOID);
};
struct __declspec(uuid("00000544-0000-0010-8000-00aa006d2ea4")) IADORecordBinding;
DECLARE_INTERFACE_(IADORecordBinding, IUnknown)
{
public
	STDMETHOD(BindToRecordset) (CADORecordBinding *pAdoRecordBinding);
	STDMETHOD(AddNew) (CADORecordBinding *pAdoRecordBinding);
	STDMETHOD(Update) (CADORecordBinding *pAdoRecordBinding);
};
#endif
#endif
