// Created file "Lib\src\Uuid\X64\netfwv6_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_INetFwV6Mgr, 0x1c3fedf7, 0x1b2b, 0x4550, 0xa9, 0x64, 0x15, 0x11, 0xdf, 0x21, 0x63, 0xc8);

