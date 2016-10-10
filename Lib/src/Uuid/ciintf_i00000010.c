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

DEFINE_GUID(IID_ICiCPropRetriever, 0x77d9b2da, 0x4401, 0x11d0, 0x8c, 0x91, 0x00, 0x20, 0xaf, 0x1d, 0x74, 0x0e);

