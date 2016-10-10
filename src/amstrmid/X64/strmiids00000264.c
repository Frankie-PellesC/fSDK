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

DEFINE_GUID(CODECAPI_AVEncMPVGenerateHeaderPicExt, 0x1b8464ab, 0x944f, 0x45f0, 0xb7, 0x4e, 0x3a, 0x58, 0xda, 0xd1, 0x1f, 0x37);

