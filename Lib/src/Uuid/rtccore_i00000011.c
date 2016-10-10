// Created file "Lib\src\Uuid\rtccore_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IRTCProfileEvent2, 0x62e56edc, 0x03fa, 0x4121, 0x94, 0xfb, 0x23, 0x49, 0x3f, 0xd0, 0xae, 0x64);

