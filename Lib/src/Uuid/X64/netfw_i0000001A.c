// Created file "Lib\src\Uuid\X64\netfw_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_NetFwProduct, 0x9d745ed8, 0xc514, 0x4d1d, 0xbf, 0x42, 0x75, 0x1f, 0xed, 0x2d, 0x5a, 0xc7);

