// Created file "Lib\src\Uuid\X64\wdmguids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_PNP_POWER_SETTING_CHANGE, 0x29c69b3e, 0xc79a, 0x43bf, 0xbb, 0xde, 0xa9, 0x32, 0xfa, 0x1b, 0xea, 0x7e);

