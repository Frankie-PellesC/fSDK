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

DEFINE_GUID(MFMPEGSampleExtension_MPEG_90KHZ_CLOCK_OFFSET, 0x3a27acbf, 0x1c84, 0x40f0, 0x93, 0x81, 0x6b, 0x75, 0x56, 0x91, 0xe9, 0x0f);

