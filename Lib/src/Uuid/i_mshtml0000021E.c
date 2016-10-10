// Created file "Lib\src\Uuid\i_mshtml"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IActiveIMMApp, 0x08c0e040, 0x62d1, 0x11d1, 0x93, 0x26, 0x00, 0x60, 0xb0, 0x67, 0xb8, 0x6e);

