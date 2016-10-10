// Created file "Lib\src\ksuser\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(KSDATAFORMAT_SUBTYPE_STANDARD_MPEG1_VIDEO, 0x36523b21, 0x8ee5, 0x11d1, 0x8c, 0xa3, 0x00, 0x60, 0xb0, 0x57, 0x66, 0x4a);

