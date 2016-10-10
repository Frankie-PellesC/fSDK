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

DEFINE_GUID(FWPM_LAYER_OUTBOUND_ICMP_ERROR_V6_DISCARD, 0x65f2e647, 0x8d0c, 0x4f47, 0xb1, 0x9b, 0x33, 0xa4, 0xd3, 0xf1, 0x35, 0x7c);

