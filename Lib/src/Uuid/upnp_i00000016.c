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

DEFINE_GUID(CLSID_UPnPService, 0xc624ba95, 0xfbcb, 0x4409, 0x8c, 0x03, 0x8c, 0xce, 0xec, 0x53, 0x3e, 0xf1);

