// Created file "Lib\src\Uuid\X64\ndfapi"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_NDFEtw, 0xa11db3dc, 0x5ff6, 0x4a0b, 0xae, 0xe6, 0x29, 0xbc, 0xac, 0x1e, 0x11, 0xe0);

