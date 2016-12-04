/*+@@file@@----------------------------------------------------------------*//*!
 \file		DMUtil.h
 \par Description 
 \par  Status: 
 \par Project: 
 \date		Created  on Sun Dec  4 19:28:21 2016
 \date		Modified on Sun Dec  4 19:28:21 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#ifndef DMUTIL_H
#define DMUTIL_H

#include <dmusicc.h>
#include <dmusici.h>
#include <dsound.h>

//-----------------------------------------------------------------------------
// Classes used by this header
//-----------------------------------------------------------------------------
typedef struct CMusicManager CMusicManager;
typedef struct CMusicSegment CMusicSegment;
typedef struct CMusicScript CMusicScript;

//-----------------------------------------------------------------------------
// Name: class CMusicManager
// Desc: 
//-----------------------------------------------------------------------------
typedef struct CMusicManager
{
    BOOL                      m_bCleanupCOM;
    IDirectMusicLoader8*      m_pLoader;
    IDirectMusicPerformance8* m_pPerformance;
} CMusicManager;

CMusicManager *CMusicManagerNew(void);
void CMusicManagerDelete(CMusicManager *);

__forceinline IDirectMusicLoader8 *CMusicManagerGetLoader(CMusicManager *this)
{
	return this->m_pLoader;
}
__forceinline IDirectMusicPerformance8 *CMusicManagerGetPerformance(CMusicManager *this)
{
	return this->m_pPerformance;
}
IDirectMusicAudioPath8 *CMusicManagerGetDefaultAudioPath(CMusicManager *this);
HRESULT CMusicManagerInitialize(CMusicManager *this, HWND hWnd, DWORD dwPChannels /*= 128 */ , DWORD dwDefaultPathType /*= DMUS_APATH_DYNAMIC_STEREO */ );
HRESULT CMusicManagerSetSearchDirectory(CMusicManager *this, const TCHAR *strMediaPath);
VOID CMusicManagerCollectGarbage(CMusicManager *this);
HRESULT CMusicManagerCreateSegmentFromFile(CMusicManager *this, CMusicSegment **ppSegment, TCHAR *strFileName, BOOL bDownloadNow /*= TRUE */ , BOOL bIsMidiFile /*= FALSE */ );
HRESULT CMusicManagerCreateScriptFromFile(CMusicManager *this, CMusicScript **ppScript, TCHAR *strFileName);
HRESULT CMusicManagerCreateChordMapFromFile(CMusicManager *this, IDirectMusicChordMap8 **ppChordMap, TCHAR *strFileName);
HRESULT CMusicManagerCreateStyleFromFile(CMusicManager *this, IDirectMusicStyle8 **ppStyle, TCHAR *strFileName);
HRESULT CMusicManagerGetMotifFromStyle(CMusicManager *this, IDirectMusicSegment8 **ppMotif, TCHAR *strStyle, TCHAR *wstrMotif);
HRESULT CMusicManagerCreateSegmentFromResource(CMusicManager *this, CMusicSegment **ppSegment, TCHAR *strResource, TCHAR *strResourceType, BOOL bDownloadNow /*= TRUE */ , BOOL bIsMidiFile /*= FALSE */ );

//-----------------------------------------------------------------------------
// Name: class CMusicSegment
// Desc: Encapsulates functionality of an IDirectMusicSegment
//-----------------------------------------------------------------------------
typedef struct CMusicSegment
{
    IDirectMusicSegment8*     m_pSegment;
    IDirectMusicLoader8*      m_pLoader;
    IDirectMusicPerformance8* m_pPerformance;
    IDirectMusicAudioPath8*   m_pEmbeddedAudioPath;
    BOOL                      m_bDownloaded;
} CMusicSegment;

CMusicSegment *CMusicSegmentNew(IDirectMusicPerformance8 *pPerformance, IDirectMusicLoader8 *pLoader, IDirectMusicSegment8 *pSegment);
void CMusicSegmentDelete(CMusicSegment *);
HRESULT CMusicSegmentGetStyle(CMusicSegment *this, IDirectMusicStyle8 **ppStyle, DWORD dwStyleIndex /*= 0*/);
HRESULT CMusicSegmentSetRepeats(CMusicSegment *this, DWORD dwRepeats);
HRESULT CMusicSegmentPlay(CMusicSegment *this, DWORD dwFlags /*= DMUS_SEGF_SECONDARY */ , IDirectMusicAudioPath8 *pAudioPath /*= NULL */ );
HRESULT CMusicSegmentStop(CMusicSegment *this, DWORD dwFlags /*= 0 */ );
HRESULT CMusicSegmentDownload(CMusicSegment *this, IDirectMusicAudioPath8 *pAudioPath /*= NULL */ );
HRESULT CMusicSegmentUnload(CMusicSegment *this, IDirectMusicAudioPath8 *pAudioPath /*= NULL */ );
BOOL CMusicSegmentIsPlaying(CMusicSegment *this);
inline IDirectMusicSegment8 *CMusicSegmentGetSegment(CMusicSegment *this)
{
	return this->m_pSegment;
}

//-----------------------------------------------------------------------------
// Name: class CMusicScript
// Desc: Encapsulates functionality of an IDirectMusicScript
//-----------------------------------------------------------------------------
typedef struct CMusicScript
{
    IDirectMusicScript8*      m_pScript;
    IDirectMusicLoader8*      m_pLoader;
    IDirectMusicPerformance8* m_pPerformance;
} CMusicScript;

CMusicScript *CMusicScriptNew(IDirectMusicPerformance8 *pPerformance, IDirectMusicLoader8 *pLoader, IDirectMusicScript8 *pScript);
void CMusicScriptDelete(CMusicScript *);
HRESULT CMusicScriptCallRoutine(CMusicScript *this, TCHAR *strRoutine);
HRESULT CMusicScriptSetVariableNumber(CMusicScript *this, TCHAR *strVariable, LONG lValue);
HRESULT CMusicScriptGetVariableNumber(CMusicScript *this, TCHAR *strVariable, LONG *plValue);
__forceinline IDirectMusicScript8 *CMusicScriptGetScript(CMusicScript *this)
{
	return this->m_pScript;
}

#endif // DMUTIL_H
