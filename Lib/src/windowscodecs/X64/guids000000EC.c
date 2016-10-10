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

DEFINE_GUID(GUID_MetadataFormatJpegChrominance, 0xf73d0dcf, 0xcec6, 0x4f85, 0x9b, 0x0e, 0x1c, 0x39, 0x56, 0xb1, 0xbe, 0xf7);

