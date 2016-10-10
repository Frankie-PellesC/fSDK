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

DEFINE_GUID(FWPM_SUBLAYER_IPSEC_FORWARD_OUTBOUND_TUNNEL, 0xa5082e73, 0x8f71, 0x4559, 0x8a, 0x9a, 0x10, 0x1c, 0xea, 0x04, 0xef, 0x87);

