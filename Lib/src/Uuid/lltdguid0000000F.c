// Created file "Lib\src\Uuid\lltdguid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_LLTD_PROP_IP4ADDRESS, 0x2ad8768d, 0x0c88, 0x45e4, 0xb1, 0x74, 0x0e, 0xd9, 0x28, 0x25, 0x41, 0x27);

