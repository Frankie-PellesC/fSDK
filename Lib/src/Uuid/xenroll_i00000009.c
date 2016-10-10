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

DEFINE_GUID(IID_IEnroll4, 0xf8053fe5, 0x78f4, 0x448f, 0xa0, 0xdb, 0x41, 0xd6, 0x1b, 0x73, 0x44, 0x6b);

