// Created file "Lib\src\Uuid\X64\lltdguid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_LLTD_PROP_HARDWAREID, 0x3919231c, 0x38f5, 0x4099, 0x9b, 0x62, 0xaf, 0xc6, 0x50, 0xd1, 0x82, 0xa6);

