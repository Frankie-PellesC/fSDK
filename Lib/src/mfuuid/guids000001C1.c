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

DEFINE_GUID(MF_SAMPLEGRABBERSINK_SAMPLE_TIME_OFFSET, 0x62e3d776, 0x8100, 0x4e03, 0xa6, 0xe8, 0xbd, 0x38, 0x57, 0xac, 0x9c, 0x47);

