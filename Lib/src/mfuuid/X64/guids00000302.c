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

DEFINE_GUID(ME_MEDIA_SOURCE_STARTED, 0xca47ac28, 0xb6fa, 0x4ce1, 0xb0, 0xfb, 0x8a, 0x02, 0x2c, 0x96, 0xa7, 0x5f);

