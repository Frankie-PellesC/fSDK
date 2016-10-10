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

DEFINE_GUID(IID_IRTCReInviteEvent, 0x11558d84, 0x204c, 0x43e7, 0x99, 0xb0, 0x20, 0x34, 0xe9, 0x41, 0x7f, 0x7d);

