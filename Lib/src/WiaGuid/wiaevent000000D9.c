// Created file "Lib\src\WiaGuid\wiaevent"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(WIA_EVENT_SCAN_IMAGE2, 0xfc4767c1, 0xc8b3, 0x48a2, 0x9c, 0xfa, 0x2e, 0x90, 0xcb, 0x3d, 0x35, 0x90);

