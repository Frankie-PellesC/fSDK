/*+@@file@@----------------------------------------------------------------*//*!
 \file		StlLock.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 10 22:05:11 2016
 \date		Modified on Sun Jul 10 22:05:11 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _STLLOCK_H_
#define _STLLOCK_H_
#if __POCC__ >= 500
#pragma once
#endif
#if 0
class CCritSec : public CRITICAL_SECTION
{
public
    CCritSec() 
    {
        InitializeCriticalSection(this);
    }
    ~CCritSec()
    {
        DeleteCriticalSection(this);
    }
    void Enter()
    {
        EnterCriticalSection(this);
    }
    void Leave()
    {
        LeaveCriticalSection(this);
    }
};
#endif
#endif
