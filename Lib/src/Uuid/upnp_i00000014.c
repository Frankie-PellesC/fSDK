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

DEFINE_GUID(CLSID_UPnPDevice, 0xa32552c5, 0xba61, 0x457a, 0xb5, 0x9a, 0xa2, 0x56, 0x1e, 0x12, 0x5e, 0x33);

