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

DEFINE_GUID(FWPM_CALLOUT_IPSEC_FORWARD_INBOUND_TUNNEL_V6, 0xaf50bec2, 0xc686, 0x429a, 0x88, 0x4d, 0xb7, 0x44, 0x43, 0xe7, 0xb0, 0xb4);

