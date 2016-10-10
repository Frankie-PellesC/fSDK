// Created file "Lib\src\dmoguids\dmoguids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_APPLAUNCH_BUTTON, 0x1a689231, 0x7399, 0x4e9a, 0x8f, 0x99, 0xb7, 0x1f, 0x99, 0x9d, 0xb3, 0xfa);

