// Created file "Lib\src\mfuuid\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(MFWMIGUID_VIDEO_FRAME_GLITCH_EVENT, 0xa48f85e2, 0x8317, 0x49fb, 0xba, 0x3f, 0x93, 0x6e, 0x62, 0x7b, 0x98, 0xfb);

