// Created file "Lib\src\Uuid\X64\imapi2uuid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_IFsiFileItem2, 0x199d0c19, 0x11e1, 0x40eb, 0x8e, 0xc2, 0xc8, 0xc8, 0x22, 0xa0, 0x77, 0x92);

