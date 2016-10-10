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

DEFINE_GUID(GUID_LLTD_PROP_QOSCHARACTERISTICS, 0x7cd2cbb4, 0xbc07, 0x438d, 0x99, 0x2b, 0x5e, 0x33, 0xd2, 0x3e, 0xb8, 0x68);

