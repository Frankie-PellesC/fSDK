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

DEFINE_GUID(FWPM_SUBLAYER_IPSEC_DOSP, 0xe076d572, 0x5d3d, 0x48ef, 0x80, 0x2b, 0x90, 0x9e, 0xdd, 0xb0, 0x98, 0xbd);

