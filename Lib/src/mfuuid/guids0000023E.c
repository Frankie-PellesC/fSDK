// Created file "Lib\src\mfuuid\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(MF_FULL_TOPO_SERVICE, 0xc0f6e2ce, 0xb802, 0x4df2, 0xbc, 0x8d, 0xa0, 0xa6, 0x7a, 0x99, 0xc9, 0x50);

