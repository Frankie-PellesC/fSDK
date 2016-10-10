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

DEFINE_GUID(PKEY_Photo_FocalPlaneXResolutionNumerator, 0xdccb10af, 0xb4e2, 0x4b88, 0x95, 0xf9, 0x03, 0x1b, 0x4d, 0x5a, 0xb4, 0x90);

