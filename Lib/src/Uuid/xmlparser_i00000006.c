// Created file "Lib\src\Uuid\xmlparser_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IXMLParser2, 0x50fb5b1a, 0xa75c, 0x4ff4, 0x86, 0xb2, 0x14, 0xc6, 0x21, 0x89, 0xe2, 0xcc);

