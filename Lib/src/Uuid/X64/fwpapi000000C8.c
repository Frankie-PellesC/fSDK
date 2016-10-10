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

DEFINE_GUID(FWPM_CALLOUT_IPSEC_OUTBOUND_TUNNEL_V6, 0xf1835363, 0xa6a5, 0x4e62, 0xb1, 0x80, 0x23, 0xdb, 0x78, 0x9d, 0x8d, 0xa6);

