/*+@@file@@----------------------------------------------------------------*//*!
 \file		PlayMMConsole.c
 \par Description 
            This program demonstrates the use of FMM directshow library 
            reproducer in consolle mode
 \par  Status: 
            
 \par Project: 
            DirectShow Multimedia library
 \date		Created  on Mon Dec 29 01:29:28 2014
 \date		Modified on Mon Dec 29 01:29:28 2014
 \author	Frankie
\*//*-@@file@@----------------------------------------------------------------*/
#if 0
#define UNICODE
#define _UNICODE
#endif

#define __STDC_WANT_LIB_EXT2__ 1
typedef struct FILE FILE;	//Due to PellesC bug in 'wchar.h'
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include "MM.h"

#define SV_LOADED 1
#define SV_PLAYING 2
#define SV_STOPPED 3
#define SV_PAUSED 4

#ifdef UNICODE
int wmain(int argc, wchar_t* argv[])
#else
int __cdecl main(int argc, char* argv[])
#endif
{
	MM_Initialize();

	printf("Enter the file path and name: ");

	size_t len = 0;
#ifdef UNICODE
	wchar_t *path = NULL;
	int nChars = getwline(&path, &len, stdin);
#else
	char *path = NULL;
	int nChars = getline(&path, &len, stdin);
#endif
	path[nChars-1] = '\0';

	HMMEDIA hMm;

	hMm = MM_Create();

	int status = 0;
	if(MM_Load(hMm, path))
	{
		status = SV_LOADED;
	}
	else
	{
		printf("File cannot be loaded!\nProgram exited!");
		return 0;
	}

	if(MM_Play(hMm))
	{
		status = SV_PLAYING;
	}
	else
	{
		printf("File cannot be played!\nProgram exited!");
		return 0;
	}

	printf("Enter s to stop or p to pause or q to quit: ");

	while(TRUE)
	{
		LONG evCode=0;
		if(MM_WaitForCompletion(hMm, 0, &evCode))
		{
			printf("Playing has stopped!\nProgram exited!");
			return 0;
		}

#ifdef UNICODE
		wchar_t action = getwchar();
		getwchar();
#else
		char action = getchar();
		getchar();
#endif

		if(action == 'q' || action == 'Q')
		{
			if(status == SV_PLAYING)
				MM_Stop(hMm);

			printf("Program quitting!\n");
			CoUninitialize();
			return 0;
		}
		else if(status == SV_PLAYING && (action == 's' || action == 'S'))
		{
			if(MM_Stop(hMm))
			{
				status = SV_STOPPED;
				printf("Playing is stopped!\nEnter l to play: ");
			}
			else
			{
				printf("File cannot be stopped!");
			}
		}
		else if(status == SV_PLAYING && (action == 'p' || action == 'P'))
		{
			if(MM_Pause(hMm))
			{
				status = SV_PAUSED;
				printf("Playing is paused!\nEnter r to resume: ");
			}
			else
			{
				printf("File cannot be paused!");
			}
		}
		else if(status == SV_PAUSED && (action == 'r' || action == 'R'))
		{
			if(MM_Play(hMm))
			{
				status = SV_PLAYING;
				printf("Playing is resumed!\nEnter s to stop or p to pause: ");
			}
			else
			{
				printf("File cannot be resumed!");
			}
		}
		else if(status == SV_STOPPED && (action == 'l' || action == 'L'))
		{
			if(MM_Play(hMm))
			{
				status = SV_PLAYING;
				printf("Playing is restarted!\nEnter s to stop or p to pause: ");
			}
			else
			{
				printf("File cannot be restarted!");
			}
		}
		else
		{
			printf("You have entered a invalid key!\n");

		}

	}
	return 0;
}

