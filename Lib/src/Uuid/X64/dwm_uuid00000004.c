// Created file "Lib\src\Uuid\X64\dwm_uuid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IDWMPixelFormat, 0x18a0e88e, 0x19aa, 0x4455, 0xb0, 0xcf, 0x98, 0xcb, 0xea, 0x89, 0x86, 0x3b);

