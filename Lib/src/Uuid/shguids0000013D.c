// Created file "Lib\src\Uuid\shguids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(SYNCMGR_OBJECTID_Icon, 0x6dbc85c3, 0x5d07, 0x4c72, 0xa7, 0x77, 0x7f, 0xec, 0x78, 0x07, 0x2c, 0x06);

