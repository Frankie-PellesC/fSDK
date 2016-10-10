// Created file "Lib\src\Uuid\shguids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_SharingListener, 0xeb6b4457, 0xf013, 0x4e5a, 0x9b, 0x05, 0x1d, 0x44, 0xe4, 0xd6, 0xfa, 0xeb);

