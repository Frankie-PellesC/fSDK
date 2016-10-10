// Created file "Lib\src\Uuid\X64\i_ratingsp"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IRatingNotification, 0x639447bd, 0xb2d3, 0x44b9, 0x9f, 0xb0, 0x51, 0x0f, 0x23, 0xcb, 0x45, 0xe4);

