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

DEFINE_GUID(IID_IMXRContentHandler, 0xbac05b74, 0xcf58, 0x4b65, 0xbd, 0x61, 0x0a, 0xca, 0x1d, 0x0b, 0xc0, 0x8e);

