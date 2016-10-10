// Created file "Lib\src\windowscodecs\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_WICXMPBagMetadataReader, 0xe7e79a30, 0x4f2c, 0x4fab, 0x8d, 0x00, 0x39, 0x4f, 0x2d, 0x6b, 0xbe, 0xbe);

