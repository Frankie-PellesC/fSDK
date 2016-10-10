// Created file "Lib\src\Uuid\tapi3iid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_MediaStreamTerminal, 0xe2f7aef7, 0x4971, 0x11d1, 0xa6, 0x71, 0x00, 0x60, 0x97, 0xc9, 0xa2, 0xe8);

