/*+@@file@@----------------------------------------------------------------*//*!
 \file		RefPtrCo.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 10 22:22:23 2016
 \date		Modified on Sun Jul 10 22:22:23 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef __REFPTRCOLLECTION_H__
#define __REFPTRCOLLECTION_H__
#if __POCC__ >= 500
#pragma once
#endif
#include <chptrarr.h>
typedef	DWORD	REFPTRCOLLECTION_POSITION;
#define	REFPTRCOLLECTION_START	0xFFFFFFFF;
#if 0
template <class TYPED_PTR> class TRefPointerCollection : public CThreadBase
{
public
	TRefPointerCollection();
	~TRefPointerCollection();
    TRefPointerCollection(const TRefPointerCollection& trpc);
	BOOL	Add( TYPED_PTR* ptr );
	BOOL		BeginEnum( REFPTRCOLLECTION_POSITION& pos );
	TYPED_PTR*	GetNext( REFPTRCOLLECTION_POSITION& pos );
	void		EndEnum( void );
	void		Empty( void );
    int         GetSize( void ) const;
protected
	const TRefPointerCollection<TYPED_PTR>& Copy( const TRefPointerCollection<TYPED_PTR>& );
private
	CHPtrArray		m_ptrArray;
};
template <class TYPED_PTR>
TRefPointerCollection<TYPED_PTR>::TRefPointerCollection( void )
:	CThreadBase(),
	m_ptrArray()
{
}
template <class TYPED_PTR>
TRefPointerCollection<TYPED_PTR>::~TRefPointerCollection( void )
{
	Empty();
}
template <class TYPED_PTR>
TRefPointerCollection<TYPED_PTR>::TRefPointerCollection(
    const TRefPointerCollection& trpc)
{
    Copy(trpc);	
}
template <class TYPED_PTR>
BOOL TRefPointerCollection<TYPED_PTR>::Add( TYPED_PTR* ptr )
{
	BOOL	fReturn = FALSE;
	if ( NULL != ptr )
	{
		if ( BeginWrite() )
		{
            try
            {
			    ptr->AddRef();
			    if ( m_ptrArray.Add( (void*) ptr ) >= 0 )
			    {
				    fReturn = TRUE;
			    }
			    else
			    {
				    ptr->Release();
			    }
            }
            catch ( CHeap_Exception& )
            {
    	        EndWrite() ;
                throw;
            }
            catch ( CFramework_Exception& e_FR )
            {
    	        EndWrite() ;
                throw;
            }
			EndWrite();
		}
	}
	return fReturn;
}
template <class TYPED_PTR>
BOOL TRefPointerCollection<TYPED_PTR>::BeginEnum( REFPTRCOLLECTION_POSITION& pos )
{
	BOOL	fReturn	=	FALSE;
	if ( BeginRead() )
	{
		pos = REFPTRCOLLECTION_START;
		fReturn = TRUE;
	}
	return fReturn;
}
template <class TYPED_PTR>
void TRefPointerCollection<TYPED_PTR>::EndEnum( void )
{
	EndRead();
}
template <class TYPED_PTR>
TYPED_PTR* TRefPointerCollection<TYPED_PTR>::GetNext( REFPTRCOLLECTION_POSITION& pos )
{
	TYPED_PTR*	ptr = NULL;
	if ( BeginRead() )
	{
		if ( ++pos < (DWORD) m_ptrArray.GetSize() )
		{
			ptr = (TYPED_PTR*) m_ptrArray.GetAt( pos );
			if ( NULL != ptr )
			{
				ptr->AddRef();
			}
		}
		EndRead();
	}
	return ptr;
}
template <class TYPED_PTR>
void TRefPointerCollection<TYPED_PTR>::Empty( void )
{
	BeginWrite();
    try
    {
	    int	nSize	=	m_ptrArray.GetSize();
	    if ( nSize > 0 )
	    {
		    TYPED_PTR*	ptr		=	NULL;
		    for ( int nCtr = 0; nCtr < nSize; nCtr++ )
		    {
			    ptr = (TYPED_PTR*) m_ptrArray[nCtr];
			    if ( NULL != ptr )
			    {
				    ptr->Release();
			    }
		    }
		    m_ptrArray.RemoveAll();
	    }
    }
    catch ( CHeap_Exception& )
    {
    	EndWrite() ;
        throw;
    }
    catch ( CFramework_Exception& e_FR )
    {
        EndWrite() ;
        throw;
    }
	EndWrite();
}
template <class TYPED_PTR>
const TRefPointerCollection<TYPED_PTR>& TRefPointerCollection<TYPED_PTR>::Copy( const TRefPointerCollection<TYPED_PTR>& collection )
{
	BeginWrite();
    try
    {
	    Empty();
	    int	nSize = collection.m_ptrArray.GetSize();
	    for ( int nCount = 0; nCount < nSize; nCount++ )
	    {
		    TYPED_PTR*	ptr = (TYPED_PTR*) collection.m_ptrArray[nCount];
		    Add( ptr );
	    }
    }
    catch ( CHeap_Exception& )
    {
    	EndWrite() ;
        throw;
    }
    catch ( CFramework_Exception& e_FR )
    {
        EndWrite() ;
        throw;
    }
	EndWrite();
	return *this;
}
template <class TYPED_PTR>
int TRefPointerCollection<TYPED_PTR>::GetSize(void) const
{
    return m_ptrArray.GetSize();
}
#endif
#endif
