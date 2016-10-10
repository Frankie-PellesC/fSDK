// Created file "Lib\src\Uuid\X64\uiribbon_uuid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(LIBID_UIRibbon, 0x942f35c2, 0xe83b, 0x45ef, 0xb0, 0x85, 0xac, 0x29, 0x5d, 0xd6, 0x3d, 0x5b);

