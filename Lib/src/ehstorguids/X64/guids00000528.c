// Created file "Lib\src\ehstorguids\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(PKEY_Photo_DigitalZoomDenominator, 0x745baf0e, 0xe5c1, 0x4cfb, 0x8a, 0x1b, 0xd0, 0x31, 0xa0, 0xa5, 0x23, 0x93);

