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

DEFINE_GUID(MF_TIME_FORMAT_BYTESTREAM_OFFSET, 0xe7378117, 0xa4a8, 0x4d6c, 0x8c, 0x63, 0xdf, 0xdb, 0x57, 0x26, 0x57, 0xca);

