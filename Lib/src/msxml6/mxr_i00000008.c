// Created file "Lib\src\msxml6\mxr_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_MXXMLReader40, 0x00b7e0ab, 0x817a, 0x44ad, 0xa0, 0x4b, 0xd1, 0x14, 0x8d, 0x52, 0x41, 0x36);

