// Created file "Lib\src\Uuid\X64\propkeys"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(PKEY_MusicStackThumbnailCacheIds, 0x733cb147, 0x8b1f, 0x4c48, 0x99, 0x66, 0x19, 0x2f, 0xde, 0x35, 0x3c, 0x75);

