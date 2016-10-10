// Created file "Lib\src\Uuid\i_urlmon"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IInternetHostSecurityManager, 0x3af280b6, 0xcb3f, 0x11d0, 0x89, 0x1e, 0x00, 0xc0, 0x4f, 0xb6, 0xbf, 0xc4);

