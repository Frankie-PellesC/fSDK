// Created file "Lib\src\ScrnSavW\X64\scrnsave"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(szScreenSaverKey, 0x006f0043, 0x006e, 0x0074, 0x72, 0x00, 0x6f, 0x00, 0x6c, 0x00, 0x20, 0x00);

DEFINE_GUID(szPasswordValue, 0x00630053, 0x0072, 0x0065, 0x65, 0x00, 0x6e, 0x00, 0x53, 0x00, 0x61, 0x00);

