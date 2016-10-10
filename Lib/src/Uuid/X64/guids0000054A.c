// Created file "Lib\src\Uuid\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(PKEY_Photo_FocalPlaneYResolutionNumerator, 0xa2e541c5, 0x4440, 0x4ba8, 0x86, 0x7e, 0x75, 0xcf, 0xc0, 0x68, 0x28, 0xcd);

