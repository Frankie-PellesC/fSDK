/*+@@file@@----------------------------------------------------------------*//*!
 \file		RingBuffer.h
 \par Description 
            
 \par  Status: 
            
 \par Project: 
            
 \date		Created  on Wed Nov 16 12:31:59 2016
 \date		Modified on Wed Nov 16 12:31:59 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#pragma once

#define maxElements 10

typedef struct
{
    UINT     m_start;
    UINT     m_count;
    LONGLONG m_elements[maxElements];
} RingBuffer;

void     RingBufferAdd(RingBuffer *this, LONGLONG element);
LONGLONG RingBufferGetFirst(RingBuffer *this);
LONGLONG RingBufferGetLast(RingBuffer *this);
LONGLONG RingBufferGetCount(RingBuffer *this);
void     RingBufferReset(RingBuffer *this);
