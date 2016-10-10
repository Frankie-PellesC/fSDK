// Created file "Lib\src\Uuid\X64\natupnp_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IDynamicPortMapping, 0x4fc80282, 0x23b6, 0x4378, 0x9a, 0x27, 0xcd, 0x8f, 0x17, 0xc9, 0x40, 0x0c);

