// Created file "Lib\src\msxml6\X64\msxml6_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_SAXXMLReader40, 0x7c6e29bc, 0x8b8b, 0x4c3d, 0x85, 0x9e, 0xaf, 0x6c, 0xd1, 0x58, 0xbe, 0x0f);

