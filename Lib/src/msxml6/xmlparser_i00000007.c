// Created file "Lib\src\msxml6\xmlparser_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IXMLParser3, 0xc9407b83, 0x04e7, 0x496a, 0xaf, 0x26, 0xa5, 0x67, 0x7a, 0xef, 0xcc, 0x86);

