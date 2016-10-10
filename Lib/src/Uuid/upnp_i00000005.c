// Created file "Lib\src\Uuid\upnp_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IUPnPHttpHeaderControl, 0x0405af4f, 0x8b5c, 0x447c, 0x80, 0xf2, 0xb7, 0x59, 0x84, 0xa3, 0x1f, 0x3c);

