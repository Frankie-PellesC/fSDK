/*+@@file@@----------------------------------------------------------------*//*!
 \file		exposeenums2managed.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jun 19 19:05:31 2016
 \date		Modified on Sun Jun 19 19:05:31 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifdef MANAGED_ENUMS
#ifndef _MANAGED
#error "you can only generate managed enums when compiling managed code"
#endif
#define ENUM typedef public enum class
#define ENUMG(g) ENUM
#define ENUM16 ENUM
#define FLAGS [System::Flags] ENUM
#define FLAGS16 [System::Flags] ENUM16
#define TAG(x) x
#define RATLEVEL(x) EnTvRat_GenericLevel::##x
#define RATATTR(x) BfEnTvRat_GenericAttributes::##x
#ifdef USING_EHRECVR_NAMESPACE
#define EHRECVR_MGD_OUTER_NAMESPACE Microsoft::MediaCenter::TV::Tuners
#define EHRECVR_MGD_NAMESPACE(x) EHRECVR_MGD_OUTER_NAMESPACE##::##x
#define ANALOG_VIDEO_STANDARD_NAMESPACE(x) EHRECVR_MGD_NAMESPACE(AnalogVideoStandard::##x)
#else
#define EHRECVR_MGD_NAMESPACE(x) x
#define ANALOG_VIDEO_STANDARD_NAMESPACE(x) x
#endif
#else
#define V1_ENUM
#define V1_ENUMG(g)
#define RATLEVEL(x) x
#define RATATTR(x) x
#define ENUM typedef V1_ENUM enum
#define ENUMG(g) typedef V1_ENUMG(g) enum
#define ENUM16 typedef enum
#define FLAGS ENUM
#define FLAGS16 ENUM16
#define TAG(x) tag##x
#define EHRECVR_MGD_NAMESPACE(x) x
#define ANALOG_VIDEO_STANDARD_NAMESPACE(x) x
#endif
