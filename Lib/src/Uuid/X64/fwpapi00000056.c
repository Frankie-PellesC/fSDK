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

DEFINE_GUID(FWPM_SUBLAYER_IPSEC_TUNNEL, 0x83f299ed, 0x9ff4, 0x4967, 0xaf, 0xf4, 0xc3, 0x09, 0xf4, 0xda, 0xb8, 0x27);

