// Created file "Lib\src\Uuid\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(PKEY_Photo_BrightnessNumerator, 0x9e7d118f, 0xb314, 0x45a0, 0x8c, 0xfb, 0xd6, 0x54, 0xb9, 0x17, 0xc9, 0xe9);

