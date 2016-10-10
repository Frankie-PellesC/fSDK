// Created file "Lib\src\msxml6\X64\xmldocnf_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IXMLDocumentNotify, 0x53be4f42, 0x3602, 0x11d2, 0x80, 0x1b, 0x00, 0x00, 0xf8, 0x7a, 0x6c, 0xdf);

