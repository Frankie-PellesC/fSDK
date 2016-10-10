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

DEFINE_GUID(MF_TOPOLOGY_DXVA_MODE, 0x1e8d34f6, 0xf5ab, 0x4e23, 0xbb, 0x88, 0x87, 0x4a, 0xa3, 0xa1, 0xa7, 0x4d);

