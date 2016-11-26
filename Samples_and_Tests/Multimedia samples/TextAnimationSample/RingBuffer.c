/*+@@file@@----------------------------------------------------------------*//*!
 \file		RingBuffer.c
 \par Description 
            
 \par  Status: 
            
 \par Project: 
            
 \date		Created  on Wed Nov 16 12:31:54 2016
 \date		Modified on Wed Nov 16 12:31:54 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#include <windows.h>
#include <assert.h>
#include "RingBuffer.h"

void RingBufferAdd(RingBuffer *this, LONGLONG element)
{
	this->m_elements[(this->m_start + this->m_count) % maxElements] = element;

	if (this->m_count < maxElements)
	{
		this->m_count++;
	}
	else
	{
		this->m_start = (this->m_start + 1) % maxElements;
	}
}

LONGLONG RingBufferGetFirst(RingBuffer *this)
{
	assert(this->m_count > 0);

	return this->m_elements[this->m_start];
}

LONGLONG RingBufferGetLast(RingBuffer *this)
{
	assert(this->m_count > 0);

	return this->m_elements[(this->m_start + this->m_count - 1) % maxElements];
}

LONGLONG RingBufferGetCount(RingBuffer *this)
{
	return this->m_count;
}

void RingBufferReset(RingBuffer *this)
{
	this->m_start = 0;
	this->m_count = 0;
}
