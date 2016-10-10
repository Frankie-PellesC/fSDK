// Created file "Lib\src\Uuid\i_dxtmsft"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IDXTRandomBars, 0x8a6d2022, 0x4a8f, 0x4eb9, 0xbb, 0x25, 0xaa, 0x05, 0x20, 0x1f, 0x9c, 0x84);

