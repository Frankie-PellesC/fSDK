// Created file "Lib\src\Uuid\shguids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IMemoryMappedHeap, 0x8f2b137c, 0x34bb, 0x490d, 0x9c, 0xf8, 0xc8, 0xc4, 0xe8, 0x18, 0x4d, 0xe6);

