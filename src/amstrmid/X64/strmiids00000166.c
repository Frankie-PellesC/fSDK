// Created file "Lib\src\amstrmid\X64\strmiids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(AM_KSPROPSETID_CopyProt, 0x0e8a0a40, 0x6aef, 0x11d0, 0x9e, 0xd0, 0x00, 0xa0, 0x24, 0xca, 0x19, 0xb3);

