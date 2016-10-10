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

DEFINE_GUID(IID_ICEnroll4, 0xc1f1188a, 0x2eb5, 0x4a80, 0x84, 0x1b, 0x7e, 0x72, 0x9a, 0x35, 0x6d, 0x90);

