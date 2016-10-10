// Created file "Lib\src\Uuid\xenroll_i"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_CEnroll2, 0x127698e4, 0xe730, 0x4e5c, 0xa2, 0xb1, 0x21, 0x49, 0x0a, 0x70, 0xc8, 0xa1);

