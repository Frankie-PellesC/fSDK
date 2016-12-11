/*+@@file@@----------------------------------------------------------------*//*!
 \file		Handles.c
 \par Description 
            Using handles as direct pointers to memory data is dangerous 
            because you can't determine easily if the value is correct and 
            safe to use.
            Safe handles use a mechanism that allows to identify each 
            handle and protectsdata memory.
 \par  Status: 
            
 \par Project: 
            Safe Handles
 \date		Created  on Wed Dec 31 00:24:20 2014
 \date		Modified on Wed Dec 31 00:24:20 2014
 \author	Frankie
\*//*-@@file@@----------------------------------------------------------------*/
#include <windows.h>
#include <stdio.h>
#include <assert.h>
#include "SafeHndlCfg.h"
#include "SafeHandles.h"

#ifdef SH_DLL
#define SH_ATTR __declspec(dllexport)
#endif

#define _SH_NORET __declspec(noreturn)

#pragma message ("SafeHandles: Compiling for" xstr(SAFEHANDLEHDRSIZE) " bits Machine.")
#pragma message ("SafeHandles: Max limit for handle entries = " xstr(SAFEHANDLEMAXENTRYBITS) ".")
#pragma message ("SafeHandles: Max limit for types = " xstr(SAFEHANDLEMAXTYPEBITS) ".")

/*! \mainpage  SafeHandles
 *	Introduction
 *	============
 *	Safe handles are the step ahead for programmers who needs to create private memory structures that could be
 *	referenced by a unique value: the handle.
 *	This process is tipically deployed using as handle the base address of the memory reference block. While this
 *	technique is efficient for simple programs it has many limits when used in complex applications where the memory or
 *	data corruption is an issue. The simple use of memory addresse can lead to different kinds of failures:
 *		- The user have a memory address that can be used to access and corrupt the data voluntarily or unvoluntarily.
 *		- If the handle is destroyed and data released the user can still try to access or reuse data, leading to memory
 *		  access exceptions.
 *		- Due to reuse of released memory, different handles can share the same value of a no more existent handle.
 *		- The data is exposed, for sensible data no privacy is allowed.
 *
 *	Safe handles uses a table of corrispondence handle->data memory pointer, so the handle is an 'handle' not a memory address.
 *	The size of the table is determined by the number of bits used for entries *SAFEHANDLEENTRIESBITS*. You can change it depending
 *	on how many entries you want. Max allowed values is 16 bits. On 64 bits systems this limit can be as bigger as 32 bits.
 *	Safe handles can carry information about the type of data. A specific field of the handle is dedicated to this job, its size
 *	can be user defined.
 *	Safe handles have a 'uniqe' key associated that give supplementar protection against use of invalid handles. The proability that
 *	two handles have the same value depends on the number ok key bits. These are used as incrementing counter that will wrap-around.
 *	Because the key bits are what remains after number of entries and types bits have been defined, larger the entries number less
 *	safe is the unique key that repeats more often.
 *	The use of Safe handles give the following advantages:
 *		- Safe data reference.
 *		- Obfuscation of real data.
 *		- Protection against data corruption and unwanted access.
 *		- Type checking enforcement.
 *		- Handle duplication.
 *		- Debug help.
 *		- Thread access limitation.
 *		- Partial garbage collection on thread basis.
 *
 *	How SafeHandles works
 *	=====================
 *	A safe handle is an hashing like method to address data blocks, normally generated dinamically, avoiding memory
 *	conflicts and data corruption.
 *	Safehandles permits to define a type field that is encoded in the handle allowing distinction of data type just
 *	looking at the handle (think about GDI objects).
 *	SafeHandles creates a memory table that stores key/data pairs. The size of the table is user defined.
 *	SafeHandles have 3 main parts:
 *
 *		+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 *		|           Unique key                  |  Type |    Table Ptr  |
 *		+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 *
 *	The layout above is for a 32bits machine having up to 256 handles (8 bits), 16 types (4 bits) and 20bits of key.
 *	If MEMSAFE symbol is defined the handle will always have the MSBit set to address invalid memory. This prevents the
 *	use of handle as memory address hiding any erroneous access to the real data.
 *	The key changes for each new handle created, and wraps around when the max count for key bits is reached. This feature
 *	give safety when handles are reused. It permits to make handles comparison and protect user code from usage of expired
 *	or destroyed handles. The number of bits used for the unique key should be safe enaugh for many applications.
 *	However the compiler will issue a message classify the key enforcement in strong and weak. An handle is considered weak
 *	if the number of key bits is less than 8 times the table size.
 *
 *	Withstanding all these characteristics the access to the data is very fast and sanity check is strightforward :-)
 *
 *	Library configuration
 *	=====================
 *	To modify the default building of SafeHandles you can define preprocessor values:
 *		- *SAFEHANDLEENTRIESBITS*	Set to the number of bits to be used for table indexing.
 *									Max value is 16 for 32bits machines and 32 for 64 bits machines.
 *		- *SAFEHANDLETYPESBITS*		You can reserve bits to identify type of handle in programs where different objects
 *									are referenced. Default compile don't use types.
 *									Max value 8 for 32bits machines and 16 for 64 bits machines.
 *		- *SAFEHANDLEMEMSAFE*		Define this variable to 1 to protect memory invalid access. Each generated handle will have
 *									the MSBit set. In this case using a safe handle to address memory will trigger a memory
 *									access exception. The cost is the loss of one bit on unique key.
 *		- *SAFEHANDLEDYNMEM*		Define this variable to 1 to create table in dynamic memory.
 *									This is preferable when working with large tables.
 *	Threading
 *	=========
 *	SafeHandles are thread safe, the core code is protected under a critical section to obtain exclusive access to the internal structures.
 *	Errors are handled in mutithreaded way.
 *	As experimental feature SafeHandles can take care of dead data on thread basis scanning the table and automatically removing
 *	the handles owned by ended threads. some advanced functions for handles access interblock
 *	between different threads.
 *	The flag *SAFEHANDLEKILLDEADDATA* enables the code, running on a private thread, that continuosly scans the handles table for
 *	entries created by dead threads. If the handle is thread local (flag *SH_FLAG_THREADLOCAL* set) and the thread that created the handle
 *	is no more running the handle and related data is automatically released acting like a kind of garbage collector.
 *
 *	Handle properties
 *	=================
 *	Safe handles can have properties that can be set using the handle flags. Actually there are 3 flags available:
 *		- *SH_FLAG_NODUP*		The handle cannot be duplicated. Trying to duplicate it you'll get a *SH_ERR_NOTALLOWED* error.
 *		- *SH_FLAG_THREADLOCAL*	The handle is local to the thread that created it. Other threads cannot access it.
 *		- *SH_FLAG_INHERITABLE*	The handle give limited access by threads different from creator.
 *
 *	Properties can be set on creation using *SH_CreateHandleEx*, or later using *SH_SetHandleFlags* function.
 */

#ifndef SAFEHANDLEENTRIESBITS
#define SAFEHANDLEENTRIESBITS 	 8		//! Default number of bits used for index
#endif
#if SAFEHANDLEENTRIESBITS == 0
#error Entries bits = 0!
#endif
#if SAFEHANDLEENTRIESBITS > SAFEHANDLEMAXENTRYBITS
#error Entries max limit exceeded!
#endif
#pragma message ("SafeHandles: SAFEHANDLEENTRIESBITS set at " xstr(SAFEHANDLEENTRIESBITS) " bits.")
#define	SAFEHANDLENUMOFTERENTRIES	((INT_PTR)1<<SAFEHANDLEENTRIESBITS)


#ifndef SAFEHANDLETYPESBITS
#define SAFEHANDLETYPESBITS	 0		//! Number of bits used for type. Default No types.
#endif
#if SAFEHANDLETYPESBITS > SAFEHANDLEMAXTYPEBITS
#error Max limit for handle types exceeded!
#endif
#if SAFEHANDLETYPESBITS
#pragma message ("SafeHandles: SAFEHANDLETYPESBITS set at " xstr(SAFEHANDLETYPESBITS) " bits.")
#endif

#ifndef SAFEHANDLEMEMSAFE
#define SAFEHANDLEMEMSAFE 1
#endif
#if SAFEHANDLEMEMSAFE >= 1
#define SAFEHANDLEMEMMASK	((INT_PTR)1<<(SAFEHANDLEHDRSIZE-1))
#else
#define SAFEHANDLEMEMMASK	0
#pragma message("SafeHandles: Warning! This compilation is not memory safe. Set symbol SAFEHANDLEMEMSAFE=1 to protect memory.")
#endif

#ifdef SAFEHANDLEDYNMEM
#pragma message ("SafeHandles: Dynamic table version")
#else
#define SAFEHANDLECHK
#endif

#if (SAFEHANDLEHDRSIZE-SAFEHANDLEENTRIESBITS-SAFEHANDLETYPESBITS) >= (SAFEHANDLEENTRIESBITS+3)
#pragma message ("SafeHandles: Unique key is strong (key bits > entries).")
#else
#pragma message ("SafeHandles: Warning! Unique key is weak (key bits < entries).")
#endif

//! This is a bitmask with all 1's covering the index field
#define SAFEHANDLEIDXMASK		(((INT_PTR)1<<SAFEHANDLEENTRIESBITS)-1)
//! Macro to retrieve index from handle
#define SH_GetIdx(sh)			((INT_PTR)(sh)&SAFEHANDLEIDXMASK)
//! Macro to retrieve type from handle
#define SH_GetType(sh)			((((INT_PTR)sh)&SAFEHANDLETYPEMASK)>>SAFEHANDLEENTRIESBITS)
//! Mask to retrieve key from handle.
#define SAFEHANDLEKEYMASK		((INT_PTR)-1&~(((INT_PTR)1<<(SAFEHANDLETYPESBITS+SAFEHANDLEENTRIESBITS))-1))
//! Increment to add to the key value each new handle creation.
#define SAFEHANDLEKEYINC		((INT_PTR)1<<(SAFEHANDLETYPESBITS+SAFEHANDLEENTRIESBITS))

#if SAFEHANDLETYPESBITS > 0	//Some optimizers (even PellesC) add unnecessary code for a zero mask
//! Mask for type from handle
#define SAFEHANDLETYPEMASK		((((INT_PTR)1<<SAFEHANDLETYPESBITS)-1)<<SAFEHANDLEENTRIESBITS)
//! Creates a new handle from index and type when type bits > 0
#define SH_Create(idx, type)    (SHANDLE)(((SAFEHANDLEIDXMASK&(idx)) |                      \
                                 (((type)<<SAFEHANDLEENTRIESBITS)&SAFEHANDLETYPEMASK) |     \
                                 (((++uiKey)*SAFEHANDLEKEYINC)&SAFEHANDLEKEYMASK)           \
                                ) | SAFEHANDLEMEMMASK)
#else
//! Creates a new handle from index and type when type bits == 0
#define SH_Create(idx, type)    (SHANDLE)(((SAFEHANDLEIDXMASK&(idx)) |                      \
                                 (((++uiKey)*SAFEHANDLEKEYINC)&SAFEHANDLEKEYMASK)           \
                                ) | SAFEHANDLEMEMMASK)
#endif

#ifdef SAFEHANDLEWINALLOC		//!< Use windows memory allocator
//! Memory allocator
#define SAFEHANDLEALLOC(sz)		GlobalAlloc(GMEM_FIXED|GMEM_ZEROINIT, sz)
//! Memory deallocator
#define SAFEHANDLEFREE(h)		GlobalFree(h)
#else
//! Memory allocator
#define SAFEHANDLEALLOC(sz)		calloc(1, sz)
//! Memory deallocator
#define SAFEHANDLEFREE(h)		free(h)
#endif

#ifdef SAFEHANDLEDYNMEM
#define SH_CHKDYNMEM(ret)		if (!she)								\
								{										\
									SetLastError(SH_ERR_UNINITIALIZED);	\
									return ret; 						\
								}
#else
#define SH_CHKDYNMEM(ret)
#endif

#define _SH_SetHandleFlags(i, f)	she[i].flags |= (0xff000000 & f) 

/*!
 *	Library flags
 */
#define SH_LIBFLG_INITLZED		0x0001		//!< Library for Safe handles has been initialized
#define SH_LIBFLG_SHUTDOWN		0x0002		//!< Library is shutting down no more creations are allowed
#define SH_LIBFLG_TABFULL		0x0004		//!< Handles table is full
#define SH_LIBFLG_WAITONLOCK	0x0008		//!< Library calls will wait on locked handles. If not set return with SH_ERR_HANDLELOCKED
#define SH_LIBFLG_FORCEEXEC		0x0010		//!<Enabled by shutting down sequence remove checks and forces delete operation

/*!
 *	Handle flags
 */
#define _SH_HFLAG_ALLOCD		0x0001		//!< This handle allocated its own memory data
#define _SH_HFLAG_ROOT			0x0002		//!< This handle is a root of duplicated tree
#define _SH_HFLAG_DUP			0x0004		//!< This handle is a duplicated handle
#define _SH_HFLAG_LOCKD			0x0008		//!< This handle is a locked handle. Limited operations are allowed on it.

/*!
 *	Ignore flags
 */
#define _SH_IGNORE_LOCK			0x0001		//!< Ignore lock status
#define _SH_IGNORE_SHUTDOWN		0x0002		//!< Ignore shutdown status
#define _SH_IGNORE_THREADLOCAL	0x0004		//!< Ignore thread localization status
#define _SH_IGNORE_INHERIT		0x0008		//!< Ignore inheritance status

#pragma pack(push)
#pragma pack(1)
/*!
 *	Layout of the table entries.
 *	The structure contains the handle value, the pointer to the next handle in a duplicated handle chain,
 *	the flags and the creator thread ID.
 *	Two fields of the structure have double significance, the first holds the data pointer for root handles
 *	or the root handle for child (duplicated) handles.
 *	The second holds the reference count, that is the number of duplications for this handle, valid for root
 *	handles, or a pointer to the preceeding handle in a duplicated handles chain.
 */
typedef struct _SafeHandlesEntry
{
	SHANDLE handle;				//!< The handle
	union
	{
		LPVOID  pData;			//!< Data pointer
		SHANDLE hRoot;			//!< Root handle (the one that has been duplicated)
	};
	union
	{
		SHANDLE hPrev;
		INT_PTR RefCnt;			//!< Reference count. It's the number of duplications for a root handle
	};
	SHANDLE hNext;				//!< If root handle this is the handle of first child, if child next index. NULL is last element.
	INT_PTR flags;				//!< Handle flags
	DWORD  dwThread;			//!< The id of the thread that created this handle
} SHE, *LPSHE;
#pragma pack(pop)

/*
 *	Global variables.
 */
#ifdef SAFEHANDLEDYNMEM
static LPSHE she = NULL;						//!< handles table
#else
static SHE she[SAFEHANDLENUMOFTERENTRIES] = {0};
#endif
static SH_STATISTIC_DATA shsd        = {0};		//!< Safe handles statistic data
static INT_PTR           ShLibFlags  =  0;		//!< Safe handles library flags
static INT_PTR           uiKey       =  0;		//!< Safe handles unique key. This value is incremented on each new handle instance
static CRITICAL_SECTION  shCs;					//!< Safe handles critical section object used for threads synchronization

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		_SH_FindFreeEntry
 \details	Search for a free entry in the table.
            To speed-up the search for a free entry the function use an 
            hint that is supposed to point to a free slot.
            If this is not true then the search starts from the following 
            slot up to the slot preceeding the one pointed by the hint.
            A flag signal when the table is full to shorten even more the 
            search.
 \return	The index of free entry is successfull, or -1 if no entry is 
            available.
 \date		Created  on Wed Dec 31 03:00:17 2014
 \date		Modified on Sat Jan 17 21:17:06 2015
\*//*-@@fnc@@----------------------------------------------------------------*/
static INT_PTR _SH_MAPI _SH_FindFreeEntry(void)
{
	BOOL bRoundover = FALSE;
	INT_PTR iLimit  = SAFEHANDLENUMOFTERENTRIES;
	INT_PTR iStart;

	if (ShLibFlags & SH_LIBFLG_TABFULL)
		return -1;

	if (shsd.SlotHint >= SAFEHANDLENUMOFTERENTRIES)
	{
		shsd.SlotHint = 0;
		iStart        = 0;
	}
	else
	{
		iStart        = shsd.SlotHint;
	}

	if (!she[shsd.SlotHint].handle)
		return shsd.SlotHint++;

	for (int i=shsd.SlotHint; i<iLimit; i++)
	{
		if (!she[i].handle)
		{
			shsd.SlotHint = i+1;
			assert(i<SAFEHANDLENUMOFTERENTRIES);
			return i;
		}
		if (i>=iLimit-1)
		{
			if (bRoundover)
				break;

			iLimit = shsd.SlotHint;
			i = 0;
			bRoundover = TRUE;
		}
	}

	ShLibFlags |= SH_LIBFLG_TABFULL;
	return -1;
}

#if SAFEHANDLEKILLDEADDATA
static INT_PTR DeadsIdx = 0;
static HANDLE _ShChkDeadThread;
static DWORD  _ShChkDeadThreadId;

#pragma warn(push)
#pragma warn(disable: 2134)
/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		_SH_ChkDeadThreads
 \details	Remove handles created from inactive threads.
            This is experimental and conditionally compiled only if 
            SAFEHANDLEKILLDEADDATA is defined.
 \date		Created  on Sat Jan 10 20:57:24 2015
 \date		Modified on Sat Jan 10 20:57:24 2015
\*//*-@@fnc@@----------------------------------------------------------------*/
DWORD _SH_NORET WINAPI _SH_ChkDeadThreads(void *p)
{
	while(TRUE)
	{
		if (DeadsIdx >= SAFEHANDLENUMOFTERENTRIES)
			DeadsIdx = 0;

		EnterCriticalSection(&shCs);

		for (int i = DeadsIdx; (i < SAFEHANDLENUMOFTERENTRIES ) && (i < (DeadsIdx + _SHDEADSTEP)); i++)
		{
			if (!she[i].handle)
			{
				continue;
			}

			if ((she[i].flags & _SH_HFLAG_ROOT) || !(she[i].flags & SH_FLAG_THREADLOCAL))
				continue;

			HANDLE hThread = OpenThread(THREAD_QUERY_INFORMATION, FALSE, she[i].dwThread);
			if (!hThread)
				continue;

			DWORD  dwStatus;
			GetExitCodeThread(hThread, &dwStatus);
			CloseHandle(hThread);
			if (STILL_ACTIVE == dwStatus)
				continue;

			//Kill the inactive Handle
			LeaveCriticalSection(&shCs);
			SH_ReleaseHandle(she[i].handle);
			EnterCriticalSection(&shCs);
		}
		LeaveCriticalSection(&shCs);
		Sleep(_SHDEADSLEEP);
	}
}
#pragma warn (pop)
#endif

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		SH_GetVersionA
 \details	Retrieve the ANSI version of library.
 \return	Returns a version string.
 \date		Created  on Sat Jan 17 22:35:04 2015
 \date		Modified on Sat Jan 17 22:35:04 2015
\*//*-@@fnc@@----------------------------------------------------------------*/
LPCSTR SH_API SH_GetVersionA(VOID)
{
	return SAFEHANDLEVERSION;
}

#ifndef _L
#define __L(s)  L##s
#define _L(s)	__L(s)
#endif
/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		SH_GetVersionW
 \details	Retrieve the wide char version of library.
 \return	Returns a version string.
 \date		Created  on Sat Jan 17 22:35:48 2015
 \date		Modified on Sat Jan 17 22:35:48 2015
\*//*-@@fnc@@----------------------------------------------------------------*/
LPCWSTR SH_API SH_GetVersionW(VOID)
{
	return _L(SAFEHANDLEVERSION);
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		SH_Initialize
 \details	Initializes library:
            - Creates a critical section for execution interlock
            - Allocates the memory for the table when defined as dynamic
            - Start a thread for dead threads monitor if the option is 
            enabled.
            If no memory is available for initialization the application 
            raise a non continuable option and stop execution.
 \return	TRUE if successfull.
 \exception	Raise exception on no memory available.
 \date		Created  on Fri Jan  2 03:01:43 2015
 \date		Modified on Sun Jan 25 11:59:38 2015
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL SH_API SH_Initialize(void)
{
	InitializeCriticalSection(&shCs);

	#ifdef SAFEHANDLEDYNMEM
		she = malloc(sizeof(SHE) * SAFEHANDLENUMOFTERENTRIES);
		if (!she)
			RaiseException(0xEFFFFFFF, EXCEPTION_NONCONTINUABLE_EXCEPTION, 0, NULL);
		memset(she, 0, sizeof(SHE) * SAFEHANDLENUMOFTERENTRIES);
	#endif

	#if SAFEHANDLEKILLDEADDATA
		_ShChkDeadThread = CreateThread(NULL, 0, _SH_ChkDeadThreads, NULL, 0, &_ShChkDeadThreadId);
	#endif

	memset(&shsd, 0, sizeof(SH_STATISTIC_DATA));

	ShLibFlags |= SH_LIBFLG_INITLZED;

	return TRUE;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		_SH_HandleSanityCheck
 \details	Checks the base integrity of an handle.
            If and index is returned the handle exists and its fileds in 
            table entry are accessible.
            No special check are made, all flags are ignored.

 \param		[in] handle The handle to check.
 \return	Returns -1 if fails, else returns the index for this handle.
 \date		Created  on Sat Jan 10 16:25:19 2015
 \date		Modified on Sun Jan 18 01:07:56 2015
\*//*-@@fnc@@----------------------------------------------------------------*/
static INT_PTR _SH_MAPI _SH_HandleSanityCheck(SHANDLE handle)
{
	INT_PTR Idx = 0;

	//Check that the handle is != 0
 	if (!handle)
	{
		SetLastError(SH_ERR_INVALIDHANDLE);
		return -1;
	}

	//Get the table entry from table
	Idx = SH_GetIdx(handle);

	//Check key corrispondence for valid handle
	if (she[Idx].handle != handle)
	{
		SetLastError(SH_ERR_INVALIDHANDLE);
		return -1;
	}

	return Idx;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		__SH_SanityCheck
 \details	Checks the handle sanity.
            If don't fails enter critical section to run exclusively and 
            returns the table index for that handle.
            If fails returns -1 without entering critical section.
            If the library is set on SH_LIBFLG_WAITONLOCK the function wil 
            wait infinitely for lock to be removed and handle still valid.
 \param		[in] handle The handle to check on.
 \return	If successfull returns the handles table idex for this handle 
            and run exclusively. Else returs -1.
 \date		Created  on Tue Jan  6 17:46:36 2015
 \date		Modified on Tue Jan  6 18:02:59 2015
\*//*-@@fnc@@----------------------------------------------------------------*/
static INT_PTR _SH_MAPI _SH_SanityCheck(SHANDLE handle, DWORD dwFlg2Ignore)
{
	INT_PTR Idx = 0;

	do
	{
		//Check if library is initialized
		SH_CHKDYNMEM(-1);

		//Run exclusively
		EnterCriticalSection(&shCs);

		//Check Handle
		Idx = _SH_HandleSanityCheck(handle);
		if (-1 == Idx)
		{
			LeaveCriticalSection(&shCs);
			return -1;
		}

		// Check that we are not shutting down
		if ((ShLibFlags & SH_LIBFLG_SHUTDOWN) && !(dwFlg2Ignore & _SH_IGNORE_SHUTDOWN))
		{
			SetLastError(SH_ERR_SHUTTINGDOWN);
			LeaveCriticalSection(&shCs);
			return -1;
		}

		//Check if thread local handle
		if ((she[Idx].flags & SH_FLAG_THREADLOCAL) && !(dwFlg2Ignore & _SH_IGNORE_THREADLOCAL))
		{
			if (she[Idx].dwThread != GetCurrentThreadId())
			{
				//__debugbreak();
				SetLastError(SH_ERR_NOTALLOWED);
				LeaveCriticalSection(&shCs);
				return -1;
			}
		}


		if (dwFlg2Ignore & _SH_IGNORE_LOCK)
			break;

		/*
		 *	Handle locked handles.
		 * If library is set as SH_LIBFLG_WAITONLOCK the function retries infinitely to
		 *	gain access to locked handle. Else returns immediately with last error = SH_ERR_HANDLELOCKED
		 */
		if (she[Idx].flags & _SH_HFLAG_LOCKD)
		{
			if (ShLibFlags & SH_LIBFLG_WAITONLOCK)
			{
				LeaveCriticalSection(&shCs);
				Sleep(SH_WAITLOCKTIME);
				continue;
			}
			else
			{
				SetLastError(SH_ERR_HANDLELOCKED);
				LeaveCriticalSection(&shCs);
				return -1;
			}
		}
	} while (she[Idx].flags & _SH_HFLAG_LOCKD);

	SetLastError(0);

	return Idx;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		SH_GetLastError
 \details	Returns last error
 \return	Last error code.
 \date		Created  on Sat Jan  3 01:56:29 2015
 \date		Modified on Sat Jan 10 20:59:13 2015
\*//*-@@fnc@@----------------------------------------------------------------*/
INT_PTR SH_API SH_GetLastError(void)
{
	return GetLastError();
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		_SH_CreateHandle
 \details	Low level handle creation.
            Warning the functions don't try to enter exclusive modality by 
            itself. This is caller responsability to enter privileged 
            state.
            Running in non-exclusive mode will cause failures.
            The handle is created locked. Is caller responsability to 
            remove lock after high level creation is completed.
 \param		[in] pData Set when object memory is supplyed from user. The 
            value will be set in the value field of table entry.
 \param		[in] ipType Handle type.
 \param		[in] cbSize When this value is != 0 the object will be 
            automatically allocated. It will also be automatically 
            deallocated when handle is released.
 \return	Returns a valid handle when successfull, or NULL if fail.
 \date		Created  on Sun Jan  4 01:22:00 2015
 \date		Modified on Tue Jan  6 22:34:40 2015
\*//*-@@fnc@@----------------------------------------------------------------*/
static SHANDLE _SH_MAPI _SH_CreateHandle(LPVOID pData, INT_PTR ipType, size_t cbSize, DWORD dwFlags)
{
	SHANDLE RetVal = NULL;

	INT_PTR idx = _SH_FindFreeEntry();
	if (0>idx)
	{
		SetLastError(SH_ERR_TABLEFULL);
		return NULL;
	}

	memset(&she[idx], 0, sizeof(SHE));

	/*
	 *	If required alloc zeroed memory
	 */
	if (cbSize)
	{
		pData = SAFEHANDLEALLOC(cbSize);
		if (!pData)
		{
			SetLastError(SH_ERR_NOMEM);
			return NULL;
		}
		she[idx].flags |= _SH_HFLAG_ALLOCD;
	}

	/*
	 *	Freshly created handles are locked.
	 */
	she[idx].flags   |= _SH_HFLAG_LOCKD;

	she[idx].pData    = pData;
	she[idx].handle   = SH_Create(idx, ipType);
	she[idx].dwThread = GetCurrentThreadId();
	RetVal            = she[idx].handle;

	/*
	 *	Fix user flags
	 */
	_SH_SetHandleFlags(idx, dwFlags);

	shsd.cTotHandlesCreated++;
	shsd.cActiveHandles++;

	return RetVal;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		SH_CreateHandleEx
 \details	Extended handle creation with flags.
            Actual available flags are:
             - *SH_FLAG_THREADLOCAL* If set the handle is not available from threads 
            different from creator
             - *SH_FLAG_NODUP* If set the handle cannot be duplicated.\n
            Can be specified a data pointer supplied from user, or a data 
            size to allocate data memory.
            If a data size is specified the data pointer is ignored.
 \param		[in] pData User data pointer. This value is ignored if the 
            parameter cbSize!=0
 \param		[in] ipType Handle type. This value is ignored if the library 
            is compiled with 0 bits reserved for type specification.
 \param		[in] cbSize Specifies the size, in bytes, of data memory to be 
            allocated and linked to the handle. If this parameter !=0 the 
            pData will be ignored and the data allocated and linked. If it 
            is 0 then the value of pData will be linked to the handle.
 \param		[in] dwFlags The flags to be applied to the handle. 
 \return	A valid handle if successfull, NULL otherwise.
 \date		Created  on Thu Jan 15 13:44:22 2015
 \date		Modified on Thu Jan 15 13:44:22 2015
\*//*-@@fnc@@----------------------------------------------------------------*/
SHANDLE SH_API SH_CreateHandleEx(LPVOID pData, INT_PTR ipType, size_t cbSize, DWORD dwFlags)
{
	EnterCriticalSection(&shCs);

	SHANDLE h = _SH_CreateHandle(pData, ipType, 0, dwFlags);

	if (!h)
	{
		LeaveCriticalSection(&shCs);
		return NULL;
	}

	she[SH_GetIdx(h)].flags &= ~_SH_HFLAG_LOCKD;

	LeaveCriticalSection(&shCs);

	return h;
}




/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		SH_CreateHandle
 \details	Creates a new handle.
            If successfull the data pointer is set to the value supplyied by 
            the user.
 \param		[in] pData User data value to be set for this handle.
 \param		[in] ipType The type to be set for this handle. The value 
            supplyied is tuncated to fit the range set for type entry. If 
            no space is reserved for the handles the value is ignored.
 \return	Returns a valide handle if successfull, or NULL otherwise.
 \date		Created  on Sun Jan  4 01:21:24 2015
 \date		Modified on Sat Jan 10 21:03:47 2015
\*//*-@@fnc@@----------------------------------------------------------------*/
SHANDLE SH_API SH_CreateHandle(LPVOID pData, INT_PTR ipType)
{
	EnterCriticalSection(&shCs);

	SHANDLE h = _SH_CreateHandle(pData, ipType, 0, 0);

	if (!h)
	{
		LeaveCriticalSection(&shCs);
		return NULL;
	}

	she[SH_GetIdx(h)].flags &= ~_SH_HFLAG_LOCKD;

	LeaveCriticalSection(&shCs);

	return h;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		SH_CreateHandleAllocData
 \details	Creates a new handle and allocates memory.
            If successfull the data pointer is set to the allocated memory.
 \param		[in] cbData Size of user data to be allocated for this handle.
 \param		[in] ipType The type to be set for this handle. The value 
            supplyied is tuncated to fit the range set for type entry. If 
            no space is reserved for the handles the value is ignored.
 \return	Returns a valide handle if successfull, or NULL otherwise.
 \date		Created  on Sun Jan  4 01:20:52 2015
 \date		Modified on Sat Jan 10 21:06:43 2015
\*//*-@@fnc@@----------------------------------------------------------------*/
SHANDLE SH_API SH_CreateHandleAllocData(size_t cbData, INT_PTR ipType)
{
	EnterCriticalSection(&shCs);

	SHANDLE h = _SH_CreateHandle(NULL, ipType, cbData, 0);

	if (!h)
	{
		LeaveCriticalSection(&shCs);
		return NULL;
	}

	she[SH_GetIdx(h)].flags &= ~_SH_HFLAG_LOCKD;

	LeaveCriticalSection(&shCs);

	return h;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		SH_LockHandle
 \details	Locks the handle.
            A locked handle cannot be deleted or modified.

 \param		[in] handle The handle to unlock.
 \return	TRUE if successfull.
 \date		Created  on Tue Jan  6 18:41:38 2015
 \date		Modified on Sun Jan 18 13:19:45 2015
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL SH_API SH_LockHandle(SHANDLE handle)
{
	INT_PTR Idx = _SH_SanityCheck(handle, _SH_IGNORE_LOCK);

	if (0 > Idx)
		return FALSE;

	she[Idx].flags |= _SH_HFLAG_LOCKD;

	LeaveCriticalSection(&shCs);

	return TRUE;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		SH_UnlockHandle
 \details	Unlocks the handle.
            A locked handle cannot be deleted or modified.

 \param		[in] handle The handle to unlock.
 \return	TRUE if successfull.
 \date		Created  on Tue Jan  6 18:41:38 2015
 \date		Modified on Sun Jan 25 03:52:00 2015
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL SH_API SH_UnlockHandle(SHANDLE handle)
{
	INT_PTR Idx = _SH_SanityCheck(handle, _SH_IGNORE_LOCK);

	if (0 > Idx)
		return FALSE;

	she[Idx].flags &= ~_SH_HFLAG_LOCKD;

	LeaveCriticalSection(&shCs);

	return TRUE;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		SH_DupHandle
 \details	Duplicates the handle.
            Creates a new handle that retains the same data of the original 
            handle.
            Any handle can be deleted without destroying the data.
            Data will e destroyed only when last handle is destroyed.
 \return	A valid handle pointing to the same data of original handle if 
            successfull, NULL otherwise.
 \date		Created  on Fri Jan  2 01:13:36 2015
 \date		Modified on Sat Jan 10 21:12:40 2015
\*//*-@@fnc@@----------------------------------------------------------------*/
SHANDLE SH_API SH_DupHandle(SHANDLE hSrcHandle)
{
	INT_PTR RootIdx = -1;

	INT_PTR SrcIdx = _SH_SanityCheck(hSrcHandle, 0);

	if (0 > SrcIdx)
		return NULL;

	if (she[SrcIdx].flags & SH_FLAG_NODUP)
	{
		SetLastError(SH_ERR_NOTALLOWED);
		LeaveCriticalSection(&shCs);
		return NULL;
	}

	if (she[SrcIdx].flags & _SH_HFLAG_DUP)
	{
		//Check parent sanity
		RootIdx = _SH_HandleSanityCheck(she[SrcIdx].hRoot);
		if (-1 == RootIdx)
		{
			LeaveCriticalSection(&shCs);
			return NULL;
		}
	}
	else
		RootIdx = SrcIdx;

	//Try to create a new handle
	SHANDLE hNew = _SH_CreateHandle(NULL, SH_GetType(hSrcHandle), 0, 0);

	if (!hNew)
	{
		LeaveCriticalSection(&shCs);
		return NULL;
	}

	//We just created a new handle without errors, so this is safe
	INT_PTR NewIdx = SH_GetIdx(hNew);

	//Adjust root handle, set reference count
	she[RootIdx].RefCnt++;

	//Fix original duplicated handle
	she[RootIdx].flags     |=  _SH_HFLAG_ROOT;

	//Fix chaining putting new handle in the chain just after root handle to duplicate
	she[NewIdx].hPrev = hSrcHandle;
	she[NewIdx].hNext = she[SrcIdx].hNext;
	if (she[SrcIdx].hNext)
	{
		INT_PTR NNextIdx = _SH_HandleSanityCheck(she[SrcIdx].hNext);
		if (0 > NNextIdx)
		{
			shsd.cBrokenHandles++;
			she[NewIdx].hNext = NULL;		//Try to fix
		}
		else
			she[NNextIdx].hPrev = hNew;
	}
	she[SrcIdx].hNext = hNew;

	//Adjust the new handle
	she[NewIdx].hRoot    =  she[RootIdx].handle;
	she[NewIdx].flags   |=  _SH_HFLAG_DUP;
	she[NewIdx].flags   &= ~_SH_HFLAG_LOCKD;

	shsd.cTotHandlesDuplicated++;
	shsd.cActDuplications++;

	LeaveCriticalSection(&shCs);

	return hNew;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		_SH_ReleaseHandle
 \details	Low level releasing handle.
            This code expect to run in exclusive mode, and don't check for 
            validity of the index.
            Supplying an invalid table entry will lead to undefined result 
            including handles subsystem corruption.
 \date		Created  on Wed Jan  7 00:30:39 2015
 \date		Modified on Sat Jan 10 21:16:34 2015
\*//*-@@fnc@@----------------------------------------------------------------*/
static VOID _SH_MAPI _SH_ReleaseHandle(INT_PTR idx)
{
	if ((she[idx].flags & _SH_HFLAG_ALLOCD) &&
				!(she[idx].flags & _SH_HFLAG_DUP) && !(she[idx].flags & _SH_HFLAG_ROOT))
		SAFEHANDLEFREE(she[idx].pData);

	memset(&she[idx], 0, sizeof(SHE));
	shsd.cActiveHandles--;

	shsd.SlotHint = idx;
	ShLibFlags   &= ~SH_LIBFLG_TABFULL;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		SH_ReleaseHandle
 \details	Release an handle.
            If the handle is duplicated remove the specified handle 
            preserving the data that will remain available for the 
            duplicates.
            If the handle is not duplicated, or this is the last duplicate 
            will also remove data.
            Check last error for reason of failure.
            Note that release is one of the operations allowed also during 
            shutdown.

 \param		[in] handle The handle to remove
 \return	TRUE if successfull, FALSE otherwise.
 \date		Created  on Wed Dec 31 03:00:27 2014
 \date		Modified on Sun Jan 18 00:57:14 2015
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL SH_API SH_ReleaseHandle(SHANDLE handle)
{
	INT_PTR PrevIdx = -1;
	INT_PTR NextIdx = -1;
	BOOL RetVal     = FALSE;

	/*
	 *	Perform sanity checks on handle.
	 *	If shutting down is in progress and the SH_LIBFLG_FORCEEXEC flag is on
	 *	don't check for locks, threads owning, etc.
	 */
	INT_PTR idx = (ShLibFlags & SH_LIBFLG_FORCEEXEC) ? _SH_HandleSanityCheck(handle) : _SH_SanityCheck(handle, _SH_IGNORE_SHUTDOWN);

	if (0 > idx)
		return FALSE;

	/*
	 *	If this handle have no duplicates or is not a child
	 *	release it with no extra processing.
	 */
	if (!(she[idx].flags & _SH_HFLAG_ROOT) && !(she[idx].flags & _SH_HFLAG_DUP))
	{
		// Is not duplicated nor a child. We can simply release it.
		_SH_ReleaseHandle(idx);
		RetVal = TRUE;
		goto SH_ReleaseHandleNormalExit;
	}

	/*
	 *	Get the root handle.
	 */

	/*
	 *	Check if this is a child handle
	 */
	if (she[idx].flags & _SH_HFLAG_DUP)
	{
		/*
		 *	We have to run the chain long starting from root to find the link
		 *	to our handle.
		 *	Start getting root access...
		 */
		INT_PTR IdxRoot = _SH_HandleSanityCheck(she[idx].hRoot);

		//Check root handle sanity
		if (-1 == IdxRoot)
		{
			shsd.cBrokenHandles++;
			goto ReleaseInvalidHandle;		//This is a broken handle
		}

		/*
		 *	We have to fix the handles chain
		 */
		PrevIdx = _SH_HandleSanityCheck(she[idx].hPrev);
		if (-1 == PrevIdx)
		{
			shsd.cBrokenHandles++;
			goto ReleaseInvalidHandle;		//This is a broken handle
		}
		//Fix the chain
		she[PrevIdx].hNext = she[idx].hNext;

		/*
		 *	Adjust root.
		 *	Decrement reference count and, if there are no more childs,
		 *	remove duplication flag and clear next handle field.
		 */
		she[IdxRoot].RefCnt--;
		if (0 >= she[IdxRoot].RefCnt)
		{
			she[IdxRoot].flags &= ~_SH_HFLAG_ROOT;
			she[IdxRoot].hNext  = NULL;
		}

		//Release the handle
		_SH_ReleaseHandle(idx);
	}
	else
	{
		/*
		 *	We are releasing a root handle.
		 *	An handle chain must always have a root handle, so
		 *	we have to promote as root the next in chain.
		 *	Then we have to fix the root entry in the whole chain.
		 */
		//This is a root handle. Check for sanity
		NextIdx = _SH_HandleSanityCheck(she[idx].hNext);
		if	(
				((she[idx].flags & _SH_HFLAG_ROOT) && (she[idx].flags & _SH_HFLAG_DUP)) 		||
				(0 >= she[idx].RefCnt) || (-1 == NextIdx)
			)
			goto ReleaseInvalidHandle;

		INT_PTR _idx     = NextIdx;
		do
		{
			if (!she[_idx].hNext)
				break;

			_idx = _SH_HandleSanityCheck(she[_idx].hNext);
			if ((-1 == _idx) || (SAFEHANDLENUMOFTERENTRIES < _idx))
				goto ReleaseInvalidHandle;

			she[_idx].hRoot = she[NextIdx].handle;
		} while (TRUE);

		she[NextIdx].pData  = she[idx].pData;
		she[NextIdx].flags  = she[idx].flags;
		she[NextIdx].RefCnt = she[idx].RefCnt - 1;
		if (0 >= she[NextIdx].RefCnt)
		{
			if (she[NextIdx].hNext)
			{
				shsd.cBrokenHandles++;
			}
			she[NextIdx].flags &= ~_SH_HFLAG_ROOT;
		}
		she[idx].flags &= ~_SH_HFLAG_ALLOCD;
		_SH_ReleaseHandle(idx);
	}

SH_ReleaseHandleNormalExit:
	shsd.cActDuplications--;
	LeaveCriticalSection(&shCs);

	return TRUE;

ReleaseInvalidHandle:
			SetLastError(SH_ERR_INVALIDHANDLE);
			LeaveCriticalSection(&shCs);
			return FALSE;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		SH_GetDataFromHandle
 \details	Retrieved the data pointer for the specified handle.
            Note that this is one of the operations allowed also during 
            shutdown.
 \return	Return the data pointer if successfull, otherwise returns NULL.
 \date		Created  on Wed Dec 31 03:00:32 2014
 \date		Modified on Sat Jan 10 21:25:22 2015
\*//*-@@fnc@@----------------------------------------------------------------*/
LPVOID SH_API SH_GetDataFromHandle(SHANDLE handle)
{
	LPVOID RetVal = NULL;

	INT_PTR idx = _SH_SanityCheck(handle, _SH_IGNORE_SHUTDOWN);

	if (0 > idx)
		return NULL;

	if (she[idx].flags & _SH_HFLAG_DUP)
	{
		INT_PTR RootIdx = _SH_HandleSanityCheck(she[idx].hRoot);
		if (-1 == RootIdx)
		{
			SetLastError(SH_ERR_INVALIDHANDLE);
			RetVal = NULL;
		}
		else
			RetVal = (LPVOID)she[RootIdx].pData;
	}
	else
		RetVal = (LPVOID)she[idx].pData;

	LeaveCriticalSection(&shCs);

	return RetVal;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		SH_GetHandleDuplicationCnt
 \details	Retrieves the number of duplicates existing for this handle.
            Always check last error on return to check for unduplicated 
            handles.
 \return	The number of duplications, or -1 if errors.
 \date		Created  on Fri Jan  2 23:47:32 2015
 \date		Modified on Sat Jan 10 21:30:40 2015
\*//*-@@fnc@@----------------------------------------------------------------*/
INT_PTR SH_API SH_GetHandleDuplicationCnt(SHANDLE handle)
{
	INT_PTR RetVal = -1;

	INT_PTR Idx = _SH_SanityCheck(handle, _SH_IGNORE_LOCK);

	if (0 > Idx)
		return -1;

	if (!(she[Idx].flags & _SH_HFLAG_DUP))
	{
		INT_PTR RootIdx = _SH_HandleSanityCheck(she[Idx].hRoot);
		if (-1 == RootIdx)
			SetLastError(SH_ERR_INVALIDHANDLE);
		RetVal = she[RootIdx].RefCnt;
	}
	else
	{
		if (!(she[Idx].flags & _SH_HFLAG_ROOT))
			SetLastError(SH_ERR_BADPARAMETER);
		else
			RetVal = she[Idx].RefCnt;
	}

	LeaveCriticalSection(&shCs);

	return RetVal;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		SH_IsChildHandle
 \details	Checks if the handle is a duplicated one.
 \param		[in] handle The handle to check.
 \return	Returns TRUE if this is a duplicated handle.
            Always check last error if returns FALSE.
 \date		Created  on Wed Jan  7 00:37:37 2015
 \date		Modified on Sat Jan 10 22:23:31 2015
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL SH_API SH_IsChildHandle(SHANDLE handle)
{
	INT_PTR RetVal = -1;

	INT_PTR Idx = _SH_SanityCheck(handle, _SH_IGNORE_LOCK);

	if (0 > Idx)
		return FALSE;

	RetVal = she[Idx].flags & _SH_HFLAG_DUP;

	LeaveCriticalSection(&shCs);

	return RetVal;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		SH_SetHandle
 \details	Sets a new value for pData.
            The operation will not be done if there is alloced data or the 
            handle is duplicated or locked.
 \param		[in] handle The handle to which set data.
 \param		[in] pData Pointer to data to set.
 \return	TRUE if successfull.
            If fails check last error for details.
 \date		Created  on Wed Dec 31 03:00:44 2014
 \date		Modified on Sat Jan 10 22:33:14 2015
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL SH_API SH_SetHandle(SHANDLE handle, LPVOID pData)
{
	BOOL RetVal = TRUE;

	INT_PTR idx = _SH_SanityCheck(handle, 0);

	if (0 > idx)
		return FALSE;

	//Can't do if alloced mem or duplicated handle or locked
	if ( (she[idx].flags & _SH_HFLAG_ROOT)    || (she[idx].flags & _SH_HFLAG_DUP) ||
		 (she[idx].flags & _SH_HFLAG_ALLOCD) || (she[idx].flags & _SH_HFLAG_LOCKD)    )
		RetVal = FALSE;
	else
		she[idx].pData = pData;

	LeaveCriticalSection(&shCs);

	return RetVal;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		SH_GetEntryHandle
 \details	Retrieves the handle for the specified table index.
 \return	Returns an handle if the index is valid.
            If the function fails returns NULL;
 \date		Created  on Wed Dec 31 03:34:42 2014
 \date		Modified on Sat Jan 10 22:36:24 2015
\*//*-@@fnc@@----------------------------------------------------------------*/
SHANDLE SH_API SH_GetEntryHandle(INT_PTR idx)
{
	LPVOID RetVal = NULL;

	if (idx<0 || idx>=SAFEHANDLENUMOFTERENTRIES)
	{
		SetLastError(SH_ERR_INVALIDINDEX);
		return NULL;
	}

	EnterCriticalSection(&shCs);

	if (ShLibFlags&SH_LIBFLG_SHUTDOWN)
	{
		SetLastError(SH_ERR_SHUTTINGDOWN);
		return NULL;
	}

	if (!she[idx].handle)
		SetLastError(SH_ERR_INVALIDINDEX);
	else
		RetVal = (LPVOID)she[idx].handle;

	SetLastError(0);

	LeaveCriticalSection(&shCs);

	return RetVal;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		SH_GetEntriesNo
 \details	returns the number of entries of the handles table that is the 
            number of handles available in this compilation.
 \return	Returns the maximum number of handles that can be created in 
            teh current compiled library.
 \date		Created  on Wed Dec 31 03:37:26 2014
 \date		Modified on Sat Jan 10 22:38:37 2015
\*//*-@@fnc@@----------------------------------------------------------------*/
INT_PTR SH_API SH_GetEntriesNo(void)
{
	return SAFEHANDLENUMOFTERENTRIES;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		SH_GetTypesNo
 \details	Returns the number of types that can be used in current 
            compilation.
 \return	The number of types available in this compiled code.
 \date		Created  on Fri Jan  2 22:37:34 2015
 \date		Modified on Sat Jan 10 22:39:38 2015
\*//*-@@fnc@@----------------------------------------------------------------*/
INT_PTR SH_API SH_GetTypesNo(void)
{
	return 1<<SAFEHANDLETYPESBITS;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		SH_GetKeysNoBits
 \details	returns the number of bits used for the unique key coding.
 \return	Number of bit for unique key available in this compiled 
            library.
 \date		Created  on Fri Jan  2 22:39:37 2015
 \date		Modified on Sat Jan 10 22:40:56 2015
\*//*-@@fnc@@----------------------------------------------------------------*/
INT_PTR SH_API SH_GetKeysNoBits(void)
{
	return SAFEHANDLEHDRSIZE-(SAFEHANDLETYPESBITS+SAFEHANDLEENTRIESBITS);
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		SH_ShutDown
 \date		Created  on Wed Dec 31 03:43:29 2014
 \date		Modified on Wed Dec 31 03:43:29 2014
\*//*-@@fnc@@----------------------------------------------------------------*/
/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		SH_UserShutDown
 \details	Shuts down the safe handles subsystem using a user supplied 
            callback routine.
            TheThe routine is called for each valid handle so the user can 
            perform actions on handle data before it is destroyed.
            The callback routine receives the current handle to destroy and 
            a pointer to user data.
            The function must return TRUE to continue shutdown, if return 
            FALSE the shutdown is interrupted.
            Before to start shutdown a flag is set to signal that the 
            subsystem is shutting down blocking any creation of new handle 
            and duplication of existing ones. 
            The function don't release handles by itself, it is a user 
            responsability to destroy the handle.
 \param		[in] fn A pointer to a calback function returning a boolean 
            result and accepting two parameters the current handle and a 
            pointer to user data. The last if not used can be set to NULL.
 \param		[in] lpArgs User data pointer. Can be NULL.
 \return	The function returns TRUE if full shutdown has been completed.
            It returns FALSE if the shutdown was interrupted or errors were 
            present.
 \date		Created  on Sat Jan 10 22:50:07 2015
 \date		Modified on Sat Jan 10 22:50:07 2015
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL SH_API SH_UserShutDown(SH_CALLBACKFN fn, LPVOID lpArgs)
{
	SH_CHKDYNMEM(FALSE);

	if (!fn)
	{
		SetLastError(SH_ERR_BADPARAMETER);
		return FALSE;
	}

	EnterCriticalSection(&shCs);

	if (ShLibFlags & SH_LIBFLG_SHUTDOWN)
	{
		SetLastError(SH_ERR_SHUTTINGDOWN);
		LeaveCriticalSection(&shCs);
		return FALSE;
	}

	ShLibFlags |= SH_LIBFLG_SHUTDOWN | SH_LIBFLG_FORCEEXEC;

	LeaveCriticalSection(&shCs);

	for (INT_PTR i=0; i < SAFEHANDLENUMOFTERENTRIES; i++)
	{
		if (!(ShLibFlags & SH_LIBFLG_SHUTDOWN))
			return FALSE;

		if (she[i].handle)
			if (!fn((LPVOID)she[i].handle, lpArgs))
			{
				ShLibFlags &= ~SH_LIBFLG_FORCEEXEC;

				if (i<SAFEHANDLENUMOFTERENTRIES)
					SH_SetShutDown(FALSE);
				return FALSE;
			}
	}
	ShLibFlags &= ~SH_LIBFLG_FORCEEXEC;
	return TRUE;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		_SH_ShutDown
 \details	Internal shutdown callback.
            Simply destroy the handle.
 \date		Created  on Mon Jan  5 01:07:26 2015
 \date		Modified on Sat Jan 10 23:10:49 2015
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL _SH_MAPI _SH_ShutDown(SHANDLE handle, void *lpArgs)
{
	SH_ReleaseHandle(handle);

	return TRUE;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		SH_ShutDown
 \details	Shuts down the safe handles subsystem destroyng all handles and 
            releasing the alloced memory.
 \return	Returns TRUE if no errors were present.
 \date		Created  on Mon Jan  5 00:56:45 2015
 \date		Modified on Sat Jan 10 22:53:45 2015
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL SH_API SH_ShutDown(VOID)
{
	if (ShLibFlags&SH_LIBFLG_SHUTDOWN)
		return FALSE;

	return SH_UserShutDown(_SH_ShutDown, NULL);
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		SH_SetShutDown
 \details	Sets the actual shutting down state.
 \return	Returns the current shuting down state.
            TRUE if set, FALSE otherwise.
 \date		Created  on Wed Dec 31 03:46:32 2014
 \date		Modified on Sat Jan 10 23:13:25 2015
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL SH_API SH_SetShutDown(BOOL bAction)
{
	SH_CHKDYNMEM(FALSE);

	EnterCriticalSection(&shCs);

	BOOL bActSd = ShLibFlags;

	if (bAction)
		ShLibFlags |=  SH_LIBFLG_SHUTDOWN;
	else
		ShLibFlags &= ~SH_LIBFLG_SHUTDOWN;

	LeaveCriticalSection(&shCs);

	return bActSd & SH_LIBFLG_SHUTDOWN;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		SH_IsValidHandle
 \details	Checks if the handle is valid.
 \return	If the handle is valid the function returns TRUE.
 \date		Created  on Thu Jan  1 01:22:07 2015
 \date		Modified on Sat Jan 10 23:14:42 2015
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL SH_API SH_IsValidHandle(SHANDLE handle)
{
	BOOL RetVal = FALSE;

	INT_PTR idx = _SH_SanityCheck(handle, _SH_IGNORE_LOCK);

	if (0 > idx)
		return FALSE;

	RetVal = she[idx].handle == handle;

	LeaveCriticalSection(&shCs);

	return RetVal;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		SH_IsDupHandle
 \details	Checks if the handle is duplicated.
 \return	Returns TRUE if the handle is duplicated.
 \date		Created  on Fri Jan  2 03:26:57 2015
 \date		Modified on Sat Jan 10 23:15:55 2015
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL SH_API SH_IsDupHandle(SHANDLE handle)
{
	INT_PTR idx = _SH_SanityCheck(handle, _SH_IGNORE_LOCK);

	if (0 > idx)
		return FALSE;

	BOOL RetVal = (she[idx].flags & _SH_HFLAG_ROOT) || (she[idx].flags & _SH_HFLAG_DUP);

	LeaveCriticalSection(&shCs);

	return RetVal;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		SH_GetStatisticData
 \details	Retrieves the statistical data of safe handles subsystem.
            Before to call the function the user must set the member 
            cbSize with the correct size of the structure SH_STATISTIC_DATA 
            obtained with sizeof(SH_STATISTIC_DATA).
 \param		[in] lpshSd A pointer to a SH_STATISTIC_DATA structure where 
            the data will be copied. 
 \return	Returns TRUE if the data is correctly copied, false if an error 
            occourred.
 \date		Created  on Sat Jan  3 00:03:41 2015
 \date		Modified on Sat Jan 10 23:20:25 2015
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL SH_API SH_GetStatisticData(LP_SH_STATISTIC_DATA lpshSd)
{
	BOOL RetVal = FALSE;

	if (!lpshSd)
		return FALSE;

	EnterCriticalSection(&shCs);

	__try
	{
		if (sizeof(SH_STATISTIC_DATA) == lpshSd->cbSize)
		{
			*lpshSd = shsd;
			RetVal  = TRUE;
		}
		else
			SetLastError(SH_ERR_BADPARAMETER);
	}
	__except (EXCEPTION_EXECUTE_HANDLER)
	{
		SetLastError(SH_ERR_INVALIDHANDLE);
	}

	LeaveCriticalSection(&shCs);

	return RetVal;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		SH_SetHandleFlags
 \details	Sets handle flags
 \param		[in] handle Handle to set flags
 \param		[in] dwFlags Flags to set
 \date		Created  on Thu Jan 15 14:16:28 2015
 \date		Modified on Thu Jan 15 14:16:28 2015
\*//*-@@fnc@@----------------------------------------------------------------*/
BOOL SH_API SH_SetHandleFlags(SHANDLE handle, DWORD dwFlags)
{
	BOOL RetVal = FALSE;

	INT_PTR idx = _SH_SanityCheck(handle, 0);

	if (0 > idx)
		return FALSE;

	if (((she[idx].flags & _SH_HFLAG_ROOT) || (she[idx].flags & _SH_HFLAG_DUP)) && (dwFlags & SH_FLAG_NODUP))
	{
		SetLastError(SH_ERR_NOTALLOWED);
		goto SH_SetHandleFlagsExit;
	}

	_SH_SetHandleFlags(idx, dwFlags);

	RetVal = TRUE;

SH_SetHandleFlagsExit:
	LeaveCriticalSection(&shCs);

	return RetVal;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		SH_GetHandleFlags
 \date		Created  on Thu Jan 15 15:48:37 2015
 \date		Modified on Thu Jan 15 15:48:37 2015
\*//*-@@fnc@@----------------------------------------------------------------*/
DWORD SH_API SH_GetHandleFlags(SHANDLE handle)
{
	DWORD RetVal = 0L;

	INT_PTR idx = _SH_SanityCheck(handle, _SH_IGNORE_LOCK);

	if (0 > idx)
		return 0L;

	RetVal = she[idx].flags;

	LeaveCriticalSection(&shCs);

	return RetVal;
}

/*+@@fnc@@----------------------------------------------------------------*//*!
 \brief		PrintChain
 \details	Prints on a stream the chain of duplications for the specified 
            handle.
            This function is not defined in the standard header because 
            should be used only for debug.

 \param		[in] h Handle of which is request the print of duplication 
            chain.

 \param		[in] fp File pointer (stream) on which to print.
 \date		Created  on Tue Jan 13 12:15:08 2015
 \date		Modified on Sun Jan 18 01:06:11 2015
\*//*-@@fnc@@----------------------------------------------------------------*/
void SH_API PrintChain(SHANDLE h, FILE *fp)
{
	int idx = _SH_HandleSanityCheck(h);
	if (idx<0)
	{
		fprintf(fp, "Invalid handle %08X\n", (DWORD)h);
		return ;
	}

	fprintf(fp, "\nChecking handle %08X:\n", (DWORD)h);

	if (!(she[idx].flags & _SH_HFLAG_ROOT) && !(she[idx].flags & _SH_HFLAG_DUP))
	{
		fprintf(fp, "Not duplicated. handle=%08X, pData=%08X, hRoot=%08X, hNext=%08X, hThread=%08X, flags=%08X, hPrev=%08X, RefCnt=%d\n",
				(DWORD)she[idx].handle, (DWORD)she[idx].pData, (DWORD)she[idx].hRoot, (DWORD)she[idx].hNext,
										(DWORD)she[idx].dwThread, (DWORD)she[idx].flags, (DWORD)she[idx].hPrev, (DWORD)she[idx].RefCnt);
		return;
	}

	if (she[idx].flags & _SH_HFLAG_DUP)
	{
		idx = _SH_HandleSanityCheck(she[idx].hRoot);
		if (0>idx)
		{
			fprintf(fp, "Invalid root handle %08X\n", (DWORD)h);
			return ;
		}
	}
	for (int _idx=idx; _idx>=0; _idx=_SH_HandleSanityCheck(she[_idx].hNext))
	{
		if (she[_idx].flags & _SH_HFLAG_ROOT)
			fprintf(fp, "ROOT\thandle=%08X, pData=%08X, hNext=%08X, RefCnt=%07d, hThread=%08X, flags=%08X\n",
										(DWORD)she[_idx].handle, (DWORD)she[_idx].pData, (DWORD)she[_idx].hNext,
											(DWORD)she[_idx].RefCnt, (DWORD)she[_idx].dwThread, (DWORD)she[_idx].flags);
		else
			fprintf(fp, "CHILD\thandle=%08X, hRoot=%08X, hNext=%08X, hPrev=%08X, hThread=%08X, flags=%08X\n",
										(DWORD)she[_idx].handle, (DWORD)she[_idx].hRoot, (DWORD)she[_idx].hNext,
											(DWORD)she[_idx].hPrev, (DWORD)she[_idx].dwThread, (DWORD)she[_idx].flags);
	}
}
