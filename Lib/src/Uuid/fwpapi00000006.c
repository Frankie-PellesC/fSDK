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

DEFINE_GUID(FWPM_LAYER_INBOUND_IPPACKET_V6_DISCARD, 0xbb24c279, 0x93b4, 0x47a2, 0x83, 0xad, 0xae, 0x16, 0x98, 0xb5, 0x08, 0x85);

