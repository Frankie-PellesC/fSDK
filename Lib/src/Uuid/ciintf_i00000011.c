// Created file "Lib\src\Uuid\ciintf_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ICiCDeferredPropRetriever, 0xc273af70, 0x6d72, 0x11d0, 0x8d, 0x64, 0x00, 0xa0, 0xc9, 0x08, 0xdb, 0xf1);

