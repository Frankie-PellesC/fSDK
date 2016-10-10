// Created file "Lib\src\mfuuid\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(MFWMIGUID_PREDICTED_VIDEO_SAMPLETIME_EVENT, 0x6e2e9480, 0x8622, 0x49c9, 0xbf, 0xb2, 0xd9, 0xe3, 0xa1, 0x4b, 0x27, 0xd3);

