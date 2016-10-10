// Created file "Lib\src\mfuuid\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(MFPKEY_EXATTRIBUTE_SUPPORTED, 0x456fe843, 0x3c87, 0x40c0, 0x94, 0x9d, 0x14, 0x09, 0xc9, 0x7d, 0xab, 0x2c);

