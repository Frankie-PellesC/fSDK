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

DEFINE_GUID(IID_IXMLError, 0x948c5ad3, 0xc58d, 0x11d0, 0x9c, 0x0b, 0x00, 0xc0, 0x4f, 0xc9, 0x9c, 0x8e);

