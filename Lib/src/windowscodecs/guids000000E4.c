// Created file "Lib\src\windowscodecs\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_MetadataFormatXMPStruct, 0x22383cf1, 0xed17, 0x4e2e, 0xaf, 0x17, 0xd8, 0x5b, 0x8f, 0x6b, 0x30, 0xd0);

