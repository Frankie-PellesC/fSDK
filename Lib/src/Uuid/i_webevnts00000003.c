// Created file "Lib\src\Uuid\i_webevnts"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IWebBrowserEventsService, 0x54a8f188, 0x9ebd, 0x4795, 0xad, 0x16, 0x9b, 0x49, 0x45, 0x11, 0x96, 0x36);

