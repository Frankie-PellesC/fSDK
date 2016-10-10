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

DEFINE_GUID(IID_IMXSchemaDeclHandler, 0xfa4bb38c, 0xfaf9, 0x4cca, 0x93, 0x02, 0xd1, 0xdd, 0x0f, 0xe5, 0x20, 0xdb);

