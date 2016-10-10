// Created file "Lib\src\wmcodecdspuuid\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_CAviTocParser, 0x3adce5cc, 0x13c8, 0x4573, 0xb3, 0x28, 0xed, 0x43, 0x8e, 0xb6, 0x94, 0xf9);

