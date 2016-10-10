// Created file "Lib\src\MsXml2\X64\msxml2_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ISAXContentHandler, 0x1545cdfa, 0x9e4e, 0x4497, 0xa8, 0xa4, 0x2b, 0xf7, 0xd0, 0x11, 0x2c, 0x44);

