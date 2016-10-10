// Created file "Lib\src\Uuid\X64\functiondiscovery"

typedef struct _GUID
{
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} GUID;

#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
        extern const GUID name = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }

DEFINE_GUID(GUID_VIDEO_ADAPTIVE_POWERDOWN, 0x90959d22, 0xd6a1, 0x49b9, 0xaf, 0x93, 0xbc, 0xe8, 0x85, 0xad, 0x33, 0x5b);

