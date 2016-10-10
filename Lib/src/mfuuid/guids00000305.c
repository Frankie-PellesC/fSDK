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

DEFINE_GUID(ME_MEDIA_SOURCE_SEEKED, 0x3244faa1, 0xfbf5, 0x4e0a, 0x9d, 0xfe, 0x71, 0x35, 0xe8, 0x0f, 0x26, 0xc1);

