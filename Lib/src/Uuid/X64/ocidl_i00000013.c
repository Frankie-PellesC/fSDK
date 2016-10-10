// Created file "Lib\src\Uuid\X64\ocidl_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IPersistStreamInit, 0x7fd52380, 0x4e07, 0x101b, 0xae, 0x2d, 0x08, 0x00, 0x2b, 0x2e, 0xc7, 0x13);

