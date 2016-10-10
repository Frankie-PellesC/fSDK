// Created file "Lib\src\Uuid\X64\rend_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_Rendezvous, 0xf1029e5b, 0xcb5b, 0x11d0, 0x8d, 0x59, 0x00, 0xc0, 0x4f, 0xd9, 0x1a, 0xc0);

