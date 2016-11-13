// Created file "Lib\src\dxguid\X64\dxguid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(DDVPTYPE_E_HREFH_VREFH, 0x54f39980, 0xda60, 0x11cf, 0x9b, 0x06, 0x00, 0xa0, 0xc9, 0x03, 0xa3, 0xb8);

