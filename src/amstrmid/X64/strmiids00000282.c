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

DEFINE_GUID(CODECAPI_AVEncDDLFELowPassFilter, 0xd3b80f6f, 0x9d15, 0x45e5, 0x91, 0xbe, 0x01, 0x9c, 0x3f, 0xab, 0x1f, 0x01);

