// Created file "Lib\src\MsXml2\msxml2_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_SAXAttributes, 0x4dd441ad, 0x526d, 0x4a77, 0x9f, 0x1b, 0x98, 0x41, 0xed, 0x80, 0x2f, 0xb0);

