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

DEFINE_GUID(FWPM_LAYER_OUTBOUND_IPPACKET_V4_DISCARD, 0x08e4bcb5, 0xb647, 0x48f3, 0x95, 0x3c, 0xe5, 0xdd, 0xbd, 0x03, 0x93, 0x7e);

