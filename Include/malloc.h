#ifndef _MALLOC_H
#define _MALLOC_H

/* malloc.h - private header for memory allocation definitions */

#if __POCC__ >= 500
#pragma once
#endif

#pragma message("Use <stdlib.h> instead of non-standard <malloc.h>")

#include <crtdef.h>

/* type definitions */
#ifndef _SIZE_T_DEFINED
#define _SIZE_T_DEFINED
#if __POCC_TARGET__ == 3
typedef unsigned long long size_t;
#else
typedef unsigned int size_t;
#endif
#endif /* _SIZE_T_DEFINED */

/* declarations */
extern void * __cdecl _alloca(size_t);
extern void * __cdecl calloc(size_t, size_t);
extern _CRTFRE(1) void __cdecl free(void *);
extern void * __cdecl malloc(size_t);
extern void * __cdecl realloc(void *, size_t);

/* private extensions */
extern int __cdecl _heap_validate(void *);
extern size_t __cdecl _msize(void *);
extern void * __cdecl _mm_malloc(size_t, size_t);
extern _CRTFRE(1) void __cdecl _mm_free(void *);
#ifdef _MSC_EXTENSIONS
#define _aligned_malloc(n,m)  _mm_malloc(n,m)
#define _aligned_free(p)  _mm_free(p)
#endif /* _MSC_EXTENSIONS */

#ifdef __POCC__OLDNAMES
#undef alloca
#define alloca  _alloca
#endif /* __POCC__OLDNAMES */

#endif /* _MALLOC_H */
