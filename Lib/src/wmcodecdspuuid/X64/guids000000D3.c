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

DEFINE_GUID(MEDIASUBTYPE_DTS_HD, 0xa2e58eb7, 0x0fa9, 0x48bb, 0xa4, 0x0c, 0xfa, 0x0e, 0x15, 0x6d, 0x06, 0x45);

