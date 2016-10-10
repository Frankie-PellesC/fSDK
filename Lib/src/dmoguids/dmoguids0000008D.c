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

DEFINE_GUID(CLSID_DMOFilterCategory, 0xbcd5796c, 0xbd52, 0x4d30, 0xab, 0x76, 0x70, 0xf9, 0x75, 0xb8, 0x91, 0x99);

