// Created file "Lib\src\MsXml2\X64\xmlparser_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IXMLParser, 0xd242361e, 0x51a0, 0x11d2, 0x9c, 0xaf, 0x00, 0x60, 0xb0, 0xec, 0x3d, 0x39);

