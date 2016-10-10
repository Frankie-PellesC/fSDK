// Created file "Lib\src\MsXml2\msxml_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IXMLDocument, 0xf52e2b61, 0x18a1, 0x11d1, 0xb1, 0x05, 0x00, 0x80, 0x5f, 0x49, 0x91, 0x6b);

