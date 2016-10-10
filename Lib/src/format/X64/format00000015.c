// Created file "Lib\src\format\X64\format"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(MetaDataGenerateTCEAdapters, 0xdcc9de90, 0x4151, 0x11d3, 0x88, 0xd6, 0x00, 0x90, 0x27, 0x54, 0xc4, 0x3a);

