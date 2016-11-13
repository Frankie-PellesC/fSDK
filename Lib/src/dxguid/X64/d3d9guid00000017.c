// Created file "Lib\src\dxguid\X64\d3d9guid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_DISK_SUBGROUP, 0x0012ee47, 0x9041, 0x4b5d, 0x9b, 0x77, 0x53, 0x5f, 0xba, 0x8b, 0x14, 0x42);

