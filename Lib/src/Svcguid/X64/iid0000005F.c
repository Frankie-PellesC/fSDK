// Created file "Lib\src\Svcguid\X64\iid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ISecurityCallCtxPrivate, 0x29012f73, 0x8c30, 0x11d1, 0x8e, 0x04, 0x00, 0x80, 0xc7, 0xf8, 0xc2, 0xbf);

