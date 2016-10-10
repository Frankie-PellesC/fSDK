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

DEFINE_GUID(FWPM_LAYER_INBOUND_IPPACKET_V4_DISCARD, 0xb5a230d0, 0xa8c0, 0x44f2, 0x91, 0x6e, 0x99, 0x1b, 0x53, 0xde, 0xd1, 0xf7);

