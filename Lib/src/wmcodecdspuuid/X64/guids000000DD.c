// Created file "Lib\src\wmcodecdspuuid\X64\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(CLSID_CAsfTocParser, 0x9b77c0f2, 0x8735, 0x46c5, 0xb9, 0x0f, 0x5f, 0x0b, 0x30, 0x3e, 0xf6, 0xab);

