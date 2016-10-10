// Created file "Lib\src\PhotoAcquireUID\guids"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(LIBID_PhotoAcquireObjects, 0x00f25ae8, 0x3625, 0x4e34, 0x92, 0xd4, 0xf0, 0x91, 0x8c, 0xf0, 0x10, 0xee);

