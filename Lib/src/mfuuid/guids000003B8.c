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

DEFINE_GUID(MFNETSESSION_LINK_BANDWIDTH, 0x9df4be5a, 0xb3d1, 0x4b31, 0xb1, 0xac, 0xdb, 0x2d, 0xcf, 0x70, 0x45, 0x81);

