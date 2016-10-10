// Created file "Lib\src\Uuid\X64\i_mshtml"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IHTMLLocation, 0x163bb1e0, 0x6e00, 0x11cf, 0x83, 0x7a, 0x48, 0xdc, 0x04, 0xc1, 0x00, 0x00);

