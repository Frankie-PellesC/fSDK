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

DEFINE_GUID(IID_IRTCEnumWatchers, 0xa87d55d7, 0xdb74, 0x4ed1, 0x9c, 0xa4, 0x77, 0xa0, 0xe4, 0x1b, 0x41, 0x3e);

