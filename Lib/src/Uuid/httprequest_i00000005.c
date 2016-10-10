// Created file "Lib\src\Uuid\httprequest_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IWinHttpRequestEvents, 0xf97f4e15, 0xb787, 0x4212, 0x80, 0xd1, 0xd3, 0x80, 0xcb, 0xbf, 0x98, 0x2e);

