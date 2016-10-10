// Created file "Lib\src\Uuid\X64\tapi3iid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_BridgeTerminal, 0x8ebae7a3, 0x8943, 0x11d1, 0x96, 0xb8, 0x00, 0xc0, 0x4f, 0xb6, 0xe8, 0x66);

