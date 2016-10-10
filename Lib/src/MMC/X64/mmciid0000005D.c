// Created file "Lib\src\MMC\X64\mmciid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(IID_ICustomInitializationWizard, 0x15363ca4, 0xe235, 0x44f2, 0x87, 0x8c, 0xc5, 0xe6, 0x5b, 0xc3, 0x42, 0x8a);

