// Created file "Lib\src\Uuid\natupnp_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_INATNumberOfEntriesCallback, 0xc83a0a74, 0x91ee, 0x41b6, 0xb6, 0x7a, 0x67, 0xe0, 0xf0, 0x0b, 0xbd, 0x78);

