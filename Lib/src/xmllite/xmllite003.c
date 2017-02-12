// Created file "Lib\src\xmllite\xmllite"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IXmlReader,   0x7279fc81, 0x709d, 0x4095, 0xb6, 0x3d, 0x69, 0xfe, 0x4b, 0x0d, 0x90, 0x30);

DEFINE_GUID(IID_IXmlResolver, 0x7279FC82, 0x709d, 0x4095, 0xb6, 0x3d, 0x69, 0xfe, 0x4b, 0x0d, 0x90, 0x30);

DEFINE_GUID(IID_IXmlWriter,   0x7279FC88, 0x709d, 0x4095, 0xb6, 0x3d, 0x69, 0xfe, 0x4b, 0x0d, 0x90, 0x30);
