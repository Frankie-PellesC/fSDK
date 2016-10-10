// Created file "Lib\src\Uuid\X64\rtccore_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IRTCBuddyEvent2, 0x484a7f1e, 0x73f0, 0x4990, 0xbf, 0xc2, 0x60, 0xbc, 0x39, 0x78, 0xa7, 0x20);

