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

DEFINE_GUID(MFNETVROOT_NETSESSIONFACTORYPTR, 0x12f28b1a, 0x90b1, 0x41a8, 0x8c, 0x1c, 0x4a, 0x84, 0xff, 0x3a, 0x2a, 0xf2);

