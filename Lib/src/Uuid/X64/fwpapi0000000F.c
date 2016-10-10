// Created file "Lib\src\Uuid\X64\fwpapi"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(FWPM_LAYER_INBOUND_TRANSPORT_V4, 0x5926dfc8, 0xe3cf, 0x4426, 0xa2, 0x83, 0xdc, 0x39, 0x3f, 0x5d, 0x0f, 0x9d);

