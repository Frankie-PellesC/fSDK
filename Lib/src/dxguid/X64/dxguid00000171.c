// Created file "Lib\src\dxguid\X64\dxguid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_c4f82dd4_cb4e_4ce1_8bdb_ee32d4198269, 0xc4f82dd4, 0xcb4e, 0x4ce1, 0x8b, 0xdb, 0xee, 0x32, 0xd4, 0x19, 0x82, 0x69);

