// Created file "Lib\src\shell32\shguid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(SID_SMenuBandBKContextMenu, 0x164bbd86, 0x1d0d, 0x4de0, 0x9a, 0x3b, 0xd9, 0x72, 0x96, 0x47, 0xc2, 0xb8);

