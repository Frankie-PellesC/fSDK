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

DEFINE_GUID(PKEY_Photo_LensManufacturer, 0xe6ddcaf7, 0x29c5, 0x4f0a, 0x9a, 0x68, 0xd1, 0x94, 0x12, 0xec, 0x70, 0x90);

