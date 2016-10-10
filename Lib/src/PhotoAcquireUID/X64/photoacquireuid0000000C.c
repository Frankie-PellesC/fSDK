// Created file "Lib\src\PhotoAcquireUID\X64\photoacquireuid"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_VIDEO_ANNOYANCE_TIMEOUT, 0x82dbcf2d, 0xcd67, 0x40c5, 0xbf, 0xdc, 0x9f, 0x1a, 0x5c, 0xcd, 0x46, 0x63);

