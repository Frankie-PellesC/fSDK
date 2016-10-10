// Created file "Lib\src\strmiids\X64\strmiids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(FORMAT_CAPTIONED_H264VIDEO, 0xa4efc024, 0x873e, 0x4da3, 0x89, 0x8b, 0x47, 0x4d, 0xdb, 0xd7, 0x9f, 0xd0);

