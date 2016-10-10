// Created file "Lib\src\MsXml2\X64\msxml_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IXMLAttribute, 0xd4d4a0fc, 0x3b73, 0x11d1, 0xb2, 0xb4, 0x00, 0xc0, 0x4f, 0xb9, 0x25, 0x96);

