// Created file "Lib\src\Uuid\X64\i_webevnts"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IWebBrowserEventsUrlService, 0x87cc5d04, 0xeafa, 0x4833, 0x98, 0x20, 0x8f, 0x98, 0x65, 0x30, 0xcc, 0x00);

