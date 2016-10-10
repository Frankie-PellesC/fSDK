// Created file "Lib\src\Uuid\fwpapi"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(FWPM_LAYER_INBOUND_ICMP_ERROR_V6, 0x65f9bdff, 0x3b2d, 0x4e5d, 0xb8, 0xc6, 0xc7, 0x20, 0x65, 0x1f, 0xe8, 0x98);

