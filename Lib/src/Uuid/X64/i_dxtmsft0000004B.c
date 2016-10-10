// Created file "Lib\src\Uuid\X64\i_dxtmsft"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_CrZigzag, 0xe6e73d20, 0x0c8a, 0x11d2, 0xa4, 0x84, 0x00, 0xc0, 0x4f, 0x8e, 0xfb, 0x69);

