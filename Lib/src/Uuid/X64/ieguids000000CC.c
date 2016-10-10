// Created file "Lib\src\Uuid\X64\ieguids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CATID_DesignTimeUIActivatableControl, 0xf2bb56d1, 0xdb07, 0x11d1, 0xaa, 0x6b, 0x00, 0x60, 0x97, 0xdb, 0x95, 0x39);

