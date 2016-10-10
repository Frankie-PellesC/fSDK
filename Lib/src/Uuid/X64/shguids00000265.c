// Created file "Lib\src\Uuid\X64\shguids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_PropSysBothClassFactory, 0x76765b11, 0x3f95, 0x4af2, 0xac, 0x9d, 0xea, 0x55, 0xd8, 0x99, 0x4f, 0x1a);

