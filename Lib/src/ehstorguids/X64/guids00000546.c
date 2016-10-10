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

DEFINE_GUID(PKEY_Photo_FocalPlaneXResolutionDenominator, 0x0933f3f5, 0x4786, 0x4f46, 0xa8, 0xe8, 0xd6, 0x4d, 0xd3, 0x7f, 0xa5, 0x21);

