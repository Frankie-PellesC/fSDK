// Created file "Lib\src\format\format"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_ForceIEnumerable, 0xb64784eb, 0xd8d4, 0x4d9b, 0x9a, 0xcd, 0x0e, 0x30, 0x80, 0x64, 0x26, 0xf7);

