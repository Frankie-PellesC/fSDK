// Created file "Lib\src\Uuid\X64\ieguids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(OID_INIPropStorage, 0x045601c7, 0xf5f2, 0x4c1b, 0x9b, 0x1a, 0x18, 0x40, 0x2b, 0x6b, 0x57, 0x96);

