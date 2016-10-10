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

DEFINE_GUID(IID_IVMRSurfaceAllocator9, 0x8d5148ea, 0x3f5d, 0x46cf, 0x9d, 0xf1, 0xd1, 0xb8, 0x96, 0xee, 0xdb, 0x1f);

