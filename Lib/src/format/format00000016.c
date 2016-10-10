// Created file "Lib\src\format\format"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(MetaDataTypeLibImportNamespace, 0xf17ff889, 0x5a63, 0x11d3, 0x9f, 0xf2, 0x00, 0xc0, 0x4f, 0xf7, 0x43, 0x1a);

