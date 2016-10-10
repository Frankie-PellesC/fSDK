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

DEFINE_GUID(FWPM_CALLOUT_IPSEC_OUTBOUND_TRANSPORT_V6, 0x38d87722, 0xad83, 0x4f11, 0xa9, 0x1f, 0xdf, 0x0f, 0xb0, 0x77, 0x22, 0x5b);

