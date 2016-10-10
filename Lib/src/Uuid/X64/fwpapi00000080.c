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

DEFINE_GUID(FWPM_CONDITION_IP_PHYSICAL_NEXTHOP_INTERFACE, 0xf09bd5ce, 0x5150, 0x48be, 0xb0, 0x98, 0xc2, 0x51, 0x52, 0xfb, 0x1f, 0x92);

