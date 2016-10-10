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

DEFINE_GUID(GUID_LLTD_PROP_IP6ADDRESS, 0x94e379f0, 0xe45e, 0x43ea, 0x8c, 0xd1, 0xdc, 0x1c, 0x7a, 0xf4, 0x97, 0xf1);

