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

DEFINE_GUID(IID_IProxyProviderWinEventHandler, 0x89592ad4, 0xf4e0, 0x43d5, 0xa3, 0xb6, 0xba, 0xd7, 0xe1, 0x11, 0xb4, 0x35);

