// Created file "Lib\src\Uuid\X64\ciintf_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ICiCAdviseStatus, 0xca05734a, 0x1218, 0x11d3, 0xae, 0x7a, 0x00, 0xc0, 0x4f, 0x72, 0xf8, 0x31);

