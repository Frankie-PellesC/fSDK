// Created file "Lib\src\amstrmid\strmiids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IXml2Dex, 0x18c628ed, 0x962a, 0x11d2, 0x8d, 0x08, 0x00, 0xa0, 0xc9, 0x44, 0x1e, 0x20);

