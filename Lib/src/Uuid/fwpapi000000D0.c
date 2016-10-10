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

DEFINE_GUID(FWPM_CALLOUT_IPSEC_INBOUND_TUNNEL_ALE_ACCEPT_V6, 0xa1e392d3, 0x72ac, 0x47bb, 0x87, 0xa7, 0x01, 0x22, 0xc6, 0x94, 0x34, 0xab);

