// Created file "Lib\src\Uuid\uiautomationcore_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IProxyProviderWinEventSink, 0x4fd82b78, 0xa43e, 0x46ac, 0x98, 0x03, 0x0a, 0x69, 0x69, 0xc7, 0xc1, 0x83);

