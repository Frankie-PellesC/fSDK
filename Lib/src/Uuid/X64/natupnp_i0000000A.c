// Created file "Lib\src\Uuid\X64\natupnp_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IStaticPortMapping, 0x6f10711f, 0x729b, 0x41e5, 0x93, 0xb8, 0xf2, 0x1d, 0x0f, 0x81, 0x8d, 0xf1);

