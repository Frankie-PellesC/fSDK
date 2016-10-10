// Created file "Lib\src\Uuid\i_manageaddons"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(LIBID_ManageAddOns, 0x602feba4, 0xf81d, 0x4c6b, 0xaf, 0x54, 0xf3, 0x40, 0x30, 0x10, 0x81, 0x84);

