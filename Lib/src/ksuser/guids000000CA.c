// Created file "Lib\src\ksuser\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(KSNODETYPE_DYN_RANGE_COMPRESSOR, 0x08c8a6a8, 0x601f, 0x4af8, 0x87, 0x93, 0xd9, 0x05, 0xff, 0x4c, 0xa9, 0x7d);

