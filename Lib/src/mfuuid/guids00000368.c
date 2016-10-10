// Created file "Lib\src\mfuuid\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(MDE_DEFAULT_WMAUDIOVIDEOPROFILE, 0x8d514a79, 0xadbf, 0x4d0a, 0x8f, 0x9d, 0xf9, 0x23, 0xf2, 0x8d, 0xca, 0xd5);

