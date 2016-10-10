// Created file "Lib\src\Uuid\X64\httprequest_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_WinHttpRequest, 0x2087c2f4, 0x2cef, 0x4953, 0xa8, 0xab, 0x66, 0x77, 0x9b, 0x67, 0x04, 0x95);

