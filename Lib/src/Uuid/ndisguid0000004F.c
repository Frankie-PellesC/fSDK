// Created file "Lib\src\Uuid\ndisguid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_NDIS_RECEIVE_FILTER_ENUM_FILTERS, 0x3f2c141d, 0x83bc, 0x11dd, 0x94, 0xb8, 0x00, 0x1d, 0x09, 0x16, 0x2b, 0xc3);

